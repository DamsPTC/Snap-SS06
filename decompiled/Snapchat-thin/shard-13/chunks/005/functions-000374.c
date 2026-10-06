/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a834254; end: 10a834267;  */

void FUN_10a834254(void)

{
  func_0x00010a83bebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a834268; end: 10a83426f;  */

undefined8 * FUN_10a834268(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar4 = param_1 + -2;
  *puVar4 = &PTR_DAT_110c207e8;
  *param_1 = &PTR_FUN_110c208b8;
  param_1[3] = &PTR_FUN_110c208e8;
  param_1[0x33] = &PTR_FUN_110c20970;
  if (*(char *)((long)param_1 + 0x197) < '\0') {
    __ZdlPv(param_1[0x30]);
  }
  if (*(char *)((long)param_1 + 0x177) < '\0') {
    __ZdlPv(param_1[0x2c]);
  }
  if ((*(char *)(param_1 + 0x2b) == '\x01') &&
     (plVar5 = (long *)param_1[0x2a], plVar5 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if ((*(char *)(param_1 + 0x29) == '\x01') &&
     (plVar5 = (long *)param_1[0x28], plVar5 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if ((*(char *)(param_1 + 0x27) == '\x01') &&
     (plVar5 = (long *)param_1[0x26], plVar5 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x00010a05248c(param_1 + 0x24);
  FUN_10a004cfc(param_1 + 0x22);
  FUN_10a004cfc(param_1 + 0x20);
  FUN_10a0772f0(param_1 + 0x1e);
  FUN_10a0cfe2c(param_1 + 0x1b);
  *puVar4 = &PTR_FUN_110c20f70;
  *param_1 = &PTR_FUN_110c68030;
  param_1[3] = &PTR_DAT_110c68060;
  param_1[0x33] = &PTR_FUN_110c21070;
  FUN_10a0cfe2c(param_1 + 0x19);
  func_0x00010a1980a8(param_1 + 0x16);
  *puVar4 = &PTR_FUN_110c21208;
  *param_1 = &PTR_FUN_110bb3b30;
  param_1[3] = &PTR_DAT_110bb3b60;
  param_1[0x33] = &PTR_DAT_110c212d8;
  func_0x00010a1f9d14(param_1 + 0x11);
  *puVar4 = &PTR_DAT_110c60a00;
  *param_1 = &PTR_DAT_110c60a88;
  param_1[3] = &PTR_DAT_110c60ab8;
  ppuVar8 = (undefined **)(param_1 + 9);
  puVar10 = (undefined8 *)param_1[10];
  for (puVar9 = (undefined8 *)*ppuVar8; puVar9 != puVar10; puVar9 = puVar9 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar9,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar8);
  plVar5 = param_1 + 8;
  if ((*plVar5 != 0) && (*(undefined ***)(*(long *)(*plVar5 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 1);
  if ((param_1[0x10] != 0) && (lVar6 = *(long *)(param_1[0x10] + 0x828), lVar6 != 0)) {
    FUN_10a1dfb2c(lVar6,puVar4);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  appuStack_180[0] = ppuVar8;
  FUN_10ac78cf4(appuStack_180);
  lVar6 = *plVar5;
  *plVar5 = 0;
  if (lVar6 != 0) {
    FUN_10ac7d690(plVar5);
  }
  if (param_1[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[3] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 4);
  *param_1 = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 1);
  return puVar4;
}



/* Entry: 10a834270; end: 10a834287;  */

void FUN_10a834270(long param_1)

{
  func_0x00010a83bebc(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a834288; end: 10a83428f;  */

undefined8 * FUN_10a834288(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar4 = param_1 + -5;
  *puVar4 = &PTR_DAT_110c207e8;
  param_1[-3] = &PTR_FUN_110c208b8;
  *param_1 = &PTR_FUN_110c208e8;
  param_1[0x30] = &PTR_FUN_110c20970;
  if (*(char *)((long)param_1 + 0x17f) < '\0') {
    __ZdlPv(param_1[0x2d]);
  }
  if (*(char *)((long)param_1 + 0x15f) < '\0') {
    __ZdlPv(param_1[0x29]);
  }
  if ((*(char *)(param_1 + 0x28) == '\x01') &&
     (plVar5 = (long *)param_1[0x27], plVar5 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if ((*(char *)(param_1 + 0x26) == '\x01') &&
     (plVar5 = (long *)param_1[0x25], plVar5 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if ((*(char *)(param_1 + 0x24) == '\x01') &&
     (plVar5 = (long *)param_1[0x23], plVar5 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x00010a05248c(param_1 + 0x21);
  FUN_10a004cfc(param_1 + 0x1f);
  FUN_10a004cfc(param_1 + 0x1d);
  FUN_10a0772f0(param_1 + 0x1b);
  FUN_10a0cfe2c(param_1 + 0x18);
  *puVar4 = &PTR_FUN_110c20f70;
  param_1[-3] = &PTR_FUN_110c68030;
  *param_1 = &PTR_DAT_110c68060;
  param_1[0x30] = &PTR_FUN_110c21070;
  FUN_10a0cfe2c(param_1 + 0x16);
  func_0x00010a1980a8(param_1 + 0x13);
  *puVar4 = &PTR_FUN_110c21208;
  param_1[-3] = &PTR_FUN_110bb3b30;
  *param_1 = &PTR_DAT_110bb3b60;
  param_1[0x30] = &PTR_DAT_110c212d8;
  func_0x00010a1f9d14(param_1 + 0xe);
  *puVar4 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar8 = (undefined **)(param_1 + 6);
  puVar10 = (undefined8 *)param_1[7];
  for (puVar9 = (undefined8 *)*ppuVar8; puVar9 != puVar10; puVar9 = puVar9 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar9,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar8);
  plVar5 = param_1 + 5;
  if ((*plVar5 != 0) && (*(undefined ***)(*(long *)(*plVar5 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar6 = *(long *)(param_1[0xd] + 0x828), lVar6 != 0)) {
    FUN_10a1dfb2c(lVar6,puVar4);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar8;
  FUN_10ac78cf4(appuStack_180);
  lVar6 = *plVar5;
  *plVar5 = 0;
  if (lVar6 != 0) {
    FUN_10ac7d690(plVar5);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar4;
}



/* Entry: 10a834290; end: 10a8342a7;  */

void FUN_10a834290(long param_1)

{
  func_0x00010a83bebc(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8342a8; end: 10a8342b7;  */

undefined8 * FUN_10a8342a8(long *param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar2 = &PTR_DAT_110c207e8;
  puVar2[2] = &PTR_FUN_110c208b8;
  puVar2[5] = &PTR_FUN_110c208e8;
  puVar2[0x35] = &PTR_FUN_110c20970;
  if (*(char *)((long)puVar2 + 0x1a7) < '\0') {
    __ZdlPv(puVar2[0x32]);
  }
  if (*(char *)((long)puVar2 + 0x187) < '\0') {
    __ZdlPv(puVar2[0x2e]);
  }
  if ((*(char *)(puVar2 + 0x2d) == '\x01') && (plVar5 = (long *)puVar2[0x2c], plVar5 != (long *)0x0)
     ) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if ((*(char *)(puVar2 + 0x2b) == '\x01') && (plVar5 = (long *)puVar2[0x2a], plVar5 != (long *)0x0)
     ) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  if ((*(char *)(puVar2 + 0x29) == '\x01') && (plVar5 = (long *)puVar2[0x28], plVar5 != (long *)0x0)
     ) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x00010a05248c(puVar2 + 0x26);
  FUN_10a004cfc(puVar2 + 0x24);
  FUN_10a004cfc(puVar2 + 0x22);
  FUN_10a0772f0(puVar2 + 0x20);
  FUN_10a0cfe2c(puVar2 + 0x1d);
  *puVar2 = &PTR_FUN_110c20f70;
  puVar2[2] = &PTR_FUN_110c68030;
  puVar2[5] = &PTR_DAT_110c68060;
  puVar2[0x35] = &PTR_FUN_110c21070;
  FUN_10a0cfe2c(puVar2 + 0x1b);
  func_0x00010a1980a8(puVar2 + 0x18);
  *puVar2 = &PTR_FUN_110c21208;
  puVar2[2] = &PTR_FUN_110bb3b30;
  puVar2[5] = &PTR_DAT_110bb3b60;
  puVar2[0x35] = &PTR_DAT_110c212d8;
  func_0x00010a1f9d14(puVar2 + 0x13);
  *puVar2 = &PTR_DAT_110c60a00;
  puVar2[2] = &PTR_DAT_110c60a88;
  puVar2[5] = &PTR_DAT_110c60ab8;
  ppuVar8 = (undefined **)(puVar2 + 0xb);
  puVar10 = (undefined8 *)puVar2[0xc];
  for (puVar9 = (undefined8 *)*ppuVar8; puVar9 != puVar10; puVar9 = puVar9 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar9,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar8);
  plVar5 = puVar2 + 10;
  if ((*plVar5 != 0) && (*(undefined ***)(*(long *)(*plVar5 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar2 + 3);
  if ((puVar2[0x12] != 0) && (lVar6 = *(long *)(puVar2[0x12] + 0x828), lVar6 != 0)) {
    FUN_10a1dfb2c(lVar6,puVar2);
  }
  if (*(char *)((long)puVar2 + 0x8f) < '\0') {
    __ZdlPv(puVar2[0xf]);
  }
  appuStack_180[0] = ppuVar8;
  FUN_10ac78cf4(appuStack_180);
  lVar6 = *plVar5;
  *plVar5 = 0;
  if (lVar6 != 0) {
    FUN_10ac7d690(plVar5);
  }
  if (puVar2[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar2[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar2 + 6);
  puVar2[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar2 + 3);
  return puVar2;
}



/* Entry: 10a8342b8; end: 10a8342e7;  */

void FUN_10a8342b8(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a83bebc((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a8342e8; end: 10a8342eb;  */

undefined8 * FUN_10a8342e8(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  *param_1 = &PTR____cxa_pure_virtual_110c20a78;
  func_0x00010a081120(param_1 + 7);
  func_0x00010a05a86c(param_1 + 4);
  plVar4 = (long *)param_1[3];
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a8342ec; end: 10a8342ff;  */

void FUN_10a8342ec(void)

{
  FUN_10a81f8b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a834300; end: 10a8343fb;  */

undefined8 * FUN_10a834300(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  if ((*(char *)(param_1 + 0x5e) == '\x01') &&
     (plVar4 = (long *)param_1[0x5d], plVar4 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  *param_1 = &PTR_FUN_110c213e0;
  param_1[2] = &PTR_FUN_110c679b8;
  param_1[5] = &PTR_DAT_110c679e8;
  param_1[0x5f] = &PTR_DAT_110c21580;
  param_1[0x15] = &PTR_DAT_110c67a40;
  FUN_10a004cfc(param_1 + 0x5a);
  FUN_10a004cfc(param_1 + 0x58);
  if (*(char *)((long)param_1 + 0x2bf) < '\0') {
    __ZdlPv(param_1[0x55]);
  }
  FUN_10a0522e8(param_1 + 0x53);
  FUN_10a0772f0(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c215d0;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x5f] = &PTR_DAT_110c21730;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c21780;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x5f] = &PTR_DAT_110c21850;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar7 = (undefined **)(param_1 + 0xb);
  puVar9 = (undefined8 *)param_1[0xc];
  for (puVar8 = (undefined8 *)*ppuVar7; puVar8 != puVar9; puVar8 = puVar8 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar8,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar7);
  plVar4 = param_1 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar5 = *(long *)(param_1[0x12] + 0x828), lVar5 != 0)) {
    FUN_10a1dfb2c(lVar5,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar7;
  FUN_10ac78cf4(appuStack_180);
  lVar5 = *plVar4;
  *plVar4 = 0;
  if (lVar5 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a8343fc; end: 10a834403;  */

long FUN_10a8343fc(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a834404; end: 10a834803;  */

undefined8 * FUN_10a834404(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  if ((*(char *)(param_1 + 0x5c) == '\x01') &&
     (plVar4 = (long *)param_1[0x5b], plVar4 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  puVar5 = param_1 + -2;
  *puVar5 = &PTR_FUN_110c213e0;
  *param_1 = &PTR_FUN_110c679b8;
  param_1[3] = &PTR_DAT_110c679e8;
  param_1[0x5d] = &PTR_DAT_110c21580;
  param_1[0x13] = &PTR_DAT_110c67a40;
  FUN_10a004cfc(param_1 + 0x58);
  FUN_10a004cfc(param_1 + 0x56);
  if (*(char *)((long)param_1 + 0x2af) < '\0') {
    __ZdlPv(param_1[0x53]);
  }
  FUN_10a0522e8(param_1 + 0x51);
  FUN_10a0772f0(param_1 + 0x4f);
  *puVar5 = &PTR_FUN_110c215d0;
  *param_1 = &PTR_FUN_110bb3968;
  param_1[3] = &PTR_DAT_110bb3998;
  param_1[0x5d] = &PTR_DAT_110c21730;
  param_1[0x13] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4b);
  func_0x00010a042c64(param_1 + 0x46);
  func_0x00010a0523dc(param_1 + 0x43);
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    func_0x00010a042d30(param_1 + 0x38);
  }
  param_1[0x13] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x13);
  *puVar5 = &PTR_DAT_110c21780;
  *param_1 = &PTR_FUN_110b9f848;
  param_1[3] = &PTR_DAT_110b9f878;
  param_1[0x5d] = &PTR_DAT_110c21850;
  FUN_10a042dcc(param_1 + 0x11);
  *puVar5 = &PTR_DAT_110c60a00;
  *param_1 = &PTR_DAT_110c60a88;
  param_1[3] = &PTR_DAT_110c60ab8;
  ppuVar8 = (undefined **)(param_1 + 9);
  puVar10 = (undefined8 *)param_1[10];
  for (puVar9 = (undefined8 *)*ppuVar8; puVar9 != puVar10; puVar9 = puVar9 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar9,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar8);
  plVar4 = param_1 + 8;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 1);
  if ((param_1[0x10] != 0) && (lVar6 = *(long *)(param_1[0x10] + 0x828), lVar6 != 0)) {
    FUN_10a1dfb2c(lVar6,puVar5);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  appuStack_180[0] = ppuVar8;
  FUN_10ac78cf4(appuStack_180);
  lVar6 = *plVar4;
  *plVar4 = 0;
  if (lVar6 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[3] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 4);
  *param_1 = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 1);
  return puVar5;
}



/* Entry: 10a834804; end: 10a834857;  */

void FUN_10a834804(void)

{
  return;
}



/* Entry: 10a834858; end: 10a83486b;  */

void FUN_10a834858(void)

{
  func_0x00010a83c0ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a83486c; end: 10a834897;  */

byte FUN_10a83486c(long param_1)

{
  return (*(byte *)(param_1 + 0xe3) ^ 0xff) & 1;
}



/* Entry: 10a834898; end: 10a83495b;  */

long FUN_10a834898(long param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110c21b18;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_110c21b90;
  func_0x00010a004e5c(param_1 + 0x28);
  func_0x00010a004e04(param_1 + 0x18);
  return param_1;
}



/* Entry: 10a83495c; end: 10a834963;  */

void FUN_10a83495c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c21b18;
  param_1[5] = &PTR_FUN_110c21b90;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -2);
  return;
}



/* Entry: 10a834964; end: 10a8349a7;  */

long FUN_10a834964(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = *(long *)(*param_1 + -0x18);
  *(undefined ***)((long)param_1 + lVar4 + 0x10) = &PTR_DAT_110c21b18;
  *(undefined ***)((long)param_1 + lVar4 + 0x38) = &PTR_FUN_110c21b90;
  func_0x00010a004e5c((long)param_1 + lVar4 + 0x28);
  plVar6 = *(long **)((long)param_1 + lVar4 + 0x20);
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
  return (long)param_1 + lVar4 + 0x18;
}



/* Entry: 10a8349a8; end: 10a8349bb;  */

void FUN_10a8349a8(long *param_1)

{
  long lVar1;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  *(undefined ***)(lVar1 + 0x10) = &PTR_DAT_110c21b18;
  *(undefined ***)(lVar1 + 0x38) = &PTR_FUN_110c21b90;
  func_0x00010a004e5c(lVar1 + 0x28);
  func_0x00010a004e04(lVar1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10a8349bc; end: 10a8349cf;  */

void FUN_10a8349bc(void)

{
  func_0x00010a83c104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8349d0; end: 10a8349d7;  */

undefined8 * FUN_10a8349d0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  param_1[-2] = &PTR_DAT_110c23488;
  *param_1 = &PTR_FUN_110c234d8;
  param_1[0x17] = &PTR_FUN_110c23550;
  puStack_28 = param_1 + 8;
  FUN_10a70642c(&puStack_28);
  puStack_28 = param_1 + 5;
  FUN_10a70642c(&puStack_28);
  *param_1 = &PTR_DAT_110c21c18;
  param_1[0x17] = &PTR_FUN_110c21c90;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a8349d8; end: 10a8349ef;  */

void FUN_10a8349d8(long param_1)

{
  func_0x00010a83c104(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8349f0; end: 10a8349ff;  */

undefined8 * FUN_10a8349f0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_DAT_110c23488;
  puVar1[2] = &PTR_FUN_110c234d8;
  puVar1[0x19] = &PTR_FUN_110c23550;
  puStack_28 = puVar1 + 10;
  FUN_10a70642c(&puStack_28);
  puStack_28 = puVar1 + 7;
  FUN_10a70642c(&puStack_28);
  puVar1[2] = &PTR_DAT_110c21c18;
  puVar1[0x19] = &PTR_FUN_110c21c90;
  func_0x00010a004e5c(puVar1 + 5);
  func_0x00010a004e04(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a834a00; end: 10a834b9b;  */

void FUN_10a834a00(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a83c104((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a834b9c; end: 10a835197;  */

void FUN_10a834b9c(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  double dStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  
  puVar5 = (undefined8 *)0x78;
  __Znwm();
  *puVar5 = FUN_10a854d64;
  puVar5[1] = FUN_10a855288;
  puVar5[0xd] = param_2;
  FUN_10a835198(puVar5 + 2);
  lVar7 = puVar5[7];
  if (lVar7 != 0) {
    plVar9 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar7;
  puVar5[10] = 0;
  *(undefined1 *)(puVar5 + 0xe) = 0;
  lVar7 = puVar5[6];
  if (lVar7 != 0) {
    plVar9 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar9 = (long *)puVar5[10];
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
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
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
  }
  lVar10 = puVar5[0xd];
  puVar5[9] = lVar7;
  puVar5[10] = lVar7;
  lVar7 = *(long *)(lVar10 + 0x58);
  if (lVar7 == 0) {
    FUN_10a81b94c(lVar10);
    lVar7 = *(long *)(lVar10 + 0x58);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  puVar5[10] = lVar7;
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    plVar9 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar6 = puVar5[10];
  }
  FUN_10a8352a4(puVar5 + 0xb,puVar5 + 9,uVar6);
  puVar5[0xc] = puVar5[0xb];
  plVar9 = (long *)(puVar5[0xb] + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[0xc] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xe) = 1;
    lVar7 = puVar5[0xc];
    plVar9 = (long *)(lVar7 + 0x10);
    uVar6 = puVar5[3];
    do {
      lVar10 = *plVar9;
      if (lVar10 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          dStack_50 = 0.0;
          puStack_48 = puVar5;
          uStack_40 = uVar6;
          func_0x000109d1b588(lVar7 + 0x18,&dStack_50);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  uVar6 = *(undefined8 *)(puVar5[0xc] + 0x10);
  plVar9 = (long *)puVar5[0xc];
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  if (((uint)uVar6 >> 5 & 1) == 0) {
    func_0x0001092af8bc(puVar5 + 0xb);
    lVar7 = puVar5[0xb];
    if ((*(byte *)(lVar7 + 0x1b8) & 1) == 0) {
LAB_10a834f80:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a834f84);
      (*pcVar4)();
    }
    if ((*(double *)(lVar7 + 0xb0) != 0.0) || (*(double *)(lVar7 + 0xb8) != 0.0)) {
      puStack_48 = *(undefined8 **)(lVar7 + 0xb8);
      dStack_50 = *(double *)(lVar7 + 0xb0);
      uStack_40 = *(undefined8 *)(lVar7 + 0xc0);
      func_0x00010a8358bc(puVar5 + 2,&dStack_50);
      goto LAB_10a834e38;
    }
  }
  else {
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
      __ZNSt13exception_ptrC1ERKS_(&dStack_50,puVar5[10] + 0x90);
      func_0x0001092af97c(&dStack_50);
      goto LAB_10a834f80;
    }
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f67aaab,&UNK_10f67c07a,0x184,&UNK_10f67c0ee);
    }
  }
  func_0x00010a835824(puVar5 + 2);
LAB_10a834e38:
  plVar9 = (long *)puVar5[0xb];
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  plVar9 = (long *)puVar5[10];
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  plVar9 = (long *)puVar5[9];
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
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
      (**(code **)(*plVar9 + 0x10))(plVar9);
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
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  func_0x000109d1a1d0(puVar5 + 2);
  __ZdlPv(puVar5);
  return;
}



/* Entry: 10a835198; end: 10a835237;  */

undefined8 * FUN_10a835198(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
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
  *puVar1 = &PTR_FUN_110c21d30;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  FUN_109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 10a835238; end: 10a8352a3;  */

undefined8 * FUN_10a835238(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a8352a4; end: 10a835823;  */

/* WARNING: Removing unreachable block (ram,0x00010a8353f8) */
/* WARNING: Removing unreachable block (ram,0x00010a835608) */
/* WARNING: Removing unreachable block (ram,0x00010a8353b8) */
/* WARNING: Removing unreachable block (ram,0x00010a83554c) */

void FUN_10a8352a4(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)0x228;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x37) = 0;
  *plVar4 = (long)&PTR_FUN_110c21d68;
  plVar9 = plVar4 + 0x38;
  lVar5 = *param_2;
  plVar10 = (long *)(lVar5 + 8);
  plVar4[0x38] = param_3;
  plVar4[0x39] = lVar5;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = *plVar10 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[0x3c] = 0;
  plVar4[0x3d] = 0x32aaaba7;
  plVar4[0x3f] = 0;
  plVar4[0x3e] = 0;
  plVar4[0x41] = 0;
  plVar4[0x40] = 0;
  plVar4[0x43] = 0;
  plVar4[0x42] = 0;
  plVar4[0x44] = 0;
  lStack_78 = 0;
  plVar4[0x3a] = (long)plVar4;
  plVar4[0x3b] = 0;
  plStack_70 = plVar9;
  if (((uint)*(undefined8 *)(plVar4[0x39] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x3d);
    lVar5 = *plVar9;
    plVar10 = (long *)(lVar5 + 0x10);
    do {
      lVar7 = *plVar10;
      if (lVar7 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar7 = lVar5 + 0x18;
          pcStack_68 = FUN_10a835970;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar9;
          func_0x000109d1b588(lVar7,&pcStack_68);
          *(undefined8 *)(lVar5 + 0x10) = 0;
          plStack_70[3] = lVar7;
          lVar5 = plVar4[0x39];
          plVar10 = (long *)(lVar5 + 0x10);
          goto LAB_10a835538;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar7 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar5 = plVar4[0x3a];
    plVar10 = (long *)(lVar5 + 0x10);
    do {
      lVar7 = *plVar10;
      if (lVar7 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar5 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar7 >> 1 & 1) == 0);
    plVar10 = (long *)plVar4[0x39];
    plVar4[0x39] = 0;
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
    }
    lVar5 = plVar4[0x3a];
    plVar4[0x3a] = 0;
    if (lVar5 != 0) {
      func_0x0001092b4274(plVar4 + 0x3a);
    }
    *param_1 = *plVar9;
    *plVar9 = 0;
    plStack_80 = plVar4;
LAB_10a835778:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x3d);
  }
  else {
    lVar5 = plVar4[0x3a];
    plVar10 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar5,plVar10);
    plVar10 = (long *)*plVar9;
    *plVar9 = 0;
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x39];
    plVar4[0x39] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar5 = plVar4[0x3a];
    plVar4[0x3a] = 0;
    if (lVar5 != 0) {
      func_0x0001092b4274(plVar4 + 0x3a);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a835538:
  do {
    lVar8 = *plVar10;
    if (lVar8 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar7 = lVar5 + 0x18;
        pcStack_68 = FUN_10a835a80;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar9;
        func_0x000109d1b588(lVar7,&pcStack_68);
        *(undefined8 *)(lVar5 + 0x10) = 0;
        plStack_70[4] = lVar7;
        *param_1 = (long)plVar4;
        goto LAB_10a835774;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar8 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar5 = plVar4[0x3a];
  FUN_109d1857c();
  func_0x000109d1b350(lVar5,lVar7);
  plVar10 = (long *)plVar4[0x39];
  plVar4[0x39] = 0;
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  lVar7 = *plVar9;
  plVar10 = (long *)(lVar7 + 0x10);
  lVar5 = plStack_70[3];
  while (lVar8 = *plVar10, lVar8 != 0) {
    ClearExclusiveLocal();
LAB_10a83561c:
    if (((uint)lVar8 >> 1 & 1) != 0) goto LAB_10a83576c;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar3) {
    *plVar10 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a83561c;
  pcStack_68 = FUN_10a835970;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar9;
  FUN_109d1b624(lVar7 + 0x18,&pcStack_68,lVar5);
  *(undefined8 *)(lVar7 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar10 = (long *)*plVar9;
  *plVar9 = 0;
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar10 + 8))();
      }
    }
  }
  lVar5 = plVar4[0x3a];
  plVar4[0x3a] = 0;
  if (lVar5 != 0) {
    func_0x0001092b4274(plVar4 + 0x3a);
  }
LAB_10a83576c:
  *param_1 = (long)plVar4;
LAB_10a835774:
  plStack_80 = (long *)0x0;
  goto LAB_10a835778;
}



/* Entry: 10a835824; end: 10a83596f;  */

void FUN_10a835824(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = (long *)(param_1 + 0x30);
  lVar5 = *plVar8;
  plVar4 = (long *)(lVar5 + 0x10);
  do {
    lVar7 = *plVar4;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        *(undefined1 *)(lVar5 + 0x98) = 0;
        *(undefined1 *)(lVar5 + 0xb0) = 0;
        *(undefined1 *)(lVar5 + 0xb8) = 1;
        *(undefined8 *)(lVar5 + 0x10) = 2;
        FUN_109d1b4dc(lVar5 + 0x18);
        goto LAB_10a835894;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar7 >> 1 & 1) != 0) {
LAB_10a835894:
      plVar4 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar4 == (long *)0x0) {
        return;
      }
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 0x200000000;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 >> 0x21 == 1) {
        FUN_109d1b3c4(plVar4,1,plVar8);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar4 != (long *)0x0) && (uVar6 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 8))(plVar4);
          return;
        }
      }
      return;
    }
  } while( true );
}



/* Entry: 10a835970; end: 10a835a7f;  */

void FUN_10a835970(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_38 = FUN_10a835a80;
  ppuStack_28 = &PTR_PTR_1132fed68;
  plStack_30 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_38);
  lVar7 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 0x1b8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a835a7c);
      (*pcVar4)();
    }
    func_0x00010a835f4c(lVar7,*param_1 + 0x98);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_38,*param_1 + 0x90);
    func_0x000109d1b350(lVar7,&pcStack_38);
    __ZNSt13exception_ptrD1Ev(&pcStack_38);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x00010a835edc(param_1,param_1 + 3);
  return;
}



/* Entry: 10a835a80; end: 10a835b5f;  */

void FUN_10a835a80(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a835970;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  func_0x00010a835edc(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a835b60; end: 10a835bd3;  */

long * FUN_10a835b60(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10a835bd4; end: 10a835e27;  */

undefined8 * FUN_10a835bd4(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110c21d68;
  __ZNSt3__15mutexD1Ev(param_1 + 0x3d);
  if (param_1[0x3a] != 0) {
    func_0x0001092b4274(param_1 + 0x3a);
  }
  plVar5 = (long *)param_1[0x39];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
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
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (long *)param_1[0x38];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_FUN_110c21db8;
  if (*(char *)(param_1 + 0x37) == '\x01') {
    FUN_10a6fd048(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a835e28; end: 10a835fe7;  */

undefined8 * FUN_10a835e28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c21db8;
  if (*(char *)(param_1 + 0x37) == '\x01') {
    FUN_10a6fd048(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a835fe8; end: 10a83617f;  */

undefined8 * FUN_10a835fe8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  uVar3 = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x24) = uVar3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    func_0x000107c3192c(param_1 + 7,param_2[7],param_2[8]);
  }
  else {
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
  }
  FUN_10a1ccb30(param_1 + 10,param_2 + 10);
  FUN_10a7146f8(param_1 + 0xe,param_2 + 0xe);
  FUN_10a712eb8(param_1 + 0x13,param_2 + 0x13);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_10a1ccb30(param_1 + 0x19,param_2 + 0x19);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
  if (*(char *)((long)param_2 + 0x107) < '\0') {
    func_0x000107c3192c(param_1 + 0x1e,param_2[0x1e],param_2[0x1f]);
  }
  else {
    uVar2 = param_2[0x1f];
    uVar1 = param_2[0x1e];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar2;
    param_1[0x1e] = uVar1;
  }
  uVar2 = param_2[0x22];
  uVar1 = param_2[0x21];
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  param_1[0x22] = uVar2;
  param_1[0x21] = uVar1;
  return param_1;
}



/* Entry: 10a836180; end: 10a836253;  */

void FUN_10a836180(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  plVar7 = (long *)(param_1 + 0x30);
  lVar8 = *plVar7;
  plVar4 = (long *)(lVar8 + 0x10);
  do {
    lVar6 = *plVar4;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(lVar8 + 0xb8) == '\x01') {
          func_0x00010a05248c(lVar8 + 0xa8);
          FUN_10a0e3194(lVar8 + 0x98);
        }
        uVar9 = *param_2;
        *(undefined8 *)(lVar8 + 0xa0) = param_2[1];
        *(undefined8 *)(lVar8 + 0x98) = uVar9;
        *param_2 = 0;
        param_2[1] = 0;
        uVar9 = param_2[2];
        *(undefined8 *)(lVar8 + 0xb0) = param_2[3];
        *(undefined8 *)(lVar8 + 0xa8) = uVar9;
        param_2[2] = 0;
        param_2[3] = 0;
        *(undefined1 *)(lVar8 + 0xb8) = 1;
        *(undefined8 *)(lVar8 + 0x10) = 2;
        FUN_109d1b4dc(lVar8 + 0x18);
        goto LAB_10a836224;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a836224:
      plVar4 = (long *)*plVar7;
      *plVar7 = 0;
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
        FUN_109d1b3c4(plVar4,1,plVar7);
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
  } while( true );
}



/* Entry: 10a836254; end: 10a8366f7;  */

void FUN_10a836254(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar6 = (undefined8 *)0x90;
  __Znwm();
  *puVar6 = FUN_10a854438;
  puVar6[1] = FUN_10a854800;
  puVar6[0x10] = param_2;
  FUN_10a8366f8(puVar6 + 2);
  lVar7 = puVar6[7];
  if (lVar7 != 0) {
    plVar10 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar7;
  puVar6[9] = 0;
  *(undefined1 *)(puVar6 + 0x11) = 0;
  lVar7 = puVar6[6];
  if (lVar7 != 0) {
    plVar10 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar10 = (long *)puVar6[9];
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
    }
  }
  puVar6[9] = lVar7;
  puVar6[0xd] = lVar7;
  FUN_10a83685c(puVar6 + 0xf,puVar6 + 0xd,*(undefined8 *)puVar6[0x10]);
  puVar6[0xe] = puVar6[0xf];
  plVar10 = (long *)(puVar6[0xf] + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = *plVar10 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0xe] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x11) = 1;
    lVar7 = puVar6[0xe];
    plVar10 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar6[3];
    do {
      lVar9 = *plVar10;
      if (lVar9 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          uStack_48 = 0;
          puStack_40 = puVar6;
          func_0x000109d1b588(lVar7 + 0x18,&uStack_48);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar9 >> 1 & 1) == 0);
  }
  lVar7 = puVar6[0xe];
  if (((uint)*(undefined8 *)(puVar6[0xe] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar7 + 0xa8) & 1) != 0) {
      lVar9 = *(long *)(lVar7 + 0xa0);
      uVar11 = *(undefined8 *)(lVar7 + 0x98);
      puVar6[10] = *(undefined8 *)(lVar7 + 0xa0);
      puVar6[9] = uVar11;
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = *plVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar6[0xb] = 0;
      puVar6[0xc] = 0;
      FUN_10a836180(puVar6 + 2,puVar6 + 9);
      plVar10 = (long *)puVar6[0xc];
      if (plVar10 != (long *)0x0) {
        plVar2 = plVar10 + 1;
        do {
          lVar7 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = (long *)puVar6[10];
      if (plVar10 != (long *)0x0) {
        plVar2 = plVar10 + 1;
        do {
          lVar7 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = (long *)puVar6[0xe];
      if (plVar10 != (long *)0x0) {
        puVar1 = (ulong *)(plVar10 + 1);
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar8 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      plVar10 = (long *)puVar6[0xf];
      if (plVar10 != (long *)0x0) {
        puVar1 = (ulong *)(plVar10 + 1);
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar8 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      plVar10 = (long *)puVar6[0xd];
      if (plVar10 != (long *)0x0) {
        puVar1 = (ulong *)(plVar10 + 1);
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          do {
            uVar8 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar8 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar10 + 8))(plVar10);
          }
        }
      }
      func_0x000109d1a1d0(puVar6 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar6);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar7 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a8365cc);
  (*pcVar5)();
}



/* Entry: 10a8366f8; end: 10a836797;  */

undefined8 * FUN_10a8366f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  *(undefined2 *)(puVar1 + 3) = 4;
  uVar3 = 0;
  uVar4 = 0;
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
  *puVar1 = &PTR_FUN_110c21dd8;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  ppuVar2 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = 0;
  FUN_109d18960(param_1,*ppuVar2,0);
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  return param_1;
}



/* Entry: 10a836798; end: 10a83685b;  */

undefined8 * FUN_10a836798(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c21dd8;
  if (*(char *)(param_1 + 0x17) == '\x01') {
    func_0x00010a05248c(param_1 + 0x15);
    FUN_10a0e3194(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a83685c; end: 10a836ddf;  */

/* WARNING: Removing unreachable block (ram,0x00010a8369b4) */
/* WARNING: Removing unreachable block (ram,0x00010a836bc4) */
/* WARNING: Removing unreachable block (ram,0x00010a836974) */
/* WARNING: Removing unreachable block (ram,0x00010a836b08) */

void FUN_10a83685c(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)0x118;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 0;
  *plVar4 = (long)&PTR_FUN_110c21e10;
  plVar10 = plVar4 + 0x16;
  *plVar10 = param_3;
  plVar9 = (long *)(*param_2 + 8);
  plVar4[0x17] = *param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0x32aaaba7;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x22] = 0;
  lStack_78 = 0;
  plVar4[0x18] = (long)plVar4;
  plVar4[0x19] = 0;
  plStack_70 = plVar10;
  if (((uint)*(undefined8 *)(plVar4[0x17] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1b);
    lVar8 = *plVar10;
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = lVar8 + 0x18;
          pcStack_68 = FUN_10a836de0;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar10;
          func_0x000109d1b588(lVar6,&pcStack_68);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          plStack_70[3] = lVar6;
          lVar8 = plVar4[0x17];
          plVar9 = (long *)(lVar8 + 0x10);
          goto LAB_10a836af4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar8 = plVar4[0x18];
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = *plVar10;
    *plVar10 = 0;
    plStack_80 = plVar4;
LAB_10a836d34:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1b);
  }
  else {
    lVar8 = plVar4[0x18];
    plVar9 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar8,plVar9);
    plVar9 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a836af4:
  do {
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = lVar8 + 0x18;
        pcStack_68 = FUN_10a836ef0;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar10;
        func_0x000109d1b588(lVar6,&pcStack_68);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plStack_70[4] = lVar6;
        *param_1 = (long)plVar4;
        goto LAB_10a836d30;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar7 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar8 = plVar4[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(lVar8,lVar6);
  plVar9 = (long *)plVar4[0x17];
  plVar4[0x17] = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  lVar6 = *plVar10;
  plVar9 = (long *)(lVar6 + 0x10);
  lVar8 = plStack_70[3];
  while (lVar7 = *plVar9, lVar7 != 0) {
    ClearExclusiveLocal();
LAB_10a836bd8:
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a836d28;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar3) {
    *plVar9 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a836bd8;
  pcStack_68 = FUN_10a836de0;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar10;
  FUN_109d1b624(lVar6 + 0x18,&pcStack_68,lVar8);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar8 = plVar4[0x18];
  plVar4[0x18] = 0;
  if (lVar8 != 0) {
    func_0x0001092b4274(plVar4 + 0x18);
  }
LAB_10a836d28:
  *param_1 = (long)plVar4;
LAB_10a836d30:
  plStack_80 = (long *)0x0;
  goto LAB_10a836d34;
}



/* Entry: 10a836de0; end: 10a836eef;  */

void FUN_10a836de0(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_38 = FUN_10a836ef0;
  ppuStack_28 = &PTR_PTR_1132fed68;
  plStack_30 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_38);
  lVar7 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a836eec);
      (*pcVar4)();
    }
    func_0x00010a8373b4(lVar7,*param_1 + 0x98);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_38,*param_1 + 0x90);
    func_0x000109d1b350(lVar7,&pcStack_38);
    __ZNSt13exception_ptrD1Ev(&pcStack_38);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x00010a837344(param_1,param_1 + 3);
  return;
}



/* Entry: 10a836ef0; end: 10a836fcf;  */

void FUN_10a836ef0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a836de0;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  func_0x00010a837344(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a836fd0; end: 10a837043;  */

long * FUN_10a836fd0(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10a837044; end: 10a83728f;  */

undefined8 * FUN_10a837044(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110c21e10;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x17];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
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
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (long *)param_1[0x16];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_FUN_110c21e60;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10a0e3194(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a837290; end: 10a83748f;  */

undefined8 * FUN_10a837290(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c21e60;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10a0e3194(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a837490; end: 10a8374c7;  */

void FUN_10a837490(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110c21e70;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  return;
}



/* Entry: 10a8374c8; end: 10a8375cf;  */

long FUN_10a8374c8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  (*(code *)**(undefined8 **)(param_1 + 0xa0))();
  (*(code *)**(undefined8 **)(param_1 + 0x60))();
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
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



/* Entry: 10a8375d0; end: 10a8375e7;  */

void FUN_10a8375d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a8375e8; end: 10a837703;  */

void FUN_10a8375e8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_DAT_110c21e88;
  puVar4 = (undefined8 *)0xd8;
  __Znwm();
  lVar5 = puVar6[1];
  uVar7 = *puVar6;
  puVar4[1] = puVar6[1];
  *puVar4 = uVar7;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[3] = puVar6[3];
  lVar5 = puVar6[4];
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar6 + 2);
  (**(code **)(lVar5 + 0x18))(puVar4 + 4);
  puVar4[0xb] = puVar6[0xb];
  (**(code **)(puVar6[0xc] + 0x18))(puVar4 + 0xc);
  puVar4[0x13] = puVar6[0x13];
  (**(code **)(puVar6[0x14] + 0x18))(puVar4 + 0x14,puVar6 + 0x14);
  param_1[1] = puVar4;
  return;
}



/* Entry: 10a837704; end: 10a83776b;  */

undefined8 * FUN_10a837704(undefined8 *param_1)

{
  code *pcVar1;
  
  if (param_1[0xe] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a84832c(param_1 + 0xb);
  if ((ulong)*(byte *)(param_1 + 9) < 4) {
    (*(code *)(&PTR_FUN_110c14970)[*(byte *)(param_1 + 9)])(param_1 + 3);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a83776c);
  (*pcVar1)();
}



/* Entry: 10a83776c; end: 10a837d7f;  */

void FUN_10a83776c(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  puVar8 = (undefined8 *)0x1d0;
  __Znwm();
  *puVar8 = FUN_10a853098;
  puVar8[1] = FUN_10a853630;
  puVar8[0x38] = param_2;
  func_0x0001092ba17c(puVar8 + 2);
  lVar10 = puVar8[7];
  if (lVar10 != 0) {
    plVar9 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = *plVar9 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar10;
  puVar8[0x35] = 0;
  *(undefined1 *)(puVar8 + 0x39) = 0;
  puVar15 = puVar8 + 0x35;
  FUN_10a057268(puVar15,puVar8);
  if (((ulong)puVar15 & 1) != 0) {
    return;
  }
  puVar15 = puVar8 + 0x2d;
  lVar10 = puVar8[0x38];
  puVar8[0x34] = puVar8[0x35];
  uVar13 = *(undefined8 *)(lVar10 + 0x50);
  *(undefined1 *)(puVar8 + 0x33) = 3;
  puStack_48 = puVar15;
  FUN_10a700d30(&puStack_48,lVar10 + 0x18,*(undefined1 *)(lVar10 + 0x48));
  *(undefined1 *)(puVar8 + 0x33) = *(undefined1 *)(lVar10 + 0x48);
  FUN_10a76e70c(puVar8 + 0x35,uVar13,puVar8[0x38],puVar15);
  if (3 < (ulong)*(byte *)(puVar8 + 0x33)) {
LAB_10a837ce0:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a837ce4);
    (*pcVar6)();
  }
  (*(code *)(&PTR_FUN_110c14970)[*(byte *)(puVar8 + 0x33)])(puVar15);
  puVar8[0x36] = puVar8[0x35];
  plVar9 = (long *)(puVar8[0x35] + 8);
  do {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar7) {
      *plVar9 = *plVar9 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar8[0x36] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar8 + 0x39) = 1;
    lVar10 = puVar8[0x36];
    plVar9 = (long *)(lVar10 + 0x10);
    uStack_38 = puVar8[3];
    do {
      lVar12 = *plVar9;
      if (lVar12 == 0) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          puStack_48 = (undefined8 *)0x0;
          plStack_40 = puVar8;
          func_0x000109d1b588(lVar10 + 0x18,&puStack_48);
          *(undefined8 *)(lVar10 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar12 >> 1 & 1) == 0);
  }
  uVar13 = *(undefined8 *)(puVar8[0x36] + 0x10);
  plVar9 = (long *)puVar8[0x36];
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar11 = *puVar1;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar11 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = uVar11 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  if (((uint)uVar13 >> 5 & 1) != 0) {
    if (((uint)*(undefined8 *)(puVar8[0x34] + 0x10) >> 1 & 1) == 0) {
      if ((uRam000000011330a9e8 & 1) != 0) {
        plVar9 = (long *)puVar8[0x38];
        if (*(char *)((long)plVar9 + 0x17) < '\0') {
          plVar9 = (long *)*plVar9;
        }
        func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67c1dc,0x307,&UNK_10f67c313,in_x6,in_x7,
                            plVar9);
      }
      (*(code *)**(undefined8 **)(puVar8[0x38] + 0x58))();
    }
    else {
      if ((uRam000000011330a9e8 & 1) != 0) {
        plVar9 = (long *)puVar8[0x38];
        if (*(char *)((long)plVar9 + 0x17) < '\0') {
          plVar9 = (long *)*plVar9;
        }
        func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67c1dc,0x2fe,&UNK_10f67c2cb,in_x6,in_x7,
                            plVar9);
      }
      lVar10 = puVar8[0x38];
      plVar9 = *(long **)(lVar10 + 0x70);
      if ((plVar9 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_40 = plVar9, plVar9 != (long *)0x0)) {
        puVar15 = *(undefined8 **)(lVar10 + 0x68);
        puStack_48 = puVar15;
        if (puVar15 != (undefined8 *)0x0) {
          FUN_10a009538(puVar8 + 9,&UNK_10f67c300);
          FUN_10a05bde0(puVar8 + 0x37,puVar8 + 9);
          func_0x000109d1b350(*puVar15,puVar8 + 0x37);
          FUN_10a837d80(puVar15);
          __ZNSt13exception_ptrD1Ev(puVar8 + 0x37);
          __ZNSt13runtime_errorD2Ev(puVar8 + 9);
        }
        plVar2 = plVar9 + 1;
        do {
          lVar10 = *plVar2;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    func_0x0001092ba100(puVar8 + 2);
    bVar7 = false;
    goto LAB_10a837b6c;
  }
  lVar10 = puVar8[0x38];
  puStack_48 = (undefined8 *)0x0;
  plStack_40 = (long *)0x0;
  plVar9 = *(long **)(lVar10 + 0x70);
  if (((plVar9 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_40 = plVar9, plVar9 == (long *)0x0)) ||
     (puVar15 = *(undefined8 **)(lVar10 + 0x68), puStack_48 = puVar15, puVar15 == (undefined8 *)0x0)
     ) {
    plVar9 = plStack_40;
    if ((uRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67c1dc,0x30e,&UNK_10f67c346);
    }
    func_0x0001092ba100(puVar8 + 2);
    iVar14 = 3;
    iVar5 = 3;
    if (plVar9 != (long *)0x0) goto LAB_10a837b34;
  }
  else {
    func_0x0001092af8bc(puVar8 + 0x35);
    if ((*(byte *)(puVar8[0x35] + 0xa8) & 1) == 0) goto LAB_10a837ce0;
    FUN_10a837f90(*puVar15,puVar8[0x35] + 0x98);
    FUN_10a837d80(puVar15);
    iVar5 = 0;
LAB_10a837b34:
    iVar14 = iVar5;
    plVar2 = plVar9 + 1;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  bVar7 = iVar14 == 0;
LAB_10a837b6c:
  plVar9 = (long *)puVar8[0x35];
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar11 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar11 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  plVar9 = (long *)puVar8[0x34];
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar11 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar11 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  if (bVar7) {
    func_0x0001092ba100(puVar8 + 2);
  }
  func_0x000109d1a1d0(puVar8 + 2);
  __ZdlPv(puVar8);
  return;
}



/* Entry: 10a837d80; end: 10a837f17;  */

void FUN_10a837d80(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined8 ****ppppuStack_98;
  char cStack_90;
  undefined8 **ppuStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cStack_90 = '\0';
    pppppuVar3 = &ppppuStack_98;
    ppppuStack_98 = (undefined8 *****)(param_1 + 0x70);
    func_0x00010a701888();
    pppppuVar4 = pppppuVar3;
    if (((ulong)pppppuVar3 & 1) != 0) {
      pppuStack_b0 = (undefined8 ****)0x0;
      pppuStack_a8 = (undefined8 ***)0x0;
      uStack_a0 = 0;
      __ZNSt3__15mutex4lockEv(param_1 + 0x30);
      ppppuVar6 = *(undefined8 *****)(param_1 + 0x18);
      uStack_a0 = *(undefined8 *)(param_1 + 0x28);
      ppppuVar5 = *(undefined8 *****)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      pppuStack_b0 = ppppuVar6;
      pppuStack_a8 = ppppuVar5;
      __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
      for (; ppppuVar6 != ppppuVar5; ppppuVar6 = ppppuVar6 + 8) {
        ppuStack_88 = *ppppuVar6;
        (*(code *)ppppuVar6[1][3])(apuStack_80,ppppuVar6 + 1);
        (*(code *)ppuStack_88)(param_1 + 8,&ppuStack_88);
        (*(code *)*apuStack_80[0])(apuStack_80);
      }
      pppppuVar4 = (undefined8 *****)&pppuStack_b0;
      FUN_10a837f18();
    }
    if (cStack_90 == '\x01') {
      pppppuVar4 = (undefined8 *****)ppppuStack_98;
      __ZNSt3__15mutex6unlockEv();
    }
    if ((int)pppppuVar3 == 0) break;
    __ZNSt3__15mutex4lockEv(param_1 + 0x30);
    lVar1 = *(long *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
    pppppuVar4 = (undefined8 *****)(param_1 + 0x30);
    __ZNSt3__15mutex6unlockEv();
  } while (lVar2 != lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a837f18(&pppuStack_b0);
  if (cStack_90 == '\x01') {
    __ZNSt3__15mutex6unlockEv(ppppuStack_98);
  }
  __Unwind_Resume();
  ppppuVar6 = *pppppuVar4;
  if (ppppuVar6 != (undefined8 ****)0x0) {
    ppppuVar5 = ppppuVar6;
    if (pppppuVar4[1] != ppppuVar6) {
      ppppuVar5 = pppppuVar4[1] + -7;
      do {
        ppppuVar7 = ppppuVar5 + -1;
        (*(code *)**ppppuVar5)(ppppuVar5);
        ppppuVar5 = ppppuVar5 + -8;
      } while (ppppuVar7 != ppppuVar6);
      ppppuVar5 = *pppppuVar4;
    }
    pppppuVar4[1] = ppppuVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(ppppuVar5);
    return;
  }
  return;
}



/* Entry: 10a837f18; end: 10a837f8f;  */

void FUN_10a837f18(undefined8 *param_1)

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



/* Entry: 10a837f90; end: 10a8380c3;  */

void FUN_10a837f90(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar1 = (long *)(param_1 + 0x10);
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
        if (*(char *)(param_1 + 0xa8) == '\x01') {
          func_0x00010a0536d4(param_1 + 0x98);
          *(undefined1 *)(param_1 + 0xa8) = 0;
        }
        lVar4 = param_2[1];
        uVar9 = *param_2;
        *(undefined8 *)(param_1 + 0xa0) = param_2[1];
        *(undefined8 *)(param_1 + 0x98) = uVar9;
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
        *(undefined1 *)(param_1 + 0xa8) = 1;
        *(undefined8 *)(param_1 + 0x10) = 2;
        uStack_78 = *(undefined8 *)(param_1 + 0x60);
        uStack_80 = *(undefined8 *)(param_1 + 0x58);
        uStack_68 = *(undefined8 *)(param_1 + 0x70);
        uStack_70 = *(undefined8 *)(param_1 + 0x68);
        uStack_58 = *(undefined8 *)(param_1 + 0x80);
        uStack_60 = *(undefined8 *)(param_1 + 0x78);
        uStack_c0 = *(undefined8 *)(param_1 + 0x18);
        uStack_b8 = *(undefined8 *)(param_1 + 0x20);
        uStack_a8 = *(undefined8 *)(param_1 + 0x30);
        uStack_b0 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 0x88) = (undefined8 *)(param_1 + 0x18);
        *(undefined1 *)(param_1 + 0x19) = 0;
        uStack_98 = *(undefined8 *)(param_1 + 0x40);
        uStack_a0 = *(undefined8 *)(param_1 + 0x38);
        uStack_88 = *(undefined8 *)(param_1 + 0x50);
        uStack_90 = *(undefined8 *)(param_1 + 0x48);
        puVar5 = &uStack_c0;
        do {
          uVar6 = (ulong)*(byte *)((long)puVar5 + 1);
          if (uVar6 != 0) {
            puVar8 = (undefined8 *)((long)puVar5 + 0x20);
            do {
              uStack_48 = puVar8[-1];
              uStack_50 = puVar8[-2];
              uStack_40 = *puVar8;
              (*(code *)**(undefined8 **)*puVar8)((undefined8 *)*puVar8,&uStack_50);
              uVar6 = uVar6 - 1;
              puVar8 = puVar8 + 3;
            } while (uVar6 != 0);
          }
          puVar7 = *(undefined1 **)((long)puVar5 + 8);
          if (puVar5 != &uStack_c0) {
            _free(puVar5);
          }
          puVar5 = (undefined8 *)puVar7;
        } while (puVar7 != (undefined1 *)0x0);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return;
    }
  } while( true );
}



/* Entry: 10a8380c4; end: 10a8380db;  */

void FUN_10a8380c4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a8380dc; end: 10a8386bf;  */

/* WARNING: Removing unreachable block (ram,0x00010a83839c) */
/* WARNING: Removing unreachable block (ram,0x00010a838270) */

void FUN_10a8380dc(long *param_1,long param_2)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uVar13 = *(undefined8 *)(param_2 + 0x28);
  puVar6 = (undefined8 *)0xe8;
  __Znwm();
  *puVar6 = FUN_10a855e9c;
  puVar6[1] = FUN_10a8563c0;
  puVar6[0x1a] = param_2;
  puVar6[0x1b] = uVar13;
  FUN_10a7026e8(puVar6 + 2);
  lVar9 = puVar6[7];
  if (lVar9 != 0) {
    plVar7 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar9;
  lVar9 = *(long *)(param_2 + 8);
  puVar6[9] = lVar9;
  plVar7 = (long *)(lVar9 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[9] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)((long)puVar6 + 0xe4) = 0;
    lVar9 = puVar6[9];
    plVar7 = (long *)(lVar9 + 0x10);
    uStack_38 = puVar6[3];
    do {
      lVar11 = *plVar7;
      if (lVar11 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_10a8384f8;
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar11 >> 1 & 1) == 0);
  }
  plVar7 = (long *)puVar6[9];
  if (((uint)*(undefined8 *)(puVar6[9] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)((long)plVar7 + 0x9c) & 1) != 0) {
      plVar12 = (long *)puVar6[0x1a];
      *(int *)(puVar6 + 0x1c) = (int)plVar7[0x13];
      puVar1 = (ulong *)(plVar7 + 1);
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
          (**(code **)(*plVar7 + 8))();
        }
      }
      lVar9 = *plVar12;
      puVar6[9] = lVar9;
      plVar7 = (long *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((uint)*(undefined8 *)(puVar6[9] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)((long)puVar6 + 0xe4) = 1;
        lVar9 = puVar6[9];
        plVar7 = (long *)(lVar9 + 0x10);
        uStack_38 = puVar6[3];
        do {
          lVar11 = *plVar7;
          if (lVar11 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_10a8384f8;
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar11 >> 1 & 1) == 0);
      }
      plVar7 = (long *)puVar6[9];
      if (((uint)*(undefined8 *)(puVar6[9] + 0x10) >> 5 & 1) == 0) {
        if ((*(byte *)((long)plVar7 + 0x9c) & 1) != 0) {
          lVar11 = puVar6[0x1a];
          lVar9 = plVar7[0x13];
          puVar1 = (ulong *)(plVar7 + 1);
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
              (**(code **)(*plVar7 + 8))();
            }
          }
          puVar6[0x16] = 0;
          puVar6[0x17] = 0;
          lVar8 = *(long *)(lVar11 + 0x20);
          if (lVar8 != 0) {
            __ZNSt3__119__shared_weak_count4lockEv();
            puVar6[0x17] = lVar8;
            if (lVar8 == 0) {
              lVar11 = puVar6[0x16];
            }
            else {
              lVar11 = *(long *)(lVar11 + 0x18);
              puVar6[0x16] = lVar11;
            }
            if (lVar11 != 0) {
              iVar2 = *(int *)(puVar6[0x1a] + 0x10) + *(int *)(puVar6 + 0x1c) * 0x100;
              FUN_10a821ff4(puVar6 + 9,puVar6[0x1b],iVar2);
              FUN_10a81f940(puVar6 + 0x19,puVar6[0x1b],puVar6 + 9,iVar2,(int)lVar9);
              puVar6[0x18] = puVar6[0x19];
              plVar7 = (long *)(puVar6[0x19] + 8);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar4) {
                  *plVar7 = *plVar7 + 4;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (((uint)*(undefined8 *)(puVar6[0x18] + 0x10) >> 1 & 1) == 0) {
                *(undefined1 *)((long)puVar6 + 0xe4) = 2;
                lVar9 = puVar6[0x18];
                plVar7 = (long *)(lVar9 + 0x10);
                uStack_38 = puVar6[3];
                do {
                  lVar11 = *plVar7;
                  if (lVar11 == 0) {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                    if (bVar4) {
                      *plVar7 = 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    if (cVar3 == '\0') {
LAB_10a8384f8:
                      uStack_48 = 0;
                      puStack_40 = puVar6;
                      func_0x000109d1b588(lVar9 + 0x18,&uStack_48);
                      *(undefined8 *)(lVar9 + 0x10) = 0;
                      return;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                } while (((uint)lVar11 >> 1 & 1) == 0);
              }
              lVar9 = puVar6[0x18];
              if (((uint)*(undefined8 *)(puVar6[0x18] + 0x10) >> 5 & 1) == 0) {
                if ((*(byte *)(lVar9 + 0xb0) & 1) != 0) {
                  FUN_10a820f34(puVar6 + 2,lVar9 + 0x98);
                  plVar7 = (long *)puVar6[0x18];
                  if (plVar7 != (long *)0x0) {
                    puVar1 = (ulong *)(plVar7 + 1);
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
                        (**(code **)(*plVar7 + 8))();
                      }
                    }
                  }
                  plVar7 = (long *)puVar6[0x19];
                  if (plVar7 != (long *)0x0) {
                    puVar1 = (ulong *)(plVar7 + 1);
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
                        (**(code **)(*plVar7 + 8))();
                      }
                    }
                  }
                  FUN_10ae0f5dc(puVar6 + 9);
                  plVar7 = (long *)puVar6[0x17];
                  if (plVar7 != (long *)0x0) {
                    plVar12 = plVar7 + 1;
                    do {
                      lVar9 = *plVar12;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                      if (bVar4) {
                        *plVar12 = lVar9 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (lVar9 == 0) {
                      (**(code **)(*plVar7 + 0x10))(plVar7);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
                    }
                  }
                  func_0x000109d1a1d0(puVar6 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR___ZdlPv_110352258)(puVar6);
                  return;
                }
              }
              else {
                func_0x0001092af97c(lVar9 + 0x90);
              }
              goto LAB_10a838540;
            }
          }
          FUN_10a00946c(&UNK_10f67c3da);
        }
      }
      else {
        func_0x0001092af97c(plVar7 + 0x12);
      }
    }
  }
  else {
    func_0x0001092af97c(plVar7 + 0x12);
  }
LAB_10a838540:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a838544);
  (*pcVar5)();
}



/* Entry: 10a8386c0; end: 10a8387ab;  */

void FUN_10a8386c0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar6 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar6 + (param_2[1] - (long)puVar2));
  puVar3 = puVar6;
  puVar5 = puVar1;
  if (puVar2 != puVar6) {
    do {
      uVar8 = puVar3[1];
      uVar7 = *puVar3;
      puVar5[2] = puVar3[2];
      puVar5[1] = uVar8;
      *puVar5 = uVar7;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      uVar8 = puVar3[4];
      uVar7 = puVar3[3];
      uVar9 = *(undefined8 *)((long)puVar3 + 0x24);
      *(undefined8 *)((long)puVar5 + 0x2c) = *(undefined8 *)((long)puVar3 + 0x2c);
      *(undefined8 *)((long)puVar5 + 0x24) = uVar9;
      puVar5[4] = uVar8;
      puVar5[3] = uVar7;
      uVar8 = puVar3[8];
      uVar7 = puVar3[7];
      puVar5[9] = puVar3[9];
      puVar5[8] = uVar8;
      puVar5[7] = uVar7;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[7] = 0;
      puVar3 = puVar3 + 10;
      puVar5 = puVar5 + 10;
    } while (puVar3 != puVar2);
    do {
      func_0x00010a838804(puVar6);
      puVar6 = puVar6 + 10;
    } while (puVar6 != puVar2);
    puVar6 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar6;
  param_2[1] = puVar6;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10a8387ac; end: 10a8387bf;  */

void FUN_10a8387ac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar1 < (undefined8 *)0x333333333333334) {
    __Znwm((long)puVar1 * 0x50);
    return;
  }
  func_0x000109ffded8();
  if (*(char *)((long)puVar1 + 0x4f) < '\0') {
    __ZdlPv(puVar1[7]);
  }
  if (-1 < *(char *)((long)puVar1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*puVar1);
  return;
}



/* Entry: 10a8387c0; end: 10a83897b;  */

void FUN_10a8387c0(undefined8 *param_1)

{
  if (param_1 < (undefined8 *)0x333333333333334) {
    __Znwm((long)param_1 * 0x50);
    return;
  }
  func_0x000109ffded8();
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a83897c; end: 10a838993;  */

void FUN_10a83897c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a838994; end: 10a8389e3;  */

void FUN_10a838994(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x58))();
    (*(code *)**(undefined8 **)(lVar1 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a8389e4; end: 10a838a27;  */

void FUN_10a8389e4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a838a28; end: 10a838d2b;  */

void FUN_10a838a28(long *param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  char cStack_41;
  
  lVar5 = *param_3;
  plVar1 = (long *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  plVar6 = *(long **)(param_4 + 0x10);
  if (plVar6 == (long *)0x0) goto LAB_10a838c94;
  plStack_60 = (long *)0x0;
  plVar4 = (long *)plVar6[2];
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_60 = plVar4, plVar4 != (long *)0x0)) &&
     (plVar6[1] != 0)) {
    plVar6 = *(long **)(*plVar6 + 0x18);
    if (plVar1 != (long *)0x0) {
      plVar4 = plVar1 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      plVar4 = (long *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        plVar4 = param_1;
      }
      func_0x00010ae06f08(1,4,&UNK_10f67aaab,&UNK_10f67c6fc,0x484,&UNK_10f67c883,param_7,param_8,
                          plVar4);
    }
    lVar7 = *plVar6;
    plVar4 = &lStack_58;
    func_0x000107c2b054(plVar4,&UNK_10f67c8bc);
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (lVar7 != 0) {
      FUN_10a76bf84((double)((long)plVar4 - plVar6[1]) / 1000000.0,*(undefined8 *)(lVar7 + 0x8d8),
                    &lStack_58);
    }
    if (cStack_41 < '\0') {
      __ZdlPv(lStack_58);
      if (lVar5 != 0) goto LAB_10a838b44;
LAB_10a838b94:
      lStack_58 = 0;
      plStack_50 = (long *)0x0;
      if ((bRam000000011330a9e8 & 1) != 0) {
        plVar4 = (long *)*param_1;
        if (-1 < *(char *)((long)param_1 + 0x17)) {
          plVar4 = param_1;
        }
        func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67c6fc,0x488,&UNK_10f67c8e6,param_7,param_8,
                            plVar4);
      }
      (*(code *)plVar6[2])(plVar6 + 2);
    }
    else {
      if (lVar5 == 0) goto LAB_10a838b94;
LAB_10a838b44:
      ___dynamic_cast(lVar5,&PTR_DAT_110c42c58,&PTR_DAT_110c4a6a8,0);
      if (lVar5 == 0) goto LAB_10a838b94;
      if (plVar1 != (long *)0x0) {
        plVar4 = plVar1 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_58 = lVar5;
      plStack_50 = plVar1;
      (*(code *)plVar6[10])(&lStack_58,plVar6 + 10);
    }
    plVar6 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plVar4 = plStack_50 + 1;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plVar1 != (long *)0x0) {
      plVar6 = plVar1 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  if (plStack_60 != (long *)0x0) {
    plVar6 = plStack_60 + 1;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
    }
  }
LAB_10a838c94:
  if (plVar1 != (long *)0x0) {
    plVar6 = plVar1 + 1;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a838d2c; end: 10a838d4f;  */

long FUN_10a838d2c(long param_1)

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
    }
  }
  return param_1 + 8;
}



/* Entry: 10a838d50; end: 10a838e5f;  */

void FUN_10a838d50(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  plVar5 = *(long **)(param_2 + 0x10);
  if ((plVar5 != (long *)0x0) && (plVar3 = (long *)plVar5[2], plVar3 != (long *)0x0)) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      if (plVar5[1] != 0) {
        lVar6 = *plVar5;
        lVar7 = *(long *)(lVar6 + 0x18);
        puVar4 = auStack_48;
        func_0x000107c2b054(puVar4,&UNK_10f67c935);
        __ZNSt3__16chrono12steady_clock3nowEv();
        if (lVar7 != 0) {
          FUN_10a76bf84((double)((long)puVar4 - *(long *)(lVar6 + 0x20)) / 1000000.0,
                        *(undefined8 *)(lVar7 + 0x8d8),auStack_48);
        }
        if (cStack_31 < '\0') {
          __ZdlPv(auStack_48[0]);
        }
        (*(code *)**(undefined8 **)(lVar6 + 0x28))();
      }
      plVar5 = plVar3 + 1;
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  return;
}



/* Entry: 10a838e60; end: 10a838e83;  */

long FUN_10a838e60(long param_1)

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
    }
  }
  return param_1 + 8;
}



/* Entry: 10a838e84; end: 10a838ecf;  */

undefined8 * FUN_10a838e84(undefined8 *param_1)

{
  if (*(char *)(param_1 + 10) == '\x01') {
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      __ZdlPv(param_1[7]);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
  }
  return param_1;
}



/* Entry: 10a838ed0; end: 10a838fd3;  */

void FUN_10a838ed0(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  *param_1 = *param_3;
  *param_3 = 0;
  if (*param_2 != 0) {
    func_0x0001092b4274(param_2);
  }
  *param_2 = param_3[1];
  param_3[1] = 0;
  return;
}



/* Entry: 10a838fd4; end: 10a83904f;  */

void FUN_10a838fd4(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = (long *)param_1[3];
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a839050; end: 10a8390f3;  */

void FUN_10a839050(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)*param_1;
  if (plVar6 != (long *)0x0) {
    plVar7 = (long *)param_1[1];
    plVar4 = plVar6;
    if (plVar7 != plVar6) {
      do {
        plVar7 = plVar7 + -1;
        plVar4 = (long *)*plVar7;
        if (plVar4 != (long *)0x0) {
          puVar1 = (ulong *)(plVar4 + 1);
          do {
            uVar5 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar5 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar5 & 0x1fffffffc) == 4) {
            do {
              uVar5 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar5 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar5 - 1 == 0) {
              (**(code **)(*plVar4 + 8))();
            }
          }
        }
      } while (plVar7 != plVar6);
      plVar4 = (long *)*param_1;
    }
    param_1[1] = plVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar4);
    return;
  }
  return;
}



/* Entry: 10a8390f4; end: 10a839193;  */

undefined8 * FUN_10a8390f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  uVar3 = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x24) = uVar3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    func_0x000107c3192c(param_1 + 7,param_2[7],param_2[8]);
  }
  else {
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
  }
  return param_1;
}



/* Entry: 10a839194; end: 10a8391fb;  */

void FUN_10a839194(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x50;
        func_0x00010a838804(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a8391fc; end: 10a83926b;  */

void FUN_10a8391fc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puStack_30;
  long lStack_28;
  
  *param_1 = &PTR_DAT_110b1a560;
  param_1[1] = 0;
  param_1[3] = 0;
  uVar1 = (uint)param_2[1];
  puStack_30 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (uint)*(byte *)((long)param_2 + 0x17);
    puStack_30 = param_2;
  }
  lStack_28 = (long)(int)uVar1;
  func_0x000107c30348(param_1,&puStack_30);
  return;
}



/* Entry: 10a83926c; end: 10a8393cf;  */

long * FUN_10a83926c(undefined8 *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 *puStack_58;
  
  plVar12 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  lVar13 = (long)plVar2 - (long)plVar12 >> 3;
  uVar8 = lVar13 + 1;
  if (uVar8 >> 0x3d != 0) {
    FUN_10a8393d0();
LAB_10a8393cc:
    func_0x000109ffded8();
    plVar12 = (long *)&DAT_10f62a4d8;
    FUN_109ffde64();
    plVar2 = (long *)plVar12[1];
    plVar5 = (long *)plVar12[2];
    while (plVar5 != plVar2) {
      plVar5 = plVar5 + -1;
      plVar6 = (long *)*plVar5;
      plVar12[2] = (long)plVar5;
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar8 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
        plVar5 = (long *)plVar12[2];
      }
    }
    if (*plVar12 != 0) {
      __ZdlPv();
    }
    return plVar12;
  }
  uVar10 = param_1[2] - (long)plVar12 >> 2;
  if (uVar10 <= uVar8) {
    uVar10 = uVar8;
  }
  if (0x7ffffffffffffff7 < (ulong)(param_1[2] - (long)plVar12)) {
    uVar10 = 0x1fffffffffffffff;
  }
  puStack_58 = param_1;
  if (uVar10 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    if (uVar10 >> 0x3d != 0) goto LAB_10a8393cc;
    plVar5 = (long *)(uVar10 << 3);
    __Znwm();
  }
  plStack_70 = (long *)((long)plVar5 + ((long)plVar2 - (long)plVar12));
  plVar14 = plStack_70 + -lVar13;
  plStack_68 = plStack_70 + 1;
  *plStack_70 = *param_2;
  plStack_60 = plVar5 + uVar10;
  *param_2 = 0;
  plVar6 = plVar14;
  plVar7 = plVar12;
  plVar11 = plStack_68;
  if (plVar12 != plVar2) {
    do {
      *plVar6 = *plVar7;
      plVar11 = plVar7 + 1;
      *plVar7 = 0;
      plVar6 = plVar6 + 1;
      plVar7 = plVar11;
      plStack_78 = plVar5;
    } while (plVar11 != plVar2);
    do {
      plVar5 = (long *)*plVar12;
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar8 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar2);
    plVar12 = (long *)*param_1;
    plVar11 = plStack_68;
  }
  *param_1 = plVar14;
  param_1[1] = plVar11;
  uVar9 = param_1[2];
  param_1[2] = plStack_60;
  plStack_78 = plVar12;
  plStack_70 = plVar12;
  plStack_68 = plVar12;
  plStack_60 = (long *)uVar9;
  FUN_10a8393e4(&plStack_78);
  return plVar11;
}



/* Entry: 10a8393d0; end: 10a8393e3;  */

long * FUN_10a8393d0(void)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  plVar5 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  plVar2 = (long *)plVar5[1];
  plVar7 = (long *)plVar5[2];
  while (plVar7 != plVar2) {
    plVar7 = plVar7 + -1;
    plVar6 = (long *)*plVar7;
    plVar5[2] = (long)plVar7;
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      plVar7 = (long *)plVar5[2];
    }
  }
  if (*plVar5 != 0) {
    __ZdlPv();
  }
  return plVar5;
}



/* Entry: 10a8393e4; end: 10a83946f;  */

long * FUN_10a8393e4(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar2 = (long *)param_1[1];
  plVar6 = (long *)param_1[2];
  while (plVar6 != plVar2) {
    plVar6 = plVar6 + -1;
    plVar5 = (long *)*plVar6;
    param_1[2] = (long)plVar6;
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar7 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      plVar6 = (long *)param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a839470; end: 10a83962f;  */

long * FUN_10a839470(undefined8 *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined7 uStack_58;
  undefined1 uStack_51;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *param_1;
  uStack_58 = (undefined7)param_1[1];
  uVar8 = *(undefined8 *)((long)param_1 + 0xf);
  uStack_51 = (undefined1)uVar8;
  uVar3 = *(undefined1 *)((long)param_1 + 0x17);
  *param_1 = 0;
  param_1[1] = 0;
  uVar11 = param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  uVar17 = param_1[0xd];
  uVar12 = param_1[0xc];
  uVar26 = param_1[0xf];
  uVar22 = param_1[0xe];
  uVar18 = param_1[0x11];
  uVar13 = param_1[0x10];
  uVar19 = param_1[5];
  uVar14 = param_1[4];
  uVar27 = param_1[7];
  uVar23 = param_1[6];
  uVar28 = param_1[9];
  uVar24 = param_1[8];
  uVar20 = param_1[0xb];
  uVar15 = param_1[10];
  uVar21 = param_2[1];
  uVar16 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar21;
  *param_1 = uVar16;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  plVar6 = (long *)param_1[3];
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar10 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar10 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar10 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  param_1[3] = param_2[3];
  param_2[3] = 0;
  uVar21 = param_2[5];
  uVar16 = param_2[4];
  uVar25 = param_2[6];
  uVar30 = param_2[9];
  uVar29 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar25;
  param_1[9] = uVar30;
  param_1[8] = uVar29;
  param_1[5] = uVar21;
  param_1[4] = uVar16;
  uVar21 = param_2[0xb];
  uVar16 = param_2[10];
  uVar29 = param_2[0xd];
  uVar25 = param_2[0xc];
  uVar30 = param_2[0xe];
  uVar32 = param_2[0x11];
  uVar31 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar30;
  param_1[0x11] = uVar32;
  param_1[0x10] = uVar31;
  param_1[0xb] = uVar21;
  param_1[10] = uVar16;
  param_1[0xd] = uVar29;
  param_1[0xc] = uVar25;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __ZdlPv(*param_2);
  }
  *param_2 = uVar2;
  param_2[1] = CONCAT17(uStack_51,uStack_58);
  *(undefined8 *)((long)param_2 + 0xf) = uVar8;
  *(undefined1 *)((long)param_2 + 0x17) = uVar3;
  plVar6 = (long *)param_2[3];
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar10 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar10 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar10 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  param_2[3] = uVar11;
  param_2[0xd] = uVar17;
  param_2[0xc] = uVar12;
  param_2[0xf] = uVar26;
  param_2[0xe] = uVar22;
  param_2[0x11] = uVar18;
  param_2[0x10] = uVar13;
  param_2[5] = uVar19;
  param_2[4] = uVar14;
  param_2[7] = uVar27;
  param_2[6] = uVar23;
  param_2[9] = uVar28;
  param_2[8] = uVar24;
  param_2[0xb] = uVar20;
  param_2[10] = uVar15;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return plVar6;
  }
  ___stack_chk_fail();
  plVar6 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar7 = plVar6[1];
  lVar9 = plVar6[2];
  while (lVar9 != lVar7) {
    plVar6[2] = lVar9 + -0x90;
    FUN_10a838fd4();
    lVar9 = plVar6[2];
  }
  if (*plVar6 != 0) {
    __ZdlPv();
  }
  return plVar6;
}



/* Entry: 10a839630; end: 10a839643;  */

long * FUN_10a839630(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x90;
    FUN_10a838fd4();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a839644; end: 10a8396d3;  */

long * FUN_10a839644(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x90;
    FUN_10a838fd4();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a8396d4; end: 10a839887;  */

void FUN_10a8396d4(void)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  code *pcVar6;
  undefined1 uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *puVar11;
  long *plStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  code *pcStack_68;
  undefined **appuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puVar11 = *ppuVar8;
  pcStack_68 = (code *)&UNK_10f63b699;
  appuStack_60[0] = (undefined **)0x28;
  if (puVar11 == (undefined *)0x0) {
    FUN_10a0edfc4(&pcStack_68);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a839848);
    (*pcVar6)();
  }
  puVar9 = (undefined8 *)0x20;
  __Znwm();
  lStack_70 = -0x7fffffffffffffe0;
  uStack_78 = 0x1e;
  puVar9[1] = 0x454b52414d444e41;
  *puVar9 = 0x4c5f4d4f54535543;
  *(undefined8 *)((long)puVar9 + 0x16) = 0x52454b52414d5f47;
  *(undefined8 *)((long)puVar9 + 0xe) = 0x554245445f53454b;
  *(undefined1 *)((long)puVar9 + 0x1e) = 0;
  bVar5 = bRam00000001137ebdb8;
  pcStack_68 = FUN_10a839888;
  appuStack_60[0] = &PTR_DAT_110c21f58;
  plStack_90 = *(long **)(puVar11 + 0x10);
  plVar2 = *(long **)(puVar11 + 0x18);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_88 = plVar2;
  puStack_80 = puVar9;
  if (plStack_90 == (long *)0x0) {
    bRam00000001137ebdb8 = bVar5 & 1;
  }
  else {
    (**(code **)(*plStack_90 + 0x20))(plStack_90,&puStack_80,bVar5 & 1,&pcStack_68);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  uVar7 = SUB81(appuStack_60,0);
  (*(code *)*appuStack_60[0])();
  if (lStack_70 < 0) {
    puVar9 = puStack_80;
    __ZdlPv();
    uVar7 = SUB81(puVar9,0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a09e870(&plStack_90);
  (*(code *)*appuStack_60[0])(appuStack_60);
  if (lStack_70 < 0) {
    __ZdlPv(puStack_80);
  }
  __Unwind_Resume();
  bRam00000001137ebdb8 = uVar7;
  return;
}



/* Entry: 10a839888; end: 10a8398c7;  */

void FUN_10a839888(undefined1 param_1)

{
  uRam00000001137ebdb8 = param_1;
  return;
}



/* Entry: 10a8398c8; end: 10a839907;  */

void FUN_10a8398c8(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10a8398c8(*param_1);
    FUN_10a8398c8(param_1[1]);
    func_0x00010a052168(param_1 + 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a839908; end: 10a839cd7;  */

void FUN_10a839908(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x60;
  __Znwm();
  *puVar5 = FUN_10a85aae8;
  puVar5[1] = FUN_10a85add8;
  func_0x0001092ba17c(puVar5 + 2);
  lVar7 = puVar5[7];
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar7;
  lVar7 = *param_2;
  puVar5[9] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xb) = 0;
    lVar7 = puVar5[9];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar9 = *plVar6;
      if (lVar9 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a839b80;
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar9 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[9];
  if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(plVar6 + 0x14) & 1) != 0) {
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
      FUN_10a82d3b8(puVar5 + 10);
      puVar5[9] = puVar5[10];
      plVar6 = (long *)(puVar5[10] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar5 + 0xb) = 1;
        lVar7 = puVar5[9];
        plVar6 = (long *)(lVar7 + 0x10);
        uStack_38 = puVar5[3];
        do {
          lVar9 = *plVar6;
          if (lVar9 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
LAB_10a839b80:
              uStack_48 = 0;
              puStack_40 = puVar5;
              func_0x000109d1b588(lVar7 + 0x18,&uStack_48);
              *(undefined8 *)(lVar7 + 0x10) = 0;
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar9 >> 1 & 1) == 0);
      }
      plVar6 = (long *)puVar5[9];
      if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 5 & 1) == 0) {
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
        plVar6 = (long *)puVar5[10];
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
        func_0x0001092ba100(puVar5 + 2);
        func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar5);
        return;
      }
      func_0x0001092af97c(plVar6 + 0x12);
    }
  }
  else {
    func_0x0001092af97c(plVar6 + 0x12);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a839bc0);
  (*pcVar4)();
}



/* Entry: 10a839cd8; end: 10a83a00f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a839cd8(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long alStack_50 [2];
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  *puVar5 = FUN_10a85b2b8;
  puVar5[1] = FUN_10a85b514;
  FUN_10a851940(puVar5 + 2);
  lVar7 = puVar5[7];
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar7;
  puVar5[0xc] = *param_3;
  puVar5[9] = param_2;
  *(undefined1 *)(puVar5 + 10) = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  alStack_50[0] = 0;
  FUN_109d18960(puVar5 + 2,param_2,alStack_50);
  if (alStack_50[0] == 0) {
    puStack_40 = puVar5;
    if ((*(byte *)(puVar5 + 10) & 1) == 0) {
      puStack_38 = (undefined8 *)puVar5[9];
      alStack_50[1] = 0;
      (**(code **)*puStack_38)(puStack_38,alStack_50 + 1);
      __ZNSt13exception_ptrD1Ev(alStack_50);
      return;
    }
    __ZNSt13exception_ptrD1Ev(alStack_50);
    FUN_10a830808(puVar5 + 0xb,puVar5[0xc]);
    puVar5[9] = puVar5[0xb];
    plVar6 = (long *)(puVar5[0xb] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xd) = 1;
      lVar7 = puVar5[9];
      plVar6 = (long *)(lVar7 + 0x10);
      puStack_38 = (undefined8 *)puVar5[3];
      do {
        lVar9 = *plVar6;
        if (lVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            alStack_50[1] = 0;
            func_0x000109d1b588(lVar7 + 0x18,alStack_50 + 1);
            *(undefined8 *)(lVar7 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
    lVar7 = puVar5[9];
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar7 + 0xa8) & 1) != 0) {
        FUN_10a83a010(puVar5 + 2,lVar7 + 0x98);
        plVar6 = (long *)puVar5[9];
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
        plVar6 = (long *)puVar5[0xb];
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
        func_0x000109d1a1d0(puVar5 + 2);
        __ZdlPv(puVar5);
        return;
      }
    }
    else {
      func_0x0001092af97c(lVar7 + 0x90);
    }
  }
  else {
    func_0x0001092af97c(alStack_50);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a839f30);
  (*pcVar4)();
}



/* Entry: 10a83a010; end: 10a83a04f;  */

void FUN_10a83a010(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  FUN_10a6fceac(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
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
    FUN_109d1b3c4(plVar4,1,plVar6);
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



/* Entry: 10a83a050; end: 10a83a3cb;  */

/* WARNING: Removing unreachable block (ram,0x00010a83a13c) */

void FUN_10a83a050(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  *puVar5 = FUN_10a8574e4;
  puVar5[1] = FUN_10a8577d0;
  FUN_10a724b04(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  puVar5[0xb] = *param_3;
  *param_3 = 0;
  puVar5[9] = param_2;
  *(undefined1 *)(puVar5 + 10) = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  puVar6 = puVar5 + 9;
  FUN_10a70649c(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10a83a3cc(puVar5 + 0xc,puVar5 + 0xb);
    puVar5[9] = puVar5[0xc];
    plVar7 = (long *)(puVar5[0xc] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xd) = 1;
      lVar8 = puVar5[9];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar5[3];
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
            uStack_48 = 0;
            puStack_40 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    lVar8 = puVar5[9];
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar8 + 0xb0) & 1) != 0) {
        FUN_10a6f4ea0(puVar5 + 2,lVar8 + 0x98);
        plVar7 = (long *)puVar5[9];
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
        plVar7 = (long *)puVar5[0xc];
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
        plVar7 = (long *)puVar5[0xb];
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
        func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar5);
        return;
      }
    }
    else {
      func_0x0001092af97c(lVar8 + 0x90);
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a83a2b0);
    (*pcVar4)();
  }
  return;
}



/* Entry: 10a83a3cc; end: 10a83a663;  */

void FUN_10a83a3cc(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x68;
  __Znwm();
  *puVar5 = FUN_10a857198;
  puVar5[1] = FUN_10a8573bc;
  puVar5[0xb] = param_2;
  FUN_10a724b04(puVar5 + 2);
  lVar8 = puVar5[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar8;
  puVar5[10] = 0;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  puVar6 = puVar5 + 10;
  FUN_10a6f4dfc(puVar6,puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    lVar8 = *(long *)puVar5[0xb];
    puVar5[9] = puVar5[10];
    puVar5[10] = lVar8;
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xc) = 1;
      lVar8 = puVar5[10];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar5[3];
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
            uStack_48 = 0;
            puStack_40 = puVar5;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar5[10];
    if (((uint)*(undefined8 *)(puVar5[10] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(plVar7 + 0x14) & 1) != 0) {
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
        FUN_10a00946c(&UNK_10f67b849);
      }
    }
    else {
      func_0x0001092af97c(plVar7 + 0x12);
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a83a564);
    (*pcVar4)();
  }
  return;
}



/* Entry: 10a83a664; end: 10a83aa33;  */

void FUN_10a83a664(long *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x60;
  __Znwm();
  *puVar5 = FUN_10a8569c8;
  puVar5[1] = FUN_10a856cb8;
  func_0x0001092ba17c(puVar5 + 2);
  lVar7 = puVar5[7];
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar7;
  lVar7 = *param_2;
  puVar5[9] = lVar7;
  plVar6 = (long *)(lVar7 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0xb) = 0;
    lVar7 = puVar5[9];
    plVar6 = (long *)(lVar7 + 0x10);
    uStack_38 = puVar5[3];
    do {
      lVar9 = *plVar6;
      if (lVar9 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a83a8dc;
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar9 >> 1 & 1) == 0);
  }
  plVar6 = (long *)puVar5[9];
  if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(plVar6 + 0x14) & 1) != 0) {
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
      FUN_10a82d3b8(puVar5 + 10);
      puVar5[9] = puVar5[10];
      plVar6 = (long *)(puVar5[10] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar5 + 0xb) = 1;
        lVar7 = puVar5[9];
        plVar6 = (long *)(lVar7 + 0x10);
        uStack_38 = puVar5[3];
        do {
          lVar9 = *plVar6;
          if (lVar9 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
LAB_10a83a8dc:
              uStack_48 = 0;
              puStack_40 = puVar5;
              func_0x000109d1b588(lVar7 + 0x18,&uStack_48);
              *(undefined8 *)(lVar7 + 0x10) = 0;
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar9 >> 1 & 1) == 0);
      }
      plVar6 = (long *)puVar5[9];
      if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 5 & 1) == 0) {
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
        plVar6 = (long *)puVar5[10];
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
        func_0x0001092ba100(puVar5 + 2);
        func_0x000109d1a1d0(puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar5);
        return;
      }
      func_0x0001092af97c(plVar6 + 0x12);
    }
  }
  else {
    func_0x0001092af97c(plVar6 + 0x12);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a83a91c);
  (*pcVar4)();
}



/* Entry: 10a83aa34; end: 10a83b3d3;  */

/* WARNING: Removing unreachable block (ram,0x00010a83af98) */
/* WARNING: Removing unreachable block (ram,0x00010a83ab0c) */

void FUN_10a83aa34(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uVar11 = *param_2;
  puVar6 = (undefined8 *)0xb0;
  __Znwm();
  *puVar6 = FUN_10a859588;
  puVar6[1] = FUN_10a859dcc;
  puVar6[0x13] = param_2;
  puVar6[0x14] = uVar11;
  FUN_10a711e58(puVar6 + 2);
  lVar8 = puVar6[7];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar8;
  if (*(char *)(param_2 + 1) != '\x01') {
    FUN_10a830808(puVar6 + 0x12,uVar11);
    puVar6[0x11] = puVar6[0x12];
    plVar7 = (long *)(puVar6[0x12] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x11] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x15) = 2;
      lVar8 = puVar6[0x11];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar6[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_10a83b0b0;
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar7 = (long *)puVar6[0x11];
    if (((uint)*(undefined8 *)(puVar6[0x11] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar7 + 0x12);
      goto LAB_10a83b104;
    }
    if ((*(byte *)(plVar7 + 0x15) & 1) == 0) goto LAB_10a83b104;
    lVar10 = plVar7[0x13];
    puVar6[9] = lVar10;
    lVar8 = plVar7[0x14];
    puVar6[10] = lVar8;
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
    puVar2 = (ulong *)(plVar7 + 1);
    do {
      uVar9 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar9 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar9 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    plVar7 = (long *)puVar6[0x12];
    if (plVar7 != (long *)0x0) {
      puVar2 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar9 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar9 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    puVar6[0xf] = lVar10;
    puVar6[0x10] = lVar8;
    if (lVar8 != 0) {
      plVar7 = (long *)(lVar8 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a82fdb4(puVar6 + 0x12,puVar6[0x14],puVar6 + 0xf,*(undefined1 *)(puVar6[0x13] + 9));
    puVar6[0x11] = puVar6[0x12];
    plVar7 = (long *)(puVar6[0x12] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x11] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x15) = 3;
      lVar8 = puVar6[0x11];
      plVar7 = (long *)(lVar8 + 0x10);
      uStack_38 = puVar6[3];
      do {
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_10a83b0b0;
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    lVar8 = puVar6[0x11];
    if (((uint)*(undefined8 *)(puVar6[0x11] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(lVar8 + 0x90);
      goto LAB_10a83b104;
    }
    if ((*(byte *)(lVar8 + 0xa8) & 1) == 0) goto LAB_10a83b104;
    FUN_10a6fd6b4(puVar6 + 2,lVar8 + 0x98);
    plVar7 = (long *)puVar6[0x11];
    if (plVar7 != (long *)0x0) {
      puVar2 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar9 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar9 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)puVar6[0x12];
    if (plVar7 != (long *)0x0) {
      puVar2 = (ulong *)(plVar7 + 1);
      do {
        uVar9 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar9 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar9 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)puVar6[0x10];
    if (plVar7 != (long *)0x0) {
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
    plVar7 = (long *)puVar6[10];
    if (plVar7 != (long *)0x0) {
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
    goto LAB_10a83b088;
  }
  FUN_10a8313f8(puVar6 + 0x12,uVar11);
  puVar6[0x11] = puVar6[0x12];
  plVar7 = (long *)(puVar6[0x12] + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0x11] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x15) = 0;
    lVar8 = puVar6[0x11];
    plVar7 = (long *)(lVar8 + 0x10);
    uStack_38 = puVar6[3];
    do {
      lVar10 = *plVar7;
      if (lVar10 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_10a83b0b0;
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  plVar7 = (long *)puVar6[0x11];
  if (((uint)*(undefined8 *)(puVar6[0x11] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar7 + 0x12);
    goto LAB_10a83b104;
  }
  if ((*(byte *)(plVar7 + 0x16) & 1) == 0) goto LAB_10a83b104;
  if (*(char *)((long)plVar7 + 0xaf) < '\0') {
    func_0x000107c3192c(puVar6 + 9,plVar7[0x13],plVar7[0x14]);
    plVar7 = (long *)puVar6[0x11];
    if (plVar7 != (long *)0x0) goto LAB_10a83ae90;
  }
  else {
    lVar10 = plVar7[0x14];
    lVar8 = plVar7[0x13];
    puVar6[0xb] = plVar7[0x15];
    puVar6[10] = lVar10;
    puVar6[9] = lVar8;
LAB_10a83ae90:
    puVar2 = (ulong *)(plVar7 + 1);
    do {
      uVar9 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar9 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar9 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  plVar7 = (long *)puVar6[0x12];
  if (plVar7 != (long *)0x0) {
    puVar2 = (ulong *)(plVar7 + 1);
    do {
      uVar9 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar9 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar9 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  puVar6[0xd] = puVar6[10];
  puVar6[0xc] = puVar6[9];
  puVar6[0xe] = puVar6[0xb];
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  FUN_10a831590(puVar6 + 0x12,puVar6[0x14],puVar6 + 0xc,*(undefined1 *)(puVar6[0x13] + 9));
  puVar6[0x11] = puVar6[0x12];
  plVar7 = (long *)(puVar6[0x12] + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0x11] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x15) = 1;
    lVar8 = puVar6[0x11];
    plVar7 = (long *)(lVar8 + 0x10);
    uStack_38 = puVar6[3];
    do {
      lVar10 = *plVar7;
      if (lVar10 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
LAB_10a83b0b0:
          uStack_48 = 0;
          puStack_40 = puVar6;
          func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  lVar8 = puVar6[0x11];
  if (((uint)*(undefined8 *)(puVar6[0x11] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar8 + 0xa8) & 1) != 0) {
      FUN_10a6fd6b4(puVar6 + 2,lVar8 + 0x98);
      plVar7 = (long *)puVar6[0x11];
      if (plVar7 != (long *)0x0) {
        puVar2 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar9 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar9 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      plVar7 = (long *)puVar6[0x12];
      if (plVar7 != (long *)0x0) {
        puVar2 = (ulong *)(plVar7 + 1);
        do {
          uVar9 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar9 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar9 & 0x1fffffffc) == 4) {
          do {
            uVar9 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar9 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar9 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      if (*(char *)((long)puVar6 + 0x77) < '\0') {
        __ZdlPv(puVar6[0xc]);
      }
      if (*(char *)((long)puVar6 + 0x5f) < '\0') {
        __ZdlPv(puVar6[9]);
      }
LAB_10a83b088:
      func_0x000109d1a1d0(puVar6 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar6);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar8 + 0x90);
  }
LAB_10a83b104:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a83b108);
  (*pcVar5)();
}



/* Entry: 10a83b3d4; end: 10a83b73f;  */

void FUN_10a83b3d4(long *param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  lVar10 = param_2[1];
  puVar6 = (undefined8 *)0x78;
  __Znwm();
  *puVar6 = FUN_10a85a3ec;
  puVar6[1] = FUN_10a85a658;
  puVar6[0xc] = param_2;
  puVar6[0xd] = lVar10;
  func_0x0001092ba17c(puVar6 + 2);
  lVar10 = puVar6[7];
  if (lVar10 != 0) {
    plVar7 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar10;
  puVar6[9] = 0;
  puVar6[10] = 0;
  lVar10 = *param_2;
  puVar6[0xb] = lVar10;
  plVar7 = (long *)(lVar10 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0xb] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0xe) = 0;
    lVar10 = puVar6[0xb];
    plVar7 = (long *)(lVar10 + 0x10);
    uStack_38 = puVar6[3];
    do {
      lVar9 = *plVar7;
      if (lVar9 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          uStack_48 = 0;
          puStack_40 = puVar6;
          func_0x000109d1b588(lVar10 + 0x18,&uStack_48);
          *(undefined8 *)(lVar10 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar9 >> 1 & 1) == 0);
  }
  lVar10 = puVar6[0xb];
  if (((uint)*(undefined8 *)(puVar6[0xb] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar10 + 0xa8) & 1) != 0) {
      FUN_10a6e467c(puVar6 + 9,lVar10 + 0x98);
      plVar7 = (long *)puVar6[0xb];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar8 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      if ((puVar6[9] != 0) && ((*(byte *)(puVar6[0xd] + 0xe3) & 1) == 0)) {
        FUN_10a83b79c(*(undefined8 *)(puVar6[0xd] + 0xa8),puVar6 + 9);
      }
      plVar7 = (long *)puVar6[10];
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 1;
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
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      func_0x0001092ba100(puVar6 + 2);
      func_0x000109d1a1d0(puVar6 + 2);
      __ZdlPv(puVar6);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar10 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a83b5d0);
  (*pcVar5)();
}



/* Entry: 10a83b740; end: 10a83b79b;  */

void FUN_10a83b740(undefined8 *param_1)

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



/* Entry: 10a83b79c; end: 10a83bae3;  */

void FUN_10a83b79c(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong unaff_x26;
  long lVar14;
  long lStack_90;
  ulong uStack_88;
  long *plStack_80;
  long lStack_78;
  float fStack_70;
  long *plStack_68;
  
  uStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  plStack_80 = (long *)0x0;
  fStack_70 = *(float *)(param_1 + 0x38);
  FUN_10a83bae4(&lStack_90,*(undefined8 *)(param_1 + 0x20));
  plVar13 = *(long **)(param_1 + 0x28);
  plVar11 = plStack_80;
  if (plVar13 != (long *)0x0) {
    do {
      uVar8 = uStack_88;
      uVar5 = plVar13[2];
      uVar10 = ((ulong)(uint)((int)uVar5 << 3) + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
      uVar10 = (uVar5 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
      uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
      if (uStack_88 != 0) {
        uVar7 = uStack_88 - 1;
        if ((uStack_88 & uVar7) == 0) {
          unaff_x26 = uVar10 & uVar7;
        }
        else {
          unaff_x26 = uVar10;
          if (uStack_88 <= uVar10) {
            uVar12 = 0;
            if (uStack_88 != 0) {
              uVar12 = uVar10 / uStack_88;
            }
            unaff_x26 = uVar10 - uVar12 * uStack_88;
          }
        }
        plVar11 = *(long **)(lStack_90 + unaff_x26 * 8);
        if (plVar11 != (long *)0x0) {
          do {
            while( true ) {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_10a83b8b8;
              uVar12 = plVar11[1];
              if (uVar12 != uVar10) break;
              if (plVar11[2] == uVar5) goto LAB_10a83ba18;
            }
            if ((uStack_88 & uVar7) == 0) {
              uVar12 = uVar12 & uVar7;
            }
            else if (uStack_88 <= uVar12) {
              uVar3 = 0;
              if (uStack_88 != 0) {
                uVar3 = uVar12 / uStack_88;
              }
              uVar12 = uVar12 - uVar3 * uStack_88;
            }
          } while (uVar12 == unaff_x26);
        }
      }
LAB_10a83b8b8:
      plVar11 = (long *)0x68;
      __Znwm();
      *plVar11 = 0;
      plVar11[1] = uVar10;
      lVar6 = plVar13[3];
      lVar14 = plVar13[2];
      plVar11[3] = plVar13[3];
      plVar11[2] = lVar14;
      if (lVar6 != 0) {
        plVar9 = (long *)(lVar6 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_68 = plVar11 + 4;
      *(undefined1 *)(plVar11 + 0xc) = 3;
      if ((char)plVar13[0xc] == '\0') {
        uVar4 = 0;
      }
      else {
        FUN_10a005398(&plStack_68,plVar13 + 4);
        uVar4 = (undefined1)plVar13[0xc];
      }
      *(undefined1 *)(plVar11 + 0xc) = uVar4;
      if ((uVar8 == 0) || (fStack_70 * (float)uVar8 < (float)(lStack_78 + 1))) {
        uVar5 = 1;
        if (2 < uVar8) {
          uVar5 = (ulong)((uVar8 & uVar8 - 1) != 0);
        }
        uVar5 = uVar5 | uVar8 << 1;
        uVar8 = (ulong)((float)(lStack_78 + 1) / fStack_70);
        if (uVar5 <= uVar8) {
          uVar5 = uVar8;
        }
        FUN_10a83bae4(&lStack_90,uVar5);
        uVar8 = uStack_88;
        if ((uStack_88 & uStack_88 - 1) == 0) {
          unaff_x26 = uStack_88 - 1 & uVar10;
        }
        else {
          unaff_x26 = uVar10;
          if (uStack_88 <= uVar10) {
            uVar5 = 0;
            if (uStack_88 != 0) {
              uVar5 = uVar10 / uStack_88;
            }
            unaff_x26 = uVar10 - uVar5 * uStack_88;
          }
        }
      }
      plVar9 = *(long **)(lStack_90 + unaff_x26 * 8);
      if (plVar9 == (long *)0x0) {
        *plVar11 = (long)plStack_80;
        *(long ***)(lStack_90 + unaff_x26 * 8) = &plStack_80;
        plStack_80 = plVar11;
        if (*plVar11 != 0) {
          uVar5 = *(ulong *)(*plVar11 + 8);
          if ((uVar8 & uVar8 - 1) == 0) {
            uVar5 = uVar5 & uVar8 - 1;
          }
          else if (uVar8 <= uVar5) {
            uVar10 = 0;
            if (uVar8 != 0) {
              uVar10 = uVar5 / uVar8;
            }
            uVar5 = uVar5 - uVar10 * uVar8;
          }
          *(long **)(lStack_90 + uVar5 * 8) = plVar11;
        }
      }
      else {
        *plVar11 = *plVar9;
        *plVar9 = (long)plVar11;
      }
      lStack_78 = lStack_78 + 1;
LAB_10a83ba18:
      plVar13 = (long *)*plVar13;
      plVar11 = plStack_80;
    } while (plVar13 != (long *)0x0);
  }
  for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
    lVar6 = param_1 + 0x18;
    FUN_10a83bd84(lVar6,plVar11[2]);
    if (lVar6 != 0) {
      if ((char)plVar11[0xc] == '\x01') {
        (*(code *)plVar11[4])(param_2,plVar11 + 4);
      }
      else if ((char)plVar11[0xc] == '\x02') {
        FUN_10a70048c(plVar11 + 4,param_2);
      }
    }
  }
  FUN_10a83bd04(&lStack_90);
  return;
}



/* Entry: 10a83bae4; end: 10a83bcb3;  */

void FUN_10a83bae4(long *param_1,long *param_2)

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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a83bd04);
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



/* Entry: 10a83bcb4; end: 10a83bd03;  */

void FUN_10a83bcb4(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a83bd04);
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



/* Entry: 10a83bd04; end: 10a83bd83;  */

long * FUN_10a83bd04(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[2];
  while( true ) {
    if (plVar1 == (long *)0x0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    if (3 < (ulong)*(byte *)(plVar1 + 0xc)) break;
    lVar3 = *plVar1;
    (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(plVar1 + 0xc)])(plVar1 + 4);
    FUN_10a004978(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a83bd84);
  (*pcVar2)();
}



/* Entry: 10a83bd84; end: 10a83be57;  */

long * FUN_10a83bd84(long *param_1,long param_2)

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



/* Entry: 10a83be58; end: 10a83c18b;  */

undefined8 * FUN_10a83be58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c20e98;
  FUN_10a7274b4(param_1 + 10);
  FUN_10a727d80(param_1 + 8);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  FUN_10a0772f0(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a83c18c; end: 10a83c1bb;  */

long * FUN_10a83c18c(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((*param_2 != 0) && (*(char *)(*param_2 + 0xe0) != '\x04')) {
    lVar13 = param_2[1];
    lVar11 = *param_2;
    if (param_2[1] != 0) {
      plVar12 = (long *)(param_2[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = *plVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar12 = *(long **)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar13;
    *(long *)(param_1 + 0x18) = lVar11;
    if (plVar12 != (long *)0x0) {
      plVar7 = plVar12 + 1;
      do {
        lVar11 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    return (long *)(param_1 + 0x18);
  }
  plVar12 = (long *)&UNK_10f67ca5b;
  FUN_10a00946c();
  plVar7 = plVar12;
  (**(code **)(*plVar12 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = plVar12;
  FUN_10a83c390(plVar12,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a080b34(extraout_x8,plVar12,plVar8 + 3);
  plVar12 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar12[lVar11 + 2];
    if (plVar7[0x5a] == uVar9) {
      return plVar12;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return plVar12;
    }
  }
  lVar11 = *plVar12;
  plVar8 = (long *)plVar7[0x4c];
  lVar13 = (long)plVar8 - lVar11;
  uVar16 = lVar13 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - (long)plVar8 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar12;
        if (uVar10 >> 0x3c == 0) {
          lVar6 = uVar10 << 4;
          __Znwm();
          lVar1 = lVar6 + lVar13;
          _bzero(lVar1,uVar17 * 0x10);
          lVar14 = lVar1 + uVar16 * -0x10;
          _memcpy(lVar14,lVar11,lVar13);
          *plVar12 = lVar14;
          plVar7[0x4c] = lVar1 + uVar17 * 0x10;
          plVar7[0x4d] = lVar6 + uVar10 * 0x10;
          plVar12 = &lStack_98;
          lStack_98 = lVar11;
          lStack_90 = lVar11;
          lStack_88 = lVar11;
          lStack_80 = lVar15;
          func_0x00010988c1b8(plVar12);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    plVar12 = plVar8;
    _bzero(plVar8,uVar17 * 0x10);
    plVar7[0x4c] = (long)(plVar8 + uVar17 * 2);
  }
  else if (uVar9 < uVar16) {
    plVar2 = (long *)(lVar11 + uVar9 * 0x10);
    while (plVar8 != plVar2) {
      plVar8 = plVar8 + -2;
      plVar12 = plVar8;
      func_0x00010988c204(plVar8);
    }
    plVar7[0x4c] = (long)plVar2;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return plVar12;
}



/* Entry: 10a83c1bc; end: 10a83c273;  */

void FUN_10a83c1bc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a83c390(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a080b34(param_1,param_2,plVar4 + 3);
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



/* Entry: 10a83c274; end: 10a83c38f;  */

void FUN_10a83c274(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a83c3f8(param_2,param_3);
  FUN_10a080bb8(param_5);
  FUN_10a079938(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a83c18c(plVar6,&stack0xffffffffffffffb0);
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


