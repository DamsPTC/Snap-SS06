/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c44adc; end: 104c44ae7;  */

long FUN_104c44adc(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar3 = (ulong *)(param_1 + 0x58);
  uVar1 = *puVar3;
  puVar2 = (ulong *)(param_1 + 0x28);
  if (uVar1 != 0) {
    if (*(long *)(param_1 + 0x68) == 0) {
      if ((uVar1 & 1) == 0) {
        uVar4 = 1;
        puVar5 = puVar3;
code_r0x00010adef564:
        do {
          if ((long *)*puVar5 != (long *)0x0) {
            (**(code **)(*(long *)*puVar5 + 8))();
          }
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 != 0);
        uVar1 = *puVar3;
        if ((uVar1 & 1) == 0) goto code_r0x00010adef58c;
      }
      else {
        uVar4 = (ulong)*(uint *)(uVar1 - 1);
        if (0 < (int)*(uint *)(uVar1 - 1)) {
          puVar5 = (ulong *)(uVar1 + 7);
          goto code_r0x00010adef564;
        }
      }
      __ZdlPv(uVar1 - 1);
    }
code_r0x00010adef58c:
    *puVar3 = 0;
  }
  puVar3 = (ulong *)(param_1 + 0x40);
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if (*(long *)(param_1 + 0x50) == 0) {
      if ((uVar1 & 1) == 0) {
        uVar4 = 1;
        puVar5 = puVar3;
code_r0x00010adef5d0:
        do {
          if ((long *)*puVar5 != (long *)0x0) {
            (**(code **)(*(long *)*puVar5 + 8))();
          }
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 != 0);
        uVar1 = *puVar3;
        if ((uVar1 & 1) == 0) goto code_r0x00010adef5f8;
      }
      else {
        uVar4 = (ulong)*(uint *)(uVar1 - 1);
        if (0 < (int)*(uint *)(uVar1 - 1)) {
          puVar5 = (ulong *)(uVar1 + 7);
          goto code_r0x00010adef5d0;
        }
      }
      __ZdlPv(uVar1 - 1);
    }
code_r0x00010adef5f8:
    *puVar3 = 0;
  }
  uVar1 = *puVar2;
  if (uVar1 == 0) {
    return param_1 + 0x18;
  }
  if (*(long *)(param_1 + 0x38) != 0) goto code_r0x00010adef660;
  if ((uVar1 & 1) == 0) {
    uVar4 = 1;
    puVar3 = puVar2;
code_r0x00010adef638:
    do {
      if ((long *)*puVar3 != (long *)0x0) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 != 0);
    uVar1 = *puVar2;
    if ((uVar1 & 1) == 0) goto code_r0x00010adef660;
  }
  else {
    uVar4 = (ulong)*(uint *)(uVar1 - 1);
    if (0 < (int)*(uint *)(uVar1 - 1)) {
      puVar3 = (ulong *)(uVar1 + 7);
      goto code_r0x00010adef638;
    }
  }
  __ZdlPv(uVar1 - 1);
code_r0x00010adef660:
  *puVar2 = 0;
  return param_1 + 0x18;
}



/* Entry: 104c44ae8; end: 104c44cdb;  */

undefined8 *
FUN_104c44ae8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = &PTR_FUN_1107ebcf8;
  lVar5 = param_2[1];
  uVar7 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar7;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = param_3[1];
  uVar7 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar7;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  *(undefined8 *)((long)param_1 + 0x61) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000100033dac(param_1 + 0x10,*param_4,param_4[1]);
  }
  else {
    uVar8 = param_4[1];
    uVar7 = *param_4;
    param_1[0x12] = param_4[2];
    param_1[0x11] = uVar8;
    param_1[0x10] = uVar7;
  }
  param_1[0x13] = 0x32aaaba7;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x32aaaba7;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  FUN_104c44cdc(param_1);
  puVar4 = (undefined8 *)0x28;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_1107ebd38;
  puVar4[3] = &PTR_FUN_1107ebb18;
  puVar4[4] = param_1;
  plVar6 = (long *)param_1[0x24];
  param_1[0x23] = puVar4 + 3;
  param_1[0x24] = puVar4;
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
  return param_1;
}



/* Entry: 104c44cdc; end: 104c44e73;  */

void FUN_104c44cdc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  char acStack_60 [8];
  undefined2 uStack_58;
  undefined1 uStack_56;
  char cStack_49;
  char *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (char *)0x20;
  __Znwm();
  lStack_38 = -0x7fffffffffffffe0;
  uStack_40 = 0x18;
  builtin_strncpy(pcVar5,"aws.api.snapchat.com:443",0x19);
  cStack_49 = '\n';
  uStack_58 = 0x7473;
  builtin_strncpy(acStack_60,"asrReque",8);
  uStack_56 = 0;
  pcStack_48 = pcVar5;
  FUN_104c36a04(&uStack_30,&pcStack_48,param_1 + 0x80,acStack_60,*(long *)(param_1 + 0x18) + 0x100,
                *(long *)(param_1 + 0x18) + 0xd0,0);
  plVar1 = plStack_28;
  uVar4 = uStack_30;
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  plVar7 = *(long **)(param_1 + 0x40);
  *(long **)(param_1 + 0x40) = plVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar7 = plStack_28 + 1;
    do {
      lVar6 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (cStack_49 < '\0') {
    __ZdlPv(acStack_60);
  }
  if (lStack_38 < 0) {
    __ZdlPv(pcStack_48);
    return;
  }
  return;
}



/* Entry: 104c44e74; end: 104c45067;  */

long FUN_104c44e74(long param_1)

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



/* Entry: 104c45068; end: 104c452e3;  */

undefined8 * FUN_104c45068(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = param_1 + 0x1b;
  *param_1 = &PTR_FUN_1107ebcf8;
  __ZNSt3__15mutex4lockEv(puVar5);
  if (param_1[0x23] != 0) {
    *(undefined8 *)(param_1[0x23] + 8) = 0;
    plVar6 = (long *)param_1[0x24];
    param_1[0x23] = 0;
    param_1[0x24] = 0;
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
  }
  FUN_104c452e4(param_1);
  __ZNSt3__15mutex6unlockEv(puVar5);
  plVar6 = (long *)param_1[0x27];
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
  plVar6 = (long *)param_1[0x24];
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
      __ZNSt3__15mutexD1Ev(puVar5);
      __ZNSt3__15mutexD1Ev(param_1 + 0x13);
      cVar2 = *(char *)((long)param_1 + 0x97);
      goto joined_r0x000104c45158;
    }
  }
  __ZNSt3__15mutexD1Ev(puVar5);
  __ZNSt3__15mutexD1Ev(param_1 + 0x13);
  cVar2 = *(char *)((long)param_1 + 0x97);
joined_r0x000104c45158:
  if (cVar2 < '\0') {
    __ZdlPv(param_1[0x10]);
  }
  plVar6 = (long *)param_1[0xd];
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
  __ZNSt3__16threadD1Ev(param_1 + 0xb);
  plVar6 = (long *)param_1[10];
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
  plVar6 = (long *)param_1[8];
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
  plVar6 = (long *)param_1[6];
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
  plVar6 = (long *)param_1[4];
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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c452e4; end: 104c4541b;  */

/* WARNING: Removing unreachable block (ram,0x000104c45384) */

void FUN_104c452e4(long param_1)

{
  undefined ***pppuVar1;
  undefined8 *puVar2;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  FUN_104c4bb14();
  lStack_48 = 0;
  uStack_40 = 0;
  ppuStack_58 = &PTR_FUN_1107eb688;
  lStack_50 = 0;
  uStack_38 = 1;
  pppuVar1 = &ppuStack_58;
  FUN_104c37260(pppuVar1,0);
  (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,pppuVar1,1);
  ppuStack_58 = &PTR_DAT_1107eb6f0;
  if (lStack_50 != 0) {
    for (; lStack_50 != lStack_48; lStack_48 = lStack_48 + -0x18) {
    }
    lStack_48 = lStack_50;
    __ZdlPv(lStack_50);
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x98);
  *(undefined1 *)(*(long *)(param_1 + 0x130) + 8) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  *(undefined1 *)(puVar2 + 0x15) = 1;
  (**(code **)(*(long *)*puVar2 + 0x18))();
  if (*(long *)(param_1 + 0x58) != 0) {
    __ZNSt3__16thread4joinEv();
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x98);
  return;
}



/* Entry: 104c4541c; end: 104c4541f;  */

undefined8 * FUN_104c4541c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = param_1 + 0x1b;
  *param_1 = &PTR_FUN_1107ebcf8;
  __ZNSt3__15mutex4lockEv(puVar5);
  if (param_1[0x23] != 0) {
    *(undefined8 *)(param_1[0x23] + 8) = 0;
    plVar6 = (long *)param_1[0x24];
    param_1[0x23] = 0;
    param_1[0x24] = 0;
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
  }
  FUN_104c452e4(param_1);
  __ZNSt3__15mutex6unlockEv(puVar5);
  plVar6 = (long *)param_1[0x27];
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
  plVar6 = (long *)param_1[0x24];
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
      __ZNSt3__15mutexD1Ev(puVar5);
      __ZNSt3__15mutexD1Ev(param_1 + 0x13);
      cVar2 = *(char *)((long)param_1 + 0x97);
      goto joined_r0x000104c45158;
    }
  }
  __ZNSt3__15mutexD1Ev(puVar5);
  __ZNSt3__15mutexD1Ev(param_1 + 0x13);
  cVar2 = *(char *)((long)param_1 + 0x97);
joined_r0x000104c45158:
  if (cVar2 < '\0') {
    __ZdlPv(param_1[0x10]);
  }
  plVar6 = (long *)param_1[0xd];
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
  __ZNSt3__16threadD1Ev(param_1 + 0xb);
  plVar6 = (long *)param_1[10];
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
  plVar6 = (long *)param_1[8];
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
  plVar6 = (long *)param_1[6];
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
  plVar6 = (long *)param_1[4];
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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c45420; end: 104c45433;  */

void FUN_104c45420(void)

{
  FUN_104c45068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c45434; end: 104c45bcb;  */

/* WARNING: Removing unreachable block (ram,0x000104c459e4) */

long * FUN_104c45434(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined ***pppuVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lStack_1d0;
  long *plStack_1c8;
  undefined **ppuStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  char cStack_110;
  long alStack_100 [2];
  undefined1 uStack_f0;
  undefined1 uStack_c8;
  undefined2 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  long *plStack_48;
  
  plVar9 = &lStack_1d0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x13);
  if (param_1[0xb] != 0) {
    param_1 = param_1 + 0x13;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1);
    return param_1;
  }
  param_1[0xf] = param_2;
  puVar4 = (undefined8 *)0x108;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1107ebd88;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar5 = (undefined8 *)0x78;
  __Znwm();
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_1107ebca8;
  puVar5[1] = 0;
  puVar5[4] = 0;
  puVar5[3] = &PTR_DAT_110c76720;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[0xc] = 0;
  puVar5[0xb] = 0;
  *(undefined8 *)((long)puVar5 + 0x6c) = 0;
  *(undefined8 *)((long)puVar5 + 100) = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[6] = puVar5 + 3;
  puVar4[7] = puVar5;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[0x15] = 0;
  puVar4[0x14] = 0;
  puVar4[0x16] = 0;
  *(undefined1 *)(puVar4 + 0x18) = 0;
  puVar4[0x1f] = 0;
  puVar4[0x20] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0;
  lVar6 = 32000;
  __Znwm();
  puVar4[0x1e] = lVar6;
  puVar4[0x1f] = lVar6;
  puVar4[0x20] = lVar6 + 32000;
  plVar12 = (long *)param_1[0xd];
  param_1[0xc] = (long)(puVar4 + 3);
  param_1[0xd] = (long)puVar4;
  if (plVar12 != (long *)0x0) {
    plVar11 = plVar12 + 1;
    do {
      lVar6 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      *(undefined1 *)(param_1[0xc] + 0xa8) = 0;
      lVar6 = param_1[0x26];
      goto joined_r0x000104c4556c;
    }
  }
  *(undefined1 *)(param_1[0xc] + 0xa8) = 0;
  lVar6 = param_1[0x26];
joined_r0x000104c4556c:
  if (lVar6 == 0) {
    (**(code **)(*param_1 + 0x18))(&ppuStack_1c0,param_1,param_1[3] + 8,param_2);
    plVar12 = plStack_1b8;
    ppuVar8 = ppuStack_1c0;
    ppuStack_1c0 = (undefined **)0x0;
    plStack_1b8 = (long *)0x0;
    plVar11 = (long *)param_1[0x27];
    param_1[0x27] = (long)plVar12;
    param_1[0x26] = (long)ppuVar8;
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 1;
      do {
        lVar6 = *plVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *plVar12 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    plVar12 = plStack_1b8;
    if (plStack_1b8 != (long *)0x0) {
      plVar11 = plStack_1b8 + 1;
      do {
        lVar6 = *plVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    lVar6 = param_1[0x26];
  }
  *(undefined1 *)(lVar6 + 8) = 1;
  alStack_100[1] = 1;
  alStack_100[0] = 3600000;
  uStack_f0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0x101;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  func_0x000100627360(&ppuStack_1c0,alStack_100);
  cStack_110 = '\x01';
  plStack_1c8 = (long *)param_1[0x27];
  lStack_1d0 = param_1[0x26];
  if (param_1[0x27] != 0) {
    plVar12 = (long *)(param_1[0x27] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = *plVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (**(code **)(*param_1 + 0x10))(&puStack_50,param_1,&ppuStack_1c0,&lStack_1d0);
  plVar12 = plStack_48;
  puVar4 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  plStack_48 = (long *)0x0;
  plVar11 = (long *)param_1[10];
  param_1[10] = (long)plVar12;
  param_1[9] = (long)puVar4;
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 1;
    do {
      lVar6 = *plVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar12 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar11 = plStack_48 + 1;
    do {
      lVar6 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = plStack_1c8;
  if (plStack_1c8 != (long *)0x0) {
    plVar11 = plStack_1c8 + 1;
    do {
      lVar6 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (cStack_110 == '\x01') {
    func_0x000100627b64(&ppuStack_1c0);
  }
  plVar12 = (long *)param_1[0xc];
  lVar13 = param_1[10];
  lVar6 = param_1[9];
  if (param_1[10] != 0) {
    plVar11 = (long *)(param_1[10] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar11 = (long *)plVar12[1];
  plVar12[1] = lVar13;
  *plVar12 = lVar6;
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 1;
    do {
      lVar6 = *plVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  ppuStack_1c0 = &PTR_SUB_110c768b0;
  plStack_1b8 = (long *)0x0;
  uStack_1a8 = 0;
  func_0x00010adea37c(&ppuStack_1c0);
  uStack_1a8 = CONCAT44(1,(undefined4)uStack_1a8);
  plVar12 = plStack_1b8;
  if (((ulong)plStack_1b8 & 1) != 0) {
    plVar12 = *(long **)((ulong)plStack_1b8 & 0xfffffffffffffffe);
  }
  FUN_104c45db4();
  *(uint *)(plVar12 + 2) = *(uint *)(plVar12 + 2) | 1;
  uVar7 = plVar12[3];
  plStack_1b0 = plVar12;
  if (uVar7 == 0) {
    uVar7 = plVar12[1];
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000104c45e58();
    plVar12[3] = uVar7;
  }
  FUN_104c483b0();
  __ZNSt3__16chrono12steady_clock3nowEv();
  puVar4 = (undefined8 *)param_1[0xc];
  puVar4[2] = uVar7;
  plVar12 = (long *)*puVar4;
  puStack_50 = (undefined8 *)param_1[0x23];
  plStack_48 = (long *)param_1[0x24];
  if (plStack_48 != (long *)0x0) {
    plVar11 = plStack_48 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (**(code **)(*plVar12 + 0x10))(plVar12,&ppuStack_1c0,&puStack_50);
  plVar12 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar11 = plStack_48 + 1;
    do {
      lVar6 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (((ulong)plStack_1b8 & 1) != 0) {
    func_0x0001053936ac(&plStack_1b8);
  }
  if (uStack_1a8._4_4_ != 0) {
    func_0x00010adea37c(&ppuStack_1c0);
  }
  ppuVar8 = (undefined **)0x8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  puVar4 = (undefined8 *)0x10;
  ppuStack_1c0 = ppuVar8;
  __Znwm();
  ppuStack_1c0 = (undefined **)0x0;
  *puVar4 = ppuVar8;
  puVar4[1] = param_1;
  puStack_50 = puVar4;
  _pthread_create(&lStack_1d0,0,FUN_104c46054,puVar4);
  if ((int)plVar9 != 0) {
    __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104c45a44);
    (*pcVar3)();
  }
  if (param_1[0xb] == 0) {
    param_1[0xb] = lStack_1d0;
    lStack_1d0 = 0;
    __ZNSt3__16threadD1Ev(&lStack_1d0);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x13);
    FUN_104c4bb14();
    plStack_1b0 = (long *)0x0;
    uStack_1a8 = 0;
    ppuStack_1c0 = &PTR_FUN_1107eb688;
    plStack_1b8 = (long *)0x0;
    uStack_1a0 = 0;
    pppuVar10 = &ppuStack_1c0;
    FUN_104c37260(pppuVar10,0);
    (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,pppuVar10,1);
    ppuStack_1c0 = &PTR_DAT_1107eb6f0;
    if (plStack_1b8 != (long *)0x0) {
      for (; plStack_1b8 != plStack_1b0; plStack_1b0 = plStack_1b0 + -3) {
      }
      plStack_1b0 = plStack_1b8;
      __ZdlPv(plStack_1b8);
    }
    plVar9 = alStack_100;
    func_0x000100627b64(plVar9);
    return plVar9;
  }
  __ZSt9terminatev();
  __ZNSt3__15mutex6unlockEv(param_1 + 0x13);
  __Unwind_Resume();
  FUN_104bd46a0();
  func_0x000100627b64(alStack_100);
  __Unwind_Resume();
  func_0x000104c46668(&ppuStack_1c0);
  func_0x000100627b64(alStack_100);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x13);
  __Unwind_Resume();
  func_0x00010adea474(&ppuStack_1c0);
  func_0x000100627b64(alStack_100);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x13);
  __Unwind_Resume();
  plVar12 = (long *)plVar9[1];
  if (plVar12 != (long *)0x0) {
    plVar11 = plVar12 + 1;
    do {
      lVar6 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      return plVar9;
    }
  }
  return plVar9;
}



/* Entry: 104c45bcc; end: 104c45c2f;  */

long FUN_104c45bcc(long param_1)

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



/* Entry: 104c45c30; end: 104c45d07;  */

void FUN_104c45c30(long *param_1,long param_2,int *param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  iVar2 = *param_3;
  puVar5 = (undefined8 *)0x58;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_1107ebdd8;
  if (iVar2 == 0) {
    uVar6 = *(undefined8 *)(param_2 + 8);
    puVar5[3] = &PTR_FUN_1107ebb68;
    *(undefined1 *)(puVar5 + 4) = 1;
    puVar5[5] = uVar6;
    *(undefined4 *)(puVar5 + 7) = 0;
    lVar7 = *(long *)(param_2 + 0x68);
    uVar6 = *(undefined8 *)(param_2 + 0x60);
    puVar5[9] = *(undefined8 *)(param_2 + 0x68);
    puVar5[8] = uVar6;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    puVar5[3] = &PTR_FUN_1107ebb68;
    *(undefined1 *)(puVar5 + 4) = 1;
    puVar5[6] = uVar6;
    *(undefined4 *)(puVar5 + 7) = 1;
    lVar7 = *(long *)(param_2 + 0x68);
    uVar6 = *(undefined8 *)(param_2 + 0x60);
    puVar5[9] = *(undefined8 *)(param_2 + 0x68);
    puVar5[8] = uVar6;
  }
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5[10] = param_4;
  *param_1 = (long)(puVar5 + 3);
  param_1[1] = (long)puVar5;
  return;
}



/* Entry: 104c45d08; end: 104c45db3;  */

void FUN_104c45d08(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  plStack_28 = (long *)param_3[1];
  uStack_30 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x00010ade67c4(uVar5,param_2,&uStack_30);
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



/* Entry: 104c45db4; end: 104c45f27;  */

void FUN_104c45db4(long *param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  long *plStack_28;
  
  if (param_1 == (long *)0x0) {
    plVar2 = (long *)0x20;
    __Znwm();
    plStack_28 = plVar2;
  }
  else {
    ppuVar1 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar1[1] == (undefined *)*param_1) {
      plVar3 = (long *)ppuVar1[2];
      plVar2 = plVar3;
      func_0x00010b4d755c(plVar3,0x20,&plStack_28);
      if ((int)plVar2 == 0) {
        func_0x00010b4d7498(plVar3,0x20);
        plStack_28 = plVar3;
      }
    }
    else {
      plVar2 = param_1;
      func_0x00010b4d7124(param_1,0x20);
      plStack_28 = plVar2;
    }
  }
  *plStack_28 = (long)&PTR_DAT_110c76810;
  plStack_28[1] = (long)param_1;
  plStack_28[2] = 0;
  plStack_28[3] = 0;
  return;
}



/* Entry: 104c45f28; end: 104c45f37;  */

void FUN_104c45f28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ebd38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c45f38; end: 104c45f57;  */

void FUN_104c45f38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ebd38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c45f58; end: 104c45f77;  */

void FUN_104c45f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c45f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104c45f78; end: 104c45f97;  */

void FUN_104c45f78(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107ebd88;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c45f98; end: 104c4604f;  */

void FUN_104c45f98(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0xf0) != 0) {
    *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf0);
    __ZdlPv();
  }
  FUN_104c42d18(param_1 + 0x40);
  plVar5 = *(long **)(param_1 + 0x38);
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
      plVar5 = *(long **)(param_1 + 0x20);
      goto joined_r0x000104c45fe4;
    }
  }
  plVar5 = *(long **)(param_1 + 0x20);
joined_r0x000104c45fe4:
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



/* Entry: 104c46050; end: 104c46053;  */

void FUN_104c46050(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c46054; end: 104c4661f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_104c46054(long *param_1)

{
  undefined **ppuVar1;
  double *pdVar2;
  char cVar3;
  undefined8 *******pppppppuVar4;
  code *pcVar5;
  undefined **ppuVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  bool bVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  float fVar20;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *******pppppppuStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  
  plVar10 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  lVar9 = *param_1;
  *param_1 = 0;
  _pthread_setspecific(*plVar10,lVar9);
  lVar19 = param_1[1];
  lVar9 = *(long *)(lVar19 + 0x60);
  if ((*(byte *)(lVar9 + 0xa8) & 1) == 0) {
    do {
      lVar14 = *(long *)(lVar19 + 0x28);
      if (lVar14 != 0) {
        pppppppuStack_90 = (undefined8 *******)0x0;
        uStack_88 = 0;
        uStack_80 = 0;
        ppuVar6 = (undefined **)(lVar14 + 0x30);
        plStack_a8 = (long *)CONCAT71(plStack_a8._1_7_,1);
        ppuStack_b0 = ppuVar6;
        __ZNSt3__15mutex4lockEv();
        __ZNSt3__16chrono12steady_clock3nowEv();
        ppuVar1 = ppuVar6 + 0x1312d0;
        do {
          if (*(long *)(lVar14 + 0x28) != 0) goto LAB_104c4622c;
          __ZNSt3__16chrono12steady_clock3nowEv();
          if ((long)ppuVar1 <= (long)ppuVar6) break;
          __ZNSt3__16chrono12steady_clock3nowEv();
          uVar18 = (long)ppuVar1 - (long)ppuVar6;
          if (0 < (long)uVar18) {
            __ZNSt3__16chrono12steady_clock3nowEv();
            __ZNSt3__16chrono12system_clock3nowEv();
            if (ppuVar6 == (undefined **)0x0) {
              lVar9 = 0;
LAB_104c4621c:
              lVar9 = lVar9 + uVar18;
            }
            else if ((long)ppuVar6 < 1) {
              if ((undefined **)0xffdf3b645a1cac08 < ppuVar6) goto LAB_104c4620c;
              lVar9 = uVar18 + 0x8000000000000000;
            }
            else {
              if (ppuVar6 < (undefined **)0x20c49ba5e353f8) {
LAB_104c4620c:
                lVar9 = (long)ppuVar6 * 1000;
                if (lVar9 - (uVar18 ^ 0x7fffffffffffffff) == 0 ||
                    lVar9 < (long)(uVar18 ^ 0x7fffffffffffffff)) goto LAB_104c4621c;
              }
              else {
                lVar9 = 0x7fffffffffffffff;
                if (0x7ffffffffffffffe < (long)(uVar18 ^ 0x7fffffffffffffff)) goto LAB_104c4621c;
              }
              lVar9 = 0x7fffffffffffffff;
            }
            ppuVar6 = (undefined **)(lVar14 + 0x70);
            __ZNSt3__118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE
                      (ppuVar6,&ppuStack_b0,lVar9);
            __ZNSt3__16chrono12steady_clock3nowEv();
          }
          __ZNSt3__16chrono12steady_clock3nowEv();
        } while ((long)ppuVar6 < (long)ppuVar1);
        if (*(long *)(lVar14 + 0x28) == 0) {
          bVar16 = false;
        }
        else {
LAB_104c4622c:
          plVar10 = (long *)(*(long *)(*(long *)(lVar14 + 8) +
                                      (*(ulong *)(lVar14 + 0x20) / 0xaa) * 8) +
                            (*(ulong *)(lVar14 + 0x20) % 0xaa) * 0x18);
          uStack_88 = plVar10[1];
          pppppppuStack_90 = (undefined8 *******)*plVar10;
          uStack_80 = plVar10[2];
          *(undefined1 *)((long)plVar10 + 0x17) = 0;
          *(undefined1 *)plVar10 = 0;
          uVar18 = *(ulong *)(lVar14 + 0x20);
          puVar11 = (undefined8 *)
                    (*(long *)(*(long *)(lVar14 + 8) + (uVar18 / 0xaa) * 8) + (uVar18 % 0xaa) * 0x18
                    );
          if (*(char *)((long)puVar11 + 0x17) < '\0') {
            __ZdlPv(*puVar11);
            uVar18 = *(long *)(lVar14 + 0x20) + 1;
            *(ulong *)(lVar14 + 0x20) = uVar18;
            *(long *)(lVar14 + 0x28) = *(long *)(lVar14 + 0x28) + -1;
          }
          else {
            uVar18 = uVar18 + 1;
            *(ulong *)(lVar14 + 0x20) = uVar18;
            *(long *)(lVar14 + 0x28) = *(long *)(lVar14 + 0x28) + -1;
          }
          if (0x153 < uVar18) {
            __ZdlPv(**(undefined8 **)(lVar14 + 8));
            *(long *)(lVar14 + 8) = *(long *)(lVar14 + 8) + 8;
            *(long *)(lVar14 + 0x20) = *(long *)(lVar14 + 0x20) + -0xaa;
          }
          bVar16 = true;
        }
        if ((char)plStack_a8 == '\x01') {
          __ZNSt3__15mutex6unlockEv(ppuStack_b0);
        }
        uVar13 = (uint)(char)uStack_80._7_1_;
        if (bVar16) {
          ppuStack_b0 = &PTR_SUB_110c768b0;
          plStack_a8 = (long *)0x0;
          uStack_98 = 0;
          uVar18 = uStack_88;
          pppppppuVar4 = pppppppuStack_90;
          if (-1 < (int)uVar13) {
            uVar18 = (ulong)uStack_80._7_1_;
            pppppppuVar4 = &pppppppuStack_90;
          }
          func_0x00010adea37c(&ppuStack_b0);
          uStack_98 = CONCAT44(2,(undefined4)uStack_98);
          puStack_a0 = &DAT_11383d918;
          if (((ulong)plStack_a8 & 1) == 0) {
            plVar10 = plStack_a8;
            if (plStack_a8 != (long *)0x0) goto LAB_104c46338;
LAB_104c463e0:
            plVar10 = (long *)0x18;
            __Znwm();
            if (0x7ffffffffffffff6 < uVar18) {
              FUN_104bd47d4();
              goto LAB_104c465a0;
            }
            if (uVar18 < 0x17) {
              *(char *)((long)plVar10 + 0x17) = (char)uVar18;
              uVar15 = 2;
              plVar8 = plVar10;
              goto joined_r0x000104c46364;
            }
            plVar8 = (long *)0x19;
            if ((uVar18 | 7) != 0x17) {
              plVar8 = (long *)((uVar18 | 7) + 1);
            }
            plVar7 = plVar8;
            __Znwm();
            *plVar10 = (long)plVar7;
            uVar15 = 2;
LAB_104c46438:
            plVar10[1] = uVar18;
            plVar10[2] = (ulong)plVar8 | 0x8000000000000000;
LAB_104c46448:
            plVar8 = plVar7;
            _memmove(plVar7,pppppppuVar4,uVar18);
          }
          else {
            plVar10 = *(long **)((ulong)plStack_a8 & 0xfffffffffffffffe);
            if (plVar10 == (long *)0x0) goto LAB_104c463e0;
LAB_104c46338:
            func_0x00010b4d80a4();
            if (0x7ffffffffffffff6 < uVar18) {
              FUN_104bd47d4();
LAB_104c465a0:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x104c465a4);
              (*pcVar5)();
            }
            if (0x16 < uVar18) {
              plVar8 = (long *)0x19;
              if ((uVar18 | 7) != 0x17) {
                plVar8 = (long *)((uVar18 | 7) + 1);
              }
              plVar7 = plVar8;
              __Znwm();
              *plVar10 = (long)plVar7;
              uVar15 = 3;
              goto LAB_104c46438;
            }
            *(char *)((long)plVar10 + 0x17) = (char)uVar18;
            uVar15 = 3;
            plVar8 = plVar10;
joined_r0x000104c46364:
            plVar10 = plVar8;
            plVar7 = plVar8;
            if (uVar18 != 0) goto LAB_104c46448;
          }
          *(undefined1 *)((long)plVar7 + uVar18) = 0;
          puStack_a0 = (undefined *)(uVar15 | (ulong)plVar10);
          if ((long)(char)uStack_80._7_1_ < 0) {
            fVar20 = *(float *)(lVar19 + 0x128) + (float)uStack_88;
            uVar18 = uStack_88;
          }
          else {
            fVar20 = *(float *)(lVar19 + 0x128) + (float)uStack_80._7_1_;
            uVar18 = (long)(char)uStack_80._7_1_;
          }
          *(float *)(lVar19 + 0x128) = fVar20;
          lVar17 = *(long *)(lVar19 + 0x60);
          *(ulong *)(lVar17 + 0xc0) = uVar18;
          __ZNSt3__16chrono12steady_clock3nowEv();
          lVar14 = *(long *)(lVar17 + 0xb0);
          lVar12 = *(long *)(lVar17 + 0xd8);
          pdVar2 = (double *)(lVar12 + lVar14 * 0x20);
          *pdVar2 = (double)fVar20;
          pdVar2[1] = 0.0;
          pdVar2[2] = (double)plVar8;
          *(undefined1 *)(pdVar2 + 3) = 1;
          lVar9 = 0;
          if (lVar14 + 1U <= (ulong)(*(long *)(lVar17 + 0xe8) - lVar12 >> 5)) {
            lVar9 = lVar14 + 1;
          }
          *(long *)(lVar17 + 0xb0) = lVar9;
          puVar11 = *(undefined8 **)(lVar19 + 0x60);
          *(undefined4 *)(puVar11 + 0x1a) = *(undefined4 *)(lVar19 + 0x128);
          plVar10 = (long *)*puVar11;
          uStack_c0 = *(undefined8 *)(lVar19 + 0x118);
          plStack_b8 = *(long **)(lVar19 + 0x120);
          if (plStack_b8 != (long *)0x0) {
            plVar8 = plStack_b8 + 1;
            do {
              cVar3 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar16) {
                *plVar8 = *plVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          (**(code **)(*plVar10 + 0x10))(plVar10,&ppuStack_b0,&uStack_c0);
          plVar10 = plStack_b8;
          if (plStack_b8 != (long *)0x0) {
            plVar8 = plStack_b8 + 1;
            do {
              lVar9 = *plVar8;
              cVar3 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar16) {
                *plVar8 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
          if (((ulong)plStack_a8 & 1) != 0) {
            func_0x0001053936ac(&plStack_a8);
          }
          if (uStack_98._4_4_ != 0) {
            func_0x00010adea37c(&ppuStack_b0);
          }
          uVar13 = (uint)uStack_80._7_1_;
        }
        if ((uVar13 >> 7 & 1) != 0) {
          __ZdlPv(pppppppuStack_90);
        }
        lVar9 = *(long *)(lVar19 + 0x60);
      }
    } while (*(char *)(lVar9 + 0xa8) != '\x01');
  }
  lVar9 = *param_1;
  *param_1 = 0;
  if (lVar9 != 0) {
    __ZNSt3__115__thread_structD1Ev();
    __ZdlPv();
  }
  __ZdlPv(param_1);
  return 0;
}



/* Entry: 104c46620; end: 104c466a3;  */

undefined8 * FUN_104c46620(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  *param_1 = 0;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      __ZNSt3__115__thread_structD1Ev();
      __ZdlPv();
    }
    __ZdlPv(plVar2);
  }
  return param_1;
}



/* Entry: 104c466a4; end: 104c466b3;  */

void FUN_104c466a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ebdd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c466b4; end: 104c466d3;  */

void FUN_104c466b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ebdd8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c466d4; end: 104c466e3;  */

void FUN_104c466d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c466dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104c466e4; end: 104c46ecf;  */

/* WARNING: Removing unreachable block (ram,0x000104c46998) */
/* WARNING: Removing unreachable block (ram,0x000104c469b0) */
/* WARNING: Removing unreachable block (ram,0x000104c46930) */
/* WARNING: Removing unreachable block (ram,0x000104c46d74) */
/* WARNING: Removing unreachable block (ram,0x000104c46cac) */
/* WARNING: Removing unreachable block (ram,0x000104c46cc4) */
/* WARNING: Removing unreachable block (ram,0x000104c46cb0) */
/* WARNING: Removing unreachable block (ram,0x000104c46d1c) */
/* WARNING: Removing unreachable block (ram,0x000104c46d18) */
/* WARNING: Removing unreachable block (ram,0x000104c46d30) */
/* WARNING: Removing unreachable block (ram,0x000104c46d5c) */
/* WARNING: Removing unreachable block (ram,0x000104c46ae8) */
/* WARNING: Removing unreachable block (ram,0x000104c46b00) */
/* WARNING: Removing unreachable block (ram,0x000104c46aec) */
/* WARNING: Removing unreachable block (ram,0x000104c46b58) */
/* WARNING: Removing unreachable block (ram,0x000104c4692c) */
/* WARNING: Removing unreachable block (ram,0x000104c46944) */
/* WARNING: Removing unreachable block (ram,0x000104c4699c) */
/* WARNING: Removing unreachable block (ram,0x000104c469d0) */
/* WARNING: Removing unreachable block (ram,0x000104c46b54) */

void FUN_104c466e4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long *plVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 *puStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 ***pppuStack_150;
  undefined8 ***pppuStack_148;
  undefined8 ***pppuStack_140;
  undefined4 *puStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined4 uStack_120;
  undefined1 uStack_11c;
  undefined8 ***pppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined4 *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 ***pppuStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined4 uStack_79;
  undefined1 uStack_75;
  undefined1 uStack_71;
  undefined4 *puStack_70;
  ulong uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)*param_3;
  if (*(int *)(param_1 + 0x20) == 1) {
    uStack_120 = 0x6f697461;
    uStack_11c = 0x6e;
    uVar2 = *(ulong *)(param_1 + 0x10);
    plVar4 = (long *)*(long *)(param_1 + 8);
    if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
      uVar2 = (ulong)*(byte *)(param_1 + 0x1f);
      plVar4 = (long *)(param_1 + 8);
    }
    uVar1 = uVar2 + 7;
    if (0x7ffffffffffffff6 < uVar1) goto LAB_104c46dc4;
    if (uVar1 < 0x17) {
      uStack_130 = 0;
      uStack_128 = uVar1 << 0x38;
      uVar10 = (ulong)&puStack_138 | 7;
      puStack_138 = (undefined4 *)0x20726572616542;
      if (uVar2 != 0) goto LAB_104c46820;
    }
    else {
      puVar3 = (undefined4 *)0x19;
      if ((uVar1 | 7) != 0x17) {
        puVar3 = (undefined4 *)((uVar1 | 7) + 1);
      }
      puVar6 = puVar3;
      __Znwm();
      uStack_128 = (ulong)puVar3 | 0x8000000000000000;
      *puVar6 = 0x72616542;
      uVar10 = (long)puVar6 + 7;
      *(undefined4 *)((long)puVar6 + 3) = 0x20726572;
      puStack_138 = puVar6;
      uStack_130 = uVar1;
LAB_104c46820:
      _memmove(uVar10,plVar4,uVar2);
    }
    *(undefined1 *)(uVar10 + uVar2) = 0;
    uStack_88 = 0x7a69726f68747561;
    uStack_80 = uStack_120;
    uStack_7c = uStack_11c;
    uStack_7b = 0;
    uStack_71 = 0xd;
    uStack_68 = uStack_130;
    puStack_70 = puStack_138;
    uStack_60 = uStack_128;
    pppuStack_98 = &pppuStack_118;
    pppuStack_110 = (undefined8 ***)0x0;
    pppuStack_108 = (undefined8 ***)0x0;
    pppuStack_118 = (undefined8 ***)0x0;
    uStack_90 = 0;
    ppppuVar8 = (undefined8 ****)0x30;
    __Znwm();
    pppuStack_108 = ppppuVar8 + 6;
    ppppuVar7 = &pppuStack_108;
    pppuStack_118 = ppppuVar8;
    pppuStack_110 = ppppuVar8;
    FUN_104c4712c(ppppuVar7,&uStack_88,&lStack_58,ppppuVar8);
    pppuStack_d0 = pppuStack_118;
    pppuStack_c0 = pppuStack_108;
    pppuStack_118 = (undefined8 ***)0x0;
    pppuStack_110 = (undefined8 ***)0x0;
    pppuStack_108 = (undefined8 ***)0x0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    pppuStack_c8 = ppppuVar7;
    (**(code **)(*plVar9 + 0x10))(plVar9,&pppuStack_d0);
    if ((undefined8 ****)pppuStack_d0 != (undefined8 ****)0x0) {
      for (; pppuStack_d0 != pppuStack_c8; pppuStack_c8 = pppuStack_c8 + -6) {
      }
      pppuStack_c8 = pppuStack_d0;
      __ZdlPv(pppuStack_d0);
    }
    if (pppuStack_118 != (undefined8 ***)0x0) {
      for (; pppuStack_118 != pppuStack_110; pppuStack_110 = pppuStack_110 + -6) {
      }
      pppuStack_110 = pppuStack_118;
      __ZdlPv(pppuStack_118);
    }
  }
  else {
    if (*(int *)(param_1 + 0x20) == 0) {
      if (*(char *)(param_1 + 0x1f) < '\0') {
        func_0x000100033dac(&puStack_100,*(undefined8 *)(param_1 + 8),
                            *(undefined8 *)(param_1 + 0x10));
      }
      else {
        uStack_f8 = *(ulong *)(param_1 + 0x10);
        puStack_100 = *(undefined4 **)(param_1 + 8);
        uStack_f0 = *(ulong *)(param_1 + 0x18);
      }
      uStack_88 = 0x612d70616e732d78;
      uStack_80 = 0x73656363;
      uStack_7c = 0x73;
      uStack_7b = 0x2d;
      uStack_7a = 0x74;
      uStack_79 = 0x6e656b6f;
      uStack_75 = 0;
      uStack_71 = 0x13;
      uStack_68 = uStack_f8;
      puStack_70 = puStack_100;
      uStack_60 = uStack_f0;
      puStack_100 = (undefined4 *)0x0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      pppuStack_e8 = (undefined8 ***)0x0;
      pppuStack_98 = &pppuStack_e8;
      pppuStack_e0 = (undefined8 ***)0x0;
      pppuStack_d8 = (undefined8 ***)0x0;
      uStack_90 = 0;
      ppppuVar8 = (undefined8 ****)0x30;
      __Znwm();
      pppuStack_d8 = ppppuVar8 + 6;
      ppppuVar7 = &pppuStack_d8;
      pppuStack_e8 = ppppuVar8;
      pppuStack_e0 = ppppuVar8;
      FUN_104c4712c(ppppuVar7,&uStack_88,&lStack_58,ppppuVar8);
      pppuStack_d0 = pppuStack_e8;
      pppuStack_c0 = pppuStack_d8;
      pppuStack_e8 = (undefined8 ***)0x0;
      pppuStack_e0 = (undefined8 ***)0x0;
      pppuStack_d8 = (undefined8 ***)0x0;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      pppuStack_c8 = ppppuVar7;
      (**(code **)(*plVar9 + 0x10))(plVar9,&pppuStack_d0);
      if ((undefined8 ****)pppuStack_d0 != (undefined8 ****)0x0) {
        for (; pppuStack_d0 != pppuStack_c8; pppuStack_c8 = pppuStack_c8 + -6) {
        }
        pppuStack_c8 = pppuStack_d0;
        __ZdlPv(pppuStack_d0);
      }
      puVar3 = puStack_100;
      uVar2 = uStack_f0;
      if (pppuStack_e8 != (undefined8 ***)0x0) {
        for (; pppuStack_e8 != pppuStack_e0; pppuStack_e0 = pppuStack_e0 + -6) {
        }
        pppuStack_e0 = pppuStack_e8;
        __ZdlPv(pppuStack_e8);
        puVar3 = puStack_100;
        uVar2 = uStack_f0;
      }
    }
    else {
      if (*(char *)(param_1 + 0x1f) < '\0') {
        func_0x000100033dac(&puStack_170,*(undefined8 *)(param_1 + 8),
                            *(undefined8 *)(param_1 + 0x10));
      }
      else {
        uStack_168 = *(ulong *)(param_1 + 0x10);
        puStack_170 = *(undefined4 **)(param_1 + 8);
        uStack_160 = *(ulong *)(param_1 + 0x18);
      }
      uStack_88 = 0x612d70616e732d78;
      uStack_80 = 0x73656363;
      uStack_7c = 0x73;
      uStack_7b = 0x2d;
      uStack_7a = 0x74;
      uStack_79 = 0x6e656b6f;
      uStack_75 = 0;
      uStack_71 = 0x13;
      uStack_68 = uStack_168;
      puStack_70 = puStack_170;
      uStack_60 = uStack_160;
      puStack_170 = (undefined4 *)0x0;
      uStack_168 = 0;
      uStack_160 = 0;
      pppuStack_98 = &pppuStack_150;
      pppuStack_148 = (undefined8 ***)0x0;
      pppuStack_140 = (undefined8 ***)0x0;
      pppuStack_150 = (undefined8 ***)0x0;
      uStack_90 = 0;
      ppppuVar8 = (undefined8 ****)0x30;
      __Znwm();
      pppuStack_140 = ppppuVar8 + 6;
      ppppuVar7 = &pppuStack_140;
      pppuStack_150 = ppppuVar8;
      pppuStack_148 = ppppuVar8;
      FUN_104c4712c(ppppuVar7,&uStack_88,&lStack_58,ppppuVar8);
      pppuStack_d0 = pppuStack_150;
      pppuStack_c0 = pppuStack_140;
      pppuStack_150 = (undefined8 ***)0x0;
      pppuStack_148 = (undefined8 ***)0x0;
      pppuStack_140 = (undefined8 ***)0x0;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      pppuStack_c8 = ppppuVar7;
      (**(code **)(*plVar9 + 0x10))(plVar9,&pppuStack_d0);
      if ((undefined8 ****)pppuStack_d0 != (undefined8 ****)0x0) {
        for (; pppuStack_d0 != pppuStack_c8; pppuStack_c8 = pppuStack_c8 + -6) {
        }
        pppuStack_c8 = pppuStack_d0;
        __ZdlPv(pppuStack_d0);
      }
      puVar3 = puStack_170;
      uVar2 = uStack_160;
      if (pppuStack_150 != (undefined8 ***)0x0) {
        for (; pppuStack_150 != pppuStack_148; pppuStack_148 = pppuStack_148 + -6) {
        }
        pppuStack_148 = pppuStack_150;
        __ZdlPv(pppuStack_150);
        puVar3 = puStack_170;
        uVar2 = uStack_160;
      }
    }
    if ((long)uVar2 < 0) {
      __ZdlPv(puVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_104c46dc4:
  FUN_104bd47d4();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x104c46dcc);
  (*pcVar5)();
}



/* Entry: 104c46ed0; end: 104c46ff7;  */

/* WARNING: Removing unreachable block (ram,0x000104c46f24) */
/* WARNING: Removing unreachable block (ram,0x000104c46f20) */
/* WARNING: Removing unreachable block (ram,0x000104c46f38) */

long * FUN_104c46ed0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar2 != lVar3) {
      do {
        lVar3 = lVar3 + -0x30;
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 104c46ff8; end: 104c4707f;  */

undefined8 * FUN_104c46ff8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ebe28;
  if (-1 < *(char *)((long)param_1 + 0x1f)) {
    return param_1;
  }
  __ZdlPv(param_1[1]);
  return param_1;
}



/* Entry: 104c47080; end: 104c4712b;  */

/* WARNING: Removing unreachable block (ram,0x000104c470e4) */
/* WARNING: Removing unreachable block (ram,0x000104c470e0) */
/* WARNING: Removing unreachable block (ram,0x000104c470f8) */

long * FUN_104c47080(long *param_1)

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
          lVar4 = lVar4 + -0x30;
        } while (lVar4 != lVar3);
        lVar1 = *(long *)*param_1;
      }
      plVar2[1] = lVar3;
      __ZdlPv(lVar1);
    }
  }
  return param_1;
}



/* Entry: 104c4712c; end: 104c47227;  */

undefined8 *
FUN_104c4712c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  for (; param_2 != param_3; param_2 = param_2 + 6) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000100033dac(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    if (*(char *)((long)param_2 + 0x2f) < '\0') {
      func_0x000100033dac(param_4 + 3,param_2[3],param_2[4]);
    }
    else {
      uVar2 = param_2[4];
      uVar1 = param_2[3];
      param_4[5] = param_2[5];
      param_4[4] = uVar2;
      param_4[3] = uVar1;
    }
    param_4 = param_4 + 6;
  }
  return param_4;
}



/* Entry: 104c47228; end: 104c472ff;  */

/* WARNING: Removing unreachable block (ram,0x000104c47290) */
/* WARNING: Removing unreachable block (ram,0x000104c4728c) */
/* WARNING: Removing unreachable block (ram,0x000104c472a4) */

long FUN_104c47228(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8);
        lVar1 = lVar1 + -0x30) {
    }
  }
  return param_1;
}



/* Entry: 104c47300; end: 104c473df;  */

undefined8 * FUN_104c47300(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_1107ebe68;
  plVar5 = (long *)param_1[2];
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



/* Entry: 104c473e0; end: 104c475c7;  */

/* WARNING: Removing unreachable block (ram,0x000104c47930) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_104c473e0(undefined8 *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong ******ppppppuVar3;
  undefined1 *puVar4;
  byte bVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  long *plVar9;
  ulong uVar10;
  float *pfVar11;
  undefined8 *extraout_x8;
  undefined8 *puVar12;
  undefined **ppuVar13;
  long lVar14;
  ulong *******pppppppuVar15;
  undefined8 *puVar16;
  undefined8 *******pppppppuVar17;
  char *pcVar18;
  long lVar19;
  undefined *puVar20;
  undefined1 (*pauVar21) [16];
  ulong uVar22;
  int iVar23;
  undefined8 *unaff_x19;
  ulong *******pppppppuVar24;
  ulong uVar25;
  char *pcVar26;
  ulong *******pppppppuVar27;
  long lVar28;
  ulong *******pppppppuVar29;
  ulong *puVar30;
  long lVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 *******pppppppuStack_1b0;
  ulong *******pppppppuStack_1a8;
  ulong *******pppppppuStack_1a0;
  ulong *******pppppppuStack_198;
  ulong *******pppppppuStack_190;
  ulong ******ppppppuStack_188;
  ulong *******pppppppuStack_180;
  ulong *******pppppppuStack_178;
  ulong *******pppppppuStack_170;
  undefined4 uStack_168;
  ulong ******ppppppuStack_160;
  ulong ******ppppppuStack_158;
  ulong ******ppppppuStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *******pppppppuStack_f8;
  ulong *******pppppppuStack_f0;
  ulong *******pppppppuStack_e8;
  undefined8 *******pppppppuStack_e0;
  ulong *******pppppppuStack_d8;
  ulong *******pppppppuStack_d0;
  undefined1 uStack_c8;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  ulong *******pppppppuStack_b0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 == 0) {
    return;
  }
  if ((long)param_3 < 0) {
    FUN_104c4a930();
    __ZdlPv();
    if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
      __ZdlPv(*unaff_x19);
    }
    __Unwind_Resume();
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    FUN_104c348b4(extraout_x8,(long)(int)param_2[1]);
    puVar30 = param_2;
    if ((*param_2 & 1) != 0) {
      puVar30 = (ulong *)(*param_2 + 7);
    }
    if ((int)param_2[1] != 0) {
      puVar1 = puVar30 + (int)param_2[1];
      do {
        uVar25 = *puVar30;
        pppppppuStack_c0 = (ulong *******)0x0;
        pppppppuStack_b8 = (ulong *******)0x0;
        pppppppuStack_b0 = (ulong *******)0x0;
        pppppppuStack_e8 = (ulong *******)0x0;
        pppppppuStack_f0 = (ulong *******)0x0;
        pppppppuStack_e0 = (undefined8 *******)0x0;
        uStack_108 = 0;
        uStack_110 = 0;
        pppppppuStack_f8 = (undefined8 *******)0x0;
        uStack_100 = 0;
        lStack_128 = 0;
        uStack_130 = 0;
        plStack_118 = (long *)0x0;
        plStack_120 = (long *)0x0;
        uStack_138 = 0;
        uStack_140 = 0;
        puVar12 = (undefined8 *)(*(ulong *)(uVar25 + 0x30) & 0xfffffffffffffffc);
        if (&uStack_140 != puVar12) {
          if (*(char *)((long)puVar12 + 0x17) < '\0') {
            func_0x00010014884c(&uStack_140,*puVar12,puVar12[1]);
          }
          else {
            uStack_140 = *puVar12;
            uStack_138 = puVar12[1];
            uStack_130 = puVar12[2];
          }
        }
        if (*(int *)(uVar25 + 0x48) == 4) {
          lVar19 = 0;
          pppppppuStack_180 = (ulong *******)0x0;
          pppppppuStack_178 = (ulong *******)0x0;
          pppppppuStack_170 = (ulong *******)0x0;
          lVar31 = 8;
          auStack_148[0] = 0;
          iVar23 = 4;
          while( true ) {
            if (iVar23 == 4) {
              ppuVar13 = *(undefined ***)(uVar25 + 0x40);
              iVar23 = *(int *)(ppuVar13 + 3);
            }
            else {
              ppuVar13 = &PTR_PTR_1133087b0;
              iVar23 = iRam00000001133087c8;
            }
            if (iVar23 <= lVar19) break;
            puVar20 = ppuVar13[2];
            ppuVar13 = ppuVar13 + 2;
            if (((ulong)puVar20 & 1) != 0) {
              ppuVar13 = (undefined **)(puVar20 + lVar31 + -1);
            }
            puVar12 = (undefined8 *)*ppuVar13;
            if (*(char *)((long)puVar12 + 0x17) < '\0') {
              func_0x000100033dac(&ppppppuStack_160,*puVar12,puVar12[1]);
            }
            else {
              ppppppuStack_160 = (ulong ******)*puVar12;
              ppppppuStack_158 = (ulong ******)puVar12[1];
              ppppppuStack_150 = (ulong ******)puVar12[2];
            }
            pppppppuVar15 = pppppppuStack_178;
            pppppppuVar27 = pppppppuStack_180;
            if (pppppppuStack_178 < pppppppuStack_170) {
              if ((long)ppppppuStack_150 < 0) {
                func_0x000100033dac(pppppppuStack_178,ppppppuStack_160,ppppppuStack_158);
                pppppppuVar15 = pppppppuVar15 + 3;
              }
              else {
                pppppppuStack_178[2] = ppppppuStack_150;
                pppppppuStack_178[1] = ppppppuStack_158;
                *pppppppuStack_178 = ppppppuStack_160;
                pppppppuVar15 = pppppppuStack_178 + 3;
              }
            }
            else {
              lVar28 = (long)pppppppuStack_178 - (long)pppppppuStack_180;
              uVar10 = (lVar28 >> 3) * -0x5555555555555555 + 1;
              if (0xaaaaaaaaaaaaaaa < uVar10) {
                FUN_104bdcf60();
LAB_104c47e6c:
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x104c47e70);
                (*pcVar7)();
              }
              lVar14 = (long)pppppppuStack_170 - (long)pppppppuStack_180 >> 3;
              uVar22 = lVar14 * 0x5555555555555556;
              if (uVar22 < uVar10 || uVar22 - uVar10 == 0) {
                uVar22 = uVar10;
              }
              if (0x555555555555554 < (ulong)(lVar14 * -0x5555555555555555)) {
                uVar22 = 0xaaaaaaaaaaaaaaa;
              }
              pppppppuStack_190 = (ulong *******)&pppppppuStack_170;
              if (uVar22 == 0) {
                pppppppuVar17 = (undefined8 *******)0x0;
              }
              else {
                if (0xaaaaaaaaaaaaaaa < uVar22) {
                  FUN_104bd35f4();
                  goto LAB_104c47e6c;
                }
                pppppppuVar17 = (undefined8 *******)(uVar22 * 0x18);
                __Znwm();
              }
              pppppppuVar29 = (ulong *******)((long)pppppppuVar17 + lVar28);
              pppppppuVar24 = pppppppuVar17 + uVar22 * 3;
              pppppppuStack_1b0 = pppppppuVar17;
              pppppppuStack_1a8 = pppppppuVar29;
              pppppppuStack_1a0 = pppppppuVar29;
              pppppppuStack_198 = pppppppuVar24;
              if ((long)ppppppuStack_150 < 0) {
                func_0x000100033dac(pppppppuVar29,ppppppuStack_160,ppppppuStack_158);
                lVar28 = (long)pppppppuStack_178 - (long)pppppppuStack_180;
                pppppppuVar27 = pppppppuStack_180;
              }
              else {
                pppppppuVar29[1] = ppppppuStack_158;
                *pppppppuVar29 = ppppppuStack_160;
                pppppppuVar29[2] = ppppppuStack_150;
              }
              pppppppuVar15 = pppppppuVar29 + 3;
              pppppppuVar29 = (ulong *******)((long)pppppppuVar29 - lVar28);
              _memcpy(pppppppuVar29,pppppppuVar27,lVar28);
              pppppppuStack_180 = pppppppuVar29;
              pppppppuStack_170 = pppppppuVar24;
              if (pppppppuVar27 != (ulong *******)0x0) {
                pppppppuStack_178 = pppppppuVar15;
                __ZdlPv(pppppppuVar27);
              }
            }
            pppppppuStack_178 = pppppppuVar15;
            if ((long)ppppppuStack_150 < 0) {
              __ZdlPv(ppppppuStack_160);
            }
            lVar19 = lVar19 + 1;
            iVar23 = *(int *)(uVar25 + 0x48);
            lVar31 = lVar31 + 8;
          }
          FUN_104c351d0(&uStack_110,pppppppuStack_180,pppppppuStack_178,
                        ((long)pppppppuStack_178 - (long)pppppppuStack_180 >> 3) *
                        -0x5555555555555555);
          if (pppppppuStack_180 != (ulong *******)0x0) {
            for (; pppppppuStack_180 != pppppppuStack_178;
                pppppppuStack_178 = pppppppuStack_178 + -3) {
            }
            pppppppuStack_178 = pppppppuStack_180;
            __ZdlPv(pppppppuStack_180);
          }
        }
        if ((*(byte *)(uVar25 + 0x10) & 1) == 0) {
LAB_104c47a74:
          iVar23 = *(int *)(uVar25 + 0x48);
        }
        else {
          pppppppuStack_1b0 = (undefined8 *******)((ulong)pppppppuStack_1b0 & 0xffffffffffffff00);
          pppppppuStack_1a0 = (ulong *******)0x0;
          pppppppuStack_198 = (ulong *******)0x0;
          pppppppuStack_1a8 = (ulong *******)0x0;
          func_0x00010adf513c(&pppppppuStack_180,0,*(undefined8 *)(uVar25 + 0x38));
          pppppppuStack_1b0 = (undefined8 *******)CONCAT71(pppppppuStack_1b0._1_7_,(char)uStack_168)
          ;
          pppppppuVar15 = (ulong *******)((ulong)pppppppuStack_170 & 0xfffffffffffffffc);
          if (&pppppppuStack_1a8 != (ulong ********)pppppppuVar15) {
            bVar5 = *(byte *)((long)pppppppuVar15 + 0x17);
            if ((long)pppppppuStack_198 < 0) {
              ppppppuVar3 = pppppppuVar15[1];
              pppppppuVar27 = (ulong *******)*pppppppuVar15;
              if (-1 < (char)bVar5) {
                ppppppuVar3 = (ulong ******)(ulong)bVar5;
                pppppppuVar27 = pppppppuVar15;
              }
              func_0x0001006aabfc(&pppppppuStack_1a8,pppppppuVar27,ppppppuVar3);
            }
            else if ((char)bVar5 < '\0') {
              func_0x00010014884c(&pppppppuStack_1a8,*pppppppuVar15,pppppppuVar15[1]);
            }
            else {
              pppppppuStack_1a8 = (ulong *******)*pppppppuVar15;
              pppppppuStack_1a0 = (ulong *******)pppppppuVar15[1];
              pppppppuStack_198 = (ulong *******)pppppppuVar15[2];
            }
          }
          uStack_c8 = pppppppuStack_1b0._0_1_;
          if ((long)pppppppuStack_b0 < 0) {
            pppppppuVar15 = pppppppuStack_1a0;
            pppppppuVar27 = pppppppuStack_1a8;
            if (-1 < (long)pppppppuStack_198) {
              pppppppuVar15 = (ulong *******)((ulong)pppppppuStack_198 >> 0x38);
              pppppppuVar27 = (ulong *******)&pppppppuStack_1a8;
            }
            func_0x0001006aabfc(&pppppppuStack_c0,pppppppuVar27,pppppppuVar15);
          }
          else if ((long)pppppppuStack_198 < 0) {
            func_0x00010014884c(&pppppppuStack_c0,pppppppuStack_1a8,pppppppuStack_1a0);
          }
          else {
            pppppppuStack_b8 = pppppppuStack_1a0;
            pppppppuStack_c0 = pppppppuStack_1a8;
            pppppppuStack_b0 = pppppppuStack_198;
          }
          if (((ulong)pppppppuStack_178 & 1) != 0) {
            func_0x0001053936ac(&pppppppuStack_178);
          }
          puVar16 = (undefined8 *)((ulong)pppppppuStack_170 ^ 2);
          puVar12 = puVar16;
          if (((ulong)puVar16 & 3) != 0) {
            puVar12 = (undefined8 *)0x0;
          }
          if ((puVar12 == (undefined8 *)0x0) || (-1 < *(char *)((long)puVar16 + 0x17))) {
            __ZdlPv();
          }
          else {
            __ZdlPv(*puVar16);
            __ZdlPv(puVar12);
          }
          if (-1 < (long)pppppppuStack_198) goto LAB_104c47a74;
          __ZdlPv(pppppppuStack_1a8);
          iVar23 = *(int *)(uVar25 + 0x48);
        }
        if (iVar23 == 5) {
          auStack_148[0] = 1;
          pppppppuStack_1a8 = (ulong *******)0x0;
          pppppppuStack_1a0 = (ulong *******)0x0;
          pppppppuStack_1b0 = (undefined8 *******)0x0;
          pppppppuVar17 =
               (undefined8 *******)
               (*(ulong *)(*(long *)(uVar25 + 0x40) + 0x10) & 0xfffffffffffffffc);
          if (&pppppppuStack_1b0 != (undefined8 ********)pppppppuVar17) {
            if (*(char *)((long)pppppppuVar17 + 0x17) < '\0') {
              func_0x00010014884c(&pppppppuStack_1b0,*pppppppuVar17,pppppppuVar17[1]);
            }
            else {
              pppppppuStack_1b0 = (undefined8 *******)*pppppppuVar17;
              pppppppuStack_1a8 = (ulong *******)pppppppuVar17[1];
              pppppppuStack_1a0 = (ulong *******)pppppppuVar17[2];
            }
          }
          if ((long)pppppppuStack_e8 < 0) {
            pppppppuVar15 = pppppppuStack_1a8;
            pppppppuVar17 = pppppppuStack_1b0;
            if (-1 < (long)pppppppuStack_1a0) {
              pppppppuVar15 = (ulong *******)((ulong)pppppppuStack_1a0 >> 0x38);
              pppppppuVar17 = &pppppppuStack_1b0;
            }
            func_0x0001006aabfc(&pppppppuStack_f8,pppppppuVar17,pppppppuVar15);
LAB_104c47b2c:
            if ((long)pppppppuStack_1a0 < 0) {
              __ZdlPv(pppppppuStack_1b0);
            }
          }
          else {
            if ((long)pppppppuStack_1a0 < 0) {
              func_0x00010014884c(&pppppppuStack_f8,pppppppuStack_1b0,pppppppuStack_1a8);
              goto LAB_104c47b2c;
            }
            pppppppuStack_f0 = pppppppuStack_1a8;
            pppppppuStack_f8 = pppppppuStack_1b0;
            pppppppuStack_e8 = pppppppuStack_1a0;
          }
          iVar23 = *(int *)(uVar25 + 0x48);
        }
        if (iVar23 == 6) {
          auStack_148[0] = 2;
          pppppppuStack_1a8 = (ulong *******)0x0;
          pppppppuStack_1a0 = (ulong *******)0x0;
          pppppppuStack_1b0 = (undefined8 *******)0x0;
          pppppppuVar17 =
               (undefined8 *******)
               (*(ulong *)(*(long *)(uVar25 + 0x40) + 0x10) & 0xfffffffffffffffc);
          if (&pppppppuStack_1b0 != (undefined8 ********)pppppppuVar17) {
            if (*(char *)((long)pppppppuVar17 + 0x17) < '\0') {
              func_0x00010014884c(&pppppppuStack_1b0,*pppppppuVar17,pppppppuVar17[1]);
            }
            else {
              pppppppuStack_1b0 = (undefined8 *******)*pppppppuVar17;
              pppppppuStack_1a8 = (ulong *******)pppppppuVar17[1];
              pppppppuStack_1a0 = (ulong *******)pppppppuVar17[2];
            }
          }
          if ((long)pppppppuStack_d0 < 0) {
            pppppppuVar15 = pppppppuStack_1a8;
            pppppppuVar17 = pppppppuStack_1b0;
            if (-1 < (long)pppppppuStack_1a0) {
              pppppppuVar15 = (ulong *******)((ulong)pppppppuStack_1a0 >> 0x38);
              pppppppuVar17 = &pppppppuStack_1b0;
            }
            func_0x0001006aabfc(&pppppppuStack_e0,pppppppuVar17,pppppppuVar15);
LAB_104c47c00:
            if (-1 < (long)pppppppuStack_1a0) goto LAB_104c47c08;
            __ZdlPv(pppppppuStack_1b0);
            iVar23 = *(int *)(uVar25 + 0x20);
          }
          else {
            if ((long)pppppppuStack_1a0 < 0) {
              func_0x00010014884c(&pppppppuStack_e0,pppppppuStack_1b0,pppppppuStack_1a8);
              goto LAB_104c47c00;
            }
            iVar23 = *(int *)(uVar25 + 0x20);
            pppppppuStack_e0 = pppppppuStack_1b0;
            pppppppuStack_d8 = pppppppuStack_1a8;
            pppppppuStack_d0 = pppppppuStack_1a0;
          }
        }
        else {
LAB_104c47c08:
          iVar23 = *(int *)(uVar25 + 0x20);
        }
        if (0 < iVar23) {
          lVar19 = 0;
          lVar31 = 8;
          do {
            while( true ) {
              uVar10 = *(ulong *)(uVar25 + 0x18);
              puVar2 = (ulong *)(uVar25 + 0x18);
              if ((uVar10 & 1) != 0) {
                puVar2 = (ulong *)(uVar10 + lVar31 + -1);
              }
              uVar10 = *puVar2;
              pppppppuStack_198 = (ulong *******)0x0;
              pppppppuStack_1a0 = (ulong *******)0x0;
              ppppppuStack_188 = (ulong ******)0x0;
              pppppppuStack_190 = (ulong *******)0x0;
              pppppppuStack_1a8 = (ulong *******)0x0;
              pppppppuStack_1b0 = (undefined8 *******)0x0;
              pppppppuVar17 = (undefined8 *******)(*(ulong *)(uVar10 + 0x10) & 0xfffffffffffffffc);
              if (&pppppppuStack_1b0 != (undefined8 ********)pppppppuVar17) {
                if (*(char *)((long)pppppppuVar17 + 0x17) < '\0') {
                  func_0x00010014884c(&pppppppuStack_1b0,*pppppppuVar17,pppppppuVar17[1]);
                }
                else {
                  pppppppuStack_1b0 = (undefined8 *******)*pppppppuVar17;
                  pppppppuStack_1a8 = (ulong *******)pppppppuVar17[1];
                  pppppppuStack_1a0 = (ulong *******)pppppppuVar17[2];
                }
              }
              pppppppuVar15 = (ulong *******)(*(ulong *)(uVar10 + 0x18) & 0xfffffffffffffffc);
              if (&pppppppuStack_198 != (ulong ********)pppppppuVar15) {
                bVar5 = *(byte *)((long)pppppppuVar15 + 0x17);
                if ((long)ppppppuStack_188 < 0) {
                  ppppppuVar3 = pppppppuVar15[1];
                  pppppppuVar27 = (ulong *******)*pppppppuVar15;
                  if (-1 < (char)bVar5) {
                    ppppppuVar3 = (ulong ******)(ulong)bVar5;
                    pppppppuVar27 = pppppppuVar15;
                  }
                  func_0x0001006aabfc(&pppppppuStack_198,pppppppuVar27,ppppppuVar3);
                }
                else if ((char)bVar5 < '\0') {
                  func_0x00010014884c(&pppppppuStack_198,*pppppppuVar15,pppppppuVar15[1]);
                }
                else {
                  pppppppuStack_198 = (ulong *******)*pppppppuVar15;
                  pppppppuStack_190 = (ulong *******)pppppppuVar15[1];
                  ppppppuStack_188 = pppppppuVar15[2];
                }
              }
              plVar9 = plStack_120;
              if (plStack_120 < plStack_118) break;
              plVar9 = &lStack_128;
              FUN_104c34d60(plVar9,&pppppppuStack_1b0);
              plStack_120 = plVar9;
joined_r0x000104c47d44:
              if ((long)ppppppuStack_188 < 0) goto LAB_104c47c24;
LAB_104c47da0:
              if ((long)pppppppuStack_1a0 < 0) goto LAB_104c47da8;
LAB_104c47c34:
              lVar19 = lVar19 + 1;
              lVar31 = lVar31 + 8;
              if (*(int *)(uVar25 + 0x20) <= lVar19) goto LAB_104c47dc4;
            }
            if ((long)pppppppuStack_1a0 < 0) {
              func_0x000100033dac(plStack_120,pppppppuStack_1b0,pppppppuStack_1a8);
            }
            else {
              plStack_120[2] = (long)pppppppuStack_1a0;
              plStack_120[1] = (long)pppppppuStack_1a8;
              *plVar9 = (long)pppppppuStack_1b0;
            }
            if ((long)ppppppuStack_188 < 0) {
              func_0x000100033dac(plVar9 + 3,pppppppuStack_198,pppppppuStack_190);
              plStack_120 = plVar9 + 6;
              goto joined_r0x000104c47d44;
            }
            plVar9[5] = (long)ppppppuStack_188;
            plVar9[4] = (long)pppppppuStack_190;
            plVar9[3] = (long)pppppppuStack_198;
            plStack_120 = plVar9 + 6;
            if (-1 < (long)ppppppuStack_188) goto LAB_104c47da0;
LAB_104c47c24:
            __ZdlPv(pppppppuStack_198);
            if (-1 < (long)pppppppuStack_1a0) goto LAB_104c47c34;
LAB_104c47da8:
            __ZdlPv(pppppppuStack_1b0);
            lVar19 = lVar19 + 1;
            lVar31 = lVar31 + 8;
          } while (lVar19 < *(int *)(uVar25 + 0x20));
        }
LAB_104c47dc4:
        uVar25 = extraout_x8[1];
        if (uVar25 < (ulong)extraout_x8[2]) {
          FUN_104c34edc(uVar25,auStack_148);
          puVar12 = (undefined8 *)(uVar25 + 0xa0);
        }
        else {
          puVar12 = extraout_x8;
          FUN_104c34e48(extraout_x8,auStack_148);
        }
        extraout_x8[1] = puVar12;
        func_0x000104c35148(auStack_148);
        puVar30 = puVar30 + 1;
      } while (puVar30 != puVar1);
    }
    return;
  }
  pcVar26 = (char *)(param_3 << 1);
  __Znwm();
  _bzero();
  uVar6 = (int)param_3 << 1;
  if (0x16 < (uVar6 & 0xfffe)) {
    puVar4 = (undefined1 *)0x19;
    if ((uVar6 & 0xffff | 7) != 0x17) {
      puVar4 = (undefined1 *)(((ulong)(uVar6 | 7) & 0xffff) + 1);
    }
    puVar8 = puVar4;
    __Znwm();
    *puVar8 = 0;
    param_1[1] = 0;
    param_1[2] = (ulong)puVar4 | 0x8000000000000000;
    *param_1 = puVar8;
  }
  if (param_3 < 4) {
    uVar10 = 0;
  }
  else {
    if (param_3 < 0x10) {
      uVar25 = 0;
    }
    else {
      uVar10 = param_3 & 0x7ffffffffffffff0;
      pcVar18 = pcVar26 + 0x10;
      pauVar21 = (undefined1 (*) [16])(param_2 + 4);
      uVar25 = uVar10;
      do {
        auVar33 = NEON_fcvtzs(pauVar21[-2],0xf,4);
        auVar34._8_8_ = auVar33._8_8_;
        auVar34._0_8_ = NEON_sqxtn(auVar33._0_8_,auVar33,4);
        auVar33 = NEON_fcvtzs(pauVar21[-1],0xf,4);
        auVar34 = NEON_sqxtn2(auVar34,auVar33,4);
        auVar33 = NEON_fcvtzs(*pauVar21,0xf,4);
        auVar33._0_8_ = NEON_sqxtn(auVar33._0_8_,auVar33,4);
        auVar35 = NEON_fcvtzs(pauVar21[1],0xf,4);
        auVar33 = NEON_sqxtn2(auVar33,auVar35,4);
        *(long *)(pcVar18 + -8) = auVar34._8_8_;
        *(long *)(pcVar18 + -0x10) = auVar34._0_8_;
        *(long *)(pcVar18 + 8) = auVar33._8_8_;
        *(long *)pcVar18 = auVar33._0_8_;
        pcVar18 = pcVar18 + 0x20;
        uVar25 = uVar25 - 0x10;
        pauVar21 = pauVar21 + 4;
      } while (uVar25 != 0);
      if (param_3 == uVar10) goto LAB_104c47560;
      uVar25 = uVar10;
      if ((param_3 & 0xc) == 0) goto LAB_104c47528;
    }
    uVar10 = param_3 & 0x7ffffffffffffffc;
    lVar19 = uVar25 - uVar10;
    pcVar18 = pcVar26 + uVar25 * 2;
    pauVar21 = (undefined1 (*) [16])((long)param_2 + uVar25 * 4);
    do {
      auVar33 = NEON_fcvtzs(*pauVar21,0xf,4);
      uVar32 = NEON_sqxtn(auVar33._0_8_,auVar33,4);
      *(undefined8 *)pcVar18 = uVar32;
      lVar19 = lVar19 + 4;
      pcVar18 = pcVar18 + 8;
      pauVar21 = pauVar21 + 1;
    } while (lVar19 != 0);
    if (param_3 == uVar10) goto LAB_104c47560;
  }
LAB_104c47528:
  lVar19 = param_3 - uVar10;
  pfVar11 = (float *)((long)param_2 + uVar10 * 4);
  pcVar18 = pcVar26 + uVar10 * 2;
  do {
    iVar23 = (int)(*pfVar11 * 32768.0);
    if (iVar23 < -0x7fff) {
      iVar23 = -0x8000;
    }
    if (0x7ffe < iVar23) {
      iVar23 = 0x7fff;
    }
    *(short *)pcVar18 = (short)iVar23;
    lVar19 = lVar19 + -1;
    pfVar11 = pfVar11 + 1;
    pcVar18 = pcVar18 + 2;
  } while (lVar19 != 0);
LAB_104c47560:
  if ((uVar6 & 0xffff) != 0) {
    uVar25 = (ulong)uVar6 & 0xffff;
    pcVar18 = pcVar26;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1,(long)*pcVar18);
      uVar25 = uVar25 - 1;
      pcVar18 = pcVar18 + 1;
    } while (uVar25 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(pcVar26);
  return;
}



/* Entry: 104c475c8; end: 104c47fc7;  */

/* WARNING: Removing unreachable block (ram,0x000104c47930) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_104c475c8(undefined8 *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong ******ppppppuVar3;
  byte bVar4;
  code *pcVar5;
  long *plVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong *******pppppppuVar11;
  undefined8 *puVar12;
  undefined8 *******pppppppuVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  ulong *******pppppppuVar18;
  ulong *******pppppppuVar19;
  long lVar20;
  ulong *******pppppppuVar21;
  ulong uVar22;
  ulong *puVar23;
  long lVar24;
  undefined8 *******pppppppuStack_170;
  ulong *******pppppppuStack_168;
  ulong *******pppppppuStack_160;
  ulong *******pppppppuStack_158;
  ulong *******pppppppuStack_150;
  ulong ******ppppppuStack_148;
  ulong *******pppppppuStack_140;
  ulong *******pppppppuStack_138;
  ulong *******pppppppuStack_130;
  undefined4 uStack_128;
  ulong ******ppppppuStack_120;
  ulong ******ppppppuStack_118;
  ulong ******ppppppuStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *******pppppppuStack_b8;
  ulong *******pppppppuStack_b0;
  ulong *******pppppppuStack_a8;
  undefined8 *******pppppppuStack_a0;
  ulong *******pppppppuStack_98;
  ulong *******pppppppuStack_90;
  undefined1 uStack_88;
  ulong *******pppppppuStack_80;
  ulong *******pppppppuStack_78;
  ulong *******pppppppuStack_70;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_104c348b4(param_1,(long)(int)param_2[1]);
  puVar23 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar23 = (ulong *)(*param_2 + 7);
  }
  if ((int)param_2[1] != 0) {
    puVar1 = puVar23 + (int)param_2[1];
    do {
      uVar22 = *puVar23;
      pppppppuStack_80 = (ulong *******)0x0;
      pppppppuStack_78 = (ulong *******)0x0;
      pppppppuStack_70 = (ulong *******)0x0;
      pppppppuStack_a8 = (ulong *******)0x0;
      pppppppuStack_b0 = (ulong *******)0x0;
      pppppppuStack_a0 = (undefined8 *******)0x0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      pppppppuStack_b8 = (undefined8 *******)0x0;
      uStack_c0 = 0;
      lStack_e8 = 0;
      uStack_f0 = 0;
      plStack_d8 = (long *)0x0;
      plStack_e0 = (long *)0x0;
      uStack_f8 = 0;
      uStack_100 = 0;
      puVar8 = (undefined8 *)(*(ulong *)(uVar22 + 0x30) & 0xfffffffffffffffc);
      if (&uStack_100 != puVar8) {
        if (*(char *)((long)puVar8 + 0x17) < '\0') {
          func_0x00010014884c(&uStack_100,*puVar8,puVar8[1]);
        }
        else {
          uStack_f8 = puVar8[1];
          uStack_100 = *puVar8;
          uStack_f0 = puVar8[2];
        }
      }
      if (*(int *)(uVar22 + 0x48) == 4) {
        lVar17 = 0;
        pppppppuStack_140 = (ulong *******)0x0;
        pppppppuStack_138 = (ulong *******)0x0;
        pppppppuStack_130 = (ulong *******)0x0;
        lVar24 = 8;
        auStack_108[0] = 0;
        iVar7 = 4;
        while( true ) {
          if (iVar7 == 4) {
            ppuVar9 = *(undefined ***)(uVar22 + 0x40);
            iVar7 = *(int *)(ppuVar9 + 3);
          }
          else {
            ppuVar9 = &PTR_PTR_1133087b0;
            iVar7 = iRam00000001133087c8;
          }
          if (iVar7 <= lVar17) break;
          puVar15 = ppuVar9[2];
          ppuVar9 = ppuVar9 + 2;
          if (((ulong)puVar15 & 1) != 0) {
            ppuVar9 = (undefined **)(puVar15 + lVar24 + -1);
          }
          puVar8 = (undefined8 *)*ppuVar9;
          if (*(char *)((long)puVar8 + 0x17) < '\0') {
            func_0x000100033dac(&ppppppuStack_120,*puVar8,puVar8[1]);
          }
          else {
            ppppppuStack_118 = (ulong ******)puVar8[1];
            ppppppuStack_120 = (ulong ******)*puVar8;
            ppppppuStack_110 = (ulong ******)puVar8[2];
          }
          pppppppuVar11 = pppppppuStack_138;
          pppppppuVar19 = pppppppuStack_140;
          if (pppppppuStack_138 < pppppppuStack_130) {
            if ((long)ppppppuStack_110 < 0) {
              func_0x000100033dac(pppppppuStack_138,ppppppuStack_120,ppppppuStack_118);
              pppppppuVar11 = pppppppuVar11 + 3;
            }
            else {
              pppppppuStack_138[2] = ppppppuStack_110;
              pppppppuStack_138[1] = ppppppuStack_118;
              *pppppppuStack_138 = ppppppuStack_120;
              pppppppuVar11 = pppppppuStack_138 + 3;
            }
          }
          else {
            lVar20 = (long)pppppppuStack_138 - (long)pppppppuStack_140;
            uVar14 = (lVar20 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar14) {
              FUN_104bdcf60();
LAB_104c47e6c:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x104c47e70);
              (*pcVar5)();
            }
            lVar10 = (long)pppppppuStack_130 - (long)pppppppuStack_140 >> 3;
            uVar16 = lVar10 * 0x5555555555555556;
            if (uVar16 < uVar14 || uVar16 - uVar14 == 0) {
              uVar16 = uVar14;
            }
            if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
              uVar16 = 0xaaaaaaaaaaaaaaa;
            }
            pppppppuStack_150 = (ulong *******)&pppppppuStack_130;
            if (uVar16 == 0) {
              pppppppuVar13 = (undefined8 *******)0x0;
            }
            else {
              if (0xaaaaaaaaaaaaaaa < uVar16) {
                FUN_104bd35f4();
                goto LAB_104c47e6c;
              }
              pppppppuVar13 = (undefined8 *******)(uVar16 * 0x18);
              __Znwm();
            }
            pppppppuVar21 = (ulong *******)((long)pppppppuVar13 + lVar20);
            pppppppuVar18 = pppppppuVar13 + uVar16 * 3;
            pppppppuStack_170 = pppppppuVar13;
            pppppppuStack_168 = pppppppuVar21;
            pppppppuStack_160 = pppppppuVar21;
            pppppppuStack_158 = pppppppuVar18;
            if ((long)ppppppuStack_110 < 0) {
              func_0x000100033dac(pppppppuVar21,ppppppuStack_120,ppppppuStack_118);
              lVar20 = (long)pppppppuStack_138 - (long)pppppppuStack_140;
              pppppppuVar19 = pppppppuStack_140;
            }
            else {
              pppppppuVar21[1] = ppppppuStack_118;
              *pppppppuVar21 = ppppppuStack_120;
              pppppppuVar21[2] = ppppppuStack_110;
            }
            pppppppuVar11 = pppppppuVar21 + 3;
            pppppppuVar21 = (ulong *******)((long)pppppppuVar21 - lVar20);
            _memcpy(pppppppuVar21,pppppppuVar19,lVar20);
            pppppppuStack_140 = pppppppuVar21;
            pppppppuStack_130 = pppppppuVar18;
            if (pppppppuVar19 != (ulong *******)0x0) {
              pppppppuStack_138 = pppppppuVar11;
              __ZdlPv(pppppppuVar19);
            }
          }
          pppppppuStack_138 = pppppppuVar11;
          if ((long)ppppppuStack_110 < 0) {
            __ZdlPv(ppppppuStack_120);
          }
          lVar17 = lVar17 + 1;
          iVar7 = *(int *)(uVar22 + 0x48);
          lVar24 = lVar24 + 8;
        }
        FUN_104c351d0(&uStack_d0,pppppppuStack_140,pppppppuStack_138,
                      ((long)pppppppuStack_138 - (long)pppppppuStack_140 >> 3) * -0x5555555555555555
                     );
        if (pppppppuStack_140 != (ulong *******)0x0) {
          for (; pppppppuStack_140 != pppppppuStack_138; pppppppuStack_138 = pppppppuStack_138 + -3)
          {
          }
          pppppppuStack_138 = pppppppuStack_140;
          __ZdlPv(pppppppuStack_140);
        }
      }
      if ((*(byte *)(uVar22 + 0x10) & 1) == 0) {
LAB_104c47a74:
        iVar7 = *(int *)(uVar22 + 0x48);
      }
      else {
        pppppppuStack_170 = (undefined8 *******)((ulong)pppppppuStack_170 & 0xffffffffffffff00);
        pppppppuStack_160 = (ulong *******)0x0;
        pppppppuStack_158 = (ulong *******)0x0;
        pppppppuStack_168 = (ulong *******)0x0;
        func_0x00010adf513c(&pppppppuStack_140,0,*(undefined8 *)(uVar22 + 0x38));
        pppppppuStack_170 = (undefined8 *******)CONCAT71(pppppppuStack_170._1_7_,(char)uStack_128);
        pppppppuVar11 = (ulong *******)((ulong)pppppppuStack_130 & 0xfffffffffffffffc);
        if (&pppppppuStack_168 != (ulong ********)pppppppuVar11) {
          bVar4 = *(byte *)((long)pppppppuVar11 + 0x17);
          if ((long)pppppppuStack_158 < 0) {
            ppppppuVar3 = pppppppuVar11[1];
            pppppppuVar19 = (ulong *******)*pppppppuVar11;
            if (-1 < (char)bVar4) {
              ppppppuVar3 = (ulong ******)(ulong)bVar4;
              pppppppuVar19 = pppppppuVar11;
            }
            func_0x0001006aabfc(&pppppppuStack_168,pppppppuVar19,ppppppuVar3);
          }
          else if ((char)bVar4 < '\0') {
            func_0x00010014884c(&pppppppuStack_168,*pppppppuVar11,pppppppuVar11[1]);
          }
          else {
            pppppppuStack_160 = (ulong *******)pppppppuVar11[1];
            pppppppuStack_168 = (ulong *******)*pppppppuVar11;
            pppppppuStack_158 = (ulong *******)pppppppuVar11[2];
          }
        }
        uStack_88 = pppppppuStack_170._0_1_;
        if ((long)pppppppuStack_70 < 0) {
          pppppppuVar11 = pppppppuStack_160;
          pppppppuVar19 = pppppppuStack_168;
          if (-1 < (long)pppppppuStack_158) {
            pppppppuVar11 = (ulong *******)((ulong)pppppppuStack_158 >> 0x38);
            pppppppuVar19 = (ulong *******)&pppppppuStack_168;
          }
          func_0x0001006aabfc(&pppppppuStack_80,pppppppuVar19,pppppppuVar11);
        }
        else if ((long)pppppppuStack_158 < 0) {
          func_0x00010014884c(&pppppppuStack_80,pppppppuStack_168,pppppppuStack_160);
        }
        else {
          pppppppuStack_78 = pppppppuStack_160;
          pppppppuStack_80 = pppppppuStack_168;
          pppppppuStack_70 = pppppppuStack_158;
        }
        if (((ulong)pppppppuStack_138 & 1) != 0) {
          func_0x0001053936ac(&pppppppuStack_138);
        }
        puVar12 = (undefined8 *)((ulong)pppppppuStack_130 ^ 2);
        puVar8 = puVar12;
        if (((ulong)puVar12 & 3) != 0) {
          puVar8 = (undefined8 *)0x0;
        }
        if ((puVar8 == (undefined8 *)0x0) || (-1 < *(char *)((long)puVar12 + 0x17))) {
          __ZdlPv();
        }
        else {
          __ZdlPv(*puVar12);
          __ZdlPv(puVar8);
        }
        if (-1 < (long)pppppppuStack_158) goto LAB_104c47a74;
        __ZdlPv(pppppppuStack_168);
        iVar7 = *(int *)(uVar22 + 0x48);
      }
      if (iVar7 == 5) {
        auStack_108[0] = 1;
        pppppppuStack_168 = (ulong *******)0x0;
        pppppppuStack_160 = (ulong *******)0x0;
        pppppppuStack_170 = (undefined8 *******)0x0;
        pppppppuVar13 =
             (undefined8 *******)(*(ulong *)(*(long *)(uVar22 + 0x40) + 0x10) & 0xfffffffffffffffc);
        if (&pppppppuStack_170 != (undefined8 ********)pppppppuVar13) {
          if (*(char *)((long)pppppppuVar13 + 0x17) < '\0') {
            func_0x00010014884c(&pppppppuStack_170,*pppppppuVar13,pppppppuVar13[1]);
          }
          else {
            pppppppuStack_168 = (ulong *******)pppppppuVar13[1];
            pppppppuStack_170 = (undefined8 *******)*pppppppuVar13;
            pppppppuStack_160 = (ulong *******)pppppppuVar13[2];
          }
        }
        if ((long)pppppppuStack_a8 < 0) {
          pppppppuVar11 = pppppppuStack_168;
          pppppppuVar13 = pppppppuStack_170;
          if (-1 < (long)pppppppuStack_160) {
            pppppppuVar11 = (ulong *******)((ulong)pppppppuStack_160 >> 0x38);
            pppppppuVar13 = &pppppppuStack_170;
          }
          func_0x0001006aabfc(&pppppppuStack_b8,pppppppuVar13,pppppppuVar11);
LAB_104c47b2c:
          if ((long)pppppppuStack_160 < 0) {
            __ZdlPv(pppppppuStack_170);
          }
        }
        else {
          if ((long)pppppppuStack_160 < 0) {
            func_0x00010014884c(&pppppppuStack_b8,pppppppuStack_170,pppppppuStack_168);
            goto LAB_104c47b2c;
          }
          pppppppuStack_b0 = pppppppuStack_168;
          pppppppuStack_b8 = pppppppuStack_170;
          pppppppuStack_a8 = pppppppuStack_160;
        }
        iVar7 = *(int *)(uVar22 + 0x48);
      }
      if (iVar7 == 6) {
        auStack_108[0] = 2;
        pppppppuStack_168 = (ulong *******)0x0;
        pppppppuStack_160 = (ulong *******)0x0;
        pppppppuStack_170 = (undefined8 *******)0x0;
        pppppppuVar13 =
             (undefined8 *******)(*(ulong *)(*(long *)(uVar22 + 0x40) + 0x10) & 0xfffffffffffffffc);
        if (&pppppppuStack_170 != (undefined8 ********)pppppppuVar13) {
          if (*(char *)((long)pppppppuVar13 + 0x17) < '\0') {
            func_0x00010014884c(&pppppppuStack_170,*pppppppuVar13,pppppppuVar13[1]);
          }
          else {
            pppppppuStack_168 = (ulong *******)pppppppuVar13[1];
            pppppppuStack_170 = (undefined8 *******)*pppppppuVar13;
            pppppppuStack_160 = (ulong *******)pppppppuVar13[2];
          }
        }
        if ((long)pppppppuStack_90 < 0) {
          pppppppuVar11 = pppppppuStack_168;
          pppppppuVar13 = pppppppuStack_170;
          if (-1 < (long)pppppppuStack_160) {
            pppppppuVar11 = (ulong *******)((ulong)pppppppuStack_160 >> 0x38);
            pppppppuVar13 = &pppppppuStack_170;
          }
          func_0x0001006aabfc(&pppppppuStack_a0,pppppppuVar13,pppppppuVar11);
LAB_104c47c00:
          if (-1 < (long)pppppppuStack_160) goto LAB_104c47c08;
          __ZdlPv(pppppppuStack_170);
          iVar7 = *(int *)(uVar22 + 0x20);
        }
        else {
          if ((long)pppppppuStack_160 < 0) {
            func_0x00010014884c(&pppppppuStack_a0,pppppppuStack_170,pppppppuStack_168);
            goto LAB_104c47c00;
          }
          iVar7 = *(int *)(uVar22 + 0x20);
          pppppppuStack_a0 = pppppppuStack_170;
          pppppppuStack_98 = pppppppuStack_168;
          pppppppuStack_90 = pppppppuStack_160;
        }
      }
      else {
LAB_104c47c08:
        iVar7 = *(int *)(uVar22 + 0x20);
      }
      if (0 < iVar7) {
        lVar17 = 0;
        lVar24 = 8;
        do {
          while( true ) {
            uVar14 = *(ulong *)(uVar22 + 0x18);
            puVar2 = (ulong *)(uVar22 + 0x18);
            if ((uVar14 & 1) != 0) {
              puVar2 = (ulong *)(uVar14 + lVar24 + -1);
            }
            uVar14 = *puVar2;
            pppppppuStack_158 = (ulong *******)0x0;
            pppppppuStack_160 = (ulong *******)0x0;
            ppppppuStack_148 = (ulong ******)0x0;
            pppppppuStack_150 = (ulong *******)0x0;
            pppppppuStack_168 = (ulong *******)0x0;
            pppppppuStack_170 = (undefined8 *******)0x0;
            pppppppuVar13 = (undefined8 *******)(*(ulong *)(uVar14 + 0x10) & 0xfffffffffffffffc);
            if (&pppppppuStack_170 != (undefined8 ********)pppppppuVar13) {
              if (*(char *)((long)pppppppuVar13 + 0x17) < '\0') {
                func_0x00010014884c(&pppppppuStack_170,*pppppppuVar13,pppppppuVar13[1]);
              }
              else {
                pppppppuStack_168 = (ulong *******)pppppppuVar13[1];
                pppppppuStack_170 = (undefined8 *******)*pppppppuVar13;
                pppppppuStack_160 = (ulong *******)pppppppuVar13[2];
              }
            }
            pppppppuVar11 = (ulong *******)(*(ulong *)(uVar14 + 0x18) & 0xfffffffffffffffc);
            if (&pppppppuStack_158 != (ulong ********)pppppppuVar11) {
              bVar4 = *(byte *)((long)pppppppuVar11 + 0x17);
              if ((long)ppppppuStack_148 < 0) {
                ppppppuVar3 = pppppppuVar11[1];
                pppppppuVar19 = (ulong *******)*pppppppuVar11;
                if (-1 < (char)bVar4) {
                  ppppppuVar3 = (ulong ******)(ulong)bVar4;
                  pppppppuVar19 = pppppppuVar11;
                }
                func_0x0001006aabfc(&pppppppuStack_158,pppppppuVar19,ppppppuVar3);
              }
              else if ((char)bVar4 < '\0') {
                func_0x00010014884c(&pppppppuStack_158,*pppppppuVar11,pppppppuVar11[1]);
              }
              else {
                pppppppuStack_150 = (ulong *******)pppppppuVar11[1];
                pppppppuStack_158 = (ulong *******)*pppppppuVar11;
                ppppppuStack_148 = pppppppuVar11[2];
              }
            }
            plVar6 = plStack_e0;
            if (plStack_e0 < plStack_d8) break;
            plVar6 = &lStack_e8;
            FUN_104c34d60(plVar6,&pppppppuStack_170);
            plStack_e0 = plVar6;
joined_r0x000104c47d44:
            if ((long)ppppppuStack_148 < 0) goto LAB_104c47c24;
LAB_104c47da0:
            if ((long)pppppppuStack_160 < 0) goto LAB_104c47da8;
LAB_104c47c34:
            lVar17 = lVar17 + 1;
            lVar24 = lVar24 + 8;
            if (*(int *)(uVar22 + 0x20) <= lVar17) goto LAB_104c47dc4;
          }
          if ((long)pppppppuStack_160 < 0) {
            func_0x000100033dac(plStack_e0,pppppppuStack_170,pppppppuStack_168);
          }
          else {
            plStack_e0[2] = (long)pppppppuStack_160;
            plStack_e0[1] = (long)pppppppuStack_168;
            *plVar6 = (long)pppppppuStack_170;
          }
          if ((long)ppppppuStack_148 < 0) {
            func_0x000100033dac(plVar6 + 3,pppppppuStack_158,pppppppuStack_150);
            plStack_e0 = plVar6 + 6;
            goto joined_r0x000104c47d44;
          }
          plVar6[5] = (long)ppppppuStack_148;
          plVar6[4] = (long)pppppppuStack_150;
          plVar6[3] = (long)pppppppuStack_158;
          plStack_e0 = plVar6 + 6;
          if (-1 < (long)ppppppuStack_148) goto LAB_104c47da0;
LAB_104c47c24:
          __ZdlPv(pppppppuStack_158);
          if (-1 < (long)pppppppuStack_160) goto LAB_104c47c34;
LAB_104c47da8:
          __ZdlPv(pppppppuStack_170);
          lVar17 = lVar17 + 1;
          lVar24 = lVar24 + 8;
        } while (lVar17 < *(int *)(uVar22 + 0x20));
      }
LAB_104c47dc4:
      uVar22 = param_1[1];
      if (uVar22 < (ulong)param_1[2]) {
        FUN_104c34edc(uVar22,auStack_108);
        puVar8 = (undefined8 *)(uVar22 + 0xa0);
      }
      else {
        puVar8 = param_1;
        FUN_104c34e48(param_1,auStack_108);
      }
      param_1[1] = puVar8;
      func_0x000104c35148(auStack_108);
      puVar23 = puVar23 + 1;
    } while (puVar23 != puVar1);
  }
  return;
}



/* Entry: 104c47fc8; end: 104c4832f;  */

void FUN_104c47fc8(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  long *plVar16;
  long lVar17;
  undefined4 auStack_98 [2];
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined6 uStack_6f;
  char cStack_69;
  undefined1 uStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar3 = (int)param_2[1];
  if (iVar3 != 0) {
    if (iVar3 < 0) {
      func_0x000104c4a944();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x104c482ac);
      (*pcVar6)();
    }
    lVar12 = (long)iVar3 * 0x38;
    __Znwm();
    *param_1 = lVar12;
    param_1[1] = lVar12;
    param_1[2] = lVar12 + (long)iVar3 * 0x38;
  }
  if ((*param_2 & 1) != 0) {
    param_2 = (ulong *)(*param_2 + 7);
  }
  if (iVar3 != 0) {
    puVar1 = param_2 + iVar3;
    do {
      uVar13 = *param_2;
      uStack_6f = 0;
      cStack_69 = '\0';
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_77 = 0;
      uStack_80 = 0;
      plStack_88 = (long *)0x0;
      plStack_90 = (long *)0x0;
      auStack_98[0] = *(undefined4 *)(uVar13 + 0x20);
      ppuVar10 = &PTR_PTR_113308720;
      if (*(undefined ***)(uVar13 + 0x18) != (undefined **)0x0) {
        ppuVar10 = *(undefined ***)(uVar13 + 0x18);
      }
      uStack_68 = (undefined1)*(undefined4 *)(ppuVar10 + 3);
      ppuVar10 = &PTR_PTR_113308720;
      if (*(undefined ***)(uVar13 + 0x18) != (undefined **)0x0) {
        ppuVar10 = *(undefined ***)(uVar13 + 0x18);
      }
      puVar8 = (undefined8 *)((ulong)ppuVar10[2] & 0xfffffffffffffffc);
      if (&uStack_80 != puVar8) {
        if (*(char *)((long)puVar8 + 0x17) < '\0') {
          func_0x00010014884c(&uStack_80,*puVar8,puVar8[1]);
        }
        else {
          uStack_80 = *puVar8;
          uVar9 = puVar8[2];
          uStack_70 = (undefined1)uVar9;
          uStack_6f = (undefined6)((ulong)uVar9 >> 8);
          cStack_69 = (char)((ulong)uVar9 >> 0x38);
          uStack_78 = (undefined1)puVar8[1];
          uStack_77 = (undefined7)((ulong)puVar8[1] >> 8);
        }
      }
      ppuVar10 = &PTR_PTR_113308770;
      if (*(int *)(uVar13 + 0x30) == 2) {
        ppuVar10 = *(undefined ***)(uVar13 + 0x28);
      }
      puVar15 = ppuVar10[2];
      uVar2 = *(undefined4 *)(ppuVar10 + 3);
      plVar7 = (long *)0x48;
      __Znwm();
      plVar11 = (long *)((ulong)puVar15 & 0xfffffffffffffffc);
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_1107ebeb0;
      plVar16 = plVar7 + 3;
      *plVar16 = (long)&PTR_DAT_1107ebf00;
      *(undefined1 *)(plVar7 + 4) = 0;
      if (*(char *)((long)plVar11 + 0x17) < '\0') {
        func_0x000100033dac(plVar7 + 5,*plVar11,plVar11[1]);
      }
      else {
        lVar17 = plVar11[1];
        lVar12 = *plVar11;
        plVar7[7] = plVar11[2];
        plVar7[6] = lVar17;
        plVar7[5] = lVar12;
      }
      plVar11 = plStack_88;
      *(undefined4 *)(plVar7 + 8) = uVar2;
      plStack_90 = plVar16;
      if (plStack_88 == (long *)0x0) {
LAB_104c48180:
        puVar14 = (undefined4 *)param_1[1];
        plStack_88 = plVar7;
        if (puVar14 < (undefined4 *)param_1[2]) goto LAB_104c4818c;
LAB_104c481f8:
        plVar7 = param_1;
        FUN_104c4aa00(param_1,auStack_98);
        param_1[1] = (long)plVar7;
      }
      else {
        plVar16 = plStack_88 + 1;
        do {
          lVar12 = *plVar16;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *plVar16 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 != 0) goto LAB_104c48180;
        lVar12 = *plStack_88;
        plStack_88 = plVar7;
        (**(code **)(lVar12 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        puVar14 = (undefined4 *)param_1[1];
        if ((undefined4 *)param_1[2] <= puVar14) goto LAB_104c481f8;
LAB_104c4818c:
        *puVar14 = auStack_98[0];
        *(long **)(puVar14 + 4) = plStack_88;
        *(long **)(puVar14 + 2) = plStack_90;
        if (plStack_88 != (long *)0x0) {
          plVar7 = plStack_88 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = *plVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (cStack_69 < '\0') {
          func_0x000100033dac(puVar14 + 6,uStack_80,CONCAT71(uStack_77,uStack_78));
        }
        else {
          *(ulong *)(puVar14 + 10) = CONCAT17(cStack_69,CONCAT61(uStack_6f,uStack_70));
          *(ulong *)(puVar14 + 8) = CONCAT71(uStack_77,uStack_78);
          *(undefined8 *)(puVar14 + 6) = uStack_80;
        }
        *(undefined1 *)(puVar14 + 0xc) = uStack_68;
        param_1[1] = (long)(puVar14 + 0xe);
      }
      plVar7 = plStack_88;
      if (cStack_69 < '\0') {
        __ZdlPv(uStack_80);
        plVar7 = plStack_88;
      }
      if (plVar7 != (long *)0x0) {
        plVar11 = plVar7 + 1;
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
          plStack_88 = plVar7;
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 != puVar1);
  }
  return;
}



/* Entry: 104c48330; end: 104c483af;  */

long FUN_104c48330(long param_1)

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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c483b0; end: 104c4a333;  */

/* WARNING: Removing unreachable block (ram,0x000104c48fe4) */
/* WARNING: Removing unreachable block (ram,0x000104c48eec) */
/* WARNING: Removing unreachable block (ram,0x000104c48d28) */
/* WARNING: Removing unreachable block (ram,0x000104c497d8) */
/* WARNING: Removing unreachable block (ram,0x000104c497dc) */
/* WARNING: Removing unreachable block (ram,0x000104c497f0) */
/* WARNING: Removing unreachable block (ram,0x000104c495c4) */
/* WARNING: Removing unreachable block (ram,0x000104c49958) */
/* WARNING: Removing unreachable block (ram,0x000104c49954) */
/* WARNING: Removing unreachable block (ram,0x000104c4996c) */
/* WARNING: Removing unreachable block (ram,0x000104c48f10) */
/* WARNING: Removing unreachable block (ram,0x000104c49248) */
/* WARNING: Removing unreachable block (ram,0x000104c48d4c) */
/* WARNING: Removing unreachable block (ram,0x000104c49260) */
/* WARNING: Removing unreachable block (ram,0x000104c49ad0) */
/* WARNING: Removing unreachable block (ram,0x000104c49ad4) */
/* WARNING: Removing unreachable block (ram,0x000104c49ae8) */
/* WARNING: Removing unreachable block (ram,0x000104c49280) */
/* WARNING: Type propagation algorithm not settling */

void FUN_104c483b0(long param_1,long *param_2)

{
  ulong *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  long *plVar15;
  uint *puVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  long *******ppppppplVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong *puVar25;
  undefined4 *puVar26;
  int *piVar27;
  int iVar28;
  ulong uVar29;
  ulong *puVar30;
  undefined8 *puVar31;
  long ******pppppplVar32;
  long lVar33;
  long *******ppppppplVar34;
  long ******pppppplVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long ******pppppplVar38;
  undefined8 auStack_1c8 [2];
  char cStack_1b1;
  long lStack_1b0;
  long lStack_1a8;
  long *plStack_190;
  undefined8 auStack_188 [2];
  char cStack_171;
  long lStack_170;
  long lStack_168;
  long *plStack_150;
  undefined8 auStack_148 [2];
  char cStack_131;
  long lStack_130;
  long lStack_128;
  long *plStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  long ******pppppplStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  long ******apppppplStack_c8 [2];
  undefined8 *puStack_b8;
  long *******ppppppplStack_b0;
  undefined1 uStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  undefined1 uStack_88;
  long *******ppppppplStack_80;
  long *******appppppplStack_78 [3];
  
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(*param_2 + 4);
  lVar18 = *param_2;
  plVar8 = *(long **)(param_1 + 8);
  if (((ulong)plVar8 & 1) != 0) {
    plVar8 = *(long **)((ulong)plVar8 & 0xfffffffffffffffe);
  }
  puVar11 = (undefined8 *)(lVar18 + 0x10);
  if ((*(ulong *)(param_1 + 0x58) & 3) != 0) {
    puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
    if (puVar11 != puVar9) {
      bVar3 = *(byte *)(lVar18 + 0x27);
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        uVar23 = *(ulong *)(lVar18 + 0x18);
        puVar31 = *(undefined8 **)(lVar18 + 0x10);
        if (-1 < (char)bVar3) {
          uVar23 = (ulong)bVar3;
          puVar31 = puVar11;
        }
        func_0x0001006aabfc(puVar9,puVar31,uVar23);
      }
      else if ((char)bVar3 < '\0') {
        func_0x00010014884c(puVar9,*(undefined8 *)(lVar18 + 0x10),*(undefined8 *)(lVar18 + 0x18));
      }
      else {
        uVar37 = *(undefined8 *)(lVar18 + 0x18);
        uVar36 = *puVar11;
        puVar9[2] = *(undefined8 *)(lVar18 + 0x20);
        puVar9[1] = uVar37;
        *puVar9 = uVar36;
      }
    }
LAB_104c48550:
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(*param_2 + 0x60);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*param_2 + 0x68);
    *(undefined1 *)(param_1 + 0x8e) = *(undefined1 *)(*param_2 + 100);
    *(undefined1 *)(param_1 + 0x8f) = *(undefined1 *)(*param_2 + 0x65);
    *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(*param_2 + 0x66);
    lVar18 = *param_2;
    plVar8 = *(long **)(param_1 + 8);
    if (((ulong)plVar8 & 1) == 0) {
      uVar23 = *(ulong *)(param_1 + 0x60);
      if ((uVar23 & 3) != 0) goto LAB_104c485ac;
LAB_104c48628:
      uVar23 = *(ulong *)(lVar18 + 0xc0);
      plVar15 = (long *)*(long *)(lVar18 + 0xb8);
      if (-1 < (char)*(byte *)(lVar18 + 0xcf)) {
        uVar23 = (ulong)*(byte *)(lVar18 + 0xcf);
        plVar15 = (long *)(lVar18 + 0xb8);
      }
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar23) {
          FUN_104bd47d4();
          goto LAB_104c4a080;
        }
        if (0x16 < uVar23) {
          plVar10 = (long *)0x19;
          if ((uVar23 | 7) != 0x17) {
            plVar10 = (long *)((uVar23 | 7) + 1);
          }
          plVar12 = plVar10;
          __Znwm();
          *plVar8 = (long)plVar12;
          uVar29 = 2;
          goto LAB_104c486e4;
        }
        *(char *)((long)plVar8 + 0x17) = (char)uVar23;
        uVar29 = 2;
        plVar12 = plVar8;
        plVar10 = plVar8;
        if (uVar23 != 0) goto LAB_104c486f4;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar23) goto LAB_104c4a058;
        if (uVar23 < 0x17) {
          *(char *)((long)plVar8 + 0x17) = (char)uVar23;
          uVar29 = 3;
          plVar12 = plVar8;
          plVar10 = plVar8;
          if (uVar23 == 0) goto LAB_104c48704;
        }
        else {
          plVar10 = (long *)0x19;
          if ((uVar23 | 7) != 0x17) {
            plVar10 = (long *)((uVar23 | 7) + 1);
          }
          plVar12 = plVar10;
          __Znwm();
          *plVar8 = (long)plVar12;
          uVar29 = 3;
LAB_104c486e4:
          plVar8[1] = uVar23;
          plVar8[2] = (ulong)plVar10 | 0x8000000000000000;
          plVar10 = plVar8;
        }
LAB_104c486f4:
        _memmove(plVar12,plVar15,uVar23);
        plVar8 = plVar12;
      }
LAB_104c48704:
      *(undefined1 *)((long)plVar8 + uVar23) = 0;
      *(ulong *)(param_1 + 0x60) = uVar29 | (ulong)plVar10;
    }
    else {
      plVar8 = *(long **)((ulong)plVar8 & 0xfffffffffffffffe);
      uVar23 = *(ulong *)(param_1 + 0x60);
      if ((uVar23 & 3) == 0) goto LAB_104c48628;
LAB_104c485ac:
      puVar9 = (undefined8 *)(lVar18 + 0xb8);
      puVar11 = (undefined8 *)(uVar23 & 0xfffffffffffffffc);
      if (puVar9 != puVar11) {
        bVar3 = *(byte *)(lVar18 + 0xcf);
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          uVar23 = *(ulong *)(lVar18 + 0xc0);
          puVar31 = *(undefined8 **)(lVar18 + 0xb8);
          if (-1 < (char)bVar3) {
            uVar23 = (ulong)bVar3;
            puVar31 = puVar9;
          }
          func_0x0001006aabfc(puVar11,puVar31,uVar23);
        }
        else if ((char)bVar3 < '\0') {
          func_0x00010014884c(puVar11,*(undefined8 *)(lVar18 + 0xb8),*(undefined8 *)(lVar18 + 0xc0))
          ;
        }
        else {
          uVar37 = *(undefined8 *)(lVar18 + 0xc0);
          uVar36 = *puVar9;
          puVar11[2] = *(undefined8 *)(lVar18 + 200);
          puVar11[1] = uVar37;
          *puVar11 = uVar36;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*param_2 + 0x40);
    lVar18 = *param_2;
    plVar8 = *(long **)(param_1 + 8);
    if (((ulong)plVar8 & 1) == 0) {
      uVar23 = *(ulong *)(param_1 + 0x68);
      if ((uVar23 & 3) != 0) goto LAB_104c48740;
LAB_104c487b0:
      uVar23 = *(ulong *)(lVar18 + 0x50);
      plVar15 = (long *)*(long *)(lVar18 + 0x48);
      if (-1 < (char)*(byte *)(lVar18 + 0x5f)) {
        uVar23 = (ulong)*(byte *)(lVar18 + 0x5f);
        plVar15 = (long *)(lVar18 + 0x48);
      }
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar23) {
          FUN_104bd47d4();
          goto LAB_104c4a080;
        }
        if (0x16 < uVar23) {
          plVar10 = (long *)0x19;
          if ((uVar23 | 7) != 0x17) {
            plVar10 = (long *)((uVar23 | 7) + 1);
          }
          plVar12 = plVar10;
          __Znwm();
          *plVar8 = (long)plVar12;
          uVar29 = 2;
          goto LAB_104c4886c;
        }
        *(char *)((long)plVar8 + 0x17) = (char)uVar23;
        uVar29 = 2;
        plVar12 = plVar8;
        plVar10 = plVar8;
        if (uVar23 != 0) goto LAB_104c4887c;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar23) goto LAB_104c4a058;
        if (uVar23 < 0x17) {
          *(char *)((long)plVar8 + 0x17) = (char)uVar23;
          uVar29 = 3;
          plVar12 = plVar8;
          plVar10 = plVar8;
          if (uVar23 == 0) goto LAB_104c4888c;
        }
        else {
          plVar10 = (long *)0x19;
          if ((uVar23 | 7) != 0x17) {
            plVar10 = (long *)((uVar23 | 7) + 1);
          }
          plVar12 = plVar10;
          __Znwm();
          *plVar8 = (long)plVar12;
          uVar29 = 3;
LAB_104c4886c:
          plVar8[1] = uVar23;
          plVar8[2] = (ulong)plVar10 | 0x8000000000000000;
          plVar10 = plVar8;
        }
LAB_104c4887c:
        _memmove(plVar12,plVar15,uVar23);
        plVar8 = plVar12;
      }
LAB_104c4888c:
      *(undefined1 *)((long)plVar8 + uVar23) = 0;
      *(ulong *)(param_1 + 0x68) = uVar29 | (ulong)plVar10;
    }
    else {
      plVar8 = *(long **)((ulong)plVar8 & 0xfffffffffffffffe);
      uVar23 = *(ulong *)(param_1 + 0x68);
      if ((uVar23 & 3) == 0) goto LAB_104c487b0;
LAB_104c48740:
      puVar9 = (undefined8 *)(lVar18 + 0x48);
      puVar11 = (undefined8 *)(uVar23 & 0xfffffffffffffffc);
      if (puVar9 != puVar11) {
        bVar3 = *(byte *)(lVar18 + 0x5f);
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          uVar23 = *(ulong *)(lVar18 + 0x50);
          puVar31 = *(undefined8 **)(lVar18 + 0x48);
          if (-1 < (char)bVar3) {
            uVar23 = (ulong)bVar3;
            puVar31 = puVar9;
          }
          func_0x0001006aabfc(puVar11,puVar31,uVar23);
        }
        else if ((char)bVar3 < '\0') {
          func_0x00010014884c(puVar11,*(undefined8 *)(lVar18 + 0x48),*(undefined8 *)(lVar18 + 0x50))
          ;
        }
        else {
          uVar37 = *(undefined8 *)(lVar18 + 0x50);
          uVar36 = *puVar9;
          puVar11[2] = *(undefined8 *)(lVar18 + 0x58);
          puVar11[1] = uVar37;
          *puVar11 = uVar36;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x8c) = *(undefined1 *)*param_2;
    *(undefined1 *)(param_1 + 0x8d) = *(undefined1 *)(*param_2 + 1);
    lVar18 = *param_2;
    plVar8 = *(long **)(param_1 + 8);
    if (((ulong)plVar8 & 1) == 0) {
      uVar23 = *(ulong *)(param_1 + 0x70);
      if ((uVar23 & 3) != 0) goto LAB_104c488d4;
LAB_104c48944:
      uVar23 = *(ulong *)(lVar18 + 0x90);
      plVar15 = (long *)*(long *)(lVar18 + 0x88);
      if (-1 < (char)*(byte *)(lVar18 + 0x9f)) {
        uVar23 = (ulong)*(byte *)(lVar18 + 0x9f);
        plVar15 = (long *)(lVar18 + 0x88);
      }
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar23) {
          FUN_104bd47d4();
          goto LAB_104c4a080;
        }
        if (0x16 < uVar23) {
          plVar10 = (long *)0x19;
          if ((uVar23 | 7) != 0x17) {
            plVar10 = (long *)((uVar23 | 7) + 1);
          }
          plVar12 = plVar10;
          __Znwm();
          *plVar8 = (long)plVar12;
          uVar29 = 2;
          goto LAB_104c48a00;
        }
        *(char *)((long)plVar8 + 0x17) = (char)uVar23;
        uVar29 = 2;
        plVar12 = plVar8;
        plVar10 = plVar8;
        if (uVar23 != 0) goto LAB_104c48a10;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar23) goto LAB_104c4a058;
        if (uVar23 < 0x17) {
          *(char *)((long)plVar8 + 0x17) = (char)uVar23;
          uVar29 = 3;
          plVar12 = plVar8;
          plVar10 = plVar8;
          if (uVar23 == 0) goto LAB_104c48a20;
        }
        else {
          plVar10 = (long *)0x19;
          if ((uVar23 | 7) != 0x17) {
            plVar10 = (long *)((uVar23 | 7) + 1);
          }
          plVar12 = plVar10;
          __Znwm();
          *plVar8 = (long)plVar12;
          uVar29 = 3;
LAB_104c48a00:
          plVar8[1] = uVar23;
          plVar8[2] = (ulong)plVar10 | 0x8000000000000000;
          plVar10 = plVar8;
        }
LAB_104c48a10:
        _memmove(plVar12,plVar15,uVar23);
        plVar8 = plVar12;
      }
LAB_104c48a20:
      *(undefined1 *)((long)plVar8 + uVar23) = 0;
      *(ulong *)(param_1 + 0x70) = uVar29 | (ulong)plVar10;
    }
    else {
      plVar8 = *(long **)((ulong)plVar8 & 0xfffffffffffffffe);
      uVar23 = *(ulong *)(param_1 + 0x70);
      if ((uVar23 & 3) == 0) goto LAB_104c48944;
LAB_104c488d4:
      puVar9 = (undefined8 *)(lVar18 + 0x88);
      puVar11 = (undefined8 *)(uVar23 & 0xfffffffffffffffc);
      if (puVar9 != puVar11) {
        bVar3 = *(byte *)(lVar18 + 0x9f);
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          uVar23 = *(ulong *)(lVar18 + 0x90);
          puVar31 = *(undefined8 **)(lVar18 + 0x88);
          if (-1 < (char)bVar3) {
            uVar23 = (ulong)bVar3;
            puVar31 = puVar9;
          }
          func_0x0001006aabfc(puVar11,puVar31,uVar23);
        }
        else if ((char)bVar3 < '\0') {
          func_0x00010014884c(puVar11,*(undefined8 *)(lVar18 + 0x88),*(undefined8 *)(lVar18 + 0x90))
          ;
        }
        else {
          uVar37 = *(undefined8 *)(lVar18 + 0x90);
          uVar36 = *puVar9;
          puVar11[2] = *(undefined8 *)(lVar18 + 0x98);
          puVar11[1] = uVar37;
          *puVar11 = uVar36;
        }
      }
    }
    lVar18 = *param_2;
    plVar8 = *(long **)(param_1 + 8);
    if (((ulong)plVar8 & 1) == 0) {
      uVar23 = *(ulong *)(param_1 + 0x78);
    }
    else {
      plVar8 = *(long **)((ulong)plVar8 & 0xfffffffffffffffe);
      uVar23 = *(ulong *)(param_1 + 0x78);
    }
    if ((uVar23 & 3) != 0) {
      puVar9 = (undefined8 *)(lVar18 + 0xa0);
      puVar11 = (undefined8 *)(uVar23 & 0xfffffffffffffffc);
      if (puVar9 != puVar11) {
        bVar3 = *(byte *)(lVar18 + 0xb7);
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          uVar23 = *(ulong *)(lVar18 + 0xa8);
          puVar31 = *(undefined8 **)(lVar18 + 0xa0);
          if (-1 < (char)bVar3) {
            uVar23 = (ulong)bVar3;
            puVar31 = puVar9;
          }
          func_0x0001006aabfc(puVar11,puVar31,uVar23);
        }
        else if ((char)bVar3 < '\0') {
          func_0x00010014884c(puVar11,*(undefined8 *)(lVar18 + 0xa0),*(undefined8 *)(lVar18 + 0xa8))
          ;
        }
        else {
          uVar37 = *(undefined8 *)(lVar18 + 0xa8);
          uVar36 = *puVar9;
          puVar11[2] = *(undefined8 *)(lVar18 + 0xb0);
          puVar11[1] = uVar37;
          *puVar11 = uVar36;
        }
      }
      goto LAB_104c48bac;
    }
    uVar23 = *(ulong *)(lVar18 + 0xa8);
    plVar15 = (long *)*(long *)(lVar18 + 0xa0);
    if (-1 < (char)*(byte *)(lVar18 + 0xb7)) {
      uVar23 = (ulong)*(byte *)(lVar18 + 0xb7);
      plVar15 = (long *)(lVar18 + 0xa0);
    }
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x18;
      __Znwm();
      if (0x7ffffffffffffff6 < uVar23) {
        FUN_104bd47d4();
        goto LAB_104c4a080;
      }
      if (0x16 < uVar23) {
        plVar10 = (long *)0x19;
        if ((uVar23 | 7) != 0x17) {
          plVar10 = (long *)((uVar23 | 7) + 1);
        }
        plVar12 = plVar10;
        __Znwm();
        *plVar8 = (long)plVar12;
        uVar29 = 2;
        goto LAB_104c48b7c;
      }
      *(char *)((long)plVar8 + 0x17) = (char)uVar23;
      uVar29 = 2;
      plVar12 = plVar8;
      if (uVar23 != 0) goto LAB_104c48b8c;
    }
    else {
      func_0x00010b4d80a4();
      if (0x7ffffffffffffff6 < uVar23) goto LAB_104c4a058;
      if (uVar23 < 0x17) {
        *(char *)((long)plVar8 + 0x17) = (char)uVar23;
        uVar29 = 3;
        plVar12 = plVar8;
        if (uVar23 == 0) goto LAB_104c48b9c;
      }
      else {
        plVar10 = (long *)0x19;
        if ((uVar23 | 7) != 0x17) {
          plVar10 = (long *)((uVar23 | 7) + 1);
        }
        plVar12 = plVar10;
        __Znwm();
        *plVar8 = (long)plVar12;
        uVar29 = 3;
LAB_104c48b7c:
        plVar8[1] = uVar23;
        plVar8[2] = (ulong)plVar10 | 0x8000000000000000;
      }
LAB_104c48b8c:
      _memmove(plVar12,plVar15,uVar23);
    }
LAB_104c48b9c:
    *(undefined1 *)((long)plVar12 + uVar23) = 0;
    *(ulong *)(param_1 + 0x78) = uVar29 | (ulong)plVar8;
LAB_104c48bac:
    *(undefined4 *)(param_1 + 0x9c) = 1;
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(*param_2 + 0x104);
    lVar21 = *param_2;
    lVar18 = *(long *)(lVar21 + 0x70);
    if (*(long *)(lVar21 + 0x78) != lVar18) {
      uVar23 = 0;
      puVar1 = (ulong *)(param_1 + 0x10);
      do {
        plVar8 = (long *)(lVar18 + uVar23 * 0x40);
        puVar11 = (undefined8 *)plVar8[6];
        (**(code **)*puVar11)();
        iVar7 = (int)puVar11;
        iVar28 = (int)uVar23;
        if (iVar7 == 2) {
          pppppplVar32 = (long ******)0x30;
          __Znwm();
          *pppppplVar32 = (long *****)&PTR_DAT_110c76180;
          pppppplVar32[1] = (long *****)0x0;
          pppppplVar32[3] = (long *****)0x0;
          pppppplVar32[4] = (long *****)0x0;
          pppppplVar32[2] = (long *****)0x0;
          *(undefined4 *)(pppppplVar32 + 5) = 0;
          ppppppplStack_f0 = (long *******)pppppplVar32;
          func_0x000100627dec(puVar1,0x104c4ad6c);
          puVar25 = puVar1;
          if ((*puVar1 & 1) != 0) {
            puVar25 = (ulong *)(*puVar1 + (long)iVar28 * 8 + 7);
          }
          uVar22 = *puVar25;
          uVar29 = *(ulong *)(uVar22 + 8);
          if ((uVar29 & 1) == 0) {
            uVar24 = *(ulong *)(uVar22 + 0x28);
            if ((uVar24 & 3) != 0) goto LAB_104c494d4;
LAB_104c496f0:
            if (uVar29 == 0) {
              uVar29 = 0x18;
              __Znwm();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
              uVar24 = 2;
            }
            else {
              func_0x00010b4d80a4();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
              uVar24 = 3;
            }
            *(ulong *)(uVar22 + 0x28) = uVar24 | uVar29;
          }
          else {
            uVar29 = *(ulong *)(uVar29 & 0xfffffffffffffffe);
            uVar24 = *(ulong *)(uVar22 + 0x28);
            if ((uVar24 & 3) == 0) goto LAB_104c496f0;
LAB_104c494d4:
            puVar11 = (undefined8 *)(uVar24 & 0xfffffffffffffffc);
            if (plVar8 != puVar11) {
              bVar3 = *(byte *)((long)plVar8 + 0x17);
              if (*(char *)((long)puVar11 + 0x17) < '\0') {
                uVar29 = plVar8[1];
                plVar15 = (long *)*plVar8;
                if (-1 < (char)bVar3) {
                  uVar29 = (ulong)bVar3;
                  plVar15 = plVar8;
                }
                func_0x0001006aabfc(puVar11,plVar15,uVar29);
              }
              else if ((char)bVar3 < '\0') {
                func_0x00010014884c(puVar11,*plVar8,plVar8[1]);
              }
              else {
                lVar18 = plVar8[1];
                uVar36 = *plVar8;
                puVar11[2] = plVar8[2];
                puVar11[1] = lVar18;
                *puVar11 = uVar36;
              }
            }
          }
          ppppppplVar13 = ppppppplStack_f0;
          ppppppplStack_f0 = (long *******)0x0;
          func_0x00010adf0c70(uVar22,ppppppplVar13);
          FUN_104c356b4(auStack_1c8,plVar8);
          FUN_104c4a334(auStack_1c8,uVar22);
          plVar8 = plStack_190;
          if (plStack_190 != (long *)0x0) {
            plVar15 = plStack_190 + 1;
            do {
              lVar18 = *plVar15;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar5) {
                *plVar15 = lVar18 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plStack_190 + 0x10))(plStack_190);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          if (lStack_1b0 != 0) {
            for (; lStack_1b0 != lStack_1a8; lStack_1a8 = lStack_1a8 + -0x30) {
            }
            lStack_1a8 = lStack_1b0;
            __ZdlPv(lStack_1b0);
          }
          if (cStack_1b1 < '\0') {
            __ZdlPv(auStack_1c8[0]);
          }
          if (ppppppplStack_f0 != (long *******)0x0) {
            func_0x00010adf34f0();
LAB_104c48c38:
            __ZdlPv();
          }
        }
        else if (iVar7 == 1) {
          puVar11 = (undefined8 *)0x30;
          __Znwm();
          puVar9 = puVar11 + 2;
          *puVar9 = 0;
          *puVar11 = &PTR_DAT_110c763b0;
          puVar11[1] = 0;
          puVar11[3] = 0;
          puVar11[4] = 0;
          *(undefined4 *)(puVar11 + 5) = 0;
          puStack_108 = puVar11;
          (**(code **)(*(long *)plVar8[6] + 8))(&ppppppplStack_f0);
          ppppppplVar20 = ppppppplStack_e8;
          for (ppppppplVar13 = ppppppplStack_f0; ppppppplVar13 != ppppppplVar20;
              ppppppplVar13 = (long *******)((long)ppppppplVar13 + 0x18)) {
            ppppppplVar34 = (long *******)puVar11[4];
            ppppppplVar14 = (long *******)puVar11[2];
            if (ppppppplVar14 == (long *******)0x0) {
              *(undefined4 *)(puVar11 + 3) = 1;
              if (ppppppplVar34 == (long *******)0x0) {
                ppppppplVar34 = (long *******)0x18;
                __Znwm();
              }
              else {
                func_0x00010b4d80a4();
              }
              *ppppppplVar34 = (long ******)0x0;
              ppppppplVar34[1] = (long ******)0x0;
              ppppppplVar34[2] = (long ******)0x0;
              *puVar9 = ppppppplVar34;
              ppppppplVar14 = ppppppplVar34;
            }
            else {
              Hint_Prefetch(ppppppplVar14,0,0,0);
              if (((ulong)ppppppplVar14 & 1) == 0) {
                if (*(int *)(puVar11 + 3) == 0) {
                  *(undefined4 *)(puVar11 + 3) = 1;
                }
                else {
                  puVar31 = puVar9;
                  func_0x000100064580(puVar9,1);
                  ppppppplVar14 = (long *******)&ppppppplStack_a0;
                  ppppppplStack_a0 = ppppppplVar34;
                  func_0x00010006903c();
                  *puVar31 = ppppppplVar14;
                  *(undefined4 *)(puVar11[2] + -1) = 2;
                  *(undefined4 *)(puVar11 + 3) = 2;
                }
              }
              else {
                iVar7 = *(int *)(puVar11 + 3);
                if (*(int *)((long)puVar11 + 0x1c) < iVar7) {
                  func_0x000100064580(puVar9,1);
                  piVar27 = (int *)(puVar11[2] + -1);
                  iVar7 = *(int *)(puVar11 + 3);
                  lVar18 = puVar11[2] + 7;
                  *piVar27 = *piVar27 + 1;
                  *(int *)(puVar11 + 3) = iVar7 + 1;
                  if (ppppppplVar34 != (long *******)0x0) goto LAB_104c493b8;
LAB_104c4946c:
                  ppppppplVar34 = (long *******)0x18;
                  __Znwm();
                }
                else {
                  piVar27 = (int *)((long)ppppppplVar14 + -1);
                  if (iVar7 != *piVar27) {
                    *(int *)(puVar11 + 3) = iVar7 + 1;
                    ppppppplVar14 = *(long ********)(piVar27 + (long)iVar7 * 2 + 2);
                    goto joined_r0x000104c493f0;
                  }
                  lVar18 = (long)ppppppplVar14 + 7;
                  *piVar27 = iVar7 + 1;
                  *(int *)(puVar11 + 3) = iVar7 + 1;
                  if (ppppppplVar34 == (long *******)0x0) goto LAB_104c4946c;
LAB_104c493b8:
                  func_0x00010b4d80a4();
                }
                *ppppppplVar34 = (long ******)0x0;
                ppppppplVar34[1] = (long ******)0x0;
                ppppppplVar34[2] = (long ******)0x0;
                *(long ********)(lVar18 + (long)iVar7 * 8) = ppppppplVar34;
                ppppppplVar14 = ppppppplVar34;
              }
            }
joined_r0x000104c493f0:
            if (ppppppplVar13 != ppppppplVar14) {
              if (*(char *)((long)ppppppplVar14 + 0x17) < '\0') {
                func_0x0001006aabfc();
              }
              else if (*(char *)((long)ppppppplVar13 + 0x17) < '\0') {
                func_0x00010014884c();
              }
              else {
                pppppplVar38 = *(long *******)((long)ppppppplVar13 + 8);
                pppppplVar32 = *ppppppplVar13;
                ppppppplVar14[2] = *(long *******)((long)ppppppplVar13 + 0x10);
                ppppppplVar14[1] = pppppplVar38;
                *ppppppplVar14 = pppppplVar32;
              }
            }
          }
          if (ppppppplStack_f0 != (long *******)0x0) {
            for (; ppppppplStack_f0 != ppppppplStack_e8; ppppppplStack_e8 = ppppppplStack_e8 + -3) {
            }
            ppppppplStack_e8 = ppppppplStack_f0;
            __ZdlPv(ppppppplStack_f0);
          }
          func_0x000100627dec(puVar1,0x104c4ad6c);
          puVar25 = puVar1;
          if ((*puVar1 & 1) != 0) {
            puVar25 = (ulong *)(*puVar1 + (long)iVar28 * 8 + 7);
          }
          uVar22 = *puVar25;
          uVar29 = *(ulong *)(uVar22 + 8);
          if ((uVar29 & 1) == 0) {
            uVar24 = *(ulong *)(uVar22 + 0x28);
            if ((uVar24 & 3) != 0) goto LAB_104c4961c;
LAB_104c49870:
            if (uVar29 == 0) {
              uVar29 = 0x18;
              __Znwm();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
              uVar24 = 2;
            }
            else {
              func_0x00010b4d80a4();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
              uVar24 = 3;
            }
            *(ulong *)(uVar22 + 0x28) = uVar24 | uVar29;
          }
          else {
            uVar29 = *(ulong *)(uVar29 & 0xfffffffffffffffe);
            uVar24 = *(ulong *)(uVar22 + 0x28);
            if ((uVar24 & 3) == 0) goto LAB_104c49870;
LAB_104c4961c:
            plVar15 = (long *)(uVar24 & 0xfffffffffffffffc);
            if (plVar8 != plVar15) {
              bVar3 = *(byte *)((long)plVar8 + 0x17);
              if (*(char *)((long)plVar15 + 0x17) < '\0') {
                uVar29 = plVar8[1];
                plVar10 = (long *)*plVar8;
                if (-1 < (char)bVar3) {
                  uVar29 = (ulong)bVar3;
                  plVar10 = plVar8;
                }
                func_0x0001006aabfc(plVar15,plVar10,uVar29);
              }
              else if ((char)bVar3 < '\0') {
                func_0x00010014884c(plVar15,*plVar8,plVar8[1]);
              }
              else {
                lVar21 = plVar8[1];
                lVar18 = *plVar8;
                plVar15[2] = plVar8[2];
                plVar15[1] = lVar21;
                *plVar15 = lVar18;
              }
            }
          }
          puVar11 = puStack_108;
          puStack_108 = (undefined8 *)0x0;
          func_0x00010adf0ae0(uVar22,puVar11);
          FUN_104c356b4(auStack_188,plVar8);
          FUN_104c4a334(auStack_188,uVar22);
          plVar8 = plStack_150;
          if (plStack_150 != (long *)0x0) {
            plVar15 = plStack_150 + 1;
            do {
              lVar18 = *plVar15;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar5) {
                *plVar15 = lVar18 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plStack_150 + 0x10))(plStack_150);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          if (lStack_170 != 0) {
            for (; lStack_170 != lStack_168; lStack_168 = lStack_168 + -0x30) {
            }
            lStack_168 = lStack_170;
            __ZdlPv(lStack_170);
          }
          if (cStack_171 < '\0') {
            __ZdlPv(auStack_188[0]);
          }
          if (puStack_108 != (undefined8 *)0x0) {
            func_0x00010adf2edc();
            goto LAB_104c48c38;
          }
        }
        else if (iVar7 == 0) {
          puVar11 = (undefined8 *)0x30;
          __Znwm();
          uVar29 = 0;
          *puVar11 = &PTR_DAT_110c765e0;
          puVar11[1] = 0;
          puVar11[3] = 0;
          puVar11[4] = 0;
          puVar11[2] = 0;
          *(undefined4 *)(puVar11 + 5) = 0;
          puStack_b8 = puVar11;
          while( true ) {
            (**(code **)(*(long *)plVar8[6] + 0x10))(&ppppppplStack_f0);
            ppppppplVar14 = ppppppplStack_e8;
            ppppppplVar20 = ppppppplStack_f0;
            ppppppplVar13 = ppppppplStack_e8;
            if (ppppppplStack_f0 != (long *******)0x0) {
              for (; ppppppplVar20 != ppppppplVar13; ppppppplVar13 = ppppppplVar13 + -6) {
                pppppplVar32 = ppppppplVar13[-3];
                if (pppppplVar32 != (long ******)0x0) {
                  pppppplVar35 = ppppppplVar13[-2];
                  pppppplVar38 = pppppplVar32;
                  if (pppppplVar32 != pppppplVar35) {
                    do {
                      pppppplVar35 = pppppplVar35 + -3;
                    } while (pppppplVar35 != pppppplVar32);
                    pppppplVar38 = ppppppplVar13[-3];
                  }
                  ppppppplVar13[-2] = pppppplVar32;
                  __ZdlPv(pppppplVar38);
                }
              }
              ppppppplStack_e8 = ppppppplVar20;
              __ZdlPv(ppppppplStack_f0);
            }
            if ((ulong)(((long)ppppppplVar14 - (long)ppppppplVar20 >> 4) * -0x5555555555555555) <=
                uVar29) break;
            (**(code **)(*(long *)plVar8[6] + 0x10))(&puStack_108);
            puVar9 = puStack_108 + uVar29 * 6;
            if (*(char *)((long)puVar9 + 0x17) < '\0') {
              func_0x000100033dac(&ppppppplStack_f0,*puVar9,puVar9[1]);
            }
            else {
              ppppppplStack_e8 = (long *******)puVar9[1];
              ppppppplStack_f0 = (long *******)*puVar9;
              pppppplStack_e0 = (long ******)puVar9[2];
            }
            ppppppplStack_d8 = (long *******)0x0;
            ppppppplStack_d0 = (long *******)0x0;
            apppppplStack_c8[0] = (long ******)0x0;
            puVar31 = (undefined8 *)puVar9[3];
            puVar9 = (undefined8 *)puVar9[4];
            uStack_a8 = 0;
            ppppppplVar20 = (long *******)((long)puVar9 - (long)puVar31);
            ppppppplVar13 = ppppppplStack_d0;
            ppppppplStack_b0 = (long *******)&ppppppplStack_d8;
            if (ppppppplVar20 != (long *******)0x0) {
              if (0xaaaaaaaaaaaaaaa < (ulong)(((long)ppppppplVar20 >> 3) * -0x5555555555555555)) {
                FUN_104bdcf60();
                goto LAB_104c4a080;
              }
              ppppppplVar13 = ppppppplVar20;
              __Znwm();
              apppppplStack_c8[0] = (long ******)((long)ppppppplVar13 + (long)ppppppplVar20);
              ppppppplStack_98 = (long *******)&ppppppplStack_80;
              ppppppplStack_90 = (long *******)appppppplStack_78;
              uStack_88 = 0;
              ppppppplStack_d8 = ppppppplVar13;
              ppppppplStack_d0 = ppppppplVar13;
              ppppppplStack_a0 = apppppplStack_c8;
              ppppppplStack_80 = ppppppplVar13;
              appppppplStack_78[0] = ppppppplVar13;
              do {
                while (*(char *)((long)puVar31 + 0x17) < '\0') {
                  puVar31 = puVar31 + 3;
                  func_0x000100033dac();
                  ppppppplVar13 = appppppplStack_78[0] + 3;
                  appppppplStack_78[0] = ppppppplVar13;
                  if (puVar31 == puVar9) goto LAB_104c48e94;
                }
                pppppplVar38 = (long ******)puVar31[1];
                pppppplVar32 = (long ******)*puVar31;
                appppppplStack_78[0][2] = (long ******)puVar31[2];
                ppppppplVar13 = appppppplStack_78[0] + 3;
                appppppplStack_78[0][1] = pppppplVar38;
                *appppppplStack_78[0] = pppppplVar32;
                puVar31 = puVar31 + 3;
                appppppplStack_78[0] = ppppppplVar13;
              } while (puVar31 != puVar9);
            }
LAB_104c48e94:
            ppppppplStack_d0 = ppppppplVar13;
            puVar31 = puStack_108;
            puVar9 = puStack_100;
            if (puStack_108 != (undefined8 *)0x0) {
              for (; puVar31 != puVar9; puVar9 = puVar9 + -6) {
                lVar18 = puVar9[-3];
                if (lVar18 != 0) {
                  lVar33 = puVar9[-2];
                  lVar21 = lVar18;
                  if (lVar18 != lVar33) {
                    do {
                      lVar33 = lVar33 + -0x18;
                    } while (lVar33 != lVar18);
                    lVar21 = puVar9[-3];
                  }
                  puVar9[-2] = lVar18;
                  __ZdlPv(lVar21);
                }
              }
              puStack_100 = puVar31;
              __ZdlPv(puStack_108);
            }
            func_0x000100627dec(puVar11 + 2,0x104c4acb8);
            puVar11 = puStack_b8;
            uVar22 = puStack_b8[2];
            puVar25 = puStack_b8 + 2;
            if ((uVar22 & 1) != 0) {
              puVar25 = (ulong *)(uVar22 + (long)(int)uVar29 * 8 + 7);
            }
            uVar24 = *puVar25;
            uVar22 = *(ulong *)(uVar24 + 8);
            if ((uVar22 & 1) == 0) {
              uVar19 = *(ulong *)(uVar24 + 0x28);
              if ((uVar19 & 3) != 0) goto LAB_104c48f6c;
LAB_104c49008:
              if (uVar22 == 0) {
                uVar22 = 0x18;
                __Znwm();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
                *(ulong *)(uVar24 + 0x28) = uVar22 | 2;
                ppppppplVar20 = ppppppplStack_d0;
                ppppppplVar13 = ppppppplStack_d8;
                if (ppppppplStack_d8 == ppppppplStack_d0) goto joined_r0x000104c49224;
                goto LAB_104c490b0;
              }
              func_0x00010b4d80a4();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
              *(ulong *)(uVar24 + 0x28) = uVar22 | 3;
              ppppppplVar20 = ppppppplStack_d0;
              ppppppplVar13 = ppppppplStack_d8;
              if (ppppppplStack_d8 != ppppppplStack_d0) goto LAB_104c490b0;
            }
            else {
              uVar22 = *(ulong *)(uVar22 & 0xfffffffffffffffe);
              uVar19 = *(ulong *)(uVar24 + 0x28);
              if ((uVar19 & 3) == 0) goto LAB_104c49008;
LAB_104c48f6c:
              ppppppplVar13 = (long *******)(uVar19 & 0xfffffffffffffffc);
              if (&ppppppplStack_f0 != (long ********)ppppppplVar13) {
                if (*(char *)((long)ppppppplVar13 + 0x17) < '\0') {
                  ppppppplVar20 = ppppppplStack_e8;
                  ppppppplVar14 = ppppppplStack_f0;
                  if (-1 < (long)pppppplStack_e0) {
                    ppppppplVar20 = (long *******)((ulong)pppppplStack_e0 >> 0x38);
                    ppppppplVar14 = (long *******)&ppppppplStack_f0;
                  }
                  func_0x0001006aabfc(ppppppplVar13,ppppppplVar14,ppppppplVar20);
                }
                else {
                  if (-1 < (long)pppppplStack_e0) {
                    ppppppplVar13[2] = pppppplStack_e0;
                    ppppppplVar13[1] = (long ******)ppppppplStack_e8;
                    *ppppppplVar13 = (long ******)ppppppplStack_f0;
                    ppppppplVar20 = ppppppplStack_d0;
                    ppppppplVar13 = ppppppplStack_d8;
                    if (ppppppplStack_d8 != ppppppplStack_d0) goto LAB_104c490b0;
                    goto joined_r0x000104c49224;
                  }
                  func_0x00010014884c(ppppppplVar13,ppppppplStack_f0,ppppppplStack_e8);
                }
              }
              ppppppplVar20 = ppppppplStack_d0;
              ppppppplVar13 = ppppppplStack_d8;
              if (ppppppplStack_d8 != ppppppplStack_d0) {
LAB_104c490b0:
                do {
                  ppppppplVar34 = *(long ********)(uVar24 + 0x20);
                  ppppppplVar14 = *(long ********)(uVar24 + 0x10);
                  if (ppppppplVar14 == (long *******)0x0) {
                    *(undefined4 *)(uVar24 + 0x18) = 1;
                    if (ppppppplVar34 == (long *******)0x0) {
                      ppppppplVar34 = (long *******)0x18;
                      __Znwm();
                    }
                    else {
                      func_0x00010b4d80a4();
                    }
                    *ppppppplVar34 = (long ******)0x0;
                    ppppppplVar34[1] = (long ******)0x0;
                    ppppppplVar34[2] = (long ******)0x0;
                    *(long ********)(uVar24 + 0x10) = ppppppplVar34;
                    ppppppplVar14 = ppppppplVar34;
                  }
                  else {
                    Hint_Prefetch(ppppppplVar14,0,0,0);
                    if (((ulong)ppppppplVar14 & 1) == 0) {
                      if (*(int *)(uVar24 + 0x18) == 0) {
                        *(undefined4 *)(uVar24 + 0x18) = 1;
                      }
                      else {
                        puVar9 = (undefined8 *)(uVar24 + 0x10);
                        func_0x000100064580(puVar9,1);
                        ppppppplVar14 = (long *******)&ppppppplStack_a0;
                        ppppppplStack_a0 = ppppppplVar34;
                        func_0x00010006903c();
                        *puVar9 = ppppppplVar14;
                        *(undefined4 *)(*(long *)(uVar24 + 0x10) + -1) = 2;
                        *(undefined4 *)(uVar24 + 0x18) = 2;
                      }
                    }
                    else {
                      iVar7 = *(int *)(uVar24 + 0x18);
                      if (*(int *)(uVar24 + 0x1c) < iVar7) {
                        func_0x000100064580(uVar24 + 0x10,1);
                        piVar27 = (int *)(*(long *)(uVar24 + 0x10) + -1);
                        iVar7 = *(int *)(uVar24 + 0x18);
                        lVar18 = *(long *)(uVar24 + 0x10) + 7;
                        *piVar27 = *piVar27 + 1;
                        *(int *)(uVar24 + 0x18) = iVar7 + 1;
                        if (ppppppplVar34 != (long *******)0x0) goto LAB_104c49160;
LAB_104c49214:
                        ppppppplVar34 = (long *******)0x18;
                        __Znwm();
                      }
                      else {
                        piVar27 = (int *)((long)ppppppplVar14 + -1);
                        if (iVar7 != *piVar27) {
                          *(int *)(uVar24 + 0x18) = iVar7 + 1;
                          ppppppplVar14 = *(long ********)(piVar27 + (long)iVar7 * 2 + 2);
                          goto joined_r0x000104c49124;
                        }
                        lVar18 = (long)ppppppplVar14 + 7;
                        *piVar27 = iVar7 + 1;
                        *(int *)(uVar24 + 0x18) = iVar7 + 1;
                        if (ppppppplVar34 == (long *******)0x0) goto LAB_104c49214;
LAB_104c49160:
                        func_0x00010b4d80a4();
                      }
                      *ppppppplVar34 = (long ******)0x0;
                      ppppppplVar34[1] = (long ******)0x0;
                      ppppppplVar34[2] = (long ******)0x0;
                      *(long ********)(lVar18 + (long)iVar7 * 8) = ppppppplVar34;
                      ppppppplVar14 = ppppppplVar34;
                    }
                  }
joined_r0x000104c49124:
                  if (ppppppplVar13 != ppppppplVar14) {
                    if (*(char *)((long)ppppppplVar14 + 0x17) < '\0') {
                      func_0x0001006aabfc();
                    }
                    else if (*(char *)((long)ppppppplVar13 + 0x17) < '\0') {
                      func_0x00010014884c();
                    }
                    else {
                      pppppplVar38 = ppppppplVar13[1];
                      pppppplVar32 = *ppppppplVar13;
                      ppppppplVar14[2] = ppppppplVar13[2];
                      ppppppplVar14[1] = pppppplVar38;
                      *ppppppplVar14 = pppppplVar32;
                    }
                  }
                  ppppppplVar13 = ppppppplVar13 + 3;
                } while (ppppppplVar13 != ppppppplVar20);
              }
            }
joined_r0x000104c49224:
            if (ppppppplStack_d8 != (long *******)0x0) {
              if (ppppppplStack_d8 == ppppppplStack_d0) {
                ppppppplStack_d0 = ppppppplStack_d8;
                __ZdlPv(ppppppplStack_d8);
              }
              else {
                do {
                  ppppppplStack_d0 = ppppppplStack_d0 + -3;
                } while (ppppppplStack_d0 != ppppppplStack_d8);
                ppppppplStack_d0 = ppppppplStack_d8;
                __ZdlPv(ppppppplStack_d8);
              }
            }
            uVar29 = uVar29 + 1;
          }
          func_0x000100627dec(puVar1,0x104c4ad6c);
          puVar25 = puVar1;
          if ((*puVar1 & 1) != 0) {
            puVar25 = (ulong *)(*puVar1 + (long)iVar28 * 8 + 7);
          }
          uVar22 = *puVar25;
          uVar29 = *(ulong *)(uVar22 + 8);
          if ((uVar29 & 1) == 0) {
            uVar24 = *(ulong *)(uVar22 + 0x28);
            if ((uVar24 & 3) != 0) goto LAB_104c49554;
LAB_104c499ec:
            if (uVar29 == 0) {
              uVar29 = 0x18;
              __Znwm();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
              uVar24 = 2;
            }
            else {
              func_0x00010b4d80a4();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
              uVar24 = 3;
            }
            *(ulong *)(uVar22 + 0x28) = uVar24 | uVar29;
          }
          else {
            uVar29 = *(ulong *)(uVar29 & 0xfffffffffffffffe);
            uVar24 = *(ulong *)(uVar22 + 0x28);
            if ((uVar24 & 3) == 0) goto LAB_104c499ec;
LAB_104c49554:
            plVar15 = (long *)(uVar24 & 0xfffffffffffffffc);
            if (plVar8 != plVar15) {
              bVar3 = *(byte *)((long)plVar8 + 0x17);
              if (*(char *)((long)plVar15 + 0x17) < '\0') {
                uVar29 = plVar8[1];
                plVar10 = (long *)*plVar8;
                if (-1 < (char)bVar3) {
                  uVar29 = (ulong)bVar3;
                  plVar10 = plVar8;
                }
                func_0x0001006aabfc(plVar15,plVar10,uVar29);
              }
              else if ((char)bVar3 < '\0') {
                func_0x00010014884c(plVar15,*plVar8,plVar8[1]);
              }
              else {
                lVar21 = plVar8[1];
                lVar18 = *plVar8;
                plVar15[2] = plVar8[2];
                plVar15[1] = lVar21;
                *plVar15 = lVar18;
              }
            }
          }
          puVar11 = puStack_b8;
          puStack_b8 = (undefined8 *)0x0;
          func_0x00010adf07e8(uVar22,puVar11);
          FUN_104c356b4(auStack_148,plVar8);
          FUN_104c4a334(auStack_148,uVar22);
          plVar8 = plStack_110;
          if (plStack_110 != (long *)0x0) {
            plVar15 = plStack_110 + 1;
            do {
              lVar18 = *plVar15;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar5) {
                *plVar15 = lVar18 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plStack_110 + 0x10))(plStack_110);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          if (lStack_130 != 0) {
            for (; lStack_130 != lStack_128; lStack_128 = lStack_128 + -0x30) {
            }
            lStack_128 = lStack_130;
            __ZdlPv(lStack_130);
          }
          if (cStack_131 < '\0') {
            __ZdlPv(auStack_148[0]);
            if (puStack_b8 == (undefined8 *)0x0) goto LAB_104c48c3c;
LAB_104c49b28:
            puVar11 = puStack_b8;
            if ((*(byte *)(puStack_b8 + 1) & 1) != 0) {
              func_0x0001053936ac();
            }
            puVar25 = puVar11 + 2;
            uVar29 = *puVar25;
            if (uVar29 != 0) {
              if (puVar11[4] == 0) {
                if ((uVar29 & 1) == 0) {
                  uVar22 = 1;
                  puVar30 = puVar25;
LAB_104c49b9c:
                  do {
                    if ((long *)*puVar30 != (long *)0x0) {
                      (**(code **)(*(long *)*puVar30 + 8))();
                    }
                    uVar22 = uVar22 - 1;
                    puVar30 = puVar30 + 1;
                  } while (uVar22 != 0);
                  if ((*puVar25 & 1) == 0) goto LAB_104c48c30;
                  puVar16 = (uint *)(*puVar25 - 1);
                }
                else {
                  puVar16 = (uint *)(uVar29 - 1);
                  uVar22 = (ulong)*puVar16;
                  if (0 < (int)*puVar16) {
                    puVar30 = (ulong *)(uVar29 + 7);
                    goto LAB_104c49b9c;
                  }
                }
                __ZdlPv(puVar16);
              }
LAB_104c48c30:
              *puVar25 = 0;
            }
            goto LAB_104c48c38;
          }
          if (puStack_b8 != (undefined8 *)0x0) goto LAB_104c49b28;
        }
LAB_104c48c3c:
        uVar23 = uVar23 + 1;
        lVar21 = *param_2;
        lVar18 = *(long *)(lVar21 + 0x70);
      } while (uVar23 < (ulong)(*(long *)(lVar21 + 0x78) - lVar18 >> 6));
    }
    puVar26 = *(undefined4 **)(lVar21 + 0xe8);
    puVar2 = *(undefined4 **)(lVar21 + 0xf0);
    if (puVar26 != puVar2) {
      lVar18 = 0;
      puVar1 = (ulong *)(param_1 + 0x28);
      do {
        func_0x000100627dec(puVar1,0x104c4ae20);
        puVar25 = puVar1;
        if ((*puVar1 & 1) != 0) {
          puVar25 = (ulong *)(*puVar1 + lVar18 * 8 + 7);
        }
        uVar23 = *puVar25;
        *(undefined4 *)(uVar23 + 0x28) = *puVar26;
        puVar11 = *(undefined8 **)(puVar26 + 2);
        puVar9 = *(undefined8 **)(puVar26 + 4);
        while (puVar11 != puVar9) {
          puVar31 = *(undefined8 **)(uVar23 + 0x20);
          puVar17 = *(undefined8 **)(uVar23 + 0x10);
          if (puVar17 == (undefined8 *)0x0) {
            *(undefined4 *)(uVar23 + 0x18) = 1;
            if (puVar31 == (undefined8 *)0x0) {
              puVar31 = (undefined8 *)0x18;
              __Znwm();
            }
            else {
              func_0x00010b4d80a4();
            }
            *puVar31 = 0;
            puVar31[1] = 0;
            puVar31[2] = 0;
            *(undefined8 **)(uVar23 + 0x10) = puVar31;
joined_r0x000104c49cdc:
            if (puVar11 == puVar31) goto LAB_104c49c54;
LAB_104c49d64:
            if (*(char *)((long)puVar31 + 0x17) < '\0') {
              func_0x0001006aabfc();
              puVar11 = puVar11 + 3;
            }
            else {
              if (-1 < *(char *)((long)puVar11 + 0x17)) {
                uVar37 = puVar11[1];
                uVar36 = *puVar11;
                puVar31[2] = puVar11[2];
                puVar31[1] = uVar37;
                *puVar31 = uVar36;
                goto LAB_104c49c54;
              }
              puVar11 = puVar11 + 3;
              func_0x00010014884c();
            }
          }
          else {
            Hint_Prefetch(puVar17,0,0,0);
            if (((ulong)puVar17 & 1) == 0) {
              if (*(int *)(uVar23 + 0x18) == 0) {
                *(undefined4 *)(uVar23 + 0x18) = 1;
                puVar31 = puVar17;
              }
              else {
                puVar17 = (undefined8 *)(uVar23 + 0x10);
                func_0x000100064580(puVar17,1);
                if (puVar31 == (undefined8 *)0x0) {
                  puVar31 = (undefined8 *)0x18;
                  __Znwm();
                }
                else {
                  func_0x00010b4d80a4();
                }
                *puVar31 = 0;
                puVar31[1] = 0;
                puVar31[2] = 0;
                *puVar17 = puVar31;
                *(undefined4 *)(*(long *)(uVar23 + 0x10) + -1) = 2;
                *(undefined4 *)(uVar23 + 0x18) = 2;
              }
              goto joined_r0x000104c49cdc;
            }
            iVar7 = *(int *)(uVar23 + 0x18);
            if (*(int *)(uVar23 + 0x1c) < iVar7) {
              func_0x000100064580(uVar23 + 0x10,1);
              piVar27 = (int *)(*(long *)(uVar23 + 0x10) + -1);
              iVar7 = *(int *)(uVar23 + 0x18);
              lVar21 = *(long *)(uVar23 + 0x10) + 7;
              *piVar27 = *piVar27 + 1;
              *(int *)(uVar23 + 0x18) = iVar7 + 1;
              if (puVar31 != (undefined8 *)0x0) goto LAB_104c49d18;
LAB_104c49dd8:
              puVar31 = (undefined8 *)0x18;
              __Znwm();
            }
            else {
              piVar27 = (int *)((long)puVar17 + -1);
              if (iVar7 != *piVar27) {
                *(int *)(uVar23 + 0x18) = iVar7 + 1;
                puVar31 = *(undefined8 **)(piVar27 + (long)iVar7 * 2 + 2);
                goto joined_r0x000104c49cdc;
              }
              lVar21 = (long)puVar17 + 7;
              *piVar27 = iVar7 + 1;
              *(int *)(uVar23 + 0x18) = iVar7 + 1;
              if (puVar31 == (undefined8 *)0x0) goto LAB_104c49dd8;
LAB_104c49d18:
              func_0x00010b4d80a4();
            }
            *puVar31 = 0;
            puVar31[1] = 0;
            puVar31[2] = 0;
            *(undefined8 **)(lVar21 + (long)iVar7 * 8) = puVar31;
            if (puVar11 != puVar31) goto LAB_104c49d64;
LAB_104c49c54:
            puVar11 = puVar11 + 3;
          }
        }
        lVar18 = lVar18 + 1;
        puVar26 = puVar26 + 8;
      } while (puVar26 != puVar2);
      lVar21 = *param_2;
    }
    puVar26 = *(undefined4 **)(lVar21 + 0x108);
    puVar2 = *(undefined4 **)(lVar21 + 0x110);
    if (puVar26 != puVar2) {
      lVar18 = 0;
      puVar1 = (ulong *)(param_1 + 0x40);
      do {
        func_0x000100627dec(puVar1,0x104c4aec8);
        puVar25 = puVar1;
        if ((*puVar1 & 1) != 0) {
          puVar25 = (ulong *)(*puVar1 + lVar18 * 8 + 7);
        }
        uVar23 = *puVar25;
        *(undefined4 *)(uVar23 + 0x10) = *puVar26;
        if (*(int *)(uVar23 + 0x24) == 2) {
          uVar29 = *(ulong *)(uVar23 + 0x18);
          ppppppplVar13 = *(long ********)(puVar26 + 2);
joined_r0x000104c49ef8:
          if (ppppppplVar13 == (long *******)0x0) goto LAB_104c49efc;
LAB_104c49ea0:
          ___dynamic_cast(ppppppplVar13,&PTR_DAT_1107ebae0,&PTR_DAT_1107ebaf0,0);
          if (ppppppplVar13 == (long *******)0x0) goto LAB_104c49efc;
          ppppppplStack_e8 = *(long ********)(puVar26 + 4);
          ppppppplStack_f0 = ppppppplVar13;
          if (ppppppplStack_e8 != (long *******)0x0) {
            ppppppplVar13 = ppppppplStack_e8 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar13,0x10);
              if (bVar5) {
                *ppppppplVar13 = (long ******)((long)*ppppppplVar13 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        else {
          func_0x00010adf7f40(uVar23);
          *(undefined4 *)(uVar23 + 0x24) = 2;
          uVar29 = *(ulong *)(uVar23 + 8);
          if ((uVar29 & 1) != 0) {
            uVar29 = *(ulong *)(uVar29 & 0xfffffffffffffffe);
            func_0x000104c4af70();
            *(ulong *)(uVar23 + 0x18) = uVar29;
            ppppppplVar13 = *(long ********)(puVar26 + 2);
            goto joined_r0x000104c49ef8;
          }
          func_0x000104c4af70();
          *(ulong *)(uVar23 + 0x18) = uVar29;
          ppppppplVar13 = *(long ********)(puVar26 + 2);
          if (ppppppplVar13 != (long *******)0x0) goto LAB_104c49ea0;
LAB_104c49efc:
          ppppppplStack_f0 = (long *******)0x0;
          ppppppplStack_e8 = (long *******)0x0;
        }
        ppppppplVar13 = ppppppplStack_e8;
        uVar23 = *(ulong *)(uVar29 + 8);
        if ((uVar23 & 1) == 0) {
          uVar22 = *(ulong *)(uVar29 + 0x10);
          if ((uVar22 & 3) != 0) goto LAB_104c49f20;
LAB_104c49f98:
          if (uVar23 == 0) {
            uVar23 = 0x18;
            __Znwm();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
            uVar22 = 2;
          }
          else {
            func_0x00010b4d80a4();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
            uVar22 = 3;
          }
          *(ulong *)(uVar29 + 0x10) = uVar22 | uVar23;
        }
        else {
          uVar23 = *(ulong *)(uVar23 & 0xfffffffffffffffe);
          uVar22 = *(ulong *)(uVar29 + 0x10);
          if ((uVar22 & 3) == 0) goto LAB_104c49f98;
LAB_104c49f20:
          ppppppplVar14 = ppppppplStack_f0 + 2;
          ppppppplVar20 = (long *******)(uVar22 & 0xfffffffffffffffc);
          if (ppppppplVar14 != ppppppplVar20) {
            bVar3 = *(byte *)((long)ppppppplStack_f0 + 0x27);
            if (*(char *)((long)ppppppplVar20 + 0x17) < '\0') {
              pppppplVar32 = ppppppplStack_f0[3];
              ppppppplVar34 = (long *******)ppppppplStack_f0[2];
              if (-1 < (char)bVar3) {
                pppppplVar32 = (long ******)(ulong)bVar3;
                ppppppplVar34 = ppppppplVar14;
              }
              func_0x0001006aabfc(ppppppplVar20,ppppppplVar34,pppppplVar32);
            }
            else if ((char)bVar3 < '\0') {
              func_0x00010014884c(ppppppplVar20,ppppppplStack_f0[2],ppppppplStack_f0[3]);
            }
            else {
              pppppplVar38 = ppppppplStack_f0[3];
              pppppplVar32 = *ppppppplVar14;
              ppppppplVar20[2] = ppppppplStack_f0[4];
              ppppppplVar20[1] = pppppplVar38;
              *ppppppplVar20 = pppppplVar32;
            }
          }
        }
        if (ppppppplVar13 != (long *******)0x0) {
          ppppppplVar20 = ppppppplVar13 + 1;
          do {
            pppppplVar32 = *ppppppplVar20;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar20,0x10);
            if (bVar5) {
              *ppppppplVar20 = (long ******)((long)pppppplVar32 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppppplVar32 == (long ******)0x0) {
            (*(code *)(*ppppppplVar13)[2])(ppppppplVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar13);
          }
        }
        lVar18 = lVar18 + 1;
        puVar26 = puVar26 + 6;
      } while (puVar26 != puVar2);
    }
    return;
  }
  uVar23 = *(ulong *)(lVar18 + 0x18);
  puVar9 = *(undefined8 **)(lVar18 + 0x10);
  if (-1 < (char)*(byte *)(lVar18 + 0x27)) {
    uVar23 = (ulong)*(byte *)(lVar18 + 0x27);
    puVar9 = puVar11;
  }
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0x18;
    __Znwm();
    if (uVar23 < 0x7ffffffffffffff7) {
      if (0x16 < uVar23) {
        plVar15 = (long *)0x19;
        if ((uVar23 | 7) != 0x17) {
          plVar15 = (long *)((uVar23 | 7) + 1);
        }
        plVar10 = plVar15;
        __Znwm();
        *plVar8 = (long)plVar10;
        uVar29 = 2;
        goto LAB_104c48520;
      }
      *(char *)((long)plVar8 + 0x17) = (char)uVar23;
      uVar29 = 2;
      plVar10 = plVar8;
      plVar15 = plVar8;
      if (uVar23 != 0) goto LAB_104c48530;
      goto LAB_104c48540;
    }
  }
  else {
    func_0x00010b4d80a4();
    if (uVar23 < 0x7ffffffffffffff7) {
      if (uVar23 < 0x17) {
        *(char *)((long)plVar8 + 0x17) = (char)uVar23;
        uVar29 = 3;
        plVar10 = plVar8;
        plVar15 = plVar8;
        if (uVar23 == 0) goto LAB_104c48540;
      }
      else {
        plVar15 = (long *)0x19;
        if ((uVar23 | 7) != 0x17) {
          plVar15 = (long *)((uVar23 | 7) + 1);
        }
        plVar10 = plVar15;
        __Znwm();
        *plVar8 = (long)plVar10;
        uVar29 = 3;
LAB_104c48520:
        plVar8[1] = uVar23;
        plVar8[2] = (ulong)plVar15 | 0x8000000000000000;
        plVar15 = plVar8;
      }
LAB_104c48530:
      _memmove(plVar10,puVar9,uVar23);
      plVar8 = plVar10;
LAB_104c48540:
      *(undefined1 *)((long)plVar8 + uVar23) = 0;
      *(ulong *)(param_1 + 0x58) = uVar29 | (ulong)plVar15;
      goto LAB_104c48550;
    }
LAB_104c4a058:
    FUN_104bd47d4();
  }
  FUN_104bd47d4();
LAB_104c4a080:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x104c4a084);
  (*pcVar6)();
}



/* Entry: 104c4a334; end: 104c4a797;  */

void FUN_104c4a334(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  byte bVar3;
  long *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  
  lVar19 = *(long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != lVar19) {
    lVar15 = 0;
    lVar16 = 0;
    uVar17 = 0;
    puVar1 = (ulong *)(param_2 + 0x10);
    do {
      func_0x000100627dec(puVar1,0x104c4b100);
      puVar2 = puVar1;
      if ((*puVar1 & 1) != 0) {
        puVar2 = (ulong *)(*puVar1 + (lVar16 >> 0x1d) + 7);
      }
      uVar14 = *puVar2;
      plVar7 = *(long **)(uVar14 + 8);
      if (((ulong)plVar7 & 1) == 0) {
        uVar12 = *(ulong *)(uVar14 + 0x10);
        if ((uVar12 & 3) != 0) goto LAB_104c4a410;
LAB_104c4a488:
        plVar11 = (long *)(lVar19 + lVar15);
        uVar12 = plVar11[1];
        plVar4 = (long *)*plVar11;
        if (-1 < (char)*(byte *)((long)plVar11 + 0x17)) {
          uVar12 = (ulong)*(byte *)((long)plVar11 + 0x17);
          plVar4 = plVar11;
        }
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)0x18;
          __Znwm();
          if (0x7ffffffffffffff6 < uVar12) {
            FUN_104bd47d4();
            goto LAB_104c4a744;
          }
          if (0x16 < uVar12) {
            plVar11 = (long *)0x19;
            if ((uVar12 | 7) != 0x17) {
              plVar11 = (long *)((uVar12 | 7) + 1);
            }
            plVar9 = plVar11;
            __Znwm();
            *plVar7 = (long)plVar9;
            uVar13 = 2;
            goto LAB_104c4a55c;
          }
          *(char *)((long)plVar7 + 0x17) = (char)uVar12;
          uVar13 = 2;
          plVar9 = plVar7;
          if (uVar12 != 0) goto LAB_104c4a570;
LAB_104c4a580:
          *(undefined1 *)((long)plVar9 + uVar12) = 0;
          *(ulong *)(uVar14 + 0x10) = uVar13 | (ulong)plVar7;
          goto LAB_104c4a58c;
        }
        func_0x00010b4d80a4();
        if (uVar12 < 0x7ffffffffffffff7) {
          if (uVar12 < 0x17) {
            *(char *)((long)plVar7 + 0x17) = (char)uVar12;
            uVar13 = 3;
            plVar9 = plVar7;
            if (uVar12 == 0) goto LAB_104c4a580;
          }
          else {
            plVar11 = (long *)0x19;
            if ((uVar12 | 7) != 0x17) {
              plVar11 = (long *)((uVar12 | 7) + 1);
            }
            plVar9 = plVar11;
            __Znwm();
            *plVar7 = (long)plVar9;
            uVar13 = 3;
LAB_104c4a55c:
            plVar7[1] = uVar12;
            plVar7[2] = (ulong)plVar11 | 0x8000000000000000;
          }
LAB_104c4a570:
          _memmove(plVar9,plVar4,uVar12);
          goto LAB_104c4a580;
        }
LAB_104c4a734:
        FUN_104bd47d4();
LAB_104c4a738:
        FUN_104bd47d4();
LAB_104c4a744:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x104c4a748);
        (*pcVar6)();
      }
      plVar7 = *(long **)((ulong)plVar7 & 0xfffffffffffffffe);
      uVar12 = *(ulong *)(uVar14 + 0x10);
      if ((uVar12 & 3) == 0) goto LAB_104c4a488;
LAB_104c4a410:
      puVar10 = (undefined8 *)(lVar19 + lVar15);
      puVar8 = (undefined8 *)(uVar12 & 0xfffffffffffffffc);
      if (puVar10 != puVar8) {
        puVar2 = (ulong *)(lVar19 + lVar15);
        bVar3 = *(byte *)((long)puVar2 + 0x17);
        if (*(char *)((long)puVar8 + 0x17) < '\0') {
          uVar12 = puVar2[1];
          puVar5 = (undefined8 *)*puVar2;
          if (-1 < (char)bVar3) {
            uVar12 = (ulong)bVar3;
            puVar5 = puVar10;
          }
          func_0x0001006aabfc(puVar8,puVar5,uVar12);
        }
        else if ((char)bVar3 < '\0') {
          func_0x00010014884c(puVar8,*(undefined8 *)(lVar19 + lVar15),
                              ((undefined8 *)(lVar19 + lVar15))[1]);
        }
        else {
          uVar20 = puVar10[1];
          uVar18 = *puVar10;
          puVar8[2] = puVar10[2];
          puVar8[1] = uVar20;
          *puVar8 = uVar18;
        }
      }
LAB_104c4a58c:
      plVar7 = *(long **)(uVar14 + 8);
      if (((ulong)plVar7 & 1) == 0) {
        plVar11 = (long *)(lVar19 + lVar15 + 0x18);
        uVar12 = *(ulong *)(uVar14 + 0x18);
        if ((uVar12 & 3) != 0) goto LAB_104c4a5a8;
LAB_104c4a60c:
        bVar3 = *(byte *)(lVar19 + lVar15 + 0x2f);
        uVar12 = *(ulong *)(lVar19 + lVar15 + 0x20);
        plVar4 = (long *)*plVar11;
        if (-1 < (char)bVar3) {
          uVar12 = (ulong)bVar3;
          plVar4 = plVar11;
        }
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)0x18;
          __Znwm();
          if (0x7ffffffffffffff6 < uVar12) goto LAB_104c4a738;
          if (0x16 < uVar12) {
            plVar11 = (long *)0x19;
            if ((uVar12 | 7) != 0x17) {
              plVar11 = (long *)((uVar12 | 7) + 1);
            }
            plVar9 = plVar11;
            __Znwm();
            *plVar7 = (long)plVar9;
            uVar13 = 2;
            goto LAB_104c4a6e0;
          }
          *(char *)((long)plVar7 + 0x17) = (char)uVar12;
          uVar13 = 2;
          plVar9 = plVar7;
          if (uVar12 != 0) goto LAB_104c4a6f4;
        }
        else {
          func_0x00010b4d80a4();
          if (0x7ffffffffffffff6 < uVar12) goto LAB_104c4a734;
          if (uVar12 < 0x17) {
            *(char *)((long)plVar7 + 0x17) = (char)uVar12;
            uVar13 = 3;
            plVar9 = plVar7;
            if (uVar12 == 0) goto LAB_104c4a704;
          }
          else {
            plVar11 = (long *)0x19;
            if ((uVar12 | 7) != 0x17) {
              plVar11 = (long *)((uVar12 | 7) + 1);
            }
            plVar9 = plVar11;
            __Znwm();
            *plVar7 = (long)plVar9;
            uVar13 = 3;
LAB_104c4a6e0:
            plVar7[1] = uVar12;
            plVar7[2] = (ulong)plVar11 | 0x8000000000000000;
          }
LAB_104c4a6f4:
          _memmove(plVar9,plVar4,uVar12);
        }
LAB_104c4a704:
        *(undefined1 *)((long)plVar9 + uVar12) = 0;
        *(ulong *)(uVar14 + 0x18) = uVar13 | (ulong)plVar7;
      }
      else {
        plVar7 = *(long **)((ulong)plVar7 & 0xfffffffffffffffe);
        plVar11 = (long *)(lVar19 + lVar15 + 0x18);
        uVar12 = *(ulong *)(uVar14 + 0x18);
        if ((uVar12 & 3) == 0) goto LAB_104c4a60c;
LAB_104c4a5a8:
        plVar7 = (long *)(uVar12 & 0xfffffffffffffffc);
        if (plVar11 != plVar7) {
          bVar3 = *(byte *)(lVar19 + lVar15 + 0x2f);
          if (*(char *)((long)plVar7 + 0x17) < '\0') {
            uVar14 = *(ulong *)(lVar19 + lVar15 + 0x20);
            plVar4 = (long *)*plVar11;
            if (-1 < (char)bVar3) {
              uVar14 = (ulong)bVar3;
              plVar4 = plVar11;
            }
            func_0x0001006aabfc(plVar7,plVar4,uVar14);
          }
          else if ((char)bVar3 < '\0') {
            func_0x00010014884c(plVar7,*plVar11,*(undefined8 *)(lVar19 + lVar15 + 0x20));
          }
          else {
            lVar21 = plVar11[1];
            lVar19 = *plVar11;
            plVar7[2] = plVar11[2];
            plVar7[1] = lVar21;
            *plVar7 = lVar19;
          }
        }
      }
      uVar17 = uVar17 + 1;
      lVar19 = *(long *)(param_1 + 0x18);
      lVar16 = lVar16 + 0x100000000;
      lVar15 = lVar15 + 0x30;
    } while (uVar17 < (ulong)((*(long *)(param_1 + 0x20) - lVar19 >> 4) * -0x5555555555555555));
  }
  return;
}



/* Entry: 104c4a798; end: 104c4a853;  */

long * FUN_104c4a798(long *param_1)

{
  ulong uVar1;
  uint *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 == 0) {
    return param_1;
  }
  if ((*(byte *)(lVar3 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar4 = (ulong *)(lVar3 + 0x10);
  uVar1 = *puVar4;
  if ((uVar1 == 0) || (*(long *)(lVar3 + 0x20) != 0)) goto LAB_104c4a834;
  if ((uVar1 & 1) == 0) {
    uVar5 = 1;
    puVar6 = puVar4;
LAB_104c4a80c:
    do {
      if ((long *)*puVar6 != (long *)0x0) {
        (**(code **)(*(long *)*puVar6 + 8))();
      }
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
    if ((*puVar4 & 1) == 0) goto LAB_104c4a834;
    puVar2 = (uint *)(*puVar4 - 1);
  }
  else {
    puVar2 = (uint *)(uVar1 - 1);
    uVar5 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      puVar6 = (ulong *)(uVar1 + 7);
      goto LAB_104c4a80c;
    }
  }
  __ZdlPv(puVar2);
LAB_104c4a834:
  __ZdlPv(lVar3);
  return param_1;
}



/* Entry: 104c4a854; end: 104c4a92f;  */

long * FUN_104c4a854(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010adf2edc();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c4a930; end: 104c4a957;  */

/* WARNING: Removing unreachable block (ram,0x000104c4a99c) */

long * FUN_104c4a930(void)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  
  FUN_104bd47e8("vector");
  pcVar5 = "vector";
  FUN_104bd47e8();
  lVar2 = *(long *)((long)pcVar5 + 8);
  lVar6 = *(long *)((long)pcVar5 + 0x10);
  while (lVar2 != lVar6) {
    *(long *)((long)pcVar5 + 0x10) = lVar6 + -0x38;
    plVar7 = *(long **)(lVar6 + -0x28);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    lVar6 = *(long *)((long)pcVar5 + 0x10);
  }
  if (*(long *)pcVar5 != 0) {
    __ZdlPv();
  }
  return (long *)pcVar5;
}



/* Entry: 104c4a958; end: 104c4a9ff;  */

/* WARNING: Removing unreachable block (ram,0x000104c4a99c) */

long * FUN_104c4a958(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  lVar2 = param_1[1];
  lVar5 = param_1[2];
  while (lVar2 != lVar5) {
    param_1[2] = lVar5 + -0x38;
    plVar6 = *(long **)(lVar5 + -0x28);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    lVar5 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104c4aa00; end: 104c4ac53;  */

long * FUN_104c4aa00(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  bool bVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_68;
  undefined4 *puStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar12 = param_1[1] - *param_1;
  uVar9 = (lVar12 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar9 < 0x492492492492493) {
    plStack_48 = param_1 + 2;
    lVar7 = *plStack_48 - *param_1 >> 3;
    uVar10 = lVar7 * -0x2492492492492492;
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      uVar10 = uVar9;
    }
    if (0x249249249249248 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
      uVar10 = 0x492492492492492;
    }
    if (uVar10 == 0) {
      lVar7 = 0;
    }
    else {
      if (0x492492492492492 < uVar10) goto LAB_104c4ac34;
      lVar7 = uVar10 * 0x38;
      __Znwm();
    }
    puVar2 = (undefined4 *)(lVar7 + lVar12);
    lVar12 = lVar7 + uVar10 * 0x38;
    *puVar2 = *param_2;
    uVar14 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(puVar2 + 2) = uVar14;
    if (*(long *)(param_2 + 4) != 0) {
      plVar13 = (long *)(*(long *)(param_2 + 4) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = *plVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lStack_68 = lVar7;
    puStack_60 = puVar2;
    lStack_50 = lVar12;
    if (*(char *)((long)param_2 + 0x2f) < '\0') {
      plStack_58 = (long *)puVar2;
      func_0x000100033dac(puVar2 + 6,*(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 8));
    }
    else {
      uVar14 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar2 + 6) = uVar14;
      *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(param_2 + 10);
    }
    *(undefined1 *)(puVar2 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    plStack_58 = (long *)(puVar2 + 0xe);
    puVar11 = (undefined4 *)*param_1;
    puVar3 = (undefined4 *)param_1[1];
    puVar2 = (undefined4 *)((long)puVar2 + ((long)puVar11 - (long)puVar3));
    puVar6 = puVar11;
    puVar8 = puVar2;
    if ((long)puVar11 - (long)puVar3 != 0) {
      do {
        *puVar8 = *puVar6;
        uVar14 = *(undefined8 *)(puVar6 + 2);
        *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar6 + 4);
        *(undefined8 *)(puVar8 + 2) = uVar14;
        *(undefined8 *)(puVar6 + 2) = 0;
        *(undefined8 *)(puVar6 + 4) = 0;
        uVar15 = *(undefined8 *)(puVar6 + 8);
        uVar14 = *(undefined8 *)(puVar6 + 6);
        *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar6 + 10);
        *(undefined8 *)(puVar8 + 8) = uVar15;
        *(undefined8 *)(puVar8 + 6) = uVar14;
        *(undefined8 *)(puVar6 + 8) = 0;
        *(undefined8 *)(puVar6 + 10) = 0;
        *(undefined8 *)(puVar6 + 6) = 0;
        *(undefined1 *)(puVar8 + 0xc) = *(undefined1 *)(puVar6 + 0xc);
        puVar6 = puVar6 + 0xe;
        puVar8 = puVar8 + 0xe;
      } while (puVar6 != puVar3);
      do {
        if (*(char *)((long)puVar11 + 0x2f) < '\0') {
          __ZdlPv(*(undefined8 *)(puVar11 + 6));
          plVar13 = *(long **)(puVar11 + 4);
        }
        else {
          plVar13 = *(long **)(puVar11 + 4);
        }
        if (plVar13 != (long *)0x0) {
          plVar1 = plVar13 + 1;
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
            (**(code **)(*plVar13 + 0x10))(plVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        puVar11 = puVar11 + 0xe;
      } while (puVar11 != puVar3);
      puVar11 = (undefined4 *)*param_1;
      lVar12 = lStack_50;
    }
    plVar13 = plStack_58;
    *param_1 = (long)puVar2;
    param_1[1] = (long)plStack_58;
    param_1[2] = lVar12;
    if (puVar11 != (undefined4 *)0x0) {
      __ZdlPv(puVar11);
    }
    return plVar13;
  }
  func_0x000104c4a944();
LAB_104c4ac34:
  FUN_104bd35f4();
  FUN_104c4ac54(lVar12);
  FUN_104c4a958(&lStack_68);
  __Unwind_Resume();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 1;
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
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104c4ac54; end: 104c4b01f;  */

long FUN_104c4ac54(long param_1)

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



/* Entry: 104c4b020; end: 104c4b033;  */

void FUN_104c4b020(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ebeb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c4b034; end: 104c4b057;  */

void FUN_104c4b034(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ebeb0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c4b058; end: 104c4b06f;  */

void FUN_104c4b058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c4b060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 104c4b070; end: 104c4b1af;  */

undefined8 * FUN_104c4b070(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107ebf00;
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return param_1;
  }
  __ZdlPv(param_1[2]);
  return param_1;
}



/* Entry: 104c4b1b0; end: 104c4b4db;  */

/* WARNING: Removing unreachable block (ram,0x000104c4b2f0) */

void FUN_104c4b1b0(long param_1,undefined8 param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined ***pppuVar5;
  long *plVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  long lVar11;
  code *pcVar12;
  uint *puVar13;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  pppuVar5 = &ppuStack_80;
  if ((*(byte *)(*(long *)(param_1 + 0x78) + 0x50) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    iVar2 = *param_3;
    *(int *)(param_1 + 0x4c) = iVar2;
    if (iVar2 == 7) {
      func_0x000100042ef0(param_1 + 0x50,
                          "Please login to MyLenses to activate Questions and Answers. If you already logged-in, please logout from MyLenses (from the top menu: MyLenses -> Log Out) and login again"
                         );
    }
    else {
      if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__17promiseIvE9set_valueEv_1103468a8)(param_1 + 0x28);
        return;
      }
      if (*(char *)((long)param_3 + 0x1f) < '\0') {
        func_0x000100033dac(&ppuStack_80,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
        cVar3 = *(char *)(param_1 + 0x67);
      }
      else {
        lStack_78 = *(long *)(param_3 + 4);
        ppuStack_80 = *(undefined ***)(param_3 + 2);
        lStack_70 = *(long *)(param_3 + 6);
        cVar3 = *(char *)(param_1 + 0x67);
      }
      if (cVar3 < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x50));
      }
      *(long *)(param_1 + 0x58) = lStack_78;
      *(undefined ***)(param_1 + 0x50) = ppuStack_80;
      *(long *)(param_1 + 0x60) = lStack_70;
    }
    FUN_104c4bb14();
    lStack_70 = 0;
    uStack_68 = 0;
    ppuStack_80 = &PTR_FUN_1107eb688;
    lStack_78 = 0;
    uStack_60 = 0x11;
    FUN_104c37260(&ppuStack_80,8);
    (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,pppuVar5,1);
    ppuStack_80 = &PTR_DAT_1107eb6f0;
    if (lStack_78 != 0) {
      for (; lStack_78 != lStack_70; lStack_70 = lStack_70 + -0x18) {
      }
      lStack_70 = lStack_78;
      __ZdlPv(lStack_78);
    }
    pcVar12 = *(code **)(param_1 + 8);
    if (pcVar12 == (code *)0x0) {
      __ZNSt3__17promiseIvE9set_valueEv(param_1 + 0x28);
    }
    else {
      plVar6 = (long *)0x28;
      __Znwm();
      plVar6[4] = 0;
      plVar6[1] = 0;
      *plVar6 = 0;
      plVar6[3] = 0;
      plVar6[2] = 0;
      *(undefined4 *)(plVar6 + 4) = 0xffffffff;
      puVar13 = *(uint **)(param_1 + 0x30);
      puVar1 = *(uint **)(param_1 + 0x38);
      lVar7 = (long)puVar1 - (long)puVar13;
      if (lVar7 == 0) {
        lVar11 = 0;
        lVar7 = 0;
      }
      else {
        lVar7 = lVar7 >> 3;
        if (0xaaaaaaaaaaaaaaa < (ulong)(lVar7 * -0x3333333333333333)) {
          FUN_104c4b994();
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x104c4b494);
          (*pcVar12)();
        }
        lVar7 = lVar7 * 0x3333333333333338;
        lVar11 = lVar7;
        __Znwm();
        _bzero();
        puVar8 = (uint *)(lVar11 + 0x10);
        do {
          puVar9 = puVar13 + 2;
          if (*(char *)((long)puVar13 + 0x1f) < '\0') {
            puVar9 = *(uint **)puVar9;
          }
          *(uint **)(puVar8 + -2) = puVar9;
          puVar8[-4] = *puVar13;
          *puVar8 = (uint)(byte)puVar13[8];
          puVar13 = puVar13 + 10;
          puVar8 = puVar8 + 6;
        } while (puVar13 != puVar1);
        lVar7 = lVar11 + ((lVar7 - 0x18U) / 0x18) * 0x18 + 0x18;
      }
      *plVar6 = lVar11;
      puVar10 = *(undefined8 **)(param_1 + 0x50);
      bVar4 = *(byte *)(param_1 + 0x48);
      *(int *)(plVar6 + 1) = (int)((ulong)(lVar7 - lVar11) >> 3) * -0x55555555;
      *(uint *)((long)plVar6 + 0xc) = (uint)bVar4;
      *(undefined4 *)(plVar6 + 2) = *(undefined4 *)(param_1 + 0x4c);
      if (-1 < *(char *)(param_1 + 0x67)) {
        puVar10 = (undefined8 *)(param_1 + 0x50);
      }
      plVar6[3] = (long)puVar10;
      *(undefined4 *)(plVar6 + 4) = *(undefined4 *)(param_1 + 0x68);
      (*pcVar12)(plVar6,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x20));
      if (lVar11 != 0) {
        __ZdlPv(lVar11);
      }
      __ZdlPv(plVar6);
    }
  }
  return;
}



/* Entry: 104c4b4dc; end: 104c4b85f;  */

/* WARNING: Removing unreachable block (ram,0x000104c4b674) */

void FUN_104c4b4dc(long param_1,undefined8 param_2,long param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined ***pppuVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long *plVar7;
  uint *puVar8;
  uint *puVar9;
  long *plVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  uint *puVar15;
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined4 uStack_58;
  
  if ((*(byte *)(*(long *)(param_1 + 0x78) + 0x50) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    uVar5 = *(ulong *)(param_3 + 0x10);
    puVar11 = (ulong *)(param_3 + 0x10);
    if ((uVar5 & 1) != 0) {
      puVar11 = (ulong *)(uVar5 + 7);
    }
    if (*(int *)(param_3 + 0x18) != 0) {
      lVar12 = (long)*(int *)(param_3 + 0x18) << 3;
      do {
        uVar5 = *puVar11;
        plVar7 = (long *)(*(ulong *)(uVar5 + 0x10) & 0xfffffffffffffffc);
        ppuStack_78 = (undefined **)CONCAT44(ppuStack_78._4_4_,*(undefined4 *)(uVar5 + 0x18));
        uVar3 = (undefined1)*(undefined4 *)(uVar5 + 0x1c);
        if (*(char *)((long)plVar7 + 0x17) < '\0') {
          func_0x000100033dac(&lStack_70,*plVar7,plVar7[1]);
          uStack_58 = CONCAT31(uStack_58._1_3_,uVar3);
          puVar6 = *(undefined4 **)(param_1 + 0x38);
          if (puVar6 < *(undefined4 **)(param_1 + 0x40)) goto LAB_104c4b530;
LAB_104c4b5c8:
          lVar13 = param_1 + 0x30;
          FUN_104c4b9a8(lVar13,&ppuStack_78);
          *(long *)(param_1 + 0x38) = lVar13;
          if (lStack_60 < 0) {
            __ZdlPv(lStack_70);
          }
        }
        else {
          lStack_68 = plVar7[1];
          lStack_70 = *plVar7;
          lStack_60 = plVar7[2];
          uStack_58 = CONCAT31(uStack_58._1_3_,uVar3);
          puVar6 = *(undefined4 **)(param_1 + 0x38);
          if (*(undefined4 **)(param_1 + 0x40) <= puVar6) goto LAB_104c4b5c8;
LAB_104c4b530:
          *puVar6 = ppuStack_78._0_4_;
          *(long *)(puVar6 + 6) = lStack_60;
          *(long *)(puVar6 + 4) = lStack_68;
          *(long *)(puVar6 + 2) = lStack_70;
          lStack_68 = 0;
          lStack_60 = 0;
          lStack_70 = 0;
          *(undefined1 *)(puVar6 + 8) = (undefined1)uStack_58;
          *(undefined4 **)(param_1 + 0x38) = puVar6 + 10;
        }
        puVar11 = puVar11 + 1;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    FUN_104c4bb14();
    lStack_68 = 0;
    lStack_60 = 0;
    ppuStack_78 = &PTR_FUN_1107eb688;
    lStack_70 = 0;
    uStack_58 = 0x10;
    pppuVar4 = &ppuStack_78;
    FUN_104c37260(pppuVar4,8);
    (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,pppuVar4,1);
    ppuStack_78 = &PTR_DAT_1107eb6f0;
    if (lStack_70 != 0) {
      for (; lStack_70 != lStack_68; lStack_68 = lStack_68 + -0x18) {
      }
      lStack_68 = lStack_70;
      __ZdlPv(lStack_70);
    }
    pcVar14 = *(code **)(param_1 + 8);
    if (pcVar14 == (code *)0x0) {
      __ZNSt3__17promiseIvE9set_valueEv(param_1 + 0x28);
    }
    else {
      plVar7 = (long *)0x28;
      __Znwm();
      plVar7[4] = 0;
      plVar7[1] = 0;
      *plVar7 = 0;
      plVar7[3] = 0;
      plVar7[2] = 0;
      *(undefined4 *)(plVar7 + 4) = 0xffffffff;
      puVar15 = *(uint **)(param_1 + 0x30);
      puVar1 = *(uint **)(param_1 + 0x38);
      lVar12 = (long)puVar1 - (long)puVar15;
      if (lVar12 == 0) {
        lVar13 = 0;
        lVar12 = 0;
      }
      else {
        lVar12 = lVar12 >> 3;
        if (0xaaaaaaaaaaaaaaa < (ulong)(lVar12 * -0x3333333333333333)) {
          FUN_104c4b994();
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x104c4b80c);
          (*pcVar14)();
        }
        lVar12 = lVar12 * 0x3333333333333338;
        lVar13 = lVar12;
        __Znwm();
        _bzero();
        puVar8 = (uint *)(lVar13 + 0x10);
        do {
          puVar9 = puVar15 + 2;
          if (*(char *)((long)puVar15 + 0x1f) < '\0') {
            puVar9 = *(uint **)puVar9;
          }
          *(uint **)(puVar8 + -2) = puVar9;
          puVar8[-4] = *puVar15;
          *puVar8 = (uint)(byte)puVar15[8];
          puVar15 = puVar15 + 10;
          puVar8 = puVar8 + 6;
        } while (puVar15 != puVar1);
        lVar12 = lVar13 + ((lVar12 - 0x18U) / 0x18) * 0x18 + 0x18;
      }
      *plVar7 = lVar13;
      plVar10 = *(long **)(param_1 + 0x50);
      bVar2 = *(byte *)(param_1 + 0x48);
      *(int *)(plVar7 + 1) = (int)((ulong)(lVar12 - lVar13) >> 3) * -0x55555555;
      *(uint *)((long)plVar7 + 0xc) = (uint)bVar2;
      *(undefined4 *)(plVar7 + 2) = *(undefined4 *)(param_1 + 0x4c);
      if (-1 < *(char *)(param_1 + 0x67)) {
        plVar10 = (long *)(param_1 + 0x50);
      }
      plVar7[3] = (long)plVar10;
      *(undefined4 *)(plVar7 + 4) = *(undefined4 *)(param_1 + 0x68);
      (*pcVar14)(plVar7,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x20));
      __ZNSt3__17promiseIvE9set_valueEv(param_1 + 0x28);
      if (lVar13 != 0) {
        __ZdlPv(lVar13);
      }
      __ZdlPv(plVar7);
    }
  }
  return;
}



/* Entry: 104c4b860; end: 104c4b987;  */

/* WARNING: Removing unreachable block (ram,0x000104c4b8c0) */

undefined8 * FUN_104c4b860(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_1107ebf28;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    lVar3 = param_1[7];
    lVar1 = lVar2;
    if (lVar2 != lVar3) {
      do {
        lVar3 = lVar3 + -0x28;
      } while (lVar3 != lVar2);
      lVar1 = param_1[6];
    }
    param_1[7] = lVar2;
    __ZdlPv(lVar1);
  }
  __ZNSt3__17promiseIvED1Ev(param_1 + 5);
  return param_1;
}



/* Entry: 104c4b988; end: 104c4b993;  */

void FUN_104c4b988(void)

{
  return;
}



/* Entry: 104c4b994; end: 104c4b9a7;  */

undefined4 * FUN_104c4b994(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_b8 [72];
  
  plVar5 = (long *)&DAT_10f62a4d8;
  FUN_104bd47e8();
  lVar13 = plVar5[1] - *plVar5;
  uVar10 = (lVar13 >> 3) * -0x3333333333333333 + 1;
  if (uVar10 < 0x666666666666667) {
    lVar8 = plVar5[2] - *plVar5 >> 3;
    uVar11 = lVar8 * -0x6666666666666666;
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      uVar11 = uVar10;
    }
    if (0x333333333333332 < (ulong)(lVar8 * -0x3333333333333333)) {
      uVar11 = 0x666666666666666;
    }
    if (uVar11 < 0x666666666666667) {
      lVar8 = uVar11 * 0x28;
      __Znwm();
      puVar1 = (undefined4 *)(lVar8 + lVar13);
      *puVar1 = *param_2;
      uVar14 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(puVar1 + 2) = uVar14;
      *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0;
      *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_2 + 8);
      puVar12 = (undefined4 *)*plVar5;
      puVar3 = (undefined4 *)plVar5[1];
      puVar2 = (undefined4 *)((long)puVar1 + ((long)puVar12 - (long)puVar3));
      puVar7 = puVar12;
      puVar9 = puVar2;
      if ((long)puVar12 - (long)puVar3 != 0) {
        do {
          *puVar9 = *puVar7;
          uVar15 = *(undefined8 *)(puVar7 + 4);
          uVar14 = *(undefined8 *)(puVar7 + 2);
          *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(puVar7 + 6);
          *(undefined8 *)(puVar9 + 4) = uVar15;
          *(undefined8 *)(puVar9 + 2) = uVar14;
          *(undefined8 *)(puVar7 + 4) = 0;
          *(undefined8 *)(puVar7 + 6) = 0;
          *(undefined8 *)(puVar7 + 2) = 0;
          *(undefined1 *)(puVar9 + 8) = *(undefined1 *)(puVar7 + 8);
          puVar7 = puVar7 + 10;
          puVar9 = puVar9 + 10;
        } while (puVar7 != puVar3);
        do {
          if (*(char *)((long)puVar12 + 0x1f) < '\0') {
            __ZdlPv(*(undefined8 *)(puVar12 + 2));
          }
          puVar12 = puVar12 + 10;
        } while (puVar12 != puVar3);
        puVar12 = (undefined4 *)*plVar5;
      }
      *plVar5 = (long)puVar2;
      plVar5[1] = (long)(puVar1 + 10);
      plVar5[2] = lVar8 + uVar11 * 0x28;
      if (puVar12 != (undefined4 *)0x0) {
        __ZdlPv(puVar12);
      }
      return puVar1 + 10;
    }
  }
  else {
    FUN_104c3b734();
  }
  FUN_104bd35f4();
  if ((bRam0000000113817ca8 & 1) == 0) {
    iVar4 = 0x13817ca8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_104c4bbd8(auStack_b8);
      puVar6 = auStack_b8;
      func_0x00010028f4b0();
      puRam0000000113817ca0 = puVar6;
      FUN_104c4c39c(auStack_b8);
      ___cxa_guard_release(0x113817ca8);
      return (undefined4 *)0x113817ca0;
    }
  }
  return (undefined4 *)0x113817ca0;
}



/* Entry: 104c4b9a8; end: 104c4bb13;  */

undefined4 * FUN_104c4b9a8(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_a8 [72];
  
  lVar12 = param_1[1] - *param_1;
  uVar9 = (lVar12 >> 3) * -0x3333333333333333 + 1;
  if (uVar9 < 0x666666666666667) {
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar10 = lVar7 * -0x6666666666666666;
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      uVar10 = uVar9;
    }
    if (0x333333333333332 < (ulong)(lVar7 * -0x3333333333333333)) {
      uVar10 = 0x666666666666666;
    }
    if (uVar10 < 0x666666666666667) {
      lVar7 = uVar10 * 0x28;
      __Znwm();
      puVar1 = (undefined4 *)(lVar7 + lVar12);
      *puVar1 = *param_2;
      uVar13 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(puVar1 + 2) = uVar13;
      *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0;
      *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_2 + 8);
      puVar11 = (undefined4 *)*param_1;
      puVar3 = (undefined4 *)param_1[1];
      puVar2 = (undefined4 *)((long)puVar1 + ((long)puVar11 - (long)puVar3));
      puVar6 = puVar11;
      puVar8 = puVar2;
      if ((long)puVar11 - (long)puVar3 != 0) {
        do {
          *puVar8 = *puVar6;
          uVar14 = *(undefined8 *)(puVar6 + 4);
          uVar13 = *(undefined8 *)(puVar6 + 2);
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar6 + 6);
          *(undefined8 *)(puVar8 + 4) = uVar14;
          *(undefined8 *)(puVar8 + 2) = uVar13;
          *(undefined8 *)(puVar6 + 4) = 0;
          *(undefined8 *)(puVar6 + 6) = 0;
          *(undefined8 *)(puVar6 + 2) = 0;
          *(undefined1 *)(puVar8 + 8) = *(undefined1 *)(puVar6 + 8);
          puVar6 = puVar6 + 10;
          puVar8 = puVar8 + 10;
        } while (puVar6 != puVar3);
        do {
          if (*(char *)((long)puVar11 + 0x1f) < '\0') {
            __ZdlPv(*(undefined8 *)(puVar11 + 2));
          }
          puVar11 = puVar11 + 10;
        } while (puVar11 != puVar3);
        puVar11 = (undefined4 *)*param_1;
      }
      *param_1 = (long)puVar2;
      param_1[1] = (long)(puVar1 + 10);
      param_1[2] = lVar7 + uVar10 * 0x28;
      if (puVar11 != (undefined4 *)0x0) {
        __ZdlPv(puVar11);
      }
      return puVar1 + 10;
    }
  }
  else {
    FUN_104c3b734();
  }
  FUN_104bd35f4();
  if ((bRam0000000113817ca8 & 1) == 0) {
    iVar4 = 0x13817ca8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_104c4bbd8(auStack_a8);
      puVar5 = auStack_a8;
      func_0x00010028f4b0();
      puRam0000000113817ca0 = puVar5;
      FUN_104c4c39c(auStack_a8);
      ___cxa_guard_release(0x113817ca8);
      return (undefined4 *)0x113817ca0;
    }
  }
  return (undefined4 *)0x113817ca0;
}



/* Entry: 104c4bb14; end: 104c4bbd7;  */

undefined8 FUN_104c4bb14(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam0000000113817ca8 & 1) == 0) {
    iVar1 = 0x13817ca8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_104c4bbd8(auStack_68);
      puVar2 = auStack_68;
      func_0x00010028f4b0();
      puRam0000000113817ca0 = puVar2;
      FUN_104c4c39c(auStack_68);
      ___cxa_guard_release(0x113817ca8);
      return 0x113817ca0;
    }
  }
  return 0x113817ca0;
}



/* Entry: 104c4bbd8; end: 104c4c39b;  */

/* WARNING: Removing unreachable block (ram,0x000104c4c3e0) */
/* WARNING: Type propagation algorithm not settling */

char * FUN_104c4bbd8(undefined8 *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcStack_250;
  char *pcStack_248;
  char *pcStack_240;
  char **ppcStack_238;
  undefined1 uStack_230;
  char **ppcStack_228;
  char **ppcStack_220;
  char **ppcStack_218;
  undefined1 uStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined4 uStack_1f0;
  undefined1 uStack_1ec;
  undefined8 uStack_1e8;
  undefined7 uStack_1e0;
  undefined4 uStack_1d9;
  undefined1 uStack_1d5;
  char cStack_1c9;
  char *pcStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  char *pcStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  char *pcStack_198;
  undefined8 uStack_190;
  long lStack_188;
  char *pcStack_180;
  undefined8 uStack_178;
  long lStack_170;
  char *pcStack_168;
  undefined6 uStack_160;
  undefined2 uStack_15a;
  undefined6 uStack_158;
  short sStack_152;
  char *pcStack_150;
  undefined8 uStack_148;
  long lStack_140;
  char *pcStack_138;
  char acStack_130 [15];
  char cStack_121;
  char *pcStack_120;
  char acStack_118 [8];
  undefined2 uStack_110;
  char cStack_109;
  char *pcStack_108;
  undefined2 uStack_100;
  undefined1 uStack_fe;
  char cStack_f1;
  char *pcStack_f0;
  char acStack_e8 [8];
  undefined2 uStack_e0;
  char cStack_d9;
  char *pcStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  char cStack_c1;
  char *pcStack_c0;
  undefined2 uStack_b8;
  undefined1 uStack_b6;
  char cStack_a9;
  char *pcStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  char cStack_91;
  char *pcStack_90;
  char acStack_88 [8];
  undefined2 uStack_80;
  char cStack_79;
  char *pcStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  char cStack_61;
  char *pcStack_60;
  undefined2 uStack_58;
  undefined1 uStack_56;
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1e8._7_1_ = '\f';
  uStack_1f0 = 0x4d414552;
  pcStack_1f8 = (char *)0x54535f5452415453;
  uStack_1ec = 0;
  cStack_1c9 = '\v';
  uStack_1e0 = 0x54535f504f5453;
  uStack_1d9 = 0x4d414552;
  uStack_1d5 = 0;
  pcVar2 = (char *)0x20;
  __Znwm();
  lStack_1b8 = -0x7fffffffffffffe0;
  uStack_1c0 = 0x1e;
  builtin_strncpy(pcVar2,"STREAMER_WRITE_RECEIVE_LATENCY",0x1f);
  pcVar3 = (char *)0x20;
  pcStack_1c8 = pcVar2;
  __Znwm();
  lStack_1a0 = -0x7fffffffffffffe0;
  uStack_1a8 = 0x1c;
  builtin_strncpy(pcVar3,"STREAMING_STOP_STREAM_FAILED",0x1d);
  pcVar2 = (char *)0x20;
  pcStack_1b0 = pcVar3;
  __Znwm();
  lStack_188 = -0x7fffffffffffffe0;
  uStack_190 = 0x1f;
  builtin_strncpy(pcVar2,"STREAMING_RESTART_STREAM_FAILED",0x20);
  pcVar3 = (char *)0x20;
  pcStack_198 = pcVar2;
  __Znwm();
  builtin_strncpy(pcVar3,"STREAMING_ADD_BUFFER_FAILED",0x1c);
  lStack_170 = -0x7fffffffffffffe0;
  uStack_178 = 0x1b;
  uStack_160 = 0x564954414e52;
  pcStack_168 = (char *)0x45544c415f4d554e;
  uStack_15a = 0x5345;
  uStack_158 = 0x524f5252455f;
  sStack_152 = 0x1600;
  pcVar2 = (char *)0x20;
  pcStack_180 = pcVar3;
  __Znwm();
  builtin_strncpy(pcVar2,"ASR_STREAMING_CALLBACK_ERROR",0x1d);
  cStack_121 = '\x10';
  lStack_140 = -0x7fffffffffffffe0;
  uStack_148 = 0x1c;
  builtin_strncpy(acStack_130,"ANSCRIBE",9);
  pcStack_138 = (char *)0x52545f5452415453;
  cStack_109 = '\x11';
  uStack_110 = 0x59;
  builtin_strncpy(acStack_118,"Y_LATENC",8);
  pcStack_120 = (char *)0x52414e555f525341;
  cStack_f1 = '\n';
  uStack_100 = 0x455a;
  pcStack_108 = (char *)0x49534548544e5953;
  uStack_fe = 0;
  cStack_d9 = '\x11';
  builtin_strncpy(acStack_e8,"Y_LATENC",8);
  pcStack_f0 = (char *)0x52414e555f535454;
  uStack_e0 = 0x59;
  cStack_c1 = '\f';
  uStack_d0 = 0x53534543;
  pcStack_d8 = (char *)0x4355534e4f535454;
  uStack_cc = 0;
  cStack_a9 = '\n';
  uStack_b8 = 0x524f;
  pcStack_c0 = (char *)0x5252454e4f535454;
  uStack_b6 = 0;
  cStack_91 = '\f';
  uStack_a0 = 0x534e4f49;
  pcStack_a8 = (char *)0x54534555514b5341;
  uStack_9c = 0;
  cStack_79 = '\x11';
  builtin_strncpy(acStack_88,"Y_LATENC",8);
  pcStack_90 = (char *)0x52414e555f414e51;
  uStack_80 = 0x59;
  cStack_61 = '\f';
  uStack_70 = 0x53534543;
  pcStack_78 = (char *)0x4355534e4f414e51;
  uStack_6c = 0;
  cStack_49 = '\n';
  uStack_58 = 0x524f;
  pcStack_60 = (char *)0x5252454e4f414e51;
  uStack_56 = 0;
  pcStack_250 = (char *)0x0;
  pcStack_248 = (char *)0x0;
  ppcStack_238 = &pcStack_250;
  pcStack_240 = (char *)0x0;
  uStack_230 = 0;
  pcVar3 = (char *)0x1b0;
  pcStack_150 = pcVar2;
  __Znwm();
  lVar6 = 0;
  ppcStack_228 = &pcStack_240;
  pcStack_240 = pcVar3 + 0x1b0;
  ppcStack_220 = &pcStack_208;
  ppcStack_218 = &pcStack_200;
  uStack_210 = 0;
  pcStack_250 = pcVar3;
  pcStack_248 = pcVar3;
  pcStack_208 = pcVar3;
  pcStack_200 = pcVar3;
  do {
    while (-1 < *(char *)((long)&uStack_1e8 + lVar6 + 7)) {
      uVar9 = *(undefined8 *)((long)&uStack_1f0 + lVar6);
      uVar8 = *(undefined8 *)((long)&pcStack_1f8 + lVar6);
      *(undefined8 *)(pcStack_200 + 0x10) = *(undefined8 *)((long)&uStack_1e8 + lVar6);
      pcVar2 = pcStack_200 + 0x18;
      *(undefined8 *)(pcStack_200 + 8) = uVar9;
      *(undefined8 *)pcStack_200 = uVar8;
      lVar6 = lVar6 + 0x18;
      pcStack_200 = pcVar2;
      if (lVar6 == 0x1b0) goto LAB_104c4bf60;
    }
    func_0x000100033dac();
    lVar6 = lVar6 + 0x18;
    pcVar2 = pcStack_200 + 0x18;
    pcStack_200 = pcVar2;
  } while (lVar6 != 0x1b0);
LAB_104c4bf60:
  *param_1 = 0x43494f565f4e4353;
  *(undefined4 *)(param_1 + 1) = 0x4c4d45;
  *(undefined1 *)((long)param_1 + 0x17) = 0xb;
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x2f) = 0;
  param_1[6] = pcStack_250;
  param_1[7] = pcVar2;
  param_1[8] = pcStack_240;
  pcStack_250 = (char *)0x0;
  pcStack_248 = (char *)0x0;
  pcStack_240 = (char *)0x0;
  pcStack_200 = pcVar2;
  pcVar3 = pcStack_78;
  if (cStack_49 < '\0') {
    pcVar2 = pcStack_60;
    __ZdlPv();
    pcVar3 = pcStack_78;
  }
  pcVar4 = pcStack_90;
  pcStack_78 = pcVar3;
  if (cStack_61 < '\0') {
    __ZdlPv();
    pcVar2 = pcVar3;
    pcVar4 = pcStack_90;
  }
  pcVar3 = pcStack_a8;
  pcStack_90 = pcVar4;
  if (cStack_79 < '\0') {
    __ZdlPv();
    pcVar2 = pcVar4;
    pcVar3 = pcStack_a8;
  }
  pcVar4 = pcStack_c0;
  pcStack_a8 = pcVar3;
  if (cStack_91 < '\0') {
    __ZdlPv();
    pcVar2 = pcVar3;
    pcVar4 = pcStack_c0;
  }
  pcVar3 = pcStack_d8;
  pcStack_c0 = pcVar4;
  if (cStack_a9 < '\0') {
    __ZdlPv();
    pcVar2 = pcVar4;
    pcVar3 = pcStack_d8;
  }
  pcVar4 = pcStack_f0;
  pcStack_d8 = pcVar3;
  if (cStack_c1 < '\0') {
    __ZdlPv();
    pcVar2 = pcVar3;
    pcVar4 = pcStack_f0;
  }
  pcVar3 = pcStack_108;
  pcStack_f0 = pcVar4;
  if (cStack_d9 < '\0') {
    __ZdlPv();
    pcVar2 = pcVar4;
    pcVar3 = pcStack_108;
  }
  pcVar4 = pcStack_120;
  pcStack_108 = pcVar3;
  if (cStack_f1 < '\0') {
    __ZdlPv();
    pcVar2 = pcVar3;
    pcVar4 = pcStack_120;
  }
  pcVar3 = pcStack_138;
  pcStack_120 = pcVar4;
  if (cStack_109 < '\0') {
    __ZdlPv();
    pcVar2 = pcVar4;
    pcVar3 = pcStack_138;
  }
  pcVar4 = pcStack_150;
  pcStack_138 = pcVar3;
  if (cStack_121 < '\0') {
    __ZdlPv();
    pcVar2 = pcVar3;
    pcVar4 = pcStack_150;
  }
  pcVar3 = pcStack_168;
  pcStack_150 = pcVar4;
  if (lStack_140 < 0) {
    __ZdlPv();
    pcVar2 = pcVar4;
    pcVar3 = pcStack_168;
  }
  pcVar4 = pcStack_180;
  pcStack_168 = pcVar3;
  if (sStack_152 < 0) {
    __ZdlPv();
    pcVar2 = pcVar3;
    pcVar4 = pcStack_180;
  }
  pcVar3 = pcStack_198;
  pcStack_180 = pcVar4;
  if (lStack_170 < 0) {
    __ZdlPv();
    pcVar2 = pcVar4;
    pcVar3 = pcStack_198;
  }
  pcVar4 = pcStack_1b0;
  pcStack_198 = pcVar3;
  if (lStack_188 < 0) {
    __ZdlPv();
    pcVar2 = pcVar3;
    pcVar4 = pcStack_1b0;
  }
  pcVar3 = pcStack_1c8;
  pcStack_1b0 = pcVar4;
  if (lStack_1a0 < 0) {
    __ZdlPv();
    pcVar2 = pcVar4;
    pcVar3 = pcStack_1c8;
  }
  pcStack_1c8 = pcVar3;
  if (lStack_1b8 < 0) {
    __ZdlPv();
    pcVar2 = pcVar3;
  }
  pcVar3 = pcStack_1f8;
  if (cStack_1c9 < '\0') {
    pcVar2 = (char *)CONCAT17((char)uStack_1d9,uStack_1e0);
    __ZdlPv();
    pcVar3 = pcStack_1f8;
  }
  pcStack_1f8 = pcVar3;
  if (uStack_1e8._7_1_ < '\0') {
    __ZdlPv();
    pcVar2 = pcVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return pcVar3;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  func_0x000104c391d4(&ppcStack_238);
  if (cStack_49 < '\0') goto LAB_104c4c284;
  if (cStack_61 < '\0') goto LAB_104c4c294;
LAB_104c4c1f4:
  if (cStack_79 < '\0') goto LAB_104c4c2a4;
LAB_104c4c1fc:
  if (cStack_91 < '\0') goto LAB_104c4c2b4;
LAB_104c4c204:
  if (cStack_a9 < '\0') goto LAB_104c4c2c4;
LAB_104c4c20c:
  if (cStack_c1 < '\0') goto LAB_104c4c2d4;
LAB_104c4c214:
  if (cStack_d9 < '\0') goto LAB_104c4c2e4;
LAB_104c4c21c:
  if (cStack_f1 < '\0') goto LAB_104c4c2f4;
LAB_104c4c224:
  if (cStack_109 < '\0') goto LAB_104c4c304;
LAB_104c4c22c:
  if (cStack_121 < '\0') goto LAB_104c4c314;
LAB_104c4c234:
  if (lStack_140 < 0) goto LAB_104c4c324;
LAB_104c4c23c:
  if (sStack_152 < 0) goto LAB_104c4c334;
LAB_104c4c244:
  if (lStack_170 < 0) goto LAB_104c4c344;
LAB_104c4c24c:
  if (lStack_188 < 0) goto LAB_104c4c354;
LAB_104c4c254:
  if (lStack_1a0 < 0) goto LAB_104c4c364;
LAB_104c4c25c:
  if (lStack_1b8 < 0) goto LAB_104c4c374;
LAB_104c4c264:
  if (cStack_1c9 < '\0') goto LAB_104c4c384;
  while (uStack_1e8._7_1_ < '\0') {
    while( true ) {
      __ZdlPv(pcStack_1f8);
      __Unwind_Resume(pcVar2);
LAB_104c4c284:
      __ZdlPv(pcStack_60);
      if (-1 < cStack_61) goto LAB_104c4c1f4;
LAB_104c4c294:
      __ZdlPv(pcStack_78);
      if (-1 < cStack_79) goto LAB_104c4c1fc;
LAB_104c4c2a4:
      __ZdlPv(pcStack_90);
      if (-1 < cStack_91) goto LAB_104c4c204;
LAB_104c4c2b4:
      __ZdlPv(pcStack_a8);
      if (-1 < cStack_a9) goto LAB_104c4c20c;
LAB_104c4c2c4:
      __ZdlPv(pcStack_c0);
      if (-1 < cStack_c1) goto LAB_104c4c214;
LAB_104c4c2d4:
      __ZdlPv(pcStack_d8);
      if (-1 < cStack_d9) goto LAB_104c4c21c;
LAB_104c4c2e4:
      __ZdlPv(pcStack_f0);
      if (-1 < cStack_f1) goto LAB_104c4c224;
LAB_104c4c2f4:
      __ZdlPv(pcStack_108);
      if (-1 < cStack_109) goto LAB_104c4c22c;
LAB_104c4c304:
      __ZdlPv(pcStack_120);
      if (-1 < cStack_121) goto LAB_104c4c234;
LAB_104c4c314:
      __ZdlPv(pcStack_138);
      if (-1 < lStack_140) goto LAB_104c4c23c;
LAB_104c4c324:
      __ZdlPv(pcStack_150);
      if (-1 < sStack_152) goto LAB_104c4c244;
LAB_104c4c334:
      __ZdlPv(pcStack_168);
      if (-1 < lStack_170) goto LAB_104c4c24c;
LAB_104c4c344:
      __ZdlPv(pcStack_180);
      if (-1 < lStack_188) goto LAB_104c4c254;
LAB_104c4c354:
      __ZdlPv(pcStack_198);
      if (-1 < lStack_1a0) goto LAB_104c4c25c;
LAB_104c4c364:
      __ZdlPv(pcStack_1b0);
      if (-1 < lStack_1b8) goto LAB_104c4c264;
LAB_104c4c374:
      __ZdlPv(pcStack_1c8);
      if (-1 < cStack_1c9) break;
LAB_104c4c384:
      __ZdlPv(CONCAT17((char)uStack_1d9,uStack_1e0));
      if (-1 < uStack_1e8._7_1_) goto LAB_104c4c394;
    }
  }
LAB_104c4c394:
  __Unwind_Resume();
  lVar6 = *(long *)(pcVar2 + 0x30);
  if (lVar6 != 0) {
    lVar7 = *(long *)(pcVar2 + 0x38);
    lVar5 = lVar6;
    if (lVar6 != lVar7) {
      do {
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != lVar6);
      lVar5 = *(long *)(pcVar2 + 0x30);
    }
    *(long *)(pcVar2 + 0x38) = lVar6;
    __ZdlPv(lVar5);
  }
  if (pcVar2[0x2f] < '\0') {
    __ZdlPv(*(undefined8 *)(pcVar2 + 0x18));
    cVar1 = pcVar2[0x17];
  }
  else {
    cVar1 = pcVar2[0x17];
  }
  if (cVar1 < '\0') {
    __ZdlPv(*(undefined8 *)pcVar2);
    return pcVar2;
  }
  return pcVar2;
}



/* Entry: 104c4c39c; end: 104c4c447;  */

/* WARNING: Removing unreachable block (ram,0x000104c4c3e0) */

undefined8 * FUN_104c4c39c(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1[6];
  if (lVar3 != 0) {
    lVar4 = param_1[7];
    lVar2 = lVar3;
    if (lVar3 != lVar4) {
      do {
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != lVar3);
      lVar2 = param_1[6];
    }
    param_1[7] = lVar3;
    __ZdlPv(lVar2);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  if (cVar1 < '\0') {
    __ZdlPv(*param_1);
    return param_1;
  }
  return param_1;
}



/* Entry: 104c4c448; end: 104c4c693;  */

/* WARNING: Removing unreachable block (ram,0x000104c4c578) */

void FUN_104c4c448(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined4 uStack_40;
  
  pppuVar3 = &ppuStack_60;
  if ((*(byte *)(*(long *)(param_1 + 0xa8) + 0x58) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x50) = 1;
    iVar1 = *param_3;
    *(int *)(param_1 + 0x54) = iVar1;
    if (iVar1 == 7) {
      func_0x000100042ef0(param_1 + 0x58,
                          "Please login to MyLenses to activate Text to Speech. If you already logged-in, please logout from MyLenses (from the top menu: MyLenses -> Log Out) and login again"
                         );
    }
    else {
      if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__17promiseIvE9set_valueEv_1103468a8)(param_1 + 0x10);
        return;
      }
      if (*(char *)((long)param_3 + 0x1f) < '\0') {
        func_0x000100033dac(&ppuStack_60,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
        cVar2 = *(char *)(param_1 + 0x6f);
      }
      else {
        lStack_58 = *(long *)(param_3 + 4);
        ppuStack_60 = *(undefined ***)(param_3 + 2);
        lStack_50 = *(long *)(param_3 + 6);
        cVar2 = *(char *)(param_1 + 0x6f);
      }
      if (cVar2 < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x58));
      }
      *(long *)(param_1 + 0x60) = lStack_58;
      *(undefined ***)(param_1 + 0x58) = ppuStack_60;
      *(long *)(param_1 + 0x68) = lStack_50;
    }
    FUN_104c4bb14();
    lStack_50 = 0;
    lStack_48 = 0;
    ppuStack_60 = &PTR_FUN_1107eb688;
    lStack_58 = 0;
    uStack_40 = 0xd;
    FUN_104c37260(&ppuStack_60,6);
    (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,pppuVar3,1);
    ppuStack_60 = &PTR_DAT_1107eb6f0;
    if (lStack_58 != 0) {
      for (; lStack_58 != lStack_50; lStack_50 = lStack_50 + -0x18) {
      }
      lStack_50 = lStack_58;
      __ZdlPv(lStack_58);
    }
    if (*(long *)(param_1 + 0x18) == 0) {
      __ZNSt3__17promiseIvE9set_valueEv(param_1 + 0x10);
      return;
    }
    puVar4 = (undefined8 *)0x40;
    __Znwm();
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    *(undefined4 *)((long)puVar4 + 0x3c) = 1;
    FUN_104c4cf74(&ppuStack_60,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                  param_1 + 0x88);
    FUN_104c4c694(param_1 + 0x38,puVar4,&ppuStack_60);
    (**(code **)(param_1 + 0x18))
              (puVar4,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30));
    if (lStack_48 != 0) {
      __ZdlPv();
    }
    if (ppuStack_60 != (undefined **)0x0) {
      __ZdlPv();
    }
    __ZdlPv(puVar4);
  }
  return;
}



/* Entry: 104c4c694; end: 104c4c7cb;  */

void FUN_104c4c694(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  uint *puVar6;
  long *plVar7;
  long *plVar8;
  
  plVar2 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar2 = param_1;
  }
  *param_2 = (long)plVar2;
  uVar1 = (uint)param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (uint)*(byte *)((long)param_1 + 0x17);
  }
  bVar3 = *(byte *)(param_1 + 3);
  *(uint *)(param_2 + 1) = uVar1;
  *(uint *)((long)param_2 + 0xc) = (uint)bVar3;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)((long)param_1 + 0x1c);
  plVar2 = (long *)param_1[4];
  if (-1 < *(char *)((long)param_1 + 0x37)) {
    plVar2 = param_1 + 4;
  }
  param_2[3] = (long)plVar2;
  *(int *)((long)param_2 + 0x3c) = (int)param_1[0xd];
  plVar2 = (long *)param_1[8];
  lVar4 = *param_3;
  if ((long *)param_1[7] != plVar2) {
    plVar5 = (long *)(lVar4 + 8);
    plVar8 = (long *)param_1[7] + 1;
    do {
      plVar5[-1] = plVar8[-1];
      plVar7 = plVar8;
      if (*(char *)((long)plVar8 + 0x17) < '\0') {
        plVar7 = (long *)*plVar8;
      }
      *plVar5 = (long)plVar7;
      plVar7 = plVar8 + 3;
      plVar5 = plVar5 + 2;
      plVar8 = plVar8 + 4;
    } while (plVar7 != plVar2);
  }
  *(int *)(param_2 + 5) = (int)((ulong)(param_3[1] - lVar4) >> 4);
  param_2[4] = lVar4;
  plVar2 = (long *)param_1[0xb];
  lVar4 = param_3[3];
  if ((long *)param_1[10] != plVar2) {
    puVar6 = (uint *)(lVar4 + 0x10);
    plVar5 = (long *)param_1[10] + 1;
    do {
      *(long *)(puVar6 + -4) = plVar5[-1];
      plVar8 = plVar5;
      if (*(char *)((long)plVar5 + 0x17) < '\0') {
        plVar8 = (long *)*plVar5;
      }
      *(long **)(puVar6 + -2) = plVar8;
      *puVar6 = (uint)*(byte *)(plVar5 + 3);
      plVar8 = plVar5 + 4;
      puVar6 = puVar6 + 6;
      plVar5 = plVar5 + 5;
    } while (plVar8 != plVar2);
  }
  *(int *)(param_2 + 7) = (int)((ulong)(param_3[4] - lVar4) >> 3) * -0x55555555;
  param_2[6] = lVar4;
  return;
}



/* Entry: 104c4c7cc; end: 104c4c80b;  */

long * FUN_104c4c7cc(long *param_1)

{
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



/* Entry: 104c4c80c; end: 104c4c813;  */

/* WARNING: Removing unreachable block (ram,0x000104c4c578) */

void FUN_104c4c80c(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined4 uStack_40;
  
  pppuVar3 = &ppuStack_60;
  if ((*(byte *)(*(long *)(param_1 + 0xa0) + 0x58) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    iVar1 = *param_3;
    *(int *)(param_1 + 0x4c) = iVar1;
    if (iVar1 == 7) {
      func_0x000100042ef0(param_1 + 0x50,
                          "Please login to MyLenses to activate Text to Speech. If you already logged-in, please logout from MyLenses (from the top menu: MyLenses -> Log Out) and login again"
                         );
    }
    else {
      if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__17promiseIvE9set_valueEv_1103468a8)(param_1 + 8);
        return;
      }
      if (*(char *)((long)param_3 + 0x1f) < '\0') {
        func_0x000100033dac(&ppuStack_60,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
        cVar2 = *(char *)(param_1 + 0x67);
      }
      else {
        lStack_58 = *(long *)(param_3 + 4);
        ppuStack_60 = *(undefined ***)(param_3 + 2);
        lStack_50 = *(long *)(param_3 + 6);
        cVar2 = *(char *)(param_1 + 0x67);
      }
      if (cVar2 < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x50));
      }
      *(long *)(param_1 + 0x58) = lStack_58;
      *(undefined ***)(param_1 + 0x50) = ppuStack_60;
      *(long *)(param_1 + 0x60) = lStack_50;
    }
    FUN_104c4bb14();
    lStack_50 = 0;
    lStack_48 = 0;
    ppuStack_60 = &PTR_FUN_1107eb688;
    lStack_58 = 0;
    uStack_40 = 0xd;
    FUN_104c37260(&ppuStack_60,6);
    (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,pppuVar3,1);
    ppuStack_60 = &PTR_DAT_1107eb6f0;
    if (lStack_58 != 0) {
      for (; lStack_58 != lStack_50; lStack_50 = lStack_50 + -0x18) {
      }
      lStack_50 = lStack_58;
      __ZdlPv(lStack_58);
    }
    if (*(long *)(param_1 + 0x10) == 0) {
      __ZNSt3__17promiseIvE9set_valueEv(param_1 + 8);
      return;
    }
    puVar4 = (undefined8 *)0x40;
    __Znwm();
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    *(undefined4 *)((long)puVar4 + 0x3c) = 1;
    FUN_104c4cf74(&ppuStack_60,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                  param_1 + 0x80);
    FUN_104c4c694(param_1 + 0x30,puVar4,&ppuStack_60);
    (**(code **)(param_1 + 0x10))
              (puVar4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
    if (lStack_48 != 0) {
      __ZdlPv();
    }
    if (ppuStack_60 != (undefined **)0x0) {
      __ZdlPv();
    }
    __ZdlPv(puVar4);
  }
  return;
}



/* Entry: 104c4c814; end: 104c4ca73;  */

/* WARNING: Removing unreachable block (ram,0x000104c4ca0c) */

void FUN_104c4c814(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined **ppuStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((*(byte *)(*(long *)(param_1 + 0xa8) + 0x58) & 1) == 0) {
    puVar7 = (undefined8 *)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x50) = 0;
    puVar5 = (undefined8 *)(*(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc);
    if (puVar7 != puVar5) {
      bVar1 = *(byte *)((long)puVar5 + 0x17);
      if (*(char *)(param_1 + 0x4f) < '\0') {
        uVar6 = puVar5[1];
        puVar2 = (undefined8 *)*puVar5;
        if (-1 < (char)bVar1) {
          uVar6 = (ulong)bVar1;
          puVar2 = puVar5;
        }
        func_0x0001006aabfc(puVar7,puVar2,uVar6);
      }
      else if ((char)bVar1 < '\0') {
        func_0x00010014884c(puVar7,*puVar5,puVar5[1]);
      }
      else {
        uVar11 = puVar5[1];
        uVar10 = *puVar5;
        *(undefined8 *)(param_1 + 0x48) = puVar5[2];
        *(undefined8 *)(param_1 + 0x40) = uVar11;
        *puVar7 = uVar10;
      }
    }
    uVar6 = *(ulong *)(param_3 + 0x10);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_3 + 0x30);
    puVar8 = (ulong *)(param_3 + 0x10);
    if ((uVar6 & 1) != 0) {
      puVar8 = (ulong *)(uVar6 + 7);
    }
    if (*(int *)(param_3 + 0x18) != 0) {
      lVar9 = (long)*(int *)(param_3 + 0x18) << 3;
      do {
        ppuVar12 = *(undefined ***)(*puVar8 + 0x18);
        puVar7 = (undefined8 *)(*(ulong *)(*puVar8 + 0x10) & 0xfffffffffffffffc);
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          func_0x000100033dac(&uStack_60,*puVar7,puVar7[1]);
        }
        else {
          uStack_58 = puVar7[1];
          uStack_60 = *puVar7;
          lStack_50 = puVar7[2];
        }
        lStack_78 = uStack_58;
        lStack_80 = uStack_60;
        lStack_70 = lStack_50;
        puVar7 = *(undefined8 **)(param_1 + 0x78);
        ppuStack_88 = ppuVar12;
        if (puVar7 < *(undefined8 **)(param_1 + 0x80)) {
          *puVar7 = ppuVar12;
          puVar7[3] = lStack_50;
          puVar7[2] = uStack_58;
          puVar7[1] = uStack_60;
          *(undefined8 **)(param_1 + 0x78) = puVar7 + 4;
        }
        else {
          lVar3 = param_1 + 0x70;
          FUN_104c43638(lVar3,&ppuStack_88);
          *(long *)(param_1 + 0x78) = lVar3;
          if (lStack_70 < 0) {
            __ZdlPv(lStack_80);
          }
        }
        puVar8 = puVar8 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    FUN_104c4bb14();
    lStack_78 = 0;
    lStack_70 = 0;
    ppuStack_88 = &PTR_FUN_1107eb688;
    lStack_80 = 0;
    uStack_68 = 0xc;
    pppuVar4 = &ppuStack_88;
    FUN_104c37260(pppuVar4,6);
    (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,pppuVar4,1);
    ppuStack_88 = &PTR_DAT_1107eb6f0;
    if (lStack_80 != 0) {
      for (; lStack_80 != lStack_78; lStack_78 = lStack_78 + -0x18) {
      }
      lStack_78 = lStack_80;
      __ZdlPv(lStack_80);
    }
    __ZNSt3__17promiseIvE9set_valueEv(param_1 + 0x10);
  }
  return;
}



/* Entry: 104c4ca74; end: 104c4ca7b;  */

/* WARNING: Removing unreachable block (ram,0x000104c4ca0c) */

void FUN_104c4ca74(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined **ppuStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((*(byte *)(*(long *)(param_1 + 0xa0) + 0x58) & 1) == 0) {
    puVar7 = (undefined8 *)(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x48) = 0;
    puVar5 = (undefined8 *)(*(ulong *)(param_3 + 0x28) & 0xfffffffffffffffc);
    if (puVar7 != puVar5) {
      bVar1 = *(byte *)((long)puVar5 + 0x17);
      if (*(char *)(param_1 + 0x47) < '\0') {
        uVar6 = puVar5[1];
        puVar2 = (undefined8 *)*puVar5;
        if (-1 < (char)bVar1) {
          uVar6 = (ulong)bVar1;
          puVar2 = puVar5;
        }
        func_0x0001006aabfc(puVar7,puVar2,uVar6);
      }
      else if ((char)bVar1 < '\0') {
        func_0x00010014884c(puVar7,*puVar5,puVar5[1]);
      }
      else {
        uVar11 = puVar5[1];
        uVar10 = *puVar5;
        *(undefined8 *)(param_1 + 0x40) = puVar5[2];
        *(undefined8 *)(param_1 + 0x38) = uVar11;
        *puVar7 = uVar10;
      }
    }
    uVar6 = *(ulong *)(param_3 + 0x10);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_3 + 0x30);
    puVar8 = (ulong *)(param_3 + 0x10);
    if ((uVar6 & 1) != 0) {
      puVar8 = (ulong *)(uVar6 + 7);
    }
    if (*(int *)(param_3 + 0x18) != 0) {
      lVar9 = (long)*(int *)(param_3 + 0x18) << 3;
      do {
        ppuVar12 = *(undefined ***)(*puVar8 + 0x18);
        puVar7 = (undefined8 *)(*(ulong *)(*puVar8 + 0x10) & 0xfffffffffffffffc);
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          func_0x000100033dac(&uStack_60,*puVar7,puVar7[1]);
        }
        else {
          uStack_58 = puVar7[1];
          uStack_60 = *puVar7;
          lStack_50 = puVar7[2];
        }
        lStack_78 = uStack_58;
        lStack_80 = uStack_60;
        lStack_70 = lStack_50;
        puVar7 = *(undefined8 **)(param_1 + 0x70);
        ppuStack_88 = ppuVar12;
        if (puVar7 < *(undefined8 **)(param_1 + 0x78)) {
          *puVar7 = ppuVar12;
          puVar7[3] = lStack_50;
          puVar7[2] = uStack_58;
          puVar7[1] = uStack_60;
          *(undefined8 **)(param_1 + 0x70) = puVar7 + 4;
        }
        else {
          lVar3 = param_1 + 0x68;
          FUN_104c43638(lVar3,&ppuStack_88);
          *(long *)(param_1 + 0x70) = lVar3;
          if (lStack_70 < 0) {
            __ZdlPv(lStack_80);
          }
        }
        puVar8 = puVar8 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    FUN_104c4bb14();
    lStack_78 = 0;
    lStack_70 = 0;
    ppuStack_88 = &PTR_FUN_1107eb688;
    lStack_80 = 0;
    uStack_68 = 0xc;
    pppuVar4 = &ppuStack_88;
    FUN_104c37260(pppuVar4,6);
    (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,pppuVar4,1);
    ppuStack_88 = &PTR_DAT_1107eb6f0;
    if (lStack_80 != 0) {
      for (; lStack_80 != lStack_78; lStack_78 = lStack_78 + -0x18) {
      }
      lStack_78 = lStack_80;
      __ZdlPv(lStack_80);
    }
    __ZNSt3__17promiseIvE9set_valueEv(param_1 + 8);
  }
  return;
}



/* Entry: 104c4ca7c; end: 104c4ce63;  */

/* WARNING: Removing unreachable block (ram,0x000104c4cd58) */

void FUN_104c4ca7c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined ***pppuVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  pppuVar6 = &ppuStack_a0;
  if ((*(byte *)(*(long *)(param_1 + 0xa8) + 0x58) & 1) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x50) = 0;
    puVar7 = (undefined8 *)(*(ulong *)(param_3 + 0x40) & 0xfffffffffffffffc);
    if (puVar1 != puVar7) {
      bVar2 = *(byte *)((long)puVar7 + 0x17);
      if (*(char *)(param_1 + 0x4f) < '\0') {
        uVar8 = puVar7[1];
        puVar4 = (undefined8 *)*puVar7;
        if (-1 < (char)bVar2) {
          uVar8 = (ulong)bVar2;
          puVar4 = puVar7;
        }
        func_0x0001006aabfc(puVar1,puVar4,uVar8);
      }
      else if ((char)bVar2 < '\0') {
        func_0x00010014884c(puVar1,*puVar7,puVar7[1]);
      }
      else {
        uVar12 = puVar7[1];
        uVar11 = *puVar7;
        *(undefined8 *)(param_1 + 0x48) = puVar7[2];
        *(undefined8 *)(param_1 + 0x40) = uVar12;
        *puVar1 = uVar11;
      }
    }
    uVar8 = *(ulong *)(param_3 + 0x10);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_3 + 0x48);
    puVar9 = (ulong *)(param_3 + 0x10);
    if ((uVar8 & 1) != 0) {
      puVar9 = (ulong *)(uVar8 + 7);
    }
    if (*(int *)(param_3 + 0x18) != 0) {
      lVar10 = (long)*(int *)(param_3 + 0x18) << 3;
      do {
        ppuVar13 = *(undefined ***)(*puVar9 + 0x18);
        puVar7 = (undefined8 *)(*(ulong *)(*puVar9 + 0x10) & 0xfffffffffffffffc);
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          func_0x000100033dac(&uStack_70,*puVar7,puVar7[1]);
        }
        else {
          uStack_68 = puVar7[1];
          uStack_70 = *puVar7;
          lStack_60 = puVar7[2];
        }
        lStack_90 = uStack_68;
        lStack_98 = uStack_70;
        lStack_88 = lStack_60;
        puVar7 = *(undefined8 **)(param_1 + 0x78);
        ppuStack_a0 = ppuVar13;
        if (puVar7 < *(undefined8 **)(param_1 + 0x80)) {
          *puVar7 = ppuVar13;
          puVar7[3] = lStack_60;
          puVar7[2] = uStack_68;
          puVar7[1] = uStack_70;
          *(undefined8 **)(param_1 + 0x78) = puVar7 + 4;
        }
        else {
          lVar5 = param_1 + 0x70;
          FUN_104c43638(lVar5,&ppuStack_a0);
          *(long *)(param_1 + 0x78) = lVar5;
          if (lStack_88 < 0) {
            __ZdlPv(lStack_98);
          }
        }
        puVar9 = puVar9 + 1;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    uVar8 = *(ulong *)(param_3 + 0x28);
    puVar9 = (ulong *)(param_3 + 0x28);
    if ((uVar8 & 1) != 0) {
      puVar9 = (ulong *)(uVar8 + 7);
    }
    if (*(int *)(param_3 + 0x30) != 0) {
      lVar10 = (long)*(int *)(param_3 + 0x30) << 3;
      do {
        uVar8 = *puVar9;
        ppuVar13 = *(undefined ***)(uVar8 + 0x18);
        puVar7 = (undefined8 *)(*(ulong *)(uVar8 + 0x10) & 0xfffffffffffffffc);
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          func_0x000100033dac(&uStack_70,*puVar7,puVar7[1]);
        }
        else {
          uStack_68 = puVar7[1];
          uStack_70 = *puVar7;
          lStack_60 = puVar7[2];
        }
        uVar3 = *(undefined1 *)(uVar8 + 0x20);
        lStack_90 = uStack_68;
        lStack_98 = uStack_70;
        lStack_88 = lStack_60;
        uStack_80 = CONCAT31(uStack_80._1_3_,uVar3);
        puVar7 = *(undefined8 **)(param_1 + 0x90);
        ppuStack_a0 = ppuVar13;
        if (puVar7 < *(undefined8 **)(param_1 + 0x98)) {
          *puVar7 = ppuVar13;
          puVar7[3] = lStack_60;
          puVar7[2] = uStack_68;
          puVar7[1] = uStack_70;
          lStack_90 = 0;
          lStack_88 = 0;
          lStack_98 = 0;
          *(undefined1 *)(puVar7 + 4) = uVar3;
          *(undefined8 **)(param_1 + 0x90) = puVar7 + 5;
        }
        else {
          lVar5 = param_1 + 0x88;
          FUN_104c4d0e4(lVar5,&ppuStack_a0);
          *(long *)(param_1 + 0x90) = lVar5;
          if (lStack_88 < 0) {
            __ZdlPv(lStack_98);
          }
        }
        puVar9 = puVar9 + 1;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    FUN_104c4bb14();
    lStack_90 = 0;
    lStack_88 = 0;
    ppuStack_a0 = &PTR_FUN_1107eb688;
    lStack_98 = 0;
    uStack_80 = 0xc;
    FUN_104c37260(&ppuStack_a0,6);
    (**(code **)(*plRam0000000113817ca0 + 8))(plRam0000000113817ca0,pppuVar6,1);
    ppuStack_a0 = &PTR_DAT_1107eb6f0;
    if (lStack_98 != 0) {
      for (; lStack_98 != lStack_90; lStack_90 = lStack_90 + -0x18) {
      }
      lStack_90 = lStack_98;
      __ZdlPv(lStack_98);
    }
    if (*(long *)(param_1 + 0x18) == 0) {
      __ZNSt3__17promiseIvE9set_valueEv(param_1 + 0x10);
    }
    else {
      puVar7 = (undefined8 *)0x40;
      __Znwm();
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[7] = 0;
      puVar7[6] = 0;
      *(undefined4 *)((long)puVar7 + 0x3c) = 1;
      FUN_104c4cf74(&ppuStack_a0,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                    param_1 + 0x88);
      FUN_104c4c694(puVar1,puVar7,&ppuStack_a0);
      (**(code **)(param_1 + 0x18))
                (puVar7,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)(param_1 + 0x30));
      if (lStack_88 != 0) {
        __ZdlPv();
      }
      if (ppuStack_a0 != (undefined **)0x0) {
        __ZdlPv();
      }
      __ZdlPv(puVar7);
    }
  }
  return;
}



/* Entry: 104c4ce64; end: 104c4cedb;  */

undefined8 * FUN_104c4ce64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ebfa8;
  param_1[1] = &PTR_FUN_1107ec000;
  func_0x000104c35a90(param_1 + 7);
  __ZNSt3__17promiseIvED1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 104c4cedc; end: 104c4cee7;  */

void FUN_104c4cedc(void)

{
  return;
}



/* Entry: 104c4cee8; end: 104c4cf67;  */

void FUN_104c4cee8(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_1107ebfa8;
  *param_1 = &PTR_FUN_1107ec000;
  func_0x000104c35a90(param_1 + 6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__17promiseIvED1Ev_1103468b8)(param_1 + 1);
  return;
}



/* Entry: 104c4cf68; end: 104c4cf73;  */

void FUN_104c4cf68(void)

{
  return;
}



/* Entry: 104c4cf74; end: 104c4d0bb;  */

long * FUN_104c4cf74(long *param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_3 = param_3 - param_2;
  if (param_3 != 0) {
    if ((ulong)(param_3 >> 5) >> 0x3c != 0) {
      func_0x000104c4d0bc();
      goto LAB_104c4d084;
    }
    lVar3 = param_3 >> 1;
    __Znwm();
    *param_1 = lVar3;
    param_1[2] = lVar3 + (param_3 >> 5) * 0x10;
    _bzero();
    param_1[1] = lVar3 + (param_3 >> 1);
  }
  lVar3 = *param_4;
  lVar2 = param_4[1];
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (lVar2 - lVar3 != 0) {
    lVar3 = lVar2 - lVar3 >> 3;
    if (0xaaaaaaaaaaaaaaa < (ulong)(lVar3 * -0x3333333333333333)) {
      func_0x000104c4d0d0();
LAB_104c4d084:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104c4d088);
      (*pcVar1)();
    }
    lVar2 = lVar3 * 0x3333333333333338;
    __Znwm();
    param_1[3] = lVar2;
    param_1[5] = lVar2 + lVar3 * 0x3333333333333338;
    _bzero();
    param_1[4] = lVar2 + ((lVar3 * 0x3333333333333338 - 0x18U) / 0x18) * 0x18 + 0x18;
  }
  return param_1;
}



/* Entry: 104c4d0bc; end: 104c4d0e3;  */

long * FUN_104c4d0bc(undefined8 param_1,undefined8 *param_2,long *param_3,long *param_4,
                    undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  long lStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  undefined1 auStack_c0 [8];
  long *plStack_b8;
  
  FUN_104bd47e8(&DAT_10f62a4d8);
  plVar8 = (long *)&DAT_10f62a4d8;
  FUN_104bd47e8();
  lVar15 = plVar8[1] - *plVar8;
  uVar12 = (lVar15 >> 3) * -0x3333333333333333 + 1;
  if (uVar12 < 0x666666666666667) {
    lVar10 = plVar8[2] - *plVar8 >> 3;
    uVar13 = lVar10 * -0x6666666666666666;
    if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
      uVar13 = uVar12;
    }
    if (0x333333333333332 < (ulong)(lVar10 * -0x3333333333333333)) {
      uVar13 = 0x666666666666666;
    }
    if (uVar13 < 0x666666666666667) {
      lVar10 = uVar13 * 0x28;
      __Znwm();
      puVar2 = (undefined8 *)(lVar10 + lVar15);
      *puVar2 = *param_2;
      uVar16 = param_2[1];
      puVar2[2] = param_2[2];
      puVar2[1] = uVar16;
      puVar2[3] = param_2[3];
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_2 + 4);
      puVar14 = (undefined8 *)*plVar8;
      puVar4 = (undefined8 *)plVar8[1];
      puVar3 = (undefined8 *)((long)puVar2 + ((long)puVar14 - (long)puVar4));
      puVar9 = puVar3;
      puVar11 = puVar14;
      if ((long)puVar14 - (long)puVar4 != 0) {
        do {
          *puVar9 = *puVar11;
          uVar17 = puVar11[2];
          uVar16 = puVar11[1];
          puVar9[3] = puVar11[3];
          puVar9[2] = uVar17;
          puVar9[1] = uVar16;
          puVar11[2] = 0;
          puVar11[3] = 0;
          puVar11[1] = 0;
          *(undefined1 *)(puVar9 + 4) = *(undefined1 *)(puVar11 + 4);
          puVar11 = puVar11 + 5;
          puVar9 = puVar9 + 5;
        } while (puVar11 != puVar4);
        do {
          if (*(char *)((long)puVar14 + 0x1f) < '\0') {
            __ZdlPv(puVar14[1]);
          }
          puVar14 = puVar14 + 5;
        } while (puVar14 != puVar4);
        puVar14 = (undefined8 *)*plVar8;
      }
      *plVar8 = (long)puVar3;
      plVar8[1] = (long)(puVar2 + 5);
      plVar8[2] = lVar10 + uVar13 * 0x28;
      if (puVar14 != (undefined8 *)0x0) {
        __ZdlPv(puVar14);
      }
      return puVar2 + 5;
    }
  }
  else {
    FUN_104c3cdb0();
  }
  FUN_104bd35f4();
  *plVar8 = 0;
  uStack_110 = 2;
  uStack_108 = 0;
  lStack_100 = 0;
  FUN_104c4f3d4(plVar8 + 1,&uStack_110);
  plVar8[0x11] = 0;
  plVar8[0x10] = (long)(plVar8 + 0x11);
  plVar8[0x12] = 0;
  *(undefined4 *)(plVar8 + 0x13) = 0;
  *(undefined1 *)((long)plVar8 + 0x9c) = 0;
  __ZNSt3__115recursive_mutexC1Ev(plVar8 + 0x14);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000100033dac(plVar8 + 0x1c,*param_3,param_3[1]);
  }
  else {
    lVar10 = param_3[1];
    lVar15 = *param_3;
    plVar8[0x1e] = param_3[2];
    plVar8[0x1d] = lVar10;
    plVar8[0x1c] = lVar15;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (plVar8 + 0x1f,"Bearer ",param_3);
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000100033dac(plVar8 + 0x22,*param_4,param_4[1]);
  }
  else {
    lVar10 = param_4[1];
    lVar15 = *param_4;
    plVar8[0x24] = param_4[2];
    plVar8[0x23] = lVar10;
    plVar8[0x22] = lVar15;
  }
  func_0x00010028b0c8(plVar8 + 0x25,param_5);
  func_0x00010002d4d8(&uStack_110,PTR_DAT_11330a920);
  func_0x00010002d4d8(auStack_f8,"");
  func_0x00010002d4d8(auStack_e0,"");
  func_0x00010046d324(auStack_c0,&uStack_110);
  if (cStack_c9 < '\0') {
    __ZdlPv(auStack_e0[0]);
  }
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  if (lStack_100 < 0) {
    __ZdlPv(uStack_110);
  }
  FUN_104ae386c(&uStack_110,param_2,auStack_c0);
  plVar7 = (long *)CONCAT44(uStack_104,uStack_108);
  uStack_128 = CONCAT44(uStack_104,uStack_108);
  uStack_130 = uStack_110;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uStack_138 = 0;
  func_0x00010ae90898(&uStack_118,&uStack_130,&uStack_138);
  func_0x000104c4fd0c(plVar8,uStack_118);
  uStack_118 = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar15 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = (long *)CONCAT44(uStack_104,uStack_108);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar15 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (plStack_b8 != (long *)0x0) {
    plVar7 = plStack_b8 + 1;
    do {
      lVar15 = *plVar7;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  return plVar8;
}



/* Entry: 104c4d0e4; end: 104c4d24f;  */

long * FUN_104c4d0e4(long *param_1,undefined8 *param_2,long *param_3,long *param_4,
                    undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  
  lVar14 = param_1[1] - *param_1;
  uVar11 = (lVar14 >> 3) * -0x3333333333333333 + 1;
  if (uVar11 < 0x666666666666667) {
    lVar9 = param_1[2] - *param_1 >> 3;
    uVar12 = lVar9 * -0x6666666666666666;
    if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
      uVar12 = uVar11;
    }
    if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
      uVar12 = 0x666666666666666;
    }
    if (uVar12 < 0x666666666666667) {
      lVar9 = uVar12 * 0x28;
      __Znwm();
      puVar2 = (undefined8 *)(lVar9 + lVar14);
      *puVar2 = *param_2;
      uVar15 = param_2[1];
      puVar2[2] = param_2[2];
      puVar2[1] = uVar15;
      puVar2[3] = param_2[3];
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_2 + 4);
      puVar13 = (undefined8 *)*param_1;
      puVar4 = (undefined8 *)param_1[1];
      puVar3 = (undefined8 *)((long)puVar2 + ((long)puVar13 - (long)puVar4));
      puVar8 = puVar3;
      puVar10 = puVar13;
      if ((long)puVar13 - (long)puVar4 != 0) {
        do {
          *puVar8 = *puVar10;
          uVar16 = puVar10[2];
          uVar15 = puVar10[1];
          puVar8[3] = puVar10[3];
          puVar8[2] = uVar16;
          puVar8[1] = uVar15;
          puVar10[2] = 0;
          puVar10[3] = 0;
          puVar10[1] = 0;
          *(undefined1 *)(puVar8 + 4) = *(undefined1 *)(puVar10 + 4);
          puVar10 = puVar10 + 5;
          puVar8 = puVar8 + 5;
        } while (puVar10 != puVar4);
        do {
          if (*(char *)((long)puVar13 + 0x1f) < '\0') {
            __ZdlPv(puVar13[1]);
          }
          puVar13 = puVar13 + 5;
        } while (puVar13 != puVar4);
        puVar13 = (undefined8 *)*param_1;
      }
      *param_1 = (long)puVar3;
      param_1[1] = (long)(puVar2 + 5);
      param_1[2] = lVar9 + uVar12 * 0x28;
      if (puVar13 != (undefined8 *)0x0) {
        __ZdlPv(puVar13);
      }
      return puVar2 + 5;
    }
  }
  else {
    FUN_104c3cdb0();
  }
  FUN_104bd35f4();
  *param_1 = 0;
  uStack_f0 = 2;
  uStack_e8 = 0;
  lStack_e0 = 0;
  FUN_104c4f3d4(param_1 + 1,&uStack_f0);
  param_1[0x11] = 0;
  param_1[0x10] = (long)(param_1 + 0x11);
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 0x14);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000100033dac(param_1 + 0x1c,*param_3,param_3[1]);
  }
  else {
    lVar9 = param_3[1];
    lVar14 = *param_3;
    param_1[0x1e] = param_3[2];
    param_1[0x1d] = lVar9;
    param_1[0x1c] = lVar14;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (param_1 + 0x1f,"Bearer ",param_3);
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000100033dac(param_1 + 0x22,*param_4,param_4[1]);
  }
  else {
    lVar9 = param_4[1];
    lVar14 = *param_4;
    param_1[0x24] = param_4[2];
    param_1[0x23] = lVar9;
    param_1[0x22] = lVar14;
  }
  func_0x00010028b0c8(param_1 + 0x25,param_5);
  func_0x00010002d4d8(&uStack_f0,PTR_DAT_11330a920);
  func_0x00010002d4d8(auStack_d8,"");
  func_0x00010002d4d8(auStack_c0,"");
  func_0x00010046d324(auStack_a0,&uStack_f0);
  if (cStack_a9 < '\0') {
    __ZdlPv(auStack_c0[0]);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  FUN_104ae386c(&uStack_f0,param_2,auStack_a0);
  plVar7 = (long *)CONCAT44(uStack_e4,uStack_e8);
  uStack_108 = CONCAT44(uStack_e4,uStack_e8);
  uStack_110 = uStack_f0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uStack_118 = 0;
  func_0x00010ae90898(&uStack_f8,&uStack_110,&uStack_118);
  func_0x000104c4fd0c(param_1,uStack_f8);
  uStack_f8 = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar14 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = (long *)CONCAT44(uStack_e4,uStack_e8);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar14 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (plStack_98 != (long *)0x0) {
    plVar7 = plStack_98 + 1;
    do {
      lVar14 = *plVar7;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  return param_1;
}



/* Entry: 104c4d250; end: 104c4d5cf;  */

undefined8 *
FUN_104c4d250(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long lStack_a0;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  *param_1 = 0;
  uStack_b0 = 2;
  uStack_a8 = 0;
  lStack_a0 = 0;
  FUN_104c4f3d4(param_1 + 1,&uStack_b0);
  param_1[0x11] = 0;
  param_1[0x10] = param_1 + 0x11;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 0x14);
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000100033dac(param_1 + 0x1c,*param_3,param_3[1]);
  }
  else {
    uVar7 = param_3[1];
    uVar6 = *param_3;
    param_1[0x1e] = param_3[2];
    param_1[0x1d] = uVar7;
    param_1[0x1c] = uVar6;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (param_1 + 0x1f,"Bearer ",param_3);
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000100033dac(param_1 + 0x22,*param_4,param_4[1]);
  }
  else {
    uVar7 = param_4[1];
    uVar6 = *param_4;
    param_1[0x24] = param_4[2];
    param_1[0x23] = uVar7;
    param_1[0x22] = uVar6;
  }
  func_0x00010028b0c8(param_1 + 0x25,param_5);
  func_0x00010002d4d8(&uStack_b0,PTR_DAT_11330a920);
  func_0x00010002d4d8(auStack_98,"");
  func_0x00010002d4d8(auStack_80,"");
  func_0x00010046d324(auStack_60,&uStack_b0);
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  if (cStack_81 < '\0') {
    __ZdlPv(auStack_98[0]);
  }
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  FUN_104ae386c(&uStack_b0,param_2,auStack_60);
  plVar4 = (long *)CONCAT44(uStack_a4,uStack_a8);
  uStack_c8 = CONCAT44(uStack_a4,uStack_a8);
  uStack_d0 = uStack_b0;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_d8 = 0;
  func_0x00010ae90898(&uStack_b8,&uStack_d0,&uStack_d8);
  func_0x000104c4fd0c(param_1,uStack_b8);
  uStack_b8 = 0;
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
  plVar4 = (long *)CONCAT44(uStack_a4,uStack_a8);
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
  if (plStack_58 != (long *)0x0) {
    plVar4 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  return param_1;
}



/* Entry: 104c4d5d0; end: 104c4d61f;  */

undefined8 * FUN_104c4d5d0(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 104c4d620; end: 104c4dc97;  */

undefined ***** FUN_104c4d620(uint *param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined ****ppppuVar8;
  undefined *****pppppuVar9;
  uint **ppuVar10;
  long *plVar11;
  undefined *****pppppuVar12;
  undefined *****pppppuVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined ****ppppuVar17;
  long lVar18;
  undefined8 uVar19;
  uint *puVar20;
  long *unaff_x25;
  undefined8 uVar21;
  long *unaff_x26;
  long *plVar22;
  undefined8 *puVar23;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined ****ppppuStack_160;
  undefined ****ppppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  uint *puStack_140;
  uint *puStack_130;
  uint *puStack_128;
  undefined ****ppppuStack_120;
  undefined ****ppppuStack_118;
  undefined ****ppppuStack_110;
  undefined ****ppppuStack_108;
  uint *puStack_100;
  long alStack_f8 [3];
  long *plStack_e0;
  undefined ****ppppuStack_d0;
  undefined ****ppppuStack_c8;
  uint *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  long *plStack_a0;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = param_1;
  FUN_104c4dc98();
  pppppuVar9 = (undefined *****)0x30;
  __Znwm();
  pppppuVar13 = pppppuVar9 + 1;
  *pppppuVar13 = (undefined ****)0x0;
  pppppuVar9[2] = (undefined ****)0x0;
  ppppuStack_120 = (undefined ****)(pppppuVar9 + 3);
  *ppppuStack_120 = (undefined ***)&PTR_DAT_110c78188;
  *pppppuVar9 = (undefined ****)&PTR_FUN_1107ec088;
  pppppuVar9[4] = (undefined ****)0x0;
  *(undefined4 *)(pppppuVar9 + 5) = 0;
  ppppuStack_118 = (undefined ****)pppppuVar9;
  if (*(long *)(param_3 + 0x18) == 0) goto LAB_104c4d890;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
    if (bVar7) {
      *pppppuVar13 = (undefined ****)((long)*pppppuVar13 + 1);
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  ppppuStack_110 = ppppuStack_120;
  ppppuStack_108 = (undefined ****)pppppuVar9;
  puStack_100 = puVar20;
  func_0x000100051010(alStack_f8,param_3);
  ppppuStack_c8 = ppppuStack_108;
  ppppuStack_d0 = ppppuStack_110;
  ppppuStack_110 = (undefined ****)0x0;
  ppppuStack_108 = (undefined ****)0x0;
  puStack_c0 = puStack_100;
  plStack_a0 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    if (plStack_e0 == alStack_f8) {
      plStack_a0 = &lStack_b8;
      (**(code **)(*plStack_e0 + 0x18))(plStack_e0,&lStack_b8);
    }
    else {
      plVar22 = plStack_e0;
      (**(code **)(*plStack_e0 + 0x10))();
      plStack_a0 = plVar22;
    }
  }
  unaff_x25 = (long *)0x40;
  __Znwm();
  unaff_x26 = unaff_x25 + 1;
  unaff_x25[2] = (long)ppppuStack_c8;
  *unaff_x26 = (long)ppppuStack_d0;
  *unaff_x25 = (long)&PTR_DAT_1107ec0d8;
  ppppuStack_d0 = (undefined ****)0x0;
  ppppuStack_c8 = (undefined ****)0x0;
  unaff_x25[3] = (long)puStack_c0;
  plVar22 = plStack_a0;
  if (plStack_a0 == (long *)0x0) {
LAB_104c4d778:
    unaff_x25[7] = (long)plVar22;
  }
  else {
    if (plStack_a0 != &lStack_b8) {
      (**(code **)(*plStack_a0 + 0x10))();
      goto LAB_104c4d778;
    }
    unaff_x25[7] = (long)(unaff_x25 + 4);
    (**(code **)(*plStack_a0 + 0x18))();
  }
  plStack_78 = unaff_x25;
  FUN_104c50218(alStack_90,puVar20 + 0x80);
  if (plStack_78 == alStack_90) {
    lVar16 = 0x20;
LAB_104c4d7c4:
    (**(code **)(*plStack_78 + lVar16))();
  }
  else if (plStack_78 != (long *)0x0) {
    lVar16 = 0x28;
    goto LAB_104c4d7c4;
  }
  if (plStack_a0 == &lStack_b8) {
    lVar16 = 0x20;
LAB_104c4d7ec:
    (**(code **)(*plStack_a0 + lVar16))();
  }
  else if (plStack_a0 != (long *)0x0) {
    lVar16 = 0x28;
    goto LAB_104c4d7ec;
  }
  ppppuVar8 = ppppuStack_c8;
  if (ppppuStack_c8 != (undefined ****)0x0) {
    plVar22 = (long *)(ppppuStack_c8 + 1);
    do {
      lVar16 = *plVar22;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar7) {
        *plVar22 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 == 0) {
      (**(code **)((long)*ppppuStack_c8 + 0x10))(ppppuStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar8);
    }
  }
  if (plStack_e0 == alStack_f8) {
    lVar16 = 0x20;
LAB_104c4d84c:
    (**(code **)(*plStack_e0 + lVar16))();
  }
  else if (plStack_e0 != (long *)0x0) {
    lVar16 = 0x28;
    goto LAB_104c4d84c;
  }
  ppppuVar8 = ppppuStack_108;
  if (ppppuStack_108 != (undefined ****)0x0) {
    plVar22 = (long *)(ppppuStack_108 + 1);
    do {
      lVar16 = *plVar22;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar7) {
        *plVar22 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 == 0) {
      (**(code **)((long)*ppppuStack_108 + 0x10))(ppppuStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar8);
    }
  }
LAB_104c4d890:
  puStack_130 = param_1;
  puStack_128 = puVar20;
  func_0x000104c4de38(puVar20 + 0x88,param_4);
  ppppuStack_d0 = (undefined ****)&PTR_DAT_110c784f8;
  ppppuStack_c8 = (undefined ****)0x0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  puStack_c0 = (uint *)0x0;
  uStack_a8 = 0;
  if (0 < *(int *)(param_2 + 1)) {
    lVar16 = 0;
    lVar18 = 0x38;
    do {
      plVar22 = (long *)*param_2;
      ppuVar10 = &puStack_c0;
      func_0x000100627dec(ppuVar10,0x104c4f7e0);
      puVar20 = ppuVar10[1];
      if (((ulong)puVar20 & 1) != 0) {
        puVar20 = *(uint **)((ulong)puVar20 & 0xfffffffffffffffe);
      }
      uVar21 = *(undefined8 *)((long)plVar22 + lVar18 + -0x38);
      uVar19 = uVar21;
      _strlen(uVar21);
      func_0x00010b4bf088(ppuVar10 + 3,uVar21,uVar19,puVar20);
      puVar20 = ppuVar10[1];
      if (((ulong)puVar20 & 1) != 0) {
        puVar20 = *(uint **)((ulong)puVar20 & 0xfffffffffffffffe);
      }
      unaff_x25 = *(long **)((long)plVar22 + lVar18 + -0x30);
      plVar11 = unaff_x25;
      _strlen(unaff_x25);
      func_0x00010b4bf088(ppuVar10 + 4,unaff_x25,plVar11,puVar20);
      puVar20 = ppuVar10[1];
      if (((ulong)puVar20 & 1) != 0) {
        puVar20 = *(uint **)((ulong)puVar20 & 0xfffffffffffffffe);
      }
      func_0x00010b4bf088(ppuVar10 + 5,*(undefined8 *)((long)plVar22 + lVar18 + -0x28),
                          *(undefined8 *)((long)plVar22 + lVar18 + -0x20),puVar20);
      iVar2 = *(int *)((long)plVar22 + lVar18 + -0x18);
      if (2 < iVar2 - 1U) {
        iVar2 = 0;
      }
      *(int *)(ppuVar10 + 8) = iVar2;
      iVar2 = *(int *)((long)plVar22 + lVar18 + -0x14);
      if (2 < iVar2 - 1U) {
        iVar2 = 0;
      }
      *(int *)((long)ppuVar10 + 0x44) = iVar2;
      puVar23 = *(undefined8 **)((long)plVar22 + lVar18 + -8);
      unaff_x26 = plVar22;
      if (puVar23 != (undefined8 *)0x0) {
        *(uint *)(ppuVar10 + 9) = (uint)(*(int *)((long)plVar22 + lVar18) == 1);
        *(uint *)(ppuVar10 + 2) = *(uint *)(ppuVar10 + 2) | 2;
        puVar20 = ppuVar10[7];
        if (puVar20 == (uint *)0x0) {
          puVar20 = ppuVar10[1];
          if (((ulong)puVar20 & 1) != 0) {
            puVar20 = *(uint **)((ulong)puVar20 & 0xfffffffffffffffe);
          }
          func_0x000104c4f840();
          ppuVar10[7] = puVar20;
        }
        unaff_x25 = (long *)*puVar23;
        if (unaff_x25 != (long *)0x0) {
          unaff_x26 = *(long **)(puVar20 + 2);
          if (((ulong)unaff_x26 & 1) != 0) {
            unaff_x26 = *(long **)((ulong)unaff_x26 & 0xfffffffffffffffe);
          }
          plVar11 = unaff_x25;
          _strlen(unaff_x25);
          func_0x00010b4bf088(puVar20 + 4,unaff_x25,plVar11,unaff_x26);
        }
        if ((puVar23[1] != 0) && (puVar23[2] != 0)) {
          uVar14 = *(ulong *)(puVar20 + 2);
          if ((uVar14 & 1) != 0) {
            uVar14 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
          }
          func_0x00010b4bf088(puVar20 + 6,puVar23[1],puVar23[2],uVar14);
        }
        if ((puVar23[3] != 0) && (puVar23[4] != 0)) {
          uVar14 = *(ulong *)(puVar20 + 2);
          if ((uVar14 & 1) != 0) {
            uVar14 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
          }
          func_0x00010b4bf088(puVar20 + 8,puVar23[3],puVar23[4],uVar14);
        }
        *(undefined1 *)(puVar20 + 10) = 0;
      }
      if (*(long *)((long)plVar22 + lVar18 + -0x10) != 0) {
        *(uint *)(ppuVar10 + 2) = *(uint *)(ppuVar10 + 2) | 1;
        puVar20 = ppuVar10[6];
        if (puVar20 == (uint *)0x0) {
          puVar20 = ppuVar10[1];
          if (((ulong)puVar20 & 1) != 0) {
            puVar20 = *(uint **)((ulong)puVar20 & 0xfffffffffffffffe);
          }
          func_0x000104c4f89c();
          ppuVar10[6] = puVar20;
        }
        uVar19 = *(undefined8 *)((long)plVar22 + lVar18 + -0x10);
        unaff_x25 = *(long **)(puVar20 + 2);
        if (((ulong)unaff_x25 & 1) != 0) {
          unaff_x25 = *(long **)((ulong)unaff_x25 & 0xfffffffffffffffe);
        }
        uVar21 = uVar19;
        _strlen(uVar19);
        func_0x00010b4bf088(puVar20 + 4,uVar19,uVar21,unaff_x25);
      }
      lVar16 = lVar16 + 1;
      lVar18 = lVar18 + 0x40;
    } while (lVar16 < *(int *)(param_2 + 1));
  }
  puVar20 = puStack_128;
  lVar16 = *(long *)(*(long *)puStack_130 + 8);
  func_0x00010ae90d28(lVar16,puStack_130 + 2,*(long *)puStack_130 + 0x68,puStack_128 + 2,
                      &ppppuStack_d0);
  *(undefined1 *)(lVar16 + 0x40) = 1;
  lVar18 = *(long *)(lVar16 + 8);
  lVar15 = *(long *)(lVar16 + 0x48);
  bVar3 = *(byte *)(lVar18 + 1);
  bVar4 = *(byte *)(lVar18 + 2);
  bVar5 = *(byte *)(lVar18 + 0x150);
  *(undefined1 *)(lVar15 + 0x20) = 0;
  *(undefined1 *)(lVar15 + 1) = 1;
  *(uint *)(lVar15 + 4) = (uint)bVar3 << 5 | (uint)bVar4 << 7 | (uint)bVar5 << 8;
  *(long *)(lVar15 + 0x10) = lVar18 + 0xb8;
  puStack_140 = puVar20;
  func_0x000100612c04(lVar16 + 0x78,lVar18,lVar16 + 0x10,*(undefined1 *)(lVar16 + 0x41),lVar15,
                      lVar16 + 0x50,ppppuStack_120,puVar20 + 0x72);
  uVar1 = *puVar20;
  pppppuVar9 = &ppppuStack_d0;
  func_0x00010ae0c348();
  ppppuVar8 = ppppuStack_118;
  if ((undefined *****)ppppuStack_118 != (undefined *****)0x0) {
    pppppuVar13 = (undefined *****)(ppppuStack_118 + 1);
    do {
      ppppuVar17 = *pppppuVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
      if (bVar7) {
        *pppppuVar13 = (undefined ****)((long)ppppuVar17 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppppuVar17 == (undefined ****)0x0) {
      (*(code *)(*ppppuStack_118)[2])(ppppuStack_118);
      pppppuVar9 = (undefined *****)ppppuVar8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (undefined *****)(ulong)uVar1;
  }
  ___stack_chk_fail();
  FUN_104c4fe94(unaff_x26);
  __ZdlPv(unaff_x25);
  func_0x000104c4ddec(&ppppuStack_d0);
  func_0x000104c4ddec(&ppppuStack_110);
  FUN_104c4fe94(&ppppuStack_120);
  pppppuVar12 = pppppuVar9;
  __Unwind_Resume(pppppuVar9);
  ppppuStack_160 = ppppuVar8;
  pcStack_148 = FUN_104c4dc98;
  pppppuVar13 = pppppuVar12 + 1;
  ppppuStack_158 = (undefined ****)pppppuVar9;
  puStack_150 = &stack0xfffffffffffffff0;
  FUN_104c61c28(pppppuVar13);
  func_0x00010002d4d8(&uStack_190,"x-snap-games-lens-id");
  func_0x0001004b5d48(pppppuVar13 + 1,&uStack_190,pppppuVar12 + 0x22);
  if (uStack_180 < 0) {
    __ZdlPv(uStack_190);
  }
  func_0x00010002d4d8(&uStack_190,"origin");
  func_0x00010002d4d8(auStack_1a8,"https://localhost:8080");
  func_0x0001004b5d48(pppppuVar13 + 1,&uStack_190,auStack_1a8);
  if (cStack_191 < '\0') {
    __ZdlPv(auStack_1a8[0]);
  }
  if (uStack_180._7_1_ < '\0') {
    __ZdlPv(uStack_190);
  }
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_170 = 0x3f800000;
  FUN_104c5dc28(&uStack_190,pppppuVar12 + 0x25,pppppuVar12 + 0x1c);
  FUN_104c5e030(&uStack_190,pppppuVar12 + 0x25);
  for (plVar22 = (long *)uStack_180; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
    func_0x0001004b5d48(pppppuVar13 + 1,plVar22 + 2,plVar22 + 5);
  }
  func_0x000104c4f944(&uStack_190);
  return pppppuVar13;
}



/* Entry: 104c4dc98; end: 104c4ddeb;  */

long FUN_104c4dc98(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  lVar1 = param_1 + 8;
  FUN_104c61c28(lVar1);
  func_0x00010002d4d8(&uStack_50,"x-snap-games-lens-id");
  func_0x0001004b5d48(lVar1 + 8,&uStack_50,param_1 + 0x110);
  if (uStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  func_0x00010002d4d8(&uStack_50,"origin");
  func_0x00010002d4d8(auStack_68,"https://localhost:8080");
  func_0x0001004b5d48(lVar1 + 8,&uStack_50,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  if (uStack_40._7_1_ < '\0') {
    __ZdlPv(uStack_50);
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0x3f800000;
  FUN_104c5dc28(&uStack_50,param_1 + 0x128,param_1 + 0xe0);
  FUN_104c5e030(&uStack_50,param_1 + 0x128);
  for (plVar2 = (long *)uStack_40; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    func_0x0001004b5d48(lVar1 + 8,plVar2 + 2,plVar2 + 5);
  }
  func_0x000104c4f944(&uStack_50);
  return lVar1;
}



/* Entry: 104c4ddec; end: 104c4decb;  */

long FUN_104c4ddec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)(param_1 + 0x18)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto FUN_104c4fe94;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
FUN_104c4fe94:
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



/* Entry: 104c4decc; end: 104c4e3b3;  */

/* WARNING: Possible PIC construction at 0x000104c4e340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c4e3a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c4e344) */
/* WARNING: Removing unreachable block (ram,0x000104c4e364) */
/* WARNING: Removing unreachable block (ram,0x000104c4e3a4) */
/* WARNING: Removing unreachable block (ram,0x000104c4e3ac) */
/* WARNING: Removing unreachable block (ram,0x000104c4e3e0) */
/* WARNING: Removing unreachable block (ram,0x000104c4e3d4) */
/* WARNING: Removing unreachable block (ram,0x000104c4e3d8) */
/* WARNING: Removing unreachable block (ram,0x000104c4e3e4) */
/* WARNING: Removing unreachable block (ram,0x000104c4e3f0) */
/* WARNING: Removing unreachable block (ram,0x000104c4e110) */
/* WARNING: Removing unreachable block (ram,0x000104c4e114) */
/* WARNING: Removing unreachable block (ram,0x000104c4e11c) */
/* WARNING: Removing unreachable block (ram,0x000104c4e124) */
/* WARNING: Removing unreachable block (ram,0x000104c4e128) */

long * FUN_104c4decc(uint *param_1,long *param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  uint *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  uint **ppuVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined **ppuVar16;
  long lVar17;
  uint *puVar18;
  undefined8 uVar19;
  long *unaff_x26;
  long alStack_f8 [3];
  long *plStack_e0;
  undefined **ppuStack_d0;
  long *plStack_c8;
  uint *puStack_c0;
  long alStack_b8 [2];
  undefined4 uStack_a8;
  long *plStack_a0;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  FUN_104c4dc98();
  plVar9 = (long *)0x48;
  __Znwm();
  plVar10 = plVar9 + 1;
  *plVar10 = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_FUN_1107ec158;
  ppuVar16 = (undefined **)(plVar9 + 3);
  *ppuVar16 = (undefined *)&PTR_DAT_110c78548;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  *(undefined4 *)(plVar9 + 8) = 0;
  if (*(long *)(param_3 + 0x18) == 0) goto LAB_104c4e140;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar7) {
      *plVar10 = *plVar10 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  func_0x000104c505e8(alStack_f8,param_3);
  ppuStack_d0 = ppuVar16;
  plStack_c8 = plVar9;
  puStack_c0 = puVar8;
  plStack_a0 = plStack_e0;
  if (plStack_e0 != (long *)0x0) {
    if (plStack_e0 == alStack_f8) {
      plStack_a0 = alStack_b8;
      (**(code **)(*plStack_e0 + 0x18))(plStack_e0,alStack_b8);
    }
    else {
      plVar10 = plStack_e0;
      (**(code **)(*plStack_e0 + 0x10))();
      plStack_a0 = plVar10;
    }
  }
  plVar11 = (long *)0x40;
  __Znwm();
  unaff_x26 = plVar11 + 1;
  plVar11[2] = (long)plStack_c8;
  *unaff_x26 = (long)ppuStack_d0;
  *plVar11 = (long)&PTR_DAT_1107ec1a8;
  ppuStack_d0 = (undefined **)0x0;
  plStack_c8 = (long *)0x0;
  plVar11[3] = (long)puStack_c0;
  plVar10 = plStack_a0;
  if (plStack_a0 == (long *)0x0) {
LAB_104c4e028:
    plVar11[7] = (long)plVar10;
  }
  else {
    if (plStack_a0 != alStack_b8) {
      (**(code **)(*plStack_a0 + 0x10))();
      goto LAB_104c4e028;
    }
    plVar11[7] = (long)(plVar11 + 4);
    (**(code **)(*plStack_a0 + 0x18))();
  }
  plStack_78 = plVar11;
  FUN_104c50218(alStack_90,puVar8 + 0x80);
  if (plStack_78 == alStack_90) {
    lVar15 = 0x20;
LAB_104c4e074:
    (**(code **)(*plStack_78 + lVar15))();
  }
  else if (plStack_78 != (long *)0x0) {
    lVar15 = 0x28;
    goto LAB_104c4e074;
  }
  if (plStack_a0 == alStack_b8) {
    lVar15 = 0x20;
LAB_104c4e09c:
    (**(code **)(*plStack_a0 + lVar15))();
  }
  else if (plStack_a0 != (long *)0x0) {
    lVar15 = 0x28;
    goto LAB_104c4e09c;
  }
  plVar10 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar11 = plStack_c8 + 1;
    do {
      lVar15 = *plVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (plStack_e0 == alStack_f8) {
    lVar15 = 0x20;
  }
  else {
    if (plStack_e0 == (long *)0x0) goto LAB_104c4e140;
    lVar15 = 0x28;
  }
  (**(code **)(*plStack_e0 + lVar15))();
LAB_104c4e140:
  func_0x000104c4de38(puVar8 + 0x88,param_4);
  ppuStack_d0 = &PTR_DAT_110c78458;
  plStack_c8 = (long *)0x0;
  alStack_b8[0] = 0;
  alStack_b8[1] = 0;
  puStack_c0 = (uint *)0x0;
  uStack_a8 = 0;
  if (0 < (int)param_2[1]) {
    unaff_x26 = (long *)0x0;
    lVar15 = 0;
    do {
      lVar17 = *param_2;
      ppuVar12 = &puStack_c0;
      func_0x000100627dec(ppuVar12,0x104c4f8f0);
      puVar18 = ppuVar12[1];
      if (((ulong)puVar18 & 1) != 0) {
        puVar18 = *(uint **)((ulong)puVar18 & 0xfffffffffffffffe);
      }
      uVar19 = *(undefined8 *)(lVar17 + (long)unaff_x26);
      uVar13 = uVar19;
      _strlen(uVar19);
      func_0x00010b4bf088(ppuVar12 + 2,uVar19,uVar13,puVar18);
      puVar18 = ppuVar12[1];
      if (((ulong)puVar18 & 1) != 0) {
        puVar18 = *(uint **)((ulong)puVar18 & 0xfffffffffffffffe);
      }
      uVar19 = *(undefined8 *)((long)unaff_x26 + lVar17 + 8);
      uVar13 = uVar19;
      _strlen(uVar19);
      func_0x00010b4bf088(ppuVar12 + 3,uVar19,uVar13,puVar18);
      iVar1 = *(int *)((long)unaff_x26 + lVar17 + 0x10);
      if (2 < iVar1 - 1U) {
        iVar1 = 0;
      }
      *(int *)(ppuVar12 + 4) = iVar1;
      lVar15 = lVar15 + 1;
      unaff_x26 = unaff_x26 + 3;
    } while (lVar15 < (int)param_2[1]);
  }
  lVar15 = *(long *)(*(long *)param_1 + 8);
  func_0x00010ae90c04(lVar15,param_1 + 2,*(long *)param_1 + 0x48,puVar8 + 2,&ppuStack_d0);
  *(undefined1 *)(lVar15 + 0x40) = 1;
  lVar17 = *(long *)(lVar15 + 8);
  lVar14 = *(long *)(lVar15 + 0x48);
  bVar3 = *(byte *)(lVar17 + 1);
  bVar4 = *(byte *)(lVar17 + 2);
  bVar5 = *(byte *)(lVar17 + 0x150);
  *(undefined1 *)(lVar14 + 0x20) = 0;
  *(undefined1 *)(lVar14 + 1) = 1;
  *(uint *)(lVar14 + 4) = (uint)bVar3 << 5 | (uint)bVar4 << 7 | (uint)bVar5 << 8;
  *(long *)(lVar14 + 0x10) = lVar17 + 0xb8;
  func_0x000100612c04(lVar15 + 0x78,lVar17,lVar15 + 0x10,*(undefined1 *)(lVar15 + 0x41),lVar14,
                      lVar15 + 0x50,ppuVar16,puVar8 + 0x72,puVar8);
  uVar2 = *puVar8;
  func_0x00010ae0c024();
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 1;
    do {
      lVar15 = *plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (long *)(ulong)uVar2;
  }
  ___stack_chk_fail();
  plVar9 = (long *)unaff_x26[1];
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 1;
    do {
      lVar15 = *plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return unaff_x26;
}



/* Entry: 104c4e3b4; end: 104c4e3ff;  */

long FUN_104c4e3b4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)(param_1 + 0x18)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto FUN_104c50590;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
FUN_104c50590:
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



/* Entry: 104c4e400; end: 104c4e8e3;  */

undefined ****** FUN_104c4e400(uint *param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined ******ppppppuVar1;
  undefined *****pppppuVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  uint *puVar10;
  undefined ******ppppppuVar11;
  long *plVar12;
  uint **ppuVar13;
  undefined8 uVar14;
  undefined ******ppppppuVar15;
  long lVar16;
  long lVar17;
  undefined *****pppppuVar18;
  undefined ****ppppuVar19;
  long lVar20;
  uint *puVar21;
  long *unaff_x25;
  undefined8 uVar22;
  long *unaff_x26;
  undefined *****pppppuStack_120;
  undefined *****pppppuStack_118;
  undefined *****pppppuStack_110;
  undefined *****pppppuStack_108;
  uint *puStack_100;
  long alStack_f8 [3];
  long *plStack_e0;
  undefined *****pppppuStack_d0;
  undefined *****pppppuStack_c8;
  uint *puStack_c0;
  long alStack_b8 [2];
  undefined4 uStack_a8;
  long *plStack_a0;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_1;
  FUN_104c4dc98();
  ppppppuVar11 = (undefined ******)0x30;
  __Znwm();
  ppppppuVar15 = ppppppuVar11 + 1;
  *ppppppuVar15 = (undefined *****)0x0;
  ppppppuVar11[2] = (undefined *****)0x0;
  pppppuStack_120 = (undefined *****)(ppppppuVar11 + 3);
  *pppppuStack_120 = (undefined ****)&PTR_DAT_110c783b8;
  *ppppppuVar11 = (undefined *****)&PTR_FUN_1107ec228;
  ppppppuVar11[4] = (undefined *****)0x0;
  *(undefined4 *)(ppppppuVar11 + 5) = 0;
  pppppuStack_118 = (undefined *****)ppppppuVar11;
  if (*(long *)(param_3 + 0x18) != 0) {
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(ppppppuVar15,0x10);
      if (bVar9) {
        *ppppppuVar15 = (undefined *****)((long)*ppppppuVar15 + 1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    pppppuStack_110 = pppppuStack_120;
    pppppuStack_108 = (undefined *****)ppppppuVar11;
    puStack_100 = puVar10;
    func_0x000100051010(alStack_f8,param_3);
    pppppuStack_c8 = pppppuStack_108;
    pppppuStack_d0 = pppppuStack_110;
    pppppuStack_110 = (undefined *****)0x0;
    pppppuStack_108 = (undefined *****)0x0;
    puStack_c0 = puStack_100;
    plStack_a0 = plStack_e0;
    if (plStack_e0 != (long *)0x0) {
      if (plStack_e0 == alStack_f8) {
        plStack_a0 = alStack_b8;
        (**(code **)(*plStack_e0 + 0x18))(plStack_e0,alStack_b8);
      }
      else {
        plVar12 = plStack_e0;
        (**(code **)(*plStack_e0 + 0x10))();
        plStack_a0 = plVar12;
      }
    }
    unaff_x25 = (long *)0x40;
    __Znwm();
    unaff_x26 = unaff_x25 + 1;
    unaff_x25[2] = (long)pppppuStack_c8;
    *unaff_x26 = (long)pppppuStack_d0;
    *unaff_x25 = (long)&PTR_DAT_1107ec278;
    pppppuStack_d0 = (undefined *****)0x0;
    pppppuStack_c8 = (undefined *****)0x0;
    unaff_x25[3] = (long)puStack_c0;
    plVar12 = plStack_a0;
    if (plStack_a0 == (long *)0x0) {
LAB_104c4e558:
      unaff_x25[7] = (long)plVar12;
    }
    else {
      if (plStack_a0 != alStack_b8) {
        (**(code **)(*plStack_a0 + 0x10))();
        goto LAB_104c4e558;
      }
      unaff_x25[7] = (long)(unaff_x25 + 4);
      (**(code **)(*plStack_a0 + 0x18))();
    }
    plStack_78 = unaff_x25;
    FUN_104c50218(alStack_90,puVar10 + 0x80);
    if (plStack_78 == alStack_90) {
      lVar17 = 0x20;
LAB_104c4e5a4:
      (**(code **)(*plStack_78 + lVar17))();
    }
    else if (plStack_78 != (long *)0x0) {
      lVar17 = 0x28;
      goto LAB_104c4e5a4;
    }
    if (plStack_a0 == alStack_b8) {
      lVar17 = 0x20;
LAB_104c4e5cc:
      (**(code **)(*plStack_a0 + lVar17))();
    }
    else if (plStack_a0 != (long *)0x0) {
      lVar17 = 0x28;
      goto LAB_104c4e5cc;
    }
    pppppuVar18 = pppppuStack_c8;
    if (pppppuStack_c8 != (undefined *****)0x0) {
      plVar12 = (long *)(pppppuStack_c8 + 1);
      do {
        lVar17 = *plVar12;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar9) {
          *plVar12 = lVar17 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar17 == 0) {
        (**(code **)((long)*pppppuStack_c8 + 0x10))(pppppuStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar18);
      }
    }
    if (plStack_e0 == alStack_f8) {
      lVar17 = 0x20;
LAB_104c4e62c:
      (**(code **)(*plStack_e0 + lVar17))();
    }
    else if (plStack_e0 != (long *)0x0) {
      lVar17 = 0x28;
      goto LAB_104c4e62c;
    }
    pppppuVar18 = pppppuStack_108;
    if (pppppuStack_108 != (undefined *****)0x0) {
      plVar12 = (long *)(pppppuStack_108 + 1);
      do {
        lVar17 = *plVar12;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar9) {
          *plVar12 = lVar17 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar17 == 0) {
        (**(code **)((long)*pppppuStack_108 + 0x10))(pppppuStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar18);
      }
    }
  }
  func_0x000104c4de38(puVar10 + 0x88,param_4);
  pppppuStack_d0 = (undefined *****)&PTR_DAT_110c784a8;
  pppppuStack_c8 = (undefined *****)0x0;
  alStack_b8[0] = 0;
  alStack_b8[1] = 0;
  puStack_c0 = (uint *)0x0;
  uStack_a8 = 0;
  if (0 < (int)param_2[1]) {
    unaff_x26 = (long *)0x0;
    lVar17 = 0;
    do {
      lVar20 = *param_2;
      ppuVar13 = &puStack_c0;
      func_0x000100627dec(ppuVar13,0x104c4f8f0);
      puVar21 = ppuVar13[1];
      if (((ulong)puVar21 & 1) != 0) {
        puVar21 = *(uint **)((ulong)puVar21 & 0xfffffffffffffffe);
      }
      uVar22 = *(undefined8 *)(lVar20 + (long)unaff_x26);
      uVar14 = uVar22;
      _strlen(uVar22);
      func_0x00010b4bf088(ppuVar13 + 2,uVar22,uVar14,puVar21);
      puVar21 = ppuVar13[1];
      if (((ulong)puVar21 & 1) != 0) {
        puVar21 = *(uint **)((ulong)puVar21 & 0xfffffffffffffffe);
      }
      unaff_x25 = *(long **)((long)unaff_x26 + lVar20 + 8);
      plVar12 = unaff_x25;
      _strlen(unaff_x25);
      func_0x00010b4bf088(ppuVar13 + 3,unaff_x25,plVar12,puVar21);
      iVar3 = *(int *)((long)unaff_x26 + lVar20 + 0x10);
      if (2 < iVar3 - 1U) {
        iVar3 = 0;
      }
      *(int *)(ppuVar13 + 4) = iVar3;
      lVar17 = lVar17 + 1;
      unaff_x26 = unaff_x26 + 3;
    } while (lVar17 < (int)param_2[1]);
  }
  lVar17 = *(long *)(*(long *)param_1 + 8);
  func_0x00010ae90f70(lVar17,param_1 + 2,*(long *)param_1 + 0xa8,puVar10 + 2,&pppppuStack_d0);
  *(undefined1 *)(lVar17 + 0x40) = 1;
  lVar20 = *(long *)(lVar17 + 8);
  lVar16 = *(long *)(lVar17 + 0x48);
  bVar5 = *(byte *)(lVar20 + 1);
  bVar6 = *(byte *)(lVar20 + 2);
  bVar7 = *(byte *)(lVar20 + 0x150);
  *(undefined1 *)(lVar16 + 0x20) = 0;
  *(undefined1 *)(lVar16 + 1) = 1;
  *(uint *)(lVar16 + 4) = (uint)bVar5 << 5 | (uint)bVar6 << 7 | (uint)bVar7 << 8;
  *(long *)(lVar16 + 0x10) = lVar20 + 0xb8;
  func_0x000100612c04(lVar17 + 0x78,lVar20,lVar17 + 0x10,*(undefined1 *)(lVar17 + 0x41),lVar16,
                      lVar17 + 0x50,pppppuStack_120,puVar10 + 0x72,puVar10);
  uVar4 = *puVar10;
  ppppppuVar11 = &pppppuStack_d0;
  func_0x00010ae0c570();
  ppppppuVar15 = (undefined ******)pppppuStack_118;
  if ((undefined ******)pppppuStack_118 != (undefined ******)0x0) {
    ppppppuVar1 = (undefined ******)(pppppuStack_118 + 1);
    do {
      pppppuVar18 = *ppppppuVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
      if (bVar9) {
        *ppppppuVar1 = (undefined *****)((long)pppppuVar18 + -1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (pppppuVar18 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_118)[2])(pppppuStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppuVar11 = ppppppuVar15;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (undefined ******)(ulong)uVar4;
  }
  ___stack_chk_fail();
  FUN_104c50bfc(unaff_x26);
  __ZdlPv(unaff_x25);
  FUN_104c4e8e4(&pppppuStack_d0);
  FUN_104c4e8e4(&pppppuStack_110);
  FUN_104c50bfc(&pppppuStack_120);
  __Unwind_Resume();
  ppppppuVar15 = (undefined ******)ppppppuVar11[6];
  if (ppppppuVar15 == ppppppuVar11 + 3) {
    lVar17 = 0x20;
  }
  else {
    if (ppppppuVar15 == (undefined ******)0x0) goto LAB_104c4e920;
    lVar17 = 0x28;
  }
  (**(code **)((long)*ppppppuVar15 + lVar17))();
LAB_104c4e920:
  pppppuVar18 = ppppppuVar11[1];
  if (pppppuVar18 != (undefined *****)0x0) {
    pppppuVar2 = pppppuVar18 + 1;
    do {
      ppppuVar19 = *pppppuVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pppppuVar2,0x10);
      if (bVar9) {
        *pppppuVar2 = (undefined ****)((long)ppppuVar19 + -1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (ppppuVar19 == (undefined ****)0x0) {
      (*(code *)(*pppppuVar18)[2])(pppppuVar18);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar18);
    }
  }
  return ppppppuVar11;
}



/* Entry: 104c4e8e4; end: 104c4e92f;  */

long FUN_104c4e8e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)(param_1 + 0x18)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto FUN_104c50bfc;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
FUN_104c50bfc:
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



/* Entry: 104c4e930; end: 104c4edab;  */

/* WARNING: Possible PIC construction at 0x000104c4ed38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c4eda0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c4ed3c) */
/* WARNING: Removing unreachable block (ram,0x000104c4ed5c) */
/* WARNING: Removing unreachable block (ram,0x000104c4ed9c) */
/* WARNING: Removing unreachable block (ram,0x000104c4eda4) */
/* WARNING: Removing unreachable block (ram,0x000104c4edd8) */
/* WARNING: Removing unreachable block (ram,0x000104c4edcc) */
/* WARNING: Removing unreachable block (ram,0x000104c4edd0) */
/* WARNING: Removing unreachable block (ram,0x000104c4eddc) */
/* WARNING: Removing unreachable block (ram,0x000104c4ede8) */
/* WARNING: Removing unreachable block (ram,0x000104c4eb98) */
/* WARNING: Removing unreachable block (ram,0x000104c4eb9c) */
/* WARNING: Removing unreachable block (ram,0x000104c4eba4) */
/* WARNING: Removing unreachable block (ram,0x000104c4ebac) */
/* WARNING: Removing unreachable block (ram,0x000104c4ebb0) */

undefined ***
FUN_104c4e930(uint *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,int param_5,
             long param_6,undefined8 param_7)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  uint *puVar8;
  long *plVar9;
  undefined **ppuVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined *apuStack_f8 [3];
  undefined **ppuStack_e0;
  undefined **ppuStack_d0;
  long *plStack_c8;
  uint *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined **ppuStack_a0;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  FUN_104c4dc98();
  plVar9 = (long *)0x50;
  __Znwm();
  plVar11 = plVar9 + 1;
  *plVar11 = 0;
  plVar9[2] = 0;
  ppuVar15 = (undefined **)(plVar9 + 3);
  *ppuVar15 = (undefined *)&PTR_DAT_110c78598;
  *plVar9 = (long)&PTR_DAT_1107ec2f8;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = (long)&DAT_11383d918;
  *(undefined4 *)(plVar9 + 9) = 0;
  if (*(long *)(param_6 + 0x18) == 0) goto LAB_104c4ebc8;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar7) {
      *plVar11 = *plVar11 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  func_0x000104c50fe0(apuStack_f8,param_6);
  ppuStack_d0 = ppuVar15;
  plStack_c8 = plVar9;
  puStack_c0 = puVar8;
  ppuStack_a0 = ppuStack_e0;
  if (ppuStack_e0 != (undefined **)0x0) {
    if (ppuStack_e0 == apuStack_f8) {
      ppuStack_a0 = &puStack_b8;
      (**(code **)(*ppuStack_e0 + 0x18))(ppuStack_e0,&puStack_b8);
    }
    else {
      ppuVar10 = ppuStack_e0;
      (**(code **)(*ppuStack_e0 + 0x10))();
      ppuStack_a0 = ppuVar10;
    }
  }
  plVar11 = (long *)0x40;
  __Znwm();
  plVar11[2] = (long)plStack_c8;
  plVar11[1] = (long)ppuStack_d0;
  *plVar11 = (long)&PTR_DAT_1107ec348;
  ppuStack_d0 = (undefined **)0x0;
  plStack_c8 = (long *)0x0;
  plVar11[3] = (long)puStack_c0;
  ppuVar10 = ppuStack_a0;
  if (ppuStack_a0 == (undefined **)0x0) {
LAB_104c4eaa8:
    plVar11[7] = (long)ppuVar10;
  }
  else {
    if (ppuStack_a0 != &puStack_b8) {
      (**(code **)(*ppuStack_a0 + 0x10))();
      goto LAB_104c4eaa8;
    }
    plVar11[7] = (long)(plVar11 + 4);
    (**(code **)(*ppuStack_a0 + 0x18))();
  }
  plStack_78 = plVar11;
  FUN_104c50218(alStack_90,puVar8 + 0x80);
  if (plStack_78 == alStack_90) {
    lVar14 = 0x20;
LAB_104c4eaf4:
    (**(code **)(*plStack_78 + lVar14))();
  }
  else if (plStack_78 != (long *)0x0) {
    lVar14 = 0x28;
    goto LAB_104c4eaf4;
  }
  if (ppuStack_a0 == &puStack_b8) {
    lVar14 = 0x20;
LAB_104c4eb1c:
    (**(code **)(*ppuStack_a0 + lVar14))();
  }
  else if (ppuStack_a0 != (undefined **)0x0) {
    lVar14 = 0x28;
    goto LAB_104c4eb1c;
  }
  plVar11 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
    do {
      lVar14 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  if (ppuStack_e0 == apuStack_f8) {
    lVar14 = 0x20;
  }
  else {
    if (ppuStack_e0 == (undefined **)0x0) goto LAB_104c4ebc8;
    lVar14 = 0x28;
  }
  (**(code **)(*ppuStack_e0 + lVar14))();
LAB_104c4ebc8:
  func_0x000104c4de38(puVar8 + 0x88,param_7);
  ppuStack_d0 = &PTR_DAT_110c78368;
  plStack_c8 = (long *)0x0;
  puStack_c0 = (uint *)&DAT_11383d918;
  puStack_b8 = &DAT_11383d918;
  uStack_a8 = 0;
  uStack_b0 = 0;
  func_0x0001001a53d4(&puStack_c0,param_2,0);
  plVar11 = plStack_c8;
  if (((ulong)plStack_c8 & 1) != 0) {
    plVar11 = *(long **)((ulong)plStack_c8 & 0xfffffffffffffffe);
  }
  func_0x0001001a53d4(&puStack_b8,param_3,plVar11);
  if (2 < param_5 - 1U) {
    param_5 = 0;
  }
  uStack_b0 = CONCAT44(param_5,param_4);
  lVar14 = *(long *)(*(long *)param_1 + 8);
  func_0x00010ae90e4c(lVar14,param_1 + 2,*(long *)param_1 + 0x88,puVar8 + 2,&ppuStack_d0);
  *(undefined1 *)(lVar14 + 0x40) = 1;
  lVar12 = *(long *)(lVar14 + 8);
  lVar13 = *(long *)(lVar14 + 0x48);
  bVar3 = *(byte *)(lVar12 + 1);
  bVar4 = *(byte *)(lVar12 + 2);
  bVar5 = *(byte *)(lVar12 + 0x150);
  *(undefined1 *)(lVar13 + 0x20) = 0;
  *(undefined1 *)(lVar13 + 1) = 1;
  *(uint *)(lVar13 + 4) = (uint)bVar3 << 5 | (uint)bVar4 << 7 | (uint)bVar5 << 8;
  *(long *)(lVar13 + 0x10) = lVar12 + 0xb8;
  func_0x000100612c04(lVar14 + 0x78,lVar12,lVar14 + 0x10,*(undefined1 *)(lVar14 + 0x41),lVar13,
                      lVar14 + 0x50,ppuVar15,puVar8 + 0x72,puVar8);
  uVar2 = *puVar8;
  func_0x00010ae0c79c();
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 1;
    do {
      lVar14 = *plVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (undefined ***)(ulong)uVar2;
  }
  ___stack_chk_fail();
  plVar9 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar11 = plStack_c8 + 1;
    do {
      lVar14 = *plVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return &ppuStack_d0;
}



/* Entry: 104c4edac; end: 104c4edf7;  */

long FUN_104c4edac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)(param_1 + 0x18)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto FUN_104c50f88;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
FUN_104c50f88:
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



/* Entry: 104c4edf8; end: 104c4f31f;  */

/* WARNING: Possible PIC construction at 0x000104c4f2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c4f314: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c4f2b0) */
/* WARNING: Removing unreachable block (ram,0x000104c4f2d0) */
/* WARNING: Removing unreachable block (ram,0x000104c4f310) */
/* WARNING: Removing unreachable block (ram,0x000104c4f318) */
/* WARNING: Removing unreachable block (ram,0x000104c4f34c) */
/* WARNING: Removing unreachable block (ram,0x000104c4f340) */
/* WARNING: Removing unreachable block (ram,0x000104c4f344) */
/* WARNING: Removing unreachable block (ram,0x000104c4f350) */
/* WARNING: Removing unreachable block (ram,0x000104c4f35c) */
/* WARNING: Removing unreachable block (ram,0x000104c4f040) */
/* WARNING: Removing unreachable block (ram,0x000104c4f044) */
/* WARNING: Removing unreachable block (ram,0x000104c4f04c) */
/* WARNING: Removing unreachable block (ram,0x000104c4f054) */
/* WARNING: Removing unreachable block (ram,0x000104c4f058) */

long * FUN_104c4edf8(uint *param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  uint *puVar8;
  long *plVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  long lVar18;
  long *unaff_x26;
  undefined *apuStack_e8 [3];
  undefined **ppuStack_d0;
  undefined **ppuStack_c0;
  long *plStack_b8;
  uint *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_90;
  long alStack_88 [3];
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  FUN_104c4dc98();
  plVar9 = (long *)0x40;
  __Znwm();
  plVar11 = plVar9 + 1;
  *plVar11 = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_DAT_1107ec3c8;
  ppuVar16 = (undefined **)(plVar9 + 3);
  *ppuVar16 = (undefined *)&PTR_DAT_110c782c8;
  plVar9[4] = 0;
  plVar9[5] = (long)&DAT_11383d918;
  plVar9[7] = 0;
  if (*(long *)(param_3 + 0x18) != 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = *plVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    func_0x000104c51478(apuStack_e8,param_3);
    ppuStack_c0 = ppuVar16;
    plStack_b8 = plVar9;
    puStack_b0 = puVar8;
    ppuStack_90 = ppuStack_d0;
    if (ppuStack_d0 != (undefined **)0x0) {
      if (ppuStack_d0 == apuStack_e8) {
        ppuStack_90 = &puStack_a8;
        (**(code **)(*ppuStack_d0 + 0x18))(ppuStack_d0,&puStack_a8);
      }
      else {
        ppuVar10 = ppuStack_d0;
        (**(code **)(*ppuStack_d0 + 0x10))();
        ppuStack_90 = ppuVar10;
      }
    }
    plVar11 = (long *)0x40;
    __Znwm();
    unaff_x26 = plVar11 + 1;
    plVar11[2] = (long)plStack_b8;
    *unaff_x26 = (long)ppuStack_c0;
    *plVar11 = (long)&PTR_DAT_1107ec418;
    ppuStack_c0 = (undefined **)0x0;
    plStack_b8 = (long *)0x0;
    plVar11[3] = (long)puStack_b0;
    ppuVar10 = ppuStack_90;
    if (ppuStack_90 == (undefined **)0x0) {
LAB_104c4ef58:
      plVar11[7] = (long)ppuVar10;
    }
    else {
      if (ppuStack_90 != &puStack_a8) {
        (**(code **)(*ppuStack_90 + 0x10))();
        goto LAB_104c4ef58;
      }
      plVar11[7] = (long)(plVar11 + 4);
      (**(code **)(*ppuStack_90 + 0x18))();
    }
    plStack_70 = plVar11;
    FUN_104c50218(alStack_88,puVar8 + 0x80);
    if (plStack_70 == alStack_88) {
      lVar15 = 0x20;
LAB_104c4efa4:
      (**(code **)(*plStack_70 + lVar15))();
    }
    else if (plStack_70 != (long *)0x0) {
      lVar15 = 0x28;
      goto LAB_104c4efa4;
    }
    if (ppuStack_90 == &puStack_a8) {
      lVar15 = 0x20;
LAB_104c4efcc:
      (**(code **)(*ppuStack_90 + lVar15))();
    }
    else if (ppuStack_90 != (undefined **)0x0) {
      lVar15 = 0x28;
      goto LAB_104c4efcc;
    }
    plVar11 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar1 = plStack_b8 + 1;
      do {
        lVar15 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    if (ppuStack_d0 == apuStack_e8) {
      lVar15 = 0x20;
    }
    else {
      if (ppuStack_d0 == (undefined **)0x0) goto LAB_104c4f070;
      lVar15 = 0x28;
    }
    (**(code **)(*ppuStack_d0 + lVar15))();
  }
LAB_104c4f070:
  func_0x000104c4de38(puVar8 + 0x88,param_4);
  ppuStack_c0 = &PTR_DAT_110c78318;
  plStack_b8 = (long *)0x0;
  puStack_b0 = (uint *)&DAT_11383d918;
  uStack_a0 = 0;
  uVar17 = *param_2;
  uVar12 = uVar17;
  _strlen(uVar17);
  func_0x00010b4bf088(&puStack_b0,uVar17,uVar12,0);
  iVar14 = *(int *)(param_2 + 3);
  if (iVar14 == 2) {
    lVar15 = param_2[1];
    if ((lVar15 == 0) || (lVar18 = param_2[2], lVar18 == 0)) goto LAB_104c4f18c;
    if (uStack_a0._4_4_ != 2) {
      if ((uStack_a0._4_4_ & 0xfffffffe) == 2) {
        func_0x000100067de0(&puStack_a8);
        lVar15 = param_2[1];
      }
      uStack_a0 = CONCAT44(2,(undefined4)uStack_a0);
      puStack_a8 = &DAT_11383d918;
    }
    plVar11 = plStack_b8;
    if (((ulong)plStack_b8 & 1) != 0) {
      plVar11 = *(long **)((ulong)plStack_b8 & 0xfffffffffffffffe);
    }
    func_0x00010b4bf088(&puStack_a8,lVar15,lVar18,plVar11);
    iVar14 = *(int *)(param_2 + 3);
  }
  if ((iVar14 == 1) && (lVar15 = param_2[1], lVar15 != 0)) {
    if (uStack_a0._4_4_ != 3) {
      if ((uStack_a0._4_4_ & 0xfffffffe) == 2) {
        func_0x000100067de0(&puStack_a8);
        lVar15 = param_2[1];
      }
      uStack_a0 = CONCAT44(3,(undefined4)uStack_a0);
      puStack_a8 = &DAT_11383d918;
    }
    plVar11 = plStack_b8;
    if (((ulong)plStack_b8 & 1) != 0) {
      plVar11 = *(long **)((ulong)plStack_b8 & 0xfffffffffffffffe);
    }
    lVar18 = lVar15;
    _strlen(lVar15);
    func_0x00010b4bf088(&puStack_a8,lVar15,lVar18,plVar11);
  }
LAB_104c4f18c:
  lVar15 = *(long *)(*(long *)param_1 + 8);
  func_0x00010ae90ae0(lVar15,param_1 + 2,*(long *)param_1 + 0x28,puVar8 + 2,&ppuStack_c0);
  *(undefined1 *)(lVar15 + 0x40) = 1;
  lVar18 = *(long *)(lVar15 + 8);
  lVar13 = *(long *)(lVar15 + 0x48);
  bVar3 = *(byte *)(lVar18 + 1);
  bVar4 = *(byte *)(lVar18 + 2);
  bVar5 = *(byte *)(lVar18 + 0x150);
  *(undefined1 *)(lVar13 + 0x20) = 0;
  *(undefined1 *)(lVar13 + 1) = 1;
  *(uint *)(lVar13 + 4) = (uint)bVar3 << 5 | (uint)bVar4 << 7 | (uint)bVar5 << 8;
  *(long *)(lVar13 + 0x10) = lVar18 + 0xb8;
  func_0x000100612c04(lVar15 + 0x78,lVar18,lVar15 + 0x10,*(undefined1 *)(lVar15 + 0x41),lVar13,
                      lVar15 + 0x50,ppuVar16,puVar8 + 0x72,puVar8);
  uVar2 = *puVar8;
  func_0x00010ae0ae30();
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 1;
    do {
      lVar15 = *plVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (long *)(ulong)uVar2;
  }
  ___stack_chk_fail();
  plVar9 = (long *)unaff_x26[1];
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 1;
    do {
      lVar15 = *plVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return unaff_x26;
}



/* Entry: 104c4f320; end: 104c4f3cf;  */

long FUN_104c4f320(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)(param_1 + 0x18)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto FUN_104c51420;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
FUN_104c51420:
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



/* Entry: 104c4f3d0; end: 104c4f3d3;  */

undefined8 * FUN_104c4f3d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ec498;
  (**(code **)(*plRam0000000113815c70 + 0x40))(plRam0000000113815c70,param_1[2]);
  FUN_104c4f4f4(param_1 + 0xc);
  (**(code **)(*plRam0000000113815c70 + 0x78))(plRam0000000113815c70,param_1 + 4);
  *param_1 = &PTR_FUN_1107ec4f0;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (plRam0000000113815c78 == (long *)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000113815c78 + 0x18))();
  }
  return param_1;
}



/* Entry: 104c4f3d4; end: 104c4f4c7;  */

undefined8 * FUN_104c4f3d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  
  puVar1 = param_1;
  func_0x00010046ddec(param_1,1);
  *puVar1 = &PTR_FUN_1107ec498;
  (**(code **)(*plRam0000000113815c70 + 0x70))(plRam0000000113815c70,puVar1 + 4);
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = 0;
  plVar3 = plRam0000000113815c70;
  plVar2 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0x18))(plRam0000000113815c70,param_2);
  (**(code **)(*plVar3 + 0x20))(plVar3,plVar2,param_2,0);
  param_1[2] = plVar3;
  param_1[3] = 1;
  return param_1;
}



/* Entry: 104c4f4c8; end: 104c4f4db;  */

void FUN_104c4f4c8(void)

{
  FUN_104c4f64c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c4f4dc; end: 104c4f4df;  */

undefined8 * FUN_104c4f4dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ec4f0;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (plRam0000000113815c78 == (long *)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000113815c78 + 0x18))();
  }
  return param_1;
}



/* Entry: 104c4f4e0; end: 104c4f4f3;  */

void FUN_104c4f4e0(void)

{
  func_0x00010046df00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c4f4f4; end: 104c4f64b;  */

void FUN_104c4f4f4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar1 = (long *)plVar1[1];
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 104c4f64c; end: 104c4f6b7;  */

undefined8 * FUN_104c4f64c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ec498;
  (**(code **)(*plRam0000000113815c70 + 0x40))(plRam0000000113815c70,param_1[2]);
  FUN_104c4f4f4(param_1 + 0xc);
  (**(code **)(*plRam0000000113815c70 + 0x78))(plRam0000000113815c70,param_1 + 4);
  *param_1 = &PTR_FUN_1107ec4f0;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (plRam0000000113815c78 == (long *)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000113815c78 + 0x18))();
  }
  return param_1;
}



/* Entry: 104c4f6b8; end: 104c4f6cb;  */

void FUN_104c4f6b8(void)

{
  long *plVar1;
  long *plVar2;
  
  FUN_104c4f6cc("basic_string");
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_104c4f71c();
  plVar2 = plVar1;
  ___cxa_throw(plVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(plVar1);
  __Unwind_Resume();
  __ZNSt11logic_errorC2EPKc();
  *plVar2 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
  return;
}



/* Entry: 104c4f6cc; end: 104c4f71b;  */

void FUN_104c4f6cc(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_104c4f71c();
  plVar2 = plVar1;
  ___cxa_throw(plVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(plVar1);
  __Unwind_Resume();
  __ZNSt11logic_errorC2EPKc();
  *plVar2 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
  return;
}



/* Entry: 104c4f71c; end: 104c4f767;  */

void FUN_104c4f71c(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
  return;
}



/* Entry: 104c4f768; end: 104c4f7df;  */

ulong * FUN_104c4f768(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if (param_2 < 0x7ffffffffffffff8) {
    if (param_2 < 0x17) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      *(char *)((long)param_1 + 0x17) = (char)param_2;
    }
    else {
      uVar1 = 0x19;
      if ((param_2 | 7) != 0x17) {
        uVar1 = (param_2 | 7) + 1;
      }
      uVar2 = uVar1;
      __Znwm();
      param_1[1] = param_2;
      param_1[2] = uVar1 | 0x8000000000000000;
      *param_1 = uVar2;
    }
    return param_1;
  }
  FUN_104c4f6b8();
  if (param_1 == (ulong *)0x0) {
    puVar3 = (ulong *)0x50;
    __Znwm();
  }
  else {
    puVar3 = param_1;
    func_0x00010b4d80e0(param_1,0x50);
  }
  *puVar3 = (ulong)&PTR_DAT_110c78408;
  puVar3[1] = (ulong)param_1;
  puVar3[2] = 0;
  puVar3[3] = (ulong)&DAT_11383d918;
  puVar3[4] = (ulong)&DAT_11383d918;
  puVar3[5] = (ulong)&DAT_11383d918;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 9) = 0;
  return puVar3;
}



/* Entry: 104c4f7e0; end: 104c4f9b7;  */

void FUN_104c4f7e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x50);
  }
  *puVar1 = &PTR_DAT_110c78408;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  return;
}



/* Entry: 104c4f9b8; end: 104c4fa87;  */

long * FUN_104c4f9b8(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  plVar5 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar11 = (long *)param_1[1];
  if (plVar11 < param_2) {
LAB_104c4fa00:
    if (param_2 == (long *)0x0) {
      plVar5 = (long *)*param_1;
      *param_1 = 0;
      if (plVar5 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        bVar1 = *(byte *)((long)param_2 + 0x17);
        uVar6 = param_2[1];
        if (-1 < (char)bVar1) {
          uVar6 = (ulong)bVar1;
        }
        bVar2 = *(byte *)((long)param_3 + 0x17);
        uVar3 = param_3[1];
        if (-1 < (char)bVar2) {
          uVar3 = (ulong)bVar2;
        }
        if (uVar6 == uVar3) {
          plVar5 = (long *)*param_2;
          if (-1 < (char)bVar1) {
            plVar5 = param_2;
          }
          plVar11 = (long *)*param_3;
          if (-1 < (char)bVar2) {
            plVar11 = param_3;
          }
          _memcmp(plVar5,plVar11,uVar6);
          return (long *)(ulong)((int)plVar5 == 0);
        }
        return (long *)0x0;
      }
      lVar4 = (long)param_2 << 3;
      __Znwm();
      plVar5 = (long *)*param_1;
      *param_1 = lVar4;
      if (plVar5 != (long *)0x0) {
        __ZdlPv();
      }
      plVar11 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar11 * 8) = 0;
        plVar11 = (long *)((long)plVar11 + 1);
      } while (param_2 != plVar11);
      plVar11 = (long *)param_1[2];
      if (plVar11 != (long *)0x0) {
        plVar7 = (long *)plVar11[1];
        uVar6 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar6) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar6);
        }
        else if (param_2 <= plVar7) {
          uVar3 = 0;
          if (param_2 != (long *)0x0) {
            uVar3 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar3 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
        plVar8 = (long *)*plVar11;
        while (plVar8 != (long *)0x0) {
          plVar10 = (long *)plVar8[1];
          if (((ulong)param_2 & uVar6) == 0) {
            plVar10 = (long *)((ulong)plVar10 & uVar6);
          }
          else if (param_2 <= plVar10) {
            uVar3 = 0;
            if (param_2 != (long *)0x0) {
              uVar3 = (ulong)plVar10 / (ulong)param_2;
            }
            plVar10 = (long *)((long)plVar10 - uVar3 * (long)param_2);
          }
          plVar9 = plVar8;
          if (plVar10 != plVar7) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + (long)plVar10 * 8) == 0) {
              *(long **)(lVar4 + (long)plVar10 * 8) = plVar11;
              plVar7 = plVar10;
            }
            else {
              *plVar11 = *plVar8;
              *plVar8 = **(undefined8 **)(lVar4 + (long)plVar10 * 8);
              **(long **)(lVar4 + (long)plVar10 * 8) = (long)plVar8;
              plVar9 = plVar11;
            }
          }
          plVar11 = plVar9;
          plVar8 = (long *)*plVar9;
        }
      }
    }
    return plVar5;
  }
  if (param_2 < plVar11) {
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar11 < (long *)0x3) || (((ulong)plVar11 & (long)plVar11 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (param_2 < plVar11) goto LAB_104c4fa00;
  }
  return plVar5;
}



/* Entry: 104c4fa88; end: 104c4fbc3;  */

ulong FUN_104c4fa88(ulong *param_1,ulong *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  
  if (param_2 == (ulong *)0x0) {
    uVar4 = *param_1;
    *param_1 = 0;
    if (uVar4 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      bVar1 = *(byte *)((long)param_2 + 0x17);
      uVar4 = param_2[1];
      if (-1 < (char)bVar1) {
        uVar4 = (ulong)bVar1;
      }
      bVar2 = *(byte *)((long)param_3 + 0x17);
      uVar3 = param_3[1];
      if (-1 < (char)bVar2) {
        uVar3 = (ulong)bVar2;
      }
      if (uVar4 == uVar3) {
        puVar5 = (ulong *)*param_2;
        if (-1 < (char)bVar1) {
          puVar5 = param_2;
        }
        plVar6 = (long *)*param_3;
        if (-1 < (char)bVar2) {
          plVar6 = param_3;
        }
        _memcmp(puVar5,plVar6,uVar4);
        return (ulong)((int)puVar5 == 0);
      }
      return 0;
    }
    uVar3 = (long)param_2 << 3;
    __Znwm();
    uVar4 = *param_1;
    *param_1 = uVar3;
    if (uVar4 != 0) {
      __ZdlPv();
    }
    puVar5 = (ulong *)0x0;
    param_1[1] = (ulong)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar5 * 8) = 0;
      puVar5 = (ulong *)((long)puVar5 + 1);
    } while (param_2 != puVar5);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      puVar5 = (ulong *)plVar6[1];
      uVar3 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar3) == 0) {
        puVar5 = (ulong *)((ulong)puVar5 & uVar3);
      }
      else if (param_2 <= puVar5) {
        uVar10 = 0;
        if (param_2 != (ulong *)0x0) {
          uVar10 = (ulong)puVar5 / (ulong)param_2;
        }
        puVar5 = (ulong *)((long)puVar5 - uVar10 * (long)param_2);
      }
      *(ulong **)(*param_1 + (long)puVar5 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        puVar9 = (ulong *)plVar7[1];
        if (((ulong)param_2 & uVar3) == 0) {
          puVar9 = (ulong *)((ulong)puVar9 & uVar3);
        }
        else if (param_2 <= puVar9) {
          uVar10 = 0;
          if (param_2 != (ulong *)0x0) {
            uVar10 = (ulong)puVar9 / (ulong)param_2;
          }
          puVar9 = (ulong *)((long)puVar9 - uVar10 * (long)param_2);
        }
        plVar8 = plVar7;
        if (puVar9 != puVar5) {
          uVar10 = *param_1;
          if (*(long *)(uVar10 + (long)puVar9 * 8) == 0) {
            *(long **)(uVar10 + (long)puVar9 * 8) = plVar6;
            puVar5 = puVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(uVar10 + (long)puVar9 * 8);
            **(long **)(uVar10 + (long)puVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return uVar4;
}



/* Entry: 104c4fbc4; end: 104c4fc33;  */

bool FUN_104c4fbc4(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  bVar4 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_3 + 0x17);
  uVar2 = param_3[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*param_2;
    if (-1 < (char)bVar4) {
      plVar6 = param_2;
    }
    plVar3 = (long *)*param_3;
    if (-1 < (char)bVar5) {
      plVar3 = param_3;
    }
    _memcmp(plVar6,plVar3,uVar1);
    return (int)plVar6 == 0;
  }
  return false;
}



/* Entry: 104c4fc34; end: 104c4fcc3;  */

undefined8 * FUN_104c4fc34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000100033dac(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000100033dac(param_1 + 3,param_2[3],param_2[4]);
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



/* Entry: 104c4fcc4; end: 104c4fe4f;  */

void FUN_104c4fcc4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000100837bcc(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}


