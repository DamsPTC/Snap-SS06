/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c3b554; end: 104c3b563;  */

void FUN_104c3b554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c3b55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104c3b564; end: 104c3b6b3;  */

void FUN_104c3b564(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    if (0x666666666666666 < param_4) {
      FUN_104c3b734();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104c3b680);
      (*pcVar2)();
    }
    puVar3 = (undefined4 *)(param_4 * 0x28);
    __Znwm();
    *param_1 = puVar3;
    param_1[1] = puVar3;
    param_1[2] = puVar3 + param_4 * 10;
    if (param_2 != param_3) {
      puVar4 = param_2 + 1;
      do {
        *puVar3 = *(undefined4 *)(puVar4 + -1);
        if (*(char *)((long)puVar4 + 0x17) < '\0') {
          func_0x000100033dac(puVar3 + 2,*puVar4,puVar4[1]);
        }
        else {
          uVar6 = puVar4[1];
          uVar5 = *puVar4;
          *(undefined8 *)(puVar3 + 6) = puVar4[2];
          *(undefined8 *)(puVar3 + 4) = uVar6;
          *(undefined8 *)(puVar3 + 2) = uVar5;
        }
        *(undefined1 *)(puVar3 + 8) = *(undefined1 *)(puVar4 + 3);
        puVar3 = puVar3 + 10;
        puVar1 = puVar4 + 4;
        puVar4 = puVar4 + 5;
      } while (puVar1 != param_3);
    }
    param_1[1] = puVar3;
  }
  return;
}



/* Entry: 104c3b6b4; end: 104c3b733;  */

/* WARNING: Removing unreachable block (ram,0x000104c3b704) */

long * FUN_104c3b6b4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    plVar2 = (long *)*param_1;
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      lVar4 = plVar2[1];
      lVar1 = lVar3;
      if (lVar3 != lVar4) {
        do {
          lVar4 = lVar4 + -0x28;
        } while (lVar4 != lVar3);
        lVar1 = *(long *)*param_1;
      }
      plVar2[1] = lVar3;
      __ZdlPv(lVar1);
    }
  }
  return param_1;
}



/* Entry: 104c3b734; end: 104c3b747;  */

/* WARNING: Removing unreachable block (ram,0x000104c3b79c) */

undefined * FUN_104c3b734(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_104bd47e8();
  if ((puVar1[0x18] & 1) == 0) {
    for (lVar2 = **(long **)(puVar1 + 0x10); lVar2 != **(long **)(puVar1 + 8); lVar2 = lVar2 + -0x28
        ) {
    }
  }
  return puVar1;
}



/* Entry: 104c3b748; end: 104c3b7a7;  */

/* WARNING: Removing unreachable block (ram,0x000104c3b79c) */

long FUN_104c3b748(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8);
        lVar1 = lVar1 + -0x28) {
    }
  }
  return param_1;
}



/* Entry: 104c3b7a8; end: 104c3b883;  */

undefined8 * FUN_104c3b7a8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_1107eb7c8;
  plVar5 = (long *)param_1[10];
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
  plVar5 = (long *)param_1[8];
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
      cVar2 = *(char *)((long)param_1 + 0x37);
      goto joined_r0x000104c3b858;
    }
  }
  cVar2 = *(char *)((long)param_1 + 0x37);
joined_r0x000104c3b858:
  if (cVar2 < '\0') {
    __ZdlPv(param_1[4]);
    cVar2 = *(char *)((long)param_1 + 0x1f);
  }
  else {
    cVar2 = *(char *)((long)param_1 + 0x1f);
  }
  if (-1 < cVar2) {
    return param_1;
  }
  __ZdlPv(param_1[1]);
  return param_1;
}



/* Entry: 104c3b884; end: 104c3b887;  */

undefined8 * FUN_104c3b884(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_1107eb7c8;
  plVar5 = (long *)param_1[10];
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
  plVar5 = (long *)param_1[8];
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
      cVar2 = *(char *)((long)param_1 + 0x37);
      goto joined_r0x000104c3b858;
    }
  }
  cVar2 = *(char *)((long)param_1 + 0x37);
joined_r0x000104c3b858:
  if (cVar2 < '\0') {
    __ZdlPv(param_1[4]);
    cVar2 = *(char *)((long)param_1 + 0x1f);
  }
  else {
    cVar2 = *(char *)((long)param_1 + 0x1f);
  }
  if (-1 < cVar2) {
    return param_1;
  }
  __ZdlPv(param_1[1]);
  return param_1;
}



/* Entry: 104c3b888; end: 104c3b89b;  */

void FUN_104c3b888(void)

{
  FUN_104c3b7a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c3b89c; end: 104c3c0f3;  */

void FUN_104c3b89c(long *param_1,long *param_2,long *param_3,undefined8 param_4,undefined4 *param_5,
                  undefined8 *param_6)

{
  undefined1 *puVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 uVar9;
  long *plVar10;
  long *plVar11;
  long **pplVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined4 uStack_124;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 auStack_100 [8];
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 uStack_b0;
  uint6 uStack_af;
  char cStack_a9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined1 uStack_72;
  undefined1 auStack_71 [17];
  
  uStack_72 = 0;
  plVar10 = (long *)0x140;
  __Znwm();
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10[3] = 0;
  plVar10[2] = 0;
  plVar10[5] = 0;
  plVar10[4] = 0;
  plVar10[7] = 0;
  plVar10[6] = 0;
  plVar10[0xb] = 0;
  plVar10[10] = 0;
  plVar10[0xd] = 0;
  plVar10[0xc] = 0;
  plVar10[0xf] = 0;
  plVar10[0xe] = 0;
  plVar10[0x11] = 0;
  plVar10[0x10] = 0;
  plVar10[0x13] = 0;
  plVar10[0x12] = 0;
  plVar10[0x15] = 0;
  plVar10[0x14] = 0;
  plVar10[0x17] = 0;
  plVar10[0x16] = 0;
  plVar10[0x19] = 0;
  plVar10[0x18] = 0;
  plVar10[0x1b] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x1d] = 0;
  plVar10[0x1c] = 0;
  plVar10[0x1f] = 0;
  plVar10[0x1e] = 0;
  plVar10[0x21] = 0;
  plVar10[0x20] = 0;
  plVar10[0x23] = 0;
  plVar10[0x22] = 0;
  plVar10[0x25] = 0;
  plVar10[0x24] = 0;
  plVar10[0x27] = 0;
  plVar10[0x26] = 0;
  plVar10[9] = 0;
  plVar10[8] = 0;
  func_0x000100468be4();
  plVar10[0xe] = 0;
  *(undefined2 *)(plVar10 + 0xf) = 0;
  plVar10[0x11] = 0;
  plVar10[0x10] = 0;
  plVar10[0x13] = 0;
  plVar10[0x12] = 0;
  plVar10[0x14] = 0;
  *(undefined4 *)(plVar10 + 0x15) = 3;
  *(undefined1 *)(plVar10 + 0x16) = 0;
  *(undefined1 *)(plVar10 + 0x19) = 0;
  plVar10[0x1a] = 0;
  *(undefined1 *)(plVar10 + 0x1b) = 0;
  *(undefined1 *)(plVar10 + 0x1e) = 0;
  *(undefined1 *)(plVar10 + 0x24) = 0;
  plVar10[0x1f] = 0;
  plVar10[0x20] = 0;
  *(undefined1 *)(plVar10 + 0x21) = 0;
  *(undefined2 *)(plVar10 + 0x25) = 0x101;
  plVar10[0x26] = 0;
  plVar10[0x27] = 0;
  plStack_80 = plVar10;
  func_0x00010046a890(plVar10,0);
  plVar10 = plStack_80;
  if (plStack_80 != param_2) {
    bVar3 = *(byte *)((long)param_2 + 0x17);
    if (*(char *)((long)plStack_80 + 0x17) < '\0') {
      uVar2 = param_2[1];
      plVar11 = (long *)*param_2;
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
        plVar11 = param_2;
      }
      func_0x0001006aabfc(plStack_80,plVar11,uVar2);
    }
    else if ((char)bVar3 < '\0') {
      func_0x00010014884c(plStack_80,*param_2,param_2[1]);
    }
    else {
      lVar19 = param_2[1];
      lVar14 = *param_2;
      plStack_80[2] = param_2[2];
      plStack_80[1] = lVar19;
      *plStack_80 = lVar14;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar10 + 0x10,param_2);
  plVar11 = plVar10;
  func_0x00010046a7c4(plVar10,&UNK_10f73f5c6,0xffffffffffffffff);
  if (plVar11 == (long *)0xffffffffffffffff) {
    if (*(char *)((long)plVar10 + 0x17) < '\0') {
      *(undefined1 *)*plVar10 = 0;
      plVar10[1] = 0;
    }
    else {
      *(undefined1 *)plVar10 = 0;
      *(undefined1 *)((long)plVar10 + 0x17) = 0;
    }
  }
  else {
    puVar1 = (undefined1 *)((long)plVar11 + 1);
    if ((long)*(char *)((long)plVar10 + 0x17) < 0) {
      if ((long *)plVar10[1] <= plVar11) goto LAB_104c3bf74;
      plVar10[1] = (long)puVar1;
      puVar1[*plVar10] = 0;
    }
    else {
      if ((long *)(long)*(char *)((long)plVar10 + 0x17) <= plVar11) {
LAB_104c3bf74:
        FUN_104c03f14();
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x104c3bf7c);
        (*pcVar8)();
      }
      *(char *)((long)plVar10 + 0x17) = (char)puVar1;
      *(undefined1 *)((long)plVar10 + (long)puVar1) = 0;
    }
  }
  plVar10 = (long *)0x30;
  __Znwm();
  plVar17 = plVar10 + 1;
  *plVar17 = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_FUN_1107eb548;
  plVar11 = plVar10 + 3;
  *plVar11 = 0;
  plVar10[4] = 0;
  plVar10[5] = 0;
  bVar3 = *(byte *)((long)param_6 + 0x17);
  uVar2 = param_6[1];
  if (-1 < (char)bVar3) {
    uVar2 = (ulong)bVar3;
  }
  plStack_90 = plVar11;
  plStack_88 = plVar10;
  if (uVar2 != 0) {
    if ((char)bVar3 < '\0') {
      func_0x000100033dac(&uStack_e0,*param_6);
      puVar18 = (undefined8 *)plVar10[4];
      puVar13 = (undefined8 *)plVar10[5];
    }
    else {
      puVar13 = (undefined8 *)0x0;
      puVar18 = (undefined8 *)0x0;
      uStack_d8 = param_6[1];
      uStack_e0 = *param_6;
      lStack_d0 = param_6[2];
    }
    lVar14 = lStack_d0;
    uVar7 = uStack_d8;
    uVar6 = uStack_e0;
    plStack_c0 = (long *)0x722d70616e732d78;
    plStack_b8 = (long *)0x6761742d6574756f;
    uStack_b0 = 0;
    cStack_a9 = '\x10';
    uStack_a0 = uStack_d8;
    uStack_a8 = uStack_e0;
    lStack_98 = lStack_d0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    lStack_d0 = 0;
    if (puVar18 < puVar13) {
      puVar18[2] = CONCAT17(0x10,(uint7)uStack_af << 8);
      puVar18[1] = 0x6761742d6574756f;
      *puVar18 = 0x722d70616e732d78;
      if (lVar14 < 0) {
        func_0x000100033dac(puVar18 + 3,uVar6,uVar7);
      }
      else {
        puVar18[5] = lVar14;
        puVar18[4] = uVar7;
        puVar18[3] = uVar6;
      }
      plVar10[4] = (long)(puVar18 + 6);
      plVar10[4] = (long)(puVar18 + 6);
    }
    else {
      FUN_104c38568(plVar11,&plStack_c0);
      plVar10[4] = (long)plVar11;
    }
    if (lStack_98 < 0) {
      __ZdlPv(uStack_a8);
    }
    if (cStack_a9 < '\0') {
      __ZdlPv(plStack_c0);
    }
  }
  plVar11 = (long *)0x30;
  __Znwm();
  plVar11[2] = 0;
  plVar11[3] = (long)&PTR_FUN_1107ebe68;
  *plVar11 = (long)&PTR_FUN_1107eb598;
  plVar11[1] = 0;
  plVar11[4] = (long)plStack_90;
  plVar11[5] = (long)plVar10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = *plVar17 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar17 = (long *)plStack_90[1];
  for (plVar10 = (long *)*plStack_90; plVar10 != plVar17; plVar10 = plVar10 + 6) {
    if ((long)*(char *)((long)plVar10 + 0x17) < 0) {
      plVar16 = (long *)*plVar10;
      plVar15 = (long *)((long)plVar16 + plVar10[1]);
    }
    else {
      plVar15 = (long *)((long)plVar10 + (long)*(char *)((long)plVar10 + 0x17));
      plVar16 = plVar10;
    }
    for (; plVar16 != plVar15; plVar16 = (long *)((long)plVar16 + 1)) {
      uVar9 = (undefined1)*plVar16;
      ___tolower();
      *(undefined1 *)plVar16 = uVar9;
    }
  }
  plVar10 = (long *)0x40;
  plStack_c0 = plVar11 + 3;
  plStack_b8 = plVar11;
  __Znwm();
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_DAT_1107eb5e8;
  plVar10[1] = 0;
  plStack_f0 = plVar10 + 3;
  *plStack_f0 = (long)&PTR_FUN_1107ebe28;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000100033dac(plVar10 + 4,*param_3,param_3[1]);
  }
  else {
    lVar14 = *param_3;
    plVar10[5] = param_3[1];
    plVar10[4] = lVar14;
    plVar10[6] = param_3[2];
  }
  *(undefined4 *)(plVar10 + 7) = *param_5;
  pplVar12 = &plStack_110;
  plStack_e8 = plVar10;
  FUN_104c38890(auStack_100,pplVar12,&plStack_f0);
  func_0x00010044fc98();
  plVar10 = (long *)0xb8;
  __Znwm();
  plVar10[2] = 0;
  plVar11 = plVar10 + 3;
  *plVar10 = (long)&PTR_FUN_1107ea880;
  plVar10[1] = 0;
  func_0x00010028bc78(plVar11,param_4,0,pplVar12,0);
  uStack_124 = 3;
  plStack_110 = plVar11;
  plStack_108 = plVar10;
  FUN_104c389ec(&uStack_120,auStack_71,&plStack_110,auStack_100,&plStack_c0,&plStack_80,&uStack_124,
                &uStack_72);
  plVar10 = plStack_118;
  puVar18 = (undefined8 *)0x30;
  __Znwm();
  puVar18[1] = 0;
  puVar18[2] = 0;
  *puVar18 = &PTR_FUN_1107eb808;
  if (plVar10 == (long *)0x0) {
    puVar18[3] = &PTR_DAT_110c75e58;
    puVar18[4] = uStack_120;
    puVar18[5] = 0;
  }
  else {
    plVar11 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar18[3] = &PTR_DAT_110c75e58;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar18[4] = uStack_120;
    puVar18[5] = plVar10;
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  *param_1 = (long)(puVar18 + 3);
  param_1[1] = (long)puVar18;
  if (plStack_118 != (long *)0x0) {
    plVar10 = plStack_118 + 1;
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
    }
  }
  plVar10 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar11 = plStack_108 + 1;
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
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (plStack_f8 != (long *)0x0) {
    plVar10 = plStack_f8 + 1;
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
    }
  }
  plVar10 = plStack_e8;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar11 = plStack_b8 + 1;
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
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar11 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_80;
  plStack_80 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    func_0x00010048b724();
    __ZdlPv();
  }
  return;
}



/* Entry: 104c3c0f4; end: 104c3c1bb;  */

long FUN_104c3c0f4(long param_1)

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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c3c1bc; end: 104c3c35f;  */

void FUN_104c3c1bc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,int param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_110;
  long *plStack_108;
  long lStack_f8;
  long *plStack_f0;
  undefined1 auStack_e8 [176];
  char cStack_38;
  
  uVar6 = *param_2;
  if (param_6 == 0) {
    func_0x000100627360(auStack_e8,param_3);
    cStack_38 = '\x01';
    plStack_108 = (long *)param_5[1];
    lStack_110 = *param_5;
    if (param_5[1] != 0) {
      plVar1 = (long *)(param_5[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010ade77b0(uVar6,param_4,auStack_e8,&lStack_110);
    if (plStack_108 == (long *)0x0) goto joined_r0x000104c3c2e0;
    plVar1 = plStack_108 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar5 = plStack_108;
    } while (cVar2 != '\0');
  }
  else {
    func_0x000100627360(auStack_e8,param_3);
    cStack_38 = '\x01';
    lStack_f8 = *param_5;
    if ((lStack_f8 == 0) ||
       (___dynamic_cast(lStack_f8,&PTR_DAT_1107eb898,&PTR_DAT_1107eb8b0,0xfffffffffffffffe),
       lStack_f8 == 0)) {
      lStack_f8 = 0;
      plStack_f0 = (long *)0x0;
    }
    else {
      plStack_f0 = (long *)param_5[1];
      if (plStack_f0 != (long *)0x0) {
        plVar1 = plStack_f0 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    func_0x00010ade7c00(uVar6,param_4,auStack_e8,&lStack_f8);
    if (plStack_f0 == (long *)0x0) goto joined_r0x000104c3c2e0;
    plVar1 = plStack_f0 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar5 = plStack_f0;
    } while (cVar2 != '\0');
  }
  if (lVar4 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
joined_r0x000104c3c2e0:
  if (cStack_38 == '\x01') {
    func_0x000100627b64(auStack_e8);
  }
  return;
}



/* Entry: 104c3c360; end: 104c3c3c3;  */

long FUN_104c3c360(long param_1)

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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c3c3c4; end: 104c3cc2b;  */

/* WARNING: Removing unreachable block (ram,0x000104c3ca4c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_104c3c3c4(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined ***pppuVar12;
  long lVar13;
  undefined4 *puVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long *plStack_230;
  long *plStack_228;
  undefined **ppuStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined4 uStack_200;
  char cStack_170;
  char acStack_160 [8];
  undefined8 uStack_158;
  undefined1 uStack_150;
  char cStack_149;
  undefined1 uStack_128;
  undefined2 uStack_120;
  undefined1 uStack_118;
  undefined1 uStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    return;
  }
  if (param_1[9] != 0) {
    bVar2 = *(byte *)((long)param_1 + 0x37);
    uVar8 = param_1[5];
    if (-1 < (char)bVar2) {
      uVar8 = (ulong)bVar2;
    }
    bVar3 = *(byte *)((long)param_3 + 0x17);
    uVar1 = param_3[1];
    if (-1 < (char)bVar3) {
      uVar1 = (ulong)bVar3;
    }
    if (uVar8 == uVar1) {
      plVar11 = (long *)param_1[4];
      if (-1 < (char)bVar2) {
        plVar11 = param_1 + 4;
      }
      plVar15 = (long *)*param_3;
      if (-1 < (char)bVar3) {
        plVar15 = param_3;
      }
      _memcmp(plVar11,plVar15);
      if ((int)plVar11 == 0) goto LAB_104c3c57c;
    }
  }
  plVar11 = param_1 + 4;
  if (plVar11 != param_3) {
    bVar2 = *(byte *)((long)param_3 + 0x17);
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      uVar8 = param_3[1];
      plVar15 = (long *)*param_3;
      if (-1 < (char)bVar2) {
        uVar8 = (ulong)bVar2;
        plVar15 = param_3;
      }
      func_0x0001006aabfc(plVar11,plVar15,uVar8);
    }
    else if ((char)bVar2 < '\0') {
      func_0x00010014884c(plVar11,*param_3,param_3[1]);
    }
    else {
      lVar18 = param_3[1];
      lVar13 = *param_3;
      param_1[6] = param_3[2];
      param_1[5] = lVar18;
      *plVar11 = lVar13;
    }
  }
  ppuVar7 = (undefined **)0x20;
  __Znwm();
  lStack_210 = -0x7fffffffffffffe0;
  lStack_218 = 0x18;
  ppuVar7[1] = (undefined *)0x7461686370616e73;
  *ppuVar7 = (undefined *)0x2e6970612e737761;
  ppuVar7[2] = (undefined *)0x3334343a6d6f632e;
  *(char *)(ppuVar7 + 3) = '\0';
  cStack_149 = '\n';
  builtin_strncpy(acStack_160,"ttsReque",8);
  uStack_158 = CONCAT53(uStack_158._3_5_,0x7473);
  ppuStack_220 = ppuVar7;
  FUN_104c3b89c(&ppuStack_a0,&ppuStack_220,param_3,acStack_160,param_1[7] + 4,param_1[7] + 0x50);
  plVar11 = plStack_98;
  ppuVar7 = ppuStack_a0;
  ppuStack_a0 = (undefined **)0x0;
  plStack_98 = (long *)0x0;
  plVar15 = (long *)param_1[10];
  param_1[10] = (long)plVar11;
  param_1[9] = (long)ppuVar7;
  if (plVar15 != (long *)0x0) {
    plVar11 = plVar15 + 1;
    do {
      lVar13 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      plVar11 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar15 = plStack_98 + 1;
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
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
    }
  }
  if (cStack_149 < '\0') {
    __ZdlPv(acStack_160);
  }
  if (lStack_210 < 0) {
    __ZdlPv(ppuStack_220);
  }
LAB_104c3c57c:
  ppuStack_a0 = &PTR_SUB_110c77260;
  plStack_98 = (long *)0x0;
  puStack_90 = &DAT_11383d918;
  puStack_88 = &DAT_11383d918;
  puStack_80 = &DAT_11383d918;
  puStack_78 = &DAT_11383d918;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uVar8 = 0x18;
  __Znwm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
  puStack_78 = (undefined *)(uVar8 | 2);
  puVar14 = (undefined4 *)param_1[7];
  puVar10 = (undefined8 *)(puVar14 + 2);
  uStack_70 = *puVar14;
  plVar11 = plStack_98;
  if (((ulong)plStack_98 & 1) != 0) {
    plVar11 = (long *)*(ulong *)((ulong)plStack_98 & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_88 & 3) == 0) {
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x18;
      __Znwm();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
      uVar8 = 2;
    }
    else {
      func_0x00010b4d80a4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
      uVar8 = 3;
    }
    puStack_88 = (undefined *)(uVar8 | (ulong)plVar11);
  }
  else {
    puVar9 = (undefined8 *)((ulong)puStack_88 & 0xfffffffffffffffc);
    if (puVar10 != puVar9) {
      bVar2 = *(byte *)((long)puVar14 + 0x1f);
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        uVar8 = *(ulong *)(puVar14 + 4);
        puVar6 = *(undefined8 **)(puVar14 + 2);
        if (-1 < (char)bVar2) {
          uVar8 = (ulong)bVar2;
          puVar6 = puVar10;
        }
        func_0x0001006aabfc(puVar9,puVar6,uVar8);
      }
      else if ((char)bVar2 < '\0') {
        func_0x00010014884c(puVar9,*(undefined8 *)(puVar14 + 2),*(undefined8 *)(puVar14 + 4));
      }
      else {
        uVar19 = *(undefined8 *)(puVar14 + 4);
        uVar17 = *puVar10;
        puVar9[2] = *(undefined8 *)(puVar14 + 6);
        puVar9[1] = uVar19;
        *puVar9 = uVar17;
      }
    }
  }
  lVar13 = param_1[7];
  plVar11 = plStack_98;
  if (((ulong)plStack_98 & 1) != 0) {
    plVar11 = (long *)*(ulong *)((ulong)plStack_98 & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_90 & 3) == 0) {
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x18;
      __Znwm();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
      uVar8 = 2;
    }
    else {
      func_0x00010b4d80a4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
      uVar8 = 3;
    }
    puStack_90 = (undefined *)(uVar8 | (ulong)plVar11);
  }
  else {
    puVar9 = (undefined8 *)(lVar13 + 0x20);
    puVar10 = (undefined8 *)((ulong)puStack_90 & 0xfffffffffffffffc);
    if (puVar9 != puVar10) {
      bVar2 = *(byte *)(lVar13 + 0x37);
      if (*(char *)((long)puVar10 + 0x17) < '\0') {
        uVar8 = *(ulong *)(lVar13 + 0x28);
        puVar6 = *(undefined8 **)(lVar13 + 0x20);
        if (-1 < (char)bVar2) {
          uVar8 = (ulong)bVar2;
          puVar6 = puVar9;
        }
        func_0x0001006aabfc(puVar10,puVar6,uVar8);
      }
      else if ((char)bVar2 < '\0') {
        func_0x00010014884c(puVar10,*(undefined8 *)(lVar13 + 0x20),*(undefined8 *)(lVar13 + 0x28));
      }
      else {
        uVar19 = *(undefined8 *)(lVar13 + 0x28);
        uVar17 = *puVar9;
        puVar10[2] = *(undefined8 *)(lVar13 + 0x30);
        puVar10[1] = uVar19;
        *puVar10 = uVar17;
      }
    }
  }
  lVar13 = param_1[7];
  plVar11 = plStack_98;
  if (((ulong)plStack_98 & 1) != 0) {
    plVar11 = (long *)*(ulong *)((ulong)plStack_98 & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_80 & 3) == 0) {
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x18;
      __Znwm();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
      uVar8 = 2;
    }
    else {
      func_0x00010b4d80a4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
      uVar8 = 3;
    }
    puStack_80 = (undefined *)(uVar8 | (ulong)plVar11);
  }
  else {
    puVar9 = (undefined8 *)(lVar13 + 0x38);
    puVar10 = (undefined8 *)((ulong)puStack_80 & 0xfffffffffffffffc);
    if (puVar9 != puVar10) {
      bVar2 = *(byte *)(lVar13 + 0x4f);
      if (*(char *)((long)puVar10 + 0x17) < '\0') {
        uVar8 = *(ulong *)(lVar13 + 0x40);
        puVar6 = *(undefined8 **)(lVar13 + 0x38);
        if (-1 < (char)bVar2) {
          uVar8 = (ulong)bVar2;
          puVar6 = puVar9;
        }
        func_0x0001006aabfc(puVar10,puVar6,uVar8);
      }
      else if ((char)bVar2 < '\0') {
        func_0x00010014884c(puVar10,*(undefined8 *)(lVar13 + 0x38),*(undefined8 *)(lVar13 + 0x40));
      }
      else {
        uVar19 = *(undefined8 *)(lVar13 + 0x40);
        uVar17 = *puVar9;
        puVar10[2] = *(undefined8 *)(lVar13 + 0x48);
        puVar10[1] = uVar19;
        *puVar10 = uVar17;
      }
    }
  }
  uVar17 = *(undefined8 *)(param_1[7] + 0x68);
  uStack_6c = (undefined4)uVar17;
  uStack_68 = (undefined4)((ulong)uVar17 >> 0x20);
  uStack_64 = *(undefined4 *)(param_1[7] + 0x70);
  plVar11 = (long *)0xc8;
  __Znwm();
  plVar15 = plVar11 + 1;
  *plVar15 = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&PTR_DAT_1107eb858;
  lStack_218 = param_4[1];
  ppuStack_220 = (undefined **)*param_4;
  lStack_208 = param_4[3];
  lStack_210 = param_4[2];
  plVar16 = plVar11 + 3;
  *plVar16 = (long)&PTR_FUN_1107ebfa8;
  plVar11[4] = (long)&PTR_FUN_1107ec000;
  __ZNSt3__17promiseIvEC1Ev(plVar11 + 5);
  plVar11[7] = lStack_218;
  plVar11[6] = (long)ppuStack_220;
  plVar11[9] = lStack_208;
  plVar11[8] = lStack_210;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  plVar11[10] = 0;
  *(undefined1 *)(plVar11 + 0xd) = 0;
  *(undefined8 *)((long)plVar11 + 0x74) = 0;
  *(undefined8 *)((long)plVar11 + 0x6c) = 0;
  *(undefined8 *)((long)plVar11 + 0x84) = 0;
  *(undefined8 *)((long)plVar11 + 0x7c) = 0;
  *(undefined8 *)((long)plVar11 + 0x94) = 0;
  *(undefined8 *)((long)plVar11 + 0x8c) = 0;
  *(undefined8 *)((long)plVar11 + 0xa4) = 0;
  *(undefined8 *)((long)plVar11 + 0x9c) = 0;
  plVar11[0x16] = 0;
  plVar11[0x15] = 0;
  *(undefined4 *)(plVar11 + 0x17) = 1;
  plVar11[0x18] = (long)param_1;
  uStack_158 = 1;
  acStack_160[0] = '\x10';
  acStack_160[1] = '\'';
  acStack_160[2] = '\0';
  acStack_160[3] = '\0';
  acStack_160[4] = '\0';
  acStack_160[5] = '\0';
  acStack_160[6] = '\0';
  acStack_160[7] = '\0';
  uStack_150 = 0;
  uStack_128 = 0;
  uStack_120 = 0x101;
  uStack_118 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  plStack_b0 = plVar16;
  plStack_a8 = plVar11;
  FUN_104c4bb14();
  lStack_210 = 0;
  lStack_208 = 0;
  ppuStack_220 = &PTR_FUN_1107eb688;
  lStack_218 = 0;
  uStack_200 = 10;
  pppuVar12 = &ppuStack_220;
  FUN_104c37260(pppuVar12,5);
  (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,pppuVar12,1);
  ppuStack_220 = &PTR_DAT_1107eb6f0;
  if (lStack_218 != 0) {
    for (; lStack_218 != lStack_210; lStack_210 = lStack_210 + -0x18) {
    }
    lStack_210 = lStack_218;
    __ZdlPv(lStack_218);
  }
  func_0x000100627360(&ppuStack_220,acStack_160);
  cStack_170 = '\x01';
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar5) {
      *plVar15 = *plVar15 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plStack_230 = plVar16;
  plStack_228 = plVar11;
  (**(code **)(*param_1 + 0x18))(param_1,&ppuStack_a0,&ppuStack_220,&plStack_230);
  plVar11 = plStack_228;
  if (plStack_228 != (long *)0x0) {
    plVar15 = plStack_228 + 1;
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
      (**(code **)(*plStack_228 + 0x10))(plStack_228);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  if (cStack_170 == '\x01') {
    func_0x000100627b64(&ppuStack_220);
  }
  func_0x000100627b64(acStack_160);
  plVar11 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar15 = plStack_a8 + 1;
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
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  func_0x00010adfc9b8(&ppuStack_a0);
  return;
}



/* Entry: 104c3cc2c; end: 104c3cce3;  */

void FUN_104c3cc2c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_30;
  long *plStack_28;
  
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  lStack_30 = *param_4;
  if (lStack_30 == 0) {
    lStack_30 = 0;
    plStack_28 = (long *)0x0;
  }
  else {
    plStack_28 = (long *)param_4[1];
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  func_0x00010ade77b0(uVar5,param_2,param_3,&lStack_30);
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
      return;
    }
  }
  return;
}



/* Entry: 104c3cce4; end: 104c3ccf3;  */

void FUN_104c3cce4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb808;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c3ccf4; end: 104c3cd13;  */

void FUN_104c3ccf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb808;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c3cd14; end: 104c3cd6b;  */

void FUN_104c3cd14(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x28);
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



/* Entry: 104c3cd6c; end: 104c3cd7f;  */

void FUN_104c3cd6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c3cd80; end: 104c3cd9f;  */

void FUN_104c3cd80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107eb858;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c3cda0; end: 104c3cdaf;  */

void FUN_104c3cda0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c3cda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104c3cdb0; end: 104c3cdc3;  */

void FUN_104c3cdb0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plStack_58;
  
  plVar5 = (long *)&DAT_10f62a4d8;
  FUN_104bd47e8();
  lVar7 = plVar5[1];
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x68))(&plStack_58,plVar5);
    plVar8 = plStack_58;
    plStack_58 = (long *)0x0;
    plVar6 = (long *)plVar5[1];
    plVar5[1] = (long)plVar8;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
      plVar8 = plStack_58;
      plStack_58 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    lVar7 = plVar5[1];
  }
  lVar1 = *param_3;
  lVar2 = param_3[1];
  *(int *)(lVar1 + 0x40) = (int)plVar5[4];
  if (lVar2 != 0) {
    plVar8 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = *(long **)(lVar7 + 0x18);
  *(long *)(lVar7 + 0x10) = lVar1;
  *(long *)(lVar7 + 0x18) = lVar2;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 1;
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  FUN_104c35d7c(plVar5[1]);
  return;
}



/* Entry: 104c3cdc4; end: 104c3cee7;  */

void FUN_104c3cdc4(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plStack_48;
  
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    (**(code **)(*param_2 + 0x68))(&plStack_48,param_2);
    plVar7 = plStack_48;
    plStack_48 = (long *)0x0;
    plVar5 = (long *)param_2[1];
    param_2[1] = (long)plVar7;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
      plVar7 = plStack_48;
      plStack_48 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    lVar6 = param_2[1];
  }
  lVar1 = *param_4;
  lVar2 = param_4[1];
  *(int *)(lVar1 + 0x40) = (int)param_2[4];
  if (lVar2 != 0) {
    plVar7 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(lVar6 + 0x18);
  *(long *)(lVar6 + 0x10) = lVar1;
  *(long *)(lVar6 + 0x18) = lVar2;
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(param_1,plVar7,param_3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  FUN_104c35d7c(param_1,param_2[1],param_3,param_5,0);
  return;
}



/* Entry: 104c3cee8; end: 104c3d16f;  */

void FUN_104c3cee8(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long ****pppplVar2;
  char cVar3;
  bool bVar4;
  long ***ppplVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  long ****pppplVar9;
  long lVar10;
  long ***ppplStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  
  FUN_104c3d170(&lStack_60,param_4);
  lVar10 = param_1[1];
  if (lVar10 == 0) {
    (**(code **)(*param_1 + 0x68))(&ppplStack_78,param_1);
    ppplVar5 = ppplStack_78;
    ppplStack_78 = (long ***)0x0;
    plVar7 = (long *)param_1[1];
    param_1[1] = (long)ppplVar5;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
      ppplVar5 = ppplStack_78;
      ppplStack_78 = (long ***)0x0;
      if ((long ****)ppplVar5 != (long ****)0x0) {
        (*(code *)(*ppplVar5)[1])();
      }
    }
    lVar10 = param_1[1];
  }
  *(int *)(lStack_60 + 0x40) = (int)param_1[4];
  if (plStack_58 != (long *)0x0) {
    plVar7 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(lVar10 + 0x18);
  *(long *)(lVar10 + 0x10) = lStack_60;
  *(long **)(lVar10 + 0x18) = plStack_58;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  lVar10 = param_1[1];
  uVar8 = param_3;
  _strlen();
  if (0x7ffffffffffffff6 < uVar8) {
    FUN_104bd47d4();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x104c3d124);
    (*pcVar6)();
  }
  if (uVar8 < 0x17) {
    uStack_68 = CONCAT17((char)uVar8,(undefined7)uStack_68);
    pppplVar9 = &ppplStack_78;
    if (uVar8 == 0) goto LAB_104c3d048;
  }
  else {
    pppplVar2 = (long ****)0x19;
    if ((uVar8 | 7) != 0x17) {
      pppplVar2 = (long ****)((uVar8 | 7) + 1);
    }
    pppplVar9 = pppplVar2;
    __Znwm();
    uStack_68 = (ulong)pppplVar2 | 0x8000000000000000;
    ppplStack_78 = (long ***)pppplVar9;
    uStack_70 = uVar8;
  }
  _memcpy(pppplVar9,param_3,uVar8);
LAB_104c3d048:
  *(undefined1 *)((long)pppplVar9 + uVar8) = 0;
  *(undefined8 *)(lVar10 + 0x20) = param_2;
  *(undefined8 *)(lVar10 + 0x70) = param_5;
  pppplVar2 = (long ****)(lVar10 + 0x58);
  if (pppplVar2 != &ppplStack_78) {
    if (*(char *)(lVar10 + 0x6f) < '\0') {
      uVar8 = uStack_70;
      pppplVar9 = (long ****)ppplStack_78;
      if (-1 < (long)uStack_68) {
        uVar8 = uStack_68 >> 0x38;
        pppplVar9 = &ppplStack_78;
      }
      func_0x0001006aabfc(pppplVar2,pppplVar9,uVar8);
    }
    else if ((long)uStack_68 < 0) {
      func_0x00010014884c(pppplVar2,ppplStack_78,uStack_70);
    }
    else {
      *(ulong *)(lVar10 + 0x60) = uStack_70;
      *pppplVar2 = ppplStack_78;
      *(ulong *)(lVar10 + 0x68) = uStack_68;
    }
  }
  FUN_104c375cc(lVar10);
  if ((long)uStack_68 < 0) {
    __ZdlPv(ppplStack_78);
  }
  if (plStack_58 != (long *)0x0) {
    plVar7 = plStack_58 + 1;
    do {
      lVar10 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  return;
}



/* Entry: 104c3d170; end: 104c3eb2b;  */

/* WARNING: Removing unreachable block (ram,0x000104c3da84) */
/* WARNING: Removing unreachable block (ram,0x000104c3dc5c) */
/* WARNING: Removing unreachable block (ram,0x000104c3dc6c) */
/* WARNING: Removing unreachable block (ram,0x000104c3dc70) */
/* WARNING: Removing unreachable block (ram,0x000104c3d470) */
/* WARNING: Removing unreachable block (ram,0x000104c3d39c) */
/* WARNING: Removing unreachable block (ram,0x000104c3d7bc) */
/* WARNING: Removing unreachable block (ram,0x000104c3da48) */
/* WARNING: Removing unreachable block (ram,0x000104c3dfc8) */
/* WARNING: Removing unreachable block (ram,0x000104c3df3c) */
/* WARNING: Removing unreachable block (ram,0x000104c3e574) */
/* WARNING: Removing unreachable block (ram,0x000104c3e000) */
/* WARNING: Removing unreachable block (ram,0x000104c3da4c) */
/* WARNING: Removing unreachable block (ram,0x000104c3dfe0) */
/* WARNING: Removing unreachable block (ram,0x000104c3e310) */
/* WARNING: Removing unreachable block (ram,0x000104c3e620) */
/* WARNING: Removing unreachable block (ram,0x000104c3d9b4) */
/* WARNING: Removing unreachable block (ram,0x000104c3daa8) */
/* WARNING: Removing unreachable block (ram,0x000104c3e24c) */
/* WARNING: Removing unreachable block (ram,0x000104c3e250) */
/* WARNING: Removing unreachable block (ram,0x000104c3e258) */
/* WARNING: Removing unreachable block (ram,0x000104c3e260) */
/* WARNING: Removing unreachable block (ram,0x000104c3e264) */
/* WARNING: Removing unreachable block (ram,0x000104c3e344) */
/* WARNING: Type propagation algorithm not settling */

void FUN_104c3d170(long *param_1,int *param_2)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *******pppppppuVar3;
  ulong ******ppppppuVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined1 uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulong *******pppppppuVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong ******ppppppuVar16;
  ulong *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  ulong *****pppppuVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long *plVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  ulong *******pppppppuVar31;
  long lVar32;
  undefined8 *puVar33;
  ulong *****pppppuVar34;
  long lVar35;
  ulong ******ppppppuVar36;
  long lVar37;
  undefined8 *puVar38;
  ulong *******pppppppuVar39;
  char cVar40;
  ulong *******pppppppuVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  ulong *******pppppppuStack_178;
  ulong *******pppppppuStack_160;
  ulong *******pppppppuStack_158;
  long lStack_150;
  long *plStack_148;
  long *plStack_140;
  ulong *******pppppppuStack_138;
  ulong *******pppppppuStack_130;
  ulong *******pppppppuStack_128;
  ulong *******pppppppuStack_120;
  ulong *******pppppppuStack_118;
  undefined8 *******pppppppuStack_110;
  ulong ******ppppppuStack_108;
  undefined8 uStack_100;
  ulong *******pppppppuStack_f8;
  ulong *******pppppppuStack_f0;
  undefined8 uStack_e8;
  ulong *******pppppppuStack_e0;
  ulong *******pppppppuStack_d8;
  undefined8 uStack_d0;
  ulong *******pppppppuStack_c8;
  ulong *******pppppppuStack_c0;
  ulong *******apppppppuStack_b8 [2];
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  undefined8 uStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong *******pppppppuStack_80;
  ulong *******pppppppuStack_78;
  
  puVar10 = (undefined8 *)0x138;
  __Znwm();
  puVar10[2] = 0;
  *puVar10 = &PTR_FUN_1107eb320;
  puVar10[1] = 0;
  puVar38 = puVar10 + 3;
  puVar10[4] = 0;
  *puVar38 = 0;
  puVar10[8] = 0;
  puVar10[7] = 0;
  puVar10[10] = 0;
  puVar10[9] = 0;
  puVar10[0xc] = 0;
  puVar10[0xb] = 0;
  puVar10[0xe] = 0;
  puVar10[0xd] = 0;
  puVar10[0x10] = 0;
  puVar10[0xf] = 0;
  puVar10[0x14] = 0;
  puVar10[0x13] = 0;
  puVar10[0x16] = 0;
  puVar10[0x15] = 0;
  puVar10[0x18] = 0;
  puVar10[0x17] = 0;
  puVar10[0x1a] = 0;
  puVar10[0x19] = 0;
  puVar10[0x1c] = 0;
  puVar10[0x1b] = 0;
  puVar10[0x1e] = 0;
  puVar10[0x1d] = 0;
  puVar10[0x20] = 0;
  puVar10[0x1f] = 0;
  puVar10[0x23] = 0;
  puVar10[0x22] = 0;
  puVar10[0x21] = 0;
  puVar10[0x12] = 0;
  puVar10[0x11] = 0;
  puVar14 = puVar10 + 5;
  puVar10[6] = 0;
  *puVar14 = 0;
  *(undefined1 *)((long)puVar10 + 0x3f) = 5;
  *(undefined4 *)puVar14 = 0x552d6e65;
  *(undefined1 *)((long)puVar10 + 0x2c) = 0x53;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[10] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  puVar10[0xe] = 0;
  *(undefined4 *)(puVar10 + 0xf) = 1;
  *(undefined1 *)((long)puVar10 + 0x7c) = 1;
  *(undefined4 *)(puVar10 + 0x10) = 1;
  puVar10[0x12] = 0;
  puVar10[0x11] = 0;
  puVar10[0x14] = 0;
  puVar10[0x13] = 0;
  puVar10[0x16] = 0;
  puVar10[0x15] = 0;
  puVar10[0x18] = 0;
  puVar10[0x17] = 0;
  puVar10[0x1a] = 0;
  puVar10[0x19] = 0;
  puVar10[0x1c] = 0;
  puVar10[0x1b] = 0;
  puVar10[0x1e] = 0;
  puVar10[0x1d] = 0;
  puVar10[0x20] = 0;
  puVar10[0x1f] = 0;
  puVar10[0x22] = 0;
  puVar10[0x21] = 0;
  *(undefined4 *)((long)puVar10 + 0x11c) = 1;
  puVar10[0x24] = 0;
  puVar10[0x25] = 0;
  puVar10[0x26] = 0;
  *param_1 = (long)puVar38;
  param_1[1] = (long)puVar10;
  iVar5 = param_2[1];
  *(bool *)puVar38 = *param_2 != 0;
  *(bool *)((long)puVar10 + 0x19) = iVar5 != 0;
  *(undefined8 *)((long)puVar10 + 0x1c) = *(undefined8 *)(param_2 + 2);
  func_0x000100042ef0(puVar14,*(undefined8 *)(param_2 + 6));
  func_0x000100042ef0(puVar10 + 8,*(undefined8 *)(param_2 + 8));
  *(int *)(puVar10 + 0x23) = param_2[4];
  func_0x000100042ef0(puVar10 + 0xc,*(undefined8 *)(param_2 + 10));
  iVar5 = param_2[0xd];
  *(int *)(puVar10 + 0xf) = param_2[0xc];
  *(bool *)((long)puVar10 + 0x7c) = iVar5 != 0;
  iVar5 = param_2[0xf];
  *(bool *)((long)puVar10 + 0x7d) = param_2[0xe] != 0;
  *(bool *)((long)puVar10 + 0x7e) = iVar5 != 0;
  *(int *)(puVar10 + 0x10) = param_2[0x10];
  func_0x000100042ef0(puVar10 + 0x14,*(undefined8 *)(param_2 + 0x12));
  func_0x000100042ef0(puVar10 + 0x17,*(undefined8 *)(param_2 + 0x14));
  func_0x000100042ef0(puVar10 + 0x1a,*(undefined8 *)(param_2 + 0x16));
  func_0x000100042ef0(puVar10 + 0x1d,*(undefined8 *)(param_2 + 0x18));
  puVar29 = (undefined4 *)puVar10[0x20];
  puVar20 = (undefined4 *)puVar10[0x21];
  puVar30 = puVar29;
  if (puVar29 != puVar20) {
    do {
      lVar25 = *(long *)(puVar20 + -6);
      if (lVar25 != 0) {
        lVar32 = *(long *)(puVar20 + -4);
        lVar35 = lVar25;
        if (lVar25 != lVar32) {
          do {
            lVar32 = lVar32 + -0x18;
          } while (lVar32 != lVar25);
          lVar35 = *(long *)(puVar20 + -6);
        }
        *(long *)(puVar20 + -4) = lVar25;
        __ZdlPv(lVar35);
      }
      puVar20 = puVar20 + -8;
    } while (puVar29 != puVar20);
    puVar30 = (undefined4 *)puVar10[0x20];
  }
  puVar10[0x21] = puVar29;
  uVar27 = (ulong)param_2[0x20];
  if ((ulong)(puVar10[0x22] - (long)puVar30 >> 5) < uVar27) {
    if (param_2[0x20] < 0) {
      FUN_104c35348();
      goto LAB_104c3e884;
    }
    puVar11 = (undefined4 *)(uVar27 << 5);
    __Znwm();
    lVar25 = (long)puVar11 + ((long)puVar29 - (long)puVar30);
    puVar20 = puVar30;
    puVar21 = puVar11;
    if ((long)puVar29 - (long)puVar30 == 0) {
      puVar10[0x20] = puVar11;
      puVar10[0x21] = lVar25;
      puVar10[0x22] = puVar11 + uVar27 * 8;
    }
    else {
      do {
        *puVar21 = *puVar20;
        uVar42 = *(undefined8 *)(puVar20 + 2);
        *(undefined8 *)(puVar21 + 4) = *(undefined8 *)(puVar20 + 4);
        *(undefined8 *)(puVar21 + 2) = uVar42;
        *(undefined8 *)(puVar21 + 6) = *(undefined8 *)(puVar20 + 6);
        *(undefined8 *)(puVar20 + 2) = 0;
        *(undefined8 *)(puVar20 + 4) = 0;
        *(undefined8 *)(puVar20 + 6) = 0;
        puVar20 = puVar20 + 8;
        puVar21 = puVar21 + 8;
      } while (puVar20 != puVar29);
      do {
        lVar35 = *(long *)(puVar30 + 2);
        if (lVar35 != 0) {
          lVar37 = *(long *)(puVar30 + 4);
          lVar32 = lVar35;
          if (lVar35 != lVar37) {
            do {
              lVar37 = lVar37 + -0x18;
            } while (lVar37 != lVar35);
            lVar32 = *(long *)(puVar30 + 2);
          }
          *(long *)(puVar30 + 4) = lVar35;
          __ZdlPv(lVar32);
        }
        puVar30 = puVar30 + 8;
      } while (puVar30 != puVar29);
      puVar30 = (undefined4 *)puVar10[0x20];
      puVar10[0x20] = puVar11;
      puVar10[0x21] = lVar25;
      puVar10[0x22] = puVar11 + uVar27 * 8;
    }
    if (puVar30 != (undefined4 *)0x0) {
      __ZdlPv(puVar30);
    }
  }
  if (0 < param_2[0x20]) {
    lVar25 = 0;
    do {
      uVar27 = (ulong)pppppppuStack_e0 >> 0x20;
      pppppppuStack_e0 = (ulong *******)((ulong)pppppppuStack_e0 & 0xffffffff00000000);
      uStack_d0 = (ulong *******)0x0;
      pppppppuStack_c8 = (ulong *******)0x0;
      pppppppuStack_d8 = (ulong *******)0x0;
      puVar30 = (undefined4 *)(*(long *)(param_2 + 0x1e) + lVar25 * 0x18);
      iVar5 = puVar30[4];
      if (iVar5 == 0) {
        pppppppuStack_e0 = (ulong *******)CONCAT44((int)uVar27,*puVar30);
      }
      else {
        if (iVar5 < 0) {
          FUN_104bdcf60();
          goto LAB_104c3e884;
        }
        pppppppuVar12 = (ulong *******)((long)iVar5 * 0x18);
        __Znwm();
        pppppppuStack_c8 = pppppppuVar12 + (long)iVar5 * 3;
        pppppppuStack_e0 = (ulong *******)CONCAT44(pppppppuStack_e0._4_4_,*puVar30);
        pppppppuStack_d8 = pppppppuVar12;
        uStack_d0 = pppppppuVar12;
        if (0 < (int)puVar30[4]) {
          lVar35 = 0;
          do {
            lVar32 = *(long *)(puVar30 + 2);
            uStack_d0 = pppppppuVar12;
            if (pppppppuVar12 < pppppppuStack_c8) {
              ppppppuVar36 = *(ulong *******)(lVar32 + lVar35 * 8);
              ppppppuVar16 = ppppppuVar36;
              _strlen();
              if ((ulong ******)0x7ffffffffffffff6 < ppppppuVar16) {
                FUN_104bd47d4();
                goto LAB_104c3e884;
              }
              if (ppppppuVar16 < (ulong ******)0x17) {
                *(char *)((long)pppppppuVar12 + 0x17) = (char)ppppppuVar16;
                pppppppuVar31 = pppppppuVar12;
                if (ppppppuVar16 != (ulong ******)0x0) goto LAB_104c3d554;
              }
              else {
                pppppppuVar41 = (ulong *******)0x19;
                if (((ulong)ppppppuVar16 | 7) != 0x17) {
                  pppppppuVar41 = (ulong *******)(((ulong)ppppppuVar16 | 7) + 1);
                }
                pppppppuVar31 = pppppppuVar41;
                __Znwm();
                pppppppuVar12[1] = ppppppuVar16;
                pppppppuVar12[2] = (ulong ******)((ulong)pppppppuVar41 | 0x8000000000000000);
                *pppppppuVar12 = (ulong ******)pppppppuVar31;
LAB_104c3d554:
                _memmove(pppppppuVar31,ppppppuVar36,ppppppuVar16);
              }
              *(char *)((long)pppppppuVar31 + (long)ppppppuVar16) = '\0';
              pppppppuVar12 = pppppppuVar12 + 3;
            }
            else {
              lVar37 = (long)pppppppuVar12 - (long)pppppppuStack_d8;
              uVar27 = (lVar37 >> 3) * -0x5555555555555555 + 1;
              if (0xaaaaaaaaaaaaaaa < uVar27) {
                FUN_104bdcf60();
                goto LAB_104c3e884;
              }
              lVar23 = (long)pppppppuStack_c8 - (long)pppppppuStack_d8 >> 3;
              uVar24 = lVar23 * 0x5555555555555556;
              if (uVar24 < uVar27 || uVar24 - uVar27 == 0) {
                uVar24 = uVar27;
              }
              if (0x555555555555554 < (ulong)(lVar23 * -0x5555555555555555)) {
                uVar24 = 0xaaaaaaaaaaaaaaa;
              }
              pppppppuStack_130 = (ulong *******)&pppppppuStack_c8;
              if (uVar24 == 0) {
                lVar23 = 0;
              }
              else {
                if (0xaaaaaaaaaaaaaaa < uVar24) {
                  FUN_104bd35f4();
                  goto LAB_104c3e884;
                }
                lVar23 = uVar24 * 0x18;
                __Znwm();
              }
              plVar28 = (long *)(lVar23 + lVar37);
              pppppppuStack_138 = (ulong *******)(lVar23 + uVar24 * 0x18);
              uVar24 = *(ulong *)(lVar32 + lVar35 * 8);
              uVar27 = uVar24;
              lStack_150 = lVar23;
              plStack_148 = plVar28;
              plStack_140 = plVar28;
              _strlen();
              if (0x7ffffffffffffff6 < uVar27) {
                FUN_104bd47d4();
                goto LAB_104c3e884;
              }
              if (uVar27 < 0x17) {
                *(char *)((long)plVar28 + 0x17) = (char)uVar27;
                plVar13 = plVar28;
                if (uVar27 != 0) goto LAB_104c3d6c4;
              }
              else {
                plVar2 = (long *)0x19;
                if ((uVar27 | 7) != 0x17) {
                  plVar2 = (long *)((uVar27 | 7) + 1);
                }
                plVar13 = plVar2;
                __Znwm();
                plVar28[1] = uVar27;
                plVar28[2] = (ulong)plVar2 | 0x8000000000000000;
                *plVar28 = (long)plVar13;
LAB_104c3d6c4:
                _memmove(plVar13,uVar24,uVar27);
                plVar28 = plVar13;
              }
              *(undefined1 *)((long)plVar28 + uVar27) = 0;
              pppppppuVar12 = (ulong *******)(plStack_140 + 3);
              pppppppuVar31 =
                   (ulong *******)((long)plStack_148 - ((long)uStack_d0 - (long)pppppppuStack_d8));
              _memcpy(pppppppuVar31);
              pppppppuStack_c8 = pppppppuStack_138;
              bVar7 = pppppppuStack_d8 != (ulong *******)0x0;
              pppppppuStack_d8 = pppppppuVar31;
              if (bVar7) {
                uStack_d0 = pppppppuVar12;
                __ZdlPv();
              }
            }
            lVar35 = lVar35 + 1;
            uStack_d0 = pppppppuVar12;
          } while (lVar35 < (int)puVar30[4]);
        }
      }
      puVar30 = (undefined4 *)puVar10[0x21];
      if (puVar30 < (undefined4 *)puVar10[0x22]) {
        *puVar30 = pppppppuStack_e0._0_4_;
        *(undefined8 *)(puVar30 + 2) = 0;
        *(undefined8 *)(puVar30 + 4) = 0;
        *(undefined8 *)(puVar30 + 6) = 0;
        func_0x00010015bcc4();
        puVar10[0x21] = puVar30 + 8;
        puVar10[0x21] = puVar30 + 8;
      }
      else {
        puVar14 = puVar10 + 0x20;
        FUN_104c40b30(puVar14,&pppppppuStack_e0);
        puVar10[0x21] = puVar14;
      }
      if (pppppppuStack_d8 != (ulong *******)0x0) {
        for (; pppppppuStack_d8 != uStack_d0; uStack_d0 = uStack_d0 + -3) {
        }
        uStack_d0 = pppppppuStack_d8;
        __ZdlPv(pppppppuStack_d8);
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < param_2[0x20]);
    puVar38 = (undefined8 *)*param_1;
  }
  puVar14 = puVar38 + 0xe;
  puVar26 = (undefined8 *)*puVar14;
  puVar33 = (undefined8 *)puVar38[0xf];
  puVar10 = puVar26;
  if (puVar26 != puVar33) {
    do {
      puVar33 = puVar33 + -8;
      func_0x000104c40640(puVar33);
    } while (puVar33 != puVar26);
    puVar10 = (undefined8 *)*puVar14;
  }
  puVar38[0xf] = puVar26;
  uVar27 = (ulong)param_2[0x1c];
  if ((ulong)(puVar38[0x10] - (long)puVar10 >> 6) < uVar27) {
    if (param_2[0x1c] < 0) {
      FUN_104c35708();
LAB_104c3e884:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x104c3e888);
      (*pcVar9)();
    }
    puVar15 = (undefined8 *)(uVar27 << 6);
    __Znwm();
    lVar25 = (long)puVar26 - (long)puVar10;
    puVar33 = puVar10;
    puVar22 = puVar15;
    if (lVar25 != 0) {
      do {
        uVar43 = puVar33[1];
        uVar42 = *puVar33;
        puVar22[2] = puVar33[2];
        puVar22[1] = uVar43;
        *puVar22 = uVar42;
        puVar33[1] = 0;
        puVar33[2] = 0;
        *puVar33 = 0;
        uVar42 = puVar33[3];
        puVar22[4] = puVar33[4];
        puVar22[3] = uVar42;
        puVar22[5] = puVar33[5];
        puVar33[3] = 0;
        puVar33[4] = 0;
        puVar33[5] = 0;
        uVar42 = puVar33[6];
        puVar22[7] = puVar33[7];
        puVar22[6] = uVar42;
        puVar33[6] = 0;
        puVar33[7] = 0;
        puVar33 = puVar33 + 8;
        puVar22 = puVar22 + 8;
      } while (puVar33 != puVar26);
      do {
        func_0x000104c40640(puVar10);
        puVar10 = puVar10 + 8;
      } while (puVar10 != puVar26);
      puVar10 = (undefined8 *)*puVar14;
    }
    puVar38[0xe] = puVar15;
    puVar38[0xf] = (long)puVar15 + lVar25;
    puVar38[0x10] = puVar15 + uVar27 * 8;
    if (puVar10 != (undefined8 *)0x0) {
      __ZdlPv(puVar10);
    }
  }
  if (0 < param_2[0x1c]) {
    lVar25 = 0;
    do {
      pppppppuStack_128 = (ulong *******)0x0;
      pppppppuStack_130 = (ulong *******)0x0;
      pppppppuStack_118 = (ulong *******)0x0;
      pppppppuStack_120 = (ulong *******)0x0;
      plStack_148 = (long *)0x0;
      lStack_150 = 0;
      pppppppuStack_138 = (ulong *******)0x0;
      plStack_140 = (long *)0x0;
      puVar10 = (undefined8 *)(*(long *)(param_2 + 0x1a) + lVar25 * 0x38);
      func_0x000100042ef0(&lStack_150,*puVar10);
      FUN_104c34928(&pppppppuStack_138,(long)*(int *)(puVar10 + 2));
      if (0 < *(int *)(puVar10 + 2)) {
        lVar32 = 0;
        lVar35 = 0;
        do {
          pppppppuStack_c8 = (ulong *******)0x0;
          uStack_d0 = (ulong *******)0x0;
          apppppppuStack_b8[0] = (ulong *******)0x0;
          pppppppuStack_c0 = (ulong *******)0x0;
          pppppppuStack_d8 = (ulong *******)0x0;
          pppppppuStack_e0 = (ulong *******)0x0;
          func_0x000100042ef0(&pppppppuStack_e0,*(undefined8 *)(puVar10[1] + lVar32));
          func_0x000100042ef0(&pppppppuStack_c8,*(undefined8 *)(puVar10[1] + lVar32 + 8));
          pppppppuVar31 = pppppppuStack_d8;
          pppppppuVar12 = pppppppuStack_e0;
          if (pppppppuStack_130 < pppppppuStack_128) {
            pppppppuStack_130[2] = (ulong ******)uStack_d0;
            pppppppuStack_130[1] = (ulong ******)pppppppuVar31;
            *pppppppuStack_130 = (ulong ******)pppppppuVar12;
            pppppppuVar31 = pppppppuStack_c0;
            pppppppuVar12 = pppppppuStack_c8;
            pppppppuStack_130[5] = (ulong ******)apppppppuStack_b8[0];
            pppppppuStack_130[4] = (ulong ******)pppppppuVar31;
            pppppppuStack_130[3] = (ulong ******)pppppppuVar12;
            pppppppuStack_130 = pppppppuStack_130 + 6;
          }
          else {
            pppppppuVar12 = (ulong *******)&pppppppuStack_138;
            FUN_104c34d60(pppppppuVar12,&pppppppuStack_e0);
            pppppppuStack_130 = pppppppuVar12;
          }
          lVar35 = lVar35 + 1;
          lVar32 = lVar32 + 0x10;
        } while (lVar35 < *(int *)(puVar10 + 2));
      }
      pppppppuStack_160 = (ulong *******)0x0;
      pppppppuStack_158 = (ulong *******)0x0;
      cVar40 = *(char *)((long)puVar10 + 0x14);
      if (cVar40 == '\x02') {
        pppppppuStack_158 = (ulong *******)0x28;
        __Znwm();
        pppppppuStack_158[1] = (ulong ******)0x0;
        pppppppuStack_158[2] = (ulong ******)0x0;
        *pppppppuStack_158 = (ulong ******)&PTR_FUN_1107eb988;
        pppppppuStack_158[4] = (ulong ******)0x2;
        pppppppuStack_160 = pppppppuStack_158 + 3;
        *pppppppuStack_160 = (ulong ******)&PTR_DAT_1107eb9d8;
      }
      else if (cVar40 == '\x01') {
        pppppppuStack_158 = (ulong *******)0x40;
        __Znwm();
        pppppppuVar12 = pppppppuStack_158 + 1;
        *pppppppuVar12 = (ulong ******)0x0;
        pppppppuStack_158[2] = (ulong ******)0x0;
        *pppppppuStack_158 = (ulong ******)&PTR_DAT_1107eb410;
        pppppppuStack_160 = pppppppuStack_158 + 3;
        *pppppppuStack_160 = (ulong ******)&PTR_FUN_1107eb2d0;
        pppppppuStack_158[4] = (ulong ******)0x1;
        pppppppuStack_158[5] = (ulong ******)0x0;
        pppppppuStack_158[6] = (ulong ******)0x0;
        pppppppuStack_158[7] = (ulong ******)0x0;
        iVar5 = *(int *)(puVar10 + 4);
        do {
          cVar40 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
          if (bVar7) {
            *pppppppuVar12 = (ulong ******)((long)*pppppppuVar12 + 1);
            cVar40 = ExclusiveMonitorsStatus();
          }
        } while (cVar40 != '\0');
        pppppppuStack_e0 = pppppppuStack_160;
        pppppppuStack_d8 = pppppppuStack_158;
        if (0 < iVar5) {
          lVar32 = 0;
          lVar35 = 0;
          do {
            while( true ) {
              pppppppuVar12 = pppppppuStack_e0;
              ppppppuVar16 = pppppppuStack_e0[3];
              if (pppppppuStack_e0[4] <= ppppppuVar16) break;
              pppppuVar34 = *(ulong ******)(puVar10[3] + lVar32);
              pppppuVar19 = pppppuVar34;
              _strlen();
              if ((ulong *****)0x7ffffffffffffff6 < pppppuVar19) {
                FUN_104bd47d4();
                goto LAB_104c3e884;
              }
              if (pppppuVar19 < (ulong *****)0x17) {
                *(char *)((long)ppppppuVar16 + 0x17) = (char)pppppuVar19;
                ppppppuVar36 = ppppppuVar16;
                if (pppppuVar19 != (ulong *****)0x0) goto LAB_104c3e0d0;
              }
              else {
                ppppppuVar4 = (ulong ******)0x19;
                if (((ulong)pppppuVar19 | 7) != 0x17) {
                  ppppppuVar4 = (ulong ******)(((ulong)pppppuVar19 | 7) + 1);
                }
                ppppppuVar36 = ppppppuVar4;
                __Znwm();
                ppppppuVar16[1] = pppppuVar19;
                ppppppuVar16[2] = (ulong *****)((ulong)ppppppuVar4 | 0x8000000000000000);
                *ppppppuVar16 = (ulong *****)ppppppuVar36;
LAB_104c3e0d0:
                _memmove(ppppppuVar36,pppppuVar34,pppppuVar19);
              }
              *(undefined1 *)((long)ppppppuVar36 + (long)pppppuVar19) = 0;
              pppppppuVar12[3] = ppppppuVar16 + 3;
              pppppppuVar12[3] = ppppppuVar16 + 3;
              lVar35 = lVar35 + 1;
              lVar32 = lVar32 + 8;
              if (*(int *)(puVar10 + 4) <= lVar35) goto LAB_104c3e1a4;
            }
            pppppppuVar31 = pppppppuStack_e0 + 2;
            FUN_104c40998(pppppppuVar31,puVar10[3] + lVar32);
            pppppppuVar12[3] = (ulong ******)pppppppuVar31;
            lVar35 = lVar35 + 1;
            lVar32 = lVar32 + 8;
          } while (lVar35 < *(int *)(puVar10 + 4));
LAB_104c3e1a4:
          if (pppppppuStack_d8 == (ulong *******)0x0) goto LAB_104c3e210;
        }
        pppppppuStack_178 = pppppppuStack_d8;
        pppppppuVar12 = pppppppuStack_d8 + 1;
        do {
          ppppppuVar16 = *pppppppuVar12;
          cVar40 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
          if (bVar7) {
            *pppppppuVar12 = (ulong ******)((long)ppppppuVar16 - 1);
            cVar40 = ExclusiveMonitorsStatus();
          }
        } while (cVar40 != '\0');
        if (ppppppuVar16 == (ulong ******)0x0) {
          (*(code *)(*pppppppuStack_d8)[2])();
LAB_104c3e1dc:
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuStack_178);
        }
      }
      else if (cVar40 == '\0') {
        pppppppuStack_158 = (ulong *******)0x40;
        __Znwm();
        pppppppuVar12 = pppppppuStack_158 + 1;
        *pppppppuVar12 = (ulong ******)0x0;
        pppppppuStack_158[2] = (ulong ******)0x0;
        *pppppppuStack_158 = (ulong ******)&PTR_FUN_1107eb3c0;
        pppppppuStack_160 = pppppppuStack_158 + 3;
        *pppppppuStack_160 = (ulong ******)&PTR_FUN_1107eb270;
        pppppppuStack_158[4] = (ulong ******)0x0;
        pppppppuVar31 = pppppppuStack_158 + 5;
        *pppppppuVar31 = (ulong ******)0x0;
        pppppppuStack_158[6] = (ulong ******)0x0;
        pppppppuStack_158[7] = (ulong ******)0x0;
        uVar6 = *(uint *)(puVar10 + 6);
        if (0 < (int)uVar6) {
          do {
            cVar40 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
            if (bVar7) {
              *pppppppuVar12 = (ulong ******)((long)*pppppppuVar12 + 1);
              cVar40 = ExclusiveMonitorsStatus();
            }
          } while (cVar40 != '\0');
          ppppppuVar16 = (ulong ******)((ulong)uVar6 * 0x30);
          pppppppuStack_a8 = pppppppuStack_160;
          pppppppuStack_a0 = pppppppuStack_158;
          __Znwm();
          pppppppuStack_158[5] = ppppppuVar16;
          pppppppuStack_158[6] = ppppppuVar16;
          pppppppuStack_158[7] = ppppppuVar16 + (ulong)uVar6 * 6;
          pppppppuStack_178 = pppppppuStack_158;
          if (0 < *(int *)(puVar10 + 6)) {
            lVar35 = 0;
            do {
              pppppppuStack_c8 = (ulong *******)0x0;
              uStack_d0 = (ulong *******)0x0;
              apppppppuStack_b8[0] = (ulong *******)0x0;
              pppppppuStack_c0 = (ulong *******)0x0;
              pppppppuStack_d8 = (ulong *******)0x0;
              pppppppuStack_e0 = (ulong *******)0x0;
              puVar26 = (undefined8 *)(puVar10[5] + lVar35 * 0x18);
              pppppppuVar12 = (ulong *******)"";
              if ((ulong *******)*puVar26 != (ulong *******)0x0) {
                pppppppuVar12 = (ulong *******)*puVar26;
              }
              pppppppuVar41 = pppppppuVar12;
              _strlen();
              if ((ulong *******)0x7ffffffffffffff6 < pppppppuVar41) {
                FUN_104bd47d4();
                goto LAB_104c3e884;
              }
              if (pppppppuVar41 < (ulong *******)0x17) {
                uStack_e8 = (ulong *******)CONCAT17((char)pppppppuVar41,(undefined7)uStack_e8);
                pppppppuVar39 = (ulong *******)&pppppppuStack_f8;
                if (pppppppuVar41 != (ulong *******)0x0) goto LAB_104c3dc3c;
                    /* WARNING: Ignoring partial resolution of indirect */
                pppppppuStack_f8._0_1_ = 0;
                cVar40 = '\0';
              }
              else {
                pppppppuVar17 = (ulong *******)0x19;
                if (((ulong)pppppppuVar41 | 7) != 0x17) {
                  pppppppuVar17 = (ulong *******)(((ulong)pppppppuVar41 | 7) + 1);
                }
                pppppppuVar39 = pppppppuVar17;
                __Znwm();
                uStack_e8 = (ulong *******)((ulong)pppppppuVar17 | 0x8000000000000000);
                pppppppuStack_f8 = pppppppuVar39;
                pppppppuStack_f0 = pppppppuVar41;
LAB_104c3dc3c:
                _memcpy(pppppppuVar39,pppppppuVar12,pppppppuVar41);
                *(char *)((long)pppppppuVar39 + (long)pppppppuVar41) = '\0';
                cVar40 = uStack_e8._7_1_;
              }
              if (cVar40 < '\0') {
                func_0x00010014884c(&pppppppuStack_e0,pppppppuStack_f8,pppppppuStack_f0);
              }
              else {
                pppppppuStack_d8 = pppppppuStack_f0;
                pppppppuStack_e0 = pppppppuStack_f8;
                uStack_d0 = uStack_e8;
              }
              pppppppuVar41 = pppppppuStack_c0;
              pppppppuVar12 = pppppppuStack_c8;
              uVar27 = (ulong)*(uint *)(puVar26 + 2);
              if (0 < (int)*(uint *)(puVar26 + 2)) {
                if ((ulong)(((long)apppppppuStack_b8[0] - (long)pppppppuStack_c8 >> 3) *
                           -0x5555555555555555) < uVar27) {
                  pppppppuVar17 = (ulong *******)(uVar27 * 0x18);
                  __Znwm();
                  pppppppuVar41 =
                       (ulong *******)
                       ((long)pppppppuVar17 + ((long)pppppppuVar41 - (long)pppppppuVar12));
                  _memcpy();
                  pppppppuStack_c8 = pppppppuVar17;
                  pppppppuStack_c0 = pppppppuVar41;
                  apppppppuStack_b8[0] = pppppppuVar17 + uVar27 * 3;
                  if (pppppppuVar12 != (ulong *******)0x0) {
                    __ZdlPv(pppppppuVar12);
                  }
                }
                if (0 < *(int *)(puVar26 + 2)) {
                  lVar32 = 0;
                  do {
                    ppppppuVar36 = *(ulong *******)(puVar26[1] + lVar32 * 8);
                    ppppppuVar16 = (ulong ******)"";
                    if (ppppppuVar36 != (ulong ******)0x0) {
                      ppppppuVar16 = ppppppuVar36;
                    }
                    ppppppuVar36 = ppppppuVar16;
                    _strlen();
                    if ((ulong ******)0x7ffffffffffffff6 < ppppppuVar36) {
                      FUN_104bd47d4();
                      goto LAB_104c3e884;
                    }
                    if (ppppppuVar36 < (ulong ******)0x17) {
                      uStack_100 = (ulong ******)CONCAT17((char)ppppppuVar36,(undefined7)uStack_100)
                      ;
                      pppppppuVar18 = &pppppppuStack_110;
                      if (ppppppuVar36 != (ulong ******)0x0) goto LAB_104c3ddc0;
                    /* WARNING: Ignoring partial resolution of indirect */
                      pppppppuStack_110._0_1_ = 0;
                      if (apppppppuStack_b8[0] <= pppppppuStack_c0) goto LAB_104c3dde0;
LAB_104c3dd78:
                      pppppppuVar17 = pppppppuStack_c0;
                      cVar40 = uStack_100._7_1_;
                      if ((long)uStack_100 < 0) {
                        func_0x000100033dac(pppppppuStack_c0,pppppppuStack_110,ppppppuStack_108);
                        pppppppuVar17 = pppppppuVar17 + 3;
                      }
                      else {
                        pppppppuStack_c0[1] = ppppppuStack_108;
                        *pppppppuStack_c0 = (ulong ******)pppppppuStack_110;
                        pppppppuStack_c0[2] = uStack_100;
                        pppppppuVar17 = pppppppuStack_c0 + 3;
                      }
                    }
                    else {
                      pppppppuVar3 = (undefined8 *******)0x19;
                      if (((ulong)ppppppuVar36 | 7) != 0x17) {
                        pppppppuVar3 = (undefined8 *******)(((ulong)ppppppuVar36 | 7) + 1);
                      }
                      pppppppuVar18 = pppppppuVar3;
                      __Znwm();
                      uStack_100 = (ulong ******)((ulong)pppppppuVar3 | 0x8000000000000000);
                      pppppppuStack_110 = pppppppuVar18;
                      ppppppuStack_108 = ppppppuVar36;
LAB_104c3ddc0:
                      _memcpy(pppppppuVar18,ppppppuVar16,ppppppuVar36);
                      *(char *)((long)pppppppuVar18 + (long)ppppppuVar36) = '\0';
                      if (pppppppuStack_c0 < apppppppuStack_b8[0]) goto LAB_104c3dd78;
LAB_104c3dde0:
                      pppppppuVar12 = pppppppuStack_c8;
                      lVar37 = (long)pppppppuStack_c0 - (long)pppppppuStack_c8;
                      uVar27 = (lVar37 >> 3) * -0x5555555555555555 + 1;
                      if (0xaaaaaaaaaaaaaaa < uVar27) {
                        FUN_104bdcf60();
                        goto LAB_104c3e884;
                      }
                      lVar23 = (long)apppppppuStack_b8[0] - (long)pppppppuStack_c8 >> 3;
                      uVar24 = lVar23 * 0x5555555555555556;
                      if (uVar24 < uVar27 || uVar24 - uVar27 == 0) {
                        uVar24 = uVar27;
                      }
                      if (0x555555555555554 < (ulong)(lVar23 * -0x5555555555555555)) {
                        uVar24 = 0xaaaaaaaaaaaaaaa;
                      }
                      pppppppuStack_78 = (ulong *******)apppppppuStack_b8;
                      if (uVar24 == 0) {
                        lVar23 = 0;
                      }
                      else {
                        if (0xaaaaaaaaaaaaaaa < uVar24) {
                          FUN_104bd35f4();
                          goto LAB_104c3e884;
                        }
                        lVar23 = uVar24 * 0x18;
                        __Znwm();
                      }
                      puVar1 = (ulong *)(lVar23 + lVar37);
                      pppppppuVar41 = (ulong *******)(lVar23 + uVar24 * 0x18);
                      cVar40 = uStack_100._7_1_;
                      uStack_98 = lVar23;
                      puStack_90 = puVar1;
                      puStack_88 = puVar1;
                      pppppppuStack_80 = pppppppuVar41;
                      if ((long)uStack_100 < 0) {
                        func_0x000100033dac(puVar1,pppppppuStack_110,ppppppuStack_108);
                        lVar37 = (long)pppppppuStack_c0 - (long)pppppppuStack_c8;
                        pppppppuVar12 = pppppppuStack_c8;
                      }
                      else {
                        puVar1[1] = (ulong)ppppppuStack_108;
                        *puVar1 = (ulong)pppppppuStack_110;
                        puVar1[2] = (ulong)uStack_100;
                      }
                      pppppppuVar17 = (ulong *******)(puVar1 + 3);
                      pppppppuVar39 = (ulong *******)((long)puVar1 - lVar37);
                      _memcpy(pppppppuVar39,pppppppuVar12,lVar37);
                      pppppppuStack_c8 = pppppppuVar39;
                      apppppppuStack_b8[0] = pppppppuVar41;
                      if (pppppppuVar12 != (ulong *******)0x0) {
                        pppppppuStack_c0 = pppppppuVar17;
                        __ZdlPv(pppppppuVar12);
                      }
                    }
                    pppppppuStack_c0 = pppppppuVar17;
                    if (cVar40 < '\0') {
                      __ZdlPv(pppppppuStack_110);
                    }
                    lVar32 = lVar32 + 1;
                  } while (lVar32 < *(int *)(puVar26 + 2));
                }
                ppppppuVar16 = pppppppuStack_158[6];
                if (ppppppuVar16 < pppppppuStack_158[7]) {
                  ppppppuVar16[2] = (ulong *****)uStack_d0;
                  ppppppuVar16[1] = (ulong *****)pppppppuStack_d8;
                  *ppppppuVar16 = (ulong *****)pppppppuStack_e0;
                  ppppppuVar16[3] = (ulong *****)0x0;
                  ppppppuVar16[4] = (ulong *****)0x0;
                  ppppppuVar16[5] = (ulong *****)0x0;
                  func_0x00010015bcc4();
                  pppppppuVar12 = (ulong *******)(ppppppuVar16 + 6);
                  pppppppuStack_158[6] = (ulong ******)pppppppuVar12;
                }
                else {
                  pppppppuVar12 = pppppppuVar31;
                  FUN_104c40ea4(pppppppuVar31,&pppppppuStack_e0);
                }
                pppppppuStack_158[6] = (ulong ******)pppppppuVar12;
              }
              if ((long)uStack_e8 < 0) {
                __ZdlPv(pppppppuStack_f8);
              }
              if (pppppppuStack_c8 != (ulong *******)0x0) {
                if (pppppppuStack_c8 == pppppppuStack_c0) {
                  pppppppuStack_c0 = pppppppuStack_c8;
                  __ZdlPv(pppppppuStack_c8);
                }
                else {
                  do {
                    pppppppuStack_c0 = pppppppuStack_c0 + -3;
                  } while (pppppppuStack_c0 != pppppppuStack_c8);
                  pppppppuStack_c0 = pppppppuStack_c8;
                  __ZdlPv(pppppppuStack_c8);
                }
              }
              lVar35 = lVar35 + 1;
            } while (lVar35 < *(int *)(puVar10 + 6));
            pppppppuStack_178 = pppppppuStack_a0;
            if (pppppppuStack_a0 == (ulong *******)0x0) goto LAB_104c3e210;
          }
          pppppppuVar12 = pppppppuStack_178 + 1;
          do {
            ppppppuVar16 = *pppppppuVar12;
            cVar40 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
            if (bVar7) {
              *pppppppuVar12 = (ulong ******)((long)ppppppuVar16 - 1);
              cVar40 = ExclusiveMonitorsStatus();
            }
          } while (cVar40 != '\0');
          if (ppppppuVar16 == (ulong ******)0x0) {
            (*(code *)(*pppppppuStack_178)[2])(pppppppuStack_178);
            goto LAB_104c3e1dc;
          }
        }
      }
LAB_104c3e210:
      pppppppuVar12 = pppppppuStack_118;
      pppppppuStack_118 = pppppppuStack_158;
      pppppppuStack_120 = pppppppuStack_160;
      if (pppppppuVar12 != (ulong *******)0x0) {
        pppppppuVar31 = pppppppuVar12 + 1;
        do {
          ppppppuVar16 = *pppppppuVar31;
          cVar40 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar31,0x10);
          if (bVar7) {
            *pppppppuVar31 = (ulong ******)((long)ppppppuVar16 - 1);
            cVar40 = ExclusiveMonitorsStatus();
          }
        } while (cVar40 != '\0');
        if (ppppppuVar16 == (ulong ******)0x0) {
          (*(code *)(*pppppppuVar12)[2])(pppppppuVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar12);
        }
      }
      uVar27 = puVar38[0xf];
      if (uVar27 < (ulong)puVar38[0x10]) {
        FUN_104c356b4(uVar27,&lStack_150);
        puVar10 = (undefined8 *)(uVar27 + 0x40);
        puVar38[0xf] = puVar10;
      }
      else {
        puVar10 = puVar14;
        FUN_104c41168(puVar14,&lStack_150);
      }
      pppppppuVar12 = pppppppuStack_118;
      puVar38[0xf] = puVar10;
      if (pppppppuStack_118 != (ulong *******)0x0) {
        pppppppuVar31 = pppppppuStack_118 + 1;
        do {
          ppppppuVar16 = *pppppppuVar31;
          cVar40 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar31,0x10);
          if (bVar7) {
            *pppppppuVar31 = (ulong ******)((long)ppppppuVar16 - 1);
            cVar40 = ExclusiveMonitorsStatus();
          }
        } while (cVar40 != '\0');
        if (ppppppuVar16 == (ulong ******)0x0) {
          (*(code *)(*pppppppuStack_118)[2])(pppppppuStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar12);
        }
      }
      if (pppppppuStack_138 != (ulong *******)0x0) {
        for (; pppppppuStack_138 != pppppppuStack_130; pppppppuStack_130 = pppppppuStack_130 + -6) {
        }
        pppppppuStack_130 = pppppppuStack_138;
        __ZdlPv(pppppppuStack_138);
      }
      if ((long)plStack_140 < 0) {
        __ZdlPv(lStack_150);
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < param_2[0x1c]);
  }
  lVar32 = *param_1;
  lVar25 = *(long *)(lVar32 + 0x108);
  for (lVar35 = *(long *)(lVar32 + 0x110); lVar25 != lVar35; lVar35 = lVar35 + -0x18) {
    plVar28 = *(long **)(lVar35 + -8);
    if (plVar28 != (long *)0x0) {
      plVar2 = plVar28 + 1;
      do {
        lVar37 = *plVar2;
        cVar40 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar37 + -1;
          cVar40 = ExclusiveMonitorsStatus();
        }
      } while (cVar40 != '\0');
      if (lVar37 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
      }
    }
  }
  *(long *)(lVar32 + 0x110) = lVar25;
  FUN_104c412dc(lVar32 + 0x108,(long)param_2[0x24]);
  if (0 < param_2[0x24]) {
    lVar25 = 0;
    do {
      plStack_148 = (long *)0x0;
      plStack_140 = (long *)0x0;
      puVar30 = (undefined4 *)(*(long *)(param_2 + 0x22) + lVar25 * 0x10);
      lStack_150 = CONCAT44(lStack_150._4_4_,*puVar30);
      plVar28 = plStack_140;
      if (puVar30[1] == 0) {
        pppppppuVar31 = *(ulong ********)(*(long *)(puVar30 + 2) + 8);
        pppppppuVar12 = pppppppuVar31;
        _strlen();
        if ((ulong *******)0x7ffffffffffffff6 < pppppppuVar12) {
          FUN_104bd47d4();
          goto LAB_104c3e884;
        }
        if (pppppppuVar12 < (ulong *******)0x17) {
          uStack_d0 = (ulong *******)CONCAT17((char)pppppppuVar12,(undefined7)uStack_d0);
          pppppppuVar17 = (ulong *******)&pppppppuStack_e0;
          if (pppppppuVar12 != (ulong *******)0x0) goto LAB_104c3e4e8;
        }
        else {
          pppppppuVar41 = (ulong *******)0x19;
          if (((ulong)pppppppuVar12 | 7) != 0x17) {
            pppppppuVar41 = (ulong *******)(((ulong)pppppppuVar12 | 7) + 1);
          }
          pppppppuVar17 = pppppppuVar41;
          __Znwm();
          uStack_d0 = (ulong *******)((ulong)pppppppuVar41 | 0x8000000000000000);
          pppppppuStack_e0 = pppppppuVar17;
          pppppppuStack_d8 = pppppppuVar12;
LAB_104c3e4e8:
          _memmove(pppppppuVar17,pppppppuVar31,pppppppuVar12);
        }
        *(char *)((long)pppppppuVar17 + (long)pppppppuVar12) = '\0';
        plVar28 = (long *)0x40;
        __Znwm();
        uVar27 = (ulong)uStack_d0;
        pppppppuVar31 = pppppppuStack_d8;
        pppppppuVar12 = pppppppuStack_e0;
        plVar2 = plStack_140;
        plVar28[1] = 0;
        plVar28[2] = 0;
        plStack_148 = plVar28 + 3;
        *plStack_148 = (long)&PTR_DAT_1107eba78;
        *plVar28 = (long)&PTR_FUN_1107eba28;
        uStack_98._0_7_ = SUB87(uStack_d0,0);
        lVar35 = uStack_98;
        uVar8 = uStack_d0._7_1_;
        pppppppuStack_e0 = (ulong *******)0x0;
        pppppppuStack_d8 = (ulong *******)0x0;
        uStack_d0 = (ulong *******)0x0;
        *(undefined1 *)(plVar28 + 4) = 0;
        plVar28[5] = (long)pppppppuVar12;
        plVar28[6] = (long)pppppppuVar31;
        uStack_98._0_4_ = (undefined4)uVar27;
        *(undefined4 *)(plVar28 + 7) = (undefined4)uStack_98;
        uStack_98._3_4_ = (undefined4)(uVar27 >> 0x18);
        *(undefined4 *)((long)plVar28 + 0x3b) = uStack_98._3_4_;
        *(undefined1 *)((long)plVar28 + 0x3f) = uVar8;
        uStack_98 = lVar35;
        if (plStack_140 != (long *)0x0) {
          plVar13 = plStack_140 + 1;
          do {
            lVar35 = *plVar13;
            cVar40 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar7) {
              *plVar13 = lVar35 + -1;
              cVar40 = ExclusiveMonitorsStatus();
            }
          } while (cVar40 != '\0');
          if (lVar35 == 0) {
            lVar35 = *plStack_140;
            plStack_140 = plVar28;
            (**(code **)(lVar35 + 0x10))(plVar2);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            plVar28 = plStack_140;
          }
        }
      }
      plStack_140 = plVar28;
      puVar30 = *(undefined4 **)(lVar32 + 0x110);
      if (puVar30 < *(undefined4 **)(lVar32 + 0x118)) {
        *puVar30 = (undefined4)lStack_150;
        *(long **)(puVar30 + 4) = plStack_140;
        *(long **)(puVar30 + 2) = plStack_148;
        if (plStack_140 != (long *)0x0) {
          plVar28 = plStack_140 + 1;
          do {
            cVar40 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar7) {
              *plVar28 = *plVar28 + 1;
              cVar40 = ExclusiveMonitorsStatus();
            }
          } while (cVar40 != '\0');
        }
        *(undefined4 **)(lVar32 + 0x110) = puVar30 + 6;
        plVar28 = plStack_140;
      }
      else {
        puVar29 = *(undefined4 **)(lVar32 + 0x108);
        lVar35 = (long)puVar30 - (long)puVar29;
        uVar27 = (lVar35 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar27) {
          FUN_104c41418();
          goto LAB_104c3e884;
        }
        lVar37 = (long)*(undefined4 **)(lVar32 + 0x118) - (long)puVar29 >> 3;
        uVar24 = lVar37 * 0x5555555555555556;
        if (uVar24 < uVar27 || uVar24 - uVar27 == 0) {
          uVar24 = uVar27;
        }
        if (0x555555555555554 < (ulong)(lVar37 * -0x5555555555555555)) {
          uVar24 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar24 == 0) {
          lVar37 = 0;
        }
        else {
          if (0xaaaaaaaaaaaaaaa < uVar24) {
            FUN_104bd35f4();
            goto LAB_104c3e884;
          }
          lVar37 = uVar24 * 0x18;
          __Znwm();
        }
        puVar20 = (undefined4 *)(lVar37 + lVar35);
        *puVar20 = (undefined4)lStack_150;
        *(long **)(puVar20 + 4) = plStack_140;
        *(long **)(puVar20 + 2) = plStack_148;
        if (plStack_140 != (long *)0x0) {
          plVar28 = plStack_140 + 1;
          do {
            cVar40 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar7) {
              *plVar28 = *plVar28 + 1;
              cVar40 = ExclusiveMonitorsStatus();
            }
          } while (cVar40 != '\0');
          puVar29 = *(undefined4 **)(lVar32 + 0x108);
          puVar30 = *(undefined4 **)(lVar32 + 0x110);
          lVar35 = (long)puVar30 - (long)puVar29;
        }
        puVar21 = puVar29;
        puVar11 = (undefined4 *)((long)puVar20 - lVar35);
        if (puVar29 != puVar30) {
          do {
            *puVar11 = *puVar21;
            uVar42 = *(undefined8 *)(puVar21 + 2);
            *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar21 + 4);
            *(undefined8 *)(puVar11 + 2) = uVar42;
            *(undefined8 *)(puVar21 + 2) = 0;
            *(undefined8 *)(puVar21 + 4) = 0;
            puVar21 = puVar21 + 6;
            puVar11 = puVar11 + 6;
          } while (puVar21 != puVar30);
          do {
            plVar28 = *(long **)(puVar29 + 4);
            if (plVar28 != (long *)0x0) {
              plVar2 = plVar28 + 1;
              do {
                lVar23 = *plVar2;
                cVar40 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar7) {
                  *plVar2 = lVar23 + -1;
                  cVar40 = ExclusiveMonitorsStatus();
                }
              } while (cVar40 != '\0');
              if (lVar23 == 0) {
                (**(code **)(*plVar28 + 0x10))(plVar28);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
              }
            }
            puVar29 = puVar29 + 6;
          } while (puVar29 != puVar30);
          puVar29 = *(undefined4 **)(lVar32 + 0x108);
        }
        *(undefined4 **)(lVar32 + 0x108) = (undefined4 *)((long)puVar20 - lVar35);
        *(undefined4 **)(lVar32 + 0x110) = puVar20 + 6;
        *(ulong *)(lVar32 + 0x118) = lVar37 + uVar24 * 0x18;
        if (puVar29 != (undefined4 *)0x0) {
          __ZdlPv(puVar29);
        }
        *(undefined4 **)(lVar32 + 0x110) = puVar20 + 6;
        plVar28 = plStack_140;
      }
      if (plVar28 != (long *)0x0) {
        plVar2 = plVar28 + 1;
        do {
          lVar35 = *plVar2;
          cVar40 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar35 + -1;
            cVar40 = ExclusiveMonitorsStatus();
          }
        } while (cVar40 != '\0');
        if (lVar35 == 0) {
          plStack_140 = plVar28;
          (**(code **)(*plVar28 + 0x10))(plVar28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
        }
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < param_2[0x24]);
  }
  return;
}



/* Entry: 104c3eb2c; end: 104c3edb3;  */

void FUN_104c3eb2c(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long ****pppplVar2;
  char cVar3;
  bool bVar4;
  long ***ppplVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  long ****pppplVar9;
  long lVar10;
  long ***ppplStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  
  FUN_104c3d170(&lStack_60,param_4);
  lVar10 = param_1[1];
  if (lVar10 == 0) {
    (**(code **)(*param_1 + 0x68))(&ppplStack_78,param_1);
    ppplVar5 = ppplStack_78;
    ppplStack_78 = (long ***)0x0;
    plVar7 = (long *)param_1[1];
    param_1[1] = (long)ppplVar5;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
      ppplVar5 = ppplStack_78;
      ppplStack_78 = (long ***)0x0;
      if ((long ****)ppplVar5 != (long ****)0x0) {
        (*(code *)(*ppplVar5)[1])();
      }
    }
    lVar10 = param_1[1];
  }
  *(int *)(lStack_60 + 0x40) = (int)param_1[4];
  if (plStack_58 != (long *)0x0) {
    plVar7 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(lVar10 + 0x18);
  *(long *)(lVar10 + 0x10) = lStack_60;
  *(long **)(lVar10 + 0x18) = plStack_58;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  lVar10 = param_1[1];
  uVar8 = param_3;
  _strlen();
  if (0x7ffffffffffffff6 < uVar8) {
    FUN_104bd47d4();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x104c3ed68);
    (*pcVar6)();
  }
  if (uVar8 < 0x17) {
    uStack_68 = CONCAT17((char)uVar8,(undefined7)uStack_68);
    pppplVar9 = &ppplStack_78;
    if (uVar8 == 0) goto LAB_104c3ec8c;
  }
  else {
    pppplVar2 = (long ****)0x19;
    if ((uVar8 | 7) != 0x17) {
      pppplVar2 = (long ****)((uVar8 | 7) + 1);
    }
    pppplVar9 = pppplVar2;
    __Znwm();
    uStack_68 = (ulong)pppplVar2 | 0x8000000000000000;
    ppplStack_78 = (long ***)pppplVar9;
    uStack_70 = uVar8;
  }
  _memcpy(pppplVar9,param_3,uVar8);
LAB_104c3ec8c:
  *(undefined1 *)((long)pppplVar9 + uVar8) = 0;
  *(undefined8 *)(lVar10 + 0x28) = param_2;
  *(undefined8 *)(lVar10 + 0x70) = param_5;
  pppplVar2 = (long ****)(lVar10 + 0x58);
  if (pppplVar2 != &ppplStack_78) {
    if (*(char *)(lVar10 + 0x6f) < '\0') {
      uVar8 = uStack_70;
      pppplVar9 = (long ****)ppplStack_78;
      if (-1 < (long)uStack_68) {
        uVar8 = uStack_68 >> 0x38;
        pppplVar9 = &ppplStack_78;
      }
      func_0x0001006aabfc(pppplVar2,pppplVar9,uVar8);
    }
    else if ((long)uStack_68 < 0) {
      func_0x00010014884c(pppplVar2,ppplStack_78,uStack_70);
    }
    else {
      *(ulong *)(lVar10 + 0x60) = uStack_70;
      *pppplVar2 = ppplStack_78;
      *(ulong *)(lVar10 + 0x68) = uStack_68;
    }
  }
  FUN_104c375cc(lVar10);
  if ((long)uStack_68 < 0) {
    __ZdlPv(ppplStack_78);
  }
  if (plStack_58 != (long *)0x0) {
    plVar7 = plStack_58 + 1;
    do {
      lVar10 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  return;
}



/* Entry: 104c3edb4; end: 104c3eedb;  */

void FUN_104c3edb4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)0x78;
  __Znwm();
  *puVar1 = &PTR_FUN_1107eb460;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar2 = (undefined8 *)0xa0;
  __Znwm();
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[6] = 0x32aaaba7;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[0xc] = 0;
  puVar2[0xb] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0x3cb0b1bb;
  puVar2[0x10] = 0;
  puVar2[0xf] = 0;
  puVar2[0x12] = 0;
  puVar2[0x11] = 0;
  puVar2[0x13] = 0;
  puVar1[6] = puVar2;
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  *puVar3 = &PTR_FUN_1107eb4f8;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = puVar2;
  puVar1[7] = puVar3;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 104c3eedc; end: 104c3ef2f;  */

void FUN_104c3eedc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  *puVar1 = &PTR_FUN_1107eb7c8;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 104c3ef30; end: 104c3f5af;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104c3ef30(long *param_1,char *param_2,char *param_3,long *param_4,undefined8 *param_5)

{
  char *pcVar1;
  long *plVar2;
  long *******ppppppplVar3;
  undefined8 *******pppppppuVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  char *pcVar9;
  long *******ppppppplVar10;
  undefined8 *******pppppppuVar11;
  char *pcVar12;
  long lVar13;
  ulong *puVar14;
  long *******ppppppplStack_c0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *******pppppppuStack_a0;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 *******pppppppuStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plVar8 = (long *)0x90;
  __Znwm();
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_1107eb370;
  plVar8[1] = 0;
  puVar14 = (ulong *)(plVar8 + 4);
  plVar8[5] = 0;
  *puVar14 = 0;
  plVar8[7] = 0;
  plVar8[6] = 0;
  plVar8[9] = 0;
  plVar8[8] = 0;
  plVar8[0xb] = 0;
  plVar8[10] = 0;
  plVar8[0xd] = 0;
  plVar8[0xc] = 0;
  plVar8[0xf] = 0;
  plVar8[0xe] = 0;
  plVar8[0x11] = 0;
  plVar8[0x10] = 0;
  *(undefined8 *)((long)plVar8 + 0x84) = 0x42c8000000000001;
  plStack_70 = plVar8 + 3;
  *plStack_70 = *param_4;
  pcVar1 = "";
  pcVar12 = pcVar1;
  if ((char *)param_4[1] != (char *)0x0) {
    pcVar12 = (char *)param_4[1];
  }
  pcVar9 = pcVar12;
  plStack_68 = plVar8;
  _strlen();
  if ((char *)0x7ffffffffffffff6 < pcVar9) {
    FUN_104bd47d4();
    goto LAB_104c3f4d8;
  }
  if (pcVar9 < (char *)0x17) {
    uStack_b0 = CONCAT17((char)pcVar9,(undefined7)uStack_b0);
    ppppppplVar10 = (long *******)&ppppppplStack_c0;
    if (pcVar9 != (char *)0x0) goto LAB_104c3f234;
                    /* WARNING: Ignoring partial resolution of indirect */
    ppppppplStack_c0._0_1_ = 0;
    cVar5 = *(char *)((long)plVar8 + 0x37);
  }
  else {
    ppppppplVar3 = (long *******)0x19;
    if (((ulong)pcVar9 | 7) != 0x17) {
      ppppppplVar3 = (long *******)(((ulong)pcVar9 | 7) + 1);
    }
    ppppppplVar10 = ppppppplVar3;
    __Znwm();
    uStack_b0 = (ulong)ppppppplVar3 | 0x8000000000000000;
    ppppppplStack_c0 = ppppppplVar10;
    pcStack_b8 = pcVar9;
LAB_104c3f234:
    _memcpy(ppppppplVar10,pcVar12,pcVar9);
    *(char *)((long)ppppppplVar10 + (long)pcVar9) = '\0';
    cVar5 = *(char *)((long)plVar8 + 0x37);
  }
  if (cVar5 < '\0') {
    __ZdlPv(*puVar14);
  }
  plVar8[5] = (long)pcStack_b8;
  *puVar14 = (ulong)ppppppplStack_c0;
  plVar8[6] = uStack_b0;
  pcVar12 = pcVar1;
  if ((char *)param_4[2] != (char *)0x0) {
    pcVar12 = (char *)param_4[2];
  }
  pcVar9 = pcVar12;
  _strlen();
  if ((char *)0x7ffffffffffffff6 < pcVar9) {
    FUN_104bd47d4();
    goto LAB_104c3f4d8;
  }
  if (pcVar9 < (char *)0x17) {
    uStack_b0 = CONCAT17((char)pcVar9,(undefined7)uStack_b0);
    ppppppplVar10 = (long *******)&ppppppplStack_c0;
    if (pcVar9 != (char *)0x0) goto LAB_104c3f284;
                    /* WARNING: Ignoring partial resolution of indirect */
    ppppppplStack_c0._0_1_ = 0;
    cVar5 = *(char *)((long)plVar8 + 0x4f);
  }
  else {
    ppppppplVar3 = (long *******)0x19;
    if (((ulong)pcVar9 | 7) != 0x17) {
      ppppppplVar3 = (long *******)(((ulong)pcVar9 | 7) + 1);
    }
    ppppppplVar10 = ppppppplVar3;
    __Znwm();
    uStack_b0 = (ulong)ppppppplVar3 | 0x8000000000000000;
    ppppppplStack_c0 = ppppppplVar10;
    pcStack_b8 = pcVar9;
LAB_104c3f284:
    _memcpy(ppppppplVar10,pcVar12,pcVar9);
    *(char *)((long)ppppppplVar10 + (long)pcVar9) = '\0';
    cVar5 = *(char *)((long)plVar8 + 0x4f);
  }
  if (cVar5 < '\0') {
    __ZdlPv(plVar8[7]);
  }
  plVar8[8] = (long)pcStack_b8;
  plVar8[7] = (long)ppppppplStack_c0;
  plVar8[9] = uStack_b0;
  pcVar12 = pcVar1;
  if ((char *)param_4[3] != (char *)0x0) {
    pcVar12 = (char *)param_4[3];
  }
  pcVar9 = pcVar12;
  _strlen();
  if ((char *)0x7ffffffffffffff6 < pcVar9) {
    FUN_104bd47d4();
    goto LAB_104c3f4d8;
  }
  if (pcVar9 < (char *)0x17) {
    uStack_b0 = CONCAT17((char)pcVar9,(undefined7)uStack_b0);
    ppppppplVar10 = (long *******)&ppppppplStack_c0;
    if (pcVar9 != (char *)0x0) goto LAB_104c3f2d4;
                    /* WARNING: Ignoring partial resolution of indirect */
    ppppppplStack_c0._0_1_ = 0;
    cVar5 = *(char *)((long)plVar8 + 0x67);
  }
  else {
    ppppppplVar3 = (long *******)0x19;
    if (((ulong)pcVar9 | 7) != 0x17) {
      ppppppplVar3 = (long *******)(((ulong)pcVar9 | 7) + 1);
    }
    ppppppplVar10 = ppppppplVar3;
    __Znwm();
    uStack_b0 = (ulong)ppppppplVar3 | 0x8000000000000000;
    ppppppplStack_c0 = ppppppplVar10;
    pcStack_b8 = pcVar9;
LAB_104c3f2d4:
    _memcpy(ppppppplVar10,pcVar12,pcVar9);
    *(char *)((long)ppppppplVar10 + (long)pcVar9) = '\0';
    cVar5 = *(char *)((long)plVar8 + 0x67);
  }
  if (cVar5 < '\0') {
    __ZdlPv(plVar8[10]);
  }
  plVar8[0xb] = (long)pcStack_b8;
  plVar8[10] = (long)ppppppplStack_c0;
  plVar8[0xc] = uStack_b0;
  pcVar12 = pcVar1;
  if ((char *)param_4[4] != (char *)0x0) {
    pcVar12 = (char *)param_4[4];
  }
  pcVar9 = pcVar12;
  _strlen();
  if ((char *)0x7ffffffffffffff6 < pcVar9) {
    FUN_104bd47d4();
    goto LAB_104c3f4d8;
  }
  if (pcVar9 < (char *)0x17) {
    uStack_b0 = CONCAT17((char)pcVar9,(undefined7)uStack_b0);
    ppppppplVar10 = (long *******)&ppppppplStack_c0;
    if (pcVar9 != (char *)0x0) goto LAB_104c3f324;
                    /* WARNING: Ignoring partial resolution of indirect */
    ppppppplStack_c0._0_1_ = 0;
    cVar5 = *(char *)((long)plVar8 + 0x7f);
  }
  else {
    ppppppplVar3 = (long *******)0x19;
    if (((ulong)pcVar9 | 7) != 0x17) {
      ppppppplVar3 = (long *******)(((ulong)pcVar9 | 7) + 1);
    }
    ppppppplVar10 = ppppppplVar3;
    __Znwm();
    uStack_b0 = (ulong)ppppppplVar3 | 0x8000000000000000;
    ppppppplStack_c0 = ppppppplVar10;
    pcStack_b8 = pcVar9;
LAB_104c3f324:
    _memcpy(ppppppplVar10,pcVar12,pcVar9);
    *(char *)((long)ppppppplVar10 + (long)pcVar9) = '\0';
    cVar5 = *(char *)((long)plVar8 + 0x7f);
  }
  if (cVar5 < '\0') {
    __ZdlPv(plVar8[0xd]);
  }
  plVar8[0xe] = (long)pcStack_b8;
  plVar8[0xd] = (long)ppppppplStack_c0;
  plVar8[0xf] = uStack_b0;
  plVar8[0x10] = param_4[5];
  *(int *)(plVar8 + 0x11) = (int)param_4[6];
  lVar13 = param_1[2];
  if (lVar13 == 0) {
    (**(code **)(*param_1 + 0x70))(&ppppppplStack_c0,param_1);
    ppppppplVar3 = ppppppplStack_c0;
    ppppppplStack_c0 = (long *******)0x0;
    plVar8 = (long *)param_1[2];
    param_1[2] = (long)ppppppplVar3;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
      ppppppplVar3 = ppppppplStack_c0;
      ppppppplStack_c0 = (long *******)0x0;
      if (ppppppplVar3 != (long *******)0x0) {
        (*(code *)(*ppppppplVar3)[1])();
      }
    }
    lVar13 = param_1[2];
  }
  *(int *)plStack_70 = (int)param_1[4];
  if (plStack_68 != (long *)0x0) {
    plVar8 = plStack_68 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar8 = *(long **)(lVar13 + 0x40);
  *(long **)(lVar13 + 0x38) = plStack_70;
  *(long **)(lVar13 + 0x40) = plStack_68;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 1;
    do {
      lVar13 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  lVar13 = param_1[2];
  pcVar12 = pcVar1;
  if (param_2 != (char *)0x0) {
    pcVar12 = param_2;
  }
  pcVar9 = pcVar12;
  _strlen();
  if ((char *)0x7ffffffffffffff6 < pcVar9) {
    FUN_104bd47d4();
    goto LAB_104c3f4d8;
  }
  if (pcVar9 < (char *)0x17) {
    uStack_78 = CONCAT17((char)pcVar9,(undefined7)uStack_78);
    pppppppuVar11 = &pppppppuStack_88;
    if (pcVar9 != (char *)0x0) goto LAB_104c3f374;
  }
  else {
    pppppppuVar4 = (undefined8 *******)0x19;
    if (((ulong)pcVar9 | 7) != 0x17) {
      pppppppuVar4 = (undefined8 *******)(((ulong)pcVar9 | 7) + 1);
    }
    pppppppuVar11 = pppppppuVar4;
    __Znwm();
    uStack_78 = (ulong)pppppppuVar4 | 0x8000000000000000;
    pppppppuStack_88 = pppppppuVar11;
    pcStack_80 = pcVar9;
LAB_104c3f374:
    _memcpy(pppppppuVar11,pcVar12,pcVar9);
  }
  *(char *)((long)pppppppuVar11 + (long)pcVar9) = '\0';
  if (param_3 != (char *)0x0) {
    pcVar1 = param_3;
  }
  pcVar12 = pcVar1;
  _strlen();
  if ((char *)0x7ffffffffffffff6 < pcVar12) {
    FUN_104bd47d4();
LAB_104c3f4d8:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x104c3f4dc);
    (*pcVar7)();
  }
  if (pcVar12 < (char *)0x17) {
    uStack_90 = CONCAT17((char)pcVar12,(undefined7)uStack_90);
    pppppppuVar11 = &pppppppuStack_a0;
    if (pcVar12 == (char *)0x0) goto LAB_104c3f400;
  }
  else {
    pppppppuVar4 = (undefined8 *******)0x19;
    if (((ulong)pcVar12 | 7) != 0x17) {
      pppppppuVar4 = (undefined8 *******)(((ulong)pcVar12 | 7) + 1);
    }
    pppppppuVar11 = pppppppuVar4;
    __Znwm();
    uStack_90 = (ulong)pppppppuVar4 | 0x8000000000000000;
    pppppppuStack_a0 = pppppppuVar11;
    pcStack_98 = pcVar12;
  }
  _memcpy(pppppppuVar11,pcVar1,pcVar12);
LAB_104c3f400:
  *(char *)((long)pppppppuVar11 + (long)pcVar12) = '\0';
  pcStack_b8 = (char *)param_5[1];
  ppppppplStack_c0 = (long *******)*param_5;
  uStack_a8 = param_5[3];
  uStack_b0 = param_5[2];
  FUN_104c3c3c4(lVar13,&pppppppuStack_88,&pppppppuStack_a0,&ppppppplStack_c0);
  if ((long)uStack_90 < 0) {
    __ZdlPv(pppppppuStack_a0);
  }
  plVar8 = plStack_68;
  if ((long)uStack_78 < 0) {
    __ZdlPv(pppppppuStack_88);
    plVar8 = plStack_68;
  }
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 1;
    do {
      lVar13 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      plStack_68 = plVar8;
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return;
}



/* Entry: 104c3f5b0; end: 104c3f613;  */

long FUN_104c3f5b0(long param_1)

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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c3f614; end: 104c3f703;  */

/* WARNING: Removing unreachable block (ram,0x000104c3f6c8) */
/* WARNING: Removing unreachable block (ram,0x000104c45384) */

void FUN_104c3f614(long param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  long lStack_40;
  long lStack_38;
  
  if (*(long *)(param_1 + 8) == 0) {
    FUN_104c4bb14();
    lStack_38 = 0;
    ppuStack_48 = &PTR_FUN_1107eb688;
    lStack_40 = 0;
    pppuVar2 = &ppuStack_48;
    FUN_104c37260(pppuVar2,2);
    (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,pppuVar2,1);
    ppuStack_48 = &PTR_DAT_1107eb6f0;
    if (lStack_40 != 0) {
      for (; lStack_38 != lStack_40; lStack_38 = lStack_38 + -0x18) {
      }
      lStack_38 = lStack_40;
      __ZdlPv(lStack_40);
    }
    return;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 8);
  FUN_104c4bb14();
  ppuStack_48 = (undefined **)0x0;
  lStack_40 = 0;
  ppuStack_58 = &PTR_FUN_1107eb688;
  ppuStack_50 = (undefined **)0x0;
  lStack_38 = CONCAT44(lStack_38._4_4_,1);
  pppuVar2 = &ppuStack_58;
  FUN_104c37260(pppuVar2,0);
  (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,pppuVar2,1);
  ppuStack_58 = &PTR_DAT_1107eb6f0;
  if (ppuStack_50 != (undefined **)0x0) {
    for (; ppuStack_50 != ppuStack_48; ppuStack_48 = ppuStack_48 + -3) {
    }
    ppuStack_48 = ppuStack_50;
    __ZdlPv(ppuStack_50);
  }
  __ZNSt3__15mutex4lockEv(lVar1 + 0x98);
  *(undefined1 *)(*(long *)(lVar1 + 0x130) + 8) = 0;
  puVar3 = *(undefined8 **)(lVar1 + 0x60);
  *(undefined1 *)(puVar3 + 0x15) = 1;
  (**(code **)(*(long *)*puVar3 + 0x18))();
  if (*(long *)(lVar1 + 0x58) != 0) {
    __ZNSt3__16thread4joinEv();
  }
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x98);
  return;
}



/* Entry: 104c3f704; end: 104c3f7fb;  */

/* WARNING: Removing unreachable block (ram,0x000104c3f7c0) */
/* WARNING: Removing unreachable block (ram,0x000104c3f7ac) */
/* WARNING: Removing unreachable block (ram,0x000104c3f7cc) */
/* WARNING: Removing unreachable block (ram,0x000104c3f798) */
/* WARNING: Removing unreachable block (ram,0x000104c3f7a8) */
/* WARNING: Removing unreachable block (ram,0x000104c3f7d0) */

void FUN_104c3f704(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  byte bVar6;
  byte bVar7;
  long *plVar8;
  undefined1 *puVar9;
  long *plVar10;
  ulong uVar11;
  
  plVar10 = *(long **)(param_1 + 8);
  if (plVar10 == (long *)0x0) {
    FUN_104c4bb14();
    puVar9 = &stack0xffffffffffffffb8;
    FUN_104c37260(puVar9,2);
    (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,puVar9,1);
    return;
  }
  FUN_104c452e4(plVar10[1]);
  plVar1 = plVar10 + 0xb;
  (**(code **)(*plVar10 + 0x18))(plVar10,plVar1);
  if (plVar10[1] != 0) {
    plVar2 = plVar10 + 8;
    bVar6 = *(byte *)((long)plVar10 + 0x6f);
    uVar11 = plVar10[0xc];
    uVar3 = uVar11;
    if (-1 < (char)bVar6) {
      uVar3 = (ulong)bVar6;
    }
    bVar7 = *(byte *)((long)plVar10 + 0x57);
    uVar4 = plVar10[9];
    if (-1 < (char)bVar7) {
      uVar4 = (ulong)bVar7;
    }
    if (uVar3 == uVar4) {
      plVar8 = (long *)*plVar1;
      if (-1 < (char)bVar6) {
        plVar8 = plVar1;
      }
      plVar5 = (long *)*plVar2;
      if (-1 < (char)bVar7) {
        plVar5 = plVar2;
      }
      _memcmp(plVar8,plVar5,uVar3);
      if ((int)plVar8 == 0) goto LAB_104c376a4;
    }
    if ((char)bVar7 < '\0') {
      plVar8 = (long *)*plVar1;
      if (-1 < (char)bVar6) {
        plVar8 = plVar1;
      }
      func_0x0001006aabfc(plVar2,plVar8,uVar3);
    }
    else if ((char)bVar6 < '\0') {
      func_0x00010014884c(plVar2,*plVar1,uVar11);
    }
    else {
      plVar10[9] = plVar10[0xc];
      *plVar2 = *plVar1;
      plVar10[10] = plVar10[0xd];
    }
  }
LAB_104c376a4:
                    /* WARNING: Could not recover jumptable at 0x000104c376c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x10))(plVar10);
  return;
}



/* Entry: 104c3f7fc; end: 104c3f947;  */

/* WARNING: Removing unreachable block (ram,0x000104c3f8d8) */

void FUN_104c3f7fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined **ppuStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  if (*(long *)(param_1 + 8) == 0) {
    FUN_104c4bb14();
    uStack_38 = 0;
    uStack_30 = 0;
    ppuStack_48 = &PTR_FUN_1107eb688;
    lStack_40 = 0;
    uStack_28 = 5;
    pppuVar1 = &ppuStack_48;
    FUN_104c37260(pppuVar1,2);
    (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,pppuVar1,1);
    ppuStack_48 = &PTR_DAT_1107eb6f0;
    if (lStack_40 != 0) {
      for (; lStack_40 != uStack_38; uStack_38 = uStack_38 + -0x18) {
      }
      uStack_38 = lStack_40;
      __ZdlPv(lStack_40);
      return;
    }
  }
  else {
    FUN_104c473e0(&ppuStack_48,param_2,param_3);
    FUN_104c37b60(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),&ppuStack_48);
    if (uStack_38._7_1_ < '\0') {
      __ZdlPv(ppuStack_48);
      return;
    }
  }
  return;
}



/* Entry: 104c3f948; end: 104c3fae7;  */

/* WARNING: Removing unreachable block (ram,0x000104c3fa08) */
/* WARNING: Type propagation algorithm not settling */

void FUN_104c3f948(long param_1,undefined8 param_2,uint param_3)

{
  undefined ********ppppppppuVar1;
  undefined ********ppppppppuVar2;
  ulong uVar3;
  long lVar4;
  undefined ********ppppppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    FUN_104c4bb14();
    uStack_48 = 0;
    uStack_40 = 0;
    ppppppppuStack_58 = (undefined ********)&PTR_FUN_1107eb688;
    uStack_50 = 0;
    uStack_38 = 5;
    ppppppppuVar1 = (undefined ********)&ppppppppuStack_58;
    FUN_104c37260(ppppppppuVar1,2);
    (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,ppppppppuVar1,1);
    ppppppppuStack_58 = (undefined ********)&PTR_DAT_1107eb6f0;
    if (uStack_50 == 0) {
      return;
    }
    for (; uStack_50 != uStack_48; uStack_48 = uStack_48 + -0x18) {
    }
    uStack_48 = uStack_50;
    __ZdlPv(uStack_50);
    return;
  }
  uVar3 = (ulong)param_3;
  if (param_3 < 0x17) {
    uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
    ppppppppuVar2 = (undefined ********)&ppppppppuStack_58;
    if (param_3 == 0) goto LAB_104c3fa50;
  }
  else {
    ppppppppuVar1 = (undefined ********)0x19;
    if ((uVar3 | 7) != 0x17) {
      ppppppppuVar1 = (undefined ********)((uVar3 | 7) + 1);
    }
    ppppppppuVar2 = ppppppppuVar1;
    __Znwm();
    uStack_48 = (ulong)ppppppppuVar1 | 0x8000000000000000;
    ppppppppuStack_58 = ppppppppuVar2;
    uStack_50 = uVar3;
  }
  _memcpy(ppppppppuVar2,param_2,uVar3);
LAB_104c3fa50:
  *(undefined1 *)((long)ppppppppuVar2 + uVar3) = 0;
  FUN_104c37b60(*(undefined8 *)(lVar4 + 0x30),&ppppppppuStack_58);
  if (-1 < (long)uStack_48) {
    return;
  }
  __ZdlPv(ppppppppuStack_58);
  return;
}



/* Entry: 104c3fae8; end: 104c3fbe7;  */

void FUN_104c3fae8(long param_1,ulong param_2)

{
  undefined8 ******ppppppuVar1;
  ulong uVar2;
  undefined8 ******ppppppuVar3;
  long lVar4;
  undefined8 *****pppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    return;
  }
  uVar2 = param_2;
  _strlen();
  if (0x7ffffffffffffff6 < uVar2) {
    FUN_104bd47d4();
    if ((long)uStack_48 < 0) {
      __ZdlPv(pppppuStack_58);
    }
    __Unwind_Resume();
    if (*(long *)(uVar2 + 0x10) != 0) {
      *(undefined1 *)(*(long *)(uVar2 + 0x10) + 0x58) = 1;
    }
    if (*(long *)(uVar2 + 0x18) != 0) {
      *(undefined1 *)(*(long *)(uVar2 + 0x18) + 0x50) = 1;
    }
    return;
  }
  if (uVar2 < 0x17) {
    uStack_48 = CONCAT17((char)uVar2,(undefined7)uStack_48);
    ppppppuVar3 = &pppppuStack_58;
    if (uVar2 == 0) goto LAB_104c3fb78;
  }
  else {
    ppppppuVar1 = (undefined8 ******)0x19;
    if ((uVar2 | 7) != 0x17) {
      ppppppuVar1 = (undefined8 ******)((uVar2 | 7) + 1);
    }
    ppppppuVar3 = ppppppuVar1;
    __Znwm();
    uStack_48 = (ulong)ppppppuVar1 | 0x8000000000000000;
    pppppuStack_58 = ppppppuVar3;
    uStack_50 = uVar2;
  }
  _memcpy(ppppppuVar3,param_2,uVar2);
LAB_104c3fb78:
  *(undefined1 *)((long)ppppppuVar3 + uVar2) = 0;
  FUN_104c37c54(lVar4,&pppppuStack_58);
  if (-1 < (long)uStack_48) {
    return;
  }
  __ZdlPv(pppppuStack_58);
  return;
}



/* Entry: 104c3fbe8; end: 104c3fc0b;  */

void FUN_104c3fbe8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x58) = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x50) = 1;
  }
  return;
}



/* Entry: 104c3fc0c; end: 104c402bb;  */

/* WARNING: Removing unreachable block (ram,0x000104c401ac) */
/* WARNING: Removing unreachable block (ram,0x000104c4014c) */
/* WARNING: Removing unreachable block (ram,0x000104c401cc) */

void FUN_104c3fc0c(long param_1,long *param_2,undefined8 *param_3,uint param_4,char *param_5,
                  undefined4 param_6,undefined8 *param_7,undefined8 *param_8)

{
  ulong *puVar1;
  char *pcVar2;
  long ****pppplVar3;
  undefined8 ****ppppuVar4;
  char cVar5;
  bool bVar6;
  long ***ppplVar7;
  code *pcVar8;
  long *plVar9;
  char *pcVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 ****ppppuVar13;
  long ****pppplVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 ***pppuStack_e0;
  char *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  long ***ppplStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *aplStack_70 [2];
  
  plVar9 = (long *)0x38;
  __Znwm();
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_FUN_1107ebaa0;
  plVar9[1] = 0;
  puVar15 = (ulong *)(plVar9 + 4);
  *puVar15 = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  ppplStack_90 = (long ***)(plVar9 + 3);
  *ppplStack_90 = (long **)*param_7;
  pcVar2 = "";
  if ((char *)param_7[1] != (char *)0x0) {
    pcVar2 = (char *)param_7[1];
  }
  pcVar10 = pcVar2;
  plStack_88 = plVar9;
  _strlen();
  if ((char *)0x7ffffffffffffff6 < pcVar10) {
    FUN_104bd47d4();
    goto LAB_104c40224;
  }
  if (pcVar10 < (char *)0x17) {
    uStack_d0 = CONCAT17((char)pcVar10,(undefined7)uStack_d0);
    ppppuVar13 = &pppuStack_e0;
    if (pcVar10 != (char *)0x0) goto LAB_104c3fe34;
                    /* WARNING: Ignoring partial resolution of indirect */
    pppuStack_e0._0_1_ = 0;
    cVar5 = *(char *)((long)plVar9 + 0x37);
  }
  else {
    ppppuVar4 = (undefined8 ****)0x19;
    if (((ulong)pcVar10 | 7) != 0x17) {
      ppppuVar4 = (undefined8 ****)(((ulong)pcVar10 | 7) + 1);
    }
    ppppuVar13 = ppppuVar4;
    __Znwm();
    uStack_d0 = (ulong)ppppuVar4 | 0x8000000000000000;
    pppuStack_e0 = ppppuVar13;
    pcStack_d8 = pcVar10;
LAB_104c3fe34:
    _memcpy(ppppuVar13,pcVar2,pcVar10);
    *(char *)((long)ppppuVar13 + (long)pcVar10) = '\0';
    cVar5 = *(char *)((long)plVar9 + 0x37);
  }
  if (cVar5 < '\0') {
    __ZdlPv(*puVar15);
  }
  plVar12 = plStack_88;
  ppplVar7 = ppplStack_90;
  plVar9[5] = (long)pcStack_d8;
  *puVar15 = (ulong)pppuStack_e0;
  plVar9[6] = uStack_d0;
  puVar11 = *(undefined8 **)(param_1 + 0x18);
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x58;
    __Znwm();
    *(undefined1 *)(puVar11 + 10) = 0;
    puVar11[7] = 0;
    puVar11[6] = 0;
    puVar11[9] = 0;
    puVar11[8] = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    puVar11[1] = 0;
    *puVar11 = 0;
    *(undefined8 **)(param_1 + 0x18) = puVar11;
  }
  if (plVar12 != (long *)0x0) {
    plVar9 = plVar12 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar9 = (long *)puVar11[7];
  puVar11[7] = plVar12;
  puVar11[6] = ppplVar7;
  if (plVar9 != (long *)0x0) {
    plVar12 = plVar9 + 1;
    do {
      lVar18 = *plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar12 = plStack_88 + 1;
    do {
      lVar18 = *plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  uVar21 = *(undefined8 *)(param_1 + 0x18);
  plVar9 = (long *)"";
  if (param_2 != (long *)0x0) {
    plVar9 = param_2;
  }
  plVar12 = plVar9;
  _strlen();
  if (plVar12 < (long *)0x7ffffffffffffff7) {
    if (plVar12 < (long *)0x17) {
      uStack_80 = CONCAT17((char)plVar12,(undefined7)uStack_80);
      pppplVar14 = &ppplStack_90;
      if (plVar12 != (long *)0x0) goto LAB_104c3fe90;
                    /* WARNING: Ignoring partial resolution of indirect */
      ppplStack_90._0_1_ = 0;
    }
    else {
      pppplVar3 = (long ****)0x19;
      if (((ulong)plVar12 | 7) != 0x17) {
        pppplVar3 = (long ****)(((ulong)plVar12 | 7) + 1);
      }
      pppplVar14 = pppplVar3;
      __Znwm();
      uStack_80 = (ulong)pppplVar3 | 0x8000000000000000;
      ppplStack_90 = (long ***)pppplVar14;
      plStack_88 = plVar12;
LAB_104c3fe90:
      _memcpy(pppplVar14,plVar9,plVar12);
      *(char *)((long)pppplVar14 + (long)plVar12) = '\0';
    }
    puStack_98 = (ulong *)0x0;
    puStack_a0 = (ulong *)0x0;
    puStack_a8 = (ulong *)0x0;
    if (param_4 != 0) {
      puStack_98 = (ulong *)0x0;
      puStack_a0 = (ulong *)0x0;
      puStack_a8 = (ulong *)0x0;
      if ((int)param_4 < 0) {
        FUN_104bdcf60();
        goto LAB_104c40224;
      }
      puVar15 = (ulong *)((long)(int)param_4 * 0x18);
      __Znwm();
      puStack_98 = puVar15 + (long)(int)param_4 * 3;
      uVar23 = (ulong)param_4;
      puStack_a8 = puVar15;
      puStack_a0 = puVar15;
      do {
        while( true ) {
          pcVar2 = "";
          if ((char *)*param_3 != (char *)0x0) {
            pcVar2 = (char *)*param_3;
          }
          pcVar10 = pcVar2;
          _strlen();
          if ((char *)0x7ffffffffffffff6 < pcVar10) {
            FUN_104bd47d4();
            goto LAB_104c40224;
          }
          if ((char *)0x16 < pcVar10) break;
          uStack_d0 = CONCAT17((char)pcVar10,(undefined7)uStack_d0);
          ppppuVar13 = &pppuStack_e0;
          if (pcVar10 != (char *)0x0) goto LAB_104c3ff84;
                    /* WARNING: Ignoring partial resolution of indirect */
          pppuStack_e0._0_1_ = 0;
          if (puStack_a0 < puStack_98) goto LAB_104c3fef0;
LAB_104c3ffa4:
          puVar15 = puStack_a8;
          lVar18 = (long)puStack_a0 - (long)puStack_a8;
          uVar17 = (lVar18 >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar17) {
            FUN_104bdcf60();
            goto LAB_104c40224;
          }
          lVar19 = (long)puStack_98 - (long)puStack_a8 >> 3;
          uVar20 = lVar19 * 0x5555555555555556;
          if (uVar20 < uVar17 || uVar20 - uVar17 == 0) {
            uVar20 = uVar17;
          }
          if (0x555555555555554 < (ulong)(lVar19 * -0x5555555555555555)) {
            uVar20 = 0xaaaaaaaaaaaaaaa;
          }
          if (0xaaaaaaaaaaaaaaa < uVar20) {
            FUN_104bd35f4();
            goto LAB_104c40224;
          }
          puVar16 = (ulong *)(uVar20 * 0x18);
          __Znwm();
          puVar1 = (ulong *)((long)puVar16 + lVar18);
          puVar1[1] = (ulong)pcStack_d8;
          *puVar1 = (ulong)pppuStack_e0;
          puVar1[2] = uStack_d0;
          _memcpy();
          puStack_a8 = puVar16;
          puStack_98 = puVar16 + uVar20 * 3;
          if (puVar15 != (ulong *)0x0) {
            __ZdlPv(puVar15);
          }
          uVar23 = uVar23 - 1;
          param_3 = param_3 + 1;
          puStack_a0 = puVar1 + 3;
          if (uVar23 == 0) goto LAB_104c40054;
        }
        ppppuVar4 = (undefined8 ****)0x19;
        if (((ulong)pcVar10 | 7) != 0x17) {
          ppppuVar4 = (undefined8 ****)(((ulong)pcVar10 | 7) + 1);
        }
        ppppuVar13 = ppppuVar4;
        __Znwm();
        uStack_d0 = (ulong)ppppuVar4 | 0x8000000000000000;
        pppuStack_e0 = ppppuVar13;
        pcStack_d8 = pcVar10;
LAB_104c3ff84:
        _memcpy(ppppuVar13,pcVar2,pcVar10);
        *(char *)((long)ppppuVar13 + (long)pcVar10) = '\0';
        if (puStack_98 <= puStack_a0) goto LAB_104c3ffa4;
LAB_104c3fef0:
        puStack_a0[1] = (ulong)pcStack_d8;
        *puStack_a0 = (ulong)pppuStack_e0;
        puStack_a0[2] = uStack_d0;
        puStack_a0 = puStack_a0 + 3;
        uVar23 = uVar23 - 1;
        param_3 = param_3 + 1;
      } while (uVar23 != 0);
    }
LAB_104c40054:
    pcVar2 = "";
    if (param_5 != (char *)0x0) {
      pcVar2 = param_5;
    }
    pcVar10 = pcVar2;
    _strlen();
    if (pcVar10 < (char *)0x7ffffffffffffff7) {
      if (pcVar10 < (char *)0x17) {
        uStack_b0 = CONCAT17((char)pcVar10,(undefined7)uStack_b0);
        ppppuVar13 = &pppuStack_c0;
        if (pcVar10 == (char *)0x0) goto LAB_104c400d0;
      }
      else {
        ppppuVar4 = (undefined8 ****)0x19;
        if (((ulong)pcVar10 | 7) != 0x17) {
          ppppuVar4 = (undefined8 ****)(((ulong)pcVar10 | 7) + 1);
        }
        ppppuVar13 = ppppuVar4;
        __Znwm();
        uStack_b0 = (ulong)ppppuVar4 | 0x8000000000000000;
        pppuStack_c0 = ppppuVar13;
        pcStack_b8 = pcVar10;
      }
      _memcpy(ppppuVar13,pcVar2,pcVar10);
LAB_104c400d0:
      *(char *)((long)ppppuVar13 + (long)pcVar10) = '\0';
      pcStack_d8 = (char *)param_8[1];
      pppuStack_e0 = (undefined8 ***)*param_8;
      uStack_c8 = param_8[3];
      uStack_d0 = param_8[2];
      FUN_104c3a0fc(aplStack_70,uVar21,&ppplStack_90,&puStack_a8,&pppuStack_c0,param_6,&pppuStack_e0
                   );
      plVar9 = aplStack_70[0];
      aplStack_70[0] = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        if (*(char *)((long)plVar9 + 0x37) < '\0') {
          __ZdlPv(plVar9[4]);
        }
        lVar18 = *plVar9;
        if (lVar18 != 0) {
          lVar22 = plVar9[1];
          lVar19 = lVar18;
          if (lVar18 != lVar22) {
            do {
              lVar22 = lVar22 + -0x28;
            } while (lVar22 != lVar18);
            lVar19 = *plVar9;
          }
          plVar9[1] = lVar18;
          __ZdlPv(lVar19);
        }
        __ZdlPv(plVar9);
      }
      if ((long)uStack_b0 < 0) {
        __ZdlPv(pppuStack_c0);
      }
      if (puStack_a8 != (ulong *)0x0) {
        for (; puStack_a8 != puStack_a0; puStack_a0 = puStack_a0 + -3) {
        }
        puStack_a0 = puStack_a8;
        __ZdlPv(puStack_a8);
      }
      return;
    }
  }
  else {
    FUN_104bd47d4();
  }
  FUN_104bd47d4();
LAB_104c40224:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x104c40228);
  (*pcVar8)();
}



/* Entry: 104c402bc; end: 104c4031f;  */

long FUN_104c402bc(long param_1)

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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c40320; end: 104c40333;  */

void FUN_104c40320(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c4032c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 104c40334; end: 104c4056b;  */

undefined8 * FUN_104c40334(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  *param_1 = &PTR_FUN_1107eb8d8;
  puVar5 = (undefined8 *)param_1[3];
  param_1[3] = 0;
  if (puVar5 == (undefined8 *)0x0) goto LAB_104c403d0;
  plVar6 = (long *)puVar5[9];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = (long *)puVar5[7];
  if (plVar6 == (long *)0x0) {
LAB_104c403b8:
    if (-1 < *(char *)((long)puVar5 + 0x2f)) goto LAB_104c403c0;
LAB_104c40434:
    __ZdlPv(puVar5[3]);
    cVar2 = *(char *)((long)puVar5 + 0x17);
  }
  else {
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 != 0) goto LAB_104c403b8;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    if (*(char *)((long)puVar5 + 0x2f) < '\0') goto LAB_104c40434;
LAB_104c403c0:
    cVar2 = *(char *)((long)puVar5 + 0x17);
  }
  if (cVar2 < '\0') {
    __ZdlPv(*puVar5);
  }
  __ZdlPv(puVar5);
LAB_104c403d0:
  plVar6 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  return param_1;
}



/* Entry: 104c4056c; end: 104c405cf;  */

long FUN_104c4056c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c405d0; end: 104c40813;  */

/* WARNING: Removing unreachable block (ram,0x000104c40614) */

long FUN_104c405d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    lVar1 = lVar2;
    if (lVar2 != lVar3) {
      do {
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != lVar2);
      lVar1 = *(long *)(param_1 + 8);
    }
    *(long *)(param_1 + 0x10) = lVar2;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 104c40814; end: 104c408cf;  */

long FUN_104c40814(long param_1)

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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c408d0; end: 104c40997;  */

/* WARNING: Removing unreachable block (ram,0x000104c40950) */

long * FUN_104c408d0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1[1];
  lVar4 = param_1[2];
  while (lVar2 = lVar4, lVar1 != lVar2) {
    while( true ) {
      param_1[2] = lVar2 + -0x20;
      lVar3 = *(long *)(lVar2 + -0x18);
      lVar4 = lVar2 + -0x20;
      if (lVar3 == 0) break;
      lVar4 = *(long *)(lVar2 + -0x10);
      if (lVar3 == lVar4) {
        *(long *)(lVar2 + -0x10) = lVar3;
        __ZdlPv(lVar3);
        lVar2 = param_1[2];
      }
      else {
        do {
          lVar4 = lVar4 + -0x18;
        } while (lVar4 != lVar3);
        *(long *)(lVar2 + -0x10) = lVar3;
        __ZdlPv(*(undefined8 *)(lVar2 + -0x18));
        lVar2 = param_1[2];
      }
      if (lVar1 == lVar2) goto LAB_104c40974;
    }
  }
LAB_104c40974:
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c40998; end: 104c40b2f;  */

/* WARNING: Removing unreachable block (ram,0x000104c40c98) */

long * FUN_104c40998(long *param_1,ulong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined4 *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lStack_e8;
  undefined4 *puStack_e0;
  undefined4 *puStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar14 = param_1[1] - *param_1;
  uVar12 = (lVar14 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar12) {
    FUN_104bdcf60();
LAB_104c40b10:
    FUN_104bd47d4();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x104c40b18);
    (*pcVar5)();
  }
  plStack_48 = param_1 + 2;
  lVar10 = *plStack_48 - *param_1 >> 3;
  uVar13 = lVar10 * 0x5555555555555556;
  if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
    uVar13 = uVar12;
  }
  if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
    uVar13 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar13 == 0) {
    lVar10 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar13) {
      FUN_104bd35f4();
      FUN_104c37e04(&lStack_68);
      __Unwind_Resume();
      lVar14 = param_1[1] - *param_1;
      uVar12 = (lVar14 >> 5) + 1;
      if (uVar12 >> 0x3b != 0) {
        FUN_104c35348();
LAB_104c40ce0:
        FUN_104bd35f4();
        FUN_104c408d0(&lStack_e8);
        __Unwind_Resume();
        lVar14 = param_1[1];
        lVar10 = param_1[2];
        while (lVar14 != lVar10) {
          param_1[2] = lVar10 + -0x40;
          func_0x000104c40640();
          lVar10 = param_1[2];
        }
        if (*param_1 != 0) {
          __ZdlPv();
        }
        return param_1;
      }
      plStack_c8 = param_1 + 2;
      uVar8 = *plStack_c8 - *param_1;
      uVar13 = (long)uVar8 >> 4;
      if (uVar13 <= uVar12) {
        uVar13 = uVar12;
      }
      if (0x7fffffffffffffdf < uVar8) {
        uVar13 = 0x7ffffffffffffff;
      }
      if (uVar13 == 0) {
        lVar10 = 0;
      }
      else {
        if (uVar13 >> 0x3b != 0) goto LAB_104c40ce0;
        lVar10 = uVar13 << 5;
        __Znwm();
      }
      puVar1 = (undefined4 *)(lVar10 + lVar14);
      lVar14 = lVar10 + uVar13 * 0x20;
      *puVar1 = (int)*param_2;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 2) = 0;
      lStack_e8 = lVar10;
      puStack_e0 = puVar1;
      puStack_d8 = puVar1;
      lStack_d0 = lVar14;
      func_0x00010015bcc4();
      puVar16 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)param_1[1];
      puVar2 = (undefined4 *)((long)puVar1 + ((long)puVar16 - (long)puVar4));
      puVar9 = puVar16;
      puVar11 = puVar2;
      if (puVar4 != puVar16) {
        do {
          *puVar11 = *puVar9;
          *(undefined8 *)(puVar11 + 4) = 0;
          *(undefined8 *)(puVar11 + 6) = 0;
          *(undefined8 *)(puVar11 + 2) = 0;
          uVar18 = *(undefined8 *)(puVar9 + 2);
          *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar9 + 4);
          *(undefined8 *)(puVar11 + 2) = uVar18;
          *(undefined8 *)(puVar11 + 6) = *(undefined8 *)(puVar9 + 6);
          *(undefined8 *)(puVar9 + 2) = 0;
          *(undefined8 *)(puVar9 + 4) = 0;
          *(undefined8 *)(puVar9 + 6) = 0;
          puVar9 = puVar9 + 8;
          puVar11 = puVar11 + 8;
        } while (puVar9 != puVar4);
        do {
          lVar10 = *(long *)(puVar16 + 2);
          if (lVar10 != 0) {
            lVar17 = *(long *)(puVar16 + 4);
            lVar7 = lVar10;
            if (lVar10 != lVar17) {
              do {
                lVar17 = lVar17 + -0x18;
              } while (lVar17 != lVar10);
              lVar7 = *(long *)(puVar16 + 2);
            }
            *(long *)(puVar16 + 4) = lVar10;
            __ZdlPv(lVar7);
          }
          puVar16 = puVar16 + 8;
        } while (puVar16 != puVar4);
        puVar16 = (undefined4 *)*param_1;
      }
      *param_1 = (long)puVar2;
      param_1[1] = (long)(puVar1 + 8);
      param_1[2] = lVar14;
      if (puVar16 != (undefined4 *)0x0) {
        __ZdlPv(puVar16);
      }
      return (long *)(puVar1 + 8);
    }
    lVar10 = uVar13 * 0x18;
    __Znwm();
  }
  plVar15 = (long *)(lVar10 + lVar14);
  lStack_50 = lVar10 + uVar13 * 0x18;
  uVar13 = *param_2;
  uVar12 = uVar13;
  lStack_68 = lVar10;
  plStack_60 = plVar15;
  plStack_58 = plVar15;
  _strlen();
  if (0x7ffffffffffffff6 < uVar12) goto LAB_104c40b10;
  if (uVar12 < 0x17) {
    *(char *)((long)plVar15 + 0x17) = (char)uVar12;
    plVar6 = plVar15;
    if (uVar12 == 0) goto LAB_104c40ab8;
  }
  else {
    plVar3 = (long *)0x19;
    if ((uVar12 | 7) != 0x17) {
      plVar3 = (long *)((uVar12 | 7) + 1);
    }
    plVar6 = plVar3;
    __Znwm();
    plVar15[1] = uVar12;
    plVar15[2] = (ulong)plVar3 | 0x8000000000000000;
    *plVar15 = (long)plVar6;
  }
  _memmove(plVar6,uVar13,uVar12);
  plVar15 = plVar6;
LAB_104c40ab8:
  *(undefined1 *)((long)plVar15 + uVar12) = 0;
  plVar15 = plStack_58 + 3;
  lVar10 = (long)plStack_60 - (param_1[1] - *param_1);
  _memcpy(lVar10);
  lVar14 = *param_1;
  *param_1 = lVar10;
  param_1[1] = (long)plVar15;
  param_1[2] = lStack_50;
  if (lVar14 != 0) {
    __ZdlPv();
  }
  return plVar15;
}



/* Entry: 104c40b30; end: 104c40cf7;  */

/* WARNING: Removing unreachable block (ram,0x000104c40c98) */

long * FUN_104c40b30(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar11 = param_1[1] - *param_1;
  uVar1 = (lVar11 >> 5) + 1;
  if (uVar1 >> 0x3b != 0) {
    FUN_104c35348();
LAB_104c40ce0:
    FUN_104bd35f4();
    FUN_104c408d0(&lStack_78);
    __Unwind_Resume();
    lVar11 = param_1[1];
    lVar5 = param_1[2];
    while (lVar11 != lVar5) {
      param_1[2] = lVar5 + -0x40;
      func_0x000104c40640();
      lVar5 = param_1[2];
    }
    if (*param_1 != 0) {
      __ZdlPv();
    }
    return param_1;
  }
  plStack_58 = param_1 + 2;
  uVar7 = *plStack_58 - *param_1;
  uVar10 = (long)uVar7 >> 4;
  if (uVar10 <= uVar1) {
    uVar10 = uVar1;
  }
  if (0x7fffffffffffffdf < uVar7) {
    uVar10 = 0x7ffffffffffffff;
  }
  if (uVar10 == 0) {
    lVar5 = 0;
  }
  else {
    if (uVar10 >> 0x3b != 0) goto LAB_104c40ce0;
    lVar5 = uVar10 << 5;
    __Znwm();
  }
  puVar2 = (undefined4 *)(lVar5 + lVar11);
  lVar11 = lVar5 + uVar10 * 0x20;
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined8 *)(puVar2 + 2) = 0;
  lStack_78 = lVar5;
  puStack_70 = puVar2;
  puStack_68 = puVar2;
  lStack_60 = lVar11;
  func_0x00010015bcc4();
  puVar12 = (undefined4 *)*param_1;
  puVar4 = (undefined4 *)param_1[1];
  puVar3 = (undefined4 *)((long)puVar2 + ((long)puVar12 - (long)puVar4));
  puVar8 = puVar12;
  puVar9 = puVar3;
  if (puVar4 != puVar12) {
    do {
      *puVar9 = *puVar8;
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 6) = 0;
      *(undefined8 *)(puVar9 + 2) = 0;
      uVar14 = *(undefined8 *)(puVar8 + 2);
      *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar8 + 4);
      *(undefined8 *)(puVar9 + 2) = uVar14;
      *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(puVar8 + 6);
      *(undefined8 *)(puVar8 + 2) = 0;
      *(undefined8 *)(puVar8 + 4) = 0;
      *(undefined8 *)(puVar8 + 6) = 0;
      puVar8 = puVar8 + 8;
      puVar9 = puVar9 + 8;
    } while (puVar8 != puVar4);
    do {
      lVar5 = *(long *)(puVar12 + 2);
      if (lVar5 != 0) {
        lVar13 = *(long *)(puVar12 + 4);
        lVar6 = lVar5;
        if (lVar5 != lVar13) {
          do {
            lVar13 = lVar13 + -0x18;
          } while (lVar13 != lVar5);
          lVar6 = *(long *)(puVar12 + 2);
        }
        *(long *)(puVar12 + 4) = lVar5;
        __ZdlPv(lVar6);
      }
      puVar12 = puVar12 + 8;
    } while (puVar12 != puVar4);
    puVar12 = (undefined4 *)*param_1;
  }
  *param_1 = (long)puVar3;
  param_1[1] = (long)(puVar2 + 8);
  param_1[2] = lVar11;
  if (puVar12 != (undefined4 *)0x0) {
    __ZdlPv(puVar12);
  }
  return (long *)(puVar2 + 8);
}



/* Entry: 104c40cf8; end: 104c40dab;  */

long * FUN_104c40cf8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    param_1[2] = lVar2 + -0x40;
    func_0x000104c40640();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c40dac; end: 104c40e3f;  */

/* WARNING: Removing unreachable block (ram,0x000104c40df0) */

undefined8 * FUN_104c40dac(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    lVar3 = param_1[4];
    lVar1 = lVar2;
    if (lVar2 != lVar3) {
      do {
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != lVar2);
      lVar1 = param_1[3];
    }
    param_1[4] = lVar2;
    __ZdlPv(lVar1);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return param_1;
  }
  __ZdlPv(*param_1);
  return param_1;
}



/* Entry: 104c40e40; end: 104c40ea3;  */

long FUN_104c40e40(long param_1)

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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c40ea4; end: 104c410f7;  */

/* WARNING: Removing unreachable block (ram,0x000104c41054) */

long * FUN_104c40ea4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x22;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar10 = param_1[1] - *param_1;
  uVar8 = (lVar10 >> 4) * -0x5555555555555555 + 1;
  if (uVar8 < 0x555555555555556) {
    plStack_58 = param_1 + 2;
    lVar6 = *plStack_58 - *param_1 >> 4;
    uVar9 = lVar6 * 0x5555555555555556;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar9 = 0x555555555555555;
    }
    if (uVar9 == 0) {
      lVar6 = 0;
    }
    else {
      if (0x555555555555555 < uVar9) goto LAB_104c410bc;
      lVar6 = uVar9 * 0x30;
      __Znwm();
    }
    puVar1 = (undefined8 *)(lVar6 + lVar10);
    lVar10 = lVar6 + uVar9 * 0x30;
    lStack_78 = lVar6;
    puStack_70 = puVar1;
    puStack_68 = puVar1;
    lStack_60 = lVar10;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000100033dac(puVar1,*param_2,param_2[1]);
    }
    else {
      uVar13 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar13;
      puVar1[2] = param_2[2];
    }
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    func_0x00010015bcc4();
    puVar11 = (undefined8 *)*param_1;
    puVar3 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)((long)puVar1 + ((long)puVar11 - (long)puVar3));
    puVar5 = puVar11;
    puVar7 = puVar2;
    if (puVar3 != puVar11) {
      do {
        uVar14 = puVar5[1];
        uVar13 = *puVar5;
        puVar7[2] = puVar5[2];
        puVar7[1] = uVar14;
        *puVar7 = uVar13;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        uVar13 = puVar5[3];
        puVar7[4] = puVar5[4];
        puVar7[3] = uVar13;
        puVar7[5] = puVar5[5];
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5 = puVar5 + 6;
        puVar7 = puVar7 + 6;
      } while (puVar5 != puVar3);
      do {
        lVar6 = puVar11[3];
        if (lVar6 != 0) {
          lVar12 = puVar11[4];
          lVar4 = lVar6;
          if (lVar6 != lVar12) {
            do {
              lVar12 = lVar12 + -0x18;
            } while (lVar12 != lVar6);
            lVar4 = puVar11[3];
          }
          puVar11[4] = lVar6;
          __ZdlPv(lVar4);
        }
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          __ZdlPv(*puVar11);
        }
        puVar11 = puVar11 + 6;
      } while (puVar11 != puVar3);
      puVar11 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar2;
    param_1[1] = (long)(puVar1 + 6);
    param_1[2] = lVar10;
    if (puVar11 != (undefined8 *)0x0) {
      __ZdlPv(puVar11);
    }
    return puVar1 + 6;
  }
  func_0x000104c3548c();
LAB_104c410bc:
  FUN_104bd35f4();
  func_0x000104c35884(&lStack_78);
  __Unwind_Resume();
  if (*(char *)((long)unaff_x22 + 0x17) < '\0') {
    __ZdlPv(*unaff_x22);
  }
  func_0x000104c35884(&lStack_78);
  __Unwind_Resume();
  *param_1 = (long)&PTR_FUN_1107eb988;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return param_1;
}



/* Entry: 104c410f8; end: 104c4110b;  */

void FUN_104c410f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb988;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c4110c; end: 104c4112f;  */

void FUN_104c4110c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eb988;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c41130; end: 104c41167;  */

void FUN_104c41130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c41138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 104c41168; end: 104c412db;  */

long * FUN_104c41168(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar15 = param_1[1] - *param_1;
  uVar1 = (lVar15 >> 6) + 1;
  if (uVar1 >> 0x3a != 0) {
    FUN_104c35708();
LAB_104c412c4:
    FUN_104bd35f4();
    FUN_104c40cf8(&lStack_68);
    __Unwind_Resume();
    plVar14 = (long *)*param_1;
    plVar8 = param_1;
    if ((ulong)((param_1[2] - (long)plVar14 >> 3) * -0x5555555555555555) < param_2) {
      if (0xaaaaaaaaaaaaaaa < param_2) {
        FUN_104c41418();
        plVar14 = (long *)&DAT_10f62a4d8;
        FUN_104bd47e8();
        *plVar14 = (long)&PTR_FUN_1107eba28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
        return plVar14;
      }
      plVar19 = (long *)param_1[1];
      plVar17 = (long *)(param_2 * 0x18);
      __Znwm();
      lVar15 = (long)plVar19 - (long)plVar14;
      plVar8 = plVar17;
      plVar18 = plVar14;
      plVar12 = plVar17;
      if (lVar15 != 0) {
        do {
          *(int *)plVar12 = (int)*plVar18;
          lVar7 = plVar18[1];
          plVar12[2] = plVar18[2];
          plVar12[1] = lVar7;
          plVar18[1] = 0;
          plVar18[2] = 0;
          plVar18 = plVar18 + 3;
          plVar12 = plVar12 + 3;
        } while (plVar18 != plVar19);
        do {
          plVar18 = (long *)plVar14[2];
          if (plVar18 != (long *)0x0) {
            plVar12 = plVar18 + 1;
            do {
              lVar7 = *plVar12;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar6) {
                *plVar12 = lVar7 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar7 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
              plVar8 = plVar18;
            }
          }
          plVar14 = plVar14 + 3;
        } while (plVar14 != plVar19);
        plVar14 = (long *)*param_1;
      }
      *param_1 = (long)plVar17;
      param_1[1] = (long)plVar17 + lVar15;
      param_1[2] = (long)(plVar17 + param_2 * 3);
      if (plVar14 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar14);
        return plVar14;
      }
    }
    return plVar8;
  }
  plStack_48 = param_1 + 2;
  uVar9 = *plStack_48 - *param_1;
  uVar13 = (long)uVar9 >> 5;
  if (uVar13 <= uVar1) {
    uVar13 = uVar1;
  }
  if (0x7fffffffffffffbf < uVar9) {
    uVar13 = 0x3ffffffffffffff;
  }
  if (uVar13 == 0) {
    lVar7 = 0;
  }
  else {
    if (uVar13 >> 0x3a != 0) goto LAB_104c412c4;
    lVar7 = uVar13 << 6;
    __Znwm();
  }
  lVar15 = lVar7 + lVar15;
  lVar2 = lVar7 + uVar13 * 0x40;
  lStack_68 = lVar7;
  lStack_60 = lVar15;
  lStack_58 = lVar15;
  lStack_50 = lVar2;
  FUN_104c356b4(lVar15,param_2);
  puVar16 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)((long)puVar16 + (lVar15 - (long)puVar4));
  puVar10 = puVar16;
  puVar11 = puVar3;
  if (puVar4 != puVar16) {
    do {
      uVar21 = puVar10[1];
      uVar20 = *puVar10;
      puVar11[2] = puVar10[2];
      puVar11[1] = uVar21;
      *puVar11 = uVar20;
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = 0;
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      uVar20 = puVar10[3];
      puVar11[4] = puVar10[4];
      puVar11[3] = uVar20;
      puVar11[5] = puVar10[5];
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      uVar20 = puVar10[6];
      puVar11[7] = puVar10[7];
      puVar11[6] = uVar20;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10 = puVar10 + 8;
      puVar11 = puVar11 + 8;
    } while (puVar10 != puVar4);
    do {
      func_0x000104c40640(puVar16);
      puVar16 = puVar16 + 8;
    } while (puVar16 != puVar4);
    puVar16 = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar3;
  param_1[1] = lVar15 + 0x40;
  param_1[2] = lVar2;
  if (puVar16 != (undefined8 *)0x0) {
    __ZdlPv(puVar16);
  }
  return (long *)(lVar15 + 0x40);
}



/* Entry: 104c412dc; end: 104c41417;  */

void FUN_104c412dc(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  
  puVar9 = (undefined4 *)*param_1;
  if ((ulong)((param_1[2] - (long)puVar9 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_104c41418();
      puVar5 = (undefined8 *)&DAT_10f62a4d8;
      FUN_104bd47e8();
      *puVar5 = &PTR_FUN_1107eba28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
      return;
    }
    puVar12 = (undefined4 *)param_1[1];
    puVar10 = (undefined4 *)(param_2 * 0x18);
    __Znwm();
    lVar4 = (long)puVar12 - (long)puVar9;
    puVar6 = puVar9;
    puVar7 = puVar10;
    if (lVar4 != 0) {
      do {
        *puVar7 = *puVar6;
        uVar13 = *(undefined8 *)(puVar6 + 2);
        *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar6 + 4);
        *(undefined8 *)(puVar7 + 2) = uVar13;
        *(undefined8 *)(puVar6 + 2) = 0;
        *(undefined8 *)(puVar6 + 4) = 0;
        puVar6 = puVar6 + 6;
        puVar7 = puVar7 + 6;
      } while (puVar6 != puVar12);
      do {
        plVar11 = *(long **)(puVar9 + 4);
        if (plVar11 != (long *)0x0) {
          plVar1 = plVar11 + 1;
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
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        puVar9 = puVar9 + 6;
      } while (puVar9 != puVar12);
      puVar9 = (undefined4 *)*param_1;
    }
    *param_1 = puVar10;
    param_1[1] = (long)puVar10 + lVar4;
    param_1[2] = puVar10 + param_2 * 6;
    if (puVar9 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar9);
      return;
    }
  }
  return;
}



/* Entry: 104c41418; end: 104c4142b;  */

void FUN_104c41418(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_104bd47e8();
  *puVar1 = &PTR_FUN_1107eba28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c4142c; end: 104c4143f;  */

void FUN_104c4142c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eba28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c41440; end: 104c41463;  */

void FUN_104c41440(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eba28;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c41464; end: 104c4147b;  */

void FUN_104c41464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c4146c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 104c4147c; end: 104c4150b;  */

undefined8 * FUN_104c4147c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107eba78;
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return param_1;
  }
  __ZdlPv(param_1[2]);
  return param_1;
}



/* Entry: 104c4150c; end: 104c4151f;  */

void FUN_104c4150c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ebaa0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c41520; end: 104c41543;  */

void FUN_104c41520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ebaa0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c41544; end: 104c4155b;  */

void FUN_104c41544(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x37)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104c4155c; end: 104c415f3;  */

void FUN_104c4155c(long param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if ((*param_2 == 0xe || *param_2 == 1) && (lVar4 = *(long *)(param_1 + 8), lVar4 != 0)) {
    pcVar1 = (char *)(lVar4 + 0x70);
    while (*pcVar1 == '\0') {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\x01';
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        __ZNSt3__15mutex4lockEv(lVar4 + 0xd8);
        FUN_104c452e4(lVar4);
        FUN_104c44cdc(lVar4);
        FUN_104c45434(lVar4,*(undefined8 *)(lVar4 + 0x78));
        *pcVar1 = '\0';
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar4 + 0xd8);
        return;
      }
    }
    ClearExclusiveLocal();
  }
  return;
}



/* Entry: 104c415f4; end: 104c41607;  */

void FUN_104c415f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ebb18;
  param_1[1] = 0;
  return;
}



/* Entry: 104c41608; end: 104c4260b;  */

/* WARNING: Removing unreachable block (ram,0x000104c423f8) */
/* WARNING: Removing unreachable block (ram,0x000104c417e0) */
/* WARNING: Removing unreachable block (ram,0x000104c4176c) */
/* WARNING: Removing unreachable block (ram,0x000104c41f4c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_104c41608(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long ***ppplVar2;
  undefined8 *******pppppppuVar3;
  long lVar4;
  bool bVar5;
  uint5 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 *puVar17;
  code *pcVar18;
  char *pcVar19;
  long ****pppplVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *puVar22;
  undefined1 *puVar23;
  long ***ppplVar24;
  undefined1 *puVar25;
  long ****pppplVar26;
  long lVar27;
  long ***ppplVar28;
  long **pplVar29;
  long **pplVar30;
  long ***ppplVar31;
  undefined8 *puVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  char *pcVar36;
  long lVar37;
  undefined8 *puVar38;
  ulong *puVar39;
  long ****pppplVar40;
  undefined4 *puVar41;
  undefined8 *puVar42;
  ulong *puVar43;
  long *plVar44;
  long lVar45;
  byte bVar46;
  undefined4 *puVar47;
  int iVar48;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  ulong uVar59;
  ulong uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar71;
  char cVar72;
  short sVar73;
  ulong uVar74;
  ulong uVar75;
  long ****pppplStack_250;
  int iStack_248;
  long ****pppplStack_240;
  long ****pppplStack_238;
  long ****pppplStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  int iStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *******pppppppuStack_1d8;
  char *pcStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *apuStack_1c0 [6];
  long ****pppplStack_190;
  long ****pppplStack_188;
  long ****pppplStack_180;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  long ****pppplStack_128;
  long ****pppplStack_120;
  long ****pppplStack_118;
  long ****pppplStack_110;
  long ****pppplStack_108;
  long ****pppplStack_100;
  long ****pppplStack_c0;
  long ****pppplStack_b8;
  long ****pppplStack_b0;
  undefined4 *puStack_a8;
  undefined4 *puStack_a0;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  
  if ((char)param_1[1] != '\x01') {
    return;
  }
  FUN_104c475c8(&puStack_90,param_3 + 0x28);
  FUN_104c47fc8(&puStack_a8,param_3 + 0x40);
  puVar39 = (ulong *)(param_3 + 0x10);
  puVar43 = puVar39;
  if ((*puVar39 & 1) != 0) {
    puVar43 = (ulong *)(*puVar39 + 7);
  }
  dVar71 = 0.0;
  if (*(int *)(param_3 + 0x18) == 0) {
LAB_104c416d0:
    bVar46 = 0;
    if (*(double *)(param_1[5] + 200) < 0.0) {
LAB_104c416e4:
      (**(code **)(*param_1 + 0x50))(dVar71,param_1);
    }
  }
  else {
    lVar45 = (long)*(int *)(param_3 + 0x18) << 3;
    do {
      FUN_104c4383c(param_1[5],*puVar43);
      lVar45 = lVar45 + -8;
      puVar43 = puVar43 + 1;
    } while (lVar45 != 0);
    if (*(int *)(param_3 + 0x18) < 1) goto LAB_104c416d0;
    if ((*puVar39 & 1) != 0) {
      puVar39 = (ulong *)(*puVar39 + 7);
    }
    bVar46 = *(byte *)(*puVar39 + 0x28);
    dVar71 = (double)*(float *)(*puVar39 + 0x30);
    if (*(double *)(param_1[5] + 200) < dVar71) goto LAB_104c416e4;
  }
  pppplStack_c0 = (long ****)0x0;
  pppplStack_b8 = (long ****)0x0;
  pppplStack_b0 = (long ****)0x0;
  if ((bVar46 & 1) == 0) {
    FUN_104c44744(&puStack_140,param_1[5] + 0x28);
    pppplStack_b8 = pppplStack_108;
    pppplStack_c0 = pppplStack_110;
    pppplStack_b0 = pppplStack_100;
    pppplStack_100 = (long ****)((ulong)pppplStack_100 & 0xffffffffffffff);
    pppplStack_110 = (long ****)((ulong)pppplStack_110 & 0xffffffffffffff00);
    FUN_104c42d18(&puStack_140);
    pcVar36 = " not final";
  }
  else {
    FUN_104c44744(&puStack_140,param_1[5] + 0x28);
    if (puStack_140 == puStack_138) {
      FUN_104c44744(apuStack_1c0,param_1[5] + 0x28);
      pppplStack_238 = pppplStack_188;
      pppplStack_240 = pppplStack_190;
      pppplStack_230 = pppplStack_180;
      pppplStack_188 = (long ****)0x0;
      pppplStack_180 = (long ****)0x0;
      pppplStack_190 = (long ****)0x0;
    }
    else {
      FUN_104c44744(apuStack_1c0,param_1[5] + 0x28);
      if (*(char *)((long)apuStack_1c0[0] + 0x17) < '\0') {
        func_0x000100033dac(&pppplStack_240,*apuStack_1c0[0],apuStack_1c0[0][1]);
      }
      else {
        pppplStack_240 = (long ****)*apuStack_1c0[0];
        pppplStack_238 = (long ****)apuStack_1c0[0][1];
        pppplStack_230 = (long ****)apuStack_1c0[0][2];
      }
    }
    pppplStack_b8 = pppplStack_238;
    pppplStack_c0 = pppplStack_240;
    pppplStack_b0 = pppplStack_230;
    pppplStack_230 = (long ****)((ulong)pppplStack_230 & 0xffffffffffffff);
    pppplStack_240 = (long ****)((ulong)pppplStack_240 & 0xffffffffffffff00);
    FUN_104c42d18(apuStack_1c0);
    FUN_104c42d18(&puStack_140);
    pcVar36 = " final";
  }
  pcVar19 = pcVar36;
  _strlen();
  if ((char *)0x7ffffffffffffff6 < pcVar19) {
    FUN_104bd47d4();
    goto LAB_104c42478;
  }
  if (pcVar19 < (char *)0x17) {
    uStack_1c8 = CONCAT17((char)pcVar19,(undefined7)uStack_1c8);
    pppppppuVar21 = &pppppppuStack_1d8;
    if (pcVar19 != (char *)0x0) goto LAB_104c41ea8;
                    /* WARNING: Ignoring partial resolution of indirect */
    pppppppuStack_1d8._0_1_ = 0;
    iVar48 = (int)param_1[4];
    puVar23 = puStack_90;
    puVar17 = puStack_88;
  }
  else {
    pppppppuVar3 = (undefined8 *******)0x19;
    if (((ulong)pcVar19 | 7) != 0x17) {
      pppppppuVar3 = (undefined8 *******)(((ulong)pcVar19 | 7) + 1);
    }
    pppppppuVar21 = pppppppuVar3;
    __Znwm();
    uStack_1c8 = (ulong)pppppppuVar3 | 0x8000000000000000;
    pppppppuStack_1d8 = pppppppuVar21;
    pcStack_1d0 = pcVar19;
LAB_104c41ea8:
    _memcpy(pppppppuVar21,pcVar36,pcVar19);
    *(char *)((long)pppppppuVar21 + (long)pcVar19) = '\0';
    iVar48 = (int)param_1[4];
    puVar23 = puStack_90;
    puVar17 = puStack_88;
  }
  puStack_90 = puVar23;
  puStack_88 = puVar17;
  if (iVar48 == 0) {
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    (*(code *)param_1[2])(&pppplStack_c0,1,&uStack_1e8,param_1[7]);
    goto joined_r0x000104c41ef4;
  }
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  if (iVar48 != 1) goto joined_r0x000104c41ef4;
  puStack_1f8 = (undefined8 *)0x0;
  iStack_1f0 = 0;
  puStack_138 = (undefined8 *)0x0;
  puStack_130 = (undefined8 *)0x0;
  puStack_140 = (undefined8 *)0x0;
  if ((long)puVar17 - (long)puVar23 == 0) {
    pppplStack_118 = (long ****)0x0;
    pppplStack_110 = (long ****)0x0;
    pppplStack_128 = (long ****)0x0;
    pppplStack_120 = (long ****)0x0;
    pppplStack_108 = (long ****)0x0;
    pppplStack_100 = (long ****)0x0;
  }
  else {
    lVar45 = (long)puVar17 - (long)puVar23 >> 5;
    if (0x38e38e38e38e38e < (ulong)(lVar45 * -0x3333333333333333)) {
      FUN_104c42f24();
      goto LAB_104c42478;
    }
    puVar38 = (undefined8 *)(lVar45 * -0x6666666666666658);
    __Znwm();
    puStack_130 = puVar38 + lVar45 * -0xccccccccccccccb;
    puStack_138 = puVar38 + lVar45 * -0xccccccccccccccb;
    puVar22 = puVar38;
    do {
      puVar22[1] = 0;
      *puVar22 = 0;
      puVar22[3] = 0;
      puVar22[2] = 0;
      puVar22[5] = 0;
      puVar22[4] = 0;
      puVar22[7] = 0;
      puVar22[6] = 0;
      puVar22[8] = 0;
      *(undefined4 *)((long)puVar22 + 4) = 1;
      puVar22[2] = 0;
      puVar22[1] = 0;
      puVar22[4] = 0;
      puVar22[3] = 0;
      *(undefined8 *)((long)puVar22 + 0x2c) = 0;
      *(undefined8 *)((long)puVar22 + 0x24) = 0;
      puVar22 = puVar22 + 9;
    } while (puVar22 != puStack_138);
    pppplStack_240 = (long ****)&pppplStack_128;
    pppplStack_128 = (long ****)0x0;
    pppplStack_120 = (long ****)0x0;
    pppplStack_118 = (long ****)0x0;
    pppplStack_238 = (long ****)((ulong)pppplStack_238 & 0xffffffffffffff00);
    pppplVar40 = (long ****)(lVar45 * 0x3333333333333338);
    pppplVar20 = pppplVar40;
    puStack_140 = puVar38;
    __Znwm();
    pppplStack_118 = pppplVar20 + lVar45 * 0x666666666666667;
    pppplVar26 = pppplVar40 + -3;
    pppplStack_128 = pppplVar20;
    _bzero();
    pppplStack_120 = pppplVar20 + ((ulong)pppplVar26 / 0x18) * 3 + 3;
    pppplStack_240 = (long ****)&pppplStack_110;
    pppplStack_110 = (long ****)0x0;
    pppplStack_108 = (long ****)0x0;
    pppplStack_100 = (long ****)0x0;
    pppplStack_238 = (long ****)((ulong)pppplStack_238 & 0xffffffffffffff00);
    __Znwm();
    pppplStack_100 = pppplVar40 + lVar45 * 0x666666666666667;
    pppplStack_110 = pppplVar40;
    _bzero();
    lVar45 = 0;
    pppplStack_108 = pppplVar40 + ((ulong)pppplVar26 / 0x18) * 3 + 3;
    do {
      puVar22 = puStack_140 + lVar45 * 9;
      *(undefined1 *)puVar22 = *puVar23;
      *(uint *)((long)puVar22 + 4) = (uint)(byte)puVar23[0x80];
      if ((char)puVar23[0x1f] < '\0') {
        puVar22[1] = *(undefined8 *)(puVar23 + 8);
        if ((char)puVar23[0x67] < '\0') goto LAB_104c41be8;
LAB_104c41a10:
        puVar22[2] = puVar23 + 0x50;
        if (-1 < (char)puVar23[0x7f]) goto LAB_104c41a20;
LAB_104c41bfc:
        puVar22[3] = *(undefined8 *)(puVar23 + 0x68);
        cVar52 = puVar23[0x9f];
      }
      else {
        puVar22[1] = puVar23 + 8;
        if (-1 < (char)puVar23[0x67]) goto LAB_104c41a10;
LAB_104c41be8:
        puVar22[2] = *(undefined8 *)(puVar23 + 0x50);
        if ((char)puVar23[0x7f] < '\0') goto LAB_104c41bfc;
LAB_104c41a20:
        puVar22[3] = puVar23 + 0x68;
        cVar52 = puVar23[0x9f];
      }
      puVar25 = puVar23 + 0x88;
      if (cVar52 < '\0') {
        puVar25 = *(undefined1 **)(puVar23 + 0x88);
      }
      puVar22[4] = puVar25;
      pppplVar20 = pppplStack_128 + lVar45 * 3;
      pplVar29 = *(long ***)(puVar23 + 0x20);
      pplVar30 = *(long ***)(puVar23 + 0x28);
      lVar27 = (long)pplVar30 - (long)pplVar29 >> 4;
      uVar33 = lVar27 * -0x5555555555555555;
      ppplVar28 = *pppplVar20;
      uVar34 = (long)pppplVar20[1] - (long)ppplVar28 >> 4;
      if (uVar33 < uVar34 || uVar33 - uVar34 == 0) {
        if (uVar33 < uVar34) {
          pppplVar20[1] = ppplVar28 + lVar27 * -0xaaaaaaaaaaaaaaa;
        }
      }
      else {
        FUN_104c43040(pppplVar20,uVar33 - uVar34);
        pplVar29 = *(long ***)(puVar23 + 0x20);
        pplVar30 = *(long ***)(puVar23 + 0x28);
        ppplVar28 = *pppplVar20;
        uVar33 = ((long)pplVar30 - (long)pplVar29 >> 4) * -0x5555555555555555;
      }
      if (pplVar30 != pplVar29) {
        if (uVar33 < 2) {
          uVar33 = 1;
        }
        ppplVar24 = ppplVar28 + 1;
        do {
          while (*(char *)((long)pplVar29 + 0x17) < '\0') {
            ppplVar24[-1] = (long **)*pplVar29;
            if (-1 < *(char *)((long)pplVar29 + 0x2f)) goto LAB_104c41ab8;
LAB_104c41ae4:
            *ppplVar24 = (long **)pplVar29[3];
            pplVar29 = pplVar29 + 6;
            uVar33 = uVar33 - 1;
            ppplVar24 = ppplVar24 + 2;
            if (uVar33 == 0) goto LAB_104c41af8;
          }
          ppplVar24[-1] = pplVar29;
          if (*(char *)((long)pplVar29 + 0x2f) < '\0') goto LAB_104c41ae4;
LAB_104c41ab8:
          *ppplVar24 = pplVar29 + 3;
          pplVar29 = pplVar29 + 6;
          uVar33 = uVar33 - 1;
          ppplVar24 = ppplVar24 + 2;
        } while (uVar33 != 0);
      }
LAB_104c41af8:
      *(int *)(puVar22 + 6) = (int)((ulong)((long)pppplVar20[1] - (long)ppplVar28) >> 4);
      puVar22[5] = ppplVar28;
      pppplVar20 = pppplStack_110 + lVar45 * 3;
      ppplVar28 = *(long ****)(puVar23 + 0x38);
      ppplVar31 = *(long ****)(puVar23 + 0x40);
      lVar27 = (long)ppplVar31 - (long)ppplVar28 >> 3;
      uVar33 = lVar27 * -0x5555555555555555;
      ppplVar24 = *pppplVar20;
      uVar34 = (long)pppplVar20[1] - (long)ppplVar24 >> 3;
      if (uVar33 < uVar34 || uVar33 - uVar34 == 0) {
        if (uVar33 < uVar34) {
          pppplVar20[1] = ppplVar24 + lVar27 * 0xaaaaaaaaaaaaaab;
        }
      }
      else {
        FUN_104c4316c(pppplVar20,uVar33 - uVar34);
        ppplVar28 = *(long ****)(puVar23 + 0x38);
        ppplVar31 = *(long ****)(puVar23 + 0x40);
        ppplVar24 = *pppplVar20;
        uVar33 = ((long)ppplVar31 - (long)ppplVar28 >> 3) * -0x5555555555555555;
      }
      if (ppplVar31 != ppplVar28) {
        uVar34 = uVar33;
        if (uVar33 < 2) {
          uVar34 = 1;
        }
        if ((uVar33 < 5) || (ppplVar24 < ppplVar28 + uVar34 * 3 && ppplVar28 < ppplVar24 + uVar34))
        {
          lVar27 = 0;
        }
        else {
          if (uVar33 < 0x11) {
            lVar27 = 0;
          }
          else {
            uVar33 = 0x10;
            if ((uVar34 & 0xf) != 0) {
              uVar33 = uVar34 & 0xf;
            }
            lVar27 = uVar34 - uVar33;
            pcVar36 = (char *)((long)ppplVar28 + 0xbf);
            ppplVar31 = ppplVar24;
            uVar35 = uVar34;
            do {
              cVar52 = pcVar36[-0x78];
              cVar53 = pcVar36[-0x60];
              auVar56._0_8_ = *(undefined8 *)(pcVar36 + -0xbf);
              auVar56._8_8_ = *(undefined8 *)(pcVar36 + -0xa7);
              cVar54 = pcVar36[0x48];
              auVar63._8_8_ = pcVar36 + -0xa7;
              auVar63._0_8_ = pcVar36 + -0xbf;
              auVar65._0_8_ = *(undefined8 *)(pcVar36 + 1);
              auVar65._8_8_ = *(undefined8 *)(pcVar36 + 0x19);
              cVar55 = pcVar36[0x60];
              sVar73 = (short)-(pcVar36[0x78] < '\0');
              auVar8._8_4_ = (int)(pcVar36 + 0x19);
              auVar8._0_8_ = pcVar36 + 1;
              auVar8._12_4_ = (int)((ulong)(pcVar36 + 0x19) >> 0x20);
              auVar13._8_8_ = (long)(int)(short)-(pcVar36[0x30] < '\0');
              auVar13._0_8_ = (long)(int)(short)-(pcVar36[0x18] < '\0');
              auVar65 = auVar65 ^ (auVar65 ^ auVar8) & ~auVar13;
              auVar67._0_8_ = (long)(int)(short)-(pcVar36[-0xa8] < '\0');
              auVar67._8_8_ = (long)(int)(short)-(pcVar36[-0x90] < '\0');
              auVar56 = auVar56 ^ (auVar56 ^ auVar63) & ~auVar67;
              uVar59 = *(ulong *)(pcVar36 + -0x8f);
              uVar60 = *(ulong *)(pcVar36 + -0x77);
              auVar61._8_8_ = pcVar36 + -0x47;
              auVar61._0_8_ = pcVar36 + -0x5f;
              puVar43 = (ulong *)(pcVar36 + 0x31);
              auVar64._0_8_ = (long)(int)(short)-(pcVar36[-0x48] < '\0');
              auVar64._8_8_ = (long)(int)(short)-(pcVar36[-0x30] < '\0');
              auVar14._8_8_ = *(undefined8 *)(pcVar36 + -0x47);
              auVar14._0_8_ = *(undefined8 *)(pcVar36 + -0x5f);
              auVar61 = auVar61 ^ (auVar61 ^ auVar14) & auVar64;
              auVar50._8_8_ = pcVar36 + -0x17;
              auVar50._0_8_ = pcVar36 + -0x2f;
              auVar49._0_8_ = (long)(int)(short)-(pcVar36[-0x18] < '\0');
              auVar49._8_8_ = (long)(int)(short)-(*pcVar36 < '\0');
              auVar15._8_8_ = *(undefined8 *)(pcVar36 + -0x17);
              auVar15._0_8_ = *(undefined8 *)(pcVar36 + -0x2f);
              auVar50 = auVar50 ^ (auVar50 ^ auVar15) & auVar49;
              uVar74 = *puVar43;
              uVar75 = *(ulong *)(pcVar36 + 0x49);
              pcVar19 = pcVar36 + 0x91;
              auVar66._8_8_ = pcVar36 + 0x79;
              auVar66._0_8_ = pcVar36 + 0x61;
              cVar72 = (char)((int)sVar73 >> 0x1f);
              auVar12._8_4_ = (int)*(undefined8 *)(pcVar36 + 0x79);
              auVar12._0_8_ = *(undefined8 *)(pcVar36 + 0x61);
              auVar12._12_4_ = (int)((ulong)*(undefined8 *)(pcVar36 + 0x79) >> 0x20);
              auVar9[3] = (undefined1)(sVar73 >> 0xf);
              auVar9._0_3_ = (int3)sVar73;
              auVar9[4] = cVar72;
              auVar9[5] = cVar72;
              auVar9[6] = cVar72;
              auVar9[7] = cVar72;
              auVar9._8_4_ = (int)(short)-(pcVar36[0x90] < '\0');
              auVar9._12_4_ = (int)(short)-(pcVar36[0x90] < '\0') >> 0x1f;
              auVar66 = auVar66 ^ (auVar66 ^ auVar12) & auVar9;
              auVar68._0_8_ = (long)(int)(short)-(pcVar36[0xa8] < '\0');
              auVar68._8_8_ = (long)(int)(short)-(pcVar36[0xc0] < '\0');
              auVar10._8_4_ = (int)*(undefined8 *)(pcVar36 + 0xa9);
              auVar10._0_8_ = *(undefined8 *)pcVar19;
              auVar10._12_4_ = (int)((ulong)*(undefined8 *)(pcVar36 + 0xa9) >> 0x20);
              auVar16._8_8_ = pcVar36 + 0xa9;
              auVar16._0_8_ = pcVar19;
              auVar69._8_8_ = pcVar36 + 0xa9;
              auVar69._0_8_ = pcVar19;
              auVar69 = auVar69 ^ (auVar16 ^ auVar10) & auVar68;
              ppplVar31[0xd] = auVar66._8_8_;
              ppplVar31[0xc] = auVar66._0_8_;
              ppplVar31[0xf] = auVar69._8_8_;
              ppplVar31[0xe] = auVar69._0_8_;
              ppplVar31[9] = auVar65._8_8_;
              ppplVar31[8] = auVar65._0_8_;
              ppplVar31[0xb] =
                   (long **)((ulong)(pcVar36 + 0x49) ^
                            ((ulong)(pcVar36 + 0x49) ^ uVar75) & (long)(int)(short)-(cVar55 < '\0'))
              ;
              ppplVar31[10] =
                   (long **)((ulong)puVar43 ^
                            ((ulong)puVar43 ^ uVar74) & (long)(int)(short)-(cVar54 < '\0'));
              ppplVar31[5] = auVar61._8_8_;
              ppplVar31[4] = auVar61._0_8_;
              ppplVar31[7] = auVar50._8_8_;
              ppplVar31[6] = auVar50._0_8_;
              ppplVar31[1] = auVar56._8_8_;
              *ppplVar31 = auVar56._0_8_;
              ppplVar31[3] = (long **)(uVar60 ^ (uVar60 ^ (ulong)(pcVar36 + -0x77)) &
                                                ~(long)(int)(short)-(cVar53 < '\0'));
              ppplVar31[2] = (long **)(uVar59 ^ (uVar59 ^ (ulong)(pcVar36 + -0x8f)) &
                                                ~(long)(int)(short)-(cVar52 < '\0'));
              pcVar36 = pcVar36 + 0x180;
              uVar35 = uVar35 - 0x10;
              ppplVar31 = ppplVar31 + 0x10;
            } while (uVar33 != uVar35);
            if (uVar33 < 5) goto LAB_104c41ba4;
          }
          uVar33 = 4;
          if ((uVar34 & 3) != 0) {
            uVar33 = uVar34 & 3;
          }
          lVar37 = uVar33 + lVar27;
          lVar4 = lVar27 * 0x18;
          ppplVar31 = ppplVar24 + lVar27;
          lVar27 = uVar34 - uVar33;
          lVar37 = lVar37 - uVar34;
          pcVar36 = (char *)((long)ppplVar28 + lVar4 + 0x5f);
          do {
            auVar51._0_8_ = *(undefined8 *)(pcVar36 + -0x5f);
            auVar51._8_8_ = *(undefined8 *)(pcVar36 + -0x47);
            auVar62._0_8_ = *(undefined8 *)(pcVar36 + -0x2f);
            auVar62._8_8_ = *(undefined8 *)(pcVar36 + -0x17);
            auVar58._8_8_ = pcVar36 + -0x17;
            auVar58._0_8_ = pcVar36 + -0x2f;
            auVar70._8_8_ = pcVar36 + -0x47;
            auVar70._0_8_ = pcVar36 + -0x5f;
            bVar11 = -(pcVar36[-0x30] < '\0');
            uVar6 = CONCAT14(bVar11,(uint)CONCAT12(bVar11,-(ushort)(pcVar36[-0x48] < '\0'))) &
                    0xff0000ffff;
            cVar52 = (char)uVar6;
            cVar53 = cVar52 >> 7;
            auVar7[2] = cVar53;
            auVar7._0_2_ = (short)cVar52;
            auVar7[3] = cVar53;
            auVar7[4] = cVar53;
            auVar7[5] = cVar53;
            auVar7[6] = cVar53;
            auVar7[7] = cVar53;
            auVar7._8_4_ = (int)(char)(uVar6 >> 0x20);
            auVar7._12_4_ = (int)((long)((ulong)bVar11 << 0x38) >> 0x3f);
            auVar51 = auVar51 ^ (auVar51 ^ auVar70) & ~auVar7;
            auVar57._8_8_ = (long)-(*pcVar36 < '\0');
            auVar57._0_8_ = (long)-(pcVar36[-0x18] < '\0');
            auVar58 = auVar58 ^ (auVar58 ^ auVar62) & auVar57;
            ppplVar31[1] = auVar51._8_8_;
            *ppplVar31 = auVar51._0_8_;
            ppplVar31[3] = auVar58._8_8_;
            ppplVar31[2] = auVar58._0_8_;
            pcVar36 = pcVar36 + 0x60;
            lVar37 = lVar37 + 4;
            ppplVar31 = ppplVar31 + 4;
          } while (lVar37 != 0);
        }
LAB_104c41ba4:
        lVar37 = uVar34 - lVar27;
        ppplVar28 = ppplVar28 + lVar27 * 3;
        ppplVar31 = ppplVar24 + lVar27;
        do {
          ppplVar2 = (long ***)*ppplVar28;
          if (-1 < *(char *)((long)ppplVar28 + 0x17)) {
            ppplVar2 = ppplVar28;
          }
          *ppplVar31 = (long **)ppplVar2;
          ppplVar28 = ppplVar28 + 3;
          lVar37 = lVar37 + -1;
          ppplVar31 = ppplVar31 + 1;
        } while (lVar37 != 0);
      }
      *(int *)(puVar22 + 8) = (int)((ulong)((long)pppplVar20[1] - (long)ppplVar24) >> 3);
      puVar22[7] = ppplVar24;
      lVar45 = lVar45 + 1;
      puVar23 = puVar23 + 0xa0;
    } while (puVar23 != puVar17);
  }
  puVar41 = puStack_a0;
  puVar47 = puStack_a8;
  iStack_1f0 = (int)((ulong)((long)puStack_138 - (long)puStack_140) >> 3) * 0x38e38e39;
  pppplStack_238 = (long ****)0x0;
  pppplStack_230 = (long ****)0x0;
  pppplStack_240 = (long ****)0x0;
  puStack_1f8 = puStack_140;
  if ((long)puStack_a0 - (long)puStack_a8 == 0) {
    puStack_200 = (undefined8 *)0x0;
    puStack_208 = (undefined8 *)0x0;
    puStack_210 = (undefined8 *)0x0;
    puStack_218 = (undefined8 *)0x0;
    puStack_220 = (undefined8 *)0x0;
    puStack_228 = (undefined8 *)0x0;
  }
  else {
    lVar45 = (long)puStack_a0 - (long)puStack_a8 >> 3;
    if (0xaaaaaaaaaaaaaaa < (ulong)(lVar45 * 0x6db6db6db6db6db7)) {
      func_0x000104c43298();
LAB_104c42478:
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x104c4247c);
      (*pcVar18)();
    }
    pppplVar20 = (long ****)(lVar45 * 0x4924924924924928);
    __Znwm();
    pppplStack_230 = pppplVar20 + lVar45 * 0x924924924924925;
    pppplStack_240 = pppplVar20;
    _bzero();
    pppplStack_238 =
         pppplVar20 + ((ulong)((long ****)(lVar45 * 0x4924924924924928) + -3) / 0x18) * 3 + 3;
    puVar42 = (undefined8 *)(lVar45 * -0x2492492492492490);
    puVar22 = puVar42;
    __Znwm();
    puStack_218 = puVar22 + lVar45 * -0x492492492492492;
    puStack_220 = puVar22 + lVar45 * -0x492492492492492;
    puVar38 = puVar22;
    if (puVar42 + -2 < (undefined8 *)0x30) {
LAB_104c420dc:
      do {
        puVar32 = puVar38 + 2;
        *puVar38 = "";
        puVar38[1] = 0;
        puVar38 = puVar32;
      } while (puVar32 != puStack_220);
    }
    else {
      uVar33 = ((ulong)(puVar42 + -2) >> 4) + 1;
      uVar35 = uVar33 & 0x1ffffffffffffffc;
      puVar38 = puVar22 + 4;
      uVar34 = uVar35;
      do {
        puVar38[-3] = 0;
        puVar38[-4] = "";
        puVar38[-1] = 0;
        puVar38[-2] = "";
        puVar38[1] = 0;
        *puVar38 = "";
        puVar38[3] = 0;
        puVar38[2] = "";
        uVar34 = uVar34 - 4;
        puVar38 = puVar38 + 8;
      } while (uVar34 != 0);
      puVar38 = puVar22 + uVar35 * 2;
      if (uVar33 != uVar35) goto LAB_104c420dc;
    }
    puStack_228 = puVar22;
    __Znwm();
    puStack_200 = puVar42 + lVar45 * -0x492492492492492;
    puStack_210 = puVar42;
    _bzero();
    iVar48 = 0;
    pppplStack_250 = (long ****)0x0;
    iStack_248 = 0;
    puStack_208 = puVar42 + lVar45 * -0x492492492492492;
    do {
      pppplVar20 = pppplStack_240 + (long)iVar48 * 3;
      *(undefined4 *)pppplVar20 = *puVar47;
      ppplVar28 = (long ***)(puStack_228 + (long)iVar48 * 2);
      pppplVar20[2] = ppplVar28;
      pplVar29 = (long **)(puVar47 + 6);
      if (*(char *)((long)puVar47 + 0x2f) < '\0') {
        pplVar29 = (long **)*pplVar29;
      }
      *ppplVar28 = pplVar29;
      *(uint *)(ppplVar28 + 1) = (uint)*(byte *)(puVar47 + 0xc);
      puVar22 = *(undefined8 **)(puVar47 + 2);
      (**(code **)*puVar22)();
      if ((int)puVar22 == 0) {
        pppplVar20[1] = (long ***)(puStack_210 + (long)iVar48 * 2);
        lVar45 = *(long *)(puVar47 + 2);
        ___dynamic_cast(lVar45,&PTR_DAT_1107ebbf0,&PTR_DAT_1107ebc00,0);
        plVar44 = *(long **)(puVar47 + 4);
        if (plVar44 != (long *)0x0) {
          plVar1 = plVar44 + 1;
          do {
            cVar52 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar52 = ExclusiveMonitorsStatus();
            }
          } while (cVar52 != '\0');
        }
        pplVar29 = (long **)(lVar45 + 0x10);
        if (*(char *)(lVar45 + 0x27) < '\0') {
          pplVar29 = (long **)*pplVar29;
        }
        pppplVar20[1][1] = pplVar29;
        if (plVar44 != (long *)0x0) {
          plVar1 = plVar44 + 1;
          do {
            lVar45 = *plVar1;
            cVar52 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar45 + -1;
              cVar52 = ExclusiveMonitorsStatus();
            }
          } while (cVar52 != '\0');
          if (lVar45 == 0) {
            (**(code **)(*plVar44 + 0x10))(plVar44);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar44);
          }
        }
        lVar45 = *(long *)(puVar47 + 2);
        ___dynamic_cast(lVar45,&PTR_DAT_1107ebbf0,&PTR_DAT_1107ebc00,0);
        plVar44 = *(long **)(puVar47 + 4);
        if (plVar44 == (long *)0x0) {
          *(undefined4 *)pppplVar20[1] = *(undefined4 *)(lVar45 + 0x28);
        }
        else {
          plVar1 = plVar44 + 1;
          do {
            cVar52 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar52 = ExclusiveMonitorsStatus();
            }
          } while (cVar52 != '\0');
          *(undefined4 *)pppplVar20[1] = *(undefined4 *)(lVar45 + 0x28);
          do {
            lVar45 = *plVar1;
            cVar52 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar45 + -1;
              cVar52 = ExclusiveMonitorsStatus();
            }
          } while (cVar52 != '\0');
          if (lVar45 == 0) {
            (**(code **)(*plVar44 + 0x10))(plVar44);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar44);
          }
        }
        iVar48 = iVar48 + 1;
      }
      puVar47 = puVar47 + 0xe;
    } while (puVar47 != puVar41);
  }
  pppplVar20 = pppplStack_240;
  iStack_248 = (int)((ulong)((long)pppplStack_238 - (long)pppplStack_240) >> 3) * -0x55555555;
  pppplStack_250 = pppplStack_240;
  (*(code *)param_1[3])
            (&pppplStack_c0,&puStack_1f8,&pppplStack_250,bVar46 & 1,&uStack_1e8,param_1[7]);
  if (puStack_210 != (undefined8 *)0x0) {
    puStack_208 = puStack_210;
    __ZdlPv();
  }
  if (puStack_228 != (undefined8 *)0x0) {
    puStack_220 = puStack_228;
    __ZdlPv();
  }
  if (pppplVar20 != (long ****)0x0) {
    __ZdlPv(pppplVar20);
  }
  pppplVar20 = pppplStack_110;
  pppplVar40 = pppplStack_108;
  if (pppplStack_110 != (long ****)0x0) {
    while (pppplVar26 = pppplVar40, pppplVar20 != pppplVar26) {
      pppplVar40 = pppplVar26 + -3;
      if (*pppplVar40 != (long ***)0x0) {
        pppplVar26[-2] = *pppplVar40;
        __ZdlPv();
      }
    }
    pppplStack_108 = pppplVar20;
    __ZdlPv(pppplStack_110);
  }
  pppplVar20 = pppplStack_128;
  pppplVar40 = pppplStack_120;
  if (pppplStack_128 != (long ****)0x0) {
    while (pppplVar26 = pppplVar40, pppplVar20 != pppplVar26) {
      pppplVar40 = pppplVar26 + -3;
      if (*pppplVar40 != (long ***)0x0) {
        pppplVar26[-2] = *pppplVar40;
        __ZdlPv();
      }
    }
    pppplStack_120 = pppplVar20;
    __ZdlPv(pppplStack_128);
  }
  if (puStack_140 != (undefined8 *)0x0) {
    puStack_138 = puStack_140;
    __ZdlPv();
  }
  *(double *)(param_1[5] + 200) = dVar71;
joined_r0x000104c41ef4:
  if ((long)uStack_1c8 < 0) {
    __ZdlPv(pppppppuStack_1d8);
  }
  puVar47 = puStack_a8;
  puVar17 = puStack_90;
  puVar23 = puStack_88;
  if (puStack_a8 != (undefined4 *)0x0) {
    puVar41 = puStack_a0;
    if (puStack_a8 == puStack_a0) {
      __ZdlPv(puStack_a8);
      puVar17 = puStack_90;
      puVar23 = puStack_88;
    }
    else {
      do {
        plVar44 = *(long **)(puVar41 + -10);
        if (plVar44 != (long *)0x0) {
          plVar1 = plVar44 + 1;
          do {
            lVar45 = *plVar1;
            cVar52 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar45 + -1;
              cVar52 = ExclusiveMonitorsStatus();
            }
          } while (cVar52 != '\0');
          if (lVar45 == 0) {
            (**(code **)(*plVar44 + 0x10))(plVar44);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar44);
          }
        }
        puVar41 = puVar41 + -0xe;
      } while (puVar47 != puVar41);
      __ZdlPv(puStack_a8);
      puVar17 = puStack_90;
      puVar23 = puStack_88;
    }
  }
  puStack_90 = puVar17;
  if (puVar17 != (undefined1 *)0x0) {
    while (puVar17 != puVar23) {
      puVar23 = puVar23 + -0xa0;
      func_0x000104c35148();
    }
    __ZdlPv(puStack_90);
  }
  return;
}



/* Entry: 104c4260c; end: 104c4265b;  */

long * FUN_104c4260c(long *param_1)

{
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c4265c; end: 104c427df;  */

long * FUN_104c4265c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[6];
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[7];
    plVar1 = plVar3;
    if (plVar3 != plVar2) {
      do {
        plVar1 = plVar2 + -3;
        if (*plVar1 != 0) {
          plVar2[-2] = *plVar1;
          __ZdlPv();
        }
        plVar2 = plVar1;
      } while (plVar1 != plVar3);
      plVar1 = (long *)param_1[6];
    }
    param_1[7] = (long)plVar3;
    __ZdlPv(plVar1);
  }
  plVar3 = (long *)param_1[3];
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[4];
    plVar1 = plVar3;
    if (plVar3 != plVar2) {
      do {
        plVar1 = plVar2 + -3;
        if (*plVar1 != 0) {
          plVar2[-2] = *plVar1;
          __ZdlPv();
        }
        plVar2 = plVar1;
      } while (plVar1 != plVar3);
      plVar1 = (long *)param_1[3];
    }
    param_1[4] = (long)plVar3;
    __ZdlPv(plVar1);
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c427e0; end: 104c427e3;  */

void FUN_104c427e0(void)

{
  return;
}



/* Entry: 104c427e4; end: 104c42a13;  */

/* WARNING: Removing unreachable block (ram,0x000104c42888) */
/* WARNING: Type propagation algorithm not settling */

void FUN_104c427e4(long param_1,undefined8 param_2,int *param_3)

{
  undefined ********ppppppppuVar1;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined ********ppppppppuStack_78;
  long lStack_70;
  undefined ********ppppppppuStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  FUN_104c4bb14();
  lStack_50 = 0;
  uStack_48 = 0;
  ppppppppuStack_60 = (undefined ********)&PTR_FUN_1107eb688;
  lStack_58 = 0;
  uStack_40 = 7;
  ppppppppuVar1 = (undefined ********)&ppppppppuStack_60;
  FUN_104c37260(ppppppppuVar1,4);
  (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,ppppppppuVar1,1);
  ppppppppuStack_60 = (undefined ********)&PTR_DAT_1107eb6f0;
  if (lStack_58 != 0) {
    for (; lStack_58 != lStack_50; lStack_50 = lStack_50 + -0x18) {
    }
    lStack_50 = lStack_58;
    __ZdlPv(lStack_58);
  }
  ppppppppuStack_60 = (undefined ********)0x0;
  lStack_58 = 0;
  lStack_50 = 0;
  if (*param_3 == 7) {
    func_0x000100042ef0(&ppppppppuStack_60,
                        "Please login to MyLenses to activate Speech Recognition. If you already logged-in, please logout from MyLenses (from the top menu: MyLenses -> Log Out) and login again"
                       );
  }
  else {
    if (*(char *)((long)param_3 + 0x1f) < '\0') {
      func_0x000100033dac(&uStack_80,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
      if (lStack_50 < 0) {
        __ZdlPv(ppppppppuStack_60);
      }
    }
    else {
      ppppppppuStack_78 = *(undefined *********)(param_3 + 4);
      uStack_80 = *(undefined *********)(param_3 + 2);
      lStack_70 = *(long *)(param_3 + 6);
    }
    lStack_58 = (long)ppppppppuStack_78;
    ppppppppuStack_60 = uStack_80;
    lStack_50 = lStack_70;
  }
  uStack_80 = (undefined ********)CONCAT44(*param_3,1);
  ppppppppuStack_78 = ppppppppuStack_60;
  if (-1 < lStack_50) {
    ppppppppuStack_78 = (undefined ********)&ppppppppuStack_60;
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    if (*(int *)(param_1 + 0x20) == 1) {
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      (**(code **)(param_1 + 0x18))
                ("",&uStack_90,&uStack_a0,0,&uStack_80,*(undefined8 *)(param_1 + 0x38));
    }
    else if (*(int *)(param_1 + 0x20) == 0) {
      (**(code **)(param_1 + 0x10))("",0,&uStack_80,*(undefined8 *)(param_1 + 0x38));
    }
  }
  if (-1 < lStack_50) {
    return;
  }
  __ZdlPv(ppppppppuStack_60);
  return;
}



/* Entry: 104c42a14; end: 104c42a17;  */

void FUN_104c42a14(void)

{
  return;
}



/* Entry: 104c42a18; end: 104c42c27;  */

/* WARNING: Removing unreachable block (ram,0x000104c42b44) */
/* WARNING: Removing unreachable block (ram,0x000104c42bd0) */

void FUN_104c42a18(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined ***pppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined **ppuStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar8 = *(long *)(param_2 + 0x28);
  lVar10 = *(long *)(lVar8 + 0xb8) + 1;
  lVar9 = *(long *)(lVar8 + 0xd8);
  dVar13 = (double)NEON_ucvtf(*(undefined8 *)(lVar8 + 0xc0));
  dVar12 = param_1 * 88200.0 - dVar13;
  dVar13 = param_1 * 88200.0 + dVar13;
  do {
    dVar14 = *(double *)(lVar9 + lVar10 * 0x20);
    bVar3 = true;
    bVar6 = false;
    if (dVar14 != 0.0) {
      bVar3 = false;
      bVar6 = true;
      if (!NAN(dVar14) && !NAN(dVar12)) {
        bVar3 = dVar14 < dVar12;
        bVar6 = false;
      }
    }
    bVar4 = false;
    bVar5 = true;
    if (bVar3 == bVar6) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(dVar14) && !NAN(dVar13)) {
        bVar4 = dVar14 == dVar13;
        bVar5 = dVar13 <= dVar14;
      }
    }
    if (!bVar5 || bVar4) {
      *(long *)(lVar8 + 0xb8) = lVar10;
      lVar9 = lVar9 + lVar10 * 0x20;
      lVar10 = *(long *)(lVar9 + 8);
      if ((*(byte *)(lVar9 + 0x18) & 1) != 0) {
        lVar9 = *(long *)(lVar9 + 0x10);
        __ZNSt3__16chrono12steady_clock3nowEv();
        lVar10 = (lVar10 - lVar9) + param_2;
      }
      goto LAB_104c42ac8;
    }
    uVar11 = *(long *)(lVar8 + 0xe8) - lVar9 >> 5;
    uVar1 = lVar10 + uVar11 + 1;
    uVar2 = 0;
    if (uVar11 != 0) {
      uVar2 = uVar1 / uVar11;
    }
    lVar10 = uVar1 - uVar2 * uVar11;
  } while (lVar10 != *(long *)(lVar8 + 0xb8));
  lVar10 = 0;
LAB_104c42ac8:
  FUN_104c4bb14();
  lStack_58 = 0;
  uStack_50 = 0;
  ppuStack_68 = &PTR_FUN_1107eb688;
  lStack_60 = 0;
  uStack_48 = 2;
  (**(code **)*plRam0000000113817ca0)(plRam0000000113817ca0,&ppuStack_68,lVar10);
  ppuStack_68 = &PTR_DAT_1107eb6f0;
  if (lStack_60 != 0) {
    for (; lStack_60 != lStack_58; lStack_58 = lStack_58 + -0x18) {
    }
    lStack_58 = lStack_60;
    __ZdlPv(lStack_60);
  }
  FUN_104c4bb14();
  lStack_58 = 0;
  uStack_50 = 0;
  ppuStack_68 = &PTR_FUN_1107eb688;
  lStack_60 = 0;
  uStack_48 = 2;
  pppuVar7 = &ppuStack_68;
  FUN_104c37260(pppuVar7,0);
  (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,pppuVar7,1);
  ppuStack_68 = &PTR_DAT_1107eb6f0;
  if (lStack_60 != 0) {
    for (; lStack_60 != lStack_58; lStack_58 = lStack_58 + -0x18) {
    }
    lStack_58 = lStack_60;
    __ZdlPv(lStack_60);
  }
  return;
}



/* Entry: 104c42c28; end: 104c42d07;  */

undefined8 * FUN_104c42c28(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_1107ebb68;
  plVar5 = (long *)param_1[6];
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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c42d08; end: 104c42d17;  */

void FUN_104c42d08(void)

{
  return;
}



/* Entry: 104c42d18; end: 104c42f23;  */

/* WARNING: Removing unreachable block (ram,0x000104c42e84) */

long * FUN_104c42d18(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  
  pbVar7 = (byte *)param_1[0xc];
  if (pbVar7 != (byte *)0x0) {
    pbVar5 = pbVar7;
    if (pbVar7 != (byte *)param_1[0xd]) {
      pbVar5 = (byte *)param_1[0xd] + -0x20;
      do {
        if ((*pbVar5 & 1) != 0) {
          func_0x0001053936ac(pbVar5);
        }
        puVar4 = (undefined8 *)(*(ulong *)(pbVar5 + 8) ^ 2);
        puVar1 = puVar4;
        if (((ulong)puVar4 & 3) != 0) {
          puVar1 = (undefined8 *)0x0;
        }
        if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar4 + 0x17) < '\0')) {
          __ZdlPv(*puVar4);
        }
        __ZdlPv(puVar1);
        pbVar3 = pbVar5 + -8;
        pbVar5 = pbVar5 + -0x28;
      } while (pbVar3 != pbVar7);
      pbVar5 = (byte *)param_1[0xc];
    }
    param_1[0xd] = (long)pbVar7;
    __ZdlPv(pbVar5);
  }
  pbVar7 = (byte *)param_1[9];
  if (pbVar7 != (byte *)0x0) {
    pbVar5 = pbVar7;
    if (pbVar7 != (byte *)param_1[10]) {
      pbVar5 = (byte *)param_1[10] + -0x20;
      do {
        if ((*pbVar5 & 1) != 0) {
          func_0x0001053936ac(pbVar5);
        }
        puVar4 = (undefined8 *)(*(ulong *)(pbVar5 + 8) ^ 2);
        puVar1 = puVar4;
        if (((ulong)puVar4 & 3) != 0) {
          puVar1 = (undefined8 *)0x0;
        }
        if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar4 + 0x17) < '\0')) {
          __ZdlPv(*puVar4);
        }
        __ZdlPv(puVar1);
        pbVar3 = pbVar5 + -8;
        pbVar5 = pbVar5 + -0x28;
      } while (pbVar3 != pbVar7);
      pbVar5 = (byte *)param_1[9];
    }
    param_1[10] = (long)pbVar7;
    __ZdlPv(pbVar5);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  lVar6 = *param_1;
  if (lVar6 != 0) {
    lVar8 = param_1[1];
    lVar2 = lVar6;
    if (lVar6 != lVar8) {
      do {
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != lVar6);
      lVar2 = *param_1;
    }
    param_1[1] = lVar6;
    __ZdlPv(lVar2);
  }
  return param_1;
}



/* Entry: 104c42f24; end: 104c42f37;  */

undefined8 * FUN_104c42f24(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_104bd47e8();
  if ((*(byte *)(puVar1 + 1) & 1) == 0) {
    puVar4 = (undefined8 *)*puVar1;
    plVar5 = (long *)*puVar4;
    if (plVar5 != (long *)0x0) {
      plVar3 = (long *)puVar4[1];
      plVar2 = plVar5;
      if (plVar5 != plVar3) {
        do {
          plVar2 = plVar3 + -3;
          if (*plVar2 != 0) {
            plVar3[-2] = *plVar2;
            __ZdlPv();
          }
          plVar3 = plVar2;
        } while (plVar2 != plVar5);
        plVar2 = *(long **)*puVar1;
      }
      puVar4[1] = plVar5;
      __ZdlPv(plVar2);
    }
  }
  return puVar1;
}



/* Entry: 104c42f38; end: 104c4303f;  */

undefined8 * FUN_104c42f38(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar3 = (undefined8 *)*param_1;
    plVar4 = (long *)*puVar3;
    if (plVar4 != (long *)0x0) {
      plVar2 = (long *)puVar3[1];
      plVar1 = plVar4;
      if (plVar4 != plVar2) {
        do {
          plVar1 = plVar2 + -3;
          if (*plVar1 != 0) {
            plVar2[-2] = *plVar1;
            __ZdlPv();
          }
          plVar2 = plVar1;
        } while (plVar1 != plVar4);
        plVar1 = *(long **)*param_1;
      }
      puVar3[1] = plVar4;
      __ZdlPv(plVar1);
    }
  }
  return param_1;
}



/* Entry: 104c43040; end: 104c43157;  */

void FUN_104c43040(long *param_1,ulong param_2,undefined4 *param_3)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  lVar10 = param_1[1];
  if (param_2 <= (ulong)(param_1[2] - lVar10 >> 4)) {
    if (param_2 != 0) {
      lVar10 = lVar10 + param_2 * 0x10;
      _bzero();
    }
    param_1[1] = lVar10;
    return;
  }
  lVar9 = *param_1;
  lVar10 = lVar10 - lVar9;
  uVar1 = (lVar10 >> 4) + param_2;
  if (uVar1 >> 0x3c == 0) {
    uVar7 = param_1[2] - lVar9;
    uVar8 = (long)uVar7 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar8 >> 0x3c != 0) goto LAB_104c43154;
      lVar4 = uVar8 << 4;
      __Znwm();
    }
    lVar2 = lVar4 + lVar10;
    _bzero(lVar2);
    lVar11 = lVar2 + (lVar10 >> 4) * -0x10;
    _memcpy(lVar11,lVar9,lVar10);
    *param_1 = lVar11;
    param_1[1] = lVar2 + param_2 * 0x10;
    param_1[2] = lVar4 + uVar8 * 0x10;
    if (lVar9 == 0) {
      return;
    }
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar9);
    return;
  }
  FUN_104c43158();
LAB_104c43154:
  FUN_104bd35f4();
  pcStack_58 = FUN_104c43158;
  plVar5 = (long *)&DAT_10f62a4d8;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_104bd47e8();
  pcStack_68 = FUN_104c4316c;
  lVar10 = plVar5[1];
  if ((ulong)(plVar5[2] - lVar10 >> 3) < param_2) {
    lVar9 = *plVar5;
    lVar10 = lVar10 - lVar9;
    uVar1 = (lVar10 >> 3) + param_2;
    if (uVar1 >> 0x3d != 0) {
      puStack_70 = (undefined1 *)&puStack_60;
      FUN_104c43284();
LAB_104c43280:
      FUN_104bd35f4();
      pcStack_b8 = FUN_104c43284;
      ppuStack_c0 = &puStack_70;
      FUN_104bd47e8(&DAT_10f62a4d8);
      uStack_c8 = 0x104c43298;
      puVar6 = &DAT_10f62a4d8;
      puStack_d0 = (undefined1 *)&ppuStack_c0;
      FUN_104bd47e8();
      pcStack_d8 = FUN_104c432ac;
      puVar6[0x40] = 1;
      *(undefined4 *)(puVar6 + 0x44) = *param_3;
      lStack_f0 = lVar9;
      plStack_e8 = plVar5;
      if (*(char *)((long)param_3 + 0x1f) < '\0') {
        puStack_e0 = (undefined1 *)&puStack_d0;
        func_0x000100033dac(&uStack_110,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
        cVar3 = puVar6[0x5f];
      }
      else {
        uStack_108 = *(undefined8 *)(param_3 + 4);
        uStack_110 = *(undefined8 *)(param_3 + 2);
        uStack_100 = *(undefined8 *)(param_3 + 6);
        cVar3 = puVar6[0x5f];
        puStack_e0 = (undefined1 *)&puStack_d0;
      }
      if (cVar3 < '\0') {
        __ZdlPv(*(undefined8 *)(puVar6 + 0x48));
      }
      *(undefined8 *)(puVar6 + 0x50) = uStack_108;
      *(undefined8 *)(puVar6 + 0x48) = uStack_110;
      *(undefined8 *)(puVar6 + 0x58) = uStack_100;
      __ZNSt3__17promiseIvE9set_valueEv(puVar6 + 8);
      return;
    }
    uVar7 = plVar5[2] - lVar9;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      lVar4 = 0;
      puStack_70 = (undefined1 *)&puStack_60;
    }
    else {
      puStack_70 = (undefined1 *)&puStack_60;
      if (uVar8 >> 0x3d != 0) goto LAB_104c43280;
      lVar4 = uVar8 << 3;
      puStack_70 = (undefined1 *)&puStack_60;
      __Znwm();
    }
    lVar2 = lVar4 + lVar10;
    _bzero(lVar2);
    lVar11 = lVar2 + (lVar10 >> 3) * -8;
    _memcpy(lVar11,lVar9,lVar10);
    *plVar5 = lVar11;
    plVar5[1] = lVar2 + param_2 * 8;
    plVar5[2] = lVar4 + uVar8 * 8;
    if (lVar9 != 0) goto code_r0x00010bdbd7ac;
  }
  else {
    if (param_2 != 0) {
      lVar10 = lVar10 + param_2 * 8;
      puStack_70 = (undefined1 *)&puStack_60;
      _bzero();
    }
    plVar5[1] = lVar10;
  }
  return;
}



/* Entry: 104c43158; end: 104c4316b;  */

void FUN_104c43158(undefined8 param_1,ulong param_2,undefined4 *param_3)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  plVar4 = (long *)&DAT_10f62a4d8;
  FUN_104bd47e8();
  pcStack_18 = FUN_104c4316c;
  lVar10 = plVar4[1];
  if ((ulong)(plVar4[2] - lVar10 >> 3) < param_2) {
    lVar9 = *plVar4;
    lVar10 = lVar10 - lVar9;
    uVar1 = (lVar10 >> 3) + param_2;
    if (uVar1 >> 0x3d != 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      FUN_104c43284();
LAB_104c43280:
      FUN_104bd35f4();
      pcStack_68 = FUN_104c43284;
      ppuStack_70 = &puStack_20;
      FUN_104bd47e8(&DAT_10f62a4d8);
      uStack_78 = 0x104c43298;
      puVar6 = &DAT_10f62a4d8;
      puStack_80 = (undefined1 *)&ppuStack_70;
      FUN_104bd47e8();
      pcStack_88 = FUN_104c432ac;
      puVar6[0x40] = 1;
      *(undefined4 *)(puVar6 + 0x44) = *param_3;
      lStack_a0 = lVar9;
      plStack_98 = plVar4;
      if (*(char *)((long)param_3 + 0x1f) < '\0') {
        puStack_90 = (undefined1 *)&puStack_80;
        func_0x000100033dac(&uStack_c0,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
        cVar3 = puVar6[0x5f];
      }
      else {
        uStack_b8 = *(undefined8 *)(param_3 + 4);
        uStack_c0 = *(undefined8 *)(param_3 + 2);
        uStack_b0 = *(undefined8 *)(param_3 + 6);
        cVar3 = puVar6[0x5f];
        puStack_90 = (undefined1 *)&puStack_80;
      }
      if (cVar3 < '\0') {
        __ZdlPv(*(undefined8 *)(puVar6 + 0x48));
      }
      *(undefined8 *)(puVar6 + 0x50) = uStack_b8;
      *(undefined8 *)(puVar6 + 0x48) = uStack_c0;
      *(undefined8 *)(puVar6 + 0x58) = uStack_b0;
      __ZNSt3__17promiseIvE9set_valueEv(puVar6 + 8);
      return;
    }
    uVar7 = plVar4[2] - lVar9;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      lVar5 = 0;
      puStack_20 = &stack0xfffffffffffffff0;
    }
    else {
      puStack_20 = &stack0xfffffffffffffff0;
      if (uVar8 >> 0x3d != 0) goto LAB_104c43280;
      lVar5 = uVar8 << 3;
      puStack_20 = &stack0xfffffffffffffff0;
      __Znwm();
    }
    lVar2 = lVar5 + lVar10;
    _bzero(lVar2);
    lVar11 = lVar2 + (lVar10 >> 3) * -8;
    _memcpy(lVar11,lVar9,lVar10);
    *plVar4 = lVar11;
    plVar4[1] = lVar2 + param_2 * 8;
    plVar4[2] = lVar5 + uVar8 * 8;
    if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar9);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      lVar10 = lVar10 + param_2 * 8;
      puStack_20 = &stack0xfffffffffffffff0;
      _bzero();
    }
    plVar4[1] = lVar10;
  }
  return;
}



/* Entry: 104c4316c; end: 104c43283;  */

void FUN_104c4316c(long *param_1,ulong param_2,undefined4 *param_3)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  lVar9 = param_1[1];
  if ((ulong)(param_1[2] - lVar9 >> 3) < param_2) {
    lVar8 = *param_1;
    lVar9 = lVar9 - lVar8;
    uVar1 = (lVar9 >> 3) + param_2;
    if (uVar1 >> 0x3d != 0) {
      FUN_104c43284();
LAB_104c43280:
      FUN_104bd35f4();
      pcStack_58 = FUN_104c43284;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_104bd47e8(&DAT_10f62a4d8);
      uStack_68 = 0x104c43298;
      puVar5 = &DAT_10f62a4d8;
      puStack_70 = (undefined1 *)&puStack_60;
      FUN_104bd47e8();
      pcStack_78 = FUN_104c432ac;
      puVar5[0x40] = 1;
      *(undefined4 *)(puVar5 + 0x44) = *param_3;
      lStack_90 = lVar8;
      plStack_88 = param_1;
      if (*(char *)((long)param_3 + 0x1f) < '\0') {
        puStack_80 = (undefined1 *)&puStack_70;
        func_0x000100033dac(&uStack_b0,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
        cVar3 = puVar5[0x5f];
      }
      else {
        uStack_a8 = *(undefined8 *)(param_3 + 4);
        uStack_b0 = *(undefined8 *)(param_3 + 2);
        uStack_a0 = *(undefined8 *)(param_3 + 6);
        cVar3 = puVar5[0x5f];
        puStack_80 = (undefined1 *)&puStack_70;
      }
      if (cVar3 < '\0') {
        __ZdlPv(*(undefined8 *)(puVar5 + 0x48));
      }
      *(undefined8 *)(puVar5 + 0x50) = uStack_a8;
      *(undefined8 *)(puVar5 + 0x48) = uStack_b0;
      *(undefined8 *)(puVar5 + 0x58) = uStack_a0;
      __ZNSt3__17promiseIvE9set_valueEv(puVar5 + 8);
      return;
    }
    uVar6 = param_1[2] - lVar8;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_104c43280;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar2 = lVar4 + lVar9;
    _bzero(lVar2);
    lVar10 = lVar2 + (lVar9 >> 3) * -8;
    _memcpy(lVar10,lVar8,lVar9);
    *param_1 = lVar10;
    param_1[1] = lVar2 + param_2 * 8;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar8);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      lVar9 = lVar9 + param_2 * 8;
      _bzero();
    }
    param_1[1] = lVar9;
  }
  return;
}



/* Entry: 104c43284; end: 104c432ab;  */

void FUN_104c43284(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  FUN_104bd47e8(&DAT_10f62a4d8);
  puVar2 = &DAT_10f62a4d8;
  FUN_104bd47e8();
  puVar2[0x40] = 1;
  *(undefined4 *)(puVar2 + 0x44) = *param_3;
  if (*(char *)((long)param_3 + 0x1f) < '\0') {
    func_0x000100033dac(&uStack_60,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
    cVar1 = puVar2[0x5f];
  }
  else {
    uStack_58 = *(undefined8 *)(param_3 + 4);
    uStack_60 = *(undefined8 *)(param_3 + 2);
    uStack_50 = *(undefined8 *)(param_3 + 6);
    cVar1 = puVar2[0x5f];
  }
  if (cVar1 < '\0') {
    __ZdlPv(*(undefined8 *)(puVar2 + 0x48));
  }
  *(undefined8 *)(puVar2 + 0x50) = uStack_58;
  *(undefined8 *)(puVar2 + 0x48) = uStack_60;
  *(undefined8 *)(puVar2 + 0x58) = uStack_50;
  __ZNSt3__17promiseIvE9set_valueEv(puVar2 + 8);
  return;
}



/* Entry: 104c432ac; end: 104c43337;  */

void FUN_104c432ac(long param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x44) = *param_3;
  if (*(char *)((long)param_3 + 0x1f) < '\0') {
    func_0x000100033dac(&uStack_40,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
    cVar1 = *(char *)(param_1 + 0x5f);
  }
  else {
    uStack_38 = *(undefined8 *)(param_3 + 4);
    uStack_40 = *(undefined8 *)(param_3 + 2);
    uStack_30 = *(undefined8 *)(param_3 + 6);
    cVar1 = *(char *)(param_1 + 0x5f);
  }
  if (cVar1 < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  *(undefined8 *)(param_1 + 0x50) = uStack_38;
  *(undefined8 *)(param_1 + 0x48) = uStack_40;
  *(undefined8 *)(param_1 + 0x58) = uStack_30;
  __ZNSt3__17promiseIvE9set_valueEv(param_1 + 8);
  return;
}



/* Entry: 104c43338; end: 104c435ab;  */

void FUN_104c43338(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_3 + 0x18) < 1) goto LAB_104c43544;
  puVar8 = (undefined8 *)(param_1 + 0x10);
  uVar9 = *(ulong *)(param_3 + 0x10);
  puVar7 = (ulong *)(param_3 + 0x10);
  if ((uVar9 & 1) != 0) {
    puVar7 = (ulong *)(uVar9 + 7);
  }
  puVar10 = (ulong *)(*puVar7 + 0x10);
  puVar7 = puVar10;
  if ((*puVar10 & 1) != 0) {
    puVar7 = (ulong *)(*puVar10 + 7);
  }
  puVar5 = (undefined8 *)(*(ulong *)(*puVar7 + 0x28) & 0xfffffffffffffffc);
  if (puVar8 == puVar5) {
LAB_104c43404:
    FUN_104c475c8(&uStack_80,param_3 + 0x28);
    lVar11 = *(long *)(param_1 + 0x28);
  }
  else {
    bVar1 = *(byte *)((long)puVar5 + 0x17);
    if (*(char *)(param_1 + 0x27) < '\0') {
      uVar9 = puVar5[1];
      puVar3 = (undefined8 *)*puVar5;
      if (-1 < (char)bVar1) {
        uVar9 = (ulong)bVar1;
        puVar3 = puVar5;
      }
      func_0x0001006aabfc(puVar8,puVar3,uVar9);
      goto LAB_104c43404;
    }
    if ((char)bVar1 < '\0') {
      func_0x00010014884c(puVar8,*puVar5,puVar5[1]);
      FUN_104c475c8(&uStack_80,param_3 + 0x28);
      lVar11 = *(long *)(param_1 + 0x28);
    }
    else {
      uVar12 = puVar5[1];
      uVar13 = *puVar5;
      *(undefined8 *)(param_1 + 0x20) = puVar5[2];
      *(undefined8 *)(param_1 + 0x18) = uVar12;
      *puVar8 = uVar13;
      FUN_104c475c8(&uStack_80,param_3 + 0x28);
      lVar11 = *(long *)(param_1 + 0x28);
    }
  }
  if (lVar11 != 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    lVar6 = lVar11;
    if (lVar11 != lVar4) {
      do {
        lVar4 = lVar4 + -0xa0;
        func_0x000104c35148();
      } while (lVar4 != lVar11);
      lVar6 = *(long *)(param_1 + 0x28);
    }
    *(long *)(param_1 + 0x30) = lVar11;
    __ZdlPv(lVar6);
    *(long *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = uStack_78;
  *(undefined8 *)(param_1 + 0x28) = uStack_80;
  *(undefined8 *)(param_1 + 0x38) = uStack_70;
  if ((*puVar10 & 1) != 0) {
    puVar10 = (ulong *)(*puVar10 + 7);
  }
  puVar7 = (ulong *)(*puVar10 + 0x10);
  uVar9 = *puVar7;
  if ((uVar9 & 1) != 0) {
    puVar7 = (ulong *)(uVar9 + 7);
  }
  iVar2 = *(int *)(*puVar10 + 0x18);
  if (iVar2 != 0) {
    lVar11 = (long)iVar2 << 3;
    do {
      uVar13 = *(undefined8 *)(*puVar7 + 0x18);
      puVar8 = (undefined8 *)(*(ulong *)(*puVar7 + 0x10) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        func_0x000100033dac(&uStack_60,*puVar8,puVar8[1]);
      }
      else {
        uStack_58 = puVar8[1];
        uStack_60 = *puVar8;
        lStack_50 = puVar8[2];
      }
      uStack_70 = uStack_58;
      uStack_78 = uStack_60;
      lStack_68 = lStack_50;
      puVar8 = *(undefined8 **)(param_1 + 0x68);
      uStack_80 = uVar13;
      if (puVar8 < *(undefined8 **)(param_1 + 0x70)) {
        *puVar8 = uVar13;
        puVar8[3] = lStack_50;
        puVar8[2] = uStack_58;
        puVar8[1] = uStack_60;
        *(undefined8 **)(param_1 + 0x68) = puVar8 + 4;
      }
      else {
        lVar6 = param_1 + 0x60;
        FUN_104c43638(lVar6,&uStack_80);
        *(long *)(param_1 + 0x68) = lVar6;
        if (lStack_68 < 0) {
          __ZdlPv(uStack_78);
        }
      }
      puVar7 = puVar7 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
LAB_104c43544:
  __ZNSt3__17promiseIvE9set_valueEv(param_1 + 8);
  return;
}



/* Entry: 104c435ac; end: 104c4362b;  */

undefined8 * FUN_104c435ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ebc28;
  FUN_104c35a0c(param_1 + 2);
  __ZNSt3__17promiseIvED1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 104c4362c; end: 104c43637;  */

void FUN_104c4362c(void)

{
  return;
}



/* Entry: 104c43638; end: 104c43773;  */

long * FUN_104c43638(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar15 = param_1[1] - *param_1;
  uVar1 = (lVar15 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar9 = param_1[2] - *param_1;
    uVar12 = (long)uVar9 >> 4;
    if (uVar12 <= uVar1) {
      uVar12 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar9) {
      uVar12 = 0x7ffffffffffffff;
    }
    if (uVar12 >> 0x3b == 0) {
      lVar8 = uVar12 * 0x20;
      __Znwm();
      puVar3 = (undefined8 *)(lVar8 + lVar15);
      *puVar3 = *param_2;
      uVar16 = param_2[1];
      puVar3[2] = param_2[2];
      puVar3[1] = uVar16;
      puVar3[3] = param_2[3];
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      puVar14 = (undefined8 *)*param_1;
      puVar5 = (undefined8 *)param_1[1];
      puVar4 = (undefined8 *)((long)puVar3 + ((long)puVar14 - (long)puVar5));
      puVar10 = puVar4;
      puVar11 = puVar14;
      if ((long)puVar14 - (long)puVar5 != 0) {
        do {
          *puVar10 = *puVar11;
          uVar17 = puVar11[2];
          uVar16 = puVar11[1];
          puVar10[3] = puVar11[3];
          puVar10[2] = uVar17;
          puVar10[1] = uVar16;
          puVar11[2] = 0;
          puVar11[3] = 0;
          puVar11[1] = 0;
          puVar11 = puVar11 + 4;
          puVar10 = puVar10 + 4;
        } while (puVar11 != puVar5);
        do {
          if (*(char *)((long)puVar14 + 0x1f) < '\0') {
            __ZdlPv(puVar14[1]);
          }
          puVar14 = puVar14 + 4;
        } while (puVar14 != puVar5);
        puVar14 = (undefined8 *)*param_1;
      }
      *param_1 = (long)puVar4;
      param_1[1] = (long)(puVar3 + 4);
      param_1[2] = lVar8 + uVar12 * 0x20;
      if (puVar14 != (undefined8 *)0x0) {
        __ZdlPv(puVar14);
      }
      return puVar3 + 4;
    }
  }
  else {
    FUN_104c39474();
  }
  FUN_104bd35f4();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    plVar2 = plVar13 + 1;
    do {
      lVar15 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c43774; end: 104c4383b;  */

long FUN_104c43774(long param_1)

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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c4383c; end: 104c43cf7;  */

/* WARNING: Removing unreachable block (ram,0x000104c43b50) */

void FUN_104c4383c(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined **ppuStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  cVar2 = *(char *)(param_2 + 0x28);
  plVar15 = (long *)(param_1 + 0x28);
  if (*plVar15 == *(long *)(param_1 + 0x30)) {
    FUN_104c44260(plVar15,1);
    puVar8 = (undefined8 *)*plVar15;
    if (*(char *)((long)puVar8 + 0x17) < '\0') {
      puVar8[1] = 0;
      *(undefined1 *)*puVar8 = 0;
      cVar4 = *(char *)(param_1 + 0x6f);
      goto joined_r0x000104c438e4;
    }
    *(undefined1 *)((long)puVar8 + 0x17) = 0;
    *(undefined1 *)puVar8 = 0;
    if (*(char *)(param_1 + 0x6f) < '\0') goto LAB_104c438e8;
LAB_104c43884:
    *(undefined1 *)(param_1 + 0x6f) = 0;
    *(undefined1 *)(param_1 + 0x58) = 0;
    pbVar7 = *(byte **)(param_1 + 0x88);
    pbVar18 = *(byte **)(param_1 + 0x90);
    if (pbVar7 != pbVar18) {
LAB_104c43904:
      pbVar18 = pbVar18 + -0x20;
      do {
        if ((*pbVar18 & 1) != 0) {
          func_0x0001053936ac(pbVar18);
        }
        puVar10 = (undefined8 *)(*(ulong *)(pbVar18 + 8) ^ 2);
        puVar8 = puVar10;
        if (((ulong)puVar10 & 3) != 0) {
          puVar8 = (undefined8 *)0x0;
        }
        if ((puVar8 != (undefined8 *)0x0) && (*(char *)((long)puVar10 + 0x17) < '\0')) {
          __ZdlPv(*puVar10);
        }
        __ZdlPv(puVar8);
        pbVar11 = pbVar18 + -8;
        pbVar18 = pbVar18 + -0x28;
      } while (pbVar11 != pbVar7);
    }
  }
  else {
    cVar4 = *(char *)(param_1 + 0x6f);
joined_r0x000104c438e4:
    if (-1 < cVar4) goto LAB_104c43884;
LAB_104c438e8:
    *(undefined8 *)(param_1 + 0x60) = 0;
    **(undefined1 **)(param_1 + 0x58) = 0;
    pbVar7 = *(byte **)(param_1 + 0x88);
    pbVar18 = *(byte **)(param_1 + 0x90);
    if (pbVar7 != pbVar18) goto LAB_104c43904;
  }
  puVar8 = (undefined8 *)(param_1 + 0x58);
  *(byte **)(param_1 + 0x90) = pbVar7;
  if (cVar2 != '\0') {
    if (*(int *)(param_2 + 0x18) != 1) {
      FUN_104c4bb14();
      lStack_78 = 0;
      uStack_70 = 0;
      ppuStack_88 = &PTR_FUN_1107eb688;
      lStack_80 = 0;
      uStack_68 = 6;
      pppuVar6 = &ppuStack_88;
      FUN_104c37260(pppuVar6,3);
      (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,pppuVar6,1);
      ppuStack_88 = &PTR_DAT_1107eb6f0;
      if (lStack_80 == 0) {
        return;
      }
      for (; lStack_80 != lStack_78; lStack_78 = lStack_78 + -0x18) {
      }
      lStack_78 = lStack_80;
      __ZdlPv(lStack_80);
      return;
    }
    puVar13 = (ulong *)(param_2 + 0x10);
    puVar1 = puVar13;
    if ((*puVar13 & 1) != 0) {
      puVar1 = (ulong *)(*puVar13 + 7);
    }
    FUN_104c43cf8(plVar15,*(undefined8 *)(param_1 + 0x28),
                  *(ulong *)(*puVar1 + 0x28) & 0xfffffffffffffffc);
    puVar1 = puVar13;
    if ((*puVar13 & 1) != 0) {
      puVar1 = (ulong *)(*puVar13 + 7);
    }
    ppuStack_88 = (undefined **)CONCAT44(ppuStack_88._4_4_,*(undefined4 *)(*puVar1 + 0x30));
    FUN_104c43fb8((undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x40),&ppuStack_88);
    puVar1 = puVar13;
    if ((*puVar13 & 1) != 0) {
      puVar1 = (ulong *)(*puVar13 + 7);
    }
    uVar9 = *puVar1;
    if (*(int *)(uVar9 + 0x18) < 1) {
      return;
    }
    lVar16 = 0;
    uVar14 = *(ulong *)(param_1 + 0x78);
    lVar17 = 8;
    do {
      uVar12 = *(ulong *)(uVar9 + 0x10);
      puVar1 = (ulong *)(uVar9 + 0x10);
      if ((uVar12 & 1) != 0) {
        puVar1 = (ulong *)(uVar12 + lVar17 + -1);
      }
      if (uVar14 < *(ulong *)(param_1 + 0x80)) {
        func_0x00010adee978(uVar14,0);
        uVar14 = uVar14 + 0x28;
        *(ulong *)(param_1 + 0x78) = uVar14;
      }
      else {
        uVar14 = param_1 + 0x70;
        FUN_104c443f0(uVar14,*puVar1);
      }
      *(ulong *)(param_1 + 0x78) = uVar14;
      lVar16 = lVar16 + 1;
      puVar1 = puVar13;
      if ((*puVar13 & 1) != 0) {
        puVar1 = (ulong *)(*puVar13 + 7);
      }
      uVar9 = *puVar1;
      lVar17 = lVar17 + 8;
    } while (lVar16 < *(int *)(uVar9 + 0x18));
    return;
  }
  puVar13 = (ulong *)(param_2 + 0x10);
  puVar1 = puVar13;
  if ((*puVar13 & 1) != 0) {
    puVar1 = (ulong *)(*puVar13 + 7);
  }
  puVar10 = (undefined8 *)(*(ulong *)(*puVar1 + 0x28) & 0xfffffffffffffffc);
  if (puVar8 == puVar10) {
LAB_104c43b78:
    pbVar7 = *(byte **)(param_1 + 0x88);
    pbVar18 = *(byte **)(param_1 + 0x90);
    if (pbVar7 == pbVar18) goto LAB_104c43c0c;
  }
  else {
    bVar3 = *(byte *)((long)puVar10 + 0x17);
    if (*(char *)(param_1 + 0x6f) < '\0') {
      uVar9 = puVar10[1];
      puVar5 = (undefined8 *)*puVar10;
      if (-1 < (char)bVar3) {
        uVar9 = (ulong)bVar3;
        puVar5 = puVar10;
      }
      func_0x0001006aabfc(puVar8,puVar5,uVar9);
      goto LAB_104c43b78;
    }
    if ((char)bVar3 < '\0') {
      func_0x00010014884c(puVar8,*puVar10,puVar10[1]);
      pbVar7 = *(byte **)(param_1 + 0x88);
      pbVar18 = *(byte **)(param_1 + 0x90);
      if (pbVar7 == pbVar18) goto LAB_104c43c0c;
    }
    else {
      uVar20 = puVar10[1];
      uVar19 = *puVar10;
      *(undefined8 *)(param_1 + 0x68) = puVar10[2];
      *(undefined8 *)(param_1 + 0x60) = uVar20;
      *puVar8 = uVar19;
      pbVar7 = *(byte **)(param_1 + 0x88);
      pbVar18 = *(byte **)(param_1 + 0x90);
      if (pbVar7 == pbVar18) goto LAB_104c43c0c;
    }
  }
  pbVar18 = pbVar18 + -0x20;
  do {
    if ((*pbVar18 & 1) != 0) {
      func_0x0001053936ac(pbVar18);
    }
    puVar10 = (undefined8 *)(*(ulong *)(pbVar18 + 8) ^ 2);
    puVar8 = puVar10;
    if (((ulong)puVar10 & 3) != 0) {
      puVar8 = (undefined8 *)0x0;
    }
    if ((puVar8 != (undefined8 *)0x0) && (*(char *)((long)puVar10 + 0x17) < '\0')) {
      __ZdlPv(*puVar10);
    }
    __ZdlPv(puVar8);
    pbVar11 = pbVar18 + -8;
    pbVar18 = pbVar18 + -0x28;
  } while (pbVar11 != pbVar7);
LAB_104c43c0c:
  *(byte **)(param_1 + 0x90) = pbVar7;
  puVar1 = puVar13;
  if ((*puVar13 & 1) != 0) {
    puVar1 = (ulong *)(*puVar13 + 7);
  }
  uVar9 = *puVar1;
  if (0 < *(int *)(uVar9 + 0x18)) {
    lVar16 = 0;
    lVar17 = 8;
    do {
      uVar14 = *(ulong *)(uVar9 + 0x10);
      puVar1 = (ulong *)(uVar9 + 0x10);
      if ((uVar14 & 1) != 0) {
        puVar1 = (ulong *)(uVar14 + lVar17 + -1);
      }
      if (pbVar7 < *(byte **)(param_1 + 0x98)) {
        func_0x00010adee978(pbVar7,0);
        pbVar7 = pbVar7 + 0x28;
        *(byte **)(param_1 + 0x90) = pbVar7;
      }
      else {
        pbVar7 = (byte *)(param_1 + 0x88);
        FUN_104c443f0((byte *)(param_1 + 0x88),*puVar1);
      }
      *(byte **)(param_1 + 0x90) = pbVar7;
      lVar16 = lVar16 + 1;
      puVar1 = puVar13;
      if ((*puVar13 & 1) != 0) {
        puVar1 = (ulong *)(*puVar13 + 7);
      }
      uVar9 = *puVar1;
      lVar17 = lVar17 + 8;
    } while (lVar16 < *(int *)(uVar9 + 0x18));
  }
  return;
}



/* Entry: 104c43cf8; end: 104c43fb7;  */

/* WARNING: Removing unreachable block (ram,0x000104c43dc0) */

long * FUN_104c43cf8(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  byte *pbVar12;
  byte *pbVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined4 *puVar18;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  plVar14 = (long *)param_1[1];
  plVar5 = param_1 + 2;
  if (plVar14 < (long *)*plVar5) {
    if (param_2 == plVar14) {
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000100033dac(plVar14,*param_3,param_3[1]);
      }
      else {
        lVar9 = param_3[1];
        lVar16 = *param_3;
        plVar14[2] = param_3[2];
        plVar14[1] = lVar9;
        *plVar14 = lVar16;
      }
      param_1[1] = (long)(plVar14 + 3);
      return param_2;
    }
    plVar3 = plVar14 + -3;
    plVar5 = plVar14;
    if (plVar3 < plVar14) {
      plVar5 = plVar14 + 3;
      plVar14[2] = plVar14[-1];
      plVar14[1] = plVar14[-2];
      *plVar14 = *plVar3;
      plVar14[-2] = 0;
      plVar14[-1] = 0;
      *plVar3 = 0;
    }
    param_1[1] = (long)plVar5;
    if (plVar14 != param_2 + 3) {
      lVar16 = 0;
      do {
        puVar4 = (undefined8 *)((long)plVar14 + lVar16 + -0x30);
        *(undefined8 *)((long)plVar14 + lVar16 + -8) =
             *(undefined8 *)((long)plVar14 + lVar16 + -0x20);
        *(undefined8 *)((long)plVar14 + lVar16 + -0x10) =
             *(undefined8 *)((long)plVar14 + lVar16 + -0x28);
        *(undefined8 *)((long)plVar14 + lVar16 + -0x18) = *puVar4;
        *(undefined1 *)((long)plVar14 + lVar16 + -0x19) = 0;
        *(undefined1 *)puVar4 = 0;
        lVar9 = lVar16 + -0x30;
        lVar16 = lVar16 + -0x18;
      } while ((long *)((long)plVar14 + lVar9) != param_2);
      plVar5 = (long *)param_1[1];
    }
    lVar16 = 0x18;
    if (plVar5 <= param_3 || param_3 < param_2) {
      lVar16 = 0;
    }
    param_3 = (long *)((long)param_3 + lVar16);
    if (param_2 == param_3) {
      return param_2;
    }
    bVar2 = *(byte *)((long)param_3 + 0x17);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      uVar1 = param_3[1];
      plVar14 = (long *)*param_3;
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        plVar14 = param_3;
      }
      func_0x0001006aabfc(param_2,plVar14,uVar1);
      return param_2;
    }
    if (-1 < (char)bVar2) {
      lVar9 = param_3[1];
      lVar16 = *param_3;
      param_2[2] = param_3[2];
      param_2[1] = lVar9;
      *param_2 = lVar16;
      return param_2;
    }
    func_0x00010014884c(param_2,*param_3,param_3[1]);
    return param_2;
  }
  lVar16 = *param_1;
  plVar11 = (long *)(((long)plVar14 - lVar16 >> 3) * -0x5555555555555555 + 1);
  plVar3 = param_1;
  if (plVar11 < (long *)0xaaaaaaaaaaaaaab) {
    lVar9 = *plVar5 - lVar16 >> 3;
    plVar14 = (long *)(lVar9 * 0x5555555555555556);
    if (plVar14 < plVar11 || (long)plVar14 - (long)plVar11 == 0) {
      plVar14 = plVar11;
    }
    if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      plVar14 = (long *)0xaaaaaaaaaaaaaaa;
    }
    plStack_58 = plVar5;
    if (plVar14 == (long *)0x0) {
      lVar9 = 0;
LAB_104c43ea4:
      plStack_70 = (long *)((long)param_2 + (lVar9 - lVar16));
      lStack_60 = lVar9 + (long)plVar14 * 0x18;
      lStack_78 = lVar9;
      plStack_68 = plStack_70;
      func_0x00010014c0d0(&lStack_78,param_3);
      plVar14 = plStack_70;
      _memcpy(plStack_68,param_2,param_1[1] - (long)param_2);
      plStack_68 = (long *)((long)plStack_68 + (param_1[1] - (long)param_2));
      param_1[1] = (long)param_2;
      lVar16 = (long)plStack_70 - ((long)param_2 - *param_1);
      _memcpy(lVar16);
      lStack_78 = *param_1;
      *param_1 = lVar16;
      lVar16 = param_1[2];
      param_1[2] = lStack_60;
      param_1[1] = (long)plStack_68;
      if (lStack_78 != 0) {
        plStack_70 = (long *)lStack_78;
        plStack_68 = (long *)lStack_78;
        lStack_60 = lVar16;
        __ZdlPv();
      }
      return plVar14;
    }
    if (plVar14 < (long *)0xaaaaaaaaaaaaaab) {
      lVar9 = (long)plVar14 * 0x18;
      __Znwm();
      goto LAB_104c43ea4;
    }
  }
  else {
    FUN_104bdcf60();
  }
  FUN_104bd35f4();
  param_1[1] = (long)plVar14;
  __Unwind_Resume();
  FUN_104c37e04(&lStack_78);
  __Unwind_Resume();
  plVar14 = (long *)plVar3[1];
  if (plVar14 < (long *)plVar3[2]) {
    if (param_2 != plVar14) {
      if ((long *)((long)plVar14 + -4) < plVar14) {
        *(undefined4 *)plVar14 = *(undefined4 *)((long)plVar14 + -4);
        plVar3[1] = (long)plVar14 + 4;
      }
      else {
        plVar3[1] = (long)plVar14;
      }
      if (plVar14 != (long *)((long)param_2 + 4)) {
        _memmove((long *)((long)param_2 + 4),param_2);
      }
      *(int *)param_2 = (int)*param_3;
      return param_2;
    }
    *(int *)plVar14 = (int)*param_3;
    plVar3[1] = (long)plVar14 + 4;
    return param_2;
  }
  plVar5 = (long *)*plVar3;
  uVar1 = ((long)plVar14 - (long)plVar5 >> 2) + 1;
  if (uVar1 >> 0x3e != 0) {
    FUN_104c443dc();
LAB_104c44198:
    FUN_104bd35f4();
    if (lVar16 != 0) {
      __ZdlPv(lVar16);
    }
    __Unwind_Resume();
    pbVar13 = (byte *)*plVar3;
    if (pbVar13 != (byte *)0x0) {
      pbVar12 = pbVar13;
      if (pbVar13 != (byte *)plVar3[1]) {
        pbVar12 = (byte *)plVar3[1] + -0x20;
        do {
          if ((*pbVar12 & 1) != 0) {
            func_0x0001053936ac(pbVar12);
          }
          puVar8 = (undefined8 *)(*(ulong *)(pbVar12 + 8) ^ 2);
          puVar4 = puVar8;
          if (((ulong)puVar8 & 3) != 0) {
            puVar4 = (undefined8 *)0x0;
          }
          if ((puVar4 != (undefined8 *)0x0) && (*(char *)((long)puVar8 + 0x17) < '\0')) {
            __ZdlPv(*puVar8);
          }
          __ZdlPv(puVar4);
          pbVar7 = pbVar12 + -8;
          pbVar12 = pbVar12 + -0x28;
        } while (pbVar7 != pbVar13);
        pbVar12 = (byte *)*plVar3;
      }
      plVar3[1] = (long)pbVar13;
      __ZdlPv(pbVar12);
    }
    return plVar3;
  }
  uVar6 = plVar3[2] - (long)plVar5;
  uVar10 = (long)uVar6 >> 1;
  if (uVar10 <= uVar1) {
    uVar10 = uVar1;
  }
  if (0x7ffffffffffffffb < uVar6) {
    uVar10 = 0x3fffffffffffffff;
  }
  if (uVar10 == 0) {
    lVar9 = 0;
    plVar11 = (long *)((long)param_2 - (long)plVar5);
    puVar18 = (undefined4 *)0x0;
    lVar16 = 0;
    plVar15 = (long *)0x0;
    if (plVar11 != (long *)0x0) goto LAB_104c44120;
  }
  else {
    if (uVar10 >> 0x3e != 0) goto LAB_104c44198;
    lVar17 = uVar10 * 4;
    lVar9 = lVar17;
    __Znwm();
    lVar16 = (long)param_2 - (long)plVar5;
    plVar11 = (long *)(lVar9 + lVar16);
    puVar18 = (undefined4 *)(lVar9 + lVar17);
    plVar15 = plVar11;
    if (lVar16 != lVar17) goto LAB_104c44120;
  }
  if (param_2 == plVar5) {
    plVar11 = (long *)0x4;
    __Znwm();
    puVar18 = (undefined4 *)((long)plVar11 + 4);
    if (lVar9 != 0) {
      __ZdlPv(lVar9);
      plVar14 = (long *)plVar3[1];
    }
  }
  else {
    lVar16 = (lVar16 >> 2) + 1;
    plVar11 = (long *)((long)plVar15 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1) * -4);
  }
LAB_104c44120:
  *(int *)plVar11 = (int)*param_3;
  _memcpy((undefined4 *)((long)plVar11 + 4),param_2,(long)plVar14 - (long)param_2);
  lVar16 = plVar3[1];
  plVar3[1] = (long)param_2;
  lVar17 = (long)plVar11 - ((long)param_2 - *plVar3);
  _memcpy(lVar17);
  lVar9 = *plVar3;
  *plVar3 = lVar17;
  plVar3[1] = (long)plVar11 + 4 + (lVar16 - (long)param_2);
  plVar3[2] = (long)puVar18;
  if (lVar9 != 0) {
    __ZdlPv();
  }
  return plVar11;
}



/* Entry: 104c43fb8; end: 104c441b3;  */

ulong * FUN_104c43fb8(ulong *param_1,ulong *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong *puVar10;
  ulong *puVar11;
  long unaff_x23;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  undefined4 *puVar15;
  ulong *puVar16;
  
  puVar14 = (ulong *)param_1[1];
  if (puVar14 < (ulong *)param_1[2]) {
    if (param_2 != puVar14) {
      if ((ulong *)((long)puVar14 - 4U) < puVar14) {
        *(int *)puVar14 = (int)*(ulong *)((long)puVar14 - 4U);
        param_1[1] = (ulong)((long)puVar14 + 4);
      }
      else {
        param_1[1] = (ulong)puVar14;
      }
      if (puVar14 != (ulong *)((long)param_2 + 4U)) {
        _memmove((ulong *)((long)param_2 + 4U),param_2);
      }
      *(undefined4 *)param_2 = *param_3;
      return param_2;
    }
    *(undefined4 *)puVar14 = *param_3;
    param_1[1] = (ulong)((long)puVar14 + 4);
    return param_2;
  }
  puVar16 = (ulong *)*param_1;
  uVar1 = ((long)puVar14 - (long)puVar16 >> 2) + 1;
  if (uVar1 >> 0x3e != 0) {
    FUN_104c443dc();
LAB_104c44198:
    FUN_104bd35f4();
    if (unaff_x23 != 0) {
      __ZdlPv();
    }
    __Unwind_Resume();
    pbVar9 = (byte *)*param_1;
    if (pbVar9 != (byte *)0x0) {
      pbVar8 = pbVar9;
      if (pbVar9 != (byte *)param_1[1]) {
        pbVar8 = (byte *)param_1[1] + -0x20;
        do {
          if ((*pbVar8 & 1) != 0) {
            func_0x0001053936ac(pbVar8);
          }
          puVar6 = (undefined8 *)(*(ulong *)(pbVar8 + 8) ^ 2);
          puVar2 = puVar6;
          if (((ulong)puVar6 & 3) != 0) {
            puVar2 = (undefined8 *)0x0;
          }
          if ((puVar2 != (undefined8 *)0x0) && (*(char *)((long)puVar6 + 0x17) < '\0')) {
            __ZdlPv(*puVar6);
          }
          __ZdlPv(puVar2);
          pbVar5 = pbVar8 + -8;
          pbVar8 = pbVar8 + -0x28;
        } while (pbVar5 != pbVar9);
        pbVar8 = (byte *)*param_1;
      }
      param_1[1] = (ulong)pbVar9;
      __ZdlPv(pbVar8);
    }
    return param_1;
  }
  uVar3 = (long)param_1[2] - (long)puVar16;
  uVar7 = (long)uVar3 >> 1;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (0x7ffffffffffffffb < uVar3) {
    uVar7 = 0x3fffffffffffffff;
  }
  if (uVar7 == 0) {
    lVar12 = 0;
    puVar11 = (ulong *)((long)param_2 - (long)puVar16);
    puVar15 = (undefined4 *)0x0;
    lVar4 = 0;
    puVar10 = (ulong *)0x0;
    if (puVar11 != (ulong *)0x0) goto LAB_104c44120;
  }
  else {
    if (uVar7 >> 0x3e != 0) goto LAB_104c44198;
    lVar13 = uVar7 * 4;
    lVar12 = lVar13;
    __Znwm();
    lVar4 = (long)param_2 - (long)puVar16;
    puVar11 = (ulong *)(lVar12 + lVar4);
    puVar15 = (undefined4 *)(lVar12 + lVar13);
    puVar10 = puVar11;
    if (lVar4 != lVar13) goto LAB_104c44120;
  }
  if (param_2 == puVar16) {
    puVar11 = (ulong *)0x4;
    __Znwm();
    puVar15 = (undefined4 *)((long)puVar11 + 4);
    if (lVar12 != 0) {
      __ZdlPv(lVar12);
      puVar14 = (ulong *)param_1[1];
    }
  }
  else {
    lVar4 = (lVar4 >> 2) + 1;
    puVar11 = (ulong *)((long)puVar10 + ((ulong)(lVar4 - (lVar4 >> 0x3f)) >> 1) * -4);
  }
LAB_104c44120:
  *(undefined4 *)puVar11 = *param_3;
  _memcpy((undefined4 *)((long)puVar11 + 4),param_2,(long)puVar14 - (long)param_2);
  uVar1 = param_1[1];
  param_1[1] = (ulong)param_2;
  uVar3 = (long)puVar11 - ((long)param_2 - *param_1);
  _memcpy(uVar3);
  uVar7 = *param_1;
  *param_1 = uVar3;
  param_1[1] = (long)puVar11 + 4 + (uVar1 - (long)param_2);
  param_1[2] = (ulong)puVar15;
  if (uVar7 != 0) {
    __ZdlPv();
  }
  return puVar11;
}



/* Entry: 104c441b4; end: 104c4425f;  */

undefined8 * FUN_104c441b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)*param_1;
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = pbVar5;
    if (pbVar5 != (byte *)param_1[1]) {
      pbVar4 = (byte *)param_1[1] + -0x20;
      do {
        if ((*pbVar4 & 1) != 0) {
          func_0x0001053936ac(pbVar4);
        }
        puVar3 = (undefined8 *)(*(ulong *)(pbVar4 + 8) ^ 2);
        puVar1 = puVar3;
        if (((ulong)puVar3 & 3) != 0) {
          puVar1 = (undefined8 *)0x0;
        }
        if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar3 + 0x17) < '\0')) {
          __ZdlPv(*puVar3);
        }
        __ZdlPv(puVar1);
        pbVar2 = pbVar4 + -8;
        pbVar4 = pbVar4 + -0x28;
      } while (pbVar2 != pbVar5);
      pbVar4 = (byte *)*param_1;
    }
    param_1[1] = pbVar5;
    __ZdlPv(pbVar4);
  }
  return param_1;
}



/* Entry: 104c44260; end: 104c443db;  */

long * FUN_104c44260(long *param_1,ulong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte bVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  
  plVar7 = (long *)param_1[1];
  if (param_2 <= (ulong)((param_1[2] - (long)plVar7 >> 3) * -0x5555555555555555)) {
    plVar15 = param_1;
    if (param_2 != 0) {
      uVar12 = (param_2 * 0x18 - 0x18) / 0x18;
      plVar15 = plVar7;
      _bzero(plVar7,uVar12 * 0x18 + 0x18);
      plVar7 = plVar7 + uVar12 * 3 + 3;
    }
    param_1[1] = (long)plVar7;
    return plVar15;
  }
  plVar15 = (long *)*param_1;
  lVar16 = (long)plVar7 - (long)plVar15;
  uVar12 = param_2 + (lVar16 >> 3) * -0x5555555555555555;
  if (uVar12 < 0xaaaaaaaaaaaaaab) {
    lVar11 = param_1[2] - (long)plVar15 >> 3;
    uVar14 = lVar11 * 0x5555555555555556;
    if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
      uVar14 = uVar12;
    }
    if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
      uVar14 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar14 == 0) {
      plVar7 = (long *)0x0;
LAB_104c44350:
      lVar11 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero((long)plVar7 + lVar16,lVar11);
      plVar8 = plVar7;
      _memcpy(plVar7,plVar15,lVar16);
      *param_1 = (long)plVar7;
      param_1[1] = (long)plVar7 + lVar16 + lVar11;
      param_1[2] = (long)(plVar7 + uVar14 * 3);
      if (plVar15 == (long *)0x0) {
        return plVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar15);
      return plVar15;
    }
    if (uVar14 < 0xaaaaaaaaaaaaaab) {
      plVar7 = (long *)(uVar14 * 0x18);
      __Znwm();
      goto LAB_104c44350;
    }
  }
  else {
    FUN_104bdcf60();
  }
  FUN_104bd35f4();
  pcVar9 = "vector";
  FUN_104bd47e8();
  lVar16 = *(long *)((long)pcVar9 + 8) - *(long *)pcVar9;
  uVar12 = (lVar16 >> 3) * -0x3333333333333333 + 1;
  if (uVar12 < 0x666666666666667) {
    plStack_c8 = (long *)((long)pcVar9 + 0x10);
    lVar11 = *plStack_c8 - *(long *)pcVar9 >> 3;
    uVar14 = lVar11 * -0x6666666666666666;
    if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
      uVar14 = uVar12;
    }
    if (0x333333333333332 < (ulong)(lVar11 * -0x3333333333333333)) {
      uVar14 = 0x666666666666666;
    }
    if (uVar14 == 0) {
      lVar11 = 0;
    }
    else {
      if (0x666666666666666 < uVar14) goto LAB_104c4467c;
      lVar11 = uVar14 * 0x28;
      __Znwm();
    }
    lVar16 = lVar11 + lVar16;
    lVar18 = lVar11 + uVar14 * 0x28;
    lStack_e8 = lVar11;
    lStack_e0 = lVar16;
    lStack_d8 = lVar16;
    lStack_d0 = lVar18;
    func_0x00010adee978(lVar16,0,param_2);
    pbVar17 = *(byte **)pcVar9;
    pbVar5 = *(byte **)((long)pcVar9 + 8);
    pbVar2 = pbVar17 + (lVar16 - (long)pbVar5);
    if (pbVar5 != pbVar17) {
      lVar11 = 0;
      do {
        pbVar3 = pbVar2 + lVar11;
        *(undefined ***)pbVar3 = &PTR_DAT_110c760e0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
        pbVar3[0x20] = 0;
        pbVar3[0x21] = 0;
        pbVar3[0x22] = 0;
        pbVar3[0x23] = 0;
        *(undefined **)(pbVar3 + 0x10) = &DAT_11383d918;
        pbVar3[0x18] = 0;
        pbVar3[0x19] = 0;
        pbVar3[0x1a] = 0;
        pbVar3[0x1b] = 0;
        pbVar3[0x1c] = 0;
        pbVar3[0x1d] = 0;
        pbVar3[0x1e] = 0;
        pbVar3[0x1f] = 0;
        if (pbVar2 != pbVar17) {
          uVar14 = *(ulong *)(pbVar17 + lVar11 + 8);
          uVar12 = uVar14;
          if ((uVar14 & 1) != 0) {
            uVar12 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
          }
          if (uVar12 == 0) {
            uVar13 = *(undefined8 *)(pbVar17 + lVar11 + 0x10);
            *(undefined **)(pbVar17 + lVar11 + 0x10) = &DAT_11383d918;
            *(ulong *)(pbVar3 + 8) = uVar14;
            pbVar1 = pbVar17 + lVar11 + 8;
            pbVar1[0] = 0;
            pbVar1[1] = 0;
            pbVar1[2] = 0;
            pbVar1[3] = 0;
            pbVar1[4] = 0;
            pbVar1[5] = 0;
            pbVar1[6] = 0;
            pbVar1[7] = 0;
            *(undefined8 *)(pbVar3 + 0x10) = uVar13;
            bVar6 = pbVar3[0x18];
            pbVar3[0x18] = pbVar17[lVar11 + 0x18];
            pbVar17[lVar11 + 0x18] = bVar6;
            bVar6 = pbVar2[lVar11 + 0x19];
            pbVar2[lVar11 + 0x19] = pbVar17[lVar11 + 0x19];
            pbVar17[lVar11 + 0x19] = bVar6;
            bVar6 = pbVar2[lVar11 + 0x1a];
            pbVar2[lVar11 + 0x1a] = pbVar17[lVar11 + 0x1a];
            pbVar17[lVar11 + 0x1a] = bVar6;
            bVar6 = pbVar2[lVar11 + 0x1b];
            pbVar2[lVar11 + 0x1b] = pbVar17[lVar11 + 0x1b];
            pbVar17[lVar11 + 0x1b] = bVar6;
            bVar6 = pbVar2[lVar11 + 0x1c];
            pbVar2[lVar11 + 0x1c] = pbVar17[lVar11 + 0x1c];
            pbVar17[lVar11 + 0x1c] = bVar6;
            bVar6 = pbVar2[lVar11 + 0x1d];
            pbVar2[lVar11 + 0x1d] = pbVar17[lVar11 + 0x1d];
            pbVar17[lVar11 + 0x1d] = bVar6;
            bVar6 = pbVar2[lVar11 + 0x1e];
            pbVar2[lVar11 + 0x1e] = pbVar17[lVar11 + 0x1e];
            pbVar17[lVar11 + 0x1e] = bVar6;
            bVar6 = pbVar2[lVar11 + 0x1f];
            pbVar2[lVar11 + 0x1f] = pbVar17[lVar11 + 0x1f];
            pbVar17[lVar11 + 0x1f] = bVar6;
          }
          else {
            func_0x00010adef2cc();
          }
        }
        lVar11 = lVar11 + 0x28;
      } while (pbVar17 + lVar11 != pbVar5);
      pbVar17 = pbVar17 + 8;
      do {
        if ((*pbVar17 & 1) != 0) {
          func_0x0001053936ac(pbVar17);
        }
        puVar10 = (undefined8 *)(*(ulong *)(pbVar17 + 8) ^ 2);
        puVar4 = puVar10;
        if (((ulong)puVar10 & 3) != 0) {
          puVar4 = (undefined8 *)0x0;
        }
        if ((puVar4 != (undefined8 *)0x0) && (*(char *)((long)puVar10 + 0x17) < '\0')) {
          __ZdlPv(*puVar10);
        }
        __ZdlPv(puVar4);
        pbVar3 = pbVar17 + 0x20;
        pbVar17 = pbVar17 + 0x28;
      } while (pbVar3 != pbVar5);
      pbVar17 = *(byte **)pcVar9;
    }
    *(byte **)pcVar9 = pbVar2;
    *(long **)((long)pcVar9 + 8) = (long *)(lVar16 + 0x28);
    *(long *)((long)pcVar9 + 0x10) = lVar18;
    if (pbVar17 != (byte *)0x0) {
      __ZdlPv(pbVar17);
    }
    return (long *)(lVar16 + 0x28);
  }
  FUN_104c44730();
LAB_104c4467c:
  FUN_104bd35f4();
  FUN_104c44698(&lStack_e8);
  __Unwind_Resume();
  FUN_104bd46a0();
  lVar16 = *(long *)((long)pcVar9 + 8);
  lVar11 = *(long *)((long)pcVar9 + 0x10);
  while (lVar16 != lVar11) {
    *(long *)((long)pcVar9 + 0x10) = lVar11 + -0x28;
    if ((*(byte *)(lVar11 + -0x20) & 1) != 0) {
      func_0x0001053936ac();
    }
    puVar10 = (undefined8 *)(*(ulong *)(lVar11 + -0x18) ^ 2);
    puVar4 = puVar10;
    if (((ulong)puVar10 & 3) != 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if ((puVar4 != (undefined8 *)0x0) && (*(char *)((long)puVar10 + 0x17) < '\0')) {
      __ZdlPv(*puVar10);
    }
    __ZdlPv(puVar4);
    lVar11 = *(long *)((long)pcVar9 + 0x10);
  }
  if (*(long *)pcVar9 != 0) {
    __ZdlPv();
  }
  return (long *)pcVar9;
}



/* Entry: 104c443dc; end: 104c443ef;  */

long * FUN_104c443dc(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte bVar6;
  char *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  pcVar7 = "vector";
  FUN_104bd47e8();
  lVar13 = *(long *)((long)pcVar7 + 8) - *(long *)pcVar7;
  uVar10 = (lVar13 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar10) {
    FUN_104c44730();
LAB_104c4467c:
    FUN_104bd35f4();
    FUN_104c44698(&lStack_98);
    __Unwind_Resume();
    FUN_104bd46a0();
    lVar13 = *(long *)((long)pcVar7 + 8);
    lVar9 = *(long *)((long)pcVar7 + 0x10);
    while (lVar13 != lVar9) {
      *(long *)((long)pcVar7 + 0x10) = lVar9 + -0x28;
      if ((*(byte *)(lVar9 + -0x20) & 1) != 0) {
        func_0x0001053936ac();
      }
      puVar8 = (undefined8 *)(*(ulong *)(lVar9 + -0x18) ^ 2);
      puVar4 = puVar8;
      if (((ulong)puVar8 & 3) != 0) {
        puVar4 = (undefined8 *)0x0;
      }
      if ((puVar4 != (undefined8 *)0x0) && (*(char *)((long)puVar8 + 0x17) < '\0')) {
        __ZdlPv(*puVar8);
      }
      __ZdlPv(puVar4);
      lVar9 = *(long *)((long)pcVar7 + 0x10);
    }
    if (*(long *)pcVar7 != 0) {
      __ZdlPv();
    }
    return (long *)pcVar7;
  }
  plStack_78 = (long *)((long)pcVar7 + 0x10);
  lVar9 = *plStack_78 - *(long *)pcVar7 >> 3;
  uVar12 = lVar9 * -0x6666666666666666;
  if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
    uVar12 = uVar10;
  }
  if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
    uVar12 = 0x666666666666666;
  }
  if (uVar12 == 0) {
    lVar9 = 0;
  }
  else {
    if (0x666666666666666 < uVar12) goto LAB_104c4467c;
    lVar9 = uVar12 * 0x28;
    __Znwm();
  }
  lVar13 = lVar9 + lVar13;
  lVar15 = lVar9 + uVar12 * 0x28;
  lStack_98 = lVar9;
  lStack_90 = lVar13;
  lStack_88 = lVar13;
  lStack_80 = lVar15;
  func_0x00010adee978(lVar13,0,param_2);
  pbVar14 = *(byte **)pcVar7;
  pbVar5 = *(byte **)((long)pcVar7 + 8);
  pbVar2 = pbVar14 + (lVar13 - (long)pbVar5);
  if (pbVar5 != pbVar14) {
    lVar9 = 0;
    do {
      pbVar3 = pbVar2 + lVar9;
      *(undefined ***)pbVar3 = &PTR_DAT_110c760e0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      pbVar3[0x20] = 0;
      pbVar3[0x21] = 0;
      pbVar3[0x22] = 0;
      pbVar3[0x23] = 0;
      *(undefined **)(pbVar3 + 0x10) = &DAT_11383d918;
      pbVar3[0x18] = 0;
      pbVar3[0x19] = 0;
      pbVar3[0x1a] = 0;
      pbVar3[0x1b] = 0;
      pbVar3[0x1c] = 0;
      pbVar3[0x1d] = 0;
      pbVar3[0x1e] = 0;
      pbVar3[0x1f] = 0;
      if (pbVar2 != pbVar14) {
        uVar12 = *(ulong *)(pbVar14 + lVar9 + 8);
        uVar10 = uVar12;
        if ((uVar12 & 1) != 0) {
          uVar10 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
        }
        if (uVar10 == 0) {
          uVar11 = *(undefined8 *)(pbVar14 + lVar9 + 0x10);
          *(undefined **)(pbVar14 + lVar9 + 0x10) = &DAT_11383d918;
          *(ulong *)(pbVar3 + 8) = uVar12;
          pbVar1 = pbVar14 + lVar9 + 8;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          *(undefined8 *)(pbVar3 + 0x10) = uVar11;
          bVar6 = pbVar3[0x18];
          pbVar3[0x18] = pbVar14[lVar9 + 0x18];
          pbVar14[lVar9 + 0x18] = bVar6;
          bVar6 = pbVar2[lVar9 + 0x19];
          pbVar2[lVar9 + 0x19] = pbVar14[lVar9 + 0x19];
          pbVar14[lVar9 + 0x19] = bVar6;
          bVar6 = pbVar2[lVar9 + 0x1a];
          pbVar2[lVar9 + 0x1a] = pbVar14[lVar9 + 0x1a];
          pbVar14[lVar9 + 0x1a] = bVar6;
          bVar6 = pbVar2[lVar9 + 0x1b];
          pbVar2[lVar9 + 0x1b] = pbVar14[lVar9 + 0x1b];
          pbVar14[lVar9 + 0x1b] = bVar6;
          bVar6 = pbVar2[lVar9 + 0x1c];
          pbVar2[lVar9 + 0x1c] = pbVar14[lVar9 + 0x1c];
          pbVar14[lVar9 + 0x1c] = bVar6;
          bVar6 = pbVar2[lVar9 + 0x1d];
          pbVar2[lVar9 + 0x1d] = pbVar14[lVar9 + 0x1d];
          pbVar14[lVar9 + 0x1d] = bVar6;
          bVar6 = pbVar2[lVar9 + 0x1e];
          pbVar2[lVar9 + 0x1e] = pbVar14[lVar9 + 0x1e];
          pbVar14[lVar9 + 0x1e] = bVar6;
          bVar6 = pbVar2[lVar9 + 0x1f];
          pbVar2[lVar9 + 0x1f] = pbVar14[lVar9 + 0x1f];
          pbVar14[lVar9 + 0x1f] = bVar6;
        }
        else {
          func_0x00010adef2cc();
        }
      }
      lVar9 = lVar9 + 0x28;
    } while (pbVar14 + lVar9 != pbVar5);
    pbVar14 = pbVar14 + 8;
    do {
      if ((*pbVar14 & 1) != 0) {
        func_0x0001053936ac(pbVar14);
      }
      puVar8 = (undefined8 *)(*(ulong *)(pbVar14 + 8) ^ 2);
      puVar4 = puVar8;
      if (((ulong)puVar8 & 3) != 0) {
        puVar4 = (undefined8 *)0x0;
      }
      if ((puVar4 != (undefined8 *)0x0) && (*(char *)((long)puVar8 + 0x17) < '\0')) {
        __ZdlPv(*puVar8);
      }
      __ZdlPv(puVar4);
      pbVar3 = pbVar14 + 0x20;
      pbVar14 = pbVar14 + 0x28;
    } while (pbVar3 != pbVar5);
    pbVar14 = *(byte **)pcVar7;
  }
  *(byte **)pcVar7 = pbVar2;
  *(long **)((long)pcVar7 + 8) = (long *)(lVar13 + 0x28);
  *(long *)((long)pcVar7 + 0x10) = lVar15;
  if (pbVar14 != (byte *)0x0) {
    __ZdlPv(pbVar14);
  }
  return (long *)(lVar13 + 0x28);
}



/* Entry: 104c443f0; end: 104c44697;  */

long * FUN_104c443f0(long *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte bVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  lVar12 = param_1[1] - *param_1;
  uVar9 = (lVar12 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar9) {
    FUN_104c44730();
LAB_104c4467c:
    FUN_104bd35f4();
    FUN_104c44698(&lStack_88);
    __Unwind_Resume();
    FUN_104bd46a0();
    lVar12 = param_1[1];
    lVar8 = param_1[2];
    while (lVar12 != lVar8) {
      param_1[2] = lVar8 + -0x28;
      if ((*(byte *)(lVar8 + -0x20) & 1) != 0) {
        func_0x0001053936ac();
      }
      puVar7 = (undefined8 *)(*(ulong *)(lVar8 + -0x18) ^ 2);
      puVar4 = puVar7;
      if (((ulong)puVar7 & 3) != 0) {
        puVar4 = (undefined8 *)0x0;
      }
      if ((puVar4 != (undefined8 *)0x0) && (*(char *)((long)puVar7 + 0x17) < '\0')) {
        __ZdlPv(*puVar7);
      }
      __ZdlPv(puVar4);
      lVar8 = param_1[2];
    }
    if (*param_1 != 0) {
      __ZdlPv();
    }
    return param_1;
  }
  plStack_68 = param_1 + 2;
  lVar8 = *plStack_68 - *param_1 >> 3;
  uVar11 = lVar8 * -0x6666666666666666;
  if (uVar11 < uVar9 || uVar11 - uVar9 == 0) {
    uVar11 = uVar9;
  }
  if (0x333333333333332 < (ulong)(lVar8 * -0x3333333333333333)) {
    uVar11 = 0x666666666666666;
  }
  if (uVar11 == 0) {
    lVar8 = 0;
  }
  else {
    if (0x666666666666666 < uVar11) goto LAB_104c4467c;
    lVar8 = uVar11 * 0x28;
    __Znwm();
  }
  lVar12 = lVar8 + lVar12;
  lVar14 = lVar8 + uVar11 * 0x28;
  lStack_88 = lVar8;
  lStack_80 = lVar12;
  lStack_78 = lVar12;
  lStack_70 = lVar14;
  func_0x00010adee978(lVar12,0,param_2);
  pbVar13 = (byte *)*param_1;
  pbVar5 = (byte *)param_1[1];
  pbVar2 = pbVar13 + (lVar12 - (long)pbVar5);
  if (pbVar5 != pbVar13) {
    lVar8 = 0;
    do {
      pbVar3 = pbVar2 + lVar8;
      *(undefined ***)pbVar3 = &PTR_DAT_110c760e0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      pbVar3[0x20] = 0;
      pbVar3[0x21] = 0;
      pbVar3[0x22] = 0;
      pbVar3[0x23] = 0;
      *(undefined **)(pbVar3 + 0x10) = &DAT_11383d918;
      pbVar3[0x18] = 0;
      pbVar3[0x19] = 0;
      pbVar3[0x1a] = 0;
      pbVar3[0x1b] = 0;
      pbVar3[0x1c] = 0;
      pbVar3[0x1d] = 0;
      pbVar3[0x1e] = 0;
      pbVar3[0x1f] = 0;
      if (pbVar2 != pbVar13) {
        uVar11 = *(ulong *)(pbVar13 + lVar8 + 8);
        uVar9 = uVar11;
        if ((uVar11 & 1) != 0) {
          uVar9 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
        }
        if (uVar9 == 0) {
          uVar10 = *(undefined8 *)(pbVar13 + lVar8 + 0x10);
          *(undefined **)(pbVar13 + lVar8 + 0x10) = &DAT_11383d918;
          *(ulong *)(pbVar3 + 8) = uVar11;
          pbVar1 = pbVar13 + lVar8 + 8;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          *(undefined8 *)(pbVar3 + 0x10) = uVar10;
          bVar6 = pbVar3[0x18];
          pbVar3[0x18] = pbVar13[lVar8 + 0x18];
          pbVar13[lVar8 + 0x18] = bVar6;
          bVar6 = pbVar2[lVar8 + 0x19];
          pbVar2[lVar8 + 0x19] = pbVar13[lVar8 + 0x19];
          pbVar13[lVar8 + 0x19] = bVar6;
          bVar6 = pbVar2[lVar8 + 0x1a];
          pbVar2[lVar8 + 0x1a] = pbVar13[lVar8 + 0x1a];
          pbVar13[lVar8 + 0x1a] = bVar6;
          bVar6 = pbVar2[lVar8 + 0x1b];
          pbVar2[lVar8 + 0x1b] = pbVar13[lVar8 + 0x1b];
          pbVar13[lVar8 + 0x1b] = bVar6;
          bVar6 = pbVar2[lVar8 + 0x1c];
          pbVar2[lVar8 + 0x1c] = pbVar13[lVar8 + 0x1c];
          pbVar13[lVar8 + 0x1c] = bVar6;
          bVar6 = pbVar2[lVar8 + 0x1d];
          pbVar2[lVar8 + 0x1d] = pbVar13[lVar8 + 0x1d];
          pbVar13[lVar8 + 0x1d] = bVar6;
          bVar6 = pbVar2[lVar8 + 0x1e];
          pbVar2[lVar8 + 0x1e] = pbVar13[lVar8 + 0x1e];
          pbVar13[lVar8 + 0x1e] = bVar6;
          bVar6 = pbVar2[lVar8 + 0x1f];
          pbVar2[lVar8 + 0x1f] = pbVar13[lVar8 + 0x1f];
          pbVar13[lVar8 + 0x1f] = bVar6;
        }
        else {
          func_0x00010adef2cc();
        }
      }
      lVar8 = lVar8 + 0x28;
    } while (pbVar13 + lVar8 != pbVar5);
    pbVar13 = pbVar13 + 8;
    do {
      if ((*pbVar13 & 1) != 0) {
        func_0x0001053936ac(pbVar13);
      }
      puVar7 = (undefined8 *)(*(ulong *)(pbVar13 + 8) ^ 2);
      puVar4 = puVar7;
      if (((ulong)puVar7 & 3) != 0) {
        puVar4 = (undefined8 *)0x0;
      }
      if ((puVar4 != (undefined8 *)0x0) && (*(char *)((long)puVar7 + 0x17) < '\0')) {
        __ZdlPv(*puVar7);
      }
      __ZdlPv(puVar4);
      pbVar3 = pbVar13 + 0x20;
      pbVar13 = pbVar13 + 0x28;
    } while (pbVar3 != pbVar5);
    pbVar13 = (byte *)*param_1;
  }
  *param_1 = (long)pbVar2;
  param_1[1] = lVar12 + 0x28;
  param_1[2] = lVar14;
  if (pbVar13 != (byte *)0x0) {
    __ZdlPv(pbVar13);
  }
  return (long *)(lVar12 + 0x28);
}



/* Entry: 104c44698; end: 104c4472f;  */

long * FUN_104c44698(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = param_1[1];
  lVar4 = param_1[2];
  while (lVar2 != lVar4) {
    param_1[2] = lVar4 + -0x28;
    if ((*(byte *)(lVar4 + -0x20) & 1) != 0) {
      func_0x0001053936ac();
    }
    puVar3 = (undefined8 *)(*(ulong *)(lVar4 + -0x18) ^ 2);
    puVar1 = puVar3;
    if (((ulong)puVar3 & 3) != 0) {
      puVar1 = (undefined8 *)0x0;
    }
    if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar3 + 0x17) < '\0')) {
      __ZdlPv(*puVar3);
    }
    __ZdlPv(puVar1);
    lVar4 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c44730; end: 104c44743;  */

char * FUN_104c44730(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pcVar3 = "vector";
  FUN_104bd47e8();
  pcVar3[0] = '\0';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  pcVar3[4] = '\0';
  pcVar3[5] = '\0';
  pcVar3[6] = '\0';
  pcVar3[7] = '\0';
  pcVar3[8] = '\0';
  pcVar3[9] = '\0';
  pcVar3[10] = '\0';
  pcVar3[0xb] = '\0';
  pcVar3[0xc] = '\0';
  pcVar3[0xd] = '\0';
  pcVar3[0xe] = '\0';
  pcVar3[0xf] = '\0';
  pcVar3[0x10] = '\0';
  pcVar3[0x11] = '\0';
  pcVar3[0x12] = '\0';
  pcVar3[0x13] = '\0';
  pcVar3[0x14] = '\0';
  pcVar3[0x15] = '\0';
  pcVar3[0x16] = '\0';
  pcVar3[0x17] = '\0';
  func_0x00010015bcc4();
  pcVar3[0x18] = '\0';
  pcVar3[0x19] = '\0';
  pcVar3[0x1a] = '\0';
  pcVar3[0x1b] = '\0';
  pcVar3[0x1c] = '\0';
  pcVar3[0x1d] = '\0';
  pcVar3[0x1e] = '\0';
  pcVar3[0x1f] = '\0';
  pcVar3[0x20] = '\0';
  pcVar3[0x21] = '\0';
  pcVar3[0x22] = '\0';
  pcVar3[0x23] = '\0';
  pcVar3[0x24] = '\0';
  pcVar3[0x25] = '\0';
  pcVar3[0x26] = '\0';
  pcVar3[0x27] = '\0';
  pcVar3[0x28] = '\0';
  pcVar3[0x29] = '\0';
  pcVar3[0x2a] = '\0';
  pcVar3[0x2b] = '\0';
  pcVar3[0x2c] = '\0';
  pcVar3[0x2d] = '\0';
  pcVar3[0x2e] = '\0';
  pcVar3[0x2f] = '\0';
  lVar1 = *(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18);
  if (lVar1 != 0) {
    if (lVar1 < 0) {
      FUN_104c443dc();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104c44864);
      (*pcVar2)();
    }
    lVar4 = lVar1;
    __Znwm();
    *(long *)(pcVar3 + 0x18) = lVar4;
    *(long *)(pcVar3 + 0x20) = lVar4;
    *(long *)(pcVar3 + 0x28) = lVar4 + lVar1;
    _memcpy();
    *(long *)(pcVar3 + 0x20) = lVar4 + lVar1;
  }
  if (*(char *)(param_2 + 0x47) < '\0') {
    func_0x000100033dac(pcVar3 + 0x30,*(undefined8 *)(param_2 + 0x30),
                        *(undefined8 *)(param_2 + 0x38));
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(pcVar3 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(pcVar3 + 0x38) = uVar7;
    *(undefined8 *)(pcVar3 + 0x30) = uVar6;
  }
  pcVar5 = pcVar3 + 0x48;
  pcVar5[0] = '\0';
  pcVar5[1] = '\0';
  pcVar5[2] = '\0';
  pcVar5[3] = '\0';
  pcVar5[4] = '\0';
  pcVar5[5] = '\0';
  pcVar5[6] = '\0';
  pcVar5[7] = '\0';
  pcVar3[0x50] = '\0';
  pcVar3[0x51] = '\0';
  pcVar3[0x52] = '\0';
  pcVar3[0x53] = '\0';
  pcVar3[0x54] = '\0';
  pcVar3[0x55] = '\0';
  pcVar3[0x56] = '\0';
  pcVar3[0x57] = '\0';
  pcVar3[0x58] = '\0';
  pcVar3[0x59] = '\0';
  pcVar3[0x5a] = '\0';
  pcVar3[0x5b] = '\0';
  pcVar3[0x5c] = '\0';
  pcVar3[0x5d] = '\0';
  pcVar3[0x5e] = '\0';
  pcVar3[0x5f] = '\0';
  FUN_104c448e0(pcVar5,*(long *)(param_2 + 0x48),*(long *)(param_2 + 0x50),
                (*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 3) * -0x3333333333333333);
  pcVar3[0x60] = '\0';
  pcVar3[0x61] = '\0';
  pcVar3[0x62] = '\0';
  pcVar3[99] = '\0';
  pcVar3[100] = '\0';
  pcVar3[0x65] = '\0';
  pcVar3[0x66] = '\0';
  pcVar3[0x67] = '\0';
  pcVar3[0x68] = '\0';
  pcVar3[0x69] = '\0';
  pcVar3[0x6a] = '\0';
  pcVar3[0x6b] = '\0';
  pcVar3[0x6c] = '\0';
  pcVar3[0x6d] = '\0';
  pcVar3[0x6e] = '\0';
  pcVar3[0x6f] = '\0';
  pcVar3[0x70] = '\0';
  pcVar3[0x71] = '\0';
  pcVar3[0x72] = '\0';
  pcVar3[0x73] = '\0';
  pcVar3[0x74] = '\0';
  pcVar3[0x75] = '\0';
  pcVar3[0x76] = '\0';
  pcVar3[0x77] = '\0';
  FUN_104c448e0();
  *(undefined8 *)(pcVar3 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  return pcVar3;
}



/* Entry: 104c44744; end: 104c448df;  */

undefined8 * FUN_104c44744(undefined8 *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010015bcc4();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar1 = *(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18);
  if (lVar1 != 0) {
    if (lVar1 < 0) {
      FUN_104c443dc();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104c44864);
      (*pcVar2)();
    }
    lVar3 = lVar1;
    __Znwm();
    param_1[3] = lVar3;
    param_1[4] = lVar3;
    param_1[5] = lVar3 + lVar1;
    _memcpy();
    param_1[4] = lVar3 + lVar1;
  }
  if (*(char *)(param_2 + 0x47) < '\0') {
    func_0x000100033dac(param_1 + 6,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38))
    ;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    param_1[8] = *(undefined8 *)(param_2 + 0x40);
    param_1[7] = uVar5;
    param_1[6] = uVar4;
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_104c448e0(param_1 + 9,*(long *)(param_2 + 0x48),*(long *)(param_2 + 0x50),
                (*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 3) * -0x3333333333333333);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_104c448e0();
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  return param_1;
}



/* Entry: 104c448e0; end: 104c449e7;  */

void FUN_104c448e0(long *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  if (param_4 != 0) {
    if (0x666666666666666 < param_4) {
      FUN_104c44730();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104c449a0);
      (*pcVar1)();
    }
    lVar2 = param_4 * 0x28;
    __Znwm();
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + param_4 * 0x28;
    if (param_2 != param_3) {
      lVar3 = 0;
      do {
        func_0x00010adee978(lVar2 + lVar3,0,param_2 + lVar3);
        lVar3 = lVar3 + 0x28;
      } while (param_2 + lVar3 != param_3);
      lVar2 = lVar2 + lVar3;
    }
    param_1[1] = lVar2;
  }
  return;
}



/* Entry: 104c449e8; end: 104c44aab;  */

undefined8 * FUN_104c449e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar5 = (undefined8 *)*param_1;
    pbVar6 = (byte *)*puVar5;
    if (pbVar6 != (byte *)0x0) {
      pbVar4 = pbVar6;
      if (pbVar6 != (byte *)puVar5[1]) {
        pbVar4 = (byte *)puVar5[1] + -0x20;
        do {
          if ((*pbVar4 & 1) != 0) {
            func_0x0001053936ac(pbVar4);
          }
          puVar3 = (undefined8 *)(*(ulong *)(pbVar4 + 8) ^ 2);
          puVar1 = puVar3;
          if (((ulong)puVar3 & 3) != 0) {
            puVar1 = (undefined8 *)0x0;
          }
          if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar3 + 0x17) < '\0')) {
            __ZdlPv(*puVar3);
          }
          __ZdlPv(puVar1);
          pbVar2 = pbVar4 + -8;
          pbVar4 = pbVar4 + -0x28;
        } while (pbVar2 != pbVar6);
        pbVar4 = *(byte **)*param_1;
      }
      puVar5[1] = pbVar6;
      __ZdlPv(pbVar4);
    }
  }
  return param_1;
}



/* Entry: 104c44aac; end: 104c44abb;  */

void FUN_104c44aac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ebca8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c44abc; end: 104c44adb;  */

void FUN_104c44abc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ebca8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


