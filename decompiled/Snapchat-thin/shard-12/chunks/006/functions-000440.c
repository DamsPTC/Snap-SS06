/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1094b4a60; end: 1094b57b3;  */

long * FUN_1094b4a60(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  long **pplVar4;
  long **pplVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  long **pplVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long **pplVar17;
  long lVar18;
  char *pcVar19;
  long **pplVar20;
  long *plVar21;
  ulong uVar22;
  long **pplVar23;
  long *plVar24;
  long *plVar25;
  long *aplStack_158 [2];
  char cStack_141;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long *aplStack_128 [2];
  char cStack_111;
  undefined4 uStack_110;
  undefined1 auStack_108 [24];
  undefined4 uStack_f0;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined4 uStack_b0;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined4 uStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined4 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = 0x6e0000003f;
  *param_1 = 0x3200000100;
  param_1[3] = 0x3f8000003dcccccd;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0x3e6800003e280000;
  pplVar17 = (long **)((long)param_1 + 0x2c);
  *(undefined4 *)pplVar17 = 0;
  *(undefined2 *)(param_1 + 6) = 0x101;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  func_0x000107c31940(aplStack_128,&UNK_10f56ec83);
  FUN_1094a9268(param_2,aplStack_128,param_1);
  if (cStack_111 < '\0') {
    __ZdlPv(aplStack_128[0]);
  }
  func_0x000107c31940(aplStack_128,&UNK_10f56ec8e);
  FUN_1094a9268(param_2,aplStack_128,(long)param_1 + 4);
  if (cStack_111 < '\0') {
    __ZdlPv(aplStack_128[0]);
  }
  func_0x000107c31940(aplStack_128,&UNK_10f56ec9a);
  FUN_1094a9268(param_2,aplStack_128,param_1 + 1);
  if (cStack_111 < '\0') {
    __ZdlPv(aplStack_128[0]);
  }
  func_0x000107c31940(aplStack_128,&UNK_10f56ecaf);
  FUN_1094a9268(param_2,aplStack_128,(long)param_1 + 0xc);
  if (cStack_111 < '\0') {
    __ZdlPv(aplStack_128[0]);
  }
  func_0x000107c31940(aplStack_128,&UNK_10f56ecbf);
  func_0x0001094a6db0(param_2,aplStack_128,param_1 + 3);
  if (cStack_111 < '\0') {
    __ZdlPv(aplStack_128[0]);
  }
  func_0x000107c31940(aplStack_128,&UNK_10f56ecd1);
  func_0x0001094a6db0(param_2,aplStack_128,(long)param_1 + 0x1c);
  if (cStack_111 < '\0') {
    __ZdlPv(aplStack_128[0]);
  }
  func_0x000107c31940(aplStack_128,&UNK_10f56ece4);
  func_0x0001094a6db0(param_2,aplStack_128,(undefined8 *)((long)param_1 + 0x24));
  if (cStack_111 < '\0') {
    __ZdlPv(aplStack_128[0]);
  }
  func_0x000107c31940(aplStack_128,&UNK_10f56ecef);
  func_0x0001094a6db0(param_2,aplStack_128,param_1 + 5);
  if (cStack_111 < '\0') {
    __ZdlPv(aplStack_128[0]);
  }
  func_0x000107c31940(aplStack_128,&UNK_10f56ecfa);
  func_0x0001094a6db0(param_2,aplStack_128,param_1 + 2);
  if (cStack_111 < '\0') {
    __ZdlPv(aplStack_128[0]);
  }
  func_0x000107c31940(aplStack_128,&UNK_10f56ed08);
  func_0x0001094a6db0(param_2,aplStack_128,(long)param_1 + 0x14);
  if (cStack_111 < '\0') {
    __ZdlPv(aplStack_128[0]);
  }
  func_0x000107c31940(aplStack_128,&UNK_10f56ed16);
  FUN_1094b4850(param_2,aplStack_128,pplVar17);
  if (cStack_111 < '\0') {
    __ZdlPv(aplStack_128[0]);
  }
  func_0x000107c31940(aplStack_128,&UNK_10f56ed1e);
  FUN_1094b4850(param_2,aplStack_128,(long)param_1 + 0x2d);
  if (cStack_111 < '\0') {
    __ZdlPv(aplStack_128[0]);
  }
  func_0x000107c31940(aplStack_128,&UNK_10f56ed28);
  FUN_1094b4850(param_2,aplStack_128,(long)param_1 + 0x2e);
  if (cStack_111 < '\0') {
    __ZdlPv(aplStack_128[0]);
  }
  func_0x000107c31940(aplStack_128,&UNK_10f56ed38);
  FUN_1094b4850(param_2,aplStack_128,(long)param_1 + 0x2f);
  if (cStack_111 < '\0') {
    __ZdlPv(aplStack_128[0]);
  }
  func_0x000107c31940(aplStack_128,&UNK_10f56ed47);
  FUN_1094b4850(param_2,aplStack_128,param_1 + 6);
  if (cStack_111 < '\0') {
    __ZdlPv(aplStack_128[0]);
  }
  func_0x000107c31940(aplStack_128,&UNK_10f56ed59);
  FUN_1094b4850(param_2,aplStack_128,(long)param_1 + 0x31);
  if (cStack_111 < '\0') {
    __ZdlPv(aplStack_128[0]);
  }
  func_0x000107c31940(aplStack_128,&UNK_10f56ed6b);
  func_0x0001094b4944(param_2,aplStack_128,param_1 + 8);
  if (cStack_111 < '\0') {
    __ZdlPv(aplStack_128[0]);
  }
  func_0x000107c31940(aplStack_158,&UNK_10f56ed76);
  if ((bRam0000000113732e80 & 1) == 0) {
    iVar3 = 0x13732e80;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      pplVar5 = (long **)0x28;
      __Znwm();
      func_0x000107c31940(aplStack_128,"none");
      uStack_110 = 0;
      func_0x000107c31940(auStack_108,&UNK_10f56edaa);
      uStack_f0 = 1;
      func_0x000107c31940(auStack_e8,&UNK_10f56edb5);
      uStack_d0 = 2;
      pplVar17 = aplStack_128;
      FUN_1094b57b4(pplVar5,aplStack_128,3);
      lVar18 = 0;
      do {
        if ((&cStack_d1)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_e8 + lVar18));
        }
        lVar18 = lVar18 + -0x20;
      } while (lVar18 != -0x60);
      pplRam0000000113732e78 = pplVar5;
      ___cxa_guard_release(0x113732e80);
    }
  }
  pplVar5 = pplRam0000000113732e78;
  plVar24 = param_2;
  FUN_1093781f4(param_2,aplStack_158);
  if ((int)plVar24 != 0) {
    uStack_138 = 0;
    lStack_130 = 0;
    uStack_140 = 0;
    FUN_1094a6b30(aplStack_128,param_2,aplStack_158,&uStack_140);
    if (lStack_130 < 0) {
      __ZdlPv(uStack_140);
    }
    pplVar4 = pplVar5;
    func_0x000107c31944(pplVar5,aplStack_128);
    pplVar20 = (long **)pplVar5[1];
    if (pplVar20 != (long **)0x0) {
      uVar22 = (long)pplVar20 - 1;
      if (((ulong)pplVar20 & uVar22) == 0) {
        pplVar23 = (long **)(uVar22 & (ulong)pplVar4);
      }
      else {
        pplVar23 = pplVar4;
        if (pplVar20 <= pplVar4) {
          uVar1 = 0;
          if (pplVar20 != (long **)0x0) {
            uVar1 = (ulong)pplVar4 / (ulong)pplVar20;
          }
          pplVar23 = (long **)((long)pplVar4 - uVar1 * (long)pplVar20);
        }
      }
      pplVar17 = pplVar4;
      if ((long *)(*pplVar5)[(long)pplVar23] != (long *)0x0) {
        for (plVar24 = *(long **)(*pplVar5)[(long)pplVar23]; plVar24 != (long *)0x0;
            plVar24 = (long *)*plVar24) {
          pplVar9 = (long **)plVar24[1];
          if (pplVar4 == pplVar9) {
            pplVar9 = pplVar5;
            func_0x000104c4fbc4(pplVar5,plVar24 + 2,aplStack_128);
            if (((ulong)pplVar9 & 1) != 0) {
              *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)(plVar24 + 5);
              break;
            }
          }
          else {
            if (((ulong)pplVar20 & uVar22) == 0) {
              pplVar9 = (long **)((ulong)pplVar9 & uVar22);
            }
            else if (pplVar20 <= pplVar9) {
              uVar1 = 0;
              if (pplVar20 != (long **)0x0) {
                uVar1 = (ulong)pplVar9 / (ulong)pplVar20;
              }
              pplVar9 = (long **)((long)pplVar9 - uVar1 * (long)pplVar20);
            }
            if (pplVar9 != pplVar23) break;
          }
        }
      }
    }
    if (cStack_111 < '\0') {
      __ZdlPv(aplStack_128[0]);
    }
  }
  if (cStack_141 < '\0') {
    __ZdlPv(aplStack_158[0]);
  }
  func_0x000107c31940(aplStack_158,&UNK_10f56ed83);
  if ((bRam0000000113732e90 & 1) == 0) {
    iVar3 = 0x13732e90;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      pplVar5 = (long **)0x28;
      __Znwm();
      func_0x000107c31940(aplStack_128,&DAT_10f2c46ae);
      uStack_110 = 0;
      func_0x000107c31940(auStack_108,&UNK_10f56edbf);
      uStack_f0 = 1;
      func_0x000107c31940(auStack_e8,&UNK_10f56edca);
      uStack_d0 = 2;
      func_0x000107c31940(auStack_c8,&UNK_10f56edd5);
      uStack_b0 = 3;
      func_0x000107c31940(auStack_a8,&UNK_10f56edde);
      uStack_90 = 4;
      pplVar17 = aplStack_128;
      FUN_1094b5c88(pplVar5,aplStack_128,5);
      lVar18 = 0;
      do {
        if ((&cStack_91)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_a8 + lVar18));
        }
        lVar18 = lVar18 + -0x20;
      } while (lVar18 != -0xa0);
      pplRam0000000113732e88 = pplVar5;
      ___cxa_guard_release(0x113732e90);
    }
  }
  pplVar5 = pplRam0000000113732e88;
  plVar24 = param_2;
  FUN_1093781f4(param_2,aplStack_158);
  if ((int)plVar24 != 0) {
    uStack_138 = 0;
    lStack_130 = 0;
    uStack_140 = 0;
    FUN_1094a6b30(aplStack_128,param_2,aplStack_158,&uStack_140);
    if (lStack_130 < 0) {
      __ZdlPv(uStack_140);
    }
    pplVar4 = pplVar5;
    func_0x000107c31944(pplVar5,aplStack_128);
    pplVar20 = (long **)pplVar5[1];
    if (pplVar20 != (long **)0x0) {
      uVar22 = (long)pplVar20 - 1;
      if (((ulong)pplVar20 & uVar22) == 0) {
        pplVar23 = (long **)(uVar22 & (ulong)pplVar4);
      }
      else {
        pplVar23 = pplVar4;
        if (pplVar20 <= pplVar4) {
          uVar1 = 0;
          if (pplVar20 != (long **)0x0) {
            uVar1 = (ulong)pplVar4 / (ulong)pplVar20;
          }
          pplVar23 = (long **)((long)pplVar4 - uVar1 * (long)pplVar20);
        }
      }
      pplVar17 = pplVar4;
      if ((long *)(*pplVar5)[(long)pplVar23] != (long *)0x0) {
        for (plVar24 = *(long **)(*pplVar5)[(long)pplVar23]; plVar24 != (long *)0x0;
            plVar24 = (long *)*plVar24) {
          pplVar9 = (long **)plVar24[1];
          if (pplVar4 == pplVar9) {
            pplVar9 = pplVar5;
            func_0x000104c4fbc4(pplVar5,plVar24 + 2,aplStack_128);
            if (((ulong)pplVar9 & 1) != 0) {
              *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(plVar24 + 5);
              break;
            }
          }
          else {
            if (((ulong)pplVar20 & uVar22) == 0) {
              pplVar9 = (long **)((ulong)pplVar9 & uVar22);
            }
            else if (pplVar20 <= pplVar9) {
              uVar1 = 0;
              if (pplVar20 != (long **)0x0) {
                uVar1 = (ulong)pplVar9 / (ulong)pplVar20;
              }
              pplVar9 = (long **)((long)pplVar9 - uVar1 * (long)pplVar20);
            }
            if (pplVar9 != pplVar23) break;
          }
        }
      }
    }
    if (cStack_111 < '\0') {
      __ZdlPv(aplStack_128[0]);
    }
  }
  if (cStack_141 < '\0') {
    __ZdlPv(aplStack_158[0]);
  }
  func_0x000107c31940(aplStack_158,&UNK_10f56ed91);
  if ((bRam0000000113732ea0 & 1) == 0) {
    iVar3 = 0x13732ea0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      pplVar5 = (long **)0x28;
      __Znwm();
      func_0x000107c31940(aplStack_128,"none");
      uStack_110 = 0;
      func_0x000107c31940(auStack_108,&DAT_10f2c4697);
      uStack_f0 = 1;
      func_0x000107c31940(auStack_e8,&UNK_10f56edeb);
      uStack_d0 = 2;
      func_0x000107c31940(auStack_c8,&UNK_10f56edf7);
      uStack_b0 = 3;
      func_0x000107c31940(auStack_a8,"mask");
      uStack_90 = 4;
      func_0x000107c31940(auStack_88,&DAT_10f56ee03);
      uStack_70 = 5;
      pplVar17 = aplStack_128;
      FUN_1094b615c(pplVar5,aplStack_128,6);
      lVar18 = 0;
      do {
        if ((&cStack_71)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_88 + lVar18));
        }
        lVar18 = lVar18 + -0x20;
      } while (lVar18 != -0xc0);
      pplRam0000000113732e98 = pplVar5;
      ___cxa_guard_release(0x113732ea0);
    }
  }
  pplVar5 = pplRam0000000113732e98;
  plVar24 = param_2;
  FUN_1093781f4(param_2,aplStack_158);
  if ((int)plVar24 != 0) {
    uStack_138 = 0;
    lStack_130 = 0;
    uStack_140 = 0;
    FUN_1094a6b30(aplStack_128,param_2,aplStack_158,&uStack_140);
    if (lStack_130 < 0) {
      __ZdlPv(uStack_140);
    }
    pplVar4 = pplVar5;
    func_0x000107c31944(pplVar5,aplStack_128);
    pplVar20 = (long **)pplVar5[1];
    if (pplVar20 != (long **)0x0) {
      uVar22 = (long)pplVar20 - 1;
      if (((ulong)pplVar20 & uVar22) == 0) {
        pplVar23 = (long **)(uVar22 & (ulong)pplVar4);
      }
      else {
        pplVar23 = pplVar4;
        if (pplVar20 <= pplVar4) {
          uVar1 = 0;
          if (pplVar20 != (long **)0x0) {
            uVar1 = (ulong)pplVar4 / (ulong)pplVar20;
          }
          pplVar23 = (long **)((long)pplVar4 - uVar1 * (long)pplVar20);
        }
      }
      pplVar17 = pplVar4;
      if ((long *)(*pplVar5)[(long)pplVar23] != (long *)0x0) {
        for (plVar24 = *(long **)(*pplVar5)[(long)pplVar23]; plVar24 != (long *)0x0;
            plVar24 = (long *)*plVar24) {
          pplVar9 = (long **)plVar24[1];
          if (pplVar4 == pplVar9) {
            pplVar9 = pplVar5;
            func_0x000104c4fbc4(pplVar5,plVar24 + 2,aplStack_128);
            if (((ulong)pplVar9 & 1) != 0) {
              *(undefined4 *)(param_1 + 7) = *(undefined4 *)(plVar24 + 5);
              break;
            }
          }
          else {
            if (((ulong)pplVar20 & uVar22) == 0) {
              pplVar9 = (long **)((ulong)pplVar9 & uVar22);
            }
            else if (pplVar20 <= pplVar9) {
              uVar1 = 0;
              if (pplVar20 != (long **)0x0) {
                uVar1 = (ulong)pplVar9 / (ulong)pplVar20;
              }
              pplVar9 = (long **)((long)pplVar9 - uVar1 * (long)pplVar20);
            }
            if (pplVar9 != pplVar23) break;
          }
        }
      }
    }
    if (cStack_111 < '\0') {
      __ZdlPv(aplStack_128[0]);
    }
  }
  if (cStack_141 < '\0') {
    __ZdlPv(aplStack_158[0]);
  }
  uVar8 = 4;
  if (1 < *(int *)((long)param_1 + 0x34) - 3U) {
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 4) = uVar8;
  uStack_140 = CONCAT44(uStack_140._4_4_,uVar8);
  func_0x000107c31940(aplStack_128,&UNK_10f56ed9f);
  pplVar4 = aplStack_128;
  puVar7 = &uStack_140;
  FUN_1094a9268();
  if (cStack_111 < '\0') {
    __ZdlPv();
    param_2 = aplStack_128[0];
  }
  *(undefined4 *)(param_1 + 4) = (undefined4)uStack_140;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar18 = -0xc0;
  plVar24 = (long *)((long)pplVar17 + 0xb7);
  do {
    plVar21 = plVar24 + -4;
    if ((char)*plVar24 < '\0') {
      __ZdlPv(*(undefined8 *)((long)plVar24 + -0x17));
    }
    lVar18 = lVar18 + 0x20;
    plVar24 = plVar21;
  } while (lVar18 != 0);
  __ZdlPv(pplVar5);
  ___cxa_guard_abort(0x113732ea0);
  if (cStack_141 < '\0') {
    __ZdlPv(aplStack_158[0]);
  }
  aplStack_158[0] = param_1 + 8;
  func_0x000104c607c8(aplStack_158);
  __Unwind_Resume();
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  if (puVar7 != (undefined8 *)0x0) {
    pplVar17 = pplVar4 + (long)puVar7 * 4;
    plVar24 = param_2 + 2;
    do {
      plVar12 = param_2;
      func_0x000107c31944(param_2,pplVar4);
      plVar25 = (long *)param_2[1];
      if (plVar25 != (long *)0x0) {
        pcVar19 = (char *)((long)plVar25 + -1);
        if (((ulong)plVar25 & (ulong)pcVar19) == 0) {
          plVar21 = (long *)((ulong)pcVar19 & (ulong)plVar12);
        }
        else {
          plVar21 = plVar12;
          if (plVar25 <= plVar12) {
            uVar22 = 0;
            if (plVar25 != (long *)0x0) {
              uVar22 = (ulong)plVar12 / (ulong)plVar25;
            }
            plVar21 = (long *)((long)plVar12 - uVar22 * (long)plVar25);
          }
        }
        plVar10 = *(long **)(*param_2 + (long)plVar21 * 8);
        if (plVar10 != (long *)0x0) {
          for (plVar10 = (long *)*plVar10; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            plVar11 = (long *)plVar10[1];
            if (plVar11 == plVar12) {
              plVar11 = param_2;
              func_0x000104c4fbc4(param_2,plVar10 + 2,pplVar4);
              if (((ulong)plVar11 & 1) != 0) goto LAB_1094b5b40;
            }
            else {
              if (((ulong)plVar25 & (ulong)pcVar19) == 0) {
                plVar11 = (long *)((ulong)plVar11 & (ulong)pcVar19);
              }
              else if (plVar25 <= plVar11) {
                uVar22 = 0;
                if (plVar25 != (long *)0x0) {
                  uVar22 = (ulong)plVar11 / (ulong)plVar25;
                }
                plVar11 = (long *)((long)plVar11 - uVar22 * (long)plVar25);
              }
              if (plVar11 != plVar21) break;
            }
          }
        }
      }
      plVar10 = (long *)0x30;
      __Znwm();
      *plVar10 = 0;
      plVar10[1] = (long)plVar12;
      if (*(char *)((long)pplVar4 + 0x17) < '\0') {
        func_0x000107c3192c(plVar10 + 2,*pplVar4,pplVar4[1]);
      }
      else {
        plVar13 = pplVar4[1];
        plVar11 = *pplVar4;
        plVar10[4] = (long)pplVar4[2];
        plVar10[3] = (long)plVar13;
        plVar10[2] = (long)plVar11;
      }
      *(undefined4 *)(plVar10 + 5) = *(undefined4 *)(pplVar4 + 3);
      if ((plVar25 == (long *)0x0) ||
         (*(float *)(param_2 + 4) * (float)plVar25 < (float)(param_2[3] + 1))) {
        uVar22 = 1;
        if ((long *)0x2 < plVar25) {
          uVar22 = (ulong)(((ulong)plVar25 & (ulong)((long)plVar25 + -1)) != 0);
        }
        plVar21 = (long *)(uVar22 | (long)plVar25 << 1);
        plVar25 = (long *)(long)((float)(param_2[3] + 1) / *(float *)(param_2 + 4));
        if (plVar21 <= plVar25) {
          plVar21 = plVar25;
        }
        if ((char *)((long)plVar21 + -1) == (char *)0x0) {
          plVar21 = (long *)0x2;
        }
        else if (((ulong)plVar21 & (ulong)((long)plVar21 + -1)) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        plVar25 = (long *)param_2[1];
        if (plVar25 < plVar21) {
LAB_1094b5960:
          if ((ulong)plVar21 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1094b5bb4);
            (*pcVar2)();
          }
          lVar18 = (long)plVar21 << 3;
          __Znwm();
          lVar6 = *param_2;
          *param_2 = lVar18;
          if (lVar6 != 0) {
            __ZdlPv();
          }
          plVar25 = (long *)0x0;
          param_2[1] = (long)plVar21;
          do {
            *(undefined8 *)(*param_2 + (long)plVar25 * 8) = 0;
            plVar25 = (long *)((long)plVar25 + 1);
          } while (plVar21 != plVar25);
          plVar11 = (long *)*plVar24;
          plVar25 = plVar21;
          if (plVar11 != (long *)0x0) {
            plVar13 = (long *)plVar11[1];
            pcVar19 = (char *)((long)plVar21 + -1);
            if (((ulong)plVar21 & (ulong)pcVar19) == 0) {
              plVar13 = (long *)((ulong)plVar13 & (ulong)pcVar19);
            }
            else if (plVar21 <= plVar13) {
              uVar22 = 0;
              if (plVar21 != (long *)0x0) {
                uVar22 = (ulong)plVar13 / (ulong)plVar21;
              }
              plVar13 = (long *)((long)plVar13 - uVar22 * (long)plVar21);
            }
            *(long **)(*param_2 + (long)plVar13 * 8) = plVar24;
            plVar14 = (long *)*plVar11;
            while (plVar14 != (long *)0x0) {
              plVar16 = (long *)plVar14[1];
              if (((ulong)plVar21 & (ulong)pcVar19) == 0) {
                plVar16 = (long *)((ulong)plVar16 & (ulong)pcVar19);
              }
              else if (plVar21 <= plVar16) {
                uVar22 = 0;
                if (plVar21 != (long *)0x0) {
                  uVar22 = (ulong)plVar16 / (ulong)plVar21;
                }
                plVar16 = (long *)((long)plVar16 - uVar22 * (long)plVar21);
              }
              plVar15 = plVar14;
              if (plVar16 != plVar13) {
                lVar18 = *param_2;
                if (*(long *)(lVar18 + (long)plVar16 * 8) == 0) {
                  *(long **)(lVar18 + (long)plVar16 * 8) = plVar11;
                  plVar13 = plVar16;
                }
                else {
                  *plVar11 = *plVar14;
                  *plVar14 = **(undefined8 **)(lVar18 + (long)plVar16 * 8);
                  **(long **)(lVar18 + (long)plVar16 * 8) = (long)plVar14;
                  plVar15 = plVar11;
                }
              }
              plVar11 = plVar15;
              plVar14 = (long *)*plVar15;
            }
          }
        }
        else if (plVar21 < plVar25) {
          plVar11 = (long *)(long)((float)(ulong)param_2[3] / *(float *)(param_2 + 4));
          if ((plVar25 < (long *)0x3) || (((ulong)plVar25 & (ulong)((long)plVar25 + -1)) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar11) {
            plVar11 = (long *)(1L << (-LZCOUNT((char *)((long)plVar11 + -1)) & 0x3fU));
          }
          if (plVar21 <= plVar11) {
            plVar21 = plVar11;
          }
          if (plVar21 < plVar25) {
            if (plVar21 != (long *)0x0) goto LAB_1094b5960;
            lVar18 = *param_2;
            *param_2 = 0;
            if (lVar18 != 0) {
              __ZdlPv();
            }
            param_2[1] = 0;
            plVar25 = (long *)0x0;
          }
          else {
            plVar25 = (long *)param_2[1];
          }
        }
        if (((ulong)plVar25 & (ulong)((long)plVar25 + -1)) == 0) {
          plVar21 = (long *)((ulong)((long)plVar25 + -1) & (ulong)plVar12);
        }
        else {
          plVar21 = plVar12;
          if (plVar25 <= plVar12) {
            uVar22 = 0;
            if (plVar25 != (long *)0x0) {
              uVar22 = (ulong)plVar12 / (ulong)plVar25;
            }
            plVar21 = (long *)((long)plVar12 - uVar22 * (long)plVar25);
          }
        }
      }
      lVar18 = *param_2;
      plVar12 = *(long **)(lVar18 + (long)plVar21 * 8);
      if (plVar12 == (long *)0x0) {
        *plVar10 = *plVar24;
        *plVar24 = (long)plVar10;
        *(long **)(lVar18 + (long)plVar21 * 8) = plVar24;
        if (*plVar10 != 0) {
          plVar12 = *(long **)(*plVar10 + 8);
          if (((ulong)plVar25 & (ulong)((long)plVar25 + -1)) == 0) {
            plVar12 = (long *)((ulong)plVar12 & (ulong)((long)plVar25 + -1));
          }
          else if (plVar25 <= plVar12) {
            uVar22 = 0;
            if (plVar25 != (long *)0x0) {
              uVar22 = (ulong)plVar12 / (ulong)plVar25;
            }
            plVar12 = (long *)((long)plVar12 - uVar22 * (long)plVar25);
          }
          *(long **)(*param_2 + (long)plVar12 * 8) = plVar10;
        }
      }
      else {
        *plVar10 = *plVar12;
        *plVar12 = (long)plVar10;
      }
      param_2[3] = param_2[3] + 1;
LAB_1094b5b40:
      pplVar4 = pplVar4 + 4;
    } while (pplVar4 != pplVar17);
  }
  return param_2;
}



/* Entry: 1094b57b4; end: 1094b5bef;  */

long * FUN_1094b57b4(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *unaff_x23;
  long *plVar16;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    plVar2 = param_2 + param_3 * 4;
    plVar1 = param_1 + 2;
    do {
      plVar10 = param_1;
      func_0x000107c31944(param_1,param_2);
      plVar16 = (long *)param_1[1];
      if (plVar16 != (long *)0x0) {
        uVar15 = (long)plVar16 - 1;
        if (((ulong)plVar16 & uVar15) == 0) {
          unaff_x23 = (long *)(uVar15 & (ulong)plVar10);
        }
        else {
          unaff_x23 = plVar10;
          if (plVar16 <= plVar10) {
            uVar3 = 0;
            if (plVar16 != (long *)0x0) {
              uVar3 = (ulong)plVar10 / (ulong)plVar16;
            }
            unaff_x23 = (long *)((long)plVar10 - uVar3 * (long)plVar16);
          }
        }
        plVar7 = *(long **)(*param_1 + (long)unaff_x23 * 8);
        if (plVar7 != (long *)0x0) {
          for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            plVar8 = (long *)plVar7[1];
            if (plVar8 == plVar10) {
              plVar8 = param_1;
              func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
              if (((ulong)plVar8 & 1) != 0) goto LAB_1094b5b40;
            }
            else {
              if (((ulong)plVar16 & uVar15) == 0) {
                plVar8 = (long *)((ulong)plVar8 & uVar15);
              }
              else if (plVar16 <= plVar8) {
                uVar3 = 0;
                if (plVar16 != (long *)0x0) {
                  uVar3 = (ulong)plVar8 / (ulong)plVar16;
                }
                plVar8 = (long *)((long)plVar8 - uVar3 * (long)plVar16);
              }
              if (plVar8 != unaff_x23) break;
            }
          }
        }
      }
      plVar7 = (long *)0x30;
      __Znwm();
      *plVar7 = 0;
      plVar7[1] = (long)plVar10;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(plVar7 + 2,*param_2,param_2[1]);
      }
      else {
        lVar6 = param_2[1];
        lVar5 = *param_2;
        plVar7[4] = param_2[2];
        plVar7[3] = lVar6;
        plVar7[2] = lVar5;
      }
      *(int *)(plVar7 + 5) = (int)param_2[3];
      if ((plVar16 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar16 < (float)(param_1[3] + 1))) {
        uVar15 = 1;
        if ((long *)0x2 < plVar16) {
          uVar15 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
        }
        plVar8 = (long *)(uVar15 | (long)plVar16 << 1);
        plVar16 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (plVar8 <= plVar16) {
          plVar8 = plVar16;
        }
        if ((long)plVar8 - 1U == 0) {
          plVar8 = (long *)0x2;
        }
        else if (((ulong)plVar8 & (long)plVar8 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        plVar16 = (long *)param_1[1];
        if (plVar16 < plVar8) {
LAB_1094b5960:
          if ((ulong)plVar8 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1094b5bb4);
            (*pcVar4)();
          }
          lVar5 = (long)plVar8 << 3;
          __Znwm();
          lVar6 = *param_1;
          *param_1 = lVar5;
          if (lVar6 != 0) {
            __ZdlPv();
          }
          plVar16 = (long *)0x0;
          param_1[1] = (long)plVar8;
          do {
            *(undefined8 *)(*param_1 + (long)plVar16 * 8) = 0;
            plVar16 = (long *)((long)plVar16 + 1);
          } while (plVar8 != plVar16);
          plVar9 = (long *)*plVar1;
          plVar16 = plVar8;
          if (plVar9 != (long *)0x0) {
            plVar11 = (long *)plVar9[1];
            uVar15 = (long)plVar8 - 1;
            if (((ulong)plVar8 & uVar15) == 0) {
              plVar11 = (long *)((ulong)plVar11 & uVar15);
            }
            else if (plVar8 <= plVar11) {
              uVar3 = 0;
              if (plVar8 != (long *)0x0) {
                uVar3 = (ulong)plVar11 / (ulong)plVar8;
              }
              plVar11 = (long *)((long)plVar11 - uVar3 * (long)plVar8);
            }
            *(long **)(*param_1 + (long)plVar11 * 8) = plVar1;
            plVar12 = (long *)*plVar9;
            while (plVar12 != (long *)0x0) {
              plVar14 = (long *)plVar12[1];
              if (((ulong)plVar8 & uVar15) == 0) {
                plVar14 = (long *)((ulong)plVar14 & uVar15);
              }
              else if (plVar8 <= plVar14) {
                uVar3 = 0;
                if (plVar8 != (long *)0x0) {
                  uVar3 = (ulong)plVar14 / (ulong)plVar8;
                }
                plVar14 = (long *)((long)plVar14 - uVar3 * (long)plVar8);
              }
              plVar13 = plVar12;
              if (plVar14 != plVar11) {
                lVar5 = *param_1;
                if (*(long *)(lVar5 + (long)plVar14 * 8) == 0) {
                  *(long **)(lVar5 + (long)plVar14 * 8) = plVar9;
                  plVar11 = plVar14;
                }
                else {
                  *plVar9 = *plVar12;
                  *plVar12 = **(undefined8 **)(lVar5 + (long)plVar14 * 8);
                  **(long **)(lVar5 + (long)plVar14 * 8) = (long)plVar12;
                  plVar13 = plVar9;
                }
              }
              plVar9 = plVar13;
              plVar12 = (long *)*plVar13;
            }
          }
        }
        else if (plVar8 < plVar16) {
          plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
          if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar9) {
            plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
          }
          if (plVar8 <= plVar9) {
            plVar8 = plVar9;
          }
          if (plVar8 < plVar16) {
            if (plVar8 != (long *)0x0) goto LAB_1094b5960;
            lVar5 = *param_1;
            *param_1 = 0;
            if (lVar5 != 0) {
              __ZdlPv();
            }
            param_1[1] = 0;
            plVar16 = (long *)0x0;
          }
          else {
            plVar16 = (long *)param_1[1];
          }
        }
        if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
          unaff_x23 = (long *)((long)plVar16 - 1U & (ulong)plVar10);
        }
        else {
          unaff_x23 = plVar10;
          if (plVar16 <= plVar10) {
            uVar15 = 0;
            if (plVar16 != (long *)0x0) {
              uVar15 = (ulong)plVar10 / (ulong)plVar16;
            }
            unaff_x23 = (long *)((long)plVar10 - uVar15 * (long)plVar16);
          }
        }
      }
      lVar5 = *param_1;
      plVar10 = *(long **)(lVar5 + (long)unaff_x23 * 8);
      if (plVar10 == (long *)0x0) {
        *plVar7 = *plVar1;
        *plVar1 = (long)plVar7;
        *(long **)(lVar5 + (long)unaff_x23 * 8) = plVar1;
        if (*plVar7 != 0) {
          plVar10 = *(long **)(*plVar7 + 8);
          if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
            plVar10 = (long *)((ulong)plVar10 & (long)plVar16 - 1U);
          }
          else if (plVar16 <= plVar10) {
            uVar15 = 0;
            if (plVar16 != (long *)0x0) {
              uVar15 = (ulong)plVar10 / (ulong)plVar16;
            }
            plVar10 = (long *)((long)plVar10 - uVar15 * (long)plVar16);
          }
          *(long **)(*param_1 + (long)plVar10 * 8) = plVar7;
        }
      }
      else {
        *plVar7 = *plVar10;
        *plVar10 = (long)plVar7;
      }
      param_1[3] = param_1[3] + 1;
LAB_1094b5b40:
      param_2 = param_2 + 4;
    } while (param_2 != plVar2);
  }
  return param_1;
}



/* Entry: 1094b5bf0; end: 1094b5c23;  */

void FUN_1094b5bf0(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1094b5c24; end: 1094b5c87;  */

long * FUN_1094b5c24(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
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



/* Entry: 1094b5c88; end: 1094b60c3;  */

long * FUN_1094b5c88(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *unaff_x23;
  long *plVar16;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    plVar2 = param_2 + param_3 * 4;
    plVar1 = param_1 + 2;
    do {
      plVar10 = param_1;
      func_0x000107c31944(param_1,param_2);
      plVar16 = (long *)param_1[1];
      if (plVar16 != (long *)0x0) {
        uVar15 = (long)plVar16 - 1;
        if (((ulong)plVar16 & uVar15) == 0) {
          unaff_x23 = (long *)(uVar15 & (ulong)plVar10);
        }
        else {
          unaff_x23 = plVar10;
          if (plVar16 <= plVar10) {
            uVar3 = 0;
            if (plVar16 != (long *)0x0) {
              uVar3 = (ulong)plVar10 / (ulong)plVar16;
            }
            unaff_x23 = (long *)((long)plVar10 - uVar3 * (long)plVar16);
          }
        }
        plVar7 = *(long **)(*param_1 + (long)unaff_x23 * 8);
        if (plVar7 != (long *)0x0) {
          for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            plVar8 = (long *)plVar7[1];
            if (plVar8 == plVar10) {
              plVar8 = param_1;
              func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
              if (((ulong)plVar8 & 1) != 0) goto LAB_1094b6014;
            }
            else {
              if (((ulong)plVar16 & uVar15) == 0) {
                plVar8 = (long *)((ulong)plVar8 & uVar15);
              }
              else if (plVar16 <= plVar8) {
                uVar3 = 0;
                if (plVar16 != (long *)0x0) {
                  uVar3 = (ulong)plVar8 / (ulong)plVar16;
                }
                plVar8 = (long *)((long)plVar8 - uVar3 * (long)plVar16);
              }
              if (plVar8 != unaff_x23) break;
            }
          }
        }
      }
      plVar7 = (long *)0x30;
      __Znwm();
      *plVar7 = 0;
      plVar7[1] = (long)plVar10;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(plVar7 + 2,*param_2,param_2[1]);
      }
      else {
        lVar6 = param_2[1];
        lVar5 = *param_2;
        plVar7[4] = param_2[2];
        plVar7[3] = lVar6;
        plVar7[2] = lVar5;
      }
      *(int *)(plVar7 + 5) = (int)param_2[3];
      if ((plVar16 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar16 < (float)(param_1[3] + 1))) {
        uVar15 = 1;
        if ((long *)0x2 < plVar16) {
          uVar15 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
        }
        plVar8 = (long *)(uVar15 | (long)plVar16 << 1);
        plVar16 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (plVar8 <= plVar16) {
          plVar8 = plVar16;
        }
        if ((long)plVar8 - 1U == 0) {
          plVar8 = (long *)0x2;
        }
        else if (((ulong)plVar8 & (long)plVar8 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        plVar16 = (long *)param_1[1];
        if (plVar16 < plVar8) {
LAB_1094b5e34:
          if ((ulong)plVar8 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1094b6088);
            (*pcVar4)();
          }
          lVar5 = (long)plVar8 << 3;
          __Znwm();
          lVar6 = *param_1;
          *param_1 = lVar5;
          if (lVar6 != 0) {
            __ZdlPv();
          }
          plVar16 = (long *)0x0;
          param_1[1] = (long)plVar8;
          do {
            *(undefined8 *)(*param_1 + (long)plVar16 * 8) = 0;
            plVar16 = (long *)((long)plVar16 + 1);
          } while (plVar8 != plVar16);
          plVar9 = (long *)*plVar1;
          plVar16 = plVar8;
          if (plVar9 != (long *)0x0) {
            plVar11 = (long *)plVar9[1];
            uVar15 = (long)plVar8 - 1;
            if (((ulong)plVar8 & uVar15) == 0) {
              plVar11 = (long *)((ulong)plVar11 & uVar15);
            }
            else if (plVar8 <= plVar11) {
              uVar3 = 0;
              if (plVar8 != (long *)0x0) {
                uVar3 = (ulong)plVar11 / (ulong)plVar8;
              }
              plVar11 = (long *)((long)plVar11 - uVar3 * (long)plVar8);
            }
            *(long **)(*param_1 + (long)plVar11 * 8) = plVar1;
            plVar12 = (long *)*plVar9;
            while (plVar12 != (long *)0x0) {
              plVar14 = (long *)plVar12[1];
              if (((ulong)plVar8 & uVar15) == 0) {
                plVar14 = (long *)((ulong)plVar14 & uVar15);
              }
              else if (plVar8 <= plVar14) {
                uVar3 = 0;
                if (plVar8 != (long *)0x0) {
                  uVar3 = (ulong)plVar14 / (ulong)plVar8;
                }
                plVar14 = (long *)((long)plVar14 - uVar3 * (long)plVar8);
              }
              plVar13 = plVar12;
              if (plVar14 != plVar11) {
                lVar5 = *param_1;
                if (*(long *)(lVar5 + (long)plVar14 * 8) == 0) {
                  *(long **)(lVar5 + (long)plVar14 * 8) = plVar9;
                  plVar11 = plVar14;
                }
                else {
                  *plVar9 = *plVar12;
                  *plVar12 = **(undefined8 **)(lVar5 + (long)plVar14 * 8);
                  **(long **)(lVar5 + (long)plVar14 * 8) = (long)plVar12;
                  plVar13 = plVar9;
                }
              }
              plVar9 = plVar13;
              plVar12 = (long *)*plVar13;
            }
          }
        }
        else if (plVar8 < plVar16) {
          plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
          if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar9) {
            plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
          }
          if (plVar8 <= plVar9) {
            plVar8 = plVar9;
          }
          if (plVar8 < plVar16) {
            if (plVar8 != (long *)0x0) goto LAB_1094b5e34;
            lVar5 = *param_1;
            *param_1 = 0;
            if (lVar5 != 0) {
              __ZdlPv();
            }
            param_1[1] = 0;
            plVar16 = (long *)0x0;
          }
          else {
            plVar16 = (long *)param_1[1];
          }
        }
        if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
          unaff_x23 = (long *)((long)plVar16 - 1U & (ulong)plVar10);
        }
        else {
          unaff_x23 = plVar10;
          if (plVar16 <= plVar10) {
            uVar15 = 0;
            if (plVar16 != (long *)0x0) {
              uVar15 = (ulong)plVar10 / (ulong)plVar16;
            }
            unaff_x23 = (long *)((long)plVar10 - uVar15 * (long)plVar16);
          }
        }
      }
      lVar5 = *param_1;
      plVar10 = *(long **)(lVar5 + (long)unaff_x23 * 8);
      if (plVar10 == (long *)0x0) {
        *plVar7 = *plVar1;
        *plVar1 = (long)plVar7;
        *(long **)(lVar5 + (long)unaff_x23 * 8) = plVar1;
        if (*plVar7 != 0) {
          plVar10 = *(long **)(*plVar7 + 8);
          if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
            plVar10 = (long *)((ulong)plVar10 & (long)plVar16 - 1U);
          }
          else if (plVar16 <= plVar10) {
            uVar15 = 0;
            if (plVar16 != (long *)0x0) {
              uVar15 = (ulong)plVar10 / (ulong)plVar16;
            }
            plVar10 = (long *)((long)plVar10 - uVar15 * (long)plVar16);
          }
          *(long **)(*param_1 + (long)plVar10 * 8) = plVar7;
        }
      }
      else {
        *plVar7 = *plVar10;
        *plVar10 = (long)plVar7;
      }
      param_1[3] = param_1[3] + 1;
LAB_1094b6014:
      param_2 = param_2 + 4;
    } while (param_2 != plVar2);
  }
  return param_1;
}



/* Entry: 1094b60c4; end: 1094b60f7;  */

void FUN_1094b60c4(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1094b60f8; end: 1094b615b;  */

long * FUN_1094b60f8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
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



/* Entry: 1094b615c; end: 1094b6597;  */

long * FUN_1094b615c(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *unaff_x23;
  long *plVar16;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    plVar2 = param_2 + param_3 * 4;
    plVar1 = param_1 + 2;
    do {
      plVar10 = param_1;
      func_0x000107c31944(param_1,param_2);
      plVar16 = (long *)param_1[1];
      if (plVar16 != (long *)0x0) {
        uVar15 = (long)plVar16 - 1;
        if (((ulong)plVar16 & uVar15) == 0) {
          unaff_x23 = (long *)(uVar15 & (ulong)plVar10);
        }
        else {
          unaff_x23 = plVar10;
          if (plVar16 <= plVar10) {
            uVar3 = 0;
            if (plVar16 != (long *)0x0) {
              uVar3 = (ulong)plVar10 / (ulong)plVar16;
            }
            unaff_x23 = (long *)((long)plVar10 - uVar3 * (long)plVar16);
          }
        }
        plVar7 = *(long **)(*param_1 + (long)unaff_x23 * 8);
        if (plVar7 != (long *)0x0) {
          for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            plVar8 = (long *)plVar7[1];
            if (plVar8 == plVar10) {
              plVar8 = param_1;
              func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
              if (((ulong)plVar8 & 1) != 0) goto LAB_1094b64e8;
            }
            else {
              if (((ulong)plVar16 & uVar15) == 0) {
                plVar8 = (long *)((ulong)plVar8 & uVar15);
              }
              else if (plVar16 <= plVar8) {
                uVar3 = 0;
                if (plVar16 != (long *)0x0) {
                  uVar3 = (ulong)plVar8 / (ulong)plVar16;
                }
                plVar8 = (long *)((long)plVar8 - uVar3 * (long)plVar16);
              }
              if (plVar8 != unaff_x23) break;
            }
          }
        }
      }
      plVar7 = (long *)0x30;
      __Znwm();
      *plVar7 = 0;
      plVar7[1] = (long)plVar10;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(plVar7 + 2,*param_2,param_2[1]);
      }
      else {
        lVar6 = param_2[1];
        lVar5 = *param_2;
        plVar7[4] = param_2[2];
        plVar7[3] = lVar6;
        plVar7[2] = lVar5;
      }
      *(int *)(plVar7 + 5) = (int)param_2[3];
      if ((plVar16 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar16 < (float)(param_1[3] + 1))) {
        uVar15 = 1;
        if ((long *)0x2 < plVar16) {
          uVar15 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
        }
        plVar8 = (long *)(uVar15 | (long)plVar16 << 1);
        plVar16 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (plVar8 <= plVar16) {
          plVar8 = plVar16;
        }
        if ((long)plVar8 - 1U == 0) {
          plVar8 = (long *)0x2;
        }
        else if (((ulong)plVar8 & (long)plVar8 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        plVar16 = (long *)param_1[1];
        if (plVar16 < plVar8) {
LAB_1094b6308:
          if ((ulong)plVar8 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1094b655c);
            (*pcVar4)();
          }
          lVar5 = (long)plVar8 << 3;
          __Znwm();
          lVar6 = *param_1;
          *param_1 = lVar5;
          if (lVar6 != 0) {
            __ZdlPv();
          }
          plVar16 = (long *)0x0;
          param_1[1] = (long)plVar8;
          do {
            *(undefined8 *)(*param_1 + (long)plVar16 * 8) = 0;
            plVar16 = (long *)((long)plVar16 + 1);
          } while (plVar8 != plVar16);
          plVar9 = (long *)*plVar1;
          plVar16 = plVar8;
          if (plVar9 != (long *)0x0) {
            plVar11 = (long *)plVar9[1];
            uVar15 = (long)plVar8 - 1;
            if (((ulong)plVar8 & uVar15) == 0) {
              plVar11 = (long *)((ulong)plVar11 & uVar15);
            }
            else if (plVar8 <= plVar11) {
              uVar3 = 0;
              if (plVar8 != (long *)0x0) {
                uVar3 = (ulong)plVar11 / (ulong)plVar8;
              }
              plVar11 = (long *)((long)plVar11 - uVar3 * (long)plVar8);
            }
            *(long **)(*param_1 + (long)plVar11 * 8) = plVar1;
            plVar12 = (long *)*plVar9;
            while (plVar12 != (long *)0x0) {
              plVar14 = (long *)plVar12[1];
              if (((ulong)plVar8 & uVar15) == 0) {
                plVar14 = (long *)((ulong)plVar14 & uVar15);
              }
              else if (plVar8 <= plVar14) {
                uVar3 = 0;
                if (plVar8 != (long *)0x0) {
                  uVar3 = (ulong)plVar14 / (ulong)plVar8;
                }
                plVar14 = (long *)((long)plVar14 - uVar3 * (long)plVar8);
              }
              plVar13 = plVar12;
              if (plVar14 != plVar11) {
                lVar5 = *param_1;
                if (*(long *)(lVar5 + (long)plVar14 * 8) == 0) {
                  *(long **)(lVar5 + (long)plVar14 * 8) = plVar9;
                  plVar11 = plVar14;
                }
                else {
                  *plVar9 = *plVar12;
                  *plVar12 = **(undefined8 **)(lVar5 + (long)plVar14 * 8);
                  **(long **)(lVar5 + (long)plVar14 * 8) = (long)plVar12;
                  plVar13 = plVar9;
                }
              }
              plVar9 = plVar13;
              plVar12 = (long *)*plVar13;
            }
          }
        }
        else if (plVar8 < plVar16) {
          plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
          if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar9) {
            plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
          }
          if (plVar8 <= plVar9) {
            plVar8 = plVar9;
          }
          if (plVar8 < plVar16) {
            if (plVar8 != (long *)0x0) goto LAB_1094b6308;
            lVar5 = *param_1;
            *param_1 = 0;
            if (lVar5 != 0) {
              __ZdlPv();
            }
            param_1[1] = 0;
            plVar16 = (long *)0x0;
          }
          else {
            plVar16 = (long *)param_1[1];
          }
        }
        if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
          unaff_x23 = (long *)((long)plVar16 - 1U & (ulong)plVar10);
        }
        else {
          unaff_x23 = plVar10;
          if (plVar16 <= plVar10) {
            uVar15 = 0;
            if (plVar16 != (long *)0x0) {
              uVar15 = (ulong)plVar10 / (ulong)plVar16;
            }
            unaff_x23 = (long *)((long)plVar10 - uVar15 * (long)plVar16);
          }
        }
      }
      lVar5 = *param_1;
      plVar10 = *(long **)(lVar5 + (long)unaff_x23 * 8);
      if (plVar10 == (long *)0x0) {
        *plVar7 = *plVar1;
        *plVar1 = (long)plVar7;
        *(long **)(lVar5 + (long)unaff_x23 * 8) = plVar1;
        if (*plVar7 != 0) {
          plVar10 = *(long **)(*plVar7 + 8);
          if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
            plVar10 = (long *)((ulong)plVar10 & (long)plVar16 - 1U);
          }
          else if (plVar16 <= plVar10) {
            uVar15 = 0;
            if (plVar16 != (long *)0x0) {
              uVar15 = (ulong)plVar10 / (ulong)plVar16;
            }
            plVar10 = (long *)((long)plVar10 - uVar15 * (long)plVar16);
          }
          *(long **)(*param_1 + (long)plVar10 * 8) = plVar7;
        }
      }
      else {
        *plVar7 = *plVar10;
        *plVar10 = (long)plVar7;
      }
      param_1[3] = param_1[3] + 1;
LAB_1094b64e8:
      param_2 = param_2 + 4;
    } while (param_2 != plVar2);
  }
  return param_1;
}



/* Entry: 1094b6598; end: 1094b65cb;  */

void FUN_1094b6598(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1094b65cc; end: 1094b662f;  */

long * FUN_1094b65cc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
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



/* Entry: 1094b6630; end: 1094b6c67;  */

/* WARNING: Removing unreachable block (ram,0x0001094b691c) */
/* WARNING: Removing unreachable block (ram,0x0001094b6a40) */

undefined4 * FUN_1094b6630(undefined4 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  char **ppcVar6;
  undefined8 uVar7;
  char **ppcVar8;
  long lVar9;
  ulong uVar10;
  char **ppcVar11;
  char **ppcVar12;
  ulong uVar13;
  char *pcVar14;
  long *plVar15;
  char *pcVar16;
  char *pcVar17;
  undefined8 auStack_148 [2];
  char cStack_131;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  char *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  char *pcStack_e0;
  char **ppcStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  float fStack_c0;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined4 uStack_98;
  long *plStack_88;
  char **ppcStack_80;
  undefined8 uStack_78;
  
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0x100;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0x3f800000;
  func_0x000107c31940(&pcStack_e0,&DAT_10f36f23a);
  FUN_1094a9268(param_2,&pcStack_e0,param_1);
  if ((long)uStack_d0 < 0) {
    __ZdlPv(pcStack_e0);
  }
  func_0x000107c31940(&pcStack_e0,&DAT_10f56e97e);
  func_0x0001094a86e8(param_2,&pcStack_e0,param_1 + 2);
  if (uStack_d0._7_1_ < '\0') {
    __ZdlPv(pcStack_e0);
  }
  func_0x000107c31940(auStack_148,&DAT_10f30a732);
  pcStack_e0 = (char *)*param_2;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0x8000000000000000;
  cVar1 = *pcStack_e0;
  pcStack_100 = pcStack_e0;
  if (cVar1 == '\x01') {
    uVar7 = *(undefined8 *)(pcStack_e0 + 8);
    FUN_1093793a4(uVar7,auStack_148);
    pcStack_e0 = (char *)*param_2;
    cVar1 = *pcStack_e0;
    uStack_f8 = uVar7;
LAB_1094b6758:
    ppcStack_d8 = (char **)0x0;
    uStack_d0 = (long *)0x0;
    lStack_c8 = -0x8000000000000000;
    if (cVar1 == '\x01') {
      ppcStack_d8 = (char **)(*(long *)(pcStack_e0 + 8) + 8);
      goto LAB_1094b679c;
    }
    if (cVar1 != '\x02') {
      lStack_c8 = 1;
      goto LAB_1094b679c;
    }
    lVar9 = *(long *)(pcStack_e0 + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_e8 = 1;
      goto LAB_1094b6758;
    }
    lVar9 = *(long *)(pcStack_e0 + 8);
    uStack_f0 = *(undefined8 *)(lVar9 + 8);
  }
  lStack_c8 = -0x8000000000000000;
  ppcStack_d8 = (char **)0x0;
  uStack_d0 = *(long **)(lVar9 + 8);
LAB_1094b679c:
  ppcVar11 = &pcStack_100;
  FUN_109379420(ppcVar11,&pcStack_e0);
  if (((ulong)ppcVar11 & 1) == 0) {
    ppcVar11 = &pcStack_100;
    FUN_10937b950();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_110 = 0x3f800000;
    if (*(char *)ppcVar11 != '\x01') {
      uVar7 = 0x20;
      ___cxa_allocate_exception(0x20);
      FUN_10937bcec(ppcVar11);
      func_0x000107c31940(&lStack_b0,ppcVar11);
      FUN_10928a5e0(&pcStack_e0,&UNK_10f56746f,&lStack_b0);
      FUN_10937bbbc(uVar7,0x12e,&pcStack_e0);
      ___cxa_throw(uVar7,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1094b6b48);
      (*pcVar4)();
    }
    ppcStack_d8 = (char **)0x0;
    pcStack_e0 = (char *)0x0;
    lStack_c8 = 0;
    uStack_d0 = (long *)0x0;
    fStack_c0 = 1.0;
    pcVar14 = ppcVar11[1] + 8;
    pcVar16 = *(char **)ppcVar11[1];
    if (pcVar16 != pcVar14) {
      do {
        FUN_10937ba88(pcVar16 + 0x38,&plStack_88);
        uVar2 = plStack_88._0_4_;
        ppcVar11 = (char **)((ulong)plStack_88 & 0xffffffff);
        if (pcVar16[0x37] < '\0') {
          func_0x000107c3192c(&lStack_b0,*(undefined8 *)(pcVar16 + 0x20),
                              *(undefined8 *)(pcVar16 + 0x28));
        }
        else {
          lStack_a8 = *(long *)(pcVar16 + 0x28);
          lStack_b0 = *(long *)(pcVar16 + 0x20);
          lStack_a0 = *(long *)(pcVar16 + 0x30);
        }
        uStack_98 = uVar2;
        ppcVar6 = &pcStack_e0;
        func_0x000107c31944(ppcVar6,&lStack_b0);
        ppcVar12 = ppcStack_d8;
        if (ppcStack_d8 != (char **)0x0) {
          uVar13 = (long)ppcStack_d8 - 1;
          if (((ulong)ppcStack_d8 & uVar13) == 0) {
            ppcVar11 = (char **)(uVar13 & (ulong)ppcVar6);
          }
          else {
            ppcVar11 = ppcVar6;
            if (ppcStack_d8 <= ppcVar6) {
              uVar10 = 0;
              if (ppcStack_d8 != (char **)0x0) {
                uVar10 = (ulong)ppcVar6 / (ulong)ppcStack_d8;
              }
              ppcVar11 = (char **)((long)ppcVar6 - uVar10 * (long)ppcStack_d8);
            }
          }
          if (*(long **)(pcStack_e0 + (long)ppcVar11 * 8) != (long *)0x0) {
            for (plVar15 = (long *)**(long **)(pcStack_e0 + (long)ppcVar11 * 8);
                plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
              ppcVar8 = (char **)plVar15[1];
              if (ppcVar8 == ppcVar6) {
                ppcVar8 = &pcStack_e0;
                func_0x000104c4fbc4(ppcVar8,plVar15 + 2,&lStack_b0);
                if (((ulong)ppcVar8 & 1) != 0) goto LAB_1094b6a38;
              }
              else {
                if (((ulong)ppcVar12 & uVar13) == 0) {
                  ppcVar8 = (char **)((ulong)ppcVar8 & uVar13);
                }
                else if (ppcVar12 <= ppcVar8) {
                  uVar10 = 0;
                  if (ppcVar12 != (char **)0x0) {
                    uVar10 = (ulong)ppcVar8 / (ulong)ppcVar12;
                  }
                  ppcVar8 = (char **)((long)ppcVar8 - uVar10 * (long)ppcVar12);
                }
                if (ppcVar8 != ppcVar11) break;
              }
            }
          }
        }
        plVar15 = (long *)0x30;
        __Znwm();
        *plVar15 = 0;
        plVar15[1] = (long)ppcVar6;
        plVar15[3] = lStack_a8;
        plVar15[2] = lStack_b0;
        plVar15[4] = lStack_a0;
        *(undefined4 *)(plVar15 + 5) = uStack_98;
        uStack_78 = 1;
        plStack_88 = plVar15;
        ppcStack_80 = &pcStack_e0;
        if ((ppcVar12 == (char **)0x0) || (fStack_c0 * (float)ppcVar12 < (float)(lStack_c8 + 1))) {
          uVar13 = 1;
          if ((char **)0x2 < ppcVar12) {
            uVar13 = (ulong)(((ulong)ppcVar12 & (long)ppcVar12 - 1U) != 0);
          }
          uVar13 = uVar13 | (long)ppcVar12 << 1;
          uVar10 = (ulong)((float)(lStack_c8 + 1) / fStack_c0);
          if (uVar13 <= uVar10) {
            uVar13 = uVar10;
          }
          FUN_1092afd6c(&pcStack_e0,uVar13);
          ppcVar12 = ppcStack_d8;
          if (((ulong)ppcStack_d8 & (long)ppcStack_d8 - 1U) == 0) {
            ppcVar11 = (char **)((long)ppcStack_d8 - 1U & (ulong)ppcVar6);
          }
          else {
            ppcVar11 = ppcVar6;
            if (ppcStack_d8 <= ppcVar6) {
              uVar13 = 0;
              if (ppcStack_d8 != (char **)0x0) {
                uVar13 = (ulong)ppcVar6 / (ulong)ppcStack_d8;
              }
              ppcVar11 = (char **)((long)ppcVar6 - uVar13 * (long)ppcStack_d8);
            }
          }
        }
        plVar15 = *(long **)(pcStack_e0 + (long)ppcVar11 * 8);
        if (plVar15 == (long *)0x0) {
          *plStack_88 = (long)uStack_d0;
          uStack_d0 = plStack_88;
          *(undefined8 **)(pcStack_e0 + (long)ppcVar11 * 8) = &uStack_d0;
          if (*plStack_88 != 0) {
            ppcVar11 = *(char ***)(*plStack_88 + 8);
            if (((ulong)ppcVar12 & (long)ppcVar12 - 1U) == 0) {
              ppcVar11 = (char **)((ulong)ppcVar11 & (long)ppcVar12 - 1U);
            }
            else if (ppcVar12 <= ppcVar11) {
              uVar13 = 0;
              if (ppcVar12 != (char **)0x0) {
                uVar13 = (ulong)ppcVar11 / (ulong)ppcVar12;
              }
              ppcVar11 = (char **)((long)ppcVar11 - uVar13 * (long)ppcVar12);
            }
            *(long **)(pcStack_e0 + (long)ppcVar11 * 8) = plStack_88;
          }
        }
        else {
          *plStack_88 = *plVar15;
          *plVar15 = (long)plStack_88;
        }
        lStack_c8 = lStack_c8 + 1;
LAB_1094b6a38:
        pcVar3 = *(char **)(pcVar16 + 8);
        pcVar17 = pcVar16;
        if (*(char **)(pcVar16 + 8) == (char *)0x0) {
          do {
            pcVar16 = *(char **)(pcVar17 + 0x10);
            bVar5 = *(char **)pcVar16 != pcVar17;
            pcVar17 = pcVar16;
          } while (bVar5);
        }
        else {
          do {
            pcVar16 = pcVar3;
            pcVar3 = *(char **)pcVar16;
          } while (*(char **)pcVar16 != (char *)0x0);
        }
      } while (pcVar16 != pcVar14);
    }
    FUN_1094b6c68(&uStack_130,&pcStack_e0);
    func_0x0001092b0b8c(&pcStack_e0);
    FUN_1094b6c68(param_1 + 8,&uStack_130);
    func_0x0001092b0b8c(&uStack_130);
  }
  if (cStack_131 < '\0') {
    __ZdlPv(auStack_148[0]);
  }
  return param_1;
}



/* Entry: 1094b6c68; end: 1094b6d5b;  */

void FUN_1094b6c68(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x0001094b6d08();
  lVar3 = *param_2;
  *param_2 = 0;
  lVar2 = *param_1;
  *param_1 = lVar3;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = lVar2;
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar2 + 8);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 1094b6d5c; end: 1094b807b;  */

undefined8 FUN_1094b6d5c(long *param_1,long *param_2,long *param_3,float *****param_4)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  float *****pppppfVar9;
  float *****pppppfVar10;
  float *****pppppfVar11;
  long lVar12;
  float *****pppppfVar13;
  undefined8 *puVar14;
  float ****ppppfVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  int iVar19;
  undefined8 *puVar20;
  int *piVar21;
  float fVar22;
  int iVar23;
  float fVar25;
  float ****ppppfVar24;
  int iVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  double dVar36;
  float fVar38;
  undefined1 auVar37 [16];
  double dVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  int iStack_33c;
  float ****ppppfStack_330;
  float ****ppppfStack_328;
  float ****ppppfStack_320;
  undefined8 uStack_318;
  uint uStack_308;
  uint uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  float ****ppppfStack_2f8;
  undefined8 uStack_2f0;
  uint uStack_2e8;
  uint uStack_2e4;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  float ***pppfStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_298;
  long lStack_290;
  long *plStack_288;
  long alStack_280 [2];
  float ****ppppfStack_270;
  float ****ppppfStack_268;
  long lStack_260;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long lStack_218;
  float *pfStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  long *plStack_1a8;
  long alStack_1a0 [35];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = param_1 + 4;
  if (plVar2 != param_2) {
    if (param_2[7] != 0) {
      piVar21 = (int *)(param_2[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = *piVar21 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (param_1[0xb] != 0) {
      piVar21 = (int *)(param_1[0xb] + 0x14);
      do {
        iVar23 = *piVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = iVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(plVar2);
      }
    }
    param_1[0xb] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    if (*(int *)((long)param_1 + 0x24) < 1) {
      *(int *)plVar2 = (int)*param_2;
LAB_1094b6e40:
      if (2 < *(int *)((long)param_2 + 4)) goto LAB_1094b6e74;
      *(int *)((long)param_1 + 0x24) = *(int *)((long)param_2 + 4);
      param_1[5] = param_2[1];
      puVar14 = (undefined8 *)param_2[9];
      puVar20 = (undefined8 *)param_1[0xd];
      *puVar20 = *puVar14;
      puVar20[1] = puVar14[1];
    }
    else {
      lVar12 = 0;
      lVar16 = param_1[0xc];
      do {
        *(undefined4 *)(lVar16 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)((long)param_1 + 0x24));
      *(int *)plVar2 = (int)*param_2;
      if (*(int *)((long)param_1 + 0x24) < 3) goto LAB_1094b6e40;
LAB_1094b6e74:
      func_0x000109a84868(plVar2,param_2);
    }
    lVar12 = param_2[2];
    param_1[7] = param_2[3];
    param_1[6] = lVar12;
    lVar12 = param_2[4];
    param_1[9] = param_2[5];
    param_1[8] = lVar12;
    lVar12 = param_2[6];
    param_1[0xb] = param_2[7];
    param_1[10] = lVar12;
  }
  if (*(int *)(*param_1 + 0x34) - 3U < 2) {
    FUN_1094c59c0(&ppppfStack_330,*param_3,param_3[1],0x2a,0x30);
    FUN_1094c59c0(&ppppfStack_270,*param_3,param_3[1],0x24,0x2a);
    piVar21 = (int *)*param_3;
    lVar12 = *param_1;
    fVar22 = *(float *)(lVar12 + 0x18);
    fVar44 = (float)((ulong)ppppfStack_330 >> 0x20);
    fVar28 = (float)((ulong)ppppfStack_270 >> 0x20);
    fVar41 = (SUB84(ppppfStack_330,0) + SUB84(ppppfStack_270,0)) * 0.5;
    fVar42 = (fVar44 + fVar28) * 0.5;
    uVar34 = NEON_scvtf(CONCAT44((int)((ulong)*(undefined8 *)(piVar21 + 0x60) >> 0x20) +
                                 (int)((ulong)*(undefined8 *)(piVar21 + 0x6c) >> 0x20),
                                 (int)*(undefined8 *)(piVar21 + 0x60) +
                                 (int)*(undefined8 *)(piVar21 + 0x6c)),4);
    fVar33 = fVar41 - (float)uVar34 * 0.5;
    fVar38 = fVar42 - (float)((ulong)uVar34 >> 0x20) * 0.5;
    uVar34 = NEON_rev64(CONCAT44(fVar38,fVar33),4);
    fVar43 = SUB84(ppppfStack_330,0) - SUB84(ppppfStack_270,0);
    fVar44 = fVar44 - fVar28;
    fVar28 = fVar43 - (float)uVar34;
    fVar25 = fVar44 + (float)((ulong)uVar34 >> 0x20);
    fVar27 = fVar25;
    _atan2f();
    *(float *)(param_1 + 0x14) = fVar27 * 57.29578;
    fStack_1e0 = fVar41 - fVar33 * fVar22;
    fStack_1dc = fVar42 - fVar38 * fVar22;
    fVar41 = fVar41 - fVar33 * fVar22;
    fVar42 = fVar42 - fVar38 * fVar22;
    if (*(int *)(lVar12 + 0x34) == 4) {
      fStack_1d8 = SQRT((float)(piVar21[0x21] - piVar21[1]) * (float)(piVar21[0x21] - piVar21[1]) +
                        (float)(piVar21[0x20] - *piVar21) * (float)(piVar21[0x20] - *piVar21));
    }
    else {
      fVar27 = SQRT(fVar44 * fVar44 + fVar43 * fVar43) * 4.0;
      fStack_1d8 = SQRT(fVar38 * fVar38 + fVar33 * fVar33) * 3.6;
      if (fStack_1d8 <= fVar27) {
        fStack_1d8 = fVar27;
      }
      fStack_1d8 = fStack_1d8 * 0.5;
    }
    fVar27 = SQRT(fVar25 * fVar25 + fVar28 * fVar28);
    fVar28 = fVar28 / fVar27;
    fVar22 = fVar25 / fVar27;
    auVar37._4_4_ = fVar22;
    auVar37._0_4_ = fVar28;
    auVar37._8_4_ = fStack_1d8;
    auVar37._12_4_ = fVar22;
    auVar40._4_4_ = fVar22;
    auVar40._0_4_ = fVar28;
    auVar40._8_4_ = fStack_1d8;
    auVar40._12_4_ = fVar22;
    auVar37 = NEON_ext(auVar37,auVar40,4,1);
    fStack_1d8 = *(float *)(lVar12 + 0x1c) * fStack_1d8;
    auVar30._0_4_ = (auVar37._0_4_ - fVar28) * fStack_1d8;
    auVar30._4_4_ = (-fVar28 - fVar22) * fStack_1d8;
    auVar30._8_4_ = fStack_1d8 * (-fVar28 - fVar22);
    auVar30._12_4_ = (auVar37._12_4_ - fVar22) * fStack_1d8;
    uStack_1f0._0_4_ = fStack_1e0 + auVar30._0_4_;
    uStack_1f0._4_4_ = fStack_1dc + auVar30._4_4_;
    uStack_1e8._0_4_ = fVar41 + auVar30._8_4_;
    uStack_1e8._4_4_ = fVar42 + auVar30._12_4_;
    fStack_1d8 = (fVar28 + fVar25 / fVar27) * fStack_1d8;
    auVar37 = NEON_ext(auVar30,auVar30,8,1);
    auVar37 = NEON_ext(auVar30,auVar37,0xc,1);
    fStack_1e0 = fStack_1e0 + auVar37._0_4_;
    fStack_1dc = fStack_1dc + fStack_1d8;
    fStack_1d8 = fVar41 + fStack_1d8;
    fStack_1d4 = fVar42 + auVar37._12_4_;
    fStack_248 = 0.0;
    uStack_244 = 0;
    uStack_240 = 0;
    uStack_23c = 0;
    fStack_250 = 0.0;
    fStack_24c = 0.0;
    FUN_1094c5b14(&fStack_250,&uStack_1f0,&uStack_1d0,4);
    plVar2 = param_1 + 0x2d;
    param_1[0x2e] = param_1[0x2d];
    FUN_1093f458c(plVar2,CONCAT44(uStack_244,fStack_248) - CONCAT44(fStack_24c,fStack_250) >> 3);
    plVar18 = (long *)CONCAT44(fStack_24c,fStack_250);
    plVar5 = (long *)CONCAT44(uStack_244,fStack_248);
    if (plVar18 != plVar5) {
      plVar7 = (long *)param_1[0x2e];
      do {
        if (plVar7 < (long *)param_1[0x2f]) {
          plVar8 = plVar7 + 1;
          *plVar7 = *plVar18;
        }
        else {
          plVar8 = plVar2;
          FUN_1092cbf20(plVar2,plVar18);
        }
        param_1[0x2e] = (long)plVar8;
        plVar18 = plVar18 + 1;
        plVar7 = plVar8;
      } while (plVar18 != plVar5);
    }
    fStack_1e0 = 0.0;
    fStack_1dc = 0.0;
    uStack_1f0._0_4_ = -2.4060936e-38;
    uStack_1e8 = (float *****)plVar2;
    FUN_109b42928(&uStack_2d0,&uStack_1f0);
    param_1[0x11] = (long)pppfStack_2c8;
    param_1[0x10] = (long)uStack_2d0;
    if (CONCAT44(fStack_24c,fStack_250) != 0) {
      fStack_248 = fStack_250;
      uStack_244 = fStack_24c;
      __ZdlPv();
    }
LAB_1094b7590:
    fStack_250 = 127.5;
    pfStack_210 = &fStack_248;
    uStack_244 = 0;
    uStack_240 = 0;
    fStack_24c = 0.0;
    fStack_248 = 0.0;
    uStack_234 = 0;
    uStack_230 = 0;
    uStack_23c = 0;
    uStack_238 = 0;
    uStack_224 = 0;
    uStack_22c = 0;
    uStack_228 = 0;
    lStack_218 = 0;
    uStack_220 = 0;
    uStack_21c = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_2e8 = *(uint *)(param_1 + 0x10);
    uStack_2e4 = *(uint *)((long)param_1 + 0x84);
    *(uint *)(param_1 + 0x12) = -uStack_2e4 & ((int)-uStack_2e4 >> 0x1f ^ 0xffffffffU);
    iVar23 = *(int *)((long)param_1 + 0x8c) + uStack_2e4;
    piVar21 = (int *)param_2[8];
    uVar1 = (iVar23 - *piVar21) + 1;
    *(uint *)((long)param_1 + 0x94) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    *(uint *)(param_1 + 0x13) = -uStack_2e8 & ((int)-uStack_2e8 >> 0x1f ^ 0xffffffffU);
    iVar26 = (int)param_1[0x11] + uStack_2e8;
    uVar1 = (iVar26 - piVar21[1]) + 1;
    *(uint *)((long)param_1 + 0x9c) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    uStack_2e8 = uStack_2e8 & ((int)uStack_2e8 >> 0x1f ^ 0xffffffffU);
    iVar19 = piVar21[1];
    if (iVar26 <= piVar21[1]) {
      iVar19 = iVar26;
    }
    iVar19 = iVar19 - uStack_2e8;
    iVar26 = *piVar21;
    if (iVar23 <= *piVar21) {
      iVar26 = iVar23;
    }
    if (iVar19 < 1) {
LAB_1094b7644:
      uStack_2e8 = 0;
      uStack_2e4 = 0;
      iVar19 = 0;
      iVar23 = 0;
    }
    else {
      uStack_2e4 = uStack_2e4 & ((int)uStack_2e4 >> 0x1f ^ 0xffffffffU);
      iVar23 = iVar26 - uStack_2e4;
      if (iVar23 == 0 || iVar26 < (int)uStack_2e4) goto LAB_1094b7644;
    }
    uStack_2e0 = (float *****)CONCAT44(iVar23,iVar19);
    puStack_208 = &uStack_200;
    FUN_109a852c8(&uStack_1f0,param_2,&uStack_2e8);
    ppppfStack_320 = (float ****)0x0;
    ppppfStack_330 = (float ****)CONCAT44(ppppfStack_330._4_4_,0x1010000);
    ppppfStack_270 = (float ****)CONCAT44(ppppfStack_270._4_4_,0x2010000);
    ppppfStack_268 = (float ****)&fStack_250;
    lStack_260 = 0;
    pppfStack_2c8 = (float ***)0x4060000000000000;
    uStack_2d0 = (float ****)0x4060000000000000;
    uStack_2b8 = 0x4060000000000000;
    lStack_2c0 = 0x4060000000000000;
    ppppfStack_328 = (float ****)&uStack_1f0;
    FUN_109a4a0a4(&ppppfStack_330,&ppppfStack_270,(int)param_1[0x12],
                  *(undefined4 *)((long)param_1 + 0x94),(int)param_1[0x13],
                  *(undefined4 *)((long)param_1 + 0x9c),*(undefined4 *)(*param_1 + 0x20),&uStack_2d0
                 );
    if (lStack_1b8 != 0) {
      piVar21 = (int *)(lStack_1b8 + 0x14);
      do {
        iVar23 = *piVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = iVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(&uStack_1f0);
      }
    }
    lStack_1b8 = 0;
    fStack_1d8 = 0.0;
    fStack_1d4 = 0.0;
    fStack_1e0 = 0.0;
    fStack_1dc = 0.0;
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    if (0 < (int)uStack_1f0._4_4_) {
      lVar12 = 0;
      do {
        *(undefined4 *)((long)puStack_1b0 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)uStack_1f0._4_4_);
    }
    if (plStack_1a8 != alStack_1a0 && plStack_1a8 != (long *)0x0) {
      _free(plStack_1a8[-1]);
    }
    uVar1 = *(uint *)*param_1;
    auVar37 = *(undefined1 (*) [16])param_1[0x2d];
    uVar34 = *(undefined8 *)((undefined1 (*) [16])param_1[0x2d])[1];
    auVar40 = NEON_ext(auVar37,auVar37,8,1);
    auVar31._4_12_ = auVar37._4_12_;
    auVar31._0_4_ = auVar40._4_4_;
    uVar35 = NEON_ext(uVar34,auVar31._0_8_,4,1);
    dVar36 = (double)(auVar40._0_4_ - (float)uVar34);
    dVar39 = (double)(auVar37._0_4_ - auVar40._0_4_);
    dVar29 = (double)(auVar40._4_4_ - (float)uVar35);
    dVar32 = (double)(auVar37._4_4_ - (float)((ulong)uVar35 >> 0x20));
    dVar29 = (double)(int)uVar1 / SQRT(dVar29 * dVar29 + dVar36 * dVar36);
    dVar32 = (double)(int)uVar1 / SQRT(dVar32 * dVar32 + dVar39 * dVar39);
    if (dVar32 <= dVar29) {
      dVar29 = dVar32;
    }
    iVar23 = (int)*(undefined8 *)pfStack_210 / 2;
    iVar26 = (int)((ulong)*(undefined8 *)pfStack_210 >> 0x20) / 2;
    uVar34 = NEON_scvtf(CONCAT44(iVar26,iVar23),4);
    uStack_2d0 = (float ****)NEON_rev64(uVar34,4);
    FUN_109b1f55c(&uStack_1f0,(double)*(float *)(param_1 + 0x14),dVar29,&uStack_2d0);
    pppppfVar11 = (float *****)(param_1 + 0x30);
    if (param_1[0x37] != 0) {
      piVar21 = (int *)(param_1[0x37] + 0x14);
      do {
        iVar19 = *piVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar19 + -1 == 0) {
        func_0x000109a848d4(pppppfVar11);
      }
    }
    param_1[0x37] = 0;
    param_1[0x33] = 0;
    param_1[0x32] = 0;
    param_1[0x35] = 0;
    param_1[0x34] = 0;
    if (0 < *(int *)((long)param_1 + 0x184)) {
      lVar12 = 0;
      lVar16 = param_1[0x38];
      do {
        *(undefined4 *)(lVar16 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)((long)param_1 + 0x184));
    }
    param_1[0x31] = (long)uStack_1e8;
    param_1[0x30] = CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0);
    param_1[0x33] = CONCAT44(fStack_1d4,fStack_1d8);
    param_1[0x32] = CONCAT44(fStack_1dc,fStack_1e0);
    param_1[0x35] = CONCAT44(uStack_1c4,uStack_1c8);
    param_1[0x34] = CONCAT44(uStack_1cc,uStack_1d0);
    param_1[0x37] = lStack_1b8;
    param_1[0x36] = CONCAT44(uStack_1bc,uStack_1c0);
    plVar18 = (long *)param_1[0x39];
    plVar2 = param_1 + 0x3a;
    if (plVar18 != plVar2) {
      if (plVar18 != (long *)0x0) {
        _free(plVar18[-1]);
      }
      param_1[0x38] = (long)(param_1 + 0x31);
      param_1[0x39] = (long)plVar2;
      plVar18 = plVar2;
    }
    if ((int)uStack_1f0._4_4_ < 3) {
      puVar14 = (undefined8 *)((ulong)&uStack_1f0 | 4);
      *plVar18 = *plStack_1a8;
      plVar18[1] = plStack_1a8[1];
      uStack_1f0._0_4_ = 127.5;
      puVar14[1] = 0;
      *puVar14 = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      *(undefined8 *)((long)puVar14 + 0x34) = 0;
      *(undefined8 *)((long)puVar14 + 0x2c) = 0;
      if (plStack_1a8 != alStack_1a0) {
        _free(plStack_1a8[-1]);
        plVar18 = (long *)param_1[0x39];
      }
    }
    else {
      param_1[0x38] = (long)puStack_1b0;
      param_1[0x39] = (long)plStack_1a8;
      plVar18 = plStack_1a8;
    }
    lVar12 = param_1[0x32];
    *(double *)(lVar12 + 0x10) = *(double *)(lVar12 + 0x10) + (double)((int)uVar1 / 2 - iVar26);
    *(double *)(lVar12 + *plVar18 + 0x10) =
         *(double *)(lVar12 + *plVar18 + 0x10) + (double)((int)uVar1 / 2 - iVar23);
    if (dVar29 <= 0.5) {
      uStack_1f0._0_4_ = 127.5;
      ppppfStack_328 = (float ****)&uStack_1f0;
      uStack_1e8._4_4_ = 0.0;
      fStack_1e0 = 0.0;
      uStack_1f0._4_4_ = 0.0;
      uStack_1e8._0_4_ = 0.0;
      puStack_1b0 = &uStack_1e8;
      fStack_1d4 = 0.0;
      uStack_1d0 = 0;
      fStack_1dc = 0.0;
      fStack_1d8 = 0.0;
      uStack_1c4 = 0;
      uStack_1cc = 0;
      uStack_1c8 = 0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      alStack_1a0[0] = 0;
      alStack_1a0[1] = 0;
      lStack_2c0 = 0;
      uStack_2d0 = (float ****)CONCAT44(uStack_2d0._4_4_,0x1010000);
      pppfStack_2c8 = (float ***)&fStack_250;
      ppppfStack_330 = (float ****)CONCAT44(ppppfStack_330._4_4_,0x2010000);
      ppppfStack_320 = (float ****)0x0;
      ppppfStack_270 = (float ****)0x0;
      plStack_1a8 = alStack_1a0;
      FUN_109b0f718(dVar29,dVar29,&uStack_2d0,&ppppfStack_330,&ppppfStack_270,3);
      uVar34 = NEON_scvtf(*puStack_1b0,4);
      fVar28 = (float)uVar34 * 0.5;
      fVar27 = (float)((ulong)uVar34 >> 0x20) * 0.5;
      ppppfStack_330 = (float ****)NEON_rev64(CONCAT44(fVar27,fVar28),4);
      FUN_109b1f55c(&uStack_2d0,(double)*(float *)(param_1 + 0x14),0x3ff0000000000000,
                    &ppppfStack_330);
      *(double *)(lStack_2c0 + 0x10) =
           ((double)(int)uVar1 / 2.0 - (double)fVar27) + *(double *)(lStack_2c0 + 0x10);
      *(double *)(lStack_2c0 + *plStack_288 + 0x10) =
           ((double)(int)uVar1 / 2.0 - (double)fVar28) +
           *(double *)(lStack_2c0 + *plStack_288 + 0x10);
      lStack_260 = 0;
      ppppfStack_270 = (float ****)CONCAT44(ppppfStack_270._4_4_,0x1010000);
      ppppfStack_268 = (float ****)&uStack_1f0;
      uStack_2e8 = 0x2010000;
      uStack_2d8 = 0;
      uStack_2f0 = 0;
      uStack_300 = 0x1010000;
      ppppfStack_328 = (float ****)0x0;
      ppppfStack_330 = (float ****)0x0;
      uStack_318 = 0;
      ppppfStack_320 = (float ****)0x0;
      uStack_308 = uVar1;
      uStack_304 = uVar1;
      ppppfStack_2f8 = (float ****)&uStack_2d0;
      uStack_2e0 = param_4;
      FUN_109b1e030(&ppppfStack_270,&uStack_2e8,&uStack_300,&uStack_308,2,1,&ppppfStack_330);
      if (lStack_298 != 0) {
        piVar21 = (int *)(lStack_298 + 0x14);
        do {
          iVar23 = *piVar21;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar4) {
            *piVar21 = iVar23 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(&uStack_2d0);
        }
      }
      lStack_298 = 0;
      uStack_2b8 = 0;
      lStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      if (0 < uStack_2d0._4_4_) {
        lVar12 = 0;
        do {
          *(undefined4 *)(lStack_290 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < uStack_2d0._4_4_);
      }
      if (plStack_288 != alStack_280 && plStack_288 != (long *)0x0) {
        _free(plStack_288[-1]);
      }
      if (lStack_1b8 != 0) {
        piVar21 = (int *)(lStack_1b8 + 0x14);
        do {
          iVar23 = *piVar21;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar4) {
            *piVar21 = iVar23 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(&uStack_1f0);
        }
      }
      lStack_1b8 = 0;
      fStack_1d8 = 0.0;
      fStack_1d4 = 0.0;
      fStack_1e0 = 0.0;
      fStack_1dc = 0.0;
      uStack_1c8 = 0;
      uStack_1c4 = 0;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      if (0 < (int)uStack_1f0._4_4_) {
        lVar12 = 0;
        do {
          *(undefined4 *)((long)puStack_1b0 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)uStack_1f0._4_4_);
      }
      if (plStack_1a8 != alStack_1a0 && plStack_1a8 != (long *)0x0) {
        _free(plStack_1a8[-1]);
      }
    }
    else {
      lStack_2c0 = 0;
      uStack_2d0 = (float ****)CONCAT44(uStack_2d0._4_4_,0x1010000);
      pppfStack_2c8 = (float ***)&fStack_250;
      ppppfStack_330 = (float ****)CONCAT44(ppppfStack_330._4_4_,0x2010000);
      ppppfStack_320 = (float ****)0x0;
      lStack_260 = 0;
      ppppfStack_270 = (float ****)CONCAT44(ppppfStack_270._4_4_,0x1010000);
      uStack_1e8._0_4_ = 0.0;
      uStack_1e8._4_4_ = 0.0;
      uStack_1f0._0_4_ = 0.0;
      uStack_1f0._4_4_ = 0.0;
      fStack_1d8 = 0.0;
      fStack_1d4 = 0.0;
      fStack_1e0 = 0.0;
      fStack_1dc = 0.0;
      ppppfStack_328 = (float ****)param_4;
      uStack_2e8 = uVar1;
      uStack_2e4 = uVar1;
      ppppfStack_268 = (float ****)pppppfVar11;
      FUN_109b1e030(&uStack_2d0,&ppppfStack_330,&ppppfStack_270,&uStack_2e8,2,1,&uStack_1f0);
    }
    uStack_1f0._0_4_ = 127.5;
    uStack_1e8._4_4_ = 0.0;
    fStack_1e0 = 0.0;
    uStack_1f0._4_4_ = 0.0;
    uStack_1e8._0_4_ = 0.0;
    puStack_1b0 = (undefined8 *)((ulong)&uStack_1f0 | 8);
    fStack_1d4 = 0.0;
    uStack_1d0 = 0;
    fStack_1dc = 0.0;
    fStack_1d8 = 0.0;
    uStack_1c4 = 0;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    alStack_1a0[0] = 0;
    alStack_1a0[1] = 0;
    uStack_2d0 = (float ****)CONCAT44(uStack_2d0._4_4_,0x2010000);
    lStack_2c0 = 0;
    pppfStack_2c8 = (float ***)&uStack_1f0;
    plStack_1a8 = alStack_1a0;
    FUN_109a479a0(param_4,&uStack_2d0);
    if (param_1[0x28] != 0) {
      piVar21 = (int *)(param_1[0x28] + 0x14);
      do {
        iVar23 = *piVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = iVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(param_1 + 0x21);
      }
    }
    param_1[0x28] = 0;
    param_1[0x24] = 0;
    param_1[0x23] = 0;
    param_1[0x26] = 0;
    param_1[0x25] = 0;
    if (0 < *(int *)((long)param_1 + 0x10c)) {
      lVar12 = 0;
      lVar16 = param_1[0x29];
      do {
        *(undefined4 *)(lVar16 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)((long)param_1 + 0x10c));
    }
    param_1[0x22] = CONCAT44(uStack_1e8._4_4_,(float)uStack_1e8);
    param_1[0x21] = CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0);
    param_1[0x24] = CONCAT44(fStack_1d4,fStack_1d8);
    param_1[0x23] = CONCAT44(fStack_1dc,fStack_1e0);
    param_1[0x26] = CONCAT44(uStack_1c4,uStack_1c8);
    param_1[0x25] = CONCAT44(uStack_1cc,uStack_1d0);
    param_1[0x28] = lStack_1b8;
    param_1[0x27] = CONCAT44(uStack_1bc,uStack_1c0);
    plVar18 = (long *)param_1[0x2a];
    plVar2 = param_1 + 0x2b;
    if (plVar18 != plVar2) {
      if (plVar18 != (long *)0x0) {
        _free(plVar18[-1]);
      }
      param_1[0x29] = (long)(param_1 + 0x22);
      param_1[0x2a] = (long)plVar2;
      plVar18 = plVar2;
    }
    if ((int)uStack_1f0._4_4_ < 3) {
      puVar14 = (undefined8 *)((ulong)&uStack_1f0 | 4);
      *plVar18 = *plStack_1a8;
      plVar18[1] = plStack_1a8[1];
      uStack_1f0._0_4_ = 127.5;
      puVar14[1] = 0;
      *puVar14 = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      *(undefined8 *)((long)puVar14 + 0x34) = 0;
      *(undefined8 *)((long)puVar14 + 0x2c) = 0;
      if (plStack_1a8 != alStack_1a0) {
        _free(plStack_1a8[-1]);
      }
    }
    else {
      param_1[0x29] = (long)puStack_1b0;
      param_1[0x2a] = (long)plStack_1a8;
    }
    if (*(int *)(*param_1 + 0x38) == 3) {
      uStack_2d0 = (float ****)0x0;
      pppfStack_2c8 = (float ***)0x0;
      lStack_2c0 = 0;
      FUN_1092c9014(&uStack_2d0,*param_3,param_3[1],param_3[1] - *param_3 >> 3);
      if (uStack_2d0 != (float ****)pppfStack_2c8) {
        lVar12 = param_1[0x10];
        ppppfVar24 = uStack_2d0;
        do {
          ppppfVar15 = ppppfVar24 + 1;
          *ppppfVar24 = (float ***)
                        CONCAT44((int)((ulong)*ppppfVar24 >> 0x20) - (int)((ulong)lVar12 >> 0x20),
                                 (int)*ppppfVar24 - (int)lVar12);
          ppppfVar24 = ppppfVar15;
        } while (ppppfVar15 != (float ****)pppfStack_2c8);
      }
      FUN_1094b807c(&ppppfStack_330,&uStack_2d0,pppppfVar11);
      FUN_109a8261c(&uStack_1f0,*(undefined4 *)(param_4 + 1),*(undefined4 *)((long)param_4 + 0xc),0)
      ;
      (**(code **)(*(long *)CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0) + 0x18))
                ((long *)CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0),&uStack_1f0,param_1 + 0x15,
                 0xffffffff);
      FUN_10918eb6c(&uStack_1f0);
      ppppfStack_270 = (float ****)0x0;
      ppppfStack_268 = (float ****)0x0;
      lStack_260 = 0;
      uStack_1f0._0_4_ = -2.4060934e-38;
      uStack_1e8 = &ppppfStack_330;
      fStack_1e0 = 0.0;
      fStack_1dc = 0.0;
      uStack_2e8 = 0x8203000c;
      uStack_2d8 = 0;
      uStack_2e0 = &ppppfStack_270;
      FUN_109ae2358(&uStack_1f0,&uStack_2e8,0,1);
      uStack_2e8 = 0x3010000;
      uStack_2d8 = 0;
      uStack_2f0 = 0;
      uStack_300 = 0x8103000c;
      uStack_1f0._0_4_ = 0.0;
      uStack_1f0._4_4_ = 1.875;
      uStack_1e8._0_4_ = 0.0;
      uStack_1e8._4_4_ = 0.0;
      fStack_1e0 = 0.0;
      fStack_1dc = 0.0;
      fStack_1d8 = 0.0;
      fStack_1d4 = 0.0;
      ppppfStack_2f8 = (float ****)&ppppfStack_270;
      uStack_2e0 = (float *****)(param_1 + 0x15);
      FUN_109aefa18(&uStack_2e8,&uStack_300,&uStack_1f0,8,0);
      if ((float *****)ppppfStack_270 != (float *****)0x0) {
        ppppfStack_268 = ppppfStack_270;
        __ZdlPv();
      }
      if ((float *****)ppppfStack_330 != (float *****)0x0) {
        ppppfStack_328 = ppppfStack_330;
        __ZdlPv();
      }
      if (uStack_2d0 != (float ****)0x0) {
        pppfStack_2c8 = (float ***)uStack_2d0;
        __ZdlPv();
      }
    }
    if (lStack_218 != 0) {
      piVar21 = (int *)(lStack_218 + 0x14);
      do {
        iVar23 = *piVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = iVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(&fStack_250);
      }
    }
    lStack_218 = 0;
    uStack_238 = 0;
    uStack_234 = 0;
    uStack_240 = 0;
    uStack_23c = 0;
    uStack_228 = 0;
    uStack_224 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    if (0 < (int)fStack_24c) {
      lVar12 = 0;
      do {
        pfStack_210[lVar12] = 0.0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)fStack_24c);
    }
    if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
      _free(puStack_208[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return 1;
    }
    ___stack_chk_fail();
  }
  else {
    fVar28 = (float)(*(int *)(*param_3 + 0x16c) - *(int *)(*param_3 + 0x124));
    _atan2f();
    *(float *)(param_1 + 0x14) = fVar28 * 57.29578;
    uStack_1e8._0_4_ = SUB84(param_3,0);
    uStack_1e8._4_4_ = (float)((ulong)param_3 >> 0x20);
    fStack_1e0 = 0.0;
    fStack_1dc = 0.0;
    uStack_1f0._0_4_ = -2.4060934e-38;
    FUN_109b42928(&uStack_2e8,&uStack_1f0);
    fVar28 = (float)(int)(long)(double)(long)((double)(int)((int)uStack_2e0 + uStack_2e8 * 2) / 2.0)
    ;
    fVar27 = (float)(int)(long)(double)(long)((double)(int)(uStack_2e0._4_4_ + uStack_2e4 * 2) / 2.0
                                             );
    fStack_250 = fVar28;
    fStack_24c = fVar27;
    FUN_109b1f55c(&uStack_1f0,(double)*(float *)(param_1 + 0x14),0x3ff0000000000000,&fStack_250);
    uStack_2d0 = (float ****)CONCAT44(fVar27,fVar28);
    FUN_109b1f55c(&fStack_250,(double)-*(float *)(param_1 + 0x14),0x3ff0000000000000,&uStack_2d0);
    FUN_1094b807c(&uStack_2d0,param_3,&uStack_1f0);
    lVar12 = *param_1;
    iVar23 = *(int *)(lVar12 + 0x34);
    if (iVar23 == 0) {
      ppppfStack_330 = (float ****)CONCAT44(ppppfStack_330._4_4_,0x8103000c);
      ppppfStack_328 = (float ****)&uStack_2d0;
      ppppfStack_320 = (float ****)0x0;
      FUN_109b42928(&uStack_300,&ppppfStack_330);
      FUN_1094c51bc(&ppppfStack_270,*param_1,&uStack_300);
      pppppfVar11 = (float *****)ppppfStack_270;
      pppppfVar10 = (float *****)ppppfStack_268;
LAB_1094b7354:
      ppppfStack_330 = (float ****)0x0;
      ppppfStack_328 = (float ****)0x0;
      ppppfStack_320 = (float ****)0x0;
      iStack_33c = (int)((ulong)pppppfVar11 >> 0x20);
      pppppfVar9 = &ppppfStack_330;
      FUN_1094c5b98(pppppfVar9,(ulong)pppppfVar11 & 0xffffffff,iStack_33c);
      pppppfVar13 = (float *****)ppppfStack_320;
      iVar23 = (int)pppppfVar10 + (int)pppppfVar11;
      iVar26 = (int)((ulong)pppppfVar10 >> 0x20) + iStack_33c;
      if (pppppfVar9 < ppppfStack_320) {
        ppppfVar24 = (float ****)NEON_scvtf(CONCAT44(iVar26,(int)pppppfVar11),4);
        pppppfVar10 = pppppfVar9 + 1;
        *pppppfVar9 = ppppfVar24;
      }
      else {
        pppppfVar10 = &ppppfStack_330;
        ppppfStack_328 = (float ****)pppppfVar9;
        FUN_1094c5cb8(pppppfVar10,(ulong)pppppfVar11 & 0xffffffff,iVar26);
        pppppfVar13 = (float *****)ppppfStack_320;
      }
      if (pppppfVar10 < pppppfVar13) {
        ppppfVar24 = (float ****)NEON_scvtf(CONCAT44(iVar26,iVar23),4);
        pppppfVar11 = pppppfVar10 + 1;
        *pppppfVar10 = ppppfVar24;
      }
      else {
        pppppfVar11 = &ppppfStack_330;
        ppppfStack_328 = (float ****)pppppfVar10;
        FUN_1094c5b98(pppppfVar11,iVar23,iVar26);
        pppppfVar13 = (float *****)ppppfStack_320;
      }
      if (pppppfVar11 < pppppfVar13) {
        pppppfVar10 = pppppfVar11 + 1;
        *(float *)pppppfVar11 = (float)iVar23;
        *(float *)((long)pppppfVar11 + 4) = (float)iStack_33c;
      }
      else {
        pppppfVar10 = &ppppfStack_330;
        ppppfStack_328 = (float ****)pppppfVar11;
        FUN_1094c5cb8(pppppfVar10,iVar23,iStack_33c);
      }
      ppppfStack_328 = (float ****)pppppfVar10;
      FUN_1094b94ac(&ppppfStack_270,&ppppfStack_330,&fStack_250);
      pppppfVar11 = (float *****)(param_1 + 0x2d);
      if (*pppppfVar11 != (float ****)0x0) {
        param_1[0x2e] = (long)*pppppfVar11;
        __ZdlPv();
        *pppppfVar11 = (float ****)0x0;
        param_1[0x2e] = 0;
        param_1[0x2f] = 0;
      }
      param_1[0x2e] = (long)ppppfStack_268;
      *pppppfVar11 = ppppfStack_270;
      param_1[0x2f] = lStack_260;
      lStack_260 = 0;
      ppppfStack_270 = (float ****)CONCAT44(ppppfStack_270._4_4_,0x8103000d);
      ppppfStack_268 = (float ****)pppppfVar11;
      FUN_109b42928(&uStack_300,&ppppfStack_270);
      param_1[0x11] = (long)ppppfStack_2f8;
      param_1[0x10] = CONCAT44(uStack_2fc,uStack_300);
      if ((float *****)ppppfStack_330 != (float *****)0x0) {
        ppppfStack_328 = ppppfStack_330;
        __ZdlPv();
      }
LAB_1094b7488:
      if (uStack_2d0 != (float ****)0x0) {
        pppfStack_2c8 = (float ***)uStack_2d0;
        __ZdlPv();
      }
      if (lStack_218 != 0) {
        piVar21 = (int *)(lStack_218 + 0x14);
        do {
          iVar23 = *piVar21;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar4) {
            *piVar21 = iVar23 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(&fStack_250);
        }
      }
      lStack_218 = 0;
      uStack_238 = 0;
      uStack_234 = 0;
      uStack_240 = 0;
      uStack_23c = 0;
      uStack_228 = 0;
      uStack_224 = 0;
      uStack_230 = 0;
      uStack_22c = 0;
      if (0 < (int)fStack_24c) {
        lVar12 = 0;
        do {
          pfStack_210[lVar12] = 0.0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)fStack_24c);
      }
      if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
        _free(puStack_208[-1]);
      }
      if (lStack_1b8 != 0) {
        piVar21 = (int *)(lStack_1b8 + 0x14);
        do {
          iVar23 = *piVar21;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar4) {
            *piVar21 = iVar23 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar23 + -1 == 0) {
          func_0x000109a848d4(&uStack_1f0);
        }
      }
      lStack_1b8 = 0;
      fStack_1d8 = 0.0;
      fStack_1d4 = 0.0;
      fStack_1e0 = 0.0;
      fStack_1dc = 0.0;
      uStack_1c8 = 0;
      uStack_1c4 = 0;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      if (0 < (int)uStack_1f0._4_4_) {
        lVar12 = 0;
        do {
          *(undefined4 *)((long)puStack_1b0 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)uStack_1f0._4_4_);
      }
      if (plStack_1a8 != alStack_1a0 && plStack_1a8 != (long *)0x0) {
        _free(plStack_1a8[-1]);
      }
      goto LAB_1094b7590;
    }
    if (iVar23 != 1) {
      if (iVar23 == 2) {
        lVar16 = *param_3;
        if ((ulong)(param_3[1] - lVar16) < 0x169) {
          FUN_1094c5b84();
          goto LAB_1094b7f10;
        }
        fVar28 = (float)(*(int *)(lVar16 + 0x168) + *(int *)(lVar16 + 0x150)) / 2.0 -
                 (float)(*(int *)(lVar16 + 0x138) + *(int *)(lVar16 + 0x120)) / 2.0;
        fVar27 = (float)(*(int *)(lVar16 + 0x16c) + *(int *)(lVar16 + 0x154)) / 2.0 -
                 (float)(*(int *)(lVar16 + 0x13c) + *(int *)(lVar16 + 0x124)) / 2.0;
        FUN_1094c5a8c((float)*(int *)(lVar12 + 0xc) / SQRT(fVar27 * fVar27 + fVar28 * fVar28),
                      &ppppfStack_330,param_1,uStack_2d0,pppfStack_2c8);
        pppppfVar11 = (float *****)ppppfStack_330;
        pppppfVar10 = (float *****)ppppfStack_328;
        goto LAB_1094b7354;
      }
      goto LAB_1094b7488;
    }
    uVar17 = (long)pppfStack_2c8 - (long)uStack_2d0 >> 3;
    if ((0x2d < uVar17) && (0x41 < uVar17)) {
      fVar28 = 0.0;
      lVar16 = 0x184;
      do {
        fVar28 = fVar28 + (float)*(int *)((long)uStack_2d0 + lVar16);
        lVar16 = lVar16 + 8;
      } while (lVar16 != 0x214);
      FUN_1094c5a8c((float)*(int *)(lVar12 + 8) /
                    (fVar28 / 19.0 +
                    (float)(*(int *)((long)uStack_2d0 + 0x124) + *(int *)((long)uStack_2d0 + 0x16c))
                    * -0.5),&ppppfStack_330,param_1);
      pppppfVar11 = (float *****)ppppfStack_330;
      pppppfVar10 = (float *****)ppppfStack_328;
      goto LAB_1094b7354;
    }
  }
  FUN_1094c5b84();
LAB_1094b7f10:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1094b7f14);
  (*pcVar6)();
}



/* Entry: 1094b807c; end: 1094b819b;  */

void FUN_1094b807c(undefined8 *param_1,long *param_2,long param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  int *piVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1092c8954(param_1,param_2[1] - *param_2 >> 3);
  piVar5 = (int *)*param_2;
  piVar1 = (int *)param_2[1];
  if (piVar5 != piVar1) {
    pdVar4 = *(double **)(param_3 + 0x10);
    dVar6 = *pdVar4;
    dVar7 = pdVar4[1];
    dVar8 = pdVar4[2];
    pdVar4 = (double *)((long)pdVar4 + **(long **)(param_3 + 0x48));
    dVar9 = *pdVar4;
    dVar10 = pdVar4[1];
    dVar11 = pdVar4[2];
    puVar2 = (undefined8 *)param_1[1];
    do {
      uStack_68 = (undefined4)
                  (long)(double)(long)(dVar11 + dVar10 * (double)piVar5[1] + dVar9 * (double)*piVar5
                                      );
      uStack_64 = (undefined4)
                  (long)(double)(long)(dVar8 + dVar7 * (double)piVar5[1] + dVar6 * (double)*piVar5);
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar3 = puVar2 + 1;
        *(undefined4 *)puVar2 = uStack_64;
        *(undefined4 *)((long)puVar2 + 4) = uStack_68;
      }
      else {
        puVar3 = param_1;
        FUN_1094c5dd8(param_1,&uStack_64,&uStack_68);
      }
      param_1[1] = puVar3;
      piVar5 = piVar5 + 2;
      puVar2 = puVar3;
    } while (piVar5 != piVar1);
  }
  return;
}



/* Entry: 1094b819c; end: 1094b94ab;  */

undefined8 FUN_1094b819c(long *param_1,long *param_2,long *param_3,float *****param_4)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  float *****pppppfVar9;
  float *****pppppfVar10;
  float *****pppppfVar11;
  long lVar12;
  float *****pppppfVar13;
  undefined8 *puVar14;
  float ****ppppfVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  int iVar19;
  undefined8 *puVar20;
  int *piVar21;
  float *pfVar22;
  float fVar23;
  int iVar24;
  float fVar26;
  float ****ppppfVar25;
  int iVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  float fVar34;
  float fVar39;
  undefined8 uVar35;
  undefined8 uVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar40;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  int iStack_33c;
  float ****ppppfStack_330;
  float ****ppppfStack_328;
  float ****ppppfStack_320;
  undefined8 uStack_318;
  uint uStack_308;
  uint uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  float ****ppppfStack_2f8;
  undefined8 uStack_2f0;
  uint uStack_2e8;
  uint uStack_2e4;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  float ***pppfStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_298;
  long lStack_290;
  long *plStack_288;
  long alStack_280 [2];
  float ****ppppfStack_270;
  float ****ppppfStack_268;
  long lStack_260;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long lStack_218;
  float *pfStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  long *plStack_1a8;
  long alStack_1a0 [35];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = param_1 + 4;
  if (plVar2 != param_2) {
    if (param_2[7] != 0) {
      piVar21 = (int *)(param_2[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = *piVar21 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (param_1[0xb] != 0) {
      piVar21 = (int *)(param_1[0xb] + 0x14);
      do {
        iVar24 = *piVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = iVar24 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar24 + -1 == 0) {
        func_0x000109a848d4(plVar2);
      }
    }
    param_1[0xb] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    if (*(int *)((long)param_1 + 0x24) < 1) {
      *(int *)plVar2 = (int)*param_2;
LAB_1094b8280:
      if (2 < *(int *)((long)param_2 + 4)) goto LAB_1094b82b4;
      *(int *)((long)param_1 + 0x24) = *(int *)((long)param_2 + 4);
      param_1[5] = param_2[1];
      puVar14 = (undefined8 *)param_2[9];
      puVar20 = (undefined8 *)param_1[0xd];
      *puVar20 = *puVar14;
      puVar20[1] = puVar14[1];
    }
    else {
      lVar12 = 0;
      lVar16 = param_1[0xc];
      do {
        *(undefined4 *)(lVar16 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)((long)param_1 + 0x24));
      *(int *)plVar2 = (int)*param_2;
      if (*(int *)((long)param_1 + 0x24) < 3) goto LAB_1094b8280;
LAB_1094b82b4:
      func_0x000109a84868(plVar2,param_2);
    }
    lVar12 = param_2[2];
    param_1[7] = param_2[3];
    param_1[6] = lVar12;
    lVar12 = param_2[4];
    param_1[9] = param_2[5];
    param_1[8] = lVar12;
    lVar12 = param_2[6];
    param_1[0xb] = param_2[7];
    param_1[10] = lVar12;
  }
  if (*(int *)(*param_1 + 0x34) - 3U < 2) {
    FUN_1094c5ef8(&ppppfStack_330,*param_3,param_3[1],0x2a,0x30);
    FUN_1094c5ef8(&ppppfStack_270,*param_3,param_3[1],0x24,0x2a);
    pfVar22 = (float *)*param_3;
    lVar12 = *param_1;
    fVar23 = *(float *)(lVar12 + 0x18);
    fVar45 = (float)((ulong)ppppfStack_330 >> 0x20);
    fVar29 = (float)((ulong)ppppfStack_270 >> 0x20);
    fVar42 = (SUB84(ppppfStack_330,0) + SUB84(ppppfStack_270,0)) * 0.5;
    fVar43 = (fVar45 + fVar29) * 0.5;
    fVar34 = fVar42 - ((float)*(undefined8 *)(pfVar22 + 0x6c) +
                      (float)*(undefined8 *)(pfVar22 + 0x60)) * 0.5;
    fVar39 = fVar43 - ((float)((ulong)*(undefined8 *)(pfVar22 + 0x6c) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(pfVar22 + 0x60) >> 0x20)) * 0.5;
    uVar35 = NEON_rev64(CONCAT44(fVar39,fVar34),4);
    fVar44 = SUB84(ppppfStack_330,0) - SUB84(ppppfStack_270,0);
    fVar45 = fVar45 - fVar29;
    fVar29 = fVar44 - (float)uVar35;
    fVar26 = fVar45 + (float)((ulong)uVar35 >> 0x20);
    fVar28 = fVar26;
    _atan2f();
    *(float *)(param_1 + 0x14) = fVar28 * 57.29578;
    fStack_1e0 = fVar42 - fVar34 * fVar23;
    fStack_1dc = fVar43 - fVar39 * fVar23;
    fVar42 = fVar42 - fVar34 * fVar23;
    fVar43 = fVar43 - fVar39 * fVar23;
    if (*(int *)(lVar12 + 0x34) == 4) {
      fStack_1d8 = SQRT((pfVar22[0x21] - pfVar22[1]) * (pfVar22[0x21] - pfVar22[1]) +
                        (pfVar22[0x20] - *pfVar22) * (pfVar22[0x20] - *pfVar22));
    }
    else {
      fVar28 = SQRT(fVar45 * fVar45 + fVar44 * fVar44) * 4.0;
      fStack_1d8 = SQRT(fVar39 * fVar39 + fVar34 * fVar34) * 3.6;
      if (fStack_1d8 <= fVar28) {
        fStack_1d8 = fVar28;
      }
      fStack_1d8 = fStack_1d8 * 0.5;
    }
    fVar28 = SQRT(fVar26 * fVar26 + fVar29 * fVar29);
    fVar29 = fVar29 / fVar28;
    fVar23 = fVar26 / fVar28;
    auVar38._4_4_ = fVar23;
    auVar38._0_4_ = fVar29;
    auVar38._8_4_ = fStack_1d8;
    auVar38._12_4_ = fVar23;
    auVar41._4_4_ = fVar23;
    auVar41._0_4_ = fVar29;
    auVar41._8_4_ = fStack_1d8;
    auVar41._12_4_ = fVar23;
    auVar38 = NEON_ext(auVar38,auVar41,4,1);
    fStack_1d8 = *(float *)(lVar12 + 0x1c) * fStack_1d8;
    auVar31._0_4_ = (auVar38._0_4_ - fVar29) * fStack_1d8;
    auVar31._4_4_ = (-fVar29 - fVar23) * fStack_1d8;
    auVar31._8_4_ = fStack_1d8 * (-fVar29 - fVar23);
    auVar31._12_4_ = (auVar38._12_4_ - fVar23) * fStack_1d8;
    uStack_1f0._0_4_ = fStack_1e0 + auVar31._0_4_;
    uStack_1f0._4_4_ = fStack_1dc + auVar31._4_4_;
    uStack_1e8._0_4_ = fVar42 + auVar31._8_4_;
    uStack_1e8._4_4_ = fVar43 + auVar31._12_4_;
    fStack_1d8 = (fVar29 + fVar26 / fVar28) * fStack_1d8;
    auVar38 = NEON_ext(auVar31,auVar31,8,1);
    auVar38 = NEON_ext(auVar31,auVar38,0xc,1);
    fStack_1e0 = fStack_1e0 + auVar38._0_4_;
    fStack_1dc = fStack_1dc + fStack_1d8;
    fStack_1d8 = fVar42 + fStack_1d8;
    fStack_1d4 = fVar43 + auVar38._12_4_;
    fStack_248 = 0.0;
    uStack_244 = 0;
    uStack_240 = 0;
    uStack_23c = 0;
    fStack_250 = 0.0;
    fStack_24c = 0.0;
    FUN_1094c5b14(&fStack_250,&uStack_1f0,&uStack_1d0,4);
    plVar2 = param_1 + 0x2d;
    param_1[0x2e] = param_1[0x2d];
    FUN_1093f458c(plVar2,CONCAT44(uStack_244,fStack_248) - CONCAT44(fStack_24c,fStack_250) >> 3);
    plVar18 = (long *)CONCAT44(fStack_24c,fStack_250);
    plVar5 = (long *)CONCAT44(uStack_244,fStack_248);
    if (plVar18 != plVar5) {
      plVar7 = (long *)param_1[0x2e];
      do {
        if (plVar7 < (long *)param_1[0x2f]) {
          plVar8 = plVar7 + 1;
          *plVar7 = *plVar18;
        }
        else {
          plVar8 = plVar2;
          FUN_1092cbf20(plVar2,plVar18);
        }
        param_1[0x2e] = (long)plVar8;
        plVar18 = plVar18 + 1;
        plVar7 = plVar8;
      } while (plVar18 != plVar5);
    }
    fStack_1e0 = 0.0;
    fStack_1dc = 0.0;
    uStack_1f0._0_4_ = -2.4060936e-38;
    uStack_1e8 = (float *****)plVar2;
    FUN_109b42928(&uStack_2d0,&uStack_1f0);
    param_1[0x11] = (long)pppfStack_2c8;
    param_1[0x10] = (long)uStack_2d0;
    if (CONCAT44(fStack_24c,fStack_250) != 0) {
      fStack_248 = fStack_250;
      uStack_244 = fStack_24c;
      __ZdlPv();
    }
LAB_1094b89b8:
    fStack_250 = 127.5;
    pfStack_210 = &fStack_248;
    uStack_244 = 0;
    uStack_240 = 0;
    fStack_24c = 0.0;
    fStack_248 = 0.0;
    uStack_234 = 0;
    uStack_230 = 0;
    uStack_23c = 0;
    uStack_238 = 0;
    uStack_224 = 0;
    uStack_22c = 0;
    uStack_228 = 0;
    lStack_218 = 0;
    uStack_220 = 0;
    uStack_21c = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_2e8 = *(uint *)(param_1 + 0x10);
    uStack_2e4 = *(uint *)((long)param_1 + 0x84);
    *(uint *)(param_1 + 0x12) = -uStack_2e4 & ((int)-uStack_2e4 >> 0x1f ^ 0xffffffffU);
    iVar24 = *(int *)((long)param_1 + 0x8c) + uStack_2e4;
    piVar21 = (int *)param_2[8];
    uVar1 = (iVar24 - *piVar21) + 1;
    *(uint *)((long)param_1 + 0x94) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    *(uint *)(param_1 + 0x13) = -uStack_2e8 & ((int)-uStack_2e8 >> 0x1f ^ 0xffffffffU);
    iVar27 = (int)param_1[0x11] + uStack_2e8;
    uVar1 = (iVar27 - piVar21[1]) + 1;
    *(uint *)((long)param_1 + 0x9c) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    uStack_2e8 = uStack_2e8 & ((int)uStack_2e8 >> 0x1f ^ 0xffffffffU);
    iVar19 = piVar21[1];
    if (iVar27 <= piVar21[1]) {
      iVar19 = iVar27;
    }
    iVar19 = iVar19 - uStack_2e8;
    iVar27 = *piVar21;
    if (iVar24 <= *piVar21) {
      iVar27 = iVar24;
    }
    if (iVar19 < 1) {
LAB_1094b8a6c:
      uStack_2e8 = 0;
      uStack_2e4 = 0;
      iVar19 = 0;
      iVar24 = 0;
    }
    else {
      uStack_2e4 = uStack_2e4 & ((int)uStack_2e4 >> 0x1f ^ 0xffffffffU);
      iVar24 = iVar27 - uStack_2e4;
      if (iVar24 == 0 || iVar27 < (int)uStack_2e4) goto LAB_1094b8a6c;
    }
    uStack_2e0 = (float *****)CONCAT44(iVar24,iVar19);
    puStack_208 = &uStack_200;
    FUN_109a852c8(&uStack_1f0,param_2,&uStack_2e8);
    ppppfStack_320 = (float ****)0x0;
    ppppfStack_330 = (float ****)CONCAT44(ppppfStack_330._4_4_,0x1010000);
    ppppfStack_270 = (float ****)CONCAT44(ppppfStack_270._4_4_,0x2010000);
    ppppfStack_268 = (float ****)&fStack_250;
    lStack_260 = 0;
    pppfStack_2c8 = (float ***)0x4060000000000000;
    uStack_2d0 = (float ****)0x4060000000000000;
    uStack_2b8 = 0x4060000000000000;
    lStack_2c0 = 0x4060000000000000;
    ppppfStack_328 = (float ****)&uStack_1f0;
    FUN_109a4a0a4(&ppppfStack_330,&ppppfStack_270,(int)param_1[0x12],
                  *(undefined4 *)((long)param_1 + 0x94),(int)param_1[0x13],
                  *(undefined4 *)((long)param_1 + 0x9c),*(undefined4 *)(*param_1 + 0x20),&uStack_2d0
                 );
    if (lStack_1b8 != 0) {
      piVar21 = (int *)(lStack_1b8 + 0x14);
      do {
        iVar24 = *piVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = iVar24 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar24 + -1 == 0) {
        func_0x000109a848d4(&uStack_1f0);
      }
    }
    lStack_1b8 = 0;
    fStack_1d8 = 0.0;
    fStack_1d4 = 0.0;
    fStack_1e0 = 0.0;
    fStack_1dc = 0.0;
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    if (0 < (int)uStack_1f0._4_4_) {
      lVar12 = 0;
      do {
        *(undefined4 *)((long)puStack_1b0 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)uStack_1f0._4_4_);
    }
    if (plStack_1a8 != alStack_1a0 && plStack_1a8 != (long *)0x0) {
      _free(plStack_1a8[-1]);
    }
    uVar1 = *(uint *)*param_1;
    auVar38 = *(undefined1 (*) [16])param_1[0x2d];
    uVar35 = *(undefined8 *)((undefined1 (*) [16])param_1[0x2d])[1];
    auVar41 = NEON_ext(auVar38,auVar38,8,1);
    auVar32._4_12_ = auVar38._4_12_;
    auVar32._0_4_ = auVar41._4_4_;
    uVar36 = NEON_ext(uVar35,auVar32._0_8_,4,1);
    dVar37 = (double)(auVar41._0_4_ - (float)uVar35);
    dVar40 = (double)(auVar38._0_4_ - auVar41._0_4_);
    dVar30 = (double)(auVar41._4_4_ - (float)uVar36);
    dVar33 = (double)(auVar38._4_4_ - (float)((ulong)uVar36 >> 0x20));
    dVar30 = (double)(int)uVar1 / SQRT(dVar30 * dVar30 + dVar37 * dVar37);
    dVar33 = (double)(int)uVar1 / SQRT(dVar33 * dVar33 + dVar40 * dVar40);
    if (dVar33 <= dVar30) {
      dVar30 = dVar33;
    }
    iVar24 = (int)*(undefined8 *)pfStack_210 / 2;
    iVar27 = (int)((ulong)*(undefined8 *)pfStack_210 >> 0x20) / 2;
    uVar35 = NEON_scvtf(CONCAT44(iVar27,iVar24),4);
    uStack_2d0 = (float ****)NEON_rev64(uVar35,4);
    FUN_109b1f55c(&uStack_1f0,(double)*(float *)(param_1 + 0x14),dVar30,&uStack_2d0);
    pppppfVar11 = (float *****)(param_1 + 0x30);
    if (param_1[0x37] != 0) {
      piVar21 = (int *)(param_1[0x37] + 0x14);
      do {
        iVar19 = *piVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar19 + -1 == 0) {
        func_0x000109a848d4(pppppfVar11);
      }
    }
    param_1[0x37] = 0;
    param_1[0x33] = 0;
    param_1[0x32] = 0;
    param_1[0x35] = 0;
    param_1[0x34] = 0;
    if (0 < *(int *)((long)param_1 + 0x184)) {
      lVar12 = 0;
      lVar16 = param_1[0x38];
      do {
        *(undefined4 *)(lVar16 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)((long)param_1 + 0x184));
    }
    param_1[0x31] = (long)uStack_1e8;
    param_1[0x30] = CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0);
    param_1[0x33] = CONCAT44(fStack_1d4,fStack_1d8);
    param_1[0x32] = CONCAT44(fStack_1dc,fStack_1e0);
    param_1[0x35] = CONCAT44(uStack_1c4,uStack_1c8);
    param_1[0x34] = CONCAT44(uStack_1cc,uStack_1d0);
    param_1[0x37] = lStack_1b8;
    param_1[0x36] = CONCAT44(uStack_1bc,uStack_1c0);
    plVar18 = (long *)param_1[0x39];
    plVar2 = param_1 + 0x3a;
    if (plVar18 != plVar2) {
      if (plVar18 != (long *)0x0) {
        _free(plVar18[-1]);
      }
      param_1[0x38] = (long)(param_1 + 0x31);
      param_1[0x39] = (long)plVar2;
      plVar18 = plVar2;
    }
    if ((int)uStack_1f0._4_4_ < 3) {
      puVar14 = (undefined8 *)((ulong)&uStack_1f0 | 4);
      *plVar18 = *plStack_1a8;
      plVar18[1] = plStack_1a8[1];
      uStack_1f0._0_4_ = 127.5;
      puVar14[1] = 0;
      *puVar14 = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      *(undefined8 *)((long)puVar14 + 0x34) = 0;
      *(undefined8 *)((long)puVar14 + 0x2c) = 0;
      if (plStack_1a8 != alStack_1a0) {
        _free(plStack_1a8[-1]);
        plVar18 = (long *)param_1[0x39];
      }
    }
    else {
      param_1[0x38] = (long)puStack_1b0;
      param_1[0x39] = (long)plStack_1a8;
      plVar18 = plStack_1a8;
    }
    lVar12 = param_1[0x32];
    *(double *)(lVar12 + 0x10) = *(double *)(lVar12 + 0x10) + (double)((int)uVar1 / 2 - iVar27);
    *(double *)(lVar12 + *plVar18 + 0x10) =
         *(double *)(lVar12 + *plVar18 + 0x10) + (double)((int)uVar1 / 2 - iVar24);
    if (dVar30 <= 0.5) {
      uStack_1f0._0_4_ = 127.5;
      ppppfStack_328 = (float ****)&uStack_1f0;
      uStack_1e8._4_4_ = 0.0;
      fStack_1e0 = 0.0;
      uStack_1f0._4_4_ = 0.0;
      uStack_1e8._0_4_ = 0.0;
      puStack_1b0 = &uStack_1e8;
      fStack_1d4 = 0.0;
      uStack_1d0 = 0;
      fStack_1dc = 0.0;
      fStack_1d8 = 0.0;
      uStack_1c4 = 0;
      uStack_1cc = 0;
      uStack_1c8 = 0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      alStack_1a0[0] = 0;
      alStack_1a0[1] = 0;
      lStack_2c0 = 0;
      uStack_2d0 = (float ****)CONCAT44(uStack_2d0._4_4_,0x1010000);
      pppfStack_2c8 = (float ***)&fStack_250;
      ppppfStack_330 = (float ****)CONCAT44(ppppfStack_330._4_4_,0x2010000);
      ppppfStack_320 = (float ****)0x0;
      ppppfStack_270 = (float ****)0x0;
      plStack_1a8 = alStack_1a0;
      FUN_109b0f718(dVar30,dVar30,&uStack_2d0,&ppppfStack_330,&ppppfStack_270,3);
      uVar35 = NEON_scvtf(*puStack_1b0,4);
      fVar29 = (float)uVar35 * 0.5;
      fVar28 = (float)((ulong)uVar35 >> 0x20) * 0.5;
      ppppfStack_330 = (float ****)NEON_rev64(CONCAT44(fVar28,fVar29),4);
      FUN_109b1f55c(&uStack_2d0,(double)*(float *)(param_1 + 0x14),0x3ff0000000000000,
                    &ppppfStack_330);
      *(double *)(lStack_2c0 + 0x10) =
           ((double)(int)uVar1 / 2.0 - (double)fVar28) + *(double *)(lStack_2c0 + 0x10);
      *(double *)(lStack_2c0 + *plStack_288 + 0x10) =
           ((double)(int)uVar1 / 2.0 - (double)fVar29) +
           *(double *)(lStack_2c0 + *plStack_288 + 0x10);
      lStack_260 = 0;
      ppppfStack_270 = (float ****)CONCAT44(ppppfStack_270._4_4_,0x1010000);
      ppppfStack_268 = (float ****)&uStack_1f0;
      uStack_2e8 = 0x2010000;
      uStack_2d8 = 0;
      uStack_2f0 = 0;
      uStack_300 = 0x1010000;
      ppppfStack_328 = (float ****)0x0;
      ppppfStack_330 = (float ****)0x0;
      uStack_318 = 0;
      ppppfStack_320 = (float ****)0x0;
      uStack_308 = uVar1;
      uStack_304 = uVar1;
      ppppfStack_2f8 = (float ****)&uStack_2d0;
      uStack_2e0 = param_4;
      FUN_109b1e030(&ppppfStack_270,&uStack_2e8,&uStack_300,&uStack_308,2,1,&ppppfStack_330);
      if (lStack_298 != 0) {
        piVar21 = (int *)(lStack_298 + 0x14);
        do {
          iVar24 = *piVar21;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar4) {
            *piVar21 = iVar24 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar24 + -1 == 0) {
          func_0x000109a848d4(&uStack_2d0);
        }
      }
      lStack_298 = 0;
      uStack_2b8 = 0;
      lStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      if (0 < uStack_2d0._4_4_) {
        lVar12 = 0;
        do {
          *(undefined4 *)(lStack_290 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < uStack_2d0._4_4_);
      }
      if (plStack_288 != alStack_280 && plStack_288 != (long *)0x0) {
        _free(plStack_288[-1]);
      }
      if (lStack_1b8 != 0) {
        piVar21 = (int *)(lStack_1b8 + 0x14);
        do {
          iVar24 = *piVar21;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar4) {
            *piVar21 = iVar24 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar24 + -1 == 0) {
          func_0x000109a848d4(&uStack_1f0);
        }
      }
      lStack_1b8 = 0;
      fStack_1d8 = 0.0;
      fStack_1d4 = 0.0;
      fStack_1e0 = 0.0;
      fStack_1dc = 0.0;
      uStack_1c8 = 0;
      uStack_1c4 = 0;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      if (0 < (int)uStack_1f0._4_4_) {
        lVar12 = 0;
        do {
          *(undefined4 *)((long)puStack_1b0 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)uStack_1f0._4_4_);
      }
      if (plStack_1a8 != alStack_1a0 && plStack_1a8 != (long *)0x0) {
        _free(plStack_1a8[-1]);
      }
    }
    else {
      lStack_2c0 = 0;
      uStack_2d0 = (float ****)CONCAT44(uStack_2d0._4_4_,0x1010000);
      pppfStack_2c8 = (float ***)&fStack_250;
      ppppfStack_330 = (float ****)CONCAT44(ppppfStack_330._4_4_,0x2010000);
      ppppfStack_320 = (float ****)0x0;
      lStack_260 = 0;
      ppppfStack_270 = (float ****)CONCAT44(ppppfStack_270._4_4_,0x1010000);
      uStack_1e8._0_4_ = 0.0;
      uStack_1e8._4_4_ = 0.0;
      uStack_1f0._0_4_ = 0.0;
      uStack_1f0._4_4_ = 0.0;
      fStack_1d8 = 0.0;
      fStack_1d4 = 0.0;
      fStack_1e0 = 0.0;
      fStack_1dc = 0.0;
      ppppfStack_328 = (float ****)param_4;
      uStack_2e8 = uVar1;
      uStack_2e4 = uVar1;
      ppppfStack_268 = (float ****)pppppfVar11;
      FUN_109b1e030(&uStack_2d0,&ppppfStack_330,&ppppfStack_270,&uStack_2e8,2,1,&uStack_1f0);
    }
    uStack_1f0._0_4_ = 127.5;
    uStack_1e8._4_4_ = 0.0;
    fStack_1e0 = 0.0;
    uStack_1f0._4_4_ = 0.0;
    uStack_1e8._0_4_ = 0.0;
    puStack_1b0 = (undefined8 *)((ulong)&uStack_1f0 | 8);
    fStack_1d4 = 0.0;
    uStack_1d0 = 0;
    fStack_1dc = 0.0;
    fStack_1d8 = 0.0;
    uStack_1c4 = 0;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    alStack_1a0[0] = 0;
    alStack_1a0[1] = 0;
    uStack_2d0 = (float ****)CONCAT44(uStack_2d0._4_4_,0x2010000);
    lStack_2c0 = 0;
    pppfStack_2c8 = (float ***)&uStack_1f0;
    plStack_1a8 = alStack_1a0;
    FUN_109a479a0(param_4,&uStack_2d0);
    if (param_1[0x28] != 0) {
      piVar21 = (int *)(param_1[0x28] + 0x14);
      do {
        iVar24 = *piVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = iVar24 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar24 + -1 == 0) {
        func_0x000109a848d4(param_1 + 0x21);
      }
    }
    param_1[0x28] = 0;
    param_1[0x24] = 0;
    param_1[0x23] = 0;
    param_1[0x26] = 0;
    param_1[0x25] = 0;
    if (0 < *(int *)((long)param_1 + 0x10c)) {
      lVar12 = 0;
      lVar16 = param_1[0x29];
      do {
        *(undefined4 *)(lVar16 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)((long)param_1 + 0x10c));
    }
    param_1[0x22] = CONCAT44(uStack_1e8._4_4_,(float)uStack_1e8);
    param_1[0x21] = CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0);
    param_1[0x24] = CONCAT44(fStack_1d4,fStack_1d8);
    param_1[0x23] = CONCAT44(fStack_1dc,fStack_1e0);
    param_1[0x26] = CONCAT44(uStack_1c4,uStack_1c8);
    param_1[0x25] = CONCAT44(uStack_1cc,uStack_1d0);
    param_1[0x28] = lStack_1b8;
    param_1[0x27] = CONCAT44(uStack_1bc,uStack_1c0);
    plVar18 = (long *)param_1[0x2a];
    plVar2 = param_1 + 0x2b;
    if (plVar18 != plVar2) {
      if (plVar18 != (long *)0x0) {
        _free(plVar18[-1]);
      }
      param_1[0x29] = (long)(param_1 + 0x22);
      param_1[0x2a] = (long)plVar2;
      plVar18 = plVar2;
    }
    if ((int)uStack_1f0._4_4_ < 3) {
      puVar14 = (undefined8 *)((ulong)&uStack_1f0 | 4);
      *plVar18 = *plStack_1a8;
      plVar18[1] = plStack_1a8[1];
      uStack_1f0._0_4_ = 127.5;
      puVar14[1] = 0;
      *puVar14 = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      *(undefined8 *)((long)puVar14 + 0x34) = 0;
      *(undefined8 *)((long)puVar14 + 0x2c) = 0;
      if (plStack_1a8 != alStack_1a0) {
        _free(plStack_1a8[-1]);
      }
    }
    else {
      param_1[0x29] = (long)puStack_1b0;
      param_1[0x2a] = (long)plStack_1a8;
    }
    if (*(int *)(*param_1 + 0x38) == 3) {
      uStack_2d0 = (float ****)0x0;
      pppfStack_2c8 = (float ***)0x0;
      lStack_2c0 = 0;
      FUN_10939e580(&uStack_2d0,*param_3,param_3[1],param_3[1] - *param_3 >> 3);
      if (uStack_2d0 != (float ****)pppfStack_2c8) {
        uVar35 = NEON_scvtf(param_1[0x10],4);
        ppppfVar25 = uStack_2d0;
        do {
          ppppfVar15 = ppppfVar25 + 1;
          *ppppfVar25 = (float ***)
                        CONCAT44((float)((ulong)*ppppfVar25 >> 0x20) -
                                 (float)((ulong)uVar35 >> 0x20),SUB84(*ppppfVar25,0) - (float)uVar35
                                );
          ppppfVar25 = ppppfVar15;
        } while (ppppfVar15 != (float ****)pppfStack_2c8);
      }
      FUN_1094b94ac(&ppppfStack_330,&uStack_2d0,pppppfVar11);
      FUN_109a8261c(&uStack_1f0,*(undefined4 *)(param_4 + 1),*(undefined4 *)((long)param_4 + 0xc),0)
      ;
      (**(code **)(*(long *)CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0) + 0x18))
                ((long *)CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0),&uStack_1f0,param_1 + 0x15,
                 0xffffffff);
      FUN_10918eb6c(&uStack_1f0);
      ppppfStack_270 = (float ****)0x0;
      ppppfStack_268 = (float ****)0x0;
      lStack_260 = 0;
      uStack_1f0._0_4_ = -2.4060936e-38;
      uStack_1e8 = &ppppfStack_330;
      fStack_1e0 = 0.0;
      fStack_1dc = 0.0;
      uStack_2e8 = 0x8203000c;
      uStack_2d8 = 0;
      uStack_2e0 = &ppppfStack_270;
      FUN_109ae2358(&uStack_1f0,&uStack_2e8,0,1);
      uStack_2e8 = 0x3010000;
      uStack_2d8 = 0;
      uStack_2f0 = 0;
      uStack_300 = 0x8103000c;
      uStack_1f0._0_4_ = 0.0;
      uStack_1f0._4_4_ = 1.875;
      uStack_1e8._0_4_ = 0.0;
      uStack_1e8._4_4_ = 0.0;
      fStack_1e0 = 0.0;
      fStack_1dc = 0.0;
      fStack_1d8 = 0.0;
      fStack_1d4 = 0.0;
      ppppfStack_2f8 = (float ****)&ppppfStack_270;
      uStack_2e0 = (float *****)(param_1 + 0x15);
      FUN_109aefa18(&uStack_2e8,&uStack_300,&uStack_1f0,8,0);
      if ((float *****)ppppfStack_270 != (float *****)0x0) {
        ppppfStack_268 = ppppfStack_270;
        __ZdlPv();
      }
      if ((float *****)ppppfStack_330 != (float *****)0x0) {
        ppppfStack_328 = ppppfStack_330;
        __ZdlPv();
      }
      if (uStack_2d0 != (float ****)0x0) {
        pppfStack_2c8 = (float ***)uStack_2d0;
        __ZdlPv();
      }
    }
    if (lStack_218 != 0) {
      piVar21 = (int *)(lStack_218 + 0x14);
      do {
        iVar24 = *piVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar4) {
          *piVar21 = iVar24 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar24 + -1 == 0) {
        func_0x000109a848d4(&fStack_250);
      }
    }
    lStack_218 = 0;
    uStack_238 = 0;
    uStack_234 = 0;
    uStack_240 = 0;
    uStack_23c = 0;
    uStack_228 = 0;
    uStack_224 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    if (0 < (int)fStack_24c) {
      lVar12 = 0;
      do {
        pfStack_210[lVar12] = 0.0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)fStack_24c);
    }
    if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
      _free(puStack_208[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return 1;
    }
    ___stack_chk_fail();
  }
  else {
    fVar29 = *(float *)(*param_3 + 0x16c) - *(float *)(*param_3 + 0x124);
    _atan2f();
    *(float *)(param_1 + 0x14) = fVar29 * 57.29578;
    uStack_1e8._0_4_ = SUB84(param_3,0);
    uStack_1e8._4_4_ = (float)((ulong)param_3 >> 0x20);
    fStack_1e0 = 0.0;
    fStack_1dc = 0.0;
    uStack_1f0._0_4_ = -2.4060936e-38;
    FUN_109b42928(&uStack_2e8,&uStack_1f0);
    fVar29 = (float)(int)(long)(double)(long)((double)(int)((int)uStack_2e0 + uStack_2e8 * 2) / 2.0)
    ;
    fVar28 = (float)(int)(long)(double)(long)((double)(int)(uStack_2e0._4_4_ + uStack_2e4 * 2) / 2.0
                                             );
    fStack_250 = fVar29;
    fStack_24c = fVar28;
    FUN_109b1f55c(&uStack_1f0,(double)*(float *)(param_1 + 0x14),0x3ff0000000000000,&fStack_250);
    uStack_2d0 = (float ****)CONCAT44(fVar28,fVar29);
    FUN_109b1f55c(&fStack_250,(double)-*(float *)(param_1 + 0x14),0x3ff0000000000000,&uStack_2d0);
    FUN_1094b94ac(&uStack_2d0,param_3,&uStack_1f0);
    lVar12 = *param_1;
    iVar24 = *(int *)(lVar12 + 0x34);
    if (iVar24 == 0) {
      ppppfStack_330 = (float ****)CONCAT44(ppppfStack_330._4_4_,0x8103000d);
      ppppfStack_328 = (float ****)&uStack_2d0;
      ppppfStack_320 = (float ****)0x0;
      FUN_109b42928(&uStack_300,&ppppfStack_330);
      FUN_1094c51bc(&ppppfStack_270,*param_1,&uStack_300);
      pppppfVar11 = (float *****)ppppfStack_270;
      pppppfVar10 = (float *****)ppppfStack_268;
LAB_1094b8780:
      ppppfStack_330 = (float ****)0x0;
      ppppfStack_328 = (float ****)0x0;
      ppppfStack_320 = (float ****)0x0;
      iStack_33c = (int)((ulong)pppppfVar11 >> 0x20);
      pppppfVar9 = &ppppfStack_330;
      FUN_1094c5b98(pppppfVar9,(ulong)pppppfVar11 & 0xffffffff,iStack_33c);
      pppppfVar13 = (float *****)ppppfStack_320;
      iVar24 = (int)pppppfVar10 + (int)pppppfVar11;
      iVar27 = (int)((ulong)pppppfVar10 >> 0x20) + iStack_33c;
      if (pppppfVar9 < ppppfStack_320) {
        ppppfVar25 = (float ****)NEON_scvtf(CONCAT44(iVar27,(int)pppppfVar11),4);
        pppppfVar10 = pppppfVar9 + 1;
        *pppppfVar9 = ppppfVar25;
      }
      else {
        pppppfVar10 = &ppppfStack_330;
        ppppfStack_328 = (float ****)pppppfVar9;
        FUN_1094c5cb8(pppppfVar10,(ulong)pppppfVar11 & 0xffffffff,iVar27);
        pppppfVar13 = (float *****)ppppfStack_320;
      }
      if (pppppfVar10 < pppppfVar13) {
        ppppfVar25 = (float ****)NEON_scvtf(CONCAT44(iVar27,iVar24),4);
        pppppfVar11 = pppppfVar10 + 1;
        *pppppfVar10 = ppppfVar25;
      }
      else {
        pppppfVar11 = &ppppfStack_330;
        ppppfStack_328 = (float ****)pppppfVar10;
        FUN_1094c5b98(pppppfVar11,iVar24,iVar27);
        pppppfVar13 = (float *****)ppppfStack_320;
      }
      if (pppppfVar11 < pppppfVar13) {
        pppppfVar10 = pppppfVar11 + 1;
        *(float *)pppppfVar11 = (float)iVar24;
        *(float *)((long)pppppfVar11 + 4) = (float)iStack_33c;
      }
      else {
        pppppfVar10 = &ppppfStack_330;
        ppppfStack_328 = (float ****)pppppfVar11;
        FUN_1094c5cb8(pppppfVar10,iVar24,iStack_33c);
      }
      ppppfStack_328 = (float ****)pppppfVar10;
      FUN_1094b94ac(&ppppfStack_270,&ppppfStack_330,&fStack_250);
      pppppfVar11 = (float *****)(param_1 + 0x2d);
      if (*pppppfVar11 != (float ****)0x0) {
        param_1[0x2e] = (long)*pppppfVar11;
        __ZdlPv();
        *pppppfVar11 = (float ****)0x0;
        param_1[0x2e] = 0;
        param_1[0x2f] = 0;
      }
      param_1[0x2e] = (long)ppppfStack_268;
      *pppppfVar11 = ppppfStack_270;
      param_1[0x2f] = lStack_260;
      lStack_260 = 0;
      ppppfStack_270 = (float ****)CONCAT44(ppppfStack_270._4_4_,0x8103000d);
      ppppfStack_268 = (float ****)pppppfVar11;
      FUN_109b42928(&uStack_300,&ppppfStack_270);
      param_1[0x11] = (long)ppppfStack_2f8;
      param_1[0x10] = CONCAT44(uStack_2fc,uStack_300);
      if ((float *****)ppppfStack_330 != (float *****)0x0) {
        ppppfStack_328 = ppppfStack_330;
        __ZdlPv();
      }
LAB_1094b88b0:
      if (uStack_2d0 != (float ****)0x0) {
        pppfStack_2c8 = (float ***)uStack_2d0;
        __ZdlPv();
      }
      if (lStack_218 != 0) {
        piVar21 = (int *)(lStack_218 + 0x14);
        do {
          iVar24 = *piVar21;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar4) {
            *piVar21 = iVar24 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar24 + -1 == 0) {
          func_0x000109a848d4(&fStack_250);
        }
      }
      lStack_218 = 0;
      uStack_238 = 0;
      uStack_234 = 0;
      uStack_240 = 0;
      uStack_23c = 0;
      uStack_228 = 0;
      uStack_224 = 0;
      uStack_230 = 0;
      uStack_22c = 0;
      if (0 < (int)fStack_24c) {
        lVar12 = 0;
        do {
          pfStack_210[lVar12] = 0.0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)fStack_24c);
      }
      if (puStack_208 != &uStack_200 && puStack_208 != (undefined8 *)0x0) {
        _free(puStack_208[-1]);
      }
      if (lStack_1b8 != 0) {
        piVar21 = (int *)(lStack_1b8 + 0x14);
        do {
          iVar24 = *piVar21;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar4) {
            *piVar21 = iVar24 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar24 + -1 == 0) {
          func_0x000109a848d4(&uStack_1f0);
        }
      }
      lStack_1b8 = 0;
      fStack_1d8 = 0.0;
      fStack_1d4 = 0.0;
      fStack_1e0 = 0.0;
      fStack_1dc = 0.0;
      uStack_1c8 = 0;
      uStack_1c4 = 0;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      if (0 < (int)uStack_1f0._4_4_) {
        lVar12 = 0;
        do {
          *(undefined4 *)((long)puStack_1b0 + lVar12 * 4) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)uStack_1f0._4_4_);
      }
      if (plStack_1a8 != alStack_1a0 && plStack_1a8 != (long *)0x0) {
        _free(plStack_1a8[-1]);
      }
      goto LAB_1094b89b8;
    }
    if (iVar24 != 1) {
      if (iVar24 == 2) {
        lVar16 = *param_3;
        if ((ulong)(param_3[1] - lVar16) < 0x169) {
          func_0x0001094c604c();
          goto LAB_1094b9340;
        }
        fVar29 = (*(float *)(lVar16 + 0x150) + *(float *)(lVar16 + 0x168)) * 0.5 -
                 (*(float *)(lVar16 + 0x120) + *(float *)(lVar16 + 0x138)) * 0.5;
        fVar28 = (*(float *)(lVar16 + 0x154) + *(float *)(lVar16 + 0x16c)) * 0.5 -
                 (*(float *)(lVar16 + 0x124) + *(float *)(lVar16 + 0x13c)) * 0.5;
        func_0x0001094c5fc0((float)*(int *)(lVar12 + 0xc) / SQRT(fVar28 * fVar28 + fVar29 * fVar29),
                            &ppppfStack_330,param_1,uStack_2d0,pppfStack_2c8);
        pppppfVar11 = (float *****)ppppfStack_330;
        pppppfVar10 = (float *****)ppppfStack_328;
        goto LAB_1094b8780;
      }
      goto LAB_1094b88b0;
    }
    uVar17 = (long)pppfStack_2c8 - (long)uStack_2d0 >> 3;
    if ((0x2d < uVar17) && (0x41 < uVar17)) {
      fVar29 = 0.0;
      lVar16 = 0x184;
      do {
        fVar29 = fVar29 + *(float *)((long)uStack_2d0 + lVar16);
        lVar16 = lVar16 + 8;
      } while (lVar16 != 0x214);
      func_0x0001094c5fc0((float)*(int *)(lVar12 + 8) /
                          (fVar29 / 19.0 +
                          (*(float *)((long)uStack_2d0 + 0x16c) +
                          *(float *)((long)uStack_2d0 + 0x124)) * -0.5),&ppppfStack_330,param_1);
      pppppfVar11 = (float *****)ppppfStack_330;
      pppppfVar10 = (float *****)ppppfStack_328;
      goto LAB_1094b8780;
    }
  }
  func_0x0001094c604c();
LAB_1094b9340:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1094b9344);
  (*pcVar6)();
}



/* Entry: 1094b94ac; end: 1094b95c3;  */

void FUN_1094b94ac(float *param_1,long *param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  double *pdVar4;
  float *pfVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fStack_68;
  float fStack_64;
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  FUN_1093f458c(param_1,param_2[1] - *param_2 >> 3);
  pfVar5 = (float *)*param_2;
  pfVar1 = (float *)param_2[1];
  if (pfVar5 != pfVar1) {
    pdVar4 = *(double **)(param_3 + 0x10);
    dVar6 = *pdVar4;
    dVar7 = pdVar4[1];
    dVar8 = pdVar4[2];
    pdVar4 = (double *)((long)pdVar4 + **(long **)(param_3 + 0x48));
    dVar9 = *pdVar4;
    dVar10 = pdVar4[1];
    dVar11 = pdVar4[2];
    pfVar2 = *(float **)(param_1 + 2);
    do {
      fStack_64 = (float)(dVar8 + dVar7 * (double)pfVar5[1] + dVar6 * (double)*pfVar5);
      fStack_68 = (float)(dVar11 + dVar10 * (double)pfVar5[1] + dVar9 * (double)*pfVar5);
      if (pfVar2 < *(float **)(param_1 + 4)) {
        pfVar3 = pfVar2 + 2;
        *pfVar2 = fStack_64;
        pfVar2[1] = fStack_68;
      }
      else {
        pfVar3 = param_1;
        FUN_1094c6060(param_1,&fStack_64,&fStack_68);
      }
      *(float **)(param_1 + 2) = pfVar3;
      pfVar5 = pfVar5 + 2;
      pfVar2 = pfVar3;
    } while (pfVar5 != pfVar1);
  }
  return;
}



/* Entry: 1094b95c4; end: 1094b969f;  */

long FUN_1094b95c4(long param_1)

{
  undefined1 uStack_21;
  
  FUN_1094c5940(param_1,&uStack_21);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x42ff0000;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(long *)(param_1 + 0x60) = param_1 + 0x28;
  *(undefined8 **)(param_1 + 0x68) = (undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0x42ff0000;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(long *)(param_1 + 0xe8) = param_1 + 0xb0;
  *(undefined8 **)(param_1 + 0xf0) = (undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0x42ff0000;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(long *)(param_1 + 0x148) = param_1 + 0x110;
  *(undefined8 **)(param_1 + 0x150) = (undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0x42ff0000;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x19c) = 0;
  *(undefined8 *)(param_1 + 0x194) = 0;
  *(undefined8 *)(param_1 + 0x1ac) = 0;
  *(undefined8 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x184) = 0;
  *(long *)(param_1 + 0x1c0) = param_1 + 0x188;
  *(long *)(param_1 + 0x1c8) = param_1 + 0x1d0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  return param_1;
}



/* Entry: 1094b96a0; end: 1094b978f;  */

void FUN_1094b96a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = uVar5;
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
  *(undefined4 *)(param_1 + 4) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = param_1 + 5;
  param_1[0xd] = param_1 + 0xe;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = param_1 + 0x16;
  param_1[0x1e] = param_1 + 0x1f;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x42ff0000;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  param_1[0x29] = param_1 + 0x22;
  param_1[0x2a] = param_1 + 0x2b;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x42ff0000;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  *(undefined8 *)((long)param_1 + 0x19c) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = 0;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  *(undefined8 *)((long)param_1 + 0x1a4) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  param_1[0x38] = param_1 + 0x31;
  param_1[0x39] = param_1 + 0x3a;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  return;
}



/* Entry: 1094b9790; end: 1094ba6c7;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1094b9790(long *param_1,int *param_2,ulong param_3,int param_4,undefined8 param_5)

{
  undefined8 ******ppppppuVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 ******ppppppuVar10;
  code *pcVar11;
  long *plVar12;
  int *piVar13;
  long lVar14;
  int *piVar15;
  undefined8 *puVar16;
  long lVar17;
  int *piVar18;
  undefined8 uVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 uStack_630;
  int iStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  long lStack_5f8;
  int *piStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  int iStack_5d0;
  int iStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  long lStack_598;
  undefined4 *puStack_590;
  undefined8 *puStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined4 auStack_570 [2];
  int *piStack_568;
  undefined8 uStack_560;
  undefined4 auStack_558 [2];
  undefined4 *puStack_550;
  undefined8 uStack_548;
  undefined4 uStack_540;
  undefined8 uStack_53c;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  long lStack_508;
  long lStack_500;
  undefined8 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined4 uStack_4e0;
  undefined8 uStack_4dc;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  long lStack_4a8;
  long lStack_4a0;
  undefined8 *puStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined4 uStack_480;
  undefined8 uStack_47c;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  long lStack_448;
  long lStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  int iStack_420;
  undefined1 auStack_41c [8];
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  long alStack_3e8 [2];
  undefined8 ******appppppuStack_3d8 [27];
  int aiStack_300 [16];
  int iStack_2c0;
  undefined1 auStack_2bc [8];
  undefined1 auStack_2b4 [4];
  undefined1 auStack_2b0 [12];
  undefined8 auStack_2a4 [2];
  long alStack_290 [30];
  int iStack_1a0;
  undefined1 auStack_19c [8];
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  long alStack_168 [2];
  undefined8 ******appppppuStack_158 [27];
  int aiStack_80 [2];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_5d0 = 0x42ff0000;
  uStack_5c4 = 0;
  uStack_5c0 = 0;
  iStack_5cc = 0;
  uStack_5c8 = 0;
  puStack_590 = &uStack_5c8;
  uStack_5b4 = 0;
  uStack_5b0 = 0;
  uStack_5bc = 0;
  uStack_5b8 = 0;
  uStack_5a4 = 0;
  uStack_5ac = 0;
  uStack_5a8 = 0;
  lStack_598 = 0;
  uStack_5a0 = 0;
  uStack_59c = 0;
  uStack_580 = 0;
  uStack_578 = 0;
  uStack_630._0_4_ = 0x42ff0000;
  piStack_5f0 = &iStack_628;
  lStack_5f8 = 0;
  uStack_5fc = 0;
  uStack_624 = 0;
  uStack_620 = 0;
  uStack_630._4_4_ = 0;
  iStack_628 = 0;
  uStack_614 = 0;
  uStack_610 = 0;
  uStack_61c = 0;
  uStack_618 = 0;
  uStack_604 = 0;
  uStack_600 = 0;
  uStack_60c = 0;
  uStack_608 = 0;
  uStack_5e0 = 0;
  uStack_5d8 = 0;
  iVar2 = *(int *)(*param_1 + 0x38);
  puStack_5e8 = &uStack_5e0;
  puStack_588 = &uStack_580;
  if (iVar2 == 0) {
    uVar19 = NEON_rev64(**(undefined8 **)(param_2 + 0x10),4);
    iStack_1a0 = (int)uVar19;
    auStack_19c._0_4_ = (undefined4)((ulong)uVar19 >> 0x20);
    FUN_109a82ba4(&iStack_420,&iStack_1a0,0);
    (**(code **)(*(long *)CONCAT44(auStack_41c._0_4_,iStack_420) + 0x18))
              ((long *)CONCAT44(auStack_41c._0_4_,iStack_420),&iStack_420,&uStack_630,0xffffffff);
    FUN_10918eb6c(&iStack_420);
    if (&iStack_5d0 == param_2) goto LAB_1094ba458;
    if (*(long *)(param_2 + 0xe) != 0) {
      piVar13 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar5) {
          *piVar13 = *piVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (lStack_598 != 0) {
      piVar13 = (int *)(lStack_598 + 0x14);
      do {
        iVar2 = *piVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar5) {
          *piVar13 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&iStack_5d0);
      }
    }
    lStack_598 = 0;
    uStack_5b8 = 0;
    uStack_5b4 = 0;
    uStack_5c0 = 0;
    uStack_5bc = 0;
    uStack_5a8 = 0;
    uStack_5a4 = 0;
    uStack_5b0 = 0;
    uStack_5ac = 0;
    if (iStack_5cc < 1) {
      iStack_5d0 = *param_2;
LAB_1094ba250:
      iVar2 = param_2[1];
      if (2 < iVar2) goto LAB_1094ba284;
      uStack_5c8 = (undefined4)*(undefined8 *)(param_2 + 2);
      uStack_5c4 = (undefined4)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
      puVar16 = *(undefined8 **)(param_2 + 0x12);
      *puStack_588 = *puVar16;
      puStack_588[1] = puVar16[1];
      iStack_5cc = iVar2;
    }
    else {
      lVar14 = 0;
      do {
        puStack_590[lVar14] = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < iStack_5cc);
      iStack_5d0 = *param_2;
      if (iStack_5cc < 3) goto LAB_1094ba250;
LAB_1094ba284:
      func_0x000109a84868(&iStack_5d0,param_2);
    }
    uStack_5b8 = (undefined4)*(undefined8 *)(param_2 + 6);
    uStack_5b4 = (undefined4)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
    uStack_5c0 = (undefined4)*(undefined8 *)(param_2 + 4);
    uStack_5bc = (undefined4)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
    uStack_5a8 = (undefined4)*(undefined8 *)(param_2 + 10);
    uStack_5a4 = (undefined4)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
    uStack_5b0 = (undefined4)*(undefined8 *)(param_2 + 8);
    uStack_5ac = (undefined4)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    lStack_598 = *(long *)(param_2 + 0xe);
    uStack_5a0 = (undefined4)*(undefined8 *)(param_2 + 0xc);
    uStack_59c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
LAB_1094ba458:
    FUN_1094bb884(param_1,&iStack_5d0,&uStack_630,param_3,param_5);
    uVar19 = 1;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 3) goto LAB_1094ba59c;
      iStack_420 = 0x42ff0000;
      uStack_414 = 0;
      uStack_410 = 0;
      auStack_41c._0_4_ = 0;
      auStack_41c._4_4_ = 0;
      uVar20 = (ulong)&iStack_420 | 8;
      uStack_404 = 0;
      uStack_400 = 0;
      uStack_40c = 0;
      uStack_408 = 0;
      uStack_3f4 = 0;
      uStack_3fc = 0;
      uStack_3f8 = 0;
      alStack_3e8[0] = 0;
      uStack_3f0 = 0;
      uStack_3ec = 0;
      ppppppuVar1 = appppppuStack_3d8 + 1;
      appppppuStack_3d8[2] = (undefined8 ******)0x0;
      appppppuStack_3d8[1] = (undefined8 ******)0x0;
      alStack_3e8[1] = uVar20;
      appppppuStack_3d8[0] = ppppppuVar1;
      if ((param_4 == 0) || ((*(byte *)(*param_1 + 0x30) & 1) == 0)) {
        iStack_1a0 = 0x42ff0000;
        alStack_168[1] = (ulong)&iStack_1a0 | 8;
        uStack_194 = 0;
        uStack_190 = 0;
        auStack_19c._0_4_ = 0;
        auStack_19c._4_4_ = 0;
        uStack_184 = 0;
        uStack_180 = 0;
        uStack_18c = 0;
        uStack_188 = 0;
        uStack_174 = 0;
        uStack_17c = 0;
        uStack_178 = 0;
        alStack_168[0] = 0;
        uStack_170 = 0;
        uStack_16c = 0;
        appppppuStack_158[2] = (undefined8 ******)0x0;
        appppppuStack_158[1] = (undefined8 ******)0x0;
        iStack_2c0 = 0x2010000;
        auStack_2b0._0_8_ = 0;
        unique0x100027ce = &iStack_1a0;
        appppppuStack_158[0] = appppppuStack_158 + 1;
        FUN_109a479a0(param_2,&iStack_2c0);
        if (alStack_3e8[0] != 0) {
          piVar13 = (int *)(alStack_3e8[0] + 0x14);
          do {
            iVar2 = *piVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar5) {
              *piVar13 = iVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&iStack_420);
          }
        }
        if (0 < (int)auStack_41c._0_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(alStack_3e8[1] + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < (int)auStack_41c._0_4_);
        }
        auStack_41c._4_4_ = auStack_19c._4_4_;
        uStack_414 = uStack_194;
        iStack_420 = iStack_1a0;
        auStack_41c._0_4_ = auStack_19c._0_4_;
        uStack_408 = uStack_188;
        uStack_404 = uStack_184;
        uStack_410 = uStack_190;
        uStack_40c = uStack_18c;
        uStack_3f8 = uStack_178;
        uStack_3f4 = uStack_174;
        uStack_400 = uStack_180;
        uStack_3fc = uStack_17c;
        alStack_3e8[0] = alStack_168[0];
        uStack_3f0 = uStack_170;
        uStack_3ec = uStack_16c;
        uVar9 = alStack_3e8[1];
        ppppppuVar10 = appppppuStack_3d8[0];
        if ((appppppuStack_3d8[0] != ppppppuVar1) &&
           (uVar9 = uVar20, ppppppuVar10 = ppppppuVar1,
           appppppuStack_3d8[0] != (undefined8 ******)0x0)) {
          _free(appppppuStack_3d8[0][-1]);
        }
        appppppuStack_3d8[0] = ppppppuVar10;
        alStack_3e8[1] = uVar9;
        ppppppuVar10 = appppppuStack_158[0];
        if ((int)auStack_19c._0_4_ < 3) {
          puVar16 = (undefined8 *)((ulong)&iStack_1a0 | 4);
          *appppppuStack_3d8[0] = *appppppuStack_158[0];
          appppppuStack_3d8[0][1] = ppppppuVar10[1];
          iStack_1a0 = 0x42ff0000;
          puVar16[1] = 0;
          *puVar16 = 0;
          puVar16[3] = 0;
          puVar16[2] = 0;
          puVar16[5] = 0;
          puVar16[4] = 0;
          *(undefined8 *)((long)puVar16 + 0x34) = 0;
          *(undefined8 *)((long)puVar16 + 0x2c) = 0;
          if ((undefined8 *******)ppppppuVar10 != appppppuStack_158 + 1) {
            _free(ppppppuVar10[-1]);
          }
        }
        else {
          appppppuStack_3d8[0] = appppppuStack_158[0];
          alStack_3e8[1] = alStack_168[1];
        }
      }
      else {
        plVar12 = param_1 + 0x21;
        FUN_1094c2a14(plVar12,param_2,param_1 + 0x15,&iStack_420);
        if (((ulong)plVar12 & 1) == 0) {
          if (alStack_3e8[0] != 0) {
            piVar13 = (int *)(alStack_3e8[0] + 0x14);
            do {
              iVar2 = *piVar13;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar5) {
                *piVar13 = iVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&iStack_420);
            }
          }
          alStack_3e8[0] = 0;
          uStack_408 = 0;
          uStack_404 = 0;
          uStack_410 = 0;
          uStack_40c = 0;
          uStack_3f8 = 0;
          uStack_3f4 = 0;
          uStack_400 = 0;
          uStack_3fc = 0;
          if (0 < (int)auStack_41c._0_4_) {
            lVar14 = 0;
            do {
              *(undefined4 *)(alStack_3e8[1] + lVar14 * 4) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < (int)auStack_41c._0_4_);
          }
          if (appppppuStack_3d8[0] != ppppppuVar1 && appppppuStack_3d8[0] != (undefined8 ******)0x0)
          {
            _free(appppppuStack_3d8[0][-1]);
          }
          goto LAB_1094b9f44;
        }
      }
      if (((*(float *)(*param_1 + 0x10) == 0.0) && (*(float *)(*param_1 + 0x14) == 0.0)) ||
         (plVar12 = param_1,
         FUN_1094bb0c8(param_1,param_1 + 0x21,&iStack_420,param_1 + 0x15,&iStack_5d0,&uStack_630),
         (int)plVar12 == 0)) {
        plVar12 = param_1 + 0x15;
        if (&uStack_630 != plVar12) {
          if (param_1[0x1c] != 0) {
            piVar13 = (int *)(param_1[0x1c] + 0x14);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar5) {
                *piVar13 = *piVar13 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          if (lStack_5f8 != 0) {
            piVar13 = (int *)(lStack_5f8 + 0x14);
            do {
              iVar2 = *piVar13;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar5) {
                *piVar13 = iVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(&uStack_630);
            }
          }
          lStack_5f8 = 0;
          uStack_618 = 0;
          uStack_614 = 0;
          uStack_620 = 0;
          uStack_61c = 0;
          uStack_608 = 0;
          uStack_604 = 0;
          uStack_610 = 0;
          uStack_60c = 0;
          if (uStack_630._4_4_ < 1) {
            uStack_630._0_4_ = (undefined4)*plVar12;
LAB_1094ba2ac:
            iVar2 = *(int *)((long)param_1 + 0xac);
            if (2 < iVar2) goto LAB_1094ba2e0;
            iStack_628 = (int)param_1[0x16];
            uStack_624 = (undefined4)((ulong)param_1[0x16] >> 0x20);
            puVar16 = (undefined8 *)param_1[0x1e];
            *puStack_5e8 = *puVar16;
            puStack_5e8[1] = puVar16[1];
            uStack_630._4_4_ = iVar2;
          }
          else {
            lVar14 = 0;
            do {
              piStack_5f0[lVar14] = 0;
              lVar14 = lVar14 + 1;
            } while (lVar14 < uStack_630._4_4_);
            uStack_630._0_4_ = (undefined4)*plVar12;
            if (uStack_630._4_4_ < 3) goto LAB_1094ba2ac;
LAB_1094ba2e0:
            func_0x000109a84868(&uStack_630,plVar12);
          }
          uStack_618 = (undefined4)param_1[0x18];
          uStack_614 = (undefined4)((ulong)param_1[0x18] >> 0x20);
          uStack_620 = (undefined4)param_1[0x17];
          uStack_61c = (undefined4)((ulong)param_1[0x17] >> 0x20);
          uStack_608 = (undefined4)param_1[0x1a];
          uStack_604 = (undefined4)((ulong)param_1[0x1a] >> 0x20);
          uStack_610 = (undefined4)param_1[0x19];
          uStack_60c = (undefined4)((ulong)param_1[0x19] >> 0x20);
          lStack_5f8 = param_1[0x1c];
          uStack_600 = (undefined4)param_1[0x1b];
          uStack_5fc = (undefined4)((ulong)param_1[0x1b] >> 0x20);
        }
        if (alStack_3e8[0] != 0) {
          piVar13 = (int *)(alStack_3e8[0] + 0x14);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar5) {
              *piVar13 = *piVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (lStack_598 != 0) {
          piVar13 = (int *)(lStack_598 + 0x14);
          do {
            iVar2 = *piVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar5) {
              *piVar13 = iVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&iStack_5d0);
          }
        }
        ppppppuVar10 = appppppuStack_3d8[0];
        uVar8 = uStack_414;
        uVar7 = auStack_41c._4_4_;
        uVar6 = auStack_41c._0_4_;
        iStack_5d0 = iStack_420;
        lStack_598 = 0;
        uStack_5b8 = 0;
        uStack_5b4 = 0;
        uStack_5c0 = 0;
        uStack_5bc = 0;
        uStack_5a8 = 0;
        uStack_5a4 = 0;
        uStack_5b0 = 0;
        uStack_5ac = 0;
        if (iStack_5cc < 1) {
LAB_1094ba394:
          if ((int)auStack_41c._0_4_ < 3) {
            *puStack_588 = *appppppuStack_3d8[0];
            puStack_588[1] = ppppppuVar10[1];
            iStack_5cc = uVar6;
            uStack_5c8 = uVar7;
            uStack_5c4 = uVar8;
            uStack_5c0 = uStack_410;
            uStack_5bc = uStack_40c;
            uStack_5b8 = uStack_408;
            uStack_5b4 = uStack_404;
            uStack_5b0 = uStack_400;
            uStack_5ac = uStack_3fc;
            uStack_5a8 = uStack_3f8;
            uStack_5a4 = uStack_3f4;
            uStack_5a0 = uStack_3f0;
            uStack_59c = uStack_3ec;
            lStack_598 = alStack_3e8[0];
            goto joined_r0x0001094ba1a4;
          }
        }
        else {
          lVar14 = 0;
          do {
            puStack_590[lVar14] = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < iStack_5cc);
          if (iStack_5cc < 3) goto LAB_1094ba394;
        }
        func_0x000109a84868(&iStack_5d0,&iStack_420);
        uStack_5c0 = uStack_410;
        uStack_5bc = uStack_40c;
        uStack_5b8 = uStack_408;
        uStack_5b4 = uStack_404;
        uStack_5b0 = uStack_400;
        uStack_5ac = uStack_3fc;
        uStack_5a8 = uStack_3f8;
        uStack_5a4 = uStack_3f4;
        uStack_5a0 = uStack_3f0;
        uStack_59c = uStack_3ec;
        lStack_598 = alStack_3e8[0];
      }
joined_r0x0001094ba1a4:
      if (alStack_3e8[0] != 0) {
        piVar13 = (int *)(alStack_3e8[0] + 0x14);
        do {
          iVar2 = *piVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar5) {
            *piVar13 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&iStack_420);
        }
      }
      alStack_3e8[0] = 0;
      uStack_408 = 0;
      uStack_404 = 0;
      uStack_410 = 0;
      uStack_40c = 0;
      uStack_3f8 = 0;
      uStack_3f4 = 0;
      uStack_400 = 0;
      uStack_3fc = 0;
      if (0 < (int)auStack_41c._0_4_) {
        lVar14 = 0;
        do {
          *(undefined4 *)(alStack_3e8[1] + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)auStack_41c._0_4_);
      }
      if (appppppuStack_3d8[0] != ppppppuVar1 && appppppuStack_3d8[0] != (undefined8 ******)0x0) {
        _free(appppppuStack_3d8[0][-1]);
      }
      goto LAB_1094ba458;
    }
    uVar19 = NEON_rev64(**(undefined8 **)(param_2 + 0x10),4);
    iStack_1a0 = (int)uVar19;
    auStack_19c._0_4_ = (undefined4)((ulong)uVar19 >> 0x20);
    FUN_109a82ba4(&iStack_420,&iStack_1a0,0);
    (**(code **)(*(long *)CONCAT44(auStack_41c._0_4_,iStack_420) + 0x18))
              ((long *)CONCAT44(auStack_41c._0_4_,iStack_420),&iStack_420,&uStack_630,0xffffffff);
    FUN_10918eb6c(&iStack_420);
    uVar19 = 0;
    iVar2 = ((int *)param_1[0x29])[1];
    if (((iVar2 == (*(int **)(param_2 + 0x10))[1]) &&
        (iVar3 = *(int *)param_1[0x29], iVar3 == **(int **)(param_2 + 0x10))) &&
       ((uVar19 = 0, iVar2 == piStack_5f0[1] && (iVar3 == *piStack_5f0)))) {
      uStack_480 = 0x42ff0000;
      unique0x00023800 = param_1 + 0x21;
      uStack_474 = 0;
      uStack_470 = 0;
      uStack_47c = 0;
      unique0x00023800 = &uStack_480;
      lStack_440 = (long)&uStack_47c + 4;
      uStack_464 = 0;
      uStack_460 = 0;
      uStack_46c = 0;
      uStack_468 = 0;
      uStack_454 = 0;
      uStack_45c = 0;
      uStack_458 = 0;
      lStack_448 = 0;
      uStack_450 = 0;
      uStack_44c = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      uStack_4e0 = 0x42ff0000;
      lStack_4a0 = (long)&uStack_4dc + 4;
      uStack_4d4 = 0;
      uStack_4d0 = 0;
      uStack_4dc = 0;
      uStack_4c4 = 0;
      uStack_4c0 = 0;
      uStack_4cc = 0;
      uStack_4c8 = 0;
      uStack_4b4 = 0;
      uStack_4bc = 0;
      uStack_4b8 = 0;
      lStack_4a8 = 0;
      uStack_4b0 = 0;
      uStack_4ac = 0;
      uStack_490 = 0;
      uStack_488 = 0;
      uStack_410 = 0;
      uStack_40c = 0;
      iStack_420 = 0x1010000;
      iStack_1a0 = 0x2010000;
      uStack_190 = 0;
      uStack_18c = 0;
      puStack_498 = &uStack_490;
      puStack_438 = &uStack_430;
      FUN_109ac9fc8(&iStack_420,&iStack_1a0,0x2d,0);
      uStack_410 = 0;
      uStack_40c = 0;
      iStack_420 = 0x1010000;
      auStack_41c._4_4_ = SUB84(param_2,0);
      uStack_414 = (undefined4)((ulong)param_2 >> 0x20);
      iStack_1a0 = 0x2010000;
      uStack_190 = 0;
      uStack_18c = 0;
      unique0x100027de = &uStack_4e0;
      FUN_109ac9fc8(&iStack_420,&iStack_1a0,0x2d,0);
      lVar14 = 0;
      do {
        *(undefined4 *)((long)&iStack_420 + lVar14) = 0x42ff0000;
        *(undefined8 *)((long)&uStack_414 + lVar14) = 0;
        *(undefined8 *)(auStack_41c + lVar14) = 0;
        *(undefined8 *)((long)&uStack_404 + lVar14) = 0;
        *(undefined8 *)((long)&uStack_40c + lVar14) = 0;
        *(undefined8 *)((long)&uStack_3f4 + lVar14) = 0;
        *(undefined8 *)((long)&uStack_3fc + lVar14) = 0;
        puVar16 = (undefined8 *)((long)appppppuStack_3d8 + lVar14 + 8);
        *puVar16 = 0;
        *(undefined8 *)((long)alStack_3e8 + lVar14) = 0;
        *(undefined8 *)((long)&uStack_3f0 + lVar14) = 0;
        *(undefined1 **)((long)alStack_3e8 + lVar14 + 8) = auStack_41c + lVar14 + 4;
        *(undefined8 **)((long)appppppuStack_3d8 + lVar14) = puVar16;
        lVar17 = lVar14 + 0x60;
        *(undefined8 *)((long)appppppuStack_3d8 + lVar14 + 0x10) = 0;
        lVar14 = lVar17;
      } while (lVar17 != 0x120);
      lVar14 = 0;
      do {
        *(undefined4 *)((long)&iStack_1a0 + lVar14) = 0x42ff0000;
        *(undefined8 *)((long)&uStack_194 + lVar14) = 0;
        *(undefined8 *)(auStack_19c + lVar14) = 0;
        *(undefined8 *)((long)&uStack_184 + lVar14) = 0;
        *(undefined8 *)((long)&uStack_18c + lVar14) = 0;
        *(undefined8 *)((long)&uStack_174 + lVar14) = 0;
        *(undefined8 *)((long)&uStack_17c + lVar14) = 0;
        puVar16 = (undefined8 *)((long)appppppuStack_158 + lVar14 + 8);
        *puVar16 = 0;
        *(undefined8 *)((long)alStack_168 + lVar14) = 0;
        *(undefined8 *)((long)&uStack_170 + lVar14) = 0;
        *(undefined1 **)((long)alStack_168 + lVar14 + 8) = auStack_19c + lVar14 + 4;
        *(undefined8 **)((long)appppppuStack_158 + lVar14) = puVar16;
        lVar17 = lVar14 + 0x60;
        *(undefined8 *)((long)appppppuStack_158 + lVar14 + 0x10) = 0;
        lVar14 = lVar17;
      } while (lVar17 != 0x120);
      lVar14 = 0;
      do {
        *(undefined4 *)(auStack_2bc + lVar14 + -4) = 0x42ff0000;
        *(undefined8 *)(auStack_2b4 + lVar14) = 0;
        *(undefined8 *)(auStack_2bc + lVar14) = 0;
        *(undefined8 *)((long)auStack_2a4 + lVar14) = 0;
        *(undefined8 *)(auStack_2b0 + lVar14 + 4) = 0;
        *(undefined8 *)(&stack0xfffffffffffffd6c + lVar14) = 0;
        *(undefined8 *)((long)auStack_2a4 + lVar14 + 8) = 0;
        puVar16 = (undefined8 *)((long)alStack_290 + lVar14 + 0x20);
        *puVar16 = 0;
        *(undefined8 *)((long)alStack_290 + lVar14 + 8) = 0;
        *(undefined8 *)((long)alStack_290 + lVar14) = 0;
        *(undefined1 **)((long)alStack_290 + lVar14 + 0x10) = auStack_2bc + lVar14 + 4;
        *(undefined8 **)((long)alStack_290 + lVar14 + 0x18) = puVar16;
        lVar17 = lVar14 + 0x60;
        *(undefined8 *)((long)alStack_290 + lVar14 + 0x28) = 0;
        lVar14 = lVar17;
      } while (lVar17 != 0x120);
      FUN_109a3d9cc(&uStack_480,&iStack_420);
      FUN_109a3d9cc(&uStack_4e0,&iStack_1a0);
      lVar14 = 0;
      do {
        FUN_1094c30f0((long)&iStack_420 + lVar14,(long)&iStack_1a0 + lVar14,&uStack_630,
                      auStack_2bc + lVar14 + -4);
        lVar14 = lVar14 + 0x60;
      } while (lVar14 != 0x120);
      uStack_540 = 0x42ff0000;
      uStack_534 = 0;
      uStack_530 = 0;
      uStack_53c = 0;
      lStack_500 = (long)&uStack_53c + 4;
      uStack_524 = 0;
      uStack_520 = 0;
      uStack_52c = 0;
      uStack_528 = 0;
      uStack_514 = 0;
      uStack_51c = 0;
      uStack_518 = 0;
      lStack_508 = 0;
      uStack_510 = 0;
      uStack_50c = 0;
      uStack_4f0 = 0;
      uStack_4e8 = 0;
      piVar13 = &iStack_2c0;
      puStack_4f8 = &uStack_4f0;
      FUN_1094c3518(piVar13,&uStack_540);
      if (((ulong)piVar13 & 1) != 0) {
        auStack_558[0] = 0x1010000;
        puStack_550 = &uStack_540;
        uStack_548 = 0;
        auStack_570[0] = 0x2010000;
        piStack_568 = &iStack_5d0;
        uStack_560 = 0;
        FUN_109ac9fc8(auStack_558,auStack_570,0x39,0);
      }
      if (lStack_508 != 0) {
        piVar18 = (int *)(lStack_508 + 0x14);
        do {
          iVar2 = *piVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar5) {
            *piVar18 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_540);
        }
      }
      lStack_508 = 0;
      uStack_528 = 0;
      uStack_524 = 0;
      uStack_530 = 0;
      uStack_52c = 0;
      uStack_518 = 0;
      uStack_514 = 0;
      uStack_520 = 0;
      uStack_51c = 0;
      if (0 < (int)uStack_53c) {
        lVar14 = 0;
        do {
          *(undefined4 *)(lStack_500 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)uStack_53c);
      }
      if (puStack_4f8 != &uStack_4f0 && puStack_4f8 != (undefined8 *)0x0) {
        _free(puStack_4f8[-1]);
      }
      piVar18 = &iStack_1a0;
      do {
        piVar21 = piVar18 + -0x18;
        if (*(long *)(piVar18 + -10) != 0) {
          piVar15 = (int *)(*(long *)(piVar18 + -10) + 0x14);
          do {
            iVar2 = *piVar15;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar5) {
              *piVar15 = iVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(piVar21);
          }
        }
        piVar18[-10] = 0;
        piVar18[-9] = 0;
        piVar18[-0x12] = 0;
        piVar18[-0x11] = 0;
        piVar18[-0x14] = 0;
        piVar18[-0x13] = 0;
        piVar18[-0xe] = 0;
        piVar18[-0xd] = 0;
        piVar18[-0x10] = 0;
        piVar18[-0xf] = 0;
        if (0 < piVar18[-0x17]) {
          lVar14 = 0;
          lVar17 = *(long *)(piVar18 + -8);
          do {
            *(undefined4 *)(lVar17 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < piVar18[-0x17]);
        }
        piVar15 = *(int **)(piVar18 + -6);
        if (piVar15 != piVar18 + -4 && piVar15 != (int *)0x0) {
          _free(*(undefined8 *)(piVar15 + -2));
        }
        piVar18 = piVar21;
      } while (piVar21 != &iStack_2c0);
      piVar18 = aiStack_80;
      do {
        piVar21 = piVar18 + -0x18;
        if (*(long *)(piVar18 + -10) != 0) {
          piVar15 = (int *)(*(long *)(piVar18 + -10) + 0x14);
          do {
            iVar2 = *piVar15;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar5) {
              *piVar15 = iVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(piVar21);
          }
        }
        piVar18[-10] = 0;
        piVar18[-9] = 0;
        piVar18[-0x12] = 0;
        piVar18[-0x11] = 0;
        piVar18[-0x14] = 0;
        piVar18[-0x13] = 0;
        piVar18[-0xe] = 0;
        piVar18[-0xd] = 0;
        piVar18[-0x10] = 0;
        piVar18[-0xf] = 0;
        if (0 < piVar18[-0x17]) {
          lVar14 = 0;
          lVar17 = *(long *)(piVar18 + -8);
          do {
            *(undefined4 *)(lVar17 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < piVar18[-0x17]);
        }
        piVar15 = *(int **)(piVar18 + -6);
        if (piVar15 != piVar18 + -4 && piVar15 != (int *)0x0) {
          _free(*(undefined8 *)(piVar15 + -2));
        }
        piVar18 = piVar21;
      } while (piVar21 != &iStack_1a0);
      param_3 = param_3 & 0xffffffff;
      piVar18 = aiStack_300;
      do {
        piVar21 = piVar18 + -0x18;
        if (*(long *)(piVar18 + -10) != 0) {
          piVar15 = (int *)(*(long *)(piVar18 + -10) + 0x14);
          do {
            iVar2 = *piVar15;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar5) {
              *piVar15 = iVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(piVar21);
          }
        }
        piVar18[-10] = 0;
        piVar18[-9] = 0;
        piVar18[-0x12] = 0;
        piVar18[-0x11] = 0;
        piVar18[-0x14] = 0;
        piVar18[-0x13] = 0;
        piVar18[-0xe] = 0;
        piVar18[-0xd] = 0;
        piVar18[-0x10] = 0;
        piVar18[-0xf] = 0;
        if (0 < piVar18[-0x17]) {
          lVar14 = 0;
          lVar17 = *(long *)(piVar18 + -8);
          do {
            *(undefined4 *)(lVar17 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < piVar18[-0x17]);
        }
        piVar15 = *(int **)(piVar18 + -6);
        if (piVar15 != piVar18 + -4 && piVar15 != (int *)0x0) {
          _free(*(undefined8 *)(piVar15 + -2));
        }
        piVar18 = piVar21;
      } while (piVar21 != &iStack_420);
      if (lStack_4a8 != 0) {
        piVar18 = (int *)(lStack_4a8 + 0x14);
        do {
          iVar2 = *piVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar5) {
            *piVar18 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_4e0);
        }
      }
      lStack_4a8 = 0;
      uStack_4c8 = 0;
      uStack_4c4 = 0;
      uStack_4d0 = 0;
      uStack_4cc = 0;
      uStack_4b8 = 0;
      uStack_4b4 = 0;
      uStack_4c0 = 0;
      uStack_4bc = 0;
      if (0 < (int)uStack_4dc) {
        lVar14 = 0;
        do {
          *(undefined4 *)(lStack_4a0 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)uStack_4dc);
      }
      if (puStack_498 != &uStack_490 && puStack_498 != (undefined8 *)0x0) {
        _free(puStack_498[-1]);
      }
      if (lStack_448 != 0) {
        piVar18 = (int *)(lStack_448 + 0x14);
        do {
          iVar2 = *piVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar5) {
            *piVar18 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_480);
        }
      }
      lStack_448 = 0;
      uStack_468 = 0;
      uStack_464 = 0;
      uStack_470 = 0;
      uStack_46c = 0;
      uStack_458 = 0;
      uStack_454 = 0;
      uStack_460 = 0;
      uStack_45c = 0;
      if (0 < (int)uStack_47c) {
        lVar14 = 0;
        do {
          *(undefined4 *)(lStack_440 + lVar14 * 4) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)uStack_47c);
      }
      if (puStack_438 != &uStack_430 && puStack_438 != (undefined8 *)0x0) {
        _free(puStack_438[-1]);
      }
      if (((ulong)piVar13 & 1) != 0) goto LAB_1094ba458;
LAB_1094b9f44:
      uVar19 = 0;
    }
  }
  if (lStack_5f8 != 0) {
    piVar13 = (int *)(lStack_5f8 + 0x14);
    do {
      iVar2 = *piVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar5) {
        *piVar13 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_630);
    }
  }
  lStack_5f8 = 0;
  uStack_618 = 0;
  uStack_614 = 0;
  uStack_620 = 0;
  uStack_61c = 0;
  uStack_608 = 0;
  uStack_604 = 0;
  uStack_610 = 0;
  uStack_60c = 0;
  if (0 < uStack_630._4_4_) {
    lVar14 = 0;
    do {
      piStack_5f0[lVar14] = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < uStack_630._4_4_);
  }
  if (puStack_5e8 != &uStack_5e0 && puStack_5e8 != (undefined8 *)0x0) {
    _free(puStack_5e8[-1]);
  }
  if (lStack_598 != 0) {
    piVar13 = (int *)(lStack_598 + 0x14);
    do {
      iVar2 = *piVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar5) {
        *piVar13 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&iStack_5d0);
    }
  }
  lStack_598 = 0;
  uStack_5b8 = 0;
  uStack_5b4 = 0;
  uStack_5c0 = 0;
  uStack_5bc = 0;
  uStack_5a8 = 0;
  uStack_5a4 = 0;
  uStack_5b0 = 0;
  uStack_5ac = 0;
  if (0 < iStack_5cc) {
    lVar14 = 0;
    do {
      puStack_590[lVar14] = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < iStack_5cc);
  }
  if (puStack_588 != &uStack_580 && puStack_588 != (undefined8 *)0x0) {
    _free(puStack_588[-1]);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return uVar19;
  }
  ___stack_chk_fail();
LAB_1094ba59c:
  func_0x000105688514(&UNK_10f56ee54);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x1094ba5ac);
  (*pcVar11)();
}



/* Entry: 1094ba6c8; end: 1094bb0c7;  */

undefined4 *
FUN_1094ba6c8(long *param_1,uint *param_2,undefined4 *param_3,long *param_4,undefined8 param_5,
             undefined1 *param_6)

{
  ulong uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  undefined8 uVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  uint uStack_6e0;
  uint uStack_6dc;
  undefined8 uStack_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  long lStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined4 uStack_680;
  int iStack_67c;
  undefined8 uStack_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  long lStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_618;
  undefined4 *puStack_610;
  undefined8 uStack_608;
  ulong uStack_600;
  undefined4 *puStack_5f8;
  undefined8 uStack_5f0;
  undefined4 uStack_5e8;
  int iStack_5e4;
  undefined4 *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  long lStack_5b0;
  long lStack_5a8;
  undefined1 *puStack_5a0;
  undefined1 auStack_598 [272];
  undefined4 uStack_488;
  undefined8 uStack_484;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  long lStack_450;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 auStack_428 [3];
  undefined4 uStack_390;
  int iStack_38c;
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  long lStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  uint uStack_330;
  int iStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  long lStack_2f8;
  undefined4 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  uint uStack_2c0;
  uint uStack_2bc;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 auStack_2a8 [2];
  uint *puStack_2a0;
  undefined8 uStack_298;
  uint uStack_290;
  uint uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  long lStack_258;
  undefined4 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  int iStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  long lStack_1f8;
  undefined4 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  if (*param_4 == param_4[1]) {
    plVar8 = (long *)&UNK_10f56ee10;
    func_0x000105688514();
    func_0x000104bd46a0();
    func_0x000104bd46a0();
    func_0x000104bd46a0();
    func_0x000104bd46a0();
    func_0x000104bd46a0();
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_290);
    func_0x00010567aa40(&uStack_230);
    func_0x00010567aa40(&uStack_d0);
    __Unwind_Resume();
    iVar23 = **(int **)(param_2 + 0x10);
    iVar25 = (*(int **)(param_2 + 0x10))[1];
    if ((iVar25 != (*(int **)(param_3 + 0x10))[1] || iVar23 != **(int **)(param_3 + 0x10)) ||
       (iVar25 != ((int *)param_4[8])[1] || iVar23 != *(int *)param_4[8])) {
      return (undefined4 *)0x0;
    }
    fVar28 = *(float *)(*plVar8 + 0x10);
    fVar27 = *(float *)(*plVar8 + 0x14);
    uStack_680 = (undefined4)plVar8[0x11];
    iStack_67c = (int)((ulong)plVar8[0x11] >> 0x20);
    FUN_109a829e8(&uStack_5e8,&uStack_680,5);
    uStack_488 = 0x42ff0000;
    lStack_448 = (long)&uStack_484 + 4;
    uStack_47c = 0;
    uStack_478 = 0;
    uStack_484 = 0;
    lStack_450 = 0;
    uStack_454 = 0;
    uStack_45c = 0;
    uStack_458 = 0;
    uStack_464 = 0;
    uStack_460 = 0;
    uStack_46c = 0;
    uStack_468 = 0;
    uStack_474 = 0;
    uStack_470 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    puStack_440 = &uStack_438;
    (**(code **)(*(long *)CONCAT44(iStack_5e4,uStack_5e8) + 0x18))
              ((long *)CONCAT44(iStack_5e4,uStack_5e8),&uStack_5e8,&uStack_488,0xffffffff);
    FUN_10918eb6c(&uStack_5e8);
    uStack_5e8 = 0x2010000;
    uStack_5d8 = 0;
    puStack_5e0 = &uStack_488;
    FUN_109a41858(0x3ff0000000000000,0,param_4,&uStack_5e8,5);
    iVar10 = (int)(SQRT((float)(iVar23 * iVar25)) * fVar28);
    iVar26 = -iVar10;
    if (-1 < iVar10) {
      iVar26 = iVar10;
    }
    uVar4 = iVar26 << 1 | 1;
    if (iVar10 < 1) {
      if (-1 < iVar10) goto LAB_1094bb2b4;
      uStack_6e0 = 0x1010000;
      puStack_5f8 = &uStack_488;
      uStack_6d0 = 0;
      uStack_6cc = 0;
      uStack_600 = CONCAT44(uStack_600._4_4_,0x2010000);
      uStack_5f0 = 0;
      uStack_6d8 = puStack_5f8;
      FUN_109a82ac8(&uStack_5e8,uVar4,uVar4,0);
      uStack_608 = 0;
      uStack_618 = CONCAT44(uStack_618._4_4_,0xc1060000);
      uStack_678._0_4_ = 0xffffffff;
      uStack_678._4_4_ = 0x7fefffff;
      uStack_680 = 0xffffffff;
      iStack_67c = 0x7fefffff;
      uStack_668 = 0xffffffff;
      uStack_664 = 0x7fefffff;
      uStack_670 = 0xffffffff;
      uStack_66c = 0x7fefffff;
      auStack_428[0] = 0xffffffffffffffff;
      puStack_610 = &uStack_5e8;
      FUN_109b32fd4(0,&uStack_6e0,&uStack_600,&uStack_618,auStack_428,1,0,&uStack_680);
    }
    else {
      uStack_6e0 = 0x1010000;
      puStack_5f8 = &uStack_488;
      uStack_6d0 = 0;
      uStack_6cc = 0;
      uStack_600 = CONCAT44(uStack_600._4_4_,0x2010000);
      uStack_5f0 = 0;
      uStack_6d8 = puStack_5f8;
      FUN_109a82ac8(&uStack_5e8,uVar4,uVar4,0);
      uStack_608 = 0;
      uStack_618 = CONCAT44(uStack_618._4_4_,0xc1060000);
      uStack_678._0_4_ = 0xffffffff;
      uStack_678._4_4_ = 0x7fefffff;
      uStack_680 = 0xffffffff;
      iStack_67c = 0x7fefffff;
      uStack_668 = 0xffffffff;
      uStack_664 = 0x7fefffff;
      uStack_670 = 0xffffffff;
      uStack_66c = 0x7fefffff;
      auStack_428[0] = 0xffffffffffffffff;
      puStack_610 = &uStack_5e8;
      FUN_109b32fd4(1,&uStack_6e0,&uStack_600,&uStack_618,auStack_428,1,0,&uStack_680);
    }
    FUN_10918eb6c(&uStack_5e8);
LAB_1094bb2b4:
    iVar23 = (int)ABS(SQRT((float)(iVar23 * iVar25)) * fVar27);
    uVar4 = iVar23 << 1;
    uStack_6e0 = uVar4 | 1;
    uStack_5e8 = 0x1010000;
    puStack_5e0 = &uStack_488;
    uStack_5d8 = 0;
    uStack_680 = 0x2010000;
    uStack_670 = 0;
    uStack_66c = 0;
    uStack_6dc = uStack_6e0;
    uStack_678 = puStack_5e0;
    FUN_109b44a6c(0,0,&uStack_5e8,&uStack_680,&uStack_6e0,4);
    uVar24 = NEON_rev64(**(undefined8 **)(param_2 + 0x10),4);
    uStack_6e0 = (uint)uVar24;
    uStack_6dc = (uint)((ulong)uVar24 >> 0x20);
    FUN_109a829e8(&uStack_5e8,&uStack_6e0,5);
    uStack_680 = 0x42ff0000;
    puStack_640 = &uStack_678;
    uStack_678._4_4_ = 0;
    uStack_670 = 0;
    iStack_67c = 0;
    uStack_678._0_4_ = 0;
    lStack_648 = 0;
    uStack_64c = 0;
    uStack_654 = 0;
    uStack_650 = 0;
    uStack_65c = 0;
    uStack_658 = 0;
    uStack_664 = 0;
    uStack_660 = 0;
    uStack_66c = 0;
    uStack_668 = 0;
    uStack_630 = 0;
    uStack_628 = 0;
    puStack_638 = &uStack_630;
    (**(code **)(*(long *)CONCAT44(iStack_5e4,uStack_5e8) + 0x18))
              ((long *)CONCAT44(iStack_5e4,uStack_5e8),&uStack_5e8,&uStack_680,0xffffffff);
    FUN_10918eb6c(&uStack_5e8);
    uVar24 = NEON_rev64(CONCAT44(uStack_678._4_4_ - iVar23,(int)uStack_678 - iVar23),4);
    uStack_618 = NEON_smin(uVar24,CONCAT44(iVar23,iVar23),4);
    iVar25 = (int)uVar24;
    iVar26 = (int)((ulong)uVar24 >> 0x20);
    puStack_610 = (undefined4 *)
                  CONCAT44((iVar23 - iVar26) + (iVar26 - iVar23) * 2 * (uint)(iVar23 < iVar26),
                           (iVar23 - iVar25) + (iVar25 - iVar23) * 2 * (uint)(iVar23 < iVar25));
    uStack_6e0 = 0;
    uStack_6dc = 0x3ff00000;
    uStack_6d8._0_4_ = 0;
    uStack_6d8._4_4_ = 0;
    uStack_6d0 = 0;
    uStack_6cc = 0;
    uStack_6c8 = 0;
    uStack_6c4 = 0;
    FUN_109a852c8(&uStack_5e8,&uStack_680,&uStack_618);
    FUN_109a48880(&uStack_5e8,&uStack_6e0);
    if (lStack_5b0 != 0) {
      piVar2 = (int *)(lStack_5b0 + 0x14);
      do {
        iVar23 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar23 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(&uStack_5e8);
      }
    }
    lStack_5b0 = 0;
    uStack_5d0 = 0;
    uStack_5d8 = 0;
    uStack_5c0 = 0;
    uStack_5c8 = 0;
    if (0 < iStack_5e4) {
      lVar12 = 0;
      do {
        *(undefined4 *)(lStack_5a8 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < iStack_5e4);
    }
    if (puStack_5a0 != auStack_598 && puStack_5a0 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_5a0 + -8));
    }
    uStack_5e8 = 0x1010000;
    uStack_5d8 = 0;
    uStack_6e0 = 0x2010000;
    uStack_6d0 = 0;
    uStack_6cc = 0;
    uStack_600 = CONCAT44(uVar4,uVar4) | 0x100000001;
    puVar9 = &uStack_5e8;
    puStack_5e0 = &uStack_680;
    uStack_6d8 = &uStack_680;
    FUN_109b44a6c(0,0,puVar9,&uStack_6e0,&uStack_600,0);
    uStack_5d8 = 0;
    uStack_5e8 = 0x1010000;
    puStack_5f8 = &uStack_488;
    uStack_6d0 = 0;
    uStack_6cc = 0;
    uStack_6e0 = 0x1010000;
    uStack_600 = CONCAT44(uStack_600._4_4_,0x2010000);
    uStack_5f0 = 0;
    auStack_428[0] = 0x3ff0000000000000;
    puStack_5e0 = puStack_5f8;
    uStack_6d8 = &uStack_680;
    FUN_109a91d90();
    FUN_109a293c4(&uStack_5e8,&uStack_6e0,&uStack_600,puVar9,0xffffffff,&PTR_FUN_1132e8c90,1,
                  auStack_428);
    uStack_6e0 = 0x42ff0000;
    puStack_6a0 = &uStack_6d8;
    uStack_6d8._4_4_ = 0;
    uStack_6d0 = 0;
    uStack_6dc = 0;
    uStack_6d8._0_4_ = 0;
    uStack_6c4 = 0;
    uStack_6c0 = 0;
    uStack_6cc = 0;
    uStack_6c8 = 0;
    uStack_6b4 = 0;
    uStack_6bc = 0;
    uStack_6b8 = 0;
    lStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_6ac = 0;
    uStack_690 = 0;
    uStack_688 = 0;
    uStack_5e8 = 0x2010000;
    uStack_5d8 = 0;
    puStack_698 = &uStack_690;
    puStack_5e0 = &uStack_6e0;
    FUN_109a479a0(param_2,&uStack_5e8);
    uStack_600 = NEON_rev64(**(undefined8 **)(param_2 + 0x10),4);
    FUN_109a829e8(&uStack_5e8,&uStack_600,*param_2 & 0xfff);
    (**(code **)(*(long *)CONCAT44(iStack_5e4,uStack_5e8) + 0x18))
              ((long *)CONCAT44(iStack_5e4,uStack_5e8),&uStack_5e8,param_5,0xffffffff);
    FUN_10918eb6c(&uStack_5e8);
    FUN_1094c2938(param_3,CONCAT44(uStack_6cc,uStack_6d0),*(undefined4 *)puStack_6a0,
                  *(undefined4 *)((long)puStack_6a0 + 4),CONCAT44(uStack_474,uStack_478),lStack_448,
                  param_5);
    if (((ulong)param_3 & 1) != 0) {
      uStack_5d8 = 0;
      uStack_5e8 = 0x1010000;
      uStack_600 = CONCAT44(uStack_600._4_4_,0x2010000);
      uStack_5f0 = 0;
      puStack_5f8 = &uStack_488;
      puStack_5e0 = &uStack_488;
      FUN_109b59078(0,0x3ff0000000000000,&uStack_5e8,&uStack_600,0);
      uStack_5e8 = 0x2010000;
      uStack_5d8 = 0;
      puStack_5e0 = (undefined4 *)param_6;
      FUN_109a41858(0x3ff0000000000000,0,&uStack_488,&uStack_5e8,0);
    }
    if (lStack_6a8 != 0) {
      piVar2 = (int *)(lStack_6a8 + 0x14);
      do {
        iVar23 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar23 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(&uStack_6e0);
      }
    }
    lStack_6a8 = 0;
    uStack_6c8 = 0;
    uStack_6c4 = 0;
    uStack_6d0 = 0;
    uStack_6cc = 0;
    uStack_6b8 = 0;
    uStack_6b4 = 0;
    uStack_6c0 = 0;
    uStack_6bc = 0;
    if (0 < (int)uStack_6dc) {
      lVar12 = 0;
      do {
        *(undefined4 *)((long)puStack_6a0 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)uStack_6dc);
    }
    if (puStack_698 != &uStack_690 && puStack_698 != (undefined8 *)0x0) {
      _free(puStack_698[-1]);
    }
    if (lStack_648 != 0) {
      piVar2 = (int *)(lStack_648 + 0x14);
      do {
        iVar23 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar23 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(&uStack_680);
      }
    }
    lStack_648 = 0;
    uStack_668 = 0;
    uStack_664 = 0;
    uStack_670 = 0;
    uStack_66c = 0;
    uStack_658 = 0;
    uStack_654 = 0;
    uStack_660 = 0;
    uStack_65c = 0;
    if (0 < iStack_67c) {
      lVar12 = 0;
      do {
        *(undefined4 *)((long)puStack_640 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < iStack_67c);
    }
    if (puStack_638 != &uStack_630 && puStack_638 != (undefined8 *)0x0) {
      _free(puStack_638[-1]);
    }
    if (lStack_450 != 0) {
      piVar2 = (int *)(lStack_450 + 0x14);
      do {
        iVar23 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar23 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar23 + -1 == 0) {
        func_0x000109a848d4(&uStack_488);
      }
    }
    lStack_450 = 0;
    uStack_470 = 0;
    uStack_46c = 0;
    uStack_478 = 0;
    uStack_474 = 0;
    uStack_460 = 0;
    uStack_45c = 0;
    uStack_468 = 0;
    uStack_464 = 0;
    if (0 < (int)uStack_484) {
      lVar12 = 0;
      do {
        *(undefined4 *)(lStack_448 + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)uStack_484);
    }
    if (puStack_440 != &uStack_438 && puStack_440 != (undefined8 *)0x0) {
      _free(puStack_440[-1]);
    }
    return param_3;
  }
  puVar11 = *(uint **)(*param_4 + 0x40);
  uVar3 = *puVar11;
  uVar4 = puVar11[1];
  uStack_290 = uVar4;
  uStack_28c = uVar3;
  FUN_109a829e8(&uStack_230,&uStack_290,0);
  uStack_d0 = 0x42ff0000;
  lStack_90 = (long)&uStack_cc + 4;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  lStack_98 = 0;
  uStack_9c = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  plStack_88 = &lStack_80;
  (**(code **)(*(long *)CONCAT44(iStack_22c,uStack_230) + 0x18))
            ((long *)CONCAT44(iStack_22c,uStack_230),&uStack_230,&uStack_d0,0xffffffff);
  FUN_10918eb6c(&uStack_230);
  uStack_290 = uStack_290 & 0xffffff00;
  func_0x0001074b2d2c(&uStack_230,(param_4[1] - *param_4 >> 5) * -0x5555555555555555,&uStack_290);
  lVar21 = *(long *)(*param_1 + 0x48);
  for (lVar12 = *(long *)(*param_1 + 0x40); lVar12 != lVar21; lVar12 = lVar12 + 0x18) {
    lVar22 = param_1[2] + 0x20;
    FUN_1092b09c4(lVar22,lVar12);
    if (lVar22 == 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&uStack_330,&UNK_10f56ee37,lVar12);
      FUN_109259240(&uStack_290,&uStack_330,&DAT_10f638984);
      func_0x000105687ee0(&uStack_290);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1094baff4);
      (*pcVar7)();
    }
    uVar14 = (ulong)(long)*(int *)(lVar22 + 0x28) >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(CONCAT44(iStack_22c,uStack_230) + uVar14) =
         1L << ((long)*(int *)(lVar22 + 0x28) & 0x3fU) |
         *(ulong *)(CONCAT44(iStack_22c,uStack_230) + uVar14);
  }
  if (0 < (int)uVar3) {
    uVar14 = 0;
    do {
      if (0 < (int)uVar4) {
        uVar15 = 0;
        do {
          lVar12 = *param_4;
          uVar18 = (param_4[1] - lVar12 >> 5) * -0x5555555555555555;
          if (uVar18 < 2) {
            uVar17 = 0;
          }
          else {
            uVar17 = 0;
            uVar19 = 2;
            uVar20 = 1;
            do {
              uVar16 = uVar19 - 1;
              lVar21 = lVar12 + uVar20 * 0x60;
              lVar22 = lVar12 + uVar17 * 0x60;
              if (*(float *)(*(long *)(lVar21 + 0x10) + **(long **)(lVar21 + 0x48) * uVar14 +
                            uVar15 * 4) <=
                  *(float *)(*(long *)(lVar22 + 0x10) + **(long **)(lVar22 + 0x48) * uVar14 +
                            uVar15 * 4)) {
                uVar16 = (uint)uVar17;
              }
              uVar17 = (ulong)uVar16;
              uVar20 = (ulong)uVar19;
              uVar1 = (ulong)uVar19;
              uVar19 = uVar19 + 1;
            } while (uVar1 <= uVar18 && uVar18 - uVar1 != 0);
          }
          if ((*(ulong *)(CONCAT44(iStack_22c,uStack_230) + (uVar17 >> 6) * 8) >> (uVar17 & 0x3f) &
              1) != 0) {
            *(undefined1 *)(CONCAT44(uStack_bc,uStack_c0) + *plStack_88 * uVar14 + uVar15) = 0xff;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar4);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar3);
  }
  if (CONCAT44(iStack_22c,uStack_230) != 0) {
    __ZdlPv();
  }
  uStack_230 = 0x42ff0000;
  puStack_1f0 = &uStack_228;
  uStack_224 = 0;
  uStack_220 = 0;
  iStack_22c = 0;
  uStack_228 = 0;
  uStack_214 = 0;
  uStack_210 = 0;
  uStack_21c = 0;
  uStack_218 = 0;
  uStack_204 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uVar19 = *(uint *)(param_1 + 0x10);
  uVar16 = *(uint *)((long)param_1 + 0x84);
  uStack_2c0 = uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU);
  uStack_2bc = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
  uVar19 = (int)param_1[0x11] + uVar19;
  if ((int)uVar19 <= (int)uVar4) {
    uVar4 = uVar19;
  }
  iVar23 = uVar4 - uStack_2c0;
  uVar16 = *(int *)((long)param_1 + 0x8c) + uVar16;
  if ((int)uVar16 <= (int)uVar3) {
    uVar3 = uVar16;
  }
  iVar25 = uVar3 - uStack_2bc;
  if (iVar23 < 1 || iVar25 < 1) {
    uStack_2c0 = 0;
    uStack_2bc = 0;
    iVar23 = 0;
    iVar25 = 0;
  }
  uStack_2b8 = (long *)CONCAT44(iVar25,iVar23);
  puStack_1e8 = &uStack_1e0;
  FUN_109a852c8(&uStack_290,&uStack_d0,&uStack_2c0);
  uStack_380 = 0;
  uStack_37c = 0;
  uStack_390 = 0x1010000;
  auStack_2a8[0] = 0x2010000;
  puStack_2a0 = &uStack_230;
  uStack_298 = 0;
  uStack_328 = 0;
  uStack_324 = 0;
  uStack_330 = 0;
  iStack_32c = 0;
  uStack_318 = 0;
  uStack_314 = 0;
  uStack_320 = 0;
  uStack_31c = 0;
  uStack_388 = &uStack_290;
  FUN_109a4a0a4(&uStack_390,auStack_2a8,(int)param_1[0x12],*(undefined4 *)((long)param_1 + 0x94),
                (int)param_1[0x13],*(undefined4 *)((long)param_1 + 0x9c),0,&uStack_330);
  if (lStack_258 != 0) {
    piVar2 = (int *)(lStack_258 + 0x14);
    do {
      iVar23 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar23 + -1 == 0) {
      func_0x000109a848d4(&uStack_290);
    }
  }
  lStack_258 = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  if (0 < (int)uStack_28c) {
    lVar12 = 0;
    do {
      *(undefined4 *)((long)puStack_250 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)uStack_28c);
  }
  if (puStack_248 != &uStack_240 && puStack_248 != (undefined8 *)0x0) {
    _free(puStack_248[-1]);
  }
  uStack_2c8 = *(undefined4 *)*param_1;
  uStack_290 = 0x42ff0000;
  puStack_250 = &uStack_288;
  uStack_284 = 0;
  uStack_280 = 0;
  uStack_28c = 0;
  uStack_288 = 0;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_27c = 0;
  uStack_278 = 0;
  uStack_264 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_380 = 0;
  uStack_37c = 0;
  uStack_390 = 0x1010000;
  uStack_388 = &uStack_230;
  auStack_2a8[0] = 0x2010000;
  uStack_298 = 0;
  uStack_2b8 = param_1 + 0x30;
  uStack_2b0 = 0;
  uStack_2c0 = 0x1010000;
  uStack_328 = 0;
  uStack_324 = 0;
  uStack_330 = 0;
  iStack_32c = 0;
  uStack_318 = 0;
  uStack_314 = 0;
  uStack_320 = 0;
  uStack_31c = 0;
  uStack_2c4 = uStack_2c8;
  puStack_2a0 = &uStack_290;
  puStack_248 = &uStack_240;
  FUN_109b1e030(&uStack_390,auStack_2a8,&uStack_2c0,&uStack_2c8,0,0,&uStack_330);
  uStack_330 = 0x42ff0000;
  puStack_2f0 = &uStack_328;
  uStack_324 = 0;
  uStack_320 = 0;
  iStack_32c = 0;
  uStack_328 = 0;
  uStack_314 = 0;
  uStack_310 = 0;
  uStack_31c = 0;
  uStack_318 = 0;
  uStack_304 = 0;
  uStack_30c = 0;
  uStack_308 = 0;
  lStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2fc = 0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  uStack_390 = 0x42ff0000;
  puStack_350 = &uStack_388;
  lStack_358 = 0;
  uStack_35c = 0;
  uStack_364 = 0;
  uStack_360 = 0;
  uStack_36c = 0;
  uStack_368 = 0;
  uStack_374 = 0;
  uStack_370 = 0;
  uStack_37c = 0;
  uStack_378 = 0;
  uStack_388._4_4_ = 0;
  uStack_380 = 0;
  iStack_38c = 0;
  uStack_388._0_4_ = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  puStack_348 = &uStack_340;
  puStack_2e8 = &uStack_2e0;
  if (((1e-06 <= ABS(*(float *)(*param_1 + 0x10))) || (1e-06 <= ABS(*(float *)(*param_1 + 0x14))))
     && (plVar8 = param_1,
        FUN_1094bb0c8(param_1,param_1 + 0x21,param_3,&uStack_290,&uStack_390,&uStack_330),
        ((ulong)plVar8 & 1) != 0)) goto LAB_1094bad3c;
  if (lStack_258 != 0) {
    piVar2 = (int *)(lStack_258 + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (lStack_2f8 != 0) {
    piVar2 = (int *)(lStack_2f8 + 0x14);
    do {
      iVar23 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar23 + -1 == 0) {
      func_0x000109a848d4(&uStack_330);
    }
  }
  puVar13 = puStack_248;
  lStack_2f8 = 0;
  uStack_318 = 0;
  uStack_314 = 0;
  uStack_320 = 0;
  uStack_31c = 0;
  uStack_308 = 0;
  uStack_304 = 0;
  uStack_310 = 0;
  uStack_30c = 0;
  if (iStack_32c < 1) {
LAB_1094babfc:
    uStack_330 = uStack_290;
    if (2 < (int)uStack_28c) goto LAB_1094bac30;
    iStack_32c = uStack_28c;
    uStack_328 = uStack_288;
    uStack_324 = uStack_284;
    *puStack_2e8 = *puStack_248;
    puStack_2e8[1] = puVar13[1];
  }
  else {
    lVar12 = 0;
    do {
      puStack_2f0[lVar12] = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_32c);
    if (iStack_32c < 3) goto LAB_1094babfc;
LAB_1094bac30:
    uStack_330 = uStack_290;
    func_0x000109a84868(&uStack_330,&uStack_290);
  }
  uStack_318 = uStack_278;
  uStack_314 = uStack_274;
  uStack_320 = uStack_280;
  uStack_31c = uStack_27c;
  uStack_308 = uStack_268;
  uStack_304 = uStack_264;
  uStack_310 = uStack_270;
  uStack_30c = uStack_26c;
  lStack_2f8 = lStack_258;
  uStack_300 = uStack_260;
  uStack_2fc = uStack_25c;
  if (&uStack_390 == param_3) goto LAB_1094bad3c;
  if (*(long *)(param_3 + 0xe) != 0) {
    piVar2 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (lStack_358 != 0) {
    piVar2 = (int *)(lStack_358 + 0x14);
    do {
      iVar23 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar23 + -1 == 0) {
      func_0x000109a848d4(&uStack_390);
    }
  }
  lStack_358 = 0;
  uStack_378 = 0;
  uStack_374 = 0;
  uStack_380 = 0;
  uStack_37c = 0;
  uStack_368 = 0;
  uStack_364 = 0;
  uStack_370 = 0;
  uStack_36c = 0;
  if (iStack_38c < 1) {
    uStack_390 = *param_3;
LAB_1094bacec:
    iVar23 = param_3[1];
    if (2 < iVar23) goto LAB_1094bad20;
    uStack_388._0_4_ = (undefined4)*(undefined8 *)(param_3 + 2);
    uStack_388._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
    puVar13 = *(undefined8 **)(param_3 + 0x12);
    *puStack_348 = *puVar13;
    puStack_348[1] = puVar13[1];
    iStack_38c = iVar23;
  }
  else {
    lVar12 = 0;
    do {
      *(undefined4 *)((long)puStack_350 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_38c);
    uStack_390 = *param_3;
    if (iStack_38c < 3) goto LAB_1094bacec;
LAB_1094bad20:
    func_0x000109a84868(&uStack_390,param_3);
  }
  uStack_378 = (undefined4)*(undefined8 *)(param_3 + 6);
  uStack_374 = (undefined4)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20);
  uStack_380 = (undefined4)*(undefined8 *)(param_3 + 4);
  uStack_37c = (undefined4)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
  uStack_368 = (undefined4)*(undefined8 *)(param_3 + 10);
  uStack_364 = (undefined4)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20);
  uStack_370 = (undefined4)*(undefined8 *)(param_3 + 8);
  uStack_36c = (undefined4)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
  lStack_358 = *(long *)(param_3 + 0xe);
  uStack_360 = (undefined4)*(undefined8 *)(param_3 + 0xc);
  uStack_35c = (undefined4)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
LAB_1094bad3c:
  FUN_1094bb884(param_1,&uStack_390,&uStack_330,*(undefined1 *)(*param_1 + 0x2f),param_2);
  if (lStack_358 != 0) {
    piVar2 = (int *)(lStack_358 + 0x14);
    do {
      iVar23 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar23 + -1 == 0) {
      func_0x000109a848d4(&uStack_390);
    }
  }
  lStack_358 = 0;
  uStack_378 = 0;
  uStack_374 = 0;
  uStack_380 = 0;
  uStack_37c = 0;
  uStack_368 = 0;
  uStack_364 = 0;
  uStack_370 = 0;
  uStack_36c = 0;
  if (0 < iStack_38c) {
    lVar12 = 0;
    do {
      *(undefined4 *)((long)puStack_350 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_38c);
  }
  if (puStack_348 != &uStack_340 && puStack_348 != (undefined8 *)0x0) {
    _free(puStack_348[-1]);
  }
  if (lStack_2f8 != 0) {
    piVar2 = (int *)(lStack_2f8 + 0x14);
    do {
      iVar23 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar23 + -1 == 0) {
      func_0x000109a848d4(&uStack_330);
    }
  }
  lStack_2f8 = 0;
  uStack_318 = 0;
  uStack_314 = 0;
  uStack_320 = 0;
  uStack_31c = 0;
  uStack_308 = 0;
  uStack_304 = 0;
  uStack_310 = 0;
  uStack_30c = 0;
  if (0 < iStack_32c) {
    lVar12 = 0;
    do {
      puStack_2f0[lVar12] = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_32c);
  }
  if (puStack_2e8 != &uStack_2e0 && puStack_2e8 != (undefined8 *)0x0) {
    _free(puStack_2e8[-1]);
  }
  if (lStack_258 != 0) {
    piVar2 = (int *)(lStack_258 + 0x14);
    do {
      iVar23 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar23 + -1 == 0) {
      func_0x000109a848d4(&uStack_290);
    }
  }
  lStack_258 = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  if (0 < (int)uStack_28c) {
    lVar12 = 0;
    do {
      puStack_250[lVar12] = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)uStack_28c);
  }
  if (puStack_248 != &uStack_240 && puStack_248 != (undefined8 *)0x0) {
    _free(puStack_248[-1]);
  }
  if (lStack_1f8 != 0) {
    piVar2 = (int *)(lStack_1f8 + 0x14);
    do {
      iVar23 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar23 + -1 == 0) {
      func_0x000109a848d4(&uStack_230);
    }
  }
  lStack_1f8 = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  if (0 < iStack_22c) {
    lVar12 = 0;
    do {
      puStack_1f0[lVar12] = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iStack_22c);
  }
  if (puStack_1e8 != &uStack_1e0 && puStack_1e8 != (undefined8 *)0x0) {
    _free(puStack_1e8[-1]);
  }
  if (lStack_98 != 0) {
    piVar2 = (int *)(lStack_98 + 0x14);
    do {
      iVar23 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar23 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar23 + -1 == 0) {
      func_0x000109a848d4(&uStack_d0);
    }
  }
  lStack_98 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  if (0 < (int)uStack_cc) {
    lVar12 = 0;
    do {
      *(undefined4 *)(lStack_90 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)uStack_cc);
  }
  if (plStack_88 != &lStack_80 && plStack_88 != (long *)0x0) {
    _free(plStack_88[-1]);
  }
  return (undefined4 *)0x1;
}



/* Entry: 1094bb0c8; end: 1094bb883;  */

ulong FUN_1094bb0c8(long *param_1,uint *param_2,ulong param_3,long param_4,undefined8 param_5,
                   undefined1 *param_6)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  uint uStack_350;
  uint uStack_34c;
  undefined8 uStack_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  long lStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  int iStack_2ec;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_288;
  undefined4 *puStack_280;
  undefined8 uStack_278;
  ulong uStack_270;
  undefined4 *puStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  int iStack_254;
  undefined4 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  undefined1 auStack_208 [272];
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long lStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 auStack_98 [3];
  
  iVar8 = **(int **)(param_2 + 0x10);
  iVar10 = (*(int **)(param_2 + 0x10))[1];
  if ((iVar10 != (*(int **)(param_3 + 0x40))[1] || iVar8 != **(int **)(param_3 + 0x40)) ||
     (iVar10 != (*(int **)(param_4 + 0x40))[1] || iVar8 != **(int **)(param_4 + 0x40))) {
    return 0;
  }
  fVar13 = *(float *)(*param_1 + 0x10);
  fVar12 = *(float *)(*param_1 + 0x14);
  uStack_2f0 = (undefined4)param_1[0x11];
  iStack_2ec = (int)((ulong)param_1[0x11] >> 0x20);
  FUN_109a829e8(&uStack_258,&uStack_2f0,5);
  uStack_f8 = 0x42ff0000;
  lStack_b8 = (long)&uStack_f4 + 4;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_f4 = 0;
  lStack_c0 = 0;
  uStack_c4 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_b0 = &uStack_a8;
  (**(code **)(*(long *)CONCAT44(iStack_254,uStack_258) + 0x18))
            ((long *)CONCAT44(iStack_254,uStack_258),&uStack_258,&uStack_f8,0xffffffff);
  FUN_10918eb6c(&uStack_258);
  uStack_258 = 0x2010000;
  uStack_248 = 0;
  puStack_250 = &uStack_f8;
  FUN_109a41858(0x3ff0000000000000,0,param_4,&uStack_258,5);
  iVar6 = (int)(SQRT((float)(iVar8 * iVar10)) * fVar13);
  iVar11 = -iVar6;
  if (-1 < iVar6) {
    iVar11 = iVar6;
  }
  uVar2 = iVar11 << 1 | 1;
  if (iVar6 < 1) {
    if (-1 < iVar6) goto LAB_1094bb2b4;
    uStack_350 = 0x1010000;
    puStack_268 = &uStack_f8;
    uStack_340 = 0;
    uStack_33c = 0;
    uStack_270 = CONCAT44(uStack_270._4_4_,0x2010000);
    uStack_260 = 0;
    uStack_348 = puStack_268;
    FUN_109a82ac8(&uStack_258,uVar2,uVar2,0);
    uStack_278 = 0;
    uStack_288 = CONCAT44(uStack_288._4_4_,0xc1060000);
    uStack_2e8._0_4_ = 0xffffffff;
    uStack_2e8._4_4_ = 0x7fefffff;
    uStack_2f0 = 0xffffffff;
    iStack_2ec = 0x7fefffff;
    uStack_2d8 = 0xffffffff;
    uStack_2d4 = 0x7fefffff;
    uStack_2e0 = 0xffffffff;
    uStack_2dc = 0x7fefffff;
    auStack_98[0] = 0xffffffffffffffff;
    puStack_280 = &uStack_258;
    FUN_109b32fd4(0,&uStack_350,&uStack_270,&uStack_288,auStack_98,1,0,&uStack_2f0);
  }
  else {
    uStack_350 = 0x1010000;
    puStack_268 = &uStack_f8;
    uStack_340 = 0;
    uStack_33c = 0;
    uStack_270 = CONCAT44(uStack_270._4_4_,0x2010000);
    uStack_260 = 0;
    uStack_348 = puStack_268;
    FUN_109a82ac8(&uStack_258,uVar2,uVar2,0);
    uStack_278 = 0;
    uStack_288 = CONCAT44(uStack_288._4_4_,0xc1060000);
    uStack_2e8._0_4_ = 0xffffffff;
    uStack_2e8._4_4_ = 0x7fefffff;
    uStack_2f0 = 0xffffffff;
    iStack_2ec = 0x7fefffff;
    uStack_2d8 = 0xffffffff;
    uStack_2d4 = 0x7fefffff;
    uStack_2e0 = 0xffffffff;
    uStack_2dc = 0x7fefffff;
    auStack_98[0] = 0xffffffffffffffff;
    puStack_280 = &uStack_258;
    FUN_109b32fd4(1,&uStack_350,&uStack_270,&uStack_288,auStack_98,1,0,&uStack_2f0);
  }
  FUN_10918eb6c(&uStack_258);
LAB_1094bb2b4:
  iVar8 = (int)ABS(SQRT((float)(iVar8 * iVar10)) * fVar12);
  uVar2 = iVar8 << 1;
  uStack_350 = uVar2 | 1;
  uStack_258 = 0x1010000;
  puStack_250 = &uStack_f8;
  uStack_248 = 0;
  uStack_2f0 = 0x2010000;
  uStack_2e0 = 0;
  uStack_2dc = 0;
  uStack_34c = uStack_350;
  uStack_2e8 = puStack_250;
  FUN_109b44a6c(0,0,&uStack_258,&uStack_2f0,&uStack_350,4);
  uVar9 = NEON_rev64(**(undefined8 **)(param_2 + 0x10),4);
  uStack_350 = (uint)uVar9;
  uStack_34c = (uint)((ulong)uVar9 >> 0x20);
  FUN_109a829e8(&uStack_258,&uStack_350,5);
  uStack_2f0 = 0x42ff0000;
  puStack_2b0 = &uStack_2e8;
  uStack_2e8._4_4_ = 0;
  uStack_2e0 = 0;
  iStack_2ec = 0;
  uStack_2e8._0_4_ = 0;
  lStack_2b8 = 0;
  uStack_2bc = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2dc = 0;
  uStack_2d8 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  puStack_2a8 = &uStack_2a0;
  (**(code **)(*(long *)CONCAT44(iStack_254,uStack_258) + 0x18))
            ((long *)CONCAT44(iStack_254,uStack_258),&uStack_258,&uStack_2f0,0xffffffff);
  FUN_10918eb6c(&uStack_258);
  uVar9 = NEON_rev64(CONCAT44(uStack_2e8._4_4_ - iVar8,(int)uStack_2e8 - iVar8),4);
  uStack_288 = NEON_smin(uVar9,CONCAT44(iVar8,iVar8),4);
  iVar10 = (int)uVar9;
  iVar11 = (int)((ulong)uVar9 >> 0x20);
  puStack_280 = (undefined4 *)
                CONCAT44((iVar8 - iVar11) + (iVar11 - iVar8) * 2 * (uint)(iVar8 < iVar11),
                         (iVar8 - iVar10) + (iVar10 - iVar8) * 2 * (uint)(iVar8 < iVar10));
  uStack_350 = 0;
  uStack_34c = 0x3ff00000;
  uStack_348._0_4_ = 0;
  uStack_348._4_4_ = 0;
  uStack_340 = 0;
  uStack_33c = 0;
  uStack_338 = 0;
  uStack_334 = 0;
  FUN_109a852c8(&uStack_258,&uStack_2f0,&uStack_288);
  FUN_109a48880(&uStack_258,&uStack_350);
  if (lStack_220 != 0) {
    piVar1 = (int *)(lStack_220 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_258);
    }
  }
  lStack_220 = 0;
  uStack_240 = 0;
  uStack_248 = 0;
  uStack_230 = 0;
  uStack_238 = 0;
  if (0 < iStack_254) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_218 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_254);
  }
  if (puStack_210 != auStack_208 && puStack_210 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_210 + -8));
  }
  uStack_258 = 0x1010000;
  uStack_248 = 0;
  uStack_350 = 0x2010000;
  uStack_340 = 0;
  uStack_33c = 0;
  uStack_270 = CONCAT44(uVar2,uVar2) | 0x100000001;
  puVar5 = &uStack_258;
  puStack_250 = &uStack_2f0;
  uStack_348 = &uStack_2f0;
  FUN_109b44a6c(0,0,puVar5,&uStack_350,&uStack_270,0);
  uStack_248 = 0;
  uStack_258 = 0x1010000;
  puStack_268 = &uStack_f8;
  uStack_340 = 0;
  uStack_33c = 0;
  uStack_350 = 0x1010000;
  uStack_270 = CONCAT44(uStack_270._4_4_,0x2010000);
  uStack_260 = 0;
  auStack_98[0] = 0x3ff0000000000000;
  puStack_250 = puStack_268;
  uStack_348 = &uStack_2f0;
  FUN_109a91d90();
  FUN_109a293c4(&uStack_258,&uStack_350,&uStack_270,puVar5,0xffffffff,&PTR_FUN_1132e8c90,1,
                auStack_98);
  uStack_350 = 0x42ff0000;
  puStack_310 = &uStack_348;
  uStack_348._4_4_ = 0;
  uStack_340 = 0;
  uStack_34c = 0;
  uStack_348._0_4_ = 0;
  uStack_334 = 0;
  uStack_330 = 0;
  uStack_33c = 0;
  uStack_338 = 0;
  uStack_324 = 0;
  uStack_32c = 0;
  uStack_328 = 0;
  lStack_318 = 0;
  uStack_320 = 0;
  uStack_31c = 0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_258 = 0x2010000;
  uStack_248 = 0;
  puStack_308 = &uStack_300;
  puStack_250 = &uStack_350;
  FUN_109a479a0(param_2,&uStack_258);
  uStack_270 = NEON_rev64(**(undefined8 **)(param_2 + 0x10),4);
  FUN_109a829e8(&uStack_258,&uStack_270,*param_2 & 0xfff);
  (**(code **)(*(long *)CONCAT44(iStack_254,uStack_258) + 0x18))
            ((long *)CONCAT44(iStack_254,uStack_258),&uStack_258,param_5,0xffffffff);
  FUN_10918eb6c(&uStack_258);
  FUN_1094c2938(param_3,CONCAT44(uStack_33c,uStack_340),*(undefined4 *)puStack_310,
                *(undefined4 *)((long)puStack_310 + 4),CONCAT44(uStack_e4,uStack_e8),lStack_b8,
                param_5);
  if ((param_3 & 1) != 0) {
    uStack_248 = 0;
    uStack_258 = 0x1010000;
    uStack_270 = CONCAT44(uStack_270._4_4_,0x2010000);
    uStack_260 = 0;
    puStack_268 = &uStack_f8;
    puStack_250 = &uStack_f8;
    FUN_109b59078(0,0x3ff0000000000000,&uStack_258,&uStack_270,0);
    uStack_258 = 0x2010000;
    uStack_248 = 0;
    puStack_250 = (undefined4 *)param_6;
    FUN_109a41858(0x3ff0000000000000,0,&uStack_f8,&uStack_258,0);
  }
  if (lStack_318 != 0) {
    piVar1 = (int *)(lStack_318 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_350);
    }
  }
  lStack_318 = 0;
  uStack_338 = 0;
  uStack_334 = 0;
  uStack_340 = 0;
  uStack_33c = 0;
  uStack_328 = 0;
  uStack_324 = 0;
  uStack_330 = 0;
  uStack_32c = 0;
  if (0 < (int)uStack_34c) {
    lVar7 = 0;
    do {
      *(undefined4 *)((long)puStack_310 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_34c);
  }
  if (puStack_308 != &uStack_300 && puStack_308 != (undefined8 *)0x0) {
    _free(puStack_308[-1]);
  }
  if (lStack_2b8 != 0) {
    piVar1 = (int *)(lStack_2b8 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_2f0);
    }
  }
  lStack_2b8 = 0;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  uStack_2e0 = 0;
  uStack_2dc = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  if (0 < iStack_2ec) {
    lVar7 = 0;
    do {
      *(undefined4 *)((long)puStack_2b0 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_2ec);
  }
  if (puStack_2a8 != &uStack_2a0 && puStack_2a8 != (undefined8 *)0x0) {
    _free(puStack_2a8[-1]);
  }
  if (lStack_c0 != 0) {
    piVar1 = (int *)(lStack_c0 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_f8);
    }
  }
  lStack_c0 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  if (0 < (int)uStack_f4) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_b8 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)uStack_f4);
  }
  if (puStack_b0 != &uStack_a8 && puStack_b0 != (undefined8 *)0x0) {
    _free(puStack_b0[-1]);
  }
  return param_3;
}



/* Entry: 1094bb884; end: 1094be11f;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1094bb884(long param_1,uint *param_2,uint *param_3,int param_4,ulong *param_5)

{
  int *piVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint *puVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  int iVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  int iVar35;
  undefined1 auVar34 [16];
  int iVar36;
  int iVar37;
  undefined8 uVar38;
  undefined4 *puStack_f90;
  long *plStack_ea8;
  undefined8 uStack_e40;
  ulong uStack_e38;
  ulong uStack_e30;
  ulong uStack_e28;
  ulong uStack_e20;
  ulong uStack_e18;
  ulong uStack_e10;
  ulong uStack_e08;
  ulong uStack_e00;
  undefined8 *puStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  ulong uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 *puStack_da0;
  undefined8 *puStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  ulong uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  long lStack_d48;
  undefined8 *puStack_d40;
  undefined8 *puStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  long alStack_d20 [3];
  uint uStack_d08;
  int iStack_d04;
  undefined4 uStack_d00;
  undefined4 uStack_cfc;
  undefined4 uStack_cf8;
  undefined8 uStack_cf4;
  undefined8 uStack_cec;
  undefined8 uStack_ce4;
  undefined4 uStack_cdc;
  undefined4 uStack_cd8;
  undefined4 uStack_cd4;
  ulong uStack_cd0;
  undefined4 *puStack_cc8;
  ulong *puStack_cc0;
  ulong auStack_cb8 [2];
  uint uStack_ca8;
  int iStack_ca4;
  undefined4 uStack_ca0;
  undefined4 uStack_c9c;
  undefined4 uStack_c98;
  undefined8 uStack_c94;
  undefined8 uStack_c8c;
  undefined8 uStack_c84;
  undefined4 uStack_c7c;
  undefined4 uStack_c78;
  undefined4 uStack_c74;
  long lStack_c70;
  undefined4 *puStack_c68;
  undefined8 *puStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  uint uStack_c48;
  undefined8 uStack_c44;
  undefined8 uStack_c3c;
  undefined8 uStack_c34;
  undefined8 uStack_c2c;
  undefined8 uStack_c24;
  undefined4 uStack_c1c;
  undefined4 uStack_c18;
  undefined4 uStack_c14;
  ulong uStack_c10;
  long lStack_c08;
  ulong *puStack_c00;
  ulong auStack_bf8 [2];
  uint uStack_be8;
  uint uStack_be0;
  int iStack_bdc;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  long lStack_ba8;
  long lStack_ba0;
  undefined1 *puStack_b98;
  undefined1 auStack_b90 [16];
  uint uStack_b80;
  int iStack_b7c;
  undefined4 uStack_b78;
  undefined4 uStack_b74;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  undefined4 uStack_b68;
  undefined4 uStack_b64;
  undefined4 uStack_b60;
  undefined4 uStack_b5c;
  undefined4 uStack_b58;
  undefined4 uStack_b54;
  undefined4 uStack_b50;
  undefined4 uStack_b4c;
  long lStack_b48;
  ulong uStack_b40;
  undefined8 *puStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  int iStack_b08;
  int iStack_b04;
  uint uStack_b00;
  undefined8 uStack_afc;
  undefined4 uStack_af4;
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  undefined4 uStack_ae8;
  undefined4 uStack_ae4;
  undefined4 uStack_ae0;
  undefined4 uStack_adc;
  undefined4 uStack_ad8;
  undefined4 uStack_ad4;
  undefined4 uStack_ad0;
  undefined4 uStack_acc;
  long lStack_ac8;
  long lStack_ac0;
  undefined8 *puStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  uint uStack_aa0;
  undefined8 uStack_a9c;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  undefined4 uStack_a88;
  undefined4 uStack_a84;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  undefined4 uStack_a78;
  undefined4 uStack_a74;
  undefined4 uStack_a70;
  undefined4 uStack_a6c;
  long lStack_a68;
  long lStack_a60;
  undefined8 *puStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  uint *puStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  long lStack_a08;
  uint **ppuStack_a00;
  undefined8 *puStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_8e0;
  uint *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  ulong uStack_8b8;
  ulong uStack_8b0;
  ulong uStack_8a8;
  uint **ppuStack_8a0;
  ulong *puStack_898;
  ulong uStack_890;
  ulong uStack_888;
  undefined8 uStack_780;
  uint *puStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  long lStack_748;
  uint **ppuStack_740;
  undefined8 *puStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_620;
  undefined4 auStack_618 [2];
  undefined8 *puStack_610;
  undefined8 uStack_608;
  undefined4 uStack_600;
  int iStack_5fc;
  undefined1 auStack_5f8 [8];
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  long lStack_5c8;
  undefined1 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined4 uStack_5a0;
  int iStack_59c;
  undefined1 auStack_598 [8];
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long lStack_568;
  undefined1 *puStack_560;
  undefined8 *puStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  uint uStack_540;
  int iStack_53c;
  undefined1 auStack_538 [8];
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_508;
  undefined1 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined4 uStack_4e0;
  int iStack_4dc;
  undefined8 *puStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4a8;
  undefined8 **ppuStack_4a0;
  undefined8 *puStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  uint *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_448;
  uint **ppuStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  uint *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3e8;
  uint **ppuStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  uint uStack_3b8;
  int iStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  long lStack_380;
  undefined4 *puStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  uint uStack_358;
  int iStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  long lStack_320;
  undefined4 *puStack_318;
  undefined8 *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  uint uStack_2f8;
  int iStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  long lStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  uint uStack_298;
  int iStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  ulong uStack_260;
  undefined8 *puStack_258;
  ulong *puStack_250;
  ulong auStack_248 [2];
  uint uStack_238;
  int iStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  long lStack_200;
  undefined4 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  uint *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  uint **ppuStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_aa0 = 0x42ff0000;
  uStack_a94 = 0;
  uStack_a90 = 0;
  uStack_a9c = 0;
  uStack_a84 = 0;
  uStack_a80 = 0;
  uStack_a8c = 0;
  uStack_a88 = 0;
  uStack_a74 = 0;
  uStack_a7c = 0;
  uStack_a78 = 0;
  puStack_778 = &uStack_aa0;
  lStack_a60 = (long)&uStack_a9c + 4;
  lStack_a68 = 0;
  uStack_a70 = 0;
  uStack_a6c = 0;
  uStack_a48 = 0;
  uStack_a50 = 0;
  uStack_b00 = 0x42ff0000;
  lStack_ac0 = (long)&uStack_afc + 4;
  uStack_af4 = 0;
  uStack_af0 = 0;
  uStack_afc = 0;
  uStack_ae4 = 0;
  uStack_ae0 = 0;
  uStack_aec = 0;
  uStack_ae8 = 0;
  uStack_ad4 = 0;
  uStack_adc = 0;
  uStack_ad8 = 0;
  lStack_ac8 = 0;
  uStack_ad0 = 0;
  uStack_acc = 0;
  uStack_aa8 = 0;
  uStack_ab0 = 0;
  uStack_1c8 = 0;
  uStack_1d8._0_4_ = 0x1010000;
  uStack_780._0_4_ = 0x2010000;
  uStack_770 = 0;
  uStack_8d0 = 0;
  uStack_8e0._0_4_ = 0x1010000;
  uStack_a40 = *(undefined8 *)(param_1 + 0x88);
  uStack_e38 = 0;
  uStack_e40 = 0;
  uStack_e28 = 0;
  uStack_e30 = 0;
  puStack_ab8 = &uStack_ab0;
  puStack_a58 = &uStack_a50;
  puStack_8d8 = (uint *)(param_1 + 0x180);
  puStack_1d0 = param_2;
  FUN_109b1e030(&uStack_1d8,&uStack_780,&uStack_8e0,&uStack_a40,0x12,1,&uStack_e40);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  uStack_1c8 = 0;
  uStack_1d8 = (long *)CONCAT44(uStack_1d8._4_4_,0x1010000);
  uStack_780 = CONCAT44(uStack_780._4_4_,0x2010000);
  uStack_770 = 0;
  uStack_8d0 = 0;
  uStack_8e0._0_4_ = 0x1010000;
  uStack_a40 = *(undefined8 *)(param_1 + 0x88);
  uStack_e38 = 0;
  uStack_e40 = 0;
  uStack_e28 = 0;
  uStack_e30 = 0;
  puStack_8d8 = (uint *)(param_1 + 0x180);
  puStack_778 = &uStack_b00;
  puStack_1d0 = param_3;
  FUN_109b1e030(&uStack_1d8,&uStack_780,&uStack_8e0,&uStack_a40,0x12,0,&uStack_e40);
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  uVar38 = NEON_rev64(*(undefined8 *)param_5[8],4);
  uVar32 = *(undefined8 *)(param_1 + 0x80);
  uStack_b10 = NEON_smax(uVar32,0,4);
  iVar35 = (int)((ulong)uVar32 >> 0x20);
  uVar38 = NEON_smin(uVar38,CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) + iVar35,
                                     (int)*(undefined8 *)(param_1 + 0x88) + (int)uVar32),4);
  iStack_b08 = (int)uVar38 - (int)uStack_b10;
  iStack_b04 = (int)((ulong)uVar38 >> 0x20) - (int)((ulong)uStack_b10 >> 0x20);
  if ((iStack_b08 < 1) || (iStack_b04 < 1)) {
    uStack_b10 = 0;
    iStack_b08 = 0;
    iStack_b04 = 0;
  }
  iVar31 = (int)uStack_b10 - (int)uVar32;
  iVar35 = (int)((ulong)uStack_b10 >> 0x20) - iVar35;
  iVar36 = iStack_b08 + iVar31;
  iVar37 = iStack_b04 + iVar35;
  uStack_b20 = NEON_smin(CONCAT44(iVar37,iVar36),CONCAT44(iVar35,iVar31),4);
  uStack_b18 = CONCAT44((iVar35 - iVar37) + (iVar37 - iVar35) * 2 * (uint)(iVar35 < iVar37),
                        (iVar31 - iVar36) + (iVar36 - iVar31) * 2 * (uint)(iVar31 < iVar36));
  FUN_109a852c8(&uStack_e40,&uStack_aa0,&uStack_b20);
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  FUN_109a852c8(&uStack_1d8,param_5,&uStack_b10);
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  uStack_8e0 = CONCAT44(uStack_8e0._4_4_,0xc2010000);
  uStack_8d0 = 0;
  puStack_8d8 = (uint *)&uStack_1d8;
  FUN_109a852c8(&uStack_780,&uStack_b00,&uStack_b20);
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  uStack_a30 = 0;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,0x1010000);
  puVar15 = (uint *)&uStack_e40;
  puVar17 = &uStack_8e0;
  puStack_a38 = (uint *)&uStack_780;
  FUN_109a4813c(puVar15,puVar17,&uStack_a40);
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  iVar35 = (int)puVar17;
  if (lStack_748 != 0) {
    piVar1 = (int *)(lStack_748 + 0x14);
    do {
      iVar31 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar31 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar31 + -1 == 0) {
      puVar15 = (uint *)&uStack_780;
      func_0x000109a848d4(puVar15);
      uStack_c24 = uVar9;
      uStack_c2c = uVar8;
      uStack_c34 = uVar7;
      uStack_c3c = uVar6;
      uStack_c44 = uVar33;
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar33 = uStack_c44;
      uVar6 = uStack_c3c;
      uStack_c44._4_4_ = uVar10;
      uStack_c3c._4_4_ = uVar11;
    }
  }
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  lStack_748 = 0;
  uStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  uStack_760 = 0;
  if (0 < uStack_780._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)((long)ppuStack_740 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_780._4_4_);
  }
  uVar33 = uStack_c44;
  uVar6 = uStack_c3c;
  uVar7 = uStack_c34;
  uVar8 = uStack_c2c;
  uVar9 = uStack_c24;
  if (puStack_738 != &uStack_730 && puStack_738 != (undefined8 *)0x0) {
    puVar15 = (uint *)puStack_738[-1];
    uStack_c44._4_4_ = uVar10;
    uStack_c3c._4_4_ = uVar11;
    uStack_c34._4_4_ = uVar12;
    uStack_c2c._4_4_ = uVar13;
    uStack_c24._4_4_ = uVar14;
    _free(puVar15);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar12 = uStack_c34._4_4_;
    uVar13 = uStack_c2c._4_4_;
    uVar14 = uStack_c24._4_4_;
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar33 = uStack_c34;
  uVar6 = uStack_c2c;
  uVar7 = uStack_c24;
  if (lStack_1a0 != 0) {
    piVar1 = (int *)(lStack_1a0 + 0x14);
    do {
      iVar31 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar31 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar31 + -1 == 0) {
      puVar15 = (uint *)&uStack_1d8;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      func_0x000109a848d4(puVar15);
      uVar7 = uStack_c24;
      uVar6 = uStack_c2c;
      uVar33 = uStack_c34;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar14 = uStack_c24._4_4_;
    }
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar7;
  uStack_c2c = uVar6;
  uStack_c34 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  lStack_1a0 = 0;
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  if (0 < uStack_1d8._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)((long)ppuStack_198 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_1d8._4_4_);
  }
  uVar33 = uStack_c44;
  uVar6 = uStack_c3c;
  uVar7 = uStack_c34;
  uVar8 = uStack_c2c;
  uVar9 = uStack_c24;
  if (puStack_190 != &uStack_188 && puStack_190 != (undefined8 *)0x0) {
    puVar15 = (uint *)puStack_190[-1];
    uStack_c44._4_4_ = uVar10;
    uStack_c3c._4_4_ = uVar11;
    uStack_c34._4_4_ = uVar12;
    uStack_c2c._4_4_ = uVar13;
    uStack_c24._4_4_ = uVar14;
    _free(puVar15);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar12 = uStack_c34._4_4_;
    uVar13 = uStack_c2c._4_4_;
    uVar14 = uStack_c24._4_4_;
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar33 = uStack_c34;
  uVar6 = uStack_c2c;
  uVar7 = uStack_c24;
  if (uStack_e08 != 0) {
    piVar1 = (int *)(uStack_e08 + 0x14);
    do {
      iVar31 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar31 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar31 + -1 == 0) {
      puVar15 = (uint *)&uStack_e40;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      func_0x000109a848d4(puVar15);
      uVar7 = uStack_c24;
      uVar6 = uStack_c2c;
      uVar33 = uStack_c34;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar14 = uStack_c24._4_4_;
    }
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar7;
  uStack_c2c = uVar6;
  uStack_c34 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uStack_e08 = 0;
  uStack_e28 = 0;
  uStack_e30 = 0;
  uStack_e18 = 0;
  uStack_e20 = 0;
  if (0 < uStack_e40._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_e00 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_e40._4_4_);
  }
  uVar33 = uStack_c44;
  uVar6 = uStack_c3c;
  uVar7 = uStack_c34;
  uVar8 = uStack_c2c;
  uVar9 = uStack_c24;
  if (puStack_df8 != &uStack_df0 && puStack_df8 != (undefined8 *)0x0) {
    puVar15 = (uint *)puStack_df8[-1];
    uStack_c44._4_4_ = uVar10;
    uStack_c3c._4_4_ = uVar11;
    uStack_c34._4_4_ = uVar12;
    uStack_c2c._4_4_ = uVar13;
    uStack_c24._4_4_ = uVar14;
    _free(puVar15);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar12 = uStack_c34._4_4_;
    uVar13 = uStack_c2c._4_4_;
    uVar14 = uStack_c24._4_4_;
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar33 = uStack_c44;
  uVar6 = uStack_c3c;
  uVar7 = uStack_c34;
  uVar8 = uStack_c2c;
  uVar9 = uStack_c24;
  if (param_4 == 0) goto LAB_1094bdc00;
  uStack_b40 = (ulong)&uStack_b80 | 8;
  uStack_1d8 = *(long **)param_5[8];
  uStack_e38 = 0;
  uStack_e40 = 0;
  uStack_e28 = 0;
  uStack_e30 = 0;
  uStack_b80 = 0x42ff0000;
  uStack_b74 = 0;
  uStack_b70 = 0;
  iStack_b7c = 0;
  uStack_b78 = 0;
  uStack_b64 = 0;
  uStack_b60 = 0;
  uStack_b6c = 0;
  uStack_b68 = 0;
  uStack_b54 = 0;
  uStack_b5c = 0;
  uStack_b58 = 0;
  lStack_b48 = 0;
  uStack_b50 = 0;
  uStack_b4c = 0;
  uStack_b28 = 0;
  uStack_b30 = 0;
  puStack_b38 = &uStack_b30;
  uStack_c44._4_4_ = uVar10;
  uStack_c3c._4_4_ = uVar11;
  uStack_c34._4_4_ = uVar12;
  uStack_c2c._4_4_ = uVar13;
  uStack_c24._4_4_ = uVar14;
  FUN_109a83fd0(&uStack_b80,2,&uStack_1d8,0);
  FUN_109a48880(&uStack_b80,&uStack_e40);
  FUN_109a852c8(&uStack_e40,&uStack_b00,&uStack_b20);
  FUN_109a852c8(&uStack_1d8,&uStack_b80,&uStack_b10);
  uStack_780 = CONCAT44(uStack_780._4_4_,0xc2010000);
  uStack_770 = 0;
  puStack_778 = (uint *)&uStack_1d8;
  FUN_109a479a0(&uStack_e40,&uStack_780);
  if (lStack_1a0 != 0) {
    piVar1 = (int *)(lStack_1a0 + 0x14);
    do {
      iVar35 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar35 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar35 + -1 == 0) {
      func_0x000109a848d4(&uStack_1d8);
    }
  }
  lStack_1a0 = 0;
  uStack_1c0 = 0;
  uStack_1c8 = 0;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  if (0 < uStack_1d8._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)((long)ppuStack_198 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_1d8._4_4_);
  }
  if (puStack_190 != &uStack_188 && puStack_190 != (undefined8 *)0x0) {
    _free(puStack_190[-1]);
  }
  if (uStack_e08 != 0) {
    piVar1 = (int *)(uStack_e08 + 0x14);
    do {
      iVar35 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar35 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar35 + -1 == 0) {
      func_0x000109a848d4(&uStack_e40);
    }
  }
  uStack_e08 = 0;
  uStack_e28 = 0;
  uStack_e30 = 0;
  uStack_e18 = 0;
  uStack_e20 = 0;
  if (0 < uStack_e40._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_e00 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_e40._4_4_);
  }
  if (puStack_df8 != &uStack_df0 && puStack_df8 != (undefined8 *)0x0) {
    _free(puStack_df8[-1]);
  }
  uStack_e40 = 0x1400000014;
  uStack_1d8 = (long *)0xffffffffffffffff;
  FUN_109b32bf8(&uStack_be0,0,&uStack_e40,&uStack_1d8);
  uStack_1c8 = 0;
  uStack_1d8 = (long *)CONCAT44(uStack_1d8._4_4_,0x1010000);
  puStack_778 = &uStack_b80;
  uStack_780 = CONCAT44(uStack_780._4_4_,0x2010000);
  uStack_770 = 0;
  uStack_8d0 = 0;
  uStack_8e0 = CONCAT44(uStack_8e0._4_4_,0x1010000);
  uStack_e38 = 0x7fefffffffffffff;
  uStack_e40 = 0x7fefffffffffffff;
  uStack_e28 = 0x7fefffffffffffff;
  uStack_e30 = 0x7fefffffffffffff;
  uStack_a40 = 0xffffffffffffffff;
  puStack_8d8 = &uStack_be0;
  puStack_1d0 = puStack_778;
  FUN_109b32fd4(0,&uStack_1d8,&uStack_780,&uStack_8e0,&uStack_a40,1,0,&uStack_e40);
  uStack_e00 = (ulong)&uStack_e40 | 8;
  uStack_e40 = *param_5;
  uStack_e38 = param_5[1];
  iVar35 = *(int *)((long)param_5 + 4);
  uStack_e28 = param_5[3];
  uStack_e30 = param_5[2];
  uStack_e20 = param_5[4];
  uStack_e18 = param_5[5];
  uStack_e08 = param_5[7];
  uStack_e10 = param_5[6];
  puStack_df8 = &uStack_df0;
  uStack_df0 = 0;
  uStack_de8 = 0;
  if (param_5[7] != 0) {
    piVar1 = (int *)(param_5[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar35 = *(int *)((long)param_5 + 4);
  }
  if (iVar35 < 3) {
    uStack_df0 = *(undefined8 *)param_5[9];
    uStack_de8 = ((undefined8 *)param_5[9])[1];
  }
  else {
    uStack_e40 = uStack_e40 & 0xffffffff;
    func_0x000109a84868(&uStack_e40,param_5);
  }
  uStack_de0 = *(ulong *)(param_1 + 0x20);
  uStack_dd8 = *(undefined8 *)(param_1 + 0x28);
  uStack_dc8 = *(undefined8 *)(param_1 + 0x38);
  uStack_dd0 = *(undefined8 *)(param_1 + 0x30);
  puStack_da0 = &uStack_dd8;
  iVar35 = *(int *)(param_1 + 0x24);
  uStack_db8 = *(undefined8 *)(param_1 + 0x48);
  uStack_dc0 = *(undefined8 *)(param_1 + 0x40);
  uStack_db0 = *(undefined8 *)(param_1 + 0x50);
  uStack_da8 = *(undefined8 *)(param_1 + 0x58);
  puStack_d98 = &uStack_d90;
  uStack_d88 = 0;
  uStack_d90 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x58) + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar35 = *(int *)(param_1 + 0x24);
  }
  if (iVar35 < 3) {
    uStack_d90 = **(undefined8 **)(param_1 + 0x68);
    uStack_d88 = (*(undefined8 **)(param_1 + 0x68))[1];
  }
  else {
    uStack_de0 = uStack_de0 & 0xffffffff;
    func_0x000109a84868(&uStack_de0,param_1 + 0x20);
  }
  uStack_d80 = CONCAT44(iStack_b7c,uStack_b80);
  uStack_d78 = CONCAT44(uStack_b74,uStack_b78);
  puStack_d40 = &uStack_d78;
  uStack_d68 = CONCAT44(uStack_b64,uStack_b68);
  uStack_d70 = CONCAT44(uStack_b6c,uStack_b70);
  uStack_d58 = CONCAT44(uStack_b54,uStack_b58);
  uStack_d60 = CONCAT44(uStack_b5c,uStack_b60);
  uStack_d50 = CONCAT44(uStack_b4c,uStack_b50);
  lStack_d48 = lStack_b48;
  puStack_d38 = &uStack_d30;
  uStack_d28 = 0;
  uStack_d30 = 0;
  if (lStack_b48 != 0) {
    piVar1 = (int *)(lStack_b48 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iStack_b7c < 3) {
    uStack_d30 = *puStack_b38;
    uStack_d28 = puStack_b38[1];
  }
  else {
    uStack_d80 = (ulong)uStack_b80;
    func_0x000109a84868(&uStack_d80,&uStack_b80);
  }
  alStack_d20[2] = 0;
  puStack_f90 = &uStack_cf8;
  alStack_d20[1] = 0;
  alStack_d20[0] = 0;
  uStack_d08 = 0x42ff0000;
  plStack_ea8 = alStack_d20;
  puStack_cc8 = &uStack_d00;
  uStack_cfc = 0;
  uStack_cf8 = 0;
  iStack_d04 = 0;
  uStack_d00 = 0;
  uStack_cec = 0;
  uStack_cf4 = 0;
  uStack_cdc = 0;
  uStack_ce4 = 0;
  uStack_cd0 = 0;
  uStack_cd8 = 0;
  uStack_cd4 = 0;
  puStack_cc0 = auStack_cb8;
  auStack_cb8[1] = 0;
  auStack_cb8[0] = 0;
  uStack_ca8 = 0x42ff0000;
  puStack_c68 = &uStack_ca0;
  uStack_c9c = 0;
  uStack_c98 = 0;
  iStack_ca4 = 0;
  uStack_ca0 = 0;
  uStack_c8c = 0;
  uStack_c94 = 0;
  uStack_c7c = 0;
  uStack_c84 = 0;
  lStack_c70 = 0;
  uStack_c78 = 0;
  uStack_c74 = 0;
  puStack_c60 = &uStack_c58;
  uStack_c50 = 0;
  uStack_c58 = 0;
  uStack_c48 = 0x42ff0000;
  lStack_c08 = (long)&uStack_c44 + 4;
  uStack_c10 = 0;
  uStack_c14 = 0;
  uStack_c2c = 0;
  uStack_c2c._4_4_ = 0;
  uStack_c34 = 0;
  uStack_c34._4_4_ = 0;
  uStack_c1c = 0;
  uStack_c18 = 0;
  uStack_c24 = 0;
  uStack_c24._4_4_ = 0;
  uStack_c3c = 0;
  uStack_c3c._4_4_ = 0;
  uStack_c44 = 0;
  uStack_c44._4_4_ = 0;
  puStack_c00 = auStack_bf8;
  auStack_bf8[1] = 0;
  auStack_bf8[0] = 0;
  uStack_be8 = 4;
  uStack_238 = 0x42ff0000;
  puStack_1f8 = &uStack_230;
  uStack_22c = 0;
  uStack_228 = 0;
  iStack_234 = 0;
  uStack_230 = 0;
  uStack_21c = 0;
  uStack_218 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  uStack_20c = 0;
  uStack_214 = 0;
  uStack_210 = 0;
  lStack_200 = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_1d8._0_4_ = 0x2010000;
  uStack_1c8 = 0;
  puStack_1f0 = &uStack_1e8;
  puStack_1d0 = &uStack_238;
  FUN_109a41858(0x3ff0000000000000,0,&uStack_d80,&uStack_1d8,5);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  uStack_1c8 = 0;
  uStack_1d8._0_4_ = 0x1010000;
  uStack_780 = CONCAT44(uStack_780._4_4_,0x2010000);
  uStack_770 = 0;
  uVar10 = uStack_c44._4_4_;
  uStack_c44 = uVar33;
  uVar11 = uStack_c3c._4_4_;
  uStack_c3c = uVar6;
  uVar12 = uStack_c34._4_4_;
  uStack_c34 = uVar7;
  uVar13 = uStack_c2c._4_4_;
  uStack_c2c = uVar8;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar9;
  puStack_778 = &uStack_238;
  puStack_1d0 = &uStack_238;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  FUN_109ac9fc8(&uStack_1d8,&uStack_780,8,0);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  uStack_298 = 0x42ff0000;
  uStack_28c = 0;
  uStack_288 = 0;
  iStack_294 = 0;
  uStack_290 = 0;
  puStack_1d0 = &uStack_298;
  puStack_258 = (undefined8 *)&uStack_290;
  uStack_27c = 0;
  uStack_278 = 0;
  uStack_284 = 0;
  uStack_280 = 0;
  uStack_26c = 0;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_260 = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  auStack_248[1] = 0;
  auStack_248[0] = 0;
  uStack_2f8 = 0x42ff0000;
  puStack_2b8 = (undefined8 *)&uStack_2f0;
  uStack_2ec = 0;
  uStack_2e8 = 0;
  iStack_2f4 = 0;
  uStack_2f0 = 0;
  uStack_2dc = 0;
  uStack_2d8 = 0;
  uStack_2e4 = 0;
  uStack_2e0 = 0;
  uStack_2cc = 0;
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  lStack_2c0 = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  uStack_1d8._0_4_ = 0x2010000;
  uStack_1c8 = 0;
  uVar10 = uStack_c44._4_4_;
  uStack_c44 = uVar33;
  uVar11 = uStack_c3c._4_4_;
  uStack_c3c = uVar6;
  uVar12 = uStack_c34._4_4_;
  uStack_c34 = uVar7;
  uVar13 = uStack_c2c._4_4_;
  uStack_c2c = uVar8;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar9;
  puStack_2b0 = &uStack_2a8;
  puStack_250 = auStack_248;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  FUN_109a41858(0x3ff0000000000000,0,&uStack_e40,&uStack_1d8,5);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  uStack_1d8 = (long *)CONCAT44(uStack_1d8._4_4_,0x2010000);
  uStack_1c8 = 0;
  uVar10 = uStack_c44._4_4_;
  uStack_c44 = uVar33;
  uVar11 = uStack_c3c._4_4_;
  uStack_c3c = uVar6;
  uVar12 = uStack_c34._4_4_;
  uStack_c34 = uVar7;
  uVar13 = uStack_c2c._4_4_;
  uStack_c2c = uVar8;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar9;
  puStack_1d0 = &uStack_2f8;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  FUN_109a41858(0x3ff0000000000000,0,&uStack_de0,&uStack_1d8,5);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  auVar34 = NEON_fmov(0x3ff0000000000000,8);
  if (0 < (int)uStack_be8) {
    iVar35 = 0;
    puVar20 = (undefined8 *)((ulong)&uStack_8e0 | 4);
    puVar21 = (undefined8 *)((ulong)&uStack_a40 | 4);
    puVar27 = (undefined8 *)((ulong)&uStack_358 | 4);
    puVar22 = (undefined8 *)((ulong)&uStack_3b8 | 4);
    puVar28 = (undefined8 *)((ulong)&uStack_420 | 4);
    puVar23 = (undefined8 *)((ulong)&uStack_480 | 4);
    puVar29 = (undefined8 *)((ulong)&uStack_4e0 | 4);
    puVar24 = (undefined8 *)((ulong)&uStack_540 | 4);
    puVar30 = (undefined8 *)((ulong)&uStack_5a0 | 4);
    puVar25 = (undefined8 *)((ulong)&uStack_1d8 | 4);
    puVar26 = (undefined8 *)((ulong)&uStack_600 | 4);
    puVar17 = (undefined8 *)((ulong)&uStack_780 | 4);
    do {
      uStack_c24 = uVar9;
      uStack_c2c = uVar8;
      uStack_c34 = uVar7;
      uStack_c3c = uVar6;
      uStack_c44 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uStack_8e0 = CONCAT44(uStack_8e0._4_4_,0x42ff0000);
      puVar20[1] = 0;
      *puVar20 = 0;
      puVar20[3] = 0;
      puVar20[2] = 0;
      puVar20[5] = 0;
      puVar20[4] = 0;
      *(undefined8 *)((long)puVar20 + 0x34) = 0;
      *(undefined8 *)((long)puVar20 + 0x2c) = 0;
      uStack_890 = 0;
      uStack_888 = 0;
      uStack_a40 = CONCAT44(uStack_a40._4_4_,0x42ff0000);
      puVar21[1] = 0;
      *puVar21 = 0;
      puVar21[3] = 0;
      puVar21[2] = 0;
      puVar21[5] = 0;
      puVar21[4] = 0;
      *(undefined8 *)((long)puVar21 + 0x34) = 0;
      *(undefined8 *)((long)puVar21 + 0x2c) = 0;
      uStack_9f0 = 0;
      uStack_9e8 = 0;
      uStack_1c8 = 0;
      uStack_1d8._0_4_ = 0x1010000;
      puStack_1d0 = &uStack_298;
      uStack_780._0_4_ = 0x2010000;
      uStack_770 = 0;
      uStack_358 = 0;
      iStack_354 = 0;
      ppuStack_a00 = &puStack_a38;
      puStack_9f8 = &uStack_9f0;
      ppuStack_8a0 = &puStack_8d8;
      puStack_898 = &uStack_890;
      puStack_778 = (uint *)&uStack_8e0;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_109b3a7f4(&uStack_1d8,&uStack_780,&uStack_358,4);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uStack_1c8 = 0;
      uStack_1d8 = (long *)CONCAT44(uStack_1d8._4_4_,0x1010000);
      uStack_780 = CONCAT44(uStack_780._4_4_,0x2010000);
      uStack_770 = 0;
      uVar32 = NEON_rev64(*puStack_258,4);
      uStack_358 = (uint)uVar32;
      iStack_354 = (int)((ulong)uVar32 >> 0x20);
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      puStack_778 = (uint *)&uStack_a40;
      puStack_1d0 = (uint *)&uStack_8e0;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_109b3ddf8(&uStack_1d8,&uStack_780,&uStack_358,4);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_109a7cd1c(&uStack_1d8,&uStack_298,&uStack_a40);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uStack_358 = 0x42ff0000;
      *(undefined8 *)((long)puVar27 + 0x34) = 0;
      *(undefined8 *)((long)puVar27 + 0x2c) = 0;
      puVar27[3] = 0;
      puVar27[2] = 0;
      puVar27[5] = 0;
      puVar27[4] = 0;
      puVar27[1] = 0;
      *puVar27 = 0;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      puStack_318 = &uStack_350;
      puStack_310 = &uStack_308;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      (**(code **)(*uStack_1d8 + 0x18))(uStack_1d8,&uStack_1d8,&uStack_358,0xffffffff);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_10918eb6c(&uStack_1d8);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      if (uStack_8a8 != 0) {
        piVar1 = (int *)(uStack_8a8 + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (uStack_260 != 0) {
        piVar1 = (int *)(uStack_260 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar10 = uStack_c44._4_4_;
          uStack_c44 = uVar33;
          uVar11 = uStack_c3c._4_4_;
          uStack_c3c = uVar6;
          uVar12 = uStack_c34._4_4_;
          uStack_c34 = uVar7;
          uVar13 = uStack_c2c._4_4_;
          uStack_c2c = uVar8;
          uVar14 = uStack_c24._4_4_;
          uStack_c24 = uVar9;
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_298);
          uVar9 = uStack_c24;
          uVar8 = uStack_c2c;
          uVar7 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar33 = uStack_c44;
          uVar6 = uStack_c3c;
          uStack_c44._4_4_ = uVar10;
          uStack_c3c._4_4_ = uVar11;
        }
      }
      uStack_c24 = uVar9;
      uStack_c2c = uVar8;
      uStack_c34 = uVar7;
      uStack_c3c = uVar6;
      uStack_c44 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uStack_260 = 0;
      uStack_280 = 0;
      uStack_27c = 0;
      uStack_288 = 0;
      uStack_284 = 0;
      uStack_270 = 0;
      uStack_26c = 0;
      uStack_278 = 0;
      uStack_274 = 0;
      uStack_c2c._4_4_ = uVar13;
      uStack_c24._4_4_ = uVar14;
      if (iStack_294 < 1) {
LAB_1094bc500:
        uStack_298 = (uint)uStack_8e0;
        if (2 < uStack_8e0._4_4_) goto LAB_1094bc534;
        iStack_294 = uStack_8e0._4_4_;
        uStack_290 = SUB84(puStack_8d8,0);
        uStack_28c = (undefined4)((ulong)puStack_8d8 >> 0x20);
        *puStack_250 = *puStack_898;
        puStack_250[1] = puStack_898[1];
        uVar33 = uStack_c2c;
        uVar6 = uStack_c24;
      }
      else {
        lVar16 = 0;
        do {
          *(undefined4 *)((long)puStack_258 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iStack_294);
        if (iStack_294 < 3) goto LAB_1094bc500;
LAB_1094bc534:
        uStack_298 = (uint)uStack_8e0;
        uVar33 = uStack_c44;
        uStack_c44._4_4_ = uVar10;
        uVar6 = uStack_c3c;
        uStack_c3c._4_4_ = uVar11;
        uVar7 = uStack_c34;
        uStack_c34._4_4_ = uVar12;
        uVar8 = uStack_c2c;
        uVar9 = uStack_c24;
        func_0x000109a84868(&uStack_298,&uStack_8e0);
        uVar6 = uStack_c24;
        uVar33 = uStack_c2c;
        uVar12 = uStack_c34._4_4_;
        uVar11 = uStack_c3c._4_4_;
        uVar10 = uStack_c44._4_4_;
      }
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar6;
      uStack_c2c = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uStack_280 = (undefined4)uStack_8c8;
      uStack_27c = (undefined4)(uStack_8c8 >> 0x20);
      uStack_288 = (undefined4)uStack_8d0;
      uStack_284 = (undefined4)(uStack_8d0 >> 0x20);
      uStack_270 = (undefined4)uStack_8b8;
      uStack_26c = (undefined4)(uStack_8b8 >> 0x20);
      uStack_278 = (undefined4)uStack_8c0;
      uStack_274 = (undefined4)(uStack_8c0 >> 0x20);
      uStack_260 = uStack_8a8;
      uStack_268 = (undefined4)uStack_8b0;
      uStack_264 = (undefined4)(uStack_8b0 >> 0x20);
      uVar33 = uStack_c34;
      uVar6 = uStack_c2c;
      uVar7 = uStack_c24;
      if (uStack_8a8 != 0) {
        piVar1 = (int *)(uStack_8a8 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_8e0);
          uVar7 = uStack_c24;
          uVar6 = uStack_c2c;
          uVar33 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar12 = uStack_c34._4_4_;
          uVar13 = uStack_c2c._4_4_;
          uVar14 = uStack_c24._4_4_;
        }
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar7;
      uStack_c2c = uVar6;
      uStack_c34 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uStack_8a8 = 0;
      uStack_8c8 = 0;
      uStack_8d0 = 0;
      uStack_8b8 = 0;
      uStack_8c0 = 0;
      if (0 < uStack_8e0._4_4_) {
        lVar16 = 0;
        do {
          *(undefined4 *)((long)ppuStack_8a0 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < uStack_8e0._4_4_);
      }
      uVar33 = uStack_c34;
      uVar6 = uStack_c2c;
      uVar7 = uStack_c24;
      if (lStack_a08 != 0) {
        piVar1 = (int *)(lStack_a08 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_a40);
          uVar7 = uStack_c24;
          uVar6 = uStack_c2c;
          uVar33 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar12 = uStack_c34._4_4_;
          uVar13 = uStack_c2c._4_4_;
          uVar14 = uStack_c24._4_4_;
        }
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar7;
      uStack_c2c = uVar6;
      uStack_c34 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      lStack_a08 = 0;
      uStack_a28 = 0;
      uStack_a30 = 0;
      uStack_a18 = 0;
      uStack_a20 = 0;
      if (0 < uStack_a40._4_4_) {
        lVar16 = 0;
        do {
          *(undefined4 *)((long)ppuStack_a00 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < uStack_a40._4_4_);
      }
      uStack_3b8 = 0x42ff0000;
      puVar22[1] = 0;
      *puVar22 = 0;
      puVar22[3] = 0;
      puVar22[2] = 0;
      puVar22[5] = 0;
      puVar22[4] = 0;
      *(undefined8 *)((long)puVar22 + 0x34) = 0;
      *(undefined8 *)((long)puVar22 + 0x2c) = 0;
      uStack_420 = CONCAT44(uStack_420._4_4_,0x42ff0000);
      puVar28[1] = 0;
      *puVar28 = 0;
      puVar28[3] = 0;
      puVar28[2] = 0;
      puVar28[5] = 0;
      puVar28[4] = 0;
      *(undefined8 *)((long)puVar28 + 0x34) = 0;
      *(undefined8 *)((long)puVar28 + 0x2c) = 0;
      uStack_3d0 = 0;
      uStack_3c8 = 0;
      uStack_1c8 = 0;
      uStack_1d8._0_4_ = 0x1010000;
      puStack_1d0 = &uStack_2f8;
      uStack_780._0_4_ = 0x2010000;
      uStack_770 = 0;
      uStack_480 = 0;
      puStack_778 = &uStack_3b8;
      ppuStack_3e0 = &puStack_418;
      puStack_3d8 = &uStack_3d0;
      puStack_378 = &uStack_3b0;
      puStack_370 = &uStack_368;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_109b3a7f4(&uStack_1d8,&uStack_780,&uStack_480,4);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uStack_1c8 = 0;
      uStack_1d8 = (long *)CONCAT44(uStack_1d8._4_4_,0x1010000);
      uStack_780 = CONCAT44(uStack_780._4_4_,0x2010000);
      uStack_770 = 0;
      uStack_480 = NEON_rev64(*puStack_2b8,4);
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      puStack_778 = (uint *)&uStack_420;
      puStack_1d0 = &uStack_3b8;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_109b3ddf8(&uStack_1d8,&uStack_780,&uStack_480,4);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_109a7cd1c(&uStack_1d8,&uStack_2f8,&uStack_420);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uStack_480 = CONCAT44(uStack_480._4_4_,0x42ff0000);
      *(undefined8 *)((long)puVar23 + 0x34) = 0;
      *(undefined8 *)((long)puVar23 + 0x2c) = 0;
      puVar23[3] = 0;
      puVar23[2] = 0;
      puVar23[5] = 0;
      puVar23[4] = 0;
      puVar23[1] = 0;
      *puVar23 = 0;
      uStack_430 = 0;
      uStack_428 = 0;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      ppuStack_440 = &puStack_478;
      puStack_438 = &uStack_430;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      (**(code **)(*uStack_1d8 + 0x18))(uStack_1d8,&uStack_1d8,&uStack_480,0xffffffff);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_10918eb6c(&uStack_1d8);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      if (lStack_380 != 0) {
        piVar1 = (int *)(lStack_380 + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (lStack_2c0 != 0) {
        piVar1 = (int *)(lStack_2c0 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar10 = uStack_c44._4_4_;
          uStack_c44 = uVar33;
          uVar11 = uStack_c3c._4_4_;
          uStack_c3c = uVar6;
          uVar12 = uStack_c34._4_4_;
          uStack_c34 = uVar7;
          uVar13 = uStack_c2c._4_4_;
          uStack_c2c = uVar8;
          uVar14 = uStack_c24._4_4_;
          uStack_c24 = uVar9;
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_2f8);
          uVar9 = uStack_c24;
          uVar8 = uStack_c2c;
          uVar7 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar33 = uStack_c44;
          uVar6 = uStack_c3c;
          uStack_c44._4_4_ = uVar10;
          uStack_c3c._4_4_ = uVar11;
        }
      }
      uStack_c24 = uVar9;
      uStack_c2c = uVar8;
      uStack_c34 = uVar7;
      uStack_c3c = uVar6;
      uStack_c44 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      lStack_2c0 = 0;
      uStack_2e0 = 0;
      uStack_2dc = 0;
      uStack_2e8 = 0;
      uStack_2e4 = 0;
      uStack_2d0 = 0;
      uStack_2cc = 0;
      uStack_2d8 = 0;
      uStack_2d4 = 0;
      uStack_c2c._4_4_ = uVar13;
      uStack_c24._4_4_ = uVar14;
      if (iStack_2f4 < 1) {
LAB_1094bc7dc:
        uStack_2f8 = uStack_3b8;
        if (2 < iStack_3b4) goto LAB_1094bc810;
        iStack_2f4 = iStack_3b4;
        uStack_2f0 = uStack_3b0;
        uStack_2ec = uStack_3ac;
        *puStack_2b0 = *puStack_370;
        puStack_2b0[1] = puStack_370[1];
        uVar33 = uStack_c2c;
        uVar6 = uStack_c24;
      }
      else {
        lVar16 = 0;
        do {
          *(undefined4 *)((long)puStack_2b8 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iStack_2f4);
        if (iStack_2f4 < 3) goto LAB_1094bc7dc;
LAB_1094bc810:
        uStack_2f8 = uStack_3b8;
        uVar33 = uStack_c44;
        uStack_c44._4_4_ = uVar10;
        uVar6 = uStack_c3c;
        uStack_c3c._4_4_ = uVar11;
        uVar7 = uStack_c34;
        uStack_c34._4_4_ = uVar12;
        uVar8 = uStack_c2c;
        uVar9 = uStack_c24;
        func_0x000109a84868(&uStack_2f8,&uStack_3b8);
        uVar6 = uStack_c24;
        uVar33 = uStack_c2c;
        uVar12 = uStack_c34._4_4_;
        uVar11 = uStack_c3c._4_4_;
        uVar10 = uStack_c44._4_4_;
      }
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar6;
      uStack_c2c = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uStack_2e0 = uStack_3a0;
      uStack_2dc = uStack_39c;
      uStack_2e8 = uStack_3a8;
      uStack_2e4 = uStack_3a4;
      uStack_2d0 = uStack_390;
      uStack_2cc = uStack_38c;
      uStack_2d8 = uStack_398;
      uStack_2d4 = uStack_394;
      lStack_2c0 = lStack_380;
      uStack_2c8 = uStack_388;
      uStack_2c4 = uStack_384;
      uVar33 = uStack_c34;
      uVar6 = uStack_c2c;
      uVar7 = uStack_c24;
      if (lStack_380 != 0) {
        piVar1 = (int *)(lStack_380 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_3b8);
          uVar7 = uStack_c24;
          uVar6 = uStack_c2c;
          uVar33 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar12 = uStack_c34._4_4_;
          uVar13 = uStack_c2c._4_4_;
          uVar14 = uStack_c24._4_4_;
        }
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar7;
      uStack_c2c = uVar6;
      uStack_c34 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      lStack_380 = 0;
      uStack_3a0 = 0;
      uStack_39c = 0;
      uStack_3a8 = 0;
      uStack_3a4 = 0;
      uStack_390 = 0;
      uStack_38c = 0;
      uStack_398 = 0;
      uStack_394 = 0;
      if (0 < iStack_3b4) {
        lVar16 = 0;
        do {
          puStack_378[lVar16] = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iStack_3b4);
      }
      uVar33 = uStack_c34;
      uVar6 = uStack_c2c;
      uVar7 = uStack_c24;
      if (lStack_3e8 != 0) {
        piVar1 = (int *)(lStack_3e8 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_420);
          uVar7 = uStack_c24;
          uVar6 = uStack_c2c;
          uVar33 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar12 = uStack_c34._4_4_;
          uVar13 = uStack_c2c._4_4_;
          uVar14 = uStack_c24._4_4_;
        }
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar7;
      uStack_c2c = uVar6;
      uStack_c34 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      lStack_3e8 = 0;
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      if (0 < uStack_420._4_4_) {
        lVar16 = 0;
        do {
          *(undefined4 *)((long)ppuStack_3e0 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < uStack_420._4_4_);
      }
      uStack_770 = 0;
      uStack_780 = CONCAT44(uStack_780._4_4_,0x1010000);
      puStack_778 = &uStack_238;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_109a8239c(&uStack_1d8,0x3ff0000000000000,&uStack_358,&uStack_780);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uStack_4e0 = 0x42ff0000;
      *(undefined8 *)((long)puVar29 + 0x34) = 0;
      *(undefined8 *)((long)puVar29 + 0x2c) = 0;
      puVar29[3] = 0;
      puVar29[2] = 0;
      puVar29[5] = 0;
      puVar29[4] = 0;
      puVar29[1] = 0;
      *puVar29 = 0;
      uStack_490 = 0;
      uStack_488 = 0;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      ppuStack_4a0 = &puStack_4d8;
      puStack_498 = &uStack_490;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      (**(code **)(*uStack_1d8 + 0x18))(uStack_1d8,&uStack_1d8,&uStack_4e0,0xffffffff);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_10918eb6c(&uStack_1d8);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uStack_768 = 0;
      uStack_770 = 0x3ff0000000000000;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uStack_780 = auVar34._0_8_;
      puStack_778 = auVar34._8_8_;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_109a7cf94(&uStack_1d8,&uStack_780,&uStack_238);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uStack_540 = 0x42ff0000;
      *(undefined8 *)((long)puVar24 + 0x34) = 0;
      *(undefined8 *)((long)puVar24 + 0x2c) = 0;
      puVar24[3] = 0;
      puVar24[2] = 0;
      puVar24[5] = 0;
      puVar24[4] = 0;
      puVar24[1] = 0;
      *puVar24 = 0;
      uStack_4f0 = 0;
      uStack_4e8 = 0;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      puStack_500 = auStack_538;
      puStack_4f8 = &uStack_4f0;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      (**(code **)(*uStack_1d8 + 0x18))(uStack_1d8,&uStack_1d8,&uStack_540,0xffffffff);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_10918eb6c(&uStack_1d8);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uStack_770 = 0;
      uStack_780._0_4_ = 0x1010000;
      puStack_778 = &uStack_540;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_109a8239c(&uStack_1d8,0x3ff0000000000000,&uStack_480,&uStack_780);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uStack_5a0 = 0x42ff0000;
      *(undefined8 *)((long)puVar30 + 0x34) = 0;
      *(undefined8 *)((long)puVar30 + 0x2c) = 0;
      puVar30[3] = 0;
      puVar30[2] = 0;
      puVar30[5] = 0;
      puVar30[4] = 0;
      puVar30[1] = 0;
      *puVar30 = 0;
      uStack_550 = 0;
      uStack_548 = 0;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      puStack_560 = auStack_598;
      puStack_558 = &uStack_550;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      (**(code **)(*uStack_1d8 + 0x18))(uStack_1d8,&uStack_1d8,&uStack_5a0,0xffffffff);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_10918eb6c(&uStack_1d8);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_109a7c6f4(&uStack_1d8,&uStack_4e0,&uStack_5a0);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      *(undefined8 *)((long)puVar26 + 0x34) = 0;
      *(undefined8 *)((long)puVar26 + 0x2c) = 0;
      puVar26[3] = 0;
      puVar26[2] = 0;
      puVar26[5] = 0;
      puVar26[4] = 0;
      puVar26[1] = 0;
      *puVar26 = 0;
      uStack_5b0 = 0;
      uStack_5a8 = 0;
      uStack_600 = 0x42ff0015;
      uStack_780 = CONCAT44(uStack_780._4_4_,0x42ff0000);
      *(undefined8 *)((long)puVar17 + 0x34) = 0;
      *(undefined8 *)((long)puVar17 + 0x2c) = 0;
      puVar17[3] = 0;
      puVar17[2] = 0;
      puVar17[5] = 0;
      puVar17[4] = 0;
      puVar17[1] = 0;
      *puVar17 = 0;
      uStack_730 = 0;
      uStack_728 = 0;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      ppuStack_740 = &puStack_778;
      puStack_738 = &uStack_730;
      puStack_5c0 = auStack_5f8;
      puStack_5b8 = &uStack_5b0;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      (**(code **)(*uStack_1d8 + 0x18))(uStack_1d8,&uStack_1d8,&uStack_780,0xffffffff);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_1094c535c(&uStack_600,&uStack_780);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      if (lStack_748 != 0) {
        piVar1 = (int *)(lStack_748 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar10 = uStack_c44._4_4_;
          uStack_c44 = uVar33;
          uVar11 = uStack_c3c._4_4_;
          uStack_c3c = uVar6;
          uVar12 = uStack_c34._4_4_;
          uStack_c34 = uVar7;
          uVar13 = uStack_c2c._4_4_;
          uStack_c2c = uVar8;
          uVar14 = uStack_c24._4_4_;
          uStack_c24 = uVar9;
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_780);
          uVar9 = uStack_c24;
          uVar8 = uStack_c2c;
          uVar7 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar33 = uStack_c44;
          uVar6 = uStack_c3c;
          uStack_c44._4_4_ = uVar10;
          uStack_c3c._4_4_ = uVar11;
        }
      }
      uStack_c24 = uVar9;
      uStack_c2c = uVar8;
      uStack_c34 = uVar7;
      uStack_c3c = uVar6;
      uStack_c44 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      lStack_748 = 0;
      uStack_768 = 0;
      uStack_770 = 0;
      uStack_758 = 0;
      uStack_760 = 0;
      if (0 < uStack_780._4_4_) {
        lVar16 = 0;
        do {
          *(undefined4 *)((long)ppuStack_740 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < uStack_780._4_4_);
      }
      uVar33 = uStack_c2c;
      uVar6 = uStack_c24;
      if (puStack_738 != &uStack_730 && puStack_738 != (undefined8 *)0x0) {
        uVar33 = uStack_c44;
        uStack_c44._4_4_ = uVar10;
        uVar6 = uStack_c3c;
        uStack_c3c._4_4_ = uVar11;
        uVar7 = uStack_c34;
        uStack_c34._4_4_ = uVar12;
        uVar8 = uStack_c2c;
        uStack_c2c._4_4_ = uVar13;
        uVar9 = uStack_c24;
        uStack_c24._4_4_ = uVar14;
        _free(puStack_738[-1]);
        uVar6 = uStack_c24;
        uVar33 = uStack_c2c;
        uVar12 = uStack_c34._4_4_;
        uVar11 = uStack_c3c._4_4_;
        uVar10 = uStack_c44._4_4_;
        uVar13 = uStack_c2c._4_4_;
        uVar14 = uStack_c24._4_4_;
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar6;
      uStack_c2c = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_10918eb6c(&uStack_1d8);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_1094c5270(plStack_ea8,&uStack_600);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uStack_1d8 = (long *)CONCAT44(uStack_1d8._4_4_,0x42ff0000);
      puVar25[1] = 0;
      *puVar25 = 0;
      puVar25[3] = 0;
      puVar25[2] = 0;
      puVar25[5] = 0;
      puVar25[4] = 0;
      *(undefined8 *)((long)puVar25 + 0x34) = 0;
      *(undefined8 *)((long)puVar25 + 0x2c) = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_770 = 0;
      uStack_780 = CONCAT44(uStack_780._4_4_,0x1010000);
      auStack_618[0] = 0x2010000;
      uStack_608 = 0;
      puStack_610 = &uStack_1d8;
      uStack_620 = NEON_rev64(*puStack_258,4);
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      puStack_778 = &uStack_238;
      ppuStack_198 = &puStack_1d0;
      puStack_190 = &uStack_188;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_109b3a7f4(&uStack_780,auStack_618,&uStack_620,4);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      if (lStack_1a0 != 0) {
        piVar1 = (int *)(lStack_1a0 + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (lStack_200 != 0) {
        piVar1 = (int *)(lStack_200 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar10 = uStack_c44._4_4_;
          uStack_c44 = uVar33;
          uVar11 = uStack_c3c._4_4_;
          uStack_c3c = uVar6;
          uVar12 = uStack_c34._4_4_;
          uStack_c34 = uVar7;
          uVar13 = uStack_c2c._4_4_;
          uStack_c2c = uVar8;
          uVar14 = uStack_c24._4_4_;
          uStack_c24 = uVar9;
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_238);
          uVar9 = uStack_c24;
          uVar8 = uStack_c2c;
          uVar7 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar33 = uStack_c44;
          uVar6 = uStack_c3c;
          uStack_c44._4_4_ = uVar10;
          uStack_c3c._4_4_ = uVar11;
        }
      }
      uStack_c24 = uVar9;
      uStack_c2c = uVar8;
      uStack_c34 = uVar7;
      uStack_c3c = uVar6;
      uStack_c44 = uVar33;
      puVar5 = puStack_190;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      lStack_200 = 0;
      uStack_220 = 0;
      uStack_21c = 0;
      uStack_228 = 0;
      uStack_224 = 0;
      uStack_210 = 0;
      uStack_20c = 0;
      uStack_218 = 0;
      uStack_214 = 0;
      uStack_c2c._4_4_ = uVar13;
      uStack_c24._4_4_ = uVar14;
      if (iStack_234 < 1) {
LAB_1094bcc48:
        uStack_238 = (uint)uStack_1d8;
        if (2 < uStack_1d8._4_4_) goto LAB_1094bcc7c;
        iStack_234 = uStack_1d8._4_4_;
        uStack_230 = SUB84(puStack_1d0,0);
        uStack_22c = (undefined4)((ulong)puStack_1d0 >> 0x20);
        *puStack_1f0 = *puStack_190;
        puStack_1f0[1] = puVar5[1];
        uVar33 = uStack_c2c;
        uVar6 = uStack_c24;
      }
      else {
        lVar16 = 0;
        do {
          puStack_1f8[lVar16] = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iStack_234);
        if (iStack_234 < 3) goto LAB_1094bcc48;
LAB_1094bcc7c:
        uStack_238 = (uint)uStack_1d8;
        uVar33 = uStack_c44;
        uStack_c44._4_4_ = uVar10;
        uVar6 = uStack_c3c;
        uStack_c3c._4_4_ = uVar11;
        uVar7 = uStack_c34;
        uStack_c34._4_4_ = uVar12;
        uVar8 = uStack_c2c;
        uVar9 = uStack_c24;
        func_0x000109a84868(&uStack_238,&uStack_1d8);
        uVar6 = uStack_c24;
        uVar33 = uStack_c2c;
        uVar12 = uStack_c34._4_4_;
        uVar11 = uStack_c3c._4_4_;
        uVar10 = uStack_c44._4_4_;
      }
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar6;
      uStack_c2c = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uStack_220 = (undefined4)uStack_1c0;
      uStack_21c = (undefined4)((ulong)uStack_1c0 >> 0x20);
      uStack_228 = (undefined4)uStack_1c8;
      uStack_224 = (undefined4)((ulong)uStack_1c8 >> 0x20);
      uStack_210 = (undefined4)uStack_1b0;
      uStack_20c = (undefined4)((ulong)uStack_1b0 >> 0x20);
      uStack_218 = (undefined4)uStack_1b8;
      uStack_214 = (undefined4)((ulong)uStack_1b8 >> 0x20);
      lStack_200 = lStack_1a0;
      uStack_208 = (undefined4)uStack_1a8;
      uStack_204 = (undefined4)((ulong)uStack_1a8 >> 0x20);
      uVar33 = uStack_c34;
      uVar6 = uStack_c2c;
      uVar7 = uStack_c24;
      if (lStack_1a0 != 0) {
        piVar1 = (int *)(lStack_1a0 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_1d8);
          uVar7 = uStack_c24;
          uVar6 = uStack_c2c;
          uVar33 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar12 = uStack_c34._4_4_;
          uVar13 = uStack_c2c._4_4_;
          uVar14 = uStack_c24._4_4_;
        }
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar7;
      uStack_c2c = uVar6;
      uStack_c34 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      lStack_1a0 = 0;
      uStack_1c0 = 0;
      uStack_1c8 = 0;
      uStack_1b0 = 0;
      uStack_1b8 = 0;
      if (0 < uStack_1d8._4_4_) {
        lVar16 = 0;
        do {
          *(undefined4 *)((long)ppuStack_198 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < uStack_1d8._4_4_);
      }
      uVar33 = uStack_c2c;
      uVar6 = uStack_c24;
      if (puStack_190 != &uStack_188 && puStack_190 != (undefined8 *)0x0) {
        uVar33 = uStack_c44;
        uStack_c44._4_4_ = uVar10;
        uVar6 = uStack_c3c;
        uStack_c3c._4_4_ = uVar11;
        uVar7 = uStack_c34;
        uStack_c34._4_4_ = uVar12;
        uVar8 = uStack_c2c;
        uStack_c2c._4_4_ = uVar13;
        uVar9 = uStack_c24;
        uStack_c24._4_4_ = uVar14;
        _free(puStack_190[-1]);
        uVar6 = uStack_c24;
        uVar33 = uStack_c2c;
        uVar12 = uStack_c34._4_4_;
        uVar11 = uStack_c3c._4_4_;
        uVar10 = uStack_c44._4_4_;
        uVar13 = uStack_c2c._4_4_;
        uVar14 = uStack_c24._4_4_;
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar6;
      uStack_c2c = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar33 = uStack_c34;
      uVar6 = uStack_c2c;
      uVar7 = uStack_c24;
      if (lStack_5c8 != 0) {
        piVar1 = (int *)(lStack_5c8 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_600);
          uVar7 = uStack_c24;
          uVar6 = uStack_c2c;
          uVar33 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar12 = uStack_c34._4_4_;
          uVar13 = uStack_c2c._4_4_;
          uVar14 = uStack_c24._4_4_;
        }
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar7;
      uStack_c2c = uVar6;
      uStack_c34 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      lStack_5c8 = 0;
      uStack_5e8 = 0;
      uStack_5f0 = 0;
      uStack_5d8 = 0;
      uStack_5e0 = 0;
      if (0 < iStack_5fc) {
        lVar16 = 0;
        do {
          *(undefined4 *)(puStack_5c0 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iStack_5fc);
      }
      uVar33 = uStack_c2c;
      uVar6 = uStack_c24;
      if (puStack_5b8 != &uStack_5b0 && puStack_5b8 != (undefined8 *)0x0) {
        uVar33 = uStack_c44;
        uStack_c44._4_4_ = uVar10;
        uVar6 = uStack_c3c;
        uStack_c3c._4_4_ = uVar11;
        uVar7 = uStack_c34;
        uStack_c34._4_4_ = uVar12;
        uVar8 = uStack_c2c;
        uStack_c2c._4_4_ = uVar13;
        uVar9 = uStack_c24;
        uStack_c24._4_4_ = uVar14;
        _free(puStack_5b8[-1]);
        uVar6 = uStack_c24;
        uVar33 = uStack_c2c;
        uVar12 = uStack_c34._4_4_;
        uVar11 = uStack_c3c._4_4_;
        uVar10 = uStack_c44._4_4_;
        uVar13 = uStack_c2c._4_4_;
        uVar14 = uStack_c24._4_4_;
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar6;
      uStack_c2c = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar33 = uStack_c34;
      uVar6 = uStack_c2c;
      uVar7 = uStack_c24;
      if (lStack_568 != 0) {
        piVar1 = (int *)(lStack_568 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_5a0);
          uVar7 = uStack_c24;
          uVar6 = uStack_c2c;
          uVar33 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar12 = uStack_c34._4_4_;
          uVar13 = uStack_c2c._4_4_;
          uVar14 = uStack_c24._4_4_;
        }
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar7;
      uStack_c2c = uVar6;
      uStack_c34 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      lStack_568 = 0;
      uStack_588 = 0;
      uStack_590 = 0;
      uStack_578 = 0;
      uStack_580 = 0;
      if (0 < iStack_59c) {
        lVar16 = 0;
        do {
          *(undefined4 *)(puStack_560 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iStack_59c);
      }
      uVar33 = uStack_c2c;
      uVar6 = uStack_c24;
      if (puStack_558 != &uStack_550 && puStack_558 != (undefined8 *)0x0) {
        uVar33 = uStack_c44;
        uStack_c44._4_4_ = uVar10;
        uVar6 = uStack_c3c;
        uStack_c3c._4_4_ = uVar11;
        uVar7 = uStack_c34;
        uStack_c34._4_4_ = uVar12;
        uVar8 = uStack_c2c;
        uStack_c2c._4_4_ = uVar13;
        uVar9 = uStack_c24;
        uStack_c24._4_4_ = uVar14;
        _free(puStack_558[-1]);
        uVar6 = uStack_c24;
        uVar33 = uStack_c2c;
        uVar12 = uStack_c34._4_4_;
        uVar11 = uStack_c3c._4_4_;
        uVar10 = uStack_c44._4_4_;
        uVar13 = uStack_c2c._4_4_;
        uVar14 = uStack_c24._4_4_;
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar6;
      uStack_c2c = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar33 = uStack_c34;
      uVar6 = uStack_c2c;
      uVar7 = uStack_c24;
      if (lStack_508 != 0) {
        piVar1 = (int *)(lStack_508 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_540);
          uVar7 = uStack_c24;
          uVar6 = uStack_c2c;
          uVar33 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar12 = uStack_c34._4_4_;
          uVar13 = uStack_c2c._4_4_;
          uVar14 = uStack_c24._4_4_;
        }
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar7;
      uStack_c2c = uVar6;
      uStack_c34 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      lStack_508 = 0;
      uStack_528 = 0;
      uStack_530 = 0;
      uStack_518 = 0;
      uStack_520 = 0;
      if (0 < iStack_53c) {
        lVar16 = 0;
        do {
          *(undefined4 *)(puStack_500 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iStack_53c);
      }
      uVar33 = uStack_c2c;
      uVar6 = uStack_c24;
      if (puStack_4f8 != &uStack_4f0 && puStack_4f8 != (undefined8 *)0x0) {
        uVar33 = uStack_c44;
        uStack_c44._4_4_ = uVar10;
        uVar6 = uStack_c3c;
        uStack_c3c._4_4_ = uVar11;
        uVar7 = uStack_c34;
        uStack_c34._4_4_ = uVar12;
        uVar8 = uStack_c2c;
        uStack_c2c._4_4_ = uVar13;
        uVar9 = uStack_c24;
        uStack_c24._4_4_ = uVar14;
        _free(puStack_4f8[-1]);
        uVar6 = uStack_c24;
        uVar33 = uStack_c2c;
        uVar12 = uStack_c34._4_4_;
        uVar11 = uStack_c3c._4_4_;
        uVar10 = uStack_c44._4_4_;
        uVar13 = uStack_c2c._4_4_;
        uVar14 = uStack_c24._4_4_;
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar6;
      uStack_c2c = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar33 = uStack_c34;
      uVar6 = uStack_c2c;
      uVar7 = uStack_c24;
      if (lStack_4a8 != 0) {
        piVar1 = (int *)(lStack_4a8 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_4e0);
          uVar7 = uStack_c24;
          uVar6 = uStack_c2c;
          uVar33 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar12 = uStack_c34._4_4_;
          uVar13 = uStack_c2c._4_4_;
          uVar14 = uStack_c24._4_4_;
        }
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar7;
      uStack_c2c = uVar6;
      uStack_c34 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      lStack_4a8 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      if (0 < iStack_4dc) {
        lVar16 = 0;
        do {
          *(undefined4 *)((long)ppuStack_4a0 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iStack_4dc);
      }
      uVar33 = uStack_c2c;
      uVar6 = uStack_c24;
      if (puStack_498 != &uStack_490 && puStack_498 != (undefined8 *)0x0) {
        uVar33 = uStack_c44;
        uStack_c44._4_4_ = uVar10;
        uVar6 = uStack_c3c;
        uStack_c3c._4_4_ = uVar11;
        uVar7 = uStack_c34;
        uStack_c34._4_4_ = uVar12;
        uVar8 = uStack_c2c;
        uStack_c2c._4_4_ = uVar13;
        uVar9 = uStack_c24;
        uStack_c24._4_4_ = uVar14;
        _free(puStack_498[-1]);
        uVar6 = uStack_c24;
        uVar33 = uStack_c2c;
        uVar12 = uStack_c34._4_4_;
        uVar11 = uStack_c3c._4_4_;
        uVar10 = uStack_c44._4_4_;
        uVar13 = uStack_c2c._4_4_;
        uVar14 = uStack_c24._4_4_;
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar6;
      uStack_c2c = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar33 = uStack_c34;
      uVar6 = uStack_c2c;
      uVar7 = uStack_c24;
      if (lStack_448 != 0) {
        piVar1 = (int *)(lStack_448 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_480);
          uVar7 = uStack_c24;
          uVar6 = uStack_c2c;
          uVar33 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar12 = uStack_c34._4_4_;
          uVar13 = uStack_c2c._4_4_;
          uVar14 = uStack_c24._4_4_;
        }
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar7;
      uStack_c2c = uVar6;
      uStack_c34 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      lStack_448 = 0;
      uStack_468 = 0;
      uStack_470 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      if (0 < uStack_480._4_4_) {
        lVar16 = 0;
        do {
          *(undefined4 *)((long)ppuStack_440 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < uStack_480._4_4_);
      }
      uVar33 = uStack_c2c;
      uVar6 = uStack_c24;
      if (puStack_438 != &uStack_430 && puStack_438 != (undefined8 *)0x0) {
        uVar33 = uStack_c44;
        uStack_c44._4_4_ = uVar10;
        uVar6 = uStack_c3c;
        uStack_c3c._4_4_ = uVar11;
        uVar7 = uStack_c34;
        uStack_c34._4_4_ = uVar12;
        uVar8 = uStack_c2c;
        uStack_c2c._4_4_ = uVar13;
        uVar9 = uStack_c24;
        uStack_c24._4_4_ = uVar14;
        _free(puStack_438[-1]);
        uVar6 = uStack_c24;
        uVar33 = uStack_c2c;
        uVar12 = uStack_c34._4_4_;
        uVar11 = uStack_c3c._4_4_;
        uVar10 = uStack_c44._4_4_;
        uVar13 = uStack_c2c._4_4_;
        uVar14 = uStack_c24._4_4_;
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar6;
      uStack_c2c = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar33 = uStack_c34;
      uVar6 = uStack_c2c;
      uVar7 = uStack_c24;
      if (lStack_3e8 != 0) {
        piVar1 = (int *)(lStack_3e8 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_420);
          uVar7 = uStack_c24;
          uVar6 = uStack_c2c;
          uVar33 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar12 = uStack_c34._4_4_;
          uVar13 = uStack_c2c._4_4_;
          uVar14 = uStack_c24._4_4_;
        }
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar7;
      uStack_c2c = uVar6;
      uStack_c34 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      lStack_3e8 = 0;
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      if (0 < uStack_420._4_4_) {
        lVar16 = 0;
        do {
          *(undefined4 *)((long)ppuStack_3e0 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < uStack_420._4_4_);
      }
      uVar33 = uStack_c2c;
      uVar6 = uStack_c24;
      if (puStack_3d8 != &uStack_3d0 && puStack_3d8 != (undefined8 *)0x0) {
        uVar33 = uStack_c44;
        uStack_c44._4_4_ = uVar10;
        uVar6 = uStack_c3c;
        uStack_c3c._4_4_ = uVar11;
        uVar7 = uStack_c34;
        uStack_c34._4_4_ = uVar12;
        uVar8 = uStack_c2c;
        uStack_c2c._4_4_ = uVar13;
        uVar9 = uStack_c24;
        uStack_c24._4_4_ = uVar14;
        _free(puStack_3d8[-1]);
        uVar6 = uStack_c24;
        uVar33 = uStack_c2c;
        uVar12 = uStack_c34._4_4_;
        uVar11 = uStack_c3c._4_4_;
        uVar10 = uStack_c44._4_4_;
        uVar13 = uStack_c2c._4_4_;
        uVar14 = uStack_c24._4_4_;
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar6;
      uStack_c2c = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar33 = uStack_c34;
      uVar6 = uStack_c2c;
      uVar7 = uStack_c24;
      if (lStack_380 != 0) {
        piVar1 = (int *)(lStack_380 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_3b8);
          uVar7 = uStack_c24;
          uVar6 = uStack_c2c;
          uVar33 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar12 = uStack_c34._4_4_;
          uVar13 = uStack_c2c._4_4_;
          uVar14 = uStack_c24._4_4_;
        }
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar7;
      uStack_c2c = uVar6;
      uStack_c34 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      lStack_380 = 0;
      uStack_3a0 = 0;
      uStack_39c = 0;
      uStack_3a8 = 0;
      uStack_3a4 = 0;
      uStack_390 = 0;
      uStack_38c = 0;
      uStack_398 = 0;
      uStack_394 = 0;
      if (0 < iStack_3b4) {
        lVar16 = 0;
        do {
          puStack_378[lVar16] = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iStack_3b4);
      }
      uVar33 = uStack_c2c;
      uVar6 = uStack_c24;
      if (puStack_370 != &uStack_368 && puStack_370 != (undefined8 *)0x0) {
        uVar33 = uStack_c44;
        uStack_c44._4_4_ = uVar10;
        uVar6 = uStack_c3c;
        uStack_c3c._4_4_ = uVar11;
        uVar7 = uStack_c34;
        uStack_c34._4_4_ = uVar12;
        uVar8 = uStack_c2c;
        uStack_c2c._4_4_ = uVar13;
        uVar9 = uStack_c24;
        uStack_c24._4_4_ = uVar14;
        _free(puStack_370[-1]);
        uVar6 = uStack_c24;
        uVar33 = uStack_c2c;
        uVar12 = uStack_c34._4_4_;
        uVar11 = uStack_c3c._4_4_;
        uVar10 = uStack_c44._4_4_;
        uVar13 = uStack_c2c._4_4_;
        uVar14 = uStack_c24._4_4_;
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar6;
      uStack_c2c = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar33 = uStack_c34;
      uVar6 = uStack_c2c;
      uVar7 = uStack_c24;
      if (lStack_320 != 0) {
        piVar1 = (int *)(lStack_320 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_358);
          uVar7 = uStack_c24;
          uVar6 = uStack_c2c;
          uVar33 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar12 = uStack_c34._4_4_;
          uVar13 = uStack_c2c._4_4_;
          uVar14 = uStack_c24._4_4_;
        }
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar7;
      uStack_c2c = uVar6;
      uStack_c34 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      lStack_320 = 0;
      uStack_340 = 0;
      uStack_33c = 0;
      uStack_348 = 0;
      uStack_344 = 0;
      uStack_330 = 0;
      uStack_32c = 0;
      uStack_338 = 0;
      uStack_334 = 0;
      if (0 < iStack_354) {
        lVar16 = 0;
        do {
          puStack_318[lVar16] = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iStack_354);
      }
      uVar33 = uStack_c2c;
      uVar6 = uStack_c24;
      if (puStack_310 != &uStack_308 && puStack_310 != (undefined8 *)0x0) {
        uVar33 = uStack_c44;
        uStack_c44._4_4_ = uVar10;
        uVar6 = uStack_c3c;
        uStack_c3c._4_4_ = uVar11;
        uVar7 = uStack_c34;
        uStack_c34._4_4_ = uVar12;
        uVar8 = uStack_c2c;
        uStack_c2c._4_4_ = uVar13;
        uVar9 = uStack_c24;
        uStack_c24._4_4_ = uVar14;
        _free(puStack_310[-1]);
        uVar6 = uStack_c24;
        uVar33 = uStack_c2c;
        uVar12 = uStack_c34._4_4_;
        uVar11 = uStack_c3c._4_4_;
        uVar10 = uStack_c44._4_4_;
        uVar13 = uStack_c2c._4_4_;
        uVar14 = uStack_c24._4_4_;
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar6;
      uStack_c2c = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar33 = uStack_c34;
      uVar6 = uStack_c2c;
      uVar7 = uStack_c24;
      if (lStack_a08 != 0) {
        piVar1 = (int *)(lStack_a08 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_a40);
          uVar7 = uStack_c24;
          uVar6 = uStack_c2c;
          uVar33 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar12 = uStack_c34._4_4_;
          uVar13 = uStack_c2c._4_4_;
          uVar14 = uStack_c24._4_4_;
        }
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar7;
      uStack_c2c = uVar6;
      uStack_c34 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      lStack_a08 = 0;
      uStack_a28 = 0;
      uStack_a30 = 0;
      uStack_a18 = 0;
      uStack_a20 = 0;
      if (0 < uStack_a40._4_4_) {
        lVar16 = 0;
        do {
          *(undefined4 *)((long)ppuStack_a00 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < uStack_a40._4_4_);
      }
      uVar33 = uStack_c2c;
      uVar6 = uStack_c24;
      if (puStack_9f8 != &uStack_9f0 && puStack_9f8 != (undefined8 *)0x0) {
        uVar33 = uStack_c44;
        uStack_c44._4_4_ = uVar10;
        uVar6 = uStack_c3c;
        uStack_c3c._4_4_ = uVar11;
        uVar7 = uStack_c34;
        uStack_c34._4_4_ = uVar12;
        uVar8 = uStack_c2c;
        uStack_c2c._4_4_ = uVar13;
        uVar9 = uStack_c24;
        uStack_c24._4_4_ = uVar14;
        _free(puStack_9f8[-1]);
        uVar6 = uStack_c24;
        uVar33 = uStack_c2c;
        uVar12 = uStack_c34._4_4_;
        uVar11 = uStack_c3c._4_4_;
        uVar10 = uStack_c44._4_4_;
        uVar13 = uStack_c2c._4_4_;
        uVar14 = uStack_c24._4_4_;
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar6;
      uStack_c2c = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar33 = uStack_c34;
      uVar6 = uStack_c2c;
      uVar7 = uStack_c24;
      if (uStack_8a8 != 0) {
        piVar1 = (int *)(uStack_8a8 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar31 + -1 == 0) {
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_8e0);
          uVar7 = uStack_c24;
          uVar6 = uStack_c2c;
          uVar33 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar12 = uStack_c34._4_4_;
          uVar13 = uStack_c2c._4_4_;
          uVar14 = uStack_c24._4_4_;
        }
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar7;
      uStack_c2c = uVar6;
      uStack_c34 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uStack_8a8 = 0;
      uStack_8c8 = 0;
      uStack_8d0 = 0;
      uStack_8b8 = 0;
      uStack_8c0 = 0;
      if (0 < uStack_8e0._4_4_) {
        lVar16 = 0;
        do {
          *(undefined4 *)((long)ppuStack_8a0 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < uStack_8e0._4_4_);
      }
      uVar33 = uStack_c2c;
      uVar6 = uStack_c24;
      if (puStack_898 != &uStack_890 && puStack_898 != (ulong *)0x0) {
        uVar33 = uStack_c44;
        uStack_c44._4_4_ = uVar10;
        uVar6 = uStack_c3c;
        uStack_c3c._4_4_ = uVar11;
        uVar7 = uStack_c34;
        uStack_c34._4_4_ = uVar12;
        uVar8 = uStack_c2c;
        uStack_c2c._4_4_ = uVar13;
        uVar9 = uStack_c24;
        uStack_c24._4_4_ = uVar14;
        _free(puStack_898[-1]);
        uVar6 = uStack_c24;
        uVar33 = uStack_c2c;
        uVar12 = uStack_c34._4_4_;
        uVar11 = uStack_c3c._4_4_;
        uVar10 = uStack_c44._4_4_;
        uVar13 = uStack_c2c._4_4_;
        uVar14 = uStack_c24._4_4_;
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar6;
      uStack_c2c = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      iVar35 = iVar35 + 1;
      uVar33 = uStack_c44;
      uVar6 = uStack_c3c;
      uVar7 = uStack_c34;
      uVar8 = uStack_c2c;
      uVar9 = uStack_c24;
      uStack_c44._4_4_ = uVar10;
      uStack_c3c._4_4_ = uVar11;
      uStack_c34._4_4_ = uVar12;
      uStack_c2c._4_4_ = uVar13;
      uStack_c24._4_4_ = uVar14;
    } while (iVar35 < (int)uStack_be8);
  }
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  if (uStack_260 != 0) {
    piVar1 = (int *)(uStack_260 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar33 = uStack_c34;
  uVar6 = uStack_c2c;
  uVar7 = uStack_c24;
  if (uStack_cd0 != 0) {
    piVar1 = (int *)(uStack_cd0 + 0x14);
    do {
      iVar35 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar35 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar35 + -1 == 0) {
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      func_0x000109a848d4(&uStack_d08);
      uVar7 = uStack_c24;
      uVar6 = uStack_c2c;
      uVar33 = uStack_c34;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar14 = uStack_c24._4_4_;
    }
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar7;
  uStack_c2c = uVar6;
  uStack_c34 = uVar33;
  puVar2 = puStack_250;
  uVar14 = uStack_c24._4_4_;
  uVar9 = uStack_c24;
  uVar13 = uStack_c2c._4_4_;
  uVar8 = uStack_c2c;
  uVar12 = uStack_c34._4_4_;
  uVar7 = uStack_c34;
  uVar11 = uStack_c3c._4_4_;
  uVar6 = uStack_c3c;
  uVar10 = uStack_c44._4_4_;
  uVar33 = uStack_c44;
  uStack_cd0 = 0;
  uStack_c44._4_4_ = uVar10;
  uStack_c3c._4_4_ = uVar11;
  uStack_c34._4_4_ = uVar12;
  uStack_c2c._4_4_ = uVar13;
  uStack_c24._4_4_ = uVar14;
  if (iStack_d04 < 1) {
LAB_1094bd29c:
    uStack_d08 = uStack_298;
    if (2 < iStack_294) goto LAB_1094bd2d0;
    iStack_d04 = iStack_294;
    uStack_d00 = uStack_290;
    uStack_cfc = uStack_28c;
    *puStack_cc0 = *puStack_250;
    uStack_c24 = uVar9;
    uStack_c2c = uVar8;
    uStack_c34 = uVar7;
    uStack_c3c = uVar6;
    uStack_c44 = uVar33;
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    puStack_cc0[1] = puVar2[1];
    uStack_c24 = uVar9;
    uStack_c2c = uVar8;
    uStack_c34 = uVar7;
    uStack_c3c = uVar6;
    uStack_c44 = uVar33;
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
  }
  else {
    lVar16 = 0;
    do {
      puStack_cc8[lVar16] = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_d04);
    if (iStack_d04 < 3) goto LAB_1094bd29c;
LAB_1094bd2d0:
    uStack_d08 = uStack_298;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x000109a84868(&uStack_d08,&uStack_298);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar12 = uStack_c34._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar10 = uStack_c44._4_4_;
    uVar33 = uStack_c44;
    uVar6 = uStack_c3c;
    uVar7 = uStack_c34;
    uStack_c44._4_4_ = uVar10;
    uStack_c3c._4_4_ = uVar11;
    uStack_c34._4_4_ = uVar12;
  }
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uStack_cd0 = uStack_260;
  uStack_cd4 = uStack_264;
  uStack_cd8 = uStack_268;
  if (lStack_2c0 != 0) {
    piVar1 = (int *)(lStack_2c0 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar33 = uStack_c34;
  uVar6 = uStack_c2c;
  uVar7 = uStack_c24;
  if (lStack_c70 != 0) {
    piVar1 = (int *)(lStack_c70 + 0x14);
    do {
      iVar35 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar35 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar35 + -1 == 0) {
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      func_0x000109a848d4(&uStack_ca8);
      uVar7 = uStack_c24;
      uVar6 = uStack_c2c;
      uVar33 = uStack_c34;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar14 = uStack_c24._4_4_;
    }
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar7;
  uStack_c2c = uVar6;
  uStack_c34 = uVar33;
  puVar17 = puStack_2b0;
  uVar14 = uStack_c24._4_4_;
  uVar9 = uStack_c24;
  uVar13 = uStack_c2c._4_4_;
  uVar8 = uStack_c2c;
  uVar12 = uStack_c34._4_4_;
  uVar7 = uStack_c34;
  uVar11 = uStack_c3c._4_4_;
  uVar6 = uStack_c3c;
  uVar10 = uStack_c44._4_4_;
  uVar33 = uStack_c44;
  lStack_c70 = 0;
  uStack_c44._4_4_ = uVar10;
  uStack_c3c._4_4_ = uVar11;
  uStack_c34._4_4_ = uVar12;
  uStack_c2c._4_4_ = uVar13;
  uStack_c24._4_4_ = uVar14;
  if (iStack_ca4 < 1) {
LAB_1094bd384:
    uStack_ca8 = uStack_2f8;
    if (2 < iStack_2f4) goto LAB_1094bd3b8;
    iStack_ca4 = iStack_2f4;
    uStack_ca0 = uStack_2f0;
    uStack_c9c = uStack_2ec;
    *puStack_c60 = *puStack_2b0;
    uStack_c24 = uVar9;
    uStack_c2c = uVar8;
    uStack_c34 = uVar7;
    uStack_c3c = uVar6;
    uStack_c44 = uVar33;
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    puStack_c60[1] = puVar17[1];
    uStack_c24 = uVar9;
    uStack_c2c = uVar8;
    uStack_c34 = uVar7;
    uStack_c3c = uVar6;
    uStack_c44 = uVar33;
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
  }
  else {
    lVar16 = 0;
    do {
      puStack_c68[lVar16] = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_ca4);
    if (iStack_ca4 < 3) goto LAB_1094bd384;
LAB_1094bd3b8:
    uStack_ca8 = uStack_2f8;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x000109a84868(&uStack_ca8,&uStack_2f8);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar12 = uStack_c34._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar10 = uStack_c44._4_4_;
    uVar33 = uStack_c44;
    uVar6 = uStack_c3c;
    uVar7 = uStack_c34;
    uStack_c44._4_4_ = uVar10;
    uStack_c3c._4_4_ = uVar11;
    uStack_c34._4_4_ = uVar12;
  }
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  lStack_c70 = lStack_2c0;
  uStack_c74 = uStack_2c4;
  uStack_c78 = uStack_2c8;
  uStack_358 = 0x42ff0000;
  puStack_1d0 = &uStack_358;
  puStack_318 = &uStack_350;
  uStack_34c = 0;
  uStack_348 = 0;
  iStack_354 = 0;
  uStack_350 = 0;
  uStack_33c = 0;
  uStack_338 = 0;
  uStack_344 = 0;
  uStack_340 = 0;
  uStack_32c = 0;
  uStack_334 = 0;
  uStack_330 = 0;
  lStack_320 = 0;
  uStack_328 = 0;
  uStack_324 = 0;
  uStack_300 = 0;
  uStack_308 = 0;
  uStack_3b8 = 0x42ff0000;
  puStack_378 = &uStack_3b0;
  uStack_3ac = 0;
  uStack_3a8 = 0;
  iStack_3b4 = 0;
  uStack_3b0 = 0;
  uStack_39c = 0;
  uStack_398 = 0;
  uStack_3a4 = 0;
  uStack_3a0 = 0;
  uStack_38c = 0;
  uStack_394 = 0;
  uStack_390 = 0;
  lStack_380 = 0;
  uStack_388 = 0;
  uStack_384 = 0;
  uStack_360 = 0;
  uStack_368 = 0;
  uStack_1d8._0_4_ = 0x2010000;
  uStack_1c8 = 0;
  puStack_370 = &uStack_368;
  puStack_310 = &uStack_308;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  FUN_109a41858(0x3ff0000000000000,0,&uStack_d08,&uStack_1d8,5);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  uStack_1d8 = (long *)CONCAT44(uStack_1d8._4_4_,0x2010000);
  uStack_1c8 = 0;
  uVar10 = uStack_c44._4_4_;
  uStack_c44 = uVar33;
  uVar11 = uStack_c3c._4_4_;
  uStack_c3c = uVar6;
  uVar12 = uStack_c34._4_4_;
  uStack_c34 = uVar7;
  uVar13 = uStack_c2c._4_4_;
  uStack_c2c = uVar8;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar9;
  puStack_1d0 = &uStack_3b8;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  FUN_109a41858(0x3ff0000000000000,0,&uStack_ca8,&uStack_1d8,5);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  uStack_470 = 0;
  uStack_480 = CONCAT44(uStack_480._4_4_,0x1010000);
  puStack_478 = &uStack_238;
  uVar10 = uStack_c44._4_4_;
  uStack_c44 = uVar33;
  uVar11 = uStack_c3c._4_4_;
  uStack_c3c = uVar6;
  uVar12 = uStack_c34._4_4_;
  uStack_c34 = uVar7;
  uVar13 = uStack_c2c._4_4_;
  uStack_c2c = uVar8;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar9;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  FUN_109a8239c(&uStack_780,0x3ff0000000000000,&uStack_358,&uStack_480);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  uStack_408 = 0;
  uStack_410 = 0x3ff0000000000000;
  uVar10 = uStack_c44._4_4_;
  uStack_c44 = uVar33;
  uVar11 = uStack_c3c._4_4_;
  uStack_c3c = uVar6;
  uVar12 = uStack_c34._4_4_;
  uStack_c34 = uVar7;
  uVar13 = uStack_c2c._4_4_;
  uStack_c2c = uVar8;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar9;
  uStack_420 = auVar34._0_8_;
  puStack_418 = auVar34._8_8_;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  FUN_109a7cf94(&uStack_a40,&uStack_420,&uStack_238);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  uStack_4d0 = 0;
  uStack_4e0 = 0xc1060000;
  uVar10 = uStack_c44._4_4_;
  uStack_c44 = uVar33;
  uVar11 = uStack_c3c._4_4_;
  uStack_c3c = uVar6;
  uVar12 = uStack_c34._4_4_;
  uStack_c34 = uVar7;
  uVar13 = uStack_c2c._4_4_;
  uStack_c2c = uVar8;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar9;
  puStack_4d8 = &uStack_a40;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  FUN_109a8239c(&uStack_8e0,0x3ff0000000000000,&uStack_3b8,&uStack_4e0);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  uVar10 = uStack_c44._4_4_;
  uStack_c44 = uVar33;
  uVar11 = uStack_c3c._4_4_;
  uStack_c3c = uVar6;
  uVar12 = uStack_c34._4_4_;
  uStack_c34 = uVar7;
  uVar13 = uStack_c2c._4_4_;
  uStack_c2c = uVar8;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar9;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  FUN_109a7cc48(&uStack_1d8,&uStack_780,&uStack_8e0);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  uVar10 = uStack_c44._4_4_;
  uStack_c44 = uVar33;
  uVar11 = uStack_c3c._4_4_;
  uStack_c3c = uVar6;
  uVar12 = uStack_c34._4_4_;
  uStack_c34 = uVar7;
  uVar13 = uStack_c2c._4_4_;
  uStack_c2c = uVar8;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar9;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  (**(code **)(*uStack_1d8 + 0x18))(uStack_1d8,&uStack_1d8,&uStack_c48,0xffffffff);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  uVar10 = uStack_c44._4_4_;
  uStack_c44 = uVar33;
  uVar11 = uStack_c3c._4_4_;
  uStack_c3c = uVar6;
  uVar12 = uStack_c34._4_4_;
  uStack_c34 = uVar7;
  uVar13 = uStack_c2c._4_4_;
  uStack_c2c = uVar8;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar9;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  FUN_10918eb6c(&uStack_1d8);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  uVar10 = uStack_c44._4_4_;
  uStack_c44 = uVar33;
  uVar11 = uStack_c3c._4_4_;
  uStack_c3c = uVar6;
  uVar12 = uStack_c34._4_4_;
  uStack_c34 = uVar7;
  uVar13 = uStack_c2c._4_4_;
  uStack_c2c = uVar8;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar9;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  FUN_10918eb6c(&uStack_8e0);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  uVar10 = uStack_c44._4_4_;
  uStack_c44 = uVar33;
  uVar11 = uStack_c3c._4_4_;
  uStack_c3c = uVar6;
  uVar12 = uStack_c34._4_4_;
  uStack_c34 = uVar7;
  uVar13 = uStack_c2c._4_4_;
  uStack_c2c = uVar8;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar9;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  FUN_10918eb6c(&uStack_a40);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  uVar10 = uStack_c44._4_4_;
  uStack_c44 = uVar33;
  uVar11 = uStack_c3c._4_4_;
  uStack_c3c = uVar6;
  uVar12 = uStack_c34._4_4_;
  uStack_c34 = uVar7;
  uVar13 = uStack_c2c._4_4_;
  uStack_c2c = uVar8;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar9;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  FUN_10918eb6c(&uStack_780);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  if (lStack_380 != 0) {
    piVar1 = (int *)(lStack_380 + 0x14);
    do {
      iVar35 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar35 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar35 + -1 == 0) {
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      func_0x000109a848d4(&uStack_3b8);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar33 = uStack_c44;
      uVar6 = uStack_c3c;
      uStack_c44._4_4_ = uVar10;
      uStack_c3c._4_4_ = uVar11;
    }
  }
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  lStack_380 = 0;
  uStack_3a0 = 0;
  uStack_39c = 0;
  uStack_3a8 = 0;
  uStack_3a4 = 0;
  uStack_390 = 0;
  uStack_38c = 0;
  uStack_398 = 0;
  uStack_394 = 0;
  if (0 < iStack_3b4) {
    lVar16 = 0;
    do {
      puStack_378[lVar16] = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_3b4);
  }
  uVar33 = uStack_c2c;
  uVar6 = uStack_c24;
  if (puStack_370 != &uStack_368 && puStack_370 != (undefined8 *)0x0) {
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    _free(puStack_370[-1]);
    uVar6 = uStack_c24;
    uVar33 = uStack_c2c;
    uVar12 = uStack_c34._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar10 = uStack_c44._4_4_;
    uVar13 = uStack_c2c._4_4_;
    uVar14 = uStack_c24._4_4_;
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar6;
  uStack_c2c = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar33 = uStack_c34;
  uVar6 = uStack_c2c;
  uVar7 = uStack_c24;
  if (lStack_320 != 0) {
    piVar1 = (int *)(lStack_320 + 0x14);
    do {
      iVar35 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar35 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar35 + -1 == 0) {
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      func_0x000109a848d4(&uStack_358);
      uVar7 = uStack_c24;
      uVar6 = uStack_c2c;
      uVar33 = uStack_c34;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar14 = uStack_c24._4_4_;
    }
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar7;
  uStack_c2c = uVar6;
  uStack_c34 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  lStack_320 = 0;
  uStack_340 = 0;
  uStack_33c = 0;
  uStack_348 = 0;
  uStack_344 = 0;
  uStack_330 = 0;
  uStack_32c = 0;
  uStack_338 = 0;
  uStack_334 = 0;
  if (0 < iStack_354) {
    lVar16 = 0;
    do {
      puStack_318[lVar16] = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_354);
  }
  uVar33 = uStack_c2c;
  uVar6 = uStack_c24;
  if (puStack_310 != &uStack_308 && puStack_310 != (undefined8 *)0x0) {
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    _free(puStack_310[-1]);
    uVar6 = uStack_c24;
    uVar33 = uStack_c2c;
    uVar12 = uStack_c34._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar10 = uStack_c44._4_4_;
    uVar13 = uStack_c2c._4_4_;
    uVar14 = uStack_c24._4_4_;
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar6;
  uStack_c2c = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar33 = uStack_c34;
  uVar6 = uStack_c2c;
  uVar7 = uStack_c24;
  if (lStack_2c0 != 0) {
    piVar1 = (int *)(lStack_2c0 + 0x14);
    do {
      iVar35 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar35 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar35 + -1 == 0) {
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      func_0x000109a848d4(&uStack_2f8);
      uVar7 = uStack_c24;
      uVar6 = uStack_c2c;
      uVar33 = uStack_c34;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar14 = uStack_c24._4_4_;
    }
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar7;
  uStack_c2c = uVar6;
  uStack_c34 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  lStack_2c0 = 0;
  uStack_2e0 = 0;
  uStack_2dc = 0;
  uStack_2e8 = 0;
  uStack_2e4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  if (0 < iStack_2f4) {
    lVar16 = 0;
    do {
      *(undefined4 *)((long)puStack_2b8 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_2f4);
  }
  uVar33 = uStack_c2c;
  uVar6 = uStack_c24;
  if (puStack_2b0 != &uStack_2a8 && puStack_2b0 != (undefined8 *)0x0) {
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    _free(puStack_2b0[-1]);
    uVar6 = uStack_c24;
    uVar33 = uStack_c2c;
    uVar12 = uStack_c34._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar10 = uStack_c44._4_4_;
    uVar13 = uStack_c2c._4_4_;
    uVar14 = uStack_c24._4_4_;
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar6;
  uStack_c2c = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar33 = uStack_c34;
  uVar6 = uStack_c2c;
  uVar7 = uStack_c24;
  if (uStack_260 != 0) {
    piVar1 = (int *)(uStack_260 + 0x14);
    do {
      iVar35 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar35 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar35 + -1 == 0) {
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      func_0x000109a848d4(&uStack_298);
      uVar7 = uStack_c24;
      uVar6 = uStack_c2c;
      uVar33 = uStack_c34;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar14 = uStack_c24._4_4_;
    }
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar7;
  uStack_c2c = uVar6;
  uStack_c34 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uStack_260 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_288 = 0;
  uStack_284 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  if (0 < iStack_294) {
    lVar16 = 0;
    do {
      *(undefined4 *)((long)puStack_258 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_294);
  }
  uVar33 = uStack_c2c;
  uVar6 = uStack_c24;
  if (puStack_250 != auStack_248 && puStack_250 != (ulong *)0x0) {
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    _free(puStack_250[-1]);
    uVar6 = uStack_c24;
    uVar33 = uStack_c2c;
    uVar12 = uStack_c34._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar10 = uStack_c44._4_4_;
    uVar13 = uStack_c2c._4_4_;
    uVar14 = uStack_c24._4_4_;
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar6;
  uStack_c2c = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar33 = uStack_c34;
  uVar6 = uStack_c2c;
  uVar7 = uStack_c24;
  if (lStack_200 != 0) {
    piVar1 = (int *)(lStack_200 + 0x14);
    do {
      iVar35 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar35 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar35 + -1 == 0) {
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      func_0x000109a848d4(&uStack_238);
      uVar7 = uStack_c24;
      uVar6 = uStack_c2c;
      uVar33 = uStack_c34;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar14 = uStack_c24._4_4_;
    }
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar7;
  uStack_c2c = uVar6;
  uStack_c34 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  lStack_200 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  if (0 < iStack_234) {
    lVar16 = 0;
    do {
      puStack_1f8[lVar16] = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_234);
  }
  uVar33 = uStack_c2c;
  uVar6 = uStack_c24;
  if (puStack_1f0 != &uStack_1e8 && puStack_1f0 != (undefined8 *)0x0) {
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    _free(puStack_1f0[-1]);
    uVar6 = uStack_c24;
    uVar33 = uStack_c2c;
    uVar12 = uStack_c34._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar10 = uStack_c44._4_4_;
    uVar13 = uStack_c2c._4_4_;
    uVar14 = uStack_c24._4_4_;
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar6;
  uStack_c2c = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  ppuStack_8a0 = (uint **)((ulong)&uStack_8e0 | 8);
  uStack_8e0 = CONCAT84(uStack_c44,uStack_c48);
  puStack_8d8 = (uint *)CONCAT84(uStack_c3c,uVar10);
  uStack_8c8 = CONCAT84(uStack_c2c,uVar12);
  uStack_8d0 = CONCAT84(uStack_c34,uVar11);
  uStack_8c0 = CONCAT84(uStack_c24,uVar13);
  uStack_8b8 = CONCAT44(uStack_c1c,uVar14);
  uStack_8b0 = CONCAT44(uStack_c14,uStack_c18);
  uStack_8a8 = uStack_c10;
  uStack_888 = 0;
  uStack_890 = 0;
  if (uStack_c10 != 0) {
    piVar1 = (int *)(uStack_c10 + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_898 = &uStack_890;
  uStack_c2c._4_4_ = uVar13;
  uStack_c24._4_4_ = uVar14;
  if ((int)uStack_c44 < 3) {
    uStack_890 = *puStack_c00;
    uStack_888 = puStack_c00[1];
    uVar33 = uStack_c2c;
    uVar6 = uStack_c24;
  }
  else {
    uStack_8e0 = (ulong)uStack_c48;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uVar9 = uStack_c24;
    func_0x000109a84868(&uStack_8e0,&uStack_c48);
    uVar6 = uStack_c24;
    uVar33 = uStack_c2c;
    uVar12 = uStack_c34._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar10 = uStack_c44._4_4_;
  }
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar6;
  uStack_c2c = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  if (0 < (int)uStack_be8) {
    puVar17 = (undefined8 *)((ulong)&uStack_780 | 4);
    uVar18 = (ulong)uStack_be8;
    do {
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uStack_780 = CONCAT44(uStack_780._4_4_,0x42ff0000);
      puVar17[1] = 0;
      *puVar17 = 0;
      puVar17[3] = 0;
      puVar17[2] = 0;
      puVar17[5] = 0;
      puVar17[4] = 0;
      *(undefined8 *)((long)puVar17 + 0x34) = 0;
      *(undefined8 *)((long)puVar17 + 0x2c) = 0;
      uStack_730 = 0;
      uStack_728 = 0;
      uStack_1c8 = 0;
      uStack_1d8._0_4_ = 0x1010000;
      uStack_a40 = CONCAT44(uStack_a40._4_4_,0x2010000);
      uStack_a30 = 0;
      uVar33 = NEON_rev64(**(undefined8 **)(alStack_d20[0] + uVar18 * 0x60 + -0x20),4);
      uStack_238 = (uint)uVar33;
      iStack_234 = (int)((ulong)uVar33 >> 0x20);
      puStack_a38 = (uint *)&uStack_780;
      ppuStack_740 = &puStack_778;
      puStack_738 = &uStack_730;
      puStack_1d0 = (uint *)&uStack_8e0;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_109b3ddf8(&uStack_1d8,&uStack_a40,&uStack_238,4);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uStack_1d8 = (long *)CONCAT44(uStack_1d8._4_4_,0x2010000);
      uStack_1c8 = 0;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      puStack_1d0 = (uint *)&uStack_780;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_109a41858(0x3ff0000000000000,0,&uStack_780,&uStack_1d8,5);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_109a7c6f4(&uStack_1d8,&uStack_780,alStack_d20[0] + (uVar18 - 1) * 0x60);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      (**(code **)(*uStack_1d8 + 0x18))(uStack_1d8,&uStack_1d8,&uStack_8e0,0xffffffff);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      FUN_10918eb6c(&uStack_1d8);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar6 = uStack_c3c;
      uVar33 = uStack_c44;
      if (lStack_748 != 0) {
        piVar1 = (int *)(lStack_748 + 0x14);
        do {
          iVar35 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar35 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar35 + -1 == 0) {
          uVar10 = uStack_c44._4_4_;
          uStack_c44 = uVar33;
          uVar11 = uStack_c3c._4_4_;
          uStack_c3c = uVar6;
          uVar12 = uStack_c34._4_4_;
          uStack_c34 = uVar7;
          uVar13 = uStack_c2c._4_4_;
          uStack_c2c = uVar8;
          uVar14 = uStack_c24._4_4_;
          uStack_c24 = uVar9;
          uVar33 = uStack_c44;
          uStack_c44._4_4_ = uVar10;
          uVar6 = uStack_c3c;
          uStack_c3c._4_4_ = uVar11;
          uVar7 = uStack_c34;
          uStack_c34._4_4_ = uVar12;
          uVar8 = uStack_c2c;
          uStack_c2c._4_4_ = uVar13;
          uVar9 = uStack_c24;
          uStack_c24._4_4_ = uVar14;
          func_0x000109a848d4(&uStack_780);
          uVar9 = uStack_c24;
          uVar8 = uStack_c2c;
          uVar7 = uStack_c34;
          uVar11 = uStack_c3c._4_4_;
          uVar10 = uStack_c44._4_4_;
          uVar33 = uStack_c44;
          uVar6 = uStack_c3c;
          uStack_c44._4_4_ = uVar10;
          uStack_c3c._4_4_ = uVar11;
        }
      }
      uStack_c24 = uVar9;
      uStack_c2c = uVar8;
      uStack_c34 = uVar7;
      uStack_c3c = uVar6;
      uStack_c44 = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      lStack_748 = 0;
      uStack_768 = 0;
      uStack_770 = 0;
      uStack_758 = 0;
      uStack_760 = 0;
      if (0 < uStack_780._4_4_) {
        lVar16 = 0;
        do {
          *(undefined4 *)((long)ppuStack_740 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < uStack_780._4_4_);
      }
      uVar33 = uStack_c2c;
      uVar6 = uStack_c24;
      if (puStack_738 != &uStack_730 && puStack_738 != (undefined8 *)0x0) {
        uVar33 = uStack_c44;
        uStack_c44._4_4_ = uVar10;
        uVar6 = uStack_c3c;
        uStack_c3c._4_4_ = uVar11;
        uVar7 = uStack_c34;
        uStack_c34._4_4_ = uVar12;
        uVar8 = uStack_c2c;
        uStack_c2c._4_4_ = uVar13;
        uVar9 = uStack_c24;
        uStack_c24._4_4_ = uVar14;
        _free(puStack_738[-1]);
        uVar6 = uStack_c24;
        uVar33 = uStack_c2c;
        uVar12 = uStack_c34._4_4_;
        uVar11 = uStack_c3c._4_4_;
        uVar10 = uStack_c44._4_4_;
        uVar13 = uStack_c2c._4_4_;
        uVar14 = uStack_c24._4_4_;
      }
      uStack_c24._4_4_ = uVar14;
      uStack_c2c._4_4_ = uVar13;
      uStack_c34._4_4_ = uVar12;
      uStack_c3c._4_4_ = uVar11;
      uStack_c44._4_4_ = uVar10;
      uStack_c24 = uVar6;
      uStack_c2c = uVar33;
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      bVar4 = 1 < uVar18;
      uVar18 = uVar18 - 1;
    } while (bVar4);
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uStack_1d8 = (long *)CONCAT44(uStack_1d8._4_4_,0x2010000);
  puStack_1d0 = (uint *)&uStack_8e0;
  uStack_1c8 = 0;
  puVar17 = &uStack_1d8;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  FUN_109a41858(0x3ff0000000000000,0,&uStack_8e0,puVar17,0);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  iVar35 = (int)puVar17;
  if (param_5[7] != 0) {
    piVar1 = (int *)(param_5[7] + 0x14);
    do {
      iVar31 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar31 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar31 + -1 == 0) {
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      func_0x000109a848d4(param_5);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar33 = uStack_c44;
      uVar6 = uStack_c3c;
      uVar7 = uStack_c34;
      uStack_c44._4_4_ = uVar10;
      uStack_c3c._4_4_ = uVar11;
      uStack_c34._4_4_ = uVar12;
    }
  }
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  param_5[7] = 0;
  param_5[3] = 0;
  param_5[2] = 0;
  param_5[5] = 0;
  param_5[4] = 0;
  if (0 < *(int *)((long)param_5 + 4)) {
    lVar16 = 0;
    uVar18 = param_5[8];
    do {
      *(undefined4 *)(uVar18 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)((long)param_5 + 4));
  }
  param_5[1] = (ulong)puStack_8d8;
  *param_5 = uStack_8e0;
  param_5[3] = uStack_8c8;
  param_5[2] = uStack_8d0;
  param_5[5] = uStack_8b8;
  param_5[4] = uStack_8c0;
  param_5[7] = uStack_8a8;
  param_5[6] = uStack_8b0;
  puVar19 = (ulong *)param_5[9];
  puVar2 = param_5 + 10;
  iVar31 = uStack_8e0._4_4_;
  if (puVar19 != puVar2) {
    if (puVar19 != (ulong *)0x0) {
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      _free(puVar19[-1]);
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
    }
    uStack_c24._4_4_ = uVar14;
    uStack_c2c._4_4_ = uVar13;
    uStack_c34._4_4_ = uVar12;
    uStack_c3c._4_4_ = uVar11;
    uStack_c44._4_4_ = uVar10;
    uVar14 = uStack_c24._4_4_;
    uVar13 = uStack_c2c._4_4_;
    uVar12 = uStack_c34._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar10 = uStack_c44._4_4_;
    param_5[8] = (ulong)(param_5 + 1);
    param_5[9] = (ulong)puVar2;
    puVar19 = puVar2;
    iVar31 = uStack_8e0._4_4_;
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  if (iVar31 < 3) {
    puVar17 = (undefined8 *)((ulong)&uStack_8e0 | 4);
    *puVar19 = *puStack_898;
    puVar19[1] = puStack_898[1];
    uStack_8e0 = CONCAT44(uStack_8e0._4_4_,0x42ff0000);
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    *(undefined8 *)((long)puVar17 + 0x34) = 0;
    *(undefined8 *)((long)puVar17 + 0x2c) = 0;
    if (puStack_898 != &uStack_890) {
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      _free(puStack_898[-1]);
      uVar14 = uStack_c24._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
    }
  }
  else {
    param_5[8] = (ulong)ppuStack_8a0;
    param_5[9] = (ulong)puStack_898;
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  puVar15 = (uint *)&uStack_e40;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  FUN_1094c5614(puVar15);
  uVar9 = uStack_c24;
  uVar8 = uStack_c2c;
  uVar7 = uStack_c34;
  uVar6 = uStack_c3c;
  uVar33 = uStack_c44;
  if (lStack_ba8 != 0) {
    piVar1 = (int *)(lStack_ba8 + 0x14);
    do {
      iVar31 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar31 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar31 + -1 == 0) {
      puVar15 = &uStack_be0;
      uVar10 = uStack_c44._4_4_;
      uStack_c44 = uVar33;
      uVar11 = uStack_c3c._4_4_;
      uStack_c3c = uVar6;
      uVar12 = uStack_c34._4_4_;
      uStack_c34 = uVar7;
      uVar13 = uStack_c2c._4_4_;
      uStack_c2c = uVar8;
      uVar14 = uStack_c24._4_4_;
      uStack_c24 = uVar9;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      func_0x000109a848d4(puVar15);
      uVar9 = uStack_c24;
      uVar8 = uStack_c2c;
      uVar7 = uStack_c34;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar33 = uStack_c44;
      uVar6 = uStack_c3c;
      uStack_c44._4_4_ = uVar10;
      uStack_c3c._4_4_ = uVar11;
    }
  }
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  lStack_ba8 = 0;
  uStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bb8 = 0;
  uStack_bc0 = 0;
  if (0 < iStack_bdc) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_ba0 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_bdc);
  }
  uVar33 = uStack_c44;
  uVar6 = uStack_c3c;
  uVar7 = uStack_c34;
  uVar8 = uStack_c2c;
  uVar9 = uStack_c24;
  if (puStack_b98 != auStack_b90 && puStack_b98 != (undefined1 *)0x0) {
    puVar15 = *(uint **)(puStack_b98 + -8);
    uStack_c44._4_4_ = uVar10;
    uStack_c3c._4_4_ = uVar11;
    uStack_c34._4_4_ = uVar12;
    uStack_c2c._4_4_ = uVar13;
    uStack_c24._4_4_ = uVar14;
    _free(puVar15);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar12 = uStack_c34._4_4_;
    uVar13 = uStack_c2c._4_4_;
    uVar14 = uStack_c24._4_4_;
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar33 = uStack_c34;
  uVar6 = uStack_c2c;
  uVar7 = uStack_c24;
  if (lStack_b48 != 0) {
    piVar1 = (int *)(lStack_b48 + 0x14);
    do {
      iVar31 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar31 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar31 + -1 == 0) {
      puVar15 = &uStack_b80;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      func_0x000109a848d4(puVar15);
      uVar7 = uStack_c24;
      uVar6 = uStack_c2c;
      uVar33 = uStack_c34;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar14 = uStack_c24._4_4_;
    }
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar7;
  uStack_c2c = uVar6;
  uStack_c34 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  lStack_b48 = 0;
  uStack_b68 = 0;
  uStack_b64 = 0;
  uStack_b70 = 0;
  uStack_b6c = 0;
  uStack_b58 = 0;
  uStack_b54 = 0;
  uStack_b60 = 0;
  uStack_b5c = 0;
  if (0 < iStack_b7c) {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_b40 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_b7c);
  }
  uVar33 = uStack_c44;
  uVar6 = uStack_c3c;
  uVar7 = uStack_c34;
  uVar8 = uStack_c2c;
  uVar9 = uStack_c24;
  if (puStack_b38 != &uStack_b30 && puStack_b38 != (undefined8 *)0x0) {
    puVar15 = (uint *)puStack_b38[-1];
    uStack_c44._4_4_ = uVar10;
    uStack_c3c._4_4_ = uVar11;
    uStack_c34._4_4_ = uVar12;
    uStack_c2c._4_4_ = uVar13;
    uStack_c24._4_4_ = uVar14;
    _free(puVar15);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar12 = uStack_c34._4_4_;
    uVar13 = uStack_c2c._4_4_;
    uVar14 = uStack_c24._4_4_;
  }
LAB_1094bdc00:
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar33 = uStack_c34;
  uVar6 = uStack_c2c;
  uVar7 = uStack_c24;
  if (lStack_ac8 != 0) {
    piVar1 = (int *)(lStack_ac8 + 0x14);
    do {
      iVar31 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar31 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar31 + -1 == 0) {
      puVar15 = &uStack_b00;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      func_0x000109a848d4(puVar15);
      uVar7 = uStack_c24;
      uVar6 = uStack_c2c;
      uVar33 = uStack_c34;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar14 = uStack_c24._4_4_;
    }
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar7;
  uStack_c2c = uVar6;
  uStack_c34 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  lStack_ac8 = 0;
  uStack_ae8 = 0;
  uStack_ae4 = 0;
  uStack_af0 = 0;
  uStack_aec = 0;
  uStack_ad8 = 0;
  uStack_ad4 = 0;
  uStack_ae0 = 0;
  uStack_adc = 0;
  if (0 < (int)uStack_afc) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_ac0 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)uStack_afc);
  }
  uVar33 = uStack_c44;
  uVar6 = uStack_c3c;
  uVar7 = uStack_c34;
  uVar8 = uStack_c2c;
  uVar9 = uStack_c24;
  if (puStack_ab8 != &uStack_ab0 && puStack_ab8 != (undefined8 *)0x0) {
    puVar15 = (uint *)puStack_ab8[-1];
    uStack_c44._4_4_ = uVar10;
    uStack_c3c._4_4_ = uVar11;
    uStack_c34._4_4_ = uVar12;
    uStack_c2c._4_4_ = uVar13;
    uStack_c24._4_4_ = uVar14;
    _free(puVar15);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar12 = uStack_c34._4_4_;
    uVar13 = uStack_c2c._4_4_;
    uVar14 = uStack_c24._4_4_;
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar33 = uStack_c34;
  uVar6 = uStack_c2c;
  uVar7 = uStack_c24;
  if (lStack_a68 != 0) {
    piVar1 = (int *)(lStack_a68 + 0x14);
    do {
      iVar31 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar31 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar31 + -1 == 0) {
      puVar15 = &uStack_aa0;
      uVar33 = uStack_c44;
      uStack_c44._4_4_ = uVar10;
      uVar6 = uStack_c3c;
      uStack_c3c._4_4_ = uVar11;
      uVar7 = uStack_c34;
      uStack_c34._4_4_ = uVar12;
      uVar8 = uStack_c2c;
      uStack_c2c._4_4_ = uVar13;
      uVar9 = uStack_c24;
      uStack_c24._4_4_ = uVar14;
      func_0x000109a848d4(puVar15);
      uVar7 = uStack_c24;
      uVar6 = uStack_c2c;
      uVar33 = uStack_c34;
      uVar11 = uStack_c3c._4_4_;
      uVar10 = uStack_c44._4_4_;
      uVar12 = uStack_c34._4_4_;
      uVar13 = uStack_c2c._4_4_;
      uVar14 = uStack_c24._4_4_;
    }
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar7;
  uStack_c2c = uVar6;
  uStack_c34 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  lStack_a68 = 0;
  uStack_a88 = 0;
  uStack_a84 = 0;
  uStack_a90 = 0;
  uStack_a8c = 0;
  uStack_a78 = 0;
  uStack_a74 = 0;
  uStack_a80 = 0;
  uStack_a7c = 0;
  if (0 < (int)uStack_a9c) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_a60 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)uStack_a9c);
  }
  uVar33 = uStack_c44;
  uVar6 = uStack_c3c;
  uVar7 = uStack_c34;
  uVar8 = uStack_c2c;
  uVar9 = uStack_c24;
  if (puStack_a58 != &uStack_a50 && puStack_a58 != (undefined8 *)0x0) {
    puVar15 = (uint *)puStack_a58[-1];
    uStack_c44._4_4_ = uVar10;
    uStack_c3c._4_4_ = uVar11;
    uStack_c34._4_4_ = uVar12;
    uStack_c2c._4_4_ = uVar13;
    uStack_c24._4_4_ = uVar14;
    _free(puVar15);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar12 = uStack_c34._4_4_;
    uVar13 = uStack_c2c._4_4_;
    uVar14 = uStack_c24._4_4_;
  }
  uStack_c24._4_4_ = uVar14;
  uStack_c2c._4_4_ = uVar13;
  uStack_c34._4_4_ = uVar12;
  uStack_c3c._4_4_ = uVar11;
  uStack_c44._4_4_ = uVar10;
  uStack_c24 = uVar9;
  uStack_c2c = uVar8;
  uStack_c34 = uVar7;
  uStack_c3c = uVar6;
  uStack_c44 = uVar33;
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  ___stack_chk_fail();
  uVar14 = uStack_c24._4_4_;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar33 = uStack_c44;
  uVar6 = uStack_c3c;
  uVar7 = uStack_c34;
  uVar8 = uStack_c2c;
  uVar9 = uStack_c24;
  if (iVar35 == 0) goto LAB_1094be100;
  uStack_c44._4_4_ = uVar10;
  uStack_c3c._4_4_ = uVar11;
  uStack_c34._4_4_ = uVar12;
  uStack_c2c._4_4_ = uVar13;
  uStack_c24._4_4_ = uVar14;
  func_0x000104bd46a0(puVar15);
  uVar33 = uStack_c24;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar33;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  func_0x00010567aa40(&uStack_1d8);
  uVar33 = uStack_c24;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar33;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  FUN_1094c52c0(&uStack_600);
  uVar33 = uStack_c24;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar33;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  func_0x00010567aa40(&uStack_5a0);
  uVar33 = uStack_c24;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar33;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  func_0x00010567aa40(&uStack_540);
  uVar33 = uStack_c24;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar33;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  func_0x00010567aa40(&uStack_4e0);
  uVar33 = uStack_c24;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar33;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  func_0x00010567aa40(&uStack_480);
  uVar33 = uStack_c24;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar33;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  func_0x00010567aa40(&uStack_420);
  uVar33 = uStack_c24;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar14 = uStack_c24._4_4_;
  uStack_c24 = uVar33;
  uVar33 = uStack_c44;
  uStack_c44._4_4_ = uVar10;
  uVar6 = uStack_c3c;
  uStack_c3c._4_4_ = uVar11;
  uVar7 = uStack_c34;
  uStack_c34._4_4_ = uVar12;
  uVar8 = uStack_c2c;
  uStack_c2c._4_4_ = uVar13;
  uVar9 = uStack_c24;
  uStack_c24._4_4_ = uVar14;
  func_0x00010567aa40(&uStack_3b8);
  uVar9 = uStack_c24;
  uVar13 = uStack_c2c._4_4_;
  uVar12 = uStack_c34._4_4_;
  uVar11 = uStack_c3c._4_4_;
  uVar10 = uStack_c44._4_4_;
  uVar33 = uStack_c44;
  uVar6 = uStack_c3c;
  uVar7 = uStack_c34;
  uVar8 = uStack_c2c;
  uStack_c44._4_4_ = uVar10;
  uStack_c3c._4_4_ = uVar11;
  uStack_c34._4_4_ = uVar12;
  uStack_c2c._4_4_ = uVar13;
  do {
    uStack_c24 = uVar9;
    uStack_c2c = uVar8;
    uStack_c34 = uVar7;
    uStack_c3c = uVar6;
    uStack_c44 = uVar33;
    uVar14 = uStack_c24._4_4_;
    uVar13 = uStack_c2c._4_4_;
    uVar12 = uStack_c34._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar10 = uStack_c44._4_4_;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x00010567aa40(&uStack_358);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x00010567aa40(&uStack_a40);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x00010567aa40(&uStack_8e0);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x00010567aa40(&uStack_2f8);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x00010567aa40(&uStack_298);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x00010567aa40(&uStack_238);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x00010567aa40(puStack_f90 + 0x2c);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x00010567aa40(&uStack_ca8);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x00010567aa40(&uStack_d08);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uStack_1d8 = plStack_ea8;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    FUN_1093702c4(&uStack_1d8);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x00010567aa40(&uStack_d80);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x00010567aa40(&uStack_de0);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x00010567aa40(&uStack_e40);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x00010567aa40(&uStack_be0);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x00010567aa40(&uStack_b80);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x00010567aa40(&uStack_b00);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uStack_c44 = uVar33;
    uVar11 = uStack_c3c._4_4_;
    uStack_c3c = uVar6;
    uVar12 = uStack_c34._4_4_;
    uStack_c34 = uVar7;
    uVar13 = uStack_c2c._4_4_;
    uStack_c2c = uVar8;
    uVar14 = uStack_c24._4_4_;
    uStack_c24 = uVar9;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    func_0x00010567aa40(&uStack_aa0);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
    uVar10 = uStack_c44._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar12 = uStack_c34._4_4_;
    uVar13 = uStack_c2c._4_4_;
    uVar14 = uStack_c24._4_4_;
LAB_1094be100:
    uStack_c24._4_4_ = uVar14;
    uStack_c2c._4_4_ = uVar13;
    uStack_c34._4_4_ = uVar12;
    uStack_c3c._4_4_ = uVar11;
    uStack_c44._4_4_ = uVar10;
    uStack_c24 = uVar9;
    uStack_c2c = uVar8;
    uStack_c34 = uVar7;
    uStack_c3c = uVar6;
    uStack_c44 = uVar33;
    uVar14 = uStack_c24._4_4_;
    uVar13 = uStack_c2c._4_4_;
    uVar12 = uStack_c34._4_4_;
    uVar11 = uStack_c3c._4_4_;
    uVar10 = uStack_c44._4_4_;
    uVar33 = uStack_c44;
    uStack_c44._4_4_ = uVar10;
    uVar6 = uStack_c3c;
    uStack_c3c._4_4_ = uVar11;
    uVar7 = uStack_c34;
    uStack_c34._4_4_ = uVar12;
    uVar8 = uStack_c2c;
    uStack_c2c._4_4_ = uVar13;
    uVar9 = uStack_c24;
    uStack_c24._4_4_ = uVar14;
    __Unwind_Resume(puVar15);
    uVar9 = uStack_c24;
    uVar8 = uStack_c2c;
    uVar7 = uStack_c34;
    uVar6 = uStack_c3c;
    uVar33 = uStack_c44;
  } while( true );
}



/* Entry: 1094be120; end: 1094c2937;  */

/* WARNING: Removing unreachable block (ram,0x0001094be278) */
/* WARNING: Removing unreachable block (ram,0x0001094be27c) */
/* WARNING: Removing unreachable block (ram,0x0001094be284) */
/* WARNING: Removing unreachable block (ram,0x0001094be28c) */
/* WARNING: Removing unreachable block (ram,0x0001094be290) */
/* WARNING: Removing unreachable block (ram,0x0001094be2b0) */
/* WARNING: Removing unreachable block (ram,0x0001094be2b8) */
/* WARNING: Removing unreachable block (ram,0x0001094be2cc) */
/* WARNING: Removing unreachable block (ram,0x0001094be2dc) */
/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_1094be120(long *param_1,undefined8 *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
             ulong *param_6)

{
  undefined8 ***pppuVar1;
  int *piVar2;
  undefined8 ******ppppppuVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  double dVar8;
  undefined1 auVar9 [8];
  undefined8 ***pppuVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined8 *****pppppuVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  uint *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  uint **ppuVar22;
  long lVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  int iVar28;
  undefined8 uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint uStack_c20;
  int iStack_c1c;
  undefined4 uStack_c18;
  undefined4 uStack_c14;
  undefined4 uStack_c10;
  undefined4 uStack_c0c;
  undefined4 uStack_c08;
  undefined4 uStack_c04;
  undefined4 uStack_c00;
  undefined4 uStack_bfc;
  undefined4 uStack_bf8;
  undefined4 uStack_bf4;
  undefined4 uStack_bf0;
  undefined4 uStack_bec;
  ulong uStack_be8;
  uint *puStack_be0;
  undefined8 *puStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined4 uStack_bc0;
  undefined8 uStack_bbc;
  undefined4 uStack_bb4;
  undefined4 uStack_bb0;
  undefined4 uStack_bac;
  undefined4 uStack_ba8;
  undefined4 uStack_ba4;
  undefined4 uStack_ba0;
  undefined4 uStack_b9c;
  undefined4 uStack_b98;
  undefined4 uStack_b94;
  undefined4 uStack_b90;
  undefined4 uStack_b8c;
  long lStack_b88;
  int *piStack_b80;
  undefined8 *puStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined4 uStack_b60;
  int iStack_b5c;
  int iStack_b58;
  undefined4 uStack_b54;
  undefined4 uStack_b50;
  undefined4 uStack_b4c;
  undefined4 uStack_b48;
  undefined4 uStack_b44;
  undefined4 uStack_b40;
  undefined4 uStack_b3c;
  undefined4 uStack_b38;
  undefined4 uStack_b34;
  undefined4 uStack_b30;
  undefined4 uStack_b2c;
  long lStack_b28;
  int *piStack_b20;
  undefined8 *puStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  undefined4 uStack_ae8;
  undefined4 uStack_ae4;
  undefined4 uStack_ae0;
  undefined4 uStack_adc;
  undefined4 uStack_ad8;
  undefined4 uStack_ad4;
  undefined4 uStack_ad0;
  undefined4 uStack_acc;
  long lStack_ac8;
  int *piStack_ac0;
  undefined8 *puStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined4 uStack_aa0;
  int iStack_a9c;
  undefined8 uStack_a98;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  undefined4 uStack_a88;
  undefined4 uStack_a84;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  undefined4 uStack_a78;
  undefined4 uStack_a74;
  undefined4 uStack_a70;
  undefined4 uStack_a6c;
  long lStack_a68;
  undefined8 *puStack_a60;
  undefined8 *puStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined4 uStack_a40;
  int iStack_a3c;
  undefined8 uStack_a38;
  undefined4 uStack_a30;
  undefined4 uStack_a2c;
  undefined4 uStack_a28;
  undefined4 uStack_a24;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  undefined4 uStack_a18;
  undefined4 uStack_a14;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  long lStack_a08;
  undefined8 *puStack_a00;
  undefined8 *puStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined4 uStack_9e0;
  int iStack_9dc;
  undefined8 uStack_9d8;
  undefined4 uStack_9d0;
  undefined4 uStack_9cc;
  undefined4 uStack_9c8;
  undefined4 uStack_9c4;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  undefined4 uStack_9b8;
  undefined4 uStack_9b4;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  long lStack_9a8;
  undefined8 *puStack_9a0;
  undefined8 *puStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined4 *puStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  long lStack_948;
  uint *puStack_940;
  undefined8 *puStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  uint uStack_920;
  int iStack_91c;
  uint uStack_918;
  int iStack_914;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  ulong uStack_8e8;
  uint *puStack_8e0;
  undefined8 *puStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  uint uStack_8c0;
  int iStack_8bc;
  undefined4 uStack_8b8;
  int iStack_8b4;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  long lStack_888;
  uint *puStack_880;
  uint **ppuStack_878;
  uint *puStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  ulong uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  ulong uStack_828;
  int *piStack_820;
  undefined8 *puStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  int iStack_7e0;
  int iStack_7dc;
  undefined4 uStack_7d8;
  undefined8 uStack_7d4;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  long lStack_7a0;
  long lStack_798;
  undefined8 *puStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined4 uStack_778;
  undefined8 uStack_774;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined4 uStack_748;
  undefined4 uStack_744;
  long lStack_740;
  long lStack_738;
  undefined8 *puStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined4 uStack_708;
  int iStack_704;
  int iStack_700;
  int iStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  long lStack_6d0;
  int *piStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined8 **ppuStack_670;
  undefined8 *puStack_668;
  undefined8 *puStack_660;
  undefined8 *puStack_658;
  undefined8 *puStack_650;
  undefined8 ***pppuStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  ulong uStack_5f8;
  uint *puStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  uint uStack_5d0;
  int iStack_5cc;
  uint uStack_5c8;
  int iStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  ulong uStack_598;
  uint *puStack_590;
  uint **ppuStack_588;
  uint *puStack_580;
  undefined8 uStack_578;
  undefined4 uStack_568;
  int iStack_564;
  undefined8 uStack_560;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  long lStack_530;
  undefined8 *puStack_528;
  undefined8 *puStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  uint uStack_508;
  int iStack_504;
  undefined8 uStack_500;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  long lStack_4d0;
  undefined8 *puStack_4c8;
  uint **ppuStack_4c0;
  uint *puStack_4b8;
  undefined8 uStack_4b0;
  uint uStack_4a8;
  int iStack_4a4;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  ulong uStack_470;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined4 auStack_448 [2];
  uint *puStack_440;
  undefined8 uStack_438;
  undefined1 auStack_430 [8];
  undefined1 auStack_428 [8];
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  ulong uStack_3f8;
  uint *puStack_3f0;
  uint **ppuStack_3e8;
  uint *apuStack_3e0 [2];
  undefined1 auStack_3d0 [96];
  undefined1 auStack_370 [96];
  undefined8 auStack_310 [8];
  uint uStack_2d0;
  undefined1 auStack_2cc [8];
  int iStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  long lStack_298;
  uint *puStack_290;
  uint **ppuStack_288;
  uint *apuStack_280 [2];
  undefined1 auStack_270 [96];
  undefined1 auStack_210 [96];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long lStack_178;
  undefined8 ******appppppuStack_170 [4];
  undefined1 auStack_150 [96];
  undefined1 auStack_f0 [96];
  uint auStack_90 [2];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_640 = 0;
  pppuStack_648 = (undefined8 ***)0x0;
  uStack_638 = 0;
  uStack_420 = 0;
  uStack_41c = 0;
  auStack_430._0_4_ = 0x1010000;
  auStack_428._0_4_ = (undefined4)param_5;
  auStack_428._4_4_ = (undefined4)((ulong)param_5 >> 0x20);
  auStack_1b0._0_4_ = 0x2050000;
  auStack_1a8 = (undefined1  [8])&pppuStack_648;
  uStack_1a0 = 0;
  uStack_19c = 0;
  puVar13 = (undefined4 *)auStack_430;
  FUN_109a3dcec(puVar13,auStack_1b0);
  pppuVar10 = pppuStack_648;
  uStack_6a8._0_4_ = 0x42ff0000;
  puStack_668 = (undefined8 *)&uStack_6a0;
  ppuStack_670 = (undefined8 **)0x0;
  uStack_674 = 0;
  uStack_67c = 0;
  uStack_678 = 0;
  uStack_684 = 0;
  uStack_680 = 0;
  uStack_69c = 0;
  uStack_698 = 0;
  uStack_6a8._4_4_ = 0;
  uStack_6a0 = 0;
  uStack_68c = 0;
  uStack_688 = 0;
  uStack_694 = 0;
  uStack_690 = 0;
  puStack_650 = (undefined8 *)0x0;
  puStack_658 = (undefined8 *)0x0;
  lVar17 = *param_1;
  puStack_660 = &puStack_658;
  if (*(char *)(lVar17 + 0x2e) == '\x01') {
    auStack_1b0._0_4_ = 0;
    auStack_1b0._4_4_ = 0x3ff00000;
    auStack_1a8._0_4_ = 0;
    auStack_1a8._4_4_ = 0;
    uStack_198 = 0;
    uStack_194 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    FUN_109a7cf94(auStack_430,auStack_1b0,pppuStack_648);
    (**(code **)(*(long *)CONCAT44(auStack_430._4_4_,auStack_430._0_4_) + 0x18))
              ((long *)CONCAT44(auStack_430._4_4_,auStack_430._0_4_),auStack_430,&uStack_6a8,
               0xffffffff);
    FUN_10918eb6c(auStack_430);
  }
  else {
    pppuVar1 = pppuStack_648 + 0x24;
    if ((undefined8 ***)&uStack_6a8 != pppuVar1) {
      if (pppuStack_648[0x2b] != (undefined8 **)0x0) {
        piVar2 = (int *)((long)pppuStack_648[0x2b] + 0x14);
        do {
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = *piVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      ppuStack_670 = (undefined8 **)0x0;
      uStack_690 = 0;
      uStack_68c = 0;
      uStack_698 = 0;
      uStack_694 = 0;
      uStack_680 = 0;
      uStack_67c = 0;
      uStack_688 = 0;
      uStack_684 = 0;
      uStack_6a8._0_4_ = *(undefined4 *)pppuVar1;
      if (*(int *)((long)pppuStack_648 + 0x124) < 3) {
        uStack_6a0 = SUB84(pppuStack_648[0x25],0);
        uStack_69c = (undefined4)((ulong)pppuStack_648[0x25] >> 0x20);
        puStack_658 = *pppuStack_648[0x2d];
        puStack_650 = pppuStack_648[0x2d][1];
        uStack_6a8._4_4_ = *(int *)((long)pppuStack_648 + 0x124);
      }
      else {
        puVar13 = (undefined4 *)&uStack_6a8;
        func_0x000109a84868(puVar13,pppuVar1);
      }
      uStack_690 = SUB84(pppuVar10[0x27],0);
      uStack_68c = (undefined4)((ulong)pppuVar10[0x27] >> 0x20);
      uStack_698 = SUB84(pppuVar10[0x26],0);
      uStack_694 = (undefined4)((ulong)pppuVar10[0x26] >> 0x20);
      uStack_680 = SUB84(pppuVar10[0x29],0);
      uStack_67c = (undefined4)((ulong)pppuVar10[0x29] >> 0x20);
      uStack_688 = SUB84(pppuVar10[0x28],0);
      uStack_684 = (undefined4)((ulong)pppuVar10[0x28] >> 0x20);
      ppuStack_670 = pppuVar10[0x2b];
      uStack_678 = SUB84(pppuVar10[0x2a],0);
      uStack_674 = (undefined4)((ulong)pppuVar10[0x2a] >> 0x20);
      lVar17 = *param_1;
    }
    if (*(int *)(lVar17 + 0x3c) == 1) {
      auStack_1a8 = (undefined1  [8])(pppuStack_648 + 0xc);
      uStack_420 = 0;
      uStack_41c = 0;
      auStack_430._0_4_ = 0x1010000;
      auStack_428 = (undefined1  [8])&uStack_6a8;
      uStack_1a0 = 0;
      uStack_19c = 0;
      auStack_1b0._0_4_ = 0x1010000;
      uStack_2d0 = 0x2010000;
      uStack_2c0 = 0;
      uStack_2bc = 0;
      unique0x1000d47e = (uint *)auStack_428;
      FUN_109a91d90();
      FUN_109a293c4(auStack_430,auStack_1b0,&uStack_2d0,puVar13,0xffffffff,&PTR_FUN_1132e8bd0,0,0);
    }
  }
  uStack_420 = 0;
  uStack_41c = 0;
  auStack_430._0_4_ = 0x1010000;
  auStack_1b0._0_4_ = 0x2010000;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_2d0 = 7;
  auStack_2cc._0_4_ = 7;
  auStack_428 = (undefined1  [8])&uStack_6a8;
  auStack_1a8 = (undefined1  [8])&uStack_6a8;
  FUN_109b44a6c(0,0,auStack_430,auStack_1b0,&uStack_2d0,4);
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2d0 = 0x1010000;
  uStack_4a8 = 0x2010000;
  uStack_498 = 0;
  uStack_494 = 0;
  unique0x1000d886 = (uint *)&uStack_6a8;
  uStack_4a0 = (uint *)&uStack_6a8;
  FUN_109a82ac8(auStack_430,3,3,0);
  uStack_4f8 = 0;
  uStack_4f4 = 0;
  uStack_508 = 0xc1060000;
  auStack_1a8._0_4_ = 0xffffffff;
  auStack_1a8._4_4_ = 0x7fefffff;
  auStack_1b0._0_4_ = 0xffffffff;
  auStack_1b0._4_4_ = 0x7fefffff;
  uStack_198 = 0xffffffff;
  uStack_194 = 0x7fefffff;
  uStack_1a0 = 0xffffffff;
  uStack_19c = 0x7fefffff;
  uStack_568 = 0xffffffff;
  iStack_564 = -1;
  uStack_500 = (uint *)auStack_430;
  FUN_109b32fd4(0,&uStack_2d0,&uStack_4a8,&uStack_508,&uStack_568,1,0,auStack_1b0);
  FUN_10918eb6c(auStack_430);
  uVar29 = NEON_rev64(*puStack_668,4);
  auStack_1b0._0_4_ = (undefined4)uVar29;
  auStack_1b0._4_4_ = (undefined4)((ulong)uVar29 >> 0x20);
  FUN_109a829e8(auStack_430,auStack_1b0,5);
  uStack_708 = 0x42ff0000;
  piStack_6c8 = &iStack_700;
  iStack_6fc = 0;
  uStack_6f8 = 0;
  iStack_704 = 0;
  iStack_700 = 0;
  lStack_6d0 = 0;
  uStack_6d4 = 0;
  uStack_6dc = 0;
  uStack_6d8 = 0;
  uStack_6e4 = 0;
  uStack_6e0 = 0;
  uStack_6ec = 0;
  uStack_6e8 = 0;
  uStack_6f4 = 0;
  uStack_6f0 = 0;
  uStack_6b0 = 0;
  uStack_6b8 = 0;
  puStack_6c0 = &uStack_6b8;
  (**(code **)(*(long *)CONCAT44(auStack_430._4_4_,auStack_430._0_4_) + 0x18))
            ((long *)CONCAT44(auStack_430._4_4_,auStack_430._0_4_),auStack_430,&uStack_708,
             0xffffffff);
  FUN_10918eb6c(auStack_430);
  uVar29 = NEON_rev64(CONCAT44(iStack_6fc + -4,iStack_700 + -4),4);
  uStack_718 = NEON_smin(uVar29,0x400000004,4);
  iVar30 = (int)uVar29;
  iVar28 = (int)((ulong)uVar29 >> 0x20);
  uStack_710 = CONCAT44(iVar28 + -4 + (4 - iVar28) * 2 * (uint)(iVar28 < 4),
                        iVar30 + -4 + (4 - iVar30) * 2 * (uint)(iVar30 < 4));
  auStack_1b0._0_4_ = 0;
  auStack_1b0._4_4_ = 0x3ff00000;
  auStack_1a8._0_4_ = 0;
  auStack_1a8._4_4_ = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  FUN_109a852c8(auStack_430,&uStack_708,&uStack_718);
  FUN_109a48880(auStack_430,auStack_1b0);
  if (uStack_3f8 != 0) {
    piVar2 = (int *)(uStack_3f8 + 0x14);
    do {
      iVar30 = *piVar2;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = iVar30 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar30 + -1 == 0) {
      func_0x000109a848d4(auStack_430);
    }
  }
  uStack_3f8 = 0;
  uStack_418 = 0;
  uStack_414 = 0;
  uStack_420 = 0;
  uStack_41c = 0;
  uStack_408 = 0;
  uStack_404 = 0;
  uStack_410 = 0;
  uStack_40c = 0;
  if (0 < (int)auStack_430._4_4_) {
    lVar17 = 0;
    do {
      puStack_3f0[lVar17] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)auStack_430._4_4_);
  }
  if (ppuStack_3e8 != apuStack_3e0 && ppuStack_3e8 != (uint **)0x0) {
    _free(ppuStack_3e8[-1]);
  }
  uStack_420 = 0;
  uStack_41c = 0;
  auStack_430._0_4_ = 0x1010000;
  auStack_1b0._0_4_ = 0x2010000;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_2d0 = 0;
  auStack_2cc._0_4_ = 0;
  puVar14 = auStack_430;
  auStack_428 = (undefined1  [8])&uStack_708;
  auStack_1a8 = (undefined1  [8])&uStack_708;
  FUN_109b44a6c(0x4010000000000000,0x4010000000000000,puVar14,auStack_1b0,&uStack_2d0,0);
  uStack_420 = 0;
  uStack_41c = 0;
  auStack_430._0_4_ = 0x1010000;
  auStack_428 = (undefined1  [8])&uStack_6a8;
  uStack_1a0 = 0;
  uStack_19c = 0;
  auStack_1b0._0_4_ = 0x1010000;
  uStack_2d0 = 0x2010000;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_4a8 = 0;
  iStack_4a4 = 0x3ff00000;
  unique0x1000d496 = (uint *)auStack_428;
  auStack_1a8 = (undefined1  [8])&uStack_708;
  FUN_109a91d90();
  FUN_109a293c4(auStack_430,auStack_1b0,&uStack_2d0,puVar14,0xffffffff,&PTR_FUN_1132e8c90,1,
                &uStack_4a8);
  uStack_778 = 0x42ff0000;
  unique0x00023800 = &uStack_778;
  lStack_738 = (long)&uStack_774 + 4;
  uStack_76c = 0;
  uStack_768 = 0;
  uStack_774 = 0;
  uStack_75c = 0;
  uStack_758 = 0;
  uStack_764 = 0;
  uStack_760 = 0;
  uStack_74c = 0;
  uStack_754 = 0;
  uStack_750 = 0;
  lStack_740 = 0;
  uStack_748 = 0;
  uStack_744 = 0;
  uStack_720 = 0;
  uStack_728 = 0;
  uStack_7d8 = 0x42ff0000;
  lStack_798 = (long)&uStack_7d4 + 4;
  uStack_7cc = 0;
  uStack_7c8 = 0;
  uStack_7d4 = 0;
  uStack_7bc = 0;
  uStack_7b8 = 0;
  uStack_7c4 = 0;
  uStack_7c0 = 0;
  uStack_7ac = 0;
  uStack_7b4 = 0;
  uStack_7b0 = 0;
  lStack_7a0 = 0;
  uStack_7a8 = 0;
  uStack_7a4 = 0;
  uStack_780 = 0;
  uStack_788 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  auStack_1b0._0_4_ = 0x1010000;
  auStack_1a8._0_4_ = (undefined4)param_3;
  auStack_1a8._4_4_ = (undefined4)((ulong)param_3 >> 0x20);
  uStack_2d0 = 0x2010000;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  puVar25 = (uint *)(param_1 + 0x30);
  uStack_498 = 0;
  uStack_494 = 0;
  uStack_4a8 = 0x1010000;
  uStack_508 = (uint)param_1[0x11];
  iStack_504 = (int)((ulong)param_1[0x11] >> 0x20);
  uStack_418 = 0;
  uStack_414 = 0;
  uStack_420 = 0;
  uStack_41c = 0;
  auStack_428._0_4_ = 0;
  auStack_428._4_4_ = 0;
  auStack_430._0_4_ = 0;
  auStack_430._4_4_ = 0;
  puStack_790 = &uStack_788;
  puStack_730 = &uStack_728;
  uStack_4a0 = puVar25;
  FUN_109b1e030(auStack_1b0,&uStack_2d0,&uStack_4a8,&uStack_508,0x12,0,auStack_430);
  uStack_1a0 = 0;
  uStack_19c = 0;
  auStack_1b0._0_4_ = 0x1010000;
  auStack_1a8 = (undefined1  [8])&uStack_6a8;
  uStack_2d0 = 0x2010000;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_498 = 0;
  uStack_494 = 0;
  uStack_4a8 = 0x1010000;
  uStack_508 = (uint)param_1[0x11];
  iStack_504 = (int)((ulong)param_1[0x11] >> 0x20);
  uStack_418 = 0;
  uStack_414 = 0;
  uStack_420 = 0;
  uStack_41c = 0;
  auStack_428._0_4_ = 0;
  auStack_428._4_4_ = 0;
  auStack_430._0_4_ = 0;
  auStack_430._4_4_ = 0;
  unique0x1000cd4e = &uStack_7d8;
  uStack_4a0 = puVar25;
  FUN_109b1e030(auStack_1b0,&uStack_2d0,&uStack_4a8,&uStack_508,0x12,0,auStack_430);
  uVar29 = NEON_rev64(*(undefined8 *)param_2[8],4);
  lVar17 = param_1[0x10];
  uStack_7e8 = NEON_smax(lVar17,0,4);
  iVar30 = (int)((ulong)lVar17 >> 0x20);
  uVar29 = NEON_smin(uVar29,CONCAT44((int)((ulong)param_1[0x11] >> 0x20) + iVar30,
                                     (int)param_1[0x11] + (int)lVar17),4);
  iStack_7e0 = (int)uVar29 - (int)uStack_7e8;
  iStack_7dc = (int)((ulong)uVar29 >> 0x20) - (int)((ulong)uStack_7e8 >> 0x20);
  if ((iStack_7e0 < 1) || (iStack_7dc < 1)) {
    uStack_7e8 = 0;
    iStack_7e0 = 0;
    iStack_7dc = 0;
  }
  iVar28 = (int)uStack_7e8 - (int)lVar17;
  iVar30 = (int)((ulong)uStack_7e8 >> 0x20) - iVar30;
  iVar31 = iStack_7e0 + iVar28;
  iVar32 = iStack_7dc + iVar30;
  uStack_7f8 = NEON_smin(CONCAT44(iVar32,iVar31),CONCAT44(iVar30,iVar28),4);
  uStack_7f0 = CONCAT44((iVar30 - iVar32) + (iVar32 - iVar30) * 2 * (uint)(iVar30 < iVar32),
                        (iVar28 - iVar31) + (iVar31 - iVar28) * 2 * (uint)(iVar28 < iVar31));
  if (*(int *)(*param_1 + 0x3c) != 2) {
    param_6 = (ulong *)(param_1 + 4);
  }
  piStack_820 = (int *)((ulong)&uStack_860 | 8);
  uStack_858 = param_6[1];
  uStack_860 = *param_6;
  uStack_848 = param_6[3];
  uStack_850 = param_6[2];
  iVar30 = *(int *)((long)param_6 + 4);
  uStack_838 = param_6[5];
  uStack_840 = param_6[4];
  uStack_828 = param_6[7];
  uStack_830 = param_6[6];
  uStack_808 = 0;
  uStack_810 = 0;
  if (param_6[7] != 0) {
    piVar2 = (int *)(param_6[7] + 0x14);
    do {
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    iVar30 = *(int *)((long)param_6 + 4);
  }
  puStack_818 = &uStack_810;
  if (iVar30 < 3) {
    uStack_810 = *(undefined8 *)param_6[9];
    uStack_808 = ((undefined8 *)param_6[9])[1];
  }
  else {
    uStack_860 = uStack_860 & 0xffffffff;
    func_0x000109a84868(&uStack_860);
  }
  FUN_109a852c8(auStack_430,&uStack_860,&uStack_7e8);
  uStack_8c0 = 0x42ff0000;
  iStack_8b4 = 0;
  uStack_8b0 = 0;
  iStack_8bc = 0;
  uStack_8b8 = 0;
  auStack_1a8 = (undefined1  [8])&uStack_8c0;
  puVar24 = (uint *)((ulong)auStack_1a8 | 8);
  uStack_8a4 = 0;
  uStack_8a0 = 0;
  uStack_8ac = 0;
  uStack_8a8 = 0;
  uStack_894 = 0;
  uStack_89c = 0;
  uStack_898 = 0;
  lStack_888 = 0;
  uStack_890 = 0;
  uStack_88c = 0;
  uStack_868 = 0;
  puStack_870 = (uint *)0x0;
  auStack_1b0._0_4_ = 0x2010000;
  uStack_1a0 = 0;
  uStack_19c = 0;
  puStack_880 = puVar24;
  ppuStack_878 = &puStack_870;
  FUN_109a479a0(auStack_430,auStack_1b0);
  if (uStack_3f8 != 0) {
    piVar2 = (int *)(uStack_3f8 + 0x14);
    do {
      iVar30 = *piVar2;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = iVar30 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar30 + -1 == 0) {
      func_0x000109a848d4(auStack_430);
    }
  }
  uStack_3f8 = 0;
  uStack_418 = 0;
  uStack_414 = 0;
  uStack_420 = 0;
  uStack_41c = 0;
  uStack_408 = 0;
  uStack_404 = 0;
  uStack_410 = 0;
  uStack_40c = 0;
  if (0 < (int)auStack_430._4_4_) {
    lVar17 = 0;
    do {
      puStack_3f0[lVar17] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)auStack_430._4_4_);
  }
  if (ppuStack_3e8 != apuStack_3e0 && ppuStack_3e8 != (uint **)0x0) {
    _free(ppuStack_3e8[-1]);
  }
  FUN_109a852c8(auStack_430,&uStack_778,&uStack_7f8);
  uStack_920 = 0x42ff0000;
  auStack_1a8 = (undefined1  [8])&uStack_920;
  iStack_914 = 0;
  uStack_910 = 0;
  iStack_91c = 0;
  uStack_918 = 0;
  puStack_8e0 = &uStack_918;
  uStack_904 = 0;
  uStack_900 = 0;
  uStack_90c = 0;
  uStack_908 = 0;
  uStack_8f4 = 0;
  uStack_8fc = 0;
  uStack_8f8 = 0;
  uStack_8e8 = 0;
  uStack_8f0 = 0;
  uStack_8ec = 0;
  uStack_8c8 = 0;
  uStack_8d0 = 0;
  auStack_1b0._0_4_ = 0x2010000;
  uStack_1a0 = 0;
  uStack_19c = 0;
  puStack_8d8 = &uStack_8d0;
  FUN_109a479a0(auStack_430,auStack_1b0);
  if (uStack_3f8 != 0) {
    piVar2 = (int *)(uStack_3f8 + 0x14);
    do {
      iVar30 = *piVar2;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = iVar30 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar30 + -1 == 0) {
      func_0x000109a848d4(auStack_430);
    }
  }
  uStack_3f8 = 0;
  uStack_418 = 0;
  uStack_414 = 0;
  uStack_420 = 0;
  uStack_41c = 0;
  uStack_408 = 0;
  uStack_404 = 0;
  uStack_410 = 0;
  uStack_40c = 0;
  if (0 < (int)auStack_430._4_4_) {
    lVar17 = 0;
    do {
      puStack_3f0[lVar17] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)auStack_430._4_4_);
  }
  if (ppuStack_3e8 != apuStack_3e0 && ppuStack_3e8 != (uint **)0x0) {
    _free(ppuStack_3e8[-1]);
  }
  lVar17 = *param_1;
  if (*(char *)(lVar17 + 0x2d) == '\x01') {
    uStack_568 = 0x42ff0000;
    unique0x00023800 = &uStack_568;
    uStack_560._4_4_ = 0;
    uStack_558 = 0;
    iStack_564 = 0;
    uStack_560._0_4_ = 0;
    puStack_528 = &uStack_560;
    uStack_54c = 0;
    uStack_548 = 0;
    uStack_554 = 0;
    uStack_550 = 0;
    uStack_53c = 0;
    uStack_544 = 0;
    uStack_540 = 0;
    lStack_530 = 0;
    uStack_538 = 0;
    uStack_534 = 0;
    uStack_510 = 0;
    uStack_518 = 0;
    auStack_1a8 = (undefined1  [8])(pppuStack_648 + 0x24);
    uStack_1a0 = 0;
    uStack_19c = 0;
    auStack_1b0._0_4_ = 0x1010000;
    uStack_2d0 = 0x2010000;
    uStack_2c0 = 0;
    uStack_2bc = 0;
    uStack_498 = 0;
    uStack_494 = 0;
    uStack_4a8 = 0x1010000;
    uStack_508 = (uint)param_1[0x11];
    iStack_504 = (int)((ulong)param_1[0x11] >> 0x20);
    uStack_418 = 0;
    uStack_414 = 0;
    uStack_420 = 0;
    uStack_41c = 0;
    auStack_428._0_4_ = 0;
    auStack_428._4_4_ = 0;
    auStack_430._0_4_ = 0;
    auStack_430._4_4_ = 0;
    puStack_520 = &uStack_518;
    uStack_4a0 = puVar25;
    FUN_109b1e030(auStack_1b0,&uStack_2d0,&uStack_4a8,&uStack_508,0x12,0,auStack_430);
    uStack_5d0 = 0x42ff0000;
    puVar27 = (uint *)((ulong)&uStack_5d0 | 8);
    iStack_5c4 = 0;
    uStack_5c0 = 0;
    iStack_5cc = 0;
    uStack_5c8 = 0;
    uStack_5b4 = 0;
    uStack_5b0 = 0;
    uStack_5bc = 0;
    uStack_5b8 = 0;
    uStack_5a4 = 0;
    uStack_5ac = 0;
    uStack_5a8 = 0;
    uStack_598 = 0;
    uStack_5a0 = 0;
    uStack_59c = 0;
    uStack_578 = 0;
    puStack_580 = (uint *)0x0;
    puStack_590 = puVar27;
    ppuStack_588 = &puStack_580;
    FUN_109a852c8(&uStack_630,&uStack_568,&uStack_7f8);
    puVar18 = &uStack_980;
    FUN_109a852c8(puVar18,*param_4 + 0x120,&uStack_7e8);
    bVar12 = false;
    uVar4 = puStack_8e0[1];
    auVar9 = auStack_1a8;
    uStack_af8 = (undefined1 *)CONCAT44(uStack_af8._4_4_,(int)uStack_af8);
    auStack_428 = (undefined1  [8])CONCAT44(auStack_428._4_4_,auStack_428._0_4_);
    uStack_a38 = (uint *)CONCAT44(uStack_a38._4_4_,(int)uStack_a38);
    uStack_a98 = (uint *)CONCAT44(uStack_a98._4_4_,(undefined4)uStack_a98);
    if (((((uVar4 == puStack_880[1]) &&
          (uVar5 = *puStack_8e0,
          uStack_af8 = (undefined1 *)CONCAT44(uStack_af8._4_4_,(int)uStack_af8),
          auStack_428 = (undefined1  [8])CONCAT44(auStack_428._4_4_,auStack_428._0_4_),
          uStack_a38 = (uint *)CONCAT44(uStack_a38._4_4_,(int)uStack_a38),
          uStack_a98 = (uint *)CONCAT44(uStack_a98._4_4_,(undefined4)uStack_a98),
          uVar5 == *puStack_880)) &&
         (bVar12 = false, uStack_af8 = (undefined1 *)CONCAT44(uStack_af8._4_4_,(int)uStack_af8),
         auStack_428 = (undefined1  [8])CONCAT44(auStack_428._4_4_,auStack_428._0_4_),
         uStack_a38 = (uint *)CONCAT44(uStack_a38._4_4_,(int)uStack_a38),
         uStack_a98 = (uint *)CONCAT44(uStack_a98._4_4_,(undefined4)uStack_a98),
         uVar4 == puStack_5f0[1])) &&
        ((uStack_af8 = (undefined1 *)CONCAT44(uStack_af8._4_4_,(int)uStack_af8),
         auStack_428 = (undefined1  [8])CONCAT44(auStack_428._4_4_,auStack_428._0_4_),
         uStack_a38 = (uint *)CONCAT44(uStack_a38._4_4_,(int)uStack_a38),
         uStack_a98 = (uint *)CONCAT44(uStack_a98._4_4_,(undefined4)uStack_a98),
         uVar5 == *puStack_5f0 &&
         (bVar12 = false, uStack_af8 = (undefined1 *)CONCAT44(uStack_af8._4_4_,(int)uStack_af8),
         auStack_428 = (undefined1  [8])CONCAT44(auStack_428._4_4_,auStack_428._0_4_),
         uStack_a38 = (uint *)CONCAT44(uStack_a38._4_4_,(int)uStack_a38),
         uStack_a98 = (uint *)CONCAT44(uStack_a98._4_4_,(undefined4)uStack_a98),
         uVar4 == puStack_940[1])))) &&
       (uStack_af8 = (undefined1 *)CONCAT44(uStack_af8._4_4_,(int)uStack_af8),
       auStack_428 = (undefined1  [8])CONCAT44(auStack_428._4_4_,auStack_428._0_4_),
       uStack_a38 = (uint *)CONCAT44(uStack_a38._4_4_,(int)uStack_a38),
       uStack_a98 = (uint *)CONCAT44(uStack_a98._4_4_,(undefined4)uStack_a98), uVar5 == *puStack_940
       )) {
      auStack_1b0._0_4_ = 0x42ff0000;
      auStack_1a8._4_4_ = 0;
      uStack_1a0 = 0;
      auStack_1b0._4_4_ = 0;
      auStack_1a8._0_4_ = 0;
      appppppuStack_170[0] = (undefined8 ******)auStack_1a8;
      uStack_194 = 0;
      uStack_190 = 0;
      uStack_19c = 0;
      uStack_198 = 0;
      uStack_184 = 0;
      uStack_18c = 0;
      uStack_188 = 0;
      lStack_178 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      appppppuStack_170[3] = (undefined8 ******)0x0;
      appppppuStack_170[2] = (undefined8 ******)0x0;
      uStack_420 = 0;
      uStack_41c = 0;
      auStack_430._0_4_ = 0x1010000;
      auStack_428 = (undefined1  [8])&uStack_630;
      uStack_2c0 = 0;
      uStack_2bc = 0;
      uStack_2d0 = 0x1010000;
      unique0x00023800 = (uint *)&uStack_980;
      uStack_4a8 = 0x2010000;
      uStack_498 = 0;
      uStack_494 = 0;
      uStack_508 = 0;
      iStack_504 = 0x3ff00000;
      appppppuStack_170[1] = appppppuStack_170 + 2;
      uStack_4a0 = (uint *)auStack_1b0;
      FUN_109a91d90();
      FUN_109a293c4(auStack_430,&uStack_2d0,&uStack_4a8,puVar18,0xffffffff,&PTR_FUN_1132e8c90,1,
                    &uStack_508);
      uStack_2d0 = 0x42ff0000;
      puStack_290 = (uint *)(auStack_2cc + 4);
      iStack_2c4 = 0;
      uStack_2c0 = 0;
      auStack_2cc._0_4_ = 0;
      auStack_2cc._4_4_ = 0;
      uStack_2b4 = 0;
      uStack_2b0 = 0;
      uStack_2bc = 0;
      uStack_2b8 = 0;
      uStack_2a4 = 0;
      uStack_2ac = 0;
      uStack_2a8 = 0;
      lStack_298 = 0;
      uStack_2a0 = 0;
      uStack_29c = 0;
      apuStack_280[1] = (uint *)0x0;
      apuStack_280[0] = (uint *)0x0;
      uStack_420 = 0;
      uStack_41c = 0;
      auStack_430._0_4_ = 0x1010000;
      uStack_4a8 = 0x2010000;
      uStack_498 = 0;
      uStack_494 = 0;
      ppuStack_288 = apuStack_280;
      uStack_4a0 = &uStack_2d0;
      auStack_428 = (undefined1  [8])auStack_1b0;
      FUN_109b59078(0x3fe0000000000000,0x3ff0000000000000,auStack_430,&uStack_4a8,0);
      auStack_430._0_4_ = 0x2010000;
      uStack_420 = 0;
      uStack_41c = 0;
      auStack_428 = (undefined1  [8])&uStack_2d0;
      FUN_109a41858(0x3ff0000000000000,0,&uStack_2d0,auStack_430,0);
      uStack_498 = 0;
      uStack_494 = 0;
      uStack_4a8 = 0x1010000;
      uStack_4a0 = &uStack_2d0;
      FUN_109ab74d4(auStack_430,&uStack_4a8);
      iVar30 = iStack_2c4;
      uVar11 = auStack_2cc._4_4_;
      dVar8 = (double)CONCAT44(auStack_430._4_4_,auStack_430._0_4_);
      auStack_430._0_4_ = 0x42ff0000;
      puStack_3f0 = (uint *)((ulong)auStack_430 | 8);
      auStack_428._4_4_ = 0;
      uStack_420 = 0;
      auStack_430._4_4_ = 0;
      auStack_428._0_4_ = 0;
      uStack_414 = 0;
      uStack_410 = 0;
      uStack_41c = 0;
      uStack_418 = 0;
      uStack_404 = 0;
      uStack_40c = 0;
      uStack_408 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      uStack_3fc = 0;
      apuStack_3e0[1] = (uint *)0x0;
      apuStack_3e0[0] = (uint *)0x0;
      uStack_4a8 = 0x2010000;
      uStack_498 = 0;
      uStack_494 = 0;
      ppuStack_3e8 = apuStack_3e0;
      uStack_4a0 = (uint *)auStack_430;
      FUN_109a479a0(&uStack_920,&uStack_4a8);
      if (uStack_598 != 0) {
        piVar2 = (int *)(uStack_598 + 0x14);
        do {
          iVar28 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar28 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar28 + -1 == 0) {
          func_0x000109a848d4(&uStack_5d0);
        }
      }
      if (0 < iStack_5cc) {
        lVar17 = 0;
        do {
          puStack_590[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < iStack_5cc);
      }
      uStack_5c8 = auStack_428._0_4_;
      iStack_5c4 = auStack_428._4_4_;
      uStack_5d0 = auStack_430._0_4_;
      iStack_5cc = auStack_430._4_4_;
      uStack_5b8 = uStack_418;
      uStack_5b4 = uStack_414;
      uStack_5c0 = uStack_420;
      uStack_5bc = uStack_41c;
      uStack_5a8 = uStack_408;
      uStack_5a4 = uStack_404;
      uStack_5b0 = uStack_410;
      uStack_5ac = uStack_40c;
      uStack_598 = uStack_3f8;
      uStack_5a0 = uStack_400;
      uStack_59c = uStack_3fc;
      puVar26 = puStack_590;
      ppuVar22 = ppuStack_588;
      if ((ppuStack_588 != &puStack_580) &&
         (puVar26 = puVar27, ppuVar22 = &puStack_580, ppuStack_588 != (uint **)0x0)) {
        _free(ppuStack_588[-1]);
      }
      ppuStack_588 = ppuVar22;
      puStack_590 = puVar26;
      ppuVar22 = ppuStack_3e8;
      if ((int)auStack_430._4_4_ < 3) {
        puVar18 = (undefined8 *)((ulong)auStack_430 | 4);
        *ppuStack_588 = *ppuStack_3e8;
        ppuStack_588[1] = ppuVar22[1];
        auStack_430._0_4_ = 0x42ff0000;
        puVar18[1] = 0;
        *puVar18 = 0;
        puVar18[3] = 0;
        puVar18[2] = 0;
        puVar18[5] = 0;
        puVar18[4] = 0;
        *(undefined8 *)((long)puVar18 + 0x34) = 0;
        *(undefined8 *)((long)puVar18 + 0x2c) = 0;
        if (ppuVar22 != apuStack_3e0) {
          _free(ppuVar22[-1]);
        }
      }
      else {
        ppuStack_588 = ppuStack_3e8;
        puStack_590 = puStack_3f0;
      }
      if ((float)dVar8 / (float)(uVar11 * iVar30) <= 0.1) {
LAB_1094bf27c:
        bVar12 = true;
      }
      else {
        uStack_4a8 = 0x42ff0000;
        puStack_468 = &uStack_4a0;
        uStack_470 = 0;
        uStack_474 = 0;
        uStack_47c = 0;
        uStack_478 = 0;
        uStack_484 = 0;
        uStack_480 = 0;
        uStack_4a0._4_4_ = 0;
        uStack_498 = 0;
        iStack_4a4 = 0;
        uStack_4a0._0_4_ = 0;
        uStack_48c = 0;
        uStack_488 = 0;
        uStack_494 = 0;
        uStack_490 = 0;
        uStack_450 = 0;
        uStack_458 = 0;
        puStack_460 = &uStack_458;
        if (*(char *)(*param_1 + 0x30) == '\x01') {
          puVar27 = &uStack_8c0;
          FUN_1094c2a14(puVar27,&uStack_920,&uStack_2d0,&uStack_4a8);
          if (((ulong)puVar27 & 1) == 0) goto LAB_1094bef70;
        }
        else {
LAB_1094bef70:
          if (uStack_8e8 != 0) {
            piVar2 = (int *)(uStack_8e8 + 0x14);
            do {
              cVar6 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar12) {
                *piVar2 = *piVar2 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          if (uStack_470 != 0) {
            piVar2 = (int *)(uStack_470 + 0x14);
            do {
              iVar30 = *piVar2;
              cVar6 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar12) {
                *piVar2 = iVar30 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar30 + -1 == 0) {
              func_0x000109a848d4(&uStack_4a8);
            }
          }
          uStack_470 = 0;
          uStack_490 = 0;
          uStack_48c = 0;
          uStack_498 = 0;
          uStack_494 = 0;
          uStack_480 = 0;
          uStack_47c = 0;
          uStack_488 = 0;
          uStack_484 = 0;
          if (iStack_4a4 < 1) {
LAB_1094bf008:
            uStack_4a8 = uStack_920;
            if (2 < iStack_91c) goto LAB_1094bf03c;
            iStack_4a4 = iStack_91c;
            uStack_4a0._0_4_ = uStack_918;
            uStack_4a0._4_4_ = iStack_914;
            *puStack_460 = *puStack_8d8;
            puStack_460[1] = puStack_8d8[1];
          }
          else {
            lVar17 = 0;
            do {
              *(undefined4 *)((long)puStack_468 + lVar17 * 4) = 0;
              lVar17 = lVar17 + 1;
            } while (lVar17 < iStack_4a4);
            if (iStack_4a4 < 3) goto LAB_1094bf008;
LAB_1094bf03c:
            uStack_4a8 = uStack_920;
            func_0x000109a84868(&uStack_4a8,&uStack_920);
          }
          uStack_490 = uStack_908;
          uStack_48c = uStack_904;
          uStack_498 = uStack_910;
          uStack_494 = uStack_90c;
          uStack_480 = uStack_8f8;
          uStack_47c = uStack_8f4;
          uStack_488 = uStack_900;
          uStack_484 = uStack_8fc;
          uStack_470 = uStack_8e8;
          uStack_478 = uStack_8f0;
          uStack_474 = uStack_8ec;
        }
        uStack_508 = 0x42ff0000;
        uStack_500._4_4_ = 0;
        uStack_4f8 = 0;
        iStack_504 = 0;
        uStack_500._0_4_ = 0;
        puStack_4c8 = &uStack_500;
        uStack_4ec = 0;
        uStack_4e8 = 0;
        uStack_4f4 = 0;
        uStack_4f0 = 0;
        uStack_4dc = 0;
        uStack_4e4 = 0;
        uStack_4e0 = 0;
        lStack_4d0 = 0;
        uStack_4d8 = 0;
        uStack_4d4 = 0;
        uStack_4b0 = 0;
        puStack_4b8 = (uint *)0x0;
        uStack_420 = 0;
        uStack_41c = 0;
        auStack_430._0_4_ = 0x1010000;
        auStack_428 = (undefined1  [8])&uStack_630;
        uStack_9e0 = 0x2010000;
        uStack_9d0 = 0;
        uStack_9cc = 0;
        uStack_a40 = 9;
        iStack_a3c = 9;
        ppuStack_4c0 = &puStack_4b8;
        uStack_9d8 = &uStack_508;
        FUN_109b44a6c(0,0,auStack_430,&uStack_9e0,&uStack_a40,4);
        uStack_a30 = 0;
        uStack_a2c = 0;
        uStack_a40 = 0x1010000;
        uStack_aa0 = 0x2010000;
        uStack_a90 = 0;
        uStack_a8c = 0;
        uStack_a38 = &uStack_508;
        uStack_a98 = &uStack_508;
        FUN_109a82ac8(auStack_430,5,5,0);
        uStack_af0 = 0;
        uStack_aec = 0;
        uStack_b00._0_4_ = 0xc1060000;
        uStack_9d8._0_4_ = 0xffffffff;
        uStack_9d8._4_4_ = 0x7fefffff;
        uStack_9e0 = 0xffffffff;
        iStack_9dc = 0x7fefffff;
        uStack_9c8 = 0xffffffff;
        uStack_9c4 = 0x7fefffff;
        uStack_9d0 = 0xffffffff;
        uStack_9cc = 0x7fefffff;
        uStack_b60 = 0xffffffff;
        iStack_b5c = -1;
        uStack_af8 = auStack_430;
        FUN_109b32fd4(0,&uStack_a40,&uStack_aa0,&uStack_b00,&uStack_b60,1,0,&uStack_9e0);
        FUN_10918eb6c(auStack_430);
        puVar27 = &uStack_4a8;
        FUN_1094c2938(puVar27,CONCAT44(uStack_90c,uStack_910),*puStack_8e0,puStack_8e0[1],
                      CONCAT44(uStack_4f4,uStack_4f8),puStack_4c8,&uStack_5d0);
        auVar9 = auStack_428;
        if (lStack_4d0 != 0) {
          piVar2 = (int *)(lStack_4d0 + 0x14);
          do {
            iVar30 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar30 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar30 + -1 == 0) {
            func_0x000109a848d4(&uStack_508);
            auVar9 = auStack_428;
          }
        }
        lStack_4d0 = 0;
        uStack_4f0 = 0;
        uStack_4ec = 0;
        uStack_4f8 = 0;
        uStack_4f4 = 0;
        uStack_4e0 = 0;
        uStack_4dc = 0;
        uStack_4e8 = 0;
        uStack_4e4 = 0;
        if (0 < iStack_504) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)puStack_4c8 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < iStack_504);
        }
        auStack_428 = auVar9;
        if (ppuStack_4c0 != &puStack_4b8 && ppuStack_4c0 != (uint **)0x0) {
          _free(ppuStack_4c0[-1]);
        }
        if (uStack_470 != 0) {
          piVar2 = (int *)(uStack_470 + 0x14);
          do {
            iVar30 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar30 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar30 + -1 == 0) {
            func_0x000109a848d4(&uStack_4a8);
          }
        }
        uStack_470 = 0;
        uStack_490 = 0;
        uStack_48c = 0;
        uStack_498 = 0;
        uStack_494 = 0;
        uStack_480 = 0;
        uStack_47c = 0;
        uStack_488 = 0;
        uStack_484 = 0;
        if (0 < iStack_4a4) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)puStack_468 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < iStack_4a4);
        }
        if (puStack_460 != &uStack_458 && puStack_460 != (undefined8 *)0x0) {
          _free(puStack_460[-1]);
        }
        if (((ulong)puVar27 & 1) != 0) goto LAB_1094bf27c;
        bVar12 = false;
      }
      if (lStack_298 != 0) {
        piVar2 = (int *)(lStack_298 + 0x14);
        do {
          iVar30 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = iVar30 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar30 + -1 == 0) {
          func_0x000109a848d4(&uStack_2d0);
        }
      }
      lStack_298 = 0;
      uStack_2b8 = 0;
      uStack_2b4 = 0;
      uStack_2c0 = 0;
      uStack_2bc = 0;
      uStack_2a8 = 0;
      uStack_2a4 = 0;
      uStack_2b0 = 0;
      uStack_2ac = 0;
      if (0 < (int)auStack_2cc._0_4_) {
        lVar17 = 0;
        do {
          puStack_290[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)auStack_2cc._0_4_);
      }
      if (ppuStack_288 != apuStack_280 && ppuStack_288 != (uint **)0x0) {
        _free(ppuStack_288[-1]);
      }
      if (lStack_178 != 0) {
        piVar2 = (int *)(lStack_178 + 0x14);
        do {
          iVar30 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = iVar30 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar30 + -1 == 0) {
          func_0x000109a848d4(auStack_1b0);
        }
      }
      auVar9 = (undefined1  [8])CONCAT44(auStack_1a8._4_4_,auStack_1a8._0_4_);
      lStack_178 = 0;
      uStack_198 = 0;
      uStack_194 = 0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      uStack_188 = 0;
      uStack_184 = 0;
      uStack_190 = 0;
      uStack_18c = 0;
      if (0 < (int)auStack_1b0._4_4_) {
        lVar17 = 0;
        do {
          *(undefined4 *)((long)appppppuStack_170[0] + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)auStack_1b0._4_4_);
      }
      if ((undefined8 *******)appppppuStack_170[1] != appppppuStack_170 + 2 &&
          appppppuStack_170[1] != (undefined8 ******)0x0) {
        _free(appppppuStack_170[1][-1]);
        auVar9 = (undefined1  [8])CONCAT44(auStack_1a8._4_4_,auStack_1a8._0_4_);
      }
    }
    auStack_1a8 = auVar9;
    if (lStack_948 != 0) {
      piVar2 = (int *)(lStack_948 + 0x14);
      do {
        iVar30 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = iVar30 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(&uStack_980);
      }
    }
    lStack_948 = 0;
    uStack_968 = 0;
    uStack_970 = 0;
    uStack_958 = 0;
    uStack_960 = 0;
    if (0 < uStack_980._4_4_) {
      lVar17 = 0;
      do {
        puStack_940[lVar17] = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_980._4_4_);
    }
    if (puStack_938 != &uStack_930 && puStack_938 != (undefined8 *)0x0) {
      _free(puStack_938[-1]);
    }
    if (uStack_5f8 != 0) {
      piVar2 = (int *)(uStack_5f8 + 0x14);
      do {
        iVar30 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = iVar30 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(&uStack_630);
      }
    }
    uStack_5f8 = 0;
    uStack_618 = 0;
    uStack_614 = 0;
    uStack_620 = 0;
    uStack_61c = 0;
    uStack_608 = 0;
    uStack_604 = 0;
    uStack_610 = 0;
    uStack_60c = 0;
    if (0 < uStack_630._4_4_) {
      lVar17 = 0;
      do {
        puStack_5f0[lVar17] = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_630._4_4_);
    }
    if (puStack_5e8 != &uStack_5e0 && puStack_5e8 != (undefined8 *)0x0) {
      _free(puStack_5e8[-1]);
    }
    if (bVar12) {
      if (uStack_598 != 0) {
        piVar2 = (int *)(uStack_598 + 0x14);
        do {
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = *piVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (uStack_8e8 != 0) {
        piVar2 = (int *)(uStack_8e8 + 0x14);
        do {
          iVar30 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar30 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar30 + -1 == 0) {
          func_0x000109a848d4(&uStack_920);
        }
      }
      ppuVar22 = ppuStack_588;
      iVar28 = iStack_5c4;
      uVar4 = uStack_5c8;
      iVar30 = iStack_5cc;
      uStack_920 = uStack_5d0;
      uStack_8e8 = 0;
      uStack_908 = 0;
      uStack_904 = 0;
      uStack_910 = 0;
      uStack_90c = 0;
      uStack_8f8 = 0;
      uStack_8f4 = 0;
      uStack_900 = 0;
      uStack_8fc = 0;
      if (iStack_91c < 1) {
LAB_1094bf528:
        if (iStack_5cc < 3) {
          *puStack_8d8 = *ppuStack_588;
          puStack_8d8[1] = ppuVar22[1];
          iStack_91c = iVar30;
          uStack_918 = uVar4;
          iStack_914 = iVar28;
          uStack_910 = uStack_5c0;
          uStack_90c = uStack_5bc;
          uStack_908 = uStack_5b8;
          uStack_904 = uStack_5b4;
          uStack_900 = uStack_5b0;
          uStack_8fc = uStack_5ac;
          uStack_8f8 = uStack_5a8;
          uStack_8f4 = uStack_5a4;
          uStack_8f0 = uStack_5a0;
          uStack_8ec = uStack_59c;
          uStack_8e8 = uStack_598;
          goto joined_r0x0001094bf518;
        }
      }
      else {
        lVar17 = 0;
        do {
          puStack_8e0[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < iStack_91c);
        if (iStack_91c < 3) goto LAB_1094bf528;
      }
      func_0x000109a84868(&uStack_920,&uStack_5d0);
      uStack_910 = uStack_5c0;
      uStack_90c = uStack_5bc;
      uStack_908 = uStack_5b8;
      uStack_904 = uStack_5b4;
      uStack_900 = uStack_5b0;
      uStack_8fc = uStack_5ac;
      uStack_8f8 = uStack_5a8;
      uStack_8f4 = uStack_5a4;
      uStack_8f0 = uStack_5a0;
      uStack_8ec = uStack_59c;
      uStack_8e8 = uStack_598;
    }
joined_r0x0001094bf518:
    if (uStack_598 != 0) {
      piVar2 = (int *)(uStack_598 + 0x14);
      do {
        iVar30 = *piVar2;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = iVar30 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(&uStack_5d0);
      }
    }
    uStack_598 = 0;
    uStack_5b8 = 0;
    uStack_5b4 = 0;
    uStack_5c0 = 0;
    uStack_5bc = 0;
    uStack_5a8 = 0;
    uStack_5a4 = 0;
    uStack_5b0 = 0;
    uStack_5ac = 0;
    if (0 < iStack_5cc) {
      lVar17 = 0;
      do {
        puStack_590[lVar17] = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < iStack_5cc);
    }
    if (ppuStack_588 != &puStack_580 && ppuStack_588 != (uint **)0x0) {
      _free(ppuStack_588[-1]);
    }
    if (lStack_530 != 0) {
      piVar2 = (int *)(lStack_530 + 0x14);
      do {
        iVar30 = *piVar2;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = iVar30 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(&uStack_568);
      }
    }
    lStack_530 = 0;
    uStack_550 = 0;
    uStack_54c = 0;
    uStack_558 = 0;
    uStack_554 = 0;
    uStack_540 = 0;
    uStack_53c = 0;
    uStack_548 = 0;
    uStack_544 = 0;
    if (0 < iStack_564) {
      lVar17 = 0;
      do {
        *(undefined4 *)((long)puStack_528 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < iStack_564);
    }
    if (puStack_520 != &uStack_518 && puStack_520 != (undefined8 *)0x0) {
      _free(puStack_520[-1]);
    }
    lVar17 = *param_1;
  }
  if (*(int *)(lVar17 + 0x3c) == 1) {
    lVar17 = *param_4;
    puStack_978 = *(undefined4 **)(lVar17 + 0x68);
    uStack_980 = *(ulong *)(lVar17 + 0x60);
    puStack_940 = (uint *)((ulong)&uStack_980 | 8);
    iVar30 = *(int *)(lVar17 + 100);
    uStack_968 = *(undefined8 *)(lVar17 + 0x78);
    uStack_970 = *(undefined8 *)(lVar17 + 0x70);
    uStack_958 = *(undefined8 *)(lVar17 + 0x88);
    uStack_960 = *(undefined8 *)(lVar17 + 0x80);
    lStack_948 = *(long *)(lVar17 + 0x98);
    uStack_950 = *(undefined8 *)(lVar17 + 0x90);
    uStack_928 = 0;
    uStack_930 = 0;
    if (*(long *)(lVar17 + 0x98) != 0) {
      piVar2 = (int *)(*(long *)(lVar17 + 0x98) + 0x14);
      do {
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = *piVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      iVar30 = *(int *)(lVar17 + 100);
    }
    puStack_938 = &uStack_930;
    if (iVar30 < 3) {
      uStack_930 = **(undefined8 **)(lVar17 + 0xa8);
      uStack_928 = (*(undefined8 **)(lVar17 + 0xa8))[1];
    }
    else {
      uStack_980 = uStack_980 & 0xffffffff;
      func_0x000109a84868(&uStack_980);
    }
    uVar29 = NEON_rev64(*(undefined8 *)puStack_940,4);
    auStack_1b0._0_4_ = (undefined4)uVar29;
    auStack_1b0._4_4_ = (undefined4)((ulong)uVar29 >> 0x20);
    FUN_109a829e8(auStack_430,auStack_1b0,(uint)uStack_980 & 0xfff);
    uStack_9e0 = 0x42ff0000;
    puStack_9a0 = &uStack_9d8;
    uStack_9d8._4_4_ = 0;
    uStack_9d0 = 0;
    iStack_9dc = 0;
    uStack_9d8._0_4_ = 0;
    lStack_9a8 = 0;
    uStack_9ac = 0;
    uStack_9b4 = 0;
    uStack_9b0 = 0;
    uStack_9bc = 0;
    uStack_9b8 = 0;
    uStack_9c4 = 0;
    uStack_9c0 = 0;
    uStack_9cc = 0;
    uStack_9c8 = 0;
    uStack_988 = 0;
    uStack_990 = 0;
    puStack_998 = &uStack_990;
    (**(code **)(*(long *)CONCAT44(auStack_430._4_4_,auStack_430._0_4_) + 0x18))
              ((long *)CONCAT44(auStack_430._4_4_,auStack_430._0_4_),auStack_430,&uStack_9e0,
               0xffffffff);
    FUN_10918eb6c(auStack_430);
    uStack_a40 = 0x42ff0000;
    unique0x00023800 = &uStack_a40;
    puStack_a00 = &uStack_a38;
    uStack_a38._4_4_ = 0;
    uStack_a30 = 0;
    iStack_a3c = 0;
    uStack_a38._0_4_ = 0;
    uStack_a24 = 0;
    uStack_a20 = 0;
    uStack_a2c = 0;
    uStack_a28 = 0;
    uStack_a14 = 0;
    uStack_a1c = 0;
    uStack_a18 = 0;
    lStack_a08 = 0;
    uStack_a10 = 0;
    uStack_a0c = 0;
    uStack_9e8 = 0;
    uStack_9f0 = 0;
    auStack_1a8 = (undefined1  [8])(pppuStack_648 + 0xc);
    uStack_1a0 = 0;
    uStack_19c = 0;
    auStack_1b0._0_4_ = 0x1010000;
    uStack_2d0 = 0x2010000;
    uStack_2c0 = 0;
    uStack_2bc = 0;
    uStack_498 = 0;
    uStack_494 = 0;
    uStack_4a8 = 0x1010000;
    uStack_508 = (uint)param_1[0x11];
    iStack_504 = (int)((ulong)param_1[0x11] >> 0x20);
    uStack_418 = 0;
    uStack_414 = 0;
    uStack_420 = 0;
    uStack_41c = 0;
    auStack_428._0_4_ = 0;
    auStack_428._4_4_ = 0;
    auStack_430._0_4_ = 0;
    auStack_430._4_4_ = 0;
    puStack_9f8 = &uStack_9f0;
    uStack_4a0 = puVar25;
    FUN_109b1e030(auStack_1b0,&uStack_2d0,&uStack_4a8,&uStack_508,0x12,0,auStack_430);
    FUN_109a852c8(auStack_430,&uStack_a40,&uStack_7f8);
    FUN_109a852c8(auStack_1b0,&uStack_9e0,&uStack_7e8);
    uStack_2d0 = 0xc2010000;
    uStack_2c0 = 0;
    uStack_2bc = 0;
    pppppuVar15 = (undefined8 *****)auStack_430;
    unique0x1000ceb6 = (uint *)auStack_1b0;
    FUN_109a479a0(pppppuVar15,&uStack_2d0);
    auVar9 = auStack_1a8;
    if (lStack_178 != 0) {
      piVar2 = (int *)(lStack_178 + 0x14);
      do {
        iVar30 = *piVar2;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = iVar30 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar30 + -1 == 0) {
        pppppuVar15 = (undefined8 *****)auStack_1b0;
        func_0x000109a848d4(pppppuVar15);
        auVar9 = auStack_1a8;
      }
    }
    lStack_178 = 0;
    uStack_198 = 0;
    uStack_194 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_190 = 0;
    uStack_18c = 0;
    if (0 < (int)auStack_1b0._4_4_) {
      lVar17 = 0;
      do {
        *(undefined4 *)((long)appppppuStack_170[0] + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)auStack_1b0._4_4_);
    }
    auStack_1a8 = auVar9;
    if ((undefined8 *******)appppppuStack_170[1] != appppppuStack_170 + 2 &&
        appppppuStack_170[1] != (undefined8 ******)0x0) {
      pppppuVar15 = appppppuStack_170[1][-1];
      _free(pppppuVar15);
    }
    if (uStack_3f8 != 0) {
      piVar2 = (int *)(uStack_3f8 + 0x14);
      do {
        iVar30 = *piVar2;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = iVar30 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar30 + -1 == 0) {
        pppppuVar15 = (undefined8 *****)auStack_430;
        func_0x000109a848d4(pppppuVar15);
      }
    }
    uStack_3f8 = 0;
    uStack_418 = 0;
    uStack_414 = 0;
    uStack_420 = 0;
    uStack_41c = 0;
    uStack_408 = 0;
    uStack_404 = 0;
    uStack_410 = 0;
    uStack_40c = 0;
    if (0 < (int)auStack_430._4_4_) {
      lVar17 = 0;
      do {
        puStack_3f0[lVar17] = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)auStack_430._4_4_);
    }
    if (ppuStack_3e8 != apuStack_3e0 && ppuStack_3e8 != (uint **)0x0) {
      pppppuVar15 = (undefined8 *****)ppuStack_3e8[-1];
      _free(pppppuVar15);
    }
    uStack_aa0 = 0x42ff0000;
    uStack_a98._4_4_ = 0;
    uStack_a90 = 0;
    iStack_a9c = 0;
    uStack_a98._0_4_ = 0;
    puStack_a60 = &uStack_a98;
    uStack_a84 = 0;
    uStack_a80 = 0;
    uStack_a8c = 0;
    uStack_a88 = 0;
    uStack_a74 = 0;
    uStack_a7c = 0;
    uStack_a78 = 0;
    lStack_a68 = 0;
    uStack_a70 = 0;
    uStack_a6c = 0;
    uStack_a48 = 0;
    uStack_a50 = 0;
    uStack_420 = 0;
    uStack_41c = 0;
    auStack_430._0_4_ = 0x1010000;
    auStack_428 = (undefined1  [8])&uStack_980;
    uStack_1a0 = 0;
    uStack_19c = 0;
    auStack_1b0._0_4_ = 0x1010000;
    auStack_1a8 = (undefined1  [8])&uStack_9e0;
    uStack_2d0 = 0x2010000;
    uStack_2c0 = 0;
    uStack_2bc = 0;
    uStack_4a8 = 0;
    iStack_4a4 = 0x3ff00000;
    puStack_a58 = &uStack_a50;
    unique0x1000cede = &uStack_aa0;
    FUN_109a91d90();
    FUN_109a293c4(auStack_430,auStack_1b0,&uStack_2d0,pppppuVar15,0xffffffff,&PTR_FUN_1132e8c90,1,
                  &uStack_4a8);
    uStack_b00._0_4_ = 0x42ff0000;
    piStack_ac0 = (int *)&uStack_af8;
    uStack_af8._4_4_ = 0;
    uStack_af0 = 0;
    uStack_b00._4_4_ = 0;
    uStack_af8._0_4_ = 0;
    uStack_ae4 = 0;
    uStack_ae0 = 0;
    uStack_aec = 0;
    uStack_ae8 = 0;
    uStack_ad4 = 0;
    uStack_adc = 0;
    uStack_ad8 = 0;
    lStack_ac8 = 0;
    uStack_ad0 = 0;
    uStack_acc = 0;
    uStack_aa8 = 0;
    uStack_ab0 = 0;
    uStack_420 = 0;
    uStack_41c = 0;
    auStack_430._0_4_ = 0x1010000;
    auStack_1b0._0_4_ = 0x2010000;
    uStack_1a0 = 0;
    uStack_19c = 0;
    puStack_ab8 = &uStack_ab0;
    auStack_1a8 = (undefined1  [8])&uStack_b00;
    auStack_428 = (undefined1  [8])&uStack_aa0;
    FUN_109b59078(0x3fe0000000000000,0x3ff0000000000000,auStack_430,auStack_1b0,0);
    auStack_430._0_4_ = 0x2010000;
    uStack_420 = 0;
    uStack_41c = 0;
    auStack_428 = (undefined1  [8])&uStack_b00;
    FUN_109a41858(0x3ff0000000000000,0,&uStack_b00,auStack_430,0);
    FUN_109a852c8(auStack_430,&uStack_b00,&uStack_7e8);
    uStack_2c0 = 0;
    uStack_2bc = 0;
    uStack_2d0 = 0x1010000;
    unique0x1000ceee = (uint *)auStack_430;
    FUN_109ab74d4(auStack_1b0,&uStack_2d0);
    dVar8 = (double)CONCAT44(auStack_1b0._4_4_,auStack_1b0._0_4_);
    if (uStack_3f8 != 0) {
      piVar2 = (int *)(uStack_3f8 + 0x14);
      do {
        iVar30 = *piVar2;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = iVar30 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(auStack_430);
      }
    }
    uStack_3f8 = 0;
    uStack_418 = 0;
    uStack_414 = 0;
    uStack_420 = 0;
    uStack_41c = 0;
    uStack_408 = 0;
    uStack_404 = 0;
    uStack_410 = 0;
    uStack_40c = 0;
    if (0 < (int)auStack_430._4_4_) {
      lVar17 = 0;
      do {
        puStack_3f0[lVar17] = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)auStack_430._4_4_);
    }
    if (ppuStack_3e8 != apuStack_3e0 && ppuStack_3e8 != (uint **)0x0) {
      _free(ppuStack_3e8[-1]);
    }
    puVar13 = unique0x100071f8;
    puVar18 = (undefined8 *)auStack_1a8;
    puVar21 = (undefined8 *)auStack_428;
    if (0.025 < dVar8 / (double)((int)uStack_a38 * uStack_a38._4_4_)) {
      uStack_b60 = 0x42ff0000;
      uStack_b54 = 0;
      uStack_b50 = 0;
      iStack_b5c = 0;
      iStack_b58 = 0;
      piStack_b20 = &iStack_b58;
      uStack_b44 = 0;
      uStack_b40 = 0;
      uStack_b4c = 0;
      uStack_b48 = 0;
      uStack_b34 = 0;
      uStack_b3c = 0;
      uStack_b38 = 0;
      lStack_b28 = 0;
      uStack_b30 = 0;
      uStack_b2c = 0;
      uStack_b10 = 0;
      uStack_b08 = 0;
      uStack_420 = 0;
      uStack_41c = 0;
      auStack_430._0_4_ = 0x1010000;
      auStack_428 = (undefined1  [8])&uStack_980;
      auStack_1b0._0_4_ = 0x2010000;
      uStack_1a0 = 0;
      uStack_19c = 0;
      puStack_b18 = &uStack_b10;
      auStack_1a8 = (undefined1  [8])&uStack_b60;
      FUN_109b59078(0x3fb999999999999a,0x3ff0000000000000,auStack_430,auStack_1b0,0);
      auStack_430._0_4_ = 0x2010000;
      uStack_420 = 0;
      uStack_41c = 0;
      auStack_428 = (undefined1  [8])&uStack_b60;
      FUN_109a41858(0x3ff0000000000000,0,&uStack_b60,auStack_430,0);
      uVar29 = NEON_rev64(*(undefined8 *)piStack_820,4);
      auStack_1b0._0_4_ = (undefined4)uVar29;
      auStack_1b0._4_4_ = (undefined4)((ulong)uVar29 >> 0x20);
      FUN_109a829e8(auStack_430,auStack_1b0,uStack_920 & 0xfff);
      uStack_bc0 = 0x42ff0000;
      piStack_b80 = (int *)((long)&uStack_bbc + 4);
      uStack_bb4 = 0;
      uStack_bb0 = 0;
      uStack_bbc = 0;
      lStack_b88 = 0;
      uStack_b8c = 0;
      uStack_b94 = 0;
      uStack_b90 = 0;
      uStack_b9c = 0;
      uStack_b98 = 0;
      uStack_ba4 = 0;
      uStack_ba0 = 0;
      uStack_bac = 0;
      uStack_ba8 = 0;
      uStack_b70 = 0;
      uStack_b68 = 0;
      puStack_b78 = &uStack_b70;
      (**(code **)(*(long *)CONCAT44(auStack_430._4_4_,auStack_430._0_4_) + 0x18))
                ((long *)CONCAT44(auStack_430._4_4_,auStack_430._0_4_),auStack_430,&uStack_bc0,
                 0xffffffff);
      FUN_10918eb6c(auStack_430);
      FUN_109a852c8(auStack_430,&uStack_bc0,&uStack_7e8);
      auStack_1b0._0_4_ = 0xc2010000;
      uStack_1a0 = 0;
      uStack_19c = 0;
      auStack_1a8 = (undefined1  [8])auStack_430;
      FUN_109a479a0(&uStack_920,auStack_1b0);
      if (uStack_3f8 != 0) {
        piVar2 = (int *)(uStack_3f8 + 0x14);
        do {
          iVar30 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar30 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar30 + -1 == 0) {
          func_0x000109a848d4(auStack_430);
        }
      }
      uStack_3f8 = 0;
      uStack_418 = 0;
      uStack_414 = 0;
      uStack_420 = 0;
      uStack_41c = 0;
      uStack_408 = 0;
      uStack_404 = 0;
      uStack_410 = 0;
      uStack_40c = 0;
      if (0 < (int)auStack_430._4_4_) {
        lVar17 = 0;
        do {
          puStack_3f0[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)auStack_430._4_4_);
      }
      if (ppuStack_3e8 != apuStack_3e0 && ppuStack_3e8 != (uint **)0x0) {
        _free(ppuStack_3e8[-1]);
      }
      uStack_c20 = 0x42ff0000;
      puVar25 = (uint *)((ulong)&uStack_c20 | 8);
      uStack_be8 = 0;
      uStack_bec = 0;
      uStack_bf4 = 0;
      uStack_bf0 = 0;
      uStack_bfc = 0;
      uStack_bf8 = 0;
      uStack_c14 = 0;
      uStack_c10 = 0;
      iStack_c1c = 0;
      uStack_c18 = 0;
      uStack_c04 = 0;
      uStack_c00 = 0;
      uStack_c0c = 0;
      uStack_c08 = 0;
      uStack_bd0 = 0;
      uStack_bc8 = 0;
      puStack_be0 = puVar25;
      puStack_bd8 = &uStack_bd0;
      uStack_628 = (uint *)CONCAT44(uStack_628._4_4_,(undefined4)uStack_628);
      if ((((*(char *)(*param_1 + 0x31) == '\x01') &&
           (iVar30 = piStack_b80[1],
           uStack_628 = (uint *)CONCAT44(uStack_628._4_4_,(undefined4)uStack_628),
           iVar30 == piStack_820[1])) &&
          (iVar28 = *piStack_b80,
          uStack_628 = (uint *)CONCAT44(uStack_628._4_4_,(undefined4)uStack_628),
          iVar28 == *piStack_820)) &&
         (((uStack_628 = (uint *)CONCAT44(uStack_628._4_4_,(undefined4)uStack_628),
           iVar30 == piStack_b20[1] &&
           (uStack_628 = (uint *)CONCAT44(uStack_628._4_4_,(undefined4)uStack_628),
           iVar28 == *piStack_b20)) &&
          ((uStack_628 = (uint *)CONCAT44(uStack_628._4_4_,(undefined4)uStack_628),
           iVar30 == piStack_ac0[1] &&
           (uStack_628 = (uint *)CONCAT44(uStack_628._4_4_,(undefined4)uStack_628),
           iVar28 == *piStack_ac0)))))) {
        uStack_4a8 = 0x42ff0000;
        auStack_1a8 = (undefined1  [8])&uStack_4a8;
        uStack_4a0._4_4_ = 0;
        uStack_498 = 0;
        iStack_4a4 = 0;
        uStack_4a0._0_4_ = 0;
        puStack_468 = &uStack_4a0;
        uStack_48c = 0;
        uStack_488 = 0;
        uStack_494 = 0;
        uStack_490 = 0;
        uStack_47c = 0;
        uStack_484 = 0;
        uStack_480 = 0;
        uStack_470 = 0;
        uStack_478 = 0;
        uStack_474 = 0;
        uStack_450 = 0;
        uStack_458 = 0;
        uStack_508 = 0x42ff0000;
        puStack_4c8 = &uStack_500;
        uStack_500._4_4_ = 0;
        uStack_4f8 = 0;
        iStack_504 = 0;
        uStack_500._0_4_ = 0;
        uStack_4ec = 0;
        uStack_4e8 = 0;
        uStack_4f4 = 0;
        uStack_4f0 = 0;
        uStack_4dc = 0;
        uStack_4e4 = 0;
        uStack_4e0 = 0;
        lStack_4d0 = 0;
        uStack_4d8 = 0;
        uStack_4d4 = 0;
        uStack_4b0 = 0;
        puStack_4b8 = (uint *)0x0;
        uStack_420 = 0;
        uStack_41c = 0;
        auStack_430._0_4_ = 0x1010000;
        auStack_428 = (undefined1  [8])&uStack_bc0;
        auStack_1b0._0_4_ = 0x2010000;
        uStack_1a0 = 0;
        uStack_19c = 0;
        ppuStack_4c0 = &puStack_4b8;
        puStack_460 = &uStack_458;
        FUN_109ac9fc8(auStack_430,auStack_1b0,0x29,0);
        uStack_420 = 0;
        uStack_41c = 0;
        auStack_430._0_4_ = 0x1010000;
        auStack_428 = (undefined1  [8])&uStack_860;
        auStack_1b0._0_4_ = 0x2010000;
        uStack_1a0 = 0;
        uStack_19c = 0;
        auStack_1a8 = (undefined1  [8])&uStack_508;
        FUN_109ac9fc8(auStack_430,auStack_1b0,0x29,0);
        lVar17 = 0;
        do {
          *(undefined4 *)(auStack_430 + lVar17) = 0x42ff0000;
          *(undefined8 *)(auStack_428 + lVar17 + 4) = 0;
          *(undefined8 *)(auStack_430 + lVar17 + 4) = 0;
          *(undefined8 *)((long)&uStack_414 + lVar17) = 0;
          *(undefined8 *)((long)&uStack_41c + lVar17) = 0;
          *(undefined8 *)((long)&uStack_404 + lVar17) = 0;
          *(undefined8 *)((long)&uStack_40c + lVar17) = 0;
          *(undefined8 *)((long)apuStack_3e0 + lVar17) = 0;
          *(undefined8 *)((long)&uStack_3f8 + lVar17) = 0;
          *(undefined8 *)((long)&uStack_400 + lVar17) = 0;
          *(undefined1 **)((long)&puStack_3f0 + lVar17) = auStack_428 + lVar17;
          *(undefined8 **)((long)apuStack_3e0 + lVar17 + -8) =
               (undefined8 *)((long)apuStack_3e0 + lVar17);
          lVar23 = lVar17 + 0x60;
          *(undefined8 *)(auStack_3d0 + lVar17 + -8) = 0;
          lVar17 = lVar23;
        } while (lVar23 != 0x120);
        lVar17 = 0;
        do {
          *(undefined4 *)(auStack_1b0 + lVar17) = 0x42ff0000;
          *(undefined8 *)(auStack_1a8 + lVar17 + 4) = 0;
          *(undefined8 *)(auStack_1b0 + lVar17 + 4) = 0;
          *(undefined8 *)((long)&uStack_194 + lVar17) = 0;
          *(undefined8 *)((long)&uStack_19c + lVar17) = 0;
          *(undefined8 *)((long)&uStack_184 + lVar17) = 0;
          *(undefined8 *)((long)&uStack_18c + lVar17) = 0;
          puVar18 = (undefined8 *)((long)appppppuStack_170 + lVar17 + 0x10);
          *puVar18 = 0;
          *(undefined8 *)((long)&lStack_178 + lVar17) = 0;
          *(undefined8 *)((long)&uStack_180 + lVar17) = 0;
          *(undefined1 **)((long)appppppuStack_170 + lVar17) = auStack_1a8 + lVar17;
          *(undefined8 **)((long)appppppuStack_170 + lVar17 + 8) = puVar18;
          lVar23 = lVar17 + 0x60;
          *(undefined8 *)(auStack_150 + lVar17 + -8) = 0;
          lVar17 = lVar23;
        } while (lVar23 != 0x120);
        lVar17 = 0;
        do {
          *(undefined4 *)((long)&uStack_2d0 + lVar17) = 0x42ff0000;
          *(undefined8 *)((long)&iStack_2c4 + lVar17) = 0;
          *(undefined8 *)(auStack_2cc + lVar17) = 0;
          *(undefined8 *)((long)&uStack_2b4 + lVar17) = 0;
          *(undefined8 *)((long)&uStack_2bc + lVar17) = 0;
          *(undefined8 *)((long)&uStack_2a4 + lVar17) = 0;
          *(undefined8 *)((long)&uStack_2ac + lVar17) = 0;
          *(undefined8 *)((long)apuStack_280 + lVar17) = 0;
          *(undefined8 *)((long)&lStack_298 + lVar17) = 0;
          *(undefined8 *)((long)&uStack_2a0 + lVar17) = 0;
          *(undefined1 **)((long)&puStack_290 + lVar17) = auStack_2cc + lVar17 + 4;
          *(undefined8 **)((long)apuStack_280 + lVar17 + -8) =
               (undefined8 *)((long)apuStack_280 + lVar17);
          lVar23 = lVar17 + 0x60;
          *(undefined8 *)(auStack_270 + lVar17 + -8) = 0;
          lVar17 = lVar23;
        } while (lVar23 != 0x120);
        FUN_109a3d9cc(&uStack_4a8,auStack_430);
        FUN_109a3d9cc(&uStack_508,auStack_1b0);
        if (lStack_178 != 0) {
          piVar2 = (int *)(lStack_178 + 0x14);
          do {
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = *piVar2 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (lStack_298 != 0) {
          piVar2 = (int *)(lStack_298 + 0x14);
          do {
            iVar30 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar30 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar30 + -1 == 0) {
            func_0x000109a848d4(&uStack_2d0);
          }
        }
        ppppppuVar3 = appppppuStack_170[1];
        lStack_298 = 0;
        uStack_2b8 = 0;
        uStack_2b4 = 0;
        uStack_2c0 = 0;
        uStack_2bc = 0;
        uStack_2a8 = 0;
        uStack_2a4 = 0;
        uStack_2b0 = 0;
        uStack_2ac = 0;
        if ((int)auStack_2cc._0_4_ < 1) {
LAB_1094c0060:
          uStack_2d0 = auStack_1b0._0_4_;
          if (2 < (int)auStack_1b0._4_4_) goto LAB_1094c0094;
          auStack_2cc._0_4_ = auStack_1b0._4_4_;
          auStack_2cc._4_4_ = auStack_1a8._0_4_;
          iStack_2c4 = auStack_1a8._4_4_;
          *ppuStack_288 = (uint *)*appppppuStack_170[1];
          ppuStack_288[1] = (uint *)ppppppuVar3[1];
        }
        else {
          lVar17 = 0;
          do {
            puStack_290[lVar17] = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < (int)auStack_2cc._0_4_);
          if ((int)auStack_2cc._0_4_ < 3) goto LAB_1094c0060;
LAB_1094c0094:
          uStack_2d0 = auStack_1b0._0_4_;
          func_0x000109a84868(&uStack_2d0,auStack_1b0);
        }
        uStack_2b8 = uStack_198;
        uStack_2b4 = uStack_194;
        uStack_2c0 = uStack_1a0;
        uStack_2bc = uStack_19c;
        uStack_2a8 = uStack_188;
        uStack_2a4 = uStack_184;
        uStack_2b0 = uStack_190;
        uStack_2ac = uStack_18c;
        lStack_298 = lStack_178;
        uStack_2a0 = uStack_180;
        uStack_29c = uStack_17c;
        FUN_1094c30f0(auStack_3d0,auStack_150,&uStack_b00,auStack_270);
        FUN_1094c355c(auStack_370,auStack_f0,&uStack_b00,auStack_210);
        uStack_568 = 0x42ff0000;
        uStack_560._4_4_ = 0;
        uStack_558 = 0;
        iStack_564 = 0;
        uStack_560._0_4_ = 0;
        puStack_528 = &uStack_560;
        uStack_54c = 0;
        uStack_548 = 0;
        uStack_554 = 0;
        uStack_550 = 0;
        uStack_53c = 0;
        uStack_544 = 0;
        uStack_540 = 0;
        lStack_530 = 0;
        uStack_538 = 0;
        uStack_534 = 0;
        uStack_510 = 0;
        uStack_518 = 0;
        puVar27 = &uStack_2d0;
        puStack_520 = &uStack_518;
        FUN_1094c3518(puVar27,&uStack_568);
        if (((ulong)puVar27 & 1) != 0) {
          uStack_5d0 = 0x42ff0000;
          puStack_440 = &uStack_5d0;
          iStack_5c4 = 0;
          uStack_5c0 = 0;
          iStack_5cc = 0;
          uStack_5c8 = 0;
          puStack_590 = &uStack_5c8;
          uStack_5b4 = 0;
          uStack_5b0 = 0;
          uStack_5bc = 0;
          uStack_5b8 = 0;
          uStack_5a4 = 0;
          uStack_5ac = 0;
          uStack_5a8 = 0;
          uStack_598 = 0;
          uStack_5a0 = 0;
          uStack_59c = 0;
          uStack_578 = 0;
          puStack_580 = (uint *)0x0;
          uStack_620 = 0;
          uStack_61c = 0;
          uStack_630._0_4_ = 0x1010000;
          uStack_628 = &uStack_568;
          auStack_448[0] = 0x2010000;
          uStack_438 = 0;
          ppuStack_588 = &puStack_580;
          FUN_109ac9fc8(&uStack_630,auStack_448,0x37,0);
          uStack_630._0_4_ = 0x42ff0000;
          puStack_5f0 = (uint *)((ulong)&uStack_630 | 8);
          uStack_628._4_4_ = 0;
          uStack_620 = 0;
          uStack_630._4_4_ = 0;
          uStack_628._0_4_ = 0;
          uStack_614 = 0;
          uStack_610 = 0;
          uStack_61c = 0;
          uStack_618 = 0;
          uStack_604 = 0;
          uStack_60c = 0;
          uStack_608 = 0;
          uStack_5f8 = 0;
          uStack_600 = 0;
          uStack_5fc = 0;
          uStack_5d8 = 0;
          uStack_5e0 = 0;
          auStack_448[0] = 0x2010000;
          uStack_438 = 0;
          puStack_5e8 = &uStack_5e0;
          puStack_440 = (uint *)&uStack_630;
          FUN_109a479a0(&uStack_860,auStack_448);
          if (uStack_be8 != 0) {
            piVar2 = (int *)(uStack_be8 + 0x14);
            do {
              iVar30 = *piVar2;
              cVar6 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar12) {
                *piVar2 = iVar30 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar30 + -1 == 0) {
              func_0x000109a848d4(&uStack_c20);
            }
          }
          if (0 < iStack_c1c) {
            lVar17 = 0;
            do {
              puStack_be0[lVar17] = 0;
              lVar17 = lVar17 + 1;
            } while (lVar17 < iStack_c1c);
          }
          uStack_c18 = (undefined4)uStack_628;
          uStack_c14 = uStack_628._4_4_;
          uStack_c20 = (uint)uStack_630;
          iStack_c1c = uStack_630._4_4_;
          uStack_c08 = uStack_618;
          uStack_c04 = uStack_614;
          uStack_c10 = uStack_620;
          uStack_c0c = uStack_61c;
          uStack_bf8 = uStack_608;
          uStack_bf4 = uStack_604;
          uStack_c00 = uStack_610;
          uStack_bfc = uStack_60c;
          uStack_be8 = uStack_5f8;
          uStack_bf0 = uStack_600;
          uStack_bec = uStack_5fc;
          puVar26 = puStack_be0;
          puVar18 = puStack_bd8;
          if ((puStack_bd8 != &uStack_bd0) &&
             (puVar26 = puVar25, puVar18 = &uStack_bd0, puStack_bd8 != (undefined8 *)0x0)) {
            _free(puStack_bd8[-1]);
          }
          puStack_bd8 = puVar18;
          puStack_be0 = puVar26;
          if (uStack_630._4_4_ < 3) {
            puVar18 = (undefined8 *)((ulong)&uStack_630 | 4);
            *puStack_bd8 = *puStack_5e8;
            puStack_bd8[1] = puStack_5e8[1];
            uStack_630._0_4_ = 0x42ff0000;
            puVar18[1] = 0;
            *puVar18 = 0;
            puVar18[3] = 0;
            puVar18[2] = 0;
            puVar18[5] = 0;
            puVar18[4] = 0;
            *(undefined8 *)((long)puVar18 + 0x34) = 0;
            *(undefined8 *)((long)puVar18 + 0x2c) = 0;
            if (puStack_5e8 != &uStack_5e0) {
              _free(puStack_5e8[-1]);
            }
          }
          else {
            puStack_be0 = puStack_5f0;
            puStack_bd8 = puStack_5e8;
          }
          uStack_630._0_4_ = 0x2010000;
          uStack_628 = &uStack_c20;
          uStack_620 = 0;
          uStack_61c = 0;
          uStack_438 = 0;
          auStack_448[0] = 0x1010000;
          puStack_440 = &uStack_b60;
          FUN_109a4813c(&uStack_5d0,&uStack_630,auStack_448);
          if (uStack_598 != 0) {
            piVar2 = (int *)(uStack_598 + 0x14);
            do {
              iVar30 = *piVar2;
              cVar6 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar12) {
                *piVar2 = iVar30 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar30 + -1 == 0) {
              func_0x000109a848d4(&uStack_5d0);
            }
          }
          uStack_598 = 0;
          uStack_5b8 = 0;
          uStack_5b4 = 0;
          uStack_5c0 = 0;
          uStack_5bc = 0;
          uStack_5a8 = 0;
          uStack_5a4 = 0;
          uStack_5b0 = 0;
          uStack_5ac = 0;
          if (0 < iStack_5cc) {
            lVar17 = 0;
            do {
              puStack_590[lVar17] = 0;
              lVar17 = lVar17 + 1;
            } while (lVar17 < iStack_5cc);
          }
          if (ppuStack_588 != &puStack_580 && ppuStack_588 != (uint **)0x0) {
            _free(ppuStack_588[-1]);
          }
        }
        if (lStack_530 != 0) {
          piVar2 = (int *)(lStack_530 + 0x14);
          do {
            iVar30 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar30 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar30 + -1 == 0) {
            func_0x000109a848d4(&uStack_568);
          }
        }
        lStack_530 = 0;
        uStack_550 = 0;
        uStack_54c = 0;
        uStack_558 = 0;
        uStack_554 = 0;
        uStack_540 = 0;
        uStack_53c = 0;
        uStack_548 = 0;
        uStack_544 = 0;
        if (0 < iStack_564) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)puStack_528 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < iStack_564);
        }
        if (puStack_520 != &uStack_518 && puStack_520 != (undefined8 *)0x0) {
          _free(puStack_520[-1]);
        }
        puVar25 = (uint *)auStack_1b0;
        do {
          puVar26 = puVar25 + -0x18;
          if (*(long *)(puVar25 + -10) != 0) {
            piVar2 = (int *)(*(long *)(puVar25 + -10) + 0x14);
            do {
              iVar30 = *piVar2;
              cVar6 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar12) {
                *piVar2 = iVar30 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar30 + -1 == 0) {
              func_0x000109a848d4(puVar26);
            }
          }
          puVar25[-10] = 0;
          puVar25[-9] = 0;
          puVar25[-0x12] = 0;
          puVar25[-0x11] = 0;
          puVar25[-0x14] = 0;
          puVar25[-0x13] = 0;
          puVar25[-0xe] = 0;
          puVar25[-0xd] = 0;
          puVar25[-0x10] = 0;
          puVar25[-0xf] = 0;
          if (0 < (int)puVar25[-0x17]) {
            lVar17 = 0;
            lVar23 = *(long *)(puVar25 + -8);
            do {
              *(undefined4 *)(lVar23 + lVar17 * 4) = 0;
              lVar17 = lVar17 + 1;
            } while (lVar17 < (int)puVar25[-0x17]);
          }
          puVar19 = *(uint **)(puVar25 + -6);
          if (puVar19 != puVar25 + -4 && puVar19 != (uint *)0x0) {
            _free(*(undefined8 *)(puVar19 + -2));
          }
          puVar25 = puVar26;
        } while (puVar26 != &uStack_2d0);
        puVar25 = auStack_90;
        do {
          puVar26 = puVar25 + -0x18;
          if (*(long *)(puVar25 + -10) != 0) {
            piVar2 = (int *)(*(long *)(puVar25 + -10) + 0x14);
            do {
              iVar30 = *piVar2;
              cVar6 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar12) {
                *piVar2 = iVar30 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar30 + -1 == 0) {
              func_0x000109a848d4(puVar26);
            }
          }
          puVar25[-10] = 0;
          puVar25[-9] = 0;
          puVar25[-0x12] = 0;
          puVar25[-0x11] = 0;
          puVar25[-0x14] = 0;
          puVar25[-0x13] = 0;
          puVar25[-0xe] = 0;
          puVar25[-0xd] = 0;
          puVar25[-0x10] = 0;
          puVar25[-0xf] = 0;
          if (0 < (int)puVar25[-0x17]) {
            lVar17 = 0;
            lVar23 = *(long *)(puVar25 + -8);
            do {
              *(undefined4 *)(lVar23 + lVar17 * 4) = 0;
              lVar17 = lVar17 + 1;
            } while (lVar17 < (int)puVar25[-0x17]);
          }
          puVar19 = *(uint **)(puVar25 + -6);
          if (puVar19 != puVar25 + -4 && puVar19 != (uint *)0x0) {
            _free(*(undefined8 *)(puVar19 + -2));
          }
          puVar25 = puVar26;
        } while (puVar26 != (uint *)auStack_1b0);
        puVar18 = auStack_310;
        do {
          puVar21 = puVar18 + -0xc;
          if (puVar18[-5] != 0) {
            piVar2 = (int *)(puVar18[-5] + 0x14);
            do {
              iVar30 = *piVar2;
              cVar6 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar12) {
                *piVar2 = iVar30 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar30 + -1 == 0) {
              func_0x000109a848d4(puVar21);
            }
          }
          puVar18[-5] = 0;
          puVar18[-9] = 0;
          puVar18[-10] = 0;
          puVar18[-7] = 0;
          puVar18[-8] = 0;
          if (0 < *(int *)((long)puVar18 + -0x5c)) {
            lVar17 = 0;
            lVar23 = puVar18[-4];
            do {
              *(undefined4 *)(lVar23 + lVar17 * 4) = 0;
              lVar17 = lVar17 + 1;
            } while (lVar17 < *(int *)((long)puVar18 + -0x5c));
          }
          puVar20 = (undefined8 *)puVar18[-3];
          if (puVar20 != puVar18 + -2 && puVar20 != (undefined8 *)0x0) {
            _free(puVar20[-1]);
          }
          puVar18 = puVar21;
        } while (puVar21 != (undefined8 *)auStack_430);
        if (lStack_4d0 != 0) {
          piVar2 = (int *)(lStack_4d0 + 0x14);
          do {
            iVar30 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar30 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar30 + -1 == 0) {
            func_0x000109a848d4(&uStack_508);
          }
        }
        lStack_4d0 = 0;
        uStack_4f0 = 0;
        uStack_4ec = 0;
        uStack_4f8 = 0;
        uStack_4f4 = 0;
        uStack_4e0 = 0;
        uStack_4dc = 0;
        uStack_4e8 = 0;
        uStack_4e4 = 0;
        if (0 < iStack_504) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)puStack_4c8 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < iStack_504);
        }
        if (ppuStack_4c0 != &puStack_4b8 && ppuStack_4c0 != (uint **)0x0) {
          _free(ppuStack_4c0[-1]);
        }
        if (uStack_470 != 0) {
          piVar2 = (int *)(uStack_470 + 0x14);
          do {
            iVar30 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar30 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar30 + -1 == 0) {
            func_0x000109a848d4(&uStack_4a8);
          }
        }
        uStack_470 = 0;
        uStack_490 = 0;
        uStack_48c = 0;
        uStack_498 = 0;
        uStack_494 = 0;
        uStack_480 = 0;
        uStack_47c = 0;
        uStack_488 = 0;
        uStack_484 = 0;
        if (0 < iStack_4a4) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)puStack_468 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < iStack_4a4);
        }
        if (puStack_460 != &uStack_458 && puStack_460 != (undefined8 *)0x0) {
          _free(puStack_460[-1]);
        }
        if (((ulong)puVar27 & 1) == 0) goto LAB_1094c06e0;
      }
      else {
LAB_1094c06e0:
        if (uStack_828 != 0) {
          piVar2 = (int *)(uStack_828 + 0x14);
          do {
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = *piVar2 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (uStack_be8 != 0) {
          piVar2 = (int *)(uStack_be8 + 0x14);
          do {
            iVar30 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar30 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar30 + -1 == 0) {
            func_0x000109a848d4(&uStack_c20);
          }
        }
        puVar18 = puStack_818;
        uStack_be8 = 0;
        uStack_c08 = 0;
        uStack_c04 = 0;
        uStack_c10 = 0;
        uStack_c0c = 0;
        uStack_bf8 = 0;
        uStack_bf4 = 0;
        uStack_c00 = 0;
        uStack_bfc = 0;
        if (iStack_c1c < 1) {
LAB_1094c0774:
          uStack_c20 = (uint)uStack_860;
          if (2 < uStack_860._4_4_) goto LAB_1094c07a8;
          iStack_c1c = uStack_860._4_4_;
          uStack_c18 = (undefined4)uStack_858;
          uStack_c14 = (undefined4)(uStack_858 >> 0x20);
          *puStack_bd8 = *puStack_818;
          puStack_bd8[1] = puVar18[1];
        }
        else {
          lVar17 = 0;
          do {
            puStack_be0[lVar17] = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < iStack_c1c);
          if (iStack_c1c < 3) goto LAB_1094c0774;
LAB_1094c07a8:
          uStack_c20 = (uint)uStack_860;
          func_0x000109a84868(&uStack_c20,&uStack_860);
        }
        uStack_c08 = (undefined4)uStack_848;
        uStack_c04 = (undefined4)(uStack_848 >> 0x20);
        uStack_c10 = (undefined4)uStack_850;
        uStack_c0c = (undefined4)(uStack_850 >> 0x20);
        uStack_bf8 = (undefined4)uStack_838;
        uStack_bf4 = (undefined4)(uStack_838 >> 0x20);
        uStack_c00 = (undefined4)uStack_840;
        uStack_bfc = (undefined4)(uStack_840 >> 0x20);
        uStack_be8 = uStack_828;
        uStack_bf0 = (undefined4)uStack_830;
        uStack_bec = (undefined4)(uStack_830 >> 0x20);
      }
      auStack_1b0._0_4_ = 0x42ff0000;
      auStack_1a8._4_4_ = 0;
      uStack_1a0 = 0;
      auStack_1b0._4_4_ = 0;
      auStack_1a8._0_4_ = 0;
      appppppuStack_170[0] = (undefined8 ******)auStack_1a8;
      uStack_194 = 0;
      uStack_190 = 0;
      uStack_19c = 0;
      uStack_198 = 0;
      uStack_184 = 0;
      uStack_18c = 0;
      uStack_188 = 0;
      lStack_178 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      ppppppuVar3 = appppppuStack_170 + 2;
      appppppuStack_170[3] = (undefined8 ******)0x0;
      appppppuStack_170[2] = (undefined8 ******)0x0;
      uStack_420 = 0;
      uStack_41c = 0;
      auStack_430._0_4_ = 0x1010000;
      auStack_428 = (undefined1  [8])&uStack_980;
      uStack_2d0 = 0x2010000;
      uStack_2c0 = 0;
      uStack_2bc = 0;
      uStack_4a8 = 9;
      iStack_4a4 = 9;
      appppppuStack_170[1] = ppppppuVar3;
      unique0x1000d5a6 = (uint *)auStack_1b0;
      FUN_109b44a6c(0,0,auStack_430,&uStack_2d0,&uStack_4a8,4);
      uStack_498 = 0;
      uStack_494 = 0;
      uStack_4a8 = 0x1010000;
      uStack_508 = 0x2010000;
      uStack_4f8 = 0;
      uStack_4f4 = 0;
      uStack_4a0 = (uint *)auStack_1b0;
      uStack_500 = (uint *)auStack_1b0;
      FUN_109a82ac8(auStack_430,5,5,0);
      uStack_558 = 0;
      uStack_554 = 0;
      uStack_568 = 0xc1060000;
      auStack_2cc._4_4_ = 0xffffffff;
      iStack_2c4 = 0x7fefffff;
      uStack_2d0 = 0xffffffff;
      auStack_2cc._0_4_ = 0x7fefffff;
      uStack_2b8 = 0xffffffff;
      uStack_2b4 = 0x7fefffff;
      uStack_2c0 = 0xffffffff;
      uStack_2bc = 0x7fefffff;
      uStack_5d0 = 0xffffffff;
      iStack_5cc = -1;
      uStack_560 = (uint *)auStack_430;
      FUN_109b32fd4(0,&uStack_4a8,&uStack_508,&uStack_568,&uStack_5d0,1,0,&uStack_2d0);
      FUN_10918eb6c(auStack_430);
      puStack_3f0 = (uint *)auStack_428;
      auStack_430._0_4_ = 0x42ff0000;
      auStack_428._4_4_ = 0;
      uStack_420 = 0;
      auStack_430._4_4_ = 0;
      auStack_428._0_4_ = 0;
      uStack_414 = 0;
      uStack_410 = 0;
      uStack_41c = 0;
      uStack_418 = 0;
      uStack_404 = 0;
      uStack_40c = 0;
      uStack_408 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      uStack_3fc = 0;
      apuStack_3e0[1] = (uint *)0x0;
      apuStack_3e0[0] = (uint *)0x0;
      uStack_2d0 = (uint)*(undefined8 *)puStack_be0;
      auStack_2cc._0_4_ = (undefined4)((ulong)*(undefined8 *)puStack_be0 >> 0x20);
      ppuStack_3e8 = apuStack_3e0;
      FUN_109a83fd0(auStack_430,2,&uStack_2d0,uStack_c20 & 0xfff);
      puVar25 = &uStack_c20;
      uVar16 = uStack_850;
      FUN_1094c2938(puVar25,uStack_850,*piStack_820,piStack_820[1],CONCAT44(uStack_19c,uStack_1a0),
                    appppppuStack_170[0],auStack_430);
      iVar30 = (int)uVar16;
      if (((ulong)puVar25 & 1) == 0) {
        if (uStack_3f8 != 0) {
          piVar2 = (int *)(uStack_3f8 + 0x14);
          do {
            iVar28 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar28 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(auStack_430);
          }
        }
        uStack_3f8 = 0;
        uStack_418 = 0;
        uStack_414 = 0;
        uStack_420 = 0;
        uStack_41c = 0;
        uStack_408 = 0;
        uStack_404 = 0;
        uStack_410 = 0;
        uStack_40c = 0;
        if (0 < (int)auStack_430._4_4_) {
          lVar17 = 0;
          do {
            puStack_3f0[lVar17] = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < (int)auStack_430._4_4_);
        }
        if (ppuStack_3e8 != apuStack_3e0 && ppuStack_3e8 != (uint **)0x0) {
          _free(ppuStack_3e8[-1]);
        }
        if (lStack_178 != 0) {
          piVar2 = (int *)(lStack_178 + 0x14);
          do {
            iVar28 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar28 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(auStack_1b0);
          }
        }
        lStack_178 = 0;
        uStack_198 = 0;
        uStack_194 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_188 = 0;
        uStack_184 = 0;
        uStack_190 = 0;
        uStack_18c = 0;
        if (0 < (int)auStack_1b0._4_4_) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)appppppuStack_170[0] + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < (int)auStack_1b0._4_4_);
        }
        if (appppppuStack_170[1] != ppppppuVar3 && appppppuStack_170[1] != (undefined8 ******)0x0) {
          _free(appppppuStack_170[1][-1]);
        }
        if (uStack_be8 != 0) {
          piVar2 = (int *)(uStack_be8 + 0x14);
          do {
            iVar28 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar28 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(&uStack_c20);
          }
        }
        uStack_be8 = 0;
        uStack_c08 = 0;
        uStack_c04 = 0;
        uStack_c10 = 0;
        uStack_c0c = 0;
        uStack_bf8 = 0;
        uStack_bf4 = 0;
        uStack_c00 = 0;
        uStack_bfc = 0;
        if (0 < iStack_c1c) {
          lVar17 = 0;
          do {
            puStack_be0[lVar17] = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < iStack_c1c);
        }
        if (puStack_bd8 != &uStack_bd0 && puStack_bd8 != (undefined8 *)0x0) {
          _free(puStack_bd8[-1]);
        }
        if (lStack_b88 != 0) {
          piVar2 = (int *)(lStack_b88 + 0x14);
          do {
            iVar28 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar28 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(&uStack_bc0);
          }
        }
        lStack_b88 = 0;
        uStack_ba8 = 0;
        uStack_ba4 = 0;
        uStack_bb0 = 0;
        uStack_bac = 0;
        uStack_b98 = 0;
        uStack_b94 = 0;
        uStack_ba0 = 0;
        uStack_b9c = 0;
        if (0 < (int)uStack_bbc) {
          lVar17 = 0;
          do {
            piStack_b80[lVar17] = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < (int)uStack_bbc);
        }
        if (puStack_b78 != &uStack_b70 && puStack_b78 != (undefined8 *)0x0) {
          _free(puStack_b78[-1]);
        }
        if (lStack_b28 != 0) {
          piVar2 = (int *)(lStack_b28 + 0x14);
          do {
            iVar28 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar28 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(&uStack_b60);
          }
        }
        lStack_b28 = 0;
        uStack_b48 = 0;
        uStack_b44 = 0;
        uStack_b50 = 0;
        uStack_b4c = 0;
        uStack_b38 = 0;
        uStack_b34 = 0;
        uStack_b40 = 0;
        uStack_b3c = 0;
        if (0 < iStack_b5c) {
          lVar17 = 0;
          do {
            piStack_b20[lVar17] = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < iStack_b5c);
        }
        if (puStack_b18 != &uStack_b10 && puStack_b18 != (undefined8 *)0x0) {
          _free(puStack_b18[-1]);
        }
        if (lStack_ac8 != 0) {
          piVar2 = (int *)(lStack_ac8 + 0x14);
          do {
            iVar28 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar28 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(&uStack_b00);
          }
        }
        lStack_ac8 = 0;
        uStack_ae8 = 0;
        uStack_ae4 = 0;
        uStack_af0 = 0;
        uStack_aec = 0;
        uStack_ad8 = 0;
        uStack_ad4 = 0;
        uStack_ae0 = 0;
        uStack_adc = 0;
        if (0 < uStack_b00._4_4_) {
          lVar17 = 0;
          do {
            piStack_ac0[lVar17] = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_b00._4_4_);
        }
        if (puStack_ab8 != &uStack_ab0 && puStack_ab8 != (undefined8 *)0x0) {
          _free(puStack_ab8[-1]);
        }
        if (lStack_a68 != 0) {
          piVar2 = (int *)(lStack_a68 + 0x14);
          do {
            iVar28 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar28 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(&uStack_aa0);
          }
        }
        lStack_a68 = 0;
        uStack_a88 = 0;
        uStack_a84 = 0;
        uStack_a90 = 0;
        uStack_a8c = 0;
        uStack_a78 = 0;
        uStack_a74 = 0;
        uStack_a80 = 0;
        uStack_a7c = 0;
        if (0 < iStack_a9c) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)puStack_a60 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < iStack_a9c);
        }
        if (puStack_a58 != &uStack_a50 && puStack_a58 != (undefined8 *)0x0) {
          _free(puStack_a58[-1]);
        }
        if (lStack_a08 != 0) {
          piVar2 = (int *)(lStack_a08 + 0x14);
          do {
            iVar28 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar28 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(&uStack_a40);
          }
        }
        lStack_a08 = 0;
        uStack_a28 = 0;
        uStack_a24 = 0;
        uStack_a30 = 0;
        uStack_a2c = 0;
        uStack_a18 = 0;
        uStack_a14 = 0;
        uStack_a20 = 0;
        uStack_a1c = 0;
        if (0 < iStack_a3c) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)puStack_a00 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < iStack_a3c);
        }
        if (puStack_9f8 != &uStack_9f0 && puStack_9f8 != (undefined8 *)0x0) {
          _free(puStack_9f8[-1]);
        }
        if (lStack_9a8 != 0) {
          piVar2 = (int *)(lStack_9a8 + 0x14);
          do {
            iVar28 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar28 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(&uStack_9e0);
          }
        }
        lStack_9a8 = 0;
        uStack_9c8 = 0;
        uStack_9c4 = 0;
        uStack_9d0 = 0;
        uStack_9cc = 0;
        uStack_9b8 = 0;
        uStack_9b4 = 0;
        uStack_9c0 = 0;
        uStack_9bc = 0;
        if (0 < iStack_9dc) {
          lVar17 = 0;
          do {
            *(undefined4 *)((long)puStack_9a0 + lVar17 * 4) = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < iStack_9dc);
        }
        if (puStack_998 != &uStack_990 && puStack_998 != (undefined8 *)0x0) {
          _free(puStack_998[-1]);
        }
        if (lStack_948 != 0) {
          piVar2 = (int *)(lStack_948 + 0x14);
          do {
            iVar28 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = iVar28 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar28 + -1 == 0) {
            func_0x000109a848d4(&uStack_980);
          }
        }
        lStack_948 = 0;
        uStack_968 = 0;
        uStack_970 = 0;
        uStack_958 = 0;
        uStack_960 = 0;
        if (0 < uStack_980._4_4_) {
          lVar17 = 0;
          do {
            puStack_940[lVar17] = 0;
            lVar17 = lVar17 + 1;
          } while (lVar17 < uStack_980._4_4_);
        }
        if (puStack_938 != &uStack_930 && puStack_938 != (undefined8 *)0x0) {
          _free(puStack_938[-1]);
        }
        puVar18 = (undefined8 *)0x0;
        goto LAB_1094c1ff4;
      }
      FUN_109a852c8(&uStack_4a8,auStack_430,&uStack_7e8);
      uStack_2d0 = 0x42ff0000;
      iStack_2c4 = 0;
      uStack_2c0 = 0;
      auStack_2cc._0_4_ = 0;
      auStack_2cc._4_4_ = 0;
      puVar25 = (uint *)((ulong)&uStack_2d0 | 8);
      uStack_2b4 = 0;
      uStack_2b0 = 0;
      uStack_2bc = 0;
      uStack_2b8 = 0;
      uStack_2a4 = 0;
      uStack_2ac = 0;
      uStack_2a8 = 0;
      lStack_298 = 0;
      uStack_2a0 = 0;
      uStack_29c = 0;
      apuStack_280[1] = (uint *)0x0;
      apuStack_280[0] = (uint *)0x0;
      uStack_508 = 0x2010000;
      uStack_4f8 = 0;
      uStack_4f4 = 0;
      puStack_290 = puVar25;
      ppuStack_288 = apuStack_280;
      uStack_500 = &uStack_2d0;
      FUN_109a479a0(&uStack_4a8,&uStack_508);
      if (lStack_888 != 0) {
        piVar2 = (int *)(lStack_888 + 0x14);
        do {
          iVar30 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar30 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar30 + -1 == 0) {
          func_0x000109a848d4(&uStack_8c0);
        }
      }
      if (0 < iStack_8bc) {
        lVar17 = 0;
        do {
          puStack_880[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < iStack_8bc);
      }
      uStack_8b8 = auStack_2cc._4_4_;
      iStack_8b4 = iStack_2c4;
      uStack_8c0 = uStack_2d0;
      iStack_8bc = auStack_2cc._0_4_;
      uStack_8a8 = uStack_2b8;
      uStack_8a4 = uStack_2b4;
      uStack_8b0 = uStack_2c0;
      uStack_8ac = uStack_2bc;
      uStack_898 = uStack_2a8;
      uStack_894 = uStack_2a4;
      uStack_8a0 = uStack_2b0;
      uStack_89c = uStack_2ac;
      lStack_888 = lStack_298;
      uStack_890 = uStack_2a0;
      uStack_88c = uStack_29c;
      puVar27 = puStack_880;
      ppuVar22 = ppuStack_878;
      if ((ppuStack_878 != &puStack_870) &&
         (puVar27 = puVar24, ppuVar22 = &puStack_870, ppuStack_878 != (uint **)0x0)) {
        _free(ppuStack_878[-1]);
      }
      ppuStack_878 = ppuVar22;
      puStack_880 = puVar27;
      puVar18 = (undefined8 *)((ulong)&uStack_2d0 | 4);
      if ((int)auStack_2cc._0_4_ < 3) {
        *ppuStack_878 = *ppuStack_288;
        ppuStack_878[1] = ppuStack_288[1];
        uStack_2d0 = 0x42ff0000;
        puVar18[1] = 0;
        *puVar18 = 0;
        puVar18[3] = 0;
        puVar18[2] = 0;
        puVar18[5] = 0;
        puVar18[4] = 0;
        *(undefined8 *)((long)puVar18 + 0x34) = 0;
        *(undefined8 *)((long)puVar18 + 0x2c) = 0;
        if (ppuStack_288 != apuStack_280) {
          _free(ppuStack_288[-1]);
        }
      }
      else {
        ppuStack_878 = ppuStack_288;
        puStack_880 = puStack_290;
        uStack_2d0 = 0x42ff0000;
        puVar18[1] = 0;
        *puVar18 = 0;
        puVar18[3] = 0;
        puVar18[2] = 0;
        puVar18[5] = 0;
        puVar18[4] = 0;
        *(undefined8 *)((long)puVar18 + 0x34) = 0;
        *(undefined8 *)((long)puVar18 + 0x2c) = 0;
        puStack_290 = puVar25;
        ppuStack_288 = apuStack_280;
      }
      if (uStack_470 != 0) {
        piVar2 = (int *)(uStack_470 + 0x14);
        do {
          iVar30 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar30 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar30 + -1 == 0) {
          func_0x000109a848d4(&uStack_4a8);
        }
      }
      uStack_470 = 0;
      uStack_490 = 0;
      uStack_48c = 0;
      uStack_498 = 0;
      uStack_494 = 0;
      uStack_480 = 0;
      uStack_47c = 0;
      uStack_488 = 0;
      uStack_484 = 0;
      if (0 < iStack_4a4) {
        lVar17 = 0;
        do {
          *(undefined4 *)((long)puStack_468 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < iStack_4a4);
      }
      if (puStack_460 != &uStack_458 && puStack_460 != (undefined8 *)0x0) {
        _free(puStack_460[-1]);
      }
      if (uStack_3f8 != 0) {
        piVar2 = (int *)(uStack_3f8 + 0x14);
        do {
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = *piVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (uStack_828 != 0) {
        piVar2 = (int *)(uStack_828 + 0x14);
        do {
          iVar30 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar30 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar30 + -1 == 0) {
          func_0x000109a848d4(&uStack_860);
        }
      }
      ppuVar22 = ppuStack_3e8;
      uStack_828 = 0;
      uStack_848 = 0;
      uStack_850 = 0;
      uStack_838 = 0;
      uStack_840 = 0;
      if (uStack_860._4_4_ < 1) {
LAB_1094c10bc:
        if (2 < (int)auStack_430._4_4_) goto LAB_1094c10f0;
        uStack_860 = CONCAT44(auStack_430._4_4_,auStack_430._0_4_);
        uStack_858 = CONCAT44(auStack_428._4_4_,auStack_428._0_4_);
        *puStack_818 = *ppuStack_3e8;
        puStack_818[1] = ppuVar22[1];
      }
      else {
        lVar17 = 0;
        do {
          piStack_820[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < uStack_860._4_4_);
        if (uStack_860._4_4_ < 3) goto LAB_1094c10bc;
LAB_1094c10f0:
        uStack_860 = CONCAT44(uStack_860._4_4_,auStack_430._0_4_);
        func_0x000109a84868(&uStack_860,auStack_430);
      }
      uStack_848 = CONCAT44(uStack_414,uStack_418);
      uStack_850 = CONCAT44(uStack_41c,uStack_420);
      uStack_838 = CONCAT44(uStack_404,uStack_408);
      uStack_840 = CONCAT44(uStack_40c,uStack_410);
      uStack_830 = CONCAT44(uStack_3fc,uStack_400);
      uStack_828 = uStack_3f8;
      if (uStack_3f8 != 0) {
        piVar2 = (int *)(uStack_3f8 + 0x14);
        do {
          iVar30 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar30 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar30 + -1 == 0) {
          func_0x000109a848d4(auStack_430);
        }
      }
      uStack_3f8 = 0;
      uStack_418 = 0;
      uStack_414 = 0;
      uStack_420 = 0;
      uStack_41c = 0;
      uStack_408 = 0;
      uStack_404 = 0;
      uStack_410 = 0;
      uStack_40c = 0;
      if (0 < (int)auStack_430._4_4_) {
        lVar17 = 0;
        do {
          puStack_3f0[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)auStack_430._4_4_);
      }
      if (ppuStack_3e8 != apuStack_3e0 && ppuStack_3e8 != (uint **)0x0) {
        _free(ppuStack_3e8[-1]);
      }
      if (lStack_178 != 0) {
        piVar2 = (int *)(lStack_178 + 0x14);
        do {
          iVar30 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar30 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar30 + -1 == 0) {
          func_0x000109a848d4(auStack_1b0);
        }
      }
      lStack_178 = 0;
      uStack_198 = 0;
      uStack_194 = 0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      uStack_188 = 0;
      uStack_184 = 0;
      uStack_190 = 0;
      uStack_18c = 0;
      if (0 < (int)auStack_1b0._4_4_) {
        lVar17 = 0;
        do {
          *(undefined4 *)((long)appppppuStack_170[0] + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)auStack_1b0._4_4_);
      }
      if (appppppuStack_170[1] != ppppppuVar3 && appppppuStack_170[1] != (undefined8 ******)0x0) {
        _free(appppppuStack_170[1][-1]);
      }
      if (uStack_be8 != 0) {
        piVar2 = (int *)(uStack_be8 + 0x14);
        do {
          iVar30 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar30 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar30 + -1 == 0) {
          func_0x000109a848d4(&uStack_c20);
        }
      }
      uStack_be8 = 0;
      uStack_c08 = 0;
      uStack_c04 = 0;
      uStack_c10 = 0;
      uStack_c0c = 0;
      uStack_bf8 = 0;
      uStack_bf4 = 0;
      uStack_c00 = 0;
      uStack_bfc = 0;
      if (0 < iStack_c1c) {
        lVar17 = 0;
        do {
          puStack_be0[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < iStack_c1c);
      }
      if (puStack_bd8 != &uStack_bd0 && puStack_bd8 != (undefined8 *)0x0) {
        _free(puStack_bd8[-1]);
      }
      if (lStack_b88 != 0) {
        piVar2 = (int *)(lStack_b88 + 0x14);
        do {
          iVar30 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar30 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar30 + -1 == 0) {
          func_0x000109a848d4(&uStack_bc0);
        }
      }
      lStack_b88 = 0;
      uStack_ba8 = 0;
      uStack_ba4 = 0;
      uStack_bb0 = 0;
      uStack_bac = 0;
      uStack_b98 = 0;
      uStack_b94 = 0;
      uStack_ba0 = 0;
      uStack_b9c = 0;
      if (0 < (int)uStack_bbc) {
        lVar17 = 0;
        do {
          piStack_b80[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)uStack_bbc);
      }
      if (puStack_b78 != &uStack_b70 && puStack_b78 != (undefined8 *)0x0) {
        _free(puStack_b78[-1]);
      }
      if (lStack_b28 != 0) {
        piVar2 = (int *)(lStack_b28 + 0x14);
        do {
          iVar30 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar30 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar30 + -1 == 0) {
          func_0x000109a848d4(&uStack_b60);
        }
      }
      puVar21 = (undefined8 *)CONCAT44(auStack_428._4_4_,auStack_428._0_4_);
      puVar18 = (undefined8 *)CONCAT44(auStack_1a8._4_4_,auStack_1a8._0_4_);
      puVar13 = (undefined4 *)CONCAT44(iStack_2c4,auStack_2cc._4_4_);
      lStack_b28 = 0;
      uStack_b48 = 0;
      uStack_b44 = 0;
      uStack_b50 = 0;
      uStack_b4c = 0;
      uStack_b38 = 0;
      uStack_b34 = 0;
      uStack_b40 = 0;
      uStack_b3c = 0;
      if (0 < iStack_b5c) {
        lVar17 = 0;
        do {
          piStack_b20[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < iStack_b5c);
      }
      if (puStack_b18 != &uStack_b10 && puStack_b18 != (undefined8 *)0x0) {
        _free(puStack_b18[-1]);
        puVar21 = (undefined8 *)CONCAT44(auStack_428._4_4_,auStack_428._0_4_);
        puVar18 = (undefined8 *)CONCAT44(auStack_1a8._4_4_,auStack_1a8._0_4_);
        puVar13 = (undefined4 *)CONCAT44(iStack_2c4,auStack_2cc._4_4_);
      }
    }
    unique0x1000d0ae = puVar13;
    auStack_1a8 = (undefined1  [8])puVar18;
    auStack_428 = (undefined1  [8])puVar21;
    if (lStack_ac8 != 0) {
      piVar2 = (int *)(lStack_ac8 + 0x14);
      do {
        iVar30 = *piVar2;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = iVar30 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(&uStack_b00);
      }
    }
    lStack_ac8 = 0;
    uStack_ae8 = 0;
    uStack_ae4 = 0;
    uStack_af0 = 0;
    uStack_aec = 0;
    uStack_ad8 = 0;
    uStack_ad4 = 0;
    uStack_ae0 = 0;
    uStack_adc = 0;
    if (0 < uStack_b00._4_4_) {
      lVar17 = 0;
      do {
        piStack_ac0[lVar17] = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_b00._4_4_);
    }
    if (puStack_ab8 != &uStack_ab0 && puStack_ab8 != (undefined8 *)0x0) {
      _free(puStack_ab8[-1]);
    }
    if (lStack_a68 != 0) {
      piVar2 = (int *)(lStack_a68 + 0x14);
      do {
        iVar30 = *piVar2;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = iVar30 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(&uStack_aa0);
      }
    }
    lStack_a68 = 0;
    uStack_a88 = 0;
    uStack_a84 = 0;
    uStack_a90 = 0;
    uStack_a8c = 0;
    uStack_a78 = 0;
    uStack_a74 = 0;
    uStack_a80 = 0;
    uStack_a7c = 0;
    if (0 < iStack_a9c) {
      lVar17 = 0;
      do {
        *(undefined4 *)((long)puStack_a60 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < iStack_a9c);
    }
    if (puStack_a58 != &uStack_a50 && puStack_a58 != (undefined8 *)0x0) {
      _free(puStack_a58[-1]);
    }
    if (lStack_a08 != 0) {
      piVar2 = (int *)(lStack_a08 + 0x14);
      do {
        iVar30 = *piVar2;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = iVar30 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(&uStack_a40);
      }
    }
    lStack_a08 = 0;
    uStack_a28 = 0;
    uStack_a24 = 0;
    uStack_a30 = 0;
    uStack_a2c = 0;
    uStack_a18 = 0;
    uStack_a14 = 0;
    uStack_a20 = 0;
    uStack_a1c = 0;
    if (0 < iStack_a3c) {
      lVar17 = 0;
      do {
        *(undefined4 *)((long)puStack_a00 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < iStack_a3c);
    }
    if (puStack_9f8 != &uStack_9f0 && puStack_9f8 != (undefined8 *)0x0) {
      _free(puStack_9f8[-1]);
    }
    if (lStack_9a8 != 0) {
      piVar2 = (int *)(lStack_9a8 + 0x14);
      do {
        iVar30 = *piVar2;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = iVar30 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(&uStack_9e0);
      }
    }
    lStack_9a8 = 0;
    uStack_9c8 = 0;
    uStack_9c4 = 0;
    uStack_9d0 = 0;
    uStack_9cc = 0;
    uStack_9b8 = 0;
    uStack_9b4 = 0;
    uStack_9c0 = 0;
    uStack_9bc = 0;
    if (0 < iStack_9dc) {
      lVar17 = 0;
      do {
        *(undefined4 *)((long)puStack_9a0 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < iStack_9dc);
    }
    if (puStack_998 != &uStack_990 && puStack_998 != (undefined8 *)0x0) {
      _free(puStack_998[-1]);
    }
    if (lStack_948 != 0) {
      piVar2 = (int *)(lStack_948 + 0x14);
      do {
        iVar30 = *piVar2;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = iVar30 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(&uStack_980);
      }
    }
    lStack_948 = 0;
    uStack_968 = 0;
    uStack_970 = 0;
    uStack_958 = 0;
    uStack_960 = 0;
    if (0 < uStack_980._4_4_) {
      lVar17 = 0;
      do {
        puStack_940[lVar17] = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_980._4_4_);
    }
    if (puStack_938 != &uStack_930 && puStack_938 != (undefined8 *)0x0) {
      _free(puStack_938[-1]);
    }
  }
  appppppuStack_170[0] = (undefined8 ******)auStack_1a8;
  auStack_1b0._0_4_ = 0x42ff0000;
  auStack_1a8._4_4_ = 0;
  uStack_1a0 = 0;
  auStack_1b0._4_4_ = 0;
  auStack_1a8._0_4_ = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_184 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  appppppuStack_170[3] = (undefined8 ******)0x0;
  appppppuStack_170[2] = (undefined8 ******)0x0;
  auStack_430._0_4_ = (undefined4)*(undefined8 *)puStack_8e0;
  auStack_430._4_4_ = (undefined4)((ulong)*(undefined8 *)puStack_8e0 >> 0x20);
  appppppuStack_170[1] = appppppuStack_170 + 2;
  FUN_109a83fd0(auStack_1b0,2,auStack_430,uStack_920 & 0xfff);
  FUN_109a852c8(auStack_430,&uStack_7d8,&uStack_7f8);
  uStack_2d0 = 0x42ff0000;
  uStack_4a0 = &uStack_2d0;
  iStack_2c4 = 0;
  uStack_2c0 = 0;
  auStack_2cc._0_4_ = 0;
  auStack_2cc._4_4_ = 0;
  puStack_290 = (uint *)(auStack_2cc + 4);
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2a4 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  apuStack_280[1] = (uint *)0x0;
  apuStack_280[0] = (uint *)0x0;
  uStack_4a8 = 0x2010000;
  uStack_498 = 0;
  uStack_494 = 0;
  ppuStack_288 = apuStack_280;
  FUN_109a479a0(auStack_430,&uStack_4a8);
  auVar9 = auStack_428;
  if (uStack_3f8 != 0) {
    piVar2 = (int *)(uStack_3f8 + 0x14);
    do {
      iVar30 = *piVar2;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = iVar30 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar30 + -1 == 0) {
      func_0x000109a848d4(auStack_430);
      auVar9 = auStack_428;
    }
  }
  uStack_3f8 = 0;
  uStack_418 = 0;
  uStack_414 = 0;
  uStack_420 = 0;
  uStack_41c = 0;
  uStack_408 = 0;
  uStack_404 = 0;
  uStack_410 = 0;
  uStack_40c = 0;
  if (0 < (int)auStack_430._4_4_) {
    lVar17 = 0;
    do {
      puStack_3f0[lVar17] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)auStack_430._4_4_);
  }
  auStack_428 = auVar9;
  if (ppuStack_3e8 != apuStack_3e0 && ppuStack_3e8 != (uint **)0x0) {
    _free(ppuStack_3e8[-1]);
  }
  uVar29 = CONCAT44(uStack_8ac,uStack_8b0);
  puVar18 = (undefined8 *)&uStack_920;
  FUN_1094c2938(puVar18,uVar29,*puStack_880,puStack_880[1],CONCAT44(uStack_2bc,uStack_2c0),
                puStack_290,auStack_1b0);
  iVar30 = (int)uVar29;
  if (((ulong)puVar18 & 1) != 0) {
    auStack_430._0_4_ = 0x42ff0000;
    auStack_428._4_4_ = 0;
    uStack_420 = 0;
    auStack_430._4_4_ = 0;
    auStack_428._0_4_ = 0;
    puStack_3f0 = (uint *)((ulong)auStack_430 | 8);
    uStack_414 = 0;
    uStack_410 = 0;
    uStack_41c = 0;
    uStack_418 = 0;
    uStack_404 = 0;
    uStack_40c = 0;
    uStack_408 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3fc = 0;
    apuStack_3e0[1] = (uint *)0x0;
    apuStack_3e0[0] = (uint *)0x0;
    uStack_4a8 = 0x2010000;
    uStack_498 = 0;
    uStack_494 = 0;
    ppuStack_3e8 = apuStack_3e0;
    uStack_4a0 = (uint *)auStack_430;
    FUN_109a479a0(&uStack_860,&uStack_4a8);
    if (param_2[7] != 0) {
      piVar2 = (int *)(param_2[7] + 0x14);
      do {
        iVar30 = *piVar2;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = iVar30 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar30 + -1 == 0) {
        func_0x000109a848d4(param_2);
      }
    }
    param_2[7] = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    if (0 < *(int *)((long)param_2 + 4)) {
      lVar17 = 0;
      lVar23 = param_2[8];
      do {
        *(undefined4 *)(lVar23 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(int *)((long)param_2 + 4));
    }
    param_2[1] = CONCAT44(auStack_428._4_4_,auStack_428._0_4_);
    *param_2 = CONCAT44(auStack_430._4_4_,auStack_430._0_4_);
    param_2[3] = CONCAT44(uStack_414,uStack_418);
    param_2[2] = CONCAT44(uStack_41c,uStack_420);
    param_2[5] = CONCAT44(uStack_404,uStack_408);
    param_2[4] = CONCAT44(uStack_40c,uStack_410);
    param_2[7] = uStack_3f8;
    param_2[6] = CONCAT44(uStack_3fc,uStack_400);
    puVar20 = (undefined8 *)param_2[9];
    puVar21 = param_2 + 10;
    if (puVar20 != puVar21) {
      if (puVar20 != (undefined8 *)0x0) {
        _free(puVar20[-1]);
      }
      param_2[8] = param_2 + 1;
      param_2[9] = puVar21;
      puVar20 = puVar21;
    }
    if ((int)auStack_430._4_4_ < 3) {
      puVar21 = (undefined8 *)((ulong)auStack_430 | 4);
      *puVar20 = *ppuStack_3e8;
      puVar20[1] = ppuStack_3e8[1];
      auStack_430._0_4_ = 0x42ff0000;
      puVar21[1] = 0;
      *puVar21 = 0;
      puVar21[3] = 0;
      puVar21[2] = 0;
      puVar21[5] = 0;
      puVar21[4] = 0;
      *(undefined8 *)((long)puVar21 + 0x34) = 0;
      *(undefined8 *)((long)puVar21 + 0x2c) = 0;
      if (ppuStack_3e8 != apuStack_3e0) {
        _free(ppuStack_3e8[-1]);
      }
    }
    else {
      param_2[8] = puStack_3f0;
      param_2[9] = ppuStack_3e8;
    }
    uStack_5c8 = 0;
    iStack_5c4 = 0;
    uStack_5d0 = 0;
    iStack_5cc = 0;
    uStack_5c0 = 0;
    uStack_5bc = 0;
    FUN_10939e580(&uStack_5d0,param_1[0x2d],param_1[0x2e],param_1[0x2e] - param_1[0x2d] >> 3);
    if ((undefined8 *)CONCAT44(iStack_5cc,uStack_5d0) !=
        (undefined8 *)CONCAT44(iStack_5c4,uStack_5c8)) {
      uVar29 = NEON_scvtf(param_1[0x10],4);
      puVar21 = (undefined8 *)CONCAT44(iStack_5cc,uStack_5d0);
      do {
        puVar20 = puVar21 + 1;
        *puVar21 = CONCAT44((float)((ulong)*puVar21 >> 0x20) - (float)((ulong)uVar29 >> 0x20),
                            (float)*puVar21 - (float)uVar29);
        puVar21 = puVar20;
      } while (puVar20 != (undefined8 *)CONCAT44(iStack_5c4,uStack_5c8));
    }
    uStack_508 = (uint)param_1[0x11];
    iStack_504 = (int)((ulong)param_1[0x11] >> 0x20);
    FUN_109a829e8(auStack_430,&uStack_508,0);
    uStack_4a8 = 0x42ff0000;
    puStack_468 = &uStack_4a0;
    uStack_4a0._4_4_ = 0;
    uStack_498 = 0;
    iStack_4a4 = 0;
    uStack_4a0._0_4_ = 0;
    uStack_470 = 0;
    uStack_474 = 0;
    uStack_47c = 0;
    uStack_478 = 0;
    uStack_484 = 0;
    uStack_480 = 0;
    uStack_48c = 0;
    uStack_488 = 0;
    uStack_494 = 0;
    uStack_490 = 0;
    uStack_450 = 0;
    uStack_458 = 0;
    puStack_460 = &uStack_458;
    (**(code **)(*(long *)CONCAT44(auStack_430._4_4_,auStack_430._0_4_) + 0x18))
              ((long *)CONCAT44(auStack_430._4_4_,auStack_430._0_4_),auStack_430,&uStack_4a8,
               0xffffffff);
    FUN_10918eb6c(auStack_430);
    uStack_508 = 0x3010000;
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_558 = 0;
    uStack_554 = 0;
    uStack_568 = 0x8103000d;
    uStack_560 = &uStack_5d0;
    auStack_430._0_4_ = 0;
    auStack_430._4_4_ = 0x3ff00000;
    auStack_428._0_4_ = 0;
    auStack_428._4_4_ = 0;
    uStack_418 = 0;
    uStack_414 = 0;
    uStack_420 = 0;
    uStack_41c = 0;
    uStack_500 = &uStack_4a8;
    FUN_109aefa18(&uStack_508,&uStack_568,auStack_430,8,0);
    if ((0.0 < *(float *)(*param_1 + 0x10)) || (0.0 < *(float *)(*param_1 + 0x14))) {
      uVar29 = NEON_rev64(*appppppuStack_170[0],4);
      uStack_568 = (undefined4)uVar29;
      iStack_564 = (int)((ulong)uVar29 >> 0x20);
      FUN_109a829e8(auStack_430,&uStack_568,auStack_1b0._0_4_ & 0xfff);
      uStack_508 = 0x42ff0000;
      puStack_4c8 = &uStack_500;
      uStack_500._4_4_ = 0;
      uStack_4f8 = 0;
      iStack_504 = 0;
      uStack_500._0_4_ = 0;
      lStack_4d0 = 0;
      uStack_4d4 = 0;
      uStack_4dc = 0;
      uStack_4d8 = 0;
      uStack_4e4 = 0;
      uStack_4e0 = 0;
      uStack_4ec = 0;
      uStack_4e8 = 0;
      uStack_4f4 = 0;
      uStack_4f0 = 0;
      uStack_4b0 = 0;
      puStack_4b8 = (uint *)0x0;
      ppuStack_4c0 = &puStack_4b8;
      (**(code **)(*(long *)CONCAT44(auStack_430._4_4_,auStack_430._0_4_) + 0x18))
                ((long *)CONCAT44(auStack_430._4_4_,auStack_430._0_4_),auStack_430,&uStack_508,
                 0xffffffff);
      FUN_10918eb6c(auStack_430);
      uStack_980 = NEON_rev64(*appppppuStack_170[0],4);
      FUN_109a829e8(auStack_430,&uStack_980,0);
      uStack_568 = 0x42ff0000;
      puStack_528 = &uStack_560;
      uStack_560._4_4_ = 0;
      uStack_558 = 0;
      iStack_564 = 0;
      uStack_560._0_4_ = 0;
      lStack_530 = 0;
      uStack_534 = 0;
      uStack_53c = 0;
      uStack_538 = 0;
      uStack_544 = 0;
      uStack_540 = 0;
      uStack_54c = 0;
      uStack_548 = 0;
      uStack_554 = 0;
      uStack_550 = 0;
      uStack_510 = 0;
      uStack_518 = 0;
      puStack_520 = &uStack_518;
      (**(code **)(*(long *)CONCAT44(auStack_430._4_4_,auStack_430._0_4_) + 0x18))
                ((long *)CONCAT44(auStack_430._4_4_,auStack_430._0_4_),auStack_430,&uStack_568,
                 0xffffffff);
      FUN_10918eb6c(auStack_430);
      FUN_109a852c8(auStack_430,&uStack_4a8,&uStack_7f8);
      FUN_1094bb0c8(param_1,&uStack_8c0,auStack_1b0,auStack_430,&uStack_508,&uStack_568);
      if (uStack_3f8 != 0) {
        piVar2 = (int *)(uStack_3f8 + 0x14);
        do {
          iVar30 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar30 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar30 + -1 == 0) {
          func_0x000109a848d4(auStack_430);
        }
      }
      uStack_3f8 = 0;
      uStack_418 = 0;
      uStack_414 = 0;
      uStack_420 = 0;
      uStack_41c = 0;
      uStack_408 = 0;
      uStack_404 = 0;
      uStack_410 = 0;
      uStack_40c = 0;
      if (0 < (int)auStack_430._4_4_) {
        lVar17 = 0;
        do {
          puStack_3f0[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)auStack_430._4_4_);
      }
      if (ppuStack_3e8 != apuStack_3e0 && ppuStack_3e8 != (uint **)0x0) {
        _free(ppuStack_3e8[-1]);
      }
      FUN_109a852c8(auStack_430,param_2,&uStack_7e8);
      uStack_630._0_4_ = 0xc2010000;
      uStack_620 = 0;
      uStack_61c = 0;
      uStack_970 = 0;
      uStack_980 = CONCAT44(uStack_980._4_4_,0x1010000);
      puStack_978 = &uStack_568;
      puVar21 = &uStack_630;
      uStack_628 = (uint *)auStack_430;
      FUN_109a4813c(&uStack_508,puVar21,&uStack_980);
      iVar30 = (int)puVar21;
      if (uStack_3f8 != 0) {
        piVar2 = (int *)(uStack_3f8 + 0x14);
        do {
          iVar28 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar28 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar28 + -1 == 0) {
          func_0x000109a848d4(auStack_430);
        }
      }
      uStack_3f8 = 0;
      uStack_418 = 0;
      uStack_414 = 0;
      uStack_420 = 0;
      uStack_41c = 0;
      uStack_408 = 0;
      uStack_404 = 0;
      uStack_410 = 0;
      uStack_40c = 0;
      if (0 < (int)auStack_430._4_4_) {
        lVar17 = 0;
        do {
          puStack_3f0[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)auStack_430._4_4_);
      }
      if (ppuStack_3e8 != apuStack_3e0 && ppuStack_3e8 != (uint **)0x0) {
        _free(ppuStack_3e8[-1]);
      }
      if (lStack_530 != 0) {
        piVar2 = (int *)(lStack_530 + 0x14);
        do {
          iVar28 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar28 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar28 + -1 == 0) {
          func_0x000109a848d4(&uStack_568);
        }
      }
      lStack_530 = 0;
      uStack_550 = 0;
      uStack_54c = 0;
      uStack_558 = 0;
      uStack_554 = 0;
      uStack_540 = 0;
      uStack_53c = 0;
      uStack_548 = 0;
      uStack_544 = 0;
      if (0 < iStack_564) {
        lVar17 = 0;
        do {
          *(undefined4 *)((long)puStack_528 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < iStack_564);
      }
      if (puStack_520 != &uStack_518 && puStack_520 != (undefined8 *)0x0) {
        _free(puStack_520[-1]);
      }
      if (lStack_4d0 != 0) {
        piVar2 = (int *)(lStack_4d0 + 0x14);
        do {
          iVar28 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar28 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar28 + -1 == 0) {
          func_0x000109a848d4(&uStack_508);
        }
      }
      lStack_4d0 = 0;
      uStack_4f0 = 0;
      uStack_4ec = 0;
      uStack_4f8 = 0;
      uStack_4f4 = 0;
      uStack_4e0 = 0;
      uStack_4dc = 0;
      uStack_4e8 = 0;
      uStack_4e4 = 0;
      if (0 < iStack_504) {
        lVar17 = 0;
        do {
          *(undefined4 *)((long)puStack_4c8 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < iStack_504);
      }
      bVar12 = ppuStack_4c0 == &puStack_4b8;
      ppuVar22 = ppuStack_4c0;
      uStack_500 = (uint *)CONCAT44(uStack_500._4_4_,(undefined4)uStack_500);
    }
    else {
      FUN_109a852c8(auStack_430,param_2,&uStack_7e8);
      uStack_568 = 0xc2010000;
      uStack_558 = 0;
      uStack_554 = 0;
      uStack_560 = (uint *)auStack_430;
      FUN_109a852c8(&uStack_508,&uStack_4a8,&uStack_7f8);
      uStack_620 = 0;
      uStack_61c = 0;
      uStack_630._0_4_ = 0x1010000;
      puVar13 = &uStack_568;
      uStack_628 = &uStack_508;
      FUN_109a4813c(auStack_1b0,puVar13,&uStack_630);
      iVar30 = (int)puVar13;
      puVar25 = uStack_500;
      if (lStack_4d0 != 0) {
        piVar2 = (int *)(lStack_4d0 + 0x14);
        do {
          iVar28 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar28 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar28 + -1 == 0) {
          func_0x000109a848d4(&uStack_508);
          puVar25 = uStack_500;
        }
      }
      lStack_4d0 = 0;
      uStack_4f0 = 0;
      uStack_4ec = 0;
      uStack_4f8 = 0;
      uStack_4f4 = 0;
      uStack_4e0 = 0;
      uStack_4dc = 0;
      uStack_4e8 = 0;
      uStack_4e4 = 0;
      if (0 < iStack_504) {
        lVar17 = 0;
        do {
          *(undefined4 *)((long)puStack_4c8 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < iStack_504);
      }
      uStack_500 = puVar25;
      if (ppuStack_4c0 != &puStack_4b8 && ppuStack_4c0 != (uint **)0x0) {
        _free(ppuStack_4c0[-1]);
      }
      if (uStack_3f8 != 0) {
        piVar2 = (int *)(uStack_3f8 + 0x14);
        do {
          iVar28 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = iVar28 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar28 + -1 == 0) {
          func_0x000109a848d4(auStack_430);
        }
      }
      uStack_3f8 = 0;
      uStack_418 = 0;
      uStack_414 = 0;
      uStack_420 = 0;
      uStack_41c = 0;
      uStack_408 = 0;
      uStack_404 = 0;
      uStack_410 = 0;
      uStack_40c = 0;
      if (0 < (int)auStack_430._4_4_) {
        lVar17 = 0;
        do {
          puStack_3f0[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)auStack_430._4_4_);
      }
      bVar12 = ppuStack_3e8 == apuStack_3e0;
      ppuVar22 = ppuStack_3e8;
    }
    if (!bVar12 && ppuVar22 != (uint **)0x0) {
      _free(ppuVar22[-1]);
    }
    if (uStack_470 != 0) {
      piVar2 = (int *)(uStack_470 + 0x14);
      do {
        iVar28 = *piVar2;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = iVar28 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar28 + -1 == 0) {
        func_0x000109a848d4(&uStack_4a8);
      }
    }
    uStack_470 = 0;
    uStack_490 = 0;
    uStack_48c = 0;
    uStack_498 = 0;
    uStack_494 = 0;
    uStack_480 = 0;
    uStack_47c = 0;
    uStack_488 = 0;
    uStack_484 = 0;
    if (0 < iStack_4a4) {
      lVar17 = 0;
      do {
        *(undefined4 *)((long)puStack_468 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < iStack_4a4);
    }
    if (puStack_460 != &uStack_458 && puStack_460 != (undefined8 *)0x0) {
      _free(puStack_460[-1]);
    }
    if (CONCAT44(iStack_5cc,uStack_5d0) != 0) {
      uStack_5c8 = uStack_5d0;
      iStack_5c4 = iStack_5cc;
      __ZdlPv();
    }
  }
  if (lStack_298 != 0) {
    piVar2 = (int *)(lStack_298 + 0x14);
    do {
      iVar28 = *piVar2;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = iVar28 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_2d0);
    }
  }
  lStack_298 = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  if (0 < (int)auStack_2cc._0_4_) {
    lVar17 = 0;
    do {
      puStack_290[lVar17] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)auStack_2cc._0_4_);
  }
  if (ppuStack_288 != apuStack_280 && ppuStack_288 != (uint **)0x0) {
    _free(ppuStack_288[-1]);
  }
  if (lStack_178 != 0) {
    piVar2 = (int *)(lStack_178 + 0x14);
    do {
      iVar28 = *piVar2;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = iVar28 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(auStack_1b0);
    }
  }
  lStack_178 = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  if (0 < (int)auStack_1b0._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)((long)appppppuStack_170[0] + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)auStack_1b0._4_4_);
  }
  if ((undefined8 *******)appppppuStack_170[1] != appppppuStack_170 + 2 &&
      appppppuStack_170[1] != (undefined8 ******)0x0) {
    _free(appppppuStack_170[1][-1]);
  }
LAB_1094c1ff4:
  if (uStack_8e8 != 0) {
    piVar2 = (int *)(uStack_8e8 + 0x14);
    do {
      iVar28 = *piVar2;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = iVar28 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_920);
    }
  }
  uStack_8e8 = 0;
  uStack_908 = 0;
  uStack_904 = 0;
  uStack_910 = 0;
  uStack_90c = 0;
  uStack_8f8 = 0;
  uStack_8f4 = 0;
  uStack_900 = 0;
  uStack_8fc = 0;
  if (0 < iStack_91c) {
    lVar17 = 0;
    do {
      puStack_8e0[lVar17] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < iStack_91c);
  }
  if (puStack_8d8 != &uStack_8d0 && puStack_8d8 != (undefined8 *)0x0) {
    _free(puStack_8d8[-1]);
  }
  if (lStack_888 != 0) {
    piVar2 = (int *)(lStack_888 + 0x14);
    do {
      iVar28 = *piVar2;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = iVar28 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_8c0);
    }
  }
  lStack_888 = 0;
  uStack_8a8 = 0;
  uStack_8a4 = 0;
  uStack_8b0 = 0;
  uStack_8ac = 0;
  uStack_898 = 0;
  uStack_894 = 0;
  uStack_8a0 = 0;
  uStack_89c = 0;
  if (0 < iStack_8bc) {
    lVar17 = 0;
    do {
      puStack_880[lVar17] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < iStack_8bc);
  }
  if (ppuStack_878 != &puStack_870 && ppuStack_878 != (uint **)0x0) {
    _free(ppuStack_878[-1]);
  }
  if (uStack_828 != 0) {
    piVar2 = (int *)(uStack_828 + 0x14);
    do {
      iVar28 = *piVar2;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = iVar28 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_860);
    }
  }
  uStack_828 = 0;
  uStack_848 = 0;
  uStack_850 = 0;
  uStack_838 = 0;
  uStack_840 = 0;
  if (0 < uStack_860._4_4_) {
    lVar17 = 0;
    do {
      piStack_820[lVar17] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_860._4_4_);
  }
  if (puStack_818 != &uStack_810 && puStack_818 != (undefined8 *)0x0) {
    _free(puStack_818[-1]);
  }
  if (lStack_7a0 != 0) {
    piVar2 = (int *)(lStack_7a0 + 0x14);
    do {
      iVar28 = *piVar2;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = iVar28 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_7d8);
    }
  }
  lStack_7a0 = 0;
  uStack_7c0 = 0;
  uStack_7bc = 0;
  uStack_7c8 = 0;
  uStack_7c4 = 0;
  uStack_7b0 = 0;
  uStack_7ac = 0;
  uStack_7b8 = 0;
  uStack_7b4 = 0;
  if (0 < (int)uStack_7d4) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_798 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)uStack_7d4);
  }
  if (puStack_790 != &uStack_788 && puStack_790 != (undefined8 *)0x0) {
    _free(puStack_790[-1]);
  }
  if (lStack_740 != 0) {
    piVar2 = (int *)(lStack_740 + 0x14);
    do {
      iVar28 = *piVar2;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = iVar28 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_778);
    }
  }
  lStack_740 = 0;
  uStack_760 = 0;
  uStack_75c = 0;
  uStack_768 = 0;
  uStack_764 = 0;
  uStack_750 = 0;
  uStack_74c = 0;
  uStack_758 = 0;
  uStack_754 = 0;
  if (0 < (int)uStack_774) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_738 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)uStack_774);
  }
  if (puStack_730 != &uStack_728 && puStack_730 != (undefined8 *)0x0) {
    _free(puStack_730[-1]);
  }
  if (lStack_6d0 != 0) {
    piVar2 = (int *)(lStack_6d0 + 0x14);
    do {
      iVar28 = *piVar2;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = iVar28 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_708);
    }
  }
  lStack_6d0 = 0;
  uStack_6f0 = 0;
  uStack_6ec = 0;
  uStack_6f8 = 0;
  uStack_6f4 = 0;
  uStack_6e0 = 0;
  uStack_6dc = 0;
  uStack_6e8 = 0;
  uStack_6e4 = 0;
  if (0 < iStack_704) {
    lVar17 = 0;
    do {
      piStack_6c8[lVar17] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < iStack_704);
  }
  if (puStack_6c0 != &uStack_6b8 && puStack_6c0 != (undefined8 *)0x0) {
    _free(puStack_6c0[-1]);
  }
  if (ppuStack_670 != (undefined8 **)0x0) {
    piVar2 = (int *)((long)ppuStack_670 + 0x14);
    do {
      iVar28 = *piVar2;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = iVar28 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_6a8);
    }
  }
  ppuStack_670 = (undefined8 **)0x0;
  uStack_690 = 0;
  uStack_68c = 0;
  uStack_698 = 0;
  uStack_694 = 0;
  uStack_680 = 0;
  uStack_67c = 0;
  uStack_688 = 0;
  uStack_684 = 0;
  if (0 < uStack_6a8._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)((long)puStack_668 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_6a8._4_4_);
  }
  if ((undefined8 **)puStack_660 != &puStack_658 && puStack_660 != (undefined8 *)0x0) {
    _free(puStack_660[-1]);
  }
  auStack_430 = (undefined1  [8])&pppuStack_648;
  puVar14 = auStack_430;
  FUN_1093702c4(puVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    if (iVar30 == 0) goto LAB_1094c2864;
    func_0x000104bd46a0(puVar14);
    func_0x00010567aa40(auStack_430);
    func_0x00010567aa40(&uStack_568);
    func_0x00010567aa40(&uStack_508);
    func_0x00010567aa40(&uStack_4a8);
    if (CONCAT44(iStack_5cc,uStack_5d0) != 0) {
      uStack_5c8 = uStack_5d0;
      iStack_5c4 = iStack_5cc;
      __ZdlPv();
    }
    func_0x00010567aa40(&uStack_2d0);
    func_0x00010567aa40(auStack_1b0);
    func_0x00010567aa40(&uStack_920);
    func_0x00010567aa40(&uStack_8c0);
    func_0x00010567aa40(&uStack_860);
    do {
      func_0x00010567aa40(&uStack_7d8);
      func_0x00010567aa40(&uStack_778);
      func_0x00010567aa40(&uStack_708);
      func_0x00010567aa40(&uStack_6a8);
      uStack_630 = &pppuStack_648;
      FUN_1093702c4(&uStack_630);
LAB_1094c2864:
      __Unwind_Resume(puVar14);
    } while( true );
  }
  return puVar18;
}



/* Entry: 1094c2938; end: 1094c2a13;  */

undefined8
FUN_1094c2938(uint *param_1,byte *param_2,int param_3,int param_4,float *param_5,int *param_6,
             uint *param_7)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  if (((((*(int **)(param_1 + 0x10))[1] == param_4 && **(int **)(param_1 + 0x10) == param_3) &&
       (param_4 == param_6[1] && param_3 == *param_6)) &&
      (param_4 == (*(int **)(param_7 + 0x10))[1] && param_3 == **(int **)(param_7 + 0x10))) &&
     (((*param_7 ^ *param_1) & 0xfff) == 0)) {
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    if ((int)((long)(int)uVar2 * (long)(int)uVar1) != 0) {
      uVar4 = 0;
      puVar5 = *(undefined1 **)(param_7 + 4);
      pbVar7 = *(byte **)(param_1 + 4);
      do {
        uVar9 = 0xffffffff;
        pbVar3 = param_2;
        puVar6 = puVar5;
        pbVar8 = pbVar7;
        do {
          fVar10 = 1.0;
          if (*param_5 <= 1.0) {
            fVar10 = *param_5;
          }
          param_2 = pbVar3 + 1;
          pbVar7 = pbVar8 + 1;
          fVar11 = 0.0;
          if (0.0 <= fVar10) {
            fVar11 = fVar10;
          }
          puVar5 = puVar6 + 1;
          *puVar6 = (char)(int)((1.0 - fVar11) * (float)*pbVar3 + fVar11 * (float)*pbVar8);
          uVar9 = uVar9 + 1;
          pbVar3 = param_2;
          puVar6 = puVar5;
          pbVar8 = pbVar7;
        } while (uVar9 < (*param_1 >> 3 & 0x1ff));
        uVar4 = (ulong)((int)uVar4 + 1);
        param_5 = param_5 + 1;
      } while (uVar4 < (ulong)((long)(int)uVar2 * (long)(int)uVar1));
    }
    return 1;
  }
  return 0;
}



/* Entry: 1094c2a14; end: 1094c30ef;  */

long * FUN_1094c2a14(long *param_1,undefined4 *param_2,long param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 auStack_b48 [2];
  double *pdStack_b40;
  undefined8 uStack_b38;
  undefined4 auStack_9e8 [2];
  undefined8 *puStack_9e0;
  undefined8 uStack_9d8;
  undefined4 uStack_888;
  undefined4 uStack_884;
  long *plStack_880;
  undefined8 uStack_878;
  undefined4 auStack_728 [2];
  long lStack_720;
  undefined8 uStack_718;
  double dStack_710;
  double dStack_708;
  double dStack_700;
  double dStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  double dStack_6d0;
  double dStack_6c8;
  double dStack_6c0;
  double dStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined1 auStack_690 [8];
  undefined1 auStack_688 [4];
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  long lStack_658;
  undefined1 *puStack_650;
  undefined8 *puStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined1 auStack_630 [8];
  undefined1 auStack_628 [4];
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  long lStack_5f8;
  undefined1 *puStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined4 auStack_520 [2];
  long *plStack_518;
  undefined8 uStack_510;
  undefined4 auStack_508 [2];
  undefined1 *puStack_500;
  undefined8 uStack_4f8;
  undefined1 auStack_4f0 [8];
  undefined1 auStack_4e8 [4];
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  long lStack_4b8;
  undefined1 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined1 auStack_490 [8];
  undefined1 auStack_488 [4];
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  long lStack_458;
  undefined1 *puStack_450;
  undefined8 *puStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 auStack_430 [8];
  undefined1 auStack_428 [4];
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  long lStack_3f8;
  undefined1 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined1 auStack_3d0 [8];
  undefined1 auStack_3c8 [4];
  undefined8 auStack_3c4 [4];
  long alStack_3a0 [30];
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [12];
  undefined8 auStack_294 [2];
  long alStack_280 [30];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [12];
  undefined8 auStack_174 [2];
  long alStack_160 [30];
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = *(int *)param_1[8];
  iVar3 = ((int *)param_1[8])[1];
  if ((iVar3 == (*(int **)(param_2 + 0x10))[1] && iVar2 == **(int **)(param_2 + 0x10)) &&
     (iVar3 == (*(int **)(param_3 + 0x40))[1] && iVar2 == **(int **)(param_3 + 0x40))) {
    auStack_430._0_4_ = 0x42ff0000;
    uStack_424 = 0;
    uStack_420 = 0;
    stack0xfffffffffffffbd4 = 0;
    auStack_2a8 = (undefined1  [8])auStack_430;
    puStack_3f0 = auStack_428;
    uStack_414 = 0;
    uStack_410 = 0;
    uStack_41c = 0;
    uStack_418 = 0;
    uStack_404 = 0;
    uStack_40c = 0;
    uStack_408 = 0;
    lStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3fc = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    auStack_490._0_4_ = 0x42ff0000;
    puStack_450 = auStack_488;
    uStack_484 = 0;
    uStack_480 = 0;
    stack0xfffffffffffffb74 = 0;
    uStack_474 = 0;
    uStack_470 = 0;
    uStack_47c = 0;
    uStack_478 = 0;
    uStack_464 = 0;
    uStack_46c = 0;
    uStack_468 = 0;
    lStack_458 = 0;
    uStack_460 = 0;
    uStack_45c = 0;
    uStack_440 = 0;
    uStack_438 = 0;
    auStack_180._0_8_ = 0;
    auStack_190._0_4_ = 0x1010000;
    auStack_2b0._0_4_ = 0x2010000;
    auStack_2a0._0_8_ = 0;
    puStack_448 = &uStack_440;
    puStack_3e8 = &uStack_3e0;
    auStack_188 = (undefined1  [8])param_1;
    FUN_109ac9fc8(auStack_190,auStack_2b0,0x25,0);
    auStack_180._0_8_ = 0;
    auStack_190._0_4_ = 0x1010000;
    auStack_2b0._0_4_ = 0x2010000;
    auStack_2a0._0_8_ = 0;
    auStack_2a8 = (undefined1  [8])auStack_490;
    auStack_188 = (undefined1  [8])param_2;
    FUN_109ac9fc8(auStack_190,auStack_2b0,0x25,0);
    lVar16 = 0;
    do {
      *(undefined4 *)(auStack_190 + lVar16) = 0x42ff0000;
      *(undefined8 *)(auStack_188 + lVar16 + 4) = 0;
      *(undefined8 *)(auStack_190 + lVar16 + 4) = 0;
      *(undefined8 *)((long)auStack_174 + lVar16) = 0;
      *(undefined8 *)(auStack_180 + lVar16 + 4) = 0;
      *(undefined8 *)(&stack0xfffffffffffffe9c + lVar16) = 0;
      *(undefined8 *)((long)auStack_174 + lVar16 + 8) = 0;
      puVar13 = (undefined8 *)((long)alStack_160 + lVar16 + 0x20);
      *puVar13 = 0;
      *(undefined8 *)((long)alStack_160 + lVar16 + 8) = 0;
      *(undefined8 *)((long)alStack_160 + lVar16) = 0;
      *(undefined1 **)((long)alStack_160 + lVar16 + 0x10) = auStack_188 + lVar16;
      *(undefined8 **)((long)alStack_160 + lVar16 + 0x18) = puVar13;
      lVar12 = lVar16 + 0x60;
      *(undefined8 *)((long)alStack_160 + lVar16 + 0x28) = 0;
      lVar16 = lVar12;
    } while (lVar12 != 0x120);
    lVar16 = 0;
    do {
      *(undefined4 *)(auStack_2b0 + lVar16) = 0x42ff0000;
      *(undefined8 *)(auStack_2a8 + lVar16 + 4) = 0;
      *(undefined8 *)(auStack_2b0 + lVar16 + 4) = 0;
      *(undefined8 *)((long)auStack_294 + lVar16) = 0;
      *(undefined8 *)(auStack_2a0 + lVar16 + 4) = 0;
      *(undefined8 *)(&stack0xfffffffffffffd7c + lVar16) = 0;
      *(undefined8 *)((long)auStack_294 + lVar16 + 8) = 0;
      puVar13 = (undefined8 *)((long)alStack_280 + lVar16 + 0x20);
      *puVar13 = 0;
      *(undefined8 *)((long)alStack_280 + lVar16 + 8) = 0;
      *(undefined8 *)((long)alStack_280 + lVar16) = 0;
      *(undefined1 **)((long)alStack_280 + lVar16 + 0x10) = auStack_2a8 + lVar16;
      *(undefined8 **)((long)alStack_280 + lVar16 + 0x18) = puVar13;
      lVar12 = lVar16 + 0x60;
      *(undefined8 *)((long)alStack_280 + lVar16 + 0x28) = 0;
      lVar16 = lVar12;
    } while (lVar12 != 0x120);
    lVar16 = 0;
    do {
      *(undefined4 *)(auStack_3d0 + lVar16) = 0x42ff0000;
      *(undefined8 *)((long)auStack_3c4 + lVar16) = 0;
      *(undefined8 *)(auStack_3d0 + lVar16 + 4) = 0;
      *(undefined8 *)((long)auStack_3c4 + lVar16 + 0x10) = 0;
      *(undefined8 *)((long)auStack_3c4 + lVar16 + 8) = 0;
      *(undefined8 *)(&stack0xfffffffffffffc5c + lVar16) = 0;
      *(undefined8 *)((long)auStack_3c4 + lVar16 + 0x18) = 0;
      puVar13 = (undefined8 *)((long)alStack_3a0 + lVar16 + 0x20);
      *puVar13 = 0;
      *(undefined8 *)((long)alStack_3a0 + lVar16 + 8) = 0;
      *(undefined8 *)((long)alStack_3a0 + lVar16) = 0;
      *(undefined1 **)((long)alStack_3a0 + lVar16 + 0x10) = auStack_3c8 + lVar16;
      *(undefined8 **)((long)alStack_3a0 + lVar16 + 0x18) = puVar13;
      lVar12 = lVar16 + 0x60;
      *(undefined8 *)((long)alStack_3a0 + lVar16 + 0x28) = 0;
      lVar16 = lVar12;
    } while (lVar12 != 0x120);
    FUN_109a3d9cc(auStack_430,auStack_190);
    FUN_109a3d9cc(auStack_490,auStack_2b0);
    lVar16 = 0;
    do {
      plVar10 = (long *)(auStack_3d0 + lVar16);
      lVar12 = param_3;
      FUN_1094c355c(auStack_190 + lVar16,auStack_2b0 + lVar16);
      lVar16 = lVar16 + 0x60;
    } while (lVar16 != 0x120);
    auStack_4f0._0_4_ = 0x42ff0000;
    uStack_4e4 = 0;
    uStack_4e0 = 0;
    stack0xfffffffffffffb14 = 0;
    puStack_4b0 = auStack_4e8;
    uStack_4d4 = 0;
    uStack_4d0 = 0;
    uStack_4dc = 0;
    uStack_4d8 = 0;
    uStack_4c4 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    lStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4bc = 0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    plVar14 = (long *)auStack_3d0;
    param_2 = (undefined4 *)auStack_4f0;
    puStack_4a8 = &uStack_4a0;
    FUN_1094c3518();
    param_1 = plVar14;
    param_3 = lVar12;
    if (((ulong)plVar14 & 1) != 0) {
      auStack_508[0] = 0x1010000;
      puStack_500 = auStack_4f0;
      uStack_4f8 = 0;
      auStack_520[0] = 0x2010000;
      uStack_510 = 0;
      param_1 = (long *)auStack_508;
      param_2 = auStack_520;
      param_3 = 0x27;
      plVar10 = (long *)0x0;
      plStack_518 = param_4;
      FUN_109ac9fc8();
    }
    param_4 = plVar10;
    if (lStack_4b8 != 0) {
      piVar1 = (int *)(lStack_4b8 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        param_1 = (long *)auStack_4f0;
        func_0x000109a848d4();
      }
    }
    lStack_4b8 = 0;
    uStack_4d8 = 0;
    uStack_4d4 = 0;
    uStack_4e0 = 0;
    uStack_4dc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    if (0 < (int)auStack_4f0._4_4_) {
      lVar16 = 0;
      do {
        *(undefined4 *)(puStack_4b0 + lVar16 * 4) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (int)auStack_4f0._4_4_);
    }
    if (puStack_4a8 != &uStack_4a0 && puStack_4a8 != (undefined8 *)0x0) {
      param_1 = (long *)puStack_4a8[-1];
      _free();
    }
    plVar10 = (long *)auStack_2b0;
    do {
      plVar15 = plVar10 + -0xc;
      if (plVar10[-5] != 0) {
        piVar1 = (int *)(plVar10[-5] + 0x14);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          param_1 = plVar15;
          func_0x000109a848d4();
        }
      }
      plVar10[-5] = 0;
      plVar10[-9] = 0;
      plVar10[-10] = 0;
      plVar10[-7] = 0;
      plVar10[-8] = 0;
      if (0 < *(int *)((long)plVar10 + -0x5c)) {
        lVar16 = 0;
        lVar12 = plVar10[-4];
        do {
          *(undefined4 *)(lVar12 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)((long)plVar10 + -0x5c));
      }
      plVar11 = (long *)plVar10[-3];
      if (plVar11 != plVar10 + -2 && plVar11 != (long *)0x0) {
        param_1 = (long *)plVar11[-1];
        _free();
      }
      plVar10 = plVar15;
    } while (plVar15 != (long *)auStack_3d0);
    plVar10 = (long *)auStack_190;
    do {
      plVar15 = plVar10 + -0xc;
      if (plVar10[-5] != 0) {
        piVar1 = (int *)(plVar10[-5] + 0x14);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          param_1 = plVar15;
          func_0x000109a848d4();
        }
      }
      plVar10[-5] = 0;
      plVar10[-9] = 0;
      plVar10[-10] = 0;
      plVar10[-7] = 0;
      plVar10[-8] = 0;
      if (0 < *(int *)((long)plVar10 + -0x5c)) {
        lVar16 = 0;
        lVar12 = plVar10[-4];
        do {
          *(undefined4 *)(lVar12 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)((long)plVar10 + -0x5c));
      }
      plVar11 = (long *)plVar10[-3];
      if (plVar11 != plVar10 + -2 && plVar11 != (long *)0x0) {
        param_1 = (long *)plVar11[-1];
        _free();
      }
      plVar10 = plVar15;
    } while (plVar15 != (long *)auStack_2b0);
    plVar10 = alStack_70;
    do {
      plVar15 = plVar10 + -0xc;
      if (plVar10[-5] != 0) {
        piVar1 = (int *)(plVar10[-5] + 0x14);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          param_1 = plVar15;
          func_0x000109a848d4();
        }
      }
      plVar10[-5] = 0;
      plVar10[-9] = 0;
      plVar10[-10] = 0;
      plVar10[-7] = 0;
      plVar10[-8] = 0;
      if (0 < *(int *)((long)plVar10 + -0x5c)) {
        lVar16 = 0;
        lVar12 = plVar10[-4];
        do {
          *(undefined4 *)(lVar12 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)((long)plVar10 + -0x5c));
      }
      plVar11 = (long *)plVar10[-3];
      if (plVar11 != plVar10 + -2 && plVar11 != (long *)0x0) {
        param_1 = (long *)plVar11[-1];
        _free();
      }
      plVar10 = plVar15;
    } while (plVar15 != (long *)auStack_190);
    if (lStack_458 != 0) {
      piVar1 = (int *)(lStack_458 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        param_1 = (long *)auStack_490;
        func_0x000109a848d4();
      }
    }
    lStack_458 = 0;
    uStack_478 = 0;
    uStack_474 = 0;
    uStack_480 = 0;
    uStack_47c = 0;
    uStack_468 = 0;
    uStack_464 = 0;
    uStack_470 = 0;
    uStack_46c = 0;
    if (0 < (int)auStack_490._4_4_) {
      lVar16 = 0;
      do {
        *(undefined4 *)(puStack_450 + lVar16 * 4) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (int)auStack_490._4_4_);
    }
    if (puStack_448 != &uStack_440 && puStack_448 != (undefined8 *)0x0) {
      param_1 = (long *)puStack_448[-1];
      _free();
    }
    if (lStack_3f8 != 0) {
      piVar1 = (int *)(lStack_3f8 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        param_1 = (long *)auStack_430;
        func_0x000109a848d4();
      }
    }
    lStack_3f8 = 0;
    uStack_418 = 0;
    uStack_414 = 0;
    uStack_420 = 0;
    uStack_41c = 0;
    uStack_408 = 0;
    uStack_404 = 0;
    uStack_410 = 0;
    uStack_40c = 0;
    if (0 < (int)auStack_430._4_4_) {
      lVar16 = 0;
      do {
        *(undefined4 *)(puStack_3f0 + lVar16 * 4) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (int)auStack_430._4_4_);
    }
    if (puStack_3e8 != &uStack_3e0 && puStack_3e8 != (undefined8 *)0x0) {
      param_1 = (long *)puStack_3e8[-1];
      _free();
    }
  }
  else {
    plVar14 = (long *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_70[0]) {
    return plVar14;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
    lVar16 = 0xc0;
    do {
      func_0x00010567aa40(auStack_3d0 + lVar16);
      lVar16 = lVar16 + -0x60;
    } while (lVar16 != -0x60);
    lVar16 = 0xc0;
    do {
      func_0x00010567aa40(auStack_2b0 + lVar16);
      lVar16 = lVar16 + -0x60;
    } while (lVar16 != -0x60);
    lVar16 = 0xc0;
    do {
      func_0x00010567aa40(auStack_190 + lVar16);
      lVar16 = lVar16 + -0x60;
    } while (lVar16 != -0x60);
    func_0x00010567aa40(auStack_490);
    func_0x00010567aa40(auStack_430);
  }
  __Unwind_Resume(param_1);
  auStack_630._0_4_ = 0x42ff0000;
  uStack_624 = 0;
  uStack_620 = 0;
  stack0xfffffffffffff9d4 = 0;
  uStack_614 = 0;
  uStack_610 = 0;
  uStack_61c = 0;
  uStack_618 = 0;
  plStack_880 = (long *)auStack_630;
  uStack_604 = 0;
  uStack_60c = 0;
  uStack_608 = 0;
  puStack_5f0 = auStack_628;
  lStack_5f8 = 0;
  uStack_600 = 0;
  uStack_5fc = 0;
  uStack_5e0 = 0;
  uStack_5d8 = 0;
  auStack_690._0_4_ = 0x42ff0000;
  puStack_650 = auStack_688;
  uStack_684 = 0;
  uStack_680 = 0;
  stack0xfffffffffffff974 = 0;
  uStack_674 = 0;
  uStack_670 = 0;
  uStack_67c = 0;
  uStack_678 = 0;
  uStack_664 = 0;
  uStack_66c = 0;
  uStack_668 = 0;
  lStack_658 = 0;
  uStack_660 = 0;
  uStack_65c = 0;
  uStack_638 = 0;
  uStack_640 = 0;
  uStack_888 = 0x2010000;
  uStack_878 = 0;
  puStack_648 = &uStack_640;
  puStack_5e8 = &uStack_5e0;
  FUN_109a41858(0x3ff0000000000000,0);
  uStack_888 = 0x2010000;
  uStack_878 = 0;
  plStack_880 = (long *)auStack_690;
  FUN_109a41858(0x3ff0000000000000,0,param_2,&uStack_888,5);
  uStack_6a8 = 0;
  uStack_6b0 = 0;
  uStack_698 = 0;
  uStack_6a0 = 0;
  dStack_6c8 = 0.0;
  dStack_6d0 = 0.0;
  dStack_6b8 = 0.0;
  dStack_6c0 = 0.0;
  uStack_6e8 = 0;
  uStack_6f0 = 0;
  uStack_6d8 = 0;
  uStack_6e0 = 0;
  dStack_708 = 0.0;
  dStack_710 = 0.0;
  dStack_6f8 = 0.0;
  dStack_700 = 0.0;
  uStack_878 = 0;
  uStack_888 = 0x1010000;
  plStack_880 = (long *)auStack_630;
  auStack_9e8[0] = 0xc2020006;
  puStack_9e0 = &uStack_6b0;
  uStack_9d8 = 0x400000001;
  auStack_b48[0] = 0xc2020006;
  pdStack_b40 = &dStack_6d0;
  uStack_b38 = 0x400000001;
  uStack_718 = 0;
  auStack_728[0] = 0x1010000;
  lStack_720 = param_3;
  FUN_109ab8374(&uStack_888,auStack_9e8,auStack_b48,auStack_728);
  uStack_878 = 0;
  uStack_888 = 0x1010000;
  plStack_880 = (long *)auStack_690;
  auStack_9e8[0] = 0xc2020006;
  puStack_9e0 = &uStack_6f0;
  uStack_9d8 = 0x400000001;
  auStack_b48[0] = 0xc2020006;
  pdStack_b40 = &dStack_710;
  uStack_b38 = 0x400000001;
  uStack_718 = 0;
  auStack_728[0] = 0x1010000;
  lStack_720 = param_3;
  FUN_109ab8374(&uStack_888,auStack_9e8,auStack_b48,auStack_728);
  dVar9 = dStack_6b8;
  dVar8 = dStack_6c0;
  dVar7 = dStack_6c8;
  dVar6 = dStack_6d0;
  dVar18 = dStack_6f8;
  dVar19 = dStack_700;
  dVar17 = dStack_708;
  dVar21 = dStack_710;
  FUN_109a7cdfc(auStack_b48,auStack_690,&uStack_6f0);
  dVar18 = dVar18 + 0.0;
  dVar19 = dVar19 + 0.0;
  dVar21 = dVar21 + 1.0;
  dVar17 = dVar17 + 0.0;
  dVar20 = 1.0 / (dVar17 * dVar17 + dVar21 * dVar21 + dVar19 * dVar19 + dVar18 * dVar18);
  FUN_109a7def8(auStack_9e8,
                dVar20 * dVar17 * dVar7 + dVar21 * dVar20 * dVar6 + dVar20 * dVar19 * dVar8 +
                dVar20 * dVar18 * dVar9,auStack_b48);
  FUN_109a7cb74(&uStack_888,auStack_9e8,&uStack_6b0);
  (**(code **)(*(long *)CONCAT44(uStack_884,uStack_888) + 0x18))
            ((long *)CONCAT44(uStack_884,uStack_888),&uStack_888,param_4,0xffffffff);
  FUN_10918eb6c(&uStack_888);
  FUN_10918eb6c(auStack_9e8);
  FUN_10918eb6c(auStack_b48);
  uStack_888 = 0x2010000;
  uStack_878 = 0;
  plStack_880 = param_4;
  FUN_109a41858(0x3ff0000000000000,0,param_4,&uStack_888,0);
  if (lStack_658 != 0) {
    piVar1 = (int *)(lStack_658 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      param_4 = (long *)auStack_690;
      func_0x000109a848d4(param_4);
    }
  }
  lStack_658 = 0;
  uStack_678 = 0;
  uStack_674 = 0;
  uStack_680 = 0;
  uStack_67c = 0;
  uStack_668 = 0;
  uStack_664 = 0;
  uStack_670 = 0;
  uStack_66c = 0;
  if (0 < (int)auStack_690._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(puStack_650 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)auStack_690._4_4_);
  }
  if (puStack_648 != &uStack_640 && puStack_648 != (undefined8 *)0x0) {
    param_4 = (long *)puStack_648[-1];
    _free(param_4);
  }
  if (lStack_5f8 != 0) {
    piVar1 = (int *)(lStack_5f8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      param_4 = (long *)auStack_630;
      func_0x000109a848d4(param_4);
    }
  }
  lStack_5f8 = 0;
  uStack_618 = 0;
  uStack_614 = 0;
  uStack_620 = 0;
  uStack_61c = 0;
  uStack_608 = 0;
  uStack_604 = 0;
  uStack_610 = 0;
  uStack_60c = 0;
  if (0 < (int)auStack_630._4_4_) {
    lVar16 = 0;
    do {
      *(undefined4 *)(puStack_5f0 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)auStack_630._4_4_);
  }
  if (puStack_5e8 != &uStack_5e0 && puStack_5e8 != (undefined8 *)0x0) {
    param_4 = (long *)puStack_5e8[-1];
    _free(param_4);
  }
  return param_4;
}



/* Entry: 1094c30f0; end: 1094c3517;  */

void FUN_1094c30f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 auStack_618 [2];
  double *pdStack_610;
  undefined8 uStack_608;
  undefined4 auStack_4b8 [2];
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 *puStack_350;
  undefined8 uStack_348;
  undefined4 auStack_1f8 [2];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  uStack_100 = 0x42ff0000;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_fc = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  puStack_350 = &uStack_100;
  uStack_d4 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  lStack_c0 = (long)&uStack_fc + 4;
  lStack_c8 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_160 = 0x42ff0000;
  lStack_120 = (long)&uStack_15c + 4;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_15c = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_134 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_358 = 0x2010000;
  uStack_348 = 0;
  puStack_118 = &uStack_110;
  puStack_b8 = &uStack_b0;
  FUN_109a41858(0x3ff0000000000000,0,param_1,&uStack_358,5);
  uStack_358 = 0x2010000;
  uStack_348 = 0;
  puStack_350 = &uStack_160;
  FUN_109a41858(0x3ff0000000000000,0,param_2,&uStack_358,5);
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  dStack_198 = 0.0;
  dStack_1a0 = 0.0;
  dStack_188 = 0.0;
  dStack_190 = 0.0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  dStack_1d8 = 0.0;
  dStack_1e0 = 0.0;
  dStack_1c8 = 0.0;
  dStack_1d0 = 0.0;
  uStack_348 = 0;
  uStack_358 = 0x1010000;
  puStack_350 = &uStack_100;
  auStack_4b8[0] = 0xc2020006;
  puStack_4b0 = &uStack_180;
  uStack_4a8 = 0x400000001;
  auStack_618[0] = 0xc2020006;
  pdStack_610 = &dStack_1a0;
  uStack_608 = 0x400000001;
  uStack_1e8 = 0;
  auStack_1f8[0] = 0x1010000;
  uStack_1f0 = param_3;
  FUN_109ab8374(&uStack_358,auStack_4b8,auStack_618,auStack_1f8);
  uStack_348 = 0;
  uStack_358 = 0x1010000;
  puStack_350 = &uStack_160;
  auStack_4b8[0] = 0xc2020006;
  puStack_4b0 = &uStack_1c0;
  uStack_4a8 = 0x400000001;
  auStack_618[0] = 0xc2020006;
  pdStack_610 = &dStack_1e0;
  uStack_608 = 0x400000001;
  uStack_1e8 = 0;
  auStack_1f8[0] = 0x1010000;
  uStack_1f0 = param_3;
  FUN_109ab8374(&uStack_358,auStack_4b8,auStack_618,auStack_1f8);
  dVar8 = dStack_188;
  dVar7 = dStack_190;
  dVar6 = dStack_198;
  dVar5 = dStack_1a0;
  dVar11 = dStack_1c8;
  dVar12 = dStack_1d0;
  dVar10 = dStack_1d8;
  dVar14 = dStack_1e0;
  FUN_109a7cdfc(auStack_618,&uStack_160,&uStack_1c0);
  dVar11 = dVar11 + 0.0;
  dVar12 = dVar12 + 0.0;
  dVar14 = dVar14 + 1.0;
  dVar10 = dVar10 + 0.0;
  dVar13 = 1.0 / (dVar10 * dVar10 + dVar14 * dVar14 + dVar12 * dVar12 + dVar11 * dVar11);
  FUN_109a7def8(auStack_4b8,
                dVar13 * dVar10 * dVar6 + dVar14 * dVar13 * dVar5 + dVar13 * dVar12 * dVar7 +
                dVar13 * dVar11 * dVar8,auStack_618);
  FUN_109a7cb74(&uStack_358,auStack_4b8,&uStack_180);
  (**(code **)(*(long *)CONCAT44(uStack_354,uStack_358) + 0x18))
            ((long *)CONCAT44(uStack_354,uStack_358),&uStack_358,param_4,0xffffffff);
  FUN_10918eb6c(&uStack_358);
  FUN_10918eb6c(auStack_4b8);
  FUN_10918eb6c(auStack_618);
  uStack_358 = 0x2010000;
  uStack_348 = 0;
  puStack_350 = (undefined4 *)param_4;
  FUN_109a41858(0x3ff0000000000000,0,param_4,&uStack_358,0);
  if (lStack_128 != 0) {
    piVar1 = (int *)(lStack_128 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_160);
    }
  }
  lStack_128 = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  if (0 < (int)uStack_15c) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_120 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_15c);
  }
  if (puStack_118 != &uStack_110 && puStack_118 != (undefined8 *)0x0) {
    _free(puStack_118[-1]);
  }
  if (lStack_c8 != 0) {
    piVar1 = (int *)(lStack_c8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_100);
    }
  }
  lStack_c8 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  if (0 < (int)uStack_fc) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_c0 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_fc);
  }
  if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
    _free(puStack_b8[-1]);
  }
  return;
}



/* Entry: 1094c3518; end: 1094c355b;  */

undefined8 FUN_1094c3518(undefined8 param_1,undefined8 param_2)

{
  undefined4 auStack_28 [2];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  auStack_28[0] = 0x2010000;
  uStack_18 = 0;
  uStack_20 = param_2;
  FUN_109a3e010(param_1,3,auStack_28);
  return 1;
}



/* Entry: 1094c355c; end: 1094c3cf7;  */

void FUN_1094c355c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float *pfVar7;
  int iVar8;
  long lVar9;
  undefined1 *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  undefined4 auStack_3d0 [2];
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 auStack_3b8 [2];
  undefined4 *puStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined8 uStack_39c;
  int iStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  long lStack_368;
  int *piStack_360;
  long *plStack_358;
  long alStack_350 [2];
  undefined4 uStack_340;
  undefined8 uStack_33c;
  int iStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  long lStack_308;
  int *piStack_300;
  long *plStack_2f8;
  long alStack_2f0 [2];
  uint uStack_2e0;
  undefined8 uStack_2dc;
  int iStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  long lStack_2a8;
  int *piStack_2a0;
  long *plStack_298;
  long alStack_290 [2];
  undefined4 uStack_280;
  undefined8 uStack_27c;
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
  long lStack_248;
  long lStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_109a8261c(&uStack_220,1,0x100,5);
  uStack_c0 = 0x42ff0000;
  lStack_80 = (long)&uStack_bc + 4;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  lStack_88 = 0;
  uStack_8c = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  puStack_78 = &uStack_70;
  (**(code **)(*(long *)CONCAT44(uStack_21c,uStack_220) + 0x18))
            ((long *)CONCAT44(uStack_21c,uStack_220),&uStack_220,&uStack_c0,0xffffffff);
  FUN_10918eb6c(&uStack_220);
  FUN_109a8261c(&uStack_220,1,0x100,5);
  uStack_280 = 0x42ff0000;
  lStack_240 = (long)&uStack_27c + 4;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_27c = 0;
  lStack_248 = 0;
  uStack_24c = 0;
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_25c = 0;
  uStack_258 = 0;
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  puStack_238 = &uStack_230;
  (**(code **)(*(long *)CONCAT44(uStack_21c,uStack_220) + 0x18))
            ((long *)CONCAT44(uStack_21c,uStack_220),&uStack_220,&uStack_280,0xffffffff);
  FUN_10918eb6c(&uStack_220);
  FUN_109a8261c(&uStack_220,1,0x100,5);
  uStack_2e0 = 0x42ff0000;
  piStack_2a0 = (int *)((long)&uStack_2dc + 4);
  iStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2dc = 0;
  lStack_2a8 = 0;
  uStack_2ac = 0;
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2cc = 0;
  uStack_2c8 = 0;
  alStack_290[0] = 0;
  alStack_290[1] = 0;
  plStack_298 = alStack_290;
  (**(code **)(*(long *)CONCAT44(uStack_21c,uStack_220) + 0x18))
            ((long *)CONCAT44(uStack_21c,uStack_220),&uStack_220,&uStack_2e0,0xffffffff);
  FUN_10918eb6c(&uStack_220);
  FUN_109a8261c(&uStack_220,1,0x100,5);
  uStack_340 = 0x42ff0000;
  piStack_300 = (int *)((long)&uStack_33c + 4);
  iStack_334 = 0;
  uStack_330 = 0;
  uStack_33c = 0;
  lStack_308 = 0;
  uStack_30c = 0;
  uStack_314 = 0;
  uStack_310 = 0;
  uStack_31c = 0;
  uStack_318 = 0;
  uStack_324 = 0;
  uStack_320 = 0;
  uStack_32c = 0;
  uStack_328 = 0;
  alStack_2f0[0] = 0;
  alStack_2f0[1] = 0;
  plStack_2f8 = alStack_2f0;
  (**(code **)(*(long *)CONCAT44(uStack_21c,uStack_220) + 0x18))
            ((long *)CONCAT44(uStack_21c,uStack_220),&uStack_220,&uStack_340,0xffffffff);
  FUN_10918eb6c(&uStack_220);
  FUN_1094c4e54(param_1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x48),&uStack_c0,
                &uStack_2e0);
  FUN_1094c4e54(param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x48),&uStack_280,
                &uStack_340);
  FUN_109a8261c(&uStack_220,1,0x100,0);
  uStack_3a0 = 0x42ff0000;
  piStack_360 = (int *)((long)&uStack_39c + 4);
  iStack_394 = 0;
  uStack_390 = 0;
  uStack_39c = 0;
  lStack_368 = 0;
  uStack_36c = 0;
  uStack_374 = 0;
  uStack_370 = 0;
  uStack_37c = 0;
  uStack_378 = 0;
  uStack_384 = 0;
  uStack_380 = 0;
  uStack_38c = 0;
  uStack_388 = 0;
  alStack_350[0] = 0;
  alStack_350[1] = 0;
  plStack_358 = alStack_350;
  (**(code **)(*(long *)CONCAT44(uStack_21c,uStack_220) + 0x18))
            ((long *)CONCAT44(uStack_21c,uStack_220),&uStack_220,&uStack_3a0,0xffffffff);
  FUN_10918eb6c(&uStack_220);
  if (0 < iStack_334) {
    lVar9 = 0;
    lVar12 = 0;
    do {
      iVar8 = (int)lVar9;
      if (((uStack_340._1_1_ >> 6 & 1) == 0) && (*piStack_300 != 1)) {
        if (piStack_300[1] == 1) {
          pfVar7 = (float *)(CONCAT44(uStack_32c,uStack_330) + *plStack_2f8 * lVar9);
        }
        else {
          iVar11 = 0;
          if (iStack_334 != 0) {
            iVar11 = iVar8 / iStack_334;
          }
          pfVar7 = (float *)(CONCAT44(uStack_32c,uStack_330) + *plStack_2f8 * (long)iVar11 +
                            (long)(iVar8 - iVar11 * iStack_334) * 4);
        }
      }
      else {
        pfVar7 = (float *)(CONCAT44(uStack_32c,uStack_330) + lVar9 * 4);
      }
      iVar11 = (int)lVar12;
      if (iVar11 < iStack_2d4) {
        fVar15 = *pfVar7;
        lVar3 = CONCAT44(uStack_2cc,uStack_2d0);
        lVar13 = (long)iVar11;
        lVar14 = lVar3 + (long)iVar11 * 4;
        do {
          if (((uStack_2e0 >> 0xe & 1) == 0) && (*piStack_2a0 != 1)) {
            if (piStack_2a0[1] == 1) {
              pfVar7 = (float *)(lVar3 + *plStack_298 * lVar13);
            }
            else {
              iVar11 = 0;
              if (iStack_2d4 != 0) {
                iVar11 = (int)lVar13 / iStack_2d4;
              }
              pfVar7 = (float *)(lVar14 + *plStack_298 * (long)iVar11 +
                                          (long)(iVar11 * iStack_2d4) * -4);
            }
          }
          else {
            pfVar7 = (float *)(lVar3 + lVar13 * 4);
          }
          fVar16 = *pfVar7;
          bVar4 = false;
          bVar5 = false;
          bVar6 = false;
          if (1e-06 <= ABS(fVar16 - fVar15)) {
            bVar4 = false;
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar16) && !NAN(fVar15)) {
              bVar4 = fVar16 < fVar15;
              bVar5 = fVar16 == fVar15;
              bVar6 = false;
            }
          }
          if (!bVar5 && bVar4 == bVar6) {
            if (((uStack_3a0._1_1_ >> 6 & 1) == 0) && (*piStack_360 != 1)) {
              if (piStack_360[1] == 1) {
                puVar10 = (undefined1 *)(CONCAT44(uStack_38c,uStack_390) + *plStack_358 * lVar9);
              }
              else {
                iVar11 = 0;
                if (iStack_394 != 0) {
                  iVar11 = iVar8 / iStack_394;
                }
                puVar10 = (undefined1 *)
                          (CONCAT44(uStack_38c,uStack_390) + *plStack_358 * (long)iVar11 +
                          (long)(iVar8 - iVar11 * iStack_394));
              }
            }
            else {
              puVar10 = (undefined1 *)(CONCAT44(uStack_38c,uStack_390) + lVar9);
            }
            *puVar10 = (char)lVar13;
            lVar12 = lVar13;
            break;
          }
          lVar13 = lVar13 + 1;
          lVar14 = lVar14 + 4;
        } while (iStack_2d4 != (int)lVar13);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iStack_334);
  }
  uStack_210 = 0;
  uStack_220 = 0x1010000;
  uStack_3a8 = 0;
  auStack_3b8[0] = 0x1010000;
  puStack_3b0 = &uStack_3a0;
  auStack_3d0[0] = 0x2010000;
  uStack_3c0 = 0;
  uStack_3c8 = param_4;
  uStack_218 = param_2;
  FUN_109a41f20(&uStack_220,auStack_3b8,auStack_3d0);
  if (lStack_368 != 0) {
    piVar1 = (int *)(lStack_368 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_3a0);
    }
  }
  lStack_368 = 0;
  uStack_388 = 0;
  uStack_384 = 0;
  uStack_390 = 0;
  uStack_38c = 0;
  uStack_378 = 0;
  uStack_374 = 0;
  uStack_380 = 0;
  uStack_37c = 0;
  if (0 < (int)uStack_39c) {
    lVar9 = 0;
    do {
      piStack_360[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_39c);
  }
  if (plStack_358 != alStack_350 && plStack_358 != (long *)0x0) {
    _free(plStack_358[-1]);
  }
  if (lStack_308 != 0) {
    piVar1 = (int *)(lStack_308 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_340);
    }
  }
  lStack_308 = 0;
  uStack_328 = 0;
  uStack_324 = 0;
  uStack_330 = 0;
  uStack_32c = 0;
  uStack_318 = 0;
  uStack_314 = 0;
  uStack_320 = 0;
  uStack_31c = 0;
  if (0 < (int)uStack_33c) {
    lVar9 = 0;
    do {
      piStack_300[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_33c);
  }
  if (plStack_2f8 != alStack_2f0 && plStack_2f8 != (long *)0x0) {
    _free(plStack_2f8[-1]);
  }
  if (lStack_2a8 != 0) {
    piVar1 = (int *)(lStack_2a8 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_2e0);
    }
  }
  lStack_2a8 = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  if (0 < (int)uStack_2dc) {
    lVar9 = 0;
    do {
      piStack_2a0[lVar9] = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_2dc);
  }
  if (plStack_298 != alStack_290 && plStack_298 != (long *)0x0) {
    _free(plStack_298[-1]);
  }
  if (lStack_248 != 0) {
    piVar1 = (int *)(lStack_248 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_280);
    }
  }
  lStack_248 = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  uStack_258 = 0;
  uStack_254 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  if (0 < (int)uStack_27c) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_240 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_27c);
  }
  if (puStack_238 != &uStack_230 && puStack_238 != (undefined8 *)0x0) {
    _free(puStack_238[-1]);
  }
  if (lStack_88 != 0) {
    piVar1 = (int *)(lStack_88 + 0x14);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      func_0x000109a848d4(&uStack_c0);
    }
  }
  lStack_88 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  if (0 < (int)uStack_bc) {
    lVar9 = 0;
    do {
      *(undefined4 *)(lStack_80 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uStack_bc);
  }
  if (puStack_78 != &uStack_70 && puStack_78 != (undefined8 *)0x0) {
    _free(puStack_78[-1]);
  }
  return;
}



/* Entry: 1094c3cf8; end: 1094c4e53;  */

void FUN_1094c3cf8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint *puVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  uint *puVar17;
  char *pcVar18;
  uint *puVar19;
  ulong uVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  long lVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined8 *puVar33;
  long lVar34;
  byte *pbVar35;
  long *plVar36;
  long lVar37;
  long lVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  double dVar44;
  double dVar45;
  undefined4 auStack_960 [2];
  uint *puStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  uint *puStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined4 auStack_928 [2];
  uint *puStack_920;
  undefined8 uStack_918;
  undefined4 auStack_7c8 [2];
  undefined4 *puStack_7c0;
  undefined8 uStack_7b8;
  undefined8 *puStack_7b0;
  undefined8 *puStack_7a8;
  undefined8 *puStack_7a0;
  undefined8 *puStack_798;
  undefined8 *puStack_790;
  undefined8 *puStack_788;
  undefined1 *puStack_780;
  code *pcStack_778;
  undefined8 *puStack_768;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 *puStack_750;
  int iStack_744;
  undefined8 *puStack_740;
  long *plStack_738;
  ulong uStack_730;
  undefined8 *puStack_728;
  undefined4 uStack_720;
  int iStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  long lStack_6e8;
  ulong uStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined1 auStack_6c0 [8];
  int aiStack_6b8 [12];
  long lStack_688;
  int *piStack_680;
  undefined8 *puStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined1 auStack_660 [8];
  undefined1 auStack_658 [4];
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  long lStack_628;
  undefined1 *puStack_620;
  undefined8 *puStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined4 uStack_600;
  int iStack_5fc;
  undefined8 uStack_5f8;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  long lStack_5c8;
  ulong uStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  uint uStack_598;
  int iStack_594;
  undefined8 uStack_590;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  long lStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  uint uStack_538;
  int iStack_534;
  undefined8 uStack_530;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  long lStack_500;
  int *piStack_4f8;
  long *plStack_4f0;
  long alStack_4e8 [2];
  undefined4 uStack_4d8;
  int iStack_4d4;
  undefined8 uStack_4d0;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  long lStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined4 auStack_478 [2];
  uint *puStack_470;
  undefined8 uStack_468;
  undefined1 auStack_460 [8];
  undefined1 auStack_458 [8];
  undefined1 auStack_450 [8];
  undefined1 auStack_448 [8];
  undefined1 auStack_440 [8];
  undefined1 auStack_438 [8];
  long alStack_430 [3];
  undefined8 *apuStack_418 [3];
  undefined1 auStack_400 [96];
  undefined1 auStack_3a0 [96];
  undefined8 auStack_340 [8];
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [8];
  long alStack_2d0 [3];
  undefined8 *apuStack_2b8 [3];
  undefined1 auStack_2a0 [96];
  undefined1 auStack_240 [96];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_660._0_4_ = 0x42ff0000;
  puVar40 = (undefined8 *)auStack_6c0;
  uStack_654 = 0;
  uStack_650 = 0;
  stack0xfffffffffffff9a4 = 0;
  uStack_644 = 0;
  uStack_640 = 0;
  uStack_64c = 0;
  uStack_648 = 0;
  uStack_4d0 = (uint *)auStack_660;
  uStack_634 = 0;
  uStack_63c = 0;
  uStack_638 = 0;
  puStack_620 = auStack_658;
  lStack_628 = 0;
  uStack_630 = 0;
  uStack_62c = 0;
  puVar12 = &uStack_610;
  uStack_610 = 0;
  uStack_608 = 0;
  auStack_2f0 = (undefined1  [8])0x0;
  auStack_300._0_4_ = 0x1010000;
  uStack_4d8 = 0x2010000;
  uStack_4c8 = 0;
  uStack_4c4 = 0;
  puStack_618 = puVar12;
  auStack_2f8 = (undefined1  [8])param_4;
  FUN_109a82ac8(&uStack_1e0,5,5,0);
  uStack_528 = 0;
  uStack_524 = 0;
  uStack_538 = 0xc1060000;
  auStack_458 = (undefined1  [8])0x7fefffffffffffff;
  auStack_460 = (undefined1  [8])0x7fefffffffffffff;
  auStack_448 = (undefined1  [8])0x7fefffffffffffff;
  auStack_450 = (undefined1  [8])0x7fefffffffffffff;
  uStack_598 = 0xffffffff;
  iStack_594 = 0xffffffff;
  puVar19 = &uStack_598;
  uStack_530 = &uStack_1e0;
  FUN_109b32fd4(1,auStack_300,&uStack_4d8,&uStack_538,puVar19,1,0,auStack_460);
  FUN_10918eb6c(&uStack_1e0);
  uStack_598 = 0;
  iStack_594 = 0x40340000;
  uStack_4d8 = 0xc1020006;
  uStack_4c8 = 1;
  uStack_4c4 = 1;
  uStack_4d0 = &uStack_598;
  FUN_109a8239c(auStack_460,0x3ff0000000000000,auStack_660,&uStack_4d8);
  FUN_109a7d660(&uStack_1e0,auStack_460);
  auStack_2f0 = (undefined1  [8])0x0;
  auStack_300._0_4_ = 0xc1060000;
  uStack_538 = 0x2010000;
  uStack_528 = 0;
  uStack_524 = 0;
  auStack_2f8 = (undefined1  [8])&uStack_1e0;
  uStack_530 = (undefined8 *)auStack_660;
  FUN_109a60a84(auStack_300,&uStack_538);
  FUN_10918eb6c(&uStack_1e0);
  FUN_10918eb6c(auStack_460);
  auStack_450 = (undefined1  [8])0x0;
  auStack_460._0_4_ = 0x1010000;
  auStack_458 = (undefined1  [8])auStack_660;
  FUN_109a8239c(&uStack_1e0,0x3ff0000000000000,param_3,auStack_460);
  auStack_6c0._0_4_ = 0x42ff0000;
  piStack_680 = aiStack_6b8;
  aiStack_6b8[1] = 0;
  aiStack_6b8[2] = 0;
  stack0xfffffffffffff944 = 0;
  lStack_688 = 0;
  aiStack_6b8[0xb] = 0;
  aiStack_6b8[9] = 0;
  aiStack_6b8[10] = 0;
  aiStack_6b8[7] = 0;
  aiStack_6b8[8] = 0;
  aiStack_6b8[5] = 0;
  aiStack_6b8[6] = 0;
  aiStack_6b8[3] = 0;
  aiStack_6b8[4] = 0;
  uStack_670 = 0;
  uStack_668 = 0;
  puStack_678 = &uStack_670;
  (**(code **)(*(long *)CONCAT44(uStack_1e0._4_4_,(undefined4)uStack_1e0) + 0x18))
            ((long *)CONCAT44(uStack_1e0._4_4_,(undefined4)uStack_1e0),&uStack_1e0,auStack_6c0,
             0xffffffff);
  FUN_10918eb6c(&uStack_1e0);
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1e0._0_4_ = 0x1010000;
  auStack_460._0_4_ = 0x2010000;
  auStack_450 = (undefined1  [8])0x0;
  auStack_300 = (undefined1  [8])0x900000009;
  puVar11 = &uStack_1e0;
  puVar27 = (undefined8 *)auStack_460;
  plVar16 = (long *)auStack_300;
  puVar17 = (uint *)0x4;
  auStack_458 = (undefined1  [8])auStack_6c0;
  uStack_1d8 = (undefined8 *)auStack_6c0;
  FUN_109b44a6c(0,0);
  uStack_720 = 0x42ff0000;
  puVar39 = (undefined8 *)&uStack_720;
  uStack_730 = (ulong)puVar39 | 8;
  lStack_6e8 = 0;
  uStack_6ec = 0;
  uStack_6f4 = 0;
  uStack_6f0 = 0;
  uStack_6fc = 0;
  uStack_6f8 = 0;
  uStack_704 = 0;
  uStack_700 = 0;
  uStack_70c = 0;
  uStack_708 = 0;
  uStack_714 = 0;
  uStack_710 = 0;
  iStack_71c = 0;
  uStack_718 = 0;
  puVar29 = &uStack_6d0;
  uStack_6d0 = 0;
  uStack_6c8 = 0;
  uStack_6e0 = uStack_730;
  puStack_6d8 = puVar29;
  uStack_5f8 = (undefined8 *)CONCAT44(uStack_5f8._4_4_,(undefined4)uStack_5f8);
  uStack_590 = (uint *)CONCAT44(uStack_590._4_4_,(undefined4)uStack_590);
  if ((((int *)param_2[8])[1] == piStack_680[1]) &&
     (uStack_5f8 = (undefined8 *)CONCAT44(uStack_5f8._4_4_,(undefined4)uStack_5f8),
     uStack_590 = (uint *)CONCAT44(uStack_590._4_4_,(undefined4)uStack_590),
     *(int *)param_2[8] == *piStack_680)) {
    uStack_4d8 = 0x42ff0000;
    uStack_4d0._4_4_ = 0;
    uStack_4c8 = 0;
    iStack_4d4 = 0;
    uStack_4d0._0_4_ = 0;
    auStack_458 = (undefined1  [8])&uStack_4d8;
    puStack_498 = &uStack_4d0;
    uStack_4bc = 0;
    uStack_4b8 = 0;
    uStack_4c4 = 0;
    uStack_4c0 = 0;
    uStack_4ac = 0;
    uStack_4b4 = 0;
    uStack_4b0 = 0;
    lStack_4a0 = 0;
    uStack_4a8 = 0;
    uStack_4a4 = 0;
    puStack_740 = &uStack_488;
    uStack_480 = 0;
    uStack_488 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    uStack_1e0._0_4_ = 0x1010000;
    uStack_1d8._0_4_ = SUB84(param_2,0);
    uStack_1d8._4_4_ = (undefined4)((ulong)param_2 >> 0x20);
    auStack_460._0_4_ = 0x2010000;
    auStack_450 = (undefined1  [8])0x0;
    puStack_728 = puVar29;
    puStack_490 = puStack_740;
    FUN_109ac9fc8(&uStack_1e0,auStack_460,0x35,0);
    puStack_750 = (undefined8 *)((ulong)puVar39 | 4);
    lVar25 = 0;
    do {
      *(undefined4 *)(auStack_460 + lVar25) = 0x42ff0000;
      *(undefined8 *)(auStack_458 + lVar25 + 4) = 0;
      *(undefined8 *)(auStack_460 + lVar25 + 4) = 0;
      *(undefined8 *)(auStack_448 + lVar25 + 4) = 0;
      *(undefined8 *)(auStack_450 + lVar25 + 4) = 0;
      *(undefined8 *)(auStack_438 + lVar25 + 4) = 0;
      *(undefined8 *)(auStack_440 + lVar25 + 4) = 0;
      puVar11 = (undefined8 *)((long)apuStack_418 + lVar25 + 8);
      *puVar11 = 0;
      *(undefined8 *)((long)alStack_430 + lVar25 + 8) = 0;
      *(undefined8 *)((long)alStack_430 + lVar25) = 0;
      *(undefined1 **)((long)alStack_430 + lVar25 + 0x10) = auStack_458 + lVar25;
      *(undefined8 **)((long)apuStack_418 + lVar25) = puVar11;
      lVar30 = lVar25 + 0x60;
      *(undefined8 *)((long)apuStack_418 + lVar25 + 0x10) = 0;
      lVar25 = lVar30;
    } while (lVar30 != 0x120);
    lVar25 = 0;
    do {
      *(undefined4 *)(auStack_300 + lVar25) = 0x42ff0000;
      *(undefined8 *)(auStack_2f8 + lVar25 + 4) = 0;
      *(undefined8 *)(auStack_300 + lVar25 + 4) = 0;
      *(undefined8 *)(auStack_2e8 + lVar25 + 4) = 0;
      *(undefined8 *)(auStack_2f0 + lVar25 + 4) = 0;
      *(undefined8 *)(auStack_2d8 + lVar25 + 4) = 0;
      *(undefined8 *)(auStack_2e0 + lVar25 + 4) = 0;
      puVar11 = (undefined8 *)((long)apuStack_2b8 + lVar25 + 8);
      *puVar11 = 0;
      *(undefined8 *)((long)alStack_2d0 + lVar25 + 8) = 0;
      *(undefined8 *)((long)alStack_2d0 + lVar25) = 0;
      *(undefined1 **)((long)alStack_2d0 + lVar25 + 0x10) = auStack_2f8 + lVar25;
      *(undefined8 **)((long)apuStack_2b8 + lVar25) = puVar11;
      lVar30 = lVar25 + 0x60;
      *(undefined8 *)((long)apuStack_2b8 + lVar25 + 0x10) = 0;
      lVar25 = lVar30;
    } while (lVar30 != 0x120);
    FUN_109a3d9cc(&uStack_4d8,auStack_460);
    if (alStack_430[1] != 0) {
      piVar1 = (int *)(alStack_430[1] + 0x14);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    if (alStack_2d0[1] != 0) {
      piVar1 = (int *)(alStack_2d0[1] + 0x14);
      do {
        iVar24 = *piVar1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar24 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar24 + -1 == 0) {
        func_0x000109a848d4(auStack_300);
      }
    }
    alStack_2d0[1] = 0;
    auStack_2e8 = (undefined1  [8])0x0;
    auStack_2f0 = (undefined1  [8])0x0;
    auStack_2d8 = (undefined1  [8])0x0;
    auStack_2e0 = (undefined1  [8])0x0;
    if ((int)auStack_300._4_4_ < 1) {
LAB_1094c4140:
      if (2 < (int)auStack_460._4_4_) goto LAB_1094c4174;
      auStack_300._4_4_ = auStack_460._4_4_;
      auStack_300._0_4_ = auStack_460._0_4_;
      auStack_2f8 = auStack_458;
      *apuStack_2b8[0] = *apuStack_418[0];
      apuStack_2b8[0][1] = apuStack_418[0][1];
    }
    else {
      lVar25 = 0;
      do {
        *(undefined4 *)(alStack_2d0[2] + lVar25 * 4) = 0;
        lVar25 = lVar25 + 1;
      } while (lVar25 < (int)auStack_300._4_4_);
      if ((int)auStack_300._4_4_ < 3) goto LAB_1094c4140;
LAB_1094c4174:
      auStack_300._0_4_ = auStack_460._0_4_;
      func_0x000109a84868(auStack_300,auStack_460);
    }
    auStack_2e8 = auStack_448;
    auStack_2f0 = auStack_450;
    auStack_2d8 = auStack_438;
    auStack_2e0 = auStack_440;
    alStack_2d0[1] = alStack_430[1];
    alStack_2d0[0] = alStack_430[0];
    FUN_109a7da88(&uStack_1e0,0x3fb999999999999a,auStack_3a0);
    (**(code **)(*(long *)CONCAT44(uStack_1e0._4_4_,(undefined4)uStack_1e0) + 0x18))
              ((long *)CONCAT44(uStack_1e0._4_4_,(undefined4)uStack_1e0),&uStack_1e0,auStack_240,
               0xffffffff);
    FUN_10918eb6c(&uStack_1e0);
    uStack_1d8._0_4_ = 10;
    uStack_1d8._4_4_ = 0xf;
    uStack_1e0._0_4_ = 0;
    uStack_1e0._4_4_ = 0;
    uStack_1c8 = 0xe6;
    uStack_1c4 = 0xeb;
    uStack_1d0 = 0x40;
    uStack_1cc = 0x80;
    uStack_1c0 = 0xff;
    uStack_1bc = 0xff;
    puVar11 = (undefined8 *)0x28;
    __Znwm();
    lVar25 = 0;
    do {
      *(undefined8 *)((long)puVar11 + lVar25) = *(undefined8 *)((long)&uStack_1e0 + lVar25);
      lVar25 = lVar25 + 8;
    } while (lVar25 != 0x28);
    uStack_538 = 0x42ff0000;
    uStack_530._4_4_ = 0;
    uStack_528 = 0;
    iStack_534 = 0;
    uStack_530._0_4_ = 0;
    piStack_4f8 = (int *)&uStack_530;
    uStack_51c = 0;
    uStack_518 = 0;
    uStack_524 = 0;
    uStack_520 = 0;
    uStack_50c = 0;
    uStack_514 = 0;
    uStack_510 = 0;
    lStack_500 = 0;
    uStack_508 = 0;
    uStack_504 = 0;
    alStack_4e8[1] = 0;
    alStack_4e8[0] = 0;
    plStack_4f0 = alStack_4e8;
    FUN_109a8261c(&uStack_1e0,1,0x100,0);
    puVar17 = (uint *)0xffffffff;
    (**(code **)(*(long *)CONCAT44(uStack_1e0._4_4_,(undefined4)uStack_1e0) + 0x18))
              ((long *)CONCAT44(uStack_1e0._4_4_,(undefined4)uStack_1e0),&uStack_1e0,&uStack_538);
    FUN_10918eb6c(&uStack_1e0);
    uVar26 = 0;
    do {
      lVar30 = 0;
      lVar25 = 0;
      dVar44 = 0.0;
      do {
        lVar34 = 0;
        dVar45 = 1.0;
        do {
          if (lVar30 != lVar34) {
            dVar45 = dVar45 * (((double)(uVar26 & 0xffffffff) -
                               (double)*(int *)((long)puVar11 + lVar34)) /
                              (double)(*(int *)(puVar11 + lVar25) - *(int *)((long)puVar11 + lVar34)
                                      ));
          }
          lVar34 = lVar34 + 8;
        } while (lVar34 != 0x28);
        dVar44 = dVar44 + dVar45 * (double)*(int *)((long)(puVar11 + lVar25) + 4);
        lVar25 = lVar25 + 1;
        lVar30 = lVar30 + 8;
      } while (lVar25 != 5);
      if (uVar26 == 0) {
LAB_1094c4380:
        dVar45 = 0.0;
        if (0.0 <= dVar44) {
          dVar45 = dVar44;
        }
        dVar44 = 255.0;
        if (dVar45 <= 255.0) {
          dVar44 = dVar45;
        }
        if (((uStack_538 & 0x4000) == 0) && (*piStack_4f8 != 1)) {
          if (piStack_4f8[1] == 1) {
            puVar31 = (undefined1 *)(CONCAT44(uStack_524,uStack_528) + *plStack_4f0 * uVar26);
          }
          else {
            iVar24 = 0;
            if (uStack_530._4_4_ != 0) {
              iVar24 = (int)uVar26 / uStack_530._4_4_;
            }
            puVar31 = (undefined1 *)
                      (CONCAT44(uStack_524,uStack_528) + *plStack_4f0 * (long)iVar24 +
                      (uVar26 - (long)(iVar24 * uStack_530._4_4_)));
          }
        }
        else {
          puVar31 = (undefined1 *)(CONCAT44(uStack_524,uStack_528) + uVar26);
        }
        *puVar31 = (char)(int)dVar44;
      }
      else {
        lVar25 = uVar26 - 1;
        if (((uStack_538 >> 0xe & 1) == 0) && (*piStack_4f8 != 1)) {
          if (piStack_4f8[1] == 1) {
            pbVar35 = (byte *)(CONCAT44(uStack_524,uStack_528) + *plStack_4f0 * lVar25);
          }
          else {
            iVar24 = 0;
            if (uStack_530._4_4_ != 0) {
              iVar24 = (int)lVar25 / uStack_530._4_4_;
            }
            pbVar35 = (byte *)(CONCAT44(uStack_524,uStack_528) + *plStack_4f0 * (long)iVar24 +
                              (lVar25 - iVar24 * uStack_530._4_4_));
          }
        }
        else {
          pbVar35 = (byte *)(CONCAT44(uStack_524,uStack_528) + lVar25);
        }
        lVar30 = CONCAT44(uStack_524,uStack_528);
        dVar45 = (double)NEON_ucvtf((ulong)*pbVar35);
        if (dVar45 <= dVar44) goto LAB_1094c4380;
        if (((uStack_538 & 0x4000) == 0) && (*piStack_4f8 != 1)) {
          if (piStack_4f8[1] == 1) {
            puVar31 = (undefined1 *)(lVar30 + *plStack_4f0 * lVar25);
            puVar32 = (undefined1 *)(lVar30 + *plStack_4f0 * uVar26);
          }
          else {
            iVar24 = 0;
            if (uStack_530._4_4_ != 0) {
              iVar24 = (int)lVar25 / uStack_530._4_4_;
            }
            puVar31 = (undefined1 *)
                      (lVar30 + *plStack_4f0 * (long)iVar24 + (lVar25 - iVar24 * uStack_530._4_4_));
            iVar24 = 0;
            if (uStack_530._4_4_ != 0) {
              iVar24 = (int)uVar26 / uStack_530._4_4_;
            }
            puVar32 = (undefined1 *)
                      (lVar30 + *plStack_4f0 * (long)iVar24 +
                      (uVar26 - (long)(iVar24 * uStack_530._4_4_)));
          }
        }
        else {
          puVar31 = (undefined1 *)(lVar30 + lVar25);
          puVar32 = (undefined1 *)(lVar30 + uVar26);
        }
        *puVar32 = *puVar31;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != 0x100);
    uStack_1d0 = 0;
    uStack_1cc = 0;
    uStack_1e0._0_4_ = 0x1010000;
    uStack_1d8 = (undefined8 *)auStack_400;
    uStack_588 = 0;
    uStack_584 = 0;
    uStack_598 = 0x1010000;
    uStack_590 = &uStack_538;
    uStack_5f8 = (undefined8 *)auStack_2a0;
    uStack_600 = 0x2010000;
    uStack_5f0 = 0;
    uStack_5ec = 0;
    plVar16 = (long *)&uStack_600;
    plStack_738 = alStack_4e8;
    FUN_109a41f20(&uStack_1e0,&uStack_598);
    uStack_1e0._0_4_ = 0x42ff0000;
    puStack_1a0 = &uStack_1d8;
    uStack_1d8._4_4_ = 0;
    uStack_1d0 = 0;
    uStack_1e0._4_4_ = 0;
    uStack_1d8._0_4_ = 0;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    uStack_1b4 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    puVar39 = &uStack_190;
    uStack_188 = 0;
    uStack_190 = 0;
    puVar31 = auStack_300;
    puVar27 = &uStack_1e0;
    puStack_198 = puVar39;
    FUN_1094c3518();
    iStack_744 = (int)puVar31;
    puVar13 = uStack_590;
    if (((ulong)puVar31 & 1) != 0) {
      uStack_598 = 0x42ff0000;
      puStack_470 = &uStack_598;
      uStack_590._4_4_ = 0;
      uStack_588 = 0;
      iStack_594 = 0;
      uStack_590._0_4_ = 0;
      puStack_558 = &uStack_590;
      uStack_57c = 0;
      uStack_578 = 0;
      uStack_584 = 0;
      uStack_580 = 0;
      uStack_56c = 0;
      uStack_574 = 0;
      uStack_570 = 0;
      lStack_560 = 0;
      uStack_568 = 0;
      uStack_564 = 0;
      puStack_768 = &uStack_548;
      uStack_540 = 0;
      uStack_548 = 0;
      uStack_600 = 0x1010000;
      uStack_5f8 = &uStack_1e0;
      uStack_5f0 = 0;
      uStack_5ec = 0;
      auStack_478[0] = 0x2010000;
      uStack_468 = 0;
      puStack_760 = puVar39;
      puStack_758 = puVar12;
      puStack_550 = puStack_768;
      FUN_109ac9fc8(&uStack_600,auStack_478,0x3d,0);
      uStack_600 = 0x42ff0000;
      uStack_5c0 = (ulong)&uStack_600 | 8;
      uStack_5f8._4_4_ = 0;
      uStack_5f0 = 0;
      iStack_5fc = 0;
      uStack_5f8._0_4_ = 0;
      uStack_5e4 = 0;
      uStack_5e0 = 0;
      uStack_5ec = 0;
      uStack_5e8 = 0;
      uStack_5d4 = 0;
      uStack_5dc = 0;
      uStack_5d8 = 0;
      lStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5cc = 0;
      puVar40 = &uStack_5b0;
      uStack_5b0 = 0;
      uStack_5a8 = 0;
      auStack_478[0] = 0x2010000;
      uStack_468 = 0;
      puStack_5b8 = puVar40;
      puStack_470 = &uStack_600;
      FUN_109a479a0(param_2,auStack_478);
      if (lStack_6e8 != 0) {
        piVar1 = (int *)(lStack_6e8 + 0x14);
        do {
          iVar24 = *piVar1;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar24 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar24 + -1 == 0) {
          func_0x000109a848d4(&uStack_720);
        }
      }
      if (0 < iStack_71c) {
        lVar25 = 0;
        do {
          *(undefined4 *)(uStack_6e0 + lVar25 * 4) = 0;
          lVar25 = lVar25 + 1;
        } while (lVar25 < iStack_71c);
      }
      uStack_718 = (undefined4)uStack_5f8;
      uStack_714 = uStack_5f8._4_4_;
      uStack_720 = uStack_600;
      iStack_71c = iStack_5fc;
      uStack_708 = uStack_5e8;
      uStack_704 = uStack_5e4;
      uStack_710 = uStack_5f0;
      uStack_70c = uStack_5ec;
      uStack_6f8 = uStack_5d8;
      uStack_6f4 = uStack_5d4;
      uStack_700 = uStack_5e0;
      uStack_6fc = uStack_5dc;
      lStack_6e8 = lStack_5c8;
      uStack_6f0 = uStack_5d0;
      uStack_6ec = uStack_5cc;
      if (puStack_6d8 != puStack_728) {
        if (puStack_6d8 != (undefined8 *)0x0) {
          _free(puStack_6d8[-1]);
        }
        uStack_6e0 = uStack_730;
        puStack_6d8 = puStack_728;
      }
      puVar12 = puStack_758;
      puVar39 = puStack_760;
      if (iStack_5fc < 3) {
        puVar27 = (undefined8 *)((ulong)&uStack_600 | 4);
        *puStack_6d8 = *puStack_5b8;
        puStack_6d8[1] = puStack_5b8[1];
        uStack_600 = 0x42ff0000;
        puVar27[1] = 0;
        *puVar27 = 0;
        puVar27[3] = 0;
        puVar27[2] = 0;
        puVar27[5] = 0;
        puVar27[4] = 0;
        *(undefined8 *)((long)puVar27 + 0x34) = 0;
        *(undefined8 *)((long)puVar27 + 0x2c) = 0;
        if (puStack_5b8 != puVar40) {
          _free(puStack_5b8[-1]);
        }
      }
      else {
        uStack_6e0 = uStack_5c0;
        puStack_6d8 = puStack_5b8;
      }
      puVar27 = (undefined8 *)param_2[2];
      puVar19 = (uint *)CONCAT44(aiStack_6b8[3],aiStack_6b8[2]);
      plVar16 = (long *)(ulong)*(uint *)param_2[8];
      puVar17 = (uint *)(ulong)((uint *)param_2[8])[1];
      FUN_1094c2938(&uStack_598);
      if (lStack_560 != 0) {
        piVar1 = (int *)(lStack_560 + 0x14);
        do {
          iVar24 = *piVar1;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar24 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar24 + -1 == 0) {
          func_0x000109a848d4(&uStack_598);
        }
      }
      puVar13 = (uint *)CONCAT44(uStack_590._4_4_,(undefined4)uStack_590);
      lStack_560 = 0;
      uStack_580 = 0;
      uStack_57c = 0;
      uStack_588 = 0;
      uStack_584 = 0;
      uStack_570 = 0;
      uStack_56c = 0;
      uStack_578 = 0;
      uStack_574 = 0;
      if (0 < iStack_594) {
        lVar25 = 0;
        do {
          *(undefined4 *)((long)puStack_558 + lVar25 * 4) = 0;
          lVar25 = lVar25 + 1;
        } while (lVar25 < iStack_594);
      }
      if (puStack_550 != puStack_768 && puStack_550 != (undefined8 *)0x0) {
        _free(puStack_550[-1]);
        puVar13 = (uint *)CONCAT44(uStack_590._4_4_,(undefined4)uStack_590);
      }
    }
    uStack_590 = puVar13;
    if (lStack_1a8 != 0) {
      piVar1 = (int *)(lStack_1a8 + 0x14);
      do {
        iVar24 = *piVar1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar24 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar24 + -1 == 0) {
        func_0x000109a848d4(&uStack_1e0);
      }
    }
    lStack_1a8 = 0;
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    if (0 < uStack_1e0._4_4_) {
      lVar25 = 0;
      do {
        *(undefined4 *)((long)puStack_1a0 + lVar25 * 4) = 0;
        lVar25 = lVar25 + 1;
      } while (lVar25 < uStack_1e0._4_4_);
    }
    if (puStack_198 != puVar39 && puStack_198 != (undefined8 *)0x0) {
      _free(puStack_198[-1]);
    }
    plVar14 = plStack_738;
    if (lStack_500 != 0) {
      piVar1 = (int *)(lStack_500 + 0x14);
      do {
        iVar24 = *piVar1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar24 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar24 + -1 == 0) {
        func_0x000109a848d4(&uStack_538);
      }
    }
    lStack_500 = 0;
    uStack_520 = 0;
    uStack_51c = 0;
    uStack_528 = 0;
    uStack_524 = 0;
    uStack_510 = 0;
    uStack_50c = 0;
    uStack_518 = 0;
    uStack_514 = 0;
    if (0 < iStack_534) {
      lVar25 = 0;
      do {
        piStack_4f8[lVar25] = 0;
        lVar25 = lVar25 + 1;
      } while (lVar25 < iStack_534);
    }
    if (plStack_4f0 != plVar14 && plStack_4f0 != (long *)0x0) {
      _free(plStack_4f0[-1]);
    }
    __ZdlPv();
    puVar39 = &uStack_1e0;
    do {
      puVar29 = puVar39 + -0xc;
      if (puVar39[-5] != 0) {
        piVar1 = (int *)(puVar39[-5] + 0x14);
        do {
          iVar24 = *piVar1;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar24 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar24 + -1 == 0) {
          puVar11 = puVar29;
          func_0x000109a848d4();
        }
      }
      puVar39[-5] = 0;
      puVar39[-9] = 0;
      puVar39[-10] = 0;
      puVar39[-7] = 0;
      puVar39[-8] = 0;
      if (0 < *(int *)((long)puVar39 - 0x5c)) {
        lVar25 = 0;
        lVar30 = puVar39[-4];
        do {
          *(undefined4 *)(lVar30 + lVar25 * 4) = 0;
          lVar25 = lVar25 + 1;
        } while (lVar25 < *(int *)((long)puVar39 - 0x5c));
      }
      puVar28 = (undefined8 *)puVar39[-3];
      if (puVar28 != puVar39 + -2 && puVar28 != (undefined8 *)0x0) {
        puVar11 = (undefined8 *)puVar28[-1];
        _free();
      }
      puVar39 = puVar29;
    } while (puVar29 != (undefined8 *)auStack_300);
    puVar28 = auStack_340;
    do {
      puVar39 = puVar28 + -0xc;
      if (puVar28[-5] != 0) {
        piVar1 = (int *)(puVar28[-5] + 0x14);
        do {
          iVar24 = *piVar1;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar24 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar24 + -1 == 0) {
          puVar11 = puVar39;
          func_0x000109a848d4();
        }
      }
      puVar28[-5] = 0;
      puVar28[-9] = 0;
      puVar28[-10] = 0;
      puVar28[-7] = 0;
      puVar28[-8] = 0;
      if (0 < *(int *)((long)puVar28 - 0x5c)) {
        lVar25 = 0;
        lVar30 = puVar28[-4];
        do {
          *(undefined4 *)(lVar30 + lVar25 * 4) = 0;
          lVar25 = lVar25 + 1;
        } while (lVar25 < *(int *)((long)puVar28 - 0x5c));
      }
      puVar29 = (undefined8 *)puVar28[-3];
      if (puVar29 != puVar28 + -2 && puVar29 != (undefined8 *)0x0) {
        puVar11 = (undefined8 *)puVar29[-1];
        _free();
      }
      puVar29 = puStack_728;
      puVar28 = puVar39;
    } while (puVar39 != (undefined8 *)auStack_460);
    if (lStack_4a0 != 0) {
      piVar1 = (int *)(lStack_4a0 + 0x14);
      do {
        iVar24 = *piVar1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar24 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar24 + -1 == 0) {
        puVar11 = (undefined8 *)&uStack_4d8;
        func_0x000109a848d4();
      }
    }
    lStack_4a0 = 0;
    uStack_4c0 = 0;
    uStack_4bc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    uStack_4b0 = 0;
    uStack_4ac = 0;
    uStack_4b8 = 0;
    uStack_4b4 = 0;
    if (0 < iStack_4d4) {
      lVar25 = 0;
      do {
        *(undefined4 *)((long)puStack_498 + lVar25 * 4) = 0;
        lVar25 = lVar25 + 1;
      } while (lVar25 < iStack_4d4);
    }
    if (puStack_490 != puStack_740 && puStack_490 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)puStack_490[-1];
      _free();
    }
    if (iStack_744 != 0) {
      param_1[1] = CONCAT44(uStack_714,uStack_718);
      *param_1 = CONCAT44(iStack_71c,uStack_720);
      param_1[3] = CONCAT44(uStack_704,uStack_708);
      param_1[2] = CONCAT44(uStack_70c,uStack_710);
      param_1[10] = 0;
      param_1[5] = CONCAT44(uStack_6f4,uStack_6f8);
      param_1[4] = CONCAT44(uStack_6fc,uStack_700);
      param_1[7] = lStack_6e8;
      param_1[6] = CONCAT44(uStack_6ec,uStack_6f0);
      param_1[8] = param_1 + 1;
      param_1[9] = param_1 + 10;
      param_1[0xb] = 0;
      if (iStack_71c < 3) {
        param_1[10] = *puStack_6d8;
        param_1[0xb] = puStack_6d8[1];
      }
      else {
        param_1[8] = uStack_6e0;
        param_1[9] = puStack_6d8;
        uStack_6e0 = uStack_730;
        puStack_6d8 = puVar29;
      }
      uStack_720 = 0x42ff0000;
      puStack_750[1] = 0;
      *puStack_750 = 0;
      puStack_750[3] = 0;
      puStack_750[2] = 0;
      puStack_750[5] = 0;
      puStack_750[4] = 0;
      *(undefined8 *)((long)puStack_750 + 0x34) = 0;
      *(undefined8 *)((long)puStack_750 + 0x2c) = 0;
      param_1 = puVar11;
      goto LAB_1094c4b48;
    }
  }
  iVar24 = *(int *)((long)param_2 + 4);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(int *)((long)param_1 + 4) = iVar24;
  param_1[1] = param_2[1];
  uVar41 = param_2[2];
  uVar43 = param_2[5];
  uVar42 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar41;
  param_1[5] = uVar43;
  param_1[4] = uVar42;
  lVar25 = param_2[7];
  uVar41 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar41;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar25 != 0) {
    piVar1 = (int *)(lVar25 + 0x14);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    iVar24 = *(int *)((long)param_2 + 4);
  }
  if (iVar24 < 3) {
    puVar28 = (undefined8 *)param_2[9];
    puVar33 = (undefined8 *)param_1[9];
    *puVar33 = *puVar28;
    puVar33[1] = puVar28[1];
    param_1 = puVar11;
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    puVar27 = param_2;
    func_0x000109a84868();
  }
LAB_1094c4b48:
  if (lStack_6e8 != 0) {
    piVar1 = (int *)(lStack_6e8 + 0x14);
    do {
      iVar24 = *piVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = iVar24 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar24 + -1 == 0) {
      param_1 = (undefined8 *)&uStack_720;
      func_0x000109a848d4();
    }
  }
  lStack_6e8 = 0;
  uStack_708 = 0;
  uStack_704 = 0;
  uStack_710 = 0;
  uStack_70c = 0;
  uStack_6f8 = 0;
  uStack_6f4 = 0;
  uStack_700 = 0;
  uStack_6fc = 0;
  if (0 < iStack_71c) {
    lVar25 = 0;
    do {
      *(undefined4 *)(uStack_6e0 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < iStack_71c);
  }
  if (puStack_6d8 != puVar29 && puStack_6d8 != (undefined8 *)0x0) {
    param_1 = (undefined8 *)puStack_6d8[-1];
    _free();
  }
  if (lStack_688 != 0) {
    piVar1 = (int *)(lStack_688 + 0x14);
    do {
      iVar24 = *piVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = iVar24 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar24 + -1 == 0) {
      param_1 = (undefined8 *)auStack_6c0;
      func_0x000109a848d4();
    }
  }
  lStack_688 = 0;
  aiStack_6b8[4] = 0;
  aiStack_6b8[5] = 0;
  aiStack_6b8[2] = 0;
  aiStack_6b8[3] = 0;
  aiStack_6b8[8] = 0;
  aiStack_6b8[9] = 0;
  aiStack_6b8[6] = 0;
  aiStack_6b8[7] = 0;
  if (0 < (int)auStack_6c0._4_4_) {
    lVar25 = 0;
    do {
      piStack_680[lVar25] = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < (int)auStack_6c0._4_4_);
  }
  if (puStack_678 != &uStack_670 && puStack_678 != (undefined8 *)0x0) {
    param_1 = (undefined8 *)puStack_678[-1];
    _free();
  }
  if (lStack_628 != 0) {
    piVar1 = (int *)(lStack_628 + 0x14);
    do {
      iVar24 = *piVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = iVar24 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar24 + -1 == 0) {
      param_1 = (undefined8 *)auStack_660;
      func_0x000109a848d4();
    }
  }
  lStack_628 = 0;
  uStack_648 = 0;
  uStack_644 = 0;
  uStack_650 = 0;
  uStack_64c = 0;
  uStack_638 = 0;
  uStack_634 = 0;
  uStack_640 = 0;
  uStack_63c = 0;
  if (0 < (int)auStack_660._4_4_) {
    lVar25 = 0;
    do {
      *(undefined4 *)(puStack_620 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < (int)auStack_660._4_4_);
  }
  if (puStack_618 != puVar12 && puStack_618 != (undefined8 *)0x0) {
    param_1 = (undefined8 *)puStack_618[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar27 == 0) {
    __Unwind_Resume(param_1);
  }
  puVar12 = param_1;
  func_0x000104bd46a0();
  pcStack_778 = FUN_1094c4e54;
  uVar3 = *(uint *)(puVar12 + 1);
  if (0 < (int)uVar3) {
    uVar26 = 0;
    uVar4 = *(uint *)((long)puVar12 + 0xc);
    do {
      if (0 < (int)uVar4) {
        lVar25 = puVar12[2];
        plVar36 = (long *)puVar12[9];
        uVar5 = *puVar17;
        uVar6 = puVar17[3];
        lVar30 = *(long *)(puVar17 + 4);
        piVar1 = *(int **)(puVar17 + 0x10);
        plVar14 = *(long **)(puVar17 + 0x12);
        pcVar18 = (char *)((long)puVar27 + *plVar16 * uVar26);
        uVar20 = (ulong)uVar4;
        do {
          if (*pcVar18 != '\0') {
            bVar7 = *(byte *)(lVar25 + uVar26 * *plVar36);
            if (((uVar5 >> 0xe & 1) == 0) && (*piVar1 != 1)) {
              if (piVar1[1] == 1) {
                pfVar21 = (float *)(lVar30 + *plVar14 * (ulong)bVar7);
              }
              else {
                iVar24 = 0;
                if (uVar6 != 0) {
                  iVar24 = (int)(uint)bVar7 / (int)uVar6;
                }
                pfVar21 = (float *)(lVar30 + *plVar14 * (long)iVar24 +
                                   (long)(int)((uint)bVar7 - iVar24 * uVar6) * 4);
              }
            }
            else {
              pfVar21 = (float *)(lVar30 + (ulong)bVar7 * 4);
            }
            *pfVar21 = *pfVar21 + 1.0;
          }
          lVar25 = lVar25 + 1;
          uVar20 = uVar20 - 1;
          pcVar18 = pcVar18 + 1;
        } while (uVar20 != 0);
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
  }
  uStack_918 = 0;
  auStack_928[0] = 0x1010000;
  uStack_948 = CONCAT44(uStack_948._4_4_,0x3010000);
  uStack_938 = 0;
  puStack_940 = puVar17;
  puStack_920 = puVar17;
  puStack_7b0 = puVar40;
  puStack_7a8 = &uStack_670;
  puStack_7a0 = puVar29;
  puStack_798 = puVar39;
  puStack_790 = param_2;
  puStack_788 = param_1;
  puStack_780 = &stack0xfffffffffffffff0;
  FUN_109a91d90();
  FUN_109a42708(0x3ff0000000000000,0,auStack_928,&uStack_948,2,0xffffffff,puVar12);
  uStack_948 = 0x3f50624de0000000;
  puStack_940 = (uint *)0x0;
  uStack_938 = 0;
  uStack_930 = 0;
  puVar13 = puVar17;
  FUN_109a7c7d4(auStack_928,puVar17,&uStack_948);
  uStack_7b8 = 0;
  auStack_7c8[0] = 0xc1060000;
  auStack_960[0] = 0x3010000;
  uStack_950 = 0;
  puStack_958 = puVar17;
  puStack_7c0 = auStack_928;
  FUN_109a91d90();
  FUN_109a42708(0x3ff0000000000000,0,auStack_7c8,auStack_960,2,0xffffffff,puVar13);
  FUN_10918eb6c(auStack_928);
  lVar30 = 0;
  uVar3 = *puVar17;
  uVar4 = *puVar19;
  **(undefined4 **)(puVar19 + 4) = **(undefined4 **)(puVar17 + 4);
  uVar5 = puVar19[3];
  lVar37 = *(long *)(puVar19 + 4);
  piVar1 = *(int **)(puVar19 + 0x10);
  plVar16 = *(long **)(puVar19 + 0x12);
  uVar6 = puVar17[3];
  lVar38 = *(long *)(puVar17 + 4);
  piVar2 = *(int **)(puVar17 + 0x10);
  plVar14 = *(long **)(puVar17 + 0x12);
  lVar25 = 1;
  lVar34 = lVar37;
  lVar15 = lVar38;
  do {
    lVar15 = lVar15 + 4;
    iVar24 = (int)lVar30;
    if (((uVar4 >> 0xe & 1) == 0) && (*piVar1 != 1)) {
      if (piVar1[1] == 1) {
        pfVar21 = (float *)(lVar37 + *plVar16 * lVar30);
      }
      else {
        iVar8 = 0;
        if (uVar5 != 0) {
          iVar8 = iVar24 / (int)uVar5;
        }
        pfVar21 = (float *)(lVar34 + *plVar16 * (long)iVar8 + (long)(int)(iVar8 * uVar5) * -4);
      }
    }
    else {
      pfVar21 = (float *)(lVar37 + (lVar25 + -1) * 4);
    }
    if (((uVar3 >> 0xe & 1) == 0) && (*piVar2 != 1)) {
      if (piVar2[1] == 1) {
        pfVar23 = (float *)(lVar38 + *plVar14 * (lVar30 + 1));
      }
      else {
        iVar8 = 0;
        if (uVar6 != 0) {
          iVar8 = (iVar24 + 1) / (int)uVar6;
        }
        pfVar23 = (float *)(lVar15 + *plVar14 * (long)iVar8 + (long)(int)(iVar8 * uVar6) * -4);
      }
    }
    else {
      pfVar23 = (float *)(lVar38 + lVar25 * 4);
    }
    if (((uVar4 >> 0xe & 1) == 0) && (*piVar1 != 1)) {
      if (piVar1[1] == 1) {
        pfVar22 = (float *)(lVar37 + *plVar16 * (lVar30 + 1));
      }
      else {
        iVar8 = 0;
        if (uVar5 != 0) {
          iVar8 = (iVar24 + 1) / (int)uVar5;
        }
        pfVar22 = (float *)(lVar34 + *plVar16 * (long)iVar8 + (long)(int)(iVar8 * uVar5) * -4 + 4);
      }
    }
    else {
      pfVar22 = (float *)(lVar37 + lVar25 * 4);
    }
    *pfVar22 = *pfVar21 + *pfVar23;
    lVar25 = lVar25 + 1;
    lVar30 = lVar30 + 1;
    lVar34 = lVar34 + 4;
  } while (lVar30 != 0xff);
  uStack_918 = 0;
  auStack_928[0] = 0x1010000;
  uStack_948 = CONCAT44(uStack_948._4_4_,0x3010000);
  uStack_938 = 0;
  puStack_940 = puVar19;
  puStack_920 = puVar19;
  FUN_109a91d90();
  FUN_109a42708(0x3ff0000000000000,0,auStack_928,&uStack_948,0x20,0xffffffff,plVar14);
  return;
}



/* Entry: 1094c4e54; end: 1094c51bb;  */

void FUN_1094c4e54(long param_1,long param_2,long *param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined4 auStack_1f0 [2];
  uint *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  uint *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 auStack_1b8 [2];
  uint *puStack_1b0;
  undefined8 uStack_1a8;
  undefined4 auStack_58 [2];
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  uVar4 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar4) {
    uVar19 = 0;
    uVar5 = *(uint *)(param_1 + 0xc);
    do {
      if (0 < (int)uVar5) {
        lVar20 = *(long *)(param_1 + 0x10);
        plVar21 = *(long **)(param_1 + 0x48);
        uVar6 = *param_4;
        uVar7 = param_4[3];
        lVar23 = *(long *)(param_4 + 4);
        piVar1 = *(int **)(param_4 + 0x10);
        plVar3 = *(long **)(param_4 + 0x12);
        pcVar12 = (char *)(param_2 + *param_3 * uVar19);
        uVar14 = (ulong)uVar5;
        do {
          if (*pcVar12 != '\0') {
            bVar8 = *(byte *)(lVar20 + uVar19 * *plVar21);
            if (((uVar6 >> 0xe & 1) == 0) && (*piVar1 != 1)) {
              if (piVar1[1] == 1) {
                pfVar15 = (float *)(lVar23 + *plVar3 * (ulong)bVar8);
              }
              else {
                iVar18 = 0;
                if (uVar7 != 0) {
                  iVar18 = (int)(uint)bVar8 / (int)uVar7;
                }
                pfVar15 = (float *)(lVar23 + *plVar3 * (long)iVar18 +
                                   (long)(int)((uint)bVar8 - iVar18 * uVar7) * 4);
              }
            }
            else {
              pfVar15 = (float *)(lVar23 + (ulong)bVar8 * 4);
            }
            *pfVar15 = *pfVar15 + 1.0;
          }
          lVar20 = lVar20 + 1;
          uVar14 = uVar14 - 1;
          pcVar12 = pcVar12 + 1;
        } while (uVar14 != 0);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar4);
  }
  uStack_1a8 = 0;
  auStack_1b8[0] = 0x1010000;
  uStack_1d8 = CONCAT44(uStack_1d8._4_4_,0x3010000);
  uStack_1c8 = 0;
  puStack_1d0 = param_4;
  puStack_1b0 = param_4;
  FUN_109a91d90();
  FUN_109a42708(0x3ff0000000000000,0,auStack_1b8,&uStack_1d8,2,0xffffffff,param_1);
  uStack_1d8 = 0x3f50624de0000000;
  puStack_1d0 = (uint *)0x0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  puVar10 = param_4;
  FUN_109a7c7d4(auStack_1b8,param_4,&uStack_1d8);
  uStack_48 = 0;
  auStack_58[0] = 0xc1060000;
  auStack_1f0[0] = 0x3010000;
  uStack_1e0 = 0;
  puStack_1e8 = param_4;
  puStack_50 = auStack_1b8;
  FUN_109a91d90();
  FUN_109a42708(0x3ff0000000000000,0,auStack_58,auStack_1f0,2,0xffffffff,puVar10);
  FUN_10918eb6c(auStack_1b8);
  lVar23 = 0;
  uVar4 = *param_4;
  uVar5 = *param_5;
  **(undefined4 **)(param_5 + 4) = **(undefined4 **)(param_4 + 4);
  uVar6 = param_5[3];
  lVar22 = *(long *)(param_5 + 4);
  piVar1 = *(int **)(param_5 + 0x10);
  plVar3 = *(long **)(param_5 + 0x12);
  uVar7 = param_4[3];
  lVar24 = *(long *)(param_4 + 4);
  piVar2 = *(int **)(param_4 + 0x10);
  plVar21 = *(long **)(param_4 + 0x12);
  lVar20 = 1;
  lVar13 = lVar22;
  lVar11 = lVar24;
  do {
    lVar11 = lVar11 + 4;
    iVar18 = (int)lVar23;
    if (((uVar5 >> 0xe & 1) == 0) && (*piVar1 != 1)) {
      if (piVar1[1] == 1) {
        pfVar15 = (float *)(lVar22 + *plVar3 * lVar23);
      }
      else {
        iVar9 = 0;
        if (uVar6 != 0) {
          iVar9 = iVar18 / (int)uVar6;
        }
        pfVar15 = (float *)(lVar13 + *plVar3 * (long)iVar9 + (long)(int)(iVar9 * uVar6) * -4);
      }
    }
    else {
      pfVar15 = (float *)(lVar22 + (lVar20 + -1) * 4);
    }
    if (((uVar4 >> 0xe & 1) == 0) && (*piVar2 != 1)) {
      if (piVar2[1] == 1) {
        pfVar17 = (float *)(lVar24 + *plVar21 * (lVar23 + 1));
      }
      else {
        iVar9 = 0;
        if (uVar7 != 0) {
          iVar9 = (iVar18 + 1) / (int)uVar7;
        }
        pfVar17 = (float *)(lVar11 + *plVar21 * (long)iVar9 + (long)(int)(iVar9 * uVar7) * -4);
      }
    }
    else {
      pfVar17 = (float *)(lVar24 + lVar20 * 4);
    }
    if (((uVar5 >> 0xe & 1) == 0) && (*piVar1 != 1)) {
      if (piVar1[1] == 1) {
        pfVar16 = (float *)(lVar22 + *plVar3 * (lVar23 + 1));
      }
      else {
        iVar9 = 0;
        if (uVar6 != 0) {
          iVar9 = (iVar18 + 1) / (int)uVar6;
        }
        pfVar16 = (float *)(lVar13 + *plVar3 * (long)iVar9 + (long)(int)(iVar9 * uVar6) * -4 + 4);
      }
    }
    else {
      pfVar16 = (float *)(lVar22 + lVar20 * 4);
    }
    *pfVar16 = *pfVar15 + *pfVar17;
    lVar20 = lVar20 + 1;
    lVar23 = lVar23 + 1;
    lVar13 = lVar13 + 4;
  } while (lVar23 != 0xff);
  uStack_1a8 = 0;
  auStack_1b8[0] = 0x1010000;
  uStack_1d8 = CONCAT44(uStack_1d8._4_4_,0x3010000);
  uStack_1c8 = 0;
  puStack_1d0 = param_5;
  puStack_1b0 = param_5;
  FUN_109a91d90();
  FUN_109a42708(0x3ff0000000000000,0,auStack_1b8,&uStack_1d8,0x20,0xffffffff,plVar21);
  return;
}



/* Entry: 1094c51bc; end: 1094c526f;  */

void FUN_1094c51bc(int *param_1,long param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = *(float *)(param_2 + 0x28);
  fVar7 = fVar8 * -2.0 + 1.0;
  fVar6 = (float)param_3[3] / fVar7;
  fVar7 = (float)param_3[2] / fVar7;
  iVar2 = (int)fVar6;
  iVar5 = (int)fVar7;
  iVar3 = ((*param_3 + param_3[2]) - iVar5) + (int)(fVar8 * (float)(int)fVar7);
  iVar4 = param_3[1] - (int)((fVar8 + *(float *)(param_2 + 0x24)) * (float)(int)fVar6);
  if ((iVar5 - iVar2 == 0 || iVar5 < iVar2) || (*(char *)(param_2 + 0x2c) == '\x01')) {
    iVar1 = iVar2 - iVar5;
    if ((iVar1 != 0 && iVar5 <= iVar2) || (iVar5 = iVar2, *(char *)(param_2 + 0x2c) == '\x01')) {
      iVar3 = iVar3 - iVar1 / 2;
      iVar5 = iVar2;
    }
  }
  else {
    iVar4 = iVar4 - (iVar5 - iVar2) / 2;
  }
  *param_1 = iVar3;
  param_1[1] = iVar4;
  param_1[2] = iVar5;
  param_1[3] = iVar5;
  return;
}



/* Entry: 1094c5270; end: 1094c52bf;  */

void FUN_1094c5270(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10938f1f8(uVar1);
    lVar2 = uVar1 + 0x60;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_10919d830();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 1094c52c0; end: 1094c535b;  */

long FUN_1094c52c0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 1094c535c; end: 1094c5613;  */

undefined8 * FUN_1094c535c(undefined8 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 auStack_50 [2];
  
  if ((*param_2 & 0xfff) == 0x15) {
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(param_1);
      }
    }
    param_1[7] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    if (0 < *(int *)((long)param_1 + 4)) {
      lVar6 = 0;
      lVar7 = param_1[8];
      do {
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)((long)param_1 + 4));
    }
    puVar10 = param_2 + 1;
    uVar5 = *puVar10;
    uVar11 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 4);
    param_1[3] = *(undefined8 *)(param_2 + 6);
    param_1[2] = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 8);
    param_1[5] = *(undefined8 *)(param_2 + 10);
    param_1[4] = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 0xc);
    param_1[7] = *(undefined8 *)(param_2 + 0xe);
    param_1[6] = uVar11;
    puVar8 = (undefined8 *)param_1[9];
    puVar9 = param_1 + 10;
    if (puVar8 != puVar9) {
      if (puVar8 != (undefined8 *)0x0) {
        _free(puVar8[-1]);
        uVar5 = *puVar10;
      }
      param_1[8] = param_1 + 1;
      param_1[9] = puVar9;
      puVar8 = puVar9;
    }
    puVar9 = *(undefined8 **)(param_2 + 0x12);
    if ((int)uVar5 < 3) {
      *puVar8 = *puVar9;
      puVar8[1] = puVar9[1];
    }
    else {
      param_1[9] = puVar9;
      param_1[8] = *(undefined8 *)(param_2 + 0x10);
      *(uint **)(param_2 + 0x10) = param_2 + 2;
      *(uint **)(param_2 + 0x12) = param_2 + 0x14;
    }
    *param_2 = 0x42ff0000;
    param_2[3] = 0;
    param_2[4] = 0;
    puVar10[0] = 0;
    puVar10[1] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
  }
  else if ((*param_2 & 7) == 5) {
    FUN_109a9ad84(&uStack_a0,param_2,3,param_2[1],0);
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(param_1);
      }
    }
    param_1[7] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    if (0 < *(int *)((long)param_1 + 4)) {
      lVar6 = 0;
      lVar7 = param_1[8];
      do {
        *(undefined4 *)(lVar7 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)((long)param_1 + 4));
    }
    param_1[1] = puStack_98;
    *param_1 = CONCAT44(iStack_9c,uStack_a0);
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    puVar8 = (undefined8 *)param_1[9];
    puVar9 = param_1 + 10;
    if (puVar8 != puVar9) {
      if (puVar8 != (undefined8 *)0x0) {
        _free(puVar8[-1]);
      }
      param_1[8] = param_1 + 1;
      param_1[9] = puVar9;
      puVar8 = puVar9;
    }
    if (iStack_9c < 3) {
      puVar9 = (undefined8 *)((ulong)&uStack_a0 | 4);
      *puVar8 = *puStack_58;
      puVar8[1] = puStack_58[1];
      uStack_a0 = 0x42ff0000;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      *(undefined8 *)((long)puVar9 + 0x34) = 0;
      *(undefined8 *)((long)puVar9 + 0x2c) = 0;
      if (puStack_58 != auStack_50) {
        _free(puStack_58[-1]);
      }
    }
    else {
      param_1[8] = uStack_60;
      param_1[9] = puStack_58;
    }
  }
  else {
    uStack_a0 = 0x82010015;
    uStack_90 = 0;
    puStack_98 = param_1;
    FUN_109a41858(0x3ff0000000000000,0,param_2,&uStack_a0,0x15);
  }
  return param_1;
}



/* Entry: 1094c5614; end: 1094c593f;  */

long FUN_1094c5614(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x230) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x230) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x1f8);
    }
  }
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  if (0 < *(int *)(param_1 + 0x1fc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x238);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x1fc));
  }
  lVar5 = *(long *)(param_1 + 0x240);
  if (lVar5 != param_1 + 0x248 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x1d0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x1d0) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x198);
    }
  }
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (0 < *(int *)(param_1 + 0x19c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x1d8);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x19c));
  }
  lVar5 = *(long *)(param_1 + 0x1e0);
  if (lVar5 != param_1 + 0x1e8 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x170) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x170) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x138);
    }
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (0 < *(int *)(param_1 + 0x13c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x178);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x13c));
  }
  lVar5 = *(long *)(param_1 + 0x180);
  if (lVar5 != param_1 + 0x188 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  lStack_28 = param_1 + 0x120;
  FUN_1093702c4(&lStack_28);
  if (*(long *)(param_1 + 0xf8) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xf8) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xc0);
    }
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x100);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xc4));
  }
  lVar5 = *(long *)(param_1 + 0x108);
  if (lVar5 != param_1 + 0x110 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 100));
  }
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != param_1 + 0xb0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 1094c5940; end: 1094c59bf;  */

void FUN_1094c5940(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110af7368;
  puVar1[6] = 0x3f8000003dcccccd;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0x3e6800003e280000;
  *(undefined8 *)((long)puVar1 + 0x54) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  *(undefined8 *)((long)puVar1 + 100) = 0;
  *(undefined8 *)((long)puVar1 + 0x5c) = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *(undefined4 *)((long)puVar1 + 0x44) = 0;
  *(undefined2 *)(puVar1 + 9) = 0x101;
  *(undefined4 *)((long)puVar1 + 0x6c) = 0;
  param_1[1] = puVar1;
  puVar1[4] = 0x6e0000003f;
  puVar1[3] = 0x3200000100;
  *param_1 = puVar1 + 3;
  return;
}



/* Entry: 1094c59c0; end: 1094c5a8b;  */

void FUN_1094c59c0(undefined8 *param_1,long param_2,long param_3,int param_4,int param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar2 = param_3 - param_2 >> 3;
  if (param_5 <= (int)lVar2) {
    fVar4 = 0.0;
    fVar5 = 0.0;
    if (param_5 - param_4 != 0 && param_4 <= param_5) {
      lVar2 = (long)param_5 - (long)param_4;
      puVar3 = (undefined8 *)(param_2 + (long)param_4 * 8);
      do {
        uVar7 = NEON_scvtf(*puVar3,4);
        fVar4 = fVar4 + (float)uVar7;
        fVar5 = fVar5 + (float)((ulong)uVar7 >> 0x20);
        lVar2 = lVar2 + -1;
        puVar3 = puVar3 + 1;
      } while (lVar2 != 0);
    }
    fVar6 = (float)(param_5 - param_4);
    *param_1 = CONCAT44(fVar5 / fVar6,fVar4 / fVar6);
    return;
  }
  __ZNSt3__19to_stringEm(auStack_50,lVar2);
  FUN_10928a5e0(auStack_38,&UNK_10f56ee75,auStack_50);
  func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1094c5a58);
  (*pcVar1)();
}



/* Entry: 1094c5a8c; end: 1094c5b13;  */

void FUN_1094c5a8c(float param_1,int *param_2,undefined8 *param_3,undefined8 *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  
  if (0x168 < (ulong)(param_5 - (long)param_4)) {
    iVar1 = *(int *)((long)param_4 + 0x16c);
    iVar2 = *(int *)((long)param_4 + 0x124);
    iVar3 = *(int *)*param_3;
    iVar6 = ((int *)*param_3)[1];
    iVar5 = (int)((float)iVar3 / param_1);
    *param_2 = (int)((float)(*(int *)(param_4 + 0x24) + *(int *)(param_4 + 0x2d)) / 2.0 -
                    (float)iVar3 / (param_1 + param_1));
    param_2[1] = (int)((float)(iVar2 + iVar1) / 2.0 - (float)iVar6 / param_1);
    param_2[2] = iVar5;
    param_2[3] = iVar5;
    return;
  }
  FUN_1094c5b84();
  if (param_5 != 0) {
    FUN_1092e9240();
    puVar4 = *(undefined8 **)(param_2 + 2);
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *puVar4 = *param_3;
      puVar4 = puVar4 + 1;
    }
    *(undefined8 **)(param_2 + 2) = puVar4;
  }
  return;
}



/* Entry: 1094c5b14; end: 1094c5b83;  */

void FUN_1094c5b14(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_1092e9240(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 1094c5b84; end: 1094c5b97;  */

long * FUN_1094c5b84(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                    int param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  long *plStack_128;
  undefined4 *puStack_120;
  undefined4 *puStack_118;
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  long *plStack_c8;
  float *pfStack_c0;
  float *pfStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_68;
  float *pfStack_60;
  float *pfStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar8 = (long *)&DAT_10f62a4d8;
  FUN_109262df8();
  lVar9 = plVar8[1] - *plVar8;
  uVar1 = (lVar9 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar5 = plVar8[2] - *plVar8;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    plStack_48 = plVar8;
    if (uVar6 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = plVar8;
      FUN_1092cc0a8();
    }
    pfStack_60 = (float *)((long)plVar4 + lVar9);
    plStack_50 = plVar4 + uVar6;
    pfStack_58 = pfStack_60 + 2;
    *pfStack_60 = (float)(int)param_2;
    pfStack_60[1] = (float)(int)param_3;
    plStack_68 = plVar4;
    FUN_1092cc028(plVar8,&plStack_68);
    plVar8 = (long *)plVar8[1];
    if (pfStack_58 != pfStack_60) {
      pfStack_58 = (float *)((long)pfStack_58 +
                            ((ulong)((long)pfStack_60 + (7 - (long)pfStack_58)) & 0xfffffffffffffff8
                            ));
    }
    if (plStack_68 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar8;
  }
  FUN_1092cc094();
  if (pfStack_58 != pfStack_60) {
    pfStack_58 = (float *)((long)pfStack_58 +
                          (((long)pfStack_60 - (long)pfStack_58) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_68 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar10 = plVar8[1] - *plVar8;
  uVar1 = (lVar10 >> 3) + 1;
  lStack_a0 = lVar9;
  if (uVar1 >> 0x3d == 0) {
    uVar5 = plVar8[2] - *plVar8;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    plStack_a8 = plVar8;
    if (uVar6 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = plVar8;
      FUN_1092cc0a8();
    }
    pfStack_c0 = (float *)((long)plVar4 + lVar10);
    plStack_b0 = plVar4 + uVar6;
    pfStack_b8 = pfStack_c0 + 2;
    *pfStack_c0 = (float)(int)param_2;
    pfStack_c0[1] = (float)(int)param_3;
    plStack_c8 = plVar4;
    FUN_1092cc028(plVar8,&plStack_c8);
    plVar8 = (long *)plVar8[1];
    if (pfStack_b8 != pfStack_c0) {
      pfStack_b8 = (float *)((long)pfStack_b8 +
                            ((ulong)((long)pfStack_c0 + (7 - (long)pfStack_b8)) & 0xfffffffffffffff8
                            ));
    }
    if (plStack_c8 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar8;
  }
  FUN_1092cc094();
  if (pfStack_b8 != pfStack_c0) {
    pfStack_b8 = (float *)((long)pfStack_b8 +
                          (((long)pfStack_c0 - (long)pfStack_b8) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_c8 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar9 = plVar8[1] - *plVar8;
  uVar1 = (lVar9 >> 3) + 1;
  lStack_100 = lVar10;
  if (uVar1 >> 0x3d == 0) {
    uVar5 = plVar8[2] - *plVar8;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    plStack_108 = plVar8;
    if (uVar6 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = plVar8;
      FUN_1092c61ac();
    }
    puStack_120 = (undefined4 *)((long)plVar4 + lVar9);
    plStack_110 = plVar4 + uVar6;
    uVar2 = *param_3;
    puStack_118 = puStack_120 + 2;
    *puStack_120 = *param_2;
    puStack_120[1] = uVar2;
    plStack_128 = plVar4;
    FUN_1092c79f4(plVar8,&plStack_128);
    plVar8 = (long *)plVar8[1];
    if (puStack_118 != puStack_120) {
      puStack_118 = (undefined4 *)
                    ((long)puStack_118 +
                    ((ulong)((long)puStack_120 + (7 - (long)puStack_118)) & 0xfffffffffffffff8));
    }
    if (plStack_128 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar8;
  }
  FUN_1092c6198();
  if (puStack_118 != puStack_120) {
    puStack_118 = (undefined4 *)
                  ((long)puStack_118 +
                  (((long)puStack_120 - (long)puStack_118) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_128 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar9 = (long)param_3 - (long)param_2 >> 3;
  if (param_5 <= (int)lVar9) {
    fVar11 = 0.0;
    fVar12 = 0.0;
    if (param_5 - param_4 != 0 && param_4 <= param_5) {
      lVar9 = (long)param_5 - (long)param_4;
      puVar7 = (undefined8 *)(param_2 + (long)param_4 * 2);
      do {
        fVar11 = fVar11 + (float)*puVar7;
        fVar12 = fVar12 + (float)((ulong)*puVar7 >> 0x20);
        lVar9 = lVar9 + -1;
        puVar7 = puVar7 + 1;
      } while (lVar9 != 0);
    }
    fVar13 = (float)(param_5 - param_4);
    *plVar8 = CONCAT44(fVar12 / fVar13,fVar11 / fVar13);
    return plVar8;
  }
  __ZNSt3__19to_stringEm(auStack_180,lVar9);
  FUN_10928a5e0(auStack_168,&UNK_10f56ee75,auStack_180);
  func_0x000105687ee0(auStack_168);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1094c5f8c);
  (*pcVar3)();
}



/* Entry: 1094c5b98; end: 1094c5cb7;  */

long * FUN_1094c5b98(long *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  long *plStack_118;
  undefined4 *puStack_110;
  undefined4 *puStack_108;
  long *plStack_100;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_b8;
  float *pfStack_b0;
  float *pfStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_58;
  float *pfStack_50;
  float *pfStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar8 = param_1[1] - *param_1;
  uVar1 = (lVar8 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar5 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = param_1;
      FUN_1092cc0a8();
    }
    pfStack_50 = (float *)((long)plVar7 + lVar8);
    plStack_40 = plVar7 + uVar5;
    pfStack_48 = pfStack_50 + 2;
    *pfStack_50 = (float)(int)param_2;
    pfStack_50[1] = (float)(int)param_3;
    plStack_58 = plVar7;
    FUN_1092cc028(param_1,&plStack_58);
    plVar7 = (long *)param_1[1];
    if (pfStack_48 != pfStack_50) {
      pfStack_48 = (float *)((long)pfStack_48 +
                            ((long)pfStack_50 + (7 - (long)pfStack_48) & 0xfffffffffffffff8U));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar7;
  }
  FUN_1092cc094();
  if (pfStack_48 != pfStack_50) {
    pfStack_48 = (float *)((long)pfStack_48 +
                          (((long)pfStack_50 - (long)pfStack_48) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar9 = param_1[1] - *param_1;
  uVar1 = (lVar9 >> 3) + 1;
  lStack_90 = lVar8;
  if (uVar1 >> 0x3d == 0) {
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    plStack_98 = param_1;
    if (uVar5 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = param_1;
      FUN_1092cc0a8();
    }
    pfStack_b0 = (float *)((long)plVar7 + lVar9);
    plStack_a0 = plVar7 + uVar5;
    pfStack_a8 = pfStack_b0 + 2;
    *pfStack_b0 = (float)(int)param_2;
    pfStack_b0[1] = (float)(int)param_3;
    plStack_b8 = plVar7;
    FUN_1092cc028(param_1,&plStack_b8);
    plVar7 = (long *)param_1[1];
    if (pfStack_a8 != pfStack_b0) {
      pfStack_a8 = (float *)((long)pfStack_a8 +
                            ((long)pfStack_b0 + (7 - (long)pfStack_a8) & 0xfffffffffffffff8U));
    }
    if (plStack_b8 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar7;
  }
  FUN_1092cc094();
  if (pfStack_a8 != pfStack_b0) {
    pfStack_a8 = (float *)((long)pfStack_a8 +
                          (((long)pfStack_b0 - (long)pfStack_a8) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_b8 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar8 = param_1[1] - *param_1;
  uVar1 = (lVar8 >> 3) + 1;
  lStack_f0 = lVar9;
  if (uVar1 >> 0x3d == 0) {
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    plStack_f8 = param_1;
    if (uVar5 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = param_1;
      FUN_1092c61ac();
    }
    puStack_110 = (undefined4 *)((long)plVar7 + lVar8);
    plStack_100 = plVar7 + uVar5;
    uVar2 = *param_3;
    puStack_108 = puStack_110 + 2;
    *puStack_110 = *param_2;
    puStack_110[1] = uVar2;
    plStack_118 = plVar7;
    FUN_1092c79f4(param_1,&plStack_118);
    plVar7 = (long *)param_1[1];
    if (puStack_108 != puStack_110) {
      puStack_108 = (undefined4 *)
                    ((long)puStack_108 +
                    ((long)puStack_110 + (7 - (long)puStack_108) & 0xfffffffffffffff8U));
    }
    if (plStack_118 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar7;
  }
  FUN_1092c6198();
  if (puStack_108 != puStack_110) {
    puStack_108 = (undefined4 *)
                  ((long)puStack_108 +
                  (((long)puStack_110 - (long)puStack_108) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_118 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar8 = (long)param_3 - (long)param_2 >> 3;
  if (param_5 <= (int)lVar8) {
    fVar10 = 0.0;
    fVar11 = 0.0;
    if (param_5 - param_4 != 0 && param_4 <= param_5) {
      lVar8 = (long)param_5 - (long)param_4;
      puVar6 = (undefined8 *)(param_2 + (long)param_4 * 2);
      do {
        fVar10 = fVar10 + (float)*puVar6;
        fVar11 = fVar11 + (float)((ulong)*puVar6 >> 0x20);
        lVar8 = lVar8 + -1;
        puVar6 = puVar6 + 1;
      } while (lVar8 != 0);
    }
    fVar12 = (float)(param_5 - param_4);
    *param_1 = CONCAT44(fVar11 / fVar12,fVar10 / fVar12);
    return param_1;
  }
  __ZNSt3__19to_stringEm(auStack_170,lVar8);
  FUN_10928a5e0(auStack_158,&UNK_10f56ee75,auStack_170);
  func_0x000105687ee0(auStack_158);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1094c5f8c);
  (*pcVar3)();
}



/* Entry: 1094c5cb8; end: 1094c5dd7;  */

long * FUN_1094c5cb8(long *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  long *plStack_b8;
  undefined4 *puStack_b0;
  undefined4 *puStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_58;
  float *pfStack_50;
  float *pfStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar8 = param_1[1] - *param_1;
  uVar1 = (lVar8 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar5 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = param_1;
      FUN_1092cc0a8();
    }
    pfStack_50 = (float *)((long)plVar7 + lVar8);
    plStack_40 = plVar7 + uVar5;
    pfStack_48 = pfStack_50 + 2;
    *pfStack_50 = (float)(int)param_2;
    pfStack_50[1] = (float)(int)param_3;
    plStack_58 = plVar7;
    FUN_1092cc028(param_1,&plStack_58);
    plVar7 = (long *)param_1[1];
    if (pfStack_48 != pfStack_50) {
      pfStack_48 = (float *)((long)pfStack_48 +
                            ((long)pfStack_50 + (7 - (long)pfStack_48) & 0xfffffffffffffff8U));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar7;
  }
  FUN_1092cc094();
  if (pfStack_48 != pfStack_50) {
    pfStack_48 = (float *)((long)pfStack_48 +
                          (((long)pfStack_50 - (long)pfStack_48) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar9 = param_1[1] - *param_1;
  uVar1 = (lVar9 >> 3) + 1;
  lStack_90 = lVar8;
  if (uVar1 >> 0x3d == 0) {
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    plStack_98 = param_1;
    if (uVar5 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = param_1;
      FUN_1092c61ac();
    }
    puStack_b0 = (undefined4 *)((long)plVar7 + lVar9);
    plStack_a0 = plVar7 + uVar5;
    uVar2 = *param_3;
    puStack_a8 = puStack_b0 + 2;
    *puStack_b0 = *param_2;
    puStack_b0[1] = uVar2;
    plStack_b8 = plVar7;
    FUN_1092c79f4(param_1,&plStack_b8);
    plVar7 = (long *)param_1[1];
    if (puStack_a8 != puStack_b0) {
      puStack_a8 = (undefined4 *)
                   ((long)puStack_a8 +
                   ((long)puStack_b0 + (7 - (long)puStack_a8) & 0xfffffffffffffff8U));
    }
    if (plStack_b8 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar7;
  }
  FUN_1092c6198();
  if (puStack_a8 != puStack_b0) {
    puStack_a8 = (undefined4 *)
                 ((long)puStack_a8 +
                 (((long)puStack_b0 - (long)puStack_a8) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_b8 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar8 = (long)param_3 - (long)param_2 >> 3;
  if (param_5 <= (int)lVar8) {
    fVar10 = 0.0;
    fVar11 = 0.0;
    if (param_5 - param_4 != 0 && param_4 <= param_5) {
      lVar8 = (long)param_5 - (long)param_4;
      puVar6 = (undefined8 *)(param_2 + (long)param_4 * 2);
      do {
        fVar10 = fVar10 + (float)*puVar6;
        fVar11 = fVar11 + (float)((ulong)*puVar6 >> 0x20);
        lVar8 = lVar8 + -1;
        puVar6 = puVar6 + 1;
      } while (lVar8 != 0);
    }
    fVar12 = (float)(param_5 - param_4);
    *param_1 = CONCAT44(fVar11 / fVar12,fVar10 / fVar12);
    return param_1;
  }
  __ZNSt3__19to_stringEm(auStack_110,lVar8);
  FUN_10928a5e0(auStack_f8,&UNK_10f56ee75,auStack_110);
  func_0x000105687ee0(auStack_f8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1094c5f8c);
  (*pcVar3)();
}



/* Entry: 1094c5dd8; end: 1094c5ef7;  */

long * FUN_1094c5dd8(long *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  long *plStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar8 = param_1[1] - *param_1;
  uVar1 = (lVar8 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar5 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = param_1;
      FUN_1092c61ac();
    }
    puStack_50 = (undefined4 *)((long)plVar7 + lVar8);
    plStack_40 = plVar7 + uVar5;
    uVar2 = *param_3;
    puStack_48 = puStack_50 + 2;
    *puStack_50 = *param_2;
    puStack_50[1] = uVar2;
    plStack_58 = plVar7;
    FUN_1092c79f4(param_1,&plStack_58);
    plVar7 = (long *)param_1[1];
    if (puStack_48 != puStack_50) {
      puStack_48 = (undefined4 *)
                   ((long)puStack_48 +
                   ((long)puStack_50 + (7 - (long)puStack_48) & 0xfffffffffffffff8U));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar7;
  }
  FUN_1092c6198();
  if (puStack_48 != puStack_50) {
    puStack_48 = (undefined4 *)
                 ((long)puStack_48 +
                 (((long)puStack_50 - (long)puStack_48) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar8 = (long)param_3 - (long)param_2 >> 3;
  if (param_5 <= (int)lVar8) {
    fVar9 = 0.0;
    fVar10 = 0.0;
    if (param_5 - param_4 != 0 && param_4 <= param_5) {
      lVar8 = (long)param_5 - (long)param_4;
      puVar6 = (undefined8 *)(param_2 + (long)param_4 * 2);
      do {
        fVar9 = fVar9 + (float)*puVar6;
        fVar10 = fVar10 + (float)((ulong)*puVar6 >> 0x20);
        lVar8 = lVar8 + -1;
        puVar6 = puVar6 + 1;
      } while (lVar8 != 0);
    }
    fVar11 = (float)(param_5 - param_4);
    *param_1 = CONCAT44(fVar10 / fVar11,fVar9 / fVar11);
    return param_1;
  }
  __ZNSt3__19to_stringEm(auStack_b0,lVar8);
  FUN_10928a5e0(auStack_98,&UNK_10f56ee75,auStack_b0);
  func_0x000105687ee0(auStack_98);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1094c5f8c);
  (*pcVar3)();
}



/* Entry: 1094c5ef8; end: 1094c5fbf;  */

void FUN_1094c5ef8(undefined8 *param_1,long param_2,long param_3,int param_4,int param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar2 = param_3 - param_2 >> 3;
  if (param_5 <= (int)lVar2) {
    fVar4 = 0.0;
    fVar5 = 0.0;
    if (param_5 - param_4 != 0 && param_4 <= param_5) {
      lVar2 = (long)param_5 - (long)param_4;
      puVar3 = (undefined8 *)(param_2 + (long)param_4 * 8);
      do {
        fVar4 = fVar4 + (float)*puVar3;
        fVar5 = fVar5 + (float)((ulong)*puVar3 >> 0x20);
        lVar2 = lVar2 + -1;
        puVar3 = puVar3 + 1;
      } while (lVar2 != 0);
    }
    fVar6 = (float)(param_5 - param_4);
    *param_1 = CONCAT44(fVar5 / fVar6,fVar4 / fVar6);
    return;
  }
  __ZNSt3__19to_stringEm(auStack_50,lVar2);
  FUN_10928a5e0(auStack_38,&UNK_10f56ee75,auStack_50);
  func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1094c5f8c);
  (*pcVar1)();
}



/* Entry: 1094c5fc0; end: 1094c605f;  */

/* WARNING: Possible PIC construction at 0x0001094c6048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001094c66d8) */

int * FUN_1094c5fc0(float param_1,int *param_2,long *param_3,undefined4 *param_4,long param_5)

{
  ulong uVar1;
  long *plVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long **pplVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  int *extraout_x8;
  int iVar16;
  int iVar17;
  ulong uVar18;
  int *piVar19;
  ulong unaff_x20;
  long *plVar20;
  long lVar21;
  uint *puVar22;
  int iVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  ulong uStack_1e0;
  int *piStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long alStack_198 [4];
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long *aplStack_148 [3];
  undefined8 uStack_130;
  char cStack_119;
  long **applStack_110 [3];
  byte bStack_f8;
  long lStack_e8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  long *plStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (0x168 < (ulong)(param_5 - (long)param_4)) {
    fVar25 = (float)param_4[0x5b];
    fVar26 = (float)param_4[0x49];
    iVar17 = *(int *)*param_3;
    iVar23 = ((int *)*param_3)[1];
    iVar16 = (int)((float)iVar17 / param_1);
    *param_2 = (int)(((float)param_4[0x5a] + (float)param_4[0x48]) * 0.5 -
                    (float)iVar17 / (param_1 + param_1));
    param_2[1] = (int)((fVar25 + fVar26) * 0.5 - (float)iVar23 / param_1);
    param_2[2] = iVar16;
    param_2[3] = iVar16;
    return param_2;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  uStack_18 = 0x1094c604c;
  plVar8 = (long *)&DAT_10f62a4d8;
  FUN_109262df8();
  pcStack_28 = FUN_1094c6060;
  lVar21 = plVar8[1] - *plVar8;
  uVar1 = (lVar21 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar14 = plVar8[2] - *plVar8;
    uVar18 = (long)uVar14 >> 2;
    if (uVar18 <= uVar1) {
      uVar18 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar18 = 0x1fffffffffffffff;
    }
    plStack_58 = plVar8;
    if (uVar18 == 0) {
      plVar9 = (long *)0x0;
      puStack_30 = (undefined1 *)&puStack_20;
    }
    else {
      plVar9 = plVar8;
      puStack_30 = (undefined1 *)&puStack_20;
      FUN_1092cc0a8();
    }
    puStack_70 = (undefined4 *)((long)plVar9 + lVar21);
    plStack_60 = plVar9 + uVar18;
    uVar24 = *param_4;
    puStack_68 = puStack_70 + 2;
    *puStack_70 = (int)*param_3;
    puStack_70[1] = uVar24;
    plStack_78 = plVar9;
    FUN_1092cc028(plVar8,&plStack_78);
    piVar19 = (int *)plVar8[1];
    if (puStack_68 != puStack_70) {
      puStack_68 = (undefined4 *)
                   ((long)puStack_68 +
                   ((ulong)((long)puStack_70 + (7 - (long)puStack_68)) & 0xfffffffffffffff8));
    }
    if (plStack_78 != (long *)0x0) {
      __ZdlPv();
    }
    return piVar19;
  }
  puStack_30 = (undefined1 *)&puStack_20;
  FUN_1092cc094();
  if (puStack_68 != puStack_70) {
    puStack_68 = (undefined4 *)
                 ((long)puStack_68 +
                 (((long)puStack_70 - (long)puStack_68) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_78 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  pcStack_88 = FUN_1094c6180;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = *param_3;
  ppuStack_90 = &puStack_30;
  if (lVar21 == 0) {
    FUN_10937e740(&plStack_160,&UNK_10f56ef3a);
    FUN_109388c6c(1,&UNK_10f56ee99,&UNK_10f56ef2c,0x36,&plStack_160);
    if (lStack_150 < 0) {
      __ZdlPv(plStack_160);
    }
    goto LAB_1094c67b4;
  }
  lVar15 = param_3[1];
  if (lVar15 != 0) {
    plVar9 = (long *)(lVar15 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar20 = (long *)plVar8[7];
  plVar8[6] = lVar21;
  plVar8[7] = lVar15;
  plVar9 = plVar8;
  if (plVar20 != (long *)0x0) {
    plVar2 = plVar20 + 1;
    do {
      lVar15 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar9 = plVar20;
    }
  }
  lVar15 = plVar8[6];
  puVar3 = *(uint **)(lVar15 + 0x100);
  puVar22 = *(uint **)(lVar15 + 0xf8);
  do {
    if (puVar22 == puVar3) {
      uVar13 = 1;
      if (*(int *)(lVar15 + 0xe8) != 0) {
        uVar13 = 2;
      }
      goto LAB_1094c6268;
    }
    uVar4 = *puVar22;
    func_0x000109cd2af4();
    puVar22 = puVar22 + 1;
  } while ((uVar4 & (*(uint *)(plVar9 + 8) ^ 0xffffffff)) != 0);
  uVar13 = 1;
  if (*(int *)(lVar15 + 0xe8) != 0) {
    uVar13 = 2;
  }
  if (uVar4 != 0) {
    uVar13 = uVar4;
  }
LAB_1094c6268:
  unaff_x20 = (ulong)uVar13;
  if (*(char *)((long)plVar8 + 0x17) < '\0') {
    if (plVar8[1] == 0) goto LAB_1094c62c4;
  }
  else if (*(char *)((long)plVar8 + 0x17) == '\0') {
LAB_1094c62c4:
    FUN_10937e740(&plStack_160,&UNK_10f56ef6f);
    FUN_109388c6c(1,&UNK_10f56ee99,&UNK_10f56ef2c,0x3d,&plStack_160);
    if (lStack_150 < 0) {
      __ZdlPv(plStack_160);
    }
    unaff_x20 = 1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (*(long *)(plVar8[6] + 0xf0) + 0x20,plVar8);
  uVar10 = 0x80;
  __Znwm(0x80);
  func_0x000109cda3ec();
  FUN_10938cda4(plVar8 + 3,uVar10);
  plVar9 = *(long **)plVar8[6];
  (**(code **)(*plVar9 + 0x10))(&plStack_160,plVar9,(undefined8 *)plVar8[6] + 2);
  plVar9 = plStack_160;
  if (plStack_160 == (long *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    puVar11 = (undefined8 *)0x20;
    __Znwm();
    *puVar11 = &PTR_FUN_110af7448;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = plStack_160;
  }
  plStack_160 = (long *)0x0;
  plVar20 = (long *)plVar8[5];
  plVar8[4] = (long)plVar9;
  plVar8[5] = (long)puVar11;
  if (plVar20 != (long *)0x0) {
    plVar9 = plVar20 + 1;
    do {
      lVar15 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  plVar9 = plStack_160;
  plStack_160 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  alStack_198[3] = 0;
  plStack_178 = (long *)0x0;
  plStack_170 = (long *)0x0;
  FUN_109378e2c(alStack_198 + 3,*(long *)(*param_3 + 0xa0) + 1);
  plVar9 = plStack_178;
  lVar15 = plVar8[6];
  if (plStack_178 < plStack_170) {
    FUN_1093f241c(plStack_178,lVar15 + 0x28,lVar15 + 0x40);
    plVar9 = plVar9 + 0xb;
  }
  else {
    plVar9 = alStack_198 + 3;
    FUN_1093f22d4(plVar9,lVar15 + 0x28,lVar15 + 0x40);
  }
  for (plVar20 = *(long **)(*param_3 + 0x98); plStack_178 = plVar9, plVar20 != (long *)0x0;
      plVar20 = (long *)*plVar20) {
    if (plVar9 < plStack_170) {
      FUN_1094c8300(plVar9,plVar20 + 2,plVar20 + 5);
      plVar9 = plVar9 + 0xb;
    }
    else {
      plVar9 = alStack_198 + 3;
      FUN_1094c81b8(plVar9,plVar20 + 2,plVar20 + 5);
    }
  }
  lVar15 = plVar8[6];
  if (*(char *)(lVar15 + 199) < '\0') {
    func_0x000107c3192c(&plStack_160,*(undefined8 *)(lVar15 + 0xb0),*(undefined8 *)(lVar15 + 0xb8));
  }
  else {
    uStack_158 = *(undefined8 *)(lVar15 + 0xb8);
    plStack_160 = *(long **)(lVar15 + 0xb0);
    lStack_150 = *(long *)(lVar15 + 0xc0);
  }
  alStack_198[0] = 0;
  alStack_198[1] = 0;
  alStack_198[2] = 0;
  func_0x000107c2ac94(alStack_198,&plStack_160,aplStack_148,1);
  if (lStack_150 < 0) {
    __ZdlPv(plStack_160);
  }
  lVar15 = plVar8[6];
  if (*(char *)(lVar15 + 0xdf) < '\0') {
    if (*(long *)(lVar15 + 0xd0) != 0) goto LAB_1094c6504;
  }
  else if (*(char *)(lVar15 + 0xdf) != '\0') {
LAB_1094c6504:
    func_0x000107c2ac70(alStack_198,lVar15 + 200);
  }
  FUN_109378950(&plStack_160,alStack_198 + 3,alStack_198);
  iVar17 = *(int *)((long)plStack_160 + 0x1c);
  if ((int)plStack_160[3] == 0 && iVar17 == 0) {
    if ((*(int *)((long)plStack_160 + 0x24) != 0) || ((int)plStack_160[4] != 0)) {
      iVar17 = 0;
      goto LAB_1094c6544;
    }
  }
  else {
LAB_1094c6544:
    lVar15 = plVar8[6];
    *(int *)(plStack_160 + 3) =
         *(int *)(lVar15 + 0x78) + (int)plStack_160[3] + *(int *)(lVar15 + 0x7c);
    *(int *)((long)plStack_160 + 0x1c) = *(int *)(lVar15 + 0x70) + iVar17 + *(int *)(lVar15 + 0x74);
  }
  func_0x000109d05694(&uStack_1a8,applStack_110,plVar8);
  (**(code **)(*(long *)plVar8[4] + 0x20))(&plStack_1c0);
  lVar15 = plVar8[6];
  uVar10 = *(undefined8 *)(lVar15 + 0xf0);
  plVar20 = (long *)0x120;
  __Znwm();
  plStack_168 = plStack_1c0;
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&PTR_FUN_110af4c20;
  plStack_1c0 = (long *)0x0;
  func_0x000109d0a228(applStack_110,&plStack_168);
  plVar9 = plVar20 + 3;
  func_0x000109d03828(plVar9,&plStack_160,1,applStack_110,uVar10,unaff_x20,
                      *(undefined1 *)(lVar15 + 0xe4));
  (*(code *)(&PTR_FUN_110af4bf0)[bStack_f8])(applStack_110);
  if (plStack_168 != (long *)0x0) {
    (**(code **)(*plStack_168 + 8))();
  }
  plVar2 = plStack_1c0;
  plStack_1c0 = (long *)0x0;
  plStack_1b8 = plVar9;
  plStack_1b0 = plVar20;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x000109d03fe8(&plStack_168,uStack_1a8,&plStack_1b8,0);
  FUN_10938ab98(applStack_110,&plStack_168);
  if (plStack_168 != (long *)0x0) {
    plVar9 = plStack_168 + 1;
    do {
      lVar15 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_168 + 0x10))();
    }
  }
  pplVar7 = applStack_110[0];
  applStack_110[0] = (long **)0x0;
  FUN_10938cda4(plVar8 + 3,pplVar7);
  fVar25 = *(float *)(plVar8[6] + 0x80);
  if (0.001 < fVar25) {
    puVar12 = (undefined4 *)0x10;
    __Znwm();
    *puVar12 = 0;
    puVar12[1] = fVar25;
    *(undefined1 *)(puVar12 + 3) = 0;
    lVar15 = plVar8[8];
    plVar8[8] = (long)puVar12;
    if (lVar15 != 0) {
      __ZdlPv(lVar15);
    }
  }
  pplVar7 = applStack_110[0];
  applStack_110[0] = (long **)0x0;
  if (pplVar7 != (long **)0x0) {
    func_0x000109cda590();
    __ZdlPv();
  }
  plVar8 = plStack_1b0;
  if (plStack_1b0 != (long *)0x0) {
    plVar9 = plStack_1b0 + 1;
    do {
      lVar15 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (plStack_1a0 != (long *)0x0) {
    plVar8 = plStack_1a0 + 1;
    do {
      lVar15 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1a0);
    }
  }
  if (cStack_119 < '\0') {
    __ZdlPv(uStack_130);
  }
  applStack_110[0] = aplStack_148;
  FUN_109378cec(applStack_110);
  applStack_110[0] = &plStack_160;
  FUN_109378cec(applStack_110);
  plStack_160 = alStack_198;
  func_0x000104c607c8(&plStack_160);
  plStack_160 = alStack_198 + 3;
  FUN_109378cec(&plStack_160);
LAB_1094c67b4:
  piVar19 = (int *)(ulong)(lVar21 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return piVar19;
  }
  ___stack_chk_fail();
  plStack_160 = alStack_198 + 3;
  FUN_109378cec(&plStack_160);
  __Unwind_Resume(piVar19);
  pcStack_1c8 = FUN_1094c6988;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1f0 = 0x3f800000;
  uStack_1e0 = unaff_x20;
  piStack_1d8 = piVar19;
  pppuStack_1d0 = &ppuStack_90;
  FUN_1094c6a18(extraout_x8);
  FUN_1094c8830(&uStack_210);
  uStack_210 = CONCAT44(uStack_210._4_4_,0x2010000);
  uStack_200 = 0;
  piVar19 = extraout_x8;
  FUN_109a41858(0x3ff0000000000000,0,extraout_x8,&uStack_210,0);
  return piVar19;
}



/* Entry: 1094c6060; end: 1094c617f;  */

/* WARNING: Removing unreachable block (ram,0x0001094c66d8) */

ulong FUN_1094c6060(long *param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong extraout_x8;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x20;
  long *plVar17;
  long lVar18;
  uint *puVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  long alStack_178 [4];
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long *aplStack_128 [3];
  undefined8 uStack_110;
  char cStack_f9;
  long **applStack_f0 [3];
  byte bStack_d8;
  long lStack_c8;
  undefined1 *puStack_70;
  code *pcStack_68;
  long *plStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar18 = param_1[1] - *param_1;
  uVar16 = (lVar18 >> 3) + 1;
  if (uVar16 >> 0x3d == 0) {
    uVar12 = param_1[2] - *param_1;
    uVar15 = (long)uVar12 >> 2;
    if (uVar15 <= uVar16) {
      uVar15 = uVar16;
    }
    if (0x7ffffffffffffff7 < uVar12) {
      uVar15 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar15 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = param_1;
      FUN_1092cc0a8();
    }
    puStack_50 = (undefined4 *)((long)plVar7 + lVar18);
    plStack_40 = plVar7 + uVar15;
    uVar20 = *param_3;
    puStack_48 = puStack_50 + 2;
    *puStack_50 = (int)*param_2;
    puStack_50[1] = uVar20;
    plStack_58 = plVar7;
    FUN_1092cc028(param_1,&plStack_58);
    uVar16 = param_1[1];
    if (puStack_48 != puStack_50) {
      puStack_48 = (undefined4 *)
                   ((long)puStack_48 +
                   ((long)puStack_50 + (7 - (long)puStack_48) & 0xfffffffffffffff8U));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return uVar16;
  }
  FUN_1092cc094();
  if (puStack_48 != puStack_50) {
    puStack_48 = (undefined4 *)
                 ((long)puStack_48 +
                 (((long)puStack_50 - (long)puStack_48) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  pcStack_68 = FUN_1094c6180;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = *param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  if (lVar18 == 0) {
    FUN_10937e740(&plStack_140,&UNK_10f56ef3a);
    FUN_109388c6c(1,&UNK_10f56ee99,&UNK_10f56ef2c,0x36,&plStack_140);
    if (lStack_130 < 0) {
      __ZdlPv(plStack_140);
    }
    goto LAB_1094c67b4;
  }
  lVar13 = param_2[1];
  if (lVar13 != 0) {
    plVar7 = (long *)(lVar13 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar17 = (long *)param_1[7];
  param_1[6] = lVar18;
  param_1[7] = lVar13;
  plVar7 = param_1;
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 1;
    do {
      lVar13 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar7 = plVar17;
    }
  }
  lVar13 = param_1[6];
  puVar2 = *(uint **)(lVar13 + 0x100);
  puVar19 = *(uint **)(lVar13 + 0xf8);
  do {
    if (puVar19 == puVar2) {
      uVar11 = 1;
      if (*(int *)(lVar13 + 0xe8) != 0) {
        uVar11 = 2;
      }
      goto LAB_1094c6268;
    }
    uVar3 = *puVar19;
    func_0x000109cd2af4();
    puVar19 = puVar19 + 1;
  } while ((uVar3 & (*(uint *)(plVar7 + 8) ^ 0xffffffff)) != 0);
  uVar11 = 1;
  if (*(int *)(lVar13 + 0xe8) != 0) {
    uVar11 = 2;
  }
  if (uVar3 != 0) {
    uVar11 = uVar3;
  }
LAB_1094c6268:
  unaff_x20 = (ulong)uVar11;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    if (param_1[1] == 0) goto LAB_1094c62c4;
  }
  else if (*(char *)((long)param_1 + 0x17) == '\0') {
LAB_1094c62c4:
    FUN_10937e740(&plStack_140,&UNK_10f56ef6f);
    FUN_109388c6c(1,&UNK_10f56ee99,&UNK_10f56ef2c,0x3d,&plStack_140);
    if (lStack_130 < 0) {
      __ZdlPv(plStack_140);
    }
    unaff_x20 = 1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (*(long *)(param_1[6] + 0xf0) + 0x20,param_1);
  uVar8 = 0x80;
  __Znwm(0x80);
  func_0x000109cda3ec();
  FUN_10938cda4(param_1 + 3,uVar8);
  plVar7 = *(long **)param_1[6];
  (**(code **)(*plVar7 + 0x10))(&plStack_140,plVar7,(undefined8 *)param_1[6] + 2);
  plVar7 = plStack_140;
  if (plStack_140 == (long *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)0x20;
    __Znwm();
    *puVar9 = &PTR_FUN_110af7448;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = plStack_140;
  }
  plStack_140 = (long *)0x0;
  plVar17 = (long *)param_1[5];
  param_1[4] = (long)plVar7;
  param_1[5] = (long)puVar9;
  if (plVar17 != (long *)0x0) {
    plVar7 = plVar17 + 1;
    do {
      lVar13 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  plVar7 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  alStack_178[3] = 0;
  plStack_158 = (long *)0x0;
  plStack_150 = (long *)0x0;
  FUN_109378e2c(alStack_178 + 3,*(long *)(*param_2 + 0xa0) + 1);
  plVar7 = plStack_158;
  lVar13 = param_1[6];
  if (plStack_158 < plStack_150) {
    FUN_1093f241c(plStack_158,lVar13 + 0x28,lVar13 + 0x40);
    plVar7 = plVar7 + 0xb;
  }
  else {
    plVar7 = alStack_178 + 3;
    FUN_1093f22d4(plVar7,lVar13 + 0x28,lVar13 + 0x40);
  }
  for (plVar17 = *(long **)(*param_2 + 0x98); plStack_158 = plVar7, plVar17 != (long *)0x0;
      plVar17 = (long *)*plVar17) {
    if (plVar7 < plStack_150) {
      FUN_1094c8300(plVar7,plVar17 + 2,plVar17 + 5);
      plVar7 = plVar7 + 0xb;
    }
    else {
      plVar7 = alStack_178 + 3;
      FUN_1094c81b8(plVar7,plVar17 + 2,plVar17 + 5);
    }
  }
  lVar13 = param_1[6];
  if (*(char *)(lVar13 + 199) < '\0') {
    func_0x000107c3192c(&plStack_140,*(undefined8 *)(lVar13 + 0xb0),*(undefined8 *)(lVar13 + 0xb8));
  }
  else {
    uStack_138 = *(undefined8 *)(lVar13 + 0xb8);
    plStack_140 = *(long **)(lVar13 + 0xb0);
    lStack_130 = *(long *)(lVar13 + 0xc0);
  }
  alStack_178[0] = 0;
  alStack_178[1] = 0;
  alStack_178[2] = 0;
  func_0x000107c2ac94(alStack_178,&plStack_140,aplStack_128,1);
  if (lStack_130 < 0) {
    __ZdlPv(plStack_140);
  }
  lVar13 = param_1[6];
  if (*(char *)(lVar13 + 0xdf) < '\0') {
    if (*(long *)(lVar13 + 0xd0) != 0) goto LAB_1094c6504;
  }
  else if (*(char *)(lVar13 + 0xdf) != '\0') {
LAB_1094c6504:
    func_0x000107c2ac70(alStack_178,lVar13 + 200);
  }
  FUN_109378950(&plStack_140,alStack_178 + 3,alStack_178);
  iVar14 = *(int *)((long)plStack_140 + 0x1c);
  if ((int)plStack_140[3] == 0 && iVar14 == 0) {
    if ((*(int *)((long)plStack_140 + 0x24) != 0) || ((int)plStack_140[4] != 0)) {
      iVar14 = 0;
      goto LAB_1094c6544;
    }
  }
  else {
LAB_1094c6544:
    lVar13 = param_1[6];
    *(int *)(plStack_140 + 3) =
         *(int *)(lVar13 + 0x78) + (int)plStack_140[3] + *(int *)(lVar13 + 0x7c);
    *(int *)((long)plStack_140 + 0x1c) = *(int *)(lVar13 + 0x70) + iVar14 + *(int *)(lVar13 + 0x74);
  }
  func_0x000109d05694(&uStack_188,applStack_f0,param_1);
  (**(code **)(*(long *)param_1[4] + 0x20))(&plStack_1a0);
  lVar13 = param_1[6];
  uVar8 = *(undefined8 *)(lVar13 + 0xf0);
  plVar17 = (long *)0x120;
  __Znwm();
  plStack_148 = plStack_1a0;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&PTR_FUN_110af4c20;
  plStack_1a0 = (long *)0x0;
  func_0x000109d0a228(applStack_f0,&plStack_148);
  plVar7 = plVar17 + 3;
  func_0x000109d03828(plVar7,&plStack_140,1,applStack_f0,uVar8,unaff_x20,
                      *(undefined1 *)(lVar13 + 0xe4));
  (*(code *)(&PTR_FUN_110af4bf0)[bStack_d8])(applStack_f0);
  if (plStack_148 != (long *)0x0) {
    (**(code **)(*plStack_148 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  plStack_198 = plVar7;
  plStack_190 = plVar17;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x000109d03fe8(&plStack_148,uStack_188,&plStack_198,0);
  FUN_10938ab98(applStack_f0,&plStack_148);
  if (plStack_148 != (long *)0x0) {
    plVar7 = plStack_148 + 1;
    do {
      lVar13 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_148 + 0x10))();
    }
  }
  pplVar6 = applStack_f0[0];
  applStack_f0[0] = (long **)0x0;
  FUN_10938cda4(param_1 + 3,pplVar6);
  fVar21 = *(float *)(param_1[6] + 0x80);
  if (0.001 < fVar21) {
    puVar10 = (undefined4 *)0x10;
    __Znwm();
    *puVar10 = 0;
    puVar10[1] = fVar21;
    *(undefined1 *)(puVar10 + 3) = 0;
    lVar13 = param_1[8];
    param_1[8] = (long)puVar10;
    if (lVar13 != 0) {
      __ZdlPv(lVar13);
    }
  }
  pplVar6 = applStack_f0[0];
  applStack_f0[0] = (long **)0x0;
  if (pplVar6 != (long **)0x0) {
    func_0x000109cda590();
    __ZdlPv();
  }
  plVar7 = plStack_190;
  if (plStack_190 != (long *)0x0) {
    plVar17 = plStack_190 + 1;
    do {
      lVar13 = *plVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_190 + 0x10))(plStack_190);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (plStack_180 != (long *)0x0) {
    plVar7 = plStack_180 + 1;
    do {
      lVar13 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_180 + 0x10))(plStack_180);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_180);
    }
  }
  if (cStack_f9 < '\0') {
    __ZdlPv(uStack_110);
  }
  applStack_f0[0] = aplStack_128;
  FUN_109378cec(applStack_f0);
  applStack_f0[0] = &plStack_140;
  FUN_109378cec(applStack_f0);
  plStack_140 = alStack_178;
  func_0x000104c607c8(&plStack_140);
  plStack_140 = alStack_178 + 3;
  FUN_109378cec(&plStack_140);
LAB_1094c67b4:
  uVar16 = (ulong)(lVar18 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return uVar16;
  }
  ___stack_chk_fail();
  plStack_140 = alStack_178 + 3;
  FUN_109378cec(&plStack_140);
  __Unwind_Resume(uVar16);
  pcStack_1a8 = FUN_1094c6988;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1d0 = 0x3f800000;
  uStack_1c0 = unaff_x20;
  uStack_1b8 = uVar16;
  ppuStack_1b0 = &puStack_70;
  FUN_1094c6a18(extraout_x8);
  FUN_1094c8830(&uStack_1f0);
  uStack_1f0 = CONCAT44(uStack_1f0._4_4_,0x2010000);
  uStack_1e0 = 0;
  uVar16 = extraout_x8;
  FUN_109a41858(0x3ff0000000000000,0,extraout_x8,&uStack_1f0,0);
  return uVar16;
}



/* Entry: 1094c6180; end: 1094c6987;  */

/* WARNING: Removing unreachable block (ram,0x0001094c66d8) */

void FUN_1094c6180(long *param_1,long *param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined8 extraout_x8;
  int iVar14;
  ulong unaff_x20;
  long *plVar15;
  uint *puVar16;
  long lVar17;
  float fVar18;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long alStack_118 [4];
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *aplStack_c8 [3];
  undefined8 uStack_b0;
  char cStack_99;
  long **applStack_90 [3];
  byte bStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *param_2;
  if (lVar17 == 0) {
    FUN_10937e740(&plStack_e0,&UNK_10f56ef3a);
    FUN_109388c6c(1,&UNK_10f56ee99,&UNK_10f56ef2c,0x36,&plStack_e0);
    if (lStack_d0 < 0) {
      __ZdlPv(plStack_e0);
    }
    goto LAB_1094c67b4;
  }
  lVar13 = param_2[1];
  if (lVar13 != 0) {
    plVar8 = (long *)(lVar13 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar15 = (long *)param_1[7];
  param_1[6] = lVar17;
  param_1[7] = lVar13;
  plVar8 = param_1;
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 1;
    do {
      lVar13 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar8 = plVar15;
    }
  }
  lVar13 = param_1[6];
  puVar2 = *(uint **)(lVar13 + 0x100);
  puVar16 = *(uint **)(lVar13 + 0xf8);
  do {
    if (puVar16 == puVar2) {
      uVar12 = 1;
      if (*(int *)(lVar13 + 0xe8) != 0) {
        uVar12 = 2;
      }
      goto LAB_1094c6268;
    }
    uVar3 = *puVar16;
    func_0x000109cd2af4();
    puVar16 = puVar16 + 1;
  } while ((uVar3 & (*(uint *)(plVar8 + 8) ^ 0xffffffff)) != 0);
  uVar12 = 1;
  if (*(int *)(lVar13 + 0xe8) != 0) {
    uVar12 = 2;
  }
  if (uVar3 != 0) {
    uVar12 = uVar3;
  }
LAB_1094c6268:
  unaff_x20 = (ulong)uVar12;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    if (param_1[1] == 0) goto LAB_1094c62c4;
  }
  else if (*(char *)((long)param_1 + 0x17) == '\0') {
LAB_1094c62c4:
    FUN_10937e740(&plStack_e0,&UNK_10f56ef6f);
    FUN_109388c6c(1,&UNK_10f56ee99,&UNK_10f56ef2c,0x3d,&plStack_e0);
    if (lStack_d0 < 0) {
      __ZdlPv(plStack_e0);
    }
    unaff_x20 = 1;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (*(long *)(param_1[6] + 0xf0) + 0x20,param_1);
  uVar7 = 0x80;
  __Znwm(0x80);
  func_0x000109cda3ec();
  FUN_10938cda4(param_1 + 3,uVar7);
  plVar8 = *(long **)param_1[6];
  (**(code **)(*plVar8 + 0x10))(&plStack_e0,plVar8,(undefined8 *)param_1[6] + 2);
  plVar8 = plStack_e0;
  if (plStack_e0 == (long *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)0x20;
    __Znwm();
    *puVar9 = &PTR_FUN_110af7448;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = plStack_e0;
  }
  plStack_e0 = (long *)0x0;
  plVar15 = (long *)param_1[5];
  param_1[4] = (long)plVar8;
  param_1[5] = (long)puVar9;
  if (plVar15 != (long *)0x0) {
    plVar8 = plVar15 + 1;
    do {
      lVar13 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  plVar8 = plStack_e0;
  plStack_e0 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  alStack_118[3] = 0;
  plStack_f8 = (long *)0x0;
  plStack_f0 = (long *)0x0;
  FUN_109378e2c(alStack_118 + 3,*(long *)(*param_2 + 0xa0) + 1);
  plVar8 = plStack_f8;
  lVar13 = param_1[6];
  if (plStack_f8 < plStack_f0) {
    FUN_1093f241c(plStack_f8,lVar13 + 0x28,lVar13 + 0x40);
    plVar8 = plVar8 + 0xb;
  }
  else {
    plVar8 = alStack_118 + 3;
    FUN_1093f22d4(plVar8,lVar13 + 0x28,lVar13 + 0x40);
  }
  for (plVar15 = *(long **)(*param_2 + 0x98); plStack_f8 = plVar8, plVar15 != (long *)0x0;
      plVar15 = (long *)*plVar15) {
    if (plVar8 < plStack_f0) {
      FUN_1094c8300(plVar8,plVar15 + 2,plVar15 + 5);
      plVar8 = plVar8 + 0xb;
    }
    else {
      plVar8 = alStack_118 + 3;
      FUN_1094c81b8(plVar8,plVar15 + 2,plVar15 + 5);
    }
  }
  lVar13 = param_1[6];
  if (*(char *)(lVar13 + 199) < '\0') {
    func_0x000107c3192c(&plStack_e0,*(undefined8 *)(lVar13 + 0xb0),*(undefined8 *)(lVar13 + 0xb8));
  }
  else {
    uStack_d8 = *(undefined8 *)(lVar13 + 0xb8);
    plStack_e0 = *(long **)(lVar13 + 0xb0);
    lStack_d0 = *(long *)(lVar13 + 0xc0);
  }
  alStack_118[0] = 0;
  alStack_118[1] = 0;
  alStack_118[2] = 0;
  func_0x000107c2ac94(alStack_118,&plStack_e0,aplStack_c8,1);
  if (lStack_d0 < 0) {
    __ZdlPv(plStack_e0);
  }
  lVar13 = param_1[6];
  if (*(char *)(lVar13 + 0xdf) < '\0') {
    if (*(long *)(lVar13 + 0xd0) != 0) goto LAB_1094c6504;
  }
  else if (*(char *)(lVar13 + 0xdf) != '\0') {
LAB_1094c6504:
    func_0x000107c2ac70(alStack_118,lVar13 + 200);
  }
  FUN_109378950(&plStack_e0,alStack_118 + 3,alStack_118);
  iVar14 = *(int *)((long)plStack_e0 + 0x1c);
  if ((int)plStack_e0[3] == 0 && iVar14 == 0) {
    if ((*(int *)((long)plStack_e0 + 0x24) != 0) || ((int)plStack_e0[4] != 0)) {
      iVar14 = 0;
      goto LAB_1094c6544;
    }
  }
  else {
LAB_1094c6544:
    lVar13 = param_1[6];
    *(int *)(plStack_e0 + 3) =
         *(int *)(lVar13 + 0x78) + (int)plStack_e0[3] + *(int *)(lVar13 + 0x7c);
    *(int *)((long)plStack_e0 + 0x1c) = *(int *)(lVar13 + 0x70) + iVar14 + *(int *)(lVar13 + 0x74);
  }
  func_0x000109d05694(&uStack_128,applStack_90,param_1);
  (**(code **)(*(long *)param_1[4] + 0x20))(&plStack_140);
  lVar13 = param_1[6];
  uVar7 = *(undefined8 *)(lVar13 + 0xf0);
  plVar15 = (long *)0x120;
  __Znwm();
  plStack_e8 = plStack_140;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&PTR_FUN_110af4c20;
  plStack_140 = (long *)0x0;
  func_0x000109d0a228(applStack_90,&plStack_e8);
  plVar8 = plVar15 + 3;
  func_0x000109d03828(plVar8,&plStack_e0,1,applStack_90,uVar7,unaff_x20,
                      *(undefined1 *)(lVar13 + 0xe4));
  (*(code *)(&PTR_FUN_110af4bf0)[bStack_78])(applStack_90);
  if (plStack_e8 != (long *)0x0) {
    (**(code **)(*plStack_e8 + 8))();
  }
  plVar1 = plStack_140;
  plStack_140 = (long *)0x0;
  plStack_138 = plVar8;
  plStack_130 = plVar15;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x000109d03fe8(&plStack_e8,uStack_128,&plStack_138,0);
  FUN_10938ab98(applStack_90,&plStack_e8);
  if (plStack_e8 != (long *)0x0) {
    plVar8 = plStack_e8 + 1;
    do {
      lVar13 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_e8 + 0x10))();
    }
  }
  pplVar6 = applStack_90[0];
  applStack_90[0] = (long **)0x0;
  FUN_10938cda4(param_1 + 3,pplVar6);
  fVar18 = *(float *)(param_1[6] + 0x80);
  if (0.001 < fVar18) {
    puVar10 = (undefined4 *)0x10;
    __Znwm();
    *puVar10 = 0;
    puVar10[1] = fVar18;
    *(undefined1 *)(puVar10 + 3) = 0;
    lVar13 = param_1[8];
    param_1[8] = (long)puVar10;
    if (lVar13 != 0) {
      __ZdlPv(lVar13);
    }
  }
  pplVar6 = applStack_90[0];
  applStack_90[0] = (long **)0x0;
  if (pplVar6 != (long **)0x0) {
    func_0x000109cda590();
    __ZdlPv();
  }
  plVar8 = plStack_130;
  if (plStack_130 != (long *)0x0) {
    plVar15 = plStack_130 + 1;
    do {
      lVar13 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (plStack_120 != (long *)0x0) {
    plVar8 = plStack_120 + 1;
    do {
      lVar13 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_120);
    }
  }
  if (cStack_99 < '\0') {
    __ZdlPv(uStack_b0);
  }
  applStack_90[0] = aplStack_c8;
  FUN_109378cec(applStack_90);
  applStack_90[0] = &plStack_e0;
  FUN_109378cec(applStack_90);
  plStack_e0 = alStack_118;
  func_0x000104c607c8(&plStack_e0);
  plStack_e0 = alStack_118 + 3;
  FUN_109378cec(&plStack_e0);
LAB_1094c67b4:
  uVar11 = (ulong)(lVar17 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  plStack_e0 = alStack_118 + 3;
  FUN_109378cec(&plStack_e0);
  __Unwind_Resume(uVar11);
  pcStack_148 = FUN_1094c6988;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_170 = 0x3f800000;
  uStack_160 = unaff_x20;
  uStack_158 = uVar11;
  puStack_150 = &stack0xfffffffffffffff0;
  FUN_1094c6a18(extraout_x8);
  FUN_1094c8830(&uStack_190);
  uStack_190 = CONCAT44(uStack_190._4_4_,0x2010000);
  uStack_180 = 0;
  FUN_109a41858(0x3ff0000000000000,0,extraout_x8,&uStack_190,0);
  return;
}



/* Entry: 1094c6988; end: 1094c6a17;  */

void FUN_1094c6988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0x3f800000;
  FUN_1094c6a18(param_1,param_2,param_3,&uStack_50);
  FUN_1094c8830(&uStack_50);
  uStack_50 = CONCAT44(uStack_50._4_4_,0x2010000);
  uStack_40 = 0;
  uStack_48 = param_1;
  FUN_109a41858(0x3ff0000000000000,0,param_1,&uStack_50,0);
  return;
}



/* Entry: 1094c6a18; end: 1094c817f;  */

/* WARNING: Removing unreachable block (ram,0x0001094c7790) */
/* WARNING: Removing unreachable block (ram,0x0001094c6f68) */
/* WARNING: Removing unreachable block (ram,0x0001094c6d68) */
/* WARNING: Removing unreachable block (ram,0x0001094c70dc) */
/* WARNING: Removing unreachable block (ram,0x0001094c7464) */
/* WARNING: Removing unreachable block (ram,0x0001094c6bfc) */
/* WARNING: Removing unreachable block (ram,0x0001094c6c00) */
/* WARNING: Removing unreachable block (ram,0x0001094c6c08) */
/* WARNING: Removing unreachable block (ram,0x0001094c6c10) */
/* WARNING: Removing unreachable block (ram,0x0001094c6c14) */
/* WARNING: Removing unreachable block (ram,0x0001094c6c34) */
/* WARNING: Removing unreachable block (ram,0x0001094c6c3c) */
/* WARNING: Removing unreachable block (ram,0x0001094c6c50) */
/* WARNING: Removing unreachable block (ram,0x0001094c6c60) */

void FUN_1094c6a18(uint *param_1,long param_2,uint *param_3,long param_4)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  int *piVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  uint *puVar18;
  int iVar19;
  ulong uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  float *pfVar24;
  float *pfVar25;
  long *plVar26;
  uint *puVar27;
  uint *puVar28;
  long *plVar29;
  long lVar30;
  uint *puVar31;
  uint *puVar32;
  long *unaff_x28;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long lStack_350;
  undefined8 uStack_320;
  int iStack_318;
  undefined4 uStack_314;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined8 *puStack_2b8;
  long *plStack_2b0;
  long lStack_2a8;
  ulong uStack_2a0;
  undefined1 auStack_298 [8];
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  long lStack_278;
  long lStack_248;
  long *plStack_240;
  long *plStack_238;
  long lStack_230;
  float fStack_228;
  undefined1 auStack_220 [80];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  long lStack_180;
  int *piStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  uint uStack_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  long lStack_120;
  undefined4 *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_158 = 0x42ff0000;
  puStack_118 = &uStack_150;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_12c = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  lStack_120 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  lVar30 = *(long *)(param_2 + 0x30);
  puStack_110 = &uStack_108;
  if (((*(int *)(lVar30 + 0x70) < 1 && *(int *)(lVar30 + 0x74) < 1) && *(int *)(lVar30 + 0x78) < 1)
     && (*(int *)(lVar30 + 0x7c) < 1)) {
    if (&uStack_158 != param_3) {
      if (*(long *)(param_3 + 0xe) != 0) {
        piVar13 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
        do {
          cVar2 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar1) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_120 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_148 = 0;
      uStack_144 = 0;
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_158 = *param_3;
      if ((int)param_3[1] < 3) {
        uStack_150 = (undefined4)*(undefined8 *)(param_3 + 2);
        uStack_14c = (undefined4)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
        uStack_108 = **(undefined8 **)(param_3 + 0x12);
        uStack_100 = (*(undefined8 **)(param_3 + 0x12))[1];
        uStack_154 = param_3[1];
      }
      else {
        func_0x000109a84868(&uStack_158,param_3);
      }
      uStack_140 = (undefined4)*(undefined8 *)(param_3 + 6);
      uStack_13c = (undefined4)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20);
      uStack_148 = (undefined4)*(undefined8 *)(param_3 + 4);
      uStack_144 = (undefined4)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
      uStack_130 = (undefined4)*(undefined8 *)(param_3 + 10);
      uStack_12c = (undefined4)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20);
      uStack_138 = (undefined4)*(undefined8 *)(param_3 + 8);
      uStack_134 = (undefined4)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
      lStack_120 = *(long *)(param_3 + 0xe);
      uStack_128 = (undefined4)*(undefined8 *)(param_3 + 0xc);
      uStack_124 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
    }
    bVar1 = true;
  }
  else {
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    uStack_1b8 = 0x1010000;
    iStack_1b0 = (int)param_3;
    iStack_1ac = (int)((ulong)param_3 >> 0x20);
    uStack_2f8 = (long *)CONCAT44(uStack_2f8._4_4_,0x2010000);
    lStack_2e8 = 0;
    uStack_d8._0_4_ = 0;
    uStack_d8._4_4_ = 0;
    uStack_e0._0_4_ = 0;
    uStack_e0._4_4_ = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_2f0 = &uStack_158;
    FUN_109a4a0a4(&uStack_1b8,&uStack_2f8);
    bVar1 = false;
  }
  uStack_1b8 = 0x42ff0000;
  uStack_d8 = &uStack_1b8;
  iStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1b4 = 0;
  iStack_1b0 = 0;
  piStack_178 = &iStack_1b0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_18c = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  lStack_180 = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_e0._0_4_ = 0x2010000;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  puVar18 = &uStack_158;
  puStack_170 = &uStack_168;
  FUN_109a41858(0x3ff0000000000000,0,puVar18,&uStack_e0,*param_3 & 0xff8 | 5);
  if ((0.001 < *(float *)(*(long *)(param_2 + 0x30) + 0x80)) && (*(long *)(param_2 + 0x40) != 0)) {
    if ((uStack_1b8 & 0xff8) != 0x10) {
      func_0x000105688514(&UNK_10f56f051);
      goto LAB_1094c7f24;
    }
    FUN_10937eb64();
    uVar8 = (ulong)uStack_1b4;
    if ((int)uStack_1b4 < 3) {
      uVar8 = 0;
      if ((long)piStack_178[(long)(int)uStack_1b4 + -1] != 0) {
        uVar8 = (ulong)((long)iStack_1ac * (long)iStack_1b0) /
                (ulong)(long)piStack_178[(long)(int)uStack_1b4 + -1];
      }
      if (uVar8 >> 0x1f == 0) {
LAB_1094c6cb0:
        uStack_2f8 = (long *)(uVar8 << 0x20);
        uStack_d8 = &uStack_1b8;
        uStack_e0._0_4_ = 0x10af7408;
        uStack_e0._4_4_ = 1;
        uStack_d0 = (undefined4)param_2;
        uStack_cc = (undefined4)((ulong)param_2 >> 0x20);
        uStack_c8 = 3;
        uStack_c0 = SUB84(puVar18,0);
        uStack_bc = (undefined4)((ulong)puVar18 >> 0x20);
        func_0x000109aa87cc(0xbff0000000000000,&uStack_2f8,&uStack_e0);
        goto LAB_1094c6ce4;
      }
    }
    else {
      uVar23 = 1;
      piVar13 = piStack_178;
      uVar15 = uVar8;
      do {
        uVar23 = uVar23 * (long)*piVar13;
        uVar15 = uVar15 - 1;
        piVar13 = piVar13 + 1;
      } while (uVar15 != 0);
      uVar20 = (ulong)piStack_178[uVar8 - 1];
      uVar15 = 0;
      if (uVar20 != 0) {
        uVar15 = uVar23 / uVar20;
      }
      if (uVar15 >> 0x1f == 0) {
        uVar15 = 1;
        piVar13 = piStack_178;
        do {
          uVar15 = uVar15 * (long)*piVar13;
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 1;
        } while (uVar8 != 0);
        uVar8 = 0;
        if (uVar20 != 0) {
          uVar8 = uVar15 / uVar20;
        }
        goto LAB_1094c6cb0;
      }
    }
    puVar6 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    uStack_e0 = puVar6 + 1;
    uStack_d8._0_4_ = 0x35;
    uStack_d8._4_4_ = 0;
    *(undefined8 *)(puVar6 + 3) = 0x202f2029286c6174;
    *(undefined8 *)(puVar6 + 1) = 0x6f743e2d73696874;
    *(undefined1 *)((long)puVar6 + 0x39) = 0;
    *(undefined8 *)(puVar6 + 7) = 0x2d736968745b657a;
    *(undefined8 *)(puVar6 + 5) = 0x69733e2d73696874;
    *(undefined8 *)(puVar6 + 0xb) = 0x4e49203d3c205d31;
    *(undefined8 *)(puVar6 + 9) = 0x202d20736d69643e;
    *(undefined8 *)((long)puVar6 + 0x31) = 0x58414d5f544e4920;
    FUN_109ac3188(0xffffff29,&uStack_e0,&UNK_10f56f0c1,&UNK_10f56f0ce,0x171);
    goto LAB_1094c7f24;
  }
LAB_1094c6ce4:
  iStack_1c0 = (uStack_1b8 >> 3 & 0x1ff) + 1;
  uStack_1c8 = NEON_rev64(CONCAT44(iStack_1ac,iStack_1b0),4);
  uStack_1bc = 1;
  uStack_1d0 = 0x100000001;
  func_0x000109d0f600(auStack_220,&uStack_1c8,&uStack_1d0,CONCAT44(uStack_1a4,uStack_1a8));
  FUN_1094c8428(&uStack_e0,*(long *)(param_2 + 0x30) + 0x28,auStack_220);
  FUN_1094c8958(&lStack_248,&uStack_e0,1);
  func_0x000105675c90(&uStack_c8);
  plVar26 = *(long **)(param_4 + 0x10);
  if (plVar26 != (long *)0x0) {
    do {
      iStack_318 = (*(uint *)(plVar26 + 5) >> 3 & 0x1ff) + 1;
      uStack_320 = NEON_rev64(plVar26[6],4);
      uStack_314 = 1;
      func_0x000109cdb584(auStack_298,*(undefined8 *)(param_2 + 0x18),&uStack_320,&uStack_1d0);
      plVar14 = (long *)plVar26[0xd];
      uStack_2f0 = (uint *)*plVar14;
      uVar7 = (uint)((ulong)*(uint *)(plVar26 + 5) & 0xff8);
      uStack_2f8 = (long *)CONCAT44(2,uVar7 | 0x42ff0005);
      lStack_2e8 = lStack_278;
      lStack_2e0 = lStack_278;
      lStack_2d0 = 0;
      lStack_2d8 = 0;
      lStack_2c0 = 0;
      uStack_2c8 = 0;
      lStack_2a8 = 0;
      uStack_2a0 = 0;
      puStack_2b8 = &uStack_2f0;
      plStack_2b0 = &lStack_2a8;
      if ((lStack_278 == 0) && ((long)(int)*plVar14 * (long)*(int *)((long)plVar14 + 4) != 0)) {
        puVar6 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar6 = 1;
        uStack_e0 = puVar6 + 1;
        uStack_d8._0_4_ = 0x1c;
        uStack_d8._4_4_ = 0;
        *(undefined1 *)(puVar6 + 8) = 0;
        *(undefined8 *)(puVar6 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar6 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar6 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar6 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&uStack_e0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
        goto LAB_1094c7f24;
      }
      uStack_2a0 = (((ulong)*(uint *)(plVar26 + 5) & 0xff8) >> 1) + 4;
      lStack_2a8 = (long)*(int *)((long)plVar14 + 4) * (long)(int)uStack_2a0;
      uStack_2f8 = (long *)CONCAT44(2,uVar7 + 0x42ff4005);
      lStack_2d8 = lStack_278 + lStack_2a8 * (int)*plVar14;
      uStack_e0._0_4_ = 0x2010000;
      uStack_d0 = 0;
      uStack_cc = 0;
      lStack_2d0 = lStack_2d8;
      uStack_d8 = (uint *)&uStack_2f8;
      FUN_109a41858(0x3ff0000000000000,0,plVar26 + 5,&uStack_e0,uVar7 | 5);
      FUN_1094c86f8(&uStack_e0,plVar26 + 2,auStack_298);
      plVar14 = &lStack_248;
      func_0x000107c31944(plVar14,&uStack_e0);
      plVar29 = plStack_240;
      if (plStack_240 != (long *)0x0) {
        uVar8 = (long)plStack_240 - 1;
        if (((ulong)plStack_240 & uVar8) == 0) {
          unaff_x28 = (long *)(uVar8 & (ulong)plVar14);
        }
        else {
          unaff_x28 = plVar14;
          if (plStack_240 <= plVar14) {
            uVar15 = 0;
            if (plStack_240 != (long *)0x0) {
              uVar15 = (ulong)plVar14 / (ulong)plStack_240;
            }
            unaff_x28 = (long *)((long)plVar14 - uVar15 * (long)plStack_240);
          }
        }
        plVar9 = *(long **)(lStack_248 + (long)unaff_x28 * 8);
        if (plVar9 != (long *)0x0) {
          for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
            plVar10 = (long *)plVar9[1];
            if (plVar10 == plVar14) {
              plVar10 = &lStack_248;
              func_0x000104c4fbc4(plVar10,plVar9 + 2,&uStack_e0);
              if (((ulong)plVar10 & 1) != 0) goto LAB_1094c70cc;
            }
            else {
              if (((ulong)plVar29 & uVar8) == 0) {
                plVar10 = (long *)((ulong)plVar10 & uVar8);
              }
              else if (plVar29 <= plVar10) {
                uVar15 = 0;
                if (plVar29 != (long *)0x0) {
                  uVar15 = (ulong)plVar10 / (ulong)plVar29;
                }
                plVar10 = (long *)((long)plVar10 - uVar15 * (long)plVar29);
              }
              if (plVar10 != unaff_x28) break;
            }
          }
        }
      }
      plVar9 = (long *)0x78;
      __Znwm();
      uStack_368 = &lStack_248;
      uStack_360 = 0;
      *plVar9 = 0;
      plVar9[1] = (long)plVar14;
      plVar9[3] = (long)uStack_d8;
      plVar9[2] = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
      plVar9[4] = CONCAT44(uStack_cc,uStack_d0);
      plVar9[5] = (long)&PTR_DAT_1108a5c28;
      plVar9[7] = CONCAT44(uStack_b4,uStack_b8);
      plVar9[6] = CONCAT44(uStack_bc,uStack_c0);
      plVar9[8] = CONCAT44(uStack_ac,uStack_b0);
      plVar9[10] = uStack_a0;
      plVar9[9] = lStack_a8;
      if (uStack_a0 != 0) {
        plVar10 = (long *)(uStack_a0 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_370 = plVar9;
      FUN_109407928(plVar9 + 0xb,&puStack_98);
      uStack_360 = CONCAT71(uStack_360._1_7_,1);
      if ((plVar29 == (long *)0x0) || (fStack_228 * (float)plVar29 < (float)(lStack_230 + 1))) {
        uVar8 = 1;
        if ((long *)0x2 < plVar29) {
          uVar8 = (ulong)(((ulong)plVar29 & (long)plVar29 - 1U) != 0);
        }
        uVar8 = uVar8 | (long)plVar29 << 1;
        uVar15 = (ulong)((float)(lStack_230 + 1) / fStack_228);
        if (uVar8 <= uVar15) {
          uVar8 = uVar15;
        }
        FUN_10937a3dc(&lStack_248,uVar8);
        plVar29 = plStack_240;
        if (((ulong)plStack_240 & (long)plStack_240 - 1U) == 0) {
          unaff_x28 = (long *)((long)plStack_240 - 1U & (ulong)plVar14);
        }
        else {
          unaff_x28 = plVar14;
          if (plStack_240 <= plVar14) {
            uVar8 = 0;
            if (plStack_240 != (long *)0x0) {
              uVar8 = (ulong)plVar14 / (ulong)plStack_240;
            }
            unaff_x28 = (long *)((long)plVar14 - uVar8 * (long)plStack_240);
          }
        }
      }
      plVar14 = *(long **)(lStack_248 + (long)unaff_x28 * 8);
      if (plVar14 == (long *)0x0) {
        *plStack_370 = (long)plStack_238;
        plStack_238 = plStack_370;
        *(long ***)(lStack_248 + (long)unaff_x28 * 8) = &plStack_238;
        if (*plStack_370 != 0) {
          plVar14 = *(long **)(*plStack_370 + 8);
          if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
            plVar14 = (long *)((ulong)plVar14 & (long)plVar29 - 1U);
          }
          else if (plVar29 <= plVar14) {
            uVar8 = 0;
            if (plVar29 != (long *)0x0) {
              uVar8 = (ulong)plVar14 / (ulong)plVar29;
            }
            plVar14 = (long *)((long)plVar14 - uVar8 * (long)plVar29);
          }
          *(long **)(lStack_248 + (long)plVar14 * 8) = plStack_370;
        }
      }
      else {
        *plStack_370 = *plVar14;
        *plVar14 = (long)plStack_370;
      }
      lStack_230 = lStack_230 + 1;
LAB_1094c70cc:
      func_0x000105675c90(&uStack_c8);
      puVar18 = uStack_d8;
      if (lStack_2c0 != 0) {
        piVar13 = (int *)(lStack_2c0 + 0x14);
        do {
          iVar12 = *piVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 + -1 == 0) {
          func_0x000109a848d4(&uStack_2f8);
          puVar18 = uStack_d8;
        }
      }
      lStack_2c0 = 0;
      lStack_2e0 = 0;
      lStack_2e8 = 0;
      lStack_2d0 = 0;
      lStack_2d8 = 0;
      if (0 < uStack_2f8._4_4_) {
        lVar11 = 0;
        do {
          *(undefined4 *)((long)puStack_2b8 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < uStack_2f8._4_4_);
      }
      uStack_d8 = puVar18;
      if (plStack_2b0 != &lStack_2a8 && plStack_2b0 != (long *)0x0) {
        _free(plStack_2b0[-1]);
      }
      func_0x000105675c90(auStack_298);
      plVar26 = (long *)*plVar26;
    } while (plVar26 != (long *)0x0);
  }
  func_0x000109cdb3f0(&uStack_320,*(undefined8 *)(param_2 + 0x18),&lStack_248,1);
  *param_1 = 0x42ff0000;
  puVar27 = param_1 + 1;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar27[0] = 0;
  puVar27[1] = 0;
  puVar18 = param_1 + 2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar28 = param_1 + 0x14;
  puVar28[0] = 0;
  puVar28[1] = 0;
  *(uint **)(param_1 + 0x10) = puVar18;
  *(uint **)(param_1 + 0x12) = puVar28;
  param_1[0x18] = 0x42ff0000;
  puVar32 = param_1 + 0x19;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  puVar32[0] = 0;
  puVar32[1] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  puVar31 = param_1 + 0x2c;
  puVar31[0] = 0;
  puVar31[1] = 0;
  *(uint **)(param_1 + 0x28) = param_1 + 0x1a;
  *(uint **)(param_1 + 0x2a) = puVar31;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  puVar17 = &uStack_320;
  FUN_10937a848(puVar17,*(long *)(param_2 + 0x30) + 0xb0);
  if (puVar17 == (undefined8 *)0x0) {
    uStack_2f8 = (long *)(*(long *)(param_2 + 0x30) + 0xb0);
    if (*(char *)(*(long *)(param_2 + 0x30) + 199) < '\0') {
      uStack_2f8 = (long *)*uStack_2f8;
    }
    FUN_1093780e0(&uStack_e0,&UNK_10f56efc4,&uStack_2f8);
    FUN_109388c6c(1,&UNK_10f56ee99,&UNK_10f56efb7,0x97,&uStack_e0);
    if (param_1 != param_3) {
      if (*(long *)(param_3 + 0xe) != 0) {
        piVar13 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
        do {
          cVar2 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar1) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(long *)(param_1 + 0xe) != 0) {
        piVar13 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
        do {
          iVar12 = *piVar13;
          cVar2 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar1) {
            *piVar13 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 + -1 == 0) {
          func_0x000109a848d4(param_1);
        }
      }
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      if ((int)param_1[1] < 1) {
        *param_1 = *param_3;
LAB_1094c7b28:
        if (2 < (int)param_3[1]) goto LAB_1094c7b5c;
        param_1[1] = param_3[1];
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
        puVar17 = *(undefined8 **)(param_3 + 0x12);
        puVar22 = *(undefined8 **)(param_1 + 0x12);
        *puVar22 = *puVar17;
        puVar22[1] = puVar17[1];
      }
      else {
        lVar30 = 0;
        lVar11 = *(long *)(param_1 + 0x10);
        do {
          *(undefined4 *)(lVar11 + lVar30 * 4) = 0;
          lVar30 = lVar30 + 1;
        } while (lVar30 < (int)*puVar27);
        *param_1 = *param_3;
        if ((int)*puVar27 < 3) goto LAB_1094c7b28;
LAB_1094c7b5c:
        func_0x000109a84868(param_1);
      }
      uVar34 = *(undefined8 *)(param_3 + 4);
      uVar36 = *(undefined8 *)(param_3 + 10);
      uVar35 = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 6);
      *(undefined8 *)(param_1 + 4) = uVar34;
      *(undefined8 *)(param_1 + 10) = uVar36;
      *(undefined8 *)(param_1 + 8) = uVar35;
      uVar34 = *(undefined8 *)(param_3 + 0xc);
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_3 + 0xe);
      *(undefined8 *)(param_1 + 0xc) = uVar34;
    }
LAB_1094c7c44:
    func_0x000109379fe8(&uStack_320);
    func_0x000109379fe8(&lStack_248);
    func_0x000105675c90(auStack_220);
    puVar18 = uStack_d8;
    if (lStack_180 != 0) {
      piVar13 = (int *)(lStack_180 + 0x14);
      do {
        iVar12 = *piVar13;
        cVar2 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar1) {
          *piVar13 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 + -1 == 0) {
        func_0x000109a848d4(&uStack_1b8);
        puVar18 = uStack_d8;
      }
    }
    lStack_180 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    uStack_190 = 0;
    uStack_18c = 0;
    uStack_198 = 0;
    uStack_194 = 0;
    if (0 < (int)uStack_1b4) {
      lVar30 = 0;
      do {
        piStack_178[lVar30] = 0;
        lVar30 = lVar30 + 1;
      } while (lVar30 < (int)uStack_1b4);
    }
    uStack_d8 = puVar18;
    if (puStack_170 != &uStack_168 && puStack_170 != (undefined8 *)0x0) {
      _free(puStack_170[-1]);
    }
    if (lStack_120 != 0) {
      piVar13 = (int *)(lStack_120 + 0x14);
      do {
        iVar12 = *piVar13;
        cVar2 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar1) {
          *piVar13 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 + -1 == 0) {
        func_0x000109a848d4(&uStack_158);
      }
    }
    lStack_120 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    if (0 < (int)uStack_154) {
      lVar30 = 0;
      do {
        puStack_118[lVar30] = 0;
        lVar30 = lVar30 + 1;
      } while (lVar30 < (int)uStack_154);
    }
    if (puStack_110 != &uStack_108 && puStack_110 != (undefined8 *)0x0) {
      _free(puStack_110[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uStack_e0 = (undefined4 *)(*(long *)(param_2 + 0x30) + 0xb0);
    puVar17 = &uStack_320;
    FUN_10937a098(puVar17,uStack_e0,&UNK_10dd5b8f9,&uStack_e0,&uStack_2f8);
    func_0x000109d0e828(auStack_298,puVar17 + 5,&UNK_10dfccfd0,0);
    uVar4 = iStack_288 * 8 - 3;
    uVar7 = uVar4 & 0xfff;
    uStack_2f8 = (long *)CONCAT44(2,uVar7 | 0x42ff0000);
    puStack_2b8 = &uStack_2f0;
    uStack_2f0 = (uint *)CONCAT44(iStack_290,iStack_28c);
    lStack_2e8 = lStack_278;
    lStack_2e0 = lStack_278;
    lStack_2d0 = 0;
    lStack_2d8 = 0;
    lStack_2c0 = 0;
    uStack_2c8 = 0;
    lStack_2a8 = 0;
    uStack_2a0 = 0;
    plStack_2b0 = &lStack_2a8;
    if (((long)iStack_290 * (long)iStack_28c == 0) || (lStack_278 != 0)) {
      uVar4 = (uVar4 >> 1 & 0x7fc) + 4;
      uStack_2a0 = (ulong)uVar4;
      uStack_2f8 = (long *)CONCAT44(2,uVar7 | 0x42ff4000);
      lStack_2a8 = (long)(int)uVar4 * (long)iStack_290;
      lStack_2d8 = lStack_278 + lStack_2a8 * iStack_28c;
      uStack_e0._0_4_ = 0x42ff0000;
      uVar8 = (ulong)&uStack_e0 | 8;
      uStack_d8._4_4_ = 0;
      uStack_d0 = 0;
      uStack_e0._4_4_ = 0;
      uStack_d8._0_4_ = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_b4 = 0;
      uStack_bc = 0;
      uStack_b8 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      plStack_370 = (long *)CONCAT44(plStack_370._4_4_,0x2010000);
      uStack_360 = 0;
      uStack_368 = &uStack_e0;
      lStack_2d0 = lStack_2d8;
      uStack_a0 = uVar8;
      puStack_98 = &uStack_90;
      FUN_109a479a0(&uStack_2f8,&plStack_370);
      if (*(long *)(param_1 + 0xe) != 0) {
        piVar13 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
        do {
          iVar12 = *piVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 + -1 == 0) {
          func_0x000109a848d4(param_1);
        }
      }
      if (0 < (int)param_1[1]) {
        lVar11 = 0;
        lVar16 = *(long *)(param_1 + 0x10);
        do {
          *(undefined4 *)(lVar16 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < (int)*puVar27);
      }
      *(ulong *)(param_1 + 2) = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
      *(ulong *)param_1 = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
      *(ulong *)(param_1 + 6) = CONCAT44(uStack_c4,uStack_c8);
      *(ulong *)(param_1 + 4) = CONCAT44(uStack_cc,uStack_d0);
      *(ulong *)(param_1 + 10) = CONCAT44(uStack_b4,uStack_b8);
      *(ulong *)(param_1 + 8) = CONCAT44(uStack_bc,uStack_c0);
      *(long *)(param_1 + 0xe) = lStack_a8;
      *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_ac,uStack_b0);
      puVar21 = *(uint **)(param_1 + 0x12);
      if (puVar21 != puVar28) {
        if (puVar21 != (uint *)0x0) {
          _free(*(undefined8 *)(puVar21 + -2));
        }
        *(uint **)(param_1 + 0x10) = puVar18;
        *(uint **)(param_1 + 0x12) = puVar28;
        puVar21 = puVar28;
      }
      puVar17 = (undefined8 *)((ulong)&uStack_e0 | 4);
      if (uStack_e0._4_4_ < 3) {
        *(undefined8 *)puVar21 = *puStack_98;
        *(undefined8 *)(puVar21 + 2) = puStack_98[1];
        uStack_e0._0_4_ = 0x42ff0000;
        puVar17[1] = 0;
        *puVar17 = 0;
        puVar17[3] = 0;
        puVar17[2] = 0;
        puVar17[5] = 0;
        puVar17[4] = 0;
        *(undefined8 *)((long)puVar17 + 0x34) = 0;
        *(undefined8 *)((long)puVar17 + 0x2c) = 0;
        if (puStack_98 != &uStack_90) {
          _free(puStack_98[-1]);
        }
      }
      else {
        *(ulong *)(param_1 + 0x10) = uStack_a0;
        *(undefined8 **)(param_1 + 0x12) = puStack_98;
        uStack_e0._0_4_ = 0x42ff0000;
        puVar17[1] = 0;
        *puVar17 = 0;
        puVar17[3] = 0;
        puVar17[2] = 0;
        puVar17[5] = 0;
        puVar17[4] = 0;
        *(undefined8 *)((long)puVar17 + 0x34) = 0;
        *(undefined8 *)((long)puVar17 + 0x2c) = 0;
        uStack_a0 = uVar8;
        puStack_98 = &uStack_90;
      }
      if (lStack_2c0 != 0) {
        piVar13 = (int *)(lStack_2c0 + 0x14);
        do {
          iVar12 = *piVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 + -1 == 0) {
          func_0x000109a848d4(&uStack_2f8);
        }
      }
      lStack_2c0 = 0;
      lStack_2e0 = 0;
      lStack_2e8 = 0;
      lStack_2d0 = 0;
      lStack_2d8 = 0;
      if (0 < uStack_2f8._4_4_) {
        lVar11 = 0;
        do {
          *(undefined4 *)((long)puStack_2b8 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < uStack_2f8._4_4_);
      }
      if (plStack_2b0 != &lStack_2a8 && plStack_2b0 != (long *)0x0) {
        _free(plStack_2b0[-1]);
      }
      if (!bVar1) {
        uStack_2f8 = (long *)CONCAT44(*(undefined4 *)(lVar30 + 0x70),*(undefined4 *)(lVar30 + 0x78))
        ;
        uStack_2f0 = (uint *)NEON_rev64(**(undefined8 **)(param_3 + 0x10),4);
        FUN_109a852c8(&uStack_e0,param_1,&uStack_2f8);
        if (*(long *)(param_1 + 0xe) != 0) {
          piVar13 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
          do {
            iVar12 = *piVar13;
            cVar2 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar1) {
              *piVar13 = iVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar12 + -1 == 0) {
            func_0x000109a848d4(param_1);
          }
        }
        if (0 < (int)*puVar27) {
          lVar30 = 0;
          lVar11 = *(long *)(param_1 + 0x10);
          do {
            *(undefined4 *)(lVar11 + lVar30 * 4) = 0;
            lVar30 = lVar30 + 1;
          } while (lVar30 < (int)*puVar27);
        }
        *(ulong *)(param_1 + 2) = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
        *(ulong *)param_1 = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
        *(ulong *)(param_1 + 6) = CONCAT44(uStack_c4,uStack_c8);
        *(ulong *)(param_1 + 4) = CONCAT44(uStack_cc,uStack_d0);
        *(ulong *)(param_1 + 10) = CONCAT44(uStack_b4,uStack_b8);
        *(ulong *)(param_1 + 8) = CONCAT44(uStack_bc,uStack_c0);
        *(long *)(param_1 + 0xe) = lStack_a8;
        *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_ac,uStack_b0);
        puVar21 = *(uint **)(param_1 + 0x12);
        if (puVar21 != puVar28) {
          if (puVar21 != (uint *)0x0) {
            _free(*(undefined8 *)(puVar21 + -2));
          }
          *(uint **)(param_1 + 0x10) = puVar18;
          *(uint **)(param_1 + 0x12) = puVar28;
          puVar21 = puVar28;
        }
        if (uStack_e0._4_4_ < 3) {
          puVar17 = (undefined8 *)((ulong)&uStack_e0 | 4);
          *(undefined8 *)puVar21 = *puStack_98;
          *(undefined8 *)(puVar21 + 2) = puStack_98[1];
          uStack_e0._0_4_ = 0x42ff0000;
          puVar17[1] = 0;
          *puVar17 = 0;
          puVar17[3] = 0;
          puVar17[2] = 0;
          puVar17[5] = 0;
          puVar17[4] = 0;
          *(undefined8 *)((long)puVar17 + 0x34) = 0;
          *(undefined8 *)((long)puVar17 + 0x2c) = 0;
          if (puStack_98 != &uStack_90) {
            _free(puStack_98[-1]);
          }
        }
        else {
          *(ulong *)(param_1 + 0x10) = uStack_a0;
          *(undefined8 **)(param_1 + 0x12) = puStack_98;
        }
      }
      lVar30 = *(long *)(param_2 + 0x30);
      plVar26 = *(long **)(lVar30 + 0xf0);
      if (*(char *)((long)plVar26 + 0x1d) == '\x01') {
        uStack_e0._0_4_ = 0x2010000;
        uStack_d8._0_4_ = SUB84(param_1,0);
        uStack_d8._4_4_ = (undefined4)((ulong)param_1 >> 0x20);
        uStack_d0 = 0;
        uStack_cc = 0;
        FUN_109a41858(1.0 / (double)*(float *)(plVar26 + 3),0,param_1,&uStack_e0,0xffffffff);
        plVar26 = *(long **)(lVar30 + 0xf0);
      }
      if (*(char *)((long)plVar26 + 0x1c) == '\x01') {
        lVar11 = *plVar26;
        uVar8 = plVar26[1] - lVar11;
        lVar30 = ((ulong)(*param_1 >> 3) & 0x1ff) + 1;
        iVar12 = (int)lVar30;
        iVar19 = (int)(uVar8 >> 2);
        if (iVar19 <= iVar12) {
          uVar7 = param_1[2];
          uVar4 = param_1[3];
          if (0 < (int)(uVar4 * uVar7)) {
            iVar12 = 0;
            pfVar24 = *(float **)(param_1 + 4);
            do {
              lVar16 = 0;
              pfVar25 = pfVar24;
              do {
                fVar33 = 0.0;
                if (lVar16 < (long)(uVar8 * 0x40000000) >> 0x20) {
                  fVar33 = *(float *)(lVar11 + lVar16 * 4);
                }
                pfVar24 = pfVar25 + 1;
                *pfVar25 = fVar33 + *pfVar25;
                lVar16 = lVar16 + 1;
                pfVar25 = pfVar24;
              } while (lVar30 != lVar16);
              iVar12 = iVar12 + 1;
            } while (iVar12 != uVar4 * uVar7);
          }
          goto LAB_1094c7880;
        }
        uStack_2f8 = (long *)CONCAT44(uStack_2f8._4_4_,iVar12);
        plStack_370 = (long *)CONCAT44(plStack_370._4_4_,iVar19);
        FUN_1093ca1c4(&uStack_e0,&UNK_10f56eff5,&uStack_2f8,&plStack_370);
        FUN_109388c6c(1,&UNK_10f56ee99,&UNK_10f56efb7,0xae,&uStack_e0);
        if (param_1 != param_3) {
          if (*(long *)(param_3 + 0xe) != 0) {
            piVar13 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
            do {
              cVar2 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar1) {
                *piVar13 = *piVar13 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (*(long *)(param_1 + 0xe) != 0) {
            piVar13 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
            do {
              iVar12 = *piVar13;
              cVar2 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar1) {
                *piVar13 = iVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar12 + -1 == 0) {
              func_0x000109a848d4(param_1);
            }
          }
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[8] = 0;
          param_1[9] = 0;
          if ((int)param_1[1] < 1) {
            *param_1 = *param_3;
LAB_1094c7be8:
            if (2 < (int)param_3[1]) goto LAB_1094c7c1c;
            param_1[1] = param_3[1];
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
            puVar17 = *(undefined8 **)(param_3 + 0x12);
            puVar22 = *(undefined8 **)(param_1 + 0x12);
            *puVar22 = *puVar17;
            puVar22[1] = puVar17[1];
          }
          else {
            lVar30 = 0;
            lVar11 = *(long *)(param_1 + 0x10);
            do {
              *(undefined4 *)(lVar11 + lVar30 * 4) = 0;
              lVar30 = lVar30 + 1;
            } while (lVar30 < (int)*puVar27);
            *param_1 = *param_3;
            if ((int)*puVar27 < 3) goto LAB_1094c7be8;
LAB_1094c7c1c:
            func_0x000109a84868(param_1,param_3);
          }
          uVar34 = *(undefined8 *)(param_3 + 4);
          uVar36 = *(undefined8 *)(param_3 + 10);
          uVar35 = *(undefined8 *)(param_3 + 8);
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 6);
          *(undefined8 *)(param_1 + 4) = uVar34;
          *(undefined8 *)(param_1 + 10) = uVar36;
          *(undefined8 *)(param_1 + 8) = uVar35;
          uVar34 = *(undefined8 *)(param_3 + 0xc);
          *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_3 + 0xe);
          *(undefined8 *)(param_1 + 0xc) = uVar34;
        }
      }
      else {
LAB_1094c7880:
        puVar17 = &uStack_320;
        FUN_10937a848(puVar17,*(long *)(param_2 + 0x30) + 200);
        if (puVar17 != (undefined8 *)0x0) {
          uStack_e0 = (undefined4 *)(*(long *)(param_2 + 0x30) + 200);
          puVar17 = &uStack_320;
          FUN_10937a098(puVar17,uStack_e0,&UNK_10dd5b8f9,&uStack_e0,&uStack_2f8);
          func_0x000109d0e828(&plStack_370,puVar17 + 5,&UNK_10dfccfd0,0);
          uVar4 = (int)uStack_360 * 8 - 3;
          uVar7 = uVar4 & 0xfff;
          uStack_2f8 = (long *)CONCAT44(2,uVar7 | 0x42ff0000);
          puStack_2b8 = &uStack_2f0;
          uStack_2f0 = (uint *)CONCAT44((int)uStack_368,uStack_368._4_4_);
          lStack_2e8 = lStack_350;
          lStack_2e0 = lStack_350;
          lStack_2d0 = 0;
          lStack_2d8 = 0;
          lStack_2c0 = 0;
          uStack_2c8 = 0;
          lStack_2a8 = 0;
          uStack_2a0 = 0;
          plStack_2b0 = &lStack_2a8;
          if (((long)(int)uStack_368 * (long)uStack_368._4_4_ != 0) && (lStack_350 == 0)) {
            puVar6 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar6 = 1;
            puStack_f8 = puVar6 + 1;
            puStack_f0 = (undefined8 *)0x1c;
            *(undefined1 *)(puVar6 + 8) = 0;
            *(undefined8 *)(puVar6 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar6 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar6 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar6 + 4) = 0x61746164207c7c20;
            FUN_109ac3188(0xffffff29,&puStack_f8,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
            goto LAB_1094c7f24;
          }
          uVar4 = (uVar4 >> 1 & 0x7fc) + 4;
          uStack_2a0 = (ulong)uVar4;
          uStack_2f8 = (long *)CONCAT44(2,uVar7 | 0x42ff4000);
          lStack_2a8 = (long)(int)uVar4 * (long)(int)uStack_368;
          lStack_2d8 = lStack_350 + lStack_2a8 * uStack_368._4_4_;
          uStack_e0._0_4_ = 0x42ff0000;
          uVar8 = (ulong)&uStack_e0 | 8;
          uStack_d8._4_4_ = 0;
          uStack_d0 = 0;
          uStack_e0._4_4_ = 0;
          uStack_d8._0_4_ = 0;
          uStack_c4 = 0;
          uStack_c0 = 0;
          uStack_cc = 0;
          uStack_c8 = 0;
          uStack_b4 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          lStack_a8 = 0;
          uStack_b0 = 0;
          uStack_ac = 0;
          uStack_90 = 0;
          uStack_88 = 0;
          puStack_f8 = (undefined4 *)CONCAT44(puStack_f8._4_4_,0x2010000);
          uStack_e8 = 0;
          lStack_2d0 = lStack_2d8;
          puStack_f0 = &uStack_e0;
          uStack_a0 = uVar8;
          puStack_98 = &uStack_90;
          FUN_109a479a0(&uStack_2f8,&puStack_f8);
          if (*(long *)(param_1 + 0x26) != 0) {
            piVar13 = (int *)(*(long *)(param_1 + 0x26) + 0x14);
            do {
              iVar12 = *piVar13;
              cVar2 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar1) {
                *piVar13 = iVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar12 + -1 == 0) {
              func_0x000109a848d4(param_1 + 0x18);
            }
          }
          if (0 < (int)param_1[0x19]) {
            lVar30 = 0;
            lVar11 = *(long *)(param_1 + 0x28);
            do {
              *(undefined4 *)(lVar11 + lVar30 * 4) = 0;
              lVar30 = lVar30 + 1;
            } while (lVar30 < (int)*puVar32);
          }
          *(ulong *)(param_1 + 0x1a) = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
          *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
          *(ulong *)(param_1 + 0x1e) = CONCAT44(uStack_c4,uStack_c8);
          *(ulong *)(param_1 + 0x1c) = CONCAT44(uStack_cc,uStack_d0);
          *(ulong *)(param_1 + 0x22) = CONCAT44(uStack_b4,uStack_b8);
          *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_bc,uStack_c0);
          *(long *)(param_1 + 0x26) = lStack_a8;
          *(ulong *)(param_1 + 0x24) = CONCAT44(uStack_ac,uStack_b0);
          puVar18 = *(uint **)(param_1 + 0x2a);
          if (puVar18 != puVar31) {
            if (puVar18 != (uint *)0x0) {
              _free(*(undefined8 *)(puVar18 + -2));
            }
            *(uint **)(param_1 + 0x28) = param_1 + 0x1a;
            *(uint **)(param_1 + 0x2a) = puVar31;
            puVar18 = puVar31;
          }
          puVar17 = (undefined8 *)((ulong)&uStack_e0 | 4);
          if (uStack_e0._4_4_ < 3) {
            *(undefined8 *)puVar18 = *puStack_98;
            *(undefined8 *)(puVar18 + 2) = puStack_98[1];
            uStack_e0._0_4_ = 0x42ff0000;
            puVar17[1] = 0;
            *puVar17 = 0;
            puVar17[3] = 0;
            puVar17[2] = 0;
            puVar17[5] = 0;
            puVar17[4] = 0;
            *(undefined8 *)((long)puVar17 + 0x34) = 0;
            *(undefined8 *)((long)puVar17 + 0x2c) = 0;
            if (puStack_98 != &uStack_90) {
              _free(puStack_98[-1]);
            }
          }
          else {
            *(ulong *)(param_1 + 0x28) = uStack_a0;
            *(undefined8 **)(param_1 + 0x2a) = puStack_98;
            uStack_e0._0_4_ = 0x42ff0000;
            puVar17[1] = 0;
            *puVar17 = 0;
            puVar17[3] = 0;
            puVar17[2] = 0;
            puVar17[5] = 0;
            puVar17[4] = 0;
            *(undefined8 *)((long)puVar17 + 0x34) = 0;
            *(undefined8 *)((long)puVar17 + 0x2c) = 0;
            uStack_a0 = uVar8;
            puStack_98 = &uStack_90;
          }
          if (lStack_2c0 != 0) {
            piVar13 = (int *)(lStack_2c0 + 0x14);
            do {
              iVar12 = *piVar13;
              cVar2 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar1) {
                *piVar13 = iVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar12 + -1 == 0) {
              func_0x000109a848d4(&uStack_2f8);
            }
          }
          lStack_2c0 = 0;
          lStack_2e0 = 0;
          lStack_2e8 = 0;
          lStack_2d0 = 0;
          lStack_2d8 = 0;
          if (0 < uStack_2f8._4_4_) {
            lVar30 = 0;
            do {
              *(undefined4 *)((long)puStack_2b8 + lVar30 * 4) = 0;
              lVar30 = lVar30 + 1;
            } while (lVar30 < uStack_2f8._4_4_);
          }
          if (plStack_2b0 != &lStack_2a8 && plStack_2b0 != (long *)0x0) {
            _free(plStack_2b0[-1]);
          }
          func_0x000105675c90(&plStack_370);
        }
      }
      func_0x000105675c90(auStack_298);
      goto LAB_1094c7c44;
    }
  }
  puVar6 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar6 = 1;
  plStack_370 = (long *)(puVar6 + 1);
  uStack_368 = (long *)0x1c;
  *(undefined1 *)(puVar6 + 8) = 0;
  *(undefined8 *)(puVar6 + 3) = 0x207c7c2030203d3d;
  *(undefined8 *)(puVar6 + 1) = 0x2029286c61746f74;
  *(undefined8 *)(puVar6 + 6) = 0x4c4c554e203d2120;
  *(undefined8 *)(puVar6 + 4) = 0x61746164207c7c20;
  FUN_109ac3188(0xffffff29,&plStack_370,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
LAB_1094c7f24:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1094c7f28);
  (*pcVar5)();
}



/* Entry: 1094c8180; end: 1094c81b7;  */

undefined8 * FUN_1094c8180(undefined8 *param_1)

{
  func_0x000105675c90(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1094c81b8; end: 1094c82ff;  */

long * FUN_1094c81b8(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar3 < 0x2e8ba2e8ba2e8bb) {
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar2 * 0x5d1745d1745d1746;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x1745d1745d1745c < (ulong)(lVar2 * 0x2e8ba2e8ba2e8ba3)) {
      uVar4 = 0x2e8ba2e8ba2e8ba;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_109378aac();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_40 = plVar1 + uVar4 * 0xb;
    plStack_58 = plVar1;
    plStack_50 = (long *)lVar5;
    plStack_48 = (long *)lVar5;
    FUN_1094c8300(lVar5,param_2,param_3);
    plStack_48 = (long *)(lVar5 + 0x58);
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    FUN_109378f10(param_1,*param_1,param_1[1],lVar5);
    plVar1 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar5;
    func_0x0001056754bc(&plStack_58);
    return plVar1;
  }
  FUN_109378a98();
  func_0x0001056754bc(&plStack_58);
  __Unwind_Resume();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    lVar2 = param_2[1];
    lVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = lVar2;
    *param_1 = lVar5;
  }
  lVar5 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = lVar5;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



/* Entry: 1094c8300; end: 1094c836b;  */

undefined8 * FUN_1094c8300(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
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
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



/* Entry: 1094c836c; end: 1094c8427;  */

undefined8 *
FUN_1094c836c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    param_4 = puStack_38 + 3;
  }
  uStack_48 = 1;
  FUN_1093798f4(&uStack_60);
  return param_4;
}



/* Entry: 1094c8428; end: 1094c84f3;  */

undefined8 * FUN_1094c8428(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  param_1[3] = &PTR_DAT_1108a5c28;
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 8);
  param_1[6] = *(undefined8 *)(param_3 + 0x18);
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  lVar4 = *(long *)(param_3 + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  param_1[8] = *(undefined8 *)(param_3 + 0x28);
  param_1[7] = uVar5;
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
  FUN_109407928(param_1 + 9,param_3 + 0x30);
  return param_1;
}



/* Entry: 1094c84f4; end: 1094c86f7;  */

void FUN_1094c84f4(uint *param_1,uint *param_2,uint param_3,long param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3 & 0xfff | 0x42ff0000;
  *param_1 = uVar1;
  param_1[1] = 2;
  uVar2 = param_2[1];
  param_1[2] = uVar2;
  uVar10 = *param_2;
  param_1[3] = uVar10;
  *(long *)(param_1 + 4) = param_4;
  *(long *)(param_1 + 6) = param_4;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar8 = param_1 + 0x14;
  puVar8[0] = 0;
  puVar8[1] = 0;
  *(uint **)(param_1 + 0x10) = param_1 + 2;
  *(uint **)(param_1 + 0x12) = puVar8;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if ((param_4 == 0) && ((long)(int)uVar10 * (long)(int)uVar2 != 0)) {
    puVar6 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_30 = puVar6 + 1;
    uStack_28 = 0x1c;
    *(undefined1 *)(puVar6 + 8) = 0;
    *(undefined8 *)(puVar6 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar6 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar6 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar6 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&puStack_30,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
LAB_1094c86a0:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1094c86a4);
    (*pcVar5)();
  }
  uVar3 = (param_3 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((param_3 & 7) << 1) & 3);
  uVar7 = (long)(int)uVar10 * (long)(int)uVar3;
  uVar9 = uVar7;
  if (param_5 == 0) {
    uVar10 = 0x4000;
  }
  else {
    uVar10 = 0x88442211 >> ((param_3 & 7) << 2);
    uVar11 = (ulong)uVar10 & 0xf;
    if (uVar2 != 1) {
      uVar9 = param_5;
    }
    uVar4 = 0;
    if ((uVar10 & 0xf) != 0) {
      uVar4 = uVar9 / uVar11;
    }
    if (uVar9 != uVar4 * uVar11) {
      puVar6 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar6 = 1;
      puStack_30 = puVar6 + 1;
      uStack_28 = 0x1f;
      *(undefined1 *)((long)puVar6 + 0x23) = 0;
      *(undefined8 *)(puVar6 + 3) = 0x6d20612065622074;
      *(undefined8 *)(puVar6 + 1) = 0x73756d2070657453;
      *(undefined8 *)((long)puVar6 + 0x1b) = 0x317a736520666f20;
      *(undefined8 *)((long)puVar6 + 0x13) = 0x656c7069746c756d;
      FUN_109ac3188(0xfffffff3,&puStack_30,&UNK_10f2e8162,&UNK_10f566d1b,0x1cb);
      goto LAB_1094c86a0;
    }
    uVar10 = 0x4000;
    if (uVar9 != uVar7) {
      uVar10 = 0;
    }
  }
  *param_1 = uVar10 | uVar1;
  *(ulong *)(param_1 + 0x14) = uVar9;
  *(ulong *)(param_1 + 0x16) = (ulong)uVar3;
  param_4 = param_4 + uVar9 * (long)(int)uVar2;
  *(ulong *)(param_1 + 8) = (param_4 - uVar9) + uVar7;
  *(long *)(param_1 + 10) = param_4;
  return;
}



/* Entry: 1094c86f8; end: 1094c87c3;  */

undefined8 * FUN_1094c86f8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  param_1[3] = &PTR_DAT_1108a5c28;
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 8);
  param_1[6] = *(undefined8 *)(param_3 + 0x18);
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  lVar4 = *(long *)(param_3 + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  param_1[8] = *(undefined8 *)(param_3 + 0x28);
  param_1[7] = uVar5;
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
  FUN_109407928(param_1 + 9,param_3 + 0x30);
  return param_1;
}



/* Entry: 1094c87c4; end: 1094c87c7;  */

void FUN_1094c87c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094c87c8; end: 1094c87db;  */

void FUN_1094c87c8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094c87dc; end: 1094c87f3;  */

void FUN_1094c87dc(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001094c87ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1094c87f4; end: 1094c882b;  */

undefined8 FUN_1094c87f4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af7488);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1094c882c; end: 1094c882f;  */

void FUN_1094c882c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094c8830; end: 1094c88a3;  */

long * FUN_1094c8830(long *param_1)

{
  long lVar1;
  
  func_0x0001094c8868(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094c88a4; end: 1094c8957;  */

void FUN_1094c88a4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (param_1[10] != 0) {
    piVar1 = (int *)(param_1[10] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 3);
    }
  }
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  if (0 < *(int *)((long)param_1 + 0x1c)) {
    lVar5 = 0;
    lVar7 = param_1[0xb];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1c));
  }
  puVar6 = (undefined8 *)param_1[0xc];
  if (puVar6 != param_1 + 0xd && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 1094c8958; end: 1094c89cf;  */

undefined8 * FUN_1094c8958(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    param_3 = param_3 * 0x68;
    do {
      FUN_1094c89d0(param_1,param_2,param_2);
      param_2 = param_2 + 0x68;
      param_3 = param_3 + -0x68;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 1094c89d0; end: 1094c8c03;  */

undefined1  [16] FUN_1094c89d0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_68 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_1094c8bc4;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x25) break;
        }
      }
    }
  }
  FUN_1094c8c04(aplStack_68,param_1,plVar6,param_3);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_10937a3dc(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar6;
    if (*aplStack_68[0] != 0) {
      plVar6 = *(long **)(*aplStack_68[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_68[0];
LAB_1094c8bc4:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 1094c8c04; end: 1094c8c6f;  */

void FUN_1094c8c04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x78;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_1094c8c70(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1094c8c70; end: 1094c8d37;  */

undefined8 * FUN_1094c8c70(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  param_1[3] = &PTR_DAT_1108a5c28;
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  lVar4 = param_2[8];
  uVar5 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar5;
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
  FUN_109407928(param_1 + 9,param_2 + 9);
  return param_1;
}



/* Entry: 1094c8d38; end: 1094c8d3f;  */

void FUN_1094c8d38(void)

{
  return;
}



/* Entry: 1094c8d40; end: 1094c8fcb;  */

void FUN_1094c8d40(float param_1,long param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  int iVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  int aiStack_78 [6];
  
  iVar15 = *(int *)(*(long *)(param_2 + 8) + 4);
  lVar16 = (long)iVar15;
  iVar4 = *(int *)(*(long *)(*(long *)(param_2 + 8) + 0x40) + lVar16 * 4 + -4);
  if (iVar15 < 3) {
    iVar15 = *param_3;
    iVar9 = param_3[1];
    if (iVar15 < iVar9) {
      do {
        aiStack_78[0] = iVar15;
        aiStack_78[1] = 0;
        lVar16 = *(long *)(param_2 + 8);
        uVar11 = (ulong)*(uint *)(lVar16 + 4);
        uVar17 = *(ulong *)(lVar16 + 0x10);
        if (0 < (int)*(uint *)(lVar16 + 4)) {
          plVar13 = *(long **)(lVar16 + 0x48);
          piVar10 = aiStack_78;
          do {
            uVar17 = uVar17 + *plVar13 * (long)*piVar10;
            uVar11 = uVar11 - 1;
            plVar13 = plVar13 + 1;
            piVar10 = piVar10 + 1;
          } while (uVar11 != 0);
        }
        if (0 < iVar4) {
          uVar18 = uVar17 + (long)iVar4 * 0xc;
          uVar11 = (ulong)*(uint *)(param_2 + 0x18);
          do {
            if (0 < (int)uVar11) {
              lVar16 = 0;
              lVar20 = *(long *)(param_2 + 0x10);
              do {
                uVar8 = *(undefined8 *)(lVar20 + 0x40);
                FUN_1094c8fcc(uVar8,*(undefined8 *)(param_2 + 0x20),uVar8);
                param_1 = param_1 + *(float *)(uVar17 + lVar16 * 4);
                *(float *)(uVar17 + lVar16 * 4) = param_1;
                lVar16 = lVar16 + 1;
                uVar11 = (ulong)*(int *)(param_2 + 0x18);
              } while (lVar16 < (long)uVar11);
            }
            uVar17 = uVar17 + 0xc;
          } while (uVar17 < uVar18);
          iVar9 = param_3[1];
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar9);
    }
  }
  else {
    FUN_10925b8c4(aiStack_78,(long)iVar4);
    uVar17 = (ulong)(iVar15 - 2);
    *(int *)(CONCAT44(aiStack_78[1],aiStack_78[0]) + uVar17 * 4) = *param_3 + -1;
    iVar15 = *param_3;
    if (iVar15 < param_3[1]) {
      do {
        piVar7 = (int *)CONCAT44(aiStack_78[1],aiStack_78[0]);
        iVar9 = piVar7[uVar17];
        piVar7[uVar17] = iVar9 + 1;
        lVar12 = *(long *)(param_2 + 8);
        piVar10 = piVar7 + (uVar17 - 1);
        piVar14 = (int *)(*(long *)(lVar12 + 0x40) + uVar17 * 4);
        lVar20 = uVar17 + 1;
        iVar9 = iVar9 + 1;
        do {
          iVar2 = *piVar14;
          if (iVar9 < iVar2) break;
          iVar5 = 0;
          if (iVar2 != 0) {
            iVar5 = iVar9 / iVar2;
          }
          iVar2 = *piVar10;
          *piVar10 = iVar2 + iVar5;
          iVar3 = *piVar14;
          iVar6 = 0;
          if (iVar3 != 0) {
            iVar6 = iVar9 / iVar3;
          }
          piVar10[1] = iVar9 - iVar6 * iVar3;
          piVar10 = piVar10 + -1;
          lVar19 = lVar20 + -1;
          bVar1 = 0 < lVar20;
          piVar14 = piVar14 + -1;
          lVar20 = lVar19;
          iVar9 = iVar2 + iVar5;
        } while (lVar19 != 0 && bVar1);
        lVar20 = *(long *)(lVar12 + 0x10);
        piVar7[lVar16 + -1] = 0;
        uVar11 = (ulong)*(uint *)(lVar12 + 4);
        if (0 < (int)*(uint *)(lVar12 + 4)) {
          piVar10 = piVar7;
          plVar13 = *(long **)(lVar12 + 0x48);
          do {
            lVar20 = lVar20 + *plVar13 * (long)*piVar10;
            uVar11 = uVar11 - 1;
            piVar10 = piVar10 + 1;
            plVar13 = plVar13 + 1;
          } while (uVar11 != 0);
        }
        if (0 < iVar4) {
          iVar9 = 0;
          do {
            if (0 < *(int *)(param_2 + 0x18)) {
              lVar12 = 0;
              lVar19 = *(long *)(param_2 + 0x10);
              do {
                uVar8 = *(undefined8 *)(lVar19 + 0x40);
                FUN_1094c8fcc(uVar8,*(undefined8 *)(param_2 + 0x20),uVar8);
                param_1 = param_1 + *(float *)(lVar20 + lVar12 * 4);
                *(float *)(lVar20 + lVar12 * 4) = param_1;
                lVar12 = lVar12 + 1;
              } while (lVar12 < *(int *)(param_2 + 0x18));
              iVar9 = piVar7[lVar16 + -1];
            }
            lVar20 = lVar20 + 0xc;
            iVar9 = iVar9 + 1;
            piVar7[lVar16 + -1] = iVar9;
          } while (iVar9 < iVar4);
        }
        piVar7[lVar16 + -1] = 0;
        iVar15 = iVar15 + 1;
      } while (iVar15 < param_3[1]);
      if (CONCAT44(aiStack_78[1],aiStack_78[0]) == 0) {
        return;
      }
    }
    __ZdlPv();
  }
  return;
}



/* Entry: 1094c8fcc; end: 1094c909b;  */

float FUN_1094c8fcc(long param_1,ulong param_2,float *param_3)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    do {
      do {
        uVar1 = param_2;
        func_0x000107c284a0();
        fVar2 = ((float)(uVar1 & 0xffffffff) / 4.2949673e+09) * 2.0 + -1.0;
        uVar1 = param_2;
        func_0x000107c284a0();
        fVar5 = ((float)(uVar1 & 0xffffffff) / 4.2949673e+09) * 2.0 + -1.0;
        fVar4 = fVar5 * fVar5 + fVar2 * fVar2;
      } while (1.0 < fVar4);
    } while (fVar4 == 0.0);
    fVar3 = fVar4;
    _logf();
    fVar4 = SQRT((fVar3 * -2.0) / fVar4);
    *(float *)(param_1 + 8) = fVar5 * fVar4;
    *(undefined1 *)(param_1 + 0xc) = 1;
    fVar2 = fVar2 * fVar4;
  }
  else {
    *(undefined1 *)(param_1 + 0xc) = 0;
    fVar2 = *(float *)(param_1 + 8);
  }
  return *param_3 + param_3[1] * fVar2;
}



/* Entry: 1094c909c; end: 1094c92d3;  */

undefined8 * FUN_1094c909c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *unaff_x21;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined1 uStack_31;
  
  FUN_1094c956c(&plStack_50,&uStack_31,param_3,param_1 + 8);
  plVar1 = plStack_48;
  plVar4 = plStack_50;
  plStack_50 = (long *)0x0;
  plStack_48 = (long *)0x0;
  plVar7 = *(long **)(param_1 + 0x38);
  *(long **)(param_1 + 0x38) = plVar1;
  *(long **)(param_1 + 0x30) = plVar4;
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  lVar6 = *(long *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined1 *)(lVar6 + 0xe4) = 2;
  }
  if ((*(int *)(lVar6 + 0x40) == 0) || (*(int *)(lVar6 + 0x44) == 0)) {
    puVar5 = (undefined8 *)&UNK_10f56f17d;
    func_0x000105688514();
    __ZNSt3__119__shared_weak_countD2Ev(plVar4);
    __ZdlPv();
    __Unwind_Resume();
    uVar9 = param_3[1];
    uVar8 = *param_3;
    *param_3 = 0;
    param_3[1] = 0;
    plVar4 = (long *)puVar5[1];
    puVar5[1] = uVar9;
    *puVar5 = uVar8;
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    return puVar5;
  }
  cVar2 = *(char *)(param_1 + 0x27);
  if (cVar2 < '\0') {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_1094c91b8;
LAB_1094c9178:
    plVar4 = (long *)0x60;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110af73b8;
    unaff_x21 = plVar4 + 3;
    if (-1 < cVar2) {
      lVar6 = *(long *)(param_1 + 0x10);
      plVar4[4] = *(long *)(param_1 + 0x18);
      *unaff_x21 = lVar6;
      plVar4[5] = *(long *)(param_1 + 0x20);
      goto LAB_1094c91d0;
    }
  }
  else {
    if (cVar2 != '\0') goto LAB_1094c9178;
LAB_1094c91b8:
    func_0x000105688514(&UNK_10f56f1a8);
  }
  func_0x000107c3192c(unaff_x21,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
LAB_1094c91d0:
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plStack_50 = unaff_x21;
  plStack_48 = plVar4;
  FUN_1094c92d4(param_1 + 0x40,&plStack_50);
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  plStack_58 = *(long **)(param_1 + 0x38);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar4 = (long *)(*(long *)(param_1 + 0x38) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1094c6180(uVar8,&uStack_60);
  plVar4 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return (undefined8 *)0x1;
}



/* Entry: 1094c92d4; end: 1094c9337;  */

undefined8 * FUN_1094c92d4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1094c9338; end: 1094c9347;  */

void FUN_1094c9338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_1 + 0x10);
  return;
}



/* Entry: 1094c9348; end: 1094c937f;  */

void FUN_1094c9348(long param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_40;
  long *plStack_38;
  
  if ((0 < *param_2) && (iVar2 = param_2[1], 0 < iVar2)) {
    lVar7 = *(long *)(param_1 + 0x30);
    *(int *)(lVar7 + 0x40) = *param_2;
    *(int *)(lVar7 + 0x44) = iVar2;
    return;
  }
  puVar6 = &UNK_10f56f1d4;
  func_0x000105688514(&UNK_10f56f1d4);
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  FUN_1094c92d4(puVar6 + 0x40,&uStack_40);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 1094c9380; end: 1094c93e7;  */

void FUN_1094c9380(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_1094c92d4(param_1 + 0x40,&uStack_30);
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



/* Entry: 1094c93e8; end: 1094c954b;  */

/* WARNING: Removing unreachable block (ram,0x0001094c7790) */
/* WARNING: Removing unreachable block (ram,0x0001094c6f68) */
/* WARNING: Removing unreachable block (ram,0x0001094c6d68) */
/* WARNING: Removing unreachable block (ram,0x0001094c70dc) */
/* WARNING: Removing unreachable block (ram,0x0001094c7464) */
/* WARNING: Removing unreachable block (ram,0x0001094c6bfc) */
/* WARNING: Removing unreachable block (ram,0x0001094c6c00) */
/* WARNING: Removing unreachable block (ram,0x0001094c6c08) */
/* WARNING: Removing unreachable block (ram,0x0001094c6c10) */
/* WARNING: Removing unreachable block (ram,0x0001094c6c14) */
/* WARNING: Removing unreachable block (ram,0x0001094c6c34) */
/* WARNING: Removing unreachable block (ram,0x0001094c6c3c) */
/* WARNING: Removing unreachable block (ram,0x0001094c6c50) */
/* WARNING: Removing unreachable block (ram,0x0001094c6c60) */

uint * FUN_1094c93e8(uint *param_1,long param_2,uint *param_3,long param_4)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  uint *puVar6;
  undefined4 *puVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  int iVar19;
  ulong uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  long lVar26;
  float *pfVar27;
  float *pfVar28;
  uint *puVar29;
  uint *puVar30;
  long *plVar31;
  uint *puVar32;
  uint *puVar33;
  long *unaff_x28;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long lStack_350;
  undefined8 uStack_320;
  int iStack_318;
  undefined4 uStack_314;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined8 *puStack_2b8;
  long *plStack_2b0;
  long lStack_2a8;
  ulong uStack_2a0;
  undefined1 auStack_298 [8];
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  long lStack_278;
  long lStack_248;
  long *plStack_240;
  long *plStack_238;
  long lStack_230;
  float fStack_228;
  uint auStack_220 [20];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  long lStack_180;
  int *piStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  uint uStack_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  long lStack_120;
  undefined4 *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  undefined8 in_stack_ffffffffffffffb0;
  long in_stack_ffffffffffffffc0;
  undefined8 in_stack_ffffffffffffffc8;
  long in_stack_ffffffffffffffd8;
  
  lVar8 = *(long *)(param_2 + 0x40);
  if (lVar8 != 0) {
    if (*(long *)(param_3 + 4) != 0) {
      uVar23 = (ulong)param_3[1];
      if ((int)param_3[1] < 3) {
        lVar26 = (long)(int)param_3[3] * (long)(int)param_3[2];
      }
      else {
        lVar26 = 1;
        piVar14 = *(int **)(param_3 + 0x10);
        do {
          lVar26 = lVar26 * *piVar14;
          uVar23 = uVar23 - 1;
          piVar14 = piVar14 + 1;
        } while (uVar23 != 0);
      }
      if (lVar26 != 0) {
        plVar24 = (long *)(param_4 + 0x10);
        do {
          plVar24 = (long *)*plVar24;
          if (plVar24 == (long *)0x0) {
            if (((*(int **)(param_3 + 0x10))[1] == *(int *)(*(long *)(param_2 + 0x30) + 0x40)) &&
               (**(int **)(param_3 + 0x10) == *(int *)(*(long *)(param_2 + 0x30) + 0x44))) {
              lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
              uStack_158 = 0x42ff0000;
              puStack_118 = &uStack_150;
              uStack_14c = 0;
              uStack_148 = 0;
              uStack_154 = 0;
              uStack_150 = 0;
              uStack_13c = 0;
              uStack_138 = 0;
              uStack_144 = 0;
              uStack_140 = 0;
              uStack_12c = 0;
              uStack_134 = 0;
              uStack_130 = 0;
              lStack_120 = 0;
              uStack_128 = 0;
              uStack_124 = 0;
              uStack_100 = 0;
              uStack_108 = 0;
              lVar26 = *(long *)(lVar8 + 0x30);
              puStack_110 = &uStack_108;
              if (((*(int *)(lVar26 + 0x70) < 1 && *(int *)(lVar26 + 0x74) < 1) &&
                   *(int *)(lVar26 + 0x78) < 1) && (*(int *)(lVar26 + 0x7c) < 1)) {
                if (&uStack_158 != param_3) {
                  if (*(long *)(param_3 + 0xe) != 0) {
                    piVar14 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
                    do {
                      cVar2 = '\x01';
                      bVar1 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                      if (bVar1) {
                        *piVar14 = *piVar14 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  lStack_120 = 0;
                  uStack_140 = 0;
                  uStack_13c = 0;
                  uStack_148 = 0;
                  uStack_144 = 0;
                  uStack_130 = 0;
                  uStack_12c = 0;
                  uStack_138 = 0;
                  uStack_134 = 0;
                  uStack_158 = *param_3;
                  if ((int)param_3[1] < 3) {
                    uStack_150 = (undefined4)*(undefined8 *)(param_3 + 2);
                    uStack_14c = (undefined4)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
                    uStack_108 = **(undefined8 **)(param_3 + 0x12);
                    uStack_100 = (*(undefined8 **)(param_3 + 0x12))[1];
                    uStack_154 = param_3[1];
                  }
                  else {
                    func_0x000109a84868(&uStack_158,param_3);
                  }
                  uStack_140 = (undefined4)*(undefined8 *)(param_3 + 6);
                  uStack_13c = (undefined4)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20);
                  uStack_148 = (undefined4)*(undefined8 *)(param_3 + 4);
                  uStack_144 = (undefined4)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
                  uStack_130 = (undefined4)*(undefined8 *)(param_3 + 10);
                  uStack_12c = (undefined4)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20);
                  uStack_138 = (undefined4)*(undefined8 *)(param_3 + 8);
                  uStack_134 = (undefined4)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
                  lStack_120 = *(long *)(param_3 + 0xe);
                  uStack_128 = (undefined4)*(undefined8 *)(param_3 + 0xc);
                  uStack_124 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
                }
                bVar1 = true;
              }
              else {
                uStack_1a8 = 0;
                uStack_1a4 = 0;
                uStack_1b8 = 0x1010000;
                iStack_1b0 = (int)param_3;
                iStack_1ac = (int)((ulong)param_3 >> 0x20);
                uStack_2f8 = (long *)CONCAT44(uStack_2f8._4_4_,0x2010000);
                lStack_2e8 = 0;
                uStack_d8._0_4_ = 0;
                uStack_d8._4_4_ = 0;
                uStack_e0._0_4_ = 0;
                uStack_e0._4_4_ = 0;
                uStack_c8 = 0;
                uStack_c4 = 0;
                uStack_d0 = 0;
                uStack_cc = 0;
                uStack_2f0 = &uStack_158;
                FUN_109a4a0a4(&uStack_1b8,&uStack_2f8);
                bVar1 = false;
              }
              uStack_1b8 = 0x42ff0000;
              uStack_d8 = &uStack_1b8;
              iStack_1ac = 0;
              uStack_1a8 = 0;
              uStack_1b4 = 0;
              iStack_1b0 = 0;
              piStack_178 = &iStack_1b0;
              uStack_19c = 0;
              uStack_198 = 0;
              uStack_1a4 = 0;
              uStack_1a0 = 0;
              uStack_18c = 0;
              uStack_194 = 0;
              uStack_190 = 0;
              lStack_180 = 0;
              uStack_188 = 0;
              uStack_184 = 0;
              uStack_e0._0_4_ = 0x2010000;
              uStack_d0 = 0;
              uStack_cc = 0;
              uStack_160 = 0;
              uStack_168 = 0;
              puVar6 = &uStack_158;
              puStack_170 = &uStack_168;
              FUN_109a41858(0x3ff0000000000000,0,puVar6,&uStack_e0,*param_3 & 0xff8 | 5);
              if ((0.001 < *(float *)(*(long *)(lVar8 + 0x30) + 0x80)) &&
                 (*(long *)(lVar8 + 0x40) != 0)) {
                if ((uStack_1b8 & 0xff8) != 0x10) {
                  func_0x000105688514(&UNK_10f56f051);
                  goto LAB_1094c7f24;
                }
                FUN_10937eb64();
                uVar23 = (ulong)uStack_1b4;
                if ((int)uStack_1b4 < 3) {
                  uVar23 = 0;
                  if ((long)piStack_178[(long)(int)uStack_1b4 + -1] != 0) {
                    uVar23 = (ulong)((long)iStack_1ac * (long)iStack_1b0) /
                             (ulong)(long)piStack_178[(long)(int)uStack_1b4 + -1];
                  }
                  if (uVar23 >> 0x1f == 0) {
LAB_1094c6cb0:
                    uStack_2f8 = (long *)(uVar23 << 0x20);
                    uStack_d8 = &uStack_1b8;
                    uStack_e0._0_4_ = 0x10af7408;
                    uStack_e0._4_4_ = 1;
                    uStack_d0 = (undefined4)lVar8;
                    uStack_cc = (undefined4)((ulong)lVar8 >> 0x20);
                    uStack_c8 = 3;
                    uStack_c0 = SUB84(puVar6,0);
                    uStack_bc = (undefined4)((ulong)puVar6 >> 0x20);
                    func_0x000109aa87cc(0xbff0000000000000,&uStack_2f8,&uStack_e0);
                    goto LAB_1094c6ce4;
                  }
                }
                else {
                  uVar25 = 1;
                  piVar14 = piStack_178;
                  uVar16 = uVar23;
                  do {
                    uVar25 = uVar25 * (long)*piVar14;
                    uVar16 = uVar16 - 1;
                    piVar14 = piVar14 + 1;
                  } while (uVar16 != 0);
                  uVar20 = (ulong)piStack_178[uVar23 - 1];
                  uVar16 = 0;
                  if (uVar20 != 0) {
                    uVar16 = uVar25 / uVar20;
                  }
                  if (uVar16 >> 0x1f == 0) {
                    uVar16 = 1;
                    piVar14 = piStack_178;
                    do {
                      uVar16 = uVar16 * (long)*piVar14;
                      uVar23 = uVar23 - 1;
                      piVar14 = piVar14 + 1;
                    } while (uVar23 != 0);
                    uVar23 = 0;
                    if (uVar20 != 0) {
                      uVar23 = uVar16 / uVar20;
                    }
                    goto LAB_1094c6cb0;
                  }
                }
                puVar7 = (undefined4 *)0x3c;
                func_0x000107c2ae8c();
                *puVar7 = 1;
                uStack_e0 = puVar7 + 1;
                uStack_d8._0_4_ = 0x35;
                uStack_d8._4_4_ = 0;
                *(undefined8 *)(puVar7 + 3) = 0x202f2029286c6174;
                *(undefined8 *)(puVar7 + 1) = 0x6f743e2d73696874;
                *(undefined1 *)((long)puVar7 + 0x39) = 0;
                *(undefined8 *)(puVar7 + 7) = 0x2d736968745b657a;
                *(undefined8 *)(puVar7 + 5) = 0x69733e2d73696874;
                *(undefined8 *)(puVar7 + 0xb) = 0x4e49203d3c205d31;
                *(undefined8 *)(puVar7 + 9) = 0x202d20736d69643e;
                *(undefined8 *)((long)puVar7 + 0x31) = 0x58414d5f544e4920;
                FUN_109ac3188(0xffffff29,&uStack_e0,&UNK_10f56f0c1,&UNK_10f56f0ce,0x171);
                goto LAB_1094c7f24;
              }
LAB_1094c6ce4:
              iStack_1c0 = (uStack_1b8 >> 3 & 0x1ff) + 1;
              uStack_1c8 = NEON_rev64(CONCAT44(iStack_1ac,iStack_1b0),4);
              uStack_1bc = 1;
              uStack_1d0 = 0x100000001;
              func_0x000109d0f600(auStack_220,&uStack_1c8,&uStack_1d0,
                                  CONCAT44(uStack_1a4,uStack_1a8));
              FUN_1094c8428(&uStack_e0,*(long *)(lVar8 + 0x30) + 0x28,auStack_220);
              FUN_1094c8958(&lStack_248,&uStack_e0,1);
              func_0x000105675c90(&uStack_c8);
              plVar24 = *(long **)(param_4 + 0x10);
              if (plVar24 != (long *)0x0) {
                do {
                  iStack_318 = (*(uint *)(plVar24 + 5) >> 3 & 0x1ff) + 1;
                  uStack_320 = NEON_rev64(plVar24[6],4);
                  uStack_314 = 1;
                  func_0x000109cdb584(auStack_298,*(undefined8 *)(lVar8 + 0x18),&uStack_320,
                                      &uStack_1d0);
                  plVar15 = (long *)plVar24[0xd];
                  uStack_2f0 = (uint *)*plVar15;
                  uVar9 = (uint)((ulong)*(uint *)(plVar24 + 5) & 0xff8);
                  uStack_2f8 = (long *)CONCAT44(2,uVar9 | 0x42ff0005);
                  lStack_2e8 = lStack_278;
                  lStack_2e0 = lStack_278;
                  lStack_2d0 = 0;
                  lStack_2d8 = 0;
                  lStack_2c0 = 0;
                  uStack_2c8 = 0;
                  lStack_2a8 = 0;
                  uStack_2a0 = 0;
                  puStack_2b8 = &uStack_2f0;
                  plStack_2b0 = &lStack_2a8;
                  if ((lStack_278 == 0) &&
                     ((long)(int)*plVar15 * (long)*(int *)((long)plVar15 + 4) != 0)) {
                    puVar7 = (undefined4 *)0x24;
                    func_0x000107c2ae8c();
                    *puVar7 = 1;
                    uStack_e0 = puVar7 + 1;
                    uStack_d8._0_4_ = 0x1c;
                    uStack_d8._4_4_ = 0;
                    *(undefined1 *)(puVar7 + 8) = 0;
                    *(undefined8 *)(puVar7 + 3) = 0x207c7c2030203d3d;
                    *(undefined8 *)(puVar7 + 1) = 0x2029286c61746f74;
                    *(undefined8 *)(puVar7 + 6) = 0x4c4c554e203d2120;
                    *(undefined8 *)(puVar7 + 4) = 0x61746164207c7c20;
                    FUN_109ac3188(0xffffff29,&uStack_e0,&UNK_10f2e8162,&UNK_10f566d1b,0x1bb);
                    goto LAB_1094c7f24;
                  }
                  uStack_2a0 = (((ulong)*(uint *)(plVar24 + 5) & 0xff8) >> 1) + 4;
                  lStack_2a8 = (long)*(int *)((long)plVar15 + 4) * (long)(int)uStack_2a0;
                  uStack_2f8 = (long *)CONCAT44(2,uVar9 + 0x42ff4005);
                  lStack_2d8 = lStack_278 + lStack_2a8 * (int)*plVar15;
                  uStack_e0._0_4_ = 0x2010000;
                  uStack_d0 = 0;
                  uStack_cc = 0;
                  lStack_2d0 = lStack_2d8;
                  uStack_d8 = (uint *)&uStack_2f8;
                  FUN_109a41858(0x3ff0000000000000,0,plVar24 + 5,&uStack_e0,uVar9 | 5);
                  FUN_1094c86f8(&uStack_e0,plVar24 + 2,auStack_298);
                  plVar15 = &lStack_248;
                  func_0x000107c31944(plVar15,&uStack_e0);
                  plVar31 = plStack_240;
                  if (plStack_240 != (long *)0x0) {
                    uVar23 = (long)plStack_240 - 1;
                    if (((ulong)plStack_240 & uVar23) == 0) {
                      unaff_x28 = (long *)(uVar23 & (ulong)plVar15);
                    }
                    else {
                      unaff_x28 = plVar15;
                      if (plStack_240 <= plVar15) {
                        uVar16 = 0;
                        if (plStack_240 != (long *)0x0) {
                          uVar16 = (ulong)plVar15 / (ulong)plStack_240;
                        }
                        unaff_x28 = (long *)((long)plVar15 - uVar16 * (long)plStack_240);
                      }
                    }
                    plVar10 = *(long **)(lStack_248 + (long)unaff_x28 * 8);
                    if (plVar10 != (long *)0x0) {
                      for (plVar10 = (long *)*plVar10; plVar10 != (long *)0x0;
                          plVar10 = (long *)*plVar10) {
                        plVar11 = (long *)plVar10[1];
                        if (plVar11 == plVar15) {
                          plVar11 = &lStack_248;
                          func_0x000104c4fbc4(plVar11,plVar10 + 2,&uStack_e0);
                          if (((ulong)plVar11 & 1) != 0) goto LAB_1094c70cc;
                        }
                        else {
                          if (((ulong)plVar31 & uVar23) == 0) {
                            plVar11 = (long *)((ulong)plVar11 & uVar23);
                          }
                          else if (plVar31 <= plVar11) {
                            uVar16 = 0;
                            if (plVar31 != (long *)0x0) {
                              uVar16 = (ulong)plVar11 / (ulong)plVar31;
                            }
                            plVar11 = (long *)((long)plVar11 - uVar16 * (long)plVar31);
                          }
                          if (plVar11 != unaff_x28) break;
                        }
                      }
                    }
                  }
                  plVar10 = (long *)0x78;
                  __Znwm();
                  uStack_368 = &lStack_248;
                  uStack_360 = 0;
                  *plVar10 = 0;
                  plVar10[1] = (long)plVar15;
                  plVar10[3] = (long)uStack_d8;
                  plVar10[2] = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
                  plVar10[4] = CONCAT44(uStack_cc,uStack_d0);
                  plVar10[5] = (long)&PTR_DAT_1108a5c28;
                  plVar10[7] = CONCAT44(uStack_b4,uStack_b8);
                  plVar10[6] = CONCAT44(uStack_bc,uStack_c0);
                  plVar10[8] = CONCAT44(uStack_ac,uStack_b0);
                  plVar10[10] = uStack_a0;
                  plVar10[9] = lStack_a8;
                  if (uStack_a0 != 0) {
                    plVar11 = (long *)(uStack_a0 + 8);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                      if (bVar3) {
                        *plVar11 = *plVar11 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  plStack_370 = plVar10;
                  FUN_109407928(plVar10 + 0xb,&puStack_98);
                  uStack_360 = CONCAT71(uStack_360._1_7_,1);
                  if ((plVar31 == (long *)0x0) ||
                     (fStack_228 * (float)plVar31 < (float)(lStack_230 + 1))) {
                    uVar23 = 1;
                    if ((long *)0x2 < plVar31) {
                      uVar23 = (ulong)(((ulong)plVar31 & (long)plVar31 - 1U) != 0);
                    }
                    uVar23 = uVar23 | (long)plVar31 << 1;
                    uVar16 = (ulong)((float)(lStack_230 + 1) / fStack_228);
                    if (uVar23 <= uVar16) {
                      uVar23 = uVar16;
                    }
                    FUN_10937a3dc(&lStack_248,uVar23);
                    plVar31 = plStack_240;
                    if (((ulong)plStack_240 & (long)plStack_240 - 1U) == 0) {
                      unaff_x28 = (long *)((long)plStack_240 - 1U & (ulong)plVar15);
                    }
                    else {
                      unaff_x28 = plVar15;
                      if (plStack_240 <= plVar15) {
                        uVar23 = 0;
                        if (plStack_240 != (long *)0x0) {
                          uVar23 = (ulong)plVar15 / (ulong)plStack_240;
                        }
                        unaff_x28 = (long *)((long)plVar15 - uVar23 * (long)plStack_240);
                      }
                    }
                  }
                  plVar15 = *(long **)(lStack_248 + (long)unaff_x28 * 8);
                  if (plVar15 == (long *)0x0) {
                    *plStack_370 = (long)plStack_238;
                    plStack_238 = plStack_370;
                    *(long ***)(lStack_248 + (long)unaff_x28 * 8) = &plStack_238;
                    if (*plStack_370 != 0) {
                      plVar15 = *(long **)(*plStack_370 + 8);
                      if (((ulong)plVar31 & (long)plVar31 - 1U) == 0) {
                        plVar15 = (long *)((ulong)plVar15 & (long)plVar31 - 1U);
                      }
                      else if (plVar31 <= plVar15) {
                        uVar23 = 0;
                        if (plVar31 != (long *)0x0) {
                          uVar23 = (ulong)plVar15 / (ulong)plVar31;
                        }
                        plVar15 = (long *)((long)plVar15 - uVar23 * (long)plVar31);
                      }
                      *(long **)(lStack_248 + (long)plVar15 * 8) = plStack_370;
                    }
                  }
                  else {
                    *plStack_370 = *plVar15;
                    *plVar15 = (long)plStack_370;
                  }
                  lStack_230 = lStack_230 + 1;
LAB_1094c70cc:
                  func_0x000105675c90(&uStack_c8);
                  puVar6 = uStack_d8;
                  if (lStack_2c0 != 0) {
                    piVar14 = (int *)(lStack_2c0 + 0x14);
                    do {
                      iVar13 = *piVar14;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                      if (bVar3) {
                        *piVar14 = iVar13 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar13 + -1 == 0) {
                      func_0x000109a848d4(&uStack_2f8);
                      puVar6 = uStack_d8;
                    }
                  }
                  lStack_2c0 = 0;
                  lStack_2e0 = 0;
                  lStack_2e8 = 0;
                  lStack_2d0 = 0;
                  lStack_2d8 = 0;
                  if (0 < uStack_2f8._4_4_) {
                    lVar12 = 0;
                    do {
                      *(undefined4 *)((long)puStack_2b8 + lVar12 * 4) = 0;
                      lVar12 = lVar12 + 1;
                    } while (lVar12 < uStack_2f8._4_4_);
                  }
                  uStack_d8 = puVar6;
                  if (plStack_2b0 != &lStack_2a8 && plStack_2b0 != (long *)0x0) {
                    _free(plStack_2b0[-1]);
                  }
                  func_0x000105675c90(auStack_298);
                  plVar24 = (long *)*plVar24;
                } while (plVar24 != (long *)0x0);
              }
              func_0x000109cdb3f0(&uStack_320,*(undefined8 *)(lVar8 + 0x18),&lStack_248,1);
              *param_1 = 0x42ff0000;
              puVar29 = param_1 + 1;
              param_1[3] = 0;
              param_1[4] = 0;
              puVar29[0] = 0;
              puVar29[1] = 0;
              puVar6 = param_1 + 2;
              param_1[7] = 0;
              param_1[8] = 0;
              param_1[5] = 0;
              param_1[6] = 0;
              param_1[0xb] = 0;
              param_1[0xc] = 0;
              param_1[9] = 0;
              param_1[10] = 0;
              param_1[0xe] = 0;
              param_1[0xf] = 0;
              param_1[0xc] = 0;
              param_1[0xd] = 0;
              puVar30 = param_1 + 0x14;
              puVar30[0] = 0;
              puVar30[1] = 0;
              *(uint **)(param_1 + 0x10) = puVar6;
              *(uint **)(param_1 + 0x12) = puVar30;
              param_1[0x18] = 0x42ff0000;
              puVar33 = param_1 + 0x19;
              param_1[0x1b] = 0;
              param_1[0x1c] = 0;
              puVar33[0] = 0;
              puVar33[1] = 0;
              param_1[0x16] = 0;
              param_1[0x17] = 0;
              param_1[0x1f] = 0;
              param_1[0x20] = 0;
              param_1[0x1d] = 0;
              param_1[0x1e] = 0;
              param_1[0x23] = 0;
              param_1[0x24] = 0;
              param_1[0x21] = 0;
              param_1[0x22] = 0;
              param_1[0x26] = 0;
              param_1[0x27] = 0;
              param_1[0x24] = 0;
              param_1[0x25] = 0;
              puVar32 = param_1 + 0x2c;
              puVar32[0] = 0;
              puVar32[1] = 0;
              *(uint **)(param_1 + 0x28) = param_1 + 0x1a;
              *(uint **)(param_1 + 0x2a) = puVar32;
              param_1[0x2e] = 0;
              param_1[0x2f] = 0;
              puVar18 = &uStack_320;
              FUN_10937a848(puVar18,*(long *)(lVar8 + 0x30) + 0xb0);
              if (puVar18 == (undefined8 *)0x0) {
                uStack_2f8 = (long *)(*(long *)(lVar8 + 0x30) + 0xb0);
                if (*(char *)(*(long *)(lVar8 + 0x30) + 199) < '\0') {
                  uStack_2f8 = (long *)*uStack_2f8;
                }
                FUN_1093780e0(&uStack_e0,&UNK_10f56efc4,&uStack_2f8);
                FUN_109388c6c(1,&UNK_10f56ee99,&UNK_10f56efb7,0x97,&uStack_e0);
                if (param_1 != param_3) {
                  if (*(long *)(param_3 + 0xe) != 0) {
                    piVar14 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
                    do {
                      cVar2 = '\x01';
                      bVar1 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                      if (bVar1) {
                        *piVar14 = *piVar14 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  if (*(long *)(param_1 + 0xe) != 0) {
                    piVar14 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
                    do {
                      iVar13 = *piVar14;
                      cVar2 = '\x01';
                      bVar1 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                      if (bVar1) {
                        *piVar14 = iVar13 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar13 + -1 == 0) {
                      func_0x000109a848d4(param_1);
                    }
                  }
                  param_1[0xe] = 0;
                  param_1[0xf] = 0;
                  param_1[6] = 0;
                  param_1[7] = 0;
                  param_1[4] = 0;
                  param_1[5] = 0;
                  param_1[10] = 0;
                  param_1[0xb] = 0;
                  param_1[8] = 0;
                  param_1[9] = 0;
                  if ((int)param_1[1] < 1) {
                    *param_1 = *param_3;
LAB_1094c7b28:
                    if (2 < (int)param_3[1]) goto LAB_1094c7b5c;
                    param_1[1] = param_3[1];
                    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
                    puVar18 = *(undefined8 **)(param_3 + 0x12);
                    puVar22 = *(undefined8 **)(param_1 + 0x12);
                    *puVar22 = *puVar18;
                    puVar22[1] = puVar18[1];
                  }
                  else {
                    lVar8 = 0;
                    lVar26 = *(long *)(param_1 + 0x10);
                    do {
                      *(undefined4 *)(lVar26 + lVar8 * 4) = 0;
                      lVar8 = lVar8 + 1;
                    } while (lVar8 < (int)*puVar29);
                    *param_1 = *param_3;
                    if ((int)*puVar29 < 3) goto LAB_1094c7b28;
LAB_1094c7b5c:
                    func_0x000109a84868(param_1);
                  }
                  uVar35 = *(undefined8 *)(param_3 + 4);
                  uVar37 = *(undefined8 *)(param_3 + 10);
                  uVar36 = *(undefined8 *)(param_3 + 8);
                  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 6);
                  *(undefined8 *)(param_1 + 4) = uVar35;
                  *(undefined8 *)(param_1 + 10) = uVar37;
                  *(undefined8 *)(param_1 + 8) = uVar36;
                  uVar35 = *(undefined8 *)(param_3 + 0xc);
                  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_3 + 0xe);
                  *(undefined8 *)(param_1 + 0xc) = uVar35;
                }
LAB_1094c7c44:
                func_0x000109379fe8(&uStack_320);
                func_0x000109379fe8(&lStack_248);
                puVar6 = auStack_220;
                func_0x000105675c90(puVar6);
                puVar29 = uStack_d8;
                if (lStack_180 != 0) {
                  piVar14 = (int *)(lStack_180 + 0x14);
                  do {
                    iVar13 = *piVar14;
                    cVar2 = '\x01';
                    bVar1 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                    if (bVar1) {
                      *piVar14 = iVar13 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar13 + -1 == 0) {
                    puVar6 = &uStack_1b8;
                    func_0x000109a848d4(puVar6);
                    puVar29 = uStack_d8;
                  }
                }
                lStack_180 = 0;
                uStack_1a0 = 0;
                uStack_19c = 0;
                uStack_1a8 = 0;
                uStack_1a4 = 0;
                uStack_190 = 0;
                uStack_18c = 0;
                uStack_198 = 0;
                uStack_194 = 0;
                if (0 < (int)uStack_1b4) {
                  lVar8 = 0;
                  do {
                    piStack_178[lVar8] = 0;
                    lVar8 = lVar8 + 1;
                  } while (lVar8 < (int)uStack_1b4);
                }
                uStack_d8 = puVar29;
                if (puStack_170 != &uStack_168 && puStack_170 != (undefined8 *)0x0) {
                  puVar6 = (uint *)puStack_170[-1];
                  _free(puVar6);
                }
                if (lStack_120 != 0) {
                  piVar14 = (int *)(lStack_120 + 0x14);
                  do {
                    iVar13 = *piVar14;
                    cVar2 = '\x01';
                    bVar1 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                    if (bVar1) {
                      *piVar14 = iVar13 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar13 + -1 == 0) {
                    puVar6 = &uStack_158;
                    func_0x000109a848d4(puVar6);
                  }
                }
                lStack_120 = 0;
                uStack_140 = 0;
                uStack_13c = 0;
                uStack_148 = 0;
                uStack_144 = 0;
                uStack_130 = 0;
                uStack_12c = 0;
                uStack_138 = 0;
                uStack_134 = 0;
                if (0 < (int)uStack_154) {
                  lVar8 = 0;
                  do {
                    puStack_118[lVar8] = 0;
                    lVar8 = lVar8 + 1;
                  } while (lVar8 < (int)uStack_154);
                }
                if (puStack_110 != &uStack_108 && puStack_110 != (undefined8 *)0x0) {
                  puVar6 = (uint *)puStack_110[-1];
                  _free(puVar6);
                }
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                  return puVar6;
                }
                ___stack_chk_fail();
              }
              else {
                uStack_e0 = (undefined4 *)(*(long *)(lVar8 + 0x30) + 0xb0);
                puVar18 = &uStack_320;
                FUN_10937a098(puVar18,uStack_e0,&UNK_10dd5b8f9,&uStack_e0,&uStack_2f8);
                func_0x000109d0e828(auStack_298,puVar18 + 5,&UNK_10dfccfd0,0);
                uVar4 = iStack_288 * 8 - 3;
                uVar9 = uVar4 & 0xfff;
                uStack_2f8 = (long *)CONCAT44(2,uVar9 | 0x42ff0000);
                puStack_2b8 = &uStack_2f0;
                uStack_2f0 = (uint *)CONCAT44(iStack_290,iStack_28c);
                lStack_2e8 = lStack_278;
                lStack_2e0 = lStack_278;
                lStack_2d0 = 0;
                lStack_2d8 = 0;
                lStack_2c0 = 0;
                uStack_2c8 = 0;
                lStack_2a8 = 0;
                uStack_2a0 = 0;
                plStack_2b0 = &lStack_2a8;
                if (((long)iStack_290 * (long)iStack_28c == 0) || (lStack_278 != 0)) {
                  uVar4 = (uVar4 >> 1 & 0x7fc) + 4;
                  uStack_2a0 = (ulong)uVar4;
                  uStack_2f8 = (long *)CONCAT44(2,uVar9 | 0x42ff4000);
                  lStack_2a8 = (long)(int)uVar4 * (long)iStack_290;
                  lStack_2d8 = lStack_278 + lStack_2a8 * iStack_28c;
                  uStack_e0._0_4_ = 0x42ff0000;
                  uVar23 = (ulong)&uStack_e0 | 8;
                  uStack_d8._4_4_ = 0;
                  uStack_d0 = 0;
                  uStack_e0._4_4_ = 0;
                  uStack_d8._0_4_ = 0;
                  uStack_c4 = 0;
                  uStack_c0 = 0;
                  uStack_cc = 0;
                  uStack_c8 = 0;
                  uStack_b4 = 0;
                  uStack_bc = 0;
                  uStack_b8 = 0;
                  lStack_a8 = 0;
                  uStack_b0 = 0;
                  uStack_ac = 0;
                  uStack_90 = 0;
                  uStack_88 = 0;
                  plStack_370 = (long *)CONCAT44(plStack_370._4_4_,0x2010000);
                  uStack_360 = 0;
                  uStack_368 = &uStack_e0;
                  lStack_2d0 = lStack_2d8;
                  uStack_a0 = uVar23;
                  puStack_98 = &uStack_90;
                  FUN_109a479a0(&uStack_2f8,&plStack_370);
                  if (*(long *)(param_1 + 0xe) != 0) {
                    piVar14 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
                    do {
                      iVar13 = *piVar14;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                      if (bVar3) {
                        *piVar14 = iVar13 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar13 + -1 == 0) {
                      func_0x000109a848d4(param_1);
                    }
                  }
                  if (0 < (int)param_1[1]) {
                    lVar12 = 0;
                    lVar17 = *(long *)(param_1 + 0x10);
                    do {
                      *(undefined4 *)(lVar17 + lVar12 * 4) = 0;
                      lVar12 = lVar12 + 1;
                    } while (lVar12 < (int)*puVar29);
                  }
                  *(ulong *)(param_1 + 2) = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
                  *(ulong *)param_1 = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
                  *(ulong *)(param_1 + 6) = CONCAT44(uStack_c4,uStack_c8);
                  *(ulong *)(param_1 + 4) = CONCAT44(uStack_cc,uStack_d0);
                  *(ulong *)(param_1 + 10) = CONCAT44(uStack_b4,uStack_b8);
                  *(ulong *)(param_1 + 8) = CONCAT44(uStack_bc,uStack_c0);
                  *(long *)(param_1 + 0xe) = lStack_a8;
                  *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_ac,uStack_b0);
                  puVar21 = *(uint **)(param_1 + 0x12);
                  if (puVar21 != puVar30) {
                    if (puVar21 != (uint *)0x0) {
                      _free(*(undefined8 *)(puVar21 + -2));
                    }
                    *(uint **)(param_1 + 0x10) = puVar6;
                    *(uint **)(param_1 + 0x12) = puVar30;
                    puVar21 = puVar30;
                  }
                  puVar18 = (undefined8 *)((ulong)&uStack_e0 | 4);
                  if (uStack_e0._4_4_ < 3) {
                    *(undefined8 *)puVar21 = *puStack_98;
                    *(undefined8 *)(puVar21 + 2) = puStack_98[1];
                    uStack_e0._0_4_ = 0x42ff0000;
                    puVar18[1] = 0;
                    *puVar18 = 0;
                    puVar18[3] = 0;
                    puVar18[2] = 0;
                    puVar18[5] = 0;
                    puVar18[4] = 0;
                    *(undefined8 *)((long)puVar18 + 0x34) = 0;
                    *(undefined8 *)((long)puVar18 + 0x2c) = 0;
                    if (puStack_98 != &uStack_90) {
                      _free(puStack_98[-1]);
                    }
                  }
                  else {
                    *(ulong *)(param_1 + 0x10) = uStack_a0;
                    *(undefined8 **)(param_1 + 0x12) = puStack_98;
                    uStack_e0._0_4_ = 0x42ff0000;
                    puVar18[1] = 0;
                    *puVar18 = 0;
                    puVar18[3] = 0;
                    puVar18[2] = 0;
                    puVar18[5] = 0;
                    puVar18[4] = 0;
                    *(undefined8 *)((long)puVar18 + 0x34) = 0;
                    *(undefined8 *)((long)puVar18 + 0x2c) = 0;
                    uStack_a0 = uVar23;
                    puStack_98 = &uStack_90;
                  }
                  if (lStack_2c0 != 0) {
                    piVar14 = (int *)(lStack_2c0 + 0x14);
                    do {
                      iVar13 = *piVar14;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                      if (bVar3) {
                        *piVar14 = iVar13 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar13 + -1 == 0) {
                      func_0x000109a848d4(&uStack_2f8);
                    }
                  }
                  lStack_2c0 = 0;
                  lStack_2e0 = 0;
                  lStack_2e8 = 0;
                  lStack_2d0 = 0;
                  lStack_2d8 = 0;
                  if (0 < uStack_2f8._4_4_) {
                    lVar12 = 0;
                    do {
                      *(undefined4 *)((long)puStack_2b8 + lVar12 * 4) = 0;
                      lVar12 = lVar12 + 1;
                    } while (lVar12 < uStack_2f8._4_4_);
                  }
                  if (plStack_2b0 != &lStack_2a8 && plStack_2b0 != (long *)0x0) {
                    _free(plStack_2b0[-1]);
                  }
                  if (!bVar1) {
                    uStack_2f8 = (long *)CONCAT44(*(undefined4 *)(lVar26 + 0x70),
                                                  *(undefined4 *)(lVar26 + 0x78));
                    uStack_2f0 = (uint *)NEON_rev64(**(undefined8 **)(param_3 + 0x10),4);
                    FUN_109a852c8(&uStack_e0,param_1,&uStack_2f8);
                    if (*(long *)(param_1 + 0xe) != 0) {
                      piVar14 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
                      do {
                        iVar13 = *piVar14;
                        cVar2 = '\x01';
                        bVar1 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                        if (bVar1) {
                          *piVar14 = iVar13 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar13 + -1 == 0) {
                        func_0x000109a848d4(param_1);
                      }
                    }
                    if (0 < (int)*puVar29) {
                      lVar26 = 0;
                      lVar12 = *(long *)(param_1 + 0x10);
                      do {
                        *(undefined4 *)(lVar12 + lVar26 * 4) = 0;
                        lVar26 = lVar26 + 1;
                      } while (lVar26 < (int)*puVar29);
                    }
                    *(ulong *)(param_1 + 2) = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
                    *(ulong *)param_1 = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
                    *(ulong *)(param_1 + 6) = CONCAT44(uStack_c4,uStack_c8);
                    *(ulong *)(param_1 + 4) = CONCAT44(uStack_cc,uStack_d0);
                    *(ulong *)(param_1 + 10) = CONCAT44(uStack_b4,uStack_b8);
                    *(ulong *)(param_1 + 8) = CONCAT44(uStack_bc,uStack_c0);
                    *(long *)(param_1 + 0xe) = lStack_a8;
                    *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_ac,uStack_b0);
                    puVar21 = *(uint **)(param_1 + 0x12);
                    if (puVar21 != puVar30) {
                      if (puVar21 != (uint *)0x0) {
                        _free(*(undefined8 *)(puVar21 + -2));
                      }
                      *(uint **)(param_1 + 0x10) = puVar6;
                      *(uint **)(param_1 + 0x12) = puVar30;
                      puVar21 = puVar30;
                    }
                    if (uStack_e0._4_4_ < 3) {
                      puVar18 = (undefined8 *)((ulong)&uStack_e0 | 4);
                      *(undefined8 *)puVar21 = *puStack_98;
                      *(undefined8 *)(puVar21 + 2) = puStack_98[1];
                      uStack_e0._0_4_ = 0x42ff0000;
                      puVar18[1] = 0;
                      *puVar18 = 0;
                      puVar18[3] = 0;
                      puVar18[2] = 0;
                      puVar18[5] = 0;
                      puVar18[4] = 0;
                      *(undefined8 *)((long)puVar18 + 0x34) = 0;
                      *(undefined8 *)((long)puVar18 + 0x2c) = 0;
                      if (puStack_98 != &uStack_90) {
                        _free(puStack_98[-1]);
                      }
                    }
                    else {
                      *(ulong *)(param_1 + 0x10) = uStack_a0;
                      *(undefined8 **)(param_1 + 0x12) = puStack_98;
                    }
                  }
                  lVar26 = *(long *)(lVar8 + 0x30);
                  plVar24 = *(long **)(lVar26 + 0xf0);
                  if (*(char *)((long)plVar24 + 0x1d) == '\x01') {
                    uStack_e0._0_4_ = 0x2010000;
                    uStack_d8._0_4_ = SUB84(param_1,0);
                    uStack_d8._4_4_ = (undefined4)((ulong)param_1 >> 0x20);
                    uStack_d0 = 0;
                    uStack_cc = 0;
                    FUN_109a41858(1.0 / (double)*(float *)(plVar24 + 3),0,param_1,&uStack_e0,
                                  0xffffffff);
                    plVar24 = *(long **)(lVar26 + 0xf0);
                  }
                  if (*(char *)((long)plVar24 + 0x1c) == '\x01') {
                    lVar12 = *plVar24;
                    uVar23 = plVar24[1] - lVar12;
                    lVar26 = ((ulong)(*param_1 >> 3) & 0x1ff) + 1;
                    iVar13 = (int)lVar26;
                    iVar19 = (int)(uVar23 >> 2);
                    if (iVar19 <= iVar13) {
                      uVar9 = param_1[2];
                      uVar4 = param_1[3];
                      if (0 < (int)(uVar4 * uVar9)) {
                        iVar13 = 0;
                        pfVar27 = *(float **)(param_1 + 4);
                        do {
                          lVar17 = 0;
                          pfVar28 = pfVar27;
                          do {
                            fVar34 = 0.0;
                            if (lVar17 < (long)(uVar23 * 0x40000000) >> 0x20) {
                              fVar34 = *(float *)(lVar12 + lVar17 * 4);
                            }
                            pfVar27 = pfVar28 + 1;
                            *pfVar28 = fVar34 + *pfVar28;
                            lVar17 = lVar17 + 1;
                            pfVar28 = pfVar27;
                          } while (lVar26 != lVar17);
                          iVar13 = iVar13 + 1;
                        } while (iVar13 != uVar4 * uVar9);
                      }
                      goto LAB_1094c7880;
                    }
                    uStack_2f8 = (long *)CONCAT44(uStack_2f8._4_4_,iVar13);
                    plStack_370 = (long *)CONCAT44(plStack_370._4_4_,iVar19);
                    FUN_1093ca1c4(&uStack_e0,&UNK_10f56eff5,&uStack_2f8,&plStack_370);
                    FUN_109388c6c(1,&UNK_10f56ee99,&UNK_10f56efb7,0xae,&uStack_e0);
                    if (param_1 != param_3) {
                      if (*(long *)(param_3 + 0xe) != 0) {
                        piVar14 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
                        do {
                          cVar2 = '\x01';
                          bVar1 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                          if (bVar1) {
                            *piVar14 = *piVar14 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                      }
                      if (*(long *)(param_1 + 0xe) != 0) {
                        piVar14 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
                        do {
                          iVar13 = *piVar14;
                          cVar2 = '\x01';
                          bVar1 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                          if (bVar1) {
                            *piVar14 = iVar13 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                        if (iVar13 + -1 == 0) {
                          func_0x000109a848d4(param_1);
                        }
                      }
                      param_1[0xe] = 0;
                      param_1[0xf] = 0;
                      param_1[6] = 0;
                      param_1[7] = 0;
                      param_1[4] = 0;
                      param_1[5] = 0;
                      param_1[10] = 0;
                      param_1[0xb] = 0;
                      param_1[8] = 0;
                      param_1[9] = 0;
                      if ((int)param_1[1] < 1) {
                        *param_1 = *param_3;
LAB_1094c7be8:
                        if (2 < (int)param_3[1]) goto LAB_1094c7c1c;
                        param_1[1] = param_3[1];
                        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
                        puVar18 = *(undefined8 **)(param_3 + 0x12);
                        puVar22 = *(undefined8 **)(param_1 + 0x12);
                        *puVar22 = *puVar18;
                        puVar22[1] = puVar18[1];
                      }
                      else {
                        lVar8 = 0;
                        lVar26 = *(long *)(param_1 + 0x10);
                        do {
                          *(undefined4 *)(lVar26 + lVar8 * 4) = 0;
                          lVar8 = lVar8 + 1;
                        } while (lVar8 < (int)*puVar29);
                        *param_1 = *param_3;
                        if ((int)*puVar29 < 3) goto LAB_1094c7be8;
LAB_1094c7c1c:
                        func_0x000109a84868(param_1,param_3);
                      }
                      uVar35 = *(undefined8 *)(param_3 + 4);
                      uVar37 = *(undefined8 *)(param_3 + 10);
                      uVar36 = *(undefined8 *)(param_3 + 8);
                      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 6);
                      *(undefined8 *)(param_1 + 4) = uVar35;
                      *(undefined8 *)(param_1 + 10) = uVar37;
                      *(undefined8 *)(param_1 + 8) = uVar36;
                      uVar35 = *(undefined8 *)(param_3 + 0xc);
                      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_3 + 0xe);
                      *(undefined8 *)(param_1 + 0xc) = uVar35;
                    }
                  }
                  else {
LAB_1094c7880:
                    puVar18 = &uStack_320;
                    FUN_10937a848(puVar18,*(long *)(lVar8 + 0x30) + 200);
                    if (puVar18 != (undefined8 *)0x0) {
                      uStack_e0 = (undefined4 *)(*(long *)(lVar8 + 0x30) + 200);
                      puVar18 = &uStack_320;
                      FUN_10937a098(puVar18,uStack_e0,&UNK_10dd5b8f9,&uStack_e0,&uStack_2f8);
                      func_0x000109d0e828(&plStack_370,puVar18 + 5,&UNK_10dfccfd0,0);
                      uVar4 = (int)uStack_360 * 8 - 3;
                      uVar9 = uVar4 & 0xfff;
                      uStack_2f8 = (long *)CONCAT44(2,uVar9 | 0x42ff0000);
                      puStack_2b8 = &uStack_2f0;
                      uStack_2f0 = (uint *)CONCAT44((int)uStack_368,uStack_368._4_4_);
                      lStack_2e8 = lStack_350;
                      lStack_2e0 = lStack_350;
                      lStack_2d0 = 0;
                      lStack_2d8 = 0;
                      lStack_2c0 = 0;
                      uStack_2c8 = 0;
                      lStack_2a8 = 0;
                      uStack_2a0 = 0;
                      plStack_2b0 = &lStack_2a8;
                      if (((long)(int)uStack_368 * (long)uStack_368._4_4_ != 0) && (lStack_350 == 0)
                         ) {
                        puVar7 = (undefined4 *)0x24;
                        func_0x000107c2ae8c();
                        *puVar7 = 1;
                        puStack_f8 = puVar7 + 1;
                        puStack_f0 = (undefined8 *)0x1c;
                        *(undefined1 *)(puVar7 + 8) = 0;
                        *(undefined8 *)(puVar7 + 3) = 0x207c7c2030203d3d;
                        *(undefined8 *)(puVar7 + 1) = 0x2029286c61746f74;
                        *(undefined8 *)(puVar7 + 6) = 0x4c4c554e203d2120;
                        *(undefined8 *)(puVar7 + 4) = 0x61746164207c7c20;
                        FUN_109ac3188(0xffffff29,&puStack_f8,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                        goto LAB_1094c7f24;
                      }
                      uVar4 = (uVar4 >> 1 & 0x7fc) + 4;
                      uStack_2a0 = (ulong)uVar4;
                      uStack_2f8 = (long *)CONCAT44(2,uVar9 | 0x42ff4000);
                      lStack_2a8 = (long)(int)uVar4 * (long)(int)uStack_368;
                      lStack_2d8 = lStack_350 + lStack_2a8 * uStack_368._4_4_;
                      uStack_e0._0_4_ = 0x42ff0000;
                      uVar23 = (ulong)&uStack_e0 | 8;
                      uStack_d8._4_4_ = 0;
                      uStack_d0 = 0;
                      uStack_e0._4_4_ = 0;
                      uStack_d8._0_4_ = 0;
                      uStack_c4 = 0;
                      uStack_c0 = 0;
                      uStack_cc = 0;
                      uStack_c8 = 0;
                      uStack_b4 = 0;
                      uStack_bc = 0;
                      uStack_b8 = 0;
                      lStack_a8 = 0;
                      uStack_b0 = 0;
                      uStack_ac = 0;
                      uStack_90 = 0;
                      uStack_88 = 0;
                      puStack_f8 = (undefined4 *)CONCAT44(puStack_f8._4_4_,0x2010000);
                      uStack_e8 = 0;
                      lStack_2d0 = lStack_2d8;
                      puStack_f0 = &uStack_e0;
                      uStack_a0 = uVar23;
                      puStack_98 = &uStack_90;
                      FUN_109a479a0(&uStack_2f8,&puStack_f8);
                      if (*(long *)(param_1 + 0x26) != 0) {
                        piVar14 = (int *)(*(long *)(param_1 + 0x26) + 0x14);
                        do {
                          iVar13 = *piVar14;
                          cVar2 = '\x01';
                          bVar1 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                          if (bVar1) {
                            *piVar14 = iVar13 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                        if (iVar13 + -1 == 0) {
                          func_0x000109a848d4(param_1 + 0x18);
                        }
                      }
                      if (0 < (int)param_1[0x19]) {
                        lVar8 = 0;
                        lVar26 = *(long *)(param_1 + 0x28);
                        do {
                          *(undefined4 *)(lVar26 + lVar8 * 4) = 0;
                          lVar8 = lVar8 + 1;
                        } while (lVar8 < (int)*puVar33);
                      }
                      *(ulong *)(param_1 + 0x1a) = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
                      *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
                      *(ulong *)(param_1 + 0x1e) = CONCAT44(uStack_c4,uStack_c8);
                      *(ulong *)(param_1 + 0x1c) = CONCAT44(uStack_cc,uStack_d0);
                      *(ulong *)(param_1 + 0x22) = CONCAT44(uStack_b4,uStack_b8);
                      *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_bc,uStack_c0);
                      *(long *)(param_1 + 0x26) = lStack_a8;
                      *(ulong *)(param_1 + 0x24) = CONCAT44(uStack_ac,uStack_b0);
                      puVar6 = *(uint **)(param_1 + 0x2a);
                      if (puVar6 != puVar32) {
                        if (puVar6 != (uint *)0x0) {
                          _free(*(undefined8 *)(puVar6 + -2));
                        }
                        *(uint **)(param_1 + 0x28) = param_1 + 0x1a;
                        *(uint **)(param_1 + 0x2a) = puVar32;
                        puVar6 = puVar32;
                      }
                      puVar18 = (undefined8 *)((ulong)&uStack_e0 | 4);
                      if (uStack_e0._4_4_ < 3) {
                        *(undefined8 *)puVar6 = *puStack_98;
                        *(undefined8 *)(puVar6 + 2) = puStack_98[1];
                        uStack_e0._0_4_ = 0x42ff0000;
                        puVar18[1] = 0;
                        *puVar18 = 0;
                        puVar18[3] = 0;
                        puVar18[2] = 0;
                        puVar18[5] = 0;
                        puVar18[4] = 0;
                        *(undefined8 *)((long)puVar18 + 0x34) = 0;
                        *(undefined8 *)((long)puVar18 + 0x2c) = 0;
                        if (puStack_98 != &uStack_90) {
                          _free(puStack_98[-1]);
                        }
                      }
                      else {
                        *(ulong *)(param_1 + 0x28) = uStack_a0;
                        *(undefined8 **)(param_1 + 0x2a) = puStack_98;
                        uStack_e0._0_4_ = 0x42ff0000;
                        puVar18[1] = 0;
                        *puVar18 = 0;
                        puVar18[3] = 0;
                        puVar18[2] = 0;
                        puVar18[5] = 0;
                        puVar18[4] = 0;
                        *(undefined8 *)((long)puVar18 + 0x34) = 0;
                        *(undefined8 *)((long)puVar18 + 0x2c) = 0;
                        uStack_a0 = uVar23;
                        puStack_98 = &uStack_90;
                      }
                      if (lStack_2c0 != 0) {
                        piVar14 = (int *)(lStack_2c0 + 0x14);
                        do {
                          iVar13 = *piVar14;
                          cVar2 = '\x01';
                          bVar1 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                          if (bVar1) {
                            *piVar14 = iVar13 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                        if (iVar13 + -1 == 0) {
                          func_0x000109a848d4(&uStack_2f8);
                        }
                      }
                      lStack_2c0 = 0;
                      lStack_2e0 = 0;
                      lStack_2e8 = 0;
                      lStack_2d0 = 0;
                      lStack_2d8 = 0;
                      if (0 < uStack_2f8._4_4_) {
                        lVar8 = 0;
                        do {
                          *(undefined4 *)((long)puStack_2b8 + lVar8 * 4) = 0;
                          lVar8 = lVar8 + 1;
                        } while (lVar8 < uStack_2f8._4_4_);
                      }
                      if (plStack_2b0 != &lStack_2a8 && plStack_2b0 != (long *)0x0) {
                        _free(plStack_2b0[-1]);
                      }
                      func_0x000105675c90(&plStack_370);
                    }
                  }
                  func_0x000105675c90(auStack_298);
                  goto LAB_1094c7c44;
                }
              }
              puVar7 = (undefined4 *)0x24;
              func_0x000107c2ae8c();
              *puVar7 = 1;
              plStack_370 = (long *)(puVar7 + 1);
              uStack_368 = (long *)0x1c;
              *(undefined1 *)(puVar7 + 8) = 0;
              *(undefined8 *)(puVar7 + 3) = 0x207c7c2030203d3d;
              *(undefined8 *)(puVar7 + 1) = 0x2029286c61746f74;
              *(undefined8 *)(puVar7 + 6) = 0x4c4c554e203d2120;
              *(undefined8 *)(puVar7 + 4) = 0x61746164207c7c20;
              FUN_109ac3188(0xffffff29,&plStack_370,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
LAB_1094c7f24:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1094c7f28);
              (*pcVar5)();
            }
            goto LAB_1094c9500;
          }
          if (plVar24[7] == 0) break;
          uVar23 = (ulong)*(uint *)((long)plVar24 + 0x2c);
          if ((int)*(uint *)((long)plVar24 + 0x2c) < 3) {
            lVar26 = (long)*(int *)((long)plVar24 + 0x34) * (long)*(int *)(plVar24 + 6);
          }
          else {
            lVar26 = 1;
            piVar14 = (int *)plVar24[0xd];
            do {
              lVar26 = lVar26 * *piVar14;
              uVar23 = uVar23 - 1;
              piVar14 = piVar14 + 1;
            } while (uVar23 != 0);
          }
        } while (lVar26 != 0);
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (&stack0xffffffffffffffb0,&UNK_10f56f22c,plVar24 + 2);
        FUN_109259240(&stack0xffffffffffffffc8,&stack0xffffffffffffffb0,&UNK_10f56f23b);
        func_0x000105687ee0(&stack0xffffffffffffffc8);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1094c94bc);
        (*pcVar5)();
      }
    }
    func_0x000105688514(&UNK_10f56f217);
LAB_1094c9500:
    func_0x000105688514(&UNK_10f56f245);
  }
  puVar6 = (uint *)&UNK_10f56f204;
  func_0x000105688514();
  if (in_stack_ffffffffffffffd8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffc8);
  }
  if (in_stack_ffffffffffffffc0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffb0);
  }
  __Unwind_Resume();
  *(undefined ***)puVar6 = &PTR_FUN_110af74a8;
  func_0x0001094ae13c(puVar6 + 0x10);
  func_0x0001094ae194(puVar6 + 0xc);
  if (*(char *)((long)puVar6 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(puVar6 + 4));
  }
  return puVar6;
}



/* Entry: 1094c954c; end: 1094c954f;  */

undefined8 * FUN_1094c954c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af74a8;
  func_0x0001094ae13c(param_1 + 8);
  func_0x0001094ae194(param_1 + 6);
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 1094c9550; end: 1094c9563;  */

void FUN_1094c9550(void)

{
  FUN_1094a9640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094c9564; end: 1094c956b;  */

undefined8 FUN_1094c9564(void)

{
  return 1;
}



/* Entry: 1094c956c; end: 1094c95cb;  */

void FUN_1094c956c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x128;
  __Znwm();
  FUN_1094c95cc();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 1094c95cc; end: 1094c9617;  */

undefined8 * FUN_1094c95cc(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110af7510;
  FUN_1094a4e20(param_1 + 3,param_2,*param_3);
  return param_1;
}



/* Entry: 1094c9618; end: 1094c9627;  */

void FUN_1094c9618(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af7510;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094c9628; end: 1094c9647;  */

void FUN_1094c9628(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af7510;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094c9648; end: 1094c9653;  */

long FUN_1094c9648(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x110) != 0) {
    *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x110);
    __ZdlPv();
  }
  lVar4 = *(long *)(param_1 + 0x108);
  *(long *)(param_1 + 0x108) = 0;
  if (lVar4 != 0) {
    FUN_1094a8624();
  }
  if (*(char *)(param_1 + 0xf7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xe0));
  }
  if (*(char *)(param_1 + 0xdf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 200));
  }
  func_0x0001094a866c(param_1 + 0xa0);
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  plVar5 = *(long **)(param_1 + 0x20);
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
  return param_1 + 0x18;
}



/* Entry: 1094c9654; end: 1094c9783;  */

undefined8 * FUN_1094c9654(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_110af7560;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = param_1 + 0xe;
  param_1[0x16] = param_1 + 0x17;
  *(undefined4 *)(param_1 + 0x19) = 0x42ff0000;
  param_1[0x18] = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x23] = 0;
  param_1[0x21] = param_1 + 0x1a;
  param_1[0x22] = param_1 + 0x23;
  param_1[0x24] = 0;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 0x25);
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 0x2d);
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 0x35);
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  return param_1;
}



/* Entry: 1094c9784; end: 1094c9c8b;  */

bool FUN_1094c9784(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined8 *puStack_58;
  
  FUN_1094c956c(&lStack_c0,&lStack_88,param_3,param_1 + 8);
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x168);
  iVar2 = *(int *)(param_1 + 100);
  iVar3 = iVar2 * *(int *)(param_1 + 0x60);
  if (iVar3 < 1) {
    __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x168);
  }
  else {
    *(int *)(lStack_c0 + 0x40) = *(int *)(param_1 + 0x60);
    *(int *)(lStack_c0 + 0x44) = iVar2;
    *(undefined8 *)(lStack_c0 + 0x48) = 0x100000003;
    __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x168);
    plVar1 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar11 = plStack_b8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(char *)(param_1 + 0x27) < '\0') {
      func_0x000107c3192c(&lStack_e0,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18)
                         );
    }
    else {
      lStack_d8 = *(long *)(param_1 + 0x18);
      lStack_e0 = *(long *)(param_1 + 0x10);
      lStack_d0 = *(long *)(param_1 + 0x20);
    }
    __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x1a8);
    lStack_b0 = lStack_c0;
    plStack_a8 = plVar1;
    if (plVar1 != (long *)0x0) {
      plVar11 = plVar1 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (lStack_d0 < 0) {
      func_0x000107c3192c(&lStack_a0,lStack_e0,lStack_d8);
      lStack_c0 = lStack_b0;
      plVar11 = plStack_a8;
    }
    else {
      lStack_98 = lStack_d8;
      lStack_a0 = lStack_e0;
      lStack_90 = lStack_d0;
      plVar11 = plVar1;
    }
    lStack_b0 = 0;
    plStack_a8 = (long *)0x0;
    lStack_70 = lStack_98;
    lStack_78 = lStack_a0;
    lStack_68 = lStack_90;
    lStack_a0 = 0;
    lStack_98 = 0;
    lStack_90 = 0;
    plVar7 = (long *)0xc8;
    lStack_88 = lStack_c0;
    plStack_80 = plVar11;
    __Znwm();
    plVar13 = plVar7 + 1;
    *plVar13 = 0;
    plVar7[2] = 0;
    plVar7[3] = 0x32aaaba7;
    plVar7[5] = 0;
    plVar7[4] = 0;
    plVar7[7] = 0;
    plVar7[6] = 0;
    plVar7[9] = 0;
    plVar7[8] = 0;
    plVar7[10] = 0;
    plVar7[0xb] = 0x3cb0b1bb;
    plVar7[0xd] = 0;
    plVar7[0xc] = 0;
    plVar7[0xf] = 0;
    plVar7[0xe] = 0;
    *(undefined8 *)((long)plVar7 + 0x84) = 0;
    *(undefined8 *)((long)plVar7 + 0x7c) = 0;
    *plVar7 = (long)&PTR_DAT_110af7600;
    plVar7[0x14] = lStack_c0;
    plVar7[0x15] = (long)plVar11;
    lStack_88 = 0;
    plStack_80 = (long *)0x0;
    plVar7[0x18] = lStack_68;
    plVar7[0x17] = lStack_70;
    plVar7[0x16] = lStack_78;
    lStack_70 = 0;
    lStack_68 = 0;
    lStack_78 = 0;
    uVar8 = 8;
    __Znwm();
    __ZNSt3__115__thread_structC1Ev();
    puVar9 = (undefined8 *)0x20;
    __Znwm();
    *puVar9 = uVar8;
    puVar9[2] = 1;
    puVar9[1] = 0x18;
    puVar9[3] = plVar7;
    puVar10 = auStack_60;
    puStack_58 = puVar9;
    _pthread_create(puVar10,0,FUN_1094cabb4,puVar9);
    if ((int)puVar10 != 0) {
      __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1094c9c60);
      (*pcVar6)();
    }
    puStack_58 = (undefined8 *)0x0;
    FUN_1094cac2c(&puStack_58);
    __ZNSt3__16thread6detachEv(auStack_60);
    __ZNSt3__16threadD1Ev(auStack_60);
    FUN_1094a4db4(plVar7);
    do {
      lVar12 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    if (lStack_68 < 0) {
      __ZdlPv(lStack_78);
    }
    plVar11 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      plVar13 = plStack_80 + 1;
      do {
        lVar12 = *plVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    if (lStack_90 < 0) {
      __ZdlPv(lStack_a0);
    }
    plVar11 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar13 = plStack_a8 + 1;
      do {
        lVar12 = *plVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    lVar12 = param_1 + 0x1e8;
    lStack_88 = param_2;
    FUN_1094b08f0(lVar12,param_2,&UNK_10dd5b8f9,&lStack_88,&lStack_b0);
    plVar11 = *(long **)(lVar12 + 0x28);
    *(long **)(lVar12 + 0x28) = plVar7;
    if (plVar11 != (long *)0x0) {
      plVar7 = plVar11 + 1;
      do {
        lVar12 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x1a8);
    if (lStack_d0 < 0) {
      __ZdlPv(lStack_e0);
    }
    if (plVar1 != (long *)0x0) {
      plVar11 = plVar1 + 1;
      do {
        lVar12 = *plVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  if (plStack_b8 != (long *)0x0) {
    plVar1 = plStack_b8 + 1;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  return 0 < iVar3;
}



/* Entry: 1094c9c8c; end: 1094c9cbb;  */

long FUN_1094c9c8c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
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



/* Entry: 1094c9cbc; end: 1094c9d33;  */

bool FUN_1094c9cbc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x1a8);
  lVar1 = param_1 + 0x1e8;
  FUN_1094aed70(lVar1,param_2);
  if (lVar1 != 0) {
    func_0x0001094b2048(param_1 + 0x1e8,param_2);
  }
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x1a8);
  return lVar1 != 0;
}



/* Entry: 1094c9d34; end: 1094c9d7f;  */

void FUN_1094c9d34(long param_1,undefined8 param_2)

{
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x1a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x10,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_1 + 0x1a8);
  return;
}



/* Entry: 1094c9d80; end: 1094c9e73;  */

undefined8 FUN_1094c9d80(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x1a8);
  func_0x0001094cac6c(&lStack_40,param_1 + 0x50);
  if (lStack_40 == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = param_1 + 0x1e8;
    FUN_1094b207c(lVar5,param_2);
    uVar4 = 0;
    if (lVar5 != 0) {
      __ZNSt3__117__assoc_sub_state4waitEv(*(undefined8 *)(lVar5 + 0x28));
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      FUN_1094aee54(uVar4);
      FUN_1094c9e74(param_1 + 0x40,uVar4);
      uVar4 = 1;
    }
  }
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x1a8);
  return uVar4;
}



/* Entry: 1094c9e74; end: 1094c9f6b;  */

undefined8 * FUN_1094c9e74(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1094c9f6c; end: 1094ca003;  */

void FUN_1094c9f6c(long param_1,undefined8 param_2)

{
  int iStack_58;
  int iStack_54;
  undefined4 auStack_50 [2];
  long lStack_48;
  undefined8 uStack_40;
  undefined4 auStack_38 [2];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x168);
  if (0 < *(int *)(param_1 + 100) * *(int *)(param_1 + 0x60)) {
    uStack_28 = 0;
    auStack_38[0] = 0x1010000;
    lStack_48 = param_1 + 0x68;
    auStack_50[0] = 0x2010000;
    uStack_40 = 0;
    iStack_58 = *(int *)(param_1 + 0x60);
    iStack_54 = *(int *)(param_1 + 100);
    uStack_30 = param_2;
    FUN_109b0f718(0x4000000000000000,0,auStack_38,auStack_50,&iStack_58,1);
  }
  __ZNSt3__115recursive_mutex6unlockEv(param_1 + 0x168);
  return;
}



/* Entry: 1094ca004; end: 1094ca073;  */

void FUN_1094ca004(long param_1,undefined8 *param_2)

{
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x168);
  *(ulong *)(param_1 + 0x60) =
       CONCAT44((int)((ulong)*param_2 >> 0x20) + 3,(int)*param_2 + 3) & 0xfffffffcfffffffc;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_1 + 0x168);
  return;
}



/* Entry: 1094ca074; end: 1094ca117;  */

void FUN_1094ca074(undefined4 *param_1,long param_2)

{
  undefined4 auStack_48 [2];
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x128);
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  auStack_48[0] = 0x2010000;
  uStack_38 = 0;
  puStack_40 = param_1;
  FUN_109a479a0(param_2 + 200,auStack_48);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 0x128);
  return;
}



/* Entry: 1094ca118; end: 1094ca7a3;  */

/* WARNING: Removing unreachable block (ram,0x0001094ca37c) */
/* WARNING: Removing unreachable block (ram,0x0001094ca380) */
/* WARNING: Removing unreachable block (ram,0x0001094ca388) */
/* WARNING: Removing unreachable block (ram,0x0001094ca390) */
/* WARNING: Removing unreachable block (ram,0x0001094ca394) */
/* WARNING: Removing unreachable block (ram,0x0001094ca3b4) */
/* WARNING: Removing unreachable block (ram,0x0001094ca3bc) */
/* WARNING: Removing unreachable block (ram,0x0001094ca3d0) */
/* WARNING: Removing unreachable block (ram,0x0001094ca3e0) */

void FUN_1094ca118(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  undefined4 auStack_240 [2];
  uint *puStack_238;
  undefined8 uStack_230;
  undefined4 auStack_228 [2];
  undefined8 *puStack_220;
  undefined8 uStack_218;
  uint uStack_210;
  int iStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long lStack_1d8;
  ulong uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  ulong uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  uint uStack_150;
  int iStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_108;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  
  func_0x0001094cac6c(&lStack_78,param_1 + 0x50);
  lVar7 = lStack_78;
  lStack_88 = 0;
  plStack_80 = (long *)0x0;
  __ZNSt3__115recursive_mutex4lockEv(lStack_78 + 0x1a8);
  FUN_1094c9e74(&lStack_88,lStack_78 + 0x40);
  __ZNSt3__115recursive_mutex6unlockEv(lVar7 + 0x1a8);
  lVar7 = lStack_78;
  if (lStack_88 == 0) {
    (*(code *)*param_2)(0,param_2);
    if (plStack_80 == (long *)0x0) goto LAB_1094ca688;
    plVar1 = plStack_80 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    __ZNSt3__115recursive_mutex4lockEv(lStack_78 + 0x168);
    if (*(long *)(lStack_78 + 0x78) == 0) {
LAB_1094ca274:
      (*(code *)*param_2)(0,param_2);
      __ZNSt3__115recursive_mutex6unlockEv(lVar7 + 0x168);
    }
    else {
      uVar6 = (ulong)*(uint *)(lStack_78 + 0x6c);
      if ((int)*(uint *)(lStack_78 + 0x6c) < 3) {
        lVar11 = (long)*(int *)(lStack_78 + 0x74) * (long)*(int *)(lStack_78 + 0x70);
      }
      else {
        lVar11 = 1;
        piVar12 = *(int **)(lStack_78 + 0xa8);
        do {
          lVar11 = lVar11 * *piVar12;
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 1;
        } while (uVar6 != 0);
      }
      if (lVar11 == 0) goto LAB_1094ca274;
      FUN_1094c6988(&uStack_150,lStack_88,lStack_78 + 0x68);
      uStack_1b0 = CONCAT44(iStack_14c,uStack_150);
      uStack_170 = (ulong)&uStack_1b0 | 8;
      uStack_1a8 = uStack_148;
      uStack_198 = uStack_138;
      uStack_1a0 = uStack_140;
      uStack_188 = uStack_128;
      uStack_190 = uStack_130;
      lStack_178 = lStack_118;
      uStack_180 = uStack_120;
      uStack_160 = 0;
      uStack_158 = 0;
      if (lStack_118 != 0) {
        piVar12 = (int *)(lStack_118 + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar4) {
            *piVar12 = *piVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puStack_168 = &uStack_160;
      if (iStack_14c < 3) {
        uStack_160 = *puStack_108;
        uStack_158 = puStack_108[1];
      }
      else {
        uStack_1b0 = (ulong)uStack_150;
        func_0x000109a84868(&uStack_1b0,&uStack_150);
      }
      __ZNSt3__115recursive_mutex6unlockEv(lVar7 + 0x168);
      uStack_210 = 0x42ff0000;
      uVar6 = (ulong)&uStack_210 | 8;
      uStack_204 = 0;
      uStack_200 = 0;
      iStack_20c = 0;
      uStack_208 = 0;
      uStack_1f4 = 0;
      uStack_1f0 = 0;
      uStack_1fc = 0;
      uStack_1f8 = 0;
      uStack_1e4 = 0;
      uStack_1ec = 0;
      uStack_1e8 = 0;
      lStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1dc = 0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uVar5 = (uint)uStack_1b0 >> 3 & 0x1ff;
      uStack_1d0 = uVar6;
      puStack_1c8 = &uStack_1c0;
      if (uVar5 == 3) {
        auStack_228[0] = 0x1010000;
        puStack_220 = &uStack_1b0;
        uStack_218 = 0;
        auStack_240[0] = 0x2010000;
        uStack_230 = 0;
        puStack_238 = &uStack_210;
        FUN_109ac9fc8(auStack_228,auStack_240,1,0);
      }
      else if (uVar5 == 0) {
        auStack_228[0] = 0x1010000;
        puStack_220 = &uStack_1b0;
        uStack_218 = 0;
        auStack_240[0] = 0x2010000;
        puStack_238 = &uStack_210;
        uStack_230 = 0;
        FUN_109ac9fc8(auStack_228,auStack_240,8,0);
      }
      else {
        if (lStack_178 != 0) {
          piVar12 = (int *)(lStack_178 + 0x14);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar4) {
              *piVar12 = *piVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lStack_1d8 = 0;
        uStack_1f8 = 0;
        uStack_1f4 = 0;
        uStack_200 = 0;
        uStack_1fc = 0;
        uStack_1e8 = 0;
        uStack_1e4 = 0;
        uStack_1f0 = 0;
        uStack_1ec = 0;
        uStack_210 = (uint)uStack_1b0;
        if (uStack_1b0._4_4_ < 3) {
          iStack_20c = uStack_1b0._4_4_;
          uStack_208 = (undefined4)uStack_1a8;
          uStack_204 = (undefined4)((ulong)uStack_1a8 >> 0x20);
          uStack_1c0 = *puStack_168;
          uStack_1b8 = puStack_168[1];
        }
        else {
          func_0x000109a84868(&uStack_210,&uStack_1b0);
        }
        uStack_1f8 = (undefined4)uStack_198;
        uStack_1f4 = (undefined4)((ulong)uStack_198 >> 0x20);
        uStack_200 = (undefined4)uStack_1a0;
        uStack_1fc = (undefined4)((ulong)uStack_1a0 >> 0x20);
        uStack_1e8 = (undefined4)uStack_188;
        uStack_1e4 = (undefined4)((ulong)uStack_188 >> 0x20);
        uStack_1f0 = (undefined4)uStack_190;
        uStack_1ec = (undefined4)((ulong)uStack_190 >> 0x20);
        uStack_1e0 = (undefined4)uStack_180;
        uStack_1dc = (undefined4)((ulong)uStack_180 >> 0x20);
        lStack_1d8 = lStack_178;
      }
      lVar7 = lStack_78;
      __ZNSt3__115recursive_mutex4lockEv(lStack_78 + 0x128);
      if (*(long *)(lStack_78 + 0x100) != 0) {
        piVar12 = (int *)(*(long *)(lStack_78 + 0x100) + 0x14);
        do {
          iVar2 = *piVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar4) {
            *piVar12 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(lStack_78 + 200);
        }
      }
      *(undefined8 *)(lStack_78 + 0x100) = 0;
      *(undefined8 *)(lStack_78 + 0xe0) = 0;
      *(undefined8 *)(lStack_78 + 0xd8) = 0;
      *(undefined8 *)(lStack_78 + 0xf0) = 0;
      *(undefined8 *)(lStack_78 + 0xe8) = 0;
      if (0 < *(int *)(lStack_78 + 0xcc)) {
        lVar11 = 0;
        lVar8 = *(long *)(lStack_78 + 0x108);
        do {
          *(undefined4 *)(lVar8 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(lStack_78 + 0xcc));
      }
      *(ulong *)(lStack_78 + 0xd0) = CONCAT44(uStack_204,uStack_208);
      *(ulong *)(lStack_78 + 200) = CONCAT44(iStack_20c,uStack_210);
      *(ulong *)(lStack_78 + 0xe0) = CONCAT44(uStack_1f4,uStack_1f8);
      *(ulong *)(lStack_78 + 0xd8) = CONCAT44(uStack_1fc,uStack_200);
      *(ulong *)(lStack_78 + 0xf0) = CONCAT44(uStack_1e4,uStack_1e8);
      *(ulong *)(lStack_78 + 0xe8) = CONCAT44(uStack_1ec,uStack_1f0);
      *(long *)(lStack_78 + 0x100) = lStack_1d8;
      *(ulong *)(lStack_78 + 0xf8) = CONCAT44(uStack_1dc,uStack_1e0);
      puVar9 = *(undefined8 **)(lStack_78 + 0x110);
      puVar10 = (undefined8 *)(lStack_78 + 0x118);
      if (puVar9 != puVar10) {
        if (puVar9 != (undefined8 *)0x0) {
          _free(puVar9[-1]);
        }
        *(long *)(lStack_78 + 0x108) = lStack_78 + 0xd0;
        *(undefined8 **)(lStack_78 + 0x110) = puVar10;
        puVar9 = puVar10;
      }
      puVar10 = (undefined8 *)((ulong)&uStack_210 | 4);
      if (iStack_20c < 3) {
        *puVar9 = *puStack_1c8;
        puVar9[1] = puStack_1c8[1];
      }
      else {
        *(ulong *)(lStack_78 + 0x108) = uStack_1d0;
        *(undefined8 **)(lStack_78 + 0x110) = puStack_1c8;
        uStack_1d0 = uVar6;
        puStack_1c8 = &uStack_1c0;
      }
      uStack_210 = 0x42ff0000;
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      *(undefined8 *)((long)puVar10 + 0x34) = 0;
      *(undefined8 *)((long)puVar10 + 0x2c) = 0;
      __ZNSt3__115recursive_mutex6unlockEv(lVar7 + 0x128);
      (*(code *)*param_2)(1,param_2);
      if (lStack_1d8 != 0) {
        piVar12 = (int *)(lStack_1d8 + 0x14);
        do {
          iVar2 = *piVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar4) {
            *piVar12 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_210);
        }
      }
      lStack_1d8 = 0;
      uStack_1f8 = 0;
      uStack_1f4 = 0;
      uStack_200 = 0;
      uStack_1fc = 0;
      uStack_1e8 = 0;
      uStack_1e4 = 0;
      uStack_1f0 = 0;
      uStack_1ec = 0;
      if (0 < iStack_20c) {
        lVar7 = 0;
        do {
          *(undefined4 *)(uStack_1d0 + lVar7 * 4) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar7 < iStack_20c);
      }
      if (puStack_1c8 != &uStack_1c0 && puStack_1c8 != (undefined8 *)0x0) {
        _free(puStack_1c8[-1]);
      }
      if (lStack_178 != 0) {
        piVar12 = (int *)(lStack_178 + 0x14);
        do {
          iVar2 = *piVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar4) {
            *piVar12 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_1b0);
        }
      }
      lStack_178 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      if (0 < uStack_1b0._4_4_) {
        lVar7 = 0;
        do {
          *(undefined4 *)(uStack_170 + lVar7 * 4) = 0;
          lVar7 = lVar7 + 1;
        } while (lVar7 < uStack_1b0._4_4_);
      }
      if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
        _free(puStack_168[-1]);
      }
      FUN_1094af130(&uStack_150);
    }
    if (plStack_80 == (long *)0x0) goto LAB_1094ca688;
    plVar1 = plStack_80 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar1 = plStack_80;
  if (lVar7 == 0) {
    (**(code **)(*plStack_80 + 0x10))(plStack_80);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
  }
LAB_1094ca688:
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  return;
}



/* Entry: 1094ca7a4; end: 1094ca7a7;  */

undefined8 * FUN_1094ca7a4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110af7560;
  func_0x0001094b008c(param_1 + 0x3d);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x35);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x2d);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x25);
  if (param_1[0x20] != 0) {
    piVar1 = (int *)(param_1[0x20] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x19);
    }
  }
  param_1[0x20] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  if (0 < *(int *)((long)param_1 + 0xcc)) {
    lVar5 = 0;
    lVar7 = param_1[0x21];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xcc));
  }
  puVar6 = (undefined8 *)param_1[0x22];
  if (puVar6 != param_1 + 0x23 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0xb] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110af74a8;
  func_0x0001094ae13c(param_1 + 8);
  func_0x0001094ae194(param_1 + 6);
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 1094ca7a8; end: 1094ca7bb;  */

void FUN_1094ca7a8(void)

{
  FUN_1094ca7bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094ca7bc; end: 1094ca913;  */

undefined8 * FUN_1094ca7bc(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110af7560;
  func_0x0001094b008c(param_1 + 0x3d);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x35);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x2d);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x25);
  if (param_1[0x20] != 0) {
    piVar1 = (int *)(param_1[0x20] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x19);
    }
  }
  param_1[0x20] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  if (0 < *(int *)((long)param_1 + 0xcc)) {
    lVar5 = 0;
    lVar7 = param_1[0x21];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xcc));
  }
  puVar6 = (undefined8 *)param_1[0x22];
  if (puVar6 != param_1 + 0x23 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[0xb] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110af74a8;
  func_0x0001094ae13c(param_1 + 8);
  func_0x0001094ae194(param_1 + 6);
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 1094ca914; end: 1094caa27;  */

long FUN_1094ca914(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
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



/* Entry: 1094caa28; end: 1094caa67;  */

void FUN_1094caa28(long *param_1)

{
  __ZNSt3__117__assoc_sub_state4waitEv();
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    func_0x0001094ae13c(param_1 + 0x12);
  }
                    /* WARNING: Could not recover jumptable at 0x0001094caa60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


