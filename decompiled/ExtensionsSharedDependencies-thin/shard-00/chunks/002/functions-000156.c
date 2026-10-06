/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003d61b4; end: 003d61b7;  */

long * FUN_003d61b4(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar2 = param_1[2];
    plVar6 = (long *)param_1[3];
    param_1[3] = 0;
    if (*(long *)(lVar5 + 0x68) == lVar2) {
      plVar1 = (long *)(lVar5 + 0x68);
      do {
        if (*plVar1 != lVar2) {
          ClearExclusiveLocal();
          goto LAB_003d6174;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (plVar6 != (long *)0x0) {
        (**(code **)*plVar6)();
      }
    }
    else {
LAB_003d6174:
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  plVar6 = (long *)param_1[1];
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
  return param_1;
}



/* Entry: 003d61b8; end: 003d6263;  */

void FUN_003d61b8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_48 [32];
  char cStack_28;
  
  plVar1 = param_1 + 2;
  do {
    puVar4 = (undefined8 *)*plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4 != (undefined8 *)0x0) {
    auStack_48[0] = 0;
    cStack_28 = '\0';
    (**(code **)*puVar4)(puVar4,auStack_48);
    if (cStack_28 != '\0') {
      FUN_003d6114(auStack_48);
    }
  }
  plVar1 = param_1 + 1;
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0 && param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return;
}



/* Entry: 003d6264; end: 003d62f3;  */

void FUN_003d6264(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  char cStack_30;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    puVar4 = (undefined8 *)*plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4 != (undefined8 *)0x0) {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    uStack_40 = param_2[2];
    uStack_38 = param_2[3];
    param_2[3] = 0;
    cStack_30 = '\x01';
    (**(code **)*puVar4)(puVar4,&uStack_50);
    if (cStack_30 != '\0') {
      FUN_003d6114(&uStack_50);
    }
  }
  return;
}



/* Entry: 003d62f4; end: 003d638f;  */

void FUN_003d62f4(long *param_1,undefined8 *param_2)

{
  dword *pdVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar3 = *param_2;
  *param_2 = 0;
  *(undefined8 *)pdVar1 = 0;
  *(undefined8 *)(pdVar1 + 2) = uVar3;
  lVar4 = lVar4 + 0x40;
  FUN_0033b3a0(lVar4,pdVar1);
  if ((int)lVar4 != 0) {
    lVar4 = *param_1;
    func_0x00339d8c(lVar4);
    puVar2 = *(undefined8 **)(*param_1 + 0x90);
    *(undefined8 *)(*param_1 + 0x90) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)();
    }
    func_0x00339da8(lVar4);
  }
  return;
}



/* Entry: 003d6390; end: 003d644f;  */

void FUN_003d6390(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined1 uStack_21;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00339d8c(uVar2);
  do {
    uStack_21 = 0;
    lVar1 = *(long *)(param_1 + 8) + 0x40;
    FUN_0033b3e4(lVar1,&uStack_21);
    lStack_30 = lVar1;
    if (lVar1 == 0) {
LAB_003d63fc:
      func_0x003d79e4(&lStack_30,0);
      func_0x00339da8(uVar2);
      return;
    }
    if (*(long *)(*(long *)(lVar1 + 8) + 0x10) != 0) {
      lStack_30 = 0;
      FUN_0033b3a0(*(long *)(param_1 + 8) + 0x40);
      goto LAB_003d63fc;
    }
    func_0x003d79e4(&lStack_30,0);
  } while( true );
}



/* Entry: 003d6450; end: 003d6483;  */

undefined8 FUN_003d6450(undefined8 param_1)

{
  undefined1 uStack_21;
  
  FUN_003d7a48(param_1,&uStack_21);
  return param_1;
}



/* Entry: 003d6484; end: 003d6487;  */

long FUN_003d6484(long param_1)

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



/* Entry: 003d6488; end: 003d65a3;  */

void FUN_003d6488(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  long *plStack_48;
  undefined8 *puStack_40;
  char cStack_31;
  
  lVar4 = *param_2;
  func_0x00339d8c(lVar4);
  cStack_31 = '\0';
  puVar1 = (undefined8 *)(*param_2 + 0x40);
  FUN_0033b3e4(puVar1,&cStack_31);
  puStack_40 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    if (cStack_31 == '\0') {
      FUN_003d3424();
      (**(code **)(*(long *)*puVar1 + 0x18))();
    }
    else {
      FUN_003d3424();
      (**(code **)(*(long *)*puVar1 + 0x28))(&plStack_48);
      plVar2 = *(long **)(*param_2 + 0x90);
      *(long **)(*param_2 + 0x90) = plStack_48;
      plStack_48 = plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    uVar3 = 0;
  }
  else {
    *param_1 = puVar1[1];
    puVar1[1] = 0;
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 1) = uVar3;
  func_0x003d79e4(&puStack_40,0);
  func_0x00339da8(lVar4);
  return;
}



/* Entry: 003d65a4; end: 003d66f7;  */

undefined8 * FUN_003d65a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e07c0;
  lVar4 = param_2[1];
  param_1[3] = *param_2;
  param_1[4] = lVar4;
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
  param_1[6] = 0xc0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_00339d50(param_1 + 8);
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  uVar8 = param_3[1];
  uVar7 = *param_3;
  param_1[0x17] = param_3[2];
  param_1[0x16] = uVar8;
  param_1[0x15] = uVar7;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  lVar4 = param_1[3];
  lVar5 = param_1[6];
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 - lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((-1 < lVar6) && (lVar6 < lVar5)) && (*(long *)(lVar4 + 0x60) != 0)) {
      FUN_003d7660();
    }
  }
  return param_1;
}



/* Entry: 003d66f8; end: 003d67e3;  */

long FUN_003d66f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x28) + 0xc0 == *(long *)(param_1 + 0x30)) {
    lVar5 = *(long *)(param_1 + 0x30);
    plVar1 = (long *)(*(long *)(param_1 + 0x18) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*(char *)(param_1 + 0xbf) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xa8));
    }
    lVar5 = 0xa0;
    do {
      FUN_0038aa60(param_1 + lVar5,0);
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0x80);
    func_0x00339d70(param_1 + 0x40);
    FUN_003d798c((long *)(param_1 + 0x18));
    if (*(long *)(param_1 + 0x10) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
               ,0xa8,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x3d67dc);
  (*pcVar4)();
}



/* Entry: 003d67e4; end: 003d67e7;  */

long FUN_003d67e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x28) + 0xc0 == *(long *)(param_1 + 0x30)) {
    lVar5 = *(long *)(param_1 + 0x30);
    plVar1 = (long *)(*(long *)(param_1 + 0x18) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*(char *)(param_1 + 0xbf) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xa8));
    }
    lVar5 = 0xa0;
    do {
      FUN_0038aa60(param_1 + lVar5,0);
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0x80);
    func_0x00339d70(param_1 + 0x40);
    FUN_003d798c((long *)(param_1 + 0x18));
    if (*(long *)(param_1 + 0x10) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
               ,0xa8,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x3d67dc);
  (*pcVar4)();
}



/* Entry: 003d67e8; end: 003d67fb;  */

void FUN_003d67e8(void)

{
  FUN_003d66f8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003d67fc; end: 003d69b3;  */

long * FUN_003d67fc(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uStack_80;
  long *plStack_78;
  long alStack_70 [5];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  alStack_70[1] = 0;
  alStack_70[0] = 0;
  alStack_70[3] = 0;
  alStack_70[2] = 0;
  func_0x00339d8c(param_1 + 0x40);
  if (*(char *)(param_1 + 0x80) != '\0') {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
                 ,0xb2,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x3d6954);
    (*pcVar6)();
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
  FUN_003d69b4(&uStack_80,param_1 + 0x18);
  lVar11 = 0;
  do {
    puVar2 = (undefined8 *)(param_1 + 0x88 + lVar11);
    uVar9 = *puVar2;
    *puVar2 = 0;
    FUN_0038aa60(puVar2,0);
    FUN_0038aa60((long)alStack_70 + lVar11,uVar9);
    lVar11 = lVar11 + 8;
  } while (lVar11 != 0x20);
  func_0x00339da8(param_1 + 0x40);
  lVar11 = 0x18;
  do {
    plVar7 = (long *)((long)alStack_70 + lVar11);
    plVar8 = (long *)0x0;
    FUN_0038aa60();
    plVar10 = plStack_78;
    lVar11 = lVar11 + -8;
  } while (lVar11 != -8);
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar7 = plVar10;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return plVar7;
  }
  ___stack_chk_fail();
  if ((int)plVar8 == 0) {
    __Unwind_Resume(plVar7);
  }
  func_0x0040cf10();
  lVar11 = *plVar8;
  lVar3 = plVar8[1];
  if (lVar3 != 0) {
    plVar10 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = (long *)plVar7[1];
  *plVar7 = lVar11;
  plVar7[1] = lVar3;
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 1;
    do {
      lVar11 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return plVar7;
}



/* Entry: 003d69b4; end: 003d6a2b;  */

undefined8 * FUN_003d69b4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  uVar2 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = (long *)param_1[1];
  *param_1 = uVar2;
  param_1[1] = lVar5;
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
  return param_1;
}



/* Entry: 003d6a2c; end: 003d6a97;  */

undefined1  [16] FUN_003d6a2c(long param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_3 < param_2) {
    func_0x0077492c();
  }
  else if (param_3 < 0x40000001) {
    while (lVar4 = param_1, uVar7 = param_2, FUN_003d6a98(param_1,param_2,param_3),
          (uVar7 & 0xff) == 0) {
      FUN_003d6bac(param_1);
    }
    auVar11._8_8_ = uVar7;
    auVar11._0_8_ = lVar4;
    return auVar11;
  }
  func_0x00774960();
  param_3 = param_3 - param_2;
  uVar7 = param_3;
  if (param_3 == 0) goto LAB_003d6b48;
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x10);
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x18);
  if (uVar6 == 0) {
    uVar6 = 1;
    dVar9 = 1.0;
LAB_003d6b08:
    uVar7 = (ulong)(((1.0 - dVar9) * (double)param_3) / 0.2);
    if (uVar7 <= param_3) {
      param_3 = uVar7;
    }
  }
  else {
    dVar9 = ((double)uVar6 - (double)(long)(uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU))) /
            (double)uVar6;
    dVar10 = 0.0;
    if (0.0 <= dVar9) {
      dVar10 = dVar9;
    }
    dVar9 = 1.0;
    if (dVar10 <= 1.0) {
      dVar9 = dVar10;
    }
    uVar6 = uVar6 >> 4;
    if (0.8 < dVar9) goto LAB_003d6b08;
  }
  if (uVar6 < param_2) {
    uVar7 = 0;
  }
  else {
    uVar7 = uVar6 - param_2;
    if (param_3 + param_2 <= uVar6) {
      uVar7 = param_3;
    }
  }
LAB_003d6b48:
  uVar7 = uVar7 + param_2;
  puVar1 = (ulong *)(param_1 + 0x28);
  if (uVar7 <= *puVar1) {
    uVar5 = 1;
    uVar6 = *puVar1;
    do {
      uVar8 = *puVar1;
      if (uVar8 == uVar6) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - uVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_003d6ba4;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar6 = uVar8;
    } while (uVar7 <= uVar8);
  }
  uVar5 = 0;
  uVar7 = 0;
LAB_003d6ba4:
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = uVar7;
  return auVar12;
}



/* Entry: 003d6a98; end: 003d6bab;  */

undefined1  [16] FUN_003d6a98(long param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  
  uVar5 = param_3 - param_2;
  uVar7 = uVar5;
  if (uVar5 == 0) goto LAB_003d6b48;
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x10);
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x18);
  if (uVar6 == 0) {
    uVar6 = 1;
    dVar8 = 1.0;
LAB_003d6b08:
    uVar7 = (ulong)(((1.0 - dVar8) * (double)uVar5) / 0.2);
    if (uVar7 <= uVar5) {
      uVar5 = uVar7;
    }
  }
  else {
    dVar8 = ((double)uVar6 - (double)(long)(uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU))) /
            (double)uVar6;
    dVar9 = 0.0;
    if (0.0 <= dVar8) {
      dVar9 = dVar8;
    }
    dVar8 = 1.0;
    if (dVar9 <= 1.0) {
      dVar8 = dVar9;
    }
    uVar6 = uVar6 >> 4;
    if (0.8 < dVar8) goto LAB_003d6b08;
  }
  if (uVar6 < param_2) {
    uVar7 = 0;
  }
  else {
    uVar7 = uVar6 - param_2;
    if (uVar5 + param_2 <= uVar6) {
      uVar7 = uVar5;
    }
  }
LAB_003d6b48:
  uVar7 = uVar7 + param_2;
  puVar1 = (ulong *)(param_1 + 0x28);
  if (uVar7 <= *puVar1) {
    uVar4 = 1;
    uVar5 = *puVar1;
    do {
      uVar6 = *puVar1;
      if (uVar6 == uVar5) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - uVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_003d6ba4;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar5 = uVar6;
    } while (uVar7 <= uVar6);
  }
  uVar4 = 0;
  uVar7 = 0;
LAB_003d6ba4:
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = uVar7;
  return auVar10;
}



/* Entry: 003d6bac; end: 003d6c4b;  */

void FUN_003d6bac(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  dword *pdVar5;
  qword qVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  dword *pdVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  qword qStack_88;
  long *plStack_80;
  dword *pdStack_78;
  dword *pdStack_70;
  qword qStack_68;
  
  uVar13 = (ulong)*(undefined **)(param_1 + 0x30) / 3;
  if (0xfffff < uVar13) {
    uVar13 = 0x100000;
  }
  uVar4 = 0x1000;
  if (&UNK_00002fff < *(undefined **)(param_1 + 0x30)) {
    uVar4 = uVar13;
  }
  if (uVar4 != 0) {
    lVar12 = *(long *)(param_1 + 0x18);
    puVar1 = (ulong *)(lVar12 + 0x10);
    do {
      uVar13 = *puVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar9) {
        *puVar1 = uVar13 - uVar4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((uVar13 < uVar4) && (*(long *)(lVar12 + 0x60) != 0)) {
      FUN_003d7660();
    }
  }
  plVar2 = (long *)(param_1 + 0x30);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = *plVar2 + uVar4;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  plVar2 = (long *)(param_1 + 0x28);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *plVar2 = *plVar2 + uVar4;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  pbVar3 = (byte *)(param_1 + 0x38);
  do {
    bVar7 = *pbVar3;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(pbVar3,0x10);
    if (bVar9) {
      *pbVar3 = 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((bVar7 & 1) == 0) {
    func_0x00339d8c(param_1 + 0x40);
    if (*(char *)(param_1 + 0x80) == '\0') {
      FUN_003d7c14(&qStack_88,param_1 + 8);
      plVar2 = plStack_80;
      if (plStack_80 == (long *)0x0) {
        *pbVar3 = 1;
      }
      else {
        plVar14 = plStack_80 + 2;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = *plVar14 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        *pbVar3 = 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = *plVar14 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      lVar12 = *(long *)(param_1 + 0x18);
      pdVar10 = &MACH_HEADER.flags;
      __Znwm();
      pdVar5 = *(dword **)(lVar12 + 0x20);
      qVar6 = *(qword *)(lVar12 + 0x28);
      if (qVar6 != 0) {
        plVar14 = (long *)(qVar6 + 8);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = *plVar14 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      plVar14 = (long *)(pdVar10 + 2);
      *plVar14 = 1;
      *(undefined ***)pdVar10 = &PTR_FUN_009e07f8;
      pcVar11 = segment_command_00000020.segname;
      pdStack_70 = pdVar5;
      qStack_68 = qVar6;
      __Znwm();
      *(undefined ***)pcVar11 = &PTR_FUN_009e0940;
      *(dword **)(pcVar11 + 8) = pdVar5;
      *(qword *)(pcVar11 + 0x10) = qVar6;
      *(qword *)(pcVar11 + 0x18) = qStack_88;
      *(long **)(pcVar11 + 0x20) = plVar2;
      *(char **)(pdVar10 + 4) = pcVar11;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar9) {
          *plVar14 = *plVar14 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      pdStack_78 = pdVar10;
      pdStack_70 = pdVar10;
      FUN_003d62f4(lVar12 + 0x20,&pdStack_70);
      if (pdStack_70 != (dword *)0x0) {
        plVar14 = (long *)(pdStack_70 + 2);
        do {
          lVar12 = *plVar14;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(*(long *)pdStack_70 + 0x10))();
        }
      }
      FUN_0038aa60(param_1 + 0x88,pdStack_78);
      if (plVar2 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
      if (plStack_80 != (long *)0x0) {
        plVar2 = plStack_80 + 1;
        do {
          lVar12 = *plVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
        }
      }
    }
    func_0x00339da8(param_1 + 0x40);
  }
  return;
}



/* Entry: 003d6c4c; end: 003d6ca3;  */

undefined1  [16] FUN_003d6c4c(long param_1)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (uVar1 != 0) {
    dVar2 = ((double)uVar1 -
            (double)(long)(*(ulong *)(param_1 + 0x10) &
                          ((long)*(ulong *)(param_1 + 0x10) >> 0x3f ^ 0xffffffffffffffffU))) /
            (double)uVar1;
    dVar3 = 0.0;
    if (0.0 <= dVar2) {
      dVar3 = dVar2;
    }
    dVar2 = 1.0;
    if (dVar3 <= 1.0) {
      dVar2 = dVar3;
    }
    auVar4._8_8_ = uVar1 >> 4;
    auVar4._0_8_ = dVar2;
    return auVar4;
  }
  auVar5._8_8_ = 1;
  auVar5._0_8_ = 0x3ff0000000000000;
  return auVar5;
}



/* Entry: 003d6ca4; end: 003d6d43;  */

void FUN_003d6ca4(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  byte *pbVar3;
  dword *pdVar4;
  qword qVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  dword *pdVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  qword qStack_98;
  long *plStack_90;
  dword *pdStack_88;
  dword *pdStack_80;
  qword qStack_78;
  
  if (0x80000 < *(ulong *)(param_1 + 0x28)) {
    puVar1 = (ulong *)(param_1 + 0x28);
    uVar11 = *(ulong *)(param_1 + 0x28);
    do {
      uVar12 = *puVar1;
      if (uVar12 == uVar11) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = 0x80000;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          uVar11 = uVar11 - 0x80000;
          puVar1 = (ulong *)(param_1 + 0x30);
          do {
            uVar12 = *puVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar8) {
              *puVar1 = uVar12 - uVar11;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (uVar11 <= uVar12) {
            plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x10);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = *plVar2 + uVar11;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            return;
          }
          func_0x00774994();
          pbVar3 = (byte *)(param_1 + 0x38);
          do {
            bVar6 = *pbVar3;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pbVar3,0x10);
            if (bVar8) {
              *pbVar3 = 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((bVar6 & 1) == 0) {
            func_0x00339d8c(param_1 + 0x40);
            if (*(char *)(param_1 + 0x80) == '\0') {
              FUN_003d7c14(&qStack_98,param_1 + 8);
              plVar2 = plStack_90;
              if (plStack_90 == (long *)0x0) {
                *pbVar3 = 1;
              }
              else {
                plVar14 = plStack_90 + 2;
                do {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar8) {
                    *plVar14 = *plVar14 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                *pbVar3 = 1;
                do {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar8) {
                    *plVar14 = *plVar14 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              lVar13 = *(long *)(param_1 + 0x18);
              pdVar9 = &MACH_HEADER.flags;
              __Znwm();
              pdVar4 = *(dword **)(lVar13 + 0x20);
              qVar5 = *(qword *)(lVar13 + 0x28);
              if (qVar5 != 0) {
                plVar14 = (long *)(qVar5 + 8);
                do {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar8) {
                    *plVar14 = *plVar14 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              plVar14 = (long *)(pdVar9 + 2);
              *plVar14 = 1;
              *(undefined ***)pdVar9 = &PTR_FUN_009e07f8;
              pcVar10 = segment_command_00000020.segname;
              pdStack_80 = pdVar4;
              qStack_78 = qVar5;
              __Znwm();
              *(undefined ***)pcVar10 = &PTR_FUN_009e0940;
              *(dword **)(pcVar10 + 8) = pdVar4;
              *(qword *)(pcVar10 + 0x10) = qVar5;
              *(qword *)(pcVar10 + 0x18) = qStack_98;
              *(long **)(pcVar10 + 0x20) = plVar2;
              *(char **)(pdVar9 + 4) = pcVar10;
              do {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar8) {
                  *plVar14 = *plVar14 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              pdStack_88 = pdVar9;
              pdStack_80 = pdVar9;
              FUN_003d62f4(lVar13 + 0x20,&pdStack_80);
              if (pdStack_80 != (dword *)0x0) {
                plVar14 = (long *)(pdStack_80 + 2);
                do {
                  lVar13 = *plVar14;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar8) {
                    *plVar14 = lVar13 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (lVar13 + -1 == 0) {
                  (**(code **)(*(long *)pdStack_80 + 0x10))();
                }
              }
              FUN_0038aa60(param_1 + 0x88,pdStack_88);
              if (plVar2 != (long *)0x0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
              }
              if (plStack_90 != (long *)0x0) {
                plVar2 = plStack_90 + 1;
                do {
                  lVar13 = *plVar2;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar8) {
                    *plVar2 = lVar13 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (lVar13 == 0) {
                  (**(code **)(*plStack_90 + 0x10))(plStack_90);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
                }
              }
            }
            func_0x00339da8(param_1 + 0x40);
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar11 = uVar12;
    } while (0x80000 < uVar12);
  }
  return;
}



/* Entry: 003d6d44; end: 003d6fa3;  */

void FUN_003d6d44(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  dword *pdVar3;
  qword qVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  dword *pdVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  qword qStack_88;
  long *plStack_80;
  dword *pdStack_78;
  dword *pdStack_70;
  qword qStack_68;
  
  pbVar1 = (byte *)(param_1 + 0x38);
  do {
    bVar5 = *pbVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((bVar5 & 1) == 0) {
    func_0x00339d8c(param_1 + 0x40);
    if (*(char *)(param_1 + 0x80) == '\0') {
      FUN_003d7c14(&qStack_88,param_1 + 8);
      plVar2 = plStack_80;
      if (plStack_80 == (long *)0x0) {
        *pbVar1 = 1;
      }
      else {
        plVar11 = plStack_80 + 2;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *plVar11 = *plVar11 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        *pbVar1 = 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *plVar11 = *plVar11 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      lVar10 = *(long *)(param_1 + 0x18);
      pdVar8 = &MACH_HEADER.flags;
      __Znwm();
      pdVar3 = *(dword **)(lVar10 + 0x20);
      qVar4 = *(qword *)(lVar10 + 0x28);
      if (qVar4 != 0) {
        plVar11 = (long *)(qVar4 + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *plVar11 = *plVar11 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      plVar11 = (long *)(pdVar8 + 2);
      *plVar11 = 1;
      *(undefined ***)pdVar8 = &PTR_FUN_009e07f8;
      pcVar9 = segment_command_00000020.segname;
      pdStack_70 = pdVar3;
      qStack_68 = qVar4;
      __Znwm();
      *(undefined ***)pcVar9 = &PTR_FUN_009e0940;
      *(dword **)(pcVar9 + 8) = pdVar3;
      *(qword *)(pcVar9 + 0x10) = qVar4;
      *(qword *)(pcVar9 + 0x18) = qStack_88;
      *(long **)(pcVar9 + 0x20) = plVar2;
      *(char **)(pdVar8 + 4) = pcVar9;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar7) {
          *plVar11 = *plVar11 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      pdStack_78 = pdVar8;
      pdStack_70 = pdVar8;
      FUN_003d62f4(lVar10 + 0x20,&pdStack_70);
      if (pdStack_70 != (dword *)0x0) {
        plVar11 = (long *)(pdStack_70 + 2);
        do {
          lVar10 = *plVar11;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *plVar11 = lVar10 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*(long *)pdStack_70 + 0x10))();
        }
      }
      FUN_0038aa60(param_1 + 0x88,pdStack_78);
      if (plVar2 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
      if (plStack_80 != (long *)0x0) {
        plVar2 = plStack_80 + 1;
        do {
          lVar10 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar10 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
        }
      }
    }
    func_0x00339da8(param_1 + 0x40);
  }
  return;
}



/* Entry: 003d6fa4; end: 003d75ef;  */

void FUN_003d6fa4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  int iVar16;
  dword *pdVar17;
  dword *pdVar18;
  undefined8 *puVar19;
  undefined8 extraout_x8;
  long lVar20;
  long extraout_x10;
  undefined8 uVar21;
  dword *pdVar22;
  undefined1 auStack_5b0 [8];
  undefined8 uStack_5a8;
  long *plStack_5a0;
  undefined8 uStack_598;
  long *plStack_590;
  undefined8 uStack_568;
  long *plStack_560;
  undefined1 auStack_558 [8];
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined1 auStack_500 [8];
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 auStack_4a8 [8];
  undefined8 uStack_4a0;
  long *plStack_498;
  undefined8 uStack_490;
  long *plStack_488;
  undefined8 uStack_460;
  long *plStack_458;
  undefined1 auStack_450 [8];
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long *plStack_3f0;
  undefined1 auStack_3e8 [8];
  undefined8 uStack_3e0;
  long *plStack_3d8;
  undefined8 uStack_3d0;
  long *plStack_3c8;
  undefined8 uStack_3a0;
  long *plStack_398;
  undefined1 auStack_390 [8];
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 auStack_338 [8];
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [8];
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [8];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [8];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  char cStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [8];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong auStack_118 [9];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [72];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x003d7dc0(&uStack_3f8,param_1);
  if (plStack_3f0 == (long *)0x0) {
    plStack_488 = (long *)0x0;
  }
  else {
    plVar1 = plStack_3f0 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_488 = plStack_3f0;
    if (plStack_3f0 != (long *)0x0) {
      plVar1 = plStack_3f0 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_458 = plStack_3f0;
      if (plStack_3f0 != (long *)0x0) {
        plVar1 = plStack_3f0 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      goto LAB_003d7044;
    }
  }
  plStack_458 = (long *)0x0;
LAB_003d7044:
  auStack_500[0] = 0;
  auStack_1c8[0] = 0;
  uStack_4b8 = 0;
  uStack_4b0 = 0;
  uStack_4f0 = 0;
  uStack_4f8 = 0;
  uStack_4e0 = 0;
  uStack_4e8 = 0;
  auStack_118[0] = auStack_118[0] & 0xffffffffffffff00;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  auStack_4a8[0] = 0;
  uStack_460 = uStack_3f8;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_4a0 = uStack_3f8;
  plStack_498 = plStack_3f0;
  auStack_118[2] = 0;
  auStack_118[1] = 0;
  uStack_490 = uStack_3f8;
  auStack_118[4] = 0;
  auStack_118[3] = 0;
  FUN_003d75f0(auStack_118);
  FUN_003d7e00(auStack_4a8);
  FUN_003d75f0(auStack_1c8);
  FUN_003d75f0(auStack_500);
  uVar14 = uStack_400;
  uVar13 = uStack_408;
  uVar12 = uStack_430;
  uVar11 = uStack_438;
  uVar10 = uStack_440;
  uVar9 = uStack_448;
  plVar8 = plStack_458;
  uVar7 = uStack_460;
  plVar6 = plStack_488;
  uVar5 = uStack_490;
  plVar1 = plStack_498;
  uVar4 = uStack_4a0;
  auStack_5b0[0] = 0;
  uStack_568 = uStack_460;
  plStack_560 = plStack_458;
  uStack_460 = 0;
  plStack_458 = (long *)0x0;
  uStack_5a8 = uStack_4a0;
  plStack_5a0 = plStack_498;
  uStack_4a0 = 0;
  plStack_498 = (long *)0x0;
  uStack_598 = uStack_490;
  plStack_590 = plStack_488;
  uStack_490 = 0;
  plStack_488 = (long *)0x0;
  auStack_558[0] = 0;
  uStack_510 = uStack_408;
  uStack_508 = uStack_400;
  uStack_400 = 0;
  uStack_408 = 0;
  uStack_550 = uStack_448;
  uStack_548 = uStack_440;
  uStack_448 = 0;
  uStack_440 = 0;
  uStack_540 = uStack_438;
  uStack_538 = uStack_430;
  uStack_438 = 0;
  uStack_430 = 0;
  pdVar17 = &section_00000108.offset;
  __Znwm();
  auStack_3e8[0] = 0;
  uStack_3a0 = uVar7;
  plStack_398 = plVar8;
  uStack_568 = 0;
  plStack_560 = (long *)0x0;
  uStack_3e0 = uVar4;
  plStack_3d8 = plVar1;
  uStack_5a8 = 0;
  plStack_5a0 = (long *)0x0;
  uStack_3d0 = uVar5;
  plStack_3c8 = plVar6;
  uStack_598 = 0;
  plStack_590 = (long *)0x0;
  auStack_390[0] = 0;
  uStack_348 = uVar13;
  uStack_340 = uVar14;
  uStack_510 = 0;
  uStack_508 = 0;
  uStack_388 = uVar9;
  uStack_380 = uVar10;
  uStack_550 = 0;
  uStack_548 = 0;
  uStack_378 = uVar11;
  uStack_370 = uVar12;
  uStack_540 = 0;
  uStack_538 = 0;
  pdVar22 = pdVar17 + 4;
  *(undefined8 *)(pdVar17 + 6) = 0;
  *(undefined8 *)pdVar22 = 0;
  *(undefined8 *)(pdVar17 + 0x12) = 0;
  *(undefined8 *)(pdVar17 + 0x10) = 0;
  *(undefined8 *)(pdVar17 + 0x16) = 0;
  *(undefined8 *)(pdVar17 + 0x14) = 0;
  *(undefined8 *)(pdVar17 + 10) = 0;
  *(undefined8 *)(pdVar17 + 8) = 0;
  *(undefined8 *)(pdVar17 + 0xe) = 0;
  *(undefined8 *)(pdVar17 + 0xc) = 0;
  *(undefined ***)pdVar17 = &PTR_FUN_009e0558;
  *(undefined ***)(pdVar17 + 2) = &PTR____cxa_pure_virtual_009e05a0;
  FUN_00339d50(pdVar22);
  pdVar17[0x14] = 1;
  *(undefined1 *)(pdVar17 + 0x15) = 0;
  *(undefined8 *)(pdVar17 + 0x16) = 0;
  *(undefined ***)pdVar17 = &PTR_FUN_009e0970;
  *(undefined ***)(pdVar17 + 2) = &PTR_DAT_009e09c8;
  *(undefined8 *)(pdVar17 + 0x1a) = 0;
  *(undefined8 *)(pdVar17 + 0x18) = 0;
  *(undefined8 *)(pdVar17 + 0x1e) = 0;
  *(undefined8 *)(pdVar17 + 0x1c) = 0;
  *(undefined2 *)(pdVar17 + 0x20) = 0;
  pdVar18 = pdVar22;
  func_0x00339d8c();
  uVar14 = uStack_340;
  uVar13 = uStack_348;
  uVar12 = uStack_370;
  uVar11 = uStack_378;
  uVar10 = uStack_380;
  uVar9 = uStack_388;
  plVar8 = plStack_398;
  uVar7 = uStack_3a0;
  plVar6 = plStack_3c8;
  uVar5 = uStack_3d0;
  plVar1 = plStack_3d8;
  uVar4 = uStack_3e0;
  auStack_338[0] = 0;
  uStack_3a0 = 0;
  plStack_398 = (long *)0x0;
  uStack_3e0 = 0;
  plStack_3d8 = (long *)0x0;
  uStack_3d0 = 0;
  plStack_3c8 = (long *)0x0;
  auStack_2e0[0] = 0;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  uStack_370 = 0;
  auStack_288[0] = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  auStack_230[0] = 0;
  uStack_290 = 0;
  uStack_298 = 0;
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_2c0 = 0;
  uStack_2c8 = 0;
  FUN_003d3424(auStack_c0);
  uVar21 = *(undefined8 *)pdVar18;
  FUN_003d3424();
  *(dword **)pdVar18 = pdVar17;
  auStack_118[0] = auStack_118[0] & 0xffffffffffffff00;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  auStack_c0[0] = 0;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_220 = 0;
  uStack_228 = 0;
  uStack_210 = 0;
  uStack_218 = 0;
  auStack_1c8[0] = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  *(undefined8 *)(extraout_x10 + 0x10) = 0;
  *(undefined8 *)(extraout_x10 + 8) = 0;
  *(undefined8 *)(extraout_x10 + 0x20) = 0;
  *(undefined8 *)(extraout_x10 + 0x18) = 0;
  auStack_170[0] = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  *(undefined8 *)(extraout_x10 + 0x68) = 0;
  *(undefined8 *)(extraout_x10 + 0x60) = 0;
  *(undefined8 *)(extraout_x10 + 0x78) = 0;
  *(undefined8 *)(extraout_x10 + 0x70) = 0;
  FUN_003d75f0(extraout_x8);
  FUN_003d75f0(auStack_118);
  *(undefined1 *)(pdVar17 + 0x22) = 0;
  *(long **)(pdVar17 + 0x36) = plVar8;
  *(undefined8 *)(pdVar17 + 0x34) = uVar7;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  *(long **)(pdVar17 + 0x26) = plVar1;
  *(undefined8 *)(pdVar17 + 0x24) = uVar4;
  *(long **)(pdVar17 + 0x2a) = plVar6;
  *(undefined8 *)(pdVar17 + 0x28) = uVar5;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  *(undefined1 *)(pdVar17 + 0x38) = 0;
  *(undefined8 *)(pdVar17 + 0x4c) = uVar14;
  *(undefined8 *)(pdVar17 + 0x4a) = uVar13;
  uStack_120 = 0;
  uStack_128 = 0;
  *(undefined8 *)(pdVar17 + 0x3c) = uVar10;
  *(undefined8 *)(pdVar17 + 0x3a) = uVar9;
  uStack_168 = 0;
  uStack_160 = 0;
  *(undefined8 *)(pdVar17 + 0x40) = uVar12;
  *(undefined8 *)(pdVar17 + 0x3e) = uVar11;
  uStack_150 = 0;
  uStack_158 = 0;
  FUN_003d75f0(auStack_170);
  FUN_003d75f0(auStack_1c8);
  pdVar18 = pdVar17;
  FUN_003d81a8(&uStack_1d8);
  FUN_003d3424();
  *(undefined8 *)pdVar18 = uVar21;
  FUN_003d75f0(auStack_230);
  FUN_003d75f0(auStack_288);
  FUN_003d75f0(auStack_2e0);
  FUN_003d75f0(auStack_338);
  func_0x00339da8(pdVar22);
  if (cStack_1d0 != '\0') {
    auStack_118[0] = uStack_1d8;
    uStack_1d8 = 0x36;
    iVar16 = (int)auStack_118;
    FUN_00552acc();
    if (iVar16 != 1) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
                   ,0x18e,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x3d7508);
      (*pcVar15)();
    }
    if ((auStack_118[0] & 1) != 0) {
      FUN_0055293c();
    }
  }
  FUN_0033e204(&uStack_1d8);
  FUN_003d75f0(auStack_390);
  FUN_003d75f0(auStack_3e8);
  puVar19 = *(undefined8 **)(param_1 + 0x60);
  *(dword **)(param_1 + 0x60) = pdVar17;
  if (puVar19 != (undefined8 *)0x0) {
    (**(code **)*puVar19)();
  }
  FUN_003d75f0(auStack_558);
  FUN_003d75f0(auStack_5b0);
  FUN_003d75f0(auStack_450);
  FUN_003d75f0(auStack_4a8);
  if (plStack_3f0 != (long *)0x0) {
    plVar1 = plStack_3f0 + 1;
    do {
      lVar20 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar20 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_3f0 + 0x10))(plStack_3f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3f0);
    }
  }
  return;
}



/* Entry: 003d75f0; end: 003d765f;  */

undefined1 * FUN_003d75f0(undefined1 *param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  
  switch(*param_1) {
  case 0:
    FUN_003d798c(param_1 + 8);
    FUN_003d798c(param_1 + 0x18);
  case 1:
    puVar2 = param_1 + 0x48;
    break;
  case 2:
    puVar2 = param_1 + 8;
    break;
  case 3:
    goto code_r0x003d7644;
  default:
    _abort();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3d765c);
    (*pcVar1)();
  }
  FUN_003d798c(puVar2);
code_r0x003d7644:
  return param_1;
}



/* Entry: 003d7660; end: 003d76e3;  */

void FUN_003d7660(long *param_1)

{
  long *plVar1;
  long *plStack_28;
  
  (**(code **)(*param_1 + 0x20))(&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)*plVar1)();
    if (plStack_28 != (long *)0x0) {
      (**(code **)(*plStack_28 + 8))();
    }
  }
  return;
}



/* Entry: 003d76e4; end: 003d77cf;  */

void FUN_003d76e4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 **ppuVar5;
  undefined8 *extraout_x8;
  long lVar6;
  long *plVar7;
  undefined8 *apuStack_1d8 [2];
  char cStack_1c1;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1a9;
  long *plStack_1a8;
  undefined1 **ppuStack_1a0;
  char *pcStack_178;
  undefined8 uStack_170;
  long lStack_148;
  ulong uStack_140;
  long lStack_118;
  long *plStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined1 *apuStack_e8 [2];
  char cStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_b9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char *pcStack_88;
  undefined8 uStack_80;
  long lStack_58;
  ulong uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar7 = (long *)(param_2 + 8);
  lVar6 = *plVar7;
  if ((char)*(byte *)(lVar6 + 0x87) < '\0') {
    lStack_58 = *(long *)(lVar6 + 0x70);
    uStack_50 = *(ulong *)(lVar6 + 0x78);
  }
  else {
    lStack_58 = lVar6 + 0x70;
    uStack_50 = (ulong)*(byte *)(lVar6 + 0x87);
  }
  pcStack_88 = "/allocator/";
  uStack_80 = 0xb;
  uStack_b8 = param_3;
  uStack_b0 = param_4;
  FUN_00575ddc(apuStack_e8,&lStack_58,&pcStack_88,&uStack_b8);
  puVar1 = &uStack_b9;
  ppuVar5 = apuStack_e8;
  plVar4 = plVar7;
  FUN_003d8e4c(&uStack_d0);
  if (cStack_d1 < '\0') {
    puVar1 = apuStack_e8[0];
    __ZdlPv();
  }
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_d1 < '\0') {
    __ZdlPv(apuStack_e8[0]);
  }
  puVar2 = puVar1;
  __Unwind_Resume();
  pcStack_f8 = FUN_003d77d0;
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar6 = *(long *)(puVar2 + 8);
  if ((char)*(byte *)(lVar6 + 0x87) < '\0') {
    lStack_148 = *(long *)(lVar6 + 0x70);
    uStack_140 = *(ulong *)(lVar6 + 0x78);
  }
  else {
    lStack_148 = lVar6 + 0x70;
    uStack_140 = (ulong)*(byte *)(lVar6 + 0x87);
  }
  pcStack_178 = "/owner/";
  uStack_170 = 7;
  plStack_1a8 = plVar4;
  ppuStack_1a0 = ppuVar5;
  plStack_110 = plVar7;
  puStack_108 = puVar1;
  puStack_100 = &stack0xfffffffffffffff0;
  FUN_00575ddc(apuStack_1d8,&lStack_148,&pcStack_178,&plStack_1a8);
  puVar3 = (undefined8 *)&uStack_1a9;
  FUN_003d8e4c(&uStack_1c0,puVar3,puVar2 + 8,apuStack_1d8);
  if (cStack_1c1 < '\0') {
    puVar3 = apuStack_1d8[0];
    __ZdlPv();
  }
  extraout_x8[1] = uStack_1b8;
  *extraout_x8 = uStack_1c0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apuStack_1d8[0]);
  }
  __Unwind_Resume();
  *puVar3 = &PTR_FUN_009e07f8;
  return;
}



/* Entry: 003d77d0; end: 003d78bb;  */

void FUN_003d77d0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *apuStack_e8 [2];
  char cStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_b9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char *pcStack_88;
  undefined8 uStack_80;
  long lStack_58;
  ulong uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar2 = *(long *)(param_2 + 8);
  if ((char)*(byte *)(lVar2 + 0x87) < '\0') {
    lStack_58 = *(long *)(lVar2 + 0x70);
    uStack_50 = *(ulong *)(lVar2 + 0x78);
  }
  else {
    lStack_58 = lVar2 + 0x70;
    uStack_50 = (ulong)*(byte *)(lVar2 + 0x87);
  }
  pcStack_88 = "/owner/";
  uStack_80 = 7;
  uStack_b8 = param_3;
  uStack_b0 = param_4;
  FUN_00575ddc(apuStack_e8,&lStack_58,&pcStack_88,&uStack_b8);
  puVar1 = (undefined8 *)&uStack_b9;
  FUN_003d8e4c(&uStack_d0,puVar1,(long *)(param_2 + 8),apuStack_e8);
  if (cStack_d1 < '\0') {
    puVar1 = apuStack_e8[0];
    __ZdlPv();
  }
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_d1 < '\0') {
    __ZdlPv(apuStack_e8[0]);
  }
  __Unwind_Resume();
  *puVar1 = &PTR_FUN_009e07f8;
  return;
}



/* Entry: 003d78bc; end: 003d78d3;  */

void FUN_003d78bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e07f8;
  return;
}



/* Entry: 003d78d4; end: 003d78e7;  */

void FUN_003d78d4(void)

{
  FUN_003d793c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003d78e8; end: 003d793b;  */

void FUN_003d78e8(long param_1,long param_2)

{
  byte *pbVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  dword *pdVar5;
  qword qVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  dword *pdVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  qword qStack_88;
  long *plStack_80;
  dword *pdStack_78;
  dword *pdStack_70;
  qword qStack_68;
  
  puVar3 = (ulong *)(param_1 + 0x28);
  do {
    uVar12 = *puVar3;
    uVar4 = uVar12 + param_2;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar9) {
      *puVar3 = uVar4;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (0x100000 < uVar4) {
    FUN_003d6ca4(param_1);
  }
  if (uVar12 == 0) {
    pbVar1 = (byte *)(param_1 + 0x38);
    do {
      bVar7 = *pbVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar9) {
        *pbVar1 = 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((bVar7 & 1) == 0) {
      func_0x00339d8c(param_1 + 0x40);
      if (*(char *)(param_1 + 0x80) == '\0') {
        FUN_003d7c14(&qStack_88,param_1 + 8);
        plVar2 = plStack_80;
        if (plStack_80 == (long *)0x0) {
          *pbVar1 = 1;
        }
        else {
          plVar14 = plStack_80 + 2;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *plVar14 = *plVar14 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          *pbVar1 = 1;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *plVar14 = *plVar14 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        lVar13 = *(long *)(param_1 + 0x18);
        pdVar10 = &MACH_HEADER.flags;
        __Znwm();
        pdVar5 = *(dword **)(lVar13 + 0x20);
        qVar6 = *(qword *)(lVar13 + 0x28);
        if (qVar6 != 0) {
          plVar14 = (long *)(qVar6 + 8);
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *plVar14 = *plVar14 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        plVar14 = (long *)(pdVar10 + 2);
        *plVar14 = 1;
        *(undefined ***)pdVar10 = &PTR_FUN_009e07f8;
        pcVar11 = segment_command_00000020.segname;
        pdStack_70 = pdVar5;
        qStack_68 = qVar6;
        __Znwm();
        *(undefined ***)pcVar11 = &PTR_FUN_009e0940;
        *(dword **)(pcVar11 + 8) = pdVar5;
        *(qword *)(pcVar11 + 0x10) = qVar6;
        *(qword *)(pcVar11 + 0x18) = qStack_88;
        *(long **)(pcVar11 + 0x20) = plVar2;
        *(char **)(pdVar10 + 4) = pcVar11;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = *plVar14 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        pdStack_78 = pdVar10;
        pdStack_70 = pdVar10;
        FUN_003d62f4(lVar13 + 0x20,&pdStack_70);
        if (pdStack_70 != (dword *)0x0) {
          plVar14 = (long *)(pdStack_70 + 2);
          do {
            lVar13 = *plVar14;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *plVar14 = lVar13 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar13 + -1 == 0) {
            (**(code **)(*(long *)pdStack_70 + 0x10))();
          }
        }
        FUN_0038aa60(param_1 + 0x88,pdStack_78);
        if (plVar2 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
        if (plStack_80 != (long *)0x0) {
          plVar2 = plStack_80 + 1;
          do {
            lVar13 = *plVar2;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *plVar2 = lVar13 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_80 + 0x10))(plStack_80);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
          }
        }
      }
      func_0x00339da8(param_1 + 0x40);
    }
    return;
  }
  return;
}



/* Entry: 003d793c; end: 003d798b;  */

long FUN_003d793c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x60);
    *(undefined8 *)(lVar2 + 0x60) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)();
    }
  }
  FUN_003d798c((long *)(param_1 + 8));
  return param_1;
}



/* Entry: 003d798c; end: 003d7a47;  */

long FUN_003d798c(long param_1)

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



/* Entry: 003d7a48; end: 003d7a8f;  */

void FUN_003d7a48(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xb0;
  __Znwm();
  FUN_003d7a90();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 003d7a90; end: 003d7b17;  */

undefined8 * FUN_003d7a90(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e08f0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  FUN_00339d50();
  puVar1 = param_1 + 0x14;
  *puVar1 = 0;
  param_1[0xb] = puVar1;
  param_1[0x13] = puVar1;
  param_1[0x15] = 0;
  return param_1;
}



/* Entry: 003d7b18; end: 003d7b27;  */

void FUN_003d7b18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e08f0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 003d7b28; end: 003d7b47;  */

void FUN_003d7b28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e08f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003d7b48; end: 003d7b53;  */

long FUN_003d7b48(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  char cStack_31;
  
  cStack_31 = '\0';
  lVar1 = param_1 + 0x58;
  do {
    lVar5 = lVar1;
    FUN_0033b3e4(lVar1,&cStack_31);
    if (lVar5 != 0) {
      plVar6 = *(long **)(lVar5 + 8);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar7 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      __ZdlPv(lVar5);
    }
  } while (cStack_31 == '\0');
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 8))();
  }
  FUN_003bbcd4(lVar1);
  func_0x00339d70(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 003d7b54; end: 003d7c13;  */

long FUN_003d7b54(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  char cStack_31;
  
  cStack_31 = '\0';
  lVar1 = param_1 + 0x40;
  do {
    lVar5 = lVar1;
    FUN_0033b3e4(lVar1,&cStack_31);
    if (lVar5 != 0) {
      plVar6 = *(long **)(lVar5 + 8);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar7 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      __ZdlPv(lVar5);
    }
  } while (cStack_31 == '\0');
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 8))();
  }
  FUN_003bbcd4(lVar1);
  func_0x00339d70(param_1);
  return param_1;
}



/* Entry: 003d7c14; end: 003d7c53;  */

dword * FUN_003d7c14(dword *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  dword *pdVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  char cStack_60;
  
  lVar8 = param_2[1];
  *(undefined8 *)param_1 = *param_2;
  if (lVar8 == 0) {
    *(undefined8 *)(param_1 + 2) = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    *(long *)(param_1 + 2) = lVar8;
    if (lVar8 != 0) {
      return param_1;
    }
  }
  FUN_003d7c54();
  pdVar4 = &MACH_HEADER.cpusubtype;
  ___cxa_allocate_exception();
  *(undefined **)pdVar4 = PTR___ZTVNSt3__112bad_weak_ptrE_00998dd0 + 0x10;
  puVar7 = (ulong *)PTR___ZTINSt3__112bad_weak_ptrE_00998d20;
  ___cxa_throw();
  if ((char)puVar7[4] == '\0') {
    pdVar5 = pdVar4;
    FUN_003d6390(pdVar4);
    uStack_80 = uStack_80 & 0xffffffffffffff00;
    cStack_60 = '\0';
    if ((char)puVar7[4] == '\0') {
      if (pdVar4 == (dword *)0x0) {
        return pdVar5;
      }
      goto LAB_003d7d80;
    }
  }
  uStack_78 = puVar7[1];
  uStack_80 = *puVar7;
  *puVar7 = 0;
  puVar7[1] = 0;
  uStack_70 = puVar7[2];
  uStack_68 = puVar7[3];
  puVar7[3] = 0;
  cStack_60 = '\x01';
  plVar6 = *(long **)(pdVar4 + 8);
  if (plVar6 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar6 != (long *)0x0) {
      lVar8 = *(long *)(pdVar4 + 6);
      if (lVar8 != 0) {
        *(undefined1 *)(lVar8 + 0x38) = 0;
        plVar1 = (long *)(lVar8 + 0x28);
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 != 0) {
          plVar1 = (long *)(lVar8 + 0x30);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 - lVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar1 = (long *)(*(long *)(lVar8 + 0x18) + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + lVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (cStack_60 == '\0') goto LAB_003d7d80;
  }
  FUN_003d6114(&uStack_80);
LAB_003d7d80:
  if (*(long *)(pdVar4 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)pdVar4 = &PTR____cxa_pure_virtual_009deca0;
  func_0x0038aa08(pdVar4 + 2);
  __ZdlPv(pdVar4);
  return pdVar4;
}



/* Entry: 003d7c54; end: 003d7c87;  */

void FUN_003d7c54(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  char cStack_40;
  
  pdVar4 = &MACH_HEADER.cpusubtype;
  ___cxa_allocate_exception();
  *(undefined **)pdVar4 = PTR___ZTVNSt3__112bad_weak_ptrE_00998dd0 + 0x10;
  puVar6 = (ulong *)PTR___ZTINSt3__112bad_weak_ptrE_00998d20;
  ___cxa_throw();
  if ((char)puVar6[4] == '\0') {
    FUN_003d6390(pdVar4);
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    cStack_40 = '\0';
    if ((char)puVar6[4] == '\0') {
      if (pdVar4 == (dword *)0x0) {
        return;
      }
      goto LAB_003d7d80;
    }
  }
  uStack_58 = puVar6[1];
  uStack_60 = *puVar6;
  *puVar6 = 0;
  puVar6[1] = 0;
  uStack_50 = puVar6[2];
  uStack_48 = puVar6[3];
  puVar6[3] = 0;
  cStack_40 = '\x01';
  plVar5 = *(long **)(pdVar4 + 8);
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      lVar7 = *(long *)(pdVar4 + 6);
      if (lVar7 != 0) {
        *(undefined1 *)(lVar7 + 0x38) = 0;
        plVar1 = (long *)(lVar7 + 0x28);
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 != 0) {
          plVar1 = (long *)(lVar7 + 0x30);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 - lVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar1 = (long *)(*(long *)(lVar7 + 0x18) + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + lVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      plVar1 = plVar5 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (cStack_40 == '\0') goto LAB_003d7d80;
  }
  FUN_003d6114(&uStack_60);
LAB_003d7d80:
  if (*(long *)(pdVar4 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)pdVar4 = &PTR____cxa_pure_virtual_009deca0;
  func_0x0038aa08(pdVar4 + 2);
  __ZdlPv(pdVar4);
  return;
}



/* Entry: 003d7c88; end: 003d7dff;  */

void FUN_003d7c88(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  char cStack_30;
  
  if ((char)param_2[4] == '\0') {
    FUN_003d6390(param_1);
    uStack_50 = uStack_50 & 0xffffffffffffff00;
    cStack_30 = '\0';
    if ((char)param_2[4] == '\0') {
      if (param_1 == (undefined8 *)0x0) {
        return;
      }
      goto LAB_003d7d80;
    }
  }
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_40 = param_2[2];
  uStack_38 = param_2[3];
  param_2[3] = 0;
  cStack_30 = '\x01';
  plVar4 = (long *)param_1[4];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar5 = param_1[3];
      if (lVar5 != 0) {
        *(undefined1 *)(lVar5 + 0x38) = 0;
        plVar1 = (long *)(lVar5 + 0x28);
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 != 0) {
          plVar1 = (long *)(lVar5 + 0x30);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 - lVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar1 = (long *)(*(long *)(lVar5 + 0x18) + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + lVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
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
    if (cStack_30 == '\0') goto LAB_003d7d80;
  }
  FUN_003d6114(&uStack_50);
LAB_003d7d80:
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR____cxa_pure_virtual_009deca0;
  func_0x0038aa08(param_1 + 1);
  __ZdlPv(param_1);
  return;
}



/* Entry: 003d7e00; end: 003d7e93;  */

void FUN_003d7e00(undefined1 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  bool bVar9;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  auStack_68[0] = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  lVar5 = *(long *)(param_2 + 0x50);
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(long *)(param_1 + 0x50) = lVar5;
  uStack_20 = 0;
  uStack_18 = 0;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(long *)(param_1 + 0x10) = lVar6;
  uStack_60 = 0;
  uStack_58 = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(long *)(param_1 + 0x20) = lVar7;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_003d75f0(auStack_68);
  return;
}



/* Entry: 003d7e94; end: 003d7f2b;  */

undefined8 * FUN_003d7e94(undefined8 *param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    *param_1 = &PTR_FUN_009e0558;
    param_1[1] = &PTR____cxa_pure_virtual_009e05a0;
    if (param_1[0xb] != 0) {
      FUN_003d3290(param_1);
    }
    func_0x00339d70(param_1 + 2);
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
               ,0x170,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3d7f20);
  (*pcVar1)();
}



/* Entry: 003d7f2c; end: 003d7f3f;  */

void FUN_003d7f2c(void)

{
  FUN_003d7e94();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003d7f40; end: 003d8043;  */

void FUN_003d7f40(long *param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  byte bVar4;
  ulong uStack_28;
  
  plVar3 = param_1;
  FUN_003d3424();
  if ((long *)*plVar3 == param_1) {
    bVar4 = *(byte *)((long)param_1 + 0x54);
    if (bVar4 < 3) {
      bVar4 = 2;
    }
    *(byte *)((long)param_1 + 0x54) = bVar4;
  }
  else {
    plVar3 = param_1 + 2;
    func_0x00339d8c(plVar3);
    if ((char)param_1[0x10] == '\0') {
      FUN_003d84e0(param_1);
      func_0x00339da8(plVar3);
      uStack_28 = 4;
      iVar2 = (int)&uStack_28;
      FUN_00552acc();
      if (iVar2 != 1) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
                     ,0x18e,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x3d8010);
        (*pcVar1)();
      }
      if ((uStack_28 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      func_0x00339da8(plVar3);
    }
  }
  return;
}



/* Entry: 003d8044; end: 003d8147;  */

void FUN_003d8044(long *param_1)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *extraout_x8;
  int iVar6;
  ulong uStack_30;
  undefined1 uStack_21;
  
  FUN_003d3424(param_1);
  if ((long *)*param_1 == extraout_x8) {
    bVar3 = *(byte *)((long)extraout_x8 + 0x54);
    if (bVar3 < 2) {
      bVar3 = 1;
    }
    *(byte *)((long)extraout_x8 + 0x54) = bVar3;
    plVar2 = extraout_x8 + 10;
    do {
      iVar6 = (int)*plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    pbVar1 = (byte *)((long)extraout_x8 + 0x81);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((bVar3 & 1) == 0) {
      extraout_x8[0xd] = (long)FUN_003d8cec;
      extraout_x8[0xe] = (long)extraout_x8;
      extraout_x8[0xf] = 0;
      uStack_30 = 0;
      FUN_003c1e6c(&uStack_21,extraout_x8 + 0xc,&uStack_30);
      if ((uStack_30 & 1) == 0) {
        return;
      }
      FUN_0055293c();
      return;
    }
    plVar2 = extraout_x8 + 10;
    do {
      iVar6 = (int)*plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((extraout_x8 != (long *)0x0) && (iVar6 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x003d8114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*extraout_x8 + 0x10))(extraout_x8);
    return;
  }
  return;
}



/* Entry: 003d8148; end: 003d81a7;  */

void FUN_003d8148(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 10;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_1 != (long *)0x0) && ((int)lVar4 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x003d8170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  return;
}



/* Entry: 003d81a8; end: 003d84df;  */

undefined8 * FUN_003d81a8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long **pplVar10;
  undefined8 *puVar11;
  undefined1 uVar12;
  undefined8 *extraout_x8;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  long extraout_x8_00;
  long lVar16;
  long unaff_x25;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  int iStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  undefined4 uStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  int iStack_1a0;
  long *plStack_198;
  long lStack_190;
  int iStack_188;
  long *plStack_180;
  long lStack_178;
  long lStack_170;
  long *plStack_168;
  int *piStack_160;
  long lStack_158;
  undefined *puStack_150;
  long *plStack_148;
  long *plStack_140;
  undefined1 *puStack_138;
  long *plStack_130;
  undefined8 *puStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  long *plStack_110;
  undefined8 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 *puStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  ulong uStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [16];
  int iStack_90;
  ulong uStack_88;
  int aiStack_80 [4];
  undefined4 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar7 = param_1;
  FUN_003d3424();
  if ((long *)*plVar7 == param_1) {
    if ((char)param_1[0x10] == '\0') {
      plVar7 = param_1 + 0x11;
      plVar1 = param_1 + 0x1c;
      plStack_e0 = param_1 + 0x1f;
      puStack_f0 = extraout_x8;
      plStack_e8 = plVar7;
code_r0x003d8224:
      do {
        switch((char)*plVar1) {
        case '\0':
          if (*(long *)(param_1[0x1d] + 0x10) < 1) {
            FUN_003d798c(param_1 + 0x1d);
            lVar13 = param_1[0x1f];
            unaff_x25 = lVar13 + 0x40;
            FUN_003d798c(plStack_e0);
            plVar7 = plStack_e8;
            param_1[0x1d] = lVar13 + 0x20;
            param_1[0x1e] = (long)"compact";
            param_1[0x1f] = lVar13 + 0x30;
            param_1[0x20] = (long)"benign";
            param_1[0x21] = unaff_x25;
            param_1[0x22] = (long)"idle";
            param_1[0x23] = lVar13 + 0x50;
            param_1[0x24] = (long)"destructive";
            *(undefined1 *)(param_1 + 0x1c) = 1;
            FUN_003d851c(&uStack_88,plVar1);
          }
          else {
            uStack_70 = 0;
          }
          break;
        case '\x01':
          FUN_003d851c(&uStack_88,plVar1);
          break;
        case '\x02':
          FUN_003d8b64(&uStack_88,plVar1);
          break;
        case '\x03':
          FUN_003d8bb8(&uStack_88);
          break;
        default:
          _abort();
          goto LAB_003d8498;
        }
        FUN_0033efb4(auStack_a0,aiStack_80);
        FUN_0033f090(aiStack_80);
        if (iStack_90 == 1) {
          FUN_0033f140(auStack_b8,auStack_a0);
          FUN_0033ed48(&uStack_88,auStack_b8);
          FUN_0033f238(auStack_b8);
          if (aiStack_80[0] == 0) {
            FUN_003d75f0(plVar1);
            FUN_003d7e00(plVar1,plVar7);
            FUN_0033f238(&uStack_88);
            FUN_0033f090(auStack_a0);
            goto code_r0x003d8224;
          }
          if (aiStack_80[0] != 1) {
            FUN_0033e178();
            goto LAB_003d8498;
          }
          uStack_c8 = uStack_88;
          if ((uStack_88 & 1) != 0) {
            piVar14 = (int *)(uStack_88 - 1);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar5) {
                *piVar14 = *piVar14 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_c0 = 1;
          FUN_0033f238(&uStack_88);
        }
        else {
          uStack_c0 = 0;
        }
        FUN_0033f090(auStack_a0);
        FUN_0033dc34(&uStack_d8,&uStack_c8);
        FUN_0033e1ac(&uStack_c8);
        if (iStack_d0 == 1) {
          FUN_003d84e0(param_1);
          uVar15 = uStack_d8;
          uStack_d8 = 0x36;
code_r0x003d8434:
          *puStack_f0 = uVar15;
          uVar12 = 1;
code_r0x003d8440:
          *(undefined1 *)(puStack_f0 + 1) = uVar12;
          puVar8 = &uStack_d8;
          FUN_0033e1ac();
          if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
            return puVar8;
          }
          ___stack_chk_fail();
          FUN_0033e1ac(&uStack_d8);
          puVar9 = puVar8;
          __Unwind_Resume();
          pcStack_f8 = FUN_003d84e0;
          ppuStack_120 = &puStack_100;
          plStack_110 = param_1;
          puStack_108 = puVar8;
          puStack_100 = &stack0xfffffffffffffff0;
          if (*(char *)(puVar9 + 0x10) != '\0') {
            func_0x00774a68();
            puVar11 = &uStack_1e0;
            puStack_150 = &UNK_007f9e14;
            pcStack_118 = FUN_003d851c;
            piStack_160 = aiStack_80;
            lStack_158 = unaff_x25;
            plStack_148 = plVar1;
            plStack_140 = plVar7;
            puStack_138 = auStack_a0;
            plStack_130 = param_1;
            puStack_128 = puVar8;
            FUN_003d8958(&plStack_1b0,puVar9 + 1);
            if (iStack_1a0 == 1) {
              plStack_1c8 = plStack_1b0;
              lStack_1c0 = lStack_1a8;
              lStack_1a8 = 0;
              uStack_1b8 = 1;
            }
            else {
              if (iStack_1a0 != 0) {
                FUN_0033e178();
                goto LAB_003d876c;
              }
              FUN_003d8958(&plStack_198,puVar9 + 3);
              if (iStack_188 == 1) {
                plStack_1c8 = plStack_198;
                lStack_1c0 = lStack_190;
                lStack_190 = 0;
                uStack_1b8 = 1;
              }
              else {
                if (iStack_188 != 0) {
                  FUN_0033e178();
                  goto LAB_003d876c;
                }
                FUN_003d8958(&plStack_180,puVar9 + 5);
                if ((int)lStack_170 == 1) {
                  plStack_1c8 = plStack_180;
                  lStack_1c0 = lStack_178;
                  lStack_178 = 0;
                  uStack_1b8 = 1;
                }
                else {
                  if ((int)lStack_170 != 0) {
                    FUN_0033e178();
                    goto LAB_003d876c;
                  }
                  FUN_003d8958(&plStack_1c8,puVar9 + 7);
                }
                FUN_003d8c94(&plStack_180);
              }
              FUN_003d8c94(&plStack_198);
            }
            FUN_003d8c94(&plStack_1b0);
            FUN_003d8848(&uStack_1e0,&plStack_1c8);
            pplVar10 = &plStack_1c8;
            FUN_003d8c94();
            plVar7 = plStack_1d8;
            if (iStack_1d0 == 1) {
              plStack_1d8 = (long *)0x0;
              plVar1 = (long *)(puVar9[9] + 0x68);
              do {
                lVar13 = *plVar1 + 1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar13;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              plVar1 = (long *)puVar9[9];
              lVar3 = puVar9[10];
              if (lVar3 != 0) {
                plVar2 = (long *)(lVar3 + 8);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar5) {
                    *plVar2 = *plVar2 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              FUN_003d3424();
              (**(code **)(**pplVar10 + 0x28))(&plStack_198);
              plStack_168 = plStack_198;
              plStack_198 = (long *)0x0;
              plStack_180 = plVar1;
              lStack_178 = lVar3;
              lStack_170 = lVar13;
              FUN_003d6264(plVar7,&plStack_180);
              FUN_003d6114(&plStack_180);
              if (plStack_198 != (long *)0x0) {
                (**(code **)(*plStack_198 + 8))();
              }
              uVar15 = puVar9[9];
              lVar3 = puVar9[10];
              if (lVar3 != 0) {
                plVar1 = (long *)(lVar3 + 8);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar5) {
                    *plVar1 = *plVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              if (plVar7 != (long *)0x0) {
                plVar1 = plVar7 + 1;
                do {
                  lVar16 = *plVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar5) {
                    *plVar1 = lVar16 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar16 + -1 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
              FUN_003d798c(puVar9 + 9);
              puVar9[1] = uVar15;
              puVar9[2] = lVar3;
              puVar9[3] = lVar13;
              *(undefined1 *)puVar9 = 2;
              FUN_003d8b64(extraout_x8_00,puVar9);
            }
            else {
              if (iStack_1d0 != 0) {
                FUN_0033e178();
LAB_003d876c:
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x3d8770);
                (*pcVar6)();
              }
              *(undefined4 *)(extraout_x8_00 + 0x18) = 0;
            }
            FUN_003d8c94(&uStack_1e0);
            return puVar11;
          }
          *(undefined1 *)(puVar9 + 0x10) = 1;
          FUN_003d75f0(puVar9 + 0x1c);
          switch(*(undefined1 *)(puVar9 + 0x11)) {
          case 0:
            FUN_003d798c(puVar9 + 0x12);
            FUN_003d798c(puVar9 + 0x14);
          case 1:
            puVar8 = puVar9 + 0x1a;
            break;
          case 2:
            puVar8 = puVar9 + 0x12;
            break;
          case 3:
            goto code_r0x003d7644;
          default:
            _abort();
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x3d765c);
            (*pcVar6)();
          }
          FUN_003d798c(puVar8);
code_r0x003d7644:
          return puVar9 + 0x11;
        }
        cVar4 = *(char *)((long)param_1 + 0x54);
        *(undefined1 *)((long)param_1 + 0x54) = 0;
        if (cVar4 == '\0') {
          *(undefined1 *)puStack_f0 = 0;
          uVar12 = 0;
          goto code_r0x003d8440;
        }
        if (cVar4 == '\x02') {
          FUN_003d84e0(param_1);
          uVar15 = 4;
          goto code_r0x003d8434;
        }
        FUN_0033e1ac(&uStack_d8);
      } while ((char)param_1[0x10] == '\0');
    }
    func_0x00774a00();
  }
  else {
    func_0x00774a34();
  }
LAB_003d8498:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x3d849c);
  (*pcVar6)();
}



/* Entry: 003d84e0; end: 003d851b;  */

undefined1 * FUN_003d84e0(undefined1 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  code *pcVar9;
  long **pplVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long lVar12;
  undefined1 auStack_f0 [8];
  long *plStack_e8;
  int iStack_e0;
  long *plStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  long *plStack_c0;
  long lStack_b8;
  int iStack_b0;
  long *plStack_a8;
  long lStack_a0;
  int iStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if (param_1[0x80] != '\0') {
    func_0x00774a68();
    puVar11 = auStack_f0;
    FUN_003d8958(&plStack_c0,param_1 + 8);
    if (iStack_b0 == 1) {
      plStack_d8 = plStack_c0;
      lStack_d0 = lStack_b8;
      lStack_b8 = 0;
      uStack_c8 = 1;
    }
    else {
      if (iStack_b0 != 0) {
        FUN_0033e178();
        goto LAB_003d876c;
      }
      FUN_003d8958(&plStack_a8,param_1 + 0x18);
      if (iStack_98 == 1) {
        plStack_d8 = plStack_a8;
        lStack_d0 = lStack_a0;
        lStack_a0 = 0;
        uStack_c8 = 1;
      }
      else {
        if (iStack_98 != 0) {
          FUN_0033e178();
          goto LAB_003d876c;
        }
        FUN_003d8958(&plStack_90,param_1 + 0x28);
        if ((int)lStack_80 == 1) {
          plStack_d8 = plStack_90;
          lStack_d0 = lStack_88;
          lStack_88 = 0;
          uStack_c8 = 1;
        }
        else {
          if ((int)lStack_80 != 0) {
            FUN_0033e178();
            goto LAB_003d876c;
          }
          FUN_003d8958(&plStack_d8,param_1 + 0x38);
        }
        FUN_003d8c94(&plStack_90);
      }
      FUN_003d8c94(&plStack_a8);
    }
    FUN_003d8c94(&plStack_c0);
    FUN_003d8848(auStack_f0,&plStack_d8);
    pplVar10 = &plStack_d8;
    FUN_003d8c94();
    plVar8 = plStack_e8;
    if (iStack_e0 == 1) {
      plStack_e8 = (long *)0x0;
      plVar1 = (long *)(*(long *)(param_1 + 0x48) + 0x68);
      do {
        lVar2 = *plVar1 + 1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar2;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = *(long **)(param_1 + 0x48);
      lVar5 = *(long *)(param_1 + 0x50);
      if (lVar5 != 0) {
        plVar3 = (long *)(lVar5 + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = *plVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      FUN_003d3424();
      (**(code **)(**pplVar10 + 0x28))(&plStack_a8);
      plStack_78 = plStack_a8;
      plStack_a8 = (long *)0x0;
      plStack_90 = plVar1;
      lStack_88 = lVar5;
      lStack_80 = lVar2;
      FUN_003d6264(plVar8,&plStack_90);
      FUN_003d6114(&plStack_90);
      if (plStack_a8 != (long *)0x0) {
        (**(code **)(*plStack_a8 + 8))();
      }
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      lVar5 = *(long *)(param_1 + 0x50);
      if (lVar5 != 0) {
        plVar1 = (long *)(lVar5 + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
        do {
          lVar12 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      FUN_003d798c(param_1 + 0x48);
      *(undefined8 *)(param_1 + 8) = uVar4;
      *(long *)(param_1 + 0x10) = lVar5;
      *(long *)(param_1 + 0x18) = lVar2;
      *param_1 = 2;
      FUN_003d8b64(extraout_x8,param_1);
    }
    else {
      if (iStack_e0 != 0) {
        FUN_0033e178();
LAB_003d876c:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x3d8770);
        (*pcVar9)();
      }
      *(undefined4 *)(extraout_x8 + 0x18) = 0;
    }
    FUN_003d8c94(auStack_f0);
    return puVar11;
  }
  param_1[0x80] = 1;
  FUN_003d75f0(param_1 + 0xe0);
  switch(param_1[0x88]) {
  case 0:
    FUN_003d798c(param_1 + 0x90);
    FUN_003d798c(param_1 + 0xa0);
  case 1:
    puVar11 = param_1 + 0xd0;
    break;
  case 2:
    puVar11 = param_1 + 0x90;
    break;
  case 3:
    goto code_r0x003d7644;
  default:
    _abort();
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x3d765c);
    (*pcVar9)();
  }
  FUN_003d798c(puVar11);
code_r0x003d7644:
  return param_1 + 0x88;
}



/* Entry: 003d851c; end: 003d8847;  */

void FUN_003d851c(long param_1,undefined1 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  code *pcVar9;
  long **pplVar10;
  long lVar11;
  undefined1 auStack_d0 [8];
  long *plStack_c8;
  int iStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined4 uStack_a8;
  long *plStack_a0;
  long lStack_98;
  int iStack_90;
  long *plStack_88;
  long lStack_80;
  int iStack_78;
  long *plStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  FUN_003d8958(&plStack_a0,param_2 + 8);
  if (iStack_90 == 1) {
    plStack_b8 = plStack_a0;
    lStack_b0 = lStack_98;
    lStack_98 = 0;
    uStack_a8 = 1;
  }
  else {
    if (iStack_90 != 0) {
      FUN_0033e178();
      goto LAB_003d876c;
    }
    FUN_003d8958(&plStack_88,param_2 + 0x18);
    if (iStack_78 == 1) {
      plStack_b8 = plStack_88;
      lStack_b0 = lStack_80;
      lStack_80 = 0;
      uStack_a8 = 1;
    }
    else {
      if (iStack_78 != 0) {
        FUN_0033e178();
        goto LAB_003d876c;
      }
      FUN_003d8958(&plStack_70,param_2 + 0x28);
      if ((int)lStack_60 == 1) {
        plStack_b8 = plStack_70;
        lStack_b0 = lStack_68;
        lStack_68 = 0;
        uStack_a8 = 1;
      }
      else {
        if ((int)lStack_60 != 0) {
          FUN_0033e178();
          goto LAB_003d876c;
        }
        FUN_003d8958(&plStack_b8,param_2 + 0x38);
      }
      FUN_003d8c94(&plStack_70);
    }
    FUN_003d8c94(&plStack_88);
  }
  FUN_003d8c94(&plStack_a0);
  FUN_003d8848(auStack_d0,&plStack_b8);
  pplVar10 = &plStack_b8;
  FUN_003d8c94();
  plVar8 = plStack_c8;
  if (iStack_c0 == 1) {
    plStack_c8 = (long *)0x0;
    plVar1 = (long *)(*(long *)(param_2 + 0x48) + 0x68);
    do {
      lVar2 = *plVar1 + 1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar2;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar1 = *(long **)(param_2 + 0x48);
    lVar5 = *(long *)(param_2 + 0x50);
    if (lVar5 != 0) {
      plVar3 = (long *)(lVar5 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *plVar3 = *plVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    FUN_003d3424();
    (**(code **)(**pplVar10 + 0x28))(&plStack_88);
    plStack_58 = plStack_88;
    plStack_88 = (long *)0x0;
    plStack_70 = plVar1;
    lStack_68 = lVar5;
    lStack_60 = lVar2;
    FUN_003d6264(plVar8,&plStack_70);
    FUN_003d6114(&plStack_70);
    if (plStack_88 != (long *)0x0) {
      (**(code **)(*plStack_88 + 8))();
    }
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    lVar5 = *(long *)(param_2 + 0x50);
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar11 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar11 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    FUN_003d798c(param_2 + 0x48);
    *(undefined8 *)(param_2 + 8) = uVar4;
    *(long *)(param_2 + 0x10) = lVar5;
    *(long *)(param_2 + 0x18) = lVar2;
    *param_2 = 2;
    FUN_003d8b64(param_1,param_2);
  }
  else {
    if (iStack_c0 != 0) {
      FUN_0033e178();
LAB_003d876c:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x3d8770);
      (*pcVar9)();
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_003d8c94(auStack_d0);
  return;
}



/* Entry: 003d8848; end: 003d887b;  */

undefined1 * FUN_003d8848(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_003d887c();
  return param_1;
}



/* Entry: 003d887c; end: 003d8907;  */

void FUN_003d887c(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009e0a10)[*(uint *)(param_1 + 0x10)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_DAT_009e0a20)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 003d8908; end: 003d8957;  */

void FUN_003d8908(void)

{
  return;
}



/* Entry: 003d8958; end: 003d89ff;  */

void FUN_003d8958(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  int iStack_28;
  
  func_0x003d89bc(&uStack_30);
  uVar1 = uStack_30;
  if (iStack_28 == 1) {
    uStack_30 = 0;
    *param_1 = *(undefined8 *)(param_2 + 8);
    param_1[1] = uVar1;
  }
  *(uint *)(param_1 + 2) = (uint)(iStack_28 == 1);
  FUN_003d8b0c(&uStack_30);
  return;
}



/* Entry: 003d8a00; end: 003d8a33;  */

undefined1 * FUN_003d8a00(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  FUN_003d8a34();
  return param_1;
}



/* Entry: 003d8a34; end: 003d8abf;  */

void FUN_003d8a34(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009e0a30)[*(uint *)(param_1 + 8)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_DAT_009e0a40)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 8) = uVar1;
  }
  return;
}



/* Entry: 003d8ac0; end: 003d8b0b;  */

void FUN_003d8ac0(void)

{
  return;
}



/* Entry: 003d8b0c; end: 003d8b63;  */

long FUN_003d8b0c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009e0a30)[*(uint *)(param_1 + 8)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return param_1;
}



/* Entry: 003d8b64; end: 003d8bb7;  */

void FUN_003d8b64(long param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_40 [16];
  int iStack_30;
  long lStack_28;
  
  if (*(long *)(*(long *)(param_2 + 8) + 0x68) == *(long *)(param_2 + 0x18)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  FUN_003d798c();
  *param_2 = 3;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_50 = 0;
  FUN_0033ed48(auStack_40,auStack_58);
  iStack_30 = 1;
  FUN_0033f238(auStack_58);
  if (iStack_30 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    if (iStack_30 != 1) goto LAB_003d8c78;
    FUN_0033ed48(auStack_58,auStack_40);
    FUN_0033ed48(param_1 + 8,auStack_58);
    *(undefined4 *)(param_1 + 0x18) = 1;
    FUN_0033f238(auStack_58);
  }
  FUN_0033f090(auStack_40);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
LAB_003d8c78:
  FUN_0033e178();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3d8c80);
  (*pcVar1)();
}



/* Entry: 003d8bb8; end: 003d8c93;  */

void FUN_003d8bb8(long param_1)

{
  code *pcVar1;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_40 [16];
  int iStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_50 = 0;
  FUN_0033ed48(auStack_40,auStack_58);
  iStack_30 = 1;
  FUN_0033f238(auStack_58);
  if (iStack_30 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    if (iStack_30 != 1) goto LAB_003d8c78;
    FUN_0033ed48(auStack_58,auStack_40);
    FUN_0033ed48(param_1 + 8,auStack_58);
    *(undefined4 *)(param_1 + 0x18) = 1;
    FUN_0033f238(auStack_58);
  }
  FUN_0033f090(auStack_40);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
LAB_003d8c78:
  FUN_0033e178();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3d8c80);
  (*pcVar1)();
}



/* Entry: 003d8c94; end: 003d8ceb;  */

long FUN_003d8c94(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009e0a10)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return param_1;
}



/* Entry: 003d8cec; end: 003d8e4b;  */

void FUN_003d8cec(long *param_1)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uStack_48;
  ulong uStack_40;
  char cStack_38;
  
  pbVar1 = (byte *)((long)param_1 + 0x81);
  do {
    bVar3 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((bVar3 & 1) != 0) {
    plVar2 = param_1 + 2;
    plVar8 = plVar2;
    func_0x00339d8c();
    if ((char)param_1[0x10] == '\0') {
      FUN_003d3424();
      lVar9 = *plVar8;
      FUN_003d3424();
      *plVar8 = (long)param_1;
      plVar8 = param_1;
      FUN_003d81a8(&uStack_40);
      FUN_003d3424();
      *plVar8 = lVar9;
      func_0x00339da8(plVar2);
      if (cStack_38 != '\0') {
        uStack_48 = uStack_40;
        uStack_40 = 0x36;
        iVar7 = (int)&uStack_48;
        FUN_00552acc();
        if (iVar7 != 1) goto LAB_003d8ddc;
        if ((uStack_48 & 1) != 0) {
          FUN_0055293c();
        }
      }
      FUN_0033e204(&uStack_40);
    }
    else {
      func_0x00339da8(plVar2);
    }
    plVar2 = param_1 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*param_1 + 0x10))(param_1);
    }
    return;
  }
  func_0x00774a9c();
LAB_003d8ddc:
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
               ,0x18e,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x3d8e0c);
  (*pcVar6)();
}



/* Entry: 003d8e4c; end: 003d8eb3;  */

void FUN_003d8e4c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = 0xd8;
  __Znwm();
  FUN_003d8eb4();
  *param_1 = lVar4 + 0x18;
  param_1[1] = lVar4;
  if (((long *)(lVar4 + 0x20) != (long *)0x0) &&
     ((lVar5 = *(long *)(lVar4 + 0x28), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar4 + 0x28);
    }
    *(long *)(lVar4 + 0x20) = lVar4 + 0x18;
    *(long **)(lVar4 + 0x28) = plVar6;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00779e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_00998b98)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 003d8eb4; end: 003d8f13;  */

undefined8 * FUN_003d8eb4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_21;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e0a60;
  FUN_003d8f50(&uStack_21,param_1 + 3,param_2,param_3);
  return param_1;
}



/* Entry: 003d8f14; end: 003d8f23;  */

void FUN_003d8f14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e0a60;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 003d8f24; end: 003d8f43;  */

void FUN_003d8f24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e0a60;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003d8f44; end: 003d8f4f;  */

long FUN_003d8f44(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x40) + 0xc0 == *(long *)(param_1 + 0x48)) {
    lVar5 = *(long *)(param_1 + 0x48);
    plVar1 = (long *)(*(long *)(param_1 + 0x30) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*(char *)(param_1 + 0xd7) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0xc0));
    }
    lVar5 = 0xa0;
    do {
      FUN_0038aa60(param_1 + 0x18 + lVar5,0);
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0x80);
    func_0x00339d70(param_1 + 0x58);
    FUN_003d798c((long *)(param_1 + 0x30));
    if (*(long *)(param_1 + 0x28) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return param_1 + 0x18;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
               ,0xa8,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x3d67dc);
  (*pcVar4)();
}



/* Entry: 003d8f50; end: 003d9033;  */

void FUN_003d8f50(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = *param_3;
  plVar2 = (long *)param_3[1];
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
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  lStack_40 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  plStack_28 = plVar2;
  FUN_003d65a4(param_2,&uStack_30,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00779e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_00998b98)(plVar2);
      return;
    }
  }
  return;
}



/* Entry: 003d9034; end: 003d90e3;  */

void FUN_003d9034(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00779e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_00998b98)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 003d90e4; end: 003d90eb;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003d90e4(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 003d90ec; end: 003d91b7;  */

undefined8 * FUN_003d90ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_31;
  
  *param_1 = &PTR_FUN_009e0ab0;
  param_1[1] = 1;
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  lStack_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_003d93bc(param_1 + 2,&uStack_31,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  uVar1 = 0x60;
  __Znwm();
  func_0x003d98d0();
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 003d91b8; end: 003d921b;  */

undefined8 * FUN_003d91b8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009e0ab0;
  plVar4 = (long *)param_1[4];
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  func_0x003777c0(param_1 + 2);
  return param_1;
}



/* Entry: 003d921c; end: 003d921f;  */

undefined8 * FUN_003d921c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009e0ab0;
  plVar4 = (long *)param_1[4];
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  func_0x003777c0(param_1 + 2);
  return param_1;
}



/* Entry: 003d9220; end: 003d9233;  */

void FUN_003d9220(void)

{
  FUN_003d91b8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003d9234; end: 003d9317;  */

void FUN_003d9234(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined8 auStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  if ((bRam0000000000b5ebd0 & 1) == 0) {
    iVar5 = 0xb5ebd0;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_00353254(auStack_50,"default_resource_quota");
      FUN_003d9318(&lStack_38,auStack_50);
      lVar4 = lStack_38;
      lStack_38 = 0;
      if (cStack_39 < '\0') {
        __ZdlPv(auStack_50[0]);
      }
      lRam0000000000b5ebc8 = lVar4;
      ___cxa_guard_release(0xb5ebd0);
    }
  }
  lVar4 = lRam0000000000b5ebc8;
  plVar1 = (long *)(lRam0000000000b5ebc8 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *param_1 = lVar4;
  return;
}



/* Entry: 003d9318; end: 003d93bb;  */

void FUN_003d9318(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = 0x28;
  __Znwm();
  uVar3 = *param_2;
  lVar2 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_003d90ec();
  *param_1 = uVar1;
  if (-1 < lVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(uVar3);
  return;
}



/* Entry: 003d93bc; end: 003d9413;  */

void FUN_003d93bc(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x30;
  __Znwm();
  FUN_003d9414();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 003d9414; end: 003d946f;  */

undefined8 * FUN_003d9414(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uStack_21;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e0b30;
  FUN_003d94ac(&uStack_21,param_1 + 3,param_2);
  return param_1;
}



/* Entry: 003d9470; end: 003d947f;  */

void FUN_003d9470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e0b30;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 003d9480; end: 003d949f;  */

void FUN_003d9480(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e0b30;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003d94a0; end: 003d94ab;  */

long FUN_003d94a0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x60);
    *(undefined8 *)(lVar2 + 0x60) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)();
    }
  }
  FUN_003d798c((long *)(param_1 + 0x20));
  return param_1 + 0x18;
}



/* Entry: 003d94ac; end: 003d951b;  */

void FUN_003d94ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  lStack_30 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_003d951c(param_2,&uStack_40);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return;
}



/* Entry: 003d951c; end: 003d957f;  */

undefined8 * FUN_003d951c(undefined8 *param_1)

{
  undefined1 uStack_21;
  
  *param_1 = &PTR_DAT_009e0850;
  FUN_003d9580(param_1 + 1,&uStack_21);
  FUN_003d6fa4(param_1[1]);
  return param_1;
}



/* Entry: 003d9580; end: 003d95df;  */

void FUN_003d9580(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = 0xa0;
  __Znwm();
  FUN_003d95e0();
  lVar6 = lVar4 + 0x18;
  *param_1 = lVar6;
  param_1[1] = lVar4;
  if ((lVar6 != 0) &&
     ((lVar5 = *(long *)(lVar4 + 0x20), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar4 + 0x20);
    }
    *(long *)lVar6 = lVar6;
    *(long **)(lVar4 + 0x20) = plVar7;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00779e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_00998b98)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 003d95e0; end: 003d963b;  */

undefined8 * FUN_003d95e0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uStack_21;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e0b80;
  FUN_003d9694(&uStack_21,param_1 + 3,param_2);
  return param_1;
}



/* Entry: 003d963c; end: 003d964b;  */

void FUN_003d963c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e0b80;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 003d964c; end: 003d968f;  */

void FUN_003d964c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e0b80;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003d9690; end: 003d9693;  */

void FUN_003d9690(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003d9694; end: 003d9703;  */

void FUN_003d9694(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  lStack_30 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_003d9704(param_2,&uStack_40);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  return;
}



/* Entry: 003d9704; end: 003d97ab;  */

undefined8 * FUN_003d9704(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0x7fffffffffffffff;
  param_1[2] = 0x7fffffffffffffff;
  do {
    FUN_003d6450((long)param_1 + lVar1 + 0x20);
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x40);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_1[0x10] = param_2[2];
  param_1[0xf] = uVar3;
  param_1[0xe] = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return param_1;
}



/* Entry: 003d97ac; end: 003d981f;  */

void FUN_003d97ac(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x70));
  }
  puVar1 = *(undefined8 **)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  lVar2 = 0x50;
  do {
    FUN_003d6484(param_2 + lVar2);
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0x10);
  if (*(long *)(param_2 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00779e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_00998b98)();
    return;
  }
  return;
}



/* Entry: 003d9820; end: 003d990f;  */

void FUN_003d9820(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00779e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_00998b98)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 003d9910; end: 003d9943;  */

undefined8 * FUN_003d9910(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e0bd0;
  func_0x00339d70(param_1 + 2);
  return param_1;
}



/* Entry: 003d9944; end: 003d9977;  */

void FUN_003d9944(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e0bd0;
  func_0x00339d70(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 003d9978; end: 003d9c2b;  */

long * FUN_003d9978(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  long *plVar12;
  char *pcVar13;
  long extraout_x8;
  int *piVar14;
  long *plVar15;
  ulong *puVar16;
  long *plVar17;
  ulong uStack_230;
  ulong uStack_228;
  undefined8 ***pppuStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  long alStack_1e8 [7];
  undefined8 ***pppuStack_1b0;
  ulong uStack_1a8;
  byte bStack_199;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar15 = param_1 + 4;
  param_1[5] = 0;
  *plVar15 = 0;
  plVar17 = param_1 + 0x1f;
  *plVar17 = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  plVar12 = param_1 + 7;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  plVar1 = param_1 + 0x34;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  plVar9 = param_1;
  if (param_2 != (long *)0x0) {
    pcVar13 = "transport_security_type";
    plVar9 = param_2;
    FUN_003ddb44();
    *param_1 = (long)plVar9;
    param_1[1] = (long)pcVar13;
    pcVar13 = "peer_spiffe_id";
    plVar9 = param_2;
    FUN_003ddb44();
    param_1[2] = (long)plVar9;
    param_1[3] = (long)pcVar13;
    FUN_003ddbdc(&lStack_100,param_2,"peer_uri");
    if (*plVar15 != 0) {
      param_1[5] = *plVar15;
      __ZdlPv();
      *plVar15 = 0;
      param_1[5] = 0;
      param_1[6] = 0;
    }
    param_1[5] = lStack_f8;
    param_1[4] = lStack_100;
    param_1[6] = lStack_f0;
    FUN_003ddbdc(&lStack_100,param_2,"peer_dns");
    if (*plVar12 != 0) {
      param_1[8] = *plVar12;
      __ZdlPv();
      *plVar12 = 0;
      param_1[8] = 0;
      param_1[9] = 0;
    }
    param_1[8] = lStack_f8;
    param_1[7] = lStack_100;
    param_1[9] = lStack_f0;
    pcVar13 = "x509_common_name";
    plVar9 = param_2;
    FUN_003ddb44();
    param_1[10] = (long)plVar9;
    param_1[0xb] = (long)pcVar13;
    pcVar13 = "x509_subject";
    FUN_003ddb44();
    param_1[0xc] = (long)param_2;
    param_1[0xd] = (long)pcVar13;
    plVar9 = param_2;
  }
  if (param_3 != (long *)0x0) {
    func_0x003bcf6c(param_3);
    FUN_003d9c2c(&lStack_100);
    param_1[0x1b] = lStack_98;
    param_1[0x1a] = lStack_a0;
    param_1[0x1d] = lStack_88;
    param_1[0x1c] = lStack_90;
    *(undefined4 *)(param_1 + 0x1e) = uStack_80;
    param_1[0x13] = lStack_d8;
    param_1[0x12] = lStack_e0;
    param_1[0x15] = lStack_c8;
    param_1[0x14] = lStack_d0;
    param_1[0x17] = lStack_b8;
    param_1[0x16] = lStack_c0;
    param_1[0x19] = lStack_a8;
    param_1[0x18] = lStack_b0;
    param_1[0xf] = lStack_f8;
    param_1[0xe] = lStack_100;
    param_1[0x11] = lStack_e8;
    param_1[0x10] = lStack_f0;
    if (*(char *)((long)param_1 + 0x10f) < '\0') {
      __ZdlPv(*plVar17);
    }
    param_1[0x20] = lStack_70;
    *plVar17 = lStack_78;
    param_1[0x21] = lStack_68;
    *(undefined4 *)(param_1 + 0x22) = uStack_60;
    func_0x003bcf60();
    FUN_003d9c2c(&lStack_100);
    param_1[0x30] = lStack_98;
    param_1[0x2f] = lStack_a0;
    param_1[0x32] = lStack_88;
    param_1[0x31] = lStack_90;
    *(undefined4 *)(param_1 + 0x33) = uStack_80;
    param_1[0x28] = lStack_d8;
    param_1[0x27] = lStack_e0;
    param_1[0x2a] = lStack_c8;
    param_1[0x29] = lStack_d0;
    param_1[0x2c] = lStack_b8;
    param_1[0x2b] = lStack_c0;
    param_1[0x2e] = lStack_a8;
    param_1[0x2d] = lStack_b0;
    param_1[0x24] = lStack_f8;
    param_1[0x23] = lStack_100;
    param_1[0x26] = lStack_e8;
    param_1[0x25] = lStack_f0;
    if (*(char *)((long)param_1 + 0x1b7) < '\0') {
      param_3 = (long *)*plVar1;
      __ZdlPv();
    }
    param_1[0x35] = lStack_70;
    *plVar1 = lStack_78;
    param_1[0x36] = lStack_68;
    *(undefined4 *)(param_1 + 0x37) = uStack_60;
    plVar9 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (*(char *)((long)param_1 + 0x1b7) < '\0') {
    __ZdlPv(*plVar1);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(*plVar17);
  }
  if (*plVar12 != 0) {
    param_1[8] = *plVar12;
    __ZdlPv();
  }
  if (*plVar15 != 0) {
    param_1[5] = *plVar15;
    __ZdlPv();
  }
  __Unwind_Resume(plVar9);
  puVar16 = (ulong *)(extraout_x8 + 0x88);
  *puVar16 = 0;
  *(undefined4 *)(extraout_x8 + 0xa0) = 0;
  *(undefined8 *)(extraout_x8 + 0x90) = 0;
  *(undefined8 *)(extraout_x8 + 0x98) = 0;
  FUN_004011d4(alStack_1e8);
  if (alStack_1e8[0] != 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                 ,0x2a,0,"Failed to parse uri.");
    goto LAB_003d9f1c;
  }
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  ppppuVar10 = (undefined8 ****)pppuStack_1b0;
  if (-1 < (char)bStack_199) {
    uStack_1a8 = (ulong)bStack_199;
    ppppuVar10 = &pppuStack_1b0;
  }
  FUN_0033af30(ppppuVar10,uStack_1a8,&uStack_1f8,&uStack_208);
  if (((ulong)ppppuVar10 & 1) == 0) {
    if (alStack_1e8[0] == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                   ,0x30,0,"Failed to split %s into host and port.");
      goto LAB_003d9f1c;
    }
    FUN_0055169c(alStack_1e8);
    goto LAB_003d9f60;
  }
  uVar11 = uStack_208;
  FUN_00575540(uStack_208,uStack_200,&pppuStack_220,10);
  uVar2 = uStack_200;
  uVar6 = uStack_208;
  *(undefined4 *)(extraout_x8 + 0xa0) = pppuStack_220._0_4_;
  if ((uVar11 & 1) == 0) {
    if (0x7ffffffffffffff7 < uStack_200) {
      func_0x0033b318(&pppuStack_220);
      goto LAB_003d9f60;
    }
    if (uStack_200 < 0x17) {
      uStack_210 = CONCAT17((char)uStack_200,(undefined7)uStack_210);
      ppppuVar10 = &pppuStack_220;
      if (uStack_200 != 0) goto LAB_003d9d7c;
    }
    else {
      uVar11 = (uStack_200 & 0xfffffffffffffff8) + 8;
      if ((uStack_200 | 7) != 0x17) {
        uVar11 = uStack_200 | 7;
      }
      ppppuVar10 = (undefined8 ****)(uVar11 + 1);
      __Znwm();
      uStack_210 = uVar11 + 1 | 0x8000000000000000;
      uStack_218 = uVar2;
      pppuStack_220 = ppppuVar10;
LAB_003d9d7c:
      _memmove(ppppuVar10,uVar6,uVar2);
    }
    *(undefined1 *)((long)ppppuVar10 + uVar2) = 0;
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                 ,0x35,0,"Port %s is out of range or null.");
    if ((long)uStack_210 < 0) {
      __ZdlPv(pppuStack_220);
    }
  }
  uVar6 = uStack_1f0;
  uVar7 = uStack_1f8;
  if (0x7ffffffffffffff7 < uStack_1f0) {
    func_0x0033b318(&pppuStack_220);
LAB_003d9f60:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x3d9f64);
    (*pcVar8)();
  }
  if (uStack_1f0 < 0x17) {
    uStack_210 = CONCAT17((char)uStack_1f0,(undefined7)uStack_210);
    ppppuVar10 = &pppuStack_220;
    if (uStack_1f0 != 0) goto LAB_003d9e2c;
  }
  else {
    uVar2 = (uStack_1f0 & 0xfffffffffffffff8) + 8;
    if ((uStack_1f0 | 7) != 0x17) {
      uVar2 = uStack_1f0 | 7;
    }
    ppppuVar10 = (undefined8 ****)(uVar2 + 1);
    __Znwm();
    uStack_210 = uVar2 + 1 | 0x8000000000000000;
    uStack_218 = uVar6;
    pppuStack_220 = ppppuVar10;
LAB_003d9e2c:
    _memmove(ppppuVar10,uVar7,uVar6);
  }
  *(undefined1 *)((long)ppppuVar10 + uVar6) = 0;
  if (*(char *)(extraout_x8 + 0x9f) < '\0') {
    __ZdlPv(*puVar16);
  }
  *(ulong *)(extraout_x8 + 0x90) = uStack_218;
  *puVar16 = (ulong)pppuStack_220;
  *(ulong *)(extraout_x8 + 0x98) = uStack_210;
  puVar3 = *(ulong **)(extraout_x8 + 0x88);
  if (-1 < *(char *)(extraout_x8 + 0x9f)) {
    puVar3 = puVar16;
  }
  FUN_003a04bc(&uStack_228,extraout_x8,puVar3,*(undefined4 *)(extraout_x8 + 0xa0));
  if (uStack_228 != 0) {
    uStack_230 = uStack_228;
    if ((uStack_228 & 1) != 0) {
      piVar14 = (int *)(uStack_228 - 1);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = *piVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_003be004(&pppuStack_220,&uStack_230);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                 ,0x3c,0,"Address %s is not IPv4/IPv6. Error: %s");
    if ((long)uStack_210 < 0) {
      __ZdlPv(pppuStack_220);
    }
    if ((uStack_230 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_228 & 1) != 0) {
      FUN_0055293c();
    }
  }
LAB_003d9f1c:
  plVar12 = alStack_1e8;
  FUN_0035afe0(plVar12);
  return plVar12;
}



/* Entry: 003d9c2c; end: 003d9fe7;  */

void FUN_003d9c2c(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 ****ppppuVar8;
  ulong uVar9;
  int *piVar10;
  ulong *puVar11;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 ***pppuStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long alStack_e8 [7];
  undefined8 ***pppuStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  
  puVar11 = (ulong *)(param_1 + 0x88);
  *puVar11 = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_004011d4(alStack_e8);
  if (alStack_e8[0] != 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                 ,0x2a,0,"Failed to parse uri.");
    goto LAB_003d9f1c;
  }
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  ppppuVar8 = (undefined8 ****)pppuStack_b0;
  if (-1 < (char)bStack_99) {
    uStack_a8 = (ulong)bStack_99;
    ppppuVar8 = &pppuStack_b0;
  }
  FUN_0033af30(ppppuVar8,uStack_a8,&uStack_f8,&uStack_108);
  if (((ulong)ppppuVar8 & 1) == 0) {
    if (alStack_e8[0] == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                   ,0x30,0,"Failed to split %s into host and port.");
      goto LAB_003d9f1c;
    }
    FUN_0055169c(alStack_e8);
    goto LAB_003d9f60;
  }
  uVar9 = uStack_108;
  FUN_00575540(uStack_108,uStack_100,&pppuStack_120,10);
  uVar1 = uStack_100;
  uVar5 = uStack_108;
  *(undefined4 *)(param_1 + 0xa0) = pppuStack_120._0_4_;
  if ((uVar9 & 1) == 0) {
    if (0x7ffffffffffffff7 < uStack_100) {
      func_0x0033b318(&pppuStack_120);
      goto LAB_003d9f60;
    }
    if (uStack_100 < 0x17) {
      uStack_110 = CONCAT17((char)uStack_100,(undefined7)uStack_110);
      ppppuVar8 = &pppuStack_120;
      if (uStack_100 != 0) goto LAB_003d9d7c;
    }
    else {
      uVar9 = (uStack_100 & 0xfffffffffffffff8) + 8;
      if ((uStack_100 | 7) != 0x17) {
        uVar9 = uStack_100 | 7;
      }
      ppppuVar8 = (undefined8 ****)(uVar9 + 1);
      __Znwm();
      uStack_110 = uVar9 + 1 | 0x8000000000000000;
      uStack_118 = uVar1;
      pppuStack_120 = ppppuVar8;
LAB_003d9d7c:
      _memmove(ppppuVar8,uVar5,uVar1);
    }
    *(undefined1 *)((long)ppppuVar8 + uVar1) = 0;
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                 ,0x35,0,"Port %s is out of range or null.");
    if ((long)uStack_110 < 0) {
      __ZdlPv(pppuStack_120);
    }
  }
  uVar5 = uStack_f0;
  uVar6 = uStack_f8;
  if (0x7ffffffffffffff7 < uStack_f0) {
    func_0x0033b318(&pppuStack_120);
LAB_003d9f60:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x3d9f64);
    (*pcVar7)();
  }
  if (uStack_f0 < 0x17) {
    uStack_110 = CONCAT17((char)uStack_f0,(undefined7)uStack_110);
    ppppuVar8 = &pppuStack_120;
    if (uStack_f0 != 0) goto LAB_003d9e2c;
  }
  else {
    uVar1 = (uStack_f0 & 0xfffffffffffffff8) + 8;
    if ((uStack_f0 | 7) != 0x17) {
      uVar1 = uStack_f0 | 7;
    }
    ppppuVar8 = (undefined8 ****)(uVar1 + 1);
    __Znwm();
    uStack_110 = uVar1 + 1 | 0x8000000000000000;
    uStack_118 = uVar5;
    pppuStack_120 = ppppuVar8;
LAB_003d9e2c:
    _memmove(ppppuVar8,uVar6,uVar5);
  }
  *(undefined1 *)((long)ppppuVar8 + uVar5) = 0;
  if (*(char *)(param_1 + 0x9f) < '\0') {
    __ZdlPv(*puVar11);
  }
  *(ulong *)(param_1 + 0x90) = uStack_118;
  *puVar11 = (ulong)pppuStack_120;
  *(ulong *)(param_1 + 0x98) = uStack_110;
  puVar2 = *(ulong **)(param_1 + 0x88);
  if (-1 < *(char *)(param_1 + 0x9f)) {
    puVar2 = puVar11;
  }
  FUN_003a04bc(&uStack_128,param_1,puVar2,*(undefined4 *)(param_1 + 0xa0));
  if (uStack_128 != 0) {
    uStack_130 = uStack_128;
    if ((uStack_128 & 1) != 0) {
      piVar10 = (int *)(uStack_128 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = *piVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_003be004(&pppuStack_120,&uStack_130);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                 ,0x3c,0,"Address %s is not IPv4/IPv6. Error: %s");
    if ((long)uStack_110 < 0) {
      __ZdlPv(pppuStack_120);
    }
    if ((uStack_130 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_128 & 1) != 0) {
      FUN_0055293c();
    }
  }
LAB_003d9f1c:
  FUN_0035afe0(alStack_e8);
  return;
}



/* Entry: 003d9fe8; end: 003d9feb;  */

long * FUN_003d9fe8(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  long *plVar12;
  char *pcVar13;
  long extraout_x8;
  int *piVar14;
  long *plVar15;
  ulong *puVar16;
  long *plVar17;
  ulong uStack_230;
  ulong uStack_228;
  undefined8 ***pppuStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  long alStack_1e8 [7];
  undefined8 ***pppuStack_1b0;
  ulong uStack_1a8;
  byte bStack_199;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar15 = param_1 + 4;
  param_1[5] = 0;
  *plVar15 = 0;
  plVar17 = param_1 + 0x1f;
  *plVar17 = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  plVar12 = param_1 + 7;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  plVar1 = param_1 + 0x34;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  plVar9 = param_1;
  if (param_2 != (long *)0x0) {
    pcVar13 = "transport_security_type";
    plVar9 = param_2;
    FUN_003ddb44();
    *param_1 = (long)plVar9;
    param_1[1] = (long)pcVar13;
    pcVar13 = "peer_spiffe_id";
    plVar9 = param_2;
    FUN_003ddb44();
    param_1[2] = (long)plVar9;
    param_1[3] = (long)pcVar13;
    FUN_003ddbdc(&lStack_100,param_2,"peer_uri");
    if (*plVar15 != 0) {
      param_1[5] = *plVar15;
      __ZdlPv();
      *plVar15 = 0;
      param_1[5] = 0;
      param_1[6] = 0;
    }
    param_1[5] = lStack_f8;
    param_1[4] = lStack_100;
    param_1[6] = lStack_f0;
    FUN_003ddbdc(&lStack_100,param_2,"peer_dns");
    if (*plVar12 != 0) {
      param_1[8] = *plVar12;
      __ZdlPv();
      *plVar12 = 0;
      param_1[8] = 0;
      param_1[9] = 0;
    }
    param_1[8] = lStack_f8;
    param_1[7] = lStack_100;
    param_1[9] = lStack_f0;
    pcVar13 = "x509_common_name";
    plVar9 = param_2;
    FUN_003ddb44();
    param_1[10] = (long)plVar9;
    param_1[0xb] = (long)pcVar13;
    pcVar13 = "x509_subject";
    FUN_003ddb44();
    param_1[0xc] = (long)param_2;
    param_1[0xd] = (long)pcVar13;
    plVar9 = param_2;
  }
  if (param_3 != (long *)0x0) {
    func_0x003bcf6c(param_3);
    FUN_003d9c2c(&lStack_100);
    param_1[0x1b] = lStack_98;
    param_1[0x1a] = lStack_a0;
    param_1[0x1d] = lStack_88;
    param_1[0x1c] = lStack_90;
    *(undefined4 *)(param_1 + 0x1e) = uStack_80;
    param_1[0x13] = lStack_d8;
    param_1[0x12] = lStack_e0;
    param_1[0x15] = lStack_c8;
    param_1[0x14] = lStack_d0;
    param_1[0x17] = lStack_b8;
    param_1[0x16] = lStack_c0;
    param_1[0x19] = lStack_a8;
    param_1[0x18] = lStack_b0;
    param_1[0xf] = lStack_f8;
    param_1[0xe] = lStack_100;
    param_1[0x11] = lStack_e8;
    param_1[0x10] = lStack_f0;
    if (*(char *)((long)param_1 + 0x10f) < '\0') {
      __ZdlPv(*plVar17);
    }
    param_1[0x20] = lStack_70;
    *plVar17 = lStack_78;
    param_1[0x21] = lStack_68;
    *(undefined4 *)(param_1 + 0x22) = uStack_60;
    func_0x003bcf60();
    FUN_003d9c2c(&lStack_100);
    param_1[0x30] = lStack_98;
    param_1[0x2f] = lStack_a0;
    param_1[0x32] = lStack_88;
    param_1[0x31] = lStack_90;
    *(undefined4 *)(param_1 + 0x33) = uStack_80;
    param_1[0x28] = lStack_d8;
    param_1[0x27] = lStack_e0;
    param_1[0x2a] = lStack_c8;
    param_1[0x29] = lStack_d0;
    param_1[0x2c] = lStack_b8;
    param_1[0x2b] = lStack_c0;
    param_1[0x2e] = lStack_a8;
    param_1[0x2d] = lStack_b0;
    param_1[0x24] = lStack_f8;
    param_1[0x23] = lStack_100;
    param_1[0x26] = lStack_e8;
    param_1[0x25] = lStack_f0;
    if (*(char *)((long)param_1 + 0x1b7) < '\0') {
      param_3 = (long *)*plVar1;
      __ZdlPv();
    }
    param_1[0x35] = lStack_70;
    *plVar1 = lStack_78;
    param_1[0x36] = lStack_68;
    *(undefined4 *)(param_1 + 0x37) = uStack_60;
    plVar9 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (*(char *)((long)param_1 + 0x1b7) < '\0') {
    __ZdlPv(*plVar1);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(*plVar17);
  }
  if (*plVar12 != 0) {
    param_1[8] = *plVar12;
    __ZdlPv();
  }
  if (*plVar15 != 0) {
    param_1[5] = *plVar15;
    __ZdlPv();
  }
  __Unwind_Resume(plVar9);
  puVar16 = (ulong *)(extraout_x8 + 0x88);
  *puVar16 = 0;
  *(undefined4 *)(extraout_x8 + 0xa0) = 0;
  *(undefined8 *)(extraout_x8 + 0x90) = 0;
  *(undefined8 *)(extraout_x8 + 0x98) = 0;
  FUN_004011d4(alStack_1e8);
  if (alStack_1e8[0] != 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                 ,0x2a,0,"Failed to parse uri.");
    goto LAB_003d9f1c;
  }
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  ppppuVar10 = (undefined8 ****)pppuStack_1b0;
  if (-1 < (char)bStack_199) {
    uStack_1a8 = (ulong)bStack_199;
    ppppuVar10 = &pppuStack_1b0;
  }
  FUN_0033af30(ppppuVar10,uStack_1a8,&uStack_1f8,&uStack_208);
  if (((ulong)ppppuVar10 & 1) == 0) {
    if (alStack_1e8[0] == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                   ,0x30,0,"Failed to split %s into host and port.");
      goto LAB_003d9f1c;
    }
    FUN_0055169c(alStack_1e8);
    goto LAB_003d9f60;
  }
  uVar11 = uStack_208;
  FUN_00575540(uStack_208,uStack_200,&pppuStack_220,10);
  uVar2 = uStack_200;
  uVar6 = uStack_208;
  *(undefined4 *)(extraout_x8 + 0xa0) = pppuStack_220._0_4_;
  if ((uVar11 & 1) == 0) {
    if (0x7ffffffffffffff7 < uStack_200) {
      func_0x0033b318(&pppuStack_220);
      goto LAB_003d9f60;
    }
    if (uStack_200 < 0x17) {
      uStack_210 = CONCAT17((char)uStack_200,(undefined7)uStack_210);
      ppppuVar10 = &pppuStack_220;
      if (uStack_200 != 0) goto LAB_003d9d7c;
    }
    else {
      uVar11 = (uStack_200 & 0xfffffffffffffff8) + 8;
      if ((uStack_200 | 7) != 0x17) {
        uVar11 = uStack_200 | 7;
      }
      ppppuVar10 = (undefined8 ****)(uVar11 + 1);
      __Znwm();
      uStack_210 = uVar11 + 1 | 0x8000000000000000;
      uStack_218 = uVar2;
      pppuStack_220 = ppppuVar10;
LAB_003d9d7c:
      _memmove(ppppuVar10,uVar6,uVar2);
    }
    *(undefined1 *)((long)ppppuVar10 + uVar2) = 0;
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                 ,0x35,0,"Port %s is out of range or null.");
    if ((long)uStack_210 < 0) {
      __ZdlPv(pppuStack_220);
    }
  }
  uVar6 = uStack_1f0;
  uVar7 = uStack_1f8;
  if (0x7ffffffffffffff7 < uStack_1f0) {
    func_0x0033b318(&pppuStack_220);
LAB_003d9f60:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x3d9f64);
    (*pcVar8)();
  }
  if (uStack_1f0 < 0x17) {
    uStack_210 = CONCAT17((char)uStack_1f0,(undefined7)uStack_210);
    ppppuVar10 = &pppuStack_220;
    if (uStack_1f0 != 0) goto LAB_003d9e2c;
  }
  else {
    uVar2 = (uStack_1f0 & 0xfffffffffffffff8) + 8;
    if ((uStack_1f0 | 7) != 0x17) {
      uVar2 = uStack_1f0 | 7;
    }
    ppppuVar10 = (undefined8 ****)(uVar2 + 1);
    __Znwm();
    uStack_210 = uVar2 + 1 | 0x8000000000000000;
    uStack_218 = uVar6;
    pppuStack_220 = ppppuVar10;
LAB_003d9e2c:
    _memmove(ppppuVar10,uVar7,uVar6);
  }
  *(undefined1 *)((long)ppppuVar10 + uVar6) = 0;
  if (*(char *)(extraout_x8 + 0x9f) < '\0') {
    __ZdlPv(*puVar16);
  }
  *(ulong *)(extraout_x8 + 0x90) = uStack_218;
  *puVar16 = (ulong)pppuStack_220;
  *(ulong *)(extraout_x8 + 0x98) = uStack_210;
  puVar3 = *(ulong **)(extraout_x8 + 0x88);
  if (-1 < *(char *)(extraout_x8 + 0x9f)) {
    puVar3 = puVar16;
  }
  FUN_003a04bc(&uStack_228,extraout_x8,puVar3,*(undefined4 *)(extraout_x8 + 0xa0));
  if (uStack_228 != 0) {
    uStack_230 = uStack_228;
    if ((uStack_228 & 1) != 0) {
      piVar14 = (int *)(uStack_228 - 1);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = *piVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_003be004(&pppuStack_220,&uStack_230);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/authorization/evaluate_args.cc"
                 ,0x3c,0,"Address %s is not IPv4/IPv6. Error: %s");
    if ((long)uStack_210 < 0) {
      __ZdlPv(pppuStack_220);
    }
    if ((uStack_230 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_228 & 1) != 0) {
      FUN_0055293c();
    }
  }
LAB_003d9f1c:
  plVar12 = alStack_1e8;
  FUN_0035afe0(plVar12);
  return plVar12;
}



/* Entry: 003d9fec; end: 003da063;  */

undefined8 *
FUN_003d9fec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_009e0c20;
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  *puVar1 = *param_2;
  *param_2 = 0;
  FUN_003d9fe8(param_1 + 2,*puVar1);
  param_1[0x3a] = 0;
  param_1[0x3a] = *param_4;
  *param_4 = 0;
  return param_1;
}



/* Entry: 003da064; end: 003da22b;  */

long ** FUN_003da064(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long **pplVar5;
  int iVar6;
  long *plStack_220;
  long *plStack_218;
  long **pplStack_210;
  undefined1 auStack_208 [40];
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_108;
  char cStack_f1;
  undefined8 uStack_60;
  char cStack_49;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar4 = param_2;
  FUN_003a2164(param_2,"grpc.auth_context",0x11);
  FUN_003a2164(param_2,"grpc.authorization_policy_provider",0x22);
  if (param_2 == (long *)0x0) {
    func_0x005535e8(&pplStack_210,"Failed to get authorization provider.",0x25);
    iVar6 = (int)&pplStack_210;
    FUN_003da770(param_1);
    pplVar5 = pplStack_210;
    if (((ulong)pplStack_210 & 1) != 0) {
      FUN_0055293c();
      pplVar5 = pplStack_210;
    }
  }
  else {
    if (plVar4 != (long *)0x0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar1 = param_2 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 0x100000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_220 = param_2;
    plStack_218 = plVar4;
    FUN_003d9fec(&pplStack_210,&plStack_218,0,&plStack_220);
    iVar6 = (int)&pplStack_210;
    FUN_003da7c8(param_1);
    FUN_003da6dc(auStack_40);
    if (cStack_49 < '\0') {
      __ZdlPv(uStack_60);
    }
    if (cStack_f1 < '\0') {
      __ZdlPv(uStack_108);
    }
    if (lStack_1c8 != 0) {
      lStack_1c0 = lStack_1c8;
      __ZdlPv();
    }
    if (lStack_1e0 != 0) {
      lStack_1d8 = lStack_1e0;
      __ZdlPv();
    }
    FUN_003da5d0(auStack_208);
    FUN_003da6dc(&plStack_220);
    pplVar5 = &plStack_218;
    FUN_003da5d0();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pplVar5;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x0040cf10();
    FUN_0033c494(&pplStack_210);
  }
  __Unwind_Resume();
  FUN_003da6dc(pplVar5 + 0x3a);
  if (*(char *)((long)pplVar5 + 0x1c7) < '\0') {
    __ZdlPv(pplVar5[0x36]);
  }
  if (*(char *)((long)pplVar5 + 0x11f) < '\0') {
    __ZdlPv(pplVar5[0x21]);
  }
  if (pplVar5[9] != (long *)0x0) {
    pplVar5[10] = pplVar5[9];
    __ZdlPv();
  }
  if (pplVar5[6] != (long *)0x0) {
    pplVar5[7] = pplVar5[6];
    __ZdlPv();
  }
  FUN_003da5d0(pplVar5 + 1);
  return pplVar5;
}



/* Entry: 003da22c; end: 003da29b;  */

long FUN_003da22c(long param_1)

{
  FUN_003da6dc(param_1 + 0x1d0);
  if (*(char *)(param_1 + 0x1c7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x1b0));
  }
  if (*(char *)(param_1 + 0x11f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x108));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  FUN_003da5d0(param_1 + 8);
  return param_1;
}



/* Entry: 003da29c; end: 003da3d3;  */

undefined8 FUN_003da29c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int aiStack_60 [2];
  undefined8 uStack_58;
  char cStack_41;
  long *plStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = *param_2;
  lStack_28 = param_1 + 0x10;
  (**(code **)(**(long **)(param_1 + 0x1d0) + 0x18))(&plStack_40);
  if (plStack_38 == (long *)0x0) {
LAB_003da304:
    if (plStack_40 != (long *)0x0) {
      (**(code **)(*plStack_40 + 0x10))(aiStack_60,plStack_40,&uStack_30);
      if (cStack_41 < '\0') {
        __ZdlPv(uStack_58);
      }
      if (aiStack_60[0] == 0) {
        uVar6 = 1;
        goto LAB_003da334;
      }
    }
  }
  else {
    (**(code **)(*plStack_38 + 0x10))(aiStack_60,plStack_38,&uStack_30);
    iVar4 = aiStack_60[0];
    if (cStack_41 < '\0') {
      __ZdlPv(uStack_58);
    }
    if (iVar4 != 1) goto LAB_003da304;
  }
  uVar6 = 0;
LAB_003da334:
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plStack_38 + 8))();
    }
  }
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plStack_40 + 8))();
    }
  }
  return uVar6;
}



/* Entry: 003da3d4; end: 003da453;  */

long * FUN_003da3d4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[1];
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  plVar4 = (long *)*param_1;
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}


