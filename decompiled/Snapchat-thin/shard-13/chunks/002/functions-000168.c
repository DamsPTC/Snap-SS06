/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a2b33d0; end: 10a2b33d7;  */

void FUN_10a2b33d0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  double dVar3;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f649d7d,&UNK_10f649f28,0x166,&UNK_10f649f69);
  }
  lVar2 = *(long *)(param_1 + 0xa8);
  puVar1 = auStack_38;
  func_0x000107c2b054(puVar1,&UNK_10e4a8189);
  dVar3 = 0.0;
  if (*(char *)(param_1 + 0x68) == '\x01') {
    __ZNSt3__16chrono12steady_clock3nowEv(0);
    dVar3 = (double)(((long)puVar1 - *(long *)(param_1 + 0xa0)) / 1000000);
  }
  if (lVar2 != 0) {
    FUN_10a76bf18(dVar3,*(undefined8 *)(lVar2 + 0x8d8),auStack_38);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a2b33d8; end: 10a2b36cb;  */

undefined ** FUN_10a2b33d8(undefined **param_1,undefined1 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined *puStack_290;
  undefined **ppuStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined *puStack_248;
  undefined **ppuStack_240;
  code *pcStack_208;
  undefined **appuStack_200 [7];
  long lStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 auStack_180 [152];
  undefined1 auStack_e8 [8];
  undefined8 *apuStack_e0 [7];
  undefined1 auStack_a8 [72];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = &PTR_PTR_11330a000;
  ppuVar4 = param_1;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    ppuVar4 = (undefined **)0x1;
    param_2 = (undefined1 *)0x4;
    func_0x00010ae06f08(1,4,&UNK_10f649d7d,&UNK_10f649f83,0x16c,&UNK_10f649fc2);
  }
  if (param_1[0x3a] == (undefined *)0x0) {
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f649d7d,&UNK_10f649f83,0x173,&UNK_10f649fe2);
    }
    plVar5 = *(long **)(*(long *)(param_1[0x35] + 0x100) + 0x1c8);
    (**(code **)(*plVar5 + 0x60))();
    ppuVar9 = (undefined **)plVar5[1];
    lStack_298 = plVar5[1];
    lStack_2a0 = *plVar5;
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar4 = ppuVar9 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
        if (bVar3) {
          *ppuVar4 = *ppuVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_109d1a80c();
    lStack_250 = *plVar5;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    puStack_290 = &UNK_1053a6a3c;
    ppuStack_288 = &PTR_DAT_110ae9180;
    pcStack_208 = FUN_10a2c2268;
    appuStack_200[0] = &PTR_DAT_110bbbbc8;
    puStack_1c0 = &UNK_1053a6a3c;
    ppuStack_1b8 = &PTR_DAT_110ae9180;
    puStack_248 = &UNK_1053a6a3c;
    ppuStack_240 = &PTR_DAT_110ae9180;
    uVar6 = 0x130;
    lStack_1c8 = lStack_250;
    __Znwm(0x130);
    FUN_10a2b5a50();
    FUN_10a2c13b8(auStack_e8,&pcStack_208);
    FUN_10a2c21b4(auStack_180,uVar6,auStack_e8);
    if (lStack_60 != 0) {
      func_0x0001092b4274(&lStack_60);
    }
    func_0x0001092ba41c(auStack_a8);
    (*(code *)*apuStack_e0[0])(apuStack_e0);
    param_2 = auStack_180;
    FUN_10a2b36cc(param_1 + 0x3a);
    FUN_10a2c2280(auStack_180);
    func_0x0001092ba41c(&lStack_1c8);
    (*(code *)*appuStack_200[0])(appuStack_200);
    func_0x0001092ba41c(&lStack_250);
    (*(code *)*ppuStack_288)(&ppuStack_288);
    ppuVar4 = (undefined **)param_1[0x3a];
    FUN_10a2b3744();
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar4 = ppuVar9;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  if (ppuVar9 != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
  }
  do {
    __Unwind_Resume();
  } while ((int)param_2 == 0);
  ppuVar7 = ppuVar4;
  func_0x000104bd46a0();
  pcStack_2a8 = FUN_10a2b36cc;
  ppuStack_2c0 = ppuVar4;
  ppuStack_2b8 = ppuVar9;
  puStack_2b0 = &stack0xfffffffffffffff0;
  FUN_10a2c2500(&puStack_2d0);
  plVar5 = (long *)ppuVar7[1];
  puVar11 = ppuVar7[1];
  puVar10 = *ppuVar7;
  ppuVar7[1] = puStack_2c8;
  *ppuVar7 = puStack_2d0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      puStack_2d0 = puVar10;
      puStack_2c8 = puVar11;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return ppuVar7;
}



/* Entry: 10a2b36cc; end: 10a2b3743;  */

undefined8 * FUN_10a2b36cc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10a2c2500(&uStack_30);
  plVar5 = (long *)param_1[1];
  uVar7 = param_1[1];
  uVar6 = *param_1;
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
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
      uStack_30 = uVar6;
      uStack_28 = uVar7;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a2b3744; end: 10a2b386b;  */

void FUN_10a2b3744(long param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined1 auStack_120 [8];
  long *plStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  int iStack_c4;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f64a44f,&UNK_10f64a639,0x56,&UNK_10f64a677);
  }
  pppuVar8 = *(undefined ****)(param_1 + 0x20);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  if (pppuVar8 != (undefined ***)0x0) {
    pppuVar5 = pppuVar8 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar4) {
        *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar4) {
        *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pcStack_78 = FUN_10a2c34c4;
  ppuStack_70 = &PTR_FUN_110bbbaf0;
  FUN_10a2b64b0(param_1,&pcStack_78);
  pppuVar5 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (pppuVar8 != (undefined ***)0x0) {
    pppuVar5 = pppuVar8;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (pppuVar8 != (undefined ***)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar8);
  }
  __Unwind_Resume();
  ppuVar9 = pppuVar5[0x46];
  ppuStack_b8 = pppuVar5[0x47];
  if (ppuStack_b8 != (undefined **)0x0) {
    ppuVar1 = ppuStack_b8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_110 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_f0 = 0;
  lStack_f8 = 0;
  uStack_e8 = 1;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_cc = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  iStack_c4 = 0;
  ppuStack_c0 = ppuVar9;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_d8);
  uStack_e0 = 1;
  FUN_10a2c030c(auStack_120,uStack_dc,&uStack_d8);
  FUN_10a2b0dc8(ppuVar9,auStack_120);
  if (plStack_118 != (long *)0x0) {
    plVar2 = plStack_118 + 1;
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
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
    }
  }
  if (iStack_c4 < 0) {
    __ZdlPv(CONCAT44(uStack_d4,uStack_d8));
  }
  if (lStack_f8 < 0) {
    __ZdlPv(uStack_108);
  }
  ppuVar9 = ppuStack_b8;
  if (ppuStack_b8 != (undefined **)0x0) {
    ppuVar1 = ppuStack_b8 + 1;
    do {
      puVar7 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = puVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar7 == (undefined *)0x0) {
      (**(code **)(*ppuStack_b8 + 0x10))(ppuStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
    }
  }
  return;
}



/* Entry: 10a2b386c; end: 10a2b39cf;  */

void FUN_10a2b386c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  int iStack_44;
  undefined8 uStack_40;
  long *plStack_38;
  
  uVar6 = *(undefined8 *)(param_1 + 0x230);
  plStack_38 = *(long **)(param_1 + 0x238);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  lStack_78 = 0;
  uStack_68 = 1;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_4c = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  iStack_44 = 0;
  uStack_40 = uVar6;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_58);
  uStack_60 = 1;
  FUN_10a2c030c(auStack_a0,uStack_5c,&uStack_58);
  FUN_10a2b0dc8(uVar6,auStack_a0);
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  if (iStack_44 < 0) {
    __ZdlPv(CONCAT44(uStack_54,uStack_58));
  }
  if (lStack_78 < 0) {
    __ZdlPv(uStack_88);
  }
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a2b39d0; end: 10a2b3a8f;  */

void FUN_10a2b39d0(undefined2 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lStack_38;
  
  *param_1 = 0x101;
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    *(undefined8 *)(param_1 + 0x60) = 0x11;
    puVar2 = *(undefined8 **)(param_1 + 0x5c);
  }
  else {
    puVar2 = (undefined8 *)(param_1 + 0x5c);
    *(undefined1 *)((long)param_1 + 0xcf) = 0x11;
  }
  *(undefined2 *)(puVar2 + 2) = 0x52;
  puVar2[1] = 0x455a494e474f4345;
  *puVar2 = 0x525f484345455053;
  lVar1 = *(long *)(param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x3c);
  while (lVar3 != lVar1) {
    lVar3 = lVar3 + -0x40;
    func_0x00010a2b73f4(lVar3);
  }
  *(long *)(param_1 + 0x3c) = lVar1;
  lVar1 = *(long *)(param_1 + 0x74);
  for (lVar3 = *(long *)(param_1 + 0x78); lVar3 != lVar1; lVar3 = lVar3 + -0x20) {
    lStack_38 = lVar3 + -0x18;
    FUN_10a0426d8(&lStack_38);
  }
  *(long *)(param_1 + 0x78) = lVar1;
  return;
}



/* Entry: 10a2b3a90; end: 10a2b4d8b;  */

/* WARNING: Removing unreachable block (ram,0x00010a2b47bc) */
/* WARNING: Removing unreachable block (ram,0x00010a2b43f8) */
/* WARNING: Removing unreachable block (ram,0x00010a2b43d8) */
/* WARNING: Removing unreachable block (ram,0x00010a2b43b8) */
/* WARNING: Removing unreachable block (ram,0x00010a2b43c8) */
/* WARNING: Removing unreachable block (ram,0x00010a2b43e8) */
/* WARNING: Removing unreachable block (ram,0x00010a2b4408) */
/* WARNING: Removing unreachable block (ram,0x00010a2b47f4) */

void FUN_10a2b3a90(long *param_1)

{
  ulong uVar1;
  undefined8 ******ppppppuVar2;
  undefined8 *puVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *****pppppuStack_690;
  undefined8 uStack_688;
  long lStack_680;
  undefined8 *****pppppuStack_678;
  ulong uStack_670;
  byte bStack_661;
  undefined8 *****pppppuStack_660;
  ulong uStack_658;
  byte bStack_649;
  undefined8 *****pppppuStack_648;
  ulong uStack_640;
  byte bStack_631;
  undefined8 *****pppppuStack_630;
  ulong uStack_628;
  byte bStack_619;
  undefined8 *****pppppuStack_618;
  ulong uStack_610;
  byte bStack_601;
  undefined8 *****pppppuStack_600;
  ulong uStack_5f8;
  byte bStack_5e9;
  undefined8 *****pppppuStack_5e8;
  ulong uStack_5e0;
  byte bStack_5d1;
  undefined8 *****pppppuStack_5d0;
  ulong uStack_5c8;
  byte bStack_5b9;
  undefined8 auStack_5b8 [2];
  char cStack_5a1;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long lStack_590;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long lStack_570;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long lStack_550;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long lStack_530;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_510;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  long lStack_4f0;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4b0;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_490;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long lStack_470;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_450;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_310;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *****pppppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    puVar6 = (undefined1 *)param_1[0x4c];
    uStack_688 = 0;
    lStack_680 = 0;
    pppppuStack_690 = (undefined8 ******)0x0;
    __ZNSt3__19to_stringEi(auStack_5b8,*puVar6);
    puVar7 = auStack_5b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar7,0,&UNK_10f64a8d0,0x18);
    uStack_598 = puVar7[1];
    uStack_5a0 = *puVar7;
    lStack_590 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_5a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&DAT_10f68f57e,1);
    uStack_578 = puVar7[1];
    uStack_580 = *puVar7;
    lStack_570 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_580;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f64a8e9,0x1f);
    uStack_558 = puVar7[1];
    uStack_560 = *puVar7;
    lStack_550 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    __ZNSt3__19to_stringEi(&pppppuStack_5d0,puVar6[1]);
    ppppppuVar2 = (undefined8 ******)pppppuStack_5d0;
    if (-1 < (char)bStack_5b9) {
      uStack_5c8 = (ulong)bStack_5b9;
      ppppppuVar2 = &pppppuStack_5d0;
    }
    puVar7 = &uStack_560;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,ppppppuVar2,uStack_5c8);
    uStack_538 = puVar7[1];
    uStack_540 = *puVar7;
    lStack_530 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_540;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f64a909,0xc);
    uStack_518 = puVar7[1];
    uStack_520 = *puVar7;
    lStack_510 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    __ZNSt3__19to_stringEi(&pppppuStack_5e8,*(undefined4 *)(puVar6 + 4));
    ppppppuVar2 = (undefined8 ******)pppppuStack_5e8;
    if (-1 < (char)bStack_5d1) {
      uStack_5e0 = (ulong)bStack_5d1;
      ppppppuVar2 = &pppppuStack_5e8;
    }
    puVar7 = &uStack_520;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,ppppppuVar2,uStack_5e0);
    uStack_4f8 = puVar7[1];
    uStack_500 = *puVar7;
    lStack_4f0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_500;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&DAT_10f68f57e,1);
    uStack_4d8 = puVar7[1];
    uStack_4e0 = *puVar7;
    lStack_4d0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_4e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f64a916,9);
    uStack_4b8 = puVar7[1];
    uStack_4c0 = *puVar7;
    lStack_4b0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    __ZNSt3__19to_stringEj(&pppppuStack_600,*(undefined4 *)(puVar6 + 8));
    ppppppuVar2 = (undefined8 ******)pppppuStack_600;
    if (-1 < (char)bStack_5e9) {
      uStack_5f8 = (ulong)bStack_5e9;
      ppppppuVar2 = &pppppuStack_600;
    }
    puVar7 = &uStack_4c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,ppppppuVar2,uStack_5f8);
    uStack_498 = puVar7[1];
    uStack_4a0 = *puVar7;
    lStack_490 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_4a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&DAT_10f68f57e,1);
    uStack_478 = puVar7[1];
    uStack_480 = *puVar7;
    lStack_470 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_480;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f64a920,0xf);
    uStack_458 = puVar7[1];
    uStack_460 = *puVar7;
    lStack_450 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uVar1 = *(ulong *)(puVar6 + 0x18);
    puVar7 = *(undefined8 **)(puVar6 + 0x10);
    if (-1 < (char)puVar6[0x27]) {
      uVar1 = (ulong)(byte)puVar6[0x27];
      puVar7 = (undefined8 *)(puVar6 + 0x10);
    }
    puVar3 = &uStack_460;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,puVar7,uVar1);
    uStack_438 = puVar3[1];
    uStack_440 = *puVar3;
    lStack_430 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar7 = &uStack_440;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&DAT_10f68f57e,1);
    uStack_418 = puVar7[1];
    uStack_420 = *puVar7;
    lStack_410 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_420;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f64a930,0xe);
    uStack_3f8 = puVar7[1];
    uStack_400 = *puVar7;
    lStack_3f0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uVar1 = *(ulong *)(puVar6 + 0x30);
    puVar7 = *(undefined8 **)(puVar6 + 0x28);
    if (-1 < (char)puVar6[0x3f]) {
      uVar1 = (ulong)(byte)puVar6[0x3f];
      puVar7 = (undefined8 *)(puVar6 + 0x28);
    }
    puVar3 = &uStack_400;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,puVar7,uVar1);
    uStack_3d8 = puVar3[1];
    uStack_3e0 = *puVar3;
    lStack_3d0 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar7 = &uStack_3e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&DAT_10f68f57e,1);
    uStack_3b8 = puVar7[1];
    uStack_3c0 = *puVar7;
    lStack_3b0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_3c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f64a93f,9);
    uStack_398 = puVar7[1];
    uStack_3a0 = *puVar7;
    lStack_390 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    __ZNSt3__19to_stringEj(&pppppuStack_618,*(undefined4 *)(puVar6 + 0x40));
    ppppppuVar2 = (undefined8 ******)pppppuStack_618;
    if (-1 < (char)bStack_601) {
      uStack_610 = (ulong)bStack_601;
      ppppppuVar2 = &pppppuStack_618;
    }
    puVar7 = &uStack_3a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,ppppppuVar2,uStack_610);
    uStack_378 = puVar7[1];
    uStack_380 = *puVar7;
    lStack_370 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_380;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&DAT_10f68f57e,1);
    uStack_358 = puVar7[1];
    uStack_360 = *puVar7;
    lStack_350 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_360;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f64a949,8);
    uStack_338 = puVar7[1];
    uStack_340 = *puVar7;
    lStack_330 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uVar1 = *(ulong *)(puVar6 + 0x50);
    puVar7 = *(undefined8 **)(puVar6 + 0x48);
    if (-1 < (char)puVar6[0x5f]) {
      uVar1 = (ulong)(byte)puVar6[0x5f];
      puVar7 = (undefined8 *)(puVar6 + 0x48);
    }
    puVar3 = &uStack_340;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,puVar7,uVar1);
    uStack_318 = puVar3[1];
    uStack_320 = *puVar3;
    lStack_310 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar7 = &uStack_320;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&DAT_10f68f57e,1);
    uStack_2f8 = puVar7[1];
    uStack_300 = *puVar7;
    lStack_2f0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_300;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f64a952,0x1d);
    uStack_2d8 = puVar7[1];
    uStack_2e0 = *puVar7;
    lStack_2d0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    __ZNSt3__19to_stringEi(&pppppuStack_630,puVar6[100]);
    ppppppuVar2 = (undefined8 ******)pppppuStack_630;
    if (-1 < (char)bStack_619) {
      uStack_628 = (ulong)bStack_619;
      ppppppuVar2 = &pppppuStack_630;
    }
    puVar7 = &uStack_2e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,ppppppuVar2,uStack_628);
    uStack_2b8 = puVar7[1];
    uStack_2c0 = *puVar7;
    lStack_2b0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_2c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&DAT_10f68f57e,1);
    uStack_298 = puVar7[1];
    uStack_2a0 = *puVar7;
    lStack_290 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_2a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f64a970,0x20);
    uStack_278 = puVar7[1];
    uStack_280 = *puVar7;
    lStack_270 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    __ZNSt3__19to_stringEi(&pppppuStack_648,puVar6[0x65]);
    ppppppuVar2 = (undefined8 ******)pppppuStack_648;
    if (-1 < (char)bStack_631) {
      uStack_640 = (ulong)bStack_631;
      ppppppuVar2 = &pppppuStack_648;
    }
    puVar7 = &uStack_280;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,ppppppuVar2,uStack_640);
    uStack_258 = puVar7[1];
    uStack_260 = *puVar7;
    lStack_250 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_260;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&DAT_10f68f57e,1);
    uStack_238 = puVar7[1];
    uStack_240 = *puVar7;
    lStack_230 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_240;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f64a991,0x28);
    uStack_218 = puVar7[1];
    uStack_220 = *puVar7;
    lStack_210 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    __ZNSt3__19to_stringEi(&pppppuStack_660,puVar6[0x66]);
    ppppppuVar2 = (undefined8 ******)pppppuStack_660;
    if (-1 < (char)bStack_649) {
      uStack_658 = (ulong)bStack_649;
      ppppppuVar2 = &pppppuStack_660;
    }
    puVar7 = &uStack_220;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,ppppppuVar2,uStack_658);
    uStack_1f8 = puVar7[1];
    uStack_200 = *puVar7;
    lStack_1f0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_200;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&DAT_10f68f57e,1);
    uStack_1d8 = puVar7[1];
    uStack_1e0 = *puVar7;
    lStack_1d0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_1e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f64a9ba,0x13);
    uStack_1b8 = puVar7[1];
    uStack_1c0 = *puVar7;
    lStack_1b0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    __ZNSt3__19to_stringEi(&pppppuStack_678,*(undefined4 *)(puVar6 + 0x68));
    ppppppuVar2 = (undefined8 ******)pppppuStack_678;
    if (-1 < (char)bStack_661) {
      uStack_670 = (ulong)bStack_661;
      ppppppuVar2 = &pppppuStack_678;
    }
    puVar7 = &uStack_1c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,ppppppuVar2,uStack_670);
    uStack_198 = puVar7[1];
    uStack_1a0 = *puVar7;
    lStack_190 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_1a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&DAT_10f68f57e,1);
    uStack_178 = puVar7[1];
    uStack_180 = *puVar7;
    lStack_170 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_180;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f64a9ce,0xc);
    uStack_158 = puVar7[1];
    uStack_160 = *puVar7;
    lStack_150 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uVar1 = *(ulong *)(puVar6 + 0x90);
    puVar7 = *(undefined8 **)(puVar6 + 0x88);
    if (-1 < (char)puVar6[0x9f]) {
      uVar1 = (ulong)(byte)puVar6[0x9f];
      puVar7 = (undefined8 *)(puVar6 + 0x88);
    }
    puVar3 = &uStack_160;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,puVar7,uVar1);
    uStack_138 = puVar3[1];
    uStack_140 = *puVar3;
    lStack_130 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar7 = &uStack_140;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&DAT_10f68f57e,1);
    uStack_118 = puVar7[1];
    uStack_120 = *puVar7;
    lStack_110 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_120;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f64a9db,0xc);
    uStack_f8 = puVar7[1];
    uStack_100 = *puVar7;
    uStack_f0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uVar1 = *(ulong *)(puVar6 + 0xa8);
    puVar7 = *(undefined8 **)(puVar6 + 0xa0);
    if (-1 < (char)puVar6[0xb7]) {
      uVar1 = (ulong)(byte)puVar6[0xb7];
      puVar7 = (undefined8 *)(puVar6 + 0xa0);
    }
    puVar3 = &uStack_100;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,puVar7,uVar1);
    uStack_d8 = puVar3[1];
    uStack_e0 = *puVar3;
    uStack_d0 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar7 = &uStack_e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&DAT_10f68f57e,1);
    uStack_b8 = puVar7[1];
    uStack_c0 = *puVar7;
    uStack_b0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f64a9e8,0xe);
    uStack_98 = puVar7[1];
    uStack_a0 = *puVar7;
    uStack_90 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uVar1 = *(ulong *)(puVar6 + 0xc0);
    puVar7 = *(undefined8 **)(puVar6 + 0xb8);
    if (-1 < (char)puVar6[0xcf]) {
      uVar1 = (ulong)(byte)puVar6[0xcf];
      puVar7 = (undefined8 *)(puVar6 + 0xb8);
    }
    puVar3 = &uStack_a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,puVar7,uVar1);
    uStack_78 = puVar3[1];
    uStack_80 = *puVar3;
    uStack_70 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar7 = &uStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&DAT_10f68f57e,1);
    uStack_58 = puVar7[1];
    pppppuStack_60 = (undefined8 *****)*puVar7;
    uStack_50 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uVar1 = uStack_58;
    ppppppuVar2 = (undefined8 ******)pppppuStack_60;
    if (-1 < (long)uStack_50) {
      uVar1 = uStack_50 >> 0x38;
      ppppppuVar2 = &pppppuStack_60;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppuStack_690,ppppppuVar2,uVar1);
    if (lStack_110 < 0) {
      __ZdlPv(uStack_120);
    }
    if (lStack_130 < 0) {
      __ZdlPv(uStack_140);
    }
    if (lStack_150 < 0) {
      __ZdlPv(uStack_160);
    }
    if (lStack_170 < 0) {
      __ZdlPv(uStack_180);
    }
    if (lStack_190 < 0) {
      __ZdlPv(uStack_1a0);
    }
    if ((char)bStack_661 < '\0') {
      __ZdlPv(pppppuStack_678);
    }
    if (lStack_1b0 < 0) {
      __ZdlPv(uStack_1c0);
    }
    if (lStack_1d0 < 0) {
      __ZdlPv(uStack_1e0);
    }
    if (lStack_1f0 < 0) {
      __ZdlPv(uStack_200);
    }
    if ((char)bStack_649 < '\0') {
      __ZdlPv(pppppuStack_660);
    }
    if (lStack_210 < 0) {
      __ZdlPv(uStack_220);
    }
    if (lStack_230 < 0) {
      __ZdlPv(uStack_240);
    }
    if (lStack_250 < 0) {
      __ZdlPv(uStack_260);
    }
    if ((char)bStack_631 < '\0') {
      __ZdlPv(pppppuStack_648);
    }
    if (lStack_270 < 0) {
      __ZdlPv(uStack_280);
    }
    if (lStack_290 < 0) {
      __ZdlPv(uStack_2a0);
    }
    if (lStack_2b0 < 0) {
      __ZdlPv(uStack_2c0);
    }
    if ((char)bStack_619 < '\0') {
      __ZdlPv(pppppuStack_630);
    }
    if (lStack_2d0 < 0) {
      __ZdlPv(uStack_2e0);
    }
    if (lStack_2f0 < 0) {
      __ZdlPv(uStack_300);
    }
    if (lStack_310 < 0) {
      __ZdlPv(uStack_320);
    }
    if (lStack_330 < 0) {
      __ZdlPv(uStack_340);
    }
    if (lStack_350 < 0) {
      __ZdlPv(uStack_360);
    }
    if (lStack_370 < 0) {
      __ZdlPv(uStack_380);
    }
    if ((char)bStack_601 < '\0') {
      __ZdlPv(pppppuStack_618);
    }
    if (lStack_390 < 0) {
      __ZdlPv(uStack_3a0);
    }
    if (lStack_3b0 < 0) {
      __ZdlPv(uStack_3c0);
    }
    if (lStack_3d0 < 0) {
      __ZdlPv(uStack_3e0);
    }
    if (lStack_3f0 < 0) {
      __ZdlPv(uStack_400);
    }
    if (lStack_410 < 0) {
      __ZdlPv(uStack_420);
    }
    if (lStack_430 < 0) {
      __ZdlPv(uStack_440);
    }
    if (lStack_450 < 0) {
      __ZdlPv(uStack_460);
    }
    if (lStack_470 < 0) {
      __ZdlPv(uStack_480);
    }
    if (lStack_490 < 0) {
      __ZdlPv(uStack_4a0);
    }
    if ((char)bStack_5e9 < '\0') {
      __ZdlPv(pppppuStack_600);
    }
    if (lStack_4b0 < 0) {
      __ZdlPv(uStack_4c0);
    }
    if (lStack_4d0 < 0) {
      __ZdlPv(uStack_4e0);
    }
    if (lStack_4f0 < 0) {
      __ZdlPv(uStack_500);
    }
    if ((char)bStack_5d1 < '\0') {
      __ZdlPv(pppppuStack_5e8);
    }
    if (lStack_510 < 0) {
      __ZdlPv(uStack_520);
    }
    if (lStack_530 < 0) {
      __ZdlPv(uStack_540);
    }
    if ((char)bStack_5b9 < '\0') {
      __ZdlPv(pppppuStack_5d0);
    }
    if (lStack_550 < 0) {
      __ZdlPv(uStack_560);
    }
    if (lStack_570 < 0) {
      __ZdlPv(uStack_580);
    }
    if (lStack_590 < 0) {
      __ZdlPv(uStack_5a0);
    }
    if (cStack_5a1 < '\0') {
      __ZdlPv(auStack_5b8[0]);
    }
    ppppppuVar2 = (undefined8 ******)pppppuStack_690;
    if (-1 < lStack_680) {
      ppppppuVar2 = &pppppuStack_690;
    }
    func_0x00010ae06f08(1,8,&UNK_10f649d7d,&UNK_10f64a1eb,0x259,&UNK_10f64a224,in_x6,in_x7,
                        ppppppuVar2);
    if (lStack_680 < 0) {
      __ZdlPv(pppppuStack_690);
    }
  }
  if ((*(byte *)((long)param_1 + 0x161) & 1) == 0) {
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f649d7d,&UNK_10f64a1eb,0x25b,&UNK_10f64a24b);
    }
    iVar4 = *(int *)((long)param_1 + 0x1fc);
    if (iVar4 == 0) {
      func_0x000107c2b054(&pppppuStack_60,&UNK_10e4a81a4);
      FUN_10a2b386c(param_1,&pppppuStack_60);
      iVar4 = *(int *)((long)param_1 + 0x1fc);
    }
    if (iVar4 != 1) {
      return;
    }
    func_0x000107c2b054(&pppppuStack_60,&UNK_10e4a81de);
    FUN_10a2b4d8c(param_1,&pppppuStack_60);
    return;
  }
  FUN_10a2b33d8(param_1);
  if (*(char *)((long)param_1 + 0x1f7) < '\0') {
    if (param_1[0x3d] == 0) goto LAB_10a2b4844;
  }
  else if (*(char *)((long)param_1 + 0x1f7) == '\0') goto LAB_10a2b4844;
  puVar7 = (undefined8 *)param_1[0x38];
  if (puVar7 != (undefined8 *)0x0) {
    uVar5 = *puVar7;
    __ZNSt3__15mutex4lockEv(uVar5);
    FUN_10ad1a918(puVar7[2]);
    __ZNSt3__15mutex6unlockEv(uVar5);
  }
  (**(code **)(*param_1 + 0xb8))(param_1,param_1 + 0x3c,param_1 + 0x3f);
LAB_10a2b4844:
  *(undefined1 *)(param_1 + 0x2a) = 1;
  return;
}



/* Entry: 10a2b4d8c; end: 10a2b4f1f;  */

void FUN_10a2b4d8c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puStack_d0;
  long *plStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  int iStack_44;
  undefined8 uStack_40;
  long *plStack_38;
  
  uVar6 = *(undefined8 *)(param_1 + 0x220);
  plStack_38 = *(long **)(param_1 + 0x228);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_c0 = 1;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  lStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 1;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_4c = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  iStack_44 = 0;
  uStack_40 = uVar6;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_58);
  uStack_60 = 1;
  FUN_10a2c0718(&puStack_d0,uStack_5c,&uStack_58);
  FUN_10a2b1b80(uVar6,&puStack_d0);
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  if (iStack_44 < 0) {
    __ZdlPv(CONCAT44(uStack_54,uStack_58));
  }
  puStack_d0 = &uStack_88;
  FUN_10a2b6d84(&puStack_d0);
  puStack_d0 = &uStack_a0;
  FUN_10a2b6e7c(&puStack_d0);
  if (lStack_a8 < 0) {
    __ZdlPv(uStack_b8);
  }
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a2b4f20; end: 10a2b4f63;  */

void FUN_10a2b4f20(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar6;
  undefined8 uVar7;
  
  while( true ) {
    if ((int)param_2 == 1) {
      lVar4 = *(long *)(param_1 + 0x260);
      if (*(char *)(lVar4 + 0xe7) < '\0') {
        *(undefined8 *)(lVar4 + 0xd8) = 3;
        puVar5 = *(undefined4 **)(lVar4 + 0xd0);
      }
      else {
        puVar5 = (undefined4 *)(lVar4 + 0xd0);
        *(undefined1 *)(lVar4 + 0xe7) = 3;
      }
      *puVar5 = 0x766564;
    }
    lVar4 = *(long *)(param_1 + 0x1d0);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f64a44f,&UNK_10f64a5d0,0x29,&UNK_10f64a60f);
    }
    unaff_x19 = *(undefined1 **)(lVar4 + 0x20);
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    uVar6 = *(undefined8 *)(lVar4 + 0x18);
    if (unaff_x19 != (undefined1 *)0x0) {
      plVar1 = (long *)(unaff_x19 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x78);
    *(code **)((long)register0x00000008 + -0x78) = FUN_10a2c3338;
    *(undefined ***)((long)register0x00000008 + -0x70) = &PTR_FUN_110bbbad0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar7;
    *(undefined8 *)((long)register0x00000008 + -0x68) = uVar6;
    param_2 = (undefined1 *)((long)register0x00000008 + -0x78);
    FUN_10a2b5c88(lVar4);
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x70);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))();
    if (unaff_x19 != (undefined1 *)0x0) {
      unaff_x20 = unaff_x19;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))
              ((undefined1 *)((long)register0x00000008 + -0x70));
    if (unaff_x19 != (undefined1 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
    }
    unaff_x30 = FUN_10a2b508c;
    param_1 = unaff_x20;
    __Unwind_Resume();
    param_1 = param_1 + -0x120;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  }
  return;
}



/* Entry: 10a2b4f64; end: 10a2b508b;  */

void FUN_10a2b4f64(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar8;
  undefined8 uVar9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f64a44f,&UNK_10f64a5d0,0x29,&UNK_10f64a60f);
    }
    unaff_x19 = *(undefined1 **)(param_1 + 0x20);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    if (unaff_x19 != (undefined1 *)0x0) {
      plVar1 = (long *)(unaff_x19 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x78);
    *(code **)((long)register0x00000008 + -0x78) = FUN_10a2c3338;
    *(undefined ***)((long)register0x00000008 + -0x70) = &PTR_FUN_110bbbad0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = uVar8;
    iVar5 = (int)(undefined1 *)((long)register0x00000008 + -0x78);
    FUN_10a2b5c88(param_1);
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x70);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))();
    if (unaff_x19 != (undefined1 *)0x0) {
      unaff_x20 = unaff_x19;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))
              ((undefined1 *)((long)register0x00000008 + -0x70));
    if (unaff_x19 != (undefined1 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
    }
    unaff_x30 = FUN_10a2b508c;
    puVar4 = unaff_x20;
    __Unwind_Resume();
    if (iVar5 == 1) {
      lVar6 = *(long *)(puVar4 + 0x140);
      if (*(char *)(lVar6 + 0xe7) < '\0') {
        *(undefined8 *)(lVar6 + 0xd8) = 3;
        puVar7 = *(undefined4 **)(lVar6 + 0xd0);
      }
      else {
        puVar7 = (undefined4 *)(lVar6 + 0xd0);
        *(undefined1 *)(lVar6 + 0xe7) = 3;
      }
      *puVar7 = 0x766564;
    }
    param_1 = *(long *)(puVar4 + 0xb0);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  }
  return;
}



/* Entry: 10a2b508c; end: 10a2b5093;  */

void FUN_10a2b508c(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar6;
  undefined8 uVar7;
  
  while( true ) {
    if ((int)param_2 == 1) {
      lVar4 = *(long *)(param_1 + 0x140);
      if (*(char *)(lVar4 + 0xe7) < '\0') {
        *(undefined8 *)(lVar4 + 0xd8) = 3;
        puVar5 = *(undefined4 **)(lVar4 + 0xd0);
      }
      else {
        puVar5 = (undefined4 *)(lVar4 + 0xd0);
        *(undefined1 *)(lVar4 + 0xe7) = 3;
      }
      *puVar5 = 0x766564;
    }
    lVar4 = *(long *)(param_1 + 0xb0);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f64a44f,&UNK_10f64a5d0,0x29,&UNK_10f64a60f);
    }
    unaff_x19 = *(undefined1 **)(lVar4 + 0x20);
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    uVar6 = *(undefined8 *)(lVar4 + 0x18);
    if (unaff_x19 != (undefined1 *)0x0) {
      plVar1 = (long *)(unaff_x19 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x78);
    *(code **)((long)register0x00000008 + -0x78) = FUN_10a2c3338;
    *(undefined ***)((long)register0x00000008 + -0x70) = &PTR_FUN_110bbbad0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar7;
    *(undefined8 *)((long)register0x00000008 + -0x68) = uVar6;
    param_2 = (undefined1 *)((long)register0x00000008 + -0x78);
    FUN_10a2b5c88(lVar4);
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x70);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))();
    if (unaff_x19 != (undefined1 *)0x0) {
      unaff_x20 = unaff_x19;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))
              ((undefined1 *)((long)register0x00000008 + -0x70));
    if (unaff_x19 != (undefined1 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x19);
    }
    unaff_x30 = FUN_10a2b508c;
    param_1 = unaff_x20;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  }
  return;
}



/* Entry: 10a2b5094; end: 10a2b5173;  */

void FUN_10a2b5094(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined4 auStack_38 [2];
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x1e0);
  auStack_38[0] = *param_3;
  *(undefined4 *)(param_1 + 0x1f8) = auStack_38[0];
  puVar2 = *(undefined8 **)(param_1 + 0x1c0);
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_50,*param_2,param_2[1]);
      auStack_38[0] = *param_3;
    }
    else {
      uStack_48 = param_2[1];
      uStack_50 = *param_2;
      lStack_40 = param_2[2];
    }
    uVar1 = *puVar2;
    __ZNSt3__15mutex4lockEv(uVar1);
    FUN_10ad1bbf0(puVar2[2],&uStack_50,auStack_38);
    __ZNSt3__15mutex6unlockEv(uVar1);
    if (lStack_40 < 0) {
      __ZdlPv(uStack_50);
    }
  }
  return;
}



/* Entry: 10a2b5174; end: 10a2b517b;  */

void FUN_10a2b5174(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined4 auStack_38 [2];
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0xc0);
  auStack_38[0] = *param_3;
  *(undefined4 *)(param_1 + 0xd8) = auStack_38[0];
  puVar2 = *(undefined8 **)(param_1 + 0xa0);
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_50,*param_2,param_2[1]);
      auStack_38[0] = *param_3;
    }
    else {
      uStack_48 = param_2[1];
      uStack_50 = *param_2;
      lStack_40 = param_2[2];
    }
    uVar1 = *puVar2;
    __ZNSt3__15mutex4lockEv(uVar1);
    FUN_10ad1bbf0(puVar2[2],&uStack_50,auStack_38);
    __ZNSt3__15mutex6unlockEv(uVar1);
    if (lStack_40 < 0) {
      __ZdlPv(uStack_50);
    }
  }
  return;
}



/* Entry: 10a2b517c; end: 10a2b5227;  */

void FUN_10a2b517c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x150) == '\x01') {
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f649d7d,&UNK_10f64a28c,0x28c,&UNK_10f64a2d8);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x1c0);
    uVar2 = *puVar3;
    __ZNSt3__15mutex4lockEv(uVar2);
    uVar1 = puVar3[2];
    *(undefined1 *)(param_1 + 0x151) = 1;
    FUN_10ad1c024(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar2);
    return;
  }
  return;
}



/* Entry: 10a2b5228; end: 10a2b522f;  */

void FUN_10a2b5228(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f649d7d,&UNK_10f64a28c,0x28c,&UNK_10f64a2d8);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x98);
    uVar2 = *puVar3;
    __ZNSt3__15mutex4lockEv(uVar2);
    uVar1 = puVar3[2];
    *(undefined1 *)(param_1 + 0x29) = 1;
    FUN_10ad1c024(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar2);
    return;
  }
  return;
}



/* Entry: 10a2b5230; end: 10a2b52d7;  */

void FUN_10a2b5230(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x150) == '\x01') {
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f649d7d,&UNK_10f64a2fc,0x297,&UNK_10f64a348);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x1c0);
    uVar2 = *puVar3;
    __ZNSt3__15mutex4lockEv(uVar2);
    uVar1 = puVar3[2];
    *(undefined1 *)(param_1 + 0x151) = 0;
    func_0x00010ad1c15c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar2);
    return;
  }
  return;
}



/* Entry: 10a2b52d8; end: 10a2b52e7;  */

void FUN_10a2b52d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f649d7d,&UNK_10f64a2fc,0x297,&UNK_10f64a348);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x98);
    uVar2 = *puVar3;
    __ZNSt3__15mutex4lockEv(uVar2);
    uVar1 = puVar3[2];
    *(undefined1 *)(param_1 + 0x29) = 0;
    func_0x00010ad1c15c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar2);
    return;
  }
  return;
}



/* Entry: 10a2b52e8; end: 10a2b575b;  */

undefined8 FUN_10a2b52e8(long param_1,long *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 in_x7;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 *apuStack_188 [2];
  char cStack_171;
  char cStack_170;
  undefined8 *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  long alStack_140 [7];
  undefined8 uStack_108;
  code *pcStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [56];
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_190 = param_1;
  FUN_10a1ccb30(apuStack_188,param_4);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&puStack_168,*param_2,param_2[1]);
  }
  else {
    lStack_160 = param_2[1];
    puStack_168 = (undefined8 *)*param_2;
    lStack_158 = param_2[2];
  }
  FUN_10a2b575c(&uStack_1a8,*(undefined8 *)(param_1 + 0x140),&lStack_190);
  uVar2 = param_3[1];
  puVar10 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar10 = param_3;
  }
  FUN_10a3bf330(&puStack_150,puVar10,uVar2);
  lVar13 = *(long *)(*(long *)(param_1 + 0x1a8) + 0x100);
  plVar7 = (long *)0x138;
  __Znwm();
  puStack_c0 = puStack_150;
  plVar12 = plVar7 + 1;
  *plVar12 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110b9f3b0;
  plVar1 = plVar7 + 3;
  uVar2 = param_2[1];
  plVar8 = (long *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    plVar8 = param_2;
  }
  puStack_150 = (undefined8 *)0x0;
  plStack_b8 = (long *)uStack_148;
  (**(code **)(alStack_140[0] + 0x10))(auStack_b0,alStack_140);
  uStack_78 = uStack_108;
  uVar3 = *(ulong *)(lVar13 + 0x210);
  lVar6 = *(long *)(lVar13 + 0x208);
  if (-1 < (char)*(byte *)(lVar13 + 0x21f)) {
    uVar3 = (ulong)*(byte *)(lVar13 + 0x21f);
    lVar6 = lVar13 + 0x208;
  }
  pcStack_100 = FUN_10a2c302c;
  ppuStack_f8 = &PTR_FUN_110bbb928;
  uStack_f0 = uStack_1a8;
  uStack_e0 = uStack_198;
  uStack_e8 = uStack_1a0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  FUN_10a23708c(plVar1,plVar8,uVar2,&UNK_10f647b49,4,&puStack_c0,4,in_x7,lVar6,uVar3,&pcStack_100);
  (*(code *)*ppuStack_f8)(&ppuStack_f8);
  FUN_10a042634(&puStack_c0);
  plStack_1b8 = plVar1;
  plStack_1b0 = plVar7;
  FUN_10a042634(&puStack_150);
  plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x1a8) + 0x100) + 0x1c8);
  (**(code **)(*plVar8 + 0x60))();
  puStack_c0 = (undefined8 *)0x0;
  plStack_b8 = (long *)0x0;
  plVar9 = (long *)plVar8[1];
  if (((plVar9 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar9, plVar9 == (long *)0x0)) ||
     (puStack_c0 = (undefined8 *)*plVar8, puStack_c0 == (undefined8 *)0x0)) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f649d7d,&UNK_10f64a36c,0x2e0,&UNK_10f64a3f8);
    }
    if ((*(char *)(param_4 + 0x18) == '\x01') && (*(long *)(param_1 + 0x1a8) != 0)) {
      FUN_10a76bd40(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x8d8),param_4,1);
    }
    uVar11 = 0;
  }
  else {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plStack_1c8 = plVar1;
    plStack_1c0 = plVar7;
    (**(code **)*puStack_c0)(puStack_c0,&plStack_1c8);
    plVar1 = plStack_1c0;
    if (plStack_1c0 != (long *)0x0) {
      plVar8 = plStack_1c0 + 1;
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
        (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    uVar11 = 1;
  }
  plVar1 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar8 = plStack_b8 + 1;
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
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_1b0;
  if (plStack_1b0 != (long *)0x0) {
    plVar8 = plStack_1b0 + 1;
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
      (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar10 = &uStack_1a8;
  FUN_10a2b5984(puVar10);
  if (lStack_158 < 0) {
    puVar10 = puStack_168;
    __ZdlPv(puStack_168);
  }
  if ((cStack_170 == '\x01') && (cStack_171 < '\0')) {
    __ZdlPv(apuStack_188[0]);
    puVar10 = apuStack_188[0];
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    FUN_10a05bd88(&plStack_1c8);
    func_0x00010a05a8c4(&puStack_c0);
    FUN_10a05bd88(&plStack_1b8);
    FUN_10a2b5984(&uStack_1a8);
    do {
      func_0x00010a2b5a04(&lStack_190);
      __Unwind_Resume(puVar10);
    } while( true );
  }
  return uVar11;
}



/* Entry: 10a2b575c; end: 10a2b5983;  */

long * FUN_10a2b575c(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_c0;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  char cStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  uStack_c0 = *param_3;
  FUN_10a1ccb30(auStack_b8,param_3 + 1);
  if (*(char *)((long)param_3 + 0x3f) < '\0') {
    func_0x000107c3192c(&uStack_98,param_3[5],param_3[6]);
  }
  else {
    uStack_90 = param_3[6];
    uStack_98 = param_3[5];
    lStack_88 = param_3[7];
  }
  ppuStack_80 = &PTR_SUB_110bbb3b8;
  puVar5 = (undefined8 *)0x40;
  __Znwm();
  *puVar5 = uStack_c0;
  FUN_10a1ccb30(puVar5 + 1,auStack_b8);
  if (lStack_88 < 0) {
    func_0x000107c3192c(puVar5 + 5,uStack_98,uStack_90);
  }
  else {
    puVar5[6] = uStack_90;
    puVar5[5] = uStack_98;
    puVar5[7] = lStack_88;
  }
  plVar6 = (long *)0x48;
  puStack_78 = puVar5;
  __Znwm();
  plVar6[2] = (long)&PTR_SUB_110bbb3b8;
  plVar6[3] = (long)puVar5;
  puStack_78 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)param_2[0xb];
  lVar8 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  *puVar2 = plVar6;
  param_2[0xb] = (long)plVar6;
  param_2[0xc] = lVar8 + 1;
  func_0x00010a2b808c(&ppuStack_80);
  if (lStack_88 < 0) {
    __ZdlPv(uStack_98);
  }
  if ((cStack_a0 == '\x01') && (cStack_a1 < '\0')) {
    __ZdlPv(auStack_b8[0]);
  }
  lVar8 = param_2[0xb];
  plVar6 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  lVar10 = param_2[1];
  lVar9 = *param_2;
  if (param_2[1] != 0) {
    plVar7 = (long *)(param_2[1] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar8;
  param_1[2] = lVar10;
  param_1[1] = lVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar6;
  }
  ___stack_chk_fail();
  if ((*(char *)(lVar8 + 0x20) == '\x01') && (*(char *)(lVar8 + 0x1f) < '\0')) {
    __ZdlPv(puVar5[1]);
  }
  __ZdlPv(lVar8);
  func_0x00010a2b8040(&uStack_c0);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar7 = (long *)plVar6[2];
  if (plVar7 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar7 != (long *)0x0) {
      if (plVar6[1] != 0) {
        FUN_10a05c0fc(plVar6[1],*plVar6);
      }
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (plVar6[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar6;
}



/* Entry: 10a2b5984; end: 10a2b5a4f;  */

undefined8 * FUN_10a2b5984(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
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
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a2b5a50; end: 10a2b5c2b;  */

undefined8 *
FUN_10a2b5a50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *extraout_x8;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  long lStack_48;
  
  puVar5 = &uStack_90;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1 + 1;
  param_1[2] = 0;
  *puVar8 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_110bbb190;
  puVar4 = param_1;
  FUN_109d1a80c();
  uStack_90 = *puVar4;
  puStack_88 = &UNK_1053a6a3c;
  ppuStack_80 = &PTR_DAT_110ae9180;
  func_0x000109d18d1c(param_1 + 5,&UNK_10f64a43f,0xf,&uStack_90);
  func_0x0001092ba41c(&uStack_90);
  *(undefined4 *)(param_1 + 0x1c) = 300000;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x1d,*param_2,param_2[1]);
  }
  else {
    uVar10 = param_2[1];
    uVar9 = *param_2;
    param_1[0x1f] = param_2[2];
    param_1[0x1e] = uVar10;
    param_1[0x1d] = uVar9;
  }
  lVar6 = param_3[1];
  uVar9 = *param_3;
  param_1[0x21] = param_3[1];
  param_1[0x20] = uVar9;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a05a5d4(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = param_4;
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    puVar5 = (undefined8 *)0x1;
    func_0x00010ae06f08(1,8,&UNK_10f64a44f,&UNK_10f64a48b,0x1c,&UNK_10f64a516);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000109d18f34(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar8);
  __Unwind_Resume();
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f64a44f,&UNK_10f64a54a,0x20,&UNK_10f64a597,param_7,param_8,puVar8
                        ,param_1,&stack0xfffffffffffffff0,FUN_10a2b5c2c);
  }
  puVar4 = (undefined8 *)((long)puVar5 + 0x28);
  *(undefined1 *)((long)puVar5 + 0x58) = 1;
  lVar6 = *(long *)((long)puVar5 + 0x68);
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar7 = *plVar1;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        puVar4 = (undefined8 *)(lVar6 + 0x18);
        FUN_109d1b4dc(puVar4);
        goto LAB_109d191f0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar7 >> 1 & 1) != 0) {
LAB_109d191f0:
      lVar6 = *(long *)((long)puVar5 + 0x70);
      *extraout_x8 = lVar6;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return puVar4;
    }
  } while( true );
}



/* Entry: 10a2b5c2c; end: 10a2b5c87;  */

void FUN_10a2b5c2c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f64a44f,&UNK_10f64a54a,0x20,&UNK_10f64a597);
  }
  *(undefined1 *)(param_2 + 0x58) = 1;
  lVar4 = *(long *)(param_2 + 0x68);
  plVar1 = (long *)(lVar4 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar4 + 0x18);
        goto LAB_109d191f0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_109d191f0:
      lVar4 = *(long *)(param_2 + 0x70);
      *param_1 = lVar4;
      if (lVar4 != 0) {
        plVar1 = (long *)(lVar4 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  } while( true );
}



/* Entry: 10a2b5c88; end: 10a2b6027;  */

void FUN_10a2b5c88(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 ****ppppuVar4;
  long *plVar5;
  long *plVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 ***pppuStack_228;
  ulong uStack_220;
  byte bStack_211;
  undefined1 auStack_210 [8];
  undefined8 uStack_208;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  undefined8 **ppuStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  code **ppcStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  long alStack_170 [7];
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 *apuStack_120 [7];
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_128 = *param_2;
  lStack_130 = param_1;
  (**(code **)(param_2[1] + 0x18))(apuStack_120);
  FUN_10a2b6028(&puStack_180);
  FUN_10a2b6a1c(&uStack_198,*(undefined8 *)(param_1 + 0x110),&lStack_130);
  plVar5 = (long *)0x138;
  __Znwm();
  puStack_a8 = puStack_180;
  plVar11 = plVar5 + 1;
  *plVar11 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110b9f3b0;
  plVar1 = plVar5 + 3;
  puStack_180 = (undefined8 *)0x0;
  plStack_a0 = (long *)uStack_178;
  (**(code **)(alStack_170[0] + 0x10))(auStack_98,alStack_170);
  uStack_60 = uStack_138;
  uStack_1c8 = *(ulong *)(param_1 + 0xf0);
  lStack_1d0 = *(long *)(param_1 + 0xe8);
  if (-1 < (char)*(byte *)(param_1 + 0xff)) {
    uStack_1c8 = (ulong)*(byte *)(param_1 + 0xff);
    lStack_1d0 = param_1 + 0xe8;
  }
  ppcStack_1c0 = &pcStack_e8;
  pcStack_e8 = FUN_10a2c3b28;
  ppuStack_e0 = &PTR_FUN_110bbbb28;
  uStack_d8 = uStack_198;
  uStack_c8 = uStack_188;
  uStack_d0 = uStack_190;
  uStack_190 = 0;
  uStack_188 = 0;
  FUN_10a23708c(plVar1,&UNK_10e4a82b2,0x1c,&UNK_10f647b49,4,&puStack_a8,1);
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  FUN_10a042634(&puStack_a8);
  puStack_a8 = (undefined8 *)0x0;
  plStack_a0 = (long *)0x0;
  plVar6 = *(long **)(param_1 + 0x108);
  plStack_1a8 = plVar1;
  plStack_1a0 = plVar5;
  if (((plVar6 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_a0 = plVar6, plVar6 == (long *)0x0)) ||
     (puVar10 = *(undefined8 **)(param_1 + 0x100), puStack_a8 = puVar10,
     puVar10 == (undefined8 *)0x0)) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f64a44f,&UNK_10f64a769,0xd5,&UNK_10f64a827);
    }
  }
  else {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f64a44f,&UNK_10f64a769,0xd2,&UNK_10f64a80d);
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_1b8 = plVar1;
    plStack_1b0 = plVar5;
    (**(code **)*puVar10)(puVar10,&plStack_1b8);
    plVar11 = plStack_1b0;
    if (plStack_1b0 != (long *)0x0) {
      plVar6 = plStack_1b0 + 1;
      do {
        lVar9 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
  }
  plVar11 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar6 = plStack_a0 + 1;
    do {
      lVar9 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_1a0;
  if (plStack_1a0 != (long *)0x0) {
    plVar6 = plStack_1a0 + 1;
    do {
      lVar9 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  FUN_10a2b6b7c(&uStack_198);
  FUN_10a042634(&puStack_180);
  ppuVar7 = apuStack_120;
  (*(code *)*apuStack_120[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&plStack_1b8);
  func_0x00010a05a8c4(&puStack_a8);
  FUN_10a05bd88(&plStack_1a8);
  FUN_10a2b6b7c(&uStack_198);
  FUN_10a042634(&puStack_180);
  (*(code *)*apuStack_120[0])(apuStack_120);
  ppuVar8 = ppuVar7;
  __Unwind_Resume(ppuVar7);
  pcStack_1d8 = FUN_10a2b6028;
  auStack_210[0] = 0;
  uStack_208 = 0;
  plStack_200 = &lStack_130;
  plStack_1f8 = plVar1;
  plStack_1f0 = plVar5;
  ppuStack_1e8 = ppuVar7;
  puStack_1e0 = &stack0xfffffffffffffff0;
  FUN_10a0c32e4(&pppuStack_228,auStack_210,0xffffffff,0x20,0,0);
  ppppuVar4 = (undefined8 ****)pppuStack_228;
  if (-1 < (char)bStack_211) {
    uStack_220 = (ulong)bStack_211;
    ppppuVar4 = &pppuStack_228;
  }
  FUN_10a3bf330(ppuVar8,ppppuVar4,uStack_220);
  if ((char)bStack_211 < '\0') {
    __ZdlPv(pppuStack_228);
  }
  func_0x000109380ffc(&uStack_208,auStack_210[0]);
  return;
}



/* Entry: 10a2b6028; end: 10a2b60eb;  */

void FUN_10a2b6028(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  auStack_40[0] = 0;
  uStack_38 = 0;
  FUN_10a0c32e4(&ppuStack_58,auStack_40,0xffffffff,0x20,0,0);
  pppuVar1 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &ppuStack_58;
  }
  FUN_10a3bf330(param_1,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  func_0x000109380ffc(&uStack_38,auStack_40[0]);
  return;
}



/* Entry: 10a2b60ec; end: 10a2b64af;  */

/* WARNING: Removing unreachable block (ram,0x00010a2b6210) */

void FUN_10a2b60ec(long param_1,undefined4 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  lVar11 = *(long *)(param_1 + 0x20);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  if (lVar11 != 0) {
    plVar12 = (long *)(lVar11 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5 = (undefined8 *)0x88;
  __Znwm();
  *puVar5 = FUN_10a2c5078;
  puVar5[1] = FUN_10a2c52dc;
  func_0x0001092ba17c(puVar5 + 2);
  plVar12 = (long *)puVar5[7];
  if (plVar12 != (long *)0x0) {
    plVar7 = plVar12 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5[9] = param_1;
  puVar5[0xb] = uVar14;
  puVar5[10] = uVar8;
  *(undefined4 *)(puVar5 + 0xc) = param_2;
  puVar5[0xd] = param_1 + 0x28;
  *(undefined1 *)(puVar5 + 0xe) = 0;
  *(undefined1 *)(puVar5 + 0x10) = 0;
  puVar6 = puVar5 + 0xd;
  func_0x0001092ba064(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10a2b85ec(puVar5 + 0xf,puVar5 + 9);
    puVar5[0xd] = puVar5[0xf];
    plVar7 = (long *)(puVar5[0xf] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[0xd] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x10) = 1;
      lVar13 = puVar5[0xd];
      plVar7 = (long *)(lVar13 + 0x10);
      uVar8 = puVar5[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_58 = 0;
            puStack_50 = puVar5;
            uStack_48 = uVar8;
            func_0x000109d1b588(lVar13 + 0x18,&uStack_58);
            *(undefined8 *)(lVar13 + 0x10) = 0;
            goto joined_r0x00010a2b6354;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[0xd];
    if (((uint)*(undefined8 *)(puVar5[0xd] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar7 + 0x12);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2b639c);
      (*pcVar4)();
    }
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)puVar5[0xf];
    if (plVar7 != (long *)0x0) {
      puVar1 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar9 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    func_0x0001092ba100(puVar5 + 2);
    if (puVar5[0xb] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    func_0x000109d1a1d0(puVar5 + 2);
    __ZdlPv(puVar5);
  }
joined_r0x00010a2b6354:
  if (plVar12 != (long *)0x0) {
    puVar1 = (ulong *)(plVar12 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
  }
  if (lVar11 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(lVar11);
  return;
}



/* Entry: 10a2b64b0; end: 10a2b682f;  */

long ** FUN_10a2b64b0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *apuStack_240 [7];
  long lStack_208;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  long alStack_158 [7];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *aplStack_110 [7];
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_98;
  long *plStack_90;
  undefined1 auStack_88 [56];
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = *param_2;
  (**(code **)(param_2[1] + 0x10))(aplStack_110);
  FUN_10a2b6028(&puStack_168);
  FUN_10a2b6830(&uStack_180,*(undefined8 *)(param_1 + 0x110),&uStack_118);
  plVar4 = (long *)0x138;
  __Znwm();
  puStack_98 = puStack_168;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110b9f3b0;
  plVar13 = plVar4 + 3;
  puStack_168 = (undefined8 *)0x0;
  plStack_90 = (long *)uStack_160;
  (**(code **)(alStack_158[0] + 0x10))(auStack_88,alStack_158);
  uStack_50 = uStack_120;
  pcStack_d8 = FUN_10a2c3614;
  ppuStack_d0 = &PTR_FUN_110bbbb10;
  uStack_c8 = uStack_180;
  uStack_b8 = uStack_170;
  uStack_c0 = uStack_178;
  uStack_178 = 0;
  uStack_170 = 0;
  pplVar8 = (long **)&UNK_10e4a8299;
  puVar9 = (undefined8 *)0x18;
  FUN_10a23708c(plVar13,&UNK_10e4a8299,0x18,&UNK_10f647b49,4,&puStack_98,1);
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  FUN_10a042634(&puStack_98);
  puStack_98 = (undefined8 *)0x0;
  plStack_90 = (long *)0x0;
  plVar5 = *(long **)(param_1 + 0x108);
  plStack_190 = plVar13;
  plStack_188 = plVar4;
  if (((plVar5 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_90 = plVar5, plVar5 == (long *)0x0)) ||
     (puVar12 = *(undefined8 **)(param_1 + 0x100), puStack_98 = puVar12,
     puVar12 == (undefined8 *)0x0)) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      puVar9 = (undefined8 *)&UNK_10f64a44f;
      pplVar8 = (long **)0x1;
      func_0x00010ae06f08(0,1,&UNK_10f64a44f,&UNK_10f64a6a0,0x91,&UNK_10f64a721);
    }
  }
  else {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      puVar9 = (undefined8 *)&UNK_10f64a44f;
      func_0x00010ae06f08(1,4,&UNK_10f64a44f,&UNK_10f64a6a0,0x8e,&UNK_10f64a707);
    }
    plStack_190 = (long *)0x0;
    plStack_188 = (long *)0x0;
    pplVar8 = &plStack_1a0;
    plStack_1a0 = plVar13;
    plStack_198 = plVar4;
    (**(code **)*puVar12)(puVar12);
    plVar13 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar4 = plStack_198 + 1;
      do {
        lVar11 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
  }
  plVar13 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar4 = plStack_90 + 1;
    do {
      lVar11 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  plVar13 = plStack_188;
  if (plStack_188 != (long *)0x0) {
    plVar4 = plStack_188 + 1;
    do {
      lVar11 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  FUN_10a2b699c(&uStack_180);
  FUN_10a042634(&puStack_168);
  pplVar6 = aplStack_110;
  (*(code *)*aplStack_110[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pplVar6;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&plStack_1a0);
  func_0x00010a05a8c4(&puStack_98);
  FUN_10a05bd88(&plStack_190);
  FUN_10a2b699c(&uStack_180);
  FUN_10a042634(&puStack_168);
  (*(code *)*aplStack_110[0])(aplStack_110);
  __Unwind_Resume();
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(pplVar8 + 2);
  uVar10 = *puVar9;
  (**(code **)(puVar9[1] + 0x10))(apuStack_240,puVar9 + 1);
  puVar9 = (undefined8 *)0x40;
  __Znwm();
  *puVar9 = uVar10;
  (*(code *)apuStack_240[0][2])(puVar9 + 1,apuStack_240);
  plVar5 = (long *)0x48;
  __Znwm();
  plVar5[2] = (long)&PTR_FUN_110bbb440;
  plVar5[3] = (long)puVar9;
  plVar13 = pplVar8[0xb];
  plVar4 = pplVar8[0xc];
  *plVar5 = (long)(pplVar8 + 10);
  plVar5[1] = (long)plVar13;
  *plVar13 = (long)plVar5;
  pplVar8[0xb] = plVar5;
  pplVar8[0xc] = (long *)((long)plVar4 + 1);
  (*(code *)*apuStack_240[0])(apuStack_240);
  plVar13 = pplVar8[0xb];
  pplVar7 = pplVar8 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  plVar5 = pplVar8[1];
  plVar4 = *pplVar8;
  if (pplVar8[1] != (long *)0x0) {
    plVar1 = pplVar8[1] + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *pplVar6 = plVar13;
  pplVar6[2] = plVar5;
  pplVar6[1] = plVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
    ___stack_chk_fail();
    (**(code **)plVar13[1])(puVar9 + 1);
    __ZdlPv(plVar13);
    (*(code *)*apuStack_240[0])(apuStack_240);
    __ZNSt3__115recursive_mutex6unlockEv(pplVar8 + 2);
    __Unwind_Resume();
    plVar13 = pplVar7[2];
    if (plVar13 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar13 != (long *)0x0) {
        if (pplVar7[1] != (long *)0x0) {
          FUN_10a05c0fc(pplVar7[1],*pplVar7);
        }
        plVar4 = plVar13 + 1;
        do {
          lVar11 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      if (pplVar7[2] != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    return pplVar7;
  }
  return pplVar7;
}



/* Entry: 10a2b6830; end: 10a2b699b;  */

long * FUN_10a2b6830(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  uVar8 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_80,param_3 + 1);
  puVar5 = (undefined8 *)0x40;
  __Znwm();
  *puVar5 = uVar8;
  (*(code *)apuStack_80[0][2])(puVar5 + 1,apuStack_80);
  plVar6 = (long *)0x48;
  __Znwm();
  plVar6[2] = (long)&PTR_FUN_110bbb440;
  plVar6[3] = (long)puVar5;
  puVar2 = (undefined8 *)param_2[0xb];
  lVar9 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar2;
  *puVar2 = plVar6;
  param_2[0xb] = (long)plVar6;
  param_2[0xc] = lVar9 + 1;
  (*(code *)*apuStack_80[0])(apuStack_80);
  lVar9 = param_2[0xb];
  plVar6 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  lVar11 = param_2[1];
  lVar10 = *param_2;
  if (param_2[1] != 0) {
    plVar7 = (long *)(param_2[1] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar9;
  param_1[2] = lVar11;
  param_1[1] = lVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar6;
  }
  ___stack_chk_fail();
  (*(code *)**(undefined8 **)(lVar9 + 8))(puVar5 + 1);
  __ZdlPv(lVar9);
  (*(code *)*apuStack_80[0])(apuStack_80);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar7 = (long *)plVar6[2];
  if (plVar7 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar7 != (long *)0x0) {
      if (plVar6[1] != 0) {
        FUN_10a05c0fc(plVar6[1],*plVar6);
      }
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (plVar6[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar6;
}



/* Entry: 10a2b699c; end: 10a2b6a1b;  */

undefined8 * FUN_10a2b699c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
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
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a2b6a1c; end: 10a2b6b7b;  */

long * FUN_10a2b6a1c(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  uVar2 = *param_3;
  uVar3 = param_3[1];
  (**(code **)(param_3[2] + 0x10))(apuStack_70,param_3 + 2);
  puVar6 = (undefined8 *)0x48;
  __Znwm();
  *puVar6 = uVar2;
  puVar6[1] = uVar3;
  (*(code *)apuStack_70[0][2])(puVar6 + 2,apuStack_70);
  plVar7 = (long *)0x48;
  __Znwm();
  plVar7[2] = (long)&PTR_FUN_110bbb458;
  plVar7[3] = (long)puVar6;
  puVar6 = (undefined8 *)param_2[0xb];
  lVar9 = param_2[0xc];
  *plVar7 = (long)(param_2 + 10);
  plVar7[1] = (long)puVar6;
  *puVar6 = plVar7;
  param_2[0xb] = (long)plVar7;
  param_2[0xc] = lVar9 + 1;
  (*(code *)*apuStack_70[0])(apuStack_70);
  lVar9 = param_2[0xb];
  plVar7 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  lVar11 = param_2[1];
  lVar10 = *param_2;
  if (param_2[1] != 0) {
    plVar8 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = lVar9;
  param_1[2] = lVar11;
  param_1[1] = lVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar7;
  }
  ___stack_chk_fail();
  (*(code *)**(undefined8 **)(lVar9 + 0x10))(lVar9 + 0x10);
  __ZdlPv(lVar9);
  (*(code *)*apuStack_70[0])(apuStack_70);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar8 = (long *)plVar7[2];
  if (plVar8 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar8 != (long *)0x0) {
      if (plVar7[1] != 0) {
        FUN_10a05c0fc(plVar7[1],*plVar7);
      }
      plVar1 = plVar8 + 1;
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (plVar7[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return plVar7;
}



/* Entry: 10a2b6b7c; end: 10a2b6bfb;  */

undefined8 * FUN_10a2b6b7c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
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
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a2b6bfc; end: 10a2b6c0b;  */

undefined8 FUN_10a2b6bfc(void)

{
  return 1;
}



/* Entry: 10a2b6c0c; end: 10a2b6cfb;  */

undefined8 * FUN_10a2b6c0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbb190;
  func_0x00010a05a86c(param_1 + 0x22);
  if (param_1[0x21] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0xff) < '\0') {
    __ZdlPv(param_1[0x1d]);
  }
  func_0x000109d18f34(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a2b6cfc; end: 10a2b6d0b;  */

void FUN_10a2b6cfc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2b6d00);
  (*pcVar1)();
}



/* Entry: 10a2b6d0c; end: 10a2b6d67;  */

void FUN_10a2b6d0c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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



/* Entry: 10a2b6d68; end: 10a2b6d83;  */

void FUN_10a2b6d68(void)

{
  return;
}



/* Entry: 10a2b6d84; end: 10a2b6df3;  */

void FUN_10a2b6d84(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x38;
        FUN_10a2b6df4(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a2b6df4; end: 10a2b6e7b;  */

long FUN_10a2b6df4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
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



/* Entry: 10a2b6e7c; end: 10a2b6eeb;  */

void FUN_10a2b6e7c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0xa0;
        FUN_10a2b6eec(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a2b6eec; end: 10a2b6f6f;  */

void FUN_10a2b6eec(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x9f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x88));
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  lStack_28 = param_1 + 0x38;
  FUN_10a0426d8(&lStack_28);
  lStack_28 = param_1 + 0x20;
  FUN_10a2b6f70(&lStack_28);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return;
}



/* Entry: 10a2b6f70; end: 10a2b6fdf;  */

void FUN_10a2b6f70(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x30;
        FUN_10a2b6fe0(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a2b6fe0; end: 10a2b7023;  */

void FUN_10a2b6fe0(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a2b7024; end: 10a2b7037;  */

undefined1  [16] FUN_10a2b7024(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010a2b70b8();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a2b7038; end: 10a2b710f;  */

undefined1  [16] FUN_10a2b7038(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a2b70b8();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a2b7110; end: 10a2b711f;  */

void FUN_10a2b7110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbb278;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2b7120; end: 10a2b713f;  */

void FUN_10a2b7120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbb278;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2b7140; end: 10a2b715f;  */

void FUN_10a2b7140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a2b7148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a2b7160; end: 10a2b717f;  */

void FUN_10a2b7160(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bbb2c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2b7180; end: 10a2b718f;  */

void FUN_10a2b7180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a2b7188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a2b7190; end: 10a2b72db;  */

undefined8 * FUN_10a2b7190(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c367d0;
  func_0x00010a2b7284(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a2b72dc; end: 10a2b72ef;  */

long * FUN_10a2b72dc(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x10;
    FUN_10a2bfdb0();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a2b72f0; end: 10a2b743f;  */

long * FUN_10a2b72f0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10a2bfdb0();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a2b7440; end: 10a2b7453;  */

void FUN_10a2b7440(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined4 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined4 *)0xaaaaaaaaaaaaaaa < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        *param_3 = *puVar2;
        uVar3 = *(undefined8 *)(puVar2 + 2);
        *(undefined8 *)(param_3 + 4) = *(undefined8 *)(puVar2 + 4);
        *(undefined8 *)(param_3 + 2) = uVar3;
        *(undefined8 *)(puVar2 + 2) = 0;
        *(undefined8 *)(puVar2 + 4) = 0;
        puVar2 = puVar2 + 6;
        param_3 = param_3 + 6;
      } while (puVar2 != param_2);
      do {
        func_0x00010a2b74fc(puVar1 + 2);
        puVar1 = puVar1 + 6;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x18);
  return;
}



/* Entry: 10a2b7454; end: 10a2b7653;  */

void FUN_10a2b7454(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if ((undefined4 *)0xaaaaaaaaaaaaaaa < param_1) {
    func_0x000109ffded8();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        *param_3 = *puVar1;
        uVar2 = *(undefined8 *)(puVar1 + 2);
        *(undefined8 *)(param_3 + 4) = *(undefined8 *)(puVar1 + 4);
        *(undefined8 *)(param_3 + 2) = uVar2;
        *(undefined8 *)(puVar1 + 2) = 0;
        *(undefined8 *)(puVar1 + 4) = 0;
        puVar1 = puVar1 + 6;
        param_3 = param_3 + 6;
      } while (puVar1 != param_2);
      do {
        func_0x00010a2b74fc(param_1 + 2);
        param_1 = param_1 + 6;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x18);
  return;
}



/* Entry: 10a2b7654; end: 10a2b7707;  */

void FUN_10a2b7654(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

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
      FUN_10a2b7708();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2b76f4);
      (*pcVar4)();
    }
    plVar5 = param_1;
    FUN_10a2b771c();
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



/* Entry: 10a2b7708; end: 10a2b771b;  */

void FUN_10a2b7708(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_10a2b8bf0();
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a2b771c; end: 10a2b774f;  */

void FUN_10a2b771c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a2b8bf0();
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



/* Entry: 10a2b7750; end: 10a2b77bf;  */

void FUN_10a2b7750(long *param_1)

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
        FUN_10a2b8bf0();
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



/* Entry: 10a2b77c0; end: 10a2b784f;  */

undefined8 * FUN_10a2b77c0(undefined8 *param_1,undefined8 *param_2)

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
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 10a2b7850; end: 10a2b7863;  */

undefined1  [16] FUN_10a2b7850(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x555555555555556) {
    lVar2 = (long)param_2 * 0x30;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_2,param_2[1]);
  }
  else {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar4;
    *puVar1 = uVar3;
  }
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar3 = param_2[3];
  FUN_10a0cf0cc();
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = puVar1;
  return auVar6;
}



/* Entry: 10a2b7864; end: 10a2b78a7;  */

undefined1  [16] FUN_10a2b7864(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 < (undefined8 *)0x555555555555556) {
    lVar1 = (long)param_2 * 0x30;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = param_2[3];
  FUN_10a0cf0cc();
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10a2b78a8; end: 10a2b7937;  */

undefined8 * FUN_10a2b78a8(undefined8 *param_1,undefined8 *param_2)

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
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10a0cf0cc();
  return param_1;
}



/* Entry: 10a2b7938; end: 10a2b797b;  */

void FUN_10a2b7938(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 3;
  FUN_10a0426d8(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return;
}



/* Entry: 10a2b797c; end: 10a2b7a2f;  */

undefined8 * FUN_10a2b797c(undefined8 *param_1,undefined8 *param_2)

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
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10a2b7a30();
  lVar4 = param_2[7];
  uVar5 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
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
  return param_1;
}



/* Entry: 10a2b7a30; end: 10a2b7ab3;  */

void FUN_10a2b7a30(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a2b7ab4(param_1,param_4);
    lVar1 = param_1;
    FUN_10a2b7afc(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a2b7ab4; end: 10a2b7afb;  */

long * FUN_10a2b7ab4(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  
  if (param_2 < 0x555555555555556) {
    plVar1 = param_1;
    FUN_10a2b7864();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 6);
    return plVar1;
  }
  FUN_10a2b7850();
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    FUN_10a2b77c0(param_4,param_2);
    param_4 = param_4 + 6;
  }
  return param_4;
}



/* Entry: 10a2b7afc; end: 10a2b7b7f;  */

long FUN_10a2b7afc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    FUN_10a2b77c0(param_4,param_2);
    param_4 = param_4 + 0x30;
  }
  return param_4;
}



/* Entry: 10a2b7b80; end: 10a2b7bd7;  */

long FUN_10a2b7b80(long param_1)

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



/* Entry: 10a2b7bd8; end: 10a2b7c93;  */

void FUN_10a2b7bd8(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    piVar7 = (int *)*param_1;
    if (piVar7 != (int *)0x0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar3 = *(byte *)((long)param_1 + 0x11);
      piVar1 = piVar7 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 - (uint)bVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar3 = *(byte *)(param_1 + 2);
      piVar7 = piVar7 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 - (uint)bVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar2 = plVar6 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10ad19ba8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2b7c94; end: 10a2b7d07;  */

void FUN_10a2b7c94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbb318;
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10a2b7d08; end: 10a2b7de3;  */

void FUN_10a2b7d08(long param_1)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x18);
  plVar6 = *(long **)(param_1 + 0x28);
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    piVar7 = *(int **)(param_1 + 0x20);
    if (piVar7 != (int *)0x0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar3 = *(byte *)(param_1 + 0x31);
      piVar1 = piVar7 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 - (uint)bVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar3 = *(byte *)(param_1 + 0x30);
      piVar7 = piVar7 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 - (uint)bVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar2 = plVar6 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (lVar9 != 0) {
    FUN_10ad19ba8(lVar9);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a2b7de4; end: 10a2b7e1f;  */

long FUN_10a2b7de4(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bbb358);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a2b7e20; end: 10a2b7e23;  */

void FUN_10a2b7e20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2b7e24; end: 10a2b7e7b;  */

long FUN_10a2b7e24(long param_1)

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



/* Entry: 10a2b7e7c; end: 10a2b7f37;  */

undefined1  [16] FUN_10a2b7e7c(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, (ulong)plVar3[5] <= *(ulong *)(param_2 + 8)) {
        if (*(ulong *)(param_2 + 8) <= (ulong)plVar3[5]) {
          uVar2 = 0;
          goto LAB_10a2b7f20;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_10a2b7ee4;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_10a2b7ee4:
  plVar1 = (long *)0x30;
  __Znwm();
  lVar5 = *param_3;
  plVar1[5] = param_3[1];
  plVar1[4] = lVar5;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10a2b7f38(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_10a2b7f20:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = plVar3;
  return auVar6;
}



/* Entry: 10a2b7f38; end: 10a2b7f8b;  */

void FUN_10a2b7f38(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a2b7f8c; end: 10a2b7f9b;  */

void FUN_10a2b7f8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbb378;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2b7f9c; end: 10a2b7fbb;  */

void FUN_10a2b7f9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbb378;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2b7fbc; end: 10a2b7fe3;  */

long FUN_10a2b7fbc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a2b7fe8(param_1 + 0x28);
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



/* Entry: 10a2b7fe4; end: 10a2b7fe7;  */

void FUN_10a2b7fe4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2b7fe8; end: 10a2b80e7;  */

long FUN_10a2b7fe8(long param_1)

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



/* Entry: 10a2b80e8; end: 10a2b810f;  */

void FUN_10a2b80e8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a2b8110; end: 10a2b812f;  */

void FUN_10a2b8110(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bbb3e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2b8130; end: 10a2b813f;  */

void FUN_10a2b8130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a2b8138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a2b8140; end: 10a2b81cf;  */

undefined8 * FUN_10a2b8140(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 3;
  *param_1 = &PTR_DAT_110c36890;
  FUN_10a2b7750(&puStack_28);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a2b81d0; end: 10a2b81e3;  */

undefined1  [16] FUN_10a2b81d0(undefined8 param_1,ulong param_2)

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



/* Entry: 10a2b81e4; end: 10a2b826f;  */

undefined1  [16] FUN_10a2b81e4(long param_1,ulong param_2)

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



/* Entry: 10a2b8270; end: 10a2b82df;  */

void FUN_10a2b8270(long *param_1)

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
        func_0x00010a2b8218();
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



/* Entry: 10a2b82e0; end: 10a2b832b;  */

long * FUN_10a2b82e0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a2b8218();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a2b832c; end: 10a2b84c7;  */

void FUN_10a2b832c(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar10 = (undefined8 *)*param_1;
  if ((ulong)(param_1[2] - (long)puVar10 >> 4) < param_4) {
    plVar4 = param_1;
    FUN_10a2b84c8();
    if (param_4 >> 0x3c != 0) {
      FUN_10a2b81d0();
      lVar9 = *plVar4;
      if (lVar9 != 0) {
        lVar5 = plVar4[1];
        lVar7 = lVar9;
        if (lVar5 != lVar9) {
          do {
            lVar5 = lVar5 + -0x10;
            func_0x00010a2b8218();
          } while (lVar5 != lVar9);
          lVar7 = *plVar4;
        }
        plVar4[1] = lVar9;
        __ZdlPv(lVar7);
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[2] = 0;
      }
      return;
    }
    uVar8 = param_1[2] - *param_1 >> 3;
    if (uVar8 <= param_4) {
      uVar8 = param_4;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar8 = 0xfffffffffffffff;
    }
    func_0x00010a2b8198(param_1,uVar8);
    puVar6 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar9 = param_2[1];
      uVar11 = *param_2;
      puVar6[1] = param_2[1];
      *puVar6 = uVar11;
      if (lVar9 != 0) {
        plVar4 = (long *)(lVar9 + 8);
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
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    lVar9 = (long)puVar6 - (long)puVar10;
    if (param_4 <= (ulong)(lVar9 >> 4)) {
      if (param_2 != param_3) {
        do {
          func_0x00010a2b8524(puVar10,param_2);
          param_2 = param_2 + 2;
          puVar10 = puVar10 + 2;
        } while (param_2 != param_3);
        puVar6 = (undefined8 *)param_1[1];
      }
      while (puVar6 != puVar10) {
        puVar6 = puVar6 + -2;
        func_0x00010a2b8218();
      }
      param_1[1] = (long)puVar10;
      return;
    }
    puVar1 = (undefined8 *)((long)param_2 + lVar9);
    if (puVar6 != puVar10) {
      do {
        func_0x00010a2b8524(puVar10,param_2);
        param_2 = param_2 + 2;
        puVar10 = puVar10 + 2;
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
      puVar6 = (undefined8 *)param_1[1];
    }
    for (; puVar1 != param_3; puVar1 = puVar1 + 2) {
      lVar9 = puVar1[1];
      uVar11 = *puVar1;
      puVar6[1] = puVar1[1];
      *puVar6 = uVar11;
      if (lVar9 != 0) {
        plVar4 = (long *)(lVar9 + 8);
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
  }
  param_1[1] = (long)puVar6;
  return;
}



/* Entry: 10a2b84c8; end: 10a2b85eb;  */

void FUN_10a2b84c8(long *param_1)

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
        func_0x00010a2b8218();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a2b85ec; end: 10a2b89b7;  */

void FUN_10a2b85ec(long *param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  lVar12 = *param_2;
  puVar6 = (undefined8 *)0xa8;
  __Znwm();
  *puVar6 = FUN_10a2c4d24;
  puVar6[1] = FUN_10a2c4fc0;
  puVar6[0x13] = param_2;
  puVar7 = puVar6 + 2;
  func_0x0001092ba17c();
  lVar9 = puVar6[7];
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar9;
  lVar9 = param_2[3];
  FUN_109d1a80c();
  uVar11 = puVar7[0x12];
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_109d16728(puVar6 + 0x12,lVar12 + 0x60,puVar7 + (long)(int)lVar9 * 0x1e848,uVar11);
  puVar6[0x11] = puVar6[0x12];
  plVar8 = (long *)(puVar6[0x12] + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = *plVar8 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0x11] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x14) = 0;
    lVar9 = puVar6[0x11];
    plVar8 = (long *)(lVar9 + 0x10);
    uStack_38 = puVar6[3];
    do {
      lVar12 = *plVar8;
      if (lVar12 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lStack_48 = 0;
          plStack_40 = puVar6;
          func_0x000109d1b588(lVar9 + 0x18,&lStack_48);
          *(undefined8 *)(lVar9 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar12 >> 1 & 1) == 0);
  }
  plVar8 = (long *)puVar6[0x11];
  if (((uint)*(undefined8 *)(puVar6[0x11] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar8 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2b88c0);
    (*pcVar5)();
  }
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar10 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar10 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  plVar8 = (long *)puVar6[0x12];
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar10 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar10 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  lVar9 = puVar6[0x13];
  plVar8 = *(long **)(lVar9 + 0x10);
  if ((plVar8 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_40 = plVar8, plVar8 != (long *)0x0)) {
    lVar12 = *(long *)(lVar9 + 8);
    lStack_48 = lVar12;
    if (lVar12 == 0) {
      func_0x0001092ba100(puVar6 + 2);
      plVar2 = plVar8 + 1;
      do {
        lVar9 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 != 0) goto LAB_10a2b8890;
    }
    else {
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 != 0) {
        plVar2 = (long *)(lVar9 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar7 = puVar6 + 10;
      *puVar7 = &PTR_FUN_110bbb420;
      puVar6[9] = FUN_10a2b89b8;
      puVar6[0xb] = lVar12;
      puVar6[0xc] = lVar9;
      FUN_10a2b5c88(lVar12,puVar6 + 9);
      (**(code **)*puVar7)(puVar7);
      plVar2 = plVar8 + 1;
      do {
        lVar9 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 != 0) goto LAB_10a2b8888;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    if (lVar12 == 0) goto LAB_10a2b8890;
  }
LAB_10a2b8888:
  func_0x0001092ba100(puVar6 + 2);
LAB_10a2b8890:
  func_0x000109d1a1d0(puVar6 + 2);
  __ZdlPv(puVar6);
  return;
}



/* Entry: 10a2b89b8; end: 10a2b8adf;  */

void FUN_10a2b89b8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_4 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar5 = *(long *)(param_4 + 0x10);
      if (lVar5 != 0) {
        if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
          plVar1 = (long *)*param_1;
          if (-1 < *(char *)((long)param_1 + 0x17)) {
            plVar1 = param_1;
          }
          func_0x00010ae06f08(1,8,&UNK_10f64a44f,&UNK_10f64aa19,0x4e,&UNK_10f64aafc,param_7,param_8,
                              plVar1);
        }
        (**(code **)(**(long **)(lVar5 + 0x128) + 0x18))(*(long **)(lVar5 + 0x128),param_1,param_3);
        FUN_10a2b60ec(lVar5,param_2);
      }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a2b8ae0; end: 10a2b8b3f;  */

void FUN_10a2b8ae0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a2b8b40; end: 10a2b8b7f;  */

void FUN_10a2b8b40(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a2b8b80; end: 10a2b8b97;  */

void FUN_10a2b8b80(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a2b8b98; end: 10a2b8bd7;  */

void FUN_10a2b8b98(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a2b8bd8; end: 10a2b8bef;  */

void FUN_10a2b8bd8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a2b8bf0; end: 10a2b8c47;  */

long FUN_10a2b8bf0(long param_1)

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



/* Entry: 10a2b8c48; end: 10a2b8c57;  */

void FUN_10a2b8c48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbbc50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a2b8c58; end: 10a2b8c77;  */

void FUN_10a2b8c58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bbbc50;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


