/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aaaccec; end: 10aaacffb;  */

undefined8 * FUN_10aaaccec(undefined8 *param_1)

{
  param_1[0x1c] = &PTR____cxa_pure_virtual_110c42bb8;
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aaacffc; end: 10aaad03b;  */

void FUN_10aaacffc(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10aaad03c; end: 10aaad077;  */

long FUN_10aaad03c(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c40cc0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aaad078; end: 10aaad08b;  */

void FUN_10aaad078(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaad08c; end: 10aaad0ab;  */

void FUN_10aaad08c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c40ce0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaad0ac; end: 10aaad0bb;  */

void FUN_10aaad0ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aaad0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aaad0bc; end: 10aaad113;  */

long FUN_10aaad0bc(long param_1)

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



/* Entry: 10aaad114; end: 10aaad277;  */

void FUN_10aaad114(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10aaad278; end: 10aaad587;  */

undefined8 * FUN_10aaad278(undefined8 *param_1)

{
  param_1[0x1c] = &PTR____cxa_pure_virtual_110ba1b68;
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aaad588; end: 10aaad5c7;  */

void FUN_10aaad588(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10aaad5c8; end: 10aaad603;  */

long FUN_10aaad5c8(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c40ee8);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aaad604; end: 10aaad617;  */

void FUN_10aaad604(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaad618; end: 10aaad637;  */

void FUN_10aaad618(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c40f08;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaad638; end: 10aaad647;  */

void FUN_10aaad638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aaad640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aaad648; end: 10aaad69f;  */

long FUN_10aaad648(long param_1)

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



/* Entry: 10aaad6a0; end: 10aaad803;  */

void FUN_10aaad6a0(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10aaad804; end: 10aaadb13;  */

undefined8 * FUN_10aaad804(undefined8 *param_1)

{
  param_1[0x1c] = &PTR____cxa_pure_virtual_110c3fec0;
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aaadb14; end: 10aaadb53;  */

void FUN_10aaadb14(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10aaadb54; end: 10aaadb8f;  */

long FUN_10aaadb54(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c41110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aaadb90; end: 10aaadba3;  */

void FUN_10aaadb90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaadba4; end: 10aaadbc3;  */

void FUN_10aaadba4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c41130;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaadbc4; end: 10aaadbd3;  */

void FUN_10aaadbc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aaadbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aaadbd4; end: 10aaadc2b;  */

long FUN_10aaadbd4(long param_1)

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



/* Entry: 10aaadc2c; end: 10aaadd8f;  */

void FUN_10aaadc2c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10aaadd90; end: 10aaae09f;  */

undefined8 * FUN_10aaadd90(undefined8 *param_1)

{
  param_1[0x1c] = &PTR____cxa_pure_virtual_110ba1b98;
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aaae0a0; end: 10aaae0df;  */

void FUN_10aaae0a0(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10aaae0e0; end: 10aaae11b;  */

long FUN_10aaae0e0(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c41338);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aaae11c; end: 10aaae12f;  */

void FUN_10aaae11c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaae130; end: 10aaae14f;  */

void FUN_10aaae130(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c41358;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaae150; end: 10aaae15f;  */

void FUN_10aaae150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aaae158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aaae160; end: 10aaae1b7;  */

long FUN_10aaae160(long param_1)

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



/* Entry: 10aaae1b8; end: 10aaae31b;  */

void FUN_10aaae1b8(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10aaae31c; end: 10aaae62b;  */

undefined8 * FUN_10aaae31c(undefined8 *param_1)

{
  param_1[0x1c] = &PTR____cxa_pure_virtual_110c42b70;
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aaae62c; end: 10aaae66b;  */

void FUN_10aaae62c(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10aaae66c; end: 10aaae6a7;  */

long FUN_10aaae66c(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c41560);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aaae6a8; end: 10aaae6bb;  */

void FUN_10aaae6a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaae6bc; end: 10aaae6db;  */

void FUN_10aaae6bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c41580;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaae6dc; end: 10aaae6eb;  */

void FUN_10aaae6dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aaae6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aaae6ec; end: 10aaae743;  */

long FUN_10aaae6ec(long param_1)

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



/* Entry: 10aaae744; end: 10aaae8a7;  */

void FUN_10aaae744(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10aaae8a8; end: 10aaaebb7;  */

undefined8 * FUN_10aaae8a8(undefined8 *param_1)

{
  param_1[0x1c] = &PTR____cxa_pure_virtual_110c42b70;
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aaaebb8; end: 10aaaebf7;  */

void FUN_10aaaebb8(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10aaaebf8; end: 10aaaec33;  */

long FUN_10aaaebf8(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c41788);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aaaec34; end: 10aaaec47;  */

void FUN_10aaaec34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaaec48; end: 10aaaec67;  */

void FUN_10aaaec48(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c417a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaaec68; end: 10aaaec77;  */

void FUN_10aaaec68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aaaec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aaaec78; end: 10aaaeccf;  */

long FUN_10aaaec78(long param_1)

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



/* Entry: 10aaaecd0; end: 10aaaee33;  */

void FUN_10aaaecd0(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10aaaee34; end: 10aaaf143;  */

undefined8 * FUN_10aaaee34(undefined8 *param_1)

{
  param_1[0x1c] = &PTR____cxa_pure_virtual_110c3fef0;
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aaaf144; end: 10aaaf183;  */

void FUN_10aaaf144(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10aaaf184; end: 10aaaf1bf;  */

long FUN_10aaaf184(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c419b0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aaaf1c0; end: 10aaaf1d3;  */

void FUN_10aaaf1c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaaf1d4; end: 10aaaf1f3;  */

void FUN_10aaaf1d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c419d0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aaaf1f4; end: 10aaaf203;  */

void FUN_10aaaf1f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aaaf1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aaaf204; end: 10aaaf25b;  */

long FUN_10aaaf204(long param_1)

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



/* Entry: 10aaaf25c; end: 10aaaf3c3;  */

void FUN_10aaaf25c(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68da25;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68da31;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_70 = 0;
  uStack_68 = 0;
  puStack_60 = &UNK_10f68da37;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaaf3c4(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68da38;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaaf3c4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68da43;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aaaf3c4();
  FUN_10a003ff4();
  return;
}



/* Entry: 10aaaf3c4; end: 10aaaf46b;  */

undefined8 * FUN_10aaaf3c4(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaaf46c);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10aaaf46c; end: 10aaaf5fb;  */

void FUN_10aaaf46c(undefined8 param_1)

{
  undefined1 uStack_89;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f68da4a;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x200000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010aaaf5a4(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f68da31;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 0;
  FUN_10aaaf5fc(param_1,&puStack_88,&uStack_89);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f68da38;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 1;
  FUN_10aaaf5fc(param_1,&puStack_88,&uStack_89);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f68da43;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_89 = 2;
  FUN_10aaaf5fc(param_1,&puStack_88,&uStack_89);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10aaaf5fc; end: 10aaaf653;  */

ulong FUN_10aaaf5fc(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10aade4c8(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10aaaf654; end: 10aaaf6e3;  */

void FUN_10aaaf654(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  byte bStack_28;
  
  plVar3 = param_2;
  (**(code **)(*param_1 + 0x1d8))(&uStack_38);
  if ((bStack_28 & 1) == 0) {
    FUN_10a108fd4(param_2);
  }
  else {
    plVar3 = (long *)(uStack_30 / 0xc);
    if (uStack_30 % 0xc == 0) {
      func_0x0001096b5198(param_3);
      if ((bStack_28 & 1) != 0) {
        _memcpy(*param_3,uStack_38,uStack_30);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aaaf6d4);
      (*pcVar2)();
    }
  }
  FUN_10a324f10();
  bVar1 = *(byte *)((long)param_2 + 0x27);
  if (*(byte *)((long)param_2 + 0x27) <= *(byte *)((long)plVar3 + 0x27)) {
    bVar1 = *(byte *)((long)plVar3 + 0x27);
  }
  *(byte *)((long)param_2 + 0x27) = bVar1;
  bVar1 = *(byte *)((long)param_2 + 0x26);
  if (*(byte *)((long)param_2 + 0x26) <= *(byte *)((long)plVar3 + 0x26)) {
    bVar1 = *(byte *)((long)plVar3 + 0x26);
  }
  *(byte *)((long)param_2 + 0x26) = bVar1;
  func_0x00010983ca2c();
  FUN_10aad3f38(param_2,param_2[1],*plVar3,plVar3[1],
                (plVar3[1] - *plVar3 >> 2) * -0x5555555555555555);
  if (*(char *)((long)plVar3 + 0x34) == '\x01') {
    lVar4 = plVar3[5];
    *(undefined8 *)((long)param_2 + 0x2d) = *(undefined8 *)((long)plVar3 + 0x2d);
    param_2[5] = lVar4;
  }
  if ((char)plVar3[4] == '\x01') {
    lVar4 = plVar3[3];
    *(char *)(param_2 + 4) = (char)plVar3[4];
    param_2[3] = lVar4;
  }
  *(byte *)((long)param_2 + 0x24) = *(byte *)((long)param_2 + 0x24) | *(byte *)((long)plVar3 + 0x24)
  ;
  *(byte *)((long)param_2 + 0x25) = *(byte *)((long)param_2 + 0x25) | *(byte *)((long)plVar3 + 0x25)
  ;
  return;
}



/* Entry: 10aaaf6e4; end: 10aaaf7d3;  */

void FUN_10aaaf6e4(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = *(byte *)((long)param_1 + 0x27);
  if (*(byte *)((long)param_1 + 0x27) <= *(byte *)((long)param_2 + 0x27)) {
    bVar1 = *(byte *)((long)param_2 + 0x27);
  }
  *(byte *)((long)param_1 + 0x27) = bVar1;
  bVar1 = *(byte *)((long)param_1 + 0x26);
  if (*(byte *)((long)param_1 + 0x26) <= *(byte *)((long)param_2 + 0x26)) {
    bVar1 = *(byte *)((long)param_2 + 0x26);
  }
  *(byte *)((long)param_1 + 0x26) = bVar1;
  func_0x00010983ca2c(param_1,(param_1[1] - *param_1 >> 2) * -0x5555555555555555 +
                              (param_2[1] - *param_2 >> 2) * -0x5555555555555555);
  FUN_10aad3f38(param_1,param_1[1],*param_2,param_2[1],
                (param_2[1] - *param_2 >> 2) * -0x5555555555555555);
  if (*(char *)((long)param_2 + 0x34) == '\x01') {
    lVar2 = param_2[5];
    *(undefined8 *)((long)param_1 + 0x2d) = *(undefined8 *)((long)param_2 + 0x2d);
    param_1[5] = lVar2;
  }
  if ((char)param_2[4] == '\x01') {
    lVar2 = param_2[3];
    *(char *)(param_1 + 4) = (char)param_2[4];
    param_1[3] = lVar2;
  }
  *(byte *)((long)param_1 + 0x24) =
       *(byte *)((long)param_1 + 0x24) | *(byte *)((long)param_2 + 0x24);
  *(byte *)((long)param_1 + 0x25) =
       *(byte *)((long)param_1 + 0x25) | *(byte *)((long)param_2 + 0x25);
  return;
}



/* Entry: 10aaaf7d4; end: 10aaaf8ff;  */

void FUN_10aaaf7d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,undefined8 param_6,undefined4 *param_7)

{
  long *plVar1;
  
  (**(code **)(*param_5 + 0x210))();
  plVar1 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c447d8);
  if ((int)plVar1 != 0) {
    (**(code **)(*param_5 + 0x188))(param_5,&PTR_DAT_110c447d8);
    *param_7 = param_1;
    param_7[1] = param_2;
    param_7[2] = param_3;
    param_7[3] = param_4;
  }
  (**(code **)(*param_5 + 0xe8))(param_5,&PTR_DAT_110c447f8);
  param_7[4] = param_1;
  param_7[5] = param_2;
  param_7[6] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010aaaf864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_5 + 0x220))(param_5);
  return;
}



/* Entry: 10aaaf900; end: 10aaafb27;  */

void FUN_10aaaf900(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined4 uVar6;
  long extraout_x8;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x22;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dStack_6a0;
  double dStack_698;
  double dStack_690;
  double dStack_688;
  double dStack_680;
  double dStack_678;
  double dStack_670;
  double dStack_668;
  double dStack_660;
  double dStack_658;
  double dStack_650;
  double dStack_648;
  double dStack_640;
  double dStack_638;
  double dStack_630;
  double dStack_628;
  undefined1 auStack_618 [64];
  float fStack_5d8;
  float fStack_5d4;
  float fStack_5d0;
  undefined4 uStack_5cc;
  float fStack_5c8;
  float fStack_5c4;
  float fStack_5c0;
  undefined4 uStack_5bc;
  float fStack_5b8;
  float fStack_5b4;
  float fStack_5b0;
  undefined4 uStack_5ac;
  float fStack_5a8;
  float fStack_5a4;
  float fStack_5a0;
  undefined4 uStack_59c;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined1 **ppuStack_420;
  code *pcStack_418;
  double dStack_410;
  double dStack_408;
  double dStack_400;
  double dStack_3f8;
  double dStack_3f0;
  double dStack_3e8;
  double dStack_3e0;
  double dStack_3d8;
  double dStack_3d0;
  double dStack_3c8;
  double dStack_3c0;
  double dStack_3b8;
  double dStack_3b0;
  double dStack_3a8;
  double dStack_3a0;
  double dStack_398;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2a8;
  undefined1 *puStack_270;
  code *pcStack_268;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  undefined1 auStack_1e0 [64];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  float fStack_168;
  undefined4 uStack_164;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  pdVar5 = &dStack_260;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3ff0000000000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3ff0000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  puVar3 = (undefined8 *)0x0;
  if (param_2 != 0) {
    uStack_198 = param_3[1];
    uStack_1a0 = *param_3;
    uStack_188 = param_3[3];
    uStack_190 = param_3[2];
    uStack_178 = param_3[5];
    uStack_180 = param_3[4];
    fStack_168 = (float)param_3[7];
    uStack_170 = CONCAT44((float)((ulong)param_3[6] >> 0x20) * 0.01,(float)param_3[6] * 0.01);
    _fStack_168 = CONCAT44((int)((ulong)param_3[7] >> 0x20),fStack_168 * 0.01);
    uStack_78 = *(undefined8 *)(param_2 + 0x10);
    dStack_80 = *(double *)(param_2 + 8);
    uStack_68 = *(undefined8 *)(param_2 + 0x20);
    uStack_70 = *(undefined8 *)(param_2 + 0x18);
    uStack_58 = *(undefined8 *)(param_2 + 0x30);
    uStack_60 = *(undefined8 *)(param_2 + 0x28);
    uStack_48 = *(undefined8 *)(param_2 + 0x40);
    uStack_50 = *(undefined8 *)(param_2 + 0x38);
    func_0x0001094f5708(&uStack_110,&uStack_1a0);
    dStack_258 = (double)uStack_78;
    dStack_260 = dStack_80;
    dStack_248 = (double)uStack_68;
    dStack_250 = (double)uStack_70;
    dStack_238 = (double)uStack_58;
    dStack_240 = (double)uStack_60;
    dStack_228 = (double)uStack_48;
    dStack_230 = (double)uStack_50;
    func_0x000109519fd0(auStack_1e0,&uStack_110,&dStack_260);
    dStack_260 = (double)(float)auStack_1e0._0_8_;
    dStack_258 = (double)SUB84(auStack_1e0._0_8_,4);
    dStack_250 = (double)(float)auStack_1e0._8_8_;
    dStack_248 = (double)SUB84(auStack_1e0._8_8_,4);
    dStack_240 = (double)(float)auStack_1e0._16_8_;
    dStack_238 = (double)SUB84(auStack_1e0._16_8_,4);
    dStack_230 = (double)(float)auStack_1e0._24_8_;
    dStack_228 = (double)SUB84(auStack_1e0._24_8_,4);
    dStack_220 = (double)(float)auStack_1e0._32_8_;
    dStack_218 = (double)SUB84(auStack_1e0._32_8_,4);
    dStack_210 = (double)(float)auStack_1e0._40_8_;
    dStack_208 = (double)SUB84(auStack_1e0._40_8_,4);
    dStack_200 = (double)(float)auStack_1e0._48_8_;
    dStack_1f8 = (double)SUB84(auStack_1e0._48_8_,4);
    dStack_1f0 = (double)(float)auStack_1e0._56_8_;
    dStack_1e8 = (double)SUB84(auStack_1e0._56_8_,4);
    puVar3 = &uStack_110;
    func_0x00010937fc48();
    func_0x00010937fbc4(&uStack_158);
    uStack_a8 = uStack_130;
    uStack_b0 = uStack_138;
    uStack_98 = uStack_120;
    uStack_a0 = uStack_128;
    uStack_90 = uStack_118;
    uStack_c8 = uStack_150;
    uStack_d0 = uStack_158;
    uStack_b8 = uStack_140;
    uStack_c0 = uStack_148;
    iVar1 = *(int *)(param_2 + 4);
    param_3 = pdVar5;
    if (iVar1 - 4U < 4) {
      uVar6 = 2;
    }
    else {
      if (iVar1 != 8) {
        *(uint *)(param_1 + 0x12) = (uint)(iVar1 == 3);
        goto LAB_10aaafadc;
      }
      uVar6 = 3;
    }
    *(undefined4 *)(param_1 + 0x12) = uVar6;
    param_1[1] = uStack_108;
    *param_1 = uStack_110;
    param_1[3] = uStack_f8;
    param_1[2] = uStack_100;
    param_1[5] = uStack_e8;
    param_1[4] = uStack_f0;
    param_1[6] = uStack_e0;
    param_1[9] = uStack_150;
    param_1[8] = uStack_158;
    param_1[0xb] = uStack_140;
    param_1[10] = uStack_148;
    param_1[0xd] = uStack_130;
    param_1[0xc] = uStack_138;
    param_1[0xf] = uStack_120;
    param_1[0xe] = uStack_128;
    param_1[0x10] = uStack_118;
  }
LAB_10aaafadc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a4cb620(param_1);
  __Unwind_Resume();
  pdVar5 = &dStack_410;
  pcStack_268 = FUN_10aaafb28;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)(puVar3 + 0x12) = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0x3ff0000000000000;
  puVar9 = puVar3 + 4;
  *puVar9 = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar8 = puVar3 + 8;
  *puVar8 = 0x3ff0000000000000;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0x3ff0000000000000;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0x3ff0000000000000;
  puVar4 = puVar3;
  puStack_428 = param_1;
  puStack_270 = &stack0xfffffffffffffff0;
  if (param_3 != (undefined8 *)0x0) {
    iVar1 = *(int *)((long)param_3 + 4);
    puStack_428 = puVar3;
    if (iVar1 - 4U < 4) {
      uVar6 = 2;
    }
    else {
      if (iVar1 != 8) {
        *(uint *)(puVar3 + 0x12) = (uint)(iVar1 == 3);
        goto LAB_10aaafc80;
      }
      uVar6 = 3;
    }
    *(undefined4 *)(puVar3 + 0x12) = uVar6;
    dStack_410 = (double)(float)param_3[1];
    dStack_408 = (double)(float)((ulong)param_3[1] >> 0x20);
    dStack_400 = (double)(float)param_3[2];
    dStack_3f8 = (double)(float)((ulong)param_3[2] >> 0x20);
    dStack_3f0 = (double)(float)param_3[3];
    dStack_3e8 = (double)(float)((ulong)param_3[3] >> 0x20);
    dStack_3e0 = (double)(float)param_3[4];
    dStack_3d8 = (double)(float)((ulong)param_3[4] >> 0x20);
    dStack_3d0 = (double)(float)param_3[5];
    dStack_3c8 = (double)(float)((ulong)param_3[5] >> 0x20);
    dStack_3c0 = (double)(float)param_3[6];
    dStack_3b8 = (double)(float)((ulong)param_3[6] >> 0x20);
    dStack_3b0 = (double)(float)param_3[7];
    dStack_3a8 = (double)(float)((ulong)param_3[7] >> 0x20);
    dStack_3a0 = (double)(float)param_3[8];
    dStack_398 = (double)(float)((ulong)param_3[8] >> 0x20);
    unaff_x22 = &uStack_340;
    func_0x00010937fc48(&uStack_340);
    puVar4 = &uStack_340;
    func_0x00010937fbc4(&uStack_388);
    uStack_2d8 = uStack_360;
    uStack_2e0 = uStack_368;
    uStack_2c8 = uStack_350;
    uStack_2d0 = uStack_358;
    uStack_2c0 = uStack_348;
    uStack_2f8 = uStack_380;
    uStack_300 = uStack_388;
    uStack_2e8 = uStack_370;
    uStack_2f0 = uStack_378;
    puVar3[1] = uStack_338;
    *puVar3 = uStack_340;
    puVar3[3] = uStack_328;
    puVar3[2] = uStack_330;
    puVar3[6] = uStack_310;
    puVar3[5] = uStack_318;
    *puVar9 = uStack_320;
    puVar3[0x10] = uStack_348;
    puVar3[0xd] = uStack_360;
    puVar3[0xc] = uStack_368;
    puVar3[0xf] = uStack_350;
    puVar3[0xe] = uStack_358;
    puVar3[0xb] = uStack_370;
    puVar3[10] = uStack_378;
    puVar3[9] = uStack_380;
    *puVar8 = uStack_388;
    param_3 = pdVar5;
  }
LAB_10aaafc80:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar3 = &uStack_520;
  pcStack_418 = FUN_10aaafcb8;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)(puVar4 + 0x12) = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0x3ff0000000000000;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[8] = 0x3ff0000000000000;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0x3ff0000000000000;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0x3ff0000000000000;
  puStack_440 = unaff_x22;
  puStack_438 = puVar9;
  puStack_430 = puVar8;
  ppuStack_420 = &puStack_270;
  if (*(char *)(param_3 + 0x3d) == '\x01') {
    if (param_4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar2 = *(int *)(param_4 + 4) - 3;
      if (uVar2 < 6) {
        uVar7 = *(undefined4 *)(&UNK_10e4f45b0 + (ulong)uVar2 * 4);
      }
      else {
        uVar7 = 0;
      }
      uVar6 = *(undefined4 *)((long)param_3 + 0x1ec);
      if (*(char *)(param_3 + 0x3e) == '\0') {
        uVar6 = uVar7;
      }
    }
    *(undefined4 *)(puVar4 + 0x12) = uVar6;
    uStack_518 = param_3[0x36];
    uStack_520 = param_3[0x35];
    uStack_508 = param_3[0x38];
    uStack_510 = param_3[0x37];
    uStack_4f8 = param_3[0x3a];
    uStack_500 = param_3[0x39];
    uStack_4e8 = param_3[0x3c];
    uStack_4f0 = param_3[0x3b];
    param_3 = param_3 + 0x25;
    FUN_10aaafe50(&uStack_4e0,&uStack_520);
  }
  else {
    if (param_4 == 0) goto LAB_10aaafdf0;
    iVar1 = *(int *)(param_4 + 4);
    if (iVar1 - 4U < 4) {
      uVar6 = 2;
    }
    else {
      if (iVar1 != 8) {
        *(uint *)(puVar4 + 0x12) = (uint)(iVar1 == 3);
        goto LAB_10aaafdf0;
      }
      uVar6 = 3;
    }
    *(undefined4 *)(puVar4 + 0x12) = uVar6;
    puVar3 = (undefined8 *)(param_4 + 8);
    param_3 = param_3 + 0x25;
    FUN_10aaafe50(&uStack_4e0,puVar3);
  }
  puVar4[1] = uStack_4d8;
  *puVar4 = uStack_4e0;
  puVar4[3] = uStack_4c8;
  puVar4[2] = uStack_4d0;
  puVar4[6] = uStack_4b0;
  puVar4[5] = uStack_4b8;
  puVar4[4] = uStack_4c0;
  puVar4[0x10] = uStack_460;
  puVar4[0xd] = uStack_478;
  puVar4[0xc] = uStack_480;
  puVar4[0xf] = uStack_468;
  puVar4[0xe] = uStack_470;
  puVar4[0xb] = uStack_488;
  puVar4[10] = uStack_490;
  puVar4[9] = uStack_498;
  puVar4[8] = uStack_4a0;
  puVar4 = puVar3;
LAB_10aaafdf0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  fVar10 = *(float *)((long)param_3 + 0x24);
  fVar11 = *(float *)(param_3 + 5);
  fVar12 = *(float *)((long)param_3 + 0x2c);
  fVar13 = *(float *)((long)param_3 + 0x34);
  fVar14 = *(float *)(param_3 + 7);
  fVar15 = *(float *)((long)param_3 + 0x3c);
  fVar16 = *(float *)((long)param_3 + 0x44);
  fVar17 = *(float *)(param_3 + 9);
  fVar18 = *(float *)((long)param_3 + 0x4c);
  fVar19 = *(float *)((long)param_3 + 0x54) * 0.01;
  fVar20 = *(float *)(param_3 + 0xb) * 0.01;
  fVar21 = *(float *)((long)param_3 + 0x5c) * 0.01;
  fStack_5d8 = -(fVar17 * fVar15) + fVar18 * fVar14;
  fVar22 = -(fVar17 * fVar12) + fVar18 * fVar11;
  fStack_5d0 = -(fVar14 * fVar12) + fVar15 * fVar11;
  fStack_5b0 = 1.0 / (-(fVar13 * fVar22) + fStack_5d8 * fVar10 + fStack_5d0 * fVar16);
  fStack_5d8 = fStack_5d8 * fStack_5b0;
  fStack_5c8 = -((-(fVar16 * fVar15) + fVar18 * fVar13) * fStack_5b0);
  fStack_5b8 = (-(fVar16 * fVar14) + fVar17 * fVar13) * fStack_5b0;
  fStack_5d4 = -(fVar22 * fStack_5b0);
  fStack_5c4 = (-(fVar16 * fVar12) + fVar18 * fVar10) * fStack_5b0;
  fStack_5b4 = -((-(fVar16 * fVar11) + fVar17 * fVar10) * fStack_5b0);
  fStack_5d0 = fStack_5d0 * fStack_5b0;
  fStack_5c0 = -((-(fVar13 * fVar12) + fVar15 * fVar10) * fStack_5b0);
  fStack_5b0 = (-(fVar13 * fVar11) + fVar14 * fVar10) * fStack_5b0;
  fStack_5a8 = (-(fStack_5c8 * fVar20) - fVar19 * fStack_5d8) - fVar21 * fStack_5b8;
  fStack_5a4 = (-(fStack_5c4 * fVar20) - fVar19 * fStack_5d4) - fVar21 * fStack_5b4;
  uStack_5cc = 0;
  uStack_5bc = 0;
  uStack_5ac = 0;
  fStack_5a0 = (-(fStack_5c0 * fVar20) - fVar19 * fStack_5d0) - fVar21 * fStack_5b0;
  uStack_59c = 0x3f800000;
  func_0x000109519fd0(auStack_618,&fStack_5d8,puVar4);
  dStack_6a0 = (double)(float)auStack_618._0_8_;
  dStack_698 = (double)SUB84(auStack_618._0_8_,4);
  dStack_690 = (double)(float)auStack_618._8_8_;
  dStack_688 = (double)SUB84(auStack_618._8_8_,4);
  dStack_680 = (double)(float)auStack_618._16_8_;
  dStack_678 = (double)SUB84(auStack_618._16_8_,4);
  dStack_670 = (double)(float)auStack_618._24_8_;
  dStack_668 = (double)SUB84(auStack_618._24_8_,4);
  dStack_660 = (double)(float)auStack_618._32_8_;
  dStack_658 = (double)SUB84(auStack_618._32_8_,4);
  dStack_650 = (double)(float)auStack_618._40_8_;
  dStack_648 = (double)SUB84(auStack_618._40_8_,4);
  dStack_640 = (double)(float)auStack_618._48_8_;
  dStack_638 = (double)SUB84(auStack_618._48_8_,4);
  dStack_630 = (double)(float)auStack_618._56_8_;
  dStack_628 = (double)SUB84(auStack_618._56_8_,4);
  func_0x00010937fc48(extraout_x8,&dStack_6a0);
  func_0x00010937fbc4(&uStack_598);
  *(undefined8 *)(extraout_x8 + 0x68) = uStack_570;
  *(undefined8 *)(extraout_x8 + 0x60) = uStack_578;
  *(undefined8 *)(extraout_x8 + 0x78) = uStack_560;
  *(undefined8 *)(extraout_x8 + 0x70) = uStack_568;
  *(undefined8 *)(extraout_x8 + 0x80) = uStack_558;
  *(undefined8 *)(extraout_x8 + 0x48) = uStack_590;
  *(undefined8 *)(extraout_x8 + 0x40) = uStack_598;
  *(undefined8 *)(extraout_x8 + 0x58) = uStack_580;
  *(undefined8 *)(extraout_x8 + 0x50) = uStack_588;
  return;
}



/* Entry: 10aaafb28; end: 10aaafcb7;  */

void FUN_10aaafb28(undefined8 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined4 uVar6;
  long extraout_x8;
  undefined4 uVar7;
  undefined8 *unaff_x19;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x22;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dStack_440;
  double dStack_438;
  double dStack_430;
  double dStack_428;
  double dStack_420;
  double dStack_418;
  double dStack_410;
  double dStack_408;
  double dStack_400;
  double dStack_3f8;
  double dStack_3f0;
  double dStack_3e8;
  double dStack_3e0;
  double dStack_3d8;
  double dStack_3d0;
  double dStack_3c8;
  undefined1 auStack_3b8 [64];
  float fStack_378;
  float fStack_374;
  float fStack_370;
  undefined4 uStack_36c;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  undefined4 uStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  undefined4 uStack_34c;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_48;
  
  pdVar5 = &dStack_1b0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3ff0000000000000;
  puVar9 = param_1 + 4;
  *puVar9 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar8 = param_1 + 8;
  *puVar8 = 0x3ff0000000000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3ff0000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3ff0000000000000;
  puVar3 = param_1;
  if (param_2 != (undefined1 *)0x0) {
    iVar1 = *(int *)(param_2 + 4);
    unaff_x19 = param_1;
    if (iVar1 - 4U < 4) {
      uVar6 = 2;
    }
    else {
      if (iVar1 != 8) {
        *(uint *)(param_1 + 0x12) = (uint)(iVar1 == 3);
        goto LAB_10aaafc80;
      }
      uVar6 = 3;
    }
    *(undefined4 *)(param_1 + 0x12) = uVar6;
    dStack_1b0 = (double)(float)*(undefined8 *)(param_2 + 8);
    dStack_1a8 = (double)(float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    dStack_1a0 = (double)(float)*(undefined8 *)(param_2 + 0x10);
    dStack_198 = (double)(float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    dStack_190 = (double)(float)*(undefined8 *)(param_2 + 0x18);
    dStack_188 = (double)(float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    dStack_180 = (double)(float)*(undefined8 *)(param_2 + 0x20);
    dStack_178 = (double)(float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
    dStack_170 = (double)(float)*(undefined8 *)(param_2 + 0x28);
    dStack_168 = (double)(float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
    dStack_160 = (double)(float)*(undefined8 *)(param_2 + 0x30);
    dStack_158 = (double)(float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
    dStack_150 = (double)(float)*(undefined8 *)(param_2 + 0x38);
    dStack_148 = (double)(float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
    dStack_140 = (double)(float)*(undefined8 *)(param_2 + 0x40);
    dStack_138 = (double)(float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
    unaff_x22 = &uStack_e0;
    func_0x00010937fc48(&uStack_e0);
    puVar3 = &uStack_e0;
    func_0x00010937fbc4(&uStack_128);
    uStack_78 = uStack_100;
    uStack_80 = uStack_108;
    uStack_68 = uStack_f0;
    uStack_70 = uStack_f8;
    uStack_60 = uStack_e8;
    uStack_98 = uStack_120;
    uStack_a0 = uStack_128;
    uStack_88 = uStack_110;
    uStack_90 = uStack_118;
    param_1[1] = uStack_d8;
    *param_1 = uStack_e0;
    param_1[3] = uStack_c8;
    param_1[2] = uStack_d0;
    param_1[6] = uStack_b0;
    param_1[5] = uStack_b8;
    *puVar9 = uStack_c0;
    param_1[0x10] = uStack_e8;
    param_1[0xd] = uStack_100;
    param_1[0xc] = uStack_108;
    param_1[0xf] = uStack_f0;
    param_1[0xe] = uStack_f8;
    param_1[0xb] = uStack_110;
    param_1[10] = uStack_118;
    param_1[9] = uStack_120;
    *puVar8 = uStack_128;
    param_2 = (undefined1 *)pdVar5;
  }
LAB_10aaafc80:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar4 = &uStack_2c0;
  puStack_1e0 = unaff_x22;
  puStack_1d8 = puVar9;
  puStack_1d0 = puVar8;
  puStack_1c8 = unaff_x19;
  puStack_1c0 = &stack0xfffffffffffffff0;
  pcStack_1b8 = FUN_10aaafcb8;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)(puVar3 + 0x12) = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0x3ff0000000000000;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[8] = 0x3ff0000000000000;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0x3ff0000000000000;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0x3ff0000000000000;
  if (param_2[0x1e8] == '\x01') {
    if (param_3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar2 = *(int *)(param_3 + 4) - 3;
      if (uVar2 < 6) {
        uVar7 = *(undefined4 *)(&UNK_10e4f45b0 + (ulong)uVar2 * 4);
      }
      else {
        uVar7 = 0;
      }
      uVar6 = *(undefined4 *)(param_2 + 0x1ec);
      if (param_2[0x1f0] == '\0') {
        uVar6 = uVar7;
      }
    }
    *(undefined4 *)(puVar3 + 0x12) = uVar6;
    uStack_2b8 = *(undefined8 *)(param_2 + 0x1b0);
    uStack_2c0 = *(undefined8 *)(param_2 + 0x1a8);
    uStack_2a8 = *(undefined8 *)(param_2 + 0x1c0);
    uStack_2b0 = *(undefined8 *)(param_2 + 0x1b8);
    uStack_298 = *(undefined8 *)(param_2 + 0x1d0);
    uStack_2a0 = *(undefined8 *)(param_2 + 0x1c8);
    uStack_288 = *(undefined8 *)(param_2 + 0x1e0);
    uStack_290 = *(undefined8 *)(param_2 + 0x1d8);
    param_2 = param_2 + 0x128;
    FUN_10aaafe50(&uStack_280,&uStack_2c0);
  }
  else {
    if (param_3 == 0) goto LAB_10aaafdf0;
    iVar1 = *(int *)(param_3 + 4);
    if (iVar1 - 4U < 4) {
      uVar6 = 2;
    }
    else {
      if (iVar1 != 8) {
        *(uint *)(puVar3 + 0x12) = (uint)(iVar1 == 3);
        goto LAB_10aaafdf0;
      }
      uVar6 = 3;
    }
    *(undefined4 *)(puVar3 + 0x12) = uVar6;
    puVar4 = (undefined8 *)(param_3 + 8);
    param_2 = param_2 + 0x128;
    FUN_10aaafe50(&uStack_280,puVar4);
  }
  puVar3[1] = uStack_278;
  *puVar3 = uStack_280;
  puVar3[3] = uStack_268;
  puVar3[2] = uStack_270;
  puVar3[6] = uStack_250;
  puVar3[5] = uStack_258;
  puVar3[4] = uStack_260;
  puVar3[0x10] = uStack_200;
  puVar3[0xd] = uStack_218;
  puVar3[0xc] = uStack_220;
  puVar3[0xf] = uStack_208;
  puVar3[0xe] = uStack_210;
  puVar3[0xb] = uStack_228;
  puVar3[10] = uStack_230;
  puVar3[9] = uStack_238;
  puVar3[8] = uStack_240;
  puVar3 = puVar4;
LAB_10aaafdf0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  fVar10 = *(float *)(param_2 + 0x24);
  fVar11 = *(float *)(param_2 + 0x28);
  fVar12 = *(float *)(param_2 + 0x2c);
  fVar13 = *(float *)(param_2 + 0x34);
  fVar14 = *(float *)(param_2 + 0x38);
  fVar15 = *(float *)(param_2 + 0x3c);
  fVar16 = *(float *)(param_2 + 0x44);
  fVar17 = *(float *)(param_2 + 0x48);
  fVar18 = *(float *)(param_2 + 0x4c);
  fVar19 = *(float *)(param_2 + 0x54) * 0.01;
  fVar20 = *(float *)(param_2 + 0x58) * 0.01;
  fVar21 = *(float *)(param_2 + 0x5c) * 0.01;
  fStack_378 = -(fVar17 * fVar15) + fVar18 * fVar14;
  fVar22 = -(fVar17 * fVar12) + fVar18 * fVar11;
  fStack_370 = -(fVar14 * fVar12) + fVar15 * fVar11;
  fStack_350 = 1.0 / (-(fVar13 * fVar22) + fStack_378 * fVar10 + fStack_370 * fVar16);
  fStack_378 = fStack_378 * fStack_350;
  fStack_368 = -((-(fVar16 * fVar15) + fVar18 * fVar13) * fStack_350);
  fStack_358 = (-(fVar16 * fVar14) + fVar17 * fVar13) * fStack_350;
  fStack_374 = -(fVar22 * fStack_350);
  fStack_364 = (-(fVar16 * fVar12) + fVar18 * fVar10) * fStack_350;
  fStack_354 = -((-(fVar16 * fVar11) + fVar17 * fVar10) * fStack_350);
  fStack_370 = fStack_370 * fStack_350;
  fStack_360 = -((-(fVar13 * fVar12) + fVar15 * fVar10) * fStack_350);
  fStack_350 = (-(fVar13 * fVar11) + fVar14 * fVar10) * fStack_350;
  fStack_348 = (-(fStack_368 * fVar20) - fVar19 * fStack_378) - fVar21 * fStack_358;
  fStack_344 = (-(fStack_364 * fVar20) - fVar19 * fStack_374) - fVar21 * fStack_354;
  uStack_36c = 0;
  uStack_35c = 0;
  uStack_34c = 0;
  fStack_340 = (-(fStack_360 * fVar20) - fVar19 * fStack_370) - fVar21 * fStack_350;
  uStack_33c = 0x3f800000;
  func_0x000109519fd0(auStack_3b8,&fStack_378,puVar3);
  dStack_440 = (double)(float)auStack_3b8._0_8_;
  dStack_438 = (double)SUB84(auStack_3b8._0_8_,4);
  dStack_430 = (double)(float)auStack_3b8._8_8_;
  dStack_428 = (double)SUB84(auStack_3b8._8_8_,4);
  dStack_420 = (double)(float)auStack_3b8._16_8_;
  dStack_418 = (double)SUB84(auStack_3b8._16_8_,4);
  dStack_410 = (double)(float)auStack_3b8._24_8_;
  dStack_408 = (double)SUB84(auStack_3b8._24_8_,4);
  dStack_400 = (double)(float)auStack_3b8._32_8_;
  dStack_3f8 = (double)SUB84(auStack_3b8._32_8_,4);
  dStack_3f0 = (double)(float)auStack_3b8._40_8_;
  dStack_3e8 = (double)SUB84(auStack_3b8._40_8_,4);
  dStack_3e0 = (double)(float)auStack_3b8._48_8_;
  dStack_3d8 = (double)SUB84(auStack_3b8._48_8_,4);
  dStack_3d0 = (double)(float)auStack_3b8._56_8_;
  dStack_3c8 = (double)SUB84(auStack_3b8._56_8_,4);
  func_0x00010937fc48(extraout_x8,&dStack_440);
  func_0x00010937fbc4(&uStack_338);
  *(undefined8 *)(extraout_x8 + 0x68) = uStack_310;
  *(undefined8 *)(extraout_x8 + 0x60) = uStack_318;
  *(undefined8 *)(extraout_x8 + 0x78) = uStack_300;
  *(undefined8 *)(extraout_x8 + 0x70) = uStack_308;
  *(undefined8 *)(extraout_x8 + 0x80) = uStack_2f8;
  *(undefined8 *)(extraout_x8 + 0x48) = uStack_330;
  *(undefined8 *)(extraout_x8 + 0x40) = uStack_338;
  *(undefined8 *)(extraout_x8 + 0x58) = uStack_320;
  *(undefined8 *)(extraout_x8 + 0x50) = uStack_328;
  return;
}



/* Entry: 10aaafcb8; end: 10aaafe4f;  */

void FUN_10aaafcb8(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long extraout_x8;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dStack_290;
  double dStack_288;
  double dStack_280;
  double dStack_278;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  undefined1 auStack_208 [64];
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined4 uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 uStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  puVar3 = &uStack_110;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3ff0000000000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3ff0000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3ff0000000000000;
  if (*(char *)(param_2 + 0x1e8) == '\x01') {
    if (param_3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = *(int *)(param_3 + 4) - 3;
      if (uVar2 < 6) {
        uVar5 = *(undefined4 *)(&UNK_10e4f45b0 + (ulong)uVar2 * 4);
      }
      else {
        uVar5 = 0;
      }
      uVar4 = *(undefined4 *)(param_2 + 0x1ec);
      if (*(char *)(param_2 + 0x1f0) == '\0') {
        uVar4 = uVar5;
      }
    }
    *(undefined4 *)(param_1 + 0x12) = uVar4;
    uStack_108 = *(undefined8 *)(param_2 + 0x1b0);
    uStack_110 = *(undefined8 *)(param_2 + 0x1a8);
    uStack_f8 = *(undefined8 *)(param_2 + 0x1c0);
    uStack_100 = *(undefined8 *)(param_2 + 0x1b8);
    uStack_e8 = *(undefined8 *)(param_2 + 0x1d0);
    uStack_f0 = *(undefined8 *)(param_2 + 0x1c8);
    uStack_d8 = *(undefined8 *)(param_2 + 0x1e0);
    uStack_e0 = *(undefined8 *)(param_2 + 0x1d8);
    param_2 = param_2 + 0x128;
    FUN_10aaafe50(&uStack_d0,&uStack_110);
  }
  else {
    if (param_3 == 0) goto LAB_10aaafdf0;
    iVar1 = *(int *)(param_3 + 4);
    if (iVar1 - 4U < 4) {
      uVar4 = 2;
    }
    else {
      if (iVar1 != 8) {
        *(uint *)(param_1 + 0x12) = (uint)(iVar1 == 3);
        goto LAB_10aaafdf0;
      }
      uVar4 = 3;
    }
    *(undefined4 *)(param_1 + 0x12) = uVar4;
    puVar3 = (undefined8 *)(param_3 + 8);
    param_2 = param_2 + 0x128;
    FUN_10aaafe50(&uStack_d0,puVar3);
  }
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  param_1[6] = uStack_a0;
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  param_1[0x10] = uStack_50;
  param_1[0xd] = uStack_68;
  param_1[0xc] = uStack_70;
  param_1[0xf] = uStack_58;
  param_1[0xe] = uStack_60;
  param_1[0xb] = uStack_78;
  param_1[10] = uStack_80;
  param_1[9] = uStack_88;
  param_1[8] = uStack_90;
  param_1 = puVar3;
LAB_10aaafdf0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  fVar6 = *(float *)(param_2 + 0x24);
  fVar7 = *(float *)(param_2 + 0x28);
  fVar8 = *(float *)(param_2 + 0x2c);
  fVar9 = *(float *)(param_2 + 0x34);
  fVar10 = *(float *)(param_2 + 0x38);
  fVar11 = *(float *)(param_2 + 0x3c);
  fVar12 = *(float *)(param_2 + 0x44);
  fVar13 = *(float *)(param_2 + 0x48);
  fVar14 = *(float *)(param_2 + 0x4c);
  fVar15 = *(float *)(param_2 + 0x54) * 0.01;
  fVar16 = *(float *)(param_2 + 0x58) * 0.01;
  fVar17 = *(float *)(param_2 + 0x5c) * 0.01;
  fStack_1c8 = -(fVar13 * fVar11) + fVar14 * fVar10;
  fVar18 = -(fVar13 * fVar8) + fVar14 * fVar7;
  fStack_1c0 = -(fVar10 * fVar8) + fVar11 * fVar7;
  fStack_1a0 = 1.0 / (-(fVar9 * fVar18) + fStack_1c8 * fVar6 + fStack_1c0 * fVar12);
  fStack_1c8 = fStack_1c8 * fStack_1a0;
  fStack_1b8 = -((-(fVar12 * fVar11) + fVar14 * fVar9) * fStack_1a0);
  fStack_1a8 = (-(fVar12 * fVar10) + fVar13 * fVar9) * fStack_1a0;
  fStack_1c4 = -(fVar18 * fStack_1a0);
  fStack_1b4 = (-(fVar12 * fVar8) + fVar14 * fVar6) * fStack_1a0;
  fStack_1a4 = -((-(fVar12 * fVar7) + fVar13 * fVar6) * fStack_1a0);
  fStack_1c0 = fStack_1c0 * fStack_1a0;
  fStack_1b0 = -((-(fVar9 * fVar8) + fVar11 * fVar6) * fStack_1a0);
  fStack_1a0 = (-(fVar9 * fVar7) + fVar10 * fVar6) * fStack_1a0;
  fStack_198 = (-(fStack_1b8 * fVar16) - fVar15 * fStack_1c8) - fVar17 * fStack_1a8;
  fStack_194 = (-(fStack_1b4 * fVar16) - fVar15 * fStack_1c4) - fVar17 * fStack_1a4;
  uStack_1bc = 0;
  uStack_1ac = 0;
  uStack_19c = 0;
  fStack_190 = (-(fStack_1b0 * fVar16) - fVar15 * fStack_1c0) - fVar17 * fStack_1a0;
  uStack_18c = 0x3f800000;
  func_0x000109519fd0(auStack_208,&fStack_1c8,param_1);
  dStack_290 = (double)(float)auStack_208._0_8_;
  dStack_288 = (double)SUB84(auStack_208._0_8_,4);
  dStack_280 = (double)(float)auStack_208._8_8_;
  dStack_278 = (double)SUB84(auStack_208._8_8_,4);
  dStack_270 = (double)(float)auStack_208._16_8_;
  dStack_268 = (double)SUB84(auStack_208._16_8_,4);
  dStack_260 = (double)(float)auStack_208._24_8_;
  dStack_258 = (double)SUB84(auStack_208._24_8_,4);
  dStack_250 = (double)(float)auStack_208._32_8_;
  dStack_248 = (double)SUB84(auStack_208._32_8_,4);
  dStack_240 = (double)(float)auStack_208._40_8_;
  dStack_238 = (double)SUB84(auStack_208._40_8_,4);
  dStack_230 = (double)(float)auStack_208._48_8_;
  dStack_228 = (double)SUB84(auStack_208._48_8_,4);
  dStack_220 = (double)(float)auStack_208._56_8_;
  dStack_218 = (double)SUB84(auStack_208._56_8_,4);
  func_0x00010937fc48(extraout_x8,&dStack_290);
  func_0x00010937fbc4(&uStack_188);
  *(undefined8 *)(extraout_x8 + 0x68) = uStack_160;
  *(undefined8 *)(extraout_x8 + 0x60) = uStack_168;
  *(undefined8 *)(extraout_x8 + 0x78) = uStack_150;
  *(undefined8 *)(extraout_x8 + 0x70) = uStack_158;
  *(undefined8 *)(extraout_x8 + 0x80) = uStack_148;
  *(undefined8 *)(extraout_x8 + 0x48) = uStack_180;
  *(undefined8 *)(extraout_x8 + 0x40) = uStack_188;
  *(undefined8 *)(extraout_x8 + 0x58) = uStack_170;
  *(undefined8 *)(extraout_x8 + 0x50) = uStack_178;
  return;
}



/* Entry: 10aaafe50; end: 10aab000b;  */

void FUN_10aaafe50(long param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  undefined1 auStack_f8 [64];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  fVar1 = *(float *)(param_3 + 0x24);
  fVar2 = *(float *)(param_3 + 0x28);
  fVar3 = *(float *)(param_3 + 0x2c);
  fVar4 = *(float *)(param_3 + 0x34);
  fVar5 = *(float *)(param_3 + 0x38);
  fVar6 = *(float *)(param_3 + 0x3c);
  fVar7 = *(float *)(param_3 + 0x44);
  fVar8 = *(float *)(param_3 + 0x48);
  fVar9 = *(float *)(param_3 + 0x4c);
  fVar10 = *(float *)(param_3 + 0x54) * 0.01;
  fVar11 = *(float *)(param_3 + 0x58) * 0.01;
  fVar12 = *(float *)(param_3 + 0x5c) * 0.01;
  fStack_b8 = -(fVar8 * fVar6) + fVar9 * fVar5;
  fVar13 = -(fVar8 * fVar3) + fVar9 * fVar2;
  fStack_b0 = -(fVar5 * fVar3) + fVar6 * fVar2;
  fStack_90 = 1.0 / (-(fVar4 * fVar13) + fStack_b8 * fVar1 + fStack_b0 * fVar7);
  fStack_b8 = fStack_b8 * fStack_90;
  fStack_a8 = -((-(fVar7 * fVar6) + fVar9 * fVar4) * fStack_90);
  fStack_98 = (-(fVar7 * fVar5) + fVar8 * fVar4) * fStack_90;
  fStack_b4 = -(fVar13 * fStack_90);
  fStack_a4 = (-(fVar7 * fVar3) + fVar9 * fVar1) * fStack_90;
  fStack_94 = -((-(fVar7 * fVar2) + fVar8 * fVar1) * fStack_90);
  fStack_b0 = fStack_b0 * fStack_90;
  fStack_a0 = -((-(fVar4 * fVar3) + fVar6 * fVar1) * fStack_90);
  fStack_90 = (-(fVar4 * fVar2) + fVar5 * fVar1) * fStack_90;
  fStack_88 = (-(fStack_a8 * fVar11) - fVar10 * fStack_b8) - fVar12 * fStack_98;
  fStack_84 = (-(fStack_a4 * fVar11) - fVar10 * fStack_b4) - fVar12 * fStack_94;
  uStack_ac = 0;
  uStack_9c = 0;
  uStack_8c = 0;
  fStack_80 = (-(fStack_a0 * fVar11) - fVar10 * fStack_b0) - fVar12 * fStack_90;
  uStack_7c = 0x3f800000;
  func_0x000109519fd0(auStack_f8,&fStack_b8,param_2);
  dStack_180 = (double)(float)auStack_f8._0_8_;
  dStack_178 = (double)SUB84(auStack_f8._0_8_,4);
  dStack_170 = (double)(float)auStack_f8._8_8_;
  dStack_168 = (double)SUB84(auStack_f8._8_8_,4);
  dStack_160 = (double)(float)auStack_f8._16_8_;
  dStack_158 = (double)SUB84(auStack_f8._16_8_,4);
  dStack_150 = (double)(float)auStack_f8._24_8_;
  dStack_148 = (double)SUB84(auStack_f8._24_8_,4);
  dStack_140 = (double)(float)auStack_f8._32_8_;
  dStack_138 = (double)SUB84(auStack_f8._32_8_,4);
  dStack_130 = (double)(float)auStack_f8._40_8_;
  dStack_128 = (double)SUB84(auStack_f8._40_8_,4);
  dStack_120 = (double)(float)auStack_f8._48_8_;
  dStack_118 = (double)SUB84(auStack_f8._48_8_,4);
  dStack_110 = (double)(float)auStack_f8._56_8_;
  dStack_108 = (double)SUB84(auStack_f8._56_8_,4);
  func_0x00010937fc48(param_1,&dStack_180);
  func_0x00010937fbc4(&uStack_78);
  *(undefined8 *)(param_1 + 0x68) = uStack_50;
  *(undefined8 *)(param_1 + 0x60) = uStack_58;
  *(undefined8 *)(param_1 + 0x78) = uStack_40;
  *(undefined8 *)(param_1 + 0x70) = uStack_48;
  *(undefined8 *)(param_1 + 0x80) = uStack_38;
  *(undefined8 *)(param_1 + 0x48) = uStack_70;
  *(undefined8 *)(param_1 + 0x40) = uStack_78;
  *(undefined8 *)(param_1 + 0x58) = uStack_60;
  *(undefined8 *)(param_1 + 0x50) = uStack_68;
  return;
}



/* Entry: 10aab000c; end: 10aab01df;  */

void FUN_10aab000c(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64f00d;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f663ee8;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f68da37;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aab01e0(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f684ed0;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f68da37;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aab01e0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f3ed485;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f68da37;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aab01e0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68da56;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f68da37;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aab01e0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68da5f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f68da37;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aab01e0();
  FUN_10a003ff4();
  return;
}



/* Entry: 10aab01e0; end: 10aab0403;  */

undefined8 * FUN_10aab01e0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aab0284);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10aab0404; end: 10aab0407;  */

undefined8 * FUN_10aab0404(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  
  *param_1 = &PTR_FUN_110c42c80;
  puVar9 = (undefined8 *)param_1[0x18];
  if (puVar9 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)param_1[0x19];
    puVar1 = puVar9;
    if (puVar4 != puVar9) {
      do {
        puVar4 = puVar4 + -8;
        (**(code **)*puVar4)(puVar4);
      } while (puVar4 != puVar9);
      puVar1 = (undefined8 *)param_1[0x18];
    }
    param_1[0x19] = puVar9;
    __ZdlPv(puVar1);
  }
  puVar9 = (undefined8 *)param_1[0x15];
  if (puVar9 != (undefined8 *)0x0) {
    puVar4 = puVar9;
    if ((undefined8 *)param_1[0x16] != puVar9) {
      puVar4 = (undefined8 *)param_1[0x16] + -7;
      do {
        puVar1 = puVar4 + -1;
        (**(code **)*puVar4)(puVar4);
        puVar4 = puVar4 + -8;
      } while (puVar1 != puVar9);
      puVar4 = (undefined8 *)param_1[0x15];
    }
    param_1[0x16] = puVar9;
    __ZdlPv(puVar4);
  }
  plVar7 = (long *)param_1[0x12];
  if (plVar7 != (long *)0x0) {
    plVar5 = (long *)param_1[0x13];
    plVar2 = plVar7;
    if (plVar5 != plVar7) {
      do {
        plVar2 = plVar5 + -3;
        if (*plVar2 != 0) {
          plVar5[-2] = *plVar2;
          __ZdlPv();
        }
        plVar5 = plVar2;
      } while (plVar2 != plVar7);
      plVar2 = (long *)param_1[0x12];
    }
    param_1[0x13] = plVar7;
    __ZdlPv(plVar2);
  }
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (param_1[0xb] != 0) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  if (param_1[8] != 0) {
    param_1[9] = param_1[8];
    __ZdlPv();
  }
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  lVar8 = param_1[2];
  if (lVar8 != 0) {
    lVar3 = param_1[3];
    lVar6 = lVar8;
    if (lVar3 != lVar8) {
      do {
        lVar3 = lVar3 + -0x30;
        FUN_10aad4208();
      } while (lVar3 != lVar8);
      lVar6 = param_1[2];
    }
    param_1[3] = lVar8;
    __ZdlPv(lVar6);
  }
  return param_1;
}



/* Entry: 10aab0408; end: 10aab041b;  */

void FUN_10aab0408(void)

{
  func_0x00010aab0284();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aab041c; end: 10aab1c57;  */

void FUN_10aab041c(long param_1,long param_2,undefined8 param_3)

{
  float *pfVar1;
  uint *puVar2;
  undefined8 **ppuVar3;
  undefined *******pppppppuVar4;
  byte bVar5;
  long *plVar6;
  code *pcVar7;
  bool bVar8;
  undefined ******ppppppuVar9;
  undefined *******pppppppuVar10;
  long lVar11;
  undefined *******pppppppuVar12;
  long lVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined ******ppppppuVar16;
  ulong uVar17;
  long lVar18;
  undefined4 *puVar19;
  undefined ******ppppppuVar20;
  int *piVar21;
  int iVar22;
  long *plVar23;
  undefined8 *puVar24;
  long *plVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  undefined8 *puVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  ulong *puVar34;
  undefined *******pppppppuVar35;
  long lVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  double dVar41;
  undefined8 uVar42;
  undefined4 uVar43;
  double dVar44;
  undefined8 uVar45;
  double dVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  float fVar49;
  float fVar50;
  double dVar51;
  float fStack_1d4;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  double dStack_1b8;
  double dStack_1b0;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  float fStack_19c;
  long *plStack_198;
  long *plStack_190;
  float fStack_184;
  long lStack_180;
  double dStack_178;
  float fStack_16c;
  long lStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined ******ppppppuStack_150;
  undefined ******ppppppuStack_148;
  undefined8 uStack_140;
  undefined ******ppppppuStack_138;
  ulong *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = param_1;
  lStack_180 = param_2;
  lStack_168 = param_1;
  if (param_2 == 0) {
    plStack_158 = (long *)(param_1 + 200);
    if (*plStack_158 != *(long *)(param_1 + 0xc0)) {
      uVar28 = 0;
      iVar22 = 0;
      goto LAB_10aab0574;
    }
    uVar28 = 0;
    iVar22 = 0;
    plStack_198 = (long *)(param_1 + 0x10);
    lVar13 = *plStack_198;
    plStack_190 = (long *)(param_1 + 0x18);
    lVar31 = *plStack_190;
    uVar32 = (lVar31 - lVar13 >> 4) * -0x5555555555555555;
LAB_10aab0890:
    plStack_160 = (long *)(param_1 + 0xc0);
    if (uVar28 < uVar32) {
      lVar13 = lVar13 + (long)(int)uVar28 * 0x30;
      while (lVar31 != lVar13) {
        lVar31 = lVar31 + -0x30;
        FUN_10aad4208(lVar31);
      }
      *plStack_190 = lVar13;
    }
  }
  else {
    iVar22 = (int)(*(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x28) >> 5) * -0xf0f0f0f;
    lVar13 = *(long *)(param_1 + 0xc0);
    uVar28 = (ulong)iVar22;
    plStack_158 = (long *)(param_1 + 200);
    if ((uVar28 != *plStack_158 - lVar13 >> 6) || (*(char *)(param_2 + 0x24) == '\x01')) {
      FUN_10a14b750(&ppppppuStack_150);
      lVar18 = lStack_180;
      *(undefined1 *)(lStack_180 + 0x70) = ppppppuStack_148._0_1_;
      if (*(long *)(lStack_180 + 0x78) != 0) {
        *(long *)(lStack_180 + 0x80) = *(long *)(lStack_180 + 0x78);
        __ZdlPv();
      }
      *(undefined *******)(lVar18 + 0x80) = ppppppuStack_138;
      *(undefined ********)(lVar18 + 0x78) = uStack_140;
      *(ulong **)(lVar18 + 0x88) = puStack_130;
      ppppppuStack_138 = (undefined ******)0x0;
      puStack_130 = (ulong *)0x0;
      uStack_140 = (undefined *******)0x0;
      func_0x000107c3193c(lVar18 + 0x90);
      *(undefined8 *)(lVar18 + 0x98) = uStack_120;
      *(undefined8 *)(lVar18 + 0x90) = uStack_128;
      *(undefined8 *)(lVar18 + 0xa0) = uStack_118;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_128 = 0;
      ppppppuStack_150 = (undefined ******)&PTR_FUN_110ba8440;
      puStack_e0 = &uStack_128;
      FUN_10a0426d8(&puStack_e0);
      lVar18 = lStack_168;
      if (uStack_140 != (undefined *******)0x0) {
        ppppppuStack_138 = (undefined ******)uStack_140;
        __ZdlPv();
      }
LAB_10aab0574:
      FUN_10aab1c58(lVar18);
      lVar13 = *(long *)(lVar18 + 0xc0);
    }
    puVar34 = (ulong *)(param_1 + 0xc0);
    puVar29 = *(undefined8 **)(param_1 + 200);
    uVar32 = (long)puVar29 - lVar13 >> 6;
    if (uVar32 < uVar28) {
      uVar30 = uVar28 - uVar32;
      if ((ulong)(*(long *)(param_1 + 0xd0) - (long)puVar29 >> 6) < uVar30) {
        if (uVar28 >> 0x3a != 0) {
          FUN_10aad4190();
          goto LAB_10aab1bd4;
        }
        uVar14 = *(long *)(param_1 + 0xd0) - lVar13;
        uVar17 = (long)uVar14 >> 5;
        if (uVar17 <= uVar28) {
          uVar17 = uVar28;
        }
        if (0x7fffffffffffffbf < uVar14) {
          uVar17 = 0x3ffffffffffffff;
        }
        puStack_130 = puVar34;
        if (uVar17 >> 0x3a != 0) {
          func_0x000109ffded8();
          goto LAB_10aab1bd4;
        }
        ppppppuVar9 = (undefined ******)(uVar17 << 6);
        __Znwm();
        lVar18 = lStack_168;
        ppppppuVar20 = (undefined ******)((long)ppppppuVar9 + ((long)puVar29 - lVar13));
        lVar13 = uVar28 * 0x40 + uVar32 * -0x40;
        ppppppuVar16 = ppppppuVar20;
        ppppppuStack_150 = ppppppuVar9;
        ppppppuStack_148 = ppppppuVar20;
        ppppppuStack_138 = ppppppuVar9 + uVar17 * 8;
        do {
          FUN_10a14b750(ppppppuVar16);
          ppppppuVar16 = ppppppuVar16 + 8;
          lVar13 = lVar13 + -0x40;
        } while (lVar13 != 0);
        pppppppuVar10 = (undefined *******)*puVar34;
        pppppppuVar4 = *(undefined ********)(param_1 + 200);
        uVar32 = (long)pppppppuVar10 + ((long)ppppppuVar20 - (long)pppppppuVar4);
        if (pppppppuVar4 != pppppppuVar10) {
          lVar13 = 0;
          do {
            puVar29 = (undefined8 *)(uVar32 + lVar13);
            *(undefined1 *)(puVar29 + 1) = *(undefined1 *)((long)pppppppuVar10 + lVar13 + 8);
            *puVar29 = &PTR_FUN_110ba8440;
            puVar29[3] = 0;
            puVar29[4] = 0;
            puVar29[2] = 0;
            uVar40 = *(undefined8 *)((long)pppppppuVar10 + lVar13 + 0x10);
            puVar29[3] = *(undefined8 *)((long)pppppppuVar10 + lVar13 + 0x18);
            puVar29[2] = uVar40;
            puVar29[4] = *(undefined8 *)((long)pppppppuVar10 + lVar13 + 0x20);
            *(undefined8 *)((long)pppppppuVar10 + lVar13 + 0x10) = 0;
            *(undefined8 *)((long)pppppppuVar10 + lVar13 + 0x18) = 0;
            *(undefined8 *)((long)pppppppuVar10 + lVar13 + 0x20) = 0;
            puVar29[5] = 0;
            puVar29[6] = 0;
            puVar29[7] = 0;
            uVar40 = *(undefined8 *)((long)pppppppuVar10 + lVar13 + 0x28);
            puVar29[6] = *(undefined8 *)((long)pppppppuVar10 + lVar13 + 0x30);
            puVar29[5] = uVar40;
            puVar29[7] = *(undefined8 *)((long)pppppppuVar10 + lVar13 + 0x38);
            *(undefined8 *)((long)pppppppuVar10 + lVar13 + 0x28) = 0;
            *(undefined8 *)((long)pppppppuVar10 + lVar13 + 0x30) = 0;
            *(undefined8 *)((long)pppppppuVar10 + lVar13 + 0x38) = 0;
            lVar13 = lVar13 + 0x40;
          } while ((undefined *******)((long)pppppppuVar10 + lVar13) != pppppppuVar4);
          do {
            pppppppuVar35 = pppppppuVar10 + 8;
            (*(code *)**pppppppuVar10)(pppppppuVar10);
            pppppppuVar10 = pppppppuVar35;
          } while (pppppppuVar35 != pppppppuVar4);
          pppppppuVar10 = (undefined *******)*puVar34;
        }
        *puVar34 = uVar32;
        *(undefined *******)(param_1 + 200) = ppppppuVar20 + uVar30 * 8;
        ppppppuStack_138 = *(undefined *******)(param_1 + 0xd0);
        *(undefined *******)(param_1 + 0xd0) = ppppppuVar9 + uVar17 * 8;
        ppppppuStack_150 = (undefined ******)pppppppuVar10;
        ppppppuStack_148 = (undefined ******)pppppppuVar10;
        uStack_140 = pppppppuVar10;
        FUN_10aad41a4(&ppppppuStack_150);
      }
      else {
        puVar24 = puVar29 + uVar30 * 8;
        lVar13 = uVar28 * 0x40 + uVar32 * -0x40;
        do {
          FUN_10a14b750(puVar29);
          puVar29 = puVar29 + 8;
          lVar13 = lVar13 + -0x40;
        } while (lVar13 != 0);
LAB_10aab0728:
        *(undefined8 **)(param_1 + 200) = puVar24;
      }
    }
    else if (uVar28 < uVar32) {
      puVar24 = (undefined8 *)(lVar13 + uVar28 * 0x40);
      while (puVar29 != puVar24) {
        puVar29 = puVar29 + -8;
        (**(code **)*puVar29)(puVar29);
      }
      goto LAB_10aab0728;
    }
    plStack_160 = (long *)(param_1 + 0xc0);
    plStack_198 = (long *)(lVar18 + 0x10);
    lVar13 = *plStack_198;
    plStack_190 = (long *)(lVar18 + 0x18);
    lVar31 = *plStack_190;
    lVar33 = lVar31 - lVar13;
    uVar32 = (lVar33 >> 4) * -0x5555555555555555;
    uVar30 = uVar28 + (lVar33 >> 4) * 0x5555555555555555;
    if (uVar28 < uVar32 || uVar30 == 0) goto LAB_10aab0890;
    if ((ulong)((*(long *)(lVar18 + 0x20) - lVar31 >> 4) * -0x5555555555555555) < uVar30) {
      if (0x555555555555555 < uVar28) {
        FUN_10aad41f4();
        goto LAB_10aab1bd4;
      }
      lVar18 = *(long *)(lVar18 + 0x20) - lVar13 >> 4;
      uVar32 = lVar18 * 0x5555555555555556;
      if (uVar32 < uVar28 || uVar32 - uVar28 == 0) {
        uVar32 = uVar28;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar18 * -0x5555555555555555)) {
        uVar32 = 0x555555555555555;
      }
      if (0x555555555555555 < uVar32) {
        func_0x000109ffded8();
        goto LAB_10aab1bd4;
      }
      lVar31 = uVar32 * 0x30;
      __Znwm();
      lVar36 = ((uVar30 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
      _bzero(lVar31 + lVar33,lVar36);
      _memcpy(lVar31,lVar13,lVar33);
      lVar18 = lStack_168;
      *(long *)(lStack_168 + 0x10) = lVar31;
      *(long *)(lStack_168 + 0x18) = lVar31 + lVar33 + lVar36;
      *(ulong *)(lStack_168 + 0x20) = lVar31 + uVar32 * 0x30;
      if (lVar13 != 0) {
        __ZdlPv(lVar13);
      }
    }
    else {
      lVar13 = ((uVar30 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
      _bzero(lVar31,lVar13);
      *plStack_190 = lVar31 + lVar13;
    }
  }
  lVar13 = *(long *)(lVar18 + 0x78);
  puVar15 = *(undefined4 **)(lVar18 + 0x80);
  lVar33 = (long)puVar15 - lVar13;
  lVar31 = lVar33 >> 4;
  bVar8 = uVar28 < (ulong)(lVar31 * -0x5555555555555555);
  uVar32 = uVar28 + lVar31 * 0x5555555555555555;
  iVar27 = (int)uVar28;
  if (bVar8 || uVar32 == 0) {
    if (bVar8) {
      *(long *)(lVar18 + 0x80) = lVar13 + (long)iVar27 * 0x30;
    }
LAB_10aab0a58:
    lVar13 = *(long *)(lVar18 + 0x90);
    plVar23 = *(long **)(lVar18 + 0x98);
    lVar31 = (long)plVar23 - lVar13;
    bVar8 = uVar28 < (ulong)((lVar31 >> 3) * -0x5555555555555555);
    uVar32 = uVar28 + (lVar31 >> 3) * 0x5555555555555555;
    if (bVar8 || uVar32 == 0) {
      if (bVar8) {
        plVar25 = (long *)(lVar13 + (long)iVar27 * 0x18);
        while (plVar6 = plVar23, plVar6 != plVar25) {
          plVar23 = plVar6 + -3;
          if (*plVar23 != 0) {
            plVar6[-2] = *plVar23;
            __ZdlPv();
          }
        }
        *(long **)(lVar18 + 0x98) = plVar25;
      }
    }
    else if ((ulong)((*(long *)(lVar18 + 0xa0) - (long)plVar23 >> 3) * -0x5555555555555555) < uVar32
            ) {
      if (0xaaaaaaaaaaaaaaa < uVar28) {
        func_0x00010aad42b4();
        goto LAB_10aab1bd4;
      }
      lVar18 = *(long *)(lVar18 + 0xa0) - lVar13 >> 3;
      uVar30 = lVar18 * 0x5555555555555556;
      if (uVar30 < uVar28 || uVar30 - uVar28 == 0) {
        uVar30 = uVar28;
      }
      if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
        uVar30 = 0xaaaaaaaaaaaaaaa;
      }
      if (0xaaaaaaaaaaaaaaa < uVar30) {
        func_0x000109ffded8();
        goto LAB_10aab1bd4;
      }
      lVar33 = uVar30 * 0x18;
      __Znwm();
      lVar36 = ((uVar32 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar33 + lVar31,lVar36);
      _memcpy(lVar33,lVar13,lVar31);
      lVar18 = lStack_168;
      *(long *)(lStack_168 + 0x90) = lVar33;
      *(long *)(lStack_168 + 0x98) = lVar33 + lVar31 + lVar36;
      *(ulong *)(lStack_168 + 0xa0) = lVar33 + uVar30 * 0x18;
      if (lVar13 != 0) {
        __ZdlPv(lVar13);
      }
    }
    else {
      uVar32 = (uVar32 * 0x18 - 0x18) / 0x18;
      _bzero(plVar23,uVar32 * 0x18 + 0x18);
      *(long **)(lVar18 + 0x98) = plVar23 + uVar32 * 3 + 3;
    }
    func_0x00010742a308(lVar18 + 0x28,uVar28);
    func_0x00010742a308(lStack_168 + 0x40,uVar28);
    pppppppuVar10 = (undefined *******)(lStack_168 + 0x58);
    func_0x00010742a308(pppppppuVar10,uVar28);
    lVar18 = lStack_168;
    if (0 < iVar22) {
      lVar18 = *(long *)(lStack_180 + 0x28);
      lVar13 = *(long *)(lStack_180 + 0x30);
      if (lVar13 != lVar18) {
        uVar28 = 0;
        fStack_19c = 0.9;
        uStack_1a0 = 0x3f90a3d7;
        uStack_1a4 = 0x3e99999a;
        dStack_1b0 = 0.1;
        dStack_1b8 = 0.04;
        fStack_16c = 0.001;
        fStack_1bc = 0.85;
        fStack_184 = 0.93;
        fStack_1c0 = 1.14;
        fStack_1c4 = 1.08;
        fStack_1d4 = 1.7;
        uVar40 = 0x41cdcd6500000000;
        dStack_178 = 1000000000.0;
        do {
          lVar18 = lStack_180;
          uVar32 = (*(long *)(lStack_168 + 0x98) - *(long *)(lStack_168 + 0x90) >> 3) *
                   -0x5555555555555555;
          if (uVar32 < uVar28 || uVar32 - uVar28 == 0) goto LAB_10aab1bd4;
          plVar23 = (long *)(*(long *)(lStack_168 + 0x90) + uVar28 * 0x18);
          lVar31 = *plVar23;
          lVar13 = plVar23[1];
          lVar33 = lVar13 - lVar31;
          uVar32 = lVar33 >> 3;
          if (uVar32 < 6) {
            uVar30 = 6 - uVar32;
            if ((ulong)(plVar23[2] - lVar13 >> 3) < uVar30) {
              uVar14 = plVar23[2] - lVar31;
              uVar17 = (long)uVar14 >> 2;
              if (uVar17 < 7) {
                uVar17 = 6;
              }
              if (0x7ffffffffffffff7 < uVar14) {
                uVar17 = 0x1fffffffffffffff;
              }
              if (uVar17 >> 0x3d != 0) {
                func_0x000109ffded8();
                goto LAB_10aab1bd4;
              }
              lVar36 = uVar17 << 3;
              __Znwm();
              lVar13 = lVar36 + lVar33;
              _bzero(lVar13,uVar30 * 8);
              lVar26 = lVar13 + uVar32 * -8;
              _memcpy(lVar26,lVar31,lVar33);
              lVar18 = lStack_180;
              *plVar23 = lVar26;
              plVar23[1] = lVar13 + uVar30 * 8;
              plVar23[2] = lVar36 + uVar17 * 8;
              if (lVar31 != 0) {
                __ZdlPv(lVar31);
              }
            }
            else {
              _bzero(lVar13,uVar30 * 8);
              lVar13 = lVar13 + uVar30 * 8;
LAB_10aab0dd0:
              plVar23[1] = lVar13;
            }
          }
          else if (lVar33 != 0x30) {
            lVar13 = lVar31 + 0x30;
            goto LAB_10aab0dd0;
          }
          uVar32 = (*(long *)(lVar18 + 0x30) - *(long *)(lVar18 + 0x28) >> 5) * -0xf0f0f0f0f0f0f0f;
          if (((uVar32 < uVar28 || uVar32 - uVar28 == 0) ||
              (lVar13 = *plStack_160, (ulong)(*plStack_158 - lVar13 >> 6) <= uVar28)) ||
             (lVar31 = *plStack_198, uVar32 = (*plStack_190 - lVar31 >> 4) * -0x5555555555555555,
             uVar32 < uVar28 || uVar32 - uVar28 == 0)) goto LAB_10aab1bd4;
          lVar36 = *(long *)(lVar18 + 0x28) + uVar28 * 0x220;
          lVar18 = lVar36 + 8;
          FUN_10a14c370(lVar18,1);
          lVar13 = lVar13 + uVar28 * 0x40;
          lVar33 = *(long *)(lVar13 + 0x10);
          uVar32 = *(long *)(lVar13 + 0x18) - lVar33;
          if (uVar32 < 0x11) goto LAB_10aab1bd4;
          uVar43 = uStack_1a0;
          fVar39 = fStack_19c;
          if ((*(byte *)(lVar33 + 0x18) & 1) == 0) {
            if (uVar32 < 0x21) goto LAB_10aab1bd4;
            fVar39 = 0.95;
            if (*(char *)(lVar33 + 0x28) == '\0') {
              fVar39 = fStack_184;
            }
            uVar43 = 0x3f966666;
          }
          lVar31 = lVar31 + uVar28 * 0x30;
          lVar26 = lVar31;
          FUN_10aab1ce8(uVar40,uVar43,uStack_1a4,lVar31,0);
          FUN_10aab1ce8(uVar40,fVar39,0x3f000000,lVar31,1);
          fVar39 = (float)uVar40;
          lVar33 = *(long *)(lVar13 + 0x10);
          uVar32 = *(long *)(lVar13 + 0x18) - lVar33;
          if (uVar32 < 0x11) goto LAB_10aab1bd4;
          if ((uint)*(byte *)(lVar33 + 0x18) == (uint)lVar26) {
            iVar22 = *(int *)(lVar33 + 0x14) + 1;
          }
          else {
            *(char *)(lVar33 + 0x18) = (char)lVar26;
            iVar22 = 1;
          }
          *(int *)(lVar33 + 0x14) = iVar22;
          if (uVar32 == 0x20) goto LAB_10aab1bd4;
          if ((uint)*(byte *)(lVar33 + 0x28) == (uint)lVar31) {
            iVar22 = *(int *)(lVar33 + 0x24) + 1;
          }
          else {
            *(char *)(lVar33 + 0x28) = (char)lVar31;
            iVar22 = 1;
          }
          *(int *)(lVar33 + 0x24) = iVar22;
          lVar13 = *plStack_160;
          if ((ulong)(*plStack_158 - lVar13 >> 6) <= uVar28) goto LAB_10aab1bd4;
          FUN_10a14c370(lVar18,0);
          lVar13 = lVar13 + uVar28 * 0x40;
          lVar31 = *(long *)(lVar13 + 0x10);
          if (*(long *)(lVar13 + 0x18) == lVar31) goto LAB_10aab1bd4;
          dVar41 = dStack_1b8;
          if (*(char *)(lVar31 + 8) == '\0') {
            dVar41 = dStack_1b0;
          }
          if ((bool)*(char *)(lVar31 + 8) == dVar41 < (double)fVar39) {
            iVar22 = *(int *)(lVar31 + 4) + 1;
          }
          else {
            *(bool *)(lVar31 + 8) = dVar41 < (double)fVar39;
            iVar22 = 1;
          }
          *(int *)(lVar31 + 4) = iVar22;
          lVar13 = *plStack_160;
          if ((((ulong)(*plStack_158 - lVar13 >> 6) <= uVar28) ||
              ((ulong)(*(long *)(lStack_168 + 0x30) - *(long *)(lStack_168 + 0x28) >> 2) <= uVar28))
             || (lVar31 = *(long *)(lStack_168 + 0x40),
                (ulong)(*(long *)(lStack_168 + 0x48) - lVar31 >> 2) <= uVar28)) goto LAB_10aab1bd4;
          fVar49 = *(float *)(*(long *)(lStack_168 + 0x28) + uVar28 * 4);
          fVar39 = *(float *)(lVar31 + uVar28 * 4);
          if (fVar39 < fStack_16c) {
            *(undefined4 *)(lVar31 + uVar28 * 4) = 0x3f800000;
          }
          FUN_10a14c370(lVar18,8);
          lVar13 = lVar13 + uVar28 * 0x40;
          lVar33 = *(long *)(lVar13 + 0x10);
          if ((ulong)(*(long *)(lVar13 + 0x18) - lVar33) < 0x41) goto LAB_10aab1bd4;
          fVar37 = fStack_184;
          if (*(char *)(lVar33 + 0x48) == '\0') {
            fVar37 = fStack_1bc;
          }
          bVar8 = fVar39 * *(float *)(lVar31 + uVar28 * 4) < fVar49 * fVar37 && fStack_16c < fVar49;
          if ((bool)*(char *)(lVar33 + 0x48) == bVar8) {
            iVar22 = *(int *)(lVar33 + 0x44) + 1;
          }
          else {
            *(bool *)(lVar33 + 0x48) = bVar8;
            iVar22 = 1;
          }
          *(int *)(lVar33 + 0x44) = iVar22;
          lVar13 = *plStack_160;
          if ((((ulong)(*plStack_158 - lVar13 >> 6) <= uVar28) ||
              ((ulong)(*(long *)(lStack_168 + 0x30) - *(long *)(lStack_168 + 0x28) >> 2) <= uVar28))
             || (lVar31 = *(long *)(lStack_168 + 0x58),
                (ulong)(*(long *)(lStack_168 + 0x60) - lVar31 >> 2) <= uVar28)) goto LAB_10aab1bd4;
          fVar49 = *(float *)(*(long *)(lStack_168 + 0x28) + uVar28 * 4);
          fVar39 = *(float *)(lVar31 + uVar28 * 4);
          if (fVar39 < fStack_16c) {
            *(undefined4 *)(lVar31 + uVar28 * 4) = 0x3f800000;
          }
          FUN_10a14c370(lVar18,8);
          lVar13 = lVar13 + uVar28 * 0x40;
          lVar33 = *(long *)(lVar13 + 0x10);
          if ((ulong)(*(long *)(lVar13 + 0x18) - lVar33) < 0x31) goto LAB_10aab1bd4;
          pfVar1 = &fStack_1c4;
          if (*(char *)(lVar33 + 0x38) == '\0') {
            pfVar1 = &fStack_1c0;
          }
          bVar8 = *(float *)(lVar31 + uVar28 * 4) * fVar49 * *pfVar1 < fVar39 && fStack_16c < fVar49
          ;
          if ((bool)*(char *)(lVar33 + 0x38) == bVar8) {
            iVar22 = *(int *)(lVar33 + 0x34) + 1;
          }
          else {
            *(bool *)(lVar33 + 0x38) = bVar8;
            iVar22 = 1;
          }
          *(int *)(lVar33 + 0x34) = iVar22;
          if (((((ulong)(*plStack_158 - *plStack_160 >> 6) <= uVar28) ||
               ((ulong)(*(long *)(lStack_168 + 0x30) - *(long *)(lStack_168 + 0x28) >> 2) <= uVar28)
               ) || (lVar13 = *(long *)(lStack_168 + 0x58),
                    (ulong)(*(long *)(lStack_168 + 0x60) - lVar13 >> 2) <= uVar28)) ||
             (lVar31 = *(long *)(lStack_168 + 0x40),
             (ulong)(*(long *)(lStack_168 + 0x48) - lVar31 >> 2) <= uVar28)) goto LAB_10aab1bd4;
          lVar33 = *plStack_160 + uVar28 * 0x40;
          lVar26 = *(long *)(lVar33 + 0x10);
          uVar32 = *(long *)(lVar33 + 0x18) - lVar26;
          if ((uVar32 < 0x31) || (uVar32 == 0x40)) goto LAB_10aab1bd4;
          lVar33 = 4;
          if (((*(byte *)(lVar26 + 0x48) | *(byte *)(lVar26 + 0x38)) & 1) != 0) {
            lVar33 = 0;
          }
          pfVar1 = (float *)(*(long *)(lStack_168 + 0x28) + uVar28 * 4);
          fVar49 = 1.0;
          fVar39 = 1.0;
          if (0.01 <= *pfVar1) {
            fVar49 = *(float *)(&UNK_10e4f2810 + lVar33);
            fVar39 = *(float *)(&UNK_10e4f2810 + lVar33) * 4.0;
          }
          fVar38 = 1.7;
          fVar37 = fStack_1d4;
          if (*(byte *)(lVar26 + 0x48) == 0) {
            fVar37 = 1.0;
          }
          fVar50 = fStack_1d4;
          if (*(byte *)(lVar26 + 0x38) == 0) {
            fVar50 = 1.0;
          }
          FUN_10a14c370(lVar18,8);
          *pfVar1 = fVar38 * fVar49 + *pfVar1 * (1.0 - fVar49);
          *(float *)(lVar13 + uVar28 * 4) =
               fVar37 * fVar39 + *(float *)(lVar13 + uVar28 * 4) * (1.0 - fVar39);
          fVar39 = fVar50 * fVar39 + *(float *)(lVar31 + uVar28 * 4) * (1.0 - fVar39);
          uVar32 = (ulong)(uint)fVar39;
          *(float *)(lVar31 + uVar28 * 4) = fVar39;
          if ((ulong)(*plStack_158 - *plStack_160 >> 6) <= uVar28) goto LAB_10aab1bd4;
          lVar13 = 0;
          lVar31 = *plStack_160 + uVar28 * 0x40;
          do {
            lVar11 = lVar18;
            FUN_10a14c370(lVar18,*(undefined4 *)(&UNK_10e4f2858 + lVar13));
            lVar26 = lStack_168;
            lVar33 = *(long *)(lVar31 + 0x10);
            if ((ulong)(*(long *)(lVar31 + 0x18) - lVar33 >> 4) <=
                (ulong)(long)*(int *)(&UNK_10e4f2858 + lVar13)) goto LAB_10aab1bd4;
            lVar33 = lVar33 + (long)*(int *)(&UNK_10e4f2858 + lVar13) * 0x10;
            fVar39 = 0.022;
            if (*(char *)(lVar33 + 8) == '\0') {
              fVar39 = 0.015;
            }
            fVar49 = (float)uVar32;
            if ((bool)*(char *)(lVar33 + 8) == fVar49 < fVar39) {
              iVar22 = *(int *)(lVar33 + 4) + 1;
            }
            else {
              *(bool *)(lVar33 + 8) = fVar49 < fVar39;
              iVar22 = 1;
            }
            *(int *)(lVar33 + 4) = iVar22;
            fVar39 = 1.0;
            if ((0.015 <= fVar49) && (fVar39 = 0.0, fVar49 < 0.022)) {
              uVar32 = (ulong)(uint)(fVar49 + -0.022);
              fVar39 = (fVar49 + -0.022) / -0.007;
            }
            *(float *)(lVar33 + 0xc) = fVar39;
            lVar13 = lVar13 + 4;
          } while (lVar13 != 0xc);
          lVar18 = *plStack_160;
          if ((((ulong)(*plStack_158 - lVar18 >> 6) <= uVar28) ||
              (uVar32 = (*(long *)(lStack_168 + 0x80) - *(long *)(lStack_168 + 0x78) >> 4) *
                        -0x5555555555555555, uVar32 < uVar28 || uVar32 - uVar28 == 0)) ||
             (lVar13 = *(long *)(lStack_168 + 0x90),
             uVar32 = (*(long *)(lStack_168 + 0x98) - lVar13 >> 3) * -0x5555555555555555,
             uVar32 < uVar28 || uVar32 - uVar28 == 0)) goto LAB_10aab1bd4;
          puVar29 = (undefined8 *)(*(long *)(lStack_168 + 0x78) + uVar28 * 0x30);
          __ZNSt3__16chrono12steady_clock3nowEv();
          dVar51 = (double)(lVar11 - *(long *)(lVar26 + 0x70)) / dStack_178;
          ppppppuStack_150 =
               (undefined ******)
               ((double)ABS(*(float *)(lVar36 + 0x124) - *(float *)((long)puVar29 + 0xc)) /
               (dVar51 * (double)(int)param_3));
          ppppppuStack_148 =
               (undefined ******)
               ((double)ABS(*(float *)(lVar36 + 0x134) - *(float *)((long)puVar29 + 0x1c)) /
               (dVar51 * (double)(int)((ulong)param_3 >> 0x20)));
          fVar39 = (float)*(undefined8 *)(lVar36 + 0x118);
          fVar37 = (float)*puVar29;
          fVar49 = (float)((ulong)*(undefined8 *)(lVar36 + 0x118) >> 0x20);
          fVar38 = (float)((ulong)*puVar29 >> 0x20);
          fVar39 = SQRT(fVar39 * fVar39 + fVar49 * fVar49 +
                        *(float *)(lVar36 + 0x120) * *(float *)(lVar36 + 0x120)) /
                   SQRT(fVar37 * fVar37 + fVar38 * fVar38 +
                        *(float *)(puVar29 + 1) * *(float *)(puVar29 + 1));
          dVar44 = (double)fVar39;
          dVar46 = 1.0 / dVar44;
          dVar41 = dVar46;
          if (1.0 <= fVar39) {
            dVar41 = dVar44;
          }
          fVar38 = 0.0;
          pppppppuVar10 = (undefined *******)((dVar41 + -1.0) / dVar51);
          uStack_140 = pppppppuVar10;
          func_0x0001096dc9c0(lVar36 + 0x118);
          fVar39 = SUB84(pppppppuVar10,0);
          fVar49 = fVar38;
          fVar37 = SUB84(dVar46,0);
          func_0x0001096dc9c0(puVar29);
          lVar31 = 0;
          lVar18 = lVar18 + uVar28 * 0x40;
          do {
            fVar50 = SUB84(pppppppuVar10,0) - fVar39;
            if (((int)lVar31 != 2) && (fVar50 = SUB84(dVar46,0) - fVar37, (int)lVar31 == 1)) {
              fVar50 = fVar38 - fVar49;
            }
            dVar44 = (double)ABS(fVar50);
            dVar41 = 6.283185307179586 - dVar44;
            if (dVar44 <= 3.141592653589793) {
              dVar41 = dVar44;
            }
            (&ppppppuStack_138)[lVar31] = (undefined ******)(dVar41 / dVar51);
            lVar31 = lVar31 + 1;
          } while (lVar31 != 3);
          uVar32 = 0;
          plVar23 = (long *)(lVar13 + uVar28 * 0x18);
          uStack_d8 = 0x3fd6666666666666;
          puStack_e0 = (undefined8 *)0x3fd6666666666666;
          uStack_c8 = 0x3ffccccccccccccd;
          uStack_d0 = 0x3fe999999999999a;
          uStack_b8 = 0x3ffccccccccccccd;
          uStack_c0 = 0x4000000000000000;
          uStack_108 = 0x3fbeb851eb851eb8;
          puStack_110 = (undefined8 *)0x3fbeb851eb851eb8;
          uStack_f8 = 0x3fe999999999999a;
          uStack_100 = 0x3fc999999999999a;
          uStack_e8 = 0x3fe999999999999a;
          uStack_f0 = 0x3fe999999999999a;
          lVar13 = *(long *)(lVar18 + 0x10);
          uVar14 = *(long *)(lVar18 + 0x18) - lVar13 >> 4;
          lVar18 = *plVar23;
          uVar17 = plVar23[1] - lVar18 >> 3;
          uVar30 = 0;
          if (7 < uVar14) {
            uVar30 = uVar14 - 8;
          }
          piVar21 = (int *)(lVar13 + 0x84);
          do {
            if (uVar30 == uVar32) goto LAB_10aab1bd4;
            bVar5 = *(byte *)(piVar21 + 1);
            ppuVar3 = &puStack_110;
            if (bVar5 == 0) {
              ppuVar3 = &puStack_e0;
            }
            if ((double)(&ppppppuStack_150)[uVar32] <= (double)ppuVar3[uVar32]) {
              if (uVar17 <= uVar32) goto LAB_10aab1bd4;
              if ((double)(lVar11 - *(long *)(lVar18 + uVar32 * 8)) / dStack_178 <= 0.17) {
                if ((bVar5 & 1) == 0) goto LAB_10aab15d4;
              }
              else if (bVar5 != 0) {
                *(undefined1 *)(piVar21 + 1) = 0;
                iVar22 = 1;
                goto LAB_10aab15dc;
              }
LAB_10aab15c8:
              iVar22 = *piVar21 + 1;
            }
            else {
              if (uVar17 <= uVar32) goto LAB_10aab1bd4;
              *(long *)(lVar18 + uVar32 * 8) = lVar11;
              if ((bVar5 & 1) != 0) goto LAB_10aab15c8;
LAB_10aab15d4:
              iVar22 = 1;
              *(undefined1 *)(piVar21 + 1) = 1;
            }
LAB_10aab15dc:
            *piVar21 = iVar22;
            uVar32 = uVar32 + 1;
            piVar21 = piVar21 + 4;
          } while (uVar32 != 6);
          if ((ulong)(*plStack_158 - *plStack_160 >> 6) <= uVar28) goto LAB_10aab1bd4;
          pppppppuVar4 = (undefined *******)(*plStack_160 + uVar28 * 0x40);
          FUN_10a042718(pppppppuVar4 + 5);
          ppppppuVar16 = pppppppuVar4[2];
          ppppppuVar20 = pppppppuVar4[3];
          if (ppppppuVar20 == ppppppuVar16) goto LAB_10aab1bd4;
          if ((*(char *)(ppppppuVar16 + 1) == '\x01') && (*(int *)((long)ppppppuVar16 + 4) == 1)) {
            func_0x000107c2b054(&ppppppuStack_150,&UNK_10f63ed44);
            FUN_10a059fa0(pppppppuVar4 + 5,&ppppppuStack_150);
            if ((long)uStack_140 < 0) {
              __ZdlPv(ppppppuStack_150);
            }
            ppppppuVar16 = pppppppuVar4[2];
            ppppppuVar20 = pppppppuVar4[3];
          }
          if (ppppppuVar20 == ppppppuVar16) goto LAB_10aab1bd4;
          if ((((ulong)ppppppuVar16[1] & 1) == 0) && (*(int *)((long)ppppppuVar16 + 4) == 1)) {
            func_0x000107c2b054(&ppppppuStack_150,&UNK_10f63ed57);
            FUN_10a059fa0(pppppppuVar4 + 5,&ppppppuStack_150);
            if ((long)uStack_140 < 0) {
              __ZdlPv(ppppppuStack_150);
            }
            ppppppuVar16 = pppppppuVar4[2];
            ppppppuVar20 = pppppppuVar4[3];
          }
          if ((ulong)((long)ppppppuVar20 - (long)ppppppuVar16) < 0x11) goto LAB_10aab1bd4;
          if ((*(char *)(ppppppuVar16 + 3) == '\x01') && (*(int *)((long)ppppppuVar16 + 0x14) == 1))
          {
            func_0x000107c2b054(&ppppppuStack_150,&UNK_10f63ed6a);
            FUN_10a059fa0(pppppppuVar4 + 5,&ppppppuStack_150);
            if ((long)uStack_140 < 0) {
              __ZdlPv(ppppppuStack_150);
            }
          }
          pppppppuVar10 = pppppppuVar4;
          FUN_10a685260();
          if (((ulong)pppppppuVar10 >> 0x20 & 1) != 0) {
            func_0x000107c2b054(&ppppppuStack_150,&UNK_10f68da6a);
            pppppppuVar10 = pppppppuVar4 + 5;
            FUN_10a059fa0(pppppppuVar10,&ppppppuStack_150);
            if ((long)uStack_140 < 0) {
              pppppppuVar10 = (undefined *******)ppppppuStack_150;
              __ZdlPv();
            }
          }
          ppppppuVar16 = pppppppuVar4[2];
          if ((ulong)((long)pppppppuVar4[3] - (long)ppppppuVar16) < 0x21) goto LAB_10aab1bd4;
          if ((((ulong)ppppppuVar16[5] & 1) != 0) && (*(int *)((long)ppppppuVar16 + 0x24) == 1)) {
            func_0x000107c2b054(&ppppppuStack_150,&UNK_10f68da88);
            pppppppuVar10 = pppppppuVar4 + 5;
            FUN_10a059fa0(pppppppuVar10,&ppppppuStack_150);
            if ((long)uStack_140 < 0) {
              pppppppuVar10 = (undefined *******)ppppppuStack_150;
              __ZdlPv();
            }
          }
          lVar18 = 0;
          uVar32 = 0;
          do {
            if ((ulong)((long)pppppppuVar4[3] - (long)pppppppuVar4[2] >> 4) <= uVar32)
            goto LAB_10aab1bd4;
            puVar2 = (uint *)((long)pppppppuVar4[2] + lVar18);
            if ((char)puVar2[2] == '\x01') {
              if (puVar2[1] == 1) {
                uVar30 = (ulong)*puVar2;
                pppppppuVar10 = (undefined *******)0x1;
                FUN_10a14b664(uVar30);
                if (pppppppuVar10 < (undefined *******)0x7ffffffffffffff8) {
                  if (pppppppuVar10 < (undefined *******)0x17) {
                    uStack_140 = (undefined *******)
                                 CONCAT17((char)pppppppuVar10,(undefined7)uStack_140);
                    pppppppuVar12 = &ppppppuStack_150;
                    if (pppppppuVar10 != (undefined *******)0x0) goto LAB_10aab1864;
                  }
                  else {
                    pppppppuVar35 = (undefined *******)0x19;
                    if (((ulong)pppppppuVar10 | 7) != 0x17) {
                      pppppppuVar35 = (undefined *******)(((ulong)pppppppuVar10 | 7) + 1);
                    }
                    pppppppuVar12 = pppppppuVar35;
                    __Znwm();
                    uStack_140 = (undefined *******)((ulong)pppppppuVar35 | 0x8000000000000000);
                    ppppppuStack_150 = (undefined ******)pppppppuVar12;
                    ppppppuStack_148 = (undefined ******)pppppppuVar10;
LAB_10aab1864:
                    _memmove(pppppppuVar12,uVar30,pppppppuVar10);
                  }
                  *(undefined1 *)((long)pppppppuVar12 + (long)pppppppuVar10) = 0;
                  pppppppuVar10 = pppppppuVar4 + 5;
                  FUN_10a0b4ec0(pppppppuVar10,&ppppppuStack_150);
                  goto LAB_10aab18d0;
                }
                func_0x000109ffde50();
                goto LAB_10aab1bd4;
              }
            }
            else {
              if (puVar2[1] != 1) goto LAB_10aab18e0;
              uVar30 = (ulong)*puVar2;
              pppppppuVar10 = (undefined *******)0x0;
              FUN_10a14b664(uVar30);
              if ((undefined *******)0x7ffffffffffffff7 < pppppppuVar10) {
                func_0x000109ffde50();
                goto LAB_10aab1bd4;
              }
              if (pppppppuVar10 < (undefined *******)0x17) {
                uStack_140 = (undefined *******)CONCAT17((char)pppppppuVar10,(undefined7)uStack_140)
                ;
                pppppppuVar12 = &ppppppuStack_150;
                if (pppppppuVar10 != (undefined *******)0x0) goto LAB_10aab18b0;
              }
              else {
                pppppppuVar35 = (undefined *******)0x19;
                if (((ulong)pppppppuVar10 | 7) != 0x17) {
                  pppppppuVar35 = (undefined *******)(((ulong)pppppppuVar10 | 7) + 1);
                }
                pppppppuVar12 = pppppppuVar35;
                __Znwm();
                uStack_140 = (undefined *******)((ulong)pppppppuVar35 | 0x8000000000000000);
                ppppppuStack_150 = (undefined ******)pppppppuVar12;
                ppppppuStack_148 = (undefined ******)pppppppuVar10;
LAB_10aab18b0:
                _memmove(pppppppuVar12,uVar30,pppppppuVar10);
              }
              *(undefined1 *)((long)pppppppuVar12 + (long)pppppppuVar10) = 0;
              pppppppuVar10 = pppppppuVar4 + 5;
              FUN_10a0b4ec0(pppppppuVar10,&ppppppuStack_150);
LAB_10aab18d0:
              if ((long)uStack_140 < 0) {
                pppppppuVar10 = (undefined *******)ppppppuStack_150;
                __ZdlPv();
              }
            }
LAB_10aab18e0:
            uVar32 = uVar32 + 1;
            lVar18 = lVar18 + 0x10;
          } while (uVar32 != 0x11);
          if ((ulong)(*plStack_158 - *plStack_160 >> 6) <= uVar28) goto LAB_10aab1bd4;
          lVar18 = *plStack_160 + uVar28 * 0x40;
          *(undefined1 *)(lVar36 + 0x150) = *(undefined1 *)(lVar18 + 8);
          if (lVar36 + 0x148 != lVar18) {
            func_0x00010a14def0(lVar36 + 0x158,*(long *)(lVar18 + 0x10),*(long *)(lVar18 + 0x18),
                                *(long *)(lVar18 + 0x18) - *(long *)(lVar18 + 0x10) >> 4);
            pppppppuVar10 = (undefined *******)(lVar36 + 0x170);
            FUN_10a105cdc();
          }
          uVar32 = (*(long *)(lStack_168 + 0x80) - *(long *)(lStack_168 + 0x78) >> 4) *
                   -0x5555555555555555;
          if (uVar32 < uVar28 || uVar32 - uVar28 == 0) goto LAB_10aab1bd4;
          puVar29 = (undefined8 *)(*(long *)(lStack_168 + 0x78) + uVar28 * 0x30);
          uVar42 = *(undefined8 *)(lVar36 + 0x120);
          uVar40 = *(undefined8 *)(lVar36 + 0x118);
          uVar45 = *(undefined8 *)(lVar36 + 0x128);
          uVar48 = *(undefined8 *)(lVar36 + 0x140);
          uVar47 = *(undefined8 *)(lVar36 + 0x138);
          puVar29[3] = *(undefined8 *)(lVar36 + 0x130);
          puVar29[2] = uVar45;
          puVar29[5] = uVar48;
          puVar29[4] = uVar47;
          puVar29[1] = uVar42;
          *puVar29 = uVar40;
          uVar28 = uVar28 + 1;
          lVar18 = *(long *)(lStack_180 + 0x28);
          lVar13 = *(long *)(lStack_180 + 0x30);
          uVar32 = (lVar13 - lVar18 >> 5) * -0xf0f0f0f0f0f0f0f;
        } while (uVar28 <= uVar32 && uVar32 - uVar28 != 0);
      }
      if (lVar18 == lVar13) goto LAB_10aab1bd4;
      *(undefined1 *)(lStack_180 + 0x70) = *(undefined1 *)(lVar18 + 0x150);
      if (lStack_180 + 0x68 != lVar18 + 0x148) {
        func_0x00010a14def0(lStack_180 + 0x78,*(long *)(lVar18 + 0x158),*(long *)(lVar18 + 0x160),
                            *(long *)(lVar18 + 0x160) - *(long *)(lVar18 + 0x158) >> 4);
        pppppppuVar10 = (undefined *******)(lStack_180 + 0x90);
        FUN_10a105cdc();
      }
      lVar18 = lStack_168;
      lVar31 = lStack_180;
      *(int *)(lStack_168 + 8) = *(int *)(lStack_168 + 8) + 1;
      lVar13 = *(long *)(lStack_168 + 0xa8);
      if (*(long *)(lStack_168 + 0xb0) != lVar13) {
        lVar33 = 0;
        uVar28 = 0;
        do {
          ppppppuStack_150 = *(undefined *******)(lVar13 + lVar33);
          (**(code **)(((undefined8 *)(lVar13 + lVar33))[1] + 0x18))(&ppppppuStack_148);
          lVar13 = *(long *)(lVar31 + 0x78);
          lVar36 = *(long *)(lVar31 + 0x80);
          if (lVar36 == lVar13) goto LAB_10aab1bd4;
          if ((*(char *)(lVar13 + 8) == '\x01') && (*(int *)(lVar13 + 4) == 1)) {
            (*(code *)ppppppuStack_150)(1,&ppppppuStack_150);
            lVar13 = *(long *)(lVar31 + 0x78);
            lVar36 = *(long *)(lVar31 + 0x80);
          }
          if (lVar36 == lVar13) goto LAB_10aab1bd4;
          if (((*(byte *)(lVar13 + 8) & 1) == 0) && (*(int *)(lVar13 + 4) == 1)) {
            (*(code *)ppppppuStack_150)(2,&ppppppuStack_150);
            lVar13 = *(long *)(lVar31 + 0x78);
            lVar36 = *(long *)(lVar31 + 0x80);
          }
          if ((ulong)(lVar36 - lVar13) < 0x11) goto LAB_10aab1bd4;
          if ((*(char *)(lVar13 + 0x18) == '\x01') && (*(int *)(lVar13 + 0x14) == 1)) {
            (*(code *)ppppppuStack_150)(3,&ppppppuStack_150);
          }
          pppppppuVar10 = &ppppppuStack_148;
          (*(code *)*ppppppuStack_148)();
          uVar28 = uVar28 + 1;
          lVar13 = *(long *)(lVar18 + 0xa8);
          lVar33 = lVar33 + 0x40;
        } while (uVar28 < (ulong)(*(long *)(lVar18 + 0xb0) - lVar13 >> 6));
      }
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(undefined ********)(lVar18 + 0x70) = pppppppuVar10;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (uVar32 <= (ulong)((*(long *)(lVar18 + 0x88) - (long)puVar15 >> 4) * -0x5555555555555555)) {
      puVar19 = puVar15 + uVar32 * 0xc;
      lVar13 = (long)iVar27 * 0x30 + lVar31 * -0x10;
      do {
        *(undefined8 *)(puVar15 + 7) = 0;
        *(undefined8 *)(puVar15 + 5) = 0;
        *(undefined8 *)(puVar15 + 10) = 0;
        *(undefined8 *)(puVar15 + 8) = 0;
        *(undefined8 *)(puVar15 + 3) = 0;
        *(undefined8 *)(puVar15 + 1) = 0;
        *puVar15 = 0x3f800000;
        puVar15[5] = 0x3f800000;
        puVar15[10] = 0x3f800000;
        puVar15 = puVar15 + 0xc;
        lVar13 = lVar13 + -0x30;
      } while (lVar13 != 0);
      *(undefined4 **)(lVar18 + 0x80) = puVar19;
      goto LAB_10aab0a58;
    }
    if (uVar28 < 0x555555555555556) {
      lVar18 = *(long *)(lVar18 + 0x88) - lVar13 >> 4;
      uVar30 = lVar18 * 0x5555555555555556;
      if (uVar30 < uVar28 || uVar30 - uVar28 == 0) {
        uVar30 = uVar28;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar18 * -0x5555555555555555)) {
        uVar30 = 0x555555555555555;
      }
      if (0x555555555555555 < uVar30) {
        func_0x000109ffded8();
        goto LAB_10aab1bd4;
      }
      lVar36 = uVar30 * 0x30;
      __Znwm();
      puVar19 = (undefined4 *)(lVar36 + lVar33);
      lVar18 = (long)iVar27 * 0x30 + lVar31 * -0x10;
      puVar15 = puVar19;
      do {
        *(undefined8 *)(puVar15 + 7) = 0;
        *(undefined8 *)(puVar15 + 5) = 0;
        *(undefined8 *)(puVar15 + 10) = 0;
        *(undefined8 *)(puVar15 + 8) = 0;
        *(undefined8 *)(puVar15 + 3) = 0;
        *(undefined8 *)(puVar15 + 1) = 0;
        *puVar15 = 0x3f800000;
        puVar15[5] = 0x3f800000;
        puVar15[10] = 0x3f800000;
        puVar15 = puVar15 + 0xc;
        lVar18 = lVar18 + -0x30;
      } while (lVar18 != 0);
      _memcpy((long)puVar19 - lVar33,lVar13,lVar33);
      lVar18 = lStack_168;
      *(long *)(lStack_168 + 0x78) = (long)puVar19 - lVar33;
      *(undefined4 **)(lStack_168 + 0x80) = puVar19 + uVar32 * 0xc;
      *(ulong *)(lStack_168 + 0x88) = lVar36 + uVar30 * 0x30;
      if (lVar13 != 0) {
        __ZdlPv(lVar13);
      }
      goto LAB_10aab0a58;
    }
  }
  FUN_10aad42a0();
LAB_10aab1bd4:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10aab1bd8);
  (*pcVar7)();
}



/* Entry: 10aab1c58; end: 10aab1ce7;  */

void FUN_10aab1c58(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0xc0);
  puVar4 = *(undefined8 **)(param_1 + 200);
  while (puVar4 != puVar1) {
    puVar4 = puVar4 + -8;
    (**(code **)*puVar4)(puVar4);
  }
  *(undefined8 **)(param_1 + 200) = puVar1;
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  while (lVar3 != lVar2) {
    lVar3 = lVar3 + -0x30;
    FUN_10aad4208();
  }
  *(long *)(param_1 + 0x18) = lVar2;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x40);
  return;
}



/* Entry: 10aab1ce8; end: 10aab1ef3;  */

bool FUN_10aab1ce8(float param_1,float param_2,float param_3,long param_4,int param_5)

{
  undefined4 *puVar1;
  long lVar2;
  bool bVar3;
  float fVar4;
  code *pcVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long *plVar13;
  undefined4 *puVar14;
  float fVar15;
  long lStack_80;
  undefined4 *puStack_78;
  undefined8 uStack_70;
  float afStack_68 [2];
  
  afStack_68[0] = param_1;
  func_0x00010959be90(param_4,afStack_68);
  lVar2 = *(long *)(param_4 + 8);
  if (*(long *)(param_4 + 0x10) == lVar2) {
    lStack_80 = 0;
    puStack_78 = (undefined4 *)0x0;
    uStack_70 = 0;
  }
  else {
    uVar10 = *(ulong *)(param_4 + 0x20);
    uVar7 = uVar10 >> 7 & 0x1fffffffffffff8;
    plVar13 = (long *)(lVar2 + uVar7);
    puVar6 = (undefined4 *)(*plVar13 + (uVar10 & 0x3ff) * 4);
    uVar9 = *(long *)(param_4 + 0x28) + uVar10;
    uVar11 = uVar9 >> 7 & 0x1fffffffffffff8;
    uVar9 = uVar9 & 0x3ff;
    puStack_78 = (undefined4 *)0x0;
    uStack_70 = 0;
    puVar1 = (undefined4 *)(*(long *)(lVar2 + uVar11) + uVar9 * 4);
    lStack_80 = 0;
    if ((puVar1 != puVar6) &&
       (lVar2 = (uVar9 | (uVar11 - uVar7) * 0x80) - (uVar10 & 0x3ff), lVar2 != 0)) {
      FUN_10a0ca600(&lStack_80,lVar2);
      puVar8 = (undefined4 *)*plVar13;
      do {
        puVar14 = puVar6 + 1;
        *puStack_78 = *puVar6;
        puVar6 = puVar14;
        if ((long)puVar14 - (long)puVar8 == 0x1000) {
          plVar13 = plVar13 + 1;
          puVar8 = (undefined4 *)*plVar13;
          puVar6 = puVar8;
        }
        puStack_78 = puStack_78 + 1;
      } while (puVar6 != puVar1);
    }
  }
  iVar12 = (int)(param_3 * (float)*(ulong *)(param_4 + 0x28));
  puVar6 = (undefined4 *)(lStack_80 + (long)iVar12 * 4);
  if (puVar6 != puStack_78) {
    FUN_10a001d40();
    puVar6 = puStack_78;
  }
  if ((ulong)((long)puVar6 - lStack_80 >> 2) <= (ulong)(long)iVar12) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10aab1ed4);
    (*pcVar5)();
  }
  fVar15 = *(float *)(lStack_80 + (long)iVar12 * 4);
  uVar9 = *(ulong *)(param_4 + 0x28);
  if (0x3c < uVar9) {
    do {
      uVar9 = uVar9 - 1;
      uVar7 = *(long *)(param_4 + 0x20) + 1;
      *(ulong *)(param_4 + 0x20) = uVar7;
      *(ulong *)(param_4 + 0x28) = uVar9;
      if (0x7ff < uVar7) {
        __ZdlPv(**(undefined8 **)(param_4 + 8));
        *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 8;
        uVar9 = *(ulong *)(param_4 + 0x28);
        *(long *)(param_4 + 0x20) = *(long *)(param_4 + 0x20) + -0x400;
      }
    } while (0x3c < uVar9);
    if (lStack_80 == 0) goto LAB_10aab1e98;
  }
  fVar4 = afStack_68[0];
  puStack_78 = (undefined4 *)lStack_80;
  __ZdlPv();
  afStack_68[0] = fVar4;
LAB_10aab1e98:
  afStack_68[0] = afStack_68[0] / fVar15;
  bVar3 = afStack_68[0] < param_2;
  if (param_5 == 0) {
    bVar3 = afStack_68[0] != param_2 && afStack_68[0] >= param_2;
  }
  return bVar3;
}



/* Entry: 10aab1ef4; end: 10aab22a3;  */

long * FUN_10aab1ef4(long *param_1,uint param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = (long)&PTR_FUN_110c42ca0;
  plVar7 = param_1 + 1;
  *plVar7 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined2 *)((long)param_1 + 0x24) = 0x101;
  *(undefined1 *)((long)param_1 + 0x26) = 2;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  param_1[2] = 0;
  param_1[3] = -0xc2560419;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  lVar8 = param_4[1];
  lVar10 = *param_4;
  param_1[0x1c] = param_4[1];
  param_1[0x1b] = lVar10;
  if (lVar8 != 0) {
    plVar5 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_c0 = (undefined8 *)0x0;
  plStack_b8 = (long *)0x0;
  plVar5 = param_3;
  (**(code **)(*param_3 + 0x18))();
  plStack_b0 = param_3;
  if (plVar5 == (long *)0x0) {
    puVar4 = (undefined8 *)0xd0;
    __Znwm();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_DAT_110ae90f0;
    puVar9 = puVar4 + 3;
    plStack_a8 = (long *)&UNK_1053a6a3c;
    ppuStack_a0 = &PTR_DAT_110ae9180;
    func_0x000109d18d1c(puVar9,&UNK_10f68da9d,0x1e,&plStack_b0);
  }
  else {
    (**(code **)(*param_3 + 0x18))(param_3);
    puVar4 = (undefined8 *)0xd0;
    __Znwm();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_DAT_110ae90f0;
    puVar9 = puVar4 + 3;
    plStack_a8 = (long *)&UNK_1053a6a3c;
    ppuStack_a0 = &PTR_DAT_110ae9180;
    func_0x000109d18e28(puVar9,&UNK_10f68da9d,0x1e,&plStack_b0,param_3 + 7);
  }
  func_0x0001092ba41c(&plStack_b0);
  *(undefined4 *)((long)param_1 + 0x14) = 1;
  if (*(char *)((long)param_1 + 0x24) != '\0') {
    *(undefined1 *)((long)param_1 + 0x24) = 0;
  }
  if (*(char *)((long)param_1 + 0x25) != '\0') {
    *(undefined1 *)((long)param_1 + 0x25) = 0;
  }
  if (param_2 < *(byte *)((long)param_1 + 0x26)) {
    *(char *)((long)param_1 + 0x26) = (char)param_2;
  }
  plVar5 = (long *)0x68;
  puStack_c0 = puVar9;
  plStack_b8 = puVar4;
  __Znwm();
  *plVar5 = (long)puVar9;
  plVar5[1] = (long)puVar4;
  plVar5[3] = 0;
  plVar5[2] = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  puStack_c0 = (undefined8 *)0x0;
  plStack_b8 = (long *)0x0;
  lVar8 = *param_4;
  plVar5[7] = param_4[1];
  plVar5[6] = lVar8;
  if (param_4[1] != 0) {
    plVar1 = (long *)(param_4[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5[9] = 0;
  *(char *)(plVar5 + 8) = (char)param_2;
  *(undefined1 *)((long)plVar5 + 0x41) = 0;
  plVar5[10] = 0;
  FUN_10ad008d8(plVar5 + 0xb);
  FUN_10a235640(&plStack_b0,plVar5);
  uVar6 = 0x220;
  __Znwm(0x220);
  FUN_10aac68ac();
  func_0x00010a26dc64(plVar7,uVar6);
  plVar5 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
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
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar7 = plVar5;
    }
  }
  plVar5 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar1 = plStack_b8 + 1;
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
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      plVar7 = plVar5;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010a061620(&puStack_c0);
  func_0x00010a23495c(param_1 + 0x1b);
  FUN_10aade53c(param_1 + 0x19);
  FUN_10a26dcbc(param_1 + 2);
  func_0x00010a26dc64(plVar5,0);
  __Unwind_Resume();
  plStack_e0 = plVar5;
  pcStack_c8 = FUN_10aab22a4;
  *plVar7 = (long)&PTR_FUN_110c42ca0;
  plStack_d8 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010a23495c(plVar7 + 0x1b);
  FUN_10aade53c(plVar7 + 0x19);
  plStack_e8 = plVar7 + 0x16;
  FUN_10a22d224(&plStack_e8);
  FUN_10a22ce48(plVar7 + 9);
  if (((char)plVar7[8] == '\x01') && (plVar7[5] != 0)) {
    plVar7[6] = plVar7[5];
    __ZdlPv();
  }
  func_0x00010a26dc64(plVar7 + 1,0);
  return plVar7;
}



/* Entry: 10aab22a4; end: 10aab2323;  */

undefined8 * FUN_10aab22a4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c42ca0;
  func_0x00010a23495c(param_1 + 0x1b);
  FUN_10aade53c(param_1 + 0x19);
  puStack_28 = param_1 + 0x16;
  FUN_10a22d224(&puStack_28);
  FUN_10a22ce48(param_1 + 9);
  if ((*(char *)(param_1 + 8) == '\x01') && (param_1[5] != 0)) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  func_0x00010a26dc64(param_1 + 1,0);
  return param_1;
}



/* Entry: 10aab2324; end: 10aab2327;  */

undefined8 * FUN_10aab2324(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c42ca0;
  func_0x00010a23495c(param_1 + 0x1b);
  FUN_10aade53c(param_1 + 0x19);
  puStack_28 = param_1 + 0x16;
  FUN_10a22d224(&puStack_28);
  FUN_10a22ce48(param_1 + 9);
  if ((*(char *)(param_1 + 8) == '\x01') && (param_1[5] != 0)) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  func_0x00010a26dc64(param_1 + 1,0);
  return param_1;
}



/* Entry: 10aab2328; end: 10aab233b;  */

void FUN_10aab2328(void)

{
  FUN_10aab22a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aab233c; end: 10aab25d3;  */

void FUN_10aab233c(undefined8 param_1,long param_2,ulong *param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  long lStack_bc;
  ulong uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  uStack_138 = param_3[1];
  uStack_140 = *param_3;
  uStack_128 = param_3[3];
  uStack_130 = param_3[2];
  iVar3 = *(int *)((long)param_3 + 4);
  uStack_100 = (ulong)&uStack_140 | 8;
  uStack_118 = param_3[5];
  uStack_120 = param_3[4];
  uStack_108 = param_3[7];
  uStack_110 = param_3[6];
  uStack_f0 = 0;
  uStack_e8 = 0;
  if (param_3[7] != 0) {
    piVar1 = (int *)(param_3[7] + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    iVar3 = *(int *)((long)param_3 + 4);
  }
  puStack_f8 = &uStack_f0;
  if (iVar3 < 3) {
    uStack_f0 = *(undefined8 *)param_3[9];
    uStack_e8 = ((undefined8 *)param_3[9])[1];
  }
  else {
    uStack_140 = uStack_140 & 0xffffffff;
    func_0x000109a84868(&uStack_140);
  }
  FUN_10a0f3c50(&plStack_d8,&uStack_140,0,0xffffffff);
  if (uStack_108 != 0) {
    piVar1 = (int *)(uStack_108 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_140);
    }
  }
  uStack_108 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (0 < uStack_140._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(uStack_100 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_140._4_4_);
  }
  if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
    _free(puStack_f8[-1]);
  }
  plVar6 = plStack_d8;
  lStack_bc = plStack_d8[2];
  bVar5 = (int)((ulong)lStack_bc >> 0x20) < (int)lStack_bc;
  uStack_b4 = CONCAT44(-(uint)((int)((uint)bVar5 << 0x1f) < 0),
                       -(uint)((int)((uint)bVar5 << 0x1f) < 0)) & 0xfdf00000fdf00000 ^
              0x42700000bf800000;
  uStack_a4 = 0x7fc000007fc00000;
  uStack_ac = 0xbf800000bf800000;
  uStack_94 = 0;
  uStack_9c = 0x3f800000;
  uStack_84 = 0;
  uStack_8c = 0x3f80000000000000;
  uStack_74 = 0x3f800000;
  uStack_7c = 0;
  uStack_64 = 0x3f80000000000000;
  uStack_6c = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_c0 = 1;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  FUN_10a0ec8a8(&uStack_c0);
  uStack_c0 = 0;
  FUN_10aab25d4(*(undefined8 *)(param_2 + 8),&uStack_c0);
  uStack_d0 = 0;
  uStack_c8 = 0;
  FUN_10aab2844(param_1,*(undefined8 *)(param_2 + 8),plVar6,plVar6,0,&uStack_d0,0,param_2 + 0x10);
  plVar6 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_d8;
  plStack_d8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  return;
}



/* Entry: 10aab25d4; end: 10aab2843;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10aab25d4(long param_1,int *param_2,undefined8 param_3,long param_4,long param_5,
                  long *param_6,undefined ********param_7,undefined *******param_8)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  byte bVar10;
  undefined *puVar11;
  undefined *******pppppppuVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined ********ppppppppuVar22;
  undefined **ppuVar23;
  undefined8 *puVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  long *plVar27;
  undefined ********ppppppppuVar28;
  undefined ********ppppppppuVar29;
  undefined ********ppppppppuVar30;
  undefined ********ppppppppuVar31;
  undefined ********ppppppppuVar32;
  char *pcVar33;
  undefined8 *puVar34;
  undefined8 uVar35;
  undefined ******ppppppuVar36;
  ulong uVar37;
  long lVar38;
  undefined ****ppppuVar39;
  char *pcVar40;
  long lVar41;
  ulong uVar42;
  undefined *******pppppppuVar43;
  int *piVar44;
  uint uVar45;
  int iVar46;
  uint uVar47;
  char cVar48;
  byte bVar49;
  int iVar50;
  undefined *******pppppppuVar51;
  long lVar52;
  undefined *******pppppppuVar53;
  undefined *******pppppppuVar54;
  undefined *****pppppuVar55;
  undefined ********ppppppppuVar56;
  long *plVar57;
  undefined1 uVar58;
  int iVar59;
  ulong uVar60;
  undefined *******pppppppuVar61;
  undefined ******ppppppuVar62;
  undefined *******pppppppuVar63;
  undefined *******pppppppuVar64;
  undefined *******pppppppuVar65;
  undefined8 uVar66;
  float fVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  float fVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  double dVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  int iStack_824;
  uint uStack_810;
  undefined *******pppppppuStack_7d0;
  long lStack_7a0;
  long lStack_798;
  undefined1 auStack_790 [96];
  undefined **appuStack_730 [2];
  long lStack_720;
  long lStack_718;
  undefined4 uStack_708;
  int iStack_704;
  undefined4 uStack_700;
  uint uStack_6fc;
  undefined4 uStack_6f8;
  undefined8 uStack_6f4;
  byte bStack_6ec;
  char cStack_6e8;
  undefined1 uStack_6e7;
  ulong uStack_6e4;
  uint uStack_6dc;
  undefined **ppuStack_6d8;
  undefined *******pppppppuStack_6d0;
  undefined *******pppppppuStack_6c8;
  undefined5 uStack_6c0;
  undefined3 uStack_6bb;
  int iStack_6b8;
  undefined1 uStack_6b4;
  undefined ********ppppppppuStack_6b0;
  undefined ********ppppppppuStack_6a8;
  undefined ********ppppppppuStack_6a0;
  undefined1 uStack_698;
  undefined7 uStack_697;
  undefined1 uStack_690;
  undefined8 uStack_68f;
  undefined ********ppppppppuStack_680;
  long *plStack_678;
  undefined1 auStack_670 [64];
  undefined ********ppppppppuStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  float fStack_618;
  undefined4 uStack_614;
  undefined8 uStack_610;
  float fStack_608;
  undefined4 uStack_604;
  float fStack_600;
  undefined4 uStack_5fc;
  float fStack_5f8;
  undefined4 uStack_5f4;
  undefined *******pppppppuStack_5f0;
  undefined *******pppppppuStack_5e8;
  undefined *******pppppppuStack_5e0;
  undefined *******pppppppuStack_5d8;
  undefined *******pppppppuStack_5d0;
  undefined *******pppppppuStack_5c8;
  undefined1 uStack_588;
  undefined *******pppppppuStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined ******ppppppuStack_568;
  undefined *******pppppppuStack_560;
  float afStack_558 [4];
  undefined4 uStack_548;
  float fStack_544;
  undefined4 uStack_540;
  undefined8 uStack_53c;
  float fStack_534;
  undefined **ppuStack_530;
  undefined ****ppppuStack_528;
  undefined ********ppppppppuStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  float fStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined8 uStack_4fc;
  undefined8 uStack_4f4;
  undefined8 uStack_4ec;
  undefined *******pppppppuStack_4e0;
  undefined *******pppppppuStack_4d8;
  undefined *******pppppppuStack_4d0;
  undefined *******pppppppuStack_4c8;
  undefined *******pppppppuStack_4c0;
  undefined *******pppppppuStack_4b8;
  ulong uStack_4a8;
  undefined *******pppppppuStack_4a0;
  undefined ******ppppppuStack_498;
  undefined8 uStack_490;
  undefined *******pppppppuStack_480;
  undefined *******pppppppuStack_478;
  undefined ********ppppppppuStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined ********ppppppppuStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined ********ppppppppuStack_3d0;
  undefined ********ppppppppuStack_3c8;
  undefined *******pppppppuStack_3c0;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  float fStack_378;
  undefined4 uStack_374;
  float fStack_370;
  undefined4 uStack_36c;
  float fStack_368;
  undefined4 uStack_364;
  undefined *******pppppppuStack_360;
  undefined *******pppppppuStack_358;
  undefined *******pppppppuStack_350;
  undefined *******pppppppuStack_348;
  undefined *******pppppppuStack_340;
  undefined *******pppppppuStack_338;
  long *plStack_328;
  undefined1 uStack_2f8;
  undefined *******pppppppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined ******ppppppuStack_2d8;
  long lStack_1d8;
  undefined8 uStack_120;
  undefined4 uStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined1 auStack_60 [8];
  long *plStack_58;
  long lStack_38;
  
  puVar34 = &uStack_120;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_2 != *(int *)(param_1 + 0x150)) {
    func_0x000107c2ad00(&ppuStack_d0);
    uVar35 = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x148) = uStack_c8;
    *(undefined ***)(param_1 + 0x140) = ppuStack_d0;
    ppuStack_d0 = &PTR_SUB_110b01d60;
    uStack_c8 = uVar35;
    func_0x000107c2acd4(&ppuStack_d0);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar66 = *(undefined8 *)(param_2 + 2);
  uVar35 = *(undefined8 *)param_2;
  uVar68 = *(undefined8 *)(param_2 + 4);
  uVar71 = *(undefined8 *)(param_2 + 10);
  uVar69 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x160) = uVar68;
  *(undefined8 *)(param_1 + 0x178) = uVar71;
  *(undefined8 *)(param_1 + 0x170) = uVar69;
  *(undefined8 *)(param_1 + 0x158) = uVar66;
  *(undefined8 *)(param_1 + 0x150) = uVar35;
  uVar66 = *(undefined8 *)(param_2 + 0xe);
  uVar35 = *(undefined8 *)(param_2 + 0xc);
  uVar69 = *(undefined8 *)(param_2 + 0x12);
  uVar68 = *(undefined8 *)(param_2 + 0x10);
  uVar72 = *(undefined8 *)(param_2 + 0x16);
  uVar71 = *(undefined8 *)(param_2 + 0x14);
  uVar73 = *(undefined8 *)(param_2 + 0x17);
  *(undefined8 *)(param_1 + 0x1b4) = *(undefined8 *)(param_2 + 0x19);
  *(undefined8 *)(param_1 + 0x1ac) = uVar73;
  *(undefined8 *)(param_1 + 0x198) = uVar69;
  *(undefined8 *)(param_1 + 400) = uVar68;
  *(undefined8 *)(param_1 + 0x1a8) = uVar72;
  *(undefined8 *)(param_1 + 0x1a0) = uVar71;
  *(undefined8 *)(param_1 + 0x188) = uVar66;
  *(undefined8 *)(param_1 + 0x180) = uVar35;
  FUN_10a22b858(param_1 + 0x1c0,param_2 + 0x1c);
  FUN_10a4cb5a0(&ppuStack_d0,param_2);
  fVar80 = (fStack_ac - fStack_98) - fStack_84;
  fVar82 = (fStack_98 - fStack_ac) - fStack_84;
  fVar84 = (fStack_84 - fStack_ac) - fStack_98;
  fStack_84 = fStack_ac + fStack_98 + fStack_84;
  fVar67 = fVar80;
  if (fVar80 <= fStack_84) {
    fVar67 = fStack_84;
  }
  bVar49 = 2;
  if (fVar82 <= fVar67) {
    fVar82 = fVar67;
    bVar49 = fStack_84 < fVar80;
  }
  bVar10 = 3;
  if (fVar84 <= fVar82) {
    fVar84 = fVar82;
    bVar10 = bVar49;
  }
  fVar80 = SQRT(fVar84 + 1.0) * 0.5;
  fVar84 = 0.25 / fVar80;
  fVar82 = (fStack_8c - fStack_a4) * fVar84;
  fVar81 = (fStack_a8 + fStack_9c) * fVar84;
  fVar83 = (fStack_94 + fStack_88) * fVar84;
  fVar67 = (fStack_a8 - fStack_9c) * fVar84;
  fVar70 = (fStack_a4 + fStack_8c) * fVar84;
  fStack_104 = fVar82;
  fStack_108 = fVar83;
  fStack_10c = fVar80;
  fStack_110 = fVar81;
  if (bVar10 != 2) {
    fStack_104 = fVar67;
    fStack_108 = fVar80;
    fStack_10c = fVar83;
    fStack_110 = fVar70;
  }
  fVar84 = (fStack_94 - fStack_88) * fVar84;
  fVar83 = fVar80;
  if (bVar10 != 0) {
    fVar83 = fVar84;
    fVar67 = fVar70;
    fVar82 = fVar81;
    fVar84 = fVar80;
  }
  if (bVar10 < 2) {
    fStack_104 = fVar83;
    fStack_108 = fVar67;
    fStack_10c = fVar82;
    fStack_110 = fVar84;
  }
  uStack_120 = uStack_7c;
  uStack_118 = uStack_74;
  plVar20 = &lStack_100;
  ppppppppuVar32 = (undefined ********)&fStack_110;
  func_0x0001096bb950();
  *(undefined8 *)(param_1 + 0x1e0) = uStack_f8;
  *(long *)(param_1 + 0x1d8) = lStack_100;
  *(undefined8 *)(param_1 + 0x1f0) = uStack_e8;
  *(undefined8 *)(param_1 + 0x1e8) = uStack_f0;
  *(undefined8 *)(param_1 + 0x200) = uStack_d8;
  *(undefined8 *)(param_1 + 0x1f8) = uStack_e0;
  if (plStack_58 != (long *)0x0) {
    plVar57 = plStack_58 + 1;
    do {
      lVar41 = *plVar57;
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar57,0x10);
      if (bVar14) {
        *plVar57 = lVar41 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar41 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar20 = plStack_58;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppppppppuVar32 != 0) {
    func_0x000104bd46a0();
    func_0x00010a042d30(auStack_60);
  }
  __Unwind_Resume();
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10aac70f0(ppppppppuVar32);
  if (((*(uint *)param_8 >> 6 & 1) == 0) || (*(uint *)((long)param_8 + 0xc) != 0xffffffff)) {
    if (*(uint *)param_8 == 0) {
      ppppppppuVar56 = ppppppppuVar32 + 0x2a;
      FUN_10a0ec6f0();
      uVar37 = *(ulong *)((long)ppppppppuVar32 + 0x154);
      bVar14 = ((ulong)ppppppppuVar56 & 1) != 0;
      uVar42 = uVar37 >> 0x20;
      if (bVar14) {
        uVar42 = uVar37;
      }
      uVar60 = uVar37 & 0xffffffff;
      if (bVar14) {
        uVar60 = uVar37 >> 0x20;
      }
      FUN_10aab041c(ppppppppuVar32 + 0xd,0,uVar60 | uVar42 << 0x20);
      *plVar20 = 0;
LAB_10aab6428:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
        return;
      }
      goto LAB_10aab64b4;
    }
    if (param_4 == 0) goto LAB_10aab64b8;
    ppppppppuStack_680 = (undefined ********)0x0;
    plStack_678 = (long *)0x0;
    ppuStack_6d8 = &PTR_FUN_110c447c8;
    pppppppuStack_6d0 = (undefined *******)0x0;
    pppppppuStack_6c8 = (undefined *******)0x0;
    uStack_6c0 = 0;
    uStack_6bb = 0;
    iStack_6b8 = 0;
    uStack_6b4 = 0;
    ppppppppuStack_6a8 = (undefined ********)0x0;
    ppppppppuStack_6b0 = (undefined ********)0x0;
    uStack_698 = 0;
    ppppppppuStack_6a0 = (undefined ********)0x0;
    uStack_68f = 0;
    uStack_697 = 0;
    uStack_690 = 0;
    FUN_10a14b750(auStack_670);
    if (*(int *)(ppppppppuVar32 + 0x43) == 0) {
      if ((*ppppppppuVar32)[4] != (undefined ******)0x0) {
        (*(code *)(*(*ppppppppuVar32)[4])[2])();
      }
      *(undefined4 *)(ppppppppuVar32 + 0x43) = 1;
    }
    pppppppuVar54 = ppppppppuVar32[0x41];
    if (pppppppuVar54[0x2e] != (undefined ******)0x0) {
      uStack_620 = (undefined *******)CONCAT44(uStack_620._4_4_,(float)uStack_620);
      uStack_380 = (undefined ********)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
      uStack_518 = (undefined8 *)CONCAT44(uStack_518._4_4_,(float)uStack_518);
      uStack_510 = (undefined *******)CONCAT44(uStack_510._4_4_,(float)uStack_510);
      uStack_398 = (undefined8 *)CONCAT44(uStack_398._4_4_,(float)uStack_398);
      uStack_390 = (undefined *******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
      ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
      uStack_388 = (undefined ********)CONCAT44(uStack_388._4_4_,(float)uStack_388);
      if (((ulong)pppppppuVar54[0x5b] & 1) == 0) goto LAB_10aab6e00;
      if (*(char *)(pppppppuVar54 + 0x59) == '\0') {
        if (*(char *)(pppppppuVar54 + 0x5f) == '\x01') {
          pppppppuVar43 = pppppppuVar54 + 0x60;
          func_0x00010a505604();
          if ((int)pppppppuVar43 != 0) {
            __ZNSt3__16chrono12steady_clock3nowEv();
            ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
            pppppppuVar54[0x60] = (undefined ******)pppppppuVar43;
            uVar42 = ((long)pppppppuVar54[0x62] - (long)pppppppuVar54[0x61] >> 3) *
                     -0x5555555555555555;
            if (uVar42 < (ulong)(long)*(int *)(pppppppuVar54 + 100) ||
                uVar42 - (long)*(int *)(pppppppuVar54 + 100) == 0) goto LAB_10aab6e00;
            *(undefined1 *)(pppppppuVar54 + 0x5f) = 0;
            goto LAB_10aab2b00;
          }
        }
      }
      else if (*(char *)(pppppppuVar54 + 0x59) == '\x02') {
        __ZNSt13exception_ptrC1ERKS_(&ppppppppuStack_630,pppppppuVar54 + 0x5a);
        uStack_3a0 = (undefined **)0x0;
        __ZNSt13exception_ptraSERKS_(pppppppuVar54 + 0x5a,&uStack_3a0);
        __ZNSt13exception_ptrD1Ev(&uStack_3a0);
        if (ppppppppuStack_630 != (undefined ********)0x0) {
          FUN_10a0ee744(&uStack_3a0,&ppppppppuStack_630);
          uVar42 = CONCAT44(uStack_398._4_4_,(float)uStack_398);
          ppppppppuVar56 = (undefined ********)uStack_3a0;
          if (-1 < (int)uStack_390._4_4_) {
            uVar42 = (ulong)uStack_390._7_1_;
            ppppppppuVar56 = (undefined ********)&uStack_3a0;
          }
          FUN_10ae03140(0,ppppppppuVar56,uVar42);
          ppuVar23 = &PTR_PTR_113306738;
          FUN_10ae079a0();
          FUN_10ae0314c();
          FUN_10ae07cd4(ppuVar23,&PTR_PTR_113306738);
          if ((int)uStack_390._4_4_ < 0) {
            __ZdlPv(uStack_3a0);
          }
        }
        __ZNSt13exception_ptrD1Ev(&ppppppppuStack_630);
        pppppppuVar43 = pppppppuVar54 + 0x60;
        func_0x00010a505604();
        if ((int)pppppppuVar43 != 0) {
          __ZNSt3__16chrono12steady_clock3nowEv();
          pppppppuVar54[0x60] = (undefined ******)pppppppuVar43;
          uVar42 = ((long)pppppppuVar54[0x62] - (long)pppppppuVar54[0x61] >> 3) *
                   -0x5555555555555555;
          uStack_620 = (undefined *******)CONCAT44(uStack_620._4_4_,(float)uStack_620);
          uStack_380 = (undefined ********)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
          uStack_518 = (undefined8 *)CONCAT44(uStack_518._4_4_,(float)uStack_518);
          uStack_510 = (undefined *******)CONCAT44(uStack_510._4_4_,(float)uStack_510);
          uStack_398 = (undefined8 *)CONCAT44(uStack_398._4_4_,(float)uStack_398);
          uStack_390 = (undefined *******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
          ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
          uStack_388 = (undefined ********)CONCAT44(uStack_388._4_4_,(float)uStack_388);
          if ((uVar42 < (ulong)(long)*(int *)(pppppppuVar54 + 100) ||
               uVar42 - (long)*(int *)(pppppppuVar54 + 100) == 0) ||
             (uStack_620 = (undefined *******)CONCAT44(uStack_620._4_4_,(float)uStack_620),
             uStack_380 = (undefined ********)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380),
             uStack_518 = (undefined8 *)CONCAT44(uStack_518._4_4_,(float)uStack_518),
             uStack_510 = (undefined *******)CONCAT44(uStack_510._4_4_,(float)uStack_510),
             uStack_398 = (undefined8 *)CONCAT44(uStack_398._4_4_,(float)uStack_398),
             uStack_390 = (undefined *******)CONCAT44(uStack_390._4_4_,(float)uStack_390),
             ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610),
             uStack_388 = (undefined ********)CONCAT44(uStack_388._4_4_,(float)uStack_388),
             ((ulong)pppppppuVar54[0x5b] & 1) == 0)) goto LAB_10aab6e00;
          *(undefined1 *)(pppppppuVar54 + 0x59) = 1;
          FUN_10aac6380(pppppppuVar54);
LAB_10aab2b00:
          FUN_10a505688(pppppppuVar54 + 0x60);
        }
      }
    }
    cVar6 = *(char *)((long)param_8 + 0x16);
    pppppppuVar51 = ppppppppuVar32[0x41];
    pppppppuVar54 = pppppppuVar51 + 0xb;
    pppppppuVar43 = pppppppuVar54;
    FUN_10a28a860(pppppppuVar54,param_8);
    if (((ulong)pppppppuVar43 & 1) == 0) {
      ppppppuVar36 = param_8[1];
      ppppppuVar62 = *param_8;
      *(undefined8 *)((long)pppppppuVar51 + 0x67) = *(undefined8 *)((long)param_8 + 0xf);
      pppppppuVar51[0xc] = ppppppuVar36;
      *pppppppuVar54 = ppppppuVar62;
      FUN_10a28fda4(pppppppuVar51 + 0xe,param_8 + 3);
      FUN_10a28ffb0(pppppppuVar51 + 0x12,param_8 + 7);
      *(undefined1 *)(pppppppuVar51 + 0x1e) = *(undefined1 *)(param_8 + 0x13);
      if (pppppppuVar54 != param_8) {
        FUN_10a290680(pppppppuVar51 + 0x1f,param_8[0x14],param_8[0x15],
                      ((long)param_8[0x15] - (long)param_8[0x14] >> 3) * 0x2e8ba2e8ba2e8ba3);
      }
      pppppppuVar51[0x24] = (undefined ******)&UNK_1096b1e6c;
      (*(code *)*pppppppuVar51[0x25])(pppppppuVar51 + 0x25);
      pppppppuVar51[0x25] = (undefined ******)&PTR_DAT_110ae9180;
      *(undefined4 *)(pppppppuVar51 + 0x2c) = 0;
      func_0x00010ae02ecc(0,*(uint *)param_8);
      func_0x00010ae02ecc();
      func_0x00010ae02ecc();
      ppuVar23 = &PTR_PTR_113306400;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      FUN_10ae07cd4(ppuVar23,&PTR_PTR_113306400);
    }
    pppppppuVar54 = ppppppppuVar32[0x41];
    uStack_620 = (undefined *******)CONCAT44(uStack_620._4_4_,(float)uStack_620);
    uStack_380 = (undefined ********)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
    uStack_518 = (undefined8 *)CONCAT44(uStack_518._4_4_,(float)uStack_518);
    uStack_510 = (undefined *******)CONCAT44(uStack_510._4_4_,(float)uStack_510);
    uStack_398 = (undefined8 *)CONCAT44(uStack_398._4_4_,(float)uStack_398);
    uStack_390 = (undefined *******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
    ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
    uStack_388 = (undefined ********)CONCAT44(uStack_388._4_4_,(float)uStack_388);
    if (((ulong)pppppppuVar54[0x5b] & 1) == 0) goto LAB_10aab6e00;
    cVar48 = *(char *)(pppppppuVar54 + 0x59);
    if (cVar48 != '\x06') {
      if (cVar48 == '\x03') {
        uStack_620 = (undefined *******)CONCAT44(uStack_620._4_4_,(float)uStack_620);
        uStack_380 = (undefined ********)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
        uStack_518 = (undefined8 *)CONCAT44(uStack_518._4_4_,(float)uStack_518);
        uStack_510 = (undefined *******)CONCAT44(uStack_510._4_4_,(float)uStack_510);
        uStack_398 = (undefined8 *)CONCAT44(uStack_398._4_4_,(float)uStack_398);
        uStack_390 = (undefined *******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
        ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
        uStack_388 = (undefined ********)CONCAT44(uStack_388._4_4_,(float)uStack_388);
        if (((ulong)pppppppuVar54[0x5b] & 1) == 0) goto LAB_10aab6e00;
        *(undefined1 *)(pppppppuVar54 + 0x59) = 4;
        ppppppuVar36 = param_8[1];
        ppppppuVar62 = *param_8;
        *(undefined8 *)((long)pppppppuVar54 + 0x1cf) = *(undefined8 *)((long)param_8 + 0xf);
        pppppppuVar54[0x39] = ppppppuVar36;
        pppppppuVar54[0x38] = ppppppuVar62;
        FUN_10a28fda4(pppppppuVar54 + 0x3b,param_8 + 3);
        FUN_10a28ffb0(pppppppuVar54 + 0x3f,param_8 + 7);
        *(undefined1 *)(pppppppuVar54 + 0x4b) = *(undefined1 *)(param_8 + 0x13);
        if (pppppppuVar54 + 0x38 != param_8) {
          FUN_10a290680(pppppppuVar54 + 0x4c,param_8[0x14],param_8[0x15],
                        ((long)param_8[0x15] - (long)param_8[0x14] >> 3) * 0x2e8ba2e8ba2e8ba3);
        }
        if (pppppppuVar54[5] != (undefined ******)0x0) {
          ppuVar23 = &PTR_PTR_1133066a0;
          FUN_10ae079a0(0,&PTR_PTR_1133066a0);
          FUN_10ae07cd4(ppuVar23,&PTR_PTR_1133066a0);
          ppppppuVar62 = pppppppuVar54[0x5c];
          ppppppppuStack_630 = (undefined ********)*pppppppuVar54;
          uStack_628._0_4_ = SUB84(pppppppuVar54[1],0);
          uStack_628._4_4_ = (float)((ulong)pppppppuVar54[1] >> 0x20);
          if (pppppppuVar54[1] != (undefined ******)0x0) {
            ppppppuVar36 = pppppppuVar54[1] + 2;
            do {
              cVar48 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(ppppppuVar36,0x10);
              if (bVar14) {
                *ppppppuVar36 = (undefined *****)((long)*ppppppuVar36 + 1);
                cVar48 = ExclusiveMonitorsStatus();
              }
            } while (cVar48 != '\0');
          }
          fStack_618 = SUB84(param_8[1],0);
          uStack_620._0_4_ = SUB84(*param_8,0);
          uStack_620._4_4_ = (float)((ulong)*param_8 >> 0x20);
          uVar35 = *(undefined8 *)((long)param_8 + 0xf);
          uStack_614._0_3_ = (undefined3)((ulong)param_8[1] >> 0x20);
          uStack_614._3_1_ = (undefined1)uVar35;
          uStack_610._0_4_ = (undefined4)((ulong)uVar35 >> 8);
          uStack_610._4_3_ = (undefined3)((ulong)uVar35 >> 0x28);
          FUN_10a22cb80(&fStack_608,param_8 + 3);
          FUN_10a22cd3c(&pppppppuStack_5e8,param_8 + 7);
          uStack_588 = *(undefined1 *)(param_8 + 0x13);
          uStack_570 = 0;
          pppppppuStack_580 = (undefined *******)0x0;
          uStack_578 = 0;
          FUN_10a22ce94(&pppppppuStack_580,param_8[0x14],param_8[0x15],
                        ((long)param_8[0x15] - (long)param_8[0x14] >> 3) * 0x2e8ba2e8ba2e8ba3);
          fVar82 = uStack_628._4_4_;
          fVar67 = (float)uStack_628;
          ppppppppuVar56 = ppppppppuStack_630;
          ppppppuStack_568 = pppppppuVar54[0x5e];
          pppppuVar55 = ppppppuVar62[2];
          uStack_510._0_4_ = 0.0;
          uStack_510._4_4_ = 0.0;
          uStack_518._0_4_ = 0.0;
          uStack_518._4_4_ = 0.0;
          if (pppppuVar55 == (undefined *****)0x0) {
            ppppppppuStack_630 = (undefined ********)0x0;
            uStack_628._0_4_ = 0.0;
            uStack_628._4_4_ = 0.0;
            uStack_398._0_4_ = fVar67;
            uStack_398._4_4_ = fVar82;
            uStack_3a0 = (undefined **)ppppppppuVar56;
            uStack_388._0_4_ = fStack_618;
            uStack_390._0_4_ = (float)uStack_620;
            uStack_390._4_4_ = uStack_620._4_4_;
            uStack_388._4_4_ = (float)uStack_614;
            uStack_380._0_4_ = (undefined4)uStack_610;
            uStack_380._4_4_ = CONCAT13(uStack_380._7_1_,uStack_610._4_3_);
            fStack_378 = (float)((uint)fStack_378 & 0xffffff00);
            uVar42 = (ulong)pppppppuStack_360 >> 8;
            pppppppuStack_360 = (undefined *******)((ulong)pppppppuStack_360 & 0xffffffffffffff00);
            if ((char)pppppppuStack_5f0 == '\x01') {
              fStack_370 = fStack_600;
              uStack_36c = uStack_5fc;
              fStack_378 = fStack_608;
              uStack_374 = uStack_604;
              fStack_368 = fStack_5f8;
              uStack_364 = uStack_5f4;
              fStack_600 = 0.0;
              uStack_5fc = 0;
              fStack_5f8 = 0.0;
              uStack_5f4 = 0;
              fStack_608 = 0.0;
              uStack_604 = 0;
              pppppppuStack_360 = (undefined *******)CONCAT71((int7)uVar42,1);
            }
            FUN_10a230c9c(&pppppppuStack_358,&pppppppuStack_5e8);
            uStack_2e0 = uStack_570;
            uStack_2f8 = uStack_588;
            uStack_2e8 = uStack_578;
            pppppppuStack_2f0 = pppppppuStack_580;
            uStack_578 = 0;
            uStack_570 = 0;
            pppppppuStack_580 = (undefined *******)0x0;
            ppppppuStack_2d8 = ppppppuStack_568;
            puVar21 = (undefined8 *)0x188;
            __Znwm();
            puVar21[2] = 0;
            puVar21[1] = 0x200000006;
            *(undefined2 *)(puVar21 + 3) = 4;
            puVar21[5] = 0;
            puVar21[4] = 0;
            puVar21[7] = 0;
            puVar21[6] = 0;
            puVar21[9] = 0;
            puVar21[8] = 0;
            puVar21[0xb] = 0;
            puVar21[10] = 0;
            puVar21[0xd] = 0;
            puVar21[0xc] = 0;
            puVar21[0xf] = 0;
            puVar21[0xe] = 0;
            puVar21[0x10] = 0;
            puVar21[0x11] = puVar21 + 3;
            puVar21[0x12] = 0;
            *(undefined2 *)(puVar21 + 0x13) = 0;
            *puVar21 = &PTR_DAT_110c43a08;
            func_0x00010aad8990(puVar21 + 0x14,&uStack_3a0);
            puVar21[0x30] = 0;
            plVar57 = (long *)CONCAT44(uStack_518._4_4_,(float)uStack_518);
            if (plVar57 != (long *)0x0) {
              puVar1 = (ulong *)(plVar57 + 1);
              do {
                uVar42 = *puVar1;
                cVar48 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar14) {
                  *puVar1 = uVar42 - 4;
                  cVar48 = ExclusiveMonitorsStatus();
                }
              } while (cVar48 != '\0');
              if ((uVar42 & 0x1fffffffc) == 4) {
                do {
                  uVar42 = *puVar1;
                  cVar48 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar14) {
                    *puVar1 = uVar42 - 1;
                    cVar48 = ExclusiveMonitorsStatus();
                  }
                } while (cVar48 != '\0');
                if (uVar42 - 1 == 0) {
                  (**(code **)(*plVar57 + 8))();
                }
              }
            }
            uStack_518._0_4_ = SUB84(puVar21,0);
            uVar75 = (float)uStack_518;
            uStack_518._4_4_ = (float)((ulong)puVar21 >> 0x20);
            uVar76 = uStack_518._4_4_;
            if (CONCAT44(uStack_510._4_4_,(float)uStack_510) != 0) {
              func_0x0001092b4274(&uStack_510);
            }
            ppppppppuStack_520 = (undefined ********)(puVar21 + 0x14);
            uStack_510._0_4_ = (float)uVar75;
            uStack_510._4_4_ = (float)uVar76;
            ppppppppuStack_440 = &pppppppuStack_2f0;
            FUN_10a22d224(&ppppppppuStack_440);
            FUN_10a22ce48(&pppppppuStack_358);
            if (((char)pppppppuStack_360 == '\x01') && (CONCAT44(uStack_374,fStack_378) != 0)) {
              fStack_370 = fStack_378;
              uStack_36c = uStack_374;
              __ZdlPv();
            }
            if (CONCAT44(uStack_398._4_4_,(float)uStack_398) != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            fStack_508 = 1.6709458e-32;
            uStack_504 = 1;
          }
          else {
            pppppppuStack_560 = (undefined *******)0x0;
            (*(code *)(*pppppuVar55)[5])(pppppuVar55,0,&pppppppuStack_560);
            fVar82 = uStack_628._4_4_;
            fVar67 = (float)uStack_628;
            ppppppppuVar56 = ppppppppuStack_630;
            if (pppppppuStack_560 != (undefined *******)0x0) {
              func_0x0001092af97c(&pppppppuStack_560);
              ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610)
              ;
              goto LAB_10aab6e00;
            }
            ppppppppuStack_630 = (undefined ********)0x0;
            uStack_628._0_4_ = 0.0;
            uStack_628._4_4_ = 0.0;
            uStack_398._0_4_ = fVar67;
            uStack_398._4_4_ = fVar82;
            uStack_3a0 = (undefined **)ppppppppuVar56;
            uStack_388._0_4_ = fStack_618;
            uStack_390._0_4_ = (float)uStack_620;
            uStack_390._4_4_ = uStack_620._4_4_;
            uStack_388._4_4_ = (float)uStack_614;
            uStack_380._0_4_ = (undefined4)uStack_610;
            uStack_380._4_4_ = CONCAT13(uStack_380._7_1_,uStack_610._4_3_);
            fStack_378 = (float)((uint)fStack_378 & 0xffffff00);
            uVar42 = (ulong)pppppppuStack_360 >> 8;
            pppppppuStack_360 = (undefined *******)((ulong)pppppppuStack_360 & 0xffffffffffffff00);
            if ((char)pppppppuStack_5f0 == '\x01') {
              fStack_370 = fStack_600;
              uStack_36c = uStack_5fc;
              fStack_378 = fStack_608;
              uStack_374 = uStack_604;
              fStack_368 = fStack_5f8;
              uStack_364 = uStack_5f4;
              fStack_600 = 0.0;
              uStack_5fc = 0;
              fStack_5f8 = 0.0;
              uStack_5f4 = 0;
              fStack_608 = 0.0;
              uStack_604 = 0;
              pppppppuStack_360 = (undefined *******)CONCAT71((int7)uVar42,1);
            }
            FUN_10a230c9c(&pppppppuStack_358,&pppppppuStack_5e8);
            uStack_2e0 = uStack_570;
            uStack_2f8 = uStack_588;
            uStack_2e8 = uStack_578;
            pppppppuStack_2f0 = pppppppuStack_580;
            uStack_578 = 0;
            uStack_570 = 0;
            pppppppuStack_580 = (undefined *******)0x0;
            ppppppuStack_2d8 = ppppppuStack_568;
            puVar21 = (undefined8 *)0x190;
            __Znwm();
            puVar21[2] = 0;
            puVar21[1] = 0x200000006;
            *(undefined2 *)(puVar21 + 3) = 4;
            puVar21[5] = 0;
            puVar21[4] = 0;
            puVar21[7] = 0;
            puVar21[6] = 0;
            puVar21[9] = 0;
            puVar21[8] = 0;
            puVar21[0xb] = 0;
            puVar21[10] = 0;
            puVar21[0xd] = 0;
            puVar21[0xc] = 0;
            puVar21[0xf] = 0;
            puVar21[0xe] = 0;
            puVar21[0x10] = 0;
            puVar21[0x11] = puVar21 + 3;
            puVar21[0x12] = 0;
            *(undefined2 *)(puVar21 + 0x13) = 0;
            *puVar21 = &PTR_FUN_110c439d0;
            func_0x00010aad8990(puVar21 + 0x14,&uStack_3a0);
            puVar21[0x30] = 0;
            puVar21[0x31] = pppppuVar55;
            plVar57 = (long *)CONCAT44(uStack_518._4_4_,(float)uStack_518);
            if (plVar57 != (long *)0x0) {
              puVar1 = (ulong *)(plVar57 + 1);
              do {
                uVar42 = *puVar1;
                cVar48 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar14) {
                  *puVar1 = uVar42 - 4;
                  cVar48 = ExclusiveMonitorsStatus();
                }
              } while (cVar48 != '\0');
              if ((uVar42 & 0x1fffffffc) == 4) {
                do {
                  uVar42 = *puVar1;
                  cVar48 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar14) {
                    *puVar1 = uVar42 - 1;
                    cVar48 = ExclusiveMonitorsStatus();
                  }
                } while (cVar48 != '\0');
                if (uVar42 - 1 == 0) {
                  (**(code **)(*plVar57 + 8))();
                }
              }
            }
            uStack_518._0_4_ = SUB84(puVar21,0);
            uVar75 = (float)uStack_518;
            uStack_518._4_4_ = (float)((ulong)puVar21 >> 0x20);
            uVar76 = uStack_518._4_4_;
            if (CONCAT44(uStack_510._4_4_,(float)uStack_510) != 0) {
              func_0x0001092b4274(&uStack_510);
            }
            ppppppppuStack_520 = (undefined ********)(puVar21 + 0x14);
            uStack_510._0_4_ = (float)uVar75;
            uStack_510._4_4_ = (float)uVar76;
            ppppppppuStack_440 = &pppppppuStack_2f0;
            FUN_10a22d224(&ppppppppuStack_440);
            FUN_10a22ce48(&pppppppuStack_358);
            if (((char)pppppppuStack_360 == '\x01') && (CONCAT44(uStack_374,fStack_378) != 0)) {
              fStack_370 = fStack_378;
              uStack_36c = uStack_374;
              __ZdlPv();
            }
            if (CONCAT44(uStack_398._4_4_,(float)uStack_398) != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            fStack_508 = 1.6709388e-32;
            uStack_504 = 1;
            __ZNSt13exception_ptrD1Ev(&pppppppuStack_560);
          }
          ppppppppuVar56 = ppppppppuStack_520;
          if (ppppppppuStack_520[0x1c] != (undefined *******)0x0) {
            func_0x0001092b4274();
          }
          uStack_3a0 = (undefined **)CONCAT44(uStack_504,fStack_508);
          ppppppppuVar56[0x1c] = (undefined *******)CONCAT44(uStack_510._4_4_,(float)uStack_510);
          uStack_510._0_4_ = 0.0;
          uStack_510._4_4_ = 0.0;
          uStack_398._0_4_ = SUB84(ppppppppuStack_520,0);
          uStack_398._4_4_ = (float)((ulong)ppppppppuStack_520 >> 0x20);
          uStack_390._0_4_ = SUB84(ppppppuVar62,0);
          uStack_390._4_4_ = (float)((ulong)ppppppuVar62 >> 0x20);
          (*(code *)**ppppppuVar62)(ppppppuVar62,&uStack_3a0);
          ppppppppuStack_3d0 = (undefined ********)CONCAT44(uStack_518._4_4_,(float)uStack_518);
          uStack_518._0_4_ = 0.0;
          uStack_518._4_4_ = 0.0;
          if (CONCAT44(uStack_510._4_4_,(float)uStack_510) != 0) {
            func_0x0001092b4274(&uStack_510);
            plVar57 = (long *)CONCAT44(uStack_518._4_4_,(float)uStack_518);
            if (plVar57 != (long *)0x0) {
              puVar1 = (ulong *)(plVar57 + 1);
              do {
                uVar42 = *puVar1;
                cVar48 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar14) {
                  *puVar1 = uVar42 - 4;
                  cVar48 = ExclusiveMonitorsStatus();
                }
              } while (cVar48 != '\0');
              if ((uVar42 & 0x1fffffffc) == 4) {
                do {
                  uVar42 = *puVar1;
                  cVar48 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar14) {
                    *puVar1 = uVar42 - 1;
                    cVar48 = ExclusiveMonitorsStatus();
                  }
                } while (cVar48 != '\0');
                if (uVar42 - 1 == 0) {
                  (**(code **)(*plVar57 + 8))();
                }
              }
            }
          }
          uStack_3a0 = (undefined **)&pppppppuStack_580;
          FUN_10a22d224(&uStack_3a0);
          FUN_10a22ce48(&pppppppuStack_5e8);
          if (((char)pppppppuStack_5f0 == '\x01') && (CONCAT44(uStack_604,fStack_608) != 0)) {
            fStack_600 = fStack_608;
            uStack_5fc = uStack_604;
            __ZdlPv();
          }
          if (CONCAT44(uStack_628._4_4_,(float)uStack_628) != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          FUN_109d1a400(&ppppppppuStack_3d0,5000000);
          uStack_390 = (undefined *******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
          ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
          uStack_388 = (undefined ********)CONCAT44(uStack_388._4_4_,(float)uStack_388);
          if (((ulong)pppppppuVar54[0x5b] & 1) == 0) goto LAB_10aab6e00;
          cVar48 = *(char *)(pppppppuVar54 + 0x59);
          if (ppppppppuStack_3d0 != (undefined ********)0x0) {
            ppppppppuVar56 = ppppppppuStack_3d0 + 1;
            do {
              pppppppuVar43 = *ppppppppuVar56;
              cVar7 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(ppppppppuVar56,0x10);
              if (bVar14) {
                *ppppppppuVar56 = (undefined *******)((long)pppppppuVar43 + -4);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (((ulong)pppppppuVar43 & 0x1fffffffc) == 4) {
              do {
                pppppppuVar43 = *ppppppppuVar56;
                cVar7 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(ppppppppuVar56,0x10);
                if (bVar14) {
                  *ppppppppuVar56 = (undefined *******)((long)pppppppuVar43 + -1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if ((undefined *******)((long)pppppppuVar43 + -1) == (undefined *******)0x0) {
                (*(code *)(*ppppppppuStack_3d0)[1])();
              }
            }
          }
          goto LAB_10aab3284;
        }
      }
      else {
LAB_10aab3284:
        if (cVar48 != '\x05') goto LAB_10aab34b0;
      }
      ppuVar23 = &PTR_PTR_113306520;
      FUN_10ae079a0(0,&PTR_PTR_113306520);
      FUN_10ae07cd4(ppuVar23,&PTR_PTR_113306520);
      uStack_390 = (undefined *******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
      ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
      uStack_388 = (undefined ********)CONCAT44(uStack_388._4_4_,(float)uStack_388);
      if (((ulong)pppppppuVar54[0x5b] & 1) == 0) goto LAB_10aab6e00;
      ppppppuVar36 = pppppppuVar54[0x30];
      pppppppuVar54[0x30] = (undefined ******)0x0;
      ppppppuVar62 = pppppppuVar54[3];
      pppppppuVar54[3] = ppppppuVar36;
      if (ppppppuVar62 != (undefined ******)0x0) {
        (*(code *)(*ppppppuVar62)[1])();
      }
      ppppppuVar36 = pppppppuVar54[0x32];
      ppppppuVar62 = pppppppuVar54[0x31];
      pppppppuVar54[0x32] = pppppppuVar54[5];
      pppppppuVar54[0x31] = pppppppuVar54[4];
      pppppppuVar54[5] = ppppppuVar36;
      pppppppuVar54[4] = ppppppuVar62;
      FUN_10aabbbfc(pppppppuVar54 + 6,pppppppuVar54 + 0x33);
      pppppppuVar54[0xc] = pppppppuVar54[0x39];
      pppppppuVar54[0xb] = pppppppuVar54[0x38];
      *(undefined8 *)((long)pppppppuVar54 + 0x67) = *(undefined8 *)((long)pppppppuVar54 + 0x1cf);
      func_0x00010a230998(pppppppuVar54 + 0xe,pppppppuVar54 + 0x3b);
      func_0x00010a230a6c(pppppppuVar54 + 0x12,pppppppuVar54 + 0x3f);
      *(undefined1 *)(pppppppuVar54 + 0x1e) = *(undefined1 *)(pppppppuVar54 + 0x4b);
      FUN_10a230b90(pppppppuVar54 + 0x1f);
      pppppppuVar54[0x20] = pppppppuVar54[0x4d];
      pppppppuVar54[0x1f] = pppppppuVar54[0x4c];
      pppppppuVar54[0x21] = pppppppuVar54[0x4e];
      pppppppuVar54[0x4e] = (undefined ******)0x0;
      pppppppuVar54[0x4d] = (undefined ******)0x0;
      pppppppuVar54[0x4c] = (undefined ******)0x0;
      ppppppuVar36 = pppppppuVar54[0x50];
      ppppppuVar62 = pppppppuVar54[0x4f];
      pppppppuVar54[0x50] = pppppppuVar54[0x23];
      pppppppuVar54[0x4f] = pppppppuVar54[0x22];
      pppppppuVar54[0x23] = ppppppuVar36;
      pppppppuVar54[0x22] = ppppppuVar62;
      uStack_390 = (undefined *******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
      ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
      uStack_388 = (undefined ********)CONCAT44(uStack_388._4_4_,(float)uStack_388);
      if (((ulong)pppppppuVar54[0x5b] & 1) == 0) goto LAB_10aab6e00;
      pppppppuVar43 = pppppppuVar54 + 0xb;
      pppppppuVar54[0x24] = pppppppuVar54[0x51];
      (*(code *)*pppppppuVar54[0x25])(pppppppuVar54 + 0x25);
      (*(code *)pppppppuVar54[0x52][2])(pppppppuVar54 + 0x25,pppppppuVar54 + 0x52);
      ppppppuVar62 = pppppppuVar54[2];
      if (ppppppuVar62 != (undefined ******)0x0) {
        ppppppuVar36 = ppppppuVar62 + 1;
        do {
          pppppuVar55 = *ppppppuVar36;
          cVar48 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(ppppppuVar36,0x10);
          if (bVar14) {
            *ppppppuVar36 = (undefined *****)((long)pppppuVar55 + -4);
            cVar48 = ExclusiveMonitorsStatus();
          }
        } while (cVar48 != '\0');
        if (((ulong)pppppuVar55 & 0x1fffffffc) == 4) {
          do {
            pppppuVar55 = *ppppppuVar36;
            cVar48 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(ppppppuVar36,0x10);
            if (bVar14) {
              *ppppppuVar36 = (undefined *****)((long)pppppuVar55 + -1);
              cVar48 = ExclusiveMonitorsStatus();
            }
          } while (cVar48 != '\0');
          if ((undefined *****)((long)pppppuVar55 + -1) == (undefined *****)0x0) {
            (*(code *)(*ppppppuVar62)[1])();
          }
        }
      }
      pppppppuVar54[2] = (undefined ******)0x0;
      *(undefined4 *)(pppppppuVar54 + 0x2c) = 0;
      pppppppuVar51 = pppppppuVar43;
      FUN_10a28a860(pppppppuVar43,param_8);
      if (((ulong)pppppppuVar51 & 1) == 0) {
        ppppppuVar36 = param_8[1];
        ppppppuVar62 = *param_8;
        *(undefined8 *)((long)pppppppuVar54 + 0x67) = *(undefined8 *)((long)param_8 + 0xf);
        pppppppuVar54[0xc] = ppppppuVar36;
        *pppppppuVar43 = ppppppuVar62;
        FUN_10a28fda4(pppppppuVar54 + 0xe,param_8 + 3);
        FUN_10a28ffb0(pppppppuVar54 + 0x12,param_8 + 7);
        *(undefined1 *)(pppppppuVar54 + 0x1e) = *(undefined1 *)(param_8 + 0x13);
        if (pppppppuVar43 != param_8) {
          FUN_10a290680(pppppppuVar54 + 0x1f,param_8[0x14],param_8[0x15],
                        ((long)param_8[0x15] - (long)param_8[0x14] >> 3) * 0x2e8ba2e8ba2e8ba3);
        }
        pppppppuVar54[0x24] = (undefined ******)&UNK_1096b1e6c;
        (*(code *)*pppppppuVar54[0x25])(pppppppuVar54 + 0x25);
        pppppppuVar54[0x25] = (undefined ******)&PTR_DAT_110ae9180;
        ppuVar23 = &PTR_PTR_1133066e8;
        FUN_10ae079a0(0,&PTR_PTR_1133066e8);
        FUN_10ae07cd4(ppuVar23,&PTR_PTR_1133066e8);
      }
      uStack_390 = (undefined *******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
      ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
      uStack_388 = (undefined ********)CONCAT44(uStack_388._4_4_,(float)uStack_388);
      if (((ulong)pppppppuVar54[0x5b] & 1) == 0) goto LAB_10aab6e00;
      *(undefined1 *)(pppppppuVar54 + 0x59) = 6;
    }
LAB_10aab34b0:
    if (((ulong)ppppppppuVar32[0x41][0x25][1] & 1) == 0) {
      ppppppppuVar56 = ppppppppuVar32 + 0x28;
      func_0x0001096e4e0c(ppppppppuVar56,0x11382aac8);
      pppppppuVar54 = *ppppppppuVar56;
      pppppppuVar43 = ppppppppuVar56[1];
      while( true ) {
        ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
        if (pppppppuVar54 == pppppppuVar43) break;
        func_0x0001096c3b0c(pppppppuVar54 + 5);
        pppppppuVar54 = pppppppuVar54 + 10;
      }
      pppppppuVar54 = ppppppppuVar32[0x41];
      if (((ulong)pppppppuVar54[0x5b] & 1) == 0) goto LAB_10aab6e00;
      cVar48 = *(char *)((long)param_8 + 0x14);
      if (*(byte *)(pppppppuVar54 + 0x59) < 5 &&
          (1 << (ulong)(*(byte *)(pppppppuVar54 + 0x59) & 0x1f) & 0x1aU) != 0) {
        if (cVar48 == '\x01') {
          if (*(int *)((long)pppppppuVar54 + 0x164) < *(int *)(pppppppuVar54 + 0x2d)) {
            bVar49 = 0;
            *(int *)((long)pppppppuVar54 + 0x164) = *(int *)((long)pppppppuVar54 + 0x164) + 1;
            goto LAB_10aab3648;
          }
          if (pppppppuVar54[5] == (undefined ******)0x0) {
            FUN_10aac4800(pppppppuVar54);
            goto LAB_10aab35a4;
          }
        }
        else if (pppppppuVar54[5] == (undefined ******)0x0) {
          FUN_10aac4800(pppppppuVar54);
          goto LAB_10aab35bc;
        }
      }
      else if (pppppppuVar54[5] == (undefined ******)0x0) {
        FUN_10aac4800(pppppppuVar54);
        if (cVar48 == '\x01') {
LAB_10aab35a4:
          if (((uint)pppppppuVar54[2][2] >> 1 & 1) == 0) {
            bVar49 = 0;
            goto LAB_10aab3648;
          }
        }
LAB_10aab35bc:
        FUN_109d1a244(pppppppuVar54 + 2);
        FUN_10aac46d0(&uStack_3a0,pppppppuVar54 + 2);
        FUN_10aac4aa0(pppppppuVar54 + 3,&uStack_3a0);
        uStack_3a0 = &PTR_SUB_110b01d60;
        func_0x000107c2acd4(&uStack_3a0);
      }
      FUN_10aac4bc8(&uStack_3a0,pppppppuVar54 + 3,cVar48 == '\x01',pppppppuVar54[0x5e]);
      pppppppuVar54[0x24] = (undefined ******)uStack_3a0;
      (*(code *)*pppppppuVar54[0x25])(pppppppuVar54 + 0x25);
      (**(code **)(CONCAT44(uStack_398._4_4_,(float)uStack_398) + 0x10))
                (pppppppuVar54 + 0x25,&uStack_398);
      (**(code **)CONCAT44(uStack_398._4_4_,(float)uStack_398))(&uStack_398);
      bVar49 = *(byte *)(pppppppuVar54[0x25] + 1);
    }
    else {
      bVar49 = 1;
    }
LAB_10aab3648:
    FUN_10a14b194(&uStack_3a0,1);
    ppppppppuStack_680 = (undefined ********)uStack_3a0;
    plVar57 = plStack_678;
    plStack_678 = (long *)CONCAT44(uStack_398._4_4_,(float)uStack_398);
    uStack_398._0_4_ = 0.0;
    uStack_398._4_4_ = 0.0;
    uStack_3a0 = (undefined **)0x0;
    if (plVar57 != (long *)0x0) {
      plVar27 = plVar57 + 1;
      do {
        lVar41 = *plVar27;
        cVar48 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar14) {
          *plVar27 = lVar41 + -1;
          cVar48 = ExclusiveMonitorsStatus();
        }
      } while (cVar48 != '\0');
      if (lVar41 == 0) {
        (**(code **)(*plVar57 + 0x10))(plVar57);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar57);
      }
    }
    plVar57 = (long *)CONCAT44(uStack_398._4_4_,(float)uStack_398);
    if (plVar57 != (long *)0x0) {
      plVar27 = plVar57 + 1;
      do {
        lVar41 = *plVar27;
        cVar48 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar14) {
          *plVar27 = lVar41 + -1;
          cVar48 = ExclusiveMonitorsStatus();
        }
      } while (cVar48 != '\0');
      if (lVar41 == 0) {
        (**(code **)(*plVar57 + 0x10))(plVar57);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar57);
      }
    }
    pppppppuVar54 = ppppppppuVar32[0x41];
    uVar45 = *(uint *)((long)param_8 + 4);
    if ((*(char *)(param_8 + 6) == '\x01') && (param_8[3] != param_8[4])) {
      FUN_10aac7374(&ppppppppuStack_630,param_8 + 3,0x100000001);
      uStack_398._0_4_ = 0.0;
      uStack_398._4_4_ = 0.0;
      uStack_3a0 = (undefined **)0x0;
      uStack_390._0_4_ = 0.0;
      uStack_390._4_4_ = 0.0;
      func_0x0001096e4e8c(ppppppppuVar32 + 0x28,0x11382aac8,&uStack_3a0);
      ppppppppuStack_520 = (undefined ********)&uStack_3a0;
      FUN_10aada088(&ppppppppuStack_520);
      uStack_398._0_4_ = (float)uStack_628;
      uStack_398._4_4_ = uStack_628._4_4_;
      uStack_628._0_4_ = 0.0;
      uStack_628._4_4_ = 0.0;
      uStack_3a0 = &PTR_DAT_110b05928;
      func_0x0001096c34a4(ppppppppuVar32 + 0x28,&uStack_3a0);
      uStack_3a0 = &PTR_SUB_110b01d60;
      func_0x000107c2acd4(&uStack_3a0);
      ppppppppuStack_630 = (undefined ********)&PTR_SUB_110b01d60;
      func_0x000107c2acd4(&ppppppppuStack_630);
      uStack_390 = (undefined *******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
      ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
      uStack_388 = (undefined ********)CONCAT44(uStack_388._4_4_,(float)uStack_388);
      if (((ulong)param_8[6] & 1) == 0) goto LAB_10aab6e00;
      uVar45 = (int)((ulong)((long)param_8[4] - (long)param_8[3]) >> 2) * -0x33333333;
    }
    uVar60 = *(ulong *)(param_4 + 0x10);
    iVar18 = *(int *)(ppppppppuVar32 + 0x3a);
    ppppppppuVar31 = ppppppppuVar32 + 0x2a;
    iVar46 = *(int *)((long)ppppppppuVar32 + 0x1d4);
    ppppppppuVar56 = ppppppppuVar31;
    FUN_10a0ec6f0();
    iVar17 = (int)ppppppppuVar56;
    uVar42 = uVar60;
    uVar37 = uVar60 >> 0x20;
    if (((ulong)ppppppppuVar56 & 1) != 0) {
      uVar42 = uVar60 >> 0x20;
      uVar37 = uVar60;
    }
    iVar59 = (int)uVar42;
    iVar50 = (int)uVar37;
    if (iVar18 != iVar59 || iVar46 != iVar50) {
      iVar17 = iVar46;
      if (iVar46 <= iVar50) {
        iVar17 = iVar50;
      }
      iVar50 = iVar50 * iVar18 - iVar59 * iVar46;
      iVar46 = -iVar50;
      if (-1 < iVar50) {
        iVar46 = iVar50;
      }
      if (iVar46 < iVar17 * 4) {
        ppppppppuVar56 = ppppppppuVar32 + 0x28;
        func_0x0001096e4e0c(ppppppppuVar56,0x11382aac8);
        pppppppuVar43 = *ppppppppuVar56;
        pppppppuVar51 = ppppppppuVar56[1];
        if (pppppppuVar43 != pppppppuVar51) {
          do {
            pppppuVar55 = pppppppuVar43[2][1];
            for (uVar60 = ((long)pppppppuVar43[2][2] - (long)pppppuVar55) * 0x10000000 >> 0x1c &
                          0xfffffffffffffff0; uVar60 != 0; uVar60 = uVar60 - 0x10) {
              if (pppppuVar55[1] != (undefined ****)0x0) {
                uStack_398._0_4_ = 0.0;
                uStack_398._4_4_ = 0.0;
                uStack_3a0 = (undefined **)(ulong)(uint)((float)iVar59 / (float)iVar18);
                (*(code *)(*pppppuVar55)[8])(pppppuVar55,&uStack_3a0);
              }
              pppppuVar55 = pppppuVar55 + 2;
            }
            ppppppppuVar56 = (undefined ********)(pppppppuVar43 + 5);
            func_0x0001096c3b0c();
            pppppppuVar43 = pppppppuVar43 + 10;
          } while (pppppppuVar43 != pppppppuVar51);
        }
      }
      else {
        ppppppppuVar56 = ppppppppuVar32 + 0x28;
        func_0x0001096e4e0c(ppppppppuVar56,0x11382aac8);
        FUN_10aada0c8();
      }
      iVar17 = (int)ppppppppuVar56;
      ppppppppuVar32[0x3a] = (undefined *******)(uVar42 & 0xffffffff | uVar37 << 0x20);
    }
    FUN_10ad055a0();
    if (iVar17 == 0) {
LAB_10aab38dc:
      uStack_708 = 0;
      uStack_6f8 = 0x3f800000;
      uStack_6f4 = 0;
      ppppppppuVar56 = ppppppppuVar31;
      FUN_10a0ec6f0();
      uVar37 = *(ulong *)((long)puVar34 + 0x10);
      bVar14 = ((ulong)ppppppppuVar56 & 1) != 0;
      uVar42 = uVar37 >> 0x20;
      if (bVar14) {
        uVar42 = uVar37;
      }
      uStack_6e4 = uVar37 & 0xffffffff;
      if (bVar14) {
        uStack_6e4 = uVar37 >> 0x20;
      }
      uStack_6e4 = uStack_6e4 | uVar42 << 0x20;
      uStack_6fc = *(uint *)((long)param_8 + 4);
      ppppppuVar62 = (*ppppppppuVar32)[4];
      if ((ppppppuVar62 == (undefined ******)0x0) ||
         ((*(code *)(*ppppppuVar62)[1])(), (int)ppppppuVar62 == 0)) {
LAB_10aab3954:
        uVar47 = *(uint *)((long)ppppppppuVar32 + 0x24);
        uStack_390 = (undefined *******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
        ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
        uStack_388 = (undefined ********)CONCAT44(uStack_388._4_4_,(float)uStack_388);
        if (7 < uVar47) goto LAB_10aab6e00;
        iVar18 = *(int *)(&UNK_10e4f2894 + (ulong)uVar47 * 4);
        *(uint *)((long)ppppppppuVar32 + 0x24) = uVar47 + 1 & 7;
      }
      else {
        ppppppuVar62 = (*ppppppppuVar32)[4];
        (*(code *)**ppppppuVar62)();
        iVar18 = (int)ppppppuVar62;
        if (iVar18 == 0) goto LAB_10aab3954;
      }
      ppppppppuVar56 = ppppppppuVar31;
      iStack_704 = iVar18;
      FUN_10a0ec6f0();
      uStack_700 = SUB84(ppppppppuVar56,0);
      cStack_6e8 = *(char *)((long)param_8 + 0x14);
      if (*(char *)((long)param_8 + 0x16) == '\0') {
        bStack_6ec = 1;
      }
      else if (cStack_6e8 == '\0') {
        ppppppppuVar56 = (undefined ********)0x113835608;
        FUN_10a08f69c();
        bStack_6ec = *(byte *)ppppppppuVar56;
        cStack_6e8 = *(char *)((long)param_8 + 0x14);
      }
      else {
        bStack_6ec = 0;
      }
      bStack_6ec = bStack_6ec & 1;
      uStack_6dc = *(uint *)(param_8 + 1);
      uStack_6e7 = false;
      if (*(char *)((long)param_8 + 0x15) == '\0') {
LAB_10aab3a08:
        bVar14 = (bool)uStack_6e7 == false;
        ppppppppuVar28 = ppppppppuVar32 + 5;
        ppppppppuVar56 = (undefined ********)*ppppppppuVar28;
        if ((ppppppppuVar56 != (undefined ********)0x0) && ((bool)uStack_6e7 == false)) {
          __ZNSt3__117__assoc_sub_state4waitEv();
          ppppppppuVar56 = (undefined ********)*ppppppppuVar28;
          *ppppppppuVar28 = (undefined *******)0x0;
          if (ppppppppuVar56 != (undefined ********)0x0) {
            ppppppppuVar28 = ppppppppuVar56 + 1;
            do {
              pppppppuVar43 = *ppppppppuVar28;
              cVar48 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(ppppppppuVar28,0x10);
              if (bVar14) {
                *ppppppppuVar28 = (undefined *******)((long)pppppppuVar43 + -1);
                cVar48 = ExclusiveMonitorsStatus();
              }
            } while (cVar48 != '\0');
            if (pppppppuVar43 == (undefined *******)0x0) {
              (*(code *)(*ppppppppuVar56)[2])();
            }
          }
          bVar14 = true;
        }
      }
      else {
        if (*(int *)ppppppppuVar31 != 1) {
          ppppppppuVar56 = ppppppppuVar32;
          FUN_10aac7324();
          uStack_6e7 = 1 < (int)ppppppppuVar56;
          goto LAB_10aab3a08;
        }
        bVar14 = false;
        uStack_6e7 = 1;
      }
      ppppppppuVar28 = ppppppppuVar32 + 5;
      iVar18 = (int)ppppppppuVar56;
      FUN_10ad055a0();
      if (iVar18 != 0) {
        ppuVar23 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        if (*ppuVar23 == (undefined *)0x0) {
          ppuVar23 = &PTR___tlv_bootstrap_11340dd98;
          (*(code *)PTR___tlv_bootstrap_11340dd98)();
          plVar57 = (long *)*ppuVar23;
          if ((plVar57 == (long *)0x0) || ((**(code **)(*plVar57 + 0x18))(), plVar57 == (long *)0x0)
             ) goto LAB_10aab3a90;
          plVar57 = plVar57 + 7;
        }
        else {
          plVar57 = (long *)(*ppuVar23 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar57 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&ppppppppuStack_520,&UNK_10f68deb4);
          func_0x000107c2b054(&ppppppppuStack_440,&UNK_10f68da37);
          if ((int)uStack_510._4_4_ < 0) {
            pcVar33 = "null";
            if (CONCAT44(uStack_518._4_4_,(float)uStack_518) != 0) {
              pcVar33 = (char *)ppppppppuStack_520;
            }
          }
          else {
            pcVar33 = "null";
            if (uStack_510._7_1_ != '\0') {
              pcVar33 = (char *)&ppppppppuStack_520;
            }
          }
          if ((long)uStack_430 < 0) {
            pcVar40 = "null";
            if (uStack_438 != (undefined ********)0x0) {
              pcVar40 = (char *)ppppppppuStack_440;
            }
          }
          else {
            pcVar40 = "null";
            if (uStack_430._7_1_ != '\0') {
              pcVar40 = (char *)&ppppppppuStack_440;
            }
          }
          ppppppppuStack_630 = (undefined ********)pcVar40;
          uStack_3a0 = (undefined **)pcVar33;
          FUN_10a224324(&uStack_3a0,&ppppppppuStack_630);
          if ((int)uStack_510._4_4_ < 0) {
            if (CONCAT44(uStack_518._4_4_,(float)uStack_518) == 0) goto LAB_10aab66e0;
            func_0x000107c3192c(&uStack_3a0,ppppppppuStack_520);
LAB_10aab685c:
            uVar58 = 1;
          }
          else {
            if (uStack_510._7_1_ != '\0') {
              uStack_398._0_4_ = (float)uStack_518;
              uStack_398._4_4_ = uStack_518._4_4_;
              uStack_3a0 = (undefined **)ppppppppuStack_520;
              uStack_390._0_4_ = (float)uStack_510;
              uStack_390._4_4_ = uStack_510._4_4_;
              goto LAB_10aab685c;
            }
LAB_10aab66e0:
            uVar58 = 0;
            uStack_3a0 = (undefined **)((ulong)uStack_3a0 & 0xffffffffffffff00);
          }
          uStack_388._0_4_ = (float)CONCAT31(uStack_388._1_3_,uVar58);
          if ((long)uStack_430 < 0) {
            if (uStack_438 == (undefined ********)0x0) goto LAB_10aab6888;
            func_0x000107c3192c(&ppppppppuStack_630,ppppppppuStack_440);
LAB_10aab691c:
            uVar58 = 1;
          }
          else {
            if (uStack_430._7_1_ != '\0') {
              uStack_628._0_4_ = SUB84(uStack_438,0);
              uStack_628._4_4_ = (float)((ulong)uStack_438 >> 0x20);
              ppppppppuStack_630 = ppppppppuStack_440;
              uStack_620._0_4_ = SUB84(uStack_430,0);
              uStack_620._4_4_ = (float)((ulong)uStack_430 >> 0x20);
              goto LAB_10aab691c;
            }
LAB_10aab6888:
            uVar58 = 0;
            ppppppppuStack_630 =
                 (undefined ********)((ulong)ppppppppuStack_630 & 0xffffffffffffff00);
          }
          fStack_618 = (float)CONCAT31(fStack_618._1_3_,uVar58);
          FUN_10a234a0c(&uStack_3a0,&ppppppppuStack_630);
          ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
          goto LAB_10aab6e00;
        }
      }
LAB_10aab3a90:
      ppppppppuVar22 = ppppppppuVar32;
      FUN_10aac7538(ppppppppuVar32,*(uint *)((long)param_8 + 4));
      ppuVar23 = (undefined **)ppppppppuVar22;
      if ((int)ppppppppuVar22 != 0) {
        ppppppppuVar56 = (undefined ********)param_6[1];
        lStack_718 = param_6[1];
        lStack_720 = *param_6;
        if (ppppppppuVar56 != (undefined ********)0x0) {
          ppppppppuVar30 = ppppppppuVar56 + 1;
          do {
            cVar48 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar30,0x10);
            if (bVar8) {
              *ppppppppuVar30 = (undefined *******)((long)*ppppppppuVar30 + 1);
              cVar48 = ExclusiveMonitorsStatus();
            }
          } while (cVar48 != '\0');
        }
        ppuVar23 = (undefined **)ppppppppuVar32;
        FUN_10aac75a8(ppppppppuVar32,puVar34,&lStack_720,&uStack_708);
        if (ppppppppuVar56 != (undefined ********)0x0) {
          ppppppppuVar30 = ppppppppuVar56 + 1;
          do {
            pppppppuVar43 = *ppppppppuVar30;
            cVar48 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar30,0x10);
            if (bVar8) {
              *ppppppppuVar30 = (undefined *******)((long)pppppppuVar43 + -1);
              cVar48 = ExclusiveMonitorsStatus();
            }
          } while (cVar48 != '\0');
          if (pppppppuVar43 == (undefined *******)0x0) {
            (*(code *)(*ppppppppuVar56)[2])(ppppppppuVar56);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppuVar23 = (undefined **)ppppppppuVar56;
          }
        }
      }
      ppppppppuVar56 = (undefined ********)*ppppppppuVar28;
      if (ppppppppuVar56 != (undefined ********)0x0) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        uStack_3a0 = ppuVar23;
        func_0x0001093f25b0(ppppppppuVar56,&uStack_3a0);
        ppuVar23 = (undefined **)ppppppppuVar56;
        if ((int)ppppppppuVar56 == 0) {
          pppppppuVar43 = *ppppppppuVar28;
          *ppppppppuVar28 = (undefined *******)0x0;
          ppppppppuStack_630 = (undefined ********)(pppppppuVar43 + 3);
          uStack_628._0_4_ = (float)CONCAT31(uStack_628._1_3_,1);
          __ZNSt3__15mutex4lockEv();
          __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE
                    (pppppppuVar43,&ppppppppuStack_630);
          ppppppuVar62 = pppppppuVar43[2];
          ppppppppuStack_520 = (undefined ********)0x0;
          __ZNSt13exception_ptrD1Ev(&ppppppppuStack_520);
          if (ppppppuVar62 != (undefined ******)0x0) {
            __ZNSt13exception_ptrC1ERKS_(&ppppppppuStack_520,pppppppuVar43 + 2);
            __ZSt17rethrow_exceptionSt13exception_ptr(&ppppppppuStack_520);
            ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
            goto LAB_10aab6e00;
          }
          uStack_398._0_4_ = SUB84(pppppppuVar43[0x13],0);
          uStack_398._4_4_ = (float)((ulong)pppppppuVar43[0x13] >> 0x20);
          uStack_388._0_4_ = SUB84(pppppppuVar43[0x15],0);
          uStack_388._4_4_ = (float)((ulong)pppppppuVar43[0x15] >> 0x20);
          uStack_390._0_4_ = SUB84(pppppppuVar43[0x14],0);
          uStack_390._4_4_ = (float)((ulong)pppppppuVar43[0x14] >> 0x20);
          uStack_3a0 = &PTR_DAT_110b05928;
          uStack_380._0_4_ = SUB84(pppppppuVar43[0x16],0);
          uStack_380._4_4_ = (undefined4)((ulong)pppppppuVar43[0x16] >> 0x20);
          pppppppuVar43[0x13] = (undefined ******)0x0;
          pppppppuVar43[0x14] = (undefined ******)0x0;
          pppppppuVar43[0x15] = (undefined ******)0x0;
          pppppppuVar43[0x16] = (undefined ******)0x0;
          if ((char)uStack_628 == '\x01') {
            __ZNSt3__15mutex6unlockEv(ppppppppuStack_630);
          }
          pppppppuVar51 = pppppppuVar43 + 1;
          do {
            ppppppuVar62 = *pppppppuVar51;
            cVar48 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pppppppuVar51,0x10);
            if (bVar8) {
              *pppppppuVar51 = (undefined ******)((long)ppppppuVar62 + -1);
              cVar48 = ExclusiveMonitorsStatus();
            }
          } while (cVar48 != '\0');
          if (ppppppuVar62 == (undefined ******)0x0) {
            (*(code *)(*pppppppuVar43)[2])(pppppppuVar43);
          }
          pppppppuVar43 = (undefined *******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
          pppppppuVar51 = (undefined *******)CONCAT44(uStack_388._4_4_,(float)uStack_388);
          if (pppppppuVar43 == pppppppuVar51) {
            iStack_6b8 = *(int *)(ppppppppuVar32 + 4) + 1;
            *(int *)(ppppppppuVar32 + 4) = iStack_6b8;
          }
          else {
            *(undefined4 *)(ppppppppuVar32 + 4) = 0;
            if ((ulong)(((long)pppppppuVar51 - (long)pppppppuVar43 >> 2) * -0x3333333333333333) < 2)
            {
              FUN_10a505688(ppppppppuVar32 + 6);
              iStack_6b8 = *(int *)(ppppppppuVar32 + 4);
            }
            else {
              pppppppuVar53 = ppppppppuVar32[7];
              if (pppppppuVar53 != ppppppppuVar32[8]) {
                iVar18 = *(int *)((long)ppppppppuVar32 + 0x54);
                uVar42 = ((long)ppppppppuVar32[8] - (long)pppppppuVar53 >> 3) * -0x5555555555555555;
                iVar46 = 5;
                do {
                  if (iVar18 == 0) {
                    uVar47 = *(int *)(ppppppppuVar32 + 10) - 1;
                    if (*(int *)(ppppppppuVar32 + 10) < 1) break;
                    *(uint *)(ppppppppuVar32 + 10) = uVar47;
                    uStack_390 = pppppppuVar43;
                    ppppppppuVar56 =
                         (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
                    uStack_388 = (undefined ********)pppppppuVar51;
                    if (uVar42 < uVar47 || uVar42 - uVar47 == 0) goto LAB_10aab6e00;
                    iVar18 = *(int *)(pppppppuVar53 + (ulong)uVar47 * 3);
                  }
                  iVar17 = iVar18;
                  if (iVar46 <= iVar18) {
                    iVar17 = iVar46;
                  }
                  iVar18 = iVar18 - iVar17;
                  *(int *)((long)ppppppppuVar32 + 0x54) = iVar18;
                  iVar50 = iVar46 - iVar17;
                  bVar8 = iVar17 <= iVar46;
                  iVar46 = iVar50;
                } while (iVar50 != 0 && bVar8);
              }
              iStack_6b8 = 0;
            }
          }
          if (pppppppuStack_6d0 != (undefined *******)0x0) {
            pppppppuStack_6c8 = pppppppuStack_6d0;
            __ZdlPv();
          }
          lVar41 = CONCAT44(uStack_398._4_4_,(float)uStack_398);
          uStack_6c0 = (undefined5)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
          uStack_6bb = (undefined3)((uint)uStack_380._4_4_ >> 8);
          uStack_388._0_4_ = 0.0;
          uStack_388._4_4_ = 0.0;
          uStack_380._0_4_ = 0;
          uStack_380._4_4_ = 0;
          uStack_390._0_4_ = 0.0;
          uStack_390._4_4_ = 0.0;
          pppppppuStack_6d0 = pppppppuVar43;
          pppppppuStack_6c8 = pppppppuVar51;
          if ((*(long *)(lVar41 + 0x10) - *(long *)(lVar41 + 8) & 0xffffffff0U) != 0) {
            ppppppppuVar56 = ppppppppuVar32;
            FUN_10aac7324();
            iVar18 = (int)((ulong)((long)pppppppuStack_6c8 - (long)pppppppuStack_6d0) >> 2) *
                     -0x33333333;
            if ((int)ppppppppuVar56 < iVar18) {
              func_0x00010ae02ecc(0,iVar18);
              func_0x00010ae02ecc();
              ppuVar23 = &PTR_PTR_113306470;
              FUN_10ae079a0();
              func_0x00010ae02edc();
              func_0x00010ae02edc();
              FUN_10ae07cd4(ppuVar23,&PTR_PTR_113306470);
              lVar52 = *(long *)(lVar41 + 8);
              uVar42 = (*(long *)(lVar41 + 0x10) - lVar52) * 0x10000000 >> 0x1c & 0xfffffffffffffff0
              ;
              if (uVar42 != 0) {
                do {
                  lVar41 = *(long *)(lVar52 + 8);
                  fVar84 = *(float *)(lVar41 + 8);
                  fVar82 = *(float *)(lVar41 + 0xc);
                  fVar67 = fVar84;
                  _hypotf(fVar84,fVar82);
                  _atan2f(fVar82,fVar84);
                  func_0x00010ae02fdc((double)*(float *)(lVar41 + 0x10),0);
                  func_0x00010ae02fdc((double)*(float *)(lVar41 + 0x14));
                  func_0x00010ae02fdc((double)fVar67);
                  func_0x00010ae02fdc((double)fVar82);
                  ppuVar23 = &PTR_PTR_113306788;
                  FUN_10ae079a0();
                  func_0x00010ae02fec((double)*(float *)(lVar41 + 0x10));
                  func_0x00010ae02fec((double)*(float *)(lVar41 + 0x14));
                  func_0x00010ae02fec((double)fVar67);
                  func_0x00010ae02fec((double)fVar82);
                  FUN_10ae07cd4(ppuVar23,&PTR_PTR_113306788);
                  lVar52 = lVar52 + 0x10;
                  uVar42 = uVar42 - 0x10;
                } while (uVar42 != 0);
              }
            }
            uStack_628._0_4_ = (float)uStack_398;
            uStack_628._4_4_ = uStack_398._4_4_;
            uStack_398._0_4_ = 0.0;
            uStack_398._4_4_ = 0.0;
            ppppppppuStack_630 = (undefined ********)&PTR_DAT_110b05928;
            func_0x0001096c34a4(ppppppppuVar32 + 0x28,&ppppppppuStack_630);
            ppppppppuStack_630 = (undefined ********)&PTR_SUB_110b01d60;
            func_0x000107c2acd4(&ppppppppuStack_630);
          }
          uStack_3a0 = &PTR_SUB_110b01d60;
          ppuVar23 = (undefined **)&uStack_3a0;
          func_0x000107c2acd4();
        }
      }
      if (*(char *)(param_8 + 0x12) == '\x01') {
        iVar18 = *(int *)(ppppppppuVar32 + 0x3a);
        pcVar33 = "body";
        ppuVar23 = (undefined **)param_7;
        FUN_10aacfcb0(param_7,"body",4);
        if ((undefined ********)ppuVar23 != (undefined ********)0x0) {
          ppppppppuStack_440 = (undefined ********)ppuVar23[3];
          uStack_438 = (undefined ********)ppuVar23[4];
          if (uStack_438 != (undefined ********)0x0) {
            ppppppppuVar56 = uStack_438 + 1;
            do {
              cVar48 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar56,0x10);
              if (bVar8) {
                *ppppppppuVar56 = (undefined *******)((long)*ppppppppuVar56 + 1);
                cVar48 = ExclusiveMonitorsStatus();
              }
            } while (cVar48 != '\0');
          }
          if (ppppppppuStack_440 != (undefined ********)0x0) {
            uStack_628._0_4_ = 0.0;
            uStack_628._4_4_ = 0.0;
            ppppppppuStack_630 = (undefined ********)0x0;
            uStack_620 = (undefined *******)0x0;
            pppppppuVar43 = ppppppppuStack_440[3];
            ppppppppuVar56 = ppppppppuStack_440 + 3;
            if (((ulong)pppppppuVar43 & 1) != 0) {
              ppppppppuVar56 = (undefined ********)((long)pppppppuVar43 + 7);
            }
            pppppppuVar43 = (undefined *******)0x0;
            if (*(int *)(ppppppppuStack_440 + 4) != 0) {
              ppppppppuVar28 = ppppppppuVar56 + *(int *)(ppppppppuStack_440 + 4);
              fVar67 = (float)iVar18 / (float)*(int *)(ppppppppuStack_440 + 0x14);
              do {
                pppppppuVar43 = *ppppppppuVar56;
                uVar47 = *(uint *)(pppppppuVar43 + 2);
                if ((uVar47 >> 0x13 & 1) == 0) {
                  if ((uVar47 >> 0x15 & 1) != 0) {
LAB_10aab3f8c:
                    ppppppuVar62 = pppppppuVar43[9];
                    pppppppuVar51 = pppppppuVar43 + 9;
                    if (((ulong)ppppppuVar62 & 1) != 0) {
                      pppppppuVar51 = (undefined *******)((long)ppppppuVar62 + 7);
                    }
                    if (*(int *)(pppppppuVar43 + 10) != 0) {
                      lVar41 = (long)*(int *)(pppppppuVar43 + 10) << 3;
                      do {
                        ppppppuVar62 = *pppppppuVar51;
                        if (((*(byte *)((long)ppppppuVar62 + 0x12) >> 3 & 1) == 0) ||
                           (*(char *)((long)ppppppuVar62 + 0x13c) == '\x01')) {
                          if (((ulong)ppppppuVar62[0x16] & 3) == 0) {
                            ppuVar23 = ppuRam00000001132d06b0;
                            if (ppuRam00000001132d06b0 == (undefined **)0x0) {
                              ppuVar23 = &PTR_DAT_1132d0698;
                              func_0x00010b4befb0();
                            }
                          }
                          else {
                            ppuVar23 = (undefined **)
                                       ((ulong)ppppppuVar62[0x16] & 0xfffffffffffffffc);
                          }
                          if (*(char *)((long)ppuVar23 + 0x17) < '\0') {
                            if (ppuVar23[1] == (undefined *)0x4) {
                              ppuVar23 = (undefined **)*ppuVar23;
                              goto LAB_10aab4004;
                            }
                          }
                          else if (*(char *)((long)ppuVar23 + 0x17) == '\x04') {
LAB_10aab4004:
                            if (*(int *)ppuVar23 == 0x64616568) {
                              pppppuVar55 = (undefined *****)&PTR_PTR_1132cf958;
                              if (ppppppuVar62[0x22] != (undefined *****)0x0) {
                                pppppuVar55 = ppppppuVar62[0x22];
                              }
                              ppppuVar39 = (undefined ****)&PTR_PTR_1132d8bd0;
                              if (pppppuVar55[3] != (undefined ****)0x0) {
                                ppppuVar39 = pppppuVar55[3];
                              }
                              fVar82 = fVar67 * *(float *)(ppppuVar39 + 3);
                              fVar84 = fVar67 * *(float *)((long)ppppuVar39 + 0x1c);
                              ppppuVar39 = (undefined ****)&PTR_PTR_1132d8bd0;
                              if (pppppuVar55[4] != (undefined ****)0x0) {
                                ppppuVar39 = pppppuVar55[4];
                              }
                              fVar70 = fVar67 * *(float *)(ppppuVar39 + 3);
                              fVar81 = fVar67 * *(float *)((long)ppppuVar39 + 0x1c);
                              fVar80 = fVar70;
                              if (fVar82 <= fVar70) {
                                fVar80 = fVar82;
                              }
                              fVar83 = fVar81;
                              if (fVar84 <= fVar81) {
                                fVar83 = fVar84;
                              }
                              func_0x0001096c0650(&ppppppppuStack_520,(double)fVar80,(double)fVar83,
                                                  (double)ABS(fVar82 - fVar70),
                                                  (double)ABS(fVar84 - fVar81));
                              uStack_510._0_4_ = *(float *)(pppppppuVar43 + 0x26);
                              uStack_510._4_4_ = 1.4013e-45;
                              pppppppuVar43 =
                                   (undefined *******)CONCAT44(uStack_628._4_4_,(float)uStack_628);
                              if (pppppppuVar43 < uStack_620) {
                                *pppppppuVar43 = (undefined ******)&PTR_SUB_110b01d60;
                                pppppppuVar43[1] =
                                     (undefined ******)CONCAT44(uStack_518._4_4_,(float)uStack_518);
                                *pppppppuVar43 = (undefined ******)ppppppppuStack_520;
                                uStack_518._0_4_ = 0.0;
                                uStack_518._4_4_ = 0.0;
                                *pppppppuVar43 = (undefined ******)&PTR_DAT_110b051b8;
                                pppppppuVar43[2] = (undefined ******)CONCAT44(1,(float)uStack_510);
                                pppppppuVar43 = pppppppuVar43 + 3;
                              }
                              else {
                                lVar41 = (long)pppppppuVar43 - (long)ppppppppuStack_630;
                                uVar42 = (lVar41 >> 3) * -0x5555555555555555 + 1;
                                if (0xaaaaaaaaaaaaaaa < uVar42) {
                                  FUN_10aad47ec();
                                  ppppppppuVar56 =
                                       (undefined ********)
                                       CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
                                  goto LAB_10aab6e00;
                                }
                                lVar52 = (long)uStack_620 - (long)ppppppppuStack_630 >> 3;
                                uVar37 = lVar52 * 0x5555555555555556;
                                if (uVar37 < uVar42 || uVar37 - uVar42 == 0) {
                                  uVar37 = uVar42;
                                }
                                if (0x555555555555554 < (ulong)(lVar52 * -0x5555555555555555)) {
                                  uVar37 = 0xaaaaaaaaaaaaaaa;
                                }
                                uStack_380 = (undefined ********)&ppppppppuStack_630;
                                FUN_10aad4800();
                                plVar57 = (long *)(uVar37 + lVar41);
                                lVar41 = (long)pcVar33 * 0x18;
                                *plVar57 = (long)&PTR_SUB_110b01d60;
                                plVar57[1] = CONCAT44(uStack_518._4_4_,(float)uStack_518);
                                *plVar57 = (long)ppppppppuStack_520;
                                uStack_518._0_4_ = 0.0;
                                uStack_518._4_4_ = 0.0;
                                *plVar57 = (long)&PTR_DAT_110b051b8;
                                plVar57[2] = CONCAT44(uStack_510._4_4_,(float)uStack_510);
                                pppppppuVar43 = (undefined *******)(plVar57 + 3);
                                pcVar33 = (char *)CONCAT44(uStack_628._4_4_,(float)uStack_628);
                                ppppppppuVar30 =
                                     (undefined ********)
                                     ((long)plVar57 + ((long)ppppppppuStack_630 - (long)pcVar33));
                                FUN_10aad4844(ppppppppuStack_630,pcVar33,ppppppppuVar30);
                                uStack_390._0_4_ = SUB84(ppppppppuStack_630,0);
                                uStack_390._4_4_ = (float)((ulong)ppppppppuStack_630 >> 0x20);
                                uStack_3a0 = (undefined **)ppppppppuStack_630;
                                ppppppppuStack_630 = ppppppppuVar30;
                                uStack_398._0_4_ = (float)uStack_390;
                                uStack_398._4_4_ = uStack_390._4_4_;
                                uStack_628 = pppppppuVar43;
                                pppppppuVar51 = (undefined *******)(uVar37 + lVar41);
                                uStack_388 = (undefined ********)uStack_620;
                                func_0x0001096c3c30(&uStack_3a0);
                                uStack_620 = pppppppuVar51;
                              }
                              uStack_628._0_4_ = SUB84(pppppppuVar43,0);
                              uStack_628._4_4_ = (float)((ulong)pppppppuVar43 >> 0x20);
                              ppppppppuStack_520 = (undefined ********)&PTR_SUB_110b01d60;
                              func_0x000107c2acd4(&ppppppppuStack_520);
                              break;
                            }
                          }
                        }
                        pppppppuVar51 = pppppppuVar51 + 1;
                        lVar41 = lVar41 + -8;
                      } while (lVar41 != 0);
                    }
                  }
                }
                else if (((uVar47 >> 0x15 & 1) != 0) &&
                        ((*(byte *)((long)pppppppuVar43 + 0x13c) & 1) != 0)) goto LAB_10aab3f8c;
                ppppppppuVar56 = ppppppppuVar56 + 1;
              } while (ppppppppuVar56 != ppppppppuVar28);
              pppppppuVar43 = uStack_620;
              if (ppppppppuStack_630 !=
                  (undefined ********)CONCAT44(uStack_628._4_4_,(float)uStack_628)) {
                uStack_518._0_4_ = 0.0;
                uStack_518._4_4_ = 0.0;
                ppppppppuStack_520 = (undefined ********)0x0;
                uStack_510._0_4_ = 0.0;
                uStack_510._4_4_ = 0.0;
                pppppppuVar43 = ppppppppuVar32[0x29] + -4;
                lVar41 = lRam000000011382aa98;
                func_0x0001096966c0();
                if (pppppppuVar43 == (undefined *******)0x0) {
                  puVar21 = (undefined8 *)0x0;
                }
                else {
                  func_0x0001096c33fc(&uStack_3a0,ppppppppuVar32 + 0x28);
                  func_0x0001096c3b60(&ppppppppuStack_520);
                  uStack_518._0_4_ = (float)uStack_398;
                  uStack_518._4_4_ = uStack_398._4_4_;
                  ppppppppuStack_520 = (undefined ********)uStack_3a0;
                  uStack_510._0_4_ = (float)uStack_390;
                  uStack_510._4_4_ = uStack_390._4_4_;
                  uStack_390._0_4_ = 0.0;
                  uStack_390._4_4_ = 0.0;
                  uStack_398._0_4_ = 0.0;
                  uStack_398._4_4_ = 0.0;
                  uStack_3a0 = (undefined **)0x0;
                  FUN_10aad48d0(&uStack_3a0);
                  puVar21 = (undefined8 *)CONCAT44(uStack_518._4_4_,(float)uStack_518);
                }
                ppppppppuVar30 = ppppppppuStack_520;
                ppppppppuVar56 = ppppppppuStack_630;
                ppppppppuVar28 = (undefined ********)CONCAT44(uStack_628._4_4_,(float)uStack_628);
                lVar52 = (long)ppppppppuVar28 - (long)ppppppppuStack_630;
                uStack_510 = (undefined *******)CONCAT44(uStack_510._4_4_,(float)uStack_510);
                if (0 < lVar52) {
                  puVar24 = (undefined8 *)CONCAT44(uStack_518._4_4_,(float)uStack_518);
                  if (CONCAT44(uStack_510._4_4_,(float)uStack_510) - (long)puVar24 < lVar52) {
                    uVar42 = (lVar52 >> 3) * -0x5555555555555555 +
                             ((long)puVar24 - (long)ppppppppuStack_520 >> 3) * -0x5555555555555555;
                    if (0xaaaaaaaaaaaaaaa < uVar42) {
                      FUN_10aad47ec();
                      ppppppppuVar56 =
                           (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
                      goto LAB_10aab6e00;
                    }
                    lVar38 = CONCAT44(uStack_510._4_4_,(float)uStack_510) - (long)ppppppppuStack_520
                             >> 3;
                    uVar37 = lVar38 * 0x5555555555555556;
                    if (uVar37 < uVar42 || uVar37 - uVar42 == 0) {
                      uVar37 = uVar42;
                    }
                    if (0x555555555555554 < (ulong)(lVar38 * -0x5555555555555555)) {
                      uVar37 = 0xaaaaaaaaaaaaaaa;
                    }
                    uStack_380 = (undefined ********)&ppppppppuStack_520;
                    if (uVar37 == 0) {
                      lVar41 = 0;
                    }
                    else {
                      FUN_10aad4800();
                    }
                    puVar2 = (undefined8 *)((long)puVar21 + (uVar37 - (long)ppppppppuVar30));
                    uStack_388 = (undefined ********)(uVar37 + lVar41 * 0x18);
                    puVar3 = (undefined8 *)((long)puVar2 + lVar52);
                    puVar24 = puVar2;
                    do {
                      *puVar24 = &PTR_SUB_110b01d60;
                      pppppppuVar43 = *ppppppppuVar56;
                      puVar24[1] = ppppppppuVar56[1];
                      *puVar24 = pppppppuVar43;
                      if (puVar24[1] != 0) {
                        piVar44 = (int *)(puVar24[1] + -8);
                        do {
                          cVar48 = '\x01';
                          bVar8 = (bool)ExclusiveMonitorPass(piVar44,0x10);
                          if (bVar8) {
                            *piVar44 = *piVar44 + 1;
                            cVar48 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar48 != '\0');
                      }
                      *puVar24 = &PTR_DAT_110b051b8;
                      puVar24[2] = ppppppppuVar56[2];
                      puVar24 = puVar24 + 3;
                      ppppppppuVar56 = ppppppppuVar56 + 3;
                    } while (puVar24 != puVar3);
                    FUN_10aad4844(puVar21,CONCAT44(uStack_518._4_4_,(float)uStack_518),puVar3);
                    lVar41 = CONCAT44(uStack_518._4_4_,(float)uStack_518);
                    uStack_518._0_4_ = SUB84(puVar21,0);
                    uStack_518._4_4_ = (float)((ulong)puVar21 >> 0x20);
                    ppppppppuVar56 =
                         (undefined ********)
                         ((long)puVar2 + ((long)ppppppppuStack_520 - (long)puVar21));
                    FUN_10aad4844(ppppppppuStack_520,puVar21,ppppppppuVar56);
                    pppppppuVar43 = (undefined *******)uStack_388;
                    uStack_390._0_4_ = SUB84(ppppppppuStack_520,0);
                    uStack_390._4_4_ = (float)((ulong)ppppppppuStack_520 >> 0x20);
                    uStack_388._0_4_ = (float)uStack_510;
                    uStack_388._4_4_ = uStack_510._4_4_;
                    uStack_3a0 = (undefined **)ppppppppuStack_520;
                    ppppppppuStack_520 = ppppppppuVar56;
                    uStack_398._0_4_ = (float)uStack_390;
                    uStack_398._4_4_ = uStack_390._4_4_;
                    uStack_510 = pppppppuVar43;
                    uStack_518 = (undefined8 *)((long)puVar3 + (lVar41 - (long)puVar21));
                    func_0x0001096c3c30(&uStack_3a0);
                  }
                  else {
                    lVar41 = (long)puVar24 - (long)puVar21;
                    if (lVar41 < lVar52) {
                      ppppppppuVar29 = (undefined ********)(lVar41 + (long)ppppppppuStack_630);
                      uStack_518 = puVar24;
                      for (ppppppppuVar30 = ppppppppuVar29; ppppppppuVar30 != ppppppppuVar28;
                          ppppppppuVar30 = ppppppppuVar30 + 3) {
                        *uStack_518 = &PTR_SUB_110b01d60;
                        pppppppuVar43 = *ppppppppuVar30;
                        uStack_518[1] = ppppppppuVar30[1];
                        *uStack_518 = pppppppuVar43;
                        if (uStack_518[1] != 0) {
                          piVar44 = (int *)(uStack_518[1] + -8);
                          do {
                            cVar48 = '\x01';
                            bVar8 = (bool)ExclusiveMonitorPass(piVar44,0x10);
                            if (bVar8) {
                              *piVar44 = *piVar44 + 1;
                              cVar48 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar48 != '\0');
                        }
                        *uStack_518 = &PTR_DAT_110b051b8;
                        uStack_518[2] = ppppppppuVar30[2];
                        uStack_518 = uStack_518 + 3;
                      }
                      uStack_510 = (undefined *******)CONCAT44(uStack_510._4_4_,(float)uStack_510);
                      if (0 < lVar41) {
                        FUN_10aad494c(&ppppppppuStack_520,puVar21,puVar24,(long)puVar21 + lVar52);
                        do {
                          if ((undefined *******)puVar21[1] != ppppppppuVar56[1]) {
                            func_0x000107c2acd4(puVar21);
                            pppppppuVar43 = *ppppppppuVar56;
                            puVar21[1] = ppppppppuVar56[1];
                            *puVar21 = pppppppuVar43;
                            if (puVar21[1] != 0) {
                              piVar44 = (int *)(puVar21[1] + -8);
                              do {
                                cVar48 = '\x01';
                                bVar8 = (bool)ExclusiveMonitorPass(piVar44,0x10);
                                if (bVar8) {
                                  *piVar44 = *piVar44 + 1;
                                  cVar48 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar48 != '\0');
                            }
                          }
                          puVar21[2] = ppppppppuVar56[2];
                          ppppppppuVar56 = ppppppppuVar56 + 3;
                          puVar21 = puVar21 + 3;
                        } while (ppppppppuVar56 != ppppppppuVar29);
                      }
                    }
                    else {
                      FUN_10aad494c(&ppppppppuStack_520,puVar21,puVar24,(long)puVar21 + lVar52);
                      do {
                        if ((undefined *******)puVar21[1] != ppppppppuVar56[1]) {
                          func_0x000107c2acd4(puVar21);
                          pppppppuVar43 = *ppppppppuVar56;
                          puVar21[1] = ppppppppuVar56[1];
                          *puVar21 = pppppppuVar43;
                          if (puVar21[1] != 0) {
                            piVar44 = (int *)(puVar21[1] + -8);
                            do {
                              cVar48 = '\x01';
                              bVar8 = (bool)ExclusiveMonitorPass(piVar44,0x10);
                              if (bVar8) {
                                *piVar44 = *piVar44 + 1;
                                cVar48 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar48 != '\0');
                          }
                        }
                        puVar21[2] = ppppppppuVar56[2];
                        ppppppppuVar56 = ppppppppuVar56 + 3;
                        puVar21 = puVar21 + 3;
                      } while (ppppppppuVar56 != ppppppppuVar28);
                    }
                  }
                }
                func_0x0001096c36a0(ppppppppuVar32 + 0x28,0x11382aa98,&ppppppppuStack_520);
                FUN_10aad48d0(&ppppppppuStack_520);
                pppppppuVar43 = uStack_620;
              }
            }
            ppuVar23 = (undefined **)&ppppppppuStack_630;
            uStack_620 = pppppppuVar43;
            FUN_10aad48d0();
          }
          ppppppppuVar56 = uStack_438;
          if (uStack_438 != (undefined ********)0x0) {
            ppppppppuVar28 = uStack_438 + 1;
            do {
              pppppppuVar43 = *ppppppppuVar28;
              cVar48 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar28,0x10);
              if (bVar8) {
                *ppppppppuVar28 = (undefined *******)((long)pppppppuVar43 + -1);
                cVar48 = ExclusiveMonitorsStatus();
              }
            } while (cVar48 != '\0');
            if (pppppppuVar43 == (undefined *******)0x0) {
              (*(code *)(*uStack_438)[2])(uStack_438);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppuVar23 = (undefined **)ppppppppuVar56;
            }
          }
        }
      }
      FUN_10ad055a0();
      if ((int)ppuVar23 != 0) {
        ppuVar23 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        if ((undefined *******)*ppuVar23 == (undefined *******)0x0) {
          ppuVar23 = &PTR___tlv_bootstrap_11340dd98;
          (*(code *)PTR___tlv_bootstrap_11340dd98)();
          ppuVar23 = (undefined **)*ppuVar23;
          if ((undefined ********)ppuVar23 != (undefined ********)0x0) {
            (*(code *)*(undefined *******)((long)*ppuVar23 + 0x18))();
            if ((undefined ********)ppuVar23 != (undefined ********)0x0) {
              ppppppppuVar56 = (undefined ********)(ppuVar23 + 7);
              goto LAB_10aab45ac;
            }
          }
        }
        else {
          ppppppppuVar56 = (undefined ********)((long)*ppuVar23 + 8);
LAB_10aab45ac:
          if (((uint)(*ppppppppuVar56)[2] >> 1 & 1) != 0) {
            func_0x000107c2b054(&ppppppppuStack_520,&UNK_10f68ded0);
            func_0x000107c2b054(&ppppppppuStack_440,&UNK_10f68da37);
            if ((long)uStack_510 < 0) {
              pcVar33 = "null";
              if (uStack_518 != (undefined8 *)0x0) {
                pcVar33 = (char *)ppppppppuStack_520;
              }
            }
            else {
              pcVar33 = "null";
              if (uStack_510._7_1_ != '\0') {
                pcVar33 = (char *)&ppppppppuStack_520;
              }
            }
            if ((long)uStack_430 < 0) {
              pcVar40 = "null";
              if (uStack_438 != (undefined ********)0x0) {
                pcVar40 = (char *)ppppppppuStack_440;
              }
            }
            else {
              pcVar40 = "null";
              if (uStack_430._7_1_ != '\0') {
                pcVar40 = (char *)&ppppppppuStack_440;
              }
            }
            ppppppppuStack_630 = (undefined ********)pcVar40;
            uStack_3a0 = (undefined **)pcVar33;
            FUN_10a224324(&uStack_3a0,&ppppppppuStack_630);
            if ((long)uStack_510 < 0) {
              if (uStack_518 == (undefined8 *)0x0) goto LAB_10aab6770;
              func_0x000107c3192c(&uStack_3a0,ppppppppuStack_520);
              uStack_398 = (undefined8 *)CONCAT44(uStack_398._4_4_,(float)uStack_398);
              uStack_390 = (undefined *******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
LAB_10aab68a4:
              uVar58 = 1;
              pppppppuVar54 = (undefined *******)uStack_388;
            }
            else {
              if (uStack_510._7_1_ != '\0') {
                uStack_3a0 = (undefined **)ppppppppuStack_520;
                uStack_398 = uStack_518;
                uStack_390 = uStack_510;
                goto LAB_10aab68a4;
              }
LAB_10aab6770:
              uVar58 = 0;
              uStack_3a0 = (undefined **)((ulong)uStack_3a0 & 0xffffffffffffff00);
              pppppppuVar54 = (undefined *******)uStack_388;
            }
            uStack_388._4_4_ = (float)((ulong)pppppppuVar54 >> 0x20);
            uStack_388._1_3_ = (undefined3)((ulong)pppppppuVar54 >> 8);
            uStack_388._0_4_ = (float)CONCAT31(uStack_388._1_3_,uVar58);
            if ((long)uStack_430 < 0) {
              if (uStack_438 == (undefined ********)0x0) goto LAB_10aab68d0;
              func_0x000107c3192c(&ppppppppuStack_630,ppppppppuStack_440);
LAB_10aab6944:
              uVar58 = 1;
            }
            else {
              if (uStack_430._7_1_ != '\0') {
                uStack_628._0_4_ = SUB84(uStack_438,0);
                uStack_628._4_4_ = (float)((ulong)uStack_438 >> 0x20);
                ppppppppuStack_630 = ppppppppuStack_440;
                uStack_620 = uStack_430;
                goto LAB_10aab6944;
              }
LAB_10aab68d0:
              uVar58 = 0;
              ppppppppuStack_630 =
                   (undefined ********)((ulong)ppppppppuStack_630 & 0xffffffffffffff00);
            }
            fStack_618 = (float)CONCAT31(fStack_618._1_3_,uVar58);
            FUN_10a234a0c(&uStack_3a0,&ppppppppuStack_630);
            ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
            goto LAB_10aab6e00;
          }
        }
      }
      uStack_610 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
      if ((((bVar49 & 1) != 0) &&
          (uStack_610 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610),
          *(char *)(pppppppuVar54[0x25] + 1) == '\x01')) &&
         (uStack_610 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610),
         *(int *)(ppppppppuVar32[0x41] + 0x2c) < 10)) {
        pppppppuVar43 = *(undefined ********)(param_4 + 0x28);
        uVar35 = *(undefined8 *)(param_4 + 0x10);
        uVar76 = *(undefined4 *)(param_4 + 0x18);
        uVar75 = *(undefined4 *)(param_4 + 0x20);
        uVar19 = *(uint *)(param_4 + 0x24);
        pppppppuStack_4a0 = (undefined *******)&PTR_SUB_110b01d60;
        ppppppuStack_498 = (undefined ******)0x0;
        uVar47 = 2;
        if ((uVar19 & 0xfffffffe) != 4) {
          uVar47 = (uint)(uVar19 == 0);
        }
        uVar5 = 3;
        if (uVar19 != 2) {
          uVar5 = uVar47;
        }
        func_0x00010aac839c();
        puVar21 = (undefined8 *)0x28;
        if ((int)((ulong)ppuVar23 >> 0x20) * (int)ppuVar23 == 1) {
          _malloc();
          if (puVar21 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar21 + 3) = 1;
            *puVar21 = 0;
            puVar21[1] = 0;
            *(undefined4 *)(puVar21 + 2) = 0;
            puVar21 = puVar21 + 4;
            *puVar21 = &PTR_DAT_110b00de0;
          }
          uStack_398._0_4_ = SUB84(puVar21,0);
          uStack_398._4_4_ = (float)((ulong)puVar21 >> 0x20);
          uStack_3a0 = &PTR_DAT_110b03088;
          ppppppppuStack_630 = (undefined ********)CONCAT44(ppppppppuStack_630._4_4_,uVar5);
          func_0x0001096a75d0(&uStack_3a0,0x11382aa38,&ppppppppuStack_630);
          func_0x0001093e08bc(&ppppppppuStack_630,&uStack_3a0);
          ppppppuVar62 = (undefined ******)CONCAT44(uStack_628._4_4_,(float)uStack_628);
          uStack_628._0_4_ = SUB84(ppppppuStack_498,0);
          uStack_628._4_4_ = (float)((ulong)ppppppuStack_498 >> 0x20);
          pppppppuStack_4a0 = (undefined *******)ppppppppuStack_630;
          ppppppppuStack_630 = (undefined ********)&PTR_SUB_110b01d60;
          ppppppuStack_498 = ppppppuVar62;
          func_0x000107c2acd4(&ppppppppuStack_630);
          uStack_3a0 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&uStack_3a0);
        }
        else {
          _malloc();
          if (puVar21 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar21 + 3) = 1;
            *puVar21 = 0;
            puVar21[1] = 0;
            *(undefined4 *)(puVar21 + 2) = 0;
            puVar21 = puVar21 + 4;
            *puVar21 = &PTR_DAT_110b00de0;
          }
          uStack_398._0_4_ = SUB84(puVar21,0);
          uStack_398._4_4_ = (float)((ulong)puVar21 >> 0x20);
          uStack_3a0 = &PTR_DAT_110b02e88;
          func_0x00010aac839c();
          puVar24 = &uStack_3a0;
          ppppppppuStack_630._0_4_ = (int)puVar21;
          func_0x0001096a75d0(puVar24,0x11382aa28,&ppppppppuStack_630);
          uVar77 = (undefined4)((ulong)puVar24 >> 0x20);
          func_0x00010aac839c();
          ppppppppuStack_630._0_4_ = uVar77;
          func_0x0001096a75d0(&uStack_3a0,0x11382aa30,&ppppppppuStack_630);
          ppppppppuStack_630 = (undefined ********)CONCAT44(ppppppppuStack_630._4_4_,uVar5);
          func_0x0001096a75d0(&uStack_3a0,0x11382aa20,&ppppppppuStack_630);
          func_0x0001093e08bc(&ppppppppuStack_630,&uStack_3a0);
          ppppppuVar62 = (undefined ******)CONCAT44(uStack_628._4_4_,(float)uStack_628);
          uStack_628._0_4_ = SUB84(ppppppuStack_498,0);
          uStack_628._4_4_ = (float)((ulong)ppppppuStack_498 >> 0x20);
          pppppppuStack_4a0 = (undefined *******)ppppppppuStack_630;
          ppppppppuStack_630 = (undefined ********)&PTR_SUB_110b01d60;
          ppppppuStack_498 = ppppppuVar62;
          func_0x000107c2acd4(&ppppppppuStack_630);
          uStack_3a0 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&uStack_3a0);
        }
        uVar35 = NEON_rev64(uVar35,4);
        uStack_398._0_4_ = (float)uVar35;
        uStack_398._4_4_ = (float)((ulong)uVar35 >> 0x20);
        uStack_3a0 = (undefined **)pppppppuVar43;
        uStack_390._0_4_ = (float)uVar76;
        uStack_390._4_4_ = (float)uVar75;
        (*(code *)pppppppuStack_4a0[4])(&pppppppuStack_480,&pppppppuStack_4a0,&uStack_3a0);
        uVar42 = *(ulong *)(param_4 + 0x10);
        ppppppppuVar56 = ppppppppuVar31;
        FUN_10a0ec6f0();
        uVar19 = (uint)ppppppppuVar56;
        uVar47 = uVar19 >> 2 & 3;
        if (((ulong)ppppppppuVar56 & 1) != 0) {
          uVar47 = uVar19 >> 1 & 2 | ((uint)((ulong)ppppppppuVar56 >> 2) & 0x3fffffff) >> 1 & 1;
        }
        uVar37 = uVar42;
        uVar60 = uVar42 >> 0x20;
        if ((-uVar19 & 1) != 0) {
          uVar37 = uVar42 >> 0x20;
          uVar60 = uVar42;
        }
        uStack_628._0_4_ = 1.0 / (float)(int)uVar37;
        uStack_620._4_4_ = 1.0 / (float)(int)uVar60;
        ppppppppuStack_630 = (undefined ********)0xbf000000bf000000;
        uStack_628._4_4_ = 0.0;
        uStack_620._0_4_ = 0.0;
        fVar82 = 1.5707964;
        fVar67 = (float)(-uVar19 & 3) * 1.5707964;
        ___sincosf_stret();
        ppppppppuStack_520 = (undefined ********)0x0;
        uStack_518._0_4_ = fVar82;
        uStack_518._4_4_ = fVar67;
        uStack_510._0_4_ = -fVar67;
        uStack_510._4_4_ = fVar82;
        uStack_438 = (undefined ********)0x3f800000;
        uStack_430 = (undefined *******)0x3f80000000000000;
        if (1 < uVar47) {
          uStack_438 = (undefined ********)0xbf800000;
          uStack_430 = (undefined *******)0x3f80000080000000;
        }
        if ((uVar47 & 1) != 0) {
          uStack_438 = (undefined ********)CONCAT44(0x80000000,(undefined4)uStack_438);
          uStack_430 = (undefined *******)CONCAT44(0xbf800000,(undefined4)uStack_430);
        }
        lVar41 = 0;
        ppppppppuStack_440 = (undefined ********)0x3f0000003f000000;
        pppppppuStack_560 = (undefined *******)0x0;
        afStack_558[1] = 0.0;
        afStack_558[2] = 0.0;
        afStack_558[0] = (float)(int)uVar42;
        afStack_558[3] = (float)(int)(uVar42 >> 0x20);
        uStack_468 = 0;
        ppppppppuStack_470 = (undefined ********)0x0;
        uStack_460 = 0;
        do {
          lVar52 = 0;
          bVar8 = true;
          do {
            bVar15 = bVar8;
            lVar38 = 0;
            pfVar4 = (float *)((long)&ppppppppuStack_470 + lVar52 * 4 + lVar41 * 8);
            fVar67 = *pfVar4;
            bVar8 = true;
            do {
              bVar16 = bVar8;
              fVar67 = fVar67 + afStack_558[lVar38 * 2 + lVar52] *
                                *(float *)((long)&ppppppppuStack_440 + lVar38 * 4 + lVar41 * 8);
              lVar38 = 1;
              bVar8 = false;
            } while (bVar16);
            *pfVar4 = fVar67;
            lVar52 = 1;
            bVar8 = false;
          } while (bVar15);
          lVar41 = lVar41 + 1;
        } while (lVar41 != 3);
        lVar41 = 0;
        uStack_3a0 = (undefined **)ppppppppuStack_470;
        uStack_390._0_4_ = 0.0;
        uStack_390._4_4_ = 0.0;
        uStack_398._0_4_ = 0.0;
        uStack_398._4_4_ = 0.0;
        do {
          lVar52 = 0;
          bVar8 = true;
          do {
            bVar15 = bVar8;
            lVar38 = 0;
            pfVar4 = (float *)((long)&uStack_3a0 + lVar52 * 4 + lVar41 * 8);
            fVar67 = *pfVar4;
            bVar8 = true;
            do {
              bVar16 = bVar8;
              fVar67 = fVar67 + *(float *)((long)&uStack_468 + lVar52 * 4 + lVar38 * 8) *
                                *(float *)((long)&ppppppppuStack_520 + lVar38 * 4 + lVar41 * 8);
              lVar38 = 1;
              bVar8 = false;
            } while (bVar16);
            *pfVar4 = fVar67;
            lVar52 = 1;
            bVar8 = false;
          } while (bVar15);
          lVar41 = lVar41 + 1;
        } while (lVar41 != 3);
        lVar41 = 0;
        ppppppppuStack_3d0 = (undefined ********)uStack_3a0;
        pppppppuStack_3c0 = (undefined *******)0x0;
        ppppppppuStack_3c8 = (undefined ********)0x0;
        do {
          lVar52 = 0;
          bVar8 = true;
          do {
            bVar15 = bVar8;
            lVar38 = 0;
            pfVar4 = (float *)((long)&ppppppppuStack_3d0 + lVar52 * 4 + lVar41 * 8);
            fVar67 = *pfVar4;
            bVar8 = true;
            do {
              bVar16 = bVar8;
              fVar82 = *(float *)((long)&ppppppppuStack_630 + lVar38 * 4 + lVar41 * 8);
              pppppppuVar43 = (undefined *******)(ulong)(uint)fVar82;
              fVar67 = fVar67 + *(float *)((long)&uStack_398 + lVar52 * 4 + lVar38 * 8) * fVar82;
              lVar38 = 1;
              bVar8 = false;
            } while (bVar16);
            *pfVar4 = fVar67;
            lVar52 = 1;
            bVar8 = false;
          } while (bVar15);
          lVar41 = lVar41 + 1;
        } while (lVar41 != 3);
        func_0x0001096a54f0(&ppppppppuStack_470,&pppppppuStack_480,&ppppppppuStack_3d0,uVar60,uVar37
                           );
        FUN_10a4cb5a0(&uStack_3a0,ppppppppuVar31);
        FUN_10a2288e0(&uStack_3a0,uVar37 & 0xffffffff | uVar60 << 0x20);
        ppppuStack_528 = (undefined ****)CONCAT44((undefined4)uStack_380,uStack_388._4_4_);
        ppuStack_530 = (undefined **)CONCAT44((float)uStack_388,uStack_390._4_4_);
        func_0x0001096a5b90(&ppppppppuStack_470,0x11382aa18,&ppuStack_530);
        func_0x0001096a57ec(appuStack_730,&ppppppppuStack_470);
        if (plStack_328 != (long *)0x0) {
          plVar57 = plStack_328 + 1;
          do {
            lVar41 = *plVar57;
            cVar48 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar57,0x10);
            if (bVar8) {
              *plVar57 = lVar41 + -1;
              cVar48 = ExclusiveMonitorsStatus();
            }
          } while (cVar48 != '\0');
          if (lVar41 == 0) {
            (**(code **)(*plStack_328 + 0x10))(plStack_328);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_328);
          }
        }
        ppppppppuStack_470 = (undefined ********)&PTR_SUB_110b01d60;
        func_0x000107c2acd4(&ppppppppuStack_470);
        pppppppuStack_480 = (undefined *******)&PTR_SUB_110b01d60;
        func_0x000107c2acd4(&pppppppuStack_480);
        pppppppuStack_4a0 = (undefined *******)&PTR_SUB_110b01d60;
        func_0x000107c2acd4(&pppppppuStack_4a0);
        func_0x0001096ae684(ppppppppuVar32 + 0x28,0,appuStack_730);
        if ((param_5 != 0) && (*(long *)(param_5 + 0x10) != 0)) {
          uVar42 = (ulong)*(uint *)(param_5 + 4);
          if ((int)*(uint *)(param_5 + 4) < 3) {
            lVar41 = (long)*(int *)(param_5 + 0xc) * (long)*(int *)(param_5 + 8);
          }
          else {
            lVar41 = 1;
            piVar44 = *(int **)(param_5 + 0x40);
            do {
              lVar41 = lVar41 * *piVar44;
              uVar42 = uVar42 - 1;
              piVar44 = piVar44 + 1;
            } while (uVar42 != 0);
          }
          if (lVar41 != 0) {
            func_0x00010919c904(auStack_790,param_5);
            func_0x0001096ae4f0(ppppppppuVar32 + 0x28,1,auStack_790);
            func_0x00010567aa40(auStack_790);
            uStack_3a0 = (undefined **)(double)*(float *)(param_5 + 0x1f8);
            func_0x0001096c1eb4(ppppppppuVar32 + 0x28,0x11382aa80,&uStack_3a0);
          }
        }
        if (cVar6 == '\0') {
          uVar47 = 500000000;
        }
        else {
          uVar47 = 1000000;
          if (1 < iRam00000001132ffd98) {
            uVar47 = 8000000;
          }
        }
        uStack_3a0 = (undefined **)(ulong)uVar47;
        func_0x0001096e79dc(ppppppppuVar32 + 0x28,0x11382ab10,&uStack_3a0);
        uStack_3a0._0_1_ = cVar6 == '\0';
        func_0x000109693d2c(ppppppppuVar32 + 0x28,0x11382ab18,&uStack_3a0);
        uStack_3a0 = (undefined **)CONCAT71(uStack_3a0._1_7_,*(undefined1 *)(param_8 + 0x13));
        func_0x000109693d2c(ppppppppuVar32 + 0x28,0x11382aa88,&uStack_3a0);
        uStack_3a0 = (undefined **)CONCAT44(uStack_3a0._4_4_,uVar45);
        ppppppppuVar56 = ppppppppuVar32 + 0x28;
        func_0x0001096ae7b0(ppppppppuVar56,0x11382aaa0,&uStack_3a0);
        iVar18 = (int)ppppppppuVar56;
        FUN_10ad055a0();
        if (iVar18 != 0) {
          ppuVar23 = &PTR___tlv_bootstrap_11340dfd8;
          (*(code *)PTR___tlv_bootstrap_11340dfd8)();
          if (*ppuVar23 == (undefined *)0x0) {
            ppuVar23 = &PTR___tlv_bootstrap_11340dd98;
            (*(code *)PTR___tlv_bootstrap_11340dd98)();
            plVar57 = (long *)*ppuVar23;
            if (plVar57 != (long *)0x0) {
              (**(code **)(*plVar57 + 0x18))();
              if (plVar57 != (long *)0x0) {
                plVar57 = plVar57 + 7;
                goto LAB_10aab4c90;
              }
            }
          }
          else {
            plVar57 = (long *)(*ppuVar23 + 8);
LAB_10aab4c90:
            if (((uint)*(undefined8 *)(*plVar57 + 0x10) >> 1 & 1) != 0) {
              func_0x000107c2b054(&ppppppppuStack_520,&UNK_10f68def5);
              func_0x000107c2b054(&ppppppppuStack_440,&UNK_10f68da37);
              if ((int)uStack_510._4_4_ < 0) {
                pcVar33 = "null";
                if (CONCAT44(uStack_518._4_4_,(float)uStack_518) != 0) {
                  pcVar33 = (char *)ppppppppuStack_520;
                }
              }
              else {
                pcVar33 = "null";
                if (uStack_510._7_1_ != '\0') {
                  pcVar33 = (char *)&ppppppppuStack_520;
                }
              }
              if ((long)uStack_430 < 0) {
                pcVar40 = "null";
                if (uStack_438 != (undefined ********)0x0) {
                  pcVar40 = (char *)ppppppppuStack_440;
                }
              }
              else {
                pcVar40 = "null";
                if (uStack_430._7_1_ != '\0') {
                  pcVar40 = (char *)&ppppppppuStack_440;
                }
              }
              ppppppppuStack_630 = (undefined ********)pcVar40;
              uStack_3a0 = (undefined **)pcVar33;
              FUN_10a224324(&uStack_3a0,&ppppppppuStack_630);
              if ((int)uStack_510._4_4_ < 0) {
                if (CONCAT44(uStack_518._4_4_,(float)uStack_518) == 0) goto LAB_10aab69e0;
                func_0x000107c3192c(&uStack_3a0,ppppppppuStack_520);
LAB_10aab6a8c:
                uVar58 = 1;
                pppppppuVar54 = (undefined *******)uStack_388;
              }
              else {
                if (uStack_510._7_1_ != '\0') {
                  uStack_398._0_4_ = (float)uStack_518;
                  uStack_398._4_4_ = uStack_518._4_4_;
                  uStack_3a0 = (undefined **)ppppppppuStack_520;
                  uStack_390._0_4_ = (float)uStack_510;
                  uStack_390._4_4_ = uStack_510._4_4_;
                  goto LAB_10aab6a8c;
                }
LAB_10aab69e0:
                uVar58 = 0;
                uStack_3a0 = (undefined **)((ulong)uStack_3a0 & 0xffffffffffffff00);
                pppppppuVar54 = (undefined *******)uStack_388;
              }
              uStack_388._4_4_ = (float)((ulong)pppppppuVar54 >> 0x20);
              uStack_388._1_3_ = (undefined3)((ulong)pppppppuVar54 >> 8);
              uStack_388._0_4_ = (float)CONCAT31(uStack_388._1_3_,uVar58);
              if ((long)uStack_430 < 0) {
                if (uStack_438 == (undefined ********)0x0) goto LAB_10aab6ab8;
                func_0x000107c3192c(&ppppppppuStack_630,ppppppppuStack_440);
LAB_10aab6b1c:
                uVar58 = 1;
              }
              else {
                if (uStack_430._7_1_ != '\0') {
                  uStack_628._0_4_ = SUB84(uStack_438,0);
                  uStack_628._4_4_ = (float)((ulong)uStack_438 >> 0x20);
                  ppppppppuStack_630 = ppppppppuStack_440;
                  uStack_620._0_4_ = SUB84(uStack_430,0);
                  uStack_620._4_4_ = (float)((ulong)uStack_430 >> 0x20);
                  goto LAB_10aab6b1c;
                }
LAB_10aab6ab8:
                uVar58 = 0;
                ppppppppuStack_630 =
                     (undefined ********)((ulong)ppppppppuStack_630 & 0xffffffffffffff00);
              }
              fStack_618 = (float)CONCAT31(fStack_618._1_3_,uVar58);
              FUN_10a234a0c(&uStack_3a0,&ppppppppuStack_630);
              ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610)
              ;
              goto LAB_10aab6e00;
            }
          }
        }
        puVar11 = PTR___tlv_bootstrap_11340d750;
        ppuVar23 = &PTR___tlv_bootstrap_11340d750;
        ppuVar25 = ppuVar23;
        (*(code *)PTR___tlv_bootstrap_11340d750)();
        ppuVar26 = &PTR___tlv_bootstrap_11340d738;
        if (((ulong)*ppuVar25 & 1) == 0) {
          ppuVar25 = ppuVar26;
          (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
          __tlv_atexit(0x10a132a8c,ppuVar25,0x100000000);
          (*(code *)puVar11)();
          *(undefined1 *)ppuVar23 = 1;
        }
        (*(code *)PTR___tlv_bootstrap_11340d738)();
        pppppppuVar51 = (undefined *******)uStack_3a0;
        puVar21 = (undefined8 *)ppuVar26[2];
        if (puVar21 == (undefined8 *)0x0) {
          uStack_3a0 = (undefined **)((ulong)uStack_3a0._1_7_ << 8);
          uStack_390._0_4_ = 0.0;
          uStack_390._4_4_ = 0.0;
          uStack_388._0_4_ = (float)((uint)(float)uStack_388 & 0xffffff00);
        }
        else {
          cVar6 = *(char *)(puVar21[1] + 0x17);
          uStack_3a0 = (undefined **)CONCAT71(uStack_3a0._1_7_,cVar6);
          pppppppuVar53 = (undefined *******)uStack_3a0;
          uStack_3a0._4_4_ = SUB84(pppppppuVar51,4);
          uStack_3a0._0_4_ = CONCAT22(7,(short)pppppppuVar53);
          ppuVar23 = &PTR___tlv_bootstrap_11340dd08;
          (*(code *)PTR___tlv_bootstrap_11340dd08)();
          iVar18 = *(int *)ppuVar23;
          pppppppuVar51 = (undefined *******)uStack_388;
          if (*(int *)ppuVar23 == 0) {
            ppppppppuStack_630 = (undefined ********)0x0;
            _pthread_threadid_np(0,&ppppppppuStack_630);
            *(int *)ppuVar23 = (int)ppppppppuStack_630;
            iVar18 = (int)ppppppppuStack_630;
            pppppppuVar51 = (undefined *******)uStack_388;
          }
          lVar41 = lRam00000001137ec198;
          uStack_388._4_4_ = (float)((ulong)pppppppuVar51 >> 0x20);
          uStack_388._0_4_ = SUB84(pppppppuVar51,0);
          uStack_3a0 = (undefined **)CONCAT44(iVar18,(undefined4)uStack_3a0);
          uStack_390._0_4_ = 0.0;
          uStack_390._4_4_ = 0.0;
          uStack_388._0_4_ = (float)((uint)(float)uStack_388 & 0xffffff00);
          if (cVar6 != '\0') {
            lVar52 = puVar21[1];
            bVar49 = *(byte *)(lVar52 + 0x42) | *(byte *)(lVar52 + 0x43);
            if (((bVar49 & 1) != 0) || (*(char *)(lVar52 + 0x40) == '\x01')) {
              uVar42 = cntfrq_el0;
              InstructionSynchronizationBarrier();
              uVar37 = cntvct_el0;
              if (uVar42 != 1000000000) {
                uVar60 = 0;
                if (uVar42 != 0) {
                  uVar60 = uVar37 / uVar42;
                }
                uVar9 = 0;
                if (uVar42 != 0) {
                  uVar9 = ((uVar37 - uVar60 * uVar42) * 1000000000) / uVar42;
                }
                uVar37 = uVar9 + uVar60 * 1000000000;
              }
              uStack_398._0_4_ = (float)uVar37;
              uStack_398._4_4_ = (float)(uVar37 >> 0x20);
              if ((bVar49 & 1) != 0) {
                puVar24 = puVar21;
                FUN_10a1333cc();
                if (puVar24 != (undefined8 *)0x0) {
                  uVar58 = 3;
                  if (lRam00000001137ec198 != lVar41) {
                    uVar58 = 5;
                  }
                  lVar52 = 0;
                  if (lRam00000001137ec198 != lVar41) {
                    lVar52 = lVar41;
                  }
                  *puVar24 = &UNK_10f68e388;
                  puVar24[1] = lVar52;
                  puVar24[2] = uVar37;
                  *(int *)(puVar24 + 3) = iVar18;
                  *(undefined2 *)((long)puVar24 + 0x1c) = 7;
                  *(undefined1 *)((long)puVar24 + 0x1e) = uVar58;
                  ppppppppuVar56 =
                       (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
                  if ((*(byte *)(puVar21 + 0x38) & 1) == 0) goto LAB_10aab6e00;
                  puVar21[0x18] = puVar21[0x18] + 1;
                }
              }
            }
            if (*(char *)(puVar21[1] + 0x41) == '\x01') {
              plVar57 = (long *)puVar21[0xb];
              if (plVar57 != (long *)0x0) {
                plVar27 = plVar57;
                (**(code **)(*plVar57 + 0x10))(plVar57,&UNK_10f68e388);
                uStack_390._0_4_ = SUB84(plVar27,0);
                uStack_390._4_4_ = (float)((ulong)plVar27 >> 0x20);
              }
              uStack_388._0_4_ = (float)CONCAT31(uStack_388._1_3_,plVar57 != (long *)0x0);
            }
          }
        }
        ppppppuVar62 = pppppppuVar54[0x24];
        pppppppuVar51 = ppppppppuVar32[0x29];
        ppppppppuStack_630 = (undefined ********)ppppppppuVar32[0x28];
        uStack_628._0_4_ = SUB84(pppppppuVar51,0);
        uStack_628._4_4_ = (float)((ulong)pppppppuVar51 >> 0x20);
        if (pppppppuVar51 != (undefined *******)0x0) {
          pppppppuVar51 = pppppppuVar51 + -1;
          do {
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pppppppuVar51,0x10);
            if (bVar8) {
              *(int *)pppppppuVar51 = *(int *)pppppppuVar51 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        (*(code *)ppppppuVar62)(&ppppppppuStack_630,pppppppuVar54 + 0x24);
        ppppppppuStack_630 = (undefined ********)&PTR_SUB_110b01d60;
        func_0x000107c2acd4(&ppppppppuStack_630);
        iVar18 = (int)&uStack_3a0;
        FUN_10aae4cc0();
        FUN_10ad055a0();
        if (iVar18 != 0) {
          ppuVar23 = &PTR___tlv_bootstrap_11340dfd8;
          (*(code *)PTR___tlv_bootstrap_11340dfd8)();
          if (*ppuVar23 == (undefined *)0x0) {
            ppuVar23 = &PTR___tlv_bootstrap_11340dd98;
            (*(code *)PTR___tlv_bootstrap_11340dd98)();
            plVar57 = (long *)*ppuVar23;
            if (plVar57 != (long *)0x0) {
              (**(code **)(*plVar57 + 0x18))();
              if (plVar57 != (long *)0x0) {
                plVar57 = plVar57 + 7;
                goto LAB_10aab4ecc;
              }
            }
          }
          else {
            plVar57 = (long *)(*ppuVar23 + 8);
LAB_10aab4ecc:
            if (((uint)*(undefined8 *)(*plVar57 + 0x10) >> 1 & 1) != 0) {
              func_0x000107c2b054(&ppppppppuStack_520,&UNK_10f68df13);
              func_0x000107c2b054(&ppppppppuStack_440,&UNK_10f68da37);
              if ((int)uStack_510._4_4_ < 0) {
                pcVar33 = "null";
                if (CONCAT44(uStack_518._4_4_,(float)uStack_518) != 0) {
                  pcVar33 = (char *)ppppppppuStack_520;
                }
              }
              else {
                pcVar33 = "null";
                if (uStack_510._7_1_ != '\0') {
                  pcVar33 = (char *)&ppppppppuStack_520;
                }
              }
              if ((long)uStack_430 < 0) {
                pcVar40 = "null";
                if (uStack_438 != (undefined ********)0x0) {
                  pcVar40 = (char *)ppppppppuStack_440;
                }
              }
              else {
                pcVar40 = "null";
                if (uStack_430._7_1_ != '\0') {
                  pcVar40 = (char *)&ppppppppuStack_440;
                }
              }
              ppppppppuStack_630 = (undefined ********)pcVar40;
              uStack_3a0 = (undefined **)pcVar33;
              FUN_10a224324(&uStack_3a0,&ppppppppuStack_630);
              if ((int)uStack_510._4_4_ < 0) {
                if (CONCAT44(uStack_518._4_4_,(float)uStack_518) == 0) goto LAB_10aab6a70;
                func_0x000107c3192c(&uStack_3a0,ppppppppuStack_520);
LAB_10aab6ad4:
                uVar58 = 1;
              }
              else {
                if (uStack_510._7_1_ != '\0') {
                  uStack_398._0_4_ = (float)uStack_518;
                  uStack_398._4_4_ = uStack_518._4_4_;
                  uStack_3a0 = (undefined **)ppppppppuStack_520;
                  uStack_390._0_4_ = (float)uStack_510;
                  uStack_390._4_4_ = uStack_510._4_4_;
                  goto LAB_10aab6ad4;
                }
LAB_10aab6a70:
                uVar58 = 0;
                uStack_3a0 = (undefined **)((ulong)uStack_3a0 & 0xffffffffffffff00);
              }
              uStack_388._0_4_ = (float)CONCAT31(uStack_388._1_3_,uVar58);
              if ((long)uStack_430 < 0) {
                if (uStack_438 == (undefined ********)0x0) goto LAB_10aab6b00;
                func_0x000107c3192c(&ppppppppuStack_630,ppppppppuStack_440);
LAB_10aab6b44:
                uVar58 = 1;
              }
              else {
                if (uStack_430._7_1_ != '\0') {
                  uStack_628._0_4_ = SUB84(uStack_438,0);
                  uStack_628._4_4_ = (float)((ulong)uStack_438 >> 0x20);
                  ppppppppuStack_630 = ppppppppuStack_440;
                  uStack_620._0_4_ = SUB84(uStack_430,0);
                  uStack_620._4_4_ = (float)((ulong)uStack_430 >> 0x20);
                  goto LAB_10aab6b44;
                }
LAB_10aab6b00:
                uVar58 = 0;
                ppppppppuStack_630 =
                     (undefined ********)((ulong)ppppppppuStack_630 & 0xffffffffffffff00);
              }
              fStack_618 = (float)CONCAT31(fStack_618._1_3_,uVar58);
              FUN_10a234a0c(&uStack_3a0,&ppppppppuStack_630);
              ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610)
              ;
              goto LAB_10aab6e00;
            }
          }
        }
        if (((ulong)ppppppppuVar22 & 1) == 0 && !bVar14) {
          ppppppppuVar56 = ppppppppuVar32;
          FUN_10aac7538(ppppppppuVar32,*(uint *)((long)param_8 + 4));
          if ((int)ppppppppuVar56 != 0) {
            lStack_798 = param_6[1];
            lStack_7a0 = *param_6;
            if (param_6[1] != 0) {
              plVar57 = (long *)(param_6[1] + 8);
              do {
                cVar6 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar57,0x10);
                if (bVar14) {
                  *plVar57 = *plVar57 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            FUN_10aac75a8(ppppppppuVar32,puVar34,&lStack_7a0,&uStack_708);
            func_0x00010a09db0c(&lStack_7a0);
          }
        }
        lVar41 = *param_6;
        plVar57 = (long *)param_6[1];
        if (plVar57 != (long *)0x0) {
          plVar27 = plVar57 + 1;
          do {
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar14) {
              *plVar27 = *plVar27 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (lVar41 == 0) {
          dVar74 = 1.0;
        }
        else {
          ppppppppuVar56 = ppppppppuVar31;
          FUN_10a0ec6f0();
          bVar14 = ((ulong)ppppppppuVar56 & 1) != 0;
          iVar18 = *(int *)(param_4 + 0x10);
          if (bVar14) {
            iVar18 = *(int *)(param_4 + 0x14);
          }
          iVar46 = *(int *)(param_4 + 0x14);
          if (bVar14) {
            iVar46 = *(int *)(param_4 + 0x10);
          }
          fVar82 = (float)iVar18 / (float)*(int *)(lVar41 + 0x18);
          fVar67 = (float)iVar46 / (float)*(int *)(lVar41 + 0x1c);
          pppppppuVar43 = (undefined *******)(ulong)(uint)fVar67;
          if (fVar67 <= fVar82) {
            fVar67 = fVar82;
          }
          dVar74 = (double)fVar67;
        }
        if (plVar57 != (long *)0x0) {
          plVar27 = plVar57 + 1;
          do {
            lVar41 = *plVar27;
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar14) {
              *plVar27 = lVar41 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar41 == 0) {
            (**(code **)(*plVar57 + 0x10))(plVar57);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar57);
          }
        }
        uVar42 = *(ulong *)(param_4 + 0x10);
        FUN_10aacfcb0(param_7,"body",4);
        if (param_7 == (undefined ********)0x0) {
          pppppppuVar54 = (undefined *******)0x0;
          uStack_398._0_4_ = 0.0;
          uStack_398._4_4_ = 0.0;
          uStack_3a0 = (undefined **)0x0;
LAB_10aab50dc:
          uStack_468 = 0;
          ppppppppuStack_470 = (undefined ********)0x0;
          uStack_458 = 0;
          uStack_460 = 0;
          uStack_450 = 0x3f800000;
        }
        else {
          uStack_3a0 = (undefined **)param_7[3];
          pppppppuVar54 = param_7[4];
          uStack_398._0_4_ = SUB84(pppppppuVar54,0);
          uStack_398._4_4_ = (float)((ulong)pppppppuVar54 >> 0x20);
          if (pppppppuVar54 != (undefined *******)0x0) {
            pppppppuVar51 = pppppppuVar54 + 1;
            do {
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(pppppppuVar51,0x10);
              if (bVar14) {
                *pppppppuVar51 = (undefined ******)((long)*pppppppuVar51 + 1);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          if ((undefined ********)uStack_3a0 == (undefined ********)0x0) goto LAB_10aab50dc;
          uStack_468 = 0;
          ppppppppuStack_470 = (undefined ********)0x0;
          uStack_458 = 0;
          uStack_460 = 0;
          uStack_450 = 0x3f800000;
          pppppppuVar51 = (undefined *******)uStack_3a0[3];
          ppppppppuVar56 = (undefined ********)(uStack_3a0 + 3);
          if (((ulong)pppppppuVar51 & 1) != 0) {
            ppppppppuVar56 = (undefined ********)((long)pppppppuVar51 + 7);
          }
          if (*(int *)(uStack_3a0 + 4) != 0) {
            lVar41 = (long)*(int *)(uStack_3a0 + 4) << 3;
            do {
              pppppppuVar51 = *ppppppppuVar56;
              uVar45 = *(uint *)(pppppppuVar51 + 2);
              if ((uVar45 >> 0x13 & 1) == 0) {
                if ((uVar45 >> 0x15 & 1) != 0) {
LAB_10aab508c:
                  uVar75 = *(undefined4 *)((long)pppppppuVar51 + 0x144);
                  ppppppppuStack_520 =
                       (undefined ********)
                       CONCAT44(ppppppppuStack_520._4_4_,*(undefined4 *)(pppppppuVar51 + 0x26));
                  ppppppppuVar28 = (undefined ********)&ppppppppuStack_470;
                  ppppppppuStack_630 = (undefined ********)&ppppppppuStack_520;
                  func_0x0001093c8af8(ppppppppuVar28,&ppppppppuStack_520,&UNK_10dd5b8f9,
                                      &ppppppppuStack_630,&ppppppppuStack_440);
                  *(undefined4 *)((long)ppppppppuVar28 + 0x14) = uVar75;
                }
              }
              else if (((uVar45 >> 0x15 & 1) != 0) &&
                      ((*(byte *)((long)pppppppuVar51 + 0x13c) & 1) != 0)) goto LAB_10aab508c;
              ppppppppuVar56 = ppppppppuVar56 + 1;
              lVar41 = lVar41 + -8;
            } while (lVar41 != 0);
          }
        }
        if (pppppppuVar54 != (undefined *******)0x0) {
          pppppppuVar51 = pppppppuVar54 + 1;
          do {
            ppppppuVar62 = *pppppppuVar51;
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(pppppppuVar51,0x10);
            if (bVar14) {
              *pppppppuVar51 = (undefined ******)((long)ppppppuVar62 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (ppppppuVar62 == (undefined ******)0x0) {
            (*(code *)(*pppppppuVar54)[2])(pppppppuVar54);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar54);
          }
        }
        ppppppppuVar56 = ppppppppuVar32 + 0x28;
        func_0x0001096e4e0c(ppppppppuVar56,0x11382aac8);
        ppppppppuVar28 = ppppppppuStack_6b0;
        pppppppuVar54 = *ppppppppuVar56;
        pppppppuVar51 = ppppppppuVar56[1];
        pppppppuVar53 = pppppppuVar54;
        if (pppppppuVar54 == pppppppuVar51) {
          uStack_6b4 = false;
        }
        else {
          do {
            pppppppuVar64 = pppppppuVar53 + 10;
            uStack_6b4 = *(int *)((long)pppppppuVar53 + 0x1c) == 0;
            pppppppuVar53 = pppppppuVar64;
          } while (!(bool)uStack_6b4 && pppppppuVar64 != pppppppuVar51);
        }
        ppppppppuVar22 = ppppppppuVar56;
        ppppppppuVar30 = ppppppppuStack_6a8;
        if (ppppppppuStack_6a8 != ppppppppuStack_6b0) {
          do {
            ppppppppuVar30 = ppppppppuVar30 + -0x44;
            ppppppppuVar22 = ppppppppuVar30;
            FUN_10a4ffeb4();
          } while (ppppppppuVar30 != ppppppppuVar28);
          pppppppuVar54 = *ppppppppuVar56;
          pppppppuVar51 = ppppppppuVar56[1];
          ppppppppuVar30 = ppppppppuStack_6b0;
        }
        ppppppppuStack_6a8 = ppppppppuVar28;
        uVar37 = ((long)pppppppuVar51 - (long)pppppppuVar54 >> 4) * -0x3333333333333333;
        if ((ulong)(((long)ppppppppuStack_6a0 - (long)ppppppppuVar30 >> 5) * -0xf0f0f0f0f0f0f0f) <
            uVar37) {
          if (0x78787878787878 < uVar37) {
            FUN_10a4ffc58();
            ppppppppuVar56 = (undefined ********)CONCAT44(uStack_610._4_4_,(undefined4)uStack_610);
            goto LAB_10aab6e00;
          }
          ppppppppuVar29 = (undefined ********)&ppppppppuStack_6b0;
          uStack_380 = (undefined ********)&ppppppppuStack_6b0;
          FUN_10a4ffc6c();
          ppppppppuVar28 =
               (undefined ********)
               ((long)ppppppppuVar29 + ((long)ppppppppuVar28 - (long)ppppppppuVar30));
          ppppppppuVar30 =
               (undefined ********)
               ((long)ppppppppuVar28 + ((long)ppppppppuStack_6b0 - (long)ppppppppuStack_6a8));
          func_0x00010aad7108(ppppppppuStack_6b0,ppppppppuStack_6a8,ppppppppuVar30);
          uStack_390._0_4_ = SUB84(ppppppppuStack_6b0,0);
          uStack_390._4_4_ = (float)((ulong)ppppppppuStack_6b0 >> 0x20);
          uStack_388._0_4_ = SUB84(ppppppppuStack_6a0,0);
          uStack_388._4_4_ = (float)((ulong)ppppppppuStack_6a0 >> 0x20);
          uStack_3a0 = (undefined **)ppppppppuStack_6b0;
          ppppppppuVar22 = (undefined ********)&uStack_3a0;
          ppppppppuStack_6b0 = ppppppppuVar30;
          ppppppppuStack_6a8 = ppppppppuVar28;
          ppppppppuStack_6a0 = ppppppppuVar29 + uVar37 * 0x44;
          uStack_398._0_4_ = (float)uStack_390;
          uStack_398._4_4_ = uStack_390._4_4_;
          FUN_10aad7170();
        }
        ppppppuVar62 = *param_8;
        if (((ulong)ppppppuVar62 & 0x560) != 0) {
          ppppppppuVar28 = ppppppppuVar32 + 0x28;
          func_0x0001096b5280(ppppppppuVar28,0x11382aa70);
          ppppppppuVar22 = (undefined ********)&uStack_698;
          func_0x00010aac16fc(ppppppppuVar22,ppppppppuVar28);
          if (CONCAT71(uStack_697,uStack_698) != 0) {
            *(uint *)(CONCAT71(uStack_697,uStack_698) + 0x30) = *(uint *)((long)param_8 + 0xc);
          }
        }
        pppppppuVar54 = *ppppppppuVar56;
        pppppppuVar51 = ppppppppuVar56[1];
        if (pppppppuVar54 != pppppppuVar51) {
          iStack_824 = 0;
          ppppppppuVar28 = ppppppppuVar32 + 0x3b;
          uStack_810 = (uint)((ulong)ppppppuVar62 & 0x560);
          do {
            ppppppppuVar56 = (undefined ********)pppppppuVar54[2][1];
            if ((int)((ulong)((long)pppppppuVar54[2][2] - (long)ppppppppuVar56) >> 4) < 1) {
              func_0x000107c2acdc();
              ppppppppuVar56 = ppppppppuVar22;
            }
            if (ppppppppuVar56[1] != (undefined *******)0x0) {
              ppppppppuVar22 = ppppppppuVar56;
              (*(code *)(*ppppppppuVar56)[5])();
              if ((int)ppppppppuVar22 != 0) {
                bVar14 = false;
                if (CONCAT71(uStack_697,uStack_698) != 0) {
                  pppppuVar55 = pppppppuVar54[2][1];
                  if ((int)((ulong)((long)pppppppuVar54[2][2] - (long)pppppuVar55) >> 4) < 6) {
                    bVar14 = false;
                  }
                  else {
                    bVar14 = pppppuVar55[0xb] != (undefined ****)0x0;
                  }
                }
                if ((((ulong)ppppppuVar62 & 0x560) == 0) || (bVar14)) {
                  ___dynamic_cast(ppppppppuVar56,&PTR_DAT_110b01d40,&PTR_DAT_110b05200,0);
                  if (ppppppppuVar56 == (undefined ********)0x0) {
                    func_0x000107c2acdc();
                  }
                  pppppppuStack_480 = (undefined *******)&PTR_SUB_110b01d60;
                  pppppppuStack_478 = ppppppppuVar56[1];
                  pppppppuVar64 = *ppppppppuVar56;
                  pppppppuVar53 = pppppppuStack_478 + -1;
                  do {
                    cVar6 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(pppppppuVar53,0x10);
                    if (bVar8) {
                      *(int *)pppppppuVar53 = *(int *)pppppppuVar53 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  pppppppuStack_480 = (undefined *******)&PTR_DAT_110b051b8;
                  ppppppuStack_498 = (undefined ******)0x0;
                  pppppppuStack_4a0 = (undefined *******)0x0;
                  uStack_490 = 0;
                  iVar18 = (int)((ulong)((long)pppppppuStack_478[4] - (long)pppppppuStack_478[3]) >>
                                3);
                  func_0x0001073b504c(&pppppppuStack_4a0,(long)(iVar18 << 1));
                  if (0 < iVar18) {
                    iVar46 = 0;
                    do {
                      func_0x0001096ba098(&pppppppuStack_480,iVar46);
                      uStack_3a0 = (undefined **)CONCAT44((int)pppppppuVar43,(int)pppppppuVar64);
                      FUN_10a0ca014(&pppppppuStack_4a0,&uStack_3a0);
                      FUN_10a0ca014(&pppppppuStack_4a0,(long)&uStack_3a0 + 4);
                      iVar46 = iVar46 + 1;
                    } while (iVar18 != iVar46);
                  }
                  ppppppppuVar56 = ppppppppuVar31;
                  FUN_10a0ec6f0();
                  uStack_4a8 = uVar42 & 0xffffffff;
                  uVar37 = uVar42 >> 0x20;
                  if (((ulong)ppppppppuVar56 & 1) != 0) {
                    uStack_4a8 = uVar42 >> 0x20;
                    uVar37 = uVar42;
                  }
                  uStack_4a8 = uStack_4a8 | uVar37 << 0x20;
                  uStack_628._0_4_ = (float)((uint)(float)uStack_628 & 0xffffff00);
                  ppppppppuStack_630 = (undefined ********)&PTR_SUB_110ba84d0;
                  fStack_5f8 = 0.0;
                  fStack_600 = 0.0;
                  fStack_618 = 0.0;
                  uStack_614 = 0;
                  uStack_620._0_4_ = 0.0;
                  uStack_620._4_4_ = 0.0;
                  fStack_608 = 0.0;
                  uStack_604 = 0;
                  uStack_610._4_4_ = 0;
                  uStack_628._4_4_ = 1.0;
                  uStack_610._0_4_ = 0x3f800000;
                  uStack_610 = (undefined ********)0x3f800000;
                  uStack_5fc = 0x3f800000;
                  pppppppuStack_5e8 = (undefined *******)0x0;
                  pppppppuStack_5f0 = (undefined *******)0x0;
                  pppppppuStack_5d8 = (undefined *******)0x0;
                  pppppppuStack_5e0 = (undefined *******)0x0;
                  pppppppuStack_5c8 = (undefined *******)0x0;
                  pppppppuStack_5d0 = (undefined *******)0x0;
                  pppppuVar55 = pppppppuVar54[2][1];
                  if (((int)((ulong)((long)pppppppuVar54[2][2] - (long)pppppuVar55) >> 4) < 2) ||
                     (pppppuVar55[3] == (undefined ****)0x0)) {
                    pppppppuVar61 = (undefined *******)0x0;
                    pppppppuVar65 = (undefined *******)0x0;
                    pppppppuStack_7d0 = (undefined *******)0x0;
                    pppppppuVar63 = (undefined *******)0x0;
                    pppppppuVar64 = (undefined *******)0x0;
                    pppppppuVar53 = (undefined *******)0x0;
                    uVar58 = 0;
                  }
                  else {
                    pppppuVar55 = pppppuVar55 + 2;
                    ___dynamic_cast(pppppuVar55,&PTR_DAT_110b01d40,&PTR_DAT_110b053a0,0);
                    if (pppppuVar55 == (undefined *****)0x0) {
                      func_0x000107c2acdc();
                    }
                    uStack_438 = (undefined ********)pppppuVar55[1];
                    if (uStack_438 != (undefined ********)0x0) {
                      ppppppppuVar56 = uStack_438 + -1;
                      do {
                        cVar6 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(ppppppppuVar56,0x10);
                        if (bVar8) {
                          *(int *)ppppppppuVar56 = *(int *)ppppppppuVar56 + 1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                    }
                    ppppppppuStack_440 = (undefined ********)&PTR_DAT_110b05358;
                    FUN_10aac844c(&uStack_3a0,&ppppppppuStack_440);
                    pppppppuVar61 = pppppppuStack_338;
                    pppppppuVar65 = pppppppuStack_340;
                    pppppppuStack_7d0 = pppppppuStack_348;
                    pppppppuVar63 = pppppppuStack_350;
                    pppppppuVar64 = pppppppuStack_358;
                    pppppppuVar53 = pppppppuStack_360;
                    uVar58 = (undefined1)uStack_398;
                    uStack_628._0_4_ = (float)CONCAT31(uStack_628._1_3_,(undefined1)uStack_398);
                    uStack_620._4_4_ = uStack_390._4_4_;
                    uStack_628._4_4_ = uStack_398._4_4_;
                    uStack_620._0_4_ = (float)uStack_390;
                    uStack_614 = uStack_388._4_4_;
                    uStack_5fc = uStack_36c;
                    uStack_604 = uStack_374;
                    fStack_600 = fStack_370;
                    pppppppuStack_5f0 = pppppppuStack_360;
                    pppppppuStack_5e8 = pppppppuStack_358;
                    pppppppuStack_358 = (undefined *******)0x0;
                    pppppppuStack_350 = (undefined *******)0x0;
                    pppppppuStack_360 = (undefined *******)0x0;
                    pppppppuStack_5d0 = pppppppuStack_340;
                    pppppppuStack_5d8 = pppppppuStack_348;
                    pppppppuStack_5e0 = pppppppuVar63;
                    pppppppuStack_5c8 = pppppppuStack_338;
                    fStack_618 = (float)uStack_388 + 0.0;
                    pppppppuVar43 = (undefined *******)(ulong)(uint)fStack_618;
                    fStack_608 = fStack_378 + (float)(int)uVar37;
                    fStack_5f8 = fStack_368 + 0.0;
                    ppppppppuStack_440 = (undefined ********)&PTR_SUB_110b01d60;
                    uStack_610 = uStack_380;
                    func_0x000107c2acd4(&ppppppppuStack_440);
                  }
                  ppppppppuVar22 = ppppppppuStack_6a8;
                  if (ppppppppuStack_6a8 < ppppppppuStack_6a0) {
                    _bzero(ppppppppuStack_6a8,0x220);
                    func_0x00010aad6f70(ppppppppuVar22);
                    ppppppppuVar22 = ppppppppuVar22 + 0x44;
                    ppppppppuVar56 = uStack_610;
                  }
                  else {
                    lVar41 = (long)ppppppppuStack_6a8 - (long)ppppppppuStack_6b0;
                    uVar37 = (lVar41 >> 5) * -0xf0f0f0f0f0f0f0f + 1;
                    if (0x78787878787878 < uVar37) {
                      FUN_10a4ffc58();
                      ppppppppuVar56 = uStack_610;
                      goto LAB_10aab6e00;
                    }
                    lVar52 = (long)ppppppppuStack_6a0 - (long)ppppppppuStack_6b0 >> 5;
                    uVar60 = lVar52 * -0x1e1e1e1e1e1e1e1e;
                    if (uVar60 < uVar37 || uVar60 - uVar37 == 0) {
                      uVar60 = uVar37;
                    }
                    if (0x3c3c3c3c3c3c3b < (ulong)(lVar52 * -0xf0f0f0f0f0f0f0f)) {
                      uVar60 = 0x78787878787878;
                    }
                    if (uVar60 == 0) {
                      ppppppppuVar56 = (undefined ********)0x0;
                      uStack_380 = (undefined ********)&ppppppppuStack_6b0;
                    }
                    else {
                      ppppppppuVar56 = (undefined ********)&ppppppppuStack_6b0;
                      uStack_380 = (undefined ********)&ppppppppuStack_6b0;
                      FUN_10a4ffc6c();
                    }
                    lVar41 = (long)ppppppppuVar56 + lVar41;
                    uStack_3a0 = (undefined **)ppppppppuVar56;
                    uStack_398 = (undefined8 *)lVar41;
                    uStack_388 = ppppppppuVar56 + uVar60 * 0x44;
                    uStack_390 = (undefined *******)lVar41;
                    _bzero(lVar41,0x220);
                    func_0x00010aad6f70(lVar41);
                    ppppppppuVar22 = (undefined ********)(lVar41 + 0x220);
                    ppppppppuVar30 =
                         (undefined ********)
                         ((long)ppppppppuStack_6b0 + (lVar41 - (long)ppppppppuStack_6a8));
                    func_0x00010aad7108(ppppppppuStack_6b0,ppppppppuStack_6a8,ppppppppuVar30);
                    uStack_390._0_4_ = SUB84(ppppppppuStack_6b0,0);
                    uStack_390._4_4_ = (float)((ulong)ppppppppuStack_6b0 >> 0x20);
                    uStack_388._0_4_ = SUB84(ppppppppuStack_6a0,0);
                    uStack_388._4_4_ = (float)((ulong)ppppppppuStack_6a0 >> 0x20);
                    uStack_3a0 = (undefined **)ppppppppuStack_6b0;
                    ppppppppuStack_6b0 = ppppppppuVar30;
                    ppppppppuStack_6a8 = ppppppppuVar22;
                    ppppppppuStack_6a0 = ppppppppuVar56 + uVar60 * 0x44;
                    uStack_398._0_4_ = (float)uStack_390;
                    uStack_398._4_4_ = uStack_390._4_4_;
                    FUN_10aad7170(&uStack_3a0);
                    ppppppppuVar56 = uStack_610;
                  }
                  uStack_610._4_4_ = (undefined4)((ulong)ppppppppuVar56 >> 0x20);
                  uStack_610._0_4_ = SUB84(ppppppppuVar56,0);
                  ppppppppuStack_6a8 = ppppppppuVar22;
                  if (ppppppppuStack_6b0 == ppppppppuVar22) goto LAB_10aab6e00;
                  uStack_518._0_4_ = (float)CONCAT31(uStack_518._1_3_,uVar58);
                  ppppppppuStack_520 = (undefined ********)&PTR_SUB_110ba84d0;
                  uStack_510._4_4_ = uStack_620._4_4_;
                  fStack_508 = fStack_618;
                  uStack_518._4_4_ = uStack_628._4_4_;
                  uStack_510._0_4_ = (float)uStack_620;
                  uStack_4fc = CONCAT44(fStack_608,uStack_610._4_4_);
                  uStack_504 = uStack_614;
                  uStack_500 = (undefined4)uStack_610;
                  uStack_4ec = CONCAT44(fStack_5f8,uStack_5fc);
                  uStack_4f4 = CONCAT44(fStack_600,uStack_604);
                  pppppppuStack_5f0 = (undefined *******)0x0;
                  pppppppuStack_5e8 = (undefined *******)0x0;
                  pppppppuStack_4c8 = pppppppuStack_7d0;
                  pppppppuStack_5e0 = (undefined *******)0x0;
                  pppppppuStack_5d8 = (undefined *******)0x0;
                  pppppppuStack_5d0 = (undefined *******)0x0;
                  pppppppuStack_5c8 = (undefined *******)0x0;
                  pppppppuStack_4e0 = pppppppuVar53;
                  pppppppuStack_4d8 = pppppppuVar64;
                  pppppppuStack_4d0 = pppppppuVar63;
                  pppppppuStack_4c0 = pppppppuVar65;
                  pppppppuStack_4b8 = pppppppuVar61;
                  uStack_610 = ppppppppuVar56;
                  FUN_10a14b9f0(&uStack_3a0,&pppppppuStack_4a0,&ppppppppuStack_520,&uStack_4a8);
                  ppppppppuVar56 = ppppppppuVar22 + -0x43;
                  FUN_10a69bf24(ppppppppuVar56,&uStack_3a0);
                  FUN_10a14e140(&uStack_3a0);
                  ppppppppuStack_520 = (undefined ********)&PTR_SUB_110ba84d0;
                  if (pppppppuStack_4c8 != (undefined *******)0x0) {
                    pppppppuStack_4c0 = pppppppuStack_4c8;
                    __ZdlPv();
                  }
                  if (pppppppuStack_4e0 != (undefined *******)0x0) {
                    pppppppuStack_4d8 = pppppppuStack_4e0;
                    __ZdlPv();
                  }
                  iVar18 = *(int *)(pppppppuVar54 + 3);
                  *(int *)(ppppppppuVar22 + -0x44) = iVar18;
                  ppppppppuVar30 = (undefined ********)(pppppppuVar54 + 4);
                  if (iVar18 == 1) {
                    ppppppppuVar29 = (undefined ********)&ppppppppuStack_470;
                    uStack_3a0 = (undefined **)ppppppppuVar30;
                    func_0x0001093c8fa4(ppppppppuVar29,ppppppppuVar30,&UNK_10dd5b8f9,&uStack_3a0,
                                        &ppppppppuStack_440);
                    iVar18 = *(int *)((long)ppppppppuVar29 + 0x14);
                  }
                  else {
                    iVar18 = *(int *)ppppppppuVar30;
                    if (iVar18 == -1) {
                      iVar18 = iStack_824;
                      iStack_824 = iStack_824 + 1;
                    }
                  }
                  *(int *)((long)ppppppppuVar22 + -0x21c) = iVar18;
                  pppppuVar55 = pppppppuVar54[2][1];
                  if ((2 < (int)((ulong)((long)pppppppuVar54[2][2] - (long)pppppuVar55) >> 4)) &&
                     (pppppuVar55[5] != (undefined ****)0x0)) {
                    pppppuVar55 = pppppuVar55 + 4;
                    ___dynamic_cast(pppppuVar55,&PTR_DAT_110b01d40,&PTR_DAT_110b053a0,0);
                    if (pppppuVar55 == (undefined *****)0x0) {
                      func_0x000107c2acdc();
                    }
                    ppppuStack_528 = pppppuVar55[1];
                    if (ppppuStack_528 != (undefined ****)0x0) {
                      ppppuVar39 = ppppuStack_528 + -1;
                      do {
                        cVar6 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(ppppuVar39,0x10);
                        if (bVar8) {
                          *(int *)ppppuVar39 = *(int *)ppppuVar39 + 1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                    }
                    ppuStack_530 = &PTR_DAT_110b05358;
                    FUN_10aac844c(&uStack_3a0,&ppuStack_530);
                    pppppppuStack_560 = *ppppppppuVar28;
                    afStack_558[0] = SUB84(ppppppppuVar32[0x3c],0);
                    uStack_548 = SUB84(ppppppppuVar32[0x3e],0);
                    afStack_558[2] = SUB84(ppppppppuVar32[0x3d],0);
                    afStack_558[3] = (float)((ulong)ppppppppuVar32[0x3d] >> 0x20);
                    uStack_53c = *(undefined8 *)((long)ppppppppuVar32 + 0x1fc);
                    uStack_540 = (undefined4)
                                 ((ulong)*(undefined8 *)((long)ppppppppuVar32 + 500) >> 0x20);
                    afStack_558[1] = *(float *)((long)ppppppppuVar32 + 0x1e4) / 10.4;
                    fStack_544 = *(float *)((long)ppppppppuVar32 + 500) / 10.4;
                    fStack_534 = *(float *)((long)ppppppppuVar32 + 0x204) / 10.4;
                    func_0x0001096b985c(&ppppppppuStack_440,&pppppppuStack_560,(long)&uStack_398 + 4
                                       );
                    pppppppuVar12 = pppppppuStack_338;
                    pppppppuVar61 = pppppppuStack_340;
                    pppppppuVar65 = pppppppuStack_348;
                    pppppppuVar63 = pppppppuStack_350;
                    pppppppuVar64 = pppppppuStack_358;
                    pppppppuVar53 = pppppppuStack_360;
                    uStack_390._4_4_ = SUB84(uStack_438,0);
                    uStack_388._0_4_ = (float)((ulong)uStack_438 >> 0x20);
                    uStack_398._4_4_ = SUB84(ppppppppuStack_440,0);
                    uStack_390._0_4_ = (float)((ulong)ppppppppuStack_440 >> 0x20);
                    uStack_380._4_4_ = (undefined4)uStack_428;
                    fStack_378 = (float)((ulong)uStack_428 >> 0x20);
                    uStack_388._4_4_ = SUB84(uStack_430,0);
                    uStack_380._0_4_ = (undefined4)((ulong)uStack_430 >> 0x20);
                    uStack_36c = (undefined4)uStack_418;
                    fStack_368 = (float)((ulong)uStack_418 >> 0x20);
                    uStack_374 = (undefined4)uStack_420;
                    fStack_370 = (float)((ulong)uStack_420 >> 0x20);
                    pppppppuStack_360 = (undefined *******)0x0;
                    pppppppuStack_358 = (undefined *******)0x0;
                    pppppppuStack_350 = (undefined *******)0x0;
                    pppppppuStack_348 = (undefined *******)0x0;
                    pppppppuStack_340 = (undefined *******)0x0;
                    pppppppuStack_338 = (undefined *******)0x0;
                    *(undefined1 *)(ppppppppuVar22 + -0x3c) = (undefined1)uStack_398;
                    *(undefined8 *)((long)ppppppppuVar22 + -0x1c4) = uStack_428;
                    *(undefined ********)((long)ppppppppuVar22 + -0x1cc) = uStack_430;
                    *(undefined8 *)((long)ppppppppuVar22 + -0x1b4) = uStack_418;
                    *(undefined8 *)((long)ppppppppuVar22 + -0x1bc) = uStack_420;
                    *(undefined *********)((long)ppppppppuVar22 + -0x1d4) = uStack_438;
                    *(undefined *********)((long)ppppppppuVar22 + -0x1dc) = ppppppppuStack_440;
                    ppppppppuVar29 = ppppppppuVar22 + -0x35;
                    pppppppuVar43 = uStack_430;
                    ppppppppuStack_3d0 = ppppppppuStack_440;
                    ppppppppuStack_3c8 = uStack_438;
                    pppppppuStack_3c0 = uStack_430;
                    ppppppppuVar30 = uStack_610;
                    if (*ppppppppuVar29 != (undefined *******)0x0) {
                      ppppppppuVar22[-0x34] = *ppppppppuVar29;
                      __ZdlPv();
                      *ppppppppuVar29 = (undefined *******)0x0;
                      ppppppppuVar22[-0x34] = (undefined *******)0x0;
                      ppppppppuVar22[-0x33] = (undefined *******)0x0;
                      ppppppppuVar30 = uStack_610;
                    }
                    ppppppppuVar22[-0x34] = pppppppuVar64;
                    *ppppppppuVar29 = pppppppuVar53;
                    ppppppppuVar22[-0x33] = pppppppuVar63;
                    ppppppppuVar29 = ppppppppuVar22 + -0x32;
                    if (*ppppppppuVar29 != (undefined *******)0x0) {
                      ppppppppuVar22[-0x31] = *ppppppppuVar29;
                      uStack_610 = ppppppppuVar30;
                      __ZdlPv();
                      *ppppppppuVar29 = (undefined *******)0x0;
                      ppppppppuVar22[-0x31] = (undefined *******)0x0;
                      ppppppppuVar22[-0x30] = (undefined *******)0x0;
                      ppppppppuVar30 = uStack_610;
                    }
                    ppppppppuVar22[-0x31] = pppppppuVar61;
                    *ppppppppuVar29 = pppppppuVar65;
                    ppppppppuVar22[-0x30] = pppppppuVar12;
                    *(undefined1 *)(ppppppppuVar22 + -0x3e) = 1;
                    uStack_3a0 = &PTR_SUB_110ba84d0;
                    uStack_610 = ppppppppuVar30;
                    if (pppppppuStack_348 != (undefined *******)0x0) {
                      pppppppuStack_340 = pppppppuStack_348;
                      __ZdlPv();
                    }
                    if (pppppppuStack_360 != (undefined *******)0x0) {
                      pppppppuStack_358 = pppppppuStack_360;
                      __ZdlPv();
                    }
                    ppuStack_530 = &PTR_SUB_110b01d60;
                    func_0x000107c2acd4(&ppuStack_530);
                  }
                  FUN_10a14cd18((float)(1.0 / dVar74));
                  if (((ulong)uStack_810 != 0) && (!(bool)(bVar14 ^ 1))) {
                    pppppuVar55 = pppppppuVar54[2][1];
                    if ((int)((ulong)((long)pppppppuVar54[2][2] - (long)pppppuVar55) >> 4) < 6) {
                      func_0x000107c2acdc();
                    }
                    else {
                      ppppppppuVar56 = (undefined ********)(pppppuVar55 + 10);
                    }
                    ___dynamic_cast();
                    ppppppppuVar30 = uStack_380;
                    if (ppppppppuVar56 == (undefined ********)0x0) {
                      func_0x000107c2acdc();
                      ppppppppuVar30 = uStack_380;
                    }
                    pppppppuVar43 = ppppppppuVar56[1];
                    if (pppppppuVar43 != (undefined *******)0x0) {
                      pppppppuVar53 = pppppppuVar43 + -1;
                      do {
                        cVar6 = '\x01';
                        bVar14 = (bool)ExclusiveMonitorPass(pppppppuVar53,0x10);
                        if (bVar14) {
                          *(int *)pppppppuVar53 = *(int *)pppppppuVar53 + 1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                    }
                    uStack_398._0_4_ = SUB84(pppppppuVar43,0);
                    uStack_398._4_4_ = (float)((ulong)pppppppuVar43 >> 0x20);
                    uStack_3a0 = &PTR_DAT_110b05358;
                    pppppppuVar53 = ppppppppuVar22[-0xd];
                    ppppppppuVar22[-0xd] = pppppppuVar43;
                    ppppppppuVar22[-0xe] = (undefined *******)&PTR_DAT_110b05358;
                    ppppppppuStack_440 = (undefined ********)&PTR_SUB_110b01d60;
                    uStack_438 = (undefined ********)pppppppuVar53;
                    uStack_380 = ppppppppuVar30;
                    func_0x000107c2acd4(&ppppppppuStack_440);
                    func_0x0001096baa30(ppppppppuVar22 + -0xe);
                    pppppppuVar43 = ppppppppuVar22[-0xd];
                    func_0x0001096b985c(&uStack_3a0,ppppppppuVar28,pppppppuVar43 + 6);
                    pppppppuVar43[7] =
                         (undefined ******)CONCAT44(uStack_398._4_4_,(float)uStack_398);
                    pppppppuVar43[6] = (undefined ******)uStack_3a0;
                    pppppppuVar43[9] =
                         (undefined ******)CONCAT44(uStack_388._4_4_,(float)uStack_388);
                    pppppppuVar43[8] =
                         (undefined ******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
                    pppppppuVar43[0xb] = (undefined ******)CONCAT44(uStack_374,fStack_378);
                    pppppppuVar43[10] = (undefined ******)uStack_380;
                    if (((((ulong)*param_8 & 0x100) != 0) &&
                        (pppppuVar55 = pppppppuVar54[2][1],
                        8 < (int)((ulong)((long)pppppppuVar54[2][2] - (long)pppppuVar55) >> 4))) &&
                       (pppppuVar55[0x11] != (undefined ****)0x0)) {
                      pppppuVar55 = pppppuVar55 + 0x10;
                      ___dynamic_cast(pppppuVar55,&PTR_DAT_110b01d40,&PTR_DAT_110b05060,0);
                      ppppppppuVar56 = uStack_380;
                      if (pppppuVar55 == (undefined *****)0x0) {
                        func_0x000107c2acdc();
                        ppppppppuVar56 = uStack_380;
                      }
                      pppppppuVar43 = (undefined *******)pppppuVar55[1];
                      if (pppppppuVar43 != (undefined *******)0x0) {
                        pppppppuVar53 = pppppppuVar43 + -1;
                        do {
                          cVar6 = '\x01';
                          bVar14 = (bool)ExclusiveMonitorPass(pppppppuVar53,0x10);
                          if (bVar14) {
                            *(int *)pppppppuVar53 = *(int *)pppppppuVar53 + 1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                      }
                      uStack_398._0_4_ = SUB84(pppppppuVar43,0);
                      uStack_398._4_4_ = (float)((ulong)pppppppuVar43 >> 0x20);
                      uStack_3a0 = &PTR_DAT_110b05018;
                      pppppppuVar53 = ppppppppuVar22[-9];
                      ppppppppuVar22[-9] = pppppppuVar43;
                      ppppppppuVar22[-10] = (undefined *******)&PTR_DAT_110b05018;
                      ppppppppuStack_440 = (undefined ********)&PTR_SUB_110b01d60;
                      uStack_438 = (undefined ********)pppppppuVar53;
                      uStack_380 = ppppppppuVar56;
                      func_0x000107c2acd4(&ppppppppuStack_440);
                      func_0x0001096b9498(ppppppppuVar22 + -10);
                      pppppppuVar43 = ppppppppuVar22[-9];
                      func_0x0001096b985c(&uStack_3a0,ppppppppuVar28,pppppppuVar43 + 6);
                      pppppppuVar43[7] =
                           (undefined ******)CONCAT44(uStack_398._4_4_,(float)uStack_398);
                      pppppppuVar43[6] = (undefined ******)uStack_3a0;
                      pppppppuVar43[9] =
                           (undefined ******)CONCAT44(uStack_388._4_4_,(float)uStack_388);
                      pppppppuVar43[8] =
                           (undefined ******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
                      pppppppuVar43[0xb] = (undefined ******)CONCAT44(uStack_374,fStack_378);
                      pppppppuVar43[10] = (undefined ******)uStack_380;
                    }
                    func_0x0001096c100c(&ppppppppuStack_440,ppppppppuVar22 + -0xe);
                    uStack_398._0_4_ = SUB84(uStack_438,0);
                    uStack_398._4_4_ = (float)((ulong)uStack_438 >> 0x20);
                    uStack_3a0 = (undefined **)ppppppppuStack_440;
                    ppppppppuVar56 = (undefined ********)ppppppppuVar22[-0xb];
                    pppppppuVar43 = ppppppppuVar22[-0xc];
                    ppppppppuVar22[-0xb] = (undefined *******)uStack_438;
                    ppppppppuVar22[-0xc] = (undefined *******)ppppppppuStack_440;
                    ppppppppuStack_440 = (undefined ********)&PTR_SUB_110b01d60;
                    uStack_438 = ppppppppuVar56;
                    func_0x000107c2acd4(&ppppppppuStack_440);
                  }
                  if (*(char *)param_8 < '\0') {
                    pppppuVar55 = pppppppuVar54[2][1];
                    iVar18 = (int)((ulong)((long)pppppppuVar54[2][2] - (long)pppppuVar55) >> 4);
                    if (((6 < iVar18) && (iVar18 != 7)) &&
                       ((pppppuVar55[0xd] != (undefined ****)0x0 &&
                        (pppppuVar55[0xf] != (undefined ****)0x0)))) {
                      pppppuVar55 = pppppuVar55 + 0xc;
                      ___dynamic_cast(pppppuVar55,&PTR_DAT_110b01d40,&PTR_DAT_110b05060,0);
                      ppppppppuVar56 = uStack_380;
                      if (pppppuVar55 == (undefined *****)0x0) {
                        func_0x000107c2acdc();
                        ppppppppuVar56 = uStack_380;
                      }
                      pppppppuVar43 = (undefined *******)pppppuVar55[1];
                      if (pppppppuVar43 != (undefined *******)0x0) {
                        pppppppuVar53 = pppppppuVar43 + -1;
                        do {
                          cVar6 = '\x01';
                          bVar14 = (bool)ExclusiveMonitorPass(pppppppuVar53,0x10);
                          if (bVar14) {
                            *(int *)pppppppuVar53 = *(int *)pppppppuVar53 + 1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                      }
                      uStack_398._0_4_ = SUB84(pppppppuVar43,0);
                      uStack_398._4_4_ = (float)((ulong)pppppppuVar43 >> 0x20);
                      uStack_3a0 = &PTR_DAT_110b05018;
                      pppppppuVar53 = ppppppppuVar22[-7];
                      ppppppppuVar22[-7] = pppppppuVar43;
                      ppppppppuVar22[-8] = (undefined *******)&PTR_DAT_110b05018;
                      ppppppppuStack_440 = (undefined ********)&PTR_SUB_110b01d60;
                      uStack_438 = (undefined ********)pppppppuVar53;
                      uStack_380 = ppppppppuVar56;
                      func_0x000107c2acd4(&ppppppppuStack_440);
                      ppppppppuVar30 = ppppppppuVar22 + -8;
                      func_0x0001096b9498(ppppppppuVar30);
                      pppppppuVar43 = ppppppppuVar22[-7];
                      ppppppppuVar56 = ppppppppuVar28;
                      func_0x0001096b985c(&uStack_3a0,ppppppppuVar28,pppppppuVar43 + 6);
                      pppppppuVar43[7] =
                           (undefined ******)CONCAT44(uStack_398._4_4_,(float)uStack_398);
                      pppppppuVar43[6] = (undefined ******)uStack_3a0;
                      pppppppuVar43[9] =
                           (undefined ******)CONCAT44(uStack_388._4_4_,(float)uStack_388);
                      pppppppuVar43[8] =
                           (undefined ******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
                      pppppppuVar43[0xb] = (undefined ******)CONCAT44(uStack_374,fStack_378);
                      pppppppuVar43[10] = (undefined ******)uStack_380;
                      pppppuVar55 = pppppppuVar54[2][1];
                      if ((int)((ulong)((long)pppppppuVar54[2][2] - (long)pppppuVar55) >> 4) < 8) {
                        func_0x000107c2acdc();
                      }
                      else {
                        ppppppppuVar56 = (undefined ********)(pppppuVar55 + 0xe);
                      }
                      ___dynamic_cast();
                      ppppppppuVar29 = uStack_380;
                      if (ppppppppuVar56 == (undefined ********)0x0) {
                        func_0x000107c2acdc();
                        ppppppppuVar29 = uStack_380;
                      }
                      pppppppuVar43 = ppppppppuVar56[1];
                      if (pppppppuVar43 != (undefined *******)0x0) {
                        pppppppuVar53 = pppppppuVar43 + -1;
                        do {
                          cVar6 = '\x01';
                          bVar14 = (bool)ExclusiveMonitorPass(pppppppuVar53,0x10);
                          if (bVar14) {
                            *(int *)pppppppuVar53 = *(int *)pppppppuVar53 + 1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                      }
                      uStack_398._0_4_ = SUB84(pppppppuVar43,0);
                      uStack_398._4_4_ = (float)((ulong)pppppppuVar43 >> 0x20);
                      uStack_3a0 = &PTR_DAT_110b05018;
                      ppppppppuVar56 = (undefined ********)ppppppppuVar22[-5];
                      ppppppppuVar22[-5] = pppppppuVar43;
                      ppppppppuVar22[-6] = (undefined *******)&PTR_DAT_110b05018;
                      ppppppppuStack_440 = (undefined ********)&PTR_SUB_110b01d60;
                      uStack_438 = ppppppppuVar56;
                      uStack_380 = ppppppppuVar29;
                      func_0x000107c2acd4(&ppppppppuStack_440);
                      func_0x0001096b9498(ppppppppuVar22 + -6);
                      pppppppuVar53 = ppppppppuVar22[-5];
                      func_0x0001096b985c(&uStack_3a0,ppppppppuVar28,pppppppuVar53 + 6);
                      pppppppuVar43 =
                           (undefined *******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
                      pppppppuVar53[7] =
                           (undefined ******)CONCAT44(uStack_398._4_4_,(float)uStack_398);
                      pppppppuVar53[6] = (undefined ******)uStack_3a0;
                      pppppppuVar53[9] =
                           (undefined ******)CONCAT44(uStack_388._4_4_,(float)uStack_388);
                      pppppppuVar53[8] = (undefined ******)pppppppuVar43;
                      pppppppuVar53[0xb] = (undefined ******)CONCAT44(uStack_374,fStack_378);
                      pppppppuVar53[10] = (undefined ******)uStack_380;
                      if ((ppppppppuVar22[-0xb] != (undefined *******)0x0) &&
                         (ppppppppuVar22[-0xb][2] != (undefined ******)0x0)) {
                        pppppppuVar53 = ppppppppuVar22[-7];
                        uVar75 = *(undefined4 *)((long)pppppppuVar53 + 0x3c);
                        pppppppuVar43 =
                             (undefined *******)(ulong)*(uint *)((long)pppppppuVar53 + 0x4c);
                        uVar76 = *(undefined4 *)((long)pppppppuVar53 + 0x5c);
                        pppppppuVar53 = ppppppppuVar22[-5];
                        uVar77 = *(undefined4 *)((long)pppppppuVar53 + 0x3c);
                        uVar78 = *(undefined4 *)((long)pppppppuVar53 + 0x4c);
                        uVar79 = *(undefined4 *)((long)pppppppuVar53 + 0x5c);
                        func_0x0001096c1e14(ppppppppuVar30,0x11382aab8);
                        func_0x0001096999ec(uVar75,pppppppuVar43,uVar76,uVar77,uVar78,uVar79,
                                            (float)(double)*ppppppppuVar30,ppppppppuVar22 + -0xc);
                      }
                    }
                  }
                  if (((((*(byte *)((long)param_8 + 1) >> 2 & 1) != 0) &&
                       (pppppuVar55 = pppppppuVar54[2][1],
                       10 < (int)((ulong)((long)pppppppuVar54[2][2] - (long)pppppuVar55) >> 4))) &&
                      (pppppuVar55[0x15] != (undefined ****)0x0)) &&
                     ((pppppuVar55[0x13] != (undefined ****)0x0 &&
                      (ppppppppuVar22[-0xb] != (undefined *******)0x0)))) {
                    pppppuVar55 = pppppuVar55 + 0x12;
                    ___dynamic_cast(pppppuVar55,&PTR_DAT_110b01d40,&PTR_DAT_110b05060,0);
                    ppppppppuVar56 = uStack_380;
                    if (pppppuVar55 == (undefined *****)0x0) {
                      func_0x000107c2acdc();
                      ppppppppuVar56 = uStack_380;
                    }
                    pppppppuVar43 = (undefined *******)pppppuVar55[1];
                    if (pppppppuVar43 != (undefined *******)0x0) {
                      pppppppuVar53 = pppppppuVar43 + -1;
                      do {
                        cVar6 = '\x01';
                        bVar14 = (bool)ExclusiveMonitorPass(pppppppuVar53,0x10);
                        if (bVar14) {
                          *(int *)pppppppuVar53 = *(int *)pppppppuVar53 + 1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                    }
                    uStack_398._0_4_ = SUB84(pppppppuVar43,0);
                    uStack_398._4_4_ = (float)((ulong)pppppppuVar43 >> 0x20);
                    uStack_3a0 = &PTR_DAT_110b05018;
                    pppppppuVar53 = ppppppppuVar22[-1];
                    ppppppppuVar22[-1] = pppppppuVar43;
                    ppppppppuVar22[-2] = (undefined *******)&PTR_DAT_110b05018;
                    ppppppppuStack_440 = (undefined ********)&PTR_SUB_110b01d60;
                    uStack_438 = (undefined ********)pppppppuVar53;
                    uStack_380 = ppppppppuVar56;
                    func_0x000107c2acd4(&ppppppppuStack_440);
                    func_0x0001096b9498(ppppppppuVar22 + -2);
                    pppppppuVar43 = ppppppppuVar22[-1];
                    ppppppppuVar56 = ppppppppuVar28;
                    func_0x0001096b985c(&uStack_3a0,ppppppppuVar28,pppppppuVar43 + 6);
                    pppppppuVar43[7] =
                         (undefined ******)CONCAT44(uStack_398._4_4_,(float)uStack_398);
                    pppppppuVar43[6] = (undefined ******)uStack_3a0;
                    pppppppuVar43[9] =
                         (undefined ******)CONCAT44(uStack_388._4_4_,(float)uStack_388);
                    pppppppuVar43[8] =
                         (undefined ******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
                    pppppppuVar43[0xb] = (undefined ******)CONCAT44(uStack_374,fStack_378);
                    pppppppuVar43[10] = (undefined ******)uStack_380;
                    pppppuVar55 = pppppppuVar54[2][1];
                    if ((int)((ulong)((long)pppppppuVar54[2][2] - (long)pppppuVar55) >> 4) < 0xb) {
                      func_0x000107c2acdc();
                    }
                    else {
                      ppppppppuVar56 = (undefined ********)(pppppuVar55 + 0x14);
                    }
                    ___dynamic_cast();
                    ppppppppuVar30 = uStack_380;
                    if (ppppppppuVar56 == (undefined ********)0x0) {
                      func_0x000107c2acdc();
                      ppppppppuVar30 = uStack_380;
                    }
                    pppppppuVar43 = ppppppppuVar56[1];
                    if (pppppppuVar43 != (undefined *******)0x0) {
                      pppppppuVar53 = pppppppuVar43 + -1;
                      do {
                        cVar6 = '\x01';
                        bVar14 = (bool)ExclusiveMonitorPass(pppppppuVar53,0x10);
                        if (bVar14) {
                          *(int *)pppppppuVar53 = *(int *)pppppppuVar53 + 1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                    }
                    uStack_398._0_4_ = SUB84(pppppppuVar43,0);
                    uStack_398._4_4_ = (float)((ulong)pppppppuVar43 >> 0x20);
                    uStack_3a0 = &PTR_DAT_110b05018;
                    ppppppppuVar56 = (undefined ********)ppppppppuVar22[-3];
                    ppppppppuVar22[-3] = pppppppuVar43;
                    ppppppppuVar22[-4] = (undefined *******)&PTR_DAT_110b05018;
                    ppppppppuStack_440 = (undefined ********)&PTR_SUB_110b01d60;
                    uStack_438 = ppppppppuVar56;
                    uStack_380 = ppppppppuVar30;
                    func_0x000107c2acd4(&ppppppppuStack_440);
                    func_0x0001096b9498(ppppppppuVar22 + -4);
                    pppppppuVar53 = ppppppppuVar22[-3];
                    func_0x0001096b985c(&uStack_3a0,ppppppppuVar28,pppppppuVar53 + 6);
                    pppppppuVar43 = (undefined *******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
                    pppppppuVar53[7] =
                         (undefined ******)CONCAT44(uStack_398._4_4_,(float)uStack_398);
                    pppppppuVar53[6] = (undefined ******)uStack_3a0;
                    pppppppuVar53[9] =
                         (undefined ******)CONCAT44(uStack_388._4_4_,(float)uStack_388);
                    pppppppuVar53[8] = (undefined ******)pppppppuVar43;
                    pppppppuVar53[0xb] = (undefined ******)CONCAT44(uStack_374,fStack_378);
                    pppppppuVar53[10] = (undefined ******)uStack_380;
                  }
                  if ((*(char *)(param_8 + 2) == '\x01') &&
                     (ppppppppuVar22[-0xb] != (undefined *******)0x0)) {
                    func_0x0001096b9498(ppppppppuVar22 + -0xc);
                    fVar67 = *(float *)(ppppppppuVar22[-0xb] + 6);
                    uVar35 = *(undefined8 *)((long)ppppppppuVar22[-0xb] + 0x34);
                    func_0x0001096b9498(ppppppppuVar22 + -0xc);
                    fVar82 = (float)uVar35;
                    fVar84 = (float)((ulong)uVar35 >> 0x20);
                    fVar67 = 1.0 / SQRT(fVar67 * fVar67 + fVar82 * fVar82 + fVar84 * fVar84);
                    pppppppuVar43 = (undefined *******)(ulong)(uint)fVar67;
                    uVar37 = 0xfffffffffffffffc;
                    pppppppuVar53 = ppppppppuVar22[-0xb] + 6;
                    do {
                      pppppppuVar53[1] =
                           (undefined ******)
                           CONCAT44((float)((ulong)pppppppuVar53[1] >> 0x20) * fVar67,
                                    SUB84(pppppppuVar53[1],0) * fVar67);
                      *pppppppuVar53 =
                           (undefined ******)
                           CONCAT44((float)((ulong)*pppppppuVar53 >> 0x20) * fVar67,
                                    SUB84(*pppppppuVar53,0) * fVar67);
                      uVar37 = uVar37 + 4;
                      pppppppuVar53 = pppppppuVar53 + 2;
                    } while (uVar37 < 8);
                    func_0x0001096baa30(ppppppppuVar22 + -0xe);
                    uVar37 = 0xfffffffffffffffc;
                    pppppppuVar53 = ppppppppuVar22[-0xd] + 6;
                    do {
                      pppppppuVar53[1] =
                           (undefined ******)
                           CONCAT44((float)((ulong)pppppppuVar53[1] >> 0x20) * fVar67,
                                    SUB84(pppppppuVar53[1],0) * fVar67);
                      *pppppppuVar53 =
                           (undefined ******)
                           CONCAT44((float)((ulong)*pppppppuVar53 >> 0x20) * fVar67,
                                    SUB84(*pppppppuVar53,0) * fVar67);
                      uVar37 = uVar37 + 4;
                      pppppppuVar53 = pppppppuVar53 + 2;
                    } while (uVar37 < 8);
                    if (ppppppppuVar22[-9] != (undefined *******)0x0) {
                      func_0x0001096b9498(ppppppppuVar22 + -10);
                      uVar37 = 0xfffffffffffffffc;
                      pppppppuVar53 = ppppppppuVar22[-9] + 6;
                      do {
                        pppppppuVar53[1] =
                             (undefined ******)
                             CONCAT44((float)((ulong)pppppppuVar53[1] >> 0x20) * fVar67,
                                      SUB84(pppppppuVar53[1],0) * fVar67);
                        *pppppppuVar53 =
                             (undefined ******)
                             CONCAT44((float)((ulong)*pppppppuVar53 >> 0x20) * fVar67,
                                      SUB84(*pppppppuVar53,0) * fVar67);
                        uVar37 = uVar37 + 4;
                        pppppppuVar53 = pppppppuVar53 + 2;
                      } while (uVar37 < 8);
                    }
                    if (ppppppppuVar22[-7] != (undefined *******)0x0) {
                      func_0x0001096b9498(ppppppppuVar22 + -8);
                      uVar37 = 0xfffffffffffffffc;
                      pppppppuVar53 = ppppppppuVar22[-7] + 6;
                      do {
                        pppppppuVar53[1] =
                             (undefined ******)
                             CONCAT44((float)((ulong)pppppppuVar53[1] >> 0x20) * fVar67,
                                      SUB84(pppppppuVar53[1],0) * fVar67);
                        *pppppppuVar53 =
                             (undefined ******)
                             CONCAT44((float)((ulong)*pppppppuVar53 >> 0x20) * fVar67,
                                      SUB84(*pppppppuVar53,0) * fVar67);
                        uVar37 = uVar37 + 4;
                        pppppppuVar53 = pppppppuVar53 + 2;
                      } while (uVar37 < 8);
                      func_0x0001096b9498(ppppppppuVar22 + -6);
                      uVar37 = 0xfffffffffffffffc;
                      pppppppuVar53 = ppppppppuVar22[-5] + 6;
                      do {
                        pppppppuVar53[1] =
                             (undefined ******)
                             CONCAT44((float)((ulong)pppppppuVar53[1] >> 0x20) * fVar67,
                                      SUB84(pppppppuVar53[1],0) * fVar67);
                        *pppppppuVar53 =
                             (undefined ******)
                             CONCAT44((float)((ulong)*pppppppuVar53 >> 0x20) * fVar67,
                                      SUB84(*pppppppuVar53,0) * fVar67);
                        uVar37 = uVar37 + 4;
                        pppppppuVar53 = pppppppuVar53 + 2;
                      } while (uVar37 < 8);
                    }
                    if (ppppppppuVar22[-3] != (undefined *******)0x0) {
                      func_0x0001096b9498(ppppppppuVar22 + -4);
                      uVar37 = 0xfffffffffffffffc;
                      pppppppuVar53 = ppppppppuVar22[-3] + 6;
                      do {
                        pppppppuVar53[1] =
                             (undefined ******)
                             CONCAT44((float)((ulong)pppppppuVar53[1] >> 0x20) * fVar67,
                                      SUB84(pppppppuVar53[1],0) * fVar67);
                        *pppppppuVar53 =
                             (undefined ******)
                             CONCAT44((float)((ulong)*pppppppuVar53 >> 0x20) * fVar67,
                                      SUB84(*pppppppuVar53,0) * fVar67);
                        uVar37 = uVar37 + 4;
                        pppppppuVar53 = pppppppuVar53 + 2;
                      } while (uVar37 < 8);
                      func_0x0001096b9498(ppppppppuVar22 + -2);
                      uVar37 = 0xfffffffffffffffc;
                      pppppppuVar53 = ppppppppuVar22[-1] + 6;
                      do {
                        pppppppuVar53[1] =
                             (undefined ******)
                             CONCAT44((float)((ulong)pppppppuVar53[1] >> 0x20) * fVar67,
                                      SUB84(pppppppuVar53[1],0) * fVar67);
                        *pppppppuVar53 =
                             (undefined ******)
                             CONCAT44((float)((ulong)*pppppppuVar53 >> 0x20) * fVar67,
                                      SUB84(*pppppppuVar53,0) * fVar67);
                        uVar37 = uVar37 + 4;
                        pppppppuVar53 = pppppppuVar53 + 2;
                      } while (uVar37 < 8);
                    }
                  }
                  if (pppppppuStack_5d8 != (undefined *******)0x0) {
                    __ZdlPv();
                  }
                  if (pppppppuStack_5f0 != (undefined *******)0x0) {
                    __ZdlPv();
                  }
                  if (pppppppuStack_4a0 != (undefined *******)0x0) {
                    ppppppuStack_498 = (undefined ******)pppppppuStack_4a0;
                    __ZdlPv();
                  }
                  pppppppuStack_480 = (undefined *******)&PTR_SUB_110b01d60;
                  ppppppppuVar22 = &pppppppuStack_480;
                  func_0x000107c2acd4();
                }
              }
            }
            pppppppuVar54 = pppppppuVar54 + 10;
          } while (pppppppuVar54 != pppppppuVar51);
        }
        if (ppppppppuStack_6b0 != ppppppppuStack_6a8) {
          FUN_10a14ca80(ppppppppuStack_6b0 + 1,ppppppppuStack_680);
        }
        if (((*(byte *)((long)param_8 + 1) >> 1 & 1) == 0) || (CONCAT71(uStack_697,uStack_698) == 0)
           ) {
          uStack_68f = uStack_68f & 0xffffffffffffff;
        }
        else {
          func_0x0001096ae410(&uStack_3a0,ppppppppuVar32 + 0x28,1);
          bVar14 = false;
          if (CONCAT44(uStack_390._4_4_,(float)uStack_390) != 0) {
            uVar42 = (ulong)uStack_3a0._4_4_;
            if ((int)uStack_3a0._4_4_ < 3) {
              lVar41 = (long)(int)uStack_398._4_4_ * (long)(int)(float)uStack_398;
            }
            else {
              lVar41 = 1;
              pppppppuVar54 = pppppppuStack_360;
              do {
                lVar41 = lVar41 * *(int *)pppppppuVar54;
                uVar42 = uVar42 - 1;
                pppppppuVar54 = (undefined *******)((long)pppppppuVar54 + 4);
              } while (uVar42 != 0);
            }
            bVar14 = lVar41 != 0;
          }
          uStack_68f = CONCAT17(bVar14,(undefined7)uStack_68f);
          if (CONCAT44(uStack_364,fStack_368) != 0) {
            piVar44 = (int *)(CONCAT44(uStack_364,fStack_368) + 0x14);
            do {
              iVar18 = *piVar44;
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(piVar44,0x10);
              if (bVar14) {
                *piVar44 = iVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar18 + -1 == 0) {
              func_0x000109a848d4(&uStack_3a0);
            }
          }
          fStack_368 = 0.0;
          uStack_364 = 0;
          uStack_388._0_4_ = 0.0;
          uStack_388._4_4_ = 0.0;
          uStack_390._0_4_ = 0.0;
          uStack_390._4_4_ = 0.0;
          fStack_378 = 0.0;
          uStack_374 = 0;
          uStack_380._0_4_ = 0;
          uStack_380._4_4_ = 0;
          uStack_380 = (undefined ********)0x0;
          if (0 < (int)uStack_3a0._4_4_) {
            lVar41 = 0;
            do {
              *(int *)((long)pppppppuStack_360 + lVar41 * 4) = 0;
              lVar41 = lVar41 + 1;
            } while (lVar41 < (int)uStack_3a0._4_4_);
          }
          if ((undefined ********)pppppppuStack_358 != &pppppppuStack_350 &&
              pppppppuStack_358 != (undefined *******)0x0) {
            _free(pppppppuStack_358[-1]);
          }
        }
        func_0x0001093c8ab0(&ppppppppuStack_470);
        ppppppppuVar56 = ppppppppuVar32;
        FUN_10aac7324();
        if (1 < (int)ppppppppuVar56) {
          ppppppppuVar32[10] = (undefined *******)0x0;
        }
        appuStack_730[0] = &PTR_SUB_110b01d60;
        func_0x000107c2acd4(appuStack_730);
      }
      pppppppuVar54 = ppppppppuVar32[0x29];
      uStack_398._0_4_ = SUB84(pppppppuVar54,0);
      uStack_398._4_4_ = (float)((ulong)pppppppuVar54 >> 0x20);
      if (pppppppuVar54 != (undefined *******)0x0) {
        pppppppuVar54 = pppppppuVar54 + -1;
        do {
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pppppppuVar54,0x10);
          if (bVar14) {
            *(int *)pppppppuVar54 = *(int *)pppppppuVar54 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      uStack_3a0 = &PTR_DAT_110b03dd8;
      func_0x000107c2ad00(&ppppppppuStack_630);
      pppppppuVar54 = (undefined *******)CONCAT44(uStack_628._4_4_,(float)uStack_628);
      uStack_628._0_4_ = SUB84(ppppppppuVar32[0x29],0);
      uStack_628._4_4_ = (float)((ulong)ppppppppuVar32[0x29] >> 0x20);
      ppppppppuVar32[0x29] = pppppppuVar54;
      ppppppppuVar32[0x28] = (undefined *******)ppppppppuStack_630;
      ppppppppuStack_630 = (undefined ********)&PTR_SUB_110b01d60;
      func_0x000107c2acd4(&ppppppppuStack_630);
      func_0x0001096ae880(ppppppppuVar32 + 0x28,0x11382aa58,&uStack_3a0);
      func_0x000107c2ad00(&ppppppppuStack_630);
      func_0x0001096ae880(&uStack_3a0,0x11382aa58,&ppppppppuStack_630);
      ppppppppuStack_630 = (undefined ********)&PTR_SUB_110b01d60;
      func_0x000107c2acd4(&ppppppppuStack_630);
      func_0x0001096e4f30(ppppppppuVar32 + 0x28);
      FUN_10a0ec6f0();
      uVar37 = *(ulong *)((long)ppppppppuVar32 + 0x154);
      bVar14 = ((ulong)ppppppppuVar31 & 1) != 0;
      uVar42 = uVar37 >> 0x20;
      if (bVar14) {
        uVar42 = uVar37;
      }
      uVar60 = uVar37 & 0xffffffff;
      if (bVar14) {
        uVar60 = uVar37 >> 0x20;
      }
      FUN_10aab041c(ppppppppuVar32 + 0xd,&ppuStack_6d8,uVar60 | uVar42 << 0x20);
      lVar41 = 0xa8;
      __Znwm();
      FUN_10a4ff9c4();
      *plVar20 = lVar41;
      uStack_3a0 = &PTR_SUB_110b01d60;
      func_0x000107c2acd4(&uStack_3a0);
      FUN_10aac0340(&ppuStack_6d8);
      goto LAB_10aab6428;
    }
    ppuVar23 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar23 == (undefined *)0x0) {
      ppuVar23 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar57 = (long *)*ppuVar23;
      if ((plVar57 == (long *)0x0) || ((**(code **)(*plVar57 + 0x18))(), plVar57 == (long *)0x0))
      goto LAB_10aab38dc;
      plVar57 = plVar57 + 7;
    }
    else {
      plVar57 = (long *)(*ppuVar23 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar57 + 0x10) >> 1 & 1) == 0) goto LAB_10aab38dc;
  }
  else {
    FUN_10a00946c(&UNK_10f68de3e);
LAB_10aab64b4:
    ___stack_chk_fail();
LAB_10aab64b8:
    FUN_10a00946c(&UNK_10f68de65);
  }
  func_0x000107c2b054(&ppppppppuStack_520,&UNK_10f68de97);
  func_0x000107c2b054(&ppppppppuStack_440,&UNK_10f68da37);
  if ((long)uStack_510 < 0) {
    pcVar33 = "null";
    if (uStack_518 != (undefined8 *)0x0) {
      pcVar33 = (char *)ppppppppuStack_520;
    }
  }
  else {
    pcVar33 = "null";
    if (uStack_510._7_1_ != '\0') {
      pcVar33 = (char *)&ppppppppuStack_520;
    }
  }
  if ((long)uStack_430 < 0) {
    pcVar40 = "null";
    if (uStack_438 != (undefined ********)0x0) {
      pcVar40 = (char *)ppppppppuStack_440;
    }
  }
  else {
    pcVar40 = "null";
    if (uStack_430._7_1_ != '\0') {
      pcVar40 = (char *)&ppppppppuStack_440;
    }
  }
  ppppppppuStack_630 = (undefined ********)pcVar40;
  uStack_3a0 = (undefined **)pcVar33;
  FUN_10a224324(&uStack_3a0,&ppppppppuStack_630);
  if ((long)uStack_510 < 0) {
    if (uStack_518 == (undefined8 *)0x0) goto LAB_10aab6650;
    func_0x000107c3192c(&uStack_3a0,ppppppppuStack_520);
    uStack_398 = (undefined8 *)CONCAT44(uStack_398._4_4_,(float)uStack_398);
    uStack_390 = (undefined *******)CONCAT44(uStack_390._4_4_,(float)uStack_390);
LAB_10aab6814:
    uVar58 = 1;
    pppppppuVar54 = (undefined *******)uStack_388;
  }
  else {
    if (uStack_510._7_1_ != '\0') {
      uStack_3a0 = (undefined **)ppppppppuStack_520;
      uStack_398 = uStack_518;
      uStack_390 = uStack_510;
      goto LAB_10aab6814;
    }
LAB_10aab6650:
    uVar58 = 0;
    uStack_3a0 = (undefined **)((ulong)uStack_3a0 & 0xffffffffffffff00);
    pppppppuVar54 = (undefined *******)uStack_388;
  }
  uStack_388._4_4_ = (float)((ulong)pppppppuVar54 >> 0x20);
  uStack_388._1_3_ = (undefined3)((ulong)pppppppuVar54 >> 8);
  uStack_388._0_4_ = (float)CONCAT31(uStack_388._1_3_,uVar58);
  if ((long)uStack_430 < 0) {
    if (uStack_438 == (undefined ********)0x0) goto LAB_10aab6840;
    func_0x000107c3192c(&ppppppppuStack_630,ppppppppuStack_440);
LAB_10aab68f4:
    uVar58 = 1;
  }
  else {
    if (uStack_430._7_1_ != '\0') {
      uStack_628._0_4_ = SUB84(uStack_438,0);
      uStack_628._4_4_ = (float)((ulong)uStack_438 >> 0x20);
      ppppppppuStack_630 = ppppppppuStack_440;
      uStack_620 = uStack_430;
      goto LAB_10aab68f4;
    }
LAB_10aab6840:
    uVar58 = 0;
    ppppppppuStack_630 = (undefined ********)((ulong)ppppppppuStack_630 & 0xffffffffffffff00);
  }
  fStack_618 = (float)CONCAT31(fStack_618._1_3_,uVar58);
  FUN_10a234a0c(&uStack_3a0,&ppppppppuStack_630);
  ppppppppuVar56 = uStack_610;
LAB_10aab6e00:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10aab6e04);
  uStack_610 = ppppppppuVar56;
  (*pcVar13)();
}



/* Entry: 10aab2844; end: 10aab71cb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10aab2844(undefined8 *param_1,undefined ********param_2,long param_3,long param_4,
                  long param_5,long *param_6,undefined ********param_7,undefined *******param_8)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float *pfVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined *puVar13;
  undefined *******pppppppuVar14;
  code *pcVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined ********ppppppppuVar23;
  undefined **ppuVar24;
  undefined8 *puVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  long *plVar28;
  undefined ********ppppppppuVar29;
  undefined ********ppppppppuVar30;
  undefined ********ppppppppuVar31;
  undefined ********ppppppppuVar32;
  char *pcVar33;
  undefined8 uVar34;
  undefined ******ppppppuVar35;
  ulong uVar36;
  long lVar37;
  undefined ****ppppuVar38;
  char *pcVar39;
  ulong uVar40;
  undefined *******pppppppuVar41;
  long lVar42;
  int *piVar43;
  uint uVar44;
  int iVar45;
  uint uVar46;
  char cVar47;
  byte bVar48;
  int iVar49;
  undefined *******pppppppuVar50;
  long lVar51;
  undefined *******pppppppuVar52;
  undefined *******pppppppuVar53;
  undefined *****pppppuVar54;
  undefined ********ppppppppuVar55;
  long *plVar56;
  undefined1 uVar57;
  int iVar58;
  ulong uVar59;
  undefined *******pppppppuVar60;
  undefined ******ppppppuVar61;
  undefined *******pppppppuVar62;
  undefined *******pppppppuVar63;
  undefined *******pppppppuVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  double dVar69;
  float fVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  int iStack_704;
  uint uStack_6f0;
  undefined *******pppppppuStack_6b0;
  long lStack_680;
  long lStack_678;
  undefined1 auStack_670 [96];
  undefined **appuStack_610 [2];
  long lStack_600;
  long lStack_5f8;
  undefined4 uStack_5e8;
  int iStack_5e4;
  undefined4 uStack_5e0;
  uint uStack_5dc;
  undefined4 uStack_5d8;
  undefined8 uStack_5d4;
  byte bStack_5cc;
  char cStack_5c8;
  undefined1 uStack_5c7;
  ulong uStack_5c4;
  uint uStack_5bc;
  undefined **ppuStack_5b8;
  undefined *******pppppppuStack_5b0;
  undefined *******pppppppuStack_5a8;
  undefined5 uStack_5a0;
  undefined3 uStack_59b;
  int iStack_598;
  undefined1 uStack_594;
  undefined ********ppppppppuStack_590;
  undefined ********ppppppppuStack_588;
  undefined ********ppppppppuStack_580;
  undefined1 uStack_578;
  undefined7 uStack_577;
  undefined1 uStack_570;
  undefined8 uStack_56f;
  undefined ********ppppppppuStack_560;
  long *plStack_558;
  undefined1 auStack_550 [64];
  undefined ********ppppppppuStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  float fStack_4f8;
  undefined4 uStack_4f4;
  undefined8 uStack_4f0;
  float fStack_4e8;
  undefined4 uStack_4e4;
  float fStack_4e0;
  undefined4 uStack_4dc;
  float fStack_4d8;
  undefined4 uStack_4d4;
  undefined *******pppppppuStack_4d0;
  undefined *******pppppppuStack_4c8;
  undefined *******pppppppuStack_4c0;
  undefined *******pppppppuStack_4b8;
  undefined *******pppppppuStack_4b0;
  undefined *******pppppppuStack_4a8;
  undefined1 uStack_468;
  undefined *******pppppppuStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined ******ppppppuStack_448;
  undefined *******pppppppuStack_440;
  float afStack_438 [4];
  undefined4 uStack_428;
  float fStack_424;
  undefined4 uStack_420;
  undefined8 uStack_41c;
  float fStack_414;
  undefined **ppuStack_410;
  undefined ****ppppuStack_408;
  undefined ********ppppppppuStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  float fStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined8 uStack_3dc;
  undefined8 uStack_3d4;
  undefined8 uStack_3cc;
  undefined *******pppppppuStack_3c0;
  undefined *******pppppppuStack_3b8;
  undefined *******pppppppuStack_3b0;
  undefined *******pppppppuStack_3a8;
  undefined *******pppppppuStack_3a0;
  undefined *******pppppppuStack_398;
  ulong uStack_388;
  undefined *******pppppppuStack_380;
  undefined ******ppppppuStack_378;
  undefined8 uStack_370;
  undefined *******pppppppuStack_360;
  undefined *******pppppppuStack_358;
  undefined ********ppppppppuStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined ********ppppppppuStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined ********ppppppppuStack_2b0;
  undefined ********ppppppppuStack_2a8;
  undefined *******pppppppuStack_2a0;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  float fStack_258;
  undefined4 uStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  float fStack_248;
  undefined4 uStack_244;
  undefined *******pppppppuStack_240;
  undefined *******pppppppuStack_238;
  undefined *******pppppppuStack_230;
  undefined *******pppppppuStack_228;
  undefined *******pppppppuStack_220;
  undefined *******pppppppuStack_218;
  long *plStack_208;
  undefined1 uStack_1d8;
  undefined *******pppppppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined ******ppppppuStack_1b8;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10aac70f0(param_2);
  if (((*(uint *)param_8 >> 6 & 1) == 0) || (*(uint *)((long)param_8 + 0xc) != 0xffffffff)) {
    if (*(uint *)param_8 == 0) {
      ppppppppuVar55 = param_2 + 0x2a;
      FUN_10a0ec6f0();
      uVar36 = *(ulong *)((long)param_2 + 0x154);
      bVar16 = ((ulong)ppppppppuVar55 & 1) != 0;
      uVar40 = uVar36 >> 0x20;
      if (bVar16) {
        uVar40 = uVar36;
      }
      uVar59 = uVar36 & 0xffffffff;
      if (bVar16) {
        uVar59 = uVar36 >> 0x20;
      }
      FUN_10aab041c(param_2 + 0xd,0,uVar59 | uVar40 << 0x20);
      *param_1 = 0;
LAB_10aab6428:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
        return;
      }
      goto LAB_10aab64b4;
    }
    if (param_4 == 0) goto LAB_10aab64b8;
    ppppppppuStack_560 = (undefined ********)0x0;
    plStack_558 = (long *)0x0;
    ppuStack_5b8 = &PTR_FUN_110c447c8;
    pppppppuStack_5b0 = (undefined *******)0x0;
    pppppppuStack_5a8 = (undefined *******)0x0;
    uStack_5a0 = 0;
    uStack_59b = 0;
    iStack_598 = 0;
    uStack_594 = 0;
    ppppppppuStack_588 = (undefined ********)0x0;
    ppppppppuStack_590 = (undefined ********)0x0;
    uStack_578 = 0;
    ppppppppuStack_580 = (undefined ********)0x0;
    uStack_56f = 0;
    uStack_577 = 0;
    uStack_570 = 0;
    FUN_10a14b750(auStack_550);
    if (*(int *)(param_2 + 0x43) == 0) {
      if ((*param_2)[4] != (undefined ******)0x0) {
        (*(code *)(*(*param_2)[4])[2])();
      }
      *(undefined4 *)(param_2 + 0x43) = 1;
    }
    pppppppuVar53 = param_2[0x41];
    if (pppppppuVar53[0x2e] != (undefined ******)0x0) {
      uStack_500 = (undefined *******)CONCAT44(uStack_500._4_4_,(float)uStack_500);
      uStack_260 = (undefined ********)CONCAT44(uStack_260._4_4_,(undefined4)uStack_260);
      uStack_3f8 = (undefined8 *)CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8);
      uStack_3f0 = (undefined *******)CONCAT44(uStack_3f0._4_4_,(float)uStack_3f0);
      uStack_278 = (undefined8 *)CONCAT44(uStack_278._4_4_,(float)uStack_278);
      uStack_270 = (undefined *******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
      ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
      uStack_268 = (undefined ********)CONCAT44(uStack_268._4_4_,(float)uStack_268);
      if (((ulong)pppppppuVar53[0x5b] & 1) == 0) goto LAB_10aab6e00;
      if (*(char *)(pppppppuVar53 + 0x59) == '\0') {
        if (*(char *)(pppppppuVar53 + 0x5f) == '\x01') {
          pppppppuVar41 = pppppppuVar53 + 0x60;
          func_0x00010a505604();
          if ((int)pppppppuVar41 != 0) {
            __ZNSt3__16chrono12steady_clock3nowEv();
            ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
            pppppppuVar53[0x60] = (undefined ******)pppppppuVar41;
            uVar40 = ((long)pppppppuVar53[0x62] - (long)pppppppuVar53[0x61] >> 3) *
                     -0x5555555555555555;
            if (uVar40 < (ulong)(long)*(int *)(pppppppuVar53 + 100) ||
                uVar40 - (long)*(int *)(pppppppuVar53 + 100) == 0) goto LAB_10aab6e00;
            *(undefined1 *)(pppppppuVar53 + 0x5f) = 0;
            goto LAB_10aab2b00;
          }
        }
      }
      else if (*(char *)(pppppppuVar53 + 0x59) == '\x02') {
        __ZNSt13exception_ptrC1ERKS_(&ppppppppuStack_510,pppppppuVar53 + 0x5a);
        uStack_280 = (undefined **)0x0;
        __ZNSt13exception_ptraSERKS_(pppppppuVar53 + 0x5a,&uStack_280);
        __ZNSt13exception_ptrD1Ev(&uStack_280);
        if (ppppppppuStack_510 != (undefined ********)0x0) {
          FUN_10a0ee744(&uStack_280,&ppppppppuStack_510);
          uVar40 = CONCAT44(uStack_278._4_4_,(float)uStack_278);
          ppppppppuVar55 = (undefined ********)uStack_280;
          if (-1 < (int)uStack_270._4_4_) {
            uVar40 = (ulong)uStack_270._7_1_;
            ppppppppuVar55 = (undefined ********)&uStack_280;
          }
          FUN_10ae03140(0,ppppppppuVar55,uVar40);
          ppuVar24 = &PTR_PTR_113306738;
          FUN_10ae079a0();
          FUN_10ae0314c();
          FUN_10ae07cd4(ppuVar24,&PTR_PTR_113306738);
          if ((int)uStack_270._4_4_ < 0) {
            __ZdlPv(uStack_280);
          }
        }
        __ZNSt13exception_ptrD1Ev(&ppppppppuStack_510);
        pppppppuVar41 = pppppppuVar53 + 0x60;
        func_0x00010a505604();
        if ((int)pppppppuVar41 != 0) {
          __ZNSt3__16chrono12steady_clock3nowEv();
          pppppppuVar53[0x60] = (undefined ******)pppppppuVar41;
          uVar40 = ((long)pppppppuVar53[0x62] - (long)pppppppuVar53[0x61] >> 3) *
                   -0x5555555555555555;
          uStack_500 = (undefined *******)CONCAT44(uStack_500._4_4_,(float)uStack_500);
          uStack_260 = (undefined ********)CONCAT44(uStack_260._4_4_,(undefined4)uStack_260);
          uStack_3f8 = (undefined8 *)CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8);
          uStack_3f0 = (undefined *******)CONCAT44(uStack_3f0._4_4_,(float)uStack_3f0);
          uStack_278 = (undefined8 *)CONCAT44(uStack_278._4_4_,(float)uStack_278);
          uStack_270 = (undefined *******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
          ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
          uStack_268 = (undefined ********)CONCAT44(uStack_268._4_4_,(float)uStack_268);
          if ((uVar40 < (ulong)(long)*(int *)(pppppppuVar53 + 100) ||
               uVar40 - (long)*(int *)(pppppppuVar53 + 100) == 0) ||
             (uStack_500 = (undefined *******)CONCAT44(uStack_500._4_4_,(float)uStack_500),
             uStack_260 = (undefined ********)CONCAT44(uStack_260._4_4_,(undefined4)uStack_260),
             uStack_3f8 = (undefined8 *)CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8),
             uStack_3f0 = (undefined *******)CONCAT44(uStack_3f0._4_4_,(float)uStack_3f0),
             uStack_278 = (undefined8 *)CONCAT44(uStack_278._4_4_,(float)uStack_278),
             uStack_270 = (undefined *******)CONCAT44(uStack_270._4_4_,(float)uStack_270),
             ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0),
             uStack_268 = (undefined ********)CONCAT44(uStack_268._4_4_,(float)uStack_268),
             ((ulong)pppppppuVar53[0x5b] & 1) == 0)) goto LAB_10aab6e00;
          *(undefined1 *)(pppppppuVar53 + 0x59) = 1;
          FUN_10aac6380(pppppppuVar53);
LAB_10aab2b00:
          FUN_10a505688(pppppppuVar53 + 0x60);
        }
      }
    }
    cVar7 = *(char *)((long)param_8 + 0x16);
    pppppppuVar50 = param_2[0x41];
    pppppppuVar53 = pppppppuVar50 + 0xb;
    pppppppuVar41 = pppppppuVar53;
    FUN_10a28a860(pppppppuVar53,param_8);
    if (((ulong)pppppppuVar41 & 1) == 0) {
      ppppppuVar35 = param_8[1];
      ppppppuVar61 = *param_8;
      *(undefined8 *)((long)pppppppuVar50 + 0x67) = *(undefined8 *)((long)param_8 + 0xf);
      pppppppuVar50[0xc] = ppppppuVar35;
      *pppppppuVar53 = ppppppuVar61;
      FUN_10a28fda4(pppppppuVar50 + 0xe,param_8 + 3);
      FUN_10a28ffb0(pppppppuVar50 + 0x12,param_8 + 7);
      *(undefined1 *)(pppppppuVar50 + 0x1e) = *(undefined1 *)(param_8 + 0x13);
      if (pppppppuVar53 != param_8) {
        FUN_10a290680(pppppppuVar50 + 0x1f,param_8[0x14],param_8[0x15],
                      ((long)param_8[0x15] - (long)param_8[0x14] >> 3) * 0x2e8ba2e8ba2e8ba3);
      }
      pppppppuVar50[0x24] = (undefined ******)&UNK_1096b1e6c;
      (*(code *)*pppppppuVar50[0x25])(pppppppuVar50 + 0x25);
      pppppppuVar50[0x25] = (undefined ******)&PTR_DAT_110ae9180;
      *(undefined4 *)(pppppppuVar50 + 0x2c) = 0;
      func_0x00010ae02ecc(0,*(uint *)param_8);
      func_0x00010ae02ecc();
      func_0x00010ae02ecc();
      ppuVar24 = &PTR_PTR_113306400;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      FUN_10ae07cd4(ppuVar24,&PTR_PTR_113306400);
    }
    pppppppuVar53 = param_2[0x41];
    uStack_500 = (undefined *******)CONCAT44(uStack_500._4_4_,(float)uStack_500);
    uStack_260 = (undefined ********)CONCAT44(uStack_260._4_4_,(undefined4)uStack_260);
    uStack_3f8 = (undefined8 *)CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8);
    uStack_3f0 = (undefined *******)CONCAT44(uStack_3f0._4_4_,(float)uStack_3f0);
    uStack_278 = (undefined8 *)CONCAT44(uStack_278._4_4_,(float)uStack_278);
    uStack_270 = (undefined *******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
    ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
    uStack_268 = (undefined ********)CONCAT44(uStack_268._4_4_,(float)uStack_268);
    if (((ulong)pppppppuVar53[0x5b] & 1) == 0) goto LAB_10aab6e00;
    cVar47 = *(char *)(pppppppuVar53 + 0x59);
    if (cVar47 != '\x06') {
      if (cVar47 == '\x03') {
        uStack_500 = (undefined *******)CONCAT44(uStack_500._4_4_,(float)uStack_500);
        uStack_260 = (undefined ********)CONCAT44(uStack_260._4_4_,(undefined4)uStack_260);
        uStack_3f8 = (undefined8 *)CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8);
        uStack_3f0 = (undefined *******)CONCAT44(uStack_3f0._4_4_,(float)uStack_3f0);
        uStack_278 = (undefined8 *)CONCAT44(uStack_278._4_4_,(float)uStack_278);
        uStack_270 = (undefined *******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
        ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
        uStack_268 = (undefined ********)CONCAT44(uStack_268._4_4_,(float)uStack_268);
        if (((ulong)pppppppuVar53[0x5b] & 1) == 0) goto LAB_10aab6e00;
        *(undefined1 *)(pppppppuVar53 + 0x59) = 4;
        ppppppuVar35 = param_8[1];
        ppppppuVar61 = *param_8;
        *(undefined8 *)((long)pppppppuVar53 + 0x1cf) = *(undefined8 *)((long)param_8 + 0xf);
        pppppppuVar53[0x39] = ppppppuVar35;
        pppppppuVar53[0x38] = ppppppuVar61;
        FUN_10a28fda4(pppppppuVar53 + 0x3b,param_8 + 3);
        FUN_10a28ffb0(pppppppuVar53 + 0x3f,param_8 + 7);
        *(undefined1 *)(pppppppuVar53 + 0x4b) = *(undefined1 *)(param_8 + 0x13);
        if (pppppppuVar53 + 0x38 != param_8) {
          FUN_10a290680(pppppppuVar53 + 0x4c,param_8[0x14],param_8[0x15],
                        ((long)param_8[0x15] - (long)param_8[0x14] >> 3) * 0x2e8ba2e8ba2e8ba3);
        }
        if (pppppppuVar53[5] != (undefined ******)0x0) {
          ppuVar24 = &PTR_PTR_1133066a0;
          FUN_10ae079a0(0,&PTR_PTR_1133066a0);
          FUN_10ae07cd4(ppuVar24,&PTR_PTR_1133066a0);
          ppppppuVar61 = pppppppuVar53[0x5c];
          ppppppppuStack_510 = (undefined ********)*pppppppuVar53;
          uStack_508._0_4_ = SUB84(pppppppuVar53[1],0);
          uStack_508._4_4_ = (float)((ulong)pppppppuVar53[1] >> 0x20);
          if (pppppppuVar53[1] != (undefined ******)0x0) {
            ppppppuVar35 = pppppppuVar53[1] + 2;
            do {
              cVar47 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppppppuVar35,0x10);
              if (bVar16) {
                *ppppppuVar35 = (undefined *****)((long)*ppppppuVar35 + 1);
                cVar47 = ExclusiveMonitorsStatus();
              }
            } while (cVar47 != '\0');
          }
          fStack_4f8 = SUB84(param_8[1],0);
          uStack_500._0_4_ = SUB84(*param_8,0);
          uStack_500._4_4_ = (float)((ulong)*param_8 >> 0x20);
          uVar34 = *(undefined8 *)((long)param_8 + 0xf);
          uStack_4f4._0_3_ = (undefined3)((ulong)param_8[1] >> 0x20);
          uStack_4f4._3_1_ = (undefined1)uVar34;
          uStack_4f0._0_4_ = (undefined4)((ulong)uVar34 >> 8);
          uStack_4f0._4_3_ = (undefined3)((ulong)uVar34 >> 0x28);
          FUN_10a22cb80(&fStack_4e8,param_8 + 3);
          FUN_10a22cd3c(&pppppppuStack_4c8,param_8 + 7);
          uStack_468 = *(undefined1 *)(param_8 + 0x13);
          uStack_450 = 0;
          pppppppuStack_460 = (undefined *******)0x0;
          uStack_458 = 0;
          FUN_10a22ce94(&pppppppuStack_460,param_8[0x14],param_8[0x15],
                        ((long)param_8[0x15] - (long)param_8[0x14] >> 3) * 0x2e8ba2e8ba2e8ba3);
          fVar70 = uStack_508._4_4_;
          fVar68 = (float)uStack_508;
          ppppppppuVar55 = ppppppppuStack_510;
          ppppppuStack_448 = pppppppuVar53[0x5e];
          pppppuVar54 = ppppppuVar61[2];
          uStack_3f0._0_4_ = 0.0;
          uStack_3f0._4_4_ = 0.0;
          uStack_3f8._0_4_ = 0.0;
          uStack_3f8._4_4_ = 0.0;
          if (pppppuVar54 == (undefined *****)0x0) {
            ppppppppuStack_510 = (undefined ********)0x0;
            uStack_508._0_4_ = 0.0;
            uStack_508._4_4_ = 0.0;
            uStack_278._0_4_ = fVar68;
            uStack_278._4_4_ = fVar70;
            uStack_280 = (undefined **)ppppppppuVar55;
            uStack_268._0_4_ = fStack_4f8;
            uStack_270._0_4_ = (float)uStack_500;
            uStack_270._4_4_ = uStack_500._4_4_;
            uStack_268._4_4_ = (float)uStack_4f4;
            uStack_260._0_4_ = (undefined4)uStack_4f0;
            uStack_260._4_4_ = CONCAT13(uStack_260._7_1_,uStack_4f0._4_3_);
            fStack_258 = (float)((uint)fStack_258 & 0xffffff00);
            uVar40 = (ulong)pppppppuStack_240 >> 8;
            pppppppuStack_240 = (undefined *******)((ulong)pppppppuStack_240 & 0xffffffffffffff00);
            if ((char)pppppppuStack_4d0 == '\x01') {
              fStack_250 = fStack_4e0;
              uStack_24c = uStack_4dc;
              fStack_258 = fStack_4e8;
              uStack_254 = uStack_4e4;
              fStack_248 = fStack_4d8;
              uStack_244 = uStack_4d4;
              fStack_4e0 = 0.0;
              uStack_4dc = 0;
              fStack_4d8 = 0.0;
              uStack_4d4 = 0;
              fStack_4e8 = 0.0;
              uStack_4e4 = 0;
              pppppppuStack_240 = (undefined *******)CONCAT71((int7)uVar40,1);
            }
            FUN_10a230c9c(&pppppppuStack_238,&pppppppuStack_4c8);
            uStack_1c0 = uStack_450;
            uStack_1d8 = uStack_468;
            uStack_1c8 = uStack_458;
            pppppppuStack_1d0 = pppppppuStack_460;
            uStack_458 = 0;
            uStack_450 = 0;
            pppppppuStack_460 = (undefined *******)0x0;
            ppppppuStack_1b8 = ppppppuStack_448;
            puVar22 = (undefined8 *)0x188;
            __Znwm();
            puVar22[2] = 0;
            puVar22[1] = 0x200000006;
            *(undefined2 *)(puVar22 + 3) = 4;
            puVar22[5] = 0;
            puVar22[4] = 0;
            puVar22[7] = 0;
            puVar22[6] = 0;
            puVar22[9] = 0;
            puVar22[8] = 0;
            puVar22[0xb] = 0;
            puVar22[10] = 0;
            puVar22[0xd] = 0;
            puVar22[0xc] = 0;
            puVar22[0xf] = 0;
            puVar22[0xe] = 0;
            puVar22[0x10] = 0;
            puVar22[0x11] = puVar22 + 3;
            puVar22[0x12] = 0;
            *(undefined2 *)(puVar22 + 0x13) = 0;
            *puVar22 = &PTR_DAT_110c43a08;
            func_0x00010aad8990(puVar22 + 0x14,&uStack_280);
            puVar22[0x30] = 0;
            plVar56 = (long *)CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8);
            if (plVar56 != (long *)0x0) {
              puVar1 = (ulong *)(plVar56 + 1);
              do {
                uVar40 = *puVar1;
                cVar47 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar16) {
                  *puVar1 = uVar40 - 4;
                  cVar47 = ExclusiveMonitorsStatus();
                }
              } while (cVar47 != '\0');
              if ((uVar40 & 0x1fffffffc) == 4) {
                do {
                  uVar40 = *puVar1;
                  cVar47 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar16) {
                    *puVar1 = uVar40 - 1;
                    cVar47 = ExclusiveMonitorsStatus();
                  }
                } while (cVar47 != '\0');
                if (uVar40 - 1 == 0) {
                  (**(code **)(*plVar56 + 8))();
                }
              }
            }
            uStack_3f8._0_4_ = SUB84(puVar22,0);
            uVar71 = (float)uStack_3f8;
            uStack_3f8._4_4_ = (float)((ulong)puVar22 >> 0x20);
            uVar72 = uStack_3f8._4_4_;
            if (CONCAT44(uStack_3f0._4_4_,(float)uStack_3f0) != 0) {
              func_0x0001092b4274(&uStack_3f0);
            }
            ppppppppuStack_400 = (undefined ********)(puVar22 + 0x14);
            uStack_3f0._0_4_ = (float)uVar71;
            uStack_3f0._4_4_ = (float)uVar72;
            ppppppppuStack_320 = &pppppppuStack_1d0;
            FUN_10a22d224(&ppppppppuStack_320);
            FUN_10a22ce48(&pppppppuStack_238);
            if (((char)pppppppuStack_240 == '\x01') && (CONCAT44(uStack_254,fStack_258) != 0)) {
              fStack_250 = fStack_258;
              uStack_24c = uStack_254;
              __ZdlPv();
            }
            if (CONCAT44(uStack_278._4_4_,(float)uStack_278) != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            fStack_3e8 = 1.6709458e-32;
            uStack_3e4 = 1;
          }
          else {
            pppppppuStack_440 = (undefined *******)0x0;
            (*(code *)(*pppppuVar54)[5])(pppppuVar54,0,&pppppppuStack_440);
            fVar70 = uStack_508._4_4_;
            fVar68 = (float)uStack_508;
            ppppppppuVar55 = ppppppppuStack_510;
            if (pppppppuStack_440 != (undefined *******)0x0) {
              func_0x0001092af97c(&pppppppuStack_440);
              ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0)
              ;
              goto LAB_10aab6e00;
            }
            ppppppppuStack_510 = (undefined ********)0x0;
            uStack_508._0_4_ = 0.0;
            uStack_508._4_4_ = 0.0;
            uStack_278._0_4_ = fVar68;
            uStack_278._4_4_ = fVar70;
            uStack_280 = (undefined **)ppppppppuVar55;
            uStack_268._0_4_ = fStack_4f8;
            uStack_270._0_4_ = (float)uStack_500;
            uStack_270._4_4_ = uStack_500._4_4_;
            uStack_268._4_4_ = (float)uStack_4f4;
            uStack_260._0_4_ = (undefined4)uStack_4f0;
            uStack_260._4_4_ = CONCAT13(uStack_260._7_1_,uStack_4f0._4_3_);
            fStack_258 = (float)((uint)fStack_258 & 0xffffff00);
            uVar40 = (ulong)pppppppuStack_240 >> 8;
            pppppppuStack_240 = (undefined *******)((ulong)pppppppuStack_240 & 0xffffffffffffff00);
            if ((char)pppppppuStack_4d0 == '\x01') {
              fStack_250 = fStack_4e0;
              uStack_24c = uStack_4dc;
              fStack_258 = fStack_4e8;
              uStack_254 = uStack_4e4;
              fStack_248 = fStack_4d8;
              uStack_244 = uStack_4d4;
              fStack_4e0 = 0.0;
              uStack_4dc = 0;
              fStack_4d8 = 0.0;
              uStack_4d4 = 0;
              fStack_4e8 = 0.0;
              uStack_4e4 = 0;
              pppppppuStack_240 = (undefined *******)CONCAT71((int7)uVar40,1);
            }
            FUN_10a230c9c(&pppppppuStack_238,&pppppppuStack_4c8);
            uStack_1c0 = uStack_450;
            uStack_1d8 = uStack_468;
            uStack_1c8 = uStack_458;
            pppppppuStack_1d0 = pppppppuStack_460;
            uStack_458 = 0;
            uStack_450 = 0;
            pppppppuStack_460 = (undefined *******)0x0;
            ppppppuStack_1b8 = ppppppuStack_448;
            puVar22 = (undefined8 *)0x190;
            __Znwm();
            puVar22[2] = 0;
            puVar22[1] = 0x200000006;
            *(undefined2 *)(puVar22 + 3) = 4;
            puVar22[5] = 0;
            puVar22[4] = 0;
            puVar22[7] = 0;
            puVar22[6] = 0;
            puVar22[9] = 0;
            puVar22[8] = 0;
            puVar22[0xb] = 0;
            puVar22[10] = 0;
            puVar22[0xd] = 0;
            puVar22[0xc] = 0;
            puVar22[0xf] = 0;
            puVar22[0xe] = 0;
            puVar22[0x10] = 0;
            puVar22[0x11] = puVar22 + 3;
            puVar22[0x12] = 0;
            *(undefined2 *)(puVar22 + 0x13) = 0;
            *puVar22 = &PTR_FUN_110c439d0;
            func_0x00010aad8990(puVar22 + 0x14,&uStack_280);
            puVar22[0x30] = 0;
            puVar22[0x31] = pppppuVar54;
            plVar56 = (long *)CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8);
            if (plVar56 != (long *)0x0) {
              puVar1 = (ulong *)(plVar56 + 1);
              do {
                uVar40 = *puVar1;
                cVar47 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar16) {
                  *puVar1 = uVar40 - 4;
                  cVar47 = ExclusiveMonitorsStatus();
                }
              } while (cVar47 != '\0');
              if ((uVar40 & 0x1fffffffc) == 4) {
                do {
                  uVar40 = *puVar1;
                  cVar47 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar16) {
                    *puVar1 = uVar40 - 1;
                    cVar47 = ExclusiveMonitorsStatus();
                  }
                } while (cVar47 != '\0');
                if (uVar40 - 1 == 0) {
                  (**(code **)(*plVar56 + 8))();
                }
              }
            }
            uStack_3f8._0_4_ = SUB84(puVar22,0);
            uVar71 = (float)uStack_3f8;
            uStack_3f8._4_4_ = (float)((ulong)puVar22 >> 0x20);
            uVar72 = uStack_3f8._4_4_;
            if (CONCAT44(uStack_3f0._4_4_,(float)uStack_3f0) != 0) {
              func_0x0001092b4274(&uStack_3f0);
            }
            ppppppppuStack_400 = (undefined ********)(puVar22 + 0x14);
            uStack_3f0._0_4_ = (float)uVar71;
            uStack_3f0._4_4_ = (float)uVar72;
            ppppppppuStack_320 = &pppppppuStack_1d0;
            FUN_10a22d224(&ppppppppuStack_320);
            FUN_10a22ce48(&pppppppuStack_238);
            if (((char)pppppppuStack_240 == '\x01') && (CONCAT44(uStack_254,fStack_258) != 0)) {
              fStack_250 = fStack_258;
              uStack_24c = uStack_254;
              __ZdlPv();
            }
            if (CONCAT44(uStack_278._4_4_,(float)uStack_278) != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            fStack_3e8 = 1.6709388e-32;
            uStack_3e4 = 1;
            __ZNSt13exception_ptrD1Ev(&pppppppuStack_440);
          }
          ppppppppuVar55 = ppppppppuStack_400;
          if (ppppppppuStack_400[0x1c] != (undefined *******)0x0) {
            func_0x0001092b4274();
          }
          uStack_280 = (undefined **)CONCAT44(uStack_3e4,fStack_3e8);
          ppppppppuVar55[0x1c] = (undefined *******)CONCAT44(uStack_3f0._4_4_,(float)uStack_3f0);
          uStack_3f0._0_4_ = 0.0;
          uStack_3f0._4_4_ = 0.0;
          uStack_278._0_4_ = SUB84(ppppppppuStack_400,0);
          uStack_278._4_4_ = (float)((ulong)ppppppppuStack_400 >> 0x20);
          uStack_270._0_4_ = SUB84(ppppppuVar61,0);
          uStack_270._4_4_ = (float)((ulong)ppppppuVar61 >> 0x20);
          (*(code *)**ppppppuVar61)(ppppppuVar61,&uStack_280);
          ppppppppuStack_2b0 = (undefined ********)CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8);
          uStack_3f8._0_4_ = 0.0;
          uStack_3f8._4_4_ = 0.0;
          if (CONCAT44(uStack_3f0._4_4_,(float)uStack_3f0) != 0) {
            func_0x0001092b4274(&uStack_3f0);
            plVar56 = (long *)CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8);
            if (plVar56 != (long *)0x0) {
              puVar1 = (ulong *)(plVar56 + 1);
              do {
                uVar40 = *puVar1;
                cVar47 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar16) {
                  *puVar1 = uVar40 - 4;
                  cVar47 = ExclusiveMonitorsStatus();
                }
              } while (cVar47 != '\0');
              if ((uVar40 & 0x1fffffffc) == 4) {
                do {
                  uVar40 = *puVar1;
                  cVar47 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar16) {
                    *puVar1 = uVar40 - 1;
                    cVar47 = ExclusiveMonitorsStatus();
                  }
                } while (cVar47 != '\0');
                if (uVar40 - 1 == 0) {
                  (**(code **)(*plVar56 + 8))();
                }
              }
            }
          }
          uStack_280 = (undefined **)&pppppppuStack_460;
          FUN_10a22d224(&uStack_280);
          FUN_10a22ce48(&pppppppuStack_4c8);
          if (((char)pppppppuStack_4d0 == '\x01') && (CONCAT44(uStack_4e4,fStack_4e8) != 0)) {
            fStack_4e0 = fStack_4e8;
            uStack_4dc = uStack_4e4;
            __ZdlPv();
          }
          if (CONCAT44(uStack_508._4_4_,(float)uStack_508) != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          FUN_109d1a400(&ppppppppuStack_2b0,5000000);
          uStack_270 = (undefined *******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
          ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
          uStack_268 = (undefined ********)CONCAT44(uStack_268._4_4_,(float)uStack_268);
          if (((ulong)pppppppuVar53[0x5b] & 1) == 0) goto LAB_10aab6e00;
          cVar47 = *(char *)(pppppppuVar53 + 0x59);
          if (ppppppppuStack_2b0 != (undefined ********)0x0) {
            ppppppppuVar55 = ppppppppuStack_2b0 + 1;
            do {
              pppppppuVar41 = *ppppppppuVar55;
              cVar8 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppppppppuVar55,0x10);
              if (bVar16) {
                *ppppppppuVar55 = (undefined *******)((long)pppppppuVar41 + -4);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (((ulong)pppppppuVar41 & 0x1fffffffc) == 4) {
              do {
                pppppppuVar41 = *ppppppppuVar55;
                cVar8 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(ppppppppuVar55,0x10);
                if (bVar16) {
                  *ppppppppuVar55 = (undefined *******)((long)pppppppuVar41 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if ((undefined *******)((long)pppppppuVar41 + -1) == (undefined *******)0x0) {
                (*(code *)(*ppppppppuStack_2b0)[1])();
              }
            }
          }
          goto LAB_10aab3284;
        }
      }
      else {
LAB_10aab3284:
        if (cVar47 != '\x05') goto LAB_10aab34b0;
      }
      ppuVar24 = &PTR_PTR_113306520;
      FUN_10ae079a0(0,&PTR_PTR_113306520);
      FUN_10ae07cd4(ppuVar24,&PTR_PTR_113306520);
      uStack_270 = (undefined *******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
      ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
      uStack_268 = (undefined ********)CONCAT44(uStack_268._4_4_,(float)uStack_268);
      if (((ulong)pppppppuVar53[0x5b] & 1) == 0) goto LAB_10aab6e00;
      ppppppuVar35 = pppppppuVar53[0x30];
      pppppppuVar53[0x30] = (undefined ******)0x0;
      ppppppuVar61 = pppppppuVar53[3];
      pppppppuVar53[3] = ppppppuVar35;
      if (ppppppuVar61 != (undefined ******)0x0) {
        (*(code *)(*ppppppuVar61)[1])();
      }
      ppppppuVar35 = pppppppuVar53[0x32];
      ppppppuVar61 = pppppppuVar53[0x31];
      pppppppuVar53[0x32] = pppppppuVar53[5];
      pppppppuVar53[0x31] = pppppppuVar53[4];
      pppppppuVar53[5] = ppppppuVar35;
      pppppppuVar53[4] = ppppppuVar61;
      FUN_10aabbbfc(pppppppuVar53 + 6,pppppppuVar53 + 0x33);
      pppppppuVar53[0xc] = pppppppuVar53[0x39];
      pppppppuVar53[0xb] = pppppppuVar53[0x38];
      *(undefined8 *)((long)pppppppuVar53 + 0x67) = *(undefined8 *)((long)pppppppuVar53 + 0x1cf);
      func_0x00010a230998(pppppppuVar53 + 0xe,pppppppuVar53 + 0x3b);
      func_0x00010a230a6c(pppppppuVar53 + 0x12,pppppppuVar53 + 0x3f);
      *(undefined1 *)(pppppppuVar53 + 0x1e) = *(undefined1 *)(pppppppuVar53 + 0x4b);
      FUN_10a230b90(pppppppuVar53 + 0x1f);
      pppppppuVar53[0x20] = pppppppuVar53[0x4d];
      pppppppuVar53[0x1f] = pppppppuVar53[0x4c];
      pppppppuVar53[0x21] = pppppppuVar53[0x4e];
      pppppppuVar53[0x4e] = (undefined ******)0x0;
      pppppppuVar53[0x4d] = (undefined ******)0x0;
      pppppppuVar53[0x4c] = (undefined ******)0x0;
      ppppppuVar35 = pppppppuVar53[0x50];
      ppppppuVar61 = pppppppuVar53[0x4f];
      pppppppuVar53[0x50] = pppppppuVar53[0x23];
      pppppppuVar53[0x4f] = pppppppuVar53[0x22];
      pppppppuVar53[0x23] = ppppppuVar35;
      pppppppuVar53[0x22] = ppppppuVar61;
      uStack_270 = (undefined *******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
      ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
      uStack_268 = (undefined ********)CONCAT44(uStack_268._4_4_,(float)uStack_268);
      if (((ulong)pppppppuVar53[0x5b] & 1) == 0) goto LAB_10aab6e00;
      pppppppuVar41 = pppppppuVar53 + 0xb;
      pppppppuVar53[0x24] = pppppppuVar53[0x51];
      (*(code *)*pppppppuVar53[0x25])(pppppppuVar53 + 0x25);
      (*(code *)pppppppuVar53[0x52][2])(pppppppuVar53 + 0x25,pppppppuVar53 + 0x52);
      ppppppuVar61 = pppppppuVar53[2];
      if (ppppppuVar61 != (undefined ******)0x0) {
        ppppppuVar35 = ppppppuVar61 + 1;
        do {
          pppppuVar54 = *ppppppuVar35;
          cVar47 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppppppuVar35,0x10);
          if (bVar16) {
            *ppppppuVar35 = (undefined *****)((long)pppppuVar54 + -4);
            cVar47 = ExclusiveMonitorsStatus();
          }
        } while (cVar47 != '\0');
        if (((ulong)pppppuVar54 & 0x1fffffffc) == 4) {
          do {
            pppppuVar54 = *ppppppuVar35;
            cVar47 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppppppuVar35,0x10);
            if (bVar16) {
              *ppppppuVar35 = (undefined *****)((long)pppppuVar54 + -1);
              cVar47 = ExclusiveMonitorsStatus();
            }
          } while (cVar47 != '\0');
          if ((undefined *****)((long)pppppuVar54 + -1) == (undefined *****)0x0) {
            (*(code *)(*ppppppuVar61)[1])();
          }
        }
      }
      pppppppuVar53[2] = (undefined ******)0x0;
      *(undefined4 *)(pppppppuVar53 + 0x2c) = 0;
      pppppppuVar50 = pppppppuVar41;
      FUN_10a28a860(pppppppuVar41,param_8);
      if (((ulong)pppppppuVar50 & 1) == 0) {
        ppppppuVar35 = param_8[1];
        ppppppuVar61 = *param_8;
        *(undefined8 *)((long)pppppppuVar53 + 0x67) = *(undefined8 *)((long)param_8 + 0xf);
        pppppppuVar53[0xc] = ppppppuVar35;
        *pppppppuVar41 = ppppppuVar61;
        FUN_10a28fda4(pppppppuVar53 + 0xe,param_8 + 3);
        FUN_10a28ffb0(pppppppuVar53 + 0x12,param_8 + 7);
        *(undefined1 *)(pppppppuVar53 + 0x1e) = *(undefined1 *)(param_8 + 0x13);
        if (pppppppuVar41 != param_8) {
          FUN_10a290680(pppppppuVar53 + 0x1f,param_8[0x14],param_8[0x15],
                        ((long)param_8[0x15] - (long)param_8[0x14] >> 3) * 0x2e8ba2e8ba2e8ba3);
        }
        pppppppuVar53[0x24] = (undefined ******)&UNK_1096b1e6c;
        (*(code *)*pppppppuVar53[0x25])(pppppppuVar53 + 0x25);
        pppppppuVar53[0x25] = (undefined ******)&PTR_DAT_110ae9180;
        ppuVar24 = &PTR_PTR_1133066e8;
        FUN_10ae079a0(0,&PTR_PTR_1133066e8);
        FUN_10ae07cd4(ppuVar24,&PTR_PTR_1133066e8);
      }
      uStack_270 = (undefined *******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
      ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
      uStack_268 = (undefined ********)CONCAT44(uStack_268._4_4_,(float)uStack_268);
      if (((ulong)pppppppuVar53[0x5b] & 1) == 0) goto LAB_10aab6e00;
      *(undefined1 *)(pppppppuVar53 + 0x59) = 6;
    }
LAB_10aab34b0:
    if (((ulong)param_2[0x41][0x25][1] & 1) == 0) {
      ppppppppuVar55 = param_2 + 0x28;
      func_0x0001096e4e0c(ppppppppuVar55,0x11382aac8);
      pppppppuVar53 = *ppppppppuVar55;
      pppppppuVar41 = ppppppppuVar55[1];
      while( true ) {
        ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
        if (pppppppuVar53 == pppppppuVar41) break;
        func_0x0001096c3b0c(pppppppuVar53 + 5);
        pppppppuVar53 = pppppppuVar53 + 10;
      }
      pppppppuVar53 = param_2[0x41];
      if (((ulong)pppppppuVar53[0x5b] & 1) == 0) goto LAB_10aab6e00;
      cVar47 = *(char *)((long)param_8 + 0x14);
      if (*(byte *)(pppppppuVar53 + 0x59) < 5 &&
          (1 << (ulong)(*(byte *)(pppppppuVar53 + 0x59) & 0x1f) & 0x1aU) != 0) {
        if (cVar47 == '\x01') {
          if (*(int *)((long)pppppppuVar53 + 0x164) < *(int *)(pppppppuVar53 + 0x2d)) {
            bVar48 = 0;
            *(int *)((long)pppppppuVar53 + 0x164) = *(int *)((long)pppppppuVar53 + 0x164) + 1;
            goto LAB_10aab3648;
          }
          if (pppppppuVar53[5] == (undefined ******)0x0) {
            FUN_10aac4800(pppppppuVar53);
            goto LAB_10aab35a4;
          }
        }
        else if (pppppppuVar53[5] == (undefined ******)0x0) {
          FUN_10aac4800(pppppppuVar53);
          goto LAB_10aab35bc;
        }
      }
      else if (pppppppuVar53[5] == (undefined ******)0x0) {
        FUN_10aac4800(pppppppuVar53);
        if (cVar47 == '\x01') {
LAB_10aab35a4:
          if (((uint)pppppppuVar53[2][2] >> 1 & 1) == 0) {
            bVar48 = 0;
            goto LAB_10aab3648;
          }
        }
LAB_10aab35bc:
        FUN_109d1a244(pppppppuVar53 + 2);
        FUN_10aac46d0(&uStack_280,pppppppuVar53 + 2);
        FUN_10aac4aa0(pppppppuVar53 + 3,&uStack_280);
        uStack_280 = &PTR_SUB_110b01d60;
        func_0x000107c2acd4(&uStack_280);
      }
      FUN_10aac4bc8(&uStack_280,pppppppuVar53 + 3,cVar47 == '\x01',pppppppuVar53[0x5e]);
      pppppppuVar53[0x24] = (undefined ******)uStack_280;
      (*(code *)*pppppppuVar53[0x25])(pppppppuVar53 + 0x25);
      (**(code **)(CONCAT44(uStack_278._4_4_,(float)uStack_278) + 0x10))
                (pppppppuVar53 + 0x25,&uStack_278);
      (**(code **)CONCAT44(uStack_278._4_4_,(float)uStack_278))(&uStack_278);
      bVar48 = *(byte *)(pppppppuVar53[0x25] + 1);
    }
    else {
      bVar48 = 1;
    }
LAB_10aab3648:
    FUN_10a14b194(&uStack_280,1);
    ppppppppuStack_560 = (undefined ********)uStack_280;
    plVar28 = plStack_558;
    plVar56 = (long *)CONCAT44(uStack_278._4_4_,(float)uStack_278);
    uStack_278._0_4_ = 0.0;
    uStack_278._4_4_ = 0.0;
    uStack_280 = (undefined **)0x0;
    if (plStack_558 != (long *)0x0) {
      plVar2 = plStack_558 + 1;
      do {
        lVar42 = *plVar2;
        cVar47 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar16) {
          *plVar2 = lVar42 + -1;
          cVar47 = ExclusiveMonitorsStatus();
        }
      } while (cVar47 != '\0');
      if (lVar42 == 0) {
        lVar42 = *plStack_558;
        plStack_558 = plVar56;
        (**(code **)(lVar42 + 0x10))(plVar28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
        plVar56 = plStack_558;
      }
    }
    plStack_558 = plVar56;
    plVar56 = (long *)CONCAT44(uStack_278._4_4_,(float)uStack_278);
    if (plVar56 != (long *)0x0) {
      plVar28 = plVar56 + 1;
      do {
        lVar42 = *plVar28;
        cVar47 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar16) {
          *plVar28 = lVar42 + -1;
          cVar47 = ExclusiveMonitorsStatus();
        }
      } while (cVar47 != '\0');
      if (lVar42 == 0) {
        (**(code **)(*plVar56 + 0x10))(plVar56);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar56);
      }
    }
    pppppppuVar53 = param_2[0x41];
    uVar44 = *(uint *)((long)param_8 + 4);
    if ((*(char *)(param_8 + 6) == '\x01') && (param_8[3] != param_8[4])) {
      FUN_10aac7374(&ppppppppuStack_510,param_8 + 3,0x100000001);
      uStack_278._0_4_ = 0.0;
      uStack_278._4_4_ = 0.0;
      uStack_280 = (undefined **)0x0;
      uStack_270._0_4_ = 0.0;
      uStack_270._4_4_ = 0.0;
      func_0x0001096e4e8c(param_2 + 0x28,0x11382aac8,&uStack_280);
      ppppppppuStack_400 = (undefined ********)&uStack_280;
      FUN_10aada088(&ppppppppuStack_400);
      uStack_278._0_4_ = (float)uStack_508;
      uStack_278._4_4_ = uStack_508._4_4_;
      uStack_508._0_4_ = 0.0;
      uStack_508._4_4_ = 0.0;
      uStack_280 = &PTR_DAT_110b05928;
      func_0x0001096c34a4(param_2 + 0x28,&uStack_280);
      uStack_280 = &PTR_SUB_110b01d60;
      func_0x000107c2acd4(&uStack_280);
      ppppppppuStack_510 = (undefined ********)&PTR_SUB_110b01d60;
      func_0x000107c2acd4(&ppppppppuStack_510);
      uStack_270 = (undefined *******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
      ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
      uStack_268 = (undefined ********)CONCAT44(uStack_268._4_4_,(float)uStack_268);
      if (((ulong)param_8[6] & 1) == 0) goto LAB_10aab6e00;
      uVar44 = (int)((ulong)((long)param_8[4] - (long)param_8[3]) >> 2) * -0x33333333;
    }
    uVar59 = *(ulong *)(param_4 + 0x10);
    iVar20 = *(int *)(param_2 + 0x3a);
    ppppppppuVar32 = param_2 + 0x2a;
    iVar45 = *(int *)((long)param_2 + 0x1d4);
    ppppppppuVar55 = ppppppppuVar32;
    FUN_10a0ec6f0();
    iVar19 = (int)ppppppppuVar55;
    uVar40 = uVar59;
    uVar36 = uVar59 >> 0x20;
    if (((ulong)ppppppppuVar55 & 1) != 0) {
      uVar40 = uVar59 >> 0x20;
      uVar36 = uVar59;
    }
    iVar58 = (int)uVar40;
    iVar49 = (int)uVar36;
    if (iVar20 != iVar58 || iVar45 != iVar49) {
      iVar19 = iVar45;
      if (iVar45 <= iVar49) {
        iVar19 = iVar49;
      }
      iVar49 = iVar49 * iVar20 - iVar58 * iVar45;
      iVar45 = -iVar49;
      if (-1 < iVar49) {
        iVar45 = iVar49;
      }
      if (iVar45 < iVar19 * 4) {
        ppppppppuVar55 = param_2 + 0x28;
        func_0x0001096e4e0c(ppppppppuVar55,0x11382aac8);
        pppppppuVar41 = *ppppppppuVar55;
        pppppppuVar50 = ppppppppuVar55[1];
        if (pppppppuVar41 != pppppppuVar50) {
          do {
            pppppuVar54 = pppppppuVar41[2][1];
            for (uVar59 = ((long)pppppppuVar41[2][2] - (long)pppppuVar54) * 0x10000000 >> 0x1c &
                          0xfffffffffffffff0; uVar59 != 0; uVar59 = uVar59 - 0x10) {
              if (pppppuVar54[1] != (undefined ****)0x0) {
                uStack_278._0_4_ = 0.0;
                uStack_278._4_4_ = 0.0;
                uStack_280 = (undefined **)(ulong)(uint)((float)iVar58 / (float)iVar20);
                (*(code *)(*pppppuVar54)[8])(pppppuVar54,&uStack_280);
              }
              pppppuVar54 = pppppuVar54 + 2;
            }
            ppppppppuVar55 = (undefined ********)(pppppppuVar41 + 5);
            func_0x0001096c3b0c();
            pppppppuVar41 = pppppppuVar41 + 10;
          } while (pppppppuVar41 != pppppppuVar50);
        }
      }
      else {
        ppppppppuVar55 = param_2 + 0x28;
        func_0x0001096e4e0c(ppppppppuVar55,0x11382aac8);
        FUN_10aada0c8();
      }
      iVar19 = (int)ppppppppuVar55;
      param_2[0x3a] = (undefined *******)(uVar40 & 0xffffffff | uVar36 << 0x20);
    }
    FUN_10ad055a0();
    if (iVar19 == 0) {
LAB_10aab38dc:
      uStack_5e8 = 0;
      uStack_5d8 = 0x3f800000;
      uStack_5d4 = 0;
      ppppppppuVar55 = ppppppppuVar32;
      FUN_10a0ec6f0();
      uVar36 = *(ulong *)(param_3 + 0x10);
      bVar16 = ((ulong)ppppppppuVar55 & 1) != 0;
      uVar40 = uVar36 >> 0x20;
      if (bVar16) {
        uVar40 = uVar36;
      }
      uStack_5c4 = uVar36 & 0xffffffff;
      if (bVar16) {
        uStack_5c4 = uVar36 >> 0x20;
      }
      uStack_5c4 = uStack_5c4 | uVar40 << 0x20;
      uStack_5dc = *(uint *)((long)param_8 + 4);
      ppppppuVar61 = (*param_2)[4];
      if ((ppppppuVar61 == (undefined ******)0x0) ||
         ((*(code *)(*ppppppuVar61)[1])(), (int)ppppppuVar61 == 0)) {
LAB_10aab3954:
        uVar46 = *(uint *)((long)param_2 + 0x24);
        uStack_270 = (undefined *******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
        ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
        uStack_268 = (undefined ********)CONCAT44(uStack_268._4_4_,(float)uStack_268);
        if (7 < uVar46) goto LAB_10aab6e00;
        iVar20 = *(int *)(&UNK_10e4f2894 + (ulong)uVar46 * 4);
        *(uint *)((long)param_2 + 0x24) = uVar46 + 1 & 7;
      }
      else {
        ppppppuVar61 = (*param_2)[4];
        (*(code *)**ppppppuVar61)();
        iVar20 = (int)ppppppuVar61;
        if (iVar20 == 0) goto LAB_10aab3954;
      }
      ppppppppuVar55 = ppppppppuVar32;
      iStack_5e4 = iVar20;
      FUN_10a0ec6f0();
      uStack_5e0 = SUB84(ppppppppuVar55,0);
      cStack_5c8 = *(char *)((long)param_8 + 0x14);
      if (*(char *)((long)param_8 + 0x16) == '\0') {
        bStack_5cc = 1;
      }
      else if (cStack_5c8 == '\0') {
        ppppppppuVar55 = (undefined ********)0x113835608;
        FUN_10a08f69c();
        bStack_5cc = *(byte *)ppppppppuVar55;
        cStack_5c8 = *(char *)((long)param_8 + 0x14);
      }
      else {
        bStack_5cc = 0;
      }
      bStack_5cc = bStack_5cc & 1;
      uStack_5bc = *(uint *)(param_8 + 1);
      uStack_5c7 = false;
      if (*(char *)((long)param_8 + 0x15) == '\0') {
LAB_10aab3a08:
        bVar16 = (bool)uStack_5c7 == false;
        ppppppppuVar29 = param_2 + 5;
        ppppppppuVar55 = (undefined ********)*ppppppppuVar29;
        if ((ppppppppuVar55 != (undefined ********)0x0) && ((bool)uStack_5c7 == false)) {
          __ZNSt3__117__assoc_sub_state4waitEv();
          ppppppppuVar55 = (undefined ********)*ppppppppuVar29;
          *ppppppppuVar29 = (undefined *******)0x0;
          if (ppppppppuVar55 != (undefined ********)0x0) {
            ppppppppuVar29 = ppppppppuVar55 + 1;
            do {
              pppppppuVar41 = *ppppppppuVar29;
              cVar47 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(ppppppppuVar29,0x10);
              if (bVar16) {
                *ppppppppuVar29 = (undefined *******)((long)pppppppuVar41 + -1);
                cVar47 = ExclusiveMonitorsStatus();
              }
            } while (cVar47 != '\0');
            if (pppppppuVar41 == (undefined *******)0x0) {
              (*(code *)(*ppppppppuVar55)[2])();
            }
          }
          bVar16 = true;
        }
      }
      else {
        if (*(int *)ppppppppuVar32 != 1) {
          ppppppppuVar55 = param_2;
          FUN_10aac7324();
          uStack_5c7 = 1 < (int)ppppppppuVar55;
          goto LAB_10aab3a08;
        }
        bVar16 = false;
        uStack_5c7 = 1;
      }
      ppppppppuVar29 = param_2 + 5;
      iVar20 = (int)ppppppppuVar55;
      FUN_10ad055a0();
      if (iVar20 != 0) {
        ppuVar24 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        if (*ppuVar24 == (undefined *)0x0) {
          ppuVar24 = &PTR___tlv_bootstrap_11340dd98;
          (*(code *)PTR___tlv_bootstrap_11340dd98)();
          plVar56 = (long *)*ppuVar24;
          if ((plVar56 == (long *)0x0) || ((**(code **)(*plVar56 + 0x18))(), plVar56 == (long *)0x0)
             ) goto LAB_10aab3a90;
          plVar56 = plVar56 + 7;
        }
        else {
          plVar56 = (long *)(*ppuVar24 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar56 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&ppppppppuStack_400,&UNK_10f68deb4);
          func_0x000107c2b054(&ppppppppuStack_320,&UNK_10f68da37);
          if ((int)uStack_3f0._4_4_ < 0) {
            pcVar33 = "null";
            if (CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8) != 0) {
              pcVar33 = (char *)ppppppppuStack_400;
            }
          }
          else {
            pcVar33 = "null";
            if (uStack_3f0._7_1_ != '\0') {
              pcVar33 = (char *)&ppppppppuStack_400;
            }
          }
          if ((long)uStack_310 < 0) {
            pcVar39 = "null";
            if (uStack_318 != (undefined ********)0x0) {
              pcVar39 = (char *)ppppppppuStack_320;
            }
          }
          else {
            pcVar39 = "null";
            if (uStack_310._7_1_ != '\0') {
              pcVar39 = (char *)&ppppppppuStack_320;
            }
          }
          ppppppppuStack_510 = (undefined ********)pcVar39;
          uStack_280 = (undefined **)pcVar33;
          FUN_10a224324(&uStack_280,&ppppppppuStack_510);
          if ((int)uStack_3f0._4_4_ < 0) {
            if (CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8) == 0) goto LAB_10aab66e0;
            func_0x000107c3192c(&uStack_280,ppppppppuStack_400);
LAB_10aab685c:
            uVar57 = 1;
          }
          else {
            if (uStack_3f0._7_1_ != '\0') {
              uStack_278._0_4_ = (float)uStack_3f8;
              uStack_278._4_4_ = uStack_3f8._4_4_;
              uStack_280 = (undefined **)ppppppppuStack_400;
              uStack_270._0_4_ = (float)uStack_3f0;
              uStack_270._4_4_ = uStack_3f0._4_4_;
              goto LAB_10aab685c;
            }
LAB_10aab66e0:
            uVar57 = 0;
            uStack_280 = (undefined **)((ulong)uStack_280 & 0xffffffffffffff00);
          }
          uStack_268._0_4_ = (float)CONCAT31(uStack_268._1_3_,uVar57);
          if ((long)uStack_310 < 0) {
            if (uStack_318 == (undefined ********)0x0) goto LAB_10aab6888;
            func_0x000107c3192c(&ppppppppuStack_510,ppppppppuStack_320);
LAB_10aab691c:
            uVar57 = 1;
          }
          else {
            if (uStack_310._7_1_ != '\0') {
              uStack_508._0_4_ = SUB84(uStack_318,0);
              uStack_508._4_4_ = (float)((ulong)uStack_318 >> 0x20);
              ppppppppuStack_510 = ppppppppuStack_320;
              uStack_500._0_4_ = SUB84(uStack_310,0);
              uStack_500._4_4_ = (float)((ulong)uStack_310 >> 0x20);
              goto LAB_10aab691c;
            }
LAB_10aab6888:
            uVar57 = 0;
            ppppppppuStack_510 =
                 (undefined ********)((ulong)ppppppppuStack_510 & 0xffffffffffffff00);
          }
          fStack_4f8 = (float)CONCAT31(fStack_4f8._1_3_,uVar57);
          FUN_10a234a0c(&uStack_280,&ppppppppuStack_510);
          ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
          goto LAB_10aab6e00;
        }
      }
LAB_10aab3a90:
      ppppppppuVar23 = param_2;
      FUN_10aac7538(param_2,*(uint *)((long)param_8 + 4));
      ppuVar24 = (undefined **)ppppppppuVar23;
      if ((int)ppppppppuVar23 != 0) {
        ppppppppuVar55 = (undefined ********)param_6[1];
        lStack_5f8 = param_6[1];
        lStack_600 = *param_6;
        if (ppppppppuVar55 != (undefined ********)0x0) {
          ppppppppuVar31 = ppppppppuVar55 + 1;
          do {
            cVar47 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(ppppppppuVar31,0x10);
            if (bVar9) {
              *ppppppppuVar31 = (undefined *******)((long)*ppppppppuVar31 + 1);
              cVar47 = ExclusiveMonitorsStatus();
            }
          } while (cVar47 != '\0');
        }
        ppuVar24 = (undefined **)param_2;
        FUN_10aac75a8(param_2,param_3,&lStack_600,&uStack_5e8);
        if (ppppppppuVar55 != (undefined ********)0x0) {
          ppppppppuVar31 = ppppppppuVar55 + 1;
          do {
            pppppppuVar41 = *ppppppppuVar31;
            cVar47 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(ppppppppuVar31,0x10);
            if (bVar9) {
              *ppppppppuVar31 = (undefined *******)((long)pppppppuVar41 + -1);
              cVar47 = ExclusiveMonitorsStatus();
            }
          } while (cVar47 != '\0');
          if (pppppppuVar41 == (undefined *******)0x0) {
            (*(code *)(*ppppppppuVar55)[2])(ppppppppuVar55);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppuVar24 = (undefined **)ppppppppuVar55;
          }
        }
      }
      ppppppppuVar55 = (undefined ********)*ppppppppuVar29;
      if (ppppppppuVar55 != (undefined ********)0x0) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        uStack_280 = ppuVar24;
        func_0x0001093f25b0(ppppppppuVar55,&uStack_280);
        ppuVar24 = (undefined **)ppppppppuVar55;
        if ((int)ppppppppuVar55 == 0) {
          pppppppuVar41 = *ppppppppuVar29;
          *ppppppppuVar29 = (undefined *******)0x0;
          ppppppppuStack_510 = (undefined ********)(pppppppuVar41 + 3);
          uStack_508._0_4_ = (float)CONCAT31(uStack_508._1_3_,1);
          __ZNSt3__15mutex4lockEv();
          __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE
                    (pppppppuVar41,&ppppppppuStack_510);
          ppppppuVar61 = pppppppuVar41[2];
          ppppppppuStack_400 = (undefined ********)0x0;
          __ZNSt13exception_ptrD1Ev(&ppppppppuStack_400);
          if (ppppppuVar61 != (undefined ******)0x0) {
            __ZNSt13exception_ptrC1ERKS_(&ppppppppuStack_400,pppppppuVar41 + 2);
            __ZSt17rethrow_exceptionSt13exception_ptr(&ppppppppuStack_400);
            ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
            goto LAB_10aab6e00;
          }
          uStack_278._0_4_ = SUB84(pppppppuVar41[0x13],0);
          uStack_278._4_4_ = (float)((ulong)pppppppuVar41[0x13] >> 0x20);
          uStack_268._0_4_ = SUB84(pppppppuVar41[0x15],0);
          uStack_268._4_4_ = (float)((ulong)pppppppuVar41[0x15] >> 0x20);
          uStack_270._0_4_ = SUB84(pppppppuVar41[0x14],0);
          uStack_270._4_4_ = (float)((ulong)pppppppuVar41[0x14] >> 0x20);
          uStack_280 = &PTR_DAT_110b05928;
          uStack_260._0_4_ = SUB84(pppppppuVar41[0x16],0);
          uStack_260._4_4_ = (undefined4)((ulong)pppppppuVar41[0x16] >> 0x20);
          pppppppuVar41[0x13] = (undefined ******)0x0;
          pppppppuVar41[0x14] = (undefined ******)0x0;
          pppppppuVar41[0x15] = (undefined ******)0x0;
          pppppppuVar41[0x16] = (undefined ******)0x0;
          if ((char)uStack_508 == '\x01') {
            __ZNSt3__15mutex6unlockEv(ppppppppuStack_510);
          }
          pppppppuVar50 = pppppppuVar41 + 1;
          do {
            ppppppuVar61 = *pppppppuVar50;
            cVar47 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar50,0x10);
            if (bVar9) {
              *pppppppuVar50 = (undefined ******)((long)ppppppuVar61 + -1);
              cVar47 = ExclusiveMonitorsStatus();
            }
          } while (cVar47 != '\0');
          if (ppppppuVar61 == (undefined ******)0x0) {
            (*(code *)(*pppppppuVar41)[2])(pppppppuVar41);
          }
          pppppppuVar41 = (undefined *******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
          pppppppuVar50 = (undefined *******)CONCAT44(uStack_268._4_4_,(float)uStack_268);
          if (pppppppuVar41 == pppppppuVar50) {
            iStack_598 = *(int *)(param_2 + 4) + 1;
            *(int *)(param_2 + 4) = iStack_598;
          }
          else {
            *(undefined4 *)(param_2 + 4) = 0;
            if ((ulong)(((long)pppppppuVar50 - (long)pppppppuVar41 >> 2) * -0x3333333333333333) < 2)
            {
              FUN_10a505688(param_2 + 6);
              iStack_598 = *(int *)(param_2 + 4);
            }
            else {
              pppppppuVar52 = param_2[7];
              if (pppppppuVar52 != param_2[8]) {
                iVar20 = *(int *)((long)param_2 + 0x54);
                uVar40 = ((long)param_2[8] - (long)pppppppuVar52 >> 3) * -0x5555555555555555;
                iVar45 = 5;
                do {
                  if (iVar20 == 0) {
                    uVar46 = *(int *)(param_2 + 10) - 1;
                    if (*(int *)(param_2 + 10) < 1) break;
                    *(uint *)(param_2 + 10) = uVar46;
                    uStack_270 = pppppppuVar41;
                    ppppppppuVar55 =
                         (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
                    uStack_268 = (undefined ********)pppppppuVar50;
                    if (uVar40 < uVar46 || uVar40 - uVar46 == 0) goto LAB_10aab6e00;
                    iVar20 = *(int *)(pppppppuVar52 + (ulong)uVar46 * 3);
                  }
                  iVar19 = iVar20;
                  if (iVar45 <= iVar20) {
                    iVar19 = iVar45;
                  }
                  iVar20 = iVar20 - iVar19;
                  *(int *)((long)param_2 + 0x54) = iVar20;
                  iVar49 = iVar45 - iVar19;
                  bVar9 = iVar19 <= iVar45;
                  iVar45 = iVar49;
                } while (iVar49 != 0 && bVar9);
              }
              iStack_598 = 0;
            }
          }
          if (pppppppuStack_5b0 != (undefined *******)0x0) {
            pppppppuStack_5a8 = pppppppuStack_5b0;
            __ZdlPv();
          }
          lVar42 = CONCAT44(uStack_278._4_4_,(float)uStack_278);
          uStack_5a0 = (undefined5)CONCAT44(uStack_260._4_4_,(undefined4)uStack_260);
          uStack_59b = (undefined3)((uint)uStack_260._4_4_ >> 8);
          uStack_268._0_4_ = 0.0;
          uStack_268._4_4_ = 0.0;
          uStack_260._0_4_ = 0;
          uStack_260._4_4_ = 0;
          uStack_270._0_4_ = 0.0;
          uStack_270._4_4_ = 0.0;
          pppppppuStack_5b0 = pppppppuVar41;
          pppppppuStack_5a8 = pppppppuVar50;
          if ((*(long *)(lVar42 + 0x10) - *(long *)(lVar42 + 8) & 0xffffffff0U) != 0) {
            ppppppppuVar55 = param_2;
            FUN_10aac7324();
            iVar20 = (int)((ulong)((long)pppppppuStack_5a8 - (long)pppppppuStack_5b0) >> 2) *
                     -0x33333333;
            if ((int)ppppppppuVar55 < iVar20) {
              func_0x00010ae02ecc(0,iVar20);
              func_0x00010ae02ecc();
              ppuVar24 = &PTR_PTR_113306470;
              FUN_10ae079a0();
              func_0x00010ae02edc();
              func_0x00010ae02edc();
              FUN_10ae07cd4(ppuVar24,&PTR_PTR_113306470);
              lVar51 = *(long *)(lVar42 + 8);
              uVar40 = (*(long *)(lVar42 + 0x10) - lVar51) * 0x10000000 >> 0x1c & 0xfffffffffffffff0
              ;
              if (uVar40 != 0) {
                do {
                  lVar42 = *(long *)(lVar51 + 8);
                  fVar67 = *(float *)(lVar42 + 8);
                  fVar70 = *(float *)(lVar42 + 0xc);
                  fVar68 = fVar67;
                  _hypotf(fVar67,fVar70);
                  _atan2f(fVar70,fVar67);
                  func_0x00010ae02fdc((double)*(float *)(lVar42 + 0x10),0);
                  func_0x00010ae02fdc((double)*(float *)(lVar42 + 0x14));
                  func_0x00010ae02fdc((double)fVar68);
                  func_0x00010ae02fdc((double)fVar70);
                  ppuVar24 = &PTR_PTR_113306788;
                  FUN_10ae079a0();
                  func_0x00010ae02fec((double)*(float *)(lVar42 + 0x10));
                  func_0x00010ae02fec((double)*(float *)(lVar42 + 0x14));
                  func_0x00010ae02fec((double)fVar68);
                  func_0x00010ae02fec((double)fVar70);
                  FUN_10ae07cd4(ppuVar24,&PTR_PTR_113306788);
                  lVar51 = lVar51 + 0x10;
                  uVar40 = uVar40 - 0x10;
                } while (uVar40 != 0);
              }
            }
            uStack_508._0_4_ = (float)uStack_278;
            uStack_508._4_4_ = uStack_278._4_4_;
            uStack_278._0_4_ = 0.0;
            uStack_278._4_4_ = 0.0;
            ppppppppuStack_510 = (undefined ********)&PTR_DAT_110b05928;
            func_0x0001096c34a4(param_2 + 0x28,&ppppppppuStack_510);
            ppppppppuStack_510 = (undefined ********)&PTR_SUB_110b01d60;
            func_0x000107c2acd4(&ppppppppuStack_510);
          }
          uStack_280 = &PTR_SUB_110b01d60;
          ppuVar24 = (undefined **)&uStack_280;
          func_0x000107c2acd4();
        }
      }
      if (*(char *)(param_8 + 0x12) == '\x01') {
        iVar20 = *(int *)(param_2 + 0x3a);
        pcVar33 = "body";
        ppuVar24 = (undefined **)param_7;
        FUN_10aacfcb0(param_7,"body",4);
        if ((undefined ********)ppuVar24 != (undefined ********)0x0) {
          ppppppppuStack_320 = (undefined ********)ppuVar24[3];
          uStack_318 = (undefined ********)ppuVar24[4];
          if (uStack_318 != (undefined ********)0x0) {
            ppppppppuVar55 = uStack_318 + 1;
            do {
              cVar47 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(ppppppppuVar55,0x10);
              if (bVar9) {
                *ppppppppuVar55 = (undefined *******)((long)*ppppppppuVar55 + 1);
                cVar47 = ExclusiveMonitorsStatus();
              }
            } while (cVar47 != '\0');
          }
          if (ppppppppuStack_320 != (undefined ********)0x0) {
            uStack_508._0_4_ = 0.0;
            uStack_508._4_4_ = 0.0;
            ppppppppuStack_510 = (undefined ********)0x0;
            uStack_500 = (undefined *******)0x0;
            pppppppuVar41 = ppppppppuStack_320[3];
            ppppppppuVar55 = ppppppppuStack_320 + 3;
            if (((ulong)pppppppuVar41 & 1) != 0) {
              ppppppppuVar55 = (undefined ********)((long)pppppppuVar41 + 7);
            }
            pppppppuVar41 = (undefined *******)0x0;
            if (*(int *)(ppppppppuStack_320 + 4) != 0) {
              ppppppppuVar29 = ppppppppuVar55 + *(int *)(ppppppppuStack_320 + 4);
              fVar68 = (float)iVar20 / (float)*(int *)(ppppppppuStack_320 + 0x14);
              do {
                pppppppuVar41 = *ppppppppuVar55;
                uVar46 = *(uint *)(pppppppuVar41 + 2);
                if ((uVar46 >> 0x13 & 1) == 0) {
                  if ((uVar46 >> 0x15 & 1) != 0) {
LAB_10aab3f8c:
                    ppppppuVar61 = pppppppuVar41[9];
                    pppppppuVar50 = pppppppuVar41 + 9;
                    if (((ulong)ppppppuVar61 & 1) != 0) {
                      pppppppuVar50 = (undefined *******)((long)ppppppuVar61 + 7);
                    }
                    if (*(int *)(pppppppuVar41 + 10) != 0) {
                      lVar42 = (long)*(int *)(pppppppuVar41 + 10) << 3;
                      do {
                        ppppppuVar61 = *pppppppuVar50;
                        if (((*(byte *)((long)ppppppuVar61 + 0x12) >> 3 & 1) == 0) ||
                           (*(char *)((long)ppppppuVar61 + 0x13c) == '\x01')) {
                          if (((ulong)ppppppuVar61[0x16] & 3) == 0) {
                            ppuVar24 = ppuRam00000001132d06b0;
                            if (ppuRam00000001132d06b0 == (undefined **)0x0) {
                              ppuVar24 = &PTR_DAT_1132d0698;
                              func_0x00010b4befb0();
                            }
                          }
                          else {
                            ppuVar24 = (undefined **)
                                       ((ulong)ppppppuVar61[0x16] & 0xfffffffffffffffc);
                          }
                          if (*(char *)((long)ppuVar24 + 0x17) < '\0') {
                            if (ppuVar24[1] == (undefined *)0x4) {
                              ppuVar24 = (undefined **)*ppuVar24;
                              goto LAB_10aab4004;
                            }
                          }
                          else if (*(char *)((long)ppuVar24 + 0x17) == '\x04') {
LAB_10aab4004:
                            if (*(int *)ppuVar24 == 0x64616568) {
                              pppppuVar54 = (undefined *****)&PTR_PTR_1132cf958;
                              if (ppppppuVar61[0x22] != (undefined *****)0x0) {
                                pppppuVar54 = ppppppuVar61[0x22];
                              }
                              ppppuVar38 = (undefined ****)&PTR_PTR_1132d8bd0;
                              if (pppppuVar54[3] != (undefined ****)0x0) {
                                ppppuVar38 = pppppuVar54[3];
                              }
                              fVar70 = fVar68 * *(float *)(ppppuVar38 + 3);
                              fVar67 = fVar68 * *(float *)((long)ppppuVar38 + 0x1c);
                              ppppuVar38 = (undefined ****)&PTR_PTR_1132d8bd0;
                              if (pppppuVar54[4] != (undefined ****)0x0) {
                                ppppuVar38 = pppppuVar54[4];
                              }
                              fVar65 = fVar68 * *(float *)(ppppuVar38 + 3);
                              fVar66 = fVar68 * *(float *)((long)ppppuVar38 + 0x1c);
                              fVar11 = fVar65;
                              if (fVar70 <= fVar65) {
                                fVar11 = fVar70;
                              }
                              fVar12 = fVar66;
                              if (fVar67 <= fVar66) {
                                fVar12 = fVar67;
                              }
                              func_0x0001096c0650(&ppppppppuStack_400,(double)fVar11,(double)fVar12,
                                                  (double)ABS(fVar70 - fVar65),
                                                  (double)ABS(fVar67 - fVar66));
                              uStack_3f0._0_4_ = *(float *)(pppppppuVar41 + 0x26);
                              uStack_3f0._4_4_ = 1.4013e-45;
                              pppppppuVar41 =
                                   (undefined *******)CONCAT44(uStack_508._4_4_,(float)uStack_508);
                              if (pppppppuVar41 < uStack_500) {
                                *pppppppuVar41 = (undefined ******)&PTR_SUB_110b01d60;
                                pppppppuVar41[1] =
                                     (undefined ******)CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8);
                                *pppppppuVar41 = (undefined ******)ppppppppuStack_400;
                                uStack_3f8._0_4_ = 0.0;
                                uStack_3f8._4_4_ = 0.0;
                                *pppppppuVar41 = (undefined ******)&PTR_DAT_110b051b8;
                                pppppppuVar41[2] = (undefined ******)CONCAT44(1,(float)uStack_3f0);
                                pppppppuVar41 = pppppppuVar41 + 3;
                              }
                              else {
                                lVar42 = (long)pppppppuVar41 - (long)ppppppppuStack_510;
                                uVar40 = (lVar42 >> 3) * -0x5555555555555555 + 1;
                                if (0xaaaaaaaaaaaaaaa < uVar40) {
                                  FUN_10aad47ec();
                                  ppppppppuVar55 =
                                       (undefined ********)
                                       CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
                                  goto LAB_10aab6e00;
                                }
                                lVar51 = (long)uStack_500 - (long)ppppppppuStack_510 >> 3;
                                uVar36 = lVar51 * 0x5555555555555556;
                                if (uVar36 < uVar40 || uVar36 - uVar40 == 0) {
                                  uVar36 = uVar40;
                                }
                                if (0x555555555555554 < (ulong)(lVar51 * -0x5555555555555555)) {
                                  uVar36 = 0xaaaaaaaaaaaaaaa;
                                }
                                uStack_260 = (undefined ********)&ppppppppuStack_510;
                                FUN_10aad4800();
                                plVar56 = (long *)(uVar36 + lVar42);
                                lVar42 = (long)pcVar33 * 0x18;
                                *plVar56 = (long)&PTR_SUB_110b01d60;
                                plVar56[1] = CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8);
                                *plVar56 = (long)ppppppppuStack_400;
                                uStack_3f8._0_4_ = 0.0;
                                uStack_3f8._4_4_ = 0.0;
                                *plVar56 = (long)&PTR_DAT_110b051b8;
                                plVar56[2] = CONCAT44(uStack_3f0._4_4_,(float)uStack_3f0);
                                pppppppuVar41 = (undefined *******)(plVar56 + 3);
                                pcVar33 = (char *)CONCAT44(uStack_508._4_4_,(float)uStack_508);
                                ppppppppuVar31 =
                                     (undefined ********)
                                     ((long)plVar56 + ((long)ppppppppuStack_510 - (long)pcVar33));
                                FUN_10aad4844(ppppppppuStack_510,pcVar33,ppppppppuVar31);
                                uStack_270._0_4_ = SUB84(ppppppppuStack_510,0);
                                uStack_270._4_4_ = (float)((ulong)ppppppppuStack_510 >> 0x20);
                                uStack_280 = (undefined **)ppppppppuStack_510;
                                ppppppppuStack_510 = ppppppppuVar31;
                                uStack_278._0_4_ = (float)uStack_270;
                                uStack_278._4_4_ = uStack_270._4_4_;
                                uStack_508 = pppppppuVar41;
                                pppppppuVar50 = (undefined *******)(uVar36 + lVar42);
                                uStack_268 = (undefined ********)uStack_500;
                                func_0x0001096c3c30(&uStack_280);
                                uStack_500 = pppppppuVar50;
                              }
                              uStack_508._0_4_ = SUB84(pppppppuVar41,0);
                              uStack_508._4_4_ = (float)((ulong)pppppppuVar41 >> 0x20);
                              ppppppppuStack_400 = (undefined ********)&PTR_SUB_110b01d60;
                              func_0x000107c2acd4(&ppppppppuStack_400);
                              break;
                            }
                          }
                        }
                        pppppppuVar50 = pppppppuVar50 + 1;
                        lVar42 = lVar42 + -8;
                      } while (lVar42 != 0);
                    }
                  }
                }
                else if (((uVar46 >> 0x15 & 1) != 0) &&
                        ((*(byte *)((long)pppppppuVar41 + 0x13c) & 1) != 0)) goto LAB_10aab3f8c;
                ppppppppuVar55 = ppppppppuVar55 + 1;
              } while (ppppppppuVar55 != ppppppppuVar29);
              pppppppuVar41 = uStack_500;
              if (ppppppppuStack_510 !=
                  (undefined ********)CONCAT44(uStack_508._4_4_,(float)uStack_508)) {
                uStack_3f8._0_4_ = 0.0;
                uStack_3f8._4_4_ = 0.0;
                ppppppppuStack_400 = (undefined ********)0x0;
                uStack_3f0._0_4_ = 0.0;
                uStack_3f0._4_4_ = 0.0;
                pppppppuVar41 = param_2[0x29] + -4;
                lVar42 = lRam000000011382aa98;
                func_0x0001096966c0();
                if (pppppppuVar41 == (undefined *******)0x0) {
                  puVar22 = (undefined8 *)0x0;
                }
                else {
                  func_0x0001096c33fc(&uStack_280,param_2 + 0x28);
                  func_0x0001096c3b60(&ppppppppuStack_400);
                  uStack_3f8._0_4_ = (float)uStack_278;
                  uStack_3f8._4_4_ = uStack_278._4_4_;
                  ppppppppuStack_400 = (undefined ********)uStack_280;
                  uStack_3f0._0_4_ = (float)uStack_270;
                  uStack_3f0._4_4_ = uStack_270._4_4_;
                  uStack_270._0_4_ = 0.0;
                  uStack_270._4_4_ = 0.0;
                  uStack_278._0_4_ = 0.0;
                  uStack_278._4_4_ = 0.0;
                  uStack_280 = (undefined **)0x0;
                  FUN_10aad48d0(&uStack_280);
                  puVar22 = (undefined8 *)CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8);
                }
                ppppppppuVar31 = ppppppppuStack_400;
                ppppppppuVar55 = ppppppppuStack_510;
                ppppppppuVar29 = (undefined ********)CONCAT44(uStack_508._4_4_,(float)uStack_508);
                lVar51 = (long)ppppppppuVar29 - (long)ppppppppuStack_510;
                uStack_3f0 = (undefined *******)CONCAT44(uStack_3f0._4_4_,(float)uStack_3f0);
                if (0 < lVar51) {
                  puVar25 = (undefined8 *)CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8);
                  if (CONCAT44(uStack_3f0._4_4_,(float)uStack_3f0) - (long)puVar25 < lVar51) {
                    uVar40 = (lVar51 >> 3) * -0x5555555555555555 +
                             ((long)puVar25 - (long)ppppppppuStack_400 >> 3) * -0x5555555555555555;
                    if (0xaaaaaaaaaaaaaaa < uVar40) {
                      FUN_10aad47ec();
                      ppppppppuVar55 =
                           (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
                      goto LAB_10aab6e00;
                    }
                    lVar37 = CONCAT44(uStack_3f0._4_4_,(float)uStack_3f0) - (long)ppppppppuStack_400
                             >> 3;
                    uVar36 = lVar37 * 0x5555555555555556;
                    if (uVar36 < uVar40 || uVar36 - uVar40 == 0) {
                      uVar36 = uVar40;
                    }
                    if (0x555555555555554 < (ulong)(lVar37 * -0x5555555555555555)) {
                      uVar36 = 0xaaaaaaaaaaaaaaa;
                    }
                    uStack_260 = (undefined ********)&ppppppppuStack_400;
                    if (uVar36 == 0) {
                      lVar42 = 0;
                    }
                    else {
                      FUN_10aad4800();
                    }
                    puVar3 = (undefined8 *)((long)puVar22 + (uVar36 - (long)ppppppppuVar31));
                    uStack_268 = (undefined ********)(uVar36 + lVar42 * 0x18);
                    puVar4 = (undefined8 *)((long)puVar3 + lVar51);
                    puVar25 = puVar3;
                    do {
                      *puVar25 = &PTR_SUB_110b01d60;
                      pppppppuVar41 = *ppppppppuVar55;
                      puVar25[1] = ppppppppuVar55[1];
                      *puVar25 = pppppppuVar41;
                      if (puVar25[1] != 0) {
                        piVar43 = (int *)(puVar25[1] + -8);
                        do {
                          cVar47 = '\x01';
                          bVar9 = (bool)ExclusiveMonitorPass(piVar43,0x10);
                          if (bVar9) {
                            *piVar43 = *piVar43 + 1;
                            cVar47 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar47 != '\0');
                      }
                      *puVar25 = &PTR_DAT_110b051b8;
                      puVar25[2] = ppppppppuVar55[2];
                      puVar25 = puVar25 + 3;
                      ppppppppuVar55 = ppppppppuVar55 + 3;
                    } while (puVar25 != puVar4);
                    FUN_10aad4844(puVar22,CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8),puVar4);
                    lVar42 = CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8);
                    uStack_3f8._0_4_ = SUB84(puVar22,0);
                    uStack_3f8._4_4_ = (float)((ulong)puVar22 >> 0x20);
                    ppppppppuVar55 =
                         (undefined ********)
                         ((long)puVar3 + ((long)ppppppppuStack_400 - (long)puVar22));
                    FUN_10aad4844(ppppppppuStack_400,puVar22,ppppppppuVar55);
                    pppppppuVar41 = (undefined *******)uStack_268;
                    uStack_270._0_4_ = SUB84(ppppppppuStack_400,0);
                    uStack_270._4_4_ = (float)((ulong)ppppppppuStack_400 >> 0x20);
                    uStack_268._0_4_ = (float)uStack_3f0;
                    uStack_268._4_4_ = uStack_3f0._4_4_;
                    uStack_280 = (undefined **)ppppppppuStack_400;
                    ppppppppuStack_400 = ppppppppuVar55;
                    uStack_278._0_4_ = (float)uStack_270;
                    uStack_278._4_4_ = uStack_270._4_4_;
                    uStack_3f0 = pppppppuVar41;
                    uStack_3f8 = (undefined8 *)((long)puVar4 + (lVar42 - (long)puVar22));
                    func_0x0001096c3c30(&uStack_280);
                  }
                  else {
                    lVar42 = (long)puVar25 - (long)puVar22;
                    if (lVar42 < lVar51) {
                      ppppppppuVar30 = (undefined ********)(lVar42 + (long)ppppppppuStack_510);
                      uStack_3f8 = puVar25;
                      for (ppppppppuVar31 = ppppppppuVar30; ppppppppuVar31 != ppppppppuVar29;
                          ppppppppuVar31 = ppppppppuVar31 + 3) {
                        *uStack_3f8 = &PTR_SUB_110b01d60;
                        pppppppuVar41 = *ppppppppuVar31;
                        uStack_3f8[1] = ppppppppuVar31[1];
                        *uStack_3f8 = pppppppuVar41;
                        if (uStack_3f8[1] != 0) {
                          piVar43 = (int *)(uStack_3f8[1] + -8);
                          do {
                            cVar47 = '\x01';
                            bVar9 = (bool)ExclusiveMonitorPass(piVar43,0x10);
                            if (bVar9) {
                              *piVar43 = *piVar43 + 1;
                              cVar47 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar47 != '\0');
                        }
                        *uStack_3f8 = &PTR_DAT_110b051b8;
                        uStack_3f8[2] = ppppppppuVar31[2];
                        uStack_3f8 = uStack_3f8 + 3;
                      }
                      uStack_3f0 = (undefined *******)CONCAT44(uStack_3f0._4_4_,(float)uStack_3f0);
                      if (0 < lVar42) {
                        FUN_10aad494c(&ppppppppuStack_400,puVar22,puVar25,(long)puVar22 + lVar51);
                        do {
                          if ((undefined *******)puVar22[1] != ppppppppuVar55[1]) {
                            func_0x000107c2acd4(puVar22);
                            pppppppuVar41 = *ppppppppuVar55;
                            puVar22[1] = ppppppppuVar55[1];
                            *puVar22 = pppppppuVar41;
                            if (puVar22[1] != 0) {
                              piVar43 = (int *)(puVar22[1] + -8);
                              do {
                                cVar47 = '\x01';
                                bVar9 = (bool)ExclusiveMonitorPass(piVar43,0x10);
                                if (bVar9) {
                                  *piVar43 = *piVar43 + 1;
                                  cVar47 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar47 != '\0');
                            }
                          }
                          puVar22[2] = ppppppppuVar55[2];
                          ppppppppuVar55 = ppppppppuVar55 + 3;
                          puVar22 = puVar22 + 3;
                        } while (ppppppppuVar55 != ppppppppuVar30);
                      }
                    }
                    else {
                      FUN_10aad494c(&ppppppppuStack_400,puVar22,puVar25,(long)puVar22 + lVar51);
                      do {
                        if ((undefined *******)puVar22[1] != ppppppppuVar55[1]) {
                          func_0x000107c2acd4(puVar22);
                          pppppppuVar41 = *ppppppppuVar55;
                          puVar22[1] = ppppppppuVar55[1];
                          *puVar22 = pppppppuVar41;
                          if (puVar22[1] != 0) {
                            piVar43 = (int *)(puVar22[1] + -8);
                            do {
                              cVar47 = '\x01';
                              bVar9 = (bool)ExclusiveMonitorPass(piVar43,0x10);
                              if (bVar9) {
                                *piVar43 = *piVar43 + 1;
                                cVar47 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar47 != '\0');
                          }
                        }
                        puVar22[2] = ppppppppuVar55[2];
                        ppppppppuVar55 = ppppppppuVar55 + 3;
                        puVar22 = puVar22 + 3;
                      } while (ppppppppuVar55 != ppppppppuVar29);
                    }
                  }
                }
                func_0x0001096c36a0(param_2 + 0x28,0x11382aa98,&ppppppppuStack_400);
                FUN_10aad48d0(&ppppppppuStack_400);
                pppppppuVar41 = uStack_500;
              }
            }
            ppuVar24 = (undefined **)&ppppppppuStack_510;
            uStack_500 = pppppppuVar41;
            FUN_10aad48d0();
          }
          ppppppppuVar55 = uStack_318;
          if (uStack_318 != (undefined ********)0x0) {
            ppppppppuVar29 = uStack_318 + 1;
            do {
              pppppppuVar41 = *ppppppppuVar29;
              cVar47 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(ppppppppuVar29,0x10);
              if (bVar9) {
                *ppppppppuVar29 = (undefined *******)((long)pppppppuVar41 + -1);
                cVar47 = ExclusiveMonitorsStatus();
              }
            } while (cVar47 != '\0');
            if (pppppppuVar41 == (undefined *******)0x0) {
              (*(code *)(*uStack_318)[2])(uStack_318);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppuVar24 = (undefined **)ppppppppuVar55;
            }
          }
        }
      }
      FUN_10ad055a0();
      if ((int)ppuVar24 != 0) {
        ppuVar24 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        if ((undefined *******)*ppuVar24 == (undefined *******)0x0) {
          ppuVar24 = &PTR___tlv_bootstrap_11340dd98;
          (*(code *)PTR___tlv_bootstrap_11340dd98)();
          ppuVar24 = (undefined **)*ppuVar24;
          if ((undefined ********)ppuVar24 != (undefined ********)0x0) {
            (*(code *)*(undefined *******)((long)*ppuVar24 + 0x18))();
            if ((undefined ********)ppuVar24 != (undefined ********)0x0) {
              ppppppppuVar55 = (undefined ********)(ppuVar24 + 7);
              goto LAB_10aab45ac;
            }
          }
        }
        else {
          ppppppppuVar55 = (undefined ********)((long)*ppuVar24 + 8);
LAB_10aab45ac:
          if (((uint)(*ppppppppuVar55)[2] >> 1 & 1) != 0) {
            func_0x000107c2b054(&ppppppppuStack_400,&UNK_10f68ded0);
            func_0x000107c2b054(&ppppppppuStack_320,&UNK_10f68da37);
            if ((long)uStack_3f0 < 0) {
              pcVar33 = "null";
              if (uStack_3f8 != (undefined8 *)0x0) {
                pcVar33 = (char *)ppppppppuStack_400;
              }
            }
            else {
              pcVar33 = "null";
              if (uStack_3f0._7_1_ != '\0') {
                pcVar33 = (char *)&ppppppppuStack_400;
              }
            }
            if ((long)uStack_310 < 0) {
              pcVar39 = "null";
              if (uStack_318 != (undefined ********)0x0) {
                pcVar39 = (char *)ppppppppuStack_320;
              }
            }
            else {
              pcVar39 = "null";
              if (uStack_310._7_1_ != '\0') {
                pcVar39 = (char *)&ppppppppuStack_320;
              }
            }
            ppppppppuStack_510 = (undefined ********)pcVar39;
            uStack_280 = (undefined **)pcVar33;
            FUN_10a224324(&uStack_280,&ppppppppuStack_510);
            if ((long)uStack_3f0 < 0) {
              if (uStack_3f8 == (undefined8 *)0x0) goto LAB_10aab6770;
              func_0x000107c3192c(&uStack_280,ppppppppuStack_400);
              uStack_278 = (undefined8 *)CONCAT44(uStack_278._4_4_,(float)uStack_278);
              uStack_270 = (undefined *******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
LAB_10aab68a4:
              uVar57 = 1;
              pppppppuVar53 = (undefined *******)uStack_268;
            }
            else {
              if (uStack_3f0._7_1_ != '\0') {
                uStack_280 = (undefined **)ppppppppuStack_400;
                uStack_278 = uStack_3f8;
                uStack_270 = uStack_3f0;
                goto LAB_10aab68a4;
              }
LAB_10aab6770:
              uVar57 = 0;
              uStack_280 = (undefined **)((ulong)uStack_280 & 0xffffffffffffff00);
              pppppppuVar53 = (undefined *******)uStack_268;
            }
            uStack_268._4_4_ = (float)((ulong)pppppppuVar53 >> 0x20);
            uStack_268._1_3_ = (undefined3)((ulong)pppppppuVar53 >> 8);
            uStack_268._0_4_ = (float)CONCAT31(uStack_268._1_3_,uVar57);
            if ((long)uStack_310 < 0) {
              if (uStack_318 == (undefined ********)0x0) goto LAB_10aab68d0;
              func_0x000107c3192c(&ppppppppuStack_510,ppppppppuStack_320);
LAB_10aab6944:
              uVar57 = 1;
            }
            else {
              if (uStack_310._7_1_ != '\0') {
                uStack_508._0_4_ = SUB84(uStack_318,0);
                uStack_508._4_4_ = (float)((ulong)uStack_318 >> 0x20);
                ppppppppuStack_510 = ppppppppuStack_320;
                uStack_500 = uStack_310;
                goto LAB_10aab6944;
              }
LAB_10aab68d0:
              uVar57 = 0;
              ppppppppuStack_510 =
                   (undefined ********)((ulong)ppppppppuStack_510 & 0xffffffffffffff00);
            }
            fStack_4f8 = (float)CONCAT31(fStack_4f8._1_3_,uVar57);
            FUN_10a234a0c(&uStack_280,&ppppppppuStack_510);
            ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
            goto LAB_10aab6e00;
          }
        }
      }
      uStack_4f0 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
      if ((((bVar48 & 1) != 0) &&
          (uStack_4f0 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0),
          *(char *)(pppppppuVar53[0x25] + 1) == '\x01')) &&
         (uStack_4f0 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0),
         *(int *)(param_2[0x41] + 0x2c) < 10)) {
        pppppppuVar41 = *(undefined ********)(param_4 + 0x28);
        uVar34 = *(undefined8 *)(param_4 + 0x10);
        uVar72 = *(undefined4 *)(param_4 + 0x18);
        uVar71 = *(undefined4 *)(param_4 + 0x20);
        uVar21 = *(uint *)(param_4 + 0x24);
        pppppppuStack_380 = (undefined *******)&PTR_SUB_110b01d60;
        ppppppuStack_378 = (undefined ******)0x0;
        uVar46 = 2;
        if ((uVar21 & 0xfffffffe) != 4) {
          uVar46 = (uint)(uVar21 == 0);
        }
        uVar6 = 3;
        if (uVar21 != 2) {
          uVar6 = uVar46;
        }
        func_0x00010aac839c();
        puVar22 = (undefined8 *)0x28;
        if ((int)((ulong)ppuVar24 >> 0x20) * (int)ppuVar24 == 1) {
          _malloc();
          if (puVar22 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar22 + 3) = 1;
            *puVar22 = 0;
            puVar22[1] = 0;
            *(undefined4 *)(puVar22 + 2) = 0;
            puVar22 = puVar22 + 4;
            *puVar22 = &PTR_DAT_110b00de0;
          }
          uStack_278._0_4_ = SUB84(puVar22,0);
          uStack_278._4_4_ = (float)((ulong)puVar22 >> 0x20);
          uStack_280 = &PTR_DAT_110b03088;
          ppppppppuStack_510 = (undefined ********)CONCAT44(ppppppppuStack_510._4_4_,uVar6);
          func_0x0001096a75d0(&uStack_280,0x11382aa38,&ppppppppuStack_510);
          func_0x0001093e08bc(&ppppppppuStack_510,&uStack_280);
          ppppppuVar61 = (undefined ******)CONCAT44(uStack_508._4_4_,(float)uStack_508);
          uStack_508._0_4_ = SUB84(ppppppuStack_378,0);
          uStack_508._4_4_ = (float)((ulong)ppppppuStack_378 >> 0x20);
          pppppppuStack_380 = (undefined *******)ppppppppuStack_510;
          ppppppppuStack_510 = (undefined ********)&PTR_SUB_110b01d60;
          ppppppuStack_378 = ppppppuVar61;
          func_0x000107c2acd4(&ppppppppuStack_510);
          uStack_280 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&uStack_280);
        }
        else {
          _malloc();
          if (puVar22 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar22 + 3) = 1;
            *puVar22 = 0;
            puVar22[1] = 0;
            *(undefined4 *)(puVar22 + 2) = 0;
            puVar22 = puVar22 + 4;
            *puVar22 = &PTR_DAT_110b00de0;
          }
          uStack_278._0_4_ = SUB84(puVar22,0);
          uStack_278._4_4_ = (float)((ulong)puVar22 >> 0x20);
          uStack_280 = &PTR_DAT_110b02e88;
          func_0x00010aac839c();
          puVar25 = &uStack_280;
          ppppppppuStack_510._0_4_ = (int)puVar22;
          func_0x0001096a75d0(puVar25,0x11382aa28,&ppppppppuStack_510);
          uVar73 = (undefined4)((ulong)puVar25 >> 0x20);
          func_0x00010aac839c();
          ppppppppuStack_510._0_4_ = uVar73;
          func_0x0001096a75d0(&uStack_280,0x11382aa30,&ppppppppuStack_510);
          ppppppppuStack_510 = (undefined ********)CONCAT44(ppppppppuStack_510._4_4_,uVar6);
          func_0x0001096a75d0(&uStack_280,0x11382aa20,&ppppppppuStack_510);
          func_0x0001093e08bc(&ppppppppuStack_510,&uStack_280);
          ppppppuVar61 = (undefined ******)CONCAT44(uStack_508._4_4_,(float)uStack_508);
          uStack_508._0_4_ = SUB84(ppppppuStack_378,0);
          uStack_508._4_4_ = (float)((ulong)ppppppuStack_378 >> 0x20);
          pppppppuStack_380 = (undefined *******)ppppppppuStack_510;
          ppppppppuStack_510 = (undefined ********)&PTR_SUB_110b01d60;
          ppppppuStack_378 = ppppppuVar61;
          func_0x000107c2acd4(&ppppppppuStack_510);
          uStack_280 = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(&uStack_280);
        }
        uVar34 = NEON_rev64(uVar34,4);
        uStack_278._0_4_ = (float)uVar34;
        uStack_278._4_4_ = (float)((ulong)uVar34 >> 0x20);
        uStack_280 = (undefined **)pppppppuVar41;
        uStack_270._0_4_ = (float)uVar72;
        uStack_270._4_4_ = (float)uVar71;
        (*(code *)pppppppuStack_380[4])(&pppppppuStack_360,&pppppppuStack_380,&uStack_280);
        uVar40 = *(ulong *)(param_4 + 0x10);
        ppppppppuVar55 = ppppppppuVar32;
        FUN_10a0ec6f0();
        uVar21 = (uint)ppppppppuVar55;
        uVar46 = uVar21 >> 2 & 3;
        if (((ulong)ppppppppuVar55 & 1) != 0) {
          uVar46 = uVar21 >> 1 & 2 | ((uint)((ulong)ppppppppuVar55 >> 2) & 0x3fffffff) >> 1 & 1;
        }
        uVar36 = uVar40;
        uVar59 = uVar40 >> 0x20;
        if ((-uVar21 & 1) != 0) {
          uVar36 = uVar40 >> 0x20;
          uVar59 = uVar40;
        }
        uStack_508._0_4_ = 1.0 / (float)(int)uVar36;
        uStack_500._4_4_ = 1.0 / (float)(int)uVar59;
        ppppppppuStack_510 = (undefined ********)0xbf000000bf000000;
        uStack_508._4_4_ = 0.0;
        uStack_500._0_4_ = 0.0;
        fVar70 = 1.5707964;
        fVar68 = (float)(-uVar21 & 3) * 1.5707964;
        ___sincosf_stret();
        ppppppppuStack_400 = (undefined ********)0x0;
        uStack_3f8._0_4_ = fVar70;
        uStack_3f8._4_4_ = fVar68;
        uStack_3f0._0_4_ = -fVar68;
        uStack_3f0._4_4_ = fVar70;
        uStack_318 = (undefined ********)0x3f800000;
        uStack_310 = (undefined *******)0x3f80000000000000;
        if (1 < uVar46) {
          uStack_318 = (undefined ********)0xbf800000;
          uStack_310 = (undefined *******)0x3f80000080000000;
        }
        if ((uVar46 & 1) != 0) {
          uStack_318 = (undefined ********)CONCAT44(0x80000000,(undefined4)uStack_318);
          uStack_310 = (undefined *******)CONCAT44(0xbf800000,(undefined4)uStack_310);
        }
        lVar42 = 0;
        ppppppppuStack_320 = (undefined ********)0x3f0000003f000000;
        pppppppuStack_440 = (undefined *******)0x0;
        afStack_438[1] = 0.0;
        afStack_438[2] = 0.0;
        afStack_438[0] = (float)(int)uVar40;
        afStack_438[3] = (float)(int)(uVar40 >> 0x20);
        uStack_348 = 0;
        ppppppppuStack_350 = (undefined ********)0x0;
        uStack_340 = 0;
        do {
          lVar51 = 0;
          bVar9 = true;
          do {
            bVar17 = bVar9;
            lVar37 = 0;
            pfVar5 = (float *)((long)&ppppppppuStack_350 + lVar51 * 4 + lVar42 * 8);
            fVar68 = *pfVar5;
            bVar9 = true;
            do {
              bVar18 = bVar9;
              fVar68 = fVar68 + afStack_438[lVar37 * 2 + lVar51] *
                                *(float *)((long)&ppppppppuStack_320 + lVar37 * 4 + lVar42 * 8);
              lVar37 = 1;
              bVar9 = false;
            } while (bVar18);
            *pfVar5 = fVar68;
            lVar51 = 1;
            bVar9 = false;
          } while (bVar17);
          lVar42 = lVar42 + 1;
        } while (lVar42 != 3);
        lVar42 = 0;
        uStack_280 = (undefined **)ppppppppuStack_350;
        uStack_270._0_4_ = 0.0;
        uStack_270._4_4_ = 0.0;
        uStack_278._0_4_ = 0.0;
        uStack_278._4_4_ = 0.0;
        do {
          lVar51 = 0;
          bVar9 = true;
          do {
            bVar17 = bVar9;
            lVar37 = 0;
            pfVar5 = (float *)((long)&uStack_280 + lVar51 * 4 + lVar42 * 8);
            fVar68 = *pfVar5;
            bVar9 = true;
            do {
              bVar18 = bVar9;
              fVar68 = fVar68 + *(float *)((long)&uStack_348 + lVar51 * 4 + lVar37 * 8) *
                                *(float *)((long)&ppppppppuStack_400 + lVar37 * 4 + lVar42 * 8);
              lVar37 = 1;
              bVar9 = false;
            } while (bVar18);
            *pfVar5 = fVar68;
            lVar51 = 1;
            bVar9 = false;
          } while (bVar17);
          lVar42 = lVar42 + 1;
        } while (lVar42 != 3);
        lVar42 = 0;
        ppppppppuStack_2b0 = (undefined ********)uStack_280;
        pppppppuStack_2a0 = (undefined *******)0x0;
        ppppppppuStack_2a8 = (undefined ********)0x0;
        do {
          lVar51 = 0;
          bVar9 = true;
          do {
            bVar17 = bVar9;
            lVar37 = 0;
            pfVar5 = (float *)((long)&ppppppppuStack_2b0 + lVar51 * 4 + lVar42 * 8);
            fVar68 = *pfVar5;
            bVar9 = true;
            do {
              bVar18 = bVar9;
              fVar70 = *(float *)((long)&ppppppppuStack_510 + lVar37 * 4 + lVar42 * 8);
              pppppppuVar41 = (undefined *******)(ulong)(uint)fVar70;
              fVar68 = fVar68 + *(float *)((long)&uStack_278 + lVar51 * 4 + lVar37 * 8) * fVar70;
              lVar37 = 1;
              bVar9 = false;
            } while (bVar18);
            *pfVar5 = fVar68;
            lVar51 = 1;
            bVar9 = false;
          } while (bVar17);
          lVar42 = lVar42 + 1;
        } while (lVar42 != 3);
        func_0x0001096a54f0(&ppppppppuStack_350,&pppppppuStack_360,&ppppppppuStack_2b0,uVar59,uVar36
                           );
        FUN_10a4cb5a0(&uStack_280,ppppppppuVar32);
        FUN_10a2288e0(&uStack_280,uVar36 & 0xffffffff | uVar59 << 0x20);
        ppppuStack_408 = (undefined ****)CONCAT44((undefined4)uStack_260,uStack_268._4_4_);
        ppuStack_410 = (undefined **)CONCAT44((float)uStack_268,uStack_270._4_4_);
        func_0x0001096a5b90(&ppppppppuStack_350,0x11382aa18,&ppuStack_410);
        func_0x0001096a57ec(appuStack_610,&ppppppppuStack_350);
        if (plStack_208 != (long *)0x0) {
          plVar56 = plStack_208 + 1;
          do {
            lVar42 = *plVar56;
            cVar47 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar56,0x10);
            if (bVar9) {
              *plVar56 = lVar42 + -1;
              cVar47 = ExclusiveMonitorsStatus();
            }
          } while (cVar47 != '\0');
          if (lVar42 == 0) {
            (**(code **)(*plStack_208 + 0x10))(plStack_208);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_208);
          }
        }
        ppppppppuStack_350 = (undefined ********)&PTR_SUB_110b01d60;
        func_0x000107c2acd4(&ppppppppuStack_350);
        pppppppuStack_360 = (undefined *******)&PTR_SUB_110b01d60;
        func_0x000107c2acd4(&pppppppuStack_360);
        pppppppuStack_380 = (undefined *******)&PTR_SUB_110b01d60;
        func_0x000107c2acd4(&pppppppuStack_380);
        func_0x0001096ae684(param_2 + 0x28,0,appuStack_610);
        if ((param_5 != 0) && (*(long *)(param_5 + 0x10) != 0)) {
          uVar40 = (ulong)*(uint *)(param_5 + 4);
          if ((int)*(uint *)(param_5 + 4) < 3) {
            lVar42 = (long)*(int *)(param_5 + 0xc) * (long)*(int *)(param_5 + 8);
          }
          else {
            lVar42 = 1;
            piVar43 = *(int **)(param_5 + 0x40);
            do {
              lVar42 = lVar42 * *piVar43;
              uVar40 = uVar40 - 1;
              piVar43 = piVar43 + 1;
            } while (uVar40 != 0);
          }
          if (lVar42 != 0) {
            func_0x00010919c904(auStack_670,param_5);
            func_0x0001096ae4f0(param_2 + 0x28,1,auStack_670);
            func_0x00010567aa40(auStack_670);
            uStack_280 = (undefined **)(double)*(float *)(param_5 + 0x1f8);
            func_0x0001096c1eb4(param_2 + 0x28,0x11382aa80,&uStack_280);
          }
        }
        if (cVar7 == '\0') {
          uVar46 = 500000000;
        }
        else {
          uVar46 = 1000000;
          if (1 < iRam00000001132ffd98) {
            uVar46 = 8000000;
          }
        }
        uStack_280 = (undefined **)(ulong)uVar46;
        func_0x0001096e79dc(param_2 + 0x28,0x11382ab10,&uStack_280);
        uStack_280._0_1_ = cVar7 == '\0';
        func_0x000109693d2c(param_2 + 0x28,0x11382ab18,&uStack_280);
        uStack_280 = (undefined **)CONCAT71(uStack_280._1_7_,*(undefined1 *)(param_8 + 0x13));
        func_0x000109693d2c(param_2 + 0x28,0x11382aa88,&uStack_280);
        uStack_280 = (undefined **)CONCAT44(uStack_280._4_4_,uVar44);
        ppppppppuVar55 = param_2 + 0x28;
        func_0x0001096ae7b0(ppppppppuVar55,0x11382aaa0,&uStack_280);
        iVar20 = (int)ppppppppuVar55;
        FUN_10ad055a0();
        if (iVar20 != 0) {
          ppuVar24 = &PTR___tlv_bootstrap_11340dfd8;
          (*(code *)PTR___tlv_bootstrap_11340dfd8)();
          if (*ppuVar24 == (undefined *)0x0) {
            ppuVar24 = &PTR___tlv_bootstrap_11340dd98;
            (*(code *)PTR___tlv_bootstrap_11340dd98)();
            plVar56 = (long *)*ppuVar24;
            if (plVar56 != (long *)0x0) {
              (**(code **)(*plVar56 + 0x18))();
              if (plVar56 != (long *)0x0) {
                plVar56 = plVar56 + 7;
                goto LAB_10aab4c90;
              }
            }
          }
          else {
            plVar56 = (long *)(*ppuVar24 + 8);
LAB_10aab4c90:
            if (((uint)*(undefined8 *)(*plVar56 + 0x10) >> 1 & 1) != 0) {
              func_0x000107c2b054(&ppppppppuStack_400,&UNK_10f68def5);
              func_0x000107c2b054(&ppppppppuStack_320,&UNK_10f68da37);
              if ((int)uStack_3f0._4_4_ < 0) {
                pcVar33 = "null";
                if (CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8) != 0) {
                  pcVar33 = (char *)ppppppppuStack_400;
                }
              }
              else {
                pcVar33 = "null";
                if (uStack_3f0._7_1_ != '\0') {
                  pcVar33 = (char *)&ppppppppuStack_400;
                }
              }
              if ((long)uStack_310 < 0) {
                pcVar39 = "null";
                if (uStack_318 != (undefined ********)0x0) {
                  pcVar39 = (char *)ppppppppuStack_320;
                }
              }
              else {
                pcVar39 = "null";
                if (uStack_310._7_1_ != '\0') {
                  pcVar39 = (char *)&ppppppppuStack_320;
                }
              }
              ppppppppuStack_510 = (undefined ********)pcVar39;
              uStack_280 = (undefined **)pcVar33;
              FUN_10a224324(&uStack_280,&ppppppppuStack_510);
              if ((int)uStack_3f0._4_4_ < 0) {
                if (CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8) == 0) goto LAB_10aab69e0;
                func_0x000107c3192c(&uStack_280,ppppppppuStack_400);
LAB_10aab6a8c:
                uVar57 = 1;
                pppppppuVar53 = (undefined *******)uStack_268;
              }
              else {
                if (uStack_3f0._7_1_ != '\0') {
                  uStack_278._0_4_ = (float)uStack_3f8;
                  uStack_278._4_4_ = uStack_3f8._4_4_;
                  uStack_280 = (undefined **)ppppppppuStack_400;
                  uStack_270._0_4_ = (float)uStack_3f0;
                  uStack_270._4_4_ = uStack_3f0._4_4_;
                  goto LAB_10aab6a8c;
                }
LAB_10aab69e0:
                uVar57 = 0;
                uStack_280 = (undefined **)((ulong)uStack_280 & 0xffffffffffffff00);
                pppppppuVar53 = (undefined *******)uStack_268;
              }
              uStack_268._4_4_ = (float)((ulong)pppppppuVar53 >> 0x20);
              uStack_268._1_3_ = (undefined3)((ulong)pppppppuVar53 >> 8);
              uStack_268._0_4_ = (float)CONCAT31(uStack_268._1_3_,uVar57);
              if ((long)uStack_310 < 0) {
                if (uStack_318 == (undefined ********)0x0) goto LAB_10aab6ab8;
                func_0x000107c3192c(&ppppppppuStack_510,ppppppppuStack_320);
LAB_10aab6b1c:
                uVar57 = 1;
              }
              else {
                if (uStack_310._7_1_ != '\0') {
                  uStack_508._0_4_ = SUB84(uStack_318,0);
                  uStack_508._4_4_ = (float)((ulong)uStack_318 >> 0x20);
                  ppppppppuStack_510 = ppppppppuStack_320;
                  uStack_500._0_4_ = SUB84(uStack_310,0);
                  uStack_500._4_4_ = (float)((ulong)uStack_310 >> 0x20);
                  goto LAB_10aab6b1c;
                }
LAB_10aab6ab8:
                uVar57 = 0;
                ppppppppuStack_510 =
                     (undefined ********)((ulong)ppppppppuStack_510 & 0xffffffffffffff00);
              }
              fStack_4f8 = (float)CONCAT31(fStack_4f8._1_3_,uVar57);
              FUN_10a234a0c(&uStack_280,&ppppppppuStack_510);
              ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0)
              ;
              goto LAB_10aab6e00;
            }
          }
        }
        puVar13 = PTR___tlv_bootstrap_11340d750;
        ppuVar24 = &PTR___tlv_bootstrap_11340d750;
        ppuVar26 = ppuVar24;
        (*(code *)PTR___tlv_bootstrap_11340d750)();
        ppuVar27 = &PTR___tlv_bootstrap_11340d738;
        if (((ulong)*ppuVar26 & 1) == 0) {
          ppuVar26 = ppuVar27;
          (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
          __tlv_atexit(0x10a132a8c,ppuVar26,0x100000000);
          (*(code *)puVar13)();
          *(undefined1 *)ppuVar24 = 1;
        }
        (*(code *)PTR___tlv_bootstrap_11340d738)();
        pppppppuVar50 = (undefined *******)uStack_280;
        puVar22 = (undefined8 *)ppuVar27[2];
        if (puVar22 == (undefined8 *)0x0) {
          uStack_280 = (undefined **)((ulong)uStack_280._1_7_ << 8);
          uStack_270._0_4_ = 0.0;
          uStack_270._4_4_ = 0.0;
          uStack_268._0_4_ = (float)((uint)(float)uStack_268 & 0xffffff00);
        }
        else {
          cVar7 = *(char *)(puVar22[1] + 0x17);
          uStack_280 = (undefined **)CONCAT71(uStack_280._1_7_,cVar7);
          pppppppuVar52 = (undefined *******)uStack_280;
          uStack_280._4_4_ = SUB84(pppppppuVar50,4);
          uStack_280._0_4_ = CONCAT22(7,(short)pppppppuVar52);
          ppuVar24 = &PTR___tlv_bootstrap_11340dd08;
          (*(code *)PTR___tlv_bootstrap_11340dd08)();
          iVar20 = *(int *)ppuVar24;
          pppppppuVar50 = (undefined *******)uStack_268;
          if (*(int *)ppuVar24 == 0) {
            ppppppppuStack_510 = (undefined ********)0x0;
            _pthread_threadid_np(0,&ppppppppuStack_510);
            *(int *)ppuVar24 = (int)ppppppppuStack_510;
            iVar20 = (int)ppppppppuStack_510;
            pppppppuVar50 = (undefined *******)uStack_268;
          }
          lVar42 = lRam00000001137ec198;
          uStack_268._4_4_ = (float)((ulong)pppppppuVar50 >> 0x20);
          uStack_268._0_4_ = SUB84(pppppppuVar50,0);
          uStack_280 = (undefined **)CONCAT44(iVar20,(undefined4)uStack_280);
          uStack_270._0_4_ = 0.0;
          uStack_270._4_4_ = 0.0;
          uStack_268._0_4_ = (float)((uint)(float)uStack_268 & 0xffffff00);
          if (cVar7 != '\0') {
            lVar51 = puVar22[1];
            bVar48 = *(byte *)(lVar51 + 0x42) | *(byte *)(lVar51 + 0x43);
            if (((bVar48 & 1) != 0) || (*(char *)(lVar51 + 0x40) == '\x01')) {
              uVar40 = cntfrq_el0;
              InstructionSynchronizationBarrier();
              uVar36 = cntvct_el0;
              if (uVar40 != 1000000000) {
                uVar59 = 0;
                if (uVar40 != 0) {
                  uVar59 = uVar36 / uVar40;
                }
                uVar10 = 0;
                if (uVar40 != 0) {
                  uVar10 = ((uVar36 - uVar59 * uVar40) * 1000000000) / uVar40;
                }
                uVar36 = uVar10 + uVar59 * 1000000000;
              }
              uStack_278._0_4_ = (float)uVar36;
              uStack_278._4_4_ = (float)(uVar36 >> 0x20);
              if ((bVar48 & 1) != 0) {
                puVar25 = puVar22;
                FUN_10a1333cc();
                if (puVar25 != (undefined8 *)0x0) {
                  uVar57 = 3;
                  if (lRam00000001137ec198 != lVar42) {
                    uVar57 = 5;
                  }
                  lVar51 = 0;
                  if (lRam00000001137ec198 != lVar42) {
                    lVar51 = lVar42;
                  }
                  *puVar25 = &UNK_10f68e388;
                  puVar25[1] = lVar51;
                  puVar25[2] = uVar36;
                  *(int *)(puVar25 + 3) = iVar20;
                  *(undefined2 *)((long)puVar25 + 0x1c) = 7;
                  *(undefined1 *)((long)puVar25 + 0x1e) = uVar57;
                  ppppppppuVar55 =
                       (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
                  if ((*(byte *)(puVar22 + 0x38) & 1) == 0) goto LAB_10aab6e00;
                  puVar22[0x18] = puVar22[0x18] + 1;
                }
              }
            }
            if (*(char *)(puVar22[1] + 0x41) == '\x01') {
              plVar56 = (long *)puVar22[0xb];
              if (plVar56 != (long *)0x0) {
                plVar28 = plVar56;
                (**(code **)(*plVar56 + 0x10))(plVar56,&UNK_10f68e388);
                uStack_270._0_4_ = SUB84(plVar28,0);
                uStack_270._4_4_ = (float)((ulong)plVar28 >> 0x20);
              }
              uStack_268._0_4_ = (float)CONCAT31(uStack_268._1_3_,plVar56 != (long *)0x0);
            }
          }
        }
        ppppppuVar61 = pppppppuVar53[0x24];
        pppppppuVar50 = param_2[0x29];
        ppppppppuStack_510 = (undefined ********)param_2[0x28];
        uStack_508._0_4_ = SUB84(pppppppuVar50,0);
        uStack_508._4_4_ = (float)((ulong)pppppppuVar50 >> 0x20);
        if (pppppppuVar50 != (undefined *******)0x0) {
          pppppppuVar50 = pppppppuVar50 + -1;
          do {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar50,0x10);
            if (bVar9) {
              *(int *)pppppppuVar50 = *(int *)pppppppuVar50 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        (*(code *)ppppppuVar61)(&ppppppppuStack_510,pppppppuVar53 + 0x24);
        ppppppppuStack_510 = (undefined ********)&PTR_SUB_110b01d60;
        func_0x000107c2acd4(&ppppppppuStack_510);
        iVar20 = (int)&uStack_280;
        FUN_10aae4cc0();
        FUN_10ad055a0();
        if (iVar20 != 0) {
          ppuVar24 = &PTR___tlv_bootstrap_11340dfd8;
          (*(code *)PTR___tlv_bootstrap_11340dfd8)();
          if (*ppuVar24 == (undefined *)0x0) {
            ppuVar24 = &PTR___tlv_bootstrap_11340dd98;
            (*(code *)PTR___tlv_bootstrap_11340dd98)();
            plVar56 = (long *)*ppuVar24;
            if (plVar56 != (long *)0x0) {
              (**(code **)(*plVar56 + 0x18))();
              if (plVar56 != (long *)0x0) {
                plVar56 = plVar56 + 7;
                goto LAB_10aab4ecc;
              }
            }
          }
          else {
            plVar56 = (long *)(*ppuVar24 + 8);
LAB_10aab4ecc:
            if (((uint)*(undefined8 *)(*plVar56 + 0x10) >> 1 & 1) != 0) {
              func_0x000107c2b054(&ppppppppuStack_400,&UNK_10f68df13);
              func_0x000107c2b054(&ppppppppuStack_320,&UNK_10f68da37);
              if ((int)uStack_3f0._4_4_ < 0) {
                pcVar33 = "null";
                if (CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8) != 0) {
                  pcVar33 = (char *)ppppppppuStack_400;
                }
              }
              else {
                pcVar33 = "null";
                if (uStack_3f0._7_1_ != '\0') {
                  pcVar33 = (char *)&ppppppppuStack_400;
                }
              }
              if ((long)uStack_310 < 0) {
                pcVar39 = "null";
                if (uStack_318 != (undefined ********)0x0) {
                  pcVar39 = (char *)ppppppppuStack_320;
                }
              }
              else {
                pcVar39 = "null";
                if (uStack_310._7_1_ != '\0') {
                  pcVar39 = (char *)&ppppppppuStack_320;
                }
              }
              ppppppppuStack_510 = (undefined ********)pcVar39;
              uStack_280 = (undefined **)pcVar33;
              FUN_10a224324(&uStack_280,&ppppppppuStack_510);
              if ((int)uStack_3f0._4_4_ < 0) {
                if (CONCAT44(uStack_3f8._4_4_,(float)uStack_3f8) == 0) goto LAB_10aab6a70;
                func_0x000107c3192c(&uStack_280,ppppppppuStack_400);
LAB_10aab6ad4:
                uVar57 = 1;
              }
              else {
                if (uStack_3f0._7_1_ != '\0') {
                  uStack_278._0_4_ = (float)uStack_3f8;
                  uStack_278._4_4_ = uStack_3f8._4_4_;
                  uStack_280 = (undefined **)ppppppppuStack_400;
                  uStack_270._0_4_ = (float)uStack_3f0;
                  uStack_270._4_4_ = uStack_3f0._4_4_;
                  goto LAB_10aab6ad4;
                }
LAB_10aab6a70:
                uVar57 = 0;
                uStack_280 = (undefined **)((ulong)uStack_280 & 0xffffffffffffff00);
              }
              uStack_268._0_4_ = (float)CONCAT31(uStack_268._1_3_,uVar57);
              if ((long)uStack_310 < 0) {
                if (uStack_318 == (undefined ********)0x0) goto LAB_10aab6b00;
                func_0x000107c3192c(&ppppppppuStack_510,ppppppppuStack_320);
LAB_10aab6b44:
                uVar57 = 1;
              }
              else {
                if (uStack_310._7_1_ != '\0') {
                  uStack_508._0_4_ = SUB84(uStack_318,0);
                  uStack_508._4_4_ = (float)((ulong)uStack_318 >> 0x20);
                  ppppppppuStack_510 = ppppppppuStack_320;
                  uStack_500._0_4_ = SUB84(uStack_310,0);
                  uStack_500._4_4_ = (float)((ulong)uStack_310 >> 0x20);
                  goto LAB_10aab6b44;
                }
LAB_10aab6b00:
                uVar57 = 0;
                ppppppppuStack_510 =
                     (undefined ********)((ulong)ppppppppuStack_510 & 0xffffffffffffff00);
              }
              fStack_4f8 = (float)CONCAT31(fStack_4f8._1_3_,uVar57);
              FUN_10a234a0c(&uStack_280,&ppppppppuStack_510);
              ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0)
              ;
              goto LAB_10aab6e00;
            }
          }
        }
        if (((ulong)ppppppppuVar23 & 1) == 0 && !bVar16) {
          ppppppppuVar55 = param_2;
          FUN_10aac7538(param_2,*(uint *)((long)param_8 + 4));
          if ((int)ppppppppuVar55 != 0) {
            lStack_678 = param_6[1];
            lStack_680 = *param_6;
            if (param_6[1] != 0) {
              plVar56 = (long *)(param_6[1] + 8);
              do {
                cVar7 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar56,0x10);
                if (bVar16) {
                  *plVar56 = *plVar56 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            FUN_10aac75a8(param_2,param_3,&lStack_680,&uStack_5e8);
            func_0x00010a09db0c(&lStack_680);
          }
        }
        lVar42 = *param_6;
        plVar56 = (long *)param_6[1];
        if (plVar56 != (long *)0x0) {
          plVar28 = plVar56 + 1;
          do {
            cVar7 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar16) {
              *plVar28 = *plVar28 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (lVar42 == 0) {
          dVar69 = 1.0;
        }
        else {
          ppppppppuVar55 = ppppppppuVar32;
          FUN_10a0ec6f0();
          bVar16 = ((ulong)ppppppppuVar55 & 1) != 0;
          iVar20 = *(int *)(param_4 + 0x10);
          if (bVar16) {
            iVar20 = *(int *)(param_4 + 0x14);
          }
          iVar45 = *(int *)(param_4 + 0x14);
          if (bVar16) {
            iVar45 = *(int *)(param_4 + 0x10);
          }
          fVar70 = (float)iVar20 / (float)*(int *)(lVar42 + 0x18);
          fVar68 = (float)iVar45 / (float)*(int *)(lVar42 + 0x1c);
          pppppppuVar41 = (undefined *******)(ulong)(uint)fVar68;
          if (fVar68 <= fVar70) {
            fVar68 = fVar70;
          }
          dVar69 = (double)fVar68;
        }
        if (plVar56 != (long *)0x0) {
          plVar28 = plVar56 + 1;
          do {
            lVar42 = *plVar28;
            cVar7 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar16) {
              *plVar28 = lVar42 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar42 == 0) {
            (**(code **)(*plVar56 + 0x10))(plVar56);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar56);
          }
        }
        uVar40 = *(ulong *)(param_4 + 0x10);
        FUN_10aacfcb0(param_7,"body",4);
        if (param_7 == (undefined ********)0x0) {
          pppppppuVar53 = (undefined *******)0x0;
          uStack_278._0_4_ = 0.0;
          uStack_278._4_4_ = 0.0;
          uStack_280 = (undefined **)0x0;
LAB_10aab50dc:
          uStack_348 = 0;
          ppppppppuStack_350 = (undefined ********)0x0;
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_330 = 0x3f800000;
        }
        else {
          uStack_280 = (undefined **)param_7[3];
          pppppppuVar53 = param_7[4];
          uStack_278._0_4_ = SUB84(pppppppuVar53,0);
          uStack_278._4_4_ = (float)((ulong)pppppppuVar53 >> 0x20);
          if (pppppppuVar53 != (undefined *******)0x0) {
            pppppppuVar50 = pppppppuVar53 + 1;
            do {
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(pppppppuVar50,0x10);
              if (bVar16) {
                *pppppppuVar50 = (undefined ******)((long)*pppppppuVar50 + 1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          if ((undefined ********)uStack_280 == (undefined ********)0x0) goto LAB_10aab50dc;
          uStack_348 = 0;
          ppppppppuStack_350 = (undefined ********)0x0;
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_330 = 0x3f800000;
          pppppppuVar50 = (undefined *******)uStack_280[3];
          ppppppppuVar55 = (undefined ********)(uStack_280 + 3);
          if (((ulong)pppppppuVar50 & 1) != 0) {
            ppppppppuVar55 = (undefined ********)((long)pppppppuVar50 + 7);
          }
          if (*(int *)(uStack_280 + 4) != 0) {
            lVar42 = (long)*(int *)(uStack_280 + 4) << 3;
            do {
              pppppppuVar50 = *ppppppppuVar55;
              uVar44 = *(uint *)(pppppppuVar50 + 2);
              if ((uVar44 >> 0x13 & 1) == 0) {
                if ((uVar44 >> 0x15 & 1) != 0) {
LAB_10aab508c:
                  uVar71 = *(undefined4 *)((long)pppppppuVar50 + 0x144);
                  ppppppppuStack_400 =
                       (undefined ********)
                       CONCAT44(ppppppppuStack_400._4_4_,*(undefined4 *)(pppppppuVar50 + 0x26));
                  ppppppppuVar29 = (undefined ********)&ppppppppuStack_350;
                  ppppppppuStack_510 = (undefined ********)&ppppppppuStack_400;
                  func_0x0001093c8af8(ppppppppuVar29,&ppppppppuStack_400,&UNK_10dd5b8f9,
                                      &ppppppppuStack_510,&ppppppppuStack_320);
                  *(undefined4 *)((long)ppppppppuVar29 + 0x14) = uVar71;
                }
              }
              else if (((uVar44 >> 0x15 & 1) != 0) &&
                      ((*(byte *)((long)pppppppuVar50 + 0x13c) & 1) != 0)) goto LAB_10aab508c;
              ppppppppuVar55 = ppppppppuVar55 + 1;
              lVar42 = lVar42 + -8;
            } while (lVar42 != 0);
          }
        }
        if (pppppppuVar53 != (undefined *******)0x0) {
          pppppppuVar50 = pppppppuVar53 + 1;
          do {
            ppppppuVar61 = *pppppppuVar50;
            cVar7 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(pppppppuVar50,0x10);
            if (bVar16) {
              *pppppppuVar50 = (undefined ******)((long)ppppppuVar61 + -1);
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (ppppppuVar61 == (undefined ******)0x0) {
            (*(code *)(*pppppppuVar53)[2])(pppppppuVar53);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar53);
          }
        }
        ppppppppuVar55 = param_2 + 0x28;
        func_0x0001096e4e0c(ppppppppuVar55,0x11382aac8);
        ppppppppuVar29 = ppppppppuStack_590;
        pppppppuVar53 = *ppppppppuVar55;
        pppppppuVar50 = ppppppppuVar55[1];
        pppppppuVar52 = pppppppuVar53;
        if (pppppppuVar53 == pppppppuVar50) {
          uStack_594 = false;
        }
        else {
          do {
            pppppppuVar63 = pppppppuVar52 + 10;
            uStack_594 = *(int *)((long)pppppppuVar52 + 0x1c) == 0;
            pppppppuVar52 = pppppppuVar63;
          } while (!(bool)uStack_594 && pppppppuVar63 != pppppppuVar50);
        }
        ppppppppuVar23 = ppppppppuVar55;
        ppppppppuVar31 = ppppppppuStack_588;
        if (ppppppppuStack_588 != ppppppppuStack_590) {
          do {
            ppppppppuVar31 = ppppppppuVar31 + -0x44;
            ppppppppuVar23 = ppppppppuVar31;
            FUN_10a4ffeb4();
          } while (ppppppppuVar31 != ppppppppuVar29);
          pppppppuVar53 = *ppppppppuVar55;
          pppppppuVar50 = ppppppppuVar55[1];
          ppppppppuVar31 = ppppppppuStack_590;
        }
        ppppppppuStack_588 = ppppppppuVar29;
        uVar36 = ((long)pppppppuVar50 - (long)pppppppuVar53 >> 4) * -0x3333333333333333;
        if ((ulong)(((long)ppppppppuStack_580 - (long)ppppppppuVar31 >> 5) * -0xf0f0f0f0f0f0f0f) <
            uVar36) {
          if (0x78787878787878 < uVar36) {
            FUN_10a4ffc58();
            ppppppppuVar55 = (undefined ********)CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
            goto LAB_10aab6e00;
          }
          ppppppppuVar30 = (undefined ********)&ppppppppuStack_590;
          uStack_260 = (undefined ********)&ppppppppuStack_590;
          FUN_10a4ffc6c();
          ppppppppuVar29 =
               (undefined ********)
               ((long)ppppppppuVar30 + ((long)ppppppppuVar29 - (long)ppppppppuVar31));
          ppppppppuVar31 =
               (undefined ********)
               ((long)ppppppppuVar29 + ((long)ppppppppuStack_590 - (long)ppppppppuStack_588));
          func_0x00010aad7108(ppppppppuStack_590,ppppppppuStack_588,ppppppppuVar31);
          uStack_270._0_4_ = SUB84(ppppppppuStack_590,0);
          uStack_270._4_4_ = (float)((ulong)ppppppppuStack_590 >> 0x20);
          uStack_268._0_4_ = SUB84(ppppppppuStack_580,0);
          uStack_268._4_4_ = (float)((ulong)ppppppppuStack_580 >> 0x20);
          uStack_280 = (undefined **)ppppppppuStack_590;
          ppppppppuVar23 = (undefined ********)&uStack_280;
          ppppppppuStack_590 = ppppppppuVar31;
          ppppppppuStack_588 = ppppppppuVar29;
          ppppppppuStack_580 = ppppppppuVar30 + uVar36 * 0x44;
          uStack_278._0_4_ = (float)uStack_270;
          uStack_278._4_4_ = uStack_270._4_4_;
          FUN_10aad7170();
        }
        ppppppuVar61 = *param_8;
        if (((ulong)ppppppuVar61 & 0x560) != 0) {
          ppppppppuVar29 = param_2 + 0x28;
          func_0x0001096b5280(ppppppppuVar29,0x11382aa70);
          ppppppppuVar23 = (undefined ********)&uStack_578;
          func_0x00010aac16fc(ppppppppuVar23,ppppppppuVar29);
          if (CONCAT71(uStack_577,uStack_578) != 0) {
            *(uint *)(CONCAT71(uStack_577,uStack_578) + 0x30) = *(uint *)((long)param_8 + 0xc);
          }
        }
        pppppppuVar53 = *ppppppppuVar55;
        pppppppuVar50 = ppppppppuVar55[1];
        if (pppppppuVar53 != pppppppuVar50) {
          iStack_704 = 0;
          ppppppppuVar29 = param_2 + 0x3b;
          uStack_6f0 = (uint)((ulong)ppppppuVar61 & 0x560);
          do {
            ppppppppuVar55 = (undefined ********)pppppppuVar53[2][1];
            if ((int)((ulong)((long)pppppppuVar53[2][2] - (long)ppppppppuVar55) >> 4) < 1) {
              func_0x000107c2acdc();
              ppppppppuVar55 = ppppppppuVar23;
            }
            if (ppppppppuVar55[1] != (undefined *******)0x0) {
              ppppppppuVar23 = ppppppppuVar55;
              (*(code *)(*ppppppppuVar55)[5])();
              if ((int)ppppppppuVar23 != 0) {
                bVar16 = false;
                if (CONCAT71(uStack_577,uStack_578) != 0) {
                  pppppuVar54 = pppppppuVar53[2][1];
                  if ((int)((ulong)((long)pppppppuVar53[2][2] - (long)pppppuVar54) >> 4) < 6) {
                    bVar16 = false;
                  }
                  else {
                    bVar16 = pppppuVar54[0xb] != (undefined ****)0x0;
                  }
                }
                if ((((ulong)ppppppuVar61 & 0x560) == 0) || (bVar16)) {
                  ___dynamic_cast(ppppppppuVar55,&PTR_DAT_110b01d40,&PTR_DAT_110b05200,0);
                  if (ppppppppuVar55 == (undefined ********)0x0) {
                    func_0x000107c2acdc();
                  }
                  pppppppuStack_360 = (undefined *******)&PTR_SUB_110b01d60;
                  pppppppuStack_358 = ppppppppuVar55[1];
                  pppppppuVar63 = *ppppppppuVar55;
                  pppppppuVar52 = pppppppuStack_358 + -1;
                  do {
                    cVar7 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(pppppppuVar52,0x10);
                    if (bVar9) {
                      *(int *)pppppppuVar52 = *(int *)pppppppuVar52 + 1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  pppppppuStack_360 = (undefined *******)&PTR_DAT_110b051b8;
                  ppppppuStack_378 = (undefined ******)0x0;
                  pppppppuStack_380 = (undefined *******)0x0;
                  uStack_370 = 0;
                  iVar20 = (int)((ulong)((long)pppppppuStack_358[4] - (long)pppppppuStack_358[3]) >>
                                3);
                  func_0x0001073b504c(&pppppppuStack_380,(long)(iVar20 << 1));
                  if (0 < iVar20) {
                    iVar45 = 0;
                    do {
                      func_0x0001096ba098(&pppppppuStack_360,iVar45);
                      uStack_280 = (undefined **)CONCAT44((int)pppppppuVar41,(int)pppppppuVar63);
                      FUN_10a0ca014(&pppppppuStack_380,&uStack_280);
                      FUN_10a0ca014(&pppppppuStack_380,(long)&uStack_280 + 4);
                      iVar45 = iVar45 + 1;
                    } while (iVar20 != iVar45);
                  }
                  ppppppppuVar55 = ppppppppuVar32;
                  FUN_10a0ec6f0();
                  uStack_388 = uVar40 & 0xffffffff;
                  uVar36 = uVar40 >> 0x20;
                  if (((ulong)ppppppppuVar55 & 1) != 0) {
                    uStack_388 = uVar40 >> 0x20;
                    uVar36 = uVar40;
                  }
                  uStack_388 = uStack_388 | uVar36 << 0x20;
                  uStack_508._0_4_ = (float)((uint)(float)uStack_508 & 0xffffff00);
                  ppppppppuStack_510 = (undefined ********)&PTR_SUB_110ba84d0;
                  fStack_4d8 = 0.0;
                  fStack_4e0 = 0.0;
                  fStack_4f8 = 0.0;
                  uStack_4f4 = 0;
                  uStack_500._0_4_ = 0.0;
                  uStack_500._4_4_ = 0.0;
                  fStack_4e8 = 0.0;
                  uStack_4e4 = 0;
                  uStack_4f0._4_4_ = 0;
                  uStack_508._4_4_ = 1.0;
                  uStack_4f0._0_4_ = 0x3f800000;
                  uStack_4f0 = (undefined ********)0x3f800000;
                  uStack_4dc = 0x3f800000;
                  pppppppuStack_4c8 = (undefined *******)0x0;
                  pppppppuStack_4d0 = (undefined *******)0x0;
                  pppppppuStack_4b8 = (undefined *******)0x0;
                  pppppppuStack_4c0 = (undefined *******)0x0;
                  pppppppuStack_4a8 = (undefined *******)0x0;
                  pppppppuStack_4b0 = (undefined *******)0x0;
                  pppppuVar54 = pppppppuVar53[2][1];
                  if (((int)((ulong)((long)pppppppuVar53[2][2] - (long)pppppuVar54) >> 4) < 2) ||
                     (pppppuVar54[3] == (undefined ****)0x0)) {
                    pppppppuVar60 = (undefined *******)0x0;
                    pppppppuVar64 = (undefined *******)0x0;
                    pppppppuStack_6b0 = (undefined *******)0x0;
                    pppppppuVar62 = (undefined *******)0x0;
                    pppppppuVar63 = (undefined *******)0x0;
                    pppppppuVar52 = (undefined *******)0x0;
                    uVar57 = 0;
                  }
                  else {
                    pppppuVar54 = pppppuVar54 + 2;
                    ___dynamic_cast(pppppuVar54,&PTR_DAT_110b01d40,&PTR_DAT_110b053a0,0);
                    if (pppppuVar54 == (undefined *****)0x0) {
                      func_0x000107c2acdc();
                    }
                    uStack_318 = (undefined ********)pppppuVar54[1];
                    if (uStack_318 != (undefined ********)0x0) {
                      ppppppppuVar55 = uStack_318 + -1;
                      do {
                        cVar7 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(ppppppppuVar55,0x10);
                        if (bVar9) {
                          *(int *)ppppppppuVar55 = *(int *)ppppppppuVar55 + 1;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                    }
                    ppppppppuStack_320 = (undefined ********)&PTR_DAT_110b05358;
                    FUN_10aac844c(&uStack_280,&ppppppppuStack_320);
                    pppppppuVar60 = pppppppuStack_218;
                    pppppppuVar64 = pppppppuStack_220;
                    pppppppuStack_6b0 = pppppppuStack_228;
                    pppppppuVar62 = pppppppuStack_230;
                    pppppppuVar63 = pppppppuStack_238;
                    pppppppuVar52 = pppppppuStack_240;
                    uVar57 = (undefined1)uStack_278;
                    uStack_508._0_4_ = (float)CONCAT31(uStack_508._1_3_,(undefined1)uStack_278);
                    uStack_500._4_4_ = uStack_270._4_4_;
                    uStack_508._4_4_ = uStack_278._4_4_;
                    uStack_500._0_4_ = (float)uStack_270;
                    uStack_4f4 = uStack_268._4_4_;
                    uStack_4dc = uStack_24c;
                    uStack_4e4 = uStack_254;
                    fStack_4e0 = fStack_250;
                    pppppppuStack_4d0 = pppppppuStack_240;
                    pppppppuStack_4c8 = pppppppuStack_238;
                    pppppppuStack_238 = (undefined *******)0x0;
                    pppppppuStack_230 = (undefined *******)0x0;
                    pppppppuStack_240 = (undefined *******)0x0;
                    pppppppuStack_4b0 = pppppppuStack_220;
                    pppppppuStack_4b8 = pppppppuStack_228;
                    pppppppuStack_4c0 = pppppppuVar62;
                    pppppppuStack_4a8 = pppppppuStack_218;
                    fStack_4f8 = (float)uStack_268 + 0.0;
                    pppppppuVar41 = (undefined *******)(ulong)(uint)fStack_4f8;
                    fStack_4e8 = fStack_258 + (float)(int)uVar36;
                    fStack_4d8 = fStack_248 + 0.0;
                    ppppppppuStack_320 = (undefined ********)&PTR_SUB_110b01d60;
                    uStack_4f0 = uStack_260;
                    func_0x000107c2acd4(&ppppppppuStack_320);
                  }
                  ppppppppuVar23 = ppppppppuStack_588;
                  if (ppppppppuStack_588 < ppppppppuStack_580) {
                    _bzero(ppppppppuStack_588,0x220);
                    func_0x00010aad6f70(ppppppppuVar23);
                    ppppppppuVar23 = ppppppppuVar23 + 0x44;
                    ppppppppuVar55 = uStack_4f0;
                  }
                  else {
                    lVar42 = (long)ppppppppuStack_588 - (long)ppppppppuStack_590;
                    uVar36 = (lVar42 >> 5) * -0xf0f0f0f0f0f0f0f + 1;
                    if (0x78787878787878 < uVar36) {
                      FUN_10a4ffc58();
                      ppppppppuVar55 = uStack_4f0;
                      goto LAB_10aab6e00;
                    }
                    lVar51 = (long)ppppppppuStack_580 - (long)ppppppppuStack_590 >> 5;
                    uVar59 = lVar51 * -0x1e1e1e1e1e1e1e1e;
                    if (uVar59 < uVar36 || uVar59 - uVar36 == 0) {
                      uVar59 = uVar36;
                    }
                    if (0x3c3c3c3c3c3c3b < (ulong)(lVar51 * -0xf0f0f0f0f0f0f0f)) {
                      uVar59 = 0x78787878787878;
                    }
                    if (uVar59 == 0) {
                      ppppppppuVar55 = (undefined ********)0x0;
                      uStack_260 = (undefined ********)&ppppppppuStack_590;
                    }
                    else {
                      ppppppppuVar55 = (undefined ********)&ppppppppuStack_590;
                      uStack_260 = (undefined ********)&ppppppppuStack_590;
                      FUN_10a4ffc6c();
                    }
                    lVar42 = (long)ppppppppuVar55 + lVar42;
                    uStack_280 = (undefined **)ppppppppuVar55;
                    uStack_278 = (undefined8 *)lVar42;
                    uStack_268 = ppppppppuVar55 + uVar59 * 0x44;
                    uStack_270 = (undefined *******)lVar42;
                    _bzero(lVar42,0x220);
                    func_0x00010aad6f70(lVar42);
                    ppppppppuVar23 = (undefined ********)(lVar42 + 0x220);
                    ppppppppuVar31 =
                         (undefined ********)
                         ((long)ppppppppuStack_590 + (lVar42 - (long)ppppppppuStack_588));
                    func_0x00010aad7108(ppppppppuStack_590,ppppppppuStack_588,ppppppppuVar31);
                    uStack_270._0_4_ = SUB84(ppppppppuStack_590,0);
                    uStack_270._4_4_ = (float)((ulong)ppppppppuStack_590 >> 0x20);
                    uStack_268._0_4_ = SUB84(ppppppppuStack_580,0);
                    uStack_268._4_4_ = (float)((ulong)ppppppppuStack_580 >> 0x20);
                    uStack_280 = (undefined **)ppppppppuStack_590;
                    ppppppppuStack_590 = ppppppppuVar31;
                    ppppppppuStack_588 = ppppppppuVar23;
                    ppppppppuStack_580 = ppppppppuVar55 + uVar59 * 0x44;
                    uStack_278._0_4_ = (float)uStack_270;
                    uStack_278._4_4_ = uStack_270._4_4_;
                    FUN_10aad7170(&uStack_280);
                    ppppppppuVar55 = uStack_4f0;
                  }
                  uStack_4f0._4_4_ = (undefined4)((ulong)ppppppppuVar55 >> 0x20);
                  uStack_4f0._0_4_ = SUB84(ppppppppuVar55,0);
                  ppppppppuStack_588 = ppppppppuVar23;
                  if (ppppppppuStack_590 == ppppppppuVar23) goto LAB_10aab6e00;
                  uStack_3f8._0_4_ = (float)CONCAT31(uStack_3f8._1_3_,uVar57);
                  ppppppppuStack_400 = (undefined ********)&PTR_SUB_110ba84d0;
                  uStack_3f0._4_4_ = uStack_500._4_4_;
                  fStack_3e8 = fStack_4f8;
                  uStack_3f8._4_4_ = uStack_508._4_4_;
                  uStack_3f0._0_4_ = (float)uStack_500;
                  uStack_3dc = CONCAT44(fStack_4e8,uStack_4f0._4_4_);
                  uStack_3e4 = uStack_4f4;
                  uStack_3e0 = (undefined4)uStack_4f0;
                  uStack_3cc = CONCAT44(fStack_4d8,uStack_4dc);
                  uStack_3d4 = CONCAT44(fStack_4e0,uStack_4e4);
                  pppppppuStack_4d0 = (undefined *******)0x0;
                  pppppppuStack_4c8 = (undefined *******)0x0;
                  pppppppuStack_3a8 = pppppppuStack_6b0;
                  pppppppuStack_4c0 = (undefined *******)0x0;
                  pppppppuStack_4b8 = (undefined *******)0x0;
                  pppppppuStack_4b0 = (undefined *******)0x0;
                  pppppppuStack_4a8 = (undefined *******)0x0;
                  pppppppuStack_3c0 = pppppppuVar52;
                  pppppppuStack_3b8 = pppppppuVar63;
                  pppppppuStack_3b0 = pppppppuVar62;
                  pppppppuStack_3a0 = pppppppuVar64;
                  pppppppuStack_398 = pppppppuVar60;
                  uStack_4f0 = ppppppppuVar55;
                  FUN_10a14b9f0(&uStack_280,&pppppppuStack_380,&ppppppppuStack_400,&uStack_388);
                  ppppppppuVar55 = ppppppppuVar23 + -0x43;
                  FUN_10a69bf24(ppppppppuVar55,&uStack_280);
                  FUN_10a14e140(&uStack_280);
                  ppppppppuStack_400 = (undefined ********)&PTR_SUB_110ba84d0;
                  if (pppppppuStack_3a8 != (undefined *******)0x0) {
                    pppppppuStack_3a0 = pppppppuStack_3a8;
                    __ZdlPv();
                  }
                  if (pppppppuStack_3c0 != (undefined *******)0x0) {
                    pppppppuStack_3b8 = pppppppuStack_3c0;
                    __ZdlPv();
                  }
                  iVar20 = *(int *)(pppppppuVar53 + 3);
                  *(int *)(ppppppppuVar23 + -0x44) = iVar20;
                  ppppppppuVar31 = (undefined ********)(pppppppuVar53 + 4);
                  if (iVar20 == 1) {
                    ppppppppuVar30 = (undefined ********)&ppppppppuStack_350;
                    uStack_280 = (undefined **)ppppppppuVar31;
                    func_0x0001093c8fa4(ppppppppuVar30,ppppppppuVar31,&UNK_10dd5b8f9,&uStack_280,
                                        &ppppppppuStack_320);
                    iVar20 = *(int *)((long)ppppppppuVar30 + 0x14);
                  }
                  else {
                    iVar20 = *(int *)ppppppppuVar31;
                    if (iVar20 == -1) {
                      iVar20 = iStack_704;
                      iStack_704 = iStack_704 + 1;
                    }
                  }
                  *(int *)((long)ppppppppuVar23 + -0x21c) = iVar20;
                  pppppuVar54 = pppppppuVar53[2][1];
                  if ((2 < (int)((ulong)((long)pppppppuVar53[2][2] - (long)pppppuVar54) >> 4)) &&
                     (pppppuVar54[5] != (undefined ****)0x0)) {
                    pppppuVar54 = pppppuVar54 + 4;
                    ___dynamic_cast(pppppuVar54,&PTR_DAT_110b01d40,&PTR_DAT_110b053a0,0);
                    if (pppppuVar54 == (undefined *****)0x0) {
                      func_0x000107c2acdc();
                    }
                    ppppuStack_408 = pppppuVar54[1];
                    if (ppppuStack_408 != (undefined ****)0x0) {
                      ppppuVar38 = ppppuStack_408 + -1;
                      do {
                        cVar7 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(ppppuVar38,0x10);
                        if (bVar9) {
                          *(int *)ppppuVar38 = *(int *)ppppuVar38 + 1;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                    }
                    ppuStack_410 = &PTR_DAT_110b05358;
                    FUN_10aac844c(&uStack_280,&ppuStack_410);
                    pppppppuStack_440 = *ppppppppuVar29;
                    afStack_438[0] = SUB84(param_2[0x3c],0);
                    uStack_428 = SUB84(param_2[0x3e],0);
                    afStack_438[2] = SUB84(param_2[0x3d],0);
                    afStack_438[3] = (float)((ulong)param_2[0x3d] >> 0x20);
                    uStack_41c = *(undefined8 *)((long)param_2 + 0x1fc);
                    uStack_420 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 500) >> 0x20);
                    afStack_438[1] = *(float *)((long)param_2 + 0x1e4) / 10.4;
                    fStack_424 = *(float *)((long)param_2 + 500) / 10.4;
                    fStack_414 = *(float *)((long)param_2 + 0x204) / 10.4;
                    func_0x0001096b985c(&ppppppppuStack_320,&pppppppuStack_440,(long)&uStack_278 + 4
                                       );
                    pppppppuVar14 = pppppppuStack_218;
                    pppppppuVar60 = pppppppuStack_220;
                    pppppppuVar64 = pppppppuStack_228;
                    pppppppuVar62 = pppppppuStack_230;
                    pppppppuVar63 = pppppppuStack_238;
                    pppppppuVar52 = pppppppuStack_240;
                    uStack_270._4_4_ = SUB84(uStack_318,0);
                    uStack_268._0_4_ = (float)((ulong)uStack_318 >> 0x20);
                    uStack_278._4_4_ = SUB84(ppppppppuStack_320,0);
                    uStack_270._0_4_ = (float)((ulong)ppppppppuStack_320 >> 0x20);
                    uStack_260._4_4_ = (undefined4)uStack_308;
                    fStack_258 = (float)((ulong)uStack_308 >> 0x20);
                    uStack_268._4_4_ = SUB84(uStack_310,0);
                    uStack_260._0_4_ = (undefined4)((ulong)uStack_310 >> 0x20);
                    uStack_24c = (undefined4)uStack_2f8;
                    fStack_248 = (float)((ulong)uStack_2f8 >> 0x20);
                    uStack_254 = (undefined4)uStack_300;
                    fStack_250 = (float)((ulong)uStack_300 >> 0x20);
                    pppppppuStack_240 = (undefined *******)0x0;
                    pppppppuStack_238 = (undefined *******)0x0;
                    pppppppuStack_230 = (undefined *******)0x0;
                    pppppppuStack_228 = (undefined *******)0x0;
                    pppppppuStack_220 = (undefined *******)0x0;
                    pppppppuStack_218 = (undefined *******)0x0;
                    *(undefined1 *)(ppppppppuVar23 + -0x3c) = (undefined1)uStack_278;
                    *(undefined8 *)((long)ppppppppuVar23 + -0x1c4) = uStack_308;
                    *(undefined ********)((long)ppppppppuVar23 + -0x1cc) = uStack_310;
                    *(undefined8 *)((long)ppppppppuVar23 + -0x1b4) = uStack_2f8;
                    *(undefined8 *)((long)ppppppppuVar23 + -0x1bc) = uStack_300;
                    *(undefined *********)((long)ppppppppuVar23 + -0x1d4) = uStack_318;
                    *(undefined *********)((long)ppppppppuVar23 + -0x1dc) = ppppppppuStack_320;
                    ppppppppuVar30 = ppppppppuVar23 + -0x35;
                    pppppppuVar41 = uStack_310;
                    ppppppppuStack_2b0 = ppppppppuStack_320;
                    ppppppppuStack_2a8 = uStack_318;
                    pppppppuStack_2a0 = uStack_310;
                    ppppppppuVar31 = uStack_4f0;
                    if (*ppppppppuVar30 != (undefined *******)0x0) {
                      ppppppppuVar23[-0x34] = *ppppppppuVar30;
                      __ZdlPv();
                      *ppppppppuVar30 = (undefined *******)0x0;
                      ppppppppuVar23[-0x34] = (undefined *******)0x0;
                      ppppppppuVar23[-0x33] = (undefined *******)0x0;
                      ppppppppuVar31 = uStack_4f0;
                    }
                    ppppppppuVar23[-0x34] = pppppppuVar63;
                    *ppppppppuVar30 = pppppppuVar52;
                    ppppppppuVar23[-0x33] = pppppppuVar62;
                    ppppppppuVar30 = ppppppppuVar23 + -0x32;
                    if (*ppppppppuVar30 != (undefined *******)0x0) {
                      ppppppppuVar23[-0x31] = *ppppppppuVar30;
                      uStack_4f0 = ppppppppuVar31;
                      __ZdlPv();
                      *ppppppppuVar30 = (undefined *******)0x0;
                      ppppppppuVar23[-0x31] = (undefined *******)0x0;
                      ppppppppuVar23[-0x30] = (undefined *******)0x0;
                      ppppppppuVar31 = uStack_4f0;
                    }
                    ppppppppuVar23[-0x31] = pppppppuVar60;
                    *ppppppppuVar30 = pppppppuVar64;
                    ppppppppuVar23[-0x30] = pppppppuVar14;
                    *(undefined1 *)(ppppppppuVar23 + -0x3e) = 1;
                    uStack_280 = &PTR_SUB_110ba84d0;
                    uStack_4f0 = ppppppppuVar31;
                    if (pppppppuStack_228 != (undefined *******)0x0) {
                      pppppppuStack_220 = pppppppuStack_228;
                      __ZdlPv();
                    }
                    if (pppppppuStack_240 != (undefined *******)0x0) {
                      pppppppuStack_238 = pppppppuStack_240;
                      __ZdlPv();
                    }
                    ppuStack_410 = &PTR_SUB_110b01d60;
                    func_0x000107c2acd4(&ppuStack_410);
                  }
                  FUN_10a14cd18((float)(1.0 / dVar69));
                  if (((ulong)uStack_6f0 != 0) && (!(bool)(bVar16 ^ 1))) {
                    pppppuVar54 = pppppppuVar53[2][1];
                    if ((int)((ulong)((long)pppppppuVar53[2][2] - (long)pppppuVar54) >> 4) < 6) {
                      func_0x000107c2acdc();
                    }
                    else {
                      ppppppppuVar55 = (undefined ********)(pppppuVar54 + 10);
                    }
                    ___dynamic_cast();
                    ppppppppuVar31 = uStack_260;
                    if (ppppppppuVar55 == (undefined ********)0x0) {
                      func_0x000107c2acdc();
                      ppppppppuVar31 = uStack_260;
                    }
                    pppppppuVar41 = ppppppppuVar55[1];
                    if (pppppppuVar41 != (undefined *******)0x0) {
                      pppppppuVar52 = pppppppuVar41 + -1;
                      do {
                        cVar7 = '\x01';
                        bVar16 = (bool)ExclusiveMonitorPass(pppppppuVar52,0x10);
                        if (bVar16) {
                          *(int *)pppppppuVar52 = *(int *)pppppppuVar52 + 1;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                    }
                    uStack_278._0_4_ = SUB84(pppppppuVar41,0);
                    uStack_278._4_4_ = (float)((ulong)pppppppuVar41 >> 0x20);
                    uStack_280 = &PTR_DAT_110b05358;
                    pppppppuVar52 = ppppppppuVar23[-0xd];
                    ppppppppuVar23[-0xd] = pppppppuVar41;
                    ppppppppuVar23[-0xe] = (undefined *******)&PTR_DAT_110b05358;
                    ppppppppuStack_320 = (undefined ********)&PTR_SUB_110b01d60;
                    uStack_318 = (undefined ********)pppppppuVar52;
                    uStack_260 = ppppppppuVar31;
                    func_0x000107c2acd4(&ppppppppuStack_320);
                    func_0x0001096baa30(ppppppppuVar23 + -0xe);
                    pppppppuVar41 = ppppppppuVar23[-0xd];
                    func_0x0001096b985c(&uStack_280,ppppppppuVar29,pppppppuVar41 + 6);
                    pppppppuVar41[7] =
                         (undefined ******)CONCAT44(uStack_278._4_4_,(float)uStack_278);
                    pppppppuVar41[6] = (undefined ******)uStack_280;
                    pppppppuVar41[9] =
                         (undefined ******)CONCAT44(uStack_268._4_4_,(float)uStack_268);
                    pppppppuVar41[8] =
                         (undefined ******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
                    pppppppuVar41[0xb] = (undefined ******)CONCAT44(uStack_254,fStack_258);
                    pppppppuVar41[10] = (undefined ******)uStack_260;
                    if (((((ulong)*param_8 & 0x100) != 0) &&
                        (pppppuVar54 = pppppppuVar53[2][1],
                        8 < (int)((ulong)((long)pppppppuVar53[2][2] - (long)pppppuVar54) >> 4))) &&
                       (pppppuVar54[0x11] != (undefined ****)0x0)) {
                      pppppuVar54 = pppppuVar54 + 0x10;
                      ___dynamic_cast(pppppuVar54,&PTR_DAT_110b01d40,&PTR_DAT_110b05060,0);
                      ppppppppuVar55 = uStack_260;
                      if (pppppuVar54 == (undefined *****)0x0) {
                        func_0x000107c2acdc();
                        ppppppppuVar55 = uStack_260;
                      }
                      pppppppuVar41 = (undefined *******)pppppuVar54[1];
                      if (pppppppuVar41 != (undefined *******)0x0) {
                        pppppppuVar52 = pppppppuVar41 + -1;
                        do {
                          cVar7 = '\x01';
                          bVar16 = (bool)ExclusiveMonitorPass(pppppppuVar52,0x10);
                          if (bVar16) {
                            *(int *)pppppppuVar52 = *(int *)pppppppuVar52 + 1;
                            cVar7 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar7 != '\0');
                      }
                      uStack_278._0_4_ = SUB84(pppppppuVar41,0);
                      uStack_278._4_4_ = (float)((ulong)pppppppuVar41 >> 0x20);
                      uStack_280 = &PTR_DAT_110b05018;
                      pppppppuVar52 = ppppppppuVar23[-9];
                      ppppppppuVar23[-9] = pppppppuVar41;
                      ppppppppuVar23[-10] = (undefined *******)&PTR_DAT_110b05018;
                      ppppppppuStack_320 = (undefined ********)&PTR_SUB_110b01d60;
                      uStack_318 = (undefined ********)pppppppuVar52;
                      uStack_260 = ppppppppuVar55;
                      func_0x000107c2acd4(&ppppppppuStack_320);
                      func_0x0001096b9498(ppppppppuVar23 + -10);
                      pppppppuVar41 = ppppppppuVar23[-9];
                      func_0x0001096b985c(&uStack_280,ppppppppuVar29,pppppppuVar41 + 6);
                      pppppppuVar41[7] =
                           (undefined ******)CONCAT44(uStack_278._4_4_,(float)uStack_278);
                      pppppppuVar41[6] = (undefined ******)uStack_280;
                      pppppppuVar41[9] =
                           (undefined ******)CONCAT44(uStack_268._4_4_,(float)uStack_268);
                      pppppppuVar41[8] =
                           (undefined ******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
                      pppppppuVar41[0xb] = (undefined ******)CONCAT44(uStack_254,fStack_258);
                      pppppppuVar41[10] = (undefined ******)uStack_260;
                    }
                    func_0x0001096c100c(&ppppppppuStack_320,ppppppppuVar23 + -0xe);
                    uStack_278._0_4_ = SUB84(uStack_318,0);
                    uStack_278._4_4_ = (float)((ulong)uStack_318 >> 0x20);
                    uStack_280 = (undefined **)ppppppppuStack_320;
                    ppppppppuVar55 = (undefined ********)ppppppppuVar23[-0xb];
                    pppppppuVar41 = ppppppppuVar23[-0xc];
                    ppppppppuVar23[-0xb] = (undefined *******)uStack_318;
                    ppppppppuVar23[-0xc] = (undefined *******)ppppppppuStack_320;
                    ppppppppuStack_320 = (undefined ********)&PTR_SUB_110b01d60;
                    uStack_318 = ppppppppuVar55;
                    func_0x000107c2acd4(&ppppppppuStack_320);
                  }
                  if (*(char *)param_8 < '\0') {
                    pppppuVar54 = pppppppuVar53[2][1];
                    iVar20 = (int)((ulong)((long)pppppppuVar53[2][2] - (long)pppppuVar54) >> 4);
                    if (((6 < iVar20) && (iVar20 != 7)) &&
                       ((pppppuVar54[0xd] != (undefined ****)0x0 &&
                        (pppppuVar54[0xf] != (undefined ****)0x0)))) {
                      pppppuVar54 = pppppuVar54 + 0xc;
                      ___dynamic_cast(pppppuVar54,&PTR_DAT_110b01d40,&PTR_DAT_110b05060,0);
                      ppppppppuVar55 = uStack_260;
                      if (pppppuVar54 == (undefined *****)0x0) {
                        func_0x000107c2acdc();
                        ppppppppuVar55 = uStack_260;
                      }
                      pppppppuVar41 = (undefined *******)pppppuVar54[1];
                      if (pppppppuVar41 != (undefined *******)0x0) {
                        pppppppuVar52 = pppppppuVar41 + -1;
                        do {
                          cVar7 = '\x01';
                          bVar16 = (bool)ExclusiveMonitorPass(pppppppuVar52,0x10);
                          if (bVar16) {
                            *(int *)pppppppuVar52 = *(int *)pppppppuVar52 + 1;
                            cVar7 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar7 != '\0');
                      }
                      uStack_278._0_4_ = SUB84(pppppppuVar41,0);
                      uStack_278._4_4_ = (float)((ulong)pppppppuVar41 >> 0x20);
                      uStack_280 = &PTR_DAT_110b05018;
                      pppppppuVar52 = ppppppppuVar23[-7];
                      ppppppppuVar23[-7] = pppppppuVar41;
                      ppppppppuVar23[-8] = (undefined *******)&PTR_DAT_110b05018;
                      ppppppppuStack_320 = (undefined ********)&PTR_SUB_110b01d60;
                      uStack_318 = (undefined ********)pppppppuVar52;
                      uStack_260 = ppppppppuVar55;
                      func_0x000107c2acd4(&ppppppppuStack_320);
                      ppppppppuVar31 = ppppppppuVar23 + -8;
                      func_0x0001096b9498(ppppppppuVar31);
                      pppppppuVar41 = ppppppppuVar23[-7];
                      ppppppppuVar55 = ppppppppuVar29;
                      func_0x0001096b985c(&uStack_280,ppppppppuVar29,pppppppuVar41 + 6);
                      pppppppuVar41[7] =
                           (undefined ******)CONCAT44(uStack_278._4_4_,(float)uStack_278);
                      pppppppuVar41[6] = (undefined ******)uStack_280;
                      pppppppuVar41[9] =
                           (undefined ******)CONCAT44(uStack_268._4_4_,(float)uStack_268);
                      pppppppuVar41[8] =
                           (undefined ******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
                      pppppppuVar41[0xb] = (undefined ******)CONCAT44(uStack_254,fStack_258);
                      pppppppuVar41[10] = (undefined ******)uStack_260;
                      pppppuVar54 = pppppppuVar53[2][1];
                      if ((int)((ulong)((long)pppppppuVar53[2][2] - (long)pppppuVar54) >> 4) < 8) {
                        func_0x000107c2acdc();
                      }
                      else {
                        ppppppppuVar55 = (undefined ********)(pppppuVar54 + 0xe);
                      }
                      ___dynamic_cast();
                      ppppppppuVar30 = uStack_260;
                      if (ppppppppuVar55 == (undefined ********)0x0) {
                        func_0x000107c2acdc();
                        ppppppppuVar30 = uStack_260;
                      }
                      pppppppuVar41 = ppppppppuVar55[1];
                      if (pppppppuVar41 != (undefined *******)0x0) {
                        pppppppuVar52 = pppppppuVar41 + -1;
                        do {
                          cVar7 = '\x01';
                          bVar16 = (bool)ExclusiveMonitorPass(pppppppuVar52,0x10);
                          if (bVar16) {
                            *(int *)pppppppuVar52 = *(int *)pppppppuVar52 + 1;
                            cVar7 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar7 != '\0');
                      }
                      uStack_278._0_4_ = SUB84(pppppppuVar41,0);
                      uStack_278._4_4_ = (float)((ulong)pppppppuVar41 >> 0x20);
                      uStack_280 = &PTR_DAT_110b05018;
                      ppppppppuVar55 = (undefined ********)ppppppppuVar23[-5];
                      ppppppppuVar23[-5] = pppppppuVar41;
                      ppppppppuVar23[-6] = (undefined *******)&PTR_DAT_110b05018;
                      ppppppppuStack_320 = (undefined ********)&PTR_SUB_110b01d60;
                      uStack_318 = ppppppppuVar55;
                      uStack_260 = ppppppppuVar30;
                      func_0x000107c2acd4(&ppppppppuStack_320);
                      func_0x0001096b9498(ppppppppuVar23 + -6);
                      pppppppuVar52 = ppppppppuVar23[-5];
                      func_0x0001096b985c(&uStack_280,ppppppppuVar29,pppppppuVar52 + 6);
                      pppppppuVar41 =
                           (undefined *******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
                      pppppppuVar52[7] =
                           (undefined ******)CONCAT44(uStack_278._4_4_,(float)uStack_278);
                      pppppppuVar52[6] = (undefined ******)uStack_280;
                      pppppppuVar52[9] =
                           (undefined ******)CONCAT44(uStack_268._4_4_,(float)uStack_268);
                      pppppppuVar52[8] = (undefined ******)pppppppuVar41;
                      pppppppuVar52[0xb] = (undefined ******)CONCAT44(uStack_254,fStack_258);
                      pppppppuVar52[10] = (undefined ******)uStack_260;
                      if ((ppppppppuVar23[-0xb] != (undefined *******)0x0) &&
                         (ppppppppuVar23[-0xb][2] != (undefined ******)0x0)) {
                        pppppppuVar52 = ppppppppuVar23[-7];
                        uVar71 = *(undefined4 *)((long)pppppppuVar52 + 0x3c);
                        pppppppuVar41 =
                             (undefined *******)(ulong)*(uint *)((long)pppppppuVar52 + 0x4c);
                        uVar72 = *(undefined4 *)((long)pppppppuVar52 + 0x5c);
                        pppppppuVar52 = ppppppppuVar23[-5];
                        uVar73 = *(undefined4 *)((long)pppppppuVar52 + 0x3c);
                        uVar74 = *(undefined4 *)((long)pppppppuVar52 + 0x4c);
                        uVar75 = *(undefined4 *)((long)pppppppuVar52 + 0x5c);
                        func_0x0001096c1e14(ppppppppuVar31,0x11382aab8);
                        func_0x0001096999ec(uVar71,pppppppuVar41,uVar72,uVar73,uVar74,uVar75,
                                            (float)(double)*ppppppppuVar31,ppppppppuVar23 + -0xc);
                      }
                    }
                  }
                  if (((((*(byte *)((long)param_8 + 1) >> 2 & 1) != 0) &&
                       (pppppuVar54 = pppppppuVar53[2][1],
                       10 < (int)((ulong)((long)pppppppuVar53[2][2] - (long)pppppuVar54) >> 4))) &&
                      (pppppuVar54[0x15] != (undefined ****)0x0)) &&
                     ((pppppuVar54[0x13] != (undefined ****)0x0 &&
                      (ppppppppuVar23[-0xb] != (undefined *******)0x0)))) {
                    pppppuVar54 = pppppuVar54 + 0x12;
                    ___dynamic_cast(pppppuVar54,&PTR_DAT_110b01d40,&PTR_DAT_110b05060,0);
                    ppppppppuVar55 = uStack_260;
                    if (pppppuVar54 == (undefined *****)0x0) {
                      func_0x000107c2acdc();
                      ppppppppuVar55 = uStack_260;
                    }
                    pppppppuVar41 = (undefined *******)pppppuVar54[1];
                    if (pppppppuVar41 != (undefined *******)0x0) {
                      pppppppuVar52 = pppppppuVar41 + -1;
                      do {
                        cVar7 = '\x01';
                        bVar16 = (bool)ExclusiveMonitorPass(pppppppuVar52,0x10);
                        if (bVar16) {
                          *(int *)pppppppuVar52 = *(int *)pppppppuVar52 + 1;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                    }
                    uStack_278._0_4_ = SUB84(pppppppuVar41,0);
                    uStack_278._4_4_ = (float)((ulong)pppppppuVar41 >> 0x20);
                    uStack_280 = &PTR_DAT_110b05018;
                    pppppppuVar52 = ppppppppuVar23[-1];
                    ppppppppuVar23[-1] = pppppppuVar41;
                    ppppppppuVar23[-2] = (undefined *******)&PTR_DAT_110b05018;
                    ppppppppuStack_320 = (undefined ********)&PTR_SUB_110b01d60;
                    uStack_318 = (undefined ********)pppppppuVar52;
                    uStack_260 = ppppppppuVar55;
                    func_0x000107c2acd4(&ppppppppuStack_320);
                    func_0x0001096b9498(ppppppppuVar23 + -2);
                    pppppppuVar41 = ppppppppuVar23[-1];
                    ppppppppuVar55 = ppppppppuVar29;
                    func_0x0001096b985c(&uStack_280,ppppppppuVar29,pppppppuVar41 + 6);
                    pppppppuVar41[7] =
                         (undefined ******)CONCAT44(uStack_278._4_4_,(float)uStack_278);
                    pppppppuVar41[6] = (undefined ******)uStack_280;
                    pppppppuVar41[9] =
                         (undefined ******)CONCAT44(uStack_268._4_4_,(float)uStack_268);
                    pppppppuVar41[8] =
                         (undefined ******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
                    pppppppuVar41[0xb] = (undefined ******)CONCAT44(uStack_254,fStack_258);
                    pppppppuVar41[10] = (undefined ******)uStack_260;
                    pppppuVar54 = pppppppuVar53[2][1];
                    if ((int)((ulong)((long)pppppppuVar53[2][2] - (long)pppppuVar54) >> 4) < 0xb) {
                      func_0x000107c2acdc();
                    }
                    else {
                      ppppppppuVar55 = (undefined ********)(pppppuVar54 + 0x14);
                    }
                    ___dynamic_cast();
                    ppppppppuVar31 = uStack_260;
                    if (ppppppppuVar55 == (undefined ********)0x0) {
                      func_0x000107c2acdc();
                      ppppppppuVar31 = uStack_260;
                    }
                    pppppppuVar41 = ppppppppuVar55[1];
                    if (pppppppuVar41 != (undefined *******)0x0) {
                      pppppppuVar52 = pppppppuVar41 + -1;
                      do {
                        cVar7 = '\x01';
                        bVar16 = (bool)ExclusiveMonitorPass(pppppppuVar52,0x10);
                        if (bVar16) {
                          *(int *)pppppppuVar52 = *(int *)pppppppuVar52 + 1;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                    }
                    uStack_278._0_4_ = SUB84(pppppppuVar41,0);
                    uStack_278._4_4_ = (float)((ulong)pppppppuVar41 >> 0x20);
                    uStack_280 = &PTR_DAT_110b05018;
                    ppppppppuVar55 = (undefined ********)ppppppppuVar23[-3];
                    ppppppppuVar23[-3] = pppppppuVar41;
                    ppppppppuVar23[-4] = (undefined *******)&PTR_DAT_110b05018;
                    ppppppppuStack_320 = (undefined ********)&PTR_SUB_110b01d60;
                    uStack_318 = ppppppppuVar55;
                    uStack_260 = ppppppppuVar31;
                    func_0x000107c2acd4(&ppppppppuStack_320);
                    func_0x0001096b9498(ppppppppuVar23 + -4);
                    pppppppuVar52 = ppppppppuVar23[-3];
                    func_0x0001096b985c(&uStack_280,ppppppppuVar29,pppppppuVar52 + 6);
                    pppppppuVar41 = (undefined *******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
                    pppppppuVar52[7] =
                         (undefined ******)CONCAT44(uStack_278._4_4_,(float)uStack_278);
                    pppppppuVar52[6] = (undefined ******)uStack_280;
                    pppppppuVar52[9] =
                         (undefined ******)CONCAT44(uStack_268._4_4_,(float)uStack_268);
                    pppppppuVar52[8] = (undefined ******)pppppppuVar41;
                    pppppppuVar52[0xb] = (undefined ******)CONCAT44(uStack_254,fStack_258);
                    pppppppuVar52[10] = (undefined ******)uStack_260;
                  }
                  if ((*(char *)(param_8 + 2) == '\x01') &&
                     (ppppppppuVar23[-0xb] != (undefined *******)0x0)) {
                    func_0x0001096b9498(ppppppppuVar23 + -0xc);
                    fVar68 = *(float *)(ppppppppuVar23[-0xb] + 6);
                    uVar34 = *(undefined8 *)((long)ppppppppuVar23[-0xb] + 0x34);
                    func_0x0001096b9498(ppppppppuVar23 + -0xc);
                    fVar70 = (float)uVar34;
                    fVar67 = (float)((ulong)uVar34 >> 0x20);
                    fVar68 = 1.0 / SQRT(fVar68 * fVar68 + fVar70 * fVar70 + fVar67 * fVar67);
                    pppppppuVar41 = (undefined *******)(ulong)(uint)fVar68;
                    uVar36 = 0xfffffffffffffffc;
                    pppppppuVar52 = ppppppppuVar23[-0xb] + 6;
                    do {
                      pppppppuVar52[1] =
                           (undefined ******)
                           CONCAT44((float)((ulong)pppppppuVar52[1] >> 0x20) * fVar68,
                                    SUB84(pppppppuVar52[1],0) * fVar68);
                      *pppppppuVar52 =
                           (undefined ******)
                           CONCAT44((float)((ulong)*pppppppuVar52 >> 0x20) * fVar68,
                                    SUB84(*pppppppuVar52,0) * fVar68);
                      uVar36 = uVar36 + 4;
                      pppppppuVar52 = pppppppuVar52 + 2;
                    } while (uVar36 < 8);
                    func_0x0001096baa30(ppppppppuVar23 + -0xe);
                    uVar36 = 0xfffffffffffffffc;
                    pppppppuVar52 = ppppppppuVar23[-0xd] + 6;
                    do {
                      pppppppuVar52[1] =
                           (undefined ******)
                           CONCAT44((float)((ulong)pppppppuVar52[1] >> 0x20) * fVar68,
                                    SUB84(pppppppuVar52[1],0) * fVar68);
                      *pppppppuVar52 =
                           (undefined ******)
                           CONCAT44((float)((ulong)*pppppppuVar52 >> 0x20) * fVar68,
                                    SUB84(*pppppppuVar52,0) * fVar68);
                      uVar36 = uVar36 + 4;
                      pppppppuVar52 = pppppppuVar52 + 2;
                    } while (uVar36 < 8);
                    if (ppppppppuVar23[-9] != (undefined *******)0x0) {
                      func_0x0001096b9498(ppppppppuVar23 + -10);
                      uVar36 = 0xfffffffffffffffc;
                      pppppppuVar52 = ppppppppuVar23[-9] + 6;
                      do {
                        pppppppuVar52[1] =
                             (undefined ******)
                             CONCAT44((float)((ulong)pppppppuVar52[1] >> 0x20) * fVar68,
                                      SUB84(pppppppuVar52[1],0) * fVar68);
                        *pppppppuVar52 =
                             (undefined ******)
                             CONCAT44((float)((ulong)*pppppppuVar52 >> 0x20) * fVar68,
                                      SUB84(*pppppppuVar52,0) * fVar68);
                        uVar36 = uVar36 + 4;
                        pppppppuVar52 = pppppppuVar52 + 2;
                      } while (uVar36 < 8);
                    }
                    if (ppppppppuVar23[-7] != (undefined *******)0x0) {
                      func_0x0001096b9498(ppppppppuVar23 + -8);
                      uVar36 = 0xfffffffffffffffc;
                      pppppppuVar52 = ppppppppuVar23[-7] + 6;
                      do {
                        pppppppuVar52[1] =
                             (undefined ******)
                             CONCAT44((float)((ulong)pppppppuVar52[1] >> 0x20) * fVar68,
                                      SUB84(pppppppuVar52[1],0) * fVar68);
                        *pppppppuVar52 =
                             (undefined ******)
                             CONCAT44((float)((ulong)*pppppppuVar52 >> 0x20) * fVar68,
                                      SUB84(*pppppppuVar52,0) * fVar68);
                        uVar36 = uVar36 + 4;
                        pppppppuVar52 = pppppppuVar52 + 2;
                      } while (uVar36 < 8);
                      func_0x0001096b9498(ppppppppuVar23 + -6);
                      uVar36 = 0xfffffffffffffffc;
                      pppppppuVar52 = ppppppppuVar23[-5] + 6;
                      do {
                        pppppppuVar52[1] =
                             (undefined ******)
                             CONCAT44((float)((ulong)pppppppuVar52[1] >> 0x20) * fVar68,
                                      SUB84(pppppppuVar52[1],0) * fVar68);
                        *pppppppuVar52 =
                             (undefined ******)
                             CONCAT44((float)((ulong)*pppppppuVar52 >> 0x20) * fVar68,
                                      SUB84(*pppppppuVar52,0) * fVar68);
                        uVar36 = uVar36 + 4;
                        pppppppuVar52 = pppppppuVar52 + 2;
                      } while (uVar36 < 8);
                    }
                    if (ppppppppuVar23[-3] != (undefined *******)0x0) {
                      func_0x0001096b9498(ppppppppuVar23 + -4);
                      uVar36 = 0xfffffffffffffffc;
                      pppppppuVar52 = ppppppppuVar23[-3] + 6;
                      do {
                        pppppppuVar52[1] =
                             (undefined ******)
                             CONCAT44((float)((ulong)pppppppuVar52[1] >> 0x20) * fVar68,
                                      SUB84(pppppppuVar52[1],0) * fVar68);
                        *pppppppuVar52 =
                             (undefined ******)
                             CONCAT44((float)((ulong)*pppppppuVar52 >> 0x20) * fVar68,
                                      SUB84(*pppppppuVar52,0) * fVar68);
                        uVar36 = uVar36 + 4;
                        pppppppuVar52 = pppppppuVar52 + 2;
                      } while (uVar36 < 8);
                      func_0x0001096b9498(ppppppppuVar23 + -2);
                      uVar36 = 0xfffffffffffffffc;
                      pppppppuVar52 = ppppppppuVar23[-1] + 6;
                      do {
                        pppppppuVar52[1] =
                             (undefined ******)
                             CONCAT44((float)((ulong)pppppppuVar52[1] >> 0x20) * fVar68,
                                      SUB84(pppppppuVar52[1],0) * fVar68);
                        *pppppppuVar52 =
                             (undefined ******)
                             CONCAT44((float)((ulong)*pppppppuVar52 >> 0x20) * fVar68,
                                      SUB84(*pppppppuVar52,0) * fVar68);
                        uVar36 = uVar36 + 4;
                        pppppppuVar52 = pppppppuVar52 + 2;
                      } while (uVar36 < 8);
                    }
                  }
                  if (pppppppuStack_4b8 != (undefined *******)0x0) {
                    __ZdlPv();
                  }
                  if (pppppppuStack_4d0 != (undefined *******)0x0) {
                    __ZdlPv();
                  }
                  if (pppppppuStack_380 != (undefined *******)0x0) {
                    ppppppuStack_378 = (undefined ******)pppppppuStack_380;
                    __ZdlPv();
                  }
                  pppppppuStack_360 = (undefined *******)&PTR_SUB_110b01d60;
                  ppppppppuVar23 = &pppppppuStack_360;
                  func_0x000107c2acd4();
                }
              }
            }
            pppppppuVar53 = pppppppuVar53 + 10;
          } while (pppppppuVar53 != pppppppuVar50);
        }
        if (ppppppppuStack_590 != ppppppppuStack_588) {
          FUN_10a14ca80(ppppppppuStack_590 + 1,ppppppppuStack_560);
        }
        if (((*(byte *)((long)param_8 + 1) >> 1 & 1) == 0) || (CONCAT71(uStack_577,uStack_578) == 0)
           ) {
          uStack_56f = uStack_56f & 0xffffffffffffff;
        }
        else {
          func_0x0001096ae410(&uStack_280,param_2 + 0x28,1);
          bVar16 = false;
          if (CONCAT44(uStack_270._4_4_,(float)uStack_270) != 0) {
            uVar40 = (ulong)uStack_280._4_4_;
            if ((int)uStack_280._4_4_ < 3) {
              lVar42 = (long)(int)uStack_278._4_4_ * (long)(int)(float)uStack_278;
            }
            else {
              lVar42 = 1;
              pppppppuVar53 = pppppppuStack_240;
              do {
                lVar42 = lVar42 * *(int *)pppppppuVar53;
                uVar40 = uVar40 - 1;
                pppppppuVar53 = (undefined *******)((long)pppppppuVar53 + 4);
              } while (uVar40 != 0);
            }
            bVar16 = lVar42 != 0;
          }
          uStack_56f = CONCAT17(bVar16,(undefined7)uStack_56f);
          if (CONCAT44(uStack_244,fStack_248) != 0) {
            piVar43 = (int *)(CONCAT44(uStack_244,fStack_248) + 0x14);
            do {
              iVar20 = *piVar43;
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar43,0x10);
              if (bVar16) {
                *piVar43 = iVar20 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar20 + -1 == 0) {
              func_0x000109a848d4(&uStack_280);
            }
          }
          fStack_248 = 0.0;
          uStack_244 = 0;
          uStack_268._0_4_ = 0.0;
          uStack_268._4_4_ = 0.0;
          uStack_270._0_4_ = 0.0;
          uStack_270._4_4_ = 0.0;
          fStack_258 = 0.0;
          uStack_254 = 0;
          uStack_260._0_4_ = 0;
          uStack_260._4_4_ = 0;
          uStack_260 = (undefined ********)0x0;
          if (0 < (int)uStack_280._4_4_) {
            lVar42 = 0;
            do {
              *(int *)((long)pppppppuStack_240 + lVar42 * 4) = 0;
              lVar42 = lVar42 + 1;
            } while (lVar42 < (int)uStack_280._4_4_);
          }
          if ((undefined ********)pppppppuStack_238 != &pppppppuStack_230 &&
              pppppppuStack_238 != (undefined *******)0x0) {
            _free(pppppppuStack_238[-1]);
          }
        }
        func_0x0001093c8ab0(&ppppppppuStack_350);
        ppppppppuVar55 = param_2;
        FUN_10aac7324();
        if (1 < (int)ppppppppuVar55) {
          param_2[10] = (undefined *******)0x0;
        }
        appuStack_610[0] = &PTR_SUB_110b01d60;
        func_0x000107c2acd4(appuStack_610);
      }
      pppppppuVar53 = param_2[0x29];
      uStack_278._0_4_ = SUB84(pppppppuVar53,0);
      uStack_278._4_4_ = (float)((ulong)pppppppuVar53 >> 0x20);
      if (pppppppuVar53 != (undefined *******)0x0) {
        pppppppuVar53 = pppppppuVar53 + -1;
        do {
          cVar7 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(pppppppuVar53,0x10);
          if (bVar16) {
            *(int *)pppppppuVar53 = *(int *)pppppppuVar53 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      uStack_280 = &PTR_DAT_110b03dd8;
      func_0x000107c2ad00(&ppppppppuStack_510);
      pppppppuVar53 = (undefined *******)CONCAT44(uStack_508._4_4_,(float)uStack_508);
      uStack_508._0_4_ = SUB84(param_2[0x29],0);
      uStack_508._4_4_ = (float)((ulong)param_2[0x29] >> 0x20);
      param_2[0x29] = pppppppuVar53;
      param_2[0x28] = (undefined *******)ppppppppuStack_510;
      ppppppppuStack_510 = (undefined ********)&PTR_SUB_110b01d60;
      func_0x000107c2acd4(&ppppppppuStack_510);
      func_0x0001096ae880(param_2 + 0x28,0x11382aa58,&uStack_280);
      func_0x000107c2ad00(&ppppppppuStack_510);
      func_0x0001096ae880(&uStack_280,0x11382aa58,&ppppppppuStack_510);
      ppppppppuStack_510 = (undefined ********)&PTR_SUB_110b01d60;
      func_0x000107c2acd4(&ppppppppuStack_510);
      func_0x0001096e4f30(param_2 + 0x28);
      FUN_10a0ec6f0();
      uVar36 = *(ulong *)((long)param_2 + 0x154);
      bVar16 = ((ulong)ppppppppuVar32 & 1) != 0;
      uVar40 = uVar36 >> 0x20;
      if (bVar16) {
        uVar40 = uVar36;
      }
      uVar59 = uVar36 & 0xffffffff;
      if (bVar16) {
        uVar59 = uVar36 >> 0x20;
      }
      FUN_10aab041c(param_2 + 0xd,&ppuStack_5b8,uVar59 | uVar40 << 0x20);
      uVar34 = 0xa8;
      __Znwm();
      FUN_10a4ff9c4();
      *param_1 = uVar34;
      uStack_280 = &PTR_SUB_110b01d60;
      func_0x000107c2acd4(&uStack_280);
      FUN_10aac0340(&ppuStack_5b8);
      goto LAB_10aab6428;
    }
    ppuVar24 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar24 == (undefined *)0x0) {
      ppuVar24 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar56 = (long *)*ppuVar24;
      if ((plVar56 == (long *)0x0) || ((**(code **)(*plVar56 + 0x18))(), plVar56 == (long *)0x0))
      goto LAB_10aab38dc;
      plVar56 = plVar56 + 7;
    }
    else {
      plVar56 = (long *)(*ppuVar24 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar56 + 0x10) >> 1 & 1) == 0) goto LAB_10aab38dc;
  }
  else {
    FUN_10a00946c(&UNK_10f68de3e);
LAB_10aab64b4:
    ___stack_chk_fail();
LAB_10aab64b8:
    FUN_10a00946c(&UNK_10f68de65);
  }
  func_0x000107c2b054(&ppppppppuStack_400,&UNK_10f68de97);
  func_0x000107c2b054(&ppppppppuStack_320,&UNK_10f68da37);
  if ((long)uStack_3f0 < 0) {
    pcVar33 = "null";
    if (uStack_3f8 != (undefined8 *)0x0) {
      pcVar33 = (char *)ppppppppuStack_400;
    }
  }
  else {
    pcVar33 = "null";
    if (uStack_3f0._7_1_ != '\0') {
      pcVar33 = (char *)&ppppppppuStack_400;
    }
  }
  if ((long)uStack_310 < 0) {
    pcVar39 = "null";
    if (uStack_318 != (undefined ********)0x0) {
      pcVar39 = (char *)ppppppppuStack_320;
    }
  }
  else {
    pcVar39 = "null";
    if (uStack_310._7_1_ != '\0') {
      pcVar39 = (char *)&ppppppppuStack_320;
    }
  }
  ppppppppuStack_510 = (undefined ********)pcVar39;
  uStack_280 = (undefined **)pcVar33;
  FUN_10a224324(&uStack_280,&ppppppppuStack_510);
  if ((long)uStack_3f0 < 0) {
    if (uStack_3f8 == (undefined8 *)0x0) goto LAB_10aab6650;
    func_0x000107c3192c(&uStack_280,ppppppppuStack_400);
    uStack_278 = (undefined8 *)CONCAT44(uStack_278._4_4_,(float)uStack_278);
    uStack_270 = (undefined *******)CONCAT44(uStack_270._4_4_,(float)uStack_270);
LAB_10aab6814:
    uVar57 = 1;
    pppppppuVar53 = (undefined *******)uStack_268;
  }
  else {
    if (uStack_3f0._7_1_ != '\0') {
      uStack_280 = (undefined **)ppppppppuStack_400;
      uStack_278 = uStack_3f8;
      uStack_270 = uStack_3f0;
      goto LAB_10aab6814;
    }
LAB_10aab6650:
    uVar57 = 0;
    uStack_280 = (undefined **)((ulong)uStack_280 & 0xffffffffffffff00);
    pppppppuVar53 = (undefined *******)uStack_268;
  }
  uStack_268._4_4_ = (float)((ulong)pppppppuVar53 >> 0x20);
  uStack_268._1_3_ = (undefined3)((ulong)pppppppuVar53 >> 8);
  uStack_268._0_4_ = (float)CONCAT31(uStack_268._1_3_,uVar57);
  if ((long)uStack_310 < 0) {
    if (uStack_318 == (undefined ********)0x0) goto LAB_10aab6840;
    func_0x000107c3192c(&ppppppppuStack_510,ppppppppuStack_320);
LAB_10aab68f4:
    uVar57 = 1;
  }
  else {
    if (uStack_310._7_1_ != '\0') {
      uStack_508._0_4_ = SUB84(uStack_318,0);
      uStack_508._4_4_ = (float)((ulong)uStack_318 >> 0x20);
      ppppppppuStack_510 = ppppppppuStack_320;
      uStack_500 = uStack_310;
      goto LAB_10aab68f4;
    }
LAB_10aab6840:
    uVar57 = 0;
    ppppppppuStack_510 = (undefined ********)((ulong)ppppppppuStack_510 & 0xffffffffffffff00);
  }
  fStack_4f8 = (float)CONCAT31(fStack_4f8._1_3_,uVar57);
  FUN_10a234a0c(&uStack_280,&ppppppppuStack_510);
  ppppppppuVar55 = uStack_4f0;
LAB_10aab6e00:
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10aab6e04);
  uStack_4f0 = ppppppppuVar55;
  (*pcVar15)();
}



/* Entry: 10aab71cc; end: 10aab725f;  */

void FUN_10aab71cc(long param_1)

{
  undefined **ppuVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  ppuVar1 = &PTR_PTR_113306300;
  FUN_10ae079a0(0,&PTR_PTR_113306300);
  FUN_10ae07cd4(ppuVar1,&PTR_PTR_113306300);
  *(undefined4 *)(param_1 + 0x24) = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x0001096e4e8c(param_1 + 0x140,0x11382aac8,&uStack_40);
  puStack_28 = (undefined1 *)&uStack_40;
  FUN_10aada088(&puStack_28);
  FUN_10aab1c58(param_1 + 0x68);
  return;
}



/* Entry: 10aab7260; end: 10aab72d3;  */

void FUN_10aab7260(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10a22d054(uVar1,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(uVar1 + 0x4d) = *(undefined8 *)(param_2 + 0x4d);
    *(undefined8 *)(uVar1 + 0x48) = uVar4;
    *(undefined8 *)(uVar1 + 0x40) = uVar3;
    lVar2 = uVar1 + 0x58;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_10aad42c8(param_1,param_2);
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10aab72d4; end: 10aab73e3;  */

undefined8 * FUN_10aab72d4(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  float fVar3;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 **ppuStack_28;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined2 *)((long)param_1 + 0x14) = 0x101;
  *(undefined1 *)((long)param_1 + 0x16) = 2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[1] = 0xffffffff3da9fbe7;
  if (*(char *)(param_2 + 0x54) == '\x01') {
    FUN_10aab7260(param_1 + 0x14,param_2);
  }
  else {
    *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x40);
    puStack_38 = param_1;
    puStack_30 = param_1;
    if (*(uint *)(param_2 + 0x38) == 0xffffffff) {
      FUN_10a0d459c();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aab73cc);
      (*pcVar2)();
    }
    ppuStack_28 = &puStack_38;
    (*(code *)(&PTR_FUN_110c43760)[*(uint *)(param_2 + 0x38)])(&ppuStack_28,param_2);
    fVar3 = *(float *)(param_2 + 0x44);
    if (*(char *)(param_2 + 0x48) == '\0') {
      fVar3 = 1.0;
    }
    if (*(float *)(param_1 + 1) <= fVar3) {
      fVar3 = *(float *)(param_1 + 1);
    }
    *(float *)(param_1 + 1) = fVar3;
    uVar1 = *(undefined4 *)(param_2 + 0x4c);
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 0x50);
    *(undefined4 *)((long)param_1 + 0xc) = uVar1;
  }
  return param_1;
}



/* Entry: 10aab73e4; end: 10aab7883;  */

void FUN_10aab73e4(uint *param_1,uint *param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  code *pcVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint **ppuStack_b8;
  uint *puStack_b0;
  uint *puStack_a8;
  uint *puStack_a0;
  uint *puStack_98;
  uint *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_1[1];
  if (((((param_1[0x24] & 1) == 0) && ((int)uVar3 < 1)) && ((param_2[0x24] & 1) == 0)) &&
     ((int)param_2[1] < 1)) {
    lVar13 = *(long *)(param_2 + 0x28);
    lVar16 = *(long *)(param_2 + 0x2a);
    lVar17 = lVar16 - lVar13;
    if (0 < lVar17) {
      puVar8 = param_1 + 0x28;
      lVar15 = *(long *)(param_1 + 0x2a);
      if (*(long *)(param_1 + 0x2c) - lVar15 < lVar17) {
        lVar16 = lVar15 - *(long *)puVar8;
        uVar14 = (lVar17 >> 3) * 0x2e8ba2e8ba2e8ba3 + (lVar16 >> 3) * 0x2e8ba2e8ba2e8ba3;
        if (0x2e8ba2e8ba2e8ba < uVar14) goto LAB_10aab77f0;
        lVar10 = *(long *)(param_1 + 0x2c) - *(long *)puVar8 >> 3;
        uVar12 = lVar10 * 0x5d1745d1745d1746;
        if (uVar12 < uVar14 || uVar12 - uVar14 == 0) {
          uVar12 = uVar14;
        }
        if (0x1745d1745d1745c < (ulong)(lVar10 * 0x2e8ba2e8ba2e8ba3)) {
          uVar12 = 0x2e8ba2e8ba2e8ba;
        }
        puStack_90 = puVar8;
        if (uVar12 == 0) {
          puStack_b0 = (uint *)0x0;
        }
        else {
          FUN_10a22cf78();
          puStack_b0 = puVar8;
        }
        lVar16 = (long)puStack_b0 + lVar16;
        puVar8 = puStack_b0 + uVar12 * 0x16;
        lVar9 = lVar16 + lVar17;
        lVar10 = lVar16;
        puStack_a8 = (uint *)lVar16;
        puStack_98 = puVar8;
        do {
          FUN_10a22d054(lVar10,lVar13);
          uVar19 = *(undefined8 *)(lVar13 + 0x48);
          uVar18 = *(undefined8 *)(lVar13 + 0x40);
          *(undefined8 *)(lVar10 + 0x4d) = *(undefined8 *)(lVar13 + 0x4d);
          *(undefined8 *)(lVar10 + 0x48) = uVar19;
          *(undefined8 *)(lVar10 + 0x40) = uVar18;
          lVar10 = lVar10 + 0x58;
          lVar13 = lVar13 + 0x58;
          lVar17 = lVar17 + -0x58;
        } while (lVar17 != 0);
        FUN_10aad4408(lVar15,*(undefined8 *)(param_1 + 0x2a),lVar9);
        lVar13 = *(long *)(param_1 + 0x2a);
        *(long *)(param_1 + 0x2a) = lVar15;
        lVar16 = lVar16 + (*(long *)(param_1 + 0x28) - lVar15);
        FUN_10aad4408(*(long *)(param_1 + 0x28),lVar15,lVar16);
        puStack_b0 = *(uint **)(param_1 + 0x28);
        *(long *)(param_1 + 0x28) = lVar16;
        *(long *)(param_1 + 0x2a) = lVar9 + (lVar13 - lVar15);
        puStack_98 = *(uint **)(param_1 + 0x2c);
        *(uint **)(param_1 + 0x2c) = puVar8;
        puStack_a8 = puStack_b0;
        puStack_a0 = puStack_b0;
        FUN_10aad4560(&puStack_b0);
      }
      else {
        if (lVar13 != lVar16) {
          lVar17 = 0;
          do {
            lVar10 = lVar13 + lVar17;
            lVar9 = lVar15 + lVar17;
            FUN_10a22d054(lVar9,lVar10);
            uVar19 = *(undefined8 *)(lVar10 + 0x48);
            uVar18 = *(undefined8 *)(lVar10 + 0x40);
            *(undefined8 *)(lVar9 + 0x4d) = *(undefined8 *)(lVar10 + 0x4d);
            *(undefined8 *)(lVar9 + 0x48) = uVar19;
            *(undefined8 *)(lVar9 + 0x40) = uVar18;
            lVar17 = lVar17 + 0x58;
          } while (lVar13 + lVar17 != lVar16);
          lVar15 = lVar15 + lVar17;
        }
        *(long *)(param_1 + 0x2a) = lVar15;
      }
    }
  }
  else {
    *param_1 = *param_1 | *param_2;
    if ((int)uVar3 <= (int)param_2[1]) {
      uVar3 = param_2[1];
    }
    param_1[1] = uVar3;
    *(byte *)(param_1 + 0x26) = ((byte)param_1[0x26] | (byte)param_2[0x26]) & 1;
    fVar6 = (float)param_2[2];
    if ((float)param_1[2] <= (float)param_2[2]) {
      fVar6 = (float)param_1[2];
    }
    param_1[2] = (uint)fVar6;
    if (param_2[3] != 0xffffffff) {
      param_1[3] = param_2[3];
    }
    *(byte *)(param_1 + 4) = (byte)param_1[4] | (byte)param_2[4];
    if ((char)param_2[0x24] == '\x01') {
      if ((param_1[0x24] & 1) == 0) {
        if (*(char *)((long)param_2 + 0x4f) < '\0') {
          func_0x000107c3192c(&puStack_b0,*(undefined8 *)(param_2 + 0xe),
                              *(undefined8 *)(param_2 + 0x10));
        }
        else {
          puStack_a8 = *(uint **)(param_2 + 0x10);
          puStack_b0 = *(uint **)(param_2 + 0xe);
          puStack_a0 = *(uint **)(param_2 + 0x12);
        }
        puStack_90 = *(uint **)(param_2 + 0x16);
        puStack_98 = *(uint **)(param_2 + 0x14);
        if (*(long *)(param_2 + 0x16) != 0) {
          plVar1 = (long *)(*(long *)(param_2 + 0x16) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_88 = *(undefined8 *)(param_2 + 0x18);
        func_0x000107c2b124(auStack_80,param_2 + 0x1a);
        func_0x00010aad4670(param_1 + 0xe,&puStack_b0);
        func_0x000107c2ab24(auStack_80);
        puVar8 = puStack_90;
        if (puStack_90 != (uint *)0x0) {
          puVar2 = puStack_90 + 2;
          do {
            lVar13 = *(long *)puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *(long *)puVar2 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*(long *)puStack_90 + 0x10))(puStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv(puVar8);
          }
        }
        if ((long)puStack_a0 < 0) {
          __ZdlPv(puStack_b0);
        }
      }
      else {
        FUN_10aacf5b8(param_1 + 0xe,param_2 + 0xe);
      }
    }
    puVar11 = param_1 + 0x28;
    puVar8 = *(uint **)puVar11;
    puVar2 = *(uint **)(param_1 + 0x2a);
    if (puVar8 != puVar2) {
      puStack_a0 = *(uint **)(param_1 + 0x2c);
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
      puStack_b0 = puVar8;
      puStack_a8 = puVar2;
      do {
        *(undefined1 *)(puVar8 + 0x15) = 0;
        FUN_10a4c3c44(param_1,puVar8);
        puVar8 = puVar8 + 0x16;
      } while (puVar8 != puVar2);
      ppuStack_b8 = &puStack_b0;
      FUN_10a22d224(&ppuStack_b8);
    }
    lVar16 = *(long *)(param_2 + 0x2a);
    for (lVar13 = *(long *)(param_2 + 0x28); lVar13 != lVar16; lVar13 = lVar13 + 0x58) {
      FUN_10a22d054(&puStack_b0,lVar13);
      uStack_70 = *(undefined8 *)(lVar13 + 0x40);
      uStack_60 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x4d) >> 0x18);
      uStack_68 = (undefined5)*(undefined8 *)(lVar13 + 0x48);
      uStack_63 = (undefined3)((ulong)*(undefined8 *)(lVar13 + 0x48) >> 0x28);
      uStack_5c = 0;
      FUN_10a4c3c44(param_1,&puStack_b0);
      FUN_10a22d0f8(&puStack_b0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_10aab77f0:
  FUN_10a22cf64();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10aab77f8);
  (*pcVar7)();
}



/* Entry: 10aab7884; end: 10aab7913;  */

undefined * FUN_10aab7884(long *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    FUN_10a09f0cc(0x113835608,0);
  }
  else {
    (**(code **)(*param_1 + 0x80))(param_1,0x113835608);
  }
  puVar1 = (undefined1 *)0x113835608;
  FUN_10a08f69c();
  func_0x00010ae02ecc(0,*puVar1);
  ppuVar7 = &PTR_PTR_113306128;
  ppuVar6 = ppuVar7;
  FUN_10ae079a0();
  func_0x00010ae02edc();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined *)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar6[0x13],ppuVar6[0xf],
                  ppuVar6 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar9 = ppuVar6[0x12];
    puVar8 = ppuVar6[0xb];
    uVar2 = 0;
    _clock_gettime_nsec_np();
    uVar3 = uVar2;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar6 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar6 + 0xe);
    uStack_8c0 = uVar3 & 0xffffffff;
    ppuStack_8b0 = ppuVar6 + 0x10;
    puVar4 = *ppuVar6;
    ppuVar7 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar8;
    puStack_8d8 = puVar9;
    uStack_8d0 = (ulong)(puVar9 != (undefined *)0x0);
    uStack_8c8 = uVar2;
    FUN_10ae0784c(puVar4,ppuVar7,&puStack_900,&puStack_918);
  }
  iVar5 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar4);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10aab7914; end: 10aab7f1b;  */

void FUN_10aab7914(long param_1,long param_2,undefined4 *param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 uVar12;
  long *plVar13;
  long lStack_358;
  long lStack_350;
  undefined7 uStack_348;
  undefined1 uStack_341;
  undefined7 uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  long lStack_328;
  char cStack_320;
  undefined1 auStack_318 [96];
  undefined1 uStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined2 uStack_27c;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long lStack_260;
  undefined7 uStack_258;
  undefined1 uStack_251;
  undefined4 uStack_250;
  byte bStack_24c;
  byte bStack_24b;
  byte bStack_24a;
  undefined1 *puStack_248;
  undefined1 *puStack_240;
  byte bStack_230;
  undefined1 auStack_228 [96];
  undefined1 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined1 uStack_164;
  undefined2 uStack_163;
  undefined1 uStack_161;
  uint uStack_160;
  undefined1 uStack_15c;
  undefined2 uStack_15b;
  ulong uStack_158;
  ulong uStack_150;
  long lStack_148;
  char cStack_140;
  undefined1 auStack_138 [96];
  undefined1 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_260 = *param_4;
  uStack_258 = (undefined7)param_4[1];
  uVar10 = *(undefined8 *)((long)param_4 + 0xf);
  uStack_251 = (undefined1)uVar10;
  uStack_250 = (undefined4)((ulong)uVar10 >> 8);
  bStack_24c = (byte)((ulong)uVar10 >> 0x28);
  bStack_24b = (byte)((ulong)uVar10 >> 0x30);
  bStack_24a = (byte)((ulong)uVar10 >> 0x38);
  lStack_1a0 = param_2;
  FUN_10a22cb80(&puStack_248,param_4 + 3);
  FUN_10a22cd3c(auStack_228,param_4 + 7);
  uStack_1c8 = (undefined1)param_4[0x13];
  plVar13 = &lStack_1c0;
  lStack_1b8 = 0;
  uStack_1b0 = 0;
  lStack_1c0 = 0;
  FUN_10a22ce94(plVar13,param_4[0x14],param_4[0x15],
                (param_4[0x15] - param_4[0x14] >> 3) * 0x2e8ba2e8ba2e8ba3);
  bVar2 = **(int **)(param_1 + 8) == 0;
  bVar3 = (*(int **)(param_1 + 8))[1] == 0;
  if (bVar2 < bStack_24c) {
    bStack_24c = bVar2;
  }
  if (bVar3 < bStack_24b) {
    bStack_24b = bVar3;
  }
  if (2 < bStack_24a) {
    bStack_24a = 2;
  }
  plVar8 = &lStack_1a0;
  func_0x0001098ac018(plVar8,&UNK_10e4c8e74,0x1f,&uStack_178,0,0);
  piVar5 = (int *)0x1138355a0;
  FUN_10a08fec0();
  uVar11 = (uint)((ulong)plVar8 >> 0x1d) & 7;
  if (uVar11 != 2) {
    uVar11 = 7;
  }
  uVar1 = 7;
  if (*piVar5 != 0) {
    uVar1 = uVar11;
  }
  uStack_178 = (long *)CONCAT44(uVar1,0x7fffffff);
  uStack_170 = CONCAT44(uStack_170._4_4_,0x168);
  uStack_168 = 1;
  uStack_164 = 0;
  uStack_160 = uStack_160 & 0xffffff00;
  uStack_15c = 0;
  plVar6 = &lStack_1a0;
  func_0x0001098ac018(plVar6,&UNK_10e4a7ac1,0x23,&uStack_178,0,1);
  if ((*(byte *)((long)param_4 + 1) >> 1 & 1) == 0) {
    uVar12 = 0x40000000;
  }
  else {
    uStack_278 = 0;
    uStack_270 = 0;
    lStack_268 = 0;
    uStack_280 = 0;
    uStack_27c = 0;
    plVar7 = &lStack_1a0;
    func_0x0001098ac018(plVar7,&UNK_10e4c90fd,0x1d,&uStack_280,0,1,param_7,param_8,plVar13);
    uVar12 = SUB84(plVar7,0);
    if (lStack_268 < 0) {
      __ZdlPv(uStack_278);
    }
  }
  if ((char)param_4[0x12] == '\x01') {
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    plVar7 = &lStack_1a0;
    func_0x0001098ac018(plVar7,&UNK_10e4a7ae5,0x1f,&uStack_298,0,1,param_7,param_8,plVar13);
    uVar4 = SUB84(plVar7,0);
    uStack_178 = &uStack_298;
    FUN_10a22ff44(&uStack_178);
  }
  else {
    uVar4 = 0x40000000;
  }
  uStack_348 = uStack_258;
  lStack_350 = lStack_260;
  uStack_341 = uStack_251;
  uStack_340 = (undefined7)
               (CONCAT17(bStack_24a,
                         CONCAT16(bStack_24b,CONCAT15(bStack_24c,CONCAT41(uStack_250,uStack_251))))
               >> 8);
  lStack_358 = param_1;
  FUN_10a22cb80(&uStack_338,&puStack_248);
  FUN_10a22cd3c(auStack_318,auStack_228);
  uStack_2b8 = uStack_1c8;
  lStack_2a8 = 0;
  lStack_2a0 = 0;
  lStack_2b0 = 0;
  FUN_10a22ce94(&lStack_2b0,lStack_1c0,lStack_1b8,
                (lStack_1b8 - lStack_1c0 >> 3) * 0x2e8ba2e8ba2e8ba3);
  lStack_198 = 0;
  lStack_190 = 0;
  uStack_188 = 0;
  uStack_178 = (long *)CONCAT44((int)plVar8,(int)plVar6);
  uStack_170 = CONCAT44(uVar4,uVar12);
  FUN_10a26ebc0(&lStack_198,0,&uStack_178,&uStack_168,4);
  uStack_178 = (long *)lStack_358;
  uStack_168 = (undefined4)uStack_348;
  uStack_164 = (undefined1)((uint7)uStack_348 >> 0x20);
  uStack_163 = (undefined2)((uint7)uStack_348 >> 0x28);
  uStack_170 = lStack_350;
  uStack_161 = uStack_341;
  uStack_160 = (uint)uStack_340;
  uStack_15c = (undefined1)((uint7)uStack_340 >> 0x20);
  uStack_15b = (undefined2)((uint7)uStack_340 >> 0x28);
  uStack_158 = uStack_158 & 0xffffffffffffff00;
  cStack_140 = cStack_320 == '\x01';
  if ((bool)cStack_140) {
    uStack_150 = uStack_330;
    uStack_158 = uStack_338;
    lStack_148 = lStack_328;
    uStack_330 = 0;
    lStack_328 = 0;
    uStack_338 = 0;
  }
  FUN_10a230c9c(auStack_138,auStack_318);
  uStack_d8 = uStack_2b8;
  lStack_c8 = lStack_2a8;
  lStack_d0 = lStack_2b0;
  lStack_c0 = lStack_2a0;
  lStack_2a8 = 0;
  lStack_2a0 = 0;
  lStack_2b0 = 0;
  pcStack_b8 = FUN_10aad4a8c;
  ppuStack_b0 = &PTR_FUN_110c43770;
  plVar8 = (long *)0xc0;
  __Znwm();
  plStack_180 = &lStack_d0;
  *plVar8 = (long)uStack_178;
  plVar8[2] = CONCAT17(uStack_161,CONCAT25(uStack_163,CONCAT14(uStack_164,uStack_168)));
  plVar8[1] = uStack_170;
  *(ulong *)((long)plVar8 + 0x17) =
       CONCAT26(uStack_15b,CONCAT15(uStack_15c,CONCAT41(uStack_160,uStack_161)));
  *(undefined1 *)(plVar8 + 4) = 0;
  *(undefined1 *)(plVar8 + 7) = 0;
  if (cStack_140 == '\x01') {
    plVar8[5] = uStack_150;
    plVar8[4] = uStack_158;
    plVar8[6] = lStack_148;
    uStack_150 = 0;
    lStack_148 = 0;
    uStack_158 = 0;
    *(undefined1 *)(plVar8 + 7) = 1;
  }
  FUN_10a230c9c(plVar8 + 8,auStack_138);
  *(undefined1 *)(plVar8 + 0x14) = uStack_d8;
  plVar8[0x16] = lStack_c8;
  plVar8[0x15] = lStack_d0;
  plVar8[0x17] = lStack_c0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  lStack_d0 = 0;
  param_2 = param_2 + 0x18;
  plStack_a8 = plVar8;
  FUN_10a4ff8a0(param_2,&pcStack_b8,&lStack_198);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  FUN_10a22d224(&plStack_180);
  FUN_10a22ce48(auStack_138);
  if ((cStack_140 == '\x01') && (uStack_158 != 0)) {
    uStack_150 = uStack_158;
    __ZdlPv();
  }
  if (lStack_198 != 0) {
    lStack_190 = lStack_198;
    __ZdlPv();
  }
  *param_3 = (int)param_2;
  uStack_178 = &lStack_2b0;
  FUN_10a22d224(&uStack_178);
  FUN_10a22ce48(auStack_318);
  if ((cStack_320 == '\x01') && (uStack_338 != 0)) {
    uStack_330 = uStack_338;
    __ZdlPv();
  }
  uStack_178 = plVar13;
  FUN_10a22d224(&uStack_178);
  puVar9 = auStack_228;
  FUN_10a22ce48(puVar9);
  if (((bStack_230 & 1) != 0) && (puVar9 = puStack_248, puStack_248 != (undefined1 *)0x0)) {
    puStack_240 = puStack_248;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  uStack_178 = &lStack_358;
  FUN_10a22ff44(&uStack_178);
  FUN_10a26dcbc(&lStack_260);
  do {
    do {
      do {
        __Unwind_Resume(puVar9);
        FUN_10a22ce48(auStack_228);
      } while ((bStack_230 & 1) == 0);
    } while (puStack_248 == (undefined1 *)0x0);
    puStack_240 = puStack_248;
    __ZdlPv();
  } while( true );
}



/* Entry: 10aab7f1c; end: 10aab7f77;  */

long FUN_10aab7f1c(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0xa8;
  FUN_10a22d224(&lStack_28);
  FUN_10a22ce48(param_1 + 0x40);
  if ((*(char *)(param_1 + 0x38) == '\x01') && (*(long *)(param_1 + 0x20) != 0)) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aab7f78; end: 10aab7fe3;  */

long FUN_10aab7f78(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x108);
  if (lVar2 == 0) {
    lVar2 = 0x10;
    __Znwm();
    FUN_10a19eb18();
    lVar1 = *(long *)(param_1 + 0x108);
    *(long *)(param_1 + 0x108) = lVar2;
    if (lVar1 != 0) {
      func_0x00010a237b14(param_1 + 0x108);
      lVar2 = *(long *)(param_1 + 0x108);
    }
  }
  return lVar2;
}



/* Entry: 10aab7fe4; end: 10aab8177;  */

void FUN_10aab7fe4(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_109d1918c(&plStack_58,param_2 + 0x110);
  FUN_109d1918c(&plStack_60,param_2 + 0x40);
  uStack_38 = 2;
  FUN_10a235b1c(&plStack_50,&uStack_38);
  plVar5 = (long *)(lStack_40 + 8);
  if (*plVar5 != 0) {
    func_0x0001092b4274(plVar5);
  }
  *plVar5 = lStack_48;
  lStack_48 = 0;
  func_0x00010a235d1c(lStack_40,0,&plStack_58);
  func_0x00010a235d1c(lStack_40,1,&plStack_60);
  *param_1 = plStack_50;
  plStack_50 = (long *)0x0;
  if (lStack_48 != 0) {
    func_0x0001092b4274(&lStack_48);
    if (plStack_50 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_50 + 1);
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
          (**(code **)(*plStack_50 + 8))();
        }
      }
    }
  }
  if (plStack_60 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_60 + 1);
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
        (**(code **)(*plStack_60 + 8))();
      }
    }
  }
  if (plStack_58 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_58 + 1);
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
        (**(code **)(*plStack_58 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10aab8178; end: 10aab817f;  */

void FUN_10aab8178(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_109d1918c(&plStack_58,param_2 + 0xf8);
  FUN_109d1918c(&plStack_60,param_2 + 0x28);
  uStack_38 = 2;
  FUN_10a235b1c(&plStack_50,&uStack_38);
  plVar5 = (long *)(lStack_40 + 8);
  if (*plVar5 != 0) {
    func_0x0001092b4274(plVar5);
  }
  *plVar5 = lStack_48;
  lStack_48 = 0;
  func_0x00010a235d1c(lStack_40,0,&plStack_58);
  func_0x00010a235d1c(lStack_40,1,&plStack_60);
  *param_1 = plStack_50;
  plStack_50 = (long *)0x0;
  if (lStack_48 != 0) {
    func_0x0001092b4274(&lStack_48);
    if (plStack_50 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_50 + 1);
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
          (**(code **)(*plStack_50 + 8))();
        }
      }
    }
  }
  if (plStack_60 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_60 + 1);
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
        (**(code **)(*plStack_60 + 8))();
      }
    }
  }
  if (plStack_58 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_58 + 1);
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
        (**(code **)(*plStack_58 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10aab8180; end: 10aab82e3;  */

undefined ***
FUN_10aab8180(undefined ***param_1,undefined4 param_2,undefined8 *param_3,undefined **param_4)

{
  byte *pbVar1;
  ulong *puVar2;
  undefined ***pppuVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long *plVar10;
  uint uVar11;
  undefined **ppuVar12;
  ulong uVar13;
  long *plStack_178;
  code *pcStack_170;
  code *pcStack_168;
  undefined ***pppuStack_160;
  code *pcStack_158;
  long *plStack_150;
  long *plStack_148;
  code *pcStack_140;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined ***pppuStack_108;
  long lStack_d8;
  undefined ***pppuStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined ***pppuStack_b0;
  undefined ***pppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  long lStack_48;
  
  pppuVar8 = (undefined ***)&uStack_90;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_FUN_110c42cc0;
  param_1[1] = (undefined **)0x0;
  param_1[2] = (undefined **)0x0;
  param_1[3] = &PTR_FUN_110c42d88;
  ppuVar12 = (undefined **)*param_3;
  *param_3 = 0;
  param_1[4] = ppuVar12;
  uStack_90 = (undefined **)CONCAT44(uStack_90._4_4_,7);
  param_1[5] = (undefined **)0x0;
  param_1[6] = (undefined **)0x0;
  param_1[7] = (undefined **)0x0;
  FUN_10aad4cb4(param_1 + 5,&uStack_90,(long)&uStack_90 + 4,1);
  puStack_88 = &UNK_1053a6a3c;
  ppuStack_80 = &PTR_DAT_110ae9180;
  uStack_90 = param_4;
  func_0x000109d18d1c(param_1 + 8,&UNK_10f68dabc,7,&uStack_90);
  func_0x0001092ba41c(&uStack_90);
  param_1[0x1f] = (undefined **)0x0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  param_1[0x21] = (undefined **)0x0;
  puStack_88 = &UNK_1053a6a3c;
  ppuStack_80 = &PTR_DAT_110ae9180;
  uStack_90 = param_4;
  FUN_109d228cc(param_1 + 0x22,&UNK_10f68dac4,7,1,&uStack_90);
  func_0x0001092ba41c();
  param_1[0x3d] = (undefined **)0x0;
  param_1[0x3a] = (undefined **)0x0;
  param_1[0x39] = (undefined **)0x0;
  param_1[0x3c] = (undefined **)0x0;
  param_1[0x3b] = (undefined **)0x0;
  *(undefined4 *)((long)param_1 + 0x104) = param_2;
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar11 = 0;
  FUN_10aabb088(&UNK_1053a6a3c);
  if (param_1[2] != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  pppuVar9 = pppuVar8;
  __Unwind_Resume();
  ppuStack_c8 = &PTR_DAT_110ae9180;
  puStack_c0 = &UNK_1053a6a3c;
  pcStack_98 = FUN_10aab82e4;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = pppuVar9[0x21];
  pppuStack_d0 = param_1 + 0x20;
  ppuStack_b8 = param_4;
  pppuStack_b0 = pppuVar8;
  pppuStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  pppuVar9[0x21] = (undefined **)0x0;
  pppuVar8 = pppuVar9;
  if (ppuVar12 != (undefined **)0x0) {
    pppuVar8 = pppuVar9 + 0x21;
    func_0x00010a237b14(pppuVar8);
  }
  pbVar1 = (byte *)((long)pppuVar9 + 0x101);
  do {
    bVar4 = *pbVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((bVar4 & 1) == 0) {
    pcStack_118 = FUN_10aade594;
    ppuStack_110 = &PTR_DAT_110c43e28;
    pppuStack_108 = pppuVar9;
    if ((pppuVar9[4] == (undefined **)0x0) || (((ulong)pppuVar9[0x20] & 1) == 0)) {
      FUN_10aade594(&pcStack_118);
      (*(code *)(*pppuVar9)[0x13])(pppuVar9);
LAB_10aab84c0:
      pppuVar8 = &ppuStack_110;
      (*(code *)*ppuStack_110)(pppuVar8);
      goto LAB_10aab84d0;
    }
    pppuVar8 = pppuVar9;
    (*(code *)(*pppuVar9)[0x12])();
    if ((uVar11 | (uint)pppuVar8) != 1) {
      pcStack_158 = pcStack_118;
      (*(code *)ppuStack_110[3])(&plStack_150,&ppuStack_110);
      pppuVar8 = pppuVar9 + 0x22;
      ppuVar12 = pppuVar9[0x24];
      if (ppuVar12 == (undefined **)0x0) {
        pcVar7 = (code *)0x50;
        __Znwm();
        *(code **)pcVar7 = pcStack_158;
        (*(code *)plStack_150[2])(pcVar7 + 8,&plStack_150);
        *(long *)(pcVar7 + 0x48) = 0x10aade67c;
        pcStack_170 = FUN_10aade608;
        pcStack_168 = pcVar7;
        pppuStack_160 = pppuVar8;
        (*(code *)**pppuVar8)(pppuVar8,&pcStack_170);
      }
      else {
        plStack_178 = (long *)0x0;
        (**(code **)(*ppuVar12 + 0x28))(ppuVar12,0,&plStack_178);
        if (plStack_178 != (long *)0x0) {
          func_0x0001092af97c(&plStack_178);
          goto LAB_10aab87bc;
        }
        pcVar7 = (code *)0x58;
        __Znwm();
        *(code **)pcVar7 = pcStack_158;
        (*(code *)plStack_150[2])(pcVar7 + 8,&plStack_150);
        *(code **)(pcVar7 + 0x48) = FUN_10aade648;
        *(undefined ***)(pcVar7 + 0x50) = ppuVar12;
        pcStack_170 = FUN_10aade5d8;
        pcStack_168 = pcVar7;
        pppuStack_160 = pppuVar8;
        (*(code *)**pppuVar8)(pppuVar8,&pcStack_170);
        __ZNSt13exception_ptrD1Ev(&plStack_178);
      }
      plStack_178 = (long *)0x0;
      __ZNSt13exception_ptrD1Ev(&plStack_178);
      (*(code *)*plStack_150)(&plStack_150);
      goto LAB_10aab84c0;
    }
    ppuVar12 = pppuVar9[0x24];
    plStack_150 = (long *)0x0;
    plStack_148 = (long *)0x0;
    if (ppuVar12 == (undefined **)0x0) {
      plVar10 = (long *)0xc0;
      __Znwm();
      plVar10[2] = 0;
      plVar10[1] = 0x200000006;
      *(undefined2 *)(plVar10 + 3) = 4;
      plVar10[5] = 0;
      plVar10[4] = 0;
      plVar10[7] = 0;
      plVar10[6] = 0;
      plVar10[9] = 0;
      plVar10[8] = 0;
      plVar10[0xb] = 0;
      plVar10[10] = 0;
      plVar10[0xd] = 0;
      plVar10[0xc] = 0;
      plVar10[0xf] = 0;
      plVar10[0xe] = 0;
      plVar10[0x10] = 0;
      plVar10[0x11] = (long)(plVar10 + 3);
      plVar10[0x12] = 0;
      *(undefined2 *)(plVar10 + 0x13) = 0;
      *plVar10 = (long)&PTR_DAT_110c437d0;
      pcStack_158 = (code *)(plVar10 + 0x14);
      *(code ***)pcStack_158 = &pcStack_118;
      *(undefined1 *)(plVar10 + 0x16) = 1;
      plVar10[0x17] = 0;
      pcStack_140 = FUN_10aad4dd4;
      plStack_150 = plVar10;
      plStack_148 = plVar10;
LAB_10aab8618:
      pcVar7 = pcStack_158;
      pppuVar3 = pppuVar9 + 0x22;
      if (*(long *)(pcStack_158 + 0x18) != 0) {
        func_0x0001092b4274();
      }
      *(long **)(pcVar7 + 0x18) = plStack_148;
      plStack_148 = (long *)0x0;
      pcStack_170 = pcStack_140;
      pcStack_168 = pcStack_158;
      pppuStack_160 = pppuVar3;
      (*(code *)**pppuVar3)(pppuVar3,&pcStack_170);
      plStack_178 = plStack_150;
      plStack_150 = (long *)0x0;
      if ((plStack_148 != (long *)0x0) &&
         (func_0x0001092b4274(&plStack_148), plStack_150 != (long *)0x0)) {
        puVar2 = (ulong *)(plStack_150 + 1);
        do {
          uVar13 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar13 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar13 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plStack_150 + 8))();
          }
        }
      }
      FUN_109d1a244(&plStack_178);
      FUN_10a09b344(&plStack_178);
      if (plStack_178 != (long *)0x0) {
        puVar2 = (ulong *)(plStack_178 + 1);
        do {
          uVar13 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar13 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar13 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plStack_178 + 8))();
          }
        }
      }
      if ((uint)pppuVar8 != 0) {
        (*(code *)(*pppuVar9)[0x13])(pppuVar9);
      }
      goto LAB_10aab84c0;
    }
    pcStack_170 = (code *)0x0;
    (**(code **)(*ppuVar12 + 0x28))(ppuVar12,0,&pcStack_170);
    if (pcStack_170 == (code *)0x0) {
      plVar10 = (long *)0xc8;
      __Znwm();
      *(undefined2 *)(plVar10 + 3) = 4;
      plVar10[2] = 0;
      plVar10[1] = 0x200000006;
      plVar10[5] = 0;
      plVar10[4] = 0;
      plVar10[7] = 0;
      plVar10[6] = 0;
      plVar10[9] = 0;
      plVar10[8] = 0;
      plVar10[0xb] = 0;
      plVar10[10] = 0;
      plVar10[0xd] = 0;
      plVar10[0xc] = 0;
      plVar10[0xf] = 0;
      plVar10[0xe] = 0;
      plVar10[0x10] = 0;
      plVar10[0x11] = (long)(plVar10 + 3);
      plVar10[0x12] = 0;
      *(undefined2 *)(plVar10 + 0x13) = 0;
      plVar10[0x14] = (long)&pcStack_118;
      *plVar10 = (long)&PTR_FUN_110c43798;
      *(undefined1 *)(plVar10 + 0x16) = 1;
      plVar10[0x17] = 0;
      plVar10[0x18] = (long)ppuVar12;
      if (plStack_150 != (long *)0x0) {
        puVar2 = (ulong *)(plStack_150 + 1);
        do {
          uVar13 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar13 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar13 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plStack_150 + 8))();
          }
        }
      }
      plStack_150 = plVar10;
      if (plStack_148 != (long *)0x0) {
        func_0x0001092b4274(&plStack_148);
      }
      pcStack_140 = (code *)0x10aad4da4;
      pcStack_158 = (code *)(plVar10 + 0x14);
      plStack_148 = plVar10;
      __ZNSt13exception_ptrD1Ev(&pcStack_170);
      goto LAB_10aab8618;
    }
  }
  else {
LAB_10aab84d0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return pppuVar8;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(&pcStack_170);
LAB_10aab87bc:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10aab87c0);
  (*pcVar7)();
}



/* Entry: 10aab82e4; end: 10aab8883;  */

void FUN_10aab82e4(long *param_1,uint param_2)

{
  byte *pbVar1;
  ulong *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  long *plStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  code *pcStack_b0;
  code *pcStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_1[0x21];
  param_1[0x21] = 0;
  if (lVar9 != 0) {
    func_0x00010a237b14(param_1 + 0x21);
  }
  pbVar1 = (byte *)((long)param_1 + 0x101);
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
    pcStack_88 = FUN_10aade594;
    ppuStack_80 = &PTR_DAT_110c43e28;
    plStack_78 = param_1;
    if ((param_1[4] == 0) || ((*(byte *)(param_1 + 0x20) & 1) == 0)) {
      FUN_10aade594(&pcStack_88);
      (**(code **)(*param_1 + 0x98))(param_1);
LAB_10aab84c0:
      (*(code *)*ppuStack_80)(&ppuStack_80);
      goto LAB_10aab84d0;
    }
    plVar7 = param_1;
    (**(code **)(*param_1 + 0x90))();
    if ((param_2 | (uint)plVar7) != 1) {
      pcStack_c8 = pcStack_88;
      (*(code *)ppuStack_80[3])(&plStack_c0,&ppuStack_80);
      plVar7 = param_1 + 0x22;
      plVar11 = (long *)param_1[0x24];
      if (plVar11 == (long *)0x0) {
        pcVar6 = (code *)0x50;
        __Znwm();
        *(code **)pcVar6 = pcStack_c8;
        (*(code *)plStack_c0[2])(pcVar6 + 8,&plStack_c0);
        *(long *)(pcVar6 + 0x48) = 0x10aade67c;
        pcStack_e0 = FUN_10aade608;
        pcStack_d8 = pcVar6;
        plStack_d0 = plVar7;
        (**(code **)*plVar7)(plVar7,&pcStack_e0);
      }
      else {
        plStack_e8 = (long *)0x0;
        (**(code **)(*plVar11 + 0x28))(plVar11,0,&plStack_e8);
        if (plStack_e8 != (long *)0x0) {
          func_0x0001092af97c(&plStack_e8);
          goto LAB_10aab87bc;
        }
        pcVar6 = (code *)0x58;
        __Znwm();
        *(code **)pcVar6 = pcStack_c8;
        (*(code *)plStack_c0[2])(pcVar6 + 8,&plStack_c0);
        *(code **)(pcVar6 + 0x48) = FUN_10aade648;
        *(long **)(pcVar6 + 0x50) = plVar11;
        pcStack_e0 = FUN_10aade5d8;
        pcStack_d8 = pcVar6;
        plStack_d0 = plVar7;
        (**(code **)*plVar7)(plVar7,&pcStack_e0);
        __ZNSt13exception_ptrD1Ev(&plStack_e8);
      }
      plStack_e8 = (long *)0x0;
      __ZNSt13exception_ptrD1Ev(&plStack_e8);
      (*(code *)*plStack_c0)(&plStack_c0);
      goto LAB_10aab84c0;
    }
    plVar11 = (long *)param_1[0x24];
    plStack_c0 = (long *)0x0;
    plStack_b8 = (long *)0x0;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0xc0;
      __Znwm();
      plVar11[2] = 0;
      plVar11[1] = 0x200000006;
      *(undefined2 *)(plVar11 + 3) = 4;
      plVar11[5] = 0;
      plVar11[4] = 0;
      plVar11[7] = 0;
      plVar11[6] = 0;
      plVar11[9] = 0;
      plVar11[8] = 0;
      plVar11[0xb] = 0;
      plVar11[10] = 0;
      plVar11[0xd] = 0;
      plVar11[0xc] = 0;
      plVar11[0xf] = 0;
      plVar11[0xe] = 0;
      plVar11[0x10] = 0;
      plVar11[0x11] = (long)(plVar11 + 3);
      plVar11[0x12] = 0;
      *(undefined2 *)(plVar11 + 0x13) = 0;
      *plVar11 = (long)&PTR_DAT_110c437d0;
      pcStack_c8 = (code *)(plVar11 + 0x14);
      *(code ***)pcStack_c8 = &pcStack_88;
      *(undefined1 *)(plVar11 + 0x16) = 1;
      plVar11[0x17] = 0;
      pcStack_b0 = FUN_10aad4dd4;
      plStack_c0 = plVar11;
      plStack_b8 = plVar11;
LAB_10aab8618:
      pcVar6 = pcStack_c8;
      plVar11 = param_1 + 0x22;
      if (*(long *)(pcStack_c8 + 0x18) != 0) {
        func_0x0001092b4274();
      }
      *(long **)(pcVar6 + 0x18) = plStack_b8;
      plStack_b8 = (long *)0x0;
      pcStack_e0 = pcStack_b0;
      pcStack_d8 = pcStack_c8;
      plStack_d0 = plVar11;
      (**(code **)*plVar11)(plVar11,&pcStack_e0);
      plStack_e8 = plStack_c0;
      plStack_c0 = (long *)0x0;
      if ((plStack_b8 != (long *)0x0) &&
         (func_0x0001092b4274(&plStack_b8), plStack_c0 != (long *)0x0)) {
        puVar2 = (ulong *)(plStack_c0 + 1);
        do {
          uVar10 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar10 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar10 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plStack_c0 + 8))();
          }
        }
      }
      FUN_109d1a244(&plStack_e8);
      FUN_10a09b344(&plStack_e8);
      if (plStack_e8 != (long *)0x0) {
        puVar2 = (ulong *)(plStack_e8 + 1);
        do {
          uVar10 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar10 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar10 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plStack_e8 + 8))();
          }
        }
      }
      if ((uint)plVar7 != 0) {
        (**(code **)(*param_1 + 0x98))(param_1);
      }
      goto LAB_10aab84c0;
    }
    pcStack_e0 = (code *)0x0;
    (**(code **)(*plVar11 + 0x28))(plVar11,0,&pcStack_e0);
    if (pcStack_e0 == (code *)0x0) {
      plVar8 = (long *)0xc8;
      __Znwm();
      *(undefined2 *)(plVar8 + 3) = 4;
      plVar8[2] = 0;
      plVar8[1] = 0x200000006;
      plVar8[5] = 0;
      plVar8[4] = 0;
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
      plVar8[0x10] = 0;
      plVar8[0x11] = (long)(plVar8 + 3);
      plVar8[0x12] = 0;
      *(undefined2 *)(plVar8 + 0x13) = 0;
      plVar8[0x14] = (long)&pcStack_88;
      *plVar8 = (long)&PTR_FUN_110c43798;
      *(undefined1 *)(plVar8 + 0x16) = 1;
      plVar8[0x17] = 0;
      plVar8[0x18] = (long)plVar11;
      if (plStack_c0 != (long *)0x0) {
        puVar2 = (ulong *)(plStack_c0 + 1);
        do {
          uVar10 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar10 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar10 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plStack_c0 + 8))();
          }
        }
      }
      plStack_c0 = plVar8;
      if (plStack_b8 != (long *)0x0) {
        func_0x0001092b4274(&plStack_b8);
      }
      pcStack_b0 = (code *)0x10aad4da4;
      pcStack_c8 = (code *)(plVar8 + 0x14);
      plStack_b8 = plVar8;
      __ZNSt13exception_ptrD1Ev(&pcStack_e0);
      goto LAB_10aab8618;
    }
  }
  else {
LAB_10aab84d0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(&pcStack_e0);
LAB_10aab87bc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aab87c0);
  (*pcVar6)();
}



/* Entry: 10aab8884; end: 10aab8a43;  */

void FUN_10aab8884(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  lVar5 = *(long *)(param_2 + 0x88);
  if (lVar5 == 0) {
    if (*(char *)(*(long *)(param_2 + 0x48) + 8) == '\x01') {
      (**(code **)(param_2 + 0x40))(auStack_40);
      func_0x00010a099dfc((long *)(param_2 + 0x88),auStack_40);
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
        if (lVar5 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
      *(code **)(param_2 + 0x40) = FUN_10aad5004;
      (*(code *)**(undefined8 **)(param_2 + 0x48))((long *)(param_2 + 0x48));
      *(undefined ***)(param_2 + 0x48) = &PTR_DAT_110950c70;
      lVar5 = *(long *)(param_2 + 0x90);
      lVar4 = *(long *)(param_2 + 0x88);
      param_1[1] = *(long *)(param_2 + 0x90);
      *param_1 = lVar4;
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
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
    }
  }
  else {
    lVar4 = *(long *)(param_2 + 0x90);
    *param_1 = lVar5;
    param_1[1] = lVar4;
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



/* Entry: 10aab8a44; end: 10aab8abf;  */

long FUN_10aab8a44(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[0x10];
  if (lVar1 == 0) {
    if (*(char *)(param_1[1] + 8) == '\x01') {
      puVar2 = param_1;
      (*(code *)*param_1)();
      param_1[0x10] = puVar2;
      *param_1 = 0x10aad5010;
      (**(code **)param_1[1])(param_1 + 1);
      param_1[1] = &PTR_DAT_110950c70;
      lVar1 = param_1[0x10];
    }
    else {
      lVar1 = 0;
    }
  }
  return lVar1;
}



/* Entry: 10aab8ac0; end: 10aab9bcb;  */

void FUN_10aab8ac0(undefined8 *param_1,code ******param_2,long param_3,undefined8 *param_4,
                  ulong param_5)

{
  code *****pppppcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  code cVar5;
  char cVar6;
  ulong uVar7;
  byte bVar8;
  undefined *puVar9;
  code *pcVar10;
  bool bVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  code ******ppppppcVar16;
  long *plVar17;
  undefined1 uVar18;
  ulong uVar19;
  char *pcVar20;
  long lVar21;
  code ****ppppcVar22;
  code ****ppppcVar23;
  long lVar24;
  code *****pppppcVar25;
  undefined8 *puVar26;
  code ******ppppppcVar27;
  code *****pppppcVar28;
  ulong uVar29;
  int iVar30;
  undefined8 uVar31;
  undefined8 uStack_200;
  code ****ppppcStack_1f8;
  undefined7 uStack_1f0;
  char cStack_1e9;
  undefined1 uStack_1e0;
  undefined1 uStack_1df;
  undefined2 uStack_1de;
  int iStack_1dc;
  code ****ppppcStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined1 auStack_1c0 [8];
  long *plStack_1b8;
  code ****ppppcStack_1b0;
  code ****ppppcStack_1a8;
  code *****pppppcStack_1a0;
  code ****ppppcStack_198;
  undefined8 uStack_190;
  code *****pppppcStack_188;
  code ****ppppcStack_180;
  code *****pppppcStack_178;
  code ****ppppcStack_170;
  undefined4 uStack_168;
  code *****pppppcStack_160;
  code *****pppppcStack_158;
  code *****pppppcStack_150;
  code *****pppppcStack_148;
  code ****ppppcStack_140;
  code *****pppppcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  code *****pppppcStack_e0;
  undefined8 uStack_d8;
  code ****ppppcStack_d0;
  code *pcStack_c0;
  code ****ppppcStack_b8;
  code *****pppppcStack_b0;
  code *****pppppcStack_a8;
  code ****ppppcStack_a0;
  code *****pppppcStack_98;
  code ****ppppcStack_90;
  undefined4 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar26 = param_1;
  FUN_10ad055a0();
  if ((int)puVar26 != 0) {
    ppuVar12 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar12 == (undefined *)0x0) {
      ppuVar12 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar17 = (long *)*ppuVar12;
      if ((plVar17 == (long *)0x0) || ((**(code **)(*plVar17 + 0x18))(), plVar17 == (long *)0x0))
      goto LAB_10aab8b38;
      plVar17 = plVar17 + 7;
    }
    else {
      plVar17 = (long *)(*ppuVar12 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar17 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppcStack_1a0,&UNK_10f68dacc);
      func_0x000107c2b054(&uStack_1e0,&UNK_10f68da37);
      if ((long)uStack_190 < 0) {
        pcVar20 = "null";
        if ((code *****)ppppcStack_198 != (code *****)0x0) {
          pcVar20 = (char *)pppppcStack_1a0;
        }
      }
      else {
        pcVar20 = "null";
        if (uStack_190._7_1_ != '\0') {
          pcVar20 = (char *)&pppppcStack_1a0;
        }
      }
      if ((long)uStack_1d0 < 0) {
        pcStack_c0 = (code *)"null";
        if ((code *****)ppppcStack_1d8 != (code *****)0x0) {
          pcStack_c0 = (code *)CONCAT44(iStack_1dc,
                                        CONCAT22(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
        }
      }
      else {
        pcStack_c0 = (code *)"null";
        if (uStack_1d0._7_1_ != '\0') {
          pcStack_c0 = (code *)&uStack_1e0;
        }
      }
      pppppcStack_160 = (code *****)pcVar20;
      FUN_10a224324(&pppppcStack_160,&pcStack_c0);
      if ((long)uStack_190 < 0) {
        if ((code *****)ppppcStack_198 == (code *****)0x0) goto LAB_10aab9890;
        func_0x000107c3192c(&pppppcStack_160,pppppcStack_1a0);
LAB_10aab9920:
        uVar18 = 1;
      }
      else {
        if (uStack_190._7_1_ != '\0') {
          pppppcStack_158 = (code *****)ppppcStack_198;
          pppppcStack_160 = pppppcStack_1a0;
          pppppcStack_150 = (code *****)uStack_190;
          goto LAB_10aab9920;
        }
LAB_10aab9890:
        uVar18 = 0;
        pppppcStack_160 = (code *****)((ulong)pppppcStack_160 & 0xffffffffffffff00);
      }
      pppppcStack_148 = (code *****)CONCAT71(pppppcStack_148._1_7_,uVar18);
      if ((long)uStack_1d0 < 0) {
        if ((code *****)ppppcStack_1d8 == (code *****)0x0) goto LAB_10aab994c;
        func_0x000107c3192c(&pcStack_c0,
                            CONCAT44(iStack_1dc,CONCAT22(uStack_1de,CONCAT11(uStack_1df,uStack_1e0))
                                    ));
LAB_10aab99b0:
        uVar18 = 1;
      }
      else {
        if (uStack_1d0._7_1_ != '\0') {
          pcStack_c0 = (code *)CONCAT44(iStack_1dc,
                                        CONCAT22(uStack_1de,CONCAT11(uStack_1df,uStack_1e0)));
          ppppcStack_b8 = ppppcStack_1d8;
          pppppcStack_b0 = (code *****)uStack_1d0;
          goto LAB_10aab99b0;
        }
LAB_10aab994c:
        uVar18 = 0;
        pcStack_c0 = (code *)((ulong)pcStack_c0 & 0xffffffffffffff00);
      }
      pppppcStack_a8 = (code *****)CONCAT71(pppppcStack_a8._1_7_,uVar18);
      FUN_10a234a0c(&pppppcStack_160,&pcStack_c0);
      goto LAB_10aab99ec;
    }
  }
LAB_10aab8b38:
  puVar9 = PTR___tlv_bootstrap_11340d750;
  ppuVar12 = &PTR___tlv_bootstrap_11340d750;
  ppuVar13 = ppuVar12;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar14 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar13 & 1) == 0) {
    ppuVar13 = ppuVar14;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar13,0x100000000);
    (*(code *)puVar9)();
    *(undefined1 *)ppuVar12 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar26 = (undefined8 *)ppuVar14[2];
  if (puVar26 == (undefined8 *)0x0) {
    uStack_1e0 = (code)0x0;
    uStack_1d0 = (code ******)0x0;
    uStack_1c8 = 0;
  }
  else {
    cVar5 = *(code *)(puVar26[1] + 0x17);
    uStack_1de = 7;
    ppuVar12 = &PTR___tlv_bootstrap_11340dd08;
    uStack_1e0 = cVar5;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar30 = *(int *)ppuVar12;
    if (*(int *)ppuVar12 == 0) {
      pppppcStack_160 = (code *****)0x0;
      _pthread_threadid_np(0,&pppppcStack_160);
      *(int *)ppuVar12 = (int)pppppcStack_160;
      iVar30 = (int)pppppcStack_160;
    }
    lVar24 = lRam00000001137ec198;
    uStack_1d0 = (code ******)0x0;
    uStack_1c8 = 0;
    iStack_1dc = iVar30;
    if (cVar5 != (code)0x0) {
      lVar21 = puVar26[1];
      bVar8 = *(byte *)(lVar21 + 0x42) | *(byte *)(lVar21 + 0x43);
      if (((bVar8 & 1) != 0) || (*(char *)(lVar21 + 0x40) == '\x01')) {
        uVar7 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        pppppcVar28 = (code *****)cntvct_el0;
        if (uVar7 != 1000000000) {
          uVar19 = 0;
          if (uVar7 != 0) {
            uVar19 = (ulong)pppppcVar28 / uVar7;
          }
          uVar29 = 0;
          if (uVar7 != 0) {
            uVar29 = (((long)pppppcVar28 - uVar19 * uVar7) * 1000000000) / uVar7;
          }
          pppppcVar28 = (code *****)(uVar29 + uVar19 * 1000000000);
        }
        ppppcStack_1d8 = (code ****)pppppcVar28;
        if (((bVar8 & 1) != 0) && (puVar15 = puVar26, FUN_10a1333cc(), puVar15 != (undefined8 *)0x0)
           ) {
          uVar18 = 3;
          if (lRam00000001137ec198 != lVar24) {
            uVar18 = 5;
          }
          lVar21 = 0;
          if (lRam00000001137ec198 != lVar24) {
            lVar21 = lVar24;
          }
          *puVar15 = &UNK_10f68e0e6;
          puVar15[1] = lVar21;
          puVar15[2] = pppppcVar28;
          *(int *)(puVar15 + 3) = iVar30;
          *(undefined2 *)((long)puVar15 + 0x1c) = 7;
          *(undefined1 *)((long)puVar15 + 0x1e) = uVar18;
          if ((*(byte *)(puVar26 + 0x38) & 1) == 0) goto LAB_10aab99ec;
          puVar26[0x18] = puVar26[0x18] + 1;
        }
      }
      if (*(char *)(puVar26[1] + 0x41) == '\x01') {
        ppppppcVar27 = (code ******)puVar26[0xb];
        if (ppppppcVar27 != (code ******)0x0) {
          ppppppcVar16 = ppppppcVar27;
          (*(code *)(*ppppppcVar27)[2])(ppppppcVar27,&UNK_10f68e0e6);
          uStack_1d0 = ppppppcVar16;
        }
        uStack_1c8 = ppppppcVar27 != (code ******)0x0;
      }
    }
  }
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = 0x10aad5010;
  param_1[1] = &PTR_DAT_110950c70;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[8] = FUN_10aad5004;
  param_1[9] = &PTR_DAT_110950c70;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  uVar31 = *param_4;
  param_1[0x14] = param_4[1];
  param_1[0x13] = uVar31;
  uVar31 = *(undefined8 *)((long)param_4 + 0xd);
  *(undefined8 *)((long)param_1 + 0xad) = *(undefined8 *)((long)param_4 + 0x15);
  *(undefined8 *)((long)param_1 + 0xa5) = uVar31;
  *(undefined1 *)(param_1 + 0x18) = 0;
  uVar3 = *(uint *)((long)param_4 + 4);
  uVar2 = uVar3 >> 2 & 3;
  if ((uVar3 & 1) != 0) {
    uVar2 = uVar3 >> 1 & 2 | uVar3 >> 3 & 1;
  }
  *(uint *)(param_1 + 0x17) = -uVar3 & 3 | uVar2 << 2;
  *(undefined4 *)((long)param_1 + 0xbc) = 0;
  lVar24 = param_3;
  FUN_10aab9bcc(param_3,param_4);
  ppppppcVar27 = param_2;
  lVar21 = lVar24;
  (*(code *)(*param_2)[10])();
  pppppcStack_158 = (code *****)CONCAT71(pppppcStack_158._1_7_,(char)lVar21);
  pppppcStack_160 = (code *****)ppppppcVar27;
  FUN_10aab9c6c(*(undefined4 *)(param_4 + 2),lVar24,&pppppcStack_160);
  *(long *)((long)param_1 + 0xac) = lVar24;
  FUN_10ad055a0();
  if ((int)lVar24 != 0) {
    ppuVar12 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar12 == (undefined *)0x0) {
      ppuVar12 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar17 = (long *)*ppuVar12;
      if ((plVar17 == (long *)0x0) || ((**(code **)(*plVar17 + 0x18))(), plVar17 == (long *)0x0))
      goto LAB_10aab8dd8;
      plVar17 = plVar17 + 7;
    }
    else {
      plVar17 = (long *)(*ppuVar12 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar17 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&pppppcStack_1a0,&UNK_10f68daf8);
      func_0x000107c2b054(&uStack_200,&UNK_10f68da37);
      pcVar20 = "null";
      pppppcStack_160 = (code *****)pcVar20;
      if ((long)uStack_190 < 0) {
        if ((code *****)ppppcStack_198 != (code *****)0x0) {
          pppppcStack_160 = pppppcStack_1a0;
        }
      }
      else if (uStack_190._7_1_ != '\0') {
        pppppcStack_160 = (code *****)&pppppcStack_1a0;
      }
      pcStack_c0 = (code *)pcVar20;
      if (cStack_1e9 < '\0') {
        if ((code *****)ppppcStack_1f8 != (code *****)0x0) {
          pcStack_c0 = (code *)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
        }
      }
      else if (cStack_1e9 != '\0') {
        pcStack_c0 = (code *)&uStack_200;
      }
      FUN_10a224324(&pppppcStack_160,&pcStack_c0);
      if ((long)uStack_190 < 0) {
        if ((code *****)ppppcStack_198 == (code *****)0x0) goto LAB_10aab9904;
        func_0x000107c3192c(&pppppcStack_160,pppppcStack_1a0);
LAB_10aab9968:
        uVar18 = 1;
      }
      else {
        if (uStack_190._7_1_ != '\0') {
          pppppcStack_158 = (code *****)ppppcStack_198;
          pppppcStack_160 = pppppcStack_1a0;
          pppppcStack_150 = (code *****)uStack_190;
          goto LAB_10aab9968;
        }
LAB_10aab9904:
        uVar18 = 0;
        pppppcStack_160 = (code *****)((ulong)pppppcStack_160 & 0xffffffffffffff00);
      }
      pppppcStack_148 = (code *****)CONCAT71(pppppcStack_148._1_7_,uVar18);
      if (cStack_1e9 < '\0') {
        if ((code *****)ppppcStack_1f8 == (code *****)0x0) goto LAB_10aab9994;
        func_0x000107c3192c(&pcStack_c0,CONCAT44(uStack_200._4_4_,(undefined4)uStack_200));
LAB_10aab99d8:
        uVar18 = 1;
      }
      else {
        if (cStack_1e9 != '\0') {
          pcStack_c0 = (code *)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
          ppppcStack_b8 = ppppcStack_1f8;
          pppppcStack_b0 = (code *****)CONCAT17(cStack_1e9,uStack_1f0);
          goto LAB_10aab99d8;
        }
LAB_10aab9994:
        uVar18 = 0;
        pcStack_c0 = (code *)((ulong)pcStack_c0 & 0xffffffffffffff00);
      }
      pppppcStack_a8 = (code *****)CONCAT71(pppppcStack_a8._1_7_,uVar18);
      FUN_10a234a0c(&pppppcStack_160,&pcStack_c0);
      goto LAB_10aab99ec;
    }
  }
LAB_10aab8dd8:
  ppppppcVar27 = param_2;
  (*(code *)(*param_2)[0xd])();
  if ((int)ppppppcVar27 == 0) {
LAB_10aab8f24:
    uVar19 = *(ulong *)((long)param_1 + 0xac);
    bVar11 = (*(uint *)(param_1 + 0x17) & 1) != 0;
    uVar7 = uVar19 >> 0x20;
    if (bVar11) {
      uVar7 = uVar19;
    }
    uVar29 = uVar19 & 0xffffffff;
    if (bVar11) {
      uVar29 = uVar19 >> 0x20;
    }
    uVar29 = uVar29 | uVar7 << 0x20;
    *(ulong *)((long)param_1 + 0xac) = uVar29;
    ppppppcVar27 = param_2;
    (*(code *)(*param_2)[0x15])(param_2);
    ppppppcVar16 = param_2;
    (*(code *)(*param_2)[0x10])(param_2,uVar29,ppppppcVar27);
    FUN_10aab8884(&pppppcStack_160,param_3);
    pppppcVar28 = pppppcStack_158;
    if ((code ******)pppppcStack_160 == (code ******)0x0) {
      if (pppppcStack_158 != (code *****)0x0) {
        pppppcVar25 = pppppcStack_158 + 1;
        do {
          ppppcVar22 = *pppppcVar25;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(pppppcVar25,0x10);
          if (bVar11) {
            *pppppcVar25 = (code ****)((long)ppppcVar22 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppppcVar22 == (code ****)0x0) {
          (*(code *)(*pppppcStack_158)[2])(pppppcStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar28);
        }
      }
    }
    else {
      ppppppcVar27 = param_2;
      (*(code *)(*param_2)[0xe])();
      pppppcVar28 = pppppcStack_158;
      if (pppppcStack_158 != (code *****)0x0) {
        pppppcVar25 = pppppcStack_158 + 1;
        do {
          ppppcVar22 = *pppppcVar25;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(pppppcVar25,0x10);
          if (bVar11) {
            *pppppcVar25 = (code ****)((long)ppppcVar22 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppppcVar22 == (code ****)0x0) {
          (*(code *)(*pppppcStack_158)[2])(pppppcStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar28);
        }
      }
      if (((ulong)ppppppcVar27 & 1) == 0) {
        uStack_128._4_4_ = (undefined4)((ulong)uStack_128 >> 0x20);
        pppppcStack_150 = *(code ******)((long)param_1 + 0xac);
        pppppcStack_160 = (code *****)param_2;
        pppppcStack_158 = (code *****)ppppppcVar16;
        FUN_10aab8884(&pppppcStack_148,param_3);
        uStack_130 = (code *****)ppppcStack_140;
        pppppcStack_138 = pppppcStack_148;
        pppppcVar1 = pppppcStack_150;
        pppppcVar25 = pppppcStack_158;
        pppppcVar28 = pppppcStack_160;
        uStack_168 = *(undefined4 *)(param_1 + 0x17);
        pcStack_c0 = FUN_10aade858;
        ppppcStack_b8 = (code ****)&PTR_FUN_110c43e68;
        pppppcStack_a8 = pppppcStack_158;
        pppppcStack_b0 = pppppcStack_160;
        ppppcStack_a0 = (code ****)pppppcStack_150;
        pppppcStack_98 = pppppcStack_148;
        ppppcStack_90 = ppppcStack_140;
        pppppcStack_1a0 = (code *****)FUN_10aade858;
        ppppcStack_198 = (code ****)&PTR_FUN_110c43e68;
        pppppcStack_188 = pppppcStack_158;
        uStack_190 = (code ******)pppppcStack_160;
        ppppcStack_180 = (code ****)pppppcStack_150;
        pppppcStack_178 = pppppcStack_148;
        ppppcStack_170 = ppppcStack_140;
        if ((code *****)ppppcStack_140 != (code *****)0x0) {
          ppppcStack_140 = ppppcStack_140 + 1;
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppcStack_140,0x10);
            if (bVar11) {
              *ppppcStack_140 = (code ***)((long)*ppppcStack_140 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        pppppcStack_160 = (code *****)FUN_10aade858;
        pppppcStack_158 = (code *****)&PTR_FUN_110c43e68;
        pppppcStack_148 = pppppcVar25;
        pppppcStack_150 = pppppcVar28;
        ppppcStack_140 = (code ****)pppppcVar1;
        if (uStack_130 != (code *****)0x0) {
          pppppcVar28 = uStack_130 + 1;
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pppppcVar28,0x10);
            if (bVar11) {
              *pppppcVar28 = (code ****)((long)*pppppcVar28 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        uStack_128 = CONCAT44(uStack_128._4_4_,uStack_168);
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        pcStack_120 = FUN_10aad5004;
        ppuStack_118 = &PTR_DAT_110950c70;
        uStack_d8 = 0;
        ppppcStack_d0 = (code ****)0x0;
        pppppcStack_e0 = (code *****)0x0;
        uStack_88 = uStack_168;
        func_0x00010aab89a0(param_1,&pppppcStack_160);
        ppppcVar22 = ppppcStack_d0;
        if ((code *****)ppppcStack_d0 != (code *****)0x0) {
          pppppcVar28 = (code *****)(ppppcStack_d0 + 1);
          do {
            ppppcVar23 = *pppppcVar28;
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pppppcVar28,0x10);
            if (bVar11) {
              *pppppcVar28 = (code ****)((long)ppppcVar23 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (ppppcVar23 == (code ****)0x0) {
            (*(code *)(*ppppcStack_d0)[2])(ppppcStack_d0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar22);
          }
        }
        (*(code *)*ppuStack_118)(&ppuStack_118);
        (*(code *)*pppppcStack_158)(&pppppcStack_158);
        (*(code *)*ppppcStack_198)(&ppppcStack_198);
        FUN_10aab8a44(param_1);
        (*(code *)*ppppcStack_b8)(&ppppcStack_b8);
        goto LAB_10aab95d0;
      }
    }
    lVar24 = param_3;
    FUN_10aab8a44();
    if (lVar24 != 0) {
      lVar24 = param_3;
      FUN_10aab8a44();
      iVar30 = *(int *)((long)ppppppcVar16 + 0x24);
      if (((param_2[0x39] == (code *****)0x0) ||
          (*(int *)(param_2 + 0x3b) != *(int *)(lVar24 + 0x24))) ||
         (*(int *)((long)param_2 + 0x1dc) != iVar30)) {
        *(int *)(param_2 + 0x3b) = *(int *)(lVar24 + 0x24);
        *(int *)((long)param_2 + 0x1dc) = iVar30;
        FUN_10a1b498c(&pppppcStack_160);
        func_0x00010a343394(param_2 + 0x39,&pppppcStack_160);
        pppppcVar28 = pppppcStack_158;
        if (pppppcStack_158 != (code *****)0x0) {
          pppppcVar25 = pppppcStack_158 + 1;
          do {
            ppppcVar22 = *pppppcVar25;
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pppppcVar25,0x10);
            if (bVar11) {
              *pppppcVar25 = (code ****)((long)ppppcVar22 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (ppppcVar22 == (code ****)0x0) {
            (*(code *)(*pppppcStack_158)[2])(pppppcStack_158);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar28);
          }
        }
      }
      uVar2 = *(int *)(&UNK_10e4f2800 + ((ulong)*(uint *)(param_1 + 0x17) & 3) * 4) +
              *(int *)(&UNK_10e4f2800 + ((ulong)*(uint *)(param_1 + 0x14) & 3) * 4);
      if (0x167 < uVar2) {
        uVar2 = uVar2 - 0x168;
      }
      if (uVar2 == 0x10e) {
        uStack_200._0_4_ = 1;
      }
      else if (uVar2 == 0xb4) {
        uStack_200._0_4_ = 2;
      }
      else if (uVar2 == 0x5a) {
        uStack_200._0_4_ = 3;
      }
      else {
        uStack_200._0_4_ = 0;
      }
      pppppcVar28 = param_2[0x39];
      FUN_10aab8a44(param_3);
      (*(code *)**pppppcVar28)(&pcStack_c0,pppppcVar28,param_3,&uStack_200,(long)param_1 + 0xac);
      func_0x00010a1b30c0(ppppppcVar16,pcStack_c0);
      pppppcStack_138 = (code *****)0x0;
      ppppcStack_140 = (code ****)0x0;
      uStack_128 = 0;
      uStack_130 = (code *****)0x0;
      pppppcStack_148 = (code *****)0x0;
      pppppcStack_150 = (code *****)0x0;
      pppppcStack_160 = (code *****)0x10aad5010;
      pppppcStack_158 = (code *****)&PTR_DAT_110950c70;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      pcStack_120 = FUN_10aad5004;
      ppuStack_118 = &PTR_DAT_110950c70;
      uStack_d8 = 0;
      ppppcStack_d0 = (code ****)0x0;
      pppppcStack_e0 = (code *****)ppppppcVar16;
      func_0x00010aab89a0(param_1,&pppppcStack_160);
      ppppcVar22 = ppppcStack_d0;
      if ((code *****)ppppcStack_d0 != (code *****)0x0) {
        pppppcVar28 = (code *****)(ppppcStack_d0 + 1);
        do {
          ppppcVar23 = *pppppcVar28;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(pppppcVar28,0x10);
          if (bVar11) {
            *pppppcVar28 = (code ****)((long)ppppcVar23 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppppcVar23 == (code ****)0x0) {
          (*(code *)(*ppppcStack_d0)[2])(ppppcStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar22);
        }
      }
      (*(code *)*ppuStack_118)(&ppuStack_118);
      (*(code *)*pppppcStack_158)(&pppppcStack_158);
      if ((code *****)ppppcStack_b8 != (code *****)0x0) {
        pppppcVar28 = (code *****)(ppppcStack_b8 + 1);
        do {
          ppppcVar22 = *pppppcVar28;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(pppppcVar28,0x10);
          if (bVar11) {
            *pppppcVar28 = (code ****)((long)ppppcVar22 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
          pppppcVar25 = (code *****)ppppcStack_b8;
        } while (cVar6 != '\0');
        goto LAB_10aab95b4;
      }
      goto LAB_10aab95d0;
    }
  }
  else {
    FUN_10aab8884(&pppppcStack_160,param_3);
    pppppcVar25 = pppppcStack_158;
    pppppcVar28 = pppppcStack_160;
    if (pppppcStack_158 != (code *****)0x0) {
      pppppcVar1 = pppppcStack_158 + 1;
      do {
        ppppcVar22 = *pppppcVar1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(pppppcVar1,0x10);
        if (bVar11) {
          *pppppcVar1 = (code ****)((long)ppppcVar22 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (ppppcVar22 == (code ****)0x0) {
        (*(code *)(*pppppcStack_158)[2])(pppppcStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar25);
      }
    }
    if ((code ******)pppppcVar28 == (code ******)0x0) goto LAB_10aab8f24;
    uStack_130._4_4_ = (undefined4)((ulong)uStack_130 >> 0x20);
    FUN_10aab8884(&pppppcStack_160,param_3);
    if (*(int *)((long)param_1 + 0xac) == *(int *)(pppppcStack_160 + 3) &&
        *(int *)(param_1 + 0x16) == *(int *)((long)pppppcStack_160 + 0x1c)) {
      if (*(int *)(param_1 + 0x17) == 0) {
        if ((param_5 & 1) == 0) goto LAB_10aab9360;
        goto LAB_10aab8e44;
      }
      ppppppcVar27 = param_2;
      (*(code *)(*param_2)[0xb])();
      if (((param_5 & 1) != 0) || ((((uint)ppppppcVar27 ^ 1) & 1) != 0)) goto LAB_10aab8e44;
LAB_10aab9360:
      ppppppcVar27 = param_2;
      (*(code *)(*param_2)[0xf])();
      pppppcVar28 = pppppcStack_158;
      if (pppppcStack_158 != (code *****)0x0) {
        pppppcVar25 = pppppcStack_158 + 1;
        do {
          ppppcVar22 = *pppppcVar25;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(pppppcVar25,0x10);
          if (bVar11) {
            *pppppcVar25 = (code ****)((long)ppppcVar22 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppppcVar22 == (code ****)0x0) {
          (*(code *)(*pppppcStack_158)[2])(pppppcStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar28);
        }
      }
      if (((ulong)ppppppcVar27 & 1) != 0) goto LAB_10aab93b0;
      *(undefined1 *)(param_1 + 0x18) = 1;
      FUN_10aab8884(&uStack_200,param_3);
      pppppcStack_138 = (code *****)0x0;
      ppppcStack_140 = (code ****)0x0;
      uStack_128 = 0;
      uStack_130 = (code *****)0x0;
      pppppcStack_148 = (code *****)0x0;
      pppppcStack_150 = (code *****)0x0;
      pppppcStack_160 = (code *****)0x10aad5010;
      pppppcStack_158 = (code *****)&PTR_DAT_110950c70;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      pcStack_120 = FUN_10aad5004;
      ppuStack_118 = &PTR_DAT_110950c70;
      pppppcStack_e0 = (code *****)0x0;
      uStack_d8 = CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
      ppppcStack_d0 = ppppcStack_1f8;
      if ((code *****)ppppcStack_1f8 != (code *****)0x0) {
        pppppcVar28 = (code *****)(ppppcStack_1f8 + 1);
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(pppppcVar28,0x10);
          if (bVar11) {
            *pppppcVar28 = (code ****)((long)*pppppcVar28 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      func_0x00010aab89a0(param_1,&pppppcStack_160);
      ppppcVar22 = ppppcStack_d0;
      if ((code *****)ppppcStack_d0 != (code *****)0x0) {
        pppppcVar28 = (code *****)(ppppcStack_d0 + 1);
        do {
          ppppcVar23 = *pppppcVar28;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(pppppcVar28,0x10);
          if (bVar11) {
            *pppppcVar28 = (code ****)((long)ppppcVar23 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppppcVar23 == (code ****)0x0) {
          (*(code *)(*ppppcStack_d0)[2])(ppppcStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar22);
        }
      }
      (*(code *)*ppuStack_118)(&ppuStack_118);
      (*(code *)*pppppcStack_158)(&pppppcStack_158);
      if ((code *****)ppppcStack_1f8 != (code *****)0x0) {
        pppppcVar28 = (code *****)(ppppcStack_1f8 + 1);
        do {
          ppppcVar22 = *pppppcVar28;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(pppppcVar28,0x10);
          if (bVar11) {
            *pppppcVar28 = (code ****)((long)ppppcVar22 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppppcVar22 == (code ****)0x0) {
          (*(code *)(*ppppcStack_1f8)[2])(ppppcStack_1f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcStack_1f8);
        }
      }
      uVar3 = *(uint *)(param_1 + 0x17);
      uVar2 = uVar3 >> 2 & 3;
      if ((uVar3 & 1) != 0) {
        uVar2 = uVar3 >> 1 & 2 | uVar3 >> 3 & 1;
      }
      *(undefined4 *)(param_1 + 0x17) = 0;
      *(uint *)((long)param_1 + 0xbc) = -uVar3 & 3 | uVar2 << 2;
    }
    else {
LAB_10aab8e44:
      pppppcVar28 = pppppcStack_158;
      if (pppppcStack_158 != (code *****)0x0) {
        pppppcVar25 = pppppcStack_158 + 1;
        do {
          ppppcVar22 = *pppppcVar25;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(pppppcVar25,0x10);
          if (bVar11) {
            *pppppcVar25 = (code ****)((long)ppppcVar22 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppppcVar22 == (code ****)0x0) {
          (*(code *)(*pppppcStack_158)[2])(pppppcStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar28);
        }
      }
LAB_10aab93b0:
      uVar19 = *(ulong *)((long)param_1 + 0xac);
      bVar11 = (*(uint *)(param_1 + 0x17) & 1) != 0;
      uVar7 = uVar19 >> 0x20;
      if (bVar11) {
        uVar7 = uVar19;
      }
      uVar29 = uVar19 & 0xffffffff;
      if (bVar11) {
        uVar29 = uVar19 >> 0x20;
      }
      uVar29 = uVar29 | uVar7 << 0x20;
      *(ulong *)((long)param_1 + 0xac) = uVar29;
      ppppppcVar27 = param_2;
      (*(code *)(*param_2)[0x15])(param_2);
      (*(code *)(*param_2)[0x11])(&ppppcStack_1b0,param_2,uVar29,ppppppcVar27);
      pppppcStack_150 = (code *****)ppppcStack_1a8;
      pppppcStack_158 = (code *****)ppppcStack_1b0;
      if ((code *****)ppppcStack_1a8 != (code *****)0x0) {
        pppppcVar28 = (code *****)(ppppcStack_1a8 + 1);
        do {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(pppppcVar28,0x10);
          if (bVar11) {
            *pppppcVar28 = (code ****)((long)*pppppcVar28 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      pppppcStack_148 = *(code ******)((long)param_1 + 0xac);
      pppppcStack_160 = (code *****)param_2;
      FUN_10aab8884(&ppppcStack_140,param_3);
      uVar4 = *(undefined4 *)(param_1 + 0x17);
      uStack_130 = (code *****)CONCAT44(uStack_130._4_4_,uVar4);
      pcStack_c0 = FUN_10aade6b0;
      ppppcStack_b8 = (code ****)&PTR_FUN_110c43e48;
      ppppppcVar27 = (code ******)0x38;
      __Znwm();
      *(undefined8 *)((ulong)&pppppcStack_160 | 8) = 0;
      ((undefined8 *)((ulong)&pppppcStack_160 | 8))[1] = 0;
      ppppppcVar27[1] = pppppcStack_158;
      *ppppppcVar27 = pppppcStack_160;
      ppppppcVar27[2] = pppppcStack_150;
      ppppppcVar27[3] = pppppcStack_148;
      ppppppcVar27[5] = pppppcStack_138;
      ppppppcVar27[4] = (code *****)ppppcStack_140;
      *(undefined4 *)(ppppppcVar27 + 6) = uVar4;
      pppppcStack_1a0 = (code *****)FUN_10aade6b0;
      ppppcStack_198 = (code ****)&PTR_FUN_110c43e48;
      pppppcStack_b0 = (code *****)0x0;
      pppppcStack_148 = (code *****)0x0;
      pppppcStack_150 = (code *****)0x0;
      pppppcStack_138 = (code *****)0x0;
      ppppcStack_140 = (code ****)0x0;
      uStack_128 = 0;
      uStack_130 = (code *****)0x0;
      pppppcStack_160 = (code *****)0x10aad5010;
      pppppcStack_158 = (code *****)&PTR_DAT_110950c70;
      pcStack_120 = FUN_10aade6b0;
      uStack_190 = ppppppcVar27;
      FUN_10aade7c4(&ppuStack_118,&ppppcStack_198);
      pppppcStack_e0 = (code *****)0x0;
      uStack_d8 = 0;
      ppppcStack_d0 = (code ****)0x0;
      func_0x00010aab89a0(param_1,&pppppcStack_160);
      ppppcVar22 = ppppcStack_d0;
      if ((code *****)ppppcStack_d0 != (code *****)0x0) {
        pppppcVar28 = (code *****)(ppppcStack_d0 + 1);
        do {
          ppppcVar23 = *pppppcVar28;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(pppppcVar28,0x10);
          if (bVar11) {
            *pppppcVar28 = (code ****)((long)ppppcVar23 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppppcVar23 == (code ****)0x0) {
          (*(code *)(*ppppcStack_d0)[2])(ppppcStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar22);
        }
      }
      (*(code *)*ppuStack_118)(&ppuStack_118);
      (*(code *)*pppppcStack_158)(&pppppcStack_158);
      (*(code *)*ppppcStack_198)(&ppppcStack_198);
      FUN_10aab8884(auStack_1c0,param_1);
      if (plStack_1b8 != (long *)0x0) {
        plVar17 = plStack_1b8 + 1;
        do {
          lVar24 = *plVar17;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = lVar24 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1b8);
        }
      }
      (*(code *)*ppppcStack_b8)(&ppppcStack_b8);
      if ((code *****)ppppcStack_1a8 == (code *****)0x0) goto LAB_10aab95d0;
      pppppcVar28 = (code *****)(ppppcStack_1a8 + 1);
      do {
        ppppcVar22 = *pppppcVar28;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(pppppcVar28,0x10);
        if (bVar11) {
          *pppppcVar28 = (code ****)((long)ppppcVar22 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
        pppppcVar25 = (code *****)ppppcStack_1a8;
      } while (cVar6 != '\0');
LAB_10aab95b4:
      if (ppppcVar22 == (code ****)0x0) {
        (*(code *)(*pppppcVar25)[2])(pppppcVar25);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar25);
      }
    }
LAB_10aab95d0:
    FUN_10aade9b4(&uStack_1e0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a00946c(&UNK_10f68db34);
LAB_10aab99ec:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10aab99f0);
  (*pcVar10)();
}



/* Entry: 10aab9bcc; end: 10aab9c6b;  */

ulong FUN_10aab9bcc(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lStack_30;
  long *plStack_28;
  
  lVar6 = param_1;
  FUN_10aab8a44();
  if (lVar6 == 0) {
    FUN_10aab8884(&lStack_30,param_1);
    uVar7 = *(ulong *)(lStack_30 + 0x18);
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  else {
    uVar5 = *(ulong *)(lVar6 + 0x10);
    bVar4 = (*(uint *)(param_2 + 8) & 1) != 0;
    uVar2 = uVar5 >> 0x20;
    if (bVar4) {
      uVar2 = uVar5;
    }
    uVar7 = uVar5 & 0xffffffff;
    if (bVar4) {
      uVar7 = uVar5 >> 0x20;
    }
    uVar7 = uVar7 | uVar2 << 0x20;
  }
  return uVar7;
}



/* Entry: 10aab9c6c; end: 10aab9cdf;  */

ulong FUN_10aab9c6c(float param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = (int)((ulong)param_2 >> 0x20);
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    fVar2 = (float)*param_3 / (float)(int)param_2;
    fVar3 = (float)param_3[1] / (float)iVar1;
    if (fVar2 <= fVar3) {
      fVar3 = fVar2;
    }
    param_1 = 1.0;
    if (fVar3 <= 1.0) {
      param_1 = fVar3;
    }
  }
  return (ulong)((int)((float)(int)param_2 * param_1) + 3U & 0xfffffffc) |
         (ulong)((int)((float)iVar1 * param_1) + 3U >> 2) << 0x22;
}



/* Entry: 10aab9ce0; end: 10aaba45b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10aab9ce0(float *param_1,long *param_2,float *param_3,undefined8 param_4,
                  undefined8 *param_5,code ******param_6)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  byte bVar4;
  undefined *puVar5;
  float *pfVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  long *plVar11;
  float **ppfVar12;
  undefined **ppuVar13;
  code ******ppppppcVar14;
  code ******ppppppcVar15;
  code *******pppppppcVar16;
  long *plVar17;
  float *pfVar18;
  code *******pppppppcVar19;
  float *pfVar20;
  undefined1 uVar21;
  long lVar22;
  long lVar23;
  code *****pppppcVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  float *pfVar28;
  undefined8 *puVar29;
  long *plVar30;
  float *pfVar31;
  float *pfVar32;
  code ******ppppppcVar33;
  code ******ppppppcVar34;
  ulong uVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  long lStack_538;
  code *****pppppcStack_530;
  code *****pppppcStack_528;
  code *****pppppcStack_520;
  code *****pppppcStack_518;
  code *******pppppppcStack_508;
  code *******pppppppcStack_500;
  code ******ppppppcStack_4f8;
  undefined8 uStack_4f0;
  long alStack_4e8 [7];
  code ******ppppppcStack_4b0;
  long alStack_4a8 [7];
  code ******ppppppcStack_470;
  long alStack_468 [7];
  code ******ppppppcStack_430;
  long alStack_428 [7];
  code ******ppppppcStack_3f0;
  code ******ppppppcStack_3e8;
  code ******ppppppcStack_3e0;
  code ******ppppppcStack_3d8;
  undefined8 *apuStack_3d0 [5];
  undefined8 *apuStack_3a8 [2];
  code ******ppppppcStack_398;
  undefined8 *apuStack_390 [6];
  long *plStack_360;
  code *****pppppcStack_358;
  code *****pppppcStack_350;
  code *****pppppcStack_348;
  undefined8 uStack_337;
  code ******ppppppcStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined8 *apuStack_2d8 [8];
  long lStack_298;
  long *plStack_290;
  code *****pppppcStack_288;
  code *****pppppcStack_280;
  code *****pppppcStack_278;
  undefined1 uStack_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
  undefined8 uStack_267;
  long lStack_258;
  long *plStack_250;
  float *pfStack_248;
  float *pfStack_240;
  ulong uStack_238;
  float *pfStack_230;
  float *pfStack_228;
  long *plStack_220;
  float *pfStack_218;
  float *pfStack_210;
  code ******ppppppcStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  ulong uStack_1f0;
  long *plStack_1e8;
  float *pfStack_1e0;
  float fStack_1d4;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  float *pfStack_1b8;
  float *pfStack_1b0;
  float *pfStack_1a8;
  char acStack_1a0 [2];
  undefined2 uStack_19e;
  int iStack_19c;
  ulong uStack_198;
  long *plStack_190;
  undefined1 uStack_188;
  undefined8 uStack_180;
  float afStack_178 [2];
  undefined8 *apuStack_170 [8];
  undefined8 *apuStack_130 [9];
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  long lStack_b0;
  
  puVar5 = PTR___tlv_bootstrap_11340d750;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = &PTR___tlv_bootstrap_11340d750;
  ppuVar8 = ppuVar13;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar9 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar8 & 1) == 0) {
    ppuVar8 = ppuVar9;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar8,0x100000000);
    (*(code *)puVar5)();
    *(undefined1 *)ppuVar13 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar29 = (undefined8 *)ppuVar9[2];
  if (puVar29 == (undefined8 *)0x0) {
    acStack_1a0[0] = '\0';
    plStack_190 = (long *)0x0;
    uStack_188 = 0;
  }
  else {
    cVar1 = *(char *)(puVar29[1] + 0x17);
    uStack_19e = 7;
    ppuVar13 = &PTR___tlv_bootstrap_11340dd08;
    acStack_1a0[0] = cVar1;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar26 = *(int *)ppuVar13;
    if (*(int *)ppuVar13 == 0) {
      pfStack_1b8 = (float *)0x0;
      _pthread_threadid_np(0,&pfStack_1b8);
      *(int *)ppuVar13 = (int)pfStack_1b8;
      iVar26 = (int)pfStack_1b8;
    }
    lVar23 = lRam00000001137ec198;
    plStack_190 = (long *)0x0;
    uStack_188 = 0;
    iStack_19c = iVar26;
    if (cVar1 != '\0') {
      lVar22 = puVar29[1];
      bVar4 = *(byte *)(lVar22 + 0x42) | *(byte *)(lVar22 + 0x43);
      if (((bVar4 & 1) != 0) || (*(char *)(lVar22 + 0x40) == '\x01')) {
        uVar35 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar27 = cntvct_el0;
        if (uVar35 != 1000000000) {
          uVar25 = 0;
          if (uVar35 != 0) {
            uVar25 = uVar27 / uVar35;
          }
          uVar3 = 0;
          if (uVar35 != 0) {
            uVar3 = ((uVar27 - uVar25 * uVar35) * 1000000000) / uVar35;
          }
          uVar27 = uVar3 + uVar25 * 1000000000;
        }
        uStack_198 = uVar27;
        if (((bVar4 & 1) != 0) && (puVar10 = puVar29, FUN_10a1333cc(), puVar10 != (undefined8 *)0x0)
           ) {
          uVar21 = 3;
          if (lRam00000001137ec198 != lVar23) {
            uVar21 = 5;
          }
          lVar22 = 0;
          if (lRam00000001137ec198 != lVar23) {
            lVar22 = lVar23;
          }
          *puVar10 = &UNK_10f68e0fb;
          puVar10[1] = lVar22;
          puVar10[2] = uVar27;
          *(int *)(puVar10 + 3) = iVar26;
          *(undefined2 *)((long)puVar10 + 0x1c) = 7;
          *(undefined1 *)((long)puVar10 + 0x1e) = uVar21;
          if ((*(byte *)(puVar29 + 0x38) & 1) == 0) {
LAB_10aaba3dc:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10aaba3e0);
            (*pcVar7)();
          }
          puVar29[0x18] = puVar29[0x18] + 1;
        }
      }
      if (*(char *)(puVar29[1] + 0x41) == '\x01') {
        plVar30 = (long *)puVar29[0xb];
        if (plVar30 != (long *)0x0) {
          plVar11 = plVar30;
          (**(code **)(*plVar30 + 0x10))(plVar30,&UNK_10f68e0fb);
          plStack_190 = plVar11;
        }
        uStack_188 = plVar30 != (long *)0x0;
      }
    }
  }
  fVar40 = param_3[0x26];
  fVar39 = param_3[0x29];
  uStack_1d0 = *(undefined8 *)(param_3 + 0x2b);
  uStack_1c8 = 0;
  pfVar28 = afStack_178;
  pfStack_1e0 = param_1;
  FUN_10aad501c(afStack_178,param_3);
  uStack_e0 = *(undefined8 *)(param_3 + 0x26);
  uStack_d8 = *(undefined8 *)(param_3 + 0x28);
  uStack_d0 = *(undefined8 *)(param_3 + 0x2a);
  uStack_c8 = (undefined1)*(undefined8 *)(param_3 + 0x2c);
  uStack_bf = *(undefined8 *)((long)param_3 + 0xb9);
  uStack_c7 = (undefined7)*(undefined8 *)((long)param_3 + 0xb1);
  uStack_c0 = (undefined1)((ulong)*(undefined8 *)((long)param_3 + 0xb1) >> 0x38);
  (**(code **)(*param_2 + 0xa0))(&pfStack_1b8,param_2,afStack_178,param_4);
  pfVar31 = pfStack_1b0;
  pfVar6 = pfStack_1b8;
  pfStack_1b0 = (float *)0x0;
  pfStack_1a8 = (float *)0x0;
  pfStack_1b8 = (float *)0x0;
  if (plStack_e8 != (long *)0x0) {
    plVar30 = plStack_e8 + 1;
    do {
      lVar23 = *plVar30;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar2) {
        *plVar30 = lVar23 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
    }
  }
  pfVar32 = (float *)(((long)pfVar31 - (long)pfVar6 >> 2) * -0x3333333333333333);
  uVar35 = 0;
  if (pfVar31 != pfVar6) {
    uVar35 = LZCOUNT(pfVar32) * -2 + 0x7e;
  }
  uStack_1f0 = (ulong)(uint)fVar39;
  plStack_1e8 = param_2;
  (*(code *)*apuStack_130[0])(apuStack_130);
  (*(code *)*apuStack_170[0])(apuStack_170);
  FUN_10aad50f0(pfVar6,pfVar31,uVar35,1);
  pfStack_1b8 = (float *)0x0;
  pfStack_1b0 = (float *)0x0;
  pfStack_1a8 = (float *)0x0;
  FUN_10aabaf20(&pfStack_1b8,pfVar32);
  if (pfVar31 != pfVar6) {
    auVar37._8_8_ = uStack_1d0;
    auVar37._0_8_ = uStack_1d0;
    auVar37 = NEON_scvtf(auVar37,4);
    auVar38 = NEON_fmov(0x3f800000,4);
    uStack_1c8 = CONCAT44(auVar38._12_4_ / auVar37._12_4_,auVar38._8_4_ / auVar37._8_4_);
    uStack_1d0 = CONCAT44(auVar38._4_4_ / auVar37._4_4_,auVar38._0_4_ / auVar37._0_4_);
    fStack_1d4 = fVar40 * fVar40;
    uVar35 = 0xccccccccccccccc;
    param_2 = &uStack_180;
    uVar41 = NEON_fmov(0x3f800000,4);
    pfVar18 = pfVar6;
    do {
      pfVar18[2] = (float)uStack_1c8 * pfVar18[2];
      pfVar18[3] = uStack_1c8._4_4_ * pfVar18[3];
      *pfVar18 = (float)uStack_1d0 * *pfVar18;
      pfVar18[1] = uStack_1d0._4_4_ * pfVar18[1];
      uStack_1c0 = uVar41;
      uVar44 = FUN_10a108e0c(param_3 + 0x2e,&uStack_1c0);
      fVar42 = pfVar18[2];
      fVar43 = pfVar18[3];
      fVar40 = fVar42;
      fVar39 = fVar43;
      if (((uint)param_3[0x2e] & 1) != 0) {
        fVar40 = fVar43;
        fVar39 = fVar42;
      }
      uVar45 = ___sincosf_stret();
      uStack_180._0_4_ = (undefined4)((ulong)uVar45 >> 0x20);
      uStack_180._4_4_ = (undefined4)uVar45;
      FUN_10a108ed4(param_3 + 0x2e,&uStack_180,(undefined4 *)((long)&uStack_180 + 4));
      fVar36 = (float)_atan2f();
      *(undefined8 *)pfVar18 = uVar44;
      pfVar18[2] = fVar40;
      pfVar18[3] = fVar39;
      pfVar18[4] = fVar36;
      if (fStack_1d4 <= fVar42 * fVar43) {
        if (pfStack_1b8 != pfStack_1b0) {
          pfVar20 = pfStack_1b8;
          do {
            fVar40 = (float)*(undefined8 *)pfVar18 - (float)*(undefined8 *)pfVar20;
            fVar42 = (float)((ulong)*(undefined8 *)pfVar18 >> 0x20) -
                     (float)((ulong)*(undefined8 *)pfVar20 >> 0x20);
            fVar39 = pfVar20[3];
            if (pfVar20[2] <= pfVar20[3]) {
              fVar39 = pfVar20[2];
            }
            if (SQRT(fVar40 * fVar40 + fVar42 * fVar42) <= fVar39 * 0.5) goto LAB_10aaba1b8;
            pfVar20 = pfVar20 + 5;
          } while (pfVar20 != pfStack_1b0);
        }
        if (pfStack_1b0 < pfStack_1a8) {
          uVar44 = *(undefined8 *)pfVar18;
          uVar45 = *(undefined8 *)(pfVar18 + 2);
          pfStack_1b0[4] = pfVar18[4];
          *(undefined8 *)(pfStack_1b0 + 2) = uVar45;
          *(undefined8 *)pfStack_1b0 = uVar44;
          pfVar28 = pfStack_1b0 + 5;
          pfStack_1b0 = pfVar28;
        }
        else {
          lVar23 = (long)pfStack_1b0 - (long)pfStack_1b8;
          uVar27 = (lVar23 >> 2) * -0x3333333333333333 + 1;
          if (0xccccccccccccccc < uVar27) {
            FUN_10a22cce8();
            goto LAB_10aaba3dc;
          }
          lVar22 = (long)pfStack_1a8 - (long)pfStack_1b8 >> 2;
          uVar25 = lVar22 * -0x6666666666666666;
          if (uVar25 < uVar27 || uVar25 - uVar27 == 0) {
            uVar25 = uVar27;
          }
          if (0x666666666666665 < (ulong)(lVar22 * -0x3333333333333333)) {
            uVar25 = uVar35;
          }
          ppfVar12 = &pfStack_1b8;
          FUN_10a22ccfc();
          puVar29 = (undefined8 *)((long)ppfVar12 + lVar23);
          param_1 = (float *)((long)ppfVar12 + uVar25 * 0x14);
          uVar44 = *(undefined8 *)pfVar18;
          uVar45 = *(undefined8 *)(pfVar18 + 2);
          *(float *)(puVar29 + 2) = pfVar18[4];
          puVar29[1] = uVar45;
          *puVar29 = uVar44;
          pfVar28 = (float *)((long)puVar29 + 0x14);
          pfVar32 = (float *)((long)puVar29 - ((long)pfStack_1b0 - (long)pfStack_1b8));
          _memcpy(pfVar32);
          bVar2 = pfStack_1b8 != (float *)0x0;
          pfStack_1b8 = pfVar32;
          pfStack_1b0 = pfVar28;
          pfStack_1a8 = param_1;
          if (bVar2) {
            __ZdlPv();
            pfStack_1b0 = pfVar28;
          }
        }
      }
LAB_10aaba1b8:
      pfVar18 = pfVar18 + 5;
    } while (pfVar18 != pfVar31);
  }
  pfVar18 = pfStack_1b0;
  plVar30 = plStack_1e8;
  if (0 < (int)uStack_1f0) {
    pfVar28 = (float *)((long)pfStack_1b0 - (long)pfStack_1b8);
    uVar27 = ((long)pfVar28 >> 2) * -0x3333333333333333;
    param_3 = pfVar18;
    if ((int)uStack_1f0 < (int)uVar27) {
      uVar25 = uStack_1f0 + ((long)pfVar28 >> 2) * 0x3333333333333333;
      if (uStack_1f0 < uVar27 || uVar25 == 0) {
        if (uStack_1f0 < uVar27) {
          pfStack_1b0 = pfStack_1b8 + (uStack_1f0 & 0xffffffff) * 5;
        }
      }
      else if ((ulong)(((long)pfStack_1a8 - (long)pfStack_1b0 >> 2) * -0x3333333333333333) < uVar25)
      {
        lVar23 = (long)pfStack_1a8 - (long)pfStack_1b8 >> 2;
        uVar27 = lVar23 * -0x6666666666666666;
        if (uVar27 < uStack_1f0 || uVar27 - uStack_1f0 == 0) {
          uVar27 = uStack_1f0;
        }
        if (0x666666666666665 < (ulong)(lVar23 * -0x3333333333333333)) {
          uVar27 = 0xccccccccccccccc;
        }
        ppfVar12 = &pfStack_1b8;
        FUN_10a22ccfc();
        lVar23 = (long)ppfVar12 + (long)pfVar28;
        pfVar28 = (float *)((long)ppfVar12 + uVar27 * 0x14);
        pfVar31 = (float *)((((uVar25 & 0xffffffff) * 0x14 - 0x14) / 0x14) * 0x14 + 0x14);
        _bzero(lVar23,pfVar31);
        param_3 = (float *)(lVar23 - ((long)pfStack_1b0 - (long)pfStack_1b8));
        _memcpy(param_3);
        bVar2 = pfStack_1b8 != (float *)0x0;
        pfStack_1b8 = param_3;
        pfStack_1b0 = (float *)(lVar23 + (long)pfVar31);
        pfStack_1a8 = pfVar28;
        if (bVar2) {
          __ZdlPv();
        }
      }
      else {
        uVar27 = ((uVar25 & 0xffffffff) * 0x14 - 0x14) / 0x14;
        pfVar31 = (float *)(uVar27 * 0x14 + 0x14);
        _bzero(pfStack_1b0,pfVar31);
        pfStack_1b0 = pfVar18 + uVar27 * 5 + 5;
      }
    }
  }
  (**(code **)(*plVar30 + 0xb0))(plVar30,&pfStack_1b8);
  pfStack_1e0[0] = 0.0;
  pfStack_1e0[1] = 0.0;
  pfStack_1e0[2] = 0.0;
  pfStack_1e0[3] = 0.0;
  pfStack_1e0[4] = 0.0;
  pfStack_1e0[5] = 0.0;
  puVar29 = (undefined8 *)(((long)pfStack_1b0 - (long)pfStack_1b8 >> 2) * -0x3333333333333333);
  pfVar18 = pfStack_1b8;
  pfVar20 = pfStack_1b0;
  FUN_10a22cc2c();
  iVar26 = (int)pfVar20;
  if (pfStack_1b8 != (float *)0x0) {
    pfStack_1b0 = pfStack_1b8;
    __ZdlPv();
  }
  if (pfVar6 != (float *)0x0) {
    __ZdlPv(pfVar6);
  }
  ppppppcVar14 = (code ******)acStack_1a0;
  FUN_10aadefdc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  ppppppcVar34 = ppppppcVar14;
  __Unwind_Resume();
  pfStack_248 = pfVar6;
  plStack_220 = plVar30;
  pcStack_1f8 = FUN_10aaba45c;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar30 = puVar29 + 1;
  plStack_250 = param_2;
  pfStack_240 = param_1;
  uStack_238 = uVar35;
  pfStack_230 = pfVar32;
  pfStack_228 = pfVar31;
  pfStack_218 = param_3;
  pfStack_210 = pfVar28;
  ppppppcStack_208 = ppppppcVar14;
  puStack_200 = &stack0xfffffffffffffff0;
  if (iVar26 == 0) {
    plVar11 = alStack_4a8;
    ppppppcStack_4b0 = (code ******)*puVar29;
    (**(code **)(*plVar30 + 0x10))(plVar11,plVar30);
    uStack_4f0 = *param_5;
    plVar30 = alStack_4e8;
    (**(code **)(param_5[1] + 0x10))(plVar30,param_5 + 1);
    pppppcStack_530 = *param_6;
    pppppcStack_528 = param_6[1];
    pppppcStack_520 = param_6[2];
    pppppcStack_518 = param_6[3];
    ppppppcVar14 = ppppppcVar34;
    (*(code *)**ppppppcVar34)();
    if (((ulong)ppppppcVar14 & 1) == 0) {
      pppppppcStack_508 = (code *******)0x0;
      pppppppcStack_500 = (code *******)0x0;
      ppppppcStack_4f8 = (code ******)0x0;
    }
    else {
      *(char *)(ppppppcVar34 + 0x20) = '\x01';
      FUN_10aab8ac0(&ppppppcStack_320,ppppppcVar34,pfVar18,&pppppcStack_530,0);
      FUN_10aad501c(&ppppppcStack_3f0,&ppppppcStack_320);
      pppppcStack_350 = pppppcStack_280;
      pppppcStack_358 = pppppcStack_288;
      pppppcStack_348 = pppppcStack_278;
      uStack_337 = uStack_267;
      FUN_10aab9ce0(&pppppppcStack_508,ppppppcVar34,&ppppppcStack_3f0,0);
      if (plStack_360 != (long *)0x0) {
        plVar17 = plStack_360 + 1;
        do {
          lVar23 = *plVar17;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar2) {
            *plVar17 = lVar23 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plStack_360 + 0x10))(plStack_360);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_360);
        }
      }
      (*(code *)*apuStack_3a8[0])(apuStack_3a8);
      (*(code *)*ppppppcStack_3e8)(&ppppppcStack_3e8);
      *(char *)(ppppppcVar34 + 0x20) = '\0';
      if (plStack_290 != (long *)0x0) {
        plVar17 = plStack_290 + 1;
        do {
          lVar23 = *plVar17;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar2) {
            *plVar17 = lVar23 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plStack_290 + 0x10))(plStack_290);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_290);
        }
      }
      ppppppcVar34 = (code ******)&ppppppcStack_320;
      (*(code *)*apuStack_2d8[0])(apuStack_2d8);
      (*(code *)*puStack_318)(&puStack_318);
    }
    pppppppcVar19 = pppppppcStack_508;
    FUN_10aabad30(&ppppppcStack_4b0,pppppppcStack_508,pppppppcStack_500);
    if (pppppppcStack_508 != (code *******)0x0) {
      pppppppcStack_500 = pppppppcStack_508;
LAB_10aaba8b4:
      __ZdlPv();
    }
  }
  else {
    plVar11 = alStack_428;
    ppppppcStack_430 = (code ******)*puVar29;
    (**(code **)(*plVar30 + 0x10))(plVar11,plVar30);
    ppppppcStack_470 = (code ******)*param_5;
    plVar30 = alStack_468;
    (**(code **)(param_5[1] + 0x10))(plVar30,param_5 + 1);
    pppppcStack_530 = *param_6;
    pppppcStack_528 = param_6[1];
    pppppcStack_520 = param_6[2];
    pppppcStack_518 = param_6[3];
    ppppppcVar14 = ppppppcVar34;
    (*(code *)**ppppppcVar34)();
    if (((ulong)ppppppcVar14 & 1) == 0) {
      puStack_318 = (undefined8 *)0x0;
      ppppppcStack_320 = (code ******)0x0;
      uStack_310 = 0;
      pppppppcVar19 = &ppppppcStack_320;
      FUN_10aabae0c(&ppppppcStack_430);
      if (ppppppcStack_320 != (code ******)0x0) goto LAB_10aaba8b4;
    }
    else {
      *(char *)(ppppppcVar34 + 0x20) = '\x01';
      FUN_10aab8ac0(&ppppppcStack_320,ppppppcVar34,pfVar18,&pppppcStack_530,1);
      ppppppcVar14 = ppppppcVar34;
      (*(code *)(*ppppppcVar34)[0xc])(ppppppcVar34,&ppppppcStack_320);
      if (((ulong)ppppppcVar14 & 1) == 0) {
        *(char *)(ppppppcVar34 + 0x20) = '\0';
        ppppppcStack_3f0 = (code ******)0x0;
        ppppppcStack_3e8 = (code ******)0x0;
        ppppppcStack_3e0 = (code ******)0x0;
        pppppppcVar19 = &ppppppcStack_3f0;
        FUN_10aabae0c(&ppppppcStack_430);
        if (ppppppcStack_3f0 != (code ******)0x0) {
          __ZdlPv();
        }
      }
      else {
        if (((lStack_298 != 0) || (*(char *)(apuStack_2d8[0] + 1) == '\x01')) &&
           (ppppppcVar34[4] == (code *****)0x0)) {
          (*(code *)PTR___tlv_bootstrap_11340de10)();
          uVar41 = 0x168;
          __Znwm(0x168);
          FUN_10a08ee34();
          FUN_10aabb088(ppppppcVar34 + 4,uVar41);
        }
        ppppppcVar14 = (code ******)0xe0;
        __Znwm();
        ppppppcVar33 = ppppppcVar14 + 1;
        *ppppppcVar33 = (code *****)0x0;
        ppppppcVar14[2] = (code *****)0x0;
        ppppppcVar15 = ppppppcVar14 + 3;
        *ppppppcVar14 = (code *****)&PTR_FUN_110c43e98;
        FUN_10aad501c(ppppppcVar15,&ppppppcStack_320);
        ppppppcVar14[0x17] = pppppcStack_280;
        ppppppcVar14[0x16] = pppppcStack_288;
        ppppppcVar14[0x19] = (code *****)CONCAT71(uStack_26f,uStack_270);
        ppppppcVar14[0x18] = pppppcStack_278;
        *(undefined8 *)((long)ppppppcVar14 + 0xd1) = uStack_267;
        *(ulong *)((long)ppppppcVar14 + 0xc9) = CONCAT17(uStack_268,uStack_26f);
        param_6 = (code ******)((ulong)&ppppppcStack_3f0 | 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar33,0x10);
          if (bVar2) {
            *ppppppcVar33 = (code *****)((long)*ppppppcVar33 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        ppppppcStack_3d8 = ppppppcStack_430;
        ppppppcStack_3f0 = ppppppcVar34;
        ppppppcStack_3e8 = ppppppcVar15;
        ppppppcStack_3e0 = ppppppcVar14;
        (**(code **)(alStack_428[0] + 0x10))(apuStack_3d0,plVar11);
        ppppppcStack_398 = ppppppcStack_470;
        (**(code **)(alStack_468[0] + 0x18))(apuStack_390,plVar30);
        ppppppcVar15 = ppppppcVar34 + 0x22;
        ppppppcVar34 = (code ******)ppppppcVar34[0x24];
        if (ppppppcVar34 == (code ******)0x0) {
          pppppppcVar16 = (code *******)0xa8;
          __Znwm();
          pppppppcVar16[1] = ppppppcStack_3e8;
          *pppppppcVar16 = ppppppcStack_3f0;
          *param_6 = (code *****)0x0;
          param_6[1] = (code *****)0x0;
          pppppppcVar16[2] = ppppppcStack_3e0;
          pppppppcVar16[3] = ppppppcStack_3d8;
          (*(code *)apuStack_3d0[0][2])(pppppppcVar16 + 4,apuStack_3d0);
          pppppppcVar16[0xb] = ppppppcStack_398;
          (*(code *)apuStack_390[0][2])(pppppppcVar16 + 0xc,apuStack_390);
          pppppppcVar16[0x14] = (code ******)0x10aadef90;
          pppppppcStack_508 = (code *******)FUN_10aadecb0;
          pppppppcVar19 = (code *******)&pppppppcStack_508;
          pppppppcStack_500 = pppppppcVar16;
          ppppppcStack_4f8 = ppppppcVar15;
          (*(code *)**ppppppcVar15)(ppppppcVar15);
        }
        else {
          lStack_538 = 0;
          (*(code *)(*ppppppcVar34)[5])(ppppppcVar34,0,&lStack_538);
          if (lStack_538 != 0) {
            func_0x0001092af97c(&lStack_538);
            goto LAB_10aababbc;
          }
          pppppppcVar16 = (code *******)0xb0;
          __Znwm();
          pppppppcVar16[1] = ppppppcStack_3e8;
          *pppppppcVar16 = ppppppcStack_3f0;
          *param_6 = (code *****)0x0;
          param_6[1] = (code *****)0x0;
          pppppppcVar16[2] = ppppppcStack_3e0;
          pppppppcVar16[3] = ppppppcStack_3d8;
          (*(code *)apuStack_3d0[0][2])(pppppppcVar16 + 4,apuStack_3d0);
          pppppppcVar16[0xb] = ppppppcStack_398;
          (*(code *)apuStack_390[0][2])(pppppppcVar16 + 0xc,apuStack_390);
          pppppppcVar16[0x14] = (code ******)FUN_10aadef44;
          pppppppcVar16[0x15] = ppppppcVar34;
          pppppppcStack_508 = (code *******)0x10aadec80;
          pppppppcVar19 = (code *******)&pppppppcStack_508;
          pppppppcStack_500 = pppppppcVar16;
          ppppppcStack_4f8 = ppppppcVar15;
          (*(code *)**ppppppcVar15)(ppppppcVar15);
          __ZNSt13exception_ptrD1Ev(&lStack_538);
        }
        lStack_538 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_538);
        (*(code *)*apuStack_390[0])(apuStack_390);
        (*(code *)*apuStack_3d0[0])(apuStack_3d0);
        ppppppcVar34 = ppppppcStack_3e0;
        if (ppppppcStack_3e0 != (code ******)0x0) {
          ppppppcVar15 = ppppppcStack_3e0 + 1;
          do {
            pppppcVar24 = *ppppppcVar15;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar15,0x10);
            if (bVar2) {
              *ppppppcVar15 = (code *****)((long)pppppcVar24 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (pppppcVar24 == (code *****)0x0) {
            (*(code *)(*ppppppcStack_3e0)[2])(ppppppcStack_3e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar34);
          }
        }
        if (ppppppcVar14 != (code ******)0x0) {
          ppppppcVar34 = ppppppcVar14 + 1;
          do {
            pppppcVar24 = *ppppppcVar34;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar34,0x10);
            if (bVar2) {
              *ppppppcVar34 = (code *****)((long)pppppcVar24 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (pppppcVar24 == (code *****)0x0) {
            (*(code *)(*ppppppcVar14)[2])(ppppppcVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar14);
          }
        }
      }
      if (plStack_290 != (long *)0x0) {
        plVar17 = plStack_290 + 1;
        do {
          lVar23 = *plVar17;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar2) {
            *plVar17 = lVar23 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar23 == 0) {
          (**(code **)(*plStack_290 + 0x10))(plStack_290);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_290);
        }
      }
      ppppppcVar34 = (code ******)&ppppppcStack_320;
      (*(code *)*apuStack_2d8[0])(apuStack_2d8);
      (*(code *)*puStack_318)(&puStack_318);
    }
  }
  while( true ) {
    iVar26 = (int)pppppppcVar19;
    (**(code **)*plVar30)(plVar30);
    plVar17 = plVar11;
    (**(code **)*plVar11)(plVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
      return;
    }
    ___stack_chk_fail();
    if (iVar26 == 0) break;
    __ZdlPv(param_6);
    param_6 = (code ******)&ppppppcStack_320;
    func_0x00010a09db0c(&lStack_298);
    (*(code *)*apuStack_2d8[0])(apuStack_2d8);
    (*(code *)*puStack_318)(&puStack_318);
    ___cxa_begin_catch(plVar17);
    *(char *)(ppppppcVar34 + 0x20) = '\0';
    __ZSt17current_exceptionv(&ppppppcStack_320);
    pppppppcVar19 = &ppppppcStack_320;
    FUN_10aabadb4(&ppppppcStack_470);
    __ZNSt13exception_ptrD1Ev(&ppppppcStack_320);
    ___cxa_end_catch();
  }
  __Unwind_Resume(plVar17);
  ___cxa_begin_catch(plVar17);
  *(char *)(ppppppcVar34 + 0x20) = '\0';
  ___cxa_rethrow();
LAB_10aababbc:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10aababc0);
  (*pcVar7)();
}



/* Entry: 10aaba45c; end: 10aabad2f;  */

void FUN_10aaba45c(code *****param_1,undefined8 param_2,int param_3,undefined8 *param_4,
                  undefined8 *param_5,code *****param_6)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *****pppppcVar5;
  code *****pppppcVar6;
  code ******ppppppcVar7;
  long *plVar8;
  int iVar9;
  code ******ppppppcVar10;
  code ****ppppcVar11;
  code ****ppppcVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  code *****pppppcVar16;
  long lStack_348;
  code ***pppcStack_340;
  code ***pppcStack_338;
  code ***pppcStack_330;
  code ***pppcStack_328;
  code *****pppppcStack_318;
  code *****pppppcStack_310;
  code ****ppppcStack_308;
  undefined8 uStack_300;
  long alStack_2f8 [7];
  code ****ppppcStack_2c0;
  long alStack_2b8 [7];
  code ****ppppcStack_280;
  long alStack_278 [7];
  code ****ppppcStack_240;
  long alStack_238 [7];
  code ****ppppcStack_200;
  code ****ppppcStack_1f8;
  code ****ppppcStack_1f0;
  code ****ppppcStack_1e8;
  undefined8 *apuStack_1e0 [5];
  undefined8 *apuStack_1b8 [2];
  code ****ppppcStack_1a8;
  undefined8 *apuStack_1a0 [6];
  long *plStack_170;
  code ***pppcStack_168;
  code ***pppcStack_160;
  code ***pppcStack_158;
  undefined8 uStack_147;
  code ****ppppcStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 *apuStack_e8 [8];
  long lStack_a8;
  long *plStack_a0;
  code ***pppcStack_98;
  code ***pppcStack_90;
  code ***pppcStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_4 + 1;
  if (param_3 == 0) {
    plVar14 = alStack_2b8;
    ppppcStack_2c0 = (code ****)*param_4;
    (**(code **)(*plVar15 + 0x10))(plVar14,plVar15);
    uStack_300 = *param_5;
    plVar15 = alStack_2f8;
    (**(code **)(param_5[1] + 0x10))(plVar15,param_5 + 1);
    pppcStack_338 = (code ***)param_6[1];
    pppcStack_340 = (code ***)*param_6;
    pppcStack_328 = (code ***)param_6[3];
    pppcStack_330 = (code ***)param_6[2];
    pppppcVar5 = param_1;
    (*(code *)**param_1)();
    if (((ulong)pppppcVar5 & 1) == 0) {
      pppppcStack_318 = (code *****)0x0;
      pppppcStack_310 = (code *****)0x0;
      ppppcStack_308 = (code ****)0x0;
    }
    else {
      *(undefined1 *)(param_1 + 0x20) = 1;
      FUN_10aab8ac0(&ppppcStack_130,param_1,param_2,&pppcStack_340,0);
      FUN_10aad501c(&ppppcStack_200,&ppppcStack_130);
      pppcStack_160 = pppcStack_90;
      pppcStack_168 = pppcStack_98;
      pppcStack_158 = pppcStack_88;
      uStack_147 = uStack_77;
      FUN_10aab9ce0(&pppppcStack_318,param_1,&ppppcStack_200,0);
      if (plStack_170 != (long *)0x0) {
        plVar8 = plStack_170 + 1;
        do {
          lVar13 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_170 + 0x10))(plStack_170);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_170);
        }
      }
      (*(code *)*apuStack_1b8[0])(apuStack_1b8);
      (*(code *)*ppppcStack_1f8)(&ppppcStack_1f8);
      *(undefined1 *)(param_1 + 0x20) = 0;
      if (plStack_a0 != (long *)0x0) {
        plVar8 = plStack_a0 + 1;
        do {
          lVar13 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
        }
      }
      param_1 = &ppppcStack_130;
      (*(code *)*apuStack_e8[0])(apuStack_e8);
      (*(code *)*puStack_128)(&puStack_128);
    }
    ppppppcVar10 = (code ******)pppppcStack_318;
    FUN_10aabad30(&ppppcStack_2c0,pppppcStack_318,pppppcStack_310);
    if ((code ******)pppppcStack_318 != (code ******)0x0) {
      pppppcStack_310 = pppppcStack_318;
LAB_10aaba8b4:
      __ZdlPv();
    }
  }
  else {
    plVar14 = alStack_238;
    ppppcStack_240 = (code ****)*param_4;
    (**(code **)(*plVar15 + 0x10))(plVar14,plVar15);
    ppppcStack_280 = (code ****)*param_5;
    plVar15 = alStack_278;
    (**(code **)(param_5[1] + 0x10))(plVar15,param_5 + 1);
    pppcStack_338 = (code ***)param_6[1];
    pppcStack_340 = (code ***)*param_6;
    pppcStack_328 = (code ***)param_6[3];
    pppcStack_330 = (code ***)param_6[2];
    pppppcVar5 = param_1;
    (*(code *)**param_1)();
    if (((ulong)pppppcVar5 & 1) == 0) {
      puStack_128 = (undefined8 *)0x0;
      ppppcStack_130 = (code ****)0x0;
      uStack_120 = 0;
      ppppppcVar10 = (code ******)&ppppcStack_130;
      FUN_10aabae0c(&ppppcStack_240);
      if ((code *****)ppppcStack_130 != (code *****)0x0) goto LAB_10aaba8b4;
    }
    else {
      *(undefined1 *)(param_1 + 0x20) = 1;
      FUN_10aab8ac0(&ppppcStack_130,param_1,param_2,&pppcStack_340,1);
      pppppcVar5 = param_1;
      (*(code *)(*param_1)[0xc])(param_1,&ppppcStack_130);
      if (((ulong)pppppcVar5 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x20) = 0;
        ppppcStack_200 = (code ****)0x0;
        ppppcStack_1f8 = (code ****)0x0;
        ppppcStack_1f0 = (code ****)0x0;
        ppppppcVar10 = (code ******)&ppppcStack_200;
        FUN_10aabae0c(&ppppcStack_240);
        if ((code *****)ppppcStack_200 != (code *****)0x0) {
          __ZdlPv();
        }
      }
      else {
        if (((lStack_a8 != 0) || (*(char *)(apuStack_e8[0] + 1) == '\x01')) &&
           (param_1[4] == (code ****)0x0)) {
          (*(code *)PTR___tlv_bootstrap_11340de10)();
          uVar4 = 0x168;
          __Znwm(0x168);
          FUN_10a08ee34();
          FUN_10aabb088(param_1 + 4,uVar4);
        }
        pppppcVar5 = (code *****)0xe0;
        __Znwm();
        pppppcVar16 = pppppcVar5 + 1;
        *pppppcVar16 = (code ****)0x0;
        pppppcVar5[2] = (code ****)0x0;
        pppppcVar6 = pppppcVar5 + 3;
        *pppppcVar5 = (code ****)&PTR_FUN_110c43e98;
        FUN_10aad501c(pppppcVar6,&ppppcStack_130);
        pppppcVar5[0x17] = (code ****)pppcStack_90;
        pppppcVar5[0x16] = (code ****)pppcStack_98;
        pppppcVar5[0x19] = (code ****)CONCAT71(uStack_7f,uStack_80);
        pppppcVar5[0x18] = (code ****)pppcStack_88;
        *(undefined8 *)((long)pppppcVar5 + 0xd1) = uStack_77;
        *(ulong *)((long)pppppcVar5 + 0xc9) = CONCAT17(uStack_78,uStack_7f);
        param_6 = (code *****)((ulong)&ppppcStack_200 | 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppppcVar16,0x10);
          if (bVar2) {
            *pppppcVar16 = (code ****)((long)*pppppcVar16 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        ppppcStack_1e8 = ppppcStack_240;
        ppppcStack_200 = (code ****)param_1;
        ppppcStack_1f8 = (code ****)pppppcVar6;
        ppppcStack_1f0 = (code ****)pppppcVar5;
        (**(code **)(alStack_238[0] + 0x10))(apuStack_1e0,plVar14);
        ppppcStack_1a8 = ppppcStack_280;
        (**(code **)(alStack_278[0] + 0x18))(apuStack_1a0,plVar15);
        pppppcVar6 = param_1 + 0x22;
        pppppcVar16 = (code *****)param_1[0x24];
        if (pppppcVar16 == (code *****)0x0) {
          ppppppcVar7 = (code ******)0xa8;
          __Znwm();
          ppppppcVar7[1] = (code *****)ppppcStack_1f8;
          *ppppppcVar7 = (code *****)ppppcStack_200;
          *param_6 = (code ****)0x0;
          param_6[1] = (code ****)0x0;
          ppppppcVar7[2] = (code *****)ppppcStack_1f0;
          ppppppcVar7[3] = (code *****)ppppcStack_1e8;
          (*(code *)apuStack_1e0[0][2])(ppppppcVar7 + 4,apuStack_1e0);
          ppppppcVar7[0xb] = (code *****)ppppcStack_1a8;
          (*(code *)apuStack_1a0[0][2])(ppppppcVar7 + 0xc,apuStack_1a0);
          ppppppcVar7[0x14] = (code *****)0x10aadef90;
          pppppcStack_318 = (code *****)FUN_10aadecb0;
          ppppppcVar10 = &pppppcStack_318;
          pppppcStack_310 = (code *****)ppppppcVar7;
          ppppcStack_308 = (code ****)pppppcVar6;
          (*(code *)**pppppcVar6)(pppppcVar6);
        }
        else {
          lStack_348 = 0;
          (*(code *)(*pppppcVar16)[5])(pppppcVar16,0,&lStack_348);
          if (lStack_348 != 0) {
            func_0x0001092af97c(&lStack_348);
            goto LAB_10aababbc;
          }
          ppppppcVar7 = (code ******)0xb0;
          __Znwm();
          ppppppcVar7[1] = (code *****)ppppcStack_1f8;
          *ppppppcVar7 = (code *****)ppppcStack_200;
          *param_6 = (code ****)0x0;
          param_6[1] = (code ****)0x0;
          ppppppcVar7[2] = (code *****)ppppcStack_1f0;
          ppppppcVar7[3] = (code *****)ppppcStack_1e8;
          (*(code *)apuStack_1e0[0][2])(ppppppcVar7 + 4,apuStack_1e0);
          ppppppcVar7[0xb] = (code *****)ppppcStack_1a8;
          (*(code *)apuStack_1a0[0][2])(ppppppcVar7 + 0xc,apuStack_1a0);
          ppppppcVar7[0x14] = (code *****)FUN_10aadef44;
          ppppppcVar7[0x15] = pppppcVar16;
          pppppcStack_318 = (code *****)0x10aadec80;
          ppppppcVar10 = &pppppcStack_318;
          pppppcStack_310 = (code *****)ppppppcVar7;
          ppppcStack_308 = (code ****)pppppcVar6;
          (*(code *)**pppppcVar6)(pppppcVar6);
          __ZNSt13exception_ptrD1Ev(&lStack_348);
        }
        lStack_348 = 0;
        __ZNSt13exception_ptrD1Ev(&lStack_348);
        (*(code *)*apuStack_1a0[0])(apuStack_1a0);
        (*(code *)*apuStack_1e0[0])(apuStack_1e0);
        ppppcVar12 = ppppcStack_1f0;
        if ((code *****)ppppcStack_1f0 != (code *****)0x0) {
          pppppcVar6 = (code *****)(ppppcStack_1f0 + 1);
          do {
            ppppcVar11 = *pppppcVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppppcVar6,0x10);
            if (bVar2) {
              *pppppcVar6 = (code ****)((long)ppppcVar11 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (ppppcVar11 == (code ****)0x0) {
            (*(code *)(*ppppcStack_1f0)[2])(ppppcStack_1f0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar12);
          }
        }
        if (pppppcVar5 != (code *****)0x0) {
          pppppcVar6 = pppppcVar5 + 1;
          do {
            ppppcVar12 = *pppppcVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppppcVar6,0x10);
            if (bVar2) {
              *pppppcVar6 = (code ****)((long)ppppcVar12 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (ppppcVar12 == (code ****)0x0) {
            (*(code *)(*pppppcVar5)[2])(pppppcVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar5);
          }
        }
      }
      if (plStack_a0 != (long *)0x0) {
        plVar8 = plStack_a0 + 1;
        do {
          lVar13 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
        }
      }
      param_1 = &ppppcStack_130;
      (*(code *)*apuStack_e8[0])(apuStack_e8);
      (*(code *)*puStack_128)(&puStack_128);
    }
  }
  while( true ) {
    iVar9 = (int)ppppppcVar10;
    (**(code **)*plVar15)(plVar15);
    plVar8 = plVar14;
    (**(code **)*plVar14)(plVar14);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
    if (iVar9 == 0) break;
    __ZdlPv(param_6);
    param_6 = &ppppcStack_130;
    func_0x00010a09db0c(&lStack_a8);
    (*(code *)*apuStack_e8[0])(apuStack_e8);
    (*(code *)*puStack_128)(&puStack_128);
    ___cxa_begin_catch(plVar8);
    *(undefined1 *)(param_1 + 0x20) = 0;
    __ZSt17current_exceptionv(&ppppcStack_130);
    ppppppcVar10 = (code ******)&ppppcStack_130;
    FUN_10aabadb4(&ppppcStack_280);
    __ZNSt13exception_ptrD1Ev(&ppppcStack_130);
    ___cxa_end_catch();
  }
  __Unwind_Resume(plVar8);
  ___cxa_begin_catch(plVar8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  ___cxa_rethrow();
LAB_10aababbc:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aababc0);
  (*pcVar3)();
}



/* Entry: 10aabad30; end: 10aabadb3;  */

void FUN_10aabad30(undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  pcVar1 = (code *)*param_1;
  lStack_30 = 0;
  uStack_28 = 0;
  lStack_38 = 0;
  FUN_10a22cc2c(&lStack_38,param_2,param_3,(param_3 - param_2 >> 2) * -0x3333333333333333);
  (*pcVar1)(&lStack_38,param_1);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}


