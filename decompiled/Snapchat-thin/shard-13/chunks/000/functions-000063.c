/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109fcd634; end: 109fcd887;  */

void FUN_109fcd634(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x78) + param_2 * 0x30);
  plStack_68 = (long *)puVar2[1];
  uStack_70 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  plStack_58 = (long *)puVar2[3];
  uStack_60 = puVar2[2];
  puVar2[2] = 0;
  puVar2[3] = 0;
  uStack_50 = puVar2[4];
  uStack_48 = *(undefined1 *)(puVar2 + 5);
  uStack_7f = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  plStack_98 = (long *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_87 = 0;
  uStack_90 = 0;
  lVar6 = *(long *)(param_1 + 0x78) + param_2 * 0x30;
  FUN_109fcd474(lVar6,&uStack_a0);
  func_0x000109fcd4d8(lVar6 + 0x10,&uStack_90);
  *(ulong *)(lVar6 + 0x20) = CONCAT71(uStack_7f,uStack_80);
  *(undefined1 *)(lVar6 + 0x28) = uStack_78;
  plVar5 = (long *)CONCAT71(uStack_87,uStack_88);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
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
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)param_2);
  func_0x0001099022c0(param_1 + 0x98,&uStack_a0);
  func_0x000109a08668(param_3);
  plVar5 = plStack_68;
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_58;
  uStack_60 = 0;
  plStack_58 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001095b0028(param_3);
  plVar5 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 109fcd888; end: 109fcd9bb;  */

void FUN_109fcd888(ulong *param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puStack_78;
  undefined1 uStack_69;
  ulong *puStack_68;
  undefined4 *puStack_60;
  undefined1 **ppuStack_58;
  ulong *puStack_50;
  undefined1 *puStack_48;
  undefined4 uStack_40;
  undefined4 uStack_34;
  
  puStack_50 = param_1 + 1;
  puStack_48 = (undefined1 *)CONCAT71(puStack_48._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  plVar1 = (long *)*param_1;
  (**(code **)(*plVar1 + 0x38))();
  if (((ulong)plVar1 & 1) == 0) {
    uVar3 = param_1[0xf];
    uVar2 = param_1[0x10];
    if (uVar2 != uVar3) {
      uVar4 = 0;
      lVar5 = 0x10;
      do {
        if (*(long *)(uVar3 + lVar5) != 0) {
          FUN_109fcd634(param_1,uVar4,&puStack_50);
          uVar3 = param_1[0xf];
          uVar2 = param_1[0x10];
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x30;
      } while (uVar4 < (ulong)(((long)(uVar2 - uVar3) >> 4) * -0x5555555555555555));
    }
  }
  else {
    FUN_109fcd9bc(param_1,&puStack_50);
  }
  if ((char)puStack_48 == '\x01') {
    __ZNSt3__15mutex6unlockEv(puStack_50);
  }
  uStack_69 = 1;
  puStack_68 = param_1 + 0x12;
  puStack_78 = &uStack_69;
  uStack_34 = 0;
  uStack_40 = 0;
  puStack_60 = &uStack_34;
  ppuStack_58 = &puStack_78;
  puStack_50 = puStack_68;
  puStack_48 = puStack_78;
  FUN_109fcdcb0(&puStack_68,&puStack_50,0);
  return;
}



/* Entry: 109fcd9bc; end: 109fcdbcb;  */

/* WARNING: Removing unreachable block (ram,0x000109fcdb48) */
/* WARNING: Removing unreachable block (ram,0x000109fcdb4c) */
/* WARNING: Removing unreachable block (ram,0x000109fcdb54) */
/* WARNING: Removing unreachable block (ram,0x000109fcdb5c) */
/* WARNING: Removing unreachable block (ram,0x000109fcdb60) */

void FUN_109fcd9bc(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  
  lVar4 = *(long *)(param_1 + 0x78);
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 != lVar4) {
    uVar7 = 0;
    do {
      lVar6 = lVar4 + uVar7 * 0x30;
      plVar9 = *(long **)(lVar6 + 0x10);
      if ((plVar9 != (long *)0x0) && ((*(byte *)(lVar6 + 0x28) & 1) == 0)) {
        *(undefined1 *)(lVar6 + 0x28) = 1;
        plVar8 = *(long **)(lVar6 + 0x18);
        if (plVar8 != (long *)0x0) {
          plVar3 = plVar8 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = *plVar3 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          lVar4 = *(long *)(param_1 + 0x78);
        }
        lVar4 = *(long *)(lVar4 + uVar7 * 0x30 + 0x20);
        func_0x000109a08668(param_2);
        plVar3 = plVar9;
        (**(code **)(*plVar9 + 0x30))(plVar9,lVar4);
        if ((int)plVar3 != 1) {
          (**(code **)(*plVar9 + 0x40))(plVar9);
        }
        func_0x0001095b0028(param_2);
        lVar5 = *(long *)(param_1 + 0x78) + uVar7 * 0x30;
        if (((*(long **)(lVar5 + 0x10) == plVar9) && (*(long *)(lVar5 + 0x20) == lVar4)) &&
           ((*(byte *)(lVar5 + 0x28) & 1) != 0)) {
          if (plVar8 != (long *)0x0) {
            plVar9 = plVar8 + 1;
            do {
              lVar4 = *plVar9;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar2) {
                *plVar9 = lVar4 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar4 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          FUN_109fcd634(param_1,uVar7,param_2);
        }
        else {
          func_0x000109a08668(param_2);
          if (plVar8 != (long *)0x0) {
            plVar9 = plVar8 + 1;
            do {
              lVar4 = *plVar9;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar2) {
                *plVar9 = lVar4 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar4 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          func_0x0001095b0028(param_2);
        }
        lVar4 = *(long *)(param_1 + 0x78);
        lVar5 = *(long *)(param_1 + 0x80);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulong)((lVar5 - lVar4 >> 4) * -0x5555555555555555));
  }
  return;
}



/* Entry: 109fcdbcc; end: 109fcdc0b;  */

void FUN_109fcdbcc(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_109fcdc0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 109fcdc0c; end: 109fcdc63;  */

void FUN_109fcdc0c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    func_0x0001092328e4(lVar1 + -0x20);
    func_0x000109231d98(lVar1 + -0x30);
    lVar1 = lVar1 + -0x30;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 109fcdc64; end: 109fcdc9b;  */

void FUN_109fcdc64(long *param_1)

{
  if (*param_1 != 0) {
    FUN_109fcdc0c();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 109fcdc9c; end: 109fcdcaf;  */

bool FUN_109fcdc9c(undefined8 param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  puVar3 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puVar4 = puVar3;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar6 = 0;
  puVar5 = puVar4;
  while( true ) {
    if ((*(int *)puVar3[1] - 1U < 2) || (*(int *)puVar3[1] == 5)) {
      bVar1 = *(byte *)*puVar3;
    }
    else {
      bVar1 = *(byte *)*puVar3;
    }
    bVar2 = **(byte **)puVar3[2];
    if (bVar2 != (bVar1 & 1)) break;
    if (uVar6 < 0x40) {
      uVar6 = uVar6 + 1;
    }
    else {
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (((param_3 != 0) && (param_3 < (long)puVar5 - (long)puVar4)) ||
         (puVar5 = param_2, FUN_109fcdd74(), (int)puVar5 != 0)) break;
    }
  }
  return bVar2 != (bVar1 & 1);
}



/* Entry: 109fcdcb0; end: 109fcdd73;  */

bool FUN_109fcdcb0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar3 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar5 = 0;
  puVar4 = puVar3;
  while( true ) {
    if ((*(int *)param_1[1] - 1U < 2) || (*(int *)param_1[1] == 5)) {
      bVar1 = *(byte *)*param_1;
    }
    else {
      bVar1 = *(byte *)*param_1;
    }
    bVar2 = **(byte **)param_1[2];
    if (bVar2 != (bVar1 & 1)) break;
    if (uVar5 < 0x40) {
      uVar5 = uVar5 + 1;
    }
    else {
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (((param_3 != 0) && (param_3 < (long)puVar4 - (long)puVar3)) ||
         (puVar4 = param_2, FUN_109fcdd74(), (int)puVar4 != 0)) break;
    }
  }
  return bVar2 != (bVar1 & 1);
}



/* Entry: 109fcdd74; end: 109fcde33;  */

undefined8 * FUN_109fcdd74(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  if (param_2 < 0xfa1) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *param_1;
    func_0x000109fcddcc(param_1,uVar1,&uStack_28);
    if (((ulong)param_1 & 1) == 0) {
      __ZNSt3__120__libcpp_atomic_waitEPVKvx(uVar1,uStack_28);
    }
  }
  return param_1;
}



/* Entry: 109fcde34; end: 109fce00b;  */

long * FUN_109fcde34(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  char cStack_70;
  undefined8 *puStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_1;
  puStack_80 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  uVar6 = *param_1;
  *param_1 = 0;
  _pthread_setspecific(*puVar4,uVar6);
  puVar4 = (undefined8 *)param_1[1];
  (**(code **)(*(long *)*puVar4 + 0x28))(&puStack_68,(long *)*puVar4,param_1[2]);
  if ((*(byte *)(puVar4 + 0x19) & 1) != 0) {
    puVar1 = puVar4 + 0x12;
    do {
      cStack_70 = '\x01';
      puStack_78 = puVar4 + 1;
      __ZNSt3__15mutex4lockEv(puVar4 + 1);
      while ((((long)(puVar4[0x10] - puVar4[0xf]) >> 4) * -0x5555555555555555 - puVar4[0x18] == 0 &&
             ((*(byte *)(puVar4 + 0x19) & 1) != 0))) {
        __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(puVar4 + 9,&puStack_78);
      }
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *(undefined1 *)puVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_109fcd9bc(puVar4,&puStack_78);
      *(undefined1 *)puVar1 = 0;
      __ZNSt3__123__cxx_atomic_notify_oneEPVKv(puVar1);
      if (cStack_70 == '\x01') {
        __ZNSt3__15mutex6unlockEv(puStack_78);
      }
    } while ((*(byte *)(puVar4 + 0x19) & 1) != 0);
  }
  if (puStack_68 != (undefined8 *)0x0) {
    (*(code *)puStack_68[2])(auStack_60);
    if (puStack_68 != (undefined8 *)0x0) {
      (*(code *)*puStack_68)(auStack_60);
    }
  }
  FUN_109fce00c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (long *)0x0;
  }
  ___stack_chk_fail();
  FUN_109fce00c(&puStack_80);
  __Unwind_Resume();
  lVar7 = (long)*ppuVar5;
  *ppuVar5 = (undefined8 *)0x0;
  if (lVar7 != 0) {
    func_0x000109231908(lVar7 + 0x10);
    func_0x0001094a35b0(lVar7,0);
    __ZdlPv(lVar7);
  }
  return (long *)ppuVar5;
}



/* Entry: 109fce00c; end: 109fce053;  */

long * FUN_109fce00c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000109231908(lVar1 + 0x10);
    func_0x0001094a35b0(lVar1,0);
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109fce054; end: 109fce273;  */

void FUN_109fce054(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  
  lVar5 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  do {
    *(undefined2 *)((long)param_1 + lVar5) = 0xff;
    lVar5 = lVar5 + 2;
  } while (lVar5 != 0x24);
  puVar6 = (undefined8 *)((long)param_1 + 0x24);
  *puVar6 = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  iVar4 = *(int *)(param_2 + 0x6a8);
  *(int *)((long)param_1 + 0x34) = iVar4;
  if (iVar4 != 0) {
    uVar8 = 0;
    do {
      puVar9 = (uint *)(param_2 + 0x368 + uVar8 * 0xd0);
      uVar7 = (uint)uVar8;
      bVar2 = (byte)uVar8;
      if (*(long *)(puVar9 + 8) != 0) {
        lVar5 = *(long *)(puVar9 + 8) << 3;
        puVar10 = puVar9;
        do {
          if (*puVar10 < 0x12) {
            *(uint *)((long)puVar6 + uVar8 * 4) =
                 *(uint *)((long)puVar6 + uVar8 * 4) | 1 << (ulong)(*puVar10 & 0x1f);
            pbVar1 = (byte *)((long)param_1 + (ulong)*puVar10 * 2);
            bVar3 = *pbVar1;
            if ((uVar7 & 0xff) <= (uint)*pbVar1) {
              bVar3 = bVar2;
            }
            *pbVar1 = bVar3;
            bVar3 = pbVar1[1];
            if ((uint)pbVar1[1] <= (uVar7 & 0xff)) {
              bVar3 = bVar2;
            }
            pbVar1[1] = bVar3;
          }
          puVar10 = puVar10 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
      if (*(long *)(puVar9 + 0x1a) != 0) {
        lVar5 = *(long *)(puVar9 + 0x1a) << 3;
        puVar10 = puVar9 + 10;
        do {
          if (*puVar10 < 0x12) {
            *(uint *)((long)puVar6 + uVar8 * 4) =
                 *(uint *)((long)puVar6 + uVar8 * 4) | 1 << (ulong)(*puVar10 & 0x1f);
            pbVar1 = (byte *)((long)param_1 + (ulong)*puVar10 * 2);
            bVar3 = *pbVar1;
            if ((uVar7 & 0xff) <= (uint)*pbVar1) {
              bVar3 = bVar2;
            }
            *pbVar1 = bVar3;
            bVar3 = pbVar1[1];
            if ((uint)pbVar1[1] <= (uVar7 & 0xff)) {
              bVar3 = bVar2;
            }
            pbVar1[1] = bVar3;
          }
          puVar10 = puVar10 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
      if (*(long *)(puVar9 + 0x2c) != 0) {
        lVar5 = *(long *)(puVar9 + 0x2c) << 3;
        puVar10 = puVar9 + 0x1c;
        do {
          if (*puVar10 < 0x12) {
            *(uint *)((long)puVar6 + uVar8 * 4) =
                 *(uint *)((long)puVar6 + uVar8 * 4) | 1 << (ulong)(*puVar10 & 0x1f);
            pbVar1 = (byte *)((long)param_1 + (ulong)*puVar10 * 2);
            bVar3 = *pbVar1;
            if ((uVar7 & 0xff) <= (uint)*pbVar1) {
              bVar3 = bVar2;
            }
            *pbVar1 = bVar3;
            bVar3 = pbVar1[1];
            if ((uint)pbVar1[1] <= (uVar7 & 0xff)) {
              bVar3 = bVar2;
            }
            pbVar1[1] = bVar3;
          }
          puVar10 = puVar10 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
      if (puVar9[0x2e] < 0x12) {
        *(uint *)((long)puVar6 + uVar8 * 4) =
             *(uint *)((long)puVar6 + uVar8 * 4) | 1 << (ulong)(puVar9[0x2e] & 0x1f);
        pbVar1 = (byte *)((long)param_1 + (ulong)puVar9[0x2e] * 2);
        bVar3 = *pbVar1;
        if ((uVar7 & 0xff) <= (uint)*pbVar1) {
          bVar3 = bVar2;
        }
        *pbVar1 = bVar3;
        bVar3 = pbVar1[1];
        if ((uint)pbVar1[1] <= (uVar7 & 0xff)) {
          bVar3 = bVar2;
        }
        pbVar1[1] = bVar3;
      }
      if (puVar9[0x30] < 0x12) {
        *(uint *)((long)puVar6 + uVar8 * 4) =
             *(uint *)((long)puVar6 + uVar8 * 4) | 1 << (ulong)(puVar9[0x30] & 0x1f);
        pbVar1 = (byte *)((long)param_1 + (ulong)puVar9[0x30] * 2);
        bVar3 = *pbVar1;
        if ((uVar7 & 0xff) <= (uint)*pbVar1) {
          bVar3 = bVar2;
        }
        *pbVar1 = bVar3;
        bVar3 = pbVar1[1];
        if ((uint)pbVar1[1] <= (uVar7 & 0xff)) {
          bVar3 = bVar2;
        }
        pbVar1[1] = bVar3;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)((long)param_1 + 0x34));
  }
  return;
}



/* Entry: 109fce274; end: 109fce37f;  */

void FUN_109fce274(undefined8 *param_1,long param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_3 + 0x734);
  lVar4 = *(long *)(param_2 + 0xb0);
  uVar6 = *(undefined8 *)(param_2 + 0xa8);
  param_1[1] = *(undefined8 *)(param_2 + 0xb0);
  *param_1 = uVar6;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar7 = param_4[1];
  uVar6 = *param_4;
  if (param_4[1] != 0) {
    plVar5 = (long *)(param_4[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = *(long **)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0xb0) = uVar7;
  *(undefined8 *)(param_2 + 0xa8) = uVar6;
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



/* Entry: 109fce380; end: 109fce473;  */

ulong * FUN_109fce380(ulong *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  ulong *puVar2;
  undefined1 **ppuVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  uint uVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined4 *extraout_x8;
  undefined *puVar16;
  ulong *puVar17;
  ulong uVar18;
  int iVar19;
  ulong uStack_330;
  undefined ***pppuStack_328;
  ulong uStack_320;
  undefined **ppuStack_310;
  undefined1 auStack_308 [24];
  uint auStack_2f0 [24];
  long lStack_290;
  undefined **appuStack_170 [6];
  undefined8 uStack_140;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  long lStack_d8;
  undefined1 *puStack_80;
  code *pcStack_78;
  
  if (param_3 == 0) {
    *(undefined1 *)((long)param_1 + 0x17) = 0;
  }
  else {
    if (*(char *)((long)param_2 + (param_3 - 1)) == ']') {
      uVar15 = 0;
      puVar17 = param_2;
      do {
        puVar17 = (ulong *)((long)puVar17 - 1);
        if (param_3 == uVar15) goto LAB_109fce3e0;
        uVar15 = uVar15 + 1;
      } while (*(char *)((long)puVar17 + param_3) != '[');
      if (param_3 + 1 != uVar15) {
        param_3 = param_3 - uVar15;
        if (0x7ffffffffffffff7 < param_3) {
          func_0x000104c4f6b8();
          ppuVar3 = &puStack_80;
          lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar17 = param_2;
          if (param_2 != param_1) {
            puVar2 = (ulong *)param_1[3];
            puVar14 = (ulong *)param_2[3];
            if (puVar2 == param_1) {
              if (puVar14 == param_2) {
                (**(code **)(*puVar2 + 0x18))(puVar2,&puStack_80);
                (**(code **)(*(long *)param_1[3] + 0x20))();
                param_1[3] = 0;
                (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
                (**(code **)(*(long *)param_2[3] + 0x20))();
                param_2[3] = 0;
                param_1[3] = (ulong)param_1;
                (**(code **)(puStack_80 + 0x18))(&puStack_80);
                (**(code **)(puStack_80 + 0x20))();
              }
              else {
                (**(code **)(*puVar2 + 0x18))();
                ppuVar3 = (undefined1 **)param_1[3];
                (**(code **)((long)*ppuVar3 + 0x20))();
                param_1[3] = param_2[3];
              }
              param_2[3] = (ulong)param_2;
              param_1 = (ulong *)ppuVar3;
            }
            else if (puVar14 == param_2) {
              puVar17 = param_1;
              (**(code **)(*puVar14 + 0x18))(puVar14);
              puVar2 = (ulong *)param_2[3];
              (**(code **)(*puVar2 + 0x20))();
              param_2[3] = param_1[3];
              param_1[3] = (ulong)param_1;
              param_1 = puVar2;
            }
            else {
              param_1[3] = (ulong)puVar14;
              param_2[3] = (ulong)puVar2;
              param_1 = puVar2;
            }
          }
          iVar19 = (int)puVar17;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
            return param_1;
          }
          ___stack_chk_fail();
          if (iVar19 == 0) {
            __Unwind_Resume();
          }
          func_0x000104bd46a0();
          *param_1 = (ulong)&PTR_DAT_1107ec7d0;
          func_0x000104c00298(param_1 + 0x10);
          func_0x000100601aa4(param_1 + 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(param_1);
          return param_1;
        }
        if (param_3 < 0x17) {
          *(char *)((long)param_1 + 0x17) = (char)param_3;
          puVar2 = param_1;
          if (param_3 == 0) goto code_r0x000104c54d08;
        }
        else {
          puVar17 = (ulong *)0x19;
          if ((param_3 | 7) != 0x17) {
            puVar17 = (ulong *)((param_3 | 7) + 1);
          }
          puVar2 = puVar17;
          __Znwm();
          param_1[1] = param_3;
          param_1[2] = (ulong)puVar17 | 0x8000000000000000;
          *param_1 = (ulong)puVar2;
        }
        _memmove(puVar2,param_2,param_3);
code_r0x000104c54d08:
        *(undefined1 *)((long)puVar2 + param_3) = 0;
        return param_1;
      }
    }
LAB_109fce3e0:
    if (0x7ffffffffffffff7 < param_3) {
      func_0x000104c4f6b8();
      puStack_80 = &stack0xffffffffffffffc0;
      *extraout_x8 = 0;
      puVar17 = (ulong *)(extraout_x8 + 2);
      *(undefined8 *)(extraout_x8 + 4) = 0;
      *puVar17 = 0;
      *(undefined8 *)(extraout_x8 + 8) = 0;
      *(undefined8 *)(extraout_x8 + 6) = 0;
      *(undefined8 *)(extraout_x8 + 0xc) = 0;
      *(undefined8 *)(extraout_x8 + 10) = 0;
      *(undefined8 *)(extraout_x8 + 0x10) = 0;
      *(undefined8 *)(extraout_x8 + 0xe) = 0;
      *(undefined8 *)(extraout_x8 + 0x14) = 0;
      *(undefined8 *)(extraout_x8 + 0x12) = 0;
      *(undefined8 *)(extraout_x8 + 0x16) = 0;
      *(undefined8 *)(extraout_x8 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(extraout_x8 + 0x1c) = 0;
      *(undefined8 *)(extraout_x8 + 0x1a) = 0;
      *(undefined8 *)(extraout_x8 + 0x20) = 0;
      *(undefined8 *)(extraout_x8 + 0x1e) = 0;
      *(undefined8 *)(extraout_x8 + 0x22) = 0;
      if ((param_3 & 0xffffffff) < param_2[0xd5]) {
        param_3 = param_3 & 0xffffffff;
        puVar2 = puVar17;
        FUN_109fce598(puVar17,param_2[param_3 * 0x1a + 0x7a]);
        uVar15 = param_2[param_3 * 0x1a + 0x7a];
        if (uVar15 != 0) {
          puVar14 = param_2 + param_3 * 0x1a + 0x72;
          uVar18 = 1;
          do {
            *(int *)puVar17 = (int)param_2[(ulong)(uint)*puVar14 * 6 + 2];
            bVar1 = uVar18 < uVar15;
            puVar14 = puVar14 + 1;
            uVar18 = (ulong)((int)uVar18 + 1);
            puVar17 = (ulong *)((long)puVar17 + 4);
          } while (bVar1);
        }
        if ((uint)param_2[param_3 * 0x1a + 0x84] == 0xffffffff) {
          uVar12 = extraout_x8[0xc];
        }
        else {
          uVar12 = (uint)param_2[(ulong)(uint)param_2[param_3 * 0x1a + 0x84] * 6 + 2];
          extraout_x8[0xc] = uVar12;
        }
        if ((param_4 & 1) == 0) {
          ppuVar9 = &PTR_DAT_110ae4700 + (ulong)uVar12 * 4;
          if (0x56 < uVar12) {
            ppuVar9 = &PTR_DAT_110ae4700;
          }
          if ((*(byte *)((long)ppuVar9 + 0x14) >> 1 & 1) == 0) {
            uVar12 = 0;
          }
        }
        extraout_x8[0xd] = uVar12;
        return puVar2;
      }
      puVar17 = (ulong *)&UNK_10f62eab3;
      func_0x000109243bf8();
      pcStack_78 = FUN_109fce598;
      if (param_3 < 9) {
        uVar15 = puVar17[4];
        puVar2 = puVar17;
        if (uVar15 <= param_3 && param_3 - uVar15 != 0) {
          puVar2 = (ulong *)((long)puVar17 + uVar15 * 4);
          _bzero(puVar2,(param_3 - uVar15) * 4);
        }
        puVar17[4] = param_3;
        return puVar2;
      }
      plVar4 = (long *)0x10;
      ___cxa_allocate_exception();
      func_0x000104c4f71c();
      plVar5 = plVar4;
      puVar8 = PTR___ZTISt12length_error_110352238;
      puVar11 = PTR___ZNSt12length_errorD1Ev_110346170;
      ___cxa_throw(plVar4,PTR___ZTISt12length_error_110352238);
      ___cxa_free_exception(plVar4);
      __Unwind_Resume();
      lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_140 = 0;
      ppuStack_310 = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11087cbb0;
      appuStack_170[0] = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11087cbd8
      ;
      puVar6 = auStack_308;
      __ZNSt3__18ios_base4initEPv(appuStack_170);
      uStack_e8 = 0;
      uStack_e0 = 0xffffffff;
      ppuStack_310 = &PTR_DAT_11087cb40;
      appuStack_170[0] = &PTR_DAT_11087cb68;
      func_0x000107c28024(auStack_308);
      __ZNKSt3__14__fs10filesystem4path13__parent_pathEv(plVar5);
      if (puVar6 != (undefined1 *)0x0) {
        func_0x0001092ac3b8(&uStack_330,plVar5);
        __ZNSt3__14__fs10filesystem20__create_directoriesERKNS1_4pathEPNS_10error_codeE
                  (&uStack_330,0);
        if ((long)uStack_320 < 0) {
          __ZdlPv(uStack_330);
        }
      }
      puVar16 = ppuStack_310[-3];
      *(undefined4 *)(puVar16 + (long)(auStack_2f0 + 1)) = 5;
      __ZNSt3__18ios_base5clearEj
                (auStack_308 + (long)(puVar16 + -8),
                 *(undefined4 *)((long)auStack_2f0 + (long)puVar16));
      plVar4 = (long *)*plVar5;
      if (-1 < *(char *)((long)plVar5 + 0x17)) {
        plVar4 = plVar5;
      }
      func_0x00010967dda8(&ppuStack_310,plVar4,0x34);
      if (puVar11 != (undefined *)0x0) {
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_310,puVar8,puVar11);
      }
      puVar6 = auStack_308;
      func_0x000107c27ffc();
      if (puVar6 == (undefined1 *)0x0) {
        __ZNSt3__18ios_base5clearEj
                  (auStack_308 + (long)(ppuStack_310[-3] + -8),
                   *(uint *)((long)auStack_2f0 + (long)ppuStack_310[-3]) | 4);
      }
      puVar17 = (ulong *)0x1;
      do {
        ppuStack_310 = &PTR_DAT_11087cb40;
        appuStack_170[0] = &PTR_DAT_11087cb68;
        func_0x000107c28018(auStack_308);
        ppuVar9 = &PTR_PTR_11087cb80;
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_310);
        pppuVar7 = appuStack_170;
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
          return puVar17;
        }
        ___stack_chk_fail();
        ppuVar10 = ppuVar9;
        if ((long)uStack_320 < 0) {
          __ZdlPv(uStack_330);
        }
        while (iVar19 = (int)ppuVar9, iVar19 != 3) {
          if (iVar19 == 2) {
            ___cxa_begin_catch();
            (*(code *)(*pppuVar7)[2])();
            if (*(char *)((long)puVar17 + 0x17) < '\0') {
              func_0x000107c3192c(&uStack_330,*puVar17,puVar17[1]);
            }
            else {
              pppuStack_328 = (undefined ***)puVar17[1];
              uStack_330 = *puVar17;
              uStack_320 = puVar17[2];
            }
            func_0x00010924a40c(4,&UNK_10f62eb39);
            if ((long)uStack_320 < 0) {
              __ZdlPv(uStack_330);
            }
            if (lStack_290 != 0) {
              pppuVar7 = &ppuStack_310;
              func_0x000107c28014();
              uStack_330 = uStack_330 & 0xffffffff00000000;
              __ZNSt3__115system_categoryEv();
              pppuStack_328 = pppuVar7;
              __ZNSt3__14__fs10filesystem8__removeERKNS1_4pathEPNS_10error_codeE
                        (puVar17,&uStack_330);
            }
            ___cxa_end_catch();
            goto LAB_109fce93c;
          }
          if (iVar19 == 1) {
            ___cxa_begin_catch();
            (*(code *)(*pppuVar7)[2])();
            func_0x00010924a40c(4,&UNK_10f62eb0c);
            ___cxa_end_catch();
            goto LAB_109fce93c;
          }
          func_0x000107c28010(&ppuStack_310);
          __Unwind_Resume();
          ppuVar9 = ppuVar10;
        }
        ___cxa_begin_catch();
        (*(code *)(*pppuVar7)[2])();
        func_0x00010924a40c(4,&UNK_10f62eb6c);
        ___cxa_end_catch();
LAB_109fce93c:
        puVar17 = (ulong *)0x0;
      } while( true );
    }
    if (param_3 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_3;
      puVar2 = param_1;
    }
    else {
      puVar17 = (ulong *)0x19;
      if ((param_3 | 7) != 0x17) {
        puVar17 = (ulong *)((param_3 | 7) + 1);
      }
      puVar2 = puVar17;
      __Znwm();
      param_1[1] = param_3;
      param_1[2] = (ulong)puVar17 | 0x8000000000000000;
      *param_1 = (ulong)puVar2;
    }
    puVar17 = puVar2;
    _memmove(puVar2,param_2,param_3);
    param_2 = puVar17;
    param_1 = puVar2;
  }
  *(undefined1 *)((long)param_1 + param_3) = 0;
  return param_2;
}



/* Entry: 109fce474; end: 109fce597;  */

ulong * FUN_109fce474(undefined4 *param_1,long param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  uint uVar11;
  ulong uVar12;
  undefined *puVar13;
  uint *puVar14;
  ulong uVar15;
  ulong *puVar16;
  int iVar17;
  long lVar18;
  ulong uStack_300;
  undefined ***pppuStack_2f8;
  ulong uStack_2f0;
  undefined **ppuStack_2e0;
  undefined1 auStack_2d8 [24];
  uint auStack_2c0 [24];
  long lStack_260;
  undefined **appuStack_140 [6];
  undefined8 uStack_110;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  long lStack_a8;
  
  *param_1 = 0;
  puVar16 = (ulong *)(param_1 + 2);
  *(undefined8 *)(param_1 + 4) = 0;
  *puVar16 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  if ((param_3 & 0xffffffff) < *(ulong *)(param_2 + 0x6a8)) {
    lVar18 = param_2 + (param_3 & 0xffffffff) * 0xd0;
    puVar2 = puVar16;
    FUN_109fce598(puVar16,*(undefined8 *)(lVar18 + 0x3d0));
    uVar12 = *(ulong *)(lVar18 + 0x3d0);
    if (uVar12 != 0) {
      puVar14 = (uint *)(lVar18 + 0x390);
      uVar15 = 1;
      do {
        *(undefined4 *)puVar16 = *(undefined4 *)(param_2 + (ulong)*puVar14 * 0x30 + 0x10);
        bVar1 = uVar15 < uVar12;
        puVar14 = puVar14 + 2;
        uVar15 = (ulong)((int)uVar15 + 1);
        puVar16 = (ulong *)((long)puVar16 + 4);
      } while (bVar1);
    }
    if (*(uint *)(lVar18 + 0x420) == 0xffffffff) {
      uVar11 = param_1[0xc];
    }
    else {
      uVar11 = *(uint *)(param_2 + (ulong)*(uint *)(lVar18 + 0x420) * 0x30 + 0x10);
      param_1[0xc] = uVar11;
    }
    if ((param_4 & 1) == 0) {
      ppuVar8 = &PTR_DAT_110ae4700 + (ulong)uVar11 * 4;
      if (0x56 < uVar11) {
        ppuVar8 = &PTR_DAT_110ae4700;
      }
      if ((*(byte *)((long)ppuVar8 + 0x14) >> 1 & 1) == 0) {
        uVar11 = 0;
      }
    }
    param_1[0xd] = uVar11;
    return puVar2;
  }
  puVar16 = (ulong *)&UNK_10f62eab3;
  func_0x000109243bf8();
  if (param_3 < 9) {
    uVar12 = puVar16[4];
    puVar2 = puVar16;
    if (uVar12 <= param_3 && param_3 - uVar12 != 0) {
      puVar2 = (ulong *)((long)puVar16 + uVar12 * 4);
      _bzero(puVar2,(param_3 - uVar12) * 4);
    }
    puVar16[4] = param_3;
    return puVar2;
  }
  plVar3 = (long *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  plVar4 = plVar3;
  puVar7 = PTR___ZTISt12length_error_110352238;
  puVar10 = PTR___ZNSt12length_errorD1Ev_110346170;
  ___cxa_throw(plVar3,PTR___ZTISt12length_error_110352238);
  ___cxa_free_exception(plVar3);
  __Unwind_Resume();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_110 = 0;
  ppuStack_2e0 = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11087cbb0;
  appuStack_140[0] = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11087cbd8;
  puVar5 = auStack_2d8;
  __ZNSt3__18ios_base4initEPv(appuStack_140);
  uStack_b8 = 0;
  uStack_b0 = 0xffffffff;
  ppuStack_2e0 = &PTR_DAT_11087cb40;
  appuStack_140[0] = &PTR_DAT_11087cb68;
  func_0x000107c28024(auStack_2d8);
  __ZNKSt3__14__fs10filesystem4path13__parent_pathEv(plVar4);
  if (puVar5 != (undefined1 *)0x0) {
    func_0x0001092ac3b8(&uStack_300,plVar4);
    __ZNSt3__14__fs10filesystem20__create_directoriesERKNS1_4pathEPNS_10error_codeE(&uStack_300,0);
    if ((long)uStack_2f0 < 0) {
      __ZdlPv(uStack_300);
    }
  }
  puVar13 = ppuStack_2e0[-3];
  *(undefined4 *)(puVar13 + (long)(auStack_2c0 + 1)) = 5;
  __ZNSt3__18ios_base5clearEj
            (auStack_2d8 + (long)(puVar13 + -8),*(undefined4 *)((long)auStack_2c0 + (long)puVar13));
  plVar3 = (long *)*plVar4;
  if (-1 < *(char *)((long)plVar4 + 0x17)) {
    plVar3 = plVar4;
  }
  func_0x00010967dda8(&ppuStack_2e0,plVar3,0x34);
  if (puVar10 != (undefined *)0x0) {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_2e0,puVar7,puVar10);
  }
  puVar5 = auStack_2d8;
  func_0x000107c27ffc();
  if (puVar5 == (undefined1 *)0x0) {
    __ZNSt3__18ios_base5clearEj
              (auStack_2d8 + (long)(ppuStack_2e0[-3] + -8),
               *(uint *)((long)auStack_2c0 + (long)ppuStack_2e0[-3]) | 4);
  }
  puVar16 = (ulong *)0x1;
  do {
    ppuStack_2e0 = &PTR_DAT_11087cb40;
    appuStack_140[0] = &PTR_DAT_11087cb68;
    func_0x000107c28018(auStack_2d8);
    ppuVar8 = &PTR_PTR_11087cb80;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_2e0);
    pppuVar6 = appuStack_140;
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
      return puVar16;
    }
    ___stack_chk_fail();
    ppuVar9 = ppuVar8;
    if ((long)uStack_2f0 < 0) {
      __ZdlPv(uStack_300);
    }
    while (iVar17 = (int)ppuVar8, iVar17 != 3) {
      if (iVar17 == 2) {
        ___cxa_begin_catch();
        (*(code *)(*pppuVar6)[2])();
        if (*(char *)((long)puVar16 + 0x17) < '\0') {
          func_0x000107c3192c(&uStack_300,*puVar16,puVar16[1]);
        }
        else {
          pppuStack_2f8 = (undefined ***)puVar16[1];
          uStack_300 = *puVar16;
          uStack_2f0 = puVar16[2];
        }
        func_0x00010924a40c(4,&UNK_10f62eb39);
        if ((long)uStack_2f0 < 0) {
          __ZdlPv(uStack_300);
        }
        if (lStack_260 != 0) {
          pppuVar6 = &ppuStack_2e0;
          func_0x000107c28014();
          uStack_300 = uStack_300 & 0xffffffff00000000;
          __ZNSt3__115system_categoryEv();
          pppuStack_2f8 = pppuVar6;
          __ZNSt3__14__fs10filesystem8__removeERKNS1_4pathEPNS_10error_codeE(puVar16,&uStack_300);
        }
        ___cxa_end_catch();
        goto LAB_109fce93c;
      }
      if (iVar17 == 1) {
        ___cxa_begin_catch();
        (*(code *)(*pppuVar6)[2])();
        func_0x00010924a40c(4,&UNK_10f62eb0c);
        ___cxa_end_catch();
        goto LAB_109fce93c;
      }
      func_0x000107c28010(&ppuStack_2e0);
      __Unwind_Resume();
      ppuVar8 = ppuVar9;
    }
    ___cxa_begin_catch();
    (*(code *)(*pppuVar6)[2])();
    func_0x00010924a40c(4,&UNK_10f62eb6c);
    ___cxa_end_catch();
LAB_109fce93c:
    puVar16 = (ulong *)0x0;
  } while( true );
}



/* Entry: 109fce598; end: 109fce61f;  */

ulong * FUN_109fce598(ulong *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong *puVar11;
  int iVar12;
  ulong uStack_2c0;
  undefined ***pppuStack_2b8;
  ulong uStack_2b0;
  undefined **ppuStack_2a0;
  undefined1 auStack_298 [24];
  uint auStack_280 [24];
  long lStack_220;
  undefined **appuStack_100 [6];
  undefined8 uStack_d0;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  if (param_2 < 9) {
    uVar9 = param_1[4];
    puVar11 = param_1;
    if (uVar9 <= param_2 && param_2 - uVar9 != 0) {
      puVar11 = (ulong *)((long)param_1 + uVar9 * 4);
      _bzero(puVar11,(param_2 - uVar9) * 4);
    }
    param_1[4] = param_2;
    return puVar11;
  }
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  plVar2 = plVar1;
  puVar5 = PTR___ZTISt12length_error_110352238;
  puVar8 = PTR___ZNSt12length_errorD1Ev_110346170;
  ___cxa_throw(plVar1,PTR___ZTISt12length_error_110352238);
  ___cxa_free_exception(plVar1);
  __Unwind_Resume();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = 0;
  ppuStack_2a0 = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11087cbb0;
  appuStack_100[0] = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11087cbd8;
  puVar3 = auStack_298;
  __ZNSt3__18ios_base4initEPv(appuStack_100);
  uStack_78 = 0;
  uStack_70 = 0xffffffff;
  ppuStack_2a0 = &PTR_DAT_11087cb40;
  appuStack_100[0] = &PTR_DAT_11087cb68;
  func_0x000107c28024(auStack_298);
  __ZNKSt3__14__fs10filesystem4path13__parent_pathEv(plVar2);
  if (puVar3 != (undefined1 *)0x0) {
    func_0x0001092ac3b8(&uStack_2c0,plVar2);
    __ZNSt3__14__fs10filesystem20__create_directoriesERKNS1_4pathEPNS_10error_codeE(&uStack_2c0,0);
    if ((long)uStack_2b0 < 0) {
      __ZdlPv(uStack_2c0);
    }
  }
  puVar10 = ppuStack_2a0[-3];
  *(undefined4 *)(puVar10 + (long)(auStack_280 + 1)) = 5;
  __ZNSt3__18ios_base5clearEj
            (auStack_298 + (long)(puVar10 + -8),*(undefined4 *)((long)auStack_280 + (long)puVar10));
  plVar1 = (long *)*plVar2;
  if (-1 < *(char *)((long)plVar2 + 0x17)) {
    plVar1 = plVar2;
  }
  func_0x00010967dda8(&ppuStack_2a0,plVar1,0x34);
  if (puVar8 != (undefined *)0x0) {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_2a0,puVar5,puVar8);
  }
  puVar3 = auStack_298;
  func_0x000107c27ffc();
  if (puVar3 == (undefined1 *)0x0) {
    __ZNSt3__18ios_base5clearEj
              (auStack_298 + (long)(ppuStack_2a0[-3] + -8),
               *(uint *)((long)auStack_280 + (long)ppuStack_2a0[-3]) | 4);
  }
  puVar11 = (ulong *)0x1;
  do {
    ppuStack_2a0 = &PTR_DAT_11087cb40;
    appuStack_100[0] = &PTR_DAT_11087cb68;
    func_0x000107c28018(auStack_298);
    ppuVar6 = &PTR_PTR_11087cb80;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_2a0);
    pppuVar4 = appuStack_100;
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return puVar11;
    }
    ___stack_chk_fail();
    ppuVar7 = ppuVar6;
    if ((long)uStack_2b0 < 0) {
      __ZdlPv(uStack_2c0);
    }
    while (iVar12 = (int)ppuVar6, iVar12 != 3) {
      if (iVar12 == 2) {
        ___cxa_begin_catch();
        (*(code *)(*pppuVar4)[2])();
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          func_0x000107c3192c(&uStack_2c0,*puVar11,puVar11[1]);
        }
        else {
          pppuStack_2b8 = (undefined ***)puVar11[1];
          uStack_2c0 = *puVar11;
          uStack_2b0 = puVar11[2];
        }
        func_0x00010924a40c(4,&UNK_10f62eb39);
        if ((long)uStack_2b0 < 0) {
          __ZdlPv(uStack_2c0);
        }
        if (lStack_220 != 0) {
          pppuVar4 = &ppuStack_2a0;
          func_0x000107c28014();
          uStack_2c0 = uStack_2c0 & 0xffffffff00000000;
          __ZNSt3__115system_categoryEv();
          pppuStack_2b8 = pppuVar4;
          __ZNSt3__14__fs10filesystem8__removeERKNS1_4pathEPNS_10error_codeE(puVar11,&uStack_2c0);
        }
        ___cxa_end_catch();
        goto LAB_109fce93c;
      }
      if (iVar12 == 1) {
        ___cxa_begin_catch();
        (*(code *)(*pppuVar4)[2])();
        func_0x00010924a40c(4,&UNK_10f62eb0c);
        ___cxa_end_catch();
        goto LAB_109fce93c;
      }
      func_0x000107c28010(&ppuStack_2a0);
      __Unwind_Resume();
      ppuVar6 = ppuVar7;
    }
    ___cxa_begin_catch();
    (*(code *)(*pppuVar4)[2])();
    func_0x00010924a40c(4,&UNK_10f62eb6c);
    ___cxa_end_catch();
LAB_109fce93c:
    puVar11 = (ulong *)0x0;
  } while( true );
}



/* Entry: 109fce620; end: 109fce9af;  */

ulong * FUN_109fce620(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  ulong *puVar7;
  int iVar8;
  ulong uStack_2a0;
  undefined ***pppuStack_298;
  ulong uStack_290;
  undefined **ppuStack_280;
  undefined1 auStack_278 [24];
  uint auStack_260 [24];
  long lStack_200;
  undefined **appuStack_e0 [6];
  undefined8 uStack_b0;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b0 = 0;
  ppuStack_280 = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11087cbb0;
  appuStack_e0[0] = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11087cbd8;
  puVar2 = auStack_278;
  __ZNSt3__18ios_base4initEPv(appuStack_e0);
  uStack_58 = 0;
  uStack_50 = 0xffffffff;
  ppuStack_280 = &PTR_DAT_11087cb40;
  appuStack_e0[0] = &PTR_DAT_11087cb68;
  func_0x000107c28024(auStack_278);
  __ZNKSt3__14__fs10filesystem4path13__parent_pathEv(param_1);
  if (puVar2 != (undefined1 *)0x0) {
    func_0x0001092ac3b8(&uStack_2a0,param_1);
    __ZNSt3__14__fs10filesystem20__create_directoriesERKNS1_4pathEPNS_10error_codeE(&uStack_2a0,0);
    if ((long)uStack_290 < 0) {
      __ZdlPv(uStack_2a0);
    }
  }
  puVar6 = ppuStack_280[-3];
  *(undefined4 *)(puVar6 + (long)(auStack_260 + 1)) = 5;
  __ZNSt3__18ios_base5clearEj
            (auStack_278 + (long)(puVar6 + -8),*(undefined4 *)((long)auStack_260 + (long)puVar6));
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  func_0x00010967dda8(&ppuStack_280,plVar1,0x34);
  if (param_3 != 0) {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_280,param_2,param_3);
  }
  puVar2 = auStack_278;
  func_0x000107c27ffc();
  if (puVar2 == (undefined1 *)0x0) {
    __ZNSt3__18ios_base5clearEj
              (auStack_278 + (long)(ppuStack_280[-3] + -8),
               *(uint *)((long)auStack_260 + (long)ppuStack_280[-3]) | 4);
  }
  puVar7 = (ulong *)0x1;
  do {
    ppuStack_280 = &PTR_DAT_11087cb40;
    appuStack_e0[0] = &PTR_DAT_11087cb68;
    func_0x000107c28018(auStack_278);
    ppuVar4 = &PTR_PTR_11087cb80;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_280);
    pppuVar3 = appuStack_e0;
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return puVar7;
    }
    ___stack_chk_fail();
    ppuVar5 = ppuVar4;
    if ((long)uStack_290 < 0) {
      __ZdlPv(uStack_2a0);
    }
    while (iVar8 = (int)ppuVar4, iVar8 != 3) {
      if (iVar8 == 2) {
        ___cxa_begin_catch();
        (*(code *)(*pppuVar3)[2])();
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          func_0x000107c3192c(&uStack_2a0,*puVar7,puVar7[1]);
        }
        else {
          pppuStack_298 = (undefined ***)puVar7[1];
          uStack_2a0 = *puVar7;
          uStack_290 = puVar7[2];
        }
        func_0x00010924a40c(4,&UNK_10f62eb39);
        if ((long)uStack_290 < 0) {
          __ZdlPv(uStack_2a0);
        }
        if (lStack_200 != 0) {
          pppuVar3 = &ppuStack_280;
          func_0x000107c28014();
          uStack_2a0 = uStack_2a0 & 0xffffffff00000000;
          __ZNSt3__115system_categoryEv();
          pppuStack_298 = pppuVar3;
          __ZNSt3__14__fs10filesystem8__removeERKNS1_4pathEPNS_10error_codeE(puVar7,&uStack_2a0);
        }
        ___cxa_end_catch();
        goto LAB_109fce93c;
      }
      if (iVar8 == 1) {
        ___cxa_begin_catch();
        (*(code *)(*pppuVar3)[2])();
        func_0x00010924a40c(4,&UNK_10f62eb0c);
        ___cxa_end_catch();
        goto LAB_109fce93c;
      }
      func_0x000107c28010(&ppuStack_280);
      __Unwind_Resume();
      ppuVar4 = ppuVar5;
    }
    ___cxa_begin_catch();
    (*(code *)(*pppuVar3)[2])();
    func_0x00010924a40c(4,&UNK_10f62eb6c);
    ___cxa_end_catch();
LAB_109fce93c:
    puVar7 = (ulong *)0x0;
  } while( true );
}



/* Entry: 109fce9b0; end: 109fd0327;  */

/* WARNING: Removing unreachable block (ram,0x000109fcfec4) */
/* WARNING: Removing unreachable block (ram,0x000109fcfecc) */
/* WARNING: Removing unreachable block (ram,0x000109fd0024) */
/* WARNING: Removing unreachable block (ram,0x000109fcfef4) */

void FUN_109fce9b0(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *****pppppuVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  bool bVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined8 ****ppppuStack_1e0;
  ulong uStack_1d8;
  byte bStack_1c9;
  undefined8 ****ppppuStack_1c8;
  ulong uStack_1c0;
  byte bStack_1b1;
  undefined8 ****ppppuStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined1 auStack_180 [56];
  undefined8 uStack_148;
  char cStack_131;
  undefined **appuStack_120 [19];
  undefined8 ****ppppuStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  
  func_0x00010926db08(&ppuStack_190);
  func_0x0001092b4db8(&ppuStack_190,&UNK_10f62eb9c,0x1b);
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8(&ppuStack_190,&UNK_10f62ebb8,0x1d);
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8(&ppuStack_190,&UNK_10f62ef16,0x15);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEy();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8(&ppuStack_190,&UNK_10f62f2b0,0x1f);
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  lVar14 = 0;
  do {
    pppuVar5 = &ppuStack_190;
    func_0x0001092b4db8(pppuVar5,&DAT_10f4944be,2);
    puVar10 = (&PTR_DAT_110b984e0)[lVar14];
    puVar6 = puVar10;
    _strlen(puVar10);
    func_0x0001092b4db8(pppuVar5,puVar10,puVar6);
    func_0x0001092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEy();
    ppppuStack_88._0_1_ = 10;
    func_0x0001092b4db8();
    lVar14 = lVar14 + 1;
  } while (lVar14 != 3);
  func_0x0001092b4db8(&ppuStack_190,&UNK_10f62f2d0,0x1a);
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  lVar14 = 0;
  do {
    pppuVar5 = &ppuStack_190;
    func_0x0001092b4db8(pppuVar5,&DAT_10f4944be,2);
    uVar11 = *(undefined8 *)((long)&PTR_DAT_110b984e0 + lVar14);
    uVar7 = uVar11;
    _strlen(uVar11);
    func_0x0001092b4db8(pppuVar5,uVar11,uVar7);
    func_0x0001092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEy();
    ppppuStack_88._0_1_ = 10;
    func_0x0001092b4db8();
    lVar14 = lVar14 + 8;
  } while (lVar14 != 0x18);
  func_0x0001092b4db8(&ppuStack_190,&UNK_10f62f2eb,0x11);
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  lVar14 = 0;
  do {
    pppuVar5 = &ppuStack_190;
    func_0x0001092b4db8(pppuVar5,&DAT_10f4944be,2);
    puVar10 = (&PTR_DAT_110b984e0)[lVar14];
    puVar6 = puVar10;
    _strlen(puVar10);
    func_0x0001092b4db8(pppuVar5,puVar10,puVar6);
    func_0x0001092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
    ppppuStack_88._0_1_ = 10;
    func_0x0001092b4db8();
    lVar14 = lVar14 + 1;
  } while (lVar14 != 3);
  func_0x0001092b4db8(&ppuStack_190,&UNK_10f62f2fd,0x11);
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  lVar14 = 0;
  do {
    pppuVar5 = &ppuStack_190;
    func_0x0001092b4db8(pppuVar5,&DAT_10f4944be,2);
    puVar10 = (&PTR_DAT_110b984e0)[lVar14];
    puVar6 = puVar10;
    _strlen(puVar10);
    func_0x0001092b4db8(pppuVar5,puVar10,puVar6);
    func_0x0001092b4db8();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
    ppppuStack_88._0_1_ = 10;
    func_0x0001092b4db8();
    lVar14 = lVar14 + 1;
  } while (lVar14 != 3);
  func_0x0001092b4db8(&ppuStack_190,&UNK_10f62f30f,0x1a);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8(&ppuStack_190,&UNK_10f62f32a,0x19);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  func_0x0001092b4db8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  func_0x0001092b4db8();
  ppppuStack_88._0_1_ = 10;
  func_0x0001092b4db8();
  func_0x0001092b4db8(&ppuStack_190,&UNK_10f62f344,0xe);
  ppppuStack_88 = (undefined8 ****)CONCAT71(ppppuStack_88._1_7_,10);
  func_0x0001092b4db8();
  if (*(int *)(param_1 + 0x160) != 0) {
    uVar9 = 0;
    do {
      func_0x0001092b4db8(&ppuStack_190,&UNK_10f62f353,8);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
      func_0x0001092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
      func_0x0001092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
      func_0x0001092b4db8();
      func_0x0001092b4db8();
      ppppuStack_88 = (undefined8 ****)CONCAT71(ppppuStack_88._1_7_,10);
      func_0x0001092b4db8();
      if (2 < uVar9) break;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x160));
  }
  func_0x0001092b4db8(&ppuStack_190,&UNK_10f62f38b,0x16);
  ppppuStack_88 = (undefined8 ****)CONCAT71(ppppuStack_88._1_7_,10);
  func_0x0001092b4db8();
  lVar14 = 0;
  do {
    pppuVar5 = &ppuStack_190;
    func_0x0001092b4db8(pppuVar5,&UNK_10f62f3a2,0xe);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
    func_0x0001092b4db8();
    puVar10 = (&PTR_DAT_110ae4700)[lVar14 * 4];
    puVar6 = puVar10;
    _strlen(puVar10);
    func_0x0001092b4db8(pppuVar5,puVar10,puVar6);
    func_0x0001092b4db8();
    puVar1 = (uint *)(param_1 + lVar14 * 0x10 + 0x164);
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      func_0x000107c31940(&ppppuStack_1b0,&DAT_10f684ec4);
    }
    else {
      ppppuStack_88 = (undefined8 *****)0x0;
      uStack_80 = 0;
      ppuVar12 = &PTR_DAT_110b98378;
      lVar13 = 0xb0;
      uStack_78 = 0;
      do {
        if ((*(uint *)(ppuVar12 + -1) & (uVar2 ^ 0xffffffff)) == 0) {
          uVar9 = uStack_80;
          if (-1 < (long)uStack_78) {
            uVar9 = uStack_78 >> 0x38;
          }
          if (uVar9 != 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&ppppuStack_88,&DAT_10f68e8ee,1);
          }
          puVar10 = *ppuVar12;
          puVar6 = puVar10;
          _strlen(puVar10);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppppuStack_88,puVar10,puVar6);
        }
        ppuVar12 = ppuVar12 + 2;
        lVar13 = lVar13 + -0x10;
      } while (lVar13 != 0);
      if (uStack_78._7_1_ == '\0') {
        func_0x000107c31940(&ppppuStack_1b0,&DAT_10f684ec4);
      }
      else {
        uStack_1a8 = uStack_80;
        ppppuStack_1b0 = ppppuStack_88;
        uStack_1a0 = uStack_78;
      }
    }
    uVar9 = uStack_1a8;
    pppppuVar3 = (undefined8 *****)ppppuStack_1b0;
    if (-1 < (long)uStack_1a0) {
      uVar9 = uStack_1a0 >> 0x38;
      pppppuVar3 = &ppppuStack_1b0;
    }
    func_0x0001092b4db8(pppuVar5,pppppuVar3,uVar9);
    func_0x0001092b4db8();
    __ZNSt3__19to_stringEj(&ppppuStack_88,puVar1[1]);
    uVar9 = uStack_80;
    pppppuVar3 = (undefined8 *****)ppppuStack_88;
    if (-1 < (long)uStack_78) {
      uVar9 = uStack_78 >> 0x38;
      pppppuVar3 = &ppppuStack_88;
    }
    func_0x0001092b4db8(pppuVar5,pppppuVar3,uVar9);
    func_0x0001092b4db8();
    __ZNSt3__19to_stringEj(&ppppuStack_1c8,puVar1[2]);
    uVar9 = uStack_1c0;
    pppppuVar3 = (undefined8 *****)ppppuStack_1c8;
    if (-1 < (char)bStack_1b1) {
      uVar9 = (ulong)bStack_1b1;
      pppppuVar3 = &ppppuStack_1c8;
    }
    func_0x0001092b4db8(pppuVar5,pppppuVar3,uVar9);
    func_0x0001092b4db8();
    __ZNSt3__19to_stringEj(&ppppuStack_1e0,puVar1[3]);
    uVar9 = uStack_1d8;
    pppppuVar3 = (undefined8 *****)ppppuStack_1e0;
    if (-1 < (char)bStack_1c9) {
      uVar9 = (ulong)bStack_1c9;
      pppppuVar3 = &ppppuStack_1e0;
    }
    func_0x0001092b4db8(pppuVar5,pppppuVar3,uVar9);
    uStack_69 = 10;
    func_0x0001092b4db8();
    if ((char)bStack_1c9 < '\0') {
      __ZdlPv(ppppuStack_1e0);
    }
    if ((char)bStack_1b1 < '\0') {
      __ZdlPv(ppppuStack_1c8);
    }
    if ((long)uStack_1a0 < 0) {
      __ZdlPv(ppppuStack_1b0);
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 != 0x57);
  func_0x0001092b4db8(&ppuStack_190,&UNK_10f62f414,0x20);
  ppppuStack_88 = (undefined8 ****)CONCAT71(ppppuStack_88._1_7_,10);
  func_0x0001092b4db8();
  lVar14 = 0;
  bVar8 = false;
  do {
    while (*(char *)(param_1 + lVar14 + 0x6d4) == '\x01') {
      puVar10 = (&PTR_DAT_110b98230)[lVar14];
      pppuVar5 = &ppuStack_190;
      func_0x0001092b4db8(pppuVar5,&UNK_10f62f435,8);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
      func_0x0001092b4db8();
      puVar6 = puVar10;
      _strlen(puVar10);
      func_0x0001092b4db8(pppuVar5,puVar10,puVar6);
      func_0x0001092b4db8();
      ppppuStack_88 = (undefined8 ****)CONCAT71(ppppuStack_88._1_7_,10);
      func_0x0001092b4db8();
      bVar8 = true;
      bVar4 = lVar14 == 0x27;
      lVar14 = lVar14 + 1;
      if (bVar4) {
LAB_109fd015c:
        func_0x0001092b4db8(&ppuStack_190,&UNK_10f62f46a,0x20);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
        ppppuStack_88._0_1_ = 10;
        func_0x0001092b4db8();
        func_0x0001092b4db8(&ppuStack_190,&UNK_10f62f48b,0x26);
        func_0x0001092b4db8();
        ppppuStack_88 = (undefined8 ****)CONCAT71(ppppuStack_88._1_7_,10);
        func_0x0001092b4db8();
        appuStack_120[0] = &PTR_DAT_11088d708;
        ppuStack_190 = &PTR_DAT_11088d6e0;
        ppuStack_188 = &PTR_DAT_11088d7b0;
        if (cStack_131 < '\0') {
          __ZdlPv(uStack_148);
        }
        ppuStack_188 = (undefined **)
                       (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
        __ZNSt3__16localeD1Ev(auStack_180);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_190,&PTR_PTR_11088d720);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_120);
        return;
      }
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 != 0x28);
  if (!bVar8) {
    func_0x0001092b4db8(&ppuStack_190,&UNK_10f62f463,6);
    ppppuStack_88 = (undefined8 ****)CONCAT71(ppppuStack_88._1_7_,10);
    func_0x0001092b4db8();
  }
  goto LAB_109fd015c;
}



/* Entry: 109fd0328; end: 109fd097b;  */

void FUN_109fd0328(undefined8 *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  code *pcVar5;
  long **pplVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  ulong uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long **pplStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (param_3 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  lVar18 = 0;
  uStack_70 = 0;
  plStack_88 = (long *)0x0;
  plStack_90 = (long *)0x0;
  uStack_78 = 0;
  lStack_80 = 0;
  plVar16 = *(long **)(*param_2 + 0x18);
  iVar3 = *(int *)((long)plVar16 + 0x734);
  plStack_a8 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  pplStack_98 = (long **)0x0;
  do {
    lVar2 = *(long *)(param_2[lVar18] + 0xb8);
    for (lVar12 = *(long *)(param_2[lVar18] + 0xb0); lVar12 != lVar2; lVar12 = lVar12 + 8) {
      func_0x000109249b14(&plStack_a8,lVar12);
    }
    lVar18 = lVar18 + 1;
  } while (lVar18 != param_3);
  lVar18 = 0;
  if (plStack_a0 != plStack_a8) {
    lVar18 = LZCOUNT((long)plStack_a0 - (long)plStack_a8 >> 3) * -2 + 0x7e;
  }
  FUN_109fd0a90(plStack_a8,plStack_a0,lVar18,1);
  plVar9 = plStack_a0;
  plVar17 = plStack_a8;
  if (plStack_a8 != plStack_a0) {
    plVar17 = plStack_a8 + 1;
    do {
      plVar14 = plVar17;
      plVar17 = plStack_a0;
      if (plVar14 == plStack_a0) goto LAB_109fd045c;
      plVar17 = plVar14 + 1;
    } while (plVar14[-1] != *plVar14);
    plVar10 = plVar14 + -1;
    lVar18 = plVar14[-1];
    for (; plVar17 != plStack_a0; plVar17 = plVar17 + 1) {
      lVar12 = *plVar17;
      if (lVar18 != lVar12) {
        plVar10 = plVar10 + 1;
        *plVar10 = lVar12;
      }
      lVar18 = lVar12;
    }
    plVar17 = plVar10 + 1;
  }
LAB_109fd045c:
  uVar8 = (long)plVar17 - (long)plStack_a8 >> 3;
  lVar18 = (long)plStack_a0 - (long)plStack_a8;
  uVar13 = lVar18 >> 3;
  if (uVar13 < uVar8) {
    uVar13 = uVar8 - uVar13;
    if ((ulong)((long)pplStack_98 - (long)plStack_a0 >> 3) < uVar13) {
      if (uVar8 >> 0x3d != 0) {
        func_0x00010922d710();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x109fd0904);
        (*pcVar5)();
      }
      uVar11 = (long)pplStack_98 - (long)plStack_a8 >> 2;
      if (uVar11 <= uVar8) {
        uVar11 = uVar8;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)pplStack_98 - (long)plStack_a8)) {
        uVar11 = 0x1fffffffffffffff;
      }
      pplVar6 = &plStack_a8;
      func_0x00010922d724();
      lVar18 = (long)pplVar6 + lVar18;
      _bzero(lVar18,uVar13 * 8);
      plVar9 = (long *)(lVar18 + uVar13 * 8);
      plVar17 = (long *)(lVar18 - ((long)plStack_a0 - (long)plStack_a8));
      _memcpy(plVar17);
      bVar1 = plStack_a8 != (long *)0x0;
      plStack_a8 = plVar17;
      plStack_a0 = plVar9;
      pplStack_98 = pplVar6 + uVar11;
      if (bVar1) {
        __ZdlPv();
      }
    }
    else {
      _bzero(plStack_a0,uVar13 * 8);
      plStack_a0 = plVar9 + uVar13;
    }
  }
  else if (uVar8 < uVar13) {
    plStack_a0 = (long *)((long)plStack_a8 + ((long)plVar17 - (long)plStack_a8));
  }
  plVar9 = (long *)*param_4;
  if ((long *)*param_4 == (long *)0x0) {
    if (plStack_a8 != plStack_a0) {
      (**(code **)(*plVar16 + 0x68))(&plStack_e0,plVar16,&plStack_b8);
      plVar9 = plStack_88;
      plStack_88 = plStack_d8;
      plStack_90 = plStack_e0;
      plStack_e0 = (long *)0x0;
      plStack_d8 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        plVar17 = plVar9 + 1;
        do {
          lVar18 = *plVar17;
          cVar4 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar1) {
            *plVar17 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar17 = plStack_d8 + 1;
        do {
          lVar18 = *plVar17;
          cVar4 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar1) {
            *plVar17 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      *param_4 = plStack_90;
      plVar9 = plStack_90;
      goto LAB_109fd05dc;
    }
  }
  else {
LAB_109fd05dc:
    if (plStack_a8 != plStack_a0) {
      plStack_b8 = (long *)0x0;
      plStack_b0 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x48))(&plStack_e0,plVar9);
        plVar9 = plStack_e0;
        if (plStack_e0 == (long *)0x0) {
          plVar17 = (long *)0x0;
        }
        else {
          plVar17 = (long *)0x20;
          __Znwm();
          plVar14 = plVar17 + 1;
          *plVar14 = 0;
          *plVar17 = (long)&PTR_DAT_110b98430;
          plVar17[2] = 0;
          plVar17[3] = (long)plVar9;
          do {
            cVar4 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar1) {
              *plVar14 = *plVar14 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar14 = plStack_b0;
        plStack_b8 = plVar9;
        plVar10 = plVar17;
        if (plStack_b0 != (long *)0x0) {
          plVar7 = plStack_b0 + 1;
          do {
            lVar18 = *plVar7;
            cVar4 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar1) {
              *plVar7 = lVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar18 == 0) {
            lVar18 = *plStack_b0;
            plStack_b0 = plVar17;
            (**(code **)(lVar18 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
            plVar10 = plStack_b0;
          }
        }
        plStack_b0 = plVar10;
        if (plVar9 != (long *)0x0) {
          plVar9 = plVar17 + 1;
          do {
            lVar18 = *plVar9;
            cVar4 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar1) {
              *plVar9 = lVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
      }
      plVar10 = plStack_a0;
      plStack_d8 = (long *)0x0;
      plStack_e0 = (long *)0x0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_c0 = 0x3f800000;
      plVar17 = plStack_90;
      plVar14 = plStack_88;
      for (plVar9 = plStack_a8; plVar9 != plVar10; plVar9 = plVar9 + 1) {
        plVar7 = (long *)*plVar9;
        lVar18 = plVar7[0x14];
        plStack_90 = plVar17;
        plStack_88 = plVar14;
        (**(code **)(*plVar7 + 0x20))(&uStack_f0,plVar7,plVar16,&plStack_b8);
        if ((int)lVar18 != 0 && (int)lVar18 != iVar3) {
          if (plStack_d8 != (long *)0x0) {
            uVar8 = ((ulong)(uint)((int)uStack_f0 << 3) + 8 ^ uStack_f0 >> 0x20) *
                    -0x622015f714c7d297;
            uVar8 = (uStack_f0 >> 0x20 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
            plVar17 = (long *)((uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297);
            uVar8 = (long)plStack_d8 - 1;
            if (((ulong)plStack_d8 & uVar8) == 0) {
              plVar14 = (long *)((ulong)plVar17 & uVar8);
            }
            else {
              plVar14 = plVar17;
              if (plStack_d8 <= plVar17) {
                uVar13 = 0;
                if (plStack_d8 != (long *)0x0) {
                  uVar13 = (ulong)plVar17 / (ulong)plStack_d8;
                }
                plVar14 = (long *)((long)plVar17 - uVar13 * (long)plStack_d8);
              }
            }
            plVar7 = (long *)plStack_e0[(long)plVar14];
            if (plVar7 != (long *)0x0) {
              do {
                while( true ) {
                  plVar7 = (long *)*plVar7;
                  if (plVar7 == (long *)0x0) goto LAB_109fd07d4;
                  plVar15 = (long *)plVar7[1];
                  if ((long)plVar17 - (long)plVar15 != 0) break;
                  if (plVar7[2] == uStack_f0) goto LAB_109fd07e8;
                }
                if (((ulong)plStack_d8 & uVar8) == 0) {
                  plVar15 = (long *)((ulong)plVar15 & uVar8);
                }
                else if (plStack_d8 <= plVar15) {
                  uVar13 = 0;
                  if (plStack_d8 != (long *)0x0) {
                    uVar13 = (ulong)plVar15 / (ulong)plStack_d8;
                  }
                  plVar15 = (long *)((long)plVar15 - uVar13 * (long)plStack_d8);
                }
              } while (plVar15 == plVar14);
            }
          }
LAB_109fd07d4:
          if (*(long **)(uStack_f0 + 8) != (long *)0x0) {
            (**(code **)(**(long **)(uStack_f0 + 8) + 0x38))();
          }
        }
LAB_109fd07e8:
        plVar17 = plStack_e8;
        if (plStack_e8 != (long *)0x0) {
          plVar14 = plStack_e8 + 1;
          do {
            lVar18 = *plVar14;
            cVar4 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar1) {
              *plVar14 = lVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        plVar17 = plStack_90;
        plVar14 = plStack_88;
      }
      plStack_90 = (long *)0x0;
      plStack_88 = (long *)0x0;
      param_1[1] = plVar14;
      *param_1 = plVar17;
      param_1[3] = uStack_78;
      param_1[2] = lStack_80;
      param_1[4] = uStack_70;
      uStack_78 = 0;
      uStack_70 = 0;
      lStack_80 = 0;
      FUN_109fd1800(&plStack_e0);
      plVar16 = plStack_b0;
      if (plStack_b0 != (long *)0x0) {
        plVar9 = plStack_b0 + 1;
        do {
          lVar18 = *plVar9;
          cVar4 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar1) {
            *plVar9 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      goto joined_r0x000109fd088c;
    }
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
joined_r0x000109fd088c:
  if (plStack_a8 != (long *)0x0) {
    plStack_a0 = plStack_a8;
    __ZdlPv();
  }
  plStack_e0 = &lStack_80;
  func_0x000109247e28(&plStack_e0);
  plVar16 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar9 = plStack_88 + 1;
    do {
      lVar18 = *plVar9;
      cVar4 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar1) {
        *plVar9 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  return;
}



/* Entry: 109fd097c; end: 109fd0a1f;  */

void FUN_109fd097c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = *param_2;
  lVar6 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = lVar7;
  puVar5 = (undefined8 *)0x30;
  __Znwm();
  *puVar5 = &PTR_DAT_110b98490;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = lVar7;
  puVar5[4] = lVar7;
  puVar5[5] = lVar6;
  plVar2 = (long *)0x0;
  if (lVar7 != 0) {
    plVar2 = (long *)(lVar7 + 8);
  }
  param_1[1] = (long)puVar5;
  if ((plVar2 != (long *)0x0) && ((lVar6 = plVar2[1], lVar6 == 0 || (*(long *)(lVar6 + 8) == -1))))
  {
    plVar8 = (long *)param_1[1];
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
      plVar1 = plVar8 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar6 = plVar2[1];
    }
    *plVar2 = lVar7;
    plVar2[1] = (long)plVar8;
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 1;
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
        return;
      }
    }
  }
  return;
}



/* Entry: 109fd0a20; end: 109fd0a8f;  */

long FUN_109fd0a20(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  
  lVar1 = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x80) == 0) {
      return 0;
    }
    lVar1 = 0;
    lVar2 = *(long *)(param_1 + 0x80) * 0x14;
    puVar3 = (uint *)(*(long *)(param_1 + 0x78) + 0xc);
    do {
      if ((puVar3[-2] & 0xfffffffe) == 6) {
        uVar4 = *puVar3;
        if ((param_2 == 0) || (uVar4 != 0xffffffff)) {
          if (uVar4 < 2) {
            uVar4 = 1;
          }
        }
        else {
          uVar4 = *(uint *)(param_2 + 0x38);
        }
        lVar1 = lVar1 + (ulong)uVar4;
      }
      puVar3 = puVar3 + 5;
      lVar2 = lVar2 + -0x14;
    } while (lVar2 != 0);
  }
  return lVar1;
}



/* Entry: 109fd0a90; end: 109fd13ff;  */

void FUN_109fd0a90(ulong *param_1,ulong *param_2,long param_3,uint param_4)

{
  bool bVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  
LAB_109fd0abc:
  do {
    puVar9 = param_1;
    uVar7 = (long)param_2 - (long)puVar9 >> 3;
    if (uVar7 - 2 != 0 && 1 < (long)uVar7) {
      if (uVar7 == 3) {
        uVar7 = *puVar9;
        uVar10 = puVar9[1];
        uVar11 = param_2[-1];
        if (uVar10 < uVar7) {
          if (uVar11 < uVar10) {
            *puVar9 = uVar11;
          }
          else {
            *puVar9 = uVar10;
            puVar9[1] = uVar7;
            if (uVar7 <= param_2[-1]) {
              return;
            }
            puVar9[1] = param_2[-1];
          }
          param_2[-1] = uVar7;
          return;
        }
        if (uVar10 <= uVar11) {
          return;
        }
        puVar9[1] = uVar11;
        param_2[-1] = uVar10;
        uVar7 = puVar9[1];
        goto LAB_109fd13d8;
      }
      if (uVar7 != 4) {
        if (uVar7 != 5) goto LAB_109fd0af8;
        puVar4 = puVar9 + 1;
        uVar15 = *puVar4;
        puVar8 = puVar9 + 2;
        uVar11 = *puVar8;
        uVar16 = *puVar9;
        uVar7 = uVar11;
        uVar10 = uVar11;
        puVar3 = puVar9;
        if (uVar15 < uVar16) {
          uVar5 = uVar15;
          uVar6 = uVar16;
          puVar17 = puVar8;
          if (uVar15 <= uVar11) {
            *puVar9 = uVar15;
            puVar9[1] = uVar16;
            uVar5 = uVar11;
            uVar18 = uVar16;
            uVar13 = uVar15;
            uVar10 = uVar15;
            puVar3 = puVar4;
            if (uVar16 <= uVar11) goto LAB_109fd1370;
          }
LAB_109fd1330:
          *puVar3 = uVar11;
          *puVar17 = uVar16;
          uVar7 = uVar6;
          uVar18 = uVar5;
          uVar13 = uVar10;
        }
        else {
          uVar18 = uVar15;
          uVar13 = uVar16;
          if (uVar11 < uVar15) {
            *puVar4 = uVar11;
            *puVar8 = uVar15;
            uVar5 = uVar16;
            uVar6 = uVar15;
            uVar7 = uVar15;
            uVar18 = uVar11;
            puVar17 = puVar4;
            if (uVar11 < uVar16) goto LAB_109fd1330;
          }
        }
LAB_109fd1370:
        uVar11 = puVar9[3];
        uVar10 = uVar11;
        if (uVar11 < uVar7) {
          puVar9[2] = uVar11;
          puVar9[3] = uVar7;
          uVar10 = uVar7;
          if (uVar11 < uVar18) {
            *puVar4 = uVar11;
            *puVar8 = uVar18;
            if (uVar11 < uVar13) {
              *puVar9 = uVar11;
              puVar9[1] = uVar13;
            }
          }
        }
        if (uVar10 <= param_2[-1]) {
          return;
        }
        puVar9[3] = param_2[-1];
        param_2[-1] = uVar10;
        uVar10 = puVar9[2];
        uVar7 = puVar9[3];
        if (uVar10 <= uVar7) {
          return;
        }
        puVar9[2] = uVar7;
        puVar9[3] = uVar10;
        uVar10 = puVar9[1];
        if (uVar10 <= uVar7) {
          return;
        }
        puVar9[1] = uVar7;
        puVar9[2] = uVar10;
LAB_109fd13d8:
        uVar10 = *puVar9;
        if (uVar7 < uVar10) {
          *puVar9 = uVar7;
          puVar9[1] = uVar10;
          return;
        }
        return;
      }
      puVar4 = puVar9 + 1;
      uVar7 = *puVar4;
      puVar8 = puVar9 + 2;
      uVar10 = *puVar8;
      uVar11 = *puVar9;
      puVar3 = puVar9;
      if (uVar7 < uVar11) {
        uVar15 = uVar11;
        puVar17 = puVar8;
        if (uVar7 <= uVar10) {
          *puVar9 = uVar7;
          puVar9[1] = uVar11;
          uVar7 = uVar10;
          puVar3 = puVar4;
          goto joined_r0x000109fd127c;
        }
      }
      else {
        uVar16 = uVar10;
        if (uVar7 <= uVar10) goto LAB_109fd12d4;
        *puVar4 = uVar10;
        *puVar8 = uVar7;
        puVar17 = puVar4;
        uVar15 = uVar7;
joined_r0x000109fd127c:
        uVar16 = uVar7;
        if (uVar11 <= uVar10) goto LAB_109fd12d4;
      }
      *puVar3 = uVar10;
      *puVar17 = uVar11;
      uVar16 = uVar15;
LAB_109fd12d4:
      if (uVar16 <= param_2[-1]) {
        return;
      }
      *puVar8 = param_2[-1];
      param_2[-1] = uVar16;
      uVar10 = *puVar8;
      uVar7 = *puVar4;
      if (uVar10 < uVar7) {
        puVar9[1] = uVar10;
        puVar9[2] = uVar7;
        uVar7 = *puVar9;
        if (uVar10 < uVar7) {
          *puVar9 = uVar10;
          puVar9[1] = uVar7;
          return;
        }
        return;
      }
      return;
    }
    if (uVar7 < 2) {
      return;
    }
    if (uVar7 == 2) {
      uVar7 = *puVar9;
      if (param_2[-1] < uVar7) {
        *puVar9 = param_2[-1];
        param_2[-1] = uVar7;
        return;
      }
      return;
    }
LAB_109fd0af8:
    if ((long)uVar7 < 0x18) {
      puVar3 = puVar9 + 1;
      if ((param_4 & 1) == 0) {
        if (puVar9 != param_2 && puVar3 != param_2) {
          do {
            puVar4 = puVar3;
            uVar7 = *puVar9;
            uVar10 = puVar9[1];
            puVar9 = puVar4;
            if (uVar10 < uVar7) {
              do {
                *puVar9 = uVar7;
                uVar7 = puVar9[-2];
                puVar9 = puVar9 + -1;
              } while (uVar10 < uVar7);
              *puVar9 = uVar10;
            }
            puVar3 = puVar4 + 1;
            puVar9 = puVar4;
          } while (puVar4 + 1 != param_2);
          return;
        }
        return;
      }
      if (puVar9 == param_2 || puVar3 == param_2) {
        return;
      }
      lVar12 = 8;
      puVar4 = puVar9;
      do {
        puVar8 = puVar3;
        uVar7 = *puVar4;
        uVar10 = puVar4[1];
        lVar14 = lVar12;
        if (uVar10 < uVar7) {
          do {
            *(ulong *)((long)puVar9 + lVar14) = uVar7;
            lVar2 = lVar14 + -8;
            puVar3 = puVar9;
            if (lVar2 == 0) goto LAB_109fd1030;
            uVar7 = *(ulong *)((long)puVar9 + lVar14 + -0x10);
            lVar14 = lVar2;
          } while (uVar10 < uVar7);
          puVar3 = (ulong *)((long)puVar9 + lVar2);
LAB_109fd1030:
          *puVar3 = uVar10;
        }
        puVar3 = puVar8 + 1;
        lVar12 = lVar12 + 8;
        puVar4 = puVar8;
        if (puVar3 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (puVar9 == param_2) {
        return;
      }
      uVar11 = uVar7 - 2 >> 1;
      uVar10 = uVar11;
      do {
        if ((long)uVar10 <= (long)uVar11) {
          uVar15 = uVar10 << 1 | 1;
          puVar3 = puVar9 + uVar15;
          uVar16 = uVar10 * 2 + 2;
          if ((long)uVar16 < (long)uVar7) {
            uVar18 = puVar3[1];
            puVar4 = puVar3 + 1;
            if (uVar18 <= *puVar3) {
              puVar4 = puVar3;
              uVar16 = uVar15;
              uVar18 = *puVar3;
            }
          }
          else {
            puVar4 = puVar3;
            uVar16 = uVar15;
            uVar18 = *puVar3;
          }
          uVar15 = puVar9[uVar10];
          puVar3 = puVar9 + uVar10;
          if (uVar15 <= uVar18) {
            do {
              puVar8 = puVar4;
              *puVar3 = uVar18;
              if ((long)uVar11 < (long)uVar16) break;
              uVar13 = uVar16 << 1 | 1;
              puVar3 = puVar9 + uVar13;
              uVar16 = uVar16 * 2 + 2;
              if ((long)uVar16 < (long)uVar7) {
                uVar18 = puVar3[1];
                puVar4 = puVar3 + 1;
                if (uVar18 <= *puVar3) {
                  puVar4 = puVar3;
                  uVar16 = uVar13;
                  uVar18 = *puVar3;
                }
              }
              else {
                puVar4 = puVar3;
                uVar16 = uVar13;
                uVar18 = *puVar3;
              }
              puVar3 = puVar8;
            } while (uVar15 <= uVar18);
            *puVar8 = uVar15;
          }
        }
        bVar1 = uVar10 != 0;
        uVar10 = uVar10 - 1;
      } while (bVar1);
      do {
        uVar10 = 0;
        uVar11 = *puVar9;
        puVar3 = puVar9;
        do {
          puVar4 = puVar3 + uVar10 + 1;
          uVar15 = uVar10 << 1 | 1;
          uVar16 = uVar10 * 2 + 2;
          if ((long)uVar16 < (long)uVar7) {
            uVar18 = puVar3[uVar10 + 2];
            lVar12 = uVar10 + 1;
            puVar8 = puVar3 + uVar10 + 2;
            uVar10 = uVar16;
            if (uVar18 <= puVar3[lVar12]) {
              puVar8 = puVar4;
              uVar10 = uVar15;
              uVar18 = puVar3[lVar12];
            }
          }
          else {
            puVar8 = puVar4;
            uVar10 = uVar15;
            uVar18 = *puVar4;
          }
          *puVar3 = uVar18;
          puVar3 = puVar8;
        } while ((long)uVar10 <= (long)(uVar7 - 2 >> 1));
        param_2 = param_2 + -1;
        if (puVar8 == param_2) {
          *puVar8 = uVar11;
        }
        else {
          *puVar8 = *param_2;
          *param_2 = uVar11;
          lVar12 = (long)puVar8 + (8 - (long)puVar9) >> 3;
          if (1 < lVar12) {
            uVar10 = lVar12 - 2U >> 1;
            uVar16 = puVar9[uVar10];
            uVar11 = *puVar8;
            puVar3 = puVar9 + uVar10;
            if (uVar16 < uVar11) {
              do {
                puVar4 = puVar3;
                *puVar8 = uVar16;
                if (uVar10 == 0) break;
                uVar10 = uVar10 - 1 >> 1;
                uVar16 = puVar9[uVar10];
                puVar8 = puVar4;
                puVar3 = puVar9 + uVar10;
              } while (uVar16 < uVar11);
              *puVar4 = uVar11;
            }
          }
        }
        bVar1 = (long)uVar7 < 3;
        uVar7 = uVar7 - 1;
        if (bVar1) {
          return;
        }
      } while( true );
    }
    puVar3 = puVar9 + (uVar7 >> 1);
    uVar10 = param_2[-1];
    if (uVar7 < 0x81) {
      uVar11 = *puVar9;
      uVar7 = *puVar3;
      if (uVar11 < uVar7) {
        if (uVar10 < uVar11) {
          *puVar3 = uVar10;
        }
        else {
          *puVar3 = uVar11;
          *puVar9 = uVar7;
          if (uVar7 <= param_2[-1]) goto LAB_109fd0d30;
          *puVar9 = param_2[-1];
        }
        param_2[-1] = uVar7;
      }
      else if (uVar10 < uVar11) {
        *puVar9 = uVar10;
        param_2[-1] = uVar11;
        uVar7 = *puVar3;
        if (*puVar9 < uVar7) {
          *puVar3 = *puVar9;
          *puVar9 = uVar7;
        }
      }
    }
    else {
      uVar11 = *puVar3;
      uVar7 = *puVar9;
      if (uVar11 < uVar7) {
        if (uVar10 < uVar11) {
          *puVar9 = uVar10;
        }
        else {
          *puVar9 = uVar11;
          *puVar3 = uVar7;
          if (uVar7 <= param_2[-1]) goto LAB_109fd0bcc;
          *puVar3 = param_2[-1];
        }
        param_2[-1] = uVar7;
      }
      else if (uVar10 < uVar11) {
        *puVar3 = uVar10;
        param_2[-1] = uVar11;
        uVar7 = *puVar9;
        if (*puVar3 < uVar7) {
          *puVar9 = *puVar3;
          *puVar3 = uVar7;
        }
      }
LAB_109fd0bcc:
      puVar4 = puVar3 + -1;
      uVar10 = *puVar4;
      uVar7 = puVar9[1];
      uVar11 = param_2[-2];
      if (uVar10 < uVar7) {
        if (uVar11 < uVar10) {
          puVar9[1] = uVar11;
        }
        else {
          puVar9[1] = uVar10;
          *puVar4 = uVar7;
          if (uVar7 <= param_2[-2]) goto LAB_109fd0c5c;
          *puVar4 = param_2[-2];
        }
        param_2[-2] = uVar7;
      }
      else if (uVar11 < uVar10) {
        *puVar4 = uVar11;
        param_2[-2] = uVar10;
        uVar7 = puVar9[1];
        if (*puVar4 < uVar7) {
          puVar9[1] = *puVar4;
          *puVar4 = uVar7;
        }
      }
LAB_109fd0c5c:
      puVar8 = puVar3 + 1;
      uVar10 = *puVar8;
      uVar7 = puVar9[2];
      uVar11 = param_2[-3];
      if (uVar10 < uVar7) {
        if (uVar11 < uVar10) {
          puVar9[2] = uVar11;
        }
        else {
          puVar9[2] = uVar10;
          *puVar8 = uVar7;
          if (uVar7 <= param_2[-3]) goto LAB_109fd0ccc;
          *puVar8 = param_2[-3];
        }
        param_2[-3] = uVar7;
      }
      else if (uVar11 < uVar10) {
        *puVar8 = uVar11;
        param_2[-3] = uVar10;
        uVar7 = puVar9[2];
        if (*puVar8 < uVar7) {
          puVar9[2] = *puVar8;
          *puVar8 = uVar7;
        }
      }
LAB_109fd0ccc:
      uVar7 = puVar3[-1];
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      if (uVar10 < uVar7) {
        uVar16 = uVar10;
        if (uVar10 <= uVar11) {
          puVar3[-1] = uVar10;
          *puVar3 = uVar7;
          puVar4 = puVar3;
          uVar10 = uVar7;
          uVar16 = uVar11;
          if (uVar7 <= uVar11) goto LAB_109fd0d24;
        }
LAB_109fd0d1c:
        *puVar4 = uVar11;
        *puVar8 = uVar7;
        uVar10 = uVar16;
      }
      else if (uVar11 < uVar10) {
        *puVar3 = uVar11;
        puVar3[1] = uVar10;
        puVar8 = puVar3;
        uVar10 = uVar11;
        uVar16 = uVar7;
        if (uVar11 < uVar7) goto LAB_109fd0d1c;
      }
LAB_109fd0d24:
      uVar7 = *puVar9;
      *puVar9 = uVar10;
      *puVar3 = uVar7;
    }
LAB_109fd0d30:
    param_3 = param_3 + -1;
    uVar7 = *puVar9;
    param_1 = puVar9;
    if (((param_4 & 1) == 0) && (uVar7 <= puVar9[-1])) {
      if (uVar7 < param_2[-1]) {
        do {
          param_1 = param_1 + 1;
        } while (*param_1 <= uVar7);
      }
      else {
        do {
          param_1 = param_1 + 1;
          if (param_2 <= param_1) break;
        } while (*param_1 <= uVar7);
      }
      puVar3 = param_2;
      if (param_1 < param_2) {
        do {
          puVar3 = puVar3 + -1;
        } while (uVar7 < *puVar3);
      }
      if (param_1 < puVar3) {
        uVar10 = *param_1;
        uVar11 = *puVar3;
        do {
          *param_1 = uVar11;
          *puVar3 = uVar10;
          do {
            param_1 = param_1 + 1;
            uVar10 = *param_1;
          } while (uVar10 <= uVar7);
          do {
            puVar3 = puVar3 + -1;
            uVar11 = *puVar3;
          } while (uVar7 < uVar11);
        } while (param_1 < puVar3);
      }
      puVar3 = param_1 + -1;
      if (puVar3 != puVar9) {
        *puVar9 = *puVar3;
      }
      param_4 = 0;
      *puVar3 = uVar7;
      goto LAB_109fd0abc;
    }
    lVar12 = 0;
    do {
      uVar10 = *(ulong *)((long)puVar9 + lVar12 + 8);
      lVar12 = lVar12 + 8;
    } while (uVar10 < uVar7);
    puVar3 = (ulong *)((long)puVar9 + lVar12);
    puVar4 = param_2;
    if (lVar12 == 8) {
      do {
        if (puVar4 <= puVar3) break;
        puVar4 = puVar4 + -1;
      } while (uVar7 <= *puVar4);
    }
    else {
      do {
        puVar4 = puVar4 + -1;
      } while (uVar7 <= *puVar4);
    }
    param_1 = puVar3;
    if (puVar3 < puVar4) {
      uVar11 = *puVar4;
      puVar8 = puVar4;
      do {
        *param_1 = uVar11;
        *puVar8 = uVar10;
        do {
          param_1 = param_1 + 1;
          uVar10 = *param_1;
        } while (uVar10 < uVar7);
        do {
          puVar8 = puVar8 + -1;
          uVar11 = *puVar8;
        } while (uVar7 <= uVar11);
      } while (param_1 < puVar8);
    }
    puVar8 = param_1 + -1;
    if (puVar8 != puVar9) {
      *puVar9 = *puVar8;
    }
    *puVar8 = uVar7;
    if (puVar3 < puVar4) {
LAB_109fd0e24:
      FUN_109fd0a90(puVar9,puVar8,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      puVar3 = puVar9;
      FUN_109fd1400(puVar9,puVar8);
      puVar4 = param_1;
      FUN_109fd1400(param_1,param_2);
      if ((int)puVar4 == 0) {
        if (((ulong)puVar3 & 1) == 0) goto LAB_109fd0e24;
      }
      else {
        param_1 = puVar9;
        param_2 = puVar8;
        if (((ulong)puVar3 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 109fd1400; end: 109fd1797;  */

bool FUN_109fd1400(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong *puVar17;
  
  uVar4 = (long)param_2 - (long)param_1 >> 3;
  if (2 < (long)uVar4) {
    if (uVar4 == 3) {
      uVar4 = *param_1;
      uVar6 = param_1[1];
      uVar11 = param_2[-1];
      if (uVar6 < uVar4) {
        if (uVar11 < uVar6) {
          *param_1 = uVar11;
        }
        else {
          *param_1 = uVar6;
          param_1[1] = uVar4;
          if (uVar4 <= param_2[-1]) {
            return true;
          }
          param_1[1] = param_2[-1];
        }
        param_2[-1] = uVar4;
        return true;
      }
      if (uVar6 <= uVar11) {
        return true;
      }
      param_1[1] = uVar11;
      param_2[-1] = uVar6;
      uVar4 = param_1[1];
      goto LAB_109fd1780;
    }
    if (uVar4 != 4) {
      if (uVar4 != 5) goto LAB_109fd14b4;
      puVar14 = param_1 + 1;
      uVar13 = *puVar14;
      puVar15 = param_1 + 2;
      uVar11 = *puVar15;
      uVar8 = *param_1;
      uVar4 = uVar11;
      uVar6 = uVar11;
      puVar7 = param_1;
      if (uVar13 < uVar8) {
        uVar2 = uVar13;
        uVar3 = uVar8;
        puVar17 = puVar15;
        if (uVar13 <= uVar11) {
          *param_1 = uVar13;
          param_1[1] = uVar8;
          uVar2 = uVar11;
          uVar10 = uVar8;
          uVar12 = uVar13;
          uVar6 = uVar13;
          puVar7 = puVar14;
          if (uVar8 <= uVar11) goto LAB_109fd1718;
        }
LAB_109fd16e4:
        *puVar7 = uVar11;
        *puVar17 = uVar8;
        uVar4 = uVar3;
        uVar10 = uVar2;
        uVar12 = uVar6;
      }
      else {
        uVar10 = uVar13;
        uVar12 = uVar8;
        if (uVar11 < uVar13) {
          *puVar14 = uVar11;
          *puVar15 = uVar13;
          uVar2 = uVar8;
          uVar3 = uVar13;
          uVar4 = uVar13;
          uVar10 = uVar11;
          puVar17 = puVar14;
          if (uVar11 < uVar8) goto LAB_109fd16e4;
        }
      }
LAB_109fd1718:
      uVar11 = param_1[3];
      uVar6 = uVar11;
      if (uVar11 < uVar4) {
        param_1[2] = uVar11;
        param_1[3] = uVar4;
        uVar6 = uVar4;
        if (uVar11 < uVar10) {
          *puVar14 = uVar11;
          *puVar15 = uVar10;
          if (uVar11 < uVar12) {
            *param_1 = uVar11;
            param_1[1] = uVar12;
          }
        }
      }
      if (uVar6 <= param_2[-1]) {
        return true;
      }
      param_1[3] = param_2[-1];
      param_2[-1] = uVar6;
      uVar6 = param_1[2];
      uVar4 = param_1[3];
      if (uVar6 <= uVar4) {
        return true;
      }
      param_1[2] = uVar4;
      param_1[3] = uVar6;
      uVar6 = param_1[1];
      if (uVar6 <= uVar4) {
        return true;
      }
      param_1[1] = uVar4;
      param_1[2] = uVar6;
LAB_109fd1780:
      uVar6 = *param_1;
      if (uVar4 < uVar6) {
        *param_1 = uVar4;
        param_1[1] = uVar6;
        return true;
      }
      return true;
    }
    puVar14 = param_1 + 1;
    uVar4 = *puVar14;
    puVar15 = param_1 + 2;
    uVar6 = *puVar15;
    uVar11 = *param_1;
    puVar7 = param_1;
    if (uVar4 < uVar11) {
      uVar13 = uVar11;
      puVar17 = puVar15;
      if (uVar4 <= uVar6) {
        *param_1 = uVar4;
        param_1[1] = uVar11;
        uVar4 = uVar6;
        puVar7 = puVar14;
        goto joined_r0x000109fd1654;
      }
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) goto LAB_109fd166c;
      *puVar14 = uVar6;
      *puVar15 = uVar4;
      puVar17 = puVar14;
      uVar13 = uVar4;
joined_r0x000109fd1654:
      uVar8 = uVar4;
      if (uVar11 <= uVar6) goto LAB_109fd166c;
    }
    *puVar7 = uVar6;
    *puVar17 = uVar11;
    uVar8 = uVar13;
LAB_109fd166c:
    if (uVar8 <= param_2[-1]) {
      return true;
    }
    *puVar15 = param_2[-1];
    param_2[-1] = uVar8;
    uVar6 = *puVar15;
    uVar4 = *puVar14;
    if (uVar6 < uVar4) {
      param_1[1] = uVar6;
      param_1[2] = uVar4;
      uVar4 = *param_1;
      if (uVar6 < uVar4) {
        *param_1 = uVar6;
        param_1[1] = uVar4;
        return true;
      }
      return true;
    }
    return true;
  }
  if (uVar4 < 2) {
    return true;
  }
  if (uVar4 == 2) {
    uVar4 = *param_1;
    if (param_2[-1] < uVar4) {
      *param_1 = param_2[-1];
      param_2[-1] = uVar4;
      return true;
    }
    return true;
  }
LAB_109fd14b4:
  puVar7 = param_1 + 2;
  uVar4 = *puVar7;
  puVar15 = param_1 + 1;
  uVar11 = *puVar15;
  uVar6 = *param_1;
  puVar14 = param_1;
  if (uVar11 < uVar6) {
    puVar17 = puVar7;
    if (uVar11 <= uVar4) {
      *param_1 = uVar11;
      param_1[1] = uVar6;
      puVar14 = puVar15;
      puVar15 = puVar7;
      goto LAB_109fd156c;
    }
  }
  else {
    if (uVar11 <= uVar4) goto LAB_109fd157c;
    *puVar15 = uVar4;
    *puVar7 = uVar11;
LAB_109fd156c:
    puVar17 = puVar15;
    if (uVar6 <= uVar4) goto LAB_109fd157c;
  }
  *puVar14 = uVar4;
  *puVar17 = uVar6;
LAB_109fd157c:
  if (param_1 + 3 != param_2) {
    iVar5 = 0;
    lVar9 = 0x18;
    puVar14 = param_1 + 3;
    do {
      puVar15 = puVar14;
      uVar6 = *puVar15;
      uVar4 = *puVar7;
      lVar16 = lVar9;
      if (uVar6 < uVar4) {
        do {
          *(ulong *)((long)param_1 + lVar16) = uVar4;
          lVar1 = lVar16 + -8;
          puVar7 = param_1;
          if (lVar1 == 0) goto LAB_109fd15d0;
          uVar4 = *(ulong *)((long)param_1 + lVar16 + -0x10);
          lVar16 = lVar1;
        } while (uVar6 < uVar4);
        puVar7 = (ulong *)((long)param_1 + lVar1);
LAB_109fd15d0:
        *puVar7 = uVar6;
        iVar5 = iVar5 + 1;
        if (iVar5 == 8) {
          return puVar15 + 1 == param_2;
        }
      }
      lVar9 = lVar9 + 8;
      puVar14 = puVar15 + 1;
      puVar7 = puVar15;
    } while (puVar15 + 1 != param_2);
  }
  return true;
}



/* Entry: 109fd1798; end: 109fd17ab;  */

void FUN_109fd1798(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fd17ac; end: 109fd17c3;  */

void FUN_109fd17ac(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109fd17bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 109fd17c4; end: 109fd17fb;  */

undefined8 FUN_109fd17c4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b98470);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109fd17fc; end: 109fd17ff;  */

void FUN_109fd17fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fd1800; end: 109fd195b;  */

long * FUN_109fd1800(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109fd195c; end: 109fd198f;  */

long * FUN_109fd195c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x888) != 0) {
    FUN_109fcd888();
  }
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return (long *)(param_1 + 0x20);
}



/* Entry: 109fd1990; end: 109fd19cb;  */

long FUN_109fd1990(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b984d0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109fd19cc; end: 109fd19cf;  */

void FUN_109fd19cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fd19d0; end: 109fd1d2b;  */

/* WARNING: Removing unreachable block (ram,0x000109fd1afc) */

void FUN_109fd19d0(undefined8 param_1,uint param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  code *pcVar3;
  undefined8 *puVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if (param_3 == 0) {
    func_0x000107c31940(&uStack_100,&UNK_10f62f5ab);
  }
  else {
    uStack_e8 = 0;
    uStack_e0 = 0;
    lStack_d8 = 0;
    bVar5 = true;
    uVar6 = param_3;
    do {
      if (!bVar5) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_e8," | ",3);
      }
      uVar7 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
      if (uVar7 < 0x1f) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_e8,(&PTR_DAT_110b984f8)[uVar7 * 2],
                   *(undefined8 *)(&UNK_110b98500 + uVar7 * 0x10));
      }
      else {
        __ZNSt3__19to_stringEm(auStack_b8,uVar7);
        puVar4 = auStack_b8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar4,0,&UNK_10f4efb6a,8);
        uStack_98 = puVar4[1];
        uStack_a0 = *puVar4;
        lStack_90 = puVar4[2];
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        puVar4 = &uStack_a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar4,&DAT_10f684600,1);
        uStack_78 = puVar4[1];
        pppuStack_80 = (undefined8 ***)*puVar4;
        uStack_70 = puVar4[2];
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        uVar1 = uStack_78;
        ppppuVar2 = (undefined8 ****)pppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar1 = uStack_70 >> 0x38;
          ppppuVar2 = &pppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_e8,ppppuVar2,uVar1);
        if (lStack_90 < 0) {
          __ZdlPv(uStack_a0);
        }
        if (cStack_a1 < '\0') {
          __ZdlPv(auStack_b8[0]);
        }
      }
      bVar5 = false;
      uVar6 = uVar6 & (1L << (uVar7 & 0x3f) ^ 0xffffffffffffffffU);
    } while (uVar6 != 0);
    puVar4 = &uStack_e8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar4,0,&UNK_10f62f5bf,0x10);
    uStack_c8 = puVar4[1];
    uStack_d0 = *puVar4;
    lStack_c0 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar4 = &uStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,&DAT_10f2da10d,1);
    uStack_f8 = puVar4[1];
    uStack_100 = *puVar4;
    lStack_f0 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    if (lStack_c0 < 0) {
      __ZdlPv(uStack_d0);
    }
    if (lStack_d8 < 0) {
      __ZdlPv(uStack_e8);
    }
  }
  func_0x00010924a40c(2,&UNK_10f62f564);
  if ((4 < param_2) &&
     ((func_0x00010924a40c(4,&UNK_10f62f590), param_2 != 5 || (((uint)param_3 >> 1 & 1) == 0)))) {
    func_0x000109243bf8(param_4);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109fd1c90);
    (*pcVar3)();
  }
  if (lStack_f0 < 0) {
    __ZdlPv(uStack_100);
  }
  return;
}



/* Entry: 109fd1d2c; end: 109fd1daf;  */

long FUN_109fd1d2c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x50));
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fd1db0; end: 109fd1f23;  */

void FUN_109fd1db0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar3 = param_2;
  FUN_109fd30d8();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined8 *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    if (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0) {
      FUN_109fccc60(*(long *)(param_1 + 0x48),*param_2);
    }
    puVar7 = PTR__OBJC_CLASS___MTLBlitPassDescriptor_1126de028;
    func_0x00010bf1cce0(PTR__OBJC_CLASS___MTLBlitPassDescriptor_1126de028);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar7;
    func_0x00010c1494e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c1f52e0(puVar2);
    func_0x00010c209680(puVar2);
    func_0x00010c195f40(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  FUN_109fd4ac4(puVar3,puVar7);
  uVar6 = *puVar3;
  _objc_retainAutorelease(uVar6);
  lVar5 = *(long *)(param_1 + 0x38);
  *(undefined1 *)(lVar5 + 0x90) = 1;
  *(undefined4 *)(lVar5 + 0x94) = 1;
  _objc_retain();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 109fd1f24; end: 109fd1fc7;  */

void FUN_109fd1f24(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *unaff_x21;
  long unaff_x22;
  long lVar5;
  
  if (param_5 != 0) {
    lVar5 = param_4 + param_5 * 0x18;
    do {
      func_0x00010bf51fa0(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x30));
      param_4 = param_4 + 0x18;
    } while (param_4 != lVar5);
  }
  if (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0) {
    FUN_109fccc60(*(long *)(param_1 + 0x48),param_2);
    puVar4 = *(undefined8 **)(param_1 + 0x48);
    if (*(int *)(puVar4 + 4) == 0) {
      if ((puVar4[1] == puVar4[2]) || (*(long *)(puVar4[2] + -0x10) != param_3)) {
        func_0x00010922d97c(&stack0xffffffffffffffd0,*puVar4);
        if (unaff_x22 != 0) {
          func_0x00010925df7c(puVar4 + 1,&stack0xffffffffffffffd0);
        }
        if (unaff_x21 != (long *)0x0) {
          plVar1 = unaff_x21 + 1;
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
            (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
            __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
          }
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 109fd1fc8; end: 109fd224b;  */

void FUN_109fd1fc8(long param_1,long param_2,ulong param_3,ulong *param_4,ulong param_5)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  long *plVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *puVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar22;
  ulong *unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  ulong uVar23;
  long unaff_x28;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  ulong *puStack_1d0;
  ulong uStack_1c8;
  ulong *puStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong *puStack_170;
  ulong uStack_168;
  long lStack_160;
  undefined *puStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong *puStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong *puStack_100;
  ulong uStack_f8;
  ulong *puStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  long *plStack_b0;
  ulong *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar11 = param_3;
  puVar12 = param_4;
  uVar14 = param_5;
  lStack_a0 = param_2;
  lStack_98 = param_1;
  if ((param_3 != 0) && (uVar16 = *(ulong *)(param_3 + 0x88), uVar16 != 0)) {
    plVar7 = (long *)(*(long *)(param_1 + 0x38) + 0xb0);
    puVar13 = (ulong *)*plVar7;
    puVar17 = *(ulong **)(*(long *)(param_1 + 0x38) + 0xb8);
    if (puVar13 == puVar17) {
LAB_109fd2034:
      if (puVar13 != puVar17) goto LAB_109fd204c;
    }
    else {
      do {
        if (*puVar13 == uVar16) goto LAB_109fd2034;
        puVar13 = puVar13 + 1;
      } while (puVar13 != puVar17);
    }
    uStack_78 = uVar16;
    func_0x000109245a44(plVar7,&uStack_78);
  }
LAB_109fd204c:
  lVar10 = lStack_98;
  if (param_5 != 0) {
    puStack_a8 = param_4 + param_5 * 7;
    lVar9 = lStack_a0;
    do {
      uVar15 = (uint)param_4[1];
      if (uVar15 == 0) {
        ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_3 + 0x40) * 4;
        if (0x56 < *(uint *)(param_3 + 0x40)) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        if (*(byte *)((long)ppuVar1 + 0x1a) != 0) {
          bVar4 = *(byte *)(ppuVar1 + 3);
          uVar15 = 0;
          if (bVar4 != 0) {
            uVar15 = (((int)param_4[5] + (uint)bVar4) - 1) / (uint)bVar4;
          }
          uVar15 = uVar15 * *(byte *)((long)ppuVar1 + 0x1a);
          goto LAB_109fd20a4;
        }
        func_0x000109243bf8(&UNK_10f62e152);
LAB_109fd223c:
        puVar8 = &UNK_10f62f7d1;
        func_0x000109243bf8();
        func_0x000104bd46a0();
        pcStack_c8 = FUN_109fd224c;
        puVar13 = puVar12;
        uVar16 = uVar14;
        uStack_168 = uVar11;
        lStack_160 = lVar9;
        puStack_158 = puVar8;
        lStack_120 = unaff_x28;
        lStack_118 = unaff_x27;
        uStack_110 = unaff_x26;
        uStack_108 = unaff_x25;
        puStack_100 = unaff_x24;
        uStack_f8 = param_5;
        puStack_f0 = param_4;
        uStack_e8 = unaff_x21;
        uStack_e0 = unaff_x20;
        uStack_d8 = param_3;
        puStack_d0 = &stack0xfffffffffffffff0;
        if ((lVar9 == 0) || (puVar17 = *(ulong **)(lVar9 + 0x88), puVar17 == (ulong *)0x0))
        goto LAB_109fd22d0;
        plVar7 = (long *)(*(long *)(puVar8 + 0x38) + 0xb0);
        puVar20 = (undefined8 *)*plVar7;
        puVar2 = *(undefined8 **)(*(long *)(puVar8 + 0x38) + 0xb8);
        if (puVar20 == puVar2) goto LAB_109fd22b8;
        goto LAB_109fd229c;
      }
LAB_109fd20a4:
      param_5 = param_4[2];
      unaff_x26 = (ulong)*(uint *)((long)param_4 + 0x2c);
      if (param_5 == 0) {
        ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_3 + 0x40) * 4;
        if (0x56 < *(uint *)(param_3 + 0x40)) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        uVar18 = (uint)*(byte *)((long)ppuVar1 + 0x19);
        if (*(byte *)((long)ppuVar1 + 0x19) < 2) {
          uVar18 = 1;
        }
        uVar19 = 0;
        if (uVar18 != 0) {
          uVar19 = ((*(uint *)((long)param_4 + 0x2c) + uVar18) - 1) / uVar18;
        }
        param_5 = (ulong)uVar19 * (ulong)uVar15;
      }
      unaff_x28 = (long)*(int *)((long)param_4 + 0x1c);
      unaff_x27 = (long)(int)param_4[4];
      unaff_x20 = (ulong)(uint)param_4[5];
      if (*(uint *)(param_3 + 0x34) - 2 < 2) {
        if ((int)param_4[6] != 0) {
          unaff_x21 = 0;
          unaff_x24 = (ulong *)*param_4;
          unaff_x25 = (ulong)uVar15;
          do {
            uStack_c0 = (ulong)(uint)((int)unaff_x21 + *(int *)((long)param_4 + 0x24));
            uVar11 = *(ulong *)(lVar9 + 0x48);
            uStack_68 = 1;
            uStack_b8 = (ulong)(uint)param_4[3];
            plStack_b0 = &lStack_90;
            lStack_80 = 0;
            puVar12 = unaff_x24;
            uVar14 = unaff_x25;
            lStack_90 = unaff_x28;
            lStack_88 = unaff_x27;
            uStack_78 = unaff_x20;
            uStack_70 = unaff_x26;
            func_0x00010bf51f80(*(undefined8 *)(*(long *)(lVar10 + 0x58) + 0x30));
            unaff_x24 = (ulong *)((long)unaff_x24 + param_5);
            uVar15 = (int)unaff_x21 + 1;
            unaff_x21 = (ulong)uVar15;
            lVar9 = lStack_a0;
            lVar10 = lStack_98;
          } while (uVar15 < (uint)param_4[6]);
        }
      }
      else {
        if (1 < *(uint *)(param_3 + 0x34)) goto LAB_109fd223c;
        uStack_68 = (ulong)(uint)param_4[6];
        lStack_80 = (long)*(int *)((long)param_4 + 0x24);
        uVar11 = *(ulong *)(lVar9 + 0x48);
        puVar12 = (ulong *)*param_4;
        uVar14 = (ulong)uVar15;
        uStack_b8 = (ulong)(uint)param_4[3];
        uStack_c0 = 0;
        plStack_b0 = &lStack_90;
        lStack_90 = unaff_x28;
        lStack_88 = unaff_x27;
        uStack_78 = unaff_x20;
        uStack_70 = unaff_x26;
        func_0x00010bf51f80(*(undefined8 *)(*(long *)(lVar10 + 0x58) + 0x30));
        lVar9 = lStack_a0;
        lVar10 = lStack_98;
      }
      param_4 = param_4 + 7;
    } while (param_4 != puStack_a8);
  }
  if (*(int *)(*(long *)(lVar10 + 0x48) + 0x20) == 0) {
    FUN_109fccc60();
    if (*(int *)(*(long *)(lVar10 + 0x48) + 0x20) == 0) {
      FUN_109fccc60(*(long *)(lVar10 + 0x48),param_3);
    }
  }
  return;
LAB_109fd22b8:
  if (puVar20 != puVar2) goto LAB_109fd22d0;
  goto LAB_109fd22c0;
LAB_109fd2530:
  if (plVar7 == plVar3) goto LAB_109fd2538;
  goto LAB_109fd254c;
  while (puVar20 = puVar20 + 1, puVar20 != puVar2) {
LAB_109fd229c:
    if ((ulong *)*puVar20 == puVar17) goto LAB_109fd22b8;
  }
LAB_109fd22c0:
  puStack_138 = puVar17;
  func_0x000109245a44(plVar7,&puStack_138);
LAB_109fd22d0:
  puVar8 = puStack_158;
  if (uVar14 != 0) {
    puStack_170 = puVar12 + uVar14 * 7;
    lVar10 = lStack_160;
    do {
      uVar22 = uStack_168;
      uVar15 = (uint)puVar12[1];
      if (uVar15 == 0) {
        ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar10 + 0x40) * 4;
        if (0x56 < *(uint *)(lVar10 + 0x40)) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        if (*(byte *)((long)ppuVar1 + 0x1a) != 0) {
          bVar4 = *(byte *)(ppuVar1 + 3);
          uVar15 = 0;
          if (bVar4 != 0) {
            uVar15 = (((int)puVar12[5] + (uint)bVar4) - 1) / (uint)bVar4;
          }
          uVar15 = uVar15 * *(byte *)((long)ppuVar1 + 0x1a);
          goto LAB_109fd2324;
        }
        func_0x000109243bf8(&UNK_10f62e152);
LAB_109fd24b8:
        puVar8 = &UNK_10f62f7d1;
        func_0x000109243bf8();
        func_0x000104bd46a0();
        pcStack_198 = FUN_109fd24c8;
        lVar9 = *(long *)(puVar8 + 0x38);
        puStack_1d0 = unaff_x24;
        uStack_1c8 = uVar14;
        puStack_1c0 = puVar12;
        uStack_1b8 = unaff_x21;
        uStack_1b0 = unaff_x20;
        uStack_1a8 = param_3;
        ppuStack_1a0 = &puStack_d0;
        if ((lVar10 == 0) || (lVar21 = *(long *)(lVar10 + 0x88), lVar21 == 0)) goto LAB_109fd254c;
        plVar7 = *(long **)(lVar9 + 0xb0);
        plVar3 = *(long **)(lVar9 + 0xb8);
        if (plVar7 == plVar3) goto LAB_109fd2530;
        goto LAB_109fd2514;
      }
LAB_109fd2324:
      uVar23 = puVar12[2];
      uVar18 = *(uint *)((long)puVar12 + 0x2c);
      if (uVar23 == 0) {
        ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar10 + 0x40) * 4;
        if (0x56 < *(uint *)(lVar10 + 0x40)) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        uVar19 = (uint)*(byte *)((long)ppuVar1 + 0x19);
        if (*(byte *)((long)ppuVar1 + 0x19) < 2) {
          uVar19 = 1;
        }
        uVar5 = 0;
        if (uVar19 != 0) {
          uVar5 = ((uVar18 + uVar19) - 1) / uVar19;
        }
        uVar23 = (ulong)uVar5 * (ulong)uVar15;
      }
      unaff_x24 = (ulong *)(long)*(int *)((long)puVar12 + 0x1c);
      uVar14 = (ulong)(int)puVar12[4];
      uVar6 = puVar12[5];
      if (*(uint *)(lVar10 + 0x34) - 2 < 2) {
        if ((int)puVar12[6] != 0) {
          uVar19 = 0;
          param_3 = *puVar12;
          unaff_x20 = (ulong)uVar15;
          do {
            puVar13 = (ulong *)(ulong)(uVar19 + *(int *)((long)puVar12 + 0x24));
            uVar11 = *(ulong *)(lVar10 + 0x98);
            uVar16 = (ulong)(uint)puVar12[3];
            lStack_128 = 0;
            uStack_140 = 1;
            uStack_190 = param_3;
            uStack_188 = unaff_x20;
            uStack_180 = uVar23;
            uStack_150 = (ulong)(uint)uVar6;
            uStack_148 = (ulong)uVar18;
            puStack_138 = unaff_x24;
            uStack_130 = uVar14;
            func_0x00010bf51fc0(*(undefined8 *)(*(long *)(puVar8 + 0x58) + 0x30));
            param_3 = param_3 + uVar23;
            uVar19 = uVar19 + 1;
            lVar10 = lStack_160;
            puVar8 = puStack_158;
          } while (uVar19 < (uint)puVar12[6]);
        }
      }
      else {
        if (1 < *(uint *)(lVar10 + 0x34)) goto LAB_109fd24b8;
        uStack_140 = (ulong)(uint)puVar12[6];
        lStack_128 = (long)*(int *)((long)puVar12 + 0x24);
        uVar11 = *(ulong *)(lVar10 + 0x98);
        uVar16 = (ulong)(uint)puVar12[3];
        uStack_188 = (ulong)uVar15;
        uStack_190 = *puVar12;
        puVar13 = (ulong *)0x0;
        uStack_180 = uVar23;
        uStack_150 = (ulong)(uint)uVar6;
        uStack_148 = (ulong)uVar18;
        puStack_138 = unaff_x24;
        uStack_130 = uVar14;
        func_0x00010bf51fc0(*(undefined8 *)(*(long *)(puVar8 + 0x58) + 0x30));
        lVar10 = lStack_160;
        puVar8 = puStack_158;
        uVar22 = unaff_x21;
      }
      puVar12 = puVar12 + 7;
      unaff_x21 = uVar22;
    } while (puVar12 != puStack_170);
  }
  if (*(int *)(*(long *)(puVar8 + 0x48) + 0x20) == 0) {
    FUN_109fccc60();
    if (*(int *)(*(long *)(puVar8 + 0x48) + 0x20) == 0) {
      FUN_109fccc60(*(long *)(puVar8 + 0x48),uStack_168);
    }
  }
  return;
  while (plVar7 = plVar7 + 1, plVar7 != plVar3) {
LAB_109fd2514:
    if (*plVar7 == lVar21) goto LAB_109fd2530;
  }
LAB_109fd2538:
  lStack_1f0 = lVar21;
  func_0x000109245a44((long *)(lVar9 + 0xb0),&lStack_1f0);
  lVar9 = *(long *)(puVar8 + 0x38);
LAB_109fd254c:
  if ((uVar11 != 0) && (lVar21 = *(long *)(uVar11 + 0x88), lVar21 != 0)) {
    plVar7 = *(long **)(lVar9 + 0xb0);
    plVar3 = *(long **)(lVar9 + 0xb8);
    if (plVar7 == plVar3) {
LAB_109fd2580:
      if (plVar7 != plVar3) goto LAB_109fd2594;
    }
    else {
      do {
        if (*plVar7 == lVar21) goto LAB_109fd2580;
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar3);
    }
    lStack_1f0 = lVar21;
    func_0x000109245a44((long *)(lVar9 + 0xb0),&lStack_1f0);
  }
LAB_109fd2594:
  if (uVar16 != 0) {
    lVar21 = uVar16 * 0x2c;
    lVar9 = (long)puVar13 + 0x14;
    do {
      lStack_1e0 = (long)*(int *)(lVar9 + -8);
      lStack_1f0 = (long)(int)*(undefined8 *)(lVar9 + -0x10);
      lStack_1e8 = (long)(int)((ulong)*(undefined8 *)(lVar9 + -0x10) >> 0x20);
      func_0x00010bf51fe0(*(undefined8 *)(*(long *)(puVar8 + 0x58) + 0x30));
      lVar9 = lVar9 + 0x2c;
      lVar21 = lVar21 + -0x2c;
    } while (lVar21 != 0);
  }
  if (*(int *)(*(long *)(puVar8 + 0x48) + 0x20) == 0) {
    FUN_109fccc60(*(long *)(puVar8 + 0x48),lVar10);
    if (*(int *)(*(long *)(puVar8 + 0x48) + 0x20) == 0) {
      FUN_109fccc60(*(long *)(puVar8 + 0x48),uVar11);
    }
  }
  return;
}



/* Entry: 109fd224c; end: 109fd24c7;  */

void FUN_109fd224c(long param_1,long param_2,long param_3,long *param_4,ulong param_5)

{
  undefined **ppuVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x24;
  uint uVar15;
  long lVar16;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_110;
  ulong uStack_108;
  long *plStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  plVar8 = param_4;
  uVar9 = param_5;
  lStack_a8 = param_3;
  lStack_a0 = param_2;
  lStack_98 = param_1;
  if ((param_2 != 0) && (lVar11 = *(long *)(param_2 + 0x88), lVar11 != 0)) {
    plVar5 = (long *)(*(long *)(param_1 + 0x38) + 0xb0);
    plVar14 = (long *)*plVar5;
    plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0xb8);
    if (plVar14 == plVar2) {
LAB_109fd22b8:
      if (plVar14 != plVar2) goto LAB_109fd22d0;
    }
    else {
      do {
        if (*plVar14 == lVar11) goto LAB_109fd22b8;
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar2);
    }
    lStack_78 = lVar11;
    func_0x000109245a44(plVar5,&lStack_78);
  }
LAB_109fd22d0:
  lVar11 = lStack_98;
  if (param_5 != 0) {
    plStack_b0 = param_4 + param_5 * 7;
    lVar7 = lStack_a0;
    do {
      lVar13 = lStack_a8;
      uVar10 = *(uint *)(param_4 + 1);
      if (uVar10 == 0) {
        ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar7 + 0x40) * 4;
        if (0x56 < *(uint *)(lVar7 + 0x40)) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        if (*(byte *)((long)ppuVar1 + 0x1a) != 0) {
          bVar4 = *(byte *)(ppuVar1 + 3);
          uVar10 = 0;
          if (bVar4 != 0) {
            uVar10 = (((int)param_4[5] + (uint)bVar4) - 1) / (uint)bVar4;
          }
          uVar10 = uVar10 * *(byte *)((long)ppuVar1 + 0x1a);
          goto LAB_109fd2324;
        }
        func_0x000109243bf8(&UNK_10f62e152);
LAB_109fd24b8:
        puVar6 = &UNK_10f62f7d1;
        func_0x000109243bf8();
        func_0x000104bd46a0();
        pcStack_d8 = FUN_109fd24c8;
        lVar11 = *(long *)(puVar6 + 0x38);
        lStack_110 = unaff_x24;
        uStack_108 = param_5;
        plStack_100 = param_4;
        lStack_f8 = unaff_x21;
        uStack_f0 = unaff_x20;
        lStack_e8 = unaff_x19;
        puStack_e0 = &stack0xfffffffffffffff0;
        if ((lVar7 == 0) || (lVar13 = *(long *)(lVar7 + 0x88), lVar13 == 0)) goto LAB_109fd254c;
        plVar14 = *(long **)(lVar11 + 0xb0);
        plVar2 = *(long **)(lVar11 + 0xb8);
        if (plVar14 == plVar2) goto LAB_109fd2530;
        goto LAB_109fd2514;
      }
LAB_109fd2324:
      lVar16 = param_4[2];
      uVar3 = *(uint *)((long)param_4 + 0x2c);
      if (lVar16 == 0) {
        ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar7 + 0x40) * 4;
        if (0x56 < *(uint *)(lVar7 + 0x40)) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        uVar12 = (uint)*(byte *)((long)ppuVar1 + 0x19);
        if (*(byte *)((long)ppuVar1 + 0x19) < 2) {
          uVar12 = 1;
        }
        uVar15 = 0;
        if (uVar12 != 0) {
          uVar15 = ((uVar3 + uVar12) - 1) / uVar12;
        }
        lVar16 = (ulong)uVar15 * (ulong)uVar10;
      }
      unaff_x24 = (long)*(int *)((long)param_4 + 0x1c);
      param_5 = (ulong)(int)param_4[4];
      uVar12 = *(uint *)(param_4 + 5);
      if (*(uint *)(lVar7 + 0x34) - 2 < 2) {
        if ((int)param_4[6] != 0) {
          uVar15 = 0;
          unaff_x19 = *param_4;
          unaff_x20 = (ulong)uVar10;
          do {
            plVar8 = (long *)(ulong)(uVar15 + *(int *)((long)param_4 + 0x24));
            param_3 = *(long *)(lVar7 + 0x98);
            uVar9 = (ulong)*(uint *)(param_4 + 3);
            lStack_68 = 0;
            uStack_80 = 1;
            lStack_d0 = unaff_x19;
            uStack_c8 = unaff_x20;
            lStack_c0 = lVar16;
            uStack_90 = (ulong)uVar12;
            uStack_88 = (ulong)uVar3;
            lStack_78 = unaff_x24;
            uStack_70 = param_5;
            func_0x00010bf51fc0(*(undefined8 *)(*(long *)(lVar11 + 0x58) + 0x30));
            unaff_x19 = unaff_x19 + lVar16;
            uVar15 = uVar15 + 1;
            lVar7 = lStack_a0;
            lVar11 = lStack_98;
          } while (uVar15 < *(uint *)(param_4 + 6));
        }
      }
      else {
        if (1 < *(uint *)(lVar7 + 0x34)) goto LAB_109fd24b8;
        uStack_80 = (ulong)*(uint *)(param_4 + 6);
        lStack_68 = (long)*(int *)((long)param_4 + 0x24);
        param_3 = *(long *)(lVar7 + 0x98);
        uVar9 = (ulong)*(uint *)(param_4 + 3);
        uStack_c8 = (ulong)uVar10;
        lStack_d0 = *param_4;
        plVar8 = (long *)0x0;
        lStack_c0 = lVar16;
        uStack_90 = (ulong)uVar12;
        uStack_88 = (ulong)uVar3;
        lStack_78 = unaff_x24;
        uStack_70 = param_5;
        func_0x00010bf51fc0(*(undefined8 *)(*(long *)(lVar11 + 0x58) + 0x30));
        lVar7 = lStack_a0;
        lVar11 = lStack_98;
        lVar13 = unaff_x21;
      }
      param_4 = param_4 + 7;
      unaff_x21 = lVar13;
    } while (param_4 != plStack_b0);
  }
  if (*(int *)(*(long *)(lVar11 + 0x48) + 0x20) == 0) {
    FUN_109fccc60();
    if (*(int *)(*(long *)(lVar11 + 0x48) + 0x20) == 0) {
      FUN_109fccc60(*(long *)(lVar11 + 0x48),lStack_a8);
    }
  }
  return;
LAB_109fd2530:
  if (plVar14 == plVar2) goto LAB_109fd2538;
  goto LAB_109fd254c;
  while (plVar14 = plVar14 + 1, plVar14 != plVar2) {
LAB_109fd2514:
    if (*plVar14 == lVar13) goto LAB_109fd2530;
  }
LAB_109fd2538:
  lStack_130 = lVar13;
  func_0x000109245a44((long *)(lVar11 + 0xb0),&lStack_130);
  lVar11 = *(long *)(puVar6 + 0x38);
LAB_109fd254c:
  if ((param_3 != 0) && (lVar13 = *(long *)(param_3 + 0x88), lVar13 != 0)) {
    plVar14 = *(long **)(lVar11 + 0xb0);
    plVar2 = *(long **)(lVar11 + 0xb8);
    if (plVar14 == plVar2) {
LAB_109fd2580:
      if (plVar14 != plVar2) goto LAB_109fd2594;
    }
    else {
      do {
        if (*plVar14 == lVar13) goto LAB_109fd2580;
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar2);
    }
    lStack_130 = lVar13;
    func_0x000109245a44((long *)(lVar11 + 0xb0),&lStack_130);
  }
LAB_109fd2594:
  if (uVar9 != 0) {
    lVar13 = uVar9 * 0x2c;
    lVar11 = (long)plVar8 + 0x14;
    do {
      lStack_120 = (long)*(int *)(lVar11 + -8);
      lStack_130 = (long)(int)*(undefined8 *)(lVar11 + -0x10);
      lStack_128 = (long)(int)((ulong)*(undefined8 *)(lVar11 + -0x10) >> 0x20);
      func_0x00010bf51fe0(*(undefined8 *)(*(long *)(puVar6 + 0x58) + 0x30));
      lVar11 = lVar11 + 0x2c;
      lVar13 = lVar13 + -0x2c;
    } while (lVar13 != 0);
  }
  if (*(int *)(*(long *)(puVar6 + 0x48) + 0x20) == 0) {
    FUN_109fccc60(*(long *)(puVar6 + 0x48),lVar7);
    if (*(int *)(*(long *)(puVar6 + 0x48) + 0x20) == 0) {
      FUN_109fccc60(*(long *)(puVar6 + 0x48),param_3);
    }
  }
  return;
}



/* Entry: 109fd24c8; end: 109fd2667;  */

void FUN_109fd24c8(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if ((param_2 != 0) && (lVar3 = *(long *)(param_2 + 0x88), lVar3 != 0)) {
    plVar4 = *(long **)(lVar2 + 0xb0);
    plVar1 = *(long **)(lVar2 + 0xb8);
    if (plVar4 == plVar1) {
LAB_109fd2530:
      if (plVar4 != plVar1) goto LAB_109fd254c;
    }
    else {
      do {
        if (*plVar4 == lVar3) goto LAB_109fd2530;
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar1);
    }
    lStack_60 = lVar3;
    func_0x000109245a44((long *)(lVar2 + 0xb0),&lStack_60);
    lVar2 = *(long *)(param_1 + 0x38);
  }
LAB_109fd254c:
  if ((param_3 != 0) && (lVar3 = *(long *)(param_3 + 0x88), lVar3 != 0)) {
    plVar4 = *(long **)(lVar2 + 0xb0);
    plVar1 = *(long **)(lVar2 + 0xb8);
    if (plVar4 == plVar1) {
LAB_109fd2580:
      if (plVar4 != plVar1) goto LAB_109fd2594;
    }
    else {
      do {
        if (*plVar4 == lVar3) goto LAB_109fd2580;
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar1);
    }
    lStack_60 = lVar3;
    func_0x000109245a44((long *)(lVar2 + 0xb0),&lStack_60);
  }
LAB_109fd2594:
  if (param_5 != 0) {
    param_5 = param_5 * 0x2c;
    param_4 = param_4 + 0x14;
    do {
      lStack_50 = (long)*(int *)(param_4 + -8);
      lStack_60 = (long)(int)*(undefined8 *)(param_4 + -0x10);
      lStack_58 = (long)(int)((ulong)*(undefined8 *)(param_4 + -0x10) >> 0x20);
      func_0x00010bf51fe0(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x30));
      param_4 = param_4 + 0x2c;
      param_5 = param_5 + -0x2c;
    } while (param_5 != 0);
  }
  if (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0) {
    FUN_109fccc60(*(long *)(param_1 + 0x48),param_2);
    if (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0) {
      FUN_109fccc60(*(long *)(param_1 + 0x48),param_3);
    }
  }
  return;
}



/* Entry: 109fd2668; end: 109fd2703;  */

void FUN_109fd2668(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lStack_28;
  
  if ((param_2 != 0) && (lVar3 = *(long *)(param_2 + 0x88), lVar3 != 0)) {
    plVar2 = (long *)(*(long *)(param_1 + 0x38) + 0xb0);
    plVar4 = (long *)*plVar2;
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0xb8);
    if (plVar4 == plVar1) {
LAB_109fd26b8:
      if (plVar4 != plVar1) goto LAB_109fd26cc;
    }
    else {
      do {
        if (*plVar4 == lVar3) goto LAB_109fd26b8;
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar1);
    }
    lStack_28 = lVar3;
    func_0x000109245a44(plVar2,&lStack_28);
  }
LAB_109fd26cc:
  func_0x00010bfbfbc0(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x30));
  if (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0) {
    FUN_109fccc60(*(long *)(param_1 + 0x48),param_2);
  }
  return;
}



/* Entry: 109fd2704; end: 109fd2707;  */

void FUN_109fd2704(void)

{
  return;
}



/* Entry: 109fd2708; end: 109fd273b;  */

void FUN_109fd2708(long param_1)

{
  undefined8 uVar1;
  
  FUN_109fd4b68(*(undefined8 *)(param_1 + 0x58));
  *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x94) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109fd273c; end: 109fd273f;  */

long FUN_109fd273c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x50));
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fd2740; end: 109fd2753;  */

void FUN_109fd2740(void)

{
  FUN_109fd1d2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fd2754; end: 109fd275b;  */

long FUN_109fd2754(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + -0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + -0x28;
}



/* Entry: 109fd275c; end: 109fd2773;  */

void FUN_109fd275c(long param_1)

{
  FUN_109fd1d2c(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fd2774; end: 109fd2893;  */

undefined8 * FUN_109fd2774(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 2;
  *param_1 = &PTR_DAT_110b97998;
  param_1[1] = 0;
  uVar3 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar3;
  *param_1 = &PTR_DAT_110b98868;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  uVar1 = 0x20;
  if ((*(uint *)((long)param_3 + 0xc) & 2) != 0) {
    uVar1 = (*(uint *)((long)param_3 + 0xc) & 8) == 0;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x8d8);
  func_0x00010c0d85c0(uVar3,param_2,*param_3,uVar1);
  uVar4 = param_1[9];
  param_1[9] = uVar3;
  _objc_release(uVar4);
  if ((*(byte *)((long)param_3 + 0xc) >> 1 & 1) != 0) {
    uVar3 = param_1[9];
    func_0x00010bf4df40();
    param_1[8] = uVar3;
  }
  lVar5 = param_1[9];
  _objc_retain(lVar5);
  if (lVar5 != 0) {
    iVar2 = 2;
    func_0x000107c31924(2,0x10,0,0);
    if (iVar2 != 0) {
      lVar6 = lVar5;
      func_0x00010bfcd760();
      goto LAB_109fd2844;
    }
  }
  lVar6 = 0;
LAB_109fd2844:
  _objc_release(lVar5);
  param_1[7] = lVar6;
  return param_1;
}



/* Entry: 109fd2894; end: 109fd28b3;  */

long FUN_109fd2894(long param_1,undefined8 param_2,long param_3)

{
  return *(long *)(param_1 + 0x40) + param_3;
}



/* Entry: 109fd28b4; end: 109fd28c7;  */

void FUN_109fd28b4(void)

{
  FUN_109fd28c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fd28c8; end: 109fd28fb;  */

long FUN_109fd28c8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x48));
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fd28fc; end: 109fd2a4b;  */

undefined8 * FUN_109fd28fc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = param_1;
  func_0x00010922d460();
  *puVar1 = &PTR_FUN_110b988e0;
  plVar2 = puVar1 + 0x19;
  *plVar2 = param_2;
  FUN_109fd47bc(puVar1 + 0x1a,param_2);
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = param_2;
  *(undefined4 *)(param_1 + 0x26) = 3;
  param_1[0x29] = param_1;
  param_1[0x2a] = param_2 + 0x810;
  param_1[0x2b] = param_1 + 0xd;
  param_1[0x2c] = 0;
  param_1[0x22] = &PTR_FUN_110b98768;
  param_1[0x23] = 0;
  param_1[0x27] = &PTR_FUN_110b98808;
  param_1[0x28] = param_1;
  param_1[0x2d] = plVar2;
  FUN_109fe0430(param_1 + 0x2e,param_2,param_1);
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc5] = param_2;
  *(undefined4 *)(param_1 + 0xc6) = 0x15;
  param_1[200] = param_1;
  param_1[0xc9] = param_1;
  param_1[0xca] = param_2 + 0x810;
  param_1[0xcb] = param_1 + 0xd;
  param_1[0xcc] = 0;
  param_1[0xc2] = &PTR_FUN_110b98a08;
  param_1[199] = &PTR_FUN_110b98aa0;
  param_1[0xcd] = plVar2;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  param_1[0xdd] = 0;
  param_1[0xdc] = 0;
  param_1[0xdf] = 0;
  param_1[0xde] = 0;
  param_1[0xe1] = 0;
  param_1[0xe0] = 0;
  param_1[0xe3] = 0;
  param_1[0xe2] = 0;
  param_1[0xe5] = 0;
  param_1[0xe4] = 0;
  param_1[0xe6] = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0xffffffff;
  return param_1;
}



/* Entry: 109fd2a4c; end: 109fd2aef;  */

void FUN_109fd2a4c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uStack_24;
  
  uVar1 = *(ulong *)(param_1 + 0xf0);
  if (uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c252d60();
    uStack_24 = (undefined4)uVar1;
    if ((((uVar1 & 0xfffffffffffffffe) != 4) && ((*(byte *)(lVar2 + 0x810) >> 1 & 1) != 0)) &&
       (*(uint *)(lVar2 + 0x818) < 6)) {
      FUN_109fd2e10(lVar2 + 0x810,5,2,&UNK_10f62f7ea,0x57,&uStack_24);
    }
  }
  func_0x000109fd2ddc(param_1 + 0x610);
  func_0x000109fd2da8(param_1 + 0x170);
  FUN_109fd1d2c(param_1 + 0x110);
  FUN_109fd4878(param_1 + 200);
  func_0x00010922d5ac(param_1);
  return;
}



/* Entry: 109fd2af0; end: 109fd2af3;  */

void FUN_109fd2af0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uStack_24;
  
  uVar1 = *(ulong *)(param_1 + 0xf0);
  if (uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c252d60();
    uStack_24 = (undefined4)uVar1;
    if ((((uVar1 & 0xfffffffffffffffe) != 4) && ((*(byte *)(lVar2 + 0x810) >> 1 & 1) != 0)) &&
       (*(uint *)(lVar2 + 0x818) < 6)) {
      FUN_109fd2e10(lVar2 + 0x810,5,2,&UNK_10f62f7ea,0x57,&uStack_24);
    }
  }
  func_0x000109fd2ddc(param_1 + 0x610);
  func_0x000109fd2da8(param_1 + 0x170);
  FUN_109fd1d2c(param_1 + 0x110);
  FUN_109fd4878(param_1 + 200);
  func_0x00010922d5ac(param_1);
  return;
}



/* Entry: 109fd2af4; end: 109fd2b07;  */

void FUN_109fd2af4(void)

{
  FUN_109fd2a4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fd2b08; end: 109fd2b0b;  */

void FUN_109fd2b08(void)

{
  return;
}



/* Entry: 109fd2b0c; end: 109fd2c3f;  */

void FUN_109fd2b0c(long param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = 0xa8;
  if (param_2 != 0) {
    lVar1 = 0xac;
  }
  if (*(long *)(param_1 + 0xa0) == 0 || *(int *)(param_1 + lVar1) == -1) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___MTLBlitPassDescriptor_1126de028;
  func_0x00010bf1cce0(PTR__OBJC_CLASS___MTLBlitPassDescriptor_1126de028);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1494e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c1f52e0(puVar4);
  func_0x00010c209680(puVar4);
  func_0x00010c195f40(puVar4);
  FUN_109fd4ac4(param_1 + 200,puVar2);
  FUN_109fd4b68(param_1 + 200);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 109fd2c40; end: 109fd2c57;  */

long FUN_109fd2c40(long param_1)

{
  return param_1 + 0x170;
}



/* Entry: 109fd2c58; end: 109fd2da3;  */

/* WARNING: Removing unreachable block (ram,0x000109fd2b30) */
/* WARNING: Removing unreachable block (ram,0x000109fd2bbc) */

void FUN_109fd2c58(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_109fd4948(param_1 + 200);
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 0x38) = param_2[2];
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  func_0x00010922d864(param_1,param_2 + 1);
  if (*(long *)(param_1 + 0xa0) != 0 && *(int *)(param_1 + 0xa8) != -1) {
    puVar1 = PTR__OBJC_CLASS___MTLBlitPassDescriptor_1126de028;
    func_0x00010bf1cce0(PTR__OBJC_CLASS___MTLBlitPassDescriptor_1126de028);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c1494e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c1f52e0(puVar3);
    func_0x00010c209680(puVar3);
    func_0x00010c195f40(puVar3);
    FUN_109fd4ac4(param_1 + 200,puVar1);
    FUN_109fd4b68(param_1 + 200);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 109fd2da4; end: 109fd2da7;  */

void FUN_109fd2da4(void)

{
  return;
}



/* Entry: 109fd2da8; end: 109fd2e0f;  */

long FUN_109fd2da8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x50));
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fd2e10; end: 109fd2eaf;  */

void FUN_109fd2e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x000109231308(&ppuStack_48,param_4);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &ppuStack_48;
  }
  FUN_109fd19d0(param_1,param_2,param_3,pppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  return;
}



/* Entry: 109fd2eb0; end: 109fd2f57;  */

void FUN_109fd2eb0(long param_1,long param_2)

{
  long lVar1;
  
  if (((param_2 != 0) && (*(long *)(param_1 + 0x50) != 0)) &&
     (*(char *)(*(long *)(param_1 + 0x18) + 0x8f0) == '\x01')) {
    lVar1 = *(long *)(param_2 + 0x28);
    _objc_retain(lVar1);
    if (lVar1 != 0) {
      if (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0) {
        FUN_109fccc60(*(long *)(param_1 + 0x48),param_2);
      }
      func_0x00010c149780(*(undefined8 *)(param_1 + 0x50));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 109fd2f58; end: 109fd2f67;  */

void FUN_109fd2f58(void)

{
  return;
}



/* Entry: 109fd2f68; end: 109fd300f;  */

void FUN_109fd2f68(long param_1,long param_2)

{
  long lVar1;
  
  if (((param_2 != 0) && (*(long *)(param_1 + 0x50) != 0)) &&
     (*(char *)(*(long *)(param_1 + 0x18) + 0x8f0) == '\x01')) {
    lVar1 = *(long *)(param_2 + 0x28);
    _objc_retain(lVar1);
    if (lVar1 != 0) {
      if (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0) {
        FUN_109fccc60(*(long *)(param_1 + 0x48),param_2);
      }
      func_0x00010c149780(*(undefined8 *)(param_1 + 0x50));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 109fd3010; end: 109fd301f;  */

void FUN_109fd3010(void)

{
  return;
}



/* Entry: 109fd3020; end: 109fd30c7;  */

void FUN_109fd3020(long param_1,long param_2)

{
  long lVar1;
  
  if (((param_2 != 0) && (*(long *)(param_1 + 0x50) != 0)) &&
     (*(char *)(*(long *)(param_1 + 0x18) + 0x8f0) == '\x01')) {
    lVar1 = *(long *)(param_2 + 0x28);
    _objc_retain(lVar1);
    if (lVar1 != 0) {
      if (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0) {
        FUN_109fccc60(*(long *)(param_1 + 0x48),param_2);
      }
      func_0x00010c149780(*(undefined8 *)(param_1 + 0x50));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 109fd30c8; end: 109fd30d7;  */

void FUN_109fd30c8(void)

{
  return;
}



/* Entry: 109fd30d8; end: 109fd310f;  */

void FUN_109fd30d8(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*param_1 + 0x28);
    _objc_retain(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109fd3110; end: 109fd3153;  */

long FUN_109fd3110(long param_1)

{
  FUN_109fd3154();
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fd3154; end: 109fd3193;  */

void FUN_109fd3154(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  char cStack_38;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  if ((uVar2 != 0) && (func_0x00010c252d60(), uVar2 < 4)) {
    func_0x00010c2a14a0(*(undefined8 *)(param_1 + 0x30));
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x888);
  lVar5 = lVar3 + 8;
  cStack_38 = '\x01';
  lStack_40 = lVar5;
  __ZNSt3__15mutex4lockEv(lVar5);
  lVar4 = *(long *)(lVar3 + 0x78);
  if (*(long *)(lVar3 + 0x80) != lVar4) {
    lVar5 = 0;
    uVar2 = 0;
    do {
      plVar1 = *(long **)(lVar4 + lVar5 + 0x10);
      if (((plVar1 != (long *)0x0) && ((*(byte *)(lVar4 + lVar5 + 0x28) & 1) == 0)) &&
         ((**(code **)(*plVar1 + 0x30))(plVar1,*(undefined8 *)(lVar4 + lVar5 + 0x20)),
         (int)plVar1 == 1)) {
        FUN_109fcd634(lVar3,uVar2,&lStack_40);
      }
      uVar2 = uVar2 + 1;
      lVar4 = *(long *)(lVar3 + 0x78);
      lVar5 = lVar5 + 0x30;
    } while (uVar2 < (ulong)((*(long *)(lVar3 + 0x80) - lVar4 >> 4) * -0x5555555555555555));
    lVar5 = lStack_40;
    if (cStack_38 != '\x01') {
      return;
    }
  }
  __ZNSt3__15mutex6unlockEv(lVar5);
  return;
}



/* Entry: 109fd3194; end: 109fd3197;  */

long FUN_109fd3194(long param_1)

{
  FUN_109fd3154();
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fd3198; end: 109fd31ab;  */

void FUN_109fd3198(void)

{
  FUN_109fd3110();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fd31ac; end: 109fd31af;  */

void FUN_109fd31ac(void)

{
  return;
}



/* Entry: 109fd31b0; end: 109fd34d7;  */

void FUN_109fd31b0(long param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6,ulong param_7,undefined8 param_8,
                  undefined8 *param_9,long param_10,int param_11,undefined4 param_12,
                  undefined1 *param_13)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  
  lVar12 = *(long *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(lVar12 + 0x888);
  uVar14 = param_7 << 3;
  uVar7 = uVar14;
  plVar8 = param_6;
  uVar4 = param_7;
  do {
    if (uVar4 == 0) {
      bVar3 = false;
LAB_109fd3224:
      FUN_109fd0328(auStack_90,param_6,param_7,&param_13);
      if ((bVar3) && (param_13 == (undefined1 *)0x0)) {
        FUN_109fcbc0c(&puStack_a0,*(undefined8 *)(lVar12 + 0x890));
        param_13 = puStack_a0;
      }
      else {
        puStack_a0 = (undefined1 *)0x0;
        plStack_98 = (long *)0x0;
      }
      if (param_3 != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf41ae0();
        _objc_retainAutoreleasedReturnValue();
        uStack_68 = uVar6;
        do {
          func_0x000109fe2cbc(*param_2,&uStack_68);
          param_3 = param_3 + -1;
          param_2 = param_2 + 1;
        } while (param_3 != 0);
        func_0x00010bf42760(uVar6);
        _objc_release(uVar6);
      }
      lVar12 = param_6[param_7 - 1];
      if (1 < param_7) {
        lVar13 = param_7 - 1;
        plVar8 = param_6;
        do {
          lVar10 = *plVar8;
          FUN_109fd2b0c(lVar10,1);
          func_0x00010bf42760(*(undefined8 *)(lVar10 + 0xf0));
          *(undefined1 *)(lVar10 + 0x90) = 2;
          lVar13 = lVar13 + -1;
          plVar8 = plVar8 + 1;
        } while (lVar13 != 0);
      }
      FUN_109fd2b0c(lVar12,1);
      for (; param_10 != 0; param_10 = param_10 + -1) {
        func_0x000109fe2d0c(*param_9,lVar12 + 0xf0);
        param_9 = param_9 + 1;
      }
      func_0x00010bf42760(*(undefined8 *)(lVar12 + 0xf0));
      *(undefined1 *)(lVar12 + 0x90) = 2;
      uVar11 = *(undefined8 *)(lVar12 + 0xf0);
      _objc_retain(uVar11);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = uVar11;
      _objc_release(uVar6);
      if (param_13 != (undefined1 *)0x0) {
        func_0x000109fdefe0(param_13,lVar12 + 0xf0);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      if (param_7 == 0) {
        bVar3 = true;
      }
      if (!bVar3) {
        do {
          if ((*(byte *)(*param_6 + 0x98) & 1) == 0) {
            FUN_109fcd08c(uVar9,*param_6,param_13);
          }
          param_6 = param_6 + 1;
          uVar14 = uVar14 - 8;
        } while (uVar14 != 0);
      }
      if (param_11 != 0) {
        if (param_11 == 1) {
          uVar7 = *(ulong *)(lVar12 + 0xf0);
          if ((uVar7 != 0) && (func_0x00010c252d60(), uVar7 < 3)) {
            func_0x00010c2a15c0(*(undefined8 *)(lVar12 + 0xf0));
          }
        }
        else {
          if (param_11 != 2) {
            func_0x000109243bf8(&UNK_10f62f842);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x109fd348c);
            (*pcVar5)();
          }
          uVar7 = *(ulong *)(lVar12 + 0xf0);
          if ((uVar7 != 0) && (func_0x00010c252d60(), uVar7 < 4)) {
            func_0x00010c2a14a0(*(undefined8 *)(lVar12 + 0xf0));
          }
        }
      }
      plVar8 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar1 = plStack_98 + 1;
        do {
          lVar12 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      puStack_a0 = auStack_80;
      func_0x000109247e28(&puStack_a0);
      if (plStack_88 != (long *)0x0) {
        plVar8 = plStack_88 + 1;
        do {
          lVar12 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
        }
      }
      return;
    }
    if ((*(byte *)(*plVar8 + 0x98) & 1) == 0) {
      FUN_109fcd53c(uVar9);
      bVar3 = true;
      goto LAB_109fd3224;
    }
    uVar7 = uVar7 - 8;
    plVar8 = plVar8 + 1;
    uVar4 = uVar7;
  } while( true );
}



/* Entry: 109fd34d8; end: 109fd3577;  */

void FUN_109fd34d8(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  if ((uVar1 != 0) && (func_0x00010c252d60(), uVar1 < 3)) {
                    /* WARNING: Could not recover jumptable at 0x00010c2a15d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_waitUntilScheduled_112685f98);
    return;
  }
  return;
}



/* Entry: 109fd3578; end: 109fd36fb;  */

void FUN_109fd3578(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar3 = param_2;
  FUN_109fd30d8();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined8 *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    if (*(int *)(*(long *)(param_1 + 0x48) + 0x20) == 0) {
      FUN_109fccc60(*(long *)(param_1 + 0x48),*param_2);
    }
    puVar7 = PTR__OBJC_CLASS___MTLComputePassDescriptor_1126de030;
    func_0x00010bf45920(PTR__OBJC_CLASS___MTLComputePassDescriptor_1126de030);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar7;
    func_0x00010c1494e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c1f52e0(puVar2);
    func_0x00010c209680(puVar2);
    func_0x00010c195f40(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  FUN_109fd4bb4(puVar3,puVar7);
  FUN_109fdec90(param_1 + 0x78);
  uVar6 = *puVar3;
  _objc_retainAutorelease(uVar6);
  lVar5 = *(long *)(param_1 + 0x38);
  *(undefined1 *)(lVar5 + 0x90) = 1;
  *(undefined4 *)(lVar5 + 0x94) = 3;
  _objc_retain();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 109fd36fc; end: 109fd3863;  */

void FUN_109fd36fc(long param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lStack_58;
  
  puVar3 = *(undefined8 **)(param_4 + 0x310);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x00010c1741a0(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x40),param_2,*puVar3,
                        *(undefined4 *)(puVar3 + 1),param_2 & 0xffffffff);
    FUN_109fd7464(param_4,*(undefined8 *)(param_1 + 0x58));
    lVar7 = *(long *)(param_1 + 0x38);
    if ((*(byte *)(lVar7 + 0x98) & 1) == 0) {
      uVar4 = *(ulong *)(param_4 + 0x250);
      if (uVar4 != 0) {
        uVar8 = 0;
        do {
          if ((*(long *)(*(long *)(param_4 + 0x248) + uVar8 * 8) != 0) &&
             (*(int *)(lVar7 + 0x88) == 0)) {
            FUN_109fccc60(lVar7 + 0x68);
            uVar4 = *(ulong *)(param_4 + 0x250);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar4);
      }
      if (*(int *)(lVar7 + 0x88) == 0) {
        FUN_109fccc60(lVar7 + 0x68,param_4);
      }
      if (*(int *)(lVar7 + 0x60) == 0) {
        FUN_109fccc60(lVar7 + 0x40,*(undefined8 *)(param_4 + 0x30));
      }
    }
    if (*(long *)(param_4 + 0x2a8) != 0) {
      lVar7 = *(long *)(param_1 + 0x38);
      plVar6 = *(long **)(param_4 + 0x2a0);
      plVar1 = plVar6 + *(long *)(param_4 + 0x2a8);
      do {
        lStack_58 = *plVar6;
        plVar5 = *(long **)(lVar7 + 0xb0);
        plVar2 = *(long **)(lVar7 + 0xb8);
        if (plVar5 == plVar2) {
LAB_109fd380c:
          if (plVar5 == plVar2) goto LAB_109fd3814;
        }
        else {
          do {
            if (*plVar5 == lStack_58) goto LAB_109fd380c;
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar2);
LAB_109fd3814:
          func_0x000109249b14(lVar7 + 0xb0,&lStack_58);
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
  }
  FUN_109fde968(param_1 + 0x78,param_2,param_3,param_5,param_6);
  return;
}



/* Entry: 109fd3864; end: 109fd3907;  */

void FUN_109fd3864(undefined8 param_1,ulong param_2,long param_3,undefined8 *param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_5 != 0) {
    lVar5 = 0;
    param_2 = param_2 & 0xffffffff;
    do {
      lVar3 = *(long *)(*(long *)(param_3 + 0x60) + param_2 * 8);
      uVar4 = *param_4;
      FUN_109fd0a20(lVar3,uVar4);
      lVar2 = param_7 - lVar5;
      if (lVar3 != -1) {
        lVar2 = lVar3;
      }
      lVar1 = lVar5 * 4;
      lVar5 = lVar3 + lVar5;
      FUN_109fd36fc(param_1,param_2,param_3,uVar4,param_6 + lVar1,lVar2);
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109fd3908; end: 109fd397f;  */

void FUN_109fd3908(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *unaff_x21;
  undefined8 uVar7;
  long unaff_x22;
  ulong uVar8;
  
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x40);
  FUN_109fd4584(param_2);
  func_0x00010c1806a0(uVar7);
  uVar2 = *(uint *)(param_2 + 0x48);
  uVar8 = *(ulong *)(param_2 + 0x40);
  *(ulong *)(param_1 + 0x68) = uVar8 >> 0x20;
  *(ulong *)(param_1 + 0x60) = uVar8 & 0xffffffff;
  *(ulong *)(param_1 + 0x70) = (ulong)uVar2;
  puVar5 = *(undefined8 **)(param_1 + 0x48);
  if (*(int *)(puVar5 + 4) != 0) {
    return;
  }
  if ((puVar5[1] == puVar5[2]) || (*(long *)(puVar5[2] + -0x10) != param_2)) {
    func_0x00010922d97c(&stack0xffffffffffffffd0,*puVar5);
    if (unaff_x22 != 0) {
      func_0x00010925df7c(puVar5 + 1,&stack0xffffffffffffffd0);
    }
    if (unaff_x21 != (long *)0x0) {
      plVar1 = unaff_x21 + 1;
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
        (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
      }
    }
  }
  return;
}



/* Entry: 109fd3980; end: 109fd3a03;  */

void FUN_109fd3980(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  FUN_109fdeb84(param_1 + 0x78,*(undefined8 *)(lVar1 + 0x40));
  func_0x00010bf85260(*(undefined8 *)(lVar1 + 0x40));
  return;
}



/* Entry: 109fd3a04; end: 109fd3d9b;  */

void FUN_109fd3a04(long *param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long in_x5;
  ulong in_x6;
  long in_x7;
  long lVar4;
  long *plVar5;
  ushort *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *in_stack_00000000;
  ulong in_stack_00000008;
  long *plStack_f0;
  undefined4 uStack_e8;
  ulong uStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  long alStack_b0 [8];
  long *plStack_70;
  ulong uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (in_stack_00000008 == 0) {
    plStack_d8 = param_1;
    if (in_x5 == 0 && in_x7 == 0) goto LAB_109fd3d0c;
  }
  else {
    uVar9 = 0;
    plVar3 = param_1;
    do {
      if ((*(long *)(in_stack_00000000 + uVar9 * 0x14 + 8) != 0) &&
         (lVar4 = *(long *)(*(long *)(in_stack_00000000 + uVar9 * 0x14 + 8) + 0x88), lVar4 != 0)) {
        plVar3 = (long *)(param_1[7] + 0xb0);
        plVar5 = (long *)*plVar3;
        plVar1 = *(long **)(param_1[7] + 0xb8);
        if (plVar5 == plVar1) {
LAB_109fd3a94:
          if (plVar5 != plVar1) goto LAB_109fd3aa8;
        }
        else {
          do {
            if (*plVar5 == lVar4) goto LAB_109fd3a94;
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar1);
        }
        alStack_b0[0] = lVar4;
        func_0x000109245a44(plVar3,alStack_b0);
      }
LAB_109fd3aa8:
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar9 < in_stack_00000008);
    if (in_x5 == 0 && in_x7 == 0) {
      puVar6 = in_stack_00000000;
      do {
        if (((*puVar6 & 0x5550) != 0) || ((puVar6[2] & 0x5550) != 0)) {
          plStack_70 = alStack_b0;
          uStack_60 = 8;
          uStack_68 = 0;
          bVar2 = true;
          goto joined_r0x000109fd3c08;
        }
        puVar6 = puVar6 + 0x14;
        plStack_d8 = plVar3;
      } while (puVar6 != in_stack_00000000 + in_stack_00000008 * 0x14);
      goto LAB_109fd3d0c;
    }
  }
  bVar2 = in_x5 == 0;
  plStack_70 = alStack_b0;
  uStack_60 = 8;
  uStack_68 = 0;
  if (in_x7 != 0) {
    uVar9 = in_x6 + in_x7 * 0x20;
    do {
      uVar7 = *(undefined8 *)(*(long *)(in_x6 + 8) + 0x48);
      _objc_retain(uVar7);
      uStack_b8 = uVar7;
      FUN_109fd3e90(alStack_b0,&uStack_b8);
      _objc_release(uStack_b8);
      if (*(int *)(param_1[9] + 0x20) == 0) {
        FUN_109fccc60(param_1[9],*(undefined8 *)(in_x6 + 8));
      }
      if ((uStack_68 != 0) && (uStack_68 == uStack_60)) {
        func_0x00010c0ca0c0(*(undefined8 *)(param_1[0xb] + 0x40));
        if (uStack_68 != 0) {
          uVar8 = 0;
          do {
            _objc_release(plStack_70[uVar8]);
            uVar8 = uVar8 + 1;
          } while (uVar8 < uStack_68);
        }
        uStack_68 = 0;
      }
      in_x6 = in_x6 + 0x20;
    } while (in_x6 != uVar9);
  }
joined_r0x000109fd3c08:
  if (in_stack_00000008 != 0) {
    puVar6 = in_stack_00000000 + in_stack_00000008 * 0x14;
    do {
      in_x6 = *(ulong *)(*(long *)(in_stack_00000000 + 8) + 0x98);
      _objc_retain(in_x6);
      uStack_c0 = in_x6;
      FUN_109fd3e90(alStack_b0,&uStack_c0);
      _objc_release(uStack_c0);
      if (*(int *)(param_1[9] + 0x20) == 0) {
        FUN_109fccc60(param_1[9],*(undefined8 *)(in_stack_00000000 + 8));
      }
      if ((uStack_68 != 0) && (uStack_68 == uStack_60)) {
        func_0x00010c0ca0c0(*(undefined8 *)(param_1[0xb] + 0x40));
        if (uStack_68 != 0) {
          in_x6 = 0;
          do {
            _objc_release(plStack_70[in_x6]);
            in_x6 = in_x6 + 1;
          } while (in_x6 < uStack_68);
        }
        uStack_68 = 0;
      }
      in_stack_00000000 = in_stack_00000000 + 0x14;
    } while (in_stack_00000000 != puVar6);
  }
  if (uStack_68 != 0) {
    func_0x00010c0ca0c0(*(undefined8 *)(param_1[0xb] + 0x40));
    if (uStack_68 != 0) {
      in_x6 = 0;
      do {
        _objc_release(plStack_70[in_x6]);
        in_x6 = in_x6 + 1;
      } while (in_x6 < uStack_68);
    }
    uStack_68 = 0;
  }
  if (!bVar2) {
    func_0x00010c0ca0e0(*(undefined8 *)(param_1[0xb] + 0x40));
  }
  plVar3 = alStack_b0;
  func_0x000109fd3e58();
  plStack_d8 = plVar3;
LAB_109fd3d0c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x000109fd3e58(alStack_b0);
  plVar3 = plStack_d8;
  __Unwind_Resume();
  pcStack_c8 = FUN_109fd3d9c;
  uStack_e0 = in_x6;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_109fd4c58(plVar3[0xb]);
  *(undefined4 *)(plVar3[7] + 0x94) = 0;
  lVar4 = plVar3[10];
  plVar3[10] = 0;
  _objc_release(lVar4);
  plVar3[0x13] = 0;
  plVar3[0x18] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x22] = 0;
  plStack_f0 = plVar3 + 0x23;
  uStack_e8 = 0;
  func_0x000109fded98(&plStack_f0,4);
  *(undefined4 *)(plVar3 + 0x24) = 0xffffffff;
  return;
}



/* Entry: 109fd3d9c; end: 109fd3dd7;  */

void FUN_109fd3d9c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined4 uStack_28;
  
  FUN_109fd4c58(*(undefined8 *)(param_1 + 0x58));
  *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x94) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  lStack_30 = param_1 + 0x118;
  uStack_28 = 0;
  func_0x000109fded98(&lStack_30,4);
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  return;
}



/* Entry: 109fd3dd8; end: 109fd3ddb;  */

long FUN_109fd3dd8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x50));
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fd3ddc; end: 109fd3def;  */

void FUN_109fd3ddc(void)

{
  func_0x000109fd2ddc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fd3df0; end: 109fd3df7;  */

long FUN_109fd3df0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + -0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + -0x28;
}



/* Entry: 109fd3df8; end: 109fd3e0f;  */

void FUN_109fd3df8(long param_1)

{
  func_0x000109fd2ddc(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fd3e10; end: 109fd3e8f;  */

void FUN_109fd3e10(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar1 = 0;
    do {
      _objc_release(*(undefined8 *)(*(long *)(param_1 + 0x40) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ulong *)(param_1 + 0x48));
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 109fd3e90; end: 109fd3fbb;  */

undefined8 * FUN_109fd3e90(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  
  uVar10 = param_1[9];
  if (uVar10 == param_1[10]) {
    uVar11 = uVar10 * 2;
    if (uVar11 < 9) {
      uVar11 = 8;
    }
    if (uVar11 <= uVar10) {
      uVar11 = uVar10 + 1;
    }
    if (uVar11 >> 0x3d != 0) {
      puVar4 = (undefined8 *)0x8;
      ___cxa_allocate_exception();
      __ZNSt9bad_allocC1Ev();
      puVar7 = PTR___ZTISt9bad_alloc_110346a68;
      puVar8 = (uint *)PTR___ZNSt9bad_allocD1Ev_110346998;
      ___cxa_throw();
      puVar3 = puVar4;
      FUN_109fc8ec0();
      *puVar3 = &PTR_DAT_110b98ae8;
      puVar14 = puVar3 + 0x18;
      *puVar14 = 0;
      puVar3[0x17] = 0;
      __ZNSt3__17promiseIvEC1Ev(puVar3 + 0x19);
      puVar3 = puVar4 + 0x1b;
      *puVar3 = 0;
      puVar4[0x1a] = puVar7 + 0x810;
      puVar4[0x1c] = 0;
      lVar2 = *(long *)(puVar8 + 4);
      func_0x000109fe3fa0(lVar2);
      uVar15 = *(undefined8 *)(lVar2 + 0x108);
      _objc_retain(uVar15);
      uVar12 = *puVar3;
      *puVar3 = uVar15;
      _objc_release(uVar12);
      puVar5 = PTR__OBJC_CLASS___MTLComputePipelineDescriptor_1126de038;
      _objc_alloc_init(PTR__OBJC_CLASS___MTLComputePipelineDescriptor_1126de038);
      func_0x00010c180680();
      if (*(long *)(puVar8 + 0xc) != 0) {
        FUN_109fdf6a0(*(long *)(puVar8 + 0xc),puVar8,puVar3);
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a100(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c170200(puVar5);
        _objc_release(puVar6);
      }
      uVar1 = *puVar8;
      puStack_b0 = puVar4;
      __ZNSt3__17promiseIvE10get_futureEv(&uStack_c0,puVar4 + 0x19);
      uVar12 = uStack_c0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      puStack_a8 = (undefined *)*puVar14;
      *puVar14 = uVar12;
      __ZNSt3__113shared_futureIvED1Ev(&puStack_a8);
      __ZNSt3__113shared_futureIvED1Ev(&uStack_b8);
      __ZNSt3__16futureIvED1Ev(&uStack_c0);
      uVar12 = *(undefined8 *)(puVar7 + 0x8d8);
      if ((uVar1 & 1) == 0) {
        func_0x00010c0d8780();
        ppuVar16 = (undefined **)0x0;
        _objc_retain(0);
        _objc_retain(0);
        uVar15 = puVar4[0x1c];
        puVar4[0x1c] = uVar12;
        _objc_release(uVar15);
        FUN_109fd425c(&puStack_b0,puVar4[0x1c],0,0);
        _objc_release(0);
      }
      else {
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc6000000;
        pcStack_98 = FUN_109fd4640;
        puStack_90 = &UNK_110b98b38;
        ppuVar16 = &puStack_a8;
        puStack_88 = puVar4;
        _objc_retainBlock(ppuVar16);
        func_0x00010c0d8760(uVar12);
      }
      _objc_release(ppuVar16);
      _objc_release(puVar5);
      return puVar4;
    }
    lVar2 = uVar11 << 3;
    __ZnwmSt11align_val_t(lVar2,8);
    lVar9 = param_1[9];
    uVar12 = *param_2;
    *param_2 = 0;
    *(undefined8 *)(lVar2 + lVar9 * 8) = uVar12;
    uVar10 = 0;
    if (param_1[9] != 0) {
      uVar10 = 0;
      do {
        uVar12 = *(undefined8 *)(param_1[8] + uVar10 * 8);
        *(undefined8 *)(param_1[8] + uVar10 * 8) = 0;
        uVar13 = param_1[9];
        *(undefined8 *)(lVar2 + uVar10 * 8) = uVar12;
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar13);
      if (uVar13 == 0) {
        uVar10 = 0;
      }
      else {
        uVar13 = 0;
        do {
          _objc_release(*(undefined8 *)(param_1[8] + uVar13 * 8));
          uVar13 = uVar13 + 1;
          uVar10 = param_1[9];
        } while (uVar13 < uVar10);
      }
    }
    puVar3 = (undefined8 *)param_1[8];
    if (puVar3 != param_1) {
      __ZdlPvSt11align_val_t(puVar3,8);
      uVar10 = param_1[9];
    }
    param_1[8] = lVar2;
    param_1[10] = uVar11;
  }
  else {
    lVar2 = param_1[8];
    uVar12 = *param_2;
    *param_2 = 0;
    *(undefined8 *)(lVar2 + uVar10 * 8) = uVar12;
    uVar10 = param_1[9];
    puVar3 = param_1;
  }
  param_1[9] = uVar10 + 1;
  return puVar3;
}



/* Entry: 109fd3fbc; end: 109fd425b;  */

undefined8 * FUN_109fd3fbc(undefined8 *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  
  puVar2 = param_1;
  FUN_109fc8ec0();
  *puVar2 = &PTR_DAT_110b98ae8;
  puVar6 = puVar2 + 0x18;
  *puVar6 = 0;
  puVar2[0x17] = 0;
  __ZNSt3__17promiseIvEC1Ev(puVar2 + 0x19);
  puVar2 = param_1 + 0x1b;
  *puVar2 = 0;
  param_1[0x1a] = param_2 + 0x810;
  param_1[0x1c] = 0;
  lVar7 = *(long *)(param_3 + 4);
  func_0x000109fe3fa0(lVar7);
  uVar8 = *(undefined8 *)(lVar7 + 0x108);
  _objc_retain(uVar8);
  uVar3 = *puVar2;
  *puVar2 = uVar8;
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___MTLComputePipelineDescriptor_1126de038;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLComputePipelineDescriptor_1126de038);
  func_0x00010c180680();
  if (*(long *)(param_3 + 0xc) != 0) {
    FUN_109fdf6a0(*(long *)(param_3 + 0xc),param_3,puVar2);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c170200(puVar4);
    _objc_release(puVar5);
  }
  uVar1 = *param_3;
  puStack_80 = param_1;
  __ZNSt3__17promiseIvE10get_futureEv(&uStack_90,param_1 + 0x19);
  uVar3 = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_78 = (undefined *)*puVar6;
  *puVar6 = uVar3;
  __ZNSt3__113shared_futureIvED1Ev(&puStack_78);
  __ZNSt3__113shared_futureIvED1Ev(&uStack_88);
  __ZNSt3__16futureIvED1Ev(&uStack_90);
  uVar3 = *(undefined8 *)(param_2 + 0x8d8);
  if ((uVar1 & 1) == 0) {
    func_0x00010c0d8780();
    ppuVar9 = (undefined **)0x0;
    _objc_retain(0);
    _objc_retain(0);
    uVar8 = param_1[0x1c];
    param_1[0x1c] = uVar3;
    _objc_release(uVar8);
    FUN_109fd425c(&puStack_80,param_1[0x1c],0,0);
    _objc_release(0);
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc6000000;
    pcStack_68 = FUN_109fd4640;
    puStack_60 = &UNK_110b98b38;
    ppuVar9 = &puStack_78;
    puStack_58 = param_1;
    _objc_retainBlock(ppuVar9);
    func_0x00010c0d8760(uVar3);
  }
  _objc_release(ppuVar9);
  _objc_release(puVar4);
  return param_1;
}



/* Entry: 109fd425c; end: 109fd4463;  */

void FUN_109fd425c(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 auStack_58 [3];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = *param_1;
  if ((param_2 != 0) && (param_4 == 0)) {
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(lVar4 + 0xe0);
    *(long *)(lVar4 + 0xe0) = param_2;
    _objc_release(uVar3);
    FUN_109fe6ff0(auStack_58,param_3,*(undefined8 *)(lVar4 + 0x30));
    func_0x000109249d98(lVar4 + 0x98,auStack_58);
    ppuStack_70 = (undefined8 **)auStack_58;
    func_0x00010922dc0c(&ppuStack_70);
    __ZNSt3__17promiseIvE9set_valueEv(lVar4 + 200);
    _objc_release(0);
    _objc_release(param_3);
    _objc_release(param_2);
    return;
  }
  func_0x000107c31940(auStack_58,&UNK_10f62f8fa);
  if (param_4 != 0) {
    func_0x00010bf6e340(param_4);
    _objc_retainAutoreleasedReturnValue();
    FUN_109fe5184(&ppuStack_70);
    pppuVar1 = (undefined8 ***)ppuStack_70;
    if (-1 < (char)bStack_59) {
      uStack_68 = (ulong)bStack_59;
      pppuVar1 = &ppuStack_70;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_58,pppuVar1,uStack_68);
    if ((char)bStack_59 < '\0') {
      __ZdlPv(ppuStack_70);
    }
    _objc_release(param_4);
  }
  FUN_109fd4658(auStack_58);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109fd4398);
  (*pcVar2)();
}



/* Entry: 109fd4464; end: 109fd4583;  */

undefined8 *
FUN_109fd4464(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = param_1;
  FUN_109fc8ec0();
  *puVar1 = &PTR_DAT_110b98ae8;
  puVar2 = puVar1 + 0x18;
  *puVar2 = 0;
  puVar1[0x17] = 0;
  __ZNSt3__17promiseIvEC1Ev(puVar1 + 0x19);
  param_1[0x1a] = param_2 + 0x810;
  uVar3 = *param_5;
  _objc_retain(uVar3);
  param_1[0x1b] = uVar3;
  uVar3 = *param_6;
  _objc_retain(uVar3);
  param_1[0x1c] = uVar3;
  FUN_109fd46a8(param_1 + 0x13,param_4);
  __ZNSt3__17promiseIvE10get_futureEv(&uStack_58,param_1 + 0x19);
  uVar3 = uStack_58;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = *puVar2;
  *puVar2 = uVar3;
  __ZNSt3__113shared_futureIvED1Ev(&uStack_48);
  __ZNSt3__113shared_futureIvED1Ev(&uStack_50);
  __ZNSt3__16futureIvED1Ev(&uStack_58);
  __ZNSt3__17promiseIvE9set_valueEv(param_1 + 0x19);
  return param_1;
}



/* Entry: 109fd4584; end: 109fd4623;  */

void FUN_109fd4584(long param_1)

{
  long lStack_38;
  undefined8 **ppuStack_30;
  long *plStack_28;
  
  lStack_38 = param_1;
  if (*(long *)(param_1 + 0xb8) != -1) {
    plStack_28 = &lStack_38;
    ppuStack_30 = &plStack_28;
    __ZNSt3__111__call_onceERVmPvPFvS2_E((long *)(param_1 + 0xb8),&ppuStack_30,FUN_109fd47a0);
  }
  if (*(long *)(param_1 + 0xe0) == 0) {
    FUN_109fd19d0(*(undefined8 *)(param_1 + 0xd0),6,0x800,&UNK_10f62f875,0x33);
  }
  return;
}



/* Entry: 109fd4624; end: 109fd462b;  */

void FUN_109fd4624(void)

{
  return;
}



/* Entry: 109fd462c; end: 109fd463f;  */

void FUN_109fd462c(void)

{
  FUN_109fd474c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109fd4640; end: 109fd4657;  */

void FUN_109fd4640(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 auStack_58 [3];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + 0x20);
  if ((param_2 != 0) && (param_4 == 0)) {
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(lVar4 + 0xe0);
    *(long *)(lVar4 + 0xe0) = param_2;
    _objc_release(uVar3);
    FUN_109fe6ff0(auStack_58,param_3,*(undefined8 *)(lVar4 + 0x30));
    func_0x000109249d98(lVar4 + 0x98,auStack_58);
    ppuStack_70 = (undefined8 **)auStack_58;
    func_0x00010922dc0c(&ppuStack_70);
    __ZNSt3__17promiseIvE9set_valueEv(lVar4 + 200);
    _objc_release(0);
    _objc_release(param_3);
    _objc_release(param_2);
    return;
  }
  func_0x000107c31940(auStack_58,&UNK_10f62f8fa);
  if (param_4 != 0) {
    func_0x00010bf6e340(param_4);
    _objc_retainAutoreleasedReturnValue();
    FUN_109fe5184(&ppuStack_70);
    pppuVar1 = (undefined8 ***)ppuStack_70;
    if (-1 < (char)bStack_59) {
      uStack_68 = (ulong)bStack_59;
      pppuVar1 = &ppuStack_70;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_58,pppuVar1,uStack_68);
    if ((char)bStack_59 < '\0') {
      __ZdlPv(ppuStack_70);
    }
    _objc_release(param_4);
  }
  FUN_109fd4658(auStack_58);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109fd4398);
  (*pcVar2)();
}



/* Entry: 109fd4658; end: 109fd46a7;  */

/* WARNING: Possible PIC construction at 0x000109241770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001092417e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109241774) */
/* WARNING: Removing unreachable block (ram,0x0001092417e4) */

undefined ** FUN_109fd4658(void)

{
  undefined **ppuVar1;
  char cVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *unaff_x23;
  long lVar12;
  long lVar13;
  undefined8 ****ppppuVar14;
  undefined *puVar15;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 **ppuStack_30;
  code *pcStack_28;
  
  ppuVar6 = (undefined **)0x10;
  ___cxa_allocate_exception();
  func_0x00010924a484();
  ppuVar10 = &PTR_DAT_110ae4668;
  ppuVar7 = ppuVar6;
  ___cxa_throw(ppuVar6,&PTR_DAT_110ae4668,&DAT_109243c68);
  ___cxa_free_exception(ppuVar6);
  __Unwind_Resume();
  pcStack_28 = FUN_109fd46a8;
  cVar2 = *(char *)(ppuVar7 + 3);
  ppuVar6 = ppuVar7;
  ppuStack_30 = (undefined8 **)&stack0xfffffffffffffff0;
  if (cVar2 == *(char *)(ppuVar10 + 3)) {
    if ((ppuVar7 != ppuVar10) && (cVar2 != '\0')) {
      ppuVar6 = (undefined **)*ppuVar10;
      ppuVar1 = (undefined **)ppuVar10[1];
      ppuVar8 = (undefined **)((long)ppuVar1 - (long)ppuVar6 >> 7);
      pppuVar3 = (undefined ***)&stack0xffffffffffffff90;
      ppppuVar14 = (undefined8 ****)&ppuStack_30;
      ppuVar10 = (undefined **)*ppuVar7;
      ppuVar5 = ppuVar1;
      if ((undefined **)((long)ppuVar7[2] - (long)ppuVar10 >> 7) < ppuVar8) {
        ppuVar4 = ppuVar7;
        ppuVar9 = ppuVar6;
        ppuVar11 = ppuVar8;
        func_0x00010923fd80();
        if ((ulong)ppuVar8 >> 0x39 == 0) {
          ppuVar9 = (undefined **)((long)ppuVar7[2] - (long)*ppuVar7 >> 6);
          if (ppuVar9 <= ppuVar8) {
            ppuVar9 = ppuVar8;
          }
          if (0x7fffffffffffff7f < (ulong)((long)ppuVar7[2] - (long)*ppuVar7)) {
            ppuVar9 = (undefined **)0x1ffffffffffffff;
          }
          puVar15 = &UNK_109241774;
          ppuVar4 = ppuVar7;
        }
        else {
          func_0x00010923fa98();
          ppuVar7[1] = unaff_x23;
          __Unwind_Resume();
          ppuVar7[1] = (undefined *)ppuVar10;
          puVar15 = &SUB_10924185c;
          __Unwind_Resume();
        }
        pppuVar3 = &ppuStack_90;
        ppuStack_90 = ppuVar1;
        ppuStack_88 = ppuVar7;
        pppuStack_80 = ppppuVar14;
        puStack_78 = puVar15;
        if ((ulong)ppuVar9 >> 0x39 == 0) {
          ppuVar10 = ppuVar4;
          func_0x000107c2ac00();
          *ppuVar4 = (undefined *)ppuVar10;
          ppuVar4[1] = (undefined *)ppuVar10;
          ppuVar4[2] = (undefined *)(ppuVar10 + (long)ppuVar9 * 0x10);
          return ppuVar10;
        }
        puVar15 = &UNK_109241894;
        func_0x00010923fa98();
        ppppuVar14 = &pppuStack_80;
      }
      else {
        ppuVar11 = (undefined **)ppuVar7[1];
        lVar13 = (long)ppuVar11 - (long)ppuVar10;
        if (ppuVar8 <= (undefined **)(lVar13 >> 7)) {
          ppuVar5 = ppuVar7;
          if (ppuVar6 != ppuVar1) {
            do {
              ppuVar5 = ppuVar10;
              func_0x000109241918(ppuVar10,ppuVar6);
              ppuVar6 = ppuVar6 + 0x10;
              ppuVar10 = ppuVar10 + 0x10;
            } while (ppuVar6 != ppuVar1);
            ppuVar11 = (undefined **)ppuVar7[1];
          }
          while (ppuVar11 != ppuVar10) {
            ppuVar11 = ppuVar11 + -0x10;
            ppuVar5 = ppuVar11;
            func_0x00010922dc7c(ppuVar11);
          }
          ppuVar7[1] = (undefined *)ppuVar10;
          return ppuVar5;
        }
        ppuVar8 = ppuVar6;
        lVar12 = lVar13;
        if (ppuVar11 != ppuVar10) {
          do {
            func_0x000109241918(ppuVar10,ppuVar8);
            ppuVar10 = ppuVar10 + 0x10;
            lVar12 = lVar12 + -0x80;
            ppuVar8 = ppuVar8 + 0x10;
          } while (lVar12 != 0);
          ppuVar11 = (undefined **)ppuVar7[1];
        }
        ppuVar9 = (undefined **)((long)ppuVar6 + lVar13);
        puVar15 = &UNK_1092417e4;
      }
      *(undefined ***)((long)pppuVar3 + -0x30) = ppuVar10;
      *(undefined ***)((long)pppuVar3 + -0x28) = ppuVar6;
      *(undefined ***)((long)pppuVar3 + -0x20) = ppuVar1;
      *(undefined ***)((long)pppuVar3 + -0x18) = ppuVar7;
      *(undefined8 *****)((long)pppuVar3 + -0x10) = ppppuVar14;
      *(undefined **)((long)pppuVar3 + -8) = puVar15;
      for (; ppuVar9 != ppuVar5; ppuVar9 = ppuVar9 + 0x10) {
        func_0x000107c2ac14(ppuVar11,ppuVar9);
        ppuVar11 = ppuVar11 + 0x10;
      }
      return ppuVar11;
    }
  }
  else if (cVar2 == '\0') {
    *ppuVar7 = (undefined *)0x0;
    ppuVar7[1] = (undefined *)0x0;
    ppuVar7[2] = (undefined *)0x0;
    func_0x00010924a188(ppuVar7,*ppuVar10,ppuVar10[1],(long)ppuVar10[1] - (long)*ppuVar10 >> 7);
    *(undefined1 *)(ppuVar7 + 3) = 1;
  }
  else {
    ppuVar6 = (undefined **)&stack0xffffffffffffffb8;
    func_0x00010922dc0c(ppuVar6);
    *(undefined1 *)(ppuVar7 + 3) = 0;
  }
  return ppuVar6;
}



/* Entry: 109fd46a8; end: 109fd474b;  */

/* WARNING: Possible PIC construction at 0x000109241770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001092417e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109241774) */
/* WARNING: Removing unreachable block (ram,0x0001092417e4) */

long * FUN_109fd46a8(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long unaff_x23;
  long lVar11;
  long lVar12;
  undefined8 ****ppppuVar13;
  undefined *puVar14;
  long *plStack_70;
  long *plStack_68;
  undefined8 ***pppuStack_60;
  undefined *puStack_58;
  
  cVar2 = (char)param_1[3];
  plVar9 = param_1;
  if (cVar2 == (char)param_2[3]) {
    if ((param_1 != param_2) && (cVar2 != '\0')) {
      plVar8 = (long *)*param_2;
      plVar1 = (long *)param_2[1];
      plVar6 = (long *)((long)plVar1 - (long)plVar8 >> 7);
      pplVar3 = (long **)&stack0xffffffffffffffb0;
      ppppuVar13 = (undefined8 ****)&stack0xfffffffffffffff0;
      plVar9 = (long *)*param_1;
      plVar5 = plVar1;
      if ((long *)(param_1[2] - (long)plVar9 >> 7) < plVar6) {
        plVar4 = param_1;
        plVar7 = plVar8;
        plVar10 = plVar6;
        func_0x00010923fd80();
        if ((ulong)plVar6 >> 0x39 == 0) {
          plVar7 = (long *)(param_1[2] - *param_1 >> 6);
          if (plVar7 <= plVar6) {
            plVar7 = plVar6;
          }
          if (0x7fffffffffffff7f < (ulong)(param_1[2] - *param_1)) {
            plVar7 = (long *)0x1ffffffffffffff;
          }
          puVar14 = &UNK_109241774;
          plVar4 = param_1;
        }
        else {
          func_0x00010923fa98();
          param_1[1] = unaff_x23;
          __Unwind_Resume();
          param_1[1] = (long)plVar9;
          puVar14 = &SUB_10924185c;
          __Unwind_Resume();
        }
        pplVar3 = &plStack_70;
        plStack_70 = plVar1;
        plStack_68 = param_1;
        pppuStack_60 = ppppuVar13;
        puStack_58 = puVar14;
        if ((ulong)plVar7 >> 0x39 == 0) {
          plVar9 = plVar4;
          func_0x000107c2ac00();
          *plVar4 = (long)plVar9;
          plVar4[1] = (long)plVar9;
          plVar4[2] = (long)(plVar9 + (long)plVar7 * 0x10);
          return plVar9;
        }
        puVar14 = &UNK_109241894;
        func_0x00010923fa98();
        ppppuVar13 = &pppuStack_60;
      }
      else {
        plVar10 = (long *)param_1[1];
        lVar12 = (long)plVar10 - (long)plVar9;
        if (plVar6 <= (long *)(lVar12 >> 7)) {
          plVar5 = param_1;
          if (plVar8 != plVar1) {
            do {
              plVar5 = plVar9;
              func_0x000109241918(plVar9,plVar8);
              plVar8 = plVar8 + 0x10;
              plVar9 = plVar9 + 0x10;
            } while (plVar8 != plVar1);
            plVar10 = (long *)param_1[1];
          }
          while (plVar10 != plVar9) {
            plVar10 = plVar10 + -0x10;
            plVar5 = plVar10;
            func_0x00010922dc7c(plVar10);
          }
          param_1[1] = (long)plVar9;
          return plVar5;
        }
        plVar6 = plVar8;
        lVar11 = lVar12;
        if (plVar10 != plVar9) {
          do {
            func_0x000109241918(plVar9,plVar6);
            plVar9 = plVar9 + 0x10;
            lVar11 = lVar11 + -0x80;
            plVar6 = plVar6 + 0x10;
          } while (lVar11 != 0);
          plVar10 = (long *)param_1[1];
        }
        plVar7 = (long *)((long)plVar8 + lVar12);
        puVar14 = &UNK_1092417e4;
      }
      *(long **)((long)pplVar3 + -0x30) = plVar9;
      *(long **)((long)pplVar3 + -0x28) = plVar8;
      *(long **)((long)pplVar3 + -0x20) = plVar1;
      *(long **)((long)pplVar3 + -0x18) = param_1;
      *(undefined8 *****)((long)pplVar3 + -0x10) = ppppuVar13;
      *(undefined **)((long)pplVar3 + -8) = puVar14;
      for (; plVar7 != plVar5; plVar7 = plVar7 + 0x10) {
        func_0x000107c2ac14(plVar10,plVar7);
        plVar10 = plVar10 + 0x10;
      }
      return plVar10;
    }
  }
  else if (cVar2 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    func_0x00010924a188(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 7);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    plVar9 = (long *)&stack0xffffffffffffffd8;
    func_0x00010922dc0c(plVar9);
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return plVar9;
}



/* Entry: 109fd474c; end: 109fd479f;  */

undefined8 * FUN_109fd474c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (param_1[0x18] != 0) {
    __ZNSt3__117__assoc_sub_state4waitEv();
  }
  _objc_release(param_1[0x1c]);
  _objc_release(param_1[0x1b]);
  __ZNSt3__17promiseIvED1Ev(param_1 + 0x19);
  __ZNSt3__113shared_futureIvED1Ev(param_1 + 0x18);
  *param_1 = &PTR_DAT_110b97a80;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    puStack_28 = param_1 + 0x13;
    func_0x00010922dc0c(&puStack_28);
  }
  func_0x00010922e088(param_1 + 0xc);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109fd47a0; end: 109fd47bb;  */

void FUN_109fd47a0(undefined8 *param_1)

{
  if (*(long *)(**(long **)*param_1 + 0xc0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__117__assoc_sub_state4copyEv_1103465d0)();
    return;
  }
  return;
}



/* Entry: 109fd47bc; end: 109fd4877;  */

void FUN_109fd47bc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x8f8);
  if (*(long *)(param_2 + 0x960) == 0) {
    FUN_109fd4ce4(param_1);
  }
  else {
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(param_2 + 0x940) + (*(ulong *)(param_2 + 0x958) >> 7) * 8) +
             (*(ulong *)(param_2 + 0x958) & 0x7f) * 0x20);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uVar2 = *puVar1;
    param_1[1] = puVar1[1];
    *param_1 = uVar2;
    uVar2 = puVar1[3];
    param_1[2] = puVar1[2];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    param_1[3] = uVar2;
    FUN_109fd5288(param_2 + 0x938);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x8f8);
  return;
}



/* Entry: 109fd4878; end: 109fd48fb;  */

undefined8 * FUN_109fd4878(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plStack_28;
  
  plVar3 = param_1 + 1;
  lVar1 = param_1[2];
  for (lVar2 = *plVar3; lVar2 != lVar1; lVar2 = lVar2 + 0x828) {
    *(undefined8 *)(lVar2 + 0x818) = 0;
  }
  param_1[4] = 0;
  FUN_109fd48fc(*param_1,plVar3);
  _objc_release(param_1[8]);
  _objc_release(param_1[7]);
  _objc_release(param_1[6]);
  _objc_release(param_1[5]);
  plStack_28 = plVar3;
  func_0x000109fd51e8(&plStack_28);
  return param_1;
}


