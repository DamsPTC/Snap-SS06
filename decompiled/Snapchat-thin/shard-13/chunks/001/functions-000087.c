/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a0818d0; end: 10a081abb;  */

void FUN_10a0818d0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  FUN_10a081cb8(param_3,param_4,param_5);
  lStack_60 = *param_2;
  plStack_58 = (long *)param_2[1];
  lStack_70 = lStack_60;
  plStack_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plStack_58 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
  }
  FUN_10a081d18(auStack_50,param_3,&lStack_60);
  FUN_10a081b54(param_1,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  lVar5 = *param_2;
  if ((lVar5 != 0) && (lStack_80 = *param_1, lStack_80 != 0)) {
    plStack_78 = (long *)param_1[1];
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10aa88c30(lVar5,&lStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a081abc; end: 10a081b53;  */

void FUN_10a081abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a081f5c(auStack_38,&uStack_21,&uStack_39,param_2,param_3,param_4);
  FUN_10a081b54(param_1,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return;
}



/* Entry: 10a081b54; end: 10a081cb7;  */

void FUN_10a081b54(long *param_1,long *param_2)

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



/* Entry: 10a081cb8; end: 10a081d17;  */

undefined8 FUN_10a081cb8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x150;
  __Znwm(0x150);
  FUN_10a343ec8();
  return uVar1;
}



/* Entry: 10a081d18; end: 10a081db7;  */

long * FUN_10a081d18(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar2 = &PTR_DAT_110b9f218;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a081db8(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a081db8; end: 10a081edb;  */

void FUN_10a081db8(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a081edc; end: 10a081f1b;  */

void FUN_10a081edc(long param_1)

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



/* Entry: 10a081f1c; end: 10a081f57;  */

long FUN_10a081f1c(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110b9f258);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a081f58; end: 10a081f5b;  */

void FUN_10a081f58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a081f5c; end: 10a081fdb;  */

void FUN_10a081f5c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x168;
  __Znwm();
  FUN_10a081fdc();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x40) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x48), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
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
      lVar4 = *(long *)(lVar5 + 0x48);
    }
    *(long *)(lVar5 + 0x40) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x48) = plVar6;
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



/* Entry: 10a081fdc; end: 10a08202f;  */

undefined8 *
FUN_10a081fdc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b9f278;
  FUN_10a343ec8(param_1 + 3,0,param_4,*param_5);
  return param_1;
}



/* Entry: 10a082030; end: 10a08203f;  */

void FUN_10a082030(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f278;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a082040; end: 10a08205f;  */

void FUN_10a082040(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f278;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a082060; end: 10a08206f;  */

void FUN_10a082060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a082068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a082070; end: 10a08211f;  */

long FUN_10a082070(long param_1)

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



/* Entry: 10a082120; end: 10a08212f;  */

void FUN_10a082120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e950;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a082130; end: 10a08214f;  */

void FUN_10a082130(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9e950;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a082150; end: 10a08220b;  */

void FUN_10a082150(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  plVar1 = (long *)*(long *)(param_1 + 0x120);
  while (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    FUN_10a082290(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  (*(code *)**(undefined8 **)(param_1 + 0xd8))((undefined8 *)(param_1 + 0xd8));
  if (2 < (ulong)*(byte *)(param_1 + 200)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a08220c);
    (*pcVar2)();
  }
  (*(code *)(&PTR_DAT_110b9e7a8)[*(byte *)(param_1 + 200)])(param_1 + 0x88);
  __ZNSt3__15mutexD1Ev(param_1 + 0x40);
  FUN_10a07c02c(param_1 + 0x30);
  if (*(char *)(param_1 + 0x2f) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  return;
}



/* Entry: 10a08220c; end: 10a08220f;  */

void FUN_10a08220c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a082210; end: 10a08228f;  */

void FUN_10a082210(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  if ((param_3 & 0xff) == 1) {
    *param_1 = *param_2;
    (**(code **)(param_2[1] + 0x18))(param_1 + 1);
  }
  else if (param_3 == 0) {
    *param_1 = *param_2;
    (**(code **)(param_2[1] + 0x18))(param_1 + 1);
  }
  return;
}



/* Entry: 10a082290; end: 10a0822cb;  */

void FUN_10a082290(undefined8 *param_1)

{
  func_0x00010a07e3a4(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a0822cc; end: 10a0822db;  */

void FUN_10a0822cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f318;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0822dc; end: 10a0822fb;  */

void FUN_10a0822dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f318;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0822fc; end: 10a082323;  */

undefined1  [16] FUN_10a0822fc(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a082320);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a082324; end: 10a0826cb;  */

/* WARNING: Removing unreachable block (ram,0x00010a0825c4) */
/* WARNING: Removing unreachable block (ram,0x00010a08240c) */

void FUN_10a082324(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ***pppuStack_88;
  long *plStack_80;
  undefined8 ***pppuStack_78;
  long *plStack_70;
  char cStack_61;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  long lStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  plVar7 = *(long **)(param_2 + 0x10);
  plVar9 = (long *)param_1[1];
  lVar6 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  plVar5 = (long *)plVar7[1];
  if ((plVar5 != (long *)0x0) &&
     (plVar10 = plVar9, __ZNSt3__119__shared_weak_count4lockEv(), plStack_40 = plVar5,
     plVar5 != (long *)0x0)) {
    lVar8 = *plVar7;
    lStack_48 = lVar8;
    if (lVar8 != 0 && lVar6 != 0) {
      if (*(int *)(lVar6 + 0x28) == 1) {
        if (*(char *)(lVar6 + 0x6f) < '\0') {
          func_0x000107c3192c(&uStack_60,*(undefined8 *)(lVar6 + 0x58),*(undefined8 *)(lVar6 + 0x60)
                             );
        }
        else {
          uStack_58 = *(ulong *)(lVar6 + 0x60);
          uStack_60 = *(undefined8 *)(lVar6 + 0x58);
          uStack_50 = *(ulong *)(lVar6 + 0x68);
        }
        FUN_10a82c03c(&pppuStack_78,plVar7 + 4);
        lVar8 = lVar8 + 0x78;
        pppuStack_88 = &pppuStack_78;
        func_0x000104c5bc74(lVar8,&pppuStack_78,&UNK_10dd5b8f9,&pppuStack_88,&uStack_31);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lVar8 + 0x28,&uStack_60);
        if (cStack_61 < '\0') {
          __ZdlPv(pppuStack_78);
        }
        uVar1 = uStack_58;
        if (-1 < (long)uStack_50) {
          uVar1 = uStack_50 >> 0x38;
        }
        if (uVar1 == 0) {
          if ((bRam000000011330a9e8 & 1) != 0) {
            FUN_10a82c03c(&pppuStack_78,plVar7 + 4);
            ppppuVar2 = (undefined8 ****)pppuStack_78;
            if (-1 < cStack_61) {
              ppppuVar2 = &pppuStack_78;
            }
            func_0x00010ae06f08(0,1,&UNK_10f6332f0,&UNK_10f634c21,0x1ac,&UNK_10f634d36,in_x6,in_x7,
                                ppppuVar2);
            if (cStack_61 < '\0') {
              __ZdlPv(pppuStack_78);
            }
          }
          FUN_10a0826cc(plVar7[7]);
        }
        else {
          pppuStack_78 = (undefined8 ***)plVar7[2];
          plStack_70 = (long *)plVar7[3];
          if (plStack_70 != (long *)0x0) {
            plVar5 = plStack_70 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar4) {
                *plVar5 = *plVar5 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          pppuStack_88 = (undefined8 ***)plVar7[7];
          plVar5 = (long *)plVar7[8];
          if (plVar5 != (long *)0x0) {
            plVar10 = plVar5 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = *plVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plStack_80 = plVar5;
          FUN_10a082724(pppuStack_78,&uStack_60,plVar7 + 4);
          if (plVar5 != (long *)0x0) {
            plVar7 = plVar5 + 1;
            do {
              lVar6 = *plVar7;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *plVar7 = lVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar6 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
          plVar5 = plStack_70;
          if (plStack_70 != (long *)0x0) {
            plVar7 = plStack_70 + 1;
            do {
              lVar6 = *plVar7;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *plVar7 = lVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar6 == 0) {
              (**(code **)(*plStack_70 + 0x10))(plStack_70);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
        }
        plVar5 = plStack_40;
        if (plStack_40 == (long *)0x0) goto LAB_10a082604;
      }
      else {
        if ((bRam000000011330a9e8 & 1) != 0) {
          lVar8 = lVar6;
          FUN_10a82c03c(&uStack_60,plVar7 + 4);
          func_0x00010ae06f08(0,1,&UNK_10f6332f0,&UNK_10f634c21,0x1b5,&UNK_10f634d69,in_x6,in_x7,
                              &uStack_60,*(undefined4 *)(lVar6 + 0x28),lVar8,plVar10);
        }
        FUN_10a0826cc(plVar7[7]);
      }
    }
    plVar7 = plVar5 + 1;
    do {
      lVar6 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
LAB_10a082604:
  if (plVar9 != (long *)0x0) {
    plVar5 = plVar9 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return;
}



/* Entry: 10a0826cc; end: 10a082723;  */

void FUN_10a0826cc(long param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x68) = 1;
    (**(code **)(param_1 + 0xb8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10a082724; end: 10a083a73;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010a082b48 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10a082724(undefined8 param_1,double *******param_2,double ******param_3,undefined8 *param_4
                  ,undefined4 *param_5,undefined8 *param_6)

{
  int iVar1;
  undefined1 auVar2 [16];
  float fVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  double ******ppppppdVar7;
  undefined8 *puVar8;
  double ******ppppppdVar9;
  double ******ppppppdVar10;
  undefined8 **ppuVar11;
  long lVar12;
  double *****pppppdVar13;
  ulong uVar14;
  double *****pppppdVar15;
  double *******pppppppdVar16;
  double ******ppppppdVar17;
  double *******pppppppdVar18;
  double *******pppppppdVar19;
  long lVar20;
  double *******pppppppdVar21;
  double *******pppppppdVar22;
  double ******ppppppdVar23;
  double *******pppppppdVar24;
  double ******ppppppdVar25;
  double *******unaff_x23;
  long lVar26;
  ulong uVar27;
  double ******ppppppdVar28;
  double *****pppppdVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double *****pppppdStack_1a0;
  double *****pppppdStack_198;
  double *******pppppppdStack_190;
  double ******ppppppdStack_188;
  double ******ppppppdStack_180;
  double ******ppppppdStack_178;
  undefined8 **ppuStack_170;
  undefined8 *puStack_168;
  ulong uStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  double *******pppppppdStack_148;
  double ****ppppdStack_140;
  undefined7 uStack_138;
  char cStack_131;
  double *******pppppppdStack_130;
  double *******pppppppdStack_128;
  double *******pppppppdStack_120;
  undefined1 uStack_118;
  double *******pppppppdStack_110;
  double *******pppppppdStack_108;
  double *******pppppppdStack_100;
  double *******pppppppdStack_f8;
  double *******pppppppdStack_f0;
  double ******ppppppdStack_e8;
  double *******pppppppdStack_e0;
  undefined8 uStack_d0;
  double *******pppppppdStack_c8;
  double *******pppppppdStack_c0;
  byte bStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_150 = (long)*(char *)((long)param_6 + 0x17);
  puStack_158 = param_6;
  if (lStack_150 < 0) {
    lStack_150 = param_6[1];
    puStack_158 = (undefined8 *)*param_6;
  }
  uStack_160 = param_4[1];
  puStack_168 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uStack_160 = (ulong)*(byte *)((long)param_4 + 0x17);
    puStack_168 = param_4;
  }
  ppuVar11 = &puStack_168;
  ppppppdVar9 = param_3;
  (*(code *)**param_3)(param_3,ppuVar11,&puStack_158);
  ppppppdStack_178 = ppppppdVar9;
  ppuStack_170 = ppuVar11;
  if (ppppppdVar9 == (double ******)0x0) {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f6332f0,&UNK_10f634db2,0x104,&UNK_10f634e7a);
    }
    __ZNSt3__15mutex4lockEv(param_6 + 5);
    if ((*(byte *)(param_6 + 0xd) & 1) == 0) {
      *(int *)((long)param_6 + 0x6c) = *(int *)((long)param_6 + 0x6c) + -1;
    }
    __ZNSt3__15mutex6unlockEv(param_6 + 5);
    puVar8 = param_6;
    FUN_10a083a74();
    if ((int)puVar8 != 0) {
      FUN_10a083ac0(param_6);
    }
  }
  else {
    ppppppdVar9 = param_3;
    (*(code *)(*param_3)[1])(param_3,&ppppppdStack_178);
    if ((int)ppppppdVar9 == 0) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        FUN_10a82c03c(&pppppppdStack_100,param_5);
        func_0x00010ae06f08(0,1,&UNK_10f6332f0,&UNK_10f634db2,0x10f,&UNK_10f634ea1);
        if ((long)pppppppdStack_f0 < 0) {
          __ZdlPv(pppppppdStack_100);
        }
      }
      FUN_10a0826cc(param_6);
    }
    else {
      lVar12 = param_6[3];
      dVar43 = *(double *)(lVar12 + 0x28);
      pppppppdStack_f8 = *(double ********)(lVar12 + 0x28);
      pppppppdStack_100 = *(double ********)(lVar12 + 0x20);
      uVar30 = SUB81(pppppppdStack_100,0);
      uVar31 = (undefined1)((ulong)pppppppdStack_100 >> 8);
      uVar32 = (undefined1)((ulong)pppppppdStack_100 >> 0x10);
      uVar33 = (undefined1)((ulong)pppppppdStack_100 >> 0x18);
      uVar34 = (undefined1)((ulong)pppppppdStack_100 >> 0x20);
      uVar36 = (undefined1)((ulong)pppppppdStack_100 >> 0x28);
      uVar38 = (undefined1)((ulong)pppppppdStack_100 >> 0x30);
      uVar40 = (undefined1)((ulong)pppppppdStack_100 >> 0x38);
      FUN_10a833d04(&pppppppdStack_100,0x10,ppppppdVar9);
      fVar3 = (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
      pppppppdVar19 = param_2;
      FUN_10a833ea8(param_5);
      pppppppdStack_100 =
           (double *******)
           CONCAT17(uVar40,CONCAT16(uVar38,CONCAT15(uVar36,CONCAT14(uVar34,CONCAT13(uVar33,CONCAT12(
                                                  uVar32,CONCAT11(uVar31,uVar30)))))));
      pppppppdStack_f8 = pppppppdVar19;
      FUN_10a833d04(&pppppppdStack_100,0x10,ppppppdVar9);
      dVar43 = (dVar43 * 3.141592653589793) / 180.0;
      uVar34 = SUB81(dVar43,0);
      uVar36 = (undefined1)((ulong)dVar43 >> 8);
      uVar38 = (undefined1)((ulong)dVar43 >> 0x10);
      uVar40 = (undefined1)((ulong)dVar43 >> 0x18);
      uVar35 = (undefined1)((ulong)dVar43 >> 0x20);
      uVar37 = (undefined1)((ulong)dVar43 >> 0x28);
      uVar39 = (undefined1)((ulong)dVar43 >> 0x30);
      uVar41 = (undefined1)((ulong)dVar43 >> 0x38);
      _cos();
      dVar43 = (double)CONCAT17(uVar41,CONCAT16(uVar39,CONCAT15(uVar37,CONCAT14(uVar35,CONCAT13(
                                                  uVar40,CONCAT12(uVar38,CONCAT11(uVar36,uVar34)))))
                                               ));
      ppppppdVar10 = param_3;
      (*(code *)(*param_3)[2])(param_3,&ppppppdStack_178);
      pppppppdStack_190 = (double *******)0x0;
      ppppppdStack_188 = (double ******)0x0;
      ppppppdStack_180 = (double ******)0x0;
      if (ppppppdVar10 != (double ******)0x0) {
        ppppppdVar17 = (double ******)0x0;
        lVar12 = (long)(int)ppppppdVar9;
        dVar43 = ((dVar43 + dVar43) * 3.141592653589793 * 6378137.0) /
                 (double)(long)(-((ulong)ppppppdVar9 >> 0x1f & 1) & 0xffff000000000000 |
                               ((ulong)ppppppdVar9 & 0xffffffff) << 0x10);
        dVar44 = (double)(fVar3 - (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))));
        dVar45 = (double)(SUB84(param_2,0) - SUB84(pppppppdVar19,0));
        do {
          pppppppdVar19 = &ppppppdStack_178;
          ppppppdVar7 = param_3;
          (*(code *)(*param_3)[3])(param_3,pppppppdVar19,ppppppdVar17);
          if (ppppppdVar7 != (double ******)0x0) {
            dVar46 = *(double *)(param_6[3] + 0x30);
            iVar1 = *(int *)ppppppdVar7;
            if (iVar1 < 4) {
              if (iVar1 == 1) {
                pppppppdVar18 = (double *******)ppppppdVar7[2];
                dVar42 = (double)ppppppdVar7[1] - dVar44;
                pppppppdVar24 = (double *******)ppppppdVar7[1];
                if (dVar43 * (SQRT(((double)pppppppdVar18 - dVar45) *
                                   ((double)pppppppdVar18 - dVar45) + dVar42 * dVar42) + -0.5) <=
                    dVar46) {
LAB_10a082b98:
                  uStack_d0 = (double *******)0x0;
                  bStack_b8 = 0;
                  if (iVar1 < 4) {
                    if (iVar1 == 1) {
                      dVar46 = (double)pppppppdVar24 +
                               (double)(ulong)(*(long *)(param_5 + 2) * lVar12);
                      uVar34 = SUB81(dVar46,0);
                      uVar36 = (undefined1)((ulong)dVar46 >> 8);
                      uVar38 = (undefined1)((ulong)dVar46 >> 0x10);
                      uVar40 = (undefined1)((ulong)dVar46 >> 0x18);
                      uVar35 = (undefined1)((ulong)dVar46 >> 0x20);
                      uVar37 = (undefined1)((ulong)dVar46 >> 0x28);
                      uVar39 = (undefined1)((ulong)dVar46 >> 0x30);
                      uVar41 = (undefined1)((ulong)dVar46 >> 0x38);
                      dVar46 = (double)pppppppdVar18 +
                               (double)(ulong)(*(long *)(param_5 + 4) * lVar12);
                      FUN_10a833e04(*param_5,ppppppdVar9);
                      unaff_x23 = (double *******)0x0;
                      uStack_d0 = (double *******)
                                  CONCAT44((float)dVar46,
                                           (float)(double)CONCAT17(uVar41,CONCAT16(uVar39,CONCAT15(
                                                  uVar37,CONCAT14(uVar35,CONCAT13(uVar40,CONCAT12(
                                                  uVar38,CONCAT11(uVar36,uVar34))))))));
                    }
                    else if (iVar1 == 2) {
                      uStack_d0 = (double *******)0x0;
                      pppppppdStack_c8 = (double *******)0x0;
                      pppppppdStack_c0 = (double *******)0x0;
                      bStack_b8 = 1;
                      func_0x00010a050558(&uStack_d0,ppppppdVar7 + 1,param_5,ppppppdVar9);
                      unaff_x23 = (double *******)0x2;
                    }
                    else if (iVar1 == 3) {
                      pppppppdStack_c8 = (double *******)0x0;
                      pppppppdStack_c0 = (double *******)0x0;
                      uStack_d0 = (double *******)0x0;
                      pppppppdStack_f8 = (double *******)0x0;
                      pppppppdStack_f0 = (double *******)0x0;
                      pppppppdStack_100 = (double *******)0x0;
                      bStack_b8 = 2;
                      pppppppdStack_130 = (double *******)&pppppppdStack_100;
                      func_0x00010a050870(&pppppppdStack_130);
                      func_0x00010a050648(&uStack_d0,ppppppdVar7 + 1,param_5,ppppppdVar9);
                      unaff_x23 = (double *******)0x4;
                    }
                  }
                  else if (iVar1 == 4) {
                    uStack_d0 = (double *******)0x0;
                    pppppppdStack_c8 = (double *******)0x0;
                    pppppppdStack_c0 = (double *******)0x0;
                    bStack_b8 = 1;
                    FUN_10a05077c(&pppppppdStack_100,ppppppdVar7[2]);
                    if (uStack_d0 != (double *******)0x0) {
                      pppppppdStack_c8 = uStack_d0;
                      __ZdlPv();
                    }
                    pppppppdStack_c8 = pppppppdStack_f8;
                    uStack_d0 = pppppppdStack_100;
                    pppppppdStack_c0 = pppppppdStack_f0;
                    if (ppppppdVar7[2] != (double *****)0x0) {
                      lVar26 = 0;
                      pppppdVar29 = (double *****)0x0;
                      do {
                        pppppppdVar19 = uStack_d0;
                        if ((double *****)((long)pppppppdStack_c8 - (long)uStack_d0 >> 3) <=
                            pppppdVar29) goto LAB_10a083a70;
                        dVar46 = *(double *)((long)ppppppdVar7[1] + lVar26) +
                                 (double)(ulong)(*(long *)(param_5 + 2) * lVar12);
                        uVar34 = SUB81(dVar46,0);
                        uVar36 = (undefined1)((ulong)dVar46 >> 8);
                        uVar38 = (undefined1)((ulong)dVar46 >> 0x10);
                        uVar40 = (undefined1)((ulong)dVar46 >> 0x18);
                        uVar30 = (undefined1)((ulong)dVar46 >> 0x20);
                        uVar31 = (undefined1)((ulong)dVar46 >> 0x28);
                        uVar32 = (undefined1)((ulong)dVar46 >> 0x30);
                        uVar33 = (undefined1)((ulong)dVar46 >> 0x38);
                        dVar42 = ((double *)((long)ppppppdVar7[1] + lVar26))[1] +
                                 (double)(ulong)(*(long *)(param_5 + 4) * lVar12);
                        FUN_10a833e04(*param_5,ppppppdVar9);
                        dVar46 = (double)CONCAT17(uVar33,CONCAT16(uVar32,CONCAT15(uVar31,CONCAT14(
                                                  uVar30,CONCAT13(uVar40,CONCAT12(uVar38,CONCAT11(
                                                  uVar36,uVar34)))))));
                        auVar2[8] = SUB81(dVar42,0);
                        auVar2._0_8_ = dVar46;
                        auVar2[9] = (char)((ulong)dVar42 >> 8);
                        auVar2[10] = (char)((ulong)dVar42 >> 0x10);
                        auVar2[0xb] = (char)((ulong)dVar42 >> 0x18);
                        auVar2[0xc] = (char)((ulong)dVar42 >> 0x20);
                        auVar2[0xd] = (char)((ulong)dVar42 >> 0x28);
                        auVar2[0xe] = (char)((ulong)dVar42 >> 0x30);
                        auVar2[0xf] = (char)((ulong)dVar42 >> 0x38);
                        fVar3 = (float)auVar2._8_8_;
                        uVar35 = SUB41(fVar3,0);
                        uVar37 = (undefined1)((uint)fVar3 >> 8);
                        uVar39 = (undefined1)((uint)fVar3 >> 0x10);
                        uVar41 = (undefined1)((uint)fVar3 >> 0x18);
                        pppppppdVar19[(long)pppppdVar29] =
                             (double ******)
                             CONCAT17(uVar41,CONCAT16(uVar39,CONCAT15(uVar37,CONCAT14(uVar35,(float)
                                                  dVar46))));
                        pppppdVar29 = (double *****)((long)pppppdVar29 + 1);
                        lVar26 = lVar26 + 0x10;
                      } while (pppppdVar29 < ppppppdVar7[2]);
                    }
                    unaff_x23 = (double *******)0x1;
                  }
                  else if (iVar1 == 5) {
                    pppppppdStack_c8 = (double *******)0x0;
                    pppppppdStack_c0 = (double *******)0x0;
                    uStack_d0 = (double *******)0x0;
                    pppppppdStack_f8 = (double *******)0x0;
                    pppppppdStack_f0 = (double *******)0x0;
                    pppppppdStack_100 = (double *******)0x0;
                    bStack_b8 = 2;
                    pppppppdStack_130 = (double *******)&pppppppdStack_100;
                    func_0x00010a050870(&pppppppdStack_130);
                    FUN_10a050904(&pppppppdStack_100,ppppppdVar7[2]);
                    func_0x00010a050a44(&uStack_d0);
                    pppppppdStack_c8 = pppppppdStack_f8;
                    uStack_d0 = pppppppdStack_100;
                    pppppppdStack_c0 = pppppppdStack_f0;
                    pppppppdStack_f8 = (double *******)0x0;
                    pppppppdStack_f0 = (double *******)0x0;
                    pppppppdStack_100 = (double *******)0x0;
                    pppppppdStack_130 = (double *******)&pppppppdStack_100;
                    func_0x00010a050870(&pppppppdStack_130);
                    if (ppppppdVar7[2] != (double *****)0x0) {
                      lVar20 = 0;
                      lVar26 = 0;
                      pppppdVar29 = (double *****)0x0;
                      do {
                        pppppdVar13 = (double *****)
                                      (((long)pppppppdStack_c8 - (long)uStack_d0 >> 3) *
                                      -0x5555555555555555);
                        if (pppppdVar13 < pppppdVar29 || (long)pppppdVar13 - (long)pppppdVar29 == 0)
                        goto LAB_10a083a70;
                        func_0x00010a050558((long)uStack_d0 + lVar20,(long)ppppppdVar7[1] + lVar26,
                                            param_5,ppppppdVar9);
                        pppppdVar29 = (double *****)((long)pppppdVar29 + 1);
                        lVar26 = lVar26 + 0x10;
                        lVar20 = lVar20 + 0x18;
                      } while (pppppdVar29 < ppppppdVar7[2]);
                    }
                    unaff_x23 = (double *******)0x3;
                  }
                  else if (iVar1 == 6) {
                    pppppppdStack_c8 = (double *******)0x0;
                    pppppppdStack_c0 = (double *******)0x0;
                    uStack_d0 = (double *******)0x0;
                    pppppppdStack_f8 = (double *******)0x0;
                    pppppppdStack_f0 = (double *******)0x0;
                    pppppppdStack_100 = (double *******)0x0;
                    bStack_b8 = 3;
                    FUN_10a050a7c(&pppppppdStack_100);
                    pppppdVar29 = ppppppdVar7[2];
                    pppppppdStack_f8 = (double *******)0x0;
                    pppppppdStack_f0 = (double *******)0x0;
                    pppppppdStack_100 = (double *******)0x0;
                    if (pppppdVar29 == (double *****)0x0) {
                      pppppppdVar19 = (double *******)0x0;
                      pppppppdVar24 = (double *******)0x0;
                      pppppppdVar18 = (double *******)0x0;
                    }
                    else {
                      if ((double *****)0xaaaaaaaaaaaaaaa < pppppdVar29) {
                        FUN_10a050ae4();
                        goto LAB_10a083a70;
                      }
                      pppppppdVar24 = (double *******)((long)pppppdVar29 * 0x18);
                      __Znwm();
                      pppppppdVar18 = pppppppdVar24 + (long)pppppdVar29 * 3;
                      _bzero();
                      pppppppdVar19 =
                           pppppppdVar24 +
                           ((ulong)((double *******)((long)pppppdVar29 * 0x18) + -3) / 0x18) * 3 + 3
                      ;
                    }
                    pppppppdVar22 = uStack_d0;
                    pppppppdVar21 = pppppppdStack_c8;
                    if (uStack_d0 != (double *******)0x0) {
                      while (pppppppdVar21 != pppppppdVar22) {
                        pppppppdStack_130 = pppppppdVar21 + -3;
                        func_0x00010a050870(&pppppppdStack_130);
                        pppppppdVar21 = pppppppdVar21 + -3;
                      }
                      pppppppdStack_c8 = pppppppdVar22;
                      __ZdlPv(uStack_d0);
                    }
                    pppppppdStack_f8 = (double *******)0x0;
                    pppppppdStack_f0 = (double *******)0x0;
                    pppppppdStack_100 = (double *******)0x0;
                    uStack_d0 = pppppppdVar24;
                    pppppppdStack_c8 = pppppppdVar19;
                    pppppppdStack_c0 = pppppppdVar18;
                    FUN_10a050a7c(&pppppppdStack_100);
                    if (ppppppdVar7[2] != (double *****)0x0) {
                      lVar20 = 0;
                      lVar26 = 0;
                      pppppdVar29 = (double *****)0x0;
                      do {
                        pppppdVar13 = (double *****)
                                      (((long)pppppppdStack_c8 - (long)uStack_d0 >> 3) *
                                      -0x5555555555555555);
                        if (pppppdVar13 < pppppdVar29 || (long)pppppdVar13 - (long)pppppdVar29 == 0)
                        goto LAB_10a083a70;
                        func_0x00010a050648((long)uStack_d0 + lVar20,(long)ppppppdVar7[1] + lVar26,
                                            param_5,ppppppdVar9);
                        pppppdVar29 = (double *****)((long)pppppdVar29 + 1);
                        lVar26 = lVar26 + 0x10;
                        lVar20 = lVar20 + 0x18;
                      } while (pppppdVar29 < ppppppdVar7[2]);
                    }
                    unaff_x23 = (double *******)0x5;
                  }
                  pppppppdStack_f8 = (double *******)0x0;
                  pppppppdStack_100 = (double *******)0x0;
                  ppppppdStack_e8 = (double ******)0x0;
                  pppppppdStack_f0 = (double *******)0x0;
                  pppppppdStack_e0 = (double *******)CONCAT44(pppppppdStack_e0._4_4_,0x3f800000);
                  if (ppppppdVar7[4] != (double *****)0x0) {
                    lVar26 = 0;
                    pppppdVar29 = (double *****)0x0;
                    do {
                      pppppdVar13 = ppppppdVar7[3];
                      FUN_109ffe064(&pppppppdStack_130,
                                    *(undefined8 *)((long)pppppdVar13 + lVar26 + 0x18),
                                    *(undefined8 *)((long)pppppdVar13 + lVar26 + 0x20));
                      FUN_109ffe064(&pppppppdStack_148,
                                    *(undefined8 *)((long)pppppdVar13 + lVar26 + 8),
                                    *(undefined8 *)((long)pppppdVar13 + lVar26 + 0x10));
                      pppppppdVar19 = (double *******)&pppppppdStack_100;
                      pppppppdStack_108 = (double *******)&pppppppdStack_148;
                      func_0x000104c5bc74(pppppppdVar19,&pppppppdStack_148,&UNK_10dd5b8f9,
                                          &pppppppdStack_108,&pppppppdStack_110);
                      if (*(char *)((long)pppppppdVar19 + 0x3f) < '\0') {
                        __ZdlPv(pppppppdVar19[5]);
                      }
                      pppppppdVar18 = pppppppdStack_130;
                      pppppppdVar19[6] = (double ******)pppppppdStack_128;
                      pppppppdVar19[5] = (double ******)pppppppdVar18;
                      pppppppdVar19[7] = (double ******)pppppppdStack_120;
                      pppppppdStack_120 =
                           (double *******)((ulong)pppppppdStack_120 & 0xffffffffffffff);
                      pppppppdStack_130 =
                           (double *******)((ulong)pppppppdStack_130 & 0xffffffffffffff00);
                      if ((cStack_131 < '\0') &&
                         (__ZdlPv(pppppppdStack_148), (long)pppppppdStack_120 < 0)) {
                        __ZdlPv(pppppppdStack_130);
                      }
                      pppppdVar29 = (double *****)((long)pppppdVar29 + 1);
                      lVar26 = lVar26 + 0x28;
                    } while (pppppdVar29 < ppppppdVar7[4]);
                  }
                  FUN_109ffe064(&pppppppdStack_148,ppppppdVar7[5],ppppppdVar7[6]);
                  pppppdStack_198 = (double *****)0x98;
                  __Znwm();
                  pppppppdVar24 = pppppppdStack_c8;
                  pppppppdVar18 = uStack_d0;
                  pppppdStack_198[1] = (double ****)0x0;
                  pppppdStack_198[2] = (double ****)0x0;
                  *pppppdStack_198 = (double ****)&PTR_FUN_110b9e678;
                  pppppdStack_1a0 = pppppdStack_198 + 3;
                  *pppppdStack_1a0 = (double ****)&PTR_DAT_110b9c880;
                  pppppdStack_198[4] = (double ****)0x0;
                  pppppdStack_198[5] = (double ****)0x0;
                  *(char *)(pppppdStack_198 + 6) = (char)unaff_x23;
                  pppppppdVar19 = (double *******)(pppppdStack_198 + 7);
                  *(undefined1 *)(pppppdStack_198 + 10) = 4;
                  if (bStack_b8 < 2) {
                    if (bStack_b8 == 0) {
                      *pppppppdVar19 = (double ******)uStack_d0;
                    }
                    else if (bStack_b8 == 1) {
                      *pppppppdVar19 = (double ******)0x0;
                      pppppdStack_198[8] = (double ****)0x0;
                      pppppdStack_198[9] = (double ****)0x0;
                      FUN_10a07b634(pppppppdVar19,uStack_d0,pppppppdStack_c8,
                                    (long)pppppppdStack_c8 - (long)uStack_d0 >> 3);
                    }
                  }
                  else if (bStack_b8 == 2) {
                    *pppppppdVar19 = (double ******)0x0;
                    pppppdStack_198[8] = (double ****)0x0;
                    pppppdStack_198[9] = (double ****)0x0;
                    FUN_10a07b6ac(pppppppdVar19,uStack_d0,pppppppdStack_c8,
                                  ((long)pppppppdStack_c8 - (long)uStack_d0 >> 3) *
                                  -0x5555555555555555);
                  }
                  else if (bStack_b8 == 3) {
                    *pppppppdVar19 = (double ******)0x0;
                    pppppdStack_198[8] = (double ****)0x0;
                    pppppdStack_198[9] = (double ****)0x0;
                    pppppppdVar21 = (double *******)((long)pppppppdStack_c8 - (long)uStack_d0);
                    unaff_x23 = (double *******)0x0;
                    if (pppppppdVar21 != (double *******)0x0) {
                      if (0xaaaaaaaaaaaaaaa <
                          (ulong)(((long)pppppppdVar21 >> 3) * -0x5555555555555555)) {
                        FUN_10a050ae4();
                        goto LAB_10a083a70;
                      }
                      pppppppdVar22 = pppppppdVar21;
                      __Znwm();
                      pppppdStack_198[7] = (double ****)pppppppdVar22;
                      pppppdStack_198[8] = (double ****)pppppppdVar22;
                      pppppdStack_198[9] = (double ****)((long)pppppppdVar22 + (long)pppppppdVar21);
                      pppppppdStack_128 = (double *******)&pppppppdStack_110;
                      pppppppdStack_120 = (double *******)&pppppppdStack_108;
                      uStack_118 = 0;
                      unaff_x23 = (double *******)0xaaaaaaaaaaaaaaab;
                      pppppppdStack_130 = pppppppdVar19;
                      pppppppdStack_110 = pppppppdVar22;
                      do {
                        *pppppppdVar22 = (double ******)0x0;
                        pppppppdVar22[1] = (double ******)0x0;
                        pppppppdVar22[2] = (double ******)0x0;
                        pppppppdVar18 = pppppppdVar18 + 3;
                        pppppppdStack_108 = pppppppdVar22;
                        FUN_10a07b6ac();
                        pppppppdVar22 = pppppppdStack_108 + 3;
                      } while (pppppppdVar18 != pppppppdVar24);
                      pppppdStack_198[8] = (double ****)pppppppdVar22;
                      pppppppdStack_108 = pppppppdVar22;
                    }
                  }
                  *(byte *)(pppppdStack_198 + 10) = bStack_b8;
                  pppppppdVar19 = (double *******)&pppppppdStack_100;
                  func_0x000107c2791c(pppppdStack_198 + 0xb);
                  if (cStack_131 < '\0') {
                    pppppppdVar19 = pppppppdStack_148;
                    func_0x000107c3192c(pppppdStack_198 + 0x10,pppppppdStack_148,ppppdStack_140);
                    if (cStack_131 < '\0') {
                      __ZdlPv(pppppppdStack_148);
                    }
                  }
                  else {
                    pppppdStack_198[0x11] = ppppdStack_140;
                    pppppdStack_198[0x10] = (double ****)pppppppdStack_148;
                    pppppdStack_198[0x12] = (double ****)CONCAT17(cStack_131,uStack_138);
                  }
                  func_0x000104c4f944(&pppppppdStack_100);
                  if (4 < (ulong)bStack_b8) goto LAB_10a083a70;
                  (*(code *)(&PTR_FUN_110b9d8f8)[bStack_b8])(&uStack_d0);
LAB_10a08323c:
                  if (ppppppdStack_188 < ppppppdStack_180) {
                    *ppppppdStack_188 = pppppdStack_1a0;
                    ppppppdStack_188[1] = pppppdStack_198;
                    ppppppdStack_188 = ppppppdStack_188 + 2;
                  }
                  else {
                    lVar26 = (long)ppppppdStack_188 - (long)pppppppdStack_190;
                    uVar27 = (lVar26 >> 4) + 1;
                    if (uVar27 >> 0x3c != 0) goto LAB_10a08389c;
                    uVar14 = (long)ppppppdStack_180 - (long)pppppppdStack_190 >> 3;
                    if (uVar14 <= uVar27) {
                      uVar14 = uVar27;
                    }
                    if (0x7fffffffffffffef <
                        (ulong)((long)ppppppdStack_180 - (long)pppppppdStack_190)) {
                      uVar14 = 0xfffffffffffffff;
                    }
                    pppppppdStack_e0 = (double *******)&pppppppdStack_190;
                    func_0x00010a07e370();
                    puVar8 = (undefined8 *)(uVar14 + lVar26);
                    *puVar8 = pppppdStack_1a0;
                    puVar8[1] = pppppdStack_198;
                    pppppppdVar18 =
                         (double *******)
                         ((long)puVar8 - ((long)ppppppdStack_188 - (long)pppppppdStack_190));
                    _memcpy(pppppppdVar18);
                    pppppppdStack_f0 = pppppppdStack_190;
                    ppppppdStack_e8 = ppppppdStack_180;
                    pppppppdStack_100 = pppppppdStack_190;
                    pppppppdStack_f8 = pppppppdStack_190;
                    pppppppdStack_190 = pppppppdVar18;
                    ppppppdStack_188 = (double ******)(puVar8 + 2);
                    ppppppdStack_180 = (double ******)(uVar14 + (long)pppppppdVar19 * 0x10);
                    func_0x00010a083e28(&pppppppdStack_100);
                    ppppppdStack_188 = (double ******)(puVar8 + 2);
                  }
                }
              }
              else if (iVar1 == 2) {
                unaff_x23 = (double *******)ppppppdVar7[1];
                pppppppdVar18 = (double *******)ppppppdVar7[2];
                pppppppdVar19 = unaff_x23;
                FUN_10a039648(CONCAT17(uVar41,CONCAT16(uVar39,CONCAT15(uVar37,CONCAT14(uVar35,
                                                  CONCAT13(uVar40,CONCAT12(uVar38,CONCAT11(uVar36,
                                                  uVar34))))))),dVar45,dVar43,dVar46,unaff_x23,
                              pppppppdVar18);
                pppppppdVar24 = unaff_x23;
                if (((ulong)pppppppdVar19 & 1) != 0) goto LAB_10a082b98;
              }
              else if ((iVar1 == 3) &&
                      (pppppppdVar18 = (double *******)ppppppdVar7[2],
                      pppppppdVar18 != (double *******)0x0)) {
                pppppppdVar24 = (double *******)ppppppdVar7[1];
                ppppppdVar23 = *pppppppdVar24;
                FUN_10a039648(CONCAT17(uVar41,CONCAT16(uVar39,CONCAT15(uVar37,CONCAT14(uVar35,
                                                  CONCAT13(uVar40,CONCAT12(uVar38,CONCAT11(uVar36,
                                                  uVar34))))))),dVar45,dVar43,dVar46,ppppppdVar23,
                              pppppppdVar24[1]);
                if (((ulong)ppppppdVar23 & 1) != 0) goto LAB_10a082b98;
                pppppppdVar22 = (double *******)0x0;
                pppppppdVar21 = pppppppdVar24 + 3;
                unaff_x23 = (double *******)((long)pppppppdVar18 + -1);
                do {
                  if (unaff_x23 == pppppppdVar22) goto LAB_10a0832e4;
                  ppppppdVar23 = pppppppdVar21[-1];
                  pppppppdVar19 = (double *******)*pppppppdVar21;
                  FUN_10a039648(CONCAT17(uVar41,CONCAT16(uVar39,CONCAT15(uVar37,CONCAT14(uVar35,
                                                  CONCAT13(uVar40,CONCAT12(uVar38,CONCAT11(uVar36,
                                                  uVar34))))))),dVar45,dVar43,dVar46);
                  pppppppdVar21 = pppppppdVar21 + 2;
                  pppppppdVar22 = (double *******)((long)pppppppdVar22 + 1);
                } while (((ulong)ppppppdVar23 & 1) == 0);
LAB_10a082b8c:
                if (pppppppdVar22 < pppppppdVar18) goto LAB_10a082b94;
              }
            }
            else if (iVar1 == 4) {
              pppppppdVar18 = (double *******)ppppppdVar7[2];
              if (pppppppdVar18 != (double *******)0x0) {
                pppppppdVar24 = (double *******)ppppppdVar7[1];
                if (dVar43 * (SQRT(((double)pppppppdVar24[1] - dVar45) *
                                   ((double)pppppppdVar24[1] - dVar45) +
                                   ((double)*pppppppdVar24 - dVar44) *
                                   ((double)*pppppppdVar24 - dVar44)) + -0.5) <= dVar46)
                goto LAB_10a082b98;
                pppppppdVar22 = (double *******)0x0;
                pppppppdVar21 = pppppppdVar24 + 3;
                do {
                  if ((double *******)((long)pppppppdVar18 + -1) == pppppppdVar22)
                  goto LAB_10a0832e4;
                  pppppppdVar16 = pppppppdVar21 + -1;
                  ppppppdVar23 = *pppppppdVar21;
                  pppppppdVar21 = pppppppdVar21 + 2;
                  pppppppdVar22 = (double *******)((long)pppppppdVar22 + 1);
                } while (dVar46 < dVar43 * (SQRT(((double)ppppppdVar23 - dVar45) *
                                                 ((double)ppppppdVar23 - dVar45) +
                                                 ((double)*pppppppdVar16 - dVar44) *
                                                 ((double)*pppppppdVar16 - dVar44)) + -0.5));
                if (pppppppdVar22 < pppppppdVar18) goto LAB_10a082b94;
              }
            }
            else if (iVar1 == 5) {
              pppppppdVar18 = (double *******)ppppppdVar7[2];
              if (pppppppdVar18 != (double *******)0x0) {
                pppppppdVar24 = (double *******)ppppppdVar7[1];
                ppppppdVar23 = *pppppppdVar24;
                FUN_10a039648(CONCAT17(uVar41,CONCAT16(uVar39,CONCAT15(uVar37,CONCAT14(uVar35,
                                                  CONCAT13(uVar40,CONCAT12(uVar38,CONCAT11(uVar36,
                                                  uVar34))))))),dVar45,dVar43,dVar46,ppppppdVar23,
                              pppppppdVar24[1]);
                if (((ulong)ppppppdVar23 & 1) == 0) {
                  pppppppdVar22 = (double *******)0x0;
                  pppppppdVar21 = pppppppdVar24 + 3;
                  unaff_x23 = (double *******)((long)pppppppdVar18 + -1);
                  do {
                    if (unaff_x23 == pppppppdVar22) goto LAB_10a0832e4;
                    ppppppdVar23 = pppppppdVar21[-1];
                    pppppppdVar19 = (double *******)*pppppppdVar21;
                    FUN_10a039648(CONCAT17(uVar41,CONCAT16(uVar39,CONCAT15(uVar37,CONCAT14(uVar35,
                                                  CONCAT13(uVar40,CONCAT12(uVar38,CONCAT11(uVar36,
                                                  uVar34))))))),dVar45,dVar43,dVar46);
                    pppppppdVar21 = pppppppdVar21 + 2;
                    pppppppdVar22 = (double *******)((long)pppppppdVar22 + 1);
                  } while (((ulong)ppppppdVar23 & 1) == 0);
                  goto LAB_10a082b8c;
                }
                goto LAB_10a082b98;
              }
            }
            else if ((iVar1 == 6) &&
                    (pppppppdVar18 = (double *******)ppppppdVar7[2],
                    pppppppdVar18 != (double *******)0x0)) {
              unaff_x23 = (double *******)0x0;
              pppppppdVar24 = (double *******)ppppppdVar7[1];
              bVar5 = true;
              do {
                ppppppdVar23 = (pppppppdVar24 + (long)unaff_x23 * 2)[1];
                if (ppppppdVar23 != (double ******)0x0) {
                  ppppppdVar28 = pppppppdVar24[(long)unaff_x23 * 2];
                  pppppdVar29 = *ppppppdVar28;
                  pppppppdVar19 = (double *******)ppppppdVar28[1];
                  FUN_10a039648(CONCAT17(uVar41,CONCAT16(uVar39,CONCAT15(uVar37,CONCAT14(uVar35,
                                                  CONCAT13(uVar40,CONCAT12(uVar38,CONCAT11(uVar36,
                                                  uVar34))))))),dVar45,dVar43,dVar46);
                  if (((ulong)pppppdVar29 & 1) != 0) break;
                  ppppppdVar25 = (double ******)0x0;
                  ppppppdVar28 = ppppppdVar28 + 3;
                  do {
                    if ((double ******)((long)ppppppdVar23 - 1U) == ppppppdVar25)
                    goto LAB_10a082a1c;
                    iVar6 = (int)ppppppdVar28[-1];
                    pppppppdVar19 = (double *******)*ppppppdVar28;
                    FUN_10a039648(CONCAT17(uVar41,CONCAT16(uVar39,CONCAT15(uVar37,CONCAT14(uVar35,
                                                  CONCAT13(uVar40,CONCAT12(uVar38,CONCAT11(uVar36,
                                                  uVar34))))))),dVar45,dVar43,dVar46);
                    ppppppdVar28 = ppppppdVar28 + 2;
                    ppppppdVar25 = (double ******)((long)ppppppdVar25 + 1);
                  } while (iVar6 == 0);
                  if (ppppppdVar25 < ppppppdVar23) break;
                }
LAB_10a082a1c:
                unaff_x23 = (double *******)((long)unaff_x23 + 1);
                bVar5 = unaff_x23 < pppppppdVar18;
              } while (unaff_x23 != pppppppdVar18);
              if (bVar5) {
LAB_10a082b94:
                if (iVar1 != 0) goto LAB_10a082b98;
                pppppdStack_1a0 = (double *****)0x0;
                pppppdStack_198 = (double *****)0x0;
                goto LAB_10a08323c;
              }
            }
LAB_10a0832e4:
            func_0x00010a083e74(ppppppdVar7);
          }
          ppppppdVar17 = (double ******)((long)ppppppdVar17 + 1);
        } while (ppppppdVar17 != ppppppdVar10);
      }
      __ZNSt3__15mutex4lockEv(param_6 + 5);
      if ((*(byte *)(param_6 + 0xd) & 1) == 0) {
        *(int *)((long)param_6 + 0x6c) = *(int *)((long)param_6 + 0x6c) + -1;
        FUN_10a82c03c(&pppppppdStack_130,param_5);
        pppppppdVar19 = (double *******)(param_6 + 0x1f);
        pppppppdVar18 = pppppppdVar19;
        func_0x000107c2b05c(pppppppdVar19,&pppppppdStack_130);
        pppppppdVar24 = (double *******)param_6[0x20];
        if (pppppppdVar24 != (double *******)0x0) {
          uVar27 = (long)pppppppdVar24 - 1;
          if (((ulong)pppppppdVar24 & uVar27) == 0) {
            unaff_x23 = (double *******)(uVar27 & (ulong)pppppppdVar18);
          }
          else {
            unaff_x23 = pppppppdVar18;
            if (pppppppdVar24 <= pppppppdVar18) {
              uVar14 = 0;
              if (pppppppdVar24 != (double *******)0x0) {
                uVar14 = (ulong)pppppppdVar18 / (ulong)pppppppdVar24;
              }
              unaff_x23 = (double *******)((long)pppppppdVar18 - uVar14 * (long)pppppppdVar24);
            }
          }
          if ((*pppppppdVar19)[(long)unaff_x23] != (double *****)0x0) {
            for (pppppppdVar21 = (double *******)*(*pppppppdVar19)[(long)unaff_x23];
                pppppppdVar21 != (double *******)0x0; pppppppdVar21 = (double *******)*pppppppdVar21
                ) {
              pppppppdVar22 = (double *******)pppppppdVar21[1];
              if (pppppppdVar22 == pppppppdVar18) {
                pppppppdVar22 = pppppppdVar19;
                func_0x000107c2b068(pppppppdVar19,pppppppdVar21 + 2,&pppppppdStack_130);
                if (((ulong)pppppppdVar22 & 1) != 0) goto LAB_10a083784;
              }
              else {
                if (((ulong)pppppppdVar24 & uVar27) == 0) {
                  pppppppdVar22 = (double *******)((ulong)pppppppdVar22 & uVar27);
                }
                else if (pppppppdVar24 <= pppppppdVar22) {
                  uVar14 = 0;
                  if (pppppppdVar24 != (double *******)0x0) {
                    uVar14 = (ulong)pppppppdVar22 / (ulong)pppppppdVar24;
                  }
                  pppppppdVar22 =
                       (double *******)((long)pppppppdVar22 - uVar14 * (long)pppppppdVar24);
                }
                if (pppppppdVar22 != unaff_x23) break;
              }
            }
          }
        }
        pppppppdVar21 = (double *******)0x40;
        __Znwm();
        pppppppdVar22 = pppppppdStack_120;
        pppppppdStack_f0 = (double *******)0x1;
        *pppppppdVar21 = (double ******)0x0;
        pppppppdVar21[1] = (double ******)pppppppdVar18;
        pppppppdVar21[3] = (double ******)pppppppdStack_128;
        pppppppdVar21[2] = (double ******)pppppppdStack_130;
        pppppppdStack_130 = (double *******)0x0;
        pppppppdStack_128 = (double *******)0x0;
        pppppppdStack_120 = (double *******)0x0;
        pppppppdVar21[4] = (double ******)pppppppdVar22;
        pppppppdVar21[5] = (double ******)0x0;
        pppppppdVar21[6] = (double ******)0x0;
        pppppppdVar21[7] = (double ******)0x0;
        pppppppdStack_100 = pppppppdVar21;
        pppppppdStack_f8 = pppppppdVar19;
        if ((pppppppdVar24 == (double *******)0x0) ||
           (*(float *)(param_6 + 0x23) * (float)pppppppdVar24 < (float)(param_6[0x22] + 1))) {
          uVar27 = 1;
          if ((double *******)0x2 < pppppppdVar24) {
            uVar27 = (ulong)(((ulong)pppppppdVar24 & (long)pppppppdVar24 - 1U) != 0);
          }
          pppppppdVar22 = (double *******)(uVar27 | (long)pppppppdVar24 << 1);
          pppppppdVar24 =
               (double *******)(long)((float)(param_6[0x22] + 1) / *(float *)(param_6 + 0x23));
          if (pppppppdVar22 <= pppppppdVar24) {
            pppppppdVar22 = pppppppdVar24;
          }
          if ((long)pppppppdVar22 - 1U == 0) {
            pppppppdVar22 = (double *******)0x2;
          }
          else if (((ulong)pppppppdVar22 & (long)pppppppdVar22 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          pppppppdVar24 = (double *******)param_6[0x20];
          if (pppppppdVar24 < pppppppdVar22) {
LAB_10a083598:
            pppppppdVar24 = pppppppdVar22;
            if ((ulong)pppppppdVar24 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a083a70;
            }
            ppppppdVar9 = (double ******)((long)pppppppdVar24 << 3);
            __Znwm();
            ppppppdVar10 = *pppppppdVar19;
            *pppppppdVar19 = ppppppdVar9;
            if (ppppppdVar10 != (double ******)0x0) {
              __ZdlPv();
            }
            pppppppdVar22 = (double *******)0x0;
            param_6[0x20] = pppppppdVar24;
            do {
              (*pppppppdVar19)[(long)pppppppdVar22] = (double *****)0x0;
              pppppppdVar22 = (double *******)((long)pppppppdVar22 + 1);
            } while (pppppppdVar24 != pppppppdVar22);
            pppppdVar29 = (double *****)param_6[0x21];
            if (pppppdVar29 != (double *****)0x0) {
              pppppppdVar22 = (double *******)pppppdVar29[1];
              uVar27 = (long)pppppppdVar24 - 1;
              if (((ulong)pppppppdVar24 & uVar27) == 0) {
                pppppppdVar22 = (double *******)((ulong)pppppppdVar22 & uVar27);
              }
              else if (pppppppdVar24 <= pppppppdVar22) {
                uVar14 = 0;
                if (pppppppdVar24 != (double *******)0x0) {
                  uVar14 = (ulong)pppppppdVar22 / (ulong)pppppppdVar24;
                }
                pppppppdVar22 = (double *******)((long)pppppppdVar22 - uVar14 * (long)pppppppdVar24)
                ;
              }
              (*pppppppdVar19)[(long)pppppppdVar22] = (double *****)(param_6 + 0x21);
              pppppdVar13 = (double *****)*pppppdVar29;
              while (pppppdVar13 != (double *****)0x0) {
                pppppppdVar16 = (double *******)pppppdVar13[1];
                if (((ulong)pppppppdVar24 & uVar27) == 0) {
                  pppppppdVar16 = (double *******)((ulong)pppppppdVar16 & uVar27);
                }
                else if (pppppppdVar24 <= pppppppdVar16) {
                  uVar14 = 0;
                  if (pppppppdVar24 != (double *******)0x0) {
                    uVar14 = (ulong)pppppppdVar16 / (ulong)pppppppdVar24;
                  }
                  pppppppdVar16 =
                       (double *******)((long)pppppppdVar16 - uVar14 * (long)pppppppdVar24);
                }
                pppppdVar15 = pppppdVar13;
                if (pppppppdVar16 != pppppppdVar22) {
                  ppppppdVar9 = *pppppppdVar19;
                  if (ppppppdVar9[(long)pppppppdVar16] == (double *****)0x0) {
                    ppppppdVar9[(long)pppppppdVar16] = pppppdVar29;
                    pppppppdVar22 = pppppppdVar16;
                  }
                  else {
                    *pppppdVar29 = *pppppdVar13;
                    *pppppdVar13 = *ppppppdVar9[(long)pppppppdVar16];
                    *ppppppdVar9[(long)pppppppdVar16] = (double ****)pppppdVar13;
                    pppppdVar15 = pppppdVar29;
                  }
                }
                pppppdVar29 = pppppdVar15;
                pppppdVar13 = (double *****)*pppppdVar15;
              }
            }
          }
          else if (pppppppdVar22 < pppppppdVar24) {
            pppppppdVar16 =
                 (double *******)(long)((float)(ulong)param_6[0x22] / *(float *)(param_6 + 0x23));
            if ((pppppppdVar24 < (double *******)0x3) ||
               (((ulong)pppppppdVar24 & (long)pppppppdVar24 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((double *******)0x1 < pppppppdVar16) {
              pppppppdVar16 = (double *******)(1L << (-LZCOUNT((long)pppppppdVar16 + -1) & 0x3fU));
            }
            if (pppppppdVar22 <= pppppppdVar16) {
              pppppppdVar22 = pppppppdVar16;
            }
            if (pppppppdVar22 < pppppppdVar24) {
              if (pppppppdVar22 != (double *******)0x0) goto LAB_10a083598;
              ppppppdVar9 = *pppppppdVar19;
              *pppppppdVar19 = (double ******)0x0;
              if (ppppppdVar9 != (double ******)0x0) {
                __ZdlPv();
              }
              pppppppdVar24 = (double *******)0x0;
              param_6[0x20] = 0;
            }
            else {
              pppppppdVar24 = (double *******)param_6[0x20];
            }
          }
          if (((ulong)pppppppdVar24 & (long)pppppppdVar24 - 1U) == 0) {
            unaff_x23 = (double *******)((long)pppppppdVar24 - 1U & (ulong)pppppppdVar18);
          }
          else {
            unaff_x23 = pppppppdVar18;
            if (pppppppdVar24 <= pppppppdVar18) {
              uVar27 = 0;
              if (pppppppdVar24 != (double *******)0x0) {
                uVar27 = (ulong)pppppppdVar18 / (ulong)pppppppdVar24;
              }
              unaff_x23 = (double *******)((long)pppppppdVar18 - uVar27 * (long)pppppppdVar24);
            }
          }
        }
        ppppppdVar10 = *pppppppdVar19;
        ppppppdVar9 = (double ******)ppppppdVar10[(long)unaff_x23];
        if (ppppppdVar9 == (double ******)0x0) {
          *pppppppdVar21 = (double ******)param_6[0x21];
          param_6[0x21] = pppppppdVar21;
          ppppppdVar10[(long)unaff_x23] = (double *****)(param_6 + 0x21);
          if (*pppppppdVar21 != (double ******)0x0) {
            pppppppdVar18 = (double *******)(*pppppppdVar21)[1];
            if (((ulong)pppppppdVar24 & (long)pppppppdVar24 - 1U) == 0) {
              pppppppdVar18 = (double *******)((ulong)pppppppdVar18 & (long)pppppppdVar24 - 1U);
            }
            else if (pppppppdVar24 <= pppppppdVar18) {
              uVar27 = 0;
              if (pppppppdVar24 != (double *******)0x0) {
                uVar27 = (ulong)pppppppdVar18 / (ulong)pppppppdVar24;
              }
              pppppppdVar18 = (double *******)((long)pppppppdVar18 - uVar27 * (long)pppppppdVar24);
            }
            ppppppdVar9 = *pppppppdVar19 + (long)pppppppdVar18;
            goto LAB_10a083774;
          }
        }
        else {
          *pppppppdVar21 = (double ******)*ppppppdVar9;
LAB_10a083774:
          *ppppppdVar9 = (double *****)pppppppdVar21;
        }
        param_6[0x22] = param_6[0x22] + 1;
LAB_10a083784:
        pppppppdVar19 = pppppppdVar21 + 5;
        ppppppdVar9 = *pppppppdVar19;
        if (ppppppdVar9 != (double ******)0x0) {
          ppppppdVar17 = pppppppdVar21[6];
          ppppppdVar10 = ppppppdVar9;
          if (ppppppdVar17 != ppppppdVar9) {
            do {
              ppppppdVar17 = ppppppdVar17 + -2;
              FUN_10a07b8bc();
            } while (ppppppdVar17 != ppppppdVar9);
            ppppppdVar10 = *pppppppdVar19;
          }
          pppppppdVar21[6] = ppppppdVar9;
          __ZdlPv(ppppppdVar10);
          *pppppppdVar19 = (double ******)0x0;
          pppppppdVar21[6] = (double ******)0x0;
          pppppppdVar21[7] = (double ******)0x0;
        }
        pppppppdVar21[6] = ppppppdStack_188;
        pppppppdVar21[5] = (double ******)pppppppdStack_190;
        pppppppdVar21[7] = ppppppdStack_180;
        ppppppdStack_188 = (double ******)0x0;
        ppppppdStack_180 = (double ******)0x0;
        pppppppdStack_190 = (double *******)0x0;
        if ((long)pppppppdStack_120 < 0) {
          __ZdlPv(pppppppdStack_130);
        }
      }
      __ZNSt3__15mutex6unlockEv(param_6 + 5);
      puVar8 = param_6;
      FUN_10a083a74();
      if ((int)puVar8 != 0) {
        FUN_10a083ac0(param_6);
      }
      func_0x00010a07e3a4(&pppppppdStack_190);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
LAB_10a08389c:
  FUN_10a07e35c();
LAB_10a083a70:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a083a74);
  (*pcVar4)();
}



/* Entry: 10a083a74; end: 10a083abf;  */

bool FUN_10a083a74(long param_1)

{
  bool bVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    bVar1 = *(int *)(param_1 + 0x6c) == 0;
  }
  else {
    bVar1 = false;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
  return bVar1;
}



/* Entry: 10a083ac0; end: 10a083e27;  */

/* WARNING: Possible PIC construction at 0x00010a083d28: Changing call to branch */

void FUN_10a083ac0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  int iVar26;
  undefined1 *unaff_x29;
  undefined1 *puVar27;
  undefined8 unaff_x30;
  long lStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar23 = &lStack_b0;
  puVar27 = &stack0xfffffffffffffff0;
  lVar11 = param_1;
  FUN_10a083a74();
  if ((int)lVar11 != 0) {
    lStack_b0 = param_1;
    if (*(char *)(param_1 + 0xb0) == '\0') {
      lStack_a8 = 0;
      puStack_a0 = (undefined8 *)0x0;
      puStack_98 = (undefined8 *)0x0;
      plVar25 = *(long **)(param_1 + 0x108);
      if (plVar25 != (long *)0x0) {
        iVar26 = 0;
        do {
          lVar18 = *(long *)(param_1 + 0x18);
          lVar11 = plVar25[5];
          if ((ulong)(long)*(int *)(lVar18 + 0x18) <=
              (ulong)((plVar25[6] - lVar11 >> 4) + (long)iVar26)) {
            uVar8 = *(int *)(lVar18 + 0x18) - iVar26;
            uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
            iVar9 = (int)((ulong)(plVar25[6] - lVar11) >> 4) - uVar8;
            iVar20 = *(int *)(lVar18 + 0x1c);
            iVar5 = iVar20;
            if (iVar9 <= iVar20) {
              iVar5 = iVar9;
            }
            lVar24 = (ulong)uVar8 * 0x10;
            lVar1 = (ulong)uVar8 + (long)iVar5;
            if (lVar24 != lVar1 * 0x10) {
              puVar22 = (undefined8 *)(lVar24 + lVar11);
              do {
                if (puStack_a0 < puStack_98) {
                  lVar18 = puVar22[1];
                  uVar12 = *puVar22;
                  puStack_a0[1] = puVar22[1];
                  *puStack_a0 = uVar12;
                  if (lVar18 != 0) {
                    plVar2 = (long *)(lVar18 + 8);
                    do {
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar7) {
                        *plVar2 = *plVar2 + 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                  }
                  puVar21 = puStack_a0 + 2;
                }
                else {
                  lVar18 = (long)puStack_a0 - lStack_a8;
                  uVar3 = (lVar18 >> 4) + 1;
                  if (uVar3 >> 0x3c != 0) {
                    FUN_10a07e35c();
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x10a083df0);
                    (*pcVar10)();
                  }
                  uVar19 = (long)puStack_98 - lStack_a8 >> 3;
                  if (uVar19 <= uVar3) {
                    uVar19 = uVar3;
                  }
                  if (0x7fffffffffffffef < (ulong)((long)puStack_98 - lStack_a8)) {
                    uVar19 = 0xfffffffffffffff;
                  }
                  plStack_70 = &lStack_a8;
                  func_0x00010a07e370();
                  puVar4 = (undefined8 *)(uVar19 + lVar18);
                  lVar18 = puVar22[1];
                  uVar12 = *puVar22;
                  puVar4[1] = puVar22[1];
                  *puVar4 = uVar12;
                  if (lVar18 != 0) {
                    plVar2 = (long *)(lVar18 + 8);
                    do {
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar7) {
                        *plVar2 = *plVar2 + 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                  }
                  lVar18 = param_2 * 0x10;
                  puVar21 = puVar4 + 2;
                  lVar24 = (long)puVar4 - ((long)puStack_a0 - lStack_a8);
                  param_2 = lStack_a8;
                  _memcpy(lVar24);
                  lStack_90 = lStack_a8;
                  lStack_80 = lStack_a8;
                  puStack_78 = puStack_98;
                  lStack_88 = lStack_a8;
                  lStack_a8 = lVar24;
                  puStack_a0 = puVar21;
                  puStack_98 = (undefined8 *)(uVar19 + lVar18);
                  FUN_10a083e28(&lStack_90);
                }
                puVar22 = puVar22 + 2;
                puStack_a0 = puVar21;
              } while (puVar22 != (undefined8 *)(lVar11 + lVar1 * 0x10));
              lVar18 = *(long *)(lStack_b0 + 0x18);
              iVar20 = *(int *)(lVar18 + 0x1c);
              param_1 = lStack_b0;
            }
            iVar20 = iVar20 - iVar5;
            if (iVar20 == 0) break;
            if (iVar20 < 1) {
              uVar12 = 1;
              uVar13 = 0x14;
              puVar14 = &UNK_10f630f1d;
              uVar16 = 0xffffffff;
              puVar17 = &UNK_10f63313e;
              unaff_x30 = 0x10a083d2c;
              puVar15 = puVar14;
              goto SUB_10ae06f08;
            }
            *(int *)(lVar18 + 0x1c) = iVar20;
          }
          iVar26 = iVar26 + (int)((ulong)(plVar25[6] - plVar25[5]) >> 4);
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
      (**(code **)(param_1 + 0x70))(&lStack_a8,param_1 + 0x70);
      func_0x00010a07e3a4(&lStack_a8);
    }
    else if (*(char *)(param_1 + 0xb0) == '\x01') {
      plVar23 = *(long **)(param_1 + 0x108);
      if (plVar23 == (long *)0x0) {
        iVar26 = 0;
      }
      else {
        iVar26 = 0;
        do {
          if (*(char *)((long)plVar23 + 0x27) < '\0') {
            func_0x000107c3192c(&lStack_90,plVar23[2],plVar23[3]);
          }
          else {
            lStack_88 = plVar23[3];
            lStack_90 = plVar23[2];
            lStack_80 = plVar23[4];
          }
          plStack_70 = (long *)0x0;
          uStack_68 = 0;
          puStack_78 = (undefined8 *)0x0;
          FUN_10a07e2b8(&puStack_78,plVar23[5],plVar23[6],plVar23[6] - plVar23[5] >> 4);
          plVar25 = plStack_70;
          puVar22 = puStack_78;
          func_0x00010a07e3a4(&puStack_78);
          if (lStack_80 < 0) {
            __ZdlPv(lStack_90);
          }
          iVar26 = iVar26 + (int)((ulong)((long)plVar25 - (long)puVar22) >> 4);
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      (**(code **)(lStack_b0 + 0x70))(iVar26,lStack_b0 + 0x70);
    }
    else if ((bRam000000011330a9e8 & 1) != 0) {
      puVar14 = &UNK_10f6332f0;
      puVar17 = &UNK_10f634f17;
      uVar12 = 0;
      uVar13 = 1;
      uVar16 = 0xd6;
      plVar23 = (long *)register0x00000008;
      puVar15 = &UNK_10f634edf;
      puVar27 = unaff_x29;
SUB_10ae06f08:
      *(undefined1 **)((long)plVar23 + -0x10) = puVar27;
      *(undefined8 *)((long)plVar23 + -8) = unaff_x30;
      *(long **)((long)plVar23 + -0x18) = plVar23;
      FUN_10ae06f30(uVar12,uVar13,puVar14,puVar15,uVar16,puVar17,plVar23);
      return;
    }
  }
  return;
}



/* Entry: 10a083e28; end: 10a083fa3;  */

long * FUN_10a083e28(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10a07b8bc();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a083fa4; end: 10a083fbb;  */

void FUN_10a083fa4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a083fbc; end: 10a0840f7;  */

void FUN_10a083fbc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_DAT_110b9e990;
  puVar4 = (undefined8 *)0x48;
  __Znwm();
  lVar5 = puVar6[1];
  uVar7 = *puVar6;
  puVar4[1] = puVar6[1];
  *puVar4 = uVar7;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = puVar6[3];
  uVar7 = puVar6[2];
  puVar4[3] = puVar6[3];
  puVar4[2] = uVar7;
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
  uVar8 = puVar6[5];
  uVar7 = puVar6[4];
  puVar4[6] = puVar6[6];
  puVar4[5] = uVar8;
  puVar4[4] = uVar7;
  lVar5 = puVar6[8];
  uVar7 = puVar6[7];
  puVar4[8] = puVar6[8];
  puVar4[7] = uVar7;
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
  param_1[1] = puVar4;
  return;
}



/* Entry: 10a0840f8; end: 10a08420b;  */

void FUN_10a0840f8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = *param_1;
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
  }
  uVar6 = param_1[2];
  plVar2 = (long *)param_1[7];
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
  FUN_10a082724(uVar5,uVar6,param_1 + 3);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  (*(code *)param_1[9])(param_1);
  return;
}



/* Entry: 10a08420c; end: 10a0842cb;  */

void FUN_10a08420c(long param_1)

{
  if (param_1 != 0) {
    func_0x00010a03d68c(param_1 + 0x30);
    func_0x00010a073f00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a0842cc; end: 10a0843f7;  */

void FUN_10a0842cc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  
  uVar2 = *param_1;
  plVar3 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = **(long **)(param_2 + 0x10);
  if (lVar7 == 0) {
    FUN_10a0843f8(3);
  }
  else {
    __ZNSt3__15mutex4lockEv(lVar7 + 0x18);
    if ((*(byte *)(lVar7 + 0x88) & 1) == 0) {
      uStack_38 = 0;
      lVar8 = *(long *)(lVar7 + 0x10);
      __ZNSt13exception_ptrD1Ev(&uStack_38);
      if (lVar8 == 0) {
        *(undefined8 *)(lVar7 + 0x90) = uVar2;
        *(long **)(lVar7 + 0x98) = plVar3;
        if (plVar3 == (long *)0x0) {
          *(uint *)(lVar7 + 0x88) = *(uint *)(lVar7 + 0x88) | 5;
          __ZNSt3__118condition_variable10notify_allEv(lVar7 + 0x58);
          __ZNSt3__15mutex6unlockEv(lVar7 + 0x18);
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
          *(uint *)(lVar7 + 0x88) = *(uint *)(lVar7 + 0x88) | 5;
          __ZNSt3__118condition_variable10notify_allEv(lVar7 + 0x58);
          __ZNSt3__15mutex6unlockEv(lVar7 + 0x18);
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
        return;
      }
    }
    FUN_10a0843f8(2);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a0843d4);
  (*pcVar6)();
}



/* Entry: 10a0843f8; end: 10a084453;  */

long FUN_10a0843f8(undefined4 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = 0x20;
  ___cxa_allocate_exception();
  lVar5 = lVar4;
  __ZNSt3__115future_categoryEv();
  __ZNSt3__112future_errorC1ENS_10error_codeE(lVar4,param_1,lVar5);
  lVar5 = lVar4;
  ___cxa_throw(lVar4,PTR___ZTINSt3__112future_errorE_110346a00,
               PTR___ZNSt3__112future_errorD1Ev_1103463c0);
  ___cxa_free_exception(lVar4);
  __Unwind_Resume();
  plVar6 = *(long **)(lVar5 + 0x10);
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
  return lVar5 + 8;
}



/* Entry: 10a084454; end: 10a0844ab;  */

long FUN_10a084454(long param_1)

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



/* Entry: 10a0844ac; end: 10a08455b;  */

long FUN_10a0844ac(long param_1)

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



/* Entry: 10a08455c; end: 10a0847a3;  */

void FUN_10a08455c(undefined8 param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long *plStack_158;
  undefined **ppuStack_150;
  long *plStack_148;
  
  plVar7 = *(long **)(param_2 + 0x10);
  iVar2 = *(int *)plVar7[4];
  if (iVar2 != 0) {
    *(int *)plVar7[4] = iVar2 + -1;
    lStack_160 = 0;
    plStack_158 = (long *)0x0;
    plVar5 = (long *)plVar7[1];
    if (((plVar5 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_158 = plVar5, plVar5 == (long *)0x0)) ||
       (lStack_160 = *plVar7, lStack_160 == 0)) {
      puVar8 = (undefined8 *)plVar7[2];
      FUN_10a002a94(&ppuStack_150,param_1);
      ppuStack_150 = &PTR_FUN_110b99e70;
      FUN_10a05bde0(&lStack_170,&ppuStack_150);
      FUN_10a0847a4(*puVar8,&lStack_170);
      __ZNSt13exception_ptrD1Ev(&lStack_170);
      __ZNSt13runtime_errorD2Ev(&ppuStack_150);
    }
    else {
      ppuStack_150 = (undefined **)plVar7[2];
      plStack_148 = (long *)plVar7[3];
      if (plStack_148 != (long *)0x0) {
        plVar5 = plStack_148 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = *plVar5 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar5 = (long *)plVar7[5];
      lStack_168 = plVar7[5];
      lStack_170 = plVar7[4];
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a03d6e4(lStack_160,plVar7 + 6,ppuStack_150,plStack_148,&lStack_170);
      if (plVar5 != (long *)0x0) {
        plVar7 = plVar5 + 1;
        do {
          lVar6 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar7 = plStack_148;
      if (plStack_148 != (long *)0x0) {
        plVar5 = plStack_148 + 1;
        do {
          lVar6 = *plVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
    plVar7 = plStack_158;
    if (plStack_158 != (long *)0x0) {
      plVar5 = plStack_158 + 1;
      do {
        lVar6 = *plVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    return;
  }
  puVar8 = (undefined8 *)plVar7[2];
  FUN_10a002a94(&ppuStack_150,param_1);
  ppuStack_150 = &PTR_FUN_110b99e70;
  FUN_10a05bde0(&lStack_160,&ppuStack_150);
  FUN_10a0847a4(*puVar8,&lStack_160);
  __ZNSt13exception_ptrD1Ev(&lStack_160);
  __ZNSt13runtime_errorD2Ev(&ppuStack_150);
  return;
}



/* Entry: 10a0847a4; end: 10a084803;  */

void FUN_10a0847a4(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  if (param_1 != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_28);
    __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    return;
  }
  lVar1 = 3;
  FUN_10a0843f8();
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __Unwind_Resume();
  lVar1 = *(long *)(lVar1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x47) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x30));
    }
    func_0x00010a084504(lVar1 + 0x20);
    func_0x00010a084274(lVar1 + 0x10);
    if (*(long *)(lVar1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a084804; end: 10a08485f;  */

void FUN_10a084804(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x47) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x30));
    }
    func_0x00010a084504(lVar1 + 0x20);
    func_0x00010a084274(lVar1 + 0x10);
    if (*(long *)(lVar1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a084860; end: 10a084877;  */

void FUN_10a084860(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a084878; end: 10a08498f;  */

void FUN_10a084878(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110b9e9d0;
  puVar4 = (undefined8 *)0x48;
  __Znwm();
  lVar5 = puVar6[1];
  uVar7 = *puVar6;
  puVar4[1] = puVar6[1];
  *puVar4 = uVar7;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = puVar6[3];
  uVar7 = puVar6[2];
  puVar4[3] = puVar6[3];
  puVar4[2] = uVar7;
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
  lVar5 = puVar6[5];
  uVar7 = puVar6[4];
  puVar4[5] = puVar6[5];
  puVar4[4] = uVar7;
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
  if (*(char *)((long)puVar6 + 0x47) < '\0') {
    func_0x000107c3192c(puVar4 + 6,puVar6[6],puVar6[7]);
  }
  else {
    uVar8 = puVar6[7];
    uVar7 = puVar6[6];
    puVar4[8] = puVar6[8];
    puVar4[7] = uVar8;
    puVar4[6] = uVar7;
  }
  param_1[1] = puVar4;
  return;
}



/* Entry: 10a084990; end: 10a0849d7;  */

void FUN_10a084990(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a081068(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a0849d8; end: 10a084ddb;  */

long * FUN_10a0849d8(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c2b05c();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000107c2b068(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar5 = (long *)0x30;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar5[3] = param_3[1];
    plVar5[2] = lVar3;
    plVar5[4] = param_3[2];
  }
  plVar5[5] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_10a084cec;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_10a084b74:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a084dc4);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_10a084b74;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_10a084cec:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 10a084ddc; end: 10a084deb;  */

void FUN_10a084ddc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9ea00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a084dec; end: 10a084e0b;  */

void FUN_10a084dec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9ea00;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a084e0c; end: 10a084ed7;  */

void FUN_10a084e0c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 auStack_58 [4];
  undefined1 auStack_38 [8];
  
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(plVar5 + 0x11) & 1) == 0) {
      auStack_58[0] = 0;
      lVar6 = plVar5[2];
      puVar4 = auStack_58;
      __ZNSt13exception_ptrD1Ev(puVar4);
      plVar5 = *(long **)(param_1 + 0x18);
      if ((lVar6 == 0) && (0 < plVar5[1])) {
        __ZNSt3__115future_categoryEv();
        __ZNSt3__112future_errorC1ENS_10error_codeE(auStack_58,4,puVar4);
        FUN_10a084fb0(auStack_38,auStack_58);
        __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(plVar5,auStack_38);
        __ZNSt13exception_ptrD1Ev(auStack_38);
        __ZNSt3__112future_errorD1Ev(auStack_58);
        plVar5 = *(long **)(param_1 + 0x18);
      }
    }
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
    }
  }
  return;
}



/* Entry: 10a084ed8; end: 10a084edb;  */

void FUN_10a084ed8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a084edc; end: 10a084faf;  */

void FUN_10a084edc(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  __ZNSt13exception_ptrD1Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10a084fb0; end: 10a085023;  */

void FUN_10a084fb0(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)0x20;
  ___cxa_allocate_exception();
  __ZNSt11logic_errorC2ERKS_();
  *plVar2 = (long)(PTR___ZTVNSt3__112future_errorE_110346af8 + 0x10);
  lVar3 = *(long *)(param_1 + 0x10);
  plVar2[3] = *(long *)(param_1 + 0x18);
  plVar2[2] = lVar3;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a085004);
  (*pcVar1)();
}



/* Entry: 10a085024; end: 10a08508f;  */

void FUN_10a085024(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  if ((*(uint *)(param_1 + 0x88) >> 1 & 1) == 0) {
    plVar1 = (long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x18);
    return;
  }
  FUN_10a0843f8(1);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a08507c);
  (*pcVar4)();
}



/* Entry: 10a085090; end: 10a08518b;  */

undefined1  [16] FUN_10a085090(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9cea0;
  puVar1 = &UNK_10f630f1d;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110b9cea0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c42c58;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a08518c; end: 10a085247;  */

void FUN_10a08518c(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6346b2,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a085248);
  (*pcVar4)();
}



/* Entry: 10a085248; end: 10a0852ff;  */

void FUN_10a085248(undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_40 = (long *)plVar2[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_40 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110b9fbe8;
    lVar3 = *param_3;
    plStack_40[2] = param_3[1];
    plStack_40[1] = lVar3;
    plStack_38 = plVar2;
    FUN_10a07a40c(param_1,param_2,&plStack_40);
    plVar2 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0852fc);
  (*pcVar1)();
}



/* Entry: 10a085300; end: 10a08543b;  */

/* WARNING: Removing unreachable block (ram,0x00010a0854d4) */

undefined1  [16] FUN_10a085300(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined1 **ppuVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined4 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined4 uStack_110;
  undefined1 auStack_108 [24];
  undefined *puStack_b0;
  char **ppcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char *pcStack_48;
  char *pcStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = (undefined *)0x0;
  ppcStack_a8 = (char **)0xffffffff00000001;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  FUN_10a08543c(param_1,&puStack_b0);
  pcStack_40 = "callback";
  ppcStack_a8 = &pcStack_40;
  puStack_b0 = &DAT_10f68571c;
  uStack_a0 = 1;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0xffffffff;
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x00010a085d68();
  pcStack_48 = "registration";
  ppcStack_a8 = &pcStack_48;
  puStack_b0 = &DAT_10f685720;
  uStack_a0 = 1;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0xffffffff;
  uStack_58 = 0;
  uStack_50 = 0;
  ppuVar1 = &puStack_b0;
  FUN_10a086414(param_1,ppuVar1,0);
  FUN_10a08660c(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    ppuVar2 = &puStack_150;
    func_0x000109887da8(auStack_108,&UNK_10e482987,0x4e);
    puStack_148 = ppuVar1[1];
    uStack_140 = *(undefined4 *)(ppuVar1 + 2);
    puStack_130 = ppuVar1[4];
    puStack_138 = ppuVar1[3];
    puStack_120 = ppuVar1[6];
    puStack_128 = ppuVar1[5];
    puStack_118 = ppuVar1[7];
    uStack_110 = *(undefined4 *)(ppuVar1 + 8);
    puStack_150 = auStack_108;
    FUN_10a085514(param_1,&puStack_150,100);
    auVar4._8_8_ = ppuVar2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  auVar3._8_8_ = ppuVar1;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a08543c; end: 10a085513;  */

/* WARNING: Removing unreachable block (ram,0x00010a0854d4) */

undefined1  [16] FUN_10a08543c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10e482987,0x4e);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a085514(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a085514; end: 10a085617;  */

undefined1  [16] FUN_10a085514(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110b9a028;
  puVar1 = &UNK_10f630f1d;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  FUN_10a085618(param_1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110b9a028;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a085618; end: 10a08561b;  */

void FUN_10a085618(void)

{
  return;
}



/* Entry: 10a08561c; end: 10a08570f;  */

void FUN_10a08561c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  byte bStack_30;
  long lStack_28;
  
  puVar5 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  if (param_2[3] != 0) {
    plVar1 = (long *)(param_2[3] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  bStack_30 = 2;
  FUN_10a085710(param_1,&uStack_70);
  if ((ulong)bStack_30 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_30])(&uStack_70);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return;
    }
    ___stack_chk_fail();
    if ((ulong)bStack_30 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_30])(&uStack_70);
      __Unwind_Resume(puVar5);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a085710);
  (*pcVar4)();
}



/* Entry: 10a085710; end: 10a08581b;  */

void FUN_10a085710(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = (long *)0x30;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110b9fc88;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plStack_40 = plVar4 + 3;
  *plStack_40 = (long)&PTR_FUN_110c0f9b0;
  lVar5 = param_2 + 0x18;
  plStack_38 = plVar4;
  FUN_10a08581c(lVar5,&plStack_40,&plStack_40,param_3);
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (*(char *)(*(long *)(param_2 + 0x48) + 8) == '\x01') {
    (**(code **)(param_2 + 0x40))(param_2);
  }
  lVar6 = *(long *)(lVar5 + 0x18);
  uVar7 = *(undefined8 *)(lVar5 + 0x10);
  param_1[1] = *(undefined8 *)(lVar5 + 0x18);
  *param_1 = uVar7;
  if (lVar6 != 0) {
    plVar4 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10a08581c; end: 10a085a83;  */

undefined1  [16] FUN_10a08581c(long *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x25;
  undefined1 auVar12 [16];
  
  uVar3 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar11 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x25 = uVar11 & uVar5;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        unaff_x25 = uVar11 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 == uVar11) {
          if (plVar10[2] == uVar3) {
            uVar2 = 0;
            goto LAB_10a085a40;
          }
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar1 * uVar7;
          }
          if (uVar9 != unaff_x25) break;
        }
      }
    }
  }
  plVar10 = (long *)0x68;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar11;
  FUN_10a085a84(plVar10 + 2,param_3,param_4);
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar7) {
      uVar3 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    FUN_10a085af0(param_1,uVar3);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x25 = uVar7 - 1 & uVar11;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar7 <= uVar11) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar11 / uVar7;
        }
        unaff_x25 = uVar11 - uVar3 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar10 = *plVar4;
    *plVar4 = (long)plVar10;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar4;
    if (*plVar10 == 0) goto LAB_10a085a30;
    uVar3 = *(ulong *)(*plVar10 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar3 = uVar3 & uVar7 - 1;
    }
    else if (uVar7 <= uVar3) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar3 / uVar7;
      }
      uVar3 = uVar3 - uVar11 * uVar7;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar10 = *plVar4;
  }
  *plVar4 = (long)plVar10;
LAB_10a085a30:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a085a40:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 10a085a84; end: 10a085aef;  */

undefined8 * FUN_10a085a84(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puStack_28;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  puStack_28 = param_1 + 2;
  *(undefined1 *)(param_1 + 10) = 3;
  if (*(char *)(param_3 + 0x40) == '\0') {
    uVar1 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_28,param_3);
    uVar1 = *(undefined1 *)(param_3 + 0x40);
  }
  *(undefined1 *)(param_1 + 10) = uVar1;
  return param_1;
}



/* Entry: 10a085af0; end: 10a085bbf;  */

void FUN_10a085af0(long *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar10 = param_1[1];
  if (uVar10 < param_2) {
LAB_10a085b38:
    if (param_2 == 0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        if ((char)param_1[1] == '\x01') {
          if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a085d68);
            (*pcVar2)();
          }
          (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
          FUN_10a004978(param_2 + 0x10);
        }
        else if (param_2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_2);
        return;
      }
      lVar3 = param_2 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar10 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
        uVar10 = uVar10 + 1;
      } while (param_2 != uVar10);
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        uVar10 = plVar6[1];
        uVar5 = param_2 - 1;
        if ((param_2 & uVar5) == 0) {
          uVar10 = uVar10 & uVar5;
        }
        else if (param_2 <= uVar10) {
          uVar9 = 0;
          if (param_2 != 0) {
            uVar9 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar9 * param_2;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar7 = (long *)*plVar6;
        while (plVar7 != (long *)0x0) {
          uVar9 = plVar7[1];
          if ((param_2 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (param_2 <= uVar9) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar9 / param_2;
            }
            uVar9 = uVar9 - uVar1 * param_2;
          }
          plVar8 = plVar7;
          if (uVar9 != uVar10) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar9 * 8) == 0) {
              *(long **)(lVar3 + uVar9 * 8) = plVar6;
              uVar10 = uVar9;
            }
            else {
              *plVar6 = *plVar7;
              *plVar7 = **(undefined8 **)(lVar3 + uVar9 * 8);
              **(long **)(lVar3 + uVar9 * 8) = (long)plVar7;
              plVar8 = plVar6;
            }
          }
          plVar6 = plVar8;
          plVar7 = (long *)*plVar8;
        }
      }
    }
    return;
  }
  if (param_2 < uVar10) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (param_2 <= uVar5) {
      param_2 = uVar5;
    }
    if (param_2 < uVar10) goto LAB_10a085b38;
  }
  return;
}



/* Entry: 10a085bc0; end: 10a085dcb;  */

void FUN_10a085bc0(long *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      if ((char)param_1[1] == '\x01') {
        if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a085d68);
          (*pcVar2)();
        }
        (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
        FUN_10a004978(param_2 + 0x10);
      }
      else if (param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
      return;
    }
    lVar3 = param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar7;
      while (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        if ((param_2 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (param_2 <= uVar10) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar1 * param_2;
        }
        plVar9 = plVar8;
        if (uVar10 != uVar5) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + uVar10 * 8) == 0) {
            *(long **)(lVar3 + uVar10 * 8) = plVar7;
            uVar5 = uVar10;
          }
          else {
            *plVar7 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar3 + uVar10 * 8);
            **(long **)(lVar3 + uVar10 * 8) = (long)plVar8;
            plVar9 = plVar7;
          }
        }
        plVar7 = plVar9;
        plVar8 = (long *)*plVar9;
      }
    }
  }
  return;
}



/* Entry: 10a085dcc; end: 10a085e83;  */

void FUN_10a085dcc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a085e84(param_1,param_2,FUN_10a08561c,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a085e84; end: 10a085f77;  */

void FUN_10a085e84(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_80 [8];
  long *plStack_78;
  undefined1 auStack_70 [32];
  
  lVar4 = param_2;
  FUN_10a085f78(param_2,param_5);
  func_0x00010a085ff0(param_7);
  FUN_10a086014(auStack_70,param_2,param_6);
  plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(auStack_80,plVar1,auStack_70);
  FUN_10a688c1c(auStack_70);
  FUN_10a05ff7c(param_1,param_2,auStack_80);
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  return;
}



/* Entry: 10a085f78; end: 10a085faf;  */

void FUN_10a085f78(undefined *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  undefined8 extraout_x8;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar3 = param_1;
  func_0x000109898688();
  puVar4 = param_1;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = &UNK_10f68f52e;
    unaff_x30 = FUN_10a085fb0;
    func_0x00010988bd28();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_10a053854();
  if ((puVar4 != (undefined *)0x0) && (___dynamic_cast(), puVar4 != (undefined *)0x0)) {
    return;
  }
  puVar4 = &UNK_10f685496;
  func_0x00010988bd28();
  if ((int)puVar4 == 1) {
    return;
  }
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x18) = 0x10a085ff0;
  plVar5 = (long *)0x1;
  piVar9 = (int *)0x0;
  FUN_10a052ee0(1,0,puVar4);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -0x38) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(code **)((long)register0x00000008 + -0x28) = FUN_10a086014;
  if (*piVar9 == 7) {
    plVar6 = plVar5;
    (**(code **)(*plVar5 + 0x98))();
    *(long **)((long)register0x00000008 + -0x58) = plVar6;
    plVar6 = plVar5;
    (**(code **)(*plVar5 + 0x228))(plVar5,(undefined1 *)((long)register0x00000008 + -0x58));
    if ((int)plVar6 != 0) {
      plVar7 = plVar5;
      (**(code **)(*plVar5 + 0x58))();
      lVar8 = plVar7[0x48];
      if ((lVar8 == 0) ||
         (___dynamic_cast(lVar8,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar8 == 0))
      goto LAB_10a08611c;
      *(undefined8 *)((long)register0x00000008 + -0x60) =
           *(undefined8 *)((long)register0x00000008 + -0x58);
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(long **)((long)register0x00000008 + -0x70) = plVar5;
      *(undefined4 *)((long)register0x00000008 + -0x68) = 7;
      FUN_10a688ac0(extraout_x8,(undefined1 *)((long)register0x00000008 + -0x70),
                    *(undefined8 *)(lVar8 + 8));
      if ((3 < *(int *)((long)register0x00000008 + -0x68)) &&
         (*(undefined8 **)((long)register0x00000008 + -0x60) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)((long)register0x00000008 + -0x60))();
      }
    }
    if (*(undefined8 **)((long)register0x00000008 + -0x58) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)((long)register0x00000008 + -0x58))();
    }
    if (((ulong)plVar6 & 1) != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a08611c:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a08612c);
  (*pcVar2)();
}



/* Entry: 10a085fb0; end: 10a086013;  */

void FUN_10a085fb0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  undefined8 extraout_x8;
  long *plStack_70;
  int iStack_68;
  long *plStack_60;
  long *plStack_58;
  
  FUN_10a053854();
  if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
    return;
  }
  puVar2 = &UNK_10f685496;
  func_0x00010988bd28();
  if ((int)puVar2 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  piVar7 = (int *)0x0;
  FUN_10a052ee0(1,0,puVar2);
  if (*piVar7 == 7) {
    plVar4 = plVar3;
    (**(code **)(*plVar3 + 0x98))();
    plVar5 = plVar3;
    plStack_58 = plVar4;
    (**(code **)(*plVar3 + 0x228))(plVar3,&plStack_58);
    if ((int)plVar5 != 0) {
      plVar4 = plVar3;
      (**(code **)(*plVar3 + 0x58))();
      lVar6 = plVar4[0x48];
      if ((lVar6 == 0) ||
         (___dynamic_cast(lVar6,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar6 == 0))
      goto LAB_10a08611c;
      plStack_60 = plStack_58;
      plStack_58 = (long *)0x0;
      iStack_68 = 7;
      plStack_70 = plVar3;
      FUN_10a688ac0(extraout_x8,&plStack_70,*(undefined8 *)(lVar6 + 8));
      if ((3 < iStack_68) && (plStack_60 != (long *)0x0)) {
        (**(code **)*plStack_60)();
      }
    }
    if (plStack_58 != (long *)0x0) {
      (**(code **)*plStack_58)();
    }
    if (((ulong)plVar5 & 1) != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a08611c:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a08612c);
  (*pcVar1)();
}



/* Entry: 10a086014; end: 10a08614b;  */

void FUN_10a086014(undefined8 param_1,long *param_2,int *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*param_3 == 7) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
    plVar3 = param_2;
    plStack_38 = plVar2;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar3 != 0) {
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar4 = plVar2[0x48];
      if ((lVar4 == 0) ||
         (___dynamic_cast(lVar4,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar4 == 0))
      goto LAB_10a08611c;
      plStack_40 = plStack_38;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_50 = param_2;
      FUN_10a688ac0(param_1,&plStack_50,*(undefined8 *)(lVar4 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar3 & 1) != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a08611c:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a08612c);
  (*pcVar1)();
}



/* Entry: 10a08614c; end: 10a0861cb;  */

void FUN_10a08614c(long param_1)

{
  func_0x00010a086198(param_1 + 0x18);
  if (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a086188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_1);
    return;
  }
  return;
}



/* Entry: 10a0861cc; end: 10a0862a3;  */

long * FUN_10a0861cc(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
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
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
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



/* Entry: 10a0862a4; end: 10a0862f3;  */

undefined8 FUN_10a0862a4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lStack_38;
  undefined1 auStack_30 [16];
  
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    FUN_10a0862f4(&lStack_38);
    lVar1 = lStack_38;
    lStack_38 = 0;
    if (lVar1 != 0) {
      func_0x00010a085cfc(auStack_30);
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0862f4);
  (*pcVar2)();
}



/* Entry: 10a0862f4; end: 10a086413;  */

void FUN_10a0862f4(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a0863a8;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a0863a8;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10a0863a8:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10a086414; end: 10a086477;  */

ulong FUN_10a086414(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a086478);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a086478,2,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a086478; end: 10a08652f;  */

void FUN_10a086478(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
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
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a086530(param_1,param_2,FUN_10a08614c,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a086530; end: 10a08660b;  */

void FUN_10a086530(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  lVar4 = param_2;
  FUN_10a085f78(param_2,param_5);
  FUN_10a060490(param_7);
  FUN_10a0604b4(auStack_60,param_2,param_6);
  plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_60);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a08660c; end: 10a086717;  */

void FUN_10a08660c(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar8 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) == lVar8) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a08667c);
    (*pcVar6)();
  }
  uVar1 = *(undefined4 *)(lVar8 + -0x50);
  uVar3 = *(undefined4 *)(lVar8 + -0x4c);
  uVar2 = *(undefined4 *)(lVar8 + -0x48);
  uVar4 = *(undefined4 *)(lVar8 + -0x44);
  uVar5 = *(undefined4 *)(lVar8 + -0x18);
  *(long *)(param_1 + 0x170) = lVar8 + -0x68;
  uVar7 = param_1;
  FUN_10a0051e8(param_1,uVar1,uVar3,uVar5,uVar2,uVar4);
  if ((uVar7 & 1) == 0) {
    func_0x000109894f40(param_1,0);
    lVar8 = *(long *)(param_1 + 0x200);
    while (lVar8 != 0) {
      func_0x00010a054784(auStack_48,param_1 + 0x1e8);
      for (plVar9 = (long *)lStack_38; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        (*(code *)plVar9[2])(param_1);
      }
      FUN_10a0547f0(auStack_48);
      lVar8 = *(long *)(param_1 + 0x200);
    }
    return;
  }
  return;
}



/* Entry: 10a086718; end: 10a0868e7;  */

void FUN_10a086718(long *param_1,long *param_2)

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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a086938);
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



/* Entry: 10a0868e8; end: 10a086937;  */

void FUN_10a0868e8(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a086938);
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



/* Entry: 10a086938; end: 10a086b07;  */

void FUN_10a086938(long *param_1,long *param_2)

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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a086b58);
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



/* Entry: 10a086b08; end: 10a086b57;  */

void FUN_10a086b08(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a086b58);
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



/* Entry: 10a086b58; end: 10a086d27;  */

void FUN_10a086b58(long *param_1,long *param_2)

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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a086d78);
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



/* Entry: 10a086d28; end: 10a086d77;  */

void FUN_10a086d28(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a086d78);
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



/* Entry: 10a086d78; end: 10a086f47;  */

void FUN_10a086d78(long *param_1,long *param_2)

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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a086f98);
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



/* Entry: 10a086f48; end: 10a086f97;  */

void FUN_10a086f48(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a086f98);
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



/* Entry: 10a086f98; end: 10a087167;  */

void FUN_10a086f98(long *param_1,long *param_2)

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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0871b8);
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



/* Entry: 10a087168; end: 10a0871b7;  */

void FUN_10a087168(ulong param_1,long param_2)

{
  code *pcVar1;
  
  if ((param_1 & 1) != 0) {
    if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0871b8);
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



/* Entry: 10a0871b8; end: 10a087437;  */

long * FUN_10a0871b8(long *param_1)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a087238);
  (*pcVar2)();
}



/* Entry: 10a087438; end: 10a08748f;  */

long FUN_10a087438(long param_1)

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



/* Entry: 10a087490; end: 10a087623;  */

void FUN_10a087490(undefined8 *param_1,int *param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  aiStack_70[0] = 3;
  puStack_68 = (undefined8 *)(double)*param_2;
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a087624; end: 10a08765f;  */

void FUN_10a087624(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  aiStack_70[0] = 3;
  puStack_68 = (undefined8 *)(double)*(int *)(param_1 + 0x20);
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
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



/* Entry: 10a087660; end: 10a0876d3;  */

undefined8 * FUN_10a087660(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a085af0(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a0876d4(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a0876d4; end: 10a08791f;  */

undefined1  [16] FUN_10a0876d4(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x22;
  undefined1 auVar11 [16];
  long *aplStack_48 [3];
  
  uVar4 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar4 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar6 = uVar10 - 1;
    if ((uVar10 & uVar6) == 0) {
      unaff_x22 = uVar7 & uVar6;
    }
    else {
      unaff_x22 = uVar7;
      if (uVar10 <= uVar7) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar7 / uVar10;
        }
        unaff_x22 = uVar7 - uVar9 * uVar10;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar2 = (long *)*puVar8; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        uVar9 = plVar2[1];
        if (uVar9 == uVar7) {
          if (plVar2[2] == uVar4) {
            uVar3 = 0;
            goto LAB_10a0878e0;
          }
        }
        else {
          if ((uVar10 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar10 <= uVar9) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar9 / uVar10;
            }
            uVar9 = uVar9 - uVar1 * uVar10;
          }
          if (uVar9 != unaff_x22) break;
        }
      }
    }
  }
  FUN_10a087920(aplStack_48,param_1,uVar7);
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar10) {
      uVar4 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar4 = uVar4 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar10) {
      uVar4 = uVar10;
    }
    FUN_10a085af0(param_1,uVar4);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x22 = uVar10 - 1 & uVar7;
    }
    else {
      unaff_x22 = uVar7;
      if (uVar10 <= uVar7) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar7 / uVar10;
        }
        unaff_x22 = uVar7 - uVar4 * uVar10;
      }
    }
  }
  lVar5 = *param_1;
  plVar2 = *(long **)(lVar5 + unaff_x22 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 2;
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
    *(long **)(lVar5 + unaff_x22 * 8) = plVar2;
    if (*aplStack_48[0] != 0) {
      uVar4 = *(ulong *)(*aplStack_48[0] + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar4 = uVar4 & uVar10 - 1;
      }
      else if (uVar10 <= uVar4) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar4 / uVar10;
        }
        uVar4 = uVar4 - uVar7 * uVar10;
      }
      *(long **)(*param_1 + uVar4 * 8) = aplStack_48[0];
    }
  }
  else {
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
  plVar2 = aplStack_48[0];
LAB_10a0878e0:
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = plVar2;
  return auVar11;
}



/* Entry: 10a087920; end: 10a0879a3;  */

void FUN_10a087920(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a0879a4(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a0879a4; end: 10a087a3b;  */

undefined8 * FUN_10a0879a4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puStack_28;
  
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
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
  puStack_28 = param_1 + 2;
  *(undefined1 *)(param_1 + 10) = 3;
  if (*(char *)(param_2 + 10) == '\0') {
    uVar4 = 0;
  }
  else {
    FUN_10a005398(&puStack_28,param_2 + 2);
    uVar4 = *(undefined1 *)(param_2 + 10);
  }
  *(undefined1 *)(param_1 + 10) = uVar4;
  return param_1;
}



/* Entry: 10a087a3c; end: 10a087a77;  */

void FUN_10a087a3c(code **param_1,code **param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code **ppcVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  code **ppcStack_b0;
  undefined ***pppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined1 uStack_58;
  long lStack_38;
  
  if ((param_1 == (code **)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    if ((param_1 != (code **)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010a087a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**param_1)(*(undefined1 *)param_2,param_1);
      return;
    }
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar5 = param_1;
  ppcVar8 = param_2;
  FUN_10a688b40();
  if (ppcVar5 == (code **)0x0) {
    pppuVar6 = (undefined ***)0x0;
    ppcVar9 = (code **)0x0;
    if (ppcVar8 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar1 = param_1[1] + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar3) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_80 = *(undefined1 *)param_2;
      ppcVar5 = &pcStack_78;
      pcStack_78 = FUN_10a087d8c;
      ppuStack_70 = &PTR_DAT_110b9fcc8;
      uStack_90 = 0;
      uStack_88 = 0;
      ppcVar9 = &pcStack_78;
      uStack_58 = uStack_80;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      pppuVar6 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
    }
  }
  else {
    *ppcVar5 = (code *)CONCAT44((int)((ulong)*ppcVar5 >> 0x20) + 1,(int)*ppcVar5 + 1);
    pppuVar6 = (undefined ***)*param_1;
    FUN_10a087bc0(pppuVar6,param_2);
    iVar4 = *(int *)((long)ppcVar5 + 4) + -1;
    *(int *)((long)ppcVar5 + 4) = iVar4;
    ppcVar9 = param_2;
    if (iVar4 == 0) {
      *(undefined4 *)ppcVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(ppcVar5 + 1);
  func_0x00010a004dac(&uStack_90);
  pppuVar7 = pppuVar6;
  __Unwind_Resume();
  pcStack_98 = FUN_10a087bc0;
  ppcStack_b0 = ppcVar5;
  pppuStack_a8 = pppuVar6;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_c0,pppuVar7 + 1,*pppuVar7);
  func_0x000109884820(&puStack_b8,&puStack_c0,*pppuVar7);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  (**(code **)(**pppuVar7 + 0x30))(&puStack_c0);
  FUN_10a087cac(*pppuVar7,&puStack_c0,&puStack_b8,ppcVar9);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a087a78; end: 10a087bbf;  */

void FUN_10a087a78(code **param_1,code **param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code **ppcVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  code **ppcStack_b0;
  undefined ***pppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined1 uStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar5 = param_1;
  ppcVar8 = param_2;
  FUN_10a688b40();
  if (ppcVar5 == (code **)0x0) {
    pppuVar6 = (undefined ***)0x0;
    ppcVar9 = (code **)0x0;
    if (ppcVar8 != (code **)0x0) {
      pcStack_60 = param_1[1];
      pcStack_68 = *param_1;
      if (param_1[1] != (code *)0x0) {
        pcVar1 = param_1[1] + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar3) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_80 = *(undefined1 *)param_2;
      ppcVar5 = &pcStack_78;
      pcStack_78 = FUN_10a087d8c;
      ppuStack_70 = &PTR_DAT_110b9fcc8;
      uStack_90 = 0;
      uStack_88 = 0;
      ppcVar9 = &pcStack_78;
      uStack_58 = uStack_80;
      FUN_10a4634ec(ppcVar8,ppcVar9);
      pppuVar6 = &ppuStack_70;
      (*(code *)*ppuStack_70)();
    }
  }
  else {
    *ppcVar5 = (code *)CONCAT44((int)((ulong)*ppcVar5 >> 0x20) + 1,(int)*ppcVar5 + 1);
    pppuVar6 = (undefined ***)*param_1;
    FUN_10a087bc0(pppuVar6,param_2);
    iVar4 = *(int *)((long)ppcVar5 + 4) + -1;
    *(int *)((long)ppcVar5 + 4) = iVar4;
    ppcVar9 = param_2;
    if (iVar4 == 0) {
      *(undefined4 *)ppcVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(ppcVar5 + 1);
  func_0x00010a004dac(&uStack_90);
  pppuVar7 = pppuVar6;
  __Unwind_Resume();
  pcStack_98 = FUN_10a087bc0;
  ppcStack_b0 = ppcVar5;
  pppuStack_a8 = pppuVar6;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_c0,pppuVar7 + 1,*pppuVar7);
  func_0x000109884820(&puStack_b8,&puStack_c0,*pppuVar7);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  (**(code **)(**pppuVar7 + 0x30))(&puStack_c0);
  FUN_10a087cac(*pppuVar7,&puStack_c0,&puStack_b8,ppcVar9);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a087bc0; end: 10a087cab;  */

void FUN_10a087bc0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a087cac(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a087cac; end: 10a087d8b;  */

void FUN_10a087cac(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *param_4;
  aiStack_70[0] = 2;
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*param_1 + 0x58))();
  ppuStack_48 = &piStack_40;
  uStack_60 = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && ((undefined8 *)CONCAT71(uStack_67,uStack_68) != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)CONCAT71(uStack_67,uStack_68))();
  }
  return;
}


