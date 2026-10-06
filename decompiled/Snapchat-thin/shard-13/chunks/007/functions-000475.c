/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ab392a4; end: 10ab392c3;  */

void FUN_10ab392a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c48998;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab392c4; end: 10ab392d3;  */

void FUN_10ab392c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ab392cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ab392d4; end: 10ab3932b;  */

long FUN_10ab392d4(long param_1)

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



/* Entry: 10ab3932c; end: 10ab39533;  */

void FUN_10ab3932c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  uVar5 = 0x1b0;
  __Znwm(0x1b0);
  FUN_10ab2705c();
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
  FUN_10ab3972c(auStack_50,uVar5,&lStack_60);
  FUN_10ab395c8(param_1,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  lVar6 = *param_2;
  if ((lVar6 != 0) && (lStack_80 = *param_1, lStack_80 != 0)) {
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
    FUN_10aa88c30(lVar6,&lStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10ab39534; end: 10ab395c7;  */

void FUN_10ab39534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10ab39968(auStack_38,&uStack_21,&uStack_39,param_2,param_3);
  FUN_10ab395c8(param_1,auStack_38);
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



/* Entry: 10ab395c8; end: 10ab3972b;  */

void FUN_10ab395c8(long *param_1,long *param_2)

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



/* Entry: 10ab3972c; end: 10ab397c3;  */

long * FUN_10ab3972c(long *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  uVar3 = param_3[1];
  uVar2 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  *puVar1 = &PTR_DAT_110c489e8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  param_1[1] = (long)puVar1;
  FUN_10ab397c4(param_1,param_2 + 0x28,param_2);
  return param_1;
}



/* Entry: 10ab397c4; end: 10ab398e7;  */

void FUN_10ab397c4(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10ab398e8; end: 10ab39927;  */

void FUN_10ab398e8(long param_1)

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



/* Entry: 10ab39928; end: 10ab39963;  */

long FUN_10ab39928(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c48a28);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ab39964; end: 10ab39967;  */

void FUN_10ab39964(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab39968; end: 10ab399df;  */

void FUN_10ab39968(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x1c8;
  __Znwm();
  FUN_10ab399e0();
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



/* Entry: 10ab399e0; end: 10ab39a2f;  */

undefined8 *
FUN_10ab399e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c48a48;
  FUN_10ab2705c(param_1 + 3,0,param_4);
  return param_1;
}



/* Entry: 10ab39a30; end: 10ab39a3f;  */

void FUN_10ab39a30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c48a48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab39a40; end: 10ab39a5f;  */

void FUN_10ab39a40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c48a48;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab39a60; end: 10ab39a6f;  */

void FUN_10ab39a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ab39a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ab39a70; end: 10ab39c77;  */

void FUN_10ab39a70(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  uVar5 = 0x1b0;
  __Znwm(0x1b0);
  FUN_10ab27100();
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
  FUN_10ab3972c(auStack_50,uVar5,&lStack_60);
  FUN_10ab395c8(param_1,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  lVar6 = *param_2;
  if ((lVar6 != 0) && (lStack_80 = *param_1, lStack_80 != 0)) {
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
    FUN_10aa88c30(lVar6,&lStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10ab39c78; end: 10ab39d0b;  */

void FUN_10ab39c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10ab39d0c(auStack_38,&uStack_21,&uStack_39,param_2,param_3);
  FUN_10ab395c8(param_1,auStack_38);
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



/* Entry: 10ab39d0c; end: 10ab39d83;  */

void FUN_10ab39d0c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x1c8;
  __Znwm();
  FUN_10ab39d84();
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



/* Entry: 10ab39d84; end: 10ab39dd3;  */

undefined8 *
FUN_10ab39d84(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c48a48;
  FUN_10ab27100(param_1 + 3,0,param_4);
  return param_1;
}



/* Entry: 10ab39dd4; end: 10ab39de3;  */

void FUN_10ab39dd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c48a98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ab39de4; end: 10ab39e03;  */

void FUN_10ab39de4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c48a98;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab39e04; end: 10ab39e0b;  */

void FUN_10ab39e04(void)

{
  return;
}



/* Entry: 10ab39e0c; end: 10ab39e63;  */

long FUN_10ab39e0c(long param_1)

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



/* Entry: 10ab39e64; end: 10ab39e97;  */

void FUN_10ab39e64(long param_1)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  code **ppcVar9;
  code **ppcVar10;
  long lVar11;
  undefined8 *puVar12;
  code **ppcVar13;
  code *pcVar14;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  code **ppcStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined8 *apuStack_70 [6];
  code *pcStack_40;
  long lStack_38;
  long in_stack_ffffffffffffffd0;
  
  lVar11 = *(long *)(param_1 + 0x10);
  plVar8 = *(long **)(lVar11 + 0x48);
  if (plVar8 == (long *)0x0) {
    return;
  }
  ppcVar13 = (code **)(lVar11 + 8);
  if ((plVar8 != (long *)0x0) && ((char)plVar8[8] == '\x02')) {
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar5 = plVar8;
    ppcVar9 = ppcVar13;
    FUN_10a688b40();
    if (plVar5 == (long *)0x0) {
      ppcVar10 = (code **)0x0;
      ppuVar6 = (undefined8 **)0x0;
      if (ppcVar9 != (code **)0x0) {
        ppuStack_98 = (undefined8 **)plVar8[1];
        lStack_a0 = *plVar8;
        if (plVar8[1] != 0) {
          plVar8 = (long *)(plVar8[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = *plVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (*(char *)(lVar11 + 0x1f) < '\0') {
          func_0x000107c3192c(&ppuStack_90,*ppcVar13,*(undefined8 *)(lVar11 + 0x10));
        }
        else {
          uStack_88 = *(undefined8 *)(lVar11 + 0x10);
          ppuStack_90 = (undefined8 **)*ppcVar13;
          lStack_80 = *(long *)(lVar11 + 0x18);
        }
        pcStack_78 = FUN_10a05aec4;
        ppcVar13 = &pcStack_78;
        FUN_10a05af2c(apuStack_70,&PTR_FUN_110b9f388,&lStack_a0);
        ppcVar10 = &pcStack_78;
        FUN_10a4634ec(ppcVar9,ppcVar10);
        ppuVar6 = apuStack_70;
        (*(code *)*apuStack_70[0])();
        if (lStack_80 < 0) {
          ppuVar6 = ppuStack_90;
          __ZdlPv();
        }
        ppuVar7 = ppuStack_98;
        if (ppuStack_98 != (undefined8 **)0x0) {
          ppuVar1 = ppuStack_98 + 1;
          do {
            puVar12 = *ppuVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar3) {
              *ppuVar1 = (undefined8 *)((long)puVar12 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (puVar12 == (undefined8 *)0x0) {
            (*(code *)(*ppuStack_98)[2])(ppuStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppuVar6 = ppuVar7;
          }
        }
      }
    }
    else {
      *plVar5 = CONCAT44((int)((ulong)*plVar5 >> 0x20) + 1,(int)*plVar5 + 1);
      ppuVar6 = (undefined8 **)*plVar8;
      ppcVar10 = ppcVar13;
      FUN_10a05aca4(ppuVar6,ppcVar13);
      iVar4 = *(int *)((long)plVar5 + 4) + -1;
      *(int *)((long)plVar5 + 4) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)plVar5 = 0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a004dac(&lStack_a0);
    ppuVar7 = ppuVar6;
    __Unwind_Resume();
    pcStack_a8 = FUN_10a05aca4;
    ppcStack_c0 = ppcVar13;
    ppuStack_b8 = ppuVar6;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x000109884c0c(&puStack_d0,ppuVar7 + 1,*ppuVar7);
    func_0x000109884820(&puStack_c8,&puStack_d0,*ppuVar7);
    if (puStack_d0 != (undefined8 *)0x0) {
      (**(code **)*puStack_d0)();
    }
    (**(code **)(**ppuVar7 + 0x30))(&puStack_d0);
    FUN_10a05adc0(*ppuVar7,&puStack_d0,&puStack_c8,ppcVar10);
    if (puStack_d0 != (undefined8 *)0x0) {
      (**(code **)*puStack_d0)();
    }
    if (puStack_c8 != (undefined8 *)0x0) {
      (**(code **)*puStack_c8)();
    }
    return;
  }
  if ((plVar8 != (long *)0x0) && ((char)plVar8[8] == '\x01')) {
    pcVar14 = (code *)*plVar8;
    if (*(char *)(lVar11 + 0x1f) < '\0') {
      func_0x000107c3192c(&pcStack_40,*ppcVar13,*(undefined8 *)(lVar11 + 0x10));
    }
    else {
      lStack_38 = *(undefined8 *)(lVar11 + 0x10);
      pcStack_40 = *ppcVar13;
      in_stack_ffffffffffffffd0 = *(long *)(lVar11 + 0x18);
    }
    (*pcVar14)(&pcStack_40,plVar8);
    if (in_stack_ffffffffffffffd0 < 0) {
      __ZdlPv(pcStack_40);
    }
    return;
  }
  return;
}



/* Entry: 10ab39e98; end: 10ab39fff;  */

void FUN_10ab39e98(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
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
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab39fec);
    (*pcVar1)();
  }
  plVar4 = param_2;
  func_0x00010a9fdb74(param_2,param_4);
  plVar5 = param_2;
  func_0x00010a9fdb74(param_2,param_4 + 0x10);
  plVar6 = param_2;
  func_0x00010a9fdb74(param_2,param_4 + 0x20);
  plVar7 = param_2;
  func_0x00010a9fdb74(param_2,param_4 + 0x30);
  plVar14 = (long *)plVar3[9];
  if (plVar14 == (long *)0x0) {
    FUN_10a140784(plVar3 + 5);
    plVar14 = (long *)plVar3[9];
  }
  plVar3[9] = *plVar14;
  plVar14[8] = 0;
  plVar14[7] = 0;
  plVar14[6] = 0;
  plVar14[5] = 0;
  *plVar14 = (long)&PTR_FUN_110bf0a70;
  plVar14[1] = (long)plVar4;
  plVar14[2] = (long)plVar5;
  plVar14[3] = (long)plVar6;
  plVar14[4] = (long)plVar7;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar14,plVar4,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar4 = plVar3 + 0x4b;
  lVar8 = plVar3[0x59];
  uVar9 = lVar8 - 1;
  plVar3[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar4[lVar8 + 2];
    if (plVar3[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar13 = plVar3[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar16 = lVar11 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar3[0x4d];
    if ((ulong)(lVar15 - lVar13 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar10 >> 0x3c == 0) {
          lVar2 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar2 + lVar11;
          _bzero(lVar13,uVar17 * 0x10);
          lVar12 = lVar13 + uVar16 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar4 = lVar12;
          plVar3[0x4c] = lVar13 + uVar17 * 0x10;
          plVar3[0x4d] = lVar2 + uVar10 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
          lStack_70 = lVar15;
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
    _bzero(lVar13,uVar17 * 0x10);
    plVar3[0x4c] = lVar13 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar3[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar9;
  return;
}



/* Entry: 10ab3a000; end: 10ab3a0df;  */

void FUN_10ab3a000(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  float fStack_48;
  float fStack_44;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10ab3a0e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  fStack_48 = (float)(plVar2[2] - *plVar2);
  fStack_44 = (float)(plVar2[3] - plVar2[1]);
  FUN_10a07ff64(param_1,param_2,&fStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10ab3a0e0; end: 10ab3a123;  */

long * FUN_10ab3a0e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110bf0a70) {
    return param_1 + 1;
  }
  plVar5 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10ab3a0e0(plVar5,param_2);
  FUN_10a052e3c(param_4);
  lVar15 = *plVar5;
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)lVar15;
  plVar5 = plVar6 + 0x4b;
  lVar15 = plVar6[0x59];
  uVar7 = lVar15 - 1;
  plVar6[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar15 + 2];
    if (plVar6[0x5a] == uVar7) {
      return plVar5;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar7) {
      return plVar5;
    }
  }
  lVar15 = *plVar5;
  plVar11 = (long *)plVar6[0x4c];
  lVar9 = (long)plVar11 - lVar15;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar6[0x4d];
    if ((ulong)(lVar12 - (long)plVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar15 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar15)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_78 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar1 = lVar4 + lVar9;
          _bzero(lVar1,uVar14 * 0x10);
          lVar10 = lVar1 + uVar13 * -0x10;
          _memcpy(lVar10,lVar15,lVar9);
          *plVar5 = lVar10;
          plVar6[0x4c] = lVar1 + uVar14 * 0x10;
          plVar6[0x4d] = lVar4 + uVar8 * 0x10;
          plVar5 = &lStack_98;
          lStack_98 = lVar15;
          lStack_90 = lVar15;
          lStack_88 = lVar15;
          lStack_80 = lVar12;
          func_0x00010988c1b8(plVar5);
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
    plVar5 = plVar11;
    _bzero(plVar11,uVar14 * 0x10);
    plVar6[0x4c] = (long)(plVar11 + uVar14 * 2);
  }
  else if (uVar7 < uVar13) {
    plVar2 = (long *)(lVar15 + uVar7 * 0x10);
    while (plVar11 != plVar2) {
      plVar11 = plVar11 + -2;
      plVar5 = plVar11;
      func_0x00010988c204(plVar11);
    }
    plVar6[0x4c] = (long)plVar2;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar7;
  return plVar5;
}



/* Entry: 10ab3a124; end: 10ab3a1df;  */

void FUN_10ab3a124(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
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
  FUN_10ab3a0e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = *param_2;
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)lVar13;
  plVar1 = plVar4 + 0x4b;
  lVar13 = plVar4[0x59];
  uVar5 = lVar13 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar13 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar13 = *plVar1;
  lVar9 = plVar4[0x4c];
  lVar7 = lVar9 - lVar13;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = plVar4[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar13 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar13)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar13,lVar7);
          *plVar1 = lVar8;
          plVar4[0x4c] = lVar9 + uVar12 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    plVar4[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar13 = lVar13 + uVar5 * 0x10;
    while (lVar9 != lVar13) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar4[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10ab3a1e0; end: 10ab3a29f;  */

void FUN_10ab3a1e0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if (*(ulong *)((long)plVar3 + 0x2c8) < 8) {
    *(undefined8 *)((long)plVar3 + *(ulong *)((long)plVar3 + 0x2c8) * 8 + 0x270) =
         *(undefined8 *)((long)plVar3 + 0x2d0);
    *(long *)((long)plVar3 + 0x2c8) = *(long *)((long)plVar3 + 0x2c8) + 1;
  }
  else {
    func_0x00010988bfcc((long)plVar3 + 600);
  }
  plVar4 = param_2;
  func_0x00010a563e08(param_2,param_3);
  FUN_10ab0364c(param_5);
  func_0x00010a9fdb74(param_2,param_4);
  *plVar4 = (long)param_2;
  *param_1 = 0;
  plVar4 = (long *)((long)plVar3 + 600);
  lVar6 = *(long *)((long)plVar3 + 0x2c8);
  uVar7 = lVar6 - 1;
  *(ulong *)((long)plVar3 + 0x2c8) = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (*(ulong *)((long)plVar3 + 0x2d0) == uVar7) {
      return;
    }
  }
  else {
    puVar5 = (ulong *)(*(long *)((long)plVar3 + 0x2b8) + -8);
    uVar7 = *puVar5;
    *(ulong **)((long)plVar3 + 0x2b8) = puVar5;
    if (*(ulong *)((long)plVar3 + 0x2d0) == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = *(long *)((long)plVar3 + 0x260);
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = *(long *)((long)plVar3 + 0x268);
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          *(ulong *)((long)plVar3 + 0x260) = lVar11 + uVar14 * 0x10;
          *(ulong *)((long)plVar3 + 0x268) = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    *(ulong *)((long)plVar3 + 0x260) = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    *(long *)((long)plVar3 + 0x260) = lVar6;
  }
code_r0x00010988c138:
  *(ulong *)((long)plVar3 + 0x2d0) = uVar7;
  return;
}



/* Entry: 10ab3a2a0; end: 10ab3a35b;  */

void FUN_10ab3a2a0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
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
  FUN_10ab3a0e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[1];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)lVar13;
  plVar1 = plVar4 + 0x4b;
  lVar13 = plVar4[0x59];
  uVar5 = lVar13 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar13 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar13 = *plVar1;
  lVar9 = plVar4[0x4c];
  lVar7 = lVar9 - lVar13;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = plVar4[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar13 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar13)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar13,lVar7);
          *plVar1 = lVar8;
          plVar4[0x4c] = lVar9 + uVar12 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    plVar4[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar13 = lVar13 + uVar5 * 0x10;
    while (lVar9 != lVar13) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar4[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10ab3a35c; end: 10ab3a41b;  */

void FUN_10ab3a35c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a563e08(param_2,param_3);
  FUN_10ab0364c(param_5);
  func_0x00010a9fdb74(param_2,param_4);
  plVar4[1] = (long)param_2;
  *param_1 = 0;
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



/* Entry: 10ab3a41c; end: 10ab3a4d7;  */

void FUN_10ab3a41c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
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
  FUN_10ab3a0e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[2];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)lVar13;
  plVar1 = plVar4 + 0x4b;
  lVar13 = plVar4[0x59];
  uVar5 = lVar13 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar13 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar13 = *plVar1;
  lVar9 = plVar4[0x4c];
  lVar7 = lVar9 - lVar13;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = plVar4[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar13 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar13)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar13,lVar7);
          *plVar1 = lVar8;
          plVar4[0x4c] = lVar9 + uVar12 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    plVar4[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar13 = lVar13 + uVar5 * 0x10;
    while (lVar9 != lVar13) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar4[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10ab3a4d8; end: 10ab3a597;  */

void FUN_10ab3a4d8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a563e08(param_2,param_3);
  FUN_10ab0364c(param_5);
  func_0x00010a9fdb74(param_2,param_4);
  plVar4[2] = (long)param_2;
  *param_1 = 0;
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



/* Entry: 10ab3a598; end: 10ab3a653;  */

void FUN_10ab3a598(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
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
  FUN_10ab3a0e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar13 = param_2[3];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)lVar13;
  plVar1 = plVar4 + 0x4b;
  lVar13 = plVar4[0x59];
  uVar5 = lVar13 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar13 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar13 = *plVar1;
  lVar9 = plVar4[0x4c];
  lVar7 = lVar9 - lVar13;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = plVar4[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar13 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar13)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar13,lVar7);
          *plVar1 = lVar8;
          plVar4[0x4c] = lVar9 + uVar12 * 0x10;
          plVar4[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar13;
          lStack_80 = lVar13;
          lStack_78 = lVar13;
          lStack_70 = lVar10;
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
    _bzero(lVar9,uVar12 * 0x10);
    plVar4[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar13 = lVar13 + uVar5 * 0x10;
    while (lVar9 != lVar13) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    plVar4[0x4c] = lVar13;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10ab3a654; end: 10ab3a713;  */

void FUN_10ab3a654(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a563e08(param_2,param_3);
  FUN_10ab0364c(param_5);
  func_0x00010a9fdb74(param_2,param_4);
  plVar4[3] = (long)param_2;
  *param_1 = 0;
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



/* Entry: 10ab3a714; end: 10ab3a82f;  */

void FUN_10ab3a714(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  long *plVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  FUN_10ab3a830(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar16 = (long *)plVar6[9];
  if (plVar6[9] != 0) {
    plVar6 = (long *)(plVar6[9] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10a204898(param_1,param_2,&stack0xffffffffffffffb0);
  if (plVar16 != (long *)0x0) {
    plVar6 = plVar16 + 1;
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
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
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



/* Entry: 10ab3a830; end: 10ab3a897;  */

void FUN_10ab3a830(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10ab3a830(plVar5,param_2);
  FUN_10a052e3c(param_4);
  uVar9 = plVar7[0xe];
  plVar1 = (long *)plVar7[0xd];
  if (-1 < (char)*(byte *)((long)plVar7 + 0x7f)) {
    uVar9 = (ulong)*(byte *)((long)plVar7 + 0x7f);
    plVar1 = plVar7 + 0xd;
  }
  (**(code **)(*plVar5 + 0x128))(extraout_x8 + 2,plVar5,plVar1,uVar9);
  *extraout_x8 = 6;
  plVar5 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar8 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10ab3a898; end: 10ab3a977;  */

void FUN_10ab3a898(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
  plVar5 = param_2;
  FUN_10ab3a830(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[0xe];
  plVar1 = (long *)plVar5[0xd];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x7f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x7f);
    plVar1 = plVar5 + 0xd;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10ab3a978; end: 10ab3aa37;  */

void FUN_10ab3a978(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10ab3a830(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x10];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
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



/* Entry: 10ab3aa38; end: 10ab3ab87;  */

void FUN_10ab3aa38(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
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
  FUN_10ab3a830(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar5 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab3ab70);
    (*pcVar1)();
  }
  plVar8 = (long *)plVar5[9];
  if (plVar8 == (long *)0x0) {
    FUN_10a140784(plVar5 + 5);
    plVar8 = (long *)plVar5[9];
  }
  plVar5[9] = *plVar8;
  plVar8[8] = 0;
  plVar8[7] = 0;
  plVar8[6] = 0;
  plVar8[5] = 0;
  plVar8[4] = 0;
  plVar8[3] = 0;
  plVar8[2] = 0;
  plVar8[1] = 0;
  *plVar8 = (long)&PTR_FUN_110bf0a70;
  lVar12 = plVar4[4];
  lVar6 = plVar4[3];
  lVar10 = plVar4[5];
  plVar8[4] = plVar4[6];
  plVar8[3] = lVar10;
  plVar8[2] = lVar12;
  plVar8[1] = lVar6;
  FUN_10a563cd4(param_1,param_2,&stack0xffffffffffffffb0);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar5);
  }
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar12 = plVar3[0x4c];
  lVar10 = lVar12 - lVar6;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar3[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar6 >> 3;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar6)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar6,lVar10);
          *plVar4 = lVar11;
          plVar3[0x4c] = lVar12 + uVar15 * 0x10;
          plVar3[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar3[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar12 != lVar6) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10ab3ab88; end: 10ab3ac43;  */

void FUN_10ab3ab88(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10ab3a830(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 7);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10ab3ac44; end: 10ab3acff;  */

void FUN_10ab3ac44(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  float fVar14;
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
  FUN_10ab3a830(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 0x3c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
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



/* Entry: 10ab3ad00; end: 10ab3aeb3;  */

void FUN_10ab3ad00(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
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
  func_0x000109898688(param_2,param_3);
  if (plVar6 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_2;
    FUN_10a053854(param_2,plVar6);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      (**(code **)(*plVar7 + 0x48))(&lStack_70,plVar7);
      plVar6 = plStack_68;
      lStack_70 = 0;
      plStack_68 = (long *)0x0;
      func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar6 + 1;
        do {
          lVar11 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar7 = plStack_68 + 1;
        do {
          lVar11 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plVar5 + 0x4b;
      lVar11 = plVar5[0x59];
      uVar9 = lVar11 - 1;
      plVar5[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar6[lVar11 + 2];
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      else {
        uVar9 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      lVar11 = *plVar6;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar11;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar9) {
        uVar17 = uVar9 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar15 - lVar11 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar10 >> 0x3c == 0) {
              lVar4 = uVar10 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar12;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar11,lVar12);
              *plVar6 = lVar13;
              plVar5[0x4c] = lVar14 + uVar17 * 0x10;
              plVar5[0x4d] = lVar4 + uVar10 * 0x10;
              lStack_88 = lVar11;
              lStack_80 = lVar11;
              lStack_78 = lVar11;
              lStack_70 = lVar15;
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
        _bzero(lVar14,uVar17 * 0x10);
        plVar5[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar9 < uVar16) {
        lVar11 = lVar11 + uVar9 * 0x10;
        while (lVar14 != lVar11) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar9;
      return;
    }
    puVar8 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab3aea0);
  (*pcVar3)();
}



/* Entry: 10ab3aeb4; end: 10ab3af0b;  */

long FUN_10ab3aeb4(long param_1)

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



/* Entry: 10ab3af0c; end: 10ab3afd3;  */

undefined1  [16] FUN_10ab3af0c(long param_1,float *param_2,undefined4 *param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, *param_2 < *(float *)(plVar3 + 4)) {
        plVar1 = (long *)*plVar3;
        plVar4 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_10ab3af78;
      }
      if (*param_2 <= *(float *)(plVar3 + 4)) {
        uVar2 = 0;
        goto LAB_10ab3afbc;
      }
      plVar1 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar4 = plVar3 + 1;
  }
LAB_10ab3af78:
  plVar1 = (long *)0x38;
  __Znwm();
  *(undefined4 *)(plVar1 + 4) = *param_3;
  lVar5 = *param_4;
  plVar1[6] = param_4[1];
  plVar1[5] = lVar5;
  *param_4 = 0;
  param_4[1] = 0;
  FUN_10ab3afd4(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_10ab3afbc:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = plVar3;
  return auVar6;
}



/* Entry: 10ab3afd4; end: 10ab3b027;  */

void FUN_10ab3afd4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10ab3b028; end: 10ab3b0ab;  */

undefined1  [16] FUN_10ab3b028(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x13;
  auVar1._0_8_ = &UNK_10f693087;
  return auVar1;
}



/* Entry: 10ab3b0ac; end: 10ab3b10f;  */

void FUN_10ab3b0ac(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_50 = 0xffffffff00000001;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f692150;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x94;
  uStack_18 = 0xffffffff;
  FUN_10ab3b110(param_1,&uStack_58);
  FUN_10ab55758();
  return;
}



/* Entry: 10ab3b110; end: 10ab3b1e7;  */

/* WARNING: Removing unreachable block (ram,0x00010ab3b1a8) */

undefined1  [16] FUN_10ab3b110(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f693087,0x13);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab5565c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ab3b1e8; end: 10ab3b26f;  */

undefined8 * FUN_10ab3b1e8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  uVar6 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar4,uVar6);
  *param_1 = &PTR_FUN_110c49058;
  param_1[2] = &PTR_DAT_110c490f8;
  param_1[7] = &PTR_DAT_110c49150;
  lVar5 = param_3[1];
  uVar6 = *param_3;
  param_1[0x1d] = param_3[1];
  param_1[0x1c] = uVar6;
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
  return param_1;
}



/* Entry: 10ab3b270; end: 10ab3b37f;  */

undefined8 * FUN_10ab3b270(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c49058;
  param_1[2] = &PTR_DAT_110c490f8;
  param_1[7] = &PTR_DAT_110c49150;
  func_0x00010ab55814(param_1 + 0x1c);
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



/* Entry: 10ab3b380; end: 10ab3b38f;  */

void FUN_10ab3b380(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110c49058;
  *param_1 = &PTR_DAT_110c490f8;
  param_1[5] = &PTR_DAT_110c49150;
  func_0x00010ab55814(param_1 + 0x1a);
  func_0x00010aa71c88(param_1 + -2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab3b390; end: 10ab3b53f;  */

void FUN_10ab3b390(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_provider_110c49160);
  (**(code **)(*param_2 + 600))(&lStack_40,param_2,0);
  plVar3 = &lStack_50;
  if ((lStack_40 != 0) &&
     (___dynamic_cast(lStack_40,&PTR_DAT_110b9fe10,&PTR_DAT_110c67c98,0), plVar3 = &lStack_50,
     lStack_40 != 0)) {
    plStack_48 = plStack_38;
    plVar3 = &lStack_40;
    lStack_50 = lStack_40;
  }
  *plVar3 = 0;
  plVar3[1] = 0;
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  plVar3 = plStack_48;
  lVar4 = lStack_50;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar5 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar3;
  *(long *)(param_1 + 0xe0) = lVar4;
  if (plVar5 != (long *)0x0) {
    plVar3 = plVar5 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar5 = plStack_48 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  (**(code **)(*param_2 + 0x220))(param_2);
  return;
}



/* Entry: 10ab3b540; end: 10ab3b57b;  */

void FUN_10ab3b540(long param_1,long *param_2)

{
  func_0x00010aa70b70();
                    /* WARNING: Could not recover jumptable at 0x00010ab3b578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_s_provider_110c49160,*(undefined8 *)(param_1 + 0xe0))
  ;
  return;
}



/* Entry: 10ab3b57c; end: 10ab3b8cf;  */

void FUN_10ab3b57c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar3 = (long *)0x108;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c4aba0;
    plVar5 = plVar3 + 3;
    FUN_10ab3b1e8(plVar5,0,param_2 + 0xe0);
    plStack_50 = plVar5;
    plStack_48 = plVar3;
    FUN_10ab559d0(&plStack_50,plVar3 + 8,plVar5);
    FUN_10ab5586c(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10ab3b804;
    plVar5 = plStack_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar3 = plStack_48;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0xf0;
    lStack_80 = lVar7;
    plStack_78 = plVar5;
    __Znwm();
    FUN_10ab3b1e8();
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plVar4 = (long *)0x30;
    lStack_60 = lVar7;
    plStack_58 = plVar5;
    plStack_50 = plVar3;
    __Znwm();
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    *plVar4 = (long)&PTR_DAT_110c4ab40;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar5;
    plStack_48 = plVar4;
    FUN_10ab559d0(&plStack_50,plVar3 + 5,plVar3);
    FUN_10ab5586c(&plStack_90,&plStack_50);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar3 = plStack_68 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar5 = plStack_88 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar5 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar3 = plStack_48 + 1;
        do {
          lVar6 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10ab3b804;
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar3 = plStack_78;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
  }
LAB_10ab3b804:
  param_1[1] = plStack_88;
  *param_1 = plStack_90;
  return;
}



/* Entry: 10ab3b8d0; end: 10ab3b903;  */

undefined1  [16] FUN_10ab3b8d0(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(ulong *)(param_1 + 0xe0);
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)0x1;
    FUN_10a5776b4();
    uVar3 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = *puVar2;
    }
    auVar4._0_8_ = uVar1 & 0xffffffff;
    auVar4._8_8_ = uVar3;
    return auVar4;
  }
  return ZEXT816(0);
}



/* Entry: 10ab3b904; end: 10ab3ba53;  */

undefined8 FUN_10ab3b904(void)

{
  return 0x20000;
}



/* Entry: 10ab3ba54; end: 10ab3bb7b;  */

void FUN_10ab3ba54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000002;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10ab3bb7c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f692151;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ab55cac();
  FUN_10ab55f18(uVar1);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f69215a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x200000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a004eb4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f692175;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ab3bc54(param_1,&puStack_98);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10ab3bb7c; end: 10ab3bc53;  */

/* WARNING: Removing unreachable block (ram,0x00010ab3bc14) */

undefined1  [16] FUN_10ab3bb7c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f69215a,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab55bb0(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ab3bc54; end: 10ab3bcbb;  */

ulong FUN_10ab3bc54(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab3bcbc);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10ab55fd4,0,*(long *)(param_1 + 0x18) + -8);
  }
  return param_1;
}



/* Entry: 10ab3bcbc; end: 10ab3c0ff;  */

void FUN_10ab3bcbc(ulong param_1)

{
  long *plVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *extraout_x8;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plStack_140;
  long *plStack_138;
  long lStack_130;
  long *plStack_128;
  undefined8 ***apppuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000109887da8(apppuStack_c8,&UNK_10f662305,0x19);
  ppppuVar2 = (undefined8 ****)apppuStack_c8[0];
  if (-1 < cStack_b1) {
    ppppuVar2 = apppuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4dac0;
  ppppuVar3 = (undefined8 ****)&UNK_10f692150;
  if (ppppuVar2 != (undefined8 ****)0x0) {
    ppppuVar3 = ppppuVar2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppppuVar3);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x99;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  pppuStack_a0 = ppppuVar2;
  func_0x00010a052690(param_1 + 0x168,&pppuStack_a0);
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c4dac0;
    uStack_a8 = 0;
    pppuStack_a0 = (undefined8 ***)&PTR_DAT_110bc8450;
    ppuStack_98 = (undefined **)0x0;
    pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,1);
    func_0x0001098949cc(param_1,ppppuVar2,&ppuStack_b0,&pppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(apppuStack_c8[0]);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f69217c,FUN_10ab56108,0);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644824,FUN_10ab562ac,FUN_10ab56364);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f692184,FUN_10ab564e8,FUN_10ab565a0);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f692198,FUN_10ab566bc,FUN_10ab56778);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6921ae,FUN_10ab56910,FUN_10ab569fc);
  }
  uVar9 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar9 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f678e72,FUN_10ab56ab4,FUN_10ab56ba4);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar13 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar13) {
    ppuStack_98 = *(undefined ***)(lVar13 + -0x60);
    pppuStack_a0 = *(undefined8 ****)(lVar13 + -0x68);
    puStack_78 = *(undefined **)(lVar13 + -0x40);
    uVar16 = *(ulong *)(lVar13 + -0x48);
    uVar17 = *(ulong *)(lVar13 + -0x50);
    pcStack_90 = *(code **)(lVar13 + -0x58);
    uStack_68 = *(undefined8 *)(lVar13 + -0x30);
    uStack_70 = *(undefined8 *)(lVar13 + -0x38);
    uStack_58 = *(undefined8 *)(lVar13 + -0x20);
    uStack_60 = *(undefined8 *)(lVar13 + -0x28);
    uStack_40 = *(undefined8 *)(lVar13 + -8);
    uStack_48 = *(undefined8 *)(lVar13 + -0x10);
    uStack_50 = *(ulong *)(lVar13 + -0x18);
    *(long *)(param_1 + 0x170) = lVar13 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar17 >> 0x20);
    uVar6 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar16 >> 0x20);
    uVar7 = uStack_80._4_4_;
    uVar9 = param_1;
    uStack_88 = uVar17;
    uStack_80 = uVar16;
    FUN_10a0051e8(param_1,uVar17 & 0xffffffff,uVar6,uStack_50 & 0xffffffff,uVar16 & 0xffffffff,uVar7
                 );
    if ((uVar9 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&pppuStack_a0,param_1 + 0x1b8,&UNK_10f662305,0x19);
      FUN_10a05431c(param_1);
    }
    ppuStack_98 = (undefined **)0x0;
    pcStack_90 = (code *)0x0;
    pppuStack_a0 = (undefined8 ***)&UNK_10f655406;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    puStack_78 = &UNK_10f692150;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&pppuStack_a0);
    plVar11 = (long *)0x19;
    uVar9 = param_1;
    FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
    if ((uVar9 & 1) == 0) {
      pppuStack_a0 = (undefined8 ***)FUN_10ab56c5c;
      ppuStack_98 = &PTR_FUN_110c4abe0;
      pcStack_90 = FUN_10ab3c100;
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ab3c0d4;
      plVar11 = (long *)&UNK_10f692175;
      FUN_10a0544d8(param_1,&UNK_10f692175,&pppuStack_a0,1,*(long *)(param_1 + 0x18) + -8);
      (*(code *)*ppuStack_98)(&ppuStack_98);
    }
    func_0x00010a004064();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if (cStack_b1 < '\0') {
      __ZdlPv(apppuStack_c8[0]);
    }
    __Unwind_Resume();
    if (param_1 == 0) {
      plVar10 = (long *)0x190;
      __Znwm();
      plVar10[1] = 0;
      plVar10[2] = 0;
      *plVar10 = (long)&PTR_DAT_110c4acb0;
      plVar12 = plVar10 + 3;
      plStack_128 = (long *)plVar11[1];
      lStack_130 = *plVar11;
      if (plVar11[1] != 0) {
        plVar11 = (long *)(plVar11[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = *plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10ab57268(plVar12,0,&lStack_130);
      plVar11 = plStack_128;
      if (plStack_128 != (long *)0x0) {
        plVar1 = plStack_128 + 1;
        do {
          lVar13 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      plStack_140 = plVar12;
      plStack_138 = plVar10;
      FUN_10ab57314(&plStack_140,plVar10 + 8,plVar12);
      FUN_10ab57104(extraout_x8,&plStack_140);
      plVar11 = plStack_138;
      if (plStack_138 != (long *)0x0) {
        plVar12 = plStack_138 + 1;
        do {
          lVar13 = *plVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_138 + 0x10))(plStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
    }
    else {
      lVar13 = *(long *)(param_1 + 0x858);
      plVar12 = *(long **)(param_1 + 0x860);
      if (plVar12 != (long *)0x0) {
        plVar10 = plVar12 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar14 = plVar11[1];
      plVar10 = (long *)plVar11[1];
      lVar15 = *plVar11;
      plVar11 = (long *)0x178;
      __Znwm();
      if (lVar14 != 0) {
        plVar1 = (long *)(lVar14 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lStack_130 = lVar15;
      plStack_128 = plVar10;
      FUN_10ab57268(plVar11,param_1,&lStack_130);
      plVar10 = plStack_128;
      if (plStack_128 != (long *)0x0) {
        plVar1 = plStack_128 + 1;
        do {
          lVar14 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      if (plVar12 != (long *)0x0) {
        plVar10 = plVar12 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar10 = plVar12 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
      plVar10 = (long *)0x30;
      plStack_140 = plVar11;
      lStack_130 = lVar13;
      plStack_128 = plVar12;
      __Znwm();
      lStack_130 = 0;
      plStack_128 = (long *)0x0;
      *plVar10 = (long)&PTR_DAT_110c4ac50;
      plVar10[1] = 0;
      plVar10[2] = 0;
      plVar10[3] = (long)plVar11;
      plVar10[4] = lVar13;
      plVar10[5] = (long)plVar12;
      plStack_138 = plVar10;
      FUN_10ab57314(&plStack_140,plVar11 + 5,plVar11);
      FUN_10ab57104(extraout_x8,&plStack_140);
      plVar11 = plStack_138;
      if (plStack_138 != (long *)0x0) {
        plVar10 = plStack_138 + 1;
        do {
          lVar14 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_138 + 0x10))(plStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      if (plStack_128 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (plVar12 != (long *)0x0) {
        plVar11 = plVar12 + 1;
        do {
          lVar14 = *plVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      if ((lVar13 != 0) && (plVar11 = (long *)*extraout_x8, plVar11 != (long *)0x0)) {
        plStack_138 = (long *)extraout_x8[1];
        if (plStack_138 != (long *)0x0) {
          plVar10 = plStack_138 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = *plVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plStack_140 = plVar11;
        FUN_10aa88c30(lVar13,&plStack_140);
        plVar11 = plStack_138;
        if (plStack_138 != (long *)0x0) {
          plVar10 = plStack_138 + 1;
          do {
            lVar13 = *plVar10;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_138 + 0x10))(plStack_138);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
      }
      if (plVar12 != (long *)0x0) {
        plVar11 = plVar12 + 1;
        do {
          lVar13 = *plVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar12);
          return;
        }
      }
    }
    return;
  }
LAB_10ab3c0d4:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10ab3c0d8);
  (*pcVar8)();
}



/* Entry: 10ab3c100; end: 10ab3c553;  */

void FUN_10ab3c100(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  if (param_2 == 0) {
    plVar4 = (long *)0x190;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_DAT_110c4acb0;
    plVar6 = plVar4 + 3;
    plStack_48 = (long *)param_3[1];
    lStack_50 = *param_3;
    if (param_3[1] != 0) {
      plVar5 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10ab57268(plVar6,0,&lStack_50);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plStack_60 = plVar6;
    plStack_58 = plVar4;
    FUN_10ab57314(&plStack_60,plVar4 + 8,plVar6);
    FUN_10ab57104(param_1,&plStack_60);
    plVar6 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar7 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 0x858);
    plVar6 = *(long **)(param_2 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar8 = param_3[1];
    plVar5 = (long *)param_3[1];
    lVar9 = *param_3;
    plVar4 = (long *)0x178;
    __Znwm();
    if (lVar8 != 0) {
      plVar1 = (long *)(lVar8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_50 = lVar9;
    plStack_48 = plVar5;
    FUN_10ab57268(plVar4,param_2,&lStack_50);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar5 = (long *)0x30;
    plStack_60 = plVar4;
    lStack_50 = lVar7;
    plStack_48 = plVar6;
    __Znwm();
    lStack_50 = 0;
    plStack_48 = (long *)0x0;
    *plVar5 = (long)&PTR_DAT_110c4ac50;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[3] = (long)plVar4;
    plVar5[4] = lVar7;
    plVar5[5] = (long)plVar6;
    plStack_58 = plVar5;
    FUN_10ab57314(&plStack_60,plVar4 + 5,plVar4);
    FUN_10ab57104(param_1,&plStack_60);
    plVar4 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar5 = plStack_58 + 1;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (plStack_48 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar8 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lVar7 != 0) && (plVar4 = (long *)*param_1, plVar4 != (long *)0x0)) {
      plStack_58 = (long *)param_1[1];
      if (plStack_58 != (long *)0x0) {
        plVar5 = plStack_58 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_60 = plVar4;
      FUN_10aa88c30(lVar7,&plStack_60);
      plVar4 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar5 = plStack_58 + 1;
        do {
          lVar7 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar7 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
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



/* Entry: 10ab3c554; end: 10ab3c613;  */

void FUN_10ab3c554(long param_1,long *param_2)

{
  long *plVar1;
  
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c49180);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c491a0);
  *(int *)(param_1 + 0x28) = (int)plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010ab3c5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x220))(param_2);
  return;
}



/* Entry: 10ab3c614; end: 10ab3c853;  */

undefined8 *
FUN_10ab3c614(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long *param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_50;
  long *plStack_48;
  
  puVar6 = param_1;
  FUN_10aa7093c();
  *puVar6 = &PTR_FUN_110c491d0;
  puVar6[2] = &PTR_DAT_110c492a0;
  puVar6[7] = &PTR_DAT_110c492f8;
  lVar7 = *param_5;
  puVar6[0x1d] = param_5[1];
  puVar6[0x1c] = lVar7;
  *param_5 = 0;
  param_5[1] = 0;
  puVar6[0x1f] = 0;
  puVar6[0x1e] = 0;
  puVar6[0x28] = 0;
  puVar6[0x25] = 0;
  puVar6[0x24] = 0;
  puVar6[0x27] = 0;
  puVar6[0x26] = 0;
  puVar6[0x21] = 0;
  puVar6[0x20] = 0;
  puVar6[0x23] = 0;
  puVar6[0x22] = 0;
  *(undefined4 *)(puVar6 + 0x29) = 0x3f800000;
  puVar6[0x2b] = 0;
  puVar6[0x2a] = 0;
  puVar6[0x2d] = 0;
  puVar6[0x2c] = 0;
  *(undefined2 *)(puVar6 + 0x2e) = 0;
  if (puVar6[0x1c] == 0) {
    FUN_10a00946c(&UNK_10f6921c0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab3c7e8);
    (*pcVar5)();
  }
  FUN_10a7e5a88(&lStack_50,param_2);
  *(undefined1 *)(lStack_50 + 0x140) = 1;
  FUN_10a7e2f4c(puVar6 + 0x1e,&lStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  uVar8 = param_1[0x1c];
  plVar2 = (long *)param_1[0x1d];
  if (plVar2 == (long *)0x0) {
    *puVar6 = uVar8;
    puVar6[1] = 0;
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
    *puVar6 = uVar8;
    puVar6[1] = plVar2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar7 = param_1[0x1f];
  uVar8 = param_1[0x1e];
  puVar6[3] = param_1[0x1f];
  puVar6[2] = uVar8;
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
  puVar6[10] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  *(undefined4 *)(puVar6 + 0xb) = 0x3f800000;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  lVar7 = param_1[0x2d];
  param_1[0x2d] = puVar6;
  if (lVar7 != 0) {
    FUN_10ab56f1c();
  }
  return param_1;
}



/* Entry: 10ab3c854; end: 10ab3c8eb;  */

void FUN_10ab3c854(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c491d0;
  param_1[2] = &PTR_DAT_110c492a0;
  param_1[7] = &PTR_DAT_110c492f8;
  lVar1 = param_1[0x2d];
  param_1[0x2d] = 0;
  if (lVar1 != 0) {
    FUN_10ab56f1c();
  }
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  func_0x000107c2826c(param_1 + 0x25);
  puStack_28 = param_1 + 0x22;
  FUN_10a042144(&puStack_28);
  func_0x00010a2e2634(param_1 + 0x20);
  FUN_10a80be94(param_1 + 0x1e);
  FUN_10a57446c(param_1 + 0x1c);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10ab3c8ec; end: 10ab3c8ff;  */

void FUN_10ab3c8ec(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c491d0;
  param_1[2] = &PTR_DAT_110c492a0;
  param_1[7] = &PTR_DAT_110c492f8;
  lVar1 = param_1[0x2d];
  param_1[0x2d] = 0;
  if (lVar1 != 0) {
    FUN_10ab56f1c();
  }
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  func_0x000107c2826c(param_1 + 0x25);
  puStack_28 = param_1 + 0x22;
  FUN_10a042144(&puStack_28);
  func_0x00010a2e2634(param_1 + 0x20);
  FUN_10a80be94(param_1 + 0x1e);
  FUN_10a57446c(param_1 + 0x1c);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10ab3c900; end: 10ab3c943;  */

void FUN_10ab3c900(void)

{
  FUN_10ab3c854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab3c944; end: 10ab3cafb;  */

void FUN_10ab3c944(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined ***pppuStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  code *pcStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010aa70acc();
  pcStack_88 = FUN_10ab56f74;
  ppuStack_80 = &PTR_FUN_110c4abf8;
  lStack_78 = param_1;
  FUN_10a2d7b10(param_2,&PTR_DAT_110c49308,&pcStack_88,0);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  (**(code **)(*param_2 + 0x1e0))(param_2,*(undefined8 *)(param_1 + 0xe0));
  uStack_c8 = 0x10ab57018;
  ppuStack_c0 = &PTR_DAT_110c4ac10;
  plVar4 = param_2;
  lStack_b8 = param_1;
  FUN_10a80beec(param_2,&PTR_DAT_110bb3700,&uStack_c8,0);
  (*(code *)*ppuStack_c0)(&ppuStack_c0);
  if (((ulong)plVar4 & 1) == 0) {
    lVar9 = *(long *)(param_1 + 0xf0);
    FUN_10a7e5834(lVar9 + 0xf8,param_2,&PTR_DAT_110c1bb08);
    FUN_10a7e58e4(lVar9 + 0xf8,param_2,0,&PTR_DAT_110c1bb28);
  }
  pcStack_108 = FUN_10ab57044;
  ppuStack_100 = &PTR_FUN_110c4ac28;
  ppuVar8 = &PTR_DAT_110c49328;
  lStack_f8 = param_1;
  FUN_10a7e353c(param_2,&PTR_DAT_110c49328,&pcStack_108,0);
  pppuVar5 = &ppuStack_100;
  (*(code *)*ppuStack_100)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_100)(&ppuStack_100);
  pppuVar6 = pppuVar5;
  __Unwind_Resume();
  pcStack_118 = FUN_10ab3cafc;
  lStack_130 = param_1;
  pppuStack_128 = pppuVar5;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010aa70b70();
  FUN_10a2d7cdc(ppuVar8,&PTR_DAT_110c49308,pppuVar6 + 0x20,&UNK_10f64c852,0x19);
  (**(code **)(*ppuVar8 + 0x120))(ppuVar8,pppuVar6[0x1c],0);
  FUN_10a80c70c(ppuVar8,&PTR_DAT_110bb3700,pppuVar6 + 0x1e,&UNK_10f662153,0x17);
  uStack_140._0_7_ = CONCAT16(1,(undefined6)uStack_140);
  lStack_138 = (long)&uStack_140 + 6;
  ppuVar7 = pppuVar6[0x1e] + 0x23;
  FUN_10a814778(ppuVar7,(long)&uStack_140 + 6,&UNK_10dd5b8f9,&lStack_138,(long)&uStack_140 + 7);
  uStack_140 = &UNK_10f63349d;
  lStack_138 = 0xe;
  plStack_148 = (long *)ppuVar7[4];
  puStack_150 = ppuVar7[3];
  if (ppuVar7[4] != (undefined *)0x0) {
    plVar4 = (long *)(ppuVar7[4] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*ppuVar8 + 0x108))(ppuVar8,&PTR_DAT_110c49328,&puStack_150,&uStack_140);
  plVar4 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar1 = plStack_148 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10ab3cafc; end: 10ab3cbcb;  */

void FUN_10ab3cafc(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010aa70b70();
  FUN_10a2d7cdc(param_2,&PTR_DAT_110c49308,param_1 + 0x100,&UNK_10f64c852,0x19);
  (**(code **)(*param_2 + 0x120))(param_2,*(undefined8 *)(param_1 + 0xe0),0);
  FUN_10a80c70c(param_2,&PTR_DAT_110bb3700,param_1 + 0xf0,&UNK_10f662153,0x17);
  uStack_30._0_7_ = CONCAT16(1,(undefined6)uStack_30);
  lStack_28 = (long)&uStack_30 + 6;
  lVar5 = *(long *)(param_1 + 0xf0) + 0x118;
  FUN_10a814778(lVar5,(long)&uStack_30 + 6,&UNK_10dd5b8f9,&lStack_28,(long)&uStack_30 + 7);
  uStack_30 = &UNK_10f63349d;
  lStack_28 = 0xe;
  plStack_38 = *(long **)(lVar5 + 0x20);
  uStack_40 = *(undefined8 *)(lVar5 + 0x18);
  if (*(long *)(lVar5 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(lVar5 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c49328,&uStack_40,&uStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10ab3cbcc; end: 10ab3cd5f;  */

void FUN_10ab3cbcc(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  long *plStack_48;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  puStack_50 = (undefined1 *)*param_2;
  plStack_48 = (long *)param_2[1];
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (puStack_50 == (undefined1 *)0x0) {
    FUN_10a7e2ea0(&puStack_60,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0xf0));
    plVar1 = plStack_48;
    plStack_48 = plStack_58;
    puStack_50 = puStack_60;
    puStack_60 = (undefined1 *)0x0;
    plStack_58 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
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
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
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
  }
  puVar5 = puStack_50;
  uStack_32 = 1;
  puStack_60 = &uStack_32;
  lVar6 = *(long *)(param_1 + 0xf0) + 0x118;
  FUN_10a814778(lVar6,&uStack_32,&UNK_10dd5b8f9,&puStack_60,&uStack_31);
  func_0x00010a7e2008(puVar5 + 0xf8,1,lVar6 + 0x18);
  FUN_10a7e5018((long *)(param_1 + 0xf0),&puStack_50);
  FUN_10a7e5018(*(long *)(param_1 + 0x168) + 0x10,&puStack_50);
  plVar1 = plStack_48;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10ab3cd60; end: 10ab3cdaf;  */

void FUN_10ab3cd60(long *param_1)

{
  FUN_10a2e25b8(param_1 + 0x20);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    *(undefined1 *)param_1[0x2a] = 0;
    param_1[0x2b] = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x2a) = 0;
    *(undefined1 *)((long)param_1 + 0x167) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010ab3cdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}



/* Entry: 10ab3cdb0; end: 10ab3d5a7;  */

/* WARNING: Removing unreachable block (ram,0x00010ab3cec0) */
/* WARNING: Removing unreachable block (ram,0x00010ab3d0dc) */
/* WARNING: Removing unreachable block (ram,0x00010ab3d450) */
/* WARNING: Removing unreachable block (ram,0x00010ab3ced0) */

void FUN_10ab3cdb0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  undefined6 *puVar5;
  char cVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long **pplVar11;
  undefined6 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  int *piVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined4 uVar26;
  long lVar27;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  int iStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  
  if ((*(long *)(*(long *)(param_1 + 0xf0) + 0xf8) != 0) &&
     ((*(char *)(param_1 + 0x171) != '\x01' || ((*(byte *)(param_1 + 0x170) & 1) == 0)))) {
    FUN_10a7e7f20(*(undefined8 *)(param_1 + 0x168));
    if ((*(byte *)(param_1 + 0x171) & 1) != 0) {
      return;
    }
    lVar9 = *(long *)(*(long *)(param_1 + 0xf0) + 0xf8);
    if ((lVar9 == 0) || (func_0x00010aae9fd8(), lVar9 == 0)) {
      *(undefined2 *)(param_1 + 0x170) = 0;
      return;
    }
    FUN_10a08d2e0(&uStack_e0,lVar9 + 0x10);
    puVar10 = &uStack_e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar10,"/",1);
    plStack_98 = (long *)puVar10[1];
    plStack_a0 = (long *)*puVar10;
    plStack_90 = (long *)puVar10[2];
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
    uStack_a8 = CONCAT17(0xe,(undefined7)uStack_a8);
    uStack_b8 = 0x6e6f635f746f;
    uStack_b2 = 0x6966;
    uStack_b0 = 0x6e6f736a2e67;
    uStack_aa = 0;
    pplVar11 = &plStack_a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pplVar11,&uStack_b8,0xe);
    uStack_110 = SUB84(pplVar11[2],0);
    iStack_10c = (int)((ulong)pplVar11[2] >> 0x20);
    uStack_118 = SUB84(pplVar11[1],0);
    uStack_114 = (undefined4)((ulong)pplVar11[1] >> 0x20);
    uStack_120._0_4_ = SUB84(*pplVar11,0);
    uStack_120._4_4_ = (undefined4)((ulong)*pplVar11 >> 0x20);
    pplVar11[1] = (long *)0x0;
    pplVar11[2] = (long *)0x0;
    *pplVar11 = (long *)0x0;
    if (uStack_d0._7_1_ < '\0') {
      __ZdlPv(uStack_e0);
    }
    iVar8 = (int)&uStack_120;
    FUN_10ad01a04();
    if (iStack_10c < 0) {
      __ZdlPv(CONCAT44(uStack_120._4_4_,(undefined4)uStack_120));
    }
    *(ushort *)(param_1 + 0x170) = (ushort)iVar8 | 0x100;
    if (iVar8 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x100) != 0) {
      return;
    }
    FUN_10a2e2708(&uStack_120,*(undefined8 *)(param_1 + 0x50),
                  *(long *)(*(long *)(param_1 + 0xf0) + 0xf8) + 0xe0);
    FUN_10ab3cd60(param_1,&uStack_120);
    plVar1 = (long *)CONCAT44(uStack_114,uStack_118);
    if (plVar1 == (long *)0x0) {
      return;
    }
    plVar2 = plVar1 + 1;
    do {
      lVar9 = *plVar2;
      cVar6 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 != 0) {
      return;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    return;
  }
  lVar9 = *(long *)(param_1 + 0x100);
  if (lVar9 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x167) < '\0') {
    if (*(long *)(param_1 + 0x158) != 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x167) != '\0') {
    return;
  }
  func_0x00010aae9fd8();
  if (lVar9 == 0) {
    return;
  }
  FUN_10a08d2e0(auStack_138,lVar9 + 0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x150,auStack_138);
  plVar1 = (long *)(param_1 + 0x110);
  lVar9 = *(long *)(param_1 + 0x110);
  lVar22 = *(long *)(param_1 + 0x118);
  while (lVar22 != lVar9) {
    lVar22 = lVar22 + -0x80;
    FUN_10a042100(lVar22);
  }
  plVar2 = (long *)(param_1 + 0x118);
  *(long *)(param_1 + 0x118) = lVar9;
  func_0x000107c283f4(param_1 + 0x128);
  iVar8 = *(int *)(*(long *)(param_1 + 0xe0) + 0x28);
  piVar20 = (int *)&UNK_110c4a918;
  uVar23 = 0;
  do {
    for (; piVar21 = (int *)(&UNK_110c4a8b8 + uVar23 * 0x18), iVar8 <= *piVar21;
        uVar23 = uVar23 << 1 | 1) {
      piVar20 = piVar21;
      if (1 < uVar23) goto LAB_10ab3d03c;
    }
    bVar4 = uVar23 == 0;
    uVar23 = 2;
  } while (bVar4);
LAB_10ab3d03c:
  if ((piVar20 == (int *)&UNK_110c4a918) || (iVar8 < *piVar20)) {
    func_0x0001093fd0ac(&UNK_10f61d92d);
    goto LAB_10ab3d4c4;
  }
  uVar23 = *(ulong *)(piVar20 + 4);
  if (0x7ffffffffffffff7 < uVar23) {
    func_0x000109ffde50();
    goto LAB_10ab3d4c4;
  }
  uVar24 = *(undefined8 *)(piVar20 + 2);
  if (uVar23 < 0x17) {
    uStack_a8 = CONCAT17((char)uVar23,(undefined7)uStack_a8);
    puVar12 = &uStack_b8;
    if (uVar23 != 0) goto LAB_10ab3d0a4;
  }
  else {
    puVar5 = (undefined6 *)0x19;
    if ((uVar23 | 7) != 0x17) {
      puVar5 = (undefined6 *)((uVar23 | 7) + 1);
    }
    puVar12 = puVar5;
    __Znwm();
    uStack_a8 = (ulong)puVar5 | 0x8000000000000000;
    uStack_b0 = (undefined6)uVar23;
    uStack_aa = (undefined1)(uVar23 >> 0x30);
    uStack_a9 = (undefined1)(uVar23 >> 0x38);
    uStack_b8 = SUB86(puVar12,0);
    uStack_b2 = (undefined2)((ulong)puVar12 >> 0x30);
LAB_10ab3d0a4:
    _memmove(puVar12,uVar24,uVar23);
  }
  *(undefined1 *)((long)puVar12 + uVar23) = 0;
  lVar9 = *(long *)(param_1 + 0x100);
  func_0x00010a32c8a0(lVar9);
  lVar9 = lVar9 + 400;
  FUN_10a35d200(lVar9,&uStack_b8);
  if (lVar9 == 0) {
    uStack_b8 = 0;
    uStack_b2 = 0;
    uStack_b0 = 0;
    uStack_aa = 0;
    uStack_a9 = 0;
    uStack_a8 = 0;
  }
  plVar13 = *(long **)(param_1 + 0x100);
  FUN_10a32c8e0(plVar13,&uStack_b8);
  plVar14 = *(long **)(param_1 + 0x100);
  FUN_10a32c9a8(plVar14,&uStack_b8);
  plVar15 = *(long **)(param_1 + 0x100);
  FUN_10a32ca70(plVar15,&uStack_b8);
  if ((plVar13[1] - *plVar13 == plVar14[1] - *plVar14) &&
     ((plVar15[1] - *plVar15 == 0 ||
      (plVar15[1] - *plVar15 >> 6 == (plVar13[1] - *plVar13 >> 3) * -0x5555555555555555)))) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_c0 = 0x3f800000;
    lVar9 = *plVar13;
    if (plVar13[1] != lVar9) {
      lVar22 = 0;
      uVar23 = 0;
      do {
        uStack_120 = lVar9 + lVar22;
        puVar10 = &uStack_e0;
        func_0x0001092404c8(puVar10,uStack_120,&UNK_10dd5b8f9,&uStack_120,&plStack_a0);
        puVar10[5] = uVar23;
        uVar23 = uVar23 + 1;
        lVar9 = *plVar13;
        lVar22 = lVar22 + 0x18;
      } while (uVar23 < (ulong)((plVar13[1] - lVar9 >> 3) * -0x5555555555555555));
      if (plVar13[1] != lVar9) {
        lVar22 = 0;
        lVar9 = 0;
        uVar23 = 0;
        do {
          uVar18 = (plVar14[1] - *plVar14 >> 3) * -0x5555555555555555;
          if (uVar18 < uVar23 || uVar18 - uVar23 == 0) goto LAB_10ab3d4c4;
          lVar3 = *plVar14 + lVar22;
          if (*(char *)(lVar3 + 0x17) < '\0') {
            if (*(long *)(lVar3 + 8) != 0) goto LAB_10ab3d22c;
LAB_10ab3d24c:
            uVar26 = 0xffffffff;
          }
          else {
            if (*(char *)(lVar3 + 0x17) == '\0') goto LAB_10ab3d24c;
LAB_10ab3d22c:
            puVar10 = &uStack_e0;
            func_0x000109240a28(puVar10,lVar3);
            if (puVar10 == (undefined8 *)0x0) {
              FUN_109ffdddc(&UNK_10f639994);
              goto LAB_10ab3d4c4;
            }
            uVar26 = *(undefined4 *)(puVar10 + 5);
          }
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_120._4_4_ = 0;
          uStack_118 = 0;
          uStack_120._0_4_ = 0x3f800000;
          uStack_120 = 0x3f800000;
          iStack_10c = 0x3f800000;
          uStack_108 = 0;
          uStack_100 = 0;
          uStack_ec = 0;
          uStack_e8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_f8 = 0x3f800000;
          uStack_e4 = 0x3f800000;
          lVar25 = *plVar13;
          uVar18 = (plVar13[1] - lVar25 >> 3) * -0x5555555555555555;
          if (uVar18 - (plVar15[1] - *plVar15 >> 6) == 0) {
            if (uVar18 < uVar23 || uVar18 - uVar23 == 0) goto LAB_10ab3d4c4;
            puVar10 = (undefined8 *)(*plVar15 + lVar9);
            uStack_108 = puVar10[3];
            uStack_100 = puVar10[4];
            uStack_f8 = (undefined4)puVar10[5];
            uStack_f4 = (undefined4)((ulong)puVar10[5] >> 0x20);
            uStack_e8 = (undefined4)puVar10[7];
            uStack_e4 = (undefined4)((ulong)puVar10[7] >> 0x20);
            uStack_f0 = (undefined4)puVar10[6];
            uStack_ec = (undefined4)((ulong)puVar10[6] >> 0x20);
            uStack_118 = (undefined4)puVar10[1];
            uStack_114 = (undefined4)((ulong)puVar10[1] >> 0x20);
            uStack_120._0_4_ = (undefined4)*puVar10;
            uStack_120._4_4_ = (undefined4)((ulong)*puVar10 >> 0x20);
            uStack_110 = (undefined4)puVar10[2];
            iStack_10c = (int)((ulong)puVar10[2] >> 0x20);
            lVar25 = *plVar13;
            uVar18 = (plVar13[1] - lVar25 >> 3) * -0x5555555555555555;
          }
          if (uVar18 <= uVar23) goto LAB_10ab3d4c4;
          uVar18 = *(ulong *)(param_1 + 0x118);
          if (uVar18 < *(ulong *)(param_1 + 0x120)) {
            FUN_10a7fd6bc(uVar18,uVar23,lVar25 + lVar22,lVar3,uVar26,&uStack_120);
            plVar17 = (long *)(uVar18 + 0x80);
            *plVar2 = (long)plVar17;
          }
          else {
            lVar27 = uVar18 - *plVar1;
            uVar18 = (lVar27 >> 7) + 1;
            if (uVar18 >> 0x39 != 0) {
              FUN_10a041f68();
              goto LAB_10ab3d4c4;
            }
            uVar16 = *(ulong *)(param_1 + 0x120) - *plVar1;
            uVar19 = (long)uVar16 >> 6;
            if (uVar19 <= uVar18) {
              uVar19 = uVar18;
            }
            if (0x7fffffffffffff7f < uVar16) {
              uVar19 = 0x1ffffffffffffff;
            }
            plStack_80 = plVar1;
            if (uVar19 == 0) {
              plVar17 = (long *)0x0;
            }
            else {
              plVar17 = plVar1;
              FUN_10a041f7c();
            }
            lVar27 = (long)plVar17 + lVar27;
            plStack_88 = plVar17 + uVar19 * 0x10;
            plStack_a0 = plVar17;
            plStack_98 = (long *)lVar27;
            plStack_90 = (long *)lVar27;
            FUN_10a7fd6bc(lVar27,uVar23,lVar25 + lVar22,lVar3,uVar26,&uStack_120);
            plStack_90 = (long *)(lVar27 + 0x80);
            lVar27 = lVar27 + (*plVar1 - *plVar2);
            FUN_10a7fd788(plVar1,*plVar1,*plVar2,lVar27);
            plVar17 = plStack_90;
            plStack_a0 = *(long **)(param_1 + 0x110);
            *(long *)(param_1 + 0x110) = lVar27;
            uVar24 = *(undefined8 *)(param_1 + 0x120);
            *(long **)(param_1 + 0x120) = plStack_88;
            *plVar2 = (long)plStack_90;
            plStack_98 = plStack_a0;
            plStack_90 = plStack_a0;
            plStack_88 = (long *)uVar24;
            func_0x00010a7fd838(&plStack_a0);
          }
          *plVar2 = (long)plVar17;
          lVar3 = *plVar13;
          uVar18 = (plVar13[1] - lVar3 >> 3) * -0x5555555555555555;
          if (uVar18 < uVar23 || uVar18 - uVar23 == 0) goto LAB_10ab3d4c4;
          func_0x000107c2827c(param_1 + 0x128,lVar3 + lVar22,lVar3 + lVar22);
          uVar23 = uVar23 + 1;
          lVar9 = lVar9 + 0x40;
          lVar22 = lVar22 + 0x18;
        } while (uVar23 < (ulong)((plVar13[1] - *plVar13 >> 3) * -0x5555555555555555));
      }
    }
    func_0x000109240b0c(&uStack_e0);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    return;
  }
  FUN_10a00946c(&UNK_10f6921f0);
LAB_10ab3d4c4:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ab3d4c8);
  (*pcVar7)();
}



/* Entry: 10ab3d5a8; end: 10ab3d5fb;  */

void FUN_10ab3d5a8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((*(long *)(*(long *)(param_2 + 0xf0) + 0xf8) == 0) ||
     ((*(char *)(param_2 + 0x171) == '\x01' && ((*(byte *)(param_2 + 0x170) & 1) != 0)))) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar2 = *(long *)(param_2 + 0x110);
    lVar4 = *(long *)(param_2 + 0x118);
  }
  else {
    lVar4 = *(long *)(param_2 + 0x168);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    lVar2 = *(long *)(lVar4 + 0x20);
    lVar4 = *(long *)(lVar4 + 0x28);
  }
  lVar3 = lVar4 - lVar2 >> 7;
  if (lVar3 != 0) {
    FUN_10a041f30(param_1,lVar3);
    puVar1 = param_1;
    FUN_10a041fb0(param_1,lVar2,lVar4,param_1[1]);
    param_1[1] = puVar1;
  }
  return;
}



/* Entry: 10ab3d5fc; end: 10ab3d723;  */

long * FUN_10ab3d5fc(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 ***pppuVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if ((*(long *)(param_1[0x1e] + 0xf8) != 0) &&
     ((*(char *)((long)param_1 + 0x171) != '\x01' || ((*(byte *)(param_1 + 0x2e) & 1) == 0)))) {
    plVar7 = (long *)param_1[0x2d];
    if (0x7ffffffffffffff7 < param_3) {
      func_0x000109ffde50();
      if ((long)uStack_48 < 0) {
        __ZdlPv(ppuStack_58);
      }
      __Unwind_Resume();
      *plVar7 = (long)&PTR_DAT_110c1bbd0;
      lVar8 = param_2[1];
      lVar9 = *param_2;
      plVar7[2] = param_2[1];
      plVar7[1] = lVar9;
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
      *(undefined1 *)(plVar7 + 3) = 0;
      func_0x000107c2b054(plVar7 + 4,&UNK_10f678718);
      func_0x000107c2b054(plVar7 + 7,&UNK_10f678718);
      plVar7[0x1b] = 0;
      plVar7[0x1a] = 0;
      *(undefined1 *)(plVar7 + 10) = 0;
      *(undefined1 *)(plVar7 + 0xc) = 0;
      plVar7[0xe] = 0;
      plVar7[0xf] = 0;
      plVar7[0xd] = 0;
      *(undefined2 *)(plVar7 + 0x10) = 0;
      *(undefined1 *)((long)plVar7 + 0xcc) = 0;
      plVar7[0x12] = 0;
      plVar7[0x11] = 0;
      plVar7[0x14] = 0;
      plVar7[0x13] = 0;
      *(undefined1 *)(plVar7 + 0x15) = 0;
      plVar7[0x1d] = 0;
      plVar7[0x1c] = 0;
      plVar7[0x20] = 0;
      plVar7[0x1f] = 0;
      *(undefined4 *)(plVar7 + 0x1e) = 0x3f800000;
      plVar7[0x22] = 0;
      plVar7[0x21] = 0;
      *(undefined4 *)(plVar7 + 0x23) = 0x3f800000;
      plVar7[0x25] = 0;
      plVar7[0x26] = 0;
      plVar7[0x24] = 0;
      puVar6 = (undefined8 *)0x70;
      __Znwm();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_DAT_110ba7638;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[3] = &PTR_FUN_110c6ab60;
      puVar6[0xc] = 0;
      puVar6[0xd] = 0;
      puVar6[0xb] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      *(undefined4 *)(puVar6 + 10) = 0;
      plVar7[0x27] = (long)(puVar6 + 3);
      plVar7[0x28] = (long)puVar6;
      *(undefined1 *)((long)plVar7 + 0xa7) = 4;
      *(undefined4 *)(plVar7 + 0x12) = 0x646e6148;
      *(undefined1 *)((long)plVar7 + 0x94) = 0;
      return plVar7;
    }
    if (param_3 < 0x17) {
      uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
      pppuVar5 = &ppuStack_58;
      if (param_3 == 0) goto LAB_10a7e80d4;
    }
    else {
      pppuVar2 = (undefined8 ***)0x19;
      if ((param_3 | 7) != 0x17) {
        pppuVar2 = (undefined8 ***)((param_3 | 7) + 1);
      }
      pppuVar5 = pppuVar2;
      __Znwm();
      uStack_48 = (ulong)pppuVar2 | 0x8000000000000000;
      ppuStack_58 = pppuVar5;
      uStack_50 = param_3;
    }
    _memmove(pppuVar5,param_2,param_3);
LAB_10a7e80d4:
    *(undefined1 *)((long)pppuVar5 + param_3) = 0;
    plVar7 = plVar7 + 7;
    func_0x0001067e045c(plVar7,&ppuStack_58);
    if ((long)uStack_48 < 0) {
      __ZdlPv(ppuStack_58);
    }
    return (long *)(ulong)(plVar7 != (long *)0x0);
  }
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    if ((long)uStack_48 < 0) {
      __ZdlPv(ppuStack_58);
    }
    __Unwind_Resume();
    FUN_10a7e1f90(param_1[0x1e] + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x00010ab3d754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x90))(param_1);
    return param_1;
  }
  if (param_3 < 0x17) {
    uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
    pppuVar5 = &ppuStack_58;
    if (param_3 == 0) goto LAB_10ab3d6c0;
  }
  else {
    pppuVar2 = (undefined8 ***)0x19;
    if ((param_3 | 7) != 0x17) {
      pppuVar2 = (undefined8 ***)((param_3 | 7) + 1);
    }
    pppuVar5 = pppuVar2;
    __Znwm();
    uStack_48 = (ulong)pppuVar2 | 0x8000000000000000;
    ppuStack_58 = pppuVar5;
    uStack_50 = param_3;
  }
  _memmove(pppuVar5,param_2,param_3);
LAB_10ab3d6c0:
  *(undefined1 *)((long)pppuVar5 + param_3) = 0;
  param_1 = param_1 + 0x25;
  func_0x0001067e045c(param_1,&ppuStack_58);
  if ((long)uStack_48 < 0) {
    __ZdlPv(ppuStack_58);
  }
  return (long *)(ulong)(param_1 != (long *)0x0);
}



/* Entry: 10ab3d724; end: 10ab3d7cf;  */

void FUN_10ab3d724(long *param_1)

{
  FUN_10a7e1f90(param_1[0x1e] + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x00010ab3d754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}



/* Entry: 10ab3d7d0; end: 10ab3d83b;  */

undefined4 FUN_10ab3d7d0(long param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(long *)(*(long *)(param_1 + 0xf0) + 0xf8) != 0) {
    if (*(char *)(param_1 + 0x171) == '\x01') {
      if (param_2 == 2) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0x170) & 1) != 0) {
        return 0;
      }
    }
    else if (param_2 == 2) {
      return 0;
    }
    uVar1 = 0x3f3504f3;
    if (*(int *)(**(long **)(param_1 + 0x168) + 0x28) != 1) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* Entry: 10ab3d83c; end: 10ab3d8db;  */

void FUN_10ab3d83c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *param_1 = puVar1;
  param_1[2] = 0x8000000000000020;
  param_1[1] = 0x19;
  puVar1[1] = 0x696b63617254646e;
  *puVar1 = 0x61482e7465737341;
  *(undefined8 *)((long)puVar1 + 0x11) = 0x7465737341443367;
  *(undefined8 *)((long)puVar1 + 9) = 0x6e696b6361725464;
  *(undefined1 *)((long)puVar1 + 0x19) = 0;
  return;
}



/* Entry: 10ab3d8dc; end: 10ab3d97b;  */

void FUN_10ab3d8dc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  FUN_10a80d818(auStack_30);
  uVar4 = 0x28;
  __Znwm();
  FUN_10a7e5094();
  *param_1 = uVar4;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10ab3d97c; end: 10ab3d9eb;  */

undefined1  [16] FUN_10ab3d97c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10f6930a4;
  return auVar1;
}



/* Entry: 10ab3d9ec; end: 10ab3daa7;  */

void FUN_10ab3d9ec(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0xffffffff00000001;
  puStack_98 = (undefined *)0x0;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f692150;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x158;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10ab3daa8(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f69221e;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f692150;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ab575f0();
  FUN_10ab577c4(param_1);
  return;
}



/* Entry: 10ab3daa8; end: 10ab3db7f;  */

/* WARNING: Removing unreachable block (ram,0x00010ab3db40) */

undefined1  [16] FUN_10ab3daa8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6930a4,0xf);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab574f4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ab3db80; end: 10ab3dd3b;  */

undefined8 * FUN_10ab3db80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c49358;
  param_1[2] = &PTR_DAT_110c493f8;
  param_1[7] = &PTR_DAT_110c49450;
  func_0x000109380ffc(param_1 + 0x1f,*(undefined1 *)(param_1 + 0x1e));
  *param_1 = &PTR_DAT_110c46238;
  param_1[2] = &PTR_DAT_110c462d8;
  param_1[7] = &PTR_DAT_110c46330;
  FUN_10a3786c8(param_1 + 0x1c);
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



/* Entry: 10ab3dd3c; end: 10ab3ddc7;  */

void FUN_10ab3dd3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c49358;
  *param_1 = &PTR_DAT_110c493f8;
  param_1[5] = &PTR_DAT_110c49450;
  func_0x000109380ffc(param_1 + 0x1d,*(undefined1 *)(param_1 + 0x1c));
  *puVar1 = &PTR_DAT_110c46238;
  *param_1 = &PTR_DAT_110c462d8;
  param_1[5] = &PTR_DAT_110c46330;
  FUN_10a3786c8(param_1 + 0x1a);
  func_0x00010aa71c88(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab3ddc8; end: 10ab3df7b;  */

void FUN_10ab3ddc8(long param_1,long *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 ***pppuStack_e8;
  long lStack_e0;
  char cStack_d1;
  undefined8 ***pppuStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  long *aplStack_80 [2];
  char cStack_69;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0xa8))(aplStack_80,param_2,&PTR_DAT_110c49460,&DAT_10f2fb62f,2);
  plStack_40 = (long *)0x0;
  func_0x0001094749d8(auStack_90,aplStack_80,alStack_58,1,0);
  func_0x000109381b20(auStack_68,auStack_90);
  uVar1 = *(undefined1 *)(param_1 + 0xf0);
  *(undefined1 *)(param_1 + 0xf0) = auStack_68[0];
  uVar6 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = uStack_60;
  auStack_68[0] = uVar1;
  uStack_60 = uVar6;
  func_0x000109380ffc(&uStack_60);
  func_0x000109380ffc(auStack_88,auStack_90[0]);
  if (plStack_40 == alStack_58) {
    lVar7 = 0x20;
  }
  else {
    if (plStack_40 == (long *)0x0) goto LAB_10ab3deb0;
    lVar7 = 0x28;
  }
  (**(code **)(*plStack_40 + lVar7))();
LAB_10ab3deb0:
  ppuVar5 = &PTR_DAT_110c49480;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x28))(param_2,&PTR_DAT_110c49480,0);
  *(long **)(param_1 + 0x100) = plVar3;
  if (cStack_69 < '\0') {
    plVar3 = aplStack_80[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (cStack_69 < '\0') {
      __ZdlPv(aplStack_80[0]);
    }
    plVar4 = plVar3;
    __Unwind_Resume();
    pcStack_98 = FUN_10ab3df7c;
    puStack_c0 = auStack_68;
    puStack_b8 = auStack_90;
    plStack_b0 = param_2;
    plStack_a8 = plVar3;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x00010aa70b70();
    func_0x00010ab3dd9c(&pppuStack_e8,plVar4);
    lStack_c8 = (long)cStack_d1;
    pppuStack_d0 = &pppuStack_e8;
    if (lStack_c8 < 0) {
      pppuStack_d0 = pppuStack_e8;
      lStack_c8 = lStack_e0;
      if (lStack_e0 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab3e028);
        (*pcVar2)();
      }
    }
    (**(code **)(*ppuVar5 + 0x30))(ppuVar5,&PTR_DAT_110c49460,&pppuStack_d0);
    if (cStack_d1 < '\0') {
      __ZdlPv(pppuStack_e8);
    }
    (**(code **)(*ppuVar5 + 0x58))(ppuVar5,&PTR_DAT_110c49480,plVar4[0x20]);
    return;
  }
  return;
}



/* Entry: 10ab3df7c; end: 10ab3e043;  */

void FUN_10ab3df7c(long param_1,long *param_2)

{
  code *pcVar1;
  undefined8 **ppuStack_58;
  long lStack_50;
  char cStack_41;
  undefined8 **ppuStack_40;
  long lStack_38;
  
  func_0x00010aa70b70();
  func_0x00010ab3dd9c(&ppuStack_58,param_1);
  lStack_38 = (long)cStack_41;
  ppuStack_40 = &ppuStack_58;
  if (lStack_38 < 0) {
    ppuStack_40 = ppuStack_58;
    lStack_38 = lStack_50;
    if (lStack_50 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab3e028);
      (*pcVar1)();
    }
  }
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c49460,&ppuStack_40);
  if (cStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c49480,*(undefined8 *)(param_1 + 0x100));
  return;
}



/* Entry: 10ab3e044; end: 10ab3e42f;  */

void FUN_10ab3e044(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_a0 [8];
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar3 = (long *)0x120;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c4ad60;
    plVar5 = plVar3 + 3;
    FUN_10aae9d08(plVar5,0,param_2 + 0xe0);
    plVar3[3] = (long)&PTR_FUN_110c49358;
    plVar3[5] = (long)&PTR_DAT_110c493f8;
    plVar3[10] = (long)&PTR_DAT_110c49450;
    *(undefined1 *)(plVar3 + 0x21) = 0;
    plVar3[0x22] = 0;
    plVar3[0x23] = 0;
    plStack_50 = plVar5;
    plStack_48 = plVar3;
    FUN_10ab579e4(&plStack_50,plVar3 + 8,plVar5);
    FUN_10ab57880(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10ab3e314;
    plVar5 = plStack_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar3 = plStack_48;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x108;
    lStack_80 = lVar7;
    plStack_78 = plVar5;
    __Znwm();
    FUN_10aae9d08();
    *plVar3 = (long)&PTR_FUN_110c49358;
    plVar3[2] = (long)&PTR_DAT_110c493f8;
    plVar3[7] = (long)&PTR_DAT_110c49450;
    *(undefined1 *)(plVar3 + 0x1e) = 0;
    plVar3[0x1f] = 0;
    plVar3[0x20] = 0;
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plVar4 = (long *)0x30;
    lStack_60 = lVar7;
    plStack_58 = plVar5;
    plStack_50 = plVar3;
    __Znwm();
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    *plVar4 = (long)&PTR_DAT_110c4ad00;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar5;
    plStack_48 = plVar4;
    FUN_10ab579e4(&plStack_50,plVar3 + 5,plVar3);
    FUN_10ab57880(&plStack_90,&plStack_50);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar3 = plStack_68 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar5 = plStack_88 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar5 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar3 = plStack_48 + 1;
        do {
          lVar6 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10ab3e314;
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar3 = plStack_78;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
  }
LAB_10ab3e314:
  func_0x000109381b20(auStack_a0,param_2 + 0xf0);
  lVar6 = plStack_90[0x1e];
  *(undefined1 *)(plStack_90 + 0x1e) = auStack_a0[0];
  lVar7 = plStack_90[0x1f];
  plStack_90[0x1f] = lStack_98;
  auStack_a0[0] = (char)lVar6;
  lStack_98 = lVar7;
  func_0x000109380ffc(&lStack_98);
  lVar6 = *(long *)(param_2 + 0x100);
  param_1[1] = plStack_88;
  *param_1 = plStack_90;
  plStack_90[0x20] = lVar6;
  return;
}



/* Entry: 10ab3e430; end: 10ab3e737;  */

undefined1  [16] FUN_10ab3e430(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 10;
  auVar1._0_8_ = &UNK_10f6930c6;
  return auVar1;
}



/* Entry: 10ab3e738; end: 10ab3ea07;  */

void FUN_10ab3e738(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  FUN_10a003e74(param_1,&DAT_10f2f709e,0xb);
  func_0x000109887da8(appuStack_c8,&UNK_10f6930c6,10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4a6f8;
  pppuVar2 = (undefined8 ***)&UNK_10f692150;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c4a6f8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f692228,FUN_10ab57bc4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"score",FUN_10ab57ce4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f692235,FUN_10ab57da0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2f70b4,FUN_10ab57e5c,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6930c6,10);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab3e9ec);
  (*pcVar6)();
}



/* Entry: 10ab3ea08; end: 10ab3ecdf;  */

void FUN_10ab3ea08(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  FUN_10a003e74(param_1,&DAT_10f2f709e,0xb);
  func_0x000109887da8(appuStack_c8,&UNK_10f6930d1,0xe);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4a710;
  pppuVar2 = (undefined8 ***)&UNK_10f692150;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x177;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c4a710;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f692228,FUN_10ab57f28,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"score",FUN_10ab58048,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f692235,FUN_10ab58104,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2f70b4,FUN_10ab581c0,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6930d1,0xe);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab3ecc4);
  (*pcVar6)();
}



/* Entry: 10ab3ece0; end: 10ab3f017;  */

void FUN_10ab3ece0(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  FUN_10a003e74(param_1,&DAT_10f2f709e,0xb);
  func_0x000109887da8(appuStack_d8,&UNK_10f69224a,0xd);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4a728;
  pppuVar2 = (undefined8 ***)&UNK_10f692150;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c4a728;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f148,FUN_10ab5828c,FUN_10ab5836c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2d83eb,FUN_10ab58538,FUN_10ab585f4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2f7091,FUN_10ab586b4,FUN_10ab58770);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f69224a,0xd);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f69224a;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f692150;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ab3eff8;
      FUN_10a054dac(param_1,&UNK_10f692175,FUN_10ab58854,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ab3eff8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab3effc);
  (*pcVar6)();
}



/* Entry: 10ab3f018; end: 10ab3f30f;  */

void FUN_10ab3f018(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  FUN_10a003e74(param_1,&DAT_10f2f709e,0xb);
  func_0x000109887da8(appuStack_d8,&UNK_10f69226d,0x10);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4a740;
  pppuVar2 = (undefined8 ***)&UNK_10f692150;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c4a740;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f692258,FUN_10ab589ac,FUN_10ab58a68);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f692262,FUN_10ab58c1c,FUN_10ab58cd8);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f69226d,0x10);
      FUN_10a05431c(param_1);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 **)&UNK_10f69226d;
    uStack_90 = 0xffffffffffffffff;
    uStack_98 = 0x100000064;
    puStack_88 = &UNK_10f692150;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_58 = 0;
    uStack_50 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_b0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ab3f2f0;
      FUN_10a054dac(param_1,&UNK_10f692175,FUN_10ab58d98,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ab3f2f0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab3f2f4);
  (*pcVar6)();
}



/* Entry: 10ab3f310; end: 10ab3f6f3;  */

void FUN_10ab3f310(ulong param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 ***apppuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(apppuStack_c8,&DAT_10f2f709e,0xb);
  ppppuVar1 = (undefined8 ****)apppuStack_c8[0];
  if (-1 < cStack_b1) {
    ppppuVar1 = apppuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4a758;
  ppppuVar2 = (undefined8 ****)&UNK_10f692150;
  if (ppppuVar1 != (undefined8 ****)0x0) {
    ppppuVar2 = ppppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,ppppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  pppuStack_a0 = ppppuVar1;
  func_0x00010a052690(param_1 + 0x168,&pppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c4a758;
    uStack_a8 = 0;
    pppuStack_a0 = (undefined8 ***)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,ppppuVar1,&ppuStack_b0,&pppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(apppuStack_c8[0]);
  }
  ppuVar8 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if ((*ppuVar8 == (undefined *)0x0) || (0x176 < *(int *)(*(long *)(*ppuVar8 + 0xa20) + 0x18))) {
    uVar9 = 0x100;
  }
  else {
    uVar9 = 1;
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,uVar9,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab3f6d4;
    FUN_10a054dac(param_1,&UNK_10f69227e,FUN_10ab58f0c,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab3f6d4;
    FUN_10a054dac(param_1,&UNK_10f6922aa,FUN_10ab59528,4,*(undefined8 *)(param_1 + 0x40));
  }
  if ((*ppuVar8 == (undefined *)0x0) || (0x176 < *(int *)(*(long *)(*ppuVar8 + 0xa20) + 0x18))) {
    uVar9 = 0x100;
  }
  else {
    uVar9 = 1;
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,uVar9,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab3f6d4;
    FUN_10a054dac(param_1,&UNK_10f6922be,FUN_10ab599bc,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f68f148,FUN_10ab5a530,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2f70f7,FUN_10ab5a678,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2d83eb,FUN_10ab5a758,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2f7091,FUN_10ab5a814,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    pppuStack_a0 = *(undefined8 ****)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar10 = *(ulong *)(lVar3 + -0x48);
    uVar11 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar11 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar11;
    uStack_80 = uVar10;
    FUN_10a0051e8(param_1,uVar11 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar10 & 0xffffffff,uVar5
                 );
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&pppuStack_a0,param_1 + 0x1b8,&DAT_10f2f709e,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ab3f6d4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab3f6d8);
  (*pcVar6)();
}



/* Entry: 10ab3f6f4; end: 10ab3f7c3;  */

void FUN_10ab3f6f4(undefined8 param_1)

{
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  puStack_90 = (undefined1 *)0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f692150;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10ab3f7c4(param_1,&puStack_98);
  puStack_a8 = &DAT_10f69228a;
  puStack_b0 = &DAT_10f69217c;
  puStack_a0 = &DAT_10f69229a;
  puStack_98 = &UNK_10f6922d1;
  uStack_88 = 3;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f692150;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_90 = (undefined1 *)&puStack_b0;
  FUN_10ab5a9cc();
  FUN_10ab5b270(param_1);
  return;
}



/* Entry: 10ab3f7c4; end: 10ab3f89b;  */

/* WARNING: Removing unreachable block (ram,0x00010ab3f85c) */

undefined1  [16] FUN_10ab3f7c4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6930e0,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab5a8d0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ab3f89c; end: 10ab3f9b7;  */

void FUN_10ab3f89c(undefined8 param_1)

{
  undefined4 uStack_ac;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6922e0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f692150;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x113;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab3f9b8(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6922ed;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f692150;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x113;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_ac = 1;
  FUN_10ab3fa10(param_1,&puStack_a8,&uStack_ac);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6922f8;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f692150;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x113;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_ac = 2;
  FUN_10ab3fa10(param_1,&puStack_a8,&uStack_ac);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10ab3f9b8; end: 10ab3fa0f;  */

ulong FUN_10ab3f9b8(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10ab3fa10; end: 10ab3fa67;  */

ulong FUN_10ab3fa10(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10ab5b32c(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10ab3fa68; end: 10ab3fb7f;  */

void FUN_10ab3fa68(undefined8 param_1)

{
  undefined4 uStack_ac;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f692302;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f692150;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x113;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab3fb80(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f69230c;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f692150;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x113;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_ac = 0;
  FUN_10ab3fbd8(param_1,&puStack_a8,&uStack_ac);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f692314;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f692150;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x113;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_ac = 1;
  FUN_10ab3fbd8(param_1,&puStack_a8,&uStack_ac);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10ab3fb80; end: 10ab3fbd7;  */

ulong FUN_10ab3fb80(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}


