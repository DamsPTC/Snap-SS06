/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a143730; end: 10a14374f;  */

void FUN_10a143730(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba7470;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a143750; end: 10a143783;  */

long FUN_10a143750(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a142dd4(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
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



/* Entry: 10a143784; end: 10a143787;  */

void FUN_10a143784(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a143788; end: 10a1437df;  */

long FUN_10a143788(long param_1)

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



/* Entry: 10a1437e0; end: 10a1439e3;  */

void FUN_10a1437e0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
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
  ppuStack_40 = &PTR_DAT_110ba67c0;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a1439e4; end: 10a1439f3;  */

void FUN_10a1439e4(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110ba67c0;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a1439f4; end: 10a143a1b;  */

long FUN_10a1439f4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a143788(param_1 + 0x18);
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



/* Entry: 10a143a1c; end: 10a143a6b;  */

void FUN_10a143a1c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110ba74b0;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  return;
}



/* Entry: 10a143a6c; end: 10a143a8b;  */

void FUN_10a143a6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ba74d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a143a8c; end: 10a143aa3;  */

long FUN_10a143a8c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
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



/* Entry: 10a143aa4; end: 10a143afb;  */

long FUN_10a143aa4(long param_1)

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



/* Entry: 10a143afc; end: 10a143cff;  */

void FUN_10a143afc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
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
  ppuStack_40 = &PTR_DAT_110ba6830;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a143d00; end: 10a143d0f;  */

void FUN_10a143d00(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110ba6830;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a143d10; end: 10a143d37;  */

long FUN_10a143d10(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a143aa4(param_1 + 0x18);
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



/* Entry: 10a143d38; end: 10a143d77;  */

void FUN_10a143d38(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110ba7518;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  return;
}



/* Entry: 10a143d78; end: 10a143f17;  */

long * FUN_10a143d78(long *param_1,uint param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = param_1 + 1;
  plVar2 = (long *)*plVar1;
  do {
    plVar3 = plVar1;
    if (plVar2 == (long *)0x0) {
LAB_10a143ddc:
      plVar2 = (long *)0x30;
      __Znwm();
      *(undefined4 *)((long)plVar2 + 0x1c) = *param_3;
      plVar2[4] = 0;
      plVar2[5] = 0;
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar1;
      *plVar3 = (long)plVar2;
      plVar1 = plVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        plVar1 = (long *)*plVar3;
      }
      func_0x000107c2b058(param_1[1],plVar1);
      param_1[2] = param_1[2] + 1;
      return plVar2;
    }
    while (plVar1 = plVar2, *(uint *)((long)plVar1 + 0x1c) <= param_2) {
      if (param_2 <= *(uint *)((long)plVar1 + 0x1c)) {
        return plVar1;
      }
      plVar2 = (long *)plVar1[1];
      if ((long *)plVar1[1] == (long *)0x0) {
        plVar3 = plVar1 + 1;
        goto LAB_10a143ddc;
      }
    }
    plVar2 = (long *)*plVar1;
  } while( true );
}



/* Entry: 10a143f18; end: 10a143f27;  */

void FUN_10a143f18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba7540;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a143f28; end: 10a143f47;  */

void FUN_10a143f28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba7540;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a143f48; end: 10a143f5f;  */

long FUN_10a143f48(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
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



/* Entry: 10a143f60; end: 10a143fb7;  */

long FUN_10a143f60(long param_1)

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



/* Entry: 10a143fb8; end: 10a1441bb;  */

void FUN_10a143fb8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
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
  ppuStack_40 = &PTR_DAT_110ba6910;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a1441bc; end: 10a1441cb;  */

void FUN_10a1441bc(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110ba6910;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a1441cc; end: 10a1441f3;  */

long FUN_10a1441cc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a143f60(param_1 + 0x18);
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



/* Entry: 10a1441f4; end: 10a144233;  */

void FUN_10a1441f4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110ba7580;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  return;
}



/* Entry: 10a144234; end: 10a14436f;  */

void FUN_10a144234(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1442a8);
  (*pcVar1)();
}



/* Entry: 10a144370; end: 10a14454f;  */

ulong FUN_10a144370(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  float *pfVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  ulong uVar9;
  
  iVar4 = *(int *)(param_2 + 0x34);
  if (iVar4 == 0) {
    fVar14 = (float)(ulong)(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3);
    _logf();
    iVar4 = (int)fVar14;
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    *(int *)(param_2 + 0x34) = iVar4;
  }
  uVar7 = *(uint *)(param_2 + 0x24);
  uVar8 = (ulong)uVar7;
  if (*(float *)(param_2 + 0x28) <= param_1) {
    uVar8 = (long)(int)uVar7 + 1;
    pfVar5 = *(float **)(param_2 + 8);
    lVar6 = *(long *)(param_2 + 0x10);
    uVar12 = lVar6 - (long)pfVar5 >> 3;
    uVar2 = (int)uVar12 - 1;
    uVar11 = (ulong)uVar2;
    uVar7 = (int)uVar8 + iVar4;
    if ((int)uVar2 <= (int)uVar7) {
      uVar7 = uVar2;
    }
    uVar9 = uVar8;
    if ((int)uVar8 < (int)uVar7) {
      pfVar10 = pfVar5 + uVar8 * 2;
      lVar13 = 0;
      if (uVar8 <= uVar12) {
        lVar13 = uVar12 - uVar8;
      }
      do {
        if (lVar13 == 0) goto LAB_10a14454c;
        uVar9 = uVar8;
        if (param_1 < *pfVar10) break;
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar1;
        uVar9 = (ulong)uVar7;
        pfVar10 = pfVar10 + 2;
        lVar13 = lVar13 + -1;
      } while (uVar7 != uVar1);
    }
    uVar7 = (uint)uVar9;
    if (uVar7 != uVar2) {
      if (uVar12 <= (ulong)(long)(int)uVar7) goto LAB_10a14454c;
      uVar11 = uVar9;
      if (pfVar5[(long)(int)uVar7 * 2] <= param_1) goto LAB_10a1444bc;
    }
  }
  else {
    uVar2 = uVar7 - iVar4 & ((int)(uVar7 - iVar4) >> 0x1f ^ 0xffffffffU);
    uVar11 = uVar8;
    if ((int)uVar2 < (int)uVar7) {
      pfVar5 = (float *)(*(long *)(param_2 + 8) + uVar8 * 8);
      do {
        if ((ulong)(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) <= uVar8)
        goto LAB_10a14454c;
        uVar11 = uVar8;
      } while ((param_1 <= *pfVar5) &&
              (uVar8 = uVar8 - 1, uVar11 = (ulong)uVar2, pfVar5 = pfVar5 + -2,
              (long)(ulong)uVar2 < (long)uVar8));
    }
    iVar4 = (int)uVar11;
    if (iVar4 == 0) {
      pfVar5 = *(float **)(param_2 + 8);
      lVar6 = *(long *)(param_2 + 0x10);
    }
    else {
      pfVar5 = *(float **)(param_2 + 8);
      lVar6 = *(long *)(param_2 + 0x10);
      if ((ulong)(lVar6 - (long)pfVar5 >> 3) <= (ulong)(long)iVar4) goto LAB_10a14454c;
      if (param_1 <= pfVar5[(long)iVar4 * 2]) {
LAB_10a1444bc:
        *(float *)(param_2 + 0x2c) = param_1;
        lVar13 = (lVar6 + -8) - (long)pfVar5;
        pfVar10 = pfVar5;
        if (lVar13 != 0) {
          uVar8 = lVar13 >> 3;
          do {
            uVar12 = uVar8 >> 1;
            uVar11 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
            uVar8 = uVar12;
            if (pfVar10[uVar12 * 2] <= param_1) {
              uVar8 = uVar11;
              pfVar10 = pfVar10 + uVar12 * 2 + 2;
            }
          } while (uVar8 != 0);
        }
        uVar11 = (ulong)((long)pfVar10 - (long)pfVar5) >> 3;
        goto LAB_10a144514;
      }
    }
    uVar11 = (ulong)(iVar4 + 1);
  }
LAB_10a144514:
  uVar7 = (int)uVar11 - 1;
  if ((ulong)(long)(int)uVar7 < (ulong)(lVar6 - (long)pfVar5 >> 3)) {
    fVar14 = pfVar5[(long)(int)uVar7 * 2];
    *(uint *)(param_2 + 0x24) = uVar7;
    *(float *)(param_2 + 0x28) = fVar14;
    return (ulong)uVar7 | uVar11 << 0x20;
  }
LAB_10a14454c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a144550);
  (*pcVar3)();
}



/* Entry: 10a144550; end: 10a144783;  */

long * FUN_10a144550(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
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



/* Entry: 10a144784; end: 10a14480f;  */

void FUN_10a144784(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a144810; end: 10a144823;  */

undefined1  [16] FUN_10a144810(undefined8 param_1,undefined **param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  code *pcVar8;
  char *pcVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  pcVar9 = "vector";
  FUN_109ffde64();
  if (param_2 < (undefined **)0x1555555555555556) {
    lVar10 = (long)param_2 * 0xc;
    __Znwm(lVar10);
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = lVar10;
    return auVar19;
  }
  func_0x000109ffded8();
  puVar7 = PTR___tlv_bootstrap_11340d750;
  if (*pcVar9 == '\x01') {
    ppuVar15 = &PTR___tlv_bootstrap_11340d750;
    ppuVar11 = ppuVar15;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar12 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar11 & 1) == 0) {
      param_2 = ppuVar12;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,param_2,0x100000000);
      (*(code *)puVar7)();
      *(undefined1 *)ppuVar15 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    puVar16 = (undefined8 *)ppuVar12[2];
    if (puVar16 != (undefined8 *)0x0) {
      lVar10 = puVar16[1];
      bVar6 = *(byte *)(lVar10 + 0x42) | *(byte *)(lVar10 + 0x43);
      if (((bVar6 & 1) != 0) || (*(char *)(lVar10 + 0x3f) == '\x01')) {
        uVar5 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar17 = cntvct_el0;
        if (uVar5 != 1000000000) {
          uVar3 = 0;
          if (uVar5 != 0) {
            uVar3 = uVar17 / uVar5;
          }
          uVar4 = 0;
          if (uVar5 != 0) {
            uVar4 = ((uVar17 - uVar3 * uVar5) * 1000000000) / uVar5;
          }
          uVar17 = uVar4 + uVar3 * 1000000000;
        }
        if ((bVar6 & 1) != 0) {
          uVar1 = *(undefined4 *)(pcVar9 + 0x10);
          uVar2 = *(undefined2 *)(pcVar9 + 2);
          uVar18 = *(undefined8 *)(pcVar9 + 8);
          puVar13 = puVar16;
          FUN_10a1333cc();
          if (puVar13 != (undefined8 *)0x0) {
            *puVar13 = uVar18;
            puVar13[1] = 0;
            puVar13[2] = uVar17;
            *(undefined4 *)(puVar13 + 3) = uVar1;
            *(undefined2 *)((long)puVar13 + 0x1c) = uVar2;
            *(undefined1 *)((long)puVar13 + 0x1e) = 6;
            if ((*(byte *)(puVar16 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1449e8);
              (*pcVar8)();
            }
            puVar16[0x18] = puVar16[0x18] + 1;
          }
        }
      }
      if (((*(char *)(puVar16[1] + 0x41) == '\x01') && (pcVar9[0x28] == '\x01')) &&
         (plVar14 = (long *)puVar16[0xb], plVar14 != (long *)0x0)) {
        param_2 = *(undefined ***)(pcVar9 + 0x20);
        (**(code **)(*plVar14 + 0x18))(plVar14,param_2);
      }
    }
  }
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = pcVar9;
  return auVar20;
}



/* Entry: 10a144824; end: 10a144867;  */

undefined1  [16] FUN_10a144824(char *param_1,undefined **param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if (param_2 < (undefined **)0x1555555555555556) {
    lVar9 = (long)param_2 * 0xc;
    __Znwm(lVar9);
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = lVar9;
    return auVar18;
  }
  func_0x000109ffded8();
  puVar7 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar14 = &PTR___tlv_bootstrap_11340d750;
    ppuVar10 = ppuVar14;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar11 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar10 & 1) == 0) {
      param_2 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,param_2,0x100000000);
      (*(code *)puVar7)();
      *(undefined1 *)ppuVar14 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    puVar15 = (undefined8 *)ppuVar11[2];
    if (puVar15 != (undefined8 *)0x0) {
      lVar9 = puVar15[1];
      bVar6 = *(byte *)(lVar9 + 0x42) | *(byte *)(lVar9 + 0x43);
      if (((bVar6 & 1) != 0) || (*(char *)(lVar9 + 0x3f) == '\x01')) {
        uVar5 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar16 = cntvct_el0;
        if (uVar5 != 1000000000) {
          uVar3 = 0;
          if (uVar5 != 0) {
            uVar3 = uVar16 / uVar5;
          }
          uVar4 = 0;
          if (uVar5 != 0) {
            uVar4 = ((uVar16 - uVar3 * uVar5) * 1000000000) / uVar5;
          }
          uVar16 = uVar4 + uVar3 * 1000000000;
        }
        if ((bVar6 & 1) != 0) {
          uVar1 = *(undefined4 *)(param_1 + 0x10);
          uVar2 = *(undefined2 *)(param_1 + 2);
          uVar17 = *(undefined8 *)(param_1 + 8);
          puVar12 = puVar15;
          FUN_10a1333cc();
          if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = uVar17;
            puVar12[1] = 0;
            puVar12[2] = uVar16;
            *(undefined4 *)(puVar12 + 3) = uVar1;
            *(undefined2 *)((long)puVar12 + 0x1c) = uVar2;
            *(undefined1 *)((long)puVar12 + 0x1e) = 6;
            if ((*(byte *)(puVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1449e8);
              (*pcVar8)();
            }
            puVar15[0x18] = puVar15[0x18] + 1;
          }
        }
      }
      if (((*(char *)(puVar15[1] + 0x41) == '\x01') && (param_1[0x28] == '\x01')) &&
         (plVar13 = (long *)puVar15[0xb], plVar13 != (long *)0x0)) {
        param_2 = *(undefined ***)(param_1 + 0x20);
        (**(code **)(*plVar13 + 0x18))(plVar13,param_2);
      }
    }
  }
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = param_1;
  return auVar19;
}



/* Entry: 10a144868; end: 10a1449eb;  */

char * FUN_10a144868(char *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  puVar7 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar13 = &PTR___tlv_bootstrap_11340d750;
    ppuVar9 = ppuVar13;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar10 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar9 & 1) == 0) {
      ppuVar9 = ppuVar10;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
      (*(code *)puVar7)();
      *(undefined1 *)ppuVar13 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    puVar15 = (undefined8 *)ppuVar10[2];
    if (puVar15 != (undefined8 *)0x0) {
      lVar14 = puVar15[1];
      bVar6 = *(byte *)(lVar14 + 0x42) | *(byte *)(lVar14 + 0x43);
      if (((bVar6 & 1) != 0) || (*(char *)(lVar14 + 0x3f) == '\x01')) {
        uVar5 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar16 = cntvct_el0;
        if (uVar5 != 1000000000) {
          uVar3 = 0;
          if (uVar5 != 0) {
            uVar3 = uVar16 / uVar5;
          }
          uVar4 = 0;
          if (uVar5 != 0) {
            uVar4 = ((uVar16 - uVar3 * uVar5) * 1000000000) / uVar5;
          }
          uVar16 = uVar4 + uVar3 * 1000000000;
        }
        if ((bVar6 & 1) != 0) {
          uVar1 = *(undefined4 *)(param_1 + 0x10);
          uVar2 = *(undefined2 *)(param_1 + 2);
          uVar17 = *(undefined8 *)(param_1 + 8);
          puVar11 = puVar15;
          FUN_10a1333cc();
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = uVar17;
            puVar11[1] = 0;
            puVar11[2] = uVar16;
            *(undefined4 *)(puVar11 + 3) = uVar1;
            *(undefined2 *)((long)puVar11 + 0x1c) = uVar2;
            *(undefined1 *)((long)puVar11 + 0x1e) = 6;
            if ((*(byte *)(puVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1449e8);
              (*pcVar8)();
            }
            puVar15[0x18] = puVar15[0x18] + 1;
          }
        }
      }
      if (((*(char *)(puVar15[1] + 0x41) == '\x01') && (param_1[0x28] == '\x01')) &&
         (plVar12 = (long *)puVar15[0xb], plVar12 != (long *)0x0)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,*(undefined8 *)(param_1 + 0x20));
      }
    }
  }
  return param_1;
}



/* Entry: 10a1449ec; end: 10a144bbb;  */

long FUN_10a1449ec(long param_1)

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



/* Entry: 10a144bbc; end: 10a144c53;  */

long * FUN_10a144bbc(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_10a144c38;
    lVar3 = 0x200;
  }
  param_1[4] = lVar3;
LAB_10a144c38:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a144c54; end: 10a144cf7;  */

long * FUN_10a144c54(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a144cf8; end: 10a144d07;  */

void FUN_10a144cf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba75a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a144d08; end: 10a144d27;  */

void FUN_10a144d08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba75a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a144d28; end: 10a144da3;  */

long FUN_10a144d28(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar7 = (long *)(param_1 + 0x28);
  if (*plVar7 != 0) {
    FUN_109d1a244(plVar7);
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) {
      puVar2 = (ulong *)(plVar7 + 1);
      do {
        uVar6 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
  }
  plVar7 = *(long **)(param_1 + 0x20);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return param_1 + 0x18;
}



/* Entry: 10a144da4; end: 10a144da7;  */

void FUN_10a144da4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a144da8; end: 10a1450b7;  */

void FUN_10a144da8(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  if (0x1ff < param_1[4]) {
    param_1[4] = param_1[4] - 0x200;
    puVar10 = (undefined8 *)param_1[1] + 1;
    uVar3 = *(undefined8 *)param_1[1];
LAB_10a144de0:
    param_1[1] = (ulong)puVar10;
    puVar10 = (undefined8 *)param_1[2];
    if (puVar10 == (undefined8 *)param_1[3]) {
      uVar15 = *param_1;
      uVar5 = param_1[1];
      if (uVar5 < uVar15 || uVar5 - uVar15 == 0) {
        uVar8 = (long)((long)puVar10 - uVar15) >> 2;
        if ((long)puVar10 - uVar15 == 0) {
          uVar8 = 1;
        }
        uVar15 = uVar8;
        FUN_10a1451b4();
        puVar11 = (undefined8 *)(uVar15 + (uVar8 >> 2) * 8);
        lVar12 = param_1[2] - (long)param_1[1];
        puVar10 = puVar11;
        if (lVar12 != 0) {
          puVar10 = (undefined8 *)((long)puVar11 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar11;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar8 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar11;
        param_1[2] = (ulong)puVar10;
        param_1[3] = uVar15 + uVar5 * 8;
        if (uVar8 != 0) {
          __ZdlPv(uVar8);
          puVar10 = (undefined8 *)param_1[2];
        }
      }
      else {
        lVar12 = (((long)(uVar5 - uVar15) >> 3) + 1) / 2;
        lVar13 = uVar5 + lVar12 * -8;
        lVar1 = (long)puVar10 - uVar5;
        if (lVar1 != 0) {
          _memmove(lVar13,uVar5,lVar1);
          uVar5 = param_1[1];
        }
        puVar10 = (undefined8 *)(lVar13 + lVar1);
        param_1[1] = uVar5 + lVar12 * -8;
        param_1[2] = (ulong)puVar10;
      }
    }
    *puVar10 = uVar3;
    param_1[2] = param_1[2] + 8;
    return;
  }
  puVar11 = (undefined8 *)param_1[2];
  puVar9 = (undefined8 *)param_1[3];
  puVar7 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  uVar15 = (long)puVar11 - (long)puVar10;
  if (uVar15 < (ulong)((long)puVar9 - (long)puVar7)) {
    uVar3 = 0x1000;
    __Znwm();
    if (puVar9 == puVar11) {
      if (puVar10 == puVar7) {
        uVar15 = (long)puVar9 - (long)puVar10 >> 2;
        if (puVar11 == puVar10) {
          uVar15 = 1;
        }
        lVar12 = uVar15 * 2;
        FUN_10a1451b4();
        puVar10 = (undefined8 *)(uVar15 + (lVar12 + 6U & 0xfffffffffffffff8));
        lVar12 = param_1[2] - (long)param_1[1];
        puVar11 = puVar10;
        if (lVar12 != 0) {
          puVar11 = (undefined8 *)((long)puVar10 + lVar12);
          puVar7 = (undefined8 *)param_1[1];
          puVar9 = puVar10;
          do {
            *puVar9 = *puVar7;
            lVar12 = lVar12 + -8;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
        }
        uVar5 = *param_1;
        *param_1 = uVar15;
        param_1[1] = (ulong)puVar10;
        param_1[2] = (ulong)puVar11;
        param_1[3] = uVar15 + (long)param_2 * 8;
        if (uVar5 != 0) {
          __ZdlPv(uVar5);
          puVar10 = (undefined8 *)param_1[1];
        }
      }
      puVar10[-1] = uVar3;
      puVar10 = (undefined8 *)param_1[1];
      param_1[1] = (ulong)(puVar10 + -1);
      uVar3 = puVar10[-1];
      goto LAB_10a144de0;
    }
    *puVar11 = uVar3;
    param_1[2] = param_1[2] + 8;
  }
  else {
    puVar6 = (undefined8 *)((long)puVar9 - (long)puVar7 >> 2);
    if (puVar9 == puVar7) {
      puVar6 = (undefined8 *)0x1;
    }
    FUN_10a1451b4();
    uVar3 = 0x1000;
    puVar4 = param_2;
    __Znwm();
    puVar7 = (undefined8 *)((long)puVar6 + uVar15);
    puVar9 = puVar6 + (long)param_2;
    puVar2 = puVar6;
    if (uVar15 == (long)param_2 * 8) {
      if ((long)uVar15 < 1) {
        puVar7 = (undefined8 *)((long)puVar7 - (long)puVar6 >> 2);
        if (puVar11 == puVar10) {
          puVar7 = (undefined8 *)0x1;
        }
        puVar2 = puVar7;
        FUN_10a1451b4();
        puVar7 = puVar2 + ((ulong)puVar7 >> 2);
        puVar9 = puVar2 + (long)puVar4;
        if (puVar6 != (undefined8 *)0x0) {
          __ZdlPv(puVar6);
        }
      }
      else {
        lVar12 = ((long)puVar7 - (long)puVar6 >> 3) + 1;
        puVar7 = puVar7 + -((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
      }
    }
    puVar10 = puVar7 + 1;
    *puVar7 = uVar3;
    puVar11 = (undefined8 *)param_1[2];
    puVar6 = puVar2;
    if (puVar11 != (undefined8 *)param_1[1]) {
      do {
        puVar2 = puVar6;
        puVar14 = puVar7;
        if (puVar7 == puVar6) {
          if (puVar10 < puVar9) {
            lVar12 = ((long)puVar9 - (long)puVar10 >> 3) + 1;
            lVar1 = (long)puVar10 - (long)puVar6;
            lVar13 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar10 + ((ulong)(lVar12 - (lVar12 >> 0x3f)) >> 1);
            puVar14 = (undefined8 *)((long)puVar10 - lVar1);
            if (lVar13 != 0) {
              _memmove(puVar14,puVar7,lVar13);
              puVar4 = puVar7;
            }
          }
          else {
            puVar14 = (undefined8 *)((long)puVar9 - (long)puVar6 >> 2);
            if ((long)puVar9 - (long)puVar6 == 0) {
              puVar14 = (undefined8 *)0x1;
            }
            puVar2 = puVar14;
            FUN_10a1451b4();
            puVar14 = (undefined8 *)((long)puVar2 + ((long)puVar14 * 2 + 6U & 0xfffffffffffffff8));
            lVar12 = (long)puVar10 - (long)puVar6;
            puVar10 = puVar14;
            if (lVar12 != 0) {
              puVar10 = (undefined8 *)((long)puVar14 + lVar12);
              puVar9 = puVar14;
              do {
                *puVar9 = *puVar7;
                lVar12 = lVar12 + -8;
                puVar9 = puVar9 + 1;
                puVar7 = puVar7 + 1;
              } while (lVar12 != 0);
            }
            puVar9 = puVar2 + (long)puVar4;
            if (puVar6 != (undefined8 *)0x0) {
              __ZdlPv(puVar6);
            }
          }
        }
        puVar11 = puVar11 + -1;
        puVar7 = puVar14 + -1;
        *puVar7 = *puVar11;
        puVar6 = puVar2;
      } while (puVar11 != (undefined8 *)param_1[1]);
    }
    uVar15 = *param_1;
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar10;
    param_1[3] = (ulong)puVar9;
    if (uVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a1450b8; end: 10a1451b3;  */

void FUN_10a1450b8(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_10a1451b4();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a1451b4; end: 10a1451e7;  */

void FUN_10a1451b4(ulong param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  long lStack_78;
  long lStack_70;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  plVar5 = *(long **)(param_1 + 0xf0);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(plVar5 + 0x16) & 1) != 0) {
      *(long *)(param_1 + 0xb8) = plVar5[0x13];
      *(long *)(param_1 + 0xc0) = plVar5[0x14];
      plVar5[0x14] = 0;
      *(long *)(param_1 + 200) = plVar5[0x15];
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
      plVar5 = *(long **)(param_1 + 0xf8);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
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
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      if (*(long *)(param_1 + 0x98) != 0) {
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
        __ZdlPv();
      }
      func_0x000109a18110(param_1 + 0x88);
      if ((*(char *)(param_1 + 0xd8) == '\x01') &&
         (((uint)*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x10) >> 1 & 1) != 0)) {
        func_0x0001092ba100(param_1 + 0x10);
        func_0x000109a18054(param_1 + 0xb8);
        iVar10 = 3;
      }
      else {
        for (plVar5 = *(long **)(*(long *)(param_1 + 0x100) + 0x80); plVar5 != (long *)0x0;
            plVar5 = (long *)*plVar5) {
          plVar11 = (long *)plVar5[5];
          uVar6 = *(undefined8 *)(param_1 + 200);
          FUN_10a12ac88(uVar6,plVar5 + 2);
          lVar8 = (long)(int)uVar6;
          lVar7 = param_1 + 0xb8;
          func_0x000109a180d0();
          lStack_78 = lVar7;
          lStack_70 = lVar8;
          (**(code **)(*plVar11 + 0x48))(plVar11,&lStack_78);
        }
        func_0x000109a18054(param_1 + 0xb8);
        iVar10 = 0;
      }
      FUN_10a10eb5c(param_1 + 0xe0);
      if (iVar10 == 0) {
        func_0x0001092ba100(param_1 + 0x10);
      }
      func_0x000109d1a1d0(param_1 + 0x10);
      if ((*(char *)(param_1 + 0xd8) == '\x01') &&
         (plVar5 = *(long **)(param_1 + 0xd0), plVar5 != (long *)0x0)) {
        puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 0x10))(plVar5);
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
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      if (*(long *)(param_1 + 0x60) != 0) {
        *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
        __ZdlPv();
      }
      func_0x000109a18110(param_1 + 0x50);
      __ZdlPv(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(plVar5 + 0x12);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a14542c);
  (*pcVar4)();
}



/* Entry: 10a1451e8; end: 10a14561b;  */

void FUN_10a1451e8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  long lStack_58;
  long lStack_50;
  
  plVar5 = *(long **)(param_1 + 0xf0);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(plVar5 + 0x16) & 1) != 0) {
      *(long *)(param_1 + 0xb8) = plVar5[0x13];
      *(long *)(param_1 + 0xc0) = plVar5[0x14];
      plVar5[0x14] = 0;
      *(long *)(param_1 + 200) = plVar5[0x15];
      puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 8))();
        }
      }
      plVar5 = *(long **)(param_1 + 0xf8);
      if (plVar5 != (long *)0x0) {
        puVar1 = (ulong *)(plVar5 + 1);
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
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      if (*(long *)(param_1 + 0x98) != 0) {
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
        __ZdlPv();
      }
      func_0x000109a18110(param_1 + 0x88);
      if ((*(char *)(param_1 + 0xd8) == '\x01') &&
         (((uint)*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x10) >> 1 & 1) != 0)) {
        func_0x0001092ba100(param_1 + 0x10);
        func_0x000109a18054(param_1 + 0xb8);
        iVar10 = 3;
      }
      else {
        for (plVar5 = *(long **)(*(long *)(param_1 + 0x100) + 0x80); plVar5 != (long *)0x0;
            plVar5 = (long *)*plVar5) {
          plVar11 = (long *)plVar5[5];
          uVar6 = *(undefined8 *)(param_1 + 200);
          FUN_10a12ac88(uVar6,plVar5 + 2);
          lVar8 = (long)(int)uVar6;
          lVar7 = param_1 + 0xb8;
          func_0x000109a180d0();
          lStack_58 = lVar7;
          lStack_50 = lVar8;
          (**(code **)(*plVar11 + 0x48))(plVar11,&lStack_58);
        }
        func_0x000109a18054(param_1 + 0xb8);
        iVar10 = 0;
      }
      FUN_10a10eb5c(param_1 + 0xe0);
      if (iVar10 == 0) {
        func_0x0001092ba100(param_1 + 0x10);
      }
      func_0x000109d1a1d0(param_1 + 0x10);
      if ((*(char *)(param_1 + 0xd8) == '\x01') &&
         (plVar5 = *(long **)(param_1 + 0xd0), plVar5 != (long *)0x0)) {
        puVar1 = (ulong *)(plVar5 + 1);
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
          (**(code **)(*plVar5 + 0x10))(plVar5);
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
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      if (*(long *)(param_1 + 0x60) != 0) {
        *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
        __ZdlPv();
      }
      func_0x000109a18110(param_1 + 0x50);
      __ZdlPv(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(plVar5 + 0x12);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a14542c);
  (*pcVar4)();
}



/* Entry: 10a14561c; end: 10a145797;  */

void FUN_10a14561c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0xf0);
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
  plVar4 = *(long **)(param_1 + 0xf8);
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
  if (*(long *)(param_1 + 0x98) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
    __ZdlPv();
  }
  func_0x000109a18110(param_1 + 0x88);
  FUN_10a10eb5c(param_1 + 0xe0);
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((*(char *)(param_1 + 0xd8) == '\x01') &&
     (plVar4 = *(long **)(param_1 + 0xd0), plVar4 != (long *)0x0)) {
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
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
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  func_0x000109a18110(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a145798; end: 10a145a1f;  */

void FUN_10a145798(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar5 = *(long **)(param_1 + 0x90);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x10) >> 5 & 1) == 0) {
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
    plVar5 = *(long **)(param_1 + 0x98);
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
    if ((*(char *)(param_1 + 0x88) == '\x01') &&
       (plVar5 = *(long **)(param_1 + 0x80), plVar5 != (long *)0x0)) {
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
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
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
      __ZdlPv();
    }
    func_0x000109a18110(param_1 + 0x50);
    func_0x0001092ba100(param_1 + 0x10);
    func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1458fc);
  (*pcVar4)();
}



/* Entry: 10a145a20; end: 10a145b5f;  */

void FUN_10a145a20(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x90);
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
  plVar4 = *(long **)(param_1 + 0x98);
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
  if ((*(char *)(param_1 + 0x88) == '\x01') &&
     (plVar4 = *(long **)(param_1 + 0x80), plVar4 != (long *)0x0)) {
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
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
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  func_0x000109a18110(param_1 + 0x50);
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a145b60; end: 10a145e77;  */

void FUN_10a145b60(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    FUN_10a12a290(param_1 + 0xb0,param_1 + 0x48);
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xb0);
    plVar6 = (long *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xb8) = 1;
      lVar9 = *(long *)(param_1 + 0xa0);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_48);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  plVar6 = *(long **)(param_1 + 0xa0);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a145db4);
    (*pcVar5)();
  }
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
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
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0xb0);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
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
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  if ((*(char *)(param_1 + 0x98) == '\x01') &&
     (plVar6 = *(long **)(param_1 + 0x90), plVar6 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar6 + 1);
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
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
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
    __ZdlPv();
  }
  func_0x000109a18110(param_1 + 0x60);
  plVar6 = *(long **)(param_1 + 0x50);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a145e78; end: 10a145ffb;  */

void FUN_10a145e78(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    plVar5 = *(long **)(param_1 + 0xa0);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0xb0);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  if ((*(char *)(param_1 + 0x98) == '\x01') &&
     (plVar5 = *(long **)(param_1 + 0x90), plVar5 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
    __ZdlPv();
  }
  func_0x000109a18110(param_1 + 0x60);
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a145ffc; end: 10a146407;  */

void FUN_10a145ffc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x90);
    FUN_10a13be08(param_1 + 0x98,param_1 + 0x88,param_1 + 0x80);
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x98);
    plVar5 = (long *)(*(long *)(param_1 + 0x98) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar8 = *(long *)(param_1 + 0x90);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_48);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x90);
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
  plVar5 = *(long **)(param_1 + 0x98);
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
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10) >> 1 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0xa0) = lVar8;
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (((uint)*(undefined8 *)(lVar8 + 0x10) >> 5 & 1) == 0) {
      func_0x0001092af8bc(param_1 + 0xa0);
      if ((*(byte *)(*(long *)(param_1 + 0xa0) + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a146328);
        (*pcVar4)();
      }
      FUN_10a13aee0(param_1 + 0x48,*(long *)(param_1 + 0xa0) + 0x98);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&uStack_48,*(long *)(param_1 + 0xa0) + 0x90);
      FUN_10a13afcc(param_1 + 0x60,&uStack_48);
      __ZNSt13exception_ptrD1Ev(&uStack_48);
    }
    plVar5 = *(long **)(param_1 + 0xa0);
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
  }
  func_0x0001092ba100(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 0x88);
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
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
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x68)) && (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x70))();
  }
  if ((3 < *(int *)(param_1 + 0x50)) && (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x58))();
  }
  plVar5 = *(long **)(param_1 + 0x80);
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
  __ZdlPv(param_1);
  return;
}



/* Entry: 10a146408; end: 10a1465ff;  */

void FUN_10a146408(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x90);
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a14655c;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a14655c;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
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
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x98);
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
    plVar5 = *(long **)(param_1 + 0x88);
    if (plVar5 == (long *)0x0) goto LAB_10a14655c;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a14655c;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10a14655c:
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x68)) && (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x70))();
  }
  if ((3 < *(int *)(param_1 + 0x50)) && (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x58))();
  }
  plVar5 = *(long **)(param_1 + 0x80);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a146600; end: 10a146a63;  */

void FUN_10a146600(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x90) = iVar2;
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_1 + 0x60);
    }
    else if (3 < iVar2) {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x68);
    iVar2 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0xa8) = iVar2;
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0x78);
    }
    else if (3 < iVar2) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_10a13b7c8(param_1 + 0xd0,param_1 + 0xe1,param_1 + 0xd8,param_1 + 0x88);
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xd0);
    plVar6 = (long *)(*(long *)(param_1 + 0xd0) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xe0) = 1;
      lVar9 = *(long *)(param_1 + 0xc0);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_38);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  plVar6 = *(long **)(param_1 + 0xc0);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a146950);
    (*pcVar5)();
  }
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
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
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0xd0);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
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
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  if ((3 < *(int *)(param_1 + 0xa8)) && (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0xb0))();
  }
  if ((3 < *(int *)(param_1 + 0x90)) && (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x98))();
  }
  plVar6 = *(long **)(param_1 + 0xd8);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
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
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x70)) && (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x78))();
  }
  if ((3 < *(int *)(param_1 + 0x58)) && (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
  }
  plVar6 = *(long **)(param_1 + 0x48);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
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
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a146a64; end: 10a146c37;  */

void FUN_10a146a64(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    plVar4 = *(long **)(param_1 + 0xc0);
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
    plVar4 = *(long **)(param_1 + 0xd0);
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
    if ((3 < *(int *)(param_1 + 0xa8)) && (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(param_1 + 0xb0))();
    }
    if ((3 < *(int *)(param_1 + 0x90)) && (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(param_1 + 0x98))();
    }
    plVar4 = *(long **)(param_1 + 0xd8);
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
  }
  if ((3 < *(int *)(param_1 + 0x70)) && (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x78))();
  }
  if ((3 < *(int *)(param_1 + 0x58)) && (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
  }
  plVar4 = *(long **)(param_1 + 0x48);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a146c38; end: 10a146ee7;  */

void FUN_10a146c38(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  plVar6 = *(long **)(param_1 + 0x68);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(plVar6 + 0x15) & 1) != 0) {
      lVar7 = plVar6[0x14];
      lVar9 = plVar6[0x13];
      *(long *)(param_1 + 0x60) = plVar6[0x14];
      *(long *)(param_1 + 0x58) = lVar9;
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
      puVar2 = (ulong *)(plVar6 + 1);
      do {
        uVar8 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      plVar6 = *(long **)(param_1 + 0x70);
      if (plVar6 != (long *)0x0) {
        puVar2 = (ulong *)(plVar6 + 1);
        do {
          uVar8 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar8 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar8 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      FUN_10a12c178(auStack_30,*(undefined8 *)(**(long **)(param_1 + 0x78) + 0x870),
                    *(undefined8 *)(param_1 + 0x58));
      FUN_10a12b638(param_1 + 0x10,auStack_30);
      if (plStack_28 != (long *)0x0) {
        plVar6 = plStack_28 + 1;
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
          (**(code **)(*plStack_28 + 0x10))(plStack_28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
        }
      }
      plVar6 = *(long **)(param_1 + 0x60);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = *(long **)(param_1 + 0x50);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(*(undefined8 *)(param_1 + 0x80));
      func_0x000109d1a1d0(param_1 + 0x10);
      __ZdlPv(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(plVar6 + 0x12);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a146e14);
  (*pcVar5)();
}



/* Entry: 10a146ee8; end: 10a146fdf;  */

void FUN_10a146ee8(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar5 = *(long **)(param_1 + 0x68);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x70);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  __ZNSt3__119__shared_weak_count14__release_weakEv(*(undefined8 *)(param_1 + 0x80));
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a146fe0; end: 10a14728b;  */

void FUN_10a146fe0(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    FUN_10a12b678(param_1 + 0x88,param_1 + 0x48);
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x88);
    plVar6 = (long *)(*(long *)(param_1 + 0x88) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x90) = 1;
      lVar9 = *(long *)(param_1 + 0x78);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_38);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  lVar9 = *(long *)(param_1 + 0x78);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar9 + 0xa8) & 1) != 0) {
      FUN_10a12b638(param_1 + 0x10,lVar9 + 0x98);
      plVar6 = *(long **)(param_1 + 0x78);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
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
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0x88);
      if (plVar6 != (long *)0x0) {
        puVar1 = (ulong *)(plVar6 + 1);
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
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0x70);
      if (plVar6 != (long *)0x0) {
        plVar2 = plVar6 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      if (*(char *)(param_1 + 0x67) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x50));
      }
      func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar9 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1471c8);
  (*pcVar5)();
}



/* Entry: 10a14728c; end: 10a1473b3;  */

void FUN_10a14728c(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x70);
    if (plVar5 == (long *)0x0) goto LAB_10a14738c;
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar5 = *(long **)(param_1 + 0x78);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x88);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar6 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x70);
    if (plVar5 == (long *)0x0) goto LAB_10a14738c;
    plVar2 = plVar5 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a14738c:
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a1473b4; end: 10a1477a3;  */

void FUN_10a1473b4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x90);
    func_0x0001098ad440(param_1 + 0x98,param_1 + 0x88,param_1 + 0x80);
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x98);
    plVar4 = (long *)(*(long *)(param_1 + 0x98) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar7 = *(long *)(param_1 + 0x90);
      plVar4 = (long *)(lVar7 + 0x10);
      uStack_38 = *(undefined8 *)(param_1 + 0x18);
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
            uStack_48 = 0;
            lStack_40 = param_1;
            func_0x000109d1b588(lVar7 + 0x18,&uStack_48);
            *(undefined8 *)(lVar7 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar6 >> 1 & 1) == 0);
    }
  }
  plVar4 = *(long **)(param_1 + 0x90);
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
  plVar4 = *(long **)(param_1 + 0x98);
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
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10) >> 1 & 1) == 0) {
    lVar7 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0xa0) = lVar7;
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (((uint)*(undefined8 *)(lVar7 + 0x10) >> 5 & 1) == 0) {
      FUN_10a05e740(param_1 + 0x48);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&uStack_48,*(long *)(param_1 + 0xa0) + 0x90);
      FUN_10a13ef34(param_1 + 0x60,&uStack_48);
      __ZNSt13exception_ptrD1Ev(&uStack_48);
    }
    plVar4 = *(long **)(param_1 + 0xa0);
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
  }
  func_0x0001092ba100(param_1 + 0x10);
  plVar4 = *(long **)(param_1 + 0x88);
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
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
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x68)) && (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x70))();
  }
  if ((3 < *(int *)(param_1 + 0x50)) && (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x58))();
  }
  plVar4 = *(long **)(param_1 + 0x80);
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
  __ZdlPv(param_1);
  return;
}



/* Entry: 10a1477a4; end: 10a14799b;  */

void FUN_10a1477a4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x90);
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a1478f8;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a1478f8;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
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
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x98);
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
    plVar5 = *(long **)(param_1 + 0x88);
    if (plVar5 == (long *)0x0) goto LAB_10a1478f8;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a1478f8;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10a1478f8:
  func_0x000109d1a1d0(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x68)) && (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x70))();
  }
  if ((3 < *(int *)(param_1 + 0x50)) && (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x58))();
  }
  plVar5 = *(long **)(param_1 + 0x80);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a14799c; end: 10a147dff;  */

void FUN_10a14799c(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x90) = iVar2;
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_1 + 0x60);
    }
    else if (3 < iVar2) {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x68);
    iVar2 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0xa8) = iVar2;
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0x78);
    }
    else if (3 < iVar2) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_10a13f638(param_1 + 0xd0,param_1 + 0xe1,param_1 + 0xd8,param_1 + 0x88);
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xd0);
    plVar6 = (long *)(*(long *)(param_1 + 0xd0) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xe0) = 1;
      lVar9 = *(long *)(param_1 + 0xc0);
      plVar6 = (long *)(lVar9 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar8 = *plVar6;
        if (lVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_38);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar8 >> 1 & 1) == 0);
    }
  }
  plVar6 = *(long **)(param_1 + 0xc0);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar6 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a147cec);
    (*pcVar5)();
  }
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
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
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0xd0);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
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
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  if ((3 < *(int *)(param_1 + 0xa8)) && (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0xb0))();
  }
  if ((3 < *(int *)(param_1 + 0x90)) && (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x98))();
  }
  plVar6 = *(long **)(param_1 + 0xd8);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
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
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  if ((3 < *(int *)(param_1 + 0x70)) && (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x78))();
  }
  if ((3 < *(int *)(param_1 + 0x58)) && (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
  }
  plVar6 = *(long **)(param_1 + 0x48);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
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
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a147e00; end: 10a147fd3;  */

void FUN_10a147e00(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    plVar4 = *(long **)(param_1 + 0xc0);
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
    plVar4 = *(long **)(param_1 + 0xd0);
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
    if ((3 < *(int *)(param_1 + 0xa8)) && (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(param_1 + 0xb0))();
    }
    if ((3 < *(int *)(param_1 + 0x90)) && (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(param_1 + 0x98))();
    }
    plVar4 = *(long **)(param_1 + 0xd8);
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
  }
  if ((3 < *(int *)(param_1 + 0x70)) && (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x78))();
  }
  if ((3 < *(int *)(param_1 + 0x58)) && (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x60))();
  }
  plVar4 = *(long **)(param_1 + 0x48);
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
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a147fd4; end: 10a1484bb;  */

void FUN_10a147fd4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *plStack_50;
  long lStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    lVar9 = *(long *)(*(long *)(param_1 + 0x60) + 0x28);
    if ((lVar9 != 0) && (((uint)*(undefined8 *)(lVar9 + 0x10) >> 1 & 1) == 0)) {
      func_0x0001098ad440(param_1 + 0x58,param_1 + 0x48);
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x58);
      plVar5 = (long *)(*(long *)(param_1 + 0x58) + 8);
      do {
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar8) {
          *plVar5 = *plVar5 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x68) = 1;
        lVar9 = *(long *)(param_1 + 0x50);
        plVar5 = (long *)(lVar9 + 0x10);
        uStack_38 = *(undefined8 *)(param_1 + 0x18);
        do {
          lVar7 = *plVar5;
          if (lVar7 == 0) {
            cVar2 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar8) {
              *plVar5 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lStack_48 = 0;
              plStack_40 = (long *)param_1;
              func_0x000109d1b588(lVar9 + 0x18,&lStack_48);
              *(undefined8 *)(lVar9 + 0x10) = 0;
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar7 >> 1 & 1) == 0);
      }
      goto LAB_10a147ff4;
    }
  }
  else {
LAB_10a147ff4:
    plVar5 = *(long **)(param_1 + 0x50);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a148318);
      (*pcVar4)();
    }
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
    plVar10 = *(long **)(param_1 + 0x60);
    plStack_50 = (long *)0x0;
    plVar5 = (long *)plVar10[1];
    if (plVar5 == (long *)0x0) {
LAB_10a148170:
      lVar9 = 0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      plVar10 = *(long **)(param_1 + 0x60);
      plStack_50 = plVar5;
      if (plVar5 == (long *)0x0) goto LAB_10a148170;
      lVar9 = *plVar10;
    }
    lStack_48 = 0;
    plStack_40 = (long *)0x0;
    plVar5 = (long *)plVar10[3];
    if ((((plVar5 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_40 = plVar5, plVar5 == (long *)0x0)) ||
        (lStack_48 = plVar10[2], lVar9 == 0)) || (lStack_48 == 0)) {
      plVar5 = plStack_40;
      func_0x0001092ba100(param_1 + 0x10);
      bVar8 = false;
      if (plVar5 != (long *)0x0) goto LAB_10a1481e8;
    }
    else {
      if (plVar5[1] < 1) {
        func_0x0001092ba100(param_1 + 0x10);
        bVar8 = false;
      }
      else {
        FUN_10ab24844(lVar9,*(undefined4 *)(*(long *)(param_1 + 0x60) + 0x20),&lStack_48,0);
        bVar8 = true;
        plVar5 = plStack_40;
        if (plStack_40 == (long *)0x0) goto LAB_10a148218;
      }
LAB_10a1481e8:
      plVar10 = plVar5 + 1;
      do {
        lVar9 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
LAB_10a148218:
    if (plStack_50 != (long *)0x0) {
      plVar5 = plStack_50 + 1;
      do {
        lVar9 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
      }
    }
    if (!bVar8) goto LAB_10a14825c;
  }
  func_0x0001092ba100(param_1 + 0x10);
LAB_10a14825c:
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar8) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 10a1484bc; end: 10a14862b;  */

void FUN_10a1484bc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x50);
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_10a148610;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a148610;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
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
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x58);
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
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_10a148610;
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
    if ((uVar4 & 0x1fffffffc) != 4) goto LAB_10a148610;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    do {
      uVar4 = *puVar1 - 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (uVar4 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
LAB_10a148610:
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a14862c; end: 10a1488df;  */

void FUN_10a14862c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    FUN_10a133860(param_1 + 0x88,param_1 + 0x48);
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x88);
    plVar5 = (long *)(*(long *)(param_1 + 0x88) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x90) = 1;
      lVar8 = *(long *)(param_1 + 0x78);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x78);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a14881c);
    (*pcVar4)();
  }
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
  plVar5 = *(long **)(param_1 + 0x88);
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
  func_0x0001092ba100(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 0x70);
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
  if (*(long *)(param_1 + 0x60) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a1488e0; end: 10a148a03;  */

void FUN_10a1488e0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x78);
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
    plVar4 = *(long **)(param_1 + 0x88);
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
  }
  plVar4 = *(long **)(param_1 + 0x70);
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
  if (*(long *)(param_1 + 0x60) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a148a04; end: 10a14a2db;  */

void FUN_10a148a04(undefined8 *param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  code *pcVar7;
  uint uVar8;
  long lVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  bool bVar10;
  undefined8 *extraout_x8;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  bool bVar15;
  undefined8 *puVar16;
  long *plVar17;
  ulong uVar18;
  int *piVar19;
  int iVar20;
  long *plVar21;
  long *plVar22;
  uint uVar23;
  undefined8 *puVar24;
  long lVar25;
  char *pcVar26;
  int *piVar27;
  int *piVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  undefined8 *puVar33;
  ulong *puVar35;
  long *plVar36;
  long lVar37;
  float fVar38;
  float fVar39;
  ulong *puStack_d778;
  long lStack_d768;
  long *plStack_d760;
  long *plStack_d758;
  ulong uStack_d750;
  undefined8 uStack_d748;
  undefined4 uStack_d740;
  int iStack_d73c;
  ulong uStack_d738;
  ulong uStack_d730;
  ulong uStack_d728;
  ulong uStack_d720;
  undefined8 uStack_d718;
  char cStack_d710;
  undefined7 uStack_d70f;
  long *plStack_d708;
  undefined1 auStack_d700 [7776];
  undefined8 auStack_b8a0 [23];
  undefined8 auStack_b7e8 [53];
  undefined8 auStack_b63c [748];
  undefined1 auStack_9ed8 [13064];
  undefined8 uStack_6bd0;
  int *piStack_6bc8;
  int *piStack_6bc0;
  ulong uStack_6bb8;
  undefined8 uStack_6bb0;
  undefined1 auStack_6ba8 [92];
  undefined8 uStack_6b4c;
  undefined8 uStack_6b44;
  undefined8 uStack_6b3c;
  undefined8 uStack_6b34;
  undefined8 uStack_6b2c;
  undefined8 uStack_6b24;
  undefined4 uStack_6b1c;
  undefined4 uStack_6b18;
  undefined4 uStack_6b14;
  undefined4 uStack_6b10;
  undefined4 uStack_6b0c;
  undefined4 uStack_6b08;
  undefined4 uStack_6b04;
  undefined4 uStack_6b00;
  undefined4 uStack_6afc;
  undefined4 uStack_6af8;
  undefined4 uStack_6af4;
  undefined4 uStack_6af0;
  undefined4 uStack_6aec;
  undefined4 uStack_6ae8;
  undefined4 uStack_6ae4;
  undefined4 uStack_6ae0;
  undefined4 uStack_6adc;
  undefined4 uStack_6ad8;
  undefined4 uStack_6ad4;
  undefined4 uStack_6ad0;
  undefined4 uStack_6acc;
  undefined4 uStack_6ac8;
  undefined4 uStack_6ac4;
  undefined4 uStack_6ac0;
  undefined4 uStack_6abc;
  undefined4 uStack_6ab8;
  undefined4 uStack_6ab4;
  undefined4 uStack_6ab0;
  undefined4 uStack_6aac;
  undefined4 uStack_6aa8;
  undefined4 uStack_6aa4;
  undefined4 uStack_6aa0;
  undefined4 uStack_6a9c;
  undefined4 uStack_6a98;
  undefined4 uStack_6a94;
  undefined4 uStack_6a90;
  undefined4 uStack_6a8c;
  undefined4 uStack_6a88;
  undefined4 uStack_6a84;
  undefined4 uStack_6a80;
  undefined4 uStack_6a7c;
  undefined4 uStack_6a78;
  undefined4 uStack_6a74;
  undefined4 uStack_6a70;
  undefined4 uStack_6a6c;
  undefined4 uStack_6a68;
  undefined4 uStack_6a64;
  undefined4 uStack_6a60;
  undefined4 uStack_6a5c;
  undefined4 uStack_6a58;
  undefined4 uStack_6a54;
  undefined4 uStack_6a50;
  undefined4 uStack_6a4c;
  undefined4 uStack_6a48;
  undefined4 uStack_6a44;
  undefined4 uStack_6a40;
  undefined4 uStack_6a3c;
  undefined4 uStack_6a38;
  undefined4 uStack_6a34;
  undefined4 uStack_6a30;
  undefined4 uStack_6a2c;
  undefined8 uStack_6a28;
  undefined8 uStack_6a20;
  undefined8 uStack_6a18;
  undefined8 uStack_6a10;
  undefined8 uStack_6a08;
  undefined8 uStack_6a00;
  undefined8 uStack_69f8;
  undefined8 uStack_69f0;
  undefined8 uStack_69e8;
  undefined1 auStack_69e0 [8];
  undefined8 uStack_69d8;
  undefined8 uStack_69d0;
  undefined8 uStack_69c8;
  undefined8 uStack_69c0;
  undefined8 uStack_69b8;
  undefined8 uStack_69b0;
  undefined8 uStack_69a8;
  undefined8 uStack_69a0;
  undefined8 uStack_6998;
  undefined8 uStack_6990;
  undefined8 uStack_6988;
  undefined8 uStack_6980;
  undefined8 uStack_6978;
  undefined4 uStack_6970;
  undefined4 uStack_696c;
  undefined4 uStack_6968;
  undefined8 uStack_6964;
  long lStack_78;
  char *pcVar34;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001137ea5e8 & 1) == 0) {
    iVar20 = 0x137ea5e8;
    ___cxa_guard_acquire();
    if (iVar20 != 0) {
      uRam00000001137ea658 = 0x32aaaba7;
      uRam00000001137ea668 = 0;
      uRam00000001137ea660 = 0;
      uRam00000001137ea678 = 0;
      uRam00000001137ea670 = 0;
      uRam00000001137ea688 = 0;
      uRam00000001137ea680 = 0;
      uRam00000001137ea690 = 0;
      ___cxa_guard_release(0x1137ea5e8);
    }
  }
  if ((bRam00000001137ea5d0 & 1) == 0) {
    iVar20 = 0x137ea5d0;
    ___cxa_guard_acquire();
    if (iVar20 != 0) {
      uRam00000001137ea620 = 0;
      plRam00000001137ea618 = (long *)0x0;
      puRam00000001137ea610 = (undefined8 *)0x0;
      lRam00000001137ea608 = 0;
      fRam00000001137ea628 = 1.0;
      ___cxa_guard_release(0x1137ea5d0);
    }
  }
  puVar13 = (undefined8 *)0x1137ea608;
  __ZNSt3__15mutex4lockEv(0x1137ea658);
  puVar24 = puVar13;
  func_0x000107c2b05c(0x1137ea608,param_1);
  puVar16 = puRam00000001137ea610;
  if (puRam00000001137ea610 != (undefined8 *)0x0) {
    uVar30 = (long)puRam00000001137ea610 - 1;
    if (((ulong)puRam00000001137ea610 & uVar30) == 0) {
      puVar33 = (undefined8 *)(uVar30 & (ulong)puVar24);
    }
    else {
      puVar33 = puVar24;
      if (puRam00000001137ea610 <= puVar24) {
        uVar14 = 0;
        if (puRam00000001137ea610 != (undefined8 *)0x0) {
          uVar14 = (ulong)puVar24 / (ulong)puRam00000001137ea610;
        }
        puVar33 = (undefined8 *)((long)puVar24 - uVar14 * (long)puRam00000001137ea610);
      }
    }
    puVar11 = *(undefined8 **)(lRam00000001137ea608 + (long)puVar33 * 8);
    if ((puVar11 != (undefined8 *)0x0) && (plVar36 = (long *)*puVar11, plVar36 != (long *)0x0)) {
      do {
        puVar11 = (undefined8 *)plVar36[1];
        if (puVar11 == puVar24) {
          uVar14 = 0;
          func_0x000107c2b068(0x1137ea608,plVar36 + 2,param_1);
          if ((uVar14 & 1) != 0) {
            *extraout_x8 = 0;
            extraout_x8[1] = 0;
            goto LAB_10a14a098;
          }
        }
        else {
          if (((ulong)puVar16 & uVar30) == 0) {
            puVar11 = (undefined8 *)((ulong)puVar11 & uVar30);
          }
          else if (puVar16 <= puVar11) {
            uVar14 = 0;
            if (puVar16 != (undefined8 *)0x0) {
              uVar14 = (ulong)puVar11 / (ulong)puVar16;
            }
            puVar11 = (undefined8 *)((long)puVar11 - uVar14 * (long)puVar16);
          }
          if (puVar11 != puVar33) break;
        }
        plVar36 = (long *)*plVar36;
      } while (plVar36 != (long *)0x0);
    }
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  cStack_d710 = '\0';
  FUN_10a14e260(&lStack_d768,&uStack_6bd0,&cStack_d710);
  _bzero(&cStack_d710,0x1e70);
  lVar12 = -0x1e60;
  do {
    *(undefined8 *)((long)auStack_b63c + lVar12 + 8) = 0;
    *(undefined8 *)((long)auStack_b63c + lVar12) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x198) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 400) = 0;
    *(undefined8 *)(&stack0xffffffffffff49c0 + lVar12) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x1a0) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x178) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x170) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x188) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x180) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x158) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x150) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x168) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x160) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x138) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x130) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x148) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x140) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x118) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x110) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x128) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x120) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0xf8) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0xf0) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x108) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x100) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0xd8) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0xd0) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0xe8) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0xe0) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0xb8) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0xb0) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 200) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0xc0) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x98) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x90) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0xa8) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0xa0) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x78) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x70) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x88) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x80) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x58) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x50) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x68) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x60) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x38) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x30) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x48) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x40) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x18) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x10) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x28) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 0x20) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12 + 8) = 0;
    *(undefined8 *)((long)auStack_b7e8 + lVar12) = 0;
    *(undefined8 *)((long)auStack_b8a0 + lVar12 + 0x18) = 0;
    *(undefined8 *)((long)auStack_b8a0 + lVar12 + 0x10) = 0;
    *(undefined8 *)((long)auStack_b8a0 + lVar12 + 8) = 0;
    *(undefined8 *)((long)auStack_b8a0 + lVar12) = 0;
    lVar12 = lVar12 + 0x288;
  } while (lVar12 != 0);
  lVar12 = 0x19c8;
  _bzero(auStack_b8a0,0x19c8);
  puVar16 = auStack_b8a0;
  do {
    *(undefined8 *)((long)puVar16 + 0xfc) = 0;
    *(undefined8 *)((long)puVar16 + 0xf4) = 0;
    *(undefined8 *)((long)puVar16 + 0xec) = 0;
    *(undefined8 *)((long)puVar16 + 0xe4) = 0;
    *(undefined8 *)((long)puVar16 + 0xdc) = 0;
    *(undefined8 *)((long)puVar16 + 0xd4) = 0;
    *(undefined8 *)((long)puVar16 + 0xcc) = 0;
    *(undefined8 *)((long)puVar16 + 0xc4) = 0;
    *(undefined8 *)((long)puVar16 + 0xbc) = 0;
    *(undefined8 *)((long)puVar16 + 0xb4) = 0;
    *(undefined8 *)((long)puVar16 + 0xac) = 0;
    *(undefined8 *)((long)puVar16 + 0xa4) = 0;
    *(undefined8 *)((long)puVar16 + 0x9c) = 0;
    *(undefined8 *)((long)puVar16 + 0x94) = 0;
    *(undefined8 *)((long)puVar16 + 0x8c) = 0;
    *(undefined8 *)((long)puVar16 + 0x84) = 0;
    *(undefined8 *)((long)puVar16 + 0x18c) = 0;
    *(undefined8 *)((long)puVar16 + 0x184) = 0;
    *(undefined8 *)((long)puVar16 + 0x19c) = 0;
    *(undefined8 *)((long)puVar16 + 0x194) = 0;
    *(undefined8 *)((long)puVar16 + 0x16c) = 0;
    *(undefined8 *)((long)puVar16 + 0x164) = 0;
    *(undefined8 *)((long)puVar16 + 0x17c) = 0;
    *(undefined8 *)((long)puVar16 + 0x174) = 0;
    *(undefined8 *)((long)puVar16 + 0x14c) = 0;
    *(undefined8 *)((long)puVar16 + 0x144) = 0;
    *(undefined8 *)((long)puVar16 + 0x15c) = 0;
    *(undefined8 *)((long)puVar16 + 0x154) = 0;
    *(undefined8 *)((long)puVar16 + 300) = 0;
    *(undefined8 *)((long)puVar16 + 0x124) = 0;
    *(undefined8 *)((long)puVar16 + 0x13c) = 0;
    *(undefined8 *)((long)puVar16 + 0x134) = 0;
    puVar16[1] = 0;
    *puVar16 = 0;
    puVar16[3] = 0;
    puVar16[2] = 0;
    puVar24 = puVar16 + 0x37;
    *(undefined8 *)((long)puVar16 + 0x10c) = 0;
    *(undefined8 *)((long)puVar16 + 0x104) = 0;
    *(undefined8 *)((long)puVar16 + 0x11c) = 0;
    *(undefined8 *)((long)puVar16 + 0x114) = 0;
    lVar12 = lVar12 + -0x1b8;
    puVar16 = puVar24;
  } while (lVar12 != 0);
  _bzero(auStack_9ed8,0x32fc);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_6bd0,*param_1,param_1[1]);
  }
  else {
    piStack_6bc8 = (int *)param_1[1];
    uStack_6bd0 = (int *)*param_1;
    piStack_6bc0 = (int *)param_1[2];
  }
  uStack_6bb8 = CONCAT71(uStack_d70f,cStack_d710);
  uStack_6bb0 = plStack_d708;
  if (plStack_d708 != (long *)0x0) {
    plVar36 = plStack_d708 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar5) {
        *plVar36 = *plVar36 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  _memcpy(auStack_6ba8,auStack_d700,0x6b24);
  func_0x000107c2b05c(0x1137ea608,&uStack_6bd0);
  puVar16 = puRam00000001137ea610;
  if (puRam00000001137ea610 != (undefined8 *)0x0) {
    uVar30 = (long)puRam00000001137ea610 - 1;
    if (((ulong)puRam00000001137ea610 & uVar30) == 0) {
      puVar24 = (undefined8 *)(uVar30 & (ulong)puVar13);
    }
    else {
      puVar24 = puVar13;
      if (puRam00000001137ea610 <= puVar13) {
        uVar14 = 0;
        if (puRam00000001137ea610 != (undefined8 *)0x0) {
          uVar14 = (ulong)puVar13 / (ulong)puRam00000001137ea610;
        }
        puVar24 = (undefined8 *)((long)puVar13 - uVar14 * (long)puRam00000001137ea610);
      }
    }
    puVar33 = *(undefined8 **)(lRam00000001137ea608 + (long)puVar24 * 8);
    if ((puVar33 != (undefined8 *)0x0) && (plVar36 = (long *)*puVar33, plVar36 != (long *)0x0)) {
      do {
        puVar33 = (undefined8 *)plVar36[1];
        if (puVar33 == puVar13) {
          uVar14 = 0;
          func_0x000107c2b068(0x1137ea608,plVar36 + 2,&uStack_6bd0);
          if ((uVar14 & 1) != 0) goto LAB_10a14907c;
        }
        else {
          if (((ulong)puVar16 & uVar30) == 0) {
            puVar33 = (undefined8 *)((ulong)puVar33 & uVar30);
          }
          else if (puVar16 <= puVar33) {
            uVar14 = 0;
            if (puVar16 != (undefined8 *)0x0) {
              uVar14 = (ulong)puVar33 / (ulong)puVar16;
            }
            puVar33 = (undefined8 *)((long)puVar33 - uVar14 * (long)puVar16);
          }
          if (puVar33 != puVar24) break;
        }
        plVar36 = (long *)*plVar36;
      } while (plVar36 != (long *)0x0);
    }
  }
  plVar36 = (long *)0x6b60;
  __Znwm();
  uStack_d750 = 0x1137ea608;
  uStack_d748 = 0;
  *plVar36 = 0;
  plVar36[1] = (long)puVar13;
  plStack_d758 = plVar36;
  if ((long)piStack_6bc0 < 0) {
    func_0x000107c3192c(plVar36 + 2,uStack_6bd0,piStack_6bc8);
  }
  else {
    plVar36[3] = (long)piStack_6bc8;
    plVar36[2] = (long)uStack_6bd0;
    plVar36[4] = (long)piStack_6bc0;
  }
  plVar36[6] = (long)uStack_6bb0;
  plVar36[5] = uStack_6bb8;
  uStack_6bb8 = 0;
  uStack_6bb0 = (long *)0x0;
  _memcpy(plVar36 + 7,auStack_6ba8,0x6b24);
  uStack_d748 = CONCAT71(uStack_d748._1_7_,1);
  if ((puVar16 == (undefined8 *)0x0) ||
     (fRam00000001137ea628 * (float)puVar16 < (float)(uRam00000001137ea620 + 1))) {
    uVar30 = 1;
    if ((undefined8 *)0x2 < puVar16) {
      uVar30 = (ulong)(((ulong)puVar16 & (long)puVar16 - 1U) != 0);
    }
    puVar24 = (undefined8 *)(uVar30 | (long)puVar16 << 1);
    puVar16 = (undefined8 *)(long)((float)(uRam00000001137ea620 + 1) / fRam00000001137ea628);
    if (puVar24 <= puVar16) {
      puVar24 = puVar16;
    }
    if ((long)puVar24 - 1U == 0) {
      puVar24 = (undefined8 *)0x2;
    }
    else if (((ulong)puVar24 & (long)puVar24 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    puVar33 = puRam00000001137ea610;
    if (puRam00000001137ea610 < puVar24) {
LAB_10a148e7c:
      if ((ulong)puVar24 >> 0x3d != 0) {
        func_0x000109ffded8();
        goto LAB_10a14a298;
      }
      lVar12 = (long)puVar24 << 3;
      __Znwm();
      bVar5 = lRam00000001137ea608 != 0;
      lRam00000001137ea608 = lVar12;
      if (bVar5) {
        __ZdlPv();
      }
      puVar16 = (undefined8 *)0x0;
      puRam00000001137ea610 = puVar24;
      do {
        *(undefined8 *)(lRam00000001137ea608 + (long)puVar16 * 8) = 0;
        plVar17 = plRam00000001137ea618;
        puVar16 = (undefined8 *)((long)puVar16 + 1);
      } while (puVar24 != puVar16);
      puVar16 = puVar24;
      if (plRam00000001137ea618 != (long *)0x0) {
        puVar33 = (undefined8 *)plRam00000001137ea618[1];
        uVar30 = (long)puVar24 - 1;
        if (((ulong)puVar24 & uVar30) == 0) {
          puVar33 = (undefined8 *)((ulong)puVar33 & uVar30);
        }
        else if (puVar24 <= puVar33) {
          uVar14 = 0;
          if (puVar24 != (undefined8 *)0x0) {
            uVar14 = (ulong)puVar33 / (ulong)puVar24;
          }
          puVar33 = (undefined8 *)((long)puVar33 - uVar14 * (long)puVar24);
        }
        *(undefined8 *)(lRam00000001137ea608 + (long)puVar33 * 8) = 0x1137ea618;
        plVar21 = (long *)*plVar17;
        lVar12 = lRam00000001137ea608;
        while (lRam00000001137ea608 = lVar12, plVar21 != (long *)0x0) {
          puVar11 = (undefined8 *)plVar21[1];
          if (((ulong)puVar24 & uVar30) == 0) {
            puVar11 = (undefined8 *)((ulong)puVar11 & uVar30);
          }
          else if (puVar24 <= puVar11) {
            uVar14 = 0;
            if (puVar24 != (undefined8 *)0x0) {
              uVar14 = (ulong)puVar11 / (ulong)puVar24;
            }
            puVar11 = (undefined8 *)((long)puVar11 - uVar14 * (long)puVar24);
          }
          plVar22 = plVar21;
          if (puVar11 != puVar33) {
            if (*(long *)(lVar12 + (long)puVar11 * 8) == 0) {
              *(long **)(lVar12 + (long)puVar11 * 8) = plVar17;
              puVar33 = puVar11;
            }
            else {
              *plVar17 = *plVar21;
              *plVar21 = **(long **)(lVar12 + (long)puVar11 * 8);
              **(undefined8 **)(lVar12 + (long)puVar11 * 8) = plVar21;
              plVar22 = plVar17;
            }
          }
          lVar12 = lRam00000001137ea608;
          plVar17 = plVar22;
          plVar21 = (long *)*plVar22;
        }
      }
    }
    else {
      puVar16 = puRam00000001137ea610;
      if (puVar24 < puRam00000001137ea610) {
        puVar16 = (undefined8 *)(long)((float)uRam00000001137ea620 / fRam00000001137ea628);
        if ((puRam00000001137ea610 < (undefined8 *)0x3) ||
           (((ulong)puRam00000001137ea610 & (long)puRam00000001137ea610 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((undefined8 *)0x1 < puVar16) {
          puVar16 = (undefined8 *)(1L << (-LZCOUNT((long)puVar16 + -1) & 0x3fU));
        }
        lVar12 = lRam00000001137ea608;
        if (puVar24 <= puVar16) {
          puVar24 = puVar16;
        }
        puVar16 = puRam00000001137ea610;
        if (puVar24 < puVar33) {
          if (puVar24 != (undefined8 *)0x0) goto LAB_10a148e7c;
          lRam00000001137ea608 = 0;
          if (lVar12 != 0) {
            __ZdlPv();
          }
          puRam00000001137ea610 = (undefined8 *)0x0;
          puVar16 = (undefined8 *)0x0;
        }
      }
    }
    if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
      puVar24 = (undefined8 *)((long)puVar16 - 1U & (ulong)puVar13);
    }
    else {
      puVar24 = puVar13;
      if (puVar16 <= puVar13) {
        uVar30 = 0;
        if (puVar16 != (undefined8 *)0x0) {
          uVar30 = (ulong)puVar13 / (ulong)puVar16;
        }
        puVar24 = (undefined8 *)((long)puVar13 - uVar30 * (long)puVar16);
      }
    }
  }
  lVar12 = lRam00000001137ea608;
  plVar17 = *(long **)(lRam00000001137ea608 + (long)puVar24 * 8);
  if (plVar17 == (long *)0x0) {
    *plVar36 = (long)plRam00000001137ea618;
    plRam00000001137ea618 = plVar36;
    *(undefined8 *)(lVar12 + (long)puVar24 * 8) = 0x1137ea618;
    if (*plVar36 != 0) {
      puVar13 = *(undefined8 **)(*plVar36 + 8);
      if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
        puVar13 = (undefined8 *)((ulong)puVar13 & (long)puVar16 - 1U);
      }
      else if (puVar16 <= puVar13) {
        uVar30 = 0;
        if (puVar16 != (undefined8 *)0x0) {
          uVar30 = (ulong)puVar13 / (ulong)puVar16;
        }
        puVar13 = (undefined8 *)((long)puVar13 - uVar30 * (long)puVar16);
      }
      *(long **)(lRam00000001137ea608 + (long)puVar13 * 8) = plVar36;
    }
  }
  else {
    *plVar36 = *plVar17;
    *plVar17 = (long)plVar36;
  }
  uRam00000001137ea620 = uRam00000001137ea620 + 1;
LAB_10a14907c:
  plVar17 = uStack_6bb0;
  if (uStack_6bb0 != (long *)0x0) {
    plVar21 = uStack_6bb0 + 1;
    do {
      lVar12 = *plVar21;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*uStack_6bb0 + 0x10))(uStack_6bb0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  if ((long)piStack_6bc0 < 0) {
    __ZdlPv(uStack_6bd0);
  }
  if (plStack_d708 != (long *)0x0) {
    plVar17 = plStack_d708 + 1;
    do {
      lVar12 = *plVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_d708 + 0x10))(plStack_d708);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d708);
    }
  }
  lVar12 = lStack_d768;
  uStack_d720 = 0;
  uStack_d718 = 0;
  uStack_d730 = 0;
  uStack_d728 = 0;
  uStack_d738 = 0;
  puVar13 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar13 = param_1;
  }
  FUN_10a7d88b0(puVar13,1);
  if (puVar13 == (undefined8 *)0x0) {
    FUN_10a10a2f4(&DAT_10f63e632,param_1);
    goto LAB_10a14a298;
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    puVar16 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar16 = param_1;
    }
    func_0x00010ae06f08(1,4,&UNK_10f63e63a,&UNK_10f63e66a,0xd7,&UNK_10f63e6ad,in_x6,in_x7,puVar16);
  }
  FUN_10a14a75c(&cStack_d710,puVar13);
  _sscanf(&cStack_d710,&UNK_10f63e6d7);
  uVar30 = *(ulong *)(lVar12 + 0x40);
  if (0x73 < uVar30) {
    FUN_10a00946c(&UNK_10f63e6db);
    goto LAB_10a14a298;
  }
  puVar16 = (undefined8 *)(lVar12 + 0x118c);
  *(undefined8 *)(lVar12 + 0x1194) = 0xce6e6b28ce6e6b28;
  *puVar16 = 0x4e6e6b284e6e6b28;
  *(long *)(lVar12 + 0x80) = (long)plVar36 + 0x3a2c;
  *(ulong *)(lVar12 + 0x88) = uVar30;
  uVar14 = 0;
  if (uVar30 != 0) {
    uVar30 = 0;
    do {
      uStack_6bd0 = (int *)0x0;
      piStack_6bc8 = (int *)((ulong)piStack_6bc8 & 0xffffffff00000000);
      _fscanf(puVar13,&UNK_10f63e709);
      if (uVar30 == 0x73) goto LAB_10a14a298;
      puVar24 = (undefined8 *)(lVar12 + 0xf0 + uVar30 * 0xc);
      *(undefined4 *)(puVar24 + 1) = piStack_6bc8._0_4_;
      *puVar24 = uStack_6bd0;
      if (*(ulong *)(lVar12 + 0x88) <= uVar30) goto LAB_10a14a298;
      bVar10 = false;
      puVar24 = (undefined8 *)(*(long *)(lVar12 + 0x80) + uVar30 * 0xc);
      *(undefined4 *)(puVar24 + 1) = piStack_6bc8._0_4_;
      *puVar24 = uStack_6bd0;
      puVar24 = (undefined8 *)(lVar12 + 0x654 + uVar30 * 0xc);
      *(undefined4 *)(puVar24 + 1) = piStack_6bc8._0_4_;
      *puVar24 = uStack_6bd0;
      puVar24 = (undefined8 *)(lVar12 + 3000 + uVar30 * 0xc);
      *(undefined4 *)(puVar24 + 1) = piStack_6bc8._0_4_;
      *puVar24 = uStack_6bd0;
      bVar5 = true;
      do {
        bVar15 = bVar5;
        lVar25 = 4;
        if (!bVar10) {
          lVar25 = 0;
        }
        fVar39 = uStack_6bd0._4_4_;
        if (!bVar10) {
          fVar39 = (float)uStack_6bd0;
        }
        lVar37 = 0x1198;
        if (!bVar10) {
          lVar37 = 0x1194;
        }
        fVar38 = fVar39;
        if (*(float *)((long)puVar16 + lVar25) <= fVar39) {
          fVar38 = *(float *)((long)puVar16 + lVar25);
        }
        *(float *)((long)puVar16 + lVar25) = fVar38;
        if (fVar39 <= *(float *)(lVar12 + lVar37)) {
          fVar39 = *(float *)(lVar12 + lVar37);
        }
        *(float *)(lVar12 + lVar37) = fVar39;
        bVar10 = true;
        bVar5 = false;
      } while (bVar15);
      uVar30 = uVar30 + 1;
      uVar14 = *(ulong *)(lVar12 + 0x40);
    } while (uVar30 < uVar14);
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f63e63a,&UNK_10f63e66a,0xec,&UNK_10f63e712,in_x6,in_x7,uVar14);
  }
  FUN_10a14a75c(&cStack_d710,puVar13);
  _sscanf(&cStack_d710,&UNK_10f63e6d7);
  *(long *)(lVar12 + 0xb0) = (long)plVar36 + 0x435c;
  *(ulong *)(lVar12 + 0xb8) = uStack_d718;
  *(long *)(lVar12 + 0xc0) = (long)plVar36 + 0x4b5c;
  *(ulong *)(lVar12 + 200) = uStack_d718;
  *(long *)(lVar12 + 0xd0) = (long)plVar36 + 0x535c;
  *(ulong *)(lVar12 + 0xd8) = uStack_d718;
  if (uStack_d718 == 0) {
    uVar30 = 0;
  }
  else {
    uVar14 = 0;
    do {
      _fscanf(puVar13,&UNK_10f63e734);
      if (*(ulong *)(lVar12 + 0xb8) <= uVar14) goto LAB_10a14a298;
      *(float *)(*(long *)(lVar12 + 0xb0) + uVar14 * 4) = (float)uStack_6bd0;
      if (*(ulong *)(lVar12 + 200) <= uVar14) goto LAB_10a14a298;
      *(undefined4 *)(*(long *)(lVar12 + 0xc0) + uVar14 * 4) = plStack_d758._0_4_;
      if (*(ulong *)(lVar12 + 0xd8) <= uVar14) goto LAB_10a14a298;
      *(int *)(*(long *)(lVar12 + 0xd0) + uVar14 * 4) = iStack_d73c;
      uVar14 = uVar14 + 1;
      uVar30 = uStack_d718;
    } while (uVar14 < uStack_d718);
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f63e63a,&UNK_10f63e66a,0xfa,&UNK_10f63e73b,in_x6,in_x7,uVar30);
  }
  FUN_10a14a75c(&cStack_d710,puVar13);
  _sscanf(&cStack_d710,&UNK_10f63e6d7);
  *(long **)(lVar12 + 0x50) = plVar36 + 0x3d3;
  *(ulong *)(lVar12 + 0x58) = uStack_d720;
  if (uStack_d720 == 0) {
    uVar30 = 0;
  }
  else {
    uVar14 = 0;
    do {
      uStack_6a44 = 0;
      uStack_6a40 = 0;
      uStack_6a4c = 0;
      uStack_6a48 = 0;
      uStack_6a34 = 0;
      uStack_6a30 = 0;
      uStack_6a3c = 0;
      uStack_6a38 = 0;
      uStack_6a64 = 0;
      uStack_6a60 = 0;
      uStack_6a6c = 0;
      uStack_6a68 = 0;
      uStack_6a54 = 0;
      uStack_6a50 = 0;
      uStack_6a5c = 0;
      uStack_6a58 = 0;
      uStack_6a84 = 0;
      uStack_6a80 = 0;
      uStack_6a8c = 0;
      uStack_6a88 = 0;
      uStack_6a74 = 0;
      uStack_6a70 = 0;
      uStack_6a7c = 0;
      uStack_6a78 = 0;
      uStack_6aa4 = 0;
      uStack_6aa0 = 0;
      uStack_6aac = 0;
      uStack_6aa8 = 0;
      uStack_6a94 = 0;
      uStack_6a90 = 0;
      uStack_6a9c = 0;
      uStack_6a98 = 0;
      uStack_6ac4 = 0;
      uStack_6ac0 = 0;
      uStack_6acc = 0;
      uStack_6ac8 = 0;
      uStack_6ab4 = 0;
      uStack_6ab0 = 0;
      uStack_6abc = 0;
      uStack_6ab8 = 0;
      uStack_6ae4 = 0;
      uStack_6ae0 = 0;
      uStack_6aec = 0;
      uStack_6ae8 = 0;
      uStack_6ad4 = 0;
      uStack_6ad0 = 0;
      uStack_6adc = 0;
      uStack_6ad8 = 0;
      uStack_6b04 = 0;
      uStack_6b00 = 0;
      uStack_6b0c = 0;
      uStack_6b08 = 0;
      uStack_6af4 = 0;
      uStack_6af0 = 0;
      uStack_6afc = 0;
      uStack_6af8 = 0;
      uStack_6b24 = 0;
      uStack_6b2c = 0;
      uStack_6b14 = 0;
      uStack_6b10 = 0;
      uStack_6b1c = 0;
      uStack_6b18 = 0;
      uStack_6b44 = 0;
      uStack_6b4c = 0;
      uStack_6b34 = 0;
      uStack_6b3c = 0;
      piStack_6bc8 = (int *)0x0;
      uStack_6bd0 = (int *)0x0;
      uStack_6bb8 = 0;
      piStack_6bc0 = (int *)0x0;
      _fscanf(puVar13," ");
      _fscanf(puVar13,&UNK_10f63e75b);
      if (iStack_d73c < 1) {
        uStack_6bd0 = (int *)((ulong)uStack_6bd0 & 0xffffffffffffff00);
      }
      else {
        _fscanf(puVar13,&UNK_10f63e75f);
        _fgets(&cStack_d710,1000,puVar13);
      }
      _fscanf(puVar13,"%d");
      if (0 < (int)uStack_6bb0) {
        lVar25 = 0;
        puVar16 = &uStack_6b4c;
        do {
          plStack_d758 = (long *)0x0;
          uStack_d750 = uStack_d750 & 0xffffffff00000000;
          _fscanf(puVar13,&UNK_10f63e76d);
          if (lVar25 == 0x18) goto LAB_10a14a298;
          *(undefined4 *)(auStack_6ba8 + lVar25 * 4 + -4) = uStack_d740;
          *puVar16 = plStack_d758;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_d750;
          lVar25 = lVar25 + 1;
          puVar16 = (undefined8 *)((long)puVar16 + 0xc);
        } while (lVar25 < (int)uStack_6bb0);
      }
      _fscanf(puVar13,&UNK_10f63e776);
      if (*(ulong *)(lVar12 + 0x58) <= uVar14) goto LAB_10a14a298;
      _memcpy(*(long *)(lVar12 + 0x50) + uVar14 * 0x1b8,&uStack_6bd0,0x1b8);
      uVar14 = uVar14 + 1;
      uVar30 = uStack_d720;
    } while (uVar14 < uStack_d720);
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f63e63a,&UNK_10f63e66a,0x118,&UNK_10f63e77d,in_x6,in_x7,uVar30);
  }
  FUN_10a14a75c(&cStack_d710,puVar13);
  _sscanf(&cStack_d710,&UNK_10f63e6d7);
  *(long **)(lVar12 + 0x60) = plVar36 + 7;
  *(ulong *)(lVar12 + 0x68) = uStack_d728;
  if (uStack_d728 == 0) {
    uVar30 = 0;
  }
  else {
    uVar14 = 0;
    do {
      uStack_6980 = 0;
      uStack_6988 = 0;
      uStack_6970 = 0;
      uStack_6978 = 0;
      uStack_69a0 = 0;
      uStack_69a8 = 0;
      uStack_6990 = 0;
      uStack_6998 = 0;
      uStack_69c0 = 0;
      uStack_69c8 = 0;
      uStack_69b0 = 0;
      uStack_69b8 = 0;
      auStack_69e0 = (undefined1  [8])0x0;
      uStack_69e8 = 0;
      uStack_69d0 = 0;
      uStack_69d8 = 0;
      uStack_6a00 = 0;
      uStack_6a08 = 0;
      uStack_69f0 = 0;
      uStack_69f8 = 0;
      uStack_6a20 = 0;
      uStack_6a28 = 0;
      uStack_6a10 = 0;
      uStack_6a18 = 0;
      uStack_6a40 = 0;
      uStack_6a3c = 0;
      uStack_6a48 = 0;
      uStack_6a44 = 0;
      uStack_6a30 = 0;
      uStack_6a2c = 0;
      uStack_6a38 = 0;
      uStack_6a34 = 0;
      uStack_6a60 = 0;
      uStack_6a5c = 0;
      uStack_6a68 = 0;
      uStack_6a64 = 0;
      uStack_6a50 = 0;
      uStack_6a4c = 0;
      uStack_6a58 = 0;
      uStack_6a54 = 0;
      uStack_6a80 = 0;
      uStack_6a7c = 0;
      uStack_6a88 = 0;
      uStack_6a84 = 0;
      uStack_6a70 = 0;
      uStack_6a6c = 0;
      uStack_6a78 = 0;
      uStack_6a74 = 0;
      uStack_6aa0 = 0;
      uStack_6a9c = 0;
      uStack_6aa8 = 0;
      uStack_6aa4 = 0;
      uStack_6a90 = 0;
      uStack_6a8c = 0;
      uStack_6a98 = 0;
      uStack_6a94 = 0;
      uStack_6ac0 = 0;
      uStack_6abc = 0;
      uStack_6ac8 = 0;
      uStack_6ac4 = 0;
      uStack_6ab0 = 0;
      uStack_6aac = 0;
      uStack_6ab8 = 0;
      uStack_6ab4 = 0;
      uStack_6ae0 = 0;
      uStack_6adc = 0;
      uStack_6ae8 = 0;
      uStack_6ae4 = 0;
      uStack_6ad0 = 0;
      uStack_6acc = 0;
      uStack_6ad8 = 0;
      uStack_6ad4 = 0;
      uStack_6b00 = 0;
      uStack_6afc = 0;
      uStack_6b08 = 0;
      uStack_6b04 = 0;
      uStack_6af0 = 0;
      uStack_6aec = 0;
      uStack_6af8 = 0;
      uStack_6af4 = 0;
      uStack_6b10 = 0;
      uStack_6b0c = 0;
      uStack_6b18 = 0;
      uStack_6b14 = 0;
      uStack_6964 = 0;
      uStack_696c = 0;
      uStack_6968 = 0;
      piStack_6bc8 = (int *)0x0;
      uStack_6bd0 = (int *)0x0;
      uStack_6bb8 = 0;
      piStack_6bc0 = (int *)0x0;
      _fscanf(puVar13,&UNK_10f63e7a3);
      pcVar26 = &cStack_d710;
      _strchr(pcVar26,0x23);
      if (pcVar26 == (char *)0x0) {
        _sscanf(&cStack_d710,"%d");
      }
      else {
        _fgets(&cStack_d710,1000,puVar13);
        _strncpy(&uStack_6bd0,&cStack_d710,0x20);
        uStack_6bb8 = uStack_6bb8 & 0xffffffffffffff;
        _fscanf(puVar13,"%d");
      }
      if (0 < (int)uStack_6bb0) {
        lVar25 = 0;
        puVar16 = (undefined8 *)&uStack_6b18;
        do {
          plStack_d758 = (long *)0x0;
          uStack_d750 = uStack_d750 & 0xffffffff00000000;
          _fscanf(puVar13,&UNK_10f63e76d);
          if (lVar25 == 0x25) goto LAB_10a14a298;
          *(int *)(auStack_6ba8 + lVar25 * 4 + -4) = iStack_d73c;
          *puVar16 = plStack_d758;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_d750;
          lVar25 = lVar25 + 1;
          puVar16 = (undefined8 *)((long)puVar16 + 0xc);
        } while (lVar25 < (int)uStack_6bb0);
      }
      if (*(ulong *)(lVar12 + 0x68) <= uVar14) goto LAB_10a14a298;
      _memcpy(*(long *)(lVar12 + 0x60) + uVar14 * 0x288,&uStack_6bd0,0x288);
      uVar14 = uVar14 + 1;
      uVar30 = uStack_d728;
    } while (uVar14 < uStack_d728);
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f63e63a,&UNK_10f63e66a,0x130,&UNK_10f63e7a9,in_x6,in_x7,uVar30);
  }
  FUN_10a14a75c(&cStack_d710,puVar13);
  _sscanf(&cStack_d710,&UNK_10f63e6d7);
  puVar6 = PTR___DefaultRuneLocale_11034bcf8;
  uVar30 = 0;
  if (*(long *)(lVar12 + 0x48) != 0) {
    uVar14 = 0;
    do {
      _bzero(auStack_69e0 + 4,0x570);
      piStack_6bc8 = (int *)0x0;
      uStack_6bd0 = (int *)0x0;
      uStack_6bb8 = 0;
      piStack_6bc0 = (int *)0x0;
      _fscanf(puVar13,&UNK_10f63e7a3);
      pcVar26 = &cStack_d710;
      _strchr(pcVar26,0x23);
      if (pcVar26 == (char *)0x0) {
        _sscanf(&cStack_d710,"%d");
      }
      else {
        _fgets(&cStack_d710,1000,puVar13);
        pcVar34 = &cStack_d710;
        _strlen();
        uVar31 = (uint)pcVar34;
        pcVar26 = (char *)((long)&uStack_d718 + ((ulong)pcVar34 & 0xffffffff) + 7);
        do {
          uVar32 = (uint)pcVar34;
          pcVar34 = (char *)(ulong)(uVar32 - 1);
          uVar23 = uVar31 & (int)uVar31 >> 0x1f;
          if ((int)uVar32 < 1) break;
          cVar4 = *pcVar26;
          lVar25 = (long)cVar4;
          if (cVar4 < 0) {
            ___maskrune(lVar25,0x4000);
            uVar8 = (uint)lVar25;
          }
          else {
            uVar8 = *(uint *)(puVar6 + (ulong)(uint)(int)cVar4 * 4 + 0x3c) & 0x4000;
          }
          pcVar26 = pcVar26 + -1;
          uVar23 = uVar32;
        } while (uVar8 != 0);
        pcVar26 = &cStack_d710;
        pcVar26[(int)uVar23] = '\0';
        while( true ) {
          cVar4 = *pcVar26;
          lVar25 = (long)cVar4;
          if (cVar4 < 0) {
            ___maskrune(lVar25,0x4000);
            uVar31 = (uint)lVar25;
          }
          else {
            uVar31 = *(uint *)(puVar6 + (ulong)(uint)(int)cVar4 * 4 + 0x3c) & 0x4000;
          }
          if (uVar31 == 0) break;
          pcVar26 = pcVar26 + 1;
        }
        _strncpy(&uStack_6bd0,pcVar26,0x20);
        uStack_6bb8 = uStack_6bb8 & 0xffffffffffffff;
        _fscanf(puVar13,"%d");
      }
      if (0 < (int)uStack_6bb0) {
        lVar25 = 0;
        puVar16 = (undefined8 *)(auStack_69e0 + 4);
        do {
          plStack_d758 = (long *)0x0;
          uStack_d750 = uStack_d750 & 0xffffffff00000000;
          _fscanf(puVar13,&UNK_10f63e76d);
          if (lVar25 == 0x74) goto LAB_10a14a298;
          *(int *)(auStack_6ba8 + lVar25 * 4 + -4) = iStack_d73c;
          *puVar16 = plStack_d758;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_d750;
          lVar25 = lVar25 + 1;
          puVar16 = (undefined8 *)((long)puVar16 + 0xc);
        } while (lVar25 < (int)uStack_6bb0);
      }
      uVar14 = uVar14 + 1;
      uVar30 = *(ulong *)(lVar12 + 0x48);
    } while (uVar14 < uVar30);
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f63e63a,&UNK_10f63e66a,0x151,&UNK_10f63e7ce,in_x6,in_x7,uVar30);
  }
  FUN_10a14a75c(&cStack_d710,puVar13);
  _sscanf(&cStack_d710,&UNK_10f63e6d7);
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f63e63a,&UNK_10f63e66a,0x154,&UNK_10f63e7f9,in_x6,in_x7,
                        uStack_d730);
  }
  *(long **)(lVar12 + 0x70) = plVar36 + 0x70c;
  *(ulong *)(lVar12 + 0x78) = uStack_d730;
  if (uStack_d730 == 0) {
    uVar14 = 0;
  }
  else {
    uVar30 = 0;
    do {
      if (*(ulong *)(lVar12 + 0x78) <= uVar30) goto LAB_10a14a298;
      _fscanf(puVar13,"%d");
      uVar30 = uVar30 + 1;
      uVar14 = uStack_d730;
    } while (uVar30 < uStack_d730);
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f63e63a,&UNK_10f63e66a,0x159,&UNK_10f63e80c,in_x6,in_x7,uVar14);
  }
  FUN_10a14a75c(&cStack_d710,puVar13);
  _sscanf(&cStack_d710,&UNK_10f63e6d7);
  *(long **)(lVar12 + 0x90) = plVar36 + 0x7f2;
  *(ulong *)(lVar12 + 0x98) = uStack_d718;
  *(long **)(lVar12 + 0xa0) = plVar36 + 0x832;
  *(undefined8 *)(lVar12 + 0xa8) = *(undefined8 *)(lVar12 + 0x40);
  _bzero();
  if (uStack_d738 != 0) {
    uVar30 = 0;
    do {
      if (((*(ulong *)(lVar12 + 0xa8) <= uVar30) ||
          (_fscanf(puVar13,"%d"), *(ulong *)(lVar12 + 0xa8) <= uVar30)) ||
         (uVar14 = (ulong)*(int *)(*(long *)(lVar12 + 0xa0) + uVar30 * 4),
         *(ulong *)(lVar12 + 0x98) <= uVar14)) goto LAB_10a14a298;
      *(undefined1 *)(*(long *)(lVar12 + 0x90) + uVar14) = 1;
      uVar30 = uVar30 + 1;
    } while (uVar30 < uStack_d738);
  }
  if (((bRam000000011330a9e8 >> 2 & 1) != 0) &&
     (uVar30 = uStack_d738,
     func_0x00010ae06f08(1,4,&UNK_10f63e63a,&UNK_10f63e66a,0x165,&UNK_10f63e83a,in_x6,in_x7,
                         uStack_d738), (bRam000000011330a9e8 >> 2 & 1) != 0)) {
    func_0x00010ae06f08(1,4,&UNK_10f63e63a,&UNK_10f63e66a,0x166,&UNK_10f63e867,in_x6,in_x7,uVar30);
  }
  piStack_6bc8 = (int *)0x0;
  uStack_6bd0 = (int *)0x0;
  piStack_6bc0 = (int *)0x0;
  if (uStack_d718 == 0) {
LAB_10a149f4c:
    lVar25 = 0;
    if (piStack_6bc8 != uStack_6bd0) {
      lVar25 = LZCOUNT((long)piStack_6bc8 - (long)uStack_6bd0 >> 3) * -2 + 0x7e;
    }
    func_0x0001096e90a4(uStack_6bd0,piStack_6bc8,&plStack_d758,lVar25,1);
    piVar27 = uStack_6bd0;
    if (uStack_6bd0 != piStack_6bc8) {
      piVar27 = uStack_6bd0 + -2;
      do {
        piVar28 = piVar27;
        piVar27 = piStack_6bc8;
        if (piVar28 + 4 == piStack_6bc8) goto LAB_10a149ff8;
        piVar27 = piVar28 + 2;
      } while (*piVar27 != piVar28[4] || piVar28[3] != piVar28[5]);
      iVar20 = *piVar27;
      for (piVar28 = piVar28 + 6; piVar28 != piStack_6bc8; piVar28 = piVar28 + 2) {
        iVar3 = *piVar28;
        piVar19 = piVar27;
        if (iVar20 != iVar3 || piVar27[1] != piVar28[1]) {
          piVar19 = piVar27 + 2;
          *piVar19 = iVar3;
          piVar27[3] = piVar28[1];
        }
        piVar27 = piVar19;
        iVar20 = iVar3;
      }
      piVar27 = piVar27 + 2;
    }
LAB_10a149ff8:
    func_0x000109c20508(&uStack_6bd0,(long)piVar27 - (long)uStack_6bd0 >> 3);
    puVar16 = (undefined8 *)((long)plVar36 + 0x5b5c);
    *(undefined8 **)(lVar12 + 0xe0) = puVar16;
    *(long *)(lVar12 + 0xe8) = (long)piStack_6bc8 - (long)uStack_6bd0 >> 3;
    piVar27 = uStack_6bd0;
    if ((long)piStack_6bc8 - (long)uStack_6bd0 != 0) {
      do {
        piVar28 = piVar27 + 2;
        *puVar16 = *(undefined8 *)piVar27;
        puVar16 = puVar16 + 1;
        piVar27 = piVar28;
      } while (piVar28 != piStack_6bc8);
    }
    if (uStack_6bd0 != (int *)0x0) {
      piStack_6bc8 = uStack_6bd0;
      __ZdlPv();
    }
    _fclose(puVar13);
    func_0x00010a14a314(plVar36 + 5,lStack_d768,plStack_d760);
    if (plStack_d760 != (long *)0x0) {
      plVar17 = plStack_d760 + 1;
      do {
        lVar12 = *plVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_d760 + 0x10))(plStack_d760);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d760);
      }
    }
LAB_10a14a098:
    func_0x00010a14a314(extraout_x8,plVar36[5],plVar36[6]);
    __ZNSt3__15mutex6unlockEv(0x1137ea658);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uVar30 = uStack_d718 * 3;
    if (uVar30 >> 0x3d == 0) {
      piVar27 = (int *)&uStack_6bd0;
      FUN_10a050dd4();
      piVar28 = (int *)((long)piVar27 - ((long)piStack_6bc8 - (long)uStack_6bd0));
      _memcpy(piVar28);
      bVar5 = uStack_6bd0 != (int *)0x0;
      uStack_6bd0 = piVar28;
      piStack_6bc8 = piVar27;
      piStack_6bc0 = piVar27 + uVar30 * 2;
      if (bVar5) {
        __ZdlPv();
      }
      if (uStack_d718 != 0) {
        uVar30 = 0;
        do {
          uVar14 = 0;
          lVar25 = 2;
          puStack_d778 = (ulong *)(lVar12 + 200);
          do {
            if (uVar14 < 2) {
              plVar17 = (long *)(lVar12 + 0xb0) + uVar14 * 2;
              puVar35 = puStack_d778;
              lVar37 = lVar25;
              do {
                if (((ulong)plVar17[1] <= uVar30) || (*puVar35 <= uVar30)) goto LAB_10a14a298;
                iVar20 = *(int *)(*plVar17 + uVar30 * 4);
                iVar3 = *(int *)(puVar35[-1] + uVar30 * 4);
                if (piStack_6bc8 < piStack_6bc0) {
                  iVar2 = iVar20;
                  if (iVar20 <= iVar3) {
                    iVar2 = iVar3;
                    iVar3 = iVar20;
                  }
                  *piStack_6bc8 = iVar3;
                  piStack_6bc8[1] = iVar2;
                  piVar19 = piStack_6bc8 + 2;
                }
                else {
                  lVar29 = (long)piStack_6bc8 - (long)uStack_6bd0;
                  uVar1 = (lVar29 >> 3) + 1;
                  if (uVar1 >> 0x3d != 0) {
                    FUN_10a050dc0();
                    goto LAB_10a14a298;
                  }
                  uVar18 = (long)piStack_6bc0 - (long)uStack_6bd0 >> 2;
                  if (uVar18 <= uVar1) {
                    uVar18 = uVar1;
                  }
                  if (0x7ffffffffffffff7 < (ulong)((long)piStack_6bc0 - (long)uStack_6bd0)) {
                    uVar18 = 0x1fffffffffffffff;
                  }
                  puVar16 = &uStack_6bd0;
                  FUN_10a050dd4();
                  piVar28 = uStack_6bd0;
                  lVar9 = (long)piStack_6bc8 - (long)uStack_6bd0;
                  piVar27 = (int *)((long)puVar16 + lVar29);
                  iVar2 = iVar20;
                  if (iVar20 <= iVar3) {
                    iVar2 = iVar3;
                    iVar3 = iVar20;
                  }
                  *piVar27 = iVar3;
                  piVar27[1] = iVar2;
                  piVar19 = piVar27 + 2;
                  piVar27 = (int *)((long)piVar27 - lVar9);
                  _memcpy(piVar27,piVar28);
                  bVar5 = uStack_6bd0 != (int *)0x0;
                  uStack_6bd0 = piVar27;
                  piStack_6bc0 = (int *)(puVar16 + uVar18);
                  if (bVar5) {
                    piStack_6bc8 = piVar19;
                    __ZdlPv();
                  }
                }
                puVar35 = puVar35 + 2;
                lVar37 = lVar37 + -1;
                piStack_6bc8 = piVar19;
              } while (lVar37 != 0);
            }
            uVar14 = uVar14 + 1;
            lVar25 = lVar25 + -1;
            puStack_d778 = puStack_d778 + 2;
          } while (uVar14 != 3);
          uVar30 = uVar30 + 1;
        } while (uVar30 < uStack_d718);
      }
      goto LAB_10a149f4c;
    }
  }
  FUN_10a050dc0();
LAB_10a14a298:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a14a29c);
  (*pcVar7)();
}



/* Entry: 10a14a2dc; end: 10a14a387;  */

undefined8 * FUN_10a14a2dc(undefined8 *param_1)

{
  func_0x00010a14e208(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a14a388; end: 10a14a3eb;  */

undefined8 FUN_10a14a388(void)

{
  int iVar1;
  
  if ((bRam0000000113834db0 & 1) == 0) {
    iVar1 = 0x13834db0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                    ,0x1132fffd8,0x100000000);
      ___cxa_guard_release(0x113834db0);
    }
  }
  return 0x1132fffd8;
}



/* Entry: 10a14a3ec; end: 10a14a503;  */

undefined8 FUN_10a14a3ec(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if ((bRam0000000113834dd0 & 1) == 0) {
    puVar3 = (undefined8 *)0x113834dd0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x00010ad03330();
      FUN_10a0ca0d8(auStack_38);
      FUN_10a14a388();
      uVar1 = uRam00000001132fffe0;
      puVar2 = (undefined8 *)*puVar3;
      if (-1 < (char)bRam00000001132fffef) {
        uVar1 = (ulong)bRam00000001132fffef;
        puVar2 = puVar3;
      }
      puVar3 = auStack_38;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar3,puVar2,uVar1);
      uRam0000000113834dc0 = puVar3[1];
      uRam0000000113834db8 = *puVar3;
      uRam0000000113834dc8 = puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      if (cStack_21 < '\0') {
        __ZdlPv(auStack_38[0]);
      }
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                    ,0x113834db8,0x100000000);
      ___cxa_guard_release(0x113834dd0);
    }
  }
  return 0x113834db8;
}



/* Entry: 10a14a504; end: 10a14a59b;  */

undefined8 * FUN_10a14a504(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110ba7b20;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x34) = 0x3f800000;
  puVar1 = param_1 + 8;
  _bzero(puVar1,0x10dc);
  *(undefined8 *)((long)param_1 + 0x119c) = 0;
  *(undefined8 *)((long)param_1 + 0x1194) = 0;
  *(undefined8 *)((long)param_1 + 0x118c) = 0;
  *(undefined1 *)(param_1 + 0x231) = 1;
  if (param_2 != 0) {
    FUN_10a14a3ec();
    FUN_10a14a59c(param_1,puVar1);
  }
  return param_1;
}



/* Entry: 10a14a59c; end: 10a14a60f;  */

void FUN_10a14a59c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_10a148a04(&uStack_30,param_2);
  FUN_10a14a610(param_1,uStack_30);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10a14a610; end: 10a14a757;  */

long FUN_10a14a610(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    lVar1 = *(long *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(undefined8 *)(param_1 + 0x118c) = *(undefined8 *)(param_2 + 0x118c);
    *(undefined8 *)(param_1 + 0x1194) = *(undefined8 *)(param_2 + 0x1194);
    *(undefined1 *)(param_1 + 0x1188) = *(undefined1 *)(param_2 + 0x1188);
    uVar3 = *(undefined8 *)(param_2 + 0x14);
    uVar2 = *(undefined8 *)(param_2 + 0xc);
    uVar5 = *(undefined8 *)(param_2 + 0x24);
    uVar4 = *(undefined8 *)(param_2 + 0x1c);
    uVar6 = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(param_1 + 0x2c) = uVar6;
    *(undefined8 *)(param_1 + 0x24) = uVar5;
    *(undefined8 *)(param_1 + 0x1c) = uVar4;
    *(undefined8 *)(param_1 + 0x14) = uVar3;
    *(undefined8 *)(param_1 + 0xc) = uVar2;
    *(undefined8 *)(param_1 + 0x119c) = *(undefined8 *)(param_2 + 0x119c);
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0x90) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xa0) = uVar2;
    uVar3 = *(undefined8 *)(param_2 + 0xb8);
    uVar2 = *(undefined8 *)(param_2 + 0xb0);
    uVar4 = *(undefined8 *)(param_2 + 0xc0);
    uVar6 = *(undefined8 *)(param_2 + 0xd8);
    uVar5 = *(undefined8 *)(param_2 + 0xd0);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_1 + 0xc0) = uVar4;
    *(undefined8 *)(param_1 + 0xd8) = uVar6;
    *(undefined8 *)(param_1 + 0xd0) = uVar5;
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
    *(undefined8 *)(param_1 + 0xb0) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0xe0);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 *)(param_1 + 0xe0) = uVar2;
    lVar1 = lVar1 * 0xc;
    _memcpy(param_1 + 0xf0,param_2 + 0xf0,lVar1);
    _memcpy(param_1 + 0x654,param_2 + 0x654,lVar1);
    _memcpy(param_1 + 3000,param_2 + 3000,lVar1);
    _memcpy(param_1 + 0x1158,param_2 + 0x1158,*(long *)(param_2 + 0x68) << 2);
    _memcpy(param_1 + 0x111c,param_2 + 0x111c,*(long *)(param_2 + 0x58) << 2);
  }
  return param_1;
}



/* Entry: 10a14a758; end: 10a14a75b;  */

void FUN_10a14a758(void)

{
  return;
}



/* Entry: 10a14a75c; end: 10a14a823;  */

void FUN_10a14a75c(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _fgets(param_1,1000,param_2);
  uVar5 = param_2;
  _feof();
  puVar3 = PTR___DefaultRuneLocale_11034bcf8;
  if ((int)uVar5 == 0) {
    lVar6 = 0;
    bVar2 = true;
LAB_10a14a7a0:
    do {
      cVar1 = *(char *)(param_1 + lVar6);
      if (cVar1 == '\0') {
LAB_10a14a7e8:
        if (!bVar2) {
          return;
        }
      }
      else if (cVar1 != '#') {
        uVar4 = (uint)cVar1;
        if ((int)uVar4 < 0) {
          ___maskrune(uVar4,0x4000);
        }
        else {
          uVar4 = *(uint *)(puVar3 + (ulong)uVar4 * 4 + 0x3c) & 0x4000;
        }
        bVar2 = (bool)(uVar4 != 0 & bVar2);
        lVar6 = lVar6 + 1;
        if (lVar6 == 1000) goto LAB_10a14a7e8;
        goto LAB_10a14a7a0;
      }
      _fgets(param_1,1000,param_2);
      uVar5 = param_2;
      _feof();
      lVar6 = 0;
      bVar2 = true;
    } while ((int)uVar5 == 0);
  }
  return;
}



/* Entry: 10a14a824; end: 10a14aae3;  */

void FUN_10a14a824(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  
  if (param_3 == 0) {
    _memcpy(param_1 + 0xf0,*(undefined8 *)(param_1 + 0x80),*(long *)(param_1 + 0x88) * 0xc);
  }
  else {
    lVar3 = 0;
    do {
      if (lVar3 == 0xc) goto LAB_10a14a968;
      *(undefined4 *)(param_1 + 0x1158 + lVar3 * 4) = *(undefined4 *)(param_2 + lVar3 * 4);
      lVar3 = lVar3 + 1;
    } while (param_3 != lVar3);
    _memcpy(param_1 + 0xf0,*(undefined8 *)(param_1 + 0x80),*(long *)(param_1 + 0x88) * 0xc);
    lVar3 = 0;
    lVar4 = *(long *)(param_1 + 0x68);
    lVar5 = 0x24;
    lVar6 = 0xc0;
    do {
      if (lVar3 == lVar4) {
LAB_10a14a968:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a14a96c);
        (*pcVar1)();
      }
      lVar10 = *(long *)(param_1 + 0x60);
      lVar7 = lVar10 + lVar3 * 0x288;
      if (0 < *(int *)(lVar7 + 0x20)) {
        lVar8 = 0;
        pfVar11 = (float *)(lVar10 + lVar6);
        puVar9 = (uint *)(lVar10 + lVar5);
        do {
          if (lVar8 == 0x25) goto LAB_10a14a968;
          if (0x72 < *puVar9) goto LAB_10a14a968;
          puVar2 = (undefined8 *)(param_1 + 0xf0 + (ulong)*puVar9 * 0xc);
          fVar12 = *(float *)(param_2 + lVar3 * 4);
          fVar13 = *pfVar11;
          *puVar2 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar11 + -2) >> 0x20) * fVar12 +
                             (float)((ulong)*puVar2 >> 0x20),
                             (float)*(undefined8 *)(pfVar11 + -2) * fVar12 + (float)*puVar2);
          *(float *)(puVar2 + 1) = fVar12 * fVar13 + *(float *)(puVar2 + 1);
          lVar8 = lVar8 + 1;
          pfVar11 = pfVar11 + 3;
          puVar9 = puVar9 + 1;
        } while (lVar8 < *(int *)(lVar7 + 0x20));
      }
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0x288;
      lVar6 = lVar6 + 0x288;
    } while (lVar3 != param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1 + 0x654,param_1 + 0xf0,0x564);
  return;
}



/* Entry: 10a14aae4; end: 10a14ab47;  */

void FUN_10a14aae4(long *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001096b5544(param_1,*(undefined8 *)(param_2 + 0x40));
  FUN_10a14ab48(param_2,*param_1,*param_1 + 4,2);
  return;
}



/* Entry: 10a14ab48; end: 10a14abdf;  */

void FUN_10a14ab48(undefined4 param_1,undefined4 param_2,long param_3,long param_4,long param_5,
                  ulong param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 3000;
  if (*(char *)(param_3 + 0x1188) == '\0') {
    lVar1 = 0x654;
  }
  if (*(long *)(param_3 + 0x40) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    lVar1 = param_3 + lVar1;
    do {
      func_0x000109699d9c(param_3 + 0xc,lVar1);
      *(undefined4 *)(param_4 + lVar2) = param_1;
      *(undefined4 *)(param_5 + lVar2) = param_2;
      uVar3 = uVar3 + 1;
      lVar1 = lVar1 + 0xc;
      lVar2 = lVar2 + (-(param_6 >> 0x1f & 1) & 0xfffffffc00000000 | (param_6 & 0xffffffff) << 2);
    } while (uVar3 < *(ulong *)(param_3 + 0x40));
  }
  return;
}



/* Entry: 10a14abe0; end: 10a14ac33;  */

undefined8
FUN_10a14abe0(undefined8 param_1,undefined4 param_2,undefined4 param_3,long param_4,long *param_5)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  code *pcVar5;
  undefined *puVar6;
  float *pfVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar15 = (undefined4)((ulong)param_1 >> 0x20);
  uVar14 = (undefined4)param_1;
  if ((-1 < (int)param_5) && (((ulong)param_5 & 0xffffffff) < *(ulong *)(param_4 + 0x40))) {
    lVar9 = 3000;
    if (*(char *)(param_4 + 0x1188) == '\0') {
      lVar9 = 0x654;
    }
    pfVar7 = (float *)(param_4 + lVar9 + ((ulong)param_5 & 0xffffffff) * 0xc);
    lVar9 = 0;
    lVar11 = param_4 + 0xc;
    do {
      lVar12 = 0;
      iVar8 = (int)lVar9;
      pfVar3 = (float *)&stack0xfffffffffffffffc;
      if (iVar8 == 1) {
        pfVar3 = (float *)&stack0xfffffffffffffff8;
      }
      pfVar2 = (float *)&stack0xfffffffffffffff4;
      if (iVar8 != 2) {
        pfVar2 = pfVar3;
      }
      *pfVar2 = *(float *)(param_4 + 0xc + lVar9 * 0x10 + 0xc);
      do {
        pfVar3 = pfVar7;
        if ((int)lVar12 == 1) {
          pfVar3 = pfVar7 + 1;
        }
        pfVar2 = pfVar7 + 2;
        if ((int)lVar12 != 2) {
          pfVar2 = pfVar3;
        }
        pfVar3 = (float *)&stack0xfffffffffffffffc;
        if (iVar8 == 1) {
          pfVar3 = (float *)&stack0xfffffffffffffff8;
        }
        pfVar4 = (float *)&stack0xfffffffffffffff4;
        if (iVar8 != 2) {
          pfVar4 = pfVar3;
        }
        *pfVar4 = *pfVar4 + *pfVar2 * *(float *)(lVar11 + lVar12 * 4);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
      lVar9 = lVar9 + 1;
      lVar11 = lVar11 + 0x10;
    } while (lVar9 != 3);
    return 0;
  }
  puVar6 = &UNK_10f63e6db;
  FUN_10a00946c();
  func_0x0001096b5198(param_5,*(undefined8 *)(puVar6 + 0x40));
  if (*(long *)(puVar6 + 0x40) != 0) {
    lVar9 = 0;
    uVar13 = 0;
    do {
      FUN_10a14abe0(puVar6,uVar13);
      uVar10 = (param_5[1] - *param_5 >> 2) * -0x5555555555555555;
      if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a14acd0);
        (*pcVar5)();
      }
      puVar1 = (undefined4 *)(*param_5 + lVar9);
      *puVar1 = uVar14;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      uVar13 = uVar13 + 1;
      lVar9 = lVar9 + 0xc;
    } while (uVar13 < *(ulong *)(puVar6 + 0x40));
  }
  return CONCAT44(uVar15,uVar14);
}



/* Entry: 10a14ac34; end: 10a14accf;  */

void FUN_10a14ac34(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  long *param_5)

{
  undefined4 *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  func_0x0001096b5198(param_5,*(undefined8 *)(param_4 + 0x40));
  if (*(long *)(param_4 + 0x40) != 0) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      FUN_10a14abe0(param_4,uVar4);
      uVar3 = (param_5[1] - *param_5 >> 2) * -0x5555555555555555;
      if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a14acd0);
        (*pcVar2)();
      }
      puVar1 = (undefined4 *)(*param_5 + lVar5);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0xc;
    } while (uVar4 < *(ulong *)(param_4 + 0x40));
  }
  return;
}



/* Entry: 10a14acd0; end: 10a14adcf;  */

void FUN_10a14acd0(undefined4 param_1,undefined4 param_2,long *param_3,long param_4,long *param_5)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar2 = 3000;
  if (*(char *)(param_4 + 0x1188) == '\0') {
    lVar2 = 0x654;
  }
  FUN_10a05077c(param_3,param_5[1] - *param_5 >> 2);
  lVar5 = *param_5;
  if (param_5[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      uVar3 = *(uint *)(lVar5 + uVar7 * 4);
      if (((int)uVar3 < 0) || (*(ulong *)(param_4 + 0x40) <= (ulong)uVar3)) {
        FUN_10a00946c(&UNK_10f63e6db);
LAB_10a14adac:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a14adb0);
        (*pcVar4)();
      }
      func_0x000109699d9c(param_4 + 0xc,param_4 + lVar2 + (ulong)uVar3 * 0xc);
      if ((ulong)(param_3[1] - *param_3 >> 3) <= uVar7) goto LAB_10a14adac;
      puVar1 = (undefined4 *)(*param_3 + lVar6);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      uVar7 = uVar7 + 1;
      lVar5 = *param_5;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(param_5[1] - lVar5 >> 2));
  }
  return;
}



/* Entry: 10a14add0; end: 10a14aefb;  */

void FUN_10a14add0(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  long lStack_50;
  long lStack_48;
  undefined4 *puStack_38;
  undefined4 *puStack_30;
  
  FUN_109ffe1f4(&puStack_38,param_2[1] - *param_2 >> 3);
  lVar4 = param_2[1] - *param_2;
  if (lVar4 != 0) {
    lVar4 = lVar4 >> 3;
    lVar6 = (long)puStack_30 - (long)puStack_38 >> 2;
    puVar2 = (undefined4 *)*param_2;
    puVar5 = puStack_38;
    do {
      if (lVar6 == 0) goto LAB_10a14aedc;
      *puVar5 = *puVar2;
      lVar6 = lVar6 + -1;
      lVar4 = lVar4 + -1;
      puVar2 = puVar2 + 2;
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0);
  }
  FUN_10a14acd0(&lStack_50,param_1,&puStack_38);
  if (param_2[1] - *param_2 == 0) {
    if (lStack_50 == 0) goto LAB_10a14aeb0;
  }
  else {
    uVar3 = param_2[1] - *param_2 >> 3;
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    if ((ulong)(lStack_48 - lStack_50 >> 3) <= uVar3 - 1) {
LAB_10a14aedc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a14aee0);
      (*pcVar1)();
    }
    do {
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  lStack_48 = lStack_50;
  __ZdlPv();
LAB_10a14aeb0:
  if (puStack_38 != (undefined4 *)0x0) {
    puStack_30 = puStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a14aefc; end: 10a14af2b;  */

long * FUN_10a14aefc(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a14af2c; end: 10a14af43;  */

undefined4 FUN_10a14af2c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x118c);
}



/* Entry: 10a14af44; end: 10a14b0f3;  */

undefined1  [16] FUN_10a14af44(long *param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  float fVar6;
  float fVar8;
  undefined8 uVar7;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001137ea5d8 & 1) == 0) {
    iVar3 = 0x137ea5d8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      uStack_50 = 0xa00000000;
      puStack_58 = (undefined8 *)0xe0000002f;
      puStack_60 = (undefined8 *)0x1d0000003e;
      uRam00000001137ea5f8 = 0;
      uRam00000001137ea600 = 0;
      uRam00000001137ea5f0 = 0;
      FUN_10a14d944(0x1137ea5f0,&puStack_60,&lStack_48,6);
      ___cxa_atexit(FUN_10a14aefc,0x1137ea5f0,0x100000000);
      ___cxa_guard_release(0x1137ea5d8);
    }
  }
  FUN_10a14acd0(&puStack_60,param_1,0x1137ea5f0);
  lVar1 = (long)puStack_58 - (long)puStack_60;
  if ((((lVar1 == 0) || (uVar5 = lVar1 >> 3, uVar5 < 2)) || (lVar1 == 0x10)) ||
     (((uVar5 < 4 || (lVar1 == 0x20)) || (uVar5 < 6)))) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a14b050);
    (*pcVar2)();
  }
  fVar6 = (float)*puStack_60 - (float)puStack_60[1];
  fVar8 = (float)((ulong)*puStack_60 >> 0x20) - (float)((ulong)puStack_60[1] >> 0x20);
  fVar9 = (float)puStack_60[2] - (float)puStack_60[3];
  fVar10 = (float)((ulong)puStack_60[2] >> 0x20) - (float)((ulong)puStack_60[3] >> 0x20);
  fVar8 = SQRT(fVar6 * fVar6 + fVar8 * fVar8);
  fVar6 = SQRT(fVar9 * fVar9 + fVar10 * fVar10);
  uVar7 = CONCAT44(fVar6,fVar8);
  uVar5 = (ulong)(uint)fVar6;
  if (fVar6 <= fVar8) {
    fVar6 = fVar8;
  }
  auVar13._4_4_ = 0;
  auVar13._0_4_ = fVar6;
  uVar11 = puStack_60[4];
  uVar12 = puStack_60[5];
  puStack_58 = puStack_60;
  puVar4 = puStack_60;
  __ZdlPv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    fVar6 = (float)uVar11 - (float)uVar12;
    fVar8 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar12 >> 0x20);
    auVar13._8_4_ = SQRT(fVar6 * fVar6 + fVar8 * fVar8);
    auVar13._12_4_ = 0;
    return auVar13;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1137ea5d8);
  __Unwind_Resume(puVar4);
  (**(code **)(*param_1 + 0x210))(param_1,&PTR_s_transform_110ba7b58);
  func_0x00010aac2ce4(param_1,(long)puVar4 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x00010a14b140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x220))(param_1);
  auVar14._8_8_ = uVar5;
  auVar14._0_8_ = uVar7;
  return auVar14;
}



/* Entry: 10a14b0f4; end: 10a14b193;  */

void FUN_10a14b0f4(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_transform_110ba7b58);
  func_0x00010aac2ce4(param_2,param_1 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x00010a14b140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x220))(param_2);
  return;
}



/* Entry: 10a14b194; end: 10a14b2db;  */

void FUN_10a14b194(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if ((bRam0000000113834df0 & 1) == 0) {
    iVar4 = 0x13834df0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      bRam0000000113834dd8 = 0;
      puRam0000000113834de0 = (undefined8 *)0x0;
      uRam0000000113834de8 = 0;
      ___cxa_guard_release(0x113834df0);
    }
  }
  do {
    puVar5 = puRam0000000113834de0;
    bVar3 = bRam0000000113834dd8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113834dd8,0x10);
    if (bVar2) {
      bRam0000000113834dd8 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while ((cVar1 != '\0') || ((bVar3 & 1) != 0));
  if (puRam0000000113834de0 == (undefined8 *)0x0) {
    bRam0000000113834dd8 = 0;
    puVar5 = (undefined8 *)0x11b0;
    __Znwm();
    FUN_10a14a504();
    *puVar5 = &PTR_FUN_110ba8308;
    puVar5[0x235] = 0;
  }
  else {
    puVar7 = (undefined8 *)puRam0000000113834de0[0x235];
    puVar6 = puRam0000000113834de0 + 0x235;
    puRam0000000113834de0 = puVar7;
    *puVar6 = 0;
    if (puVar7 == (undefined8 *)0x0) {
      uRam0000000113834de8 = 0;
    }
    bRam0000000113834dd8 = 0;
  }
  *param_1 = puVar5;
  puVar6 = (undefined8 *)0x28;
  __Znwm();
  *puVar6 = &PTR_DAT_110ba8368;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = puVar5;
  puVar6[4] = 0x113834dd8;
  param_1[1] = puVar6;
  return;
}



/* Entry: 10a14b2dc; end: 10a14b663;  */

void FUN_10a14b2dc(long param_1,long *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined **ppuStack_860;
  undefined8 uStack_858;
  undefined *puStack_850;
  undefined8 uStack_848;
  ulong uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  ulong uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7b0;
  undefined4 auStack_7a8 [5];
  undefined1 uStack_791;
  int iStack_790;
  undefined4 auStack_78c [116];
  undefined1 auStack_5bc [1412];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _bzero(auStack_5bc,0x570);
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  _strncpy(&uStack_7b0,plVar1,0x1f);
  uStack_791 = 0;
  puVar2 = (undefined4 *)param_2[4];
  puVar3 = (undefined4 *)param_2[5];
  if (puVar2 != puVar3) {
    lVar9 = 0x24;
    lVar10 = 500;
    puVar11 = puVar2;
    do {
      if (lVar9 == 500) goto LAB_10a14b3fc;
      *(undefined4 *)((long)&uStack_7b0 + lVar9) = *puVar11;
      uVar12 = *(undefined8 *)(puVar11 + 2);
      *(undefined4 *)((long)auStack_7a8 + lVar10) = puVar11[4];
      *(undefined8 *)((long)&uStack_7b0 + lVar10) = uVar12;
      puVar11 = puVar11 + 5;
      lVar9 = lVar9 + 4;
      lVar10 = lVar10 + 0xc;
    } while (puVar11 != puVar3);
  }
  iStack_790 = (int)((ulong)((long)puVar3 - (long)puVar2) >> 2) * -0x33333333;
  uVar13 = *(ulong *)(param_1 + 0x48);
  if (uVar13 < 0x80) {
    uVar7 = param_1 + uVar13 * 0x778 + 0x11a8;
    _memcpy(uVar7,&uStack_7b0,0x778);
    *(ulong *)(param_1 + 0x48) = uVar13 + 1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    *(undefined ***)(uVar7 + 0x1b0) = &PTR_DAT_110ba83b8;
    if (*(char *)(uVar7 + 0x1cf) < '\0') {
      *(undefined8 *)(uVar7 + 0x1c0) = 0xc;
      puVar8 = *(undefined8 **)(uVar7 + 0x1b8);
    }
    else {
      *(undefined1 *)(uVar7 + 0x1cf) = 0xc;
      puVar8 = (undefined8 *)(uVar7 + 0x1b8);
    }
    *(undefined4 *)(puVar8 + 1) = 0x746e696f;
    *puVar8 = 0x5068637465727453;
    *(undefined1 *)((long)puVar8 + 0xc) = 0;
    uStack_848 = 0;
    uStack_840 = 0;
    puStack_850 = &UNK_10f63e939;
    uStack_830 = 0xffffffffffffffff;
    uStack_838 = 0x100000064;
    uStack_820 = 0;
    uStack_828 = 0;
    uStack_810 = 0;
    uStack_818 = 0;
    uStack_808 = 0xc1;
    uStack_800 = CONCAT44(uStack_800._4_4_,0xffffffff);
    uStack_7f8 = 0;
    uStack_7f0 = 0;
    func_0x00010a052690(uVar7 + 0x168,&puStack_850);
    uVar13 = uVar7;
    FUN_10a0051e8(uVar7,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar13 & 1) == 0) {
      ppuStack_860 = &PTR_DAT_110ba83b8;
      uStack_858 = 0;
      puStack_850 = (undefined *)((ulong)puStack_850 & 0xffffffffffffff00);
      uStack_840 = uStack_840 & 0xffffffffffffff00;
      func_0x0001098949cc(uVar7,&UNK_10f63e939,&ppuStack_860,&puStack_850);
    }
    uVar13 = uVar7;
    FUN_10a0051e8(uVar7,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar13 & 1) == 0) {
      FUN_10a0605c4(uVar7,&DAT_10f2c4679,FUN_10a14e5b4,0);
    }
    uVar13 = uVar7;
    FUN_10a0051e8(uVar7,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar13 & 1) == 0) {
      FUN_10a052828(uVar7,&DAT_10f68f0d4,FUN_10a14e6e0,FUN_10a14e79c);
    }
    uVar13 = uVar7;
    FUN_10a0051e8(uVar7,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar13 & 1) == 0) {
      FUN_10a052828(uVar7,"delta",FUN_10a14e8d0,FUN_10a14e9a4);
    }
    *(undefined **)(uVar7 + 0x1b0) = PTR___ZTIDn_1103469e8;
    lVar9 = *(long *)(uVar7 + 0x170);
    if (*(long *)(uVar7 + 0x168) != lVar9) {
      uStack_848 = *(undefined8 *)(lVar9 + -0x60);
      puStack_850 = *(undefined **)(lVar9 + -0x68);
      uStack_828 = *(undefined8 *)(lVar9 + -0x40);
      uVar14 = *(ulong *)(lVar9 + -0x48);
      uVar15 = *(ulong *)(lVar9 + -0x50);
      uStack_840 = *(undefined8 *)(lVar9 + -0x58);
      uStack_818 = *(undefined8 *)(lVar9 + -0x30);
      uStack_820 = *(undefined8 *)(lVar9 + -0x38);
      uStack_808 = *(undefined8 *)(lVar9 + -0x20);
      uStack_810 = *(undefined8 *)(lVar9 + -0x28);
      uStack_7f0 = *(undefined8 *)(lVar9 + -8);
      uStack_7f8 = *(undefined8 *)(lVar9 + -0x10);
      uStack_800 = *(ulong *)(lVar9 + -0x18);
      *(long *)(uVar7 + 0x170) = lVar9 + -0x68;
      uStack_838._4_4_ = (undefined4)(uVar15 >> 0x20);
      uVar4 = uStack_838._4_4_;
      uStack_830._4_4_ = (undefined4)(uVar14 >> 0x20);
      uVar5 = uStack_830._4_4_;
      uVar13 = uVar7;
      uStack_838 = uVar15;
      uStack_830 = uVar14;
      FUN_10a0051e8(uVar7,uVar15 & 0xffffffff,uVar4,uStack_800 & 0xffffffff,uVar14 & 0xffffffff,
                    uVar5);
      if ((uVar13 & 1) == 0) {
        func_0x000109894f40(uVar7,0);
        FUN_10a054234(uVar7,&puStack_850,(undefined8 *)(uVar7 + 0x1b8),&UNK_10f63e939,0xc);
        FUN_10a05431c(uVar7);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a14b664);
    (*pcVar6)();
  }
LAB_10a14b3fc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a14b400);
  (*pcVar6)();
}



/* Entry: 10a14b664; end: 10a14b74f;  */

undefined1  [16] FUN_10a14b664(int param_1,ulong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  undefined1 auVar7 [16];
  int aiStack_60 [2];
  undefined1 uStack_58;
  undefined4 uStack_54;
  undefined1 **ppuStack_50;
  undefined1 *puStack_48;
  
  uVar4 = 0;
  if ((param_2 & 1) == 0) {
    piVar2 = (int *)&UNK_110ba8290;
    piVar3 = piVar2;
    while( true ) {
      for (; piVar5 = (int *)(&UNK_110ba80f8 + uVar4 * 0x18), *piVar5 < param_1;
          uVar4 = uVar4 * 2 + 2) {
        piVar5 = piVar3;
        if (7 < uVar4) goto LAB_10a14b720;
      }
      if (7 < uVar4) break;
      uVar4 = uVar4 << 1 | 1;
      piVar3 = piVar5;
    }
  }
  else {
    piVar2 = (int *)&UNK_110ba80f0;
    piVar3 = piVar2;
    while( true ) {
      for (; piVar5 = (int *)(&UNK_110ba7f58 + uVar4 * 0x18), *piVar5 < param_1;
          uVar4 = uVar4 * 2 + 2) {
        piVar5 = piVar3;
        if (7 < uVar4) goto LAB_10a14b720;
      }
      if (7 < uVar4) break;
      uVar4 = uVar4 << 1 | 1;
      piVar3 = piVar5;
    }
  }
LAB_10a14b720:
  if ((piVar5 != piVar2) && (*piVar5 <= param_1 && piVar5 != piVar2)) {
    return *(undefined1 (*) [16])(piVar5 + 2);
  }
  puVar1 = (undefined8 *)&UNK_10f63eb3f;
  func_0x0001093fd0ac();
  *(undefined1 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_FUN_110ba8440;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  if (lRam0000000113834df8 != -1) {
    ppuStack_50 = &puStack_48;
    puStack_48 = (undefined1 *)aiStack_60;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x113834df8,&ppuStack_50,FUN_10a14ea70);
  }
  iVar6 = 0;
  do {
    aiStack_60[1] = 1;
    uStack_58 = 0;
    uStack_54 = 0;
    piVar2 = aiStack_60;
    aiStack_60[0] = iVar6;
    FUN_10a14b838(puVar1 + 2,aiStack_60);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x11);
  auVar7._8_8_ = piVar2;
  auVar7._0_8_ = puVar1;
  return auVar7;
}



/* Entry: 10a14b750; end: 10a14b837;  */

undefined8 * FUN_10a14b750(undefined8 *param_1)

{
  int iVar1;
  int aiStack_50 [2];
  undefined1 uStack_48;
  undefined4 uStack_44;
  undefined1 **ppuStack_40;
  undefined1 *puStack_38;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110ba8440;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (lRam0000000113834df8 != -1) {
    ppuStack_40 = &puStack_38;
    puStack_38 = (undefined1 *)aiStack_50;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x113834df8,&ppuStack_40,FUN_10a14ea70);
  }
  iVar1 = 0;
  do {
    aiStack_50[1] = 1;
    uStack_48 = 0;
    uStack_44 = 0;
    aiStack_50[0] = iVar1;
    FUN_10a14b838(param_1 + 2,aiStack_50);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x11);
  return param_1;
}



/* Entry: 10a14b838; end: 10a14b997;  */

void FUN_10a14b838(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  
  plVar8 = (long *)param_1[1];
  if (plVar8 < (long *)param_1[2]) {
    lVar7 = *param_2;
    plVar8[1] = param_2[1];
    *plVar8 = lVar7;
    plVar8 = plVar8 + 2;
  }
  else {
    lVar7 = (long)plVar8 - *param_1;
    uVar1 = (lVar7 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a14d9b4();
      FUN_10a0ff254(param_2,&PTR_DAT_110ba7bc0,param_1 + 2,FUN_10a14eea8);
      (**(code **)(*param_2 + 0x60))(&lStack_80,param_2,&PTR_DAT_110ba7be0);
      func_0x000107c3193c(param_1 + 5);
      param_1[6] = lStack_78;
      param_1[5] = lStack_80;
      param_1[7] = lStack_70;
      lStack_78 = 0;
      lStack_70 = 0;
      lStack_80 = 0;
      puStack_68 = (undefined1 *)&lStack_80;
      FUN_10a0426d8(&puStack_68);
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    plVar3 = param_1;
    FUN_10a14d9c8();
    plVar2 = (long *)((long)plVar3 + lVar7);
    lVar7 = *param_2;
    plVar2[1] = param_2[1];
    *plVar2 = lVar7;
    plVar8 = plVar2 + 2;
    lVar6 = (long)plVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar7 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)plVar8;
    param_1[2] = (long)(plVar3 + uVar5 * 2);
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar8;
  return;
}



/* Entry: 10a14b998; end: 10a14b9ef;  */

void FUN_10a14b998(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110ba7bc0,*(long *)(param_1 + 0x10),
             *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010a14b9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))(param_2,&PTR_DAT_110ba7be0,param_1 + 0x28);
  return;
}



/* Entry: 10a14b9f0; end: 10a14be5f;  */

undefined8 * FUN_10a14b9f0(undefined8 *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  float *pfVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  float afStack_f0 [20];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long alStack_88 [5];
  
  alStack_88[3] = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110ba8488;
  plVar13 = param_1 + 2;
  *plVar13 = 0;
  puVar5 = param_1 + 6;
  *puVar5 = &PTR_SUB_110ba84d0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 100) = 0x3f800000;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = &PTR_SUB_110ba84d0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x3f800000;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x3f800000;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  puVar4 = param_1 + 0x28;
  FUN_10a14b750();
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  if (param_2[1] != *param_2) {
    param_1[0x30] = *param_4;
    func_0x0001096b5544(plVar13,(ulong)(param_2[1] - *param_2 >> 2) >> 1);
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_3 + 8);
    uVar26 = *(undefined8 *)(param_3 + 0x14);
    uVar25 = *(undefined8 *)(param_3 + 0xc);
    uVar17 = *(undefined8 *)(param_3 + 0x1c);
    uVar19 = *(undefined8 *)(param_3 + 0x34);
    uVar18 = *(undefined8 *)(param_3 + 0x2c);
    *(undefined8 *)((long)param_1 + 0xc4) = *(undefined8 *)(param_3 + 0x24);
    *(undefined8 *)((long)param_1 + 0xbc) = uVar17;
    *(undefined8 *)((long)param_1 + 0xd4) = uVar19;
    *(undefined8 *)((long)param_1 + 0xcc) = uVar18;
    *(undefined8 *)((long)param_1 + 0xb4) = uVar26;
    *(undefined8 *)((long)param_1 + 0xac) = uVar25;
    func_0x0001074714f0(param_1 + 0x1c,param_3 + 0x40);
    func_0x0001074714f0(param_1 + 0x1f,param_3 + 0x58);
    lVar6 = param_1[2];
    if (param_1[3] != lVar6) {
      uVar10 = 0;
      uVar8 = 0xffffffffffffffff;
      do {
        uVar12 = param_2[1] - *param_2 >> 2;
        if ((uVar12 <= uVar8 + 1) || (uVar8 = uVar8 + 2, uVar12 <= uVar8)) goto LAB_10a14bdd8;
        *(undefined8 *)(lVar6 + uVar10 * 8) = *(undefined8 *)(*param_2 + uVar10 * 8);
        uVar10 = uVar10 + 1;
        lVar6 = param_1[2];
      } while (uVar10 < (ulong)(param_1[3] - lVar6 >> 3));
    }
    FUN_10a14be60(param_1);
    alStack_88[0] = 0;
    uStack_90 = 0;
    alStack_88[2] = 0;
    alStack_88[1] = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    lVar6 = param_1[2];
    if (0x220 < (ulong)(param_1[3] - lVar6)) {
      uStack_100 = 0;
      uStack_f8 = 0;
      afStack_f0[0] = 0.0;
      afStack_f0[1] = 0.0;
      FUN_10a14d9fc(&uStack_100,lVar6 + 0x220,lVar6 + 0x268);
      uStack_98 = uStack_f8;
      uStack_a0 = uStack_100;
      uStack_100 = 0;
      uStack_f8 = 0;
      afStack_f0[0] = 0.0;
      afStack_f0[1] = 0.0;
      FUN_10a14d9fc(&uStack_100,*plVar13 + 0x268,*plVar13 + 0x2b0);
      alStack_88[1] = uStack_f8;
      alStack_88[0] = uStack_100;
    }
    func_0x0001096b5544(plVar13,0x4b);
    lVar6 = 0;
    afStack_f0[0xe] = 0.0;
    afStack_f0[0xf] = 0.0;
    afStack_f0[0xc] = 0.0;
    afStack_f0[0xd] = 0.0;
    afStack_f0[0x12] = 0.0;
    afStack_f0[0x13] = 0.0;
    afStack_f0[0x10] = 0.0;
    afStack_f0[0x11] = 0.0;
    afStack_f0[6] = 0.0;
    afStack_f0[7] = 0.0;
    afStack_f0[4] = 0.0;
    afStack_f0[5] = 0.0;
    afStack_f0[10] = 0.0;
    afStack_f0[0xb] = 0.0;
    afStack_f0[8] = 0.0;
    afStack_f0[9] = 0.0;
    uStack_f8 = 0;
    uStack_100 = 0;
    afStack_f0[2] = 0.0;
    afStack_f0[3] = 0.0;
    afStack_f0[0] = 0.0;
    afStack_f0[1] = 0.0;
    lVar11 = param_1[2];
    lVar14 = param_1[3];
    do {
      if ((ulong)(lVar14 - lVar11 >> 3) <= (ulong)(long)*(int *)(&UNK_10e499028 + lVar6 * 4))
      goto LAB_10a14bdd8;
      (&uStack_100)[lVar6] =
           *(undefined8 *)(lVar11 + (long)*(int *)(&UNK_10e499028 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0xc);
    lVar6 = 0;
    puVar9 = &UNK_10e499058;
    do {
      lVar11 = 0;
      fVar15 = 0.0;
      fVar16 = 0.0;
      do {
        fVar21 = *(float *)((long)&uStack_100 + lVar11 + 4);
        fVar22 = *(float *)((long)&uStack_f8 + lVar11 + 4);
        fVar23 = *(float *)((long)afStack_f0 + lVar11 + 4);
        fVar20 = *(float *)((long)afStack_f0 + lVar11 + 8);
        fVar24 = *(float *)((long)afStack_f0 + lVar11 + 0xc);
        pfVar1 = (float *)(puVar9 + lVar11);
        fVar15 = fVar15 + *pfVar1 * fVar21 + pfVar1[1] * *(float *)((long)&uStack_100 + lVar11) +
                 pfVar1[2] * fVar22 + pfVar1[3] * *(float *)((long)&uStack_f8 + lVar11) +
                 pfVar1[4] * fVar23 + pfVar1[5] * *(float *)((long)afStack_f0 + lVar11) +
                 pfVar1[6] * fVar24 + pfVar1[7] * fVar20;
        fVar16 = fVar16 + pfVar1[1] * -fVar21 + *pfVar1 * *(float *)((long)&uStack_100 + lVar11) +
                 pfVar1[3] * -fVar22 + pfVar1[2] * *(float *)((long)&uStack_f8 + lVar11) +
                 pfVar1[5] * -fVar23 + pfVar1[4] * *(float *)((long)afStack_f0 + lVar11) +
                 pfVar1[7] * -fVar24 + pfVar1[6] * fVar20;
        lVar11 = lVar11 + 0x20;
      } while (lVar11 != 0x60);
      if ((ulong)((long)(param_1[3] - param_1[2]) >> 3) <= lVar6 + 0x44U) {
LAB_10a14bdd8:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a14bddc);
        (*pcVar3)();
      }
      pfVar1 = (float *)(param_1[2] + (lVar6 + 0x44U) * 8);
      *pfVar1 = fVar16;
      pfVar1[1] = fVar15;
      lVar6 = lVar6 + 1;
      puVar9 = puVar9 + 0x60;
    } while (lVar6 != 7);
    lVar14 = 0;
    lVar6 = param_1[2];
    lVar11 = param_1[3];
    bVar2 = true;
    do {
      bVar7 = bVar2;
      *(int *)((long)param_1 + lVar14 * 4 + 0x188) = (int)((ulong)(lVar11 - lVar6) >> 3);
      FUN_10a14da7c(plVar13);
      lVar6 = param_1[2];
      lVar11 = param_1[3];
      *(int *)((long)param_1 + lVar14 * 4 + 400) = (int)((ulong)(lVar11 - lVar6) >> 3);
      lVar14 = 1;
      bVar2 = false;
    } while (bVar7);
    plVar13 = (long *)0x0;
    puVar5 = &uStack_a0;
    do {
      puVar4 = *(undefined8 **)((long)alStack_88 + (long)plVar13);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 **)((long)(alStack_88 + 1) + (long)plVar13) = puVar4;
        __ZdlPv();
      }
      plVar13 = plVar13 + -3;
    } while (plVar13 != (long *)0xffffffffffffffd0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_88[3]) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar6 = 0;
  do {
    if (*(long *)((long)alStack_88 + lVar6) != 0) {
      *(long *)((long)alStack_88 + lVar6 + 8) = *(long *)((long)alStack_88 + lVar6);
      __ZdlPv();
    }
    lVar6 = lVar6 + -0x18;
  } while (lVar6 != -0x30);
  func_0x00010a14e208(param_1 + 0x33);
  FUN_10a14c010(param_1 + 0x28);
  func_0x00010a14c064(param_1 + 0x14);
  func_0x00010a14c064(puVar5);
  if (*plVar13 != 0) {
    param_1[3] = *plVar13;
    __ZdlPv();
  }
  __Unwind_Resume();
  puVar5 = (undefined8 *)puVar4[2];
  if ((((puVar4[3] - (long)puVar5 != 0) && (uVar8 = puVar4[3] - (long)puVar5 >> 3, 0x10 < uVar8)) &&
      (0x27 < uVar8)) && ((0x2a < uVar8 && (0x2d < uVar8)))) {
    uVar25 = *puVar5;
    uVar26 = puVar5[0x10];
    fVar21 = (*(float *)(puVar5 + 0x27) + *(float *)(puVar5 + 0x24)) -
             (*(float *)(puVar5 + 0x2a) + *(float *)(puVar5 + 0x2d));
    fVar16 = (*(float *)((long)puVar5 + 0x13c) + *(float *)((long)puVar5 + 0x124)) -
             (*(float *)((long)puVar5 + 0x154) + *(float *)((long)puVar5 + 0x16c));
    fVar20 = fVar21 * 0.5;
    fVar15 = fVar16 * 0.5;
    func_0x0001096dc9c0((long)puVar4 + 0xac);
    _atan2f(fVar15,fVar20);
    fVar15 = 3.1415927 - fVar15;
    fVar21 = fVar21 * 0.5;
    fVar22 = (fVar16 / 1.1) * 0.5;
    fVar23 = fVar15 * 0.5;
    ___sincosf_stret();
    fVar20 = fVar15;
    ___sincosf_stret();
    fVar16 = fVar20;
    ___sincosf_stret();
    fStack_194 = fVar21 * fVar22 * fVar23 + fVar16 * fVar15 * fVar20;
    fStack_1a0 = -(fVar15 * fVar22 * fVar23) + fVar16 * fVar21 * fVar20;
    fStack_19c = fVar21 * fVar20 * fVar23 + fVar16 * fVar15 * fVar22;
    fStack_198 = -(fVar21 * fVar22 * fVar16) + fVar23 * fVar15 * fVar20;
    if (0xd8 < (ulong)(puVar4[3] - puVar4[2])) {
      fVar15 = (float)uVar25 - (float)uVar26;
      fVar16 = (float)((ulong)uVar25 >> 0x20) - (float)((ulong)uVar26 >> 0x20);
      uStack_1b0 = *(undefined8 *)(puVar4[2] + 0xd8);
      uStack_1a8 = 0;
      puVar5 = &uStack_190;
      func_0x0001096db124(SQRT(fVar15 * fVar15 + fVar16 * fVar16),puVar5,&fStack_1a0,&uStack_1b0);
      puVar4[0x23] = uStack_188;
      puVar4[0x22] = uStack_190;
      puVar4[0x25] = uStack_178;
      puVar4[0x24] = uStack_180;
      puVar4[0x27] = uStack_168;
      puVar4[0x26] = uStack_170;
      return puVar5;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a14c010);
  (*pcVar3)();
}



/* Entry: 10a14be60; end: 10a14c00f;  */

void FUN_10a14be60(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18) - (long)puVar1;
  if ((((lVar2 != 0) && (uVar4 = lVar2 >> 3, 0x10 < uVar4)) && (0x27 < uVar4)) &&
     ((0x2a < uVar4 && (0x2d < uVar4)))) {
    uVar11 = *puVar1;
    uVar12 = puVar1[0x10];
    fVar5 = (*(float *)(puVar1 + 0x27) + *(float *)(puVar1 + 0x24)) -
            (*(float *)(puVar1 + 0x2a) + *(float *)(puVar1 + 0x2d));
    fVar6 = (*(float *)((long)puVar1 + 0x13c) + *(float *)((long)puVar1 + 0x124)) -
            (*(float *)((long)puVar1 + 0x154) + *(float *)((long)puVar1 + 0x16c));
    fVar7 = fVar5 * 0.5;
    fVar9 = fVar6 * 0.5;
    func_0x0001096dc9c0(param_1 + 0xac);
    _atan2f(fVar9,fVar7);
    fVar9 = 3.1415927 - fVar9;
    fVar5 = fVar5 * 0.5;
    fVar8 = (fVar6 / 1.1) * 0.5;
    fVar10 = fVar9 * 0.5;
    ___sincosf_stret();
    fVar7 = fVar9;
    ___sincosf_stret();
    fVar6 = fVar7;
    ___sincosf_stret();
    fStack_94 = fVar5 * fVar8 * fVar10 + fVar6 * fVar9 * fVar7;
    fStack_a0 = -(fVar9 * fVar8 * fVar10) + fVar6 * fVar5 * fVar7;
    fStack_9c = fVar5 * fVar7 * fVar10 + fVar6 * fVar9 * fVar8;
    fStack_98 = -(fVar5 * fVar8 * fVar6) + fVar10 * fVar9 * fVar7;
    if (0xd8 < (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10))) {
      fVar9 = (float)uVar11 - (float)uVar12;
      fVar6 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar12 >> 0x20);
      uStack_b0 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xd8);
      uStack_a8 = 0;
      func_0x0001096db124(SQRT(fVar9 * fVar9 + fVar6 * fVar6),&uStack_90,&fStack_a0,&uStack_b0);
      *(undefined8 *)(param_1 + 0x118) = uStack_88;
      *(undefined8 *)(param_1 + 0x110) = uStack_90;
      *(undefined8 *)(param_1 + 0x128) = uStack_78;
      *(undefined8 *)(param_1 + 0x120) = uStack_80;
      *(undefined8 *)(param_1 + 0x138) = uStack_68;
      *(undefined8 *)(param_1 + 0x130) = uStack_70;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a14c010);
  (*pcVar3)();
}



/* Entry: 10a14c010; end: 10a14c0af;  */

undefined8 * FUN_10a14c010(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ba8440;
  puStack_28 = param_1 + 5;
  FUN_10a0426d8(&puStack_28);
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a14c0b0; end: 10a14c1db;  */

undefined8 * FUN_10a14c0b0(undefined8 *param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110ba8488;
  param_1[2] = 0;
  param_1[6] = &PTR_SUB_110ba84d0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 100) = 0x3f800000;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x14] = &PTR_SUB_110ba84d0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x3f800000;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  FUN_10a14b750(param_1 + 0x28);
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FUN_10a14c1dc(param_1,param_2);
  return param_1;
}



/* Entry: 10a14c1dc; end: 10a14c36f;  */

long FUN_10a14c1dc(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_1 != param_2) {
    FUN_10a14dca0(param_1 + 0x10,*(long *)(param_2 + 0x10),*(long *)(param_2 + 0x18),
                  *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3);
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
    *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
    uVar7 = *(undefined8 *)(param_2 + 0x44);
    uVar6 = *(undefined8 *)(param_2 + 0x3c);
    uVar9 = *(undefined8 *)(param_2 + 0x54);
    uVar8 = *(undefined8 *)(param_2 + 0x4c);
    uVar10 = *(undefined8 *)(param_2 + 0x5c);
    *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
    *(undefined8 *)(param_1 + 0x5c) = uVar10;
    *(undefined8 *)(param_1 + 0x54) = uVar9;
    *(undefined8 *)(param_1 + 0x4c) = uVar8;
    *(undefined8 *)(param_1 + 0x44) = uVar7;
    *(undefined8 *)(param_1 + 0x3c) = uVar6;
    func_0x00010a14ddc8(param_1 + 0x70,*(long *)(param_2 + 0x70),*(long *)(param_2 + 0x78),
                        *(long *)(param_2 + 0x78) - *(long *)(param_2 + 0x70) >> 2);
    func_0x00010a14ddc8(param_1 + 0x88,*(long *)(param_2 + 0x88),*(long *)(param_2 + 0x90),
                        *(long *)(param_2 + 0x90) - *(long *)(param_2 + 0x88) >> 2);
    *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
    uVar7 = *(undefined8 *)(param_2 + 0xb4);
    uVar6 = *(undefined8 *)(param_2 + 0xac);
    uVar9 = *(undefined8 *)(param_2 + 0xc4);
    uVar8 = *(undefined8 *)(param_2 + 0xbc);
    uVar10 = *(undefined8 *)(param_2 + 0xcc);
    *(undefined8 *)(param_1 + 0xd4) = *(undefined8 *)(param_2 + 0xd4);
    *(undefined8 *)(param_1 + 0xcc) = uVar10;
    *(undefined8 *)(param_1 + 0xc4) = uVar9;
    *(undefined8 *)(param_1 + 0xbc) = uVar8;
    *(undefined8 *)(param_1 + 0xb4) = uVar7;
    *(undefined8 *)(param_1 + 0xac) = uVar6;
    func_0x00010a14ddc8(param_1 + 0xe0,*(long *)(param_2 + 0xe0),*(long *)(param_2 + 0xe8),
                        *(long *)(param_2 + 0xe8) - *(long *)(param_2 + 0xe0) >> 2);
    func_0x00010a14ddc8(param_1 + 0xf8,*(long *)(param_2 + 0xf8),*(long *)(param_2 + 0x100),
                        *(long *)(param_2 + 0x100) - *(long *)(param_2 + 0xf8) >> 2);
    uVar7 = *(undefined8 *)(param_2 + 0x118);
    uVar6 = *(undefined8 *)(param_2 + 0x110);
    uVar8 = *(undefined8 *)(param_2 + 0x120);
    uVar10 = *(undefined8 *)(param_2 + 0x138);
    uVar9 = *(undefined8 *)(param_2 + 0x130);
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
    *(undefined8 *)(param_1 + 0x120) = uVar8;
    *(undefined8 *)(param_1 + 0x138) = uVar10;
    *(undefined8 *)(param_1 + 0x130) = uVar9;
    *(undefined8 *)(param_1 + 0x118) = uVar7;
    *(undefined8 *)(param_1 + 0x110) = uVar6;
    *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
    func_0x00010a14def0(param_1 + 0x150,*(long *)(param_2 + 0x150),*(long *)(param_2 + 0x158),
                        *(long *)(param_2 + 0x158) - *(long *)(param_2 + 0x150) >> 4);
    FUN_10a105cdc(param_1 + 0x168,*(long *)(param_2 + 0x168),*(long *)(param_2 + 0x170),
                  (*(long *)(param_2 + 0x170) - *(long *)(param_2 + 0x168) >> 3) *
                  -0x5555555555555555);
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
    plVar5 = *(long **)(param_1 + 0x1a0);
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
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
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
  }
  return param_1;
}



/* Entry: 10a14c370; end: 10a14c563;  */

float FUN_10a14c370(long param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  fVar5 = *(float *)(param_1 + 0x110) * *(float *)(param_1 + 0x110) +
          *(float *)(param_1 + 0x114) * *(float *)(param_1 + 0x114) +
          *(float *)(param_1 + 0x118) * *(float *)(param_1 + 0x118);
  fVar10 = SQRT(fVar5);
  iVar2 = (int)param_2;
  if (iVar2 < 6) {
    if (iVar2 < 4) {
      if (iVar2 != 0) {
        if (iVar2 != 1) {
LAB_10a14c560:
          FUN_10a14efe0();
          lVar4 = 0;
          uVar3 = param_2 - param_1 >> 3;
          fVar5 = 0.0;
          fVar10 = 0.0;
          do {
            if (uVar3 <= (ulong)(long)*(int *)(param_3 + lVar4)) goto LAB_10a14c5e0;
            uVar8 = *(undefined8 *)(param_1 + (long)*(int *)(param_3 + lVar4) * 8);
            fVar5 = fVar5 + (float)uVar8;
            fVar10 = fVar10 + (float)((ulong)uVar8 >> 0x20);
            lVar4 = lVar4 + 4;
          } while (lVar4 != 8);
          lVar4 = 0;
          fVar6 = 0.0;
          fVar9 = 0.0;
          while ((ulong)(long)*(int *)(param_4 + lVar4) < uVar3) {
            uVar8 = *(undefined8 *)(param_1 + (long)*(int *)(param_4 + lVar4) * 8);
            fVar6 = fVar6 + (float)uVar8;
            fVar9 = fVar9 + (float)((ulong)uVar8 >> 0x20);
            lVar4 = lVar4 + 4;
            if (lVar4 == 0xc) {
              uVar8 = NEON_fmov(0xc0400000,4);
              fVar5 = fVar5 * 0.5 + fVar6 / (float)uVar8;
              fVar10 = fVar10 * 0.5 + fVar9 / (float)((ulong)uVar8 >> 0x20);
              return SQRT(fVar5 * fVar5 + fVar10 * fVar10);
            }
          }
LAB_10a14c5e0:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a14c5e4);
          (*pcVar1)();
        }
        uStack_38 = 0x2f0000002e;
        uStack_40 = 0x2900000028;
        uVar8 = *(undefined8 *)(param_1 + 0x10);
        uVar7 = *(undefined8 *)(param_1 + 0x18);
        FUN_10a14c564(uVar8,uVar7,&uStack_38,&UNK_10e498fa8);
        fVar6 = fVar5;
        FUN_10a14c564(uVar8,uVar7,&uStack_40,&UNK_10e498fb4);
        if (fVar5 <= fVar6) {
          fVar6 = fVar5;
        }
        goto LAB_10a14c544;
      }
      lVar4 = *(long *)(param_1 + 0x10);
      uVar3 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
      if ((uVar3 < 0x3f) || (uVar3 < 0x43)) {
LAB_10a14c55c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a14c560);
        (*pcVar1)();
      }
      uVar8 = *(undefined8 *)(lVar4 + 0x1f0);
      uVar7 = *(undefined8 *)(lVar4 + 0x210);
    }
    else {
      if (iVar2 != 4) {
        if (iVar2 != 5) goto LAB_10a14c560;
        uStack_38 = 0x2600000025;
        uStack_40 = 0x2800000029;
        goto LAB_10a14c530;
      }
      lVar4 = *(long *)(param_1 + 0x10);
      uVar3 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
      if ((uVar3 < 0x34) || (uVar3 < 0x3a)) goto LAB_10a14c55c;
      uVar8 = *(undefined8 *)(lVar4 + 0x198);
      uVar7 = *(undefined8 *)(lVar4 + 0x1c8);
    }
  }
  else {
    if (1 < iVar2 - 8U) {
      if (iVar2 != 6) {
        if (iVar2 == 7) {
          FUN_10a14c370(param_1,5);
          fVar10 = fVar5;
          FUN_10a14c370(param_1,6);
          return (fVar5 + fVar10) * 0.5;
        }
        goto LAB_10a14c560;
      }
      uStack_38 = 0x2c0000002b;
      uStack_40 = 0x2f0000002e;
LAB_10a14c530:
      func_0x00010a14c5e4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),&uStack_38
                          ,&uStack_40);
      fVar6 = fVar5;
      goto LAB_10a14c544;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    uVar3 = *(long *)(param_1 + 0x18) - lVar4 >> 3;
    if ((uVar3 < 0x31) || (uVar3 < 0x37)) goto LAB_10a14c55c;
    uVar8 = *(undefined8 *)(lVar4 + 0x180);
    uVar7 = *(undefined8 *)(lVar4 + 0x1b0);
  }
  fVar5 = (float)uVar8 - (float)uVar7;
  fVar6 = (float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar7 >> 0x20);
  fVar6 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
LAB_10a14c544:
  return fVar6 / fVar10;
}



/* Entry: 10a14c564; end: 10a14c65f;  */

float FUN_10a14c564(long param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  lVar3 = 0;
  uVar2 = param_2 - param_1 >> 3;
  fVar4 = 0.0;
  fVar5 = 0.0;
  do {
    if (uVar2 <= (ulong)(long)*(int *)(param_3 + lVar3)) goto LAB_10a14c5e0;
    uVar7 = *(undefined8 *)(param_1 + (long)*(int *)(param_3 + lVar3) * 8);
    fVar4 = fVar4 + (float)uVar7;
    fVar5 = fVar5 + (float)((ulong)uVar7 >> 0x20);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 8);
  lVar3 = 0;
  fVar6 = 0.0;
  fVar8 = 0.0;
  while ((ulong)(long)*(int *)(param_4 + lVar3) < uVar2) {
    uVar7 = *(undefined8 *)(param_1 + (long)*(int *)(param_4 + lVar3) * 8);
    fVar6 = fVar6 + (float)uVar7;
    fVar8 = fVar8 + (float)((ulong)uVar7 >> 0x20);
    lVar3 = lVar3 + 4;
    if (lVar3 == 0xc) {
      uVar7 = NEON_fmov(0xc0400000,4);
      fVar4 = fVar4 * 0.5 + fVar6 / (float)uVar7;
      fVar5 = fVar5 * 0.5 + fVar8 / (float)((ulong)uVar7 >> 0x20);
      return SQRT(fVar4 * fVar4 + fVar5 * fVar5);
    }
  }
LAB_10a14c5e0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a14c5e4);
  (*pcVar1)();
}



/* Entry: 10a14c660; end: 10a14c74b;  */

float FUN_10a14c660(long param_1)

{
  float *pfVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pfVar1 = *(float **)(param_1 + 0x10);
  if (pfVar1 == *(float **)(param_1 + 0x18)) {
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f63e88f,&UNK_10f63e8bf,0xe3,&UNK_10f63e8eb);
    }
    fVar5 = 0.0;
  }
  else {
    uVar2 = (long)*(float **)(param_1 + 0x18) - (long)pfVar1 >> 3;
    pfVar4 = pfVar1 + 3;
    fVar5 = *pfVar1;
    fVar7 = pfVar1[1];
    if (1 < uVar2) {
      lVar3 = uVar2 - 1;
      fVar6 = fVar5;
      fVar8 = fVar7;
      fVar10 = fVar5;
      do {
        fVar11 = pfVar4[-1];
        fVar12 = *pfVar4;
        fVar5 = fVar11;
        if (fVar6 <= fVar11) {
          fVar5 = fVar6;
        }
        fVar9 = fVar12;
        if (fVar8 <= fVar12) {
          fVar9 = fVar8;
        }
        if (fVar11 <= fVar10) {
          fVar11 = fVar10;
        }
        fVar10 = fVar11;
        if (fVar12 <= fVar7) {
          fVar12 = fVar7;
        }
        fVar7 = fVar12;
        pfVar4 = pfVar4 + 2;
        lVar3 = lVar3 + -1;
        fVar6 = fVar5;
        fVar8 = fVar9;
      } while (lVar3 != 0);
    }
    fVar5 = fVar5 / (float)*(int *)(param_1 + 0x180);
  }
  return fVar5;
}



/* Entry: 10a14c74c; end: 10a14c7fb;  */

void FUN_10a14c74c(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  code *pcVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  
  func_0x00010742a308(param_4,param_2 << 1);
  if (param_2 != 0) {
    uVar2 = param_4[1] - *param_4 >> 2;
    uVar5 = 1;
    pfVar3 = (float *)(param_1 + 4);
    pfVar4 = (float *)(*param_4 + 4);
    do {
      if ((uVar2 <= uVar5 - 1) ||
         (pfVar4[-1] = (2.0 / (float)(int)param_3) * pfVar3[-1] + -1.0, uVar2 <= uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a14c7fc);
        (*pcVar1)();
      }
      *pfVar4 = (2.0 / (float)(int)((ulong)param_3 >> 0x20)) * *pfVar3 + -1.0;
      uVar5 = uVar5 + 2;
      param_2 = param_2 + -1;
      pfVar3 = pfVar3 + 2;
      pfVar4 = pfVar4 + 2;
    } while (param_2 != 0);
  }
  return;
}



/* Entry: 10a14c7fc; end: 10a14c933;  */

undefined8 FUN_10a14c7fc(void)

{
  int iVar1;
  undefined1 uStack_21;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  if ((bRam0000000113834e28 & 1) == 0) {
    iVar1 = 0x13834e28;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113834e10 = 0;
      uRam0000000113834e18 = 0;
      uRam0000000113834e20 = 0;
      ___cxa_guard_release(0x113834e28);
    }
  }
  if (lRam0000000113834e00 != -1) {
    puStack_18 = &uStack_21;
    ppuStack_20 = &puStack_18;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x113834e00,&ppuStack_20,FUN_10a14f13c);
  }
  return 0x113834e10;
}



/* Entry: 10a14c934; end: 10a14ca7f;  */

void FUN_10a14c934(float param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  code *pcVar2;
  undefined4 uStack_5c;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if (param_4 == *(long *)(param_2 + 0x68)) {
    lStack_58 = 0;
    lStack_50 = 0;
    uStack_48 = 0;
    FUN_10a14e050(&lStack_58,param_3,param_3 + param_4 * 4,param_4);
    if (lStack_58 == lStack_50) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a14ca80);
      (*pcVar2)();
    }
    *(float *)(lStack_50 + -4) =
         *(float *)(lStack_50 + -4) / (ABS((param_1 / 3.1415927) * 4.0) * 0.77 + 1.43);
  }
  else {
    uStack_5c = 0;
    FUN_10a14e0c0(&lStack_58,*(long *)(param_2 + 0x68),&uStack_5c);
  }
  FUN_10a14a824(param_2,lStack_58,lStack_50 - lStack_58 >> 2);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  if (param_6 == *(long *)(param_2 + 0x58)) {
    func_0x00010a14a96c(param_2,param_5,param_6);
  }
  else {
    uStack_5c = 0;
    FUN_10a14e0c0(&lStack_58,*(long *)(param_2 + 0x58),&uStack_5c);
    lVar1 = lStack_58;
    func_0x00010a14a96c(param_2,lStack_58,lStack_50 - lStack_58 >> 2);
    if (lVar1 != 0) {
      lStack_50 = lVar1;
      __ZdlPv(lVar1);
    }
  }
  return;
}


