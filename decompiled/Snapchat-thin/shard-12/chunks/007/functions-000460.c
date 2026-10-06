/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10957f928; end: 10957f92f;  */

void FUN_10957f928(void)

{
  return;
}



/* Entry: 10957f930; end: 10957f963;  */

void FUN_10957f930(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110afc658;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10957f964; end: 10957f97f;  */

void FUN_10957f964(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110afc658;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10957f980; end: 10957f993;  */

undefined * FUN_10957f980(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f2e581e;
  func_0x000105688514(&UNK_10f2e581e);
  func_0x000107c31948(param_2,&PTR_DAT_110afc6b8);
  puVar1 = puVar1 + 8;
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 10957f994; end: 10957f9cf;  */

long FUN_10957f994(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afc6b8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10957f9d0; end: 10957f9db;  */

undefined ** FUN_10957f9d0(void)

{
  return &PTR_DAT_110afc6b8;
}



/* Entry: 10957f9dc; end: 10957fa3b;  */

undefined8 * FUN_10957f9dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afc6d8;
  func_0x000107c2ab24(param_1 + 1);
  return param_1;
}



/* Entry: 10957fa3c; end: 10957fdbb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10957fa3c(long *param_1,long *param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined ***pppuVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  int *piVar15;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar16;
  ulong *unaff_x24;
  ulong *puVar17;
  ulong *unaff_x27;
  long unaff_x28;
  long lVar18;
  undefined *puStack_398;
  undefined ***pppuStack_390;
  uint uStack_388;
  long *plStack_380;
  long *plStack_378;
  long *plStack_370;
  long lStack_368;
  ulong uStack_360;
  long lStack_358;
  long lStack_350;
  ulong *puStack_340;
  long *plStack_330;
  int *piStack_328;
  int *piStack_320;
  undefined1 **ppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  long *plStack_2f8;
  undefined8 uStack_2f0;
  long *plStack_2e8;
  undefined **ppuStack_2d8;
  long *plStack_2d0;
  long alStack_2c8 [3];
  long *plStack_2b0;
  undefined **ppuStack_2a8;
  undefined8 uStack_2a0;
  undefined ***pppuStack_290;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  ulong *puStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long *plStack_f8;
  long alStack_f0 [3];
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long alStack_c0 [3];
  long *plStack_a8;
  undefined4 auStack_a0 [2];
  long *plStack_98;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar9 = *(int *)(((long *)param_2[1])[0xc] + (long)(int)*param_2 * 4);
  lVar12 = *(long *)param_2[1];
  plStack_138 = param_1;
  plVar10 = param_2;
  if (*(long *)(lVar12 + (long)iVar9 * 0x50 + 0x40) != 0) {
    unaff_x21 = alStack_90;
    unaff_x22 = alStack_c0;
    unaff_x27 = &uStack_118;
    do {
      unaff_x20 = param_1;
      if (*(long *)(lVar12 + (long)iVar9 * 0x50 + 0x90) == 0) break;
      FUN_109572f9c(&lStack_100,param_2);
      plVar16 = &lStack_100;
      FUN_109570a30();
      FUN_1095659c8(auStack_a0,
                    *(long *)param_2[1] +
                    (long)*(int *)(((long *)param_2[1])[0xc] + (long)(int)*param_2 * 4) * 0x50 +
                    0x50);
      lStack_d0 = 0;
      plStack_c8 = (long *)0x0;
      plStack_a8 = (long *)0x0;
      func_0x0001095707b8(&lStack_d0,auStack_a0);
      func_0x000105687250(unaff_x22,unaff_x21);
      if (plStack_78 == unaff_x21) {
        lVar12 = 0x20;
LAB_10957fb38:
        (**(code **)(*plStack_78 + lVar12))();
      }
      else if (plStack_78 != (long *)0x0) {
        lVar12 = 0x28;
        goto LAB_10957fb38;
      }
      plVar10 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar6 = plStack_98 + 1;
        do {
          lVar12 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      if (lStack_d0 == 0) {
LAB_10957fd48:
        func_0x000105688514(&UNK_10f5742a5);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10957fd58);
        (*pcVar5)();
      }
      lVar12 = lStack_d0;
      FUN_10951f7ec();
      if (lVar12 == 0) {
        if ((lStack_d0 == 0) || (lVar12 = lStack_d0, FUN_1095802e4(), lVar12 == 0))
        goto LAB_10957fd48;
        plVar10 = &lStack_d0;
        FUN_10958032c();
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        if ((int)plVar10[1] != 0) {
          func_0x000107c303c4(&uStack_118);
        }
      }
      else {
        plVar10 = &lStack_d0;
        func_0x000105683010();
        FUN_109580010(&uStack_118);
      }
      if (plStack_a8 == unaff_x22) {
        lVar12 = 0x20;
LAB_10957fbf4:
        (**(code **)(*plStack_a8 + lVar12))();
      }
      else if (plStack_a8 != (long *)0x0) {
        lVar12 = 0x28;
        goto LAB_10957fbf4;
      }
      plVar6 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar7 = plStack_c8 + 1;
        do {
          lVar12 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      unaff_x24 = unaff_x27;
      if ((uStack_118 & 1) != 0) {
        unaff_x24 = (ulong *)(uStack_118 + 7);
      }
      if ((int)uStack_110 != 0) {
        unaff_x28 = (long)(int)uStack_110 << 3;
        puVar17 = unaff_x24;
        do {
          unaff_x24 = puVar17 + 1;
          auStack_a0[0] = *(undefined4 *)(*puVar17 + 0x18);
          plVar6 = param_1 + 1;
          plVar10 = (long *)auStack_a0;
          FUN_1091963a0();
          if (plVar6 != (long *)0x0) {
            FUN_10957fdbc(param_2);
            plVar10 = plVar16;
            break;
          }
          unaff_x28 = unaff_x28 + -8;
          puVar17 = unaff_x24;
        } while (unaff_x28 != 0);
      }
      FUN_1093502c4(&uStack_118);
      plStack_138 = plStack_d8;
      if (plStack_d8 == alStack_f0) {
        lVar12 = 0x20;
LAB_10957fcac:
        (**(code **)(*plStack_d8 + lVar12))();
      }
      else if (plStack_d8 != (long *)0x0) {
        lVar12 = 0x28;
        goto LAB_10957fcac;
      }
      plVar16 = plStack_f8;
      if (plStack_f8 != (long *)0x0) {
        plVar6 = plStack_f8 + 1;
        do {
          lVar12 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plStack_138 = plVar16;
        }
      }
      iVar9 = *(int *)(((long *)param_2[1])[0xc] + (long)(int)*param_2 * 4);
      lVar12 = *(long *)param_2[1];
    } while (*(long *)(lVar12 + (long)iVar9 * 0x50 + 0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_1093502c4(&uStack_118);
  FUN_10957342c(&lStack_100);
  plVar16 = plStack_138;
  __Unwind_Resume();
  pcStack_128 = FUN_10957fdbc;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_160 = unaff_x28;
  puStack_158 = unaff_x27;
  plStack_150 = unaff_x22;
  plStack_148 = unaff_x21;
  plStack_140 = unaff_x20;
  puStack_130 = &stack0xfffffffffffffff0;
  FUN_10951f4a8(&ppuStack_2a8);
  lStack_178 = plVar10[0x26];
  lStack_180 = plVar10[0x25];
  lStack_170 = plVar10[0x27];
  FUN_10951f008(&uStack_2f0,&uStack_300,&ppuStack_2a8);
  FUN_10951f294(&ppuStack_2a8);
  uStack_2a0 = uStack_2f0;
  plStack_2f8 = plStack_2e8;
  uStack_300 = uStack_2f0;
  uStack_2f0 = 0;
  plStack_2e8 = (long *)0x0;
  ppuStack_2a8 = &PTR_FUN_110afc760;
  pppuVar8 = &ppuStack_2a8;
  pppuStack_290 = &ppuStack_2a8;
  FUN_109567d5c(&ppuStack_2d8,&uStack_300);
  if (pppuStack_290 == &ppuStack_2a8) {
    lVar12 = 0x20;
LAB_10957fe78:
    (**(code **)((long)*pppuStack_290 + lVar12))();
  }
  else if (pppuStack_290 != (undefined ***)0x0) {
    lVar12 = 0x28;
    goto LAB_10957fe78;
  }
  plVar10 = plStack_2f8;
  if (plStack_2f8 != (long *)0x0) {
    plVar6 = plStack_2f8 + 1;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_2e8;
  if (plStack_2e8 != (long *)0x0) {
    plVar6 = plStack_2e8 + 1;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_2e8 + 0x10))(plStack_2e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = (long *)(*(long *)(plVar16[1] + 0x78) + (long)(int)*plVar16 * 0x18);
  piVar15 = (int *)*plVar10;
  piVar1 = (int *)plVar10[1];
  if (piVar15 != piVar1) {
    unaff_x22 = (long *)0x50;
    do {
      if (*piVar15 == 0) {
        pppuVar8 = &ppuStack_2d8;
        func_0x000109566260(*(long *)plVar16[1] + (long)piVar15[1] * 0x50 + 0x18);
      }
      piVar15 = piVar15 + 2;
    } while (piVar15 != piVar1);
  }
  if (plStack_2b0 == alStack_2c8) {
    lVar12 = 0x20;
  }
  else {
    if (plStack_2b0 == (long *)0x0) goto LAB_10957ff78;
    lVar12 = 0x28;
  }
  (**(code **)(*plStack_2b0 + lVar12))();
LAB_10957ff78:
  plVar10 = plStack_2b0;
  if (plStack_2d0 != (long *)0x0) {
    plVar16 = plStack_2d0 + 1;
    do {
      lVar12 = *plVar16;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_2d0 + 0x10))(plStack_2d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar10 = plStack_2d0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
    ___stack_chk_fail();
    FUN_10951f294(&ppuStack_2a8);
    __Unwind_Resume();
    pcStack_308 = FUN_109580010;
    uVar2 = *(uint *)pppuVar8;
    plStack_378 = (long *)0x0;
    plStack_370 = (long *)0x0;
    plStack_380 = (long *)0x0;
    puStack_340 = unaff_x24;
    plStack_330 = unaff_x22;
    piStack_328 = piVar1;
    piStack_320 = piVar15;
    ppuStack_310 = &puStack_130;
    if (uVar2 != 0) {
      plVar16 = (long *)((ulong)uVar2 * 0x28);
      plVar6 = plVar16;
      __Znwm();
      plStack_370 = plVar6 + (ulong)uVar2 * 5;
      plVar7 = plVar6 + 2;
      do {
        plVar7[-2] = (long)&PTR_FUN_110af0d50;
        plVar7[-1] = 0;
        *(undefined4 *)(plVar7 + 2) = 0;
        *plVar7 = (long)&DAT_11383d918;
        plVar7[1] = 0;
        plVar16 = plVar16 + -5;
        plVar7 = plVar7 + 5;
        plStack_380 = plVar6;
      } while (plVar16 != (long *)0x0);
    }
    uVar2 = *(uint *)((long)pppuVar8 + 0xc);
    pppuStack_390 = pppuVar8;
    plStack_378 = plStack_370;
    if (uVar2 != *(uint *)((long)pppuVar8 + 4)) {
      puStack_398 = pppuVar8[2][uVar2];
      if (((ulong)puStack_398 & 1) != 0) {
        puStack_398 = *(undefined **)(**(long **)(puStack_398 + -1) + 0x20);
      }
      plVar16 = plStack_380;
      uStack_388 = uVar2;
      do {
        FUN_109349df0(&lStack_368,0,puStack_398 + 0x10);
        if (plVar16 != &lStack_368) {
          uVar11 = plVar16[1];
          uVar13 = uVar11;
          if ((uVar11 & 1) != 0) {
            uVar13 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
          }
          uVar14 = uStack_360;
          if ((uStack_360 & 1) != 0) {
            uVar14 = *(ulong *)(uStack_360 & 0xfffffffffffffffe);
          }
          if (uVar13 == uVar14) {
            lVar12 = plVar16[2];
            plVar16[1] = uStack_360;
            plVar16[2] = lStack_358;
            lVar18 = plVar16[3];
            plVar16[3] = lStack_350;
            uStack_360 = uVar11;
            lStack_358 = lVar12;
            lStack_350 = lVar18;
          }
          else {
            func_0x000109349ec8(plVar16);
            FUN_10934a194(plVar16,&lStack_368);
          }
        }
        FUN_109349e70(&lStack_368);
        func_0x000107c27d54(&puStack_398);
        plVar16 = plVar16 + 5;
      } while (puStack_398 != (undefined *)0x0);
    }
    plVar6 = plStack_378;
    plVar16 = plStack_380;
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[2] = 0;
    if (0 < (int)((ulong)((long)plStack_378 - (long)plStack_380) >> 3) * -0x33333333 + -1) {
      func_0x000107c303a8(plVar10);
    }
    for (; plVar16 != plVar6; plVar16 = plVar16 + 5) {
      plVar7 = plVar10;
      func_0x000107c303b0(plVar10,FUN_10934a22c);
      if (plVar16 != plVar7) {
        func_0x000109349ec8(plVar7);
        FUN_10934a194(plVar7,plVar16);
      }
    }
    func_0x000109580288(&plStack_380);
    return;
  }
  return;
}



/* Entry: 10957fdbc; end: 10958000f;  */

void FUN_10957fdbc(int *param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined ***pppuVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined *puStack_278;
  undefined ***pppuStack_270;
  uint uStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long lStack_248;
  ulong uStack_240;
  long lStack_238;
  long lStack_230;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  undefined **ppuStack_1b8;
  long *plStack_1b0;
  long alStack_1a8 [3];
  long *plStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined ***pppuStack_170;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10951f4a8(&ppuStack_188);
  uStack_58 = *(undefined8 *)(param_2 + 0x130);
  uStack_60 = *(undefined8 *)(param_2 + 0x128);
  uStack_50 = *(undefined8 *)(param_2 + 0x138);
  FUN_10951f008(&uStack_1d0,&uStack_1e0,&ppuStack_188);
  FUN_10951f294(&ppuStack_188);
  uStack_180 = uStack_1d0;
  plStack_1d8 = plStack_1c8;
  uStack_1e0 = uStack_1d0;
  uStack_1d0 = 0;
  plStack_1c8 = (long *)0x0;
  ppuStack_188 = &PTR_FUN_110afc760;
  pppuVar9 = &ppuStack_188;
  pppuStack_170 = &ppuStack_188;
  FUN_109567d5c(&ppuStack_1b8,&uStack_1e0);
  if (pppuStack_170 == &ppuStack_188) {
    lVar10 = 0x20;
LAB_10957fe78:
    (**(code **)((long)*pppuStack_170 + lVar10))();
  }
  else if (pppuStack_170 != (undefined ***)0x0) {
    lVar10 = 0x28;
    goto LAB_10957fe78;
  }
  plVar6 = plStack_1d8;
  if (plStack_1d8 != (long *)0x0) {
    plVar15 = plStack_1d8 + 1;
    do {
      lVar10 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_1c8;
  if (plStack_1c8 != (long *)0x0) {
    plVar15 = plStack_1c8 + 1;
    do {
      lVar10 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  puVar11 = (undefined8 *)(*(long *)(*(long *)(param_1 + 2) + 0x78) + (long)*param_1 * 0x18);
  piVar2 = (int *)puVar11[1];
  for (piVar1 = (int *)*puVar11; piVar1 != piVar2; piVar1 = piVar1 + 2) {
    if (*piVar1 == 0) {
      pppuVar9 = &ppuStack_1b8;
      func_0x000109566260(**(long **)(param_1 + 2) + (long)piVar1[1] * 0x50 + 0x18);
    }
  }
  if (plStack_190 == alStack_1a8) {
    lVar10 = 0x20;
  }
  else {
    if (plStack_190 == (long *)0x0) goto LAB_10957ff78;
    lVar10 = 0x28;
  }
  (**(code **)(*plStack_190 + lVar10))();
LAB_10957ff78:
  plVar6 = plStack_190;
  if (plStack_1b0 != (long *)0x0) {
    plVar15 = plStack_1b0 + 1;
    do {
      lVar10 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plStack_1b0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10951f294(&ppuStack_188);
    __Unwind_Resume();
    uVar3 = *(uint *)pppuVar9;
    plStack_258 = (long *)0x0;
    plStack_250 = (long *)0x0;
    plStack_260 = (long *)0x0;
    if (uVar3 != 0) {
      plVar15 = (long *)((ulong)uVar3 * 0x28);
      plVar7 = plVar15;
      __Znwm();
      plStack_250 = plVar7 + (ulong)uVar3 * 5;
      plVar8 = plVar7 + 2;
      do {
        plVar8[-2] = (long)&PTR_FUN_110af0d50;
        plVar8[-1] = 0;
        *(undefined4 *)(plVar8 + 2) = 0;
        *plVar8 = (long)&DAT_11383d918;
        plVar8[1] = 0;
        plVar15 = plVar15 + -5;
        plVar8 = plVar8 + 5;
        plStack_260 = plVar7;
      } while (plVar15 != (long *)0x0);
    }
    uVar3 = *(uint *)((long)pppuVar9 + 0xc);
    pppuStack_270 = pppuVar9;
    plStack_258 = plStack_250;
    if (uVar3 != *(uint *)((long)pppuVar9 + 4)) {
      puStack_278 = pppuVar9[2][uVar3];
      if (((ulong)puStack_278 & 1) != 0) {
        puStack_278 = *(undefined **)(**(long **)(puStack_278 + -1) + 0x20);
      }
      plVar15 = plStack_260;
      uStack_268 = uVar3;
      do {
        FUN_109349df0(&lStack_248,0,puStack_278 + 0x10);
        if (plVar15 != &lStack_248) {
          uVar12 = plVar15[1];
          uVar13 = uVar12;
          if ((uVar12 & 1) != 0) {
            uVar13 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
          }
          uVar14 = uStack_240;
          if ((uStack_240 & 1) != 0) {
            uVar14 = *(ulong *)(uStack_240 & 0xfffffffffffffffe);
          }
          if (uVar13 == uVar14) {
            lVar10 = plVar15[2];
            plVar15[1] = uStack_240;
            plVar15[2] = lStack_238;
            lVar16 = plVar15[3];
            plVar15[3] = lStack_230;
            uStack_240 = uVar12;
            lStack_238 = lVar10;
            lStack_230 = lVar16;
          }
          else {
            func_0x000109349ec8(plVar15);
            FUN_10934a194(plVar15,&lStack_248);
          }
        }
        FUN_109349e70(&lStack_248);
        func_0x000107c27d54(&puStack_278);
        plVar15 = plVar15 + 5;
      } while (puStack_278 != (undefined *)0x0);
    }
    plVar7 = plStack_258;
    plVar15 = plStack_260;
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = 0;
    if (0 < (int)((ulong)((long)plStack_258 - (long)plStack_260) >> 3) * -0x33333333 + -1) {
      func_0x000107c303a8(plVar6);
    }
    for (; plVar15 != plVar7; plVar15 = plVar15 + 5) {
      plVar8 = plVar6;
      func_0x000107c303b0(plVar6,FUN_10934a22c);
      if (plVar15 != plVar8) {
        func_0x000109349ec8(plVar8);
        FUN_10934a194(plVar8,plVar15);
      }
    }
    func_0x000109580288(&plStack_260);
    return;
  }
  return;
}



/* Entry: 109580010; end: 10958023b;  */

void FUN_109580010(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uStack_98;
  uint *puStack_90;
  uint uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *param_2;
  puStack_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  puStack_80 = (undefined8 *)0x0;
  if (uVar1 != 0) {
    puVar8 = (undefined8 *)((ulong)uVar1 * 0x28);
    puVar2 = puVar8;
    __Znwm();
    puStack_70 = puVar2 + (ulong)uVar1 * 5;
    puVar3 = puVar2 + 2;
    do {
      puVar3[-2] = &PTR_FUN_110af0d50;
      puVar3[-1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0;
      *puVar3 = &DAT_11383d918;
      puVar3[1] = 0;
      puVar8 = puVar8 + -5;
      puVar3 = puVar3 + 5;
      puStack_80 = puVar2;
    } while (puVar8 != (undefined8 *)0x0);
  }
  uVar1 = param_2[3];
  puStack_90 = param_2;
  puStack_78 = puStack_70;
  if (uVar1 != param_2[1]) {
    uStack_98 = *(ulong *)(*(long *)(param_2 + 4) + (ulong)uVar1 * 8);
    if ((uStack_98 & 1) != 0) {
      uStack_98 = *(ulong *)(**(long **)(uStack_98 - 1) + 0x20);
    }
    puVar8 = puStack_80;
    uStack_88 = uVar1;
    do {
      FUN_109349df0(&uStack_68,0,uStack_98 + 0x10);
      if (puVar8 != &uStack_68) {
        uVar4 = puVar8[1];
        uVar5 = uVar4;
        if ((uVar4 & 1) != 0) {
          uVar5 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
        }
        uVar6 = uStack_60;
        if ((uStack_60 & 1) != 0) {
          uVar6 = *(ulong *)(uStack_60 & 0xfffffffffffffffe);
        }
        if (uVar5 == uVar6) {
          uVar7 = puVar8[2];
          puVar8[1] = uStack_60;
          puVar8[2] = uStack_58;
          uVar9 = puVar8[3];
          puVar8[3] = uStack_50;
          uStack_60 = uVar4;
          uStack_58 = uVar7;
          uStack_50 = uVar9;
        }
        else {
          func_0x000109349ec8(puVar8);
          FUN_10934a194(puVar8,&uStack_68);
        }
      }
      FUN_109349e70(&uStack_68);
      func_0x000107c27d54(&uStack_98);
      puVar8 = puVar8 + 5;
    } while (uStack_98 != 0);
  }
  puVar2 = puStack_78;
  puVar8 = puStack_80;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (0 < (int)((ulong)((long)puStack_78 - (long)puStack_80) >> 3) * -0x33333333 + -1) {
    func_0x000107c303a8(param_1);
  }
  for (; puVar8 != puVar2; puVar8 = puVar8 + 5) {
    puVar3 = param_1;
    func_0x000107c303b0(param_1,FUN_10934a22c);
    if (puVar8 != puVar3) {
      func_0x000109349ec8(puVar3);
      FUN_10934a194(puVar3,puVar8);
    }
  }
  func_0x000109580288(&puStack_80);
  return;
}



/* Entry: 10958023c; end: 1095802e3;  */

long FUN_10958023c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)(param_1 + 0x10)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto SUB_10951ea70;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
SUB_10951ea70:
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 1095802e4; end: 10958032b;  */

void FUN_1095802e4(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && ((code *)*param_1 != (code *)0x0)) {
    (*(code *)*param_1)(3,param_1,0,&PTR_DAT_110afc728,&UNK_10dfd395c);
  }
  return;
}



/* Entry: 10958032c; end: 1095803c7;  */

void FUN_10958032c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar2 = *param_1;
  FUN_1095802e4();
  if (lVar2 != 0) {
    return;
  }
  func_0x000107c31940(auStack_50,&UNK_10f2e5846);
  lVar2 = *param_1;
  FUN_10951f6fc();
  FUN_109259240(auStack_38,auStack_50,*(ulong *)(lVar2 + 8) & 0x7fffffffffffffff);
  func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109580394);
  (*pcVar1)();
}



/* Entry: 1095803c8; end: 1095803cf;  */

void FUN_1095803c8(void)

{
  return;
}



/* Entry: 1095803d0; end: 109580403;  */

void FUN_1095803d0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110afc760;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109580404; end: 10958041f;  */

void FUN_109580404(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110afc760;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109580420; end: 109580433;  */

undefined * FUN_109580420(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f2e581e;
  func_0x000105688514(&UNK_10f2e581e);
  func_0x000107c31948(param_2,&PTR_DAT_110afc7c0);
  puVar1 = puVar1 + 8;
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 109580434; end: 10958046f;  */

long FUN_109580434(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afc7c0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109580470; end: 109580483;  */

undefined ** FUN_109580470(void)

{
  return &PTR_DAT_110afc7c0;
}



/* Entry: 109580484; end: 1095814b3;  */

/* WARNING: Removing unreachable block (ram,0x000109581300) */

long * FUN_109580484(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  int *piVar8;
  undefined ***pppuVar9;
  undefined8 *puVar10;
  long *plVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  char *pcVar18;
  undefined8 *puVar19;
  long *plVar20;
  char *pcVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined *puVar25;
  ulong uVar26;
  long lVar27;
  undefined4 uStack_4b4;
  long *plStack_490;
  long *plStack_488;
  undefined8 uStack_480;
  undefined4 auStack_478 [2];
  long *plStack_470;
  long *plStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long *plStack_450;
  long lStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_420;
  long lStack_418;
  undefined1 *puStack_410;
  undefined1 auStack_408 [20];
  undefined4 uStack_3f4;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  long *plStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined **ppuStack_3c0;
  long *plStack_3b8;
  long alStack_3b0 [3];
  long *plStack_398;
  undefined8 *puStack_388;
  long *plStack_380;
  long alStack_378 [3];
  long *plStack_360;
  long *plStack_358;
  long *plStack_350;
  long *plStack_348;
  undefined8 uStack_340;
  undefined1 auStack_338 [8];
  long **pplStack_330;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long lStack_b8;
  long **pplStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar16 = *(int *)(((long *)param_2[1])[0xc] + (long)(int)*param_2 * 4);
  lVar14 = *(long *)param_2[1];
  if (*(long *)(lVar14 + (long)iVar16 * 0x50 + 0x40) == 0) {
LAB_10958111c:
    uStack_f0 = (undefined **)CONCAT44(uStack_f0._4_4_,4);
    FUN_109581500(param_2,&UNK_10dfd3a98);
    func_0x000105682f00(&plStack_358,&uStack_f0);
    puVar19 = (undefined8 *)(*(long *)(param_2[1] + 0x78) + (long)(int)*param_2 * 0x18);
    piVar1 = (int *)puVar19[1];
    for (piVar8 = (int *)*puVar19; piVar8 != piVar1; piVar8 = piVar8 + 2) {
      if (*piVar8 == 1) {
        func_0x000109566260(*(long *)param_2[1] + (long)piVar8[1] * 0x50 + 0x18,&plStack_358);
      }
    }
    if (pplStack_330 == &plStack_348) {
      lVar14 = 0x20;
LAB_1095811bc:
      (**(code **)((long)*pplStack_330 + lVar14))();
    }
    else if (pplStack_330 != (long **)0x0) {
      lVar14 = 0x28;
      goto LAB_1095811bc;
    }
    plVar11 = plStack_350;
    if (plStack_350 != (long *)0x0) {
      plVar20 = plStack_350 + 1;
      do {
        lVar14 = *plVar20;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar7) {
          *plVar20 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_350 + 0x10))(plStack_350);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    FUN_109581738(param_2,&UNK_10dfd3a70);
    param_1 = param_2;
  }
  else {
    bVar7 = false;
    puVar19 = (undefined8 *)((ulong)&uStack_f0 | 4);
    do {
      if ((*(long *)(lVar14 + (long)iVar16 * 0x50 + 0x90) == 0) &&
         (*(long *)(lVar14 + (long)iVar16 * 0x50 + 0xe0) == 0)) break;
      FUN_1095659c8(&plStack_358,lVar14 + (long)iVar16 * 0x50);
      puStack_388 = (undefined8 *)0x0;
      plStack_380 = (long *)0x0;
      plStack_360 = (long *)0x0;
      func_0x0001095707b8(&puStack_388,&plStack_358);
      func_0x000105687250(alStack_378,&plStack_348);
      if (pplStack_330 == &plStack_348) {
        lVar14 = 0x20;
LAB_1095805b8:
        (**(code **)((long)*pplStack_330 + lVar14))();
      }
      else if (pplStack_330 != (long **)0x0) {
        lVar14 = 0x28;
        goto LAB_1095805b8;
      }
      plVar11 = plStack_350;
      if (plStack_350 != (long *)0x0) {
        plVar20 = plStack_350 + 1;
        do {
          lVar14 = *plVar20;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar3) {
            *plVar20 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_350 + 0x10))(plStack_350);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      if ((puStack_388 == (undefined8 *)0x0) || ((code *)*puStack_388 == (code *)0x0)) {
LAB_10958124c:
        func_0x000107c31940(&uStack_f0,&UNK_10f2e5846);
        puVar19 = puStack_388;
        FUN_10951f6fc();
        FUN_109259240(&plStack_358,&uStack_f0,puVar19[1] & 0x7fffffffffffffff);
        func_0x000105687ee0(&plStack_358);
LAB_1095812d4:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1095812d8);
        (*pcVar6)();
      }
      piVar8 = (int *)0x3;
      (*(code *)*puStack_388)(3,puStack_388,0,&PTR_DAT_110afc820,&UNK_10dfd3a90);
      if (piVar8 == (int *)0x0) goto LAB_10958124c;
      iVar16 = *piVar8;
      ppuStack_3c0 = (undefined **)0x0;
      plStack_3b8 = (long *)0x0;
      plStack_398 = (long *)0x0;
      if (iVar16 == 1) {
        FUN_1095659c8(&plStack_358,
                      *(long *)param_2[1] +
                      (long)*(int *)(((long *)param_2[1])[0xc] + (long)(int)*param_2 * 4) * 0x50 +
                      0x50);
        FUN_1095818c4(&uStack_f0,&plStack_358);
        if (pplStack_330 == &plStack_348) {
          lVar14 = 0x20;
LAB_10958078c:
          (**(code **)((long)*pplStack_330 + lVar14))();
        }
        else if (pplStack_330 != (long **)0x0) {
          lVar14 = 0x28;
          goto LAB_10958078c;
        }
        plVar11 = plStack_350;
        if (plStack_350 != (long *)0x0) {
          plVar20 = plStack_350 + 1;
          do {
            lVar14 = *plVar20;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar3) {
              *plVar20 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_350 + 0x10))(plStack_350);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        plVar20 = plStack_e8;
        ppuStack_3c0 = uStack_f0;
        plVar11 = plStack_3b8;
        uStack_f0 = (undefined **)0x0;
        plStack_e8 = (long *)0x0;
        plStack_3b8 = plVar20;
        if (plVar11 != (long *)0x0) {
          plVar20 = plVar11 + 1;
          do {
            lVar14 = *plVar20;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar3) {
              *plVar20 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        func_0x00010951eac8(alStack_3b0,&uStack_e0);
        if (plStack_c8 == &uStack_e0) {
          lVar14 = 0x20;
LAB_109580898:
          (**(code **)(*plStack_c8 + lVar14))();
        }
        else if (plStack_c8 != (long *)0x0) {
          lVar14 = 0x28;
          goto LAB_109580898;
        }
        plVar11 = plStack_e8;
        if (plStack_e8 != (long *)0x0) {
          plVar20 = plStack_e8 + 1;
          do {
            lVar14 = *plVar20;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar3) {
              *plVar20 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        uStack_4b4 = 0;
        if (bVar7) goto LAB_10958088c;
LAB_1095808e4:
        pppuVar9 = &ppuStack_3c0;
        func_0x0001056853dc();
        lVar14 = (long)pppuVar9[1] - (long)*pppuVar9;
        if (lVar14 != 0x38) {
          __ZNSt3__19to_stringEm(&uStack_458,(lVar14 >> 3) * 0x6db6db6db6db6db7);
          FUN_10928a5e0(&uStack_f0,&UNK_10f574309,&uStack_458);
          FUN_109259240(&plStack_358,&uStack_f0,&UNK_10f57432f);
          func_0x000105687ee0(&plStack_358);
          goto LAB_1095812d4;
        }
        puVar25 = **pppuVar9;
        lStack_3f0 = 0;
        lStack_3e8 = 0;
        uStack_3e0 = 0;
        iVar12 = 0x12;
        if (iVar16 != 1) {
          iVar12 = 0x13;
        }
        FUN_109a8261c(&plStack_358,0x14,0x14,0);
        uStack_f0 = (undefined **)CONCAT44(uStack_f0._4_4_,0x42ff0000);
        *(undefined8 *)((long)puVar19 + 0x34) = 0;
        *(undefined8 *)((long)puVar19 + 0x2c) = 0;
        puVar19[3] = 0;
        puVar19[2] = 0;
        puVar19[5] = 0;
        puVar19[4] = 0;
        puVar19[1] = 0;
        *puVar19 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        pplStack_b0 = &plStack_e8;
        puStack_a8 = &uStack_a0;
        (**(code **)(*plStack_358 + 0x18))(plStack_358,&plStack_358,&uStack_f0,0xffffffff);
        FUN_10918eb6c(&plStack_358);
        lVar14 = 0;
        do {
          *(char *)(CONCAT17(uStack_e0._7_1_,(undefined7)uStack_e0) + lVar14) =
               -(0.5 < *(float *)(puVar25 + lVar14 * 4));
          lVar14 = lVar14 + 1;
        } while (lVar14 != 400);
        iVar4 = (0x14U - iVar12) - (0x14U - iVar12 >> 1);
        plStack_3d8 = (long *)CONCAT44(iVar4 + iVar12,iVar4);
        puVar10 = &uStack_458;
        plStack_358 = plStack_3d8;
        FUN_109a84930(puVar10,&uStack_f0,&plStack_358,&plStack_3d8);
        if (lStack_b8 != 0) {
          piVar8 = (int *)(lStack_b8 + 0x14);
          do {
            iVar12 = *piVar8;
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar7) {
              *piVar8 = iVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar12 + -1 == 0) {
            puVar10 = &uStack_f0;
            func_0x000109a848d4();
          }
        }
        lStack_b8 = 0;
        plStack_d8 = (long *)0x0;
        uStack_e0._7_1_ = 0;
        uStack_e0._0_7_ = 0;
        plStack_c8 = (long *)0x0;
        uStack_d0 = 0;
        if (0 < uStack_f0._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)((long)pplStack_b0 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_f0._4_4_);
        }
        if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
          puVar10 = (undefined8 *)puStack_a8[-1];
          _free();
        }
        if (iVar16 == 1) {
          FUN_109593f58();
        }
        else {
          FUN_109594160();
        }
        plStack_358 = (long *)CONCAT71(plStack_358._1_7_,*(undefined1 *)puVar10);
        plStack_348 = (long *)0x0;
        uStack_340 = 0;
        plStack_350 = (long *)0x0;
        FUN_1092bfde0(&plStack_350,puVar10[1],puVar10[2],puVar10[2] - puVar10[1]);
        _memcpy(auStack_338,puVar10 + 4,0x211);
        lStack_118 = 0;
        uStack_110 = 0;
        lStack_120 = 0;
        lVar27 = puVar10[0x47];
        lVar14 = puVar10[0x48] - lVar27;
        if (lVar14 != 0) {
          func_0x000109581958(&lStack_120,(lVar14 >> 1) * -0x5555555555555555);
          lVar5 = lStack_118;
          _memmove(lStack_118,lVar27,lVar14);
          lStack_118 = lVar5 + lVar14;
        }
        uStack_f0 = (undefined **)CONCAT44(uStack_f0._4_4_,0x42ff0000);
        puVar19[1] = 0;
        *puVar19 = 0;
        puVar19[3] = 0;
        puVar19[2] = 0;
        puVar19[5] = 0;
        puVar19[4] = 0;
        *(undefined8 *)((long)puVar19 + 0x34) = 0;
        *(undefined8 *)((long)puVar19 + 0x2c) = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,0x2010000);
        uStack_3c8 = 0;
        plStack_3d0 = &uStack_f0;
        pplStack_b0 = &plStack_e8;
        puStack_a8 = &uStack_a0;
        FUN_109a479a0(&uStack_458,&plStack_3d8);
        cVar2 = (char)plStack_358;
        uVar26 = (ulong)plStack_358 & 0xff;
        plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
        func_0x0001074b2d2c(&plStack_470,auStack_338[0],&plStack_3d8);
        if (cVar2 != '\0') {
          uVar15 = 0;
          uVar17 = 0;
          pcVar21 = (char *)CONCAT17(uStack_e0._7_1_,(undefined7)uStack_e0);
          plVar11 = plStack_350;
          uVar22 = uVar26;
          plVar20 = plStack_350;
          pcVar18 = pcVar21;
          do {
            do {
              if ((char)*plVar11 != '\0') {
                uVar23 = uVar17 >> 6;
                uVar24 = 1L << (uVar17 & 0x3f);
                if (*pcVar21 == '\0') {
                  uVar24 = plStack_470[uVar23] & (uVar24 ^ 0xffffffffffffffff);
                }
                else {
                  uVar24 = plStack_470[uVar23] | uVar24;
                }
                uVar17 = uVar17 + 1;
                plStack_470[uVar23] = uVar24;
              }
              pcVar21 = pcVar21 + 1;
              uVar22 = uVar22 - 1;
              plVar11 = (long *)((long)plVar11 + 1);
            } while (uVar22 != 0);
            uVar15 = uVar15 + 1;
            pcVar21 = pcVar18 + uVar26;
            plVar11 = (long *)((long)plVar20 + uVar26);
            uVar22 = uVar26;
            plVar20 = plVar11;
            pcVar18 = pcVar21;
          } while (uVar15 != uVar26);
        }
        FUN_1095943dc(&plStack_358,&plStack_470,&uStack_3f4,&lStack_3f0);
        if (lStack_3f0 == lStack_3e8) {
          uVar13 = 0;
          do {
            uStack_3c8 = 0;
            plStack_3d8._0_4_ = 0x1010000;
            uStack_108._0_4_ = 0x2010000;
            uStack_f8 = 0;
            plStack_3d0 = &uStack_f0;
            plStack_100 = &uStack_f0;
            FUN_109a895d0(&plStack_3d8,&uStack_108);
            uStack_3c8 = 0;
            plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,0x1010000);
            uStack_108 = CONCAT44(uStack_108._4_4_,0x2010000);
            uStack_f8 = 0;
            plStack_3d0 = &uStack_f0;
            plStack_100 = &uStack_f0;
            FUN_109a491e0(&plStack_3d8,&uStack_108,0);
            cVar2 = (char)plStack_358;
            uVar26 = (ulong)plStack_358 & 0xff;
            uStack_108 = uStack_108 & 0xffffffffffffff00;
            func_0x0001074b2d2c(&plStack_3d8,auStack_338[0],&uStack_108);
            if (cVar2 != '\0') {
              uVar15 = 0;
              uVar17 = 0;
              pcVar21 = (char *)CONCAT17(uStack_e0._7_1_,(undefined7)uStack_e0);
              plVar11 = plStack_350;
              uVar22 = uVar26;
              plVar20 = plStack_350;
              pcVar18 = pcVar21;
              do {
                do {
                  if ((char)*plVar11 != '\0') {
                    uVar23 = uVar17 >> 6;
                    uVar24 = 1L << (uVar17 & 0x3f);
                    if (*pcVar21 == '\0') {
                      uVar24 = plStack_3d8[uVar23] & (uVar24 ^ 0xffffffffffffffff);
                    }
                    else {
                      uVar24 = plStack_3d8[uVar23] | uVar24;
                    }
                    uVar17 = uVar17 + 1;
                    plStack_3d8[uVar23] = uVar24;
                  }
                  pcVar21 = pcVar21 + 1;
                  uVar22 = uVar22 - 1;
                  plVar11 = (long *)((long)plVar11 + 1);
                } while (uVar22 != 0);
                uVar15 = uVar15 + 1;
                pcVar21 = pcVar18 + uVar26;
                plVar11 = (long *)((long)plVar20 + uVar26);
                uVar22 = uVar26;
                plVar20 = plVar11;
                pcVar18 = pcVar21;
              } while (uVar15 != uVar26);
            }
            if (plStack_470 != (long *)0x0) {
              __ZdlPv();
            }
            plStack_470 = plStack_3d8;
            uStack_460 = uStack_3c8;
            plStack_468 = plStack_3d0;
            FUN_1095943dc(&plStack_358,&plStack_470,&uStack_3f4,&lStack_3f0);
          } while ((lStack_3f0 == lStack_3e8) && (bVar7 = uVar13 < 2, uVar13 = uVar13 + 1, bVar7));
          if (lStack_3f0 != lStack_3e8) goto LAB_109580cfc;
          plStack_490 = (long *)0x0;
          plStack_488 = (long *)0x0;
          auStack_478[0] = 0;
          uStack_480 = 0;
        }
        else {
LAB_109580cfc:
          uStack_108 = 0;
          plStack_100 = (long *)0x0;
          if (lStack_3e8 - lStack_3f0 != 0) {
            _memcpy(&uStack_108,lStack_3f0,lStack_3e8 - lStack_3f0);
          }
          func_0x000109598560(&plStack_3d8,&uStack_108);
          plStack_488 = plStack_3d0;
          plStack_490 = plStack_3d8;
          uStack_480 = uStack_3c8;
          auStack_478[0] = uStack_3f4;
        }
        if (plStack_470 != (long *)0x0) {
          __ZdlPv();
        }
        if (lStack_b8 != 0) {
          piVar8 = (int *)(lStack_b8 + 0x14);
          do {
            iVar16 = *piVar8;
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar7) {
              *piVar8 = iVar16 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar16 + -1 == 0) {
            func_0x000109a848d4(&uStack_f0);
          }
        }
        lStack_b8 = 0;
        uStack_d0 = 0;
        if (0 < uStack_f0._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)((long)pplStack_b0 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_f0._4_4_);
        }
        if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
          _free(puStack_a8[-1]);
        }
        if (lStack_120 != 0) {
          lStack_118 = lStack_120;
          __ZdlPv();
        }
        if (plStack_350 != (long *)0x0) {
          plStack_348 = plStack_350;
          __ZdlPv();
        }
        if (lStack_420 != 0) {
          piVar8 = (int *)(lStack_420 + 0x14);
          do {
            iVar16 = *piVar8;
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar7) {
              *piVar8 = iVar16 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar16 + -1 == 0) {
            func_0x000109a848d4(&uStack_458);
          }
        }
        lStack_420 = 0;
        uStack_440 = 0;
        lStack_448 = 0;
        uStack_430 = 0;
        uStack_438 = 0;
        if (0 < uStack_458._4_4_) {
          lVar14 = 0;
          do {
            *(undefined4 *)(lStack_418 + lVar14 * 4) = 0;
            lVar14 = lVar14 + 1;
          } while (lVar14 < uStack_458._4_4_);
        }
        if (puStack_410 != auStack_408 && puStack_410 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_410 + -8));
        }
        if (lStack_3f0 != 0) {
          lStack_3e8 = lStack_3f0;
          __ZdlPv();
        }
        uVar13 = (uint)(char)uStack_480._7_1_;
        plVar11 = plStack_488;
        if (-1 < (int)uVar13) {
          plVar11 = (long *)(ulong)uStack_480._7_1_;
        }
        bVar7 = plVar11 != (long *)0x0;
        if (plVar11 != (long *)0x0) {
          FUN_109581500(param_2,&plStack_490);
          plVar11 = (long *)0x38;
          __Znwm();
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = (long)&PTR_DAT_1108a6378;
          plVar11[4] = 0;
          uStack_458 = plVar11 + 3;
          *uStack_458 = (long)FUN_109581bac;
          *(undefined4 *)(plVar11 + 4) = uStack_4b4;
          uStack_f0 = &PTR_FUN_110afc8c0;
          plStack_450 = plVar11;
          plStack_e8 = uStack_458;
          plStack_d8 = &uStack_f0;
          FUN_109567d5c(&plStack_358,&uStack_458,&uStack_f0);
          if (plStack_d8 == &uStack_f0) {
            lVar14 = 0x20;
LAB_109580f04:
            (**(code **)(*plStack_d8 + lVar14))();
          }
          else if (plStack_d8 != (long *)0x0) {
            lVar14 = 0x28;
            goto LAB_109580f04;
          }
          plVar11 = plStack_450;
          if (plStack_450 != (long *)0x0) {
            plVar20 = plStack_450 + 1;
            do {
              lVar14 = *plVar20;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar3) {
                *plVar20 = lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_450 + 0x10))(plStack_450);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
          puVar10 = (undefined8 *)(*(long *)(param_2[1] + 0x78) + (long)(int)*param_2 * 0x18);
          piVar1 = (int *)puVar10[1];
          for (piVar8 = (int *)*puVar10; piVar8 != piVar1; piVar8 = piVar8 + 2) {
            if (*piVar8 == 1) {
              func_0x000109566260(*(long *)param_2[1] + (long)piVar8[1] * 0x50 + 0x18,&plStack_358);
            }
          }
          if (pplStack_330 == &plStack_348) {
            lVar14 = 0x20;
LAB_109580fb4:
            (**(code **)((long)*pplStack_330 + lVar14))();
          }
          else if (pplStack_330 != (long **)0x0) {
            lVar14 = 0x28;
            goto LAB_109580fb4;
          }
          plVar11 = plStack_350;
          if (plStack_350 != (long *)0x0) {
            plVar20 = plStack_350 + 1;
            do {
              lVar14 = *plVar20;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar3) {
                *plVar20 = lVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_350 + 0x10))(plStack_350);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
          FUN_109581738(param_2,auStack_478);
          uVar13 = (uint)uStack_480._7_1_;
        }
        if ((uVar13 >> 7 & 1) != 0) {
          __ZdlPv(plStack_490);
        }
LAB_109581018:
        if (plStack_398 == alStack_3b0) {
          lVar14 = 0x20;
        }
        else {
          if (plStack_398 == (long *)0x0) goto LAB_109581044;
          lVar14 = 0x28;
        }
        (**(code **)(*plStack_398 + lVar14))();
      }
      else if (iVar16 == 2) {
        FUN_1095659c8(&plStack_358,
                      *(long *)param_2[1] +
                      (long)*(int *)(((long *)param_2[1])[0xc] + (long)(int)*param_2 * 4) * 0x50 +
                      0xa0);
        FUN_1095818c4(&uStack_f0,&plStack_358);
        if (pplStack_330 == &plStack_348) {
          lVar14 = 0x20;
LAB_1095806dc:
          (**(code **)((long)*pplStack_330 + lVar14))();
        }
        else if (pplStack_330 != (long **)0x0) {
          lVar14 = 0x28;
          goto LAB_1095806dc;
        }
        plVar11 = plStack_350;
        if (plStack_350 != (long *)0x0) {
          plVar20 = plStack_350 + 1;
          do {
            lVar14 = *plVar20;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar3) {
              *plVar20 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_350 + 0x10))(plStack_350);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        plVar20 = plStack_e8;
        ppuStack_3c0 = uStack_f0;
        plVar11 = plStack_3b8;
        uStack_f0 = (undefined **)0x0;
        plStack_e8 = (long *)0x0;
        plStack_3b8 = plVar20;
        if (plVar11 != (long *)0x0) {
          plVar20 = plVar11 + 1;
          do {
            lVar14 = *plVar20;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar3) {
              *plVar20 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        func_0x00010951eac8(alStack_3b0,&uStack_e0);
        if (plStack_c8 == &uStack_e0) {
          lVar14 = 0x20;
LAB_10958083c:
          (**(code **)(*plStack_c8 + lVar14))();
        }
        else if (plStack_c8 != (long *)0x0) {
          lVar14 = 0x28;
          goto LAB_10958083c;
        }
        plVar11 = plStack_e8;
        if (plStack_e8 != (long *)0x0) {
          plVar20 = plStack_e8 + 1;
          do {
            lVar14 = *plVar20;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar3) {
              *plVar20 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        uStack_4b4 = 6;
        if (!bVar7) goto LAB_1095808e4;
LAB_10958088c:
        bVar7 = true;
        goto LAB_109581018;
      }
LAB_109581044:
      plVar11 = plStack_3b8;
      if (plStack_3b8 != (long *)0x0) {
        plVar20 = plStack_3b8 + 1;
        do {
          lVar14 = *plVar20;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar3) {
            *plVar20 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_3b8 + 0x10))(plStack_3b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      param_1 = plStack_360;
      if (plStack_360 == alStack_378) {
        lVar14 = 0x20;
LAB_10958109c:
        (**(code **)(*plStack_360 + lVar14))();
      }
      else if (plStack_360 != (long *)0x0) {
        lVar14 = 0x28;
        goto LAB_10958109c;
      }
      plVar11 = plStack_380;
      if (plStack_380 != (long *)0x0) {
        plVar20 = plStack_380 + 1;
        do {
          lVar14 = *plVar20;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar3) {
            *plVar20 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_380 + 0x10))(plStack_380);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          param_1 = plVar11;
        }
      }
      iVar16 = *(int *)(((long *)param_2[1])[0xc] + (long)(int)*param_2 * 4);
      lVar14 = *(long *)param_2[1];
    } while (*(long *)(lVar14 + (long)iVar16 * 0x50 + 0x40) != 0);
    if (!bVar7) goto LAB_10958111c;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((long)plStack_348 < 0) {
    __ZdlPv(plStack_358);
  }
  if (lStack_448 < 0) {
    __ZdlPv(uStack_458);
  }
  func_0x000105681f78(&ppuStack_3c0);
  FUN_109581878(&puStack_388);
  __Unwind_Resume();
  plVar11 = (long *)param_1[5];
  if (plVar11 == param_1 + 2) {
    lVar14 = 0x20;
  }
  else {
    if (plVar11 == (long *)0x0) goto SUB_10951ea70;
    lVar14 = 0x28;
  }
  (**(code **)(*plVar11 + lVar14))();
SUB_10951ea70:
  plVar11 = (long *)param_1[1];
  if (plVar11 != (long *)0x0) {
    plVar20 = plVar11 + 1;
    do {
      lVar14 = *plVar20;
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return param_1;
}



/* Entry: 1095814b4; end: 1095814ff;  */

long FUN_1095814b4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)(param_1 + 0x10)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto SUB_10951ea70;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
SUB_10951ea70:
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 109581500; end: 109581737;  */

long * FUN_109581500(int *param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined ***pppuVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 unaff_x22;
  undefined1 auStack_108 [8];
  long *plStack_100;
  long alStack_f8 [3];
  long *plStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  int *piStack_c8;
  int *piStack_c0;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  long alStack_80 [3];
  long *plStack_68;
  undefined **ppuStack_60;
  long *plStack_58;
  long lStack_50;
  undefined ***pppuStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&ppuStack_60,*param_2,param_2[1]);
  }
  else {
    plStack_58 = (long *)param_2[1];
    ppuStack_60 = (undefined **)*param_2;
    lStack_50 = param_2[2];
  }
  plVar5 = (long *)0x38;
  __Znwm();
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_1108a6378;
  plVar5[1] = 0;
  plVar5[5] = (long)plStack_58;
  plVar5[4] = (long)ppuStack_60;
  plVar5[6] = lStack_50;
  plStack_a0 = plVar5 + 3;
  *plStack_a0 = 0x1095819f0;
  ppuStack_60 = &PTR_FUN_110afc840;
  pppuVar7 = &ppuStack_60;
  plStack_98 = plVar5;
  plStack_58 = plStack_a0;
  pppuStack_48 = &ppuStack_60;
  FUN_109567d5c(&ppuStack_90,&plStack_a0,pppuVar7);
  if (pppuStack_48 == &ppuStack_60) {
    lVar8 = 0x20;
LAB_1095815d4:
    (**(code **)((long)*pppuStack_48 + lVar8))();
  }
  else if (pppuStack_48 != (undefined ***)0x0) {
    lVar8 = 0x28;
    goto LAB_1095815d4;
  }
  plVar5 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar6 = plStack_98 + 1;
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
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = (long *)(*(long *)(*(long *)(param_1 + 2) + 0x78) + (long)*param_1 * 0x18);
  piVar10 = (int *)*plVar5;
  piVar2 = (int *)plVar5[1];
  if (piVar10 != piVar2) {
    unaff_x22 = 0x50;
    do {
      if (*piVar10 == 0) {
        pppuVar7 = &ppuStack_90;
        func_0x000109566260(**(long **)(param_1 + 2) + (long)piVar10[1] * 0x50 + 0x18,pppuVar7);
      }
      piVar10 = piVar10 + 2;
    } while (piVar10 != piVar2);
  }
  if (plStack_68 == alStack_80) {
    lVar8 = 0x20;
LAB_109581690:
    (**(code **)(*plStack_68 + lVar8))();
  }
  else if (plStack_68 != (long *)0x0) {
    lVar8 = 0x28;
    goto LAB_109581690;
  }
  plVar5 = plStack_68;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plStack_88;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar5;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_a8 = FUN_109581738;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = unaff_x22;
  piStack_c8 = piVar2;
  piStack_c0 = piVar10;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000105682f00(auStack_108,pppuVar7);
  puVar9 = (undefined8 *)(*(long *)(plVar5[1] + 0x78) + (long)(int)*plVar5 * 0x18);
  piVar2 = (int *)puVar9[1];
  for (piVar10 = (int *)*puVar9; piVar10 != piVar2; piVar10 = piVar10 + 2) {
    if (*piVar10 == 2) {
      func_0x000109566260(*(long *)plVar5[1] + (long)piVar10[1] * 0x50 + 0x18,auStack_108);
    }
  }
  if (plStack_e0 == alStack_f8) {
    lVar8 = 0x20;
LAB_1095817e8:
    (**(code **)(*plStack_e0 + lVar8))();
  }
  else if (plStack_e0 != (long *)0x0) {
    lVar8 = 0x28;
    goto LAB_1095817e8;
  }
  plVar5 = plStack_e0;
  if (plStack_100 != (long *)0x0) {
    plVar6 = plStack_100 + 1;
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
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plStack_100;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return plVar5;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar6 = (long *)plVar5[5];
  if (plVar6 == plVar5 + 2) {
    lVar8 = 0x20;
  }
  else {
    if (plVar6 == (long *)0x0) goto SUB_10951ea70;
    lVar8 = 0x28;
  }
  (**(code **)(*plVar6 + lVar8))();
SUB_10951ea70:
  plVar6 = (long *)plVar5[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return plVar5;
}



/* Entry: 109581738; end: 109581877;  */

long * FUN_109581738(int *param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 auStack_68 [8];
  long *plStack_60;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000105682f00(auStack_68,param_2);
  puVar8 = (undefined8 *)(*(long *)(*(long *)(param_1 + 2) + 0x78) + (long)*param_1 * 0x18);
  piVar3 = (int *)puVar8[1];
  for (piVar2 = (int *)*puVar8; piVar2 != piVar3; piVar2 = piVar2 + 2) {
    if (*piVar2 == 2) {
      func_0x000109566260(**(long **)(param_1 + 2) + (long)piVar2[1] * 0x50 + 0x18,auStack_68);
    }
  }
  if (plStack_40 == alStack_58) {
    lVar9 = 0x20;
LAB_1095817e8:
    (**(code **)(*plStack_40 + lVar9))();
  }
  else if (plStack_40 != (long *)0x0) {
    lVar9 = 0x28;
    goto LAB_1095817e8;
  }
  plVar6 = plStack_40;
  if (plStack_60 != (long *)0x0) {
    plVar7 = plStack_60 + 1;
    do {
      lVar9 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plStack_60;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar6;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar7 = (long *)plVar6[5];
  if (plVar7 == plVar6 + 2) {
    lVar9 = 0x20;
  }
  else {
    if (plVar7 == (long *)0x0) goto SUB_10951ea70;
    lVar9 = 0x28;
  }
  (**(code **)(*plVar7 + lVar9))();
SUB_10951ea70:
  plVar7 = (long *)plVar6[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return plVar6;
}



/* Entry: 109581878; end: 1095818c3;  */

long FUN_109581878(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)(param_1 + 0x10)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto SUB_10951ea70;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
SUB_10951ea70:
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 1095818c4; end: 109581917;  */

void FUN_1095818c4(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  func_0x0001095707b8(param_1,param_2);
  func_0x000105687250(param_1 + 2,param_2 + 0x10);
  return;
}



/* Entry: 109581918; end: 10958199b;  */

long FUN_109581918(long param_1)

{
  if (*(long *)(param_1 + 0x238) != 0) {
    *(long *)(param_1 + 0x240) = *(long *)(param_1 + 0x238);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10958199c; end: 1095819af;  */

undefined1  [16]
FUN_10958199c(undefined8 param_1,undefined **param_2,undefined8 *param_3,long param_4,
             undefined *param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  iVar1 = 0xf62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < (undefined **)0x2aaaaaaaaaaaaaab) {
    lVar3 = (long)param_2 * 6;
    __Znwm(lVar3);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar3;
    return auVar8;
  }
  func_0x000104c4f740();
  ppuVar6 = param_2;
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      if (*(char *)((long)param_2 + 0x1f) < '\0') {
        ppuVar6 = (undefined **)param_2[1];
        func_0x000107c3192c(param_3 + 1,ppuVar6,param_2[2]);
      }
      else {
        puVar7 = param_2[2];
        puVar4 = param_2[1];
        param_3[3] = param_2[3];
        param_3[2] = puVar7;
        param_3[1] = puVar4;
      }
      ppuVar5 = (undefined **)0x0;
      *param_3 = 0x1095819f0;
      goto LAB_109581aec;
    }
    if (*(char *)((long)param_2 + 0x1f) < '\0') {
      puVar4 = param_2[1];
      goto LAB_109581a78;
    }
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        if (param_4 == 0) {
          uVar2 = (uint)(param_5 == &UNK_10ddb88c8);
        }
        else {
          ppuVar6 = &PTR_DAT_1108a6308;
          func_0x000107c31948(param_4,&PTR_DAT_1108a6308);
          uVar2 = (uint)param_4;
        }
        ppuVar5 = param_2 + 1;
        if (uVar2 == 0) {
          ppuVar5 = (undefined **)0x0;
        }
      }
      else {
        ppuVar5 = &PTR_DAT_1108a6308;
      }
      goto LAB_109581aec;
    }
    puVar7 = param_2[2];
    puVar4 = param_2[1];
    param_3[3] = param_2[3];
    param_3[2] = puVar7;
    param_3[1] = puVar4;
    param_2[2] = (undefined *)0x0;
    param_2[3] = (undefined *)0x0;
    param_2[1] = (undefined *)0x0;
    *param_3 = 0x1095819f0;
    if (*(char *)((long)param_2 + 0x1f) < '\0') {
      puVar4 = param_2[1];
LAB_109581a78:
      __ZdlPv(puVar4);
    }
  }
  ppuVar5 = (undefined **)0x0;
  *param_2 = (undefined *)0x0;
LAB_109581aec:
  auVar9._8_8_ = ppuVar6;
  auVar9._0_8_ = ppuVar5;
  return auVar9;
}



/* Entry: 1095819b0; end: 109581af7;  */

undefined1  [16]
FUN_1095819b0(int param_1,undefined **param_2,undefined8 *param_3,long param_4,undefined *param_5)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_2 < (undefined **)0x2aaaaaaaaaaaaaab) {
    lVar2 = (long)param_2 * 6;
    __Znwm(lVar2);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  func_0x000104c4f740();
  ppuVar5 = param_2;
  if (param_1 < 2) {
    if (param_1 != 0) {
      if (*(char *)((long)param_2 + 0x1f) < '\0') {
        ppuVar5 = (undefined **)param_2[1];
        func_0x000107c3192c(param_3 + 1,ppuVar5,param_2[2]);
      }
      else {
        puVar6 = param_2[2];
        puVar3 = param_2[1];
        param_3[3] = param_2[3];
        param_3[2] = puVar6;
        param_3[1] = puVar3;
      }
      ppuVar4 = (undefined **)0x0;
      *param_3 = 0x1095819f0;
      goto LAB_109581aec;
    }
    if (*(char *)((long)param_2 + 0x1f) < '\0') {
      puVar3 = param_2[1];
      goto LAB_109581a78;
    }
  }
  else {
    if (param_1 != 2) {
      if (param_1 == 3) {
        if (param_4 == 0) {
          uVar1 = (uint)(param_5 == &UNK_10ddb88c8);
        }
        else {
          ppuVar5 = &PTR_DAT_1108a6308;
          func_0x000107c31948(param_4,&PTR_DAT_1108a6308);
          uVar1 = (uint)param_4;
        }
        ppuVar4 = param_2 + 1;
        if (uVar1 == 0) {
          ppuVar4 = (undefined **)0x0;
        }
      }
      else {
        ppuVar4 = &PTR_DAT_1108a6308;
      }
      goto LAB_109581aec;
    }
    puVar6 = param_2[2];
    puVar3 = param_2[1];
    param_3[3] = param_2[3];
    param_3[2] = puVar6;
    param_3[1] = puVar3;
    param_2[2] = (undefined *)0x0;
    param_2[3] = (undefined *)0x0;
    param_2[1] = (undefined *)0x0;
    *param_3 = 0x1095819f0;
    if (*(char *)((long)param_2 + 0x1f) < '\0') {
      puVar3 = param_2[1];
LAB_109581a78:
      __ZdlPv(puVar3);
    }
  }
  ppuVar4 = (undefined **)0x0;
  *param_2 = (undefined *)0x0;
LAB_109581aec:
  auVar8._8_8_ = ppuVar5;
  auVar8._0_8_ = ppuVar4;
  return auVar8;
}



/* Entry: 109581af8; end: 109581aff;  */

void FUN_109581af8(void)

{
  return;
}



/* Entry: 109581b00; end: 109581b33;  */

void FUN_109581b00(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110afc840;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109581b34; end: 109581b4f;  */

void FUN_109581b34(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110afc840;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109581b50; end: 109581b63;  */

undefined * FUN_109581b50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f2e581e;
  func_0x000105688514(&UNK_10f2e581e);
  func_0x000107c31948(param_2,&PTR_DAT_110afc8a0);
  puVar1 = puVar1 + 8;
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 109581b64; end: 109581b9f;  */

long FUN_109581b64(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afc8a0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109581ba0; end: 109581bab;  */

undefined ** FUN_109581ba0(void)

{
  return &PTR_DAT_110afc8a0;
}



/* Entry: 109581bac; end: 109581c67;  */

undefined8 *
FUN_109581bac(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined *param_5)

{
  uint uVar1;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 1);
      *param_3 = FUN_109581bac;
      return (undefined8 *)0x0;
    }
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return (undefined8 *)PTR___ZTIi_110346aa8;
      }
      if (param_4 == 0) {
        uVar1 = (uint)(param_5 == &UNK_10ddb8698);
      }
      else {
        func_0x000107c31948(param_4,PTR___ZTIi_110346aa8);
        uVar1 = (uint)param_4;
      }
      if (uVar1 != 0) {
        return param_2 + 1;
      }
      return (undefined8 *)0x0;
    }
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 1);
    *param_3 = FUN_109581bac;
  }
  *param_2 = 0;
  return (undefined8 *)0x0;
}



/* Entry: 109581c68; end: 109581c6f;  */

void FUN_109581c68(void)

{
  return;
}



/* Entry: 109581c70; end: 109581ca3;  */

void FUN_109581c70(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110afc8c0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109581ca4; end: 109581cbf;  */

void FUN_109581ca4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110afc8c0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109581cc0; end: 109581cd3;  */

undefined * FUN_109581cc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f2e581e;
  func_0x000105688514(&UNK_10f2e581e);
  func_0x000107c31948(param_2,&PTR_DAT_110afc920);
  puVar1 = puVar1 + 8;
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 109581cd4; end: 109581d0f;  */

long FUN_109581cd4(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afc920);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109581d10; end: 109581d23;  */

undefined ** FUN_109581d10(void)

{
  return &PTR_DAT_110afc920;
}



/* Entry: 109581d24; end: 10958236b;  */

long * FUN_109581d24(long *param_1,int *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  long *plStack_220;
  long *plStack_218;
  long lStack_210;
  long *plStack_208;
  long alStack_200 [3];
  long *plStack_1e8;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  ulong uStack_d0;
  long *plStack_c8;
  long alStack_c0 [3];
  long *plStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined ***pppuStack_88;
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar9 = *(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4);
  lVar11 = **(long **)(param_2 + 2);
  if (*(long *)(lVar11 + (long)(iVar9 + 1) * 0x50 + 0x40) != 0) {
    do {
      if (*(long *)(lVar11 + (long)iVar9 * 0x50 + 0x40) == 0) break;
      FUN_1095659c8(&lStack_210,lVar11 + (long)iVar9 * 0x50 + 0x50);
      uStack_d0 = 0;
      plStack_c8 = (long *)0x0;
      plStack_a8 = (long *)0x0;
      func_0x0001095707b8(&uStack_d0,&lStack_210);
      func_0x000105687250(alStack_c0,alStack_200);
      if (plStack_1e8 == alStack_200) {
        lVar11 = 0x20;
LAB_109581e00:
        (**(code **)(*plStack_1e8 + lVar11))();
      }
      else if (plStack_1e8 != (long *)0x0) {
        lVar11 = 0x28;
        goto LAB_109581e00;
      }
      plVar7 = plStack_208;
      if (plStack_208 != (long *)0x0) {
        plVar1 = plStack_208 + 1;
        do {
          lVar11 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_208 + 0x10))(plStack_208);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      puVar5 = &uStack_d0;
      FUN_10958032c();
      if ((int)puVar5[1] < 1) {
        puVar8 = (undefined8 *)0x0;
        func_0x00010ae6a960(0,(long)(int)puVar5[1],&UNK_10f471e1f);
        lVar11 = (long)*(char *)((long)puVar8 + 0x17);
        puVar10 = puVar8;
        if (lVar11 < 0) {
          puVar10 = (undefined8 *)*puVar8;
          lVar11 = puVar8[1];
        }
        func_0x00010bdb2a88(&lStack_210,&UNK_10f57433c,0xa6,puVar10,lVar11);
        param_1 = &lStack_210;
        func_0x00010ae6c700();
        goto LAB_1095822dc;
      }
      if ((*puVar5 & 1) != 0) {
        puVar5 = (ulong *)(*puVar5 + 7);
      }
      iVar9 = *(int *)(*puVar5 + 0x18);
      if (iVar9 == 1) {
        FUN_109572f9c(&ppuStack_a0,param_2);
        pppuVar6 = &ppuStack_a0;
        FUN_109570a30();
        FUN_10951f4a8(&lStack_210,pppuVar6);
        ppuStack_e0 = pppuVar6[0x26];
        ppuStack_e8 = pppuVar6[0x25];
        ppuStack_d8 = pppuVar6[0x27];
        if (plStack_78 == &lStack_90) {
          lVar11 = 0x20;
LAB_109581fe0:
          (**(code **)(*plStack_78 + lVar11))();
        }
        else if (plStack_78 != (long *)0x0) {
          lVar11 = 0x28;
          goto LAB_109581fe0;
        }
        plVar7 = plStack_98;
        if (plStack_98 != (long *)0x0) {
          plVar1 = plStack_98 + 1;
          do {
            lVar11 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        FUN_10957ea6c(param_2,&lStack_210);
LAB_10958207c:
        FUN_10951f294(&lStack_210);
        plVar7 = (long *)0x38;
        __Znwm();
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = (long)&PTR_DAT_1108a6378;
        plVar7[4] = 0;
        plStack_220 = plVar7 + 3;
        *plStack_220 = 0x1095823b8;
        *(int *)(plVar7 + 4) = iVar9;
        ppuStack_a0 = &PTR_FUN_110afc990;
        plStack_218 = plVar7;
        plStack_98 = plStack_220;
        pppuStack_88 = &ppuStack_a0;
        FUN_109567d5c(&lStack_210,&plStack_220,&ppuStack_a0);
        if (pppuStack_88 == &ppuStack_a0) {
          lVar11 = 0x20;
LAB_1095820f0:
          (**(code **)((long)*pppuStack_88 + lVar11))();
        }
        else if (pppuStack_88 != (undefined ***)0x0) {
          lVar11 = 0x28;
          goto LAB_1095820f0;
        }
        plVar7 = plStack_218;
        if (plStack_218 != (long *)0x0) {
          plVar1 = plStack_218 + 1;
          do {
            lVar11 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_218 + 0x10))(plStack_218);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        puVar10 = (undefined8 *)(*(long *)(*(long *)(param_2 + 2) + 0x78) + (long)*param_2 * 0x18);
        piVar2 = (int *)puVar10[1];
        for (piVar12 = (int *)*puVar10; piVar12 != piVar2; piVar12 = piVar12 + 2) {
          if (*piVar12 == 2) {
            func_0x000109566260(**(long **)(param_2 + 2) + (long)piVar12[1] * 0x50 + 0x18,
                                &lStack_210);
          }
        }
        if (plStack_1e8 == alStack_200) {
          lVar11 = 0x20;
LAB_1095821a0:
          (**(code **)(*plStack_1e8 + lVar11))();
        }
        else if (plStack_1e8 != (long *)0x0) {
          lVar11 = 0x28;
          goto LAB_1095821a0;
        }
        plVar7 = plStack_208;
        if (plStack_208 != (long *)0x0) {
          plVar1 = plStack_208 + 1;
          do {
            lVar11 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_208 + 0x10))(plStack_208);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
      }
      else if (iVar9 == 2) {
        FUN_109572f9c(&ppuStack_a0,param_2);
        pppuVar6 = &ppuStack_a0;
        FUN_109570a30();
        FUN_10951f4a8(&lStack_210,pppuVar6);
        ppuStack_e0 = pppuVar6[0x26];
        ppuStack_e8 = pppuVar6[0x25];
        ppuStack_d8 = pppuVar6[0x27];
        if (plStack_78 == &lStack_90) {
          lVar11 = 0x20;
LAB_109581f24:
          (**(code **)(*plStack_78 + lVar11))();
        }
        else if (plStack_78 != (long *)0x0) {
          lVar11 = 0x28;
          goto LAB_109581f24;
        }
        plVar7 = plStack_98;
        if (plStack_98 != (long *)0x0) {
          plVar1 = plStack_98 + 1;
          do {
            lVar11 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        func_0x000105682d44(&ppuStack_a0,&lStack_210);
        puVar10 = (undefined8 *)(*(long *)(*(long *)(param_2 + 2) + 0x78) + (long)*param_2 * 0x18);
        piVar2 = (int *)puVar10[1];
        for (piVar12 = (int *)*puVar10; piVar12 != piVar2; piVar12 = piVar12 + 2) {
          if (*piVar12 == 1) {
            func_0x000109566260(**(long **)(param_2 + 2) + (long)piVar12[1] * 0x50 + 0x18,
                                &ppuStack_a0);
          }
        }
        if (plStack_78 == &lStack_90) {
          lVar11 = 0x20;
LAB_109582038:
          (**(code **)(*plStack_78 + lVar11))();
        }
        else if (plStack_78 != (long *)0x0) {
          lVar11 = 0x28;
          goto LAB_109582038;
        }
        plVar7 = plStack_98;
        if (plStack_98 != (long *)0x0) {
          plVar1 = plStack_98 + 1;
          do {
            lVar11 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        goto LAB_10958207c;
      }
      param_1 = plStack_a8;
      if (plStack_a8 == alStack_c0) {
        lVar11 = 0x20;
LAB_109582200:
        (**(code **)(*plStack_a8 + lVar11))();
      }
      else if (plStack_a8 != (long *)0x0) {
        lVar11 = 0x28;
        goto LAB_109582200;
      }
      plVar7 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar1 = plStack_c8 + 1;
        do {
          lVar11 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          param_1 = plVar7;
        }
      }
      iVar9 = *(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4);
      lVar11 = **(long **)(param_2 + 2);
    } while (*(long *)(lVar11 + (long)(iVar9 + 1) * 0x50 + 0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
LAB_1095822dc:
  ___stack_chk_fail();
  FUN_10958236c(&uStack_d0);
  __Unwind_Resume();
  plVar7 = (long *)param_1[5];
  if (plVar7 == param_1 + 2) {
    lVar11 = 0x20;
  }
  else {
    if (plVar7 == (long *)0x0) goto SUB_10951ea70;
    lVar11 = 0x28;
  }
  (**(code **)(*plVar7 + lVar11))();
SUB_10951ea70:
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return param_1;
}



/* Entry: 10958236c; end: 109582473;  */

long FUN_10958236c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)(param_1 + 0x10)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto SUB_10951ea70;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
SUB_10951ea70:
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 109582474; end: 10958247b;  */

void FUN_109582474(void)

{
  return;
}



/* Entry: 10958247c; end: 1095824af;  */

void FUN_10958247c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110afc990;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1095824b0; end: 1095824cb;  */

void FUN_1095824b0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110afc990;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1095824cc; end: 1095824df;  */

undefined * FUN_1095824cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f2e581e;
  func_0x000105688514(&UNK_10f2e581e);
  func_0x000107c31948(param_2,&PTR_DAT_110afc9f0);
  puVar1 = puVar1 + 8;
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 1095824e0; end: 10958251b;  */

long FUN_1095824e0(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afc9f0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10958251c; end: 109582527;  */

undefined ** FUN_10958251c(void)

{
  return &PTR_DAT_110afc9f0;
}



/* Entry: 109582528; end: 1095825b7;  */

void FUN_109582528(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 unaff_x19;
  ulong *puVar2;
  long lVar3;
  ulong unaff_x23;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  puVar2 = (ulong *)(param_1 + 0x40);
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)(uVar1 + 7);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    lVar3 = (long)*(int *)(param_1 + 0x48) << 3;
    do {
      unaff_x23 = *puVar2;
      uVar1 = unaff_x23 + 0x28;
      func_0x00010b4bee4c(uVar1,&UNK_10f57442e,0x23);
      if ((uVar1 & 1) != 0) goto LAB_109582590;
      lVar3 = lVar3 + -8;
      unaff_x19 = param_2;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
  }
  param_2 = unaff_x19;
  func_0x000105688514(&UNK_10f573dd9);
LAB_109582590:
  lVar3 = unaff_x23 + 0x28;
  func_0x00010b4bee4c(lVar3,&UNK_10f57442e,0x23);
  if ((int)lVar3 != 0) {
    func_0x000100063660(param_2,&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1095825b8; end: 10958268f;  */

undefined8 * FUN_1095825b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110afca78;
  FUN_10934ffa0(param_1 + 10);
  FUN_10934ffa0(param_1 + 4);
  FUN_109582da0(param_1 + 1);
  return param_1;
}



/* Entry: 109582690; end: 109582c83;  */

void FUN_109582690(long *param_1,int *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 ****ppppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 ****ppppuVar9;
  undefined8 uVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  ulong uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined **ppuStack_220;
  ulong uStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 ***pppuStack_170;
  ulong uStack_168;
  byte bStack_159;
  undefined8 ***apppuStack_158 [2];
  char cStack_141;
  undefined8 **ppuStack_140;
  undefined8 **ppuStack_138;
  undefined8 **ppuStack_130;
  undefined1 auStack_120 [8];
  long *plStack_118;
  long alStack_110 [3];
  long *plStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long alStack_e0 [3];
  long *plStack_c8;
  undefined8 uStack_a0;
  long *plStack_98;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar12 = *(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4);
  lVar14 = **(long **)(param_2 + 2);
  plStack_1d8 = param_1;
  if (*(long *)(lVar14 + (long)iVar12 * 0x50 + 0x40) != 0) {
    plStack_1b8 = alStack_110;
    plStack_1b0 = alStack_e0;
    plStack_1a8 = alStack_90;
    do {
      FUN_1095659c8(&uStack_f0,lVar14 + (long)iVar12 * 0x50);
      FUN_1095830e0(auStack_120,&uStack_f0);
      if (plStack_c8 == plStack_1b0) {
        lVar14 = 0x20;
LAB_109582744:
        (**(code **)(*plStack_c8 + lVar14))();
      }
      else if (plStack_c8 != (long *)0x0) {
        lVar14 = 0x28;
        goto LAB_109582744;
      }
      plVar8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        plVar11 = plStack_e8 + 1;
        do {
          lVar14 = *plVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      puVar7 = auStack_120;
      FUN_10957358c(puVar7);
      if (param_1[2] != param_1[1]) {
        uVar15 = 0;
        unaff_x21 = 1;
        puVar17 = puVar7;
        do {
          if ((*(byte *)(*(long *)(param_2 + 2) + 0xc0) & 1) == 0) {
            ppuStack_1a0 = &PTR_FUN_110af16c8;
            uStack_198 = 0;
            uStack_188 = 0;
            uStack_180 = 0;
            uStack_190 = 0;
            uStack_178 = 0;
            goto LAB_109582ae0;
          }
          unaff_x22 = 0x20;
          if ((uVar15 & 1) != 0) {
            unaff_x22 = 0x50;
          }
          puVar16 = (undefined8 *)(param_1[1] + uVar15 * 0x48);
          uStack_a0 = 0;
          plStack_98 = (long *)0x0;
          plStack_78 = (long *)0x0;
          if (*(char *)(puVar16 + 8) == '\x01') {
            iVar12 = *(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) + (int)unaff_x21;
            lVar14 = **(long **)(param_2 + 2);
            if (*(long *)(lVar14 + (long)iVar12 * 0x50 + 0x40) == 0) {
              func_0x000105688514(&UNK_10f57420e);
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x109582bc0);
              (*pcVar6)();
            }
            FUN_1095659c8(&uStack_f0,lVar14 + (long)iVar12 * 0x50);
            plVar11 = plStack_98;
            plStack_98 = plStack_e8;
            uStack_a0 = uStack_f0;
            plVar8 = plStack_1b0;
            uStack_f0 = 0;
            plStack_e8 = (long *)0x0;
            if (plVar11 != (long *)0x0) {
              plVar1 = plVar11 + 1;
              do {
                lVar14 = *plVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar14 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar14 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
              }
            }
            func_0x00010951eac8(plStack_1a8,plVar8);
            if (plStack_c8 == plVar8) {
              lVar14 = 0x20;
LAB_109582888:
              (**(code **)(*plStack_c8 + lVar14))();
            }
            else if (plStack_c8 != (long *)0x0) {
              lVar14 = 0x28;
              goto LAB_109582888;
            }
            plVar8 = plStack_e8;
            if (plStack_e8 != (long *)0x0) {
              plVar11 = plStack_e8 + 1;
              do {
                lVar14 = *plVar11;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar5) {
                  *plVar11 = lVar14 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar14 == 0) {
                (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            unaff_x21 = (ulong)((int)unaff_x21 + 1);
          }
          plVar8 = *(long **)(param_2 + 2);
          FUN_109565a70(plVar8,*param_2);
          uVar13 = plVar8[1];
          if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
            uVar13 = (ulong)*(byte *)((long)plVar8 + 0x17);
          }
          func_0x000104c4f768(apppuStack_158,uVar13 + 0xb,&pppuStack_170);
          ppppuVar3 = (undefined8 ****)apppuStack_158[0];
          if (-1 < cStack_141) {
            ppppuVar3 = apppuStack_158;
          }
          if (uVar13 != 0) {
            plVar11 = (long *)*plVar8;
            if (-1 < *(char *)((long)plVar8 + 0x17)) {
              plVar11 = plVar8;
            }
            _memmove(ppppuVar3,plVar11,uVar13);
          }
          puVar2 = (undefined8 *)((long)ppppuVar3 + uVar13);
          *puVar2 = 0x6f66736e6172745f;
          *(undefined4 *)((long)puVar2 + 7) = 0x5f6d726f;
          *(undefined1 *)((long)puVar2 + 0xb) = 0;
          __ZNSt3__19to_stringEm(&pppuStack_170,uVar15);
          uVar13 = uStack_168;
          ppppuVar3 = (undefined8 ****)pppuStack_170;
          if (-1 < (char)bStack_159) {
            uVar13 = (ulong)bStack_159;
            ppppuVar3 = &pppuStack_170;
          }
          ppppuVar9 = apppuStack_158;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppuVar9,ppppuVar3,uVar13);
          ppuStack_138 = ppppuVar9[1];
          ppuStack_140 = *ppppuVar9;
          ppuStack_130 = ppppuVar9[2];
          ppppuVar9[1] = (undefined8 ***)0x0;
          ppppuVar9[2] = (undefined8 ***)0x0;
          *ppppuVar9 = (undefined8 ***)0x0;
          uVar10 = *(undefined8 *)(param_2 + 2);
          FUN_109565a70(uVar10,*param_2);
          FUN_1095617dc(&uStack_f0,&ppuStack_140,uVar10,*(long *)(param_2 + 2) + 0x108);
          if ((long)ppuStack_130 < 0) {
            __ZdlPv(ppuStack_140);
          }
          if ((char)bStack_159 < '\0') {
            __ZdlPv(pppuStack_170);
          }
          if (cStack_141 < '\0') {
            __ZdlPv(apppuStack_158[0]);
          }
          puVar7 = (undefined1 *)((long)param_1 + unaff_x22);
          (*(code *)*puVar16)(puVar17,puVar7,&uStack_a0,puVar16);
          FUN_10956189c(&uStack_f0);
          if (plStack_78 == plStack_1a8) {
            lVar14 = 0x20;
LAB_109582a40:
            (**(code **)(*plStack_78 + lVar14))();
          }
          else if (plStack_78 != (long *)0x0) {
            lVar14 = 0x28;
            goto LAB_109582a40;
          }
          plVar8 = plStack_98;
          if (plStack_98 != (long *)0x0) {
            plVar11 = plStack_98 + 1;
            do {
              lVar14 = *plVar11;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_98 + 0x10))(plStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          uVar15 = uVar15 + 1;
          puVar17 = puVar7;
        } while (uVar15 < (ulong)((param_1[2] - param_1[1] >> 3) * -0x71c71c71c71c71c7));
      }
      FUN_10934ff2c(&ppuStack_1a0,0,puVar7);
LAB_109582ae0:
      FUN_109574870(param_2,&ppuStack_1a0);
      FUN_10934ffa0(&ppuStack_1a0);
      plStack_1d8 = plStack_f8;
      if (plStack_f8 == plStack_1b8) {
        lVar14 = 0x20;
LAB_109582b14:
        (**(code **)(*plStack_f8 + lVar14))();
      }
      else if (plStack_f8 != (long *)0x0) {
        lVar14 = 0x28;
        goto LAB_109582b14;
      }
      plVar8 = plStack_118;
      if (plStack_118 != (long *)0x0) {
        plVar11 = plStack_118 + 1;
        do {
          lVar14 = *plVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plStack_1d8 = plVar8;
        }
      }
      iVar12 = *(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4);
      lVar14 = **(long **)(param_2 + 2);
      unaff_x20 = param_1;
    } while (*(long *)(lVar14 + (long)iVar12 * 0x50 + 0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_109583094(auStack_120);
  plVar11 = plStack_1d8;
  __Unwind_Resume();
  pcStack_1c8 = FUN_109582c84;
  ppuStack_220 = &PTR_FUN_110af16c8;
  uStack_218 = 0;
  plVar8 = plVar11 + 4;
  lStack_208 = 0;
  uStack_200 = 0;
  lStack_210 = 0;
  uStack_1f8 = 0;
  lStack_1f0 = unaff_x22;
  uStack_1e8 = unaff_x21;
  plStack_1e0 = unaff_x20;
  puStack_1d0 = &stack0xfffffffffffffff0;
  if ((undefined ***)plVar8 != &ppuStack_220) {
    uVar13 = plVar11[5];
    uVar15 = uVar13;
    if ((uVar13 & 1) != 0) {
      uVar15 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
    }
    if (uVar15 == 0) {
      plVar11[5] = 0;
      lStack_208 = plVar11[7];
      lStack_210 = plVar11[6];
      plVar11[7] = 0;
      plVar11[6] = 0;
      uStack_218 = uVar13;
    }
    else {
      FUN_10934fff8(plVar8);
      FUN_109350260(plVar8,&ppuStack_220);
    }
  }
  FUN_10934ffa0(&ppuStack_220);
  ppuStack_220 = &PTR_FUN_110af16c8;
  uStack_218 = 0;
  plVar8 = plVar11 + 10;
  lStack_208 = 0;
  uStack_200 = 0;
  lStack_210 = 0;
  uStack_1f8 = 0;
  if ((undefined ***)plVar8 != &ppuStack_220) {
    uVar13 = plVar11[0xb];
    uVar15 = uVar13;
    if ((uVar13 & 1) != 0) {
      uVar15 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
    }
    if (uVar15 == 0) {
      plVar11[0xb] = 0;
      lStack_208 = plVar11[0xd];
      lStack_210 = plVar11[0xc];
      plVar11[0xd] = 0;
      plVar11[0xc] = 0;
      uStack_218 = uVar13;
    }
    else {
      FUN_10934fff8(plVar8);
      FUN_109350260(plVar8,&ppuStack_220);
    }
  }
  FUN_10934ffa0(&ppuStack_220);
  return;
}



/* Entry: 109582c84; end: 109582d9f;  */

void FUN_109582c84(long param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  ppuStack_60 = &PTR_FUN_110af16c8;
  uStack_58 = 0;
  puVar1 = (undefined1 *)(param_1 + 0x20);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  if ((undefined ***)puVar1 != &ppuStack_60) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    uVar2 = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    if (uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      uStack_48 = *(undefined8 *)(param_1 + 0x38);
      uStack_50 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      uStack_58 = uVar3;
    }
    else {
      FUN_10934fff8(puVar1);
      FUN_109350260(puVar1,&ppuStack_60);
    }
  }
  FUN_10934ffa0(&ppuStack_60);
  ppuStack_60 = &PTR_FUN_110af16c8;
  uStack_58 = 0;
  puVar1 = (undefined1 *)(param_1 + 0x50);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  if ((undefined ***)puVar1 != &ppuStack_60) {
    uVar3 = *(ulong *)(param_1 + 0x58);
    uVar2 = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    if (uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
      uStack_48 = *(undefined8 *)(param_1 + 0x68);
      uStack_50 = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      uStack_58 = uVar3;
    }
    else {
      FUN_10934fff8(puVar1);
      FUN_109350260(puVar1,&ppuStack_60);
    }
  }
  FUN_10934ffa0(&ppuStack_60);
  return;
}



/* Entry: 109582da0; end: 109582e17;  */

void FUN_109582da0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -8;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -9;
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



/* Entry: 109582e18; end: 109582e27;  */

void FUN_109582e18(undefined8 param_1,long param_2,undefined8 *param_3,long param_4)

{
  ulong *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  int iVar19;
  undefined8 uVar20;
  int iVar21;
  int iVar22;
  undefined8 uVar23;
  int iVar24;
  undefined1 auStack_a8 [8];
  byte abStack_a0 [32];
  
  lVar4 = param_4;
  func_0x000105277f8c();
  FUN_10957d220();
  uVar20 = *param_3;
  uVar23 = *(undefined8 *)(lVar4 + 0x10);
  if (0 < *(int *)(param_2 + 0x18)) {
    func_0x0001053936e4(param_2 + 0x10);
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  puVar8 = (ulong *)(param_4 + 0x10);
  if ((uVar5 & 1) != 0) {
    puVar8 = (ulong *)(uVar5 + 7);
  }
  if (*(int *)(param_4 + 0x18) != 0) {
    iVar19 = (int)uVar20;
    iVar22 = (int)uVar23;
    iVar21 = (int)((ulong)uVar20 >> 0x20);
    iVar24 = (int)((ulong)uVar23 >> 0x20);
    auVar17._0_8_ = (long)iVar22;
    auVar17._8_8_ = (long)iVar24;
    auVar16._0_8_ = (long)iVar19;
    auVar16._8_8_ = (long)iVar21;
    auVar10._0_8_ = (long)(iVar22 - iVar19);
    auVar10._8_8_ = (long)(iVar24 - iVar21);
    auVar12 = NEON_scvtf(auVar17,8);
    auVar17 = NEON_scvtf(auVar16,8);
    auVar10 = NEON_scvtf(auVar10,8);
    dVar15 = auVar12._0_8_ / auVar17._0_8_;
    dVar18 = auVar12._8_8_ / auVar17._8_8_;
    puVar1 = puVar8 + *(int *)(param_4 + 0x18);
    auVar17 = NEON_fmov(0xbfe0000000000000,8);
    do {
      uVar7 = *puVar8;
      lVar3 = param_2 + 0x10;
      func_0x000107c303b0(lVar3,FUN_10935032c);
      *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 1;
      uVar5 = *(ulong *)(lVar3 + 0x30);
      if (uVar5 == 0) {
        uVar5 = *(ulong *)(lVar3 + 8);
        if ((uVar5 & 1) != 0) {
          uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        FUN_1093492b0();
        *(ulong *)(lVar3 + 0x30) = uVar5;
      }
      ppuVar2 = &PTR_PTR_1132da178;
      if (*(undefined ***)(uVar7 + 0x30) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(uVar7 + 0x30);
      }
      FUN_109348ea4(auStack_a8,0,ppuVar2);
      if (*(int *)(lVar4 + 0x18) == 1) {
        dVar11 = (double)(float)abStack_a0._8_8_;
        dVar14 = (double)SUB84(abStack_a0._8_8_,4);
        auVar13._0_8_ = dVar11 + dVar15 * (auVar10._0_8_ / auVar12._0_8_) * (dVar11 + auVar17._0_8_)
        ;
        auVar13._8_8_ = dVar14 + dVar18 * (auVar10._8_8_ / auVar12._8_8_) * (dVar14 + auVar17._8_8_)
        ;
      }
      else {
        auVar13 = ZEXT216(0);
        if (*(int *)(lVar4 + 0x18) == 0) {
          auVar13._0_8_ = dVar15 * (double)(float)abStack_a0._8_8_;
          auVar13._8_8_ = dVar18 * (double)SUB84(abStack_a0._8_8_,4);
        }
      }
      *(ulong *)(uVar5 + 0x10) = CONCAT44((float)auVar13._8_8_,(float)auVar13._0_8_);
      *(ulong *)(uVar5 + 0x18) =
           CONCAT44((float)(dVar18 * (double)SUB84(abStack_a0._16_8_,4)),
                    (float)(dVar15 * (double)(float)abStack_a0._16_8_));
      uVar5 = *(ulong *)(uVar7 + 0x18);
      puVar6 = (ulong *)(uVar7 + 0x18);
      if ((uVar5 & 1) != 0) {
        puVar6 = (ulong *)(uVar5 + 7);
      }
      if (*(int *)(uVar7 + 0x20) != 0) {
        lVar9 = (long)*(int *)(uVar7 + 0x20) << 3;
        do {
          uVar7 = *puVar6;
          uVar5 = lVar3 + 0x18;
          func_0x000107c303b0(uVar5,FUN_10934a22c);
          if (uVar7 != uVar5) {
            func_0x000109349ec8(uVar5);
            FUN_10934a194(uVar5,uVar7);
          }
          puVar6 = puVar6 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      if ((abStack_a0[0] & 1) != 0) {
        func_0x0001053936ac(abStack_a0);
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar1);
  }
  return;
}



/* Entry: 109582e28; end: 10958305b;  */

void FUN_109582e28(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  ulong *puVar1;
  undefined **ppuVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  int iVar23;
  undefined1 auStack_98 [8];
  byte abStack_90 [32];
  
  FUN_10957d220();
  uVar19 = *param_3;
  uVar22 = *(undefined8 *)(param_4 + 0x10);
  if (0 < *(int *)(param_2 + 0x18)) {
    func_0x0001053936e4(param_2 + 0x10);
  }
  uVar4 = *(ulong *)(param_1 + 0x10);
  puVar7 = (ulong *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    puVar7 = (ulong *)(uVar4 + 7);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar18 = (int)uVar19;
    iVar21 = (int)uVar22;
    iVar20 = (int)((ulong)uVar19 >> 0x20);
    iVar23 = (int)((ulong)uVar22 >> 0x20);
    auVar16._0_8_ = (long)iVar21;
    auVar16._8_8_ = (long)iVar23;
    auVar15._0_8_ = (long)iVar18;
    auVar15._8_8_ = (long)iVar20;
    auVar9._0_8_ = (long)(iVar21 - iVar18);
    auVar9._8_8_ = (long)(iVar23 - iVar20);
    auVar11 = NEON_scvtf(auVar16,8);
    auVar16 = NEON_scvtf(auVar15,8);
    auVar9 = NEON_scvtf(auVar9,8);
    dVar14 = auVar11._0_8_ / auVar16._0_8_;
    dVar17 = auVar11._8_8_ / auVar16._8_8_;
    puVar1 = puVar7 + *(int *)(param_1 + 0x18);
    auVar16 = NEON_fmov(0xbfe0000000000000,8);
    do {
      uVar6 = *puVar7;
      lVar3 = param_2 + 0x10;
      func_0x000107c303b0(lVar3,FUN_10935032c);
      *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 1;
      uVar4 = *(ulong *)(lVar3 + 0x30);
      if (uVar4 == 0) {
        uVar4 = *(ulong *)(lVar3 + 8);
        if ((uVar4 & 1) != 0) {
          uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
        }
        FUN_1093492b0();
        *(ulong *)(lVar3 + 0x30) = uVar4;
      }
      ppuVar2 = &PTR_PTR_1132da178;
      if (*(undefined ***)(uVar6 + 0x30) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(uVar6 + 0x30);
      }
      FUN_109348ea4(auStack_98,0,ppuVar2);
      if (*(int *)(param_4 + 0x18) == 1) {
        dVar10 = (double)(float)abStack_90._8_8_;
        dVar13 = (double)SUB84(abStack_90._8_8_,4);
        auVar12._0_8_ = dVar10 + dVar14 * (auVar9._0_8_ / auVar11._0_8_) * (dVar10 + auVar16._0_8_);
        auVar12._8_8_ = dVar13 + dVar17 * (auVar9._8_8_ / auVar11._8_8_) * (dVar13 + auVar16._8_8_);
      }
      else {
        auVar12 = ZEXT216(0);
        if (*(int *)(param_4 + 0x18) == 0) {
          auVar12._0_8_ = dVar14 * (double)(float)abStack_90._8_8_;
          auVar12._8_8_ = dVar17 * (double)SUB84(abStack_90._8_8_,4);
        }
      }
      *(ulong *)(uVar4 + 0x10) = CONCAT44((float)auVar12._8_8_,(float)auVar12._0_8_);
      *(ulong *)(uVar4 + 0x18) =
           CONCAT44((float)(dVar17 * (double)SUB84(abStack_90._16_8_,4)),
                    (float)(dVar14 * (double)(float)abStack_90._16_8_));
      uVar4 = *(ulong *)(uVar6 + 0x18);
      puVar5 = (ulong *)(uVar6 + 0x18);
      if ((uVar4 & 1) != 0) {
        puVar5 = (ulong *)(uVar4 + 7);
      }
      if (*(int *)(uVar6 + 0x20) != 0) {
        lVar8 = (long)*(int *)(uVar6 + 0x20) << 3;
        do {
          uVar6 = *puVar5;
          uVar4 = lVar3 + 0x18;
          func_0x000107c303b0(uVar4,FUN_10934a22c);
          if (uVar6 != uVar4) {
            func_0x000109349ec8(uVar4);
            FUN_10934a194(uVar4,uVar6);
          }
          puVar5 = puVar5 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
      if ((abStack_90[0] & 1) != 0) {
        func_0x0001053936ac(abStack_90);
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar1);
  }
  return;
}



/* Entry: 10958305c; end: 10958307f;  */

void FUN_10958305c(void)

{
  return;
}



/* Entry: 109583080; end: 109583093;  */

undefined * FUN_109583080(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar5 = *(long **)(puVar4 + 0x28);
  if (plVar5 == (long *)(puVar4 + 0x10)) {
    lVar6 = 0x20;
  }
  else {
    if (plVar5 == (long *)0x0) goto SUB_10951ea70;
    lVar6 = 0x28;
  }
  (**(code **)(*plVar5 + lVar6))();
SUB_10951ea70:
  plVar5 = *(long **)(puVar4 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return puVar4;
}



/* Entry: 109583094; end: 1095830df;  */

long FUN_109583094(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)(param_1 + 0x10)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto SUB_10951ea70;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
SUB_10951ea70:
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 1095830e0; end: 10958312b;  */

void FUN_1095830e0(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  func_0x0001095707b8();
  func_0x000105687250(param_1 + 2,param_2 + 0x10);
  return;
}



/* Entry: 10958312c; end: 109583203;  */

undefined8 * FUN_10958312c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110afcb30;
  FUN_10936134c(param_1 + 10);
  FUN_10936134c(param_1 + 4);
  FUN_10958392c(param_1 + 1);
  return param_1;
}



/* Entry: 109583204; end: 10958380f;  */

void FUN_109583204(long *param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 ****ppppuVar9;
  undefined8 uVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *unaff_x20;
  long *unaff_x22;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined **ppuStack_220;
  ulong uStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 ***pppuStack_170;
  ulong uStack_168;
  byte bStack_159;
  undefined8 ***apppuStack_158 [2];
  char cStack_141;
  undefined8 **ppuStack_140;
  undefined8 **ppuStack_138;
  undefined8 **ppuStack_130;
  undefined8 uStack_120;
  long *plStack_118;
  long alStack_110 [3];
  long *plStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long alStack_e0 [3];
  long *plStack_c8;
  undefined8 uStack_a0;
  long *plStack_98;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar12 = *(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4);
  lVar14 = **(long **)(param_2 + 2);
  plStack_1d8 = param_1;
  if (*(long *)(lVar14 + (long)iVar12 * 0x50 + 0x40) != 0) {
    unaff_x22 = alStack_110;
    plVar8 = alStack_e0;
    plStack_1a8 = alStack_90;
    plStack_1b8 = unaff_x22;
    plStack_1b0 = plVar8;
    do {
      FUN_1095659c8(&uStack_f0,lVar14 + (long)iVar12 * 0x50);
      uStack_120 = 0;
      plStack_118 = (long *)0x0;
      plStack_f8 = (long *)0x0;
      func_0x0001095707b8(&uStack_120,&uStack_f0);
      func_0x000105687250(unaff_x22,plVar8);
      if (plStack_c8 == plVar8) {
        lVar14 = 0x20;
LAB_1095832c8:
        (**(code **)(*plStack_c8 + lVar14))();
      }
      else if (plStack_c8 != (long *)0x0) {
        lVar14 = 0x28;
        goto LAB_1095832c8;
      }
      plVar11 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        plVar1 = plStack_e8 + 1;
        do {
          lVar14 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      puVar7 = &uStack_120;
      FUN_10951e8bc(puVar7);
      if (param_1[2] != param_1[1]) {
        uVar16 = 0;
        iVar12 = 1;
        puVar18 = puVar7;
        do {
          if ((*(byte *)(*(long *)(param_2 + 2) + 0xc0) & 1) == 0) {
            ppuStack_1a0 = &PTR_FUN_110af37c0;
            uStack_198 = 0;
            uStack_188 = 0;
            uStack_180 = 0;
            uStack_190 = 0;
            uStack_178 = 0;
            goto LAB_109583664;
          }
          lVar14 = 0x20;
          if ((uVar16 & 1) != 0) {
            lVar14 = 0x50;
          }
          puVar17 = (undefined8 *)(param_1[1] + uVar16 * 0x48);
          uStack_a0 = 0;
          plStack_98 = (long *)0x0;
          plStack_78 = (long *)0x0;
          if (*(char *)(puVar17 + 8) == '\x01') {
            iVar2 = *(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) + iVar12;
            lVar15 = **(long **)(param_2 + 2);
            if (*(long *)(lVar15 + (long)iVar2 * 0x50 + 0x40) == 0) {
              func_0x000105688514(&UNK_10f57420e);
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x109583744);
              (*pcVar6)();
            }
            FUN_1095659c8(&uStack_f0,lVar15 + (long)iVar2 * 0x50);
            plVar11 = plStack_98;
            plStack_98 = plStack_e8;
            uStack_a0 = uStack_f0;
            uStack_f0 = 0;
            plStack_e8 = (long *)0x0;
            if (plVar11 != (long *)0x0) {
              plVar1 = plVar11 + 1;
              do {
                lVar15 = *plVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar15 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
              }
            }
            func_0x00010951eac8(plStack_1a8,plVar8);
            if (plStack_c8 == plVar8) {
              lVar15 = 0x20;
LAB_109583408:
              (**(code **)(*plStack_c8 + lVar15))();
            }
            else if (plStack_c8 != (long *)0x0) {
              lVar15 = 0x28;
              goto LAB_109583408;
            }
            plVar8 = plStack_e8;
            if (plStack_e8 != (long *)0x0) {
              plVar11 = plStack_e8 + 1;
              do {
                lVar15 = *plVar11;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar5) {
                  *plVar11 = lVar15 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar15 == 0) {
                (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            iVar12 = iVar12 + 1;
          }
          plVar8 = *(long **)(param_2 + 2);
          FUN_109565a70(plVar8,*param_2);
          uVar13 = plVar8[1];
          if (-1 < (char)*(byte *)((long)plVar8 + 0x17)) {
            uVar13 = (ulong)*(byte *)((long)plVar8 + 0x17);
          }
          func_0x000104c4f768(apppuStack_158,uVar13 + 0xb,&pppuStack_170);
          ppppuVar3 = (undefined8 ****)apppuStack_158[0];
          if (-1 < cStack_141) {
            ppppuVar3 = apppuStack_158;
          }
          if (uVar13 != 0) {
            plVar11 = (long *)*plVar8;
            if (-1 < *(char *)((long)plVar8 + 0x17)) {
              plVar11 = plVar8;
            }
            _memmove(ppppuVar3,plVar11,uVar13);
          }
          puVar7 = (undefined8 *)((long)ppppuVar3 + uVar13);
          *puVar7 = 0x6f66736e6172745f;
          *(undefined4 *)((long)puVar7 + 7) = 0x5f6d726f;
          *(undefined1 *)((long)puVar7 + 0xb) = 0;
          __ZNSt3__19to_stringEm(&pppuStack_170,uVar16);
          uVar13 = uStack_168;
          ppppuVar3 = (undefined8 ****)pppuStack_170;
          if (-1 < (char)bStack_159) {
            uVar13 = (ulong)bStack_159;
            ppppuVar3 = &pppuStack_170;
          }
          ppppuVar9 = apppuStack_158;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppuVar9,ppppuVar3,uVar13);
          ppuStack_138 = ppppuVar9[1];
          ppuStack_140 = *ppppuVar9;
          ppuStack_130 = ppppuVar9[2];
          ppppuVar9[1] = (undefined8 ***)0x0;
          ppppuVar9[2] = (undefined8 ***)0x0;
          *ppppuVar9 = (undefined8 ***)0x0;
          uVar10 = *(undefined8 *)(param_2 + 2);
          FUN_109565a70(uVar10,*param_2);
          FUN_1095617dc(&uStack_f0,&ppuStack_140,uVar10,*(long *)(param_2 + 2) + 0x108);
          if ((long)ppuStack_130 < 0) {
            __ZdlPv(ppuStack_140);
          }
          plVar8 = plStack_1b0;
          if ((char)bStack_159 < '\0') {
            __ZdlPv(pppuStack_170);
          }
          if (cStack_141 < '\0') {
            __ZdlPv(apppuStack_158[0]);
          }
          puVar7 = (undefined8 *)((long)param_1 + lVar14);
          (*(code *)*puVar17)(puVar18,puVar7,&uStack_a0,puVar17);
          FUN_10956189c(&uStack_f0);
          if (plStack_78 == plStack_1a8) {
            lVar14 = 0x20;
LAB_1095835c4:
            (**(code **)(*plStack_78 + lVar14))();
          }
          else if (plStack_78 != (long *)0x0) {
            lVar14 = 0x28;
            goto LAB_1095835c4;
          }
          plVar11 = plStack_98;
          if (plStack_98 != (long *)0x0) {
            plVar1 = plStack_98 + 1;
            do {
              lVar14 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_98 + 0x10))(plStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
          uVar16 = uVar16 + 1;
          puVar18 = puVar7;
        } while (uVar16 < (ulong)((param_1[2] - param_1[1] >> 3) * -0x71c71c71c71c71c7));
      }
      FUN_1093612d8(&ppuStack_1a0,0,puVar7);
LAB_109583664:
      FUN_109583f80(param_2,&ppuStack_1a0);
      unaff_x22 = plStack_1b8;
      FUN_10936134c(&ppuStack_1a0);
      plStack_1d8 = plStack_f8;
      if (plStack_f8 == unaff_x22) {
        lVar14 = 0x20;
LAB_109583698:
        (**(code **)(*plStack_f8 + lVar14))();
      }
      else if (plStack_f8 != (long *)0x0) {
        lVar14 = 0x28;
        goto LAB_109583698;
      }
      plVar11 = plStack_118;
      if (plStack_118 != (long *)0x0) {
        plVar1 = plStack_118 + 1;
        do {
          lVar14 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plStack_1d8 = plVar11;
        }
      }
      iVar12 = *(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4);
      lVar14 = **(long **)(param_2 + 2);
      unaff_x20 = param_1;
    } while (*(long *)(lVar14 + (long)iVar12 * 0x50 + 0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_1095841ac(&uStack_120);
  plVar11 = plStack_1d8;
  __Unwind_Resume();
  uStack_1e8 = 0x50;
  pcStack_1c8 = FUN_109583810;
  ppuStack_220 = &PTR_FUN_110af37c0;
  uStack_218 = 0;
  plVar8 = plVar11 + 4;
  lStack_208 = 0;
  uStack_200 = 0;
  lStack_210 = 0;
  uStack_1f8 = 0;
  plStack_1f0 = unaff_x22;
  plStack_1e0 = unaff_x20;
  puStack_1d0 = &stack0xfffffffffffffff0;
  if ((undefined ***)plVar8 != &ppuStack_220) {
    uVar13 = plVar11[5];
    uVar16 = uVar13;
    if ((uVar13 & 1) != 0) {
      uVar16 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
    }
    if (uVar16 == 0) {
      plVar11[5] = 0;
      lStack_208 = plVar11[7];
      lStack_210 = plVar11[6];
      plVar11[7] = 0;
      plVar11[6] = 0;
      uStack_218 = uVar13;
    }
    else {
      FUN_1093613a4(plVar8);
      FUN_10936160c(plVar8,&ppuStack_220);
    }
  }
  FUN_10936134c(&ppuStack_220);
  ppuStack_220 = &PTR_FUN_110af37c0;
  uStack_218 = 0;
  plVar8 = plVar11 + 10;
  lStack_208 = 0;
  uStack_200 = 0;
  lStack_210 = 0;
  uStack_1f8 = 0;
  if ((undefined ***)plVar8 != &ppuStack_220) {
    uVar13 = plVar11[0xb];
    uVar16 = uVar13;
    if ((uVar13 & 1) != 0) {
      uVar16 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
    }
    if (uVar16 == 0) {
      plVar11[0xb] = 0;
      lStack_208 = plVar11[0xd];
      lStack_210 = plVar11[0xc];
      plVar11[0xd] = 0;
      plVar11[0xc] = 0;
      uStack_218 = uVar13;
    }
    else {
      FUN_1093613a4(plVar8);
      FUN_10936160c(plVar8,&ppuStack_220);
    }
  }
  FUN_10936134c(&ppuStack_220);
  return;
}



/* Entry: 109583810; end: 10958392b;  */

void FUN_109583810(long param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  ppuStack_60 = &PTR_FUN_110af37c0;
  uStack_58 = 0;
  puVar1 = (undefined1 *)(param_1 + 0x20);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  if ((undefined ***)puVar1 != &ppuStack_60) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    uVar2 = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    if (uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      uStack_48 = *(undefined8 *)(param_1 + 0x38);
      uStack_50 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      uStack_58 = uVar3;
    }
    else {
      FUN_1093613a4(puVar1);
      FUN_10936160c(puVar1,&ppuStack_60);
    }
  }
  FUN_10936134c(&ppuStack_60);
  ppuStack_60 = &PTR_FUN_110af37c0;
  uStack_58 = 0;
  puVar1 = (undefined1 *)(param_1 + 0x50);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  if ((undefined ***)puVar1 != &ppuStack_60) {
    uVar3 = *(ulong *)(param_1 + 0x58);
    uVar2 = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    if (uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
      uStack_48 = *(undefined8 *)(param_1 + 0x68);
      uStack_50 = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      uStack_58 = uVar3;
    }
    else {
      FUN_1093613a4(puVar1);
      FUN_10936160c(puVar1,&ppuStack_60);
    }
  }
  FUN_10936134c(&ppuStack_60);
  return;
}



/* Entry: 10958392c; end: 1095839a3;  */

void FUN_10958392c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[1] != puVar2) {
      puVar1 = (undefined8 *)param_1[1] + -8;
      do {
        puVar3 = puVar1 + -1;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -9;
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



/* Entry: 1095839a4; end: 1095839b3;  */

void FUN_1095839a4(undefined8 param_1,long param_2,int *param_3,long param_4)

{
  int *piVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  ulong *puVar19;
  undefined1 auStack_218 [4];
  int iStack_214;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [4];
  int iStack_1b4;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  int iStack_150;
  int iStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined4 *puStack_a8;
  long *plStack_a0;
  long alStack_98 [3];
  
  func_0x000105277f8c();
  FUN_10957d220();
  iVar5 = *param_3;
  iVar6 = param_3[1];
  if (0 < *(int *)(param_2 + 0x18)) {
    func_0x0001053936e4(param_2 + 0x10);
  }
  uVar14 = *(ulong *)(param_4 + 0x10);
  puVar19 = (ulong *)(param_4 + 0x10);
  if ((uVar14 & 1) != 0) {
    puVar19 = (ulong *)(uVar14 + 7);
  }
  if (*(int *)(param_4 + 0x18) != 0) {
    puVar2 = puVar19 + *(int *)(param_4 + 0x18);
    do {
      uVar14 = *puVar19;
      lVar15 = param_2 + 0x10;
      func_0x000107c303b0(lVar15,0x109361700);
      ppuVar17 = &PTR_PTR_1132de100;
      if (*(undefined ***)(uVar14 + 0x20) != (undefined **)0x0) {
        ppuVar17 = *(undefined ***)(uVar14 + 0x20);
      }
      uStack_d8 = (ulong)ppuVar17[2] & 0xfffffffffffffffc;
      if (*(char *)(uStack_d8 + 0x17) < '\0') {
        uStack_d8 = *(ulong *)uStack_d8;
      }
      lVar16 = (long)*(int *)(ppuVar17 + 3) * (long)*(int *)((long)ppuVar17 + 0x1c);
      uStack_e8 = 0x242ff0000;
      iStack_dc = (int)lVar16;
      uStack_e0 = 1;
      lStack_c0 = 0;
      lStack_c8 = 0;
      lStack_b0 = 0;
      uStack_b8 = 0;
      alStack_98[0] = 0;
      alStack_98[1] = 0;
      uStack_d0 = uStack_d8;
      puStack_a8 = &uStack_e0;
      plStack_a0 = alStack_98;
      if (iStack_dc != 0 && uStack_d8 == 0) {
        puVar11 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        uStack_148 = puVar11 + 1;
        uStack_140 = 0x1c;
        *(undefined1 *)(puVar11 + 8) = 0;
        *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&uStack_148,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x109583ed0);
        (*pcVar9)();
      }
      uStack_e8 = 0x242ff4000;
      alStack_98[1] = 1;
      lStack_c8 = uStack_d8 + lVar16;
      lStack_c0 = lStack_c8;
      alStack_98[0] = lVar16;
      FUN_109a890bc(&uStack_148,&uStack_e8,0,*(undefined4 *)((long)ppuVar17 + 0x1c));
      uStack_158 = 0;
      iStack_150 = iVar5;
      iStack_14c = iVar6;
      FUN_109a852c8(auStack_1b8,&uStack_148,&uStack_158);
      FUN_109a890bc(auStack_218,auStack_1b8,1,1);
      *(uint *)(lVar15 + 0x10) = *(uint *)(lVar15 + 0x10) | 2;
      uVar10 = *(ulong *)(lVar15 + 0x20);
      if (uVar10 == 0) {
        uVar10 = *(ulong *)(lVar15 + 8);
        if ((uVar10 & 1) != 0) {
          uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
        }
        FUN_1093616ac();
        *(ulong *)(lVar15 + 0x20) = uVar10;
      }
      *(int *)(uVar10 + 0x18) = iVar5;
      *(int *)(uVar10 + 0x1c) = iVar6;
      uVar12 = *(ulong *)(uVar10 + 8);
      if ((uVar12 & 1) != 0) {
        uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
      }
      func_0x00010b4bf088(uVar10 + 0x10,uStack_208,(long)(iVar6 * iVar5),uVar12);
      uVar13 = *(uint *)(lVar15 + 0x10) | 4;
      *(uint *)(lVar15 + 0x10) = uVar13;
      ppuVar17 = *(undefined ***)(lVar15 + 0x28);
      if (ppuVar17 == (undefined **)0x0) {
        ppuVar17 = *(undefined ***)(lVar15 + 8);
        if (((ulong)ppuVar17 & 1) != 0) {
          ppuVar17 = *(undefined ***)((ulong)ppuVar17 & 0xfffffffffffffffe);
        }
        func_0x0001093492fc();
        *(undefined ***)(lVar15 + 0x28) = ppuVar17;
        uVar13 = *(uint *)(lVar15 + 0x10);
      }
      *(uint *)(lVar15 + 0x10) = uVar13 | 1;
      ppuVar18 = *(undefined ***)(lVar15 + 0x18);
      if (ppuVar18 == (undefined **)0x0) {
        ppuVar18 = *(undefined ***)(lVar15 + 8);
        if (((ulong)ppuVar18 & 1) != 0) {
          ppuVar18 = *(undefined ***)((ulong)ppuVar18 & 0xfffffffffffffffe);
        }
        FUN_10934a22c();
        *(undefined ***)(lVar15 + 0x18) = ppuVar18;
      }
      ppuVar3 = &PTR_PTR_1132da578;
      if (*(undefined ***)(uVar14 + 0x18) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(uVar14 + 0x18);
      }
      if (ppuVar3 != ppuVar18) {
        func_0x000109349ec8(ppuVar18);
        FUN_10934a194(ppuVar18,ppuVar3);
      }
      ppuVar18 = &PTR_PTR_1132da1a0;
      if (*(undefined ***)(uVar14 + 0x28) != (undefined **)0x0) {
        ppuVar18 = *(undefined ***)(uVar14 + 0x28);
      }
      if (ppuVar18 != ppuVar17) {
        func_0x000109348c04(ppuVar17);
        FUN_109348af4(ppuVar17,ppuVar18);
      }
      if (lStack_1e0 != 0) {
        piVar1 = (int *)(lStack_1e0 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(auStack_218);
        }
      }
      lStack_1e0 = 0;
      uStack_200 = 0;
      uStack_208 = 0;
      uStack_1f0 = 0;
      uStack_1f8 = 0;
      if (0 < iStack_214) {
        lVar15 = 0;
        do {
          *(undefined4 *)(lStack_1d8 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < iStack_214);
      }
      if (puStack_1d0 != auStack_1c8 && puStack_1d0 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_1d0 + -8));
      }
      if (lStack_180 != 0) {
        piVar1 = (int *)(lStack_180 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(auStack_1b8);
        }
      }
      lStack_180 = 0;
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_190 = 0;
      uStack_198 = 0;
      if (0 < iStack_1b4) {
        lVar15 = 0;
        do {
          *(undefined4 *)(lStack_178 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < iStack_1b4);
      }
      if (puStack_170 != auStack_168 && puStack_170 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_170 + -8));
      }
      if (lStack_110 != 0) {
        piVar1 = (int *)(lStack_110 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_148);
        }
      }
      lStack_110 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      if (0 < uStack_148._4_4_) {
        lVar15 = 0;
        do {
          *(undefined4 *)(lStack_108 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < uStack_148._4_4_);
      }
      if (puStack_100 != auStack_f8 && puStack_100 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_100 + -8));
      }
      if (lStack_b0 != 0) {
        piVar1 = (int *)(lStack_b0 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_e8);
        }
      }
      lStack_b0 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      lStack_c0 = 0;
      lStack_c8 = 0;
      if (0 < uStack_e8._4_4_) {
        lVar15 = 0;
        do {
          puStack_a8[lVar15] = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < uStack_e8._4_4_);
      }
      if (plStack_a0 != alStack_98 && plStack_a0 != (long *)0x0) {
        _free(plStack_a0[-1]);
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 != puVar2);
  }
  return;
}



/* Entry: 1095839b4; end: 109583f57;  */

void FUN_1095839b4(long param_1,long param_2,int *param_3)

{
  int *piVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  ulong *puVar19;
  undefined1 auStack_208 [4];
  int iStack_204;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [4];
  int iStack_1a4;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  int iStack_140;
  int iStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined4 *puStack_98;
  long *plStack_90;
  long alStack_88 [3];
  
  FUN_10957d220();
  iVar5 = *param_3;
  iVar6 = param_3[1];
  if (0 < *(int *)(param_2 + 0x18)) {
    func_0x0001053936e4(param_2 + 0x10);
  }
  uVar14 = *(ulong *)(param_1 + 0x10);
  puVar19 = (ulong *)(param_1 + 0x10);
  if ((uVar14 & 1) != 0) {
    puVar19 = (ulong *)(uVar14 + 7);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar2 = puVar19 + *(int *)(param_1 + 0x18);
    do {
      uVar14 = *puVar19;
      lVar15 = param_2 + 0x10;
      func_0x000107c303b0(lVar15,0x109361700);
      ppuVar17 = &PTR_PTR_1132de100;
      if (*(undefined ***)(uVar14 + 0x20) != (undefined **)0x0) {
        ppuVar17 = *(undefined ***)(uVar14 + 0x20);
      }
      uStack_c8 = (ulong)ppuVar17[2] & 0xfffffffffffffffc;
      if (*(char *)(uStack_c8 + 0x17) < '\0') {
        uStack_c8 = *(ulong *)uStack_c8;
      }
      lVar16 = (long)*(int *)(ppuVar17 + 3) * (long)*(int *)((long)ppuVar17 + 0x1c);
      uStack_d8 = 0x242ff0000;
      iStack_cc = (int)lVar16;
      uStack_d0 = 1;
      lStack_b0 = 0;
      lStack_b8 = 0;
      lStack_a0 = 0;
      uStack_a8 = 0;
      alStack_88[0] = 0;
      alStack_88[1] = 0;
      uStack_c0 = uStack_c8;
      puStack_98 = &uStack_d0;
      plStack_90 = alStack_88;
      if (iStack_cc != 0 && uStack_c8 == 0) {
        puVar11 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        uStack_138 = puVar11 + 1;
        uStack_130 = 0x1c;
        *(undefined1 *)(puVar11 + 8) = 0;
        *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&uStack_138,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x109583ed0);
        (*pcVar9)();
      }
      uStack_d8 = 0x242ff4000;
      alStack_88[1] = 1;
      lStack_b8 = uStack_c8 + lVar16;
      lStack_b0 = lStack_b8;
      alStack_88[0] = lVar16;
      FUN_109a890bc(&uStack_138,&uStack_d8,0,*(undefined4 *)((long)ppuVar17 + 0x1c));
      uStack_148 = 0;
      iStack_140 = iVar5;
      iStack_13c = iVar6;
      FUN_109a852c8(auStack_1a8,&uStack_138,&uStack_148);
      FUN_109a890bc(auStack_208,auStack_1a8,1,1);
      *(uint *)(lVar15 + 0x10) = *(uint *)(lVar15 + 0x10) | 2;
      uVar10 = *(ulong *)(lVar15 + 0x20);
      if (uVar10 == 0) {
        uVar10 = *(ulong *)(lVar15 + 8);
        if ((uVar10 & 1) != 0) {
          uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
        }
        FUN_1093616ac();
        *(ulong *)(lVar15 + 0x20) = uVar10;
      }
      *(int *)(uVar10 + 0x18) = iVar5;
      *(int *)(uVar10 + 0x1c) = iVar6;
      uVar12 = *(ulong *)(uVar10 + 8);
      if ((uVar12 & 1) != 0) {
        uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
      }
      func_0x00010b4bf088(uVar10 + 0x10,uStack_1f8,(long)(iVar6 * iVar5),uVar12);
      uVar13 = *(uint *)(lVar15 + 0x10) | 4;
      *(uint *)(lVar15 + 0x10) = uVar13;
      ppuVar17 = *(undefined ***)(lVar15 + 0x28);
      if (ppuVar17 == (undefined **)0x0) {
        ppuVar17 = *(undefined ***)(lVar15 + 8);
        if (((ulong)ppuVar17 & 1) != 0) {
          ppuVar17 = *(undefined ***)((ulong)ppuVar17 & 0xfffffffffffffffe);
        }
        func_0x0001093492fc();
        *(undefined ***)(lVar15 + 0x28) = ppuVar17;
        uVar13 = *(uint *)(lVar15 + 0x10);
      }
      *(uint *)(lVar15 + 0x10) = uVar13 | 1;
      ppuVar18 = *(undefined ***)(lVar15 + 0x18);
      if (ppuVar18 == (undefined **)0x0) {
        ppuVar18 = *(undefined ***)(lVar15 + 8);
        if (((ulong)ppuVar18 & 1) != 0) {
          ppuVar18 = *(undefined ***)((ulong)ppuVar18 & 0xfffffffffffffffe);
        }
        FUN_10934a22c();
        *(undefined ***)(lVar15 + 0x18) = ppuVar18;
      }
      ppuVar3 = &PTR_PTR_1132da578;
      if (*(undefined ***)(uVar14 + 0x18) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(uVar14 + 0x18);
      }
      if (ppuVar3 != ppuVar18) {
        func_0x000109349ec8(ppuVar18);
        FUN_10934a194(ppuVar18,ppuVar3);
      }
      ppuVar18 = &PTR_PTR_1132da1a0;
      if (*(undefined ***)(uVar14 + 0x28) != (undefined **)0x0) {
        ppuVar18 = *(undefined ***)(uVar14 + 0x28);
      }
      if (ppuVar18 != ppuVar17) {
        func_0x000109348c04(ppuVar17);
        FUN_109348af4(ppuVar17,ppuVar18);
      }
      if (lStack_1d0 != 0) {
        piVar1 = (int *)(lStack_1d0 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(auStack_208);
        }
      }
      lStack_1d0 = 0;
      uStack_1f0 = 0;
      uStack_1f8 = 0;
      uStack_1e0 = 0;
      uStack_1e8 = 0;
      if (0 < iStack_204) {
        lVar15 = 0;
        do {
          *(undefined4 *)(lStack_1c8 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < iStack_204);
      }
      if (puStack_1c0 != auStack_1b8 && puStack_1c0 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_1c0 + -8));
      }
      if (lStack_170 != 0) {
        piVar1 = (int *)(lStack_170 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(auStack_1a8);
        }
      }
      lStack_170 = 0;
      uStack_190 = 0;
      uStack_198 = 0;
      uStack_180 = 0;
      uStack_188 = 0;
      if (0 < iStack_1a4) {
        lVar15 = 0;
        do {
          *(undefined4 *)(lStack_168 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < iStack_1a4);
      }
      if (puStack_160 != auStack_158 && puStack_160 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_160 + -8));
      }
      if (lStack_100 != 0) {
        piVar1 = (int *)(lStack_100 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_138);
        }
      }
      lStack_100 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_110 = 0;
      uStack_118 = 0;
      if (0 < uStack_138._4_4_) {
        lVar15 = 0;
        do {
          *(undefined4 *)(lStack_f8 + lVar15 * 4) = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < uStack_138._4_4_);
      }
      if (puStack_f0 != auStack_e8 && puStack_f0 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_f0 + -8));
      }
      if (lStack_a0 != 0) {
        piVar1 = (int *)(lStack_a0 + 0x14);
        do {
          iVar4 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_d8);
        }
      }
      lStack_a0 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      lStack_b0 = 0;
      lStack_b8 = 0;
      if (0 < uStack_d8._4_4_) {
        lVar15 = 0;
        do {
          puStack_98[lVar15] = 0;
          lVar15 = lVar15 + 1;
        } while (lVar15 < uStack_d8._4_4_);
      }
      if (plStack_90 != alStack_88 && plStack_90 != (long *)0x0) {
        _free(plStack_90[-1]);
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 != puVar2);
  }
  return;
}



/* Entry: 109583f58; end: 109583f6b;  */

void FUN_109583f58(void)

{
  return;
}



/* Entry: 109583f6c; end: 109583f7f;  */

long * FUN_109583f6c(void)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  long alStack_98 [3];
  long *plStack_80;
  undefined **ppuStack_78;
  long *plStack_70;
  undefined ***pppuStack_60;
  long lStack_48;
  
  piVar6 = (int *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1095842f0(&ppuStack_78);
  plVar7 = (long *)0x38;
  __Znwm();
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_DAT_1108a6378;
  plVar7[1] = 0;
  plVar9 = plVar7 + 3;
  *plVar9 = 0;
  plVar7[4] = 0;
  lVar8 = 0x30;
  __Znwm();
  FUN_1095842f0();
  plVar7[3] = (long)FUN_1095841f8;
  plVar7[4] = lVar8;
  FUN_10936134c(&ppuStack_78);
  ppuStack_78 = &PTR_FUN_110afcb80;
  plStack_b8 = plVar9;
  plStack_b0 = plVar7;
  plStack_70 = plVar9;
  pppuStack_60 = &ppuStack_78;
  FUN_109567d5c(auStack_a8,&plStack_b8,&ppuStack_78);
  if (pppuStack_60 == &ppuStack_78) {
    lVar8 = 0x20;
LAB_109584044:
    (**(code **)((long)*pppuStack_60 + lVar8))();
  }
  else if (pppuStack_60 != (undefined ***)0x0) {
    lVar8 = 0x28;
    goto LAB_109584044;
  }
  plVar7 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar9 = plStack_b0 + 1;
    do {
      lVar8 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  puVar10 = (undefined8 *)(*(long *)(*(long *)(piVar6 + 2) + 0x78) + (long)*piVar6 * 0x18);
  piVar3 = (int *)puVar10[1];
  for (piVar2 = (int *)*puVar10; piVar2 != piVar3; piVar2 = piVar2 + 2) {
    if (*piVar2 == 0) {
      func_0x000109566260(**(long **)(piVar6 + 2) + (long)piVar2[1] * 0x50 + 0x18,auStack_a8);
    }
  }
  if (plStack_80 == alStack_98) {
    lVar8 = 0x20;
LAB_109584100:
    (**(code **)(*plStack_80 + lVar8))();
  }
  else if (plStack_80 != (long *)0x0) {
    lVar8 = 0x28;
    goto LAB_109584100;
  }
  plVar7 = plStack_80;
  if (plStack_a0 != (long *)0x0) {
    plVar9 = plStack_a0 + 1;
    do {
      lVar8 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar7 = plStack_a0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar7;
  }
  ___stack_chk_fail();
  __ZNSt3__119__shared_weak_countD2Ev(piVar2);
  __ZdlPv();
  FUN_10936134c(&ppuStack_78);
  __Unwind_Resume();
  plVar9 = (long *)plVar7[5];
  if (plVar9 == plVar7 + 2) {
    lVar8 = 0x20;
  }
  else {
    if (plVar9 == (long *)0x0) goto SUB_10951ea70;
    lVar8 = 0x28;
  }
  (**(code **)(*plVar9 + lVar8))();
SUB_10951ea70:
  plVar9 = (long *)plVar7[1];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return plVar7;
}



/* Entry: 109583f80; end: 1095841ab;  */

long * FUN_109583f80(int *param_1)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [8];
  long *plStack_90;
  long alStack_88 [3];
  long *plStack_70;
  undefined **ppuStack_68;
  long *plStack_60;
  undefined ***pppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1095842f0(&ppuStack_68);
  plVar6 = (long *)0x38;
  __Znwm();
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_DAT_1108a6378;
  plVar6[1] = 0;
  plVar8 = plVar6 + 3;
  *plVar8 = 0;
  plVar6[4] = 0;
  lVar7 = 0x30;
  __Znwm();
  FUN_1095842f0();
  plVar6[3] = (long)FUN_1095841f8;
  plVar6[4] = lVar7;
  FUN_10936134c(&ppuStack_68);
  ppuStack_68 = &PTR_FUN_110afcb80;
  plStack_a8 = plVar8;
  plStack_a0 = plVar6;
  plStack_60 = plVar8;
  pppuStack_50 = &ppuStack_68;
  FUN_109567d5c(auStack_98,&plStack_a8,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar7 = 0x20;
LAB_109584044:
    (**(code **)((long)*pppuStack_50 + lVar7))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar7 = 0x28;
    goto LAB_109584044;
  }
  plVar6 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar8 = plStack_a0 + 1;
    do {
      lVar7 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  puVar9 = (undefined8 *)(*(long *)(*(long *)(param_1 + 2) + 0x78) + (long)*param_1 * 0x18);
  piVar3 = (int *)puVar9[1];
  for (piVar2 = (int *)*puVar9; piVar2 != piVar3; piVar2 = piVar2 + 2) {
    if (*piVar2 == 0) {
      func_0x000109566260(**(long **)(param_1 + 2) + (long)piVar2[1] * 0x50 + 0x18,auStack_98);
    }
  }
  if (plStack_70 == alStack_88) {
    lVar7 = 0x20;
LAB_109584100:
    (**(code **)(*plStack_70 + lVar7))();
  }
  else if (plStack_70 != (long *)0x0) {
    lVar7 = 0x28;
    goto LAB_109584100;
  }
  plVar6 = plStack_70;
  if (plStack_90 != (long *)0x0) {
    plVar8 = plStack_90 + 1;
    do {
      lVar7 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plStack_90;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar6;
  }
  ___stack_chk_fail();
  __ZNSt3__119__shared_weak_countD2Ev(piVar2);
  __ZdlPv();
  FUN_10936134c(&ppuStack_68);
  __Unwind_Resume();
  plVar8 = (long *)plVar6[5];
  if (plVar8 == plVar6 + 2) {
    lVar7 = 0x20;
  }
  else {
    if (plVar8 == (long *)0x0) goto SUB_10951ea70;
    lVar7 = 0x28;
  }
  (**(code **)(*plVar8 + lVar7))();
SUB_10951ea70:
  plVar8 = (long *)plVar6[1];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return plVar6;
}



/* Entry: 1095841ac; end: 1095841f7;  */

long FUN_1095841ac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)(param_1 + 0x10)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto SUB_10951ea70;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
SUB_10951ea70:
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 1095841f8; end: 1095842ef;  */

undefined **
FUN_1095841f8(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      uVar2 = 0x30;
      __Znwm();
      FUN_1093612d8();
      *param_3 = FUN_1095841f8;
      param_3[1] = uVar2;
      return (undefined **)0x0;
    }
    FUN_10936134c(param_2[1]);
    __ZdlPv();
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return &PTR_DAT_110af38f0;
      }
      if (param_4 == 0) {
        uVar1 = (uint)(param_5 == &UNK_10dfd1690);
      }
      else {
        func_0x000107c31948(param_4,&PTR_DAT_110af38f0);
        uVar1 = (uint)param_4;
      }
      if (uVar1 != 0) {
        return (undefined **)param_2[1];
      }
      return (undefined **)0x0;
    }
    uVar2 = param_2[1];
    *param_3 = FUN_1095841f8;
    param_3[1] = uVar2;
  }
  *param_2 = 0;
  return (undefined **)0x0;
}



/* Entry: 1095842f0; end: 109584397;  */

undefined8 * FUN_1095842f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  
  puVar3 = param_1 + 2;
  *puVar3 = 0;
  *param_1 = &PTR_FUN_110af37c0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (param_1 != param_2) {
    uVar4 = param_2[1];
    uVar2 = uVar4;
    if ((uVar4 & 1) != 0) {
      uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    if (uVar2 == 0) {
      param_1[1] = uVar4;
      param_2[1] = 0;
      lVar5 = 0;
      do {
        uVar1 = *(undefined1 *)((long)puVar3 + lVar5);
        *(undefined1 *)((long)puVar3 + lVar5) = *(undefined1 *)((long)param_2 + lVar5 + 0x10);
        *(undefined1 *)((long)param_2 + lVar5 + 0x10) = uVar1;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
    }
    else {
      FUN_1093613a4(param_1);
      FUN_10936160c(param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 109584398; end: 10958439f;  */

void FUN_109584398(void)

{
  return;
}



/* Entry: 1095843a0; end: 1095843d3;  */

void FUN_1095843a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110afcb80;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1095843d4; end: 1095843ef;  */

void FUN_1095843d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110afcb80;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1095843f0; end: 109584427;  */

void FUN_1095843f0(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 8))
            (3,*(undefined8 **)(param_1 + 8),0,&PTR_DAT_110af38f0,&UNK_10dfd1690);
  return;
}



/* Entry: 109584428; end: 109584463;  */

long FUN_109584428(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afcbe0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109584464; end: 10958446f;  */

undefined ** FUN_109584464(void)

{
  return &PTR_DAT_110afcbe0;
}



/* Entry: 109584470; end: 1095844cf;  */

undefined8 * FUN_109584470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afcc00;
  FUN_109585b48(param_1 + 5);
  return param_1;
}



/* Entry: 1095844d0; end: 109585787;  */

void FUN_1095844d0(long *param_1,int *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 **ppuVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  undefined8 *puVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  undefined8 *puVar26;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x24;
  int *unaff_x25;
  long *unaff_x26;
  ulong uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  undefined8 *unaff_x28;
  float fVar30;
  double dVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  float fVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined4 uStack_710;
  int iStack_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  long lStack_6d8;
  ulong uStack_6d0;
  long *plStack_6c8;
  long alStack_6c0 [2];
  undefined4 uStack_6b0;
  int iStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
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
  long lStack_678;
  undefined4 *puStack_670;
  long *plStack_668;
  long alStack_660 [2];
  undefined4 uStack_650;
  int iStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  long lStack_618;
  undefined4 *puStack_610;
  long *plStack_608;
  long alStack_600 [4];
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  long *plStack_5d0;
  int *piStack_5c8;
  long *plStack_5c0;
  undefined8 uStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  long *plStack_5a0;
  long *plStack_598;
  undefined1 *puStack_590;
  code *pcStack_588;
  code **ppcStack_580;
  ulong uStack_570;
  long *plStack_568;
  long *plStack_560;
  int *piStack_558;
  long *plStack_550;
  undefined8 uStack_548;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  long lStack_520;
  long *plStack_518;
  double dStack_510;
  double dStack_508;
  long *plStack_500;
  undefined1 *puStack_4f8;
  long **pplStack_4f0;
  undefined8 *puStack_4e8;
  long *plStack_4e0;
  undefined8 *puStack_4d8;
  long **pplStack_4d0;
  long *plStack_4c8;
  ulong uStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long lStack_478;
  ulong uStack_470;
  undefined8 *puStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 *puStack_448;
  undefined8 *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long *plStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_3f8;
  long **pplStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_390;
  long *plStack_388;
  long lStack_380;
  long *plStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_358;
  long **pplStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  int iStack_1b8;
  int iStack_1b4;
  undefined4 auStack_1b0 [2];
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 **ppuStack_180;
  long **pplStack_178;
  undefined8 uStack_170;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_140;
  long *plStack_138;
  long alStack_130 [3];
  long *plStack_118;
  undefined8 uStack_110;
  long **pplStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_1;
  if (*(long *)(**(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 + 0x40)
      != 0) {
    unaff_x24 = param_1 + 5;
    uStack_4c0 = (ulong)&uStack_4b0 | 8;
    plStack_568 = alStack_130;
    unaff_x26 = param_1 + 0x11;
    plStack_500 = param_1 + 0x1d;
    puStack_4d8 = (undefined8 *)((ulong)&uStack_390 | 4);
    pplStack_4d0 = &plStack_388;
    unaff_x21 = &uStack_340;
    puStack_4e8 = (undefined8 *)((ulong)&uStack_430 | 4);
    puStack_4b8 = auStack_3e0;
    pplStack_4f0 = &plStack_428;
    puStack_4f8 = auStack_c0;
    uStack_548 = 0x405fc00000000000;
    plStack_550 = (long *)0x4052c00000000000;
    plStack_518 = (long *)0x406fe00000000000;
    lStack_520 = 0x406fe00000000000;
    auVar33 = NEON_fmov(0x3fe0000000000000,8);
    dStack_508 = auVar33._8_8_;
    dStack_510 = auVar33._0_8_;
    unaff_x25 = param_2;
    plStack_560 = unaff_x24;
    piStack_558 = param_2;
    plStack_4c8 = unaff_x26;
    do {
      FUN_109572f9c(&lStack_140,unaff_x25);
      plVar13 = &lStack_140;
      FUN_109570a30();
      if ((int)plVar13[0x24] != 0) {
        FUN_1092612e0();
LAB_109585580:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x109585584);
        (*pcVar10)();
      }
      puStack_448 = (undefined8 *)0x0;
      puStack_440 = (undefined8 *)0x0;
      uStack_438 = 0;
      lStack_380 = 0;
      uStack_390 = (long **)CONCAT44(uStack_390._4_4_,0x1010000);
      uStack_110 = (long **)CONCAT44(uStack_110._4_4_,0x2010000);
      plStack_100 = (long *)0x0;
      plStack_4e0 = plVar13;
      plStack_388 = plVar13;
      pplStack_108 = (long **)unaff_x24;
      FUN_109ac9fc8(&uStack_390,&uStack_110,0x29,0);
      uStack_420 = 0;
      uStack_430._0_4_ = 0x1010000;
      uStack_390 = (long **)(double)(int)param_1[2];
      lStack_380 = uStack_548;
      plStack_388 = plStack_550;
      plStack_378 = (long *)0x0;
      puStack_3d0 = (undefined8 *)CONCAT44(puStack_3d0._4_4_,0xc1020006);
      puStack_3c0 = (undefined8 *)0x400000001;
      uStack_110 = (long **)(double)*(int *)((long)param_1 + 0x14);
      plStack_100 = plStack_518;
      pplStack_108 = (long **)lStack_520;
      uStack_f8 = 0;
      uStack_1e0 = CONCAT44(uStack_1e0._4_4_,0xc1020006);
      uStack_1d8 = &uStack_110;
      uStack_1d0 = 0x400000001;
      plStack_160 = (long *)CONCAT44(plStack_160._4_4_,0x2010000);
      uStack_150 = 0;
      plStack_428 = unaff_x24;
      plStack_3c8 = &uStack_390;
      uStack_158 = (undefined8 **)unaff_x26;
      FUN_109a2c428(&uStack_430,&puStack_3d0,&uStack_1e0,&plStack_160);
      plStack_1f0 = (long *)0x0;
      plStack_1f8 = (long *)0x0;
      uStack_1e8 = 0;
      lStack_208 = 0;
      lStack_210 = 0;
      uStack_200 = 0;
      uStack_390 = (long **)CONCAT44(uStack_390._4_4_,0x3010000);
      lStack_380 = 0;
      uStack_110 = (long **)CONCAT44(uStack_110._4_4_,0x8204000c);
      pplStack_108 = &plStack_1f8;
      plStack_100 = (long *)0x0;
      uStack_430 = (long *)CONCAT44(uStack_430._4_4_,0x8203001c);
      plStack_428 = &lStack_210;
      uStack_420 = 0;
      puStack_3d0 = (undefined8 *)0x0;
      plStack_388 = unaff_x26;
      FUN_109adf8b0(&uStack_390,&uStack_110,&uStack_430,1,1,&puStack_3d0);
      plVar13 = plStack_1f0;
      puStack_220 = (undefined8 *)0x0;
      puStack_228 = (undefined8 *)0x0;
      puStack_218 = (undefined8 *)0x0;
      if (plStack_1f8 == plStack_1f0) {
        puVar26 = (undefined8 *)0x0;
        lVar19 = 0;
      }
      else {
        puStack_538 = (undefined8 *)0x0;
        puStack_530 = (undefined8 *)0x0;
        puStack_528 = (undefined8 *)0x0;
        plVar17 = plStack_1f8;
        do {
          lStack_380 = 0;
          uStack_390 = (long **)CONCAT44(uStack_390._4_4_,0x8103000c);
          plStack_388 = plVar17;
          dVar31 = (double)FUN_109b415b4(&uStack_390,0);
          if ((double)(int)param_1[3] <= dVar31) {
            uStack_110 = (long **)0x0;
            pplStack_108 = (long **)0x0;
            plStack_100 = (long *)0x0;
            uStack_430 = (long *)0x0;
            plStack_428 = (long *)0x0;
            uStack_420 = 0;
            lStack_380 = 0;
            uStack_390._0_4_ = 0x8103000c;
            puStack_3d0._0_4_ = 0x8203000c;
            puStack_3c0 = (undefined8 *)0x0;
            plStack_3c8 = &uStack_110;
            plStack_388 = plVar17;
            FUN_109ae2358(&uStack_390,&puStack_3d0,0,1);
            lStack_380 = 0;
            uStack_390._0_4_ = 0x8103000c;
            plStack_388 = &uStack_110;
            dVar31 = (double)FUN_109b4131c(&uStack_390,1);
            lStack_380 = 0;
            uStack_390 = (long **)CONCAT44(uStack_390._4_4_,0x8103000c);
            puStack_3d0 = (undefined8 *)CONCAT44(puStack_3d0._4_4_,0x8203000c);
            plStack_3c8 = &uStack_430;
            puStack_3c0 = (undefined8 *)0x0;
            plStack_388 = &uStack_110;
            FUN_109ac7338(dVar31 * 0.005,&uStack_390,&puStack_3d0,1);
            if (0xffffffffffffffee < ((long)plStack_428 - (long)uStack_430 >> 3) - 0x15U) {
              FUN_109a8261c(&uStack_390,(int)param_1[0x12],*(undefined4 *)((long)param_1 + 0x94),0);
              (*(code *)(*uStack_390)[3])(uStack_390,&uStack_390,plStack_500,0xffffffff);
              FUN_10918eb6c(&uStack_390);
              puStack_3d0 = (undefined8 *)0x0;
              plStack_3c8 = (long *)0x0;
              puStack_3c0 = (undefined8 *)0x0;
              plStack_388 = (long *)((ulong)plStack_388 & 0xffffffffffffff00);
              puVar14 = (undefined8 *)0x18;
              uStack_390 = &puStack_3d0;
              __Znwm();
              puVar26 = puVar14 + 3;
              puVar14[1] = 0;
              puVar14[2] = 0;
              *puVar14 = 0;
              puStack_3d0 = puVar14;
              plStack_3c8 = puVar14;
              puStack_3c0 = puVar26;
              FUN_1092c9014();
              plVar25 = plStack_500;
              uStack_1e0._0_4_ = 0x3010000;
              uStack_1d0 = 0;
              uStack_1d8 = plStack_500;
              uStack_150 = 0;
              plStack_160._0_4_ = 0x8104000c;
              plStack_388 = plStack_518;
              uStack_390 = (long **)lStack_520;
              plStack_378 = plStack_518;
              lStack_380 = lStack_520;
              plStack_3c8 = puVar26;
              uStack_158 = &puStack_3d0;
              FUN_109a91d90();
              pcStack_198 = (code *)0x0;
              ppcStack_580 = &pcStack_198;
              puVar26 = &uStack_1e0;
              FUN_109af08e8(puVar26,&plStack_160,0,&uStack_390,0xffffffff,8,puVar14,0x7fffffff);
              uStack_390 = (long **)CONCAT44(uStack_390._4_4_,0x42ff0000);
              puStack_4d8[1] = 0;
              *puStack_4d8 = 0;
              puStack_4d8[3] = 0;
              puStack_4d8[2] = 0;
              puStack_4d8[5] = 0;
              puStack_4d8[4] = 0;
              *(undefined8 *)((long)puStack_4d8 + 0x34) = 0;
              *(undefined8 *)((long)puStack_4d8 + 0x2c) = 0;
              pplStack_350 = pplStack_4d0;
              uStack_340 = 0;
              uStack_338 = 0;
              uStack_1d0 = 0;
              uStack_1e0._0_4_ = 0x1010000;
              uStack_1d8 = plStack_4c8;
              uStack_150 = 0;
              plStack_160 = (long *)CONCAT44(plStack_160._4_4_,0x1010000);
              uStack_158 = (undefined8 **)plVar25;
              ppuStack_180 = (undefined8 **)CONCAT44(ppuStack_180._4_4_,0x2010000);
              uStack_170 = 0;
              puStack_348 = unaff_x21;
              pplStack_178 = (long **)&uStack_390;
              FUN_109a91d90();
              pcStack_198 = FUN_109a27900;
              FUN_109a279fc(&uStack_1e0,&plStack_160,&ppuStack_180,puVar26,&pcStack_198,1,9);
              uStack_1d0 = 0;
              uStack_1e0._0_4_ = 0x1010000;
              iVar12 = (int)&uStack_1e0;
              uStack_1d8 = &uStack_390;
              FUN_109ab7930();
              uStack_1d0 = 0;
              uStack_1e0 = CONCAT44(uStack_1e0._4_4_,0x8103000c);
              uStack_1d8 = &uStack_430;
              dVar31 = (double)FUN_109b415b4(&uStack_1e0,0);
              puVar26 = puStack_528;
              if (((float)dVar31 != 0.0) && (0.3 <= (float)iVar12 / (float)dVar31)) {
                uStack_1d0 = 0;
                uStack_1e0 = CONCAT44(uStack_1e0._4_4_,0x8103000c);
                uStack_1d8 = &uStack_430;
                FUN_109b408b4(&plStack_160,&uStack_1e0);
                fVar30 = (float)uStack_158;
                if ((float)uStack_158 <= uStack_158._4_4_) {
                  fVar30 = uStack_158._4_4_;
                }
                puVar26 = puStack_528;
                if ((float)*(int *)((long)param_1 + 0x1c) <= fVar30) {
                  if (uStack_158._4_4_ <= (float)uStack_158) {
                    fVar30 = uStack_158._4_4_ / (float)uStack_158;
                  }
                  else {
                    fVar30 = (float)uStack_158 / uStack_158._4_4_;
                  }
                  if (0.3 <= fVar30) {
                    uStack_1d0 = 0;
                    uStack_1e0 = CONCAT44(uStack_1e0._4_4_,0x8103000c);
                    uStack_1d8 = &uStack_430;
                    FUN_109b42928(&ppuStack_180,&uStack_1e0);
                    puVar14 = puStack_220;
                    puVar26 = puStack_228;
                    if (puStack_218 <= puStack_220) {
                      lVar24 = (long)puStack_220 - (long)puStack_228;
                      lVar19 = lVar24 >> 4;
                      uVar27 = lVar19 + 1;
                      if (uVar27 >> 0x3c == 0) {
                        uVar29 = (long)puStack_218 - (long)puStack_228 >> 3;
                        if (uVar29 <= uVar27) {
                          uVar29 = uVar27;
                        }
                        if (0x7fffffffffffffef < (ulong)((long)puStack_218 - (long)puStack_228)) {
                          uVar29 = 0xfffffffffffffff;
                        }
                        if (uVar29 == 0) {
                          lVar15 = 0;
LAB_109584ad4:
                          puVar1 = (undefined8 *)(lVar15 + lVar24);
                          puStack_228 = puVar1 + lVar19 * -2;
                          puVar28 = puVar1 + 2;
                          puVar1[1] = pplStack_178;
                          *puVar1 = ppuStack_180;
                          puVar1 = puStack_228;
                          for (puVar21 = puVar26; puVar21 != puVar14; puVar21 = puVar21 + 2) {
                            uVar32 = *puVar21;
                            puVar1[1] = puVar21[1];
                            *puVar1 = uVar32;
                            puVar1 = puVar1 + 2;
                          }
                          puStack_218 = (undefined8 *)(lVar15 + uVar29 * 0x10);
                          if (puVar26 != (undefined8 *)0x0) {
                            puStack_220 = puVar28;
                            __ZdlPv(puVar26);
                          }
                          goto LAB_109584b30;
                        }
                        if (uVar29 >> 0x3c == 0) {
                          lVar15 = uVar29 << 4;
                          uStack_570 = uVar29;
                          __Znwm();
                          uVar29 = uStack_570;
                          goto LAB_109584ad4;
                        }
LAB_10958556c:
                        func_0x000104c4f740();
                      }
                      else {
                        func_0x000109585cdc();
                      }
                      goto LAB_109585580;
                    }
                    puVar28 = puStack_220 + 2;
                    puStack_220[1] = pplStack_178;
                    *puStack_220 = ppuStack_180;
LAB_109584b30:
                    puStack_220 = puVar28;
                    if (puStack_530 < puStack_538) {
                      puStack_530[1] = uStack_158;
                      *puStack_530 = plStack_160;
                      *(undefined4 *)(puStack_530 + 2) = (undefined4)uStack_150;
                      puStack_530 = (undefined8 *)((long)puStack_530 + 0x14);
                      puVar26 = puStack_528;
                    }
                    else {
                      lVar19 = (long)puStack_530 - (long)puStack_528;
                      uVar27 = (lVar19 >> 2) * -0x3333333333333333 + 1;
                      if (0xccccccccccccccc < uVar27) {
                        func_0x000109585cf0();
                        goto LAB_109585580;
                      }
                      lVar24 = (long)puStack_538 - (long)puStack_528 >> 2;
                      uVar29 = lVar24 * -0x6666666666666666;
                      if (uVar29 < uVar27 || uVar29 - uVar27 == 0) {
                        uVar29 = uVar27;
                      }
                      if (0x666666666666665 < (ulong)(lVar24 * -0x3333333333333333)) {
                        uVar29 = 0xccccccccccccccc;
                      }
                      if (uVar29 == 0) {
                        lVar24 = 0;
                      }
                      else {
                        if (0xccccccccccccccc < uVar29) goto LAB_10958556c;
                        lVar24 = uVar29 * 0x14;
                        __Znwm();
                      }
                      puVar21 = (undefined8 *)(lVar24 + lVar19);
                      puVar21[1] = uStack_158;
                      *puVar21 = plStack_160;
                      *(undefined4 *)(puVar21 + 2) = (undefined4)uStack_150;
                      lVar19 = SUB168(SEXT816(lVar19) * SEXT816(-0x6666666666666667),8);
                      puVar26 = (undefined8 *)
                                ((long)puVar21 + ((lVar19 >> 3) - (lVar19 >> 0x3f)) * 0x14);
                      puVar1 = puVar26;
                      for (puVar14 = puStack_528; puVar14 != puStack_530;
                          puVar14 = (undefined8 *)((long)puVar14 + 0x14)) {
                        uVar32 = *puVar14;
                        puVar1[1] = puVar14[1];
                        *puVar1 = uVar32;
                        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar14 + 2);
                        puVar1 = (undefined8 *)((long)puVar1 + 0x14);
                      }
                      puStack_538 = (undefined8 *)(lVar24 + uVar29 * 0x14);
                      puStack_530 = (undefined8 *)((long)puVar21 + 0x14);
                      if (puStack_528 != (undefined8 *)0x0) {
                        __ZdlPv();
                      }
                    }
                  }
                }
              }
              puStack_528 = puVar26;
              if (lStack_358 != 0) {
                piVar20 = (int *)(lStack_358 + 0x14);
                do {
                  iVar12 = *piVar20;
                  cVar9 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar20,0x10);
                  if (bVar11) {
                    *piVar20 = iVar12 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar12 + -1 == 0) {
                  func_0x000109a848d4(&uStack_390);
                }
              }
              lStack_358 = 0;
              plStack_378 = (long *)0x0;
              lStack_380 = 0;
              uStack_368 = 0;
              uStack_370 = 0;
              if (0 < uStack_390._4_4_) {
                lVar19 = 0;
                do {
                  *(undefined4 *)((long)pplStack_350 + lVar19 * 4) = 0;
                  lVar19 = lVar19 + 1;
                } while (lVar19 < uStack_390._4_4_);
              }
              if (puStack_348 != unaff_x21 && puStack_348 != (undefined8 *)0x0) {
                _free(puStack_348[-1]);
              }
              uStack_390 = &puStack_3d0;
              FUN_1092cc3c0(&uStack_390);
            }
            if (uStack_430 != (long *)0x0) {
              plStack_428 = uStack_430;
              __ZdlPv();
            }
            if (uStack_110 != (long **)0x0) {
              pplStack_108 = uStack_110;
              __ZdlPv();
            }
          }
          plVar17 = plVar17 + 3;
        } while (plVar17 != plVar13);
        lVar19 = (long)puStack_220 - (long)puStack_228 >> 4;
        puVar26 = puStack_528;
      }
      FUN_10940c35c(&plStack_3a8,lVar19);
      plVar17 = plStack_3a0;
      plVar13 = plStack_3a8;
      if (plStack_3a8 != plStack_3a0) {
        lVar19 = 0;
        plVar25 = plStack_3a8;
        do {
          plVar22 = plVar25 + 1;
          *plVar25 = lVar19;
          lVar19 = lVar19 + 1;
          plVar25 = plVar22;
        } while (plVar22 != plStack_3a0);
      }
      uStack_390 = &puStack_228;
      uVar29 = (long)plStack_3a0 - (long)plStack_3a8 >> 3;
      uVar27 = uVar29;
      if ((long)uVar29 < 0x81) {
        uVar18 = 0;
      }
      else {
        do {
          lVar19 = uVar27 << 3;
          __ZnwmRKSt9nothrow_t(lVar19,PTR___ZSt7nothrow_1103469d8);
          if (lVar19 != 0) {
            FUN_109585d04(plVar13,plVar17,&uStack_390,uVar29,lVar19,uVar27);
            __ZdlPv(lVar19);
            goto LAB_109584e08;
          }
          uVar18 = uVar27 >> 1;
          bVar11 = 1 < uVar27;
          uVar27 = uVar18;
        } while (bVar11);
      }
      FUN_109585d04(plVar13,plVar17,&uStack_390,uVar29,0,uVar18);
LAB_109584e08:
      plStack_3c8 = (undefined8 *)0x0;
      puStack_3d0 = (undefined8 *)0x0;
      uStack_3b8 = 0;
      puStack_3c0 = (undefined8 *)0x0;
      uStack_3b0 = 0x3f800000;
      plVar13 = plStack_3a8;
      unaff_x26 = plStack_4c8;
      plVar17 = plStack_3a0;
      if (*(char *)((long)param_1 + 0x24) == '\x01' &&
          8 < (ulong)((long)plStack_3a0 - (long)plStack_3a8)) {
        uVar27 = 1;
        uVar29 = 0;
        do {
          uVar23 = uVar27;
          uVar18 = (long)plVar17 - (long)plVar13 >> 3;
          uVar27 = uVar23;
          if (uVar23 < uVar18) {
            do {
              piVar20 = (int *)(puStack_228 + plVar13[uVar29] * 2);
              piVar2 = (int *)(puStack_228 + plVar13[uVar27] * 2);
              iVar12 = *piVar20;
              iVar6 = piVar20[1];
              iVar5 = *piVar2;
              iVar7 = piVar2[1];
              iVar3 = iVar12;
              if (iVar12 <= iVar5) {
                iVar3 = iVar5;
              }
              iVar4 = iVar6;
              if (iVar6 <= iVar7) {
                iVar4 = iVar7;
              }
              iVar12 = piVar20[2] + iVar12;
              iVar5 = piVar2[2] + iVar5;
              if (iVar12 <= iVar5) {
                iVar5 = iVar12;
              }
              iVar6 = piVar20[3] + iVar6;
              iVar7 = piVar2[3] + iVar7;
              if (iVar6 <= iVar7) {
                iVar7 = iVar6;
              }
              uVar8 = (iVar7 - iVar4) * (iVar5 - iVar3);
              if (((0 < iVar5 - iVar3 && 0 < iVar7 - iVar4) && uVar8 != 0) &&
                 (0.75 < (float)uVar8 /
                         (float)(int)((piVar20[3] * piVar20[2] + piVar2[3] * piVar2[2]) - uVar8))) {
                uStack_390 = (long **)CONCAT44(uStack_390._4_4_,(int)plVar13[uVar27]);
                func_0x000107c2aca0(&puStack_3d0,&uStack_390,&uStack_390);
                plVar13 = plStack_3a8;
                plVar17 = plStack_3a0;
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 < (ulong)((long)plVar17 - (long)plVar13 >> 3));
            uVar18 = (long)plVar17 - (long)plVar13 >> 3;
          }
          uVar27 = uVar23 + 1;
          uVar29 = uVar23;
          unaff_x26 = plStack_4c8;
        } while (uVar23 + 1 < uVar18);
      }
      for (; plVar13 != plVar17; plVar13 = plVar13 + 1) {
        if (*(char *)((long)param_1 + 0x24) == '\x01') {
          uStack_390._4_4_ = (int)((ulong)uStack_390 >> 0x20);
          uStack_390 = (long **)CONCAT44(uStack_390._4_4_,(int)*plVar13);
          ppuVar16 = &puStack_3d0;
          FUN_1091963a0(ppuVar16,&uStack_390);
          if (ppuVar16 == (undefined8 **)0x0) goto LAB_109584f64;
        }
        else {
LAB_109584f64:
          puVar14 = (undefined8 *)((long)puVar26 + *plVar13 * 0x14);
          fVar30 = *(float *)(puVar14 + 2);
          fVar34 = ABS(fVar30);
          bVar11 = false;
          if ((15.0 < fVar34) && (bVar11 = false, !NAN(fVar34))) {
            bVar11 = fVar34 < 60.0;
          }
          if (bVar11) {
            uStack_1e0 = *puVar14;
            uVar32 = puVar14[1];
          }
          else {
            uVar35 = puStack_228[*plVar13 * 2];
            uVar32 = (puStack_228 + *plVar13 * 2)[1];
            auVar33._0_8_ = (long)(int)uVar35;
            auVar33._8_8_ = (long)(int)((ulong)uVar35 >> 0x20);
            auVar33 = NEON_scvtf(auVar33,8);
            auVar36._0_8_ = (long)(int)uVar32;
            auVar36._8_8_ = (long)(int)((ulong)uVar32 >> 0x20);
            auVar36 = NEON_scvtf(auVar36,8);
            uStack_1e0 = CONCAT44((float)(auVar33._8_8_ + dStack_508 * auVar36._8_8_),
                                  (float)(auVar33._0_8_ + dStack_510 * auVar36._0_8_));
            uVar32 = NEON_scvtf(uVar32,4);
            fVar30 = 0.0;
          }
          fVar34 = (float)((ulong)uVar32 >> 0x20);
          if (fVar34 <= (float)uVar32) {
            fVar34 = (float)uVar32;
          }
          uStack_390 = (long **)CONCAT44(uStack_390._4_4_,0x42ff0000);
          fVar34 = fVar34 * (*(float *)(param_1 + 4) + 1.0);
          puStack_4d8[1] = 0;
          *puStack_4d8 = 0;
          puStack_4d8[3] = 0;
          puStack_4d8[2] = 0;
          puStack_4d8[5] = 0;
          puStack_4d8[4] = 0;
          *(undefined8 *)((long)puStack_4d8 + 0x34) = 0;
          *(undefined8 *)((long)puStack_4d8 + 0x2c) = 0;
          pplStack_350 = pplStack_4d0;
          uStack_340 = 0;
          uStack_338 = 0;
          uStack_1d8 = (long *)CONCAT44(fVar34,fVar34);
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,fVar30);
          uStack_110 = (long **)CONCAT44(uStack_110._4_4_,0x2010000);
          plStack_100 = (long *)0x0;
          puStack_348 = unaff_x21;
          pplStack_108 = (long **)&uStack_390;
          FUN_109b411a8(&uStack_1e0,&uStack_110);
          fVar30 = fVar34 + -1.0;
          uStack_110 = (long **)((ulong)(uint)fVar30 << 0x20);
          pplStack_108 = (long **)0x0;
          plStack_100 = (long *)(ulong)(uint)fVar30;
          uStack_f8 = CONCAT44(fVar30,fVar30);
          uStack_150 = 0;
          plStack_160 = (long *)0x0;
          uStack_158 = (undefined8 **)0x0;
          FUN_1094c5b14(&plStack_160,&uStack_110,&uStack_f0,4);
          uStack_1d0 = 0;
          uStack_1e0 = CONCAT44(uStack_1e0._4_4_,0x1010000);
          uStack_170 = 0;
          ppuStack_180._0_4_ = 0x8103000d;
          pplStack_178 = &plStack_160;
          uStack_1d8 = &uStack_390;
          FUN_109b1fb0c(&uStack_110,&uStack_1e0,&ppuStack_180);
          uStack_430 = (long *)CONCAT44(uStack_430._4_4_,0x42ff0000);
          puStack_4e8[1] = 0;
          *puStack_4e8 = 0;
          puStack_4e8[3] = 0;
          puStack_4e8[2] = 0;
          puStack_4e8[5] = 0;
          puStack_4e8[4] = 0;
          *(undefined8 *)((long)puStack_4e8 + 0x34) = 0;
          *(undefined8 *)((long)puStack_4e8 + 0x2c) = 0;
          pplStack_3f0 = pplStack_4f0;
          puStack_3e8 = puStack_4b8;
          *puStack_4b8 = 0;
          puStack_4b8[1] = 0;
          uStack_170 = 0;
          ppuStack_180 = (undefined8 **)CONCAT44(ppuStack_180._4_4_,0x1010000);
          pplStack_178 = (long **)plStack_4e0;
          pcStack_198 = (code *)CONCAT44(pcStack_198._4_4_,0x2010000);
          uStack_188 = 0;
          puStack_190 = &uStack_430;
          uStack_1a0 = 0;
          auStack_1b0[0] = 0x1010000;
          iStack_1b8 = (int)fVar34;
          uStack_1d8 = (undefined8 *)0x0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          iStack_1b4 = iStack_1b8;
          puStack_1a8 = &uStack_110;
          FUN_109b1eb58(&ppuStack_180,&pcStack_198,auStack_1b0,&iStack_1b8,1,0,&uStack_1e0);
          if (lStack_d8 != 0) {
            piVar20 = (int *)(lStack_d8 + 0x14);
            do {
              iVar12 = *piVar20;
              cVar9 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar11) {
                *piVar20 = iVar12 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar12 + -1 == 0) {
              func_0x000109a848d4(&uStack_110);
            }
          }
          lStack_d8 = 0;
          uStack_f8 = 0;
          plStack_100 = (long *)0x0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          if (0 < uStack_110._4_4_) {
            lVar19 = 0;
            do {
              *(undefined4 *)(lStack_d0 + lVar19 * 4) = 0;
              lVar19 = lVar19 + 1;
            } while (lVar19 < uStack_110._4_4_);
          }
          if (puStack_c8 != puStack_4f8 && puStack_c8 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_c8 + -8));
          }
          if (plStack_160 != (long *)0x0) {
            uStack_158 = (undefined8 **)plStack_160;
            __ZdlPv();
          }
          if (lStack_358 != 0) {
            piVar20 = (int *)(lStack_358 + 0x14);
            do {
              iVar12 = *piVar20;
              cVar9 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar11) {
                *piVar20 = iVar12 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar12 + -1 == 0) {
              func_0x000109a848d4(&uStack_390);
            }
          }
          lStack_358 = 0;
          plStack_378 = (long *)0x0;
          lStack_380 = 0;
          uStack_368 = 0;
          uStack_370 = 0;
          if (0 < uStack_390._4_4_) {
            lVar19 = 0;
            do {
              *(undefined4 *)((long)pplStack_350 + lVar19 * 4) = 0;
              lVar19 = lVar19 + 1;
            } while (lVar19 < uStack_390._4_4_);
          }
          if (puStack_348 != unaff_x21 && puStack_348 != (undefined8 *)0x0) {
            _free(puStack_348[-1]);
          }
          FUN_1094c5270(&puStack_448,&uStack_430);
          puVar1 = puStack_440;
          puVar14 = puStack_448;
          uVar27 = param_1[1];
          if (lStack_3f8 != 0) {
            piVar20 = (int *)(lStack_3f8 + 0x14);
            do {
              iVar12 = *piVar20;
              cVar9 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar11) {
                *piVar20 = iVar12 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar12 + -1 == 0) {
              func_0x000109a848d4(&uStack_430);
            }
          }
          lStack_3f8 = 0;
          uStack_418 = 0;
          uStack_420 = 0;
          uStack_408 = 0;
          uStack_410 = 0;
          if (0 < uStack_430._4_4_) {
            lVar19 = 0;
            do {
              *(undefined4 *)((long)pplStack_3f0 + lVar19 * 4) = 0;
              lVar19 = lVar19 + 1;
            } while (lVar19 < uStack_430._4_4_);
          }
          if (puStack_3e8 != puStack_4b8 && puStack_3e8 != (undefined8 *)0x0) {
            _free(puStack_3e8[-1]);
          }
          unaff_x26 = plStack_4c8;
          if (uVar27 <= (ulong)(((long)puVar1 - (long)puVar14 >> 5) * -0x5555555555555555)) break;
        }
      }
      func_0x000107c2ab24(&puStack_3d0);
      if (plStack_3a8 != (long *)0x0) {
        plStack_3a0 = plStack_3a8;
        __ZdlPv();
      }
      unaff_x25 = piStack_558;
      if (puVar26 != (undefined8 *)0x0) {
        __ZdlPv(puVar26);
      }
      if (puStack_228 != (undefined8 *)0x0) {
        puStack_220 = puStack_228;
        __ZdlPv();
      }
      unaff_x28 = &uStack_390;
      if (lStack_210 != 0) {
        lStack_208 = lStack_210;
        __ZdlPv();
      }
      uStack_390 = &plStack_1f8;
      FUN_1092cc3c0(&uStack_390);
      puVar26 = puStack_440;
      for (unaff_x22 = puStack_448; unaff_x22 != puVar26; unaff_x22 = unaff_x22 + 0xc) {
        uStack_4b0 = *unaff_x22;
        uStack_4a8 = unaff_x22[1];
        uStack_4a0 = unaff_x22[2];
        uStack_498 = unaff_x22[3];
        uStack_490 = unaff_x22[4];
        uStack_488 = unaff_x22[5];
        uStack_480 = unaff_x22[6];
        lStack_478 = unaff_x22[7];
        uStack_460 = 0;
        uStack_458 = 0;
        piVar20 = (int *)((long)unaff_x22 + 4);
        uStack_470 = uStack_4c0;
        puStack_468 = (undefined8 *)unaff_x22[9];
        if (*piVar20 < 3) {
          uStack_460 = *puStack_468;
          uStack_458 = puStack_468[1];
          puStack_468 = &uStack_460;
        }
        else {
          uStack_470 = unaff_x22[8];
          unaff_x22[8] = unaff_x22 + 1;
          unaff_x22[9] = unaff_x22 + 10;
        }
        *(undefined4 *)unaff_x22 = 0x42ff0000;
        *(undefined8 *)((long)unaff_x22 + 0xc) = 0;
        piVar20[0] = 0;
        piVar20[1] = 0;
        *(undefined8 *)((long)unaff_x22 + 0x1c) = 0;
        *(undefined8 *)((long)unaff_x22 + 0x14) = 0;
        *(undefined8 *)((long)unaff_x22 + 0x2c) = 0;
        *(undefined8 *)((long)unaff_x22 + 0x24) = 0;
        unaff_x22[7] = 0;
        unaff_x22[6] = 0;
        func_0x000105682cb8(&uStack_390,&uStack_4b0,0);
        FUN_10957ea6c(unaff_x25,&uStack_390);
        FUN_10951f294(&uStack_390);
        if (lStack_478 != 0) {
          piVar20 = (int *)(lStack_478 + 0x14);
          do {
            iVar12 = *piVar20;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar11) {
              *piVar20 = iVar12 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar12 + -1 == 0) {
            func_0x000109a848d4(&uStack_4b0);
          }
        }
        lStack_478 = 0;
        uStack_498 = 0;
        uStack_4a0 = 0;
        uStack_488 = 0;
        uStack_490 = 0;
        if (0 < uStack_4b0._4_4_) {
          lVar19 = 0;
          do {
            *(undefined4 *)(uStack_470 + lVar19 * 4) = 0;
            lVar19 = lVar19 + 1;
          } while (lVar19 < uStack_4b0._4_4_);
        }
        if (puStack_468 != &uStack_460 && puStack_468 != (undefined8 *)0x0) {
          _free(puStack_468[-1]);
        }
      }
      uStack_390 = &puStack_448;
      FUN_1093702c4(&uStack_390);
      unaff_x24 = plStack_560;
      plVar13 = plStack_118;
      if (plStack_118 == plStack_568) {
        lVar19 = 0x20;
LAB_1095854ac:
        (**(code **)(*plStack_118 + lVar19))();
      }
      else if (plStack_118 != (long *)0x0) {
        lVar19 = 0x28;
        goto LAB_1095854ac;
      }
      plVar17 = plStack_138;
      if (plStack_138 != (long *)0x0) {
        plVar25 = plStack_138 + 1;
        do {
          lVar19 = *plVar25;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar11) {
            *plVar25 = lVar19 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_138 + 0x10))(plStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar13 = plVar17;
        }
      }
      unaff_x23 = 0x8203000c;
      unaff_x20 = param_1;
    } while (*(long *)(**(long **)(unaff_x25 + 2) +
                       (long)*(int *)((*(long **)(unaff_x25 + 2))[0xc] + (long)*unaff_x25 * 4) *
                       0x50 + 0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
    ___stack_chk_fail();
    puVar26 = puStack_528;
    func_0x00010567aa40(&uStack_390);
    uStack_390 = &puStack_3d0;
    FUN_1092cc3c0(&uStack_390);
    if (uStack_430 != (long *)0x0) {
      plStack_428 = uStack_430;
      __ZdlPv();
    }
    if (uStack_110 != (long **)0x0) {
      pplStack_108 = uStack_110;
      __ZdlPv();
    }
    if (puVar26 != (undefined8 *)0x0) {
      __ZdlPv(puVar26);
    }
    if (puStack_228 != (undefined8 *)0x0) {
      puStack_220 = puStack_228;
      __ZdlPv();
    }
    if (lStack_210 != 0) {
      lStack_208 = lStack_210;
      __ZdlPv();
    }
    uStack_390 = &plStack_1f8;
    FUN_1092cc3c0(&uStack_390);
    ppuStack_180 = &puStack_448;
    FUN_1093702c4(&ppuStack_180);
    FUN_10957342c(&lStack_140);
    plVar17 = plVar13;
    __Unwind_Resume();
    puStack_5d8 = puVar26;
    pcStack_588 = FUN_109585788;
    uStack_710 = 0x42ff0000;
    uStack_704 = 0;
    uStack_700 = 0;
    iStack_70c = 0;
    uStack_708 = 0;
    uVar27 = (ulong)&uStack_710 | 8;
    uStack_6f4 = 0;
    uStack_6f0 = 0;
    uStack_6fc = 0;
    uStack_6f8 = 0;
    uStack_6e4 = 0;
    uStack_6ec = 0;
    uStack_6e8 = 0;
    lStack_6d8 = 0;
    uStack_6e0 = 0;
    uStack_6dc = 0;
    alStack_6c0[0] = 0;
    alStack_6c0[1] = 0;
    uStack_6b0 = 0x42ff0000;
    uStack_6a4 = 0;
    uStack_6a0 = 0;
    iStack_6ac = 0;
    uStack_6a8 = 0;
    uStack_694 = 0;
    uStack_690 = 0;
    uStack_69c = 0;
    uStack_698 = 0;
    uStack_684 = 0;
    uStack_68c = 0;
    uStack_688 = 0;
    lStack_678 = 0;
    uStack_680 = 0;
    uStack_67c = 0;
    alStack_660[0] = 0;
    alStack_660[1] = 0;
    uStack_650 = 0x42ff0000;
    lStack_618 = 0;
    uStack_61c = 0;
    uStack_624 = 0;
    uStack_620 = 0;
    uStack_62c = 0;
    uStack_628 = 0;
    uStack_634 = 0;
    uStack_630 = 0;
    uStack_63c = 0;
    uStack_638 = 0;
    uStack_644 = 0;
    uStack_640 = 0;
    iStack_64c = 0;
    uStack_648 = 0;
    alStack_600[0] = 0;
    alStack_600[1] = 0;
    uStack_6d0 = uVar27;
    plStack_6c8 = alStack_6c0;
    puStack_670 = &uStack_6a8;
    plStack_668 = alStack_660;
    puStack_610 = &uStack_648;
    plStack_608 = alStack_600;
    puStack_5e0 = unaff_x28;
    plStack_5d0 = unaff_x26;
    piStack_5c8 = unaff_x25;
    plStack_5c0 = unaff_x24;
    uStack_5b8 = unaff_x23;
    puStack_5b0 = unaff_x22;
    puStack_5a8 = unaff_x21;
    plStack_5a0 = unaff_x20;
    plStack_598 = plVar13;
    puStack_590 = &stack0xfffffffffffffff0;
    if (plVar17[0xc] != 0) {
      piVar20 = (int *)(plVar17[0xc] + 0x14);
      do {
        iVar12 = *piVar20;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar11) {
          *piVar20 = iVar12 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar12 + -1 == 0) {
        func_0x000109a848d4(plVar17 + 5);
      }
    }
    plVar17[0xc] = 0;
    plVar17[8] = 0;
    plVar17[7] = 0;
    plVar17[10] = 0;
    plVar17[9] = 0;
    if (0 < *(int *)((long)plVar17 + 0x2c)) {
      lVar19 = 0;
      lVar24 = plVar17[0xd];
      do {
        *(undefined4 *)(lVar24 + lVar19 * 4) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < *(int *)((long)plVar17 + 0x2c));
    }
    plVar17[6] = CONCAT44(uStack_704,uStack_708);
    plVar17[5] = CONCAT44(iStack_70c,uStack_710);
    plVar17[8] = CONCAT44(uStack_6f4,uStack_6f8);
    plVar17[7] = CONCAT44(uStack_6fc,uStack_700);
    plVar17[10] = CONCAT44(uStack_6e4,uStack_6e8);
    plVar17[9] = CONCAT44(uStack_6ec,uStack_6f0);
    plVar17[0xc] = lStack_6d8;
    plVar17[0xb] = CONCAT44(uStack_6dc,uStack_6e0);
    plVar25 = (long *)plVar17[0xe];
    plVar13 = plVar17 + 0xf;
    if (plVar25 != plVar13) {
      if (plVar25 != (long *)0x0) {
        _free(plVar25[-1]);
      }
      plVar17[0xd] = (long)(plVar17 + 6);
      plVar17[0xe] = (long)plVar13;
      plVar25 = plVar13;
    }
    puVar26 = (undefined8 *)((ulong)&uStack_710 | 4);
    if (iStack_70c < 3) {
      *plVar25 = *plStack_6c8;
      plVar25[1] = plStack_6c8[1];
    }
    else {
      plVar17[0xd] = uStack_6d0;
      plVar17[0xe] = (long)plStack_6c8;
      uStack_6d0 = uVar27;
      plStack_6c8 = alStack_6c0;
    }
    uStack_710 = 0x42ff0000;
    puVar26[1] = 0;
    *puVar26 = 0;
    puVar26[3] = 0;
    puVar26[2] = 0;
    puVar26[5] = 0;
    puVar26[4] = 0;
    *(undefined8 *)((long)puVar26 + 0x34) = 0;
    *(undefined8 *)((long)puVar26 + 0x2c) = 0;
    if (plVar17[0x18] != 0) {
      piVar20 = (int *)(plVar17[0x18] + 0x14);
      do {
        iVar12 = *piVar20;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar11) {
          *piVar20 = iVar12 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar12 + -1 == 0) {
        func_0x000109a848d4(plVar17 + 0x11);
      }
    }
    plVar17[0x18] = 0;
    plVar17[0x14] = 0;
    plVar17[0x13] = 0;
    plVar17[0x16] = 0;
    plVar17[0x15] = 0;
    if (0 < *(int *)((long)plVar17 + 0x8c)) {
      lVar19 = 0;
      lVar24 = plVar17[0x19];
      do {
        *(undefined4 *)(lVar24 + lVar19 * 4) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < *(int *)((long)plVar17 + 0x8c));
    }
    plVar17[0x12] = CONCAT44(uStack_6a4,uStack_6a8);
    plVar17[0x11] = CONCAT44(iStack_6ac,uStack_6b0);
    plVar17[0x14] = CONCAT44(uStack_694,uStack_698);
    plVar17[0x13] = CONCAT44(uStack_69c,uStack_6a0);
    plVar17[0x16] = CONCAT44(uStack_684,uStack_688);
    plVar17[0x15] = CONCAT44(uStack_68c,uStack_690);
    plVar17[0x18] = lStack_678;
    plVar17[0x17] = CONCAT44(uStack_67c,uStack_680);
    plVar25 = (long *)plVar17[0x1a];
    plVar13 = plVar17 + 0x1b;
    if (plVar25 != plVar13) {
      if (plVar25 != (long *)0x0) {
        _free(plVar25[-1]);
      }
      plVar17[0x19] = (long)(plVar17 + 0x12);
      plVar17[0x1a] = (long)plVar13;
      plVar25 = plVar13;
    }
    if (iStack_6ac < 3) {
      *plVar25 = *plStack_668;
      plVar25[1] = plStack_668[1];
    }
    else {
      plVar17[0x19] = (long)puStack_670;
      plVar17[0x1a] = (long)plStack_668;
      puStack_670 = &uStack_6a8;
      plStack_668 = alStack_660;
    }
    uStack_6b0 = 0x42ff0000;
    uStack_6a4 = 0;
    uStack_6a0 = 0;
    iStack_6ac = 0;
    uStack_6a8 = 0;
    uStack_694 = 0;
    uStack_690 = 0;
    uStack_69c = 0;
    uStack_698 = 0;
    uStack_684 = 0;
    uStack_68c = 0;
    uStack_688 = 0;
    lStack_678 = 0;
    uStack_680 = 0;
    uStack_67c = 0;
    if (plVar17[0x24] != 0) {
      piVar20 = (int *)(plVar17[0x24] + 0x14);
      do {
        iVar12 = *piVar20;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar11) {
          *piVar20 = iVar12 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar12 + -1 == 0) {
        func_0x000109a848d4(plVar17 + 0x1d);
      }
    }
    plVar17[0x20] = 0;
    plVar17[0x1f] = 0;
    plVar17[0x24] = 0;
    plVar17[0x22] = 0;
    plVar17[0x21] = 0;
    if (0 < *(int *)((long)plVar17 + 0xec)) {
      lVar19 = 0;
      lVar24 = plVar17[0x25];
      do {
        *(undefined4 *)(lVar24 + lVar19 * 4) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < *(int *)((long)plVar17 + 0xec));
    }
    plVar17[0x1e] = CONCAT44(uStack_644,uStack_648);
    plVar17[0x1d] = CONCAT44(iStack_64c,uStack_650);
    plVar17[0x20] = CONCAT44(uStack_634,uStack_638);
    plVar17[0x1f] = CONCAT44(uStack_63c,uStack_640);
    plVar17[0x22] = CONCAT44(uStack_624,uStack_628);
    plVar17[0x21] = CONCAT44(uStack_62c,uStack_630);
    plVar17[0x24] = lStack_618;
    plVar17[0x23] = CONCAT44(uStack_61c,uStack_620);
    plVar25 = (long *)plVar17[0x26];
    plVar13 = plVar17 + 0x27;
    if (plVar25 != plVar13) {
      if (plVar25 != (long *)0x0) {
        _free(plVar25[-1]);
      }
      plVar17[0x25] = (long)(plVar17 + 0x1e);
      plVar17[0x26] = (long)plVar13;
      plVar25 = plVar13;
    }
    if (iStack_64c < 3) {
      *plVar25 = *plStack_608;
      plVar25[1] = plStack_608[1];
    }
    else {
      plVar17[0x25] = (long)puStack_610;
      plVar17[0x26] = (long)plStack_608;
      puStack_610 = &uStack_648;
      plStack_608 = alStack_600;
    }
    uStack_650 = 0x42ff0000;
    uStack_644 = 0;
    uStack_640 = 0;
    iStack_64c = 0;
    uStack_648 = 0;
    uStack_634 = 0;
    uStack_630 = 0;
    uStack_63c = 0;
    uStack_638 = 0;
    uStack_624 = 0;
    uStack_62c = 0;
    uStack_628 = 0;
    lStack_618 = 0;
    uStack_620 = 0;
    uStack_61c = 0;
    FUN_109585b48(&uStack_710);
    return;
  }
  return;
}



/* Entry: 109585788; end: 109585b47;  */

void FUN_109585788(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined4 uStack_190;
  int iStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined4 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
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
  undefined8 uStack_98;
  undefined4 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_190 = 0x42ff0000;
  uStack_184 = 0;
  uStack_180 = 0;
  iStack_18c = 0;
  uStack_188 = 0;
  uVar9 = (ulong)&uStack_190 | 8;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_164 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0x42ff0000;
  uStack_124 = 0;
  uStack_120 = 0;
  iStack_12c = 0;
  uStack_128 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_104 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0x42ff0000;
  uStack_98 = 0;
  uStack_9c = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  iStack_cc = 0;
  uStack_c8 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_150 = uVar9;
  puStack_148 = &uStack_140;
  puStack_f0 = &uStack_128;
  puStack_e8 = &uStack_e0;
  puStack_90 = &uStack_c8;
  puStack_88 = &uStack_80;
  if (*(long *)(param_1 + 0x60) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x60) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x28);
    }
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x68);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x2c));
  }
  *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_184,uStack_188);
  *(ulong *)(param_1 + 0x28) = CONCAT44(iStack_18c,uStack_190);
  *(ulong *)(param_1 + 0x40) = CONCAT44(uStack_174,uStack_178);
  *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_17c,uStack_180);
  *(ulong *)(param_1 + 0x50) = CONCAT44(uStack_164,uStack_168);
  *(ulong *)(param_1 + 0x48) = CONCAT44(uStack_16c,uStack_170);
  *(undefined8 *)(param_1 + 0x60) = uStack_158;
  *(ulong *)(param_1 + 0x58) = CONCAT44(uStack_15c,uStack_160);
  puVar7 = *(undefined8 **)(param_1 + 0x70);
  puVar8 = (undefined8 *)(param_1 + 0x78);
  if (puVar7 != puVar8) {
    if (puVar7 != (undefined8 *)0x0) {
      _free(puVar7[-1]);
    }
    *(long *)(param_1 + 0x68) = param_1 + 0x30;
    *(undefined8 **)(param_1 + 0x70) = puVar8;
    puVar7 = puVar8;
  }
  puVar8 = (undefined8 *)((ulong)&uStack_190 | 4);
  if (iStack_18c < 3) {
    *puVar7 = *puStack_148;
    puVar7[1] = puStack_148[1];
  }
  else {
    *(ulong *)(param_1 + 0x68) = uStack_150;
    *(undefined8 **)(param_1 + 0x70) = puStack_148;
    uStack_150 = uVar9;
    puStack_148 = &uStack_140;
  }
  uStack_190 = 0x42ff0000;
  puVar8[1] = 0;
  *puVar8 = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  *(undefined8 *)((long)puVar8 + 0x34) = 0;
  *(undefined8 *)((long)puVar8 + 0x2c) = 0;
  if (*(long *)(param_1 + 0xc0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xc0) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x88);
    }
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 200);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x8c));
  }
  *(ulong *)(param_1 + 0x90) = CONCAT44(uStack_124,uStack_128);
  *(ulong *)(param_1 + 0x88) = CONCAT44(iStack_12c,uStack_130);
  *(ulong *)(param_1 + 0xa0) = CONCAT44(uStack_114,uStack_118);
  *(ulong *)(param_1 + 0x98) = CONCAT44(uStack_11c,uStack_120);
  *(ulong *)(param_1 + 0xb0) = CONCAT44(uStack_104,uStack_108);
  *(ulong *)(param_1 + 0xa8) = CONCAT44(uStack_10c,uStack_110);
  *(undefined8 *)(param_1 + 0xc0) = uStack_f8;
  *(ulong *)(param_1 + 0xb8) = CONCAT44(uStack_fc,uStack_100);
  puVar7 = *(undefined8 **)(param_1 + 0xd0);
  puVar8 = (undefined8 *)(param_1 + 0xd8);
  if (puVar7 != puVar8) {
    if (puVar7 != (undefined8 *)0x0) {
      _free(puVar7[-1]);
    }
    *(long *)(param_1 + 200) = param_1 + 0x90;
    *(undefined8 **)(param_1 + 0xd0) = puVar8;
    puVar7 = puVar8;
  }
  if (iStack_12c < 3) {
    *puVar7 = *puStack_e8;
    puVar7[1] = puStack_e8[1];
  }
  else {
    *(undefined4 **)(param_1 + 200) = puStack_f0;
    *(undefined8 **)(param_1 + 0xd0) = puStack_e8;
    puStack_f0 = &uStack_128;
    puStack_e8 = &uStack_e0;
  }
  uStack_130 = 0x42ff0000;
  uStack_124 = 0;
  uStack_120 = 0;
  iStack_12c = 0;
  uStack_128 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_104 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  if (*(long *)(param_1 + 0x120) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x120) + 0x14);
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
      func_0x000109a848d4(param_1 + 0xe8);
    }
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (0 < *(int *)(param_1 + 0xec)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x128);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xec));
  }
  *(ulong *)(param_1 + 0xf0) = CONCAT44(uStack_c4,uStack_c8);
  *(ulong *)(param_1 + 0xe8) = CONCAT44(iStack_cc,uStack_d0);
  *(ulong *)(param_1 + 0x100) = CONCAT44(uStack_b4,uStack_b8);
  *(ulong *)(param_1 + 0xf8) = CONCAT44(uStack_bc,uStack_c0);
  *(ulong *)(param_1 + 0x110) = CONCAT44(uStack_a4,uStack_a8);
  *(ulong *)(param_1 + 0x108) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined8 *)(param_1 + 0x120) = uStack_98;
  *(ulong *)(param_1 + 0x118) = CONCAT44(uStack_9c,uStack_a0);
  puVar7 = *(undefined8 **)(param_1 + 0x130);
  puVar8 = (undefined8 *)(param_1 + 0x138);
  if (puVar7 != puVar8) {
    if (puVar7 != (undefined8 *)0x0) {
      _free(puVar7[-1]);
    }
    *(long *)(param_1 + 0x128) = param_1 + 0xf0;
    *(undefined8 **)(param_1 + 0x130) = puVar8;
    puVar7 = puVar8;
  }
  if (iStack_cc < 3) {
    *puVar7 = *puStack_88;
    puVar7[1] = puStack_88[1];
  }
  else {
    *(undefined4 **)(param_1 + 0x128) = puStack_90;
    *(undefined8 **)(param_1 + 0x130) = puStack_88;
    puStack_90 = &uStack_c8;
    puStack_88 = &uStack_80;
  }
  uStack_d0 = 0x42ff0000;
  uStack_c4 = 0;
  uStack_c0 = 0;
  iStack_cc = 0;
  uStack_c8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_a4 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  FUN_109585b48(&uStack_190);
  return;
}



/* Entry: 109585b48; end: 109585cdb;  */

long FUN_109585b48(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
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



/* Entry: 109585cdc; end: 109585d03;  */

void FUN_109585cdc(undefined8 param_1,long *param_2,undefined8 *param_3,ulong param_4,long *param_5,
                  long param_6)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  plVar5 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (1 < param_4) {
    if (param_4 == 2) {
      lVar9 = *plVar5;
      lVar8 = *(long *)*param_3 + param_2[-1] * 0x10;
      lVar10 = *(long *)*param_3 + lVar9 * 0x10;
      if (*(int *)(lVar10 + 0xc) * *(int *)(lVar10 + 8) <
          *(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8)) {
        *plVar5 = param_2[-1];
        param_2[-1] = lVar9;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((plVar5 != param_2) && (plVar5 + 1 != param_2)) {
        lVar8 = 0;
        lVar10 = *(long *)*param_3;
        plVar6 = plVar5;
        plVar16 = plVar5 + 1;
        do {
          lVar21 = *plVar6;
          lVar17 = *plVar16;
          lVar9 = lVar10 + lVar17 * 0x10;
          iVar1 = *(int *)(lVar9 + 0xc) * *(int *)(lVar9 + 8);
          lVar9 = lVar10 + lVar21 * 0x10;
          lVar7 = lVar8;
          if (*(int *)(lVar9 + 0xc) * *(int *)(lVar9 + 8) < iVar1) {
            do {
              lVar9 = lVar7;
              *(long *)((long)plVar5 + lVar9 + 8) = lVar21;
              plVar6 = plVar5;
              if (lVar9 == 0) goto LAB_109585e28;
              lVar21 = *(long *)((long)plVar5 + lVar9 + -8);
              lVar18 = lVar10 + lVar21 * 0x10;
              lVar7 = lVar9 + -8;
            } while (*(int *)(lVar18 + 0xc) * *(int *)(lVar18 + 8) < iVar1);
            plVar6 = (long *)((long)plVar5 + lVar9);
LAB_109585e28:
            *plVar6 = lVar17;
          }
          plVar13 = plVar16 + 1;
          lVar8 = lVar8 + 8;
          plVar6 = plVar16;
          plVar16 = plVar13;
        } while (plVar13 != param_2);
      }
    }
    else {
      uVar25 = param_4 >> 1;
      plVar6 = plVar5 + uVar25;
      lVar8 = param_4 - (param_4 >> 1);
      if (param_6 < (long)param_4) {
        FUN_109585d04(plVar5,plVar6,param_3,uVar25,param_5,param_6);
        FUN_109585d04(plVar6,param_2,param_3,lVar8,param_5,param_6);
        do {
          if (lVar8 == 0) {
            return;
          }
          if (((long)uVar25 <= param_6) || (lVar8 <= param_6)) {
            if ((long)uVar25 <= lVar8) {
              if (plVar6 == plVar5) {
                return;
              }
              lVar8 = -(long)param_5;
              plVar16 = param_5;
              plVar13 = plVar5;
              do {
                plVar23 = plVar13 + 1;
                plVar24 = plVar16 + 1;
                *plVar16 = *plVar13;
                lVar8 = lVar8 + -8;
                plVar16 = plVar24;
                plVar13 = plVar23;
              } while (plVar23 != plVar6);
              plVar16 = (long *)*param_3;
              do {
                if (plVar6 == param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR__memmove_11034c660)(plVar5,param_5,-((long)param_5 + lVar8));
                  return;
                }
                lVar10 = *plVar16 + *plVar6 * 0x10;
                iVar1 = *(int *)(lVar10 + 0xc) * *(int *)(lVar10 + 8);
                lVar10 = *plVar16 + *param_5 * 0x10;
                iVar2 = *(int *)(lVar10 + 0xc) * *(int *)(lVar10 + 8);
                lVar10 = *plVar6;
                if (iVar1 <= iVar2) {
                  lVar10 = *param_5;
                }
                lVar9 = 8;
                if (iVar1 <= iVar2) {
                  lVar9 = 0;
                }
                plVar6 = (long *)((long)plVar6 + lVar9);
                lVar9 = 0;
                if (iVar1 <= iVar2) {
                  lVar9 = 8;
                }
                param_5 = (long *)((long)param_5 + lVar9);
                *plVar5 = lVar10;
                plVar5 = plVar5 + 1;
              } while (plVar24 != param_5);
              return;
            }
            if (plVar6 != param_2) {
              lVar8 = 0;
              do {
                *(undefined8 *)((long)param_5 + lVar8) = *(undefined8 *)((long)plVar6 + lVar8);
                lVar8 = lVar8 + 8;
              } while ((long *)((long)plVar6 + lVar8) != param_2);
              plVar13 = (long *)*param_3;
              plVar16 = (long *)((long)param_5 + lVar8);
              do {
                if (plVar6 == plVar5) {
                  if (param_5 == plVar16) {
                    return;
                  }
                  lVar8 = -8;
                  do {
                    plVar16 = plVar16 + -1;
                    *(long *)((long)param_2 + lVar8) = *plVar16;
                    lVar8 = lVar8 + -8;
                  } while (plVar16 != param_5);
                  return;
                }
                lVar7 = plVar16[-1];
                lVar9 = plVar6[-1];
                lVar8 = *plVar13 + lVar7 * 0x10;
                lVar10 = *plVar13 + lVar9 * 0x10;
                plVar24 = plVar6 + -1;
                if (*(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8) <=
                    *(int *)(lVar10 + 0xc) * *(int *)(lVar10 + 8)) {
                  plVar16 = plVar16 + -1;
                  plVar24 = plVar6;
                  lVar9 = lVar7;
                }
                plVar6 = plVar24;
                param_2 = param_2 + -1;
                *param_2 = lVar9;
              } while (plVar16 != param_5);
              return;
            }
            return;
          }
          if (uVar25 == 0) {
            return;
          }
          lVar10 = 0;
          lVar17 = *(long *)*param_3;
          lVar7 = lVar17 + *plVar6 * 0x10;
          lVar9 = -uVar25;
          while (lVar18 = *(long *)((long)plVar5 + lVar10), lVar21 = lVar17 + lVar18 * 0x10,
                *(int *)(lVar7 + 0xc) * *(int *)(lVar7 + 8) <=
                *(int *)(lVar21 + 0xc) * *(int *)(lVar21 + 8)) {
            lVar10 = lVar10 + 8;
            bVar4 = lVar9 == -1;
            lVar9 = lVar9 + 1;
            if (bVar4) {
              return;
            }
          }
          if (-lVar9 < lVar8) {
            lVar7 = lVar8 / 2;
            plVar16 = plVar6 + lVar7;
            puVar3 = (undefined *)((long)plVar6 + (-lVar10 - (long)plVar5));
            plVar13 = plVar6;
            if (puVar3 != (undefined *)0x0) {
              uVar25 = (long)puVar3 >> 3;
              lVar21 = lVar17 + *plVar16 * 0x10;
              plVar13 = (long *)((long)plVar5 + lVar10);
              do {
                uVar19 = uVar25 >> 1;
                lVar18 = lVar17 + plVar13[uVar19] * 0x10;
                uVar14 = uVar25 + (uVar25 >> 1 ^ 0xffffffffffffffff);
                uVar25 = uVar19;
                if (*(int *)(lVar21 + 0xc) * *(int *)(lVar21 + 8) <=
                    *(int *)(lVar18 + 0xc) * *(int *)(lVar18 + 8)) {
                  uVar25 = uVar14;
                  plVar13 = plVar13 + uVar19 + 1;
                }
              } while (uVar25 != 0);
            }
            uVar25 = (long)((long)plVar13 + (-lVar10 - (long)plVar5)) >> 3;
          }
          else {
            if (lVar9 == -1) {
              *(long *)((long)plVar5 + lVar10) = *plVar6;
              *plVar6 = lVar18;
              return;
            }
            uVar25 = -lVar9 / 2;
            plVar16 = plVar6;
            if (plVar6 != param_2) {
              uVar14 = (long)param_2 - (long)plVar6 >> 3;
              lVar7 = lVar17 + *(long *)((long)plVar5 + lVar10 + uVar25 * 8) * 0x10;
              plVar13 = plVar6;
              do {
                uVar19 = uVar14 >> 1;
                lVar21 = lVar17 + plVar13[uVar19] * 0x10;
                plVar16 = plVar13 + uVar19 + 1;
                uVar14 = uVar14 + (uVar14 >> 1 ^ 0xffffffffffffffff);
                if (*(int *)(lVar21 + 0xc) * *(int *)(lVar21 + 8) <=
                    *(int *)(lVar7 + 0xc) * *(int *)(lVar7 + 8)) {
                  plVar16 = plVar13;
                  uVar14 = uVar19;
                }
                plVar13 = plVar16;
              } while (uVar14 != 0);
            }
            lVar7 = (long)plVar16 - (long)plVar6 >> 3;
            plVar13 = (long *)((long)plVar5 + lVar10 + uVar25 * 8);
          }
          lVar17 = (long)plVar6 - (long)plVar13;
          plVar24 = plVar16;
          if ((lVar17 != 0) &&
             (lVar21 = (long)plVar16 - (long)plVar6, plVar24 = plVar13, lVar21 != 0)) {
            if (plVar13 + 1 == plVar6) {
              lVar17 = *plVar13;
              _memmove(plVar13,plVar6,lVar21);
              *(long *)((long)plVar13 + lVar21) = lVar17;
              plVar24 = (long *)((long)plVar13 + lVar21);
            }
            else if (plVar6 + 1 == plVar16) {
              plVar6 = plVar16 + -1;
              lVar17 = *plVar6;
              plVar24 = (long *)((long)plVar16 - ((long)plVar6 - (long)plVar13));
              if ((long)plVar6 - (long)plVar13 != 0) {
                _memmove(plVar24,plVar13,(long)plVar6 - (long)plVar13);
              }
              *plVar13 = lVar17;
            }
            else {
              lVar11 = lVar17 >> 3;
              lVar18 = lVar21 >> 3;
              lVar20 = lVar11;
              plVar23 = plVar13;
              plVar22 = plVar6;
              if (lVar11 == lVar21 >> 3) {
                do {
                  plVar12 = plVar22 + 1;
                  lVar17 = *plVar23;
                  *plVar23 = *plVar22;
                  *plVar22 = lVar17;
                  plVar24 = plVar6;
                  if (plVar23 + 1 == plVar6) break;
                  plVar23 = plVar23 + 1;
                  plVar22 = plVar12;
                } while (plVar12 != plVar16);
              }
              else {
                do {
                  lVar15 = lVar18;
                  lVar18 = 0;
                  if (lVar15 != 0) {
                    lVar18 = lVar20 / lVar15;
                  }
                  lVar18 = lVar20 - lVar18 * lVar15;
                  lVar20 = lVar15;
                } while (lVar18 != 0);
                plVar6 = plVar13 + lVar15;
                do {
                  plVar6 = plVar6 + -1;
                  lVar18 = *plVar6;
                  plVar24 = (long *)(lVar17 + (long)plVar6);
                  plVar23 = plVar6;
                  do {
                    plVar22 = plVar24;
                    *plVar23 = *plVar22;
                    lVar20 = (long)plVar16 - (long)plVar22 >> 3;
                    plVar24 = (long *)((long)plVar22 + lVar17);
                    if (lVar20 <= lVar11) {
                      plVar24 = plVar13 + (lVar11 - lVar20);
                    }
                    plVar23 = plVar22;
                  } while (plVar24 != plVar6);
                  *plVar22 = lVar18;
                } while (plVar6 != plVar13);
                plVar24 = (long *)(lVar21 + (long)plVar13);
              }
            }
          }
          if ((long)(uVar25 + lVar7) < (long)((lVar8 - (uVar25 + lVar7)) - lVar9)) {
            FUN_1095861dc((undefined *)((long)plVar5 + lVar10),plVar13,plVar24);
            uVar25 = -(uVar25 + lVar9);
            plVar6 = plVar16;
            lVar8 = lVar8 - lVar7;
            plVar5 = plVar24;
          }
          else {
            FUN_1095861dc(plVar24,plVar16,param_2,param_3,-(uVar25 + lVar9),lVar8 - lVar7);
            plVar6 = plVar13;
            lVar8 = lVar7;
            plVar5 = (long *)((long)plVar5 + lVar10);
            param_2 = plVar24;
          }
        } while( true );
      }
      FUN_109585f94(plVar5,plVar6,param_3,uVar25,param_5);
      plVar16 = param_5 + uVar25;
      FUN_109585f94(plVar6,param_2,param_3,lVar8,plVar16);
      plVar6 = param_5 + param_4;
      plVar24 = (long *)*param_3;
      plVar13 = plVar16;
      do {
        if (plVar13 == plVar6) {
          for (; param_5 != plVar16; param_5 = param_5 + 1) {
            *plVar5 = *param_5;
            plVar5 = plVar5 + 1;
          }
          return;
        }
        lVar8 = *plVar24 + *plVar13 * 0x10;
        iVar1 = *(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8);
        lVar8 = *plVar24 + *param_5 * 0x10;
        iVar2 = *(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8);
        lVar8 = *plVar13;
        if (iVar1 <= iVar2) {
          lVar8 = *param_5;
        }
        lVar10 = 0;
        if (iVar1 <= iVar2) {
          lVar10 = 8;
        }
        param_5 = (long *)((long)param_5 + lVar10);
        lVar10 = 8;
        if (iVar1 <= iVar2) {
          lVar10 = 0;
        }
        plVar13 = (long *)((long)plVar13 + lVar10);
        plVar23 = plVar5 + 1;
        *plVar5 = lVar8;
        plVar5 = plVar23;
      } while (param_5 != plVar16);
      for (; plVar13 != plVar6; plVar13 = plVar13 + 1) {
        *plVar23 = *plVar13;
        plVar23 = plVar23 + 1;
      }
    }
  }
  return;
}



/* Entry: 109585d04; end: 109585f93;  */

void FUN_109585d04(long *param_1,long *param_2,undefined8 *param_3,ulong param_4,long *param_5,
                  long param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      lVar7 = *param_1;
      lVar6 = *(long *)*param_3 + param_2[-1] * 0x10;
      lVar8 = *(long *)*param_3 + lVar7 * 0x10;
      if (*(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8) < *(int *)(lVar6 + 0xc) * *(int *)(lVar6 + 8))
      {
        *param_1 = param_2[-1];
        param_2[-1] = lVar7;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
        lVar6 = 0;
        lVar8 = *(long *)*param_3;
        plVar4 = param_1;
        plVar14 = param_1 + 1;
        do {
          lVar19 = *plVar4;
          lVar15 = *plVar14;
          lVar7 = lVar8 + lVar15 * 0x10;
          iVar1 = *(int *)(lVar7 + 0xc) * *(int *)(lVar7 + 8);
          lVar7 = lVar8 + lVar19 * 0x10;
          lVar5 = lVar6;
          if (*(int *)(lVar7 + 0xc) * *(int *)(lVar7 + 8) < iVar1) {
            do {
              lVar7 = lVar5;
              *(long *)((long)param_1 + lVar7 + 8) = lVar19;
              plVar4 = param_1;
              if (lVar7 == 0) goto LAB_109585e28;
              lVar19 = *(long *)((long)param_1 + lVar7 + -8);
              lVar16 = lVar8 + lVar19 * 0x10;
              lVar5 = lVar7 + -8;
            } while (*(int *)(lVar16 + 0xc) * *(int *)(lVar16 + 8) < iVar1);
            plVar4 = (long *)((long)param_1 + lVar7);
LAB_109585e28:
            *plVar4 = lVar15;
          }
          plVar11 = plVar14 + 1;
          lVar6 = lVar6 + 8;
          plVar4 = plVar14;
          plVar14 = plVar11;
        } while (plVar11 != param_2);
      }
    }
    else {
      uVar23 = param_4 >> 1;
      plVar4 = param_1 + uVar23;
      lVar6 = param_4 - (param_4 >> 1);
      if (param_6 < (long)param_4) {
        FUN_109585d04(param_1,plVar4,param_3,uVar23,param_5,param_6);
        FUN_109585d04(plVar4,param_2,param_3,lVar6,param_5,param_6);
        do {
          if (lVar6 == 0) {
            return;
          }
          if (((long)uVar23 <= param_6) || (lVar6 <= param_6)) {
            if ((long)uVar23 <= lVar6) {
              if (plVar4 == param_1) {
                return;
              }
              lVar6 = -(long)param_5;
              plVar14 = param_5;
              plVar11 = param_1;
              do {
                plVar21 = plVar11 + 1;
                plVar22 = plVar14 + 1;
                *plVar14 = *plVar11;
                lVar6 = lVar6 + -8;
                plVar14 = plVar22;
                plVar11 = plVar21;
              } while (plVar21 != plVar4);
              plVar14 = (long *)*param_3;
              do {
                if (plVar4 == param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR__memmove_11034c660)(param_1,param_5,-((long)param_5 + lVar6));
                  return;
                }
                lVar8 = *plVar14 + *plVar4 * 0x10;
                iVar1 = *(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8);
                lVar8 = *plVar14 + *param_5 * 0x10;
                iVar2 = *(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8);
                lVar8 = *plVar4;
                if (iVar1 <= iVar2) {
                  lVar8 = *param_5;
                }
                lVar7 = 8;
                if (iVar1 <= iVar2) {
                  lVar7 = 0;
                }
                plVar4 = (long *)((long)plVar4 + lVar7);
                lVar7 = 0;
                if (iVar1 <= iVar2) {
                  lVar7 = 8;
                }
                param_5 = (long *)((long)param_5 + lVar7);
                *param_1 = lVar8;
                param_1 = param_1 + 1;
              } while (plVar22 != param_5);
              return;
            }
            if (plVar4 != param_2) {
              lVar6 = 0;
              do {
                *(undefined8 *)((long)param_5 + lVar6) = *(undefined8 *)((long)plVar4 + lVar6);
                lVar6 = lVar6 + 8;
              } while ((long *)((long)plVar4 + lVar6) != param_2);
              plVar11 = (long *)*param_3;
              plVar14 = (long *)((long)param_5 + lVar6);
              do {
                if (plVar4 == param_1) {
                  if (param_5 == plVar14) {
                    return;
                  }
                  lVar6 = -8;
                  do {
                    plVar14 = plVar14 + -1;
                    *(long *)((long)param_2 + lVar6) = *plVar14;
                    lVar6 = lVar6 + -8;
                  } while (plVar14 != param_5);
                  return;
                }
                lVar5 = plVar14[-1];
                lVar7 = plVar4[-1];
                lVar6 = *plVar11 + lVar5 * 0x10;
                lVar8 = *plVar11 + lVar7 * 0x10;
                plVar22 = plVar4 + -1;
                if (*(int *)(lVar6 + 0xc) * *(int *)(lVar6 + 8) <=
                    *(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8)) {
                  plVar14 = plVar14 + -1;
                  plVar22 = plVar4;
                  lVar7 = lVar5;
                }
                plVar4 = plVar22;
                param_2 = param_2 + -1;
                *param_2 = lVar7;
              } while (plVar14 != param_5);
              return;
            }
            return;
          }
          if (uVar23 == 0) {
            return;
          }
          lVar8 = 0;
          lVar15 = *(long *)*param_3;
          lVar5 = lVar15 + *plVar4 * 0x10;
          lVar7 = -uVar23;
          while (lVar16 = *(long *)((long)param_1 + lVar8), lVar19 = lVar15 + lVar16 * 0x10,
                *(int *)(lVar5 + 0xc) * *(int *)(lVar5 + 8) <=
                *(int *)(lVar19 + 0xc) * *(int *)(lVar19 + 8)) {
            lVar8 = lVar8 + 8;
            bVar3 = lVar7 == -1;
            lVar7 = lVar7 + 1;
            if (bVar3) {
              return;
            }
          }
          if (-lVar7 < lVar6) {
            lVar5 = lVar6 / 2;
            plVar14 = plVar4 + lVar5;
            lVar19 = (long)plVar4 + (-lVar8 - (long)param_1);
            plVar11 = plVar4;
            if (lVar19 != 0) {
              uVar23 = lVar19 >> 3;
              lVar19 = lVar15 + *plVar14 * 0x10;
              plVar11 = (long *)((long)param_1 + lVar8);
              do {
                uVar17 = uVar23 >> 1;
                lVar16 = lVar15 + plVar11[uVar17] * 0x10;
                uVar12 = uVar23 + (uVar23 >> 1 ^ 0xffffffffffffffff);
                uVar23 = uVar17;
                if (*(int *)(lVar19 + 0xc) * *(int *)(lVar19 + 8) <=
                    *(int *)(lVar16 + 0xc) * *(int *)(lVar16 + 8)) {
                  uVar23 = uVar12;
                  plVar11 = plVar11 + uVar17 + 1;
                }
              } while (uVar23 != 0);
            }
            uVar23 = (long)plVar11 + (-lVar8 - (long)param_1) >> 3;
          }
          else {
            if (lVar7 == -1) {
              *(long *)((long)param_1 + lVar8) = *plVar4;
              *plVar4 = lVar16;
              return;
            }
            uVar23 = -lVar7 / 2;
            plVar14 = plVar4;
            if (plVar4 != param_2) {
              uVar12 = (long)param_2 - (long)plVar4 >> 3;
              lVar5 = lVar15 + *(long *)((long)param_1 + lVar8 + uVar23 * 8) * 0x10;
              plVar11 = plVar4;
              do {
                uVar17 = uVar12 >> 1;
                lVar19 = lVar15 + plVar11[uVar17] * 0x10;
                plVar14 = plVar11 + uVar17 + 1;
                uVar12 = uVar12 + (uVar12 >> 1 ^ 0xffffffffffffffff);
                if (*(int *)(lVar19 + 0xc) * *(int *)(lVar19 + 8) <=
                    *(int *)(lVar5 + 0xc) * *(int *)(lVar5 + 8)) {
                  plVar14 = plVar11;
                  uVar12 = uVar17;
                }
                plVar11 = plVar14;
              } while (uVar12 != 0);
            }
            lVar5 = (long)plVar14 - (long)plVar4 >> 3;
            plVar11 = (long *)((long)param_1 + lVar8 + uVar23 * 8);
          }
          lVar15 = (long)plVar4 - (long)plVar11;
          plVar22 = plVar14;
          if ((lVar15 != 0) &&
             (lVar19 = (long)plVar14 - (long)plVar4, plVar22 = plVar11, lVar19 != 0)) {
            if (plVar11 + 1 == plVar4) {
              lVar15 = *plVar11;
              _memmove(plVar11,plVar4,lVar19);
              *(long *)((long)plVar11 + lVar19) = lVar15;
              plVar22 = (long *)((long)plVar11 + lVar19);
            }
            else if (plVar4 + 1 == plVar14) {
              plVar4 = plVar14 + -1;
              lVar15 = *plVar4;
              plVar22 = (long *)((long)plVar14 - ((long)plVar4 - (long)plVar11));
              if ((long)plVar4 - (long)plVar11 != 0) {
                _memmove(plVar22,plVar11,(long)plVar4 - (long)plVar11);
              }
              *plVar11 = lVar15;
            }
            else {
              lVar9 = lVar15 >> 3;
              lVar16 = lVar19 >> 3;
              lVar18 = lVar9;
              plVar21 = plVar11;
              plVar20 = plVar4;
              if (lVar9 == lVar19 >> 3) {
                do {
                  plVar10 = plVar20 + 1;
                  lVar15 = *plVar21;
                  *plVar21 = *plVar20;
                  *plVar20 = lVar15;
                  plVar22 = plVar4;
                  if (plVar21 + 1 == plVar4) break;
                  plVar21 = plVar21 + 1;
                  plVar20 = plVar10;
                } while (plVar10 != plVar14);
              }
              else {
                do {
                  lVar13 = lVar16;
                  lVar16 = 0;
                  if (lVar13 != 0) {
                    lVar16 = lVar18 / lVar13;
                  }
                  lVar16 = lVar18 - lVar16 * lVar13;
                  lVar18 = lVar13;
                } while (lVar16 != 0);
                plVar4 = plVar11 + lVar13;
                do {
                  plVar4 = plVar4 + -1;
                  lVar16 = *plVar4;
                  plVar22 = (long *)(lVar15 + (long)plVar4);
                  plVar21 = plVar4;
                  do {
                    plVar20 = plVar22;
                    *plVar21 = *plVar20;
                    lVar18 = (long)plVar14 - (long)plVar20 >> 3;
                    plVar22 = (long *)((long)plVar20 + lVar15);
                    if (lVar18 <= lVar9) {
                      plVar22 = plVar11 + (lVar9 - lVar18);
                    }
                    plVar21 = plVar20;
                  } while (plVar22 != plVar4);
                  *plVar20 = lVar16;
                } while (plVar4 != plVar11);
                plVar22 = (long *)(lVar19 + (long)plVar11);
              }
            }
          }
          if ((long)(uVar23 + lVar5) < (long)((lVar6 - (uVar23 + lVar5)) - lVar7)) {
            FUN_1095861dc((long)param_1 + lVar8,plVar11,plVar22);
            uVar23 = -(uVar23 + lVar7);
            plVar4 = plVar14;
            lVar6 = lVar6 - lVar5;
            param_1 = plVar22;
          }
          else {
            FUN_1095861dc(plVar22,plVar14,param_2,param_3,-(uVar23 + lVar7),lVar6 - lVar5);
            plVar4 = plVar11;
            lVar6 = lVar5;
            param_2 = plVar22;
            param_1 = (long *)((long)param_1 + lVar8);
          }
        } while( true );
      }
      FUN_109585f94(param_1,plVar4,param_3,uVar23,param_5);
      plVar14 = param_5 + uVar23;
      FUN_109585f94(plVar4,param_2,param_3,lVar6,plVar14);
      plVar4 = param_5 + param_4;
      plVar22 = (long *)*param_3;
      plVar11 = plVar14;
      do {
        if (plVar11 == plVar4) {
          for (; param_5 != plVar14; param_5 = param_5 + 1) {
            *param_1 = *param_5;
            param_1 = param_1 + 1;
          }
          return;
        }
        lVar6 = *plVar22 + *plVar11 * 0x10;
        iVar1 = *(int *)(lVar6 + 0xc) * *(int *)(lVar6 + 8);
        lVar6 = *plVar22 + *param_5 * 0x10;
        iVar2 = *(int *)(lVar6 + 0xc) * *(int *)(lVar6 + 8);
        lVar6 = *plVar11;
        if (iVar1 <= iVar2) {
          lVar6 = *param_5;
        }
        lVar8 = 0;
        if (iVar1 <= iVar2) {
          lVar8 = 8;
        }
        param_5 = (long *)((long)param_5 + lVar8);
        lVar8 = 8;
        if (iVar1 <= iVar2) {
          lVar8 = 0;
        }
        plVar11 = (long *)((long)plVar11 + lVar8);
        plVar21 = param_1 + 1;
        *param_1 = lVar6;
        param_1 = plVar21;
      } while (param_5 != plVar14);
      for (; plVar11 != plVar4; plVar11 = plVar11 + 1) {
        *plVar21 = *plVar11;
        plVar21 = plVar21 + 1;
      }
    }
  }
  return;
}



/* Entry: 109585f94; end: 1095861db;  */

void FUN_109585f94(long *param_1,long *param_2,undefined8 *param_3,ulong param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      lVar5 = *(long *)*param_3 + param_2[-1] * 0x10;
      lVar7 = *(long *)*param_3 + *param_1 * 0x10;
      if (*(int *)(lVar7 + 0xc) * *(int *)(lVar7 + 8) < *(int *)(lVar5 + 0xc) * *(int *)(lVar5 + 8))
      {
        *param_5 = param_2[-1];
        lVar5 = *param_1;
      }
      else {
        *param_5 = *param_1;
        lVar5 = param_2[-1];
      }
      param_5[1] = lVar5;
    }
    else if (param_4 == 1) {
      *param_5 = *param_1;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        plVar6 = (long *)*param_3;
        plVar11 = param_1 + 1;
        *param_5 = *param_1;
        if (plVar11 != param_2) {
          lVar5 = 0;
          lVar7 = *plVar6;
          plVar6 = param_5;
          do {
            lVar9 = lVar7 + *plVar11 * 0x10;
            lVar1 = lVar7 + *plVar6 * 0x10;
            if (*(int *)(lVar1 + 0xc) * *(int *)(lVar1 + 8) <
                *(int *)(lVar9 + 0xc) * *(int *)(lVar9 + 8)) {
              plVar6[1] = *plVar6;
              lVar9 = lVar5;
              plVar8 = param_5;
              if (plVar6 != param_5) {
                do {
                  plVar8 = (long *)((long)param_5 + lVar9);
                  lVar1 = lVar7 + *plVar11 * 0x10;
                  lVar2 = lVar7 + plVar8[-1] * 0x10;
                  if (*(int *)(lVar1 + 0xc) * *(int *)(lVar1 + 8) <=
                      *(int *)(lVar2 + 0xc) * *(int *)(lVar2 + 8)) break;
                  *plVar8 = plVar8[-1];
                  lVar9 = lVar9 + -8;
                  plVar8 = param_5;
                } while (lVar9 != 0);
              }
              *plVar8 = *plVar11;
            }
            else {
              plVar6[1] = *plVar11;
            }
            plVar11 = plVar11 + 1;
            lVar5 = lVar5 + 8;
            plVar6 = plVar6 + 1;
          } while (plVar11 != param_2);
        }
      }
    }
    else {
      uVar12 = param_4 >> 1;
      plVar11 = param_1 + uVar12;
      FUN_109585d04(param_1,plVar11,param_3,uVar12,param_5,uVar12);
      lVar5 = param_4 - (param_4 >> 1);
      FUN_109585d04(plVar11,param_2,param_3,lVar5,param_5 + uVar12,lVar5);
      plVar8 = (long *)*param_3;
      plVar6 = plVar11;
      do {
        if (plVar6 == param_2) {
          for (; param_1 != plVar11; param_1 = param_1 + 1) {
            *param_5 = *param_1;
            param_5 = param_5 + 1;
          }
          return;
        }
        lVar5 = *plVar8 + *plVar6 * 0x10;
        iVar3 = *(int *)(lVar5 + 0xc) * *(int *)(lVar5 + 8);
        lVar5 = *plVar8 + *param_1 * 0x10;
        iVar4 = *(int *)(lVar5 + 0xc) * *(int *)(lVar5 + 8);
        lVar5 = *plVar6;
        if (iVar3 <= iVar4) {
          lVar5 = *param_1;
        }
        lVar7 = 8;
        if (iVar3 <= iVar4) {
          lVar7 = 0;
        }
        plVar6 = (long *)((long)plVar6 + lVar7);
        lVar7 = 0;
        if (iVar3 <= iVar4) {
          lVar7 = 8;
        }
        param_1 = (long *)((long)param_1 + lVar7);
        plVar10 = param_5 + 1;
        *param_5 = lVar5;
        param_5 = plVar10;
      } while (param_1 != plVar11);
      for (; plVar6 != param_2; plVar6 = plVar6 + 1) {
        *plVar10 = *plVar6;
        plVar10 = plVar10 + 1;
      }
    }
  }
  return;
}



/* Entry: 1095861dc; end: 10958671b;  */

void FUN_1095861dc(long *param_1,long *param_2,long *param_3,undefined8 *param_4,long param_5,
                  long param_6,long *param_7,long param_8)

{
  long lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  
  do {
    if (param_6 == 0) {
      return;
    }
    if ((param_5 <= param_8) || (param_6 <= param_8)) {
      if (param_5 <= param_6) {
        if (param_2 == param_1) {
          return;
        }
        lVar19 = -(long)param_7;
        plVar13 = param_7;
        plVar11 = param_1;
        do {
          plVar7 = plVar11 + 1;
          plVar20 = plVar13 + 1;
          *plVar13 = *plVar11;
          lVar19 = lVar19 + -8;
          plVar13 = plVar20;
          plVar11 = plVar7;
        } while (plVar7 != param_2);
        plVar13 = (long *)*param_4;
        do {
          if (param_2 == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__memmove_11034c660)(param_1,param_7,-((long)param_7 + lVar19));
            return;
          }
          lVar21 = *plVar13 + *param_2 * 0x10;
          iVar2 = *(int *)(lVar21 + 0xc) * *(int *)(lVar21 + 8);
          lVar21 = *plVar13 + *param_7 * 0x10;
          iVar3 = *(int *)(lVar21 + 0xc) * *(int *)(lVar21 + 8);
          lVar21 = *param_2;
          if (iVar2 <= iVar3) {
            lVar21 = *param_7;
          }
          lVar5 = 8;
          if (iVar2 <= iVar3) {
            lVar5 = 0;
          }
          param_2 = (long *)((long)param_2 + lVar5);
          lVar5 = 0;
          if (iVar2 <= iVar3) {
            lVar5 = 8;
          }
          param_7 = (long *)((long)param_7 + lVar5);
          *param_1 = lVar21;
          param_1 = param_1 + 1;
        } while (plVar20 != param_7);
        return;
      }
      if (param_2 != param_3) {
        lVar19 = 0;
        do {
          *(undefined8 *)((long)param_7 + lVar19) = *(undefined8 *)((long)param_2 + lVar19);
          lVar19 = lVar19 + 8;
        } while ((long *)((long)param_2 + lVar19) != param_3);
        plVar11 = (long *)*param_4;
        plVar13 = (long *)((long)param_7 + lVar19);
        do {
          if (param_2 == param_1) {
            if (param_7 == plVar13) {
              return;
            }
            lVar19 = -8;
            do {
              plVar13 = plVar13 + -1;
              *(long *)((long)param_3 + lVar19) = *plVar13;
              lVar19 = lVar19 + -8;
            } while (plVar13 != param_7);
            return;
          }
          lVar6 = plVar13[-1];
          lVar5 = param_2[-1];
          lVar19 = *plVar11 + lVar6 * 0x10;
          lVar21 = *plVar11 + lVar5 * 0x10;
          plVar20 = param_2 + -1;
          if (*(int *)(lVar19 + 0xc) * *(int *)(lVar19 + 8) <=
              *(int *)(lVar21 + 0xc) * *(int *)(lVar21 + 8)) {
            plVar13 = plVar13 + -1;
            plVar20 = param_2;
            lVar5 = lVar6;
          }
          param_2 = plVar20;
          param_3 = param_3 + -1;
          *param_3 = lVar5;
        } while (plVar13 != param_7);
        return;
      }
      return;
    }
    if (param_5 == 0) {
      return;
    }
    lVar19 = 0;
    lVar6 = *(long *)*param_4;
    lVar5 = lVar6 + *param_2 * 0x10;
    lVar21 = -param_5;
    while (lVar14 = *(long *)((long)param_1 + lVar19), lVar1 = lVar6 + lVar14 * 0x10,
          *(int *)(lVar5 + 0xc) * *(int *)(lVar5 + 8) <= *(int *)(lVar1 + 0xc) * *(int *)(lVar1 + 8)
          ) {
      lVar19 = lVar19 + 8;
      bVar4 = lVar21 == -1;
      lVar21 = lVar21 + 1;
      if (bVar4) {
        return;
      }
    }
    if (-lVar21 < param_6) {
      lVar5 = param_6 / 2;
      plVar13 = param_2 + lVar5;
      lVar1 = (long)param_2 + (-lVar19 - (long)param_1);
      plVar11 = param_2;
      if (lVar1 != 0) {
        uVar8 = lVar1 >> 3;
        lVar1 = lVar6 + *plVar13 * 0x10;
        plVar11 = (long *)((long)param_1 + lVar19);
        do {
          uVar15 = uVar8 >> 1;
          lVar14 = lVar6 + plVar11[uVar15] * 0x10;
          uVar17 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
          uVar8 = uVar15;
          if (*(int *)(lVar1 + 0xc) * *(int *)(lVar1 + 8) <=
              *(int *)(lVar14 + 0xc) * *(int *)(lVar14 + 8)) {
            uVar8 = uVar17;
            plVar11 = plVar11 + uVar15 + 1;
          }
        } while (uVar8 != 0);
      }
      param_5 = (long)plVar11 + (-lVar19 - (long)param_1) >> 3;
    }
    else {
      if (lVar21 == -1) {
        *(long *)((long)param_1 + lVar19) = *param_2;
        *param_2 = lVar14;
        return;
      }
      param_5 = -lVar21 / 2;
      plVar13 = param_2;
      if (param_2 != param_3) {
        uVar8 = (long)param_3 - (long)param_2 >> 3;
        lVar5 = lVar6 + *(long *)((long)param_1 + lVar19 + param_5 * 8) * 0x10;
        plVar11 = param_2;
        do {
          uVar17 = uVar8 >> 1;
          lVar1 = lVar6 + plVar11[uVar17] * 0x10;
          plVar13 = plVar11 + uVar17 + 1;
          uVar8 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
          if (*(int *)(lVar1 + 0xc) * *(int *)(lVar1 + 8) <=
              *(int *)(lVar5 + 0xc) * *(int *)(lVar5 + 8)) {
            plVar13 = plVar11;
            uVar8 = uVar17;
          }
          plVar11 = plVar13;
        } while (uVar8 != 0);
      }
      lVar5 = (long)plVar13 - (long)param_2 >> 3;
      plVar11 = (long *)((long)param_1 + lVar19 + param_5 * 8);
    }
    lVar6 = (long)param_2 - (long)plVar11;
    plVar20 = plVar13;
    if ((lVar6 != 0) && (lVar1 = (long)plVar13 - (long)param_2, plVar20 = plVar11, lVar1 != 0)) {
      if (plVar11 + 1 == param_2) {
        lVar6 = *plVar11;
        _memmove(plVar11,param_2,lVar1);
        *(long *)((long)plVar11 + lVar1) = lVar6;
        plVar20 = (long *)((long)plVar11 + lVar1);
      }
      else if (param_2 + 1 == plVar13) {
        plVar7 = plVar13 + -1;
        lVar6 = *plVar7;
        plVar20 = (long *)((long)plVar13 - ((long)plVar7 - (long)plVar11));
        if ((long)plVar7 - (long)plVar11 != 0) {
          _memmove(plVar20,plVar11,(long)plVar7 - (long)plVar11);
        }
        *plVar11 = lVar6;
      }
      else {
        lVar9 = lVar6 >> 3;
        lVar14 = lVar1 >> 3;
        lVar16 = lVar9;
        plVar7 = plVar11;
        plVar18 = param_2;
        if (lVar9 == lVar1 >> 3) {
          do {
            plVar10 = plVar18 + 1;
            lVar6 = *plVar7;
            *plVar7 = *plVar18;
            *plVar18 = lVar6;
            plVar20 = param_2;
            if (plVar7 + 1 == param_2) break;
            plVar7 = plVar7 + 1;
            plVar18 = plVar10;
          } while (plVar10 != plVar13);
        }
        else {
          do {
            lVar12 = lVar14;
            lVar14 = 0;
            if (lVar12 != 0) {
              lVar14 = lVar16 / lVar12;
            }
            lVar14 = lVar16 - lVar14 * lVar12;
            lVar16 = lVar12;
          } while (lVar14 != 0);
          plVar20 = plVar11 + lVar12;
          do {
            plVar20 = plVar20 + -1;
            lVar14 = *plVar20;
            plVar7 = (long *)(lVar6 + (long)plVar20);
            plVar18 = plVar20;
            do {
              plVar10 = plVar7;
              *plVar18 = *plVar10;
              lVar16 = (long)plVar13 - (long)plVar10 >> 3;
              plVar7 = (long *)((long)plVar10 + lVar6);
              if (lVar16 <= lVar9) {
                plVar7 = plVar11 + (lVar9 - lVar16);
              }
              plVar18 = plVar10;
            } while (plVar7 != plVar20);
            *plVar10 = lVar14;
          } while (plVar20 != plVar11);
          plVar20 = (long *)(lVar1 + (long)plVar11);
        }
      }
    }
    if (param_5 + lVar5 < (param_6 - (param_5 + lVar5)) - lVar21) {
      FUN_1095861dc((long)param_1 + lVar19,plVar11,plVar20);
      param_6 = param_6 - lVar5;
      param_5 = -(param_5 + lVar21);
      param_2 = plVar13;
      param_1 = plVar20;
    }
    else {
      FUN_1095861dc(plVar20,plVar13,param_3,param_4,-(param_5 + lVar21),param_6 - lVar5);
      param_6 = lVar5;
      param_3 = plVar20;
      param_2 = plVar11;
      param_1 = (long *)((long)param_1 + lVar19);
    }
  } while( true );
}



/* Entry: 10958671c; end: 10958678b;  */

undefined8 * FUN_10958671c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afcc50;
  func_0x000107c27bf0(param_1 + 1,param_1[2]);
  return param_1;
}



/* Entry: 10958678c; end: 109587433;  */

/* WARNING: Removing unreachable block (ram,0x000109586c50) */

void FUN_10958678c(long param_1,uint *param_2)

{
  int *piVar1;
  long *plVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long *plVar11;
  float *pfVar12;
  code *pcVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  float *pfVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  int iVar28;
  ulong uVar29;
  ulong *puVar30;
  float *pfVar31;
  int iVar32;
  undefined8 *puVar33;
  int iVar34;
  float fVar35;
  float *pfVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined8 uVar40;
  float *pfVar41;
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
  undefined8 uStack_360;
  float *pfStack_358;
  float *pfStack_350;
  float *pfStack_348;
  float **ppfStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  ulong uStack_320;
  undefined8 *puStack_318;
  undefined8 auStack_310 [26];
  int iStack_240;
  float *pfStack_218;
  float *pfStack_210;
  float *pfStack_208;
  undefined4 auStack_200 [2];
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined4 auStack_1e8 [2];
  int *piStack_1e0;
  undefined8 uStack_1d8;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  undefined8 uStack_1b0;
  float *pfStack_1a8;
  float *pfStack_1a0;
  float *pfStack_198;
  float **ppfStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  ulong uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [8];
  long *plStack_148;
  long alStack_140 [3];
  long *plStack_128;
  undefined1 auStack_120 [8];
  long *plStack_118;
  long alStack_110 [3];
  long *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [16];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar19 = *(int *)((*(long **)(param_2 + 2))[0xc] + (long)(int)*param_2 * 4);
  lVar23 = **(long **)(param_2 + 2);
  if (*(long *)(lVar23 + (long)iVar19 * 0x50 + 0x40) != 0) {
    puVar33 = (undefined8 *)((ulong)&uStack_1b0 | 4);
    do {
      if (*(long *)(lVar23 + (long)iVar19 * 0x50 + 0x90) == 0) break;
      FUN_109572f9c(auStack_120,param_2);
      puVar14 = auStack_120;
      FUN_109570a30();
      pfVar18 = (float *)(ulong)*param_2;
      FUN_109587434(auStack_150,pfVar18,**(undefined8 **)(param_2 + 2),
                    (*(undefined8 **)(param_2 + 2))[0xc]);
      puVar15 = auStack_150;
      FUN_10957358c();
      if (*(int *)(puVar15 + 0x18) == 0) {
        if (*(int *)(param_1 + 0x58) == 1) {
          FUN_10957fdbc(param_2,puVar14);
        }
      }
      else {
        if (2 < *(uint *)(puVar14 + 0x120)) {
          func_0x000105688514(&UNK_10f574011);
          goto LAB_109587360;
        }
        pfStack_210 = (float *)0x0;
        pfStack_208 = (float *)0x0;
        pfStack_218 = (float *)0x0;
        uVar29 = *(ulong *)(puVar15 + 0x10);
        puVar30 = (ulong *)(puVar15 + 0x10);
        if ((uVar29 & 1) != 0) {
          puVar30 = (ulong *)(uVar29 + 7);
        }
        auVar37._4_4_ = *(undefined4 *)(puVar14 + 8);
        auVar37._0_4_ =
             *(undefined4 *)
              (puVar14 + *(long *)(&UNK_10dfd4b50 + (ulong)*(uint *)(puVar14 + 0x120) * 8));
        auVar37._8_4_ =
             *(undefined4 *)
              (puVar14 + *(long *)(&UNK_10dfd4b50 + (ulong)*(uint *)(puVar14 + 0x120) * 8));
        auVar37._12_4_ = *(undefined4 *)(puVar14 + 8);
        auVar37 = NEON_scvtf(auVar37,4);
        lVar23 = (long)*(int *)(puVar15 + 0x18) << 3;
        do {
          uVar29 = *puVar30;
          if ((*(uint *)(uVar29 + 0x10) & 1) == 0) {
            pfVar41 = (float *)0x0;
            pfVar36 = (float *)0x0;
            if ((*(uint *)(uVar29 + 0x10) >> 1 & 1) != 0) {
              auVar38._0_8_ = *(undefined8 *)(*(long *)(uVar29 + 0x38) + 0x10);
              uVar40 = *(undefined8 *)(*(long *)(uVar29 + 0x38) + 0x18);
              auVar38._12_4_ = (int)((ulong)uVar40 >> 0x20) + (int)((ulong)auVar38._0_8_ >> 0x20);
              auVar38._8_4_ = (int)uVar40 + (int)auVar38._0_8_;
              auVar38 = NEON_scvtf(auVar38,4);
              pfVar41 = (float *)CONCAT44(auVar38._4_4_ / auVar37._4_4_,
                                          auVar38._0_4_ / auVar37._0_4_);
              pfVar36 = (float *)CONCAT44(auVar38._12_4_ / auVar37._12_4_,
                                          auVar38._8_4_ / auVar37._8_4_);
            }
          }
          else {
            pfVar41 = *(float **)(*(long *)(uVar29 + 0x30) + 0x10);
            uVar40 = *(undefined8 *)(*(long *)(uVar29 + 0x30) + 0x18);
            pfVar36 = (float *)CONCAT44((float)((ulong)pfVar41 >> 0x20) +
                                        (float)((ulong)uVar40 >> 0x20),
                                        SUB84(pfVar41,0) + (float)uVar40);
          }
          uVar24 = *(ulong *)(uVar29 + 0x18);
          puVar3 = (ulong *)(uVar29 + 0x18);
          if ((uVar24 & 1) != 0) {
            puVar3 = (ulong *)(uVar24 + 7);
          }
          pfVar31 = (float *)(*(ulong *)(*puVar3 + 0x10) & 0xfffffffffffffffc);
          fVar48 = *(float *)(*puVar3 + 0x1c);
          if (*(long *)(param_1 + 0x18) == 0) {
LAB_109586970:
            uStack_360 = pfVar41;
            pfStack_358 = pfVar36;
            if (*(char *)((long)pfVar31 + 0x17) < '\0') {
              pfVar18 = *(float **)pfVar31;
              func_0x000107c3192c(&pfStack_350,pfVar18,*(undefined8 *)(pfVar31 + 2));
            }
            else {
              pfStack_350 = *(float **)pfVar31;
              pfStack_348 = *(float **)(pfVar31 + 2);
              ppfStack_340 = *(float ***)(pfVar31 + 4);
            }
            uStack_338 = CONCAT44(uStack_338._4_4_,fVar48);
            if (pfStack_210 < pfStack_208) {
              *(float **)(pfStack_210 + 2) = pfStack_358;
              *(float **)pfStack_210 = uStack_360;
              *(float ***)(pfStack_210 + 8) = ppfStack_340;
              *(float **)(pfStack_210 + 6) = pfStack_348;
              *(float **)(pfStack_210 + 4) = pfStack_350;
              pfStack_348 = (float *)0x0;
              ppfStack_340 = (float **)0x0;
              pfStack_350 = (float *)0x0;
              pfStack_210[10] = fVar48;
              pfVar12 = pfStack_210 + 0xc;
            }
            else {
              lVar26 = (long)pfStack_210 - (long)pfStack_218;
              uVar29 = (lVar26 >> 4) * -0x5555555555555555 + 1;
              if (0x555555555555555 < uVar29) {
                FUN_109587590();
                goto LAB_109587360;
              }
              lVar25 = (long)pfStack_208 - (long)pfStack_218 >> 4;
              uVar24 = lVar25 * 0x5555555555555556;
              if (uVar24 < uVar29 || uVar24 - uVar29 == 0) {
                uVar24 = uVar29;
              }
              if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar25 * -0x5555555555555555)) {
                uVar24 = 0x555555555555555;
              }
              ppfStack_190 = &pfStack_218;
              FUN_1095875a4();
              puVar16 = (undefined8 *)(uVar24 + lVar26);
              puVar16[1] = pfStack_358;
              *puVar16 = uStack_360;
              puVar16[4] = ppfStack_340;
              puVar16[3] = pfStack_348;
              puVar16[2] = pfStack_350;
              pfStack_348 = (float *)0x0;
              ppfStack_340 = (float **)0x0;
              pfStack_350 = (float *)0x0;
              *(undefined4 *)(puVar16 + 5) = (undefined4)uStack_338;
              pfVar12 = (float *)(puVar16 + 6);
              pfVar36 = (float *)((long)puVar16 + ((long)pfStack_218 - (long)pfStack_210));
              func_0x0001095875e8(pfStack_218,pfStack_210,pfVar36);
              pfStack_1a0 = pfStack_218;
              pfStack_198 = pfStack_208;
              pfStack_1a8 = pfStack_218;
              uStack_1b0 = pfStack_218;
              pfStack_218 = pfVar36;
              pfVar36 = pfStack_210;
              pfStack_210 = pfVar12;
              pfStack_208 = (float *)(uVar24 + (long)pfVar18 * 0x30);
              func_0x000109587668(&uStack_1b0);
              pfVar18 = pfStack_210;
              if ((long)ppfStack_340 < 0) {
                pfStack_210 = pfVar12;
                __ZdlPv(pfStack_350);
                pfVar12 = pfStack_210;
              }
            }
          }
          else {
            lVar26 = param_1 + 8;
            pfVar18 = pfVar31;
            FUN_10958752c();
            pfVar12 = pfStack_210;
            if (lVar26 != 0) goto LAB_109586970;
          }
          pfStack_210 = pfVar12;
          puVar30 = puVar30 + 1;
          lVar23 = lVar23 + -8;
        } while (lVar23 != 0);
        pfVar36 = pfStack_218;
        pfVar41 = pfStack_210;
        pfVar31 = pfStack_210;
        if ((*(int *)(param_1 + 0x24) != 0) && (iVar19 = *(int *)(param_1 + 0x20), iVar19 != 0)) {
          if (*(int *)(param_1 + 0x24) == 2) {
            lVar23 = 0;
            if (pfStack_210 != pfStack_218) {
              lVar23 = LZCOUNT(((long)pfStack_210 - (long)pfStack_218 >> 4) * -0x5555555555555555) *
                       -2 + 0x7e;
            }
            pfVar18 = pfStack_210;
            FUN_1095876c8(pfStack_218,pfStack_210,lVar23,1);
            iVar19 = *(int *)(param_1 + 0x20);
          }
          pfVar31 = pfStack_210;
          lVar23 = (long)pfStack_210 - (long)pfStack_218;
          lVar26 = lVar23 >> 4;
          uVar29 = lVar26 * -0x5555555555555555;
          if ((int)uVar29 <= iVar19) {
            iVar19 = (int)uVar29;
          }
          uVar21 = (ulong)iVar19;
          uVar24 = uVar21 + lVar26 * 0x5555555555555555;
          if (uVar21 < uVar29 || uVar24 == 0) {
            pfVar36 = pfStack_218;
            pfVar41 = pfStack_210;
            if (uVar21 < uVar29) {
              pfVar41 = pfStack_218 + (long)iVar19 * 0xc;
              for (; pfVar31 = pfVar41, pfStack_210 != pfVar41; pfStack_210 = pfStack_210 + -0xc) {
              }
            }
          }
          else if ((ulong)(((long)pfStack_208 - (long)pfStack_210 >> 4) * -0x5555555555555555) <
                   uVar24) {
            if (iVar19 < 0) goto LAB_10958735c;
            lVar26 = (long)pfStack_208 - (long)pfStack_218 >> 4;
            uVar29 = lVar26 * 0x5555555555555556;
            if (uVar29 < uVar21 || uVar29 - uVar21 == 0) {
              uVar29 = uVar21;
            }
            if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar26 * -0x5555555555555555)) {
              uVar29 = 0x555555555555555;
            }
            ppfStack_340 = &pfStack_218;
            FUN_1095875a4();
            lVar23 = uVar29 + lVar23;
            lVar26 = ((uVar24 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
            _bzero(lVar23,lVar26);
            pfVar36 = (float *)((long)pfStack_218 + (lVar23 - (long)pfStack_210));
            func_0x0001095875e8(pfStack_218,pfStack_210,pfVar36);
            pfStack_350 = pfStack_218;
            pfStack_348 = pfStack_208;
            uStack_360 = pfStack_218;
            pfStack_358 = pfStack_218;
            pfStack_218 = pfVar36;
            pfStack_210 = (float *)(lVar23 + lVar26);
            pfStack_208 = (float *)(uVar29 + (long)pfVar18 * 0x30);
            func_0x000109587668(&uStack_360);
            pfVar36 = pfStack_218;
            pfVar41 = pfStack_210;
            pfVar31 = pfStack_210;
          }
          else {
            uVar29 = (uVar24 * 0x30 - 0x30) / 0x30;
            _bzero(pfStack_210,uVar29 * 0x30 + 0x30);
            pfVar36 = pfStack_218;
            pfVar41 = pfVar31 + uVar29 * 0xc + 0xc;
            pfVar31 = pfVar31 + uVar29 * 0xc + 0xc;
          }
        }
        for (; pfStack_210 = pfVar31, pfVar31 = pfStack_210, pfVar36 != pfStack_210;
            pfVar36 = pfVar36 + 0xc) {
          pfStack_210 = pfVar41;
          FUN_10957ce8c(&uStack_360,puVar14);
          if (iStack_240 != 0) {
            FUN_1092612e0();
            goto LAB_109587360;
          }
          if (2 < *(uint *)(puVar14 + 0x120)) {
            func_0x000105688514(&UNK_10f574011);
            goto LAB_109587360;
          }
          iVar5 = *(int *)(puVar14 +
                          *(long *)(&UNK_10dfd4b50 + (ulong)*(uint *)(puVar14 + 0x120) * 8));
          iVar19 = *(int *)(puVar14 + 8);
          fVar39 = *pfVar36 * (float)iVar5;
          fVar35 = pfVar36[1] * (float)iVar19;
          fVar42 = pfVar36[2] * (float)iVar5;
          fVar48 = pfVar36[3] * (float)iVar19;
          iVar32 = *(int *)(param_1 + 0x50);
          if (iVar32 == 3) {
            fVar39 = fVar39 + (fVar42 - fVar39) * 0.5;
            fVar35 = fVar35 + (fVar48 - fVar35) * 0.5;
            fVar48 = (float)*(int *)(param_1 + 0x5c) * 0.5;
            fVar42 = (float)*(int *)(param_1 + 0x60) * 0.5;
            fVar49 = fVar39 - fVar48;
            fVar50 = fVar35 - fVar42;
            fVar47 = fVar35 + fVar42;
            fVar8 = fVar39 + fVar48;
          }
          else {
            fVar43 = fVar42 - fVar39;
            fVar44 = fVar48 - fVar35;
            fVar45 = fVar43 * 0.5;
            fVar47 = fVar44 * 0.5;
            fVar52 = (fVar39 + fVar45) - fVar47;
            fVar51 = fVar39 + fVar45 + fVar47;
            fVar53 = (fVar35 + fVar47) - fVar45;
            fVar45 = fVar45 + fVar35 + fVar47;
            fVar54 = fVar48;
            fVar9 = fVar51;
            fVar46 = fVar35;
            fVar10 = fVar52;
            if (fVar44 < fVar43) {
              fVar54 = fVar45;
              fVar9 = fVar42;
              fVar46 = fVar53;
              fVar10 = fVar39;
            }
            fVar47 = fVar48;
            fVar8 = fVar42;
            fVar50 = fVar35;
            fVar49 = fVar39;
            if (fVar43 != fVar44) {
              fVar47 = fVar54;
              fVar8 = fVar9;
              fVar50 = fVar46;
              fVar49 = fVar10;
            }
            fVar46 = fVar48;
            fVar9 = fVar35;
            if (fVar43 < fVar44) {
              fVar46 = fVar45;
              fVar51 = fVar42;
              fVar9 = fVar53;
              fVar52 = fVar39;
            }
            fVar53 = fVar48;
            fVar10 = fVar42;
            fVar54 = fVar35;
            fVar45 = fVar39;
            if (fVar43 != fVar44) {
              fVar53 = fVar46;
              fVar10 = fVar51;
              fVar54 = fVar9;
              fVar45 = fVar52;
            }
            if (iVar32 == 1) {
              fVar48 = fVar53;
              fVar42 = fVar10;
              fVar35 = fVar54;
              fVar39 = fVar45;
            }
            if (iVar32 != 2) {
              fVar49 = fVar39;
              fVar50 = fVar35;
              fVar47 = fVar48;
              fVar8 = fVar42;
            }
          }
          iVar32 = (int)(fVar8 - fVar49);
          iVar34 = (int)(fVar47 - fVar50);
          uStack_1b0 = (float *)CONCAT44(uStack_1b0._4_4_,0x42ff0000);
          puVar33[1] = 0;
          *puVar33 = 0;
          puVar33[3] = 0;
          puVar33[2] = 0;
          puVar33[5] = 0;
          puVar33[4] = 0;
          *(undefined8 *)((long)puVar33 + 0x34) = 0;
          *(undefined8 *)((long)puVar33 + 0x2c) = 0;
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_170 = (ulong)&uStack_1b0 | 8;
          puStack_168 = &uStack_160;
          iStack_f0 = iVar34;
          iStack_ec = iVar32;
          FUN_109a83fd0(&uStack_1b0,2,&iStack_f0,(uint)uStack_360 & 0xfff);
          FUN_109a48880(&uStack_1b0,param_1 + 0x30);
          if (lStack_328 != 0) {
            piVar1 = (int *)(lStack_328 + 0x14);
            do {
              iVar4 = *piVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar4 + -1 == 0) {
              func_0x000109a848d4(&uStack_360);
            }
          }
          if (0 < uStack_360._4_4_) {
            lVar23 = 0;
            do {
              *(undefined4 *)(uStack_320 + lVar23 * 4) = 0;
              lVar23 = lVar23 + 1;
            } while (lVar23 < uStack_360._4_4_);
          }
          pfStack_358 = pfStack_1a8;
          uStack_360 = uStack_1b0;
          pfStack_348 = pfStack_198;
          pfStack_350 = pfStack_1a0;
          uStack_338 = uStack_188;
          ppfStack_340 = ppfStack_190;
          lStack_328 = lStack_178;
          uStack_330 = uStack_180;
          uVar29 = uStack_320;
          puVar16 = puStack_318;
          if ((puStack_318 != auStack_310) &&
             (uVar29 = (ulong)&uStack_360 | 8, puVar16 = auStack_310,
             puStack_318 != (undefined8 *)0x0)) {
            _free(puStack_318[-1]);
          }
          puStack_318 = puVar16;
          uStack_320 = uVar29;
          if (uStack_1b0._4_4_ < 3) {
            *puStack_318 = *puStack_168;
            puStack_318[1] = puStack_168[1];
            uStack_1b0 = (float *)CONCAT44(uStack_1b0._4_4_,0x42ff0000);
            puVar33[1] = 0;
            *puVar33 = 0;
            puVar33[3] = 0;
            puVar33[2] = 0;
            puVar33[5] = 0;
            puVar33[4] = 0;
            *(undefined8 *)((long)puVar33 + 0x34) = 0;
            *(undefined8 *)((long)puVar33 + 0x2c) = 0;
            if (puStack_168 != &uStack_160) {
              _free(puStack_168[-1]);
            }
          }
          else {
            uStack_320 = uStack_170;
            puStack_318 = puStack_168;
          }
          uVar20 = (uint)fVar49;
          uVar22 = (uint)fVar50;
          if (*(int *)(param_1 + 0x54) == 1) {
            iVar4 = iVar32 + uVar20;
            if (((int)uVar20 < 0) && (iVar5 < iVar4)) {
              iVar27 = (iVar5 / 2 - uVar20) - iVar32 / 2;
            }
            else {
              iVar27 = 0;
              if (iVar5 < iVar4) {
                iVar27 = iVar5 - iVar4;
              }
              if ((uVar20 & 0x80000000) != 0) {
                iVar27 = -uVar20;
              }
            }
            iVar4 = iVar34 + uVar22;
            if (((int)uVar22 < 0) && (iVar19 < iVar4)) {
              iVar28 = (iVar19 / 2 - uVar22) - iVar34 / 2;
            }
            else {
              iVar28 = 0;
              if (iVar19 < iVar4) {
                iVar28 = iVar19 - iVar4;
              }
              if ((uVar22 & 0x80000000) != 0) {
                iVar28 = -uVar22;
              }
            }
            uVar20 = iVar27 + uVar20;
            uVar22 = iVar28 + uVar22;
          }
          uStack_1c0 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
          uStack_1bc = uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU);
          iStack_1b8 = uVar20 + iVar32;
          if (iVar5 <= (int)(uVar20 + iVar32)) {
            iStack_1b8 = iVar5;
          }
          iStack_1b8 = iStack_1b8 - uStack_1c0;
          iStack_1b4 = uVar22 + iVar34;
          if (iVar19 <= (int)(uVar22 + iVar34)) {
            iStack_1b4 = iVar19;
          }
          iStack_1b4 = iStack_1b4 - uStack_1bc;
          if (iStack_1b8 < 1 || iStack_1b4 < 1) {
            uStack_1c0 = 0;
            uStack_1bc = 0;
            iStack_1b8 = 0;
            iStack_1b4 = 0;
          }
          if (iStack_1b4 * iStack_1b8 != 0) {
            iStack_1d0 = uStack_1c0 - uVar20;
            iStack_1cc = uStack_1bc - uVar22;
            iStack_1c8 = iStack_1b8;
            iStack_1c4 = iStack_1b4;
            if (*(int *)(puVar14 + 0x120) != 0) {
              FUN_1092612e0();
              goto LAB_109587360;
            }
            puVar16 = &uStack_1b0;
            FUN_109a852c8(puVar16,puVar14,&uStack_1c0);
            if (*(int *)(param_1 + 0x28) == 1) {
              auStack_200[0] = 0x1010000;
              puStack_1f8 = &uStack_1b0;
              uStack_1f0 = 0;
              FUN_109a91d90();
              puVar17 = auStack_200;
              FUN_109ab7c94(&iStack_f0,puVar17,puVar16);
              auStack_1e8[0] = 0xc1020006;
              piStack_1e0 = &iStack_f0;
              uStack_1d8 = 0x400000001;
              FUN_109a91d90();
              FUN_109a48a40(&uStack_360,auStack_1e8,puVar17);
            }
            FUN_109a852c8(&iStack_f0,&uStack_360,&iStack_1d0);
            auStack_1e8[0] = 0xc2010000;
            piStack_1e0 = &iStack_f0;
            uStack_1d8 = 0;
            FUN_109a479a0(&uStack_1b0,auStack_1e8);
            if (lStack_b8 != 0) {
              piVar1 = (int *)(lStack_b8 + 0x14);
              do {
                iVar19 = *piVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                  *piVar1 = iVar19 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar19 + -1 == 0) {
                func_0x000109a848d4(&iStack_f0);
              }
            }
            lStack_b8 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            if (0 < iStack_ec) {
              lVar23 = 0;
              do {
                *(undefined4 *)(lStack_b0 + lVar23 * 4) = 0;
                lVar23 = lVar23 + 1;
              } while (lVar23 < iStack_ec);
            }
            if (puStack_a8 != auStack_a0 && puStack_a8 != (undefined1 *)0x0) {
              _free(*(undefined8 *)(puStack_a8 + -8));
            }
            if (lStack_178 != 0) {
              piVar1 = (int *)(lStack_178 + 0x14);
              do {
                iVar19 = *piVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                  *piVar1 = iVar19 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar19 + -1 == 0) {
                func_0x000109a848d4(&uStack_1b0);
              }
            }
            lStack_178 = 0;
            pfStack_198 = (float *)0x0;
            pfStack_1a0 = (float *)0x0;
            uStack_188 = 0;
            ppfStack_190 = (float **)0x0;
            if (0 < uStack_1b0._4_4_) {
              lVar23 = 0;
              do {
                *(undefined4 *)(uStack_170 + lVar23 * 4) = 0;
                lVar23 = lVar23 + 1;
              } while (lVar23 < uStack_1b0._4_4_);
            }
            if (puStack_168 != &uStack_160 && puStack_168 != (undefined8 *)0x0) {
              _free(puStack_168[-1]);
            }
          }
          FUN_10957fdbc(param_2,&uStack_360);
          FUN_10951f294(&uStack_360);
          pfVar41 = pfStack_210;
        }
        pfStack_210 = pfVar41;
        FUN_109588a9c(&pfStack_218);
      }
      if (plStack_128 == alStack_140) {
        lVar23 = 0x20;
LAB_109587214:
        (**(code **)(*plStack_128 + lVar23))();
      }
      else if (plStack_128 != (long *)0x0) {
        lVar23 = 0x28;
        goto LAB_109587214;
      }
      plVar11 = plStack_148;
      if (plStack_148 != (long *)0x0) {
        plVar2 = plStack_148 + 1;
        do {
          lVar23 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar23 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      if (plStack_f8 == alStack_110) {
        lVar23 = 0x20;
LAB_109587278:
        (**(code **)(*plStack_f8 + lVar23))();
      }
      else if (plStack_f8 != (long *)0x0) {
        lVar23 = 0x28;
        goto LAB_109587278;
      }
      plVar11 = plStack_118;
      if (plStack_118 != (long *)0x0) {
        plVar2 = plStack_118 + 1;
        do {
          lVar23 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar23 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      iVar19 = *(int *)((*(long **)(param_2 + 2))[0xc] + (long)(int)*param_2 * 4);
      lVar23 = **(long **)(param_2 + 2);
    } while (*(long *)(lVar23 + (long)iVar19 * 0x50 + 0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
LAB_10958735c:
  FUN_109587590();
LAB_109587360:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x109587364);
  (*pcVar13)();
}



/* Entry: 109587434; end: 10958752b;  */

long * FUN_109587434(undefined8 param_1,int param_2,long param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_58 [8];
  long *plStack_50;
  long alStack_48 [3];
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1095659c8(auStack_58,param_3 + (long)*(int *)(param_4 + (long)param_2 * 4) * 0x50 + 0x50);
  puVar4 = auStack_58;
  FUN_1095830e0(param_1);
  if (plStack_30 == alStack_48) {
    lVar5 = 0x20;
  }
  else {
    if (plStack_30 == (long *)0x0) goto LAB_1095874ac;
    lVar5 = 0x28;
  }
  (**(code **)(*plStack_30 + lVar5))();
LAB_1095874ac:
  if (plStack_50 != (long *)0x0) {
    plVar6 = plStack_50 + 1;
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plStack_30 = plStack_50;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    func_0x000105681f78(auStack_58);
    __Unwind_Resume();
    plVar6 = (long *)plStack_30[1];
    do {
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      puVar3 = puVar4;
      func_0x000107c2abd4(puVar4,plVar6 + 4);
      if (((uint)puVar3 >> 7 & 1) == 0) {
        lVar5 = (long)(plVar6 + 4);
        func_0x000107c2abd4(lVar5,puVar4);
        if (((uint)lVar5 >> 7 & 1) == 0) {
          return (long *)0x1;
        }
        plVar6 = plVar6 + 1;
      }
      plVar6 = (long *)*plVar6;
    } while( true );
  }
  return plStack_30;
}



/* Entry: 10958752c; end: 10958758f;  */

undefined8 FUN_10958752c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  do {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    uVar1 = param_2;
    func_0x000107c2abd4(param_2,plVar3 + 4);
    if (((uint)uVar1 >> 7 & 1) == 0) {
      lVar2 = (long)(plVar3 + 4);
      func_0x000107c2abd4(lVar2,param_2);
      if (((uint)lVar2 >> 7 & 1) == 0) {
        return 1;
      }
      plVar3 = plVar3 + 1;
    }
    plVar3 = (long *)*plVar3;
  } while( true );
}



/* Entry: 109587590; end: 1095875a3;  */

void FUN_109587590(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x555555555555555 < puVar1) {
    func_0x000104c4f740();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        uVar3 = *puVar2;
        param_3[1] = puVar2[1];
        *param_3 = uVar3;
        uVar4 = puVar2[3];
        uVar3 = puVar2[2];
        param_3[4] = puVar2[4];
        param_3[3] = uVar4;
        param_3[2] = uVar3;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[2] = 0;
        *(undefined4 *)(param_3 + 5) = *(undefined4 *)(puVar2 + 5);
        puVar2 = puVar2 + 6;
        param_3 = param_3 + 6;
      } while (puVar2 != param_2);
      do {
        if (*(char *)((long)puVar1 + 0x27) < '\0') {
          __ZdlPv(puVar1[2]);
        }
        puVar1 = puVar1 + 6;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x30);
  return;
}



/* Entry: 1095875a4; end: 1095876c7;  */

void FUN_1095875a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined8 *)0x555555555555555 < param_1) {
    func_0x000104c4f740();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        uVar2 = *puVar1;
        param_3[1] = puVar1[1];
        *param_3 = uVar2;
        uVar3 = puVar1[3];
        uVar2 = puVar1[2];
        param_3[4] = puVar1[4];
        param_3[3] = uVar3;
        param_3[2] = uVar2;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[2] = 0;
        *(undefined4 *)(param_3 + 5) = *(undefined4 *)(puVar1 + 5);
        puVar1 = puVar1 + 6;
        param_3 = param_3 + 6;
      } while (puVar1 != param_2);
      do {
        if (*(char *)((long)param_1 + 0x27) < '\0') {
          __ZdlPv(param_1[2]);
        }
        param_1 = param_1 + 6;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x30);
  return;
}



/* Entry: 1095876c8; end: 10958853b;  */

/* WARNING: Removing unreachable block (ram,0x000109588438) */
/* WARNING: Removing unreachable block (ram,0x00010958823c) */
/* WARNING: Removing unreachable block (ram,0x000109587ba8) */
/* WARNING: Removing unreachable block (ram,0x000109587d3c) */
/* WARNING: Removing unreachable block (ram,0x000109588484) */

void FUN_1095876c8(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float *unaff_x19;
  float *unaff_x20;
  float *unaff_x21;
  float *pfVar18;
  float *unaff_x22;
  float *pfVar19;
  float *pfVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  ulong unaff_d8;
  ulong uVar30;
  undefined8 unaff_d9;
  float *pfStack_e0;
  float *pfStack_d8;
  float *pfStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  puVar2 = &stack0xfffffffffffffff0;
  uStack_c8 = CONCAT44(uStack_c8._4_4_,(int)param_4);
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar13 = param_1;
  pfVar14 = param_2;
  pfVar18 = unaff_x21;
  pfVar19 = param_3;
  uVar30 = unaff_d8;
  do {
    pfStack_d8 = pfVar14 + -0x18;
    pfStack_d0 = pfVar14 + -0xc;
    pfStack_e0 = pfVar14 + -0x24;
    pfVar10 = pfVar13;
LAB_109587724:
    pfVar13 = pfVar10;
    uVar23 = (long)pfVar14 - (long)pfVar13;
    uVar22 = ((long)uVar23 >> 4) * -0x5555555555555555;
    pfVar11 = pfVar14;
    if (uVar22 - 2 != 0 && 1 < (long)uVar22) {
      if (uVar22 == 3) {
        fVar25 = pfVar13[0x16];
        if (pfVar13[10] < fVar25) {
          if (fVar25 < pfVar14[-2]) goto LAB_109587e0c;
          param_2 = pfVar13 + 0xc;
          param_1 = pfVar13;
          FUN_10958853c();
          if (pfVar14[-2] <= pfVar13[0x16]) break;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) goto LAB_109588538;
          pfVar13 = pfVar13 + 0xc;
          pfVar10 = pfStack_d0;
          goto code_r0x00010958853c;
        }
        pfVar10 = pfStack_d0;
        if (pfVar14[-2] <= fVar25) break;
      }
      else {
        if (uVar22 == 4) {
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
            pfVar18 = pfVar13 + 0xc;
            pfVar14 = pfVar13 + 0x18;
            pfVar19 = pfStack_d0;
            goto code_r0x00010958861c;
          }
          goto LAB_109588538;
        }
        if (uVar22 != 5) goto LAB_10958776c;
        param_2 = pfVar13 + 0xc;
        param_3 = pfVar13 + 0x18;
        param_4 = pfVar13 + 0x24;
        param_1 = pfVar13;
        FUN_10958861c();
        if (pfVar14[-2] <= pfVar13[0x2e]) break;
        param_1 = pfVar13 + 0x24;
        param_2 = pfStack_d0;
        FUN_10958853c();
        if (pfVar13[0x2e] <= pfVar13[0x22]) break;
        param_1 = pfVar13 + 0x18;
        param_2 = pfVar13 + 0x24;
        FUN_10958853c();
        if (pfVar13[0x22] <= pfVar13[0x16]) break;
        pfVar10 = pfVar13 + 0x18;
      }
      param_2 = pfVar10;
      param_1 = pfVar13 + 0xc;
      FUN_10958853c();
      if (pfVar13[0x16] <= pfVar13[10]) break;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) goto LAB_109588538;
      pfVar10 = pfVar13 + 0xc;
      goto code_r0x00010958853c;
    }
    if (uVar22 < 2) break;
    if (uVar22 == 2) {
      if (pfVar14[-2] <= pfVar13[10]) break;
LAB_109587e0c:
      pfVar10 = pfStack_d0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) goto code_r0x00010958853c;
      goto LAB_109588538;
    }
LAB_10958776c:
    if ((long)uVar23 < 0x480) {
      pfVar10 = pfVar13 + 0xc;
      if ((uStack_c8 & 1) == 0) {
        if (pfVar13 != pfVar14 && pfVar10 != pfVar14) {
          pfVar18 = pfVar13 + 0x16;
          pfVar19 = pfVar13;
          do {
            pfVar13 = pfVar10;
            fVar25 = pfVar19[0x16];
            uVar30 = (ulong)(uint)fVar25;
            if (pfVar19[10] < fVar25) {
              uStack_b8 = *(undefined8 *)(pfVar13 + 2);
              uStack_c0 = *(undefined8 *)pfVar13;
              uVar24 = *(undefined8 *)(pfVar19 + 0x10);
              uStack_a0 = (undefined7)*(undefined8 *)(pfVar19 + 0x12);
              uVar16 = *(undefined8 *)((long)pfVar19 + 0x4f);
              uStack_99 = (undefined1)uVar16;
              uStack_98 = (undefined7)((ulong)uVar16 >> 8);
              uVar7 = *(undefined1 *)((long)pfVar19 + 0x57);
              pfVar19[0x12] = 0.0;
              pfVar19[0x13] = 0.0;
              pfVar19[0x14] = 0.0;
              pfVar19[0x15] = 0.0;
              pfVar19[0x10] = 0.0;
              pfVar19[0x11] = 0.0;
              pfVar19 = pfVar18;
              do {
                pfVar10 = pfVar19;
                *(undefined8 *)(pfVar10 + -8) = *(undefined8 *)(pfVar10 + -0x14);
                *(undefined8 *)(pfVar10 + -10) = *(undefined8 *)(pfVar10 + -0x16);
                *(undefined8 *)(pfVar10 + -4) = *(undefined8 *)(pfVar10 + -0x10);
                *(undefined8 *)(pfVar10 + -6) = *(undefined8 *)(pfVar10 + -0x12);
                *(undefined8 *)(pfVar10 + -2) = *(undefined8 *)(pfVar10 + -0xe);
                *(undefined1 *)((long)pfVar10 - 0x31) = 0;
                *(undefined1 *)(pfVar10 + -0x12) = 0;
                pfVar19 = pfVar10 + -0xc;
                *pfVar10 = *pfVar19;
              } while (pfVar10[-0x18] < fVar25);
              *(undefined8 *)(pfVar10 + -0x14) = uStack_b8;
              *(undefined8 *)(pfVar10 + -0x16) = uStack_c0;
              *(undefined8 *)(pfVar10 + -0x12) = uVar24;
              *(undefined8 *)((long)pfVar10 - 0x39) = uVar16;
              *(ulong *)(pfVar10 + -0x10) = CONCAT17(uStack_99,uStack_a0);
              *(undefined1 *)((long)pfVar10 - 0x31) = uVar7;
              *pfVar19 = fVar25;
            }
            pfVar18 = pfVar18 + 0xc;
            pfVar10 = pfVar13 + 0xc;
            pfVar19 = pfVar13;
          } while (pfVar13 + 0xc != pfVar14);
        }
        break;
      }
      if (pfVar13 == pfVar14 || pfVar10 == pfVar14) break;
      pfVar18 = (float *)0x0;
      pfVar12 = pfVar13;
      goto LAB_109587ec0;
    }
    if (pfVar19 == (float *)0x0) {
      if (pfVar13 == pfVar14) break;
      pfVar18 = (float *)(uVar22 - 2 >> 1);
      pfVar14 = pfVar18;
      goto LAB_109587fc8;
    }
    pfVar18 = pfVar13 + (uVar22 >> 1) * 0xc;
    fVar25 = pfVar14[-2];
    if (uVar23 < 0x1801) {
      fVar28 = pfVar13[10];
      if (fVar28 <= pfVar18[10]) {
        if ((fVar28 < fVar25) &&
           (param_1 = pfVar13, param_2 = pfStack_d0, FUN_10958853c(), pfVar10 = pfVar13,
           pfVar18[10] < pfVar13[10])) goto LAB_1095878b8;
      }
      else {
        pfVar10 = pfStack_d0;
        if ((fVar28 < fVar25) ||
           (param_2 = pfVar13, FUN_10958853c(), param_1 = pfVar18, pfVar18 = pfVar13,
           pfVar10 = pfStack_d0, pfVar13[10] < pfVar14[-2])) {
LAB_1095878b8:
          param_2 = pfVar10;
          param_1 = pfVar18;
          FUN_10958853c();
        }
      }
    }
    else {
      fVar28 = pfVar18[10];
      pfVar10 = pfVar13;
      if (fVar28 <= pfVar13[10]) {
        if ((fVar28 < fVar25) &&
           (param_1 = pfVar18, param_2 = pfStack_d0, FUN_10958853c(), pfVar11 = pfVar18,
           pfVar13[10] < pfVar18[10])) goto LAB_109587840;
      }
      else {
        pfVar11 = pfStack_d0;
        if ((fVar28 < fVar25) ||
           (param_1 = pfVar13, param_2 = pfVar18, FUN_10958853c(), pfVar10 = pfVar18,
           pfVar11 = pfStack_d0, pfVar18[10] < pfVar14[-2])) {
LAB_109587840:
          FUN_10958853c();
          param_1 = pfVar10;
          param_2 = pfVar11;
        }
      }
      pfVar10 = pfVar18 + -0xc;
      fVar25 = pfVar18[-2];
      if (fVar25 <= pfVar13[0x16]) {
        if ((fVar25 < pfVar14[-0xe]) &&
           (param_1 = pfVar10, param_2 = pfStack_d8, FUN_10958853c(), pfVar13[0x16] < pfVar18[-2]))
        {
          pfVar11 = pfVar13 + 0xc;
          pfVar12 = pfVar10;
          goto LAB_1095878ec;
        }
      }
      else {
        param_1 = pfVar13 + 0xc;
        pfVar11 = param_1;
        pfVar12 = pfStack_d8;
        if ((fVar25 < pfVar14[-0xe]) ||
           (param_2 = pfVar10, FUN_10958853c(), pfVar11 = pfVar10, pfVar12 = pfStack_d8,
           pfVar18[-2] < pfVar14[-0xe])) {
LAB_1095878ec:
          FUN_10958853c();
          param_1 = pfVar11;
          param_2 = pfVar12;
        }
      }
      fVar25 = pfVar18[0x16];
      if (fVar25 <= pfVar13[0x22]) {
        if (fVar25 < pfVar14[-0x1a]) {
          param_1 = pfVar18 + 0xc;
          param_2 = pfStack_e0;
          FUN_10958853c();
          if (pfVar13[0x22] < pfVar18[0x16]) {
            param_1 = pfVar13 + 0x18;
            param_2 = pfVar18 + 0xc;
            goto LAB_109587960;
          }
        }
      }
      else {
        param_1 = pfVar13 + 0x18;
        param_2 = pfStack_e0;
        if (pfVar14[-0x1a] <= fVar25) {
          param_2 = pfVar18 + 0xc;
          FUN_10958853c();
          if (pfVar14[-0x1a] <= pfVar18[0x16]) goto LAB_109587964;
          param_1 = pfVar18 + 0xc;
          param_2 = pfStack_e0;
        }
LAB_109587960:
        FUN_10958853c();
      }
LAB_109587964:
      fVar25 = pfVar18[10];
      if (fVar25 <= pfVar18[-2]) {
        if (fVar25 < pfVar18[0x16]) {
          param_2 = pfVar18 + 0xc;
          param_1 = pfVar18;
          FUN_10958853c();
          pfVar11 = pfVar18;
          if (pfVar18[-2] < pfVar18[10]) goto LAB_1095879e0;
        }
      }
      else {
        if (pfVar18[0x16] <= fVar25) {
          param_2 = pfVar18;
          FUN_10958853c();
          param_1 = pfVar10;
          if (pfVar18[0x16] <= pfVar18[10]) goto LAB_1095879e4;
          pfVar10 = pfVar18;
          pfVar11 = pfVar18 + 0xc;
        }
        else {
          pfVar11 = pfVar18 + 0xc;
        }
LAB_1095879e0:
        FUN_10958853c();
        param_1 = pfVar10;
        param_2 = pfVar11;
      }
LAB_1095879e4:
      uVar27 = *(undefined8 *)(pfVar13 + 2);
      uVar26 = *(undefined8 *)pfVar13;
      uVar24 = *(undefined8 *)(pfVar13 + 4);
      uStack_a0 = (undefined7)*(undefined8 *)(pfVar13 + 6);
      uVar16 = *(undefined8 *)((long)pfVar13 + 0x1f);
      uStack_99 = (undefined1)uVar16;
      uVar7 = *(undefined1 *)((long)pfVar13 + 0x27);
      pfVar13[6] = 0.0;
      pfVar13[7] = 0.0;
      pfVar13[8] = 0.0;
      pfVar13[9] = 0.0;
      pfVar13[4] = 0.0;
      pfVar13[5] = 0.0;
      fVar25 = pfVar13[10];
      uVar17 = *(undefined8 *)pfVar18;
      *(undefined8 *)(pfVar13 + 2) = *(undefined8 *)(pfVar18 + 2);
      *(undefined8 *)pfVar13 = uVar17;
      uVar17 = *(undefined8 *)(pfVar18 + 8);
      uVar29 = *(undefined8 *)(pfVar18 + 4);
      *(undefined8 *)(pfVar13 + 6) = *(undefined8 *)(pfVar18 + 6);
      *(undefined8 *)(pfVar13 + 4) = uVar29;
      *(undefined8 *)(pfVar13 + 8) = uVar17;
      *(undefined1 *)((long)pfVar18 + 0x27) = 0;
      *(undefined1 *)(pfVar18 + 4) = 0;
      pfVar13[10] = pfVar18[10];
      *(undefined8 *)(pfVar18 + 2) = uVar27;
      *(undefined8 *)pfVar18 = uVar26;
      *(undefined8 *)(pfVar18 + 4) = uVar24;
      *(undefined8 *)((long)pfVar18 + 0x1f) = uVar16;
      *(ulong *)(pfVar18 + 6) = CONCAT17(uStack_99,uStack_a0);
      *(undefined1 *)((long)pfVar18 + 0x27) = uVar7;
      pfVar18[10] = fVar25;
    }
    pfVar19 = (float *)((long)pfVar19 - 1);
    if ((uStack_c8 & 1) == 0) {
      fVar25 = pfVar13[10];
      uVar30 = (ulong)(uint)fVar25;
      if (pfVar13[-2] <= fVar25) {
        uStack_b8 = *(undefined8 *)(pfVar13 + 2);
        uStack_c0 = *(undefined8 *)pfVar13;
        pfVar11 = pfVar13 + 4;
        uVar22 = *(ulong *)pfVar11;
        uStack_a0 = (undefined7)*(undefined8 *)(pfVar13 + 6);
        uStack_99 = (undefined1)*(undefined8 *)((long)pfVar13 + 0x1f);
        uStack_98 = (undefined7)((ulong)*(undefined8 *)((long)pfVar13 + 0x1f) >> 8);
        uVar7 = *(undefined1 *)((long)pfVar13 + 0x27);
        pfVar11[0] = 0.0;
        pfVar11[1] = 0.0;
        pfVar13[6] = 0.0;
        pfVar13[7] = 0.0;
        pfVar13[8] = 0.0;
        pfVar13[9] = 0.0;
        pfVar18 = pfVar13;
        if (fVar25 <= pfVar14[-2]) {
          do {
            pfVar10 = pfVar18 + 0xc;
            if (pfVar14 <= pfVar10) break;
            pfVar12 = pfVar18 + 0x16;
            pfVar18 = pfVar10;
          } while (fVar25 <= *pfVar12);
        }
        else {
          do {
            pfVar10 = pfVar18 + 0xc;
            pfVar12 = pfVar18 + 0x16;
            pfVar18 = pfVar10;
          } while (fVar25 <= *pfVar12);
        }
        pfVar18 = pfVar14;
        pfVar12 = pfVar14;
        if (pfVar10 < pfVar14) {
          do {
            pfVar12 = pfVar18 + -0xc;
            pfVar20 = pfVar18 + -2;
            pfVar18 = pfVar12;
          } while (*pfVar20 < fVar25);
        }
        while (pfVar10 < pfVar12) {
          param_1 = pfVar10;
          param_2 = pfVar12;
          FUN_10958853c();
          do {
            pfVar18 = pfVar10 + 0x16;
            pfVar10 = pfVar10 + 0xc;
          } while (fVar25 <= *pfVar18);
          do {
            pfVar18 = pfVar12 + -2;
            pfVar12 = pfVar12 + -0xc;
          } while (*pfVar18 < fVar25);
        }
        pfVar18 = pfVar10 + -0xc;
        if (pfVar18 != pfVar13) {
          uVar24 = *(undefined8 *)pfVar18;
          *(undefined8 *)(pfVar13 + 2) = *(undefined8 *)(pfVar10 + -10);
          *(undefined8 *)pfVar13 = uVar24;
          if (*(char *)((long)pfVar13 + 0x27) < '\0') {
            param_1 = *(float **)pfVar11;
            __ZdlPv();
          }
          uVar24 = *(undefined8 *)(pfVar10 + -6);
          uVar23 = *(ulong *)(pfVar10 + -8);
          *(undefined8 *)(pfVar13 + 8) = *(undefined8 *)(pfVar10 + -4);
          *(undefined8 *)(pfVar13 + 6) = uVar24;
          *(ulong *)pfVar11 = uVar23;
          *(undefined1 *)((long)pfVar10 + -9) = 0;
          *(undefined1 *)(pfVar10 + -8) = 0;
          pfVar13[10] = pfVar10[-2];
        }
        *(undefined8 *)(pfVar10 + -10) = uStack_b8;
        *(undefined8 *)pfVar18 = uStack_c0;
        uStack_c8 = uStack_c8 & 0xffffffff00000000;
        *(ulong *)(pfVar10 + -8) = uVar22;
        *(ulong *)((long)pfVar10 + -0x11) = CONCAT71(uStack_98,uStack_99);
        *(ulong *)(pfVar10 + -6) = CONCAT17(uStack_99,uStack_a0);
        *(undefined1 *)((long)pfVar10 + -9) = uVar7;
        pfVar10[-2] = fVar25;
        goto LAB_109587724;
      }
    }
    else {
      uVar30 = (ulong)(uint)pfVar13[10];
    }
    lVar15 = 0;
    uStack_b8 = *(undefined8 *)(pfVar13 + 2);
    uStack_c0 = *(undefined8 *)pfVar13;
    pfVar12 = pfVar13 + 4;
    uVar24 = *(undefined8 *)pfVar12;
    uStack_a0 = (undefined7)*(undefined8 *)(pfVar13 + 6);
    uStack_99 = (undefined1)*(undefined8 *)((long)pfVar13 + 0x1f);
    uStack_98 = (undefined7)((ulong)*(undefined8 *)((long)pfVar13 + 0x1f) >> 8);
    uVar7 = *(undefined1 *)((long)pfVar13 + 0x27);
    pfVar12[0] = 0.0;
    pfVar12[1] = 0.0;
    pfVar13[6] = 0.0;
    pfVar13[7] = 0.0;
    pfVar13[8] = 0.0;
    pfVar13[9] = 0.0;
    do {
      lVar9 = lVar15 + 0x58;
      lVar15 = lVar15 + 0x30;
      fVar25 = (float)uVar30;
    } while (fVar25 < *(float *)((long)pfVar13 + lVar9));
    pfVar18 = (float *)((long)pfVar13 + lVar15);
    pfVar10 = pfVar14;
    if (lVar15 == 0x30) {
      do {
        pfVar20 = pfVar10;
        if (pfVar10 <= pfVar18) break;
        pfVar20 = pfVar10 + -0xc;
        pfVar11 = pfVar10 + -2;
        pfVar10 = pfVar20;
      } while (*pfVar11 <= fVar25);
    }
    else {
      do {
        pfVar20 = pfVar10 + -0xc;
        pfVar11 = pfVar10 + -2;
        pfVar10 = pfVar20;
      } while (*pfVar11 <= fVar25);
    }
    pfVar10 = pfVar18;
    pfVar11 = pfVar20;
    if (pfVar18 < pfVar20) {
      do {
        FUN_10958853c(pfVar10,pfVar11);
        do {
          pfVar1 = pfVar10 + 0x16;
          pfVar10 = pfVar10 + 0xc;
        } while (fVar25 < *pfVar1);
        do {
          pfVar1 = pfVar11 + -2;
          pfVar11 = pfVar11 + -0xc;
        } while (*pfVar1 <= fVar25);
      } while (pfVar10 < pfVar11);
    }
    pfVar11 = pfVar10 + -0xc;
    if (pfVar11 != pfVar13) {
      uVar16 = *(undefined8 *)pfVar11;
      *(undefined8 *)(pfVar13 + 2) = *(undefined8 *)(pfVar10 + -10);
      *(undefined8 *)pfVar13 = uVar16;
      if (*(char *)((long)pfVar13 + 0x27) < '\0') {
        __ZdlPv(*(undefined8 *)pfVar12);
      }
      uVar17 = *(undefined8 *)(pfVar10 + -6);
      uVar16 = *(undefined8 *)(pfVar10 + -8);
      *(undefined8 *)(pfVar13 + 8) = *(undefined8 *)(pfVar10 + -4);
      *(undefined8 *)(pfVar13 + 6) = uVar17;
      *(undefined8 *)pfVar12 = uVar16;
      *(undefined1 *)((long)pfVar10 - 9) = 0;
      *(undefined1 *)(pfVar10 + -8) = 0;
      pfVar13[10] = pfVar10[-2];
    }
    *(undefined8 *)(pfVar10 + -10) = uStack_b8;
    *(undefined8 *)pfVar11 = uStack_c0;
    *(undefined8 *)(pfVar10 + -8) = uVar24;
    *(ulong *)((long)pfVar10 - 0x11) = CONCAT71(uStack_98,uStack_99);
    *(ulong *)(pfVar10 + -6) = CONCAT17(uStack_99,uStack_a0);
    *(undefined1 *)((long)pfVar10 - 9) = uVar7;
    pfVar10[-2] = fVar25;
    if (pfVar18 < pfVar20) goto LAB_109587bf8;
    pfVar12 = pfVar13;
    FUN_109588720(pfVar13,pfVar11);
    param_1 = pfVar10;
    param_2 = pfVar14;
    FUN_109588720();
    if ((int)param_1 == 0) goto code_r0x000109587bf4;
    pfVar14 = pfVar11;
  } while (((ulong)pfVar12 & 1) == 0);
  goto LAB_1095884fc;
LAB_109587ec0:
  do {
    pfVar19 = pfVar10;
    fVar25 = pfVar12[0x16];
    uVar30 = (ulong)(uint)fVar25;
    if (pfVar12[10] < fVar25) {
      uStack_b8 = *(undefined8 *)(pfVar19 + 2);
      uStack_c0 = *(undefined8 *)pfVar19;
      uVar24 = *(undefined8 *)(pfVar12 + 0x10);
      uStack_a0 = (undefined7)*(undefined8 *)(pfVar12 + 0x12);
      uStack_99 = (undefined1)*(undefined8 *)((long)pfVar12 + 0x4f);
      uStack_98 = (undefined7)((ulong)*(undefined8 *)((long)pfVar12 + 0x4f) >> 8);
      uVar7 = *(undefined1 *)((long)pfVar12 + 0x57);
      pfVar12[0x12] = 0.0;
      pfVar12[0x13] = 0.0;
      pfVar12[0x14] = 0.0;
      pfVar12[0x15] = 0.0;
      pfVar12[0x10] = 0.0;
      pfVar12[0x11] = 0.0;
      pfVar10 = pfVar18;
      do {
        pfVar12 = pfVar10;
        puVar4 = (undefined8 *)((long)pfVar13 + (long)pfVar12);
        puVar4[7] = puVar4[1];
        puVar4[6] = *puVar4;
        if (*(char *)((long)puVar4 + 0x57) < '\0') {
          param_1 = (float *)puVar4[8];
          __ZdlPv();
        }
        puVar4[9] = puVar4[3];
        puVar4[8] = puVar4[2];
        puVar4[10] = puVar4[4];
        *(undefined1 *)((long)puVar4 + 0x27) = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        *(undefined4 *)(puVar4 + 0xb) = *(undefined4 *)(puVar4 + 5);
        pfVar10 = pfVar13;
        if (pfVar12 == (float *)0x0) goto LAB_109587f64;
        pfVar10 = pfVar12 + -0xc;
      } while (*(float *)((long)pfVar13 + (long)pfVar12 + -8) < fVar25);
      pfVar10 = (float *)((long)pfVar13 + (long)(pfVar12 + -0xc) + 0x30);
LAB_109587f64:
      *(undefined8 *)(pfVar10 + 2) = uStack_b8;
      *(undefined8 *)pfVar10 = uStack_c0;
      if (*(char *)((long)pfVar10 + 0x27) < '\0') {
        param_1 = *(float **)((long)pfVar13 + (long)pfVar12 + 0x10);
        __ZdlPv();
      }
      *(undefined8 *)((long)pfVar13 + (long)pfVar12 + 0x10) = uVar24;
      *(ulong *)(pfVar10 + 6) = CONCAT17(uStack_99,uStack_a0);
      *(ulong *)((long)pfVar10 + 0x1f) = CONCAT71(uStack_98,uStack_99);
      *(undefined1 *)((long)pfVar10 + 0x27) = uVar7;
      pfVar10[10] = fVar25;
    }
    pfVar18 = pfVar18 + 0xc;
    pfVar10 = pfVar19 + 0xc;
    pfVar12 = pfVar19;
  } while (pfVar19 + 0xc != pfVar14);
  goto LAB_1095884fc;
LAB_109587fc8:
  do {
    if ((long)pfVar14 <= (long)pfVar18) {
      uVar21 = (long)pfVar14 << 1 | 1;
      pfVar19 = pfVar13 + uVar21 * 0xc;
      uVar30 = (long)pfVar14 * 2 + 2;
      if (((long)uVar30 < (long)uVar22) && (pfVar19[0x16] < pfVar19[10])) {
        pfVar19 = pfVar19 + 0xc;
        uVar21 = uVar30;
      }
      pfVar10 = pfVar13 + (long)pfVar14 * 0xc;
      fVar25 = pfVar10[10];
      uVar30 = (ulong)(uint)fVar25;
      if (pfVar19[10] <= fVar25) {
        uStack_b8 = *(undefined8 *)(pfVar10 + 2);
        uStack_c0 = *(undefined8 *)pfVar10;
        uStack_c8 = *(ulong *)(pfVar10 + 4);
        uStack_98 = (undefined7)((ulong)*(undefined8 *)((long)pfVar10 + 0x1f) >> 8);
        uStack_a0 = (undefined7)*(undefined8 *)(pfVar10 + 6);
        uStack_99 = (undefined1)((ulong)*(undefined8 *)(pfVar10 + 6) >> 0x38);
        pfStack_d0 = (float *)CONCAT44(pfStack_d0._4_4_,(uint)*(byte *)((long)pfVar10 + 0x27));
        pfVar10[4] = 0.0;
        pfVar10[5] = 0.0;
        pfVar10[6] = 0.0;
        pfVar10[7] = 0.0;
        pfVar10[8] = 0.0;
        pfVar10[9] = 0.0;
        do {
          pfVar12 = pfVar19;
          uVar24 = *(undefined8 *)pfVar12;
          *(undefined8 *)(pfVar10 + 2) = *(undefined8 *)(pfVar12 + 2);
          *(undefined8 *)pfVar10 = uVar24;
          if (*(char *)((long)pfVar10 + 0x27) < '\0') {
            param_1 = *(float **)(pfVar10 + 4);
            __ZdlPv();
          }
          uVar16 = *(undefined8 *)(pfVar12 + 6);
          uVar24 = *(undefined8 *)(pfVar12 + 4);
          *(undefined8 *)(pfVar10 + 8) = *(undefined8 *)(pfVar12 + 8);
          *(undefined8 *)(pfVar10 + 6) = uVar16;
          *(undefined8 *)(pfVar10 + 4) = uVar24;
          *(undefined1 *)((long)pfVar12 + 0x27) = 0;
          *(undefined1 *)(pfVar12 + 4) = 0;
          pfVar10[10] = pfVar12[10];
          if ((long)pfVar18 < (long)uVar21) break;
          uVar5 = uVar21 << 1 | 1;
          pfVar19 = pfVar13 + uVar5 * 0xc;
          uVar3 = uVar21 * 2 + 2;
          uVar21 = uVar5;
          if (((long)uVar3 < (long)uVar22) && (pfVar19[0x16] < pfVar19[10])) {
            pfVar19 = pfVar19 + 0xc;
            uVar21 = uVar3;
          }
          pfVar10 = pfVar12;
        } while (pfVar19[10] <= fVar25);
        *(undefined8 *)(pfVar12 + 2) = uStack_b8;
        *(undefined8 *)pfVar12 = uStack_c0;
        if (*(char *)((long)pfVar12 + 0x27) < '\0') {
          param_1 = *(float **)(pfVar12 + 4);
          __ZdlPv();
        }
        *(ulong *)(pfVar12 + 4) = uStack_c8;
        *(ulong *)(pfVar12 + 6) = CONCAT17(uStack_99,uStack_a0);
        *(ulong *)((long)pfVar12 + 0x1f) = CONCAT71(uStack_98,uStack_99);
        *(char *)((long)pfVar12 + 0x27) = (char)pfStack_d0;
        pfVar12[10] = fVar25;
      }
    }
    bVar6 = pfVar14 != (float *)0x0;
    pfVar14 = (float *)((long)pfVar14 + -1);
  } while (bVar6);
  pfVar14 = (float *)((uVar23 >> 4) * -0x5555555555555555);
  do {
    if (1 < (long)pfVar14) {
      uStack_98 = (undefined7)*(undefined8 *)(pfVar13 + 2);
      uStack_91 = (undefined1)((ulong)*(undefined8 *)(pfVar13 + 2) >> 0x38);
      uStack_a0 = (undefined7)*(undefined8 *)pfVar13;
      uStack_99 = (undefined1)((ulong)*(undefined8 *)pfVar13 >> 0x38);
      uVar24 = *(undefined8 *)(pfVar13 + 4);
      uStack_b0 = (undefined7)*(undefined8 *)(pfVar13 + 6);
      uStack_a9 = (undefined1)*(undefined8 *)((long)pfVar13 + 0x1f);
      uStack_a8 = (undefined7)((ulong)*(undefined8 *)((long)pfVar13 + 0x1f) >> 8);
      uVar7 = *(undefined1 *)((long)pfVar13 + 0x27);
      pfVar13[6] = 0.0;
      pfVar13[7] = 0.0;
      pfVar13[8] = 0.0;
      pfVar13[9] = 0.0;
      pfVar13[4] = 0.0;
      pfVar13[5] = 0.0;
      fVar25 = pfVar13[10];
      uVar30 = (ulong)(uint)fVar25;
      pfVar19 = pfVar13;
      uVar22 = 0;
      do {
        uVar21 = uVar22 << 1 | 1;
        uVar23 = uVar22 * 2 + 2;
        pfVar18 = pfVar19 + uVar22 * 0xc + 0xc;
        if (((long)uVar23 < (long)pfVar14) &&
           (pfVar19[uVar22 * 0xc + 0x22] < pfVar19[uVar22 * 0xc + 0x16])) {
          pfVar18 = pfVar19 + uVar22 * 0xc + 0x18;
          uVar21 = uVar23;
        }
        uVar16 = *(undefined8 *)pfVar18;
        *(undefined8 *)(pfVar19 + 2) = *(undefined8 *)(pfVar18 + 2);
        *(undefined8 *)pfVar19 = uVar16;
        if (*(char *)((long)pfVar19 + 0x27) < '\0') {
          param_1 = *(float **)(pfVar19 + 4);
          __ZdlPv();
        }
        uVar17 = *(undefined8 *)(pfVar18 + 6);
        uVar16 = *(undefined8 *)(pfVar18 + 4);
        *(undefined8 *)(pfVar19 + 8) = *(undefined8 *)(pfVar18 + 8);
        *(undefined8 *)(pfVar19 + 6) = uVar17;
        *(undefined8 *)(pfVar19 + 4) = uVar16;
        *(undefined1 *)((long)pfVar18 + 0x27) = 0;
        *(undefined1 *)(pfVar18 + 4) = 0;
        pfVar19[10] = pfVar18[10];
        pfVar19 = pfVar18;
        uVar22 = uVar21;
      } while ((long)uVar21 <= (long)((long)pfVar14 - 2U >> 1));
      pfVar19 = pfVar11 + -0xc;
      if (pfVar18 == pfVar19) {
        *(ulong *)(pfVar18 + 2) = CONCAT17(uStack_91,uStack_98);
        *(ulong *)pfVar18 = CONCAT17(uStack_99,uStack_a0);
        if (*(char *)((long)pfVar18 + 0x27) < '\0') {
          param_1 = *(float **)(pfVar18 + 4);
          __ZdlPv();
        }
        *(undefined8 *)(pfVar18 + 4) = uVar24;
        *(ulong *)(pfVar18 + 6) = CONCAT17(uStack_a9,uStack_b0);
        *(ulong *)((long)pfVar18 + 0x1f) = CONCAT71(uStack_a8,uStack_a9);
        *(undefined1 *)((long)pfVar18 + 0x27) = uVar7;
        pfVar18[10] = fVar25;
      }
      else {
        uVar16 = *(undefined8 *)pfVar19;
        *(undefined8 *)(pfVar18 + 2) = *(undefined8 *)(pfVar11 + -10);
        *(undefined8 *)pfVar18 = uVar16;
        if (*(char *)((long)pfVar18 + 0x27) < '\0') {
          param_1 = *(float **)(pfVar18 + 4);
          __ZdlPv();
        }
        uVar17 = *(undefined8 *)(pfVar11 + -6);
        uVar16 = *(undefined8 *)(pfVar11 + -8);
        *(undefined8 *)(pfVar18 + 8) = *(undefined8 *)(pfVar11 + -4);
        *(undefined8 *)(pfVar18 + 6) = uVar17;
        *(undefined8 *)(pfVar18 + 4) = uVar16;
        *(undefined1 *)((long)pfVar11 - 9) = 0;
        *(undefined1 *)(pfVar11 + -8) = 0;
        pfVar18[10] = pfVar11[-2];
        *(ulong *)(pfVar11 + -10) = CONCAT17(uStack_91,uStack_98);
        *(ulong *)pfVar19 = CONCAT17(uStack_99,uStack_a0);
        *(undefined8 *)(pfVar11 + -8) = uVar24;
        *(ulong *)((long)pfVar11 - 0x11) = CONCAT71(uStack_a8,uStack_a9);
        *(ulong *)(pfVar11 + -6) = CONCAT17(uStack_a9,uStack_b0);
        *(undefined1 *)((long)pfVar11 - 9) = uVar7;
        pfVar11[-2] = fVar25;
        uVar22 = (long)pfVar18 + (0x30 - (long)pfVar13);
        if (0x30 < (long)uVar22) {
          uVar22 = (uVar22 >> 4) * -0x5555555555555555 - 2 >> 1;
          fVar25 = pfVar18[10];
          uVar30 = (ulong)(uint)fVar25;
          if (fVar25 < (pfVar13 + uVar22 * 0xc)[10]) {
            uStack_b8 = *(undefined8 *)(pfVar18 + 2);
            uStack_c0 = *(undefined8 *)pfVar18;
            uVar24 = *(undefined8 *)(pfVar18 + 4);
            uStack_88 = (undefined7)*(undefined8 *)(pfVar18 + 6);
            uStack_81 = (undefined1)*(undefined8 *)((long)pfVar18 + 0x1f);
            uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)pfVar18 + 0x1f) >> 8);
            uVar7 = *(undefined1 *)((long)pfVar18 + 0x27);
            pfVar18[6] = 0.0;
            pfVar18[7] = 0.0;
            pfVar18[8] = 0.0;
            pfVar18[9] = 0.0;
            pfVar18[4] = 0.0;
            pfVar18[5] = 0.0;
            pfVar19 = pfVar13 + uVar22 * 0xc;
            do {
              pfVar10 = pfVar19;
              uVar16 = *(undefined8 *)pfVar10;
              *(undefined8 *)(pfVar18 + 2) = *(undefined8 *)(pfVar10 + 2);
              *(undefined8 *)pfVar18 = uVar16;
              if (*(char *)((long)pfVar18 + 0x27) < '\0') {
                param_1 = *(float **)(pfVar18 + 4);
                __ZdlPv();
              }
              uVar17 = *(undefined8 *)(pfVar10 + 6);
              uVar16 = *(undefined8 *)(pfVar10 + 4);
              *(undefined8 *)(pfVar18 + 8) = *(undefined8 *)(pfVar10 + 8);
              *(undefined8 *)(pfVar18 + 6) = uVar17;
              *(undefined8 *)(pfVar18 + 4) = uVar16;
              *(undefined1 *)((long)pfVar10 + 0x27) = 0;
              *(undefined1 *)(pfVar10 + 4) = 0;
              pfVar18[10] = pfVar10[10];
              if (uVar22 == 0) break;
              uVar22 = uVar22 - 1 >> 1;
              pfVar19 = pfVar13 + uVar22 * 0xc;
              pfVar18 = pfVar10;
            } while (fVar25 < (pfVar13 + uVar22 * 0xc)[10]);
            *(undefined8 *)(pfVar10 + 2) = uStack_b8;
            *(undefined8 *)pfVar10 = uStack_c0;
            if (*(char *)((long)pfVar10 + 0x27) < '\0') {
              param_1 = *(float **)(pfVar10 + 4);
              __ZdlPv();
            }
            *(undefined8 *)(pfVar10 + 4) = uVar24;
            *(ulong *)(pfVar10 + 6) = CONCAT17(uStack_81,uStack_88);
            *(ulong *)((long)pfVar10 + 0x1f) = CONCAT71(uStack_80,uStack_81);
            *(undefined1 *)((long)pfVar10 + 0x27) = uVar7;
            pfVar10[10] = fVar25;
          }
        }
      }
    }
    pfVar11 = pfVar11 + -0xc;
    pfVar19 = (float *)((long)pfVar14 - 1);
    bVar6 = (float *)0x2 < pfVar14;
    pfVar14 = pfVar19;
  } while (bVar6);
LAB_1095884fc:
  pfVar14 = pfVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
LAB_109588538:
  unaff_d8 = uVar30;
  unaff_x22 = pfVar19;
  unaff_x21 = pfVar18;
  unaff_x20 = pfVar14;
  unaff_x19 = pfVar13;
  pfVar13 = param_1;
  unaff_x30 = FUN_10958853c;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)&pfStack_e0;
  pfVar10 = param_2;
  unaff_x29 = puVar2;
code_r0x00010958853c:
  do {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(float **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(float **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(float **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(float **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar24 = *(undefined8 *)pfVar13;
    *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)(pfVar13 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar24;
    unaff_x20 = *(float **)(pfVar13 + 4);
    *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(pfVar13 + 6);
    *(undefined8 *)((long)register0x00000008 + -0x51) = *(undefined8 *)((long)pfVar13 + 0x1f);
    bVar8 = *(byte *)((long)pfVar13 + 0x27);
    unaff_x21 = (float *)(ulong)bVar8;
    pfVar13[6] = 0.0;
    pfVar13[7] = 0.0;
    pfVar13[8] = 0.0;
    pfVar13[9] = 0.0;
    pfVar13[4] = 0.0;
    pfVar13[5] = 0.0;
    fVar25 = pfVar13[10];
    unaff_d8 = (ulong)(uint)fVar25;
    uVar24 = *(undefined8 *)pfVar10;
    *(undefined8 *)(pfVar13 + 2) = *(undefined8 *)(pfVar10 + 2);
    *(undefined8 *)pfVar13 = uVar24;
    uVar24 = *(undefined8 *)(pfVar10 + 8);
    uVar16 = *(undefined8 *)(pfVar10 + 4);
    *(undefined8 *)(pfVar13 + 6) = *(undefined8 *)(pfVar10 + 6);
    *(undefined8 *)(pfVar13 + 4) = uVar16;
    *(undefined8 *)(pfVar13 + 8) = uVar24;
    *(undefined1 *)((long)pfVar10 + 0x27) = 0;
    *(undefined1 *)(pfVar10 + 4) = 0;
    pfVar13[10] = pfVar10[10];
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)(pfVar10 + 2) = *(undefined8 *)((long)register0x00000008 + -0x68);
    *(undefined8 *)pfVar10 = uVar24;
    pfVar18 = pfVar10;
    pfVar14 = param_3;
    if (*(char *)((long)pfVar10 + 0x27) < '\0') {
      pfVar13 = *(float **)(pfVar10 + 4);
      __ZdlPv();
      pfVar14 = param_3;
    }
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x58);
    *(float **)(pfVar10 + 4) = unaff_x20;
    *(undefined8 *)(pfVar10 + 6) = uVar24;
    *(undefined8 *)((long)pfVar10 + 0x1f) = *(undefined8 *)((long)register0x00000008 + -0x51);
    *(byte *)((long)pfVar10 + 0x27) = bVar8;
    pfVar10[10] = fVar25;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
      return;
    }
    unaff_x30 = FUN_10958861c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    pfVar19 = param_4;
    unaff_x19 = pfVar10;
code_r0x00010958861c:
    *(float **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(float **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(float **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(float **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    fVar25 = pfVar18[10];
    pfVar10 = pfVar13;
    param_3 = pfVar14;
    param_4 = pfVar19;
    if (fVar25 <= pfVar13[10]) {
      if ((fVar25 < pfVar14[10]) &&
         (FUN_10958853c(pfVar18,pfVar14), pfVar11 = pfVar18, pfVar13[10] < pfVar18[10]))
      goto LAB_1095886ac;
    }
    else {
      pfVar11 = pfVar14;
      if ((fVar25 < pfVar14[10]) ||
         (FUN_10958853c(pfVar13,pfVar18), pfVar10 = pfVar18, pfVar18[10] < pfVar14[10])) {
LAB_1095886ac:
        FUN_10958853c(pfVar10,pfVar11);
      }
    }
    if (((pfVar19[10] <= pfVar14[10]) ||
        (FUN_10958853c(pfVar14,pfVar19), pfVar14[10] <= pfVar18[10])) ||
       (FUN_10958853c(pfVar18,pfVar14), pfVar18[10] <= pfVar13[10])) {
      return;
    }
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    unaff_x30 = *(code **)((long)register0x00000008 + -8);
    unaff_x20 = *(float **)((long)register0x00000008 + -0x20);
    unaff_x19 = *(float **)((long)register0x00000008 + -0x18);
    unaff_x22 = *(float **)((long)register0x00000008 + -0x30);
    unaff_x21 = *(float **)((long)register0x00000008 + -0x28);
    pfVar10 = pfVar18;
  } while( true );
code_r0x000109587bf4:
  if (((ulong)pfVar12 & 1) == 0) {
LAB_109587bf8:
    param_4 = (float *)(ulong)((uint)uStack_c8 & 1);
    param_3 = pfVar19;
    FUN_1095876c8();
    uStack_c8 = uStack_c8 & 0xffffffff00000000;
    param_1 = pfVar13;
    param_2 = pfVar11;
  }
  goto LAB_109587724;
}



/* Entry: 10958853c; end: 10958861b;  */

void FUN_10958853c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong unaff_d8;
  undefined8 unaff_d9;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar9 = *param_1;
    *(undefined8 *)((long)register0x00000008 + -0x68) = param_1[1];
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar9;
    uVar9 = param_1[2];
    *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[3];
    *(undefined8 *)((long)register0x00000008 + -0x51) = *(undefined8 *)((long)param_1 + 0x1f);
    bVar1 = *(byte *)((long)param_1 + 0x27);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[2] = 0;
    uVar11 = *(uint *)(param_1 + 5);
    unaff_d8 = (ulong)uVar11;
    uVar7 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar7;
    uVar7 = param_2[4];
    uVar10 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar10;
    param_1[4] = uVar7;
    *(undefined1 *)((long)param_2 + 0x27) = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar7 = *(undefined8 *)((long)register0x00000008 + -0x70);
    param_2[1] = *(undefined8 *)((long)register0x00000008 + -0x68);
    *param_2 = uVar7;
    puVar3 = param_2;
    puVar5 = param_3;
    lVar6 = param_4;
    if (*(char *)((long)param_2 + 0x27) < '\0') {
      param_1 = (undefined8 *)param_2[2];
      __ZdlPv();
      puVar5 = param_3;
      lVar6 = param_4;
    }
    uVar7 = *(undefined8 *)((long)register0x00000008 + -0x58);
    param_2[2] = uVar9;
    param_2[3] = uVar7;
    *(undefined8 *)((long)param_2 + 0x1f) = *(undefined8 *)((long)register0x00000008 + -0x51);
    *(byte *)((long)param_2 + 0x27) = bVar1;
    *(uint *)(param_2 + 5) = uVar11;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x98) = (ulong)bVar1;
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar9;
    *(undefined8 **)((long)register0x00000008 + -0x88) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x78) = FUN_10958861c;
    fVar8 = *(float *)(puVar3 + 5);
    puVar2 = param_1;
    param_3 = puVar5;
    param_4 = lVar6;
    if (fVar8 <= *(float *)(param_1 + 5)) {
      if ((fVar8 < *(float *)(puVar5 + 5)) &&
         (FUN_10958853c(puVar3,puVar5), puVar4 = puVar3,
         *(float *)(param_1 + 5) < *(float *)(puVar3 + 5))) goto LAB_1095886ac;
    }
    else {
      puVar4 = puVar5;
      if ((fVar8 < *(float *)(puVar5 + 5)) ||
         (FUN_10958853c(param_1,puVar3), puVar2 = puVar3,
         *(float *)(puVar3 + 5) < *(float *)(puVar5 + 5))) {
LAB_1095886ac:
        FUN_10958853c(puVar2,puVar4);
      }
    }
    if (((*(float *)(lVar6 + 0x28) <= *(float *)(puVar5 + 5)) ||
        (FUN_10958853c(puVar5,lVar6), *(float *)(puVar5 + 5) <= *(float *)(puVar3 + 5))) ||
       (FUN_10958853c(puVar3,puVar5), *(float *)(puVar3 + 5) <= *(float *)(param_1 + 5))) {
      return;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x98);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    param_2 = puVar3;
  } while( true );
}



/* Entry: 10958861c; end: 10958871f;  */

void FUN_10958861c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong unaff_d8;
  undefined8 unaff_d9;
  
  do {
    puVar3 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    fVar8 = *(float *)(puVar3 + 5);
    puVar2 = param_1;
    puVar5 = param_3;
    lVar6 = param_4;
    if (fVar8 <= *(float *)(param_1 + 5)) {
      if ((fVar8 < *(float *)(param_3 + 5)) &&
         (FUN_10958853c(puVar3,param_3), puVar4 = puVar3,
         *(float *)(param_1 + 5) < *(float *)(puVar3 + 5))) goto LAB_1095886ac;
    }
    else {
      puVar4 = param_3;
      if ((fVar8 < *(float *)(param_3 + 5)) ||
         (FUN_10958853c(param_1,puVar3), puVar2 = puVar3,
         *(float *)(puVar3 + 5) < *(float *)(param_3 + 5))) {
LAB_1095886ac:
        FUN_10958853c(puVar2,puVar4);
      }
    }
    if (((*(float *)(param_4 + 0x28) <= *(float *)(param_3 + 5)) ||
        (FUN_10958853c(param_3,param_4), *(float *)(param_3 + 5) <= *(float *)(puVar3 + 5))) ||
       (FUN_10958853c(puVar3,param_3), *(float *)(puVar3 + 5) <= *(float *)(param_1 + 5))) {
      return;
    }
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar7 = *param_1;
    *(undefined8 *)((long)register0x00000008 + -0x68) = param_1[1];
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar7;
    unaff_x20 = param_1[2];
    *(undefined8 *)((long)register0x00000008 + -0x58) = param_1[3];
    *(undefined8 *)((long)register0x00000008 + -0x51) = *(undefined8 *)((long)param_1 + 0x1f);
    bVar1 = *(byte *)((long)param_1 + 0x27);
    unaff_x21 = (ulong)bVar1;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[2] = 0;
    uVar10 = *(uint *)(param_1 + 5);
    unaff_d8 = (ulong)uVar10;
    uVar7 = *puVar3;
    param_1[1] = puVar3[1];
    *param_1 = uVar7;
    uVar7 = puVar3[4];
    uVar9 = puVar3[2];
    param_1[3] = puVar3[3];
    param_1[2] = uVar9;
    param_1[4] = uVar7;
    *(undefined1 *)((long)puVar3 + 0x27) = 0;
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(puVar3 + 5);
    uVar7 = *(undefined8 *)((long)register0x00000008 + -0x70);
    puVar3[1] = *(undefined8 *)((long)register0x00000008 + -0x68);
    *puVar3 = uVar7;
    param_2 = puVar3;
    param_3 = puVar5;
    param_4 = lVar6;
    if (*(char *)((long)puVar3 + 0x27) < '\0') {
      param_1 = (undefined8 *)puVar3[2];
      __ZdlPv();
      param_3 = puVar5;
      param_4 = lVar6;
    }
    uVar7 = *(undefined8 *)((long)register0x00000008 + -0x58);
    puVar3[2] = unaff_x20;
    puVar3[3] = uVar7;
    *(undefined8 *)((long)puVar3 + 0x1f) = *(undefined8 *)((long)register0x00000008 + -0x51);
    *(byte *)((long)puVar3 + 0x27) = bVar1;
    *(uint *)(puVar3 + 5) = uVar10;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
      return;
    }
    unaff_x30 = FUN_10958861c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    unaff_x19 = puVar3;
  } while( true );
}



/* Entry: 109588720; end: 109588a9b;  */

/* WARNING: Removing unreachable block (ram,0x000109588ad0) */

void FUN_109588720(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined7 uStack_88;
  undefined1 uStack_81;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = ((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555;
  if (2 < (long)uVar9) {
    if (uVar9 == 3) {
      puVar6 = param_2 + -6;
      fVar14 = *(float *)(param_1 + 0xb);
      if (*(float *)(param_1 + 5) < fVar14) {
        if (*(float *)(param_2 + -1) <= fVar14) {
          FUN_10958853c(param_1,param_1 + 6);
          if (*(float *)(param_2 + -1) <= *(float *)(param_1 + 0xb)) goto LAB_109588a48;
          param_1 = param_1 + 6;
        }
        goto LAB_109588908;
      }
      if (*(float *)(param_2 + -1) <= fVar14) goto LAB_109588a48;
    }
    else {
      if (uVar9 == 4) {
        FUN_10958861c(param_1,param_1 + 6,param_1 + 0xc,param_2 + -6);
        goto LAB_109588a48;
      }
      if (uVar9 != 5) goto LAB_109588844;
      FUN_10958861c(param_1,param_1 + 6,param_1 + 0xc,param_1 + 0x12);
      if (((*(float *)(param_2 + -1) <= *(float *)(param_1 + 0x17)) ||
          (FUN_10958853c(param_1 + 0x12,param_2 + -6),
          *(float *)(param_1 + 0x17) <= *(float *)(param_1 + 0x11))) ||
         (FUN_10958853c(param_1 + 0xc,param_1 + 0x12),
         *(float *)(param_1 + 0x11) <= *(float *)(param_1 + 0xb))) goto LAB_109588a48;
      puVar6 = param_1 + 0xc;
    }
    FUN_10958853c(param_1 + 6,puVar6);
    if (*(float *)(param_1 + 0xb) <= *(float *)(param_1 + 5)) goto LAB_109588a48;
    puVar6 = param_1 + 6;
LAB_109588908:
    FUN_10958853c(param_1,puVar6);
    goto LAB_109588a48;
  }
  if (uVar9 < 2) goto LAB_109588a48;
  if (uVar9 == 2) {
    if (*(float *)(param_2 + -1) <= *(float *)(param_1 + 5)) goto LAB_109588a48;
    puVar6 = param_2 + -6;
    goto LAB_109588908;
  }
LAB_109588844:
  puVar6 = param_1 + 0xc;
  fVar14 = *(float *)(param_1 + 0xb);
  puVar3 = param_1;
  if (fVar14 <= *(float *)(param_1 + 5)) {
    if ((fVar14 < *(float *)(param_1 + 0x11)) &&
       (FUN_10958853c(param_1 + 6,puVar6), *(float *)(param_1 + 5) < *(float *)(param_1 + 0xb))) {
      puVar7 = param_1 + 6;
      goto LAB_109588934;
    }
  }
  else {
    puVar7 = puVar6;
    if (*(float *)(param_1 + 0x11) <= fVar14) {
      FUN_10958853c(param_1,param_1 + 6);
      if (*(float *)(param_1 + 0x11) <= *(float *)(param_1 + 0xb)) goto LAB_109588938;
      puVar3 = param_1 + 6;
    }
LAB_109588934:
    FUN_10958853c(puVar3,puVar7);
  }
LAB_109588938:
  if (param_1 + 0x12 != param_2) {
    lVar5 = 0;
    iVar13 = 0;
    puVar3 = param_1 + 0x12;
    do {
      fVar14 = *(float *)(puVar3 + 5);
      if (*(float *)(puVar6 + 5) < fVar14) {
        uVar16 = puVar3[1];
        uVar15 = *puVar3;
        uVar1 = puVar3[2];
        uStack_88 = (undefined7)puVar3[3];
        uVar10 = *(undefined8 *)((long)puVar3 + 0x1f);
        uStack_81 = (undefined1)uVar10;
        uVar2 = *(undefined1 *)((long)puVar3 + 0x27);
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[2] = 0;
        lVar12 = lVar5;
        do {
          lVar11 = lVar12;
          *(undefined8 *)((long)param_1 + lVar11 + 0x98) =
               *(undefined8 *)((long)param_1 + lVar11 + 0x68);
          *(undefined8 *)((long)param_1 + lVar11 + 0x90) =
               *(undefined8 *)((long)param_1 + lVar11 + 0x60);
          if (*(char *)((long)param_1 + lVar11 + 0xb7) < '\0') {
            __ZdlPv(*(undefined8 *)((long)param_1 + lVar11 + 0xa0));
          }
          *(undefined8 *)((long)param_1 + lVar11 + 0xa8) =
               *(undefined8 *)((long)param_1 + lVar11 + 0x78);
          *(undefined8 *)((long)param_1 + lVar11 + 0xa0) =
               *(undefined8 *)((long)param_1 + lVar11 + 0x70);
          *(undefined8 *)((long)param_1 + lVar11 + 0xb0) =
               *(undefined8 *)((long)param_1 + lVar11 + 0x80);
          *(undefined1 *)((long)param_1 + lVar11 + 0x87) = 0;
          *(undefined1 *)((long)param_1 + lVar11 + 0x70) = 0;
          *(undefined4 *)((long)param_1 + lVar11 + 0xb8) =
               *(undefined4 *)((long)param_1 + lVar11 + 0x88);
          puVar6 = param_1;
          if (lVar11 == -0x60) goto LAB_1095889f0;
          lVar12 = lVar11 + -0x30;
        } while (*(float *)((long)param_1 + lVar11 + 0x58) < fVar14);
        puVar6 = (undefined8 *)((long)param_1 + lVar11 + 0x60);
LAB_1095889f0:
        puVar6[1] = uVar16;
        *puVar6 = uVar15;
        if (*(char *)((long)puVar6 + 0x27) < '\0') {
          __ZdlPv(*(undefined8 *)((long)param_1 + lVar11 + 0x70));
        }
        *(undefined8 *)((long)param_1 + lVar11 + 0x70) = uVar1;
        puVar6[3] = CONCAT17(uStack_81,uStack_88);
        *(undefined8 *)((long)puVar6 + 0x1f) = uVar10;
        *(undefined1 *)((long)puVar6 + 0x27) = uVar2;
        *(float *)(puVar6 + 5) = fVar14;
        iVar13 = iVar13 + 1;
        if (iVar13 == 8) {
          plVar4 = (long *)(ulong)(puVar3 + 6 == param_2);
          goto LAB_109588a4c;
        }
      }
      puVar7 = puVar3 + 6;
      lVar5 = lVar5 + 0x30;
      puVar6 = puVar3;
      puVar3 = puVar7;
    } while (puVar7 != param_2);
  }
LAB_109588a48:
  plVar4 = (long *)0x1;
LAB_109588a4c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *plVar4;
  if (lVar8 == 0) {
    return;
  }
  lVar12 = plVar4[1];
  lVar5 = lVar8;
  if (lVar12 != lVar8) {
    do {
      lVar12 = lVar12 + -0x30;
    } while (lVar12 != lVar8);
    lVar5 = *plVar4;
  }
  plVar4[1] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar5);
  return;
}



/* Entry: 109588a9c; end: 109588b0b;  */

/* WARNING: Removing unreachable block (ram,0x000109588ad0) */

void FUN_109588a9c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1[1];
  lVar1 = lVar2;
  if (lVar3 != lVar2) {
    do {
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != lVar2);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 109588b0c; end: 109588be3;  */

undefined8 * FUN_109588b0c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110afcd08;
  func_0x0001056893c8(param_1 + 8);
  func_0x0001056893c8(param_1 + 4);
  FUN_10958949c(param_1 + 1);
  return param_1;
}



/* Entry: 109588be4; end: 10958942b;  */

void FUN_109588be4(long *param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *****pppppuVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  char cVar7;
  bool bVar8;
  undefined8 ***pppuVar9;
  code *pcVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined8 *****pppppuVar13;
  undefined8 uVar14;
  undefined8 ****ppppuVar15;
  long lVar16;
  long lVar17;
  undefined8 ***pppuVar18;
  long *unaff_x20;
  undefined8 ****ppppuVar19;
  int *piVar20;
  int iVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined1 *puVar24;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 **ppuStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [32];
  undefined8 ****ppppuStack_170;
  ulong uStack_168;
  byte bStack_159;
  undefined8 ****appppuStack_158 [2];
  char cStack_141;
  undefined8 ***pppuStack_140;
  undefined8 ***pppuStack_138;
  undefined8 ***pppuStack_130;
  undefined1 auStack_120 [8];
  long *plStack_118;
  long alStack_110 [3];
  long *plStack_f8;
  undefined **ppuStack_f0;
  undefined8 ***pppuStack_e8;
  long alStack_e0 [3];
  long *plStack_c8;
  undefined **ppuStack_a0;
  undefined8 ***pppuStack_98;
  long lStack_90;
  undefined ***pppuStack_88;
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_1f8 = param_1;
  if (*(long *)(**(long **)(param_2 + 2) +
                (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 + 0x40)
      != 0) {
    plStack_1c8 = alStack_110;
    plStack_1b8 = &lStack_90;
    plStack_1c0 = alStack_e0;
    ppuStack_1d0 = (undefined8 **)&PTR_DAT_1108a6378;
    uStack_1d8 = 0x100000000;
    uStack_1e0 = 0x100000000;
    do {
      FUN_10958a9c8(auStack_120);
      puVar11 = auStack_120;
      func_0x000105683010(puVar11);
      func_0x000105688e20(auStack_190,0,puVar11);
      if (param_1[2] == param_1[1]) {
        puVar11 = auStack_190;
      }
      else {
        uVar22 = 0;
        iVar21 = 1;
        puVar24 = auStack_190;
        do {
          if ((*(byte *)(*(long *)(param_2 + 2) + 0xc0) & 1) == 0) {
            uStack_1a8 = uStack_1d8;
            uStack_1b0 = uStack_1e0;
            puStack_1a0 = &DAT_10e5b4a18;
            uStack_198 = 0;
            goto LAB_109588ff0;
          }
          lVar16 = 0x20;
          if ((uVar22 & 1) != 0) {
            lVar16 = 0x40;
          }
          puVar23 = (undefined8 *)(param_1[1] + uVar22 * 0x48);
          ppuStack_a0 = (undefined **)0x0;
          pppuStack_98 = (undefined8 ****)0x0;
          plStack_78 = (long *)0x0;
          if (*(char *)(puVar23 + 8) == '\x01') {
            iVar1 = *(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) + iVar21;
            lVar17 = **(long **)(param_2 + 2);
            if (*(long *)(lVar17 + (long)iVar1 * 0x50 + 0x40) == 0) {
              func_0x000105688514(&UNK_10f57420e);
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x109589340);
              (*pcVar10)();
            }
            FUN_1095659c8(&ppuStack_f0,lVar17 + (long)iVar1 * 0x50);
            pppuVar9 = pppuStack_98;
            pppuStack_98 = pppuStack_e8;
            ppuStack_a0 = ppuStack_f0;
            plVar12 = plStack_1c0;
            ppuStack_f0 = (undefined **)0x0;
            pppuStack_e8 = (undefined8 ****)0x0;
            if ((undefined8 ****)pppuVar9 != (undefined8 ****)0x0) {
              ppppuVar15 = (undefined8 ****)(pppuVar9 + 1);
              do {
                pppuVar18 = *ppppuVar15;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(ppppuVar15,0x10);
                if (bVar8) {
                  *ppppuVar15 = (undefined8 ***)((long)pppuVar18 + -1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (pppuVar18 == (undefined8 ***)0x0) {
                (*(code *)(*pppuVar9)[2])(pppuVar9);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
              }
            }
            func_0x00010951eac8(plStack_1b8,plVar12);
            if (plStack_c8 == plVar12) {
              lVar17 = 0x20;
LAB_109588d98:
              (**(code **)(*plStack_c8 + lVar17))();
            }
            else if (plStack_c8 != (long *)0x0) {
              lVar17 = 0x28;
              goto LAB_109588d98;
            }
            pppuVar9 = pppuStack_e8;
            if ((undefined8 ****)pppuStack_e8 != (undefined8 ****)0x0) {
              ppppuVar15 = (undefined8 ****)(pppuStack_e8 + 1);
              do {
                pppuVar18 = *ppppuVar15;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(ppppuVar15,0x10);
                if (bVar8) {
                  *ppppuVar15 = (undefined8 ***)((long)pppuVar18 + -1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (pppuVar18 == (undefined8 ***)0x0) {
                (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
              }
            }
            iVar21 = iVar21 + 1;
          }
          plVar12 = *(long **)(param_2 + 2);
          FUN_109565a70(plVar12,*param_2);
          uVar5 = plVar12[1];
          if (-1 < (char)*(byte *)((long)plVar12 + 0x17)) {
            uVar5 = (ulong)*(byte *)((long)plVar12 + 0x17);
          }
          func_0x000104c4f768(appppuStack_158,uVar5 + 0xb,&ppppuStack_170);
          pppppuVar3 = (undefined8 *****)appppuStack_158[0];
          if (-1 < cStack_141) {
            pppppuVar3 = appppuStack_158;
          }
          if (uVar5 != 0) {
            plVar4 = (long *)*plVar12;
            if (-1 < *(char *)((long)plVar12 + 0x17)) {
              plVar4 = plVar12;
            }
            _memmove(pppppuVar3,plVar4,uVar5);
          }
          puVar2 = (undefined8 *)((long)pppppuVar3 + uVar5);
          *puVar2 = 0x6f66736e6172745f;
          *(undefined4 *)((long)puVar2 + 7) = 0x5f6d726f;
          *(undefined1 *)((long)puVar2 + 0xb) = 0;
          __ZNSt3__19to_stringEm(&ppppuStack_170,uVar22);
          uVar5 = uStack_168;
          pppppuVar3 = (undefined8 *****)ppppuStack_170;
          if (-1 < (char)bStack_159) {
            uVar5 = (ulong)bStack_159;
            pppppuVar3 = &ppppuStack_170;
          }
          pppppuVar13 = appppuStack_158;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppuVar13,pppppuVar3,uVar5);
          pppuStack_138 = pppppuVar13[1];
          pppuStack_140 = *pppppuVar13;
          pppuStack_130 = pppppuVar13[2];
          pppppuVar13[1] = (undefined8 ****)0x0;
          pppppuVar13[2] = (undefined8 ****)0x0;
          *pppppuVar13 = (undefined8 ****)0x0;
          uVar14 = *(undefined8 *)(param_2 + 2);
          FUN_109565a70(uVar14,*param_2);
          FUN_1095617dc(&ppuStack_f0,&pppuStack_140,uVar14,*(long *)(param_2 + 2) + 0x108);
          if ((long)pppuStack_130 < 0) {
            __ZdlPv(pppuStack_140);
          }
          if ((char)bStack_159 < '\0') {
            __ZdlPv(ppppuStack_170);
          }
          if (cStack_141 < '\0') {
            __ZdlPv(appppuStack_158[0]);
          }
          puVar11 = (undefined1 *)((long)param_1 + lVar16);
          (*(code *)*puVar23)(puVar24,puVar11,&ppuStack_a0,puVar23);
          FUN_10956189c(&ppuStack_f0);
          if (plStack_78 == plStack_1b8) {
            lVar16 = 0x20;
LAB_109588f50:
            (**(code **)(*plStack_78 + lVar16))();
          }
          else if (plStack_78 != (long *)0x0) {
            lVar16 = 0x28;
            goto LAB_109588f50;
          }
          pppuVar9 = pppuStack_98;
          if ((undefined8 ****)pppuStack_98 != (undefined8 ****)0x0) {
            ppppuVar15 = (undefined8 ****)(pppuStack_98 + 1);
            do {
              pppuVar18 = *ppppuVar15;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppuVar15,0x10);
              if (bVar8) {
                *ppppuVar15 = (undefined8 ***)((long)pppuVar18 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (pppuVar18 == (undefined8 ***)0x0) {
              (*(code *)(*pppuStack_98)[2])(pppuStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
            }
          }
          uVar22 = uVar22 + 1;
          puVar24 = puVar11;
        } while (uVar22 < (ulong)((param_1[2] - param_1[1] >> 3) * -0x71c71c71c71c71c7));
      }
      func_0x000105688e20(&uStack_1b0,0,puVar11);
LAB_109588ff0:
      FUN_10958aad8(auStack_190,&uStack_1b0);
      func_0x0001056893c8(&uStack_1b0);
      if ((int)param_1[0xc] == 0) {
        FUN_10958acbc(&ppuStack_f0,auStack_190);
        puVar23 = (undefined8 *)(*(long *)(*(long *)(param_2 + 2) + 0x78) + (long)*param_2 * 0x18);
        piVar6 = (int *)puVar23[1];
        for (piVar20 = (int *)*puVar23; piVar20 != piVar6; piVar20 = piVar20 + 2) {
          if (*piVar20 == 0) {
            func_0x000109566260(**(long **)(param_2 + 2) + (long)piVar20[1] * 0x50 + 0x18,
                                &ppuStack_f0);
          }
        }
        if (plStack_c8 == plStack_1c0) {
          lVar16 = 0x20;
LAB_1095891d4:
          (**(code **)(*plStack_c8 + lVar16))();
        }
        else if (plStack_c8 != (long *)0x0) {
          lVar16 = 0x28;
          goto LAB_1095891d4;
        }
        pppuVar9 = pppuStack_e8;
        if ((undefined8 ****)pppuStack_e8 != (undefined8 ****)0x0) {
          ppppuVar15 = (undefined8 ****)(pppuStack_e8 + 1);
          do {
            pppuVar18 = *ppppuVar15;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppuVar15,0x10);
            if (bVar8) {
              *ppppuVar15 = (undefined8 ***)((long)pppuVar18 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (pppuVar18 == (undefined8 ***)0x0) {
            (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
          }
        }
      }
      else if ((int)param_1[0xc] == 1) {
        FUN_109580010(&uStack_1b0,auStack_190);
        FUN_10958b098(&ppuStack_a0,&uStack_1b0);
        ppppuVar15 = (undefined8 ****)0x38;
        __Znwm();
        ppppuVar15[1] = (undefined8 ***)0x0;
        ppppuVar15[2] = (undefined8 ***)0x0;
        *ppppuVar15 = (undefined8 ***)ppuStack_1d0;
        ppppuVar19 = ppppuVar15 + 3;
        *ppppuVar19 = (undefined8 ***)0x0;
        ppppuVar15[4] = (undefined8 ***)0x0;
        FUN_10958b098(ppppuVar15 + 4,&ppuStack_a0);
        *ppppuVar19 = (undefined8 ***)FUN_10958b114;
        FUN_1093502c4(&ppuStack_a0);
        ppuStack_a0 = &PTR_FUN_110afce08;
        pppuStack_140 = ppppuVar19;
        pppuStack_138 = ppppuVar15;
        pppuStack_98 = ppppuVar19;
        pppuStack_88 = &ppuStack_a0;
        FUN_109567d5c(&ppuStack_f0,&pppuStack_140,&ppuStack_a0);
        if (pppuStack_88 == &ppuStack_a0) {
          lVar16 = 0x20;
LAB_109589124:
          (**(code **)((long)*pppuStack_88 + lVar16))();
        }
        else if (pppuStack_88 != (undefined ***)0x0) {
          lVar16 = 0x28;
          goto LAB_109589124;
        }
        pppuVar9 = pppuStack_138;
        if ((undefined8 ****)pppuStack_138 != (undefined8 ****)0x0) {
          ppppuVar15 = (undefined8 ****)(pppuStack_138 + 1);
          do {
            pppuVar18 = *ppppuVar15;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppuVar15,0x10);
            if (bVar8) {
              *ppppuVar15 = (undefined8 ***)((long)pppuVar18 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (pppuVar18 == (undefined8 ***)0x0) {
            (*(code *)(*pppuStack_138)[2])(pppuStack_138);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
          }
        }
        puVar23 = (undefined8 *)(*(long *)(*(long *)(param_2 + 2) + 0x78) + (long)*param_2 * 0x18);
        piVar6 = (int *)puVar23[1];
        for (piVar20 = (int *)*puVar23; piVar20 != piVar6; piVar20 = piVar20 + 2) {
          if (*piVar20 == 0) {
            func_0x000109566260(**(long **)(param_2 + 2) + (long)piVar20[1] * 0x50 + 0x18,
                                &ppuStack_f0);
          }
        }
        if (plStack_c8 == plStack_1c0) {
          lVar16 = 0x20;
LAB_109589220:
          (**(code **)(*plStack_c8 + lVar16))();
        }
        else if (plStack_c8 != (long *)0x0) {
          lVar16 = 0x28;
          goto LAB_109589220;
        }
        pppuVar9 = pppuStack_e8;
        if ((undefined8 ****)pppuStack_e8 != (undefined8 ****)0x0) {
          ppppuVar15 = (undefined8 ****)(pppuStack_e8 + 1);
          do {
            pppuVar18 = *ppppuVar15;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppuVar15,0x10);
            if (bVar8) {
              *ppppuVar15 = (undefined8 ***)((long)pppuVar18 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (pppuVar18 == (undefined8 ***)0x0) {
            (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
          }
        }
        FUN_1093502c4(&uStack_1b0);
      }
      func_0x0001056893c8(auStack_190);
      plStack_1f8 = plStack_f8;
      if (plStack_f8 == plStack_1c8) {
        lVar16 = 0x20;
LAB_109589294:
        (**(code **)(*plStack_f8 + lVar16))();
      }
      else if (plStack_f8 != (long *)0x0) {
        lVar16 = 0x28;
        goto LAB_109589294;
      }
      plVar12 = plStack_118;
      if (plStack_118 != (long *)0x0) {
        plVar4 = plStack_118 + 1;
        do {
          lVar16 = *plVar4;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *plVar4 = lVar16 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plStack_1f8 = plVar12;
        }
      }
      unaff_x20 = param_1;
    } while (*(long *)(**(long **)(param_2 + 2) +
                       (long)*(int *)((*(long **)(param_2 + 2))[0xc] + (long)*param_2 * 4) * 0x50 +
                      0x40) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_1093502c4(&ppuStack_a0);
  FUN_1093502c4(&uStack_1b0);
  func_0x0001056893c8(auStack_190);
  FUN_10958ab28(auStack_120);
  plVar12 = plStack_1f8;
  __Unwind_Resume(plStack_1f8);
  pcStack_1e8 = FUN_10958942c;
  uStack_218 = 0x100000000;
  uStack_220 = 0x100000000;
  puStack_210 = &DAT_10e5b4a18;
  uStack_208 = 0;
  plStack_200 = unaff_x20;
  puStack_1f0 = &stack0xfffffffffffffff0;
  FUN_10958aad8(plVar12 + 4,&uStack_220);
  func_0x0001056893c8(&uStack_220);
  uStack_218 = 0x100000000;
  uStack_220 = 0x100000000;
  puStack_210 = &DAT_10e5b4a18;
  uStack_208 = 0;
  FUN_10958aad8(plVar12 + 8,&uStack_220);
  func_0x0001056893c8(&uStack_220);
  return;
}



/* Entry: 10958942c; end: 10958949b;  */

void FUN_10958942c(long param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0x100000000;
  uStack_40 = 0x100000000;
  puStack_30 = &DAT_10e5b4a18;
  uStack_28 = 0;
  FUN_10958aad8(param_1 + 0x20,&uStack_40);
  func_0x0001056893c8(&uStack_40);
  uStack_38 = 0x100000000;
  uStack_40 = 0x100000000;
  puStack_30 = &DAT_10e5b4a18;
  uStack_28 = 0;
  FUN_10958aad8(param_1 + 0x40,&uStack_40);
  func_0x0001056893c8(&uStack_40);
  return;
}


