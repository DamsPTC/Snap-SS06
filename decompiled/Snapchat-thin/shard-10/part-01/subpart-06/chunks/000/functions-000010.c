/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107851ec4; end: 107851f87;  */

undefined *** FUN_107851ec4(undefined ***param_1,undefined8 param_2,undefined **param_3)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined8 extraout_x8;
  undefined **ppuStack_48;
  undefined ***pppuStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  pppuVar1 = param_1;
  func_0x0001078544d8();
  *pppuVar1 = &PTR_DAT_1109e29f8;
  uStack_28 = extraout_x8;
  func_0x000107853040(pppuVar1 + 2);
  param_1[0x1e] = param_3;
  func_0x00010726ed14(param_1 + 0x1f);
  param_1[0x21] = (undefined **)param_1;
  ppuVar2 = param_1[0x1e];
  ppuStack_48 = &PTR_DAT_1109e2b20;
  pppuStack_30 = &ppuStack_48;
  pppuStack_40 = param_1;
  (**(code **)(*ppuVar2 + 0x10))(ppuVar2,&ppuStack_48);
  *(int *)(param_1 + 1) = (int)ppuVar2;
  pppuVar1 = &ppuStack_48;
  func_0x00010730b43c();
  func_0x000107854478(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010730b43c(&ppuStack_48);
  func_0x0001078536e4(param_1 + 0x1f);
  func_0x0001074f8ec0(param_1 + 2);
  __Unwind_Resume();
  *pppuVar1 = &PTR_DAT_1109e29f8;
  (**(code **)(*pppuVar1[0x1e] + 0x18))(pppuVar1[0x1e],*(undefined4 *)(pppuVar1 + 1));
  func_0x0001078536e4(pppuVar1 + 0x1f);
  func_0x0001074f8ec0(pppuVar1 + 2);
  return pppuVar1;
}



/* Entry: 107853110; end: 107853197;  */

long FUN_107853110(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001078544b4();
  }
  else {
    func_0x00010785460c();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 1078533a4; end: 1078533ab;  */

void FUN_1078533a4(void)

{
  return;
}



/* Entry: 107853604; end: 10785367f;  */

void FUN_107853604(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[1];
  lVar5 = param_1[2];
  lVar3 = param_2;
  func_0x0001072bb3b4();
  lVar4 = lVar3;
  func_0x0001072bb3b4();
  lStack_60 = lVar2;
  lStack_58 = lVar3;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107268a34(param_2,param_3,*puVar1,puVar1[1],0xdd,&lStack_60);
  *(undefined1 *)(param_2 + param_3) = 0;
  return;
}



/* Entry: 107853794; end: 107853fab;  */

void FUN_107853794(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined1 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int extraout_w10;
  long *plVar12;
  undefined1 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined1 *unaff_x22;
  long lVar16;
  undefined1 *puVar17;
  long *plVar18;
  long lStack_200;
  long lStack_1f8;
  long alStack_1e8 [3];
  long lStack_1d0;
  undefined1 *puStack_1c8;
  long *plStack_1c0;
  ulong uStack_1b8;
  float fStack_1b0;
  long *plStack_1a8;
  long **pplStack_1a0;
  undefined8 uStack_198;
  long lStack_170;
  long lStack_168;
  undefined1 auStack_118 [8];
  long alStack_110 [6];
  undefined1 auStack_e0 [48];
  undefined4 uStack_b0;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  
  plVar14 = param_2;
  func_0x0001078544d8();
  lVar16 = *(long *)(param_1 + 8);
  puStack_1c8 = (undefined1 *)0x0;
  lStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  fStack_1b0 = 1.0;
  uStack_70 = extraout_x8;
  func_0x0001078696e8(alStack_1e8);
  plVar15 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  do {
    if (plVar15 == plVar1) {
      uVar6 = 1;
      plVar15 = plStack_1c0;
      do {
        if (plVar15 == (long *)0x0) {
          if (*(long *)(alStack_1e8[0] + 0x18) != 0) {
            uVar6 = *(long *)(lVar16 + 200) == 0;
            lVar8 = 0x10;
            if (!(bool)uVar6) {
              lVar8 = 0xb0;
            }
            plVar14 = alStack_1e8;
            func_0x00010731f9c8(lVar16 + lVar8,plVar14);
          }
          func_0x00010726b264(alStack_1e8);
          FUN_107854194();
          func_0x000107854478(uStack_70);
          if (!(bool)uVar6) {
            ___stack_chk_fail();
            func_0x00010726b264(alStack_1e8);
            FUN_107854194(&lStack_1d0);
            func_0x000107854560();
            func_0x0001078545d8(plVar14);
            func_0x00010785458c();
            return;
          }
          return;
        }
        func_0x0001078696e8(&lStack_200);
        lVar2 = plVar15[0x18];
        for (lVar8 = plVar15[0x17]; lVar8 != lVar2; lVar8 = lVar8 + 0x58) {
          lStack_170 = *(long *)(lVar8 + 0x40);
          lStack_168 = *(long *)(lVar8 + 0x48);
          if (lStack_168 != 0) {
            plVar14 = (long *)(lStack_168 + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar4) {
                *plVar14 = *plVar14 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (*(int *)(lStack_170 + 0xe8) != 0) {
            func_0x00010563ab98();
            goto LAB_107853eb0;
          }
          alStack_110[0] = *(long *)(lVar8 + 0x50);
          uStack_b0 = 2;
          func_0x000107869848(&lStack_200,lStack_170 + 0xb0,auStack_118);
          func_0x00010726af18(alStack_110);
          func_0x00010785337c(&lStack_170);
        }
        func_0x000104c2fe00(&lStack_170,plVar15 + 2);
        func_0x000104c2fe00(&plStack_1a8,plVar15 + 0x10);
        lVar8 = *(long *)(lVar16 + 0xe8);
        func_0x00010729807c(auStack_118,&plStack_1a8);
        uVar6 = lVar8 == 0;
        lVar8 = 0x50;
        if (!(bool)uVar6) {
          lVar8 = 0xd0;
        }
        plVar14 = plVar15 + 9;
        func_0x0001075200b0(lVar16 + lVar8,plVar14,auStack_118,&lStack_170,&lStack_200);
        func_0x00010724b3d8(auStack_118);
        func_0x000104c2f714(&plStack_1a8);
        func_0x000104c2f714(&lStack_170);
        func_0x00010726b264(&lStack_200);
        plVar15 = (long *)*plVar15;
      } while( true );
    }
    lVar8 = plVar15[8];
    lStack_1f8 = plVar15[9];
    lStack_200 = lVar8;
    if (lStack_1f8 != 0) {
      do {
        func_0x000107854460();
      } while (extraout_w10 != 0);
    }
    if (*(int *)(lVar8 + 0xe8) == 1) {
      alStack_110[0] = plVar15[10];
      uStack_b0 = 2;
      plVar14 = (long *)(lVar8 + 8);
      func_0x000107869848(alStack_1e8,plVar14,auStack_118);
      func_0x00010726af18(alStack_110);
    }
    else if (*(int *)(lVar8 + 0xe8) == 0) {
      func_0x000104c2fe00(auStack_118,lVar8 + 8);
      func_0x000104c2fe00(auStack_e0,lVar8 + 0x40);
      func_0x000104c2fe00(auStack_a8,lVar8 + 0x78);
      puVar11 = puStack_1c8;
      if ((puStack_1c8 != (undefined1 *)0x0) && (uStack_1b8 != 0)) {
        puVar10 = auStack_118;
        func_0x000107853fe4();
        unaff_x22 = puVar11 + -1;
        if (((ulong)puVar11 & (ulong)unaff_x22) == 0) {
          puVar17 = (undefined1 *)((ulong)puVar10 & (ulong)unaff_x22);
        }
        else {
          puVar17 = puVar10;
          if (puVar11 <= puVar10) {
            uVar7 = 0;
            if (puVar11 != (undefined1 *)0x0) {
              uVar7 = (ulong)puVar10 / (ulong)puVar11;
            }
            puVar17 = puVar10 + -(uVar7 * (long)puVar11);
          }
        }
        plVar18 = *(long **)(lStack_1d0 + (long)puVar17 * 8);
        if (plVar18 != (long *)0x0) {
          do {
            while( true ) {
              plVar18 = (long *)*plVar18;
              if (plVar18 == (long *)0x0) goto LAB_10785390c;
              puVar9 = (undefined1 *)plVar18[1];
              if (puVar9 != puVar10) break;
              uVar7 = (ulong)(plVar18 + 2);
              func_0x00010785406c(uVar7,auStack_118);
              if ((uVar7 & 1) != 0) {
                plVar14 = plVar15;
                func_0x00010731de6c(plVar18 + 0x17);
                goto LAB_107853ca4;
              }
            }
            if (((ulong)puVar11 & (ulong)unaff_x22) == 0) {
              puVar9 = (undefined1 *)((ulong)puVar9 & (ulong)unaff_x22);
            }
            else if (puVar11 <= puVar9) {
              uVar7 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar7 = (ulong)puVar9 / (ulong)puVar11;
              }
              puVar9 = puVar9 + -(uVar7 * (long)puVar11);
            }
          } while (puVar9 == puVar17);
        }
      }
LAB_10785390c:
      func_0x00010731d8c8(&lStack_170,plVar15);
      puVar11 = auStack_118;
      func_0x000107853fe4();
      puVar10 = puStack_1c8;
      if (puStack_1c8 != (undefined1 *)0x0) {
        puVar17 = puStack_1c8 + -1;
        if (((ulong)puStack_1c8 & (ulong)puVar17) == 0) {
          unaff_x22 = (undefined1 *)((ulong)puVar17 & (ulong)puVar11);
        }
        else {
          unaff_x22 = puVar11;
          if (puStack_1c8 <= puVar11) {
            uVar7 = 0;
            if (puStack_1c8 != (undefined1 *)0x0) {
              uVar7 = (ulong)puVar11 / (ulong)puStack_1c8;
            }
            unaff_x22 = puVar11 + -(uVar7 * (long)puStack_1c8);
          }
        }
        plVar18 = *(long **)(lStack_1d0 + (long)unaff_x22 * 8);
        if (plVar18 != (long *)0x0) {
          do {
            while( true ) {
              plVar18 = (long *)*plVar18;
              if (plVar18 == (long *)0x0) goto LAB_1078539b0;
              puVar9 = (undefined1 *)plVar18[1];
              if (puVar9 != puVar11) break;
              plVar14 = plVar18 + 2;
              func_0x00010785406c(plVar14,auStack_118);
              if (((ulong)plVar14 & 1) != 0) goto LAB_107853c8c;
            }
            if (((ulong)puVar10 & (ulong)puVar17) == 0) {
              puVar9 = (undefined1 *)((ulong)puVar9 & (ulong)puVar17);
            }
            else if (puVar10 <= puVar9) {
              uVar7 = 0;
              if (puVar10 != (undefined1 *)0x0) {
                uVar7 = (ulong)puVar9 / (ulong)puVar10;
              }
              puVar9 = puVar9 + -(uVar7 * (long)puVar10);
            }
          } while (puVar9 == unaff_x22);
        }
      }
LAB_1078539b0:
      plVar18 = (long *)0xd0;
      __Znwm();
      uStack_198 = 1;
      *plVar18 = 0;
      plVar18[1] = (long)puVar11;
      plStack_1a8 = plVar18;
      pplStack_1a0 = &plStack_1c0;
      func_0x000104c2fe00(plVar18 + 2,auStack_118);
      func_0x000104c2fe00(plVar18 + 9,auStack_e0);
      func_0x000104c2fe00(plVar18 + 0x10,auStack_a8);
      plVar18[0x17] = 0;
      plVar18[0x18] = 0;
      plVar18[0x19] = 0;
      if ((puVar10 == (undefined1 *)0x0) || (fStack_1b0 * (float)puVar10 < (float)(uStack_1b8 + 1)))
      {
        uVar7 = 1;
        if ((undefined1 *)0x2 < puVar10) {
          uVar7 = (ulong)(((ulong)puVar10 & (ulong)(puVar10 + -1)) != 0);
        }
        puVar10 = (undefined1 *)(uVar7 | (long)puVar10 << 1);
        puVar17 = (undefined1 *)(long)((float)(uStack_1b8 + 1) / fStack_1b0);
        if (puVar10 <= puVar17) {
          puVar10 = puVar17;
        }
        if (puVar10 + -1 == (undefined1 *)0x0) {
          puVar10 = (undefined1 *)0x2;
        }
        else if (((ulong)puVar10 & (ulong)(puVar10 + -1)) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        puVar17 = puStack_1c8;
        if (puStack_1c8 < puVar10) {
LAB_107853a78:
          if ((ulong)puVar10 >> 0x3d != 0) {
            func_0x000104bd35f4();
LAB_107853eb0:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x107853eb4);
            (*pcVar5)();
          }
          lVar8 = (long)puVar10 << 3;
          __Znwm(lVar8);
          func_0x0001078540bc(&lStack_1d0,lVar8);
          for (puVar17 = (undefined1 *)0x0; puVar10 != puVar17; puVar17 = puVar17 + 1) {
            *(undefined8 *)(lStack_1d0 + (long)puVar17 * 8) = 0;
          }
          puStack_1c8 = puVar10;
          if (plStack_1c0 != (long *)0x0) {
            puVar9 = (undefined1 *)plStack_1c0[1];
            puVar17 = puVar10 + -1;
            uVar7 = 0;
            if (puVar10 != (undefined1 *)0x0) {
              uVar7 = (ulong)puVar9 / (ulong)puVar10;
            }
            puVar13 = puVar9;
            if (puVar10 <= puVar9) {
              puVar13 = puVar9 + -(uVar7 * (long)puVar10);
            }
            if (((ulong)puVar10 & (ulong)puVar17) == 0) {
              puVar13 = (undefined1 *)((ulong)puVar9 & (ulong)puVar17);
            }
            *(long ***)(lStack_1d0 + (long)puVar13 * 8) = &plStack_1c0;
            plVar14 = plStack_1c0;
            while (plVar12 = plVar14, plVar14 = (long *)*plVar12, plVar14 != (long *)0x0) {
              puVar9 = (undefined1 *)plVar14[1];
              if (((ulong)puVar10 & (ulong)puVar17) == 0) {
                puVar9 = (undefined1 *)((ulong)puVar9 & (ulong)puVar17);
              }
              else if (puVar10 <= puVar9) {
                uVar7 = 0;
                if (puVar10 != (undefined1 *)0x0) {
                  uVar7 = (ulong)puVar9 / (ulong)puVar10;
                }
                puVar9 = puVar9 + -(uVar7 * (long)puVar10);
              }
              if (puVar9 != puVar13) {
                if (*(long *)(lStack_1d0 + (long)puVar9 * 8) == 0) {
                  *(long **)(lStack_1d0 + (long)puVar9 * 8) = plVar12;
                  puVar13 = puVar9;
                }
                else {
                  *plVar12 = *plVar14;
                  *plVar14 = **(long **)(lStack_1d0 + (long)puVar9 * 8);
                  **(undefined8 **)(lStack_1d0 + (long)puVar9 * 8) = plVar14;
                  plVar14 = plVar12;
                }
              }
            }
          }
        }
        else if (puVar10 < puStack_1c8) {
          puVar9 = (undefined1 *)(long)((float)uStack_1b8 / fStack_1b0);
          if ((puStack_1c8 < (undefined1 *)0x3) ||
             (((ulong)puStack_1c8 & (ulong)(puStack_1c8 + -1)) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((undefined1 *)0x1 < puVar9) {
            puVar9 = (undefined1 *)(1L << (-LZCOUNT(puVar9 + -1) & 0x3fU));
          }
          if (puVar10 <= puVar9) {
            puVar10 = puVar9;
          }
          if (puVar10 < puVar17) {
            if (puVar10 != (undefined1 *)0x0) goto LAB_107853a78;
            func_0x0001078540bc(&lStack_1d0,0);
            puStack_1c8 = (undefined1 *)0x0;
          }
        }
        puVar10 = puStack_1c8;
        if (((ulong)puStack_1c8 & (ulong)(puStack_1c8 + -1)) == 0) {
          unaff_x22 = (undefined1 *)((ulong)(puStack_1c8 + -1) & (ulong)puVar11);
        }
        else {
          unaff_x22 = puVar11;
          if (puStack_1c8 <= puVar11) {
            uVar7 = 0;
            if (puStack_1c8 != (undefined1 *)0x0) {
              uVar7 = (ulong)puVar11 / (ulong)puStack_1c8;
            }
            unaff_x22 = puVar11 + -(uVar7 * (long)puStack_1c8);
          }
        }
      }
      plVar14 = *(long **)(lStack_1d0 + (long)unaff_x22 * 8);
      if (plVar14 == (long *)0x0) {
        *plVar18 = (long)plStack_1c0;
        *(long ***)(lStack_1d0 + (long)unaff_x22 * 8) = &plStack_1c0;
        plStack_1c0 = plVar18;
        if (*plVar18 != 0) {
          puVar11 = *(undefined1 **)(*plVar18 + 8);
          if (((ulong)puVar10 & (ulong)(puVar10 + -1)) == 0) {
            puVar11 = (undefined1 *)((ulong)puVar11 & (ulong)(puVar10 + -1));
          }
          else if (puVar10 <= puVar11) {
            uVar7 = 0;
            if (puVar10 != (undefined1 *)0x0) {
              uVar7 = (ulong)puVar11 / (ulong)puVar10;
            }
            puVar11 = puVar11 + -(uVar7 * (long)puVar10);
          }
          *(long **)(lStack_1d0 + (long)puVar11 * 8) = plVar18;
        }
      }
      else {
        *plVar18 = *plVar14;
        *plVar14 = (long)plVar18;
      }
      plStack_1a8 = (long *)0x0;
      uStack_1b8 = uStack_1b8 + 1;
      func_0x0001078540d4(&plStack_1a8);
LAB_107853c8c:
      plVar14 = &lStack_170;
      func_0x00010731d8a0(plVar18 + 0x17,plVar14,1);
      func_0x00010731de40(&lStack_170);
LAB_107853ca4:
      func_0x000107854140(auStack_118);
    }
    if ((int)*plVar15 == 4) {
      if (*(char *)(lStack_200 + 0x140) == '\x01') {
        func_0x000107261974(lStack_200 + 0x108);
        func_0x00010724ef84(auStack_118);
        lStack_170 = 0;
        lStack_168 = 0;
        func_0x00010726acf0(&lStack_170);
        func_0x000107854524();
        goto LAB_107853d24;
      }
    }
    else if (((int)*plVar15 == 3) && (*(char *)(lStack_200 + 0x180) == '\x01')) {
      func_0x000107261974(lStack_200 + 0x148);
      func_0x00010724ef84(auStack_118);
      lStack_170 = 0;
      lStack_168 = 0;
      func_0x00010726acf0(&lStack_170);
      func_0x000107854524();
LAB_107853d24:
      func_0x00010726b264(&lStack_170);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
    }
    func_0x00010785337c(&lStack_200);
    plVar15 = plVar15 + 0xb;
  } while( true );
}



/* Entry: 107854194; end: 1078541e7;  */

long * FUN_107854194(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000107854118(plVar1 + 2);
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



/* Entry: 107854408; end: 10785445f;  */

undefined8 * FUN_107854408(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_1109e2ba0;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107854460();
    } while (extraout_w10 != 0);
  }
  param_1[3] = param_2[2];
  func_0x000107853680(param_1 + 4,param_2 + 3);
  return param_1;
}



/* Entry: 107854834; end: 107854857;  */

void FUN_107854834(void)

{
  func_0x000107854cd8();
  func_0x000107853040();
  return;
}



/* Entry: 107854fd4; end: 107854fd7;  */

void FUN_107854fd4(void)

{
  func_0x000107855094();
  func_0x0001074f8ec0();
  return;
}



/* Entry: 10785508c; end: 1078550a7;  */

void FUN_10785508c(void)

{
  return;
}



/* Entry: 1078555d8; end: 1078556af;  */

void FUN_1078555d8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x000107855618(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x40;
  }
  return;
}



/* Entry: 107855c6c; end: 107855d3b;  */

void FUN_107855c6c(long *param_1,long param_2)

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
  func_0x000107367a70();
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
      func_0x000107855d3c(lVar9 + (long)plVar3 * 0x40,lVar6);
    }
    lVar6 = lVar6 + 0x40;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 107856500; end: 10785650f;  */

void FUN_107856500(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e2e50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10785660c; end: 10785662f;  */

undefined8 * FUN_10785660c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109e2ea0;
  func_0x0001078567b4(param_2 + 1);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  return param_2;
}



/* Entry: 107856918; end: 107856943;  */

undefined8 * FUN_107856918(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e2f30;
  func_0x000107856494(param_1 + 1);
  return param_1;
}



/* Entry: 107856b08; end: 107856b57;  */

undefined8 * FUN_107856b08(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_1109e2e10;
  plVar1 = param_1 + 0x1e;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  func_0x0001074f8ec0(param_1 + 1);
  return param_1;
}



/* Entry: 107856f58; end: 107856fc7;  */

void FUN_107856f58(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  (**(code **)(**(long **)(param_2 + 0x1a0) + 0x10))(&lStack_28);
  func_0x000107856fc8(param_1,&lStack_28);
  lVar1 = lStack_28;
  lStack_28 = 0;
  if (lVar1 != 0) {
    func_0x00010785720c();
  }
  return;
}



/* Entry: 10785718c; end: 1078571a7;  */

void FUN_10785718c(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_1109e3030;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078573f0; end: 107857453;  */

void FUN_1078573f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  uVar2 = 1;
  __Znwm();
  *puVar1 = uVar2;
  uStack_28 = 0;
  func_0x000107859810(param_1 + 0x50,puVar1);
  func_0x0001078597ec(&uStack_28);
  return;
}



/* Entry: 107857e74; end: 107857e7b;  */

void FUN_107857e74(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107859a74(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x40;
    func_0x00010785902c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107858f78; end: 107858fab;  */

void FUN_107858f78(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107859a74();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x90;
    func_0x000107859604();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107859434; end: 107859507;  */

undefined8 *
FUN_107859434(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  char cStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_48);
  func_0x0001072ab9cc(&uStack_60,param_3);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[2] = uStack_38;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (cStack_50 == '\x01') {
    param_1[4] = uStack_58;
    param_1[3] = uStack_60;
    uStack_60 = 0;
    uStack_58 = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  func_0x000107277f30(param_1 + 6,param_4);
  func_0x000107279298(&uStack_60);
  func_0x000107859a34();
  return param_1;
}



/* Entry: 107859728; end: 1078597d3;  */

long FUN_107859728(long param_1)

{
  func_0x000107859750(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x0001078597d4(param_1,0);
  return param_1;
}



/* Entry: 107859910; end: 10785997b;  */

long * FUN_107859910(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107859788(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 107859ddc; end: 107859f63;  */

/* WARNING: Possible PIC construction at 0x000107859e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107859e5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107859e70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107859e60) */
/* WARNING: Removing unreachable block (ram,0x000107859e2c) */
/* WARNING: Removing unreachable block (ram,0x000107859e74) */
/* WARNING: Removing unreachable block (ram,0x000107859ef4) */
/* WARNING: Removing unreachable block (ram,0x000107859f0c) */
/* WARNING: Removing unreachable block (ram,0x000107859f1c) */
/* WARNING: Removing unreachable block (ram,0x000107859f2c) */
/* WARNING: Removing unreachable block (ram,0x000107859f60) */
/* WARNING: Removing unreachable block (ram,0x000107859ee4) */
/* WARNING: Removing unreachable block (ram,0x00010785a7ec) */

void FUN_107859ddc(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_1e0 [32];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [88];
  
  func_0x00010785a7a0();
  lVar1 = *param_2;
  lVar2 = param_2[1];
  func_0x00010688cca4(auStack_a8,param_3);
  func_0x000107859ffc(auStack_1e0,lVar1,lVar1 + lVar2,auStack_a8);
  puVar3 = auStack_88;
  func_0x000107859f98();
  *(undefined8 *)(puVar3 + 0x28) = uStack_1b8;
  *(undefined8 *)(puVar3 + 0x20) = uStack_1c0;
  *(undefined8 *)(puVar3 + 0x38) = uStack_1a8;
  *(undefined8 *)(puVar3 + 0x30) = uStack_1b0;
  puVar3[0x40] = uStack_1a0;
  return;
}



/* Entry: 10785a23c; end: 10785a243;  */

/* WARNING: Possible PIC construction at 0x00010785a2e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010785a2ec) */
/* WARNING: Removing unreachable block (ram,0x00010785a30c) */
/* WARNING: Removing unreachable block (ram,0x00010785a2fc) */
/* WARNING: Removing unreachable block (ram,0x00010785a314) */
/* WARNING: Removing unreachable block (ram,0x00010785a318) */
/* WARNING: Removing unreachable block (ram,0x00010785a320) */
/* WARNING: Removing unreachable block (ram,0x00010785a338) */
/* WARNING: Removing unreachable block (ram,0x00010785a330) */
/* WARNING: Removing unreachable block (ram,0x00010785a304) */
/* WARNING: Removing unreachable block (ram,0x00010785a33c) */
/* WARNING: Removing unreachable block (ram,0x00010785a360) */
/* WARNING: Removing unreachable block (ram,0x00010785a374) */
/* WARNING: Removing unreachable block (ram,0x00010785a348) */

char * FUN_10785a23c(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char acStack_50 [32];
  
  pcVar1 = (char *)*param_1;
  pcVar2 = acStack_50;
  pcVar4 = acStack_50;
  func_0x00010785a7a0();
  func_0x00010688d7f0();
  func_0x00010785a824();
  while ((pcVar2 != pcVar1 &&
         (puVar3 = pcVar4, func_0x00010688d198(pcVar4,(long)*pcVar2), ((ulong)puVar3 & 1) == 0))) {
    pcVar2 = pcVar2 + 1;
  }
  return pcVar2;
}



/* Entry: 10785a4f8; end: 10785a51b;  */

undefined8 FUN_10785a4f8(undefined8 param_1)

{
  func_0x00010785a51c();
  return param_1;
}



/* Entry: 10785a92c; end: 10785a937;  */

undefined1 * FUN_10785a92c(long param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  long extraout_x9;
  undefined1 *puStack_78;
  undefined1 auStack_48 [40];
  
  puVar1 = (undefined1 *)(param_1 + 0x48);
  uVar2 = 10000;
  func_0x00010785c114();
  if ((ulong)(extraout_x9 >> 4) < uVar2) {
    if (uVar2 >> 0x3c != 0) {
      func_0x00010785b34c();
      func_0x00010785c098();
      func_0x00010785c018();
      puStack_78 = puVar1;
      func_0x00010785b1d8(&puStack_78);
      return puVar1;
    }
    puVar1 = auStack_48;
    func_0x00010785b358(puVar1);
    func_0x00010785c0c8();
    func_0x00010785c098();
  }
  return puVar1;
}



/* Entry: 10785aec8; end: 10785aecf;  */

void FUN_10785aec8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010785c08c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x0001000df524();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10785b258; end: 10785b2d3;  */

long FUN_10785b258(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  func_0x00010785c0f4();
  func_0x00010785b2d4();
  func_0x00010785b358(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 4,unaff_x19 + 2);
  uVar2 = *unaff_x20;
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar2;
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  puStack_38 = puStack_38 + 2;
  func_0x00010785c0c8();
  lVar1 = unaff_x19[1];
  func_0x00010785c098();
  return lVar1;
}



/* Entry: 10785b414; end: 10785b47b;  */

void FUN_10785b414(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010785c08c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x0001000df524();
  }
  return;
}



/* Entry: 10785b6e0; end: 10785b703;  */

void FUN_10785b6e0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  puVar1[2] = param_2[2];
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 10785b8d8; end: 10785b90b;  */

void FUN_10785b8d8(void)

{
  func_0x00010785b8f0();
  return;
}



/* Entry: 10785beb4; end: 10785beeb;  */

long FUN_10785beb4(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e3160);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10785c650; end: 10785c70f;  */

void FUN_10785c650(double param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_2;
  func_0x00010785c7cc(param_2,param_5);
  if ((int)lVar2 != 0) {
    for (lVar2 = 0x120; lVar2 != 0x1e0; lVar2 = lVar2 + 0x20) {
      lVar3 = 0;
      lVar1 = param_3;
      for (lVar4 = param_4 << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        func_0x00010785c930(param_2 + lVar2,lVar1);
        if (0.0 <= param_1) {
          lVar3 = lVar3 + 1;
        }
        lVar1 = lVar1 + 0x20;
      }
      if (lVar3 == 0) {
        return;
      }
    }
  }
  return;
}



/* Entry: 10785c9f4; end: 10785cae3;  */

double FUN_10785c9f4(double *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *param_1;
  dVar1 = (double)NEON_fminnm(dVar2,0x40554345b1a549d7);
  if (dVar1 <= -85.0511287798066) {
    dVar1 = -85.0511287798066;
  }
  func_0x00010785d32c(dVar1,0x3f91df46a2529d39);
  dVar1 = param_1[1];
  _tan((dVar2 * 3.141592653589793) / 360.0 + 0.7853981633974483);
  _log();
  return (dVar1 + 180.0) / 360.0;
}



/* Entry: 10785cdd4; end: 10785ce47;  */

void FUN_10785cdd4(double param_1,double param_2,double param_3,long param_4,double *param_5,
                  double *param_6)

{
  double dVar1;
  
  func_0x00010785cdbc();
  dVar1 = -*(double *)(param_4 + 0x28);
  _atan2(dVar1,*(undefined8 *)(param_4 + 0x20));
  *param_6 = dVar1;
  dVar1 = SQRT(param_2 * param_2 + param_1 * param_1);
  _atan2(dVar1,-param_3);
  *param_5 = dVar1;
  return;
}



/* Entry: 10785d0b4; end: 10785d0eb;  */

void FUN_10785d0b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  func_0x00010785d340();
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3;
  if ((*(byte *)(param_4 + 3) & 1) == 0) {
    *(undefined1 *)(param_4 + 3) = 1;
  }
  return;
}



/* Entry: 10785d4f8; end: 10785d537;  */

void FUN_10785d4f8(void)

{
  long *unaff_x20;
  
  func_0x00010785dc34();
  func_0x00010785dd18(*(undefined8 *)(*unaff_x20 + 0x20));
  func_0x00010785dc70();
  func_0x00010785dd7c();
  return;
}



/* Entry: 10785d838; end: 10785d887;  */

void FUN_10785d838(void)

{
  func_0x00010785dcc8();
  func_0x00010785dc84();
  func_0x00010785dc70();
  func_0x00010785dd6c();
  func_0x00010785dd98();
  func_0x00010785dcf8();
  return;
}



/* Entry: 10785dab4; end: 10785db37;  */

void FUN_10785dab4(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  lStack_40 = 0;
  uStack_30 = 0x3f800000;
  __ZNSt3__15mutex4lockEv(param_1 + 7);
  func_0x00010785db38(param_1 + 2,&uStack_50);
  func_0x00010785dd24();
  for (plVar1 = (long *)lStack_40; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,plVar1 + 2);
  }
  func_0x0001005d0538(&uStack_50);
  return;
}



/* Entry: 10785e3b0; end: 10785e40b;  */

undefined8 FUN_10785e3b0(undefined8 param_1,long param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x0001073ca0ec(&uStack_28,param_2 + 0xc);
  func_0x0001073ca0ec(&uStack_28,param_2);
  func_0x0001073ca0ec(&uStack_28,param_2 + 4);
  func_0x0001073ca0ec(&uStack_28,param_2 + 8);
  return uStack_28;
}



/* Entry: 10785e7b8; end: 10785e7ef;  */

void FUN_10785e7b8(undefined8 param_1,undefined1 param_2)

{
  undefined1 uStack_11;
  
  uStack_11 = param_2;
  FUN_107867678(param_1,&uStack_11);
  return;
}



/* Entry: 10785eb44; end: 10785eb4f;  */

void FUN_10785eb44(long param_1)

{
  undefined1 uStack_11;
  
  *(undefined1 *)(param_1 + 0xbe0) = 1;
  if ((*(int *)(param_1 + 0xbe4) == 0) && (*(char *)(param_1 + 0xbe0) == '\x01')) {
    *(undefined1 *)(param_1 + 0xbe0) = 0;
    func_0x000107865840(param_1,&uStack_11);
    return;
  }
  return;
}



/* Entry: 10785eeac; end: 10785f023;  */

uint FUN_10785eeac(long param_1)

{
  char in_NG;
  char in_OV;
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x11;
  
  func_0x000107868d20();
  uVar3 = extraout_x11;
  if (in_NG == in_OV) {
    uVar3 = extraout_x8;
  }
  func_0x000107868f98(uVar3);
  if ((param_1 == 0) || (*(int *)(param_1 + 0x30) != 0)) {
    uVar1 = 0;
    iVar4 = 0;
  }
  else {
    puVar2 = (undefined8 *)(param_1 + 0x20);
    func_0x000107868658();
    uVar3 = *puVar2;
    func_0x00010724e3c8(uVar3);
    uVar1 = (uint)uVar3;
    iVar4 = 1;
  }
  return uVar1 | iVar4 << 8;
}



/* Entry: 107864d5c; end: 107864dd3;  */

void FUN_107864d5c(void)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w10;
  ulong unaff_x20;
  
  func_0x000107868f7c();
  func_0x00010786912c();
  func_0x000107869274();
  func_0x000107869014();
  func_0x000107869174();
  func_0x000107866240();
  func_0x0001078690b4();
  func_0x000107869158();
  if ((unaff_x20 & 1) == 0) {
    func_0x0001078690c0();
    lVar1 = extraout_x8_00;
  }
  else {
    func_0x00010786921c();
    lVar1 = extraout_x8;
  }
  if (lVar1 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10 != 0);
  }
  func_0x0001078690a8();
  func_0x0001078692c0();
  func_0x000107869150();
  return;
}



/* Entry: 10786565c; end: 1078656b7;  */

void FUN_10786565c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uStack_28;
  
  plVar3 = param_1;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  lVar1 = *plVar3;
  if (lRam0000000113847068 != 0) {
    lVar1 = lRam0000000113847068;
  }
  func_0x0001078656b8(&uStack_28,lVar1,param_1);
  uVar2 = uStack_28;
  uStack_28 = 0;
  func_0x0001078675d8(param_1 + 0x17b,uVar2);
  func_0x0001078675b4(&uStack_28);
  return;
}



/* Entry: 107865980; end: 107865e13;  */

long *** FUN_107865980(long param_1,long **param_2)

{
  uint uVar1;
  long **pplVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long ***extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long **pplVar9;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long ***ppplVar10;
  long ***extraout_x9;
  ulong uVar11;
  ulong extraout_x9_00;
  long *plVar12;
  uint uVar13;
  long *extraout_x10;
  long *plVar14;
  long ***ppplVar15;
  long ***ppplVar16;
  long ***extraout_x11;
  long **pplVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long **pplVar21;
  long ***ppplVar22;
  long *plVar23;
  long ***unaff_x23;
  uint uVar24;
  long ***ppplVar25;
  long **pplStack_e8;
  undefined1 uStack_e0;
  long **pplStack_d8;
  long **pplStack_d0;
  undefined1 uStack_c8;
  undefined4 uStack_c7;
  undefined3 uStack_c3;
  long *plStack_c0;
  long **pplStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long **pplStack_78;
  long alStack_70 [3];
  undefined8 uStack_58;
  
  lVar8 = param_1;
  func_0x000107868e88();
  plVar14 = (long *)(lVar8 + 8);
  uStack_58 = extraout_x8;
  func_0x000107868fbc();
  uVar13 = *(uint *)(param_1 + 0xd8);
  ppplVar22 = (long ***)(ulong)uVar13;
  *(uint *)(param_1 + 0xd8) = uVar13 + 1;
  ppplVar25 = *(long ****)(param_1 + 0xb8);
  if (ppplVar25 != (long ***)0x0) {
    uVar7 = (long)ppplVar25 - 1;
    uVar24 = (uint)ppplVar25;
    if (((ulong)ppplVar25 & uVar7) == 0) {
      unaff_x23 = (long ***)(ulong)(uVar24 - 1 & uVar13);
    }
    else {
      unaff_x23 = ppplVar22;
      if (ppplVar25 <= ppplVar22) {
        uVar1 = 0;
        if (uVar24 != 0) {
          uVar1 = uVar13 / uVar24;
        }
        unaff_x23 = (long ***)(ulong)(uVar13 - uVar1 * uVar24);
      }
    }
    plVar23 = *(long **)(*(long *)(param_1 + 0xb0) + (long)unaff_x23 * 8);
    if (plVar23 != (long *)0x0) {
      do {
        while( true ) {
          plVar23 = (long *)*plVar23;
          if (plVar23 == (long *)0x0) goto LAB_107865a50;
          ppplVar10 = (long ***)plVar23[1];
          if (ppplVar10 != ppplVar22) break;
          if (*(uint *)(plVar23 + 2) == uVar13) goto LAB_107865cac;
        }
        if (((ulong)ppplVar25 & uVar7) == 0) {
          ppplVar10 = (long ***)((ulong)ppplVar10 & uVar7);
        }
        else if (ppplVar25 <= ppplVar10) {
          uVar11 = 0;
          if (ppplVar25 != (long ***)0x0) {
            uVar11 = (ulong)ppplVar10 / (ulong)ppplVar25;
          }
          ppplVar10 = (long ***)((long)ppplVar10 - uVar11 * (long)ppplVar25);
        }
      } while (ppplVar10 == unaff_x23);
    }
  }
LAB_107865a50:
  func_0x000107869528();
  plVar23 = (long *)(param_1 + 0xc0);
  uStack_80 = 1;
  *plVar14 = 0;
  plVar14[1] = (long)ppplVar22;
  *(uint *)(plVar14 + 2) = uVar13;
  plVar14[6] = 0;
  plStack_88 = plVar23;
  if ((ppplVar25 != (long ***)0x0) &&
     ((float)(*(long *)(param_1 + 200) + 1) <= *(float *)(param_1 + 0xd0) * (float)ppplVar25))
  goto LAB_107865c34;
  plStack_90 = plVar14;
  func_0x000107869510();
  bVar3 = (long ***)0x2 < ppplVar25;
  bVar4 = ppplVar25 == (long ***)0x3;
  func_0x0001078692d0();
  ppplVar10 = extraout_x8_00;
  if (!bVar3 || bVar4) {
    ppplVar10 = extraout_x9;
  }
  if ((long)ppplVar10 - 1U == 0) {
    ppplVar10 = (long ***)0x2;
  }
  else if (((ulong)ppplVar10 & (long)ppplVar10 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    ppplVar25 = *(long ****)(param_1 + 0xb8);
  }
  if (ppplVar25 < ppplVar10) {
LAB_107865adc:
    ppplVar25 = ppplVar10;
    func_0x000107868ccc(ppplVar10);
    func_0x000107868cb4(param_1 + 0xb0,ppplVar25);
    *(long ****)(param_1 + 0xb8) = ppplVar10;
    lVar8 = *(long *)(param_1 + 0xb0);
    for (ppplVar25 = (long ***)0x0; ppplVar10 != ppplVar25;
        ppplVar25 = (long ***)((long)ppplVar25 + 1)) {
      *(undefined8 *)(lVar8 + (long)ppplVar25 * 8) = 0;
    }
    plVar12 = (long *)*plVar23;
    ppplVar25 = ppplVar10;
    if (plVar12 != (long *)0x0) {
      ppplVar15 = (long ***)plVar12[1];
      uVar11 = (long)ppplVar10 - 1;
      uVar7 = 0;
      if (ppplVar10 != (long ***)0x0) {
        uVar7 = (ulong)ppplVar15 / (ulong)ppplVar10;
      }
      ppplVar16 = ppplVar15;
      if (ppplVar10 <= ppplVar15) {
        ppplVar16 = (long ***)((long)ppplVar15 - uVar7 * (long)ppplVar10);
      }
      if (((ulong)ppplVar10 & uVar11) == 0) {
        ppplVar16 = (long ***)((ulong)ppplVar15 & uVar11);
      }
      *(long **)(lVar8 + (long)ppplVar16 * 8) = plVar23;
      while (plVar19 = plVar12, plVar12 = (long *)*plVar19, plVar12 != (long *)0x0) {
        ppplVar15 = (long ***)plVar12[1];
        if (((ulong)ppplVar10 & uVar11) == 0) {
          ppplVar15 = (long ***)((ulong)ppplVar15 & uVar11);
        }
        else if (ppplVar10 <= ppplVar15) {
          uVar7 = 0;
          if (ppplVar10 != (long ***)0x0) {
            uVar7 = (ulong)ppplVar15 / (ulong)ppplVar10;
          }
          ppplVar15 = (long ***)((long)ppplVar15 - uVar7 * (long)ppplVar10);
        }
        if (ppplVar15 != ppplVar16) {
          if (*(long *)(lVar8 + (long)ppplVar15 * 8) == 0) {
            *(long **)(lVar8 + (long)ppplVar15 * 8) = plVar19;
            ppplVar16 = ppplVar15;
          }
          else {
            func_0x000107869374();
            lVar8 = extraout_x8_01;
            uVar11 = extraout_x9_00;
            plVar12 = extraout_x10;
            ppplVar16 = extraout_x11;
          }
        }
      }
    }
  }
  else if (ppplVar10 < ppplVar25) {
    ppplVar15 = (long ***)(long)((float)*(ulong *)(param_1 + 200) / *(float *)(param_1 + 0xd0));
    if ((ppplVar25 < (long ***)0x3) || (((ulong)ppplVar25 & (long)ppplVar25 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010786904c();
    }
    if (ppplVar10 <= ppplVar15) {
      ppplVar10 = ppplVar15;
    }
    if (ppplVar10 < ppplVar25) {
      if (ppplVar10 != (long ***)0x0) goto LAB_107865adc;
      func_0x000107868cb4(param_1 + 0xb0,0);
      *(undefined8 *)(param_1 + 0xb8) = 0;
      ppplVar25 = (long ***)0x0;
    }
    else {
      ppplVar25 = *(long ****)(param_1 + 0xb8);
    }
  }
  if (((ulong)ppplVar25 & (long)ppplVar25 - 1U) == 0) {
    unaff_x23 = (long ***)(ulong)((int)ppplVar25 - 1U & uVar13);
  }
  else {
    unaff_x23 = ppplVar22;
    if (ppplVar25 <= ppplVar22) {
      uVar7 = 0;
      if (ppplVar25 != (long ***)0x0) {
        uVar7 = (ulong)ppplVar22 / (ulong)ppplVar25;
      }
      unaff_x23 = (long ***)((long)ppplVar22 - uVar7 * (long)ppplVar25);
    }
  }
LAB_107865c34:
  lVar8 = *(long *)(param_1 + 0xb0);
  plVar12 = *(long **)(lVar8 + (long)unaff_x23 * 8);
  if (plVar12 == (long *)0x0) {
    *plVar14 = *plVar23;
    *plVar23 = (long)plVar14;
    *(long **)(lVar8 + (long)unaff_x23 * 8) = plVar23;
    if (*plVar14 != 0) {
      ppplVar10 = *(long ****)(*plVar14 + 8);
      if (((ulong)ppplVar25 & (long)ppplVar25 - 1U) == 0) {
        ppplVar10 = (long ***)((ulong)ppplVar10 & (long)ppplVar25 - 1U);
      }
      else if (ppplVar25 <= ppplVar10) {
        uVar7 = 0;
        if (ppplVar25 != (long ***)0x0) {
          uVar7 = (ulong)ppplVar10 / (ulong)ppplVar25;
        }
        ppplVar10 = (long ***)((long)ppplVar10 - uVar7 * (long)ppplVar25);
      }
      *(long **)(lVar8 + (long)ppplVar10 * 8) = plVar14;
    }
  }
  else {
    *plVar14 = *plVar12;
    *plVar12 = (long)plVar14;
  }
  plStack_90 = (long *)0x0;
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  func_0x000107868ce8(&plStack_90);
  plVar23 = plVar14;
LAB_107865cac:
  func_0x000107868c5c(&plStack_90);
  pplVar17 = (long **)(plVar23 + 3);
  uVar5 = pplVar17 == &plStack_90;
  if (!(bool)uVar5) {
    pplVar9 = (long **)plVar23[6];
    if (pplStack_78 == &plStack_90) {
      uVar5 = pplVar9 == pplVar17;
      param_2 = pplVar17;
      if ((bool)uVar5) {
        func_0x00010786958c();
        (*extraout_x8_03)();
        func_0x000107869138(pplStack_78);
        pplStack_78 = (long **)0x0;
        func_0x00010786958c(plVar23[6]);
        (*extraout_x8_04)();
        func_0x000107869138(plVar23[6]);
        plVar23[6] = 0;
        pplStack_78 = &plStack_90;
        (**(code **)(alStack_70[0] + 0x18))(alStack_70);
        (**(code **)(alStack_70[0] + 0x20))(alStack_70);
      }
      else {
        func_0x00010786958c();
        (*extraout_x8_02)();
        func_0x000107869138(pplStack_78);
        pplStack_78 = (long **)plVar23[6];
      }
      plVar23[6] = (long)pplVar17;
    }
    else {
      uVar5 = pplVar9 == pplVar17;
      if ((bool)uVar5) {
        param_2 = &plStack_90;
        (*(code *)(*pplVar9)[3])(pplVar9);
        func_0x000107869138(plVar23[6]);
        plVar23[6] = (long)pplStack_78;
        pplStack_78 = &plStack_90;
      }
      else {
        plVar23[6] = (long)pplStack_78;
        pplStack_78 = pplVar9;
      }
    }
  }
  pplVar17 = &plStack_90;
  func_0x0001074115f8();
  func_0x0001078692b8();
  func_0x000107868d90(uStack_58);
  if ((bool)uVar5) {
    return ppplVar22;
  }
  ___stack_chk_fail();
  pplVar9 = &plStack_90;
  func_0x000107868ce8();
  func_0x0001078692b8();
  func_0x00010786906c();
  puStack_a8 = &DAT_107865e14;
  pplStack_e8 = pplVar9 + 1;
  uStack_e0 = 1;
  plStack_c0 = plVar23;
  pplStack_b8 = pplVar17;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107279a5c();
  plVar14 = pplVar9[0x17];
  if ((plVar14 != (long *)0x0) && (plVar23 = pplVar9[0x19], plVar23 != (long *)0x0)) {
    plVar12 = (long *)((ulong)param_2 & 0xffffffff);
    uVar7 = (long)plVar14 - 1;
    uVar13 = (uint)plVar14;
    uVar24 = (uint)param_2;
    if (((ulong)plVar14 & uVar7) == 0) {
      plVar19 = (long *)((ulong)(uVar13 - 1) & (ulong)plVar12);
    }
    else {
      plVar19 = plVar12;
      if (plVar14 <= plVar12) {
        uVar1 = 0;
        if (uVar13 != 0) {
          uVar1 = uVar24 / uVar13;
        }
        plVar19 = (long *)(ulong)(uVar24 - uVar1 * uVar13);
      }
    }
    plVar18 = pplVar9[0x16];
    pplVar17 = (long **)plVar18[(long)plVar19];
    if (pplVar17 != (long **)0x0) {
      do {
        while( true ) {
          pplVar17 = (long **)*pplVar17;
          if (pplVar17 == (long **)0x0) goto code_r0x000107865fec;
          plVar20 = pplVar17[1];
          if (plVar20 != plVar12) break;
          if (*(uint *)(pplVar17 + 2) == uVar24) {
            plVar19 = *pplVar17;
            if (((ulong)plVar14 & uVar7) == 0) {
              plVar12 = (long *)(uVar7 & (ulong)plVar12);
            }
            else if (plVar14 <= plVar12) {
              uVar11 = 0;
              if (plVar14 != (long *)0x0) {
                uVar11 = (ulong)plVar12 / (ulong)plVar14;
              }
              plVar12 = (long *)((long)plVar12 - uVar11 * (long)plVar14);
            }
            pplVar2 = (long **)plVar18[(long)plVar12];
            do {
              pplVar21 = pplVar2;
              pplVar2 = (long **)*pplVar21;
            } while ((long **)*pplVar21 != pplVar17);
            pplStack_d0 = pplVar9 + 0x18;
            if (pplVar21 == pplStack_d0) {
code_r0x000107865f4c:
              if (plVar19 == (long *)0x0) {
code_r0x000107865f80:
                plVar18[(long)plVar12] = 0;
                plVar19 = *pplVar17;
                goto code_r0x000107865f88;
              }
              plVar20 = (long *)plVar19[1];
              if (((ulong)plVar14 & uVar7) == 0) {
                plVar6 = (long *)((ulong)plVar20 & uVar7);
              }
              else {
                plVar6 = plVar20;
                if (plVar14 <= plVar20) {
                  uVar11 = 0;
                  if (plVar14 != (long *)0x0) {
                    uVar11 = (ulong)plVar20 / (ulong)plVar14;
                  }
                  plVar6 = (long *)((long)plVar20 - uVar11 * (long)plVar14);
                }
              }
              if (plVar6 != plVar12) goto code_r0x000107865f80;
code_r0x000107865f90:
              if (((ulong)plVar14 & uVar7) == 0) {
                plVar20 = (long *)((ulong)plVar20 & uVar7);
              }
              else if (plVar14 <= plVar20) {
                uVar7 = 0;
                if (plVar14 != (long *)0x0) {
                  uVar7 = (ulong)plVar20 / (ulong)plVar14;
                }
                plVar20 = (long *)((long)plVar20 - uVar7 * (long)plVar14);
              }
              if (plVar20 != plVar12) {
                plVar18[(long)plVar20] = (long)pplVar21;
                plVar19 = *pplVar17;
              }
            }
            else {
              plVar20 = pplVar21[1];
              if (((ulong)plVar14 & uVar7) == 0) {
                plVar20 = (long *)((ulong)plVar20 & uVar7);
              }
              else if (plVar14 <= plVar20) {
                uVar11 = 0;
                if (plVar14 != (long *)0x0) {
                  uVar11 = (ulong)plVar20 / (ulong)plVar14;
                }
                plVar20 = (long *)((long)plVar20 - uVar11 * (long)plVar14);
              }
              if (plVar20 != plVar12) goto code_r0x000107865f4c;
code_r0x000107865f88:
              if (plVar19 != (long *)0x0) {
                plVar20 = (long *)plVar19[1];
                goto code_r0x000107865f90;
              }
            }
            *pplVar21 = plVar19;
            *pplVar17 = (long *)0x0;
            pplVar9[0x19] = (long *)((long)plVar23 + -1);
            uStack_c8 = 1;
            uStack_c7 = 0;
            uStack_c3 = 0;
            pplStack_d8 = pplVar17;
            func_0x000107868ce8(&pplStack_d8);
            goto code_r0x000107865fec;
          }
        }
        if (((ulong)plVar14 & uVar7) == 0) {
          plVar20 = (long *)((ulong)plVar20 & uVar7);
        }
        else if (plVar14 <= plVar20) {
          uVar11 = 0;
          if (plVar14 != (long *)0x0) {
            uVar11 = (ulong)plVar20 / (ulong)plVar14;
          }
          plVar20 = (long *)((long)plVar20 - uVar11 * (long)plVar14);
        }
      } while (plVar20 == plVar19);
    }
  }
code_r0x000107865fec:
  ppplVar25 = &pplStack_e8;
  func_0x000107279ee0(ppplVar25);
  return ppplVar25;
}



/* Entry: 107866858; end: 1078668e7;  */

/* WARNING: Possible PIC construction at 0x000107867008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078670cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078671f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078670d0) */
/* WARNING: Removing unreachable block (ram,0x00010786710c) */
/* WARNING: Removing unreachable block (ram,0x000107867120) */
/* WARNING: Removing unreachable block (ram,0x00010786712c) */
/* WARNING: Removing unreachable block (ram,0x000107867138) */
/* WARNING: Removing unreachable block (ram,0x000107867174) */
/* WARNING: Removing unreachable block (ram,0x000107867178) */
/* WARNING: Removing unreachable block (ram,0x000107867180) */
/* WARNING: Removing unreachable block (ram,0x0001078671d8) */
/* WARNING: Removing unreachable block (ram,0x0001078671a4) */
/* WARNING: Removing unreachable block (ram,0x0001078671a8) */
/* WARNING: Removing unreachable block (ram,0x0001078671b0) */
/* WARNING: Removing unreachable block (ram,0x0001078671b8) */
/* WARNING: Removing unreachable block (ram,0x0001078671c4) */
/* WARNING: Removing unreachable block (ram,0x0001078671cc) */
/* WARNING: Removing unreachable block (ram,0x0001078671d4) */
/* WARNING: Removing unreachable block (ram,0x0001078671e4) */
/* WARNING: Removing unreachable block (ram,0x000107867104) */
/* WARNING: Removing unreachable block (ram,0x00010786700c) */
/* WARNING: Removing unreachable block (ram,0x00010786704c) */
/* WARNING: Removing unreachable block (ram,0x000107867060) */
/* WARNING: Removing unreachable block (ram,0x00010786706c) */
/* WARNING: Removing unreachable block (ram,0x00010786707c) */
/* WARNING: Removing unreachable block (ram,0x0001078670a8) */
/* WARNING: Removing unreachable block (ram,0x0001078670ac) */
/* WARNING: Removing unreachable block (ram,0x0001078670b4) */
/* WARNING: Removing unreachable block (ram,0x000107867038) */
/* WARNING: Removing unreachable block (ram,0x0001078671fc) */
/* WARNING: Removing unreachable block (ram,0x00010786724c) */
/* WARNING: Removing unreachable block (ram,0x000107867264) */
/* WARNING: Removing unreachable block (ram,0x000107867278) */
/* WARNING: Removing unreachable block (ram,0x0001078672b4) */
/* WARNING: Removing unreachable block (ram,0x000107867298) */
/* WARNING: Removing unreachable block (ram,0x00010786918c) */
/* WARNING: Removing unreachable block (ram,0x000107867230) */
/* WARNING: Removing unreachable block (ram,0x00010014aed4) */
/* WARNING: Removing unreachable block (ram,0x000107867380) */
/* WARNING: Removing unreachable block (ram,0x00010786735c) */
/* WARNING: Removing unreachable block (ram,0x00010786733c) */
/* WARNING: Removing unreachable block (ram,0x00010786731c) */
/* WARNING: Removing unreachable block (ram,0x0001078672f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672f4) */
/* WARNING: Removing unreachable block (ram,0x0001078672c8) */
/* WARNING: Removing unreachable block (ram,0x00010786730c) */
/* WARNING: Removing unreachable block (ram,0x00010786732c) */
/* WARNING: Removing unreachable block (ram,0x00010786734c) */
/* WARNING: Removing unreachable block (ram,0x0001078672cc) */
/* WARNING: Removing unreachable block (ram,0x0001078672f8) */
/* WARNING: Removing unreachable block (ram,0x00010786736c) */
/* WARNING: Removing unreachable block (ram,0x000107867384) */
/* WARNING: Removing unreachable block (ram,0x00010724ae4c) */
/* WARNING: Removing unreachable block (ram,0x00010724ae90) */
/* WARNING: Removing unreachable block (ram,0x00010724aea4) */
/* WARNING: Removing unreachable block (ram,0x0001078673f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672d4) */

undefined8 * FUN_107866858(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 in_ZR;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  int extraout_w11_08;
  int extraout_w11_09;
  int extraout_w11_10;
  int extraout_w11_11;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_bf8 [24];
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 ***pppuStack_bd0;
  undefined *puStack_bc8;
  long lStack_bc0;
  long lStack_bb8;
  undefined1 auStack_bb0 [24];
  undefined1 auStack_b98 [72];
  undefined4 uStack_b50;
  undefined8 auStack_b48 [9];
  long lStack_b00;
  long lStack_af8;
  undefined8 uStack_af0;
  undefined8 *puStack_ae8;
  undefined8 ***pppuStack_ae0;
  undefined *puStack_ad8;
  long lStack_ad0;
  long lStack_ac8;
  long alStack_aba [8];
  undefined1 auStack_a78 [72];
  undefined4 uStack_a30;
  long lStack_9e0;
  long lStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 ***pppuStack_9c0;
  undefined *puStack_9b8;
  undefined8 auStack_9a8 [2];
  undefined8 uStack_998;
  undefined4 uStack_950;
  long lStack_900;
  long lStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 ***pppuStack_8e0;
  undefined *puStack_8d8;
  undefined8 auStack_8c8 [2];
  undefined4 uStack_8b8;
  undefined4 uStack_870;
  long lStack_820;
  long lStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 ***pppuStack_800;
  undefined *puStack_7f8;
  undefined8 auStack_7e8 [2];
  long lStack_7d8;
  undefined4 uStack_790;
  long lStack_740;
  long lStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 ***pppuStack_720;
  code *pcStack_718;
  undefined8 auStack_708 [2];
  long lStack_6f8;
  undefined4 uStack_6b0;
  long lStack_660;
  ulong uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 ***pppuStack_640;
  undefined *puStack_638;
  undefined8 auStack_628 [2];
  undefined4 uStack_618;
  undefined4 uStack_5d0;
  long lStack_580;
  ulong uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 ***pppuStack_560;
  undefined *puStack_558;
  undefined8 auStack_548 [2];
  undefined4 uStack_538;
  undefined4 uStack_4f0;
  long lStack_4a0;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 ***pppuStack_480;
  undefined *puStack_478;
  undefined8 auStack_468 [2];
  ushort uStack_458;
  undefined4 uStack_410;
  long lStack_3c0;
  ulong uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 ***pppuStack_3a0;
  undefined *puStack_398;
  undefined8 auStack_388 [2];
  ushort uStack_378;
  undefined4 uStack_330;
  long lStack_2e0;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 ***pppuStack_2c0;
  undefined *puStack_2b8;
  undefined8 auStack_2a8 [2];
  undefined1 uStack_298;
  undefined4 uStack_250;
  long lStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 auStack_1c8 [2];
  byte bStack_1b8;
  undefined4 uStack_170;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined8 auStack_d8 [2];
  undefined1 uStack_c8;
  undefined4 uStack_80;
  
  func_0x000107868d78();
  func_0x000107869368();
  uStack_c8 = (undefined1)param_2;
  if (extraout_x9 != 0) {
    do {
      func_0x000107868ef4();
      uStack_c8 = (undefined1)param_2;
    } while (extraout_w11 != 0);
  }
  func_0x0001078693e8();
  func_0x00010724e3c8();
  uStack_80 = 0;
  func_0x000107868f10();
  func_0x000107868e1c(*(undefined8 *)(unaff_x21 + 0x18));
  func_0x0001078690ec();
  func_0x0001078690e4();
  puVar6 = auStack_d8;
  func_0x00010724e558(puVar6);
  func_0x000107868d60();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107868f1c();
    func_0x0001078690e4();
    puVar6 = auStack_d8;
    func_0x00010724e558();
    func_0x00010786906c();
    puStack_e8 = &DAT_1078668e8;
    puStack_f0 = &stack0xfffffffffffffff0;
    func_0x000107868e88();
    func_0x0001078693dc(*puVar6);
    plVar7 = extraout_x8_00;
    if (extraout_x9_00 != 0) {
      do {
        func_0x000107868ef4();
        plVar7 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    lVar11 = *plVar7;
    uVar1 = *(undefined8 *)(unaff_x21 + 0xb0);
    uVar2 = *(undefined8 *)(unaff_x21 + 0xb8);
    func_0x0001078692b0();
    bVar3 = *(byte *)(unaff_x21 + 0xa8);
    uVar8 = (ulong)bVar3;
    func_0x00010786933c();
    uStack_170 = 1;
    bStack_1b8 = bVar3;
    func_0x000107868f10();
    func_0x000107868e1c(*(undefined8 *)(lVar11 + 0x18));
    func_0x0001078690ec();
    func_0x0001078690e4();
    puVar6 = auStack_1c8;
    func_0x000107867420(puVar6);
    func_0x000107868d90(extraout_x8);
    if ((bool)in_ZR) {
      return puVar6;
    }
    ___stack_chk_fail();
    func_0x000107868f1c();
    func_0x0001078690e4();
    puVar6 = auStack_1c8;
    func_0x000107867420();
    func_0x00010786906c();
    puStack_1d8 = &DAT_1078669b0;
    lStack_200 = lVar11;
    uStack_1f8 = uVar8;
    uStack_1f0 = uVar2;
    uStack_1e8 = uVar1;
    ppuStack_1e0 = &puStack_f0;
    func_0x000107868d78();
    func_0x000107869368();
    uStack_298 = SUB81(puVar6,0);
    if (extraout_x9_01 != 0) {
      do {
        func_0x000107868ef4();
        uStack_298 = SUB81(puVar6,0);
      } while (extraout_w11_01 != 0);
    }
    func_0x0001078693e8();
    func_0x00010740f2f8();
    uStack_250 = 2;
    func_0x000107868f10();
    func_0x000107868e1c(*(undefined8 *)(uVar8 + 0x18));
    func_0x0001078690ec();
    func_0x0001078690e4();
    puVar6 = auStack_2a8;
    func_0x00010740f32c(puVar6);
    func_0x000107868d60();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107868f1c();
      func_0x0001078690e4();
      func_0x00010740f32c(auStack_2a8);
      func_0x00010786906c();
      puStack_2b8 = &DAT_107866a44;
      lStack_2e0 = lVar11;
      uStack_2d8 = uVar8;
      uStack_2d0 = uVar2;
      uStack_2c8 = uVar1;
      pppuStack_2c0 = &ppuStack_1e0;
      func_0x000107868d78();
      func_0x0001078693dc();
      if (extraout_x9_02 != 0) {
        do {
          func_0x000107868ef4();
        } while (extraout_w11_02 != 0);
      }
      func_0x000107868fa4();
      func_0x0001078692b0();
      uVar4 = *(ushort *)(uVar8 + 0xa8);
      func_0x00010786933c();
      uStack_330 = 3;
      uStack_378 = uVar4;
      func_0x000107868f10();
      func_0x000107868e1c(*(undefined8 *)(lVar11 + 0x18));
      func_0x0001078690ec();
      func_0x0001078690e4();
      puVar6 = auStack_388;
      func_0x000107867444(puVar6);
      func_0x000107868d60();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000107868f1c();
        func_0x0001078690e4();
        func_0x000107867444(auStack_388);
        func_0x00010786906c();
        puStack_398 = &DAT_107866ae0;
        lStack_3c0 = lVar11;
        uStack_3b8 = (ulong)uVar4;
        uStack_3b0 = uVar2;
        uStack_3a8 = uVar1;
        pppuStack_3a0 = &pppuStack_2c0;
        func_0x000107868d78();
        func_0x0001078693dc();
        if (extraout_x9_03 != 0) {
          do {
            func_0x000107868ef4();
          } while (extraout_w11_03 != 0);
        }
        func_0x000107868fa4();
        func_0x0001078692b0();
        uVar4 = *(ushort *)((ulong)uVar4 + 0xa8);
        uVar8 = (ulong)uVar4;
        func_0x00010786933c();
        uStack_410 = 4;
        uStack_458 = uVar4;
        func_0x000107868f10();
        func_0x000107868e1c(*(undefined8 *)(lVar11 + 0x18));
        func_0x0001078690ec();
        func_0x0001078690e4();
        puVar6 = auStack_468;
        func_0x000107867468(puVar6);
        func_0x000107868d60();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107868f1c();
          func_0x0001078690e4();
          puVar6 = auStack_468;
          func_0x000107867468();
          func_0x00010786906c();
          puStack_478 = &DAT_107866b7c;
          lStack_4a0 = lVar11;
          uStack_498 = uVar8;
          uStack_490 = uVar2;
          uStack_488 = uVar1;
          pppuStack_480 = &pppuStack_3a0;
          func_0x000107868d78();
          func_0x000107869368();
          uVar5 = SUB84(puVar6,0);
          if (extraout_x9_04 != 0) {
            do {
              func_0x000107868ef4();
              uVar5 = SUB84(puVar6,0);
            } while (extraout_w11_04 != 0);
          }
          func_0x0001078693e8();
          func_0x0001072adc24();
          uStack_4f0 = 5;
          uStack_538 = uVar5;
          func_0x000107868f10();
          func_0x000107868e1c(*(undefined8 *)(uVar8 + 0x18));
          func_0x0001078690ec();
          func_0x0001078690e4();
          puVar6 = auStack_548;
          func_0x000107289dd4(puVar6);
          func_0x000107868d60();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x000107868f1c();
            func_0x0001078690e4();
            puVar6 = auStack_548;
            func_0x000107289dd4();
            func_0x00010786906c();
            puStack_558 = &DAT_107866c10;
            lStack_580 = lVar11;
            uStack_578 = uVar8;
            uStack_570 = uVar2;
            uStack_568 = uVar1;
            pppuStack_560 = &pppuStack_480;
            func_0x000107868d78();
            func_0x000107869368();
            uVar5 = SUB84(puVar6,0);
            if (extraout_x9_05 != 0) {
              do {
                func_0x000107868ef4();
                uVar5 = SUB84(puVar6,0);
              } while (extraout_w11_05 != 0);
            }
            func_0x0001078693e8();
            func_0x0001072cd320();
            uStack_5d0 = 6;
            uStack_618 = uVar5;
            func_0x000107868f10();
            func_0x000107868e1c(*(undefined8 *)(uVar8 + 0x18));
            func_0x0001078690ec();
            func_0x0001078690e4();
            puVar6 = auStack_628;
            func_0x000107289cc8(puVar6);
            func_0x000107868d60();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x000107868f1c();
              func_0x0001078690e4();
              func_0x000107289cc8(auStack_628);
              func_0x00010786906c();
              puStack_638 = &DAT_107866ca4;
              lStack_660 = lVar11;
              uStack_658 = uVar8;
              uStack_650 = uVar2;
              uStack_648 = uVar1;
              pppuStack_640 = &pppuStack_560;
              func_0x000107868d78();
              func_0x0001078693dc();
              if (extraout_x9_06 != 0) {
                do {
                  func_0x000107868ef4();
                } while (extraout_w11_06 != 0);
              }
              func_0x000107868fa4();
              func_0x0001078692b0();
              lVar9 = *(long *)(uVar8 + 0xa8);
              func_0x00010786933c();
              uStack_6b0 = 7;
              lStack_6f8 = lVar9;
              func_0x000107868f10();
              func_0x000107868e1c(*(undefined8 *)(lVar11 + 0x18));
              func_0x0001078690ec();
              func_0x0001078690e4();
              puVar6 = auStack_708;
              func_0x00010786748c(puVar6);
              func_0x000107868d60();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x000107868f1c();
                func_0x0001078690e4();
                func_0x00010786748c(auStack_708);
                func_0x00010786906c();
                pcStack_718 = FUN_107866d40;
                lStack_740 = lVar11;
                lStack_738 = lVar9;
                uStack_730 = uVar2;
                uStack_728 = uVar1;
                pppuStack_720 = &pppuStack_640;
                func_0x000107868d78();
                func_0x0001078693dc();
                if (extraout_x9_07 != 0) {
                  do {
                    func_0x000107868ef4();
                  } while (extraout_w11_07 != 0);
                }
                func_0x000107868fa4();
                func_0x0001078692b0();
                lVar9 = *(long *)(lVar9 + 0xa8);
                func_0x00010786933c();
                uStack_790 = 8;
                lStack_7d8 = lVar9;
                func_0x000107868f10();
                func_0x000107868e1c(*(undefined8 *)(lVar11 + 0x18));
                func_0x0001078690ec();
                func_0x0001078690e4();
                puVar6 = auStack_7e8;
                func_0x0001078674b0(puVar6);
                func_0x000107868d60();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x000107868f1c();
                  func_0x0001078690e4();
                  func_0x0001078674b0(auStack_7e8);
                  func_0x00010786906c();
                  puStack_7f8 = &DAT_107866ddc;
                  lStack_820 = lVar11;
                  lStack_818 = lVar9;
                  uStack_810 = uVar2;
                  uStack_808 = uVar1;
                  pppuStack_800 = &pppuStack_720;
                  func_0x000107868d78();
                  func_0x000107869368();
                  if (extraout_x9_08 != 0) {
                    do {
                      func_0x000107868ef4();
                    } while (extraout_w11_08 != 0);
                  }
                  func_0x0001078693e8();
                  func_0x00010750833c();
                  uStack_8b8 = (undefined4)param_1;
                  uStack_870 = 9;
                  func_0x000107868f10();
                  func_0x000107868e1c(*(undefined8 *)(lVar9 + 0x18));
                  func_0x0001078690ec();
                  func_0x0001078690e4();
                  puVar6 = auStack_8c8;
                  func_0x000107289e5c(puVar6);
                  func_0x000107868d60();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x000107868f1c();
                    func_0x0001078690e4();
                    func_0x000107289e5c(auStack_8c8);
                    func_0x00010786906c();
                    puStack_8d8 = &DAT_107866e70;
                    lStack_900 = lVar11;
                    lStack_8f8 = lVar9;
                    uStack_8f0 = uVar2;
                    uStack_8e8 = uVar1;
                    pppuStack_8e0 = &pppuStack_800;
                    func_0x000107868d78();
                    func_0x000107869368();
                    if (extraout_x9_09 != 0) {
                      do {
                        func_0x000107868ef4();
                      } while (extraout_w11_09 != 0);
                    }
                    func_0x0001078693e8();
                    func_0x00010740f294();
                    uStack_950 = 10;
                    uStack_998 = param_1;
                    func_0x000107868f10();
                    func_0x000107868e1c(*(undefined8 *)(lVar9 + 0x18));
                    func_0x0001078690ec();
                    func_0x0001078690e4();
                    puVar6 = auStack_9a8;
                    func_0x00010740f2d0(puVar6);
                    func_0x000107868d60();
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x000107868f1c();
                      func_0x0001078690e4();
                      func_0x00010740f2d0(auStack_9a8);
                      func_0x00010786906c();
                      puStack_9b8 = &DAT_107866f04;
                      lStack_9e0 = lVar11;
                      lStack_9d8 = lVar9;
                      uStack_9d0 = uVar2;
                      uStack_9c8 = uVar1;
                      pppuStack_9c0 = &pppuStack_8e0;
                      func_0x000107868d78();
                      lVar9 = *param_3;
                      lStack_ac8 = param_3[1];
                      plVar7 = extraout_x8_02;
                      lStack_ad0 = lVar9;
                      if (lStack_ac8 != 0) {
                        do {
                          func_0x000107868ef4();
                          plVar7 = extraout_x8_03;
                        } while (extraout_w11_10 != 0);
                      }
                      lVar10 = *plVar7;
                      uVar1 = *(undefined8 *)(lVar9 + 0xf8);
                      func_0x00010785f084(alStack_aba);
                      plVar7 = alStack_aba;
                      func_0x0001078692c8(auStack_a78);
                      uStack_a30 = 0xb;
                      func_0x00010786954c();
                      puVar6 = *(undefined8 **)(lVar10 + 0x18);
                      func_0x000107868ecc();
                      func_0x000107869290();
                      func_0x0001078693cc();
                      func_0x000107869424();
                      func_0x000107868d60();
                      if ((bool)in_ZR) {
                        return puVar6;
                      }
                      ___stack_chk_fail();
                      func_0x000107869290();
                      func_0x0001078693cc();
                      func_0x000107869424();
                      func_0x00010786906c();
                      puStack_ad8 = &DAT_107866fac;
                      lStack_b00 = lVar11;
                      lStack_af8 = lVar10;
                      uStack_af0 = uVar1;
                      puStack_ae8 = puVar6;
                      pppuStack_ae0 = &pppuStack_9c0;
                      func_0x000107868d78();
                      lVar11 = *plVar7;
                      lStack_bb8 = plVar7[1];
                      lStack_bc0 = lVar11;
                      if (lStack_bb8 != 0) {
                        do {
                          func_0x000107868ef4();
                        } while (extraout_w11_11 != 0);
                      }
                      uVar1 = *(undefined8 *)(lVar11 + 0xc0);
                      uVar2 = *(undefined8 *)(lVar11 + 200);
                      func_0x000107328418(auStack_bb0);
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                                (auStack_b98,auStack_bb0);
                      uStack_b50 = 0xc;
                      puVar6 = auStack_b48;
                      puStack_bc8 = &UNK_10786700c;
                      uStack_be0 = uVar2;
                      uStack_bd8 = uVar1;
                      pppuStack_bd0 = &pppuStack_ae0;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                                (auStack_bf8);
                      func_0x000107268798(puVar6,auStack_bf8);
                      func_0x0001078693fc();
                      return puVar6;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return puVar6;
}



/* Entry: 107866d40; end: 107866ddb;  */

/* WARNING: Possible PIC construction at 0x000107867008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078670cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078671f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078670d0) */
/* WARNING: Removing unreachable block (ram,0x00010786710c) */
/* WARNING: Removing unreachable block (ram,0x000107867120) */
/* WARNING: Removing unreachable block (ram,0x00010786712c) */
/* WARNING: Removing unreachable block (ram,0x000107867138) */
/* WARNING: Removing unreachable block (ram,0x000107867174) */
/* WARNING: Removing unreachable block (ram,0x000107867178) */
/* WARNING: Removing unreachable block (ram,0x000107867180) */
/* WARNING: Removing unreachable block (ram,0x0001078671d8) */
/* WARNING: Removing unreachable block (ram,0x0001078671a4) */
/* WARNING: Removing unreachable block (ram,0x0001078671a8) */
/* WARNING: Removing unreachable block (ram,0x0001078671b0) */
/* WARNING: Removing unreachable block (ram,0x0001078671b8) */
/* WARNING: Removing unreachable block (ram,0x0001078671c4) */
/* WARNING: Removing unreachable block (ram,0x0001078671cc) */
/* WARNING: Removing unreachable block (ram,0x0001078671d4) */
/* WARNING: Removing unreachable block (ram,0x0001078671e4) */
/* WARNING: Removing unreachable block (ram,0x000107867104) */
/* WARNING: Removing unreachable block (ram,0x00010786700c) */
/* WARNING: Removing unreachable block (ram,0x00010786704c) */
/* WARNING: Removing unreachable block (ram,0x000107867060) */
/* WARNING: Removing unreachable block (ram,0x00010786706c) */
/* WARNING: Removing unreachable block (ram,0x00010786707c) */
/* WARNING: Removing unreachable block (ram,0x0001078670a8) */
/* WARNING: Removing unreachable block (ram,0x0001078670ac) */
/* WARNING: Removing unreachable block (ram,0x0001078670b4) */
/* WARNING: Removing unreachable block (ram,0x000107867038) */
/* WARNING: Removing unreachable block (ram,0x0001078671fc) */
/* WARNING: Removing unreachable block (ram,0x00010786724c) */
/* WARNING: Removing unreachable block (ram,0x000107867264) */
/* WARNING: Removing unreachable block (ram,0x000107867278) */
/* WARNING: Removing unreachable block (ram,0x0001078672b4) */
/* WARNING: Removing unreachable block (ram,0x000107867298) */
/* WARNING: Removing unreachable block (ram,0x00010786918c) */
/* WARNING: Removing unreachable block (ram,0x000107867230) */
/* WARNING: Removing unreachable block (ram,0x00010014aed4) */
/* WARNING: Removing unreachable block (ram,0x000107867380) */
/* WARNING: Removing unreachable block (ram,0x00010786735c) */
/* WARNING: Removing unreachable block (ram,0x00010786733c) */
/* WARNING: Removing unreachable block (ram,0x00010786731c) */
/* WARNING: Removing unreachable block (ram,0x0001078672f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672f4) */
/* WARNING: Removing unreachable block (ram,0x0001078672c8) */
/* WARNING: Removing unreachable block (ram,0x00010786730c) */
/* WARNING: Removing unreachable block (ram,0x00010786732c) */
/* WARNING: Removing unreachable block (ram,0x00010786734c) */
/* WARNING: Removing unreachable block (ram,0x0001078672cc) */
/* WARNING: Removing unreachable block (ram,0x0001078672f8) */
/* WARNING: Removing unreachable block (ram,0x00010786736c) */
/* WARNING: Removing unreachable block (ram,0x000107867384) */
/* WARNING: Removing unreachable block (ram,0x00010724ae4c) */
/* WARNING: Removing unreachable block (ram,0x00010724ae90) */
/* WARNING: Removing unreachable block (ram,0x00010724aea4) */
/* WARNING: Removing unreachable block (ram,0x0001078673f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672d4) */

undefined1 * FUN_107866d40(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  long *plVar4;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  long unaff_x21;
  long lVar5;
  long unaff_x22;
  undefined1 auStack_4e8 [24];
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 ***pppuStack_4c0;
  undefined *puStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [72];
  undefined4 uStack_440;
  undefined1 auStack_438 [72];
  undefined8 ***pppuStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long alStack_3aa [8];
  undefined1 auStack_368 [72];
  undefined4 uStack_320;
  undefined1 ***pppuStack_2b0;
  undefined *puStack_2a8;
  undefined1 auStack_298 [16];
  undefined8 uStack_288;
  undefined4 uStack_240;
  undefined1 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1b8 [16];
  undefined4 uStack_1a8;
  undefined4 uStack_160;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_d8 [16];
  long lStack_c8;
  undefined4 uStack_80;
  
  func_0x000107868d78();
  func_0x0001078693dc();
  if (extraout_x9 != 0) {
    do {
      func_0x000107868ef4();
    } while (extraout_w11 != 0);
  }
  func_0x000107868fa4();
  func_0x0001078692b0();
  lVar5 = *(long *)(unaff_x21 + 0xa8);
  func_0x00010786933c();
  uStack_80 = 8;
  lStack_c8 = lVar5;
  func_0x000107868f10();
  func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x0001078690ec();
  func_0x0001078690e4();
  puVar3 = auStack_d8;
  func_0x0001078674b0(puVar3);
  func_0x000107868d60();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107868f1c();
    func_0x0001078690e4();
    func_0x0001078674b0(auStack_d8);
    func_0x00010786906c();
    puStack_e8 = &DAT_107866ddc;
    puStack_f0 = &stack0xfffffffffffffff0;
    func_0x000107868d78();
    func_0x000107869368();
    if (extraout_x9_00 != 0) {
      do {
        func_0x000107868ef4();
      } while (extraout_w11_00 != 0);
    }
    func_0x0001078693e8();
    func_0x00010750833c();
    uStack_1a8 = (undefined4)param_1;
    uStack_160 = 9;
    func_0x000107868f10();
    func_0x000107868e1c(*(undefined8 *)(lVar5 + 0x18));
    func_0x0001078690ec();
    func_0x0001078690e4();
    puVar3 = auStack_1b8;
    func_0x000107289e5c(puVar3);
    func_0x000107868d60();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107868f1c();
      func_0x0001078690e4();
      func_0x000107289e5c(auStack_1b8);
      func_0x00010786906c();
      puStack_1c8 = &DAT_107866e70;
      ppuStack_1d0 = &puStack_f0;
      func_0x000107868d78();
      func_0x000107869368();
      if (extraout_x9_01 != 0) {
        do {
          func_0x000107868ef4();
        } while (extraout_w11_01 != 0);
      }
      func_0x0001078693e8();
      func_0x00010740f294();
      uStack_240 = 10;
      uStack_288 = param_1;
      func_0x000107868f10();
      func_0x000107868e1c(*(undefined8 *)(lVar5 + 0x18));
      func_0x0001078690ec();
      func_0x0001078690e4();
      puVar3 = auStack_298;
      func_0x00010740f2d0(puVar3);
      func_0x000107868d60();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000107868f1c();
        func_0x0001078690e4();
        func_0x00010740f2d0(auStack_298);
        func_0x00010786906c();
        puStack_2a8 = &DAT_107866f04;
        pppuStack_2b0 = &ppuStack_1d0;
        func_0x000107868d78();
        uStack_3c0 = *param_3;
        lStack_3b8 = param_3[1];
        plVar4 = extraout_x8;
        if (lStack_3b8 != 0) {
          do {
            func_0x000107868ef4();
            plVar4 = extraout_x8_00;
          } while (extraout_w11_02 != 0);
        }
        lVar5 = *plVar4;
        func_0x00010785f084(alStack_3aa);
        plVar4 = alStack_3aa;
        func_0x0001078692c8(auStack_368);
        uStack_320 = 0xb;
        func_0x00010786954c();
        puVar3 = *(undefined1 **)(lVar5 + 0x18);
        func_0x000107868ecc();
        func_0x000107869290();
        func_0x0001078693cc();
        func_0x000107869424();
        func_0x000107868d60();
        if ((bool)in_ZR) {
          return puVar3;
        }
        ___stack_chk_fail();
        func_0x000107869290();
        func_0x0001078693cc();
        func_0x000107869424();
        func_0x00010786906c();
        puStack_3c8 = &DAT_107866fac;
        pppuStack_3d0 = &pppuStack_2b0;
        func_0x000107868d78();
        lVar5 = *plVar4;
        lStack_4a8 = plVar4[1];
        lStack_4b0 = lVar5;
        if (lStack_4a8 != 0) {
          do {
            func_0x000107868ef4();
          } while (extraout_w11_03 != 0);
        }
        uVar1 = *(undefined8 *)(lVar5 + 0xc0);
        uVar2 = *(undefined8 *)(lVar5 + 200);
        func_0x000107328418(auStack_4a0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_488,auStack_4a0);
        uStack_440 = 0xc;
        puVar3 = auStack_438;
        puStack_4b8 = &UNK_10786700c;
        uStack_4d0 = uVar2;
        uStack_4c8 = uVar1;
        pppuStack_4c0 = &pppuStack_3d0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_4e8);
        func_0x000107268798(puVar3,auStack_4e8);
        func_0x0001078693fc();
        return puVar3;
      }
    }
  }
  return puVar3;
}



/* Entry: 1078672b8; end: 10786753f;  */

undefined4 *
FUN_1078672b8(undefined4 *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  float fVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined8 extraout_x8;
  double dVar5;
  undefined4 uVar6;
  undefined4 *unaff_x19;
  undefined4 auStack_60 [10];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  fVar1 = *(float *)(param_2 + 9);
  if (fVar1 == 0.0) {
    uVar2 = *(undefined1 *)param_2;
    *param_1 = 6;
    *(undefined1 *)(param_1 + 2) = uVar2;
    return param_1;
  }
  if (fVar1 == 1.4013e-45) {
    dVar5 = (double)(long)*(char *)param_2;
LAB_1078672cc:
    uVar6 = 4;
  }
  else {
    if (fVar1 == 2.8026e-45) {
      dVar5 = (double)(ulong)*(byte *)param_2;
    }
    else {
      if (fVar1 == 4.2039e-45) {
        dVar5 = (double)(long)*(short *)param_2;
        goto LAB_1078672cc;
      }
      if (fVar1 == 5.60519e-45) {
        dVar5 = (double)(ulong)*(ushort *)param_2;
      }
      else {
        if (fVar1 == 7.00649e-45) {
          dVar5 = (double)(long)(int)*(float *)param_2;
          goto LAB_1078672cc;
        }
        if (fVar1 == 8.40779e-45) {
          dVar5 = (double)(ulong)(uint)*(float *)param_2;
        }
        else {
          if (fVar1 == 9.80909e-45) {
            dVar5 = *param_2;
            goto LAB_1078672cc;
          }
          if (fVar1 != 1.12104e-44) {
            if (fVar1 == 1.26117e-44) {
              dVar5 = (double)*(float *)param_2;
            }
            else {
              if (fVar1 != 1.4013e-44) {
                uVar2 = fVar1 == 1.54143e-44;
                if ((bool)uVar2) {
                  uVar4 = SUB81(auStack_60,0);
                  puVar3 = auStack_60;
                  func_0x00010724cc70(param_1,(long)param_2 + 2);
                  uStack_28 = extraout_x8;
                  func_0x000100060964(auStack_60);
                  func_0x000104c33004(param_1);
                  func_0x000104c2f714();
                  func_0x00010724cc40(uStack_28);
                  if ((bool)uVar2) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  *(undefined1 *)puVar3 = uVar4;
                  *(undefined1 *)((long)puVar3 + 1) = param_5;
                  *(undefined2 *)((long)puVar3 + 2) = 0;
                  func_0x000104c2fe00(puVar3 + 2,param_3);
                  *(undefined1 *)(puVar3 + 0x10) = 0;
                  *(undefined1 *)(puVar3 + 0x1e) = 0;
                  func_0x00010724af54(puVar3 + 0x20,param_4);
                  func_0x00010724afdc(puVar3 + 0x34,param_6);
                  *(undefined1 *)(puVar3 + 0x44) = 0;
                  *(undefined1 *)(puVar3 + 0x46) = 0;
                  *(undefined1 *)(puVar3 + 0x48) = 0;
                  *(undefined1 *)(puVar3 + 0x4a) = 0;
                  *(undefined1 *)(puVar3 + 0x4c) = 0;
                  *(undefined1 *)(puVar3 + 0x52) = 0;
                  *(undefined1 *)(puVar3 + 0x5c) = 0;
                  *(undefined1 *)(puVar3 + 0x6a) = 0;
                  *(undefined2 *)(puVar3 + 0x6c) = 0;
                  *(undefined8 *)(puVar3 + 0x56) = 0;
                  *(undefined8 *)(puVar3 + 0x58) = 0;
                  *(undefined8 *)(puVar3 + 0x54) = 0;
                  *(undefined1 *)(puVar3 + 0x5a) = 0;
                  *(undefined8 *)(puVar3 + 0x70) = 0;
                  *(undefined8 *)(puVar3 + 0x6e) = 0;
                  *(undefined8 *)(puVar3 + 0x74) = 0;
                  *(undefined8 *)(puVar3 + 0x72) = 0;
                  *(undefined8 *)(puVar3 + 0x78) = 0;
                  *(undefined8 *)(puVar3 + 0x76) = 0;
                  *(undefined8 *)(puVar3 + 0x7a) = 0;
                  puVar3[0x7c] = 0x3f800000;
                  return puVar3;
                }
                if (fVar1 == 1.82169e-44) {
                  func_0x00010727473c();
                  func_0x000107268370();
                  return unaff_x19;
                }
                if (fVar1 == 1.68156e-44) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                            (auStack_38);
                  func_0x000107268798(param_1,auStack_38);
                  func_0x0001078693fc();
                  return param_1;
                }
                *param_1 = 7;
                return param_1;
              }
              dVar5 = *param_2;
            }
            *param_1 = 3;
            *(double *)(param_1 + 2) = dVar5;
            return param_1;
          }
          dVar5 = *param_2;
        }
      }
    }
    uVar6 = 5;
  }
  *param_1 = uVar6;
  *(double *)(param_1 + 2) = dVar5;
  return param_1;
}



/* Entry: 107867678; end: 107867693;  */

void FUN_107867678(void)

{
  func_0x000107869164();
  func_0x000107867694();
  return;
}



/* Entry: 107867790; end: 1078677ab;  */

void FUN_107867790(void)

{
  func_0x000107869234();
  func_0x0001078677ac();
  return;
}



/* Entry: 107867c80; end: 107867cdf;  */

/* WARNING: Possible PIC construction at 0x000107867c9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107867ca0) */
/* WARNING: Removing unreachable block (ram,0x000107867cc8) */
/* WARNING: Removing unreachable block (ram,0x000107867cdc) */
/* WARNING: Removing unreachable block (ram,0x000107867cc0) */
/* WARNING: Removing unreachable block (ram,0x000107868f6c) */

void FUN_107867c80(void)

{
  func_0x000107868e58();
  func_0x0001078694bc();
  func_0x0001078694e0();
  func_0x000107867d00();
  func_0x000107869480();
  return;
}



/* Entry: 107867d98; end: 107867db3;  */

void FUN_107867d98(void)

{
  func_0x0001078692a4();
  func_0x0001078695b0();
  return;
}



/* Entry: 107867ecc; end: 107867edf;  */

void FUN_107867ecc(void)

{
  func_0x000107867f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107867ffc; end: 107868023;  */

void FUN_107867ffc(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xc0);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x88);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 1078680b8; end: 1078680d3;  */

void FUN_1078680b8(void)

{
  func_0x000107869164();
  func_0x0001078680d4();
  return;
}



/* Entry: 1078681d8; end: 107868223;  */

long FUN_1078681d8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  lVar1 = param_1;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  func_0x0001078692c8(lVar1 + 0xa8,param_3);
  *(undefined8 *)(param_1 + 0xf8) = uVar3;
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  *(undefined8 *)(param_1 + 0x108) = uVar5;
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  return param_1;
}



/* Entry: 107868344; end: 107868357;  */

void FUN_107868344(void)

{
  func_0x0001078683f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107868594; end: 107868657;  */

long FUN_107868594(long *param_1)

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
    func_0x000107867bcc();
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
        func_0x00010786942c();
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



/* Entry: 107868898; end: 1078688cf;  */

long FUN_107868898(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e37c0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1078695dc; end: 10786963b;  */

undefined8 * FUN_1078695dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  *param_1 = 0;
  uVar1 = 1;
  __Znwm(1);
  uStack_28 = 0;
  func_0x000107869664(param_1,uVar1);
  func_0x00010786963c(&uStack_28);
  return param_1;
}



/* Entry: 10786978c; end: 1078697d3;  */

void FUN_10786978c(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010786d890();
  func_0x00010726acf0();
  func_0x00010786a980(auStack_30);
  func_0x00010786dbb0();
  func_0x00010726d358();
  func_0x00010726b264(auStack_30);
  func_0x00010786970c();
  func_0x00010786da84();
  return;
}



/* Entry: 107869b14; end: 107869c4b;  */

long FUN_107869b14(void)

{
  int iVar1;
  ulong extraout_x8;
  long *unaff_x19;
  ulong unaff_x22;
  long unaff_x24;
  long unaff_x26;
  ulong unaff_x27;
  ulong uVar2;
  undefined1 auStack_90 [16];
  
  func_0x00010786dae8();
  func_0x00010786d7c0();
  func_0x00010786d8e4();
  func_0x00010786d74c();
  while( true ) {
    func_0x00010786d7f4();
    while (unaff_x27 != 0) {
      uVar2 = (unaff_x27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x27 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = unaff_x26 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & unaff_x22;
      iVar1 = (int)auStack_90;
      func_0x00010726d570(auStack_90,unaff_x24 + uVar2 * 0x50);
      if (iVar1 != 0) {
        return *unaff_x19 + uVar2;
      }
      func_0x00010786de98();
    }
    func_0x00010786d85c();
    if ((extraout_x8 & 1) != 0) break;
    func_0x00010786de8c();
  }
  return 0;
}



/* Entry: 107869fd0; end: 107869fd7;  */

bool FUN_107869fd0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x00010786c74c(lVar1);
  return lVar1 != 0;
}



/* Entry: 10786a2c0; end: 10786a317;  */

byte FUN_10786a2c0(int param_1)

{
  undefined8 *unaff_x21;
  undefined1 uStack_38;
  
  func_0x00010786d8f4();
  func_0x00010786a2a4();
  if (param_1 == 0) {
    uStack_38 = 0;
  }
  else {
    func_0x00010786a318(*unaff_x21);
    func_0x00010786dac4();
    func_0x00010786d954();
  }
  return uStack_38 & 1;
}



/* Entry: 10786a52c; end: 10786a603;  */

void FUN_10786a52c(ulong param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  
  func_0x00010786d78c();
  uStack_48 = extraout_x8;
  func_0x00010786a4e4();
  if (((param_1 & 1) == 0) && (func_0x00010786dca8(), (param_1 & 1) == 0)) {
    func_0x00010786de0c();
    uStack_c0 = 0;
    lStack_b8 = 0;
    func_0x00010786af00(&uStack_c0);
    func_0x00010786dc08();
    func_0x00010786dc58();
    func_0x00010786dc28();
    func_0x00010786dcdc();
    func_0x00010786ddfc(uStack_a0);
    func_0x00010786ddb4();
    func_0x00010786dc18();
    func_0x00010786dbe8();
    func_0x00010786dc00();
    func_0x00010786dc90();
    param_1 = lStack_b8 + 0x38;
    func_0x00010745f68c(auStack_90);
    func_0x00010786970c();
    *(ulong *)(unaff_x19 + 0x10) = param_1;
  }
  func_0x00010786d6e8(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010786dc00();
    func_0x00010786dc90();
    func_0x00010786d838();
    func_0x00010786a978();
    if (param_1 != 0) {
      func_0x00010786a954();
    }
    return;
  }
  return;
}



/* Entry: 10786a8e4; end: 10786a8eb;  */

void FUN_10786a8e4(undefined8 *param_1)

{
  ulong extraout_x8;
  long unaff_x27;
  
  param_1 = (undefined8 *)*param_1;
  func_0x00010786dae8();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x0001072a02f8(*param_1);
  func_0x00010786d8e4();
  func_0x00010786d9f0();
  func_0x00010786d74c();
  while( true ) {
    func_0x00010786d7f4();
    while (unaff_x27 != 0) {
      func_0x00010786d86c();
      func_0x000107283140();
      if ((int)param_1 != 0) {
        func_0x00010786da10();
        return;
      }
      func_0x00010786de98();
    }
    func_0x00010786d85c();
    if ((extraout_x8 & 1) != 0) break;
    func_0x00010786de8c();
  }
  return;
}



/* Entry: 10786a9d0; end: 10786aa5b;  */

void FUN_10786a9d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  func_0x00010786d71c();
  func_0x00010786dbbc();
  func_0x00010726ae20();
  puStack_40[2] = 0;
  *puStack_40 = &PTR_DAT_1109967c0;
  puStack_40[1] = 0;
  puVar1 = puStack_40 + 3;
  func_0x000107296178(puVar1,param_2);
  *(undefined4 *)(puStack_40 + 7) = 0;
  func_0x00010786d734();
  func_0x00010726b254();
  func_0x00010786d6e8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__119__shared_weak_countD2Ev(puStack_40);
  func_0x00010726b254();
  func_0x00010786d838();
  plVar3 = *(long **)(puVar2 + 0x18);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010786dd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x00010786ddcc();
  func_0x00010786dcf4();
  plVar3[9] = puVar1[2];
  return;
}



/* Entry: 10786abf8; end: 10786ac1b;  */

void FUN_10786abf8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x00010786ac1c();
  func_0x00010786da84();
  return;
}



/* Entry: 10786ad08; end: 10786ad27;  */

void FUN_10786ad08(void)

{
  func_0x00010786def8();
  func_0x00010786ad28();
  return;
}



/* Entry: 10786ae88; end: 10786ae9f;  */

undefined8 * FUN_10786ae88(long param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    pcVar1 = *(char **)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        func_0x00010786b1d8(lVar2);
      }
      lVar2 = lVar2 + 0x48;
      pcVar1 = pcVar1 + 1;
    }
    func_0x00010786ddc0();
  }
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10786b04c; end: 10786b067;  */

void FUN_10786b04c(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_1109e3880;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10786b180; end: 10786b1bb;  */

long FUN_10786b180(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x20);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 10786b3a4; end: 10786b3db;  */

long FUN_10786b3a4(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c2fe00(param_1,*param_2);
  func_0x0001078696e8(lVar1 + 0x38);
  return param_1;
}



/* Entry: 10786b5b0; end: 10786b5b7;  */

void FUN_10786b5b0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = param_1[2];
  param_1[3] = param_1[3] + -1;
  lVar3 = *param_1;
  uVar6 = *param_2;
  uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)((long)param_2 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar4 == 0) {
    uVar4 = 0;
    uVar5 = 0xfe;
  }
  else {
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) < 8;
    uVar4 = (ulong)bVar2;
    uVar5 = 0x80;
    if (!bVar2) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar5;
  *(undefined1 *)(lVar3 + ((ulong)((long)param_2 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar5;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar4;
  return;
}



/* Entry: 10786b9d4; end: 10786badb;  */

/* WARNING: Possible PIC construction at 0x00010786ba04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010786bac8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010786ba08) */
/* WARNING: Removing unreachable block (ram,0x00010786ba14) */
/* WARNING: Removing unreachable block (ram,0x00010786ba28) */
/* WARNING: Removing unreachable block (ram,0x00010786ba30) */
/* WARNING: Removing unreachable block (ram,0x00010786ba3c) */
/* WARNING: Removing unreachable block (ram,0x00010786ba44) */
/* WARNING: Removing unreachable block (ram,0x00010786ba50) */
/* WARNING: Removing unreachable block (ram,0x00010786ba58) */
/* WARNING: Removing unreachable block (ram,0x00010786ba60) */
/* WARNING: Removing unreachable block (ram,0x00010786ba80) */
/* WARNING: Removing unreachable block (ram,0x00010786ba6c) */
/* WARNING: Removing unreachable block (ram,0x00010786ba74) */
/* WARNING: Removing unreachable block (ram,0x00010786ba84) */
/* WARNING: Removing unreachable block (ram,0x00010786ba8c) */
/* WARNING: Removing unreachable block (ram,0x00010786bab4) */
/* WARNING: Removing unreachable block (ram,0x00010786babc) */
/* WARNING: Removing unreachable block (ram,0x00010786ba94) */
/* WARNING: Removing unreachable block (ram,0x00010786ba1c) */
/* WARNING: Removing unreachable block (ram,0x00010786bacc) */
/* WARNING: Removing unreachable block (ram,0x00010786bad0) */
/* WARNING: Removing unreachable block (ram,0x00010786d95c) */

void FUN_10786b9d4(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3d == 0) {
      param_2 = param_2 << 3;
      __Znwm();
    }
    else {
      func_0x000104bd35f4();
    }
  }
  uVar1 = *param_1;
  *param_1 = param_2;
  if (uVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10786bdc4; end: 10786be83;  */

long FUN_10786bdc4(long *param_1)

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
  if ((plVar6 != (long *)0x0) && (param_1[3] != 0)) {
    plVar2 = param_1;
    func_0x00010786d91c();
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
        if (plVar4 != plVar2) break;
        func_0x00010786de34();
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



/* Entry: 10786c20c; end: 10786c2bb;  */

void FUN_10786c20c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  long unaff_x20;
  undefined **ppuStack_78;
  undefined **ppuStack_58;
  
  func_0x00010786dae8();
  func_0x00010786d7b0();
  uVar1 = *param_1;
  func_0x00010786bb88(uVar1,*(undefined8 *)(unaff_x20 + 8));
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010725ffc4(uVar2);
  ppuStack_58 = &PTR_DAT_1109e3940;
  ppuStack_78 = &PTR_DAT_1109e39d0;
  func_0x000107869a4c(uVar1,uVar2,&ppuStack_58,&ppuStack_78);
  func_0x00010786dbf8();
  func_0x00010786dca0();
  func_0x00010786d6e8(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010786dbf8();
  func_0x00010786dca0();
  func_0x00010786d838();
  return;
}



/* Entry: 10786c3ac; end: 10786c3d3;  */

void FUN_10786c3ac(undefined8 param_1)

{
  func_0x00010786db18();
  func_0x00010786d924(param_1,&PTR_DAT_1109e3a40);
  func_0x00010786d80c();
  return;
}



/* Entry: 10786c550; end: 10786c57b;  */

void FUN_10786c550(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109e3af0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10786c824; end: 10786c82b;  */

void FUN_10786c824(void)

{
  return;
}



/* Entry: 10786c934; end: 10786c93f;  */

undefined ** FUN_10786c934(void)

{
  return &PTR_DAT_1109e3c50;
}



/* Entry: 10786cbc8; end: 10786cc3b;  */

void FUN_10786cbc8(void)

{
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  
  func_0x00010786db7c();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x00010786ddd4();
      func_0x00010786d9e4();
      func_0x000100061de0();
      func_0x00010786d964();
      func_0x00010786cc3c();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10786ce74; end: 10786ce87;  */

long FUN_10786ce74(undefined8 param_1,long param_2)

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



/* Entry: 10786cfb4; end: 10786cfcf;  */

void FUN_10786cfb4(void)

{
  func_0x00010786de6c();
  func_0x00010786cfd0();
  return;
}



/* Entry: 10786d254; end: 10786d27f;  */

undefined1  [16] FUN_10786d254(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  func_0x00010786d280(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10786d49c; end: 10786d4a3;  */

void FUN_10786d49c(undefined8 param_1,long param_2)

{
  func_0x00010786d840(param_1,param_2,param_2 + 0x38);
  func_0x00010786d4c0();
  return;
}



/* Entry: 10786d68c; end: 10786d6e7;  */

void FUN_10786d68c(undefined8 param_1)

{
  uint extraout_w8;
  long unaff_x27;
  
  func_0x00010786d9f0();
  func_0x00010786d74c();
  while( true ) {
    func_0x00010786d7f4();
    while (unaff_x27 != 0) {
      func_0x00010786d86c();
      func_0x000104c32db4();
      if ((int)param_1 != 0) {
        func_0x00010786da10();
        return;
      }
      func_0x00010786de98();
    }
    func_0x00010786d85c();
    if ((extraout_w8 & 1) != 0) break;
    func_0x00010786de8c();
  }
  return;
}



/* Entry: 10786e644; end: 10786e7b7;  */

/* WARNING: Possible PIC construction at 0x00010786e6c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010786e700: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010786e6cc) */
/* WARNING: Removing unreachable block (ram,0x00010786e6d8) */
/* WARNING: Removing unreachable block (ram,0x00010786e6e0) */
/* WARNING: Removing unreachable block (ram,0x00010786e704) */
/* WARNING: Removing unreachable block (ram,0x00010786e718) */
/* WARNING: Removing unreachable block (ram,0x00010786e734) */

undefined1 * FUN_10786e644(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [16];
  
  puVar2 = (undefined1 *)0x0;
  switch(*param_2) {
  case 1:
    func_0x00010786e7f0();
    uVar1 = *(ulong *)(*(long *)(param_2 + 2) + 0x18);
    break;
  case 2:
    puVar2 = auStack_40;
    func_0x00010726364c(puVar2,param_2 + 2);
    return puVar2;
  case 3:
  case 4:
  case 5:
    uVar1 = *(ulong *)(param_2 + 2);
    break;
  case 6:
    puVar2 = (undefined1 *)0x5692161d100b05e5;
    if (*(char *)(param_2 + 2) == '\0') {
      puVar2 = (undefined1 *)0x0;
    }
  case 7:
    return puVar2;
  default:
    func_0x00010786e7f0();
    uVar1 = (*(long **)(param_2 + 2))[1] - **(long **)(param_2 + 2) >> 6;
  }
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * -0x40a7b892e31b1a47;
  uVar1 = (uVar1 ^ uVar1 >> 0x1b) * -0x6b2fb644ecceee15;
  return (undefined1 *)(uVar1 ^ uVar1 >> 0x1f);
}



/* Entry: 10786ea9c; end: 10786eb67;  */

long FUN_10786ea9c(long param_1,undefined1 *param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)(*(int *)(param_2 + 8) + 1);
  func_0x00010786e9a0(dVar2,*param_2);
  dVar3 = (double)(ulong)*(uint *)(param_2 + 4);
  dVar4 = (double)NEON_ucvtf(dVar3);
  func_0x00010786ed5c();
  func_0x00010786ed54(dVar2,(dVar4 / dVar3) * 360.0 + -180.0,param_1);
  dVar3 = (double)NEON_ucvtf((ulong)*(uint *)(param_2 + 8));
  func_0x00010786e9a0(dVar3,*param_2);
  iVar1 = *(int *)(param_2 + 4);
  dVar2 = dVar3;
  func_0x00010786ed5c();
  func_0x00010786ed54(dVar3,((double)(iVar1 + 1) / dVar2) * 360.0 + -180.0,param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x20) = 1;
  return param_1;
}



/* Entry: 10786ee68; end: 10786ef03;  */

/* WARNING: Possible PIC construction at 0x00010786f0bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010786f0c0) */
/* WARNING: Removing unreachable block (ram,0x00010786f0dc) */
/* WARNING: Removing unreachable block (ram,0x00010786f358) */
/* WARNING: Removing unreachable block (ram,0x00010786f0f4) */
/* WARNING: Removing unreachable block (ram,0x00010786f100) */
/* WARNING: Removing unreachable block (ram,0x00010786f108) */
/* WARNING: Removing unreachable block (ram,0x00010786f0cc) */
/* WARNING: Removing unreachable block (ram,0x00010786f13c) */

undefined1  [16] FUN_10786ee68(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  long extraout_x8_00;
  undefined8 uVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  uint *unaff_x20;
  long lVar13;
  undefined1 *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  uint *puVar14;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 *puVar5;
  
  if (*(short *)((long)param_3 + 0x16) == 4) {
    if (1 < *param_3) {
      func_0x0001073274d0(*(undefined8 *)(param_3 + 2));
      uVar12 = param_1;
      func_0x0001073274d0(*(long *)(param_3 + 2) + 0x18);
      auVar16._8_8_ = uVar12;
      auVar16._0_8_ = param_1;
      return auVar16;
    }
    func_0x000107871318();
    puVar14 = (uint *)&UNK_10f430321;
    puVar8 = param_3;
    __ZNSt13runtime_errorC1EPKc();
  }
  else {
    func_0x000107871318();
    puVar14 = (uint *)&UNK_10f430303;
    puVar8 = param_3;
    __ZNSt13runtime_errorC1EPKc();
  }
  func_0x000107871284();
  func_0x0001078713b4();
  func_0x000107871320();
  puVar15 = &SUB_10786ef04;
  func_0x000107871338();
  puVar2 = &stack0xffffffffffffffd0;
  puVar4 = (undefined1 *)register0x00000008;
code_r0x00010786ef04:
  puVar9 = puVar8;
  puVar5 = puVar2;
  *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
  *(long *)(puVar5 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar5 + -0x28) = unaff_x21;
  *(uint **)(puVar5 + -0x20) = unaff_x20;
  *(uint **)(puVar5 + -0x18) = param_3;
  *(undefined1 **)(puVar5 + -0x10) = puVar4 + -0x10;
  *(undefined **)(puVar5 + -8) = puVar15;
  puVar8 = puVar9;
  func_0x0001078712ac();
  *(undefined8 *)(puVar5 + -0x58) = extraout_x8;
  if (*(short *)((long)puVar14 + 0x16) != 3) goto code_r0x00010786ef38;
  puVar14 = (uint *)(*(long *)(puVar14 + 2) + (ulong)*puVar14 * 0x30);
  func_0x00010787137c();
  if (puVar14 == puVar8) {
    func_0x000107871318();
    __ZNSt13runtime_errorC1EPKc();
    goto code_r0x00010786f410;
  }
  puVar1 = puVar8 + 6;
  func_0x00010787138c();
  if ((int)puVar8 != 0) {
    func_0x00010787137c();
    if (puVar14 == puVar8) {
      func_0x000107871318();
      __ZNSt13runtime_errorC1EPKc();
    }
    else {
      uVar6 = *(short *)((long)puVar8 + 0x2e) == 4;
      if ((bool)uVar6) {
        *(undefined8 *)(puVar5 + -0xd0) = 0;
        *(undefined8 *)(puVar5 + -200) = 0;
        *(undefined8 *)(puVar5 + -0xc0) = 0;
        if (puVar8[6] == 0) {
          uVar11 = 0;
        }
        else {
          func_0x000107870cac(puVar5 + -0xb0,puVar8[6],0,puVar5 + -0xc0);
          func_0x0001078714fc();
          func_0x000107870cf4(puVar5 + -0xb0);
          uVar11 = (ulong)puVar8[6];
        }
        puVar14 = *(uint **)(puVar8 + 8);
        unaff_x22 = uVar11 * 0x18;
        unaff_x23 = 0x7fffffffffffffe0;
        unaff_x24 = 0x7ffffffffffffff;
        if (uVar11 * 3 != 0) goto code_r0x00010786f0b4;
        *puVar9 = 0;
        param_1 = *(undefined8 *)(puVar5 + -0xd0);
        *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar5 + -200);
        *(undefined8 *)(puVar9 + 2) = param_1;
        *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(puVar5 + -0xc0);
        func_0x0001078714a8();
        func_0x000104c31e7c();
        goto code_r0x00010786f1a4;
      }
      func_0x000107871318();
      __ZNSt13runtime_errorC1EPKc();
    }
    goto code_r0x00010786f410;
  }
  func_0x00010787137c();
  if (puVar14 == puVar8) {
    func_0x000107871318();
    func_0x000107871508();
    func_0x00010787153c();
    func_0x0001078714f0();
    func_0x000107871258();
    goto code_r0x00010786f484;
  }
  uVar6 = *(short *)((long)puVar8 + 0x2e) == 4;
  if (!(bool)uVar6) {
    func_0x000107871318();
    __ZNSt13runtime_errorC1EPKc();
    goto code_r0x00010786f410;
  }
  puVar14 = puVar8;
  func_0x00010787138c();
  iVar7 = (int)puVar14;
  if (iVar7 != 0) {
    FUN_10786ee68(puVar8 + 6);
    *puVar9 = 6;
    *(undefined8 *)(puVar9 + 2) = param_1;
    *(undefined8 *)(puVar9 + 4) = param_2;
    goto code_r0x00010786f1a4;
  }
  func_0x00010787138c();
  if (iVar7 == 0) {
    func_0x00010787138c();
    if (iVar7 != 0) {
      func_0x00010786ee24(puVar8[6]);
      func_0x00010786f614(puVar5 + -0xb0,puVar8 + 6);
      uVar12 = 5;
      goto code_r0x00010786f19c;
    }
    func_0x00010787138c();
    if (iVar7 != 0) {
      func_0x0001078714c8();
      for (lVar13 = extraout_x8_01 << 3; lVar13 != 0; lVar13 = lVar13 + -0x18) {
        func_0x00010786ee24(*puVar1);
        puVar1 = puVar1 + 6;
      }
      func_0x000107871548();
      if (!(bool)uVar6) {
        func_0x000107871318();
        func_0x0001078712e0();
        func_0x000107871258();
        goto code_r0x00010786f484;
      }
      if (puVar8[6] == 0) {
        uVar10 = 0;
      }
      else {
        func_0x000104c32068(puVar5 + -0xb0,puVar8[6],0,puVar5 + -0x70);
        func_0x000107871574();
        func_0x000104c32038();
        func_0x000104c321bc(puVar5 + -0xb0);
        uVar10 = puVar8[6];
      }
      uVar12 = *(undefined8 *)(puVar8 + 8);
      func_0x00010787158c(uVar10);
      while (puVar1 != (uint *)0x0) {
        func_0x00010786f614(puVar5 + -0xb0,uVar12);
        func_0x000107871574();
        func_0x000104c31f7c();
        func_0x000107871434();
        func_0x0001078714d8();
      }
      func_0x0001078713e0(2);
      func_0x000104c31d58();
      goto code_r0x00010786f1a4;
    }
    func_0x00010787138c();
    if (iVar7 != 0) {
      func_0x00010786ed74(puVar8 + 6);
      func_0x00010786f6b8(puVar5 + -0xb0,puVar8 + 6);
      func_0x0001078713bc(4);
      func_0x000104c31ca8();
      goto code_r0x00010786f1a4;
    }
    func_0x00010787138c();
    if (iVar7 == 0) {
      func_0x000107871318();
      func_0x000107871508();
      func_0x00010787153c();
      func_0x0001078714f0();
      func_0x000107871258();
      goto code_r0x00010786f484;
    }
    func_0x0001078714c8();
    for (lVar13 = extraout_x8_02 << 3; lVar13 != 0; lVar13 = lVar13 + -0x18) {
      func_0x00010786ed74(puVar1);
      puVar1 = puVar1 + 6;
    }
    func_0x000107871548();
    if (!(bool)uVar6) {
      func_0x000107871318();
      func_0x0001078712e0();
      func_0x000107871258();
      goto code_r0x00010786f484;
    }
    if (puVar8[6] == 0) {
      uVar10 = 0;
    }
    else {
      func_0x000104c325c0(puVar5 + -0xb0,puVar8[6],0,puVar5 + -0x70);
      func_0x000107871574();
      func_0x000104c32590();
      func_0x000104c32718(puVar5 + -0xb0);
      uVar10 = puVar8[6];
    }
    uVar12 = *(undefined8 *)(puVar8 + 8);
    func_0x00010787158c(uVar10);
    while (puVar1 != (uint *)0x0) {
      func_0x00010786f6b8(puVar5 + -0xb0,uVar12);
      func_0x000107871574();
      func_0x000104c324d4();
      func_0x000104c31ca8(puVar5 + -0xb0);
      func_0x0001078714d8();
    }
    func_0x0001078713e0(1);
    func_0x000104c31df0();
  }
  else {
    *(undefined8 *)(puVar5 + -0xb0) = 0;
    *(undefined8 *)(puVar5 + -0xa8) = 0;
    *(undefined8 *)(puVar5 + -0xa0) = 0;
    uVar6 = *(short *)((long)puVar8 + 0x2e) == 4;
    if (!(bool)uVar6) goto code_r0x00010786f414;
    func_0x00010740ed44(puVar5 + -0xb0,puVar8[6]);
    func_0x0001078714c8();
    for (lVar13 = extraout_x8_00 << 3; lVar13 != 0; lVar13 = lVar13 + -0x18) {
      FUN_10786ee68(puVar1);
      *(undefined8 *)(puVar5 + -0x80) = param_1;
      *(undefined8 *)(puVar5 + -0x78) = param_2;
      func_0x000104c31a04(puVar5 + -0xb0,puVar5 + -0x80);
      puVar1 = puVar1 + 6;
    }
    uVar12 = 3;
code_r0x00010786f19c:
    func_0x0001078713bc(uVar12);
    func_0x000104c31c5c();
  }
code_r0x00010786f1a4:
  func_0x000107871270(*(undefined8 *)(puVar5 + -0x58));
  if ((bool)uVar6) {
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = param_1;
    return auVar17;
  }
  ___stack_chk_fail();
code_r0x00010786f364:
  func_0x000107871318();
  __ZNSt13runtime_errorC1EPKc();
code_r0x00010786f410:
  func_0x000107871258();
code_r0x00010786f414:
  func_0x000107871318();
  func_0x0001078712e0();
  func_0x000107871258();
code_r0x00010786f484:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10786f488);
  (*pcVar3)();
code_r0x00010786ef38:
  if (*(short *)((long)puVar14 + 0x16) != 0) goto code_r0x00010786f364;
  *puVar9 = 7;
  uVar6 = 0;
  goto code_r0x00010786f1a4;
code_r0x00010786f0b4:
  puVar15 = &UNK_10786f0c0;
  puVar2 = puVar5 + -0xd0;
  puVar8 = (uint *)(puVar5 + -0x80);
  param_3 = puVar9;
  unaff_x20 = puVar14;
  unaff_x21 = puVar5 + -0xd0;
  puVar4 = puVar5;
  goto code_r0x00010786ef04;
}



/* Entry: 10786fe30; end: 10787001f;  */

/* WARNING: Possible PIC construction at 0x000107870404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078705ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010787058c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107870684) */
/* WARNING: Removing unreachable block (ram,0x0001078705b0) */
/* WARNING: Removing unreachable block (ram,0x000107870434) */
/* WARNING: Removing unreachable block (ram,0x000107870450) */
/* WARNING: Removing unreachable block (ram,0x000107870474) */
/* WARNING: Removing unreachable block (ram,0x000107870448) */
/* WARNING: Removing unreachable block (ram,0x000107870408) */
/* WARNING: Removing unreachable block (ram,0x000107870480) */
/* WARNING: Removing unreachable block (ram,0x0001078705c4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d8) */
/* WARNING: Removing unreachable block (ram,0x0001078705f4) */
/* WARNING: Removing unreachable block (ram,0x000107870600) */
/* WARNING: Removing unreachable block (ram,0x00010787066c) */
/* WARNING: Removing unreachable block (ram,0x0001078706a4) */
/* WARNING: Removing unreachable block (ram,0x0001078706e4) */
/* WARNING: Removing unreachable block (ram,0x0001078706f4) */
/* WARNING: Removing unreachable block (ram,0x000107870708) */
/* WARNING: Removing unreachable block (ram,0x000107870750) */
/* WARNING: Removing unreachable block (ram,0x00010787076c) */
/* WARNING: Removing unreachable block (ram,0x000107870778) */
/* WARNING: Removing unreachable block (ram,0x000107870774) */
/* WARNING: Removing unreachable block (ram,0x000107870768) */
/* WARNING: Removing unreachable block (ram,0x000107870744) */
/* WARNING: Removing unreachable block (ram,0x0001078706dc) */
/* WARNING: Removing unreachable block (ram,0x000107870674) */
/* WARNING: Removing unreachable block (ram,0x0001078705d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704e0) */
/* WARNING: Removing unreachable block (ram,0x000107870514) */
/* WARNING: Removing unreachable block (ram,0x0001078704f8) */
/* WARNING: Removing unreachable block (ram,0x000107870524) */
/* WARNING: Removing unreachable block (ram,0x000107870544) */
/* WARNING: Removing unreachable block (ram,0x00010787052c) */
/* WARNING: Removing unreachable block (ram,0x000107870554) */
/* WARNING: Removing unreachable block (ram,0x000107870574) */
/* WARNING: Removing unreachable block (ram,0x00010787055c) */
/* WARNING: Removing unreachable block (ram,0x000107870580) */
/* WARNING: Removing unreachable block (ram,0x000107870594) */
/* WARNING: Removing unreachable block (ram,0x000107870588) */
/* WARNING: Removing unreachable block (ram,0x000107870564) */
/* WARNING: Removing unreachable block (ram,0x000107870534) */
/* WARNING: Removing unreachable block (ram,0x000107870500) */
/* WARNING: Removing unreachable block (ram,0x000107870590) */
/* WARNING: Removing unreachable block (ram,0x00010787059c) */

uint * FUN_10786fe30(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined1 uVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined8 *extraout_x8;
  uint *extraout_x8_00;
  uint *puVar11;
  undefined8 extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *puVar12;
  uint *unaff_x21;
  uint *unaff_x22;
  undefined1 **ppuVar13;
  undefined *puVar14;
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [256];
  uint auStack_160 [22];
  uint uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  uint *puStack_f0;
  uint *puStack_e8;
  uint *puStack_e0;
  undefined4 *puStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  uint auStack_b8 [4];
  uint auStack_a8 [28];
  undefined8 uStack_38;
  
  func_0x000107871298();
  if (*(short *)((long)param_2 + 0x16) != 3) {
    func_0x000107871318();
    puVar6 = param_2;
    __ZNSt13runtime_errorC1EPKc();
    goto LAB_10786ffe0;
  }
  puVar4 = param_2;
  func_0x0001073270c8();
  unaff_x22 = (uint *)(*(long *)(param_2 + 2) + (ulong)*param_2 * 0x30);
  uVar5 = unaff_x22 == puVar4;
  if ((bool)uVar5) {
    func_0x000107871318();
    puVar6 = puVar4;
    __ZNSt13runtime_errorC1EPKc();
    param_2 = puVar4;
    goto LAB_10786ffe0;
  }
  unaff_x21 = puVar4 + 6;
  func_0x00010786f598(unaff_x21,&UNK_10f4305cd);
  if ((int)unaff_x21 == 0) {
    puVar6 = puVar4 + 6;
    func_0x00010786f598(puVar6,&DAT_10f35070a);
    if ((int)puVar6 == 0) {
      func_0x00010786ef04(auStack_a8,param_2);
      *param_1 = 2;
      func_0x00010726928c(param_1 + 2,auStack_a8);
      param_2 = auStack_a8;
      func_0x000104c3365c();
    }
    else {
      func_0x00010787151c();
      *param_1 = 1;
      param_2 = param_1 + 2;
      func_0x00010726d804(param_2,auStack_a8);
      func_0x000107871514();
    }
LAB_10786ff6c:
    func_0x000107871270(uStack_38);
    if ((bool)uVar5) {
      return param_2;
    }
    ___stack_chk_fail();
  }
  else {
    func_0x00010787137c();
    param_2 = unaff_x21;
    if (unaff_x22 != unaff_x21) {
      uVar5 = *(short *)((long)unaff_x21 + 0x2e) == 4;
      if (!(bool)uVar5) {
        func_0x000107871318();
        puVar6 = param_2;
        __ZNSt13runtime_errorC1EPKc();
        goto LAB_10786ffe0;
      }
      func_0x000107330040(auStack_b8);
      func_0x000107354910(auStack_b8,unaff_x21[6]);
      func_0x00010787158c(unaff_x21[6]);
      while (unaff_x21 != (uint *)0x0) {
        func_0x00010787151c();
        func_0x00010735c8bc(auStack_b8,auStack_a8);
        func_0x000107871514();
        func_0x0001078714d8();
      }
      func_0x00010787155c();
      func_0x000107331050();
      param_2 = auStack_b8;
      func_0x00010726dd08();
      puVar4 = unaff_x21;
      goto LAB_10786ff6c;
    }
  }
  unaff_x21 = puVar4;
  func_0x000107871318();
  puVar6 = param_2;
  __ZNSt13runtime_errorC1EPKc();
LAB_10786ffe0:
  func_0x000107871258();
  func_0x00010787132c();
  func_0x00010787135c();
  puStack_c8 = &UNK_107870020;
  ppuVar13 = &puStack_d0;
  puStack_f0 = unaff_x22;
  puStack_e8 = unaff_x21;
  puStack_e0 = param_2;
  puStack_d8 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000107871298();
  puVar9 = (uint *)0x400;
  func_0x000107326d6c(auStack_160,0,0x400,0);
  uVar5 = *(char *)((long)puVar6 + 0x17) == '\0';
  puVar4 = *(uint **)puVar6;
  if (-1 < *(char *)((long)puVar6 + 0x17)) {
    puVar4 = puVar6;
  }
  func_0x0001075222a8();
  if (uStack_108 != 0) {
    func_0x000105680760(auStack_278);
    puVar3 = auStack_268;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(puVar3,uStack_100);
    func_0x00010549023c();
    uVar7 = (ulong)uStack_108;
    func_0x00010774f238(uVar7);
    func_0x00010549023c(puVar3,uVar7);
    func_0x000107871318();
    func_0x000105491b64(auStack_290,auStack_260);
    func_0x000107871568();
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
    func_0x000107871284();
    func_0x0001078713b4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x107870114);
    (*pcVar2)();
  }
  FUN_10786fe30(extraout_x8,auStack_160);
  puVar6 = auStack_160;
  func_0x000107326ea8();
  func_0x000107871270(uStack_f8);
  if ((bool)uVar5) {
    return puVar6;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_290);
  if ((int)unaff_x21 != 0) {
    ___cxa_free_exception(extraout_x8);
  }
  func_0x000105673d7c(auStack_278);
  puVar8 = auStack_160;
  func_0x000107326ea8();
  puVar14 = &UNK_107870168;
  func_0x000107871338();
  puVar3 = auStack_290;
  puVar11 = extraout_x8_00;
  puVar12 = extraout_x8;
  while( true ) {
    *(uint **)(puVar3 + -0x30) = unaff_x22;
    *(uint **)(puVar3 + -0x28) = unaff_x21;
    *(uint **)(puVar3 + -0x20) = puVar6;
    *(undefined8 **)(puVar3 + -0x18) = puVar12;
    *(undefined1 ***)(puVar3 + -0x10) = ppuVar13;
    *(undefined **)(puVar3 + -8) = puVar14;
    func_0x000107871298();
    uVar1 = *puVar8;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[0] = 0;
    puVar11[1] = 0;
    uVar5 = uVar1 == 7;
    puVar6 = puVar8;
    if (!(bool)uVar5) {
      puVar9 = puVar8;
      func_0x000107871364();
      *(undefined4 *)(puVar3 + -0x48) = 4;
      func_0x000107870ecc();
      *(uint **)(puVar3 + -0x60) = puVar9;
      _strlen();
      *(int *)(puVar3 + -0x58) = (int)puVar9;
      puVar9 = (uint *)(puVar3 + -0x60);
      func_0x0001078713a8();
      uVar5 = *puVar8 == 0;
      puVar14 = &UNK_10f4303a6;
      if (!(bool)uVar5) {
        puVar14 = &UNK_10f43041c;
      }
      *(uint **)(puVar3 + -0x68) = puVar4;
      *(undefined **)(puVar3 + -0x60) = puVar14;
      uVar10 = 10;
      if (!(bool)uVar5) {
        uVar10 = 0xb;
      }
      *(undefined4 *)(puVar3 + -0x58) = uVar10;
      puVar4 = (uint *)(puVar3 + -0x68);
      FUN_107870f70(puVar3 + -0x50);
      func_0x0001078712cc();
      func_0x000107871354();
      unaff_x21 = puVar8;
    }
    func_0x000107871270(*(undefined8 *)(puVar3 + -0x38));
    if ((bool)uVar5) {
      return puVar6;
    }
    ___stack_chk_fail();
    puVar8 = puVar6;
    func_0x000107871354();
    func_0x000107871384();
    func_0x000107871338();
    *(uint **)(puVar3 + -0x90) = puVar6;
    *(uint **)(puVar3 + -0x88) = puVar11;
    *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x78) = &UNK_107870244;
    func_0x0001078712ac();
    *(undefined8 *)(puVar3 + -0x98) = extraout_x8_01;
    uVar1 = puVar9[2];
    *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)puVar9;
    *(undefined8 *)(puVar3 + -0xa0) = 0;
    *(undefined2 *)(puVar3 + -0x9a) = 0x405;
    *(undefined8 *)(puVar3 + -0xb0) = 0;
    *(uint *)(puVar3 + -0xb0) = uVar1;
    *(undefined8 *)(puVar3 + -0xc0) = *(undefined8 *)puVar4;
    *(uint *)(puVar3 + -0xb8) = puVar4[2];
    FUN_107870714();
    func_0x000107871530();
    func_0x000107871270(*(undefined8 *)(puVar3 + -0x98));
    if ((bool)uVar5) {
      return puVar11;
    }
    ___stack_chk_fail();
    func_0x000107871530();
    func_0x00010787135c();
    puVar4 = (uint *)(puVar3 + -0x100);
    *(uint **)(puVar3 + -0xe0) = puVar6;
    *(uint **)(puVar3 + -0xd8) = puVar11;
    *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x80;
    *(undefined **)(puVar3 + -200) = &UNK_1078702c4;
    func_0x0001078712ac();
    func_0x000107871404();
    func_0x000107870de8();
    func_0x0001078712ec();
    func_0x000107871270(*(undefined8 *)(puVar3 + -0xe8));
    if ((bool)uVar5) break;
    ___stack_chk_fail();
    func_0x0001078712ec();
    func_0x00010787135c();
    *(uint **)(puVar3 + -0x130) = unaff_x22;
    *(uint **)(puVar3 + -0x128) = unaff_x21;
    *(uint **)(puVar3 + -0x120) = puVar6;
    *(uint **)(puVar3 + -0x118) = puVar11;
    *(undefined1 **)(puVar3 + -0x110) = puVar3 + -0xd0;
    *(undefined **)(puVar3 + -0x108) = &UNK_10787030c;
    ppuVar13 = (undefined1 **)(puVar3 + -0x110);
    func_0x000107871298();
    extraout_x8_02[1] = 0;
    extraout_x8_02[2] = 0;
    *extraout_x8_02 = 0;
    func_0x000107871364();
    *(undefined4 *)(puVar3 + -0x148) = 4;
    *(undefined **)(puVar3 + -0x160) = &DAT_10f35070a;
    *(undefined4 *)(puVar3 + -0x158) = 7;
    puVar9 = (uint *)(puVar3 + -0x160);
    func_0x0001078713a8();
    uVar1 = puVar8[0xc];
    if (uVar1 != 4) {
      *(uint **)(puVar3 + -0x168) = puVar4;
      *(char **)(puVar3 + -0x160) = "id";
      *(undefined4 *)(puVar3 + -0x158) = 2;
      if (uVar1 == 3) {
        func_0x000107871308();
        func_0x0001078707c8();
      }
      else if (uVar1 == 2) {
        func_0x000107871308();
        func_0x0001078707ec();
      }
      else if (uVar1 == 1) {
        func_0x000107871308(*(undefined8 *)(puVar8 + 0xe));
        func_0x000107870810();
      }
      else {
        puVar9 = puVar8 + 0xe;
        func_0x000107870840(puVar3 + -0x150,puVar3 + -0x168);
      }
      func_0x0001078712cc();
      func_0x000107871354();
    }
    *(undefined **)(puVar3 + -0x160) = &DAT_10f3005c3;
    *(undefined4 *)(puVar3 + -0x158) = 8;
    puVar11 = (uint *)(puVar3 + -0x150);
    puVar14 = &UNK_107870408;
    puVar3 = puVar3 + -0x170;
    puVar12 = extraout_x8_02;
    puVar6 = puVar4;
    unaff_x21 = puVar8;
  }
  return puVar11;
}



/* Entry: 107870714; end: 10787075b;  */

/* WARNING: Possible PIC construction at 0x000107870404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078705ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010787058c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107870684) */
/* WARNING: Removing unreachable block (ram,0x0001078705b0) */
/* WARNING: Removing unreachable block (ram,0x000107870434) */
/* WARNING: Removing unreachable block (ram,0x000107870450) */
/* WARNING: Removing unreachable block (ram,0x000107870474) */
/* WARNING: Removing unreachable block (ram,0x000107870448) */
/* WARNING: Removing unreachable block (ram,0x000107870408) */
/* WARNING: Removing unreachable block (ram,0x000107870480) */
/* WARNING: Removing unreachable block (ram,0x0001078705c4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d8) */
/* WARNING: Removing unreachable block (ram,0x0001078705f4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704e0) */
/* WARNING: Removing unreachable block (ram,0x000107870514) */
/* WARNING: Removing unreachable block (ram,0x0001078704f8) */
/* WARNING: Removing unreachable block (ram,0x000107870524) */
/* WARNING: Removing unreachable block (ram,0x000107870544) */
/* WARNING: Removing unreachable block (ram,0x00010787052c) */
/* WARNING: Removing unreachable block (ram,0x000107870554) */
/* WARNING: Removing unreachable block (ram,0x000107870574) */
/* WARNING: Removing unreachable block (ram,0x00010787055c) */
/* WARNING: Removing unreachable block (ram,0x000107870580) */
/* WARNING: Removing unreachable block (ram,0x000107870594) */
/* WARNING: Removing unreachable block (ram,0x000107870588) */
/* WARNING: Removing unreachable block (ram,0x000107870564) */
/* WARNING: Removing unreachable block (ram,0x000107870534) */
/* WARNING: Removing unreachable block (ram,0x000107870500) */
/* WARNING: Removing unreachable block (ram,0x000107870590) */
/* WARNING: Removing unreachable block (ram,0x00010787059c) */

int * FUN_107870714(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined8 extraout_x8;
  int *extraout_x8_00;
  undefined8 *puVar10;
  int *extraout_x8_01;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x21;
  int *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined *puVar11;
  undefined1 *puVar3;
  
  while( true ) {
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x40);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x40);
    piVar7 = (int *)((long)register0x00000008 + -0x40);
    *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001078712ac();
    func_0x000107871404();
    func_0x000107870de8();
    func_0x0001078712ec();
    func_0x000107871270(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)in_ZR) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    func_0x0001078712ec();
    puVar11 = &UNK_10787075c;
    func_0x00010787135c();
    piVar6 = param_1 + 2;
    piVar9 = extraout_x8_01;
    if (*param_1 == 2) goto code_r0x000107870168;
    piVar5 = extraout_x8_01;
    if (*param_1 == 1) goto code_r0x00010787030c;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0xb0);
    *(int **)((long)register0x00000008 + -0x70) = unaff_x22;
    *(int **)((long)register0x00000008 + -0x68) = unaff_x21;
    *(int **)((long)register0x00000008 + -0x60) = unaff_x20;
    *(int **)((long)register0x00000008 + -0x58) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_10787075c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
    func_0x000107871298();
    extraout_x8_01[2] = 0;
    extraout_x8_01[3] = 0;
    extraout_x8_01[4] = 0;
    extraout_x8_01[5] = 0;
    extraout_x8_01[0] = 0;
    extraout_x8_01[1] = 0;
    func_0x000107871364();
    *(undefined4 *)((long)register0x00000008 + -0x88) = 4;
    *(undefined **)((long)register0x00000008 + -0xa8) = &UNK_10f4305cd;
    *(undefined4 *)((long)register0x00000008 + -0xa0) = 0x11;
    func_0x0001078713a8();
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined2 *)((long)register0x00000008 + -0x7a) = 4;
    puVar10 = *(undefined8 **)piVar6;
    piVar6 = (int *)*puVar10;
    unaff_x22 = (int *)puVar10[1];
    in_ZR = piVar6 == unaff_x22;
    unaff_x19 = extraout_x8_01;
    unaff_x21 = piVar6;
    if (!(bool)in_ZR) break;
    *(undefined **)((long)register0x00000008 + -0xa8) = &UNK_10f4305df;
    *(undefined4 *)((long)register0x00000008 + -0xa0) = 8;
    param_3 = (int *)((long)register0x00000008 + -0x90);
    unaff_x20 = extraout_x8_01;
    FUN_107870714(extraout_x8_01,(undefined1 *)((long)register0x00000008 + -0xa8),param_3,piVar7);
    func_0x000107871354();
    func_0x000107871270(*(undefined8 *)((long)register0x00000008 + -0x78));
    if ((bool)in_ZR) {
      return unaff_x20;
    }
    ___stack_chk_fail();
    param_1 = unaff_x20;
    func_0x000107871354();
    func_0x000107871384();
    unaff_x30 = FUN_107870714;
    func_0x000107871338();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  piVar5 = (int *)((long)register0x00000008 + -0xa8);
  puVar11 = &UNK_107870684;
  unaff_x20 = piVar7;
code_r0x00010787030c:
  while( true ) {
    puVar2 = puVar3 + -0x70;
    *(int **)(puVar3 + -0x30) = unaff_x22;
    *(int **)(puVar3 + -0x28) = unaff_x21;
    *(int **)(puVar3 + -0x20) = unaff_x20;
    *(int **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(undefined **)(puVar3 + -8) = puVar11;
    unaff_x29 = puVar3 + -0x10;
    func_0x000107871298();
    piVar5[2] = 0;
    piVar5[3] = 0;
    piVar5[4] = 0;
    piVar5[5] = 0;
    piVar5[0] = 0;
    piVar5[1] = 0;
    func_0x000107871364();
    *(undefined4 *)(puVar3 + -0x48) = 4;
    *(undefined **)(puVar3 + -0x60) = &DAT_10f35070a;
    *(undefined4 *)(puVar3 + -0x58) = 7;
    param_3 = (int *)(puVar3 + -0x60);
    func_0x0001078713a8();
    iVar1 = piVar6[0xc];
    if (iVar1 != 4) {
      *(int **)(puVar3 + -0x68) = piVar7;
      *(char **)(puVar3 + -0x60) = "id";
      *(undefined4 *)(puVar3 + -0x58) = 2;
      if (iVar1 == 3) {
        func_0x000107871308();
        func_0x0001078707c8();
      }
      else if (iVar1 == 2) {
        func_0x000107871308();
        func_0x0001078707ec();
      }
      else if (iVar1 == 1) {
        func_0x000107871308(*(undefined8 *)(piVar6 + 0xe));
        func_0x000107870810();
      }
      else {
        param_3 = piVar6 + 0xe;
        func_0x000107870840(puVar3 + -0x50,puVar3 + -0x68);
      }
      func_0x0001078712cc();
      func_0x000107871354();
    }
    *(undefined **)(puVar3 + -0x60) = &DAT_10f3005c3;
    *(undefined4 *)(puVar3 + -0x58) = 8;
    piVar9 = (int *)(puVar3 + -0x50);
    puVar11 = &UNK_107870408;
    unaff_x19 = piVar5;
    unaff_x20 = piVar7;
    unaff_x21 = piVar6;
code_r0x000107870168:
    *(int **)(puVar2 + -0x30) = unaff_x22;
    *(int **)(puVar2 + -0x28) = unaff_x21;
    *(int **)(puVar2 + -0x20) = unaff_x20;
    *(int **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = puVar11;
    func_0x000107871298();
    iVar1 = *piVar6;
    piVar9[2] = 0;
    piVar9[3] = 0;
    piVar9[4] = 0;
    piVar9[5] = 0;
    piVar9[0] = 0;
    piVar9[1] = 0;
    uVar4 = iVar1 == 7;
    unaff_x20 = piVar6;
    if (!(bool)uVar4) {
      piVar5 = piVar6;
      func_0x000107871364();
      *(undefined4 *)(puVar2 + -0x48) = 4;
      func_0x000107870ecc();
      *(int **)(puVar2 + -0x60) = piVar5;
      _strlen();
      *(int *)(puVar2 + -0x58) = (int)piVar5;
      param_3 = (int *)(puVar2 + -0x60);
      func_0x0001078713a8();
      uVar4 = *piVar6 == 0;
      puVar11 = &UNK_10f4303a6;
      if (!(bool)uVar4) {
        puVar11 = &UNK_10f43041c;
      }
      *(int **)(puVar2 + -0x68) = piVar7;
      *(undefined **)(puVar2 + -0x60) = puVar11;
      uVar8 = 10;
      if (!(bool)uVar4) {
        uVar8 = 0xb;
      }
      *(undefined4 *)(puVar2 + -0x58) = uVar8;
      piVar7 = (int *)(puVar2 + -0x68);
      FUN_107870f70(puVar2 + -0x50);
      func_0x0001078712cc();
      func_0x000107871354();
      unaff_x21 = piVar6;
    }
    func_0x000107871270(*(undefined8 *)(puVar2 + -0x38));
    if ((bool)uVar4) {
      return unaff_x20;
    }
    ___stack_chk_fail();
    piVar6 = unaff_x20;
    func_0x000107871354();
    func_0x000107871384();
    func_0x000107871338();
    *(int **)(puVar2 + -0x90) = unaff_x20;
    *(int **)(puVar2 + -0x88) = piVar9;
    *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x78) = &UNK_107870244;
    func_0x0001078712ac();
    *(undefined8 *)(puVar2 + -0x98) = extraout_x8;
    iVar1 = param_3[2];
    *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)param_3;
    *(undefined8 *)(puVar2 + -0xa0) = 0;
    *(undefined2 *)(puVar2 + -0x9a) = 0x405;
    *(undefined8 *)(puVar2 + -0xb0) = 0;
    *(int *)(puVar2 + -0xb0) = iVar1;
    *(undefined8 *)(puVar2 + -0xc0) = *(undefined8 *)piVar7;
    *(int *)(puVar2 + -0xb8) = piVar7[2];
    FUN_107870714();
    func_0x000107871530();
    func_0x000107871270(*(undefined8 *)(puVar2 + -0x98));
    if ((bool)uVar4) {
      return piVar9;
    }
    ___stack_chk_fail();
    func_0x000107871530();
    func_0x00010787135c();
    puVar3 = puVar2 + -0x100;
    piVar7 = (int *)(puVar2 + -0x100);
    *(int **)(puVar2 + -0xe0) = unaff_x20;
    *(int **)(puVar2 + -0xd8) = piVar9;
    *(undefined1 **)(puVar2 + -0xd0) = puVar2 + -0x80;
    *(undefined **)(puVar2 + -200) = &UNK_1078702c4;
    unaff_x29 = puVar2 + -0xd0;
    func_0x0001078712ac();
    func_0x000107871404();
    func_0x000107870de8();
    func_0x0001078712ec();
    func_0x000107871270(*(undefined8 *)(puVar2 + -0xe8));
    if ((bool)uVar4) break;
    ___stack_chk_fail();
    func_0x0001078712ec();
    puVar11 = &UNK_10787030c;
    func_0x00010787135c();
    piVar5 = extraout_x8_00;
    unaff_x19 = piVar9;
  }
  return piVar9;
}



/* Entry: 107870a08; end: 107870b9f;  */

bool FUN_107870a08(double param_1,uint *param_2,uint *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  
  uVar1 = *(ushort *)((long)param_2 + 0x16) & 7;
  if (uVar1 == (*(ushort *)((long)param_3 + 0x16) & 7)) {
    switch(uVar1) {
    case 3:
      if (*param_2 == *param_3) {
        lVar6 = *(long *)(param_2 + 2);
        while( true ) {
          if (lVar6 == *(long *)(param_2 + 2) + (ulong)*param_2 * 0x30) {
            return true;
          }
          puVar4 = param_3;
          func_0x0001077da534(param_3,lVar6);
          if ((uint *)(*(long *)(param_3 + 2) + (ulong)*param_3 * 0x30) == puVar4) break;
          uVar7 = lVar6 + 0x18;
          func_0x000107870ba0(uVar7,puVar4 + 6);
          lVar6 = lVar6 + 0x30;
          if ((uVar7 & 1) != 0) {
            return false;
          }
        }
        return false;
      }
      break;
    case 4:
      if (*param_2 == *param_3) {
        uVar7 = 0xffffffffffffffff;
        lVar6 = 0;
        do {
          uVar7 = uVar7 + 1;
          if (*param_2 <= uVar7) {
            return true;
          }
          uVar5 = *(long *)(param_2 + 2) + lVar6;
          func_0x000107870ba0(uVar5,*(long *)(param_3 + 2) + lVar6);
          lVar6 = lVar6 + 0x18;
        } while ((uVar5 & 1) == 0);
        return false;
      }
      break;
    case 5:
      if ((*(ushort *)((long)param_2 + 0x16) >> 0xc & 1) == 0) {
        uVar3 = *param_2;
      }
      else {
        uVar3 = 0x15 - (int)*(char *)((long)param_2 + 0x15);
      }
      uVar2 = *param_3;
      if ((*(ushort *)((long)param_3 + 0x16) & 0x1000) != 0) {
        uVar2 = 0x15 - (int)*(char *)((long)param_3 + 0x15);
      }
      if (uVar3 == uVar2) {
        if ((*(ushort *)((long)param_2 + 0x16) >> 0xc & 1) == 0) {
          param_2 = *(uint **)(param_2 + 2);
        }
        puVar4 = *(uint **)(param_3 + 2);
        if ((*(ushort *)((long)param_3 + 0x16) & 0x1000) != 0) {
          puVar4 = param_3;
        }
        if (param_2 != puVar4) {
          _memcmp(param_2,puVar4,uVar3);
          return (int)param_2 == 0;
        }
        return true;
      }
      return false;
    case 6:
      if (((*(ushort *)((long)param_3 + 0x16) | *(ushort *)((long)param_2 + 0x16)) >> 9 & 1) == 0) {
        return *(long *)param_2 == *(long *)param_3;
      }
      func_0x0001073274d0(param_2);
      dVar8 = param_1;
      func_0x0001073274d0(param_3);
      if (NAN(param_1) || NAN(dVar8)) {
        return false;
      }
      return param_1 == dVar8;
    default:
      return true;
    }
  }
  return false;
}



/* Entry: 107870f70; end: 107870f8b;  */

/* WARNING: Possible PIC construction at 0x000107870fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107871050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078705ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010787058c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107870684) */
/* WARNING: Removing unreachable block (ram,0x0001078705b0) */
/* WARNING: Removing unreachable block (ram,0x000107870434) */
/* WARNING: Removing unreachable block (ram,0x000107870450) */
/* WARNING: Removing unreachable block (ram,0x000107870474) */
/* WARNING: Removing unreachable block (ram,0x000107870448) */
/* WARNING: Removing unreachable block (ram,0x000107870408) */
/* WARNING: Removing unreachable block (ram,0x000107870480) */
/* WARNING: Removing unreachable block (ram,0x0001078705c4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d8) */
/* WARNING: Removing unreachable block (ram,0x0001078705f4) */
/* WARNING: Removing unreachable block (ram,0x000107870600) */
/* WARNING: Removing unreachable block (ram,0x00010787066c) */
/* WARNING: Removing unreachable block (ram,0x0001078706a4) */
/* WARNING: Removing unreachable block (ram,0x0001078706e4) */
/* WARNING: Removing unreachable block (ram,0x0001078706f4) */
/* WARNING: Removing unreachable block (ram,0x000107870708) */
/* WARNING: Removing unreachable block (ram,0x000107870750) */
/* WARNING: Removing unreachable block (ram,0x00010787076c) */
/* WARNING: Removing unreachable block (ram,0x000107870778) */
/* WARNING: Removing unreachable block (ram,0x000107870774) */
/* WARNING: Removing unreachable block (ram,0x000107870768) */
/* WARNING: Removing unreachable block (ram,0x000107870744) */
/* WARNING: Removing unreachable block (ram,0x0001078706dc) */
/* WARNING: Removing unreachable block (ram,0x000107870674) */
/* WARNING: Removing unreachable block (ram,0x0001078705d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704e0) */
/* WARNING: Removing unreachable block (ram,0x000107870514) */
/* WARNING: Removing unreachable block (ram,0x0001078704f8) */
/* WARNING: Removing unreachable block (ram,0x000107870524) */
/* WARNING: Removing unreachable block (ram,0x000107870544) */
/* WARNING: Removing unreachable block (ram,0x00010787052c) */
/* WARNING: Removing unreachable block (ram,0x000107870554) */
/* WARNING: Removing unreachable block (ram,0x000107870574) */
/* WARNING: Removing unreachable block (ram,0x00010787055c) */
/* WARNING: Removing unreachable block (ram,0x000107870580) */
/* WARNING: Removing unreachable block (ram,0x000107870594) */
/* WARNING: Removing unreachable block (ram,0x000107870588) */
/* WARNING: Removing unreachable block (ram,0x000107870564) */
/* WARNING: Removing unreachable block (ram,0x000107870534) */
/* WARNING: Removing unreachable block (ram,0x000107870500) */
/* WARNING: Removing unreachable block (ram,0x000107871054) */
/* WARNING: Removing unreachable block (ram,0x000107871068) */
/* WARNING: Removing unreachable block (ram,0x000107870fec) */
/* WARNING: Removing unreachable block (ram,0x000107870590) */
/* WARNING: Removing unreachable block (ram,0x00010787059c) */

int * FUN_107870f70(int *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined8 extraout_x8;
  int *extraout_x8_00;
  int *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  int *extraout_x8_04;
  undefined8 extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  int *extraout_x9;
  int *piVar10;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  int *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar11;
  
  if (*param_3 == 7) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = &LAB_107870f8c;
    _abort();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    param_1 = extraout_x8_01;
  }
  uVar4 = *param_3 == 6;
  if (!(bool)uVar4) {
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    piVar7 = param_4;
    func_0x0001078712ac();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8_02;
    if (*param_3 == 5) {
      piVar8 = (int *)((long)register0x00000008 + -0x48);
      puVar11 = &UNK_107871054;
    }
    else {
      uVar4 = *(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x28);
      if (!(bool)uVar4) {
        ___stack_chk_fail();
        piVar8 = param_3;
        func_0x000107871444();
        puVar11 = &UNK_1078710c0;
        func_0x00010787135c();
        goto code_r0x0001078710c0;
      }
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      piVar8 = extraout_x9;
      func_0x0001078712ac();
      *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8_05;
      uVar4 = *piVar8 + -1 == 3;
      switch(*piVar8 + -1) {
      case 0:
        func_0x000107871580(1);
        param_4 = (int *)(extraout_x8_06 + 8);
        func_0x00010726982c();
        func_0x0001078712bc();
        break;
      case 1:
        func_0x000107871580(2);
        param_4 = (int *)(extraout_x8_09 + 8);
        func_0x0001072696bc();
        func_0x0001078712bc();
        break;
      case 2:
        func_0x000107871580(3);
        param_4 = (int *)(extraout_x8_07 + 8);
        func_0x000107269434();
        func_0x0001078712bc();
        break;
      case 3:
        func_0x000107871580(4);
        param_4 = (int *)(extraout_x8_08 + 8);
        func_0x000107269534();
        func_0x0001078712bc();
        break;
      default:
        *(undefined4 *)((long)register0x00000008 + -0x48) = 0;
        param_4 = (int *)((long)register0x00000008 + -0x40);
        func_0x00010726998c(param_4,piVar8 + 2);
        func_0x0001078712bc();
      }
      func_0x000107871444();
      func_0x000107871270(*(undefined8 *)((long)register0x00000008 + -0x28));
      if ((bool)uVar4) {
        return param_4;
      }
      ___stack_chk_fail();
      piVar8 = param_4;
      func_0x000107871444();
      puVar11 = &UNK_107871230;
      func_0x00010787135c();
    }
    *(int **)((long)register0x00000008 + -0x70) = param_1;
    *(int **)((long)register0x00000008 + -0x68) = param_4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x58) = puVar11;
    *piVar8 = 5;
    func_0x000107269434(piVar8 + 2);
    return piVar8;
  }
  piVar6 = param_3 + 2;
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(int **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  func_0x0001078709e4(param_1);
  param_2 = *(undefined8 *)piVar6;
  piVar7 = *(int **)param_4;
  puVar11 = &UNK_107870fec;
  piVar8 = param_1;
  param_3 = param_1;
  param_1 = param_4;
  unaff_x21 = piVar6;
code_r0x0001078710c0:
  piVar6 = (int *)(puVar3 + -0x40);
  *(int **)(puVar3 + -0x20) = param_1;
  *(int **)(puVar3 + -0x18) = param_3;
  *(undefined1 **)(puVar3 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)(puVar3 + -8) = puVar11;
  func_0x0001078712ac();
  *(undefined8 *)(puVar3 + -0x28) = extraout_x8_03;
  *(undefined8 *)(puVar3 + -0x38) = 0;
  *(undefined8 *)(puVar3 + -0x30) = 0;
  *(undefined8 *)(puVar3 + -0x40) = param_2;
  *(undefined2 *)(puVar3 + -0x2a) = 0x216;
  func_0x000107870d3c();
  func_0x0001078712ec();
  func_0x000107871270(*(undefined8 *)(puVar3 + -0x28));
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x0001078712ec();
    puVar11 = &UNK_10787111c;
    func_0x00010787135c();
    piVar8 = *(int **)piVar8;
    puVar2 = puVar3 + -0x40;
    piVar5 = extraout_x8_04;
    piVar10 = param_3;
    while( true ) {
      param_3 = piVar5;
      *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
      *(int **)(puVar2 + -0x28) = unaff_x21;
      *(int **)(puVar2 + -0x20) = param_1;
      *(int **)(puVar2 + -0x18) = piVar10;
      *(undefined1 **)(puVar2 + -0x10) = puVar3 + -0x10;
      *(undefined **)(puVar2 + -8) = puVar11;
      func_0x000107871298();
      iVar1 = *piVar6;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[0] = 0;
      param_3[1] = 0;
      uVar4 = iVar1 == 7;
      piVar5 = piVar6;
      if (!(bool)uVar4) {
        piVar7 = piVar6;
        func_0x000107871364();
        *(undefined4 *)(puVar2 + -0x48) = 4;
        func_0x000107870ecc();
        *(int **)(puVar2 + -0x60) = piVar7;
        _strlen();
        *(int *)(puVar2 + -0x58) = (int)piVar7;
        piVar7 = (int *)(puVar2 + -0x60);
        func_0x0001078713a8();
        uVar4 = *piVar6 == 0;
        puVar11 = &UNK_10f4303a6;
        if (!(bool)uVar4) {
          puVar11 = &UNK_10f43041c;
        }
        *(int **)(puVar2 + -0x68) = piVar8;
        *(undefined **)(puVar2 + -0x60) = puVar11;
        uVar9 = 10;
        if (!(bool)uVar4) {
          uVar9 = 0xb;
        }
        *(undefined4 *)(puVar2 + -0x58) = uVar9;
        piVar8 = (int *)(puVar2 + -0x68);
        FUN_107870f70(puVar2 + -0x50);
        func_0x0001078712cc();
        func_0x000107871354();
        unaff_x21 = piVar6;
      }
      func_0x000107871270(*(undefined8 *)(puVar2 + -0x38));
      if ((bool)uVar4) {
        return piVar5;
      }
      ___stack_chk_fail();
      piVar6 = piVar5;
      func_0x000107871354();
      func_0x000107871384();
      func_0x000107871338();
      *(int **)(puVar2 + -0x90) = piVar5;
      *(int **)(puVar2 + -0x88) = param_3;
      *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x78) = &UNK_107870244;
      func_0x0001078712ac();
      *(undefined8 *)(puVar2 + -0x98) = extraout_x8;
      iVar1 = piVar7[2];
      *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)piVar7;
      *(undefined8 *)(puVar2 + -0xa0) = 0;
      *(undefined2 *)(puVar2 + -0x9a) = 0x405;
      *(undefined8 *)(puVar2 + -0xb0) = 0;
      *(int *)(puVar2 + -0xb0) = iVar1;
      *(undefined8 *)(puVar2 + -0xc0) = *(undefined8 *)piVar8;
      *(int *)(puVar2 + -0xb8) = piVar8[2];
      FUN_107870714();
      func_0x000107871530();
      func_0x000107871270(*(undefined8 *)(puVar2 + -0x98));
      if ((bool)uVar4) {
        return param_3;
      }
      ___stack_chk_fail();
      func_0x000107871530();
      func_0x00010787135c();
      piVar8 = (int *)(puVar2 + -0x100);
      puVar3 = puVar2 + -0x100;
      *(int **)(puVar2 + -0xe0) = piVar5;
      *(int **)(puVar2 + -0xd8) = param_3;
      *(undefined1 **)(puVar2 + -0xd0) = puVar2 + -0x80;
      *(undefined **)(puVar2 + -200) = &UNK_1078702c4;
      func_0x0001078712ac();
      func_0x000107871404();
      func_0x000107870de8();
      func_0x0001078712ec();
      func_0x000107871270(*(undefined8 *)(puVar2 + -0xe8));
      if ((bool)uVar4) break;
      ___stack_chk_fail();
      func_0x0001078712ec();
      func_0x00010787135c();
      *(undefined8 *)(puVar2 + -0x130) = unaff_x22;
      *(int **)(puVar2 + -0x128) = unaff_x21;
      *(int **)(puVar2 + -0x120) = piVar5;
      *(int **)(puVar2 + -0x118) = param_3;
      *(undefined1 **)(puVar2 + -0x110) = puVar2 + -0xd0;
      *(undefined **)(puVar2 + -0x108) = &UNK_10787030c;
      func_0x000107871298();
      extraout_x8_00[2] = 0;
      extraout_x8_00[3] = 0;
      extraout_x8_00[4] = 0;
      extraout_x8_00[5] = 0;
      extraout_x8_00[0] = 0;
      extraout_x8_00[1] = 0;
      func_0x000107871364();
      *(undefined4 *)(puVar2 + -0x148) = 4;
      *(undefined **)(puVar2 + -0x160) = &DAT_10f35070a;
      *(undefined4 *)(puVar2 + -0x158) = 7;
      piVar7 = (int *)(puVar2 + -0x160);
      func_0x0001078713a8();
      iVar1 = piVar6[0xc];
      if (iVar1 != 4) {
        *(int **)(puVar2 + -0x168) = piVar8;
        *(char **)(puVar2 + -0x160) = "id";
        *(undefined4 *)(puVar2 + -0x158) = 2;
        if (iVar1 == 3) {
          func_0x000107871308();
          func_0x0001078707c8();
        }
        else if (iVar1 == 2) {
          func_0x000107871308();
          func_0x0001078707ec();
        }
        else if (iVar1 == 1) {
          func_0x000107871308(*(undefined8 *)(piVar6 + 0xe));
          func_0x000107870810();
        }
        else {
          piVar7 = piVar6 + 0xe;
          func_0x000107870840(puVar2 + -0x150,puVar2 + -0x168);
        }
        func_0x0001078712cc();
        func_0x000107871354();
      }
      *(undefined **)(puVar2 + -0x160) = &DAT_10f3005c3;
      *(undefined4 *)(puVar2 + -0x158) = 8;
      piVar5 = (int *)(puVar2 + -0x150);
      puVar11 = &UNK_107870408;
      puVar2 = puVar2 + -0x170;
      piVar10 = extraout_x8_00;
      param_1 = piVar8;
      unaff_x21 = piVar6;
    }
  }
  return param_3;
}



/* Entry: 107871258; end: 10787163f;  */

void FUN_107871258(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_110346bf8)();
  return;
}



/* Entry: 1078719f0; end: 107871a3b;  */

void FUN_1078719f0(double *param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = *param_1;
  if (*param_2 <= *param_1) {
    dVar1 = *param_2;
  }
  *param_1 = dVar1;
  dVar1 = param_1[1];
  if (param_2[1] <= param_1[1]) {
    dVar1 = param_2[1];
  }
  param_1[1] = dVar1;
  dVar1 = param_1[2];
  if (param_1[2] <= *param_2) {
    dVar1 = *param_2;
  }
  param_1[2] = dVar1;
  dVar1 = param_1[3];
  if (param_1[3] <= param_2[1]) {
    dVar1 = param_2[1];
  }
  param_1[3] = dVar1;
  return;
}



/* Entry: 10787271c; end: 1078727eb;  */

void FUN_10787271c(undefined1 (*param_1) [16],float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  
  auVar5._8_4_ = 0xff7fffff;
  auVar5._0_8_ = 0xff7fffffff7fffff;
  auVar5._12_4_ = 0xff7fffff;
  pauVar4 = param_1;
  for (lVar3 = 0; lVar3 < (int)(param_3 & 0xfffffffc); lVar3 = lVar3 + 4) {
    auVar5 = NEON_fmax(*pauVar4,auVar5,4);
    pauVar4 = pauVar4 + 1;
  }
  fVar2 = auVar5._0_4_;
  for (; lVar3 < (int)param_3; lVar3 = lVar3 + 1) {
    fVar1 = *(float *)(*param_1 + lVar3 * 4);
    if (*(float *)(*param_1 + lVar3 * 4) <= fVar2) {
      fVar1 = fVar2;
    }
    fVar2 = fVar1;
  }
  *param_2 = fVar2;
  return;
}


