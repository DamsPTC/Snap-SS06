/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10923299c; end: 109232a87;  */

void FUN_10923299c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae3090;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109232a88; end: 109232a8b;  */

void FUN_109232a88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109232a8c; end: 109232ae3;  */

long FUN_109232a8c(long param_1)

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



/* Entry: 109232ae4; end: 109232b43;  */

void FUN_109232ae4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae3130);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 109232b44; end: 109232c97;  */

long * FUN_109232b44(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = param_2;
  plVar4 = (long *)0x38;
  __Znwm();
  plVar6 = plVar4 + 1;
  *plVar6 = 0;
  lVar8 = param_3[1];
  lVar7 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  lVar5 = param_3[2];
  *plVar4 = (long)&PTR_DAT_110ae30f0;
  plVar4[2] = 0;
  plVar4[3] = param_2;
  plVar4[5] = lVar8;
  plVar4[4] = lVar7;
  *(int *)(plVar4 + 6) = (int)lVar5;
  *(undefined4 *)((long)plVar4 + 0x34) = 0;
  param_1[1] = (long)plVar4;
  if (*(long *)(param_2 + 0x10) == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(param_2 + 8) = param_2;
    *(long **)(param_2 + 0x10) = plVar4;
  }
  else {
    if (*(long *)(*(long *)(param_2 + 0x10) + 8) != -1) {
      return param_1;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(param_2 + 8) = param_2;
    *(long **)(param_2 + 0x10) = plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
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
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return param_1;
}



/* Entry: 109232c98; end: 109232dcf;  */

void FUN_109232c98(long *param_1,long *param_2)

{
  func_0x000109fcc0a8(*param_1 + 0x820,(int)param_1[2],param_2);
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109232cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  return;
}



/* Entry: 109232dd0; end: 109232dd3;  */

void FUN_109232dd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109232dd4; end: 109232e2b;  */

long FUN_109232dd4(long param_1)

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



/* Entry: 109232e2c; end: 109232e8b;  */

void FUN_109232e2c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae3190);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 109232e8c; end: 109232f33;  */

long * FUN_109232e8c(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = param_2;
  puVar3 = (undefined8 *)0x38;
  __Znwm();
  uVar5 = param_3[1];
  uVar4 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uVar2 = *(undefined4 *)(param_3 + 2);
  *puVar3 = &PTR_DAT_110ae3150;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = param_2;
  puVar3[5] = uVar5;
  puVar3[4] = uVar4;
  *(undefined4 *)(puVar3 + 6) = uVar2;
  *(undefined4 *)((long)puVar3 + 0x34) = 0;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  param_1[1] = (long)puVar3;
  FUN_109232f34(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 109232f34; end: 10923311b;  */

void FUN_109232f34(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10923311c; end: 10923311f;  */

void FUN_10923311c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109233120; end: 109233177;  */

long FUN_109233120(long param_1)

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



/* Entry: 109233178; end: 1092331d7;  */

void FUN_109233178(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae31f0);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 1092331d8; end: 1092332c3;  */

void FUN_1092331d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae31b0;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 1092332c4; end: 1092332c7;  */

void FUN_1092332c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092332c8; end: 10923331f;  */

long FUN_1092332c8(long param_1)

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



/* Entry: 109233320; end: 10923337f;  */

void FUN_109233320(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae3250);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 109233380; end: 10923346b;  */

void FUN_109233380(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae3210;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10923346c; end: 10923346f;  */

void FUN_10923346c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109233470; end: 1092334c7;  */

long FUN_109233470(long param_1)

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



/* Entry: 1092334c8; end: 109233527;  */

void FUN_1092334c8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae32b0);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 109233528; end: 109233613;  */

void FUN_109233528(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae3270;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109233614; end: 109233617;  */

void FUN_109233614(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109233618; end: 10923366f;  */

long FUN_109233618(long param_1)

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



/* Entry: 109233670; end: 1092336cf;  */

void FUN_109233670(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae3310);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 1092336d0; end: 1092337bb;  */

void FUN_1092336d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae32d0;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 1092337bc; end: 1092337bf;  */

void FUN_1092337bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092337c0; end: 109233817;  */

long FUN_1092337c0(long param_1)

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



/* Entry: 109233818; end: 109233877;  */

void FUN_109233818(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae3370);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 109233878; end: 109233963;  */

void FUN_109233878(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae3330;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109233964; end: 109233967;  */

void FUN_109233964(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109233968; end: 1092339bf;  */

long FUN_109233968(long param_1)

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



/* Entry: 1092339c0; end: 109233a1f;  */

void FUN_1092339c0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae33d0);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 109233a20; end: 109233b0b;  */

void FUN_109233a20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae3390;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109233b0c; end: 109233b0f;  */

void FUN_109233b0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109233b10; end: 109233b67;  */

long FUN_109233b10(long param_1)

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



/* Entry: 109233b68; end: 109233bc7;  */

void FUN_109233b68(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae3430);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 109233bc8; end: 109233c6f;  */

long * FUN_109233bc8(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = param_2;
  puVar3 = (undefined8 *)0x38;
  __Znwm();
  uVar5 = param_3[1];
  uVar4 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uVar2 = *(undefined4 *)(param_3 + 2);
  *puVar3 = &PTR_DAT_110ae33f0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = param_2;
  puVar3[5] = uVar5;
  puVar3[4] = uVar4;
  *(undefined4 *)(puVar3 + 6) = uVar2;
  *(undefined4 *)((long)puVar3 + 0x34) = 0;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  param_1[1] = (long)puVar3;
  FUN_109233c70(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 109233c70; end: 109233e57;  */

void FUN_109233c70(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 109233e58; end: 109233e5b;  */

void FUN_109233e58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109233e5c; end: 109233eb3;  */

long FUN_109233e5c(long param_1)

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



/* Entry: 109233eb4; end: 109233f13;  */

void FUN_109233eb4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae3490);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 109233f14; end: 109233fff;  */

void FUN_109233f14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae3450;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109234000; end: 109234003;  */

void FUN_109234000(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109234004; end: 10923405b;  */

long FUN_109234004(long param_1)

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



/* Entry: 10923405c; end: 1092340bb;  */

void FUN_10923405c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae34f0);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 1092340bc; end: 1092341a7;  */

void FUN_1092340bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae34b0;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 1092341a8; end: 1092341ab;  */

void FUN_1092341a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092341ac; end: 109234203;  */

long FUN_1092341ac(long param_1)

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



/* Entry: 109234204; end: 109234263;  */

void FUN_109234204(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae3550);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 109234264; end: 10923434f;  */

void FUN_109234264(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae3510;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109234350; end: 109234353;  */

void FUN_109234350(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109234354; end: 1092343ab;  */

long FUN_109234354(long param_1)

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



/* Entry: 1092343ac; end: 109234483;  */

void FUN_1092343ac(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  undefined1 uStack_21;
  
  FUN_109234484(&uStack_50,&uStack_21,param_2);
  plStack_38 = plStack_48;
  uStack_40 = uStack_50;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  func_0x000109fd097c(param_1,&uStack_40);
  plVar4 = plStack_38;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 109234484; end: 1092344e3;  */

void FUN_109234484(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = 0x918;
  __Znwm();
  FUN_1092344e4();
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 1092344e4; end: 10923452b;  */

undefined8 * FUN_1092344e4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ae35b0;
  FUN_10922e4d0(param_1 + 3);
  return param_1;
}



/* Entry: 10923452c; end: 10923453b;  */

void FUN_10923452c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae35b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10923453c; end: 10923455b;  */

void FUN_10923453c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae35b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10923455c; end: 109234587;  */

void FUN_10923455c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x900) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_110ae2bc0;
  if (*(long *)(param_1 + 0x8d8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110b97fe0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x838);
  lVar2 = *(long *)(param_1 + 0x898);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x838);
  if (((lVar2 != 0) && ((*(byte *)(param_1 + 0x828) >> 1 & 1) != 0)) &&
     (*(uint *)(param_1 + 0x830) < 6)) {
    func_0x000109fd19d0(param_1 + 0x828,5,2,&UNK_10f62e8ff,0x8f);
  }
  lStack_28 = param_1 + 0x8b0;
  func_0x000109fcb970(&lStack_28);
  func_0x00010924c278(param_1 + 0x8a8,0);
  func_0x00010924c250(param_1 + 0x8a0,0);
  func_0x000109fcb9e0(param_1 + 0x838);
  func_0x000109fc913c(puVar1);
  return;
}



/* Entry: 109234588; end: 10923458b;  */

void FUN_109234588(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10923458c; end: 109234693;  */

void FUN_10923458c(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 109234694; end: 1092346af;  */

undefined8 FUN_109234694(void)

{
  return 0;
}



/* Entry: 1092346b0; end: 1092346c3;  */

void FUN_1092346b0(void)

{
  FUN_1092346d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092346c4; end: 1092346d7;  */

undefined8 FUN_1092346c4(void)

{
  return 0;
}



/* Entry: 1092346d8; end: 10923476b;  */

undefined8 * FUN_1092346d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b97d00;
  __ZNSt3__15mutexD1Ev(param_1 + 5);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10923476c; end: 10923477b;  */

undefined8 FUN_10923476c(void)

{
  return 0;
}



/* Entry: 10923477c; end: 1092347d3;  */

long FUN_10923477c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1092347d4; end: 10923487f;  */

undefined8 FUN_1092347d4(void)

{
  return 0;
}



/* Entry: 109234880; end: 1092348d7;  */

long FUN_109234880(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1092348d8; end: 10923490b;  */

void FUN_1092348d8(void)

{
  return;
}



/* Entry: 10923490c; end: 10923491f;  */

void FUN_10923490c(void)

{
  FUN_109234930();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109234920; end: 10923492f;  */

undefined8 FUN_109234920(void)

{
  return 0;
}



/* Entry: 109234930; end: 109234a07;  */

undefined8 * FUN_109234930(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b97e88;
  func_0x000109234978(param_1 + 0xab);
  FUN_109234a54(param_1 + 0xa1);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109234a08; end: 109234a53;  */

/* WARNING: Removing unreachable block (ram,0x000109234a34) */

void FUN_109234a08(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x20) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 109234a54; end: 109234af3;  */

long FUN_109234a54(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    lStack_28 = param_1 + 0x30;
    func_0x000109234ab4(&lStack_28);
    if (*(long *)(param_1 + 0x18) != 0) {
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
      __ZdlPv();
    }
    lStack_28 = param_1;
    func_0x00010922e0d8(&lStack_28);
  }
  return param_1;
}



/* Entry: 109234af4; end: 109234b3f;  */

/* WARNING: Removing unreachable block (ram,0x000109234b20) */

void FUN_109234af4(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x20) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 109234b40; end: 109234b97;  */

long FUN_109234b40(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109234b98; end: 109234ba7;  */

undefined8 FUN_109234b98(void)

{
  return 0;
}



/* Entry: 109234ba8; end: 109234bff;  */

long FUN_109234ba8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109234c00; end: 109234c13;  */

undefined8 FUN_109234c00(void)

{
  return 0;
}



/* Entry: 109234c14; end: 109234c27;  */

void FUN_109234c14(void)

{
  FUN_109234c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109234c28; end: 109234c37;  */

undefined8 FUN_109234c28(void)

{
  return 0;
}



/* Entry: 109234c38; end: 109234c93;  */

undefined8 * FUN_109234c38(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ae3a88;
  if (*(char *)(param_1 + 8) == '\x01') {
    puStack_28 = param_1 + 5;
    FUN_109234cac(&puStack_28);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109234c94; end: 109234c97;  */

undefined8 * FUN_109234c94(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ae3a88;
  if (*(char *)(param_1 + 8) == '\x01') {
    puStack_28 = param_1 + 5;
    FUN_109234cac(&puStack_28);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109234c98; end: 109234cab;  */

void FUN_109234c98(void)

{
  FUN_109234c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109234cac; end: 109234d1b;  */

void FUN_109234cac(long *param_1)

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
        FUN_109234d1c(lVar2);
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



/* Entry: 109234d1c; end: 109234d9f;  */

void FUN_109234d1c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 3;
  func_0x000109234d60(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return;
}



/* Entry: 109234da0; end: 109234deb;  */

/* WARNING: Removing unreachable block (ram,0x000109234dcc) */

void FUN_109234da0(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 109234dec; end: 109234ef7;  */

undefined8 * FUN_109234dec(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  puVar3 = param_1;
  func_0x000109fc9ed0();
  puVar7 = puVar3 + 0x1e;
  *puVar7 = 0;
  *puVar3 = &PTR_FUN_110ae3ae0;
  puVar3[0x1f] = 0;
  puVar3[0x20] = 0;
  uVar5 = *(ulong *)(param_3 + 0x10);
  if (0x7ffffffffffffff7 < uVar5) {
    func_0x000104c4f6b8();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109234ed4);
    (*pcVar2)();
  }
  uVar6 = *(undefined8 *)(param_3 + 8);
  if (uVar5 < 0x17) {
    uStack_48 = CONCAT17((char)uVar5,(undefined7)uStack_48);
    pppuVar4 = &ppuStack_58;
    if (uVar5 == 0) goto LAB_109234e8c;
  }
  else {
    pppuVar1 = (undefined8 ***)0x19;
    if ((uVar5 | 7) != 0x17) {
      pppuVar1 = (undefined8 ***)((uVar5 | 7) + 1);
    }
    pppuVar4 = pppuVar1;
    __Znwm();
    uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
    ppuStack_58 = pppuVar4;
    uStack_50 = uVar5;
  }
  _memmove(pppuVar4,uVar6,uVar5);
LAB_109234e8c:
  *(undefined1 *)((long)pppuVar4 + uVar5) = 0;
  if (*(char *)((long)param_1 + 0x107) < '\0') {
    __ZdlPv(*puVar7);
  }
  puVar3[0x1f] = uStack_50;
  *puVar7 = (ulong)ppuStack_58;
  puVar3[0x20] = uStack_48;
  return param_1;
}



/* Entry: 109234ef8; end: 109234f9f;  */

undefined8 * FUN_109234ef8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110b97f28;
  if (*(char *)(param_1 + 0x1d) == '\x01') {
    puStack_28 = param_1 + 0x1a;
    FUN_109234fc8(&puStack_28);
  }
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    puStack_28 = param_1 + 5;
    func_0x0001092349c8(&puStack_28);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109234fa0; end: 109234fa3;  */

undefined8 * FUN_109234fa0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (*(char *)((long)param_1 + 0x107) < '\0') {
    __ZdlPv(param_1[0x1e]);
  }
  *param_1 = &PTR_DAT_110b97f28;
  if (*(char *)(param_1 + 0x1d) == '\x01') {
    puStack_28 = param_1 + 0x1a;
    FUN_109234fc8(&puStack_28);
  }
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    puStack_28 = param_1 + 5;
    func_0x0001092349c8(&puStack_28);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109234fa4; end: 109234fb7;  */

void FUN_109234fa4(void)

{
  FUN_109235054();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109234fb8; end: 109234fc7;  */

undefined8 FUN_109234fb8(void)

{
  return 0;
}



/* Entry: 109234fc8; end: 109235007;  */

void FUN_109234fc8(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_109235008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 109235008; end: 109235053;  */

/* WARNING: Removing unreachable block (ram,0x000109235030) */

void FUN_109235008(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x20) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 109235054; end: 109235083;  */

undefined8 * FUN_109235054(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (*(char *)((long)param_1 + 0x107) < '\0') {
    __ZdlPv(param_1[0x1e]);
  }
  *param_1 = &PTR_DAT_110b97f28;
  if (*(char *)(param_1 + 0x1d) == '\x01') {
    puStack_28 = param_1 + 0x1a;
    FUN_109234fc8(&puStack_28);
  }
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    puStack_28 = param_1 + 5;
    func_0x0001092349c8(&puStack_28);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109235084; end: 10923509f;  */

long FUN_109235084(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0x98) == '\x01') {
    lVar5 = 0;
    uVar4 = 0;
    uVar1 = *(uint *)(param_1 + 0x3c);
    do {
      uVar3 = (ulong)*(uint *)(param_1 + 0x34);
      lVar2 = param_1 + 0x24;
      func_0x000109fc8e08(lVar2,uVar3,uVar4);
      func_0x000109fc8e58();
      lVar5 = lVar5 + lVar2 * (uVar3 & 0xffffffff);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x30));
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    return lVar5 * (ulong)uVar1;
  }
  return 0;
}



/* Entry: 1092350a0; end: 1092350b3;  */

void FUN_1092350a0(void)

{
  FUN_1092350bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092350b4; end: 1092350bb;  */

undefined8 FUN_1092350b4(void)

{
  return 0;
}


