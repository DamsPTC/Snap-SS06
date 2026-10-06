/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a29ad44; end: 10a29ae43;  */

undefined8 * FUN_10a29ad44(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8a60;
  FUN_10a2965a8(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8ab0;
  FUN_10a29a810(param_1 + 0xb);
  FUN_10a29a8c4(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a29ae44; end: 10a29ae83;  */

/* WARNING: Removing unreachable block (ram,0x00010a536c98) */
/* WARNING: Removing unreachable block (ram,0x00010a536c90) */
/* WARNING: Removing unreachable block (ram,0x00010a536c04) */
/* WARNING: Removing unreachable block (ram,0x00010a536cc4) */
/* WARNING: Removing unreachable block (ram,0x00010a536ca8) */
/* WARNING: Removing unreachable block (ram,0x00010a536cac) */
/* WARNING: Removing unreachable block (ram,0x00010a536fe0) */
/* WARNING: Removing unreachable block (ram,0x00010a536cb4) */
/* WARNING: Removing unreachable block (ram,0x00010a536ce4) */

void FUN_10a29ae44(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 in_x7;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong unaff_x22;
  ulong uVar20;
  long lVar21;
  float fVar22;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  long alStack_180 [7];
  undefined8 uStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 auStack_b0 [7];
  undefined8 uStack_78;
  long lStack_70;
  
  plVar16 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (((ulong)plVar16 & 1) != 0) {
    return;
  }
  lVar7 = param_1[0xe];
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(lVar7 + 0x98);
  lVar10 = lVar7 + 0x70;
  FUN_10a5412e8(lVar10,3);
  if (lVar10 == 0) {
    uVar20 = *(ulong *)(lVar7 + 0x78);
    if (uVar20 != 0) {
      uVar14 = uVar20 - 1;
      if ((uVar20 & uVar14) == 0) {
        unaff_x22 = (ulong)((uint)uVar20 - 1) & 3;
      }
      else {
        unaff_x22 = 3;
        if (uVar20 < 4) {
          uVar1 = (uint)uVar20 & 0xff;
          uVar4 = 0;
          if ((uVar20 & 0xff) != 0) {
            uVar4 = 3 / uVar1;
          }
          unaff_x22 = (ulong)(3 - uVar4 * uVar1);
        }
      }
      plVar16 = *(long **)(*(long *)(lVar7 + 0x70) + unaff_x22 * 8);
      if (plVar16 != (long *)0x0) {
        do {
          while( true ) {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_10a5368f8;
            uVar17 = plVar16[1];
            if (uVar17 != 3) break;
            if (*(char *)(plVar16 + 2) == '\x03') goto LAB_10a536b80;
          }
          if ((uVar20 & uVar14) == 0) {
            uVar17 = uVar17 & uVar14;
          }
          else if (uVar20 <= uVar17) {
            uVar15 = 0;
            if (uVar20 != 0) {
              uVar15 = uVar17 / uVar20;
            }
            uVar17 = uVar17 - uVar15 * uVar20;
          }
        } while (uVar17 == unaff_x22);
      }
    }
LAB_10a5368f8:
    plVar16 = (long *)0x18;
    __Znwm();
    *plVar16 = 0;
    plVar16[1] = 3;
    *(undefined1 *)(plVar16 + 2) = 3;
    fVar22 = (float)(*(long *)(lVar7 + 0x88) + 1);
    if ((uVar20 == 0) || (*(float *)(lVar7 + 0x90) * (float)uVar20 < fVar22)) {
      uVar14 = 1;
      if (2 < uVar20) {
        uVar14 = (ulong)((uVar20 & uVar20 - 1) != 0);
      }
      uVar14 = uVar14 | uVar20 << 1;
      uVar17 = (ulong)(fVar22 / *(float *)(lVar7 + 0x90));
      if (uVar14 <= uVar17) {
        uVar14 = uVar17;
      }
      if (uVar14 - 1 == 0) {
        uVar14 = 2;
      }
      else if ((uVar14 & uVar14 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar20 = *(ulong *)(lVar7 + 0x78);
      }
      if (uVar20 < uVar14) {
LAB_10a536990:
        if (uVar14 >> 0x3d != 0) goto LAB_10a536fd8;
        lVar10 = uVar14 << 3;
        __Znwm();
        lVar21 = *(long *)(lVar7 + 0x70);
        *(long *)(lVar7 + 0x70) = lVar10;
        if (lVar21 != 0) {
          __ZdlPv();
        }
        uVar20 = 0;
        *(ulong *)(lVar7 + 0x78) = uVar14;
        do {
          *(undefined8 *)(*(long *)(lVar7 + 0x70) + uVar20 * 8) = 0;
          uVar20 = uVar20 + 1;
        } while (uVar14 != uVar20);
        plVar11 = *(long **)(lVar7 + 0x80);
        uVar20 = uVar14;
        if (plVar11 != (long *)0x0) {
          uVar17 = plVar11[1];
          uVar15 = uVar14 - 1;
          if ((uVar14 & uVar15) == 0) {
            uVar17 = uVar17 & uVar15;
          }
          else if (uVar14 <= uVar17) {
            uVar19 = 0;
            if (uVar14 != 0) {
              uVar19 = uVar17 / uVar14;
            }
            uVar17 = uVar17 - uVar19 * uVar14;
          }
          *(undefined8 **)(*(long *)(lVar7 + 0x70) + uVar17 * 8) = (undefined8 *)(lVar7 + 0x80);
          plVar18 = (long *)*plVar11;
          while (plVar18 != (long *)0x0) {
            uVar19 = plVar18[1];
            if ((uVar14 & uVar15) == 0) {
              uVar19 = uVar19 & uVar15;
            }
            else if (uVar14 <= uVar19) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar19 / uVar14;
              }
              uVar19 = uVar19 - uVar5 * uVar14;
            }
            plVar12 = plVar18;
            if (uVar19 != uVar17) {
              lVar10 = *(long *)(lVar7 + 0x70);
              if (*(long *)(lVar10 + uVar19 * 8) == 0) {
                *(long **)(lVar10 + uVar19 * 8) = plVar11;
                uVar17 = uVar19;
              }
              else {
                *plVar11 = *plVar18;
                *plVar18 = **(undefined8 **)(lVar10 + uVar19 * 8);
                **(long **)(lVar10 + uVar19 * 8) = (long)plVar18;
                plVar12 = plVar11;
              }
            }
            plVar11 = plVar12;
            plVar18 = (long *)*plVar12;
          }
        }
      }
      else if (uVar14 < uVar20) {
        uVar17 = (ulong)((float)*(ulong *)(lVar7 + 0x88) / *(float *)(lVar7 + 0x90));
        if ((uVar20 < 3) || ((uVar20 & uVar20 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar17) {
          uVar17 = 1L << (-LZCOUNT(uVar17 - 1) & 0x3fU);
        }
        if (uVar14 <= uVar17) {
          uVar14 = uVar17;
        }
        if (uVar14 < uVar20) {
          if (uVar14 != 0) goto LAB_10a536990;
          lVar10 = *(long *)(lVar7 + 0x70);
          *(undefined8 *)(lVar7 + 0x70) = 0;
          if (lVar10 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(lVar7 + 0x78) = 0;
          uVar20 = 0;
        }
        else {
          uVar20 = *(ulong *)(lVar7 + 0x78);
        }
      }
      if ((uVar20 & uVar20 - 1) == 0) {
        unaff_x22 = (ulong)((int)uVar20 - 1) & 3;
      }
      else if (uVar20 < 4) {
        uVar14 = 0;
        if (uVar20 != 0) {
          uVar14 = 3 / uVar20;
        }
        unaff_x22 = 3 - uVar14 * uVar20;
      }
      else {
        unaff_x22 = 3;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x70);
    plVar11 = *(long **)(lVar10 + unaff_x22 * 8);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)(lVar7 + 0x80);
      *plVar16 = *plVar11;
      *plVar11 = (long)plVar16;
      *(long **)(lVar10 + unaff_x22 * 8) = plVar11;
      if (*plVar16 != 0) {
        uVar14 = *(ulong *)(*plVar16 + 8);
        if ((uVar20 & uVar20 - 1) == 0) {
          uVar14 = uVar14 & uVar20 - 1;
        }
        else if (uVar20 <= uVar14) {
          uVar17 = 0;
          if (uVar20 != 0) {
            uVar17 = uVar14 / uVar20;
          }
          uVar14 = uVar14 - uVar17 * uVar20;
        }
        plVar11 = (long *)(*(long *)(lVar7 + 0x70) + uVar14 * 8);
        goto LAB_10a536b70;
      }
    }
    else {
      *plVar16 = *plVar11;
LAB_10a536b70:
      *plVar11 = (long)plVar16;
    }
    *(long *)(lVar7 + 0x88) = *(long *)(lVar7 + 0x88) + 1;
LAB_10a536b80:
    __ZNSt3__15mutex6unlockEv(lVar7 + 0x98);
    ppuVar8 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    uStack_118 = 0;
    if (*ppuVar8 != (undefined *)0x0) {
      plVar16 = *(long **)(*ppuVar8 + 0x10);
      if (plVar16 == (long *)0x0) {
        uStack_118 = 0;
      }
      else {
        puVar9 = (undefined8 *)0x20;
        __Znwm();
        auStack_b0[0] = 0x8000000000000020;
        plStack_b8 = (long *)0x1b;
        *(undefined8 *)((long)puVar9 + 0x13) = 0x54494d494c5f544e;
        *(undefined8 *)((long)puVar9 + 0xb) = 0x554f435f444e4549;
        puVar9[1] = 0x5f444e454952465f;
        *puVar9 = 0x45524f43534e454c;
        *(undefined1 *)((long)puVar9 + 0x1b) = 0;
        puStack_c0 = puVar9;
        (**(code **)(*plVar16 + 0x40))(plVar16,&puStack_c0,0);
        uStack_118 = (long)plVar16 << 0x20;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x20);
    uStack_120 = *(undefined8 *)(lVar7 + 0x20);
    uStack_128 = *(undefined8 *)(lVar7 + 0x18);
    if (lVar10 != 0) {
      plVar16 = (long *)(lVar10 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_140 = FUN_10a5414ec;
    ppuStack_138 = &PTR_FUN_110bf0118;
    uStack_118 = uStack_118 | 3;
    lStack_130 = lVar7;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a3bf120(&puStack_190);
    lVar21 = *(long *)(*(long *)(lVar7 + 8) + 0x100);
    FUN_10a00ce20(&uStack_1b8,*(undefined8 *)(lVar7 + 0x28),&pcStack_140);
    plVar11 = (long *)0x138;
    __Znwm();
    puStack_c0 = puStack_190;
    plVar18 = plVar11 + 1;
    *plVar18 = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&PTR_FUN_110b9f3b0;
    plVar16 = plVar11 + 3;
    puStack_190 = (undefined8 *)0x0;
    plStack_b8 = (long *)uStack_188;
    (**(code **)(alStack_180[0] + 0x10))(auStack_b0,alStack_180);
    uStack_78 = uStack_148;
    uVar20 = *(ulong *)(lVar21 + 0x210);
    lVar10 = *(long *)(lVar21 + 0x208);
    if (-1 < (char)*(byte *)(lVar21 + 0x21f)) {
      uVar20 = (ulong)*(byte *)(lVar21 + 0x21f);
      lVar10 = lVar21 + 0x208;
    }
    uStack_100 = 0x10a05c39c;
    ppuStack_f8 = &PTR_FUN_110b9f370;
    uStack_f0 = uStack_1b8;
    uStack_e0 = uStack_1a8;
    uStack_e8 = uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    FUN_10a23708c(plVar16,&UNK_10e4c9516,0x2a,&UNK_10f647b45,3,&puStack_c0,0,in_x7,lVar10,uVar20,
                  &uStack_100);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    FUN_10a042634(&puStack_c0);
    plStack_1a0 = plVar16;
    plStack_198 = plVar11;
    func_0x00010a05c07c(&uStack_1b8);
    FUN_10a042634(&puStack_190);
    plVar12 = *(long **)(*(long *)(*(long *)(lVar7 + 8) + 0x100) + 0x1c8);
    (**(code **)(*plVar12 + 0x60))();
    puStack_c0 = (undefined8 *)0x0;
    plStack_b8 = (long *)0x0;
    plVar13 = (long *)plVar12[1];
    if (((plVar13 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar13, plVar13 == (long *)0x0)) ||
       (puStack_c0 = (undefined8 *)*plVar12, puStack_c0 == (undefined8 *)0x0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f65e989,&UNK_10f65e9c8,0x72,&UNK_10f65ea28);
      }
    }
    else {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar3) {
          *plVar18 = *plVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_1c8 = plVar16;
      plStack_1c0 = plVar11;
      (**(code **)*puStack_c0)(puStack_c0,&plStack_1c8);
      plVar16 = plStack_1c0;
      if (plStack_1c0 != (long *)0x0) {
        plVar11 = plStack_1c0 + 1;
        do {
          lVar10 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
    }
    plVar16 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar11 = plStack_b8 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar11 = plStack_198 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    (*(code *)*ppuStack_138)(&ppuStack_138);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar7 + 0x98);
    return;
  }
  ___stack_chk_fail();
LAB_10a536fd8:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a53700c);
  (*pcVar6)();
}



/* Entry: 10a29ae84; end: 10a29aebb;  */

bool FUN_10a29ae84(long param_1)

{
  long lVar1;
  undefined1 uStack_11;
  
  uStack_11 = 3;
  lVar1 = *(long *)(param_1 + 0x70) + 0x38;
  func_0x00010a54138c(lVar1,&uStack_11);
  return lVar1 != 0;
}



/* Entry: 10a29aebc; end: 10a29aefb;  */

void FUN_10a29aebc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  plVar4 = *(long **)(param_2 + 0x70);
  FUN_10a537110(plVar4,3);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar7 = (undefined8 *)*plVar4;
  puVar1 = (undefined8 *)plVar4[1];
  lVar5 = (long)puVar1 - (long)puVar7 >> 4;
  if (lVar5 != 0) {
    FUN_10a26a110(param_1,lVar5);
    puVar6 = (undefined8 *)param_1[1];
    for (; puVar7 != puVar1; puVar7 = puVar7 + 2) {
      lVar5 = puVar7[1];
      uVar8 = *puVar7;
      puVar6[1] = puVar7[1];
      *puVar6 = uVar8;
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
    param_1[1] = puVar6;
  }
  return;
}



/* Entry: 10a29aefc; end: 10a29af07;  */

void FUN_10a29aefc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10a29af08; end: 10a29b007;  */

undefined8 * FUN_10a29af08(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8cb0;
  FUN_10a2965a8(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8d00;
  FUN_10a29b5c8(param_1 + 0xb);
  FUN_10a29b67c(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a29b008; end: 10a29b4e7;  */

/* WARNING: Type propagation algorithm not settling */

code **** FUN_10a29b008(code ****param_1,code ****param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  code ****ppppcVar5;
  code ****ppppcVar6;
  code ***pppcVar7;
  code ***pppcVar8;
  code ****ppppcVar9;
  code ***pppcVar10;
  code ****ppppcStack_150;
  code ****ppppcStack_148;
  code ***pppcStack_140;
  code ***pppcStack_138;
  code ***pppcStack_130;
  code ***pppcStack_128;
  code ****ppppcStack_120;
  code ****ppppcStack_118;
  code ***pppcStack_110;
  code ***pppcStack_108;
  long lStack_100;
  code ****ppppcStack_f0;
  code ****ppppcStack_e8;
  code ***pppcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  code ****ppppcStack_c0;
  undefined **ppuStack_b8;
  undefined8 *puStack_b0;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar6 = param_1;
  (*(code *)(*param_1)[3])();
  if ((int)ppppcVar6 != 0) {
    (*(code *)(*param_1)[4])(param_1);
    ppppcVar6 = param_1;
    (*(code *)(*param_1)[5])();
    if ((int)ppppcVar6 != 0) {
      (*(code *)(*param_1)[6])(&pppcStack_108,param_1);
      ppppcVar6 = (code ****)param_1[8];
      pppcStack_110 = param_1[10];
      ppppcVar9 = (code ****)param_1[9];
      param_1[9] = (code ***)0x0;
      param_1[10] = (code ***)0x0;
      param_1[8] = (code ***)0x0;
      ppppcStack_120 = ppppcVar6;
      ppppcStack_118 = ppppcVar9;
      if (ppppcVar6 != ppppcVar9) {
        do {
          pppcVar8 = *ppppcVar6;
          ppppcStack_c0 = (code ****)0x0;
          ppuStack_b8 = (undefined **)0x0;
          puStack_b0 = (undefined8 *)0x0;
          FUN_10a29b6f4(&ppppcStack_c0,pppcStack_108,lStack_100,
                        lStack_100 - (long)pppcStack_108 >> 4);
          param_2 = ppppcVar6;
          (*(code *)pppcVar8)(&ppppcStack_c0);
          ppppcStack_f0 = (code ****)&ppppcStack_c0;
          FUN_10a29b848(&ppppcStack_f0);
          ppppcVar6 = ppppcVar6 + 8;
        } while (ppppcVar6 != ppppcVar9);
      }
      pppcVar8 = param_1[0xb];
      pppcStack_128 = param_1[0xd];
      pppcVar10 = param_1[0xc];
      param_1[0xc] = (code ***)0x0;
      param_1[0xd] = (code ***)0x0;
      param_1[0xb] = (code ***)0x0;
      pppcStack_138 = pppcVar8;
      pppcStack_130 = pppcVar10;
      if (pppcVar8 != pppcVar10) {
        do {
          ppppcVar6 = (code ****)*pppcVar8;
          if (ppppcVar6 == (code ****)0x0 || *(char *)(ppppcVar6 + 8) != '\x02') {
            ppppcVar5 = param_2;
            if (ppppcVar6 != (code ****)0x0 && *(char *)(ppppcVar6 + 8) == '\x01') {
              pppcVar7 = *ppppcVar6;
              ppppcStack_c0 = (code ****)0x0;
              ppuStack_b8 = (undefined **)0x0;
              puStack_b0 = (undefined8 *)0x0;
              FUN_10a29b6f4(&ppppcStack_c0,pppcStack_108,lStack_100,
                            lStack_100 - (long)pppcStack_108 >> 4);
              (*(code *)pppcVar7)(&ppppcStack_c0);
              ppppcStack_f0 = (code ****)&ppppcStack_c0;
              FUN_10a29b848(&ppppcStack_f0);
              ppppcVar5 = ppppcVar6;
            }
          }
          else {
            ppppcVar9 = ppppcVar6;
            FUN_10a688b40();
            if (ppppcVar9 == (code ****)0x0) {
              ppppcVar5 = param_2;
              if (param_2 != (code ****)0x0) {
                ppppcStack_e8 = (code ****)ppppcVar6[1];
                ppppcStack_f0 = (code ****)*ppppcVar6;
                if (ppppcVar6[1] != (code ***)0x0) {
                  pppcVar7 = ppppcVar6[1] + 1;
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(pppcVar7,0x10);
                    if (bVar2) {
                      *pppcVar7 = (code **)((long)*pppcVar7 + 1);
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                pppcStack_e0 = (code ***)0x0;
                uStack_d8 = 0;
                uStack_d0 = 0;
                FUN_10a29b6f4(&pppcStack_e0,pppcStack_108,lStack_100,
                              lStack_100 - (long)pppcStack_108 >> 4);
                ppppcStack_c0 = (code ****)FUN_10a29bbec;
                ppuStack_b8 = &PTR_FUN_110bb8d40;
                puVar4 = (undefined8 *)0x28;
                __Znwm();
                puVar4[1] = ppppcStack_e8;
                *puVar4 = ppppcStack_f0;
                ppppcStack_f0 = (code ****)0x0;
                ppppcStack_e8 = (code ****)0x0;
                puVar4[3] = 0;
                puVar4[4] = 0;
                puVar4[2] = 0;
                FUN_10a29b6f4();
                ppppcVar5 = (code ****)&ppppcStack_c0;
                puStack_b0 = puVar4;
                FUN_10a4634ec(param_2);
                (*(code *)*ppuStack_b8)(&ppuStack_b8);
                ppppcStack_150 = &pppcStack_e0;
                FUN_10a29b848(&ppppcStack_150);
                ppppcVar6 = ppppcStack_e8;
                if (ppppcStack_e8 != (code ****)0x0) {
                  ppppcVar9 = ppppcStack_e8 + 1;
                  do {
                    pppcVar7 = *ppppcVar9;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppppcVar9,0x10);
                    if (bVar2) {
                      *ppppcVar9 = (code ***)((long)pppcVar7 + -1);
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (pppcVar7 == (code ***)0x0) {
                    (*(code *)(*ppppcStack_e8)[2])(ppppcStack_e8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar6);
                  }
                }
              }
            }
            else {
              *ppppcVar9 = (code ***)
                           CONCAT44((int)((ulong)*ppppcVar9 >> 0x20) + 1,(int)*ppppcVar9 + 1);
              ppppcVar5 = &pppcStack_108;
              FUN_10a29b8b8(*ppppcVar6);
              iVar3 = *(int *)((long)ppppcVar9 + 4) + -1;
              *(int *)((long)ppppcVar9 + 4) = iVar3;
              if (iVar3 == 0) {
                *(undefined4 *)ppppcVar9 = 0;
              }
            }
          }
          pppcVar8 = pppcVar8 + 2;
          param_2 = ppppcVar5;
        } while (pppcVar8 != pppcVar10);
      }
      if ((param_1[1] != param_1[2]) || (param_1[4] != param_1[5])) {
        (*(code *)(*param_1)[7])(&ppppcStack_c0,param_1,&pppcStack_108);
        ppppcVar6 = (code ****)param_1[1];
        pppcStack_e0 = param_1[3];
        ppppcVar9 = (code ****)param_1[2];
        param_1[2] = (code ***)0x0;
        param_1[3] = (code ***)0x0;
        param_1[1] = (code ***)0x0;
        ppppcStack_f0 = ppppcVar6;
        ppppcStack_e8 = ppppcVar9;
        for (; ppppcVar6 != ppppcVar9; ppppcVar6 = ppppcVar6 + 8) {
          FUN_10a2974b8(ppppcVar6,&ppppcStack_c0);
        }
        ppppcVar6 = (code ****)param_1[4];
        pppcStack_140 = param_1[6];
        ppppcVar9 = (code ****)param_1[5];
        param_1[5] = (code ***)0x0;
        param_1[6] = (code ***)0x0;
        param_1[4] = (code ***)0x0;
        ppppcStack_150 = ppppcVar6;
        ppppcStack_148 = ppppcVar9;
        for (; ppppcVar6 != ppppcVar9; ppppcVar6 = ppppcVar6 + 2) {
          FUN_10a1bcbe0(*ppppcVar6,&ppppcStack_c0);
        }
        FUN_10a2973e4(&ppppcStack_150);
        FUN_10a297440(&ppppcStack_f0);
        if ((long)puStack_b0 < 0) {
          __ZdlPv(ppppcStack_c0);
        }
      }
      FUN_10a29b5c8(&pppcStack_138);
      FUN_10a29b67c(&ppppcStack_120);
      ppppcStack_c0 = &pppcStack_108;
      ppppcVar6 = (code ****)&ppppcStack_c0;
      FUN_10a29b848();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppppcVar6;
  }
  ___stack_chk_fail();
  FUN_10a29b5c8(&pppcStack_138);
  FUN_10a29b67c(&ppppcStack_120);
  ppppcStack_f0 = &pppcStack_108;
  FUN_10a29b848(&ppppcStack_f0);
  __Unwind_Resume();
  if (((ppppcVar6[1] == ppppcVar6[2]) && (ppppcVar6[4] == ppppcVar6[5])) &&
     (ppppcVar6[8] == ppppcVar6[9])) {
    return (code ****)(ulong)(ppppcVar6[0xb] != ppppcVar6[0xc]);
  }
  return (code ****)0x1;
}



/* Entry: 10a29b4e8; end: 10a29b523;  */

bool FUN_10a29b4e8(long param_1)

{
  if (((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
      (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28))) &&
     (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))) {
    return *(long *)(param_1 + 0x58) != *(long *)(param_1 + 0x60);
  }
  return true;
}



/* Entry: 10a29b524; end: 10a29b563;  */

/* WARNING: Removing unreachable block (ram,0x00010a536c80) */
/* WARNING: Removing unreachable block (ram,0x00010a536c88) */
/* WARNING: Removing unreachable block (ram,0x00010a536cd4) */
/* WARNING: Removing unreachable block (ram,0x00010a536c90) */
/* WARNING: Removing unreachable block (ram,0x00010a536fe0) */
/* WARNING: Removing unreachable block (ram,0x00010a536c98) */
/* WARNING: Removing unreachable block (ram,0x00010a536ce4) */
/* WARNING: Removing unreachable block (ram,0x00010a536c04) */
/* WARNING: Removing unreachable block (ram,0x00010a536cc4) */

void FUN_10a29b524(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 in_x7;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong unaff_x22;
  ulong uVar20;
  long lVar21;
  float fVar22;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  long alStack_180 [7];
  undefined8 uStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 auStack_b0 [7];
  undefined8 uStack_78;
  long lStack_70;
  
  plVar16 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (((ulong)plVar16 & 1) != 0) {
    return;
  }
  lVar7 = param_1[0xe];
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(lVar7 + 0x98);
  lVar10 = lVar7 + 0x70;
  FUN_10a5412e8(lVar10,1);
  if (lVar10 == 0) {
    uVar20 = *(ulong *)(lVar7 + 0x78);
    if (uVar20 != 0) {
      uVar14 = uVar20 - 1;
      if ((uVar20 & uVar14) == 0) {
        unaff_x22 = (ulong)((uint)uVar20 - 1) & 1;
      }
      else {
        unaff_x22 = 1;
        if (uVar20 < 2) {
          uVar1 = (uint)uVar20 & 0xff;
          uVar4 = 0;
          if ((uVar20 & 0xff) != 0) {
            uVar4 = 1 / uVar1;
          }
          unaff_x22 = (ulong)(1 - uVar4 * uVar1);
        }
      }
      plVar16 = *(long **)(*(long *)(lVar7 + 0x70) + unaff_x22 * 8);
      if (plVar16 != (long *)0x0) {
        do {
          while( true ) {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_10a5368f8;
            uVar17 = plVar16[1];
            if (uVar17 != 1) break;
            if (*(char *)(plVar16 + 2) == '\x01') goto LAB_10a536b80;
          }
          if ((uVar20 & uVar14) == 0) {
            uVar17 = uVar17 & uVar14;
          }
          else if (uVar20 <= uVar17) {
            uVar15 = 0;
            if (uVar20 != 0) {
              uVar15 = uVar17 / uVar20;
            }
            uVar17 = uVar17 - uVar15 * uVar20;
          }
        } while (uVar17 == unaff_x22);
      }
    }
LAB_10a5368f8:
    plVar16 = (long *)0x18;
    __Znwm();
    *plVar16 = 0;
    plVar16[1] = 1;
    *(undefined1 *)(plVar16 + 2) = 1;
    fVar22 = (float)(*(long *)(lVar7 + 0x88) + 1);
    if ((uVar20 == 0) || (*(float *)(lVar7 + 0x90) * (float)uVar20 < fVar22)) {
      uVar14 = 1;
      if (2 < uVar20) {
        uVar14 = (ulong)((uVar20 & uVar20 - 1) != 0);
      }
      uVar14 = uVar14 | uVar20 << 1;
      uVar17 = (ulong)(fVar22 / *(float *)(lVar7 + 0x90));
      if (uVar14 <= uVar17) {
        uVar14 = uVar17;
      }
      if (uVar14 - 1 == 0) {
        uVar14 = 2;
      }
      else if ((uVar14 & uVar14 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar20 = *(ulong *)(lVar7 + 0x78);
      }
      if (uVar20 < uVar14) {
LAB_10a536990:
        if (uVar14 >> 0x3d != 0) goto LAB_10a536fd8;
        lVar10 = uVar14 << 3;
        __Znwm();
        lVar21 = *(long *)(lVar7 + 0x70);
        *(long *)(lVar7 + 0x70) = lVar10;
        if (lVar21 != 0) {
          __ZdlPv();
        }
        uVar20 = 0;
        *(ulong *)(lVar7 + 0x78) = uVar14;
        do {
          *(undefined8 *)(*(long *)(lVar7 + 0x70) + uVar20 * 8) = 0;
          uVar20 = uVar20 + 1;
        } while (uVar14 != uVar20);
        plVar11 = *(long **)(lVar7 + 0x80);
        uVar20 = uVar14;
        if (plVar11 != (long *)0x0) {
          uVar17 = plVar11[1];
          uVar15 = uVar14 - 1;
          if ((uVar14 & uVar15) == 0) {
            uVar17 = uVar17 & uVar15;
          }
          else if (uVar14 <= uVar17) {
            uVar19 = 0;
            if (uVar14 != 0) {
              uVar19 = uVar17 / uVar14;
            }
            uVar17 = uVar17 - uVar19 * uVar14;
          }
          *(undefined8 **)(*(long *)(lVar7 + 0x70) + uVar17 * 8) = (undefined8 *)(lVar7 + 0x80);
          plVar18 = (long *)*plVar11;
          while (plVar18 != (long *)0x0) {
            uVar19 = plVar18[1];
            if ((uVar14 & uVar15) == 0) {
              uVar19 = uVar19 & uVar15;
            }
            else if (uVar14 <= uVar19) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar19 / uVar14;
              }
              uVar19 = uVar19 - uVar5 * uVar14;
            }
            plVar12 = plVar18;
            if (uVar19 != uVar17) {
              lVar10 = *(long *)(lVar7 + 0x70);
              if (*(long *)(lVar10 + uVar19 * 8) == 0) {
                *(long **)(lVar10 + uVar19 * 8) = plVar11;
                uVar17 = uVar19;
              }
              else {
                *plVar11 = *plVar18;
                *plVar18 = **(undefined8 **)(lVar10 + uVar19 * 8);
                **(long **)(lVar10 + uVar19 * 8) = (long)plVar18;
                plVar12 = plVar11;
              }
            }
            plVar11 = plVar12;
            plVar18 = (long *)*plVar12;
          }
        }
      }
      else if (uVar14 < uVar20) {
        uVar17 = (ulong)((float)*(ulong *)(lVar7 + 0x88) / *(float *)(lVar7 + 0x90));
        if ((uVar20 < 3) || ((uVar20 & uVar20 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar17) {
          uVar17 = 1L << (-LZCOUNT(uVar17 - 1) & 0x3fU);
        }
        if (uVar14 <= uVar17) {
          uVar14 = uVar17;
        }
        if (uVar14 < uVar20) {
          if (uVar14 != 0) goto LAB_10a536990;
          lVar10 = *(long *)(lVar7 + 0x70);
          *(undefined8 *)(lVar7 + 0x70) = 0;
          if (lVar10 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(lVar7 + 0x78) = 0;
          uVar20 = 0;
        }
        else {
          uVar20 = *(ulong *)(lVar7 + 0x78);
        }
      }
      if ((uVar20 & uVar20 - 1) == 0) {
        unaff_x22 = (ulong)((int)uVar20 - 1) & 1;
      }
      else if (uVar20 < 2) {
        uVar14 = 0;
        if (uVar20 != 0) {
          uVar14 = 1 / uVar20;
        }
        unaff_x22 = 1 - uVar14 * uVar20;
      }
      else {
        unaff_x22 = 1;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x70);
    plVar11 = *(long **)(lVar10 + unaff_x22 * 8);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)(lVar7 + 0x80);
      *plVar16 = *plVar11;
      *plVar11 = (long)plVar16;
      *(long **)(lVar10 + unaff_x22 * 8) = plVar11;
      if (*plVar16 != 0) {
        uVar14 = *(ulong *)(*plVar16 + 8);
        if ((uVar20 & uVar20 - 1) == 0) {
          uVar14 = uVar14 & uVar20 - 1;
        }
        else if (uVar20 <= uVar14) {
          uVar17 = 0;
          if (uVar20 != 0) {
            uVar17 = uVar14 / uVar20;
          }
          uVar14 = uVar14 - uVar17 * uVar20;
        }
        plVar11 = (long *)(*(long *)(lVar7 + 0x70) + uVar14 * 8);
        goto LAB_10a536b70;
      }
    }
    else {
      *plVar16 = *plVar11;
LAB_10a536b70:
      *plVar11 = (long)plVar16;
    }
    *(long *)(lVar7 + 0x88) = *(long *)(lVar7 + 0x88) + 1;
LAB_10a536b80:
    __ZNSt3__15mutex6unlockEv(lVar7 + 0x98);
    ppuVar8 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    uStack_118 = 0;
    if (*ppuVar8 != (undefined *)0x0) {
      plVar16 = *(long **)(*ppuVar8 + 0x10);
      if (plVar16 == (long *)0x0) {
        uStack_118 = 0;
      }
      else {
        puVar9 = (undefined8 *)0x20;
        __Znwm();
        auStack_b0[0] = 0x8000000000000020;
        plStack_b8 = (long *)0x1b;
        *(undefined8 *)((long)puVar9 + 0x13) = 0x54494d494c5f544e;
        *(undefined8 *)((long)puVar9 + 0xb) = 0x554f435f444e4549;
        puVar9[1] = 0x5f444e454952465f;
        *puVar9 = 0x45524f43534e454c;
        *(undefined1 *)((long)puVar9 + 0x1b) = 0;
        puStack_c0 = puVar9;
        (**(code **)(*plVar16 + 0x40))(plVar16,&puStack_c0,0);
        uStack_118 = (long)plVar16 << 0x20;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x20);
    uStack_120 = *(undefined8 *)(lVar7 + 0x20);
    uStack_128 = *(undefined8 *)(lVar7 + 0x18);
    if (lVar10 != 0) {
      plVar16 = (long *)(lVar10 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_140 = FUN_10a5414ec;
    ppuStack_138 = &PTR_FUN_110bf0118;
    uStack_118 = uStack_118 | 1;
    lStack_130 = lVar7;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a3bf120(&puStack_190);
    lVar21 = *(long *)(*(long *)(lVar7 + 8) + 0x100);
    FUN_10a00ce20(&uStack_1b8,*(undefined8 *)(lVar7 + 0x28),&pcStack_140);
    plVar11 = (long *)0x138;
    __Znwm();
    puStack_c0 = puStack_190;
    plVar18 = plVar11 + 1;
    *plVar18 = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&PTR_FUN_110b9f3b0;
    plVar16 = plVar11 + 3;
    puStack_190 = (undefined8 *)0x0;
    plStack_b8 = (long *)uStack_188;
    (**(code **)(alStack_180[0] + 0x10))(auStack_b0,alStack_180);
    uStack_78 = uStack_148;
    uVar20 = *(ulong *)(lVar21 + 0x210);
    lVar10 = *(long *)(lVar21 + 0x208);
    if (-1 < (char)*(byte *)(lVar21 + 0x21f)) {
      uVar20 = (ulong)*(byte *)(lVar21 + 0x21f);
      lVar10 = lVar21 + 0x208;
    }
    uStack_100 = 0x10a05c39c;
    ppuStack_f8 = &PTR_FUN_110b9f370;
    uStack_f0 = uStack_1b8;
    uStack_e0 = uStack_1a8;
    uStack_e8 = uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    FUN_10a23708c(plVar16,&UNK_10e4c94cb,0x24,&UNK_10f647b45,3,&puStack_c0,0,in_x7,lVar10,uVar20,
                  &uStack_100);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    FUN_10a042634(&puStack_c0);
    plStack_1a0 = plVar16;
    plStack_198 = plVar11;
    func_0x00010a05c07c(&uStack_1b8);
    FUN_10a042634(&puStack_190);
    plVar12 = *(long **)(*(long *)(*(long *)(lVar7 + 8) + 0x100) + 0x1c8);
    (**(code **)(*plVar12 + 0x60))();
    puStack_c0 = (undefined8 *)0x0;
    plStack_b8 = (long *)0x0;
    plVar13 = (long *)plVar12[1];
    if (((plVar13 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar13, plVar13 == (long *)0x0)) ||
       (puStack_c0 = (undefined8 *)*plVar12, puStack_c0 == (undefined8 *)0x0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f65e989,&UNK_10f65e9c8,0x72,&UNK_10f65ea28);
      }
    }
    else {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar3) {
          *plVar18 = *plVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_1c8 = plVar16;
      plStack_1c0 = plVar11;
      (**(code **)*puStack_c0)(puStack_c0,&plStack_1c8);
      plVar16 = plStack_1c0;
      if (plStack_1c0 != (long *)0x0) {
        plVar11 = plStack_1c0 + 1;
        do {
          lVar10 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
    }
    plVar16 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar11 = plStack_b8 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar11 = plStack_198 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    (*(code *)*ppuStack_138)(&ppuStack_138);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar7 + 0x98);
    return;
  }
  ___stack_chk_fail();
LAB_10a536fd8:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a53700c);
  (*pcVar6)();
}



/* Entry: 10a29b564; end: 10a29b59b;  */

bool FUN_10a29b564(long param_1)

{
  long lVar1;
  undefined1 uStack_11;
  
  uStack_11 = 1;
  lVar1 = *(long *)(param_1 + 0x70) + 0x38;
  func_0x00010a54138c(lVar1,&uStack_11);
  return lVar1 != 0;
}



/* Entry: 10a29b59c; end: 10a29b5c7;  */

void FUN_10a29b59c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  plVar6 = *(long **)(param_2 + 0x70);
  FUN_10a537110(plVar6,1);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a53803c(param_1,plVar6[1] - *plVar6 >> 4);
  plVar2 = (long *)plVar6[1];
  for (plVar6 = (long *)*plVar6; plVar6 != plVar2; plVar6 = plVar6 + 2) {
    lVar7 = *plVar6;
    FUN_10a541430(auStack_48,&uStack_31,lVar7 + 0x18,lVar7 + 0x30,lVar7 + 0x78);
    func_0x00010a5380d4(param_1,auStack_48);
    plVar5 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10a29b5c8; end: 10a29b67b;  */

void FUN_10a29b5c8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a29b624();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a29b67c; end: 10a29b6f3;  */

void FUN_10a29b67c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -7;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -8;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a29b6f4; end: 10a29b7a7;  */

void FUN_10a29b6f4(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_4 != 0) {
    if (param_4 >> 0x3c != 0) {
      FUN_10a29b7a8();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a29b794);
      (*pcVar4)();
    }
    plVar5 = param_1;
    FUN_10a29b7bc();
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar5;
    param_1[2] = (long)(plVar5 + param_4 * 2);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar6 = param_2[1];
      uVar7 = *param_2;
      plVar5[1] = param_2[1];
      *plVar5 = uVar7;
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
      plVar5 = plVar5 + 2;
    }
    param_1[1] = (long)plVar5;
  }
  return;
}



/* Entry: 10a29b7a8; end: 10a29b7bb;  */

undefined1  [16] FUN_10a29b7a8(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar5 = param_2 << 4;
    __Znwm(lVar5);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
  func_0x000109ffded8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 10a29b7bc; end: 10a29b847;  */

undefined1  [16] FUN_10a29b7bc(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar4 = param_2 << 4;
    __Znwm(lVar4);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar4;
    return auVar6;
  }
  func_0x000109ffded8();
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
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 10a29b848; end: 10a29b8b7;  */

void FUN_10a29b848(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a29b7f0();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a29b8b8; end: 10a29bb13;  */

void FUN_10a29b8b8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined8 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  lVar2 = *param_2;
  lVar4 = param_2[1];
  lVar3 = lVar4 - lVar2 >> 4;
  (**(code **)(*plVar1 + 600))(&ppuStack_60,plVar1,lVar3);
  piStack_40 = (int *)ppuStack_60;
  puStack_68 = ppuStack_60;
  if (lVar4 != lVar2) {
    lVar4 = 0;
    do {
      func_0x00010a29bb50(&ppuStack_60,plVar1,lVar2);
      (**(code **)(*plVar1 + 0x290))(plVar1,&piStack_40,lVar4,&ppuStack_60);
      if ((3 < (int)ppuStack_60) && (plStack_58 != (undefined8 *)0x0)) {
        (**(code **)*plStack_58)();
      }
      lVar4 = lVar4 + 1;
      lVar2 = lVar2 + 0x10;
      puStack_68 = (undefined8 *)piStack_40;
    } while (lVar3 != lVar4);
  }
  aiStack_70[0] = 7;
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = (undefined8 **)&piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && ((undefined8 **)puStack_68 != (undefined8 **)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a29bb14; end: 10a29bbeb;  */

void FUN_10a29bb14(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x10;
  FUN_10a29b848(&lStack_28);
  func_0x00010a004dac(param_1);
  return;
}



/* Entry: 10a29bbec; end: 10a29bbf7;  */

void FUN_10a29bbec(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined8 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = (undefined8 *)*puVar2;
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar3 = (long *)*puVar1;
  lVar4 = puVar2[2];
  lVar6 = puVar2[3];
  lVar5 = lVar6 - lVar4 >> 4;
  (**(code **)(*plVar3 + 600))(&ppuStack_60,plVar3,lVar5);
  piStack_40 = (int *)ppuStack_60;
  puStack_68 = ppuStack_60;
  if (lVar6 != lVar4) {
    lVar6 = 0;
    do {
      func_0x00010a29bb50(&ppuStack_60,plVar3,lVar4);
      (**(code **)(*plVar3 + 0x290))(plVar3,&piStack_40,lVar6,&ppuStack_60);
      if ((3 < (int)ppuStack_60) && (plStack_58 != (undefined8 *)0x0)) {
        (**(code **)*plStack_58)();
      }
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x10;
      puStack_68 = (undefined8 *)piStack_40;
    } while (lVar5 != lVar6);
  }
  aiStack_70[0] = 7;
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar3 + 0x58))(plVar3);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = (undefined8 **)&piStack_40;
  plStack_58 = plVar3;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && ((undefined8 **)puStack_68 != (undefined8 **)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a29bbf8; end: 10a29bc3b;  */

void FUN_10a29bbf8(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    lStack_28 = lVar1 + 0x10;
    FUN_10a29b848(&lStack_28);
    func_0x00010a004dac(lVar1);
    __ZdlPv();
  }
  return;
}



/* Entry: 10a29bc3c; end: 10a29bc53;  */

void FUN_10a29bc3c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a29bc54; end: 10a29bd53;  */

undefined8 * FUN_10a29bc54(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8cb0;
  FUN_10a2965a8(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8d00;
  FUN_10a29b5c8(param_1 + 0xb);
  FUN_10a29b67c(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a29bd54; end: 10a29bd93;  */

/* WARNING: Removing unreachable block (ram,0x00010a536ca8) */
/* WARNING: Removing unreachable block (ram,0x00010a536cac) */
/* WARNING: Removing unreachable block (ram,0x00010a536fe0) */
/* WARNING: Removing unreachable block (ram,0x00010a536cb4) */
/* WARNING: Removing unreachable block (ram,0x00010a536cd4) */
/* WARNING: Removing unreachable block (ram,0x00010a536c04) */
/* WARNING: Removing unreachable block (ram,0x00010a536cc4) */
/* WARNING: Removing unreachable block (ram,0x00010a536ce4) */

void FUN_10a29bd54(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 in_x7;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong unaff_x22;
  ulong uVar20;
  long lVar21;
  float fVar22;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  long alStack_180 [7];
  undefined8 uStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 auStack_b0 [7];
  undefined8 uStack_78;
  long lStack_70;
  
  plVar16 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (((ulong)plVar16 & 1) != 0) {
    return;
  }
  lVar7 = param_1[0xe];
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(lVar7 + 0x98);
  lVar10 = lVar7 + 0x70;
  FUN_10a5412e8(lVar10,2);
  if (lVar10 == 0) {
    uVar20 = *(ulong *)(lVar7 + 0x78);
    if (uVar20 != 0) {
      uVar14 = uVar20 - 1;
      if ((uVar20 & uVar14) == 0) {
        unaff_x22 = (ulong)((uint)uVar20 - 1) & 2;
      }
      else {
        unaff_x22 = 2;
        if (uVar20 < 3) {
          uVar1 = (uint)uVar20 & 0xff;
          uVar4 = 0;
          if ((uVar20 & 0xff) != 0) {
            uVar4 = 2 / uVar1;
          }
          unaff_x22 = (ulong)(2 - uVar4 * uVar1);
        }
      }
      plVar16 = *(long **)(*(long *)(lVar7 + 0x70) + unaff_x22 * 8);
      if (plVar16 != (long *)0x0) {
        do {
          while( true ) {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_10a5368f8;
            uVar17 = plVar16[1];
            if (uVar17 != 2) break;
            if (*(char *)(plVar16 + 2) == '\x02') goto LAB_10a536b80;
          }
          if ((uVar20 & uVar14) == 0) {
            uVar17 = uVar17 & uVar14;
          }
          else if (uVar20 <= uVar17) {
            uVar15 = 0;
            if (uVar20 != 0) {
              uVar15 = uVar17 / uVar20;
            }
            uVar17 = uVar17 - uVar15 * uVar20;
          }
        } while (uVar17 == unaff_x22);
      }
    }
LAB_10a5368f8:
    plVar16 = (long *)0x18;
    __Znwm();
    *plVar16 = 0;
    plVar16[1] = 2;
    *(undefined1 *)(plVar16 + 2) = 2;
    fVar22 = (float)(*(long *)(lVar7 + 0x88) + 1);
    if ((uVar20 == 0) || (*(float *)(lVar7 + 0x90) * (float)uVar20 < fVar22)) {
      uVar14 = 1;
      if (2 < uVar20) {
        uVar14 = (ulong)((uVar20 & uVar20 - 1) != 0);
      }
      uVar14 = uVar14 | uVar20 << 1;
      uVar17 = (ulong)(fVar22 / *(float *)(lVar7 + 0x90));
      if (uVar14 <= uVar17) {
        uVar14 = uVar17;
      }
      if (uVar14 - 1 == 0) {
        uVar14 = 2;
      }
      else if ((uVar14 & uVar14 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar20 = *(ulong *)(lVar7 + 0x78);
      }
      if (uVar20 < uVar14) {
LAB_10a536990:
        if (uVar14 >> 0x3d != 0) goto LAB_10a536fd8;
        lVar10 = uVar14 << 3;
        __Znwm();
        lVar21 = *(long *)(lVar7 + 0x70);
        *(long *)(lVar7 + 0x70) = lVar10;
        if (lVar21 != 0) {
          __ZdlPv();
        }
        uVar20 = 0;
        *(ulong *)(lVar7 + 0x78) = uVar14;
        do {
          *(undefined8 *)(*(long *)(lVar7 + 0x70) + uVar20 * 8) = 0;
          uVar20 = uVar20 + 1;
        } while (uVar14 != uVar20);
        plVar11 = *(long **)(lVar7 + 0x80);
        uVar20 = uVar14;
        if (plVar11 != (long *)0x0) {
          uVar17 = plVar11[1];
          uVar15 = uVar14 - 1;
          if ((uVar14 & uVar15) == 0) {
            uVar17 = uVar17 & uVar15;
          }
          else if (uVar14 <= uVar17) {
            uVar19 = 0;
            if (uVar14 != 0) {
              uVar19 = uVar17 / uVar14;
            }
            uVar17 = uVar17 - uVar19 * uVar14;
          }
          *(undefined8 **)(*(long *)(lVar7 + 0x70) + uVar17 * 8) = (undefined8 *)(lVar7 + 0x80);
          plVar18 = (long *)*plVar11;
          while (plVar18 != (long *)0x0) {
            uVar19 = plVar18[1];
            if ((uVar14 & uVar15) == 0) {
              uVar19 = uVar19 & uVar15;
            }
            else if (uVar14 <= uVar19) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar19 / uVar14;
              }
              uVar19 = uVar19 - uVar5 * uVar14;
            }
            plVar12 = plVar18;
            if (uVar19 != uVar17) {
              lVar10 = *(long *)(lVar7 + 0x70);
              if (*(long *)(lVar10 + uVar19 * 8) == 0) {
                *(long **)(lVar10 + uVar19 * 8) = plVar11;
                uVar17 = uVar19;
              }
              else {
                *plVar11 = *plVar18;
                *plVar18 = **(undefined8 **)(lVar10 + uVar19 * 8);
                **(long **)(lVar10 + uVar19 * 8) = (long)plVar18;
                plVar12 = plVar11;
              }
            }
            plVar11 = plVar12;
            plVar18 = (long *)*plVar12;
          }
        }
      }
      else if (uVar14 < uVar20) {
        uVar17 = (ulong)((float)*(ulong *)(lVar7 + 0x88) / *(float *)(lVar7 + 0x90));
        if ((uVar20 < 3) || ((uVar20 & uVar20 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar17) {
          uVar17 = 1L << (-LZCOUNT(uVar17 - 1) & 0x3fU);
        }
        if (uVar14 <= uVar17) {
          uVar14 = uVar17;
        }
        if (uVar14 < uVar20) {
          if (uVar14 != 0) goto LAB_10a536990;
          lVar10 = *(long *)(lVar7 + 0x70);
          *(undefined8 *)(lVar7 + 0x70) = 0;
          if (lVar10 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(lVar7 + 0x78) = 0;
          uVar20 = 0;
        }
        else {
          uVar20 = *(ulong *)(lVar7 + 0x78);
        }
      }
      if ((uVar20 & uVar20 - 1) == 0) {
        unaff_x22 = (ulong)((int)uVar20 - 1) & 2;
      }
      else if (uVar20 < 3) {
        uVar14 = 0;
        if (uVar20 != 0) {
          uVar14 = 2 / uVar20;
        }
        unaff_x22 = 2 - uVar14 * uVar20;
      }
      else {
        unaff_x22 = 2;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x70);
    plVar11 = *(long **)(lVar10 + unaff_x22 * 8);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)(lVar7 + 0x80);
      *plVar16 = *plVar11;
      *plVar11 = (long)plVar16;
      *(long **)(lVar10 + unaff_x22 * 8) = plVar11;
      if (*plVar16 != 0) {
        uVar14 = *(ulong *)(*plVar16 + 8);
        if ((uVar20 & uVar20 - 1) == 0) {
          uVar14 = uVar14 & uVar20 - 1;
        }
        else if (uVar20 <= uVar14) {
          uVar17 = 0;
          if (uVar20 != 0) {
            uVar17 = uVar14 / uVar20;
          }
          uVar14 = uVar14 - uVar17 * uVar20;
        }
        plVar11 = (long *)(*(long *)(lVar7 + 0x70) + uVar14 * 8);
        goto LAB_10a536b70;
      }
    }
    else {
      *plVar16 = *plVar11;
LAB_10a536b70:
      *plVar11 = (long)plVar16;
    }
    *(long *)(lVar7 + 0x88) = *(long *)(lVar7 + 0x88) + 1;
LAB_10a536b80:
    __ZNSt3__15mutex6unlockEv(lVar7 + 0x98);
    ppuVar8 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    uStack_118 = 0;
    if (*ppuVar8 != (undefined *)0x0) {
      plVar16 = *(long **)(*ppuVar8 + 0x10);
      if (plVar16 == (long *)0x0) {
        uStack_118 = 0;
      }
      else {
        puVar9 = (undefined8 *)0x20;
        __Znwm();
        auStack_b0[0] = 0x8000000000000020;
        plStack_b8 = (long *)0x1b;
        *(undefined8 *)((long)puVar9 + 0x13) = 0x54494d494c5f544e;
        *(undefined8 *)((long)puVar9 + 0xb) = 0x554f435f444e4549;
        puVar9[1] = 0x5f444e454952465f;
        *puVar9 = 0x45524f43534e454c;
        *(undefined1 *)((long)puVar9 + 0x1b) = 0;
        puStack_c0 = puVar9;
        (**(code **)(*plVar16 + 0x40))(plVar16,&puStack_c0,0);
        uStack_118 = (long)plVar16 << 0x20;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x20);
    uStack_120 = *(undefined8 *)(lVar7 + 0x20);
    uStack_128 = *(undefined8 *)(lVar7 + 0x18);
    if (lVar10 != 0) {
      plVar16 = (long *)(lVar10 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_140 = FUN_10a5414ec;
    ppuStack_138 = &PTR_FUN_110bf0118;
    uStack_118 = uStack_118 | 2;
    lStack_130 = lVar7;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a3bf120(&puStack_190);
    lVar21 = *(long *)(*(long *)(lVar7 + 8) + 0x100);
    FUN_10a00ce20(&uStack_1b8,*(undefined8 *)(lVar7 + 0x28),&pcStack_140);
    plVar11 = (long *)0x138;
    __Znwm();
    puStack_c0 = puStack_190;
    plVar18 = plVar11 + 1;
    *plVar18 = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&PTR_FUN_110b9f3b0;
    plVar16 = plVar11 + 3;
    puStack_190 = (undefined8 *)0x0;
    plStack_b8 = (long *)uStack_188;
    (**(code **)(alStack_180[0] + 0x10))(auStack_b0,alStack_180);
    uStack_78 = uStack_148;
    uVar20 = *(ulong *)(lVar21 + 0x210);
    lVar10 = *(long *)(lVar21 + 0x208);
    if (-1 < (char)*(byte *)(lVar21 + 0x21f)) {
      uVar20 = (ulong)*(byte *)(lVar21 + 0x21f);
      lVar10 = lVar21 + 0x208;
    }
    uStack_100 = 0x10a05c39c;
    ppuStack_f8 = &PTR_FUN_110b9f370;
    uStack_f0 = uStack_1b8;
    uStack_e0 = uStack_1a8;
    uStack_e8 = uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    FUN_10a23708c(plVar16,&UNK_10e4c94f0,0x25,&UNK_10f647b45,3,&puStack_c0,0,in_x7,lVar10,uVar20,
                  &uStack_100);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    FUN_10a042634(&puStack_c0);
    plStack_1a0 = plVar16;
    plStack_198 = plVar11;
    func_0x00010a05c07c(&uStack_1b8);
    FUN_10a042634(&puStack_190);
    plVar12 = *(long **)(*(long *)(*(long *)(lVar7 + 8) + 0x100) + 0x1c8);
    (**(code **)(*plVar12 + 0x60))();
    puStack_c0 = (undefined8 *)0x0;
    plStack_b8 = (long *)0x0;
    plVar13 = (long *)plVar12[1];
    if (((plVar13 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar13, plVar13 == (long *)0x0)) ||
       (puStack_c0 = (undefined8 *)*plVar12, puStack_c0 == (undefined8 *)0x0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f65e989,&UNK_10f65e9c8,0x72,&UNK_10f65ea28);
      }
    }
    else {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar3) {
          *plVar18 = *plVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_1c8 = plVar16;
      plStack_1c0 = plVar11;
      (**(code **)*puStack_c0)(puStack_c0,&plStack_1c8);
      plVar16 = plStack_1c0;
      if (plStack_1c0 != (long *)0x0) {
        plVar11 = plStack_1c0 + 1;
        do {
          lVar10 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
    }
    plVar16 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar11 = plStack_b8 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar11 = plStack_198 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    (*(code *)*ppuStack_138)(&ppuStack_138);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar7 + 0x98);
    return;
  }
  ___stack_chk_fail();
LAB_10a536fd8:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a53700c);
  (*pcVar6)();
}



/* Entry: 10a29bd94; end: 10a29bdcb;  */

bool FUN_10a29bd94(long param_1)

{
  long lVar1;
  undefined1 uStack_11;
  
  uStack_11 = 2;
  lVar1 = *(long *)(param_1 + 0x70) + 0x38;
  func_0x00010a54138c(lVar1,&uStack_11);
  return lVar1 != 0;
}



/* Entry: 10a29bdcc; end: 10a29bde3;  */

void FUN_10a29bdcc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  plVar6 = *(long **)(param_2 + 0x70);
  FUN_10a537110(plVar6,2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a53803c(param_1,plVar6[1] - *plVar6 >> 4);
  plVar2 = (long *)plVar6[1];
  for (plVar6 = (long *)*plVar6; plVar6 != plVar2; plVar6 = plVar6 + 2) {
    lVar7 = *plVar6;
    FUN_10a541430(auStack_48,&uStack_31,lVar7 + 0x18,lVar7 + 0x30,lVar7 + 0x78);
    func_0x00010a5380d4(param_1,auStack_48);
    plVar5 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10a29bde4; end: 10a29bee3;  */

undefined8 * FUN_10a29bde4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8cb0;
  FUN_10a2965a8(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8d00;
  FUN_10a29b5c8(param_1 + 0xb);
  FUN_10a29b67c(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a29bee4; end: 10a29bf23;  */

/* WARNING: Removing unreachable block (ram,0x00010a536c98) */
/* WARNING: Removing unreachable block (ram,0x00010a536c90) */
/* WARNING: Removing unreachable block (ram,0x00010a536c04) */
/* WARNING: Removing unreachable block (ram,0x00010a536cc4) */
/* WARNING: Removing unreachable block (ram,0x00010a536ca8) */
/* WARNING: Removing unreachable block (ram,0x00010a536cac) */
/* WARNING: Removing unreachable block (ram,0x00010a536fe0) */
/* WARNING: Removing unreachable block (ram,0x00010a536cb4) */
/* WARNING: Removing unreachable block (ram,0x00010a536ce4) */

void FUN_10a29bee4(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 in_x7;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong unaff_x22;
  ulong uVar20;
  long lVar21;
  float fVar22;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  long alStack_180 [7];
  undefined8 uStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 auStack_b0 [7];
  undefined8 uStack_78;
  long lStack_70;
  
  plVar16 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (((ulong)plVar16 & 1) != 0) {
    return;
  }
  lVar7 = param_1[0xe];
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(lVar7 + 0x98);
  lVar10 = lVar7 + 0x70;
  FUN_10a5412e8(lVar10,3);
  if (lVar10 == 0) {
    uVar20 = *(ulong *)(lVar7 + 0x78);
    if (uVar20 != 0) {
      uVar14 = uVar20 - 1;
      if ((uVar20 & uVar14) == 0) {
        unaff_x22 = (ulong)((uint)uVar20 - 1) & 3;
      }
      else {
        unaff_x22 = 3;
        if (uVar20 < 4) {
          uVar1 = (uint)uVar20 & 0xff;
          uVar4 = 0;
          if ((uVar20 & 0xff) != 0) {
            uVar4 = 3 / uVar1;
          }
          unaff_x22 = (ulong)(3 - uVar4 * uVar1);
        }
      }
      plVar16 = *(long **)(*(long *)(lVar7 + 0x70) + unaff_x22 * 8);
      if (plVar16 != (long *)0x0) {
        do {
          while( true ) {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_10a5368f8;
            uVar17 = plVar16[1];
            if (uVar17 != 3) break;
            if (*(char *)(plVar16 + 2) == '\x03') goto LAB_10a536b80;
          }
          if ((uVar20 & uVar14) == 0) {
            uVar17 = uVar17 & uVar14;
          }
          else if (uVar20 <= uVar17) {
            uVar15 = 0;
            if (uVar20 != 0) {
              uVar15 = uVar17 / uVar20;
            }
            uVar17 = uVar17 - uVar15 * uVar20;
          }
        } while (uVar17 == unaff_x22);
      }
    }
LAB_10a5368f8:
    plVar16 = (long *)0x18;
    __Znwm();
    *plVar16 = 0;
    plVar16[1] = 3;
    *(undefined1 *)(plVar16 + 2) = 3;
    fVar22 = (float)(*(long *)(lVar7 + 0x88) + 1);
    if ((uVar20 == 0) || (*(float *)(lVar7 + 0x90) * (float)uVar20 < fVar22)) {
      uVar14 = 1;
      if (2 < uVar20) {
        uVar14 = (ulong)((uVar20 & uVar20 - 1) != 0);
      }
      uVar14 = uVar14 | uVar20 << 1;
      uVar17 = (ulong)(fVar22 / *(float *)(lVar7 + 0x90));
      if (uVar14 <= uVar17) {
        uVar14 = uVar17;
      }
      if (uVar14 - 1 == 0) {
        uVar14 = 2;
      }
      else if ((uVar14 & uVar14 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar20 = *(ulong *)(lVar7 + 0x78);
      }
      if (uVar20 < uVar14) {
LAB_10a536990:
        if (uVar14 >> 0x3d != 0) goto LAB_10a536fd8;
        lVar10 = uVar14 << 3;
        __Znwm();
        lVar21 = *(long *)(lVar7 + 0x70);
        *(long *)(lVar7 + 0x70) = lVar10;
        if (lVar21 != 0) {
          __ZdlPv();
        }
        uVar20 = 0;
        *(ulong *)(lVar7 + 0x78) = uVar14;
        do {
          *(undefined8 *)(*(long *)(lVar7 + 0x70) + uVar20 * 8) = 0;
          uVar20 = uVar20 + 1;
        } while (uVar14 != uVar20);
        plVar11 = *(long **)(lVar7 + 0x80);
        uVar20 = uVar14;
        if (plVar11 != (long *)0x0) {
          uVar17 = plVar11[1];
          uVar15 = uVar14 - 1;
          if ((uVar14 & uVar15) == 0) {
            uVar17 = uVar17 & uVar15;
          }
          else if (uVar14 <= uVar17) {
            uVar19 = 0;
            if (uVar14 != 0) {
              uVar19 = uVar17 / uVar14;
            }
            uVar17 = uVar17 - uVar19 * uVar14;
          }
          *(undefined8 **)(*(long *)(lVar7 + 0x70) + uVar17 * 8) = (undefined8 *)(lVar7 + 0x80);
          plVar18 = (long *)*plVar11;
          while (plVar18 != (long *)0x0) {
            uVar19 = plVar18[1];
            if ((uVar14 & uVar15) == 0) {
              uVar19 = uVar19 & uVar15;
            }
            else if (uVar14 <= uVar19) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar19 / uVar14;
              }
              uVar19 = uVar19 - uVar5 * uVar14;
            }
            plVar12 = plVar18;
            if (uVar19 != uVar17) {
              lVar10 = *(long *)(lVar7 + 0x70);
              if (*(long *)(lVar10 + uVar19 * 8) == 0) {
                *(long **)(lVar10 + uVar19 * 8) = plVar11;
                uVar17 = uVar19;
              }
              else {
                *plVar11 = *plVar18;
                *plVar18 = **(undefined8 **)(lVar10 + uVar19 * 8);
                **(long **)(lVar10 + uVar19 * 8) = (long)plVar18;
                plVar12 = plVar11;
              }
            }
            plVar11 = plVar12;
            plVar18 = (long *)*plVar12;
          }
        }
      }
      else if (uVar14 < uVar20) {
        uVar17 = (ulong)((float)*(ulong *)(lVar7 + 0x88) / *(float *)(lVar7 + 0x90));
        if ((uVar20 < 3) || ((uVar20 & uVar20 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar17) {
          uVar17 = 1L << (-LZCOUNT(uVar17 - 1) & 0x3fU);
        }
        if (uVar14 <= uVar17) {
          uVar14 = uVar17;
        }
        if (uVar14 < uVar20) {
          if (uVar14 != 0) goto LAB_10a536990;
          lVar10 = *(long *)(lVar7 + 0x70);
          *(undefined8 *)(lVar7 + 0x70) = 0;
          if (lVar10 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(lVar7 + 0x78) = 0;
          uVar20 = 0;
        }
        else {
          uVar20 = *(ulong *)(lVar7 + 0x78);
        }
      }
      if ((uVar20 & uVar20 - 1) == 0) {
        unaff_x22 = (ulong)((int)uVar20 - 1) & 3;
      }
      else if (uVar20 < 4) {
        uVar14 = 0;
        if (uVar20 != 0) {
          uVar14 = 3 / uVar20;
        }
        unaff_x22 = 3 - uVar14 * uVar20;
      }
      else {
        unaff_x22 = 3;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x70);
    plVar11 = *(long **)(lVar10 + unaff_x22 * 8);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)(lVar7 + 0x80);
      *plVar16 = *plVar11;
      *plVar11 = (long)plVar16;
      *(long **)(lVar10 + unaff_x22 * 8) = plVar11;
      if (*plVar16 != 0) {
        uVar14 = *(ulong *)(*plVar16 + 8);
        if ((uVar20 & uVar20 - 1) == 0) {
          uVar14 = uVar14 & uVar20 - 1;
        }
        else if (uVar20 <= uVar14) {
          uVar17 = 0;
          if (uVar20 != 0) {
            uVar17 = uVar14 / uVar20;
          }
          uVar14 = uVar14 - uVar17 * uVar20;
        }
        plVar11 = (long *)(*(long *)(lVar7 + 0x70) + uVar14 * 8);
        goto LAB_10a536b70;
      }
    }
    else {
      *plVar16 = *plVar11;
LAB_10a536b70:
      *plVar11 = (long)plVar16;
    }
    *(long *)(lVar7 + 0x88) = *(long *)(lVar7 + 0x88) + 1;
LAB_10a536b80:
    __ZNSt3__15mutex6unlockEv(lVar7 + 0x98);
    ppuVar8 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    uStack_118 = 0;
    if (*ppuVar8 != (undefined *)0x0) {
      plVar16 = *(long **)(*ppuVar8 + 0x10);
      if (plVar16 == (long *)0x0) {
        uStack_118 = 0;
      }
      else {
        puVar9 = (undefined8 *)0x20;
        __Znwm();
        auStack_b0[0] = 0x8000000000000020;
        plStack_b8 = (long *)0x1b;
        *(undefined8 *)((long)puVar9 + 0x13) = 0x54494d494c5f544e;
        *(undefined8 *)((long)puVar9 + 0xb) = 0x554f435f444e4549;
        puVar9[1] = 0x5f444e454952465f;
        *puVar9 = 0x45524f43534e454c;
        *(undefined1 *)((long)puVar9 + 0x1b) = 0;
        puStack_c0 = puVar9;
        (**(code **)(*plVar16 + 0x40))(plVar16,&puStack_c0,0);
        uStack_118 = (long)plVar16 << 0x20;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x20);
    uStack_120 = *(undefined8 *)(lVar7 + 0x20);
    uStack_128 = *(undefined8 *)(lVar7 + 0x18);
    if (lVar10 != 0) {
      plVar16 = (long *)(lVar10 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_140 = FUN_10a5414ec;
    ppuStack_138 = &PTR_FUN_110bf0118;
    uStack_118 = uStack_118 | 3;
    lStack_130 = lVar7;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a3bf120(&puStack_190);
    lVar21 = *(long *)(*(long *)(lVar7 + 8) + 0x100);
    FUN_10a00ce20(&uStack_1b8,*(undefined8 *)(lVar7 + 0x28),&pcStack_140);
    plVar11 = (long *)0x138;
    __Znwm();
    puStack_c0 = puStack_190;
    plVar18 = plVar11 + 1;
    *plVar18 = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&PTR_FUN_110b9f3b0;
    plVar16 = plVar11 + 3;
    puStack_190 = (undefined8 *)0x0;
    plStack_b8 = (long *)uStack_188;
    (**(code **)(alStack_180[0] + 0x10))(auStack_b0,alStack_180);
    uStack_78 = uStack_148;
    uVar20 = *(ulong *)(lVar21 + 0x210);
    lVar10 = *(long *)(lVar21 + 0x208);
    if (-1 < (char)*(byte *)(lVar21 + 0x21f)) {
      uVar20 = (ulong)*(byte *)(lVar21 + 0x21f);
      lVar10 = lVar21 + 0x208;
    }
    uStack_100 = 0x10a05c39c;
    ppuStack_f8 = &PTR_FUN_110b9f370;
    uStack_f0 = uStack_1b8;
    uStack_e0 = uStack_1a8;
    uStack_e8 = uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    FUN_10a23708c(plVar16,&UNK_10e4c9516,0x2a,&UNK_10f647b45,3,&puStack_c0,0,in_x7,lVar10,uVar20,
                  &uStack_100);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    FUN_10a042634(&puStack_c0);
    plStack_1a0 = plVar16;
    plStack_198 = plVar11;
    func_0x00010a05c07c(&uStack_1b8);
    FUN_10a042634(&puStack_190);
    plVar12 = *(long **)(*(long *)(*(long *)(lVar7 + 8) + 0x100) + 0x1c8);
    (**(code **)(*plVar12 + 0x60))();
    puStack_c0 = (undefined8 *)0x0;
    plStack_b8 = (long *)0x0;
    plVar13 = (long *)plVar12[1];
    if (((plVar13 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar13, plVar13 == (long *)0x0)) ||
       (puStack_c0 = (undefined8 *)*plVar12, puStack_c0 == (undefined8 *)0x0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f65e989,&UNK_10f65e9c8,0x72,&UNK_10f65ea28);
      }
    }
    else {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar3) {
          *plVar18 = *plVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_1c8 = plVar16;
      plStack_1c0 = plVar11;
      (**(code **)*puStack_c0)(puStack_c0,&plStack_1c8);
      plVar16 = plStack_1c0;
      if (plStack_1c0 != (long *)0x0) {
        plVar11 = plStack_1c0 + 1;
        do {
          lVar10 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
    }
    plVar16 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar11 = plStack_b8 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar11 = plStack_198 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    (*(code *)*ppuStack_138)(&ppuStack_138);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar7 + 0x98);
    return;
  }
  ___stack_chk_fail();
LAB_10a536fd8:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a53700c);
  (*pcVar6)();
}



/* Entry: 10a29bf24; end: 10a29bf5b;  */

bool FUN_10a29bf24(long param_1)

{
  long lVar1;
  undefined1 uStack_11;
  
  uStack_11 = 3;
  lVar1 = *(long *)(param_1 + 0x70) + 0x38;
  func_0x00010a54138c(lVar1,&uStack_11);
  return lVar1 != 0;
}



/* Entry: 10a29bf5c; end: 10a29bf73;  */

void FUN_10a29bf5c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  plVar6 = *(long **)(param_2 + 0x70);
  FUN_10a537110(plVar6,3);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a53803c(param_1,plVar6[1] - *plVar6 >> 4);
  plVar2 = (long *)plVar6[1];
  for (plVar6 = (long *)*plVar6; plVar6 != plVar2; plVar6 = plVar6 + 2) {
    lVar7 = *plVar6;
    FUN_10a541430(auStack_48,&uStack_31,lVar7 + 0x18,lVar7 + 0x30,lVar7 + 0x78);
    func_0x00010a5380d4(param_1,auStack_48);
    plVar5 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10a29bf74; end: 10a29c073;  */

undefined8 * FUN_10a29bf74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8a60;
  FUN_10a2965a8(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8ab0;
  FUN_10a29a810(param_1 + 0xb);
  FUN_10a29a8c4(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a29c074; end: 10a29c0b3;  */

/* WARNING: Removing unreachable block (ram,0x00010a536cb4) */
/* WARNING: Removing unreachable block (ram,0x00010a536cac) */
/* WARNING: Removing unreachable block (ram,0x00010a536c04) */
/* WARNING: Removing unreachable block (ram,0x00010a536c80) */
/* WARNING: Removing unreachable block (ram,0x00010a536c88) */
/* WARNING: Removing unreachable block (ram,0x00010a536cd4) */
/* WARNING: Removing unreachable block (ram,0x00010a536c90) */
/* WARNING: Removing unreachable block (ram,0x00010a536fe0) */
/* WARNING: Removing unreachable block (ram,0x00010a536c98) */
/* WARNING: Removing unreachable block (ram,0x00010a536cc4) */
/* WARNING: Removing unreachable block (ram,0x00010a536888) */
/* WARNING: Removing unreachable block (ram,0x00010a536b04) */

void FUN_10a29c074(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 in_x7;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long unaff_x22;
  ulong uVar18;
  long lVar19;
  float fVar20;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  long alStack_180 [7];
  undefined8 uStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 auStack_b0 [7];
  undefined8 uStack_78;
  long lStack_70;
  
  plVar13 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (((ulong)plVar13 & 1) != 0) {
    return;
  }
  lVar5 = param_1[0xe];
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(lVar5 + 0x98);
  lVar8 = lVar5 + 0x70;
  FUN_10a5412e8(lVar8,0);
  if (lVar8 == 0) {
    uVar18 = *(ulong *)(lVar5 + 0x78);
    if (uVar18 != 0) {
      unaff_x22 = 0;
      plVar13 = (long *)**(long **)(lVar5 + 0x70);
      if (plVar13 != (long *)0x0) {
        do {
          while( true ) {
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) goto LAB_10a5368f8;
            uVar15 = plVar13[1];
            if (uVar15 != 0) break;
            if (*(char *)(plVar13 + 2) == '\0') goto LAB_10a536b80;
          }
          if ((uVar18 & uVar18 - 1) == 0) {
            uVar15 = uVar15 & uVar18 - 1;
          }
          else if (uVar18 <= uVar15) {
            uVar14 = 0;
            if (uVar18 != 0) {
              uVar14 = uVar15 / uVar18;
            }
            uVar15 = uVar15 - uVar14 * uVar18;
          }
        } while (uVar15 == 0);
      }
    }
LAB_10a5368f8:
    plVar13 = (long *)0x18;
    __Znwm();
    *plVar13 = 0;
    plVar13[1] = 0;
    *(undefined1 *)(plVar13 + 2) = 0;
    fVar20 = (float)(*(long *)(lVar5 + 0x88) + 1);
    if ((uVar18 == 0) || (*(float *)(lVar5 + 0x90) * (float)uVar18 < fVar20)) {
      uVar15 = 1;
      if (2 < uVar18) {
        uVar15 = (ulong)((uVar18 & uVar18 - 1) != 0);
      }
      uVar15 = uVar15 | uVar18 << 1;
      uVar14 = (ulong)(fVar20 / *(float *)(lVar5 + 0x90));
      if (uVar15 <= uVar14) {
        uVar15 = uVar14;
      }
      if (uVar15 - 1 == 0) {
        uVar15 = 2;
      }
      else if ((uVar15 & uVar15 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar18 = *(ulong *)(lVar5 + 0x78);
      }
      if (uVar18 < uVar15) {
LAB_10a536990:
        if (uVar15 >> 0x3d != 0) goto LAB_10a536fd8;
        lVar8 = uVar15 << 3;
        __Znwm();
        lVar19 = *(long *)(lVar5 + 0x70);
        *(long *)(lVar5 + 0x70) = lVar8;
        if (lVar19 != 0) {
          __ZdlPv();
        }
        uVar18 = 0;
        *(ulong *)(lVar5 + 0x78) = uVar15;
        do {
          *(undefined8 *)(*(long *)(lVar5 + 0x70) + uVar18 * 8) = 0;
          uVar18 = uVar18 + 1;
        } while (uVar15 != uVar18);
        plVar9 = *(long **)(lVar5 + 0x80);
        uVar18 = uVar15;
        if (plVar9 != (long *)0x0) {
          uVar14 = plVar9[1];
          uVar12 = uVar15 - 1;
          if ((uVar15 & uVar12) == 0) {
            uVar14 = uVar14 & uVar12;
          }
          else if (uVar15 <= uVar14) {
            uVar17 = 0;
            if (uVar15 != 0) {
              uVar17 = uVar14 / uVar15;
            }
            uVar14 = uVar14 - uVar17 * uVar15;
          }
          *(undefined8 **)(*(long *)(lVar5 + 0x70) + uVar14 * 8) = (undefined8 *)(lVar5 + 0x80);
          plVar16 = (long *)*plVar9;
          while (plVar16 != (long *)0x0) {
            uVar17 = plVar16[1];
            if ((uVar15 & uVar12) == 0) {
              uVar17 = uVar17 & uVar12;
            }
            else if (uVar15 <= uVar17) {
              uVar3 = 0;
              if (uVar15 != 0) {
                uVar3 = uVar17 / uVar15;
              }
              uVar17 = uVar17 - uVar3 * uVar15;
            }
            plVar10 = plVar16;
            if (uVar17 != uVar14) {
              lVar8 = *(long *)(lVar5 + 0x70);
              if (*(long *)(lVar8 + uVar17 * 8) == 0) {
                *(long **)(lVar8 + uVar17 * 8) = plVar9;
                uVar14 = uVar17;
              }
              else {
                *plVar9 = *plVar16;
                *plVar16 = **(undefined8 **)(lVar8 + uVar17 * 8);
                **(long **)(lVar8 + uVar17 * 8) = (long)plVar16;
                plVar10 = plVar9;
              }
            }
            plVar9 = plVar10;
            plVar16 = (long *)*plVar10;
          }
        }
      }
      else if (uVar15 < uVar18) {
        uVar14 = (ulong)((float)*(ulong *)(lVar5 + 0x88) / *(float *)(lVar5 + 0x90));
        if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar14) {
          uVar14 = 1L << (-LZCOUNT(uVar14 - 1) & 0x3fU);
        }
        if (uVar15 <= uVar14) {
          uVar15 = uVar14;
        }
        if (uVar15 < uVar18) {
          if (uVar15 != 0) goto LAB_10a536990;
          lVar8 = *(long *)(lVar5 + 0x70);
          *(undefined8 *)(lVar5 + 0x70) = 0;
          if (lVar8 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(lVar5 + 0x78) = 0;
          uVar18 = 0;
        }
        else {
          uVar18 = *(ulong *)(lVar5 + 0x78);
        }
      }
      if ((uVar18 & uVar18 - 1) == 0) {
        unaff_x22 = 0;
      }
      else if (uVar18 == 0) {
        unaff_x22 = 0;
      }
      else {
        unaff_x22 = 0;
      }
    }
    lVar8 = *(long *)(lVar5 + 0x70);
    plVar9 = *(long **)(lVar8 + unaff_x22 * 8);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)(lVar5 + 0x80);
      *plVar13 = *plVar9;
      *plVar9 = (long)plVar13;
      *(long **)(lVar8 + unaff_x22 * 8) = plVar9;
      if (*plVar13 != 0) {
        uVar15 = *(ulong *)(*plVar13 + 8);
        if ((uVar18 & uVar18 - 1) == 0) {
          uVar15 = uVar15 & uVar18 - 1;
        }
        else if (uVar18 <= uVar15) {
          uVar14 = 0;
          if (uVar18 != 0) {
            uVar14 = uVar15 / uVar18;
          }
          uVar15 = uVar15 - uVar14 * uVar18;
        }
        plVar9 = (long *)(*(long *)(lVar5 + 0x70) + uVar15 * 8);
        goto LAB_10a536b70;
      }
    }
    else {
      *plVar13 = *plVar9;
LAB_10a536b70:
      *plVar9 = (long)plVar13;
    }
    *(long *)(lVar5 + 0x88) = *(long *)(lVar5 + 0x88) + 1;
LAB_10a536b80:
    __ZNSt3__15mutex6unlockEv(lVar5 + 0x98);
    ppuVar6 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    lStack_118 = 0;
    if (*ppuVar6 != (undefined *)0x0) {
      plVar13 = *(long **)(*ppuVar6 + 0x10);
      if (plVar13 == (long *)0x0) {
        lStack_118 = 0;
      }
      else {
        puVar7 = (undefined8 *)0x20;
        __Znwm();
        auStack_b0[0] = 0x8000000000000020;
        plStack_b8 = (long *)0x1b;
        *(undefined8 *)((long)puVar7 + 0x13) = 0x54494d494c5f544e;
        *(undefined8 *)((long)puVar7 + 0xb) = 0x554f435f444e4549;
        puVar7[1] = 0x5f444e454952465f;
        *puVar7 = 0x45524f43534e454c;
        *(undefined1 *)((long)puVar7 + 0x1b) = 0;
        puStack_c0 = puVar7;
        (**(code **)(*plVar13 + 0x40))(plVar13,&puStack_c0,0);
        lStack_118 = (long)plVar13 << 0x20;
      }
    }
    lVar8 = *(long *)(lVar5 + 0x20);
    uStack_120 = *(undefined8 *)(lVar5 + 0x20);
    uStack_128 = *(undefined8 *)(lVar5 + 0x18);
    if (lVar8 != 0) {
      plVar13 = (long *)(lVar8 + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = *plVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = *plVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pcStack_140 = FUN_10a5414ec;
    ppuStack_138 = &PTR_FUN_110bf0118;
    lStack_130 = lVar5;
    if (lVar8 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a3bf120(&puStack_190);
    lVar19 = *(long *)(*(long *)(lVar5 + 8) + 0x100);
    FUN_10a00ce20(&uStack_1b8,*(undefined8 *)(lVar5 + 0x28),&pcStack_140);
    plVar9 = (long *)0x138;
    __Znwm();
    puStack_c0 = puStack_190;
    plVar16 = plVar9 + 1;
    *plVar16 = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_110b9f3b0;
    plVar13 = plVar9 + 3;
    puStack_190 = (undefined8 *)0x0;
    plStack_b8 = (long *)uStack_188;
    (**(code **)(alStack_180[0] + 0x10))(auStack_b0,alStack_180);
    uStack_78 = uStack_148;
    uVar18 = *(ulong *)(lVar19 + 0x210);
    lVar8 = *(long *)(lVar19 + 0x208);
    if (-1 < (char)*(byte *)(lVar19 + 0x21f)) {
      uVar18 = (ulong)*(byte *)(lVar19 + 0x21f);
      lVar8 = lVar19 + 0x208;
    }
    uStack_100 = 0x10a05c39c;
    ppuStack_f8 = &PTR_FUN_110b9f370;
    uStack_f0 = uStack_1b8;
    uStack_e0 = uStack_1a8;
    uStack_e8 = uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    FUN_10a23708c(plVar13,&UNK_10e4c9541,0x31,&UNK_10f647b45,3,&puStack_c0,0,in_x7,lVar8,uVar18,
                  &uStack_100);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    FUN_10a042634(&puStack_c0);
    plStack_1a0 = plVar13;
    plStack_198 = plVar9;
    func_0x00010a05c07c(&uStack_1b8);
    FUN_10a042634(&puStack_190);
    plVar10 = *(long **)(*(long *)(*(long *)(lVar5 + 8) + 0x100) + 0x1c8);
    (**(code **)(*plVar10 + 0x60))();
    puStack_c0 = (undefined8 *)0x0;
    plStack_b8 = (long *)0x0;
    plVar11 = (long *)plVar10[1];
    if (((plVar11 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar11, plVar11 == (long *)0x0)) ||
       (puStack_c0 = (undefined8 *)*plVar10, puStack_c0 == (undefined8 *)0x0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f65e989,&UNK_10f65e9c8,0x72,&UNK_10f65ea28);
      }
    }
    else {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar2) {
          *plVar16 = *plVar16 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plStack_1c8 = plVar13;
      plStack_1c0 = plVar9;
      (**(code **)*puStack_c0)(puStack_c0,&plStack_1c8);
      plVar13 = plStack_1c0;
      if (plStack_1c0 != (long *)0x0) {
        plVar9 = plStack_1c0 + 1;
        do {
          lVar8 = *plVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
    }
    plVar13 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar9 = plStack_b8 + 1;
      do {
        lVar8 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar13 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar9 = plStack_198 + 1;
      do {
        lVar8 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    (*(code *)*ppuStack_138)(&ppuStack_138);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar5 + 0x98);
    return;
  }
  ___stack_chk_fail();
LAB_10a536fd8:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a53700c);
  (*pcVar4)();
}



/* Entry: 10a29c0b4; end: 10a29c0e7;  */

bool FUN_10a29c0b4(long param_1)

{
  long lVar1;
  undefined1 uStack_11;
  
  uStack_11 = 0;
  lVar1 = *(long *)(param_1 + 0x70) + 0x38;
  func_0x00010a54138c(lVar1,&uStack_11);
  return lVar1 != 0;
}



/* Entry: 10a29c0e8; end: 10a29c127;  */

void FUN_10a29c0e8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  plVar4 = *(long **)(param_2 + 0x70);
  FUN_10a537110(plVar4,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar7 = (undefined8 *)*plVar4;
  puVar1 = (undefined8 *)plVar4[1];
  lVar5 = (long)puVar1 - (long)puVar7 >> 4;
  if (lVar5 != 0) {
    FUN_10a26a110(param_1,lVar5);
    puVar6 = (undefined8 *)param_1[1];
    for (; puVar7 != puVar1; puVar7 = puVar7 + 2) {
      lVar5 = puVar7[1];
      uVar8 = *puVar7;
      puVar6[1] = puVar7[1];
      *puVar6 = uVar8;
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
    param_1[1] = puVar6;
  }
  return;
}



/* Entry: 10a29c128; end: 10a29c133;  */

void FUN_10a29c128(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10a29c134; end: 10a29c233;  */

undefined8 * FUN_10a29c134(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8cb0;
  FUN_10a2965a8(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8d00;
  FUN_10a29b5c8(param_1 + 0xb);
  FUN_10a29b67c(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a29c234; end: 10a29c273;  */

/* WARNING: Removing unreachable block (ram,0x00010a536cb4) */
/* WARNING: Removing unreachable block (ram,0x00010a536cac) */
/* WARNING: Removing unreachable block (ram,0x00010a536c04) */
/* WARNING: Removing unreachable block (ram,0x00010a536c80) */
/* WARNING: Removing unreachable block (ram,0x00010a536c88) */
/* WARNING: Removing unreachable block (ram,0x00010a536cd4) */
/* WARNING: Removing unreachable block (ram,0x00010a536c90) */
/* WARNING: Removing unreachable block (ram,0x00010a536fe0) */
/* WARNING: Removing unreachable block (ram,0x00010a536c98) */
/* WARNING: Removing unreachable block (ram,0x00010a536cc4) */
/* WARNING: Removing unreachable block (ram,0x00010a536888) */
/* WARNING: Removing unreachable block (ram,0x00010a536b04) */

void FUN_10a29c234(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 in_x7;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long unaff_x22;
  ulong uVar18;
  long lVar19;
  float fVar20;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  long alStack_180 [7];
  undefined8 uStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 auStack_b0 [7];
  undefined8 uStack_78;
  long lStack_70;
  
  plVar13 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (((ulong)plVar13 & 1) != 0) {
    return;
  }
  lVar5 = param_1[0xe];
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(lVar5 + 0x98);
  lVar8 = lVar5 + 0x70;
  FUN_10a5412e8(lVar8,0);
  if (lVar8 == 0) {
    uVar18 = *(ulong *)(lVar5 + 0x78);
    if (uVar18 != 0) {
      unaff_x22 = 0;
      plVar13 = (long *)**(long **)(lVar5 + 0x70);
      if (plVar13 != (long *)0x0) {
        do {
          while( true ) {
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) goto LAB_10a5368f8;
            uVar15 = plVar13[1];
            if (uVar15 != 0) break;
            if (*(char *)(plVar13 + 2) == '\0') goto LAB_10a536b80;
          }
          if ((uVar18 & uVar18 - 1) == 0) {
            uVar15 = uVar15 & uVar18 - 1;
          }
          else if (uVar18 <= uVar15) {
            uVar14 = 0;
            if (uVar18 != 0) {
              uVar14 = uVar15 / uVar18;
            }
            uVar15 = uVar15 - uVar14 * uVar18;
          }
        } while (uVar15 == 0);
      }
    }
LAB_10a5368f8:
    plVar13 = (long *)0x18;
    __Znwm();
    *plVar13 = 0;
    plVar13[1] = 0;
    *(undefined1 *)(plVar13 + 2) = 0;
    fVar20 = (float)(*(long *)(lVar5 + 0x88) + 1);
    if ((uVar18 == 0) || (*(float *)(lVar5 + 0x90) * (float)uVar18 < fVar20)) {
      uVar15 = 1;
      if (2 < uVar18) {
        uVar15 = (ulong)((uVar18 & uVar18 - 1) != 0);
      }
      uVar15 = uVar15 | uVar18 << 1;
      uVar14 = (ulong)(fVar20 / *(float *)(lVar5 + 0x90));
      if (uVar15 <= uVar14) {
        uVar15 = uVar14;
      }
      if (uVar15 - 1 == 0) {
        uVar15 = 2;
      }
      else if ((uVar15 & uVar15 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar18 = *(ulong *)(lVar5 + 0x78);
      }
      if (uVar18 < uVar15) {
LAB_10a536990:
        if (uVar15 >> 0x3d != 0) goto LAB_10a536fd8;
        lVar8 = uVar15 << 3;
        __Znwm();
        lVar19 = *(long *)(lVar5 + 0x70);
        *(long *)(lVar5 + 0x70) = lVar8;
        if (lVar19 != 0) {
          __ZdlPv();
        }
        uVar18 = 0;
        *(ulong *)(lVar5 + 0x78) = uVar15;
        do {
          *(undefined8 *)(*(long *)(lVar5 + 0x70) + uVar18 * 8) = 0;
          uVar18 = uVar18 + 1;
        } while (uVar15 != uVar18);
        plVar9 = *(long **)(lVar5 + 0x80);
        uVar18 = uVar15;
        if (plVar9 != (long *)0x0) {
          uVar14 = plVar9[1];
          uVar12 = uVar15 - 1;
          if ((uVar15 & uVar12) == 0) {
            uVar14 = uVar14 & uVar12;
          }
          else if (uVar15 <= uVar14) {
            uVar17 = 0;
            if (uVar15 != 0) {
              uVar17 = uVar14 / uVar15;
            }
            uVar14 = uVar14 - uVar17 * uVar15;
          }
          *(undefined8 **)(*(long *)(lVar5 + 0x70) + uVar14 * 8) = (undefined8 *)(lVar5 + 0x80);
          plVar16 = (long *)*plVar9;
          while (plVar16 != (long *)0x0) {
            uVar17 = plVar16[1];
            if ((uVar15 & uVar12) == 0) {
              uVar17 = uVar17 & uVar12;
            }
            else if (uVar15 <= uVar17) {
              uVar3 = 0;
              if (uVar15 != 0) {
                uVar3 = uVar17 / uVar15;
              }
              uVar17 = uVar17 - uVar3 * uVar15;
            }
            plVar10 = plVar16;
            if (uVar17 != uVar14) {
              lVar8 = *(long *)(lVar5 + 0x70);
              if (*(long *)(lVar8 + uVar17 * 8) == 0) {
                *(long **)(lVar8 + uVar17 * 8) = plVar9;
                uVar14 = uVar17;
              }
              else {
                *plVar9 = *plVar16;
                *plVar16 = **(undefined8 **)(lVar8 + uVar17 * 8);
                **(long **)(lVar8 + uVar17 * 8) = (long)plVar16;
                plVar10 = plVar9;
              }
            }
            plVar9 = plVar10;
            plVar16 = (long *)*plVar10;
          }
        }
      }
      else if (uVar15 < uVar18) {
        uVar14 = (ulong)((float)*(ulong *)(lVar5 + 0x88) / *(float *)(lVar5 + 0x90));
        if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar14) {
          uVar14 = 1L << (-LZCOUNT(uVar14 - 1) & 0x3fU);
        }
        if (uVar15 <= uVar14) {
          uVar15 = uVar14;
        }
        if (uVar15 < uVar18) {
          if (uVar15 != 0) goto LAB_10a536990;
          lVar8 = *(long *)(lVar5 + 0x70);
          *(undefined8 *)(lVar5 + 0x70) = 0;
          if (lVar8 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(lVar5 + 0x78) = 0;
          uVar18 = 0;
        }
        else {
          uVar18 = *(ulong *)(lVar5 + 0x78);
        }
      }
      if ((uVar18 & uVar18 - 1) == 0) {
        unaff_x22 = 0;
      }
      else if (uVar18 == 0) {
        unaff_x22 = 0;
      }
      else {
        unaff_x22 = 0;
      }
    }
    lVar8 = *(long *)(lVar5 + 0x70);
    plVar9 = *(long **)(lVar8 + unaff_x22 * 8);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)(lVar5 + 0x80);
      *plVar13 = *plVar9;
      *plVar9 = (long)plVar13;
      *(long **)(lVar8 + unaff_x22 * 8) = plVar9;
      if (*plVar13 != 0) {
        uVar15 = *(ulong *)(*plVar13 + 8);
        if ((uVar18 & uVar18 - 1) == 0) {
          uVar15 = uVar15 & uVar18 - 1;
        }
        else if (uVar18 <= uVar15) {
          uVar14 = 0;
          if (uVar18 != 0) {
            uVar14 = uVar15 / uVar18;
          }
          uVar15 = uVar15 - uVar14 * uVar18;
        }
        plVar9 = (long *)(*(long *)(lVar5 + 0x70) + uVar15 * 8);
        goto LAB_10a536b70;
      }
    }
    else {
      *plVar13 = *plVar9;
LAB_10a536b70:
      *plVar9 = (long)plVar13;
    }
    *(long *)(lVar5 + 0x88) = *(long *)(lVar5 + 0x88) + 1;
LAB_10a536b80:
    __ZNSt3__15mutex6unlockEv(lVar5 + 0x98);
    ppuVar6 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    lStack_118 = 0;
    if (*ppuVar6 != (undefined *)0x0) {
      plVar13 = *(long **)(*ppuVar6 + 0x10);
      if (plVar13 == (long *)0x0) {
        lStack_118 = 0;
      }
      else {
        puVar7 = (undefined8 *)0x20;
        __Znwm();
        auStack_b0[0] = 0x8000000000000020;
        plStack_b8 = (long *)0x1b;
        *(undefined8 *)((long)puVar7 + 0x13) = 0x54494d494c5f544e;
        *(undefined8 *)((long)puVar7 + 0xb) = 0x554f435f444e4549;
        puVar7[1] = 0x5f444e454952465f;
        *puVar7 = 0x45524f43534e454c;
        *(undefined1 *)((long)puVar7 + 0x1b) = 0;
        puStack_c0 = puVar7;
        (**(code **)(*plVar13 + 0x40))(plVar13,&puStack_c0,0);
        lStack_118 = (long)plVar13 << 0x20;
      }
    }
    lVar8 = *(long *)(lVar5 + 0x20);
    uStack_120 = *(undefined8 *)(lVar5 + 0x20);
    uStack_128 = *(undefined8 *)(lVar5 + 0x18);
    if (lVar8 != 0) {
      plVar13 = (long *)(lVar8 + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = *plVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = *plVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pcStack_140 = FUN_10a5414ec;
    ppuStack_138 = &PTR_FUN_110bf0118;
    lStack_130 = lVar5;
    if (lVar8 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a3bf120(&puStack_190);
    lVar19 = *(long *)(*(long *)(lVar5 + 8) + 0x100);
    FUN_10a00ce20(&uStack_1b8,*(undefined8 *)(lVar5 + 0x28),&pcStack_140);
    plVar9 = (long *)0x138;
    __Znwm();
    puStack_c0 = puStack_190;
    plVar16 = plVar9 + 1;
    *plVar16 = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_110b9f3b0;
    plVar13 = plVar9 + 3;
    puStack_190 = (undefined8 *)0x0;
    plStack_b8 = (long *)uStack_188;
    (**(code **)(alStack_180[0] + 0x10))(auStack_b0,alStack_180);
    uStack_78 = uStack_148;
    uVar18 = *(ulong *)(lVar19 + 0x210);
    lVar8 = *(long *)(lVar19 + 0x208);
    if (-1 < (char)*(byte *)(lVar19 + 0x21f)) {
      uVar18 = (ulong)*(byte *)(lVar19 + 0x21f);
      lVar8 = lVar19 + 0x208;
    }
    uStack_100 = 0x10a05c39c;
    ppuStack_f8 = &PTR_FUN_110b9f370;
    uStack_f0 = uStack_1b8;
    uStack_e0 = uStack_1a8;
    uStack_e8 = uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    FUN_10a23708c(plVar13,&UNK_10e4c9541,0x31,&UNK_10f647b45,3,&puStack_c0,0,in_x7,lVar8,uVar18,
                  &uStack_100);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    FUN_10a042634(&puStack_c0);
    plStack_1a0 = plVar13;
    plStack_198 = plVar9;
    func_0x00010a05c07c(&uStack_1b8);
    FUN_10a042634(&puStack_190);
    plVar10 = *(long **)(*(long *)(*(long *)(lVar5 + 8) + 0x100) + 0x1c8);
    (**(code **)(*plVar10 + 0x60))();
    puStack_c0 = (undefined8 *)0x0;
    plStack_b8 = (long *)0x0;
    plVar11 = (long *)plVar10[1];
    if (((plVar11 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar11, plVar11 == (long *)0x0)) ||
       (puStack_c0 = (undefined8 *)*plVar10, puStack_c0 == (undefined8 *)0x0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f65e989,&UNK_10f65e9c8,0x72,&UNK_10f65ea28);
      }
    }
    else {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar2) {
          *plVar16 = *plVar16 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plStack_1c8 = plVar13;
      plStack_1c0 = plVar9;
      (**(code **)*puStack_c0)(puStack_c0,&plStack_1c8);
      plVar13 = plStack_1c0;
      if (plStack_1c0 != (long *)0x0) {
        plVar9 = plStack_1c0 + 1;
        do {
          lVar8 = *plVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
    }
    plVar13 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar9 = plStack_b8 + 1;
      do {
        lVar8 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar13 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar9 = plStack_198 + 1;
      do {
        lVar8 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    (*(code *)*ppuStack_138)(&ppuStack_138);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar5 + 0x98);
    return;
  }
  ___stack_chk_fail();
LAB_10a536fd8:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a53700c);
  (*pcVar4)();
}



/* Entry: 10a29c274; end: 10a29c2a7;  */

bool FUN_10a29c274(long param_1)

{
  long lVar1;
  undefined1 uStack_11;
  
  uStack_11 = 0;
  lVar1 = *(long *)(param_1 + 0x70) + 0x38;
  func_0x00010a54138c(lVar1,&uStack_11);
  return lVar1 != 0;
}



/* Entry: 10a29c2a8; end: 10a29c2bf;  */

void FUN_10a29c2a8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  plVar6 = *(long **)(param_2 + 0x70);
  FUN_10a537110(plVar6,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a53803c(param_1,plVar6[1] - *plVar6 >> 4);
  plVar2 = (long *)plVar6[1];
  for (plVar6 = (long *)*plVar6; plVar6 != plVar2; plVar6 = plVar6 + 2) {
    lVar7 = *plVar6;
    FUN_10a541430(auStack_48,&uStack_31,lVar7 + 0x18,lVar7 + 0x30,lVar7 + 0x78);
    func_0x00010a5380d4(param_1,auStack_48);
    plVar5 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10a29c2c0; end: 10a29c3bf;  */

undefined8 * FUN_10a29c2c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8a60;
  FUN_10a2965a8(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8ab0;
  FUN_10a29a810(param_1 + 0xb);
  FUN_10a29a8c4(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a29c3c0; end: 10a29c3ff;  */

/* WARNING: Removing unreachable block (ram,0x00010a536c98) */
/* WARNING: Removing unreachable block (ram,0x00010a536c88) */
/* WARNING: Removing unreachable block (ram,0x00010a536cd4) */
/* WARNING: Removing unreachable block (ram,0x00010a536c90) */
/* WARNING: Removing unreachable block (ram,0x00010a536c04) */
/* WARNING: Removing unreachable block (ram,0x00010a536ca8) */
/* WARNING: Removing unreachable block (ram,0x00010a536cac) */
/* WARNING: Removing unreachable block (ram,0x00010a536fe0) */
/* WARNING: Removing unreachable block (ram,0x00010a536cb4) */
/* WARNING: Removing unreachable block (ram,0x00010a536ce4) */

void FUN_10a29c3c0(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 in_x7;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong unaff_x22;
  ulong uVar20;
  long lVar21;
  float fVar22;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  long alStack_180 [7];
  undefined8 uStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 auStack_b0 [7];
  undefined8 uStack_78;
  long lStack_70;
  
  plVar16 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (((ulong)plVar16 & 1) != 0) {
    return;
  }
  lVar7 = param_1[0xe];
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(lVar7 + 0x98);
  lVar10 = lVar7 + 0x70;
  FUN_10a5412e8(lVar10,4);
  if (lVar10 == 0) {
    uVar20 = *(ulong *)(lVar7 + 0x78);
    if (uVar20 != 0) {
      uVar14 = uVar20 - 1;
      if ((uVar20 & uVar14) == 0) {
        unaff_x22 = (ulong)((uint)uVar20 - 1) & 4;
      }
      else {
        unaff_x22 = 4;
        if (uVar20 < 5) {
          uVar1 = (uint)uVar20 & 0xff;
          uVar4 = 0;
          if ((uVar20 & 0xff) != 0) {
            uVar4 = 4 / uVar1;
          }
          unaff_x22 = (ulong)(4 - uVar4 * uVar1);
        }
      }
      plVar16 = *(long **)(*(long *)(lVar7 + 0x70) + unaff_x22 * 8);
      if (plVar16 != (long *)0x0) {
        do {
          while( true ) {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_10a5368f8;
            uVar17 = plVar16[1];
            if (uVar17 != 4) break;
            if (*(char *)(plVar16 + 2) == '\x04') goto LAB_10a536b80;
          }
          if ((uVar20 & uVar14) == 0) {
            uVar17 = uVar17 & uVar14;
          }
          else if (uVar20 <= uVar17) {
            uVar15 = 0;
            if (uVar20 != 0) {
              uVar15 = uVar17 / uVar20;
            }
            uVar17 = uVar17 - uVar15 * uVar20;
          }
        } while (uVar17 == unaff_x22);
      }
    }
LAB_10a5368f8:
    plVar16 = (long *)0x18;
    __Znwm();
    *plVar16 = 0;
    plVar16[1] = 4;
    *(undefined1 *)(plVar16 + 2) = 4;
    fVar22 = (float)(*(long *)(lVar7 + 0x88) + 1);
    if ((uVar20 == 0) || (*(float *)(lVar7 + 0x90) * (float)uVar20 < fVar22)) {
      uVar14 = 1;
      if (2 < uVar20) {
        uVar14 = (ulong)((uVar20 & uVar20 - 1) != 0);
      }
      uVar14 = uVar14 | uVar20 << 1;
      uVar17 = (ulong)(fVar22 / *(float *)(lVar7 + 0x90));
      if (uVar14 <= uVar17) {
        uVar14 = uVar17;
      }
      if (uVar14 - 1 == 0) {
        uVar14 = 2;
      }
      else if ((uVar14 & uVar14 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar20 = *(ulong *)(lVar7 + 0x78);
      }
      if (uVar20 < uVar14) {
LAB_10a536990:
        if (uVar14 >> 0x3d != 0) goto LAB_10a536fd8;
        lVar10 = uVar14 << 3;
        __Znwm();
        lVar21 = *(long *)(lVar7 + 0x70);
        *(long *)(lVar7 + 0x70) = lVar10;
        if (lVar21 != 0) {
          __ZdlPv();
        }
        uVar20 = 0;
        *(ulong *)(lVar7 + 0x78) = uVar14;
        do {
          *(undefined8 *)(*(long *)(lVar7 + 0x70) + uVar20 * 8) = 0;
          uVar20 = uVar20 + 1;
        } while (uVar14 != uVar20);
        plVar11 = *(long **)(lVar7 + 0x80);
        uVar20 = uVar14;
        if (plVar11 != (long *)0x0) {
          uVar17 = plVar11[1];
          uVar15 = uVar14 - 1;
          if ((uVar14 & uVar15) == 0) {
            uVar17 = uVar17 & uVar15;
          }
          else if (uVar14 <= uVar17) {
            uVar19 = 0;
            if (uVar14 != 0) {
              uVar19 = uVar17 / uVar14;
            }
            uVar17 = uVar17 - uVar19 * uVar14;
          }
          *(undefined8 **)(*(long *)(lVar7 + 0x70) + uVar17 * 8) = (undefined8 *)(lVar7 + 0x80);
          plVar18 = (long *)*plVar11;
          while (plVar18 != (long *)0x0) {
            uVar19 = plVar18[1];
            if ((uVar14 & uVar15) == 0) {
              uVar19 = uVar19 & uVar15;
            }
            else if (uVar14 <= uVar19) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar19 / uVar14;
              }
              uVar19 = uVar19 - uVar5 * uVar14;
            }
            plVar12 = plVar18;
            if (uVar19 != uVar17) {
              lVar10 = *(long *)(lVar7 + 0x70);
              if (*(long *)(lVar10 + uVar19 * 8) == 0) {
                *(long **)(lVar10 + uVar19 * 8) = plVar11;
                uVar17 = uVar19;
              }
              else {
                *plVar11 = *plVar18;
                *plVar18 = **(undefined8 **)(lVar10 + uVar19 * 8);
                **(long **)(lVar10 + uVar19 * 8) = (long)plVar18;
                plVar12 = plVar11;
              }
            }
            plVar11 = plVar12;
            plVar18 = (long *)*plVar12;
          }
        }
      }
      else if (uVar14 < uVar20) {
        uVar17 = (ulong)((float)*(ulong *)(lVar7 + 0x88) / *(float *)(lVar7 + 0x90));
        if ((uVar20 < 3) || ((uVar20 & uVar20 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar17) {
          uVar17 = 1L << (-LZCOUNT(uVar17 - 1) & 0x3fU);
        }
        if (uVar14 <= uVar17) {
          uVar14 = uVar17;
        }
        if (uVar14 < uVar20) {
          if (uVar14 != 0) goto LAB_10a536990;
          lVar10 = *(long *)(lVar7 + 0x70);
          *(undefined8 *)(lVar7 + 0x70) = 0;
          if (lVar10 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(lVar7 + 0x78) = 0;
          uVar20 = 0;
        }
        else {
          uVar20 = *(ulong *)(lVar7 + 0x78);
        }
      }
      if ((uVar20 & uVar20 - 1) == 0) {
        unaff_x22 = (ulong)((int)uVar20 - 1) & 4;
      }
      else if (uVar20 < 5) {
        uVar14 = 0;
        if (uVar20 != 0) {
          uVar14 = 4 / uVar20;
        }
        unaff_x22 = 4 - uVar14 * uVar20;
      }
      else {
        unaff_x22 = 4;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x70);
    plVar11 = *(long **)(lVar10 + unaff_x22 * 8);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)(lVar7 + 0x80);
      *plVar16 = *plVar11;
      *plVar11 = (long)plVar16;
      *(long **)(lVar10 + unaff_x22 * 8) = plVar11;
      if (*plVar16 != 0) {
        uVar14 = *(ulong *)(*plVar16 + 8);
        if ((uVar20 & uVar20 - 1) == 0) {
          uVar14 = uVar14 & uVar20 - 1;
        }
        else if (uVar20 <= uVar14) {
          uVar17 = 0;
          if (uVar20 != 0) {
            uVar17 = uVar14 / uVar20;
          }
          uVar14 = uVar14 - uVar17 * uVar20;
        }
        plVar11 = (long *)(*(long *)(lVar7 + 0x70) + uVar14 * 8);
        goto LAB_10a536b70;
      }
    }
    else {
      *plVar16 = *plVar11;
LAB_10a536b70:
      *plVar11 = (long)plVar16;
    }
    *(long *)(lVar7 + 0x88) = *(long *)(lVar7 + 0x88) + 1;
LAB_10a536b80:
    __ZNSt3__15mutex6unlockEv(lVar7 + 0x98);
    ppuVar8 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    uStack_118 = 0;
    if (*ppuVar8 != (undefined *)0x0) {
      plVar16 = *(long **)(*ppuVar8 + 0x10);
      if (plVar16 == (long *)0x0) {
        uStack_118 = 0;
      }
      else {
        puVar9 = (undefined8 *)0x20;
        __Znwm();
        auStack_b0[0] = 0x8000000000000020;
        plStack_b8 = (long *)0x1b;
        *(undefined8 *)((long)puVar9 + 0x13) = 0x54494d494c5f544e;
        *(undefined8 *)((long)puVar9 + 0xb) = 0x554f435f444e4549;
        puVar9[1] = 0x5f444e454952465f;
        *puVar9 = 0x45524f43534e454c;
        *(undefined1 *)((long)puVar9 + 0x1b) = 0;
        puStack_c0 = puVar9;
        (**(code **)(*plVar16 + 0x40))(plVar16,&puStack_c0,0);
        uStack_118 = (long)plVar16 << 0x20;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x20);
    uStack_120 = *(undefined8 *)(lVar7 + 0x20);
    uStack_128 = *(undefined8 *)(lVar7 + 0x18);
    if (lVar10 != 0) {
      plVar16 = (long *)(lVar10 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_140 = FUN_10a5414ec;
    ppuStack_138 = &PTR_FUN_110bf0118;
    uStack_118 = uStack_118 | 4;
    lStack_130 = lVar7;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a3bf120(&puStack_190);
    lVar21 = *(long *)(*(long *)(lVar7 + 8) + 0x100);
    FUN_10a00ce20(&uStack_1b8,*(undefined8 *)(lVar7 + 0x28),&pcStack_140);
    plVar11 = (long *)0x138;
    __Znwm();
    puStack_c0 = puStack_190;
    plVar18 = plVar11 + 1;
    *plVar18 = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&PTR_FUN_110b9f3b0;
    plVar16 = plVar11 + 3;
    puStack_190 = (undefined8 *)0x0;
    plStack_b8 = (long *)uStack_188;
    (**(code **)(alStack_180[0] + 0x10))(auStack_b0,alStack_180);
    uStack_78 = uStack_148;
    uVar20 = *(ulong *)(lVar21 + 0x210);
    lVar10 = *(long *)(lVar21 + 0x208);
    if (-1 < (char)*(byte *)(lVar21 + 0x21f)) {
      uVar20 = (ulong)*(byte *)(lVar21 + 0x21f);
      lVar10 = lVar21 + 0x208;
    }
    uStack_100 = 0x10a05c39c;
    ppuStack_f8 = &PTR_FUN_110b9f370;
    uStack_f0 = uStack_1b8;
    uStack_e0 = uStack_1a8;
    uStack_e8 = uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    FUN_10a23708c(plVar16,&UNK_10e4c9573,0x32,&UNK_10f647b45,3,&puStack_c0,0,in_x7,lVar10,uVar20,
                  &uStack_100);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    FUN_10a042634(&puStack_c0);
    plStack_1a0 = plVar16;
    plStack_198 = plVar11;
    func_0x00010a05c07c(&uStack_1b8);
    FUN_10a042634(&puStack_190);
    plVar12 = *(long **)(*(long *)(*(long *)(lVar7 + 8) + 0x100) + 0x1c8);
    (**(code **)(*plVar12 + 0x60))();
    puStack_c0 = (undefined8 *)0x0;
    plStack_b8 = (long *)0x0;
    plVar13 = (long *)plVar12[1];
    if (((plVar13 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar13, plVar13 == (long *)0x0)) ||
       (puStack_c0 = (undefined8 *)*plVar12, puStack_c0 == (undefined8 *)0x0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f65e989,&UNK_10f65e9c8,0x72,&UNK_10f65ea28);
      }
    }
    else {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar3) {
          *plVar18 = *plVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_1c8 = plVar16;
      plStack_1c0 = plVar11;
      (**(code **)*puStack_c0)(puStack_c0,&plStack_1c8);
      plVar16 = plStack_1c0;
      if (plStack_1c0 != (long *)0x0) {
        plVar11 = plStack_1c0 + 1;
        do {
          lVar10 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
    }
    plVar16 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar11 = plStack_b8 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar11 = plStack_198 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    (*(code *)*ppuStack_138)(&ppuStack_138);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar7 + 0x98);
    return;
  }
  ___stack_chk_fail();
LAB_10a536fd8:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a53700c);
  (*pcVar6)();
}



/* Entry: 10a29c400; end: 10a29c437;  */

bool FUN_10a29c400(long param_1)

{
  long lVar1;
  undefined1 uStack_11;
  
  uStack_11 = 4;
  lVar1 = *(long *)(param_1 + 0x70) + 0x38;
  func_0x00010a54138c(lVar1,&uStack_11);
  return lVar1 != 0;
}



/* Entry: 10a29c438; end: 10a29c477;  */

void FUN_10a29c438(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  plVar4 = *(long **)(param_2 + 0x70);
  FUN_10a537110(plVar4,4);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar7 = (undefined8 *)*plVar4;
  puVar1 = (undefined8 *)plVar4[1];
  lVar5 = (long)puVar1 - (long)puVar7 >> 4;
  if (lVar5 != 0) {
    FUN_10a26a110(param_1,lVar5);
    puVar6 = (undefined8 *)param_1[1];
    for (; puVar7 != puVar1; puVar7 = puVar7 + 2) {
      lVar5 = puVar7[1];
      uVar8 = *puVar7;
      puVar6[1] = puVar7[1];
      *puVar6 = uVar8;
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
    param_1[1] = puVar6;
  }
  return;
}



/* Entry: 10a29c478; end: 10a29c483;  */

void FUN_10a29c478(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10a29c484; end: 10a29c583;  */

undefined8 * FUN_10a29c484(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb8cb0;
  FUN_10a2965a8(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb8d00;
  FUN_10a29b5c8(param_1 + 0xb);
  FUN_10a29b67c(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a29c584; end: 10a29c5c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a536c98) */
/* WARNING: Removing unreachable block (ram,0x00010a536c88) */
/* WARNING: Removing unreachable block (ram,0x00010a536cd4) */
/* WARNING: Removing unreachable block (ram,0x00010a536c90) */
/* WARNING: Removing unreachable block (ram,0x00010a536c04) */
/* WARNING: Removing unreachable block (ram,0x00010a536ca8) */
/* WARNING: Removing unreachable block (ram,0x00010a536cac) */
/* WARNING: Removing unreachable block (ram,0x00010a536fe0) */
/* WARNING: Removing unreachable block (ram,0x00010a536cb4) */
/* WARNING: Removing unreachable block (ram,0x00010a536ce4) */

void FUN_10a29c584(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 in_x7;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong unaff_x22;
  ulong uVar20;
  long lVar21;
  float fVar22;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  long alStack_180 [7];
  undefined8 uStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 auStack_b0 [7];
  undefined8 uStack_78;
  long lStack_70;
  
  plVar16 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (((ulong)plVar16 & 1) != 0) {
    return;
  }
  lVar7 = param_1[0xe];
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(lVar7 + 0x98);
  lVar10 = lVar7 + 0x70;
  FUN_10a5412e8(lVar10,4);
  if (lVar10 == 0) {
    uVar20 = *(ulong *)(lVar7 + 0x78);
    if (uVar20 != 0) {
      uVar14 = uVar20 - 1;
      if ((uVar20 & uVar14) == 0) {
        unaff_x22 = (ulong)((uint)uVar20 - 1) & 4;
      }
      else {
        unaff_x22 = 4;
        if (uVar20 < 5) {
          uVar1 = (uint)uVar20 & 0xff;
          uVar4 = 0;
          if ((uVar20 & 0xff) != 0) {
            uVar4 = 4 / uVar1;
          }
          unaff_x22 = (ulong)(4 - uVar4 * uVar1);
        }
      }
      plVar16 = *(long **)(*(long *)(lVar7 + 0x70) + unaff_x22 * 8);
      if (plVar16 != (long *)0x0) {
        do {
          while( true ) {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_10a5368f8;
            uVar17 = plVar16[1];
            if (uVar17 != 4) break;
            if (*(char *)(plVar16 + 2) == '\x04') goto LAB_10a536b80;
          }
          if ((uVar20 & uVar14) == 0) {
            uVar17 = uVar17 & uVar14;
          }
          else if (uVar20 <= uVar17) {
            uVar15 = 0;
            if (uVar20 != 0) {
              uVar15 = uVar17 / uVar20;
            }
            uVar17 = uVar17 - uVar15 * uVar20;
          }
        } while (uVar17 == unaff_x22);
      }
    }
LAB_10a5368f8:
    plVar16 = (long *)0x18;
    __Znwm();
    *plVar16 = 0;
    plVar16[1] = 4;
    *(undefined1 *)(plVar16 + 2) = 4;
    fVar22 = (float)(*(long *)(lVar7 + 0x88) + 1);
    if ((uVar20 == 0) || (*(float *)(lVar7 + 0x90) * (float)uVar20 < fVar22)) {
      uVar14 = 1;
      if (2 < uVar20) {
        uVar14 = (ulong)((uVar20 & uVar20 - 1) != 0);
      }
      uVar14 = uVar14 | uVar20 << 1;
      uVar17 = (ulong)(fVar22 / *(float *)(lVar7 + 0x90));
      if (uVar14 <= uVar17) {
        uVar14 = uVar17;
      }
      if (uVar14 - 1 == 0) {
        uVar14 = 2;
      }
      else if ((uVar14 & uVar14 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar20 = *(ulong *)(lVar7 + 0x78);
      }
      if (uVar20 < uVar14) {
LAB_10a536990:
        if (uVar14 >> 0x3d != 0) goto LAB_10a536fd8;
        lVar10 = uVar14 << 3;
        __Znwm();
        lVar21 = *(long *)(lVar7 + 0x70);
        *(long *)(lVar7 + 0x70) = lVar10;
        if (lVar21 != 0) {
          __ZdlPv();
        }
        uVar20 = 0;
        *(ulong *)(lVar7 + 0x78) = uVar14;
        do {
          *(undefined8 *)(*(long *)(lVar7 + 0x70) + uVar20 * 8) = 0;
          uVar20 = uVar20 + 1;
        } while (uVar14 != uVar20);
        plVar11 = *(long **)(lVar7 + 0x80);
        uVar20 = uVar14;
        if (plVar11 != (long *)0x0) {
          uVar17 = plVar11[1];
          uVar15 = uVar14 - 1;
          if ((uVar14 & uVar15) == 0) {
            uVar17 = uVar17 & uVar15;
          }
          else if (uVar14 <= uVar17) {
            uVar19 = 0;
            if (uVar14 != 0) {
              uVar19 = uVar17 / uVar14;
            }
            uVar17 = uVar17 - uVar19 * uVar14;
          }
          *(undefined8 **)(*(long *)(lVar7 + 0x70) + uVar17 * 8) = (undefined8 *)(lVar7 + 0x80);
          plVar18 = (long *)*plVar11;
          while (plVar18 != (long *)0x0) {
            uVar19 = plVar18[1];
            if ((uVar14 & uVar15) == 0) {
              uVar19 = uVar19 & uVar15;
            }
            else if (uVar14 <= uVar19) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar19 / uVar14;
              }
              uVar19 = uVar19 - uVar5 * uVar14;
            }
            plVar12 = plVar18;
            if (uVar19 != uVar17) {
              lVar10 = *(long *)(lVar7 + 0x70);
              if (*(long *)(lVar10 + uVar19 * 8) == 0) {
                *(long **)(lVar10 + uVar19 * 8) = plVar11;
                uVar17 = uVar19;
              }
              else {
                *plVar11 = *plVar18;
                *plVar18 = **(undefined8 **)(lVar10 + uVar19 * 8);
                **(long **)(lVar10 + uVar19 * 8) = (long)plVar18;
                plVar12 = plVar11;
              }
            }
            plVar11 = plVar12;
            plVar18 = (long *)*plVar12;
          }
        }
      }
      else if (uVar14 < uVar20) {
        uVar17 = (ulong)((float)*(ulong *)(lVar7 + 0x88) / *(float *)(lVar7 + 0x90));
        if ((uVar20 < 3) || ((uVar20 & uVar20 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar17) {
          uVar17 = 1L << (-LZCOUNT(uVar17 - 1) & 0x3fU);
        }
        if (uVar14 <= uVar17) {
          uVar14 = uVar17;
        }
        if (uVar14 < uVar20) {
          if (uVar14 != 0) goto LAB_10a536990;
          lVar10 = *(long *)(lVar7 + 0x70);
          *(undefined8 *)(lVar7 + 0x70) = 0;
          if (lVar10 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(lVar7 + 0x78) = 0;
          uVar20 = 0;
        }
        else {
          uVar20 = *(ulong *)(lVar7 + 0x78);
        }
      }
      if ((uVar20 & uVar20 - 1) == 0) {
        unaff_x22 = (ulong)((int)uVar20 - 1) & 4;
      }
      else if (uVar20 < 5) {
        uVar14 = 0;
        if (uVar20 != 0) {
          uVar14 = 4 / uVar20;
        }
        unaff_x22 = 4 - uVar14 * uVar20;
      }
      else {
        unaff_x22 = 4;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x70);
    plVar11 = *(long **)(lVar10 + unaff_x22 * 8);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)(lVar7 + 0x80);
      *plVar16 = *plVar11;
      *plVar11 = (long)plVar16;
      *(long **)(lVar10 + unaff_x22 * 8) = plVar11;
      if (*plVar16 != 0) {
        uVar14 = *(ulong *)(*plVar16 + 8);
        if ((uVar20 & uVar20 - 1) == 0) {
          uVar14 = uVar14 & uVar20 - 1;
        }
        else if (uVar20 <= uVar14) {
          uVar17 = 0;
          if (uVar20 != 0) {
            uVar17 = uVar14 / uVar20;
          }
          uVar14 = uVar14 - uVar17 * uVar20;
        }
        plVar11 = (long *)(*(long *)(lVar7 + 0x70) + uVar14 * 8);
        goto LAB_10a536b70;
      }
    }
    else {
      *plVar16 = *plVar11;
LAB_10a536b70:
      *plVar11 = (long)plVar16;
    }
    *(long *)(lVar7 + 0x88) = *(long *)(lVar7 + 0x88) + 1;
LAB_10a536b80:
    __ZNSt3__15mutex6unlockEv(lVar7 + 0x98);
    ppuVar8 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    uStack_118 = 0;
    if (*ppuVar8 != (undefined *)0x0) {
      plVar16 = *(long **)(*ppuVar8 + 0x10);
      if (plVar16 == (long *)0x0) {
        uStack_118 = 0;
      }
      else {
        puVar9 = (undefined8 *)0x20;
        __Znwm();
        auStack_b0[0] = 0x8000000000000020;
        plStack_b8 = (long *)0x1b;
        *(undefined8 *)((long)puVar9 + 0x13) = 0x54494d494c5f544e;
        *(undefined8 *)((long)puVar9 + 0xb) = 0x554f435f444e4549;
        puVar9[1] = 0x5f444e454952465f;
        *puVar9 = 0x45524f43534e454c;
        *(undefined1 *)((long)puVar9 + 0x1b) = 0;
        puStack_c0 = puVar9;
        (**(code **)(*plVar16 + 0x40))(plVar16,&puStack_c0,0);
        uStack_118 = (long)plVar16 << 0x20;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x20);
    uStack_120 = *(undefined8 *)(lVar7 + 0x20);
    uStack_128 = *(undefined8 *)(lVar7 + 0x18);
    if (lVar10 != 0) {
      plVar16 = (long *)(lVar10 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_140 = FUN_10a5414ec;
    ppuStack_138 = &PTR_FUN_110bf0118;
    uStack_118 = uStack_118 | 4;
    lStack_130 = lVar7;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a3bf120(&puStack_190);
    lVar21 = *(long *)(*(long *)(lVar7 + 8) + 0x100);
    FUN_10a00ce20(&uStack_1b8,*(undefined8 *)(lVar7 + 0x28),&pcStack_140);
    plVar11 = (long *)0x138;
    __Znwm();
    puStack_c0 = puStack_190;
    plVar18 = plVar11 + 1;
    *plVar18 = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&PTR_FUN_110b9f3b0;
    plVar16 = plVar11 + 3;
    puStack_190 = (undefined8 *)0x0;
    plStack_b8 = (long *)uStack_188;
    (**(code **)(alStack_180[0] + 0x10))(auStack_b0,alStack_180);
    uStack_78 = uStack_148;
    uVar20 = *(ulong *)(lVar21 + 0x210);
    lVar10 = *(long *)(lVar21 + 0x208);
    if (-1 < (char)*(byte *)(lVar21 + 0x21f)) {
      uVar20 = (ulong)*(byte *)(lVar21 + 0x21f);
      lVar10 = lVar21 + 0x208;
    }
    uStack_100 = 0x10a05c39c;
    ppuStack_f8 = &PTR_FUN_110b9f370;
    uStack_f0 = uStack_1b8;
    uStack_e0 = uStack_1a8;
    uStack_e8 = uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    FUN_10a23708c(plVar16,&UNK_10e4c9573,0x32,&UNK_10f647b45,3,&puStack_c0,0,in_x7,lVar10,uVar20,
                  &uStack_100);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    FUN_10a042634(&puStack_c0);
    plStack_1a0 = plVar16;
    plStack_198 = plVar11;
    func_0x00010a05c07c(&uStack_1b8);
    FUN_10a042634(&puStack_190);
    plVar12 = *(long **)(*(long *)(*(long *)(lVar7 + 8) + 0x100) + 0x1c8);
    (**(code **)(*plVar12 + 0x60))();
    puStack_c0 = (undefined8 *)0x0;
    plStack_b8 = (long *)0x0;
    plVar13 = (long *)plVar12[1];
    if (((plVar13 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar13, plVar13 == (long *)0x0)) ||
       (puStack_c0 = (undefined8 *)*plVar12, puStack_c0 == (undefined8 *)0x0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f65e989,&UNK_10f65e9c8,0x72,&UNK_10f65ea28);
      }
    }
    else {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar3) {
          *plVar18 = *plVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_1c8 = plVar16;
      plStack_1c0 = plVar11;
      (**(code **)*puStack_c0)(puStack_c0,&plStack_1c8);
      plVar16 = plStack_1c0;
      if (plStack_1c0 != (long *)0x0) {
        plVar11 = plStack_1c0 + 1;
        do {
          lVar10 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
    }
    plVar16 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar11 = plStack_b8 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar11 = plStack_198 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    (*(code *)*ppuStack_138)(&ppuStack_138);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar7 + 0x98);
    return;
  }
  ___stack_chk_fail();
LAB_10a536fd8:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a53700c);
  (*pcVar6)();
}



/* Entry: 10a29c5c4; end: 10a29c5fb;  */

bool FUN_10a29c5c4(long param_1)

{
  long lVar1;
  undefined1 uStack_11;
  
  uStack_11 = 4;
  lVar1 = *(long *)(param_1 + 0x70) + 0x38;
  func_0x00010a54138c(lVar1,&uStack_11);
  return lVar1 != 0;
}



/* Entry: 10a29c5fc; end: 10a29c613;  */

void FUN_10a29c5fc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  plVar6 = *(long **)(param_2 + 0x70);
  FUN_10a537110(plVar6,4);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a53803c(param_1,plVar6[1] - *plVar6 >> 4);
  plVar2 = (long *)plVar6[1];
  for (plVar6 = (long *)*plVar6; plVar6 != plVar2; plVar6 = plVar6 + 2) {
    lVar7 = *plVar6;
    FUN_10a541430(auStack_48,&uStack_31,lVar7 + 0x18,lVar7 + 0x30,lVar7 + 0x78);
    func_0x00010a5380d4(param_1,auStack_48);
    plVar5 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10a29c614; end: 10a29c713;  */

undefined8 * FUN_10a29c614(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb90e0;
  FUN_10a2965a8(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb9130;
  FUN_10a29cabc(param_1 + 0xb);
  FUN_10a29cb18(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a29c714; end: 10a29c9c3;  */

void FUN_10a29c714(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 *puStack_70;
  long *plStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  undefined8 *puStack_40;
  long *plStack_38;
  
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x18))();
  if ((int)plVar4 != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x28))();
    if ((int)plVar4 != 0) {
      (**(code **)(*param_1 + 0x30))(&puStack_40,param_1);
      puVar7 = (undefined8 *)param_1[8];
      lStack_48 = param_1[10];
      puVar8 = (undefined8 *)param_1[9];
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[8] = 0;
      puStack_58 = puVar7;
      puStack_50 = puVar8;
      for (; puVar7 != puVar8; puVar7 = puVar7 + 8) {
        pcVar5 = (code *)*puVar7;
        plStack_68 = plStack_38;
        puStack_70 = puStack_40;
        if (plStack_38 != (long *)0x0) {
          plVar4 = plStack_38 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        (*pcVar5)(&puStack_70,puVar7);
        plVar4 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 1;
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
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      puVar7 = (undefined8 *)param_1[0xb];
      lStack_60 = param_1[0xd];
      puVar8 = (undefined8 *)param_1[0xc];
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xb] = 0;
      puStack_70 = puVar7;
      plStack_68 = puVar8;
      for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
        FUN_10a29cb90(*puVar7,&puStack_40);
      }
      if ((param_1[1] != param_1[2]) || (param_1[4] != param_1[5])) {
        (**(code **)(*param_1 + 0x38))(auStack_88,param_1,&puStack_40);
        lVar6 = param_1[1];
        lStack_90 = param_1[3];
        lVar9 = param_1[2];
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[1] = 0;
        lStack_a0 = lVar6;
        lStack_98 = lVar9;
        for (; lVar6 != lVar9; lVar6 = lVar6 + 0x40) {
          FUN_10a2974b8(lVar6,auStack_88);
        }
        puVar7 = (undefined8 *)param_1[4];
        lStack_a8 = param_1[6];
        puVar8 = (undefined8 *)param_1[5];
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[4] = 0;
        puStack_b8 = puVar7;
        puStack_b0 = puVar8;
        for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
          FUN_10a1bcbe0(*puVar7,auStack_88);
        }
        FUN_10a2973e4(&puStack_b8);
        FUN_10a297440(&lStack_a0);
        if (cStack_71 < '\0') {
          __ZdlPv(auStack_88[0]);
        }
      }
      FUN_10a29cabc(&puStack_70);
      FUN_10a29cb18(&puStack_58);
      if (plStack_38 != (long *)0x0) {
        plVar4 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
    }
  }
  return;
}



/* Entry: 10a29c9c4; end: 10a29c9ff;  */

bool FUN_10a29c9c4(long param_1)

{
  if (((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
      (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28))) &&
     (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))) {
    return *(long *)(param_1 + 0x58) != *(long *)(param_1 + 0x60);
  }
  return true;
}



/* Entry: 10a29ca00; end: 10a29ca3f;  */

/* WARNING: Removing unreachable block (ram,0x00010a536c80) */
/* WARNING: Removing unreachable block (ram,0x00010a536c88) */
/* WARNING: Removing unreachable block (ram,0x00010a536cd4) */
/* WARNING: Removing unreachable block (ram,0x00010a536c90) */
/* WARNING: Removing unreachable block (ram,0x00010a536fe0) */
/* WARNING: Removing unreachable block (ram,0x00010a536c98) */
/* WARNING: Removing unreachable block (ram,0x00010a536ce4) */
/* WARNING: Removing unreachable block (ram,0x00010a536c04) */
/* WARNING: Removing unreachable block (ram,0x00010a536cc4) */

void FUN_10a29ca00(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 in_x7;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong unaff_x22;
  ulong uVar20;
  long lVar21;
  float fVar22;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  long alStack_180 [7];
  undefined8 uStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 auStack_b0 [7];
  undefined8 uStack_78;
  long lStack_70;
  
  plVar16 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (((ulong)plVar16 & 1) != 0) {
    return;
  }
  lVar7 = param_1[0xe];
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(lVar7 + 0x98);
  lVar10 = lVar7 + 0x70;
  FUN_10a5412e8(lVar10,1);
  if (lVar10 == 0) {
    uVar20 = *(ulong *)(lVar7 + 0x78);
    if (uVar20 != 0) {
      uVar14 = uVar20 - 1;
      if ((uVar20 & uVar14) == 0) {
        unaff_x22 = (ulong)((uint)uVar20 - 1) & 1;
      }
      else {
        unaff_x22 = 1;
        if (uVar20 < 2) {
          uVar1 = (uint)uVar20 & 0xff;
          uVar4 = 0;
          if ((uVar20 & 0xff) != 0) {
            uVar4 = 1 / uVar1;
          }
          unaff_x22 = (ulong)(1 - uVar4 * uVar1);
        }
      }
      plVar16 = *(long **)(*(long *)(lVar7 + 0x70) + unaff_x22 * 8);
      if (plVar16 != (long *)0x0) {
        do {
          while( true ) {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_10a5368f8;
            uVar17 = plVar16[1];
            if (uVar17 != 1) break;
            if (*(char *)(plVar16 + 2) == '\x01') goto LAB_10a536b80;
          }
          if ((uVar20 & uVar14) == 0) {
            uVar17 = uVar17 & uVar14;
          }
          else if (uVar20 <= uVar17) {
            uVar15 = 0;
            if (uVar20 != 0) {
              uVar15 = uVar17 / uVar20;
            }
            uVar17 = uVar17 - uVar15 * uVar20;
          }
        } while (uVar17 == unaff_x22);
      }
    }
LAB_10a5368f8:
    plVar16 = (long *)0x18;
    __Znwm();
    *plVar16 = 0;
    plVar16[1] = 1;
    *(undefined1 *)(plVar16 + 2) = 1;
    fVar22 = (float)(*(long *)(lVar7 + 0x88) + 1);
    if ((uVar20 == 0) || (*(float *)(lVar7 + 0x90) * (float)uVar20 < fVar22)) {
      uVar14 = 1;
      if (2 < uVar20) {
        uVar14 = (ulong)((uVar20 & uVar20 - 1) != 0);
      }
      uVar14 = uVar14 | uVar20 << 1;
      uVar17 = (ulong)(fVar22 / *(float *)(lVar7 + 0x90));
      if (uVar14 <= uVar17) {
        uVar14 = uVar17;
      }
      if (uVar14 - 1 == 0) {
        uVar14 = 2;
      }
      else if ((uVar14 & uVar14 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar20 = *(ulong *)(lVar7 + 0x78);
      }
      if (uVar20 < uVar14) {
LAB_10a536990:
        if (uVar14 >> 0x3d != 0) goto LAB_10a536fd8;
        lVar10 = uVar14 << 3;
        __Znwm();
        lVar21 = *(long *)(lVar7 + 0x70);
        *(long *)(lVar7 + 0x70) = lVar10;
        if (lVar21 != 0) {
          __ZdlPv();
        }
        uVar20 = 0;
        *(ulong *)(lVar7 + 0x78) = uVar14;
        do {
          *(undefined8 *)(*(long *)(lVar7 + 0x70) + uVar20 * 8) = 0;
          uVar20 = uVar20 + 1;
        } while (uVar14 != uVar20);
        plVar11 = *(long **)(lVar7 + 0x80);
        uVar20 = uVar14;
        if (plVar11 != (long *)0x0) {
          uVar17 = plVar11[1];
          uVar15 = uVar14 - 1;
          if ((uVar14 & uVar15) == 0) {
            uVar17 = uVar17 & uVar15;
          }
          else if (uVar14 <= uVar17) {
            uVar19 = 0;
            if (uVar14 != 0) {
              uVar19 = uVar17 / uVar14;
            }
            uVar17 = uVar17 - uVar19 * uVar14;
          }
          *(undefined8 **)(*(long *)(lVar7 + 0x70) + uVar17 * 8) = (undefined8 *)(lVar7 + 0x80);
          plVar18 = (long *)*plVar11;
          while (plVar18 != (long *)0x0) {
            uVar19 = plVar18[1];
            if ((uVar14 & uVar15) == 0) {
              uVar19 = uVar19 & uVar15;
            }
            else if (uVar14 <= uVar19) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar19 / uVar14;
              }
              uVar19 = uVar19 - uVar5 * uVar14;
            }
            plVar12 = plVar18;
            if (uVar19 != uVar17) {
              lVar10 = *(long *)(lVar7 + 0x70);
              if (*(long *)(lVar10 + uVar19 * 8) == 0) {
                *(long **)(lVar10 + uVar19 * 8) = plVar11;
                uVar17 = uVar19;
              }
              else {
                *plVar11 = *plVar18;
                *plVar18 = **(undefined8 **)(lVar10 + uVar19 * 8);
                **(long **)(lVar10 + uVar19 * 8) = (long)plVar18;
                plVar12 = plVar11;
              }
            }
            plVar11 = plVar12;
            plVar18 = (long *)*plVar12;
          }
        }
      }
      else if (uVar14 < uVar20) {
        uVar17 = (ulong)((float)*(ulong *)(lVar7 + 0x88) / *(float *)(lVar7 + 0x90));
        if ((uVar20 < 3) || ((uVar20 & uVar20 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar17) {
          uVar17 = 1L << (-LZCOUNT(uVar17 - 1) & 0x3fU);
        }
        if (uVar14 <= uVar17) {
          uVar14 = uVar17;
        }
        if (uVar14 < uVar20) {
          if (uVar14 != 0) goto LAB_10a536990;
          lVar10 = *(long *)(lVar7 + 0x70);
          *(undefined8 *)(lVar7 + 0x70) = 0;
          if (lVar10 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(lVar7 + 0x78) = 0;
          uVar20 = 0;
        }
        else {
          uVar20 = *(ulong *)(lVar7 + 0x78);
        }
      }
      if ((uVar20 & uVar20 - 1) == 0) {
        unaff_x22 = (ulong)((int)uVar20 - 1) & 1;
      }
      else if (uVar20 < 2) {
        uVar14 = 0;
        if (uVar20 != 0) {
          uVar14 = 1 / uVar20;
        }
        unaff_x22 = 1 - uVar14 * uVar20;
      }
      else {
        unaff_x22 = 1;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x70);
    plVar11 = *(long **)(lVar10 + unaff_x22 * 8);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)(lVar7 + 0x80);
      *plVar16 = *plVar11;
      *plVar11 = (long)plVar16;
      *(long **)(lVar10 + unaff_x22 * 8) = plVar11;
      if (*plVar16 != 0) {
        uVar14 = *(ulong *)(*plVar16 + 8);
        if ((uVar20 & uVar20 - 1) == 0) {
          uVar14 = uVar14 & uVar20 - 1;
        }
        else if (uVar20 <= uVar14) {
          uVar17 = 0;
          if (uVar20 != 0) {
            uVar17 = uVar14 / uVar20;
          }
          uVar14 = uVar14 - uVar17 * uVar20;
        }
        plVar11 = (long *)(*(long *)(lVar7 + 0x70) + uVar14 * 8);
        goto LAB_10a536b70;
      }
    }
    else {
      *plVar16 = *plVar11;
LAB_10a536b70:
      *plVar11 = (long)plVar16;
    }
    *(long *)(lVar7 + 0x88) = *(long *)(lVar7 + 0x88) + 1;
LAB_10a536b80:
    __ZNSt3__15mutex6unlockEv(lVar7 + 0x98);
    ppuVar8 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    uStack_118 = 0;
    if (*ppuVar8 != (undefined *)0x0) {
      plVar16 = *(long **)(*ppuVar8 + 0x10);
      if (plVar16 == (long *)0x0) {
        uStack_118 = 0;
      }
      else {
        puVar9 = (undefined8 *)0x20;
        __Znwm();
        auStack_b0[0] = 0x8000000000000020;
        plStack_b8 = (long *)0x1b;
        *(undefined8 *)((long)puVar9 + 0x13) = 0x54494d494c5f544e;
        *(undefined8 *)((long)puVar9 + 0xb) = 0x554f435f444e4549;
        puVar9[1] = 0x5f444e454952465f;
        *puVar9 = 0x45524f43534e454c;
        *(undefined1 *)((long)puVar9 + 0x1b) = 0;
        puStack_c0 = puVar9;
        (**(code **)(*plVar16 + 0x40))(plVar16,&puStack_c0,0);
        uStack_118 = (long)plVar16 << 0x20;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x20);
    uStack_120 = *(undefined8 *)(lVar7 + 0x20);
    uStack_128 = *(undefined8 *)(lVar7 + 0x18);
    if (lVar10 != 0) {
      plVar16 = (long *)(lVar10 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_140 = FUN_10a5414ec;
    ppuStack_138 = &PTR_FUN_110bf0118;
    uStack_118 = uStack_118 | 1;
    lStack_130 = lVar7;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a3bf120(&puStack_190);
    lVar21 = *(long *)(*(long *)(lVar7 + 8) + 0x100);
    FUN_10a00ce20(&uStack_1b8,*(undefined8 *)(lVar7 + 0x28),&pcStack_140);
    plVar11 = (long *)0x138;
    __Znwm();
    puStack_c0 = puStack_190;
    plVar18 = plVar11 + 1;
    *plVar18 = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&PTR_FUN_110b9f3b0;
    plVar16 = plVar11 + 3;
    puStack_190 = (undefined8 *)0x0;
    plStack_b8 = (long *)uStack_188;
    (**(code **)(alStack_180[0] + 0x10))(auStack_b0,alStack_180);
    uStack_78 = uStack_148;
    uVar20 = *(ulong *)(lVar21 + 0x210);
    lVar10 = *(long *)(lVar21 + 0x208);
    if (-1 < (char)*(byte *)(lVar21 + 0x21f)) {
      uVar20 = (ulong)*(byte *)(lVar21 + 0x21f);
      lVar10 = lVar21 + 0x208;
    }
    uStack_100 = 0x10a05c39c;
    ppuStack_f8 = &PTR_FUN_110b9f370;
    uStack_f0 = uStack_1b8;
    uStack_e0 = uStack_1a8;
    uStack_e8 = uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    FUN_10a23708c(plVar16,&UNK_10e4c94cb,0x24,&UNK_10f647b45,3,&puStack_c0,0,in_x7,lVar10,uVar20,
                  &uStack_100);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    FUN_10a042634(&puStack_c0);
    plStack_1a0 = plVar16;
    plStack_198 = plVar11;
    func_0x00010a05c07c(&uStack_1b8);
    FUN_10a042634(&puStack_190);
    plVar12 = *(long **)(*(long *)(*(long *)(lVar7 + 8) + 0x100) + 0x1c8);
    (**(code **)(*plVar12 + 0x60))();
    puStack_c0 = (undefined8 *)0x0;
    plStack_b8 = (long *)0x0;
    plVar13 = (long *)plVar12[1];
    if (((plVar13 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar13, plVar13 == (long *)0x0)) ||
       (puStack_c0 = (undefined8 *)*plVar12, puStack_c0 == (undefined8 *)0x0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f65e989,&UNK_10f65e9c8,0x72,&UNK_10f65ea28);
      }
    }
    else {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar3) {
          *plVar18 = *plVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_1c8 = plVar16;
      plStack_1c0 = plVar11;
      (**(code **)*puStack_c0)(puStack_c0,&plStack_1c8);
      plVar16 = plStack_1c0;
      if (plStack_1c0 != (long *)0x0) {
        plVar11 = plStack_1c0 + 1;
        do {
          lVar10 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
    }
    plVar16 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar11 = plStack_b8 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar11 = plStack_198 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    (*(code *)*ppuStack_138)(&ppuStack_138);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar7 + 0x98);
    return;
  }
  ___stack_chk_fail();
LAB_10a536fd8:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a53700c);
  (*pcVar6)();
}



/* Entry: 10a29ca40; end: 10a29ca53;  */

bool FUN_10a29ca40(long param_1)

{
  return *(long *)(*(long *)(param_1 + 0x70) + 0x60) != 0;
}



/* Entry: 10a29ca54; end: 10a29ca9b;  */

void FUN_10a29ca54(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *extraout_x8;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_2 + 0x70) + 0x60);
  if (lVar5 != 0) {
    lVar4 = *(long *)(*(long *)(param_2 + 0x70) + 0x68);
    *param_1 = lVar5;
    param_1[1] = lVar4;
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
    return;
  }
  FUN_10a00946c(&UNK_10f65eabf);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  return;
}



/* Entry: 10a29ca9c; end: 10a29cabb;  */

void FUN_10a29ca9c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10a29cabc; end: 10a29cb17;  */

void FUN_10a29cabc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a26f238();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a29cb18; end: 10a29cb8f;  */

void FUN_10a29cb18(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -7;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -8;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a29cb90; end: 10a29ce03;  */

void FUN_10a29cb90(undefined ******param_1,undefined ******param_2)

{
  undefined *****pppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ******ppppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined *****pppppuVar9;
  undefined ******unaff_x21;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  int aiStack_110 [2];
  undefined8 *puStack_108;
  undefined8 **ppuStack_100;
  undefined ****ppppuStack_f8;
  undefined1 *puStack_f0;
  int **ppiStack_e8;
  int *piStack_e0;
  undefined8 uStack_d8;
  undefined ****ppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined ****ppppuStack_90;
  undefined *****pppppuStack_88;
  undefined ****ppppuStack_80;
  undefined *****pppppuStack_78;
  undefined ****ppppuStack_70;
  undefined ****ppppuStack_68;
  undefined ****ppppuStack_60;
  undefined *****pppppuStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1 == (undefined ******)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    ppppppuVar5 = param_1;
    ppppppuVar8 = param_2;
    if ((param_1 == (undefined ******)0x0) || (*(char *)(param_1 + 8) != '\x01'))
    goto LAB_10a29cd7c;
    pppppuVar9 = *param_1;
    pppppuStack_78 = param_2[1];
    ppppuStack_80 = (undefined ****)*param_2;
    if (param_2[1] != (undefined *****)0x0) {
      pppppuVar1 = param_2[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar5 = (undefined ******)&ppppuStack_80;
    ppppppuVar8 = param_1;
    (*(code *)pppppuVar9)(ppppppuVar5,param_1);
    if ((undefined ******)pppppuStack_78 == (undefined ******)0x0) goto LAB_10a29cd7c;
    ppppppuVar7 = (undefined ******)(pppppuStack_78 + 1);
    do {
      pppppuVar9 = *ppppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar3) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar6 = (undefined ******)pppppuStack_78;
    } while (cVar2 != '\0');
  }
  else {
    unaff_x21 = param_1;
    ppppppuVar7 = param_2;
    FUN_10a688b40();
    if (unaff_x21 != (undefined ******)0x0) {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      ppppppuVar5 = (undefined ******)*param_1;
      FUN_10a29ce04(ppppppuVar5,param_2);
      iVar4 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar4;
      ppppppuVar8 = param_2;
      if (iVar4 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
      goto LAB_10a29cd7c;
    }
    ppppppuVar5 = (undefined ******)0x0;
    ppppppuVar8 = (undefined ******)0x0;
    if (ppppppuVar7 == (undefined ******)0x0) goto LAB_10a29cd7c;
    ppppuStack_68 = (undefined ****)param_1[1];
    ppppuStack_70 = (undefined ****)*param_1;
    if (param_1[1] != (undefined *****)0x0) {
      pppppuVar9 = param_1[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar9,0x10);
        if (bVar3) {
          *pppppuVar9 = (undefined ****)((long)*pppppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_90 = (undefined ****)*param_2;
    ppppppuVar6 = (undefined ******)param_2[1];
    if (ppppppuVar6 != (undefined ******)0x0) {
      ppppppuVar5 = ppppppuVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
        if (bVar3) {
          *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_80 = (undefined ****)FUN_10a29cf94;
    pppppuStack_78 = (undefined *****)&PTR_FUN_110bb9170;
    ppppuStack_a0 = (undefined ****)0x0;
    pppppuStack_98 = (undefined *****)0x0;
    if (ppppppuVar6 != (undefined ******)0x0) {
      ppppppuVar5 = ppppppuVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
        if (bVar3) {
          *ppppppuVar5 = (undefined *****)((long)*ppppppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x21 = (undefined ******)&ppppuStack_80;
    ppppppuVar8 = (undefined ******)&ppppuStack_80;
    pppppuStack_88 = (undefined *****)ppppppuVar6;
    ppppuStack_60 = ppppuStack_90;
    pppppuStack_58 = (undefined *****)ppppppuVar6;
    FUN_10a4634ec(ppppppuVar7,ppppppuVar8);
    ppppppuVar5 = &pppppuStack_78;
    (*(code *)*pppppuStack_78)();
    if (ppppppuVar6 != (undefined ******)0x0) {
      ppppppuVar7 = ppppppuVar6 + 1;
      do {
        pppppuVar9 = *ppppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar3) {
          *ppppppuVar7 = (undefined *****)((long)pppppuVar9 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar9 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar6)[2])(ppppppuVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar5 = ppppppuVar6;
      }
    }
    param_1 = (undefined ******)&ppppuStack_a0;
    if ((undefined ******)pppppuStack_98 == (undefined ******)0x0) goto LAB_10a29cd7c;
    ppppppuVar7 = (undefined ******)(pppppuStack_98 + 1);
    do {
      pppppuVar9 = *ppppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar3) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar9 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar6 = (undefined ******)pppppuStack_98;
      param_1 = (undefined ******)&ppppuStack_a0;
    } while (cVar2 != '\0');
  }
  if (pppppuVar9 == (undefined *****)0x0) {
    (*(code *)(*ppppppuVar6)[2])(ppppppuVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar5 = ppppppuVar6;
  }
LAB_10a29cd7c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*pppppuStack_78)(unaff_x21 + 1);
    func_0x00010a26a190(param_1 + 2);
    func_0x00010a004dac(&ppppuStack_a0);
    __Unwind_Resume();
    func_0x000109884c0c(&ppuStack_100,ppppppuVar5 + 1,*ppppppuVar5);
    func_0x000109884820(&puStack_128,&ppuStack_100,*ppppppuVar5);
    if (ppuStack_100 != (undefined8 **)0x0) {
      (*(code *)**ppuStack_100)();
    }
    (*(code *)(**ppppppuVar5)[6])(&puStack_130);
    pppppuVar9 = *ppppppuVar5;
    FUN_10a278364(aiStack_110,pppppuVar9,ppppppuVar8);
    uStack_d8 = 1;
    piStack_e0 = aiStack_110;
    (*(code *)(*pppppuVar9)[0xb])(pppppuVar9);
    ppuStack_100 = &puStack_128;
    ppiStack_e8 = &piStack_e0;
    ppppuStack_f8 = (undefined ****)pppppuVar9;
    puStack_f0 = (undefined1 *)&puStack_130;
    func_0x0001098960c0(aiStack_120);
    if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
      (**(code **)*puStack_118)();
    }
    if ((3 < aiStack_110[0]) && (puStack_108 != (undefined8 *)0x0)) {
      (**(code **)*puStack_108)();
    }
    if (puStack_130 != (undefined8 *)0x0) {
      (**(code **)*puStack_130)();
    }
    if (puStack_128 != (undefined8 *)0x0) {
      (**(code **)*puStack_128)();
    }
    return;
  }
  return;
}



/* Entry: 10a29ce04; end: 10a29cf93;  */

void FUN_10a29ce04(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  FUN_10a278364(aiStack_70,plVar1,param_2);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a29cf94; end: 10a29cfa3;  */

void FUN_10a29cf94(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  FUN_10a278364(aiStack_70,plVar2,param_1 + 0x20);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a29cfa4; end: 10a29cfcb;  */

long FUN_10a29cfa4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a26a190(param_1 + 0x18);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 8;
}



/* Entry: 10a29cfcc; end: 10a29d00b;  */

void FUN_10a29cfcc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bb9170;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  return;
}



/* Entry: 10a29d00c; end: 10a29d10b;  */

undefined8 * FUN_10a29d00c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb9240;
  FUN_10a2965a8(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb9290;
  FUN_10a29d474(param_1 + 0xb);
  FUN_10a29d528(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a29d10c; end: 10a29d3bb;  */

void FUN_10a29d10c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 *puStack_70;
  long *plStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  undefined8 *puStack_40;
  long *plStack_38;
  
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x18))();
  if ((int)plVar4 != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x28))();
    if ((int)plVar4 != 0) {
      (**(code **)(*param_1 + 0x30))(&puStack_40,param_1);
      puVar7 = (undefined8 *)param_1[8];
      lStack_48 = param_1[10];
      puVar8 = (undefined8 *)param_1[9];
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[8] = 0;
      puStack_58 = puVar7;
      puStack_50 = puVar8;
      for (; puVar7 != puVar8; puVar7 = puVar7 + 8) {
        pcVar5 = (code *)*puVar7;
        plStack_68 = plStack_38;
        puStack_70 = puStack_40;
        if (plStack_38 != (long *)0x0) {
          plVar4 = plStack_38 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        (*pcVar5)(&puStack_70,puVar7);
        plVar4 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 1;
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
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
      puVar7 = (undefined8 *)param_1[0xb];
      lStack_60 = param_1[0xd];
      puVar8 = (undefined8 *)param_1[0xc];
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xb] = 0;
      puStack_70 = puVar7;
      plStack_68 = puVar8;
      for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
        FUN_10a29d5a0(*puVar7,&puStack_40);
      }
      if ((param_1[1] != param_1[2]) || (param_1[4] != param_1[5])) {
        (**(code **)(*param_1 + 0x38))(auStack_88,param_1,&puStack_40);
        lVar6 = param_1[1];
        lStack_90 = param_1[3];
        lVar9 = param_1[2];
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[1] = 0;
        lStack_a0 = lVar6;
        lStack_98 = lVar9;
        for (; lVar6 != lVar9; lVar6 = lVar6 + 0x40) {
          FUN_10a2974b8(lVar6,auStack_88);
        }
        puVar7 = (undefined8 *)param_1[4];
        lStack_a8 = param_1[6];
        puVar8 = (undefined8 *)param_1[5];
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[4] = 0;
        puStack_b8 = puVar7;
        puStack_b0 = puVar8;
        for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
          FUN_10a1bcbe0(*puVar7,auStack_88);
        }
        FUN_10a2973e4(&puStack_b8);
        FUN_10a297440(&lStack_a0);
        if (cStack_71 < '\0') {
          __ZdlPv(auStack_88[0]);
        }
      }
      FUN_10a29d474(&puStack_70);
      FUN_10a29d528(&puStack_58);
      if (plStack_38 != (long *)0x0) {
        plVar4 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
    }
  }
  return;
}



/* Entry: 10a29d3bc; end: 10a29d3f7;  */

bool FUN_10a29d3bc(long param_1)

{
  if (((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
      (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28))) &&
     (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))) {
    return *(long *)(param_1 + 0x58) != *(long *)(param_1 + 0x60);
  }
  return true;
}



/* Entry: 10a29d3f8; end: 10a29d437;  */

/* WARNING: Removing unreachable block (ram,0x00010a536c80) */
/* WARNING: Removing unreachable block (ram,0x00010a536c88) */
/* WARNING: Removing unreachable block (ram,0x00010a536cd4) */
/* WARNING: Removing unreachable block (ram,0x00010a536c90) */
/* WARNING: Removing unreachable block (ram,0x00010a536fe0) */
/* WARNING: Removing unreachable block (ram,0x00010a536c98) */
/* WARNING: Removing unreachable block (ram,0x00010a536ce4) */
/* WARNING: Removing unreachable block (ram,0x00010a536c04) */
/* WARNING: Removing unreachable block (ram,0x00010a536cc4) */

void FUN_10a29d3f8(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 in_x7;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong unaff_x22;
  ulong uVar20;
  long lVar21;
  float fVar22;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  long alStack_180 [7];
  undefined8 uStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 auStack_b0 [7];
  undefined8 uStack_78;
  long lStack_70;
  
  plVar16 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (((ulong)plVar16 & 1) != 0) {
    return;
  }
  lVar7 = param_1[0xe];
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(lVar7 + 0x98);
  lVar10 = lVar7 + 0x70;
  FUN_10a5412e8(lVar10,1);
  if (lVar10 == 0) {
    uVar20 = *(ulong *)(lVar7 + 0x78);
    if (uVar20 != 0) {
      uVar14 = uVar20 - 1;
      if ((uVar20 & uVar14) == 0) {
        unaff_x22 = (ulong)((uint)uVar20 - 1) & 1;
      }
      else {
        unaff_x22 = 1;
        if (uVar20 < 2) {
          uVar1 = (uint)uVar20 & 0xff;
          uVar4 = 0;
          if ((uVar20 & 0xff) != 0) {
            uVar4 = 1 / uVar1;
          }
          unaff_x22 = (ulong)(1 - uVar4 * uVar1);
        }
      }
      plVar16 = *(long **)(*(long *)(lVar7 + 0x70) + unaff_x22 * 8);
      if (plVar16 != (long *)0x0) {
        do {
          while( true ) {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_10a5368f8;
            uVar17 = plVar16[1];
            if (uVar17 != 1) break;
            if (*(char *)(plVar16 + 2) == '\x01') goto LAB_10a536b80;
          }
          if ((uVar20 & uVar14) == 0) {
            uVar17 = uVar17 & uVar14;
          }
          else if (uVar20 <= uVar17) {
            uVar15 = 0;
            if (uVar20 != 0) {
              uVar15 = uVar17 / uVar20;
            }
            uVar17 = uVar17 - uVar15 * uVar20;
          }
        } while (uVar17 == unaff_x22);
      }
    }
LAB_10a5368f8:
    plVar16 = (long *)0x18;
    __Znwm();
    *plVar16 = 0;
    plVar16[1] = 1;
    *(undefined1 *)(plVar16 + 2) = 1;
    fVar22 = (float)(*(long *)(lVar7 + 0x88) + 1);
    if ((uVar20 == 0) || (*(float *)(lVar7 + 0x90) * (float)uVar20 < fVar22)) {
      uVar14 = 1;
      if (2 < uVar20) {
        uVar14 = (ulong)((uVar20 & uVar20 - 1) != 0);
      }
      uVar14 = uVar14 | uVar20 << 1;
      uVar17 = (ulong)(fVar22 / *(float *)(lVar7 + 0x90));
      if (uVar14 <= uVar17) {
        uVar14 = uVar17;
      }
      if (uVar14 - 1 == 0) {
        uVar14 = 2;
      }
      else if ((uVar14 & uVar14 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar20 = *(ulong *)(lVar7 + 0x78);
      }
      if (uVar20 < uVar14) {
LAB_10a536990:
        if (uVar14 >> 0x3d != 0) goto LAB_10a536fd8;
        lVar10 = uVar14 << 3;
        __Znwm();
        lVar21 = *(long *)(lVar7 + 0x70);
        *(long *)(lVar7 + 0x70) = lVar10;
        if (lVar21 != 0) {
          __ZdlPv();
        }
        uVar20 = 0;
        *(ulong *)(lVar7 + 0x78) = uVar14;
        do {
          *(undefined8 *)(*(long *)(lVar7 + 0x70) + uVar20 * 8) = 0;
          uVar20 = uVar20 + 1;
        } while (uVar14 != uVar20);
        plVar11 = *(long **)(lVar7 + 0x80);
        uVar20 = uVar14;
        if (plVar11 != (long *)0x0) {
          uVar17 = plVar11[1];
          uVar15 = uVar14 - 1;
          if ((uVar14 & uVar15) == 0) {
            uVar17 = uVar17 & uVar15;
          }
          else if (uVar14 <= uVar17) {
            uVar19 = 0;
            if (uVar14 != 0) {
              uVar19 = uVar17 / uVar14;
            }
            uVar17 = uVar17 - uVar19 * uVar14;
          }
          *(undefined8 **)(*(long *)(lVar7 + 0x70) + uVar17 * 8) = (undefined8 *)(lVar7 + 0x80);
          plVar18 = (long *)*plVar11;
          while (plVar18 != (long *)0x0) {
            uVar19 = plVar18[1];
            if ((uVar14 & uVar15) == 0) {
              uVar19 = uVar19 & uVar15;
            }
            else if (uVar14 <= uVar19) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar19 / uVar14;
              }
              uVar19 = uVar19 - uVar5 * uVar14;
            }
            plVar12 = plVar18;
            if (uVar19 != uVar17) {
              lVar10 = *(long *)(lVar7 + 0x70);
              if (*(long *)(lVar10 + uVar19 * 8) == 0) {
                *(long **)(lVar10 + uVar19 * 8) = plVar11;
                uVar17 = uVar19;
              }
              else {
                *plVar11 = *plVar18;
                *plVar18 = **(undefined8 **)(lVar10 + uVar19 * 8);
                **(long **)(lVar10 + uVar19 * 8) = (long)plVar18;
                plVar12 = plVar11;
              }
            }
            plVar11 = plVar12;
            plVar18 = (long *)*plVar12;
          }
        }
      }
      else if (uVar14 < uVar20) {
        uVar17 = (ulong)((float)*(ulong *)(lVar7 + 0x88) / *(float *)(lVar7 + 0x90));
        if ((uVar20 < 3) || ((uVar20 & uVar20 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar17) {
          uVar17 = 1L << (-LZCOUNT(uVar17 - 1) & 0x3fU);
        }
        if (uVar14 <= uVar17) {
          uVar14 = uVar17;
        }
        if (uVar14 < uVar20) {
          if (uVar14 != 0) goto LAB_10a536990;
          lVar10 = *(long *)(lVar7 + 0x70);
          *(undefined8 *)(lVar7 + 0x70) = 0;
          if (lVar10 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(lVar7 + 0x78) = 0;
          uVar20 = 0;
        }
        else {
          uVar20 = *(ulong *)(lVar7 + 0x78);
        }
      }
      if ((uVar20 & uVar20 - 1) == 0) {
        unaff_x22 = (ulong)((int)uVar20 - 1) & 1;
      }
      else if (uVar20 < 2) {
        uVar14 = 0;
        if (uVar20 != 0) {
          uVar14 = 1 / uVar20;
        }
        unaff_x22 = 1 - uVar14 * uVar20;
      }
      else {
        unaff_x22 = 1;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x70);
    plVar11 = *(long **)(lVar10 + unaff_x22 * 8);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)(lVar7 + 0x80);
      *plVar16 = *plVar11;
      *plVar11 = (long)plVar16;
      *(long **)(lVar10 + unaff_x22 * 8) = plVar11;
      if (*plVar16 != 0) {
        uVar14 = *(ulong *)(*plVar16 + 8);
        if ((uVar20 & uVar20 - 1) == 0) {
          uVar14 = uVar14 & uVar20 - 1;
        }
        else if (uVar20 <= uVar14) {
          uVar17 = 0;
          if (uVar20 != 0) {
            uVar17 = uVar14 / uVar20;
          }
          uVar14 = uVar14 - uVar17 * uVar20;
        }
        plVar11 = (long *)(*(long *)(lVar7 + 0x70) + uVar14 * 8);
        goto LAB_10a536b70;
      }
    }
    else {
      *plVar16 = *plVar11;
LAB_10a536b70:
      *plVar11 = (long)plVar16;
    }
    *(long *)(lVar7 + 0x88) = *(long *)(lVar7 + 0x88) + 1;
LAB_10a536b80:
    __ZNSt3__15mutex6unlockEv(lVar7 + 0x98);
    ppuVar8 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    uStack_118 = 0;
    if (*ppuVar8 != (undefined *)0x0) {
      plVar16 = *(long **)(*ppuVar8 + 0x10);
      if (plVar16 == (long *)0x0) {
        uStack_118 = 0;
      }
      else {
        puVar9 = (undefined8 *)0x20;
        __Znwm();
        auStack_b0[0] = 0x8000000000000020;
        plStack_b8 = (long *)0x1b;
        *(undefined8 *)((long)puVar9 + 0x13) = 0x54494d494c5f544e;
        *(undefined8 *)((long)puVar9 + 0xb) = 0x554f435f444e4549;
        puVar9[1] = 0x5f444e454952465f;
        *puVar9 = 0x45524f43534e454c;
        *(undefined1 *)((long)puVar9 + 0x1b) = 0;
        puStack_c0 = puVar9;
        (**(code **)(*plVar16 + 0x40))(plVar16,&puStack_c0,0);
        uStack_118 = (long)plVar16 << 0x20;
      }
    }
    lVar10 = *(long *)(lVar7 + 0x20);
    uStack_120 = *(undefined8 *)(lVar7 + 0x20);
    uStack_128 = *(undefined8 *)(lVar7 + 0x18);
    if (lVar10 != 0) {
      plVar16 = (long *)(lVar10 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_140 = FUN_10a5414ec;
    ppuStack_138 = &PTR_FUN_110bf0118;
    uStack_118 = uStack_118 | 1;
    lStack_130 = lVar7;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a3bf120(&puStack_190);
    lVar21 = *(long *)(*(long *)(lVar7 + 8) + 0x100);
    FUN_10a00ce20(&uStack_1b8,*(undefined8 *)(lVar7 + 0x28),&pcStack_140);
    plVar11 = (long *)0x138;
    __Znwm();
    puStack_c0 = puStack_190;
    plVar18 = plVar11 + 1;
    *plVar18 = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&PTR_FUN_110b9f3b0;
    plVar16 = plVar11 + 3;
    puStack_190 = (undefined8 *)0x0;
    plStack_b8 = (long *)uStack_188;
    (**(code **)(alStack_180[0] + 0x10))(auStack_b0,alStack_180);
    uStack_78 = uStack_148;
    uVar20 = *(ulong *)(lVar21 + 0x210);
    lVar10 = *(long *)(lVar21 + 0x208);
    if (-1 < (char)*(byte *)(lVar21 + 0x21f)) {
      uVar20 = (ulong)*(byte *)(lVar21 + 0x21f);
      lVar10 = lVar21 + 0x208;
    }
    uStack_100 = 0x10a05c39c;
    ppuStack_f8 = &PTR_FUN_110b9f370;
    uStack_f0 = uStack_1b8;
    uStack_e0 = uStack_1a8;
    uStack_e8 = uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    FUN_10a23708c(plVar16,&UNK_10e4c94cb,0x24,&UNK_10f647b45,3,&puStack_c0,0,in_x7,lVar10,uVar20,
                  &uStack_100);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    FUN_10a042634(&puStack_c0);
    plStack_1a0 = plVar16;
    plStack_198 = plVar11;
    func_0x00010a05c07c(&uStack_1b8);
    FUN_10a042634(&puStack_190);
    plVar12 = *(long **)(*(long *)(*(long *)(lVar7 + 8) + 0x100) + 0x1c8);
    (**(code **)(*plVar12 + 0x60))();
    puStack_c0 = (undefined8 *)0x0;
    plStack_b8 = (long *)0x0;
    plVar13 = (long *)plVar12[1];
    if (((plVar13 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar13, plVar13 == (long *)0x0)) ||
       (puStack_c0 = (undefined8 *)*plVar12, puStack_c0 == (undefined8 *)0x0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f65e989,&UNK_10f65e9c8,0x72,&UNK_10f65ea28);
      }
    }
    else {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar3) {
          *plVar18 = *plVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_1c8 = plVar16;
      plStack_1c0 = plVar11;
      (**(code **)*puStack_c0)(puStack_c0,&plStack_1c8);
      plVar16 = plStack_1c0;
      if (plStack_1c0 != (long *)0x0) {
        plVar11 = plStack_1c0 + 1;
        do {
          lVar10 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
    }
    plVar16 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar11 = plStack_b8 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar11 = plStack_198 + 1;
      do {
        lVar10 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    (*(code *)*ppuStack_138)(&ppuStack_138);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar7 + 0x98);
    return;
  }
  ___stack_chk_fail();
LAB_10a536fd8:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a53700c);
  (*pcVar6)();
}



/* Entry: 10a29d438; end: 10a29d473;  */

bool FUN_10a29d438(long param_1)

{
  return *(long *)(*(long *)(param_1 + 0x70) + 0x60) != 0;
}



/* Entry: 10a29d474; end: 10a29d527;  */

void FUN_10a29d474(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a29d4d0();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a29d528; end: 10a29d59f;  */

void FUN_10a29d528(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -7;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -8;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a29d5a0; end: 10a29d5c7;  */

void FUN_10a29d5a0(code **param_1,code **param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code **ppcVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  code *pcVar11;
  long lVar12;
  undefined **ppuVar13;
  code *pcVar14;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  code *pcStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  if ((param_1 == (code **)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    if ((param_1 != (code **)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
      pcVar11 = *param_1;
      pcVar14 = param_2[1];
      if (param_2[1] != (code *)0x0) {
        pcVar1 = param_2[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      (*pcVar11)(&stack0xffffffffffffffd0,param_1);
      if (pcVar14 != (code *)0x0) {
        pcVar11 = pcVar14 + 8;
        do {
          lVar12 = *(long *)pcVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
          if (bVar4) {
            *(long *)pcVar11 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*(long *)pcVar14 + 0x10))(pcVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar14);
        }
      }
      return;
    }
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar6 = param_1;
  ppcVar9 = param_2;
  FUN_10a688b40();
  if (ppcVar6 == (code **)0x0) {
    ppcVar10 = (code **)0x0;
    pppuVar7 = (undefined ***)0x0;
    if (ppcVar9 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar11 = param_1[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
          if (bVar4) {
            *(long *)pcVar11 = *(long *)pcVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_88 = *param_2;
      pppuVar8 = (undefined ***)param_2[1];
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_78 = FUN_10a29da28;
      ppuStack_70 = &PTR_FUN_110bb92d0;
      pcStack_98 = (code *)0x0;
      pppuStack_90 = (undefined ***)0x0;
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppcVar6 = &pcStack_98;
      param_1 = &pcStack_78;
      ppcVar10 = &pcStack_78;
      pppuStack_80 = pppuVar8;
      pcStack_58 = pcStack_88;
      pppuStack_50 = pppuVar8;
      FUN_10a4634ec(ppcVar9,ppcVar10);
      pppuVar7 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar2 = pppuVar8 + 1;
        do {
          ppuVar13 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuVar8)[2])(pppuVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
      pppuVar8 = pppuStack_90;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_90 + 1;
        do {
          ppuVar13 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar13 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar13 == (undefined **)0x0) {
          (*(code *)(*pppuStack_90)[2])(pppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
    }
  }
  else {
    *ppcVar6 = (code *)CONCAT44((int)((ulong)*ppcVar6 >> 0x20) + 1,(int)*ppcVar6 + 1);
    pppuVar7 = (undefined ***)*param_1;
    FUN_10a29d85c(pppuVar7,param_2);
    iVar5 = *(int *)((long)ppcVar6 + 4) + -1;
    *(int *)((long)ppcVar6 + 4) = iVar5;
    ppcVar10 = param_2;
    if (iVar5 == 0) {
      *(undefined4 *)ppcVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_1 + 1);
  func_0x00010a29b7f0(ppcVar6 + 2);
  func_0x00010a004dac(&pcStack_98);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a29d85c;
  ppcStack_c0 = ppcVar6;
  pppuStack_b8 = pppuVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,pppuVar8 + 1,*pppuVar8);
  func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar8);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**pppuVar8 + 0x30))(&puStack_d0);
  FUN_10a29d948(*pppuVar8,&puStack_d0,&puStack_c8,ppcVar10);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a29d5c8; end: 10a29d66b;  */

void FUN_10a29d5c8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (*pcVar5)(&uStack_30,param_1);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a29d66c; end: 10a29d85b;  */

void FUN_10a29d66c(code **param_1,code **param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code **ppcVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  undefined **ppuVar11;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  code *pcStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined ***pppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar6 = param_1;
  ppcVar9 = param_2;
  FUN_10a688b40();
  if (ppcVar6 == (code **)0x0) {
    ppcVar10 = (code **)0x0;
    pppuVar7 = (undefined ***)0x0;
    if (ppcVar9 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar1 = param_1[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_88 = *param_2;
      pppuVar8 = (undefined ***)param_2[1];
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_78 = FUN_10a29da28;
      ppuStack_70 = &PTR_FUN_110bb92d0;
      pcStack_98 = (code *)0x0;
      pppuStack_90 = (undefined ***)0x0;
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar7 = pppuVar8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar4) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppcVar6 = &pcStack_98;
      param_1 = &pcStack_78;
      ppcVar10 = &pcStack_78;
      pppuStack_80 = pppuVar8;
      pcStack_58 = pcStack_88;
      pppuStack_50 = pppuVar8;
      FUN_10a4634ec(ppcVar9,ppcVar10);
      pppuVar7 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar2 = pppuVar8 + 1;
        do {
          ppuVar11 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar11 == (undefined **)0x0) {
          (*(code *)(*pppuVar8)[2])(pppuVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
      pppuVar8 = pppuStack_90;
      if (pppuStack_90 != (undefined ***)0x0) {
        pppuVar2 = pppuStack_90 + 1;
        do {
          ppuVar11 = *pppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
          if (bVar4) {
            *pppuVar2 = (undefined **)((long)ppuVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar11 == (undefined **)0x0) {
          (*(code *)(*pppuStack_90)[2])(pppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar7 = pppuVar8;
        }
      }
    }
  }
  else {
    *ppcVar6 = (code *)CONCAT44((int)((ulong)*ppcVar6 >> 0x20) + 1,(int)*ppcVar6 + 1);
    pppuVar7 = (undefined ***)*param_1;
    FUN_10a29d85c(pppuVar7,param_2);
    iVar5 = *(int *)((long)ppcVar6 + 4) + -1;
    *(int *)((long)ppcVar6 + 4) = iVar5;
    ppcVar10 = param_2;
    if (iVar5 == 0) {
      *(undefined4 *)ppcVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_1 + 1);
  func_0x00010a29b7f0(ppcVar6 + 2);
  func_0x00010a004dac(&pcStack_98);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a29d85c;
  ppcStack_c0 = ppcVar6;
  pppuStack_b8 = pppuVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_d0,pppuVar8 + 1,*pppuVar8);
  func_0x000109884820(&puStack_c8,&puStack_d0,*pppuVar8);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  (**(code **)(**pppuVar8 + 0x30))(&puStack_d0);
  FUN_10a29d948(*pppuVar8,&puStack_d0,&puStack_c8,ppcVar10);
  if (puStack_d0 != (undefined8 *)0x0) {
    (**(code **)*puStack_d0)();
  }
  if (puStack_c8 != (undefined8 *)0x0) {
    (**(code **)*puStack_c8)();
  }
  return;
}



/* Entry: 10a29d85c; end: 10a29d947;  */

void FUN_10a29d85c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a29d948(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a29d948; end: 10a29da27;  */

void FUN_10a29d948(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x00010a29bb50(aiStack_70,param_1,param_4);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*param_1 + 0x58))(param_1);
  ppuStack_48 = &piStack_40;
  uStack_60 = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a29da28; end: 10a29da37;  */

void FUN_10a29da28(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&puStack_30,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_28,&puStack_30,*puVar1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_30);
  FUN_10a29d948(*puVar1,&puStack_30,&puStack_28,param_1 + 0x20);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a29da38; end: 10a29da5f;  */

long FUN_10a29da38(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a29b7f0(param_1 + 0x18);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 8;
}



/* Entry: 10a29da60; end: 10a29da9f;  */

void FUN_10a29da60(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110bb92d0;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  return;
}



/* Entry: 10a29daa0; end: 10a29db9f;  */

undefined8 * FUN_10a29daa0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb93a0;
  func_0x00010a2967b8(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb93f0;
  FUN_10a29e130(param_1 + 0xb);
  FUN_10a29e1e4(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a29dba0; end: 10a29e07f;  */

/* WARNING: Type propagation algorithm not settling */

code **** FUN_10a29dba0(code ****param_1,code ****param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  code ****ppppcVar5;
  code ****ppppcVar6;
  code ***pppcVar7;
  code ***pppcVar8;
  code ****ppppcVar9;
  code ***pppcVar10;
  code ****ppppcStack_150;
  code ****ppppcStack_148;
  code ***pppcStack_140;
  code ***pppcStack_138;
  code ***pppcStack_130;
  code ***pppcStack_128;
  code ****ppppcStack_120;
  code ****ppppcStack_118;
  code ***pppcStack_110;
  code ***pppcStack_108;
  long lStack_100;
  code ****ppppcStack_f0;
  code ****ppppcStack_e8;
  code ***pppcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  code ****ppppcStack_c0;
  undefined **ppuStack_b8;
  undefined8 *puStack_b0;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar6 = param_1;
  (*(code *)(*param_1)[3])();
  if ((int)ppppcVar6 != 0) {
    (*(code *)(*param_1)[4])(param_1);
    ppppcVar6 = param_1;
    (*(code *)(*param_1)[5])();
    if ((int)ppppcVar6 != 0) {
      (*(code *)(*param_1)[6])(&pppcStack_108,param_1);
      ppppcVar6 = (code ****)param_1[8];
      pppcStack_110 = param_1[10];
      ppppcVar9 = (code ****)param_1[9];
      param_1[9] = (code ***)0x0;
      param_1[10] = (code ***)0x0;
      param_1[8] = (code ***)0x0;
      ppppcStack_120 = ppppcVar6;
      ppppcStack_118 = ppppcVar9;
      if (ppppcVar6 != ppppcVar9) {
        do {
          pppcVar8 = *ppppcVar6;
          ppppcStack_c0 = (code ****)0x0;
          ppuStack_b8 = (undefined **)0x0;
          puStack_b0 = (undefined8 *)0x0;
          FUN_10a29e25c(&ppppcStack_c0,pppcStack_108,lStack_100,
                        lStack_100 - (long)pppcStack_108 >> 4);
          param_2 = ppppcVar6;
          (*(code *)pppcVar8)(&ppppcStack_c0);
          ppppcStack_f0 = (code ****)&ppppcStack_c0;
          FUN_10a29e3b0(&ppppcStack_f0);
          ppppcVar6 = ppppcVar6 + 8;
        } while (ppppcVar6 != ppppcVar9);
      }
      pppcVar8 = param_1[0xb];
      pppcStack_128 = param_1[0xd];
      pppcVar10 = param_1[0xc];
      param_1[0xc] = (code ***)0x0;
      param_1[0xd] = (code ***)0x0;
      param_1[0xb] = (code ***)0x0;
      pppcStack_138 = pppcVar8;
      pppcStack_130 = pppcVar10;
      if (pppcVar8 != pppcVar10) {
        do {
          ppppcVar6 = (code ****)*pppcVar8;
          if (ppppcVar6 == (code ****)0x0 || *(char *)(ppppcVar6 + 8) != '\x02') {
            ppppcVar5 = param_2;
            if (ppppcVar6 != (code ****)0x0 && *(char *)(ppppcVar6 + 8) == '\x01') {
              pppcVar7 = *ppppcVar6;
              ppppcStack_c0 = (code ****)0x0;
              ppuStack_b8 = (undefined **)0x0;
              puStack_b0 = (undefined8 *)0x0;
              FUN_10a29e25c(&ppppcStack_c0,pppcStack_108,lStack_100,
                            lStack_100 - (long)pppcStack_108 >> 4);
              (*(code *)pppcVar7)(&ppppcStack_c0);
              ppppcStack_f0 = (code ****)&ppppcStack_c0;
              FUN_10a29e3b0(&ppppcStack_f0);
              ppppcVar5 = ppppcVar6;
            }
          }
          else {
            ppppcVar9 = ppppcVar6;
            FUN_10a688b40();
            if (ppppcVar9 == (code ****)0x0) {
              ppppcVar5 = param_2;
              if (param_2 != (code ****)0x0) {
                ppppcStack_e8 = (code ****)ppppcVar6[1];
                ppppcStack_f0 = (code ****)*ppppcVar6;
                if (ppppcVar6[1] != (code ***)0x0) {
                  pppcVar7 = ppppcVar6[1] + 1;
                  do {
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(pppcVar7,0x10);
                    if (bVar2) {
                      *pppcVar7 = (code **)((long)*pppcVar7 + 1);
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                pppcStack_e0 = (code ***)0x0;
                uStack_d8 = 0;
                uStack_d0 = 0;
                FUN_10a29e25c(&pppcStack_e0,pppcStack_108,lStack_100,
                              lStack_100 - (long)pppcStack_108 >> 4);
                ppppcStack_c0 = (code ****)FUN_10a29e754;
                ppuStack_b8 = &PTR_FUN_110bb9430;
                puVar4 = (undefined8 *)0x28;
                __Znwm();
                puVar4[1] = ppppcStack_e8;
                *puVar4 = ppppcStack_f0;
                ppppcStack_f0 = (code ****)0x0;
                ppppcStack_e8 = (code ****)0x0;
                puVar4[3] = 0;
                puVar4[4] = 0;
                puVar4[2] = 0;
                FUN_10a29e25c();
                ppppcVar5 = (code ****)&ppppcStack_c0;
                puStack_b0 = puVar4;
                FUN_10a4634ec(param_2);
                (*(code *)*ppuStack_b8)(&ppuStack_b8);
                ppppcStack_150 = &pppcStack_e0;
                FUN_10a29e3b0(&ppppcStack_150);
                ppppcVar6 = ppppcStack_e8;
                if (ppppcStack_e8 != (code ****)0x0) {
                  ppppcVar9 = ppppcStack_e8 + 1;
                  do {
                    pppcVar7 = *ppppcVar9;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(ppppcVar9,0x10);
                    if (bVar2) {
                      *ppppcVar9 = (code ***)((long)pppcVar7 + -1);
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (pppcVar7 == (code ***)0x0) {
                    (*(code *)(*ppppcStack_e8)[2])(ppppcStack_e8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar6);
                  }
                }
              }
            }
            else {
              *ppppcVar9 = (code ***)
                           CONCAT44((int)((ulong)*ppppcVar9 >> 0x20) + 1,(int)*ppppcVar9 + 1);
              ppppcVar5 = &pppcStack_108;
              FUN_10a29e420(*ppppcVar6);
              iVar3 = *(int *)((long)ppppcVar9 + 4) + -1;
              *(int *)((long)ppppcVar9 + 4) = iVar3;
              if (iVar3 == 0) {
                *(undefined4 *)ppppcVar9 = 0;
              }
            }
          }
          pppcVar8 = pppcVar8 + 2;
          param_2 = ppppcVar5;
        } while (pppcVar8 != pppcVar10);
      }
      if ((param_1[1] != param_1[2]) || (param_1[4] != param_1[5])) {
        (*(code *)(*param_1)[7])(&ppppcStack_c0,param_1,&pppcStack_108);
        ppppcVar6 = (code ****)param_1[1];
        pppcStack_e0 = param_1[3];
        ppppcVar9 = (code ****)param_1[2];
        param_1[2] = (code ***)0x0;
        param_1[3] = (code ***)0x0;
        param_1[1] = (code ***)0x0;
        ppppcStack_f0 = ppppcVar6;
        ppppcStack_e8 = ppppcVar9;
        for (; ppppcVar6 != ppppcVar9; ppppcVar6 = ppppcVar6 + 8) {
          FUN_10a2974b8(ppppcVar6,&ppppcStack_c0);
        }
        ppppcVar6 = (code ****)param_1[4];
        pppcStack_140 = param_1[6];
        ppppcVar9 = (code ****)param_1[5];
        param_1[5] = (code ***)0x0;
        param_1[6] = (code ***)0x0;
        param_1[4] = (code ***)0x0;
        ppppcStack_150 = ppppcVar6;
        ppppcStack_148 = ppppcVar9;
        for (; ppppcVar6 != ppppcVar9; ppppcVar6 = ppppcVar6 + 2) {
          FUN_10a1bcbe0(*ppppcVar6,&ppppcStack_c0);
        }
        FUN_10a2973e4(&ppppcStack_150);
        FUN_10a297440(&ppppcStack_f0);
        if ((long)puStack_b0 < 0) {
          __ZdlPv(ppppcStack_c0);
        }
      }
      FUN_10a29e130(&pppcStack_138);
      FUN_10a29e1e4(&ppppcStack_120);
      ppppcStack_c0 = &pppcStack_108;
      ppppcVar6 = (code ****)&ppppcStack_c0;
      FUN_10a29e3b0();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppppcVar6;
  }
  ___stack_chk_fail();
  FUN_10a29e130(&pppcStack_138);
  FUN_10a29e1e4(&ppppcStack_120);
  ppppcStack_f0 = &pppcStack_108;
  FUN_10a29e3b0(&ppppcStack_f0);
  __Unwind_Resume();
  if (((ppppcVar6[1] == ppppcVar6[2]) && (ppppcVar6[4] == ppppcVar6[5])) &&
     (ppppcVar6[8] == ppppcVar6[9])) {
    return (code ****)(ulong)(ppppcVar6[0xb] != ppppcVar6[0xc]);
  }
  return (code ****)0x1;
}



/* Entry: 10a29e080; end: 10a29e0df;  */

bool FUN_10a29e080(long param_1)

{
  if (((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
      (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28))) &&
     (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x48))) {
    return *(long *)(param_1 + 0x58) != *(long *)(param_1 + 0x60);
  }
  return true;
}



/* Entry: 10a29e0e0; end: 10a29e11f;  */

void FUN_10a29e0e0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)(param_2 + 0x70);
  if (*(char *)(lVar8 + 0xc0) != '\x03') {
    FUN_10a00946c(&UNK_10f65e671);
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar9 = *(undefined8 **)(lVar8 + 0x40);
  puVar2 = *(undefined8 **)(lVar8 + 0x48);
  uVar7 = (long)puVar2 - (long)puVar9 >> 4;
  if (uVar7 != 0) {
    if (uVar7 >> 0x3c != 0) {
      FUN_10a29e310();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a29e2fc);
      (*pcVar5)();
    }
    puVar6 = param_1;
    FUN_10a29e324();
    *param_1 = puVar6;
    param_1[1] = puVar6;
    param_1[2] = puVar6 + uVar7 * 2;
    for (; puVar9 != puVar2; puVar9 = puVar9 + 2) {
      lVar8 = puVar9[1];
      uVar10 = *puVar9;
      puVar6[1] = puVar9[1];
      *puVar6 = uVar10;
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
    param_1[1] = puVar6;
  }
  return;
}



/* Entry: 10a29e120; end: 10a29e12f;  */

void FUN_10a29e120(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10a29e130; end: 10a29e1e3;  */

void FUN_10a29e130(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a29e18c();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a29e1e4; end: 10a29e25b;  */

void FUN_10a29e1e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -7;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -8;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a29e25c; end: 10a29e30f;  */

void FUN_10a29e25c(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_4 != 0) {
    if (param_4 >> 0x3c != 0) {
      FUN_10a29e310();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a29e2fc);
      (*pcVar4)();
    }
    plVar5 = param_1;
    FUN_10a29e324();
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar5;
    param_1[2] = (long)(plVar5 + param_4 * 2);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar6 = param_2[1];
      uVar7 = *param_2;
      plVar5[1] = param_2[1];
      *plVar5 = uVar7;
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
      plVar5 = plVar5 + 2;
    }
    param_1[1] = (long)plVar5;
  }
  return;
}



/* Entry: 10a29e310; end: 10a29e323;  */

undefined1  [16] FUN_10a29e310(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar5 = param_2 << 4;
    __Znwm(lVar5);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
  func_0x000109ffded8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 10a29e324; end: 10a29e3af;  */

undefined1  [16] FUN_10a29e324(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar4 = param_2 << 4;
    __Znwm(lVar4);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar4;
    return auVar6;
  }
  func_0x000109ffded8();
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
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 10a29e3b0; end: 10a29e41f;  */

void FUN_10a29e3b0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a29e358();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a29e420; end: 10a29e67b;  */

void FUN_10a29e420(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined8 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  lVar2 = *param_2;
  lVar4 = param_2[1];
  lVar3 = lVar4 - lVar2 >> 4;
  (**(code **)(*plVar1 + 600))(&ppuStack_60,plVar1,lVar3);
  piStack_40 = (int *)ppuStack_60;
  puStack_68 = ppuStack_60;
  if (lVar4 != lVar2) {
    lVar4 = 0;
    do {
      func_0x00010a29e6b8(&ppuStack_60,plVar1,lVar2);
      (**(code **)(*plVar1 + 0x290))(plVar1,&piStack_40,lVar4,&ppuStack_60);
      if ((3 < (int)ppuStack_60) && (plStack_58 != (undefined8 *)0x0)) {
        (**(code **)*plStack_58)();
      }
      lVar4 = lVar4 + 1;
      lVar2 = lVar2 + 0x10;
      puStack_68 = (undefined8 *)piStack_40;
    } while (lVar3 != lVar4);
  }
  aiStack_70[0] = 7;
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = (undefined8 **)&piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && ((undefined8 **)puStack_68 != (undefined8 **)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a29e67c; end: 10a29e753;  */

void FUN_10a29e67c(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x10;
  FUN_10a29e3b0(&lStack_28);
  func_0x00010a004dac(param_1);
  return;
}



/* Entry: 10a29e754; end: 10a29e75f;  */

void FUN_10a29e754(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined8 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = (undefined8 *)*puVar2;
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar3 = (long *)*puVar1;
  lVar4 = puVar2[2];
  lVar6 = puVar2[3];
  lVar5 = lVar6 - lVar4 >> 4;
  (**(code **)(*plVar3 + 600))(&ppuStack_60,plVar3,lVar5);
  piStack_40 = (int *)ppuStack_60;
  puStack_68 = ppuStack_60;
  if (lVar6 != lVar4) {
    lVar6 = 0;
    do {
      func_0x00010a29e6b8(&ppuStack_60,plVar3,lVar4);
      (**(code **)(*plVar3 + 0x290))(plVar3,&piStack_40,lVar6,&ppuStack_60);
      if ((3 < (int)ppuStack_60) && (plStack_58 != (undefined8 *)0x0)) {
        (**(code **)*plStack_58)();
      }
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x10;
      puStack_68 = (undefined8 *)piStack_40;
    } while (lVar5 != lVar6);
  }
  aiStack_70[0] = 7;
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar3 + 0x58))(plVar3);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = (undefined8 **)&piStack_40;
  plStack_58 = plVar3;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && ((undefined8 **)puStack_68 != (undefined8 **)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a29e760; end: 10a29e7a3;  */

void FUN_10a29e760(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    lStack_28 = lVar1 + 0x10;
    FUN_10a29e3b0(&lStack_28);
    func_0x00010a004dac(lVar1);
    __ZdlPv();
  }
  return;
}



/* Entry: 10a29e7a4; end: 10a29e7cb;  */

void FUN_10a29e7a4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a29e7cc; end: 10a29e7eb;  */

void FUN_10a29e7cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb9458;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a29e7ec; end: 10a29e7fb;  */

void FUN_10a29e7ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a29e7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a29e7fc; end: 10a29e8fb;  */

undefined8 * FUN_10a29e7fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb9538;
  func_0x00010a296658(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb7e50;
  FUN_10a2973e4(param_1 + 0xb);
  FUN_10a297440(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}



/* Entry: 10a29e8fc; end: 10a29e94b;  */

void FUN_10a29e8fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a29e908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x70) + 0x30))();
  return;
}



/* Entry: 10a29e94c; end: 10a29e99b;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a29e94c(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_2 + 0x70);
  func_0x00010a535f90();
  if (-1 < *(char *)((long)plVar2 + 0x17)) {
    lVar4 = plVar2[1];
    lVar3 = *plVar2;
    param_1[2] = plVar2[2];
    param_1[1] = lVar4;
    *param_1 = lVar3;
    return;
  }
  lVar3 = *plVar2;
  uVar1 = plVar2[1];
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar3 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar3 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar3);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar3,uVar1 + 1);
  return;
}



/* Entry: 10a29e99c; end: 10a29e9c7;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a29e99c(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    lVar2 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = lVar2;
    param_1[2] = param_3[2];
    return;
  }
  lVar2 = *param_3;
  uVar1 = param_3[1];
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10a29e9c8; end: 10a29eb07;  */

undefined8 * FUN_10a29e9c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb9588;
  func_0x00010a296658(param_1 + 0x12);
  FUN_10a29f714(param_1 + 0x10);
  *param_1 = &PTR_DAT_110bb9608;
  func_0x00010a296600(param_1 + 0xe);
  *param_1 = &PTR_DAT_110bb9658;
  func_0x00010a29f76c(param_1 + 0xb);
  FUN_10a29f820(param_1 + 8);
  *param_1 = &PTR_DAT_110bb7ea0;
  FUN_10a2973e4(param_1 + 4);
  FUN_10a297440(param_1 + 1);
  return param_1;
}


