/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1092525f0; end: 109252653;  */

void FUN_1092525f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae6330;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109252654; end: 109252687;  */

undefined8 * FUN_109252654(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109252550(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x18));
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
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 109252688; end: 1092526c3;  */

long FUN_109252688(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae6370);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1092526c4; end: 1092526c7;  */

void FUN_1092526c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092526c8; end: 109252727;  */

void FUN_1092526c8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae63d0);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 109252728; end: 1092527cf;  */

long * FUN_109252728(long *param_1,long param_2,undefined8 *param_3)

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
  *puVar3 = &PTR_FUN_110ae6390;
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
  FUN_1092527d0(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 1092527d0; end: 10925287f;  */

void FUN_1092527d0(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 109252880; end: 109252927;  */

void FUN_109252880(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plStack_38;
  
  lVar2 = *param_1;
  lVar1 = lVar2 + 0x820;
  func_0x000109fcc0a8(lVar1,(int)param_1[2],param_2);
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(lVar2 + 0x1448);
    plStack_38 = param_2;
    FUN_10924fd6c(lVar2 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(lVar2 + 0x1448);
  }
  else if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001092528d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  return;
}



/* Entry: 109252928; end: 10925298b;  */

void FUN_109252928(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae6390;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10925298c; end: 1092529bb;  */

long FUN_10925298c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109252880(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
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
  return param_1 + 0x20;
}



/* Entry: 1092529bc; end: 1092529f7;  */

long FUN_1092529bc(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae63d0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1092529f8; end: 1092529fb;  */

void FUN_1092529f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092529fc; end: 109252a5b;  */

void FUN_1092529fc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[1];
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1,&PTR_DAT_110ae6430);
  }
  param_1 = param_1 + 0x820;
  func_0x000109fcbf14(param_1,*param_2);
  *(int *)(plVar1 + 2) = (int)param_1;
  return;
}



/* Entry: 109252a5c; end: 109252b03;  */

long * FUN_109252a5c(long *param_1,long param_2,undefined8 *param_3)

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
  *puVar3 = &PTR_FUN_110ae63f0;
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
  FUN_109252b04(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 109252b04; end: 109252bb3;  */

void FUN_109252b04(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 109252bb4; end: 109252c5b;  */

void FUN_109252bb4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plStack_38;
  
  lVar2 = *param_1;
  lVar1 = lVar2 + 0x820;
  func_0x000109fcc0a8(lVar1,(int)param_1[2],param_2);
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(lVar2 + 0x1448);
    plStack_38 = param_2;
    FUN_10924fd6c(lVar2 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(lVar2 + 0x1448);
  }
  else if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109252c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  return;
}



/* Entry: 109252c5c; end: 109252cbf;  */

void FUN_109252c5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae63f0;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109252cc0; end: 109252cef;  */

long FUN_109252cc0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109252bb4(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
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
  return param_1 + 0x20;
}



/* Entry: 109252cf0; end: 109252d2b;  */

long FUN_109252cf0(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae6430);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109252d2c; end: 109252d2f;  */

void FUN_109252d2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109252d30; end: 109252dcf;  */

void FUN_109252d30(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plStack_38;
  
  lVar1 = param_1 + 0x820;
  func_0x000109fcc0a8();
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x1448);
    plStack_38 = param_3;
    FUN_10924fd6c(param_1 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x1448);
  }
  else if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109252d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}



/* Entry: 109252dd0; end: 109252e33;  */

void FUN_109252dd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae6450;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109252e34; end: 109252e67;  */

undefined8 * FUN_109252e34(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109252d30(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x18));
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
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 109252e68; end: 109252ea3;  */

long FUN_109252e68(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae6490);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109252ea4; end: 109252ea7;  */

void FUN_109252ea4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109252ea8; end: 109252f47;  */

void FUN_109252ea8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plStack_38;
  
  lVar1 = param_1 + 0x820;
  func_0x000109fcc0a8();
  FUN_109374fe0();
  if (lVar1 == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x1448);
    plStack_38 = param_3;
    FUN_10924fd6c(param_1 + 0x1488,&plStack_38);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x1448);
  }
  else if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109252ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}



/* Entry: 109252f48; end: 109252fab;  */

void FUN_109252f48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae64b0;
  FUN_1092318b0(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 109252fac; end: 109252fdf;  */

undefined8 * FUN_109252fac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109252ea8(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x18));
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
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 109252fe0; end: 10925301b;  */

long FUN_109252fe0(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae64f0);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10925301c; end: 10925301f;  */

void FUN_10925301c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109253020; end: 109253077;  */

long FUN_109253020(long param_1)

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



/* Entry: 109253078; end: 1092531ff;  */

undefined8 *
FUN_109253078(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4,undefined8 param_5)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0x12;
  *param_1 = &PTR_FUN_110ae6510;
  param_1[1] = 0;
  if (*(char *)(param_3 + 2) == '\x01') {
    param_1[5] = *param_3;
    *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_3 + 1);
    *param_3 = 0;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x14b0);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_2 + 0x14a0);
    }
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)(lVar3 + 0x31);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    FUN_109374d60();
    param_1[5] = uVar2;
  }
  param_1[7] = param_2 + 0x930;
  param_1[8] = param_2 + 0x810;
  bVar1 = *(byte *)(param_4 + 2);
  *(byte *)(param_1 + 9) = bVar1;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = param_2 + 0x810;
  param_1[0x14] = param_1;
  param_1[0x15] = param_2 + 0x930;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(uint *)(param_1 + 0x19) = (uint)bVar1;
  FUN_10925a578(param_1 + 0x1a);
  param_1[0x5a] = param_5;
  *(bool *)(param_1 + 0x5b) = *(char *)(param_4 + 2) != '\0';
  *(undefined1 *)((long)param_1 + 0x2d9) = 0;
  *(undefined1 *)((long)param_1 + 0x2da) = *(undefined1 *)(param_4 + 1);
  lVar3 = 0x50;
  do {
    FUN_1092538c0((long)param_1 + lVar3,0,0);
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x80);
  return param_1;
}



/* Entry: 109253200; end: 109253373;  */

long FUN_109253200(long param_1)

{
  long lVar1;
  long alStack_50 [4];
  
  FUN_10924a2ac(alStack_50,param_1 + 0x28);
  FUN_109253374(param_1);
  if (alStack_50[0] != 0) {
    FUN_10924a39c(alStack_50);
  }
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
  if (*(long *)(param_1 + 600) != 0) {
    *(long *)(param_1 + 0x260) = *(long *)(param_1 + 600);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x138);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8);
    __ZdlPv();
  }
  alStack_50[0] = param_1 + 0xb0;
  func_0x000109256b98(alStack_50);
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x80);
    __ZdlPv();
  }
  lVar1 = 0x70;
  do {
    func_0x000109253934(param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x40);
  FUN_10924a26c(param_1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109253374; end: 109253403;  */

void FUN_109253374(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x868))(1);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  lVar2 = param_1 + 0x50;
  lVar3 = -3;
  do {
    FUN_1092538c0(lVar2,0,0);
    lVar2 = lVar2 + 0x10;
    bVar1 = lVar3 != -1;
    lVar3 = lVar3 + 1;
  } while (bVar1);
  lVar2 = *(long *)(param_1 + 0xb0);
  for (lVar3 = *(long *)(param_1 + 0xb8); lVar3 != lVar2; lVar3 = lVar3 + -0x1d0) {
    func_0x000109256f04(lVar3 + -8,0);
  }
  *(long *)(param_1 + 0xb8) = lVar2;
  return;
}



/* Entry: 109253404; end: 109253407;  */

long FUN_109253404(long param_1)

{
  long lVar1;
  long alStack_50 [4];
  
  FUN_10924a2ac(alStack_50,param_1 + 0x28);
  FUN_109253374(param_1);
  if (alStack_50[0] != 0) {
    FUN_10924a39c(alStack_50);
  }
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
  if (*(long *)(param_1 + 600) != 0) {
    *(long *)(param_1 + 0x260) = *(long *)(param_1 + 600);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x138);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8);
    __ZdlPv();
  }
  alStack_50[0] = param_1 + 0xb0;
  func_0x000109256b98(alStack_50);
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x80);
    __ZdlPv();
  }
  lVar1 = 0x70;
  do {
    func_0x000109253934(param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x40);
  FUN_10924a26c(param_1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109253408; end: 10925341b;  */

void FUN_109253408(void)

{
  FUN_109253200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10925341c; end: 10925352b;  */

void FUN_10925341c(undefined8 *param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &PTR___tlv_bootstrap_11340dcf0;
  (*(code *)PTR___tlv_bootstrap_11340dcf0)();
  puVar4 = *ppuVar2;
  *ppuVar2 = param_2;
  FUN_10924a2ac(&uStack_60,param_2 + 0x28);
  if ((param_2[0x2d9] & 1) == 0) {
    lVar5 = *(long *)(param_2 + 0x38);
    (**(code **)(lVar5 + 0x950))(0xcf5,1);
    (**(code **)(lVar5 + 0x950))(0xd05,1);
    if (*(char *)(lVar5 + 0x45) == '\x01') {
      _glEnable(0x8d69);
    }
    param_2[0x2d9] = 1;
  }
  uVar1 = uStack_60;
  uStack_60 = 0;
  puVar3 = (undefined8 *)0x28;
  __Znwm();
  *puVar3 = uVar1;
  puVar3[1] = uStack_58;
  puVar3[3] = uStack_48;
  puVar3[2] = uStack_50;
  puVar3[4] = puVar4;
  *param_1 = &PTR_DAT_110ae6558;
  param_1[1] = puVar3;
  return;
}



/* Entry: 10925352c; end: 1092535a3;  */

void FUN_10925352c(undefined8 *param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340dcf0;
  (*(code *)PTR___tlv_bootstrap_11340dcf0)();
  puVar4 = *ppuVar1;
  ppuVar2 = ppuVar1;
  FUN_109374fe0();
  if (ppuVar2 != (undefined **)0x0) {
    _CFRetain(ppuVar2);
  }
  *ppuVar1 = (undefined *)0x0;
  FUN_109375044(0);
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  *puVar3 = puVar4;
  puVar3[1] = ppuVar2;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *param_1 = &PTR_FUN_110ae6570;
  param_1[1] = puVar3;
  return;
}



/* Entry: 1092535a4; end: 109253627;  */

bool FUN_1092535a4(undefined *param_1)

{
  bool bVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR___tlv_bootstrap_11340dcf0;
  (*(code *)PTR___tlv_bootstrap_11340dcf0)();
  if (*ppuVar2 == param_1) {
    FUN_109374fe0();
    bVar1 = *(undefined ***)(param_1 + 0x28) == ppuVar2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 109253628; end: 1092536af;  */

void FUN_109253628(long param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 uStack_40;
  long lStack_38;
  
  pbVar3 = *(byte **)(param_1 + 0x40);
  lVar1 = param_1;
  FUN_109374fe0();
  lVar4 = *(long *)(param_1 + 0x28);
  lVar2 = lVar1;
  FUN_109374fe0();
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  if (((lVar4 != lVar1) && ((*pbVar3 >> 2 & 1) != 0)) && (*(uint *)(pbVar3 + 8) < 6)) {
    lStack_38 = lVar2;
    FUN_109253a74(pbVar3,5,4,&UNK_10f55f1a3,0x65,&lStack_38,&uStack_40);
  }
  return;
}



/* Entry: 1092536b0; end: 109253823;  */

long * FUN_1092536b0(long param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lStack_210;
  undefined1 auStack_208 [408];
  long lStack_70;
  long in_stack_ffffffffffffffc8;
  
  if ((*(byte *)(param_1 + 0x2d8) & 1) == 0) {
    iVar7 = (int)param_2;
    if (iVar7 == 0x8d40) {
      lVar6 = 0;
    }
    else if (iVar7 == 0x8ca9) {
      lVar6 = 2;
    }
    else {
      if (iVar7 != 0x8ca8) {
        plVar5 = (long *)&UNK_10f55f209;
        FUN_109243bf8();
        if (in_stack_ffffffffffffffc8 != 0) {
          FUN_10925430c();
          __ZdlPv();
        }
        __Unwind_Resume();
        lVar6 = *param_2;
        lStack_70 = param_1;
        if (lVar6 == 0) {
          puVar3 = (undefined8 *)0x0;
        }
        else {
          puVar3 = (undefined8 *)0x20;
          __Znwm();
          *puVar3 = &PTR_FUN_110ae6598;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = lVar6;
        }
        *param_2 = 0;
        plVar9 = (long *)plVar5[1];
        *plVar5 = lVar6;
        plVar5[1] = (long)puVar3;
        if (plVar9 != (long *)0x0) {
          plVar11 = plVar9 + 1;
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
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        return plVar5;
      }
      lVar6 = 1;
    }
    plVar9 = (long *)(param_1 + lVar6 * 0x10 + 0x50);
    plVar5 = (long *)*plVar9;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x1d0;
      __Znwm();
      lVar6 = *(long *)(param_1 + 0x38);
      *plVar5 = param_1;
      plVar5[1] = lVar6;
      *(undefined4 *)(plVar5 + 2) = 0;
      plVar5[6] = 0;
      plVar5[5] = 0;
      plVar5[8] = 0;
      plVar5[7] = 0;
      plVar5[10] = 0;
      plVar5[9] = 0;
      plVar5[0xc] = 0;
      plVar5[0xb] = 0;
      plVar5[0xe] = 0;
      plVar5[0xd] = 0;
      plVar5[0x10] = 0;
      plVar5[0xf] = 0;
      plVar5[0x12] = 0;
      plVar5[0x11] = 0;
      plVar5[0x14] = 0;
      plVar5[0x13] = 0;
      plVar5[0x16] = 0;
      plVar5[0x15] = 0;
      plVar5[0x18] = 0;
      plVar5[0x17] = 0;
      plVar5[0x1a] = 0;
      plVar5[0x19] = 0;
      plVar5[0x1c] = 0;
      plVar5[0x1b] = 0;
      plVar5[0x1e] = 0;
      plVar5[0x1d] = 0;
      plVar5[0x20] = 0;
      plVar5[0x1f] = 0;
      *(undefined4 *)(plVar5 + 0x33) = 0;
      plVar5[0x37] = 0;
      plVar5[0x36] = 0;
      plVar5[0x39] = 0;
      plVar5[0x38] = 0;
      plVar5[0x35] = 0;
      plVar5[0x34] = 0;
      plVar5[4] = 0;
      plVar5[3] = 0;
      plVar5[0x22] = 0;
      plVar5[0x21] = 0;
      plVar5[0x24] = 0;
      plVar5[0x23] = 0;
      plVar5[0x26] = 0;
      plVar5[0x25] = 0;
      plVar5[0x28] = 0;
      plVar5[0x27] = 0;
      plVar5[0x2a] = 0;
      plVar5[0x29] = 0;
      plVar5[0x2c] = 0;
      plVar5[0x2b] = 0;
      plVar5[0x2e] = 0;
      plVar5[0x2d] = 0;
      plVar5[0x30] = 0;
      plVar5[0x2f] = 0;
      plVar5[0x32] = 0;
      plVar5[0x31] = 0;
      FUN_109253824(plVar9,&stack0xffffffffffffffc8);
      if (plVar5 != (long *)0x0) {
        FUN_10925430c();
        __ZdlPv();
      }
      plVar5 = (long *)*plVar9;
    }
    func_0x0001092545e0(plVar5,param_2,param_3);
    return plVar5;
  }
  FUN_10925675c(&lStack_210,param_3);
  plVar9 = (long *)(param_1 + 0xb0);
  plVar11 = (long *)*plVar9;
  plVar8 = *(long **)(param_1 + 0xb8);
  plVar5 = plVar11;
  if (plVar11 != plVar8) {
    do {
      if (*plVar5 == lStack_210) {
        plVar4 = plVar5 + 1;
        FUN_109256c10(plVar4,auStack_208);
        plVar11 = plVar5;
        if (((ulong)plVar4 & 1) != 0) break;
      }
      plVar5 = plVar5 + 0x3a;
      plVar11 = plVar8;
    } while (plVar5 != plVar8);
    plVar8 = *(long **)(param_1 + 0xb8);
  }
  if (plVar11 == plVar8) {
    if (plVar8 < *(long **)(param_1 + 0xc0)) {
      _memcpy(plVar8,&lStack_210,0x1c0);
      lVar10 = *(long *)(param_1 + 0xa0);
      plVar8[0x38] = 1;
      plVar5 = (long *)0x1d0;
      __Znwm();
      lVar6 = *(long *)(lVar10 + 0x38);
      *plVar5 = lVar10;
      plVar5[1] = lVar6;
      *(undefined4 *)(plVar5 + 2) = 0;
      *(undefined4 *)(plVar5 + 0x33) = 0;
      plVar5[0x20] = 0;
      plVar5[0x1f] = 0;
      plVar5[0x1e] = 0;
      plVar5[0x1d] = 0;
      plVar5[0x1c] = 0;
      plVar5[0x1b] = 0;
      plVar5[0x1a] = 0;
      plVar5[0x19] = 0;
      plVar5[0x18] = 0;
      plVar5[0x17] = 0;
      plVar5[0x16] = 0;
      plVar5[0x15] = 0;
      plVar5[0x14] = 0;
      plVar5[0x13] = 0;
      plVar5[0x12] = 0;
      plVar5[0x11] = 0;
      plVar5[0x10] = 0;
      plVar5[0xf] = 0;
      plVar5[0xe] = 0;
      plVar5[0xd] = 0;
      plVar5[0xc] = 0;
      plVar5[0xb] = 0;
      plVar5[10] = 0;
      plVar5[9] = 0;
      plVar5[8] = 0;
      plVar5[7] = 0;
      plVar5[6] = 0;
      plVar5[5] = 0;
      plVar5[4] = 0;
      plVar5[3] = 0;
      plVar5[0x30] = 0;
      plVar5[0x2f] = 0;
      plVar5[0x32] = 0;
      plVar5[0x31] = 0;
      plVar5[0x2c] = 0;
      plVar5[0x2b] = 0;
      plVar5[0x2e] = 0;
      plVar5[0x2d] = 0;
      plVar5[0x28] = 0;
      plVar5[0x27] = 0;
      plVar5[0x2a] = 0;
      plVar5[0x29] = 0;
      plVar5[0x24] = 0;
      plVar5[0x23] = 0;
      plVar5[0x26] = 0;
      plVar5[0x25] = 0;
      plVar5[0x22] = 0;
      plVar5[0x21] = 0;
      plVar5[0x37] = 0;
      plVar5[0x36] = 0;
      plVar5[0x39] = 0;
      plVar5[0x38] = 0;
      plVar5[0x35] = 0;
      plVar5[0x34] = 0;
      plVar8[0x39] = (long)plVar5;
      plVar9 = plVar8 + 0x3a;
      *(long **)(param_1 + 0xb8) = plVar9;
    }
    else {
      FUN_109256cc8(plVar9,&lStack_210,param_1 + 0xa0);
    }
    *(long **)(param_1 + 0xb8) = plVar9;
    plVar5 = (long *)plVar9[-1];
    func_0x0001092545e0(plVar5,param_2,param_3);
  }
  else {
    plVar5 = (long *)plVar11[0x39];
    plVar11[0x38] = plVar11[0x38] + 1;
    func_0x00010925475c(plVar5,param_2);
  }
  return plVar5;
}



/* Entry: 109253824; end: 1092538b7;  */

long * FUN_109253824(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    *puVar4 = &PTR_FUN_110ae6598;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = lVar6;
  }
  *param_2 = 0;
  plVar5 = (long *)param_1[1];
  *param_1 = lVar6;
  param_1[1] = (long)puVar4;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1092538b8; end: 1092538bf;  */

undefined8 FUN_1092538b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1092538c0; end: 1092539cb;  */

undefined8 * FUN_1092538c0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 1092539cc; end: 1092539db;  */

void FUN_1092539cc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  return;
}



/* Entry: 1092539dc; end: 109253a07;  */

void FUN_1092539dc(long *param_1)

{
  undefined **ppuVar1;
  undefined *extraout_x8;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340dcf0;
  (*(code *)PTR___tlv_bootstrap_11340dcf0)(*(undefined8 *)(*param_1 + 0x20));
  *ppuVar1 = extraout_x8;
  return;
}



/* Entry: 109253a08; end: 109253a27;  */

void FUN_109253a08(long *param_1)

{
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109253a28; end: 109253a73;  */

void FUN_109253a28(undefined8 *param_1)

{
  undefined **ppuVar1;
  undefined *extraout_x8;
  
  param_1 = (undefined8 *)*param_1;
  ppuVar1 = &PTR___tlv_bootstrap_11340dcf0;
  (*(code *)PTR___tlv_bootstrap_11340dcf0)(*param_1);
  *ppuVar1 = extraout_x8;
  FUN_109375044(param_1[1]);
  if (param_1[1] != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 109253a74; end: 109253b17;  */

void FUN_109253a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_109231308(&ppuStack_48,param_4);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &ppuStack_48;
  }
  func_0x000109fd19d0(param_1,param_2,param_3,pppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  return;
}



/* Entry: 109253b18; end: 109253b1b;  */

void FUN_109253b18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109253b1c; end: 109253b4f;  */

void FUN_109253b1c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109253b50; end: 109253b87;  */

undefined8 FUN_109253b50(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae65d8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109253b88; end: 109253b8b;  */

void FUN_109253b88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109253b8c; end: 109253c63;  */

void FUN_109253b8c(undefined8 param_1,undefined8 param_2)

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
  
  FUN_109253c64(&uStack_50,&uStack_21,param_2);
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



/* Entry: 109253c64; end: 109253cc3;  */

void FUN_109253c64(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = 0x14e0;
  __Znwm();
  FUN_109253cc4();
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



/* Entry: 109253cc4; end: 109253d0b;  */

undefined8 * FUN_109253cc4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ae6610;
  FUN_10924b258(param_1 + 3);
  return param_1;
}



/* Entry: 109253d0c; end: 109253d1b;  */

void FUN_109253d0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae6610;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109253d1c; end: 109253d3b;  */

void FUN_109253d1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae6610;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109253d3c; end: 109253d47;  */

long * FUN_109253d3c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lStack_60;
  undefined8 *puStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  plVar4 = (long *)(param_1 + 0x18);
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10925341c(&puStack_58,*(undefined8 *)(param_1 + 0x14b8));
  lVar7 = *(long *)(param_1 + 0x8b8);
  lVar5 = *(long *)(param_1 + 0x8b0);
  while (lVar7 != lVar5) {
    lVar7 = lVar7 + -0x18;
    lStack_60 = lVar7;
    FUN_10924f584(&lStack_60);
  }
  *(long *)(param_1 + 0x8b8) = lVar5;
  FUN_10924c250(param_1 + 0x8a0,0);
  func_0x00010924c278(param_1 + 0x8a8,0);
  FUN_10924c2a0(plVar4);
  FUN_10924c30c(param_1 + 0x14d8,0);
  if (puStack_58 != (undefined8 *)0x0) {
    (*(code *)puStack_58[2])(auStack_50);
    if (puStack_58 != (undefined8 *)0x0) {
      (*(code *)*puStack_58)(auStack_50);
    }
  }
  while( true ) {
    plVar6 = *(long **)(param_1 + 0x14c0);
    *(undefined8 *)(param_1 + 0x14c0) = 0;
    *(undefined8 *)(param_1 + 0x14b8) = 0;
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
    lVar5 = 0;
    FUN_10924c30c(param_1 + 0x14d8);
    func_0x00010924f92c(param_1 + 0x14c8);
    func_0x00010924f92c(param_1 + 0x14b8);
    if (*(long *)(param_1 + 0x14a0) != 0) {
      *(long *)(param_1 + 0x14a8) = *(long *)(param_1 + 0x14a0);
      __ZdlPv();
    }
    __ZNSt3__15mutexD1Ev(param_1 + 0x1460);
    func_0x00010924f7c4(param_1 + 0x1430);
    func_0x00010924f80c(param_1 + 0x1400);
    func_0x00010924f854(param_1 + 0x13d0);
    func_0x00010924f89c(param_1 + 0x13a0);
    func_0x00010924f8e4(param_1 + 0x1370);
    __ZNSt3__15mutexD1Ev(param_1 + 0x1330);
    if (*(char *)(param_1 + 0x918) == '\x01') {
      FUN_10924a26c(param_1 + 0x908);
    }
    __ZNSt3__15mutexD1Ev(param_1 + 0x8c8);
    plVar6 = plVar4;
    func_0x000109fcab78();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) break;
    ___stack_chk_fail();
    if ((int)lVar5 == 0) {
      __Unwind_Resume(plVar6);
      func_0x000104bd46a0();
      plVar4 = (long *)*plVar6;
      *plVar6 = lVar5;
      if (plVar4 != (long *)0x0) {
        func_0x000109fccfbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return plVar4;
      }
      return (long *)0x0;
    }
    if (puStack_58 != (undefined8 *)0x0) {
      (*(code *)puStack_58[2])(auStack_50);
      if (puStack_58 != (undefined8 *)0x0) {
        (*(code *)*puStack_58)(auStack_50);
      }
    }
    ___cxa_begin_catch();
    if ((int)lVar5 == 2) {
      (**(code **)(*plVar6 + 0x10))();
      FUN_10924a40c(4,&UNK_10f55f038);
    }
    else {
      FUN_10924a40c(4,&UNK_10f55efe3);
    }
    ___cxa_end_catch();
  }
  return plVar4;
}



/* Entry: 109253d48; end: 109253e4f;  */

void FUN_109253d48(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 109253e50; end: 109253f93;  */

void FUN_109253e50(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  int iStack_60;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  if (*param_1 != 0) {
    iStack_60 = 0;
    puVar4 = auStack_58;
    func_0x000107c31940(puVar4,&UNK_10f55f231);
    _glGetError();
    iVar3 = 0;
    if ((int)puVar4 != 0) {
      uVar7 = 0;
      do {
        if (iStack_60 != 0x505) {
          iStack_60 = (int)puVar4;
        }
        uVar1 = (int)puVar4 - 0x500;
        if (uVar1 < 7) {
          uVar6 = *(undefined8 *)(&UNK_10dfbf2d0 + (ulong)uVar1 * 8);
          puVar5 = (&PTR_DAT_110ae6680)[uVar1];
        }
        else {
          uVar6 = 0x11;
          puVar5 = &UNK_10f55f2af;
        }
        puVar4 = auStack_58;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar4,puVar5,uVar6);
        _glGetError();
        iVar3 = (int)puVar4;
      } while ((uVar7 < 0x3f) && (uVar7 = uVar7 + 1, iVar3 != 0));
    }
    if (iStack_60 != 0) {
      iVar3 = (int)param_1 + 0x10;
      (**(code **)(param_1[1] + 0x10))();
    }
    __ZSt19uncaught_exceptionsv();
    if (iVar3 == 0) {
      if (iStack_60 != 0) {
        if (iStack_60 == 0x505) {
          FUN_109253ff4(auStack_58);
        }
        else {
          FUN_109254048(iStack_60,auStack_58);
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109253f6c);
        (*pcVar2)();
      }
    }
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
  }
  return;
}



/* Entry: 109253f94; end: 109253ff3;  */

long FUN_109253f94(long param_1)

{
  FUN_109253e50();
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)(param_1 + 8))(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return param_1;
}



/* Entry: 109253ff4; end: 109254043;  */

void FUN_109253ff4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x10;
  ___cxa_allocate_exception(0x10);
  FUN_109254130();
  uVar2 = uVar1;
  ___cxa_throw(uVar1,&PTR_DAT_110ae6650,FUN_109254044);
  ___cxa_free_exception(uVar1);
  __Unwind_Resume(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109254044; end: 109254047;  */

void FUN_109254044(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109254048; end: 1092540a3;  */

void FUN_109254048(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x0001092542c8();
  uVar2 = uVar1;
  ___cxa_throw(uVar1,&PTR_DAT_110ae6668,FUN_1092540a4);
  ___cxa_free_exception(uVar1);
  __Unwind_Resume(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1092540a4; end: 1092540a7;  */

void FUN_1092540a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1092540a8; end: 10925412f;  */

undefined8 * FUN_1092540a8(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f55f2c1);
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,auStack_38);
  *param_1 = &PTR_FUN_110ae6718;
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  *param_1 = &PTR_FUN_110ae66c8;
  return param_1;
}



/* Entry: 109254130; end: 109254133;  */

undefined8 * FUN_109254130(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f55f2c1);
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,auStack_38);
  *param_1 = &PTR_FUN_110ae6718;
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  *param_1 = &PTR_FUN_110ae66c8;
  return param_1;
}



/* Entry: 109254134; end: 1092541eb;  */

undefined8 * FUN_109254134(undefined8 *param_1)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  FUN_1092541ec();
  FUN_109231308(auStack_48,&UNK_10f55f30b);
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,auStack_48);
  *param_1 = &PTR_FUN_110ae6718;
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *param_1 = &PTR_FUN_110ae66f0;
  return param_1;
}



/* Entry: 1092541ec; end: 1092542cb;  */

undefined1  [16] FUN_1092541ec(int param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_1 < 0x503) {
    if (param_1 < 0x501) {
      if (param_1 == 0) {
        auVar5._8_8_ = 0xb;
        auVar5._0_8_ = &UNK_10f55f34e;
        return auVar5;
      }
      if (param_1 == 0x500) {
        auVar2._8_8_ = 0xf;
        auVar2._0_8_ = &UNK_10f55f35a;
        return auVar2;
      }
    }
    else {
      if (param_1 == 0x501) {
        puVar1 = &UNK_10f55f36a;
LAB_1092542b0:
        auVar7._8_8_ = 0x10;
        auVar7._0_8_ = puVar1;
        return auVar7;
      }
      if (param_1 == 0x502) {
        auVar3._8_8_ = 0x14;
        auVar3._0_8_ = &UNK_10f55f37b;
        return auVar3;
      }
    }
  }
  else if (param_1 < 0x505) {
    if (param_1 == 0x503) {
      auVar6._8_8_ = 0x11;
      auVar6._0_8_ = &UNK_10f55f390;
      return auVar6;
    }
    if (param_1 == 0x504) {
      puVar1 = &UNK_10f55f3a2;
      goto LAB_1092542c0;
    }
  }
  else {
    if (param_1 == 0x505) {
      puVar1 = &UNK_10f55f3b5;
      goto LAB_1092542b0;
    }
    if (param_1 == 0x506) {
      auVar4._8_8_ = 0x20;
      auVar4._0_8_ = &UNK_10f55f3c6;
      return auVar4;
    }
  }
  puVar1 = &UNK_10f55f3e7;
LAB_1092542c0:
  auVar8._8_8_ = 0x12;
  auVar8._0_8_ = puVar1;
  return auVar8;
}



/* Entry: 1092542cc; end: 1092542f3;  */

void FUN_1092542cc(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092542f4; end: 1092542f7;  */

void FUN_1092542f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1092542f8; end: 10925430b;  */

void FUN_1092542f8(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10925430c; end: 109254397;  */

long FUN_10925430c(long param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    _glDeleteFramebuffers(1);
  }
  return param_1;
}



/* Entry: 109254398; end: 109254433;  */

void FUN_109254398(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  if (*(int *)(param_3 + 0x180) != 0) {
    uVar3 = 0;
    lVar2 = param_3;
    do {
      FUN_109254934(uVar1,param_2,((uint)uVar3 & 0xff) + 0x8ce0,lVar2);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x30;
    } while (uVar3 < *(uint *)(param_3 + 0x180));
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  FUN_109254434(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1 + 0x18,param_3,0x1b8);
  return;
}



/* Entry: 109254434; end: 1092544eb;  */

void FUN_109254434(long *param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined1 auStack_58 [24];
  
  if (*(int *)(param_3 + 0x194) == 0) {
    return;
  }
  ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_3 + 0x1b0) * 4;
  if (0x56 < *(uint *)(param_3 + 0x1b0)) {
    ppuVar1 = &PTR_DAT_110ae4700;
  }
  uVar3 = *(uint *)((long)ppuVar1 + 0x14);
  pbVar2 = (byte *)((long)param_1 + 0x2f);
  if (*(int *)(param_3 + 0x1a0) != 0) {
    pbVar2 = (byte *)(param_1 + 6);
  }
  if ((uVar3 == 3) && ((*pbVar2 & 1) != 0)) {
    iVar6 = 0x821a;
  }
  else {
    if ((uVar3 & 1) != 0) {
      FUN_109254934(param_1,param_2,0x8d00,param_3 + 0x188);
    }
    if ((uVar3 >> 1 & 1) == 0) {
      return;
    }
    iVar6 = 0x8d20;
  }
  iVar7 = *(int *)(param_3 + 400);
  if (0x8512 < iVar7) {
    if (iVar7 == 0x8513) {
      bVar4 = *(byte *)(param_3 + 0x19c);
      uVar8 = *(undefined4 *)(param_3 + 0x194);
      uVar9 = *(undefined4 *)(param_3 + 0x198);
      if ((iVar6 == 0x821a) && ((*(byte *)((long)param_1 + 0x2f) & 1) == 0)) {
        _glFramebufferTexture2D(param_2,0x8d00,bVar4 + 0x8515,uVar8,uVar9);
        iVar6 = 0x8d20;
      }
      iVar7 = bVar4 + 0x8515;
      goto LAB_109254b58;
    }
    if (iVar7 != 0x8c1a) {
      if (iVar7 == 0x8d41) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__glFramebufferRenderbuffer_11034b5a0)
                  (param_2,iVar6,0x8d41,*(undefined4 *)(param_3 + 0x194));
        return;
      }
LAB_109254bd8:
      FUN_109254c84();
      FUN_109231308(auStack_58,&UNK_10f55f4be);
      FUN_109254e30(auStack_58);
      goto LAB_109254c58;
    }
LAB_109254a10:
    uVar3 = *(uint *)(param_3 + 0x1a0);
    if (uVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000109254b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[0x11e])
                (param_2,iVar6,*(undefined4 *)(param_3 + 0x194),*(undefined4 *)(param_3 + 0x198),
                 *(undefined4 *)(param_3 + 0x19c));
      return;
    }
    if ((int)param_2 == 0x8ca9) {
      uVar12 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
      uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
      lVar11 = LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
      uVar10 = (uint)lVar11;
      uVar12 = ~(uVar3 >> (ulong)(uVar10 & 0x1f));
      uVar12 = (uVar12 & 0xaaaaaaaa) >> 1 | (uVar12 & 0x55555555) << 1;
      uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
      lVar13 = LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
      uVar12 = (uint)lVar13;
      if (uVar3 >> (ulong)(uVar12 + uVar10 & 0x1f) == 0) {
        if (uVar12 <= *(uint *)(*param_1 + 0x88)) {
          if (*(int *)(param_3 + 0x1b4) != 1) {
                    /* WARNING: Could not recover jumptable at 0x000109254b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)param_1[0x120])
                      (0x8ca9,iVar6,*(undefined4 *)(param_3 + 0x194),
                       *(undefined4 *)(param_3 + 0x198));
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000109254a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)param_1[0x11f])
                    (0x8ca9,iVar6,*(undefined4 *)(param_3 + 0x194),*(undefined4 *)(param_3 + 0x198),
                     lVar11,lVar13);
          return;
        }
        FUN_109231308(auStack_58,&UNK_10f55f565);
        FUN_109254ea0(auStack_58);
      }
      else {
        FUN_109231308(auStack_58,&UNK_10f55f6f4);
        FUN_109254e30(auStack_58);
      }
    }
    else {
      FUN_109231308(auStack_58,&UNK_10f55f513);
      FUN_109254e30(auStack_58);
    }
LAB_109254c58:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109254c5c);
    (*pcVar5)();
  }
  if (iVar7 != 0xde1) {
    if (iVar7 == 0x806f) goto LAB_109254a10;
    if (iVar7 != 0x84f5) goto LAB_109254bd8;
  }
  uVar8 = *(undefined4 *)(param_3 + 0x194);
  uVar9 = *(undefined4 *)(param_3 + 0x198);
  if ((iVar6 == 0x821a) && ((*(byte *)((long)param_1 + 0x2f) & 1) == 0)) {
    _glFramebufferTexture2D(param_2,0x8d00,iVar7,uVar8,uVar9);
    iVar6 = 0x8d20;
  }
LAB_109254b58:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glFramebufferTexture2D_11034b5a8)(param_2,iVar6,iVar7,uVar8,uVar9);
  return;
}



/* Entry: 1092544ec; end: 1092545df;  */

void FUN_1092544ec(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  
  uVar2 = *(uint *)(param_3 + 0x180);
  uVar3 = (ulong)uVar2;
  if (uVar2 < *(uint *)(param_1 + 0x198)) {
    puVar5 = (undefined4 *)(param_1 + (ulong)uVar2 * 0x30 + 0x24);
    do {
      _glFramebufferTexture2D(param_2,((uint)uVar3 & 0xff) + 0x8ce0,0xde1,0,0);
      *puVar5 = 0;
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 0xc;
    } while (uVar3 < *(uint *)(param_1 + 0x198));
    uVar2 = *(uint *)(param_3 + 0x180);
  }
  if ((1 < uVar2) || ((*(int *)(param_3 + 0x194) == 0 && (*(int *)(param_1 + 0x1ac) != 0)))) {
    if ((*(byte *)(*(long *)(param_1 + 8) + 0x2f) & 1) == 0) {
      _glFramebufferTexture2D(param_2,0x8d00,0xde1,0,0);
      uVar1 = 0x8d20;
    }
    else {
      uVar1 = 0x821a;
    }
    _glFramebufferTexture2D(param_2,uVar1,0xde1,0,0);
    *(undefined4 *)(param_1 + 0x1ac) = 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  if (*(int *)(param_3 + 0x180) != 0) {
    uVar3 = 0;
    lVar4 = param_3;
    do {
      FUN_109254934(uVar1,param_2,((uint)uVar3 & 0xff) + 0x8ce0,lVar4);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x30;
    } while (uVar3 < *(uint *)(param_3 + 0x180));
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  FUN_109254434(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1 + 0x18,param_3,0x1b8);
  return;
}



/* Entry: 1092545e0; end: 10925491b;  */

undefined4 FUN_1092545e0(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  long *plVar6;
  
  iVar5 = (int)param_2;
  if ((*(int *)(param_3 + 0x180) == 1 && *(int *)(param_3 + 0xc) == -1) &&
      *(int *)(param_3 + 0x194) == 0) {
    lVar2 = *param_1;
    if (lVar2 == 0) goto LAB_1092546f4;
    if (iVar5 == 0x8ca8) {
      if (*(int *)(lVar2 + 0x108) == 0) goto LAB_109254700;
      puVar3 = (undefined4 *)(lVar2 + 0x108);
LAB_1092546f0:
      *puVar3 = 0;
    }
    else {
      if (iVar5 == 0x8ca9) {
LAB_1092546c0:
        if (*(int *)(lVar2 + 0x10c) == 0) goto LAB_109254700;
LAB_1092546c8:
        puVar3 = (undefined4 *)(lVar2 + 0x10c);
        goto LAB_1092546f0;
      }
      if (iVar5 == 0x8d40) {
        if (*(int *)(lVar2 + 0x108) == 0) goto LAB_1092546c0;
        *(undefined4 *)(lVar2 + 0x108) = 0;
        if (*(int *)(lVar2 + 0x10c) == 0) goto LAB_1092546f4;
        goto LAB_1092546c8;
      }
    }
LAB_1092546f4:
    _glBindFramebuffer(param_2,0);
LAB_109254700:
    _memcpy(param_1 + 3,param_3,0x1b8);
    return 0;
  }
  plVar6 = param_1 + 2;
  iVar1 = (int)*plVar6;
  if (iVar1 == 0) {
    _glGenFramebuffers(1,plVar6);
    iVar1 = (int)*plVar6;
  }
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_109254730;
  if (iVar5 == 0x8ca8) {
    if (*(int *)(lVar2 + 0x108) == iVar1) goto LAB_109254738;
    piVar4 = (int *)(lVar2 + 0x108);
LAB_10925472c:
    *piVar4 = iVar1;
  }
  else {
    if (iVar5 == 0x8ca9) {
LAB_10925466c:
      if (*(int *)(lVar2 + 0x10c) == iVar1) goto LAB_109254738;
LAB_109254728:
      piVar4 = (int *)(lVar2 + 0x10c);
      goto LAB_10925472c;
    }
    if (iVar5 == 0x8d40) {
      if (*(int *)(lVar2 + 0x108) == iVar1) goto LAB_10925466c;
      *(int *)(lVar2 + 0x108) = iVar1;
      if (*(int *)(lVar2 + 0x10c) == iVar1) goto LAB_109254730;
      goto LAB_109254728;
    }
  }
LAB_109254730:
  _glBindFramebuffer(param_2);
LAB_109254738:
  FUN_1092544ec(param_1,param_2,param_3);
  return (int)param_1[2];
}



/* Entry: 10925491c; end: 10925491f;  */

void FUN_10925491c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109254920; end: 109254933;  */

void FUN_109254920(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109254934; end: 109254c83;  */

void FUN_109254934(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined1 auStack_58 [24];
  
  iVar4 = *(int *)(param_4 + 8);
  if (iVar4 < 0x8513) {
    if (iVar4 != 0xde1) {
      if (iVar4 == 0x806f) goto LAB_109254a10;
      if (iVar4 != 0x84f5) goto LAB_109254bd8;
    }
    uVar5 = *(undefined4 *)(param_4 + 0xc);
    uVar6 = *(undefined4 *)(param_4 + 0x10);
    if (((int)param_3 == 0x821a) && ((*(byte *)((long)param_1 + 0x2f) & 1) == 0)) {
      _glFramebufferTexture2D(param_2,0x8d00,iVar4,uVar5,uVar6);
      param_3 = 0x8d20;
    }
LAB_109254b58:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glFramebufferTexture2D_11034b5a8)(param_2,param_3,iVar4,uVar5,uVar6);
    return;
  }
  if (iVar4 == 0x8513) {
    bVar2 = *(byte *)(param_4 + 0x14);
    uVar5 = *(undefined4 *)(param_4 + 0xc);
    uVar6 = *(undefined4 *)(param_4 + 0x10);
    if (((int)param_3 == 0x821a) && ((*(byte *)((long)param_1 + 0x2f) & 1) == 0)) {
      _glFramebufferTexture2D(param_2,0x8d00,bVar2 + 0x8515,uVar5,uVar6);
      param_3 = 0x8d20;
    }
    iVar4 = bVar2 + 0x8515;
    goto LAB_109254b58;
  }
  if (iVar4 != 0x8c1a) {
    if (iVar4 == 0x8d41) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__glFramebufferRenderbuffer_11034b5a0)
                (param_2,param_3,0x8d41,*(undefined4 *)(param_4 + 0xc));
      return;
    }
LAB_109254bd8:
    FUN_109254c84();
    FUN_109231308(auStack_58,&UNK_10f55f4be);
    FUN_109254e30(auStack_58);
    goto LAB_109254c58;
  }
LAB_109254a10:
  uVar1 = *(uint *)(param_4 + 0x18);
  if (uVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000109254b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[0x11e])
              (param_2,param_3,*(undefined4 *)(param_4 + 0xc),*(undefined4 *)(param_4 + 0x10),
               *(undefined4 *)(param_4 + 0x14));
    return;
  }
  if ((int)param_2 == 0x8ca9) {
    uVar9 = (uVar1 & 0xaaaaaaaa) >> 1 | (uVar1 & 0x55555555) << 1;
    uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    lVar8 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
    uVar7 = (uint)lVar8;
    uVar9 = ~(uVar1 >> (ulong)(uVar7 & 0x1f));
    uVar9 = (uVar9 & 0xaaaaaaaa) >> 1 | (uVar9 & 0x55555555) << 1;
    uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    lVar10 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
    uVar9 = (uint)lVar10;
    if (uVar1 >> (ulong)(uVar9 + uVar7 & 0x1f) == 0) {
      if (uVar9 <= *(uint *)(*param_1 + 0x88)) {
        if (*(int *)(param_4 + 0x2c) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000109254a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)param_1[0x11f])
                    (0x8ca9,param_3,*(undefined4 *)(param_4 + 0xc),*(undefined4 *)(param_4 + 0x10),
                     lVar8,lVar10);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000109254b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_1[0x120])
                  (0x8ca9,param_3,*(undefined4 *)(param_4 + 0xc),*(undefined4 *)(param_4 + 0x10));
        return;
      }
      FUN_109231308(auStack_58,&UNK_10f55f565);
      FUN_109254ea0(auStack_58);
    }
    else {
      FUN_109231308(auStack_58,&UNK_10f55f6f4);
      FUN_109254e30(auStack_58);
    }
  }
  else {
    FUN_109231308(auStack_58,&UNK_10f55f513);
    FUN_109254e30(auStack_58);
  }
LAB_109254c58:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109254c5c);
  (*pcVar3)();
}



/* Entry: 109254c84; end: 109254e2f;  */

undefined * FUN_109254c84(int param_1)

{
  if (param_1 < 0x8516) {
    if (param_1 < 0x806f) {
      if (param_1 == 0) {
        return &UNK_10f55f5be;
      }
      if (param_1 == 6) {
        return &UNK_10f55f6b1;
      }
      if (param_1 == 0xde1) {
        return &UNK_10f55f5d4;
      }
    }
    else if (param_1 < 0x8513) {
      if (param_1 == 0x806f) {
        return &UNK_10f55f5ed;
      }
      if (param_1 == 0x84f5) {
        return &UNK_10f55f690;
      }
    }
    else {
      if (param_1 == 0x8513) {
        return &UNK_10f55f5f7;
      }
      if (param_1 == 0x8515) {
        return &UNK_10f55f606;
      }
    }
  }
  else if (param_1 < 0x851a) {
    if (param_1 < 0x8518) {
      if (param_1 == 0x8516) {
        return &UNK_10f55f61d;
      }
      if (param_1 == 0x8517) {
        return &UNK_10f55f634;
      }
    }
    else {
      if (param_1 == 0x8518) {
        return &UNK_10f55f64b;
      }
      if (param_1 == 0x8519) {
        return &UNK_10f55f662;
      }
    }
  }
  else if (param_1 < 0x8d41) {
    if (param_1 == 0x851a) {
      return &UNK_10f55f679;
    }
    if (param_1 == 0x8c1a) {
      return &UNK_10f55f5de;
    }
  }
  else {
    if (param_1 == 0x8d65) {
      return &UNK_10f55f6a1;
    }
    if (param_1 == 0x8d41) {
      return &UNK_10f55f5c7;
    }
  }
  return &DAT_10f55f4b6;
}



/* Entry: 109254e30; end: 109254e7f;  */

void FUN_109254e30(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_109254e80();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110ae6730,FUN_10925491c);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *puVar2 = &PTR_FUN_110ae6758;
  return;
}



/* Entry: 109254e80; end: 109254e9f;  */

void FUN_109254e80(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *param_1 = &PTR_FUN_110ae6758;
  return;
}



/* Entry: 109254ea0; end: 109254eef;  */

void FUN_109254ea0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_109254ef0();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110ae46a8,FUN_109245058);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *puVar2 = &PTR_FUN_110ae46d0;
  return;
}



/* Entry: 109254ef0; end: 109254f0f;  */

void FUN_109254ef0(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *param_1 = &PTR_FUN_110ae46d0;
  return;
}



/* Entry: 109254f10; end: 109254fd3;  */

undefined8 * FUN_109254f10(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  puVar1 = param_1;
  FUN_109374fe0();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x000109fd19d0(lVar2 + 0x810,6,2,&UNK_10f55f72b,0x4c);
  }
  if (param_1[0xf] != 0) {
    if (*(char *)(param_1[0xe] + 0x4d) == '\x01') {
      (**(code **)(param_1[0xe] + 0x7e8))();
    }
    param_1[0xf] = 0;
  }
  *param_1 = &PTR_DAT_110b97d00;
  __ZNSt3__15mutexD1Ev(param_1 + 5);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109254fd4; end: 109254fd7;  */

undefined8 * FUN_109254fd4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  puVar1 = param_1;
  FUN_109374fe0();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x000109fd19d0(lVar2 + 0x810,6,2,&UNK_10f55f72b,0x4c);
  }
  if (param_1[0xf] != 0) {
    if (*(char *)(param_1[0xe] + 0x4d) == '\x01') {
      (**(code **)(param_1[0xe] + 0x7e8))();
    }
    param_1[0xf] = 0;
  }
  *param_1 = &PTR_DAT_110b97d00;
  __ZNSt3__15mutexD1Ev(param_1 + 5);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109254fd8; end: 109254feb;  */

void FUN_109254fd8(void)

{
  FUN_109254f10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109254fec; end: 10925505b;  */

void FUN_109254fec(long param_1)

{
  undefined8 uVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  if (*(char *)(*(long *)(param_1 + 0x70) + 0x4d) == '\x01') {
    uVar1 = 0x9117;
    (**(code **)(*(long *)(param_1 + 0x70) + 2000))(0x9117,0);
  }
  else {
    _glFinish();
    uVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10925505c; end: 10925512b;  */

undefined4 FUN_10925505c(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  if ((param_2 != 0) && (param_2 < *(ulong *)(param_1 + 0x68))) {
    uVar2 = 1;
    goto LAB_109255100;
  }
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    if (*(char *)(*(long *)(param_1 + 0x70) + 0x4d) == '\x01') {
      (**(code **)(*(long *)(param_1 + 0x70) + 0x7e0))(lVar1,0,0);
      if ((int)lVar1 != 0x911c && (int)lVar1 != 0x911a) goto LAB_1092550fc;
    }
    else {
      _glFinish();
    }
    *(undefined4 *)(param_1 + 0x80) = 1;
    if (*(char *)(*(long *)(param_1 + 0x70) + 0x4d) == '\x01') {
      (**(code **)(*(long *)(param_1 + 0x70) + 0x7e8))(*(undefined8 *)(param_1 + 0x78));
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
LAB_1092550fc:
  uVar2 = *(undefined4 *)(param_1 + 0x80);
LAB_109255100:
  __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
  return uVar2;
}



/* Entry: 10925512c; end: 1092551d7;  */

void FUN_10925512c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  if (*(long *)(param_1 + 0x78) != 0) {
    do {
      lVar2 = *(long *)(param_1 + 0x70);
      if (*(char *)(lVar2 + 0x4d) != '\x01') {
        _glFinish();
        break;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x78);
      (**(code **)(lVar2 + 0x7e0))(uVar1,0,*(undefined8 *)(lVar2 + 0xb0));
    } while ((int)uVar1 == 0x911b);
    if (*(char *)(*(long *)(param_1 + 0x70) + 0x4d) == '\x01') {
      (**(code **)(*(long *)(param_1 + 0x70) + 0x7e8))(*(undefined8 *)(param_1 + 0x78));
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(undefined4 *)(param_1 + 0x80) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 1092551d8; end: 1092551ff;  */

void FUN_1092551d8(long param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 109255200; end: 10925526f;  */

void FUN_109255200(long param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  if ((*(long *)(param_1 + 0x78) != 0) && (*(char *)(*(long *)(param_1 + 0x70) + 0x4d) == '\x01')) {
    (**(code **)(*(long *)(param_1 + 0x70) + 0x7e8))();
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 109255270; end: 1092553b3;  */

void FUN_109255270(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  
  FUN_10922d97c(&uStack_40,*(undefined8 *)(param_2 + 0x18),param_2);
  plVar2 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  __ZNSt3__15mutex4lockEv(param_2 + 0x28);
  puVar5 = (undefined8 *)0x18;
  __Znwm();
  *puVar5 = &PTR_DAT_110b981a0;
  puVar5[1] = uStack_40;
  puVar5[2] = plVar2;
  if (plVar2 == (long *)0x0) {
    *param_1 = puVar5;
    __ZNSt3__15mutex6unlockEv(param_2 + 0x28);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *param_1 = puVar5;
    __ZNSt3__15mutex6unlockEv(param_2 + 0x28);
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 1092553b4; end: 109256703;  */

void FUN_1092553b4(void)

{
  return;
}



/* Entry: 109256704; end: 10925675b;  */

long FUN_109256704(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10925675c; end: 109256837;  */

ulong * FUN_10925675c(ulong *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  *param_1 = 0;
  _memcpy(param_1 + 1,param_2,0x1b8);
  uVar1 = *(uint *)(param_2 + 0x180);
  uVar5 = (ulong)uVar1;
  uVar4 = uVar5 + 0x53a3c6bb0c6effee ^ 0x9e3779ba4be8a966;
  *param_1 = uVar4;
  lVar3 = param_2;
  if (uVar1 != 0) {
    do {
      lVar2 = lVar3;
      FUN_109256838();
      uVar4 = uVar4 + 0x9e3779b97f4a7c15;
      uVar4 = lVar2 + -0x61c8864680b583eb + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
      *param_1 = uVar4;
      uVar5 = uVar5 - 1;
      lVar3 = lVar3 + 0x30;
    } while (uVar5 != 0);
  }
  if (*(int *)(param_2 + 0x194) != 0) {
    param_2 = param_2 + 0x188;
    FUN_109256838();
    uVar4 = uVar4 + 0x9e3779b97f4a7c15;
    *param_1 = uVar4 * 0x40 + -0x61c8864680b583eb + (uVar4 >> 2) + param_2 ^ uVar4;
  }
  return param_1;
}



/* Entry: 109256838; end: 109256943;  */

ulong FUN_109256838(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (*param_1 + 0x53a3c687b1bc205aU ^ 0x9e3779b97f4a7c15) + 0x9e3779b97f4a7c15;
  uVar1 = ((ulong)*(uint *)(param_1 + 1) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1)
          + 0x9e3779b97f4a7c15;
  uVar1 = ((ulong)*(uint *)((long)param_1 + 0xc) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15
          ^ uVar1) + 0x9e3779b97f4a7c15;
  uVar1 = ((ulong)*(uint *)(param_1 + 2) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1)
          + 0x9e3779b97f4a7c15;
  uVar1 = ((ulong)*(uint *)((long)param_1 + 0x14) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15
          ^ uVar1) + 0x9e3779b97f4a7c15;
  uVar1 = ((ulong)*(uint *)((long)param_1 + 0x1c) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15
          ^ uVar1) + 0x9e3779b97f4a7c15;
  uVar1 = ((ulong)*(uint *)(param_1 + 4) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1)
          + 0x9e3779b97f4a7c15;
  uVar1 = ((ulong)*(uint *)((long)param_1 + 0x24) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15
          ^ uVar1) + 0x9e3779b97f4a7c15;
  uVar1 = ((ulong)*(uint *)(param_1 + 5) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1)
          + 0x9e3779b97f4a7c15;
  uVar1 = ((ulong)*(uint *)((long)param_1 + 0x2c) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15
          ^ uVar1) + 0x9e3779b97f4a7c15;
  return (ulong)*(uint *)(param_1 + 3) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
}



/* Entry: 109256944; end: 109256ad3;  */

void FUN_109256944(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_210;
  undefined1 auStack_208 [440];
  
  FUN_10925675c(&lStack_210,param_3);
  plVar5 = (long *)(param_1 + 0x18);
  plVar7 = (long *)*plVar5;
  plVar4 = *(long **)(param_1 + 0x20);
  plVar2 = plVar7;
  if (plVar7 != plVar4) {
    do {
      if (*plVar2 == lStack_210) {
        plVar1 = plVar2 + 1;
        FUN_109256c10(plVar1,auStack_208);
        plVar7 = plVar2;
        if (((ulong)plVar1 & 1) != 0) break;
      }
      plVar2 = plVar2 + 0x3a;
      plVar7 = plVar4;
    } while (plVar2 != plVar4);
    plVar4 = *(long **)(param_1 + 0x20);
  }
  if (plVar7 == plVar4) {
    if (plVar4 < *(long **)(param_1 + 0x28)) {
      _memcpy(plVar4,&lStack_210,0x1c0);
      lVar6 = *(long *)(param_1 + 8);
      plVar4[0x38] = 1;
      plVar2 = (long *)0x1d0;
      __Znwm();
      lVar3 = *(long *)(lVar6 + 0x38);
      *plVar2 = lVar6;
      plVar2[1] = lVar3;
      *(undefined4 *)(plVar2 + 2) = 0;
      *(undefined4 *)(plVar2 + 0x33) = 0;
      plVar2[0x20] = 0;
      plVar2[0x1f] = 0;
      plVar2[0x1e] = 0;
      plVar2[0x1d] = 0;
      plVar2[0x1c] = 0;
      plVar2[0x1b] = 0;
      plVar2[0x1a] = 0;
      plVar2[0x19] = 0;
      plVar2[0x18] = 0;
      plVar2[0x17] = 0;
      plVar2[0x16] = 0;
      plVar2[0x15] = 0;
      plVar2[0x14] = 0;
      plVar2[0x13] = 0;
      plVar2[0x12] = 0;
      plVar2[0x11] = 0;
      plVar2[0x10] = 0;
      plVar2[0xf] = 0;
      plVar2[0xe] = 0;
      plVar2[0xd] = 0;
      plVar2[0xc] = 0;
      plVar2[0xb] = 0;
      plVar2[10] = 0;
      plVar2[9] = 0;
      plVar2[8] = 0;
      plVar2[7] = 0;
      plVar2[6] = 0;
      plVar2[5] = 0;
      plVar2[4] = 0;
      plVar2[3] = 0;
      plVar2[0x30] = 0;
      plVar2[0x2f] = 0;
      plVar2[0x32] = 0;
      plVar2[0x31] = 0;
      plVar2[0x2c] = 0;
      plVar2[0x2b] = 0;
      plVar2[0x2e] = 0;
      plVar2[0x2d] = 0;
      plVar2[0x28] = 0;
      plVar2[0x27] = 0;
      plVar2[0x2a] = 0;
      plVar2[0x29] = 0;
      plVar2[0x24] = 0;
      plVar2[0x23] = 0;
      plVar2[0x26] = 0;
      plVar2[0x25] = 0;
      plVar2[0x22] = 0;
      plVar2[0x21] = 0;
      plVar2[0x37] = 0;
      plVar2[0x36] = 0;
      plVar2[0x39] = 0;
      plVar2[0x38] = 0;
      plVar2[0x35] = 0;
      plVar2[0x34] = 0;
      plVar4[0x39] = (long)plVar2;
      plVar5 = plVar4 + 0x3a;
      *(long **)(param_1 + 0x20) = plVar5;
    }
    else {
      FUN_109256cc8(plVar5,&lStack_210,param_1 + 8);
    }
    *(long **)(param_1 + 0x20) = plVar5;
    func_0x0001092545e0(plVar5[-1],param_2,param_3);
  }
  else {
    plVar7[0x38] = plVar7[0x38] + 1;
    func_0x00010925475c(plVar7[0x39],param_2);
  }
  return;
}


