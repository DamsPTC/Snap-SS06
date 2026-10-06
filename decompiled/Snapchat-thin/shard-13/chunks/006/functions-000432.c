/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a9fc5cc; end: 10a9fc7cf;  */

void FUN_10a9fc5cc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
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
  ppuStack_40 = &PTR_DAT_110c02108;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a9fc7d0; end: 10a9fc7df;  */

void FUN_10a9fc7d0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c02108;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a9fc7e0; end: 10a9fc807;  */

long FUN_10a9fc7e0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a9fc888(param_1 + 0x18);
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



/* Entry: 10a9fc808; end: 10a9fc857;  */

void FUN_10a9fc808(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c37930;
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



/* Entry: 10a9fc858; end: 10a9fc877;  */

void FUN_10a9fc858(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c37958;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9fc878; end: 10a9fc887;  */

void FUN_10a9fc878(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9fc880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9fc888; end: 10a9fc8df;  */

long FUN_10a9fc888(long param_1)

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



/* Entry: 10a9fc8e0; end: 10a9fc9af;  */

undefined8 * FUN_10a9fc8e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c381e8;
  param_1[3] = &PTR_FUN_110c38258;
  param_1[7] = &PTR_DAT_110c38280;
  param_1[0xb] = &PTR_DAT_110c382a8;
  FUN_10a9f307c();
  func_0x00010a061620(param_1 + 0x11);
  FUN_10a3f850c(param_1 + 0xf);
  param_1[0xb] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0xe] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xe] = 0;
  }
  func_0x00010a004e5c(param_1 + 0xc);
  param_1[7] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[10] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[10] = 0;
  }
  func_0x00010a004e5c(param_1 + 8);
  param_1[3] = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[6] = 0;
  }
  func_0x00010a004e5c(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9fc9b0; end: 10a9fcaeb;  */

/* WARNING: Removing unreachable block (ram,0x00010a9fca3c) */

undefined8 * FUN_10a9fc9b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c36cb8;
  if (param_1[0x27] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])();
  FUN_10aa04ef8(param_1 + 0x1c);
  FUN_10a044790(param_1 + 0x13);
  (**(code **)param_1[0x14])(param_1 + 0x14);
  FUN_10aa04b94(param_1 + 0x11);
  FUN_10a9f8808(param_1 + 0xf);
  func_0x00010a05a86c(param_1 + 0xd);
  FUN_10aa04afc(param_1 + 0xb);
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a9fcaec; end: 10a9fd28b;  */

void FUN_10a9fcaec(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined **ppuStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a9fd28c(param_5);
  func_0x000109898570(auStack_f8,param_2,param_4);
  plVar15 = param_2;
  func_0x000109898518(param_2,param_4 + 0x10);
  FUN_10a07c4e4(&ppuStack_120,param_2,param_4 + 0x20);
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  uVar16 = *(undefined8 *)(*(long *)(*ppuVar6 + 0xab0) + 0x88);
  pcVar7 = (code *)0xa0;
  __Znwm();
  *(long *)(pcVar7 + 0x10) = 0;
  *(long *)(pcVar7 + 8) = 0x200000006;
  *(undefined2 *)(pcVar7 + 0x18) = 4;
  *(long *)(pcVar7 + 0x28) = 0;
  *(long *)(pcVar7 + 0x20) = 0;
  *(long *)(pcVar7 + 0x38) = 0;
  *(long *)(pcVar7 + 0x30) = 0;
  *(long *)(pcVar7 + 0x48) = 0;
  *(long *)(pcVar7 + 0x40) = 0;
  *(long *)(pcVar7 + 0x58) = 0;
  *(long *)(pcVar7 + 0x50) = 0;
  *(long *)(pcVar7 + 0x68) = 0;
  *(long *)(pcVar7 + 0x60) = 0;
  *(long *)(pcVar7 + 0x78) = 0;
  *(long *)(pcVar7 + 0x70) = 0;
  *(long *)(pcVar7 + 0x80) = 0;
  *(code **)(pcVar7 + 0x88) = pcVar7 + 0x18;
  *(long *)(pcVar7 + 0x90) = 0;
  *(undefined ***)pcVar7 = &PTR_FUN_110c374e8;
  pcVar7[0x98] = (code)0x0;
  pcVar7[0x9c] = (code)0x0;
  lStack_c0 = 0;
  pcStack_a0 = (code *)0x10a9ffbb8;
  ppuStack_98 = &PTR_FUN_110c37998;
  lStack_d0 = 0;
  pcStack_c8 = pcVar7;
  pcStack_90 = pcVar7;
  FUN_10a3ca004();
  ppuVar6 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puVar11 = *ppuVar6;
  puStack_b8 = &UNK_10f63b699;
  puStack_b0 = (undefined8 *)0x28;
  if (puVar11 == (undefined *)0x0) {
    FUN_10a0edfc4(&puStack_b8);
    goto LAB_10a9fd108;
  }
  plStack_e0 = *(long **)(puVar11 + 0x10);
  plVar10 = *(long **)(puVar11 + 0x18);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_d8 = plVar10;
  if (plStack_e0 == (long *)0x0) {
    (*pcStack_a0)(plVar15,&pcStack_a0);
  }
  else {
    (**(code **)(*plStack_e0 + 0x10))(plStack_e0,auStack_f8,plVar15,&pcStack_a0);
  }
  if (plVar10 != (long *)0x0) {
    plVar15 = plVar10 + 1;
    do {
      lVar12 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  (*(code *)*ppuStack_98)(&ppuStack_98);
  if (lStack_d0 != 0) {
    func_0x0001092b4274(&lStack_d0);
  }
  pcStack_a0 = pcStack_c8;
  pcStack_c8 = (code *)0x0;
  pcStack_90 = pcStack_118;
  ppuStack_98 = ppuStack_120;
  if (pcStack_118 != (code *)0x0) {
    pcStack_118 = pcStack_118 + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcStack_118,0x10);
      if (bVar4) {
        *(long *)pcStack_118 = *(long *)pcStack_118 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_80 = lStack_108;
  uStack_88 = uStack_110;
  if (lStack_108 != 0) {
    plVar15 = (long *)(lStack_108 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = *plVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar8 = (undefined8 *)0x90;
  __Znwm();
  *puVar8 = FUN_10aa12da8;
  puVar8[1] = FUN_10aa1304c;
  func_0x0001092ba17c(puVar8 + 2);
  pcVar7 = pcStack_a0;
  plVar15 = (long *)puVar8[7];
  if (plVar15 != (long *)0x0) {
    plVar10 = plVar15 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pcStack_a0 = (code *)0x0;
  puVar8[10] = ppuStack_98;
  puVar8[9] = pcVar7;
  puVar8[0xb] = pcStack_90;
  if (pcStack_90 != (code *)0x0) {
    pcVar7 = pcStack_90 + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
      if (bVar4) {
        *(long *)pcVar7 = *(long *)pcVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar8[0xd] = lStack_80;
  puVar8[0xc] = uStack_88;
  if (lStack_80 != 0) {
    plVar10 = (long *)(lStack_80 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar8[0xe] = uVar16;
  *(undefined1 *)(puVar8 + 0xf) = 0;
  *(undefined1 *)(puVar8 + 0x11) = 0;
  puVar9 = puVar8 + 0xe;
  func_0x0001092ba064(puVar9,puVar8);
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10a9f35a4(puVar8 + 0x10,puVar8 + 9);
    puVar8[0xe] = puVar8[0x10];
    plVar10 = (long *)(puVar8[0x10] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar8[0xe] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0x11) = 1;
      lVar12 = puVar8[0xe];
      plVar10 = (long *)(lVar12 + 0x10);
      uVar16 = puVar8[3];
      do {
        lVar14 = *plVar10;
        if (lVar14 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            puStack_b8 = (undefined *)0x0;
            puStack_b0 = puVar8;
            uStack_a8 = uVar16;
            func_0x000109d1b588(lVar12 + 0x18,&puStack_b8);
            *(undefined8 *)(lVar12 + 0x10) = 0;
            goto LAB_10a9fcf94;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar14 >> 1 & 1) == 0);
    }
    plVar10 = (long *)puVar8[0xe];
    if (((uint)*(undefined8 *)(puVar8[0xe] + 0x10) >> 5 & 1) == 0) {
      if (plVar10 != (long *)0x0) {
        puVar2 = (ulong *)(plVar10 + 1);
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      plVar10 = (long *)puVar8[0x10];
      if (plVar10 != (long *)0x0) {
        puVar2 = (ulong *)(plVar10 + 1);
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar8 + 2);
      FUN_10a688c1c(puVar8 + 10);
      plVar10 = (long *)puVar8[9];
      if (plVar10 != (long *)0x0) {
        puVar2 = (ulong *)(plVar10 + 1);
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar8 + 2);
      __ZdlPv(puVar8);
      goto LAB_10a9fcf94;
    }
  }
  else {
LAB_10a9fcf94:
    if (plVar15 != (long *)0x0) {
      puVar2 = (ulong *)(plVar15 + 1);
      do {
        uVar13 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar15 + 8))(plVar15);
        }
      }
    }
    FUN_10a688c1c((ulong)&pcStack_a0 | 8);
    if (pcStack_a0 != (code *)0x0) {
      pcVar7 = pcStack_a0 + 8;
      do {
        uVar13 = *(ulong *)pcVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
        if (bVar4) {
          *(ulong *)pcVar7 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *(ulong *)pcVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
          if (bVar4) {
            *(ulong *)pcVar7 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*(long *)pcStack_a0 + 8))();
        }
      }
    }
    if (lStack_c0 != 0) {
      func_0x0001092b4274(&lStack_c0);
    }
    if (pcStack_c8 != (code *)0x0) {
      pcVar7 = pcStack_c8 + 8;
      do {
        uVar13 = *(ulong *)pcVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
        if (bVar4) {
          *(ulong *)pcVar7 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *(ulong *)pcVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
          if (bVar4) {
            *(ulong *)pcVar7 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*(long *)pcStack_c8 + 8))();
        }
      }
    }
    FUN_10a688c1c(&ppuStack_120);
    if (cStack_e1 < '\0') {
      __ZdlPv(auStack_f8[0]);
    }
    *param_1 = 0;
    plVar10 = plVar5 + 0x4b;
    func_0x00010988c170(plVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(plVar10 + 0x12);
LAB_10a9fd108:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a9fd10c);
  (*pcVar7)();
}



/* Entry: 10a9fd28c; end: 10a9fd2af;  */

void FUN_10a9fd28c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined4 *extraout_x8;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 auStack_108 [2];
  char cStack_f1;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  code *pcStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_68;
  
  if ((int)param_1 == 3) {
    return;
  }
  pcVar5 = (code *)0x3;
  FUN_10a052ee0(3,0);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar5;
  (**(code **)(*(long *)pcVar5 + 0x58))();
  if (*(ulong *)(pcVar4 + 0x2c8) < 8) {
    *(long *)(pcVar4 + *(ulong *)(pcVar4 + 0x2c8) * 8 + 0x270) = *(long *)(pcVar4 + 0x2d0);
    *(long *)(pcVar4 + 0x2c8) = *(long *)(pcVar4 + 0x2c8) + 1;
  }
  else {
    func_0x00010988bfcc(pcVar4 + 600);
  }
  FUN_10a9fdb50(param_4);
  func_0x000109898570(auStack_108,pcVar5,param_1);
  pcVar6 = pcVar5;
  func_0x00010a9fdb74(pcVar5,param_1 + 0x10);
  if (*(int *)(param_1 + 0x20) == 7) {
    pcVar7 = pcVar5;
    (**(code **)(*(long *)pcVar5 + 0x98))(pcVar5,*(undefined8 *)(param_1 + 0x28));
    pcVar8 = pcVar5;
    pcStack_c8 = pcVar7;
    (**(code **)(*(long *)pcVar5 + 0x228))(pcVar5,&pcStack_c8);
    if ((int)pcVar8 != 0) {
      pcVar7 = pcVar5;
      (**(code **)(*(long *)pcVar5 + 0x58))();
      lVar9 = *(long *)(pcVar7 + 0x240);
      if ((lVar9 == 0) ||
         (___dynamic_cast(lVar9,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), pcVar7 = pcStack_c8,
         lVar9 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a9fd9b0;
      }
      pcStack_c8 = (code *)0x0;
      ppuStack_a8 = (undefined **)CONCAT44(ppuStack_a8._4_4_,7);
      pcStack_a0 = pcVar7;
      pcStack_b0 = pcVar5;
      FUN_10a688ac0(&ppuStack_130,&pcStack_b0,*(undefined8 *)(lVar9 + 8));
      if ((3 < (int)ppuStack_a8) && (pcStack_a0 != (code *)0x0)) {
        (*(code *)**(undefined8 **)pcStack_a0)();
      }
    }
    if (pcStack_c8 != (code *)0x0) {
      (*(code *)**(undefined8 **)pcStack_c8)();
    }
    if (((ulong)pcVar8 & 1) != 0) {
      ppuVar10 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)();
      uVar18 = *(undefined8 *)(*(long *)(*ppuVar10 + 0xab0) + 0x88);
      pcVar5 = (code *)0xa8;
      __Znwm();
      *(long *)(pcVar5 + 0x10) = 0;
      *(long *)(pcVar5 + 8) = 0x200000006;
      *(undefined2 *)(pcVar5 + 0x18) = 4;
      *(long *)(pcVar5 + 0x28) = 0;
      *(long *)(pcVar5 + 0x20) = 0;
      *(long *)(pcVar5 + 0x38) = 0;
      *(long *)(pcVar5 + 0x30) = 0;
      *(long *)(pcVar5 + 0x48) = 0;
      *(long *)(pcVar5 + 0x40) = 0;
      *(long *)(pcVar5 + 0x58) = 0;
      *(long *)(pcVar5 + 0x50) = 0;
      *(long *)(pcVar5 + 0x68) = 0;
      *(long *)(pcVar5 + 0x60) = 0;
      *(long *)(pcVar5 + 0x78) = 0;
      *(long *)(pcVar5 + 0x70) = 0;
      *(long *)(pcVar5 + 0x80) = 0;
      *(code **)(pcVar5 + 0x88) = pcVar5 + 0x18;
      *(long *)(pcVar5 + 0x90) = 0;
      *(undefined ***)pcVar5 = &PTR_FUN_110c37558;
      pcVar5[0x98] = (code)0x0;
      pcVar5[0xa0] = (code)0x0;
      lStack_d0 = 0;
      pcStack_b0 = FUN_10a9ffc6c;
      ppuStack_a8 = &PTR_FUN_110c379b0;
      lStack_e0 = 0;
      pcStack_d8 = pcVar5;
      pcStack_a0 = pcVar5;
      FUN_10a3ca004();
      ppuVar10 = &PTR___tlv_bootstrap_11340de28;
      (*(code *)PTR___tlv_bootstrap_11340de28)();
      puVar14 = *ppuVar10;
      pcStack_c8 = (code *)&UNK_10f63b699;
      puStack_c0 = (undefined8 *)0x28;
      if (puVar14 == (undefined *)0x0) {
        FUN_10a0edfc4(&pcStack_c8);
        goto LAB_10a9fd9b0;
      }
      plStack_f0 = *(long **)(puVar14 + 0x10);
      plVar17 = *(long **)(puVar14 + 0x18);
      if (plVar17 != (long *)0x0) {
        plVar13 = plVar17 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_e8 = plVar17;
      if (plStack_f0 == (long *)0x0) {
        (*pcStack_b0)(pcVar6,&pcStack_b0);
      }
      else {
        (**(code **)(*plStack_f0 + 0x18))(plStack_f0,auStack_108,pcVar6,&pcStack_b0);
      }
      if (plVar17 != (long *)0x0) {
        plVar13 = plVar17 + 1;
        do {
          lVar9 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      (*(code *)*ppuStack_a8)(&ppuStack_a8);
      if (lStack_e0 != 0) {
        func_0x0001092b4274(&lStack_e0);
      }
      pcStack_b0 = pcStack_d8;
      pcStack_d8 = (code *)0x0;
      pcStack_a0 = pcStack_128;
      ppuStack_a8 = ppuStack_130;
      if (pcStack_128 != (code *)0x0) {
        pcStack_128 = pcStack_128 + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcStack_128,0x10);
          if (bVar3) {
            *(long *)pcStack_128 = *(long *)pcStack_128 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_90 = lStack_118;
      uStack_98 = uStack_120;
      if (lStack_118 != 0) {
        plVar17 = (long *)(lStack_118 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *plVar17 = *plVar17 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar11 = (undefined8 *)0x90;
      __Znwm();
      *puVar11 = FUN_10aa13584;
      puVar11[1] = FUN_10aa13828;
      func_0x0001092ba17c(puVar11 + 2);
      pcVar5 = pcStack_b0;
      plVar17 = (long *)puVar11[7];
      if (plVar17 != (long *)0x0) {
        plVar13 = plVar17 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_b0 = (code *)0x0;
      puVar11[10] = ppuStack_a8;
      puVar11[9] = pcVar5;
      puVar11[0xb] = pcStack_a0;
      if (pcStack_a0 != (code *)0x0) {
        pcVar5 = pcStack_a0 + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
          if (bVar3) {
            *(long *)pcVar5 = *(long *)pcVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar11[0xd] = lStack_90;
      puVar11[0xc] = uStack_98;
      if (lStack_90 != 0) {
        plVar13 = (long *)(lStack_90 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar11[0xe] = uVar18;
      *(undefined1 *)(puVar11 + 0xf) = 0;
      *(undefined1 *)(puVar11 + 0x11) = 0;
      puVar12 = puVar11 + 0xe;
      func_0x0001092ba064(puVar12,puVar11);
      if (((ulong)puVar12 & 1) == 0) {
        FUN_10a9f43f4(puVar11 + 0x10,puVar11 + 9);
        puVar11[0xe] = puVar11[0x10];
        plVar13 = (long *)(puVar11[0x10] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((uint)*(undefined8 *)(puVar11[0xe] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar11 + 0x11) = 1;
          lVar9 = puVar11[0xe];
          plVar13 = (long *)(lVar9 + 0x10);
          uVar18 = puVar11[3];
          do {
            lVar16 = *plVar13;
            if (lVar16 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar3) {
                *plVar13 = 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                pcStack_c8 = (code *)0x0;
                puStack_c0 = puVar11;
                uStack_b8 = uVar18;
                func_0x000109d1b588(lVar9 + 0x18,&pcStack_c8);
                *(undefined8 *)(lVar9 + 0x10) = 0;
                goto LAB_10a9fd81c;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar16 >> 1 & 1) == 0);
        }
        pcVar5 = (code *)puVar11[0xe];
        if (((uint)*(undefined8 *)(puVar11[0xe] + 0x10) >> 5 & 1) == 0) {
          if (pcVar5 != (code *)0x0) {
            pcVar6 = pcVar5 + 8;
            do {
              uVar15 = *(ulong *)pcVar6;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
              if (bVar3) {
                *(ulong *)pcVar6 = uVar15 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar15 & 0x1fffffffc) == 4) {
              do {
                uVar15 = *(ulong *)pcVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
                if (bVar3) {
                  *(ulong *)pcVar6 = uVar15 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar15 - 1 == 0) {
                (**(code **)(*(long *)pcVar5 + 8))();
              }
            }
          }
          plVar13 = (long *)puVar11[0x10];
          if (plVar13 != (long *)0x0) {
            puVar1 = (ulong *)(plVar13 + 1);
            do {
              uVar15 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar15 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar15 & 0x1fffffffc) == 4) {
              do {
                uVar15 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar15 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar15 - 1 == 0) {
                (**(code **)(*plVar13 + 8))();
              }
            }
          }
          func_0x0001092ba100(puVar11 + 2);
          FUN_10a688c1c(puVar11 + 10);
          plVar13 = (long *)puVar11[9];
          if (plVar13 != (long *)0x0) {
            puVar1 = (ulong *)(plVar13 + 1);
            do {
              uVar15 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar15 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar15 & 0x1fffffffc) == 4) {
              do {
                uVar15 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar15 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar15 - 1 == 0) {
                (**(code **)(*plVar13 + 8))();
              }
            }
          }
          func_0x000109d1a1d0(puVar11 + 2);
          __ZdlPv(puVar11);
          goto LAB_10a9fd81c;
        }
      }
      else {
LAB_10a9fd81c:
        if (plVar17 != (long *)0x0) {
          puVar1 = (ulong *)(plVar17 + 1);
          do {
            uVar15 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar15 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar15 & 0x1fffffffc) == 4) {
            do {
              uVar15 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar15 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar15 - 1 == 0) {
              (**(code **)(*plVar17 + 8))(plVar17);
            }
          }
        }
        FUN_10a688c1c((ulong)&pcStack_b0 | 8);
        if (pcStack_b0 != (code *)0x0) {
          pcVar5 = pcStack_b0 + 8;
          do {
            uVar15 = *(ulong *)pcVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
            if (bVar3) {
              *(ulong *)pcVar5 = uVar15 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar15 & 0x1fffffffc) == 4) {
            do {
              uVar15 = *(ulong *)pcVar5;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
              if (bVar3) {
                *(ulong *)pcVar5 = uVar15 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar15 - 1 == 0) {
              (**(code **)(*(long *)pcStack_b0 + 8))();
            }
          }
        }
        if (lStack_d0 != 0) {
          func_0x0001092b4274(&lStack_d0);
        }
        if (pcStack_d8 != (code *)0x0) {
          pcVar5 = pcStack_d8 + 8;
          do {
            uVar15 = *(ulong *)pcVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
            if (bVar3) {
              *(ulong *)pcVar5 = uVar15 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar15 & 0x1fffffffc) == 4) {
            do {
              uVar15 = *(ulong *)pcVar5;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
              if (bVar3) {
                *(ulong *)pcVar5 = uVar15 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar15 - 1 == 0) {
              (**(code **)(*(long *)pcStack_d8 + 8))();
            }
          }
        }
        FUN_10a688c1c(&ppuStack_130);
        if (cStack_f1 < '\0') {
          __ZdlPv(auStack_108[0]);
        }
        *extraout_x8 = 0;
        pcVar5 = pcVar4 + 600;
        func_0x00010988c170(pcVar5);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
          return;
        }
        ___stack_chk_fail();
      }
      func_0x0001092af97c(pcVar5 + 0x90);
      goto LAB_10a9fd9b0;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a9fd9b0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9fd9b4);
  (*pcVar4)();
}



/* Entry: 10a9fd2b0; end: 10a9fdb4f;  */

void FUN_10a9fd2b0(undefined4 *param_1,code *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  undefined **ppuVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  code *pcVar11;
  long *plVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined **ppuStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pcVar4 + 0x2c8) < 8) {
    *(long *)(pcVar4 + *(ulong *)(pcVar4 + 0x2c8) * 8 + 0x270) = *(long *)(pcVar4 + 0x2d0);
    *(long *)(pcVar4 + 0x2c8) = *(long *)(pcVar4 + 0x2c8) + 1;
  }
  else {
    func_0x00010988bfcc(pcVar4 + 600);
  }
  FUN_10a9fdb50(param_5);
  func_0x000109898570(auStack_f8,param_2,param_4);
  pcVar11 = param_2;
  func_0x00010a9fdb74(param_2,param_4 + 0x10);
  if (*(int *)(param_4 + 0x20) == 7) {
    pcVar8 = param_2;
    (**(code **)(*(long *)param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 0x28));
    pcVar5 = param_2;
    pcStack_b8 = pcVar8;
    (**(code **)(*(long *)param_2 + 0x228))(param_2,&pcStack_b8);
    if ((int)pcVar5 != 0) {
      pcVar8 = param_2;
      (**(code **)(*(long *)param_2 + 0x58))();
      lVar6 = *(long *)(pcVar8 + 0x240);
      if ((lVar6 == 0) ||
         (___dynamic_cast(lVar6,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), pcVar8 = pcStack_b8,
         lVar6 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a9fd9b0;
      }
      pcStack_b8 = (code *)0x0;
      ppuStack_98 = (undefined **)CONCAT44(ppuStack_98._4_4_,7);
      pcStack_90 = pcVar8;
      pcStack_a0 = param_2;
      FUN_10a688ac0(&ppuStack_120,&pcStack_a0,*(undefined8 *)(lVar6 + 8));
      if ((3 < (int)ppuStack_98) && (pcStack_90 != (code *)0x0)) {
        (*(code *)**(undefined8 **)pcStack_90)();
      }
    }
    if (pcStack_b8 != (code *)0x0) {
      (*(code *)**(undefined8 **)pcStack_b8)();
    }
    if (((ulong)pcVar5 & 1) != 0) {
      ppuVar7 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)();
      uVar17 = *(undefined8 *)(*(long *)(*ppuVar7 + 0xab0) + 0x88);
      pcVar8 = (code *)0xa8;
      __Znwm();
      *(long *)(pcVar8 + 0x10) = 0;
      *(long *)(pcVar8 + 8) = 0x200000006;
      *(undefined2 *)(pcVar8 + 0x18) = 4;
      *(long *)(pcVar8 + 0x28) = 0;
      *(long *)(pcVar8 + 0x20) = 0;
      *(long *)(pcVar8 + 0x38) = 0;
      *(long *)(pcVar8 + 0x30) = 0;
      *(long *)(pcVar8 + 0x48) = 0;
      *(long *)(pcVar8 + 0x40) = 0;
      *(long *)(pcVar8 + 0x58) = 0;
      *(long *)(pcVar8 + 0x50) = 0;
      *(long *)(pcVar8 + 0x68) = 0;
      *(long *)(pcVar8 + 0x60) = 0;
      *(long *)(pcVar8 + 0x78) = 0;
      *(long *)(pcVar8 + 0x70) = 0;
      *(long *)(pcVar8 + 0x80) = 0;
      *(code **)(pcVar8 + 0x88) = pcVar8 + 0x18;
      *(long *)(pcVar8 + 0x90) = 0;
      *(undefined ***)pcVar8 = &PTR_FUN_110c37558;
      pcVar8[0x98] = (code)0x0;
      pcVar8[0xa0] = (code)0x0;
      lStack_c0 = 0;
      pcStack_a0 = FUN_10a9ffc6c;
      ppuStack_98 = &PTR_FUN_110c379b0;
      lStack_d0 = 0;
      pcStack_c8 = pcVar8;
      pcStack_90 = pcVar8;
      FUN_10a3ca004();
      ppuVar7 = &PTR___tlv_bootstrap_11340de28;
      (*(code *)PTR___tlv_bootstrap_11340de28)();
      puVar13 = *ppuVar7;
      pcStack_b8 = (code *)&UNK_10f63b699;
      puStack_b0 = (undefined8 *)0x28;
      if (puVar13 == (undefined *)0x0) {
        FUN_10a0edfc4(&pcStack_b8);
        goto LAB_10a9fd9b0;
      }
      plStack_e0 = *(long **)(puVar13 + 0x10);
      plVar16 = *(long **)(puVar13 + 0x18);
      if (plVar16 != (long *)0x0) {
        plVar12 = plVar16 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_d8 = plVar16;
      if (plStack_e0 == (long *)0x0) {
        (*pcStack_a0)(pcVar11,&pcStack_a0);
      }
      else {
        (**(code **)(*plStack_e0 + 0x18))(plStack_e0,auStack_f8,pcVar11,&pcStack_a0);
      }
      if (plVar16 != (long *)0x0) {
        plVar12 = plVar16 + 1;
        do {
          lVar6 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      (*(code *)*ppuStack_98)(&ppuStack_98);
      if (lStack_d0 != 0) {
        func_0x0001092b4274(&lStack_d0);
      }
      pcStack_a0 = pcStack_c8;
      pcStack_c8 = (code *)0x0;
      pcStack_90 = pcStack_118;
      ppuStack_98 = ppuStack_120;
      if (pcStack_118 != (code *)0x0) {
        pcStack_118 = pcStack_118 + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcStack_118,0x10);
          if (bVar3) {
            *(long *)pcStack_118 = *(long *)pcStack_118 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_80 = lStack_108;
      uStack_88 = uStack_110;
      if (lStack_108 != 0) {
        plVar16 = (long *)(lStack_108 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = *plVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar9 = (undefined8 *)0x90;
      __Znwm();
      *puVar9 = FUN_10aa13584;
      puVar9[1] = FUN_10aa13828;
      func_0x0001092ba17c(puVar9 + 2);
      pcVar11 = pcStack_a0;
      plVar16 = (long *)puVar9[7];
      if (plVar16 != (long *)0x0) {
        plVar12 = plVar16 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_a0 = (code *)0x0;
      puVar9[10] = ppuStack_98;
      puVar9[9] = pcVar11;
      puVar9[0xb] = pcStack_90;
      if (pcStack_90 != (code *)0x0) {
        pcVar11 = pcStack_90 + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
          if (bVar3) {
            *(long *)pcVar11 = *(long *)pcVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar9[0xd] = lStack_80;
      puVar9[0xc] = uStack_88;
      if (lStack_80 != 0) {
        plVar12 = (long *)(lStack_80 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar9[0xe] = uVar17;
      *(undefined1 *)(puVar9 + 0xf) = 0;
      *(undefined1 *)(puVar9 + 0x11) = 0;
      puVar10 = puVar9 + 0xe;
      func_0x0001092ba064(puVar10,puVar9);
      if (((ulong)puVar10 & 1) == 0) {
        FUN_10a9f43f4(puVar9 + 0x10,puVar9 + 9);
        puVar9[0xe] = puVar9[0x10];
        plVar12 = (long *)(puVar9[0x10] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((uint)*(undefined8 *)(puVar9[0xe] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar9 + 0x11) = 1;
          lVar6 = puVar9[0xe];
          plVar12 = (long *)(lVar6 + 0x10);
          uVar17 = puVar9[3];
          do {
            lVar15 = *plVar12;
            if (lVar15 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *plVar12 = 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                pcStack_b8 = (code *)0x0;
                puStack_b0 = puVar9;
                uStack_a8 = uVar17;
                func_0x000109d1b588(lVar6 + 0x18,&pcStack_b8);
                *(undefined8 *)(lVar6 + 0x10) = 0;
                goto LAB_10a9fd81c;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar15 >> 1 & 1) == 0);
        }
        pcVar11 = (code *)puVar9[0xe];
        if (((uint)*(undefined8 *)(puVar9[0xe] + 0x10) >> 5 & 1) == 0) {
          if (pcVar11 != (code *)0x0) {
            pcVar8 = pcVar11 + 8;
            do {
              uVar14 = *(ulong *)pcVar8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
              if (bVar3) {
                *(ulong *)pcVar8 = uVar14 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar14 & 0x1fffffffc) == 4) {
              do {
                uVar14 = *(ulong *)pcVar8;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
                if (bVar3) {
                  *(ulong *)pcVar8 = uVar14 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar14 - 1 == 0) {
                (**(code **)(*(long *)pcVar11 + 8))();
              }
            }
          }
          plVar12 = (long *)puVar9[0x10];
          if (plVar12 != (long *)0x0) {
            puVar1 = (ulong *)(plVar12 + 1);
            do {
              uVar14 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar14 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar14 & 0x1fffffffc) == 4) {
              do {
                uVar14 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar14 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar14 - 1 == 0) {
                (**(code **)(*plVar12 + 8))();
              }
            }
          }
          func_0x0001092ba100(puVar9 + 2);
          FUN_10a688c1c(puVar9 + 10);
          plVar12 = (long *)puVar9[9];
          if (plVar12 != (long *)0x0) {
            puVar1 = (ulong *)(plVar12 + 1);
            do {
              uVar14 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar14 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar14 & 0x1fffffffc) == 4) {
              do {
                uVar14 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar14 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar14 - 1 == 0) {
                (**(code **)(*plVar12 + 8))();
              }
            }
          }
          func_0x000109d1a1d0(puVar9 + 2);
          __ZdlPv(puVar9);
          goto LAB_10a9fd81c;
        }
      }
      else {
LAB_10a9fd81c:
        if (plVar16 != (long *)0x0) {
          puVar1 = (ulong *)(plVar16 + 1);
          do {
            uVar14 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar14 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar14 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar16 + 8))(plVar16);
            }
          }
        }
        FUN_10a688c1c((ulong)&pcStack_a0 | 8);
        if (pcStack_a0 != (code *)0x0) {
          pcVar11 = pcStack_a0 + 8;
          do {
            uVar14 = *(ulong *)pcVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
            if (bVar3) {
              *(ulong *)pcVar11 = uVar14 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *(ulong *)pcVar11;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
              if (bVar3) {
                *(ulong *)pcVar11 = uVar14 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*(long *)pcStack_a0 + 8))();
            }
          }
        }
        if (lStack_c0 != 0) {
          func_0x0001092b4274(&lStack_c0);
        }
        if (pcStack_c8 != (code *)0x0) {
          pcVar11 = pcStack_c8 + 8;
          do {
            uVar14 = *(ulong *)pcVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
            if (bVar3) {
              *(ulong *)pcVar11 = uVar14 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *(ulong *)pcVar11;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
              if (bVar3) {
                *(ulong *)pcVar11 = uVar14 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*(long *)pcStack_c8 + 8))();
            }
          }
        }
        FUN_10a688c1c(&ppuStack_120);
        if (cStack_e1 < '\0') {
          __ZdlPv(auStack_f8[0]);
        }
        *param_1 = 0;
        pcVar11 = pcVar4 + 600;
        func_0x00010988c170(pcVar11);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          return;
        }
        ___stack_chk_fail();
      }
      func_0x0001092af97c(pcVar11 + 0x90);
      goto LAB_10a9fd9b0;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a9fd9b0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9fd9b4);
  (*pcVar4)();
}



/* Entry: 10a9fdb50; end: 10a9fdbcb;  */

long * FUN_10a9fdb50(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  int *piVar11;
  undefined4 *extraout_x8;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  double dVar18;
  undefined **ppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 auStack_128 [2];
  char cStack_111;
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  code *pcStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_88;
  
  if ((int)param_1 == 3) {
    return param_1;
  }
  piVar11 = (int *)0x0;
  FUN_10a052ee0(3,0,param_1);
  if (*piVar11 == 3) {
    dVar18 = *(double *)(piVar11 + 2);
    plVar16 = (long *)0x7fffffffffffffff;
    if (dVar18 <= 0.0) {
      plVar16 = (long *)0x8000000000000000;
    }
    plVar6 = (long *)0x0;
    if (!NAN(dVar18)) {
      plVar6 = plVar16;
    }
    plVar16 = (long *)(long)dVar18;
    if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
      plVar16 = plVar6;
    }
    return plVar16;
  }
  plVar16 = (long *)&UNK_10f68f550;
  func_0x00010988bd28();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar16;
  (**(code **)(*plVar16 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a9fe324(param_4);
  func_0x000109898570(auStack_128,plVar16,param_1);
  plVar10 = plVar16;
  func_0x00010989847c(plVar16,param_1 + 2);
  FUN_10a086014(&ppuStack_150,plVar16,param_1 + 4);
  ppuVar7 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  uVar17 = *(undefined8 *)(*(long *)(*ppuVar7 + 0xab0) + 0x88);
  FUN_10a76b904(&pcStack_f8);
  lStack_c0 = lStack_f0;
  lStack_f0 = 0;
  pcStack_d0 = FUN_10a9ffd20;
  ppuStack_c8 = &PTR_FUN_110c379c8;
  lStack_100 = 0;
  FUN_10a3ca004();
  ppuVar7 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puVar12 = *ppuVar7;
  puStack_e8 = &UNK_10f63b699;
  puStack_e0 = (undefined8 *)0x28;
  if (puVar12 == (undefined *)0x0) {
    FUN_10a0edfc4(&puStack_e8);
    goto LAB_10a9fe1b0;
  }
  plStack_110 = *(long **)(puVar12 + 0x10);
  plVar16 = *(long **)(puVar12 + 0x18);
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_108 = plVar16;
  if (plStack_110 == (long *)0x0) {
    (*pcStack_d0)(plVar10,&pcStack_d0);
  }
  else {
    (**(code **)(*plStack_110 + 0x20))(plStack_110,auStack_128,plVar10,&pcStack_d0);
  }
  if (plVar16 != (long *)0x0) {
    plVar10 = plVar16 + 1;
    do {
      lVar13 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  (*(code *)*ppuStack_c8)(&ppuStack_c8);
  if (lStack_100 != 0) {
    func_0x0001092b4274(&lStack_100);
  }
  pcStack_d0 = pcStack_f8;
  pcStack_f8 = (code *)0x0;
  lStack_c0 = lStack_148;
  ppuStack_c8 = ppuStack_150;
  if (lStack_148 != 0) {
    plVar16 = (long *)(lStack_148 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = *plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_b0 = lStack_138;
  uStack_b8 = uStack_140;
  if (lStack_138 != 0) {
    plVar16 = (long *)(lStack_138 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = *plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar8 = (undefined8 *)0x90;
  __Znwm();
  *puVar8 = FUN_10aa13d60;
  puVar8[1] = FUN_10aa14004;
  func_0x0001092ba17c(puVar8 + 2);
  pcVar5 = pcStack_d0;
  plVar16 = (long *)puVar8[7];
  if (plVar16 != (long *)0x0) {
    plVar10 = plVar16 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pcStack_d0 = (code *)0x0;
  puVar8[10] = ppuStack_c8;
  puVar8[9] = pcVar5;
  puVar8[0xb] = lStack_c0;
  if (lStack_c0 != 0) {
    plVar10 = (long *)(lStack_c0 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar8[0xd] = lStack_b0;
  puVar8[0xc] = uStack_b8;
  if (lStack_b0 != 0) {
    plVar10 = (long *)(lStack_b0 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar8[0xe] = uVar17;
  *(undefined1 *)(puVar8 + 0xf) = 0;
  *(undefined1 *)(puVar8 + 0x11) = 0;
  puVar9 = puVar8 + 0xe;
  func_0x0001092ba064(puVar9,puVar8);
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10a9f5560(puVar8 + 0x10,puVar8 + 9);
    puVar8[0xe] = puVar8[0x10];
    plVar10 = (long *)(puVar8[0x10] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar8[0xe] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0x11) = 1;
      lVar13 = puVar8[0xe];
      plVar10 = (long *)(lVar13 + 0x10);
      uVar17 = puVar8[3];
      do {
        lVar15 = *plVar10;
        if (lVar15 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            puStack_e8 = (undefined *)0x0;
            puStack_e0 = puVar8;
            uStack_d8 = uVar17;
            func_0x000109d1b588(lVar13 + 0x18,&puStack_e8);
            *(undefined8 *)(lVar13 + 0x10) = 0;
            goto LAB_10a9fe03c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar15 >> 1 & 1) == 0);
    }
    plVar10 = (long *)puVar8[0xe];
    if (((uint)*(undefined8 *)(puVar8[0xe] + 0x10) >> 5 & 1) == 0) {
      if (plVar10 != (long *)0x0) {
        puVar2 = (ulong *)(plVar10 + 1);
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar14 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      plVar10 = (long *)puVar8[0x10];
      if (plVar10 != (long *)0x0) {
        puVar2 = (ulong *)(plVar10 + 1);
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar14 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar8 + 2);
      FUN_10a688c1c(puVar8 + 10);
      plVar10 = (long *)puVar8[9];
      if (plVar10 != (long *)0x0) {
        puVar2 = (ulong *)(plVar10 + 1);
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar14 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar8 + 2);
      __ZdlPv(puVar8);
      goto LAB_10a9fe03c;
    }
  }
  else {
LAB_10a9fe03c:
    if (plVar16 != (long *)0x0) {
      puVar2 = (ulong *)(plVar16 + 1);
      do {
        uVar14 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar14 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar14 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar16 + 8))(plVar16);
        }
      }
    }
    FUN_10a688c1c((ulong)&pcStack_d0 | 8);
    if (pcStack_d0 != (code *)0x0) {
      pcVar5 = pcStack_d0 + 8;
      do {
        uVar14 = *(ulong *)pcVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
        if (bVar4) {
          *(ulong *)pcVar5 = uVar14 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *(ulong *)pcVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
          if (bVar4) {
            *(ulong *)pcVar5 = uVar14 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*(long *)pcStack_d0 + 8))();
        }
      }
    }
    if (lStack_f0 != 0) {
      func_0x0001092b4274(&lStack_f0);
    }
    if (pcStack_f8 != (code *)0x0) {
      pcVar5 = pcStack_f8 + 8;
      do {
        uVar14 = *(ulong *)pcVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
        if (bVar4) {
          *(ulong *)pcVar5 = uVar14 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *(ulong *)pcVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
          if (bVar4) {
            *(ulong *)pcVar5 = uVar14 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*(long *)pcStack_f8 + 8))();
        }
      }
    }
    FUN_10a688c1c(&ppuStack_150);
    if (cStack_111 < '\0') {
      __ZdlPv(auStack_128[0]);
    }
    *extraout_x8 = 0;
    plVar10 = plVar6 + 0x4b;
    func_0x00010988c170(plVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return plVar10;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(plVar10 + 0x12);
LAB_10a9fe1b0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9fe1b4);
  (*pcVar5)();
}



/* Entry: 10a9fdbcc; end: 10a9fe323;  */

void FUN_10a9fdbcc(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined **ppuStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 auStack_108 [2];
  char cStack_f1;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a9fe324(param_5);
  func_0x000109898570(auStack_108,param_2,param_4);
  plVar15 = param_2;
  func_0x00010989847c(param_2,param_4 + 0x10);
  FUN_10a086014(&ppuStack_130,param_2,param_4 + 0x20);
  ppuVar7 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  uVar16 = *(undefined8 *)(*(long *)(*ppuVar7 + 0xab0) + 0x88);
  FUN_10a76b904(&pcStack_d8);
  lStack_a0 = lStack_d0;
  lStack_d0 = 0;
  pcStack_b0 = FUN_10a9ffd20;
  ppuStack_a8 = &PTR_FUN_110c379c8;
  lStack_e0 = 0;
  FUN_10a3ca004();
  ppuVar7 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puVar11 = *ppuVar7;
  puStack_c8 = &UNK_10f63b699;
  puStack_c0 = (undefined8 *)0x28;
  if (puVar11 == (undefined *)0x0) {
    FUN_10a0edfc4(&puStack_c8);
    goto LAB_10a9fe1b0;
  }
  plStack_f0 = *(long **)(puVar11 + 0x10);
  plVar10 = *(long **)(puVar11 + 0x18);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_e8 = plVar10;
  if (plStack_f0 == (long *)0x0) {
    (*pcStack_b0)(plVar15,&pcStack_b0);
  }
  else {
    (**(code **)(*plStack_f0 + 0x20))(plStack_f0,auStack_108,plVar15,&pcStack_b0);
  }
  if (plVar10 != (long *)0x0) {
    plVar15 = plVar10 + 1;
    do {
      lVar12 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  if (lStack_e0 != 0) {
    func_0x0001092b4274(&lStack_e0);
  }
  pcStack_b0 = pcStack_d8;
  pcStack_d8 = (code *)0x0;
  lStack_a0 = lStack_128;
  ppuStack_a8 = ppuStack_130;
  if (lStack_128 != 0) {
    plVar15 = (long *)(lStack_128 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = *plVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_90 = lStack_118;
  uStack_98 = uStack_120;
  if (lStack_118 != 0) {
    plVar15 = (long *)(lStack_118 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = *plVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar8 = (undefined8 *)0x90;
  __Znwm();
  *puVar8 = FUN_10aa13d60;
  puVar8[1] = FUN_10aa14004;
  func_0x0001092ba17c(puVar8 + 2);
  pcVar5 = pcStack_b0;
  plVar15 = (long *)puVar8[7];
  if (plVar15 != (long *)0x0) {
    plVar10 = plVar15 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pcStack_b0 = (code *)0x0;
  puVar8[10] = ppuStack_a8;
  puVar8[9] = pcVar5;
  puVar8[0xb] = lStack_a0;
  if (lStack_a0 != 0) {
    plVar10 = (long *)(lStack_a0 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar8[0xd] = lStack_90;
  puVar8[0xc] = uStack_98;
  if (lStack_90 != 0) {
    plVar10 = (long *)(lStack_90 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar8[0xe] = uVar16;
  *(undefined1 *)(puVar8 + 0xf) = 0;
  *(undefined1 *)(puVar8 + 0x11) = 0;
  puVar9 = puVar8 + 0xe;
  func_0x0001092ba064(puVar9,puVar8);
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10a9f5560(puVar8 + 0x10,puVar8 + 9);
    puVar8[0xe] = puVar8[0x10];
    plVar10 = (long *)(puVar8[0x10] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar8[0xe] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0x11) = 1;
      lVar12 = puVar8[0xe];
      plVar10 = (long *)(lVar12 + 0x10);
      uVar16 = puVar8[3];
      do {
        lVar14 = *plVar10;
        if (lVar14 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            puStack_c8 = (undefined *)0x0;
            puStack_c0 = puVar8;
            uStack_b8 = uVar16;
            func_0x000109d1b588(lVar12 + 0x18,&puStack_c8);
            *(undefined8 *)(lVar12 + 0x10) = 0;
            goto LAB_10a9fe03c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar14 >> 1 & 1) == 0);
    }
    plVar10 = (long *)puVar8[0xe];
    if (((uint)*(undefined8 *)(puVar8[0xe] + 0x10) >> 5 & 1) == 0) {
      if (plVar10 != (long *)0x0) {
        puVar2 = (ulong *)(plVar10 + 1);
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      plVar10 = (long *)puVar8[0x10];
      if (plVar10 != (long *)0x0) {
        puVar2 = (ulong *)(plVar10 + 1);
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar8 + 2);
      FUN_10a688c1c(puVar8 + 10);
      plVar10 = (long *)puVar8[9];
      if (plVar10 != (long *)0x0) {
        puVar2 = (ulong *)(plVar10 + 1);
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar8 + 2);
      __ZdlPv(puVar8);
      goto LAB_10a9fe03c;
    }
  }
  else {
LAB_10a9fe03c:
    if (plVar15 != (long *)0x0) {
      puVar2 = (ulong *)(plVar15 + 1);
      do {
        uVar13 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar15 + 8))(plVar15);
        }
      }
    }
    FUN_10a688c1c((ulong)&pcStack_b0 | 8);
    if (pcStack_b0 != (code *)0x0) {
      pcVar5 = pcStack_b0 + 8;
      do {
        uVar13 = *(ulong *)pcVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
        if (bVar4) {
          *(ulong *)pcVar5 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *(ulong *)pcVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
          if (bVar4) {
            *(ulong *)pcVar5 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*(long *)pcStack_b0 + 8))();
        }
      }
    }
    if (lStack_d0 != 0) {
      func_0x0001092b4274(&lStack_d0);
    }
    if (pcStack_d8 != (code *)0x0) {
      pcVar5 = pcStack_d8 + 8;
      do {
        uVar13 = *(ulong *)pcVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
        if (bVar4) {
          *(ulong *)pcVar5 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *(ulong *)pcVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
          if (bVar4) {
            *(ulong *)pcVar5 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*(long *)pcStack_d8 + 8))();
        }
      }
    }
    FUN_10a688c1c(&ppuStack_130);
    if (cStack_f1 < '\0') {
      __ZdlPv(auStack_108[0]);
    }
    *param_1 = 0;
    plVar10 = plVar6 + 0x4b;
    func_0x00010988c170(plVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(plVar10 + 0x12);
LAB_10a9fe1b0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9fe1b4);
  (*pcVar5)();
}



/* Entry: 10a9fe324; end: 10a9fe347;  */

void FUN_10a9fe324(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined4 *extraout_x8;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  double dVar17;
  undefined **ppuStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 auStack_118 [2];
  char cStack_101;
  long *plStack_100;
  long *plStack_f8;
  long lStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_78;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar4 = (long *)0x3;
  FUN_10a052ee0(3,0);
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a9feb1c(param_4);
  func_0x000109898570(auStack_118,plVar4,param_1);
  if (*(int *)(param_1 + 0x10) != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
    goto LAB_10a9fe998;
  }
  dVar17 = *(double *)(param_1 + 0x18);
  FUN_10a201800(&ppuStack_140,plVar4,param_1 + 0x20);
  fVar16 = (float)dVar17;
  if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
    fVar16 = 0.0;
  }
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  uVar15 = *(undefined8 *)(*(long *)(*ppuVar6 + 0xab0) + 0x88);
  pcVar7 = (code *)0xa0;
  __Znwm();
  *(long *)(pcVar7 + 0x10) = 0;
  *(long *)(pcVar7 + 8) = 0x200000006;
  *(undefined2 *)(pcVar7 + 0x18) = 4;
  *(long *)(pcVar7 + 0x28) = 0;
  *(long *)(pcVar7 + 0x20) = 0;
  *(long *)(pcVar7 + 0x38) = 0;
  *(long *)(pcVar7 + 0x30) = 0;
  *(long *)(pcVar7 + 0x48) = 0;
  *(long *)(pcVar7 + 0x40) = 0;
  *(long *)(pcVar7 + 0x58) = 0;
  *(long *)(pcVar7 + 0x50) = 0;
  *(long *)(pcVar7 + 0x68) = 0;
  *(long *)(pcVar7 + 0x60) = 0;
  *(long *)(pcVar7 + 0x78) = 0;
  *(long *)(pcVar7 + 0x70) = 0;
  *(long *)(pcVar7 + 0x80) = 0;
  *(code **)(pcVar7 + 0x88) = pcVar7 + 0x18;
  *(long *)(pcVar7 + 0x90) = 0;
  *(undefined ***)pcVar7 = &PTR_FUN_110c37618;
  pcVar7[0x98] = (code)0x0;
  pcVar7[0x9c] = (code)0x0;
  lStack_e0 = 0;
  pcStack_c0 = FUN_10a9ffe1c;
  ppuStack_b8 = &PTR_FUN_110c379e0;
  lStack_f0 = 0;
  pcStack_e8 = pcVar7;
  pcStack_b0 = pcVar7;
  FUN_10a3ca004();
  ppuVar6 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puVar11 = *ppuVar6;
  puStack_d8 = &UNK_10f63b699;
  puStack_d0 = (undefined8 *)0x28;
  if (puVar11 == (undefined *)0x0) {
    FUN_10a0edfc4(&puStack_d8);
    goto LAB_10a9fe998;
  }
  plStack_100 = *(long **)(puVar11 + 0x10);
  plVar4 = *(long **)(puVar11 + 0x18);
  if (plVar4 != (long *)0x0) {
    plVar10 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_f8 = plVar4;
  if (plStack_100 == (long *)0x0) {
    (*pcStack_c0)(fVar16,&pcStack_c0);
  }
  else {
    (**(code **)(*plStack_100 + 0x28))(fVar16,plStack_100,auStack_118,&pcStack_c0);
  }
  if (plVar4 != (long *)0x0) {
    plVar10 = plVar4 + 1;
    do {
      lVar12 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  (*(code *)*ppuStack_b8)(&ppuStack_b8);
  if (lStack_f0 != 0) {
    func_0x0001092b4274(&lStack_f0);
  }
  pcStack_c0 = pcStack_e8;
  pcStack_e8 = (code *)0x0;
  pcStack_b0 = pcStack_138;
  ppuStack_b8 = ppuStack_140;
  if (pcStack_138 != (code *)0x0) {
    pcStack_138 = pcStack_138 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcStack_138,0x10);
      if (bVar3) {
        *(long *)pcStack_138 = *(long *)pcStack_138 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_a0 = lStack_128;
  uStack_a8 = uStack_130;
  if (lStack_128 != 0) {
    plVar4 = (long *)(lStack_128 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar8 = (undefined8 *)0x90;
  __Znwm();
  *puVar8 = FUN_10aa1453c;
  puVar8[1] = FUN_10aa147e0;
  func_0x0001092ba17c(puVar8 + 2);
  pcVar7 = pcStack_c0;
  plVar4 = (long *)puVar8[7];
  if (plVar4 != (long *)0x0) {
    plVar10 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_c0 = (code *)0x0;
  puVar8[10] = ppuStack_b8;
  puVar8[9] = pcVar7;
  puVar8[0xb] = pcStack_b0;
  if (pcStack_b0 != (code *)0x0) {
    pcVar7 = pcStack_b0 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
      if (bVar3) {
        *(long *)pcVar7 = *(long *)pcVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar8[0xd] = lStack_a0;
  puVar8[0xc] = uStack_a8;
  if (lStack_a0 != 0) {
    plVar10 = (long *)(lStack_a0 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar8[0xe] = uVar15;
  *(undefined1 *)(puVar8 + 0xf) = 0;
  *(undefined1 *)(puVar8 + 0x11) = 0;
  puVar9 = puVar8 + 0xe;
  func_0x0001092ba064(puVar9,puVar8);
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10a9f62f0(puVar8 + 0x10,puVar8 + 9);
    puVar8[0xe] = puVar8[0x10];
    plVar10 = (long *)(puVar8[0x10] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar8[0xe] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0x11) = 1;
      lVar12 = puVar8[0xe];
      plVar10 = (long *)(lVar12 + 0x10);
      uVar15 = puVar8[3];
      do {
        lVar14 = *plVar10;
        if (lVar14 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            puStack_d8 = (undefined *)0x0;
            puStack_d0 = puVar8;
            uStack_c8 = uVar15;
            func_0x000109d1b588(lVar12 + 0x18,&puStack_d8);
            *(undefined8 *)(lVar12 + 0x10) = 0;
            goto LAB_10a9fe810;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar14 >> 1 & 1) == 0);
    }
    plVar10 = (long *)puVar8[0xe];
    if (((uint)*(undefined8 *)(puVar8[0xe] + 0x10) >> 5 & 1) == 0) {
      if (plVar10 != (long *)0x0) {
        puVar1 = (ulong *)(plVar10 + 1);
        do {
          uVar13 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar13 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar13 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      plVar10 = (long *)puVar8[0x10];
      if (plVar10 != (long *)0x0) {
        puVar1 = (ulong *)(plVar10 + 1);
        do {
          uVar13 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar13 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar13 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar8 + 2);
      FUN_10a688c1c(puVar8 + 10);
      plVar10 = (long *)puVar8[9];
      if (plVar10 != (long *)0x0) {
        puVar1 = (ulong *)(plVar10 + 1);
        do {
          uVar13 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar13 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar13 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar8 + 2);
      __ZdlPv(puVar8);
      goto LAB_10a9fe810;
    }
  }
  else {
LAB_10a9fe810:
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar13 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar13 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar13 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
    FUN_10a688c1c((ulong)&pcStack_c0 | 8);
    if (pcStack_c0 != (code *)0x0) {
      pcVar7 = pcStack_c0 + 8;
      do {
        uVar13 = *(ulong *)pcVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
        if (bVar3) {
          *(ulong *)pcVar7 = uVar13 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *(ulong *)pcVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
          if (bVar3) {
            *(ulong *)pcVar7 = uVar13 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*(long *)pcStack_c0 + 8))();
        }
      }
    }
    if (lStack_e0 != 0) {
      func_0x0001092b4274(&lStack_e0);
    }
    if (pcStack_e8 != (code *)0x0) {
      pcVar7 = pcStack_e8 + 8;
      do {
        uVar13 = *(ulong *)pcVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
        if (bVar3) {
          *(ulong *)pcVar7 = uVar13 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *(ulong *)pcVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
          if (bVar3) {
            *(ulong *)pcVar7 = uVar13 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*(long *)pcStack_e8 + 8))();
        }
      }
    }
    FUN_10a688c1c(&ppuStack_140);
    if (cStack_101 < '\0') {
      __ZdlPv(auStack_118[0]);
    }
    *extraout_x8 = 0;
    plVar10 = plVar5 + 0x4b;
    func_0x00010988c170(plVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(plVar10 + 0x12);
LAB_10a9fe998:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a9fe99c);
  (*pcVar7)();
}



/* Entry: 10a9fe348; end: 10a9feb1b;  */

void FUN_10a9fe348(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  float fVar16;
  double dVar17;
  undefined **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 auStack_108 [2];
  char cStack_f1;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a9feb1c(param_5);
  func_0x000109898570(auStack_108,param_2,param_4);
  if (*(int *)(param_4 + 0x10) != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
    goto LAB_10a9fe998;
  }
  dVar17 = *(double *)(param_4 + 0x18);
  FUN_10a201800(&ppuStack_130,param_2,param_4 + 0x20);
  fVar16 = (float)dVar17;
  if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
    fVar16 = 0.0;
  }
  ppuVar5 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  uVar15 = *(undefined8 *)(*(long *)(*ppuVar5 + 0xab0) + 0x88);
  pcVar6 = (code *)0xa0;
  __Znwm();
  *(long *)(pcVar6 + 0x10) = 0;
  *(long *)(pcVar6 + 8) = 0x200000006;
  *(undefined2 *)(pcVar6 + 0x18) = 4;
  *(long *)(pcVar6 + 0x28) = 0;
  *(long *)(pcVar6 + 0x20) = 0;
  *(long *)(pcVar6 + 0x38) = 0;
  *(long *)(pcVar6 + 0x30) = 0;
  *(long *)(pcVar6 + 0x48) = 0;
  *(long *)(pcVar6 + 0x40) = 0;
  *(long *)(pcVar6 + 0x58) = 0;
  *(long *)(pcVar6 + 0x50) = 0;
  *(long *)(pcVar6 + 0x68) = 0;
  *(long *)(pcVar6 + 0x60) = 0;
  *(long *)(pcVar6 + 0x78) = 0;
  *(long *)(pcVar6 + 0x70) = 0;
  *(long *)(pcVar6 + 0x80) = 0;
  *(code **)(pcVar6 + 0x88) = pcVar6 + 0x18;
  *(long *)(pcVar6 + 0x90) = 0;
  *(undefined ***)pcVar6 = &PTR_FUN_110c37618;
  pcVar6[0x98] = (code)0x0;
  pcVar6[0x9c] = (code)0x0;
  lStack_d0 = 0;
  pcStack_b0 = FUN_10a9ffe1c;
  ppuStack_a8 = &PTR_FUN_110c379e0;
  lStack_e0 = 0;
  pcStack_d8 = pcVar6;
  pcStack_a0 = pcVar6;
  FUN_10a3ca004();
  ppuVar5 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puVar10 = *ppuVar5;
  puStack_c8 = &UNK_10f63b699;
  puStack_c0 = (undefined8 *)0x28;
  if (puVar10 == (undefined *)0x0) {
    FUN_10a0edfc4(&puStack_c8);
    goto LAB_10a9fe998;
  }
  plStack_f0 = *(long **)(puVar10 + 0x10);
  plVar14 = *(long **)(puVar10 + 0x18);
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_e8 = plVar14;
  if (plStack_f0 == (long *)0x0) {
    (*pcStack_b0)(fVar16,&pcStack_b0);
  }
  else {
    (**(code **)(*plStack_f0 + 0x28))(fVar16,plStack_f0,auStack_108,&pcStack_b0);
  }
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 1;
    do {
      lVar11 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  if (lStack_e0 != 0) {
    func_0x0001092b4274(&lStack_e0);
  }
  pcStack_b0 = pcStack_d8;
  pcStack_d8 = (code *)0x0;
  pcStack_a0 = pcStack_128;
  ppuStack_a8 = ppuStack_130;
  if (pcStack_128 != (code *)0x0) {
    pcStack_128 = pcStack_128 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcStack_128,0x10);
      if (bVar3) {
        *(long *)pcStack_128 = *(long *)pcStack_128 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_90 = lStack_118;
  uStack_98 = uStack_120;
  if (lStack_118 != 0) {
    plVar14 = (long *)(lStack_118 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = *plVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar7 = (undefined8 *)0x90;
  __Znwm();
  *puVar7 = FUN_10aa1453c;
  puVar7[1] = FUN_10aa147e0;
  func_0x0001092ba17c(puVar7 + 2);
  pcVar6 = pcStack_b0;
  plVar14 = (long *)puVar7[7];
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_b0 = (code *)0x0;
  puVar7[10] = ppuStack_a8;
  puVar7[9] = pcVar6;
  puVar7[0xb] = pcStack_a0;
  if (pcStack_a0 != (code *)0x0) {
    pcVar6 = pcStack_a0 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
      if (bVar3) {
        *(long *)pcVar6 = *(long *)pcVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar7[0xd] = lStack_90;
  puVar7[0xc] = uStack_98;
  if (lStack_90 != 0) {
    plVar9 = (long *)(lStack_90 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar7[0xe] = uVar15;
  *(undefined1 *)(puVar7 + 0xf) = 0;
  *(undefined1 *)(puVar7 + 0x11) = 0;
  puVar8 = puVar7 + 0xe;
  func_0x0001092ba064(puVar8,puVar7);
  if (((ulong)puVar8 & 1) == 0) {
    FUN_10a9f62f0(puVar7 + 0x10,puVar7 + 9);
    puVar7[0xe] = puVar7[0x10];
    plVar9 = (long *)(puVar7[0x10] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar7[0xe] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar7 + 0x11) = 1;
      lVar11 = puVar7[0xe];
      plVar9 = (long *)(lVar11 + 0x10);
      uVar15 = puVar7[3];
      do {
        lVar13 = *plVar9;
        if (lVar13 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            puStack_c8 = (undefined *)0x0;
            puStack_c0 = puVar7;
            uStack_b8 = uVar15;
            func_0x000109d1b588(lVar11 + 0x18,&puStack_c8);
            *(undefined8 *)(lVar11 + 0x10) = 0;
            goto LAB_10a9fe810;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar13 >> 1 & 1) == 0);
    }
    plVar9 = (long *)puVar7[0xe];
    if (((uint)*(undefined8 *)(puVar7[0xe] + 0x10) >> 5 & 1) == 0) {
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar12 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      plVar9 = (long *)puVar7[0x10];
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar12 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar7 + 2);
      FUN_10a688c1c(puVar7 + 10);
      plVar9 = (long *)puVar7[9];
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar12 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar7 + 2);
      __ZdlPv(puVar7);
      goto LAB_10a9fe810;
    }
  }
  else {
LAB_10a9fe810:
    if (plVar14 != (long *)0x0) {
      puVar1 = (ulong *)(plVar14 + 1);
      do {
        uVar12 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar12 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar12 - 1 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
    }
    FUN_10a688c1c((ulong)&pcStack_b0 | 8);
    if (pcStack_b0 != (code *)0x0) {
      pcVar6 = pcStack_b0 + 8;
      do {
        uVar12 = *(ulong *)pcVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
        if (bVar3) {
          *(ulong *)pcVar6 = uVar12 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *(ulong *)pcVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
          if (bVar3) {
            *(ulong *)pcVar6 = uVar12 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar12 - 1 == 0) {
          (**(code **)(*(long *)pcStack_b0 + 8))();
        }
      }
    }
    if (lStack_d0 != 0) {
      func_0x0001092b4274(&lStack_d0);
    }
    if (pcStack_d8 != (code *)0x0) {
      pcVar6 = pcStack_d8 + 8;
      do {
        uVar12 = *(ulong *)pcVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
        if (bVar3) {
          *(ulong *)pcVar6 = uVar12 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *(ulong *)pcVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
          if (bVar3) {
            *(ulong *)pcVar6 = uVar12 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar12 - 1 == 0) {
          (**(code **)(*(long *)pcStack_d8 + 8))();
        }
      }
    }
    FUN_10a688c1c(&ppuStack_130);
    if (cStack_f1 < '\0') {
      __ZdlPv(auStack_108[0]);
    }
    *param_1 = 0;
    plVar9 = plVar4 + 0x4b;
    func_0x00010988c170(plVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(plVar9 + 0x12);
LAB_10a9fe998:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9fe99c);
  (*pcVar6)();
}



/* Entry: 10a9feb1c; end: 10a9feb3f;  */

void FUN_10a9feb1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined4 *extraout_x8;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined **ppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  undefined8 auStack_108 [2];
  char cStack_f1;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_68;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar5 = (long *)0x3;
  FUN_10a052ee0(3,0,param_1);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a9ff2b0(param_4);
  func_0x000109898570(auStack_108,plVar5,param_1);
  func_0x000109898570(auStack_120,plVar5,param_1 + 0x10);
  FUN_10a1cf0a0(&ppuStack_140,plVar5,param_1 + 0x20);
  ppuVar7 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  uVar15 = *(undefined8 *)(*(long *)(*ppuVar7 + 0xab0) + 0x88);
  FUN_10a4f3d60(&pcStack_d8);
  lStack_a0 = lStack_d0;
  lStack_d0 = 0;
  pcStack_b0 = FUN_10a9ffed0;
  ppuStack_a8 = &PTR_FUN_110c379f8;
  lStack_e0 = 0;
  FUN_10a3ca004();
  ppuVar7 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puVar11 = *ppuVar7;
  puStack_c8 = &UNK_10f63b699;
  puStack_c0 = (undefined8 *)0x28;
  if (puVar11 == (undefined *)0x0) {
    FUN_10a0edfc4(&puStack_c8);
    goto LAB_10a9ff128;
  }
  plStack_f0 = *(long **)(puVar11 + 0x10);
  plVar5 = *(long **)(puVar11 + 0x18);
  if (plVar5 != (long *)0x0) {
    plVar10 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_e8 = plVar5;
  if (plStack_f0 == (long *)0x0) {
    FUN_10a2171d8(&pcStack_b0,auStack_120);
  }
  else {
    (**(code **)(*plStack_f0 + 0x30))(plStack_f0,auStack_108,auStack_120,&pcStack_b0);
  }
  if (plVar5 != (long *)0x0) {
    plVar10 = plVar5 + 1;
    do {
      lVar12 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  if (lStack_e0 != 0) {
    func_0x0001092b4274(&lStack_e0);
  }
  pcStack_b0 = pcStack_d8;
  pcStack_d8 = (code *)0x0;
  lStack_a0 = lStack_138;
  ppuStack_a8 = ppuStack_140;
  if (lStack_138 != 0) {
    plVar5 = (long *)(lStack_138 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_90 = lStack_128;
  uStack_98 = uStack_130;
  if (lStack_128 != 0) {
    plVar5 = (long *)(lStack_128 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar8 = (undefined8 *)0x90;
  __Znwm();
  *puVar8 = FUN_10aa14d14;
  puVar8[1] = FUN_10aa14fb8;
  func_0x0001092ba17c(puVar8 + 2);
  pcVar4 = pcStack_b0;
  plVar5 = (long *)puVar8[7];
  if (plVar5 != (long *)0x0) {
    plVar10 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_b0 = (code *)0x0;
  puVar8[10] = ppuStack_a8;
  puVar8[9] = pcVar4;
  puVar8[0xb] = lStack_a0;
  if (lStack_a0 != 0) {
    plVar10 = (long *)(lStack_a0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar8[0xd] = lStack_90;
  puVar8[0xc] = uStack_98;
  if (lStack_90 != 0) {
    plVar10 = (long *)(lStack_90 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar8[0xe] = uVar15;
  *(undefined1 *)(puVar8 + 0xf) = 0;
  *(undefined1 *)(puVar8 + 0x11) = 0;
  puVar9 = puVar8 + 0xe;
  func_0x0001092ba064(puVar9,puVar8);
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10a9f7140(puVar8 + 0x10,puVar8 + 9);
    puVar8[0xe] = puVar8[0x10];
    plVar10 = (long *)(puVar8[0x10] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar8[0xe] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0x11) = 1;
      lVar12 = puVar8[0xe];
      plVar10 = (long *)(lVar12 + 0x10);
      uVar15 = puVar8[3];
      do {
        lVar14 = *plVar10;
        if (lVar14 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            puStack_c8 = (undefined *)0x0;
            puStack_c0 = puVar8;
            uStack_b8 = uVar15;
            func_0x000109d1b588(lVar12 + 0x18,&puStack_c8);
            *(undefined8 *)(lVar12 + 0x10) = 0;
            goto LAB_10a9fefa8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar14 >> 1 & 1) == 0);
    }
    plVar10 = (long *)puVar8[0xe];
    if (((uint)*(undefined8 *)(puVar8[0xe] + 0x10) >> 5 & 1) == 0) {
      if (plVar10 != (long *)0x0) {
        puVar1 = (ulong *)(plVar10 + 1);
        do {
          uVar13 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar13 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar13 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      plVar10 = (long *)puVar8[0x10];
      if (plVar10 != (long *)0x0) {
        puVar1 = (ulong *)(plVar10 + 1);
        do {
          uVar13 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar13 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar13 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar8 + 2);
      FUN_10a688c1c(puVar8 + 10);
      plVar10 = (long *)puVar8[9];
      if (plVar10 != (long *)0x0) {
        puVar1 = (ulong *)(plVar10 + 1);
        do {
          uVar13 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar13 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar13 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar8 + 2);
      __ZdlPv(puVar8);
      goto LAB_10a9fefa8;
    }
  }
  else {
LAB_10a9fefa8:
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar13 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar13 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar13 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    FUN_10a688c1c((ulong)&pcStack_b0 | 8);
    if (pcStack_b0 != (code *)0x0) {
      pcVar4 = pcStack_b0 + 8;
      do {
        uVar13 = *(ulong *)pcVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
        if (bVar3) {
          *(ulong *)pcVar4 = uVar13 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *(ulong *)pcVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
          if (bVar3) {
            *(ulong *)pcVar4 = uVar13 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*(long *)pcStack_b0 + 8))();
        }
      }
    }
    if (lStack_d0 != 0) {
      func_0x0001092b4274(&lStack_d0);
    }
    if (pcStack_d8 != (code *)0x0) {
      pcVar4 = pcStack_d8 + 8;
      do {
        uVar13 = *(ulong *)pcVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
        if (bVar3) {
          *(ulong *)pcVar4 = uVar13 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *(ulong *)pcVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
          if (bVar3) {
            *(ulong *)pcVar4 = uVar13 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*(long *)pcStack_d8 + 8))();
        }
      }
    }
    FUN_10a688c1c(&ppuStack_140);
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
    }
    if (cStack_f1 < '\0') {
      __ZdlPv(auStack_108[0]);
    }
    *extraout_x8 = 0;
    plVar10 = plVar6 + 0x4b;
    func_0x00010988c170(plVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(plVar10 + 0x12);
LAB_10a9ff128:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9ff12c);
  (*pcVar4)();
}



/* Entry: 10a9feb40; end: 10a9ff2af;  */

void FUN_10a9feb40(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined **ppuStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 auStack_110 [2];
  char cStack_f9;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a9ff2b0(param_5);
  func_0x000109898570(auStack_f8,param_2,param_4);
  func_0x000109898570(auStack_110,param_2,param_4 + 0x10);
  FUN_10a1cf0a0(&ppuStack_130,param_2,param_4 + 0x20);
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  uVar15 = *(undefined8 *)(*(long *)(*ppuVar6 + 0xab0) + 0x88);
  FUN_10a4f3d60(&pcStack_c8);
  lStack_90 = lStack_c0;
  lStack_c0 = 0;
  pcStack_a0 = FUN_10a9ffed0;
  ppuStack_98 = &PTR_FUN_110c379f8;
  lStack_d0 = 0;
  FUN_10a3ca004();
  ppuVar6 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puVar10 = *ppuVar6;
  puStack_b8 = &UNK_10f63b699;
  puStack_b0 = (undefined8 *)0x28;
  if (puVar10 == (undefined *)0x0) {
    FUN_10a0edfc4(&puStack_b8);
    goto LAB_10a9ff128;
  }
  plStack_e0 = *(long **)(puVar10 + 0x10);
  plVar14 = *(long **)(puVar10 + 0x18);
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_d8 = plVar14;
  if (plStack_e0 == (long *)0x0) {
    FUN_10a2171d8(&pcStack_a0,auStack_110);
  }
  else {
    (**(code **)(*plStack_e0 + 0x30))(plStack_e0,auStack_f8,auStack_110,&pcStack_a0);
  }
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 1;
    do {
      lVar11 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  (*(code *)*ppuStack_98)(&ppuStack_98);
  if (lStack_d0 != 0) {
    func_0x0001092b4274(&lStack_d0);
  }
  pcStack_a0 = pcStack_c8;
  pcStack_c8 = (code *)0x0;
  lStack_90 = lStack_128;
  ppuStack_98 = ppuStack_130;
  if (lStack_128 != 0) {
    plVar14 = (long *)(lStack_128 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = *plVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_80 = lStack_118;
  uStack_88 = uStack_120;
  if (lStack_118 != 0) {
    plVar14 = (long *)(lStack_118 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = *plVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar7 = (undefined8 *)0x90;
  __Znwm();
  *puVar7 = FUN_10aa14d14;
  puVar7[1] = FUN_10aa14fb8;
  func_0x0001092ba17c(puVar7 + 2);
  pcVar4 = pcStack_a0;
  plVar14 = (long *)puVar7[7];
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_a0 = (code *)0x0;
  puVar7[10] = ppuStack_98;
  puVar7[9] = pcVar4;
  puVar7[0xb] = lStack_90;
  if (lStack_90 != 0) {
    plVar9 = (long *)(lStack_90 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar7[0xd] = lStack_80;
  puVar7[0xc] = uStack_88;
  if (lStack_80 != 0) {
    plVar9 = (long *)(lStack_80 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar7[0xe] = uVar15;
  *(undefined1 *)(puVar7 + 0xf) = 0;
  *(undefined1 *)(puVar7 + 0x11) = 0;
  puVar8 = puVar7 + 0xe;
  func_0x0001092ba064(puVar8,puVar7);
  if (((ulong)puVar8 & 1) == 0) {
    FUN_10a9f7140(puVar7 + 0x10,puVar7 + 9);
    puVar7[0xe] = puVar7[0x10];
    plVar9 = (long *)(puVar7[0x10] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar7[0xe] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar7 + 0x11) = 1;
      lVar11 = puVar7[0xe];
      plVar9 = (long *)(lVar11 + 0x10);
      uVar15 = puVar7[3];
      do {
        lVar13 = *plVar9;
        if (lVar13 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            puStack_b8 = (undefined *)0x0;
            puStack_b0 = puVar7;
            uStack_a8 = uVar15;
            func_0x000109d1b588(lVar11 + 0x18,&puStack_b8);
            *(undefined8 *)(lVar11 + 0x10) = 0;
            goto LAB_10a9fefa8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar13 >> 1 & 1) == 0);
    }
    plVar9 = (long *)puVar7[0xe];
    if (((uint)*(undefined8 *)(puVar7[0xe] + 0x10) >> 5 & 1) == 0) {
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar12 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      plVar9 = (long *)puVar7[0x10];
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar12 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar7 + 2);
      FUN_10a688c1c(puVar7 + 10);
      plVar9 = (long *)puVar7[9];
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar12 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar7 + 2);
      __ZdlPv(puVar7);
      goto LAB_10a9fefa8;
    }
  }
  else {
LAB_10a9fefa8:
    if (plVar14 != (long *)0x0) {
      puVar1 = (ulong *)(plVar14 + 1);
      do {
        uVar12 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar12 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar12 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar12 - 1 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
    }
    FUN_10a688c1c((ulong)&pcStack_a0 | 8);
    if (pcStack_a0 != (code *)0x0) {
      pcVar4 = pcStack_a0 + 8;
      do {
        uVar12 = *(ulong *)pcVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
        if (bVar3) {
          *(ulong *)pcVar4 = uVar12 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *(ulong *)pcVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
          if (bVar3) {
            *(ulong *)pcVar4 = uVar12 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar12 - 1 == 0) {
          (**(code **)(*(long *)pcStack_a0 + 8))();
        }
      }
    }
    if (lStack_c0 != 0) {
      func_0x0001092b4274(&lStack_c0);
    }
    if (pcStack_c8 != (code *)0x0) {
      pcVar4 = pcStack_c8 + 8;
      do {
        uVar12 = *(ulong *)pcVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
        if (bVar3) {
          *(ulong *)pcVar4 = uVar12 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *(ulong *)pcVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
          if (bVar3) {
            *(ulong *)pcVar4 = uVar12 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar12 - 1 == 0) {
          (**(code **)(*(long *)pcStack_c8 + 8))();
        }
      }
    }
    FUN_10a688c1c(&ppuStack_130);
    if (cStack_f9 < '\0') {
      __ZdlPv(auStack_110[0]);
    }
    if (cStack_e1 < '\0') {
      __ZdlPv(auStack_f8[0]);
    }
    *param_1 = 0;
    plVar9 = plVar5 + 0x4b;
    func_0x00010988c170(plVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(plVar9 + 0x12);
LAB_10a9ff128:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9ff12c);
  (*pcVar4)();
}



/* Entry: 10a9ff2b0; end: 10a9ff2d3;  */

void FUN_10a9ff2b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined4 *extraout_x8;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined **ppuStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 auStack_108 [2];
  char cStack_f1;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  code *pcStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_68;
  
  if ((int)param_1 == 3) {
    return;
  }
  pcVar5 = (code *)0x3;
  FUN_10a052ee0(3,0);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar5;
  (**(code **)(*(long *)pcVar5 + 0x58))();
  if (*(ulong *)(pcVar4 + 0x2c8) < 8) {
    *(long *)(pcVar4 + (*(ulong *)(pcVar4 + 0x2c8) + 0x4e) * 8) = *(long *)(pcVar4 + 0x2d0);
    *(long *)(pcVar4 + 0x2c8) = *(long *)(pcVar4 + 0x2c8) + 1;
  }
  else {
    func_0x00010988bfcc(pcVar4 + 600);
  }
  FUN_10a9ffb94(param_4);
  func_0x000109898570(auStack_108,pcVar5,param_1);
  FUN_10a4c25ec(&lStack_120,pcVar5,param_1 + 0x10);
  if (*(int *)(param_1 + 0x20) == 7) {
    pcVar6 = pcVar5;
    (**(code **)(*(long *)pcVar5 + 0x98))(pcVar5,*(undefined8 *)(param_1 + 0x28));
    pcVar7 = pcVar5;
    pcStack_c8 = pcVar6;
    (**(code **)(*(long *)pcVar5 + 0x228))(pcVar5,&pcStack_c8);
    if ((int)pcVar7 != 0) {
      pcVar6 = pcVar5;
      (**(code **)(*(long *)pcVar5 + 0x58))();
      lVar8 = *(long *)(pcVar6 + 0x240);
      if ((lVar8 == 0) ||
         (___dynamic_cast(lVar8,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), pcVar6 = pcStack_c8,
         lVar8 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a9ff9e0;
      }
      pcStack_c8 = (code *)0x0;
      ppuStack_a8 = (undefined **)CONCAT44(ppuStack_a8._4_4_,7);
      pcStack_a0 = pcVar6;
      pcStack_b0 = pcVar5;
      FUN_10a688ac0(&ppuStack_140,&pcStack_b0,*(undefined8 *)(lVar8 + 8));
      if ((3 < (int)ppuStack_a8) && (pcStack_a0 != (code *)0x0)) {
        (*(code *)**(undefined8 **)pcStack_a0)();
      }
    }
    if (pcStack_c8 != (code *)0x0) {
      (*(code *)**(undefined8 **)pcStack_c8)();
    }
    if (((ulong)pcVar7 & 1) != 0) {
      ppuVar9 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)();
      uVar17 = *(undefined8 *)(*(long *)(*ppuVar9 + 0xab0) + 0x88);
      pcVar5 = (code *)0xb8;
      __Znwm();
      *(long *)(pcVar5 + 0x10) = 0;
      *(long *)(pcVar5 + 8) = 0x200000006;
      *(undefined2 *)(pcVar5 + 0x18) = 4;
      *(long *)(pcVar5 + 0x28) = 0;
      *(long *)(pcVar5 + 0x20) = 0;
      *(long *)(pcVar5 + 0x38) = 0;
      *(long *)(pcVar5 + 0x30) = 0;
      *(long *)(pcVar5 + 0x48) = 0;
      *(long *)(pcVar5 + 0x40) = 0;
      *(long *)(pcVar5 + 0x58) = 0;
      *(long *)(pcVar5 + 0x50) = 0;
      *(long *)(pcVar5 + 0x68) = 0;
      *(long *)(pcVar5 + 0x60) = 0;
      *(long *)(pcVar5 + 0x78) = 0;
      *(long *)(pcVar5 + 0x70) = 0;
      *(long *)(pcVar5 + 0x80) = 0;
      *(code **)(pcVar5 + 0x88) = pcVar5 + 0x18;
      *(long *)(pcVar5 + 0x90) = 0;
      *(undefined ***)pcVar5 = &PTR_FUN_110ba7888;
      pcVar5[0x98] = (code)0x0;
      pcVar5[0xb0] = (code)0x0;
      lStack_d0 = 0;
      pcStack_b0 = FUN_10a9fff64;
      ppuStack_a8 = &PTR_FUN_110c37a10;
      lStack_e0 = 0;
      pcStack_d8 = pcVar5;
      pcStack_a0 = pcVar5;
      FUN_10a3ca004();
      ppuVar9 = &PTR___tlv_bootstrap_11340de28;
      (*(code *)PTR___tlv_bootstrap_11340de28)();
      puVar13 = *ppuVar9;
      pcStack_c8 = (code *)&UNK_10f63b699;
      puStack_c0 = (undefined8 *)0x28;
      if (puVar13 == (undefined *)0x0) {
        FUN_10a0edfc4(&pcStack_c8);
        goto LAB_10a9ff9e0;
      }
      plStack_f0 = *(long **)(puVar13 + 0x10);
      plVar16 = *(long **)(puVar13 + 0x18);
      if (plVar16 != (long *)0x0) {
        plVar12 = plVar16 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_e8 = plVar16;
      if (plStack_f0 == (long *)0x0) {
        FUN_10a217294(&pcStack_b0,&lStack_120);
      }
      else {
        (**(code **)(*plStack_f0 + 0x38))(plStack_f0,auStack_108,&lStack_120,&pcStack_b0);
      }
      if (plVar16 != (long *)0x0) {
        plVar12 = plVar16 + 1;
        do {
          lVar8 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      (*(code *)*ppuStack_a8)(&ppuStack_a8);
      if (lStack_e0 != 0) {
        func_0x0001092b4274(&lStack_e0);
      }
      pcStack_b0 = pcStack_d8;
      pcStack_d8 = (code *)0x0;
      pcStack_a0 = pcStack_138;
      ppuStack_a8 = ppuStack_140;
      if (pcStack_138 != (code *)0x0) {
        pcStack_138 = pcStack_138 + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcStack_138,0x10);
          if (bVar3) {
            *(long *)pcStack_138 = *(long *)pcStack_138 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_90 = lStack_128;
      uStack_98 = uStack_130;
      if (lStack_128 != 0) {
        plVar16 = (long *)(lStack_128 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = *plVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar10 = (undefined8 *)0x90;
      __Znwm();
      *puVar10 = FUN_10aa154f0;
      puVar10[1] = FUN_10aa15794;
      func_0x0001092ba17c(puVar10 + 2);
      pcVar5 = pcStack_b0;
      plVar16 = (long *)puVar10[7];
      if (plVar16 != (long *)0x0) {
        plVar12 = plVar16 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_b0 = (code *)0x0;
      puVar10[10] = ppuStack_a8;
      puVar10[9] = pcVar5;
      puVar10[0xb] = pcStack_a0;
      if (pcStack_a0 != (code *)0x0) {
        pcVar5 = pcStack_a0 + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
          if (bVar3) {
            *(long *)pcVar5 = *(long *)pcVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar10[0xd] = lStack_90;
      puVar10[0xc] = uStack_98;
      if (lStack_90 != 0) {
        plVar12 = (long *)(lStack_90 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar10[0xe] = uVar17;
      *(undefined1 *)(puVar10 + 0xf) = 0;
      *(undefined1 *)(puVar10 + 0x11) = 0;
      puVar11 = puVar10 + 0xe;
      func_0x0001092ba064(puVar11,puVar10);
      if (((ulong)puVar11 & 1) == 0) {
        FUN_10a9f746c(puVar10 + 0x10,puVar10 + 9);
        puVar10[0xe] = puVar10[0x10];
        plVar12 = (long *)(puVar10[0x10] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((uint)*(undefined8 *)(puVar10[0xe] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar10 + 0x11) = 1;
          lVar8 = puVar10[0xe];
          plVar12 = (long *)(lVar8 + 0x10);
          uVar17 = puVar10[3];
          do {
            lVar15 = *plVar12;
            if (lVar15 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *plVar12 = 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                pcStack_c8 = (code *)0x0;
                puStack_c0 = puVar10;
                uStack_b8 = uVar17;
                func_0x000109d1b588(lVar8 + 0x18,&pcStack_c8);
                *(undefined8 *)(lVar8 + 0x10) = 0;
                goto LAB_10a9ff83c;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar15 >> 1 & 1) == 0);
        }
        pcVar5 = (code *)puVar10[0xe];
        if (((uint)*(undefined8 *)(puVar10[0xe] + 0x10) >> 5 & 1) == 0) {
          if (pcVar5 != (code *)0x0) {
            pcVar6 = pcVar5 + 8;
            do {
              uVar14 = *(ulong *)pcVar6;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
              if (bVar3) {
                *(ulong *)pcVar6 = uVar14 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar14 & 0x1fffffffc) == 4) {
              do {
                uVar14 = *(ulong *)pcVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
                if (bVar3) {
                  *(ulong *)pcVar6 = uVar14 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar14 - 1 == 0) {
                (**(code **)(*(long *)pcVar5 + 8))();
              }
            }
          }
          plVar12 = (long *)puVar10[0x10];
          if (plVar12 != (long *)0x0) {
            puVar1 = (ulong *)(plVar12 + 1);
            do {
              uVar14 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar14 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar14 & 0x1fffffffc) == 4) {
              do {
                uVar14 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar14 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar14 - 1 == 0) {
                (**(code **)(*plVar12 + 8))();
              }
            }
          }
          func_0x0001092ba100(puVar10 + 2);
          FUN_10a688c1c(puVar10 + 10);
          plVar12 = (long *)puVar10[9];
          if (plVar12 != (long *)0x0) {
            puVar1 = (ulong *)(plVar12 + 1);
            do {
              uVar14 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar14 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar14 & 0x1fffffffc) == 4) {
              do {
                uVar14 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar14 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar14 - 1 == 0) {
                (**(code **)(*plVar12 + 8))();
              }
            }
          }
          func_0x000109d1a1d0(puVar10 + 2);
          __ZdlPv(puVar10);
          goto LAB_10a9ff83c;
        }
      }
      else {
LAB_10a9ff83c:
        if (plVar16 != (long *)0x0) {
          puVar1 = (ulong *)(plVar16 + 1);
          do {
            uVar14 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar14 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar14 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar16 + 8))(plVar16);
            }
          }
        }
        FUN_10a688c1c((ulong)&pcStack_b0 | 8);
        if (pcStack_b0 != (code *)0x0) {
          pcVar5 = pcStack_b0 + 8;
          do {
            uVar14 = *(ulong *)pcVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
            if (bVar3) {
              *(ulong *)pcVar5 = uVar14 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *(ulong *)pcVar5;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
              if (bVar3) {
                *(ulong *)pcVar5 = uVar14 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*(long *)pcStack_b0 + 8))();
            }
          }
        }
        if (lStack_d0 != 0) {
          func_0x0001092b4274(&lStack_d0);
        }
        if (pcStack_d8 != (code *)0x0) {
          pcVar5 = pcStack_d8 + 8;
          do {
            uVar14 = *(ulong *)pcVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
            if (bVar3) {
              *(ulong *)pcVar5 = uVar14 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *(ulong *)pcVar5;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
              if (bVar3) {
                *(ulong *)pcVar5 = uVar14 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*(long *)pcStack_d8 + 8))();
            }
          }
        }
        FUN_10a688c1c(&ppuStack_140);
        if (lStack_120 != 0) {
          lStack_118 = lStack_120;
          __ZdlPv();
        }
        if (cStack_f1 < '\0') {
          __ZdlPv(auStack_108[0]);
        }
        *extraout_x8 = 0;
        pcVar5 = pcVar4 + 600;
        func_0x00010988c170(pcVar5);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
          return;
        }
        ___stack_chk_fail();
      }
      func_0x0001092af97c(pcVar5 + 0x90);
      goto LAB_10a9ff9e0;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a9ff9e0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9ff9e4);
  (*pcVar4)();
}



/* Entry: 10a9ff2d4; end: 10a9ffb93;  */

void FUN_10a9ff2d4(undefined4 *param_1,code *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  undefined **ppuVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(pcVar4 + 0x2c8) < 8) {
    *(long *)(pcVar4 + (*(ulong *)(pcVar4 + 0x2c8) + 0x4e) * 8) = *(long *)(pcVar4 + 0x2d0);
    *(long *)(pcVar4 + 0x2c8) = *(long *)(pcVar4 + 0x2c8) + 1;
  }
  else {
    func_0x00010988bfcc(pcVar4 + 600);
  }
  FUN_10a9ffb94(param_5);
  func_0x000109898570(auStack_f8,param_2,param_4);
  FUN_10a4c25ec(&lStack_110,param_2,param_4 + 0x10);
  if (*(int *)(param_4 + 0x20) == 7) {
    pcVar8 = param_2;
    (**(code **)(*(long *)param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 0x28));
    pcVar5 = param_2;
    pcStack_b8 = pcVar8;
    (**(code **)(*(long *)param_2 + 0x228))(param_2,&pcStack_b8);
    if ((int)pcVar5 != 0) {
      pcVar8 = param_2;
      (**(code **)(*(long *)param_2 + 0x58))();
      lVar6 = *(long *)(pcVar8 + 0x240);
      if ((lVar6 == 0) ||
         (___dynamic_cast(lVar6,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), pcVar8 = pcStack_b8,
         lVar6 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a9ff9e0;
      }
      pcStack_b8 = (code *)0x0;
      ppuStack_98 = (undefined **)CONCAT44(ppuStack_98._4_4_,7);
      pcStack_90 = pcVar8;
      pcStack_a0 = param_2;
      FUN_10a688ac0(&ppuStack_130,&pcStack_a0,*(undefined8 *)(lVar6 + 8));
      if ((3 < (int)ppuStack_98) && (pcStack_90 != (code *)0x0)) {
        (*(code *)**(undefined8 **)pcStack_90)();
      }
    }
    if (pcStack_b8 != (code *)0x0) {
      (*(code *)**(undefined8 **)pcStack_b8)();
    }
    if (((ulong)pcVar5 & 1) != 0) {
      ppuVar7 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)();
      uVar16 = *(undefined8 *)(*(long *)(*ppuVar7 + 0xab0) + 0x88);
      pcVar8 = (code *)0xb8;
      __Znwm();
      *(long *)(pcVar8 + 0x10) = 0;
      *(long *)(pcVar8 + 8) = 0x200000006;
      *(undefined2 *)(pcVar8 + 0x18) = 4;
      *(long *)(pcVar8 + 0x28) = 0;
      *(long *)(pcVar8 + 0x20) = 0;
      *(long *)(pcVar8 + 0x38) = 0;
      *(long *)(pcVar8 + 0x30) = 0;
      *(long *)(pcVar8 + 0x48) = 0;
      *(long *)(pcVar8 + 0x40) = 0;
      *(long *)(pcVar8 + 0x58) = 0;
      *(long *)(pcVar8 + 0x50) = 0;
      *(long *)(pcVar8 + 0x68) = 0;
      *(long *)(pcVar8 + 0x60) = 0;
      *(long *)(pcVar8 + 0x78) = 0;
      *(long *)(pcVar8 + 0x70) = 0;
      *(long *)(pcVar8 + 0x80) = 0;
      *(code **)(pcVar8 + 0x88) = pcVar8 + 0x18;
      *(long *)(pcVar8 + 0x90) = 0;
      *(undefined ***)pcVar8 = &PTR_FUN_110ba7888;
      pcVar8[0x98] = (code)0x0;
      pcVar8[0xb0] = (code)0x0;
      lStack_c0 = 0;
      pcStack_a0 = FUN_10a9fff64;
      ppuStack_98 = &PTR_FUN_110c37a10;
      lStack_d0 = 0;
      pcStack_c8 = pcVar8;
      pcStack_90 = pcVar8;
      FUN_10a3ca004();
      ppuVar7 = &PTR___tlv_bootstrap_11340de28;
      (*(code *)PTR___tlv_bootstrap_11340de28)();
      puVar12 = *ppuVar7;
      pcStack_b8 = (code *)&UNK_10f63b699;
      puStack_b0 = (undefined8 *)0x28;
      if (puVar12 == (undefined *)0x0) {
        FUN_10a0edfc4(&pcStack_b8);
        goto LAB_10a9ff9e0;
      }
      plStack_e0 = *(long **)(puVar12 + 0x10);
      plVar15 = *(long **)(puVar12 + 0x18);
      if (plVar15 != (long *)0x0) {
        plVar11 = plVar15 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = *plVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_d8 = plVar15;
      if (plStack_e0 == (long *)0x0) {
        FUN_10a217294(&pcStack_a0,&lStack_110);
      }
      else {
        (**(code **)(*plStack_e0 + 0x38))(plStack_e0,auStack_f8,&lStack_110,&pcStack_a0);
      }
      if (plVar15 != (long *)0x0) {
        plVar11 = plVar15 + 1;
        do {
          lVar6 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      (*(code *)*ppuStack_98)(&ppuStack_98);
      if (lStack_d0 != 0) {
        func_0x0001092b4274(&lStack_d0);
      }
      pcStack_a0 = pcStack_c8;
      pcStack_c8 = (code *)0x0;
      pcStack_90 = pcStack_128;
      ppuStack_98 = ppuStack_130;
      if (pcStack_128 != (code *)0x0) {
        pcStack_128 = pcStack_128 + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcStack_128,0x10);
          if (bVar3) {
            *(long *)pcStack_128 = *(long *)pcStack_128 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_80 = lStack_118;
      uStack_88 = uStack_120;
      if (lStack_118 != 0) {
        plVar15 = (long *)(lStack_118 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = *plVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar9 = (undefined8 *)0x90;
      __Znwm();
      *puVar9 = FUN_10aa154f0;
      puVar9[1] = FUN_10aa15794;
      func_0x0001092ba17c(puVar9 + 2);
      pcVar8 = pcStack_a0;
      plVar15 = (long *)puVar9[7];
      if (plVar15 != (long *)0x0) {
        plVar11 = plVar15 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = *plVar11 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pcStack_a0 = (code *)0x0;
      puVar9[10] = ppuStack_98;
      puVar9[9] = pcVar8;
      puVar9[0xb] = pcStack_90;
      if (pcStack_90 != (code *)0x0) {
        pcVar8 = pcStack_90 + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
          if (bVar3) {
            *(long *)pcVar8 = *(long *)pcVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar9[0xd] = lStack_80;
      puVar9[0xc] = uStack_88;
      if (lStack_80 != 0) {
        plVar11 = (long *)(lStack_80 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = *plVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar9[0xe] = uVar16;
      *(undefined1 *)(puVar9 + 0xf) = 0;
      *(undefined1 *)(puVar9 + 0x11) = 0;
      puVar10 = puVar9 + 0xe;
      func_0x0001092ba064(puVar10,puVar9);
      if (((ulong)puVar10 & 1) == 0) {
        FUN_10a9f746c(puVar9 + 0x10,puVar9 + 9);
        puVar9[0xe] = puVar9[0x10];
        plVar11 = (long *)(puVar9[0x10] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = *plVar11 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((uint)*(undefined8 *)(puVar9[0xe] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar9 + 0x11) = 1;
          lVar6 = puVar9[0xe];
          plVar11 = (long *)(lVar6 + 0x10);
          uVar16 = puVar9[3];
          do {
            lVar14 = *plVar11;
            if (lVar14 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *plVar11 = 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                pcStack_b8 = (code *)0x0;
                puStack_b0 = puVar9;
                uStack_a8 = uVar16;
                func_0x000109d1b588(lVar6 + 0x18,&pcStack_b8);
                *(undefined8 *)(lVar6 + 0x10) = 0;
                goto LAB_10a9ff83c;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar14 >> 1 & 1) == 0);
        }
        pcVar8 = (code *)puVar9[0xe];
        if (((uint)*(undefined8 *)(puVar9[0xe] + 0x10) >> 5 & 1) == 0) {
          if (pcVar8 != (code *)0x0) {
            pcVar5 = pcVar8 + 8;
            do {
              uVar13 = *(ulong *)pcVar5;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
              if (bVar3) {
                *(ulong *)pcVar5 = uVar13 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar13 & 0x1fffffffc) == 4) {
              do {
                uVar13 = *(ulong *)pcVar5;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
                if (bVar3) {
                  *(ulong *)pcVar5 = uVar13 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar13 - 1 == 0) {
                (**(code **)(*(long *)pcVar8 + 8))();
              }
            }
          }
          plVar11 = (long *)puVar9[0x10];
          if (plVar11 != (long *)0x0) {
            puVar1 = (ulong *)(plVar11 + 1);
            do {
              uVar13 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar13 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar13 & 0x1fffffffc) == 4) {
              do {
                uVar13 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar13 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar13 - 1 == 0) {
                (**(code **)(*plVar11 + 8))();
              }
            }
          }
          func_0x0001092ba100(puVar9 + 2);
          FUN_10a688c1c(puVar9 + 10);
          plVar11 = (long *)puVar9[9];
          if (plVar11 != (long *)0x0) {
            puVar1 = (ulong *)(plVar11 + 1);
            do {
              uVar13 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar13 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar13 & 0x1fffffffc) == 4) {
              do {
                uVar13 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar13 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar13 - 1 == 0) {
                (**(code **)(*plVar11 + 8))();
              }
            }
          }
          func_0x000109d1a1d0(puVar9 + 2);
          __ZdlPv(puVar9);
          goto LAB_10a9ff83c;
        }
      }
      else {
LAB_10a9ff83c:
        if (plVar15 != (long *)0x0) {
          puVar1 = (ulong *)(plVar15 + 1);
          do {
            uVar13 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar13 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar13 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar15 + 8))(plVar15);
            }
          }
        }
        FUN_10a688c1c((ulong)&pcStack_a0 | 8);
        if (pcStack_a0 != (code *)0x0) {
          pcVar8 = pcStack_a0 + 8;
          do {
            uVar13 = *(ulong *)pcVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
            if (bVar3) {
              *(ulong *)pcVar8 = uVar13 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *(ulong *)pcVar8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
              if (bVar3) {
                *(ulong *)pcVar8 = uVar13 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*(long *)pcStack_a0 + 8))();
            }
          }
        }
        if (lStack_c0 != 0) {
          func_0x0001092b4274(&lStack_c0);
        }
        if (pcStack_c8 != (code *)0x0) {
          pcVar8 = pcStack_c8 + 8;
          do {
            uVar13 = *(ulong *)pcVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
            if (bVar3) {
              *(ulong *)pcVar8 = uVar13 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *(ulong *)pcVar8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
              if (bVar3) {
                *(ulong *)pcVar8 = uVar13 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*(long *)pcStack_c8 + 8))();
            }
          }
        }
        FUN_10a688c1c(&ppuStack_130);
        if (lStack_110 != 0) {
          lStack_108 = lStack_110;
          __ZdlPv();
        }
        if (cStack_e1 < '\0') {
          __ZdlPv(auStack_f8[0]);
        }
        *param_1 = 0;
        pcVar8 = pcVar4 + 600;
        func_0x00010988c170(pcVar8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          return;
        }
        ___stack_chk_fail();
      }
      func_0x0001092af97c(pcVar8 + 0x90);
      goto LAB_10a9ff9e0;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a9ff9e0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9ff9e4);
  (*pcVar4)();
}



/* Entry: 10a9ffb94; end: 10a9ffc43;  */

void FUN_10a9ffb94(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long lStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if ((int)param_1 == 3) {
    return;
  }
  uVar4 = 3;
  lVar5 = 0;
  FUN_10a052ee0(3,0,param_1);
  uStack_18 = 0x10a9ffbb8;
  lStack_28 = *(long *)(lVar5 + 0x10);
  *(undefined8 *)(lVar5 + 0x10) = 0;
  plVar1 = (long *)(lStack_28 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        *(undefined4 *)(lStack_28 + 0x98) = uVar4;
        *(undefined1 *)(lStack_28 + 0x9c) = 1;
        *(undefined8 *)(lStack_28 + 0x10) = 2;
        puStack_20 = &stack0xfffffffffffffff0;
        FUN_109d1b4dc(lStack_28 + 0x18);
        goto LAB_10a9ffc28;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    puStack_20 = &stack0xfffffffffffffff0;
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a9ffc28:
      if (lStack_28 != 0) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a9ffc44; end: 10a9ffc6b;  */

void FUN_10a9ffc44(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,(long *)(param_1 + 8));
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a9ffc6c; end: 10a9ffcf7;  */

void FUN_10a9ffc6c(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_18;
  
  lStack_18 = *(long *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  plVar1 = (long *)(lStack_18 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        *(undefined8 *)(lStack_18 + 0x98) = param_1;
        *(undefined1 *)(lStack_18 + 0xa0) = 1;
        *(undefined8 *)(lStack_18 + 0x10) = 2;
        FUN_109d1b4dc(lStack_18 + 0x18);
        goto LAB_10a9ffcdc;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
LAB_10a9ffcdc:
      if (lStack_18 != 0) {
        func_0x0001092b4274(&lStack_18);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a9ffcf8; end: 10a9ffd1f;  */

void FUN_10a9ffcf8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,(long *)(param_1 + 8));
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a9ffd20; end: 10a9ffdf3;  */

void FUN_10a9ffd20(undefined1 param_1,long param_2)

{
  long lVar1;
  undefined1 uStack_29;
  long lStack_28;
  
  lVar1 = *(long *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  uStack_29 = param_1;
  lStack_28 = lVar1;
  func_0x00010a9ffd6c(lVar1,&uStack_29);
  if (lVar1 != 0) {
    func_0x0001092b4274(&lStack_28,lVar1);
  }
  return;
}



/* Entry: 10a9ffdf4; end: 10a9ffe1b;  */

void FUN_10a9ffdf4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,(long *)(param_1 + 8));
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a9ffe1c; end: 10a9ffea7;  */

void FUN_10a9ffe1c(undefined4 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_18;
  
  lStack_18 = *(long *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  plVar1 = (long *)(lStack_18 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        *(undefined4 *)(lStack_18 + 0x98) = param_1;
        *(undefined1 *)(lStack_18 + 0x9c) = 1;
        *(undefined8 *)(lStack_18 + 0x10) = 2;
        FUN_109d1b4dc(lStack_18 + 0x18);
        goto LAB_10a9ffe8c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
LAB_10a9ffe8c:
      if (lStack_18 != 0) {
        func_0x0001092b4274(&lStack_18);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a9ffea8; end: 10a9ffecf;  */

void FUN_10a9ffea8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,(long *)(param_1 + 8));
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a9ffed0; end: 10a9fff3b;  */

void FUN_10a9ffed0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  lStack_30 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar1 = *(long *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lStack_28 = lVar1;
  FUN_10a7258a4(lVar1,&uStack_40);
  if (lVar1 != 0) {
    func_0x0001092b4274(&lStack_28,lVar1);
  }
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return;
}



/* Entry: 10a9fff3c; end: 10a9fff63;  */

void FUN_10a9fff3c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,(long *)(param_1 + 8));
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a9fff64; end: 10a9fffcf;  */

void FUN_10a9fff64(long *param_1,long param_2)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_38 = param_1[1];
  lStack_40 = *param_1;
  lStack_30 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar1 = *(long *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lStack_28 = lVar1;
  FUN_10a131ad8(lVar1,&lStack_40);
  if (lVar1 != 0) {
    func_0x0001092b4274(&lStack_28,lVar1);
  }
  if (lStack_40 != 0) {
    lStack_38 = lStack_40;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a9fffd0; end: 10a9ffff7;  */

void FUN_10a9fffd0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,(long *)(param_1 + 8));
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a9ffff8; end: 10aa000af;  */

void FUN_10a9ffff8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa000b0(param_2,param_3);
  FUN_10a052e3c(param_5);
  *(uint *)((long)param_2 + 0x1c) = *(uint *)((long)param_2 + 0x1c) | 1;
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa000b0; end: 10aa00117;  */

void FUN_10aa000b0(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10aa000b0(plVar4,param_2);
  FUN_10a052e3c(param_4);
  *(uint *)((long)plVar4 + 0x1c) = *(uint *)((long)plVar4 + 0x1c) | 2;
  *extraout_x8 = 0;
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10aa00118; end: 10aa001cf;  */

void FUN_10aa00118(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa000b0(param_2,param_3);
  FUN_10a052e3c(param_5);
  *(uint *)((long)param_2 + 0x1c) = *(uint *)((long)param_2 + 0x1c) | 2;
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa001d0; end: 10aa00287;  */

void FUN_10aa001d0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa000b0(param_2,param_3);
  FUN_10a052e3c(param_5);
  *(uint *)((long)param_2 + 0x1c) = *(uint *)((long)param_2 + 0x1c) | 4;
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa00288; end: 10aa0033f;  */

void FUN_10aa00288(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa000b0(param_2,param_3);
  FUN_10a052e3c(param_5);
  *(uint *)((long)param_2 + 0x1c) = *(uint *)((long)param_2 + 0x1c) | 8;
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa00340; end: 10aa0041f;  */

void FUN_10aa00340(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa000b0(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010ae06f08(1,4,&UNK_10f689094,&UNK_10f6890d5,0x1a,&UNK_10f689141);
  *(uint *)((long)param_2 + 0x1c) = *(uint *)((long)param_2 + 0x1c) | 0x10;
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa00420; end: 10aa004d7;  */

void FUN_10aa00420(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa000b0(param_2,param_3);
  FUN_10a052e3c(param_5);
  *(uint *)((long)param_2 + 0x1c) = *(uint *)((long)param_2 + 0x1c) | 0x20;
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa004d8; end: 10aa0058f;  */

void FUN_10aa004d8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa000b0(param_2,param_3);
  FUN_10a052e3c(param_5);
  *(uint *)((long)param_2 + 0x1c) = *(uint *)((long)param_2 + 0x1c) | 0x40;
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa00590; end: 10aa005cf;  */

void FUN_10aa00590(undefined8 *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar3 = param_1;
  FUN_10aa005d0();
  if (param_1 + 1 == puVar3) {
    return;
  }
  puVar5 = puVar3;
  puVar1 = (undefined8 *)puVar3[1];
  if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) {
    do {
      puVar4 = (undefined8 *)puVar5[2];
      bVar2 = (undefined8 *)*puVar4 != puVar5;
      puVar5 = puVar4;
    } while (bVar2);
  }
  else {
    do {
      puVar4 = puVar1;
      puVar1 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
  if ((undefined8 *)*param_1 == puVar3) {
    *param_1 = puVar4;
  }
  param_1[2] = param_1[2] + -1;
  FUN_10a04815c(param_1[1],puVar3);
  if (puVar3[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar3);
  return;
}



/* Entry: 10aa005d0; end: 10aa0064f;  */

long * FUN_10aa005d0(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  plVar4 = (long *)(param_1 + 8);
  plVar7 = (long *)*plVar4;
  plVar5 = plVar4;
  plVar6 = plVar4;
  if (plVar7 != (long *)0x0) {
    do {
      uVar8 = 0xff;
      if (param_2 <= plVar7[4]) {
        uVar8 = 0;
      }
      if (plVar7[4] == param_2) {
        uVar3 = 0xff;
        if (param_3 <= plVar7[5]) {
          uVar3 = 0;
        }
        uVar8 = 0;
        if (plVar7[5] != param_3) {
          uVar8 = uVar3;
        }
      }
      plVar2 = plVar7;
      if ((uVar8 & 0x80) != 0) {
        plVar2 = plVar6;
      }
      plVar7 = *(long **)((long)plVar7 + ((uVar8 & 0x80) >> 4));
      plVar6 = plVar2;
    } while (plVar7 != (long *)0x0);
    if (plVar4 != plVar2) {
      bVar1 = param_2 < plVar2[4];
      if (param_2 == plVar2[4]) {
        bVar1 = param_3 != plVar2[5] && param_3 < plVar2[5];
      }
      plVar5 = plVar2;
      if (bVar1) {
        plVar5 = plVar4;
      }
    }
  }
  return plVar5;
}



/* Entry: 10aa00650; end: 10aa0072b;  */

void FUN_10aa00650(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = param_2;
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar3 = (long *)plVar4[2];
      bVar2 = (long *)*plVar3 != plVar4;
      plVar4 = plVar3;
    } while (bVar2);
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_10a04815c(param_1[1],param_2);
  if (param_2[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10aa0072c; end: 10aa0092b;  */

void FUN_10aa0072c(long *param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  
  plVar4 = param_1 + 1;
  plVar2 = (long *)*plVar4;
joined_r0x00010aa0074c:
  plVar5 = plVar4;
  if (plVar2 == (long *)0x0) {
LAB_10aa007b8:
    puVar1 = (undefined8 *)0x50;
    __Znwm();
    uVar6 = *param_4;
    puVar1[5] = param_4[1];
    puVar1[4] = uVar6;
    puVar1[6] = param_4[2];
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_4 + 3);
    uVar6 = param_4[4];
    puVar1[9] = param_4[5];
    puVar1[8] = uVar6;
    param_4[4] = 0;
    param_4[5] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = plVar4;
    *plVar5 = (long)puVar1;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar1 = (undefined8 *)*plVar5;
    }
    func_0x000107c2b058(param_1[1],puVar1);
    param_1[2] = param_1[2] + 1;
    return;
  }
  do {
    plVar4 = plVar2;
    lVar3 = plVar4[4];
    if (param_2 == lVar3) {
      lVar3 = plVar4[5];
      if (param_3 < lVar3) break;
      if (lVar3 == param_3 || param_3 <= lVar3) {
        return;
      }
    }
    else {
      if (param_2 < lVar3) break;
      if (param_2 <= lVar3) {
        return;
      }
    }
    plVar2 = (long *)plVar4[1];
    if ((long *)plVar4[1] == (long *)0x0) {
      plVar5 = plVar4 + 1;
      goto LAB_10aa007b8;
    }
  } while( true );
  plVar2 = (long *)*plVar4;
  goto joined_r0x00010aa0074c;
}



/* Entry: 10aa0092c; end: 10aa0097f;  */

ulong FUN_10aa0092c(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10aa00980,0);
  }
  return param_1;
}



/* Entry: 10aa00980; end: 10aa00a3b;  */

void FUN_10aa00980(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa00a3c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa00a3c; end: 10aa00af7;  */

undefined ** FUN_10aa00a3c(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar1;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  FUN_10a0051e8();
  if (((ulong)ppuVar2 & 1) == 0) {
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10aa00af8,0);
  }
  return ppuVar1;
}



/* Entry: 10aa00af8; end: 10aa00bb3;  */

void FUN_10aa00af8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa00a3c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa00bb4; end: 10aa00c07;  */

ulong FUN_10aa00bb4(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10aa00c08,0);
  }
  return param_1;
}



/* Entry: 10aa00c08; end: 10aa00cc3;  */

void FUN_10aa00c08(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa00a3c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa00cc4; end: 10aa00d7f;  */

void FUN_10aa00cc4(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f689ea4,0x12);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa00d80);
  (*pcVar4)();
}



/* Entry: 10aa00d80; end: 10aa00e83;  */

void FUN_10aa00d80(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10aa00e84(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a9dbc34(&stack0xffffffffffffffb0,plVar6);
  FUN_10a140470(param_1,param_2,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10aa00e84; end: 10aa00eeb;  */

void FUN_10aa00e84(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *in_stack_ffffffffffffff98;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c382c0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar6 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = plVar6;
  FUN_10aa00e84(plVar6,param_2);
  FUN_10a763820(param_4);
  plVar9 = plVar6;
  func_0x000109898518(plVar6,param_3);
  FUN_10a9dbcc4(&stack0xffffffffffffff90,plVar8,plVar9);
  FUN_10a140470(extraout_x8,plVar6,&stack0xffffffffffffff90);
  if (in_stack_ffffffffffffff98 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffff98 + 1;
    do {
      lVar12 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*in_stack_ffffffffffffff98 + 0x10))(in_stack_ffffffffffffff98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff98);
    }
  }
  plVar6 = plVar7 + 0x4b;
  lVar12 = plVar7[0x59];
  uVar10 = lVar12 - 1;
  plVar7[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar6[lVar12 + 2];
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar10) {
      return;
    }
  }
  lVar12 = *plVar6;
  lVar15 = plVar7[0x4c];
  lVar13 = lVar15 - lVar12;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar10) {
    uVar18 = uVar10 - uVar17;
    lVar16 = plVar7[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar12 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_88 = plVar6;
        if (uVar11 >> 0x3c == 0) {
          lVar4 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar4 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar12,lVar13);
          *plVar6 = lVar14;
          plVar7[0x4c] = lVar15 + uVar18 * 0x10;
          plVar7[0x4d] = lVar4 + uVar11 * 0x10;
          lStack_a8 = lVar12;
          lStack_a0 = lVar12;
          lStack_98 = lVar12;
          lStack_90 = lVar16;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar15,uVar18 * 0x10);
    plVar7[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar10 < uVar17) {
    lVar12 = lVar12 + uVar10 * 0x10;
    while (lVar15 != lVar12) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar7[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar10;
  return;
}



/* Entry: 10aa00eec; end: 10aa01003;  */

void FUN_10aa00eec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10aa00e84(param_2,param_3);
  FUN_10a763820(param_5);
  plVar7 = param_2;
  func_0x000109898518(param_2,param_4);
  FUN_10a9dbcc4(&stack0xffffffffffffffb0,plVar6,plVar7);
  FUN_10a140470(param_1,param_2,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar10 = plVar5[0x59];
  uVar8 = lVar10 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar6[lVar10 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar6;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar9 >> 0x3c == 0) {
          lVar4 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar4 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar6 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar4 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10aa01004; end: 10aa010b7;  */

void FUN_10aa01004(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa00e84(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = 0x3ff0000000000000;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa010b8; end: 10aa01167;  */

void FUN_10aa010b8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa01168(param_1,param_2,FUN_10a9dba48,0,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa01168; end: 10aa01247;  */

void FUN_10aa01168(undefined4 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined1 **ppuVar1;
  long *plVar2;
  undefined1 *puStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined8 uStack_48;
  
  plVar2 = param_2;
  FUN_10aa00e84(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)((long)plVar2 + ((long)param_4 >> 1)) +
                        ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&puStack_60);
  ppuVar1 = (undefined1 **)puStack_60;
  if (-1 < (char)bStack_49) {
    uStack_58 = (ulong)bStack_49;
    ppuVar1 = &puStack_60;
  }
  (**(code **)(*param_2 + 0x128))(&uStack_48,param_2,ppuVar1,uStack_58);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  if ((char)bStack_49 < '\0') {
    __ZdlPv(puStack_60);
  }
  return;
}



/* Entry: 10aa01248; end: 10aa012f7;  */

void FUN_10aa01248(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa01168(param_1,param_2,FUN_10a9dba58,0,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa012f8; end: 10aa013b7;  */

void FUN_10aa012f8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10aa00e84(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = iRam00000001132ffd98;
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10aa013b8; end: 10aa0159b;  */

void FUN_10aa013b8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10aa00e84(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[3];
  func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f6893df);
  if (lVar13 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar13 + 0x8d8),&stack0xffffffffffffffa8);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  plVar7 = *(long **)(*(long *)(param_2[3] + 0x100) + 0x1c8);
  (**(code **)(*plVar7 + 0x78))();
  plVar8 = (long *)plVar7[1];
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0x0;
LAB_10aa014bc:
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f68940f,&UNK_10f68944f,0x166,&UNK_10f6894aa);
    }
    iVar11 = 0;
    iVar3 = 0;
    if (plVar8 != (long *)0x0) goto LAB_10aa014f8;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plVar8 == (long *)0x0) || (plVar7 = (long *)*plVar7, plVar7 == (long *)0x0))
    goto LAB_10aa014bc;
    (**(code **)(*plVar7 + 0x10))();
    iVar3 = (int)plVar7;
LAB_10aa014f8:
    iVar11 = iVar3;
    plVar7 = plVar8 + 1;
    do {
      lVar13 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar11;
  plVar8 = plVar6 + 0x4b;
  lVar13 = plVar6[0x59];
  uVar9 = lVar13 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar8[lVar13 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  lVar13 = *plVar8;
  lVar15 = plVar6[0x4c];
  lVar12 = lVar15 - lVar13;
  uVar17 = lVar12 >> 4;
  if (uVar17 < uVar9) {
    uVar18 = uVar9 - uVar17;
    lVar16 = plVar6[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar16 - lVar13 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar13)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar8;
        if (uVar10 >> 0x3c == 0) {
          lVar5 = uVar10 << 4;
          __Znwm();
          lVar15 = lVar5 + lVar12;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar13,lVar12);
          *plVar8 = lVar14;
          plVar6[0x4c] = lVar15 + uVar18 * 0x10;
          plVar6[0x4d] = lVar5 + uVar10 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
          lStack_70 = lVar16;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar15,uVar18 * 0x10);
    plVar6[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar9 < uVar17) {
    lVar13 = lVar13 + uVar9 * 0x10;
    while (lVar15 != lVar13) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar6[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10aa0159c; end: 10aa0164b;  */

void FUN_10aa0159c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa0164c(param_1,param_2,FUN_10a9dbadc,0,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa0164c; end: 10aa0172b;  */

void FUN_10aa0164c(undefined4 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined1 **ppuVar1;
  long *plVar2;
  undefined1 *puStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined8 uStack_48;
  
  plVar2 = param_2;
  FUN_10aa0172c(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)((long)plVar2 + ((long)param_4 >> 1)) +
                        ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&puStack_60);
  ppuVar1 = (undefined1 **)puStack_60;
  if (-1 < (char)bStack_49) {
    uStack_58 = (ulong)bStack_49;
    ppuVar1 = &puStack_60;
  }
  (**(code **)(*param_2 + 0x128))(&uStack_48,param_2,ppuVar1,uStack_58);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  if ((char)bStack_49 < '\0') {
    __ZdlPv(puStack_60);
  }
  return;
}



/* Entry: 10aa0172c; end: 10aa01793;  */

void FUN_10aa0172c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10aa0164c(extraout_x8,plVar4,0x10a9dbba4,0,param_2,param_4);
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10aa01794; end: 10aa01843;  */

void FUN_10aa01794(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa0164c(param_1,param_2,0x10a9dbba4,0,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa01844; end: 10aa018f3;  */

void FUN_10aa01844(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa00e84(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa018f4; end: 10aa019a3;  */

void FUN_10aa018f4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa00e84(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa019a4; end: 10aa01a57;  */

void FUN_10aa019a4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa00e84(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = 1;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa01a58; end: 10aa01b07;  */

void FUN_10aa01a58(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa00e84(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa01b08; end: 10aa01bb7;  */

void FUN_10aa01b08(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa00e84(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa01bb8; end: 10aa01cc7;  */

void FUN_10aa01bb8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10aa00e84(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar8 = param_2[3];
  func_0x000107c2b054(&stack0xffffffffffffffa8,&UNK_10f6893b6);
  if (lVar8 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar8 + 0x8d8),&stack0xffffffffffffffa8);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  uVar3 = 0;
  FUN_10ad59f2c();
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  plVar1 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar6 = lVar8 - 1;
  plVar5[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar8 + 2];
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  lVar8 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar8;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar12 - lVar8 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar8)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar4 = uVar7 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar8,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar7 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar8 = lVar8 + uVar6 * 0x10;
    while (lVar11 != lVar8) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar6;
  return;
}



/* Entry: 10aa01cc8; end: 10aa01f13;  */

/* WARNING: Removing unreachable block (ram,0x00010aa01e14) */

void FUN_10aa01cc8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10aa00e84(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar6 = *(long **)(*(long *)(param_2[3] + 0x100) + 0x1c8);
  (**(code **)(*plVar6 + 0x130))();
  plVar7 = (long *)plVar6[1];
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
LAB_10aa01d98:
    FUN_10a3ca004();
    ppuVar8 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    puStack_70 = &UNK_10f63b699;
    plStack_68 = (long *)0x28;
    if (*ppuVar8 == (undefined *)0x0) {
      FUN_10a0edfc4(&puStack_70);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa01ed4);
      (*pcVar3)();
    }
    plVar6 = *(long **)(*ppuVar8 + 0x10);
    if (plVar6 == (long *)0x0) {
      if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
        uVar12 = 1;
      }
      else {
        uVar12 = 1;
        func_0x00010ae06f08(1,2,&UNK_10f68940f,&UNK_10f6894eb,0x174,&UNK_10f68953d);
      }
    }
    else {
      plStack_68 = (long *)0x54535f454e494c4e;
      puStack_70 = (undefined *)0x4f5f454349564544;
      (**(code **)(*plVar6 + 0x50))(plVar6,&puStack_70,1);
      uVar12 = SUB81(plVar6,0);
    }
    if (plVar7 != (long *)0x0) goto LAB_10aa01e64;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plVar7 == (long *)0x0) || (plVar6 = (long *)*plVar6, plVar6 == (long *)0x0))
    goto LAB_10aa01d98;
    (**(code **)(*plVar6 + 0x10))();
    uVar12 = SUB81(plVar6,0);
LAB_10aa01e64:
    plVar6 = plVar7 + 1;
    do {
      lVar11 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar12;
  plVar7 = plVar5 + 0x4b;
  lVar11 = plVar5[0x59];
  uVar9 = lVar11 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar7[lVar11 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  lVar11 = *plVar7;
  lVar15 = plVar5[0x4c];
  lVar13 = lVar15 - lVar11;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar9) {
    uVar18 = uVar9 - uVar17;
    puVar16 = (undefined *)plVar5[0x4d];
    if ((ulong)((long)puVar16 - lVar15 >> 4) < uVar18) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = (long)puVar16 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar16 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar10 >> 0x3c == 0) {
          lVar4 = uVar10 << 4;
          __Znwm();
          lVar15 = lVar4 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar11,lVar13);
          *plVar7 = lVar14;
          plVar5[0x4c] = lVar15 + uVar18 * 0x10;
          plVar5[0x4d] = lVar4 + uVar10 * 0x10;
          lStack_88 = lVar11;
          lStack_80 = lVar11;
          lStack_78 = lVar11;
          puStack_70 = puVar16;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar15,uVar18 * 0x10);
    plVar5[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar9 < uVar17) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar15 != lVar11) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar5[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10aa01f14; end: 10aa02457;  */

void FUN_10aa01f14(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined4 uStack_7c;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar17 = *(long **)(param_1 + 0x78);
  if (plVar17 == (long *)0x0) {
    puVar6 = (undefined8 *)0x80;
    __Znwm();
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0x32aaaba7;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    plVar17 = (long *)0x20;
    __Znwm();
    plVar18 = plVar17 + 1;
    *plVar18 = 0;
    *plVar17 = (long)&PTR_FUN_110c37dd0;
    plVar17[2] = 0;
    plVar17[3] = (long)puVar6;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *plVar18 = *plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar14 = plVar17 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = *plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *puVar6 = puVar6;
    puVar6[1] = plVar17;
    do {
      lVar9 = *plVar18;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *plVar18 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
    plVar18 = *(long **)(param_1 + 0x80);
    *(undefined8 **)(param_1 + 0x78) = puVar6;
    *(long **)(param_1 + 0x80) = plVar17;
    if (plVar18 != (long *)0x0) {
      plVar17 = plVar18 + 1;
      do {
        lVar9 = *plVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    plVar17 = *(long **)(param_1 + 0x78);
  }
  __ZNSt3__15mutex4lockEv(plVar17 + 3);
  uVar16 = *param_2;
  if (*(char *)((long)plVar17 + 0x11) == '\x01') {
    FUN_10a087a3c(uVar16,plVar17 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(plVar17 + 3);
    return;
  }
  lVar9 = param_2[1];
  puVar6 = (undefined8 *)plVar17[0xc];
  if (puVar6 < (undefined8 *)plVar17[0xd]) {
    *puVar6 = uVar16;
    puVar6[1] = lVar9;
    if (lVar9 != 0) {
      plVar18 = (long *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *plVar18 = *plVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar6 = puVar6 + 2;
LAB_10aa02140:
    plVar17[0xc] = (long)puVar6;
    lVar9 = plVar17[0xb];
    __ZNSt3__15mutex6unlockEv(plVar17 + 3);
    if ((ulong)((long)puVar6 - lVar9) < 0x11) {
      ppuVar8 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)();
      puVar13 = *ppuVar8;
      plVar18 = (long *)0x28;
      __Znwm();
      lStack_68 = -0x7fffffffffffffd8;
      plStack_70 = (long *)0x24;
      *(undefined4 *)(plVar18 + 4) = 0x36366139;
      plVar18[1] = 0x63342d383134392d;
      *plVar18 = 0x6263326533326131;
      plVar18[3] = 0x3130386563343261;
      plVar18[2] = 0x2d363261612d6137;
      *(undefined1 *)((long)plVar18 + 0x24) = 0;
      uStack_7c = 1;
      plStack_78 = plVar18;
      FUN_10a03d494(&plStack_60,puVar13,&plStack_78,&uStack_7c);
      FUN_10a03d558(plVar17 + 0xe,&plStack_60);
      if (plStack_58 != (long *)0x0) {
        plVar18 = plStack_58 + 1;
        do {
          lVar9 = *plVar18;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *plVar18 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
      if (lStack_68 < 0) {
        __ZdlPv(plStack_78);
      }
      plVar18 = (long *)0xb8;
      __Znwm();
      plVar18[1] = 0;
      plVar18[2] = 0;
      *plVar18 = (long)&PTR_FUN_110b9f2c8;
      plVar18[9] = 0;
      plVar18[8] = 0;
      plVar18[0xb] = 0;
      plVar18[10] = 0;
      plVar18[0x11] = 0;
      plVar18[0x10] = 0;
      plVar18[0x13] = 0;
      plVar18[0x12] = 0;
      plVar18[5] = 0;
      plVar18[4] = 0;
      plVar14 = plVar18 + 6;
      plVar18[7] = 0;
      *plVar14 = 0;
      plVar18[7] = 0;
      plVar18[8] = 0;
      *(undefined1 *)(plVar18 + 9) = 0;
      plVar18[0xd] = 0;
      plVar18[0xc] = 0;
      plVar18[0xf] = 0;
      plVar18[0xe] = 0;
      plVar18[0xe] = 0;
      *(undefined4 *)(plVar18 + 0xf) = 0x3f800000;
      plVar18[0x10] = 0;
      plVar18[0x11] = 0;
      *(undefined1 *)(plVar18 + 0x13) = 0;
      plVar18[0x12] = 0;
      plVar18[0x14] = 0;
      plVar18[0x15] = 0;
      plVar18[0x16] = 0;
      plStack_60 = plVar18 + 3;
      *plStack_60 = (long)&PTR_FUN_110c35450;
      *plVar14 = 0;
      plStack_58 = plVar18;
      func_0x000107c2b054(&plStack_78,&DAT_10f503e4e);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar14,&plStack_78);
      if (lStack_68 < 0) {
        __ZdlPv(plStack_78);
      }
      lVar12 = plVar17[1];
      lVar9 = *plVar17;
      if (plVar17[1] != 0) {
        plVar18 = (long *)(plVar17[1] + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *plVar18 = *plVar18 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar18 = (long *)0x60;
      __Znwm();
      plVar14 = plVar18 + 1;
      *plVar14 = 0;
      plVar18[2] = 0;
      *plVar18 = (long)&PTR_FUN_110b9f318;
      plStack_78 = plVar18 + 3;
      *plStack_78 = (long)FUN_10a9f8890;
      plVar18[4] = (long)&PTR_FUN_110c37690;
      plVar18[6] = lVar12;
      plVar18[5] = lVar9;
      *(undefined1 *)(plVar18 + 0xb) = 1;
      plStack_70 = plVar18;
      FUN_10a342ec0(plVar17[0xe],&plStack_60,&plStack_78);
      do {
        lVar9 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
      plVar17 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar18 = plStack_58 + 1;
        do {
          lVar9 = *plVar18;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *plVar18 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
    }
    return;
  }
  lVar12 = plVar17[0xb];
  lVar15 = (long)puVar6 - lVar12;
  lVar19 = lVar15 >> 4;
  uVar1 = lVar19 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar10 = plVar17[0xd] - lVar12;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    if (uVar11 >> 0x3c == 0) {
      lVar7 = uVar11 << 4;
      __Znwm();
      puVar2 = (undefined8 *)(lVar7 + lVar15);
      *puVar2 = uVar16;
      puVar2[1] = lVar9;
      if (lVar9 != 0) {
        plVar18 = (long *)(lVar9 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *plVar18 = *plVar18 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar12 = plVar17[0xb];
        lVar15 = plVar17[0xc] - lVar12;
        lVar19 = lVar15 >> 4;
      }
      puVar6 = puVar2 + 2;
      _memcpy(puVar2 + lVar19 * -2,lVar12,lVar15);
      plVar17[0xb] = (long)(puVar2 + lVar19 * -2);
      plVar17[0xc] = (long)puVar6;
      plVar17[0xd] = lVar7 + uVar11 * 0x10;
      if (lVar12 != 0) {
        __ZdlPv(lVar12);
      }
      goto LAB_10aa02140;
    }
    func_0x000109ffded8();
  }
  else {
    FUN_10a9f887c();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa023d0);
  (*pcVar5)();
}



/* Entry: 10aa02458; end: 10aa02573;  */

void FUN_10aa02458(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10aa0172c(param_2,param_3);
  FUN_10a382e74(param_5);
  FUN_10a382e98(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10aa01f14(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10aa02574; end: 10aa02657;  */

void FUN_10aa02574(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10aa00e84(param_2,param_3);
  FUN_10aa02658(param_5);
  plVar5 = param_2;
  func_0x000109898518(param_2,param_4);
  func_0x00010a068bd8(param_2,param_4 + 0x10);
  FUN_10a9dbda4(plVar4,plVar5,param_2);
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)plVar4;
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10aa02658; end: 10aa0267b;  */

void FUN_10aa02658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar6 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa00e84(plVar3,uVar6);
  FUN_10a142e2c(param_4);
  plVar5 = plVar3;
  func_0x00010a137904(plVar3,param_1);
  FUN_10a177ddc(&lStack_90,0,plVar5);
  lVar12 = lStack_88;
  lVar7 = lStack_90;
  lVar10 = lStack_88 - lStack_90;
  (**(code **)(*plVar3 + 600))(&plStack_78,plVar3,lVar10);
  plVar5 = plStack_78;
  if (lVar12 != lVar7) {
    lVar12 = 0;
    do {
      plStack_78 = (long *)CONCAT44(plStack_78._4_4_,3);
      puVar16 = (undefined8 *)NEON_ucvtf((ulong)*(byte *)(lVar7 + lVar12));
      (**(code **)(*plVar3 + 0x290))(plVar3,&stack0xffffffffffffff98,lVar12,&plStack_78);
      if ((3 < (int)plStack_78) && (puVar16 != (undefined8 *)0x0)) {
        (**(code **)*puVar16)();
      }
      lVar12 = lVar12 + 1;
    } while (lVar10 != lVar12);
  }
  *extraout_x8 = 7;
  *(long **)(extraout_x8 + 2) = plVar5;
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  plVar3 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar3[lVar7 + 2];
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar3;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar3 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10aa0267c; end: 10aa02853;  */

void FUN_10aa0267c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  FUN_10aa00e84(param_2,param_3);
  FUN_10a142e2c(param_5);
  plVar4 = param_2;
  func_0x00010a137904(param_2,param_4);
  FUN_10a177ddc(&lStack_80,0,plVar4);
  lVar10 = lStack_78;
  lVar5 = lStack_80;
  lVar8 = lStack_78 - lStack_80;
  (**(code **)(*param_2 + 600))(&plStack_68,param_2,lVar8);
  plVar4 = plStack_68;
  if (lVar10 != lVar5) {
    lVar10 = 0;
    do {
      plStack_68 = (long *)CONCAT44(plStack_68._4_4_,3);
      puVar14 = (undefined8 *)NEON_ucvtf((ulong)*(byte *)(lVar5 + lVar10));
      (**(code **)(*param_2 + 0x290))(param_2,&stack0xffffffffffffffa8,lVar10,&plStack_68);
      if ((3 < (int)plStack_68) && (puVar14 != (undefined8 *)0x0)) {
        (**(code **)*puVar14)();
      }
      lVar10 = lVar10 + 1;
    } while (lVar8 != lVar10);
  }
  *param_1 = 7;
  *(long **)(param_1 + 2) = plVar4;
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10aa02854; end: 10aa0299f;  */

void FUN_10aa02854(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10aa0172c(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar7 = (long *)0x38;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110c37d20;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[3] = (long)&PTR_FUN_110c17b88;
  *(undefined4 *)(plVar7 + 6) = 0x37;
  *(undefined1 *)((long)plVar7 + 0x34) = 1;
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10aa029a0; end: 10aa029f7;  */

long FUN_10aa029a0(long param_1)

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



/* Entry: 10aa029f8; end: 10aa02ab3;  */

void FUN_10aa029f8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10aa00e84(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 10);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10aa02ab4; end: 10aa02be7;  */

void FUN_10aa02ab4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10aa00e84(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[0xc];
  if (plVar6[0xc] != 0) {
    plVar6 = (long *)(plVar6[0xc] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar16 != (long *)0x0) {
    plVar6 = plVar16 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10aa02be8; end: 10aa02def;  */

void FUN_10aa02be8(ulong param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined **appuStack_c0 [2];
  char cStack_a9;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
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
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109887da8(appuStack_c0,&UNK_10e4eadb6,0x93);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c37a28;
  ppuVar2 = (undefined **)&UNK_10f6891b4;
  if (pppuVar1 != (undefined ***)0x0) {
    ppuVar2 = (undefined **)pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppuVar2);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a8 = (undefined **)pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c37a28;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_40,&ppuStack_a8);
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa02dd0;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10aa03010,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa02dd0;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10aa038d4,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar7 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar7) {
    uVar3 = *(undefined4 *)(lVar7 + -0x50);
    uVar5 = *(undefined4 *)(lVar7 + -0x4c);
    uVar4 = *(undefined4 *)(lVar7 + -0x48);
    uVar6 = *(undefined4 *)(lVar7 + -0x44);
    uVar8 = *(undefined4 *)(lVar7 + -0x18);
    *(long *)(param_1 + 0x170) = lVar7 + -0x68;
    uVar10 = param_1;
    FUN_10a0051e8(param_1,uVar3,uVar5,uVar8,uVar4,uVar6);
    if ((uVar10 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa02dd0:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10aa02dd4);
  (*pcVar9)();
}



/* Entry: 10aa02df0; end: 10aa02fbf;  */

void FUN_10aa02df0(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = param_1;
  plVar7 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar7 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar6);
      }
      else if (param_2 <= plVar7) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar5;
      while (plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar6);
        }
        else if (param_2 <= plVar9) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
        }
        plVar8 = plVar10;
        if (plVar9 != plVar7) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar9 * 8) = plVar5;
            plVar7 = plVar9;
          }
          else {
            *plVar5 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar9 * 8);
            **(long **)(lVar3 + (long)plVar9 * 8) = (long)plVar10;
            plVar8 = plVar5;
          }
        }
        plVar5 = plVar8;
        plVar10 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if (((ulong)plVar5 & 1) != 0) {
    if (3 < (ulong)*(byte *)(plVar7 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa03010);
      (*pcVar2)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar7 + 0xc)])(plVar7 + 4);
    FUN_10a004978(plVar7 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar7);
  return;
}



/* Entry: 10aa02fc0; end: 10aa0300f;  */

void FUN_10aa02fc0(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa03010);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
    FUN_10a004978(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10aa03010; end: 10aa0360b;  */

/* WARNING: Possible PIC construction at 0x00010aa03600: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010aa03604) */
/* WARNING: Removing unreachable block (ram,0x00010aa03624) */
/* WARNING: Removing unreachable block (ram,0x00010aa03634) */
/* WARNING: Removing unreachable block (ram,0x00010aa0365c) */
/* WARNING: Removing unreachable block (ram,0x00010aa03668) */
/* WARNING: Removing unreachable block (ram,0x00010aa03680) */
/* WARNING: Removing unreachable block (ram,0x00010aa036b8) */
/* WARNING: Removing unreachable block (ram,0x00010aa036e4) */
/* WARNING: Removing unreachable block (ram,0x00010aa036d0) */
/* WARNING: Removing unreachable block (ram,0x00010aa036d8) */
/* WARNING: Removing unreachable block (ram,0x00010aa036e8) */
/* WARNING: Removing unreachable block (ram,0x00010aa036f0) */
/* WARNING: Removing unreachable block (ram,0x00010aa03700) */
/* WARNING: Removing unreachable block (ram,0x00010aa0370c) */
/* WARNING: Removing unreachable block (ram,0x00010aa0372c) */
/* WARNING: Removing unreachable block (ram,0x00010aa03718) */
/* WARNING: Removing unreachable block (ram,0x00010aa03720) */
/* WARNING: Removing unreachable block (ram,0x00010aa03730) */
/* WARNING: Removing unreachable block (ram,0x00010aa03738) */
/* WARNING: Removing unreachable block (ram,0x00010aa0373c) */
/* WARNING: Removing unreachable block (ram,0x00010aa03760) */
/* WARNING: Removing unreachable block (ram,0x00010aa03748) */
/* WARNING: Removing unreachable block (ram,0x00010aa03754) */
/* WARNING: Removing unreachable block (ram,0x00010aa03764) */
/* WARNING: Removing unreachable block (ram,0x00010aa0376c) */
/* WARNING: Removing unreachable block (ram,0x00010aa03774) */
/* WARNING: Removing unreachable block (ram,0x00010aa03778) */
/* WARNING: Removing unreachable block (ram,0x00010aa0377c) */
/* WARNING: Removing unreachable block (ram,0x00010aa03798) */
/* WARNING: Removing unreachable block (ram,0x00010aa03784) */
/* WARNING: Removing unreachable block (ram,0x00010aa0378c) */
/* WARNING: Removing unreachable block (ram,0x00010aa0379c) */
/* WARNING: Removing unreachable block (ram,0x00010aa037a4) */
/* WARNING: Removing unreachable block (ram,0x00010aa037b0) */
/* WARNING: Removing unreachable block (ram,0x00010aa037cc) */
/* WARNING: Removing unreachable block (ram,0x00010aa037f4) */
/* WARNING: Removing unreachable block (ram,0x00010aa037dc) */
/* WARNING: Removing unreachable block (ram,0x00010aa0367c) */
/* WARNING: Removing unreachable block (ram,0x00010aa03650) */

void FUN_10aa03010(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar17;
  long *unaff_x22;
  long lVar18;
  long lVar19;
  long *unaff_x23;
  long *plVar20;
  long lVar21;
  long *unaff_x24;
  long *plVar22;
  ulong unaff_x25;
  ulong uVar23;
  ulong unaff_x26;
  ulong uVar24;
  long *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  byte bStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  uStack_e8 = param_1;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10aa0360c(param_2,param_3);
  FUN_10aa03674(param_5);
  if (*param_4 == 7) {
    plVar11 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar12 = param_2;
    plStack_c0 = plVar11;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_c0);
    if ((int)plVar12 != 0) {
      plVar11 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar11[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar11 = plStack_c0,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10aa035f4;
      }
      plStack_c0 = (long *)0x0;
      lStack_a8 = CONCAT44(lStack_a8._4_4_,7);
      plStack_a0 = plVar11;
      plStack_b0 = param_2;
      FUN_10a688ac0(&plStack_e0,&plStack_b0,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)lStack_a8) && (plStack_a0 != (long *)0x0)) {
        (**(code **)*plStack_a0)();
      }
    }
    if (plStack_c0 != (long *)0x0) {
      (**(code **)*plStack_c0)();
    }
    if (((ulong)plVar12 & 1) != 0) {
      plStack_b0 = plStack_e0;
      lStack_a8 = lStack_d8;
      if (lStack_d8 != 0) {
        plVar11 = (long *)(lStack_d8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_98 = lStack_c8;
      plStack_a0 = plStack_d0;
      if (lStack_c8 != 0) {
        plVar11 = (long *)(lStack_c8 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      bStack_70 = 2;
      plVar11 = (long *)0x30;
      __Znwm();
      plVar12 = plVar11 + 1;
      *plVar12 = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110b9fc88;
      plVar22 = plVar11 + 3;
      *plVar22 = (long)&PTR_FUN_110c0f9b0;
      plVar11[4] = 0;
      plVar11[5] = 0;
      uVar14 = ((ulong)(uint)((int)plVar22 << 3) + 8 ^ (ulong)plVar22 >> 0x20) * -0x622015f714c7d297
      ;
      uVar14 = ((ulong)plVar22 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
      uVar24 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
      uVar23 = plVar9[4];
      uVar14 = unaff_x28;
      plStack_c0 = plVar22;
      plStack_b8 = plVar11;
      if (uVar23 != 0) {
        uVar13 = uVar23 - 1;
        if ((uVar23 & uVar13) == 0) {
          uVar14 = uVar13 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
        puVar15 = *(undefined8 **)(plVar9[3] + uVar14 * 8);
        if (puVar15 != (undefined8 *)0x0) {
          for (plVar20 = (long *)*puVar15; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
            uVar16 = plVar20[1];
            if (uVar16 == uVar24) {
              if ((long *)plVar20[2] == plVar22) goto LAB_10aa033b0;
            }
            else {
              if ((uVar23 & uVar13) == 0) {
                uVar16 = uVar16 & uVar13;
              }
              else if (uVar23 <= uVar16) {
                uVar5 = 0;
                if (uVar23 != 0) {
                  uVar5 = uVar16 / uVar23;
                }
                uVar16 = uVar16 - uVar5 * uVar23;
              }
              if (uVar16 != uVar14) break;
            }
          }
        }
      }
      plVar20 = (long *)0x68;
      __Znwm();
      *plVar20 = 0;
      plVar20[1] = uVar24;
      plVar20[2] = (long)plVar22;
      plVar20[3] = (long)plVar11;
      plStack_c0 = (long *)0x0;
      plStack_b8 = (long *)0x0;
      *(undefined1 *)(plVar20 + 0xc) = 3;
      plVar20[4] = (long)plStack_e0;
      plVar20[5] = lStack_a8;
      if (lStack_a8 != 0) {
        plVar12 = (long *)(lStack_a8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar20[7] = lStack_98;
      plVar20[6] = (long)plStack_a0;
      if (lStack_98 != 0) {
        plVar12 = (long *)(lStack_98 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(byte *)(plVar20 + 0xc) = bStack_70;
      if ((uVar23 == 0) || (*(float *)(plVar9 + 7) * (float)uVar23 < (float)(plVar9[6] + 1))) {
        uVar14 = 1;
        if (2 < uVar23) {
          uVar14 = (ulong)((uVar23 & uVar23 - 1) != 0);
        }
        uVar14 = uVar14 | uVar23 << 1;
        uVar23 = (ulong)((float)(plVar9[6] + 1) / *(float *)(plVar9 + 7));
        if (uVar14 <= uVar23) {
          uVar14 = uVar23;
        }
        FUN_10aa02df0(plVar9 + 3,uVar14);
        uVar23 = plVar9[4];
        if ((uVar23 & uVar23 - 1) == 0) {
          uVar14 = uVar23 - 1 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
      }
      lVar10 = plVar9[3];
      plVar12 = *(long **)(lVar10 + uVar14 * 8);
      if (plVar12 == (long *)0x0) {
        plVar12 = plVar9 + 5;
        *plVar20 = *plVar12;
        *plVar12 = (long)plVar20;
        *(long **)(lVar10 + uVar14 * 8) = plVar12;
        if (*plVar20 != 0) {
          uVar13 = *(ulong *)(*plVar20 + 8);
          if ((uVar23 & uVar23 - 1) == 0) {
            uVar13 = uVar13 & uVar23 - 1;
          }
          else if (uVar23 <= uVar13) {
            uVar16 = 0;
            if (uVar23 != 0) {
              uVar16 = uVar13 / uVar23;
            }
            uVar13 = uVar13 - uVar16 * uVar23;
          }
          plVar12 = (long *)(plVar9[3] + uVar13 * 8);
          goto LAB_10aa03454;
        }
      }
      else {
        *plVar20 = *plVar12;
LAB_10aa03454:
        *plVar12 = (long)plVar20;
      }
      plVar9[6] = plVar9[6] + 1;
      goto LAB_10aa03464;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
  goto LAB_10aa035f4;
LAB_10aa033b0:
  do {
    lVar10 = *plVar12;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  }
LAB_10aa03464:
  if (*(char *)(plVar9[9] + 8) == '\x01') {
    (*(code *)plVar9[8])(plVar9);
  }
  plStack_b8 = (long *)plVar20[3];
  plStack_c0 = (long *)plVar20[2];
  if (plVar20[3] != 0) {
    plVar12 = (long *)(plVar20[3] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((ulong)bStack_70 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
    FUN_10a688c1c(&plStack_e0);
    FUN_10a05ff7c(uStack_e8,param_2,&plStack_c0);
    plVar12 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar2 = plStack_b8 + 1;
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = plVar12;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      FUN_10aa02fc0(1,plVar20);
      FUN_10a004978(&plStack_c0);
      if (3 < (ulong)bStack_70) goto LAB_10aa035f4;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
      FUN_10a688c1c(&plStack_e0);
      unaff_x30 = 0x10aa03604;
      register0x00000008 = (BADSPACEBASE *)auStack_f0;
      unaff_x19 = plVar8;
      unaff_x20 = param_2;
      unaff_x21 = plVar11;
      unaff_x22 = plVar9;
      unaff_x23 = plVar20;
      unaff_x24 = plVar22;
      unaff_x25 = uVar23;
      unaff_x26 = uVar24;
      unaff_x27 = plStack_e0;
      unaff_x28 = uVar14;
      unaff_x29 = puVar1;
    }
    plVar9 = plVar8 + 0x4b;
    lVar10 = plVar8[0x59];
    uVar14 = lVar10 - 1;
    plVar8[0x59] = uVar14;
    if (uVar14 < 8) {
      uVar14 = plVar9[lVar10 + 2];
      if (plVar8[0x5a] == uVar14) {
        return;
      }
    }
    else {
      uVar14 = *(ulong *)(plVar8[0x57] + -8);
      plVar8[0x57] = plVar8[0x57] + -8;
      if (plVar8[0x5a] == uVar14) {
        return;
      }
    }
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar10 = *plVar9;
    lVar19 = plVar8[0x4c];
    lVar17 = lVar19 - lVar10;
    uVar23 = lVar17 >> 4;
    if (uVar23 < uVar14) {
      uVar24 = uVar14 - uVar23;
      lVar21 = plVar8[0x4d];
      if ((ulong)(lVar21 - lVar19 >> 4) < uVar24) {
        if (uVar14 >> 0x3c == 0) {
          uVar13 = lVar21 - lVar10 >> 3;
          if (uVar13 <= uVar14) {
            uVar13 = uVar14;
          }
          if (0x7fffffffffffffef < (ulong)(lVar21 - lVar10)) {
            uVar13 = 0xfffffffffffffff;
          }
          *(long **)((long)register0x00000008 + -0x68) = plVar9;
          if (uVar13 >> 0x3c == 0) {
            lVar7 = uVar13 << 4;
            __Znwm();
            lVar19 = lVar7 + lVar17;
            _bzero(lVar19,uVar24 * 0x10);
            lVar18 = lVar19 + uVar23 * -0x10;
            _memcpy(lVar18,lVar10,lVar17);
            *plVar9 = lVar18;
            plVar8[0x4c] = lVar19 + uVar24 * 0x10;
            plVar8[0x4d] = lVar7 + uVar13 * 0x10;
            *(long *)((long)register0x00000008 + -0x78) = lVar10;
            *(long *)((long)register0x00000008 + -0x70) = lVar21;
            *(long *)((long)register0x00000008 + -0x88) = lVar10;
            *(long *)((long)register0x00000008 + -0x80) = lVar10;
            func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
            goto code_r0x00010988c138;
          }
          func_0x000104c4f740();
        }
        else {
          func_0x00010988c1a4();
        }
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
        (*pcVar6)();
      }
      _bzero(lVar19,uVar24 * 0x10);
      plVar8[0x4c] = lVar19 + uVar24 * 0x10;
    }
    else if (uVar14 < uVar23) {
      lVar10 = lVar10 + uVar14 * 0x10;
      while (lVar19 != lVar10) {
        lVar19 = lVar19 + -0x10;
        func_0x00010988c204(lVar19);
      }
      plVar8[0x4c] = lVar10;
    }
code_r0x00010988c138:
    plVar8[0x5a] = uVar14;
    return;
  }
LAB_10aa035f4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa035f8);
  (*pcVar6)();
}



/* Entry: 10aa0360c; end: 10aa03673;  */

void FUN_10aa0360c(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar3 = param_1;
  func_0x000109898688();
  if (lVar3 != 0) {
    FUN_10a053854(param_1,lVar3);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar2 == 1) {
    return;
  }
  lVar3 = 1;
  puVar5 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,puVar2);
  plVar4 = (long *)(lVar3 + 0x18);
  FUN_10aa03800(plVar4,*puVar5);
  if (plVar4 == (long *)0x0) goto LAB_10aa037cc;
  uVar8 = *(ulong *)(lVar3 + 0x20);
  lVar6 = *plVar4;
  uVar7 = plVar4[1];
  uVar9 = uVar8 - 1;
  if ((uVar8 & uVar9) == 0) {
    uVar7 = uVar9 & uVar7;
  }
  else if (uVar8 <= uVar7) {
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar7 / uVar8;
    }
    uVar7 = uVar7 - uVar11 * uVar8;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 0x18) + uVar7 * 8);
  do {
    plVar10 = plVar1;
    plVar1 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar4);
  if (plVar10 == (long *)(lVar3 + 0x28)) {
LAB_10aa03738:
    if (lVar6 == 0) {
LAB_10aa0376c:
      *(undefined8 *)(*(long *)(lVar3 + 0x18) + uVar7 * 8) = 0;
      lVar6 = *plVar4;
      goto LAB_10aa03774;
    }
    uVar11 = *(ulong *)(lVar6 + 8);
    if ((uVar8 & uVar9) == 0) {
      uVar12 = uVar11 & uVar9;
    }
    else {
      uVar12 = uVar11;
      if (uVar8 <= uVar11) {
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar12 = uVar11 / uVar8;
        }
        uVar12 = uVar11 - uVar12 * uVar8;
      }
    }
    if (uVar12 != uVar7) goto LAB_10aa0376c;
LAB_10aa0377c:
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar9 * uVar8;
    }
    if (uVar11 != uVar7) {
      *(long **)(*(long *)(lVar3 + 0x18) + uVar11 * 8) = plVar10;
      lVar6 = *plVar4;
    }
  }
  else {
    uVar11 = plVar10[1];
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar12 * uVar8;
    }
    if (uVar11 != uVar7) goto LAB_10aa03738;
LAB_10aa03774:
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lVar6 + 8);
      goto LAB_10aa0377c;
    }
  }
  *plVar10 = lVar6;
  *plVar4 = 0;
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
  FUN_10aa02fc0(1);
LAB_10aa037cc:
  if (*(char *)(*(long *)(lVar3 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010aa037f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x40))(lVar3);
    return;
  }
  return;
}



/* Entry: 10aa03674; end: 10aa03697;  */

void FUN_10aa03674(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar2 = 1;
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,param_1);
  plVar3 = (long *)(lVar2 + 0x18);
  FUN_10aa03800(plVar3,*puVar4);
  if (plVar3 == (long *)0x0) goto LAB_10aa037cc;
  uVar7 = *(ulong *)(lVar2 + 0x20);
  lVar5 = *plVar3;
  uVar6 = plVar3[1];
  uVar8 = uVar7 - 1;
  if ((uVar7 & uVar8) == 0) {
    uVar6 = uVar8 & uVar6;
  }
  else if (uVar7 <= uVar6) {
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar10 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar10 * uVar7;
  }
  plVar1 = *(long **)(*(long *)(lVar2 + 0x18) + uVar6 * 8);
  do {
    plVar9 = plVar1;
    plVar1 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar3);
  if (plVar9 == (long *)(lVar2 + 0x28)) {
LAB_10aa03738:
    if (lVar5 == 0) {
LAB_10aa0376c:
      *(undefined8 *)(*(long *)(lVar2 + 0x18) + uVar6 * 8) = 0;
      lVar5 = *plVar3;
      goto LAB_10aa03774;
    }
    uVar10 = *(ulong *)(lVar5 + 8);
    if ((uVar7 & uVar8) == 0) {
      uVar11 = uVar10 & uVar8;
    }
    else {
      uVar11 = uVar10;
      if (uVar7 <= uVar10) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar10 / uVar7;
        }
        uVar11 = uVar10 - uVar11 * uVar7;
      }
    }
    if (uVar11 != uVar6) goto LAB_10aa0376c;
LAB_10aa0377c:
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar8 * uVar7;
    }
    if (uVar10 != uVar6) {
      *(long **)(*(long *)(lVar2 + 0x18) + uVar10 * 8) = plVar9;
      lVar5 = *plVar3;
    }
  }
  else {
    uVar10 = plVar9[1];
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar11 * uVar7;
    }
    if (uVar10 != uVar6) goto LAB_10aa03738;
LAB_10aa03774:
    if (lVar5 != 0) {
      uVar10 = *(ulong *)(lVar5 + 8);
      goto LAB_10aa0377c;
    }
  }
  *plVar9 = lVar5;
  *plVar3 = 0;
  *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + -1;
  FUN_10aa02fc0(1);
LAB_10aa037cc:
  if (*(char *)(*(long *)(lVar2 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010aa037f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x40))(lVar2);
    return;
  }
  return;
}



/* Entry: 10aa03698; end: 10aa037ff;  */

void FUN_10aa03698(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar2 = (long *)(param_1 + 0x18);
  FUN_10aa03800(plVar2,*param_2);
  if (plVar2 == (long *)0x0) goto LAB_10aa037cc;
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(param_1 + 0x28)) {
LAB_10aa03738:
    if (lVar3 == 0) {
LAB_10aa0376c:
      *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10aa03774;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_10aa0376c;
LAB_10aa0377c:
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 != uVar4) {
      *(long **)(*(long *)(param_1 + 0x18) + uVar8 * 8) = plVar7;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10aa03738;
LAB_10aa03774:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_10aa0377c;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  FUN_10aa02fc0(1);
LAB_10aa037cc:
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010aa037f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10aa03800; end: 10aa038d3;  */

long * FUN_10aa03800(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar4 = ((ulong)uVar2 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10aa038d4; end: 10aa039ef;  */

void FUN_10aa038d4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10aa0360c(param_2,param_3);
  FUN_10a060490(param_5);
  FUN_10a0604b4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10aa03698(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10aa039f0; end: 10aa03b23;  */

void FUN_10aa039f0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10aa00e84(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[0x12];
  if (plVar6[0x12] != 0) {
    plVar6 = (long *)(plVar6[0x12] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar16 != (long *)0x0) {
    plVar6 = plVar16 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10aa03b24; end: 10aa03d2b;  */

void FUN_10aa03b24(ulong param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined **appuStack_c0 [2];
  char cStack_a9;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
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
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109887da8(appuStack_c0,&UNK_10e4eaebd,0x8a);
  pppuVar1 = (undefined ***)appuStack_c0[0];
  if (-1 < cStack_a9) {
    pppuVar1 = appuStack_c0;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c37a40;
  ppuVar2 = (undefined **)&UNK_10f6891b4;
  if (pppuVar1 != (undefined ***)0x0) {
    ppuVar2 = (undefined **)pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppuVar2);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_a8 = (undefined **)pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c37a40;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_40,&ppuStack_a8);
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa03d0c;
    FUN_10a054dac(param_1,&DAT_10f68571c,FUN_10aa03f4c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar10 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar10 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa03d0c;
    FUN_10a054dac(param_1,&DAT_10f685720,FUN_10aa04810,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar7 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar7) {
    uVar3 = *(undefined4 *)(lVar7 + -0x50);
    uVar5 = *(undefined4 *)(lVar7 + -0x4c);
    uVar4 = *(undefined4 *)(lVar7 + -0x48);
    uVar6 = *(undefined4 *)(lVar7 + -0x44);
    uVar8 = *(undefined4 *)(lVar7 + -0x18);
    *(long *)(param_1 + 0x170) = lVar7 + -0x68;
    uVar10 = param_1;
    FUN_10a0051e8(param_1,uVar3,uVar5,uVar8,uVar4,uVar6);
    if ((uVar10 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa03d0c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10aa03d10);
  (*pcVar9)();
}



/* Entry: 10aa03d2c; end: 10aa03efb;  */

void FUN_10aa03d2c(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = param_1;
  plVar7 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 > param_2 || param_2 == plVar10) {
    if (plVar10 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar10 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar7 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar6);
      }
      else if (param_2 <= plVar7) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)param_2;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar5;
      while (plVar10 != (long *)0x0) {
        plVar9 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar6);
        }
        else if (param_2 <= plVar9) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)param_2;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
        }
        plVar8 = plVar10;
        if (plVar9 != plVar7) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar9 * 8) = plVar5;
            plVar7 = plVar9;
          }
          else {
            *plVar5 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar9 * 8);
            **(long **)(lVar3 + (long)plVar9 * 8) = (long)plVar10;
            plVar8 = plVar5;
          }
        }
        plVar5 = plVar8;
        plVar10 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if (((ulong)plVar5 & 1) != 0) {
    if (3 < (ulong)*(byte *)(plVar7 + 0xc)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa03f4c);
      (*pcVar2)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar7 + 0xc)])(plVar7 + 4);
    FUN_10a004978(plVar7 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar7);
  return;
}



/* Entry: 10aa03efc; end: 10aa03f4b;  */

void FUN_10aa03efc(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa03f4c);
      (*pcVar1)();
    }
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
    FUN_10a004978(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10aa03f4c; end: 10aa04547;  */

/* WARNING: Possible PIC construction at 0x00010aa0453c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010aa04540) */
/* WARNING: Removing unreachable block (ram,0x00010aa04560) */
/* WARNING: Removing unreachable block (ram,0x00010aa04570) */
/* WARNING: Removing unreachable block (ram,0x00010aa04598) */
/* WARNING: Removing unreachable block (ram,0x00010aa045a4) */
/* WARNING: Removing unreachable block (ram,0x00010aa045bc) */
/* WARNING: Removing unreachable block (ram,0x00010aa045f4) */
/* WARNING: Removing unreachable block (ram,0x00010aa04620) */
/* WARNING: Removing unreachable block (ram,0x00010aa0460c) */
/* WARNING: Removing unreachable block (ram,0x00010aa04614) */
/* WARNING: Removing unreachable block (ram,0x00010aa04624) */
/* WARNING: Removing unreachable block (ram,0x00010aa0462c) */
/* WARNING: Removing unreachable block (ram,0x00010aa0463c) */
/* WARNING: Removing unreachable block (ram,0x00010aa04648) */
/* WARNING: Removing unreachable block (ram,0x00010aa04668) */
/* WARNING: Removing unreachable block (ram,0x00010aa04654) */
/* WARNING: Removing unreachable block (ram,0x00010aa0465c) */
/* WARNING: Removing unreachable block (ram,0x00010aa0466c) */
/* WARNING: Removing unreachable block (ram,0x00010aa04674) */
/* WARNING: Removing unreachable block (ram,0x00010aa04678) */
/* WARNING: Removing unreachable block (ram,0x00010aa0469c) */
/* WARNING: Removing unreachable block (ram,0x00010aa04684) */
/* WARNING: Removing unreachable block (ram,0x00010aa04690) */
/* WARNING: Removing unreachable block (ram,0x00010aa046a0) */
/* WARNING: Removing unreachable block (ram,0x00010aa046a8) */
/* WARNING: Removing unreachable block (ram,0x00010aa046b0) */
/* WARNING: Removing unreachable block (ram,0x00010aa046b4) */
/* WARNING: Removing unreachable block (ram,0x00010aa046b8) */
/* WARNING: Removing unreachable block (ram,0x00010aa046d4) */
/* WARNING: Removing unreachable block (ram,0x00010aa046c0) */
/* WARNING: Removing unreachable block (ram,0x00010aa046c8) */
/* WARNING: Removing unreachable block (ram,0x00010aa046d8) */
/* WARNING: Removing unreachable block (ram,0x00010aa046e0) */
/* WARNING: Removing unreachable block (ram,0x00010aa046ec) */
/* WARNING: Removing unreachable block (ram,0x00010aa04708) */
/* WARNING: Removing unreachable block (ram,0x00010aa04730) */
/* WARNING: Removing unreachable block (ram,0x00010aa04718) */
/* WARNING: Removing unreachable block (ram,0x00010aa045b8) */
/* WARNING: Removing unreachable block (ram,0x00010aa0458c) */

void FUN_10aa03f4c(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar17;
  long *unaff_x22;
  long lVar18;
  long lVar19;
  long *unaff_x23;
  long *plVar20;
  long lVar21;
  long *unaff_x24;
  long *plVar22;
  ulong unaff_x25;
  ulong uVar23;
  ulong unaff_x26;
  ulong uVar24;
  long *unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  byte bStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_2;
  uStack_e8 = param_1;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = param_2;
  FUN_10aa04548(param_2,param_3);
  FUN_10aa045b0(param_5);
  if (*param_4 == 7) {
    plVar11 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar12 = param_2;
    plStack_c0 = plVar11;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_c0);
    if ((int)plVar12 != 0) {
      plVar11 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar11[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar11 = plStack_c0,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10aa04530;
      }
      plStack_c0 = (long *)0x0;
      lStack_a8 = CONCAT44(lStack_a8._4_4_,7);
      plStack_a0 = plVar11;
      plStack_b0 = param_2;
      FUN_10a688ac0(&plStack_e0,&plStack_b0,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)lStack_a8) && (plStack_a0 != (long *)0x0)) {
        (**(code **)*plStack_a0)();
      }
    }
    if (plStack_c0 != (long *)0x0) {
      (**(code **)*plStack_c0)();
    }
    if (((ulong)plVar12 & 1) != 0) {
      plStack_b0 = plStack_e0;
      lStack_a8 = lStack_d8;
      if (lStack_d8 != 0) {
        plVar11 = (long *)(lStack_d8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_98 = lStack_c8;
      plStack_a0 = plStack_d0;
      if (lStack_c8 != 0) {
        plVar11 = (long *)(lStack_c8 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      bStack_70 = 2;
      plVar11 = (long *)0x30;
      __Znwm();
      plVar12 = plVar11 + 1;
      *plVar12 = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&PTR_FUN_110b9fc88;
      plVar22 = plVar11 + 3;
      *plVar22 = (long)&PTR_FUN_110c0f9b0;
      plVar11[4] = 0;
      plVar11[5] = 0;
      uVar14 = ((ulong)(uint)((int)plVar22 << 3) + 8 ^ (ulong)plVar22 >> 0x20) * -0x622015f714c7d297
      ;
      uVar14 = ((ulong)plVar22 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
      uVar24 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
      uVar23 = plVar9[4];
      uVar14 = unaff_x28;
      plStack_c0 = plVar22;
      plStack_b8 = plVar11;
      if (uVar23 != 0) {
        uVar13 = uVar23 - 1;
        if ((uVar23 & uVar13) == 0) {
          uVar14 = uVar13 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
        puVar15 = *(undefined8 **)(plVar9[3] + uVar14 * 8);
        if (puVar15 != (undefined8 *)0x0) {
          for (plVar20 = (long *)*puVar15; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
            uVar16 = plVar20[1];
            if (uVar16 == uVar24) {
              if ((long *)plVar20[2] == plVar22) goto LAB_10aa042ec;
            }
            else {
              if ((uVar23 & uVar13) == 0) {
                uVar16 = uVar16 & uVar13;
              }
              else if (uVar23 <= uVar16) {
                uVar5 = 0;
                if (uVar23 != 0) {
                  uVar5 = uVar16 / uVar23;
                }
                uVar16 = uVar16 - uVar5 * uVar23;
              }
              if (uVar16 != uVar14) break;
            }
          }
        }
      }
      plVar20 = (long *)0x68;
      __Znwm();
      *plVar20 = 0;
      plVar20[1] = uVar24;
      plVar20[2] = (long)plVar22;
      plVar20[3] = (long)plVar11;
      plStack_c0 = (long *)0x0;
      plStack_b8 = (long *)0x0;
      *(undefined1 *)(plVar20 + 0xc) = 3;
      plVar20[4] = (long)plStack_e0;
      plVar20[5] = lStack_a8;
      if (lStack_a8 != 0) {
        plVar12 = (long *)(lStack_a8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar20[7] = lStack_98;
      plVar20[6] = (long)plStack_a0;
      if (lStack_98 != 0) {
        plVar12 = (long *)(lStack_98 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = *plVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(byte *)(plVar20 + 0xc) = bStack_70;
      if ((uVar23 == 0) || (*(float *)(plVar9 + 7) * (float)uVar23 < (float)(plVar9[6] + 1))) {
        uVar14 = 1;
        if (2 < uVar23) {
          uVar14 = (ulong)((uVar23 & uVar23 - 1) != 0);
        }
        uVar14 = uVar14 | uVar23 << 1;
        uVar23 = (ulong)((float)(plVar9[6] + 1) / *(float *)(plVar9 + 7));
        if (uVar14 <= uVar23) {
          uVar14 = uVar23;
        }
        FUN_10aa03d2c(plVar9 + 3,uVar14);
        uVar23 = plVar9[4];
        if ((uVar23 & uVar23 - 1) == 0) {
          uVar14 = uVar23 - 1 & uVar24;
        }
        else {
          uVar14 = uVar24;
          if (uVar23 <= uVar24) {
            uVar14 = 0;
            if (uVar23 != 0) {
              uVar14 = uVar24 / uVar23;
            }
            uVar14 = uVar24 - uVar14 * uVar23;
          }
        }
      }
      lVar10 = plVar9[3];
      plVar12 = *(long **)(lVar10 + uVar14 * 8);
      if (plVar12 == (long *)0x0) {
        plVar12 = plVar9 + 5;
        *plVar20 = *plVar12;
        *plVar12 = (long)plVar20;
        *(long **)(lVar10 + uVar14 * 8) = plVar12;
        if (*plVar20 != 0) {
          uVar13 = *(ulong *)(*plVar20 + 8);
          if ((uVar23 & uVar23 - 1) == 0) {
            uVar13 = uVar13 & uVar23 - 1;
          }
          else if (uVar23 <= uVar13) {
            uVar16 = 0;
            if (uVar23 != 0) {
              uVar16 = uVar13 / uVar23;
            }
            uVar13 = uVar13 - uVar16 * uVar23;
          }
          plVar12 = (long *)(plVar9[3] + uVar13 * 8);
          goto LAB_10aa04390;
        }
      }
      else {
        *plVar20 = *plVar12;
LAB_10aa04390:
        *plVar12 = (long)plVar20;
      }
      plVar9[6] = plVar9[6] + 1;
      goto LAB_10aa043a0;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
  goto LAB_10aa04530;
LAB_10aa042ec:
  do {
    lVar10 = *plVar12;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  }
LAB_10aa043a0:
  if (*(char *)(plVar9[9] + 8) == '\x01') {
    (*(code *)plVar9[8])(plVar9);
  }
  plStack_b8 = (long *)plVar20[3];
  plStack_c0 = (long *)plVar20[2];
  if (plVar20[3] != 0) {
    plVar12 = (long *)(plVar20[3] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((ulong)bStack_70 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
    FUN_10a688c1c(&plStack_e0);
    FUN_10a05ff7c(uStack_e8,param_2,&plStack_c0);
    plVar12 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar2 = plStack_b8 + 1;
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = plVar12;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      FUN_10aa03efc(1,plVar20);
      FUN_10a004978(&plStack_c0);
      if (3 < (ulong)bStack_70) goto LAB_10aa04530;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_70])(&plStack_b0);
      FUN_10a688c1c(&plStack_e0);
      unaff_x30 = 0x10aa04540;
      register0x00000008 = (BADSPACEBASE *)auStack_f0;
      unaff_x19 = plVar8;
      unaff_x20 = param_2;
      unaff_x21 = plVar11;
      unaff_x22 = plVar9;
      unaff_x23 = plVar20;
      unaff_x24 = plVar22;
      unaff_x25 = uVar23;
      unaff_x26 = uVar24;
      unaff_x27 = plStack_e0;
      unaff_x28 = uVar14;
      unaff_x29 = puVar1;
    }
    plVar9 = plVar8 + 0x4b;
    lVar10 = plVar8[0x59];
    uVar14 = lVar10 - 1;
    plVar8[0x59] = uVar14;
    if (uVar14 < 8) {
      uVar14 = plVar9[lVar10 + 2];
      if (plVar8[0x5a] == uVar14) {
        return;
      }
    }
    else {
      uVar14 = *(ulong *)(plVar8[0x57] + -8);
      plVar8[0x57] = plVar8[0x57] + -8;
      if (plVar8[0x5a] == uVar14) {
        return;
      }
    }
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar10 = *plVar9;
    lVar19 = plVar8[0x4c];
    lVar17 = lVar19 - lVar10;
    uVar23 = lVar17 >> 4;
    if (uVar23 < uVar14) {
      uVar24 = uVar14 - uVar23;
      lVar21 = plVar8[0x4d];
      if ((ulong)(lVar21 - lVar19 >> 4) < uVar24) {
        if (uVar14 >> 0x3c == 0) {
          uVar13 = lVar21 - lVar10 >> 3;
          if (uVar13 <= uVar14) {
            uVar13 = uVar14;
          }
          if (0x7fffffffffffffef < (ulong)(lVar21 - lVar10)) {
            uVar13 = 0xfffffffffffffff;
          }
          *(long **)((long)register0x00000008 + -0x68) = plVar9;
          if (uVar13 >> 0x3c == 0) {
            lVar7 = uVar13 << 4;
            __Znwm();
            lVar19 = lVar7 + lVar17;
            _bzero(lVar19,uVar24 * 0x10);
            lVar18 = lVar19 + uVar23 * -0x10;
            _memcpy(lVar18,lVar10,lVar17);
            *plVar9 = lVar18;
            plVar8[0x4c] = lVar19 + uVar24 * 0x10;
            plVar8[0x4d] = lVar7 + uVar13 * 0x10;
            *(long *)((long)register0x00000008 + -0x78) = lVar10;
            *(long *)((long)register0x00000008 + -0x70) = lVar21;
            *(long *)((long)register0x00000008 + -0x88) = lVar10;
            *(long *)((long)register0x00000008 + -0x80) = lVar10;
            func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
            goto code_r0x00010988c138;
          }
          func_0x000104c4f740();
        }
        else {
          func_0x00010988c1a4();
        }
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
        (*pcVar6)();
      }
      _bzero(lVar19,uVar24 * 0x10);
      plVar8[0x4c] = lVar19 + uVar24 * 0x10;
    }
    else if (uVar14 < uVar23) {
      lVar10 = lVar10 + uVar14 * 0x10;
      while (lVar19 != lVar10) {
        lVar19 = lVar19 + -0x10;
        func_0x00010988c204(lVar19);
      }
      plVar8[0x4c] = lVar10;
    }
code_r0x00010988c138:
    plVar8[0x5a] = uVar14;
    return;
  }
LAB_10aa04530:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa04534);
  (*pcVar6)();
}



/* Entry: 10aa04548; end: 10aa045af;  */

void FUN_10aa04548(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar3 = param_1;
  func_0x000109898688();
  if (lVar3 != 0) {
    FUN_10a053854(param_1,lVar3);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar2 == 1) {
    return;
  }
  lVar3 = 1;
  puVar5 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,puVar2);
  plVar4 = (long *)(lVar3 + 0x18);
  FUN_10aa0473c(plVar4,*puVar5);
  if (plVar4 == (long *)0x0) goto LAB_10aa04708;
  uVar8 = *(ulong *)(lVar3 + 0x20);
  lVar6 = *plVar4;
  uVar7 = plVar4[1];
  uVar9 = uVar8 - 1;
  if ((uVar8 & uVar9) == 0) {
    uVar7 = uVar9 & uVar7;
  }
  else if (uVar8 <= uVar7) {
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar7 / uVar8;
    }
    uVar7 = uVar7 - uVar11 * uVar8;
  }
  plVar1 = *(long **)(*(long *)(lVar3 + 0x18) + uVar7 * 8);
  do {
    plVar10 = plVar1;
    plVar1 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar4);
  if (plVar10 == (long *)(lVar3 + 0x28)) {
LAB_10aa04674:
    if (lVar6 == 0) {
LAB_10aa046a8:
      *(undefined8 *)(*(long *)(lVar3 + 0x18) + uVar7 * 8) = 0;
      lVar6 = *plVar4;
      goto LAB_10aa046b0;
    }
    uVar11 = *(ulong *)(lVar6 + 8);
    if ((uVar8 & uVar9) == 0) {
      uVar12 = uVar11 & uVar9;
    }
    else {
      uVar12 = uVar11;
      if (uVar8 <= uVar11) {
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar12 = uVar11 / uVar8;
        }
        uVar12 = uVar11 - uVar12 * uVar8;
      }
    }
    if (uVar12 != uVar7) goto LAB_10aa046a8;
LAB_10aa046b8:
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar9 * uVar8;
    }
    if (uVar11 != uVar7) {
      *(long **)(*(long *)(lVar3 + 0x18) + uVar11 * 8) = plVar10;
      lVar6 = *plVar4;
    }
  }
  else {
    uVar11 = plVar10[1];
    if ((uVar8 & uVar9) == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar12 * uVar8;
    }
    if (uVar11 != uVar7) goto LAB_10aa04674;
LAB_10aa046b0:
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lVar6 + 8);
      goto LAB_10aa046b8;
    }
  }
  *plVar10 = lVar6;
  *plVar4 = 0;
  *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + -1;
  FUN_10aa03efc(1);
LAB_10aa04708:
  if (*(char *)(*(long *)(lVar3 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010aa0472c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x40))(lVar3);
    return;
  }
  return;
}



/* Entry: 10aa045b0; end: 10aa045d3;  */

void FUN_10aa045b0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar2 = 1;
  puVar4 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,param_1);
  plVar3 = (long *)(lVar2 + 0x18);
  FUN_10aa0473c(plVar3,*puVar4);
  if (plVar3 == (long *)0x0) goto LAB_10aa04708;
  uVar7 = *(ulong *)(lVar2 + 0x20);
  lVar5 = *plVar3;
  uVar6 = plVar3[1];
  uVar8 = uVar7 - 1;
  if ((uVar7 & uVar8) == 0) {
    uVar6 = uVar8 & uVar6;
  }
  else if (uVar7 <= uVar6) {
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar10 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar10 * uVar7;
  }
  plVar1 = *(long **)(*(long *)(lVar2 + 0x18) + uVar6 * 8);
  do {
    plVar9 = plVar1;
    plVar1 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar3);
  if (plVar9 == (long *)(lVar2 + 0x28)) {
LAB_10aa04674:
    if (lVar5 == 0) {
LAB_10aa046a8:
      *(undefined8 *)(*(long *)(lVar2 + 0x18) + uVar6 * 8) = 0;
      lVar5 = *plVar3;
      goto LAB_10aa046b0;
    }
    uVar10 = *(ulong *)(lVar5 + 8);
    if ((uVar7 & uVar8) == 0) {
      uVar11 = uVar10 & uVar8;
    }
    else {
      uVar11 = uVar10;
      if (uVar7 <= uVar10) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar10 / uVar7;
        }
        uVar11 = uVar10 - uVar11 * uVar7;
      }
    }
    if (uVar11 != uVar6) goto LAB_10aa046a8;
LAB_10aa046b8:
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar8 * uVar7;
    }
    if (uVar10 != uVar6) {
      *(long **)(*(long *)(lVar2 + 0x18) + uVar10 * 8) = plVar9;
      lVar5 = *plVar3;
    }
  }
  else {
    uVar10 = plVar9[1];
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar11 * uVar7;
    }
    if (uVar10 != uVar6) goto LAB_10aa04674;
LAB_10aa046b0:
    if (lVar5 != 0) {
      uVar10 = *(ulong *)(lVar5 + 8);
      goto LAB_10aa046b8;
    }
  }
  *plVar9 = lVar5;
  *plVar3 = 0;
  *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + -1;
  FUN_10aa03efc(1);
LAB_10aa04708:
  if (*(char *)(*(long *)(lVar2 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010aa0472c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x40))(lVar2);
    return;
  }
  return;
}



/* Entry: 10aa045d4; end: 10aa0473b;  */

void FUN_10aa045d4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar2 = (long *)(param_1 + 0x18);
  FUN_10aa0473c(plVar2,*param_2);
  if (plVar2 == (long *)0x0) goto LAB_10aa04708;
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(param_1 + 0x28)) {
LAB_10aa04674:
    if (lVar3 == 0) {
LAB_10aa046a8:
      *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10aa046b0;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_10aa046a8;
LAB_10aa046b8:
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 != uVar4) {
      *(long **)(*(long *)(param_1 + 0x18) + uVar8 * 8) = plVar7;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10aa04674;
LAB_10aa046b0:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_10aa046b8;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  FUN_10aa03efc(1);
LAB_10aa04708:
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010aa0472c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10aa0473c; end: 10aa0480f;  */

long * FUN_10aa0473c(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar4 = ((ulong)uVar2 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10aa04810; end: 10aa0492b;  */

void FUN_10aa04810(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10aa04548(param_2,param_3);
  FUN_10a060490(param_5);
  FUN_10a0604b4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10aa045d4(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10aa0492c; end: 10aa04a5f;  */

void FUN_10aa0492c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10aa00e84(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[0x1d];
  if (plVar6[0x1d] != 0) {
    plVar6 = (long *)(plVar6[0x1d] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar16 != (long *)0x0) {
    plVar6 = plVar16 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}


