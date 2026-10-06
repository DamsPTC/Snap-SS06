/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aba498c; end: 10aba4a73;  */

/* WARNING: Removing unreachable block (ram,0x00010aba4a1c) */
/* WARNING: Removing unreachable block (ram,0x00010aba4a20) */
/* WARNING: Removing unreachable block (ram,0x00010aba4a28) */
/* WARNING: Removing unreachable block (ram,0x00010aba4a30) */
/* WARNING: Removing unreachable block (ram,0x00010aba4a3c) */
/* WARNING: Removing unreachable block (ram,0x00010aba4a44) */
/* WARNING: Removing unreachable block (ram,0x00010aba4a4c) */
/* WARNING: Removing unreachable block (ram,0x00010aba4a50) */

void FUN_10aba498c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_38;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110c50a60;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  puStack_38 = puVar1;
  func_0x00010abd393c();
  *param_1 = puVar1;
  func_0x0001092b4274(&puStack_38,puVar1);
  return;
}



/* Entry: 10aba4a74; end: 10aba4b63;  */

/* WARNING: Removing unreachable block (ram,0x00010aba4b0c) */
/* WARNING: Removing unreachable block (ram,0x00010aba4b10) */
/* WARNING: Removing unreachable block (ram,0x00010aba4b18) */
/* WARNING: Removing unreachable block (ram,0x00010aba4b20) */
/* WARNING: Removing unreachable block (ram,0x00010aba4b2c) */
/* WARNING: Removing unreachable block (ram,0x00010aba4b34) */
/* WARNING: Removing unreachable block (ram,0x00010aba4b3c) */
/* WARNING: Removing unreachable block (ram,0x00010aba4b40) */

void FUN_10aba4a74(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_38;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110c50a60;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  puStack_38 = puVar1;
  func_0x00010abd4c58();
  *param_1 = puVar1;
  func_0x0001092b4274(&puStack_38,puVar1);
  return;
}



/* Entry: 10aba4b64; end: 10aba4c23;  */

long FUN_10aba4b64(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = param_1;
  func_0x00010abd1340();
  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x3f) < '\0') {
    func_0x000107c3192c(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),
                        *(undefined8 *)(param_2 + 0x30));
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
  }
  lVar4 = *(long *)(param_2 + 0x48);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
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
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  return param_1;
}



/* Entry: 10aba4c24; end: 10aba4ccb;  */

long FUN_10aba4c24(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  FUN_10a195718();
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x3f) < '\0') {
    func_0x000107c3192c(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),
                        *(undefined8 *)(param_2 + 0x30));
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    *(undefined8 *)(param_1 + 0x28) = uVar2;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  return param_1;
}



/* Entry: 10aba4ccc; end: 10aba4e1f;  */

long FUN_10aba4ccc(long param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x00010a061620(param_1 + 0x90);
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  plVar1 = *(long **)(param_1 + 0x68);
  if (plVar1 == (long *)(param_1 + 0x50)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10aba4d20;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10aba4d20:
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10aba4e20; end: 10aba4f67;  */

void FUN_10aba4e20(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long *plStack_30;
  long *plStack_28;
  
  FUN_10aba4f68();
  if ((long *)*param_1 == (long *)0x0) {
    FUN_109d1b124(&plStack_28);
  }
  else {
    (**(code **)(*(long *)*param_1 + 0x38))(&plStack_28);
  }
  plVar5 = param_1 + 2;
  if ((long *)*plVar5 == (long *)0x0) {
    FUN_109d1b124(&plStack_30);
  }
  else {
    (**(code **)(*(long *)*plVar5 + 0x38))(&plStack_30);
  }
  FUN_109d1a244(&plStack_28);
  FUN_109d1a244(&plStack_30);
  func_0x00010a225c4c(param_1);
  func_0x00010a225c4c(plVar5);
  if (plStack_30 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_30 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plStack_30 + 8))();
      }
    }
  }
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  plStack_28 = param_1 + 4;
  func_0x00010abd4d78(&plStack_28);
  func_0x00010a061620(plVar5);
  func_0x00010a061620(param_1);
  return;
}



/* Entry: 10aba4f68; end: 10aba51b7;  */

/* WARNING: Removing unreachable block (ram,0x00010aba5134) */
/* WARNING: Removing unreachable block (ram,0x00010aba5144) */
/* WARNING: Removing unreachable block (ram,0x00010aba5160) */
/* WARNING: Removing unreachable block (ram,0x00010aba5164) */
/* WARNING: Removing unreachable block (ram,0x00010aba5178) */

void FUN_10aba4f68(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  plVar3 = *(long **)(param_1 + 0x28);
  plVar11 = *(long **)(param_1 + 0x20);
  plVar8 = plVar11;
  for (; plVar11 != plVar3; plVar11 = plVar11 + 2) {
    plVar8 = (long *)plVar11[1];
    if ((plVar8 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 == (long *)0x0)
       ) {
LAB_10aba5034:
      plVar8 = plVar11;
      if (plVar11 != plVar3) goto joined_r0x00010aba5044;
      break;
    }
    lVar10 = *plVar11;
    if (lVar10 == 0) {
LAB_10aba4fe0:
      bVar7 = true;
    }
    else if (*(long *)(lVar10 + 0x410) == 0) {
LAB_10aba4fe8:
      bVar7 = false;
    }
    else {
      if (((uint)*(undefined8 *)(*(long *)(lVar10 + 0x410) + 0x10) >> 1 & 1) != 0)
      goto LAB_10aba4fe0;
      if (*(long *)(lVar10 + 0x410) == 0) goto LAB_10aba4fe8;
      if (((uint)*(undefined8 *)(*(long *)(lVar10 + 0x410) + 0x10) >> 5 & 1) != 0)
      goto LAB_10aba4fe0;
      bVar7 = *(long *)(lVar10 + 0x410) != 0;
    }
    plVar1 = plVar8 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    if (bVar7) goto LAB_10aba5034;
    plVar8 = plVar3;
  }
  goto LAB_10aba511c;
joined_r0x00010aba5044:
  plVar1 = plVar11 + 2;
  if (plVar1 != plVar3) {
    plVar9 = (long *)plVar11[3];
    plVar11 = plVar1;
    if ((plVar9 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 != (long *)0x0)
       ) {
      lVar10 = *plVar1;
      if (lVar10 == 0) {
LAB_10aba50a4:
        bVar7 = true;
      }
      else if (*(long *)(lVar10 + 0x410) == 0) {
LAB_10aba50ac:
        bVar7 = false;
      }
      else {
        if (((uint)*(undefined8 *)(*(long *)(lVar10 + 0x410) + 0x10) >> 1 & 1) != 0)
        goto LAB_10aba50a4;
        if (*(long *)(lVar10 + 0x410) == 0) goto LAB_10aba50ac;
        if (((uint)*(undefined8 *)(*(long *)(lVar10 + 0x410) + 0x10) >> 5 & 1) != 0)
        goto LAB_10aba50a4;
        bVar7 = *(long *)(lVar10 + 0x410) != 0;
      }
      plVar2 = plVar9 + 1;
      do {
        lVar10 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
      if (!bVar7) {
        lVar13 = plVar1[1];
        lVar12 = *plVar1;
        *plVar1 = 0;
        plVar1[1] = 0;
        lVar10 = plVar8[1];
        plVar8[1] = lVar13;
        *plVar8 = lVar12;
        if (lVar10 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        plVar8 = plVar8 + 2;
      }
    }
    goto joined_r0x00010aba5044;
  }
LAB_10aba511c:
  plVar11 = *(long **)(param_1 + 0x28);
  if (plVar11 < plVar8) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10aba51b8);
    (*pcVar6)();
  }
  if (plVar8 != plVar11) {
    for (; plVar11 != plVar8; plVar11 = plVar11 + -2) {
      if (plVar11[-1] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    *(long **)(param_1 + 0x28) = plVar8;
  }
  return;
}



/* Entry: 10aba51b8; end: 10aba54cf;  */

/* WARNING: Possible PIC construction at 0x00010aba5518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010aba551c) */
/* WARNING: Removing unreachable block (ram,0x00010aba559c) */
/* WARNING: Removing unreachable block (ram,0x00010aba5534) */
/* WARNING: Removing unreachable block (ram,0x00010aba5548) */
/* WARNING: Removing unreachable block (ram,0x00010aba554c) */
/* WARNING: Removing unreachable block (ram,0x00010aba5554) */
/* WARNING: Removing unreachable block (ram,0x00010aba555c) */
/* WARNING: Removing unreachable block (ram,0x00010aba5568) */
/* WARNING: Removing unreachable block (ram,0x00010aba5570) */
/* WARNING: Removing unreachable block (ram,0x00010aba5578) */
/* WARNING: Removing unreachable block (ram,0x00010aba557c) */
/* WARNING: Removing unreachable block (ram,0x00010aba5588) */

long **** FUN_10aba51b8(long ****param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  code *pcVar5;
  long ****pppplVar6;
  long *plVar7;
  long *plVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long lVar11;
  long ***ppplVar12;
  long ***ppplVar13;
  undefined8 uStack_d0;
  long ***ppplStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long **pplStack_b0;
  long ***ppplStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  long **pplStack_78;
  long ***ppplStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[3] = (long ***)0x0;
  param_1[2] = (long ***)0x0;
  pcVar1 = (char *)((long)param_1 + 0x3c);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  param_1[1] = (long ***)0x0;
  *param_1 = (long ***)0x0;
  param_1[5] = (long ***)0x0;
  param_1[4] = (long ***)0x0;
  pcVar1 = (char *)((long)param_1 + 0x2b);
  pcVar4 = (char *)((long)param_1 + 0x33);
  pcVar4[0] = '\0';
  pcVar4[1] = '\0';
  pcVar4[2] = '\0';
  pcVar4[3] = '\0';
  pcVar4[4] = '\0';
  pcVar4[5] = '\0';
  pcVar4[6] = '\0';
  pcVar4[7] = '\0';
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pppplVar10 = (long ****)0x113834838;
  FUN_10a08f69c();
  if (*(char *)pppplVar10 == '\x01') {
    FUN_10a102184();
    ppplVar13 = pppplVar10[9];
    pppplVar6 = (long ****)0xd0;
    __Znwm();
    pppplVar6[1] = (long ***)0x0;
    pppplVar6[2] = (long ***)0x0;
    *pppplVar6 = (long ***)&PTR_DAT_110ae90f0;
    puStack_88 = &UNK_1053a6a3c;
    ppuStack_80 = &PTR_DAT_110ae9180;
    ppplStack_90 = ppplVar13;
    FUN_109d228cc(pppplVar6 + 3,&UNK_10f696e3f,0x14,4,&ppplStack_90);
    func_0x0001092ba41c(&ppplStack_90);
    pppplVar10 = param_1;
    ppplStack_a0 = (long ***)(pppplVar6 + 3);
    ppplStack_98 = (long ***)pppplVar6;
    func_0x00010a21ba78(param_1,&ppplStack_a0);
    pppplVar6 = (long ****)ppplStack_98;
    if ((long ****)ppplStack_98 != (long ****)0x0) {
      pppplVar9 = (long ****)(ppplStack_98 + 1);
      do {
        ppplVar13 = *pppplVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
        if (bVar3) {
          *pppplVar9 = (long ***)((long)ppplVar13 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppplVar13 == (long ***)0x0) {
        (*(code *)(*ppplStack_98)[2])(ppplStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppplVar10 = pppplVar6;
      }
    }
  }
  FUN_10a30c09c(&ppplStack_a0);
  ppplVar13 = (long ***)ppplStack_a0[2];
  pppplVar6 = (long ****)ppplStack_a0[3];
  if (pppplVar6 != (long ****)0x0) {
    pppplVar9 = pppplVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
      if (bVar3) {
        *pppplVar9 = (long ***)((long)*pppplVar9 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pplStack_b0 = (long **)ppplVar13;
  ppplStack_a8 = (long ***)pppplVar6;
  if (ppplVar13 != (long ***)0x0) {
    pplStack_b0 = (long **)0x0;
    ppplStack_a8 = (long ***)0x0;
    uStack_d0 = 0;
    ppplStack_c8 = (long ***)0x0;
    puStack_88 = &UNK_109896774;
    ppuStack_80 = &PTR_DAT_110b17068;
    plVar7 = (long *)0xd0;
    ppplStack_90 = ppplVar13;
    pplStack_78 = (long **)ppplVar13;
    ppplStack_70 = (long ***)pppplVar6;
    __Znwm();
    plVar7[2] = 0;
    plVar8 = plVar7 + 3;
    *plVar7 = (long)&PTR_DAT_110ae90f0;
    plVar7[1] = 0;
    func_0x000109d18d1c(plVar8,&UNK_10f696e54,0x14,&ppplStack_90);
    plStack_c0 = plVar8;
    plStack_b8 = plVar7;
    func_0x00010a21ba78(param_1 + 2,&plStack_c0);
    plVar8 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar7 = plStack_b8 + 1;
      do {
        lVar11 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    pppplVar10 = &ppplStack_90;
    func_0x0001092ba41c();
    pppplVar6 = (long ****)ppplStack_c8;
    if ((long ****)ppplStack_c8 != (long ****)0x0) {
      pppplVar9 = (long ****)(ppplStack_c8 + 1);
      do {
        ppplVar13 = *pppplVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
        if (bVar3) {
          *pppplVar9 = (long ***)((long)ppplVar13 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppplVar13 == (long ***)0x0) {
        (*(code *)(*ppplStack_c8)[2])(ppplStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppplVar10 = pppplVar6;
      }
    }
  }
  pppplVar6 = (long ****)ppplStack_a8;
  if ((long ****)ppplStack_a8 != (long ****)0x0) {
    pppplVar9 = (long ****)(ppplStack_a8 + 1);
    do {
      ppplVar13 = *pppplVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
      if (bVar3) {
        *pppplVar9 = (long ***)((long)ppplVar13 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppplVar13 == (long ***)0x0) {
      (*(code *)(*ppplStack_a8)[2])(ppplStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppplVar10 = pppplVar6;
    }
  }
  ppplVar13 = ppplStack_98;
  if ((long ****)ppplStack_98 != (long ****)0x0) {
    pppplVar6 = (long ****)(ppplStack_98 + 1);
    do {
      ppplVar12 = *pppplVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
      if (bVar3) {
        *pppplVar6 = (long ***)((long)ppplVar12 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppplVar12 == (long ***)0x0) {
      (*(code *)(*ppplStack_98)[2])(ppplStack_98);
      pppplVar10 = (long ****)ppplVar13;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x0001092ba41c(&ppplStack_90);
    func_0x00010a06e274(&uStack_d0);
    func_0x00010a061620(&pplStack_b0);
    FUN_10a0a16d0(&ppplStack_a0);
    ppplStack_90 = (long ***)(param_1 + 4);
    func_0x00010abd4d78(&ppplStack_90);
    func_0x00010a061620(ppplVar13);
    func_0x00010a061620(param_1);
    __Unwind_Resume();
    pppplVar6 = pppplVar10;
    FUN_10ad055a0();
    pppplVar9 = (long ****)*pppplVar10;
    if (((ulong)pppplVar6 & 1) == 0) {
      if (pppplVar9[0x82] != (long ***)0x0) {
        func_0x0001092af8bc(pppplVar9 + 0x82);
        ppplVar13 = pppplVar9[0x82];
        if (((ulong)ppplVar13[0x15] & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10aba55e8);
          (*pcVar5)();
        }
        return (long ****)(ppplVar13 + 0x13);
      }
      ppplVar13 = (long ***)&UNK_10f6984b5;
      FUN_10a00946c();
    }
    else {
      FUN_10aba55a8();
      if (*pppplVar9 != (long ***)0x0) {
        return pppplVar9;
      }
      ppplVar13 = *pppplVar10;
    }
    pppplVar10 = (long ****)ppplVar13[0x82];
    if (pppplVar10 != (long ****)0x0) {
      pppplVar6 = pppplVar10 + 1;
      do {
        ppplVar12 = *pppplVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
        if (bVar3) {
          *pppplVar6 = (long ***)((long)ppplVar12 + -4);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((ulong)ppplVar12 & 0x1fffffffc) == 4) {
        do {
          ppplVar12 = *pppplVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
          if (bVar3) {
            *pppplVar6 = (long ***)((long)ppplVar12 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((long ***)((long)ppplVar12 + -1) == (long ***)0x0) {
          (*(code *)(*pppplVar10)[1])();
        }
      }
    }
    ppplVar13[0x82] = (long **)0x0;
    return pppplVar10;
  }
  return param_1;
}



/* Entry: 10aba54d0; end: 10aba55a7;  */

/* WARNING: Possible PIC construction at 0x00010aba5518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010aba551c) */
/* WARNING: Removing unreachable block (ram,0x00010aba559c) */
/* WARNING: Removing unreachable block (ram,0x00010aba5534) */
/* WARNING: Removing unreachable block (ram,0x00010aba5548) */
/* WARNING: Removing unreachable block (ram,0x00010aba554c) */
/* WARNING: Removing unreachable block (ram,0x00010aba5554) */
/* WARNING: Removing unreachable block (ram,0x00010aba555c) */
/* WARNING: Removing unreachable block (ram,0x00010aba5568) */
/* WARNING: Removing unreachable block (ram,0x00010aba5570) */
/* WARNING: Removing unreachable block (ram,0x00010aba5578) */
/* WARNING: Removing unreachable block (ram,0x00010aba557c) */
/* WARNING: Removing unreachable block (ram,0x00010aba5588) */

long * FUN_10aba54d0(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  plVar7 = param_1;
  FUN_10ad055a0();
  plVar5 = (long *)*param_1;
  if (((ulong)plVar7 & 1) == 0) {
    if (plVar5[0x82] != 0) {
      func_0x0001092af8bc(plVar5 + 0x82);
      lVar8 = plVar5[0x82];
      if ((*(byte *)(lVar8 + 0xa8) & 1) != 0) {
        return (long *)(lVar8 + 0x98);
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10aba55e8);
      (*pcVar4)();
    }
    puVar6 = &UNK_10f6984b5;
    FUN_10a00946c();
  }
  else {
    FUN_10aba55a8();
    if (*plVar5 != 0) {
      return plVar5;
    }
    puVar6 = (undefined *)*param_1;
  }
  plVar7 = *(long **)(puVar6 + 0x410);
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
  *(undefined8 *)(puVar6 + 0x410) = 0;
  return plVar7;
}



/* Entry: 10aba55a8; end: 10aba565b;  */

long * FUN_10aba55a8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  if (*(long *)(param_1 + 0x410) == 0) {
    puVar5 = &UNK_10f6984b5;
    FUN_10a00946c();
    plVar6 = *(long **)(puVar5 + 0x410);
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    *(undefined8 *)(puVar5 + 0x410) = 0;
    return plVar6;
  }
  func_0x0001092af8bc((long *)(param_1 + 0x410));
  lVar7 = *(long *)(param_1 + 0x410);
  if ((*(byte *)(lVar7 + 0xa8) & 1) != 0) {
    return (long *)(lVar7 + 0x98);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aba55e8);
  (*pcVar4)();
}



/* Entry: 10aba565c; end: 10aba56fb;  */

void FUN_10aba565c(undefined8 *param_1,uint param_2)

{
  code *pcVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined7 uStack_30;
  char cStack_29;
  
  if (param_2 < 0xd8) {
    func_0x000107c2b074(&uStack_40,&PTR_DAT_110c50c00 + (ulong)param_2 * 5);
    if (cStack_29 < '\0') {
      func_0x000107c3192c(param_1,uStack_40,uStack_38);
      if (cStack_29 < '\0') {
        __ZdlPv(uStack_40);
      }
    }
    else {
      param_1[1] = uStack_38;
      *param_1 = uStack_40;
      param_1[2] = CONCAT17(cStack_29,uStack_30);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aba56e0);
  (*pcVar1)();
}



/* Entry: 10aba56fc; end: 10aba5823;  */

void FUN_10aba56fc(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  (**(code **)**(undefined8 **)(param_1 + 0x10))();
  lVar5 = 0;
  FUN_10a2421c8();
  lVar9 = *(long *)(param_1 + 0x18);
  lVar7 = *(long *)(param_1 + 0x20);
  if (lVar9 != lVar7) {
    plVar10 = *(long **)(lVar5 + 0x1f0);
    do {
      plVar2 = *(long **)(lVar9 + 0x20);
      for (plVar11 = *(long **)(lVar9 + 0x18); plVar11 != plVar2; plVar11 = plVar11 + 2) {
        lVar5 = *plVar11;
        if (lVar5 != 0) {
          plVar8 = (long *)plVar11[1];
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar8 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = *plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          for (lVar6 = *plVar10; lVar6 != plVar10[1]; lVar6 = lVar6 + 0x50) {
            if (*(long *)(lVar6 + 0x40) == lVar5) {
              *(undefined1 *)(lVar6 + 0x31) = 0;
              lVar5 = plVar10[4];
              *(long *)(lVar6 + 0x38) = plVar10[3];
              plVar10[4] = lVar5 + -1;
              break;
            }
          }
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar8 + 1;
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
              (**(code **)(*plVar8 + 0x10))(plVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
        }
      }
      lVar9 = lVar9 + 0x30;
    } while (lVar9 != lVar7);
    lVar9 = *(long *)(param_1 + 0x18);
    lVar7 = *(long *)(param_1 + 0x20);
  }
  while (lVar7 != lVar9) {
    lVar7 = lVar7 + -0x30;
    FUN_10abd4f3c(lVar7);
  }
  *(long *)(param_1 + 0x20) = lVar9;
  return;
}



/* Entry: 10aba5824; end: 10aba59fb;  */

undefined1  [16] FUN_10aba5824(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long ****pppplVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *****pppppuVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined *puVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long ***ppplVar15;
  undefined **ppuVar16;
  undefined4 *puVar17;
  uint uVar18;
  long *plVar19;
  int iVar20;
  long ****pppplVar21;
  long ***ppplVar22;
  long ****pppplVar23;
  ulong uVar24;
  long lVar25;
  long *****ppppplVar26;
  long ****pppplVar27;
  long ***ppplVar28;
  ulong uVar29;
  long *****ppppplVar30;
  long ****pppplVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  long ****pppplStack_2578;
  uint uStack_256c;
  undefined8 ****ppppuStack_2568;
  ulong uStack_2560;
  byte bStack_2551;
  long ****pppplStack_2550;
  long ****pppplStack_2548;
  long ****pppplStack_2540;
  long ****pppplStack_2530;
  long ***ppplStack_2528;
  long ***ppplStack_2520;
  undefined2 uStack_2514;
  undefined1 uStack_2512;
  long lStack_2510;
  long lStack_2508;
  undefined4 uStack_2500;
  undefined3 uStack_24fc;
  long ****pppplStack_24f8;
  long ****pppplStack_24f0;
  undefined8 uStack_24e8;
  long ***ppplStack_24e0;
  long ***ppplStack_24d8;
  long ***ppplStack_24d0;
  undefined6 uStack_24c8;
  undefined2 uStack_24c2;
  undefined6 uStack_24c0;
  undefined8 uStack_24ba;
  long lStack_24a8;
  undefined8 uStack_2420;
  undefined8 uStack_2418;
  long **pplStack_2410;
  long ***ppplStack_2408;
  long **pplStack_2400;
  long ***ppplStack_23f8;
  long ***ppplStack_23f0;
  long ***ppplStack_23e8;
  long ***ppplStack_23e0;
  ulong uStack_23d8;
  long lStack_23c0;
  long lStack_23b8;
  undefined1 ***pppuStack_23b0;
  code *pcStack_23a8;
  long *plStack_23a0;
  long lStack_2398;
  long lStack_2390;
  long ***ppplStack_2388;
  undefined8 uStack_2380;
  undefined8 uStack_2378;
  undefined8 uStack_2370;
  undefined2 uStack_2368;
  undefined4 uStack_2366;
  undefined8 uStack_2360;
  undefined8 uStack_2358;
  undefined4 uStack_2350;
  undefined4 uStack_234c;
  undefined5 uStack_2348;
  undefined2 uStack_2340;
  undefined1 uStack_233e;
  undefined1 uStack_233d;
  undefined4 uStack_233c;
  undefined4 uStack_2338;
  undefined4 uStack_2334;
  undefined4 uStack_2330;
  undefined4 uStack_232c;
  undefined4 uStack_2328;
  undefined4 uStack_2324;
  undefined4 uStack_2320;
  undefined4 uStack_231c;
  long lStack_2318;
  long lStack_2310;
  undefined8 uStack_2308;
  long **pplStack_2300;
  long **pplStack_22f8;
  long **pplStack_22f0;
  long **pplStack_22e8;
  long **pplStack_22e0;
  long **pplStack_22d8;
  long **pplStack_22d0;
  long **pplStack_22c8;
  long **pplStack_22c0;
  long **pplStack_22b8;
  undefined8 uStack_22b0;
  long **pplStack_22a8;
  undefined8 uStack_22a0;
  undefined8 uStack_2298;
  undefined8 uStack_2290;
  undefined8 uStack_2288;
  undefined8 uStack_2280;
  undefined8 uStack_2278;
  undefined8 uStack_2270;
  undefined8 uStack_2268;
  undefined8 uStack_2260;
  undefined8 uStack_2258;
  undefined8 uStack_2250;
  undefined8 uStack_2248;
  undefined8 uStack_2240;
  undefined8 uStack_2238;
  undefined8 uStack_2230;
  undefined8 uStack_2228;
  long *plStack_2220;
  long *plStack_2218;
  undefined8 uStack_2210;
  long **pplStack_2208;
  undefined8 uStack_2200;
  undefined8 uStack_21f8;
  undefined4 uStack_21f0;
  undefined2 uStack_21ec;
  undefined1 uStack_21ea;
  undefined8 uStack_21e8;
  undefined8 uStack_21e0;
  undefined8 uStack_21d8;
  undefined2 uStack_21d0;
  undefined6 uStack_21ce;
  undefined2 uStack_21c8;
  undefined8 uStack_21c6;
  undefined8 uStack_21b8;
  undefined2 uStack_21b0;
  undefined2 uStack_21ac;
  undefined1 uStack_21aa;
  undefined8 uStack_21a8;
  undefined8 uStack_21a0;
  undefined8 uStack_2198;
  undefined1 uStack_2190;
  undefined4 uStack_2188;
  undefined8 uStack_2184;
  undefined8 uStack_217c;
  undefined8 uStack_2174;
  undefined8 uStack_216c;
  undefined8 uStack_2164;
  undefined4 uStack_215c;
  undefined7 uStack_2158;
  undefined1 uStack_2151;
  undefined7 uStack_2150;
  undefined2 uStack_2149;
  undefined8 uStack_2140;
  undefined8 uStack_2138;
  undefined8 uStack_2130;
  undefined4 uStack_2128;
  undefined8 uStack_2120;
  undefined8 uStack_2118;
  undefined8 uStack_2110;
  undefined8 uStack_2108;
  undefined8 uStack_2100;
  undefined2 uStack_20f8;
  undefined8 uStack_20f0;
  undefined8 uStack_1f68;
  undefined8 uStack_1f60;
  undefined8 uStack_1f58;
  undefined4 uStack_1f50;
  undefined8 uStack_1f48;
  undefined8 uStack_1f40;
  undefined8 uStack_1f38;
  undefined8 uStack_1f30;
  undefined8 uStack_1f28;
  undefined2 uStack_1f20;
  undefined8 uStack_1f18;
  undefined8 uStack_1d90;
  undefined8 uStack_1d88;
  undefined8 uStack_1d80;
  undefined4 uStack_1d78;
  undefined8 uStack_1d70;
  undefined8 uStack_1d68;
  undefined8 uStack_1d60;
  undefined8 uStack_1d58;
  undefined8 uStack_1d50;
  undefined2 uStack_1d48;
  undefined8 uStack_1d40;
  undefined8 uStack_1bb8;
  long *aplStack_1bb0 [5];
  long lStack_1b88;
  long lStack_1b80;
  long lStack_12d0;
  long lStack_12c8;
  long alStack_1298 [3];
  long *plStack_1280;
  long lStack_1278;
  long lStack_1270;
  undefined1 uStack_1260;
  long lStack_1258;
  undefined1 **ppuStack_1200;
  code *pcStack_11f8;
  long alStack_11e8 [3];
  long *plStack_11d0;
  long lStack_11c8;
  long lStack_11c0;
  undefined1 *puStack_11b0;
  code *pcStack_11a8;
  long *plStack_11a0;
  long lStack_1198;
  long ****pppplStack_1190;
  undefined4 auStack_1188 [28];
  long lStack_1118;
  long lStack_1110;
  long lStack_1020;
  long lStack_1018;
  undefined1 auStack_9b0 [40];
  long lStack_988;
  long lStack_980;
  long lStack_d0;
  long lStack_c8;
  long alStack_98 [3];
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined2 *)(*(long *)(param_2 + 0x18) + 2);
  lVar9 = *(long *)(param_2 + 0x10);
  FUN_10a01f6d4(lVar9,uVar4);
  FUN_10a1912d4(auStack_1188,lVar9);
  lVar9 = *(long *)(param_2 + 0x10) + 0x5c0;
  func_0x00010a04a0d4(lVar9,uVar4);
  FUN_10a193e84(auStack_9b0,lVar9);
  plStack_11a0 = &lStack_1198;
  puVar17 = auStack_1188;
  FUN_10aba5ef0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),param_2,puVar17,
                auStack_9b0,param_3,param_4,&pppplStack_1190);
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  if (plStack_80 == alStack_98) {
    lVar9 = 0x20;
LAB_10aba5910:
    (**(code **)(*plStack_80 + lVar9))();
  }
  else if (plStack_80 != (long *)0x0) {
    lVar9 = 0x28;
    goto LAB_10aba5910;
  }
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  if (lStack_988 != 0) {
    lStack_980 = lStack_988;
    __ZdlPv();
  }
  if (lStack_1020 != 0) {
    lStack_1018 = lStack_1020;
    __ZdlPv();
  }
  if (lStack_1118 != 0) {
    lStack_1110 = lStack_1118;
    __ZdlPv();
  }
  FUN_10aba59fc(lStack_1198 + 0x918,param_4 + 0x10);
  if (lStack_1198 + 0x938 != param_4 + 0x30) {
    param_2 = *(long *)(param_4 + 0x38);
    puVar17 = (undefined4 *)(param_2 - *(long *)(param_4 + 0x30) >> 2);
    FUN_10abd4ff0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar32._8_8_ = lStack_1198;
    auVar32._0_8_ = pppplStack_1190;
    return auVar32;
  }
  ppppplVar26 = (long *****)pppplStack_1190;
  ___stack_chk_fail();
  func_0x00010a174f6c(auStack_9b0);
  FUN_10a191294(auStack_1188);
  __Unwind_Resume();
  lStack_11c0 = lStack_1198;
  pcStack_11a8 = FUN_10aba59fc;
  lStack_11c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_11b0 = &stack0xfffffffffffffff0;
  func_0x00010a194208(alStack_11e8);
  ppppplVar14 = ppppplVar26;
  FUN_10abda784(alStack_11e8);
  if (plStack_11d0 == alStack_11e8) {
    lVar9 = 0x20;
LAB_10aba5a54:
    (**(code **)(*plStack_11d0 + lVar9))();
    plVar10 = plStack_11d0;
  }
  else {
    plVar10 = plStack_11d0;
    if (plStack_11d0 != (long *)0x0) {
      lVar9 = 0x28;
      goto LAB_10aba5a54;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_11c8) {
    auVar33._8_8_ = ppppplVar14;
    auVar33._0_8_ = ppppplVar26;
    return auVar33;
  }
  ___stack_chk_fail();
  pcStack_11f8 = FUN_10aba5a90;
  ppuStack_1200 = &puStack_11b0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_1258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplVar21 = ppppplVar14[2];
  uVar29 = (ulong)*(ushort *)((long)ppppplVar14[3] + 2);
  FUN_10a01f6d4(pppplVar21,uVar29);
  uStack_2380 = 0;
  ppplStack_2388 = (long ***)0x0;
  uStack_2378 = 0xffffffffffffffff;
  uStack_2370 = 0xffffffffffffffff;
  uStack_2366 = 0xffffff;
  uStack_2360 = 1;
  uStack_2350 = 0;
  uStack_2358 = 0;
  uStack_234c = 0;
  uStack_2348 = 0;
  uStack_22b0._0_4_ = (uint)uStack_22b0 & 0xffffff00;
  lStack_2310 = 0;
  lStack_2318 = 0;
  pplStack_2300 = (long **)((ulong)pplStack_2300 & 0xffffffffffffff00);
  uStack_2308 = 0;
  uStack_22b0 = (long ***)CONCAT44(3,(uint)uStack_22b0);
  pplStack_22a8 = (long **)NEON_fmov(0x3f800000,4);
  uStack_2278 = 0x3f800000;
  uStack_2280 = 0;
  uStack_2268 = 0x3f80000000000000;
  uStack_2270 = 0;
  uStack_2298 = 0;
  uStack_22a0 = 0x3f800000;
  uStack_2288 = 0;
  uStack_2290 = 0x3f80000000000000;
  uStack_2258 = 0;
  uStack_2260 = 0x3f800000;
  uStack_2248 = 0;
  uStack_2250 = 0x3f80000000000000;
  uStack_2238 = 0x3f800000;
  uStack_2240 = 0;
  uStack_2228 = 0x3f80000000000000;
  uStack_2230 = 0;
  plStack_2218 = (long *)0x0;
  plStack_2220 = (long *)0x0;
  pplStack_2208 = (long **)0x0;
  uStack_2210 = 0;
  uStack_21f8 = 0;
  uStack_2200 = 0;
  uStack_21f0 = 0x3f800000;
  uStack_21ec = 0;
  uStack_21ea = 0;
  uStack_21c6 = 0;
  uStack_21c8 = 0;
  uStack_21d0 = 0;
  uStack_21ce = 0;
  uStack_21d8 = 0;
  uStack_21e0 = 0;
  uStack_21e8 = 0;
  uStack_21b8 = 0;
  uStack_21b0 = 0;
  uStack_21ac = 0x400;
  uStack_21aa = 4;
  uStack_21a0 = 0x3f80000000000000;
  uStack_21a8 = 0;
  uStack_2190 = 0;
  uStack_2198 = 0;
  uStack_2188 = 0;
  uStack_217c = 0x3e4ccccd40000000;
  uStack_2184 = 0x3e4ccccd3f800000;
  uStack_2174 = 0x700000037;
  uStack_2164 = 0x3f0000003f800000;
  uStack_216c = 0x3f8000003f800000;
  uStack_215c = 0x3f800000;
  uStack_2150 = 0;
  uStack_2158 = 0;
  uStack_2151 = 0;
  uStack_2149 = 1;
  uStack_2138 = 0;
  uStack_2140 = 0;
  uStack_2128 = 0;
  uStack_2130 = 0;
  uStack_2118 = 0;
  uStack_2120 = 0;
  uStack_2108 = 0;
  uStack_2110 = 0;
  uStack_2100 = 0;
  uStack_20f8 = 0xffff;
  uStack_20f0 = 0;
  uStack_1f58 = 0;
  uStack_1f50 = 0;
  uStack_1f60 = 0;
  uStack_1f68 = 0;
  uStack_1f40 = 0;
  uStack_1f48 = 0;
  uStack_1f30 = 0;
  uStack_1f38 = 0;
  uStack_1f28 = 0;
  uStack_1f20 = 0xffff;
  uStack_1f18 = 0;
  uStack_1d88 = 0;
  uStack_1d90 = 0;
  uStack_1d80 = 0;
  uStack_1d78 = 0;
  uStack_1d68 = 0;
  uStack_1d70 = 0;
  uStack_1d58 = 0;
  uStack_1d60 = 0;
  uStack_1d50 = 0;
  uStack_1d48 = 0xffff;
  uStack_1d40 = 0;
  uStack_1bb8 = 0;
  uStack_2368 = *(undefined2 *)(pppplVar21 + 4);
  ppplVar15 = pppplVar21[9];
  uStack_2338 = SUB84(pppplVar21[10],0);
  uStack_2334 = (undefined4)((ulong)pppplVar21[10] >> 0x20);
  uStack_2340 = SUB82(ppplVar15,0);
  uStack_233e = (undefined1)((ulong)ppplVar15 >> 0x10);
  uStack_233d = (undefined1)((ulong)ppplVar15 >> 0x18);
  uStack_233c = (undefined4)((ulong)ppplVar15 >> 0x20);
  uStack_2328 = SUB84(pppplVar21[0xc],0);
  uStack_2324 = (undefined4)((ulong)pppplVar21[0xc] >> 0x20);
  uStack_2330 = SUB84(pppplVar21[0xb],0);
  uStack_232c = (undefined4)((ulong)pppplVar21[0xb] >> 0x20);
  uStack_2320 = SUB84(pppplVar21[0xd],0);
  uStack_231c = (undefined4)((ulong)pppplVar21[0xd] >> 0x20);
  if (&ppplStack_2388 != pppplVar21) {
    func_0x00010a5e3750(&lStack_2318,pppplVar21[0xe],pppplVar21[0xf],
                        ((long)pppplVar21[0xf] - (long)pppplVar21[0xe] >> 4) * -0x3333333333333333);
  }
  pplStack_22f8 = (long **)pppplVar21[0x12];
  pplStack_2300 = (long **)pppplVar21[0x11];
  pplStack_22e8 = (long **)pppplVar21[0x14];
  pplStack_22f0 = (long **)pppplVar21[0x13];
  pplStack_22d8 = (long **)pppplVar21[0x16];
  pplStack_22e0 = (long **)pppplVar21[0x15];
  pplStack_22c8 = (long **)pppplVar21[0x18];
  pplStack_22d0 = (long **)pppplVar21[0x17];
  pplStack_22b8 = (long **)pppplVar21[0x1a];
  pplStack_22c0 = (long **)pppplVar21[0x19];
  pplStack_22a8 = (long **)pppplVar21[0x1c];
  uStack_22b0 = pppplVar21[0x1b];
  uStack_2350 = *(undefined4 *)(pppplVar21 + 7);
  FUN_10a5d2dd0(&plStack_2220,
                ((long)pppplVar21[0x2e] - (long)pppplVar21[0x2d] >> 4) * -0x5555555555555555);
  lVar9 = (long)pppplVar21[0x2e] - (long)pppplVar21[0x2d];
  if (lVar9 != 0) {
    lVar9 = (lVar9 >> 4) * -0x5555555555555555;
    lVar25 = ((long)plStack_2218 - (long)plStack_2220 >> 4) * -0x5555555555555555;
    ppplVar15 = pppplVar21[0x2d];
    plVar19 = plStack_2220;
    do {
      if (lVar25 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10aba5ec4);
        (*pcVar8)();
      }
      *plVar19 = (long)*ppplVar15;
      lVar25 = lVar25 + -1;
      lVar9 = lVar9 + -1;
      ppplVar15 = ppplVar15 + 6;
      plVar19 = plVar19 + 6;
    } while (lVar9 != 0);
  }
  pplStack_2208 = (long **)pppplVar21[0x30];
  pppplVar23 = ppppplVar14[2] + 0xb8;
  func_0x00010a04a0d4(pppplVar23,uVar29);
  FUN_10a193e84(aplStack_1bb0,pppplVar23);
  lStack_12c8 = lStack_12d0;
  uStack_1260 = 1;
  lVar9 = plVar10[7];
  plStack_23a0 = &lStack_2398;
  ppuVar16 = (undefined **)&ppplStack_2388;
  ppplVar15 = (long ***)aplStack_1bb0;
  plVar19 = &lStack_2390;
  lVar25 = param_2;
  FUN_10aba5ef0(plVar10[6]);
  uVar18 = (uint)lVar25;
  if (lStack_1278 != 0) {
    lStack_1270 = lStack_1278;
    __ZdlPv();
  }
  if (plStack_1280 == alStack_1298) {
    lVar25 = 0x20;
LAB_10aba5e34:
    (**(code **)(*plStack_1280 + lVar25))();
  }
  else if (plStack_1280 != (long *)0x0) {
    lVar25 = 0x28;
    goto LAB_10aba5e34;
  }
  if (lStack_12d0 != 0) {
    lStack_12c8 = lStack_12d0;
    __ZdlPv();
  }
  if (lStack_1b88 != 0) {
    lStack_1b80 = lStack_1b88;
    __ZdlPv();
  }
  if (plStack_2220 != (long *)0x0) {
    plStack_2218 = plStack_2220;
    __ZdlPv();
  }
  lVar25 = lStack_2318;
  if (lStack_2318 != 0) {
    lStack_2310 = lStack_2318;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1258) {
    auVar34._8_8_ = lVar9;
    auVar34._0_8_ = lStack_2390;
    return auVar34;
  }
  ___stack_chk_fail();
  func_0x00010a174f6c(aplStack_1bb0);
  FUN_10a191294(&ppplStack_2388);
  lVar11 = lVar25;
  __Unwind_Resume();
  pcStack_23a8 = FUN_10aba5ef0;
  *(undefined4 *)(ppplVar15 + 0x120) = *(undefined4 *)ppppplVar14;
  *(undefined2 *)((long)ppplVar15 + 0x904) = *(undefined2 *)((long)ppppplVar14 + 4);
  *(short *)((long)ppplVar15 + 0x906) = (short)uVar18;
  *(undefined4 *)(ppplVar15 + 0x121) = *puVar17;
  pppplVar23 = ppppplVar14[2];
  pppplVar31 = ppppplVar14[3];
  ppplVar15[0x122] = (long **)pppplVar23;
  pplStack_2410 = (long **)pppplVar31[2];
  uStack_2418 = pppplVar31[1];
  uStack_2420._4_4_ = (undefined4)((ulong)*pppplVar31 >> 0x20);
  uStack_2420._0_2_ = SUB82(*pppplVar31,0);
  uStack_2420 = CONCAT44(uStack_2420._4_4_,
                         CONCAT22((short)((uint)(*(int *)(pppplVar23 + 0xe8) -
                                                *(int *)(pppplVar23 + 0xe7)) >> 3) * 0xa33,
                                  (undefined2)uStack_2420)) | 0x80000000;
  ppplStack_23e0 = (long ***)pppplVar21;
  uStack_23d8 = uVar29;
  lStack_23c0 = param_2;
  lStack_23b8 = lVar25;
  pppuStack_23b0 = &ppuStack_1200;
  if (lVar11 == lVar9) {
    pppplVar21 = (long ****)0x0;
  }
  else {
    uVar29 = (lVar9 - lVar11 >> 3) * -0x5555555555555555;
    if (uVar29 < uVar18 || uVar29 - uVar18 == 0) goto LAB_10aba6178;
    pppplVar21 = (long ****)(lVar11 + (ulong)uVar18 * 0x18);
  }
  *ppuVar16 = (undefined *)pppplVar21;
  ppuVar16[1] = (undefined *)pppplVar21;
  iVar20 = puVar17[1];
  if (iVar20 == -0x80000000) {
    iVar20 = *(int *)(ppuVar16 + 7);
  }
  else {
    *(int *)(ppuVar16 + 7) = iVar20;
  }
  uStack_2420 = CONCAT44(iVar20,(undefined4)uStack_2420);
  uVar29 = (ulong)uStack_2418 >> 0x20;
  uStack_2418 = (long ***)CONCAT44((int)uVar29,puVar17[2]);
  *(undefined4 *)((long)ppuVar16 + 0x3c) = puVar17[2];
  pppplVar21 = (long ****)ppuVar16[0x2d];
  if ((long ****)ppuVar16[0x2e] != pppplVar21) {
    *(undefined1 *)((long)pppplVar21 + 0x29) = 0;
    *(undefined1 *)((long)*pppplVar21 + 0x334) = 0;
  }
  *(undefined1 *)((long)ppuVar16 + 0x19d) = 0;
  ppppplVar26 = (long *****)ppuVar16;
  ppplVar22 = ppplVar15;
  FUN_10a5e72a4(pppplVar23 + 0xe4,&uStack_2420);
  pppplVar21 = pppplVar23 + 0xe7;
  FUN_10a5e6a6c(pppplVar21,ppuVar16);
  pppplVar31 = pppplVar23 + 0xea;
  pppplVar1 = pppplVar23 + 0xeb;
  pppplVar27 = (long ****)pppplVar23[0xeb];
  if (pppplVar27 < pppplVar23[0xec]) {
    pppplVar21 = pppplVar27;
    FUN_10a193e84(pppplVar27,ppplVar15);
    pppplVar27 = pppplVar27 + 299;
    *pppplVar1 = (long ***)pppplVar27;
  }
  else {
    ppplVar28 = (long ***)((long)pppplVar27 - (long)*pppplVar31);
    uVar29 = ((long)ppplVar28 >> 3) * 0x72baa619af84b583 + 1;
    if (0x1b65e2e3beee05 < uVar29) {
      FUN_10a5e8390();
      *pppplVar1 = ppplVar28;
      __Unwind_Resume();
      lStack_24a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_2510 = -1;
      lStack_2508 = -1;
      if ((int)ppplVar22 < 0) {
        ppppplVar13 = (long *****)(&PTR_DAT_110c50c00 + ((ulong)ppuVar16 & 0xffffffff) * 5);
        func_0x000107c2b074(&pppplStack_24f8,ppppplVar13);
        uStack_24fc = (undefined3)((ulong)uStack_24e8 >> 0x20);
        uStack_256c = (uint)uStack_24e8._7_1_;
        pppplStack_2578 = pppplStack_24f8;
        uStack_2500 = (undefined4)uStack_24e8;
        ppppplVar30 = (long *****)pppplStack_24f0;
        pppplVar23 = (long ****)ppplStack_24e0;
joined_r0x00010aba6260:
        if (ppppplVar14 == (long *****)0x0) goto LAB_10aba6264;
LAB_10aba632c:
        pppplVar31 = ppppplVar14[0x4d];
      }
      else {
        func_0x000107c2b074(&pppplStack_24f8,&PTR_DAT_110c50c00 + ((ulong)ppuVar16 & 0xffffffff) * 5
                           );
        if ((long)uStack_24e8 < 0) {
          func_0x000107c3192c(&pppplStack_2550,pppplStack_24f8,pppplStack_24f0);
        }
        else {
          pppplStack_2548 = pppplStack_24f0;
          pppplStack_2550 = pppplStack_24f8;
          pppplStack_2540 = (long ****)uStack_24e8;
        }
        __ZNSt3__19to_stringEi(&ppppuStack_2568,ppplVar22);
        pppppuVar7 = (undefined8 *****)ppppuStack_2568;
        if (-1 < (char)bStack_2551) {
          uStack_2560 = (ulong)bStack_2551;
          pppppuVar7 = &ppppuStack_2568;
        }
        ppppplVar13 = &pppplStack_2550;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppplVar13,pppppuVar7,uStack_2560);
        ppplStack_2528 = (long ***)ppppplVar13[1];
        pppplStack_2530 = *ppppplVar13;
        ppplStack_2520 = (long ***)ppppplVar13[2];
        ppppplVar13[1] = (long ****)0x0;
        ppppplVar13[2] = (long ****)0x0;
        *ppppplVar13 = (long ****)0x0;
        if ((char)bStack_2551 < '\0') {
          __ZdlPv(ppppuStack_2568);
        }
        if ((long)pppplStack_2540 < 0) {
          __ZdlPv(pppplStack_2550);
        }
        if ((long)uStack_24e8 < 0) {
          __ZdlPv(pppplStack_24f8);
        }
        ppppplVar13 = &pppplStack_24f8;
        ppuVar16 = (undefined **)&pppplStack_2530;
        FUN_10a0d09b4(ppppplVar13,ppuVar16);
        pppplVar23 = (long ****)ppplStack_24e0;
        ppppplVar30 = (long *****)pppplStack_24f0;
        pppplStack_2578 = pppplStack_24f8;
        uStack_24fc = (undefined3)((ulong)uStack_24e8 >> 0x20);
        uStack_256c = (uint)uStack_24e8._7_1_;
        uStack_2500 = (undefined4)uStack_24e8;
        if ((long)ppplStack_2520 < 0) {
          ppppplVar13 = (long *****)pppplStack_2530;
          __ZdlPv(pppplStack_2530);
          goto joined_r0x00010aba6260;
        }
        if (ppppplVar14 != (long *****)0x0) goto LAB_10aba632c;
LAB_10aba6264:
        pppplVar31 = (long ****)0x0;
      }
      uVar3 = *(undefined1 *)ppppplVar26;
      uStack_2514 = *(undefined2 *)((long)ppppplVar26 + 1);
      uStack_2512 = *(undefined1 *)((long)ppppplVar26 + 3);
      uVar2 = *(undefined4 *)((long)ppppplVar26 + 4);
      ppplStack_24d0 = (long ***)ppppplVar26[1];
      uStack_24c8 = SUB86(ppppplVar26[2],0);
      uStack_24ba = *(undefined8 *)((long)ppppplVar26 + 0x1e);
      uStack_24c2 = (undefined2)*(undefined8 *)((long)ppppplVar26 + 0x16);
      uStack_24c0 = (undefined6)((ulong)*(undefined8 *)((long)ppppplVar26 + 0x16) >> 0x10);
      uVar4 = *(undefined2 *)((long)ppppplVar26 + 0x26);
      ppppplVar26 = (long *****)pppplVar21[0x1e];
      if (ppppplVar26 < pppplVar21[0x1f]) {
        if (uStack_256c >> 7 == 0) {
          *ppppplVar26 = pppplStack_2578;
          ppppplVar26[1] = (long ****)ppppplVar30;
          *(undefined4 *)(ppppplVar26 + 2) = uStack_2500;
          *(uint *)((long)ppppplVar26 + 0x13) = CONCAT31(uStack_24fc,uStack_2500._3_1_);
          *(char *)((long)ppppplVar26 + 0x17) = (char)uStack_256c;
        }
        else {
          ppppplVar13 = ppppplVar26;
          ppuVar16 = (undefined **)pppplStack_2578;
          func_0x000107c3192c(ppppplVar26,pppplStack_2578,ppppplVar30);
        }
        ppppplVar26[3] = pppplVar23;
        ppppplVar26[4] = (long ****)0xffffffffffffffff;
        ppppplVar26[5] = (long ****)0xffffffffffffffff;
        ppppplVar26[6] = pppplVar31;
        *(undefined2 *)(ppppplVar26 + 7) = 0xd;
        *(undefined1 *)((long)ppppplVar26 + 0x3c) = uVar3;
        *(undefined2 *)((long)ppppplVar26 + 0x3d) = uStack_2514;
        *(undefined1 *)((long)ppppplVar26 + 0x3f) = uStack_2512;
        *(undefined4 *)(ppppplVar26 + 8) = uVar2;
        *(ulong *)((long)ppppplVar26 + 0x4c) = CONCAT26(uStack_24c2,uStack_24c8);
        *(long ****)((long)ppppplVar26 + 0x44) = ppplStack_24d0;
        *(undefined8 *)((long)ppppplVar26 + 0x5a) = uStack_24ba;
        *(ulong *)((long)ppppplVar26 + 0x52) = CONCAT62(uStack_24c0,uStack_24c2);
        *(undefined2 *)((long)ppppplVar26 + 0x62) = uVar4;
        ppppplVar26 = ppppplVar26 + 0xd;
        pppplVar21[0x1e] = (long ***)ppppplVar26;
      }
      else {
        pppplVar1 = pppplVar21 + 0x1d;
        lVar9 = (long)ppppplVar26 - (long)*pppplVar1;
        uVar29 = (lVar9 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
        if (0x276276276276276 < uVar29) goto LAB_10aba6664;
        lVar25 = (long)pppplVar21[0x1f] - (long)*pppplVar1 >> 3;
        uVar24 = lVar25 * -0x6276276276276276;
        if (uVar24 < uVar29 || uVar24 - uVar29 == 0) {
          uVar24 = uVar29;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar25 * 0x4ec4ec4ec4ec4ec5)) {
          uVar24 = 0x276276276276276;
        }
        ppplStack_24d8 = (long ***)pppplVar1;
        if (uVar24 == 0) {
          pppplVar27 = (long ****)0x0;
        }
        else {
          pppplVar27 = pppplVar1;
          FUN_10a045464();
        }
        plVar10 = (long *)((long)pppplVar27 + lVar9);
        ppplStack_24e0 = (long ***)(pppplVar27 + uVar24 * 0xd);
        pppplStack_24f8 = pppplVar27;
        pppplStack_24f0 = (long ****)plVar10;
        if (uStack_256c >> 7 == 0) {
          *plVar10 = (long)pppplStack_2578;
          plVar10[1] = (long)ppppplVar30;
          *(undefined4 *)(plVar10 + 2) = uStack_2500;
          *(uint *)((long)plVar10 + 0x13) = CONCAT31(uStack_24fc,uStack_2500._3_1_);
          *(char *)((long)plVar10 + 0x17) = (char)uStack_256c;
        }
        else {
          uStack_24e8 = (long *****)plVar10;
          func_0x000107c3192c(plVar10,pppplStack_2578,ppppplVar30);
        }
        plVar10[3] = (long)pppplVar23;
        plVar10[5] = lStack_2508;
        plVar10[4] = lStack_2510;
        plVar10[6] = (long)pppplVar31;
        *(undefined2 *)(plVar10 + 7) = 0xd;
        *(undefined1 *)((long)plVar10 + 0x3c) = uVar3;
        *(undefined2 *)((long)plVar10 + 0x3d) = uStack_2514;
        *(undefined1 *)((long)plVar10 + 0x3f) = uStack_2512;
        *(undefined4 *)(plVar10 + 8) = uVar2;
        *(ulong *)((long)plVar10 + 0x4c) = CONCAT26(uStack_24c2,uStack_24c8);
        *(long ****)((long)plVar10 + 0x44) = ppplStack_24d0;
        *(undefined8 *)((long)plVar10 + 0x5a) = uStack_24ba;
        *(ulong *)((long)plVar10 + 0x52) = CONCAT62(uStack_24c0,uStack_24c2);
        *(undefined2 *)((long)plVar10 + 0x62) = uVar4;
        uStack_24e8 = (long *****)(plVar10 + 0xd);
        ppuVar16 = (undefined **)pppplVar21[0x1d];
        ppplVar15 = (long ***)((long)plVar10 + ((long)ppuVar16 - (long)pppplVar21[0x1e]));
        func_0x00010a5e5a8c(pppplVar1,ppuVar16,pppplVar21[0x1e],ppplVar15);
        ppppplVar26 = uStack_24e8;
        pppplStack_24f8 = (long ****)pppplVar21[0x1d];
        pppplVar21[0x1d] = ppplVar15;
        pppplVar23 = (long ****)pppplVar21[0x1f];
        pppplVar21[0x1f] = ppplStack_24e0;
        pppplVar21[0x1e] = (long ***)uStack_24e8;
        ppppplVar13 = &pppplStack_24f8;
        pppplStack_24f0 = pppplStack_24f8;
        uStack_24e8 = (long *****)pppplStack_24f8;
        ppplStack_24e0 = (long ***)pppplVar23;
        func_0x00010a5e5b64(ppppplVar13);
      }
      pppplVar21[0x1e] = (long ***)ppppplVar26;
      if (ppppplVar14 != (long *****)0x0) {
        ppuVar16 = &PTR_DAT_110c4eff0;
        ___dynamic_cast(ppppplVar14,&PTR_DAT_110c4eff0,&PTR_DAT_110bb2dc8,0xfffffffffffffffe);
        ppppplVar13 = ppppplVar14;
        if (ppppplVar14 != (long *****)0x0) {
          ppppplVar26 = ppppplVar14;
          FUN_10a1dd000();
          ppppplVar13 = (long *****)0x0;
          if (ppppplVar26 != (long *****)0x0) {
            ppuVar16 = &PTR_DAT_110c54628;
            ___dynamic_cast();
            ppppplVar13 = (long *****)0x0;
            if (ppppplVar26 != (long *****)0x0) {
              FUN_10abf1b04();
              ppuVar16 = (undefined **)0x1;
              FUN_10a088744(ppppplVar14);
              ppppplVar13 = ppppplVar14;
              if (((long *****)ppuVar16 != (long *****)0x0) &&
                 (ppppplVar26 = (long *****)ppuVar16[1], ppppplVar26 != (long *****)0x0)) {
                ppppplVar14 = ppppplVar26 + 1;
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppppplVar14,0x10);
                  if (bVar6) {
                    *ppppplVar14 = (long ****)((long)*ppppplVar14 + 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                do {
                  pppplVar21 = *ppppplVar14;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppppplVar14,0x10);
                  if (bVar6) {
                    *ppppplVar14 = (long ****)((long)pppplVar21 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (pppplVar21 == (long ****)0x0) {
                  (*(code *)(*ppppplVar26)[2])(ppppplVar26);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar26);
                  ppppplVar13 = ppppplVar26;
                }
              }
            }
          }
        }
      }
      if (uStack_256c >> 7 != 0) {
        __ZdlPv(pppplStack_2578);
        ppppplVar13 = (long *****)pppplStack_2578;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_24a8) {
        auVar36._8_8_ = ppuVar16;
        auVar36._0_8_ = ppppplVar13;
        return auVar36;
      }
      ___stack_chk_fail();
LAB_10aba6664:
      FUN_10a045450();
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10aba666c);
      (*pcVar8)();
    }
    lVar9 = (long)pppplVar23[0xec] - (long)*pppplVar31 >> 3;
    uVar24 = lVar9 * -0x1a8ab3cca0f694fa;
    if (uVar24 < uVar29 || uVar24 - uVar29 == 0) {
      uVar24 = uVar29;
    }
    if (0xdb2f171df7701 < (ulong)(lVar9 * 0x72baa619af84b583)) {
      uVar24 = 0x1b65e2e3beee05;
    }
    ppplStack_23e8 = (long ***)pppplVar31;
    if (uVar24 == 0) {
      pppplVar21 = (long ****)0x0;
    }
    else {
      pppplVar21 = pppplVar31;
      FUN_10a5e83a4();
    }
    puVar12 = (undefined *)((long)pppplVar21 + (long)ppplVar28);
    ppplStack_23f0 = (long ***)(pppplVar21 + uVar24 * 299);
    ppplStack_2408 = (long ***)pppplVar21;
    pplStack_2400 = (long **)puVar12;
    ppplStack_23f8 = (long ***)puVar12;
    FUN_10a193e84(puVar12,ppplVar15);
    ppplStack_23f8 = (long ***)(puVar12 + 0x958);
    ppplVar15 = *pppplVar31;
    ppplVar22 = (long ***)((long)ppplVar15 + ((long)puVar12 - (long)*pppplVar1));
    FUN_10a5e83ec(pppplVar31,ppplVar15,*pppplVar1,ppplVar22);
    pppplVar27 = (long ****)ppplStack_23f8;
    ppplStack_2408 = pppplVar23[0xea];
    pppplVar23[0xea] = ppplVar22;
    ppplVar22 = pppplVar23[0xec];
    pppplVar23[0xec] = ppplStack_23f0;
    *pppplVar1 = ppplStack_23f8;
    pppplVar21 = &ppplStack_2408;
    pplStack_2400 = (long **)ppplStack_2408;
    ppplStack_23f8 = ppplStack_2408;
    ppplStack_23f0 = ppplVar22;
    FUN_10a5e86c8(pppplVar21);
  }
  pppplVar23[0xeb] = (long ***)pppplVar27;
  if (pppplVar23[0xe7] != pppplVar23[0xe8]) {
    *plVar19 = (long)(pppplVar23[0xe8] + -0xfb);
    if (*pppplVar31 != *pppplVar1) {
      *plStack_23a0 = (long)(*pppplVar1 + -299);
      auVar35._8_8_ = ppplVar15;
      auVar35._0_8_ = pppplVar21;
      return auVar35;
    }
  }
LAB_10aba6178:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10aba617c);
  (*pcVar8)();
}



/* Entry: 10aba59fc; end: 10aba5a8f;  */

long *****
FUN_10aba59fc(long *****param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long ****pppplVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *****pppppuVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  undefined *puVar11;
  long ****pppplVar12;
  long *****ppppplVar13;
  long ***ppplVar14;
  long ***ppplVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined8 uVar19;
  int iVar20;
  long lVar21;
  long **pplVar22;
  long ****pppplVar23;
  long *****ppppplVar24;
  long ****pppplVar25;
  long *plVar26;
  ulong uVar27;
  long lVar28;
  long *****ppppplVar29;
  long *****ppppplVar30;
  long ***ppplVar31;
  ulong uVar32;
  long ****pppplVar33;
  long ****pppplStack_13d8;
  uint uStack_13cc;
  undefined8 ****ppppuStack_13c8;
  ulong uStack_13c0;
  byte bStack_13b1;
  long ****pppplStack_13b0;
  long ****pppplStack_13a8;
  long ****pppplStack_13a0;
  long ****pppplStack_1390;
  long ***ppplStack_1388;
  long ***ppplStack_1380;
  undefined2 uStack_1374;
  undefined1 uStack_1372;
  long lStack_1370;
  long lStack_1368;
  undefined4 uStack_1360;
  undefined3 uStack_135c;
  long ****pppplStack_1358;
  long ****pppplStack_1350;
  undefined8 uStack_1348;
  long ***ppplStack_1340;
  long ***ppplStack_1338;
  long *plStack_1330;
  undefined6 uStack_1328;
  undefined2 uStack_1322;
  undefined6 uStack_1320;
  undefined8 uStack_131a;
  long lStack_1308;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  long **pplStack_1270;
  long ***ppplStack_1268;
  long ***ppplStack_1260;
  long ****pppplStack_1258;
  long ***ppplStack_1250;
  long ***ppplStack_1248;
  long ***ppplStack_1240;
  ulong uStack_1238;
  long ****pppplStack_1228;
  undefined8 uStack_1220;
  long lStack_1218;
  undefined1 **ppuStack_1210;
  code *pcStack_1208;
  long *plStack_1200;
  long lStack_11f8;
  long ****pppplStack_11f0;
  long **pplStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined2 uStack_11c8;
  undefined4 uStack_11c6;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined4 uStack_11b0;
  undefined4 uStack_11ac;
  undefined5 uStack_11a8;
  undefined2 uStack_11a0;
  undefined1 uStack_119e;
  undefined1 uStack_119d;
  undefined4 uStack_119c;
  undefined4 uStack_1198;
  undefined4 uStack_1194;
  undefined4 uStack_1190;
  undefined4 uStack_118c;
  undefined4 uStack_1188;
  undefined4 uStack_1184;
  undefined4 uStack_1180;
  undefined4 uStack_117c;
  long lStack_1178;
  long lStack_1170;
  undefined8 uStack_1168;
  long **pplStack_1160;
  long **pplStack_1158;
  long **pplStack_1150;
  long **pplStack_1148;
  long **pplStack_1140;
  long **pplStack_1138;
  long **pplStack_1130;
  long **pplStack_1128;
  long **pplStack_1120;
  long **pplStack_1118;
  undefined8 uStack_1110;
  long **pplStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  long *plStack_1080;
  long *plStack_1078;
  undefined8 uStack_1070;
  long **pplStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined4 uStack_1050;
  undefined2 uStack_104c;
  undefined1 uStack_104a;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined2 uStack_1030;
  undefined6 uStack_102e;
  undefined2 uStack_1028;
  undefined8 uStack_1026;
  undefined8 uStack_1018;
  undefined2 uStack_1010;
  undefined2 uStack_100c;
  undefined1 uStack_100a;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined1 uStack_ff0;
  undefined4 uStack_fe8;
  undefined8 uStack_fe4;
  undefined8 uStack_fdc;
  undefined8 uStack_fd4;
  undefined8 uStack_fcc;
  undefined8 uStack_fc4;
  undefined4 uStack_fbc;
  undefined7 uStack_fb8;
  undefined1 uStack_fb1;
  undefined7 uStack_fb0;
  undefined2 uStack_fa9;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined4 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined2 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined4 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined2 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined4 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined2 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_a18;
  undefined1 auStack_a10 [40];
  long lStack_9e8;
  long lStack_9e0;
  long lStack_130;
  long lStack_128;
  long alStack_f8 [3];
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 uStack_c0;
  long lStack_b8;
  undefined1 *puStack_60;
  code *pcStack_58;
  long alStack_48 [3];
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a194208(alStack_48);
  ppppplVar30 = param_1;
  FUN_10abda784(alStack_48);
  if (plStack_30 == alStack_48) {
    lVar21 = 0x20;
LAB_10aba5a54:
    (**(code **)(*plStack_30 + lVar21))();
    plVar9 = plStack_30;
  }
  else {
    plVar9 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      lVar21 = 0x28;
      goto LAB_10aba5a54;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_10aba5a90;
  puStack_60 = &stack0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplVar23 = ppppplVar30[2];
  uVar32 = (ulong)*(ushort *)((long)ppppplVar30[3] + 2);
  FUN_10a01f6d4(pppplVar23,uVar32);
  uStack_11e0 = 0;
  pplStack_11e8 = (long **)0x0;
  uStack_11d8 = 0xffffffffffffffff;
  uStack_11d0 = 0xffffffffffffffff;
  uStack_11c6 = 0xffffff;
  uStack_11c0 = 1;
  uStack_11b0 = 0;
  uStack_11b8 = 0;
  uStack_11ac = 0;
  uStack_11a8 = 0;
  uStack_1110._0_4_ = (uint)uStack_1110 & 0xffffff00;
  lStack_1170 = 0;
  lStack_1178 = 0;
  pplStack_1160 = (long **)((ulong)pplStack_1160 & 0xffffffffffffff00);
  uStack_1168 = 0;
  uStack_1110 = (long ***)CONCAT44(3,(uint)uStack_1110);
  pplStack_1108 = (long **)NEON_fmov(0x3f800000,4);
  uStack_10d8 = 0x3f800000;
  uStack_10e0 = 0;
  uStack_10c8 = 0x3f80000000000000;
  uStack_10d0 = 0;
  uStack_10f8 = 0;
  uStack_1100 = 0x3f800000;
  uStack_10e8 = 0;
  uStack_10f0 = 0x3f80000000000000;
  uStack_10b8 = 0;
  uStack_10c0 = 0x3f800000;
  uStack_10a8 = 0;
  uStack_10b0 = 0x3f80000000000000;
  uStack_1098 = 0x3f800000;
  uStack_10a0 = 0;
  uStack_1088 = 0x3f80000000000000;
  uStack_1090 = 0;
  plStack_1078 = (long *)0x0;
  plStack_1080 = (long *)0x0;
  pplStack_1068 = (long **)0x0;
  uStack_1070 = 0;
  uStack_1058 = 0;
  uStack_1060 = 0;
  uStack_1050 = 0x3f800000;
  uStack_104c = 0;
  uStack_104a = 0;
  uStack_1026 = 0;
  uStack_1028 = 0;
  uStack_1030 = 0;
  uStack_102e = 0;
  uStack_1038 = 0;
  uStack_1040 = 0;
  uStack_1048 = 0;
  uStack_1018 = 0;
  uStack_1010 = 0;
  uStack_100c = 0x400;
  uStack_100a = 4;
  uStack_1000 = 0x3f80000000000000;
  uStack_1008 = 0;
  uStack_ff0 = 0;
  uStack_ff8 = 0;
  uStack_fe8 = 0;
  uStack_fdc = 0x3e4ccccd40000000;
  uStack_fe4 = 0x3e4ccccd3f800000;
  uStack_fd4 = 0x700000037;
  uStack_fc4 = 0x3f0000003f800000;
  uStack_fcc = 0x3f8000003f800000;
  uStack_fbc = 0x3f800000;
  uStack_fb0 = 0;
  uStack_fb8 = 0;
  uStack_fb1 = 0;
  uStack_fa9 = 1;
  uStack_f98 = 0;
  uStack_fa0 = 0;
  uStack_f88 = 0;
  uStack_f90 = 0;
  uStack_f78 = 0;
  uStack_f80 = 0;
  uStack_f68 = 0;
  uStack_f70 = 0;
  uStack_f60 = 0;
  uStack_f58 = 0xffff;
  uStack_f50 = 0;
  uStack_db8 = 0;
  uStack_db0 = 0;
  uStack_dc0 = 0;
  uStack_dc8 = 0;
  uStack_da0 = 0;
  uStack_da8 = 0;
  uStack_d90 = 0;
  uStack_d98 = 0;
  uStack_d88 = 0;
  uStack_d80 = 0xffff;
  uStack_d78 = 0;
  uStack_be8 = 0;
  uStack_bf0 = 0;
  uStack_be0 = 0;
  uStack_bd8 = 0;
  uStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bb8 = 0;
  uStack_bc0 = 0;
  uStack_bb0 = 0;
  uStack_ba8 = 0xffff;
  uStack_ba0 = 0;
  uStack_a18 = 0;
  uStack_11c8 = *(undefined2 *)(pppplVar23 + 4);
  ppplVar14 = pppplVar23[9];
  uStack_1198 = SUB84(pppplVar23[10],0);
  uStack_1194 = (undefined4)((ulong)pppplVar23[10] >> 0x20);
  uStack_11a0 = SUB82(ppplVar14,0);
  uStack_119e = (undefined1)((ulong)ppplVar14 >> 0x10);
  uStack_119d = (undefined1)((ulong)ppplVar14 >> 0x18);
  uStack_119c = (undefined4)((ulong)ppplVar14 >> 0x20);
  uStack_1188 = SUB84(pppplVar23[0xc],0);
  uStack_1184 = (undefined4)((ulong)pppplVar23[0xc] >> 0x20);
  uStack_1190 = SUB84(pppplVar23[0xb],0);
  uStack_118c = (undefined4)((ulong)pppplVar23[0xb] >> 0x20);
  uStack_1180 = SUB84(pppplVar23[0xd],0);
  uStack_117c = (undefined4)((ulong)pppplVar23[0xd] >> 0x20);
  if ((long ****)&pplStack_11e8 != pppplVar23) {
    func_0x00010a5e3750(&lStack_1178,pppplVar23[0xe],pppplVar23[0xf],
                        ((long)pppplVar23[0xf] - (long)pppplVar23[0xe] >> 4) * -0x3333333333333333);
  }
  pplStack_1158 = (long **)pppplVar23[0x12];
  pplStack_1160 = (long **)pppplVar23[0x11];
  pplStack_1148 = (long **)pppplVar23[0x14];
  pplStack_1150 = (long **)pppplVar23[0x13];
  pplStack_1138 = (long **)pppplVar23[0x16];
  pplStack_1140 = (long **)pppplVar23[0x15];
  pplStack_1128 = (long **)pppplVar23[0x18];
  pplStack_1130 = (long **)pppplVar23[0x17];
  pplStack_1118 = (long **)pppplVar23[0x1a];
  pplStack_1120 = (long **)pppplVar23[0x19];
  pplStack_1108 = (long **)pppplVar23[0x1c];
  uStack_1110 = pppplVar23[0x1b];
  uStack_11b0 = *(undefined4 *)(pppplVar23 + 7);
  FUN_10a5d2dd0(&plStack_1080,
                ((long)pppplVar23[0x2e] - (long)pppplVar23[0x2d] >> 4) * -0x5555555555555555);
  lVar21 = (long)pppplVar23[0x2e] - (long)pppplVar23[0x2d];
  if (lVar21 != 0) {
    lVar21 = (lVar21 >> 4) * -0x5555555555555555;
    lVar28 = ((long)plStack_1078 - (long)plStack_1080 >> 4) * -0x5555555555555555;
    ppplVar14 = pppplVar23[0x2d];
    plVar26 = plStack_1080;
    do {
      if (lVar28 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10aba5ec4);
        (*pcVar8)();
      }
      *plVar26 = (long)*ppplVar14;
      lVar28 = lVar28 + -1;
      lVar21 = lVar21 + -1;
      ppplVar14 = ppplVar14 + 6;
      plVar26 = plVar26 + 6;
    } while (lVar21 != 0);
  }
  pplStack_1068 = (long **)pppplVar23[0x30];
  pppplVar25 = ppppplVar30[2] + 0xb8;
  func_0x00010a04a0d4(pppplVar25,uVar32);
  FUN_10a193e84(auStack_a10,pppplVar25);
  lStack_128 = lStack_130;
  uStack_c0 = 1;
  lVar21 = plVar9[7];
  plStack_1200 = &lStack_11f8;
  ppplVar14 = &pplStack_11e8;
  puVar16 = auStack_a10;
  ppppplVar29 = &pppplStack_11f0;
  ppppplVar13 = ppppplVar30;
  uVar19 = param_3;
  FUN_10aba5ef0(plVar9[6]);
  uVar18 = (uint)uVar19;
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  if (plStack_e0 == alStack_f8) {
    lVar28 = 0x20;
LAB_10aba5e34:
    (**(code **)(*plStack_e0 + lVar28))();
  }
  else if (plStack_e0 != (long *)0x0) {
    lVar28 = 0x28;
    goto LAB_10aba5e34;
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  if (lStack_9e8 != 0) {
    lStack_9e0 = lStack_9e8;
    __ZdlPv();
  }
  if (plStack_1080 != (long *)0x0) {
    plStack_1078 = plStack_1080;
    __ZdlPv();
  }
  lVar28 = lStack_1178;
  if (lStack_1178 != 0) {
    lStack_1170 = lStack_1178;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return (long *****)pppplStack_11f0;
  }
  ___stack_chk_fail();
  func_0x00010a174f6c(auStack_a10);
  FUN_10a191294(&pplStack_11e8);
  lVar10 = lVar28;
  __Unwind_Resume();
  pcStack_1208 = FUN_10aba5ef0;
  *(undefined4 *)(puVar16 + 0x900) = *(undefined4 *)ppppplVar13;
  *(undefined2 *)(puVar16 + 0x904) = *(undefined2 *)((long)ppppplVar13 + 4);
  *(short *)(puVar16 + 0x906) = (short)uVar18;
  *(undefined4 *)(puVar16 + 0x908) = *param_4;
  pppplVar25 = ppppplVar13[2];
  pppplVar33 = ppppplVar13[3];
  *(long *****)(puVar16 + 0x910) = pppplVar25;
  pplStack_1270 = (long **)pppplVar33[2];
  uStack_1278 = pppplVar33[1];
  uStack_1280._4_4_ = (undefined4)((ulong)*pppplVar33 >> 0x20);
  uStack_1280._0_2_ = SUB82(*pppplVar33,0);
  uStack_1280 = CONCAT44(uStack_1280._4_4_,
                         CONCAT22((short)((uint)(*(int *)(pppplVar25 + 0xe8) -
                                                *(int *)(pppplVar25 + 0xe7)) >> 3) * 0xa33,
                                  (undefined2)uStack_1280)) | 0x80000000;
  ppplStack_1240 = (long ***)pppplVar23;
  uStack_1238 = uVar32;
  pppplStack_1228 = (long ****)ppppplVar30;
  uStack_1220 = param_3;
  lStack_1218 = lVar28;
  ppuStack_1210 = &puStack_60;
  if (lVar10 == lVar21) {
    pplVar22 = (long **)0x0;
  }
  else {
    uVar32 = (lVar21 - lVar10 >> 3) * -0x5555555555555555;
    if (uVar32 < uVar18 || uVar32 - uVar18 == 0) goto LAB_10aba6178;
    pplVar22 = (long **)(lVar10 + (ulong)uVar18 * 0x18);
  }
  *ppplVar14 = pplVar22;
  ppplVar14[1] = pplVar22;
  iVar20 = param_4[1];
  if (iVar20 == -0x80000000) {
    iVar20 = *(int *)(ppplVar14 + 7);
  }
  else {
    *(int *)(ppplVar14 + 7) = iVar20;
  }
  uStack_1280 = CONCAT44(iVar20,(undefined4)uStack_1280);
  uVar32 = (ulong)uStack_1278 >> 0x20;
  uStack_1278 = (long ***)CONCAT44((int)uVar32,param_4[2]);
  *(undefined4 *)((long)ppplVar14 + 0x3c) = param_4[2];
  pplVar22 = ppplVar14[0x2d];
  if (ppplVar14[0x2e] != pplVar22) {
    *(undefined1 *)((long)pplVar22 + 0x29) = 0;
    *(undefined1 *)((long)*pplVar22 + 0x334) = 0;
  }
  *(undefined1 *)((long)ppplVar14 + 0x19d) = 0;
  ppplVar15 = ppplVar14;
  puVar17 = puVar16;
  FUN_10a5e72a4(pppplVar25 + 0xe4,&uStack_1280);
  pppplVar23 = pppplVar25 + 0xe7;
  FUN_10a5e6a6c(pppplVar23,ppplVar14);
  pppplVar33 = pppplVar25 + 0xea;
  pppplVar1 = pppplVar25 + 0xeb;
  ppppplVar30 = (long *****)pppplVar25[0xeb];
  if (ppppplVar30 < pppplVar25[0xec]) {
    ppppplVar13 = ppppplVar30;
    FUN_10a193e84(ppppplVar30,puVar16);
    ppppplVar30 = ppppplVar30 + 299;
    *pppplVar1 = (long ***)ppppplVar30;
  }
  else {
    ppplVar31 = (long ***)((long)ppppplVar30 - (long)*pppplVar33);
    uVar32 = ((long)ppplVar31 >> 3) * 0x72baa619af84b583 + 1;
    if (0x1b65e2e3beee05 < uVar32) {
      FUN_10a5e8390();
      *pppplVar1 = ppplVar31;
      __Unwind_Resume();
      lStack_1308 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_1370 = -1;
      lStack_1368 = -1;
      if ((int)puVar17 < 0) {
        ppppplVar30 = (long *****)(&PTR_DAT_110c50c00 + ((ulong)ppplVar14 & 0xffffffff) * 5);
        func_0x000107c2b074(&pppplStack_1358,ppppplVar30);
        uStack_135c = (undefined3)((ulong)uStack_1348 >> 0x20);
        uStack_13cc = (uint)uStack_1348._7_1_;
        pppplStack_13d8 = pppplStack_1358;
        uStack_1360 = (undefined4)uStack_1348;
        ppppplVar29 = (long *****)pppplStack_1350;
        pppplVar25 = (long ****)ppplStack_1340;
joined_r0x00010aba6260:
        if (ppppplVar13 == (long *****)0x0) goto LAB_10aba6264;
LAB_10aba632c:
        pppplVar33 = ppppplVar13[0x4d];
      }
      else {
        func_0x000107c2b074(&pppplStack_1358,
                            &PTR_DAT_110c50c00 + ((ulong)ppplVar14 & 0xffffffff) * 5);
        if ((long)uStack_1348 < 0) {
          func_0x000107c3192c(&pppplStack_13b0,pppplStack_1358,pppplStack_1350);
        }
        else {
          pppplStack_13a8 = pppplStack_1350;
          pppplStack_13b0 = pppplStack_1358;
          pppplStack_13a0 = (long ****)uStack_1348;
        }
        __ZNSt3__19to_stringEi(&ppppuStack_13c8,puVar17);
        pppppuVar7 = (undefined8 *****)ppppuStack_13c8;
        if (-1 < (char)bStack_13b1) {
          uStack_13c0 = (ulong)bStack_13b1;
          pppppuVar7 = &ppppuStack_13c8;
        }
        ppppplVar30 = &pppplStack_13b0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppplVar30,pppppuVar7,uStack_13c0);
        ppplStack_1388 = (long ***)ppppplVar30[1];
        pppplStack_1390 = *ppppplVar30;
        ppplStack_1380 = (long ***)ppppplVar30[2];
        ppppplVar30[1] = (long ****)0x0;
        ppppplVar30[2] = (long ****)0x0;
        *ppppplVar30 = (long ****)0x0;
        if ((char)bStack_13b1 < '\0') {
          __ZdlPv(ppppuStack_13c8);
        }
        if ((long)pppplStack_13a0 < 0) {
          __ZdlPv(pppplStack_13b0);
        }
        if ((long)uStack_1348 < 0) {
          __ZdlPv(pppplStack_1358);
        }
        ppppplVar30 = &pppplStack_1358;
        FUN_10a0d09b4(ppppplVar30,&pppplStack_1390);
        pppplVar25 = (long ****)ppplStack_1340;
        ppppplVar29 = (long *****)pppplStack_1350;
        pppplStack_13d8 = pppplStack_1358;
        uStack_135c = (undefined3)((ulong)uStack_1348 >> 0x20);
        uStack_13cc = (uint)uStack_1348._7_1_;
        uStack_1360 = (undefined4)uStack_1348;
        if ((long)ppplStack_1380 < 0) {
          ppppplVar30 = (long *****)pppplStack_1390;
          __ZdlPv(pppplStack_1390);
          goto joined_r0x00010aba6260;
        }
        if (ppppplVar13 != (long *****)0x0) goto LAB_10aba632c;
LAB_10aba6264:
        pppplVar33 = (long ****)0x0;
      }
      uVar3 = *(undefined1 *)ppplVar15;
      uStack_1374 = *(undefined2 *)((long)ppplVar15 + 1);
      uStack_1372 = *(undefined1 *)((long)ppplVar15 + 3);
      uVar2 = *(undefined4 *)((long)ppplVar15 + 4);
      plStack_1330 = (long *)ppplVar15[1];
      uStack_1328 = SUB86(ppplVar15[2],0);
      uStack_131a = *(undefined8 *)((long)ppplVar15 + 0x1e);
      uStack_1322 = (undefined2)*(undefined8 *)((long)ppplVar15 + 0x16);
      uStack_1320 = (undefined6)((ulong)*(undefined8 *)((long)ppplVar15 + 0x16) >> 0x10);
      uVar4 = *(undefined2 *)((long)ppplVar15 + 0x26);
      ppppplVar24 = (long *****)pppplVar23[0x1e];
      if (ppppplVar24 < pppplVar23[0x1f]) {
        if (uStack_13cc >> 7 == 0) {
          *ppppplVar24 = pppplStack_13d8;
          ppppplVar24[1] = (long ****)ppppplVar29;
          *(undefined4 *)(ppppplVar24 + 2) = uStack_1360;
          *(uint *)((long)ppppplVar24 + 0x13) = CONCAT31(uStack_135c,uStack_1360._3_1_);
          *(char *)((long)ppppplVar24 + 0x17) = (char)uStack_13cc;
        }
        else {
          ppppplVar30 = ppppplVar24;
          func_0x000107c3192c(ppppplVar24,pppplStack_13d8,ppppplVar29);
        }
        ppppplVar24[3] = pppplVar25;
        ppppplVar24[4] = (long ****)0xffffffffffffffff;
        ppppplVar24[5] = (long ****)0xffffffffffffffff;
        ppppplVar24[6] = pppplVar33;
        *(undefined2 *)(ppppplVar24 + 7) = 0xd;
        *(undefined1 *)((long)ppppplVar24 + 0x3c) = uVar3;
        *(undefined2 *)((long)ppppplVar24 + 0x3d) = uStack_1374;
        *(undefined1 *)((long)ppppplVar24 + 0x3f) = uStack_1372;
        *(undefined4 *)(ppppplVar24 + 8) = uVar2;
        *(ulong *)((long)ppppplVar24 + 0x4c) = CONCAT26(uStack_1322,uStack_1328);
        *(long **)((long)ppppplVar24 + 0x44) = plStack_1330;
        *(undefined8 *)((long)ppppplVar24 + 0x5a) = uStack_131a;
        *(ulong *)((long)ppppplVar24 + 0x52) = CONCAT62(uStack_1320,uStack_1322);
        *(undefined2 *)((long)ppppplVar24 + 0x62) = uVar4;
        ppppplVar24 = ppppplVar24 + 0xd;
        pppplVar23[0x1e] = (long ***)ppppplVar24;
      }
      else {
        pppplVar1 = pppplVar23 + 0x1d;
        lVar21 = (long)ppppplVar24 - (long)*pppplVar1;
        uVar32 = (lVar21 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
        if (0x276276276276276 < uVar32) goto LAB_10aba6664;
        lVar28 = (long)pppplVar23[0x1f] - (long)*pppplVar1 >> 3;
        uVar27 = lVar28 * -0x6276276276276276;
        if (uVar27 < uVar32 || uVar27 - uVar32 == 0) {
          uVar27 = uVar32;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar28 * 0x4ec4ec4ec4ec4ec5)) {
          uVar27 = 0x276276276276276;
        }
        ppplStack_1338 = (long ***)pppplVar1;
        if (uVar27 == 0) {
          pppplVar12 = (long ****)0x0;
        }
        else {
          pppplVar12 = pppplVar1;
          FUN_10a045464();
        }
        plVar9 = (long *)((long)pppplVar12 + lVar21);
        ppplStack_1340 = (long ***)(pppplVar12 + uVar27 * 0xd);
        pppplStack_1358 = pppplVar12;
        pppplStack_1350 = (long ****)plVar9;
        if (uStack_13cc >> 7 == 0) {
          *plVar9 = (long)pppplStack_13d8;
          plVar9[1] = (long)ppppplVar29;
          *(undefined4 *)(plVar9 + 2) = uStack_1360;
          *(uint *)((long)plVar9 + 0x13) = CONCAT31(uStack_135c,uStack_1360._3_1_);
          *(char *)((long)plVar9 + 0x17) = (char)uStack_13cc;
        }
        else {
          uStack_1348 = (long *****)plVar9;
          func_0x000107c3192c(plVar9,pppplStack_13d8,ppppplVar29);
        }
        plVar9[3] = (long)pppplVar25;
        plVar9[5] = lStack_1368;
        plVar9[4] = lStack_1370;
        plVar9[6] = (long)pppplVar33;
        *(undefined2 *)(plVar9 + 7) = 0xd;
        *(undefined1 *)((long)plVar9 + 0x3c) = uVar3;
        *(undefined2 *)((long)plVar9 + 0x3d) = uStack_1374;
        *(undefined1 *)((long)plVar9 + 0x3f) = uStack_1372;
        *(undefined4 *)(plVar9 + 8) = uVar2;
        *(ulong *)((long)plVar9 + 0x4c) = CONCAT26(uStack_1322,uStack_1328);
        *(long **)((long)plVar9 + 0x44) = plStack_1330;
        *(undefined8 *)((long)plVar9 + 0x5a) = uStack_131a;
        *(ulong *)((long)plVar9 + 0x52) = CONCAT62(uStack_1320,uStack_1322);
        *(undefined2 *)((long)plVar9 + 0x62) = uVar4;
        uStack_1348 = (long *****)(plVar9 + 0xd);
        ppplVar14 = (long ***)((long)plVar9 + ((long)pppplVar23[0x1d] - (long)pppplVar23[0x1e]));
        func_0x00010a5e5a8c(pppplVar1,pppplVar23[0x1d],pppplVar23[0x1e],ppplVar14);
        ppppplVar24 = uStack_1348;
        pppplStack_1358 = (long ****)pppplVar23[0x1d];
        pppplVar23[0x1d] = ppplVar14;
        pppplVar25 = (long ****)pppplVar23[0x1f];
        pppplVar23[0x1f] = ppplStack_1340;
        pppplVar23[0x1e] = (long ***)uStack_1348;
        ppppplVar30 = &pppplStack_1358;
        pppplStack_1350 = pppplStack_1358;
        uStack_1348 = (long *****)pppplStack_1358;
        ppplStack_1340 = (long ***)pppplVar25;
        func_0x00010a5e5b64(ppppplVar30);
      }
      pppplVar23[0x1e] = (long ***)ppppplVar24;
      if ((ppppplVar13 != (long *****)0x0) &&
         (___dynamic_cast(ppppplVar13,&PTR_DAT_110c4eff0,&PTR_DAT_110bb2dc8,0xfffffffffffffffe),
         ppppplVar30 = ppppplVar13, ppppplVar13 != (long *****)0x0)) {
        ppppplVar29 = ppppplVar13;
        FUN_10a1dd000();
        ppppplVar30 = (long *****)0x0;
        if (ppppplVar29 != (long *****)0x0) {
          ___dynamic_cast();
          ppppplVar30 = (long *****)0x0;
          if (ppppplVar29 != (long *****)0x0) {
            FUN_10abf1b04();
            lVar21 = 1;
            FUN_10a088744(ppppplVar13);
            ppppplVar30 = ppppplVar13;
            if ((lVar21 != 0) &&
               (ppppplVar29 = *(long ******)(lVar21 + 8), ppppplVar29 != (long *****)0x0)) {
              ppppplVar13 = ppppplVar29 + 1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
                if (bVar6) {
                  *ppppplVar13 = (long ****)((long)*ppppplVar13 + 1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              do {
                pppplVar23 = *ppppplVar13;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
                if (bVar6) {
                  *ppppplVar13 = (long ****)((long)pppplVar23 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (pppplVar23 == (long ****)0x0) {
                (*(code *)(*ppppplVar29)[2])(ppppplVar29);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar29);
                ppppplVar30 = ppppplVar29;
              }
            }
          }
        }
      }
      if (uStack_13cc >> 7 != 0) {
        __ZdlPv(pppplStack_13d8);
        ppppplVar30 = (long *****)pppplStack_13d8;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1308) {
        return ppppplVar30;
      }
      ___stack_chk_fail();
LAB_10aba6664:
      FUN_10a045450();
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10aba666c);
      (*pcVar8)();
    }
    lVar21 = (long)pppplVar25[0xec] - (long)*pppplVar33 >> 3;
    uVar27 = lVar21 * -0x1a8ab3cca0f694fa;
    if (uVar27 < uVar32 || uVar27 - uVar32 == 0) {
      uVar27 = uVar32;
    }
    if (0xdb2f171df7701 < (ulong)(lVar21 * 0x72baa619af84b583)) {
      uVar27 = 0x1b65e2e3beee05;
    }
    ppplStack_1248 = (long ***)pppplVar33;
    if (uVar27 == 0) {
      pppplVar23 = (long ****)0x0;
    }
    else {
      pppplVar23 = pppplVar33;
      FUN_10a5e83a4();
    }
    puVar11 = (undefined *)((long)pppplVar23 + (long)ppplVar31);
    ppplStack_1250 = (long ***)(pppplVar23 + uVar27 * 299);
    ppplStack_1268 = (long ***)pppplVar23;
    ppplStack_1260 = (long ***)puVar11;
    pppplStack_1258 = (long ****)puVar11;
    FUN_10a193e84(puVar11,puVar16);
    pppplStack_1258 = (long ****)(puVar11 + 0x958);
    ppplVar15 = *pppplVar1;
    ppplVar14 = *pppplVar33;
    FUN_10a5e83ec(pppplVar33,ppplVar14,ppplVar15,puVar11 + ((long)ppplVar14 - (long)ppplVar15));
    ppppplVar30 = (long *****)pppplStack_1258;
    ppplStack_1268 = pppplVar25[0xea];
    pppplVar25[0xea] = (long ***)(puVar11 + ((long)ppplVar14 - (long)ppplVar15));
    ppplVar14 = pppplVar25[0xec];
    pppplVar25[0xec] = ppplStack_1250;
    *pppplVar1 = (long ***)pppplStack_1258;
    ppppplVar13 = (long *****)&ppplStack_1268;
    ppplStack_1260 = ppplStack_1268;
    pppplStack_1258 = (long ****)ppplStack_1268;
    ppplStack_1250 = ppplVar14;
    FUN_10a5e86c8(ppppplVar13);
  }
  pppplVar25[0xeb] = (long ***)ppppplVar30;
  if (pppplVar25[0xe7] != pppplVar25[0xe8]) {
    *ppppplVar29 = (long ****)(pppplVar25[0xe8] + -0xfb);
    if (*pppplVar33 != *pppplVar1) {
      *plStack_1200 = (long)(*pppplVar1 + -299);
      return ppppplVar13;
    }
  }
LAB_10aba6178:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10aba617c);
  (*pcVar8)();
}



/* Entry: 10aba5a90; end: 10aba5eef;  */

long ***** FUN_10aba5a90(long param_1,long *****param_2,undefined8 param_3,undefined4 *param_4)

{
  long ****pppplVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *****pppppuVar7;
  code *pcVar8;
  long lVar9;
  undefined *puVar10;
  long *****ppppplVar11;
  long ****pppplVar12;
  long ***ppplVar13;
  long ***ppplVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  uint uVar17;
  undefined8 uVar18;
  int iVar19;
  long **pplVar20;
  long ****pppplVar21;
  long *****ppppplVar22;
  long lVar23;
  long ****pppplVar24;
  long *plVar25;
  ulong uVar26;
  long lVar27;
  long *****ppppplVar28;
  long *****ppppplVar29;
  long ***ppplVar30;
  ulong uVar31;
  long ****pppplVar32;
  long ****pppplStack_1388;
  uint uStack_137c;
  undefined8 ****ppppuStack_1378;
  ulong uStack_1370;
  byte bStack_1361;
  long ****pppplStack_1360;
  long ****pppplStack_1358;
  long ****pppplStack_1350;
  long ****pppplStack_1340;
  long ***ppplStack_1338;
  long ***ppplStack_1330;
  undefined2 uStack_1324;
  undefined1 uStack_1322;
  long lStack_1320;
  long lStack_1318;
  undefined4 uStack_1310;
  undefined3 uStack_130c;
  long ****pppplStack_1308;
  long ****pppplStack_1300;
  undefined8 uStack_12f8;
  long ***ppplStack_12f0;
  long ***ppplStack_12e8;
  long *plStack_12e0;
  undefined6 uStack_12d8;
  undefined2 uStack_12d2;
  undefined6 uStack_12d0;
  undefined8 uStack_12ca;
  long lStack_12b8;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  long **pplStack_1220;
  long ***ppplStack_1218;
  long ***ppplStack_1210;
  long ****pppplStack_1208;
  long ***ppplStack_1200;
  long ***ppplStack_11f8;
  long ***ppplStack_11f0;
  ulong uStack_11e8;
  long lStack_11e0;
  long ****pppplStack_11d8;
  undefined8 uStack_11d0;
  long lStack_11c8;
  undefined1 *puStack_11c0;
  code *pcStack_11b8;
  long *plStack_11b0;
  long lStack_11a8;
  long ****pppplStack_11a0;
  long **pplStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined2 uStack_1178;
  undefined4 uStack_1176;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined4 uStack_1160;
  undefined4 uStack_115c;
  undefined5 uStack_1158;
  undefined2 uStack_1150;
  undefined1 uStack_114e;
  undefined1 uStack_114d;
  undefined4 uStack_114c;
  undefined4 uStack_1148;
  undefined4 uStack_1144;
  undefined4 uStack_1140;
  undefined4 uStack_113c;
  undefined4 uStack_1138;
  undefined4 uStack_1134;
  undefined4 uStack_1130;
  undefined4 uStack_112c;
  long lStack_1128;
  long lStack_1120;
  undefined8 uStack_1118;
  long **pplStack_1110;
  long **pplStack_1108;
  long **pplStack_1100;
  long **pplStack_10f8;
  long **pplStack_10f0;
  long **pplStack_10e8;
  long **pplStack_10e0;
  long **pplStack_10d8;
  long **pplStack_10d0;
  long **pplStack_10c8;
  undefined8 uStack_10c0;
  long **pplStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  long *plStack_1030;
  long *plStack_1028;
  undefined8 uStack_1020;
  long **pplStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined4 uStack_1000;
  undefined2 uStack_ffc;
  undefined1 uStack_ffa;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined2 uStack_fe0;
  undefined6 uStack_fde;
  undefined2 uStack_fd8;
  undefined8 uStack_fd6;
  undefined8 uStack_fc8;
  undefined2 uStack_fc0;
  undefined2 uStack_fbc;
  undefined1 uStack_fba;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined1 uStack_fa0;
  undefined4 uStack_f98;
  undefined8 uStack_f94;
  undefined8 uStack_f8c;
  undefined8 uStack_f84;
  undefined8 uStack_f7c;
  undefined8 uStack_f74;
  undefined4 uStack_f6c;
  undefined7 uStack_f68;
  undefined1 uStack_f61;
  undefined7 uStack_f60;
  undefined2 uStack_f59;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined4 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined2 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined4 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined2 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined4 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined2 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_9c8;
  undefined1 auStack_9c0 [40];
  long lStack_998;
  long lStack_990;
  long lStack_e0;
  long lStack_d8;
  long alStack_a8 [3];
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 uStack_70;
  long lStack_68;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplVar21 = param_2[2];
  uVar31 = (ulong)*(ushort *)((long)param_2[3] + 2);
  FUN_10a01f6d4(pppplVar21,uVar31);
  uStack_1190 = 0;
  pplStack_1198 = (long **)0x0;
  uStack_1188 = 0xffffffffffffffff;
  uStack_1180 = 0xffffffffffffffff;
  uStack_1176 = 0xffffff;
  uStack_1170 = 1;
  uStack_1160 = 0;
  uStack_1168 = 0;
  uStack_115c = 0;
  uStack_1158 = 0;
  uStack_10c0._0_4_ = (uint)uStack_10c0 & 0xffffff00;
  lStack_1120 = 0;
  lStack_1128 = 0;
  pplStack_1110 = (long **)((ulong)pplStack_1110 & 0xffffffffffffff00);
  uStack_1118 = 0;
  uStack_10c0 = (long ***)CONCAT44(3,(uint)uStack_10c0);
  pplStack_10b8 = (long **)NEON_fmov(0x3f800000,4);
  uStack_1088 = 0x3f800000;
  uStack_1090 = 0;
  uStack_1078 = 0x3f80000000000000;
  uStack_1080 = 0;
  uStack_10a8 = 0;
  uStack_10b0 = 0x3f800000;
  uStack_1098 = 0;
  uStack_10a0 = 0x3f80000000000000;
  uStack_1068 = 0;
  uStack_1070 = 0x3f800000;
  uStack_1058 = 0;
  uStack_1060 = 0x3f80000000000000;
  uStack_1048 = 0x3f800000;
  uStack_1050 = 0;
  uStack_1038 = 0x3f80000000000000;
  uStack_1040 = 0;
  plStack_1028 = (long *)0x0;
  plStack_1030 = (long *)0x0;
  pplStack_1018 = (long **)0x0;
  uStack_1020 = 0;
  uStack_1008 = 0;
  uStack_1010 = 0;
  uStack_1000 = 0x3f800000;
  uStack_ffc = 0;
  uStack_ffa = 0;
  uStack_fd6 = 0;
  uStack_fd8 = 0;
  uStack_fe0 = 0;
  uStack_fde = 0;
  uStack_fe8 = 0;
  uStack_ff0 = 0;
  uStack_ff8 = 0;
  uStack_fc8 = 0;
  uStack_fc0 = 0;
  uStack_fbc = 0x400;
  uStack_fba = 4;
  uStack_fb0 = 0x3f80000000000000;
  uStack_fb8 = 0;
  uStack_fa0 = 0;
  uStack_fa8 = 0;
  uStack_f98 = 0;
  uStack_f8c = 0x3e4ccccd40000000;
  uStack_f94 = 0x3e4ccccd3f800000;
  uStack_f84 = 0x700000037;
  uStack_f74 = 0x3f0000003f800000;
  uStack_f7c = 0x3f8000003f800000;
  uStack_f6c = 0x3f800000;
  uStack_f60 = 0;
  uStack_f68 = 0;
  uStack_f61 = 0;
  uStack_f59 = 1;
  uStack_f48 = 0;
  uStack_f50 = 0;
  uStack_f38 = 0;
  uStack_f40 = 0;
  uStack_f28 = 0;
  uStack_f30 = 0;
  uStack_f18 = 0;
  uStack_f20 = 0;
  uStack_f10 = 0;
  uStack_f08 = 0xffff;
  uStack_f00 = 0;
  uStack_d68 = 0;
  uStack_d60 = 0;
  uStack_d70 = 0;
  uStack_d78 = 0;
  uStack_d50 = 0;
  uStack_d58 = 0;
  uStack_d40 = 0;
  uStack_d48 = 0;
  uStack_d38 = 0;
  uStack_d30 = 0xffff;
  uStack_d28 = 0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  uStack_b90 = 0;
  uStack_b88 = 0;
  uStack_b78 = 0;
  uStack_b80 = 0;
  uStack_b68 = 0;
  uStack_b70 = 0;
  uStack_b60 = 0;
  uStack_b58 = 0xffff;
  uStack_b50 = 0;
  uStack_9c8 = 0;
  uStack_1178 = *(undefined2 *)(pppplVar21 + 4);
  ppplVar13 = pppplVar21[9];
  uStack_1148 = SUB84(pppplVar21[10],0);
  uStack_1144 = (undefined4)((ulong)pppplVar21[10] >> 0x20);
  uStack_1150 = SUB82(ppplVar13,0);
  uStack_114e = (undefined1)((ulong)ppplVar13 >> 0x10);
  uStack_114d = (undefined1)((ulong)ppplVar13 >> 0x18);
  uStack_114c = (undefined4)((ulong)ppplVar13 >> 0x20);
  uStack_1138 = SUB84(pppplVar21[0xc],0);
  uStack_1134 = (undefined4)((ulong)pppplVar21[0xc] >> 0x20);
  uStack_1140 = SUB84(pppplVar21[0xb],0);
  uStack_113c = (undefined4)((ulong)pppplVar21[0xb] >> 0x20);
  uStack_1130 = SUB84(pppplVar21[0xd],0);
  uStack_112c = (undefined4)((ulong)pppplVar21[0xd] >> 0x20);
  if ((long ****)&pplStack_1198 != pppplVar21) {
    func_0x00010a5e3750(&lStack_1128,pppplVar21[0xe],pppplVar21[0xf],
                        ((long)pppplVar21[0xf] - (long)pppplVar21[0xe] >> 4) * -0x3333333333333333);
  }
  pplStack_1108 = (long **)pppplVar21[0x12];
  pplStack_1110 = (long **)pppplVar21[0x11];
  pplStack_10f8 = (long **)pppplVar21[0x14];
  pplStack_1100 = (long **)pppplVar21[0x13];
  pplStack_10e8 = (long **)pppplVar21[0x16];
  pplStack_10f0 = (long **)pppplVar21[0x15];
  pplStack_10d8 = (long **)pppplVar21[0x18];
  pplStack_10e0 = (long **)pppplVar21[0x17];
  pplStack_10c8 = (long **)pppplVar21[0x1a];
  pplStack_10d0 = (long **)pppplVar21[0x19];
  pplStack_10b8 = (long **)pppplVar21[0x1c];
  uStack_10c0 = pppplVar21[0x1b];
  uStack_1160 = *(undefined4 *)(pppplVar21 + 7);
  FUN_10a5d2dd0(&plStack_1030,
                ((long)pppplVar21[0x2e] - (long)pppplVar21[0x2d] >> 4) * -0x5555555555555555);
  lVar23 = (long)pppplVar21[0x2e] - (long)pppplVar21[0x2d];
  if (lVar23 != 0) {
    lVar23 = (lVar23 >> 4) * -0x5555555555555555;
    lVar27 = ((long)plStack_1028 - (long)plStack_1030 >> 4) * -0x5555555555555555;
    ppplVar13 = pppplVar21[0x2d];
    plVar25 = plStack_1030;
    do {
      if (lVar27 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10aba5ec4);
        (*pcVar8)();
      }
      *plVar25 = (long)*ppplVar13;
      lVar27 = lVar27 + -1;
      lVar23 = lVar23 + -1;
      ppplVar13 = ppplVar13 + 6;
      plVar25 = plVar25 + 6;
    } while (lVar23 != 0);
  }
  pplStack_1018 = (long **)pppplVar21[0x30];
  pppplVar24 = param_2[2] + 0xb8;
  func_0x00010a04a0d4(pppplVar24,uVar31);
  FUN_10a193e84(auStack_9c0,pppplVar24);
  lStack_d8 = lStack_e0;
  uStack_70 = 1;
  lVar23 = *(long *)(param_1 + 0x38);
  plStack_11b0 = &lStack_11a8;
  ppplVar13 = &pplStack_1198;
  puVar15 = auStack_9c0;
  ppppplVar11 = &pppplStack_11a0;
  ppppplVar28 = param_2;
  uVar18 = param_3;
  FUN_10aba5ef0(*(undefined8 *)(param_1 + 0x30));
  uVar17 = (uint)uVar18;
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (plStack_90 == alStack_a8) {
    lVar27 = 0x20;
LAB_10aba5e34:
    (**(code **)(*plStack_90 + lVar27))();
  }
  else if (plStack_90 != (long *)0x0) {
    lVar27 = 0x28;
    goto LAB_10aba5e34;
  }
  if (lStack_e0 != 0) {
    lStack_d8 = lStack_e0;
    __ZdlPv();
  }
  if (lStack_998 != 0) {
    lStack_990 = lStack_998;
    __ZdlPv();
  }
  if (plStack_1030 != (long *)0x0) {
    plStack_1028 = plStack_1030;
    __ZdlPv();
  }
  lVar27 = lStack_1128;
  if (lStack_1128 != 0) {
    lStack_1120 = lStack_1128;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (long *****)pppplStack_11a0;
  }
  ___stack_chk_fail();
  func_0x00010a174f6c(auStack_9c0);
  FUN_10a191294(&pplStack_1198);
  lVar9 = lVar27;
  __Unwind_Resume();
  pcStack_11b8 = FUN_10aba5ef0;
  *(undefined4 *)(puVar15 + 0x900) = *(undefined4 *)ppppplVar28;
  *(undefined2 *)(puVar15 + 0x904) = *(undefined2 *)((long)ppppplVar28 + 4);
  *(short *)(puVar15 + 0x906) = (short)uVar17;
  *(undefined4 *)(puVar15 + 0x908) = *param_4;
  pppplVar24 = ppppplVar28[2];
  pppplVar32 = ppppplVar28[3];
  *(long *****)(puVar15 + 0x910) = pppplVar24;
  pplStack_1220 = (long **)pppplVar32[2];
  uStack_1228 = pppplVar32[1];
  uStack_1230._4_4_ = (undefined4)((ulong)*pppplVar32 >> 0x20);
  uStack_1230._0_2_ = SUB82(*pppplVar32,0);
  uStack_1230 = CONCAT44(uStack_1230._4_4_,
                         CONCAT22((short)((uint)(*(int *)(pppplVar24 + 0xe8) -
                                                *(int *)(pppplVar24 + 0xe7)) >> 3) * 0xa33,
                                  (undefined2)uStack_1230)) | 0x80000000;
  ppplStack_11f0 = (long ***)pppplVar21;
  uStack_11e8 = uVar31;
  lStack_11e0 = param_1;
  pppplStack_11d8 = (long ****)param_2;
  uStack_11d0 = param_3;
  lStack_11c8 = lVar27;
  puStack_11c0 = &stack0xfffffffffffffff0;
  if (lVar9 == lVar23) {
    pplVar20 = (long **)0x0;
  }
  else {
    uVar31 = (lVar23 - lVar9 >> 3) * -0x5555555555555555;
    if (uVar31 < uVar17 || uVar31 - uVar17 == 0) goto LAB_10aba6178;
    pplVar20 = (long **)(lVar9 + (ulong)uVar17 * 0x18);
  }
  *ppplVar13 = pplVar20;
  ppplVar13[1] = pplVar20;
  iVar19 = param_4[1];
  if (iVar19 == -0x80000000) {
    iVar19 = *(int *)(ppplVar13 + 7);
  }
  else {
    *(int *)(ppplVar13 + 7) = iVar19;
  }
  uStack_1230 = CONCAT44(iVar19,(undefined4)uStack_1230);
  uVar31 = (ulong)uStack_1228 >> 0x20;
  uStack_1228 = (long ***)CONCAT44((int)uVar31,param_4[2]);
  *(undefined4 *)((long)ppplVar13 + 0x3c) = param_4[2];
  pplVar20 = ppplVar13[0x2d];
  if (ppplVar13[0x2e] != pplVar20) {
    *(undefined1 *)((long)pplVar20 + 0x29) = 0;
    *(undefined1 *)((long)*pplVar20 + 0x334) = 0;
  }
  *(undefined1 *)((long)ppplVar13 + 0x19d) = 0;
  ppplVar14 = ppplVar13;
  puVar16 = puVar15;
  FUN_10a5e72a4(pppplVar24 + 0xe4,&uStack_1230);
  pppplVar21 = pppplVar24 + 0xe7;
  FUN_10a5e6a6c(pppplVar21,ppplVar13);
  pppplVar32 = pppplVar24 + 0xea;
  pppplVar1 = pppplVar24 + 0xeb;
  ppppplVar29 = (long *****)pppplVar24[0xeb];
  if (ppppplVar29 < pppplVar24[0xec]) {
    ppppplVar28 = ppppplVar29;
    FUN_10a193e84(ppppplVar29,puVar15);
    ppppplVar29 = ppppplVar29 + 299;
    *pppplVar1 = (long ***)ppppplVar29;
  }
  else {
    ppplVar30 = (long ***)((long)ppppplVar29 - (long)*pppplVar32);
    uVar31 = ((long)ppplVar30 >> 3) * 0x72baa619af84b583 + 1;
    if (0x1b65e2e3beee05 < uVar31) {
      FUN_10a5e8390();
      *pppplVar1 = ppplVar30;
      __Unwind_Resume();
      lStack_12b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_1320 = -1;
      lStack_1318 = -1;
      if ((int)puVar16 < 0) {
        ppppplVar11 = (long *****)(&PTR_DAT_110c50c00 + ((ulong)ppplVar13 & 0xffffffff) * 5);
        func_0x000107c2b074(&pppplStack_1308,ppppplVar11);
        uStack_130c = (undefined3)((ulong)uStack_12f8 >> 0x20);
        uStack_137c = (uint)uStack_12f8._7_1_;
        pppplStack_1388 = pppplStack_1308;
        uStack_1310 = (undefined4)uStack_12f8;
        ppppplVar29 = (long *****)pppplStack_1300;
        pppplVar24 = (long ****)ppplStack_12f0;
joined_r0x00010aba6260:
        if (ppppplVar28 == (long *****)0x0) goto LAB_10aba6264;
LAB_10aba632c:
        pppplVar32 = ppppplVar28[0x4d];
      }
      else {
        func_0x000107c2b074(&pppplStack_1308,
                            &PTR_DAT_110c50c00 + ((ulong)ppplVar13 & 0xffffffff) * 5);
        if ((long)uStack_12f8 < 0) {
          func_0x000107c3192c(&pppplStack_1360,pppplStack_1308,pppplStack_1300);
        }
        else {
          pppplStack_1358 = pppplStack_1300;
          pppplStack_1360 = pppplStack_1308;
          pppplStack_1350 = (long ****)uStack_12f8;
        }
        __ZNSt3__19to_stringEi(&ppppuStack_1378,puVar16);
        pppppuVar7 = (undefined8 *****)ppppuStack_1378;
        if (-1 < (char)bStack_1361) {
          uStack_1370 = (ulong)bStack_1361;
          pppppuVar7 = &ppppuStack_1378;
        }
        ppppplVar11 = &pppplStack_1360;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppplVar11,pppppuVar7,uStack_1370);
        ppplStack_1338 = (long ***)ppppplVar11[1];
        pppplStack_1340 = *ppppplVar11;
        ppplStack_1330 = (long ***)ppppplVar11[2];
        ppppplVar11[1] = (long ****)0x0;
        ppppplVar11[2] = (long ****)0x0;
        *ppppplVar11 = (long ****)0x0;
        if ((char)bStack_1361 < '\0') {
          __ZdlPv(ppppuStack_1378);
        }
        if ((long)pppplStack_1350 < 0) {
          __ZdlPv(pppplStack_1360);
        }
        if ((long)uStack_12f8 < 0) {
          __ZdlPv(pppplStack_1308);
        }
        ppppplVar11 = &pppplStack_1308;
        FUN_10a0d09b4(ppppplVar11,&pppplStack_1340);
        pppplVar24 = (long ****)ppplStack_12f0;
        ppppplVar29 = (long *****)pppplStack_1300;
        pppplStack_1388 = pppplStack_1308;
        uStack_130c = (undefined3)((ulong)uStack_12f8 >> 0x20);
        uStack_137c = (uint)uStack_12f8._7_1_;
        uStack_1310 = (undefined4)uStack_12f8;
        if ((long)ppplStack_1330 < 0) {
          ppppplVar11 = (long *****)pppplStack_1340;
          __ZdlPv(pppplStack_1340);
          goto joined_r0x00010aba6260;
        }
        if (ppppplVar28 != (long *****)0x0) goto LAB_10aba632c;
LAB_10aba6264:
        pppplVar32 = (long ****)0x0;
      }
      uVar3 = *(undefined1 *)ppplVar14;
      uStack_1324 = *(undefined2 *)((long)ppplVar14 + 1);
      uStack_1322 = *(undefined1 *)((long)ppplVar14 + 3);
      uVar2 = *(undefined4 *)((long)ppplVar14 + 4);
      plStack_12e0 = (long *)ppplVar14[1];
      uStack_12d8 = SUB86(ppplVar14[2],0);
      uStack_12ca = *(undefined8 *)((long)ppplVar14 + 0x1e);
      uStack_12d2 = (undefined2)*(undefined8 *)((long)ppplVar14 + 0x16);
      uStack_12d0 = (undefined6)((ulong)*(undefined8 *)((long)ppplVar14 + 0x16) >> 0x10);
      uVar4 = *(undefined2 *)((long)ppplVar14 + 0x26);
      ppppplVar22 = (long *****)pppplVar21[0x1e];
      if (ppppplVar22 < pppplVar21[0x1f]) {
        if (uStack_137c >> 7 == 0) {
          *ppppplVar22 = pppplStack_1388;
          ppppplVar22[1] = (long ****)ppppplVar29;
          *(undefined4 *)(ppppplVar22 + 2) = uStack_1310;
          *(uint *)((long)ppppplVar22 + 0x13) = CONCAT31(uStack_130c,uStack_1310._3_1_);
          *(char *)((long)ppppplVar22 + 0x17) = (char)uStack_137c;
        }
        else {
          ppppplVar11 = ppppplVar22;
          func_0x000107c3192c(ppppplVar22,pppplStack_1388,ppppplVar29);
        }
        ppppplVar22[3] = pppplVar24;
        ppppplVar22[4] = (long ****)0xffffffffffffffff;
        ppppplVar22[5] = (long ****)0xffffffffffffffff;
        ppppplVar22[6] = pppplVar32;
        *(undefined2 *)(ppppplVar22 + 7) = 0xd;
        *(undefined1 *)((long)ppppplVar22 + 0x3c) = uVar3;
        *(undefined2 *)((long)ppppplVar22 + 0x3d) = uStack_1324;
        *(undefined1 *)((long)ppppplVar22 + 0x3f) = uStack_1322;
        *(undefined4 *)(ppppplVar22 + 8) = uVar2;
        *(ulong *)((long)ppppplVar22 + 0x4c) = CONCAT26(uStack_12d2,uStack_12d8);
        *(long **)((long)ppppplVar22 + 0x44) = plStack_12e0;
        *(undefined8 *)((long)ppppplVar22 + 0x5a) = uStack_12ca;
        *(ulong *)((long)ppppplVar22 + 0x52) = CONCAT62(uStack_12d0,uStack_12d2);
        *(undefined2 *)((long)ppppplVar22 + 0x62) = uVar4;
        ppppplVar22 = ppppplVar22 + 0xd;
        pppplVar21[0x1e] = (long ***)ppppplVar22;
      }
      else {
        pppplVar1 = pppplVar21 + 0x1d;
        lVar23 = (long)ppppplVar22 - (long)*pppplVar1;
        uVar31 = (lVar23 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
        if (0x276276276276276 < uVar31) goto LAB_10aba6664;
        lVar27 = (long)pppplVar21[0x1f] - (long)*pppplVar1 >> 3;
        uVar26 = lVar27 * -0x6276276276276276;
        if (uVar26 < uVar31 || uVar26 - uVar31 == 0) {
          uVar26 = uVar31;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar27 * 0x4ec4ec4ec4ec4ec5)) {
          uVar26 = 0x276276276276276;
        }
        ppplStack_12e8 = (long ***)pppplVar1;
        if (uVar26 == 0) {
          pppplVar12 = (long ****)0x0;
        }
        else {
          pppplVar12 = pppplVar1;
          FUN_10a045464();
        }
        plVar25 = (long *)((long)pppplVar12 + lVar23);
        ppplStack_12f0 = (long ***)(pppplVar12 + uVar26 * 0xd);
        pppplStack_1308 = pppplVar12;
        pppplStack_1300 = (long ****)plVar25;
        if (uStack_137c >> 7 == 0) {
          *plVar25 = (long)pppplStack_1388;
          plVar25[1] = (long)ppppplVar29;
          *(undefined4 *)(plVar25 + 2) = uStack_1310;
          *(uint *)((long)plVar25 + 0x13) = CONCAT31(uStack_130c,uStack_1310._3_1_);
          *(char *)((long)plVar25 + 0x17) = (char)uStack_137c;
        }
        else {
          uStack_12f8 = (long *****)plVar25;
          func_0x000107c3192c(plVar25,pppplStack_1388,ppppplVar29);
        }
        plVar25[3] = (long)pppplVar24;
        plVar25[5] = lStack_1318;
        plVar25[4] = lStack_1320;
        plVar25[6] = (long)pppplVar32;
        *(undefined2 *)(plVar25 + 7) = 0xd;
        *(undefined1 *)((long)plVar25 + 0x3c) = uVar3;
        *(undefined2 *)((long)plVar25 + 0x3d) = uStack_1324;
        *(undefined1 *)((long)plVar25 + 0x3f) = uStack_1322;
        *(undefined4 *)(plVar25 + 8) = uVar2;
        *(ulong *)((long)plVar25 + 0x4c) = CONCAT26(uStack_12d2,uStack_12d8);
        *(long **)((long)plVar25 + 0x44) = plStack_12e0;
        *(undefined8 *)((long)plVar25 + 0x5a) = uStack_12ca;
        *(ulong *)((long)plVar25 + 0x52) = CONCAT62(uStack_12d0,uStack_12d2);
        *(undefined2 *)((long)plVar25 + 0x62) = uVar4;
        uStack_12f8 = (long *****)(plVar25 + 0xd);
        ppplVar13 = (long ***)((long)plVar25 + ((long)pppplVar21[0x1d] - (long)pppplVar21[0x1e]));
        func_0x00010a5e5a8c(pppplVar1,pppplVar21[0x1d],pppplVar21[0x1e],ppplVar13);
        ppppplVar22 = uStack_12f8;
        pppplStack_1308 = (long ****)pppplVar21[0x1d];
        pppplVar21[0x1d] = ppplVar13;
        pppplVar24 = (long ****)pppplVar21[0x1f];
        pppplVar21[0x1f] = ppplStack_12f0;
        pppplVar21[0x1e] = (long ***)uStack_12f8;
        ppppplVar11 = &pppplStack_1308;
        pppplStack_1300 = pppplStack_1308;
        uStack_12f8 = (long *****)pppplStack_1308;
        ppplStack_12f0 = (long ***)pppplVar24;
        func_0x00010a5e5b64(ppppplVar11);
      }
      pppplVar21[0x1e] = (long ***)ppppplVar22;
      if ((ppppplVar28 != (long *****)0x0) &&
         (___dynamic_cast(ppppplVar28,&PTR_DAT_110c4eff0,&PTR_DAT_110bb2dc8,0xfffffffffffffffe),
         ppppplVar11 = ppppplVar28, ppppplVar28 != (long *****)0x0)) {
        ppppplVar29 = ppppplVar28;
        FUN_10a1dd000();
        ppppplVar11 = (long *****)0x0;
        if (ppppplVar29 != (long *****)0x0) {
          ___dynamic_cast();
          ppppplVar11 = (long *****)0x0;
          if (ppppplVar29 != (long *****)0x0) {
            FUN_10abf1b04();
            lVar23 = 1;
            FUN_10a088744(ppppplVar28);
            ppppplVar11 = ppppplVar28;
            if ((lVar23 != 0) &&
               (ppppplVar28 = *(long ******)(lVar23 + 8), ppppplVar28 != (long *****)0x0)) {
              ppppplVar29 = ppppplVar28 + 1;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar29,0x10);
                if (bVar6) {
                  *ppppplVar29 = (long ****)((long)*ppppplVar29 + 1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              do {
                pppplVar21 = *ppppplVar29;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppplVar29,0x10);
                if (bVar6) {
                  *ppppplVar29 = (long ****)((long)pppplVar21 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (pppplVar21 == (long ****)0x0) {
                (*(code *)(*ppppplVar28)[2])(ppppplVar28);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar28);
                ppppplVar11 = ppppplVar28;
              }
            }
          }
        }
      }
      if (uStack_137c >> 7 != 0) {
        __ZdlPv(pppplStack_1388);
        ppppplVar11 = (long *****)pppplStack_1388;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_12b8) {
        return ppppplVar11;
      }
      ___stack_chk_fail();
LAB_10aba6664:
      FUN_10a045450();
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10aba666c);
      (*pcVar8)();
    }
    lVar23 = (long)pppplVar24[0xec] - (long)*pppplVar32 >> 3;
    uVar26 = lVar23 * -0x1a8ab3cca0f694fa;
    if (uVar26 < uVar31 || uVar26 - uVar31 == 0) {
      uVar26 = uVar31;
    }
    if (0xdb2f171df7701 < (ulong)(lVar23 * 0x72baa619af84b583)) {
      uVar26 = 0x1b65e2e3beee05;
    }
    ppplStack_11f8 = (long ***)pppplVar32;
    if (uVar26 == 0) {
      pppplVar21 = (long ****)0x0;
    }
    else {
      pppplVar21 = pppplVar32;
      FUN_10a5e83a4();
    }
    puVar10 = (undefined *)((long)pppplVar21 + (long)ppplVar30);
    ppplStack_1200 = (long ***)(pppplVar21 + uVar26 * 299);
    ppplStack_1218 = (long ***)pppplVar21;
    ppplStack_1210 = (long ***)puVar10;
    pppplStack_1208 = (long ****)puVar10;
    FUN_10a193e84(puVar10,puVar15);
    pppplStack_1208 = (long ****)(puVar10 + 0x958);
    ppplVar14 = *pppplVar1;
    ppplVar13 = *pppplVar32;
    FUN_10a5e83ec(pppplVar32,ppplVar13,ppplVar14,puVar10 + ((long)ppplVar13 - (long)ppplVar14));
    ppppplVar29 = (long *****)pppplStack_1208;
    ppplStack_1218 = pppplVar24[0xea];
    pppplVar24[0xea] = (long ***)(puVar10 + ((long)ppplVar13 - (long)ppplVar14));
    ppplVar13 = pppplVar24[0xec];
    pppplVar24[0xec] = ppplStack_1200;
    *pppplVar1 = (long ***)pppplStack_1208;
    ppppplVar28 = (long *****)&ppplStack_1218;
    ppplStack_1210 = ppplStack_1218;
    pppplStack_1208 = (long ****)ppplStack_1218;
    ppplStack_1200 = ppplVar13;
    FUN_10a5e86c8(ppppplVar28);
  }
  pppplVar24[0xeb] = (long ***)ppppplVar29;
  if (pppplVar24[0xe7] != pppplVar24[0xe8]) {
    *ppppplVar11 = (long ****)(pppplVar24[0xe8] + -0xfb);
    if (*pppplVar32 != *pppplVar1) {
      *plStack_11b0 = (long)(*pppplVar1 + -299);
      return ppppplVar28;
    }
  }
LAB_10aba6178:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10aba617c);
  (*pcVar8)();
}



/* Entry: 10aba5ef0; end: 10aba619f;  */

void FUN_10aba5ef0(long param_1,long param_2,undefined4 *param_3,long *param_4,long param_5,
                  uint param_6,undefined4 *param_7,long *param_8,long *param_9)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *****pppppuVar7;
  code *pcVar8;
  long **pplVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  long *plStack_1d8;
  uint uStack_1cc;
  undefined8 ****ppppuStack_1c8;
  ulong uStack_1c0;
  byte bStack_1b1;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined2 uStack_174;
  undefined1 uStack_172;
  long lStack_170;
  long lStack_168;
  undefined4 uStack_160;
  undefined3 uStack_15c;
  long *plStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  long lStack_130;
  undefined6 uStack_128;
  undefined2 uStack_122;
  undefined6 uStack_120;
  undefined8 uStack_11a;
  long lStack_108;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  uVar12 = (undefined4)((ulong)param_5 >> 0x20);
  iVar11 = (int)param_5;
  *(undefined4 *)(param_5 + 0x900) = *param_3;
  *(undefined2 *)(param_5 + 0x904) = *(undefined2 *)(param_3 + 1);
  *(short *)(param_5 + 0x906) = (short)param_6;
  *(undefined4 *)(param_5 + 0x908) = *param_7;
  lVar23 = *(long *)(param_3 + 4);
  puVar3 = *(undefined8 **)(param_3 + 6);
  *(long *)(param_5 + 0x910) = lVar23;
  uStack_70 = puVar3[2];
  uStack_78 = puVar3[1];
  uStack_80._4_4_ = (undefined4)((ulong)*puVar3 >> 0x20);
  uStack_80._0_2_ = (undefined2)*puVar3;
  uStack_80 = CONCAT44(uStack_80._4_4_,
                       CONCAT22((short)((uint)(*(int *)(lVar23 + 0x740) - *(int *)(lVar23 + 0x738))
                                       >> 3) * 0xa33,(undefined2)uStack_80)) | 0x80000000;
  if (param_1 == param_2) {
    param_1 = 0;
  }
  else {
    uVar14 = (param_2 - param_1 >> 3) * -0x5555555555555555;
    if (uVar14 < param_6 || uVar14 - param_6 == 0) goto LAB_10aba6178;
    param_1 = param_1 + (ulong)param_6 * 0x18;
  }
  *param_4 = param_1;
  param_4[1] = param_1;
  iVar13 = param_7[1];
  if (iVar13 == -0x80000000) {
    iVar13 = (int)param_4[7];
  }
  else {
    *(int *)(param_4 + 7) = iVar13;
  }
  uStack_80 = CONCAT44(iVar13,(undefined4)uStack_80);
  uVar14 = (ulong)uStack_78 >> 0x20;
  uStack_78 = CONCAT44((int)uVar14,param_7[2]);
  *(undefined4 *)((long)param_4 + 0x3c) = param_7[2];
  plVar20 = (long *)param_4[0x2d];
  if ((long *)param_4[0x2e] != plVar20) {
    *(undefined1 *)((long)plVar20 + 0x29) = 0;
    *(undefined1 *)(*plVar20 + 0x334) = 0;
  }
  *(undefined1 *)((long)param_4 + 0x19d) = 0;
  plVar15 = param_4;
  FUN_10a5e72a4(lVar23 + 0x720,&uStack_80);
  lVar16 = lVar23 + 0x738;
  FUN_10a5e6a6c(lVar16,param_4);
  plVar20 = (long *)(lVar23 + 0x750);
  plVar24 = (long *)(lVar23 + 0x758);
  uVar14 = *(ulong *)(lVar23 + 0x758);
  if (uVar14 < *(ulong *)(lVar23 + 0x760)) {
    FUN_10a193e84(uVar14,param_5);
    plVar15 = (long *)(uVar14 + 0x958);
    *plVar24 = (long)plVar15;
  }
  else {
    lVar21 = uVar14 - *plVar20;
    uVar14 = (lVar21 >> 3) * 0x72baa619af84b583 + 1;
    if (0x1b65e2e3beee05 < uVar14) {
      FUN_10a5e8390();
      *plVar24 = lVar21;
      __Unwind_Resume();
      lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_170 = -1;
      lStack_168 = -1;
      if (iVar11 < 0) {
        func_0x000107c2b074(&plStack_158,&PTR_DAT_110c50c00 + ((ulong)param_4 & 0xffffffff) * 5);
        uStack_15c = (undefined3)((ulong)uStack_148 >> 0x20);
        uStack_1cc = (uint)uStack_148._7_1_;
        plStack_1d8 = plStack_158;
        uStack_160 = (undefined4)uStack_148;
        plVar20 = plStack_150;
        plVar24 = plStack_140;
joined_r0x00010aba6260:
        if (param_3 == (undefined4 *)0x0) goto LAB_10aba6264;
LAB_10aba632c:
        lVar23 = *(long *)(param_3 + 0x9a);
      }
      else {
        func_0x000107c2b074(&plStack_158,&PTR_DAT_110c50c00 + ((ulong)param_4 & 0xffffffff) * 5);
        if ((long)uStack_148 < 0) {
          func_0x000107c3192c(&plStack_1b0,plStack_158,plStack_150);
        }
        else {
          plStack_1a8 = plStack_150;
          plStack_1b0 = plStack_158;
          plStack_1a0 = uStack_148;
        }
        __ZNSt3__19to_stringEi(&ppppuStack_1c8,CONCAT44(uVar12,iVar11));
        pppppuVar7 = (undefined8 *****)ppppuStack_1c8;
        if (-1 < (char)bStack_1b1) {
          uStack_1c0 = (ulong)bStack_1b1;
          pppppuVar7 = &ppppuStack_1c8;
        }
        pplVar9 = &plStack_1b0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pplVar9,pppppuVar7,uStack_1c0);
        plStack_188 = pplVar9[1];
        plStack_190 = *pplVar9;
        plStack_180 = pplVar9[2];
        pplVar9[1] = (long *)0x0;
        pplVar9[2] = (long *)0x0;
        *pplVar9 = (long *)0x0;
        if ((char)bStack_1b1 < '\0') {
          __ZdlPv(ppppuStack_1c8);
        }
        if ((long)plStack_1a0 < 0) {
          __ZdlPv(plStack_1b0);
        }
        if ((long)uStack_148 < 0) {
          __ZdlPv(plStack_158);
        }
        FUN_10a0d09b4(&plStack_158,&plStack_190);
        plVar24 = plStack_140;
        plVar20 = plStack_150;
        plStack_1d8 = plStack_158;
        uStack_15c = (undefined3)((ulong)uStack_148 >> 0x20);
        uStack_1cc = (uint)uStack_148._7_1_;
        uStack_160 = (undefined4)uStack_148;
        if ((long)plStack_180 < 0) {
          __ZdlPv(plStack_190);
          goto joined_r0x00010aba6260;
        }
        if (param_3 != (undefined4 *)0x0) goto LAB_10aba632c;
LAB_10aba6264:
        lVar23 = 0;
      }
      lVar21 = *plVar15;
      uStack_174 = *(undefined2 *)((long)plVar15 + 1);
      uStack_172 = *(undefined1 *)((long)plVar15 + 3);
      uVar12 = *(undefined4 *)((long)plVar15 + 4);
      lStack_130 = plVar15[1];
      uStack_128 = (undefined6)plVar15[2];
      uStack_11a = *(undefined8 *)((long)plVar15 + 0x1e);
      uStack_122 = (undefined2)*(undefined8 *)((long)plVar15 + 0x16);
      uStack_120 = (undefined6)((ulong)*(undefined8 *)((long)plVar15 + 0x16) >> 0x10);
      uVar4 = *(undefined2 *)((long)plVar15 + 0x26);
      plVar15 = *(long **)(lVar16 + 0xf0);
      if (plVar15 < *(long **)(lVar16 + 0xf8)) {
        if (uStack_1cc >> 7 == 0) {
          *plVar15 = (long)plStack_1d8;
          plVar15[1] = (long)plVar20;
          *(undefined4 *)(plVar15 + 2) = uStack_160;
          *(uint *)((long)plVar15 + 0x13) = CONCAT31(uStack_15c,uStack_160._3_1_);
          *(char *)((long)plVar15 + 0x17) = (char)uStack_1cc;
        }
        else {
          func_0x000107c3192c(plVar15,plStack_1d8,plVar20);
        }
        plVar15[3] = (long)plVar24;
        plVar15[4] = -1;
        plVar15[5] = -1;
        plVar15[6] = lVar23;
        *(undefined2 *)(plVar15 + 7) = 0xd;
        *(char *)((long)plVar15 + 0x3c) = (char)lVar21;
        *(undefined2 *)((long)plVar15 + 0x3d) = uStack_174;
        *(undefined1 *)((long)plVar15 + 0x3f) = uStack_172;
        *(undefined4 *)(plVar15 + 8) = uVar12;
        *(ulong *)((long)plVar15 + 0x4c) = CONCAT26(uStack_122,uStack_128);
        *(long *)((long)plVar15 + 0x44) = lStack_130;
        *(undefined8 *)((long)plVar15 + 0x5a) = uStack_11a;
        *(ulong *)((long)plVar15 + 0x52) = CONCAT62(uStack_120,uStack_122);
        *(undefined2 *)((long)plVar15 + 0x62) = uVar4;
        plVar15 = plVar15 + 0xd;
        *(long **)(lVar16 + 0xf0) = plVar15;
      }
      else {
        plVar1 = (long *)(lVar16 + 0xe8);
        lVar22 = (long)plVar15 - *plVar1;
        uVar14 = (lVar22 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
        if (0x276276276276276 < uVar14) goto LAB_10aba6664;
        lVar18 = (long)*(long **)(lVar16 + 0xf8) - *plVar1 >> 3;
        uVar19 = lVar18 * -0x6276276276276276;
        if (uVar19 < uVar14 || uVar19 - uVar14 == 0) {
          uVar19 = uVar14;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar18 * 0x4ec4ec4ec4ec4ec5)) {
          uVar19 = 0x276276276276276;
        }
        plStack_138 = plVar1;
        if (uVar19 == 0) {
          plVar15 = (long *)0x0;
        }
        else {
          plVar15 = plVar1;
          FUN_10a045464();
        }
        plVar2 = (long *)((long)plVar15 + lVar22);
        plStack_140 = plVar15 + uVar19 * 0xd;
        plStack_158 = plVar15;
        plStack_150 = plVar2;
        if (uStack_1cc >> 7 == 0) {
          *plVar2 = (long)plStack_1d8;
          plVar2[1] = (long)plVar20;
          *(undefined4 *)(plVar2 + 2) = uStack_160;
          *(uint *)((long)plVar2 + 0x13) = CONCAT31(uStack_15c,uStack_160._3_1_);
          *(char *)((long)plVar2 + 0x17) = (char)uStack_1cc;
        }
        else {
          uStack_148 = plVar2;
          func_0x000107c3192c(plVar2,plStack_1d8,plVar20);
        }
        plVar2[3] = (long)plVar24;
        plVar2[5] = lStack_168;
        plVar2[4] = lStack_170;
        plVar2[6] = lVar23;
        *(undefined2 *)(plVar2 + 7) = 0xd;
        *(char *)((long)plVar2 + 0x3c) = (char)lVar21;
        *(undefined2 *)((long)plVar2 + 0x3d) = uStack_174;
        *(undefined1 *)((long)plVar2 + 0x3f) = uStack_172;
        *(undefined4 *)(plVar2 + 8) = uVar12;
        *(ulong *)((long)plVar2 + 0x4c) = CONCAT26(uStack_122,uStack_128);
        *(long *)((long)plVar2 + 0x44) = lStack_130;
        *(undefined8 *)((long)plVar2 + 0x5a) = uStack_11a;
        *(ulong *)((long)plVar2 + 0x52) = CONCAT62(uStack_120,uStack_122);
        *(undefined2 *)((long)plVar2 + 0x62) = uVar4;
        uStack_148 = plVar2 + 0xd;
        lVar23 = (long)plVar2 + (*(long *)(lVar16 + 0xe8) - *(long *)(lVar16 + 0xf0));
        func_0x00010a5e5a8c(plVar1,*(long *)(lVar16 + 0xe8),*(long *)(lVar16 + 0xf0),lVar23);
        plVar15 = uStack_148;
        plStack_158 = *(long **)(lVar16 + 0xe8);
        *(long *)(lVar16 + 0xe8) = lVar23;
        lVar23 = *(long *)(lVar16 + 0xf8);
        *(long **)(lVar16 + 0xf8) = plStack_140;
        *(long **)(lVar16 + 0xf0) = uStack_148;
        plStack_150 = plStack_158;
        uStack_148 = plStack_158;
        plStack_140 = (long *)lVar23;
        func_0x00010a5e5b64(&plStack_158);
      }
      *(long **)(lVar16 + 0xf0) = plVar15;
      if ((((param_3 != (undefined4 *)0x0) &&
           (___dynamic_cast(param_3,&PTR_DAT_110c4eff0,&PTR_DAT_110bb2dc8,0xfffffffffffffffe),
           param_3 != (undefined4 *)0x0)) &&
          (puVar10 = param_3, FUN_10a1dd000(), puVar10 != (undefined4 *)0x0)) &&
         (___dynamic_cast(), puVar10 != (undefined4 *)0x0)) {
        FUN_10abf1b04();
        lVar23 = 1;
        FUN_10a088744(param_3);
        if ((lVar23 != 0) && (plVar20 = *(long **)(lVar23 + 8), plVar20 != (long *)0x0)) {
          plVar24 = plVar20 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar6) {
              *plVar24 = *plVar24 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            lVar23 = *plVar24;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar6) {
              *plVar24 = lVar23 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar23 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
          }
        }
      }
      if (uStack_1cc >> 7 != 0) {
        __ZdlPv(plStack_1d8);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
        return;
      }
      ___stack_chk_fail();
LAB_10aba6664:
      FUN_10a045450();
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10aba666c);
      (*pcVar8)();
    }
    lVar16 = (long)(*(ulong *)(lVar23 + 0x760) - *plVar20) >> 3;
    uVar19 = lVar16 * -0x1a8ab3cca0f694fa;
    if (uVar19 < uVar14 || uVar19 - uVar14 == 0) {
      uVar19 = uVar14;
    }
    if (0xdb2f171df7701 < (ulong)(lVar16 * 0x72baa619af84b583)) {
      uVar19 = 0x1b65e2e3beee05;
    }
    plStack_48 = plVar20;
    if (uVar19 == 0) {
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = plVar20;
      FUN_10a5e83a4();
    }
    lVar21 = (long)plVar15 + lVar21;
    plStack_50 = plVar15 + uVar19 * 299;
    plStack_68 = plVar15;
    plStack_60 = (long *)lVar21;
    plStack_58 = (long *)lVar21;
    FUN_10a193e84(lVar21,param_5);
    plStack_58 = (long *)(lVar21 + 0x958);
    lVar21 = lVar21 + (*plVar20 - *plVar24);
    FUN_10a5e83ec(plVar20,*plVar20,*plVar24,lVar21);
    plVar15 = plStack_58;
    plStack_68 = *(long **)(lVar23 + 0x750);
    *(long *)(lVar23 + 0x750) = lVar21;
    uVar17 = *(undefined8 *)(lVar23 + 0x760);
    *(long **)(lVar23 + 0x760) = plStack_50;
    *plVar24 = (long)plStack_58;
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    plStack_50 = (long *)uVar17;
    FUN_10a5e86c8(&plStack_68);
  }
  *(long **)(lVar23 + 0x758) = plVar15;
  if (*(long *)(lVar23 + 0x738) != *(long *)(lVar23 + 0x740)) {
    *param_8 = *(long *)(lVar23 + 0x740) + -0x7d8;
    if (*plVar20 != *plVar24) {
      *param_9 = *plVar24 + -0x958;
      return;
    }
  }
LAB_10aba6178:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10aba617c);
  (*pcVar8)();
}



/* Entry: 10aba61a0; end: 10aba670f;  */

void FUN_10aba61a0(long param_1,ulong param_2,long param_3,undefined1 *param_4,undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  char cVar6;
  bool bVar7;
  undefined8 *****pppppuVar8;
  code *pcVar9;
  long **pplVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plStack_148;
  uint uStack_13c;
  undefined8 ****ppppuStack_138;
  ulong uStack_130;
  byte bStack_121;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined2 uStack_e4;
  undefined1 uStack_e2;
  long lStack_e0;
  long lStack_d8;
  undefined4 uStack_d0;
  undefined3 uStack_cc;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined6 uStack_98;
  undefined2 uStack_92;
  undefined6 uStack_90;
  undefined8 uStack_8a;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_e0 = -1;
  lStack_d8 = -1;
  if ((int)param_5 < 0) {
    func_0x000107c2b074(&plStack_c8,&PTR_DAT_110c50c00 + (param_2 & 0xffffffff) * 5);
    uStack_cc = (undefined3)((ulong)uStack_b8 >> 0x20);
    uStack_13c = (uint)uStack_b8._7_1_;
    plStack_148 = plStack_c8;
    uStack_d0 = (undefined4)uStack_b8;
    plVar15 = plStack_c0;
    plVar18 = plStack_b0;
joined_r0x00010aba6260:
    if (param_3 == 0) goto LAB_10aba6264;
LAB_10aba632c:
    lVar17 = *(long *)(param_3 + 0x268);
  }
  else {
    func_0x000107c2b074(&plStack_c8,&PTR_DAT_110c50c00 + (param_2 & 0xffffffff) * 5);
    if ((long)uStack_b8 < 0) {
      func_0x000107c3192c(&plStack_120,plStack_c8,plStack_c0);
    }
    else {
      plStack_118 = plStack_c0;
      plStack_120 = plStack_c8;
      plStack_110 = uStack_b8;
    }
    __ZNSt3__19to_stringEi(&ppppuStack_138,param_5);
    pppppuVar8 = (undefined8 *****)ppppuStack_138;
    if (-1 < (char)bStack_121) {
      uStack_130 = (ulong)bStack_121;
      pppppuVar8 = &ppppuStack_138;
    }
    pplVar10 = &plStack_120;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pplVar10,pppppuVar8,uStack_130);
    plStack_f8 = pplVar10[1];
    plStack_100 = *pplVar10;
    plStack_f0 = pplVar10[2];
    pplVar10[1] = (long *)0x0;
    pplVar10[2] = (long *)0x0;
    *pplVar10 = (long *)0x0;
    if ((char)bStack_121 < '\0') {
      __ZdlPv(ppppuStack_138);
    }
    if ((long)plStack_110 < 0) {
      __ZdlPv(plStack_120);
    }
    if ((long)uStack_b8 < 0) {
      __ZdlPv(plStack_c8);
    }
    FUN_10a0d09b4(&plStack_c8,&plStack_100);
    plVar18 = plStack_b0;
    plVar15 = plStack_c0;
    plStack_148 = plStack_c8;
    uStack_cc = (undefined3)((ulong)uStack_b8 >> 0x20);
    uStack_13c = (uint)uStack_b8._7_1_;
    uStack_d0 = (undefined4)uStack_b8;
    if ((long)plStack_f0 < 0) {
      __ZdlPv(plStack_100);
      goto joined_r0x00010aba6260;
    }
    if (param_3 != 0) goto LAB_10aba632c;
LAB_10aba6264:
    lVar17 = 0;
  }
  uVar4 = *param_4;
  uStack_e4 = *(undefined2 *)(param_4 + 1);
  uStack_e2 = param_4[3];
  uVar3 = *(undefined4 *)(param_4 + 4);
  uStack_a0 = *(undefined8 *)(param_4 + 8);
  uStack_98 = (undefined6)*(undefined8 *)(param_4 + 0x10);
  uStack_8a = *(undefined8 *)(param_4 + 0x1e);
  uStack_92 = (undefined2)*(undefined8 *)(param_4 + 0x16);
  uStack_90 = (undefined6)((ulong)*(undefined8 *)(param_4 + 0x16) >> 0x10);
  uVar5 = *(undefined2 *)(param_4 + 0x26);
  plVar11 = *(long **)(param_1 + 0xf0);
  if (plVar11 < *(long **)(param_1 + 0xf8)) {
    if (uStack_13c >> 7 == 0) {
      *plVar11 = (long)plStack_148;
      plVar11[1] = (long)plVar15;
      *(undefined4 *)(plVar11 + 2) = uStack_d0;
      *(uint *)((long)plVar11 + 0x13) = CONCAT31(uStack_cc,uStack_d0._3_1_);
      *(char *)((long)plVar11 + 0x17) = (char)uStack_13c;
    }
    else {
      func_0x000107c3192c(plVar11,plStack_148,plVar15);
    }
    plVar11[3] = (long)plVar18;
    plVar11[4] = -1;
    plVar11[5] = -1;
    plVar11[6] = lVar17;
    *(undefined2 *)(plVar11 + 7) = 0xd;
    *(undefined1 *)((long)plVar11 + 0x3c) = uVar4;
    *(undefined2 *)((long)plVar11 + 0x3d) = uStack_e4;
    *(undefined1 *)((long)plVar11 + 0x3f) = uStack_e2;
    *(undefined4 *)(plVar11 + 8) = uVar3;
    *(ulong *)((long)plVar11 + 0x4c) = CONCAT26(uStack_92,uStack_98);
    *(undefined8 *)((long)plVar11 + 0x44) = uStack_a0;
    *(undefined8 *)((long)plVar11 + 0x5a) = uStack_8a;
    *(ulong *)((long)plVar11 + 0x52) = CONCAT62(uStack_90,uStack_92);
    *(undefined2 *)((long)plVar11 + 0x62) = uVar5;
    plVar11 = plVar11 + 0xd;
    *(long **)(param_1 + 0xf0) = plVar11;
  }
  else {
    plVar1 = (long *)(param_1 + 0xe8);
    lVar16 = (long)plVar11 - *plVar1;
    uVar14 = (lVar16 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
    if (0x276276276276276 < uVar14) goto LAB_10aba6664;
    lVar12 = (long)*(long **)(param_1 + 0xf8) - *plVar1 >> 3;
    uVar13 = lVar12 * -0x6276276276276276;
    if (uVar13 < uVar14 || uVar13 - uVar14 == 0) {
      uVar13 = uVar14;
    }
    if (0x13b13b13b13b13a < (ulong)(lVar12 * 0x4ec4ec4ec4ec4ec5)) {
      uVar13 = 0x276276276276276;
    }
    plStack_a8 = plVar1;
    if (uVar13 == 0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = plVar1;
      FUN_10a045464();
    }
    plVar2 = (long *)((long)plVar11 + lVar16);
    plStack_b0 = plVar11 + uVar13 * 0xd;
    plStack_c8 = plVar11;
    plStack_c0 = plVar2;
    if (uStack_13c >> 7 == 0) {
      *plVar2 = (long)plStack_148;
      plVar2[1] = (long)plVar15;
      *(undefined4 *)(plVar2 + 2) = uStack_d0;
      *(uint *)((long)plVar2 + 0x13) = CONCAT31(uStack_cc,uStack_d0._3_1_);
      *(char *)((long)plVar2 + 0x17) = (char)uStack_13c;
    }
    else {
      uStack_b8 = plVar2;
      func_0x000107c3192c(plVar2,plStack_148,plVar15);
    }
    plVar2[3] = (long)plVar18;
    plVar2[5] = lStack_d8;
    plVar2[4] = lStack_e0;
    plVar2[6] = lVar17;
    *(undefined2 *)(plVar2 + 7) = 0xd;
    *(undefined1 *)((long)plVar2 + 0x3c) = uVar4;
    *(undefined2 *)((long)plVar2 + 0x3d) = uStack_e4;
    *(undefined1 *)((long)plVar2 + 0x3f) = uStack_e2;
    *(undefined4 *)(plVar2 + 8) = uVar3;
    *(ulong *)((long)plVar2 + 0x4c) = CONCAT26(uStack_92,uStack_98);
    *(undefined8 *)((long)plVar2 + 0x44) = uStack_a0;
    *(undefined8 *)((long)plVar2 + 0x5a) = uStack_8a;
    *(ulong *)((long)plVar2 + 0x52) = CONCAT62(uStack_90,uStack_92);
    *(undefined2 *)((long)plVar2 + 0x62) = uVar5;
    uStack_b8 = plVar2 + 0xd;
    lVar17 = (long)plVar2 + (*(long *)(param_1 + 0xe8) - *(long *)(param_1 + 0xf0));
    func_0x00010a5e5a8c(plVar1,*(long *)(param_1 + 0xe8),*(long *)(param_1 + 0xf0),lVar17);
    plVar11 = uStack_b8;
    plStack_c8 = *(long **)(param_1 + 0xe8);
    *(long *)(param_1 + 0xe8) = lVar17;
    lVar17 = *(long *)(param_1 + 0xf8);
    *(long **)(param_1 + 0xf8) = plStack_b0;
    *(long **)(param_1 + 0xf0) = uStack_b8;
    plStack_c0 = plStack_c8;
    uStack_b8 = plStack_c8;
    plStack_b0 = (long *)lVar17;
    func_0x00010a5e5b64(&plStack_c8);
  }
  *(long **)(param_1 + 0xf0) = plVar11;
  if ((((param_3 != 0) &&
       (___dynamic_cast(param_3,&PTR_DAT_110c4eff0,&PTR_DAT_110bb2dc8,0xfffffffffffffffe),
       param_3 != 0)) && (lVar17 = param_3, FUN_10a1dd000(), lVar17 != 0)) &&
     (___dynamic_cast(), lVar17 != 0)) {
    FUN_10abf1b04();
    lVar17 = 1;
    FUN_10a088744(param_3);
    if ((lVar17 != 0) && (plVar15 = *(long **)(lVar17 + 8), plVar15 != (long *)0x0)) {
      plVar18 = plVar15 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar7) {
          *plVar18 = *plVar18 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        lVar17 = *plVar18;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar7) {
          *plVar18 = lVar17 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
  }
  if (uStack_13c >> 7 != 0) {
    __ZdlPv(plStack_148);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10aba6664:
  FUN_10a045450();
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10aba666c);
  (*pcVar9)();
}



/* Entry: 10aba6710; end: 10aba6ccb;  */

void FUN_10aba6710(long *param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,uint *param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lStack_150;
  long *plStack_148;
  undefined8 *puStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  ulong uStack_120;
  undefined8 *puStack_118;
  long *plStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  uint uStack_80;
  undefined1 uStack_7c;
  long lStack_70;
  long *plStack_68;
  
  uVar24 = (ulong)*(ushort *)((long)param_2 + 4);
  puVar20 = (undefined8 *)param_1[3];
  puVar2 = (undefined8 *)param_1[4];
  lVar11 = (long)puVar2 - (long)puVar20 >> 4;
  uVar14 = lVar11 * -0x5555555555555555;
  puVar10 = param_2;
  uStack_c8 = param_4;
  if (uVar14 < uVar24 || uVar14 - uVar24 == 0) {
    uVar14 = uVar24 + 1;
    uVar21 = uVar14 + lVar11 * 0x5555555555555555;
    if (uVar21 <= (ulong)((param_1[5] - (long)puVar2 >> 4) * -0x5555555555555555)) {
      uVar14 = (uVar21 & 0xffffffff) * 0x30 - 0x30;
      puVar20 = (undefined8 *)
                ((uVar14 - (uint)((int)uVar14 + (int)((uVar14 & 0xffffffff) / 0x30) * -0x30)) + 0x30
                );
      puVar10 = puVar20;
      _bzero(puVar2);
      lVar11 = (long)puVar2 + (long)puVar20;
      param_1[4] = lVar11;
LAB_10aba68f4:
      puVar20 = (undefined8 *)param_1[3];
      uVar14 = (lVar11 - (long)puVar20 >> 4) * -0x5555555555555555;
      goto LAB_10aba690c;
    }
    uStack_d0 = CONCAT44(uStack_d0._4_4_,param_3);
    lVar11 = param_1[5] - (long)puVar20 >> 4;
    uVar18 = lVar11 * 0x5555555555555556;
    if (uVar18 < uVar14 || uVar18 - uVar14 == 0) {
      uVar18 = uVar14;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar11 * -0x5555555555555555)) {
      uVar18 = 0x555555555555555;
    }
    plVar13 = param_1;
    if (uVar18 < 0x555555555555556) {
      puVar7 = (undefined8 *)(uVar18 * 0x30);
      __Znwm();
      lVar11 = (long)puVar7 + ((long)puVar2 - (long)puVar20);
      lVar15 = (uVar21 & 0xffffffff) * 0x30 + -0x30;
      puVar12 = (undefined8 *)
                ((lVar15 - (ulong)((int)lVar15 +
                                  (uint)((ulong)(lVar15 * 0xaaaaaaab) >> 0x25) * -0x30)) + 0x30);
      puVar10 = puVar12;
      puStack_d8 = puVar7;
      _bzero(lVar11);
      puVar5 = puStack_d8;
      lVar11 = lVar11 + (long)puVar12;
      puVar12 = puVar20;
      puVar16 = puStack_d8;
      if (puVar20 != puVar2) {
        do {
          uVar26 = *puVar12;
          puVar16[1] = puVar12[1];
          *puVar16 = uVar26;
          puVar16[2] = puVar12[2];
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = 0;
          uVar26 = puVar12[3];
          puVar16[4] = puVar12[4];
          puVar16[3] = uVar26;
          puVar16[5] = puVar12[5];
          puVar12[3] = 0;
          puVar12[4] = 0;
          puVar12[5] = 0;
          puVar12 = puVar12 + 6;
          puVar16 = puVar16 + 6;
        } while (puVar12 != puVar2);
        do {
          FUN_10abd4f3c(puVar20);
          puVar20 = puVar20 + 6;
        } while (puVar20 != puVar2);
        puVar20 = (undefined8 *)param_1[3];
      }
      param_1[3] = (long)puVar5;
      param_1[4] = lVar11;
      param_1[5] = (long)(puVar7 + uVar18 * 6);
      param_3 = (uint)uStack_d0;
      if (puVar20 != (undefined8 *)0x0) {
        __ZdlPv(puVar20);
        lVar11 = param_1[4];
      }
      goto LAB_10aba68f4;
    }
LAB_10aba6c74:
    func_0x000109ffded8();
    if (uStack_90._7_1_ < '\0') {
      __ZdlPv(uStack_a0);
    }
    plVar8 = param_1;
    __Unwind_Resume();
    pcStack_e8 = FUN_10aba6ccc;
    puVar2 = (undefined8 *)plVar8[1];
    if ((undefined8 *)plVar8[2] <= puVar2) {
      lVar11 = (long)puVar2 - *plVar8;
      uVar14 = (lVar11 >> 4) + 1;
      plVar9 = plVar8;
      uStack_120 = uVar21;
      puStack_118 = puVar20;
      plStack_110 = plVar13;
      puStack_108 = param_2;
      uStack_100 = param_5;
      plStack_f8 = param_1;
      puStack_f0 = &stack0xfffffffffffffff0;
      if (uVar14 >> 0x3c == 0) {
        uVar21 = plVar8[2] - *plVar8;
        uVar24 = (long)uVar21 >> 3;
        if (uVar24 <= uVar14) {
          uVar24 = uVar14;
        }
        if (0x7fffffffffffffef < uVar21) {
          uVar24 = 0xfffffffffffffff;
        }
        if (uVar24 >> 0x3c == 0) {
          lVar15 = uVar24 << 4;
          __Znwm();
          puVar2 = (undefined8 *)(lVar15 + lVar11);
          uVar27 = puVar10[1];
          uVar26 = *puVar10;
          *puVar10 = 0;
          puVar10[1] = 0;
          lVar11 = *plVar8;
          lVar25 = (long)puVar2 - (plVar8[1] - lVar11);
          puVar20 = puVar2 + 2;
          puVar2[1] = uVar27;
          *puVar2 = uVar26;
          _memcpy(lVar25,lVar11);
          *plVar8 = lVar25;
          plVar8[1] = (long)puVar20;
          plVar8[2] = lVar15 + uVar24 * 0x10;
          if (lVar11 != 0) {
            __ZdlPv(lVar11);
          }
          goto LAB_10aba6d90;
        }
      }
      else {
        FUN_10abd5118();
      }
      func_0x000109ffded8();
      pcStack_128 = FUN_10aba6db0;
      puStack_140 = puVar10;
      plStack_138 = plVar8;
      ppuStack_130 = &puStack_f0;
      FUN_10abaa268(&lStack_150);
      if ((lStack_150 != 0) &&
         (___dynamic_cast(lStack_150,&PTR_DAT_110c53918,&PTR_DAT_110c53928,0), lStack_150 != 0)) {
        *plVar9 = lStack_150;
        plVar9[1] = (long)plStack_148;
        plVar9 = &lStack_150;
      }
      *plVar9 = 0;
      plVar9[1] = 0;
      if (plStack_148 != (long *)0x0) {
        plVar13 = plStack_148 + 1;
        do {
          lVar11 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_148);
          return;
        }
      }
      return;
    }
    uVar26 = *puVar10;
    puVar20 = puVar2 + 2;
    puVar2[1] = puVar10[1];
    *puVar2 = uVar26;
    *puVar10 = 0;
    puVar10[1] = 0;
LAB_10aba6d90:
    plVar8[1] = (long)puVar20;
    return;
  }
LAB_10aba690c:
  if (uVar14 <= uVar24) goto LAB_10aba6c70;
  plVar13 = puVar20 + uVar24 * 6;
  param_1 = (long *)0x0;
  FUN_10a2421c8();
  puVar20 = (undefined8 *)param_1[0x3e];
  uVar24 = (ulong)param_3;
  uVar14 = uVar24 + 1;
  lVar15 = *plVar13;
  lVar11 = plVar13[1];
  lVar25 = lVar11 - lVar15;
  uVar21 = lVar25 >> 3;
  if (param_3 < uVar21) {
    if (uVar14 < uVar21) {
      lVar11 = lVar15 + uVar14 * 8;
LAB_10aba6a0c:
      plVar13[1] = lVar11;
    }
  }
  else {
    uVar18 = uVar14 - uVar21;
    if (uVar18 <= (ulong)(plVar13[2] - lVar11 >> 3)) {
      _bzero(lVar11,uVar18 * 8);
      lVar11 = lVar11 + uVar18 * 8;
      goto LAB_10aba6a0c;
    }
    uVar17 = plVar13[2] - lVar15;
    uVar19 = (long)uVar17 >> 2;
    if (uVar19 <= uVar14) {
      uVar19 = uVar14;
    }
    if (0x7ffffffffffffff7 < uVar17) {
      uVar19 = 0x1fffffffffffffff;
    }
    uStack_d0 = uVar18;
    if (uVar19 >> 0x3d != 0) goto LAB_10aba6c74;
    lVar11 = uVar19 << 3;
    __Znwm();
    uVar14 = uStack_d0;
    lStack_e0 = lVar11 + lVar25;
    puStack_d8 = (undefined8 *)(lVar11 + uVar19 * 8);
    _bzero(lStack_e0,uStack_d0 << 3);
    lVar11 = lStack_e0 + uVar14 * 8;
    lVar22 = lStack_e0 + uVar21 * -8;
    _memcpy(lVar22,lVar15,lVar25);
    *plVar13 = lVar22;
    plVar13[1] = lVar11;
    plVar13[2] = (long)puStack_d8;
    if (lVar15 != 0) {
      __ZdlPv(lVar15);
      lVar11 = plVar13[1];
    }
  }
  if (uVar24 < (ulong)(lVar11 - *plVar13 >> 3)) {
    puVar1 = (uint *)(*plVar13 + uVar24 * 8);
    *puVar1 = *param_6;
    plVar8 = plVar13 + 3;
    puVar1[1] = (uint)((ulong)(plVar13[4] - *plVar8) >> 4);
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_a0,uStack_c8);
    uStack_88 = *(undefined8 *)(param_6 + 2);
    uStack_80 = param_6[4];
    uStack_7c = (undefined1)param_6[5];
    if (param_6[1] == 0) {
      uStack_88 = param_2[8];
    }
    if (*param_6 != 0) {
      uVar23 = 0;
      do {
        if ((int)param_5 == 0) {
          FUN_10aba6db0(&lStack_b0,puVar20,param_2[1],&uStack_a0);
          plStack_68 = plStack_a8;
          lStack_70 = lStack_b0;
          lStack_b0 = 0;
          plStack_a8 = (long *)0x0;
          FUN_10aba6ccc(plVar8,&lStack_70);
          plVar13 = plStack_68;
          if (plStack_68 != (long *)0x0) {
            plVar9 = plStack_68 + 1;
            do {
              lVar11 = *plVar9;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = lVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            }
          }
          if (plStack_a8 != (long *)0x0) {
            plVar13 = plStack_a8 + 1;
            do {
              lVar11 = *plVar13;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = lVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              plVar9 = plStack_a8;
            } while (cVar3 != '\0');
            goto LAB_10aba6c14;
          }
        }
        else {
          FUN_10abaa268(&lStack_70,puVar20,param_2[1],&uStack_a0,1);
          if ((lStack_70 == 0) ||
             (lVar11 = lStack_70, ___dynamic_cast(lStack_70,&PTR_DAT_110c53918,&PTR_DAT_110c53940,0)
             , lVar11 == 0)) {
            plVar13 = &lStack_c0;
          }
          else {
            plStack_b8 = plStack_68;
            plVar13 = &lStack_70;
            lStack_c0 = lVar11;
          }
          *plVar13 = 0;
          plVar13[1] = 0;
          plVar13 = plStack_68;
          if (plStack_68 != (long *)0x0) {
            plVar9 = plStack_68 + 1;
            do {
              lVar11 = *plVar9;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = lVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            }
          }
          plStack_a8 = plStack_b8;
          lStack_b0 = lStack_c0;
          lStack_c0 = 0;
          plStack_b8 = (long *)0x0;
          FUN_10aba6ccc(plVar8,&lStack_b0);
          plVar13 = plStack_a8;
          if (plStack_a8 != (long *)0x0) {
            plVar9 = plStack_a8 + 1;
            do {
              lVar11 = *plVar9;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = lVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            }
          }
          if (plStack_b8 != (long *)0x0) {
            plVar13 = plStack_b8 + 1;
            do {
              lVar11 = *plVar13;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = lVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              plVar9 = plStack_b8;
            } while (cVar3 != '\0');
LAB_10aba6c14:
            if (lVar11 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 < *param_6);
    }
    if (uStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
    return;
  }
LAB_10aba6c70:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aba6c74);
  (*pcVar6)();
}



/* Entry: 10aba6ccc; end: 10aba6daf;  */

void FUN_10aba6ccc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_70;
  long *plStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar12 = *param_2;
    puVar11 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar12;
    *param_2 = 0;
    param_2[1] = 0;
LAB_10aba6d90:
    param_1[1] = (long)puVar11;
    return;
  }
  lVar9 = (long)puVar2 - *param_1;
  uVar1 = (lVar9 >> 4) + 1;
  plVar6 = param_1;
  if (uVar1 >> 0x3c == 0) {
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 >> 0x3c == 0) {
      lVar5 = uVar8 << 4;
      __Znwm();
      puVar2 = (undefined8 *)(lVar5 + lVar9);
      uVar13 = param_2[1];
      uVar12 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      lVar9 = *param_1;
      lVar10 = (long)puVar2 - (param_1[1] - lVar9);
      puVar11 = puVar2 + 2;
      puVar2[1] = uVar13;
      *puVar2 = uVar12;
      _memcpy(lVar10,lVar9);
      *param_1 = lVar10;
      param_1[1] = (long)puVar11;
      param_1[2] = lVar5 + uVar8 * 0x10;
      if (lVar9 != 0) {
        __ZdlPv(lVar9);
      }
      goto LAB_10aba6d90;
    }
  }
  else {
    FUN_10abd5118();
  }
  func_0x000109ffded8();
  pcStack_48 = FUN_10aba6db0;
  puStack_60 = param_2;
  plStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10abaa268(&lStack_70);
  if ((lStack_70 != 0) &&
     (___dynamic_cast(lStack_70,&PTR_DAT_110c53918,&PTR_DAT_110c53928,0), lStack_70 != 0)) {
    *plVar6 = lStack_70;
    plVar6[1] = (long)plStack_68;
    plVar6 = &lStack_70;
  }
  *plVar6 = 0;
  plVar6[1] = 0;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar9 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_68);
      return;
    }
  }
  return;
}



/* Entry: 10aba6db0; end: 10aba6e57;  */

void FUN_10aba6db0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  FUN_10abaa268(&lStack_30);
  if ((lStack_30 != 0) &&
     (___dynamic_cast(lStack_30,&PTR_DAT_110c53918,&PTR_DAT_110c53928,0), lStack_30 != 0)) {
    *param_1 = lStack_30;
    param_1[1] = (long)plStack_28;
    param_1 = &lStack_30;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10aba6e58; end: 10aba6eef;  */

void FUN_10aba6e58(long param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uStack_38;
  
  FUN_10a042718(param_1 + 0x30);
  puVar3 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  if (puVar3 != puVar1) {
    uVar2 = *(ulong *)(param_1 + 0x38);
    do {
      uStack_38 = *puVar3;
      if (uVar2 < *(ulong *)(param_1 + 0x40)) {
        func_0x000107c2b054(uVar2);
        uVar2 = uVar2 + 0x18;
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        uVar2 = param_1 + 0x30;
        func_0x000104c40998(uVar2,&uStack_38);
      }
      *(ulong *)(param_1 + 0x38) = uVar2;
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
  }
  return;
}



/* Entry: 10aba6ef0; end: 10aba6f6f;  */

undefined8 * FUN_10aba6ef0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_10aba6f70(param_1 + 1,7);
  return param_1;
}



/* Entry: 10aba6f70; end: 10aba6ff3;  */

void FUN_10aba6f70(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  plVar9 = (long *)param_1[1];
  uVar5 = (long)plVar9 - *param_1 >> 3;
  if (param_2 <= uVar5) {
    if (param_2 < uVar5) {
      plVar10 = (long *)(*param_1 + param_2 * 8);
      while (plVar9 != plVar10) {
        plVar9 = plVar9 + -1;
        plVar12 = (long *)*plVar9;
        *plVar9 = 0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x38))();
        }
      }
      param_1[1] = (long)plVar10;
    }
    return;
  }
  param_2 = param_2 - uVar5;
  lVar11 = param_1[1];
  if (param_2 <= (ulong)(param_1[2] - lVar11 >> 3)) {
    if (param_2 != 0) {
      _bzero(lVar11,param_2 * 8);
      lVar11 = lVar11 + param_2 * 8;
    }
    param_1[1] = lVar11;
    return;
  }
  plVar9 = (long *)*param_1;
  lVar11 = lVar11 - (long)plVar9;
  uVar5 = param_2 + (lVar11 >> 3);
  if (uVar5 >> 0x3d == 0) {
    uVar4 = param_1[2] - (long)plVar9;
    uVar6 = (long)uVar4 >> 2;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar2 = 0;
    }
    else {
      if (uVar6 >> 0x3d != 0) goto LAB_10abd523c;
      lVar2 = uVar6 << 3;
      __Znwm();
    }
    lVar1 = lVar2 + lVar11;
    _bzero(lVar1,param_2 * 8);
    lVar7 = lVar1 + (lVar11 >> 3) * -8;
    _memcpy(lVar7,plVar9,lVar11);
    *param_1 = lVar7;
    param_1[1] = lVar1 + param_2 * 8;
    param_1[2] = lVar2 + uVar6 * 8;
    if (plVar9 == (long *)0x0) {
      return;
    }
  }
  else {
    FUN_10abd5240();
LAB_10abd523c:
    func_0x000109ffded8();
    puVar3 = (undefined8 *)&DAT_10f62a4d8;
    FUN_109ffde64();
    puVar8 = (undefined8 *)*puVar3;
    plVar10 = (long *)*puVar8;
    if (plVar10 == (long *)0x0) {
      return;
    }
    plVar12 = (long *)puVar8[1];
    plVar9 = plVar10;
    if (plVar12 != plVar10) {
      do {
        plVar12 = plVar12 + -1;
        plVar9 = (long *)*plVar12;
        *plVar12 = 0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x38))();
        }
      } while (plVar12 != plVar10);
      plVar9 = *(long **)*puVar3;
    }
    puVar8[1] = plVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar9);
  return;
}



/* Entry: 10aba6ff4; end: 10aba704f;  */

long FUN_10aba6ff4(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == (long *)(param_1 + 0x18)) {
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



/* Entry: 10aba7050; end: 10aba70c3;  */

void FUN_10aba7050(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x908);
  uVar1 = *(undefined8 *)(param_2 + 0x900);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x910);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_10aba59fc(param_1 + 0x38,param_2 + 0x918);
  if (param_1 + 0x20 != param_2 + 0x900) {
    FUN_10abd4ff0(param_1 + 0x58,*(long *)(param_2 + 0x938),*(long *)(param_2 + 0x940),
                  *(long *)(param_2 + 0x940) - *(long *)(param_2 + 0x938) >> 2);
  }
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x950);
  return;
}



/* Entry: 10aba70c4; end: 10aba71af;  */

void FUN_10aba70c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined4 uStack_150;
  undefined2 uStack_14c;
  long *plStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long alStack_78 [3];
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = 0;
  uStack_58 = 0;
  plStack_60 = (long *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  alStack_78[0] = 0;
  alStack_78[2] = 0;
  alStack_78[1] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  plVar6 = alStack_78;
  FUN_10a5e39ec(param_1 + 0x38);
  if (*(long *)(param_1 + 0x58) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x58);
    __ZdlPv();
  }
  *(undefined8 *)(param_1 + 0x60) = uStack_50;
  *(undefined8 *)(param_1 + 0x58) = uStack_58;
  *(undefined8 *)(param_1 + 0x68) = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  *(undefined1 *)(param_1 + 0x70) = (undefined1)uStack_40;
  plVar3 = plStack_60;
  if (plStack_60 == alStack_78) {
    lVar8 = 0x20;
  }
  else {
    if (plStack_60 == (long *)0x0) goto LAB_10aba7174;
    lVar8 = 0x28;
  }
  (**(code **)(*plStack_60 + lVar8))();
LAB_10aba7174:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lVar8 = plVar3[1];
  if (plVar3[2] != lVar8) {
    uVar10 = 0;
    do {
      plVar11 = *(long **)(lVar8 + uVar10 * 8);
      if (plVar11 != (long *)0x0) {
        (**(code **)*plVar11)(plVar11);
        lVar1 = *(long *)(param_3 + 0x1b8);
        for (lVar8 = *(long *)(param_3 + 0x1b0); lVar8 != lVar1; lVar8 = lVar8 + 0x18) {
          uVar7 = (ulong)*(ushort *)(lVar8 + 2);
          if (uVar7 != 0xffff) {
            uVar9 = (*(long *)(param_3 + 0x1a0) - *(long *)(param_3 + 0x198) >> 3) *
                    0x28cbfbeb9a020a33;
            if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10aba72fc);
              (*pcVar2)();
            }
            lVar12 = *(long *)(param_3 + 0x198) + uVar7 * 0x7d8;
            lVar4 = param_3 + 0x5c0;
            FUN_10aba72fc();
            plVar5 = plVar11;
            (**(code **)(*plVar11 + 8))(plVar11,lVar12);
            if ((int)plVar5 != 0) {
              uStack_128 = *(undefined8 *)(lVar12 + 0x18);
              uStack_130 = *(undefined8 *)(lVar12 + 0x10);
              uStack_110 = *(undefined8 *)(*plVar3 + 0x830);
              uStack_150 = (undefined4)uVar10;
              uStack_14c = 0;
              uStack_108 = 0;
              plStack_148 = plVar6;
              lStack_140 = param_3;
              lStack_138 = lVar8;
              lStack_120 = lVar12;
              lStack_118 = lVar4;
              uStack_100 = uStack_130;
              uStack_f8 = uStack_128;
              FUN_10aba737c(plVar3,uVar10,&uStack_150);
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
      lVar8 = plVar3[1];
    } while (uVar10 < (ulong)(plVar3[2] - lVar8 >> 3));
  }
  return;
}



/* Entry: 10aba71b0; end: 10aba72fb;  */

void FUN_10aba71b0(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = param_1[1];
  if (param_1[2] != lVar6) {
    uVar8 = 0;
    do {
      plVar9 = *(long **)(lVar6 + uVar8 * 8);
      if (plVar9 != (long *)0x0) {
        (**(code **)*plVar9)(plVar9);
        lVar1 = *(long *)(param_3 + 0x1b8);
        for (lVar6 = *(long *)(param_3 + 0x1b0); lVar6 != lVar1; lVar6 = lVar6 + 0x18) {
          uVar5 = (ulong)*(ushort *)(lVar6 + 2);
          if (uVar5 != 0xffff) {
            uVar7 = (*(long *)(param_3 + 0x1a0) - *(long *)(param_3 + 0x198) >> 3) *
                    0x28cbfbeb9a020a33;
            if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10aba72fc);
              (*pcVar2)();
            }
            lVar10 = *(long *)(param_3 + 0x198) + uVar5 * 0x7d8;
            lVar3 = param_3 + 0x5c0;
            FUN_10aba72fc();
            plVar4 = plVar9;
            (**(code **)(*plVar9 + 8))(plVar9,lVar10);
            if ((int)plVar4 != 0) {
              uStack_98 = *(undefined8 *)(lVar10 + 0x18);
              uStack_a0 = *(undefined8 *)(lVar10 + 0x10);
              uStack_80 = *(undefined8 *)(*param_1 + 0x830);
              uStack_c0 = (undefined4)uVar8;
              uStack_bc = 0;
              uStack_78 = 0;
              uStack_b8 = param_2;
              lStack_b0 = param_3;
              lStack_a8 = lVar6;
              lStack_90 = lVar10;
              lStack_88 = lVar3;
              uStack_70 = uStack_a0;
              uStack_68 = uStack_98;
              FUN_10aba737c(param_1,uVar8,&uStack_c0);
            }
          }
        }
      }
      uVar8 = uVar8 + 1;
      lVar6 = param_1[1];
    } while (uVar8 < (ulong)(param_1[2] - lVar6 >> 3));
  }
  return;
}



/* Entry: 10aba72fc; end: 10aba737b;  */

long FUN_10aba72fc(long *param_1,uint param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((short)param_2 < -1) {
    uVar2 = (ulong)param_2 & 0x7fff;
    uVar3 = (param_1[0x33] - param_1[0x32] >> 3) * 0x72baa619af84b583;
    if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
      return param_1[0x32] + uVar2 * 0x958;
    }
  }
  else {
    uVar2 = (param_1[1] - *param_1 >> 3) * 0x72baa619af84b583;
    if (param_2 <= uVar2 && uVar2 - param_2 != 0) {
      return *param_1 + (ulong)param_2 * 0x958;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aba737c);
  (*pcVar1)();
}



/* Entry: 10aba737c; end: 10aba7417;  */

undefined2 FUN_10aba737c(long param_1,int param_2,int *param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if ((ulong)(long)param_2 < (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3)) {
    plVar5 = *(long **)(*(long *)(param_1 + 8) + (long)param_2 * 8);
    if (plVar5 == (long *)0x0) {
      uVar2 = 0;
    }
    else {
      *param_3 = param_2;
      plVar3 = (long *)plVar5[2];
      (**(code **)(*plVar3 + 8))(plVar3,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 10));
      *(short *)(param_3 + 1) = (short)plVar3;
      (**(code **)(*plVar5 + 0x10))(plVar5,param_3);
      if ((char)param_3[0x12] == '\x01') {
        lVar4 = *(long *)(param_3 + 4) + 0x5c0;
        FUN_10aba72fc(lVar4,*(undefined2 *)(*(long *)(param_3 + 6) + 2));
        *(undefined1 *)(lVar4 + 0x8f8) = 1;
      }
      uVar2 = (undefined2)param_3[1];
    }
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aba7418);
  (*pcVar1)();
}



/* Entry: 10aba7418; end: 10aba75a7;  */

void FUN_10aba7418(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  
  piVar8 = (int *)(param_1 + 0x20);
  iVar3 = *piVar8;
  if (iVar3 != 0) {
    if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= (ulong)(long)iVar3) {
LAB_10aba75a4:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10aba75a8);
      (*pcVar4)();
    }
    plVar9 = *(long **)(*(long *)(param_1 + 8) + (long)iVar3 * 8);
    if ((plVar9 != (long *)0x0) && ((*(byte *)(param_1 + 0x70) & 1) == 0)) {
      for (puVar11 = (undefined4 *)*param_3; puVar11 != param_4; puVar11 = puVar11 + 1) {
        lVar5 = param_2;
        FUN_10a190e68(param_2,*puVar11);
        lVar10 = *(long *)(lVar5 + 0xb8);
        if (*(long *)(lVar5 + 0xc0) != lVar10) {
          uVar13 = 0;
          do {
            uVar2 = *(ushort *)(lVar10 + uVar13 * 2);
            if (uVar2 != 0xffff) {
              lVar10 = param_2;
              FUN_10a021e20(param_2,uVar2);
              bVar1 = *(byte *)(lVar10 + 0x1a);
              if ((ulong)bVar1 != 0) {
                uVar12 = 0;
                lVar10 = 0xffff;
                do {
                  lVar6 = param_2;
                  FUN_10a021e20(param_2,(uint)uVar2 + (int)uVar12 & 0xffff);
                  plVar7 = plVar9;
                  (**(code **)(*plVar9 + 0x18))(plVar9,piVar8,lVar6,*puVar11);
                  if ((int)plVar7 != 0) {
                    if ((((uint)lVar10 ^ 0xffffffff) & 0xffff) == 0) {
                      lVar10 = param_2;
                      FUN_10a5e14c4(param_2,uVar2);
                      if ((ulong)(*(long *)(lVar5 + 0xc0) - *(long *)(lVar5 + 0xb8) >> 1) <= uVar13)
                      goto LAB_10aba75a4;
                      *(short *)(*(long *)(lVar5 + 0xb8) + uVar13 * 2) = (short)lVar10;
                    }
                    lVar6 = param_2;
                    FUN_10a01eacc(param_2,(int)lVar10 + (int)uVar12 & 0xffff);
                    (**(code **)(*plVar9 + 0x20))(plVar9,piVar8,lVar6,*puVar11);
                  }
                  uVar12 = uVar12 + 1;
                } while (bVar1 != uVar12);
              }
            }
            uVar13 = uVar13 + 1;
            lVar10 = *(long *)(lVar5 + 0xb8);
          } while (uVar13 < (ulong)(*(long *)(lVar5 + 0xc0) - lVar10 >> 1));
        }
      }
    }
  }
  return;
}



/* Entry: 10aba75a8; end: 10aba75e7;  */

void FUN_10aba75a8(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((ulong)((long)(param_1[2] - param_1[1]) >> 3) <= (ulong)(long)iVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aba75e8);
      (*pcVar2)();
    }
    plVar3 = *(long **)(param_1[1] + (long)iVar1 * 8);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010aba75dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x28))(plVar3,param_1 + 4,*param_1);
      return;
    }
  }
  return;
}



/* Entry: 10aba75e8; end: 10aba785b;  */

long * FUN_10aba75e8(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long alStack_148 [3];
  long *plStack_130;
  long lStack_128;
  long *plStack_120;
  long lStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  char *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **appuStack_88 [3];
  undefined ***pppuStack_70;
  undefined **appuStack_68 [3];
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_1 + 9;
  *plVar1 = (long)&PTR_DAT_110c52dd8;
  param_1[1] = (long)param_2;
  param_1[2] = (long)plVar1;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *param_1 = (long)&PTR_DAT_110c4fff0;
  *(undefined4 *)(param_1 + 10) = 0x10000;
  *(undefined2 *)((long)param_1 + 0x54) = 1;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  plVar7 = param_1 + 0x17;
  *plVar7 = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x16] = 0;
  param_2 = (long *)*param_2;
  (**(code **)(*param_2 + 200))();
  lVar6 = param_2[0x38];
  appuStack_68[0] = &PTR_FUN_110c53688;
  pppuStack_50 = appuStack_68;
  FUN_10aba785c(&pcStack_d0,lVar6,3,appuStack_68);
  param_1[0x14] = (long)puStack_c8;
  param_1[0x13] = (long)pcStack_d0;
  param_1[0x16] = (long)puStack_b8;
  param_1[0x15] = (long)puStack_c0;
  if (pppuStack_50 == appuStack_68) {
    lVar5 = 0x20;
LAB_10aba76ec:
    (**(code **)((long)*pppuStack_50 + lVar5))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar5 = 0x28;
    goto LAB_10aba76ec;
  }
  appuStack_88[0] = &PTR_DAT_110c53718;
  pppuStack_70 = appuStack_88;
  FUN_10aba785c(&pcStack_d0,lVar6,6,appuStack_88);
  param_1[0x18] = (long)puStack_c8;
  *plVar7 = (long)pcStack_d0;
  param_1[0x1a] = (long)puStack_b8;
  param_1[0x19] = (long)puStack_c0;
  if (pppuStack_70 == appuStack_88) {
    lVar6 = 0x20;
LAB_10aba7744:
    (**(code **)((long)*pppuStack_70 + lVar6))();
  }
  else if (pppuStack_70 != (undefined ***)0x0) {
    lVar6 = 0x28;
    goto LAB_10aba7744;
  }
  puStack_a8 = &DAT_10f696edb;
  puStack_b0 = &DAT_10f696ecb;
  puStack_98 = &DAT_10f696efe;
  puStack_a0 = &DAT_10f696eea;
  puStack_90 = &DAT_10f696f0d;
  puStack_c8 = &DAT_10f696e9a;
  pcStack_d0 = "";
  puStack_b8 = &DAT_10f696eb9;
  puStack_c0 = &DAT_10f696eaa;
  lStack_e0 = 0;
  uStack_d8 = 0;
  lStack_e8 = 0;
  pppuVar3 = appuStack_88;
  uVar4 = 9;
  FUN_10abd5914(&lStack_e8,&pcStack_d0,pppuVar3,9);
  plVar2 = &lStack_e8;
  FUN_10aba6e58(param_1);
  lVar6 = lStack_e8;
  if (lStack_e8 != 0) {
    lStack_e0 = lStack_e8;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_e8 != 0) {
    lStack_e0 = lStack_e8;
    __ZdlPv();
  }
  FUN_10aba7948(plVar1);
  func_0x00010aba7988(param_1);
  lVar5 = lVar6;
  __Unwind_Resume(lVar6);
  pcStack_f8 = FUN_10aba785c;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_120 = plVar7;
  lStack_118 = lVar6;
  plStack_110 = plVar1;
  plStack_108 = param_1;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x00010abda9a0(alStack_148,uVar4);
  FUN_10aba9ac4(lVar5,plVar2,1,pppuVar3,alStack_148);
  plVar1 = plStack_130;
  if (plStack_130 == alStack_148) {
    lVar6 = 0x20;
LAB_10aba78d0:
    (**(code **)(*plStack_130 + lVar6))();
  }
  else if (plStack_130 != (long *)0x0) {
    lVar6 = 0x28;
    goto LAB_10aba78d0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return plVar1;
  }
  ___stack_chk_fail();
  if (plStack_130 == alStack_148) {
    lVar6 = 0x20;
  }
  else {
    if (plStack_130 == (long *)0x0) goto LAB_10aba7940;
    lVar6 = 0x28;
  }
  (**(code **)(*plStack_130 + lVar6))();
LAB_10aba7940:
  __Unwind_Resume();
  *plVar1 = (long)&PTR_DAT_110c52dd8;
  func_0x00010abd59bc(plVar1 + 5);
  if (plVar1[2] != 0) {
    plVar1[3] = plVar1[2];
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10aba785c; end: 10aba7947;  */

long * FUN_10aba785c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010abda9a0(alStack_58,param_4);
  FUN_10aba9ac4(param_1,param_2,1,param_3,alStack_58);
  plVar1 = plStack_40;
  if (plStack_40 == alStack_58) {
    lVar2 = 0x20;
LAB_10aba78d0:
    (**(code **)(*plStack_40 + lVar2))();
  }
  else if (plStack_40 != (long *)0x0) {
    lVar2 = 0x28;
    goto LAB_10aba78d0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar1;
  }
  ___stack_chk_fail();
  if (plStack_40 == alStack_58) {
    lVar2 = 0x20;
  }
  else {
    if (plStack_40 == (long *)0x0) goto LAB_10aba7940;
    lVar2 = 0x28;
  }
  (**(code **)(*plStack_40 + lVar2))();
LAB_10aba7940:
  __Unwind_Resume();
  *plVar1 = (long)&PTR_DAT_110c52dd8;
  func_0x00010abd59bc(plVar1 + 5);
  if (plVar1[2] != 0) {
    plVar1[3] = plVar1[2];
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10aba7948; end: 10aba79db;  */

undefined8 * FUN_10aba7948(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c52dd8;
  func_0x00010abd59bc(param_1 + 5);
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aba79dc; end: 10aba7a13;  */

byte FUN_10aba79dc(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (*(char *)(param_2 + 0x1d9) != '\0') {
    lVar1 = 0;
    FUN_10a2421c8();
    plVar2 = *(long **)(lVar1 + 0x228);
    (**(code **)(*plVar2 + 0x68))();
    bVar3 = *(byte *)((long)plVar2 + 0x87);
  }
  return bVar3 & 1;
}



/* Entry: 10aba7a14; end: 10aba7b23;  */

long * FUN_10aba7a14(long *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                    undefined8 param_5,undefined4 param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_90;
  undefined4 uStack_88;
  long alStack_80 [3];
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = 0x8000000000000000;
  lStack_60 = 0;
  plStack_68 = (long *)0x0;
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_88 = (undefined4)param_4;
  FUN_10aba59fc(alStack_80,param_5);
  uStack_90 = CONCAT44(uStack_90._4_4_,param_6);
  FUN_10aba5824(param_1,param_2,param_4,&uStack_90);
  *(undefined1 *)((long)param_1 + 0x19d) = param_3;
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  plVar1 = plStack_68;
  if (plStack_68 == alStack_80) {
    lVar3 = 0x20;
  }
  else {
    if (plStack_68 == (long *)0x0) goto LAB_10aba7ad8;
    lVar3 = 0x28;
  }
  (**(code **)(*plStack_68 + lVar3))();
LAB_10aba7ad8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10aba7b24(&uStack_90);
  __Unwind_Resume();
  if (plVar1[6] != 0) {
    plVar1[7] = plVar1[6];
    __ZdlPv();
  }
  plVar2 = (long *)plVar1[5];
  if (plVar2 == plVar1 + 2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 10aba7b24; end: 10aba7b7f;  */

long FUN_10aba7b24(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 == (long *)(param_1 + 0x10)) {
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



/* Entry: 10aba7b80; end: 10aba7c33;  */

ulong FUN_10aba7b80(byte *param_1,undefined8 param_2,ulong param_3)

{
  short *psVar1;
  short *psVar2;
  code *pcVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar4 = param_1;
  func_0x00010a01e9ec();
  if (0x16 < (ulong)*pbVar4) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aba7c34);
    (*pcVar3)();
  }
  if ((&UNK_10e4fe96c)[*pbVar4] == '\x01') {
    pbVar4 = param_1;
    FUN_10a015150(param_1,param_2);
    psVar2 = *(short **)(pbVar4 + 0xc0);
    for (psVar1 = *(short **)(pbVar4 + 0xb8); psVar1 != psVar2; psVar1 = psVar1 + 1) {
      if ((*psVar1 != -1) && (pbVar4 = param_1, FUN_10a021e20(), pbVar4[0x20] != 0)) {
        uVar5 = 0;
        goto LAB_10aba7c14;
      }
    }
    uVar5 = 1;
LAB_10aba7c14:
    param_3 = (ulong)((uint)param_3 ^ uVar5);
  }
  return param_3;
}



/* Entry: 10aba7c34; end: 10aba897f;  */

/* WARNING: Removing unreachable block (ram,0x00010aba8018) */
/* WARNING: Removing unreachable block (ram,0x00010aba7ea4) */
/* WARNING: Removing unreachable block (ram,0x00010aba7d50) */
/* WARNING: Removing unreachable block (ram,0x00010aba7ddc) */
/* WARNING: Removing unreachable block (ram,0x00010aba7f8c) */
/* WARNING: Removing unreachable block (ram,0x00010aba80a4) */

undefined *** FUN_10aba7c34(undefined ***param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined ***pppuVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined ***unaff_x21;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined8 uVar22;
  undefined1 auStack_1e0 [8];
  long *plStack_1d8;
  undefined1 auStack_1d0 [8];
  long *plStack_1c8;
  undefined8 *puStack_1c0;
  long *plStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  undefined4 *puStack_1a0;
  long *plStack_198;
  long lStack_190;
  long *plStack_188;
  undefined **appuStack_180 [3];
  undefined ***pppuStack_168;
  undefined **appuStack_160 [3];
  undefined ***pppuStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **appuStack_110 [3];
  undefined ***pppuStack_f8;
  undefined **appuStack_f0 [3];
  undefined ***pppuStack_d8;
  undefined **appuStack_d0 [3];
  undefined ***pppuStack_b8;
  undefined **appuStack_b0 [3];
  undefined ***pppuStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(param_2 + 0x30);
  pppuVar8 = param_1;
  lVar9 = param_2;
  if ((*(long **)(lVar12 + 0x168) != *(long **)(lVar12 + 0x170)) &&
     (**(long **)(lVar12 + 0x168) != 0)) {
    uVar14 = (ulong)*(ushort *)(param_2 + 4);
    uVar16 = uVar14 - 1;
    ppuVar18 = param_1[0xb];
    if ((ulong)((long)param_1[0xc] - (long)ppuVar18) <= uVar16) goto LAB_10aba882c;
    *(undefined1 *)((long)ppuVar18 + uVar16) = *(undefined1 *)(lVar12 + 0x1d9);
    uStack_130 = 4;
    uStack_12c = CONCAT31(uStack_12c._1_3_,2);
    uStack_140 = 1;
    uStack_13c = 1;
    uStack_138 = 0x80;
    uStack_134 = 0x80;
    func_0x000107c2b054(&uStack_90,&DAT_10f696eaa);
    FUN_10aba6710(param_1,param_2,0,&uStack_90,0,&uStack_140);
    FUN_10abdb0d4(&lStack_190,param_1[3],param_1[4],*(undefined2 *)(param_2 + 4),0,0);
    plVar2 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      plVar1 = plStack_188 + 1;
      do {
        lVar13 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    func_0x000107c2b054(&uStack_90,&UNK_10f696f1b);
    FUN_10aba6710(param_1,param_2,1,&uStack_90,0,&uStack_140);
    FUN_10abdb0d4(&puStack_1a0,param_1[3],param_1[4],*(undefined2 *)(param_2 + 4),1,0);
    plVar2 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar1 = plStack_198 + 1;
      do {
        lVar13 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    uVar11 = (ulong)*(ushort *)(param_2 + 4) - 1;
    if ((ulong)((long)param_1[0xc] - (long)param_1[0xb]) <= uVar11) goto LAB_10aba882c;
    cVar5 = *(char *)((long)param_1[0xb] + uVar11);
    if (cVar5 == '\x02') {
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_140 = 1;
      uStack_13c = 0;
      uStack_130 = 4;
      uStack_12c = CONCAT31(uStack_12c._1_3_,2);
      func_0x000107c2b054(&uStack_90,&UNK_10f696f32);
      FUN_10aba6710(param_1,param_2,2,&uStack_90,1,&uStack_140);
      func_0x00010abdb1b8(&lStack_1b0,param_1[3],param_1[4],*(undefined2 *)(param_2 + 4));
      plVar2 = plStack_1a8;
      if (plStack_1a8 != (long *)0x0) {
        plVar1 = plStack_1a8 + 1;
        do {
          lVar13 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      uStack_12c = CONCAT31(uStack_12c._1_3_,2);
      uStack_140 = 1;
    }
    else {
      uStack_12c = CONCAT31(uStack_12c._1_3_,2);
      if ((byte)(cVar5 - 1U) < 4) {
        uStack_140 = *(undefined4 *)(&UNK_10df08b90 + (ulong)(byte)(cVar5 - 1) * 4);
      }
      else {
        uStack_140 = 0;
      }
    }
    uStack_130 = 4;
    uStack_134 = 0;
    uStack_138 = 0;
    uStack_13c = 0;
    func_0x000107c2b054(&uStack_90,&UNK_10f696f40);
    FUN_10aba6710(param_1,param_2,3,&uStack_90,0,&uStack_140);
    FUN_10abdb0d4(&puStack_1c0,param_1[3],param_1[4],*(undefined2 *)(param_2 + 4),3,0);
    if (plStack_1b8 != (long *)0x0) {
      plVar2 = plStack_1b8 + 1;
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
        (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1b8);
      }
    }
    func_0x000107c2b054(&uStack_90,&UNK_10f696f57);
    FUN_10aba6710(param_1,param_2,4,&uStack_90,0,&uStack_140);
    FUN_10abdb0d4(auStack_1d0,param_1[3],param_1[4],*(undefined2 *)(param_2 + 4),4,0);
    if (plStack_1c8 != (long *)0x0) {
      plVar2 = plStack_1c8 + 1;
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
        (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1c8);
      }
    }
    func_0x000107c2b054(&uStack_90,&UNK_10f696f6d);
    FUN_10aba6710(param_1,param_2,5,&uStack_90,0,&uStack_140);
    FUN_10abdb0d4(auStack_1e0,param_1[3],param_1[4],*(undefined2 *)(param_2 + 4),5,0);
    if (plStack_1d8 != (long *)0x0) {
      plVar2 = plStack_1d8 + 1;
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
        (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1d8);
      }
    }
    appuStack_b0[0] = &PTR_FUN_110c53798;
    pppuStack_98 = appuStack_b0;
    FUN_10aba7a14(param_1,param_2,*(undefined1 *)(lVar12 + 0x19d),1,appuStack_b0,0);
    if (pppuStack_98 == appuStack_b0) {
      lVar13 = 0x20;
LAB_10aba80fc:
      (**(code **)((long)*pppuStack_98 + lVar13))();
    }
    else if (pppuStack_98 != (undefined ***)0x0) {
      lVar13 = 0x28;
      goto LAB_10aba80fc;
    }
    appuStack_d0[0] = &PTR_DAT_110c53828;
    pppuStack_b8 = appuStack_d0;
    FUN_10aba7a14(param_1,param_2,1,2,appuStack_d0,0);
    if (pppuStack_b8 == appuStack_d0) {
      lVar13 = 0x20;
LAB_10aba8158:
      (**(code **)((long)*pppuStack_b8 + lVar13))();
    }
    else if (pppuStack_b8 != (undefined ***)0x0) {
      lVar13 = 0x28;
      goto LAB_10aba8158;
    }
    FUN_10abdb0d4(&lStack_190,param_1[3],param_1[4],uVar14,0,0);
    plStack_88 = *(long **)(lStack_190 + 0x20);
    uStack_90 = *(undefined8 *)(lStack_190 + 0x18);
    if (*(long *)(lStack_190 + 0x20) != 0) {
      plVar2 = (long *)(*(long *)(lStack_190 + 0x20) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    FUN_10a5e7178(&uStack_140,&uStack_90,&uStack_80,1);
    FUN_10a5d2c88(pppuVar8,&uStack_140);
    puStack_1a0 = &uStack_140;
    FUN_10a3f9078(&puStack_1a0);
    plVar2 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        lVar13 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      plVar1 = plStack_188 + 1;
      do {
        lVar13 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    uStack_140 = 0;
    uStack_13c = 0x80000000;
    uStack_138 = 3;
    pppuVar8 = param_1;
    FUN_10aba5a90(param_1,param_2,3,&uStack_140);
    FUN_10abdb0d4(&lStack_190,param_1[3],param_1[4],uVar14,1,0);
    plStack_88 = *(long **)(lStack_190 + 0x20);
    uStack_90 = *(undefined8 *)(lStack_190 + 0x18);
    if (*(long *)(lStack_190 + 0x20) != 0) {
      plVar2 = (long *)(*(long *)(lStack_190 + 0x20) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    FUN_10a5e7178(&uStack_140,&uStack_90,&uStack_80,1);
    FUN_10a5d2c88(pppuVar8,&uStack_140);
    puStack_1a0 = &uStack_140;
    FUN_10a3f9078(&puStack_1a0);
    plVar2 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        lVar13 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      plVar1 = plStack_188 + 1;
      do {
        lVar13 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    cVar5 = *(char *)((long)ppuVar18 + uVar16);
    if (cVar5 == '\x02') {
      appuStack_f0[0] = &PTR_DAT_110c53828;
      pppuVar8 = param_1;
      pppuStack_d8 = appuStack_f0;
      FUN_10aba7a14(param_1,param_2,1,4,appuStack_f0,0);
      if (pppuStack_d8 == appuStack_f0) {
        lVar13 = 0x20;
LAB_10aba83c4:
        (**(code **)((long)*pppuStack_d8 + lVar13))();
      }
      else if (pppuStack_d8 != (undefined ***)0x0) {
        lVar13 = 0x28;
        goto LAB_10aba83c4;
      }
      func_0x00010abdb1b8(&uStack_140,param_1[3],param_1[4],uVar14);
      func_0x00010a5d2bb4(pppuVar8 + 0x30,*(undefined8 *)(CONCAT44(uStack_13c,uStack_140) + 0x18));
      plVar2 = (long *)CONCAT44(uStack_134,uStack_138);
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2 + 1;
        do {
          lVar13 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      cVar5 = *(char *)((long)ppuVar18 + uVar16);
    }
    if ((byte)(cVar5 - 1U) < 4) {
      iVar15 = 0;
      iVar4 = *(int *)(&UNK_10e502ef0 + (ulong)(byte)(cVar5 - 1) * 4);
      do {
        appuStack_110[0] = &PTR_DAT_110c53828;
        pppuVar8 = param_1;
        pppuStack_f8 = appuStack_110;
        FUN_10aba7a14(param_1,param_2,0,5,appuStack_110,iVar15);
        if (pppuStack_f8 == appuStack_110) {
          lVar13 = 0x20;
LAB_10aba84ac:
          (**(code **)((long)*pppuStack_f8 + lVar13))();
        }
        else if (pppuStack_f8 != (undefined ***)0x0) {
          lVar13 = 0x28;
          goto LAB_10aba84ac;
        }
        FUN_10abdb0d4(&lStack_190,param_1[3],param_1[4],uVar14,3,iVar15);
        uStack_138 = (undefined4)*(undefined8 *)(lStack_190 + 0x20);
        uStack_134 = (undefined4)((ulong)*(undefined8 *)(lStack_190 + 0x20) >> 0x20);
        uStack_140 = (undefined4)*(undefined8 *)(lStack_190 + 0x18);
        uStack_13c = (undefined4)((ulong)*(undefined8 *)(lStack_190 + 0x18) >> 0x20);
        if (*(long *)(lStack_190 + 0x20) != 0) {
          plVar2 = (long *)(*(long *)(lStack_190 + 0x20) + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = *plVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        FUN_10abdb0d4(&puStack_1a0,param_1[3],param_1[4],uVar14,4,iVar15);
        uStack_128 = *(undefined8 *)(puStack_1a0 + 8);
        uStack_130 = (undefined4)*(undefined8 *)(puStack_1a0 + 6);
        uStack_12c = (undefined4)((ulong)*(undefined8 *)(puStack_1a0 + 6) >> 0x20);
        if (*(long *)(puStack_1a0 + 8) != 0) {
          plVar2 = (long *)(*(long *)(puStack_1a0 + 8) + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = *plVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        FUN_10abdb0d4(&lStack_1b0,param_1[3],param_1[4],uVar14,5,iVar15);
        uStack_118 = *(undefined8 *)(lStack_1b0 + 0x20);
        uStack_120 = *(undefined8 *)(lStack_1b0 + 0x18);
        if (*(long *)(lStack_1b0 + 0x20) != 0) {
          plVar2 = (long *)(*(long *)(lStack_1b0 + 0x20) + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = *plVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uStack_90 = 0;
        plStack_88 = (long *)0x0;
        uStack_80 = 0;
        FUN_10a5e7178(&uStack_90,&uStack_140,appuStack_110,3);
        FUN_10a5d2c88(pppuVar8,&uStack_90);
        puStack_1c0 = &uStack_90;
        FUN_10a3f9078(&puStack_1c0);
        lVar13 = 0x20;
        do {
          FUN_10a3f90e8((long)&uStack_140 + lVar13);
          plVar2 = plStack_1a8;
          lVar13 = lVar13 + -0x10;
        } while (lVar13 != -0x10);
        if (plStack_1a8 != (long *)0x0) {
          plVar1 = plStack_1a8 + 1;
          do {
            lVar13 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
        plVar2 = plStack_198;
        if (plStack_198 != (long *)0x0) {
          plVar1 = plStack_198 + 1;
          do {
            lVar13 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_198 + 0x10))(plStack_198);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
        plVar2 = plStack_188;
        if (plStack_188 != (long *)0x0) {
          plVar1 = plStack_188 + 1;
          do {
            lVar13 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_188 + 0x10))(plStack_188);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
        *(undefined1 *)((long)pppuVar8 + 0x19e) = 1;
        *(undefined1 *)((long)pppuVar8 + 0x19c) = 0;
        ppuVar19 = pppuVar8[0x2e];
        for (ppuVar17 = pppuVar8[0x2d]; ppuVar17 != ppuVar19; ppuVar17 = ppuVar17 + 6) {
          *(undefined1 *)((long)ppuVar17 + 0x29) = 2;
          ppuVar17[3] = (undefined *)0x0;
          ppuVar17[4] = (undefined *)0x0;
        }
        if (iVar15 != 0) {
          *(undefined1 *)((long)pppuVar8 + 0x19c) = 0xfc;
        }
        puVar3 = *(undefined8 **)(lVar12 + 0x168);
        if (*(undefined8 **)(lVar12 + 0x170) == puVar3) goto LAB_10aba882c;
        ppuVar19 = (undefined **)puVar3[1];
        ppuVar17 = (undefined **)*puVar3;
        ppuVar21 = (undefined **)puVar3[3];
        ppuVar20 = (undefined **)puVar3[2];
        uVar22 = *(undefined8 *)((long)puVar3 + 0x1a);
        *(undefined8 *)((long)pppuVar8 + 0x1c2) = *(undefined8 *)((long)puVar3 + 0x22);
        *(undefined8 *)((long)pppuVar8 + 0x1ba) = uVar22;
        pppuVar8[0x35] = ppuVar19;
        pppuVar8[0x34] = ppuVar17;
        pppuVar8[0x37] = ppuVar21;
        pppuVar8[0x36] = ppuVar20;
        iVar15 = iVar15 + 1;
      } while (iVar15 != iVar4);
    }
    uStack_140 = 0;
    uStack_13c = 0x80000000;
    uStack_138 = 6;
    FUN_10aba5a90(param_1,param_2,6,&uStack_140);
    unaff_x21 = appuStack_160;
    appuStack_160[0] = &PTR_DAT_110c53828;
    param_3 = 0;
    pppuStack_148 = unaff_x21;
    FUN_10aba7a14(param_1,param_2,0,7,appuStack_160,0);
    pppuVar8 = pppuStack_148;
    if (pppuStack_148 == unaff_x21) {
      lVar13 = 0x20;
LAB_10aba8754:
      (**(code **)((long)*pppuStack_148 + lVar13))();
    }
    else if (pppuStack_148 != (undefined ***)0x0) {
      lVar13 = 0x28;
      goto LAB_10aba8754;
    }
    if (*(char *)((long)ppuVar18 + uVar16) == '\x02') {
      unaff_x21 = appuStack_180;
      appuStack_180[0] = &PTR_DAT_110c53828;
      param_3 = 0;
      lVar9 = param_2;
      pppuStack_168 = unaff_x21;
      FUN_10aba7a14();
      pppuVar8 = pppuStack_168;
      if (pppuStack_168 == unaff_x21) {
        lVar13 = 0x20;
LAB_10aba87bc:
        (**(code **)((long)*pppuStack_168 + lVar13))();
      }
      else if (pppuStack_168 != (undefined ***)0x0) {
        lVar13 = 0x28;
        goto LAB_10aba87bc;
      }
      puVar3 = *(undefined8 **)(lVar12 + 0x168);
      if (*(undefined8 **)(lVar12 + 0x170) == puVar3) {
LAB_10aba882c:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10aba8830);
        (*pcVar7)();
      }
      ppuVar17 = (undefined **)puVar3[1];
      ppuVar18 = (undefined **)*puVar3;
      ppuVar20 = (undefined **)puVar3[3];
      ppuVar19 = (undefined **)puVar3[2];
      uVar22 = *(undefined8 *)((long)puVar3 + 0x1a);
      *(undefined8 *)((long)param_1 + 0x1c2) = *(undefined8 *)((long)puVar3 + 0x22);
      *(undefined8 *)((long)param_1 + 0x1ba) = uVar22;
      param_1[0x35] = ppuVar17;
      param_1[0x34] = ppuVar18;
      param_1[0x37] = ppuVar20;
      param_1[0x36] = ppuVar19;
    }
    *(undefined1 *)(param_2 + 0x48) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pppuVar8;
  }
  ___stack_chk_fail();
  if (pppuStack_168 == unaff_x21) {
    lVar12 = 0x20;
  }
  else {
    if (pppuStack_168 == (undefined ***)0x0) goto LAB_10aba8978;
    lVar12 = 0x28;
  }
  (**(code **)((long)*pppuStack_168 + lVar12))();
LAB_10aba8978:
  __Unwind_Resume(pppuVar8);
  if (*(short *)(lVar9 + 6) == 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    if (((*(byte *)(param_3 + 0x21) & 1) == 0) && (*(char *)(param_3 + 0x20) == '\0')) {
      uVar10 = (uint)*(byte *)(param_3 + 0x34);
    }
  }
  return (undefined ***)(ulong)(uVar10 & 1);
}



/* Entry: 10aba8980; end: 10aba89b3;  */

byte FUN_10aba8980(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  
  if (*(short *)(param_2 + 6) == 1) {
    bVar1 = 0;
  }
  else {
    bVar1 = 0;
    if (((*(byte *)(param_3 + 0x21) & 1) == 0) && (*(char *)(param_3 + 0x20) == '\0')) {
      bVar1 = *(byte *)(param_3 + 0x34);
    }
  }
  return bVar1 & 1;
}



/* Entry: 10aba89b4; end: 10aba8dcf;  */

void FUN_10aba89b4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  bool bVar9;
  byte bVar10;
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  long lStack_70;
  long *plStack_68;
  
  uVar14 = (ulong)*(ushort *)(param_2 + 4);
  uVar16 = uVar14 - 1;
  lVar13 = *(long *)(param_1 + 0x58);
  if ((ulong)(*(long *)(param_1 + 0x60) - lVar13) <= uVar16) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10aba8da0);
    (*pcVar8)();
  }
  uVar5 = *(ushort *)(param_2 + 6);
  bVar4 = *(byte *)(param_3 + 0x18);
  bVar10 = bVar4 | 4;
  *(byte *)(param_3 + 0x18) = bVar10;
  *(undefined1 *)(param_3 + 0x65) = 3;
  if ((bVar4 >> 1 & 1) != 0) {
    bVar10 = bVar4 & 0xfd | 4;
    *(byte *)(param_3 + 0x18) = bVar10;
  }
  uVar17 = (uint)uVar5;
  if (uVar5 < 5) {
    if (uVar17 == 2) {
      *(undefined8 *)(param_3 + 0x28) = 0;
      *(undefined8 *)(param_3 + 0x20) = 0xc;
      *(undefined8 *)(param_3 + 0x38) = 0x40401;
      *(undefined8 *)(param_3 + 0x30) = 0x101010100000000;
      *(undefined8 *)(param_3 + 0x48) = 0;
      *(undefined8 *)(param_3 + 0x40) = 0;
      return;
    }
    if (uVar17 == 4) {
      *(undefined1 *)(param_3 + 0x1b) = 0;
      *(byte *)(param_3 + 0x18) = bVar10 | 2;
      return;
    }
LAB_10aba8be4:
    bVar9 = (uVar17 & 0xfffffffd) == 5;
    if ((uVar17 < 9) && ((1 << (ulong)(uVar17 & 0x1f) & 0x1a0U) != 0)) goto LAB_10aba8c84;
  }
  else {
    if (uVar17 != 5) {
      if (uVar17 == 7) {
        *(undefined1 *)(param_3 + 0x20) = 0xf;
        *(undefined4 *)(param_3 + 0x35) = 0x1010101;
        *(undefined2 *)(param_3 + 0x39) = 0;
        if (3 < (byte)(*(char *)(lVar13 + uVar16) - 1U)) goto LAB_10aba8cec;
        iVar15 = 0;
        iVar3 = *(int *)(&UNK_10e502ef0 + (ulong)(byte)(*(char *)(lVar13 + uVar16) - 1) * 4);
        do {
          FUN_10abdb0d4(&lStack_70,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                        uVar14,3,iVar15);
          FUN_10aba61a0(param_3,0x61,*(undefined8 *)(lStack_70 + 0x28),&UNK_10e4ac8d0,iVar15);
          plVar2 = plStack_68;
          if (plStack_68 != (long *)0x0) {
            plVar1 = plStack_68 + 1;
            do {
              lVar12 = *plVar1;
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar9) {
                *plVar1 = lVar12 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            }
          }
          FUN_10abdb0d4(&lStack_70,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                        uVar14,4,iVar15);
          FUN_10aba61a0(param_3,0x62,*(undefined8 *)(lStack_70 + 0x28),&UNK_10e4ac8d0,iVar15);
          plVar2 = plStack_68;
          if (plStack_68 != (long *)0x0) {
            plVar1 = plStack_68 + 1;
            do {
              lVar12 = *plVar1;
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar9) {
                *plVar1 = lVar12 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            }
          }
          FUN_10abdb0d4(&lStack_70,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                        uVar14,5,iVar15);
          FUN_10aba61a0(param_3,99,*(undefined8 *)(lStack_70 + 0x28),&UNK_10e4ac8d0,iVar15);
          plVar2 = plStack_68;
          if (plStack_68 != (long *)0x0) {
            plVar1 = plStack_68 + 1;
            do {
              lVar12 = *plVar1;
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar9) {
                *plVar1 = lVar12 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            }
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 != iVar3);
      }
      goto LAB_10aba8be4;
    }
    bVar9 = true;
    uVar11 = 1;
    if (*(char *)(lVar13 + uVar16) != '\x04') {
      auVar18 = NEON_fmov(0x3e800000,4);
      *(long *)(param_3 + 0x2c) = auVar18._8_8_;
      *(long *)(param_3 + 0x24) = auVar18._0_8_;
      *(undefined1 *)(param_3 + 0x50) = 1;
      *(undefined4 *)(param_3 + 0x58) = 4;
      *(undefined4 *)(param_3 + 0x52) = 0x4040004;
      uVar11 = 10;
    }
    *(undefined1 *)(param_3 + 0x20) = 0xf;
    *(undefined1 *)(param_3 + 0x35) = 1;
    *(undefined1 *)(param_3 + 0x37) = 1;
    *(undefined1 *)(param_3 + 0x36) = uVar11;
    *(undefined1 *)(param_3 + 0x38) = uVar11;
    *(undefined2 *)(param_3 + 0x39) = 0;
    *(undefined1 *)(param_3 + 0x1b) = 0xf;
LAB_10aba8c84:
    if (*(char *)(lVar13 + uVar16) == '\x02') {
      func_0x00010abdb1b8(&lStack_70,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20)
                          ,uVar14);
      FUN_10aba61a0(param_3,0x5e,*(undefined8 *)(lStack_70 + 0x28),&UNK_10e4ac8d0,0xffffffff);
      plVar2 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 1;
        do {
          lVar13 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
    }
  }
  if (!bVar9) {
    return;
  }
LAB_10aba8cec:
  FUN_10abdb0d4(&lStack_70,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),uVar14,1,
                0);
  FUN_10aba61a0(param_3,0x60,*(undefined8 *)(lStack_70 + 0x28),&UNK_10e4ac8d0,0xffffffff);
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar13 = *plVar2;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *plVar2 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return;
}



/* Entry: 10aba8dd0; end: 10aba93af;  */

long ** FUN_10aba8dd0(long **param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  undefined4 uVar8;
  long **pplVar9;
  long **pplVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long **pplVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  long *plVar24;
  long **pplVar25;
  int iVar26;
  long *unaff_x22;
  long *unaff_x23;
  ulong uVar27;
  long **unaff_x26;
  undefined8 auStack_240 [2];
  char cStack_229;
  undefined8 uStack_228;
  char cStack_211;
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  long lStack_1e0;
  long lStack_1d8;
  long **pplStack_1c0;
  undefined1 *puStack_1b8;
  long **pplStack_1b0;
  long *plStack_1a8;
  ulong uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long **pplStack_188;
  long **pplStack_180;
  long **pplStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long alStack_148 [3];
  long *plStack_130;
  long **pplStack_128;
  long *plStack_120;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long alStack_f8 [3];
  long lStack_e0;
  long lStack_d8;
  long **pplStack_d0;
  long *plStack_c8;
  undefined **ppuStack_c0;
  undefined1 uStack_b8;
  undefined ***pppuStack_a8;
  long alStack_a0 [3];
  long *plStack_88;
  long *plStack_80;
  long **pplStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar25 = (long **)(ulong)*(ushort *)(param_2 + 4);
  uVar27 = (long)pplVar25 - 1;
  plVar15 = param_1[0xb];
  if ((ulong)((long)param_1[0xc] - (long)plVar15) <= uVar27) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10aba9290);
    (*pcVar7)();
  }
  if (*(short *)(param_2 + 6) == 6) {
    bVar2 = *(byte *)((long)plVar15 + uVar27);
    if ((byte)(bVar2 - 1) < 4) {
      iVar26 = 0;
      iVar1 = *(int *)(&UNK_10e502ef0 + (ulong)(byte)(bVar2 - 1) * 4);
      lStack_e0 = 0;
      lStack_d8 = 0;
      pplStack_d0 = (long **)0x0;
      unaff_x26 = &plStack_130;
      do {
        FUN_10abdb0d4(&plStack_80,param_1[3],param_1[4],pplVar25,5,iVar26);
        uVar8 = (undefined4)plStack_80[1];
        puVar23 = (undefined8 *)0x1;
        FUN_10a088744();
        pplVar9 = pplStack_78;
        plStack_130 = (long *)CONCAT44(plStack_130._4_4_,uVar8);
        if (puVar23 == (undefined8 *)0x0) {
          pplStack_128 = (long **)0x0;
          plStack_120 = (long *)0x0;
        }
        else {
          plStack_120 = (long *)puVar23[1];
          pplStack_128 = (long **)*puVar23;
          if (puVar23[1] != 0) {
            plVar12 = (long *)(puVar23[1] + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar5) {
                *plVar12 = *plVar12 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        if (pplStack_78 != (long **)0x0) {
          pplVar10 = pplStack_78 + 1;
          do {
            plVar12 = *pplVar10;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pplVar10,0x10);
            if (bVar5) {
              *pplVar10 = (long *)((long)plVar12 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (plVar12 == (long *)0x0) {
            (*(code *)(*pplStack_78)[2])(pplStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar9);
          }
        }
        if ((int)plStack_130 == 2) {
          FUN_10ab129f0(&lStack_e0,&pplStack_128);
        }
        unaff_x23 = plStack_120;
        if (plStack_120 != (long *)0x0) {
          plVar12 = plStack_120 + 1;
          do {
            lVar13 = *plVar12;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_120 + 0x10))(plStack_120);
            __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x23);
          }
        }
        iVar26 = iVar26 + 1;
      } while (iVar26 != iVar1);
      bVar2 = *(byte *)((long)plVar15 + uVar27);
    }
    else {
      lStack_e0 = 0;
      lStack_d8 = 0;
      pplStack_d0 = (long **)0x0;
    }
    unaff_x22 = (long *)(ulong)bVar2;
    param_1 = param_1 + 0x17;
    FUN_10aba93b0();
    alStack_148[0] = 0;
    alStack_148[1] = 0;
    alStack_148[2] = 0;
    FUN_10ab14658(alStack_148,lStack_e0,lStack_d8,lStack_d8 - lStack_e0 >> 4);
    ppuStack_c0 = &PTR_FUN_110c538a8;
    uStack_b8 = bVar2 == 4;
    pppuStack_a8 = &ppuStack_c0;
    lStack_158 = 0;
    uStack_150 = 0;
    lStack_160 = 0;
    FUN_10ab10a0c(param_1,param_3,alStack_148,&ppuStack_c0,&lStack_160,0);
    if (lStack_160 != 0) {
      lStack_158 = lStack_160;
      __ZdlPv();
    }
    if (pppuStack_a8 == &ppuStack_c0) {
      lVar13 = 0x20;
LAB_10aba915c:
      (**(code **)((long)*pppuStack_a8 + lVar13))();
    }
    else if (pppuStack_a8 != (undefined ***)0x0) {
      lVar13 = 0x28;
      goto LAB_10aba915c;
    }
    plStack_130 = alStack_148;
    FUN_10a18ba48(&plStack_130);
    plStack_130 = &lStack_e0;
    pplVar9 = &plStack_130;
    FUN_10a18ba48();
  }
  else {
    pplVar9 = param_1;
    if (*(short *)(param_2 + 6) == 3) {
      plStack_130 = (long *)0x0;
      pplStack_128 = (long **)0x0;
      FUN_10abdb0d4(&plStack_80,param_1[3],param_1[4],pplVar25,0,0);
      pplVar9 = (long **)plStack_80[1];
      plVar12 = (long *)0x1;
      FUN_10a088744();
      pplVar25 = pplStack_78;
      lStack_e0 = CONCAT44(lStack_e0._4_4_,(int)pplVar9);
      unaff_x22 = &lStack_e0;
      if (plVar12 == (long *)0x0) {
        lStack_d8 = 0;
        pplStack_d0 = (long **)0x0;
      }
      else {
        pplStack_d0 = (long **)plVar12[1];
        lStack_d8 = *plVar12;
        if (plVar12[1] != 0) {
          plVar12 = (long *)(plVar12[1] + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = *plVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      if (pplStack_78 != (long **)0x0) {
        pplVar10 = pplStack_78 + 1;
        do {
          plVar12 = *pplVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar10,0x10);
          if (bVar5) {
            *pplVar10 = (long *)((long)plVar12 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (plVar12 == (long *)0x0) {
          (*(code *)(*pplStack_78)[2])(pplStack_78);
          pplVar9 = pplVar25;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      if ((int)lStack_e0 == 2) {
        FUN_10a026ab4(&plStack_130,&lStack_d8);
        param_1 = param_1 + 0x13;
        FUN_10aba93b0();
        pplStack_78 = pplStack_128;
        plStack_80 = plStack_130;
        if (pplStack_128 != (long **)0x0) {
          pplVar9 = pplStack_128 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
            if (bVar5) {
              *pplVar9 = (long *)((long)*pplVar9 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        alStack_f8[0] = 0;
        alStack_f8[1] = 0;
        alStack_f8[2] = 0;
        FUN_10a756a10(alStack_f8,&plStack_80,auStack_70,1);
        plStack_88 = (long *)0x0;
        lStack_108 = 0;
        uStack_100 = 0;
        lStack_110 = 0;
        FUN_10ab10a0c(param_1,param_3,alStack_f8,alStack_a0,&lStack_110,0);
        if (lStack_110 != 0) {
          lStack_108 = lStack_110;
          __ZdlPv();
        }
        if (plStack_88 == alStack_a0) {
          lVar13 = 0x20;
LAB_10aba9190:
          (**(code **)(*plStack_88 + lVar13))();
        }
        else if (plStack_88 != (long *)0x0) {
          lVar13 = 0x28;
          goto LAB_10aba9190;
        }
        plStack_c8 = alStack_f8;
        pplVar9 = &plStack_c8;
        FUN_10a18ba48();
        pplVar10 = pplStack_78;
        if (pplStack_78 != (long **)0x0) {
          pplVar14 = pplStack_78 + 1;
          do {
            plVar12 = *pplVar14;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pplVar14,0x10);
            if (bVar5) {
              *pplVar14 = (long *)((long)plVar12 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (plVar12 == (long *)0x0) {
            (*(code *)(*pplStack_78)[2])(pplStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pplVar9 = pplVar10;
          }
        }
      }
      pplVar10 = pplStack_d0;
      if (pplStack_d0 != (long **)0x0) {
        pplVar14 = pplStack_d0 + 1;
        do {
          plVar12 = *pplVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar14,0x10);
          if (bVar5) {
            *pplVar14 = (long *)((long)plVar12 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (plVar12 == (long *)0x0) {
          (*(code *)(*pplStack_d0)[2])(pplStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pplVar9 = pplVar10;
        }
      }
      pplVar10 = pplStack_128;
      if (pplStack_128 != (long **)0x0) {
        pplVar14 = pplStack_128 + 1;
        do {
          plVar12 = *pplVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pplVar14,0x10);
          if (bVar5) {
            *pplVar14 = (long *)((long)plVar12 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (plVar12 == (long *)0x0) {
          (*(code *)(*pplStack_128)[2])(pplStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pplVar9 = pplVar10;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pplVar9;
  }
  ___stack_chk_fail();
  if (lStack_110 != 0) {
    lStack_108 = lStack_110;
    __ZdlPv();
  }
  if (plStack_88 == alStack_a0) {
    lVar13 = 0x20;
  }
  else {
    if (plStack_88 == (long *)0x0) goto LAB_10aba92d4;
    lVar13 = 0x28;
  }
  (**(code **)(*plStack_88 + lVar13))();
LAB_10aba92d4:
  plStack_c8 = alStack_f8;
  FUN_10a18ba48(&plStack_c8);
  func_0x00010a0523dc(&plStack_80);
  func_0x00010a0523dc(unaff_x22 + 1);
  func_0x00010a0523dc(&plStack_130);
  pplVar10 = pplVar9;
  __Unwind_Resume();
  pcStack_168 = FUN_10aba93b0;
  plVar12 = *pplVar10;
  pplStack_1b0 = unaff_x26;
  plStack_1a8 = plVar15;
  uStack_1a0 = uVar27;
  plStack_198 = unaff_x23;
  plStack_190 = unaff_x22;
  pplStack_188 = pplVar25;
  pplStack_180 = param_1;
  pplStack_178 = pplVar9;
  puStack_170 = &stack0xfffffffffffffff0;
  if (plVar12 == (long *)0x0) {
    pplVar10 = (long **)0x120;
    ___cxa_allocate_exception();
    FUN_10a2e1840();
  }
  else {
    iVar26 = *(int *)(pplVar10 + 1);
    if (iVar26 == 0) {
      pplVar10 = (long **)0x120;
      ___cxa_allocate_exception();
      FUN_10a2e1840();
    }
    else {
      if (((long **)pplVar10[3] != (long **)0x0) && (*(int *)(pplVar10 + 2) == (int)*plVar12)) {
        return (long **)pplVar10[3];
      }
      uVar3 = *(ushort *)((long)pplVar10 + 0xc);
      plVar15 = (long *)((long)iVar26 ^ (ulong)uVar3 << 1);
      plVar17 = (long *)plVar12[2];
      if (plVar17 != (long *)0x0) {
        uVar27 = (long)plVar17 - 1;
        if (((ulong)plVar17 & uVar27) == 0) {
          plVar21 = (long *)((ulong)plVar15 & uVar27);
        }
        else {
          plVar21 = plVar15;
          if (plVar17 <= plVar15) {
            uVar6 = 0;
            if (plVar17 != (long *)0x0) {
              uVar6 = (ulong)plVar15 / (ulong)plVar17;
            }
            plVar21 = (long *)((long)plVar15 - uVar6 * (long)plVar17);
          }
        }
        plVar22 = *(long **)(plVar12[1] + (long)plVar21 * 8);
        if (plVar22 != (long *)0x0) {
          do {
            while( true ) {
              plVar22 = (long *)*plVar22;
              if (plVar22 == (long *)0x0) goto LAB_10aba949c;
              plVar24 = (long *)plVar22[1];
              if (plVar24 != plVar15) break;
              if (*(int *)(plVar22 + 2) == iVar26 && *(ushort *)((long)plVar22 + 0x14) == uVar3) {
                pplVar9 = (long **)plVar22[3];
                if (pplVar9 != (long **)0x0) goto LAB_10aba9964;
                goto LAB_10aba949c;
              }
            }
            if (((ulong)plVar17 & uVar27) == 0) {
              plVar24 = (long *)((ulong)plVar24 & uVar27);
            }
            else if (plVar17 <= plVar24) {
              uVar6 = 0;
              if (plVar17 != (long *)0x0) {
                uVar6 = (ulong)plVar24 / (ulong)plVar17;
              }
              plVar24 = (long *)((long)plVar24 - uVar6 * (long)plVar17);
            }
          } while (plVar24 == plVar21);
        }
      }
LAB_10aba949c:
      plVar17 = (long *)plVar12[7];
      if (plVar17 != (long *)0x0) {
        uVar27 = (long)plVar17 - 1;
        if (((ulong)plVar17 & uVar27) == 0) {
          plVar21 = (long *)(uVar27 & (ulong)plVar15);
        }
        else {
          plVar21 = plVar15;
          if (plVar17 <= plVar15) {
            uVar6 = 0;
            if (plVar17 != (long *)0x0) {
              uVar6 = (ulong)plVar15 / (ulong)plVar17;
            }
            plVar21 = (long *)((long)plVar15 - uVar6 * (long)plVar17);
          }
        }
        puVar23 = *(undefined8 **)(plVar12[6] + (long)plVar21 * 8);
        if (puVar23 != (undefined8 *)0x0) {
          for (pplVar25 = (long **)*puVar23; pplVar25 != (long **)0x0; pplVar25 = (long **)*pplVar25
              ) {
            plVar22 = pplVar25[1];
            if (plVar22 == plVar15) {
              if (*(int *)(pplVar25 + 2) == iVar26 && *(ushort *)((long)pplVar25 + 0x14) == uVar3)
              goto LAB_10aba9564;
            }
            else {
              if (((ulong)plVar17 & uVar27) == 0) {
                plVar22 = (long *)((ulong)plVar22 & uVar27);
              }
              else if (plVar17 <= plVar22) {
                uVar6 = 0;
                if (plVar17 != (long *)0x0) {
                  uVar6 = (ulong)plVar22 / (ulong)plVar17;
                }
                plVar22 = (long *)((long)plVar22 - uVar6 * (long)plVar17);
              }
              if (plVar22 != plVar21) break;
            }
          }
        }
      }
      pplVar10 = (long **)0x120;
      ___cxa_allocate_exception();
      FUN_10a2e1840();
    }
  }
  do {
    ___cxa_throw(pplVar10,&PTR_DAT_110b99e48,FUN_10a002a90);
LAB_10aba9564:
    pplVar9 = (long **)0x48;
    __Znwm();
    pplVar9[1] = (long *)0x0;
    *pplVar9 = (long *)0x0;
    pplVar9[3] = (long *)0x0;
    pplVar9[2] = (long *)0x0;
    pplVar9[5] = (long *)0x0;
    pplVar9[4] = (long *)0x0;
    pplVar9[7] = (long *)0x0;
    pplVar9[6] = (long *)0x0;
    pplVar9[8] = (long *)0x0;
    pplStack_1c0 = pplVar9;
    if (pplVar25[6] == (long *)0x0) {
      FUN_10a06186c();
      goto LAB_10aba9a58;
    }
    (**(code **)(*pplVar25[6] + 0x30))(auStack_240);
    FUN_10ab10958(pplVar9,auStack_240);
    if (lStack_1e0 != 0) {
      lStack_1d8 = lStack_1e0;
      __ZdlPv();
    }
    puStack_1b8 = auStack_1f8;
    FUN_10a044868(&puStack_1b8);
    puStack_1b8 = auStack_210;
    FUN_10a044868(&puStack_1b8);
    if (cStack_211 < '\0') {
      __ZdlPv(uStack_228);
    }
    if (cStack_229 < '\0') {
      __ZdlPv(auStack_240[0]);
    }
    pplVar9 = pplStack_1c0;
    plVar17 = (long *)((long)*(int *)(pplVar10 + 1) ^ (ulong)*(ushort *)((long)pplVar10 + 0xc) << 1)
    ;
    plVar15 = (long *)plVar12[2];
    if (plVar15 != (long *)0x0) {
      uVar27 = (long)plVar15 - 1;
      if (((ulong)plVar15 & uVar27) == 0) {
        unaff_x22 = (long *)((ulong)plVar17 & uVar27);
      }
      else {
        unaff_x22 = plVar17;
        if (plVar15 <= plVar17) {
          uVar6 = 0;
          if (plVar15 != (long *)0x0) {
            uVar6 = (ulong)plVar17 / (ulong)plVar15;
          }
          unaff_x22 = (long *)((long)plVar17 - uVar6 * (long)plVar15);
        }
      }
      puVar23 = *(undefined8 **)(plVar12[1] + (long)unaff_x22 * 8);
      if (puVar23 != (undefined8 *)0x0) {
        for (plVar21 = (long *)*puVar23; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
          plVar22 = (long *)plVar21[1];
          if (plVar22 == plVar17) {
            pplVar14 = pplStack_1c0;
            if ((int)plVar21[2] == *(int *)(pplVar10 + 1) &&
                *(ushort *)((long)plVar21 + 0x14) == *(ushort *)((long)pplVar10 + 0xc))
            goto LAB_10aba9934;
          }
          else {
            if (((ulong)plVar15 & uVar27) == 0) {
              plVar22 = (long *)((ulong)plVar22 & uVar27);
            }
            else if (plVar15 <= plVar22) {
              uVar6 = 0;
              if (plVar15 != (long *)0x0) {
                uVar6 = (ulong)plVar22 / (ulong)plVar15;
              }
              plVar22 = (long *)((long)plVar22 - uVar6 * (long)plVar15);
            }
            if (plVar22 != unaff_x22) break;
          }
        }
      }
    }
    plVar21 = (long *)0x20;
    __Znwm();
    *plVar21 = 0;
    plVar21[1] = (long)plVar17;
    plVar21[2] = (long)pplVar10[1];
    plVar21[3] = 0;
    if ((plVar15 == (long *)0x0) ||
       (*(float *)(plVar12 + 5) * (float)plVar15 < (float)(plVar12[4] + 1))) {
      uVar27 = 1;
      if ((long *)0x2 < plVar15) {
        uVar27 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
      }
      plVar22 = (long *)(uVar27 | (long)plVar15 << 1);
      plVar24 = (long *)(long)((float)(plVar12[4] + 1) / *(float *)(plVar12 + 5));
      if (plVar22 <= plVar24) {
        plVar22 = plVar24;
      }
      if ((long)plVar22 - 1U == 0) {
        plVar22 = (long *)0x2;
      }
      else if (((ulong)plVar22 & (long)plVar22 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        plVar15 = (long *)plVar12[2];
      }
      if (plVar15 < plVar22) {
LAB_10aba9744:
        if ((ulong)plVar22 >> 0x3d != 0) {
          func_0x000109ffded8();
LAB_10aba9a58:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10aba9a5c);
          (*pcVar7)();
        }
        lVar13 = (long)plVar22 << 3;
        __Znwm();
        lVar11 = plVar12[1];
        plVar12[1] = lVar13;
        if (lVar11 != 0) {
          __ZdlPv();
        }
        plVar15 = (long *)0x0;
        plVar12[2] = (long)plVar22;
        do {
          *(undefined8 *)(plVar12[1] + (long)plVar15 * 8) = 0;
          plVar15 = (long *)((long)plVar15 + 1);
        } while (plVar22 != plVar15);
        plVar24 = (long *)plVar12[3];
        plVar15 = plVar22;
        if (plVar24 != (long *)0x0) {
          plVar16 = (long *)plVar24[1];
          uVar27 = (long)plVar22 - 1;
          if (((ulong)plVar22 & uVar27) == 0) {
            plVar16 = (long *)((ulong)plVar16 & uVar27);
          }
          else if (plVar22 <= plVar16) {
            uVar6 = 0;
            if (plVar22 != (long *)0x0) {
              uVar6 = (ulong)plVar16 / (ulong)plVar22;
            }
            plVar16 = (long *)((long)plVar16 - uVar6 * (long)plVar22);
          }
          *(long **)(plVar12[1] + (long)plVar16 * 8) = plVar12 + 3;
          plVar18 = (long *)*plVar24;
          while (plVar18 != (long *)0x0) {
            plVar20 = (long *)plVar18[1];
            if (((ulong)plVar22 & uVar27) == 0) {
              plVar20 = (long *)((ulong)plVar20 & uVar27);
            }
            else if (plVar22 <= plVar20) {
              uVar6 = 0;
              if (plVar22 != (long *)0x0) {
                uVar6 = (ulong)plVar20 / (ulong)plVar22;
              }
              plVar20 = (long *)((long)plVar20 - uVar6 * (long)plVar22);
            }
            plVar19 = plVar18;
            if (plVar20 != plVar16) {
              lVar13 = plVar12[1];
              if (*(long *)(lVar13 + (long)plVar20 * 8) == 0) {
                *(long **)(lVar13 + (long)plVar20 * 8) = plVar24;
                plVar16 = plVar20;
              }
              else {
                *plVar24 = *plVar18;
                *plVar18 = **(undefined8 **)(lVar13 + (long)plVar20 * 8);
                **(long **)(lVar13 + (long)plVar20 * 8) = (long)plVar18;
                plVar19 = plVar24;
              }
            }
            plVar24 = plVar19;
            plVar18 = (long *)*plVar19;
          }
        }
      }
      else if (plVar22 < plVar15) {
        plVar24 = (long *)(long)((float)(ulong)plVar12[4] / *(float *)(plVar12 + 5));
        if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long *)0x1 < plVar24) {
          plVar24 = (long *)(1L << (-LZCOUNT((long)plVar24 + -1) & 0x3fU));
        }
        if (plVar22 <= plVar24) {
          plVar22 = plVar24;
        }
        if (plVar22 < plVar15) {
          if (plVar22 != (long *)0x0) goto LAB_10aba9744;
          lVar13 = plVar12[1];
          plVar12[1] = 0;
          if (lVar13 != 0) {
            __ZdlPv();
          }
          plVar12[2] = 0;
          plVar15 = (long *)0x0;
        }
        else {
          plVar15 = (long *)plVar12[2];
        }
      }
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        unaff_x22 = (long *)((long)plVar15 - 1U & (ulong)plVar17);
      }
      else {
        unaff_x22 = plVar17;
        if (plVar15 <= plVar17) {
          uVar27 = 0;
          if (plVar15 != (long *)0x0) {
            uVar27 = (ulong)plVar17 / (ulong)plVar15;
          }
          unaff_x22 = (long *)((long)plVar17 - uVar27 * (long)plVar15);
        }
      }
    }
    lVar13 = plVar12[1];
    plVar17 = *(long **)(lVar13 + (long)unaff_x22 * 8);
    if (plVar17 == (long *)0x0) {
      plVar17 = plVar12 + 3;
      *plVar21 = *plVar17;
      *plVar17 = (long)plVar21;
      *(long **)(lVar13 + (long)unaff_x22 * 8) = plVar17;
      if (*plVar21 != 0) {
        plVar17 = *(long **)(*plVar21 + 8);
        if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
          plVar17 = (long *)((ulong)plVar17 & (long)plVar15 - 1U);
        }
        else if (plVar15 <= plVar17) {
          uVar27 = 0;
          if (plVar15 != (long *)0x0) {
            uVar27 = (ulong)plVar17 / (ulong)plVar15;
          }
          plVar17 = (long *)((long)plVar17 - uVar27 * (long)plVar15);
        }
        plVar17 = (long *)(plVar12[1] + (long)plVar17 * 8);
        goto LAB_10aba9920;
      }
    }
    else {
      *plVar21 = *plVar17;
LAB_10aba9920:
      *plVar17 = (long)plVar21;
    }
    plVar12[4] = plVar12[4] + 1;
    pplVar14 = pplStack_1c0;
LAB_10aba9934:
    pplVar25 = (long **)(plVar21 + 3);
    plVar15 = *pplVar25;
    pplStack_1c0 = (long **)0x0;
    *pplVar25 = (long *)pplVar14;
    if (plVar15 != (long *)0x0) {
      func_0x00010abdb4e8(pplVar25);
      pplVar14 = pplStack_1c0;
      pplStack_1c0 = (long **)0x0;
      if (pplVar14 != (long **)0x0) {
        func_0x00010abdb4e8(&pplStack_1c0);
      }
    }
    plVar12 = *pplVar10;
LAB_10aba9964:
    pplVar10[3] = (long *)pplVar9;
    lVar13 = *plVar12;
    *(int *)(pplVar10 + 2) = (int)lVar13;
    if ((int)lVar13 == 0) {
      pplVar10 = (long **)0x120;
      ___cxa_allocate_exception();
      FUN_10a2e1840();
    }
    else {
      if (pplVar9 != (long **)0x0) {
        return pplVar9;
      }
      pplVar10 = (long **)0x120;
      ___cxa_allocate_exception();
      FUN_10a2e1840();
    }
  } while( true );
}



/* Entry: 10aba93b0; end: 10aba9ac3;  */

undefined8 * FUN_10aba93b0(undefined8 *param_1)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *unaff_x21;
  ulong unaff_x22;
  int *piVar19;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  undefined8 uStack_c8;
  char cStack_b1;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  long lStack_80;
  long lStack_78;
  undefined8 *puStack_60;
  undefined1 *puStack_58;
  
  piVar19 = (int *)*param_1;
  if (piVar19 == (int *)0x0) {
    param_1 = (undefined8 *)0x120;
    ___cxa_allocate_exception();
    FUN_10a2e1840();
  }
  else {
    iVar2 = *(int *)(param_1 + 1);
    if (iVar2 == 0) {
      param_1 = (undefined8 *)0x120;
      ___cxa_allocate_exception();
      FUN_10a2e1840();
    }
    else {
      if (((undefined8 *)param_1[3] != (undefined8 *)0x0) && (*(int *)(param_1 + 2) == *piVar19)) {
        return (undefined8 *)param_1[3];
      }
      uVar1 = *(ushort *)((long)param_1 + 0xc);
      uVar8 = (long)iVar2 ^ (ulong)uVar1 << 1;
      uVar9 = *(ulong *)(piVar19 + 4);
      if (uVar9 != 0) {
        uVar13 = uVar9 - 1;
        if ((uVar9 & uVar13) == 0) {
          uVar15 = uVar8 & uVar13;
        }
        else {
          uVar15 = uVar8;
          if (uVar9 <= uVar8) {
            uVar15 = 0;
            if (uVar9 != 0) {
              uVar15 = uVar8 / uVar9;
            }
            uVar15 = uVar8 - uVar15 * uVar9;
          }
        }
        plVar16 = *(long **)(*(long *)(piVar19 + 2) + uVar15 * 8);
        if (plVar16 != (long *)0x0) {
          do {
            while( true ) {
              plVar16 = (long *)*plVar16;
              if (plVar16 == (long *)0x0) goto LAB_10aba949c;
              uVar17 = plVar16[1];
              if (uVar17 != uVar8) break;
              if (*(int *)(plVar16 + 2) == iVar2 && *(ushort *)((long)plVar16 + 0x14) == uVar1) {
                puVar18 = (undefined8 *)plVar16[3];
                if (puVar18 != (undefined8 *)0x0) goto LAB_10aba9964;
                goto LAB_10aba949c;
              }
            }
            if ((uVar9 & uVar13) == 0) {
              uVar17 = uVar17 & uVar13;
            }
            else if (uVar9 <= uVar17) {
              uVar14 = 0;
              if (uVar9 != 0) {
                uVar14 = uVar17 / uVar9;
              }
              uVar17 = uVar17 - uVar14 * uVar9;
            }
          } while (uVar17 == uVar15);
        }
      }
LAB_10aba949c:
      uVar9 = *(ulong *)(piVar19 + 0xe);
      if (uVar9 != 0) {
        uVar13 = uVar9 - 1;
        if ((uVar9 & uVar13) == 0) {
          uVar15 = uVar13 & uVar8;
        }
        else {
          uVar15 = uVar8;
          if (uVar9 <= uVar8) {
            uVar15 = 0;
            if (uVar9 != 0) {
              uVar15 = uVar8 / uVar9;
            }
            uVar15 = uVar8 - uVar15 * uVar9;
          }
        }
        puVar18 = *(undefined8 **)(*(long *)(piVar19 + 0xc) + uVar15 * 8);
        if (puVar18 != (undefined8 *)0x0) {
          for (unaff_x21 = (long *)*puVar18; unaff_x21 != (long *)0x0;
              unaff_x21 = (long *)*unaff_x21) {
            uVar17 = unaff_x21[1];
            if (uVar17 == uVar8) {
              if ((int)unaff_x21[2] == iVar2 && *(ushort *)((long)unaff_x21 + 0x14) == uVar1)
              goto LAB_10aba9564;
            }
            else {
              if ((uVar9 & uVar13) == 0) {
                uVar17 = uVar17 & uVar13;
              }
              else if (uVar9 <= uVar17) {
                uVar14 = 0;
                if (uVar9 != 0) {
                  uVar14 = uVar17 / uVar9;
                }
                uVar17 = uVar17 - uVar14 * uVar9;
              }
              if (uVar17 != uVar15) break;
            }
          }
        }
      }
      param_1 = (undefined8 *)0x120;
      ___cxa_allocate_exception();
      FUN_10a2e1840();
    }
  }
  do {
    ___cxa_throw(param_1,&PTR_DAT_110b99e48,FUN_10a002a90);
LAB_10aba9564:
    puVar18 = (undefined8 *)0x48;
    __Znwm();
    puVar18[1] = 0;
    *puVar18 = 0;
    puVar18[3] = 0;
    puVar18[2] = 0;
    puVar18[5] = 0;
    puVar18[4] = 0;
    puVar18[7] = 0;
    puVar18[6] = 0;
    puVar18[8] = 0;
    puStack_60 = puVar18;
    if ((long *)unaff_x21[6] == (long *)0x0) {
      FUN_10a06186c();
      goto LAB_10aba9a58;
    }
    (**(code **)(*(long *)unaff_x21[6] + 0x30))(auStack_e0);
    FUN_10ab10958(puVar18,auStack_e0);
    if (lStack_80 != 0) {
      lStack_78 = lStack_80;
      __ZdlPv();
    }
    puStack_58 = auStack_98;
    FUN_10a044868(&puStack_58);
    puStack_58 = auStack_b0;
    FUN_10a044868(&puStack_58);
    if (cStack_b1 < '\0') {
      __ZdlPv(uStack_c8);
    }
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
    puVar18 = puStack_60;
    uVar9 = (long)*(int *)(param_1 + 1) ^ (ulong)*(ushort *)((long)param_1 + 0xc) << 1;
    uVar8 = *(ulong *)(piVar19 + 4);
    if (uVar8 != 0) {
      uVar13 = uVar8 - 1;
      if ((uVar8 & uVar13) == 0) {
        unaff_x22 = uVar9 & uVar13;
      }
      else {
        unaff_x22 = uVar9;
        if (uVar8 <= uVar9) {
          uVar15 = 0;
          if (uVar8 != 0) {
            uVar15 = uVar9 / uVar8;
          }
          unaff_x22 = uVar9 - uVar15 * uVar8;
        }
      }
      puVar10 = *(undefined8 **)(*(long *)(piVar19 + 2) + unaff_x22 * 8);
      if (puVar10 != (undefined8 *)0x0) {
        for (plVar16 = (long *)*puVar10; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
          uVar15 = plVar16[1];
          if (uVar15 == uVar9) {
            puVar10 = puStack_60;
            if ((int)plVar16[2] == *(int *)(param_1 + 1) &&
                *(ushort *)((long)plVar16 + 0x14) == *(ushort *)((long)param_1 + 0xc))
            goto LAB_10aba9934;
          }
          else {
            if ((uVar8 & uVar13) == 0) {
              uVar15 = uVar15 & uVar13;
            }
            else if (uVar8 <= uVar15) {
              uVar17 = 0;
              if (uVar8 != 0) {
                uVar17 = uVar15 / uVar8;
              }
              uVar15 = uVar15 - uVar17 * uVar8;
            }
            if (uVar15 != unaff_x22) break;
          }
        }
      }
    }
    plVar16 = (long *)0x20;
    __Znwm();
    *plVar16 = 0;
    plVar16[1] = uVar9;
    plVar16[2] = param_1[1];
    plVar16[3] = 0;
    if ((uVar8 == 0) || ((float)piVar19[10] * (float)uVar8 < (float)(*(long *)(piVar19 + 8) + 1))) {
      uVar13 = 1;
      if (2 < uVar8) {
        uVar13 = (ulong)((uVar8 & uVar8 - 1) != 0);
      }
      uVar13 = uVar13 | uVar8 << 1;
      uVar15 = (ulong)((float)(*(long *)(piVar19 + 8) + 1) / (float)piVar19[10]);
      if (uVar13 <= uVar15) {
        uVar13 = uVar15;
      }
      if (uVar13 - 1 == 0) {
        uVar13 = 2;
      }
      else if ((uVar13 & uVar13 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar8 = *(ulong *)(piVar19 + 4);
      }
      if (uVar8 < uVar13) {
LAB_10aba9744:
        if (uVar13 >> 0x3d != 0) {
          func_0x000109ffded8();
LAB_10aba9a58:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10aba9a5c);
          (*pcVar4)();
        }
        lVar5 = uVar13 << 3;
        __Znwm();
        lVar6 = *(long *)(piVar19 + 2);
        *(long *)(piVar19 + 2) = lVar5;
        if (lVar6 != 0) {
          __ZdlPv();
        }
        uVar8 = 0;
        *(ulong *)(piVar19 + 4) = uVar13;
        do {
          *(undefined8 *)(*(long *)(piVar19 + 2) + uVar8 * 8) = 0;
          uVar8 = uVar8 + 1;
        } while (uVar13 != uVar8);
        plVar7 = *(long **)(piVar19 + 6);
        uVar8 = uVar13;
        if (plVar7 != (long *)0x0) {
          uVar15 = plVar7[1];
          uVar17 = uVar13 - 1;
          if ((uVar13 & uVar17) == 0) {
            uVar15 = uVar15 & uVar17;
          }
          else if (uVar13 <= uVar15) {
            uVar14 = 0;
            if (uVar13 != 0) {
              uVar14 = uVar15 / uVar13;
            }
            uVar15 = uVar15 - uVar14 * uVar13;
          }
          *(int **)(*(long *)(piVar19 + 2) + uVar15 * 8) = piVar19 + 6;
          plVar11 = (long *)*plVar7;
          while (plVar11 != (long *)0x0) {
            uVar14 = plVar11[1];
            if ((uVar13 & uVar17) == 0) {
              uVar14 = uVar14 & uVar17;
            }
            else if (uVar13 <= uVar14) {
              uVar3 = 0;
              if (uVar13 != 0) {
                uVar3 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar3 * uVar13;
            }
            plVar12 = plVar11;
            if (uVar14 != uVar15) {
              lVar5 = *(long *)(piVar19 + 2);
              if (*(long *)(lVar5 + uVar14 * 8) == 0) {
                *(long **)(lVar5 + uVar14 * 8) = plVar7;
                uVar15 = uVar14;
              }
              else {
                *plVar7 = *plVar11;
                *plVar11 = **(undefined8 **)(lVar5 + uVar14 * 8);
                **(long **)(lVar5 + uVar14 * 8) = (long)plVar11;
                plVar12 = plVar7;
              }
            }
            plVar7 = plVar12;
            plVar11 = (long *)*plVar12;
          }
        }
      }
      else if (uVar13 < uVar8) {
        uVar15 = (ulong)((float)*(ulong *)(piVar19 + 8) / (float)piVar19[10]);
        if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar15) {
          uVar15 = 1L << (-LZCOUNT(uVar15 - 1) & 0x3fU);
        }
        if (uVar13 <= uVar15) {
          uVar13 = uVar15;
        }
        if (uVar13 < uVar8) {
          if (uVar13 != 0) goto LAB_10aba9744;
          lVar5 = *(long *)(piVar19 + 2);
          piVar19[2] = 0;
          piVar19[3] = 0;
          if (lVar5 != 0) {
            __ZdlPv();
          }
          piVar19[4] = 0;
          piVar19[5] = 0;
          uVar8 = 0;
        }
        else {
          uVar8 = *(ulong *)(piVar19 + 4);
        }
      }
      if ((uVar8 & uVar8 - 1) == 0) {
        unaff_x22 = uVar8 - 1 & uVar9;
      }
      else {
        unaff_x22 = uVar9;
        if (uVar8 <= uVar9) {
          uVar13 = 0;
          if (uVar8 != 0) {
            uVar13 = uVar9 / uVar8;
          }
          unaff_x22 = uVar9 - uVar13 * uVar8;
        }
      }
    }
    lVar5 = *(long *)(piVar19 + 2);
    plVar7 = *(long **)(lVar5 + unaff_x22 * 8);
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)(piVar19 + 6);
      *plVar16 = *plVar7;
      *plVar7 = (long)plVar16;
      *(long **)(lVar5 + unaff_x22 * 8) = plVar7;
      if (*plVar16 != 0) {
        uVar9 = *(ulong *)(*plVar16 + 8);
        if ((uVar8 & uVar8 - 1) == 0) {
          uVar9 = uVar9 & uVar8 - 1;
        }
        else if (uVar8 <= uVar9) {
          uVar13 = 0;
          if (uVar8 != 0) {
            uVar13 = uVar9 / uVar8;
          }
          uVar9 = uVar9 - uVar13 * uVar8;
        }
        plVar7 = (long *)(*(long *)(piVar19 + 2) + uVar9 * 8);
        goto LAB_10aba9920;
      }
    }
    else {
      *plVar16 = *plVar7;
LAB_10aba9920:
      *plVar7 = (long)plVar16;
    }
    *(long *)(piVar19 + 8) = *(long *)(piVar19 + 8) + 1;
    puVar10 = puStack_60;
LAB_10aba9934:
    unaff_x21 = plVar16 + 3;
    lVar5 = *unaff_x21;
    puStack_60 = (undefined8 *)0x0;
    *unaff_x21 = (long)puVar10;
    if (lVar5 != 0) {
      func_0x00010abdb4e8(unaff_x21);
      puVar10 = puStack_60;
      puStack_60 = (undefined8 *)0x0;
      if (puVar10 != (undefined8 *)0x0) {
        func_0x00010abdb4e8(&puStack_60);
      }
    }
    piVar19 = (int *)*param_1;
LAB_10aba9964:
    param_1[3] = puVar18;
    iVar2 = *piVar19;
    *(int *)(param_1 + 2) = iVar2;
    if (iVar2 == 0) {
      param_1 = (undefined8 *)0x120;
      ___cxa_allocate_exception();
      FUN_10a2e1840();
    }
    else {
      if (puVar18 != (undefined8 *)0x0) {
        return puVar18;
      }
      param_1 = (undefined8 *)0x120;
      ___cxa_allocate_exception();
      FUN_10a2e1840();
    }
  } while( true );
}



/* Entry: 10aba9ac4; end: 10abaa077;  */

void FUN_10aba9ac4(long *param_1,long param_2,uint param_3,uint param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  ulong unaff_x23;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  long alStack_90 [3];
  long *plStack_78;
  long alStack_70 [3];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = (ulong)param_3 ^ (ulong)param_4 << 1;
  uVar18 = *(ulong *)(param_2 + 0x38);
  if (uVar18 != 0) {
    uVar9 = uVar18 - 1;
    if ((uVar18 & uVar9) == 0) {
      unaff_x23 = (uint)uVar18 + 0x1f & uVar17;
    }
    else {
      unaff_x23 = uVar17;
      if (uVar18 <= uVar17) {
        uVar1 = (uint)uVar17 & 0xff;
        uVar2 = (uint)uVar18 & 0xff;
        uVar3 = 0;
        if ((uVar18 & 0xff) != 0) {
          uVar3 = uVar1 / uVar2;
        }
        unaff_x23 = (ulong)(uVar1 - uVar3 * uVar2);
      }
    }
    puVar11 = *(undefined8 **)(*(long *)(param_2 + 0x30) + unaff_x23 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      for (plVar16 = (long *)*puVar11; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        uVar12 = plVar16[1];
        if (uVar12 == uVar17) {
          if (*(uint *)(plVar16 + 2) == param_3 && *(ushort *)((long)plVar16 + 0x14) == param_4)
          goto LAB_10aba9e40;
        }
        else {
          if ((uVar18 & uVar9) == 0) {
            uVar12 = uVar12 & uVar9;
          }
          else if (uVar18 <= uVar12) {
            uVar8 = 0;
            if (uVar18 != 0) {
              uVar8 = uVar12 / uVar18;
            }
            uVar12 = uVar12 - uVar8 * uVar18;
          }
          if (uVar12 != unaff_x23) break;
        }
      }
    }
  }
  plVar16 = (long *)0x38;
  __Znwm();
  *plVar16 = 0;
  plVar16[1] = uVar17;
  plVar16[2] = CONCAT44(param_4,param_3);
  plVar16[6] = 0;
  fVar19 = (float)(*(long *)(param_2 + 0x48) + 1);
  if ((uVar18 == 0) || (*(float *)(param_2 + 0x50) * (float)uVar18 < fVar19)) {
    uVar9 = 1;
    if (2 < uVar18) {
      uVar9 = (ulong)((uVar18 & uVar18 - 1) != 0);
    }
    uVar9 = uVar9 | uVar18 << 1;
    uVar12 = (ulong)(fVar19 / *(float *)(param_2 + 0x50));
    if (uVar9 <= uVar12) {
      uVar9 = uVar12;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar18 = *(ulong *)(param_2 + 0x38);
    }
    if (uVar18 < uVar9) {
LAB_10aba9c50:
      if (uVar9 >> 0x3d != 0) goto LAB_10abaa018;
      lVar6 = uVar9 << 3;
      __Znwm();
      lVar7 = *(long *)(param_2 + 0x30);
      *(long *)(param_2 + 0x30) = lVar6;
      if (lVar7 != 0) {
        __ZdlPv();
      }
      uVar18 = 0;
      *(ulong *)(param_2 + 0x38) = uVar9;
      do {
        *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar18 * 8) = 0;
        uVar18 = uVar18 + 1;
      } while (uVar9 != uVar18);
      plVar10 = *(long **)(param_2 + 0x40);
      uVar18 = uVar9;
      if (plVar10 != (long *)0x0) {
        uVar12 = plVar10[1];
        uVar8 = uVar9 - 1;
        if ((uVar9 & uVar8) == 0) {
          uVar12 = uVar12 & uVar8;
        }
        else if (uVar9 <= uVar12) {
          uVar15 = 0;
          if (uVar9 != 0) {
            uVar15 = uVar12 / uVar9;
          }
          uVar12 = uVar12 - uVar15 * uVar9;
        }
        *(undefined8 **)(*(long *)(param_2 + 0x30) + uVar12 * 8) = (undefined8 *)(param_2 + 0x40);
        plVar13 = (long *)*plVar10;
        while (plVar13 != (long *)0x0) {
          uVar15 = plVar13[1];
          if ((uVar9 & uVar8) == 0) {
            uVar15 = uVar15 & uVar8;
          }
          else if (uVar9 <= uVar15) {
            uVar4 = 0;
            if (uVar9 != 0) {
              uVar4 = uVar15 / uVar9;
            }
            uVar15 = uVar15 - uVar4 * uVar9;
          }
          plVar14 = plVar13;
          if (uVar15 != uVar12) {
            lVar6 = *(long *)(param_2 + 0x30);
            if (*(long *)(lVar6 + uVar15 * 8) == 0) {
              *(long **)(lVar6 + uVar15 * 8) = plVar10;
              uVar12 = uVar15;
            }
            else {
              *plVar10 = *plVar13;
              *plVar13 = **(undefined8 **)(lVar6 + uVar15 * 8);
              **(long **)(lVar6 + uVar15 * 8) = (long)plVar13;
              plVar14 = plVar10;
            }
          }
          plVar10 = plVar14;
          plVar13 = (long *)*plVar14;
        }
      }
    }
    else if (uVar9 < uVar18) {
      uVar12 = (ulong)((float)*(ulong *)(param_2 + 0x48) / *(float *)(param_2 + 0x50));
      if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar12) {
        uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
      }
      if (uVar9 <= uVar12) {
        uVar9 = uVar12;
      }
      if (uVar9 < uVar18) {
        if (uVar9 != 0) goto LAB_10aba9c50;
        lVar6 = *(long *)(param_2 + 0x30);
        *(undefined8 *)(param_2 + 0x30) = 0;
        if (lVar6 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(param_2 + 0x38) = 0;
        uVar18 = 0;
      }
      else {
        uVar18 = *(ulong *)(param_2 + 0x38);
      }
    }
    if ((uVar18 & uVar18 - 1) == 0) {
      unaff_x23 = (int)uVar18 + 0x1f & uVar17;
    }
    else {
      unaff_x23 = uVar17;
      if (uVar18 <= uVar17) {
        uVar9 = 0;
        if (uVar18 != 0) {
          uVar9 = uVar17 / uVar18;
        }
        unaff_x23 = uVar17 - uVar9 * uVar18;
      }
    }
  }
  lVar6 = *(long *)(param_2 + 0x30);
  plVar10 = *(long **)(lVar6 + unaff_x23 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)(param_2 + 0x40);
    *plVar16 = *plVar10;
    *plVar10 = (long)plVar16;
    *(long **)(lVar6 + unaff_x23 * 8) = plVar10;
    if (*plVar16 != 0) {
      uVar17 = *(ulong *)(*plVar16 + 8);
      if ((uVar18 & uVar18 - 1) == 0) {
        uVar17 = uVar17 & uVar18 - 1;
      }
      else if (uVar18 <= uVar17) {
        uVar9 = 0;
        if (uVar18 != 0) {
          uVar9 = uVar17 / uVar18;
        }
        uVar17 = uVar17 - uVar9 * uVar18;
      }
      plVar10 = (long *)(*(long *)(param_2 + 0x30) + uVar17 * 8);
      goto LAB_10aba9e30;
    }
  }
  else {
    *plVar16 = *plVar10;
LAB_10aba9e30:
    *plVar10 = (long)plVar16;
  }
  *(long *)(param_2 + 0x48) = *(long *)(param_2 + 0x48) + 1;
LAB_10aba9e40:
  func_0x00010abda9a0(alStack_90,param_5);
  plVar10 = plVar16 + 3;
  if (plVar10 != alStack_90) {
    plVar13 = (long *)plVar16[6];
    if (plStack_78 == alStack_90) {
      if (plVar13 == plVar10) {
        (**(code **)(*plStack_78 + 0x18))(plStack_78,alStack_70);
        (**(code **)(*plStack_78 + 0x20))();
        plStack_78 = (long *)0x0;
        (**(code **)(*(long *)plVar16[6] + 0x18))((long *)plVar16[6],alStack_90);
        (**(code **)(*(long *)plVar16[6] + 0x20))();
        plVar16[6] = 0;
        plStack_78 = alStack_90;
        (**(code **)(alStack_70[0] + 0x18))(alStack_70,plVar10);
        (**(code **)(alStack_70[0] + 0x20))(alStack_70);
      }
      else {
        (**(code **)(*plStack_78 + 0x18))(plStack_78,plVar10);
        (**(code **)(*plStack_78 + 0x20))();
        plStack_78 = (long *)plVar16[6];
      }
      plVar16[6] = (long)plVar10;
    }
    else if (plVar13 == plVar10) {
      (**(code **)(*plVar13 + 0x18))(plVar13,alStack_90);
      (**(code **)(*(long *)plVar16[6] + 0x20))();
      plVar16[6] = (long)plStack_78;
      plStack_78 = alStack_90;
    }
    else {
      plVar16[6] = (long)plStack_78;
      plStack_78 = plVar13;
    }
  }
  if (plStack_78 == alStack_90) {
    lVar6 = 0x20;
LAB_10aba9f8c:
    (**(code **)(*plStack_78 + lVar6))();
  }
  else if (plStack_78 != (long *)0x0) {
    lVar6 = 0x28;
    goto LAB_10aba9f8c;
  }
  *param_1 = param_2;
  param_1[1] = CONCAT44(param_4,param_3);
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_10abaa018:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10abaa020);
  (*pcVar5)();
}



/* Entry: 10abaa078; end: 10abaa1af;  */

void FUN_10abaa078(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uStack_31;
  
  param_1[3] = param_1[3] + 1;
  lVar3 = *param_1;
  lVar2 = param_1[1];
  if (lVar3 != lVar2) {
    do {
      if (((*(byte *)(lVar3 + 0x31) & 1) == 0) &&
         (*(long *)(lVar3 + 0x38) + 10U < (ulong)param_1[3])) {
        *(undefined1 *)(lVar3 + 0x31) = 0;
        (**(code **)(**(long **)(lVar3 + 0x40) + 0x10))();
        if (param_1[1] == lVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10abaa144);
          (*pcVar1)();
        }
        lVar2 = lVar3 + 0x50;
        func_0x00010abd5a74(&uStack_31,lVar2,param_1[1],lVar3);
        lVar4 = param_1[1];
        while (lVar4 != lVar2) {
          lVar4 = lVar4 + -0x50;
          FUN_10a2768c0(lVar4);
        }
        param_1[1] = lVar2;
      }
      else {
        lVar3 = lVar3 + 0x50;
      }
    } while (lVar3 != lVar2);
  }
  return;
}



/* Entry: 10abaa1b0; end: 10abaa267;  */

void FUN_10abaa1b0(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uStack_41;
  
  lVar3 = *param_1;
  lVar2 = param_1[1];
  if (lVar3 != lVar2) {
    do {
      if (*(long *)(lVar3 + 0x28) == param_2) {
        (**(code **)(**(long **)(lVar3 + 0x40) + 0x10))();
        if (param_1[1] == lVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10abaa268);
          (*pcVar1)();
        }
        lVar2 = lVar3 + 0x50;
        func_0x00010abd5a74(&uStack_41,lVar2,param_1[1],lVar3);
        lVar4 = param_1[1];
        while (lVar4 != lVar2) {
          lVar4 = lVar4 + -0x50;
          FUN_10a2768c0(lVar4);
        }
        param_1[1] = lVar2;
      }
      else {
        lVar3 = lVar3 + 0x50;
      }
    } while (lVar3 != lVar2);
  }
  return;
}



/* Entry: 10abaa268; end: 10abaad07;  */

/* WARNING: Removing unreachable block (ram,0x00010abaa850) */
/* WARNING: Removing unreachable block (ram,0x00010abaa854) */
/* WARNING: Removing unreachable block (ram,0x00010abaa85c) */
/* WARNING: Removing unreachable block (ram,0x00010abaa864) */

void FUN_10abaa268(undefined8 *param_1,long *param_2,long param_3,ulong *param_4,uint param_5)

{
  int iVar1;
  long *plVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong *puVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined5 uStack_f8;
  undefined3 uStack_f3;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  long lStack_e8;
  undefined2 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  
  lVar13 = *param_2;
  if (lVar13 != param_2[1]) {
    do {
      if (((((*(long *)(lVar13 + 0x28) == param_3) &&
            (*(int *)(lVar13 + 0x18) == (int)param_4[3] &&
             *(int *)(lVar13 + 0x1c) == *(int *)((long)param_4 + 0x1c))) &&
           (*(int *)(lVar13 + 0x20) == (int)param_4[4])) &&
          ((*(char *)(lVar13 + 0x24) == *(char *)((long)param_4 + 0x24) &&
           (*(byte *)(lVar13 + 0x30) == param_5)))) && (*(char *)(lVar13 + 0x31) != '\x01'))
      goto LAB_10abaabf0;
      lVar13 = lVar13 + 0x50;
    } while (lVar13 != param_2[1]);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_f3 = 0;
  lStack_100 = 0;
  uStack_f0 = 4;
  uStack_e0 = 0;
  plStack_d0 = (long *)0x0;
  plStack_c8 = (long *)0x0;
  uStack_d8 = 0;
  lStack_e8 = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_110,param_4);
  puVar11 = param_4 + 3;
  uStack_f8 = (undefined5)*puVar11;
  uVar12 = *(undefined8 *)((long)param_4 + 0x1d);
  uStack_f3 = (undefined3)uVar12;
  uStack_f0 = (undefined4)((ulong)uVar12 >> 0x18);
  uStack_ec = (undefined1)((ulong)uVar12 >> 0x38);
  uStack_e0 = CONCAT11(uStack_e0._1_1_,(char)param_5);
  if (param_5 == 0) {
    uStack_98 = param_4[3];
    uVar17 = param_4[4];
    uVar3 = *(undefined1 *)((long)param_4 + 0x24);
    plVar9 = (long *)0x50;
    lStack_a0 = param_3;
    __Znwm();
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_110c53968;
    plVar7 = plVar9 + 3;
    *plVar7 = (long)&PTR_FUN_110c539b8;
    plVar9[5] = 0;
    plVar9[4] = 0;
    plVar9[7] = 0;
    plVar9[6] = 0;
    plVar9[9] = 0;
    plVar9[8] = 0;
    FUN_10a91a638(&plStack_90,&plStack_b0,&lStack_a0);
    FUN_10a2c7d5c(plVar9 + 4,&plStack_90);
    plVar10 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar8 = plStack_88 + 1;
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
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = plVar9 + 4;
    lVar13 = *plVar10;
    *(byte *)(lVar13 + 0x2b8) = *(byte *)(lVar13 + 0x2b8) & 0xfe;
    *(undefined1 *)(lVar13 + 0x304) = 0;
    *(undefined1 *)(lVar13 + 8) = 1;
    *(undefined1 *)(lVar13 + 800) = uVar3;
    *(undefined8 *)(lVar13 + 0x32c) = 0;
    *(undefined8 *)(lVar13 + 0x324) = 0;
    lVar13 = *plVar10;
    *(undefined1 *)(lVar13 + 0x334) = 0;
    if (((int)uStack_98 < 1) || (uStack_98._4_4_ < 1)) {
      *(undefined1 *)(lVar13 + 0x2fc) = 0;
    }
    else {
      FUN_10a1ddfe4(lVar13,&uStack_98);
      lVar13 = *plVar10;
    }
    FUN_10a1ddaa4(lVar13,(int)uVar17);
    FUN_10a2c7dc0(&plStack_90,lStack_a0,plVar10);
    FUN_10a015bec(plVar9 + 8,&plStack_90);
    plVar10 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar8 = plStack_88 + 1;
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
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    lVar13 = plVar9[8];
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      func_0x000107c3192c(&plStack_90,*param_4,param_4[1]);
    }
    else {
      plStack_88 = (long *)param_4[1];
      plStack_90 = (long *)*param_4;
      plStack_80 = (long *)param_4[2];
    }
    if (*(char *)(lVar13 + 0x6f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar13 + 0x58));
    }
    *(long **)(lVar13 + 0x68) = plStack_80;
    *(long **)(lVar13 + 0x60) = plStack_88;
    *(long **)(lVar13 + 0x58) = plStack_90;
    plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff);
    plStack_90 = (long *)((ulong)plStack_90 & 0xffffffffffffff00);
    *(undefined1 *)(plVar9[8] + 8) = 1;
    plVar10 = (long *)0x90;
    __Znwm();
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&PTR_DAT_110bd9c58;
    *(undefined1 *)(plVar10 + 4) = 0;
    plVar10[7] = 0;
    plVar10[6] = 0;
    plVar10[9] = 0;
    plVar10[8] = 0;
    plVar10[0xb] = 0;
    plVar10[10] = 0;
    plVar10[0xd] = 0;
    plVar10[0xc] = 0;
    plVar10[0xe] = 0;
    plStack_b0 = plVar10 + 3;
    *plStack_b0 = (long)&PTR_DAT_110bd6cc8;
    plVar10[5] = (long)&PTR_DAT_110bd6d28;
    *(undefined1 *)(plVar10 + 0xf) = 0;
    *(undefined8 *)((long)plVar10 + 0x84) = 0x3f80000000000000;
    *(undefined8 *)((long)plVar10 + 0x7c) = 0;
    *(undefined1 *)((long)plVar10 + 0x8c) = 0;
    plStack_a8 = plVar10;
    FUN_10a430118(plVar9 + 6,&plStack_b0);
    plVar10 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar8 = plStack_a8 + 1;
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
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = (long *)plVar9[6];
    plStack_a8 = (long *)plVar9[9];
    plStack_b0 = (long *)plVar9[8];
    if (plVar9[9] != 0) {
      plVar8 = (long *)(plVar9[9] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = *plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    (**(code **)(*plVar10 + 0x48))(plVar10,&plStack_b0);
    plVar10 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar8 = plStack_a8 + 1;
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
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    lVar13 = plVar9[6];
    *(undefined8 *)(lVar13 + 0x6c) = 0;
    *(undefined8 *)(lVar13 + 100) = 0;
    plStack_c0 = (long *)0x0;
    plStack_b8 = (long *)0x0;
    FUN_10a015bec(plVar9[6] + 0x38,&plStack_c0);
    plVar10 = plStack_b8;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = plStack_c8;
    plStack_d0 = plVar7;
    if (plStack_c8 != (long *)0x0) {
      plVar7 = plStack_c8 + 1;
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
        lVar13 = *plStack_c8;
        plStack_c8 = plVar9;
        (**(code **)(lVar13 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        plVar9 = plStack_c8;
      }
    }
  }
  else {
    uVar17 = *puVar11;
    iVar1 = *(int *)((long)param_4 + 0x1c);
    plVar9 = (long *)*puVar11;
    plVar7 = (long *)0x50;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110c539e0;
    plStack_c0 = plVar7 + 3;
    *plStack_c0 = (long)&PTR_FUN_110c53a30;
    plVar7[5] = 0;
    plVar7[4] = 0;
    plVar7[7] = 0;
    plVar7[6] = 0;
    plVar7[9] = 0;
    plVar7[8] = 0;
    plVar8 = (long *)0x340;
    plStack_b8 = plVar7;
    __Znwm();
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_DAT_110bbae88;
    plVar10 = plVar8 + 3;
    FUN_10ac25f14(plVar10,param_3);
    plStack_90 = plVar10;
    plStack_88 = plVar8;
    FUN_10a271c18(&plStack_90,plVar8 + 0xb,plVar10);
    func_0x00010a2c7ba0(plVar7 + 4,&plStack_90);
    plVar10 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar7 = plStack_88 + 1;
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
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = plStack_c0;
    plVar7 = plStack_c0 + 1;
    lVar13 = *plVar7;
    *(undefined1 *)(lVar13 + 0x2a8) = 0;
    *(undefined1 *)(lVar13 + 8) = 1;
    if (((int)uVar17 < 1) || (iVar1 < 1)) {
      *(undefined1 *)(lVar13 + 0x29c) = 1;
    }
    else {
      plStack_90 = plVar9;
      FUN_10ac26770(lVar13,&plStack_90);
    }
    FUN_10a2c7c04(&plStack_90,param_3,plVar7);
    FUN_10a015bec(plVar10 + 5,&plStack_90);
    plVar10 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar13 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = plStack_c0;
    lVar13 = plStack_c0[5];
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      func_0x000107c3192c(&plStack_90,*param_4,param_4[1]);
    }
    else {
      plStack_88 = (long *)param_4[1];
      plStack_90 = (long *)*param_4;
      plStack_80 = (long *)param_4[2];
    }
    if (*(char *)(lVar13 + 0x6f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar13 + 0x58));
    }
    *(long **)(lVar13 + 0x68) = plStack_80;
    *(long **)(lVar13 + 0x60) = plStack_88;
    *(long **)(lVar13 + 0x58) = plStack_90;
    plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff);
    plStack_90 = (long *)((ulong)plStack_90 & 0xffffffffffffff00);
    *(undefined1 *)(plVar10[5] + 8) = 1;
    plVar9 = (long *)0x88;
    __Znwm();
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_110bd9bb8;
    *(undefined1 *)(plVar9 + 4) = 0;
    plVar9[7] = 0;
    plVar9[6] = 0;
    plVar9[9] = 0;
    plVar9[8] = 0;
    plVar9[0xb] = 0;
    plVar9[10] = 0;
    plVar9[0xd] = 0;
    plVar9[0xc] = 0;
    plVar9[0xe] = 0;
    plStack_b0 = plVar9 + 3;
    *plStack_b0 = (long)&PTR_DAT_110bd6d80;
    plVar9[5] = (long)&PTR_DAT_110bd6de0;
    *(undefined2 *)(plVar9 + 0xf) = 0;
    *(undefined8 *)((long)plVar9 + 0x7c) = 0x3f800000;
    plStack_a8 = plVar9;
    FUN_10a42efb4(plVar10 + 3,&plStack_b0);
    plVar10 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar9 = plStack_a8 + 1;
      do {
        lVar13 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = (long *)plStack_c0[3];
    plStack_a8 = (long *)plStack_c0[6];
    plStack_b0 = (long *)plStack_c0[5];
    if (plStack_c0[6] != 0) {
      plVar9 = (long *)(plStack_c0[6] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    (**(code **)(*plVar10 + 0x48))(plVar10,&plStack_b0);
    plVar10 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar9 = plStack_a8 + 1;
      do {
        lVar13 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar9 = plStack_b8;
    plStack_d0 = plStack_c0;
    plVar10 = plStack_c8;
    plStack_c0 = (long *)0x0;
    plStack_b8 = (long *)0x0;
    plStack_c8 = plVar9;
    if (plVar10 != (long *)0x0) {
      plVar9 = plVar10 + 1;
      do {
        lVar13 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = plStack_b8;
    plVar9 = plStack_c8;
    if (plStack_b8 != (long *)0x0) {
      plVar7 = plStack_b8 + 1;
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
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        plVar9 = plStack_c8;
      }
    }
  }
  plStack_c8 = plVar9;
  uVar17 = param_2[1];
  if (uVar17 < (ulong)param_2[2]) {
    func_0x00010abd5b7c(uVar17,&uStack_110);
    lVar13 = uVar17 + 0x50;
    param_2[1] = lVar13;
  }
  else {
    lVar13 = uVar17 - *param_2;
    uVar17 = (lVar13 >> 4) * -0x3333333333333333 + 1;
    if (0x333333333333333 < uVar17) {
      FUN_10abd5c0c();
      goto LAB_10abaac5c;
    }
    lVar15 = param_2[2] - *param_2 >> 4;
    uVar16 = lVar15 * -0x6666666666666666;
    if (uVar16 < uVar17 || uVar16 - uVar17 == 0) {
      uVar16 = uVar17;
    }
    if (0x199999999999998 < (ulong)(lVar15 * -0x3333333333333333)) {
      uVar16 = 0x333333333333333;
    }
    plStack_70 = param_2;
    if (uVar16 == 0) {
      plVar10 = (long *)0x0;
    }
    else {
      if (0x333333333333333 < uVar16) {
        func_0x000109ffded8();
        goto LAB_10abaac5c;
      }
      plVar10 = (long *)(uVar16 * 0x50);
      __Znwm();
    }
    lVar13 = (long)plVar10 + lVar13;
    plStack_90 = plVar10;
    plStack_88 = (long *)lVar13;
    plStack_80 = (long *)lVar13;
    plStack_78 = plVar10 + uVar16 * 10;
    func_0x00010abd5b7c(lVar13,&uStack_110);
    plVar7 = (long *)*param_2;
    plVar2 = (long *)param_2[1];
    plVar8 = (long *)((long)plVar7 + (lVar13 - (long)plVar2));
    plVar9 = plVar7;
    plVar14 = plVar8;
    if (plVar2 != plVar7) {
      do {
        lVar18 = plVar9[1];
        lVar15 = *plVar9;
        plVar14[2] = plVar9[2];
        plVar14[1] = lVar18;
        *plVar14 = lVar15;
        plVar9[1] = 0;
        plVar9[2] = 0;
        *plVar9 = 0;
        lVar15 = plVar9[3];
        *(undefined8 *)((long)plVar14 + 0x1d) = *(undefined8 *)((long)plVar9 + 0x1d);
        plVar14[3] = lVar15;
        lVar18 = plVar9[6];
        lVar15 = plVar9[5];
        plVar14[7] = plVar9[7];
        plVar14[6] = lVar18;
        plVar14[5] = lVar15;
        lVar15 = plVar9[8];
        plVar14[9] = plVar9[9];
        plVar14[8] = lVar15;
        plVar9[8] = 0;
        plVar9[9] = 0;
        plVar9 = plVar9 + 10;
        plVar14 = plVar14 + 10;
      } while (plVar9 != plVar2);
      do {
        FUN_10a2768c0(plVar7);
        plVar7 = plVar7 + 10;
      } while (plVar7 != plVar2);
      plVar7 = (long *)*param_2;
    }
    lVar13 = lVar13 + 0x50;
    *param_2 = (long)plVar8;
    param_2[1] = lVar13;
    plStack_78 = (long *)param_2[2];
    param_2[2] = (long)(plVar10 + uVar16 * 10);
    plStack_90 = plVar7;
    plStack_88 = plVar7;
    plStack_80 = plVar7;
    FUN_10abd5c20(&plStack_90);
  }
  plVar10 = plStack_c8;
  param_2[1] = lVar13;
  if (*param_2 != lVar13) {
    if (plStack_c8 != (long *)0x0) {
      plVar9 = plStack_c8 + 1;
      do {
        lVar15 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    lVar13 = lVar13 + -0x50;
    if (lStack_100 < 0) {
      __ZdlPv(uStack_110);
    }
LAB_10abaabf0:
    *(long *)(lVar13 + 0x38) = param_2[3];
    *(undefined1 *)(lVar13 + 0x31) = 1;
    param_2[4] = param_2[4] + 1;
    lVar15 = *(long *)(lVar13 + 0x48);
    uVar12 = *(undefined8 *)(lVar13 + 0x40);
    param_1[1] = *(undefined8 *)(lVar13 + 0x48);
    *param_1 = uVar12;
    if (lVar15 != 0) {
      plVar10 = (long *)(lVar15 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    return;
  }
LAB_10abaac5c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10abaac60);
  (*pcVar6)();
}



/* Entry: 10abaad08; end: 10abaad3f;  */

undefined8 * FUN_10abaad08(undefined8 *param_1)

{
  func_0x00010a2768fc(param_1 + 8);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10abaad40; end: 10abaaf1f;  */

long * FUN_10abaad40(long *param_1,long *param_2)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  long lVar8;
  long alStack_e8 [3];
  long *plStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined ***pppuStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined **appuStack_68 [3];
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[9] = (long)&PTR_FUN_110c52e18;
  param_1[1] = (long)param_2;
  param_1[2] = (long)(param_1 + 9);
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *param_1 = (long)&PTR_DAT_110c50088;
  *(undefined4 *)(param_1 + 10) = 0x10000;
  *(undefined2 *)((long)param_1 + 0x54) = 1;
  plVar3 = param_1 + 0xb;
  param_1[0xc] = 0;
  *plVar3 = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = (long)(param_1 + 0x21);
  param_2 = (long *)*param_2;
  (**(code **)(*param_2 + 200))();
  lVar5 = param_2[0x38];
  appuStack_68[0] = &PTR_FUN_110c53a58;
  pppuVar7 = appuStack_68;
  uVar6 = 6;
  pppuStack_50 = appuStack_68;
  FUN_10abaaf20(&lStack_88,lVar5,6,pppuVar7);
  param_1[0x17] = lStack_80;
  param_1[0x16] = lStack_88;
  param_1[0x19] = lStack_70;
  param_1[0x18] = lStack_78;
  pppuVar1 = pppuStack_50;
  if (pppuStack_50 == appuStack_68) {
    lVar8 = 0x20;
LAB_10abaae50:
    (**(code **)((long)*pppuStack_50 + lVar8))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar8 = 0x28;
    goto LAB_10abaae50;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (pppuStack_50 == appuStack_68) {
    lVar8 = 0x20;
LAB_10abaaeb8:
    (**(code **)((long)*pppuStack_50 + lVar8))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar8 = 0x28;
    goto LAB_10abaaeb8;
  }
  FUN_10abd606c(param_1[0x21]);
  func_0x00010abda948(param_1 + 0x1e);
  func_0x00010abda948(param_1 + 0x1c);
  func_0x00010abda948(param_1 + 0x1a);
  lVar8 = param_1[0x13];
  if (lVar8 != 0) {
    param_1[0x14] = lVar8;
    __ZdlPv();
  }
  param_1[9] = (long)&PTR_FUN_110c52e18;
  func_0x00010abd59bc(param_1 + 0xe);
  FUN_10abd60b4(plVar3);
  func_0x00010aba7988(param_1);
  pppuVar2 = pppuVar1;
  __Unwind_Resume(pppuVar1);
  ppuStack_c0 = &PTR_FUN_110c52e18;
  pcStack_98 = FUN_10abaaf20;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_b8 = pppuVar1;
  plStack_b0 = plVar3;
  plStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010abda9a0(alStack_e8,pppuVar7);
  FUN_10aba9ac4(pppuVar2,lVar5,6,uVar6,alStack_e8);
  plVar3 = plStack_d0;
  if (plStack_d0 == alStack_e8) {
    lVar8 = 0x20;
LAB_10abaaf94:
    (**(code **)(*plStack_d0 + lVar8))();
  }
  else if (plStack_d0 != (long *)0x0) {
    lVar8 = 0x28;
    goto LAB_10abaaf94;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return plVar3;
  }
  ___stack_chk_fail();
  if (plStack_d0 == alStack_e8) {
    lVar8 = 0x20;
  }
  else {
    if (plStack_d0 == (long *)0x0) goto LAB_10abab004;
    lVar8 = 0x28;
  }
  (**(code **)(*plStack_d0 + lVar8))();
LAB_10abab004:
  __Unwind_Resume(plVar3);
  plVar4 = plVar3 + 0x20;
  FUN_10abdc5d0(plVar4,*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18));
  return (long *)(ulong)(plVar3 + 0x21 != plVar4);
}



/* Entry: 10abaaf20; end: 10abab00b;  */

long * FUN_10abaaf20(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010abda9a0(alStack_58,param_4);
  FUN_10aba9ac4(param_1,param_2,6,param_3,alStack_58);
  plVar1 = plStack_40;
  if (plStack_40 == alStack_58) {
    lVar3 = 0x20;
LAB_10abaaf94:
    (**(code **)(*plStack_40 + lVar3))();
  }
  else if (plStack_40 != (long *)0x0) {
    lVar3 = 0x28;
    goto LAB_10abaaf94;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar1;
  }
  ___stack_chk_fail();
  if (plStack_40 == alStack_58) {
    lVar3 = 0x20;
  }
  else {
    if (plStack_40 == (long *)0x0) goto LAB_10abab004;
    lVar3 = 0x28;
  }
  (**(code **)(*plStack_40 + lVar3))();
LAB_10abab004:
  __Unwind_Resume(plVar1);
  plVar2 = plVar1 + 0x20;
  FUN_10abdc5d0(plVar2,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  return (long *)(ulong)(plVar1 + 0x21 != plVar2);
}



/* Entry: 10abab00c; end: 10abab043;  */

bool FUN_10abab00c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x100;
  FUN_10abdc5d0(lVar1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  return param_1 + 0x108 != lVar1;
}



/* Entry: 10abab044; end: 10abac093;  */

void FUN_10abab044(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  bool bVar20;
  long lVar21;
  long lVar22;
  uint *puVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar27;
  double dVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uStack_1a8;
  int iStack_1a0;
  undefined8 *puStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  long lStack_150;
  undefined ***pppuStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 uStack_10c;
  long lStack_108;
  long *plStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined1 auStack_d0 [8];
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined ***pppuStack_b0;
  long lStack_a8;
  undefined8 uVar26;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = *(long **)(*(long *)(param_5 + 0x30) + 0x168);
  uStack_158 = (long *)CONCAT44(uStack_158._4_4_,(float)uStack_158);
  if ((plVar16 == *(long **)(*(long *)(param_5 + 0x30) + 0x170)) ||
     (uStack_158 = (long *)CONCAT44(uStack_158._4_4_,(float)uStack_158), *plVar16 == 0)) {
LAB_10abab7ec:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar8 = param_4 + 0x100;
    FUN_10abdc5d0(lVar8,*(long *)(param_5 + 0x20),*(undefined8 *)(param_5 + 0x28));
    if (param_4 + 0x108 == lVar8) {
      lStack_108 = 0;
      plStack_100 = (long *)0x0;
LAB_10abab7b4:
      plVar16 = plStack_100;
      if (plStack_100 != (long *)0x0) {
        plVar14 = plStack_100 + 1;
        do {
          lVar8 = *plVar14;
          cVar4 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar20) {
            *plVar14 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_100 + 0x10))(plStack_100);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      goto LAB_10abab7ec;
    }
    lStack_108 = *(long *)(lVar8 + 0x30);
    plStack_100 = *(long **)(lVar8 + 0x38);
    if (plStack_100 != (long *)0x0) {
      plVar16 = plStack_100 + 1;
      do {
        cVar4 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar20) {
          *plVar16 = *plVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_158 = (long *)CONCAT44(uStack_158._4_4_,(float)uStack_158);
    if (lStack_108 == 0) goto LAB_10abab7b4;
    lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 8) + 0x100) + 0x260);
    fStack_160 = 1.1302151e-29;
    fStack_15c = 1.4013e-45;
    uStack_158._0_4_ = 4.62428e-44;
    uStack_158._4_4_ = 0.0;
    uStack_158 = (long *)0x21;
    if (lVar8 != 0) {
      FUN_10a244d68();
      uVar13 = (ulong)*(ushort *)(param_5 + 4) - 1;
      uVar15 = (*(long *)(param_4 + 0x60) - *(long *)(param_4 + 0x58) >> 3) * 0x51b3bea3677d46cf;
      uStack_158 = (long *)CONCAT44(uStack_158._4_4_,(float)uStack_158);
      if (uVar15 < uVar13 || uVar15 - uVar13 == 0) goto LAB_10ababf18;
      plVar16 = (long *)(*(long *)(param_4 + 0x58) + (long)(int)uVar13 * 0x178);
      func_0x00010a66b340(plVar16 + 0x2b,&lStack_108);
      lVar19 = *(long *)(param_5 + 0x20);
      plVar16[0x2e] = *(long *)(param_5 + 0x28);
      plVar16[0x2d] = lVar19;
      uStack_b8 = *(undefined8 *)(*(long *)(param_5 + 0x30) + 0x30);
      uVar27 = *(undefined8 *)(*(long *)(param_5 + 0x30) + 0x28);
      pppuStack_b0 = &ppuStack_c8;
      ppuStack_c8 = &PTR_DAT_110c53d58;
      *(undefined8 *)(param_4 + 0xa0) = *(undefined8 *)(param_4 + 0x98);
      lVar19 = *(long *)(param_5 + 0x10);
      lVar21 = (*(long *)(lVar19 + 0x208) - *(long *)(lVar19 + 0x200) >> 3) * 0x6fb586fb586fb587 +
               (*(long *)(lVar19 + 0x770) - *(long *)(lVar19 + 0x768) >> 3) * 0x6fb586fb586fb587;
      uStack_c0 = uVar27;
      if (lVar21 == 0) {
LAB_10abab36c:
        fStack_160 = 0.0;
        fStack_15c = 0.0;
        uStack_158._0_4_ = 0.0;
        uStack_158._4_4_ = 0.0;
        FUN_10abae01c(param_4 + 0x100,&fStack_160,*(undefined8 *)(param_5 + 0x20),
                      *(undefined8 *)(param_5 + 0x28),plVar16);
        if (uStack_158 != (long *)0x0) {
          plVar16 = uStack_158 + 1;
          do {
            lVar8 = *plVar16;
            cVar4 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar20) {
              *plVar16 = lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            plVar14 = uStack_158;
          } while (cVar4 != '\0');
LAB_10abab3a0:
          if (lVar8 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
      }
      else {
        lVar22 = 0;
        do {
          fStack_160 = (float)lVar22;
          uStack_120 = CONCAT44(uStack_120._4_4_,fStack_160);
          if (pppuStack_b0 == (undefined ***)0x0) {
            FUN_10a06186c();
            goto LAB_10ababf18;
          }
          pppuVar9 = pppuStack_b0;
          (*(code *)(*pppuStack_b0)[6])(pppuStack_b0,lVar19,&fStack_160);
          if ((int)pppuVar9 != 0) {
            FUN_10abac094((undefined8 *)(param_4 + 0x98),&uStack_120);
          }
          uVar31 = (undefined4)param_3;
          uVar29 = (undefined4)param_2;
          uVar33 = (undefined4)uVar27;
          lVar22 = lVar22 + 1;
        } while (lVar21 != lVar22);
        if (*(long *)(param_4 + 0x98) == *(long *)(param_4 + 0xa0)) goto LAB_10abab36c;
        FUN_10ab70d08(plVar16[0x2b]);
        *(undefined4 *)plVar16 = uVar33;
        *(undefined4 *)((long)plVar16 + 4) = uVar29;
        *(undefined4 *)(plVar16 + 1) = uVar31;
        *(undefined4 *)((long)plVar16 + 0x14) = uVar33;
        *(undefined4 *)(plVar16 + 3) = uVar29;
        *(undefined4 *)((long)plVar16 + 0x1c) = uVar31;
        if (lVar8 != 0) {
          puVar23 = *(uint **)(param_4 + 0x98);
          puVar2 = *(uint **)(param_4 + 0xa0);
          if (puVar23 == puVar2) {
LAB_10abab710:
            if ((bRam000000011330a9e8 & 1) != 0) {
              puVar10 = &UNK_10f69731a;
              uVar27 = 0xcd;
              goto LAB_10abab73c;
            }
            goto LAB_10abab758;
          }
          bVar20 = false;
          fVar34 = -3.4028235e+38;
          fVar25 = -3.4028235e+38;
          fVar35 = 3.4028235e+38;
          fVar36 = 3.4028235e+38;
          fVar11 = -3.4028235e+38;
          fVar12 = 3.4028235e+38;
LAB_10abab280:
          do {
            if (*puVar23 != 0xffffffff) {
              if ((ulong)*puVar23 <
                  (ulong)((*(long *)(lVar8 + 0x228) - *(long *)(lVar8 + 0x220) >> 3) *
                          0x6fb586fb586fb587 +
                         (*(long *)(lVar8 + 0x790) - *(long *)(lVar8 + 0x788) >> 3) *
                         0x6fb586fb586fb587)) {
                lVar19 = lVar8 + 0x20;
                FUN_10a015150(lVar19);
                FUN_10a005448(&fStack_160,lVar19 + 0x5c,lVar19 + 4);
                fVar24 = fStack_160 - uStack_158._4_4_;
                if (fVar12 <= fStack_160 - uStack_158._4_4_) {
                  fVar24 = fVar12;
                }
                fVar12 = fVar24;
                fVar24 = fStack_160 + uStack_158._4_4_;
                if (fStack_160 + uStack_158._4_4_ <= fVar11) {
                  fVar24 = fVar11;
                }
                fVar11 = fVar24;
                fVar32 = fStack_15c - (float)lStack_150;
                fVar30 = (float)((ulong)lStack_150 >> 0x20);
                fVar37 = (float)uStack_158 - fVar30;
                fVar24 = fStack_15c + (float)lStack_150;
                fVar30 = (float)uStack_158 + fVar30;
                fVar35 = (float)((uint)fVar35 ^
                                ((uint)fVar35 ^ (uint)fVar32) & -(uint)(fVar32 < fVar35));
                fVar36 = (float)((uint)fVar36 ^
                                ((uint)fVar36 ^ (uint)fVar37) & -(uint)(fVar37 < fVar36));
                fVar34 = (float)((uint)fVar34 ^
                                ((uint)fVar34 ^ (uint)fVar24) & -(uint)(fVar34 < fVar24));
                fVar25 = (float)((uint)fVar25 ^
                                ((uint)fVar25 ^ (uint)fVar30) & -(uint)(fVar25 < fVar30));
                puVar23 = puVar23 + 1;
                bVar20 = true;
                if (puVar23 == puVar2) goto LAB_10abab3c8;
                goto LAB_10abab280;
              }
              if ((bRam000000011330a9e8 & 1) != 0) {
                func_0x00010ae06f08(0,1,&UNK_10f6970b3,&UNK_10f6971e1,0xba,&UNK_10f6972db);
              }
            }
            puVar23 = puVar23 + 1;
          } while (puVar23 != puVar2);
          if (!bVar20) goto LAB_10abab710;
LAB_10abab3c8:
          fVar30 = fVar34 + fVar35;
          fVar32 = 0.5;
          fVar37 = (fVar11 + fVar12) * 0.5;
          *(float *)(plVar16 + 0x21) = fVar37;
          fVar24 = fVar34 - fVar35;
          if (fVar34 - fVar35 <= fVar11 - fVar12) {
            fVar24 = fVar11 - fVar12;
          }
          fVar34 = fVar25 - fVar36;
          if (fVar25 - fVar36 <= fVar24) {
            fVar34 = fVar24;
          }
          *(float *)((long)plVar16 + 0x114) = fVar34;
          *(float *)(plVar16 + 0x23) = fVar34;
          *(float *)((long)plVar16 + 0x11c) = fVar34;
          fVar35 = *(float *)(plVar16 + 3);
          if (*(float *)(plVar16 + 3) <= *(float *)((long)plVar16 + 0x14)) {
            fVar35 = *(float *)((long)plVar16 + 0x14);
          }
          fVar24 = *(float *)((long)plVar16 + 0x1c);
          if (*(float *)((long)plVar16 + 0x1c) <= fVar35) {
            fVar24 = fVar35;
          }
          uVar17 = (uint)fVar24;
          fVar35 = (float)NEON_ucvtf((int)fVar24);
          uVar33 = NEON_ucvtf((int)(float)(int)SQRT(fVar35));
          if (uVar17 < 0x10) {
            uVar33 = 0x40800000;
          }
          fVar24 = fVar30 * 0.5;
          fVar36 = (fVar25 + fVar36) * 0.5;
          uVar26 = CONCAT44(fVar36,fVar24);
          *(undefined8 *)((long)plVar16 + 0x10c) = uVar26;
          uVar27 = uVar26;
          func_0x00010ab70d14(plVar16[0x2b]);
          fVar25 = fVar34 * (float)uVar27;
          *(float *)((long)plVar16 + 0x114) = fVar25;
          *(float *)(plVar16 + 0x23) = fVar34 * fVar30;
          *(float *)((long)plVar16 + 0x11c) = fVar34 * fVar32;
          *(uint *)(plVar16 + 4) = uVar17;
          *(float *)((long)plVar16 + 0xc) = fVar35;
          *(undefined4 *)(plVar16 + 2) = uVar33;
          *(undefined4 *)(plVar16 + 0x24) = 0x3f800000;
          *(float *)((long)plVar16 + 0x124) = fVar25 + 1.0;
          *(long *)((long)plVar16 + 0x24) = plVar16[0x21];
          *(int *)((long)plVar16 + 0x2c) = (int)plVar16[0x22];
          *(undefined4 *)(plVar16 + 9) = 0x3f800000;
          *(undefined8 *)((long)plVar16 + 0x54) = 0;
          *(undefined8 *)((long)plVar16 + 0x4c) = 0;
          *(undefined4 *)((long)plVar16 + 0x5c) = 0x3f800000;
          plVar16[0xc] = 0;
          plVar16[0xd] = 0;
          *(undefined4 *)(plVar16 + 0xe) = 0x3f800000;
          *(undefined8 *)((long)plVar16 + 0x7c) = 0;
          *(undefined8 *)((long)plVar16 + 0x74) = 0;
          *(float *)(plVar16 + 6) = fVar37;
          *(float *)((long)plVar16 + 0x34) = fVar36;
          *(float *)(plVar16 + 7) = -fVar24;
          *(undefined8 *)((long)plVar16 + 0x84) = 0x3f7fffff3f800000;
          *(undefined8 *)((long)plVar16 + 0x8c) = 0;
          *(undefined8 *)((long)plVar16 + 0x94) = 0;
          *(undefined8 *)((long)plVar16 + 0xa4) = 0;
          *(undefined8 *)((long)plVar16 + 0x9c) = 0xbf800000b33bbd2e;
          *(undefined8 *)((long)plVar16 + 0xac) = 0xb33bbd2e3f800000;
          *(undefined8 *)((long)plVar16 + 0xb4) = 0;
          *(undefined8 *)((long)plVar16 + 0xbc) = 0;
          uVar27 = NEON_rev64(uVar26,4);
          *(undefined8 *)((long)plVar16 + 0x3c) = uVar27;
          *(float *)((long)plVar16 + 0x44) = -((fVar11 + fVar12) * 0.5);
          *(undefined8 *)((long)plVar16 + 0xcc) = 0xbf80000000000000;
          *(undefined8 *)((long)plVar16 + 0xc4) = 0xb33bbd2e3f800000;
          *(undefined8 *)((long)plVar16 + 0xdc) = 0x3f7fffff;
          *(undefined8 *)((long)plVar16 + 0xd4) = 0;
          *(undefined8 *)((long)plVar16 + 0xec) = 0xb33bbd2e00000000;
          *(undefined8 *)((long)plVar16 + 0xe4) = 0x3f80000000000000;
          *(undefined8 *)((long)plVar16 + 0xf4) = 0;
          *(undefined8 *)((long)plVar16 + 0xfc) = 0;
          *(undefined4 *)((long)plVar16 + 0x104) = 0x3f800000;
          dVar28 = (double)uVar17;
          _log2();
          *(int *)(plVar16 + 0x25) = (int)dVar28;
          *(int *)((long)plVar16 + 300) = (int)dVar28 + -1;
          plVar16[0x27] = plVar16[0x26];
          func_0x0001073b504c(plVar16 + 0x26);
          if ((int)plVar16[0x25] != 0) {
            uVar17 = 0;
            iVar18 = 1;
            do {
              dVar28 = (double)(uint)(iVar18 + *(int *)((long)plVar16 + 300));
              _exp2();
              fStack_160 = (float)NEON_ucvtf((int)plVar16[4]);
              fStack_160 = fStack_160 / (float)(uint)(int)dVar28;
              FUN_10a0ca014(plVar16 + 0x26,&fStack_160);
              uVar17 = uVar17 + 1;
              iVar18 = iVar18 + -1;
            } while (uVar17 < *(uint *)(plVar16 + 0x25));
          }
          lVar19 = plVar16[0x2b];
          uVar33 = *(undefined4 *)((long)plVar16 + 0x11c);
          lVar8 = plVar16[2];
          *(undefined8 *)(lVar19 + 0xfc) = *(undefined8 *)((long)plVar16 + 0x114);
          *(undefined4 *)(lVar19 + 0x104) = uVar33;
          *(int *)(lVar19 + 0x108) = (int)lVar8;
          uStack_110 = 4;
          uStack_10c = 2;
          uStack_120 = 0x100000001;
          uStack_118 = CONCAT44((int)(*(float *)(plVar16 + 2) * *(float *)(plVar16 + 3)),
                                (int)(*(float *)((long)plVar16 + 0x14) * *(float *)(plVar16 + 2)));
          func_0x000107c2b054(&fStack_160,&DAT_10f58789e);
          FUN_10aba6710(param_4,param_5,0,&fStack_160,1,&uStack_120);
          uVar13 = (ulong)*(ushort *)(param_5 + 4);
          uVar15 = (*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x18) >> 4) *
                   -0x5555555555555555;
          uStack_158 = (long *)CONCAT44(uStack_158._4_4_,(float)uStack_158);
          if (uVar15 < uVar13 || uVar15 - uVar13 == 0) goto LAB_10ababf18;
          plVar14 = (long *)(*(long *)(param_4 + 0x18) + uVar13 * 0x30);
          uStack_158 = (long *)CONCAT44(uStack_158._4_4_,(float)uStack_158);
          if (plVar14[1] == *plVar14) goto LAB_10ababf18;
          uVar13 = (ulong)*(uint *)(*plVar14 + 4);
          uStack_158 = (long *)CONCAT44(uStack_158._4_4_,(float)uStack_158);
          if ((ulong)(plVar14[4] - plVar14[3] >> 4) <= uVar13) goto LAB_10ababf18;
          puVar6 = (undefined8 *)(plVar14[3] + uVar13 * 0x10);
          plVar14 = (long *)puVar6[1];
          uStack_130 = *puVar6;
          if (plVar14 == (long *)0x0) {
            plStack_128 = (long *)0x0;
          }
          else {
            plVar1 = plVar14 + 1;
            do {
              cVar4 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar20) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              cVar4 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar20) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              lVar8 = *plVar1;
              cVar4 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar20) {
                *plVar1 = lVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            plStack_128 = plVar14;
            if (lVar8 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
            }
          }
          if (lStack_150 < 0) {
            __ZdlPv(CONCAT44(fStack_15c,fStack_160));
          }
          fStack_160 = (float)param_4;
          fStack_15c = (float)((ulong)param_4 >> 0x20);
          pppuStack_148 = &ppuStack_c8;
          puStack_140 = &uStack_120;
          puStack_138 = &uStack_130;
          lStack_150 = param_5;
          uStack_158 = plVar16;
          func_0x000107c2b054(&uStack_178,&UNK_10f69735f);
          FUN_10abac158(&fStack_160,0,&uStack_178,1);
          if (uStack_168 < 0) {
            __ZdlPv(uStack_178);
          }
          func_0x000107c2b054(&uStack_178,&UNK_10f69736c);
          FUN_10abac158(&fStack_160,1,&uStack_178,2);
          if (uStack_168 < 0) {
            __ZdlPv(uStack_178);
          }
          func_0x000107c2b054(&uStack_178,&UNK_10f697379);
          FUN_10abac158(&fStack_160,2,&uStack_178,3);
          if (uStack_168 < 0) {
            __ZdlPv(uStack_178);
          }
          func_0x000107c2b054(&uStack_178,&UNK_10f697386);
          FUN_10abac158(&fStack_160,3,&uStack_178,4);
          if (uStack_168 < 0) {
            __ZdlPv(uStack_178);
          }
          func_0x000107c2b054(&uStack_178,&UNK_10f697394);
          FUN_10abac158(&fStack_160,4,&uStack_178,5);
          if (uStack_168 < 0) {
            __ZdlPv(uStack_178);
          }
          func_0x000107c2b054(&uStack_178,&UNK_10f6973a2);
          FUN_10abac158(&fStack_160,5,&uStack_178,6);
          if (uStack_168 < 0) {
            __ZdlPv(uStack_178);
          }
          func_0x000107c2b054(&uStack_178,&UNK_10f6973b0);
          FUN_10aba6710(param_4,param_5,7,&uStack_178,0,&uStack_120);
          FUN_10abdbb7c(&lStack_e0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20),
                        *(undefined2 *)(param_5 + 4),7);
          FUN_10abac4d0(param_4 + 0xd0,&lStack_e0);
          plVar14 = plStack_d8;
          if (plStack_d8 != (long *)0x0) {
            plVar1 = plStack_d8 + 1;
            do {
              lVar8 = *plVar1;
              cVar4 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar20) {
                *plVar1 = lVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
            }
          }
          if (uStack_168 < 0) {
            __ZdlPv(uStack_178);
          }
          func_0x000107c2b054(&uStack_178,&UNK_10f6973bd);
          FUN_10aba6710(param_4,param_5,8,&uStack_178,0,&uStack_120);
          FUN_10abdbb7c(&lStack_e0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20),
                        *(undefined2 *)(param_5 + 4),8);
          FUN_10abac4d0(param_4 + 0xe0,&lStack_e0);
          plVar14 = plStack_d8;
          if (plStack_d8 != (long *)0x0) {
            plVar1 = plStack_d8 + 1;
            do {
              lVar8 = *plVar1;
              cVar4 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar20) {
                *plVar1 = lVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
            }
          }
          if (uStack_168 < 0) {
            __ZdlPv(uStack_178);
          }
          func_0x000107c2b054(&uStack_178,&UNK_10f6973ca);
          FUN_10aba6710(param_4,param_5,9,&uStack_178,0,&uStack_120);
          FUN_10abdbb7c(&lStack_e0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20),
                        *(undefined2 *)(param_5 + 4),9);
          FUN_10abac4d0(param_4 + 0xf0,&lStack_e0);
          if (plStack_d8 != (long *)0x0) {
            plVar14 = plStack_d8 + 1;
            do {
              lVar8 = *plVar14;
              cVar4 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar20) {
                *plVar14 = lVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
            }
          }
          if (uStack_168._7_1_ < '\0') {
            __ZdlPv(uStack_178);
          }
          uStack_188 = 0x8000000000000000;
          uStack_180 = 6;
          lVar8 = param_4;
          FUN_10aba5a90(param_4,param_5,6,&uStack_188);
          lVar19 = *(long *)(param_4 + 0xd0);
          plStack_d8 = *(long **)(lVar19 + 0x20);
          lStack_e0 = *(long *)(lVar19 + 0x18);
          if (*(long *)(lVar19 + 0x20) != 0) {
            plVar14 = (long *)(*(long *)(lVar19 + 0x20) + 8);
            do {
              cVar4 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar20) {
                *plVar14 = *plVar14 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_178 = 0;
          uStack_170 = 0;
          uStack_168 = 0;
          FUN_10a5e7178(&uStack_178,&lStack_e0,auStack_d0,1);
          FUN_10a5d2c88(lVar8,&uStack_178);
          puStack_198 = &uStack_178;
          FUN_10a3f9078(&puStack_198);
          plVar14 = plStack_d8;
          if (plStack_d8 != (long *)0x0) {
            plVar1 = plStack_d8 + 1;
            do {
              lVar8 = *plVar1;
              cVar4 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar20) {
                *plVar1 = lVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
            }
          }
          dVar28 = (double)NEON_ucvtf((ulong)*(uint *)(plVar16 + 4));
          _log2();
          *(int *)(plVar16 + 0x25) = (int)dVar28;
          FUN_10abdbb7c(&lStack_e0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20),
                        *(undefined2 *)(param_5 + 4),7);
          FUN_10abdbb7c(&puStack_198,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20)
                        ,*(undefined2 *)(param_5 + 4),8);
          if ((int)plVar16[0x25] != 0) {
            uVar17 = 0;
            bVar20 = true;
            do {
              iStack_1a0 = uVar17 + 7;
              uStack_1a8 = CONCAT44(0x80000000,uVar17);
              if (bVar20) {
                lVar8 = param_4;
                FUN_10aba5a90(param_4,param_5,7,&uStack_1a8);
                plStack_e8 = (long *)puStack_198[4];
                uStack_f0 = puStack_198[3];
                if (puStack_198[4] != 0) {
                  plVar14 = (long *)(puStack_198[4] + 8);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar5) {
                      *plVar14 = *plVar14 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                uStack_178 = 0;
                uStack_170 = 0;
                uStack_168 = 0;
                FUN_10a5e7178(&uStack_178,&uStack_f0,&lStack_e0,1);
                FUN_10a5d2c88(lVar8,&uStack_178);
                puStack_f8 = &uStack_178;
                FUN_10a3f9078(&puStack_f8);
                if (plStack_e8 != (long *)0x0) {
                  plVar14 = plStack_e8 + 1;
                  do {
                    lVar8 = *plVar14;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar5) {
                      *plVar14 = lVar8 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
LAB_10ababda8:
                  plVar14 = plStack_e8;
                  if (lVar8 == 0) {
                    (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
                  }
                }
              }
              else {
                lVar8 = param_4;
                FUN_10aba5a90(param_4,param_5,8,&uStack_1a8);
                plStack_e8 = *(long **)(lStack_e0 + 0x20);
                uStack_f0 = *(undefined8 *)(lStack_e0 + 0x18);
                if (*(long *)(lStack_e0 + 0x20) != 0) {
                  plVar14 = (long *)(*(long *)(lStack_e0 + 0x20) + 8);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar5) {
                      *plVar14 = *plVar14 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                uStack_178 = 0;
                uStack_170 = 0;
                uStack_168 = 0;
                FUN_10a5e7178(&uStack_178,&uStack_f0,&lStack_e0,1);
                FUN_10a5d2c88(lVar8,&uStack_178);
                puStack_f8 = &uStack_178;
                FUN_10a3f9078(&puStack_f8);
                if (plStack_e8 != (long *)0x0) {
                  plVar14 = plStack_e8 + 1;
                  do {
                    lVar8 = *plVar14;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar5) {
                      *plVar14 = lVar8 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  goto LAB_10ababda8;
                }
              }
              bVar20 = (bool)(bVar20 ^ 1);
              uVar17 = uVar17 + 1;
              uVar3 = *(uint *)(plVar16 + 0x25);
            } while (uVar17 < uVar3);
            if (uVar3 != 0) {
              uStack_1a8 = 0x8000000000000000;
              iStack_1a0 = uVar3 + 8;
              lVar8 = param_4;
              FUN_10aba5a90(param_4,param_5,9,&uStack_1a8);
              lVar19 = *(long *)(param_4 + 0xf0);
              plStack_e8 = *(long **)(lVar19 + 0x20);
              uStack_f0 = *(undefined8 *)(lVar19 + 0x18);
              if (*(long *)(lVar19 + 0x20) != 0) {
                plVar16 = (long *)(*(long *)(lVar19 + 0x20) + 8);
                do {
                  cVar4 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar20) {
                    *plVar16 = *plVar16 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              uStack_178 = 0;
              uStack_170 = 0;
              uStack_168 = 0;
              FUN_10a5e7178(&uStack_178,&uStack_f0,&lStack_e0,1);
              FUN_10a5d2c88(lVar8,&uStack_178);
              puStack_f8 = &uStack_178;
              FUN_10a3f9078(&puStack_f8);
              FUN_10a3f90e8(&uStack_f0);
            }
          }
          if (plStack_190 != (long *)0x0) {
            plVar16 = plStack_190 + 1;
            do {
              lVar8 = *plVar16;
              cVar4 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar20) {
                *plVar16 = lVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plStack_190 + 0x10))(plStack_190);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_190);
            }
          }
          plVar16 = plStack_d8;
          if (plStack_d8 != (long *)0x0) {
            plVar14 = plStack_d8 + 1;
            do {
              lVar8 = *plVar14;
              cVar4 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar20) {
                *plVar14 = lVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
            }
          }
          if (plStack_128 == (long *)0x0) goto LAB_10abab788;
          plVar16 = plStack_128 + 1;
          do {
            lVar8 = *plVar16;
            cVar4 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar20) {
              *plVar16 = lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            plVar14 = plStack_128;
          } while (cVar4 != '\0');
          goto LAB_10abab3a0;
        }
        if ((bRam000000011330a9e8 & 1) != 0) {
          puVar10 = &UNK_10f697298;
          uVar27 = 0xa8;
LAB_10abab73c:
          func_0x00010ae06f08(0,1,&UNK_10f6970b3,&UNK_10f6971e1,uVar27,puVar10);
        }
LAB_10abab758:
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f6970b3,&UNK_10f6970f4,0x56,&UNK_10f69718d);
        }
      }
LAB_10abab788:
      if (pppuStack_b0 == &ppuStack_c8) {
        lVar8 = 0x20;
      }
      else {
        if (pppuStack_b0 == (undefined ***)0x0) goto LAB_10abab7b4;
        lVar8 = 0x28;
      }
      (**(code **)((long)*pppuStack_b0 + lVar8))();
      goto LAB_10abab7b4;
    }
  }
  FUN_10a0edfc4(&fStack_160);
LAB_10ababf18:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ababf1c);
  (*pcVar7)();
}



/* Entry: 10abac094; end: 10abac157;  */

long * FUN_10abac094(long *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  undefined **ppuVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined4 *puVar16;
  long lVar17;
  long lVar18;
  long lStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined **ppuStack_108;
  long alStack_100 [3];
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  long alStack_c0 [3];
  long *plStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  puVar4 = (undefined4 *)param_1[1];
  if (puVar4 < (undefined4 *)param_1[2]) {
    puVar16 = puVar4 + 1;
    *puVar4 = *param_2;
    plVar10 = param_1;
LAB_10abac140:
    param_1[1] = (long)puVar16;
    return plVar10;
  }
  lVar15 = (long)puVar4 - *param_1;
  uVar1 = (lVar15 >> 2) + 1;
  if (uVar1 >> 0x3e == 0) {
    uVar12 = param_1[2] - *param_1;
    uVar13 = (long)uVar12 >> 1;
    if (uVar13 <= uVar1) {
      uVar13 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar12) {
      uVar13 = 0x3fffffffffffffff;
    }
    plVar11 = param_1;
    FUN_10a1941d4();
    lVar18 = *param_1;
    puVar4 = (undefined4 *)((long)plVar11 + lVar15);
    lVar15 = (long)puVar4 - (param_1[1] - lVar18);
    puVar16 = puVar4 + 1;
    *puVar4 = *param_2;
    _memcpy(lVar15,lVar18);
    plVar10 = (long *)*param_1;
    *param_1 = lVar15;
    param_1[1] = (long)puVar16;
    param_1[2] = (long)plVar11 + uVar13 * 4;
    if (plVar10 != (long *)0x0) {
      __ZdlPv();
    }
    goto LAB_10abac140;
  }
  FUN_10a1941c0();
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *param_1;
  lVar15 = param_1[2];
  func_0x00010a194208(alStack_100,param_1[3]);
  puVar5 = (undefined8 *)param_1[4];
  uStack_148 = puVar5[1];
  uStack_150 = *puVar5;
  uStack_140 = puVar5[2];
  lVar18 = *(long *)param_1[5];
  plVar11 = (long *)((long *)param_1[5])[1];
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = *plVar10 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lStack_160 = lVar18;
  plStack_158 = plVar11;
  FUN_10aba6710(lVar17,lVar15,param_4,param_3,0,&uStack_150);
  FUN_10abdbb7c(&lStack_118,*(undefined8 *)(lVar17 + 0x18),*(undefined8 *)(lVar17 + 0x20),
                *(undefined2 *)(lVar15 + 4),param_4);
  uStack_d0 = 0x8000000000000000;
  uStack_c8 = 0;
  lStack_a0 = 0;
  plStack_a8 = (long *)0x0;
  uStack_90 = 0;
  lStack_98 = 0;
  FUN_10aba59fc(alStack_c0,alStack_100);
  uStack_c8 = SUB84(param_2,0);
  FUN_10aba5824(lVar17,lVar15,param_2,&uStack_d0);
  ppuStack_d8 = *(undefined ***)(lStack_118 + 0x20);
  uStack_e0 = *(undefined8 *)(lStack_118 + 0x18);
  if (*(long *)(lStack_118 + 0x20) != 0) {
    plVar10 = (long *)(*(long *)(lStack_118 + 0x20) + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = *plVar10 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puStack_130 = (undefined *)0x0;
  uStack_128 = 0;
  uStack_120 = 0;
  FUN_10a5e7178(&puStack_130,&uStack_e0,&uStack_d0,1);
  FUN_10a5d2c88(lVar17,&puStack_130);
  ppuStack_108 = &puStack_130;
  FUN_10a3f9078(&ppuStack_108);
  ppuVar8 = ppuStack_d8;
  if (ppuStack_d8 != (undefined **)0x0) {
    ppuVar2 = ppuStack_d8 + 1;
    do {
      puVar14 = *ppuVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar7) {
        *ppuVar2 = puVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (puVar14 == (undefined *)0x0) {
      (**(code **)(*ppuStack_d8 + 0x10))(ppuStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
    }
  }
  plVar10 = *(long **)(lVar18 + 0x18);
  func_0x00010a5d2bb4(lVar17 + 0x180);
  *(undefined1 *)(lVar17 + 0x19d) = 1;
  *(undefined4 *)(lVar17 + 0x198) = 0x3f800000;
  puStack_130 = &UNK_10f653c20;
  uStack_128 = 0x21;
  if (*(long *)(*(long *)(*(long *)(lVar15 + 8) + 0x100) + 0x260) == 0) {
    FUN_10a0edfc4(&puStack_130);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10abac444);
    (*pcVar9)();
  }
  FUN_10a244d68();
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (plStack_a8 == alStack_c0) {
    lVar15 = 0x20;
LAB_10abac360:
    (**(code **)(*plStack_a8 + lVar15))();
  }
  else if (plStack_a8 != (long *)0x0) {
    lVar15 = 0x28;
    goto LAB_10abac360;
  }
  if (plStack_110 != (long *)0x0) {
    plVar3 = plStack_110 + 1;
    do {
      lVar15 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_110 + 0x10))(plStack_110);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_110);
    }
  }
  if (plVar11 != (long *)0x0) {
    plVar3 = plVar11 + 1;
    do {
      lVar15 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_e8;
  if (plStack_e8 == alStack_100) {
    lVar15 = 0x20;
LAB_10abac3f8:
    (**(code **)(*plStack_e8 + lVar15))();
  }
  else if (plStack_e8 != (long *)0x0) {
    lVar15 = 0x28;
    goto LAB_10abac3f8;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return plVar11;
  }
  ___stack_chk_fail();
  ppuStack_108 = ppuVar8;
  FUN_10a3f9078(&ppuStack_108);
  FUN_10a3f90e8(&uStack_e0);
  FUN_10aba7b24(&uStack_d0);
  func_0x00010abda948(&lStack_118);
  func_0x00010abda8f0(&lStack_160);
  if (plStack_e8 == alStack_100) {
    lVar15 = 0x20;
  }
  else {
    if (plStack_e8 == (long *)0x0) goto LAB_10abac4c8;
    lVar15 = 0x28;
  }
  (**(code **)(*plStack_e8 + lVar15))();
LAB_10abac4c8:
  __Unwind_Resume();
  lVar18 = plVar10[1];
  lVar15 = *plVar10;
  *plVar10 = 0;
  plVar10[1] = 0;
  plVar10 = (long *)plVar11[1];
  plVar11[1] = lVar18;
  *plVar11 = lVar15;
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 1;
    do {
      lVar15 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return plVar11;
}



/* Entry: 10abac158; end: 10abac4cf;  */

long * FUN_10abac158(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined **ppuStack_d8;
  long alStack_d0 [3];
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *param_1;
  lVar10 = param_1[2];
  func_0x00010a194208(alStack_d0,param_1[3]);
  puVar3 = (undefined8 *)param_1[4];
  uStack_118 = puVar3[1];
  uStack_120 = *puVar3;
  uStack_110 = puVar3[2];
  lVar13 = *(long *)param_1[5];
  plVar8 = (long *)((long *)param_1[5])[1];
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lStack_130 = lVar13;
  plStack_128 = plVar8;
  FUN_10aba6710(lVar12,lVar10,param_4,param_3,0,&uStack_120);
  FUN_10abdbb7c(&lStack_e8,*(undefined8 *)(lVar12 + 0x18),*(undefined8 *)(lVar12 + 0x20),
                *(undefined2 *)(lVar10 + 4),param_4);
  uStack_a0 = 0x8000000000000000;
  uStack_98 = 0;
  lStack_70 = 0;
  plStack_78 = (long *)0x0;
  uStack_60 = 0;
  lStack_68 = 0;
  FUN_10aba59fc(alStack_90,alStack_d0);
  uStack_98 = (undefined4)param_2;
  FUN_10aba5824(lVar12,lVar10,param_2,&uStack_a0);
  ppuStack_a8 = *(undefined ***)(lStack_e8 + 0x20);
  uStack_b0 = *(undefined8 *)(lStack_e8 + 0x18);
  if (*(long *)(lStack_e8 + 0x20) != 0) {
    plVar9 = (long *)(*(long *)(lStack_e8 + 0x20) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puStack_100 = (undefined *)0x0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  FUN_10a5e7178(&puStack_100,&uStack_b0,&uStack_a0,1);
  FUN_10a5d2c88(lVar12,&puStack_100);
  ppuStack_d8 = &puStack_100;
  FUN_10a3f9078(&ppuStack_d8);
  ppuVar6 = ppuStack_a8;
  if (ppuStack_a8 != (undefined **)0x0) {
    ppuVar1 = ppuStack_a8 + 1;
    do {
      puVar11 = *ppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar5) {
        *ppuVar1 = puVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
    }
  }
  plVar9 = *(long **)(lVar13 + 0x18);
  func_0x00010a5d2bb4(lVar12 + 0x180);
  *(undefined1 *)(lVar12 + 0x19d) = 1;
  *(undefined4 *)(lVar12 + 0x198) = 0x3f800000;
  puStack_100 = &UNK_10f653c20;
  uStack_f8 = 0x21;
  if (*(long *)(*(long *)(*(long *)(lVar10 + 8) + 0x100) + 0x260) == 0) {
    FUN_10a0edfc4(&puStack_100);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10abac444);
    (*pcVar7)();
  }
  FUN_10a244d68();
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (plStack_78 == alStack_90) {
    lVar10 = 0x20;
LAB_10abac360:
    (**(code **)(*plStack_78 + lVar10))();
  }
  else if (plStack_78 != (long *)0x0) {
    lVar10 = 0x28;
    goto LAB_10abac360;
  }
  if (plStack_e0 != (long *)0x0) {
    plVar2 = plStack_e0 + 1;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 1;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = plStack_b8;
  if (plStack_b8 == alStack_d0) {
    lVar10 = 0x20;
LAB_10abac3f8:
    (**(code **)(*plStack_b8 + lVar10))();
  }
  else if (plStack_b8 != (long *)0x0) {
    lVar10 = 0x28;
    goto LAB_10abac3f8;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar8;
  }
  ___stack_chk_fail();
  ppuStack_d8 = ppuVar6;
  FUN_10a3f9078(&ppuStack_d8);
  FUN_10a3f90e8(&uStack_b0);
  FUN_10aba7b24(&uStack_a0);
  func_0x00010abda948(&lStack_e8);
  func_0x00010abda8f0(&lStack_130);
  if (plStack_b8 == alStack_d0) {
    lVar10 = 0x20;
  }
  else {
    if (plStack_b8 == (long *)0x0) goto LAB_10abac4c8;
    lVar10 = 0x28;
  }
  (**(code **)(*plStack_b8 + lVar10))();
LAB_10abac4c8:
  __Unwind_Resume();
  lVar13 = plVar9[1];
  lVar10 = *plVar9;
  *plVar9 = 0;
  plVar9[1] = 0;
  plVar9 = (long *)plVar8[1];
  plVar8[1] = lVar13;
  *plVar8 = lVar10;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 1;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return plVar8;
}



/* Entry: 10abac4d0; end: 10abac533;  */

undefined8 * FUN_10abac4d0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10abac534; end: 10abac53b;  */

undefined8 FUN_10abac534(void)

{
  return 1;
}



/* Entry: 10abac53c; end: 10abac90f;  */

void FUN_10abac53c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 auStack_100 [2];
  char cStack_e9;
  undefined1 auStack_e0 [64];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  float fStack_88;
  undefined8 uStack_80;
  float fStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  uVar6 = (ulong)*(ushort *)(param_2 + 4) - 1;
  uVar8 = (*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 3) * 0x51b3bea3677d46cf;
  if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10abac8e0);
    (*pcVar4)();
  }
  lVar10 = *(long *)(param_1 + 0x58) + (long)(int)uVar6 * 0x178;
  uVar1 = *(ushort *)(param_2 + 6);
  uVar6 = (ulong)uVar1;
  bVar2 = true;
  uVar5 = (uint)uVar1;
  if (uVar1 < 4) {
    if (uVar5 == 1 || uVar1 == 0) {
      if (uVar1 == 0) goto LAB_10abac5e4;
      if (uVar1 != 1) {
        return;
      }
      fStack_9c = *(float *)(lVar10 + 0x118);
      fVar11 = fStack_9c * 0.5;
      uStack_70 = *(undefined8 *)(lVar10 + 0x120);
      fVar12 = *(float *)(lVar10 + 0x18);
    }
    else {
      if (uVar5 != 2) {
        if (uVar1 != 3) {
          return;
        }
        uVar6 = 0;
        lVar7 = 0x14;
        lVar9 = 0x114;
        goto LAB_10abac670;
      }
      fStack_9c = *(float *)(lVar10 + 0x11c);
      fVar11 = fStack_9c * 0.5;
      uStack_70 = *(undefined8 *)(lVar10 + 0x120);
      fVar12 = *(float *)(lVar10 + 0x1c);
    }
  }
  else {
    if (3 < uVar5 - 6) {
      if (uVar5 == 4) {
        lVar7 = 0x18;
        lVar9 = 0x118;
        uVar6 = 1;
      }
      else {
        if (uVar1 != 5) {
          return;
        }
        uVar6 = 2;
        lVar7 = 0x1c;
        lVar9 = 0x11c;
      }
LAB_10abac670:
      bVar2 = false;
      fStack_9c = *(float *)(lVar10 + lVar9);
      fVar11 = fStack_9c * 0.5;
      fVar12 = *(float *)(lVar10 + lVar7);
      fStack_5c = fStack_9c * *(float *)(lVar10 + 0x10) * 0.5;
      uStack_70 = CONCAT44(*(float *)(lVar10 + 0x120) + fStack_9c / fVar12,
                           *(float *)(lVar10 + 0x120));
      bVar3 = true;
      goto LAB_10abac6a4;
    }
    bVar2 = false;
LAB_10abac5e4:
    uVar6 = 0;
    fStack_9c = *(float *)(lVar10 + 0x114);
    fVar11 = fStack_9c * 0.5;
    uStack_70 = *(undefined8 *)(lVar10 + 0x120);
    fVar12 = *(float *)(lVar10 + 0x14);
  }
  bVar3 = false;
  fStack_5c = fVar11;
LAB_10abac6a4:
  fStack_60 = -fStack_5c;
  uStack_68 = 0;
  lVar7 = lVar10 + uVar6 * 0xc;
  uStack_80 = *(undefined8 *)(lVar7 + 0x24);
  fStack_78 = fVar11 + 1.0 + *(float *)(lVar7 + 0x2c);
  fStack_94 = *(float *)(lVar10 + 0x10);
  fVar11 = fStack_9c * -0.5 + fStack_9c * fStack_94 * 0.5;
  uStack_90 = CONCAT44((float)((ulong)uStack_80 >> 0x20) + fVar11 + 0.0,
                       (float)uStack_80 + fVar11 + 0.0);
  fStack_88 = fStack_78 + 0.0;
  fStack_a0 = (float)uVar6;
  lVar7 = *(long *)(param_2 + 0x10);
  fStack_98 = fVar12;
  fStack_58 = fStack_60;
  fStack_54 = fStack_5c;
  FUN_10a015150(lVar7,param_4);
  func_0x000109519fd0(auStack_e0,lVar7 + 4,lVar10 + uVar6 * 0x40 + 0x48);
  if ((bVar2) || (bVar3)) {
    func_0x000107c2b074(auStack_100,&PTR_DAT_110c52e48);
    FUN_10a015dcc(param_3,auStack_100,&fStack_a0);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
    func_0x000107c2b074(auStack_100,&PTR_DAT_110c52e60);
    FUN_10a015dcc(param_3,auStack_100,&fStack_60);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
    func_0x000107c2b074(auStack_100,&PTR_DAT_110c52e78);
    FUN_10a015dcc(param_3,auStack_100,&uStack_70);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
    func_0x000107c2b074(auStack_100,&PTR_DAT_110c52e90);
    FUN_10abac910(param_3,auStack_100,auStack_e0);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
    if (bVar2) {
      func_0x000107c2b074(auStack_100,&PTR_DAT_110c52ea8);
      func_0x00010a01f3c4(param_3,auStack_100,&uStack_80);
      if (cStack_e9 < '\0') {
        __ZdlPv(auStack_100[0]);
      }
      *(byte *)(param_3 + 0x19) = *(byte *)(param_3 + 0x19) | 2;
      *(undefined1 *)(param_3 + 0x20) = 0xc;
    }
    if (bVar3) {
      *(int *)(param_3 + 0x68) = (int)fVar12;
      func_0x000107c2b074(auStack_100,&PTR_DAT_110c52ea8);
      func_0x00010a01f3c4(param_3,auStack_100,&uStack_90);
      if (cStack_e9 < '\0') {
        __ZdlPv(auStack_100[0]);
      }
      *(byte *)(param_3 + 0x19) = *(byte *)(param_3 + 0x19) | 1;
    }
  }
  return;
}



/* Entry: 10abac910; end: 10abacb3b;  */

void FUN_10abac910(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar9 = *(ulong *)(param_1 + 0xb0);
  if (uVar9 < *(ulong *)(param_1 + 0xa0)) {
    uVar4 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
    uVar6 = uVar9;
    if (uVar9 <= uVar4) {
      uVar6 = uVar4;
    }
    piVar5 = (int *)(*(long *)(param_1 + 0x88) + uVar9 * 0x18 + 0x10);
    do {
      if (uVar6 == uVar9) goto LAB_10abacb38;
      if (*(long *)(piVar5 + -4) == *(long *)(param_2 + 0x18)) {
        if ((short)piVar5[-2] != 0xb) {
          return;
        }
        if (uVar9 < *(ulong *)(param_1 + 0xa8)) {
          if (*piVar5 == 0x40) {
            lVar7 = *(long *)(param_1 + 0xb8) + (ulong)(uint)piVar5[-1];
            _memcmp(lVar7,param_3,0x40);
            if ((int)lVar7 == 0) {
              return;
            }
          }
          FUN_10a048bc4(param_1);
          uVar9 = *(long *)(param_1 + 0xb0) + uVar9;
        }
        plVar10 = (long *)(param_1 + 0xb8);
        lVar3 = *plVar10;
        uVar1 = *(uint *)(param_1 + 0xd0);
        uVar6 = (ulong)uVar1 + 0x40;
        uVar4 = *(long *)(param_1 + 0xc0) - lVar3;
        lVar7 = uVar6 - uVar4;
        if (uVar4 <= uVar6 && lVar7 != 0) {
          func_0x0001092bf294(plVar10,lVar7);
          lVar3 = *plVar10;
        }
        puVar8 = (undefined8 *)(lVar3 + (ulong)uVar1);
        uVar12 = param_3[1];
        uVar11 = *param_3;
        uVar14 = param_3[3];
        uVar13 = param_3[2];
        uVar15 = param_3[4];
        uVar17 = param_3[7];
        uVar16 = param_3[6];
        puVar8[5] = param_3[5];
        puVar8[4] = uVar15;
        puVar8[7] = uVar17;
        puVar8[6] = uVar16;
        puVar8[1] = uVar12;
        *puVar8 = uVar11;
        puVar8[3] = uVar14;
        puVar8[2] = uVar13;
        *(int *)(param_1 + 0xd0) = (int)uVar6;
        uVar6 = (*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3) * -0x5555555555555555;
        if (uVar9 <= uVar6 && uVar6 - uVar9 != 0) {
          lVar7 = *(long *)(param_1 + 0x88) + uVar9 * 0x18;
          *(uint *)(lVar7 + 0xc) = uVar1;
          *(undefined4 *)(lVar7 + 0x10) = 0x40;
          return;
        }
        goto LAB_10abacb38;
      }
      uVar9 = uVar9 + 1;
      piVar5 = piVar5 + 6;
    } while (*(ulong *)(param_1 + 0xa0) != uVar9);
  }
  plVar10 = (long *)(param_1 + 0xb8);
  lVar3 = *plVar10;
  uVar1 = *(uint *)(param_1 + 0xd0);
  uVar9 = (ulong)uVar1 + 0x40;
  uVar6 = *(long *)(param_1 + 0xc0) - lVar3;
  lVar7 = uVar9 - uVar6;
  if (uVar6 <= uVar9 && lVar7 != 0) {
    func_0x0001092bf294(plVar10,lVar7);
    lVar3 = *plVar10;
  }
  puVar8 = (undefined8 *)(lVar3 + (ulong)uVar1);
  uVar12 = param_3[1];
  uVar11 = *param_3;
  uVar14 = param_3[3];
  uVar13 = param_3[2];
  uVar15 = param_3[4];
  uVar17 = param_3[7];
  uVar16 = param_3[6];
  puVar8[5] = param_3[5];
  puVar8[4] = uVar15;
  puVar8[7] = uVar17;
  puVar8[6] = uVar16;
  puVar8[1] = uVar12;
  *puVar8 = uVar11;
  puVar8[3] = uVar14;
  puVar8[2] = uVar13;
  lVar7 = *(long *)(param_1 + 0x88);
  *(int *)(param_1 + 0xd0) = (int)uVar9;
  uVar9 = *(ulong *)(param_1 + 0xa0);
  if (uVar9 < (ulong)((*(long *)(param_1 + 0x90) - lVar7 >> 3) * -0x5555555555555555)) {
    puVar8 = (undefined8 *)(lVar7 + uVar9 * 0x18);
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10a063efc((long *)(param_1 + 0x88),&uStack_58);
    if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x90)) {
LAB_10abacb38:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10abacb3c);
      (*pcVar2)();
    }
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x90) + -0x18);
    uVar9 = *(ulong *)(param_1 + 0xa0);
  }
  *puVar8 = *(undefined8 *)(param_2 + 0x18);
  *(undefined2 *)(puVar8 + 1) = 0xb;
  *(uint *)((long)puVar8 + 0xc) = uVar1;
  *(undefined4 *)(puVar8 + 2) = 0x40;
  *(ulong *)(param_1 + 0xa0) = uVar9 + 1;
  return;
}



/* Entry: 10abacb3c; end: 10abad973;  */

/* WARNING: Removing unreachable block (ram,0x00010abad3fc) */

void FUN_10abacb3c(undefined *******param_1,undefined *******param_2,undefined *******param_3,
                  undefined *******param_4,undefined *******param_5,undefined *******param_6,
                  undefined *param_7)

{
  undefined ******ppppppuVar1;
  undefined *****pppppuVar2;
  long *plVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined *******pppppppuVar8;
  undefined *******pppppppuVar9;
  undefined *******pppppppuVar10;
  undefined *******pppppppuVar11;
  undefined *****pppppuVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined ******ppppppuVar15;
  undefined ****ppppuVar16;
  undefined *******pppppppuVar17;
  undefined *puVar18;
  undefined ******ppppppuVar19;
  ulong uVar20;
  undefined *****pppppuVar21;
  long lVar22;
  undefined *******unaff_x19;
  undefined *****pppppuVar23;
  undefined *******unaff_x20;
  undefined *******unaff_x21;
  undefined *******unaff_x22;
  undefined *******unaff_x23;
  undefined ***unaff_x24;
  ulong uVar24;
  long *plVar25;
  undefined ******unaff_x25;
  undefined ******unaff_x26;
  ulong uVar26;
  undefined *******unaff_x27;
  undefined *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar27;
  undefined4 uVar28;
  double dVar29;
  float fVar30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  char acStack_3d9 [497];
  undefined8 *apuStack_1e8 [2];
  char cStack_1d1;
  undefined *****pppppuStack_1d0;
  undefined *****pppppuStack_1c8;
  undefined ******ppppppuStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *****pppppuStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined ******ppppppuStack_160;
  undefined ******ppppppuStack_158;
  undefined ******ppppppuStack_150;
  undefined *****pppppuStack_148;
  undefined ******ppppppuStack_140;
  undefined ******ppppppuStack_138;
  int aiStack_130 [2];
  undefined ******ppppppuStack_128;
  undefined ******ppppppuStack_120;
  int aiStack_118 [2];
  undefined ******ppppppuStack_110;
  undefined ******ppppppuStack_108;
  undefined **ppuStack_100;
  undefined ******ppppppuStack_f8;
  undefined ******ppppppuStack_f0;
  undefined ***pppuStack_e8;
  undefined *****pppppuStack_e0;
  undefined ******ppppppuStack_d8;
  undefined *****pppppuStack_c8;
  undefined ******appppppuStack_c0 [4];
  undefined ******ppppppuStack_a0;
  undefined ******ppppppuStack_98;
  undefined ******ppppppuStack_90;
  undefined ******ppppppuStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  
  fVar27 = SUB84(param_1,0);
  puVar13 = &stack0xfffffffffffffff0;
  pppppppuVar9 = &ppppppuStack_160;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(ushort *)((long)param_3 + 6);
  pppppppuVar8 = param_2;
  pppppppuVar17 = param_4;
  pppppppuVar10 = param_4;
  if (uVar4 < 8) {
    if (uVar4 == 6) {
      param_5 = (undefined *******)(ulong)*(ushort *)((long)param_3 + 4);
      unaff_x26 = (undefined ******)((long)param_5 + -1);
      unaff_x27 = (undefined *******)param_2[0xb];
      ppppppuVar19 = (undefined ******)
                     (((long)param_2[0xc] - (long)unaff_x27 >> 3) * 0x51b3bea3677d46cf);
      if (ppppppuVar19 < unaff_x26 || (long)ppppppuVar19 - (long)unaff_x26 == 0) {
LAB_10abad778:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10abad77c);
        (*pcVar7)();
      }
      FUN_10abdbb7c(appppppuStack_c0,param_2[3],param_2[4],param_5,4);
      uVar28 = SUB84(appppppuStack_c0[0][1],0);
      puVar14 = (undefined8 *)0x1;
      FUN_10a088744();
      ppppppuVar19 = appppppuStack_c0[1];
      ppuStack_100 = (undefined **)CONCAT44(ppuStack_100._4_4_,uVar28);
      unaff_x24 = &ppuStack_100;
      if (puVar14 == (undefined8 *)0x0) {
        ppppppuStack_f8 = (undefined ******)0x0;
        ppppppuStack_f0 = (undefined ******)0x0;
      }
      else {
        ppppppuStack_f0 = (undefined ******)puVar14[1];
        param_1 = (undefined *******)*puVar14;
        ppppppuStack_f8 = (undefined ******)param_1;
        if (puVar14[1] != 0) {
          plVar25 = (long *)(puVar14[1] + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar6) {
              *plVar25 = *plVar25 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      if ((undefined *******)appppppuStack_c0[1] != (undefined *******)0x0) {
        pppppppuVar17 = (undefined *******)(appppppuStack_c0[1] + 1);
        do {
          ppppppuVar15 = *pppppppuVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
          if (bVar6) {
            *pppppppuVar17 = (undefined ******)((long)ppppppuVar15 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppppuVar15 == (undefined ******)0x0) {
          (*(code *)(*appppppuStack_c0[1])[2])(appppppuStack_c0[1]);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar19);
        }
      }
      FUN_10abdbb7c(appppppuStack_c0,param_2[3],param_2[4],param_5,5);
      aiStack_118[0] = (int)appppppuStack_c0[0][1];
      puVar14 = (undefined8 *)0x1;
      FUN_10a088744();
      ppppppuVar19 = appppppuStack_c0[1];
      unaff_x25 = (undefined ******)aiStack_118;
      if (puVar14 == (undefined8 *)0x0) {
        ppppppuStack_110 = (undefined ******)0x0;
        ppppppuStack_108 = (undefined ******)0x0;
      }
      else {
        ppppppuStack_108 = (undefined ******)puVar14[1];
        param_1 = (undefined *******)*puVar14;
        ppppppuStack_110 = (undefined ******)param_1;
        if (puVar14[1] != 0) {
          plVar25 = (long *)(puVar14[1] + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar6) {
              *plVar25 = *plVar25 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      if ((undefined *******)appppppuStack_c0[1] != (undefined *******)0x0) {
        pppppppuVar17 = (undefined *******)(appppppuStack_c0[1] + 1);
        do {
          ppppppuVar15 = *pppppppuVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
          if (bVar6) {
            *pppppppuVar17 = (undefined ******)((long)ppppppuVar15 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppppuVar15 == (undefined ******)0x0) {
          (*(code *)(*appppppuStack_c0[1])[2])(appppppuStack_c0[1]);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar19);
        }
      }
      pppppppuVar17 = (undefined *******)param_2[4];
      param_6 = (undefined *******)0x6;
      FUN_10abdbb7c(appppppuStack_c0,param_2[3],pppppppuVar17,param_5,6);
      pppppppuVar8 = (undefined *******)appppppuStack_c0[0][1];
      param_3 = (undefined *******)0x1;
      FUN_10a088744();
      unaff_x21 = (undefined *******)appppppuStack_c0[1];
      aiStack_130[0] = (int)pppppppuVar8;
      unaff_x22 = (undefined *******)aiStack_130;
      if (param_3 == (undefined *******)0x0) {
        ppppppuStack_128 = (undefined ******)0x0;
        ppppppuStack_120 = (undefined ******)0x0;
      }
      else {
        ppppppuStack_120 = param_3[1];
        param_1 = (undefined *******)*param_3;
        ppppppuStack_128 = (undefined ******)param_1;
        if (param_3[1] != (undefined ******)0x0) {
          ppppppuVar19 = param_3[1] + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar19,0x10);
            if (bVar6) {
              *ppppppuVar19 = (undefined *****)((long)*ppppppuVar19 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      fVar27 = SUB84(param_1,0);
      if ((undefined *******)appppppuStack_c0[1] != (undefined *******)0x0) {
        pppppppuVar10 = (undefined *******)(appppppuStack_c0[1] + 1);
        do {
          ppppppuVar19 = *pppppppuVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
          if (bVar6) {
            *pppppppuVar10 = (undefined ******)((long)ppppppuVar19 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppppuVar19 == (undefined ******)0x0) {
          (*(code *)(*appppppuStack_c0[1])[2])(appppppuStack_c0[1]);
          pppppppuVar8 = unaff_x21;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      if (((int)ppuStack_100 == 2 && aiStack_118[0] == 2) && aiStack_130[0] == 2) {
        param_2 = param_2 + 0x16;
        FUN_10aba93b0(param_2);
        appppppuStack_c0[1] = ppppppuStack_f0;
        appppppuStack_c0[0] = ppppppuStack_f8;
        if ((undefined *******)ppppppuStack_f0 != (undefined *******)0x0) {
          pppppppuVar17 = (undefined *******)(ppppppuStack_f0 + 1);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
            if (bVar6) {
              *pppppppuVar17 = (undefined ******)((long)*pppppppuVar17 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        appppppuStack_c0[3] = ppppppuStack_108;
        appppppuStack_c0[2] = ppppppuStack_110;
        if ((undefined *******)ppppppuStack_108 != (undefined *******)0x0) {
          pppppppuVar17 = (undefined *******)(ppppppuStack_108 + 1);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
            if (bVar6) {
              *pppppppuVar17 = (undefined ******)((long)*pppppppuVar17 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        ppppppuStack_98 = ppppppuStack_120;
        ppppppuStack_a0 = ppppppuStack_128;
        if ((undefined *******)ppppppuStack_120 != (undefined *******)0x0) {
          pppppppuVar17 = (undefined *******)(ppppppuStack_120 + 1);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
            if (bVar6) {
              *pppppppuVar17 = (undefined ******)((long)*pppppppuVar17 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        pppppuStack_148 = (undefined *****)0x0;
        ppppppuStack_140 = (undefined ******)0x0;
        ppppppuStack_138 = (undefined ******)0x0;
        pppppppuVar8 = (undefined *******)ppppppuStack_128;
        FUN_10a756a10(&pppppuStack_148,appppppuStack_c0,&ppppppuStack_90,3);
        ppppppuStack_d8 = (undefined ******)(unaff_x27 + (long)(int)unaff_x26 * 0x2f);
        pppppuStack_e0 = (undefined *****)&PTR_FUN_110c53ad8;
        pppppuStack_c8 = (undefined *****)&pppppuStack_e0;
        ppppppuStack_158 = (undefined ******)0x0;
        ppppppuStack_150 = (undefined ******)0x0;
        ppppppuStack_160 = (undefined ******)0x0;
        pppppppuVar17 = (undefined *******)&pppppuStack_148;
        param_5 = (undefined *******)&pppppuStack_e0;
        param_6 = &ppppppuStack_160;
        param_7 = (undefined *)0x0;
        FUN_10ab10a0c(param_2,param_4,pppppppuVar17,param_5,param_6,0);
        if ((undefined *******)ppppppuStack_160 != (undefined *******)0x0) {
          ppppppuStack_158 = ppppppuStack_160;
          __ZdlPv();
        }
        if ((undefined ******)pppppuStack_c8 == &pppppuStack_e0) {
          lVar22 = 0x20;
LAB_10abad3ac:
          (**(code **)((long)*pppppuStack_c8 + lVar22))();
        }
        else if ((undefined ******)pppppuStack_c8 != (undefined ******)0x0) {
          lVar22 = 0x28;
          goto LAB_10abad3ac;
        }
        pppppuStack_178 = (undefined *****)&pppppuStack_148;
        FUN_10a18ba48(&pppppuStack_178);
        lVar22 = 0x20;
        param_4 = appppppuStack_c0;
        do {
          func_0x00010a0523dc((undefined *)((long)param_4 + lVar22));
          fVar27 = SUB84(pppppppuVar8,0);
          lVar22 = lVar22 + -0x10;
        } while (lVar22 != -0x10);
        param_3 = (undefined *******)&UNK_10f697494;
        pppppppuVar8 = appppppuStack_c0;
        func_0x000107c2b054();
      }
      else if ((bRam000000011330a9e8 & 1) != 0) {
        pppppppuVar17 = (undefined *******)&UNK_10f6970b3;
        param_5 = (undefined *******)&UNK_10f6973db;
        param_7 = &UNK_10f697450;
        pppppppuVar8 = (undefined *******)0x0;
        param_3 = (undefined *******)0x1;
        param_6 = (undefined *******)0x232;
        func_0x00010ae06f08();
      }
      pppppppuVar10 = (undefined *******)ppppppuStack_120;
      if ((undefined *******)ppppppuStack_120 != (undefined *******)0x0) {
        pppppppuVar11 = (undefined *******)(ppppppuStack_120 + 1);
        do {
          ppppppuVar19 = *pppppppuVar11;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
          if (bVar6) {
            *pppppppuVar11 = (undefined ******)((long)ppppppuVar19 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppppuVar19 == (undefined ******)0x0) {
          (*(code *)(*ppppppuStack_120)[2])(ppppppuStack_120);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppppppuVar8 = pppppppuVar10;
        }
      }
      pppppppuVar10 = (undefined *******)ppppppuStack_108;
      if ((undefined *******)ppppppuStack_108 != (undefined *******)0x0) {
        pppppppuVar11 = (undefined *******)(ppppppuStack_108 + 1);
        do {
          ppppppuVar19 = *pppppppuVar11;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
          if (bVar6) {
            *pppppppuVar11 = (undefined ******)((long)ppppppuVar19 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppppuVar19 == (undefined ******)0x0) {
          (*(code *)(*ppppppuStack_108)[2])(ppppppuStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppppppuVar8 = pppppppuVar10;
        }
      }
      pppppppuVar10 = param_4;
      if ((undefined *******)ppppppuStack_f0 != (undefined *******)0x0) {
        pppppppuVar10 = (undefined *******)(ppppppuStack_f0 + 1);
        do {
          ppppppuVar19 = *pppppppuVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
          if (bVar6) {
            *pppppppuVar10 = (undefined ******)((long)ppppppuVar19 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
          pppppppuVar11 = (undefined *******)ppppppuStack_f0;
        } while (cVar5 != '\0');
        goto LAB_10abad724;
      }
LAB_10abad740:
      param_4 = pppppppuVar17;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        return;
      }
      goto LAB_10abad77c;
    }
    if (uVar4 != 7) goto LAB_10abad740;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) goto LAB_10abad77c;
    param_5 = (undefined *******)0x7;
    param_6 = (undefined *******)0x8;
    param_7 = (undefined *)0x7;
  }
  else {
    if (uVar4 != 8) {
      if (uVar4 != 9) goto LAB_10abad740;
      unaff_x21 = (undefined *******)(ulong)*(ushort *)((long)param_3 + 4);
      unaff_x28 = (undefined *)((long)unaff_x21 + -1);
      unaff_x25 = param_2[0xb];
      puVar18 = (undefined *)(((long)param_2[0xc] - (long)unaff_x25 >> 3) * 0x51b3bea3677d46cf);
      if (puVar18 < unaff_x28 || (long)puVar18 - (long)unaff_x28 == 0) goto LAB_10abad778;
      pppppppuVar17 = (undefined *******)param_2[4];
      param_6 = (undefined *******)0x8;
      param_5 = unaff_x21;
      FUN_10abdbb7c(appppppuStack_c0,param_2[3],pppppppuVar17,unaff_x21,8);
      pppppppuVar8 = (undefined *******)appppppuStack_c0[0][1];
      param_3 = (undefined *******)0x1;
      FUN_10a088744();
      unaff_x22 = (undefined *******)appppppuStack_c0[1];
      aiStack_118[0] = (int)pppppppuVar8;
      unaff_x24 = (undefined ***)aiStack_118;
      if (param_3 == (undefined *******)0x0) {
        ppppppuStack_110 = (undefined ******)0x0;
        ppppppuStack_108 = (undefined ******)0x0;
      }
      else {
        ppppppuStack_108 = param_3[1];
        param_1 = (undefined *******)*param_3;
        ppppppuStack_110 = (undefined ******)param_1;
        if (param_3[1] != (undefined ******)0x0) {
          ppppppuVar19 = param_3[1] + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar19,0x10);
            if (bVar6) {
              *ppppppuVar19 = (undefined *****)((long)*ppppppuVar19 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      if ((undefined *******)appppppuStack_c0[1] != (undefined *******)0x0) {
        pppppppuVar10 = (undefined *******)(appppppuStack_c0[1] + 1);
        do {
          ppppppuVar19 = *pppppppuVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
          if (bVar6) {
            *pppppppuVar10 = (undefined ******)((long)ppppppuVar19 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppppuVar19 == (undefined ******)0x0) {
          (*(code *)(*appppppuStack_c0[1])[2])(appppppuStack_c0[1]);
          pppppppuVar8 = unaff_x22;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      fVar27 = SUB84(param_1,0);
      if (aiStack_118[0] == 2) {
        FUN_10abdbb7c(appppppuStack_c0,param_2[3],param_2[4],unaff_x21,1);
        aiStack_130[0] = (int)appppppuStack_c0[0][1];
        puVar14 = (undefined8 *)0x1;
        FUN_10a088744();
        ppppppuVar19 = appppppuStack_c0[1];
        if (puVar14 == (undefined8 *)0x0) {
          ppppppuStack_128 = (undefined ******)0x0;
          ppppppuStack_120 = (undefined ******)0x0;
        }
        else {
          ppppppuStack_120 = (undefined ******)puVar14[1];
          param_1 = (undefined *******)*puVar14;
          ppppppuStack_128 = (undefined ******)param_1;
          if (puVar14[1] != 0) {
            plVar25 = (long *)(puVar14[1] + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar6) {
                *plVar25 = *plVar25 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
        if ((undefined *******)appppppuStack_c0[1] != (undefined *******)0x0) {
          pppppppuVar17 = (undefined *******)(appppppuStack_c0[1] + 1);
          do {
            ppppppuVar15 = *pppppppuVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
            if (bVar6) {
              *pppppppuVar17 = (undefined ******)((long)ppppppuVar15 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppppuVar15 == (undefined ******)0x0) {
            (*(code *)(*appppppuStack_c0[1])[2])(appppppuStack_c0[1]);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar19);
          }
        }
        FUN_10abdbb7c(appppppuStack_c0,param_2[3],param_2[4],unaff_x21,2);
        uVar28 = SUB84(appppppuStack_c0[0][1],0);
        puVar14 = (undefined8 *)0x1;
        FUN_10a088744();
        ppppppuVar19 = appppppuStack_c0[1];
        pppppuStack_148 = (undefined *****)CONCAT44(pppppuStack_148._4_4_,uVar28);
        if (puVar14 == (undefined8 *)0x0) {
          ppppppuStack_140 = (undefined ******)0x0;
          ppppppuStack_138 = (undefined ******)0x0;
        }
        else {
          ppppppuStack_138 = (undefined ******)puVar14[1];
          param_1 = (undefined *******)*puVar14;
          ppppppuStack_140 = (undefined ******)param_1;
          if (puVar14[1] != 0) {
            plVar25 = (long *)(puVar14[1] + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar6) {
                *plVar25 = *plVar25 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
        unaff_x26 = &pppppuStack_148;
        if ((undefined *******)appppppuStack_c0[1] != (undefined *******)0x0) {
          pppppppuVar17 = (undefined *******)(appppppuStack_c0[1] + 1);
          do {
            ppppppuVar15 = *pppppppuVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
            if (bVar6) {
              *pppppppuVar17 = (undefined ******)((long)ppppppuVar15 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppppuVar15 == (undefined ******)0x0) {
            (*(code *)(*appppppuStack_c0[1])[2])(appppppuStack_c0[1]);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar19);
          }
        }
        pppppppuVar17 = (undefined *******)param_2[4];
        param_6 = (undefined *******)0x3;
        param_5 = unaff_x21;
        FUN_10abdbb7c(appppppuStack_c0,param_2[3],pppppppuVar17,unaff_x21,3);
        pppppppuVar8 = (undefined *******)appppppuStack_c0[0][1];
        param_3 = (undefined *******)0x1;
        FUN_10a088744();
        unaff_x22 = (undefined *******)appppppuStack_c0[1];
        ppppppuStack_160 = (undefined ******)CONCAT44(ppppppuStack_160._4_4_,(int)pppppppuVar8);
        unaff_x27 = &ppppppuStack_160;
        if (param_3 == (undefined *******)0x0) {
          ppppppuStack_158 = (undefined ******)0x0;
          ppppppuStack_150 = (undefined ******)0x0;
        }
        else {
          ppppppuStack_150 = param_3[1];
          param_1 = (undefined *******)*param_3;
          ppppppuStack_158 = (undefined ******)param_1;
          if (param_3[1] != (undefined ******)0x0) {
            ppppppuVar19 = param_3[1] + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar19,0x10);
              if (bVar6) {
                *ppppppuVar19 = (undefined *****)((long)*ppppppuVar19 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
        fVar27 = SUB84(param_1,0);
        if ((undefined *******)appppppuStack_c0[1] != (undefined *******)0x0) {
          pppppppuVar10 = (undefined *******)(appppppuStack_c0[1] + 1);
          do {
            ppppppuVar19 = *pppppppuVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
            if (bVar6) {
              *pppppppuVar10 = (undefined ******)((long)ppppppuVar19 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppppuVar19 == (undefined ******)0x0) {
            (*(code *)(*appppppuStack_c0[1])[2])(appppppuStack_c0[1]);
            pppppppuVar8 = unaff_x22;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
        if ((aiStack_130[0] == 2 && (int)pppppuStack_148 == 2) && (int)ppppppuStack_160 == 2) {
          appppppuStack_c0[1] = ppppppuStack_120;
          appppppuStack_c0[0] = ppppppuStack_128;
          if ((undefined *******)ppppppuStack_120 != (undefined *******)0x0) {
            pppppppuVar9 = (undefined *******)(ppppppuStack_120 + 1);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
              if (bVar6) {
                *pppppppuVar9 = (undefined ******)((long)*pppppppuVar9 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          appppppuStack_c0[3] = ppppppuStack_138;
          appppppuStack_c0[2] = ppppppuStack_140;
          if ((undefined *******)ppppppuStack_138 != (undefined *******)0x0) {
            pppppppuVar9 = (undefined *******)(ppppppuStack_138 + 1);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
              if (bVar6) {
                *pppppppuVar9 = (undefined ******)((long)*pppppppuVar9 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          ppppppuStack_98 = ppppppuStack_150;
          ppppppuStack_a0 = ppppppuStack_158;
          if ((undefined *******)ppppppuStack_150 != (undefined *******)0x0) {
            pppppppuVar9 = (undefined *******)(ppppppuStack_150 + 1);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
              if (bVar6) {
                *pppppppuVar9 = (undefined ******)((long)*pppppppuVar9 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          ppppppuStack_88 = ppppppuStack_108;
          ppppppuStack_90 = ppppppuStack_110;
          if ((undefined *******)ppppppuStack_108 != (undefined *******)0x0) {
            pppppppuVar9 = (undefined *******)(ppppppuStack_108 + 1);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
              if (bVar6) {
                *pppppppuVar9 = (undefined ******)((long)*pppppppuVar9 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          pppppuStack_178 = (undefined *****)0x0;
          lStack_170 = 0;
          uStack_168 = 0;
          FUN_10a756a10(&pppppuStack_178,appppppuStack_c0,auStack_80,4);
          unaff_x22 = (undefined *******)(unaff_x25 + (long)(int)unaff_x28 * 0x2f);
          lVar22 = 0x30;
          do {
            func_0x00010a0523dc((long)appppppuStack_c0 + lVar22);
            lVar22 = lVar22 + -0x10;
          } while (lVar22 != -0x10);
          pppppuVar12 = *param_2[1];
          (*(code *)(*pppppuVar12)[0x19])();
          pppppuStack_e0 = (undefined *****)&PTR_DAT_110c53c58;
          pppppuStack_c8 = (undefined *****)&pppppuStack_e0;
          FUN_10abaaf20(appppppuStack_c0,pppppuVar12[0x38],9,&pppppuStack_e0);
          if ((undefined ******)pppppuStack_c8 == &pppppuStack_e0) {
            lVar22 = 0x20;
LAB_10abad498:
            (**(code **)((long)*pppppuStack_c8 + lVar22))();
          }
          else if ((undefined ******)pppppuStack_c8 != (undefined ******)0x0) {
            lVar22 = 0x28;
            goto LAB_10abad498;
          }
          pppppppuVar9 = appppppuStack_c0;
          FUN_10aba93b0();
          uStack_190 = 0;
          uStack_188 = 0;
          uStack_180 = 0;
          FUN_10ab14658(&uStack_190,pppppuStack_178,lStack_170,
                        lStack_170 - (long)pppppuStack_178 >> 4);
          ppuStack_100 = &PTR_DAT_110c53cd8;
          pppuStack_e8 = &ppuStack_100;
          lStack_1a0 = 0;
          uStack_198 = 0;
          lStack_1a8 = 0;
          param_7 = (undefined *)0x0;
          ppppppuStack_f8 = (undefined ******)unaff_x22;
          FUN_10ab10a0c(pppppppuVar9,param_4,&uStack_190,&ppuStack_100,&lStack_1a8,0);
          if (lStack_1a8 != 0) {
            lStack_1a0 = lStack_1a8;
            __ZdlPv();
          }
          if (pppuStack_e8 == &ppuStack_100) {
            lVar22 = 0x20;
LAB_10abad534:
            (**(code **)((long)*pppuStack_e8 + lVar22))();
          }
          else if (pppuStack_e8 != (undefined ***)0x0) {
            lVar22 = 0x28;
            goto LAB_10abad534;
          }
          apuStack_1e8[0] = &uStack_190;
          FUN_10a18ba48(apuStack_1e8);
          pppppppuVar17 = (undefined *******)param_2[4];
          param_6 = (undefined *******)0x9;
          param_5 = unaff_x21;
          FUN_10abdbb7c(&ppppppuStack_1b8,param_2[3],pppppppuVar17,unaff_x21,9);
          ppppppuVar19 = unaff_x22[0x2b];
          pppppuStack_1c8 = ppppppuStack_1b8[6];
          ppppppuVar15 = (undefined ******)ppppppuStack_1b8[5];
          if ((undefined ******)ppppppuStack_1b8[6] != (undefined ******)0x0) {
            ppppppuVar1 = (undefined ******)(ppppppuStack_1b8[6] + 1);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
              if (bVar6) {
                *ppppppuVar1 = (undefined *****)((long)*ppppppuVar1 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          param_3 = (undefined *******)&pppppuStack_1d0;
          pppppuStack_1d0 = (undefined *****)ppppppuVar15;
          FUN_10a015bec(ppppppuVar19 + 0x22);
          pppppuVar12 = pppppuStack_1c8;
          fVar27 = SUB84(ppppppuVar15,0);
          if ((undefined ******)pppppuStack_1c8 != (undefined ******)0x0) {
            ppppppuVar19 = (undefined ******)(pppppuStack_1c8 + 1);
            do {
              pppppuVar23 = *ppppppuVar19;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar19,0x10);
              if (bVar6) {
                *ppppppuVar19 = (undefined *****)((long)pppppuVar23 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (pppppuVar23 == (undefined *****)0x0) {
              (*(code *)(*pppppuStack_1c8)[2])(pppppuStack_1c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar12);
            }
          }
          param_4 = (undefined *******)ppppppuStack_1b8;
          if (((undefined *******)ppppppuStack_1b8 != (undefined *******)0x0) &&
             (param_4 = (undefined *******)(ppppppuStack_1b8 + 5), *param_4 != (undefined ******)0x0
             )) {
            func_0x000107c2b054(apuStack_1e8,&UNK_10f6976af);
            if (cStack_1d1 < '\0') {
              __ZdlPv(apuStack_1e8[0]);
            }
            pppppppuVar17 = (undefined *******)unaff_x22[0x2d];
            param_5 = (undefined *******)unaff_x22[0x2e];
            param_3 = param_4;
            param_6 = unaff_x22;
            FUN_10abae01c(param_2 + 0x20,param_4,pppppppuVar17,param_5,unaff_x22);
          }
          if (plStack_1b0 != (long *)0x0) {
            plVar25 = plStack_1b0 + 1;
            do {
              lVar22 = *plVar25;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar6) {
                *plVar25 = lVar22 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1b0);
            }
          }
          appppppuStack_c0[0] = &pppppuStack_178;
          pppppppuVar8 = appppppuStack_c0;
          FUN_10a18ba48();
          unaff_x25 = (undefined ******)0xfffffffffffffff0;
        }
        else if ((bRam000000011330a9e8 & 1) != 0) {
          pppppppuVar17 = (undefined *******)&UNK_10f6970b3;
          param_5 = (undefined *******)&UNK_10f6975f9;
          param_7 = &UNK_10f697450;
          pppppppuVar8 = (undefined *******)0x0;
          param_3 = (undefined *******)0x1;
          param_6 = (undefined *******)0x29c;
          func_0x00010ae06f08();
        }
        pppppppuVar10 = (undefined *******)ppppppuStack_150;
        if ((undefined *******)ppppppuStack_150 != (undefined *******)0x0) {
          pppppppuVar11 = (undefined *******)(ppppppuStack_150 + 1);
          do {
            ppppppuVar19 = *pppppppuVar11;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
            if (bVar6) {
              *pppppppuVar11 = (undefined ******)((long)ppppppuVar19 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppppuVar19 == (undefined ******)0x0) {
            (*(code *)(*ppppppuStack_150)[2])(ppppppuStack_150);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppppppuVar8 = pppppppuVar10;
          }
        }
        pppppppuVar10 = (undefined *******)ppppppuStack_138;
        if ((undefined *******)ppppppuStack_138 != (undefined *******)0x0) {
          pppppppuVar11 = (undefined *******)(ppppppuStack_138 + 1);
          do {
            ppppppuVar19 = *pppppppuVar11;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
            if (bVar6) {
              *pppppppuVar11 = (undefined ******)((long)ppppppuVar19 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppppuVar19 == (undefined ******)0x0) {
            (*(code *)(*ppppppuStack_138)[2])(ppppppuStack_138);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppppppuVar8 = pppppppuVar10;
          }
        }
        pppppppuVar10 = (undefined *******)ppppppuStack_120;
        if ((undefined *******)ppppppuStack_120 != (undefined *******)0x0) {
          pppppppuVar11 = (undefined *******)(ppppppuStack_120 + 1);
          do {
            ppppppuVar19 = *pppppppuVar11;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
            if (bVar6) {
              *pppppppuVar11 = (undefined ******)((long)ppppppuVar19 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppppuVar19 == (undefined ******)0x0) {
            (*(code *)(*ppppppuStack_120)[2])(ppppppuStack_120);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppppppuVar8 = pppppppuVar10;
          }
        }
      }
      else if ((bRam000000011330a9e8 & 1) != 0) {
        pppppppuVar17 = (undefined *******)&UNK_10f6970b3;
        param_5 = (undefined *******)&UNK_10f6975f9;
        param_7 = &UNK_10f69766d;
        pppppppuVar8 = (undefined *******)0x0;
        param_3 = (undefined *******)0x1;
        param_6 = (undefined *******)0x290;
        func_0x00010ae06f08();
      }
      pppppppuVar10 = param_4;
      if ((undefined *******)ppppppuStack_108 == (undefined *******)0x0) goto LAB_10abad740;
      pppppppuVar10 = (undefined *******)(ppppppuStack_108 + 1);
      do {
        ppppppuVar19 = *pppppppuVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
        if (bVar6) {
          *pppppppuVar10 = (undefined ******)((long)ppppppuVar19 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
        pppppppuVar11 = (undefined *******)ppppppuStack_108;
      } while (cVar5 != '\0');
LAB_10abad724:
      pppppppuVar10 = param_4;
      if (ppppppuVar19 == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar11)[2])(pppppppuVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar8 = pppppppuVar11;
      }
      goto LAB_10abad740;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      param_5 = (undefined *******)0x8;
      param_6 = (undefined *******)0x7;
      param_7 = (undefined *)0x8;
      goto code_r0x00010abad974;
    }
LAB_10abad77c:
    ___stack_chk_fail();
    func_0x00010abda948(&ppppppuStack_1b8);
    appppppuStack_c0[0] = &pppppuStack_178;
    FUN_10a18ba48(appppppuStack_c0);
    func_0x00010a0523dc(unaff_x27 + 1);
    func_0x00010a0523dc(unaff_x26 + 1);
    func_0x00010a0523dc(&ppppppuStack_128);
    func_0x00010a0523dc(unaff_x24 + 1);
    unaff_x30 = FUN_10abad974;
    param_2 = pppppppuVar8;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_3d9 + 0x1e9);
    unaff_x19 = pppppppuVar8;
    unaff_x20 = pppppppuVar10;
    unaff_x23 = pppppppuVar9;
    unaff_x29 = puVar13;
  }
code_r0x00010abad974:
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
  *(undefined **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined ********)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined *******)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined *******)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined ****)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined ********)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined ********)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined ********)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined ********)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined ********)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x78) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar24 = (ulong)*(ushort *)((long)param_3 + 4);
  uVar26 = uVar24 - 1;
  ppppppuVar19 = param_2[0xb];
  uVar20 = ((long)param_2[0xc] - (long)ppppppuVar19 >> 3) * 0x51b3bea3677d46cf;
  if (uVar20 < uVar26 || uVar20 - uVar26 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10abade44);
    (*pcVar7)();
  }
  FUN_10abdbb7c((undefined1 *)((long)register0x00000008 + -0xe8),param_2[3],param_2[4],uVar24,
                param_5);
  ppppppuVar15 = param_2[3];
  pppppuVar12 = (undefined *****)((long)register0x00000008 + -0xf8);
  FUN_10abdbb7c(pppppuVar12,ppppppuVar15,param_2[4],uVar24,param_6);
  if ((((*(long *)((long)register0x00000008 + -0xe8) == 0) ||
       (*(long *)((long)register0x00000008 + -0xf8) == 0)) ||
      (pppppuVar12 = *(undefined ******)(*(long *)((long)register0x00000008 + -0xe8) + 8),
      pppppuVar12 == (undefined *****)0x0)) ||
     (*(long *)(*(long *)((long)register0x00000008 + -0xf8) + 8) == 0)) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      pppppuVar12 = (undefined *****)0x0;
      ppppppuVar15 = (undefined ******)0x1;
      func_0x00010ae06f08(0,1,&UNK_10f6970b3,&UNK_10f6974a0,0x250,&UNK_10f69753b);
    }
    goto LAB_10abadaa8;
  }
  ppppppuVar15 = (undefined ******)0x1;
  FUN_10a088744();
  *(int *)((long)register0x00000008 + -0x110) = (int)pppppuVar12;
  unaff_x25 = (undefined ******)((long)register0x00000008 + -0x110);
  if (ppppppuVar15 == (undefined ******)0x0) {
    pppppuVar23 = (undefined *****)0x0;
    pppppuVar21 = (undefined *****)0x0;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
  }
  else {
    pppppuVar21 = *ppppppuVar15;
    *(undefined ******)((long)register0x00000008 + -0x108) = pppppuVar21;
    pppppuVar23 = ppppppuVar15[1];
    *(undefined ******)((long)register0x00000008 + -0x100) = pppppuVar23;
    if (pppppuVar23 != (undefined *****)0x0) {
      pppppuVar2 = pppppuVar23 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppuVar2,0x10);
        if (bVar6) {
          *pppppuVar2 = (undefined ****)((long)*pppppuVar2 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  if ((int)pppppuVar12 == 2) {
    *(undefined ******)((long)register0x00000008 + -0x98) = pppppuVar21;
    *(undefined ******)((long)register0x00000008 + -0x90) = pppppuVar23;
    if (pppppuVar23 != (undefined *****)0x0) {
      pppppuVar12 = pppppuVar23 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppuVar12,0x10);
        if (bVar6) {
          *pppppuVar12 = (undefined ****)((long)*pppppuVar12 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
    FUN_10a756a10((undefined1 *)((long)register0x00000008 + -0x128),
                  (undefined1 *)((long)register0x00000008 + -0x98),
                  (undefined1 *)((long)register0x00000008 + -0x88),1);
    ppppppuVar19 = ppppppuVar19 + (long)(int)uVar26 * 0x2f;
    plVar25 = *(long **)((long)register0x00000008 + -0x90);
    if (plVar25 != (long *)0x0) {
      plVar3 = plVar25 + 1;
      do {
        lVar22 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar22 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
      }
    }
    uVar20 = (ulong)*(uint *)(param_3 + 1);
    if (uVar20 < (ulong)((long)ppppppuVar19[0x27] - (long)ppppppuVar19[0x26] >> 2)) {
      fVar30 = *(float *)((long)ppppppuVar19[0x26] + uVar20 * 4);
    }
    else {
      dVar29 = (double)((*(int *)((long)ppppppuVar19 + 300) - *(uint *)(param_3 + 1)) + 1);
      _exp2();
      fVar27 = (float)NEON_ucvtf(*(undefined4 *)(ppppppuVar19 + 4));
      fVar30 = fVar27 / (float)(uint)(int)dVar29;
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        dVar29 = (double)fVar30;
        *(double *)((long)register0x00000008 + -0x198) = dVar29;
        *(ulong *)((long)register0x00000008 + -0x1a0) = uVar20;
        func_0x00010ae06f08(1,2,&UNK_10f6970b3,&UNK_10f6974a0,0x26d,&UNK_10f6975a8);
        fVar27 = SUB84(dVar29,0);
      }
    }
    pppppuVar12 = *param_2[1];
    (*(code *)(*pppppuVar12)[0x19])();
    ppppuVar16 = pppppuVar12[0x38];
    *(undefined ***)((long)register0x00000008 + -0xb8) = &PTR_DAT_110c53b58;
    *(long **)((long)register0x00000008 + -0xa0) = (long *)((long)register0x00000008 + -0xb8);
    FUN_10abaaf20((undefined1 *)((long)register0x00000008 + -0x98),ppppuVar16,param_7,
                  (undefined1 *)((long)register0x00000008 + -0xb8));
    plVar25 = *(long **)((long)register0x00000008 + -0xa0);
    if (plVar25 == (long *)((long)register0x00000008 + -0xb8)) {
      lVar22 = 0x20;
LAB_10abadcf8:
      (**(code **)(*plVar25 + lVar22))();
    }
    else if (plVar25 != (long *)0x0) {
      lVar22 = 0x28;
      goto LAB_10abadcf8;
    }
    puVar13 = (undefined1 *)((long)register0x00000008 + -0x98);
    FUN_10aba93b0(puVar13);
    *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
    FUN_10ab14658((undefined1 *)((long)register0x00000008 + -0x140),
                  *(long *)((long)register0x00000008 + -0x128),
                  *(long *)((long)register0x00000008 + -0x120),
                  *(long *)((long)register0x00000008 + -0x120) -
                  *(long *)((long)register0x00000008 + -0x128) >> 4);
    *(undefined ***)((long)register0x00000008 + -0xd8) = &PTR_DAT_110c53bd8;
    *(undefined *******)((long)register0x00000008 + -0xd0) = ppppppuVar19;
    *(ulong *)((long)register0x00000008 + -200) = (ulong)(uint)fVar30;
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0xd8);
    *(undefined4 *)((long)register0x00000008 + -0xc4) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
    FUN_10ab10a0c(puVar13,param_4,(undefined1 *)((long)register0x00000008 + -0x140),
                  (undefined1 *)((long)register0x00000008 + -0xd8),
                  (undefined1 *)((long)register0x00000008 + -0x158),0);
    if (*(long *)((long)register0x00000008 + -0x158) != 0) {
      *(long *)((long)register0x00000008 + -0x150) = *(long *)((long)register0x00000008 + -0x158);
      __ZdlPv();
    }
    plVar25 = *(long **)((long)register0x00000008 + -0xc0);
    if (plVar25 == (long *)((long)register0x00000008 + -0xd8)) {
      lVar22 = 0x20;
LAB_10abadd9c:
      (**(code **)(*plVar25 + lVar22))();
    }
    else if (plVar25 != (long *)0x0) {
      lVar22 = 0x28;
      goto LAB_10abadd9c;
    }
    *(undefined1 **)((long)register0x00000008 + -0x170) =
         (undefined1 *)((long)register0x00000008 + -0x140);
    FUN_10a18ba48((undefined1 *)((long)register0x00000008 + -0x170));
    __ZNSt3__19to_stringEi((undefined1 *)((long)register0x00000008 + -0x170),(int)fVar30);
    ppppppuVar15 = (undefined ******)((long)register0x00000008 + -0x170);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              ((undefined1 *)((long)register0x00000008 + -0x188),&UNK_10f6975f1);
    if (*(char *)((long)register0x00000008 + -0x171) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x188));
    }
    if (*(char *)((long)register0x00000008 + -0x159) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x170));
    }
    *(undefined1 **)((long)register0x00000008 + -0x98) =
         (undefined1 *)((long)register0x00000008 + -0x128);
    pppppuVar12 = (undefined *****)((long)register0x00000008 + -0x98);
    FUN_10a18ba48();
  }
  else if ((bRam000000011330a9e8 & 1) != 0) {
    pppppuVar12 = (undefined *****)0x0;
    ppppppuVar15 = (undefined ******)0x1;
    func_0x00010ae06f08(0,1,&UNK_10f6970b3,&UNK_10f6974a0,599,&UNK_10f69756d);
  }
  if (pppppuVar23 != (undefined *****)0x0) {
    pppppuVar21 = pppppuVar23 + 1;
    do {
      ppppuVar16 = *pppppuVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppppuVar21,0x10);
      if (bVar6) {
        *pppppuVar21 = (undefined ****)((long)ppppuVar16 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppuVar16 == (undefined ****)0x0) {
      (*(code *)(*pppppuVar23)[2])(pppppuVar23);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppuVar12 = pppppuVar23;
    }
  }
LAB_10abadaa8:
  pppppuVar23 = *(undefined ******)((long)register0x00000008 + -0xf0);
  if (pppppuVar23 != (undefined *****)0x0) {
    pppppuVar21 = pppppuVar23 + 1;
    do {
      ppppuVar16 = *pppppuVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppppuVar21,0x10);
      if (bVar6) {
        *pppppuVar21 = (undefined ****)((long)ppppuVar16 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppuVar16 == (undefined ****)0x0) {
      (*(code *)(*pppppuVar23)[2])(pppppuVar23);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppuVar12 = pppppuVar23;
    }
  }
  pppppuVar23 = *(undefined ******)((long)register0x00000008 + -0xe0);
  if (pppppuVar23 != (undefined *****)0x0) {
    pppppuVar21 = pppppuVar23 + 1;
    do {
      ppppuVar16 = *pppppuVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppppuVar21,0x10);
      if (bVar6) {
        *pppppuVar21 = (undefined ****)((long)ppppuVar16 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppuVar16 == (undefined ****)0x0) {
      (*(code *)(*pppppuVar23)[2])(pppppuVar23);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppuVar12 = pppppuVar23;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x78)) {
    ___stack_chk_fail();
    *(undefined1 **)((long)register0x00000008 + -0x98) =
         (undefined1 *)((long)register0x00000008 + -0x128);
    FUN_10a18ba48((undefined1 *)((long)register0x00000008 + -0x98));
    func_0x00010a0523dc(unaff_x25 + 1);
    func_0x00010abda948((undefined1 *)((long)register0x00000008 + -0xf8));
    func_0x00010abda948((undefined1 *)((long)register0x00000008 + -0xe8));
    pppppuVar23 = pppppuVar12;
    __Unwind_Resume(pppppuVar12);
    *(undefined ********)((long)register0x00000008 + -0x1c0) = param_4;
    *(undefined ******)((long)register0x00000008 + -0x1b8) = pppppuVar12;
    *(undefined1 **)((long)register0x00000008 + -0x1b0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x1a8) = FUN_10abadf48;
    fVar30 = *(float *)(ppppppuVar15 + 0x23);
    if (*(float *)(ppppppuVar15 + 0x23) <= *(float *)((long)ppppppuVar15 + 0x114)) {
      fVar30 = *(float *)((long)ppppppuVar15 + 0x114);
    }
    *(float *)((long)register0x00000008 + -0x1d0) = fVar27;
    *(float *)((long)register0x00000008 + -0x1cc) = fVar30;
    *(undefined8 *)((long)register0x00000008 + -0x1c8) = *(undefined8 *)((long)ppppppuVar15 + 0xc);
    uVar28 = *(undefined4 *)((long)ppppppuVar15 + 0x1c);
    *(undefined8 *)((long)register0x00000008 + -0x1e0) = *(undefined8 *)((long)ppppppuVar15 + 0x14);
    *(undefined4 *)((long)register0x00000008 + -0x1d8) = uVar28;
    *(undefined4 *)((long)register0x00000008 + -0x1d4) = 0;
    func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0x200),&PTR_DAT_110c52ec0);
    FUN_10a015dcc(pppppuVar23,(undefined1 *)((long)register0x00000008 + -0x200),
                  (undefined1 *)((long)register0x00000008 + -0x1d0));
    if (*(char *)((long)register0x00000008 + -0x1e9) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x200));
    }
    func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0x200),&PTR_DAT_110c52e48);
    FUN_10a015dcc(pppppuVar23,(undefined1 *)((long)register0x00000008 + -0x200),
                  (undefined1 *)((long)register0x00000008 + -0x1e0));
    if (*(char *)((long)register0x00000008 + -0x1e9) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x200));
    }
    return;
  }
  return;
}



/* Entry: 10abad974; end: 10abadf47;  */

void FUN_10abad974(float param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long **pplVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long **pplVar5;
  long **pplVar6;
  undefined8 **ppuVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  int *unaff_x25;
  ulong uVar12;
  long lVar13;
  double dVar14;
  float fVar15;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long **pplStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  ulong uStack_1a0;
  double dStack_198;
  undefined8 auStack_188 [2];
  char cStack_171;
  undefined8 *apuStack_170 [2];
  char cStack_159;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  int aiStack_110 [2];
  long *plStack_108;
  long **pplStack_100;
  long *plStack_f8;
  long **pplStack_f0;
  long lStack_e8;
  long **pplStack_e0;
  undefined **ppuStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined ***pppuStack_c0;
  undefined **appuStack_b8 [3];
  undefined ***pppuStack_a0;
  long *plStack_98;
  long **pplStack_90;
  undefined1 auStack_88 [16];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = (ulong)*(ushort *)(param_3 + 4);
  uVar12 = uVar11 - 1;
  lVar13 = *(long *)(param_2 + 0x58);
  uVar8 = (*(long *)(param_2 + 0x60) - lVar13 >> 3) * 0x51b3bea3677d46cf;
  if (uVar8 < uVar12 || uVar8 - uVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10abade44);
    (*pcVar4)();
  }
  FUN_10abdbb7c(&lStack_e8,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),uVar11,
                param_5);
  ppuVar7 = *(undefined8 ***)(param_2 + 0x18);
  pplVar5 = &plStack_f8;
  FUN_10abdbb7c(pplVar5,ppuVar7,*(undefined8 *)(param_2 + 0x20),uVar11,param_6);
  if ((((lStack_e8 == 0) || (plStack_f8 == (long *)0x0)) ||
      (pplVar5 = *(long ***)(lStack_e8 + 8), pplVar5 == (long **)0x0)) || (plStack_f8[1] == 0)) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      pplVar5 = (long **)0x0;
      ppuVar7 = (undefined8 **)0x1;
      func_0x00010ae06f08(0,1,&UNK_10f6970b3,&UNK_10f6974a0,0x250,&UNK_10f69753b);
    }
    goto LAB_10abadaa8;
  }
  ppuVar7 = (undefined8 **)0x1;
  FUN_10a088744();
  aiStack_110[0] = (int)pplVar5;
  unaff_x25 = aiStack_110;
  if (ppuVar7 == (undefined8 **)0x0) {
    plStack_108 = (long *)0x0;
    pplStack_100 = (long **)0x0;
  }
  else {
    plStack_108 = *ppuVar7;
    pplStack_100 = (long **)ppuVar7[1];
    if (pplStack_100 != (long **)0x0) {
      pplVar6 = pplStack_100 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pplVar6,0x10);
        if (bVar3) {
          *pplVar6 = (long *)((long)*pplVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  pplVar6 = pplStack_100;
  if (aiStack_110[0] == 2) {
    if (pplStack_100 != (long **)0x0) {
      pplVar5 = pplStack_100 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pplVar5,0x10);
        if (bVar3) {
          *pplVar5 = (long *)((long)*pplVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_128 = 0;
    lStack_120 = 0;
    uStack_118 = 0;
    plStack_98 = plStack_108;
    pplStack_90 = pplStack_100;
    FUN_10a756a10(&lStack_128,&plStack_98,auStack_88,1);
    pplVar5 = pplStack_90;
    lVar13 = lVar13 + (long)(int)uVar12 * 0x178;
    if (pplStack_90 != (long **)0x0) {
      pplVar1 = pplStack_90 + 1;
      do {
        plVar10 = *pplVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
        if (bVar3) {
          *pplVar1 = (long *)((long)plVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (plVar10 == (long *)0x0) {
        (*(code *)(*pplStack_90)[2])(pplStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar5);
      }
    }
    uVar8 = (ulong)*(uint *)(param_3 + 8);
    if (uVar8 < (ulong)(*(long *)(lVar13 + 0x138) - *(long *)(lVar13 + 0x130) >> 2)) {
      fVar15 = *(float *)(*(long *)(lVar13 + 0x130) + uVar8 * 4);
    }
    else {
      dVar14 = (double)((*(int *)(lVar13 + 300) - *(uint *)(param_3 + 8)) + 1);
      _exp2();
      param_1 = (float)NEON_ucvtf(*(undefined4 *)(lVar13 + 0x20));
      fVar15 = param_1 / (float)(uint)(int)dVar14;
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        dVar14 = (double)fVar15;
        uStack_1a0 = uVar8;
        dStack_198 = dVar14;
        func_0x00010ae06f08(1,2,&UNK_10f6970b3,&UNK_10f6974a0,0x26d,&UNK_10f6975a8);
        param_1 = SUB84(dVar14,0);
      }
    }
    plVar10 = (long *)**(long **)(param_2 + 8);
    (**(code **)(*plVar10 + 200))();
    appuStack_b8[0] = &PTR_DAT_110c53b58;
    pppuStack_a0 = appuStack_b8;
    FUN_10abaaf20(&plStack_98,plVar10[0x38],param_7,appuStack_b8);
    if (pppuStack_a0 == appuStack_b8) {
      lVar9 = 0x20;
LAB_10abadcf8:
      (**(code **)((long)*pppuStack_a0 + lVar9))();
    }
    else if (pppuStack_a0 != (undefined ***)0x0) {
      lVar9 = 0x28;
      goto LAB_10abadcf8;
    }
    pplVar5 = &plStack_98;
    FUN_10aba93b0(pplVar5);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    FUN_10ab14658(&uStack_140,lStack_128,lStack_120,lStack_120 - lStack_128 >> 4);
    ppuStack_d8 = &PTR_DAT_110c53bd8;
    pppuStack_c0 = &ppuStack_d8;
    uStack_c8 = (ulong)(uint)fVar15;
    lStack_150 = 0;
    uStack_148 = 0;
    lStack_158 = 0;
    lStack_d0 = lVar13;
    FUN_10ab10a0c(pplVar5,param_4,&uStack_140,&ppuStack_d8,&lStack_158,0);
    if (lStack_158 != 0) {
      lStack_150 = lStack_158;
      __ZdlPv();
    }
    if (pppuStack_c0 == &ppuStack_d8) {
      lVar13 = 0x20;
LAB_10abadd9c:
      (**(code **)((long)*pppuStack_c0 + lVar13))();
    }
    else if (pppuStack_c0 != (undefined ***)0x0) {
      lVar13 = 0x28;
      goto LAB_10abadd9c;
    }
    apuStack_170[0] = &uStack_140;
    FUN_10a18ba48(apuStack_170);
    __ZNSt3__19to_stringEi(apuStack_170,(int)fVar15);
    ppuVar7 = apuStack_170;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_188,&UNK_10f6975f1);
    if (cStack_171 < '\0') {
      __ZdlPv(auStack_188[0]);
    }
    if (cStack_159 < '\0') {
      __ZdlPv(apuStack_170[0]);
    }
    plStack_98 = &lStack_128;
    pplVar5 = &plStack_98;
    FUN_10a18ba48();
  }
  else if ((bRam000000011330a9e8 & 1) != 0) {
    pplVar5 = (long **)0x0;
    ppuVar7 = (undefined8 **)0x1;
    func_0x00010ae06f08(0,1,&UNK_10f6970b3,&UNK_10f6974a0,599,&UNK_10f69756d);
  }
  if (pplVar6 != (long **)0x0) {
    pplVar1 = pplVar6 + 1;
    do {
      plVar10 = *pplVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
      if (bVar3) {
        *pplVar1 = (long *)((long)plVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plVar10 == (long *)0x0) {
      (*(code *)(*pplVar6)[2])(pplVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pplVar5 = pplVar6;
    }
  }
LAB_10abadaa8:
  if (pplStack_f0 != (long **)0x0) {
    pplVar6 = pplStack_f0 + 1;
    do {
      plVar10 = *pplVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pplVar6,0x10);
      if (bVar3) {
        *pplVar6 = (long *)((long)plVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plVar10 == (long *)0x0) {
      (*(code *)(*pplStack_f0)[2])(pplStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pplVar5 = pplStack_f0;
    }
  }
  pplStack_1b8 = pplVar5;
  if (pplStack_e0 != (long **)0x0) {
    pplVar5 = pplStack_e0 + 1;
    do {
      plVar10 = *pplVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pplVar5,0x10);
      if (bVar3) {
        *pplVar5 = (long *)((long)plVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plVar10 == (long *)0x0) {
      (*(code *)(*pplStack_e0)[2])(pplStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pplStack_1b8 = pplStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  plStack_98 = &lStack_128;
  FUN_10a18ba48(&plStack_98);
  func_0x00010a0523dc(unaff_x25 + 2);
  func_0x00010abda948(&plStack_f8);
  func_0x00010abda948(&lStack_e8);
  pplVar5 = pplStack_1b8;
  __Unwind_Resume(pplStack_1b8);
  pcStack_1a8 = FUN_10abadf48;
  fStack_1cc = *(float *)(ppuVar7 + 0x23);
  if (*(float *)(ppuVar7 + 0x23) <= *(float *)((long)ppuVar7 + 0x114)) {
    fStack_1cc = *(float *)((long)ppuVar7 + 0x114);
  }
  uStack_1c8 = *(undefined8 *)((long)ppuVar7 + 0xc);
  uStack_1d8 = *(undefined4 *)((long)ppuVar7 + 0x1c);
  uStack_1e0 = *(undefined8 *)((long)ppuVar7 + 0x14);
  uStack_1d4 = 0;
  fStack_1d0 = param_1;
  uStack_1c0 = param_4;
  puStack_1b0 = &stack0xfffffffffffffff0;
  func_0x000107c2b074(auStack_200,&PTR_DAT_110c52ec0);
  FUN_10a015dcc(pplVar5,auStack_200,&fStack_1d0);
  if (cStack_1e9 < '\0') {
    __ZdlPv(auStack_200[0]);
  }
  func_0x000107c2b074(auStack_200,&PTR_DAT_110c52e48);
  FUN_10a015dcc(pplVar5,auStack_200,&uStack_1e0);
  if (cStack_1e9 < '\0') {
    __ZdlPv(auStack_200[0]);
  }
  return;
}



/* Entry: 10abadf48; end: 10abae01b;  */

void FUN_10abadf48(undefined4 param_1,undefined8 param_2,long param_3)

{
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined8 uStack_28;
  
  fStack_2c = *(float *)(param_3 + 0x118);
  if (*(float *)(param_3 + 0x118) <= *(float *)(param_3 + 0x114)) {
    fStack_2c = *(float *)(param_3 + 0x114);
  }
  uStack_28 = *(undefined8 *)(param_3 + 0xc);
  uStack_38 = *(undefined4 *)(param_3 + 0x1c);
  uStack_40 = *(undefined8 *)(param_3 + 0x14);
  uStack_34 = 0;
  uStack_30 = param_1;
  func_0x000107c2b074(auStack_60,&PTR_DAT_110c52ec0);
  FUN_10a015dcc(param_2,auStack_60,&uStack_30);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  func_0x000107c2b074(auStack_60,&PTR_DAT_110c52e48);
  FUN_10a015dcc(param_2,auStack_60,&uStack_40);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  return;
}



/* Entry: 10abae01c; end: 10abae0b7;  */

void FUN_10abae01c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  FUN_10abdc414(param_1,&uStack_50);
  if (param_1 + 8 != lVar2) {
    fVar4 = *(float *)(param_5 + 0x10);
    uVar3 = *(undefined4 *)(param_5 + 0x1c);
    uVar1 = *(undefined8 *)(param_5 + 0x14);
    func_0x00010a04a704(lVar2 + 0x40,param_2);
    *(int *)(lVar2 + 0x6c) = (int)fVar4;
    *(int *)(lVar2 + 0x50) = (int)uVar1;
    *(undefined8 *)(lVar2 + 0x5c) = uVar1;
    *(ulong *)(lVar2 + 0x54) = CONCAT44(uVar3,(int)((ulong)uVar1 >> 0x20));
    *(undefined4 *)(lVar2 + 100) = uVar3;
    *(float *)(lVar2 + 0x68) = fVar4;
  }
  return;
}



/* Entry: 10abae0b8; end: 10abae273;  */

void FUN_10abae0b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = *param_7;
  if (lVar5 != 0) {
    uStack_60 = param_5;
    uStack_58 = param_6;
    FUN_10ab70d08(lVar5);
    uVar7 = *(undefined8 *)(lVar5 + 0x104);
    uVar6 = *(undefined8 *)(lVar5 + 0xfc);
    lVar5 = param_4;
    FUN_10abdc414(param_4,&uStack_60);
    if (param_4 + 8 == lVar5) {
      lStack_a8 = *param_7;
      plStack_a0 = (long *)param_7[1];
      lVar5 = lStack_a8;
      if (plStack_a0 != (long *)0x0) {
        plVar1 = plStack_a0 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar5 = *param_7;
      }
      uStack_98 = 0;
      plStack_90 = (long *)0x0;
      uStack_68 = *(undefined4 *)(lVar5 + 0x120);
      uStack_6c = 0;
      uStack_88 = param_1;
      uStack_84 = param_2;
      uStack_80 = param_3;
      uStack_7c = uVar6;
      uStack_74 = uVar7;
      FUN_10abdc4c8(param_4,uStack_60,uStack_58,&uStack_60);
      FUN_10a350ec8(param_4 + 0x30,&lStack_a8);
      FUN_10a015bec(param_4 + 0x40,&uStack_98);
      plVar1 = plStack_90;
      *(ulong *)(param_4 + 0x50) = CONCAT44(uStack_84,uStack_88);
      *(undefined4 *)(param_4 + 0x58) = uStack_80;
      *(undefined8 *)(param_4 + 100) = uStack_74;
      *(undefined8 *)(param_4 + 0x5c) = uStack_7c;
      *(ulong *)(param_4 + 0x6c) = CONCAT44(uStack_68,uStack_6c);
      if (plStack_90 != (long *)0x0) {
        plVar2 = plStack_90 + 1;
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
          (**(code **)(*plStack_90 + 0x10))(plStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      plVar1 = plStack_a0;
      if (plStack_a0 != (long *)0x0) {
        plVar2 = plStack_a0 + 1;
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
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
    }
    else {
      FUN_10abdc4c8(param_4,uStack_60,uStack_58,&uStack_60);
      func_0x00010a66b340(param_4 + 0x30,param_7);
    }
  }
  return;
}



/* Entry: 10abae274; end: 10abae58f;  */

long * FUN_10abae274(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long alStack_128 [3];
  long *plStack_110;
  long lStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined **appuStack_b0 [3];
  undefined ***pppuStack_98;
  undefined **appuStack_90 [3];
  undefined ***pppuStack_78;
  long *plStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = param_1 + 9;
  *plVar10 = (long)&PTR_FUN_110c52ee8;
  param_1[1] = (long)param_2;
  param_1[2] = (long)plVar10;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *param_1 = (long)&PTR_DAT_110c500d8;
  *(undefined4 *)(param_1 + 10) = 0x10000;
  *(undefined2 *)((long)param_1 + 0x54) = 1;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  plVar4 = param_1 + 0x1b;
  param_1[0x16] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_2 = (long *)*param_2;
  (**(code **)(*param_2 + 200))();
  appuStack_90[0] = &PTR_FUN_110c53dd8;
  pppuStack_78 = appuStack_90;
  FUN_10abae590(&plStack_70,param_2[0x38],1,appuStack_90);
  param_1[0x14] = (long)puStack_68;
  param_1[0x13] = (long)plStack_70;
  param_1[0x16] = (long)puStack_58;
  param_1[0x15] = (long)puStack_60;
  if (pppuStack_78 == appuStack_90) {
    lVar9 = 0x20;
LAB_10abae378:
    (**(code **)((long)*pppuStack_78 + lVar9))();
  }
  else if (pppuStack_78 != (undefined ***)0x0) {
    lVar9 = 0x28;
    goto LAB_10abae378;
  }
  plVar2 = *(long **)param_1[1];
  (**(code **)(*plVar2 + 200))();
  appuStack_b0[0] = &PTR_DAT_110c53e58;
  pppuStack_98 = appuStack_b0;
  FUN_10abae590(&plStack_70,plVar2[0x38],2,appuStack_b0);
  param_1[0x18] = (long)puStack_68;
  param_1[0x17] = (long)plStack_70;
  param_1[0x1a] = (long)puStack_58;
  param_1[0x19] = (long)puStack_60;
  if (pppuStack_98 == appuStack_b0) {
    lVar9 = 0x20;
LAB_10abae3e4:
    (**(code **)((long)*pppuStack_98 + lVar9))();
  }
  else if (pppuStack_98 != (undefined ***)0x0) {
    lVar9 = 0x28;
    goto LAB_10abae3e4;
  }
  puStack_68 = &DAT_10f6976c5;
  plStack_70 = (long *)&DAT_10f6976bb;
  puStack_58 = &DAT_10f6976d8;
  puStack_60 = &DAT_10f6976ce;
  lStack_c0 = 0;
  uStack_b8 = 0;
  lStack_c8 = 0;
  puVar7 = auStack_50;
  uVar8 = 4;
  FUN_10abd5914(&lStack_c8,&plStack_70,puVar7,4);
  FUN_10aba6e58(param_1,&lStack_c8);
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  lVar9 = 0;
  do {
    pplVar5 = (long **)0xa;
    lStack_d0 = lVar9;
    FUN_10a0ee900(&plStack_70,&UNK_10f6976e2,10);
    puVar1 = (undefined8 *)param_1[0x1c];
    if (puVar1 < (undefined8 *)param_1[0x1d]) {
      puVar1[2] = puStack_60;
      puVar1[3] = 0;
      puVar1[1] = puStack_68;
      *puVar1 = plStack_70;
      puStack_68 = (undefined *)0x0;
      puStack_60 = (undefined *)0x0;
      plStack_70 = (long *)0x0;
      func_0x000107c2b080(puVar1);
      plVar2 = puVar1 + 4;
    }
    else {
      pplVar5 = &plStack_70;
      plVar2 = plVar4;
      FUN_10ab14008(plVar4,pplVar5);
    }
    param_1[0x1c] = (long)plVar2;
    if ((long)puStack_60 < 0) {
      plVar2 = plStack_70;
      __ZdlPv();
    }
    uVar6 = (uint)puVar7;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  plStack_70 = plVar4;
  FUN_10a044868(&plStack_70);
  FUN_10abae67c(plVar10);
  func_0x00010aba7988(param_1);
  plVar3 = plVar2;
  __Unwind_Resume();
  pcStack_d8 = FUN_10abae590;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_100 = plVar2;
  plStack_f8 = plVar4;
  plStack_f0 = plVar10;
  plStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010abda9a0(alStack_128,uVar8);
  FUN_10aba9ac4(plVar3,pplVar5,2,uVar6 & 0xffff,alStack_128);
  plVar4 = plStack_110;
  if (plStack_110 == alStack_128) {
    lVar9 = 0x20;
LAB_10abae604:
    (**(code **)(*plStack_110 + lVar9))();
  }
  else if (plStack_110 != (long *)0x0) {
    lVar9 = 0x28;
    goto LAB_10abae604;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return plVar4;
  }
  ___stack_chk_fail();
  if (plStack_110 == alStack_128) {
    lVar9 = 0x20;
  }
  else {
    if (plStack_110 == (long *)0x0) goto LAB_10abae674;
    lVar9 = 0x28;
  }
  (**(code **)(*plStack_110 + lVar9))();
LAB_10abae674:
  __Unwind_Resume();
  *plVar4 = (long)&PTR_FUN_110c52ee8;
  func_0x00010abd59bc(plVar4 + 5);
  if (plVar4[2] != 0) {
    plVar4[3] = plVar4[2];
    __ZdlPv();
  }
  return plVar4;
}



/* Entry: 10abae590; end: 10abae67b;  */

long * FUN_10abae590(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010abda9a0(alStack_58,param_4);
  FUN_10aba9ac4(param_1,param_2,2,param_3,alStack_58);
  plVar1 = plStack_40;
  if (plStack_40 == alStack_58) {
    lVar2 = 0x20;
LAB_10abae604:
    (**(code **)(*plStack_40 + lVar2))();
  }
  else if (plStack_40 != (long *)0x0) {
    lVar2 = 0x28;
    goto LAB_10abae604;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar1;
  }
  ___stack_chk_fail();
  if (plStack_40 == alStack_58) {
    lVar2 = 0x20;
  }
  else {
    if (plStack_40 == (long *)0x0) goto LAB_10abae674;
    lVar2 = 0x28;
  }
  (**(code **)(*plStack_40 + lVar2))();
LAB_10abae674:
  __Unwind_Resume();
  *plVar1 = (long)&PTR_FUN_110c52ee8;
  func_0x00010abd59bc(plVar1 + 5);
  if (plVar1[2] != 0) {
    plVar1[3] = plVar1[2];
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10abae67c; end: 10abae6bb;  */

undefined8 * FUN_10abae67c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c52ee8;
  func_0x00010abd59bc(param_1 + 5);
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10abae6bc; end: 10abae6f3;  */

bool FUN_10abae6bc(undefined8 param_1,long param_2)

{
  code *pcVar1;
  
  if ((*(ushort *)(param_2 + 0x20) >> 2 & 1) == 0) {
    if (*(long **)(param_2 + 0x170) == *(long **)(param_2 + 0x168)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10abae6f4);
      (*pcVar1)();
    }
    if (**(long **)(param_2 + 0x168) != 0) {
      return *(char *)(param_2 + 0x1dc) != '\0';
    }
  }
  return false;
}



/* Entry: 10abae6f4; end: 10abaf343;  */

undefined **** FUN_10abae6f4(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined ****ppppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined ***pppuVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  undefined ****ppppuVar19;
  undefined ****ppppuVar20;
  int iVar21;
  byte *pbVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lStack_140;
  undefined ****ppppuStack_138;
  long lStack_130;
  undefined ****ppppuStack_128;
  long lStack_120;
  undefined ****ppppuStack_118;
  long lStack_110;
  undefined ****ppppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined ***pppuStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined **ppuStack_d0;
  undefined ****ppppuStack_c8;
  undefined8 uStack_c0;
  undefined ***pppuStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = (ulong)*(ushort *)((long)param_2 + 4) - 1;
  uVar15 = (*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 3) * -0x71c71c71c71c71c7;
  if (uVar15 < uVar11 || uVar15 - uVar11 == 0) goto LAB_10abaf1f8;
  pbVar22 = (byte *)(*(long *)(param_1 + 0x58) + (long)(int)uVar11 * 0x48);
  lVar12 = param_2[6];
  uVar26 = *(undefined8 *)(lVar12 + 0x1f1);
  uVar8 = *(undefined8 *)(lVar12 + 0x1e9);
  uVar27 = *(undefined8 *)(lVar12 + 0x1dc);
  *(undefined8 *)(pbVar22 + 8) = *(undefined8 *)(lVar12 + 0x1e4);
  *(undefined8 *)pbVar22 = uVar27;
  *(undefined8 *)(pbVar22 + 0x15) = uVar26;
  *(undefined8 *)(pbVar22 + 0xd) = uVar8;
  bVar4 = *pbVar22;
  if (bVar4 < 5) {
    uVar23 = *(undefined4 *)(&UNK_10e502dcc + (ulong)bVar4 * 4);
    pbVar22[0x20] = (byte)(0x20100b0707 >> ((ulong)bVar4 << 3 & 0x3f));
    pbVar22[0x21] = (byte)(0xe07060303 >> ((ulong)bVar4 << 3 & 0x3f));
    *(undefined4 *)(pbVar22 + 0x38) = uVar23;
  }
  if (pbVar22[1] - 3 < 2) {
    pbVar22[0x30] = 0x17;
    pbVar22[0x31] = 0;
    pbVar22[0x32] = 0;
    pbVar22[0x33] = 0;
    pbVar22[0x34] = 0;
    pbVar22[0x35] = 0;
    pbVar22[0x36] = 0;
    pbVar22[0x37] = 0;
LAB_10abae814:
    uVar23 = 0x3f800000;
  }
  else {
    if (pbVar22[1] != 2) {
      pbVar22[0x30] = 1;
      pbVar22[0x31] = 0;
      pbVar22[0x32] = 0;
      pbVar22[0x33] = 0;
      pbVar22[0x34] = 0;
      pbVar22[0x35] = 0;
      pbVar22[0x36] = 0;
      pbVar22[0x37] = 0;
      pbVar22[0x38] = 0;
      pbVar22[0x39] = 0;
      pbVar22[0x3a] = 0x80;
      pbVar22[0x3b] = 0x3f;
      goto LAB_10abae814;
    }
    pbVar22[0x30] = 0xb;
    pbVar22[0x31] = 0;
    pbVar22[0x32] = 0;
    pbVar22[0x33] = 0;
    pbVar22[0x34] = 0;
    pbVar22[0x35] = 0;
    pbVar22[0x36] = 0;
    pbVar22[0x37] = 0;
    *(float *)(pbVar22 + 0x38) = *(float *)(pbVar22 + 0x38) * 0.5;
    uVar23 = 0x40000000;
  }
  *(undefined4 *)(pbVar22 + 0x3c) = uVar23;
  uStack_f0 = 4;
  uStack_ec = 2;
  uStack_100 = 0x100000001;
  puVar3 = *(undefined8 **)(param_2[6] + 0x168);
  if (*(undefined8 **)(param_2[6] + 0x170) == puVar3) goto LAB_10abaf1f8;
  uVar8 = *puVar3;
  func_0x00010a1de5f0();
  iVar21 = (int)(*(float *)(pbVar22 + 0x10) * (float)(int)uVar8);
  iVar18 = (int)(*(float *)(pbVar22 + 0x10) * (float)(int)((ulong)uVar8 >> 0x20));
  uStack_f8 = CONCAT44(iVar18,iVar21);
  func_0x000107c2b054(&ppuStack_b0,&UNK_10f6976ed);
  FUN_10aba6710(param_1,param_2,0,&ppuStack_b0,1,&uStack_100);
  FUN_10abdcbf4(&lStack_110,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined2 *)((long)param_2 + 4));
  if (uStack_a0 < 0) {
    __ZdlPv(ppuStack_b0);
  }
  func_0x000107c2b054(&ppuStack_b0,&UNK_10f63f11e);
  FUN_10aba6710(param_1,param_2,1,&ppuStack_b0,0,&uStack_100);
  FUN_10abdd170(&lStack_120,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined2 *)((long)param_2 + 4),1);
  if (uStack_a0 < 0) {
    __ZdlPv(ppuStack_b0);
  }
  func_0x000107c2b054(&ppuStack_b0,&UNK_10f6976f7);
  FUN_10aba6710(param_1,param_2,2,&ppuStack_b0,0,&uStack_100);
  FUN_10abdd170(&lStack_130,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined2 *)((long)param_2 + 4),2);
  if (uStack_a0 < 0) {
    __ZdlPv(ppuStack_b0);
  }
  func_0x000107c2b054(&ppuStack_b0,&UNK_10f697704);
  FUN_10aba6710(param_1,param_2,3,&ppuStack_b0,0,&uStack_100);
  FUN_10abdd170(&lStack_140,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined2 *)((long)param_2 + 4),3);
  if (uStack_a0._7_1_ < '\0') {
    __ZdlPv(ppuStack_b0);
  }
  fVar24 = *(float *)(param_2[6] + 0x5c);
  *(float *)(pbVar22 + 0x24) = fVar24;
  *(float *)(pbVar22 + 0x28) = 1.0 / fVar24;
  lVar12 = param_2[2] + 0x5c0;
  func_0x00010a04a0d4(lVar12,*(undefined2 *)(param_2[3] + 2));
  lVar13 = 200;
  if (*(ulong *)(lVar12 + 0x2b8) < 2) {
    lVar13 = 0x1e0;
  }
  fVar25 = *(float *)(lVar12 + lVar13 + 0x130) * 0.5 * (float)iVar21;
  fVar24 = *(float *)(lVar12 + lVar13 + 0x144) * 0.5 * (float)iVar18;
  if (fVar25 <= fVar24) {
    fVar24 = fVar25;
  }
  *(float *)(pbVar22 + 0x2c) = fVar24;
  ppuStack_b0 = (undefined **)0x8000000000000000;
  uStack_a8 = (undefined ****)((ulong)uStack_a8._4_4_ << 0x20);
  lStack_80 = 0;
  plStack_88 = (long *)0x0;
  lStack_70 = 0;
  lStack_78 = 0;
  ppuStack_d0 = &PTR_DAT_110c53ed8;
  pppuStack_b8 = &ppuStack_d0;
  FUN_10abda784(&ppuStack_d0,&uStack_a0);
  if (pppuStack_b8 == &ppuStack_d0) {
    lVar12 = 0x20;
LAB_10abaea80:
    (**(code **)((long)*pppuStack_b8 + lVar12))();
  }
  else if (pppuStack_b8 != (undefined ***)0x0) {
    lVar12 = 0x28;
    goto LAB_10abaea80;
  }
  uStack_a8 = (undefined ****)CONCAT44(uStack_a8._4_4_,0xfffffe0c);
  lVar12 = param_1;
  FUN_10aba5824(param_1,param_2,0,&ppuStack_b0);
  plStack_d8 = *(long **)(lStack_130 + 0x20);
  uStack_e0 = *(undefined8 *)(lStack_130 + 0x18);
  if (*(long *)(lStack_130 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(lStack_130 + 0x20) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppuStack_d0 = (undefined **)0x0;
  ppppuStack_c8 = (undefined ****)0x0;
  uStack_c0 = 0;
  FUN_10a5e7178(&ppuStack_d0,&uStack_e0,&ppuStack_d0,1);
  FUN_10a5d2c88(lVar12,&ppuStack_d0);
  pppuStack_e8 = &ppuStack_d0;
  FUN_10a3f9078(&pppuStack_e8);
  plVar1 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar2 = plStack_d8 + 1;
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
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  func_0x00010a5d2bb4(lVar12 + 0x180,*(undefined8 *)(lStack_110 + 0x18));
  *(undefined1 *)(lVar12 + 0x19d) = 1;
  *(undefined4 *)(lVar12 + 0x198) = 0x3f800000;
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  if (plStack_88 == &uStack_a0) {
    lVar12 = 0x20;
LAB_10abaeb94:
    (**(code **)(*plStack_88 + lVar12))();
  }
  else if (plStack_88 != (long *)0x0) {
    lVar12 = 0x28;
    goto LAB_10abaeb94;
  }
  uStack_e0 = 0x8000000000000000;
  plStack_d8 = (long *)CONCAT44(plStack_d8._4_4_,0xfffffe0d);
  lVar12 = param_1;
  FUN_10aba5a90(param_1,param_2,1,&uStack_e0);
  ppppuStack_c8 = *(undefined *****)(lStack_120 + 0x20);
  ppuStack_d0 = *(undefined ***)(lStack_120 + 0x18);
  if (*(long *)(lStack_120 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(lStack_120 + 0x20) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = (undefined ****)0x0;
  uStack_a0 = 0;
  FUN_10a5e7178(&ppuStack_b0,&ppuStack_d0,&uStack_c0,1);
  FUN_10a5d2c88(lVar12,&ppuStack_b0);
  ppppuVar9 = &pppuStack_e8;
  pppuStack_e8 = &ppuStack_b0;
  FUN_10a3f9078(ppppuVar9);
  ppppuVar19 = ppppuStack_c8;
  if (ppppuStack_c8 != (undefined ****)0x0) {
    ppppuVar20 = ppppuStack_c8 + 1;
    do {
      pppuVar14 = *ppppuVar20;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppuVar20,0x10);
      if (bVar6) {
        *ppppuVar20 = (undefined ***)((long)pppuVar14 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppuVar14 == (undefined ***)0x0) {
      (*(code *)(*ppppuStack_c8)[2])(ppppuStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar19);
      ppppuVar9 = ppppuVar19;
    }
  }
  if (1 < pbVar22[1]) {
    uStack_e0 = 0x8000000000000000;
    plStack_d8 = (long *)CONCAT44(plStack_d8._4_4_,0xfffffe0e);
    lVar12 = param_1;
    FUN_10aba5a90(param_1,param_2,2,&uStack_e0);
    ppppuStack_c8 = *(undefined *****)(lStack_130 + 0x20);
    ppuStack_d0 = *(undefined ***)(lStack_130 + 0x18);
    if (*(long *)(lStack_130 + 0x20) != 0) {
      plVar1 = (long *)(*(long *)(lStack_130 + 0x20) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    ppuStack_b0 = (undefined **)0x0;
    uStack_a8 = (undefined ****)0x0;
    uStack_a0 = 0;
    FUN_10a5e7178(&ppuStack_b0,&ppuStack_d0,&uStack_c0,1);
    FUN_10a5d2c88(lVar12,&ppuStack_b0);
    pppuStack_e8 = &ppuStack_b0;
    FUN_10a3f9078(&pppuStack_e8);
    ppppuVar9 = ppppuStack_c8;
    if (ppppuStack_c8 != (undefined ****)0x0) {
      plVar1 = (long *)(ppppuStack_c8 + 1);
      do {
        lVar12 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        (**(code **)((long)*ppppuStack_c8 + 0x10))(ppppuStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar9);
      }
    }
    plStack_d8 = (long *)CONCAT44(plStack_d8._4_4_,0xfffffe0f);
    lVar12 = param_1;
    FUN_10aba5a90(param_1,param_2,3,&uStack_e0);
    ppppuStack_c8 = *(undefined *****)(lStack_140 + 0x20);
    ppuStack_d0 = *(undefined ***)(lStack_140 + 0x18);
    if (*(long *)(lStack_140 + 0x20) != 0) {
      plVar1 = (long *)(*(long *)(lStack_140 + 0x20) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    ppuStack_b0 = (undefined **)0x0;
    uStack_a8 = (undefined ****)0x0;
    uStack_a0 = 0;
    FUN_10a5e7178(&ppuStack_b0,&ppuStack_d0,&uStack_c0,1);
    FUN_10a5d2c88(lVar12,&ppuStack_b0);
    ppppuVar9 = &pppuStack_e8;
    pppuStack_e8 = &ppuStack_b0;
    FUN_10a3f9078(ppppuVar9);
    ppppuVar19 = ppppuStack_c8;
    if (ppppuStack_c8 != (undefined ****)0x0) {
      ppppuVar20 = ppppuStack_c8 + 1;
      do {
        pppuVar14 = *ppppuVar20;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppuVar20,0x10);
        if (bVar6) {
          *ppppuVar20 = (undefined ***)((long)pppuVar14 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppuVar14 == (undefined ***)0x0) {
        (*(code *)(*ppppuStack_c8)[2])(ppppuStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar19);
        ppppuVar9 = ppppuVar19;
      }
    }
  }
  if (pbVar22[0x1c] == 0) goto LAB_10abaf0e4;
  ppppuVar19 = *(undefined *****)(param_1 + 8);
  if ((ulong)((long)ppppuVar19[2] - (long)ppppuVar19[1]) < 0x29) goto LAB_10abaf1f8;
  ppuVar10 = ppppuVar19[1][5];
  ppppuVar9 = (undefined ****)0x0;
  if (ppuVar10 != (undefined **)0x0) {
    ___dynamic_cast(ppuVar10,&PTR_DAT_110baa1c8,&PTR_DAT_110c506e0,0);
    ppppuVar9 = (undefined ****)0x0;
    if (ppuVar10 != (undefined **)0x0) {
      plStack_88 = (long *)param_2[5];
      lStack_90 = param_2[4];
      lStack_78 = param_2[7];
      lStack_80 = param_2[6];
      lStack_68 = param_2[9];
      lStack_70 = param_2[8];
      uStack_a8 = (undefined ****)param_2[1];
      ppuStack_b0 = (undefined **)*param_2;
      lStack_98 = param_2[3];
      uStack_a0 = param_2[2];
      FUN_10aba737c(ppppuVar19,5,&ppuStack_b0);
      uVar11 = ((ulong)ppppuVar19 & 0xffffffff) - 1;
      uVar15 = ((long)ppuVar10[0xc] - (long)ppuVar10[0xb] >> 3) * -0x3333333333333333;
      if (uVar11 <= uVar15 && uVar15 - uVar11 != 0) {
        uVar15 = (ulong)*(ushort *)((long)param_2 + 4);
        uVar16 = uVar15 - 1;
        uVar17 = (*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 3) * -0x71c71c71c71c71c7;
        if (uVar16 <= uVar17 && uVar17 - uVar16 != 0) {
          ppppuVar20 = (undefined ****)(ppuVar10[0xb] + (long)(int)uVar11 * 0x28);
          bVar4 = *(byte *)(*(long *)(param_1 + 0x58) + (long)(int)uVar16 * 0x48 + 0x1c);
          if (bVar4 - 2 < 3) {
            FUN_10abdd170(&ppuStack_b0,*(undefined8 *)(param_1 + 0x18),
                          *(undefined8 *)(param_1 + 0x20),uVar15,1);
            func_0x00010abafca0(&ppuStack_d0,ppuStack_b0[1]);
            FUN_10a00e5c4(ppppuVar20,&ppuStack_d0);
            ppppuVar19 = ppppuStack_c8;
            ppppuVar9 = ppppuVar20;
            if (ppppuStack_c8 != (undefined ****)0x0) {
              ppppuVar20 = ppppuStack_c8 + 1;
              do {
                pppuVar14 = *ppppuVar20;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppuVar20,0x10);
                if (bVar6) {
                  *ppppuVar20 = (undefined ***)((long)pppuVar14 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (pppuVar14 == (undefined ***)0x0) {
                (*(code *)(*ppppuStack_c8)[2])(ppppuStack_c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar19);
                ppppuVar9 = ppppuVar19;
              }
            }
            if (uStack_a8 == (undefined ****)0x0) goto LAB_10abaf0e4;
            ppppuVar19 = uStack_a8 + 1;
            do {
              pppuVar14 = *ppppuVar19;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppuVar19,0x10);
              if (bVar6) {
                *ppppuVar19 = (undefined ***)((long)pppuVar14 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          else if (bVar4 == 5) {
            FUN_10abdd170(&ppuStack_b0,*(undefined8 *)(param_1 + 0x18),
                          *(undefined8 *)(param_1 + 0x20),uVar15,3);
            func_0x00010abafca0(&ppuStack_d0,ppuStack_b0[1]);
            FUN_10a00e5c4(ppppuVar20,&ppuStack_d0);
            ppppuVar19 = ppppuStack_c8;
            ppppuVar9 = ppppuVar20;
            if (ppppuStack_c8 != (undefined ****)0x0) {
              ppppuVar20 = ppppuStack_c8 + 1;
              do {
                pppuVar14 = *ppppuVar20;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppuVar20,0x10);
                if (bVar6) {
                  *ppppuVar20 = (undefined ***)((long)pppuVar14 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (pppuVar14 == (undefined ***)0x0) {
                (*(code *)(*ppppuStack_c8)[2])(ppppuStack_c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar19);
                ppppuVar9 = ppppuVar19;
              }
            }
            if (uStack_a8 == (undefined ****)0x0) goto LAB_10abaf0e4;
            ppppuVar19 = uStack_a8 + 1;
            do {
              pppuVar14 = *ppppuVar19;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppuVar19,0x10);
              if (bVar6) {
                *ppppuVar19 = (undefined ***)((long)pppuVar14 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          else {
            ppppuVar9 = ppppuVar19;
            if (bVar4 != 1) goto LAB_10abaf0e4;
            *(undefined1 *)((long)ppppuVar20 + 0x24) = 1;
            puVar3 = *(undefined8 **)(param_2[6] + 0x168);
            if (*(undefined8 **)(param_2[6] + 0x170) != puVar3) {
              func_0x00010abafca0(&ppuStack_b0,*puVar3);
              FUN_10a00e5c4(ppppuVar20,&ppuStack_b0);
              ppppuVar9 = uStack_a8;
              if (uStack_a8 != (undefined ****)0x0) {
                ppppuVar19 = uStack_a8 + 1;
                do {
                  pppuVar14 = *ppppuVar19;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppppuVar19,0x10);
                  if (bVar6) {
                    *ppppuVar19 = (undefined ***)((long)pppuVar14 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (pppuVar14 == (undefined ***)0x0) {
                  (*(code *)(*uStack_a8)[2])(uStack_a8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar9);
                }
              }
              uVar15 = (ulong)*(ushort *)((long)param_2 + 4);
            }
            FUN_10abdcbf4(&ppuStack_b0,*(undefined8 *)(param_1 + 0x18),
                          *(undefined8 *)(param_1 + 0x20),uVar15);
            func_0x00010abafbc0(&ppuStack_d0,ppuStack_b0[1]);
            ppppuVar9 = ppppuVar20 + 2;
            FUN_10a00e5c4(ppppuVar9,&ppuStack_d0);
            ppppuVar19 = ppppuStack_c8;
            if (ppppuStack_c8 != (undefined ****)0x0) {
              ppppuVar20 = ppppuStack_c8 + 1;
              do {
                pppuVar14 = *ppppuVar20;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppuVar20,0x10);
                if (bVar6) {
                  *ppppuVar20 = (undefined ***)((long)pppuVar14 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (pppuVar14 == (undefined ***)0x0) {
                (*(code *)(*ppppuStack_c8)[2])(ppppuStack_c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar19);
                ppppuVar9 = ppppuVar19;
              }
            }
            if (uStack_a8 == (undefined ****)0x0) goto LAB_10abaf0e4;
            ppppuVar19 = uStack_a8 + 1;
            do {
              pppuVar14 = *ppppuVar19;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppuVar19,0x10);
              if (bVar6) {
                *ppppuVar19 = (undefined ***)((long)pppuVar14 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          ppppuVar19 = uStack_a8;
          if (pppuVar14 == (undefined ***)0x0) {
            (*(code *)(*uStack_a8)[2])(uStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar19);
            ppppuVar9 = ppppuVar19;
          }
          goto LAB_10abaf0e4;
        }
      }
LAB_10abaf1f8:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10abaf1fc);
      (*pcVar7)();
    }
  }
LAB_10abaf0e4:
  if (ppppuStack_138 != (undefined ****)0x0) {
    ppppuVar19 = ppppuStack_138 + 1;
    do {
      pppuVar14 = *ppppuVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppuVar19,0x10);
      if (bVar6) {
        *ppppuVar19 = (undefined ***)((long)pppuVar14 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppuVar14 == (undefined ***)0x0) {
      (*(code *)(*ppppuStack_138)[2])(ppppuStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuStack_138);
      ppppuVar9 = ppppuStack_138;
    }
  }
  if (ppppuStack_128 != (undefined ****)0x0) {
    ppppuVar19 = ppppuStack_128 + 1;
    do {
      pppuVar14 = *ppppuVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppuVar19,0x10);
      if (bVar6) {
        *ppppuVar19 = (undefined ***)((long)pppuVar14 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppuVar14 == (undefined ***)0x0) {
      (*(code *)(*ppppuStack_128)[2])(ppppuStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuStack_128);
      ppppuVar9 = ppppuStack_128;
    }
  }
  if (ppppuStack_118 != (undefined ****)0x0) {
    ppppuVar19 = ppppuStack_118 + 1;
    do {
      pppuVar14 = *ppppuVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppuVar19,0x10);
      if (bVar6) {
        *ppppuVar19 = (undefined ***)((long)pppuVar14 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppuVar14 == (undefined ***)0x0) {
      (*(code *)(*ppppuStack_118)[2])(ppppuStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuStack_118);
      ppppuVar9 = ppppuStack_118;
    }
  }
  if (ppppuStack_108 != (undefined ****)0x0) {
    ppppuVar19 = ppppuStack_108 + 1;
    do {
      pppuVar14 = *ppppuVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppuVar19,0x10);
      if (bVar6) {
        *ppppuVar19 = (undefined ***)((long)pppuVar14 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppuVar14 == (undefined ***)0x0) {
      (*(code *)(*ppppuStack_108)[2])(ppppuStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuStack_108);
      ppppuVar9 = ppppuStack_108;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppppuVar9;
  }
  ___stack_chk_fail();
  FUN_10abda8f0(&ppuStack_b0);
  func_0x00010abda948(&lStack_140);
  func_0x00010abda948(&lStack_130);
  func_0x00010abda948(&lStack_120);
  FUN_10abda8f0(&lStack_110);
  __Unwind_Resume(ppppuVar9);
  return (undefined ****)0x1;
}



/* Entry: 10abaf344; end: 10abaf353;  */

undefined8 FUN_10abaf344(void)

{
  return 1;
}



/* Entry: 10abaf354; end: 10abafbbf;  */

void FUN_10abaf354(undefined8 **param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *unaff_x23;
  long lStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 *puStack_258;
  undefined8 **ppuStack_250;
  undefined8 **ppuStack_248;
  undefined8 **ppuStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 *apuStack_220 [3];
  undefined8 **ppuStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  long alStack_190 [3];
  long *plStack_178;
  undefined8 *puStack_170;
  long *plStack_168;
  undefined8 **ppuStack_160;
  undefined8 **ppuStack_158;
  undefined8 **ppuStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 *apuStack_130 [3];
  undefined8 **ppuStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  long alStack_98 [3];
  long *plStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = (ulong)*(ushort *)((long)param_2 + 4) - 1;
  uVar13 = ((long)param_1[0xc] - (long)param_1[0xb] >> 3) * -0x71c71c71c71c71c7;
  if (uVar13 < uVar10 || uVar13 - uVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10abaf9e0);
    (*pcVar5)();
  }
  plVar6 = param_1[0xb] + (long)(int)uVar10 * 9;
  uVar2 = *(ushort *)((long)param_2 + 6);
  if (uVar2 == 1) {
    FUN_10abdcbf4(&ppuStack_160,param_1[3],param_1[4]);
    lStack_278 = plVar6[5];
    lStack_280 = plVar6[4];
    lStack_268 = plVar6[7];
    lStack_270 = plVar6[6];
    lStack_260 = plVar6[8];
    lStack_298 = plVar6[1];
    lStack_2a0 = *plVar6;
    lStack_288 = plVar6[3];
    lStack_290 = plVar6[2];
    param_1 = param_1 + 0x13;
    FUN_10aba93b0();
    FUN_10abafbc0(&ppuStack_78,ppuStack_160[1]);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    FUN_10a756a10(&uStack_2b8,&ppuStack_78,&lStack_68,1);
    plStack_80 = (long *)0x0;
    plVar6 = (long *)0x50;
    __Znwm();
    plVar6[4] = lStack_288;
    plVar6[3] = lStack_290;
    plVar6[6] = lStack_278;
    plVar6[5] = lStack_280;
    plVar6[8] = lStack_268;
    plVar6[7] = lStack_270;
    *plVar6 = (long)&PTR_FUN_110c53f58;
    plVar6[9] = lStack_260;
    plVar6[2] = lStack_298;
    plVar6[1] = lStack_2a0;
    lStack_2c8 = 0;
    uStack_2c0 = 0;
    lStack_2d0 = 0;
    plStack_80 = plVar6;
    FUN_10ab10a0c(param_1,param_3,&uStack_2b8,alStack_98,&lStack_2d0,0);
    param_2 = param_3;
    if (lStack_2d0 != 0) {
      lStack_2c8 = lStack_2d0;
      __ZdlPv();
      param_2 = param_3;
    }
    if (plStack_80 == alStack_98) {
      lVar11 = 0x20;
LAB_10abaf5c4:
      (**(code **)(*plStack_80 + lVar11))();
    }
    else if (plStack_80 != (long *)0x0) {
      lVar11 = 0x28;
      goto LAB_10abaf5c4;
    }
    puStack_170 = &uStack_2b8;
    param_1 = &puStack_170;
    FUN_10a18ba48();
    if (ppuStack_70 != (undefined8 **)0x0) {
      ppuVar7 = ppuStack_70 + 1;
      do {
        puVar12 = *ppuVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar4) {
          *ppuVar7 = (undefined8 *)((long)puVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar12 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_70)[2])(ppuStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppuStack_70;
      }
    }
    if (ppuStack_158 == (undefined8 **)0x0) goto LAB_10abaf9a4;
    ppuVar7 = ppuStack_158 + 1;
    do {
      puVar12 = *ppuVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
      if (bVar4) {
        *ppuVar7 = (undefined8 *)((long)puVar12 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar8 = ppuStack_158;
    } while (cVar3 != '\0');
  }
  else {
    if ((uVar2 & 0xfffe) != 2) goto LAB_10abaf9a4;
    uVar9 = 1;
    if (uVar2 != 2) {
      uVar9 = 2;
    }
    FUN_10abdd170(&ppuStack_78,param_1[3],param_1[4],(ulong)*(ushort *)((long)param_2 + 4),uVar9);
    ppuStack_158 = ppuStack_78;
    ppuStack_150 = ppuStack_70;
    if (ppuStack_70 != (undefined8 **)0x0) {
      ppuVar7 = ppuStack_70 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar4) {
          *ppuVar7 = (undefined8 *)((long)*ppuVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_140 = param_2[1];
    lStack_148 = *param_2;
    lStack_138 = param_2[2];
    ppuStack_160 = param_1;
    func_0x00010a194208(apuStack_130,param_2 + 3);
    lStack_110 = 0;
    lStack_108 = 0;
    uStack_100 = 0;
    FUN_10a194110(&lStack_110,param_2[7],param_2[8],param_2[8] - param_2[7] >> 2);
    uStack_f8 = (undefined1)param_2[10];
    lStack_e8 = plVar6[1];
    lStack_f0 = *plVar6;
    lStack_d8 = plVar6[3];
    lStack_e0 = plVar6[2];
    lStack_c8 = plVar6[5];
    lStack_d0 = plVar6[4];
    lStack_c0 = plVar6[6];
    uStack_b0 = (undefined4)plVar6[8];
    uStack_ac = (undefined4)((ulong)plVar6[8] >> 0x20);
    uStack_b8 = (undefined4)plVar6[7];
    uStack_b4 = (undefined4)((ulong)plVar6[7] >> 0x20);
    param_1 = param_1 + 0x17;
    uStack_a8 = (uint)uVar2;
    FUN_10aba93b0(param_1);
    plVar6 = ppuStack_78[1];
    FUN_10abdd250();
    if (plVar6 == (long *)0x0) {
      puStack_170 = (undefined8 *)0x0;
      plStack_168 = (long *)0x0;
    }
    else {
      FUN_10abf1b04();
      plStack_168 = (long *)plVar6[1];
      puStack_170 = (undefined8 *)*plVar6;
      if (plVar6[1] != 0) {
        plVar6 = (long *)(plVar6[1] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    FUN_10a756a10(&uStack_2e8,&puStack_170,&ppuStack_160,1);
    ppuStack_248 = ppuStack_158;
    ppuStack_250 = ppuStack_160;
    ppuStack_240 = ppuStack_150;
    if (ppuStack_150 != (undefined8 **)0x0) {
      ppuVar7 = ppuStack_150 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar4) {
          *ppuVar7 = (undefined8 *)((long)*ppuVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_230 = lStack_140;
    lStack_238 = lStack_148;
    lStack_228 = lStack_138;
    ppuStack_208 = ppuStack_118;
    if (ppuStack_118 != (undefined8 **)0x0) {
      if (ppuStack_118 == apuStack_130) {
        ppuStack_208 = apuStack_220;
        (*(code *)(*ppuStack_118)[3])(ppuStack_118,apuStack_220);
      }
      else {
        ppuVar7 = ppuStack_118;
        (*(code *)(*ppuStack_118)[2])();
        ppuStack_208 = ppuVar7;
      }
    }
    lStack_200 = 0;
    lStack_1f8 = 0;
    uStack_1f0 = 0;
    FUN_10a194110(&lStack_200,lStack_110,lStack_108,lStack_108 - lStack_110 >> 2);
    uStack_1e8 = uStack_f8;
    lStack_1b8 = lStack_c8;
    lStack_1c0 = lStack_d0;
    uStack_1a8 = uStack_b8;
    lStack_1b0 = lStack_c0;
    uStack_19c = CONCAT44(uStack_a8,uStack_ac);
    uStack_1a4 = uStack_b4;
    uStack_1a0 = uStack_b0;
    lStack_1d8 = lStack_e8;
    lStack_1e0 = lStack_f0;
    lStack_1c8 = lStack_d8;
    lStack_1d0 = lStack_e0;
    plStack_178 = (long *)0x0;
    unaff_x23 = (long *)0xc8;
    __Znwm();
    *unaff_x23 = (long)&PTR_FUN_110c53fd8;
    unaff_x23[2] = (long)ppuStack_248;
    unaff_x23[1] = (long)ppuStack_250;
    unaff_x23[3] = (long)ppuStack_240;
    *(undefined8 *)((ulong)&ppuStack_250 | 8) = 0;
    ((undefined8 *)((ulong)&ppuStack_250 | 8))[1] = 0;
    unaff_x23[5] = lStack_230;
    unaff_x23[4] = lStack_238;
    unaff_x23[6] = lStack_228;
    ppuVar7 = ppuStack_208;
    if (ppuStack_208 == (undefined8 **)0x0) {
LAB_10abaf77c:
      unaff_x23[10] = (long)ppuVar7;
    }
    else {
      if (ppuStack_208 != apuStack_220) {
        (*(code *)(*ppuStack_208)[2])();
        goto LAB_10abaf77c;
      }
      unaff_x23[10] = (long)(unaff_x23 + 7);
      (*(code *)(*ppuStack_208)[3])(ppuStack_208,unaff_x23 + 7);
    }
    unaff_x23[0xb] = 0;
    unaff_x23[0xc] = 0;
    unaff_x23[0xd] = 0;
    FUN_10a194110();
    unaff_x23[0x12] = lStack_1c8;
    unaff_x23[0x11] = lStack_1d0;
    unaff_x23[0x14] = lStack_1b8;
    unaff_x23[0x13] = lStack_1c0;
    unaff_x23[0x16] = CONCAT44(uStack_1a4,uStack_1a8);
    unaff_x23[0x15] = lStack_1b0;
    *(undefined8 *)((long)unaff_x23 + 0xbc) = uStack_19c;
    *(ulong *)((long)unaff_x23 + 0xb4) = CONCAT44(uStack_1a0,uStack_1a4);
    *(undefined1 *)(unaff_x23 + 0xe) = uStack_1e8;
    unaff_x23[0x10] = lStack_1d8;
    unaff_x23[0xf] = lStack_1e0;
    *(undefined4 *)((long)unaff_x23 + 0xc4) = 0;
    lStack_2f8 = 0;
    uStack_2f0 = 0;
    lStack_300 = 0;
    plStack_178 = unaff_x23;
    FUN_10ab10a0c(param_1,param_3,&uStack_2e8,alStack_190,&lStack_300,0);
    param_2 = param_3;
    if (lStack_300 != 0) {
      lStack_2f8 = lStack_300;
      __ZdlPv();
      param_2 = param_3;
    }
    if (plStack_178 == alStack_190) {
      lVar11 = 0x20;
LAB_10abaf838:
      (**(code **)(*plStack_178 + lVar11))();
    }
    else if (plStack_178 != (long *)0x0) {
      lVar11 = 0x28;
      goto LAB_10abaf838;
    }
    if (lStack_200 != 0) {
      lStack_1f8 = lStack_200;
      __ZdlPv();
    }
    if (ppuStack_208 == apuStack_220) {
      lVar11 = 0x20;
LAB_10abaf870:
      (**(code **)((long)*ppuStack_208 + lVar11))();
    }
    else if (ppuStack_208 != (undefined8 **)0x0) {
      lVar11 = 0x28;
      goto LAB_10abaf870;
    }
    ppuVar7 = ppuStack_240;
    if (ppuStack_240 != (undefined8 **)0x0) {
      ppuVar8 = ppuStack_240 + 1;
      do {
        puVar12 = *ppuVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar4) {
          *ppuVar8 = (undefined8 *)((long)puVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar12 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_240)[2])(ppuStack_240);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
      }
    }
    puStack_258 = &uStack_2e8;
    FUN_10a18ba48(&puStack_258);
    plVar6 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      plVar1 = plStack_168 + 1;
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
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (lStack_110 != 0) {
      lStack_108 = lStack_110;
      __ZdlPv();
    }
    if (ppuStack_118 == apuStack_130) {
      lVar11 = 0x20;
LAB_10abaf928:
      (**(code **)((long)*ppuStack_118 + lVar11))();
    }
    else if (ppuStack_118 != (undefined8 **)0x0) {
      lVar11 = 0x28;
      goto LAB_10abaf928;
    }
    ppuVar7 = ppuStack_150;
    param_1 = ppuStack_118;
    if (ppuStack_150 != (undefined8 **)0x0) {
      ppuVar8 = ppuStack_150 + 1;
      do {
        puVar12 = *ppuVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar4) {
          *ppuVar8 = (undefined8 *)((long)puVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar12 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_150)[2])(ppuStack_150);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppuVar7;
      }
    }
    if (ppuStack_70 == (undefined8 **)0x0) goto LAB_10abaf9a4;
    ppuVar7 = ppuStack_70 + 1;
    do {
      puVar12 = *ppuVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
      if (bVar4) {
        *ppuVar7 = (undefined8 *)((long)puVar12 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar8 = ppuStack_70;
    } while (cVar3 != '\0');
  }
  if (puVar12 == (undefined8 *)0x0) {
    (*(code *)(*ppuVar8)[2])(ppuVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    param_1 = ppuVar8;
  }
LAB_10abaf9a4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010abda948(unaff_x23 + 2);
    __ZdlPv(unaff_x23);
    func_0x00010abafc3c(&ppuStack_250);
    puStack_258 = &uStack_2e8;
    FUN_10a18ba48(&puStack_258);
    func_0x00010a0523dc(&puStack_170);
    func_0x00010abafc3c(&ppuStack_160);
    func_0x00010abda948(&ppuStack_78);
    __Unwind_Resume();
    if (((param_2 == (long *)0x0) || (FUN_10ac26490(param_2,0), param_2 == (long *)0x0)) ||
       (___dynamic_cast(), param_2 == (long *)0x0)) {
      *param_1 = (undefined8 *)0x0;
      param_1[1] = (undefined8 *)0x0;
    }
    else {
      FUN_10abf1b04();
      lVar11 = param_2[1];
      puVar12 = (undefined8 *)*param_2;
      param_1[1] = (undefined8 *)param_2[1];
      *param_1 = puVar12;
      if (lVar11 != 0) {
        plVar6 = (long *)(lVar11 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    return;
  }
  return;
}



/* Entry: 10abafbc0; end: 10abafcf7;  */

void FUN_10abafbc0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (((param_2 == (undefined8 *)0x0) || (FUN_10ac26490(param_2,0), param_2 == (undefined8 *)0x0))
     || (___dynamic_cast(), param_2 == (undefined8 *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_10abf1b04();
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
  }
  return;
}



/* Entry: 10abafcf8; end: 10abafff3;  */

long * FUN_10abafcf8(long *param_1,long *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  long *plVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  undefined *puVar24;
  long alStack_128 [3];
  long *plStack_110;
  long lStack_108;
  undefined **ppuStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **appuStack_98 [3];
  undefined ***pppuStack_80;
  undefined **appuStack_78 [3];
  undefined ***pppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[10] = (long)&PTR_FUN_110c52f28;
  param_1[1] = (long)param_2;
  param_1[2] = (long)(param_1 + 10);
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *param_1 = (long)&PTR_FUN_110c50148;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0x10000;
  *(undefined2 *)((long)param_1 + 0x5c) = 1;
  plVar7 = param_1 + 0xc;
  param_1[0xd] = 0;
  *plVar7 = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x17] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_2 = (long *)*param_2;
  (**(code **)(*param_2 + 200))();
  lVar21 = param_2[0x38];
  appuStack_78[0] = &PTR_FUN_110c54058;
  pppuStack_60 = appuStack_78;
  FUN_10abafff4(&lStack_d0,lVar21,1,appuStack_78);
  param_1[0x15] = lStack_c8;
  param_1[0x14] = lStack_d0;
  param_1[0x17] = lStack_b8;
  param_1[0x16] = lStack_c0;
  if (pppuStack_60 == appuStack_78) {
    lVar11 = 0x20;
LAB_10abafe0c:
    (**(code **)((long)*pppuStack_60 + lVar11))();
  }
  else if (pppuStack_60 != (undefined ***)0x0) {
    lVar11 = 0x28;
    goto LAB_10abafe0c;
  }
  appuStack_98[0] = &PTR_DAT_110c540d8;
  pppuStack_80 = appuStack_98;
  FUN_10abafff4(&lStack_d0,lVar21,2,appuStack_98);
  param_1[0x19] = lStack_c8;
  param_1[0x18] = lStack_d0;
  param_1[0x1b] = lStack_b8;
  param_1[0x1a] = lStack_c0;
  if (pppuStack_80 == appuStack_98) {
    lVar21 = 0x20;
LAB_10abafe64:
    (**(code **)((long)*pppuStack_80 + lVar21))();
    lVar21 = lStack_c0;
  }
  else {
    lVar21 = lStack_c0;
    if (pppuStack_80 != (undefined ***)0x0) {
      lVar21 = 0x28;
      goto LAB_10abafe64;
    }
  }
  puVar24 = &DAT_10f697712;
  puStack_a8 = &DAT_10f4bdd97;
  puStack_b0 = &DAT_10f697712;
  puStack_a0 = &DAT_10f697720;
  lStack_c8 = 0;
  lStack_c0 = 0;
  lStack_d0 = 0;
  pppuVar9 = appuStack_98;
  uVar10 = 3;
  FUN_10abd5914(&lStack_d0,&puStack_b0,pppuVar9,3);
  FUN_10aba6e58(param_1,&lStack_d0);
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  plVar6 = param_1 + 0x1c;
  uVar8 = 0x10;
  func_0x0001096b5544();
  if (param_1[0x1d] != param_1[0x1c]) {
    uVar22 = 0;
    uVar20 = 1;
    do {
      plVar6 = (long *)(ulong)(uVar20 - 1);
      FUN_10a73e8ac();
      if ((ulong)(param_1[0x1d] - param_1[0x1c] >> 3) <= uVar22) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10abaff58);
        (*pcVar5)();
      }
      puVar2 = (undefined4 *)(param_1[0x1c] + uVar22 * 8);
      *puVar2 = (int)puVar24;
      puVar2[1] = (int)lVar21;
      uVar22 = (ulong)uVar20;
      uVar20 = uVar20 + 1;
    } while (uVar22 < (ulong)(param_1[0x1d] - param_1[0x1c] >> 3));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    __ZdlPv();
  }
  param_1[10] = (long)&PTR_FUN_110c52f28;
  func_0x00010abd59bc(param_1 + 0xf);
  func_0x00010abd68a8(plVar7);
  func_0x00010aba7988(param_1);
  plVar23 = plVar6;
  __Unwind_Resume();
  ppuStack_100 = &PTR_FUN_110c52f28;
  pcStack_d8 = FUN_10abafff4;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_f8 = plVar6;
  plStack_f0 = plVar7;
  plStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010abda9a0(alStack_128,uVar10);
  FUN_10aba9ac4(plVar23,uVar8,4,pppuVar9,alStack_128);
  plVar7 = plStack_110;
  if (plStack_110 == alStack_128) {
    lVar21 = 0x20;
LAB_10abb0068:
    (**(code **)(*plStack_110 + lVar21))();
  }
  else if (plStack_110 != (long *)0x0) {
    lVar21 = 0x28;
    goto LAB_10abb0068;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return plVar7;
  }
  ___stack_chk_fail();
  if (plStack_110 == alStack_128) {
    lVar21 = 0x20;
  }
  else {
    if (plStack_110 == (long *)0x0) goto LAB_10abb00d8;
    lVar21 = 0x28;
  }
  (**(code **)(*plStack_110 + lVar21))();
LAB_10abb00d8:
  __Unwind_Resume();
  iVar1 = (int)plVar7[9] + 1;
  *(int *)(plVar7 + 9) = iVar1;
  if (0x2468ac < ((uint)(iVar1 * -0x789abcdf) >> 3 | iVar1 * 0x20000000)) {
    return plVar7;
  }
  lVar21 = plVar7[0xc];
  lVar11 = plVar7[0xd];
  plVar6 = plVar7;
  do {
    if (lVar21 == lVar11) {
      return plVar6;
    }
    lVar12 = 0;
    bVar4 = true;
    do {
      bVar13 = bVar4;
      plVar23 = (long *)(lVar21 + 0x820 + lVar12 * 0x28);
      plVar6 = (long *)plVar23[2];
      while (plVar3 = plVar6, plVar3 != (long *)0x0) {
        plVar6 = (long *)*plVar3;
        if (*(uint *)(plVar3 + 4) < (int)plVar7[9] - 1U) {
          uVar14 = plVar23[1];
          uVar22 = plVar3[1];
          uVar15 = uVar14 - 1;
          if ((uVar14 & uVar15) == 0) {
            uVar22 = uVar15 & uVar22;
          }
          else if (uVar14 <= uVar22) {
            uVar17 = 0;
            if (uVar14 != 0) {
              uVar17 = uVar22 / uVar14;
            }
            uVar22 = uVar22 - uVar17 * uVar14;
          }
          plVar18 = *(long **)(*plVar23 + uVar22 * 8);
          do {
            plVar16 = plVar18;
            plVar18 = (long *)*plVar16;
          } while ((long *)*plVar16 != plVar3);
          plVar18 = plVar6;
          if (plVar16 == plVar23 + 2) {
LAB_10abb01f4:
            if (plVar6 == (long *)0x0) {
LAB_10abb022c:
              *(undefined8 *)(*plVar23 + uVar22 * 8) = 0;
              plVar18 = (long *)*plVar3;
              goto LAB_10abb0234;
            }
            uVar17 = plVar6[1];
            if ((uVar14 & uVar15) == 0) {
              uVar19 = uVar17 & uVar15;
            }
            else {
              uVar19 = uVar17;
              if (uVar14 <= uVar17) {
                uVar19 = 0;
                if (uVar14 != 0) {
                  uVar19 = uVar17 / uVar14;
                }
                uVar19 = uVar17 - uVar19 * uVar14;
              }
            }
            if (uVar19 != uVar22) goto LAB_10abb022c;
LAB_10abb023c:
            if ((uVar14 & uVar15) == 0) {
              uVar17 = uVar17 & uVar15;
            }
            else if (uVar14 <= uVar17) {
              uVar15 = 0;
              if (uVar14 != 0) {
                uVar15 = uVar17 / uVar14;
              }
              uVar17 = uVar17 - uVar15 * uVar14;
            }
            if (uVar17 != uVar22) {
              *(long **)(*plVar23 + uVar17 * 8) = plVar16;
              plVar18 = (long *)*plVar3;
            }
          }
          else {
            uVar17 = plVar16[1];
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
            if (uVar17 != uVar22) goto LAB_10abb01f4;
LAB_10abb0234:
            if (plVar18 != (long *)0x0) {
              uVar17 = plVar18[1];
              goto LAB_10abb023c;
            }
          }
          *plVar16 = (long)plVar18;
          *plVar3 = 0;
          plVar23[3] = plVar23[3] + -1;
          __ZdlPv();
        }
      }
      lVar12 = 1;
      bVar4 = false;
    } while (bVar13);
    lVar21 = lVar21 + 0x898;
    plVar6 = (long *)0x0;
  } while( true );
}



/* Entry: 10abafff4; end: 10abb00df;  */

void FUN_10abafff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010abda9a0(alStack_58,param_4);
  FUN_10aba9ac4(param_1,param_2,4,param_3,alStack_58);
  plVar5 = plStack_40;
  if (plStack_40 == alStack_58) {
    lVar6 = 0x20;
LAB_10abb0068:
    (**(code **)(*plStack_40 + lVar6))();
  }
  else if (plStack_40 != (long *)0x0) {
    lVar6 = 0x28;
    goto LAB_10abb0068;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_40 == alStack_58) {
    lVar6 = 0x20;
  }
  else {
    if (plStack_40 == (long *)0x0) goto LAB_10abb00d8;
    lVar6 = 0x28;
  }
  (**(code **)(*plStack_40 + lVar6))();
LAB_10abb00d8:
  __Unwind_Resume();
  iVar1 = (int)plVar5[9] + 1;
  *(int *)(plVar5 + 9) = iVar1;
  if (0x2468ac < ((uint)(iVar1 * -0x789abcdf) >> 3 | iVar1 * 0x20000000)) {
    return;
  }
  lVar6 = plVar5[0xc];
  lVar2 = plVar5[0xd];
  do {
    if (lVar6 == lVar2) {
      return;
    }
    lVar7 = 0;
    bVar4 = true;
    do {
      bVar9 = bVar4;
      plVar16 = (long *)(lVar6 + 0x820 + lVar7 * 0x28);
      plVar17 = (long *)plVar16[2];
      while (plVar3 = plVar17, plVar3 != (long *)0x0) {
        plVar17 = (long *)*plVar3;
        if (*(uint *)(plVar3 + 4) < (int)plVar5[9] - 1U) {
          uVar10 = plVar16[1];
          uVar8 = plVar3[1];
          uVar11 = uVar10 - 1;
          if ((uVar10 & uVar11) == 0) {
            uVar8 = uVar11 & uVar8;
          }
          else if (uVar10 <= uVar8) {
            uVar13 = 0;
            if (uVar10 != 0) {
              uVar13 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar13 * uVar10;
          }
          plVar14 = *(long **)(*plVar16 + uVar8 * 8);
          do {
            plVar12 = plVar14;
            plVar14 = (long *)*plVar12;
          } while ((long *)*plVar12 != plVar3);
          plVar14 = plVar17;
          if (plVar12 == plVar16 + 2) {
LAB_10abb01f4:
            if (plVar17 == (long *)0x0) {
LAB_10abb022c:
              *(undefined8 *)(*plVar16 + uVar8 * 8) = 0;
              plVar14 = (long *)*plVar3;
              goto LAB_10abb0234;
            }
            uVar13 = plVar17[1];
            if ((uVar10 & uVar11) == 0) {
              uVar15 = uVar13 & uVar11;
            }
            else {
              uVar15 = uVar13;
              if (uVar10 <= uVar13) {
                uVar15 = 0;
                if (uVar10 != 0) {
                  uVar15 = uVar13 / uVar10;
                }
                uVar15 = uVar13 - uVar15 * uVar10;
              }
            }
            if (uVar15 != uVar8) goto LAB_10abb022c;
LAB_10abb023c:
            if ((uVar10 & uVar11) == 0) {
              uVar13 = uVar13 & uVar11;
            }
            else if (uVar10 <= uVar13) {
              uVar11 = 0;
              if (uVar10 != 0) {
                uVar11 = uVar13 / uVar10;
              }
              uVar13 = uVar13 - uVar11 * uVar10;
            }
            if (uVar13 != uVar8) {
              *(long **)(*plVar16 + uVar13 * 8) = plVar12;
              plVar14 = (long *)*plVar3;
            }
          }
          else {
            uVar13 = plVar12[1];
            if ((uVar10 & uVar11) == 0) {
              uVar13 = uVar13 & uVar11;
            }
            else if (uVar10 <= uVar13) {
              uVar15 = 0;
              if (uVar10 != 0) {
                uVar15 = uVar13 / uVar10;
              }
              uVar13 = uVar13 - uVar15 * uVar10;
            }
            if (uVar13 != uVar8) goto LAB_10abb01f4;
LAB_10abb0234:
            if (plVar14 != (long *)0x0) {
              uVar13 = plVar14[1];
              goto LAB_10abb023c;
            }
          }
          *plVar12 = (long)plVar14;
          *plVar3 = 0;
          plVar16[3] = plVar16[3] + -1;
          __ZdlPv();
        }
      }
      lVar7 = 1;
      bVar4 = false;
    } while (bVar9);
    lVar6 = lVar6 + 0x898;
  } while( true );
}



/* Entry: 10abb00e0; end: 10abb02c3;  */

void FUN_10abb00e0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  
  iVar1 = *(int *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x48) = iVar1;
  if (0x2468ac < ((uint)(iVar1 * -0x789abcdf) >> 3 | iVar1 * 0x20000000)) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x60);
  lVar3 = *(long *)(param_1 + 0x68);
  do {
    if (lVar2 == lVar3) {
      return;
    }
    lVar6 = 0;
    bVar5 = true;
    do {
      bVar8 = bVar5;
      plVar15 = (long *)(lVar2 + 0x820 + lVar6 * 0x28);
      plVar16 = (long *)plVar15[2];
      while (plVar4 = plVar16, plVar4 != (long *)0x0) {
        plVar16 = (long *)*plVar4;
        if (*(uint *)(plVar4 + 4) < *(int *)(param_1 + 0x48) - 1U) {
          uVar9 = plVar15[1];
          uVar7 = plVar4[1];
          uVar10 = uVar9 - 1;
          if ((uVar9 & uVar10) == 0) {
            uVar7 = uVar10 & uVar7;
          }
          else if (uVar9 <= uVar7) {
            uVar12 = 0;
            if (uVar9 != 0) {
              uVar12 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar12 * uVar9;
          }
          plVar13 = *(long **)(*plVar15 + uVar7 * 8);
          do {
            plVar11 = plVar13;
            plVar13 = (long *)*plVar11;
          } while ((long *)*plVar11 != plVar4);
          plVar13 = plVar16;
          if (plVar11 == plVar15 + 2) {
LAB_10abb01f4:
            if (plVar16 == (long *)0x0) {
LAB_10abb022c:
              *(undefined8 *)(*plVar15 + uVar7 * 8) = 0;
              plVar13 = (long *)*plVar4;
              goto LAB_10abb0234;
            }
            uVar12 = plVar16[1];
            if ((uVar9 & uVar10) == 0) {
              uVar14 = uVar12 & uVar10;
            }
            else {
              uVar14 = uVar12;
              if (uVar9 <= uVar12) {
                uVar14 = 0;
                if (uVar9 != 0) {
                  uVar14 = uVar12 / uVar9;
                }
                uVar14 = uVar12 - uVar14 * uVar9;
              }
            }
            if (uVar14 != uVar7) goto LAB_10abb022c;
LAB_10abb023c:
            if ((uVar9 & uVar10) == 0) {
              uVar12 = uVar12 & uVar10;
            }
            else if (uVar9 <= uVar12) {
              uVar10 = 0;
              if (uVar9 != 0) {
                uVar10 = uVar12 / uVar9;
              }
              uVar12 = uVar12 - uVar10 * uVar9;
            }
            if (uVar12 != uVar7) {
              *(long **)(*plVar15 + uVar12 * 8) = plVar11;
              plVar13 = (long *)*plVar4;
            }
          }
          else {
            uVar12 = plVar11[1];
            if ((uVar9 & uVar10) == 0) {
              uVar12 = uVar12 & uVar10;
            }
            else if (uVar9 <= uVar12) {
              uVar14 = 0;
              if (uVar9 != 0) {
                uVar14 = uVar12 / uVar9;
              }
              uVar12 = uVar12 - uVar14 * uVar9;
            }
            if (uVar12 != uVar7) goto LAB_10abb01f4;
LAB_10abb0234:
            if (plVar13 != (long *)0x0) {
              uVar12 = plVar13[1];
              goto LAB_10abb023c;
            }
          }
          *plVar11 = (long)plVar13;
          *plVar4 = 0;
          plVar15[3] = plVar15[3] + -1;
          __ZdlPv();
        }
      }
      lVar6 = 1;
      bVar5 = false;
    } while (bVar8);
    lVar2 = lVar2 + 0x898;
  } while( true );
}



/* Entry: 10abb02c4; end: 10abb02fb;  */

bool FUN_10abb02c4(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  if ((*(ushort *)(param_2 + 0x20) >> 2 & 1) == 0) {
    if (*(long **)(param_2 + 0x170) == *(long **)(param_2 + 0x168)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10abb02fc);
      (*pcVar1)();
    }
    lVar2 = **(long **)(param_2 + 0x168);
    if (lVar2 != 0) {
      return *(char *)(lVar2 + 0x304) == '\x04';
    }
  }
  return false;
}



/* Entry: 10abb02fc; end: 10abb0b93;  */

long * FUN_10abb02fc(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long **pplVar16;
  long *plVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  int *piVar23;
  undefined1 auVar24 [16];
  long *plVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  long lVar32;
  undefined1 auVar33 [16];
  long *plVar34;
  long lVar35;
  long *plVar36;
  long lVar37;
  long lStack_8d8;
  long *aplStack_8d0 [24];
  undefined1 auStack_810 [272];
  long lStack_700;
  undefined1 auStack_6f8 [544];
  long lStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined4 uStack_4b8;
  undefined1 uStack_4b4;
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  long lStack_4a0;
  long lStack_498;
  undefined8 uStack_490;
  undefined4 uStack_488;
  undefined1 uStack_484;
  long *plStack_480;
  long lStack_478;
  long lStack_470;
  undefined8 uStack_468;
  undefined1 auStack_3d8 [272];
  ulong uStack_2c8;
  undefined1 auStack_2c0 [544];
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = (ulong)*(ushort *)(param_2 + 4) - 1;
  uVar10 = (*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 3) * -0x500ee500ee500ee5;
  if ((uVar10 < uVar12 || uVar10 - uVar12 == 0) ||
     (puVar14 = *(undefined8 **)(*(long *)(param_2 + 0x30) + 0x168),
     *(undefined8 **)(*(long *)(param_2 + 0x30) + 0x170) == puVar14)) goto LAB_10abb0ad4;
  puVar22 = (undefined4 *)(*(long *)(param_1 + 0x60) + (long)(int)uVar12 * 0x898);
  uVar1 = *(uint *)(param_1 + 0x48);
  piVar23 = puVar22 + (ulong)(~uVar1 & 1) * 0x102 + 4;
  iVar2 = *piVar23;
  uVar6 = *puVar14;
  *(undefined8 *)(puVar22 + 0x224) = uVar6;
  func_0x00010a1de5f0();
  uStack_4b8 = 4;
  uStack_4b4 = 2;
  uStack_4c8 = 0x100000001;
  uStack_4c0 = uVar6;
  func_0x000107c2b054(&uStack_4a8,&DAT_10f697712);
  FUN_10aba6710(param_1,param_2,0,&uStack_4a8,0,&uStack_4c8);
  FUN_10abddda0(&lStack_4d8,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined2 *)(param_2 + 4));
  if (lStack_498 < 0) {
    __ZdlPv(uStack_4a8);
  }
  plVar8 = (long *)(puVar22 + 0x21c);
  lVar11 = *(long *)(puVar22 + 0x21c);
  if (lVar11 == 0) {
LAB_10abb0474:
    lVar11 = 0;
    FUN_10a2421c8();
    lVar7 = 0;
    uVar20 = *(undefined8 *)(lVar11 + 0x1f0);
    lStack_4a0 = 0;
    lStack_498 = 0x700000000000000;
    uStack_4a8 = 0x65766c6f736552;
    uStack_488 = 4;
    uStack_484 = 0;
    uStack_490 = uVar6;
    bVar5 = true;
    do {
      bVar9 = bVar5;
      FUN_10aba6db0(&lStack_8d8,uVar20,*(undefined8 *)(param_2 + 8),&uStack_4a8);
      FUN_10abac4d0(plVar8 + lVar7 * 2,&lStack_8d8);
      plVar17 = aplStack_8d0[0];
      if (aplStack_8d0[0] != (long *)0x0) {
        plVar25 = aplStack_8d0[0] + 1;
        do {
          lVar11 = *plVar25;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar5) {
            *plVar25 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*aplStack_8d0[0] + 0x10))(aplStack_8d0[0]);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      lVar7 = 1;
      bVar5 = false;
    } while (bVar9);
    if (lStack_498 < 0) {
      __ZdlPv(uStack_4a8);
    }
LAB_10abb0554:
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    bVar5 = false;
    if (*(long *)(lVar11 + 8) != 0) {
      plVar17 = *(long **)(*(long *)(param_2 + 0x30) + 0x168);
      if (*(long **)(*(long *)(param_2 + 0x30) + 0x170) == plVar17) goto LAB_10abb0ad4;
      lVar11 = *plVar17;
      func_0x00010a1de5f0();
      lVar7 = *(long *)(*plVar8 + 8);
      func_0x00010a1de5f0();
      bVar5 = lVar11 != lVar7;
      lVar11 = *plVar8;
      if (lVar11 == 0) goto LAB_10abb0474;
    }
    if (*(long *)(lVar11 + 0x18) == 0 || bVar5) goto LAB_10abb0474;
    if (iVar2 != uVar1 - 1) goto LAB_10abb0554;
    uVar10 = (ulong)*(uint *)(param_1 + 0x48);
  }
  uVar13 = *(long *)(param_1 + 0xe8) - *(long *)(param_1 + 0xe0) >> 3;
  uVar12 = 0;
  if (uVar13 != 0) {
    uVar12 = uVar10 / uVar13;
  }
  auVar24._0_8_ = (long)(int)uVar6;
  auVar24._8_8_ = (long)(int)((ulong)uVar6 >> 0x20);
  auVar24 = NEON_scvtf(auVar24,8);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0xe0) + (uVar10 - uVar12 * uVar13) * 8);
  auVar33 = NEON_fmov(0x4000000000000000,8);
  *(ulong *)(puVar22 + 1) =
       CONCAT44(((float)((ulong)uVar6 >> 0x20) + -0.5) * (float)(auVar33._8_8_ / auVar24._8_8_),
                ((float)uVar6 + -0.5) * (float)(auVar33._0_8_ / auVar24._0_8_));
  lVar11 = *(long *)(param_2 + 0x38);
  lStack_8d8 = *(long *)(lVar11 + 0xe0);
  if (lStack_8d8 != 0) {
    puVar14 = (undefined8 *)(lVar11 + 0xe8);
    pplVar16 = aplStack_8d0;
    lVar7 = lStack_8d8;
    do {
      plVar17 = (long *)*puVar14;
      plVar29 = (long *)puVar14[3];
      plVar25 = (long *)puVar14[2];
      pplVar16[1] = (long *)puVar14[1];
      *pplVar16 = plVar17;
      pplVar16[3] = plVar29;
      pplVar16[2] = plVar25;
      plVar17 = (long *)puVar14[4];
      plVar25 = (long *)puVar14[5];
      plVar30 = (long *)puVar14[7];
      plVar26 = (long *)puVar14[6];
      plVar29 = (long *)puVar14[8];
      plVar36 = (long *)puVar14[0xb];
      plVar34 = (long *)puVar14[10];
      pplVar16[9] = (long *)puVar14[9];
      pplVar16[8] = plVar29;
      pplVar16[0xb] = plVar36;
      pplVar16[10] = plVar34;
      pplVar16[5] = plVar25;
      pplVar16[4] = plVar17;
      pplVar16[7] = plVar30;
      pplVar16[6] = plVar26;
      pplVar16 = pplVar16 + 0xc;
      puVar14 = puVar14 + 0xc;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  _memcpy(auStack_810,lVar11 + 0x1a8,0x110);
  lVar7 = *(long *)(lVar11 + 0x2b8);
  lStack_700 = lVar7;
  if (lVar7 != 0) {
    lVar11 = lVar11 + 0x2c0;
    puVar18 = auStack_6f8;
    do {
      _memcpy(puVar18,lVar11,0x110);
      puVar18 = puVar18 + 0x110;
      lVar11 = lVar11 + 0x110;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  lVar11 = *(long *)(puVar22 + 0x224);
  FUN_10a1dd000();
  ___dynamic_cast();
  *(undefined8 *)(lVar11 + 0x31c) = *(undefined8 *)(puVar22 + 1);
  uStack_4a8 = 0x8000000000000000;
  lStack_478 = 0;
  plStack_480 = (long *)0x0;
  uStack_468 = 0;
  lStack_470 = 0;
  lStack_4a0 = CONCAT44(lStack_4a0._4_4_,0xfffffe70);
  lVar11 = param_1;
  lVar7 = param_2;
  FUN_10aba5824(param_1,param_2,0,&uStack_4a8);
  uStack_a0 = *(undefined8 *)(lStack_4d8 + 0x18);
  plStack_98 = *(long **)(lStack_4d8 + 0x20);
  if (*(long *)(lStack_4d8 + 0x20) != 0) {
    plVar17 = (long *)(*(long *)(lStack_4d8 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = *plVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  uStack_80 = 0;
  FUN_10a5e7178(&uStack_90,&uStack_a0,&uStack_90,1);
  FUN_10a5d2c88(lVar11,&uStack_90);
  puStack_4b0 = &uStack_90;
  FUN_10a3f9078(&puStack_4b0);
  plVar17 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar25 = plStack_98 + 1;
    do {
      lVar15 = *plVar25;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *plVar25 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  lVar15 = *(long *)(lVar11 + 0x168);
  if (*(long *)(lVar11 + 0x170) == lVar15) {
LAB_10abb0ad4:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10abb0ad8);
    (*pcVar4)();
  }
  *(undefined1 *)(lVar15 + 0x29) = 2;
  *(undefined8 *)(lVar15 + 0x18) = 0;
  *(undefined8 *)(lVar15 + 0x20) = 0;
  *(undefined1 *)(lVar11 + 0x19d) = *(undefined1 *)(*(long *)(param_2 + 0x30) + 0x19d);
  FUN_10a18d87c(lVar7 + 0xe0,&lStack_8d8);
  _memcpy(lVar7 + 0x1a8,auStack_810,0x110);
  FUN_10abd6910(lVar7 + 0x2b8,&lStack_700);
  FUN_10a18d87c(lVar7 + 0x4e0,piVar23 + 2);
  _memcpy(lVar7 + 0x5a8,piVar23 + 0x34,0x110);
  FUN_10abd6910(lVar7 + 0x6b8,piVar23 + 0x78);
  if (lStack_478 != 0) {
    lStack_470 = lStack_478;
    __ZdlPv();
  }
  if (plStack_480 == &lStack_498) {
    lVar11 = 0x20;
  }
  else {
    if (plStack_480 == (long *)0x0) goto LAB_10abb07e4;
    lVar11 = 0x28;
  }
  (**(code **)(*plStack_480 + lVar11))();
LAB_10abb07e4:
  uStack_a0 = 0x8000000000000000;
  plStack_98 = (long *)CONCAT44(plStack_98._4_4_,500);
  lVar11 = param_1;
  FUN_10aba5a90(param_1,param_2,1,&uStack_a0);
  lVar7 = plVar8[((ulong)*(uint *)(param_1 + 0x48) & 1) * 2];
  uStack_90 = *(undefined8 *)(lVar7 + 0x18);
  plStack_88 = *(long **)(lVar7 + 0x20);
  if (*(long *)(lVar7 + 0x20) != 0) {
    plVar8 = (long *)(*(long *)(lVar7 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_4a0 = 0;
  uStack_4a8 = 0;
  lStack_498 = 0;
  FUN_10a5e7178(&uStack_4a8,&uStack_90,&uStack_80,1);
  FUN_10a5d2c88(lVar11,&uStack_4a8);
  puStack_4b0 = &uStack_4a8;
  FUN_10a3f9078(&puStack_4b0);
  plVar8 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar17 = plStack_88 + 1;
    do {
      lVar11 = *plVar17;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  uStack_4a8 = 0x8000000000000000;
  lStack_4a0 = CONCAT44(lStack_4a0._4_4_,0x1f5);
  FUN_10aba5a90(param_1,param_2,2,&uStack_4a8);
  uVar1 = *(uint *)(param_1 + 0x48);
  uStack_4a8 = CONCAT44(uStack_4a8._4_4_,uVar1);
  lVar11 = *(long *)(param_2 + 0x38);
  lStack_4a0 = *(long *)(lVar11 + 0xe0);
  if (lStack_4a0 != 0) {
    plVar8 = (long *)(lVar11 + 0xe8);
    plVar17 = &lStack_498;
    lVar7 = lStack_4a0;
    do {
      lVar15 = *plVar8;
      lVar31 = plVar8[3];
      lVar27 = plVar8[2];
      plVar17[1] = plVar8[1];
      *plVar17 = lVar15;
      plVar17[3] = lVar31;
      plVar17[2] = lVar27;
      lVar15 = plVar8[4];
      lVar27 = plVar8[5];
      lVar32 = plVar8[7];
      lVar28 = plVar8[6];
      lVar31 = plVar8[8];
      lVar37 = plVar8[0xb];
      lVar35 = plVar8[10];
      plVar17[9] = plVar8[9];
      plVar17[8] = lVar31;
      plVar17[0xb] = lVar37;
      plVar17[10] = lVar35;
      plVar17[5] = lVar27;
      plVar17[4] = lVar15;
      plVar17[7] = lVar32;
      plVar17[6] = lVar28;
      plVar17 = plVar17 + 0xc;
      plVar8 = plVar8 + 0xc;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  _memcpy(auStack_3d8,lVar11 + 0x1a8,0x110);
  uVar10 = *(ulong *)(lVar11 + 0x2b8);
  uStack_2c8 = uVar10;
  if (uVar10 != 0) {
    lVar11 = lVar11 + 0x2c0;
    puVar18 = auStack_2c0;
    do {
      _memcpy(puVar18,lVar11,0x110);
      puVar18 = puVar18 + 0x110;
      lVar11 = lVar11 + 0x110;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  puVar21 = puVar22 + (ulong)(uVar1 & 1) * 0x102 + 4;
  *puVar21 = (undefined4)uStack_4a8;
  FUN_10a438da0(puVar21 + 2,&lStack_4a0);
  _memcpy(puVar21 + 0x34,auStack_3d8,0x110);
  uVar12 = uStack_2c8;
  uVar13 = *(ulong *)(puVar21 + 0x78);
  uVar10 = uVar13;
  if (uStack_2c8 <= uVar13) {
    uVar10 = uStack_2c8;
  }
  lVar11 = 0;
  if (uVar13 <= uStack_2c8) {
    lVar11 = uStack_2c8 - uVar13;
  }
  puVar19 = puVar21 + 0x7a;
  puVar18 = auStack_2c0;
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    _memcpy(puVar19,puVar18,0x110);
    puVar19 = puVar19 + 0x44;
    puVar18 = puVar18 + 0x110;
  }
  if (uVar13 < uVar12) {
    do {
      _memcpy(puVar19,puVar18,0x110);
      puVar18 = puVar18 + 0x110;
      puVar19 = puVar19 + 0x44;
      lVar11 = lVar11 + -1;
      uVar12 = uStack_2c8;
    } while (lVar11 != 0);
  }
  *(ulong *)(puVar21 + 0x78) = uVar12;
  *puVar22 = 0;
  lVar11 = *(long *)(param_2 + 0x38);
  FUN_10a18d87c(lVar11 + 0xe0,&lStack_8d8);
  _memcpy(lVar11 + 0x1a8,auStack_810,0x110);
  plVar8 = (long *)(lVar11 + 0x2b8);
  FUN_10abd6910(plVar8,&lStack_700);
  if (plStack_4d0 != (long *)0x0) {
    plVar17 = plStack_4d0 + 1;
    do {
      lVar11 = *plVar17;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_4d0 + 0x10))(plStack_4d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_4d0);
      plVar8 = plStack_4d0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    func_0x00010abda948(&lStack_4d8);
    __Unwind_Resume(plVar8);
    return (long *)0x1;
  }
  return plVar8;
}



/* Entry: 10abb0b94; end: 10abb0b9b;  */

undefined8 FUN_10abb0b94(void)

{
  return 1;
}



/* Entry: 10abb0b9c; end: 10abb1243;  */

void FUN_10abb0b9c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 auStack_110 [2];
  char cStack_f9;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = (ulong)*(ushort *)(param_2 + 4) - 1;
  uVar10 = (*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 3) * -0x500ee500ee500ee5;
  if (uVar10 < uVar7 || uVar10 - uVar7 == 0) goto LAB_10abb11f4;
  uVar7 = *(long *)(param_1 + 0x60) + (long)(int)uVar7 * 0x898;
  lVar5 = *(long *)(param_2 + 0x10);
  func_0x00010a01e9ec(lVar5,param_4);
  lVar6 = *(long *)(param_2 + 0x10);
  FUN_10a015150(lVar6,param_4);
  plVar16 = (long *)(uVar7 + 0x820 + (ulong)(~*(uint *)(param_1 + 0x48) & 1) * 0x28);
  uVar10 = plVar16[1];
  if (uVar10 != 0) {
    uVar11 = *(ulong *)(lVar5 + 0x10);
    uVar14 = uVar10 - 1;
    if ((uVar10 & uVar14) == 0) {
      uVar15 = uVar14 & uVar11;
    }
    else {
      uVar15 = uVar11;
      if (uVar10 <= uVar11) {
        uVar15 = 0;
        if (uVar10 != 0) {
          uVar15 = uVar11 / uVar10;
        }
        uVar15 = uVar11 - uVar15 * uVar10;
      }
    }
    plVar16 = *(long **)(*plVar16 + uVar15 * 8);
    if (plVar16 != (long *)0x0) {
      do {
        while( true ) {
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_10abb0d00;
          uVar17 = plVar16[1];
          if (uVar17 != uVar11) break;
          if (plVar16[2] == *(long *)(lVar5 + 8) && plVar16[3] == uVar11) {
            if (*(int *)(plVar16 + 4) == *(uint *)(param_1 + 0x48) - 1) {
              puVar8 = (undefined8 *)((long)plVar16 + 0x24);
              goto LAB_10abb0d04;
            }
            goto LAB_10abb0d00;
          }
        }
        if ((uVar10 & uVar14) == 0) {
          uVar17 = uVar17 & uVar14;
        }
        else if (uVar10 <= uVar17) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar17 / uVar10;
          }
          uVar17 = uVar17 - uVar2 * uVar10;
        }
      } while (uVar17 == uVar15);
    }
  }
LAB_10abb0d00:
  puVar8 = (undefined8 *)(lVar6 + 4);
LAB_10abb0d04:
  uStack_e8 = puVar8[1];
  uStack_f0 = *puVar8;
  uStack_d8 = puVar8[3];
  uStack_e0 = puVar8[2];
  uStack_c8 = puVar8[5];
  uStack_d0 = puVar8[4];
  uStack_b8 = puVar8[7];
  uStack_c0 = puVar8[6];
  func_0x000107c2b074(auStack_110,&PTR_DAT_110c51060);
  FUN_10abac910(param_3,auStack_110,&uStack_f0);
  if ((bRam00000001137ec4e0 & 1) == 0) {
    iVar4 = 0x137ec4e0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107c2b074(0x1137ec590,&PTR_DAT_110c51bc8);
      ___cxa_atexit(FUN_10a32edf4,0x1137ec590,0x100000000);
      uRam00000001137ec4d8 = 0x1137ec590;
      ___cxa_guard_release(0x1137ec4e0);
    }
  }
  FUN_10a022468(param_3,uRam00000001137ec4d8,uVar7 + 4);
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x20) = 6;
  *(undefined8 *)(param_3 + 0x38) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined8 *)(param_3 + 0x48) = 0;
  *(undefined8 *)(param_3 + 0x40) = 0;
  *(undefined1 *)(param_3 + 0x1b) = 0xf;
  uVar1 = *(uint *)(param_1 + 0x48);
  plVar16 = (long *)(uVar7 + 0x820 + ((ulong)uVar1 & 1) * 0x28);
  uStack_a8 = *(undefined8 *)(lVar6 + 0xc);
  uStack_b0 = *(undefined8 *)(lVar6 + 4);
  uStack_98 = *(undefined8 *)(lVar6 + 0x1c);
  uStack_a0 = *(undefined8 *)(lVar6 + 0x14);
  uStack_88 = *(undefined8 *)(lVar6 + 0x2c);
  uStack_90 = *(undefined8 *)(lVar6 + 0x24);
  uStack_78 = *(undefined8 *)(lVar6 + 0x3c);
  uStack_80 = *(undefined8 *)(lVar6 + 0x34);
  uVar11 = *(ulong *)(lVar5 + 0x10);
  uVar10 = plVar16[1];
  if (uVar10 != 0) {
    uVar14 = uVar10 - 1;
    if ((uVar10 & uVar14) == 0) {
      uVar7 = uVar14 & uVar11;
    }
    else {
      uVar7 = uVar11;
      if (uVar10 <= uVar11) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar11 / uVar10;
        }
        uVar7 = uVar11 - uVar7 * uVar10;
      }
    }
    puVar8 = *(undefined8 **)(*plVar16 + uVar7 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar18 = (long *)*puVar8, plVar18 != (long *)0x0)) {
      do {
        uVar15 = plVar18[1];
        if (uVar15 == uVar11) {
          if (plVar18[2] == *(long *)(lVar5 + 8) && plVar18[3] == uVar11) goto LAB_10abb10ec;
        }
        else {
          if ((uVar10 & uVar14) == 0) {
            uVar15 = uVar15 & uVar14;
          }
          else if (uVar10 <= uVar15) {
            uVar17 = 0;
            if (uVar10 != 0) {
              uVar17 = uVar15 / uVar10;
            }
            uVar15 = uVar15 - uVar17 * uVar10;
          }
          if (uVar15 != uVar7) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
  }
  plVar18 = (long *)0x68;
  __Znwm();
  *plVar18 = 0;
  plVar18[1] = uVar11;
  lVar6 = *(long *)(lVar5 + 8);
  plVar18[3] = *(long *)(lVar5 + 0x10);
  plVar18[2] = lVar6;
  plVar18[4] = 0;
  *(undefined8 *)((long)plVar18 + 0x2c) = 0;
  *(undefined8 *)((long)plVar18 + 0x24) = 0x3f800000;
  *(undefined8 *)((long)plVar18 + 0x3c) = 0;
  *(undefined8 *)((long)plVar18 + 0x34) = 0x3f80000000000000;
  *(undefined8 *)((long)plVar18 + 0x4c) = 0x3f800000;
  *(undefined8 *)((long)plVar18 + 0x44) = 0;
  *(undefined8 *)((long)plVar18 + 0x5c) = 0x3f80000000000000;
  *(undefined8 *)((long)plVar18 + 0x54) = 0;
  if ((uVar10 == 0) || (*(float *)(plVar16 + 4) * (float)uVar10 < (float)(plVar16[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar10) {
      uVar7 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar7 = uVar7 | uVar10 << 1;
    uVar14 = (ulong)((float)(plVar16[3] + 1) / *(float *)(plVar16 + 4));
    if (uVar7 <= uVar14) {
      uVar7 = uVar14;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar10 = plVar16[1];
    }
    if (uVar7 <= uVar10) {
      if (uVar7 < uVar10) {
        uVar14 = (ulong)((float)(ulong)plVar16[3] / *(float *)(plVar16 + 4));
        if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar14) {
          uVar14 = 1L << (-LZCOUNT(uVar14 - 1) & 0x3fU);
        }
        if (uVar7 <= uVar14) {
          uVar7 = uVar14;
        }
        if (uVar7 < uVar10) {
          if (uVar7 != 0) goto LAB_10abb0f00;
          lVar5 = *plVar16;
          *plVar16 = 0;
          if (lVar5 != 0) {
            __ZdlPv();
          }
          plVar16[1] = 0;
          uVar10 = 0;
        }
        else {
          uVar10 = plVar16[1];
        }
      }
LAB_10abb104c:
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar7 = uVar10 - 1 & uVar11;
      }
      else {
        uVar7 = uVar11;
        if (uVar10 <= uVar11) {
          uVar7 = 0;
          if (uVar10 != 0) {
            uVar7 = uVar11 / uVar10;
          }
          uVar7 = uVar11 - uVar7 * uVar10;
        }
      }
      goto LAB_10abb1078;
    }
LAB_10abb0f00:
    if (uVar7 >> 0x3d == 0) {
      lVar5 = uVar7 << 3;
      __Znwm();
      lVar6 = *plVar16;
      *plVar16 = lVar5;
      if (lVar6 != 0) {
        __ZdlPv();
      }
      uVar10 = 0;
      plVar16[1] = uVar7;
      do {
        *(undefined8 *)(*plVar16 + uVar10 * 8) = 0;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
      plVar9 = (long *)plVar16[2];
      uVar10 = uVar7;
      if (plVar9 != (long *)0x0) {
        uVar14 = plVar9[1];
        uVar15 = uVar7 - 1;
        if ((uVar7 & uVar15) == 0) {
          uVar14 = uVar14 & uVar15;
        }
        else if (uVar7 <= uVar14) {
          uVar17 = 0;
          if (uVar7 != 0) {
            uVar17 = uVar14 / uVar7;
          }
          uVar14 = uVar14 - uVar17 * uVar7;
        }
        *(long **)(*plVar16 + uVar14 * 8) = plVar16 + 2;
        plVar12 = (long *)*plVar9;
        while (plVar12 != (long *)0x0) {
          uVar17 = plVar12[1];
          if ((uVar7 & uVar15) == 0) {
            uVar17 = uVar17 & uVar15;
          }
          else if (uVar7 <= uVar17) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar17 / uVar7;
            }
            uVar17 = uVar17 - uVar2 * uVar7;
          }
          plVar13 = plVar12;
          if (uVar17 != uVar14) {
            lVar5 = *plVar16;
            if (*(long *)(lVar5 + uVar17 * 8) == 0) {
              *(long **)(lVar5 + uVar17 * 8) = plVar9;
              uVar14 = uVar17;
            }
            else {
              *plVar9 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar5 + uVar17 * 8);
              **(long **)(lVar5 + uVar17 * 8) = (long)plVar12;
              plVar13 = plVar9;
            }
          }
          plVar9 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
      goto LAB_10abb104c;
    }
  }
  else {
LAB_10abb1078:
    lVar5 = *plVar16;
    plVar9 = *(long **)(lVar5 + uVar7 * 8);
    if (plVar9 == (long *)0x0) {
      plVar9 = plVar16 + 2;
      *plVar18 = *plVar9;
      *plVar9 = (long)plVar18;
      *(long **)(lVar5 + uVar7 * 8) = plVar9;
      if (*plVar18 != 0) {
        uVar7 = *(ulong *)(*plVar18 + 8);
        if ((uVar10 & uVar10 - 1) == 0) {
          uVar7 = uVar7 & uVar10 - 1;
        }
        else if (uVar10 <= uVar7) {
          uVar11 = 0;
          if (uVar10 != 0) {
            uVar11 = uVar7 / uVar10;
          }
          uVar7 = uVar7 - uVar11 * uVar10;
        }
        plVar9 = (long *)(*plVar16 + uVar7 * 8);
        goto LAB_10abb10dc;
      }
    }
    else {
      *plVar18 = *plVar9;
LAB_10abb10dc:
      *plVar9 = (long)plVar18;
    }
    plVar16[3] = plVar16[3] + 1;
LAB_10abb10ec:
    *(uint *)(plVar18 + 4) = uVar1;
    *(undefined8 *)((long)plVar18 + 0x2c) = uStack_a8;
    *(undefined8 *)((long)plVar18 + 0x24) = uStack_b0;
    *(undefined8 *)((long)plVar18 + 0x3c) = uStack_98;
    *(undefined8 *)((long)plVar18 + 0x34) = uStack_a0;
    *(undefined8 *)((long)plVar18 + 0x4c) = uStack_88;
    *(undefined8 *)((long)plVar18 + 0x44) = uStack_90;
    *(undefined8 *)((long)plVar18 + 0x5c) = uStack_78;
    *(undefined8 *)((long)plVar18 + 0x54) = uStack_80;
    if (cStack_f9 < '\0') {
      __ZdlPv(auStack_110[0]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000109ffded8();
LAB_10abb11f4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10abb11f8);
  (*pcVar3)();
}



/* Entry: 10abb1244; end: 10abb135b;  */

void FUN_10abb1244(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (((param_2 != 0) && (lVar7 = param_2, FUN_10a1dd000(), lVar7 != 0)) &&
     (___dynamic_cast(), lVar7 != 0)) {
    FUN_10abf1b04();
    puVar6 = (undefined8 *)0x1;
    FUN_10a088744();
    if (puVar6 != (undefined8 *)0x0) {
      uVar2 = *puVar6;
      plVar3 = (long *)puVar6[1];
      if (plVar3 == (long *)0x0) {
        if ((int)param_2 == 2) {
          *param_1 = uVar2;
          param_1[1] = 0;
          return;
        }
      }
      else {
        plVar1 = plVar3 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)param_2 == 2) {
          *param_1 = uVar2;
          param_1[1] = plVar3;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            lVar7 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar7 != 0) {
            return;
          }
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
          return;
        }
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
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10abb135c; end: 10abb18e7;  */

undefined8 ** FUN_10abb135c(undefined8 **param_1,long *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined **appuStack_218 [3];
  undefined ***pppuStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined ***pppuStack_1c0;
  long lStack_1b8;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 **ppuStack_108;
  long lStack_100;
  undefined8 **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined8 **ppuStack_e8;
  undefined8 *puStack_d8;
  long alStack_d0 [3];
  long *plStack_b8;
  undefined **ppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 **ppuStack_a0;
  undefined ***pppuStack_98;
  undefined8 **appuStack_90 [4];
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ushort *)((long)param_2 + 4);
  uVar9 = (ulong)uVar2 - 1;
  uVar12 = ((long)param_1[0xd] - (long)param_1[0xc] >> 3) * -0x500ee500ee500ee5;
  if (uVar12 < uVar9 || uVar12 - uVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10abb17b8);
    (*pcVar5)();
  }
  puVar11 = param_1[0xc] + (long)(int)uVar9 * 0x113;
  if (*(short *)((long)param_2 + 6) == 2) {
    FUN_10abb1244(appuStack_90,
                  *(undefined8 *)(puVar11[((ulong)*(uint *)(param_1 + 9) & 1) * 2 + 0x10e] + 8));
    param_1 = param_1 + 0x18;
    FUN_10aba93b0(param_1);
    ppuVar6 = appuStack_90[1];
    ppuStack_58 = appuStack_90[1];
    ppuStack_60 = appuStack_90[0];
    if (appuStack_90[1] != (undefined8 **)0x0) {
      ppuVar7 = appuStack_90[1] + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar4) {
          *ppuVar7 = (undefined8 *)((long)*ppuVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    FUN_10a756a10(&uStack_158,&ppuStack_60,auStack_50,1);
    plStack_b8 = (long *)0x0;
    lStack_168 = 0;
    uStack_160 = 0;
    lStack_170 = 0;
    FUN_10ab10a0c(param_1,param_3,&uStack_158,alStack_d0,&lStack_170,0);
    param_2 = param_3;
    if (lStack_170 != 0) {
      lStack_168 = lStack_170;
      __ZdlPv();
      param_2 = param_3;
    }
    if (plStack_b8 == alStack_d0) {
      lVar10 = 0x20;
LAB_10abb15e4:
      (**(code **)(*plStack_b8 + lVar10))();
    }
    else if (plStack_b8 != (long *)0x0) {
      lVar10 = 0x28;
      goto LAB_10abb15e4;
    }
    puStack_f0 = &uStack_158;
    param_1 = &puStack_f0;
    FUN_10a18ba48();
    ppuVar7 = ppuStack_58;
    if (ppuStack_58 != (undefined8 **)0x0) {
      ppuVar1 = ppuStack_58 + 1;
      do {
        puVar11 = *ppuVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar4) {
          *ppuVar1 = (undefined8 *)((long)puVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_58)[2])(ppuStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppuVar7;
      }
    }
    if (ppuVar6 != (undefined8 **)0x0) {
      ppuVar7 = ppuVar6 + 1;
      do {
        puVar11 = *ppuVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar4) {
          *ppuVar7 = (undefined8 *)((long)puVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 == (undefined8 *)0x0) {
        (*(code *)(*ppuVar6)[2])(ppuVar6);
        goto LAB_10abb1780;
      }
    }
  }
  else if (*(short *)((long)param_2 + 6) == 1) {
    FUN_10abb1244(&ppuStack_60,puVar11[0x112]);
    FUN_10abb1244(&puStack_f0,
                  *(undefined8 *)(puVar11[((ulong)~*(uint *)(param_1 + 9) & 1) * 2 + 0x10e] + 8));
    FUN_10abddda0(&lStack_100,param_1[3],param_1[4],(ulong)uVar2);
    FUN_10abb1244(&uStack_110,*(undefined8 *)(lStack_100 + 8));
    ppuVar6 = param_1 + 0x14;
    FUN_10aba93b0();
    appuStack_90[1] = ppuStack_58;
    appuStack_90[0] = ppuStack_60;
    if (ppuStack_58 != (undefined8 **)0x0) {
      ppuVar7 = ppuStack_58 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar4) {
          *ppuVar7 = (undefined8 *)((long)*ppuVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    appuStack_90[3] = ppuStack_e8;
    appuStack_90[2] = (undefined8 **)puStack_f0;
    if (ppuStack_e8 != (undefined8 **)0x0) {
      ppuVar7 = ppuStack_e8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar4) {
          *ppuVar7 = (undefined8 *)((long)*ppuVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuStack_68 = ppuStack_108;
    uStack_70 = uStack_110;
    if (ppuStack_108 != (undefined8 **)0x0) {
      ppuVar7 = ppuStack_108 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar4) {
          *ppuVar7 = (undefined8 *)((long)*ppuVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    FUN_10a756a10(&uStack_128,appuStack_90,&ppuStack_60,3);
    ppuStack_b0 = &PTR_FUN_110c54158;
    pppuStack_98 = &ppuStack_b0;
    lStack_138 = 0;
    uStack_130 = 0;
    lStack_140 = 0;
    puStack_a8 = puVar11;
    ppuStack_a0 = param_1;
    FUN_10ab10a0c(ppuVar6,param_3,&uStack_128,&ppuStack_b0,&lStack_140,0);
    param_2 = param_3;
    if (lStack_140 != 0) {
      lStack_138 = lStack_140;
      __ZdlPv();
      param_2 = param_3;
    }
    if (pppuStack_98 == &ppuStack_b0) {
      lVar10 = 0x20;
LAB_10abb1670:
      (**(code **)((long)*pppuStack_98 + lVar10))();
    }
    else if (pppuStack_98 != (undefined ***)0x0) {
      lVar10 = 0x28;
      goto LAB_10abb1670;
    }
    puStack_d8 = &uStack_128;
    FUN_10a18ba48(&puStack_d8);
    lVar10 = 0x20;
    do {
      param_1 = (undefined8 **)((long)appuStack_90 + lVar10);
      func_0x00010a0523dc();
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != -0x10);
    if (ppuStack_108 != (undefined8 **)0x0) {
      ppuVar6 = ppuStack_108 + 1;
      do {
        puVar11 = *ppuVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
        if (bVar4) {
          *ppuVar6 = (undefined8 *)((long)puVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_108)[2])(ppuStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppuStack_108;
      }
    }
    if (ppuStack_f8 != (undefined8 **)0x0) {
      ppuVar6 = ppuStack_f8 + 1;
      do {
        puVar11 = *ppuVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
        if (bVar4) {
          *ppuVar6 = (undefined8 *)((long)puVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_f8)[2])(ppuStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppuStack_f8;
      }
    }
    if (ppuStack_e8 != (undefined8 **)0x0) {
      ppuVar6 = ppuStack_e8 + 1;
      do {
        puVar11 = *ppuVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
        if (bVar4) {
          *ppuVar6 = (undefined8 *)((long)puVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_e8)[2])(ppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppuStack_e8;
      }
    }
    ppuVar6 = ppuStack_58;
    if (ppuStack_58 != (undefined8 **)0x0) {
      ppuVar7 = ppuStack_58 + 1;
      do {
        puVar11 = *ppuVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar4) {
          *ppuVar7 = (undefined8 *)((long)puVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 != (undefined8 *)0x0) goto LAB_10abb1784;
      (*(code *)(*ppuStack_58)[2])(ppuStack_58);
LAB_10abb1780:
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_1 = ppuVar6;
    }
  }
LAB_10abb1784:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  if (pppuStack_98 == &ppuStack_b0) {
    lVar10 = 0x20;
LAB_10abb17f0:
    (**(code **)((long)*pppuStack_98 + lVar10))();
  }
  else if (pppuStack_98 != (undefined ***)0x0) {
    lVar10 = 0x28;
    goto LAB_10abb17f0;
  }
  puStack_d8 = &uStack_128;
  FUN_10a18ba48(&puStack_d8);
  lVar10 = 0x20;
  do {
    func_0x00010a0523dc((long)appuStack_90 + lVar10);
    lVar10 = lVar10 + -0x10;
  } while (lVar10 != -0x10);
  func_0x00010a0523dc(&uStack_110);
  func_0x00010abda948(&lStack_100);
  func_0x00010a0523dc(&puStack_f0);
  func_0x00010a0523dc(&ppuStack_60);
  __Unwind_Resume();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[9] = &PTR_FUN_110c52f68;
  param_1[1] = param_2;
  param_1[2] = param_1 + 9;
  param_1[4] = (undefined8 *)0x0;
  param_1[3] = (undefined8 *)0x0;
  param_1[6] = (undefined8 *)0x0;
  param_1[5] = (undefined8 *)0x0;
  param_1[8] = (undefined8 *)0x0;
  param_1[7] = (undefined8 *)0x0;
  *param_1 = &PTR_DAT_110c501b0;
  *(undefined4 *)(param_1 + 10) = 0x10000;
  *(undefined2 *)((long)param_1 + 0x54) = 1;
  param_1[0xc] = (undefined8 *)0x0;
  param_1[0xb] = (undefined8 *)0x0;
  param_1[0xe] = (undefined8 *)0x0;
  param_1[0xd] = (undefined8 *)0x0;
  param_1[0x10] = (undefined8 *)0x0;
  param_1[0xf] = (undefined8 *)0x0;
  param_1[0x11] = (undefined8 *)0x0;
  param_1[0x13] = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = (undefined8 *)0x0;
  param_2 = (long *)*param_2;
  (**(code **)(*param_2 + 200))();
  pppuStack_200 = appuStack_218;
  appuStack_218[0] = &PTR_DAT_110c541d8;
  ppuStack_1d8 = &PTR_DAT_110c541d8;
  pppuStack_1c0 = &ppuStack_1d8;
  FUN_10aba9ac4(&puStack_1f8,param_2[0x38],5,0,&ppuStack_1d8);
  if (pppuStack_1c0 == &ppuStack_1d8) {
    lVar10 = 0x20;
LAB_10abb19e4:
    (**(code **)((long)*pppuStack_1c0 + lVar10))();
  }
  else if (pppuStack_1c0 != (undefined ***)0x0) {
    lVar10 = 0x28;
    goto LAB_10abb19e4;
  }
  param_1[0x14] = puStack_1f0;
  param_1[0x13] = puStack_1f8;
  param_1[0x16] = puStack_1e0;
  param_1[0x15] = puStack_1e8;
  if (pppuStack_200 == appuStack_218) {
    lVar10 = 0x20;
  }
  else {
    if (pppuStack_200 == (undefined ***)0x0) goto LAB_10abb1a28;
    lVar10 = 0x28;
  }
  (**(code **)((long)*pppuStack_200 + lVar10))();
LAB_10abb1a28:
  puStack_1f8 = (undefined8 *)&UNK_10f697725;
  ppuStack_1d0 = (undefined **)0x0;
  uStack_1c8 = 0;
  ppuStack_1d8 = (undefined **)0x0;
  FUN_10abd5914(&ppuStack_1d8,&puStack_1f8,&puStack_1f0,1);
  FUN_10aba6e58(param_1,&ppuStack_1d8);
  ppuVar8 = ppuStack_1d8;
  if (ppuStack_1d8 != (undefined **)0x0) {
    ppuStack_1d0 = ppuStack_1d8;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return param_1;
  }
  ___stack_chk_fail();
  if (ppuStack_1d8 != (undefined **)0x0) {
    ppuStack_1d0 = ppuStack_1d8;
    __ZdlPv();
  }
  param_1[9] = &PTR_FUN_110c52f68;
  func_0x00010abd59bc(param_1 + 0xe);
  FUN_10abd6cb4(param_1 + 0xb);
  func_0x00010aba7988(param_1);
  __Unwind_Resume(ppuVar8);
  return (undefined8 **)0x0;
}



/* Entry: 10abb18e8; end: 10abb1b47;  */

undefined8 * FUN_10abb18e8(undefined8 *param_1,long *param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **appuStack_a8 [3];
  undefined ***pppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[9] = &PTR_FUN_110c52f68;
  param_1[1] = param_2;
  param_1[2] = param_1 + 9;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_DAT_110c501b0;
  *(undefined4 *)(param_1 + 10) = 0x10000;
  *(undefined2 *)((long)param_1 + 0x54) = 1;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_2 = (long *)*param_2;
  (**(code **)(*param_2 + 200))();
  pppuStack_90 = appuStack_a8;
  appuStack_a8[0] = &PTR_DAT_110c541d8;
  ppuStack_68 = &PTR_DAT_110c541d8;
  pppuStack_50 = &ppuStack_68;
  FUN_10aba9ac4(&puStack_88,param_2[0x38],5,0,&ppuStack_68);
  if (pppuStack_50 == &ppuStack_68) {
    lVar2 = 0x20;
LAB_10abb19e4:
    (**(code **)((long)*pppuStack_50 + lVar2))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar2 = 0x28;
    goto LAB_10abb19e4;
  }
  param_1[0x14] = uStack_80;
  param_1[0x13] = puStack_88;
  param_1[0x16] = uStack_70;
  param_1[0x15] = uStack_78;
  if (pppuStack_90 == appuStack_a8) {
    lVar2 = 0x20;
  }
  else {
    if (pppuStack_90 == (undefined ***)0x0) goto LAB_10abb1a28;
    lVar2 = 0x28;
  }
  (**(code **)((long)*pppuStack_90 + lVar2))();
LAB_10abb1a28:
  puStack_88 = &UNK_10f697725;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  ppuStack_68 = (undefined **)0x0;
  FUN_10abd5914(&ppuStack_68,&puStack_88,&uStack_80,1);
  FUN_10aba6e58(param_1,&ppuStack_68);
  ppuVar1 = ppuStack_68;
  if (ppuStack_68 != (undefined **)0x0) {
    ppuStack_60 = ppuStack_68;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (ppuStack_68 != (undefined **)0x0) {
    ppuStack_60 = ppuStack_68;
    __ZdlPv();
  }
  param_1[9] = &PTR_FUN_110c52f68;
  func_0x00010abd59bc(param_1 + 0xe);
  FUN_10abd6cb4(param_1 + 0xb);
  func_0x00010aba7988(param_1);
  __Unwind_Resume(ppuVar1);
  return (undefined8 *)0x0;
}



/* Entry: 10abb1b48; end: 10abb1b4f;  */

undefined8 FUN_10abb1b48(void)

{
  return 0;
}



/* Entry: 10abb1b50; end: 10abb1b87;  */

void FUN_10abb1b50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_20 = 0x7ff8000000000000;
  uStack_18 = 0x7fffffff;
  FUN_10aba5a90(param_1,param_2,0,&uStack_20);
  return;
}



/* Entry: 10abb1b88; end: 10abb213b;  */

undefined8 ** FUN_10abb1b88(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 **ppuStack_238;
  undefined8 **ppuStack_230;
  undefined8 **ppuStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined8 **ppuStack_208;
  undefined8 **ppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 ***pppuStack_1d8;
  undefined8 **ppuStack_1d0;
  undefined8 **ppuStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 **ppuStack_190;
  long lStack_188;
  undefined8 **ppuStack_180;
  undefined4 uStack_178;
  undefined1 uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 **ppuStack_138;
  long lStack_130;
  undefined8 **ppuStack_128;
  undefined4 uStack_120;
  undefined1 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 **ppuStack_f8;
  long lStack_f0;
  undefined8 **ppuStack_e8;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined8 *puStack_d8;
  long alStack_d0 [3];
  long *plStack_b8;
  long alStack_b0 [3];
  long *plStack_98;
  undefined8 **appuStack_90 [2];
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = (ulong)*(ushort *)(param_2 + 4) - 1;
  uVar8 = (*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 3) * -0x3333333333333333;
  if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10abb2010);
    (*pcVar3)();
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x58) + (long)(int)uVar6 * 0x28);
  lVar13 = *plVar15;
  ppuVar12 = (undefined8 **)plVar15[1];
  if (ppuVar12 != (undefined8 **)0x0) {
    ppuVar9 = ppuVar12 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar2) {
        *ppuVar9 = (undefined8 *)((long)*ppuVar9 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar14 = plVar15[2];
  ppuVar9 = (undefined8 **)plVar15[3];
  if (ppuVar9 != (undefined8 **)0x0) {
    ppuVar10 = ppuVar9 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
      if (bVar2) {
        *ppuVar10 = (undefined8 *)((long)*ppuVar10 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_e0 = (undefined4)plVar15[4];
  uStack_dc = *(undefined1 *)((long)plVar15 + 0x24);
  lStack_100 = lVar13;
  ppuStack_f8 = ppuVar12;
  lStack_f0 = lVar14;
  ppuStack_e8 = ppuVar9;
  if (*(char *)((long)plVar15 + 0x24) == '\x01') {
    param_1 = param_1 + 0x98;
    FUN_10aba93b0(param_1);
    appuStack_90[1] = (undefined8 **)plVar15[1];
    appuStack_90[0] = (undefined8 **)*plVar15;
    if (plVar15[1] != 0) {
      plVar4 = (long *)(plVar15[1] + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_78 = plVar15[3];
    lStack_80 = plVar15[2];
    if (plVar15[3] != 0) {
      plVar15 = (long *)(plVar15[3] + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar2) {
          *plVar15 = *plVar15 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    FUN_10a756a10(&uStack_118,appuStack_90,auStack_70,2);
    if (ppuVar12 != (undefined8 **)0x0) {
      ppuVar10 = ppuVar12 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar2) {
          *ppuVar10 = (undefined8 *)((long)*ppuVar10 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (ppuVar9 != (undefined8 **)0x0) {
      ppuVar10 = ppuVar9 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar2) {
          *ppuVar10 = (undefined8 *)((long)*ppuVar10 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar15 = &lStack_140;
    uStack_120 = uStack_e0;
    uStack_11c = uStack_dc;
    plStack_98 = (long *)0x0;
    plVar4 = (long *)0x30;
    lStack_140 = lVar13;
    ppuStack_138 = ppuVar12;
    lStack_130 = lVar14;
    ppuStack_128 = ppuVar9;
    __Znwm();
    *plVar4 = (long)&PTR_FUN_110c54258;
    plVar4[1] = lVar13;
    lStack_140 = 0;
    ppuStack_138 = (undefined8 **)0x0;
    plVar4[2] = (long)ppuVar12;
    plVar4[3] = lVar14;
    plVar4[4] = (long)ppuVar9;
    lStack_130 = 0;
    ppuStack_128 = (undefined8 **)0x0;
    *(undefined4 *)(plVar4 + 5) = uStack_e0;
    *(undefined1 *)((long)plVar4 + 0x2c) = uStack_dc;
    lStack_150 = 0;
    uStack_148 = 0;
    lStack_158 = 0;
    plStack_98 = plVar4;
    FUN_10ab10a0c(param_1,param_3,&uStack_118,alStack_b0,&lStack_158,0);
    if (lStack_158 != 0) {
      lStack_150 = lStack_158;
      __ZdlPv();
    }
    if (plStack_98 == alStack_b0) {
      lVar13 = 0x20;
LAB_10abb1ed4:
      (**(code **)(*plStack_98 + lVar13))();
    }
    else if (plStack_98 != (long *)0x0) {
      lVar13 = 0x28;
      goto LAB_10abb1ed4;
    }
    puStack_d8 = &uStack_118;
    FUN_10a18ba48(&puStack_d8);
    lVar13 = 0x10;
    pppuVar5 = appuStack_90;
    do {
      ppuVar12 = (undefined8 **)((long)pppuVar5 + lVar13);
      func_0x00010a0523dc();
      lVar13 = lVar13 + -0x10;
    } while (lVar13 != -0x10);
    ppuVar10 = (undefined8 **)0xfffffffffffffff0;
  }
  else {
    pppuVar5 = (undefined8 ***)(param_1 + 0x98);
    FUN_10aba93b0();
    appuStack_90[1] = (undefined8 **)plVar15[1];
    appuStack_90[0] = (undefined8 **)*plVar15;
    if (plVar15[1] != 0) {
      plVar15 = (long *)(plVar15[1] + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar2) {
          *plVar15 = *plVar15 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    FUN_10a756a10(&uStack_170,appuStack_90,&lStack_80,1);
    if (ppuVar12 != (undefined8 **)0x0) {
      ppuVar10 = ppuVar12 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar2) {
          *ppuVar10 = (undefined8 *)((long)*ppuVar10 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (ppuVar9 != (undefined8 **)0x0) {
      ppuVar10 = ppuVar9 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar2) {
          *ppuVar10 = (undefined8 *)((long)*ppuVar10 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar15 = &lStack_198;
    uStack_178 = uStack_e0;
    uStack_174 = uStack_dc;
    plStack_b8 = (long *)0x0;
    plVar4 = (long *)0x30;
    lStack_198 = lVar13;
    ppuStack_190 = ppuVar12;
    lStack_188 = lVar14;
    ppuStack_180 = ppuVar9;
    __Znwm();
    *plVar4 = (long)&PTR_FUN_110c54258;
    plVar4[1] = lVar13;
    lStack_198 = 0;
    ppuStack_190 = (undefined8 **)0x0;
    plVar4[2] = (long)ppuVar12;
    plVar4[3] = lVar14;
    plVar4[4] = (long)ppuVar9;
    lStack_188 = 0;
    ppuStack_180 = (undefined8 **)0x0;
    *(undefined4 *)(plVar4 + 5) = uStack_e0;
    *(undefined1 *)((long)plVar4 + 0x2c) = uStack_dc;
    lStack_1a8 = 0;
    uStack_1a0 = 0;
    lStack_1b0 = 0;
    plStack_b8 = plVar4;
    FUN_10ab10a0c(pppuVar5,param_3,&uStack_170,alStack_d0,&lStack_1b0,0);
    if (lStack_1b0 != 0) {
      lStack_1a8 = lStack_1b0;
      __ZdlPv();
    }
    if (plStack_b8 == alStack_d0) {
      lVar13 = 0x20;
LAB_10abb1f14:
      (**(code **)(*plStack_b8 + lVar13))();
    }
    else if (plStack_b8 != (long *)0x0) {
      lVar13 = 0x28;
      goto LAB_10abb1f14;
    }
    puStack_d8 = &uStack_170;
    ppuVar12 = &puStack_d8;
    FUN_10a18ba48();
    ppuVar10 = appuStack_90[1];
    if (appuStack_90[1] != (undefined8 **)0x0) {
      ppuVar11 = appuStack_90[1] + 1;
      do {
        puVar7 = *ppuVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar2) {
          *ppuVar11 = (undefined8 *)((long)puVar7 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (puVar7 == (undefined8 *)0x0) {
        (*(code *)(*appuStack_90[1])[2])(appuStack_90[1]);
        ppuVar12 = ppuVar10;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  if (ppuVar9 != (undefined8 **)0x0) {
    ppuVar11 = ppuVar9 + 1;
    do {
      puVar7 = *ppuVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar2) {
        *ppuVar11 = (undefined8 *)((long)puVar7 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar7 == (undefined8 *)0x0) {
      (*(code *)(*ppuVar9)[2])(ppuVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar12 = ppuVar9;
    }
  }
  ppuVar9 = ppuStack_f8;
  if (ppuStack_f8 != (undefined8 **)0x0) {
    ppuVar11 = ppuStack_f8 + 1;
    do {
      puVar7 = *ppuVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar2) {
        *ppuVar11 = (undefined8 *)((long)puVar7 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar7 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_f8)[2])(ppuStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar12 = ppuVar9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar12;
  }
  ___stack_chk_fail();
  if (lStack_1b0 != 0) {
    lStack_1a8 = lStack_1b0;
    __ZdlPv();
  }
  if (plStack_b8 == alStack_d0) {
    lVar13 = 0x20;
  }
  else {
    if (plStack_b8 == (long *)0x0) goto LAB_10abb20a0;
    lVar13 = 0x28;
  }
  (**(code **)(*plStack_b8 + lVar13))();
LAB_10abb20a0:
  func_0x00010a0523dc(plVar15 + 2);
  func_0x00010a0523dc(&lStack_198);
  puStack_d8 = &uStack_170;
  FUN_10a18ba48(&puStack_d8);
  func_0x00010a0523dc(appuStack_90);
  func_0x00010a0523dc(&lStack_f0);
  func_0x00010a0523dc(&lStack_100);
  ppuVar9 = ppuVar12;
  __Unwind_Resume();
  pcStack_1b8 = FUN_10abb213c;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = ppuVar9 + 9;
  *ppuVar11 = &PTR_DAT_110c52fa8;
  ppuVar9[1] = param_3;
  ppuVar9[2] = ppuVar11;
  ppuVar9[4] = (undefined8 *)0x0;
  ppuVar9[3] = (undefined8 *)0x0;
  ppuVar9[6] = (undefined8 *)0x0;
  ppuVar9[5] = (undefined8 *)0x0;
  ppuVar9[8] = (undefined8 *)0x0;
  ppuVar9[7] = (undefined8 *)0x0;
  *ppuVar9 = &PTR_DAT_110c50200;
  *(undefined4 *)(ppuVar9 + 10) = 0x10000;
  *(undefined2 *)((long)ppuVar9 + 0x54) = 1;
  ppuVar9[0xc] = (undefined8 *)0x0;
  ppuVar9[0xb] = (undefined8 *)0x0;
  ppuVar9[0xe] = (undefined8 *)0x0;
  ppuVar9[0xd] = (undefined8 *)0x0;
  ppuVar9[0x10] = (undefined8 *)0x0;
  ppuVar9[0xf] = (undefined8 *)0x0;
  ppuVar9[0x11] = (undefined8 *)0x0;
  plStack_1e0 = &lStack_100;
  pppuStack_1d8 = pppuVar5;
  ppuStack_1d0 = ppuVar10;
  ppuStack_1c8 = ppuVar12;
  puStack_1c0 = &stack0xfffffffffffffff0;
  *(undefined4 *)(ppuVar9 + 0x12) = 0x3f800000;
  uStack_1f8 = 0;
  puStack_1f0 = &UNK_10f69772f;
  ppuStack_208 = (undefined8 **)0x0;
  ppuStack_200 = (undefined8 **)0x0;
  FUN_10abd5914(&ppuStack_208,&puStack_1f0,&lStack_1e8,1);
  FUN_10aba6e58(ppuVar9,&ppuStack_208);
  ppuVar12 = ppuStack_208;
  if (ppuStack_208 != (undefined8 **)0x0) {
    ppuStack_200 = ppuStack_208;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return ppuVar9;
  }
  ___stack_chk_fail();
  if (ppuStack_208 != (undefined8 **)0x0) {
    ppuStack_200 = ppuStack_208;
    __ZdlPv();
  }
  FUN_10abb2268(ppuVar11);
  func_0x00010aba7988(ppuVar9);
  __Unwind_Resume();
  pcStack_218 = FUN_10abb2268;
  *ppuVar12 = &PTR_DAT_110c52fa8;
  ppuStack_230 = ppuVar11;
  ppuStack_228 = ppuVar9;
  ppuStack_220 = &puStack_1c0;
  func_0x00010abd59bc(ppuVar12 + 5);
  ppuStack_238 = ppuVar12 + 2;
  FUN_10abd7034(&ppuStack_238);
  return ppuVar12;
}



/* Entry: 10abb213c; end: 10abb2267;  */

undefined8 * FUN_10abb213c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1 + 9;
  *puVar2 = &PTR_DAT_110c52fa8;
  param_1[1] = param_2;
  param_1[2] = puVar2;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_DAT_110c50200;
  *(undefined4 *)(param_1 + 10) = 0x10000;
  *(undefined2 *)((long)param_1 + 0x54) = 1;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  uStack_48 = 0;
  puStack_40 = &UNK_10f69772f;
  puStack_58 = (undefined8 *)0x0;
  puStack_50 = (undefined8 *)0x0;
  FUN_10abd5914(&puStack_58,&puStack_40,&lStack_38,1);
  FUN_10aba6e58(param_1,&puStack_58);
  puVar1 = puStack_58;
  if (puStack_58 != (undefined8 *)0x0) {
    puStack_50 = puStack_58;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (puStack_58 != (undefined8 *)0x0) {
    puStack_50 = puStack_58;
    __ZdlPv();
  }
  FUN_10abb2268(puVar2);
  func_0x00010aba7988(param_1);
  __Unwind_Resume();
  pcStack_68 = FUN_10abb2268;
  *puVar1 = &PTR_DAT_110c52fa8;
  puStack_80 = puVar2;
  puStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010abd59bc(puVar1 + 5);
  puStack_88 = puVar1 + 2;
  FUN_10abd7034(&puStack_88);
  return puVar1;
}



/* Entry: 10abb2268; end: 10abb22b3;  */

undefined8 * FUN_10abb2268(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110c52fa8;
  func_0x00010abd59bc(param_1 + 5);
  puStack_28 = param_1 + 2;
  FUN_10abd7034(&puStack_28);
  return param_1;
}



/* Entry: 10abb22b4; end: 10abb22bf;  */

ushort FUN_10abb22b4(undefined8 param_1,long param_2)

{
  return *(ushort *)(param_2 + 0x20) >> 7 & 1;
}



/* Entry: 10abb22c0; end: 10abb305b;  */

/* WARNING: Removing unreachable block (ram,0x00010abb2cb0) */

void FUN_10abb22c0(long *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  code *pcVar7;
  bool bVar8;
  undefined **ppuVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined ***pppuVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined ***pppuVar22;
  long *plVar23;
  undefined2 *puVar24;
  uint *puVar25;
  undefined ***pppuVar26;
  undefined ***pppuVar27;
  uint uVar28;
  long *plVar29;
  undefined ***pppuVar30;
  undefined2 *puVar31;
  long *plVar32;
  long *plVar33;
  long *plStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined ***pppuStack_d0;
  long **pplStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined ***pppuStack_88;
  float fStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_2[6];
  if (*(long *)(lVar12 + 0x180) == 0) {
    bVar8 = false;
  }
  else {
    bVar8 = *(long *)(lVar12 + 0x188) != 0;
  }
  if ((*(long **)(lVar12 + 0x168) != *(long **)(lVar12 + 0x170)) &&
     (**(long **)(lVar12 + 0x168) != 0)) {
    uVar13 = (ulong)*(ushort *)((long)param_2 + 4) - 1;
    uVar17 = (param_1[0xc] - param_1[0xb] >> 3) * -0x3333333333333333;
    if (uVar17 < uVar13 || uVar17 - uVar13 == 0) goto LAB_10abb2fc0;
    puVar31 = *(undefined2 **)(param_2[2] + 0x218);
    puVar24 = *(undefined2 **)(param_2[2] + 0x220);
    if (puVar31 != puVar24) {
      plVar33 = (long *)(param_1[0xb] + (long)(int)uVar13 * 0x28);
      plVar11 = plVar33 + 2;
      do {
        lVar12 = param_2[2];
        FUN_10a01f6d4(lVar12,puVar31[4]);
        if ((*(long *)(lVar12 + 0x10) == *(long *)(param_2[6] + 0x10)) &&
           (*(long *)(lVar12 + 0x18) == *(long *)(param_2[6] + 0x18))) {
          puVar25 = *(uint **)(puVar31 + 8);
          puVar1 = *(uint **)(puVar31 + 0xc);
          plStack_98 = (long *)0x0;
          ppuStack_a0 = (undefined **)0x0;
          pppuStack_88 = (undefined ***)0x0;
          plStack_90 = (long *)0x0;
          fStack_80 = 1.0;
          if (puVar25 == puVar1) {
            pppuVar27 = (undefined ***)0x0;
            ppuVar9 = (undefined **)0x0;
            plVar23 = (long *)0x0;
          }
          else {
            pppuVar27 = (undefined ***)0x0;
            plVar29 = (long *)0x0;
            plVar32 = param_2;
            do {
              uVar2 = *puVar25;
              plVar23 = (long *)(ulong)uVar2;
              if (plVar29 != (long *)0x0) {
                uVar13 = (long)plVar29 - 1;
                uVar28 = (uint)plVar29;
                if (((ulong)plVar29 & uVar13) == 0) {
                  plVar32 = (long *)(ulong)(uVar28 - 1 & uVar2);
                }
                else {
                  plVar32 = plVar23;
                  if (plVar29 <= plVar23) {
                    uVar5 = 0;
                    if (uVar28 != 0) {
                      uVar5 = uVar2 / uVar28;
                    }
                    plVar32 = (long *)(ulong)(uVar2 - uVar5 * uVar28);
                  }
                }
                plVar14 = (long *)ppuStack_a0[(long)plVar32];
                if (plVar14 != (long *)0x0) {
                  do {
                    while( true ) {
                      plVar14 = (long *)*plVar14;
                      if (plVar14 == (long *)0x0) goto LAB_10abb2470;
                      plVar18 = (long *)plVar14[1];
                      if (plVar18 != plVar23) break;
                      if (*(uint *)(plVar14 + 2) == uVar2) goto LAB_10abb26ec;
                    }
                    if (((ulong)plVar29 & uVar13) == 0) {
                      plVar18 = (long *)((ulong)plVar18 & uVar13);
                    }
                    else if (plVar29 <= plVar18) {
                      uVar17 = 0;
                      if (plVar29 != (long *)0x0) {
                        uVar17 = (ulong)plVar18 / (ulong)plVar29;
                      }
                      plVar18 = (long *)((long)plVar18 - uVar17 * (long)plVar29);
                    }
                  } while (plVar18 == plVar32);
                }
              }
LAB_10abb2470:
              plVar14 = (long *)0x18;
              __Znwm();
              *plVar14 = 0;
              plVar14[1] = (long)plVar23;
              *(uint *)(plVar14 + 2) = uVar2;
              if ((plVar29 == (long *)0x0) ||
                 (fStack_80 * (float)plVar29 < (float)((long)pppuVar27 + 1))) {
                uVar13 = 1;
                if ((long *)0x2 < plVar29) {
                  uVar13 = (ulong)(((ulong)plVar29 & (long)plVar29 - 1U) != 0);
                }
                plVar32 = (long *)(uVar13 | (long)plVar29 << 1);
                plVar18 = (long *)(long)((float)((long)pppuVar27 + 1) / fStack_80);
                if (plVar32 <= plVar18) {
                  plVar32 = plVar18;
                }
                plVar18 = plVar29;
                if ((long)plVar32 - 1U == 0) {
                  plVar32 = (long *)0x2;
                }
                else if (((ulong)plVar32 & (long)plVar32 - 1U) != 0) {
                  __ZNSt3__112__next_primeEm();
                  plVar18 = plStack_98;
                }
                if (plVar18 < plVar32) {
LAB_10abb2504:
                  if ((ulong)plVar32 >> 0x3d != 0) {
                    func_0x000109ffded8();
                    goto LAB_10abb2fc0;
                  }
                  ppuVar9 = (undefined **)((long)plVar32 << 3);
                  __Znwm();
                  bVar4 = ppuStack_a0 != (undefined **)0x0;
                  ppuStack_a0 = ppuVar9;
                  if (bVar4) {
                    __ZdlPv();
                  }
                  plVar29 = (long *)0x0;
                  do {
                    ppuStack_a0[(long)plVar29] = (undefined *)0x0;
                    plVar29 = (long *)((long)plVar29 + 1);
                  } while (plVar32 != plVar29);
                  plVar29 = plVar32;
                  plStack_98 = plVar32;
                  if (plStack_90 != (long *)0x0) {
                    plVar18 = (long *)plStack_90[1];
                    uVar13 = (long)plVar32 - 1;
                    if (((ulong)plVar32 & uVar13) == 0) {
                      plVar18 = (long *)((ulong)plVar18 & uVar13);
                    }
                    else if (plVar32 <= plVar18) {
                      uVar17 = 0;
                      if (plVar32 != (long *)0x0) {
                        uVar17 = (ulong)plVar18 / (ulong)plVar32;
                      }
                      plVar18 = (long *)((long)plVar18 - uVar17 * (long)plVar32);
                    }
                    ppuStack_a0[(long)plVar18] = (undefined *)&plStack_90;
                    plVar19 = (long *)*plStack_90;
                    plVar6 = plStack_90;
                    while (plVar19 != (long *)0x0) {
                      plVar21 = (long *)plVar19[1];
                      if (((ulong)plVar32 & uVar13) == 0) {
                        plVar21 = (long *)((ulong)plVar21 & uVar13);
                      }
                      else if (plVar32 <= plVar21) {
                        uVar17 = 0;
                        if (plVar32 != (long *)0x0) {
                          uVar17 = (ulong)plVar21 / (ulong)plVar32;
                        }
                        plVar21 = (long *)((long)plVar21 - uVar17 * (long)plVar32);
                      }
                      plVar20 = plVar19;
                      if (plVar21 != plVar18) {
                        if (ppuStack_a0[(long)plVar21] == (undefined *)0x0) {
                          ppuStack_a0[(long)plVar21] = (undefined *)plVar6;
                          plVar18 = plVar21;
                        }
                        else {
                          *plVar6 = *plVar19;
                          *plVar19 = *(long *)ppuStack_a0[(long)plVar21];
                          *(long **)ppuStack_a0[(long)plVar21] = plVar19;
                          plVar20 = plVar6;
                        }
                      }
                      plVar6 = plVar20;
                      plVar19 = (long *)*plVar20;
                    }
                  }
                }
                else {
                  plVar29 = plVar18;
                  if (plVar32 < plVar18) {
                    plVar29 = (long *)(long)((float)pppuStack_88 / fStack_80);
                    if ((plVar18 < (long *)0x3) || (((ulong)plVar18 & (long)plVar18 - 1U) != 0)) {
                      __ZNSt3__112__next_primeEm();
                    }
                    else if ((long *)0x1 < plVar29) {
                      plVar29 = (long *)(1L << (-LZCOUNT((long)plVar29 - 1) & 0x3fU));
                    }
                    ppuVar9 = ppuStack_a0;
                    if (plVar32 <= plVar29) {
                      plVar32 = plVar29;
                    }
                    plVar29 = plStack_98;
                    if (plVar32 < plVar18) {
                      if (plVar32 != (long *)0x0) goto LAB_10abb2504;
                      ppuStack_a0 = (undefined **)0x0;
                      if (ppuVar9 != (undefined **)0x0) {
                        __ZdlPv();
                      }
                      plStack_98 = (long *)0x0;
                      plVar29 = (long *)0x0;
                    }
                  }
                }
                if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                  plVar32 = (long *)(ulong)((int)plVar29 - 1U & uVar2);
                }
                else {
                  plVar32 = plVar23;
                  if (plVar29 <= plVar23) {
                    uVar13 = 0;
                    if (plVar29 != (long *)0x0) {
                      uVar13 = (ulong)plVar23 / (ulong)plVar29;
                    }
                    plVar32 = (long *)((long)plVar23 - uVar13 * (long)plVar29);
                  }
                }
              }
              ppuVar9 = (undefined **)ppuStack_a0[(long)plVar32];
              if (ppuVar9 == (undefined **)0x0) {
                *plVar14 = (long)plStack_90;
                ppuStack_a0[(long)plVar32] = (undefined *)&plStack_90;
                plStack_90 = plVar14;
                if (*plVar14 != 0) {
                  plVar23 = *(long **)(*plVar14 + 8);
                  if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
                    plVar23 = (long *)((ulong)plVar23 & (long)plVar29 - 1U);
                  }
                  else if (plVar29 <= plVar23) {
                    uVar13 = 0;
                    if (plVar29 != (long *)0x0) {
                      uVar13 = (ulong)plVar23 / (ulong)plVar29;
                    }
                    plVar23 = (long *)((long)plVar23 - uVar13 * (long)plVar29);
                  }
                  ppuVar9 = ppuStack_a0 + (long)plVar23;
                  goto LAB_10abb26dc;
                }
              }
              else {
                *plVar14 = (long)*ppuVar9;
LAB_10abb26dc:
                *ppuVar9 = (undefined *)plVar14;
              }
              pppuVar27 = (undefined ***)((long)pppuStack_88 + 1);
              pppuStack_88 = pppuVar27;
LAB_10abb26ec:
              puVar25 = puVar25 + 1;
              ppuVar9 = ppuStack_a0;
              plVar23 = plStack_98;
            } while (puVar25 != puVar1);
          }
          plStack_d8 = plStack_90;
          uStack_f0._0_6_ = CONCAT24(*puVar31,*(undefined4 *)(puVar31 + 2));
          ppuStack_a0 = (undefined **)0x0;
          plStack_98 = (long *)0x0;
          pplStack_c8 = (long **)CONCAT44(pplStack_c8._4_4_,fStack_80);
          if (pppuVar27 != (undefined ***)0x0) {
            plVar29 = (long *)plStack_90[1];
            if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
              plVar29 = (long *)((ulong)plVar29 & (long)plVar23 - 1U);
            }
            else if (plVar23 <= plVar29) {
              uVar13 = 0;
              if (plVar23 != (long *)0x0) {
                uVar13 = (ulong)plVar29 / (ulong)plVar23;
              }
              plVar29 = (long *)((long)plVar29 - uVar13 * (long)plVar23);
            }
            ppuVar9[(long)plVar29] = (undefined *)&plStack_d8;
            plStack_90 = (long *)0x0;
            pppuStack_88 = (undefined ***)0x0;
          }
          uVar2 = *(uint *)(puVar31 + 6);
          pppuVar26 = (undefined ***)(ulong)uVar2;
          pppuVar30 = (undefined ***)plVar33[1];
          ppuStack_e8 = ppuVar9;
          plStack_e0 = plVar23;
          pppuStack_d0 = pppuVar27;
          if (pppuVar30 != (undefined ***)0x0) {
            uVar13 = (long)pppuVar30 - 1;
            uVar28 = (uint)pppuVar30;
            if (((ulong)pppuVar30 & uVar13) == 0) {
              pppuVar27 = (undefined ***)(ulong)(uVar28 - 1 & uVar2);
            }
            else {
              pppuVar27 = pppuVar26;
              if (pppuVar30 <= pppuVar26) {
                uVar5 = 0;
                if (uVar28 != 0) {
                  uVar5 = uVar2 / uVar28;
                }
                pppuVar27 = (undefined ***)(ulong)(uVar2 - uVar5 * uVar28);
              }
            }
            puVar15 = *(undefined8 **)(*plVar33 + (long)pppuVar27 * 8);
            if (puVar15 != (undefined8 *)0x0) {
              for (plVar23 = (long *)*puVar15; plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
                pppuVar16 = (undefined ***)plVar23[1];
                if (pppuVar16 == pppuVar26) {
                  if (*(uint *)(plVar23 + 2) == uVar2) goto LAB_10abb2b08;
                }
                else {
                  if (((ulong)pppuVar30 & uVar13) == 0) {
                    pppuVar16 = (undefined ***)((ulong)pppuVar16 & uVar13);
                  }
                  else if (pppuVar30 <= pppuVar16) {
                    uVar17 = 0;
                    if (pppuVar30 != (undefined ***)0x0) {
                      uVar17 = (ulong)pppuVar16 / (ulong)pppuVar30;
                    }
                    pppuVar16 = (undefined ***)((long)pppuVar16 - uVar17 * (long)pppuVar30);
                  }
                  if (pppuVar16 != pppuVar27) break;
                }
              }
            }
          }
          plVar23 = (long *)0x48;
          __Znwm();
          uStack_f8 = 1;
          *plVar23 = 0;
          plVar23[1] = (long)pppuVar26;
          *(undefined4 *)(plVar23 + 2) = *(undefined4 *)(puVar31 + 6);
          plVar23[8] = 0;
          plVar23[7] = 0;
          plVar23[6] = 0;
          plVar23[5] = 0;
          plVar23[4] = 0;
          plVar23[3] = 0;
          *(undefined4 *)(plVar23 + 8) = 0x3f800000;
          plStack_108 = plVar23;
          plStack_100 = plVar33;
          if ((pppuVar30 == (undefined ***)0x0) ||
             (*(float *)(plVar33 + 4) * (float)pppuVar30 < (float)(plVar33[3] + 1))) {
            uVar13 = 1;
            if ((undefined ***)0x2 < pppuVar30) {
              uVar13 = (ulong)(((ulong)pppuVar30 & (long)pppuVar30 - 1U) != 0);
            }
            pppuVar27 = (undefined ***)(uVar13 | (long)pppuVar30 << 1);
            pppuVar16 = (undefined ***)(long)((float)(plVar33[3] + 1) / *(float *)(plVar33 + 4));
            if (pppuVar27 <= pppuVar16) {
              pppuVar27 = pppuVar16;
            }
            if ((long)pppuVar27 - 1U == 0) {
              pppuVar27 = (undefined ***)0x2;
            }
            else if (((ulong)pppuVar27 & (long)pppuVar27 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
              pppuVar30 = (undefined ***)plVar33[1];
            }
            if (pppuVar30 < pppuVar27) {
LAB_10abb2910:
              if ((ulong)pppuVar27 >> 0x3d != 0) goto LAB_10abb2fbc;
              lVar12 = (long)pppuVar27 << 3;
              __Znwm();
              lVar10 = *plVar33;
              *plVar33 = lVar12;
              if (lVar10 != 0) {
                __ZdlPv();
              }
              pppuVar30 = (undefined ***)0x0;
              plVar33[1] = (long)pppuVar27;
              do {
                *(undefined8 *)(*plVar33 + (long)pppuVar30 * 8) = 0;
                pppuVar30 = (undefined ***)((long)pppuVar30 + 1);
              } while (pppuVar27 != pppuVar30);
              plVar29 = (long *)*plVar11;
              pppuVar30 = pppuVar27;
              if (plVar29 != (long *)0x0) {
                pppuVar16 = (undefined ***)plVar29[1];
                uVar13 = (long)pppuVar27 - 1;
                if (((ulong)pppuVar27 & uVar13) == 0) {
                  pppuVar16 = (undefined ***)((ulong)pppuVar16 & uVar13);
                }
                else if (pppuVar27 <= pppuVar16) {
                  uVar17 = 0;
                  if (pppuVar27 != (undefined ***)0x0) {
                    uVar17 = (ulong)pppuVar16 / (ulong)pppuVar27;
                  }
                  pppuVar16 = (undefined ***)((long)pppuVar16 - uVar17 * (long)pppuVar27);
                }
                *(long **)(*plVar33 + (long)pppuVar16 * 8) = plVar11;
                plVar32 = (long *)*plVar29;
                while (plVar32 != (long *)0x0) {
                  pppuVar22 = (undefined ***)plVar32[1];
                  if (((ulong)pppuVar27 & uVar13) == 0) {
                    pppuVar22 = (undefined ***)((ulong)pppuVar22 & uVar13);
                  }
                  else if (pppuVar27 <= pppuVar22) {
                    uVar17 = 0;
                    if (pppuVar27 != (undefined ***)0x0) {
                      uVar17 = (ulong)pppuVar22 / (ulong)pppuVar27;
                    }
                    pppuVar22 = (undefined ***)((long)pppuVar22 - uVar17 * (long)pppuVar27);
                  }
                  plVar14 = plVar32;
                  if (pppuVar22 != pppuVar16) {
                    lVar12 = *plVar33;
                    if (*(long *)(lVar12 + (long)pppuVar22 * 8) == 0) {
                      *(long **)(lVar12 + (long)pppuVar22 * 8) = plVar29;
                      pppuVar16 = pppuVar22;
                    }
                    else {
                      *plVar29 = *plVar32;
                      *plVar32 = **(undefined8 **)(lVar12 + (long)pppuVar22 * 8);
                      **(long **)(lVar12 + (long)pppuVar22 * 8) = (long)plVar32;
                      plVar14 = plVar29;
                    }
                  }
                  plVar29 = plVar14;
                  plVar32 = (long *)*plVar14;
                }
              }
            }
            else if (pppuVar27 < pppuVar30) {
              pppuVar16 = (undefined ***)(long)((float)(ulong)plVar33[3] / *(float *)(plVar33 + 4));
              if ((pppuVar30 < (undefined ***)0x3) ||
                 (((ulong)pppuVar30 & (long)pppuVar30 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((undefined ***)0x1 < pppuVar16) {
                pppuVar16 = (undefined ***)(1L << (-LZCOUNT((long)pppuVar16 + -1) & 0x3fU));
              }
              if (pppuVar27 <= pppuVar16) {
                pppuVar27 = pppuVar16;
              }
              if (pppuVar27 < pppuVar30) {
                if (pppuVar27 != (undefined ***)0x0) goto LAB_10abb2910;
                lVar12 = *plVar33;
                *plVar33 = 0;
                if (lVar12 != 0) {
                  __ZdlPv();
                }
                plVar33[1] = 0;
                pppuVar30 = (undefined ***)0x0;
              }
              else {
                pppuVar30 = (undefined ***)plVar33[1];
              }
            }
            if (((ulong)pppuVar30 & (long)pppuVar30 - 1U) == 0) {
              pppuVar27 = (undefined ***)(ulong)((int)pppuVar30 - 1U & uVar2);
            }
            else {
              pppuVar27 = pppuVar26;
              if (pppuVar30 <= pppuVar26) {
                uVar13 = 0;
                if (pppuVar30 != (undefined ***)0x0) {
                  uVar13 = (ulong)pppuVar26 / (ulong)pppuVar30;
                }
                pppuVar27 = (undefined ***)((long)pppuVar26 - uVar13 * (long)pppuVar30);
              }
            }
          }
          lVar12 = *plVar33;
          plVar29 = *(long **)(lVar12 + (long)pppuVar27 * 8);
          if (plVar29 == (long *)0x0) {
            *plVar23 = *plVar11;
            *plVar11 = (long)plVar23;
            *(long **)(lVar12 + (long)pppuVar27 * 8) = plVar11;
            if (*plVar23 != 0) {
              pppuVar27 = *(undefined ****)(*plVar23 + 8);
              if (((ulong)pppuVar30 & (long)pppuVar30 - 1U) == 0) {
                pppuVar27 = (undefined ***)((ulong)pppuVar27 & (long)pppuVar30 - 1U);
              }
              else if (pppuVar30 <= pppuVar27) {
                uVar13 = 0;
                if (pppuVar30 != (undefined ***)0x0) {
                  uVar13 = (ulong)pppuVar27 / (ulong)pppuVar30;
                }
                pppuVar27 = (undefined ***)((long)pppuVar27 - uVar13 * (long)pppuVar30);
              }
              plVar29 = (long *)(*plVar33 + (long)pppuVar27 * 8);
              goto LAB_10abb2af8;
            }
          }
          else {
            *plVar23 = *plVar29;
LAB_10abb2af8:
            *plVar29 = (long)plVar23;
          }
          plVar33[3] = plVar33[3] + 1;
LAB_10abb2b08:
          *(undefined4 *)(plVar23 + 3) = (undefined4)uStack_f0;
          *(undefined2 *)((long)plVar23 + 0x1c) = uStack_f0._4_2_;
          if (plVar23[7] != 0) {
            plVar29 = (long *)plVar23[6];
            while (plVar29 != (long *)0x0) {
              plVar29 = (long *)*plVar29;
              __ZdlPv();
            }
            plVar23[6] = 0;
            lVar12 = plVar23[5];
            if (lVar12 != 0) {
              lVar10 = 0;
              do {
                *(undefined8 *)(plVar23[4] + lVar10 * 8) = 0;
                lVar10 = lVar10 + 1;
              } while (lVar12 != lVar10);
            }
            plVar23[7] = 0;
          }
          ppuVar9 = ppuStack_e8;
          ppuStack_e8 = (undefined **)0x0;
          lVar12 = plVar23[4];
          plVar23[4] = (long)ppuVar9;
          if (lVar12 != 0) {
            __ZdlPv();
          }
          plVar29 = plStack_e0;
          plVar23[6] = (long)plStack_d8;
          plVar23[5] = (long)plStack_e0;
          plStack_e0 = (long *)0x0;
          plVar23[7] = (long)pppuStack_d0;
          *(undefined4 *)(plVar23 + 8) = pplStack_c8._0_4_;
          if (pppuStack_d0 != (undefined ***)0x0) {
            plVar32 = (long *)plStack_d8[1];
            if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
              plVar32 = (long *)((ulong)plVar32 & (long)plVar29 - 1U);
            }
            else if (plVar29 <= plVar32) {
              uVar13 = 0;
              if (plVar29 != (long *)0x0) {
                uVar13 = (ulong)plVar32 / (ulong)plVar29;
              }
              plVar32 = (long *)((long)plVar32 - uVar13 * (long)plVar29);
            }
            *(long **)(plVar23[4] + (long)plVar32 * 8) = plVar23 + 6;
            plStack_d8 = (long *)0x0;
            pppuStack_d0 = (undefined ***)0x0;
          }
          FUN_10abde8c0(&ppuStack_e8);
          FUN_10abde8c0(&ppuStack_a0);
        }
        puVar31 = puVar31 + 0x14;
      } while (puVar31 != puVar24);
    }
    if (!bVar8) {
      ppuStack_e8 = (undefined **)0x0;
      uStack_f0 = 1;
      plStack_e0 = (long *)CONCAT35(plStack_e0._5_3_,0x200000004);
      func_0x000107c2b054(&ppuStack_a0,&UNK_10f69773d);
      FUN_10aba6710(param_1,param_2,0,&ppuStack_a0,1,&uStack_f0);
      FUN_10abdeaf4(&plStack_108,param_1[3],param_1[4],*(undefined2 *)((long)param_2 + 4));
      plVar11 = plStack_100;
      lVar12 = plStack_108[3];
      *(undefined2 *)(lVar12 + 0x60) = 0x101;
      *(undefined8 *)(lVar12 + 100) = 0x3f800000;
      if (plStack_100 != (long *)0x0) {
        plVar33 = plStack_100 + 1;
        do {
          lVar12 = *plVar33;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar4) {
            *plVar33 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_100 + 0x10))(plStack_100);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
    }
    plStack_98 = (long *)(ulong)*(ushort *)((long)param_2 + 4);
    uStack_f0 = 0x8000000000000000;
    lStack_c0 = 0;
    pplStack_c8 = (long **)0x0;
    uStack_b0 = 0;
    lStack_b8 = 0;
    ppuStack_e8 = (undefined **)((ulong)ppuStack_e8 & 0xffffffff00000000);
    ppuStack_a0 = &PTR_FUN_110c542d8;
    plStack_90 = param_1;
    pppuStack_88 = &ppuStack_a0;
    FUN_10abda784(&ppuStack_a0,&plStack_e0);
    if (pppuStack_88 == &ppuStack_a0) {
      lVar12 = 0x20;
LAB_10abb2d6c:
      (**(code **)((long)*pppuStack_88 + lVar12))();
    }
    else if (pppuStack_88 != (undefined ***)0x0) {
      lVar12 = 0x28;
      goto LAB_10abb2d6c;
    }
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
    plVar11 = param_1;
    FUN_10aba5824(param_1,param_2,0,&uStack_f0);
    if (!bVar8) {
      FUN_10abdeaf4(&ppuStack_a0,param_1[3],param_1[4],*(undefined2 *)((long)param_2 + 4));
      func_0x00010a5d2bb4(plVar11 + 0x30,ppuStack_a0[3]);
      plVar33 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar23 = plStack_98 + 1;
        do {
          lVar12 = *plVar23;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar4) {
            *plVar23 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
        }
      }
    }
    *(undefined2 *)((long)plVar11 + 0x19d) = 0x101;
    *(undefined4 *)((long)plVar11 + 0x3c) = 0xffffffff;
    if (lStack_c0 != 0) {
      lStack_b8 = lStack_c0;
      __ZdlPv();
    }
    if (pplStack_c8 == &plStack_e0) {
      lVar12 = 0x20;
LAB_10abb2e30:
      (**(code **)((long)*pplStack_c8 + lVar12))();
    }
    else if (pplStack_c8 != (long **)0x0) {
      lVar12 = 0x28;
      goto LAB_10abb2e30;
    }
    plStack_98 = (long *)(ulong)*(ushort *)((long)param_2 + 4);
    uStack_f0 = 0x8000000000000000;
    lStack_c0 = 0;
    pplStack_c8 = (long **)0x0;
    uStack_b0 = 0;
    lStack_b8 = 0;
    ppuStack_e8 = (undefined **)((ulong)ppuStack_e8 & 0xffffffff00000000);
    ppuStack_a0 = &PTR_FUN_110c54358;
    plStack_90 = param_1;
    pppuStack_88 = &ppuStack_a0;
    FUN_10abda784(&ppuStack_a0,&plStack_e0);
    if (pppuStack_88 == &ppuStack_a0) {
      lVar12 = 0x20;
LAB_10abb2ea0:
      (**(code **)((long)*pppuStack_88 + lVar12))();
    }
    else if (pppuStack_88 != (undefined ***)0x0) {
      lVar12 = 0x28;
      goto LAB_10abb2ea0;
    }
    uStack_f0 = CONCAT44(uStack_f0._4_4_,1);
    plVar11 = param_1;
    FUN_10aba5824(param_1,param_2,0,&uStack_f0);
    if (!bVar8) {
      FUN_10abdeaf4(&ppuStack_a0,param_1[3],param_1[4],*(undefined2 *)((long)param_2 + 4));
      func_0x00010a5d2bb4(plVar11 + 0x30,ppuStack_a0[3]);
      plVar33 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar23 = plStack_98 + 1;
        do {
          lVar12 = *plVar23;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar8) {
            *plVar23 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
        }
      }
    }
    *(undefined2 *)((long)plVar11 + 0x19d) = 0;
    *(undefined4 *)((long)plVar11 + 0x3c) = 0xfffffffe;
    if (lStack_c0 != 0) {
      lStack_b8 = lStack_c0;
      __ZdlPv();
    }
    if (pplStack_c8 == &plStack_e0) {
      lVar12 = 0x20;
LAB_10abb2f64:
      (**(code **)((long)*pplStack_c8 + lVar12))();
    }
    else if (pplStack_c8 != (long **)0x0) {
      lVar12 = 0x28;
      goto LAB_10abb2f64;
    }
    *(undefined1 *)(param_2 + 9) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10abb2fbc:
  func_0x000109ffded8();
LAB_10abb2fc0:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10abb2fc4);
  (*pcVar7)();
}



/* Entry: 10abb305c; end: 10abb3063;  */

undefined8 FUN_10abb305c(void)

{
  return 1;
}



/* Entry: 10abb3064; end: 10abb32a3;  */

void FUN_10abb3064(long param_1,long param_2,long param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 auStack_40 [2];
  char cStack_29;
  
  uVar6 = (ulong)*(ushort *)(param_2 + 4) - 1;
  uVar9 = (*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 3) * -0x3333333333333333;
  if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10abb3288);
    (*pcVar4)();
  }
  plVar7 = (long *)(*(long *)(param_1 + 0x58) + (long)(int)uVar6 * 0x28);
  uVar6 = (ulong)param_4;
  uVar9 = plVar7[1];
  if (uVar9 != 0) {
    uVar10 = uVar9 - 1;
    uVar5 = (uint)uVar9;
    if ((uVar9 & uVar10) == 0) {
      uVar11 = (ulong)(uVar5 - 1 & param_4);
    }
    else {
      uVar11 = uVar6;
      if (uVar9 <= uVar6) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = param_4 / uVar5;
        }
        uVar11 = (ulong)(param_4 - uVar2 * uVar5);
      }
    }
    plVar12 = *(long **)(*plVar7 + uVar11 * 8);
    if (plVar12 != (long *)0x0) {
      for (plVar12 = (long *)*plVar12; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        uVar13 = plVar12[1];
        if (uVar13 == uVar6) {
          if (*(uint *)(plVar12 + 2) == param_4) {
            func_0x000107c2b07c(auStack_40,&DAT_10f64bf3a);
            FUN_10a01671c(param_3,auStack_40,plVar12 + 3);
            if (cStack_29 < '\0') {
              __ZdlPv(auStack_40[0]);
            }
            uVar5 = (uint)*(byte *)((long)plVar12 + 0x1c);
            *(uint *)(param_3 + 0x60) = uVar5;
            lVar8 = 0x58;
            goto LAB_10abb3230;
          }
        }
        else {
          if ((uVar9 & uVar10) == 0) {
            uVar13 = uVar13 & uVar10;
          }
          else if (uVar9 <= uVar13) {
            uVar3 = 0;
            if (uVar9 != 0) {
              uVar3 = uVar13 / uVar9;
            }
            uVar13 = uVar13 - uVar3 * uVar9;
          }
          if (uVar13 != uVar11) break;
        }
      }
    }
  }
  for (plVar7 = (long *)plVar7[2]; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    uVar9 = plVar7[5];
    if (uVar9 != 0) {
      uVar10 = uVar9 - 1;
      uVar5 = (uint)uVar9;
      if ((uVar9 & uVar10) == 0) {
        uVar11 = (ulong)(uVar5 - 1 & param_4);
      }
      else {
        uVar11 = uVar6;
        if (uVar9 <= uVar6) {
          uVar2 = 0;
          if (uVar5 != 0) {
            uVar2 = param_4 / uVar5;
          }
          uVar11 = (ulong)(param_4 - uVar2 * uVar5);
        }
      }
      plVar12 = *(long **)(plVar7[4] + uVar11 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_10abb31d4;
            uVar13 = plVar12[1];
            if (uVar13 != uVar6) break;
            if (*(uint *)(plVar12 + 2) == param_4) {
              bVar1 = *(byte *)((long)plVar7 + 0x1d);
              if (bVar1 == 0) goto LAB_10abb320c;
              uVar5 = 0;
              *(undefined1 *)(param_3 + 0x50) = 1;
              *(undefined4 *)(param_3 + 0x51) = 0;
              *(undefined1 *)(param_3 + 0x55) = 6;
              lVar8 = 0x60;
              *(uint *)(param_3 + 0x58) = (uint)bVar1;
              *(uint *)(param_3 + 0x5c) = (uint)bVar1;
              goto LAB_10abb3230;
            }
          }
          if ((uVar9 & uVar10) == 0) {
            uVar13 = uVar13 & uVar10;
          }
          else if (uVar9 <= uVar13) {
            uVar3 = 0;
            if (uVar9 != 0) {
              uVar3 = uVar13 / uVar9;
            }
            uVar13 = uVar13 - uVar3 * uVar9;
          }
        } while (uVar13 == uVar11);
      }
    }
LAB_10abb31d4:
  }
LAB_10abb320c:
  if ((*(byte *)(param_3 + 0x50) & 1) == 0) {
    uVar5 = 0;
    *(undefined1 *)(param_3 + 0x50) = 1;
    *(undefined4 *)(param_3 + 0x51) = 0;
    *(undefined1 *)(param_3 + 0x55) = 0;
    lVar8 = 0x60;
    *(undefined8 *)(param_3 + 0x58) = 0;
LAB_10abb3230:
    *(uint *)(param_3 + lVar8) = uVar5;
  }
  return;
}



/* Entry: 10abb32a4; end: 10abb3353;  */

void FUN_10abb32a4(void)

{
  return;
}



/* Entry: 10abb3354; end: 10abb3403;  */

void FUN_10abb3354(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  long *plStack_38;
  ulong uStack_30;
  uint uStack_28;
  undefined4 uStack_24;
  
  lVar4 = *(long *)(param_1 + 8);
  if ((lVar4 == 0) || (*(ulong *)(lVar4 + 0x28) < (param_2 & 0xffffffff))) {
    uStack_30 = param_2 & 0xffffffff;
    uStack_28 = *(uint *)(param_1 + 0x70) | 0x20;
    uStack_24 = 1;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x70))
              (auStack_40,*(long **)(param_1 + 0x38),&uStack_30);
    FUN_10a0e65b0((long *)(param_1 + 8),auStack_40);
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
  }
  return;
}



/* Entry: 10abb3404; end: 10abb34bf;  */

long * FUN_10abb3404(long param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined4 uStack_28;
  
  FUN_10abe3228(auStack_38,*(undefined8 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x30) = uStack_28;
  FUN_10a0e65b0(param_1 + 0x20,auStack_38);
  *(undefined4 *)(param_1 + 0x34) = param_2;
  plVar4 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar4 + 0x30))(plVar4,2,*(undefined4 *)(param_1 + 0x30),0);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return plVar4;
}



/* Entry: 10abb34c0; end: 10abb34d3;  */

void FUN_10abb34c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010abb34cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x38))();
  return;
}



/* Entry: 10abb34d4; end: 10abb35df;  */

void FUN_10abb34d4(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long extraout_x8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10abb3354(param_1,(int)param_4 + (int)param_3);
  ppuVar1 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)(param_1[7]);
  puVar2 = (undefined *)0x0;
  if (*ppuVar1 != (undefined *)0x0) {
    puVar2 = *ppuVar1 + 0x18;
  }
  if ((*(int *)(extraout_x8 + 0x734) == 1) &&
     (((char)param_1[3] != '\x01' || (FUN_10a08e0bc(), puVar2 == (undefined *)0x0)))) {
    uStack_50 = param_2;
    uStack_48 = param_3;
    func_0x000109245ea8(param_1[1],param_4 & 0xffffffff,&uStack_50,0);
    return;
  }
  (**(code **)(*param_1 + 0x30))(param_1,param_3);
  _memcpy();
  (**(code **)(*param_1 + 0x38))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010abb35ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,0,param_4,param_3,param_5);
  return;
}



/* Entry: 10abb35e0; end: 10abb393b;  */

void FUN_10abb35e0(long param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  
  if (param_4 == 0) goto LAB_10abb3824;
  FUN_10abb3354(param_1,param_4 + param_3);
  ppuVar5 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar8 = *ppuVar5;
  if (puVar8 == (undefined *)0x0) {
LAB_10abb3680:
    plStack_68 = (long *)0x0;
    plStack_70 = (long *)0x0;
    if (*(int *)(*(long *)(param_1 + 0x38) + 0x734) == 1) {
      uVar9 = *(undefined8 *)(param_1 + 8);
      plVar6 = *(long **)(param_1 + 0x20);
      (**(code **)(*plVar6 + 0x30))(plVar6,1,*(int *)(param_1 + 0x30) + param_2,0);
      plStack_88 = (long *)(ulong)param_4;
      plStack_90 = plVar6;
      func_0x000109245ea8(uVar9,param_3,&plStack_90,0);
      (**(code **)(**(long **)(param_1 + 0x20) + 0x38))();
      goto LAB_10abb3824;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    puVar8 = *(undefined **)(param_1 + 0x50);
    __ZNSt3__115recursive_mutex4lockEv(puVar8);
    FUN_10a012fec(&plStack_90,*(undefined8 *)(param_1 + 0x38),uVar9);
    plStack_70 = plStack_90;
    plStack_68 = plStack_88;
    plVar6 = plStack_90;
    (**(code **)(*plStack_90 + 0x48))();
    bVar3 = true;
    plVar10 = plStack_90;
    plVar11 = plStack_88;
  }
  else {
    plVar6 = (long *)(puVar8 + 0x18);
    FUN_10a08e0bc();
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    if (plVar6 == (long *)0x0) goto LAB_10abb3680;
    if ((puVar8[0xc0] & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10abb3870);
      (*pcVar4)();
    }
    FUN_10a097338(puVar8 + 0x18,param_1 + 0x20);
    FUN_10a097338(puVar8 + 0x18,param_1 + 8);
    bVar3 = false;
    plVar10 = (long *)0x0;
    plVar11 = (long *)0x0;
  }
  (**(code **)(*plVar6 + 0x48))(plVar6);
  uStack_78 = 0x40000000400;
  (**(code **)(*plVar6 + 0x38))(plVar6,0x900,0x100,0,&uStack_78,1,0,0,0,0);
  plStack_90 = (long *)(ulong)(uint)(*(int *)(param_1 + 0x30) + param_2);
  plStack_88 = (long *)(ulong)param_3;
  uStack_80 = (ulong)param_4;
  (**(code **)(*plVar6 + 0x58))
            (plVar6,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 8),&plStack_90,1);
  uStack_98 = 0x1f00000400;
  (**(code **)(*plVar6 + 0x38))(plVar6,0x100,0x882,0,&uStack_98,1,0,0,0,0);
  (**(code **)(*plVar6 + 0x40))(plVar6);
  if (plVar10 != (long *)0x0) {
    FUN_10a08e2f4(plVar10);
    plVar11 = plStack_68;
  }
  if (plVar11 != (long *)0x0) {
    plVar6 = plVar11 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  if (bVar3) {
    __ZNSt3__115recursive_mutex6unlockEv(puVar8);
  }
LAB_10abb3824:
  FUN_10a176664(param_1 + 0x20);
  return;
}



/* Entry: 10abb393c; end: 10abb5067;  */

undefined8 ** FUN_10abb393c(undefined8 **param_1,long *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  long *plVar3;
  undefined8 **ppuVar4;
  byte bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  code *pcVar9;
  char cVar10;
  undefined8 **ppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  undefined8 uVar15;
  long *plVar16;
  int *piVar17;
  undefined8 **ppuVar18;
  char *pcVar19;
  int iVar20;
  undefined8 *puVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined1 uVar24;
  undefined *puVar25;
  undefined1 uVar26;
  undefined8 extraout_x11;
  undefined8 extraout_x12;
  long *extraout_x13;
  undefined8 extraout_x14;
  undefined8 *puVar27;
  long lVar28;
  undefined1 auStack_f8 [8];
  long *plStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined8 uStack_d0;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined8 **ppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 **ppuStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar28 = *param_2;
  ppuVar11 = param_1;
  FUN_10a3ca004();
  uVar8 = *(int *)(lVar28 + 0x734) - 2;
  uVar22 = (uint)(0x2040404040203 >> (((ulong)uVar8 & 7) << 3));
  if (6 < uVar8) {
    uVar22 = 4;
  }
  puVar21 = ppuVar11[((ulong)uVar22 & 7) + 7];
  if (puVar21 == (undefined8 *)0x0) {
    FUN_10a3ca05c();
    puVar21 = ppuVar11[((ulong)uVar22 & 7) + 7];
  }
  FUN_10abe8160(param_1,puVar21);
  *param_1 = &PTR_FUN_110c50250;
  lVar28 = param_2[1];
  puVar21 = (undefined8 *)*param_2;
  param_1[0x1ad] = (undefined8 *)param_2[1];
  param_1[0x1ac] = puVar21;
  if (lVar28 != 0) {
    plVar16 = (long *)(lVar28 + 8);
    do {
      cVar10 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = *plVar16 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  puVar21 = (undefined8 *)*param_3;
  param_1[0x1af] = (undefined8 *)param_3[1];
  param_1[0x1ae] = puVar21;
  puVar21 = (undefined8 *)param_3[2];
  param_1[0x1b0] = puVar21;
  if (puVar21 != (undefined8 *)0x0) {
    plVar16 = puVar21 + 1;
    do {
      cVar10 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = *plVar16 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  *(undefined2 *)(param_1 + 0x1b1) = 1;
  ppuVar11 = param_1;
  (*(code *)(*param_1)[0x16])();
  *(char *)((long)param_1 + 0xd8a) = (char)ppuVar11;
  ppuVar11 = param_1 + 0x1b2;
  param_1[0x1b3] = (undefined8 *)0x0;
  param_1[0x1b2] = (undefined8 *)0x0;
  param_1[0x1b5] = (undefined8 *)0x0;
  param_1[0x1b4] = (undefined8 *)0x0;
  param_1[0x1b7] = (undefined8 *)0x0;
  param_1[0x1b6] = (undefined8 *)0x0;
  param_1[0x1b9] = (undefined8 *)0x0;
  param_1[0x1b8] = (undefined8 *)0x0;
  param_1[0x1bb] = (undefined8 *)0x0;
  param_1[0x1ba] = (undefined8 *)0x0;
  param_1[0x1bd] = (undefined8 *)0x0;
  param_1[0x1bc] = (undefined8 *)0x0;
  param_1[0x1bf] = (undefined8 *)0x0;
  param_1[0x1be] = (undefined8 *)0x0;
  param_1[0x1c1] = (undefined8 *)0x0;
  param_1[0x1c0] = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x1c2) = 0x3f800000;
  ppuVar1 = param_1 + 0x1c5;
  ppuVar2 = param_1 + 0x1c7;
  param_1[0x1cf] = (undefined8 *)0x0;
  param_1[0x1d1] = (undefined8 *)0x0;
  param_1[0x1d0] = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x1d2) = 0;
  param_1[0x1d3] = (undefined8 *)0x0;
  param_1[0x1d5] = (undefined8 *)0x0;
  param_1[0x1d4] = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x1d6) = 0;
  *(undefined4 *)(param_1 + 0x1d7) = 0;
  param_1[0x1c4] = (undefined8 *)0x0;
  param_1[0x1c3] = (undefined8 *)0x0;
  param_1[0x1c6] = (undefined8 *)0x0;
  param_1[0x1c5] = (undefined8 *)0x0;
  param_1[0x1c8] = (undefined8 *)0x0;
  param_1[0x1c7] = (undefined8 *)0x0;
  param_1[0x1ca] = (undefined8 *)0x0;
  param_1[0x1c9] = (undefined8 *)0x0;
  param_1[0x1cc] = (undefined8 *)0x0;
  param_1[0x1cb] = (undefined8 *)0x0;
  *(undefined8 *)((long)param_1 + 0xe6c) = 0;
  *(undefined8 *)((long)param_1 + 0xe64) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xec4) = 0;
  *(undefined2 *)(param_1 + 0x1d9) = 0x101;
  param_1[0x1db] = (undefined8 *)0x0;
  param_1[0x1da] = (undefined8 *)0x0;
  param_1[0x1dd] = (undefined8 *)0x0;
  param_1[0x1dc] = (undefined8 *)0x0;
  param_1[0x1df] = (undefined8 *)0x0;
  param_1[0x1de] = (undefined8 *)0x0;
  param_1[0x1e1] = (undefined8 *)0x0;
  param_1[0x1e0] = (undefined8 *)0x0;
  param_1[0x1e3] = (undefined8 *)0x0;
  param_1[0x1e2] = (undefined8 *)0x0;
  param_1[0x1e5] = (undefined8 *)0x0;
  param_1[0x1e4] = (undefined8 *)0x0;
  param_1[0x1e7] = (undefined8 *)0x0;
  param_1[0x1e6] = (undefined8 *)0x0;
  param_1[0x1e9] = (undefined8 *)0x0;
  param_1[0x1e8] = (undefined8 *)0x0;
  param_1[0x1eb] = (undefined8 *)0x0;
  param_1[0x1ea] = (undefined8 *)0x0;
  *(undefined8 *)((long)param_1 + 0xf64) = 0;
  *(undefined8 *)((long)param_1 + 0xf5c) = 0;
  param_1[0x1f8] = (undefined8 *)0x0;
  param_1[0x1f7] = (undefined8 *)0x0;
  param_1[0x1f6] = (undefined8 *)0x0;
  param_1[0x1f5] = (undefined8 *)0x0;
  param_1[500] = (undefined8 *)0x0;
  param_1[499] = (undefined8 *)0x0;
  param_1[0x1f2] = (undefined8 *)0x0;
  param_1[0x1f1] = (undefined8 *)0x0;
  param_1[0x1f0] = (undefined8 *)0x0;
  param_1[0x1ef] = (undefined8 *)0x0;
  param_1[0x1ee] = (undefined8 *)0x0;
  param_1[0x1f9] = (undefined8 *)0xffffffffffffffff;
  param_1[0x20c] = (undefined8 *)0x0;
  param_1[0x20b] = (undefined8 *)0x0;
  param_1[0x20a] = (undefined8 *)0x0;
  param_1[0x209] = (undefined8 *)0x0;
  param_1[0x208] = (undefined8 *)0x0;
  param_1[0x207] = (undefined8 *)0x0;
  param_1[0x206] = (undefined8 *)0x0;
  param_1[0x205] = (undefined8 *)0x0;
  param_1[0x204] = (undefined8 *)0x0;
  param_1[0x203] = (undefined8 *)0x0;
  param_1[0x202] = (undefined8 *)0x0;
  *(undefined8 *)((long)param_1 + 0x1004) = 0;
  *(undefined8 *)((long)param_1 + 0xffc) = 0;
  param_1[0x1ff] = (undefined8 *)0x0;
  param_1[0x1fe] = (undefined8 *)0x0;
  param_1[0x1fd] = (undefined8 *)0x0;
  param_1[0x1fc] = (undefined8 *)0x0;
  param_1[0x1fb] = (undefined8 *)0x0;
  param_1[0x1fa] = (undefined8 *)0x0;
  param_1[0x20d] = (undefined8 *)0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x216) = 0;
  param_1[0x215] = (undefined8 *)0x0;
  param_1[0x214] = (undefined8 *)0x0;
  param_1[0x213] = (undefined8 *)0x0;
  param_1[0x212] = (undefined8 *)0x0;
  param_1[0x211] = (undefined8 *)0x0;
  param_1[0x210] = (undefined8 *)0x0;
  param_1[0x20f] = (undefined8 *)0x0;
  param_1[0x20e] = (undefined8 *)0x0;
  *(undefined8 *)((long)param_1 + 0x10e9) = 0;
  *(undefined8 *)((long)param_1 + 0x10e1) = 0;
  param_1[0x21a] = (undefined8 *)0x0;
  param_1[0x219] = (undefined8 *)0x0;
  param_1[0x21c] = (undefined8 *)0x0;
  param_1[0x21b] = (undefined8 *)0x0;
  param_1[0x218] = (undefined8 *)0x0;
  param_1[0x217] = (undefined8 *)0x0;
  FUN_10a18b410(param_1 + 0x21f);
  FUN_10abcadf8(param_1 + 0x223);
  FUN_10abcafdc(param_1 + 0x227);
  param_1[0x231] = (undefined8 *)0x0;
  param_1[0x22e] = (undefined8 *)0x0;
  param_1[0x22d] = (undefined8 *)0x0;
  param_1[0x230] = (undefined8 *)0x0;
  param_1[0x22f] = (undefined8 *)0x0;
  param_1[0x22c] = (undefined8 *)0x0;
  param_1[0x22b] = (undefined8 *)0x0;
  param_1[0x232] = param_1 + 0x232;
  param_1[0x233] = param_1 + 0x232;
  param_1[0x234] = (undefined8 *)0x0;
  param_1[0x235] = param_1 + 0x235;
  param_1[0x236] = param_1 + 0x235;
  param_1[0x237] = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  param_1[0x23d] = (undefined8 *)0x0;
  param_1[0x23a] = (undefined8 *)0x0;
  param_1[0x239] = (undefined8 *)0x0;
  param_1[0x23c] = (undefined8 *)0x0;
  param_1[0x23b] = (undefined8 *)0x0;
  param_1[0x23e] = (undefined8 *)0xffffffffffffffff;
  param_1[0x23f] = (undefined8 *)0xffffffffffffffff;
  param_1[0x241] = (undefined8 *)0x0;
  param_1[0x240] = (undefined8 *)0x0;
  param_1[0x243] = (undefined8 *)0xffffffffffffffff;
  param_1[0x242] = (undefined8 *)0xffffffffffffffff;
  param_1[0x245] = (undefined8 *)0x0;
  param_1[0x244] = (undefined8 *)0x0;
  param_1[0x246] = (undefined8 *)0xffffffffffffffff;
  param_1[0x247] = (undefined8 *)0xffffffffffffffff;
  param_1[0x249] = (undefined8 *)0x0;
  param_1[0x248] = (undefined8 *)0x0;
  param_1[0x24a] = (undefined8 *)0xffffffffffffffff;
  param_1[0x24b] = (undefined8 *)0xffffffffffffffff;
  param_1[0x24d] = (undefined8 *)0x0;
  param_1[0x24c] = (undefined8 *)0x0;
  param_1[0x24e] = (undefined8 *)0xffffffffffffffff;
  param_1[0x24f] = (undefined8 *)0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x250) = 1;
  param_1[0x251] = param_1;
  param_1[0x253] = (undefined8 *)0x0;
  param_1[0x252] = (undefined8 *)0x0;
  param_1[0x255] = (undefined8 *)0x0;
  param_1[0x254] = (undefined8 *)0x0;
  param_1[599] = (undefined8 *)0x0;
  param_1[0x256] = (undefined8 *)0x0;
  param_1[0x259] = (undefined8 *)0x0;
  param_1[600] = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 0x25a) = 0;
  param_1[0x25c] = (undefined8 *)0x0;
  param_1[0x25b] = (undefined8 *)0x0;
  param_1[0x25e] = (undefined8 *)0x0;
  param_1[0x25d] = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x25f) = 0x3f800000;
  param_1[0x26a] = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 0x26b) = 0;
  param_1[0x261] = (undefined8 *)0x0;
  param_1[0x260] = (undefined8 *)0x0;
  param_1[0x263] = (undefined8 *)0x0;
  param_1[0x262] = (undefined8 *)0x0;
  param_1[0x265] = (undefined8 *)0x0;
  param_1[0x264] = (undefined8 *)0x0;
  param_1[0x267] = (undefined8 *)0x0;
  param_1[0x266] = (undefined8 *)0x0;
  *(undefined8 *)((long)param_1 + 0x1341) = 0;
  *(undefined8 *)((long)param_1 + 0x1339) = 0;
  *(undefined8 *)((long)param_1 + 0x135c) = 1;
  param_1[0x26d] = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 0x26e) = 0;
  ppuVar18 = param_1 + 0x26f;
  param_1[0x273] = (undefined8 *)0x0;
  param_1[0x270] = (undefined8 *)0x0;
  *ppuVar18 = (undefined8 *)0x0;
  param_1[0x272] = (undefined8 *)0x0;
  param_1[0x271] = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x274) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x275) = 0;
  param_1[0x279] = (undefined8 *)0x0;
  param_1[0x278] = (undefined8 *)0x0;
  param_1[0x277] = (undefined8 *)0x0;
  param_1[0x276] = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x27a) = 0x3f800000;
  param_1[0x2b6] = (undefined8 *)0x0;
  param_1[0x2b5] = (undefined8 *)0x0;
  param_1[0x2b4] = (undefined8 *)0x0;
  param_1[0x2b3] = (undefined8 *)0x0;
  param_1[0x2b2] = (undefined8 *)0x0;
  param_1[0x2b1] = (undefined8 *)0x0;
  param_1[0x2b0] = (undefined8 *)0x0;
  param_1[0x2af] = (undefined8 *)0x0;
  param_1[0x2ae] = (undefined8 *)0x0;
  param_1[0x2ad] = (undefined8 *)0x0;
  param_1[0x2ac] = (undefined8 *)0x0;
  param_1[0x2ab] = (undefined8 *)0x0;
  param_1[0x2aa] = (undefined8 *)0x0;
  param_1[0x2a9] = (undefined8 *)0x0;
  param_1[0x2a8] = (undefined8 *)0x0;
  param_1[0x2a7] = (undefined8 *)0x0;
  param_1[0x2a6] = (undefined8 *)0x0;
  param_1[0x2a5] = (undefined8 *)0x0;
  param_1[0x2a4] = (undefined8 *)0x0;
  param_1[0x2a3] = (undefined8 *)0x0;
  param_1[0x2a2] = (undefined8 *)0x0;
  param_1[0x2a1] = (undefined8 *)0x0;
  param_1[0x2a0] = (undefined8 *)0x0;
  param_1[0x29f] = (undefined8 *)0x0;
  param_1[0x29e] = (undefined8 *)0x0;
  param_1[0x29d] = (undefined8 *)0x0;
  param_1[0x29c] = (undefined8 *)0x0;
  param_1[0x29b] = (undefined8 *)0x0;
  param_1[0x29a] = (undefined8 *)0x0;
  param_1[0x299] = (undefined8 *)0x0;
  param_1[0x298] = (undefined8 *)0x0;
  param_1[0x297] = (undefined8 *)0x0;
  param_1[0x296] = (undefined8 *)0x0;
  param_1[0x295] = (undefined8 *)0x0;
  param_1[0x294] = (undefined8 *)0x0;
  param_1[0x293] = (undefined8 *)0x0;
  param_1[0x292] = (undefined8 *)0x0;
  param_1[0x291] = (undefined8 *)0x0;
  param_1[0x290] = (undefined8 *)0x0;
  param_1[0x28f] = (undefined8 *)0x0;
  param_1[0x28e] = (undefined8 *)0x0;
  param_1[0x28d] = (undefined8 *)0x0;
  param_1[0x28c] = (undefined8 *)0x0;
  param_1[0x28b] = (undefined8 *)0x0;
  param_1[0x28a] = (undefined8 *)0x0;
  param_1[0x289] = (undefined8 *)0x0;
  param_1[0x288] = (undefined8 *)0x0;
  param_1[0x287] = (undefined8 *)0x0;
  param_1[0x286] = (undefined8 *)0x0;
  param_1[0x282] = (undefined8 *)0x0;
  param_1[0x281] = (undefined8 *)0x0;
  param_1[0x284] = (undefined8 *)0x0;
  param_1[0x283] = (undefined8 *)0x0;
  param_1[0x27e] = (undefined8 *)0x0;
  param_1[0x27d] = (undefined8 *)0x0;
  param_1[0x280] = (undefined8 *)0x0;
  param_1[0x27f] = (undefined8 *)0x0;
  param_1[0x27c] = (undefined8 *)0x0;
  param_1[0x27b] = (undefined8 *)0x0;
  lVar28 = -0x180;
  *(undefined4 *)(param_1 + 0x285) = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar28 + 0x15c0) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x15b8) = 0;
    *(undefined4 *)((long)param_1 + lVar28 + 0x15c8) = 0;
    lVar28 = lVar28 + 0x18;
  } while (lVar28 != 0);
  puVar13 = (undefined8 *)0x0;
  puVar27 = (undefined8 *)0x0;
  param_1[0x2b8] = (undefined8 *)0x0;
  param_1[0x2b7] = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 0x2b9) = 1;
  ppuVar12 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar25 = *ppuVar12;
  puVar21 = (undefined8 *)0x0;
  if (puVar25 != (undefined *)0x0) {
    puVar21 = (undefined8 *)(puVar25 + 0x18);
  }
  param_1[0x2ba] = puVar21;
  if ((puVar25[0xc0] & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10abb4e2c);
    (*pcVar9)();
  }
  param_1[699] = (undefined8 *)(puVar25 + 0x18);
  param_1[0x2bd] = puVar27;
  param_1[700] = puVar13;
  param_1[0x2bf] = puVar27;
  param_1[0x2be] = puVar13;
  param_1[0x2c1] = puVar27;
  param_1[0x2c0] = puVar13;
  param_1[0x2c2] = (undefined8 *)&UNK_10e52b660;
  param_1[0x2c3] = (undefined8 *)0x0;
  param_1[0x2c5] = (undefined8 *)0x0;
  param_1[0x2c4] = (undefined8 *)0x0;
  param_1[0x2c6] = (undefined8 *)&UNK_10e52b660;
  param_1[0x2c7] = (undefined8 *)0x0;
  param_1[0x2c9] = (undefined8 *)0x0;
  param_1[0x2c8] = (undefined8 *)0x0;
  param_1[0x2ca] = (undefined8 *)&UNK_10e52b660;
  param_1[0x2cb] = (undefined8 *)0x0;
  param_1[0x2cd] = (undefined8 *)0x0;
  param_1[0x2ce] = (undefined8 *)&UNK_10e52b660;
  param_1[0x2cc] = (undefined8 *)0x0;
  _bzero(param_1 + 0x2cf,0x208);
  lVar28 = -0x160;
  do {
    *(undefined4 *)((long)param_1 + lVar28 + 0x1880) = 0;
    *(undefined1 *)((long)param_1 + lVar28 + 0x1884) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1890) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1888) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x18a0) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1898) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x18b0) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x18a8) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x18c0) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x18b8) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x18d0) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x18c8) = 0;
    lVar28 = lVar28 + 0x58;
  } while (lVar28 != 0);
  *(undefined4 *)(param_1 + 0x310) = 0;
  param_1[0x311] = (undefined8 *)0x1;
  param_1[0x312] = (undefined8 *)0x3f80000000000000;
  param_1[0x319] = (undefined8 *)0x0;
  param_1[0x314] = (undefined8 *)0x0;
  param_1[0x313] = (undefined8 *)0x0;
  param_1[0x316] = (undefined8 *)0x0;
  param_1[0x315] = (undefined8 *)0x0;
  param_1[0x318] = (undefined8 *)0x0;
  param_1[0x317] = (undefined8 *)0x0;
  lVar28 = -0x80;
  do {
    *(undefined8 *)((long)param_1 + lVar28 + 0x1958) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1950) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1968) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1960) = 0x3f80000000000000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1978) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1970) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1988) = 0x3f80000000000000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1980) = 0;
    lVar28 = lVar28 + 0x40;
  } while (lVar28 != 0);
  lVar28 = -0x80;
  do {
    *(undefined8 *)((long)param_1 + lVar28 + 0x19d8) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x19d0) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x19e8) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x19e0) = 0x3f80000000000000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x19f8) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x19f0) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1a08) = 0x3f80000000000000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1a00) = 0;
    lVar28 = lVar28 + 0x40;
  } while (lVar28 != 0);
  lVar28 = -0x80;
  do {
    *(undefined8 *)((long)param_1 + lVar28 + 0x1a58) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1a50) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1a68) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1a60) = 0x3f80000000000000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1a78) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1a70) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1a88) = 0x3f80000000000000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1a80) = 0;
    lVar28 = lVar28 + 0x40;
  } while (lVar28 != 0);
  lVar28 = -0x80;
  do {
    *(undefined8 *)((long)param_1 + lVar28 + 0x1ad8) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1ad0) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1ae8) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1ae0) = 0x3f80000000000000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1af8) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1af0) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1b08) = 0x3f80000000000000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1b00) = 0;
    lVar28 = lVar28 + 0x40;
  } while (lVar28 != 0);
  lVar28 = -0x80;
  do {
    *(undefined8 *)((long)param_1 + lVar28 + 7000) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1b50) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1b68) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1b60) = 0x3f80000000000000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1b78) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1b70) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1b88) = 0x3f80000000000000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1b80) = 0;
    lVar28 = lVar28 + 0x40;
  } while (lVar28 != 0);
  lVar28 = -0x80;
  do {
    *(undefined8 *)((long)param_1 + lVar28 + 0x1bd8) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1bd0) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1be8) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1be0) = 0x3f80000000000000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1bf8) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1bf0) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1c08) = 0x3f80000000000000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1c00) = 0;
    lVar28 = lVar28 + 0x40;
  } while (lVar28 != 0);
  lVar28 = -0x80;
  do {
    *(undefined8 *)((long)param_1 + lVar28 + 0x1c58) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1c50) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1c68) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1c60) = 0x3f80000000000000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1c78) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1c70) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1c88) = 0x3f80000000000000;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1c80) = 0;
    lVar28 = lVar28 + 0x40;
  } while (lVar28 != 0);
  param_1[0x38d] = (undefined8 *)0x0;
  param_1[0x38c] = (undefined8 *)0x0;
  param_1[0x38b] = (undefined8 *)0x0;
  param_1[0x38a] = (undefined8 *)0x0;
  *(undefined8 *)((long)param_1 + 0x1c74) = 0;
  *(undefined8 *)((long)param_1 + 0x1c6c) = 0;
  *(undefined4 *)((long)param_1 + 0x1c7c) = 0x7fa00000;
  param_1[0x393] = (undefined8 *)0x0;
  param_1[0x392] = (undefined8 *)0x0;
  *(undefined8 *)((long)param_1 + 0x1ca1) = 0;
  *(undefined8 *)((long)param_1 + 0x1c99) = 0;
  lVar28 = 0x200;
  *(undefined2 *)((long)param_1 + 0x1caa) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x1cac) = 0;
  param_1[0x391] = (undefined8 *)0x0;
  param_1[0x390] = (undefined8 *)0x0;
  ppuVar14 = param_1 + 0x397;
  do {
    *(undefined1 *)ppuVar14 = 0;
    *(undefined4 *)((long)ppuVar14 + 4) = 0;
    *(undefined4 *)(ppuVar14 + 1) = 0;
    *(undefined4 *)((long)ppuVar14 + 0xc) = 0x3f800000;
    ppuVar14[3] = (undefined8 *)0x0;
    ppuVar14[2] = (undefined8 *)0x0;
    ppuVar14[5] = (undefined8 *)0x0;
    ppuVar14[4] = (undefined8 *)0x0;
    *(undefined8 *)((long)ppuVar14 + 0x34) = 0;
    *(undefined8 *)((long)ppuVar14 + 0x2c) = 0;
    *(undefined4 *)((long)ppuVar14 + 0x3c) = 0xffffffff;
    ppuVar14 = ppuVar14 + 8;
    lVar28 = lVar28 + -0x40;
  } while (lVar28 != 0);
  lVar28 = -0x100;
  do {
    *(undefined8 *)((long)param_1 + lVar28 + 0x1fc0) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1fb8) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1fc8) = 0;
    *(undefined8 *)((long)param_1 + lVar28 + 0x1fd0) = 0xffffffff00000000;
    lVar28 = lVar28 + 0x20;
  } while (lVar28 != 0);
  lVar28 = 0x120;
  ppuVar14 = param_1 + 0x3fb;
  do {
    ppuVar14[-4] = (undefined8 *)0x0;
    *(undefined4 *)(ppuVar14 + -3) = 0;
    ppuVar14[-1] = (undefined8 *)0x3f80000000000000;
    ppuVar14[-2] = (undefined8 *)0x0;
    *(undefined4 *)ppuVar14 = 0x3f800000;
    lVar28 = lVar28 + -0x24;
    ppuVar14 = (undefined8 **)((long)ppuVar14 + 0x24);
  } while (lVar28 != 0);
  *(undefined4 *)(param_1 + 0x449) = 0;
  param_1[0x446] = (undefined8 *)0x0;
  param_1[0x445] = (undefined8 *)0x0;
  param_1[0x448] = (undefined8 *)0x0;
  param_1[0x447] = (undefined8 *)0x0;
  param_1[0x442] = (undefined8 *)0x0;
  param_1[0x441] = (undefined8 *)0x0;
  param_1[0x444] = (undefined8 *)0x0;
  param_1[0x443] = (undefined8 *)0x0;
  param_1[0x43e] = (undefined8 *)0x0;
  param_1[0x43d] = (undefined8 *)0x0;
  param_1[0x440] = (undefined8 *)0x0;
  param_1[0x43f] = (undefined8 *)0x0;
  param_1[0x43a] = (undefined8 *)0x0;
  param_1[0x439] = (undefined8 *)0x0;
  param_1[0x43c] = (undefined8 *)0x0;
  param_1[0x43b] = (undefined8 *)0x0;
  param_1[0x436] = (undefined8 *)0x0;
  param_1[0x435] = (undefined8 *)0x0;
  param_1[0x438] = (undefined8 *)0x0;
  param_1[0x437] = (undefined8 *)0x0;
  param_1[0x432] = (undefined8 *)0x0;
  param_1[0x431] = (undefined8 *)0x0;
  param_1[0x434] = (undefined8 *)0x0;
  param_1[0x433] = (undefined8 *)0x0;
  param_1[0x42e] = (undefined8 *)0x0;
  param_1[0x42d] = (undefined8 *)0x0;
  param_1[0x430] = (undefined8 *)0x0;
  param_1[0x42f] = (undefined8 *)0x0;
  param_1[0x42a] = (undefined8 *)0x0;
  param_1[0x429] = (undefined8 *)0x0;
  param_1[0x42c] = (undefined8 *)0x0;
  param_1[0x42b] = (undefined8 *)0x0;
  param_1[0x426] = (undefined8 *)0x0;
  param_1[0x425] = (undefined8 *)0x0;
  param_1[0x428] = (undefined8 *)0x0;
  param_1[0x427] = (undefined8 *)0x0;
  param_1[0x422] = (undefined8 *)0x0;
  param_1[0x421] = (undefined8 *)0x0;
  param_1[0x424] = (undefined8 *)0x0;
  param_1[0x423] = (undefined8 *)0x0;
  param_1[0x41e] = (undefined8 *)0x0;
  param_1[0x41d] = (undefined8 *)0x0;
  param_1[0x420] = (undefined8 *)0x0;
  param_1[0x41f] = (undefined8 *)0x0;
  puVar21 = (undefined8 *)((long)param_1 + 0x22dc);
  lVar28 = 0x7c0;
  param_1[0x41c] = (undefined8 *)0x0;
  param_1[0x41b] = (undefined8 *)0x0;
  do {
    *(undefined1 *)((long)puVar21 + -0x8c) = 0;
    *(undefined8 *)((long)puVar21 + -0x7c) = 0;
    *(undefined8 *)((long)puVar21 + -0x84) = 0;
    *(undefined8 *)((long)puVar21 + -0x6c) = 0;
    *(undefined8 *)((long)puVar21 + -0x74) = 0;
    *(undefined1 *)((long)puVar21 + -100) = 0;
    *(undefined4 *)(puVar21 + -0xc) = 1;
    *(undefined8 *)((long)puVar21 + -0x5c) = 0;
    *(undefined8 *)((long)puVar21 + -0x4c) = 0;
    *(undefined8 *)((long)puVar21 + -0x54) = 0;
    *(undefined8 *)((long)puVar21 + -0x46) = 0;
    *(undefined2 *)((long)puVar21 + -0x3e) = 1000;
    *(undefined4 *)((long)puVar21 + -0x1c) = 0x3f800000;
    *(undefined8 *)((long)puVar21 + -0x34) = 0;
    *(undefined8 *)((long)puVar21 + -0x3c) = 0x3f800000;
    *(undefined8 *)((long)puVar21 + -0x24) = 0;
    *(undefined8 *)((long)puVar21 + -0x2c) = 0x3f800000;
    puVar21[-3] = 0;
    puVar21[-2] = 0;
    *(undefined1 *)((long)puVar21 + -4) = 0;
    puVar21[0xc] = 0;
    puVar21[9] = 0;
    puVar21[8] = 0;
    puVar21[0xb] = 0;
    puVar21[10] = 0;
    puVar21[5] = 0;
    puVar21[4] = 0;
    puVar21[7] = 0;
    puVar21[6] = 0;
    puVar21[1] = 0;
    *puVar21 = 0;
    puVar21[3] = 0;
    puVar21[2] = 0;
    puVar21 = puVar21 + 0x1f;
    lVar28 = lVar28 + -0xf8;
  } while (lVar28 != 0);
  puVar21 = (undefined8 *)((long)param_1 + 0x2a9c);
  lVar28 = 0x7c0;
  do {
    *(undefined1 *)((long)puVar21 + -0x8c) = 0;
    *(undefined8 *)((long)puVar21 + -0x7c) = 0;
    *(undefined8 *)((long)puVar21 + -0x84) = 0;
    *(undefined8 *)((long)puVar21 + -0x6c) = 0;
    *(undefined8 *)((long)puVar21 + -0x74) = 0;
    *(undefined1 *)((long)puVar21 + -100) = 0;
    *(undefined4 *)(puVar21 + -0xc) = 1;
    *(undefined8 *)((long)puVar21 + -0x5c) = 0;
    *(undefined8 *)((long)puVar21 + -0x4c) = 0;
    *(undefined8 *)((long)puVar21 + -0x54) = 0;
    *(undefined8 *)((long)puVar21 + -0x46) = 0;
    *(undefined2 *)((long)puVar21 + -0x3e) = 1000;
    *(undefined4 *)((long)puVar21 + -0x1c) = 0x3f800000;
    *(undefined8 *)((long)puVar21 + -0x34) = 0;
    *(undefined8 *)((long)puVar21 + -0x3c) = 0x3f800000;
    *(undefined8 *)((long)puVar21 + -0x24) = 0;
    *(undefined8 *)((long)puVar21 + -0x2c) = 0x3f800000;
    puVar21[-3] = 0;
    puVar21[-2] = 0;
    *(undefined1 *)((long)puVar21 + -4) = 0;
    puVar21[0xc] = 0;
    puVar21[9] = 0;
    puVar21[8] = 0;
    puVar21[0xb] = 0;
    puVar21[10] = 0;
    puVar21[5] = 0;
    puVar21[4] = 0;
    puVar21[7] = 0;
    puVar21[6] = 0;
    puVar21[1] = 0;
    *puVar21 = 0;
    puVar21[3] = 0;
    puVar21[2] = 0;
    puVar21 = puVar21 + 0x1f;
    lVar28 = lVar28 + -0xf8;
  } while (lVar28 != 0);
  *(undefined1 *)(param_1 + 0x63a) = 0;
  param_1[0x63c] = (undefined8 *)0x0;
  param_1[0x63b] = (undefined8 *)0x0;
  param_1[0x63e] = (undefined8 *)0x0;
  param_1[0x63d] = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 0x63f) = 0;
  *(undefined4 *)((long)param_1 + 0x31fc) = 1;
  param_1[0x640] = (undefined8 *)0x0;
  param_1[0x642] = (undefined8 *)0x0;
  param_1[0x641] = (undefined8 *)0x0;
  *(undefined8 *)((long)param_1 + 0x3216) = 0;
  *(undefined2 *)((long)param_1 + 0x321e) = 1000;
  *(undefined4 *)(param_1 + 0x648) = 0x3f800000;
  param_1[0x645] = (undefined8 *)0x0;
  param_1[0x644] = (undefined8 *)0x3f800000;
  param_1[0x647] = (undefined8 *)0x0;
  param_1[0x646] = (undefined8 *)0x3f800000;
  *(undefined8 *)((long)param_1 + 0x324c) = 0;
  *(undefined8 *)((long)param_1 + 0x3244) = 0;
  *(undefined1 *)(param_1 + 0x64b) = 0;
  *(undefined8 *)((long)param_1 + 0x3264) = 0;
  *(undefined8 *)((long)param_1 + 0x325c) = 0;
  *(undefined8 *)((long)param_1 + 0x3274) = 0;
  *(undefined8 *)((long)param_1 + 0x326c) = 0;
  *(undefined8 *)((long)param_1 + 0x3284) = 0;
  *(undefined8 *)((long)param_1 + 0x327c) = 0;
  *(undefined8 *)((long)param_1 + 0x3294) = 0;
  *(undefined8 *)((long)param_1 + 0x328c) = 0;
  *(undefined8 *)((long)param_1 + 0x32a4) = 0;
  *(undefined8 *)((long)param_1 + 0x329c) = 0;
  *(undefined8 *)((long)param_1 + 0x32b4) = 0;
  *(undefined8 *)((long)param_1 + 0x32ac) = 0;
  *(undefined8 *)((long)param_1 + 0x32bc) = 0;
  *(undefined1 *)(param_1 + 0x659) = 0;
  param_1[0x65b] = (undefined8 *)0x0;
  param_1[0x65a] = (undefined8 *)0x0;
  param_1[0x65d] = (undefined8 *)0x0;
  param_1[0x65c] = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 0x65e) = 0;
  *(undefined4 *)((long)param_1 + 0x32f4) = 1;
  param_1[0x661] = (undefined8 *)0x0;
  *(undefined8 *)((long)param_1 + 0x330e) = 0;
  param_1[0x660] = (undefined8 *)0x0;
  param_1[0x65f] = (undefined8 *)0x0;
  *(undefined2 *)((long)param_1 + 0x3316) = 1000;
  *(undefined4 *)(param_1 + 0x667) = 0x3f800000;
  param_1[0x664] = (undefined8 *)0x0;
  param_1[0x663] = (undefined8 *)0x3f800000;
  param_1[0x666] = (undefined8 *)0x0;
  param_1[0x665] = (undefined8 *)0x3f800000;
  *(undefined8 *)((long)param_1 + 0x3344) = 0;
  *(undefined8 *)((long)param_1 + 0x333c) = 0;
  *(undefined1 *)(param_1 + 0x66a) = 0;
  *(undefined8 *)((long)param_1 + 0x33b4) = 0;
  *(undefined8 *)((long)param_1 + 0x339c) = 0;
  *(undefined8 *)((long)param_1 + 0x3394) = 0;
  *(undefined8 *)((long)param_1 + 0x33ac) = 0;
  *(undefined8 *)((long)param_1 + 0x33a4) = 0;
  *(undefined8 *)((long)param_1 + 0x337c) = 0;
  *(undefined8 *)((long)param_1 + 0x3374) = 0;
  *(undefined8 *)((long)param_1 + 0x338c) = 0;
  *(undefined8 *)((long)param_1 + 0x3384) = 0;
  *(undefined8 *)((long)param_1 + 0x335c) = 0;
  *(undefined8 *)((long)param_1 + 0x3354) = 0;
  *(undefined8 *)((long)param_1 + 0x336c) = 0;
  *(undefined8 *)((long)param_1 + 0x3364) = 0;
  *(undefined1 *)(param_1 + 0x678) = 0;
  *(undefined1 *)(param_1 + 0x67d) = 0;
  param_1[0x67a] = (undefined8 *)0x0;
  param_1[0x679] = (undefined8 *)0x0;
  param_1[0x67c] = (undefined8 *)0x0;
  param_1[0x67b] = (undefined8 *)0x0;
  *(undefined4 *)((long)param_1 + 0x33ec) = 1;
  param_1[0x67f] = (undefined8 *)0x0;
  param_1[0x67e] = (undefined8 *)0x0;
  *(undefined8 *)((long)param_1 + 0x3406) = 0;
  param_1[0x680] = (undefined8 *)0x0;
  *(undefined2 *)((long)param_1 + 0x340e) = 1000;
  *(undefined4 *)(param_1 + 0x686) = 0x3f800000;
  param_1[0x685] = (undefined8 *)0x0;
  param_1[0x684] = (undefined8 *)0x3f800000;
  param_1[0x683] = (undefined8 *)0x0;
  param_1[0x682] = (undefined8 *)0x3f800000;
  *(undefined8 *)((long)param_1 + 0x343c) = 0;
  *(undefined8 *)((long)param_1 + 0x3434) = 0;
  *(undefined1 *)(param_1 + 0x689) = 0;
  *(undefined8 *)((long)param_1 + 0x3454) = 0;
  *(undefined8 *)((long)param_1 + 0x344c) = 0;
  *(undefined8 *)((long)param_1 + 0x3464) = 0;
  *(undefined8 *)((long)param_1 + 0x345c) = 0;
  *(undefined8 *)((long)param_1 + 0x3474) = 0;
  *(undefined8 *)((long)param_1 + 0x346c) = 0;
  *(undefined8 *)((long)param_1 + 0x3484) = 0;
  *(undefined8 *)((long)param_1 + 0x347c) = 0;
  *(undefined8 *)((long)param_1 + 0x3494) = 0;
  *(undefined8 *)((long)param_1 + 0x348c) = 0;
  *(undefined8 *)((long)param_1 + 0x34a4) = 0;
  *(undefined8 *)((long)param_1 + 0x349c) = 0;
  *(undefined8 *)((long)param_1 + 0x34ac) = 0;
  *(undefined8 *)((long)param_1 + 0x34ed) = 0;
  *(undefined8 *)((long)param_1 + 0x34e5) = 0;
  param_1[0x69a] = (undefined8 *)0x0;
  param_1[0x699] = (undefined8 *)0x0;
  param_1[0x69c] = (undefined8 *)0x0;
  param_1[0x69b] = (undefined8 *)0x0;
  param_1[0x698] = (undefined8 *)0x0;
  param_1[0x697] = (undefined8 *)0x0;
  *(undefined2 *)(param_1 + 0x69f) = 0xffff;
  *(undefined1 *)(param_1 + 0x6a4) = 0;
  param_1[0x6a3] = (undefined8 *)0x0;
  param_1[0x6a2] = (undefined8 *)0x0;
  param_1[0x6a1] = (undefined8 *)0x0;
  param_1[0x6a0] = (undefined8 *)0x0;
  *(undefined2 *)(param_1 + 0x6a5) = 0;
  *(undefined1 *)((long)param_1 + 0x352a) = 0;
  *(undefined8 *)((long)param_1 + 0x3534) = 0x7fc000007fc00000;
  *(undefined8 *)((long)param_1 + 0x352c) = 0x7fc000007fc00000;
  *(undefined8 *)((long)param_1 + 0x3544) = 0x7fc000007fc00000;
  *(undefined8 *)((long)param_1 + 0x353c) = 0x7fc000007fc00000;
  *(undefined4 *)((long)param_1 + 0x354c) = 0x7fa00000;
  *(undefined1 *)(param_1 + 0x6b7) = 0;
  *(undefined1 *)(param_1 + 0x6ad) = 0;
  param_1[0x6ac] = (undefined8 *)0x0;
  param_1[0x6ab] = (undefined8 *)0x0;
  param_1[0x6aa] = (undefined8 *)0x0;
  *(undefined4 *)((long)param_1 + 0x35bc) = 3;
  puVar21 = (undefined8 *)NEON_fmov(0x3f800000,4);
  param_1[0x6b8] = puVar21;
  param_1[0x6be] = (undefined8 *)0x3f800000;
  param_1[0x6bd] = (undefined8 *)0x0;
  param_1[0x6c0] = (undefined8 *)0x3f80000000000000;
  param_1[0x6bf] = (undefined8 *)0x0;
  param_1[0x6ba] = (undefined8 *)0x0;
  param_1[0x6b9] = (undefined8 *)0x3f800000;
  param_1[0x6bc] = (undefined8 *)0x0;
  param_1[0x6bb] = (undefined8 *)0x3f80000000000000;
  param_1[0x6c1] = (undefined8 *)0x0;
  param_1[0x6db] = (undefined8 *)0x0;
  param_1[0x6da] = (undefined8 *)0x0;
  param_1[0x6e3] = (undefined8 *)0x3f80000000000000;
  param_1[0x6e2] = (undefined8 *)0x0;
  param_1[0x6e1] = (undefined8 *)0x3f800000;
  param_1[0x6e0] = (undefined8 *)0x0;
  param_1[0x6df] = (undefined8 *)0x0;
  param_1[0x6de] = (undefined8 *)0x3f80000000000000;
  param_1[0x6dd] = (undefined8 *)0x0;
  param_1[0x6dc] = (undefined8 *)0x3f800000;
  param_1[0x6eb] = (undefined8 *)0x3f80000000000000;
  param_1[0x6ea] = (undefined8 *)0x0;
  param_1[0x6e9] = (undefined8 *)0x3f800000;
  param_1[0x6e8] = (undefined8 *)0x0;
  param_1[0x6e7] = (undefined8 *)0x0;
  param_1[0x6e6] = (undefined8 *)0x3f80000000000000;
  param_1[0x6e5] = (undefined8 *)0x0;
  param_1[0x6e4] = (undefined8 *)0x3f800000;
  param_1[0x6f3] = (undefined8 *)0x3f80000000000000;
  param_1[0x6f2] = (undefined8 *)0x0;
  param_1[0x6f1] = (undefined8 *)0x3f800000;
  param_1[0x6f0] = (undefined8 *)0x0;
  param_1[0x6ef] = (undefined8 *)0x0;
  param_1[0x6ee] = (undefined8 *)0x3f80000000000000;
  param_1[0x6ed] = (undefined8 *)0x0;
  param_1[0x6ec] = (undefined8 *)0x3f800000;
  param_1[0x6fb] = (undefined8 *)0x3f80000000000000;
  param_1[0x6fa] = (undefined8 *)0x0;
  param_1[0x6f9] = (undefined8 *)0x3f800000;
  param_1[0x6f8] = (undefined8 *)0x0;
  param_1[0x6f7] = (undefined8 *)0x0;
  param_1[0x6f6] = (undefined8 *)0x3f80000000000000;
  param_1[0x6f5] = (undefined8 *)0x0;
  param_1[0x6f4] = (undefined8 *)0x3f800000;
  param_1[0x6fc] = (undefined8 *)0x1;
  _memcpy(param_1 + 0x6fd,&UNK_10e4ff180,0x110);
  param_1[0x741] = (undefined8 *)0x0;
  param_1[0x75b] = (undefined8 *)0x0;
  param_1[0x75a] = (undefined8 *)0x0;
  param_1[0x75d] = (undefined8 *)0x0;
  param_1[0x75c] = (undefined8 *)0x3f800000;
  param_1[0x75f] = (undefined8 *)0x0;
  param_1[0x75e] = (undefined8 *)0x3f80000000000000;
  param_1[0x761] = (undefined8 *)0x3f800000;
  param_1[0x760] = (undefined8 *)0x0;
  param_1[0x763] = (undefined8 *)0x3f80000000000000;
  param_1[0x762] = (undefined8 *)0x0;
  param_1[0x765] = (undefined8 *)0x0;
  param_1[0x764] = (undefined8 *)0x3f800000;
  param_1[0x76b] = (undefined8 *)0x3f80000000000000;
  param_1[0x76a] = (undefined8 *)0x0;
  param_1[0x769] = (undefined8 *)0x3f800000;
  param_1[0x768] = (undefined8 *)0x0;
  param_1[0x767] = (undefined8 *)0x0;
  param_1[0x766] = (undefined8 *)0x3f80000000000000;
  param_1[0x773] = (undefined8 *)0x3f80000000000000;
  param_1[0x772] = (undefined8 *)0x0;
  param_1[0x76d] = (undefined8 *)0x0;
  param_1[0x76c] = (undefined8 *)0x3f800000;
  param_1[0x76f] = (undefined8 *)0x0;
  param_1[0x76e] = (undefined8 *)0x3f80000000000000;
  param_1[0x771] = (undefined8 *)0x3f800000;
  param_1[0x770] = (undefined8 *)0x0;
  param_1[0x775] = (undefined8 *)0x0;
  param_1[0x774] = (undefined8 *)0x3f800000;
  param_1[0x777] = (undefined8 *)0x0;
  param_1[0x776] = (undefined8 *)0x3f80000000000000;
  param_1[0x779] = (undefined8 *)0x3f800000;
  param_1[0x778] = (undefined8 *)0x0;
  param_1[0x77c] = (undefined8 *)0x1;
  param_1[0x77b] = (undefined8 *)0x3f80000000000000;
  param_1[0x77a] = (undefined8 *)0x0;
  _memcpy(param_1 + 0x77d,&UNK_10e4ff180,0x110);
  lVar28 = 0;
  param_1[0x7cc] = (undefined8 *)0x0;
  param_1[0x7cb] = (undefined8 *)0x0;
  param_1[0x7ce] = (undefined8 *)0x0;
  param_1[0x7cd] = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 1999) = 0;
  param_1[0x7c7] = (undefined8 *)0x0;
  param_1[0x7c5] = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x7c6) = 0;
  param_1[0x7c1] = (undefined8 *)0x0;
  param_1[0x7c3] = (undefined8 *)0x0;
  param_1[0x7c2] = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 0x7c4) = 0;
  param_1[0x7d1] = (undefined8 *)0x0;
  param_1[2000] = (undefined8 *)0x3f800000;
  param_1[0x7d3] = (undefined8 *)0x0;
  param_1[0x7d2] = (undefined8 *)0x3f80000000000000;
  param_1[0x7d5] = (undefined8 *)0x3f800000;
  param_1[0x7d4] = (undefined8 *)0x0;
  param_1[0x7d7] = (undefined8 *)0x3f80000000000000;
  param_1[0x7d6] = (undefined8 *)0x0;
  param_1[0x7d9] = (undefined8 *)0x0;
  param_1[0x7d8] = (undefined8 *)0x3f800000;
  param_1[0x7db] = (undefined8 *)0x0;
  param_1[0x7da] = (undefined8 *)0x3f80000000000000;
  param_1[0x7dd] = (undefined8 *)0x3f800000;
  param_1[0x7dc] = (undefined8 *)0x0;
  param_1[0x7df] = (undefined8 *)0x3f80000000000000;
  param_1[0x7de] = (undefined8 *)0x0;
  param_1[0x7e1] = (undefined8 *)0x0;
  param_1[0x7e0] = (undefined8 *)0x3f800000;
  param_1[0x7e3] = (undefined8 *)0x0;
  param_1[0x7e2] = (undefined8 *)0x3f80000000000000;
  param_1[0x7e5] = (undefined8 *)0x3f800000;
  param_1[0x7e4] = (undefined8 *)0x0;
  param_1[0x7e7] = (undefined8 *)0x0;
  param_1[0x7e6] = (undefined8 *)0x3f800000;
  param_1[0x7e9] = (undefined8 *)0x0;
  param_1[0x7e8] = (undefined8 *)0x3f80000000000000;
  param_1[0x7eb] = (undefined8 *)0x3f800000;
  param_1[0x7ea] = (undefined8 *)0x0;
  param_1[0x7f3] = (undefined8 *)0x3f80000000000000;
  param_1[0x7f2] = (undefined8 *)0x0;
  param_1[0x7ed] = (undefined8 *)0x0;
  param_1[0x7ec] = (undefined8 *)0x3f800000;
  param_1[0x7ef] = (undefined8 *)0x0;
  param_1[0x7ee] = (undefined8 *)0x3f80000000000000;
  param_1[0x7f1] = (undefined8 *)0x3f800000;
  param_1[0x7f0] = (undefined8 *)0x0;
  param_1[0x804] = (undefined8 *)0x0;
  param_1[0x803] = (undefined8 *)0x0;
  param_1[0x802] = (undefined8 *)0x0;
  param_1[0x801] = (undefined8 *)0x0;
  param_1[0x800] = (undefined8 *)0x0;
  param_1[0x7ff] = (undefined8 *)0x0;
  param_1[0x7fe] = (undefined8 *)0x0;
  param_1[0x7fd] = (undefined8 *)0x0;
  param_1[0x7fc] = (undefined8 *)0x0;
  param_1[0x7fb] = (undefined8 *)0x0;
  param_1[0x7fa] = (undefined8 *)0x0;
  param_1[0x7f9] = (undefined8 *)0x0;
  param_1[0x7f8] = (undefined8 *)0x0;
  param_1[0x7f7] = (undefined8 *)0x0;
  param_1[0x7f6] = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x805) = 0xffffffff;
  param_1[0x7f5] = (undefined8 *)0x0;
  param_1[0x7f4] = (undefined8 *)0x0;
  do {
    puVar21 = (undefined8 *)((long)param_1 + lVar28 + 0x402c);
    puVar21[1] = 0;
    *puVar21 = 0x3f800000;
    puVar21[3] = 0;
    puVar21[2] = 0x3f80000000000000;
    puVar21[5] = 0x3f800000;
    puVar21[4] = 0;
    puVar21[7] = 0x3f80000000000000;
    puVar21[6] = 0;
    lVar28 = lVar28 + 0x40;
  } while (lVar28 != 0x80);
  lVar28 = 0;
  do {
    puVar21 = (undefined8 *)((long)param_1 + lVar28 + 0x40ac);
    puVar21[1] = 0;
    *puVar21 = 0x3f800000;
    puVar21[3] = 0;
    puVar21[2] = 0x3f80000000000000;
    puVar21[5] = 0x3f800000;
    puVar21[4] = 0;
    puVar21[7] = 0x3f80000000000000;
    puVar21[6] = 0;
    lVar28 = lVar28 + 0x40;
  } while (lVar28 != 0x80);
  lVar28 = 0;
  do {
    puVar21 = (undefined8 *)((long)param_1 + lVar28 + 0x412c);
    puVar21[1] = 0;
    *puVar21 = 0x3f800000;
    puVar21[3] = 0;
    puVar21[2] = 0x3f80000000000000;
    puVar21[5] = 0x3f800000;
    puVar21[4] = 0;
    puVar21[7] = 0x3f80000000000000;
    puVar21[6] = 0;
    lVar28 = lVar28 + 0x40;
  } while (lVar28 != 0x80);
  lVar28 = 0;
  do {
    puVar21 = (undefined8 *)((long)param_1 + lVar28 + 0x41ac);
    puVar21[1] = 0;
    *puVar21 = 0x3f800000;
    puVar21[3] = 0;
    puVar21[2] = 0x3f80000000000000;
    puVar21[5] = 0x3f800000;
    puVar21[4] = 0;
    puVar21[7] = 0x3f80000000000000;
    puVar21[6] = 0;
    lVar28 = lVar28 + 0x40;
  } while (lVar28 != 0x80);
  lVar28 = 0;
  do {
    puVar21 = (undefined8 *)((long)param_1 + lVar28 + 0x422c);
    puVar21[1] = 0;
    *puVar21 = 0x3f800000;
    puVar21[3] = 0;
    puVar21[2] = 0x3f80000000000000;
    puVar21[5] = 0x3f800000;
    puVar21[4] = 0;
    lVar28 = lVar28 + 0x30;
  } while (lVar28 != 0x60);
  param_1[0x26f] = (undefined8 *)param_1[0x10b][0x45];
  puVar21 = (undefined8 *)0x68;
  __Znwm();
  *puVar21 = &PTR_DAT_110baa338;
  puVar21[1] = &PTR_FUN_110baa2d8;
  puVar21[3] = puVar21 + 3;
  puVar21[4] = puVar21 + 3;
  puVar21[6] = 0;
  puVar21[5] = 0;
  puVar21[8] = 0;
  puVar21[7] = 0;
  puVar21[9] = 0;
  *(undefined4 *)((long)puVar21 + 0x54) = 0x3f800000;
  *(undefined4 *)(puVar21 + 2) = 100;
  *(undefined1 *)(puVar21 + 0xb) = 0;
  *(undefined1 *)(puVar21 + 0xc) = 0;
  cVar10 = (char)param_1 + 'h';
  FUN_10a197580();
  FUN_10a174da0();
  *(char *)((long)param_1 + 0x1362) = cVar10;
  puVar21 = (undefined8 *)0x1b8;
  __Znwm();
  puVar21[0x36] = 0;
  puVar21[0x33] = 0;
  puVar21[0x32] = 0;
  puVar21[0x35] = 0;
  puVar21[0x34] = 0;
  puVar21[0x2f] = 0;
  puVar21[0x2e] = 0;
  puVar21[0x31] = 0;
  puVar21[0x30] = 0;
  puVar21[0x2b] = 0;
  puVar21[0x2a] = 0;
  puVar21[0x2d] = 0;
  puVar21[0x2c] = 0;
  puVar21[0x27] = 0;
  puVar21[0x26] = 0;
  puVar21[0x29] = 0;
  puVar21[0x28] = 0;
  puVar21[0x23] = 0;
  puVar21[0x22] = 0;
  puVar21[0x25] = 0;
  puVar21[0x24] = 0;
  puVar21[0x1f] = 0;
  puVar21[0x1e] = 0;
  puVar21[0x21] = 0;
  puVar21[0x20] = 0;
  puVar21[0x1b] = 0;
  puVar21[0x1a] = 0;
  puVar21[0x1d] = 0;
  puVar21[0x1c] = 0;
  puVar21[0x17] = 0;
  puVar21[0x16] = 0;
  puVar21[0x19] = 0;
  puVar21[0x18] = 0;
  puVar21[0x13] = 0;
  puVar21[0x12] = 0;
  puVar21[0x15] = 0;
  puVar21[0x14] = 0;
  puVar21[0xf] = 0;
  puVar21[0xe] = 0;
  puVar21[0x11] = 0;
  puVar21[0x10] = 0;
  puVar21[0xb] = 0;
  puVar21[10] = 0;
  puVar21[0xd] = 0;
  puVar21[0xc] = 0;
  puVar21[7] = 0;
  puVar21[6] = 0;
  puVar21[9] = 0;
  puVar21[8] = 0;
  puVar21[3] = 0;
  puVar21[2] = 0;
  puVar21[5] = 0;
  puVar21[4] = 0;
  puVar21[1] = 0;
  *puVar21 = 0;
  puVar13 = (undefined8 *)0x32b8;
  __Znwm();
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar27 = puVar13 + 3;
  *puVar13 = &PTR_FUN_110baa380;
  FUN_10ad60874();
  puVar21[2] = puVar27;
  puVar21[3] = puVar13;
  *(undefined2 *)(puVar21 + 8) = 0;
  puVar21[0xc] = 0;
  *(undefined1 *)(puVar21 + 0xd) = 0;
  *(undefined2 *)(puVar21 + 0xe) = 0;
  puVar21[0x12] = 0;
  *(undefined1 *)(puVar21 + 0x13) = 0;
  *(undefined2 *)(puVar21 + 0x14) = 0;
  puVar21[0x16] = 0;
  *(undefined1 *)(puVar21 + 0x17) = 0;
  *(undefined2 *)(puVar21 + 0x18) = 0;
  puVar21[0x1c] = 0;
  *(undefined1 *)(puVar21 + 0x1d) = 0;
  *(undefined2 *)(puVar21 + 0x1e) = 0;
  puVar21[0x22] = 0;
  *(undefined1 *)(puVar21 + 0x23) = 0;
  *(undefined2 *)(puVar21 + 0x24) = 0;
  puVar21[0x26] = 0;
  *(undefined1 *)(puVar21 + 0x27) = 0;
  puVar21[4] = 0;
  puVar21[5] = 0;
  *(undefined4 *)(puVar21 + 7) = 0;
  puVar21[6] = 0;
  puVar21[0x29] = 0;
  puVar21[0x28] = 0;
  puVar21[0x2b] = 0;
  puVar21[0x2a] = 0;
  puVar21[0x2d] = 0;
  puVar21[0x2c] = 0;
  puVar21[0x2f] = 0;
  puVar21[0x2e] = 0;
  puVar21[0x31] = 0;
  puVar21[0x30] = 0;
  puVar21[0x33] = 0;
  puVar21[0x32] = 0;
  puVar21[0x35] = 0;
  puVar21[0x34] = 0;
  puVar21[0x36] = 0;
  ppuVar14 = param_1 + 0x109;
  FUN_10a1977f4(ppuVar14,puVar21);
  func_0x00010a174e3c();
  uVar15 = 0x40;
  __Znwm(0x40);
  FUN_10aba51b8();
  FUN_10a197558(param_1 + 0x26a,uVar15);
  FUN_10abb5068(param_1,ppuVar14);
  func_0x00010ae02ecc(0,ppuVar14);
  func_0x00010ae02f14();
  ppuVar12 = &PTR_PTR_1133004a0;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  func_0x00010ae02f1c();
  FUN_10ae07cd4(ppuVar12,&PTR_PTR_1133004a0);
  puVar21 = param_1[0x1ac];
  FUN_10a19781c(&UNK_10e49a5b8,puVar21 + 0x1b,(long)puVar21 + 0xdc,(long)puVar21 + 0xe4);
  ppuVar12 = &PTR_PTR_1133004d8;
  FUN_10ae079a0();
  func_0x00010a197868();
  FUN_10ae07cd4(ppuVar12,&PTR_PTR_1133004d8);
  if (*(char *)(puVar21 + 0xd) == '\x01') {
    *(byte *)((long)param_1 + 0xd89) = *(byte *)((long)param_1 + 0xd89) | 1;
  }
  if (1 < *(uint *)(puVar21 + 0x11)) {
    *(byte *)((long)param_1 + 0xd89) = *(byte *)((long)param_1 + 0xd89) | 2;
  }
  if (*(char *)((long)puVar21 + 0x4e) == '\x01') {
    plVar16 = *ppuVar18;
    (**(code **)(*plVar16 + 0x60))(plVar16,8);
    FUN_10a174ef8(ppuVar1,plVar16);
    (**(code **)(**ppuVar1 + 0x18))(*ppuVar1,8,0);
  }
  plVar16 = *ppuVar18;
  (**(code **)(*plVar16 + 0x60))(plVar16,4);
  FUN_10a174ef8(ppuVar2,plVar16);
  (**(code **)(**ppuVar2 + 0x18))(*ppuVar2,0x10,0);
  puVar21 = param_1[0x1e1];
  if ((ulong)(((long)param_1[0x1e3] - (long)puVar21 >> 3) * 0x7e5342831c3b55a7) < 0x40) {
    ppuStack_a0 = param_1 + 0x1e1;
    puVar27 = param_1[0x1e2];
    puVar13 = (undefined8 *)0x42e00;
    __Znwm();
    FUN_10abd79c4(puVar21,puVar27,puVar13);
    ppuStack_c0 = (undefined8 **)param_1[0x1e1];
    param_1[0x1e1] = puVar13;
    param_1[0x1e2] = (undefined8 *)((long)puVar13 + ((long)puVar27 - (long)puVar21));
    puStack_a8 = param_1[0x1e3];
    param_1[0x1e3] = puVar13 + 0x85c0;
    ppuStack_b8 = ppuStack_c0;
    ppuStack_b0 = ppuStack_c0;
    FUN_10abd7af4(&ppuStack_c0);
  }
  puVar21 = param_1[0x1e8];
  if ((ulong)(((long)param_1[0x1ea] - (long)puVar21 >> 3) * -0x5555555555555555) < 0x400) {
    puVar27 = param_1[0x1e9];
    puVar13 = (undefined8 *)0x6000;
    __Znwm();
    _memcpy();
    param_1[0x1e8] = puVar13;
    param_1[0x1e9] = (undefined8 *)((long)puVar13 + ((long)puVar27 - (long)puVar21));
    param_1[0x1ea] = puVar13 + 0xc00;
    if (puVar21 != (undefined8 *)0x0) {
      __ZdlPv(puVar21);
    }
  }
  piVar17 = (int *)0x1138350e8;
  FUN_10a1d5d54();
  *(bool *)((long)param_1 + 0x13a9) = iRam00000001138350e0 != 0 || *piVar17 != 0;
  FUN_10ab451f4(&ppuStack_c0,0,&UNK_10f6945b7,0x1c,&UNK_10f6945d4,0x18,&UNK_10f6945ed,0x11,1);
  func_0x00010a015c50(ppuVar11,&ppuStack_c0);
  plVar16 = (long *)(*ppuVar11)[0x45];
  if (plVar16 == (long *)(*ppuVar11)[0x46]) {
    lVar28 = 0;
  }
  else {
    lVar28 = *plVar16;
  }
  func_0x00010a332748(lVar28 + 0x219,0);
  func_0x00010a332700(lVar28 + 0x21a,0);
  func_0x000107c2b054(&uStack_d8,&UNK_10f6945ff);
  if (*(char *)(lVar28 + 0x1b7) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar28 + 0x1a0));
  }
  *(undefined8 *)(lVar28 + 0x1a8) = uStack_d0;
  *(ulong *)(lVar28 + 0x1a0) = CONCAT71(uStack_d7,uStack_d8);
  *(ulong *)(lVar28 + 0x1b0) = CONCAT17(uStack_c1,uStack_c8);
  uStack_c1 = 0;
  uStack_d8 = 0;
  ppuVar18 = param_1;
  (*(code *)(*param_1)[0x1b])();
  *(int *)(param_1 + 0x1b4) = (int)ppuVar18;
  uVar23 = 0x78;
  if (3 < *(int *)((long)param_1[0x1ac] + 0x734) - 1U) {
    uVar23 = 0xc;
  }
  *(undefined4 *)((long)param_1 + 0xda4) = uVar23;
  FUN_10a173c40(param_1 + 0x1c9,param_2);
  uVar22 = *(int *)((long)param_1[0x1ac] + 0x734) - 2;
  if ((uVar22 < 7) && ((99U >> (ulong)(uVar22 & 0x1f) & 1) != 0)) {
    cVar10 = '\x01';
  }
  else {
    pcVar19 = (char *)0x113834838;
    FUN_10a08f69c();
    cVar10 = '\x02' - *pcVar19;
  }
  *(char *)((long)param_1 + 0x1362) = cVar10;
  FUN_10abb5068(param_1,1);
  FUN_10abb5188(auStack_f8,param_1[0x10b],1);
  func_0x00010a169c14(param_1 + 0x23c,auStack_f8);
  plVar16 = plStack_f0;
  param_1[0x23f] = puStack_e0;
  param_1[0x23e] = puStack_e8;
  if (plStack_f0 != (long *)0x0) {
    plVar3 = plStack_f0 + 1;
    do {
      lVar28 = *plVar3;
      cVar10 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar28 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  FUN_10abb5188(auStack_f8,param_1[0x10b],0);
  func_0x00010a169c14(param_1 + 0x240,auStack_f8);
  plVar16 = plStack_f0;
  param_1[0x243] = puStack_e0;
  param_1[0x242] = puStack_e8;
  if (plStack_f0 != (long *)0x0) {
    plVar3 = plStack_f0 + 1;
    do {
      lVar28 = *plVar3;
      cVar10 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar28 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  FUN_10abb5188(auStack_f8,param_1[0x10b],2);
  func_0x00010a169c14(param_1 + 0x248,auStack_f8);
  plVar16 = plStack_f0;
  param_1[0x24b] = puStack_e0;
  param_1[0x24a] = puStack_e8;
  if (plStack_f0 != (long *)0x0) {
    plVar3 = plStack_f0 + 1;
    do {
      lVar28 = *plVar3;
      cVar10 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar28 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  FUN_10abb5188(auStack_f8,param_1[0x10b],3);
  func_0x00010a169c14(param_1 + 0x24c,auStack_f8);
  plVar16 = plStack_f0;
  param_1[0x24f] = puStack_e0;
  param_1[0x24e] = puStack_e8;
  if (plStack_f0 != (long *)0x0) {
    plVar3 = plStack_f0 + 1;
    do {
      lVar28 = *plVar3;
      cVar10 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar28 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  FUN_10abb5188(auStack_f8,param_1[0x10b],6);
  func_0x00010a169c14(param_1 + 0x244,auStack_f8);
  param_1[0x247] = puStack_e0;
  param_1[0x246] = puStack_e8;
  if (plStack_f0 != (long *)0x0) {
    plVar16 = plStack_f0 + 1;
    do {
      lVar28 = *plVar16;
      cVar10 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = lVar28 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f0);
    }
  }
  ppuVar18 = param_1;
  FUN_10abb52e0(param_1,&UNK_10e4ac858);
  param_1[0x260] = ppuVar18;
  ppuVar18 = param_1;
  FUN_10abb52e0(param_1,&UNK_10e4ac858);
  param_1[0x261] = ppuVar18;
  ppuVar18 = param_1;
  FUN_10abb52e0(param_1,&UNK_10e4ac8a8);
  param_1[0x262] = ppuVar18;
  ppuVar18 = param_1;
  FUN_10abb52e0(param_1,&UNK_10e4ac8d0);
  param_1[0x263] = ppuVar18;
  ppuVar18 = param_1;
  FUN_10abb52e0(param_1,&UNK_10e4ac8f8);
  param_1[0x264] = ppuVar18;
  ppuVar18 = param_1;
  FUN_10abb52e0(param_1,&UNK_10e4ac920);
  param_1[0x265] = ppuVar18;
  ppuVar18 = param_1;
  FUN_10abb52e0(param_1,&UNK_10e4ac948);
  param_1[0x266] = ppuVar18;
  ppuVar18 = param_1;
  FUN_10abb52e0(param_1,&UNK_10e4ac970);
  param_1[0x267] = ppuVar18;
  ppuVar18 = param_1;
  FUN_10abb52e0(param_1,&UNK_10e4ac998);
  param_1[0x268] = ppuVar18;
  FUN_10a044790(&ppuStack_b0);
  ppuVar18 = &puStack_a8;
  (*(code *)*puStack_a8)();
  ppuVar14 = ppuStack_b8;
  if (ppuStack_b8 != (undefined8 **)0x0) {
    ppuVar4 = ppuStack_b8 + 1;
    do {
      puVar21 = *ppuVar4;
      cVar10 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
      if (bVar7) {
        *ppuVar4 = (undefined8 *)((long)puVar21 + -1);
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (puVar21 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_b8)[2])(ppuStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar18 = ppuVar14;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010a015cb4(&ppuStack_c0);
  func_0x00010a174f6c(param_1 + 0x6a5);
  FUN_10abb55e0(param_1 + 0x397);
  func_0x00010a045fb4(param_1 + 0x392);
  FUN_10abb565c(param_1 + 0x2e4);
  FUN_10a18b954(param_1 + 700);
  FUN_10abd717c(param_1 + 0x27e);
  if (param_1[0x27b] != (undefined8 *)0x0) {
    param_1[0x27c] = param_1[0x27b];
    __ZdlPv();
  }
  FUN_10abded3c(param_1 + 0x276);
  func_0x000107c2826c(param_1 + 0x270);
  FUN_10a197580(param_1 + 0x26d,0);
  iVar20 = 0;
  FUN_10a197558(param_1 + 0x26a);
  FUN_10abdecc8(extraout_x14);
  FUN_10abb56cc(param_1 + 0x251);
  FUN_10a09d22c(param_1 + 0x24c);
  FUN_10a09d22c(param_1 + 0x248);
  FUN_10a09d22c(param_1 + 0x244);
  FUN_10a09d22c(param_1 + 0x240);
  FUN_10a09d22c(param_1 + 0x23c);
  if ((undefined8 *)*extraout_x13 != (undefined8 *)0x0) {
    param_1[0x23a] = (undefined8 *)*extraout_x13;
    __ZdlPv();
  }
  func_0x00010abcb2a0(extraout_x12);
  func_0x00010abcb2a0(extraout_x11);
  FUN_10ab7a374(param_1 + 0x21f);
  func_0x00010a174fe8(param_1 + 0x217);
  func_0x00010abb570c(param_1 + 0x1d9);
  func_0x00010abb577c(param_1 + 0x1c9);
  func_0x00010a0616d0(ppuVar2);
  func_0x00010a0616d0(ppuVar1);
  func_0x00010a0616d0(param_1 + 0x1c3);
  FUN_10a1974e4(param_1 + 0x1be);
  if (param_1[0x1bb] != (undefined8 *)0x0) {
    param_1[0x1bc] = param_1[0x1bb];
    __ZdlPv();
  }
  if (param_1[0x1b8] != (undefined8 *)0x0) {
    param_1[0x1b9] = param_1[0x1b8];
    __ZdlPv();
  }
  if (param_1[0x1b5] != (undefined8 *)0x0) {
    param_1[0x1b6] = param_1[0x1b5];
    __ZdlPv();
  }
  FUN_10a0617bc(ppuVar11);
  FUN_10a09a130(param_1 + 0x1af);
  func_0x00010a09dbbc(param_1 + 0x1ac);
  FUN_10abe9780(param_1);
  __Unwind_Resume();
  uVar24 = 0;
  uVar6 = (undefined1)iVar20;
  if (iVar20 == 0) {
    uVar26 = 0;
    *(undefined4 *)((long)ppuVar18 + 0x135c) = 1;
    *(undefined1 *)(ppuVar18 + 0x26c) = 0;
    *(undefined1 *)((long)ppuVar18 + 0x1361) = 0;
  }
  else {
    bVar5 = *(byte *)((long)ppuVar18 + 0x1362);
    if (bVar5 < 2) {
      if (bVar5 == 0) {
        uVar24 = 0;
        *(undefined4 *)((long)ppuVar18 + 0x135c) = 3;
        uVar26 = 1;
        *(undefined1 *)((long)ppuVar18 + 0x1361) = 1;
        *(undefined1 *)(ppuVar18 + 0x26c) = uVar6;
      }
      else {
        uVar26 = uVar24;
        if (bVar5 == 1) {
          uVar24 = 0;
          *(undefined4 *)((long)ppuVar18 + 0x135c) = 0x10;
          *(undefined1 *)((long)ppuVar18 + 0x1361) = 0;
          *(undefined1 *)(ppuVar18 + 0x26c) = uVar6;
          uVar26 = 1;
        }
      }
    }
    else if (bVar5 == 2) {
      uVar24 = 0;
      *(undefined4 *)((long)ppuVar18 + 0x135c) = 0x10;
      *(undefined1 *)((long)ppuVar18 + 0x1361) = 0;
      *(undefined1 *)(ppuVar18 + 0x26c) = uVar6;
      uVar26 = 5;
    }
    else if (bVar5 == 3) {
      *(undefined4 *)((long)ppuVar18 + 0x135c) = 0x10;
      *(undefined2 *)(ppuVar18 + 0x26c) = 0;
      uVar24 = 1;
      uVar26 = 3;
    }
    else {
      uVar26 = 0;
      if (bVar5 == 4) {
        uVar24 = 0;
        *(undefined4 *)((long)ppuVar18 + 0x135c) = 0x10;
        *(undefined1 *)((long)ppuVar18 + 0x1361) = 0;
        *(undefined1 *)(ppuVar18 + 0x26c) = uVar6;
        uVar26 = 9;
      }
    }
  }
  if (*(uint *)((long)ppuVar18[0x1ac] + 0x734) < 9 &&
      (1 << (ulong)(*(uint *)((long)ppuVar18[0x1ac] + 0x734) & 0x1f) & 0x18cU) != 0) {
    *(undefined1 *)((long)ppuVar18 + 0x1363) = 0;
  }
  puVar21 = ppuVar18[0x26a];
  *(undefined1 *)(puVar21 + 7) = uVar26;
  *(undefined1 *)((long)puVar21 + 0x39) = *(undefined1 *)(ppuVar18 + 0x26c);
  *(undefined1 *)((long)puVar21 + 0x3a) = uVar24;
  return ppuVar18;
}



/* Entry: 10abb5068; end: 10abb5187;  */

void FUN_10abb5068(long param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  
  uVar4 = 0;
  uVar3 = (undefined1)param_2;
  if (param_2 == 0) {
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x135c) = 1;
    *(undefined1 *)(param_1 + 0x1360) = 0;
    *(undefined1 *)(param_1 + 0x1361) = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x1362);
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        uVar4 = 0;
        *(undefined4 *)(param_1 + 0x135c) = 3;
        uVar5 = 1;
        *(undefined1 *)(param_1 + 0x1361) = 1;
        *(undefined1 *)(param_1 + 0x1360) = uVar3;
      }
      else {
        uVar5 = uVar4;
        if (bVar2 == 1) {
          uVar4 = 0;
          *(undefined4 *)(param_1 + 0x135c) = 0x10;
          *(undefined1 *)(param_1 + 0x1361) = 0;
          *(undefined1 *)(param_1 + 0x1360) = uVar3;
          uVar5 = 1;
        }
      }
    }
    else if (bVar2 == 2) {
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x135c) = 0x10;
      *(undefined1 *)(param_1 + 0x1361) = 0;
      *(undefined1 *)(param_1 + 0x1360) = uVar3;
      uVar5 = 5;
    }
    else if (bVar2 == 3) {
      *(undefined4 *)(param_1 + 0x135c) = 0x10;
      *(undefined2 *)(param_1 + 0x1360) = 0;
      uVar4 = 1;
      uVar5 = 3;
    }
    else {
      uVar5 = 0;
      if (bVar2 == 4) {
        uVar4 = 0;
        *(undefined4 *)(param_1 + 0x135c) = 0x10;
        *(undefined1 *)(param_1 + 0x1361) = 0;
        *(undefined1 *)(param_1 + 0x1360) = uVar3;
        uVar5 = 9;
      }
    }
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0xd60) + 0x734);
  if (uVar1 < 9 && (1 << (ulong)(uVar1 & 0x1f) & 0x18cU) != 0) {
    *(undefined1 *)(param_1 + 0x1363) = 0;
  }
  lVar6 = *(long *)(param_1 + 0x1350);
  *(undefined1 *)(lVar6 + 0x38) = uVar5;
  *(undefined1 *)(lVar6 + 0x39) = *(undefined1 *)(param_1 + 0x1360);
  *(undefined1 *)(lVar6 + 0x3a) = uVar4;
  return;
}



/* Entry: 10abb5188; end: 10abb52df;  */

void FUN_10abb5188(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  param_2 = param_2 + (param_3 & 0xffffffff) * 0x10;
  plVar8 = *(long **)(param_2 + 0xc0);
  plVar7 = *(long **)(param_2 + 0xb8);
  if (plVar8 != (long *)0x0) {
    plVar4 = plVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (plVar7 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = -1;
    param_1[3] = -1;
    goto joined_r0x00010abb5274;
  }
  plVar4 = plVar7;
  ___dynamic_cast(plVar7,&PTR_DAT_110ba0e18,&PTR_DAT_110c71a18,0);
  if (plVar4 == (long *)0x0) {
LAB_10abb5228:
    plVar4 = plVar7;
    (**(code **)(*plVar7 + 0xc0))();
  }
  else {
    lVar5 = 0;
    FUN_10a2421c8();
    plVar6 = *(long **)(lVar5 + 0x228);
    (**(code **)(*plVar6 + 0x50))();
    if ((plVar6 == (long *)0x0) || (*(int *)((long)plVar6 + 0x734) != 2)) goto LAB_10abb5228;
    FUN_10ad6ff4c();
  }
  lVar5 = *plVar4;
  lVar1 = plVar4[1];
  if (lVar1 != 0) {
    plVar4 = (long *)(lVar1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar5;
  param_1[1] = lVar1;
  lVar5 = plVar7[4];
  param_1[3] = plVar7[5];
  param_1[2] = lVar5;
joined_r0x00010abb5274:
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar8 + 1;
    do {
      lVar5 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
      return;
    }
  }
  return;
}



/* Entry: 10abb52e0; end: 10abb55df;  */

undefined * FUN_10abb52e0(long param_1,byte *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  int iStack_38;
  uint uStack_34;
  
  uStack_68 = 0;
  uStack_60 = (long *)0x0;
  uStack_50 = uStack_50 & 0xffffff00;
  uStack_58 = 0;
  uStack_4c = 1;
  uStack_48 = uStack_48 & 0xffffff00;
  uStack_44 = 7;
  uStack_40 = 0x447a000000000000;
  iStack_38 = 0;
  uStack_34 = uStack_34 & 0xffffff00;
  iVar2 = *(int *)(param_2 + 4);
  uVar10 = (uint)*param_2;
  if (iVar2 != 0) {
    if (iVar2 == 2) {
      uStack_68 = 0x100000001;
      uVar10 = (uint)*param_2 << 1;
    }
    else {
      if (iVar2 != 1) goto LAB_10abb55b8;
      uStack_68 = 0x100000001;
    }
  }
  uStack_60 = (long *)(ulong)uVar10;
  uVar10 = *(uint *)(param_2 + 8);
  if (uVar10 < 3) {
    bVar4 = false;
LAB_10abb5378:
    uStack_60 = (long *)CONCAT44(uVar10,(undefined4)uStack_60);
    uVar10 = *(uint *)(param_2 + 0xc);
    if (uVar10 < 3) {
      unaff_x22 = 0;
    }
    else {
      if (uVar10 != 3) goto LAB_10abb55ac;
      if (*(char *)(*(long *)(param_1 + 0xd60) + 0x32) == '\x01') {
        pbVar6 = param_2 + 0x14;
        FUN_10a1750f4();
        if (((ulong)pbVar6 & 1) != 0) {
          uVar10 = 3;
          unaff_x22 = 1;
          goto LAB_10abb538c;
        }
      }
      unaff_x22 = 0;
      uVar10 = 0;
    }
LAB_10abb538c:
    uStack_58 = CONCAT44(uStack_58._4_4_,uVar10);
    uVar10 = *(uint *)(param_2 + 0x10);
    if (uVar10 < 3) {
      bVar9 = false;
LAB_10abb53a0:
      uStack_58 = CONCAT44(uVar10,(undefined4)uStack_58);
      uStack_40 = CONCAT44((float)(int)*(short *)(param_2 + 0x26),
                           (float)(int)*(short *)(param_2 + 0x24));
      if ((bVar4 || (int)unaff_x22 != 0) || (bVar9)) {
        iVar2 = (int)param_2 + 0x14;
        FUN_10a175ec0();
        iStack_38 = iVar2;
      }
      uStack_c0 = 0;
      plStack_b8 = (long *)0x0;
      uStack_98 = CONCAT44(uStack_4c,uStack_50);
      plStack_a8 = uStack_60;
      uStack_b0 = uStack_68;
      uStack_a0 = uStack_58;
      uStack_90 = CONCAT44(uStack_44,uStack_48);
      uStack_88 = uStack_40;
      uStack_80 = CONCAT44(uStack_34,iStack_38);
      uStack_78 = 0;
      plStack_70 = (long *)0x0;
      lVar12 = param_1 + 0x12d8;
      puVar8 = &uStack_b0;
      FUN_10abdefb8(lVar12,puVar8,&uStack_b0);
      plVar5 = plStack_70;
      if (plStack_70 != (long *)0x0) {
        plVar1 = plStack_70 + 1;
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
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar5 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar1 = plStack_b8 + 1;
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
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      if (((ulong)puVar8 & 1) != 0) {
        (**(code **)(**(long **)(param_1 + 0xd60) + 0x50))
                  (&uStack_b0,*(long **)(param_1 + 0xd60),&uStack_68);
        FUN_10a1761a8(lVar12 + 0x48,&uStack_b0);
        plVar5 = plStack_a8;
        if (plStack_a8 != (long *)0x0) {
          plVar1 = plStack_a8 + 1;
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
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
      }
      return *(undefined **)(lVar12 + 0x48);
    }
    if (uVar10 == 3) {
      if (*(char *)(*(long *)(param_1 + 0xd60) + 0x32) == '\x01') {
        pbVar6 = param_2 + 0x14;
        FUN_10a1750f4();
        if (((ulong)pbVar6 & 1) != 0) {
          uVar10 = 3;
          bVar9 = true;
          goto LAB_10abb53a0;
        }
      }
      bVar9 = false;
      uVar10 = 0;
      goto LAB_10abb53a0;
    }
  }
  else if (uVar10 == 3) {
    if (*(char *)(*(long *)(param_1 + 0xd60) + 0x32) == '\x01') {
      pbVar6 = param_2 + 0x14;
      FUN_10a1750f4();
      if (((ulong)pbVar6 & 1) != 0) {
        uVar10 = 3;
        bVar4 = true;
        goto LAB_10abb5378;
      }
    }
    bVar4 = false;
    uVar10 = 0;
    goto LAB_10abb5378;
  }
LAB_10abb55ac:
  FUN_10a0ee06c(&UNK_10f699980);
LAB_10abb55b8:
  puVar7 = &UNK_10f699966;
  FUN_10a0ee06c();
  FUN_10a09d364(unaff_x22 + 0x38);
  FUN_10a09d364(&uStack_c0);
  __Unwind_Resume(puVar7);
  func_0x00010a045fb4(puVar7 + 0x1850);
  func_0x00010a0523dc(puVar7 + 0x1720);
  func_0x00010a0523dc(puVar7 + 0x1628);
  func_0x00010a0523dc(puVar7 + 0x1530);
  lVar12 = 0x1438;
  do {
    func_0x00010a0523dc(puVar7 + lVar12);
    lVar12 = lVar12 + -0xf8;
  } while (lVar12 != 0xc78);
  do {
    func_0x00010a0523dc(puVar7 + lVar12);
    lVar12 = lVar12 + -0xf8;
  } while (lVar12 != 0x4b8);
  return puVar7;
}


