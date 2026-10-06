/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a1952c8; end: 10a1952d7;  */

void FUN_10a1952c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baa010;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1952d8; end: 10a1952f7;  */

void FUN_10a1952d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baa010;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1952f8; end: 10a195303;  */

void FUN_10a1952f8(long param_1)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_38;
  
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    iVar2 = *(int *)(*plVar1 + 0x734);
    if ((iVar2 != 1 && iVar2 != 6) && (plVar4 = *(long **)(param_1 + 0x1a8), plVar4 != (long *)0x0))
    {
      (**(code **)(*plVar4 + 0x30))(plVar4,param_1 + 0x1c8);
    }
    FUN_10a15f874(param_1 + 0x1e0);
    lVar5 = *(long *)(param_1 + 0x1f0);
    for (lVar6 = *(long *)(param_1 + 0x1f8); lVar6 != lVar5; lVar6 = lVar6 + -0x18) {
      func_0x00010a0ea9d8(lVar6 + -0x10);
    }
    *(long *)(param_1 + 0x1f8) = lVar5;
    lVar5 = param_1 + 0x4a0;
    lVar6 = -4;
    do {
      func_0x00010a180788(lVar5,0,0);
      lVar5 = lVar5 + 0x10;
      bVar3 = lVar6 != -1;
      lVar6 = lVar6 + 1;
    } while (bVar3);
    lVar5 = param_1 + 0x228;
    lVar6 = -2;
    do {
      FUN_10a180aa8(lVar5,0,0);
      lVar5 = lVar5 + 0x10;
      bVar3 = lVar6 != -1;
      lVar6 = lVar6 + 1;
    } while (bVar3);
  }
  if (*(char *)(param_1 + 0x567) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x550));
  }
  if (*(char *)(param_1 + 0x54f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x538));
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x4f8);
  lStack_38 = param_1 + 0x4e0;
  FUN_10a0426d8(&lStack_38);
  lVar5 = 0x4b8;
  do {
    func_0x00010a0ea980((long)plVar1 + lVar5);
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != 0x478);
  FUN_10a1807fc(param_1 + 0x300);
  func_0x00010a09ad20(param_1 + 0x2a8);
  FUN_10a0eb0cc(param_1 + 0x298);
  if (*(char *)(param_1 + 0x297) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x280));
  }
  if (*(char *)(param_1 + 0x27f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x268));
  }
  FUN_10a18089c(param_1 + 0x250);
  lVar5 = 0x220;
  do {
    func_0x00010a0eb17c((long)plVar1 + lVar5);
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != 0x200);
  do {
    func_0x00010a0eb124((long)plVar1 + lVar5);
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != 0x1e0);
  func_0x00010a18090c(param_1 + 0x1f0);
  func_0x00010a0ea9d8(param_1 + 0x1e0);
  if (*(char *)(param_1 + 0x1df) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x1c8));
  }
  FUN_10a09da04(param_1 + 0x1b8);
  FUN_10a09da04(param_1 + 0x1a8);
  func_0x00010a194b10(param_1 + 0x178);
  func_0x00010a194aac(param_1 + 0xc0);
  func_0x00010a194a48(param_1 + 0x98);
  func_0x00010a1949e4(param_1 + 0x70);
  func_0x00010a194980(param_1 + 0x48);
  func_0x00010a09dbbc(plVar1);
  return;
}



/* Entry: 10a195304; end: 10a1953ef;  */

void FUN_10a195304(long *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x6b0;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110baa488;
  puVar1 = puVar5 + 3;
  if (param_3 != (long *)0x0) {
    plVar7 = param_3 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_50 = param_2;
  plStack_48 = param_3;
  FUN_10a16b914(puVar1,&uStack_50);
  plVar7 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar5;
  if ((puVar5 + 4 != (long *)0x0) &&
     ((lVar6 = puVar5[5], lVar6 == 0 || (*(long *)(lVar6 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar2 = plVar7 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar6 = puVar5[5];
    }
    puVar5[4] = puVar1;
    puVar5[5] = plVar7;
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a1953f0; end: 10a1953ff;  */

void FUN_10a1953f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baa488;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a195400; end: 10a19541f;  */

void FUN_10a195400(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baa488;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a195420; end: 10a19542b;  */

long FUN_10a195420(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lVar1 = param_1 + 0x18;
  lVar3 = 0;
  do {
    lVar2 = lVar1 + lVar3;
    func_0x00010a0ec3c8(lVar2 + 0x688);
    if (*(long *)(lVar2 + 0x668) != 0) {
      *(long *)(lVar2 + 0x670) = *(long *)(lVar2 + 0x668);
      __ZdlPv();
    }
    if (*(long *)(lVar2 + 0x650) != 0) {
      *(long *)(lVar1 + lVar3 + 0x658) = *(long *)(lVar2 + 0x650);
      __ZdlPv();
    }
    lVar2 = *(long *)(lVar1 + lVar3 + 0x638);
    if (lVar2 != 0) {
      *(long *)(lVar1 + lVar3 + 0x640) = lVar2;
      __ZdlPv();
    }
    lVar3 = lVar3 + -0x68;
  } while (lVar3 != -0x1a0);
  lVar3 = 0x4d0;
  do {
    FUN_10a186f74(lVar1 + lVar3);
    lVar3 = lVar3 + -0x28;
  } while (lVar3 != 0x430);
  lVar3 = 0x448;
  do {
    func_0x00010a0ec370(lVar1 + lVar3);
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0x408);
  FUN_10a18702c(param_1 + 0x418);
  if (*(long *)(param_1 + 0x400) != 0) {
    *(long *)(param_1 + 0x408) = *(long *)(param_1 + 0x400);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 1000) != 0) {
    *(long *)(param_1 + 0x3f0) = *(long *)(param_1 + 1000);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x3d0) != 0) {
    *(long *)(param_1 + 0x3d8) = *(long *)(param_1 + 0x3d0);
    __ZdlPv();
  }
  FUN_10a18702c(param_1 + 0x3a8);
  if (*(long *)(param_1 + 0x390) != 0) {
    *(long *)(param_1 + 0x398) = *(long *)(param_1 + 0x390);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x378) != 0) {
    *(long *)(param_1 + 0x380) = *(long *)(param_1 + 0x378);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x360) != 0) {
    *(long *)(param_1 + 0x368) = *(long *)(param_1 + 0x360);
    __ZdlPv();
  }
  FUN_10a18702c(param_1 + 0x338);
  if (*(long *)(param_1 + 800) != 0) {
    *(long *)(param_1 + 0x328) = *(long *)(param_1 + 800);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x308) != 0) {
    *(long *)(param_1 + 0x310) = *(long *)(param_1 + 0x308);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x2f0) != 0) {
    *(long *)(param_1 + 0x2f8) = *(long *)(param_1 + 0x2f0);
    __ZdlPv();
  }
  FUN_10a18702c(param_1 + 0x2c8);
  if (*(long *)(param_1 + 0x2b0) != 0) {
    *(long *)(param_1 + 0x2b8) = *(long *)(param_1 + 0x2b0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x298) != 0) {
    *(long *)(param_1 + 0x2a0) = *(long *)(param_1 + 0x298);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x280) != 0) {
    *(long *)(param_1 + 0x288) = *(long *)(param_1 + 0x280);
    __ZdlPv();
  }
  lStack_38 = param_1 + 600;
  FUN_10a0426d8(&lStack_38);
  FUN_10a195cf0(param_1 + 0x1e8);
  FUN_10a195c50(param_1 + 0x130);
  if (*(long *)(param_1 + 0x108) != 0) {
    *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x108);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xd8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(long *)(param_1 + 200) = *(long *)(param_1 + 0xc0);
    __ZdlPv();
  }
  func_0x00010a1943f8(param_1 + 0x30);
  if (*(long *)(param_1 + 0x28) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return lVar1;
}



/* Entry: 10a19542c; end: 10a195523;  */

void FUN_10a19542c(long param_1,undefined8 *param_2,undefined8 param_3)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a195524; end: 10a195583;  */

void FUN_10a195524(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x6b0;
  __Znwm();
  FUN_10a195584();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x20) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x28), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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
      lVar4 = *(long *)(lVar5 + 0x28);
    }
    *(long *)(lVar5 + 0x20) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x28) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a195584; end: 10a1955cb;  */

undefined8 * FUN_10a195584(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110baa488;
  FUN_10a1955cc(param_1 + 3);
  return param_1;
}



/* Entry: 10a1955cc; end: 10a19566f;  */

undefined8 FUN_10a1955cc(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
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
  FUN_10a16b914(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return param_1;
}



/* Entry: 10a195670; end: 10a195677;  */

void FUN_10a195670(void)

{
  return;
}



/* Entry: 10a195678; end: 10a1956ab;  */

void FUN_10a195678(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110ba9d78;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10a1956ac; end: 10a1956cf;  */

void FUN_10a1956ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110ba9d78;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a1956d0; end: 10a19570b;  */

long FUN_10a1956d0(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba9dd8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a19570c; end: 10a195717;  */

undefined ** FUN_10a19570c(void)

{
  return &PTR_DAT_110ba9dd8;
}



/* Entry: 10a195718; end: 10a19577b;  */

long FUN_10a195718(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 10a19577c; end: 10a195853;  */

void FUN_10a19577c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1[3] != 0) {
    func_0x000109243090(param_1,param_1[2]);
    param_1[2] = 0;
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    param_1[3] = 0;
  }
  lVar3 = *param_2;
  *param_2 = 0;
  lVar2 = *param_1;
  *param_1 = lVar3;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = lVar2;
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar2 + 8);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a195854; end: 10a195857;  */

void FUN_10a195854(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a195858; end: 10a19586b;  */

void FUN_10a195858(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a19586c; end: 10a19586f;  */

void FUN_10a19586c(void)

{
  return;
}



/* Entry: 10a195870; end: 10a1958a7;  */

undefined8 FUN_10a195870(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba9e38);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a1958a8; end: 10a1958ab;  */

void FUN_10a1958a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1958ac; end: 10a19591b;  */

void FUN_10a1958ac(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xa8;
  __Znwm();
  FUN_10a19591c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a19591c; end: 10a19596f;  */

undefined8 *
FUN_10a19591c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined1 *param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110baa4d8;
  FUN_10a1b2a84(param_1 + 3,*param_2,*param_3,*param_4);
  return param_1;
}



/* Entry: 10a195970; end: 10a19597f;  */

void FUN_10a195970(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baa4d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a195980; end: 10a19599f;  */

void FUN_10a195980(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baa4d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1959a0; end: 10a1959af;  */

void FUN_10a1959a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a1959a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a1959b0; end: 10a195a0f;  */

void FUN_10a1959b0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xa8;
  __Znwm();
  FUN_10a195a10();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a195a10; end: 10a195a5f;  */

undefined8 * FUN_10a195a10(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110baa4d8;
  FUN_10a1b2c04(param_1 + 3,*param_2,*param_3);
  return param_1;
}



/* Entry: 10a195a60; end: 10a195acf;  */

void FUN_10a195a60(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xa8;
  __Znwm();
  FUN_10a195ad0();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a195ad0; end: 10a195b23;  */

undefined8 *
FUN_10a195ad0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined1 *param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110baa4d8;
  FUN_10a1b2a84(param_1 + 3,*param_2,*param_3,*param_4);
  return param_1;
}



/* Entry: 10a195b24; end: 10a195b63;  */

void FUN_10a195b24(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_2 + 0x10);
  if (plVar4 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar4 + 0x38))();
  plVar4 = *(long **)(param_2 + 0x18);
  *(long *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a195b64; end: 10a195bbb;  */

long FUN_10a195b64(long param_1)

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



/* Entry: 10a195bbc; end: 10a195c13;  */

long FUN_10a195bbc(long param_1)

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



/* Entry: 10a195c14; end: 10a195c23;  */

void FUN_10a195c14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba9e78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a195c24; end: 10a195c43;  */

void FUN_10a195c24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba9e78;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a195c44; end: 10a195c4f;  */

long FUN_10a195c44(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x58);
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
  return param_1 + 0x50;
}



/* Entry: 10a195c50; end: 10a195cab;  */

long * FUN_10a195c50(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a195cac(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a195cac; end: 10a195cef;  */

void FUN_10a195cac(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a195cf0; end: 10a195d53;  */

long * FUN_10a195cf0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[3] != 0) {
      plVar1[4] = plVar1[3];
      __ZdlPv();
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a195d54; end: 10a1961db;  */

void FUN_10a195d54(undefined8 param_1,long param_2,int param_3,long param_4,undefined1 *param_5,
                  long param_6)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  
  uVar4 = (*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3) * 0x4fbcda3ac10c9715;
  if ((ulong)(long)param_3 <= uVar4 && uVar4 - (long)param_3 != 0) {
    if ((*(int *)(param_4 + 0x34) != 0) && (*(uint *)(param_4 + 0x14) < 0xc)) {
      lVar5 = *(long *)(param_2 + 0x10) + (long)param_3 * 0x1e8 +
              (ulong)*(uint *)(param_4 + 0x14) * 0x28;
      uVar2 = *(uint *)(lVar5 + 0x1c);
      if (uVar2 != 0) {
        uVar1 = *(uint *)(param_4 + 0x2c);
        if ((ulong)*(uint *)(param_4 + 0x28) + param_6 * (ulong)uVar1 <= (ulong)uVar2) {
          if (1 < *(uint *)(param_2 + 0x70)) goto LAB_10a195df4;
          if (param_6 != 0) {
            puVar6 = (undefined1 *)
                     (*(long *)(param_2 + (ulong)*(uint *)(param_2 + 0x70) * 0x20 + 0x30) +
                      (ulong)*(uint *)(param_4 + 0x28) + (ulong)*(uint *)(lVar5 + 0x20));
            do {
              *puVar6 = *param_5;
              puVar6 = puVar6 + uVar1;
              param_6 = param_6 + -1;
              param_5 = param_5 + 1;
            } while (param_6 != 0);
          }
        }
      }
    }
    return;
  }
LAB_10a195df4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a195df8);
  (*pcVar3)();
}



/* Entry: 10a1961dc; end: 10a196257;  */

void FUN_10a1961dc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a195cac(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a196258; end: 10a19679b;  */

void FUN_10a196258(long param_1,int param_2,long param_3,undefined4 *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  
  uVar4 = (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3) * 0x4fbcda3ac10c9715;
  if ((ulong)(long)param_2 <= uVar4 && uVar4 - (long)param_2 != 0) {
    if ((*(int *)(param_3 + 0x34) != 0) && (*(uint *)(param_3 + 0x14) < 0xc)) {
      lVar5 = *(long *)(param_1 + 0x10) + (long)param_2 * 0x1e8 +
              (ulong)*(uint *)(param_3 + 0x14) * 0x28;
      uVar2 = *(uint *)(lVar5 + 0x1c);
      if (uVar2 != 0) {
        uVar1 = *(uint *)(param_3 + 0x2c);
        if ((ulong)*(uint *)(param_3 + 0x28) + param_5 * (ulong)uVar1 <= (ulong)uVar2) {
          if (1 < *(uint *)(param_1 + 0x70)) goto LAB_10a1962f8;
          if (param_5 != 0) {
            puVar6 = (undefined4 *)
                     (*(long *)(param_1 + (ulong)*(uint *)(param_1 + 0x70) * 0x20 + 0x30) +
                      (ulong)*(uint *)(param_3 + 0x28) + (ulong)*(uint *)(lVar5 + 0x20));
            do {
              *puVar6 = *param_4;
              puVar6 = (undefined4 *)((long)puVar6 + (ulong)uVar1);
              param_5 = param_5 + -1;
              param_4 = param_4 + 1;
            } while (param_5 != 0);
          }
        }
      }
    }
    return;
  }
LAB_10a1962f8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1962fc);
  (*pcVar3)();
}



/* Entry: 10a19679c; end: 10a19686b;  */

long FUN_10a19679c(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = *(ulong *)(param_2 + 0x50);
    uVar6 = uVar4 - 1;
    if ((uVar4 & uVar6) == 0) {
      uVar7 = uVar6 & uVar5;
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar5 / uVar4;
        }
        uVar7 = uVar5 - uVar7 * uVar4;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)*plVar2;
      do {
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar3 = plVar2[1];
        if (uVar3 == uVar5) {
          uVar3 = (ulong)(plVar2 + 2);
          FUN_10a173500(uVar3,param_2);
          if ((uVar3 & 1) != 0) {
            return (long)plVar2;
          }
        }
        else {
          if ((uVar4 & uVar6) == 0) {
            uVar3 = uVar3 & uVar6;
          }
          else if (uVar4 <= uVar3) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar3 / uVar4;
            }
            uVar3 = uVar3 - uVar1 * uVar4;
          }
          if (uVar3 != uVar7) {
            return 0;
          }
        }
        plVar2 = (long *)*plVar2;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a19686c; end: 10a1968e3;  */

void FUN_10a19686c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a187b1c(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a1968e4; end: 10a19695b;  */

void FUN_10a1968e4(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a187ce4(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a19695c; end: 10a1969cb;  */

void FUN_10a19695c(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a187e3c(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a1969cc; end: 10a196a13;  */

void FUN_10a1969cc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a186fd0(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a196a14; end: 10a196a17;  */

void FUN_10a196a14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a196a18; end: 10a196a2b;  */

void FUN_10a196a18(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a196a2c; end: 10a196a2f;  */

void FUN_10a196a2c(void)

{
  return;
}



/* Entry: 10a196a30; end: 10a196a67;  */

undefined8 FUN_10a196a30(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba9f08);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a196a68; end: 10a196a6b;  */

void FUN_10a196a68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a196a6c; end: 10a196adf;  */

undefined8 * FUN_10a196a6c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_DAT_110ae7638;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a196ae0; end: 10a196b37;  */

long FUN_10a196ae0(long param_1)

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



/* Entry: 10a196b38; end: 10a196b5f;  */

void FUN_10a196b38(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a196b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a196b60; end: 10a196bd3;  */

long FUN_10a196b60(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  
  pbVar1 = (byte *)(param_1 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a196bd8(param_1 + 0x30);
  func_0x00010a196c80(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x60) = 0;
  func_0x00010a196cdc(param_1 + 8);
  return param_1;
}



/* Entry: 10a196bd4; end: 10a196bd7;  */

undefined8 * FUN_10a196bd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba9f28;
  FUN_10a196bd8(param_1 + 5);
  func_0x00010a196c80(param_1 + 2);
  FUN_10a196d48(param_1 + 5);
  func_0x00010a196c80(param_1 + 2);
  return param_1;
}



/* Entry: 10a196bd8; end: 10a196d2b;  */

void FUN_10a196bd8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00010a196c2c(param_1,param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10a196d2c; end: 10a196d3f;  */

void FUN_10a196d2c(void)

{
  func_0x00010a196cdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a196d40; end: 10a196d47;  */

void FUN_10a196d40(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a196d48; end: 10a196dd7;  */

long * FUN_10a196d48(long *param_1)

{
  long lVar1;
  
  func_0x00010a196c2c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a196dd8; end: 10a196de7;  */

void FUN_10a196dd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba9fb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a196de8; end: 10a196e07;  */

void FUN_10a196de8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba9fb0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a196e08; end: 10a196e13;  */

undefined8 ** FUN_10a196e08(long param_1,undefined8 param_2,int param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  long *plStack_1a0;
  long lStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  code *pcStack_178;
  code *pcStack_170;
  long lStack_168;
  undefined8 *apuStack_160 [7];
  code *pcStack_128;
  long *plStack_120;
  undefined8 *apuStack_118 [8];
  long lStack_d8;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 **ppuStack_68;
  long lStack_38;
  
  ppuVar6 = (undefined8 **)(param_1 + 0x18);
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = (code *)(param_1 + 0x20);
  if (*(long *)pcVar10 != 0) {
    pcStack_78 = FUN_10abd9478;
    ppuStack_70 = &PTR_FUN_110c532d8;
    param_3 = 0;
    ppuStack_68 = ppuVar6;
    FUN_10ab9d2b8(ppuVar6,&pcStack_78);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    (**(code **)(**(long **)(param_1 + 0x28) + 0x38))(&pcStack_78);
    FUN_109d1a244(&pcStack_78);
    FUN_10a09b344(&pcStack_78);
    if (pcStack_78 != (code *)0x0) {
      pcVar4 = pcStack_78 + 8;
      do {
        uVar8 = *(ulong *)pcVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
        if (bVar3) {
          *(ulong *)pcVar4 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *(ulong *)pcVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
          if (bVar3) {
            *(ulong *)pcVar4 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*(long *)pcStack_78 + 8))();
        }
      }
    }
  }
  pcVar4 = *(code **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (pcVar4 != (code *)0x0) {
    (**(code **)(*(long *)pcVar4 + 0x10))();
  }
  plVar7 = *(long **)pcVar10;
  *(long *)pcVar10 = 0;
  if (plVar7 != (long *)0x0) {
    FUN_10a31ed38();
    pcVar4 = pcVar10;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  if ((int)plVar7 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
    if (bVar3) {
      *(int *)pcVar4 = *(int *)pcVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lStack_168 = *plVar7;
  pcStack_170 = pcVar4;
  (**(code **)(plVar7[1] + 0x10))(apuStack_160);
  puVar9 = *(undefined8 **)(pcVar4 + 0x10);
  if (param_3 == 0) {
    plVar7 = (long *)puVar9[2];
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x58;
      __Znwm();
      *plVar7 = (long)pcStack_170;
      plVar7[1] = lStack_168;
      (*(code *)apuStack_160[0][2])(plVar7 + 2,apuStack_160);
      plVar7[10] = 0x10abd9574;
      pcStack_128 = FUN_10abd9504;
      plStack_120 = plVar7;
      apuStack_118[0] = puVar9;
      (**(code **)*puVar9)(puVar9,&pcStack_128);
    }
    else {
      plStack_190 = (long *)0x0;
      (**(code **)(*plVar7 + 0x28))(plVar7,0,&plStack_190);
      if (plStack_190 != (long *)0x0) {
        func_0x0001092af97c(&plStack_190);
        goto LAB_10ab9d7e8;
      }
      plVar5 = (long *)0x60;
      __Znwm();
      *plVar5 = (long)pcStack_170;
      plVar5[1] = lStack_168;
      (*(code *)apuStack_160[0][2])(plVar5 + 2,apuStack_160);
      plVar5[10] = (long)FUN_10abd9540;
      plVar5[0xb] = (long)plVar7;
      pcStack_128 = FUN_10abd94d4;
      plStack_120 = plVar5;
      apuStack_118[0] = puVar9;
      (**(code **)*puVar9)(puVar9,&pcStack_128);
      __ZNSt13exception_ptrD1Ev(&plStack_190);
    }
    plStack_190 = (long *)0x0;
    __ZNSt13exception_ptrD1Ev(&plStack_190);
LAB_10ab9d78c:
    ppuVar6 = apuStack_160;
    (*(code *)*apuStack_160[0])(ppuVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return ppuVar6;
    }
    ___stack_chk_fail();
  }
  else {
    plVar7 = (long *)puVar9[2];
    plStack_188 = (long *)0x0;
    plStack_180 = (long *)0x0;
    if (plVar7 == (long *)0x0) {
      pcStack_128 = pcStack_170;
      plStack_120 = (long *)lStack_168;
      (*(code *)apuStack_160[0][2])(apuStack_118,apuStack_160);
      plVar7 = (long *)0x100;
      __Znwm();
      *(undefined2 *)(plVar7 + 3) = 4;
      plVar7[0x10] = 0;
      plVar7[0x11] = (long)(plVar7 + 3);
      *plVar7 = (long)&PTR_DAT_110c50950;
      plVar7[0x14] = (long)pcStack_128;
      plVar7[2] = 0;
      plVar7[1] = 0x200000006;
      plVar7[0xd] = 0;
      plVar7[0xc] = 0;
      plVar7[0xf] = 0;
      plVar7[0xe] = 0;
      plVar7[9] = 0;
      plVar7[8] = 0;
      plVar7[0xb] = 0;
      plVar7[10] = 0;
      plVar7[5] = 0;
      plVar7[4] = 0;
      plVar7[7] = 0;
      plVar7[6] = 0;
      plVar7[0x12] = 0;
      *(undefined2 *)(plVar7 + 0x13) = 0;
      plVar7[0x15] = (long)plStack_120;
      (*(code *)apuStack_118[0][2])(plVar7 + 0x16,apuStack_118);
      *(undefined1 *)(plVar7 + 0x1e) = 1;
      plVar7[0x1f] = 0;
      if (plStack_188 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_188 + 1);
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
            (**(code **)(*plStack_188 + 8))();
          }
        }
      }
      plStack_188 = plVar7;
      if (plStack_180 != (long *)0x0) {
        func_0x0001092b4274(&plStack_180);
      }
      plStack_190 = plVar7 + 0x14;
      plStack_180 = plVar7;
      (*(code *)*apuStack_118[0])(apuStack_118);
      pcStack_178 = FUN_10abd0640;
LAB_10ab9d628:
      plVar7 = plStack_190;
      if (plStack_190[0xb] != 0) {
        func_0x0001092b4274();
      }
      plVar7[0xb] = (long)plStack_180;
      plStack_180 = (long *)0x0;
      pcStack_128 = pcStack_178;
      plStack_120 = plStack_190;
      apuStack_118[0] = puVar9;
      (**(code **)*puVar9)(puVar9,&pcStack_128);
      plStack_1a0 = plStack_188;
      plStack_188 = (long *)0x0;
      if (plStack_180 != (long *)0x0) {
        func_0x0001092b4274(&plStack_180);
        if (plStack_188 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_188 + 1);
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
              (**(code **)(*plStack_188 + 8))();
            }
          }
        }
      }
      FUN_109d1a244(&plStack_1a0);
      FUN_10a09b344(&plStack_1a0);
      if (plStack_1a0 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_1a0 + 1);
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
            (**(code **)(*plStack_1a0 + 8))();
          }
        }
      }
      goto LAB_10ab9d78c;
    }
    lStack_198 = 0;
    (**(code **)(*plVar7 + 0x28))(plVar7,0,&lStack_198);
    if (lStack_198 == 0) {
      pcStack_128 = pcStack_170;
      plStack_120 = (long *)lStack_168;
      (*(code *)apuStack_160[0][2])(apuStack_118,apuStack_160);
      plVar5 = (long *)0x108;
      __Znwm();
      *(undefined2 *)(plVar5 + 3) = 4;
      plVar5[0x10] = 0;
      plVar5[0x11] = (long)(plVar5 + 3);
      *plVar5 = (long)&PTR_FUN_110c50918;
      plVar5[0x14] = (long)pcStack_128;
      plVar5[2] = 0;
      plVar5[1] = 0x200000006;
      plVar5[0xd] = 0;
      plVar5[0xc] = 0;
      plVar5[0xf] = 0;
      plVar5[0xe] = 0;
      plVar5[9] = 0;
      plVar5[8] = 0;
      plVar5[0xb] = 0;
      plVar5[10] = 0;
      plVar5[5] = 0;
      plVar5[4] = 0;
      plVar5[7] = 0;
      plVar5[6] = 0;
      plVar5[0x12] = 0;
      *(undefined2 *)(plVar5 + 0x13) = 0;
      plVar5[0x15] = (long)plStack_120;
      (*(code *)apuStack_118[0][2])(plVar5 + 0x16,apuStack_118);
      *(undefined1 *)(plVar5 + 0x1e) = 1;
      plVar5[0x1f] = 0;
      plVar5[0x20] = (long)plVar7;
      if (plStack_188 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_188 + 1);
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
            (**(code **)(*plStack_188 + 8))();
          }
        }
      }
      plStack_188 = plVar5;
      if (plStack_180 != (long *)0x0) {
        func_0x0001092b4274(&plStack_180);
      }
      plStack_190 = plVar5 + 0x14;
      plStack_180 = plVar5;
      (*(code *)*apuStack_118[0])(apuStack_118);
      pcStack_178 = FUN_10abd0610;
      __ZNSt13exception_ptrD1Ev(&lStack_198);
      goto LAB_10ab9d628;
    }
  }
  func_0x0001092af97c(&lStack_198);
LAB_10ab9d7e8:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10ab9d7ec);
  (*pcVar10)();
}



/* Entry: 10a196e14; end: 10a196f17;  */

void FUN_10a196e14(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  func_0x000107c2b054(auStack_258,param_1);
  FUN_10a10bd84(appuStack_150,auStack_258);
  appuStack_150[0] = &PTR_FUN_110baa3e8;
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110baa3e8;
  ___cxa_throw(puVar2,&PTR_DAT_110baa3c0,FUN_10a196f18);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a196ee8);
  (*pcVar1)();
}



/* Entry: 10a196f18; end: 10a196f1b;  */

void FUN_10a196f18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a196f1c; end: 10a196f2f;  */

void FUN_10a196f1c(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a196f30; end: 10a196fff;  */

void FUN_10a196f30(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a10bd84(appuStack_150,param_1);
  appuStack_150[0] = &PTR_FUN_110baa3e8;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110baa3e8;
  ___cxa_throw(puVar2,&PTR_DAT_110baa3c0,FUN_10a196f18);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a196fe8);
  (*pcVar1)();
}



/* Entry: 10a197000; end: 10a1971d3;  */

char * FUN_10a197000(char *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined1 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  
  puVar8 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar14 = &PTR___tlv_bootstrap_11340d750;
    ppuVar10 = ppuVar14;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar11 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar10 & 1) == 0) {
      ppuVar10 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar10,0x100000000);
      (*(code *)puVar8)();
      *(undefined1 *)ppuVar14 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    puVar17 = (undefined8 *)ppuVar11[2];
    if (puVar17 != (undefined8 *)0x0) {
      lVar15 = puVar17[1];
      bVar7 = *(byte *)(lVar15 + 0x42) | *(byte *)(lVar15 + 0x43);
      if ((((bVar7 & 1) != 0) || ((*(byte *)(lVar15 + 0x3f) & 1) != 0)) ||
         (*(char *)(lVar15 + 0x40) == '\x01')) {
        uVar6 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar18 = cntvct_el0;
        if (uVar6 != 1000000000) {
          uVar4 = 0;
          if (uVar6 != 0) {
            uVar4 = uVar18 / uVar6;
          }
          uVar5 = 0;
          if (uVar6 != 0) {
            uVar5 = ((uVar18 - uVar4 * uVar6) * 1000000000) / uVar6;
          }
          uVar18 = uVar5 + uVar4 * 1000000000;
        }
        if (*(char *)(puVar17[1] + 0x40) == '\x01') {
          FUN_10a1971d4(*puVar17,*(undefined8 *)(param_1 + 8),uVar18);
        }
        lVar15 = lRam00000001137ea760;
        if ((bVar7 & 1) != 0) {
          uVar2 = *(undefined4 *)(param_1 + 4);
          uVar3 = *(undefined2 *)(param_1 + 2);
          puVar12 = puVar17;
          FUN_10a1333cc();
          if (puVar12 != (undefined8 *)0x0) {
            uVar16 = 6;
            if (lRam00000001137ea760 != lVar15) {
              uVar16 = 8;
            }
            lVar1 = 0;
            if (lRam00000001137ea760 != lVar15) {
              lVar1 = lVar15;
            }
            *puVar12 = &UNK_10f640aac;
            puVar12[1] = lVar1;
            puVar12[2] = uVar18;
            *(undefined4 *)(puVar12 + 3) = uVar2;
            *(undefined2 *)((long)puVar12 + 0x1c) = uVar3;
            *(undefined1 *)((long)puVar12 + 0x1e) = uVar16;
            if ((*(byte *)(puVar17 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10a1971d0);
              (*pcVar9)();
            }
            puVar17[0x18] = puVar17[0x18] + 1;
          }
        }
      }
      if (((*(char *)(puVar17[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
         (plVar13 = (long *)puVar17[0xb], plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,*(undefined8 *)(param_1 + 0x10));
      }
    }
  }
  return param_1;
}



/* Entry: 10a1971d4; end: 10a19723f;  */

void FUN_10a1971d4(long param_1,ulong param_2,ulong param_3)

{
  if (param_3 < param_2) {
    return;
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0xc80);
  FUN_10a15387c((double)(param_3 - param_2),param_1,param_1 + 0xc80,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0xc80);
  return;
}



/* Entry: 10a197240; end: 10a197297;  */

long FUN_10a197240(long param_1)

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



/* Entry: 10a197298; end: 10a19734b;  */

long * FUN_10a197298(long *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeC1Ev(param_1 + 1);
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = (long)&PTR_DAT_11088d7b0;
  lVar2 = param_2[1];
  lVar1 = *param_2;
  param_1[10] = param_2[2];
  param_1[9] = lVar2;
  param_1[8] = lVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  FUN_10a002370(param_1);
  return param_1;
}



/* Entry: 10a19734c; end: 10a1973bb;  */

void FUN_10a19734c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xa8;
  __Znwm();
  FUN_10a1973bc();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a1973bc; end: 10a19740f;  */

undefined8 *
FUN_10a1973bc(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined1 *param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110baa4d8;
  FUN_10a1b2a84(param_1 + 3,*param_2,*param_3,*param_4);
  return param_1;
}



/* Entry: 10a197410; end: 10a19746f;  */

undefined8 * FUN_10a197410(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110baa578;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a197470; end: 10a197473;  */

void FUN_10a197470(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a197474; end: 10a1974a7;  */

void FUN_10a197474(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1974a8; end: 10a1974df;  */

undefined8 FUN_10a1974a8(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110baa5c8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a1974e0; end: 10a1974e3;  */

void FUN_10a1974e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1974e4; end: 10a197557;  */

long * FUN_10a1974e4(long *param_1)

{
  long lVar1;
  
  func_0x00010a19751c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a197558; end: 10a19757f;  */

void FUN_10a197558(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10aba4e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a197580; end: 10a1975e3;  */

void FUN_10a197580(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a1975e8(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a1975e4; end: 10a1975e7;  */

undefined8 * FUN_10a1975e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baa2d8;
  FUN_10a197654(param_1 + 5);
  func_0x00010a1976fc(param_1 + 2);
  func_0x00010a197758(param_1 + 5);
  func_0x00010a1976fc(param_1 + 2);
  return param_1;
}



/* Entry: 10a1975e8; end: 10a197637;  */

undefined8 * FUN_10a1975e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baa2d8;
  FUN_10a197654(param_1 + 5);
  func_0x00010a1976fc(param_1 + 2);
  func_0x00010a197758(param_1 + 5);
  func_0x00010a1976fc(param_1 + 2);
  return param_1;
}



/* Entry: 10a197638; end: 10a19764b;  */

void FUN_10a197638(void)

{
  FUN_10a1975e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a19764c; end: 10a197653;  */

void FUN_10a19764c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a197654; end: 10a1977b7;  */

void FUN_10a197654(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00010a1976a8(param_1,param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10a1977b8; end: 10a1977c7;  */

void FUN_10a1977b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baa380;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a1977c8; end: 10a1977e7;  */

void FUN_10a1977c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110baa380;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1977e8; end: 10a1977f3;  */

long FUN_10a1977e8(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar1 = param_1 + 0x18;
  lVar6 = 0;
  do {
    lVar5 = *(long *)(lVar1 + lVar6 + 0x3278);
    if (lVar5 != 0) {
      *(long *)(lVar1 + lVar6 + 0x3280) = lVar5;
      __ZdlPv();
    }
    lVar6 = lVar6 + -0x30;
  } while (lVar6 != -0xc0);
  func_0x00010ad6287c(param_1 + 0x1d8,0);
  if (*(long *)(param_1 + 0x1d0) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar6 = *(long *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  if (lVar6 != 0) {
    __ZdaPv();
  }
  if (*(long *)(param_1 + 0x198) != 0) {
    *(long *)(param_1 + 0x1a0) = *(long *)(param_1 + 0x198);
    __ZdlPv();
  }
  lVar6 = 0;
  do {
    lVar5 = lVar1 + lVar6;
    if (*(long *)(lVar5 + 0x158) != 0) {
      *(long *)(lVar5 + 0x160) = *(long *)(lVar5 + 0x158);
      __ZdlPv();
    }
    if (*(long *)(lVar5 + 0x140) != 0) {
      *(long *)(lVar1 + lVar6 + 0x148) = *(long *)(lVar5 + 0x140);
      __ZdlPv();
    }
    lVar6 = lVar6 + -0x40;
  } while (lVar6 != -0x100);
  plVar7 = *(long **)(param_1 + 0x20);
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return lVar1;
}



/* Entry: 10a1977f4; end: 10a19781b;  */

void FUN_10a1977f4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10ad5dfcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a19781c; end: 10a1978af;  */

/* WARNING: Possible PIC construction at 0x00010a197848: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a19784c) */

undefined1  [16] FUN_10a19781c(undefined8 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  func_0x00010ae02f70(0,*param_1);
  auVar2._8_4_ = *param_2;
  auVar2._0_8_ = (lVar1 + 3U & 0xfffffffffffffffc) + 4;
  auVar2._12_4_ = 0;
  return auVar2;
}



/* Entry: 10a1978b0; end: 10a197913;  */

undefined8 * FUN_10a1978b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110bab0e8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a197914; end: 10a197917;  */

void FUN_10a197914(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a197918; end: 10a19792b;  */

void FUN_10a197918(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a19792c; end: 10a197943;  */

void FUN_10a19792c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a19793c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a197944; end: 10a19797b;  */

undefined8 FUN_10a197944(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bab138);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a19797c; end: 10a19797f;  */

void FUN_10a19797c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


