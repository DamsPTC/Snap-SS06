/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8b99d0; end: 10b8b99d3;  */

undefined8 * FUN_10b8b99d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d716d8;
  func_0x00010b8babc4(param_1 + 7);
  func_0x00010b8babc4(param_1 + 6);
  func_0x00010b8ba968(param_1 + 1);
  return param_1;
}



/* Entry: 10b8b99d4; end: 10b8b99e7;  */

void FUN_10b8b99d4(void)

{
  FUN_10b8b998c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8b99e8; end: 10b8b9c03;  */

/* WARNING: Possible PIC construction at 0x00010b8b9b64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8b9b68) */

undefined8 * FUN_10b8b99e8(long param_1,long *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 **unaff_x21;
  long lVar6;
  uint uVar7;
  undefined8 unaff_x22;
  long lVar8;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 auStack_b0 [5];
  undefined8 auStack_88 [5];
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar2 = *(byte *)(param_2 + 1);
  bVar3 = bVar2 == 1;
  if (bVar2 < 2) {
    func_0x00010b8bb4f4();
    if (bVar3) goto SUB_10b8b9b98;
  }
  else {
    uVar4 = bVar2 == 9;
    if ((bool)uVar4) {
      puStack_60 = auStack_48;
      uStack_50 = 2;
      uStack_58 = 0;
      unaff_x21 = (undefined1 **)(*param_2 + 0x18);
      for (lVar8 = *(long *)(*param_2 + 0x10) << 4; lVar8 != 0; lVar8 = lVar8 + -0x10) {
        FUN_10b9a94ec(&uStack_c0,unaff_x21);
        FUN_10b8b9c04(&lStack_b8,&uStack_c0);
        func_0x000104bddf04(uStack_c0);
        if (lStack_b8 == 0) {
          lVar6 = 0;
        }
        else {
          func_0x00010b8bb52c();
          lVar6 = lStack_b8;
        }
        FUN_10b8bac98(lVar6);
        unaff_x21 = unaff_x21 + 2;
      }
      param_3 = auStack_88;
      FUN_10b8bae18(param_3,&puStack_60);
      func_0x00010b8bb514();
      func_0x00010b8ba968(auStack_88);
      func_0x00010b8ba968(&puStack_60);
      unaff_x22 = 0;
    }
    else {
      unaff_x21 = &puStack_60;
      FUN_10b9a94ec(&puStack_60,param_2);
      FUN_10b8b9c04(&lStack_b8,&puStack_60);
      func_0x000104bddf04(puStack_60);
      if (lStack_b8 == 0) {
        unaff_x30 = 0x10b8b9b68;
        register0x00000008 = (BADSPACEBASE *)&uStack_c0;
        unaff_x19 = param_3;
        unaff_x20 = param_1;
        unaff_x29 = puVar1;
        goto SUB_10b8b9b98;
      }
      puStack_60 = auStack_48;
      uStack_50 = 2;
      uStack_58 = 0;
      func_0x00010b8bb52c();
      param_3 = auStack_b0;
      FUN_10b8bae18(param_3,&puStack_60);
      func_0x00010b8bb514();
      func_0x00010b8ba968(auStack_b0);
      func_0x00010b8ba968(&puStack_60);
      FUN_10b8bac98(lStack_b8);
    }
    func_0x00010b8bb4f4();
    if ((bool)uVar4) {
      return param_3;
    }
  }
  unaff_x30 = 0x10b8b9b98;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)&uStack_c0;
  unaff_x19 = param_3;
  unaff_x20 = param_1;
  unaff_x29 = puVar1;
SUB_10b8b9b98:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 ***)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010b8bb4d8();
  uVar7 = 0;
  while (*(long *)(unaff_x20 + 0x10) != 0) {
    lVar8 = *(long *)(unaff_x20 + 8) + *(long *)(unaff_x20 + 0x10) * 8;
    lVar6 = *(long *)(lVar8 + -8);
    *(undefined8 *)(lVar8 + -8) = 0;
    FUN_10b8ba3d0(unaff_x20 + 8);
    uVar5 = unaff_x19[1];
    lVar8 = 0;
    if (lVar6 != 0) {
      lVar8 = lVar6 + 0x18;
    }
    func_0x00010b8bb55c(uVar5,*unaff_x19,lVar8,unaff_x19[3]);
    uVar7 = (uint)uVar5 | uVar7;
    FUN_10b8bac98(lVar6);
  }
  return (undefined8 *)(ulong)(uVar7 & 1);
}



/* Entry: 10b8b9c04; end: 10b8b9c43;  */

void FUN_10b8b9c04(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    ___dynamic_cast(lVar1,&PTR_DAT_110d7ebe8,&PTR_DAT_110d71690,0);
  }
  func_0x00010b8bac44();
  *param_1 = lVar1;
  return;
}



/* Entry: 10b8b9c44; end: 10b8b9c9f;  */

undefined8 * FUN_10b8b9c44(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puStack_18;
  
  lVar2 = param_1[1];
  puVar1 = (undefined8 *)(*param_1 + lVar2 * 8);
  if (lVar2 == param_1[2]) {
    FUN_10b8baca4(&puStack_18,param_1,puVar1,1);
  }
  else {
    *puVar1 = *param_2;
    *param_2 = 0;
    param_1[1] = lVar2 + 1;
    puStack_18 = puVar1;
  }
  return puStack_18;
}



/* Entry: 10b8b9ca0; end: 10b8ba3cf;  */

uint FUN_10b8b9ca0(undefined8 param_1,long **param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long **pplVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long **pplVar10;
  long *extraout_x8;
  long *extraout_x8_00;
  long lVar11;
  undefined8 extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  undefined8 extraout_x9_01;
  long **unaff_x19;
  long unaff_x20;
  long *plVar12;
  long *plVar13;
  long **pplVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  long *plVar19;
  long *plVar20;
  long **pplVar21;
  long *plVar22;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined8 *puStack_e8;
  code *pcStack_e0;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long **pplStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long **pplStack_70;
  
  func_0x00010b8bb4d8();
  if ((bRam00000001137fcd60 & 1) == 0) {
    iVar4 = 0x137fcd60;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      puVar8 = (undefined8 *)0x70;
      __Znwm();
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar8[3] = 0;
      puVar8[2] = 0;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[6] = 0x32aaaba7;
      puVar8[8] = 0;
      puVar8[7] = 0;
      puVar8[10] = 0;
      puVar8[9] = 0;
      puVar8[0xc] = 0;
      puVar8[0xb] = 0;
      puVar8[0xd] = 0;
      puRam00000001137fcd58 = puVar8;
      ___cxa_guard_release(0x1137fcd60);
    }
  }
  puVar8 = puRam00000001137fcd58;
  __ZNSt3__15mutex4lockEv(puRam00000001137fcd58 + 6);
  if (puVar8[5] == 0) {
    plStack_80 = (long *)0x0;
    plStack_88 = (long *)0x0;
    plStack_90 = (long *)0x0;
    FUN_10b8bb13c(&plStack_90);
    plVar22 = (long *)0x0;
    plVar19 = (long *)0x0;
    plVar17 = (long *)0x0;
  }
  else {
    puVar9 = (undefined8 *)
             (*(long *)(puVar8[1] + ((ulong)puVar8[4] / 0xaa) * 8) +
             ((ulong)puVar8[4] % 0xaa) * 0x18);
    plVar19 = (long *)puVar9[1];
    plVar22 = (long *)*puVar9;
    plVar17 = (long *)puVar9[2];
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    FUN_10b8bb13c(*(long *)(puVar8[1] + ((ulong)puVar8[4] / 0xaa) * 8) +
                  ((ulong)puVar8[4] % 0xaa) * 0x18);
    lVar16 = puVar8[4];
    puVar8[5] = puVar8[5] + -1;
    puVar8[4] = lVar16 + 1U;
    if (0x153 < lVar16 + 1U) {
      __ZdlPv(*(undefined8 *)puVar8[1]);
      puVar8[1] = puVar8[1] + 8;
      puVar8[4] = puVar8[4] + -0xaa;
    }
    plStack_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
    plStack_b0 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    plStack_b8 = (long *)0x0;
    FUN_10b8bb13c(&plStack_b8);
    FUN_10b8bb13c(&plStack_90);
  }
  puStack_e8 = puVar8;
  pcStack_e0 = FUN_10b8bb138;
  plStack_100 = plVar22;
  plStack_f8 = plVar19;
  plStack_f0 = plVar17;
  __ZNSt3__15mutex6unlockEv(puVar8 + 6);
  pplVar14 = (long **)(unaff_x20 + 8);
  pplVar10 = (long **)*pplVar14;
  pplVar21 = pplVar10;
LAB_10b8b9df8:
  pplVar10 = pplVar10 + *(long *)(unaff_x20 + 0x10);
  plVar17 = *unaff_x19;
  pplVar5 = (long **)unaff_x19[1];
  do {
    if (pplVar21 == pplVar10) {
      uVar18 = 0;
      plVar22 = plVar17 + (long)pplVar5;
      for (; plVar19 = plStack_f8, plVar13 = plStack_100, plVar17 != plVar22; plVar17 = plVar17 + 1)
      {
        uVar6 = *(ulong *)(unaff_x20 + 8);
        param_2 = *(long ***)(unaff_x20 + 0x10);
        lVar16 = *plVar17;
        FUN_10b8ba404(uVar6,param_2,lVar16);
        if ((uVar6 & 1) == 0) {
          puVar8 = *(undefined8 **)(lVar16 + 0x28);
          puVar9 = *(undefined8 **)(lVar16 + 0x20);
          while (puVar9 != puVar8) {
            param_2 = (long **)*param_3;
            plVar19 = (long *)param_3[1];
            lVar16 = 0;
            if (*plVar17 != 0) {
              lVar16 = *plVar17 + 0x18;
            }
            (**(code **)(*plVar19 + 0x20))(plVar19,param_2,*puVar9,lVar16,puVar9 + 1,param_3[3]);
            uVar18 = (uint)plVar19 | uVar18;
            puVar9 = puVar9 + 5;
          }
        }
      }
      while (plVar13 != plVar19) {
        param_2 = (long **)*param_3;
        uVar7 = param_3[1];
        lVar16 = 0;
        if (*plVar13 != 0) {
          lVar16 = *plVar13 + 0x18;
        }
        func_0x00010b8bb55c(uVar7,param_2,lVar16,param_3[3]);
        uVar18 = (uint)uVar7 | uVar18;
        plVar13 = plVar13 + 1;
      }
      if (unaff_x19 != pplVar14) {
        param_2 = (long **)*unaff_x19;
        if (unaff_x19 + 3 == param_2) {
          FUN_10b8baeac(pplVar14,param_2,param_2 + (long)unaff_x19[1],0);
          FUN_10b8baf68();
        }
        else {
          FUN_10b8baf68(pplVar14);
          if (*pplVar14 != (long *)0x0) {
            FUN_10b8ba9e8(pplVar14,pplVar14,*(undefined8 *)(unaff_x20 + 0x18));
            param_2 = pplVar14;
          }
          *(long **)(unaff_x20 + 8) = *unaff_x19;
          plVar17 = unaff_x19[1];
          *(long **)(unaff_x20 + 0x18) = unaff_x19[2];
          *(long **)(unaff_x20 + 0x10) = plVar17;
          *unaff_x19 = (long *)0x0;
          unaff_x19[1] = (long *)0x0;
          unaff_x19[2] = (long *)0x0;
        }
      }
      if (puStack_e8 == (undefined8 *)0x0) goto LAB_10b8ba10c;
      (*pcStack_e0)(&plStack_100);
      puVar8 = puStack_e8;
      plVar12 = plStack_f0;
      plVar13 = plStack_f8;
      plVar19 = plStack_100;
      plStack_c8 = plStack_f8;
      plStack_d0 = plStack_100;
      plStack_c0 = plStack_f0;
      plStack_f8 = (long *)0x0;
      plStack_f0 = (long *)0x0;
      plStack_100 = (long *)0x0;
      __ZNSt3__15mutex4lockEv(puStack_e8 + 6);
      plVar17 = (long *)puVar8[1];
      plVar22 = (long *)puVar8[2];
      uVar6 = (long)plVar22 - (long)plVar17;
      lVar16 = 0;
      if (uVar6 != 0) {
        lVar16 = ((long)plVar22 - (long)plVar17 >> 3) * 0xaa + -1;
      }
      uVar1 = puVar8[4];
      if (lVar16 == puVar8[5] + uVar1) {
        if (uVar1 < 0xaa) {
          pplVar21 = (long **)(puVar8 + 3);
          plVar15 = *pplVar21;
          plVar20 = (long *)*puVar8;
          if (uVar6 < (ulong)((long)plVar15 - (long)plVar20)) {
            lVar16 = 0xff0;
            __Znwm();
            if (plVar15 == plVar22) {
              if (plVar17 == plVar20) {
                lVar11 = (long)plVar15 - (long)plVar17 >> 2;
                if (plVar22 == plVar17) {
                  lVar11 = 1;
                }
                pplStack_70 = pplVar21;
                FUN_10b8bb2f8();
                func_0x00010b8bb4e4(lVar11 * 2 + 6U & 0xfffffffffffffff8);
                plStack_80 = (long *)extraout_x8_01;
                plStack_78 = (long *)extraout_x9_01;
                FUN_10b8bb2d0(&plStack_90,puVar8[1],puVar8[2]);
                plVar15 = (long *)puVar8[1];
                plVar17 = (long *)*puVar8;
                puVar8[1] = plStack_88;
                *puVar8 = plStack_90;
                plVar20 = (long *)puVar8[3];
                plVar22 = (long *)puVar8[2];
                puVar8[3] = plStack_78;
                puVar8[2] = plStack_80;
                plStack_90 = plVar17;
                plStack_88 = plVar15;
                plStack_80 = plVar22;
                plStack_78 = plVar20;
                func_0x00010b8bb50c();
                plVar17 = (long *)puVar8[1];
              }
              plVar17[-1] = lVar16;
              puVar8[1] = plVar17;
              goto LAB_10b8ba07c;
            }
            *plVar22 = lVar16;
            puVar8[2] = plVar22 + 1;
          }
          else {
            plVar19 = (long *)((long)plVar15 - (long)plVar20 >> 2);
            if (plVar15 == plVar20) {
              plVar19 = (long *)0x1;
            }
            pplStack_98 = pplVar21;
            FUN_10b8bb2f8();
            plVar13 = (long *)((long)plVar19 + uVar6);
            plVar12 = plVar19 + (long)param_2;
            lVar16 = 0xff0;
            pplVar10 = param_2;
            plStack_b8 = plVar19;
            plStack_b0 = plVar13;
            plStack_a0 = plVar12;
            __Znwm();
            plVar15 = plVar13;
            if (uVar6 == (long)param_2 * 8) {
              if (plVar22 == plVar17) {
                plVar17 = (long *)0x1;
                pplStack_70 = pplVar21;
                FUN_10b8bb2f8();
                plStack_78 = plVar17 + (long)pplVar10;
                plStack_90 = plVar17;
                plStack_88 = plVar17;
                plStack_80 = plVar17;
                FUN_10b8bb2d0(&plStack_90,plVar13,plVar13);
                plVar20 = plStack_78;
                plVar15 = plStack_80;
                plVar22 = plStack_88;
                plVar17 = plStack_90;
                plStack_b8 = plStack_90;
                plStack_b0 = plStack_88;
                plStack_a0 = plStack_78;
                plStack_90 = plVar19;
                plStack_88 = plVar13;
                plStack_80 = plVar13;
                plStack_78 = plVar12;
                func_0x00010b8bb50c();
                plVar19 = plVar17;
                plVar13 = plVar22;
                plVar12 = plVar20;
              }
              else {
                plVar13 = plVar13 + (((long)plVar13 - (long)plVar19 >> 3) + 1) / -2;
                plVar15 = plVar13;
                plStack_b0 = plVar13;
              }
            }
            plVar17 = plVar15 + 1;
            *plVar15 = lVar16;
            plVar22 = (long *)puVar8[2];
            plStack_a8 = plVar17;
            while (plVar15 = (long *)puVar8[1], plVar22 != plVar15) {
              plVar15 = plVar13;
              if (plVar13 == plVar19) {
                if (plVar17 < plVar12) {
                  lVar16 = (long)plVar17 - (long)plVar19;
                  plVar20 = plVar17 + (((long)plVar12 - (long)plVar17 >> 3) + 1) / 2;
                  plVar15 = (long *)((long)plVar20 - ((long)plVar17 - (long)plVar19));
                  plVar17 = plVar20;
                  if (lVar16 != 0) {
                    _memmove(plVar15,plVar13,lVar16);
                  }
                }
                else {
                  lVar16 = (long)plVar12 - (long)plVar19 >> 2;
                  if ((long)plVar12 - (long)plVar19 == 0) {
                    lVar16 = 1;
                  }
                  pplStack_70 = pplVar21;
                  FUN_10b8bb2f8();
                  func_0x00010b8bb4e4(lVar16 * 2 + 6U & 0xfffffffffffffff8);
                  plStack_80 = extraout_x8_00;
                  plStack_78 = extraout_x9_00;
                  FUN_10b8bb2d0(&plStack_90,plVar19,plVar17);
                  plVar3 = plStack_78;
                  plVar2 = plStack_80;
                  plVar15 = plStack_88;
                  plVar20 = plStack_90;
                  plStack_90 = plVar19;
                  plStack_88 = plVar13;
                  plStack_80 = plVar17;
                  plStack_78 = plVar12;
                  func_0x00010b8bb50c();
                  plVar19 = plVar20;
                  plVar17 = plVar2;
                  plVar12 = plVar3;
                }
              }
              plVar22 = plVar22 + -1;
              plVar13 = plVar15 + -1;
              *plVar13 = *plVar22;
            }
            plStack_b8 = (long *)*puVar8;
            *puVar8 = plVar19;
            puVar8[1] = plVar13;
            plStack_a0 = (long *)puVar8[3];
            plStack_a8 = (long *)puVar8[2];
            puVar8[2] = plVar17;
            puVar8[3] = plVar12;
            plStack_b0 = plVar15;
            func_0x00010b8bb32c(&plStack_b8);
            plVar12 = plStack_c0;
            plVar19 = plStack_d0;
            plVar13 = plStack_c8;
          }
        }
        else {
          puVar8[4] = uVar1 - 0xaa;
          lVar16 = *plVar17;
          puVar8[1] = plVar17 + 1;
LAB_10b8ba07c:
          FUN_10b8bb1e0(puVar8,lVar16);
        }
      }
      lVar16 = puVar8[5];
      uVar6 = lVar16 + puVar8[4];
      puVar9 = (undefined8 *)(*(long *)(puVar8[1] + (uVar6 / 0xaa) * 8) + (uVar6 % 0xaa) * 0x18);
      puVar9[1] = plVar13;
      *puVar9 = plVar19;
      puVar9[2] = plVar12;
      plStack_c8 = (long *)0x0;
      plStack_c0 = (long *)0x0;
      plStack_d0 = (long *)0x0;
      puVar8[5] = lVar16 + 1;
      __ZNSt3__15mutex6unlockEv(puVar8 + 6);
      FUN_10b8bb13c(&plStack_d0);
      puStack_e8 = (undefined8 *)0x0;
LAB_10b8ba10c:
      FUN_10b8bb13c(&plStack_100);
      return uVar18 & 1;
    }
    plVar19 = *pplVar21;
    plVar22 = plVar17;
    param_2 = pplVar5;
    FUN_10b8ba404(plVar17,pplVar5,plVar19);
    if ((int)plVar22 == 0) break;
    pplVar21 = pplVar21 + 1;
  } while( true );
  *pplVar21 = (long *)0x0;
  pplVar5 = pplVar21;
  while (pplVar5 = pplVar5 + 1, pplVar5 != pplVar10) {
    param_2 = pplVar5;
    FUN_10b8bb10c();
  }
  func_0x00010b8bac74(pplVar10 + -1);
  *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -1;
  if (plStack_f8 < plStack_f0) {
    plVar17 = plStack_f8 + 1;
    *plStack_f8 = (long)plVar19;
  }
  else {
    pplVar10 = &plStack_100;
    FUN_10b8baa04(pplVar10,((long)plStack_f8 - (long)plStack_100 >> 3) + 1);
    plVar22 = plStack_f8;
    plVar17 = plStack_100;
    pplStack_70 = &plStack_f0;
    if (pplVar10 != (long **)0x0) {
      FUN_10b8baacc(&plStack_f0,pplVar10);
    }
    func_0x00010b8bb4e4((long)plVar22 - (long)plVar17);
    plStack_80 = extraout_x8 + 1;
    *extraout_x8 = (long)plVar19;
    param_2 = &plStack_90;
    plStack_78 = extraout_x9;
    FUN_10b8baa44(&plStack_100);
    plVar17 = plStack_f8;
    func_0x00010b8bab5c(&plStack_90);
  }
  plStack_f8 = plVar17;
  FUN_10b8bac98(0);
  pplVar10 = (long **)*pplVar14;
  goto LAB_10b8b9df8;
}



/* Entry: 10b8ba3d0; end: 10b8ba403;  */

void FUN_10b8ba3d0(long *param_1)

{
  func_0x00010b8bac74(*param_1 + param_1[1] * 8 + -8);
  param_1[1] = param_1[1] + -1;
  return;
}



/* Entry: 10b8ba404; end: 10b8ba42b;  */

bool FUN_10b8ba404(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_2 << 3;
  do {
    lVar2 = lVar1;
    if (lVar2 == 0) break;
    lVar3 = *param_1;
    param_1 = param_1 + 1;
    lVar1 = lVar2 + -8;
  } while (lVar3 != param_3);
  return lVar2 != 0;
}



/* Entry: 10b8ba42c; end: 10b8ba563;  */

void FUN_10b8ba42c(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_70;
  long *aplStack_68 [2];
  long *plStack_58;
  
  func_0x00010b8bb4d8();
  lVar2 = *(long *)(param_1 + 0x38);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x80) != 0)) {
    FUN_10b8be140(lVar2,*unaff_x19,*(long *)(lVar2 + 0x80),unaff_x19[1],unaff_x19[3]);
  }
  lVar2 = unaff_x20[6];
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x80) != 0)) {
    func_0x00010b8bf5d0(lVar2,*unaff_x19,*(long *)(lVar2 + 0x80),unaff_x19[1],unaff_x19[3]);
    FUN_10b8be298(&plStack_58);
    FUN_10b8bddd0();
    puVar5 = (undefined8 *)(unaff_x22 + 0x68);
    plVar6 = (long *)*puVar5;
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6;
      FUN_10b8be2ec();
      lVar2 = *plVar6;
      lVar4 = plVar6[3];
      aplStack_68[0] = plVar3;
      while (uVar1 = aplStack_68[0] == (long *)(lVar2 + lVar4), !(bool)uVar1) {
        FUN_10b8be318(plStack_58);
        func_0x00010b8bf648(plStack_58);
        if ((bool)uVar1) {
          FUN_10b8b4dbc(unaff_x20);
        }
        func_0x00010b8be33c(aplStack_68);
      }
      uStack_70 = *puVar5;
      *puVar5 = 0;
      func_0x00010b8bda04(&uStack_70);
      FUN_10b8be660(&uStack_70);
    }
    plVar6 = plStack_58;
    plVar3 = plStack_58;
    FUN_10b8be2ec();
    lVar2 = *plVar6;
    lVar4 = plVar6[3];
    aplStack_68[0] = plVar3;
    while (plVar6 = plStack_58, aplStack_68[0] != (long *)(lVar2 + lVar4)) {
      (**(code **)(*unaff_x20 + 0x20))(unaff_x20);
      func_0x00010b8be33c(aplStack_68);
    }
    plStack_58 = (long *)0x0;
    FUN_10b8be684(puVar5,plVar6);
    FUN_10b8be660(&plStack_58);
    return;
  }
  return;
}



/* Entry: 10b8ba564; end: 10b8ba647;  */

bool FUN_10b8ba564(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar4 = &uStack_60;
  FUN_10b9a94ec(&uStack_40,param_2);
  FUN_10b8ba648(&lStack_38,&uStack_40);
  func_0x000104bddf04(uStack_40);
  func_0x00010b8ba4d4(param_1,param_3);
  lVar1 = lStack_38;
  plVar3 = (long *)(param_1 + 0x80);
  lVar5 = *plVar3;
  if (lStack_38 != lVar5) {
    func_0x00010b8ba688(plVar3,&lStack_38);
    lVar2 = *plVar3;
    if (lVar2 == 0) {
      uStack_60 = 0;
      uStack_58 = 0;
    }
    else {
      uStack_48 = *(undefined8 *)(lVar2 + 0x50);
      uStack_50 = *(undefined8 *)(lVar2 + 0x48);
      if (*(long *)(lVar2 + 0x50) != 0) {
        do {
          func_0x00010b8bb4c8();
        } while (extraout_w10 != 0);
      }
      puVar4 = &uStack_50;
    }
    FUN_10b8bc0b0(param_1 + 0x20,puVar4);
    FUN_10b8bb3cc(puVar4);
  }
  FUN_10b8bb3c0(lStack_38);
  return lVar1 != lVar5;
}



/* Entry: 10b8ba648; end: 10b8ba6f3;  */

void FUN_10b8ba648(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    ___dynamic_cast(lVar1,&PTR_DAT_110d7ebe8,&PTR_DAT_110d71768,0);
  }
  func_0x00010b8bb36c();
  *param_1 = lVar1;
  return;
}



/* Entry: 10b8ba6f4; end: 10b8ba73b;  */

long * FUN_10b8ba6f4(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)plVar1[6];
    if (((plVar2 == (long *)0x0) || (plVar2[0x10] != param_2)) &&
       ((plVar2 = (long *)plVar1[7], plVar2 == (long *)0x0 || (plVar2[0x10] != param_2)))) {
                    /* WARNING: Could not recover jumptable at 0x00010b8ba72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return plVar1;
    }
  }
  return plVar2;
}



/* Entry: 10b8ba73c; end: 10b8ba7e7;  */

void FUN_10b8ba73c(undefined8 param_1,undefined8 param_2)

{
  int extraout_w10;
  long alStack_58 [2];
  long lStack_48;
  long alStack_40 [2];
  
  FUN_10b8ba7e8(alStack_40,param_2);
  func_0x00010b8bb3f4(alStack_40);
  if (alStack_40[0] != 0) {
    FUN_10b8ba7e8(alStack_58,param_2);
    if ((alStack_58[0] != 0) && (*(long *)(alStack_58[0] + 0x10) != 0)) {
      do {
        func_0x00010b8bb4c8();
      } while (extraout_w10 != 0);
    }
    lStack_48 = alStack_58[0];
    func_0x00010b9a8f78(alStack_40,&lStack_48);
    FUN_10b8ba564(param_1,alStack_40,0);
    FUN_10b9a8d98(alStack_40);
    func_0x000104bddf04(alStack_58[0]);
    func_0x00010b8bb3f4(alStack_58);
  }
  return;
}



/* Entry: 10b8ba7e8; end: 10b8ba8bf;  */

void FUN_10b8ba7e8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  
  if (*(long *)(param_2 + 0x30) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0x30) + 0x80);
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(lVar1 + 8) == 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    *param_1 = lVar1;
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x00010b8bb4c8();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x000107c278f0(&lStack_30);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = lVar1;
      param_1[1] = lStack_28;
      if (lStack_28 != 0) {
        do {
          func_0x00010b8bb4c8();
        } while (extraout_w10 != 0);
      }
    }
    func_0x000107c284e8(&lStack_30);
  }
  return;
}



/* Entry: 10b8ba8c0; end: 10b8ba913;  */

ulong FUN_10b8ba8c0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010b8bdcc4(uVar1,param_2);
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    func_0x00010b8bdcc4(lVar2,param_2);
    uVar1 = (ulong)((uint)uVar1 | (uint)lVar2);
  }
  return uVar1;
}



/* Entry: 10b8ba914; end: 10b8ba9e7;  */

void FUN_10b8ba914(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  
  puVar1 = (undefined8 *)0x88;
  __Znwm();
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *puVar1 = &PTR_FUN_110d71880;
  func_0x00010b8bb568();
  puVar1[0xe] = CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13(uVar13,
                                                  CONCAT12(uVar12,CONCAT11(uVar11,uVar10)))))));
  puVar1[0xd] = CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(uVar6,CONCAT13(uVar5,CONCAT12(
                                                  uVar4,CONCAT11(uVar3,uVar2)))))));
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0xc] = CONCAT17(uVar17,CONCAT16(uVar16,CONCAT15(uVar15,CONCAT14(uVar14,CONCAT13(uVar13,
                                                  CONCAT12(uVar12,CONCAT11(uVar11,uVar10)))))));
  puVar1[0xb] = CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(uVar6,CONCAT13(uVar5,CONCAT12(
                                                  uVar4,CONCAT11(uVar3,uVar2)))))));
  puVar1[0x10] = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10b8ba9e8; end: 10b8baa03;  */

void FUN_10b8ba9e8(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8baa04; end: 10b8baa43;  */

long * FUN_10b8baa04(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar3 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar3 <= param_2) {
      plVar3 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar3 = (long *)0x1fffffffffffffff;
    }
    return plVar3;
  }
  FUN_10b8baac0();
  func_0x00010b8bb4d8();
  plVar3 = param_1 + 2;
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_10b8bab0c(plVar3,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 10b8baa44; end: 10b8baabf;  */

void FUN_10b8baa44(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b8bb4d8();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_10b8bab0c(param_1 + 2,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b8baac0; end: 10b8baacb;  */

void FUN_10b8baac0(void)

{
  _abort();
  FUN_10b8baaf0();
  return;
}



/* Entry: 10b8baacc; end: 10b8baaef;  */

void FUN_10b8baacc(void)

{
  FUN_10b8baaf0();
  return;
}



/* Entry: 10b8baaf0; end: 10b8bab0b;  */

void FUN_10b8baaf0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104bfe188();
    for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
      *param_4 = *puVar1;
      *puVar1 = 0;
      param_4 = param_4 + 1;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      func_0x00010b8bac74();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
  return;
}



/* Entry: 10b8bab0c; end: 10b8bab2b;  */

void FUN_10b8bab0c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
    *param_4 = *puVar1;
    *puVar1 = 0;
    param_4 = param_4 + 1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    func_0x00010b8bac74();
  }
  return;
}



/* Entry: 10b8bab2c; end: 10b8bab87;  */

void FUN_10b8bab2c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    func_0x00010b8bac74();
  }
  return;
}



/* Entry: 10b8bab88; end: 10b8bab8f;  */

void FUN_10b8bab88(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8bb4d8(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x00010b8bac74();
  }
  return;
}



/* Entry: 10b8bab90; end: 10b8babe7;  */

void FUN_10b8bab90(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8bb4d8();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x00010b8bac74();
  }
  return;
}



/* Entry: 10b8babe8; end: 10b8babff;  */

void FUN_10b8babe8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10b8bac1c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8bac00; end: 10b8bac1b;  */

void FUN_10b8bac00(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10b8bac1c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8bac1c; end: 10b8bac97;  */

undefined8 * FUN_10b8bac1c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_28;
  
  func_0x00010b8bb39c(param_1 + 0x10);
  *param_1 = &PTR_FUN_110d71880;
  plVar2 = param_1 + 0xd;
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    *plVar2 = 0;
    lStack_28 = lVar1;
    func_0x00010b8bda04(&lStack_28);
    FUN_10b8be660(&lStack_28);
  }
  FUN_10b8be660(plVar2);
  func_0x000107c278f4(param_1 + 0xc);
  FUN_10b8be4ec(param_1 + 6);
  FUN_10b8bb3cc(param_1 + 4);
  func_0x000107c278f4(param_1 + 2);
  func_0x000107c278f4(param_1 + 1);
  return param_1;
}



/* Entry: 10b8bac98; end: 10b8baca3;  */

void FUN_10b8bac98(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8baca4; end: 10b8bade3;  */

long * FUN_10b8baca4(long *param_1,long *param_2,long *param_3,long param_4,long *param_5)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 unaff_x20;
  long lVar11;
  undefined1 **ppuVar12;
  code *pcVar13;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  ppuVar4 = (undefined1 **)&stack0xffffffffffffffb0;
  ppuVar12 = (undefined1 **)&stack0xfffffffffffffff0;
  uVar3 = param_2[2];
  uVar1 = param_2[1] + param_4;
  if (uVar1 - uVar3 <= 0xfffffffffffffff - uVar3) {
    if (uVar3 >> 0x3d == 0) {
      uVar8 = (uVar3 << 3) / 5;
    }
    else {
      uVar8 = uVar3 << 3;
      if (4 < uVar3 >> 0x3d) {
        uVar8 = 0xffffffffffffffff;
      }
    }
    lVar11 = *param_2;
    if (0xffffffffffffffe < uVar8) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    plVar5 = param_2;
    FUN_10b8bade4(param_2,uVar1);
    lVar7 = param_2[1];
    plVar2 = (long *)*param_2;
    plVar6 = plVar5;
    for (plVar9 = plVar2; plVar9 != param_3; plVar9 = plVar9 + 1) {
      *plVar6 = *plVar9;
      *plVar9 = 0;
      plVar6 = plVar6 + 1;
    }
    *plVar6 = *param_5;
    *param_5 = 0;
    lVar10 = param_4 << 3;
    for (plVar9 = param_3; plVar9 != plVar2 + lVar7; plVar9 = plVar9 + 1) {
      *(long *)((long)plVar6 + lVar10) = *plVar9;
      *plVar9 = 0;
      lVar10 = lVar10 + 8;
    }
    plVar6 = plVar5;
    if (plVar2 != (long *)0x0) {
      func_0x00010b8ba988(param_2);
      plVar6 = param_2;
      FUN_10b8ba9e8(param_2,param_2,param_2[2]);
      lVar7 = param_2[1];
    }
    *param_2 = (long)plVar5;
    param_2[1] = lVar7 + param_4;
    param_2[2] = uVar1;
    *param_1 = (long)plVar5 + ((long)param_3 - lVar11);
    return plVar6;
  }
  pcVar13 = FUN_10b8bade4;
  _abort();
  if ((ulong)param_3 >> 0x3c != 0) {
    ppuVar4 = &puStack_60;
    pcStack_58 = FUN_10b8bade4;
    pcVar13 = (code *)0x10b8badfc;
    puStack_60 = (undefined1 *)ppuVar12;
    _abort();
    ppuVar12 = &puStack_60;
  }
  if ((ulong)param_3 >> 0x3c == 0) {
    param_3 = (long *)((long)param_3 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_3);
    return param_3;
  }
  *(undefined1 ***)((long)ppuVar4 + -0x10) = ppuVar12;
  *(code **)((long)ppuVar4 + -8) = pcVar13;
  func_0x00010772e264();
  *(undefined8 *)((long)ppuVar4 + -0x30) = unaff_x20;
  *(long **)((long)ppuVar4 + -0x28) = param_1;
  *(undefined1 **)((long)ppuVar4 + -0x20) = (undefined1 *)((long)ppuVar4 + -0x10);
  *(undefined8 *)((long)ppuVar4 + -0x18) = 0x10b8bae18;
  *param_2 = (long)(param_2 + 3);
  param_2[2] = 2;
  param_2[1] = 0;
  func_0x00010b8bae50();
  return param_2;
}



/* Entry: 10b8bade4; end: 10b8bae17;  */

long * FUN_10b8bade4(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (param_2 >> 0x3c != 0) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x10b8badfc;
    _abort();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  if (param_2 >> 0x3c != 0) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010772e264();
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x18) = 0x10b8bae18;
    *param_1 = (long)(param_1 + 3);
    param_1[2] = 2;
    param_1[1] = 0;
    func_0x00010b8bae50();
    return param_1;
  }
  plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(plVar1);
  return plVar1;
}



/* Entry: 10b8bae18; end: 10b8baeab;  */

long * FUN_10b8bae18(long *param_1,undefined8 param_2)

{
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 2;
  param_1[1] = 0;
  func_0x00010b8bae50(param_1,param_2,param_2);
  return param_1;
}



/* Entry: 10b8baeac; end: 10b8baf67;  */

void FUN_10b8baeac(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar5 = (long)param_3 - (long)param_2 >> 3;
  if ((ulong)param_1[2] < uVar5) {
    plVar3 = param_1;
    FUN_10b8bade4(param_1,uVar5);
    plVar6 = (long *)*param_1;
    if (plVar6 != (long *)0x0) {
      FUN_10b8baf68(param_1);
      if (param_1 + 3 != plVar6) {
        __ZdlPv(plVar6);
      }
    }
    param_1[1] = 0;
    param_1[2] = uVar5;
    *param_1 = (long)plVar3;
    lVar4 = 0;
    lVar1 = *param_1;
    lVar2 = param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined8 *)(lVar1 + lVar2 * 8 + lVar4) = *param_2;
      *param_2 = 0;
      lVar4 = lVar4 + 8;
    }
    param_1[1] = lVar2 + (lVar4 >> 3);
    return;
  }
  FUN_10b8bafb8(param_1,param_2,uVar5,*param_1,param_1[1]);
  param_1[1] = uVar5;
  return;
}



/* Entry: 10b8baf68; end: 10b8baf83;  */

void FUN_10b8baf68(void)

{
  long unaff_x19;
  
  func_0x00010b8bb520();
  *(undefined8 *)(unaff_x19 + 8) = 0;
  return;
}



/* Entry: 10b8baf84; end: 10b8bafb7;  */

void FUN_10b8baf84(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  lVar1 = *param_1;
  lVar2 = param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *(undefined8 *)(lVar1 + lVar2 * 8 + lVar3) = *param_2;
    *param_2 = 0;
    lVar3 = lVar3 + 8;
  }
  param_1[1] = lVar2 + (lVar3 >> 3);
  return;
}



/* Entry: 10b8bafb8; end: 10b8bb0a3;  */

void FUN_10b8bafb8(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined8 uStack_38;
  
  lVar1 = param_5 - param_3;
  uStack_38 = param_4;
  if (param_3 <= param_5) {
    FUN_10b8bb0c4(param_2,param_3,param_4);
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      func_0x00010b8bac74(param_2);
      param_2 = param_2 + 8;
    }
    return;
  }
  func_0x00010b8bb04c(param_2,param_5,&uStack_38);
  FUN_10b8bb0a4(param_1,param_2,param_3 - param_5,uStack_38);
  return;
}



/* Entry: 10b8bb0a4; end: 10b8bb0c3;  */

void FUN_10b8bb0a4(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_4 = *param_2;
    *param_2 = 0;
    param_4 = param_4 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 10b8bb0c4; end: 10b8bb10b;  */

long FUN_10b8bb0c4(long param_1,long param_2,long param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_10b8bb10c(param_3,param_1);
    param_1 = param_1 + 8;
    param_3 = param_3 + 8;
  }
  return param_3;
}



/* Entry: 10b8bb10c; end: 10b8bb137;  */

long FUN_10b8bb10c(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x00010b8bb588();
    FUN_10b8bac98();
  }
  return param_1;
}



/* Entry: 10b8bb138; end: 10b8bb13b;  */

void FUN_10b8bb138(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8bb4d8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x00010b8bac74();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8bb13c; end: 10b8bb1a3;  */

undefined8 FUN_10b8bb13c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010b8bb168(&uStack_28);
  return param_1;
}



/* Entry: 10b8bb1a4; end: 10b8bb1ab;  */

void FUN_10b8bb1a4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8bb4d8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x00010b8bac74();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8bb1ac; end: 10b8bb1df;  */

void FUN_10b8bb1ac(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8bb4d8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x00010b8bac74();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8bb1e0; end: 10b8bb2cf;  */

void FUN_10b8bb1e0(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  puStack_50 = param_1 + 3;
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_10b8bb2f8();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_10b8bb2d0(&uStack_70,param_1[1],param_1[2]);
      uVar4 = param_1[1];
      uVar7 = *param_1;
      uVar8 = param_1[3];
      uVar6 = param_1[2];
      param_1[1] = uStack_68;
      *param_1 = uStack_70;
      param_1[3] = uStack_58;
      param_1[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x00010b8bb32c(&uStack_70);
      puVar5 = (undefined8 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = param_1[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      param_1[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = param_2;
  param_1[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10b8bb2d0; end: 10b8bb2f7;  */

void FUN_10b8bb2d0(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10b8bb2f8; end: 10b8bb3bf;  */

undefined1  [16] FUN_10b8bb2f8(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bfe188();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10b8bb3c0; end: 10b8bb3cb;  */

void FUN_10b8bb3c0(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8bb3cc; end: 10b8bb4ab;  */

long FUN_10b8bb3cc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b8bb4ac; end: 10b8bb59b;  */

void FUN_10b8bb4ac(void)

{
  return;
}



/* Entry: 10b8bb59c; end: 10b8bb5fb;  */

undefined8 *
FUN_10b8bb59c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d71738;
  FUN_10b8bc3c4(param_1 + 3);
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  FUN_10b8bb5fc(param_1,param_4,param_3);
  return param_1;
}



/* Entry: 10b8bb5fc; end: 10b8bb71f;  */

void FUN_10b8bb5fc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  uVar5 = *(ulong *)(param_3 + 0x18);
  puVar1 = (ulong *)(param_3 + 0x18);
  if ((uVar5 & 1) != 0) {
    puVar1 = (ulong *)(uVar5 + 7);
  }
  for (lVar6 = (long)*(int *)(param_3 + 0x20) << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    uVar5 = *puVar1;
    lVar4 = param_4;
    func_0x00010b8bb87c();
    ppuVar2 = &PTR_PTR_1133fadc0;
    if (*(undefined ***)(uVar5 + 0x18) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(uVar5 + 0x18);
    }
    FUN_10b8bb784(&uStack_78,param_2,ppuVar2);
    func_0x00010b8bb854(lVar4,&uStack_78);
    FUN_10b9a8d98(auStack_70);
    *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(uVar5 + 0x28);
    *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(uVar5 + 0x20);
    *(undefined4 *)(lVar4 + 0x1c) = *(undefined4 *)(uVar5 + 0x28);
    puVar1 = puVar1 + 1;
  }
  if ((*(byte *)(param_3 + 0x10) & 1) != 0) {
    func_0x00010b8bb8c4(&uStack_78);
    uVar3 = uStack_78;
    uStack_78 = 0;
    func_0x00010b8bc83c(param_4 + 0x18,uVar3);
    func_0x00010b8bc818(&uStack_78);
    ppuVar2 = &PTR_PTR_1133faf88;
    if (*(undefined ***)(param_3 + 0x30) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(param_3 + 0x30);
    }
    FUN_10b8bb930(param_1,param_2,ppuVar2,*(undefined8 *)(param_4 + 0x18));
  }
  return;
}



/* Entry: 10b8bb720; end: 10b8bb76b;  */

undefined8 * FUN_10b8bb720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71738;
  FUN_10b8bb3cc(param_1 + 9);
  FUN_10b8bc408(param_1 + 5);
  func_0x00010b8bc430(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b8bb76c; end: 10b8bb76f;  */

undefined8 * FUN_10b8bb76c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71738;
  FUN_10b8bb3cc(param_1 + 9);
  FUN_10b8bc408(param_1 + 5);
  func_0x00010b8bc430(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b8bb770; end: 10b8bb783;  */

void FUN_10b8bb770(void)

{
  FUN_10b8bb720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8bb784; end: 10b8bb853;  */

void FUN_10b8bb784(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c31084();
  func_0x000107c31080(&uStack_40);
  FUN_10b8a3c40(param_2,&uStack_40);
  *param_1 = param_2;
  iVar1 = *(int *)(param_3 + 0x30);
  if (iVar1 == 0) {
    func_0x000107c31084();
    func_0x00010b8bd920();
    FUN_10b9a8e18(param_1 + 1,&uStack_38);
    func_0x000107c278f8(uStack_38);
  }
  else if (iVar1 == 1) {
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    *(undefined2 *)(param_1 + 2) = 4;
    *(int *)(param_1 + 1) = (int)uVar2;
  }
  else if (iVar1 == 2) {
    uVar2 = *(undefined8 *)(param_3 + 0x28);
    *(undefined2 *)(param_1 + 2) = 6;
    param_1[1] = uVar2;
  }
  else {
    *(undefined2 *)(param_1 + 2) = 0;
    param_1[1] = 0;
  }
  func_0x000107c278f8(uStack_40);
  return;
}



/* Entry: 10b8bb854; end: 10b8bb92f;  */

undefined8 * FUN_10b8bb854(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_10b9a9020(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10b8bb930; end: 10b8bc0af;  */

/* WARNING: Possible PIC construction at 0x00010b8bb964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8bb974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8bb984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8bb978) */
/* WARNING: Removing unreachable block (ram,0x00010b8bb968) */
/* WARNING: Removing unreachable block (ram,0x00010b8bb988) */
/* WARNING: Removing unreachable block (ram,0x00010b8bb99c) */
/* WARNING: Removing unreachable block (ram,0x00010b8bb9b0) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbc50) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbc5c) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbc88) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbc98) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbc9c) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbcc8) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbcd4) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbcec) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbcfc) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbe44) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbe58) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbe80) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbe94) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbe98) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbec0) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbed0) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbd04) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbd28) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbd34) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbd44) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbd48) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbd54) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbd64) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbd70) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbd94) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbda8) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbdd8) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbdcc) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbde0) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbdfc) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbe00) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbdb0) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbd14) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbe10) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbe34) */
/* WARNING: Removing unreachable block (ram,0x00010b8bb9b8) */
/* WARNING: Removing unreachable block (ram,0x00010b8bb9e0) */
/* WARNING: Removing unreachable block (ram,0x00010b8bb9fc) */
/* WARNING: Removing unreachable block (ram,0x00010b8bba08) */
/* WARNING: Removing unreachable block (ram,0x00010b8bba18) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbef0) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbef4) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbef8) */
/* WARNING: Removing unreachable block (ram,0x00010b8bba24) */
/* WARNING: Removing unreachable block (ram,0x00010b8bba48) */
/* WARNING: Removing unreachable block (ram,0x00010b8bba80) */
/* WARNING: Removing unreachable block (ram,0x00010b8bba84) */
/* WARNING: Removing unreachable block (ram,0x00010b8bba9c) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbab4) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbab8) */
/* WARNING: Removing unreachable block (ram,0x00010b8bba8c) */
/* WARNING: Removing unreachable block (ram,0x00010b8bba54) */
/* WARNING: Removing unreachable block (ram,0x00010b8bb9cc) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbac0) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbadc) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbb14) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbb60) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbb90) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbbb4) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbbd4) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbbe0) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbbfc) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbc30) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbc3c) */
/* WARNING: Removing unreachable block (ram,0x00010b8bbbf0) */

void FUN_10b8bb930(undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  int *piVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  
  uVar9 = *(ulong *)(param_3 + 0x18);
  puVar15 = (ulong *)(param_3 + 0x18);
  if ((uVar9 & 1) != 0) {
    puVar15 = (ulong *)(uVar9 + 7);
  }
  puVar2 = puVar15 + *(int *)(param_3 + 0x20);
  uStack_110 = param_1;
  uStack_108 = param_2;
  do {
    if (puVar15 == puVar2) {
      return;
    }
    uVar16 = *puVar15;
    func_0x000107c31084();
    func_0x00010b8bd920();
    plVar7 = param_4;
    FUN_10b8bc99c(param_4,&lStack_118);
    lVar11 = 0;
    uVar9 = (ulong)plVar7 >> 7;
    lVar10 = param_4[1];
    while( true ) {
      uVar9 = uVar9 & param_4[3];
      uVar13 = *(ulong *)(*param_4 + uVar9);
      uVar14 = uVar13 ^ ((ulong)plVar7 & 0x7f) * 0x101010101010101;
      for (uVar14 = uVar14 + 0xfefefefefefefeff & (uVar14 ^ 0xffffffffffffffff) & 0x8080808080808080
          ; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
        uVar4 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        plVar8 = (long *)(uVar9 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & param_4[3])
        ;
        if (*(long *)(lVar10 + (long)plVar8 * 0x28) == lStack_118) goto LAB_10b8bc060;
      }
      if ((uVar13 & ~uVar13 << 6 & 0x8080808080808080) != 0) break;
      lVar11 = lVar11 + 8;
      uVar9 = lVar11 + uVar9;
    }
    plVar8 = param_4;
    FUN_10b8bc9dc(param_4,plVar7);
    lVar11 = param_4[1];
    if (lStack_118 != 0) {
      piVar1 = (int *)(lStack_118 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar12 = (long *)(lVar11 + (long)plVar8 * 0x28);
    *plVar12 = lStack_118;
    plVar12[2] = 0;
    plVar12[1] = 0;
    plVar12[4] = 0;
    plVar12[3] = 0;
    *(byte *)(*param_4 + (long)plVar8) = (byte)plVar7 & 0x7f;
    func_0x00010b8bd780();
    lVar10 = param_4[1];
LAB_10b8bc060:
    ppuVar3 = &PTR_PTR_1133fb0b8;
    if (*(undefined ***)(uVar16 + 0x20) != (undefined **)0x0) {
      ppuVar3 = *(undefined ***)(uVar16 + 0x20);
    }
    FUN_10b8bb5fc(param_1,param_2,ppuVar3,lVar10 + (long)plVar8 * 0x28 + 8);
    func_0x000107c278f8(lStack_118);
    puVar15 = puVar15 + 1;
  } while( true );
}



/* Entry: 10b8bc0b0; end: 10b8bc11f;  */

undefined8 * FUN_10b8bc0b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_10b8bb3cc(&uStack_30);
  return param_1;
}



/* Entry: 10b8bc120; end: 10b8bc207;  */

void FUN_10b8bc120(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = *(long *)(param_2 + 0x40) + 0x30;
  lVar2 = param_3;
  FUN_10b8bc208();
  if (*(long *)(*(long *)(param_2 + 0x40) + 0x30) + *(long *)(*(long *)(param_2 + 0x40) + 0x48) ==
      lVar1) {
    func_0x000107c31084();
    puStack_38 = &UNK_1003ab990;
    lStack_40 = param_3;
    func_0x000107c2793c(&UNK_10f7cb435);
    func_0x000107c3173c(auStack_60);
    func_0x000107c31080(&uStack_48,lVar1,auStack_60);
    FUN_10b99f560(&lStack_40,&uStack_48);
    param_3 = lStack_40;
    lStack_40 = 0;
    func_0x000104bda960(0);
    func_0x000107c278f8(uStack_48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
    uVar3 = 2;
  }
  else {
    func_0x00010b8bc238(auStack_60,lVar2 + 8);
    func_0x00010b8bd8d8();
    FUN_10b8bac98();
    uVar3 = 1;
  }
  *param_1 = uVar3;
  param_1[1] = param_3;
  return;
}



/* Entry: 10b8bc208; end: 10b8bc277;  */

long FUN_10b8bc208(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10b8bc99c();
  plVar2 = param_1;
  FUN_10b8bd16c(param_1,param_2,plVar1,&lStack_28);
  if ((int)plVar2 == 0) {
    lStack_28 = *param_1 + param_1[3];
  }
  else {
    lStack_28 = *param_1 + lStack_28;
  }
  return lStack_28;
}



/* Entry: 10b8bc278; end: 10b8bc323;  */

void FUN_10b8bc278(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuStack_68 = &PTR_FUN_110d79490;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uVar1 = 0;
  func_0x000107c3034c();
  if ((uVar1 & 1) == 0) {
    FUN_10b99f5f8(auStack_70,&UNK_10f7cb452);
    func_0x00010b8bd8d8();
    func_0x000104bda960();
    uVar2 = 2;
  }
  else {
    FUN_10b8bc324(auStack_70,param_2,&ppuStack_68,param_5);
    func_0x00010b8bd8d8();
    FUN_10b8bb3c0();
    uVar2 = 1;
  }
  *param_1 = uVar2;
  param_1[1] = param_5;
  FUN_10b9523c8(&ppuStack_68);
  return;
}



/* Entry: 10b8bc324; end: 10b8bc3c3;  */

undefined8 FUN_10b8bc324(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x00010b8bd7a0();
  FUN_10b8bd57c(auStack_38);
  *param_1 = auStack_38[0];
  func_0x00010b8bd76c(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  if ((bRam00000001137fcd70 & 1) == 0) {
    iVar1 = 0x137fcd70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fcd68,&UNK_10f7cb46f);
      ___cxa_guard_release(0x1137fcd70);
    }
  }
  return 0x1137fcd68;
}



/* Entry: 10b8bc3c4; end: 10b8bc407;  */

void FUN_10b8bc3c4(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = lVar4;
  return;
}



/* Entry: 10b8bc408; end: 10b8bc4e7;  */

long FUN_10b8bc408(long param_1)

{
  long lStack_28;
  
  func_0x00010b8bc818(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x00010b8b98f8(&lStack_28);
  return param_1;
}



/* Entry: 10b8bc4e8; end: 10b8bc537;  */

long * FUN_10b8bc4e8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < (long *)0x666666666666667) {
    uVar1 = (param_1[2] - *param_1) / 0x28;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x333333333333332 < uVar1) {
      plVar2 = (long *)0x666666666666666;
    }
    return plVar2;
  }
  FUN_10b8bc5bc();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x28) * 0x28;
  FUN_10b8bc664(plVar2,*param_1,param_1[1],lVar3);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 10b8bc538; end: 10b8bc5bb;  */

void FUN_10b8bc538(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x28) * 0x28;
  FUN_10b8bc664(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10b8bc5bc; end: 10b8bc5c7;  */

long * FUN_10b8bc5bc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b8bc614();
  }
  lVar1 = param_4 + param_3 * 0x28;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x28;
  return param_1;
}



/* Entry: 10b8bc5c8; end: 10b8bc637;  */

long * FUN_10b8bc5c8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b8bc614();
  }
  lVar1 = param_4 + param_3 * 0x28;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x28;
  return param_1;
}



/* Entry: 10b8bc638; end: 10b8bc663;  */

void FUN_10b8bc638(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  if (0x666666666666666 < param_2) {
    func_0x000104bfe188();
    for (uVar1 = param_2; uVar1 != param_3; uVar1 = uVar1 + 0x28) {
      func_0x00010b8bc700(param_4,uVar1);
      param_4 = param_4 + 0x28;
    }
    for (; param_2 != param_3; param_2 = param_2 + 0x28) {
      FUN_10b9a8d98(param_2 + 8);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
  return;
}



/* Entry: 10b8bc664; end: 10b8bc6cb;  */

void FUN_10b8bc664(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (lVar1 = param_2; lVar1 != param_3; lVar1 = lVar1 + 0x28) {
    func_0x00010b8bc700(param_4,lVar1);
    param_4 = param_4 + 0x28;
  }
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    FUN_10b9a8d98(param_2 + 8);
  }
  return;
}



/* Entry: 10b8bc6cc; end: 10b8bc77f;  */

void FUN_10b8bc6cc(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    FUN_10b9a8d98(param_2 + 8);
  }
  return;
}



/* Entry: 10b8bc780; end: 10b8bc787;  */

void FUN_10b8bc780(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar2 = *(long *)(param_1 + 0x10), lVar1 != lVar2) {
    *(long *)(param_1 + 0x10) = lVar2 + -0x28;
    FUN_10b9a8d98(lVar2 + -0x20);
  }
  return;
}



/* Entry: 10b8bc788; end: 10b8bc7c3;  */

void FUN_10b8bc788(long param_1,long param_2)

{
  long lVar1;
  
  while (lVar1 = *(long *)(param_1 + 0x10), param_2 != lVar1) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x28;
    FUN_10b9a8d98(lVar1 + -0x20);
  }
  return;
}



/* Entry: 10b8bc7c4; end: 10b8bc7eb;  */

void FUN_10b8bc7c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 10b8bc7ec; end: 10b8bc8fb;  */

long FUN_10b8bc7ec(long param_1)

{
  FUN_10b8bc408(param_1 + 0x18);
  FUN_10b9a8d98(param_1 + 8);
  return param_1;
}



/* Entry: 10b8bc8fc; end: 10b8bc973;  */

void FUN_10b8bc8fc(long *param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        FUN_10b8bc974(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x28;
    }
    __ZdlPv();
    param_1[5] = 0;
    func_0x00010b8bd970();
    *param_1 = extraout_x8;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10b8bc974; end: 10b8bc99b;  */

undefined8 FUN_10b8bc974(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10b8bc408(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b8bc99c; end: 10b8bc9db;  */

void FUN_10b8bc99c(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x00010b8bc9c0(&lStack_18);
  return;
}



/* Entry: 10b8bc9dc; end: 10b8bca63;  */

void FUN_10b8bc9dc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b8bd8a8();
  FUN_10b8bca64();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 == 0) {
    if (*(char *)(unaff_x21 + param_1) == -2) {
      lVar1 = 0;
    }
    else {
      if ((unaff_x22 == 0) || (unaff_x22 - (unaff_x22 >> 3) >> 1 < *(ulong *)(unaff_x19 + 0x10))) {
        FUN_10b8bca94();
      }
      else {
        func_0x00010b8bcb80();
      }
      func_0x00010b8bd950();
      FUN_10b8bca64();
      lVar1 = *(long *)(unaff_x19 + 0x28);
    }
  }
  func_0x00010b8bd83c(lVar1);
  return;
}



/* Entry: 10b8bca64; end: 10b8bca93;  */

ulong FUN_10b8bca64(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b8bca94; end: 10b8bcd03;  */

void FUN_10b8bca94(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *param_1;
  lVar4 = param_1[1];
  lVar6 = param_1[3];
  lVar7 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar2 = lVar7 + param_2 * 0x28;
  __Znwm();
  *param_1 = lVar2;
  param_1[1] = lVar2 + lVar7;
  _memset();
  lVar7 = 0;
  *(undefined1 *)(lVar2 + param_2) = 0xff;
  lVar2 = 6;
  if (param_2 != 7) {
    lVar2 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar2 - param_1[2];
  param_1[3] = param_2;
  for (; lVar6 != lVar7; lVar7 = lVar7 + 1) {
    if (-1 < *(char *)(lVar1 + lVar7)) {
      lVar2 = lVar4;
      FUN_10b8bcd04();
      lVar5 = *param_1;
      lVar3 = lVar5;
      FUN_10b8bca64(lVar5,param_1[3],lVar2);
      *(byte *)(lVar5 + lVar3) = (byte)lVar2 & 0x7f;
      func_0x00010b8bd814();
      FUN_10b8bcd20(extraout_x8 + lVar3 * 0x28,lVar4);
    }
    lVar4 = lVar4 + 0x28;
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b8bcd04; end: 10b8bcd1f;  */

void FUN_10b8bcd04(undefined8 *param_1)

{
  func_0x00010b8bd8c8(param_1,*param_1);
  return;
}



/* Entry: 10b8bcd20; end: 10b8bcd4f;  */

undefined8 FUN_10b8bcd20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  
  *param_1 = *param_2;
  *param_2 = 0;
  FUN_10b8bc7c4(param_1 + 1,param_2 + 1);
  FUN_10b8bc408(param_2 + 1);
  func_0x00010007e5d0(param_2);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b8bcd50; end: 10b8bcd53;  */

void FUN_10b8bcd50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71790;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8bcd54; end: 10b8bcd67;  */

void FUN_10b8bcd54(void)

{
  FUN_10b8bcda4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8bcd68; end: 10b8bcda3;  */

void FUN_10b8bcd68(long param_1)

{
  undefined8 extraout_x8;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x40) = 0;
    func_0x00010b8bd970();
    *(undefined8 *)(param_1 + 0x18) = extraout_x8;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10b8bcda4; end: 10b8bcdb3;  */

void FUN_10b8bcda4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8bcdb4; end: 10b8bcdd7;  */

void FUN_10b8bcdb4(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x00010b8bd0b0(&lStack_18);
  return;
}



/* Entry: 10b8bcdd8; end: 10b8bce5f;  */

void FUN_10b8bcdd8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b8bd8a8();
  FUN_10b8bce60();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 == 0) {
    if (*(char *)(unaff_x21 + param_1) == -2) {
      lVar1 = 0;
    }
    else {
      if ((unaff_x22 == 0) || (unaff_x22 - (unaff_x22 >> 3) >> 1 < *(ulong *)(unaff_x19 + 0x10))) {
        FUN_10b8bce90();
      }
      else {
        FUN_10b8bcf70();
      }
      func_0x00010b8bd950();
      FUN_10b8bce60();
      lVar1 = *(long *)(unaff_x19 + 0x28);
    }
  }
  func_0x00010b8bd83c(lVar1);
  return;
}



/* Entry: 10b8bce60; end: 10b8bce8f;  */

ulong FUN_10b8bce60(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b8bce90; end: 10b8bcf6f;  */

void FUN_10b8bce90(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar6 = param_1[3];
  lVar7 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar7 + param_2 * 8;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar7;
  _memset();
  lVar7 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar6 != lVar7; lVar7 = lVar7 + 1) {
    if (-1 < *(char *)(lVar1 + lVar7)) {
      uVar4 = *(undefined8 *)(lVar2 + lVar7 * 8);
      FUN_10b8bd094();
      lVar5 = *param_1;
      lVar3 = lVar5;
      FUN_10b8bce60(lVar5,param_1[3],uVar4);
      *(byte *)(lVar5 + lVar3) = (byte)uVar4 & 0x7f;
      func_0x00010b8bd814();
      *(undefined8 *)(extraout_x8 + lVar3 * 8) = *(undefined8 *)(lVar2 + lVar7 * 8);
    }
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b8bcf70; end: 10b8bd093;  */

void FUN_10b8bcf70(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  func_0x00010b8bd914();
  for (uVar8 = 0; uVar8 != param_1[3]; uVar8 = uVar8 + 1) {
    if (*(char *)(*param_1 + uVar8) == -2) {
      uVar2 = *(ulong *)(param_1[1] + uVar8 * 8);
      FUN_10b8bd094();
      lVar6 = *param_1;
      uVar7 = param_1[3];
      lVar3 = lVar6;
      FUN_10b8bce60(lVar6,uVar7,uVar2);
      uVar4 = uVar7 & uVar2 >> 7;
      uVar7 = (lVar3 - uVar4 ^ uVar8 - uVar4) & uVar7;
      bVar1 = uVar7 == 7;
      if (uVar7 < 8) {
        *(byte *)(lVar6 + uVar8) = (byte)uVar2 & 0x7f;
        func_0x00010b8bd780();
      }
      else {
        *(byte *)(lVar6 + lVar3) = (byte)uVar2 & 0x7f;
        func_0x00010b8bd7c0();
        if (bVar1) {
          *(undefined8 *)(extraout_x8 + lVar3 * 8) = *(undefined8 *)(extraout_x8 + uVar8 * 8);
          *(undefined1 *)(*param_1 + uVar8) = 0x80;
          func_0x00010b8bd8e8(*param_1);
          *(undefined1 *)(extraout_x8_00 + 1) = 0x80;
        }
        else {
          uVar5 = *(undefined8 *)(extraout_x8 + uVar8 * 8);
          *(undefined8 *)(extraout_x8 + uVar8 * 8) = *(undefined8 *)(extraout_x8 + lVar3 * 8);
          *(undefined8 *)(extraout_x8 + lVar3 * 8) = uVar5;
          uVar8 = uVar8 - 1;
        }
      }
    }
  }
  lVar3 = 6;
  if (uVar8 != 7) {
    lVar3 = uVar8 - (uVar8 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  return;
}



/* Entry: 10b8bd094; end: 10b8bd0cb;  */

void FUN_10b8bd094(undefined8 param_1)

{
  func_0x00010b8bd8c8(param_1,param_1);
  return;
}



/* Entry: 10b8bd0cc; end: 10b8bd0ef;  */

undefined8 FUN_10b8bd0cc(undefined8 param_1)

{
  FUN_10b8bd0f0(param_1,0);
  return param_1;
}



/* Entry: 10b8bd0f0; end: 10b8bd117;  */

void FUN_10b8bd0f0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10b8bc408();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8bd118; end: 10b8bd16b;  */

long FUN_10b8bd118(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10b8bd16c();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b8bd16c; end: 10b8bd20f;  */

bool FUN_10b8bd16c(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar2 = 0;
  uVar5 = param_3 >> 7;
  uVar3 = param_1[3];
  lVar4 = *param_1;
  while( true ) {
    uVar5 = uVar5 & uVar3;
    uVar7 = *(ulong *)(lVar4 + uVar5);
    uVar6 = uVar7 ^ (param_3 & 0x7f) * 0x101010101010101;
    lVar8 = *param_2;
    for (uVar6 = uVar6 + 0xfefefefefefefeff & (uVar6 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar1 = uVar5 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar3;
      *param_4 = uVar1;
      if (*(long *)(param_1[1] + uVar1 * 0x28) == lVar8) goto LAB_10b8bd204;
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar2 = lVar2 + 8;
    uVar5 = lVar2 + uVar5;
  }
LAB_10b8bd204:
  return uVar6 != 0;
}



/* Entry: 10b8bd210; end: 10b8bd22f;  */

void FUN_10b8bd210(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b8bd230(&uStack_11,param_1);
  return;
}



/* Entry: 10b8bd230; end: 10b8bd297;  */

void FUN_10b8bd230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar5 = auStack_40;
  func_0x00010b8bd7a0();
  FUN_10b8bd2b4(auStack_40,1);
  FUN_10b8bd308(lStack_30,param_3);
  lVar6 = lStack_30;
  lStack_30 = 0;
  FUN_10b8bd298(param_1,lVar6 + 0x18);
  FUN_10b8bd56c();
  func_0x00010b8bd76c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8 = puVar5;
  extraout_x8[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_10b8bd298;
    lStack_58 = extraout_x8[1];
    if (lStack_58 != 0) {
      plVar1 = (long *)(lStack_58 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_60 = puVar5;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010b8bd938(puVar2);
    func_0x000107c284e8(&puStack_60);
    return;
  }
  return;
}


