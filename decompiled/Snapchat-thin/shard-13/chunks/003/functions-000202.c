/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a39f730; end: 10a39f733;  */

undefined8 * FUN_10a39f730(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bcae40;
  if (param_1[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a39f734; end: 10a39f747;  */

void FUN_10a39f734(void)

{
  FUN_10a39f6e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a39f748; end: 10a39f887;  */

void FUN_10a39f748(long param_1,undefined1 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  *(undefined1 *)(param_1 + 0x18) = param_2;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x38);
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 != (long *)0x0)) &&
     (lStack_40 = *(long *)(param_1 + 0x30), lStack_40 != 0)) {
    func_0x00010a41ec34(&lStack_50);
    plVar4 = plStack_48;
    lVar6 = lStack_50;
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
    if (lVar6 != 0) {
      func_0x00010a41ec34(&lStack_50,lStack_40);
      *(undefined1 *)(lStack_50 + 0x5881) = *(undefined1 *)(param_1 + 0x18);
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
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
  return;
}



/* Entry: 10a39f888; end: 10a39f9cb;  */

void FUN_10a39f888(long param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar5 = *(long **)(param_1 + 0x38);
  if (((plVar5 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar5, plVar5 != (long *)0x0)) &&
     (lStack_40 = *(long *)(param_1 + 0x30), lStack_40 != 0)) {
    func_0x00010a41ec34(&puStack_50);
    plVar5 = plStack_48;
    puVar4 = puStack_50;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (puVar4 != (undefined4 *)0x0) {
      func_0x00010a41ec34(&puStack_50,lStack_40);
      *puStack_50 = param_2;
      FUN_10ad1e560();
      if (plStack_48 != (long *)0x0) {
        plVar5 = plStack_48 + 1;
        do {
          lVar6 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
  plVar5 = plStack_38;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a39f9cc; end: 10a39fb17;  */

void FUN_10a39f9cc(undefined4 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  *(undefined4 *)(param_2 + 0x20) = param_1;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = *(long **)(param_2 + 0x38);
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 != (long *)0x0)) &&
     (lStack_40 = *(long *)(param_2 + 0x30), lStack_40 != 0)) {
    func_0x00010a41ec34(&lStack_50);
    plVar4 = plStack_48;
    lVar6 = lStack_50;
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
    if (lVar6 != 0) {
      func_0x00010a41ec34(&lStack_50,lStack_40);
      *(undefined4 *)(lStack_50 + 0xc) = param_1;
      FUN_10ad1e560();
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
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
  return;
}



/* Entry: 10a39fb18; end: 10a39fc63;  */

void FUN_10a39fb18(undefined4 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  *(undefined4 *)(param_2 + 0x24) = param_1;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = *(long **)(param_2 + 0x38);
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 != (long *)0x0)) &&
     (lStack_40 = *(long *)(param_2 + 0x30), lStack_40 != 0)) {
    func_0x00010a41ec34(&lStack_50);
    plVar4 = plStack_48;
    lVar6 = lStack_50;
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
    if (lVar6 != 0) {
      func_0x00010a41ec34(&lStack_50,lStack_40);
      *(undefined4 *)(lStack_50 + 0x10) = param_1;
      FUN_10ad1e560();
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
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
  return;
}



/* Entry: 10a39fc64; end: 10a39fda7;  */

void FUN_10a39fc64(undefined4 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  *(undefined4 *)(param_2 + 0x28) = param_1;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = *(long **)(param_2 + 0x38);
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 != (long *)0x0)) &&
     (lStack_40 = *(long *)(param_2 + 0x30), lStack_40 != 0)) {
    func_0x00010a41ec34(&lStack_50);
    plVar4 = plStack_48;
    lVar6 = lStack_50;
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
    if (lVar6 != 0) {
      func_0x00010a41ec34(&lStack_50,lStack_40);
      *(undefined4 *)(lStack_50 + 0x14) = param_1;
      FUN_10ad1e560();
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
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
  return;
}



/* Entry: 10a39fda8; end: 10a39ff7b;  */

void FUN_10a39fda8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  FUN_10a39f748(param_1,*(undefined1 *)(param_1 + 0x18));
  FUN_10a39f888(param_1,*(undefined4 *)(param_1 + 0x1c));
  FUN_10a39f9cc(*(undefined4 *)(param_1 + 0x20),param_1);
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x38);
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 != (long *)0x0)) &&
     (lStack_40 = *(long *)(param_1 + 0x30), lStack_40 != 0)) {
    func_0x00010a41ec34(&lStack_50);
    plVar4 = plStack_48;
    lVar6 = lStack_50;
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
    if (lVar6 != 0) {
      func_0x00010a41ec34(&lStack_50,lStack_40);
      *(undefined4 *)(lStack_50 + 0x10) = uVar7;
      FUN_10ad1e560();
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
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
  return;
}



/* Entry: 10a39ff7c; end: 10a39ff7f;  */

undefined8 * FUN_10a39ff7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bcaf18;
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a39ff80; end: 10a39ff93;  */

void FUN_10a39ff80(void)

{
  func_0x00010a39ff30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a39ff94; end: 10a3a00d3;  */

void FUN_10a39ff94(long param_1,undefined1 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  *(undefined1 *)(param_1 + 0x18) = param_2;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x30);
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 != (long *)0x0)) &&
     (lStack_40 = *(long *)(param_1 + 0x28), lStack_40 != 0)) {
    func_0x00010a41ec34(&lStack_50);
    plVar4 = plStack_48;
    lVar6 = lStack_50;
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
    if (lVar6 != 0) {
      func_0x00010a41ec34(&lStack_50,lStack_40);
      *(undefined1 *)(lStack_50 + 0x5883) = *(undefined1 *)(param_1 + 0x18);
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
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
  return;
}



/* Entry: 10a3a00d4; end: 10a3a023f;  */

void FUN_10a3a00d4(undefined4 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  *(undefined4 *)(param_2 + 0x1c) = param_1;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar4 = *(long **)(param_2 + 0x30);
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar4, plVar4 != (long *)0x0)) &&
     (lStack_50 = *(long *)(param_2 + 0x28), lStack_50 != 0)) {
    func_0x00010a41ec34(&lStack_60);
    plVar4 = plStack_58;
    lVar6 = lStack_60;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (lVar6 != 0) {
      func_0x00010a41ec34(&lStack_60,lStack_50);
      fVar8 = *(float *)(param_2 + 0x1c);
      *(float *)(lStack_60 + 0x34) = fVar8;
      fVar7 = *(float *)(lStack_60 + 0x3c);
      _cosf();
      fVar7 = (fVar7 * fVar8 + 1.0) / (fVar8 + 1.0);
      _powf(fVar7,*(undefined4 *)(lStack_60 + 0x38));
      *(float *)(lStack_60 + 0x30) = fVar7;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
    }
  }
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a3a0240; end: 10a3a03af;  */

void FUN_10a3a0240(undefined4 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  *(undefined4 *)(param_2 + 0x20) = param_1;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar4 = *(long **)(param_2 + 0x30);
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar4, plVar4 != (long *)0x0)) &&
     (lStack_50 = *(long *)(param_2 + 0x28), lStack_50 != 0)) {
    func_0x00010a41ec34(&lStack_60);
    plVar4 = plStack_58;
    lVar6 = lStack_60;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (lVar6 != 0) {
      func_0x00010a41ec34(&lStack_60,lStack_50);
      uVar8 = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(lStack_60 + 0x38) = uVar8;
      fVar9 = *(float *)(lStack_60 + 0x34);
      fVar7 = *(float *)(lStack_60 + 0x3c);
      _cosf();
      fVar7 = (fVar7 * fVar9 + 1.0) / (fVar9 + 1.0);
      _powf(fVar7,uVar8);
      *(float *)(lStack_60 + 0x30) = fVar7;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
    }
  }
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a3a03b0; end: 10a3a04bf;  */

void FUN_10a3a03b0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  FUN_10a39ff94(param_1,*(undefined1 *)(param_1 + 0x18));
  FUN_10a3a00d4(*(undefined4 *)(param_1 + 0x1c),param_1);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x30);
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar4, plVar4 != (long *)0x0)) &&
     (lStack_50 = *(long *)(param_1 + 0x28), lStack_50 != 0)) {
    func_0x00010a41ec34(&lStack_60);
    plVar4 = plStack_58;
    lVar6 = lStack_60;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (lVar6 != 0) {
      func_0x00010a41ec34(&lStack_60,lStack_50);
      uVar8 = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(lStack_60 + 0x38) = uVar8;
      fVar9 = *(float *)(lStack_60 + 0x34);
      fVar7 = *(float *)(lStack_60 + 0x3c);
      _cosf();
      fVar7 = (fVar7 * fVar9 + 1.0) / (fVar9 + 1.0);
      _powf(fVar7,uVar8);
      *(float *)(lStack_60 + 0x30) = fVar7;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
    }
  }
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a3a04c0; end: 10a3a04c3;  */

undefined8 * FUN_10a3a04c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bcafd0;
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a3a04c4; end: 10a3a04d7;  */

void FUN_10a3a04c4(void)

{
  func_0x00010a3a0474();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a04d8; end: 10a3a0617;  */

void FUN_10a3a04d8(long param_1,undefined1 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  *(undefined1 *)(param_1 + 0x18) = param_2;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x28);
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 != (long *)0x0)) &&
     (lStack_40 = *(long *)(param_1 + 0x20), lStack_40 != 0)) {
    func_0x00010a41ec34(&lStack_50);
    plVar4 = plStack_48;
    lVar6 = lStack_50;
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
    if (lVar6 != 0) {
      func_0x00010a41ec34(&lStack_50,lStack_40);
      *(undefined1 *)(lStack_50 + 0x5884) = *(undefined1 *)(param_1 + 0x18);
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
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
  return;
}



/* Entry: 10a3a0618; end: 10a3a0767;  */

void FUN_10a3a0618(undefined4 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  *(undefined4 *)(param_2 + 0x1c) = param_1;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = *(long **)(param_2 + 0x28);
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 != (long *)0x0)) &&
     (lStack_40 = *(long *)(param_2 + 0x20), lStack_40 != 0)) {
    func_0x00010a41ec34(&lStack_50);
    plVar4 = plStack_48;
    lVar6 = lStack_50;
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
    if (lVar6 != 0) {
      func_0x00010a41ec34(&lStack_50,lStack_40);
      uVar7 = NEON_fminnm(param_1,0x42c80000);
      *(undefined4 *)(lStack_50 + 0x50) = uVar7;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
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
  return;
}



/* Entry: 10a3a0768; end: 10a3a07b3;  */

undefined8 * FUN_10a3a0768(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bcb028;
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a3a07b4; end: 10a3a07b7;  */

undefined8 * FUN_10a3a07b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bcb028;
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a3a07b8; end: 10a3a07cb;  */

void FUN_10a3a07b8(void)

{
  FUN_10a3a0768();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a07cc; end: 10a3a090b;  */

void FUN_10a3a07cc(long param_1,undefined1 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  *(undefined1 *)(param_1 + 0x18) = param_2;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x28);
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 != (long *)0x0)) &&
     (lStack_40 = *(long *)(param_1 + 0x20), lStack_40 != 0)) {
    func_0x00010a41ec34(&lStack_50);
    plVar4 = plStack_48;
    lVar6 = lStack_50;
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
    if (lVar6 != 0) {
      func_0x00010a41ec34(&lStack_50,lStack_40);
      *(undefined1 *)(lStack_50 + 0x5885) = *(undefined1 *)(param_1 + 0x18);
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
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
  return;
}



/* Entry: 10a3a090c; end: 10a3a0957;  */

undefined8 * FUN_10a3a090c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bcb0a0;
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a3a0958; end: 10a3a095b;  */

undefined8 * FUN_10a3a0958(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bcb0a0;
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a3a095c; end: 10a3a096f;  */

void FUN_10a3a095c(void)

{
  FUN_10a3a090c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a0970; end: 10a3a0aaf;  */

void FUN_10a3a0970(long param_1,undefined1 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  *(undefined1 *)(param_1 + 0x18) = param_2;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x28);
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 != (long *)0x0)) &&
     (lStack_40 = *(long *)(param_1 + 0x20), lStack_40 != 0)) {
    func_0x00010a41ec34(&lStack_50);
    plVar4 = plStack_48;
    lVar6 = lStack_50;
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
    if (lVar6 != 0) {
      func_0x00010a41ec34(&lStack_50,lStack_40);
      *(undefined1 *)(lStack_50 + 0x5886) = *(undefined1 *)(param_1 + 0x18);
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
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
  return;
}



/* Entry: 10a3a0ab0; end: 10a3a0cd3;  */

undefined8 * FUN_10a3a0ab0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bcb118;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bcf398;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = &PTR_FUN_110bcae40;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined4 *)((long)puVar1 + 0x34) = 2;
  puVar1[7] = 0x42c8000000000000;
  *(undefined4 *)(puVar1 + 8) = 0x3a83126f;
  puVar1[9] = 0;
  puVar1[10] = 0;
  param_1[4] = puVar1 + 3;
  param_1[5] = puVar1;
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bcf3e8;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = &PTR_FUN_110bcaf18;
  *(undefined1 *)(puVar1 + 6) = 0;
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)((long)puVar1 + 0x34) = uVar2;
  puVar1[8] = 0;
  puVar1[9] = 0;
  param_1[6] = puVar1 + 3;
  param_1[7] = puVar1;
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bcf438;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = &PTR_FUN_110bcafd0;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x34) = 0;
  *(undefined4 *)((long)puVar1 + 0x44) = 0;
  param_1[8] = puVar1 + 3;
  param_1[9] = puVar1;
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bcf488;
  puVar1[3] = &PTR_FUN_110bcb028;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  param_1[10] = puVar1 + 3;
  param_1[0xb] = puVar1;
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bcf4d8;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = &PTR_FUN_110bcb0a0;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  param_1[0xc] = puVar1 + 3;
  param_1[0xd] = puVar1;
  return param_1;
}



/* Entry: 10a3a0cd4; end: 10a3a0d47;  */

undefined8 * FUN_10a3a0cd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bcb118;
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a3bd384(param_1 + 0xc);
  func_0x00010a3bd32c(param_1 + 10);
  func_0x00010a3bd2d4(param_1 + 8);
  func_0x00010a3bd27c(param_1 + 6);
  func_0x00010a3bd224(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a3a0d48; end: 10a3a0d4b;  */

undefined8 * FUN_10a3a0d48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bcb118;
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a3bd384(param_1 + 0xc);
  func_0x00010a3bd32c(param_1 + 10);
  func_0x00010a3bd2d4(param_1 + 8);
  func_0x00010a3bd27c(param_1 + 6);
  func_0x00010a3bd224(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a3a0d4c; end: 10a3a0d5f;  */

void FUN_10a3a0d4c(void)

{
  FUN_10a3a0cd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a0d60; end: 10a3a0f1b;  */

void FUN_10a3a0d60(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  uVar9 = param_2[1];
  uVar8 = *param_2;
  if (param_2[1] != 0) {
    plVar4 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar9;
  *(undefined8 *)(param_1 + 0x70) = uVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar5 = *(long *)(param_1 + 0x20);
  uVar9 = param_2[1];
  uVar8 = *param_2;
  if (param_2[1] != 0) {
    plVar4 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = *(long *)(lVar5 + 0x38);
  *(undefined8 *)(lVar5 + 0x38) = uVar9;
  *(undefined8 *)(lVar5 + 0x30) = uVar8;
  if (lVar6 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar5 = *(long *)(param_1 + 0x30);
  uVar9 = param_2[1];
  uVar8 = *param_2;
  if (param_2[1] != 0) {
    plVar4 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = *(long *)(lVar5 + 0x30);
  *(undefined8 *)(lVar5 + 0x30) = uVar9;
  *(undefined8 *)(lVar5 + 0x28) = uVar8;
  if (lVar6 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar5 = *(long *)(param_1 + 0x40);
  uVar9 = param_2[1];
  uVar8 = *param_2;
  if (param_2[1] != 0) {
    plVar4 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = *(long *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar9;
  *(undefined8 *)(lVar5 + 0x20) = uVar8;
  if (lVar6 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar5 = *(long *)(param_1 + 0x50);
  uVar9 = param_2[1];
  uVar8 = *param_2;
  if (param_2[1] != 0) {
    plVar4 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = *(long *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar9;
  *(undefined8 *)(lVar5 + 0x20) = uVar8;
  if (lVar6 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar5 = *(long *)(param_1 + 0x60);
  uVar9 = param_2[1];
  uVar8 = *param_2;
  if (param_2[1] != 0) {
    plVar4 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = *(long *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar9;
  *(undefined8 *)(lVar5 + 0x20) = uVar8;
  if (lVar6 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a3a0f1c(param_1,*(undefined1 *)(param_1 + 0x18));
  FUN_10a39fda8(*(undefined8 *)(param_1 + 0x20));
  FUN_10a3a03b0(*(undefined8 *)(param_1 + 0x30));
  lVar5 = *(long *)(param_1 + 0x40);
  FUN_10a3a04d8(lVar5,*(undefined1 *)(lVar5 + 0x18));
  FUN_10a3a0618(*(undefined4 *)(lVar5 + 0x1c),lVar5);
  FUN_10a3a07cc(*(long *)(param_1 + 0x50),*(undefined1 *)(*(long *)(param_1 + 0x50) + 0x18));
  lVar5 = *(long *)(param_1 + 0x60);
  *(undefined1 *)(lVar5 + 0x18) = *(undefined1 *)(lVar5 + 0x18);
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = *(long **)(lVar5 + 0x28);
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 != (long *)0x0)) &&
     (lStack_40 = *(long *)(lVar5 + 0x20), lStack_40 != 0)) {
    func_0x00010a41ec34(&lStack_50);
    plVar4 = plStack_48;
    lVar6 = lStack_50;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (lVar6 != 0) {
      func_0x00010a41ec34(&lStack_50,lStack_40);
      *(undefined1 *)(lStack_50 + 0x5886) = *(undefined1 *)(lVar5 + 0x18);
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
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
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
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
  return;
}



/* Entry: 10a3a0f1c; end: 10a3a108b;  */

void FUN_10a3a0f1c(long param_1,undefined1 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  *(undefined1 *)(param_1 + 0x18) = param_2;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x78);
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 != (long *)0x0)) &&
     (lVar6 = *(long *)(param_1 + 0x70), lStack_40 = lVar6, lVar6 != 0)) {
    if (*(char *)(param_1 + 0x18) == '\x01') {
      if (*(long *)(lVar6 + 0x220) == 0) {
        *(undefined1 *)(lVar6 + 0x280) = 1;
      }
      else {
        FUN_10a41dae8(lVar6);
      }
    }
    func_0x00010a41ec34(&lStack_50,lVar6);
    plVar4 = plStack_48;
    lVar6 = lStack_50;
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
    if (lVar6 != 0) {
      func_0x00010a41ec34(&lStack_50,lStack_40);
      *(undefined1 *)(lStack_50 + 0x5880) = *(undefined1 *)(param_1 + 0x18);
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
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
  return;
}



/* Entry: 10a3a108c; end: 10a3a122b;  */

void FUN_10a3a108c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bcb160,0);
  FUN_10a3a0f1c(param_1,plVar5);
  func_0x00010a39fdec(*(undefined8 *)(param_1 + 0x20),param_2);
  func_0x00010a3a03e8(*(undefined8 *)(param_1 + 0x30),param_2);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bcb070,0);
  FUN_10a3a07cc(uVar8,plVar5);
  lVar7 = *(long *)(param_1 + 0x60);
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bcb0e8,0);
  *(char *)(lVar7 + 0x18) = (char)param_2;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar5 = *(long **)(lVar7 + 0x28);
  if (((plVar5 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar5, plVar5 != (long *)0x0)) &&
     (lStack_40 = *(long *)(lVar7 + 0x20), lStack_40 != 0)) {
    func_0x00010a41ec34(&lStack_50);
    plVar5 = plStack_48;
    lVar4 = lStack_50;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (lVar4 != 0) {
      func_0x00010a41ec34(&lStack_50,lStack_40);
      *(undefined1 *)(lStack_50 + 0x5886) = *(undefined1 *)(lVar7 + 0x18);
      if (plStack_48 != (long *)0x0) {
        plVar5 = plStack_48 + 1;
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
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
  }
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a3a122c; end: 10a3a12f3;  */

undefined1  [16] FUN_10a3a122c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10f652e7f;
  return auVar1;
}



/* Entry: 10a3a12f4; end: 10a3a13a7;  */

void FUN_10a3a12f4(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0xffffffff00000002;
  puStack_88 = (undefined *)0x0;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  puStack_70 = &UNK_10f651d0b;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x8f;
  uStack_48 = CONCAT44(uStack_48._4_4_,0x13c);
  FUN_10a3a13a8(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f652874;
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a3bd618();
  FUN_10a3bd794(param_1);
  return;
}



/* Entry: 10a3a13a8; end: 10a3a147f;  */

/* WARNING: Removing unreachable block (ram,0x00010a3a1440) */

undefined1  [16] FUN_10a3a13a8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f652e7f,0x19);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a3bd51c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a3a1480; end: 10a3a1707;  */

void FUN_10a3a1480(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar10 = param_2;
    uVar9 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar8 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar8 = (long *)(param_4 + 0x20);
    }
    uVar9 = *puVar4;
    lVar10 = *plVar8;
  }
  lVar11 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar11);
  FUN_10a3bd850(lVar11,lVar10,uVar9);
  plVar8 = (long *)0x28;
  __Znwm();
  plVar12 = plVar8 + 1;
  *plVar12 = 0;
  *plVar8 = (long)&PTR_FUN_110bcf528;
  plVar8[2] = 0;
  plVar8[3] = lVar11;
  plVar8[4] = (long)FUN_10a3df8cc;
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 0x30) == 0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = *plVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(long *)(lVar11 + 0x28) = lVar11;
      *(long **)(lVar11 + 0x30) = plVar8;
    }
    else {
      if (*(long *)(*(long *)(lVar11 + 0x30) + 8) != -1) goto LAB_10a3a15e4;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = *plVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(long *)(lVar11 + 0x28) = lVar11;
      *(long **)(lVar11 + 0x30) = plVar8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar10 = *plVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
LAB_10a3a15e4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar11 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar11 + 0x180) & 0xfffc;
  *(ushort *)(lVar11 + 0x180) = uVar3 | *(ushort *)(lVar11 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar11 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar8 != (long *)0x0) {
    plVar12 = plVar8 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = *plVar12 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lStack_50 = lVar11;
  plStack_48 = plVar8;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar12 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar10 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  lVar5 = *(long *)(param_2 + 0x1f8);
  for (lVar10 = *(long *)(param_2 + 0x1f0); lVar10 != lVar5; lVar10 = lVar10 + 0xc) {
    FUN_10a0efe48(lVar11 + 0x1f0,lVar10);
  }
  *param_1 = lVar11;
  param_1[1] = (long)plVar8;
  return;
}



/* Entry: 10a3a1708; end: 10a3a183f;  */

void FUN_10a3a1708(long param_1,long *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  undefined1 uStack_69;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  ulong uStack_30;
  byte bStack_28;
  
  func_0x00010a3c7a18();
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0x1f0);
  (**(code **)(*param_2 + 0x1d8))(&uStack_38,param_2,&PTR_s_points_110bcb478);
  if ((bStack_28 & 1) == 0) {
    uStack_69 = 6;
    uStack_80 = 0x6e696f70;
    uStack_7c = 0x7374;
    uStack_7a = 0;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_68,&UNK_10f63b9fc,&uStack_80);
    FUN_10a012db0(auStack_50,auStack_68,&UNK_10f63ba05);
    FUN_10a0029c0(auStack_50);
  }
  else {
    uVar2 = uStack_30 / 0xc;
    if (uStack_30 % 0xc != 0) {
      uVar2 = uVar2 + 1;
    }
    func_0x0001096b5198(param_1 + 0x1f0,uVar2);
    if ((bStack_28 & 1) != 0) {
      _memcpy(*(undefined8 *)(param_1 + 0x1f0),uStack_38,uStack_30);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3a17f4);
  (*pcVar1)();
}



/* Entry: 10a3a1840; end: 10a3a192f;  */

void FUN_10a3a1840(long param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  FUN_10a3c7928();
  uVar2 = (*(long *)(param_1 + 0x1f8) - (long)*(undefined8 **)(param_1 + 0x1f0) >> 2) *
          -0x5555555555555555;
  fVar4 = 0.0;
  if (1 < uVar2) {
    lVar3 = uVar2 - 1;
    puVar1 = *(undefined8 **)(param_1 + 0x1f0);
    do {
      fVar5 = *(float *)((long)puVar1 + 0x14) - *(float *)(puVar1 + 1);
      uVar7 = *(undefined8 *)((long)puVar1 + 0xc);
      fVar6 = (float)uVar7 - (float)*puVar1;
      fVar8 = (float)((ulong)uVar7 >> 0x20) - (float)((ulong)*puVar1 >> 0x20);
      fVar4 = fVar4 + SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar5 * fVar5);
      lVar3 = lVar3 + -1;
      puVar1 = (undefined8 *)((long)puVar1 + 0xc);
    } while (lVar3 != 0);
  }
  (**(code **)(*param_2 + 0x60))(fVar4,param_2,&PTR_DAT_110bcb498);
  (**(code **)(*param_2 + 0x50))
            (param_2,&PTR_DAT_110bcb4b8,
             (int)((ulong)(*(long *)(param_1 + 0x1f8) - *(long *)(param_1 + 0x1f0)) >> 2) *
             -0x55555555);
                    /* WARNING: Could not recover jumptable at 0x00010a3a192c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_s_points_110bcb478,*(long *)(param_1 + 0x1f0),
             *(long *)(param_1 + 0x1f8) - *(long *)(param_1 + 0x1f0));
  return;
}



/* Entry: 10a3a1930; end: 10a3a19fb;  */

undefined1  [16] FUN_10a3a1930(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f652ea6;
  return auVar1;
}



/* Entry: 10a3a19fc; end: 10a3a1b23;  */

void FUN_10a3a19fc(undefined8 param_1)

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
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000002;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f651d0b;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f651d0b;
  uStack_58 = CONCAT44(uStack_58._4_4_,0x13c);
  FUN_10a3a1b24(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f65287e;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f651d0b;
  uStack_38 = 0;
  FUN_10a3bdad4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f652885;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f651d0b;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f651d0b;
  uStack_38 = 0;
  FUN_10a3bdfb4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f652892;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f651d0b;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f651d0b;
  uStack_38 = 0;
  FUN_10a3be19c(param_1,&puStack_98);
  FUN_10a3be384(param_1);
  return;
}



/* Entry: 10a3a1b24; end: 10a3a1bfb;  */

/* WARNING: Removing unreachable block (ram,0x00010a3a1bbc) */

undefined1  [16] FUN_10a3a1b24(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f652ea6,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a3bd9d8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a3a1bfc; end: 10a3a1c8b;  */

void FUN_10a3a1bfc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  param_1[0x43] = &PTR_FUN_110c383b8;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  *(undefined2 *)(param_1 + 0x46) = 0x100;
  FUN_10a3c575c(param_1,&PTR_PTR_110bcb7c0,param_2,param_3);
  *param_1 = &PTR_DAT_110bcb4f0;
  param_1[2] = &PTR_FUN_110bcb608;
  param_1[7] = &PTR_DAT_110bcb660;
  param_1[0xd] = &PTR_DAT_110bcb680;
  param_1[0x43] = &PTR_DAT_110bcb780;
  param_1[0x16] = &PTR_DAT_110bcb6f0;
  param_1[0x17] = &PTR_DAT_110bcb720;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3e] = 0;
  uVar1 = NEON_fmov(0x3f800000,4);
  param_1[0x41] = uVar1;
  *(undefined4 *)(param_1 + 0x42) = 1;
  return;
}



/* Entry: 10a3a1c8c; end: 10a3a242f;  */

void FUN_10a3a1c8c(float param_1,float param_2,float param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  float fStack_118;
  long lStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  float fStack_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  long lStack_90;
  long *plStack_88;
  
  if ((*(int *)(param_4 + 0x210) == 0) ||
     (*(int *)(*(long *)(*(long *)(param_4 + 0x170) + 0xa20) + 0x18) < 0x54)) {
    plVar11 = *(long **)(param_4 + 0x1f8);
    if (plVar11 == (long *)0x0) {
      return;
    }
    __ZNSt3__119__shared_weak_count4lockEv();
    fStack_108 = SUB84(plVar11,0);
    fStack_104 = (float)((ulong)plVar11 >> 0x20);
    if (plVar11 == (long *)0x0) {
      return;
    }
    lVar13 = *(long *)(param_4 + 0x1f0);
    lStack_110 = lVar13;
    if (lVar13 != 0) {
      if (*(char *)(lVar13 + 0x288) == '\0') {
        lVar12 = *(long *)(param_4 + 0x178);
        fVar14 = *(float *)(lVar12 + 0x94);
        fVar15 = *(float *)(lVar12 + 0x98);
        fVar16 = *(float *)(lVar12 + 0x9c);
        if (*(char *)(lVar13 + 0x2f0) == '\x01') {
          FUN_10a42b498(lVar13);
          *(undefined1 *)(lVar13 + 0x2f0) = 0;
        }
        lVar12 = 200;
        if (*(ulong *)(lVar13 + 0x4d0) < 2) {
          lVar12 = 0x1e0;
        }
        lVar13 = lVar13 + lVar12;
        uVar31 = *(undefined8 *)(lVar13 + 0x310);
        uVar28 = *(undefined8 *)(lVar13 + 800);
        uVar20 = *(undefined8 *)(lVar13 + 0x330);
        uVar17 = *(undefined8 *)(lVar13 + 0x340);
        func_0x0001094f5708(&uStack_d0,lVar13 + 0x308);
        fVar10 = fStack_94;
        fVar9 = fStack_98;
        fVar8 = fStack_9c;
        fVar7 = fStack_a0;
        fVar34 = fStack_a4;
        fVar33 = fStack_a8;
        fVar6 = fStack_ac;
        fVar5 = fStack_b0;
        fVar32 = fStack_b4;
        fVar30 = fStack_b8;
        fVar29 = fStack_bc;
        fVar27 = fStack_c0;
        fVar26 = fStack_c4;
        fVar25 = fStack_c8;
        uVar24 = uStack_d0;
        uVar21 = *(undefined8 *)(lVar13 + 0x390);
        uVar18 = *(undefined8 *)(lVar13 + 0x3a0);
        uVar22 = *(undefined8 *)(lVar13 + 0x3b0);
        uVar19 = *(undefined8 *)(lVar13 + 0x3c0);
        func_0x0001094f5708(&uStack_d0,lVar13 + 0x388);
        fVar23 = (float)uVar31 * fVar14 + (float)uVar28 * fVar15 +
                 (float)uVar20 * fVar16 + (float)uVar17;
        fVar16 = (float)((ulong)uVar31 >> 0x20) * fVar14 + (float)((ulong)uVar28 >> 0x20) * fVar15 +
                 (float)((ulong)uVar20 >> 0x20) * fVar16 + (float)((ulong)uVar17 >> 0x20);
        fVar25 = fVar25 * 0.0 + fVar30 * 0.0 + fVar23 * fVar33 + fVar16 * fVar9;
        fVar26 = fVar26 * 0.0 + fVar32 * 0.0 + fVar34 * fVar23 + fVar10 * fVar16;
        fVar14 = fVar25 / fVar26;
        uVar20 = NEON_rev64(CONCAT44(fStack_c0,(float)uStack_d0),4);
        uVar28 = NEON_rev64(CONCAT44(fStack_bc,uStack_d0._4_4_),4);
        uVar31 = NEON_rev64(CONCAT44(fStack_b8,fStack_c8),4);
        uVar17 = NEON_rev64(CONCAT44(fStack_b4,fStack_c4),4);
        fVar33 = *(float *)(param_4 + 0x200);
        fVar34 = *(float *)(param_4 + 0x204);
        fVar15 = (float)uVar24 * 0.0 + fVar27 * 0.0 + fVar5 * fVar23 + fVar7 * fVar16;
        fVar16 = (float)((ulong)uVar24 >> 0x20) * 0.0 + fVar29 * 0.0 +
                 fVar6 * fVar23 + fVar8 * fVar16;
        fVar25 = ((float)uVar21 * fVar15 + (float)uVar18 * fVar16 +
                 (float)uVar22 * fVar25 + (float)uVar19 * fVar26) /
                 ((float)((ulong)uVar21 >> 0x20) * fVar15 + (float)((ulong)uVar18 >> 0x20) * fVar16
                 + (float)((ulong)uVar22 >> 0x20) * fVar25 + (float)((ulong)uVar19 >> 0x20) * fVar26
                 );
        fStack_a0 = fStack_b0 * fVar25 + fStack_a0;
        fStack_9c = fStack_ac * fVar25 + fStack_9c;
        fStack_98 = fStack_a8 * fVar25 + fStack_98;
        fStack_94 = fStack_a4 * fVar25 + fStack_94;
        fVar15 = fVar15 / fVar26;
        fVar16 = fVar16 / fVar26;
        fVar25 = (float)uVar17 + fStack_c4 * 0.0 + fStack_94;
        fStack_94 = (float)((ulong)uVar17 >> 0x20) + fStack_b4 * 0.0 + fStack_94;
        fVar27 = ((float)uVar20 + (float)uStack_d0 * 0.0 + fStack_a0) / fVar25 - fVar15;
        fVar29 = ((float)((ulong)uVar20 >> 0x20) + fStack_c0 * 0.0 + fStack_a0) / fStack_94 - fVar15
        ;
        fVar30 = ((float)uVar28 + uStack_d0._4_4_ * 0.0 + fStack_9c) / fVar25 - fVar16;
        fVar32 = ((float)((ulong)uVar28 >> 0x20) + fStack_bc * 0.0 + fStack_9c) / fStack_94 - fVar16
        ;
        fVar25 = ((float)uVar31 + fStack_c8 * 0.0 + fStack_98) / fVar25 - fVar14;
        fVar26 = ((float)((ulong)uVar31 >> 0x20) + fStack_b8 * 0.0 + fStack_98) / fStack_94 - fVar14
        ;
        lStack_90 = CONCAT44(fVar30 * fVar34 + fVar16 + fVar32 * fVar33,
                             fVar27 * fVar34 + fVar15 + fVar29 * fVar33);
        plStack_88 = (long *)CONCAT44(plStack_88._4_4_,fVar34 * fVar25 + fVar14 + fVar33 * fVar26);
        FUN_10a3e3894(*(undefined8 *)(param_4 + 0x178),&lStack_90);
        uVar24 = NEON_rev64(*(undefined8 *)(param_4 + 0x208),4);
        fVar14 = SQRT(fVar25 * fVar25 + fVar27 * fVar27 + fVar30 * fVar30) * (float)uVar24;
        fVar15 = SQRT(fVar26 * fVar26 + fVar29 * fVar29 + fVar32 * fVar32) *
                 (float)((ulong)uVar24 >> 0x20);
        uStack_120 = NEON_rev64(CONCAT44(fVar15 + fVar15,fVar14 + fVar14),4);
        fStack_118 = 1.0;
        FUN_10a3e814c(*(undefined8 *)(param_4 + 0x178),&uStack_120);
        plVar11 = (long *)CONCAT44(fStack_104,fStack_108);
        if (plVar11 == (long *)0x0) {
          return;
        }
      }
      else if (*(char *)(lVar13 + 0x288) == '\x01') {
        FUN_10a396080(lVar13);
        fStack_c8 = *(float *)(*(long *)(param_4 + 0x178) + 0x9c);
        uVar24 = NEON_fmov(0x3f800000,4);
        uStack_d0 = CONCAT44(param_2 * -0.5 +
                             (param_2 * 0.5 - param_2 * -0.5) *
                             ((float)((ulong)*(undefined8 *)(param_4 + 0x200) >> 0x20) +
                             (float)((ulong)uVar24 >> 0x20)) * 0.5,
                             param_1 * -0.5 +
                             (param_1 * 0.5 - param_1 * -0.5) *
                             ((float)*(undefined8 *)(param_4 + 0x200) + (float)uVar24) * 0.5);
        FUN_10a3e3894(*(long *)(param_4 + 0x178),&uStack_d0);
        lStack_90 = CONCAT44(param_2 * (float)((ulong)*(undefined8 *)(param_4 + 0x208) >> 0x20) +
                             0.0,param_1 * (float)*(undefined8 *)(param_4 + 0x208) + 0.0);
        plStack_88 = (long *)CONCAT44(plStack_88._4_4_,0x3f800000);
        FUN_10a3e814c(*(undefined8 *)(param_4 + 0x178),&lStack_90);
      }
    }
    plVar1 = plVar11 + 1;
    do {
      lVar13 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 != 0) {
      return;
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  else {
    plVar11 = *(long **)(param_4 + 0x1f8);
    if (plVar11 == (long *)0x0) {
      return;
    }
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar11 == (long *)0x0) {
      return;
    }
    lVar13 = *(long *)(param_4 + 0x1f0);
    lStack_90 = lVar13;
    plStack_88 = plVar11;
    if (lVar13 != 0) {
      if (*(char *)(lVar13 + 0x2f0) == '\x01') {
        FUN_10a42b498(lVar13);
        *(undefined1 *)(lVar13 + 0x2f0) = 0;
      }
      lVar12 = 200;
      if (*(ulong *)(lVar13 + 0x4d0) < 2) {
        lVar12 = 0x1e0;
      }
      lVar12 = lVar13 + 0x2f8 + lVar12;
      func_0x0001094f5708(&uStack_d0,lVar12 + 0x10);
      if (*(char *)(lVar13 + 0x2f0) == '\x01') {
        FUN_10a42b498(lVar13);
        *(undefined1 *)(lVar13 + 0x2f0) = 0;
      }
      lVar2 = 200;
      if (*(ulong *)(lVar13 + 0x4d0) < 2) {
        lVar2 = 0x1e0;
      }
      func_0x0001094f5708(&lStack_110,lVar13 + 0x2f8 + lVar2 + 0x90);
      FUN_10a2cd058(*(undefined8 *)(param_4 + 0x178));
      fVar16 = param_1 * *(float *)(lVar12 + 0x18) + param_2 * *(float *)(lVar12 + 0x28) +
               param_3 * *(float *)(lVar12 + 0x38) + *(float *)(lVar12 + 0x48);
      fVar26 = param_1 * *(float *)(lVar12 + 0x1c) + param_2 * *(float *)(lVar12 + 0x2c) +
               param_3 * *(float *)(lVar12 + 0x3c) + *(float *)(lVar12 + 0x4c);
      fVar15 = *(float *)(lVar13 + 0x260) + 1.0;
      fVar25 = *(float *)(lVar13 + 0x264);
      fVar14 = fVar25;
      if (fVar15 <= fVar25) {
        fVar14 = fVar15;
      }
      fVar15 = fVar14;
      if (fVar14 <= fVar25 + -1.0) {
        fVar15 = fVar25 + -1.0;
      }
      fVar25 = -fVar15;
      if (-fVar15 <= fVar16) {
        fVar25 = fVar16;
      }
      fVar15 = -fVar14;
      if (fVar25 <= -fVar14) {
        fVar15 = fVar25;
      }
      fStack_118 = fStack_c8 * 0.0 + fStack_b8 * 0.0 + fVar15 * fStack_a8 + fVar26 * fStack_98;
      fVar14 = fStack_c4 * 0.0 + fStack_b4 * 0.0 + fVar15 * fStack_a4 + fVar26 * fStack_94;
      fVar16 = (float)uStack_d0 * 0.0 + fStack_c0 * 0.0 + fStack_b0 * fVar15 + fStack_a0 * fVar26;
      fVar15 = (float)((ulong)uStack_d0 >> 0x20) * 0.0 + fStack_bc * 0.0 +
               fStack_ac * fVar15 + fStack_9c * fVar26;
      fVar14 = ((float)*(undefined8 *)(lVar12 + 0x98) * fVar16 +
                (float)*(undefined8 *)(lVar12 + 0xa8) * fVar15 +
               (float)*(undefined8 *)(lVar12 + 0xb8) * fStack_118 +
               (float)*(undefined8 *)(lVar12 + 200) * fVar14) /
               ((float)((ulong)*(undefined8 *)(lVar12 + 0x98) >> 0x20) * fVar16 +
                (float)((ulong)*(undefined8 *)(lVar12 + 0xa8) >> 0x20) * fVar15 +
               (float)((ulong)*(undefined8 *)(lVar12 + 0xb8) >> 0x20) * fStack_118 +
               (float)((ulong)*(undefined8 *)(lVar12 + 200) >> 0x20) * fVar14);
      fVar27 = (float)uStack_f0 * fVar14 + (float)uStack_e0;
      fVar29 = (float)((ulong)uStack_f0 >> 0x20) * fVar14 + (float)((ulong)uStack_e0 >> 0x20);
      fStack_d8 = fStack_e8 * fVar14 + fStack_d8;
      fStack_d4 = fStack_e4 * fVar14 + fStack_d4;
      fVar14 = (float)((ulong)lStack_110 >> 0x20);
      uVar24 = NEON_rev64(CONCAT44(fStack_f4,fStack_104),4);
      fVar25 = fStack_104 * 0.0 + (float)uVar24 + fStack_d4;
      fStack_d4 = fStack_f4 * 0.0 + (float)((ulong)uVar24 >> 0x20) + fStack_d4;
      uVar17 = NEON_rev64(CONCAT44(fStack_d4,fVar25),4);
      fVar32 = (float)((ulong)uVar17 >> 0x20);
      fVar25 = ((float)lStack_110 * 0.0 + fStack_100 + fVar27) / fVar25 - fVar16;
      fVar26 = (fStack_fc * 0.0 + fVar14 + fVar29) / fStack_d4 - fVar15;
      fVar27 = ((float)lStack_110 + fStack_100 * 0.0 + fVar27) / (float)uVar17 - fVar16;
      fVar29 = (fStack_fc + fVar14 * 0.0 + fVar29) / fVar32 - fVar15;
      uVar24 = *(undefined8 *)(param_4 + 0x200);
      uVar18 = NEON_rev64(uVar24,4);
      fVar30 = (float)((ulong)uVar24 >> 0x20);
      uStack_120 = CONCAT44(fVar15 + (float)((ulong)uVar18 >> 0x20) * fVar26 + fVar30 * fVar29,
                            fVar16 + (float)uVar18 * fVar25 + (float)uVar24 * fVar27);
      fVar14 = (fStack_108 + fStack_f8 * 0.0 + fStack_d8) / (float)uVar17 - fStack_118;
      fVar15 = (fStack_f8 + fStack_108 * 0.0 + fStack_d8) / fVar32 - fStack_118;
      fStack_118 = fStack_118 + (float)uVar24 * fVar14 + fVar30 * fVar15;
      uVar24 = NEON_rev64(CONCAT44(fVar26 * fVar26,fVar25 * fVar25),4);
      fVar14 = (float)*(undefined8 *)(param_4 + 0x208) *
               SQRT(fVar14 * fVar14 + (float)uVar24 + fVar27 * fVar27);
      fVar15 = (float)((ulong)*(undefined8 *)(param_4 + 0x208) >> 0x20) *
               SQRT(fVar15 * fVar15 + (float)((ulong)uVar24 >> 0x20) + fVar29 * fVar29);
      uStack_130 = CONCAT44(fVar15 + fVar15,fVar14 + fVar14);
      uStack_128 = 0x3f800000;
      FUN_10a3e8ad4(*(undefined8 *)(param_4 + 0x178),&uStack_120);
      FUN_10a3e857c(*(undefined8 *)(param_4 + 0x178),&uStack_130);
      if (plStack_88 == (long *)0x0) {
        return;
      }
    }
    plVar11 = plStack_88;
    plVar1 = plStack_88 + 1;
    do {
      lVar13 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 != 0) {
      return;
    }
    (**(code **)(*plStack_88 + 0x10))(plStack_88);
  }
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  return;
}



/* Entry: 10a3a2430; end: 10a3a2437;  */

void FUN_10a3a2430(float param_1,float param_2,float param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  float fStack_118;
  long lStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  float fStack_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  long lStack_90;
  long *plStack_88;
  
  if ((*(int *)(param_4 + 0x1a8) == 0) ||
     (*(int *)(*(long *)(*(long *)(param_4 + 0x108) + 0xa20) + 0x18) < 0x54)) {
    plVar11 = *(long **)(param_4 + 400);
    if (plVar11 == (long *)0x0) {
      return;
    }
    __ZNSt3__119__shared_weak_count4lockEv();
    fStack_108 = SUB84(plVar11,0);
    fStack_104 = (float)((ulong)plVar11 >> 0x20);
    if (plVar11 == (long *)0x0) {
      return;
    }
    lVar13 = *(long *)(param_4 + 0x188);
    lStack_110 = lVar13;
    if (lVar13 != 0) {
      if (*(char *)(lVar13 + 0x288) == '\0') {
        lVar12 = *(long *)(param_4 + 0x110);
        fVar14 = *(float *)(lVar12 + 0x94);
        fVar15 = *(float *)(lVar12 + 0x98);
        fVar16 = *(float *)(lVar12 + 0x9c);
        if (*(char *)(lVar13 + 0x2f0) == '\x01') {
          FUN_10a42b498(lVar13);
          *(undefined1 *)(lVar13 + 0x2f0) = 0;
        }
        lVar12 = 200;
        if (*(ulong *)(lVar13 + 0x4d0) < 2) {
          lVar12 = 0x1e0;
        }
        lVar13 = lVar13 + lVar12;
        uVar31 = *(undefined8 *)(lVar13 + 0x310);
        uVar28 = *(undefined8 *)(lVar13 + 800);
        uVar20 = *(undefined8 *)(lVar13 + 0x330);
        uVar17 = *(undefined8 *)(lVar13 + 0x340);
        func_0x0001094f5708(&uStack_d0,lVar13 + 0x308);
        fVar10 = fStack_94;
        fVar9 = fStack_98;
        fVar8 = fStack_9c;
        fVar7 = fStack_a0;
        fVar34 = fStack_a4;
        fVar33 = fStack_a8;
        fVar6 = fStack_ac;
        fVar5 = fStack_b0;
        fVar32 = fStack_b4;
        fVar30 = fStack_b8;
        fVar29 = fStack_bc;
        fVar27 = fStack_c0;
        fVar26 = fStack_c4;
        fVar25 = fStack_c8;
        uVar24 = uStack_d0;
        uVar21 = *(undefined8 *)(lVar13 + 0x390);
        uVar18 = *(undefined8 *)(lVar13 + 0x3a0);
        uVar22 = *(undefined8 *)(lVar13 + 0x3b0);
        uVar19 = *(undefined8 *)(lVar13 + 0x3c0);
        func_0x0001094f5708(&uStack_d0,lVar13 + 0x388);
        fVar23 = (float)uVar31 * fVar14 + (float)uVar28 * fVar15 +
                 (float)uVar20 * fVar16 + (float)uVar17;
        fVar16 = (float)((ulong)uVar31 >> 0x20) * fVar14 + (float)((ulong)uVar28 >> 0x20) * fVar15 +
                 (float)((ulong)uVar20 >> 0x20) * fVar16 + (float)((ulong)uVar17 >> 0x20);
        fVar25 = fVar25 * 0.0 + fVar30 * 0.0 + fVar23 * fVar33 + fVar16 * fVar9;
        fVar26 = fVar26 * 0.0 + fVar32 * 0.0 + fVar34 * fVar23 + fVar10 * fVar16;
        fVar14 = fVar25 / fVar26;
        uVar20 = NEON_rev64(CONCAT44(fStack_c0,(float)uStack_d0),4);
        uVar28 = NEON_rev64(CONCAT44(fStack_bc,uStack_d0._4_4_),4);
        uVar31 = NEON_rev64(CONCAT44(fStack_b8,fStack_c8),4);
        uVar17 = NEON_rev64(CONCAT44(fStack_b4,fStack_c4),4);
        fVar33 = *(float *)(param_4 + 0x198);
        fVar34 = *(float *)(param_4 + 0x19c);
        fVar15 = (float)uVar24 * 0.0 + fVar27 * 0.0 + fVar5 * fVar23 + fVar7 * fVar16;
        fVar16 = (float)((ulong)uVar24 >> 0x20) * 0.0 + fVar29 * 0.0 +
                 fVar6 * fVar23 + fVar8 * fVar16;
        fVar25 = ((float)uVar21 * fVar15 + (float)uVar18 * fVar16 +
                 (float)uVar22 * fVar25 + (float)uVar19 * fVar26) /
                 ((float)((ulong)uVar21 >> 0x20) * fVar15 + (float)((ulong)uVar18 >> 0x20) * fVar16
                 + (float)((ulong)uVar22 >> 0x20) * fVar25 + (float)((ulong)uVar19 >> 0x20) * fVar26
                 );
        fStack_a0 = fStack_b0 * fVar25 + fStack_a0;
        fStack_9c = fStack_ac * fVar25 + fStack_9c;
        fStack_98 = fStack_a8 * fVar25 + fStack_98;
        fStack_94 = fStack_a4 * fVar25 + fStack_94;
        fVar15 = fVar15 / fVar26;
        fVar16 = fVar16 / fVar26;
        fVar25 = (float)uVar17 + fStack_c4 * 0.0 + fStack_94;
        fStack_94 = (float)((ulong)uVar17 >> 0x20) + fStack_b4 * 0.0 + fStack_94;
        fVar27 = ((float)uVar20 + (float)uStack_d0 * 0.0 + fStack_a0) / fVar25 - fVar15;
        fVar29 = ((float)((ulong)uVar20 >> 0x20) + fStack_c0 * 0.0 + fStack_a0) / fStack_94 - fVar15
        ;
        fVar30 = ((float)uVar28 + uStack_d0._4_4_ * 0.0 + fStack_9c) / fVar25 - fVar16;
        fVar32 = ((float)((ulong)uVar28 >> 0x20) + fStack_bc * 0.0 + fStack_9c) / fStack_94 - fVar16
        ;
        fVar25 = ((float)uVar31 + fStack_c8 * 0.0 + fStack_98) / fVar25 - fVar14;
        fVar26 = ((float)((ulong)uVar31 >> 0x20) + fStack_b8 * 0.0 + fStack_98) / fStack_94 - fVar14
        ;
        lStack_90 = CONCAT44(fVar30 * fVar34 + fVar16 + fVar32 * fVar33,
                             fVar27 * fVar34 + fVar15 + fVar29 * fVar33);
        plStack_88 = (long *)CONCAT44(plStack_88._4_4_,fVar34 * fVar25 + fVar14 + fVar33 * fVar26);
        FUN_10a3e3894(*(undefined8 *)(param_4 + 0x110),&lStack_90);
        uVar24 = NEON_rev64(*(undefined8 *)(param_4 + 0x1a0),4);
        fVar14 = SQRT(fVar25 * fVar25 + fVar27 * fVar27 + fVar30 * fVar30) * (float)uVar24;
        fVar15 = SQRT(fVar26 * fVar26 + fVar29 * fVar29 + fVar32 * fVar32) *
                 (float)((ulong)uVar24 >> 0x20);
        uStack_120 = NEON_rev64(CONCAT44(fVar15 + fVar15,fVar14 + fVar14),4);
        fStack_118 = 1.0;
        FUN_10a3e814c(*(undefined8 *)(param_4 + 0x110),&uStack_120);
        plVar11 = (long *)CONCAT44(fStack_104,fStack_108);
        if (plVar11 == (long *)0x0) {
          return;
        }
      }
      else if (*(char *)(lVar13 + 0x288) == '\x01') {
        FUN_10a396080(lVar13);
        fStack_c8 = *(float *)(*(long *)(param_4 + 0x110) + 0x9c);
        uVar24 = NEON_fmov(0x3f800000,4);
        uStack_d0 = CONCAT44(param_2 * -0.5 +
                             (param_2 * 0.5 - param_2 * -0.5) *
                             ((float)((ulong)*(undefined8 *)(param_4 + 0x198) >> 0x20) +
                             (float)((ulong)uVar24 >> 0x20)) * 0.5,
                             param_1 * -0.5 +
                             (param_1 * 0.5 - param_1 * -0.5) *
                             ((float)*(undefined8 *)(param_4 + 0x198) + (float)uVar24) * 0.5);
        FUN_10a3e3894(*(long *)(param_4 + 0x110),&uStack_d0);
        lStack_90 = CONCAT44(param_2 * (float)((ulong)*(undefined8 *)(param_4 + 0x1a0) >> 0x20) +
                             0.0,param_1 * (float)*(undefined8 *)(param_4 + 0x1a0) + 0.0);
        plStack_88 = (long *)CONCAT44(plStack_88._4_4_,0x3f800000);
        FUN_10a3e814c(*(undefined8 *)(param_4 + 0x110),&lStack_90);
      }
    }
    plVar1 = plVar11 + 1;
    do {
      lVar13 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 != 0) {
      return;
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  else {
    plVar11 = *(long **)(param_4 + 400);
    if (plVar11 == (long *)0x0) {
      return;
    }
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar11 == (long *)0x0) {
      return;
    }
    lVar13 = *(long *)(param_4 + 0x188);
    lStack_90 = lVar13;
    plStack_88 = plVar11;
    if (lVar13 != 0) {
      if (*(char *)(lVar13 + 0x2f0) == '\x01') {
        FUN_10a42b498(lVar13);
        *(undefined1 *)(lVar13 + 0x2f0) = 0;
      }
      lVar12 = 200;
      if (*(ulong *)(lVar13 + 0x4d0) < 2) {
        lVar12 = 0x1e0;
      }
      lVar12 = lVar13 + 0x2f8 + lVar12;
      func_0x0001094f5708(&uStack_d0,lVar12 + 0x10);
      if (*(char *)(lVar13 + 0x2f0) == '\x01') {
        FUN_10a42b498(lVar13);
        *(undefined1 *)(lVar13 + 0x2f0) = 0;
      }
      lVar2 = 200;
      if (*(ulong *)(lVar13 + 0x4d0) < 2) {
        lVar2 = 0x1e0;
      }
      func_0x0001094f5708(&lStack_110,lVar13 + 0x2f8 + lVar2 + 0x90);
      FUN_10a2cd058(*(undefined8 *)(param_4 + 0x110));
      fVar16 = param_1 * *(float *)(lVar12 + 0x18) + param_2 * *(float *)(lVar12 + 0x28) +
               param_3 * *(float *)(lVar12 + 0x38) + *(float *)(lVar12 + 0x48);
      fVar26 = param_1 * *(float *)(lVar12 + 0x1c) + param_2 * *(float *)(lVar12 + 0x2c) +
               param_3 * *(float *)(lVar12 + 0x3c) + *(float *)(lVar12 + 0x4c);
      fVar15 = *(float *)(lVar13 + 0x260) + 1.0;
      fVar25 = *(float *)(lVar13 + 0x264);
      fVar14 = fVar25;
      if (fVar15 <= fVar25) {
        fVar14 = fVar15;
      }
      fVar15 = fVar14;
      if (fVar14 <= fVar25 + -1.0) {
        fVar15 = fVar25 + -1.0;
      }
      fVar25 = -fVar15;
      if (-fVar15 <= fVar16) {
        fVar25 = fVar16;
      }
      fVar15 = -fVar14;
      if (fVar25 <= -fVar14) {
        fVar15 = fVar25;
      }
      fStack_118 = fStack_c8 * 0.0 + fStack_b8 * 0.0 + fVar15 * fStack_a8 + fVar26 * fStack_98;
      fVar14 = fStack_c4 * 0.0 + fStack_b4 * 0.0 + fVar15 * fStack_a4 + fVar26 * fStack_94;
      fVar16 = (float)uStack_d0 * 0.0 + fStack_c0 * 0.0 + fStack_b0 * fVar15 + fStack_a0 * fVar26;
      fVar15 = (float)((ulong)uStack_d0 >> 0x20) * 0.0 + fStack_bc * 0.0 +
               fStack_ac * fVar15 + fStack_9c * fVar26;
      fVar14 = ((float)*(undefined8 *)(lVar12 + 0x98) * fVar16 +
                (float)*(undefined8 *)(lVar12 + 0xa8) * fVar15 +
               (float)*(undefined8 *)(lVar12 + 0xb8) * fStack_118 +
               (float)*(undefined8 *)(lVar12 + 200) * fVar14) /
               ((float)((ulong)*(undefined8 *)(lVar12 + 0x98) >> 0x20) * fVar16 +
                (float)((ulong)*(undefined8 *)(lVar12 + 0xa8) >> 0x20) * fVar15 +
               (float)((ulong)*(undefined8 *)(lVar12 + 0xb8) >> 0x20) * fStack_118 +
               (float)((ulong)*(undefined8 *)(lVar12 + 200) >> 0x20) * fVar14);
      fVar27 = (float)uStack_f0 * fVar14 + (float)uStack_e0;
      fVar29 = (float)((ulong)uStack_f0 >> 0x20) * fVar14 + (float)((ulong)uStack_e0 >> 0x20);
      fStack_d8 = fStack_e8 * fVar14 + fStack_d8;
      fStack_d4 = fStack_e4 * fVar14 + fStack_d4;
      fVar14 = (float)((ulong)lStack_110 >> 0x20);
      uVar24 = NEON_rev64(CONCAT44(fStack_f4,fStack_104),4);
      fVar25 = fStack_104 * 0.0 + (float)uVar24 + fStack_d4;
      fStack_d4 = fStack_f4 * 0.0 + (float)((ulong)uVar24 >> 0x20) + fStack_d4;
      uVar17 = NEON_rev64(CONCAT44(fStack_d4,fVar25),4);
      fVar32 = (float)((ulong)uVar17 >> 0x20);
      fVar25 = ((float)lStack_110 * 0.0 + fStack_100 + fVar27) / fVar25 - fVar16;
      fVar26 = (fStack_fc * 0.0 + fVar14 + fVar29) / fStack_d4 - fVar15;
      fVar27 = ((float)lStack_110 + fStack_100 * 0.0 + fVar27) / (float)uVar17 - fVar16;
      fVar29 = (fStack_fc + fVar14 * 0.0 + fVar29) / fVar32 - fVar15;
      uVar24 = *(undefined8 *)(param_4 + 0x198);
      uVar18 = NEON_rev64(uVar24,4);
      fVar30 = (float)((ulong)uVar24 >> 0x20);
      uStack_120 = CONCAT44(fVar15 + (float)((ulong)uVar18 >> 0x20) * fVar26 + fVar30 * fVar29,
                            fVar16 + (float)uVar18 * fVar25 + (float)uVar24 * fVar27);
      fVar14 = (fStack_108 + fStack_f8 * 0.0 + fStack_d8) / (float)uVar17 - fStack_118;
      fVar15 = (fStack_f8 + fStack_108 * 0.0 + fStack_d8) / fVar32 - fStack_118;
      fStack_118 = fStack_118 + (float)uVar24 * fVar14 + fVar30 * fVar15;
      uVar24 = NEON_rev64(CONCAT44(fVar26 * fVar26,fVar25 * fVar25),4);
      fVar14 = (float)*(undefined8 *)(param_4 + 0x1a0) *
               SQRT(fVar14 * fVar14 + (float)uVar24 + fVar27 * fVar27);
      fVar15 = (float)((ulong)*(undefined8 *)(param_4 + 0x1a0) >> 0x20) *
               SQRT(fVar15 * fVar15 + (float)((ulong)uVar24 >> 0x20) + fVar29 * fVar29);
      uStack_130 = CONCAT44(fVar15 + fVar15,fVar14 + fVar14);
      uStack_128 = 0x3f800000;
      FUN_10a3e8ad4(*(undefined8 *)(param_4 + 0x110),&uStack_120);
      FUN_10a3e857c(*(undefined8 *)(param_4 + 0x110),&uStack_130);
      if (plStack_88 == (long *)0x0) {
        return;
      }
    }
    plVar11 = plStack_88;
    plVar1 = plStack_88 + 1;
    do {
      lVar13 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 != 0) {
      return;
    }
    (**(code **)(*plStack_88 + 0x10))(plStack_88);
  }
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
  return;
}



/* Entry: 10a3a2438; end: 10a3a24cb;  */

void FUN_10a3a2438(long param_1,long *param_2)

{
  FUN_10a3c7928();
  FUN_10a1dde30(param_2,&PTR_DAT_110bcea28,param_1 + 0x1f0,&UNK_10f652b9b,0x10);
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110bcb7d8,param_1 + 0x200);
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110bcb7f8,param_1 + 0x208);
                    /* WARNING: Could not recover jumptable at 0x00010a3a24c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bcb818,*(undefined4 *)(param_1 + 0x210));
  return;
}



/* Entry: 10a3a24cc; end: 10a3a2647;  */

void FUN_10a3a24cc(undefined4 param_1,undefined4 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined8 *extraout_x8;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  pcStack_78 = FUN_10a3be440;
  ppuStack_70 = &PTR_FUN_110bcf568;
  plVar4 = param_4;
  plStack_68 = param_3;
  FUN_10a1dd7c8(param_4,&PTR_DAT_110bcea28,&pcStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (((ulong)plVar4 & 1) == 0) {
    uStack_88 = 0;
    lStack_80 = 0;
    (**(code **)(*param_3 + 0xf8))(param_3,&uStack_88);
    if (lStack_80 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  uStack_90 = 0;
  (**(code **)(*param_4 + 0xe0))(param_4,&PTR_DAT_110bcb7d8,&uStack_90);
  *(undefined4 *)(param_3 + 0x40) = param_1;
  *(undefined4 *)((long)param_3 + 0x204) = param_2;
  uVar9 = NEON_fmov(0x3f800000,4);
  uStack_90 = uVar9;
  (**(code **)(*param_4 + 0xe0))(param_4,&PTR_DAT_110bcb7f8,&uStack_90);
  *(int *)(param_3 + 0x41) = (int)uVar9;
  *(undefined4 *)((long)param_3 + 0x20c) = param_2;
  ppuVar5 = &PTR_DAT_110bcb818;
  (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110bcb818,1);
  *(int *)(param_3 + 0x42) = (int)param_4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_80 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __Unwind_Resume();
  plVar4 = (long *)ppuVar5[1];
  if (plVar4 == (long *)0x0) {
    puVar7 = (undefined *)0x0;
    puVar8 = *ppuVar5;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      puVar8 = *ppuVar5;
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
      if ((puVar8 != (undefined *)0x0) && (lVar6 = *(long *)(puVar8 + 0x168), lVar6 != 0)) {
        do {
          if (lVar6 == param_4[0x2d]) {
            puVar8 = &UNK_10f652897;
            FUN_10a00946c();
            lVar6 = *(long *)(puVar8 + 0x1f8);
            uVar9 = *(undefined8 *)(puVar8 + 0x1f0);
            extraout_x8[1] = *(undefined8 *)(puVar8 + 0x1f8);
            *extraout_x8 = uVar9;
            if (lVar6 != 0) {
              plVar4 = (long *)(lVar6 + 0x10);
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
          lVar6 = *(long *)(lVar6 + 0x188);
        } while (lVar6 != 0);
      }
    }
    puVar8 = *ppuVar5;
    puVar7 = ppuVar5[1];
    if (puVar7 != (undefined *)0x0) {
      plVar4 = (long *)(puVar7 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  lVar6 = param_4[0x3f];
  param_4[0x3e] = (long)puVar8;
  param_4[0x3f] = (long)puVar7;
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
  return;
}



/* Entry: 10a3a2648; end: 10a3a272f;  */

void FUN_10a3a2648(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *extraout_x8;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  plVar4 = (long *)param_2[1];
  if (plVar4 == (long *)0x0) {
    lVar7 = 0;
    lVar8 = *param_2;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar8 = *param_2;
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
      if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x168), lVar8 != 0)) {
        do {
          if (lVar8 == *(long *)(param_1 + 0x168)) {
            puVar6 = &UNK_10f652897;
            FUN_10a00946c();
            lVar8 = *(long *)(puVar6 + 0x1f8);
            uVar9 = *(undefined8 *)(puVar6 + 0x1f0);
            extraout_x8[1] = *(undefined8 *)(puVar6 + 0x1f8);
            *extraout_x8 = uVar9;
            if (lVar8 != 0) {
              plVar4 = (long *)(lVar8 + 0x10);
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
          lVar8 = *(long *)(lVar8 + 0x188);
        } while (lVar8 != 0);
      }
    }
    lVar8 = *param_2;
    lVar7 = param_2[1];
    if (lVar7 != 0) {
      plVar4 = (long *)(lVar7 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  lVar5 = *(long *)(param_1 + 0x1f8);
  *(long *)(param_1 + 0x1f0) = lVar8;
  *(long *)(param_1 + 0x1f8) = lVar7;
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
  return;
}



/* Entry: 10a3a2730; end: 10a3a2757;  */

void FUN_10a3a2730(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x1f8);
  uVar5 = *(undefined8 *)(param_2 + 0x1f0);
  param_1[1] = *(undefined8 *)(param_2 + 0x1f8);
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
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



/* Entry: 10a3a2758; end: 10a3a2bf3;  */

/* WARNING: Removing unreachable block (ram,0x00010a3a2a04) */
/* WARNING: Removing unreachable block (ram,0x00010a3a29d4) */
/* WARNING: Removing unreachable block (ram,0x00010a3a29f4) */
/* WARNING: Removing unreachable block (ram,0x00010a3a2a24) */

void FUN_10a3a2758(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 **ppuStack_1a8;
  ulong uStack_1a0;
  byte bStack_191;
  undefined8 **ppuStack_190;
  ulong uStack_188;
  byte bStack_179;
  undefined8 **ppuStack_178;
  ulong uStack_170;
  byte bStack_161;
  undefined8 **ppuStack_160;
  ulong uStack_158;
  byte bStack_149;
  undefined8 **appuStack_148 [2];
  char cStack_131;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_148,uVar1 + 0x15,&ppuStack_160);
  pppuVar2 = (undefined8 ***)appuStack_148[0];
  if (-1 < cStack_131) {
    pppuVar2 = appuStack_148;
  }
  if (uVar1 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar3 = &ppuStack_58;
    }
    _memmove(pppuVar2,pppuVar3,uVar1);
  }
  puVar5 = (undefined8 *)((long)pppuVar2 + uVar1);
  puVar5[1] = 0x203a746e696f5067;
  *puVar5 = 0x6e69646e6962202c;
  *(undefined8 *)((long)puVar5 + 0xd) = 0x2832636576203a74;
  *(undefined1 *)((long)puVar5 + 0x15) = 0;
  __ZNSt3__19to_stringEf(&ppuStack_160,*(undefined4 *)(param_2 + 0x200));
  pppuVar2 = (undefined8 ***)ppuStack_160;
  if (-1 < (char)bStack_149) {
    uStack_158 = (ulong)bStack_149;
    pppuVar2 = &ppuStack_160;
  }
  pppuVar3 = appuStack_148;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar3,pppuVar2,uStack_158);
  puStack_128 = pppuVar3[1];
  puStack_130 = *pppuVar3;
  puStack_120 = pppuVar3[2];
  pppuVar3[1] = (undefined8 **)0x0;
  pppuVar3[2] = (undefined8 **)0x0;
  *pppuVar3 = (undefined8 **)0x0;
  ppuVar4 = &puStack_130;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar4,&DAT_10f68f19e,2);
  uStack_108 = ppuVar4[1];
  uStack_110 = *ppuVar4;
  lStack_100 = (long)ppuVar4[2];
  ppuVar4[1] = (undefined8 *)0x0;
  ppuVar4[2] = (undefined8 *)0x0;
  *ppuVar4 = (undefined8 *)0x0;
  __ZNSt3__19to_stringEf(&ppuStack_178,*(undefined4 *)(param_2 + 0x204));
  pppuVar2 = (undefined8 ***)ppuStack_178;
  if (-1 < (char)bStack_161) {
    uStack_170 = (ulong)bStack_161;
    pppuVar2 = &ppuStack_178;
  }
  puVar5 = &uStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_170);
  uStack_e8 = puVar5[1];
  uStack_f0 = *puVar5;
  lStack_e0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = &uStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,&UNK_10f6528e0,0xe);
  uStack_c8 = puVar5[1];
  uStack_d0 = *puVar5;
  uStack_c0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_190,*(undefined4 *)(param_2 + 0x208));
  pppuVar2 = (undefined8 ***)ppuStack_190;
  if (-1 < (char)bStack_179) {
    uStack_188 = (ulong)bStack_179;
    pppuVar2 = &ppuStack_190;
  }
  puVar5 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_188);
  uStack_a8 = puVar5[1];
  uStack_b0 = *puVar5;
  uStack_a0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,&DAT_10f68f19e,2);
  uStack_88 = puVar5[1];
  uStack_90 = *puVar5;
  uStack_80 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_1a8,*(undefined4 *)(param_2 + 0x20c));
  pppuVar2 = (undefined8 ***)ppuStack_1a8;
  if (-1 < (char)bStack_191) {
    uStack_1a0 = (ulong)bStack_191;
    pppuVar2 = &ppuStack_1a8;
  }
  puVar5 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_1a0);
  uStack_68 = puVar5[1];
  uStack_70 = *puVar5;
  uStack_60 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,&DAT_10f684600,1);
  uVar6 = *puVar5;
  param_1[1] = puVar5[1];
  *param_1 = uVar6;
  param_1[2] = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if ((char)bStack_191 < '\0') {
    __ZdlPv(ppuStack_1a8);
  }
  if ((char)bStack_179 < '\0') {
    __ZdlPv(ppuStack_190);
  }
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  if ((char)bStack_161 < '\0') {
    __ZdlPv(ppuStack_178);
  }
  if (lStack_100 < 0) {
    __ZdlPv(uStack_110);
  }
  if ((long)puStack_120 < 0) {
    __ZdlPv(puStack_130);
  }
  if ((char)bStack_149 < '\0') {
    __ZdlPv(ppuStack_160);
  }
  if (cStack_131 < '\0') {
    __ZdlPv(appuStack_148[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a3a2bf4; end: 10a3a2bfb;  */

/* WARNING: Removing unreachable block (ram,0x00010a3a2a04) */
/* WARNING: Removing unreachable block (ram,0x00010a3a29d4) */
/* WARNING: Removing unreachable block (ram,0x00010a3a29f4) */
/* WARNING: Removing unreachable block (ram,0x00010a3a2a24) */

void FUN_10a3a2bf4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 **ppuStack_1a8;
  ulong uStack_1a0;
  byte bStack_191;
  undefined8 **ppuStack_190;
  ulong uStack_188;
  byte bStack_179;
  undefined8 **ppuStack_178;
  ulong uStack_170;
  byte bStack_161;
  undefined8 **ppuStack_160;
  ulong uStack_158;
  byte bStack_149;
  undefined8 **appuStack_148 [2];
  char cStack_131;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_148,uVar1 + 0x15,&ppuStack_160);
  pppuVar2 = (undefined8 ***)appuStack_148[0];
  if (-1 < cStack_131) {
    pppuVar2 = appuStack_148;
  }
  if (uVar1 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar3 = &ppuStack_58;
    }
    _memmove(pppuVar2,pppuVar3,uVar1);
  }
  puVar5 = (undefined8 *)((long)pppuVar2 + uVar1);
  puVar5[1] = 0x203a746e696f5067;
  *puVar5 = 0x6e69646e6962202c;
  *(undefined8 *)((long)puVar5 + 0xd) = 0x2832636576203a74;
  *(undefined1 *)((long)puVar5 + 0x15) = 0;
  __ZNSt3__19to_stringEf(&ppuStack_160,*(undefined4 *)(param_2 + 0x1f0));
  pppuVar2 = (undefined8 ***)ppuStack_160;
  if (-1 < (char)bStack_149) {
    uStack_158 = (ulong)bStack_149;
    pppuVar2 = &ppuStack_160;
  }
  pppuVar3 = appuStack_148;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar3,pppuVar2,uStack_158);
  puStack_128 = pppuVar3[1];
  puStack_130 = *pppuVar3;
  puStack_120 = pppuVar3[2];
  pppuVar3[1] = (undefined8 **)0x0;
  pppuVar3[2] = (undefined8 **)0x0;
  *pppuVar3 = (undefined8 **)0x0;
  ppuVar4 = &puStack_130;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar4,&DAT_10f68f19e,2);
  uStack_108 = ppuVar4[1];
  uStack_110 = *ppuVar4;
  lStack_100 = (long)ppuVar4[2];
  ppuVar4[1] = (undefined8 *)0x0;
  ppuVar4[2] = (undefined8 *)0x0;
  *ppuVar4 = (undefined8 *)0x0;
  __ZNSt3__19to_stringEf(&ppuStack_178,*(undefined4 *)(param_2 + 500));
  pppuVar2 = (undefined8 ***)ppuStack_178;
  if (-1 < (char)bStack_161) {
    uStack_170 = (ulong)bStack_161;
    pppuVar2 = &ppuStack_178;
  }
  puVar5 = &uStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_170);
  uStack_e8 = puVar5[1];
  uStack_f0 = *puVar5;
  lStack_e0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = &uStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,&UNK_10f6528e0,0xe);
  uStack_c8 = puVar5[1];
  uStack_d0 = *puVar5;
  uStack_c0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_190,*(undefined4 *)(param_2 + 0x1f8));
  pppuVar2 = (undefined8 ***)ppuStack_190;
  if (-1 < (char)bStack_179) {
    uStack_188 = (ulong)bStack_179;
    pppuVar2 = &ppuStack_190;
  }
  puVar5 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_188);
  uStack_a8 = puVar5[1];
  uStack_b0 = *puVar5;
  uStack_a0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,&DAT_10f68f19e,2);
  uStack_88 = puVar5[1];
  uStack_90 = *puVar5;
  uStack_80 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_1a8,*(undefined4 *)(param_2 + 0x1fc));
  pppuVar2 = (undefined8 ***)ppuStack_1a8;
  if (-1 < (char)bStack_191) {
    uStack_1a0 = (ulong)bStack_191;
    pppuVar2 = &ppuStack_1a8;
  }
  puVar5 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_1a0);
  uStack_68 = puVar5[1];
  uStack_70 = *puVar5;
  uStack_60 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,&DAT_10f684600,1);
  uVar6 = *puVar5;
  param_1[1] = puVar5[1];
  *param_1 = uVar6;
  param_1[2] = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if ((char)bStack_191 < '\0') {
    __ZdlPv(ppuStack_1a8);
  }
  if ((char)bStack_179 < '\0') {
    __ZdlPv(ppuStack_190);
  }
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  if ((char)bStack_161 < '\0') {
    __ZdlPv(ppuStack_178);
  }
  if (lStack_100 < 0) {
    __ZdlPv(uStack_110);
  }
  if ((long)puStack_120 < 0) {
    __ZdlPv(puStack_130);
  }
  if ((char)bStack_149 < '\0') {
    __ZdlPv(ppuStack_160);
  }
  if (cStack_131 < '\0') {
    __ZdlPv(appuStack_148[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a3a2bfc; end: 10a3a2f03;  */

void FUN_10a3a2bfc(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    lVar10 = param_2;
    uVar9 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = *(long **)(param_2 + 0x48);
    lStack_60 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_60);
    puVar4 = (undefined8 *)((ulong)&lStack_60 | 8);
    plVar7 = &lStack_60;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar7 = (long *)(param_4 + 0x20);
    }
    uVar9 = *puVar4;
    lVar10 = *plVar7;
  }
  lVar11 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar11);
  FUN_10a3be518(lVar11,lVar10,uVar9);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar8 = plVar7 + 1;
  *plVar8 = 0;
  *plVar7 = (long)&PTR_FUN_110bcf590;
  plVar7[2] = 0;
  plVar7[3] = lVar11;
  plVar7[4] = (long)FUN_10a3df8cc;
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar11 + 0x28) = lVar11;
      *(long **)(lVar11 + 0x30) = plVar7;
    }
    else {
      if (*(long *)(*(long *)(lVar11 + 0x30) + 8) != -1) goto LAB_10a3a2d68;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar11 + 0x28) = lVar11;
      *(long **)(lVar11 + 0x30) = plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar10 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
LAB_10a3a2d68:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar11 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar11 + 0x180) & 0xfffc;
  *(ushort *)(lVar11 + 0x180) = uVar3 | *(ushort *)(lVar11 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar11 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_60 = lVar11;
  plStack_58 = plVar7;
  FUN_10a3c7ce8(param_3,&lStack_60);
  plVar8 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  plVar8 = *(long **)(param_2 + 0x1f8);
  if ((plVar8 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar8, plVar8 != (long *)0x0)) {
    lStack_60 = *(long *)(param_2 + 0x1f0);
  }
  plVar8 = plStack_58;
  FUN_10a38d154();
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  uVar9 = *(undefined8 *)(param_2 + 0x200);
  param_1[1] = (long)plVar7;
  *param_1 = lVar11;
  *(undefined8 *)(lVar11 + 0x200) = uVar9;
  *(undefined8 *)(lVar11 + 0x208) = *(undefined8 *)(param_2 + 0x208);
  *(undefined4 *)(lVar11 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  return;
}



/* Entry: 10a3a2f04; end: 10a3a2fd3;  */

undefined1  [16] FUN_10a3a2f04(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x16;
  auVar1._0_8_ = &UNK_10f652ee1;
  return auVar1;
}



/* Entry: 10a3a2fd4; end: 10a3a32db;  */

void FUN_10a3a2fd4(ulong param_1)

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
  ulong uVar10;
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
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f652ee1,0x16);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bce988;
  pppuVar2 = (undefined8 ***)&UNK_10f651d0b;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bce988;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bc3458;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a3a32bc;
    FUN_10a054dac(param_1,&UNK_10f6528ef,FUN_10a3be63c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f3d0f37,FUN_10a3be79c,FUN_10a3be864);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6528fb,FUN_10a3be99c,FUN_10a3bea54);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f652901,FUN_10a3beb24,FUN_10a3bebdc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f3a690c,FUN_10a3becac,FUN_10a3bed68);
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
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_60 = (undefined4)*(undefined8 *)(lVar3 + -0x28);
    uStack_5c = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x28) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f652ee1,0x16);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a3a32bc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a3a32c0);
  (*pcVar6)();
}



/* Entry: 10a3a32dc; end: 10a3a34cb;  */

void FUN_10a3a32dc(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  plVar1 = param_1;
  FUN_10a4213cc(param_1,param_2 + 2);
  lVar2 = param_2[1];
  *plVar1 = lVar2;
  plVar1[2] = (long)&PTR_DAT_110bbddd0;
  plVar1[7] = (long)&PTR_FUN_110bbde28;
  plVar1[0xd] = (long)&PTR_FUN_110bbde48;
  plVar1[0x16] = (long)&PTR_FUN_110bbdeb8;
  *(long *)((long)plVar1 + *(long *)(lVar2 + -0x18)) = param_2[8];
  plVar1[0x17] = (long)&PTR_DAT_110bbdee8;
  lVar2 = *param_2;
  *plVar1 = lVar2;
  plVar1[2] = (long)&PTR_DAT_110bcba98;
  plVar1[7] = (long)&PTR_DAT_110bcbaf0;
  plVar1[0xd] = (long)&PTR_DAT_110bcbb10;
  plVar1[0x16] = (long)&PTR_DAT_110bcbb80;
  *(long *)((long)plVar1 + *(long *)(lVar2 + -0x18)) = param_2[9];
  plVar1[0x17] = (long)&PTR_DAT_110bcbbb0;
  *(undefined2 *)(plVar1 + 0x9e) = 0;
  *(undefined1 *)((long)plVar1 + 0x4f2) = 0;
  auVar3 = NEON_fmov(0x3f800000,4);
  *(long *)((long)param_1 + 0x4fc) = auVar3._8_8_;
  *(long *)((long)param_1 + 0x4f4) = auVar3._0_8_;
  *(undefined8 *)((long)param_1 + 0x50c) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x504) = 0;
  plVar1[0xa4] = 0;
  plVar1[0xa3] = 0;
  plVar1[0xa6] = 0;
  plVar1[0xa5] = 0;
  return;
}



/* Entry: 10a3a34cc; end: 10a3a353f;  */

void FUN_10a3a34cc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bcb850;
  param_1[2] = &PTR_DAT_110bcba98;
  param_1[7] = &PTR_DAT_110bcbaf0;
  param_1[0xd] = &PTR_DAT_110bcbb10;
  param_1[0x16] = &PTR_DAT_110bcbb80;
  param_1[0xa7] = &PTR_DAT_110bcbc10;
  param_1[0x17] = &PTR_DAT_110bcbbb0;
  func_0x00010a193298(param_1 + 0xa5);
  func_0x00010a1932f0(param_1 + 0xa3);
  *param_1 = &PTR_FUN_110bce390;
  param_1[2] = &PTR_DAT_110bd5880;
  param_1[7] = &PTR_DAT_110bd58d8;
  param_1[0xd] = &PTR_DAT_110bd58f8;
  param_1[0x16] = &PTR_DAT_110bd5968;
  param_1[0xa7] = &PTR_DAT_110bce5f0;
  param_1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9c);
  func_0x00010a004e5c(param_1 + 0x9a);
  param_1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x7e);
  puStack_28 = param_1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x71];
  param_1[0x71] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6c);
  FUN_10a44a358(param_1 + 0x65);
  plVar2 = (long *)param_1[0x62];
  param_1[0x62] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x60,0);
  FUN_10a4477fc(param_1 + 0x5e);
  func_0x00010a4477a4(param_1 + 0x5c);
  func_0x00010a4476d0(param_1 + 0x57);
  FUN_10a44763c(param_1 + 0x54);
  if (param_1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4c);
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1,&PTR_PTR_110bcbc60);
  return;
}



/* Entry: 10a3a3540; end: 10a3a35fb;  */

void FUN_10a3a3540(undefined8 param_1)

{
  func_0x00010a3a3454(param_1,&PTR_PTR_110bcbc48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a35fc; end: 10a3a3633;  */

void FUN_10a3a35fc(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a3a3454((long)param_1 + lVar1,&PTR_PTR_110bcbc48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a3a3634; end: 10a3a37e7;  */

void FUN_10a3a3634(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x518) == 0) {
    FUN_10a199aa4(&uStack_40,&uStack_48);
    func_0x00010a2e19d8(param_1 + 0x518,&uStack_40);
    plVar2 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    uStack_48 = *(undefined8 *)(param_1 + 0x170);
    FUN_10a199b74(&uStack_40,&uStack_21,&uStack_48,param_1 + 0x518);
    func_0x00010a193034(param_1 + 0x528,&uStack_40);
    plVar2 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    uStack_48 = *(undefined8 *)(param_1 + 0x170);
    FUN_10a2e1a3c(&uStack_40,&uStack_48,param_1 + 0x528);
    plStack_58 = plStack_38;
    uStack_60 = uStack_40;
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a426824(param_1,&uStack_60);
    plVar2 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
  }
  return;
}



/* Entry: 10a3a37e8; end: 10a3a3987;  */

void FUN_10a3a37e8(long *param_1)

{
  FUN_10a66ac20();
  FUN_10a3a3634(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010a3a3818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x230))(param_1);
  return;
}



/* Entry: 10a3a3988; end: 10a3a412f;  */

/* WARNING: Removing unreachable block (ram,0x00010a3a3e3c) */
/* WARNING: Removing unreachable block (ram,0x00010a3a3e0c) */
/* WARNING: Removing unreachable block (ram,0x00010a3a39ec) */
/* WARNING: Removing unreachable block (ram,0x00010a3a3e1c) */
/* WARNING: Removing unreachable block (ram,0x00010a3a3f3c) */

void FUN_10a3a3988(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  char *pcVar3;
  bool bVar4;
  long *plVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***pppuVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 in_d3;
  undefined8 ***pppuStack_298;
  ulong uStack_290;
  byte bStack_281;
  undefined8 ***pppuStack_280;
  ulong uStack_278;
  byte bStack_269;
  undefined8 ***pppuStack_268;
  ulong uStack_260;
  byte bStack_251;
  undefined8 ***pppuStack_250;
  ulong uStack_248;
  byte bStack_239;
  undefined8 ***apppuStack_238 [2];
  char cStack_221;
  undefined8 **ppuStack_220;
  undefined8 **ppuStack_218;
  undefined8 **ppuStack_210;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  undefined8 ***pppuStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_68 = 9;
  puStack_70 = &DAT_10f2db963;
  uStack_60 = 0x149d051e572d03c6;
  func_0x000107c2b074(&pppuStack_90,&puStack_70);
  plVar5 = param_2;
  FUN_10a424258(param_2,&pppuStack_90);
  FUN_10a3c829c(&pppuStack_90,param_2);
  if (plVar5 == (long *)0x0) {
    func_0x000107c2b054(&pppuStack_a8,&UNK_10f6529e1);
  }
  else {
    FUN_10a0dad84(plVar5);
    __ZNSt3__19to_stringEf(&pppuStack_a8,in_d3);
  }
  uVar1 = uStack_88;
  if (-1 < (char)bStack_79) {
    uVar1 = (ulong)bStack_79;
  }
  FUN_10a003c90(apppuStack_238,uVar1 + 0xe,&pppuStack_250);
  ppppuVar2 = (undefined8 ****)apppuStack_238[0];
  if (-1 < cStack_221) {
    ppppuVar2 = apppuStack_238;
  }
  if (uVar1 != 0) {
    ppppuVar6 = (undefined8 ****)pppuStack_90;
    if (-1 < (char)bStack_79) {
      ppppuVar6 = &pppuStack_90;
    }
    _memmove(ppppuVar2,ppppuVar6,uVar1);
  }
  puVar9 = (undefined8 *)((long)ppppuVar2 + uVar1);
  *puVar9 = 0x3a746f766970202c;
  *(undefined8 *)((long)puVar9 + 6) = 0x2832636576203a74;
  *(undefined1 *)((long)puVar9 + 0xe) = 0;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x220))();
  __ZNSt3__19to_stringEf(&pppuStack_250,(int)*plVar5);
  ppppuVar2 = (undefined8 ****)pppuStack_250;
  if (-1 < (char)bStack_239) {
    uStack_248 = (ulong)bStack_239;
    ppppuVar2 = &pppuStack_250;
  }
  ppppuVar6 = apppuStack_238;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar6,ppppuVar2,uStack_248);
  ppuStack_218 = ppppuVar6[1];
  ppuStack_220 = *ppppuVar6;
  ppuStack_210 = ppppuVar6[2];
  ppppuVar6[1] = (undefined8 ***)0x0;
  ppppuVar6[2] = (undefined8 ***)0x0;
  *ppppuVar6 = (undefined8 ***)0x0;
  pppuVar7 = &ppuStack_220;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar7,&DAT_10f68f19e,2);
  puStack_1f8 = pppuVar7[1];
  puStack_200 = *pppuVar7;
  puStack_1f0 = pppuVar7[2];
  pppuVar7[1] = (undefined8 **)0x0;
  pppuVar7[2] = (undefined8 **)0x0;
  *pppuVar7 = (undefined8 **)0x0;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x220))();
  __ZNSt3__19to_stringEf(&pppuStack_268,*(undefined4 *)((long)plVar5 + 4));
  ppppuVar2 = (undefined8 ****)pppuStack_268;
  if (-1 < (char)bStack_251) {
    uStack_260 = (ulong)bStack_251;
    ppppuVar2 = &pppuStack_268;
  }
  ppuVar8 = &puStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar8,ppppuVar2,uStack_260);
  uStack_1d8 = ppuVar8[1];
  uStack_1e0 = *ppuVar8;
  lStack_1d0 = (long)ppuVar8[2];
  ppuVar8[1] = (undefined8 *)0x0;
  ppuVar8[2] = (undefined8 *)0x0;
  *ppuVar8 = (undefined8 *)0x0;
  puVar9 = &uStack_1e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f652a05,10);
  uStack_1b8 = puVar9[1];
  uStack_1c0 = *puVar9;
  lStack_1b0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  bVar4 = (char)param_2[0x9e] == '\0';
  pcVar3 = "true";
  if (bVar4) {
    pcVar3 = "false";
  }
  uVar11 = 4;
  if (bVar4) {
    uVar11 = 5;
  }
  puVar9 = &uStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,pcVar3,uVar11)
  ;
  uStack_198 = puVar9[1];
  uStack_1a0 = *puVar9;
  lStack_190 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_1a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f652a10,9);
  uStack_178 = puVar9[1];
  uStack_180 = *puVar9;
  lStack_170 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  bVar4 = *(char *)((long)param_2 + 0x4f1) == '\0';
  pcVar3 = "true";
  if (bVar4) {
    pcVar3 = "false";
  }
  uVar11 = 4;
  if (bVar4) {
    uVar11 = 5;
  }
  puVar9 = &uStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,pcVar3,uVar11)
  ;
  uStack_158 = puVar9[1];
  uStack_160 = *puVar9;
  lStack_150 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f652a1a,0x11);
  uStack_138 = puVar9[1];
  uStack_140 = *puVar9;
  lStack_130 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  fVar10 = 1.0;
  if (1.1920929e-07 < ABS(*(float *)(param_2 + 0xa0))) {
    fVar10 = ABS(*(float *)((long)param_2 + 0x4fc) / *(float *)(param_2 + 0xa0));
  }
  FUN_10a556bf0(fVar10,*(undefined4 *)((long)param_2 + 0x4f4),(long)param_2 + 0x50c,
                *(undefined1 *)((long)param_2 + 0x4f2));
  __ZNSt3__19to_stringEf(&pppuStack_280);
  ppppuVar2 = (undefined8 ****)pppuStack_280;
  if (-1 < (char)bStack_269) {
    uStack_278 = (ulong)bStack_269;
    ppppuVar2 = &pppuStack_280;
  }
  puVar9 = &uStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,ppppuVar2,uStack_278);
  uStack_118 = puVar9[1];
  uStack_120 = *puVar9;
  lStack_110 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_f8 = puVar9[1];
  uStack_100 = *puVar9;
  uStack_f0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  fVar10 = 1.0;
  if (1.1920929e-07 < ABS(*(float *)(param_2 + 0xa0))) {
    fVar10 = ABS(*(float *)((long)param_2 + 0x4fc) / *(float *)(param_2 + 0xa0));
  }
  uVar12 = *(undefined4 *)((long)param_2 + 0x4f4);
  uVar13 = 0;
  FUN_10a556bf0(fVar10,uVar12,(long)param_2 + 0x50c,*(undefined1 *)((long)param_2 + 0x4f2));
  __ZNSt3__19to_stringEf(&pppuStack_298,CONCAT44(uVar13,uVar12));
  ppppuVar2 = (undefined8 ****)pppuStack_298;
  if (-1 < (char)bStack_281) {
    uStack_290 = (ulong)bStack_281;
    ppppuVar2 = &pppuStack_298;
  }
  puVar9 = &uStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,ppppuVar2,uStack_290);
  uStack_d8 = puVar9[1];
  uStack_e0 = *puVar9;
  uStack_d0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f652a2c,10);
  uStack_b8 = puVar9[1];
  uStack_c0 = *puVar9;
  uStack_b0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (-1 < (char)bStack_91) {
    uStack_a0 = (ulong)bStack_91;
    pppuStack_a8 = &pppuStack_a8;
  }
  puVar9 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuStack_a8,uStack_a0);
  uVar11 = *puVar9;
  param_1[1] = puVar9[1];
  *param_1 = uVar11;
  param_1[2] = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if ((char)bStack_281 < '\0') {
    __ZdlPv(pppuStack_298);
  }
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if ((char)bStack_269 < '\0') {
    __ZdlPv(pppuStack_280);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  if (lStack_190 < 0) {
    __ZdlPv(uStack_1a0);
  }
  if (lStack_1b0 < 0) {
    __ZdlPv(uStack_1c0);
  }
  if (lStack_1d0 < 0) {
    __ZdlPv(uStack_1e0);
  }
  if ((char)bStack_251 < '\0') {
    __ZdlPv(pppuStack_268);
  }
  if ((long)puStack_1f0 < 0) {
    __ZdlPv(puStack_200);
  }
  if ((long)ppuStack_210 < 0) {
    __ZdlPv(ppuStack_220);
  }
  if ((char)bStack_239 < '\0') {
    __ZdlPv(pppuStack_250);
  }
  if (cStack_221 < '\0') {
    __ZdlPv(apppuStack_238[0]);
  }
  if ((char)bStack_79 < '\0') {
    __ZdlPv(pppuStack_90);
  }
  return;
}



/* Entry: 10a3a4130; end: 10a3a4137;  */

/* WARNING: Removing unreachable block (ram,0x00010a3a3e3c) */
/* WARNING: Removing unreachable block (ram,0x00010a3a3e0c) */
/* WARNING: Removing unreachable block (ram,0x00010a3a39ec) */
/* WARNING: Removing unreachable block (ram,0x00010a3a3e1c) */
/* WARNING: Removing unreachable block (ram,0x00010a3a3f3c) */

void FUN_10a3a4130(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  char *pcVar3;
  bool bVar4;
  long *plVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***pppuVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 in_d3;
  undefined8 ***pppuStack_298;
  ulong uStack_290;
  byte bStack_281;
  undefined8 ***pppuStack_280;
  ulong uStack_278;
  byte bStack_269;
  undefined8 ***pppuStack_268;
  ulong uStack_260;
  byte bStack_251;
  undefined8 ***pppuStack_250;
  ulong uStack_248;
  byte bStack_239;
  undefined8 ***apppuStack_238 [2];
  char cStack_221;
  undefined8 **ppuStack_220;
  undefined8 **ppuStack_218;
  undefined8 **ppuStack_210;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  undefined8 ***pppuStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  plVar10 = (long *)(param_2 + -0x10);
  uStack_68 = 9;
  puStack_70 = &DAT_10f2db963;
  uStack_60 = 0x149d051e572d03c6;
  func_0x000107c2b074(&pppuStack_90,&puStack_70);
  plVar5 = plVar10;
  FUN_10a424258(plVar10,&pppuStack_90);
  FUN_10a3c829c(&pppuStack_90,plVar10);
  if (plVar5 == (long *)0x0) {
    func_0x000107c2b054(&pppuStack_a8,&UNK_10f6529e1);
  }
  else {
    FUN_10a0dad84(plVar5);
    __ZNSt3__19to_stringEf(&pppuStack_a8,in_d3);
  }
  uVar1 = uStack_88;
  if (-1 < (char)bStack_79) {
    uVar1 = (ulong)bStack_79;
  }
  FUN_10a003c90(apppuStack_238,uVar1 + 0xe,&pppuStack_250);
  ppppuVar2 = (undefined8 ****)apppuStack_238[0];
  if (-1 < cStack_221) {
    ppppuVar2 = apppuStack_238;
  }
  if (uVar1 != 0) {
    ppppuVar6 = (undefined8 ****)pppuStack_90;
    if (-1 < (char)bStack_79) {
      ppppuVar6 = &pppuStack_90;
    }
    _memmove(ppppuVar2,ppppuVar6,uVar1);
  }
  puVar9 = (undefined8 *)((long)ppppuVar2 + uVar1);
  *puVar9 = 0x3a746f766970202c;
  *(undefined8 *)((long)puVar9 + 6) = 0x2832636576203a74;
  *(undefined1 *)((long)puVar9 + 0xe) = 0;
  plVar5 = plVar10;
  (**(code **)(*plVar10 + 0x220))();
  __ZNSt3__19to_stringEf(&pppuStack_250,(int)*plVar5);
  ppppuVar2 = (undefined8 ****)pppuStack_250;
  if (-1 < (char)bStack_239) {
    uStack_248 = (ulong)bStack_239;
    ppppuVar2 = &pppuStack_250;
  }
  ppppuVar6 = apppuStack_238;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar6,ppppuVar2,uStack_248);
  ppuStack_218 = ppppuVar6[1];
  ppuStack_220 = *ppppuVar6;
  ppuStack_210 = ppppuVar6[2];
  ppppuVar6[1] = (undefined8 ***)0x0;
  ppppuVar6[2] = (undefined8 ***)0x0;
  *ppppuVar6 = (undefined8 ***)0x0;
  pppuVar7 = &ppuStack_220;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar7,&DAT_10f68f19e,2);
  puStack_1f8 = pppuVar7[1];
  puStack_200 = *pppuVar7;
  puStack_1f0 = pppuVar7[2];
  pppuVar7[1] = (undefined8 **)0x0;
  pppuVar7[2] = (undefined8 **)0x0;
  *pppuVar7 = (undefined8 **)0x0;
  (**(code **)(*plVar10 + 0x220))();
  __ZNSt3__19to_stringEf(&pppuStack_268,*(undefined4 *)((long)plVar10 + 4));
  ppppuVar2 = (undefined8 ****)pppuStack_268;
  if (-1 < (char)bStack_251) {
    uStack_260 = (ulong)bStack_251;
    ppppuVar2 = &pppuStack_268;
  }
  ppuVar8 = &puStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar8,ppppuVar2,uStack_260);
  uStack_1d8 = ppuVar8[1];
  uStack_1e0 = *ppuVar8;
  lStack_1d0 = (long)ppuVar8[2];
  ppuVar8[1] = (undefined8 *)0x0;
  ppuVar8[2] = (undefined8 *)0x0;
  *ppuVar8 = (undefined8 *)0x0;
  puVar9 = &uStack_1e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f652a05,10);
  uStack_1b8 = puVar9[1];
  uStack_1c0 = *puVar9;
  lStack_1b0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  bVar4 = *(char *)(param_2 + 0x4e0) == '\0';
  pcVar3 = "true";
  if (bVar4) {
    pcVar3 = "false";
  }
  uVar12 = 4;
  if (bVar4) {
    uVar12 = 5;
  }
  puVar9 = &uStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,pcVar3,uVar12)
  ;
  uStack_198 = puVar9[1];
  uStack_1a0 = *puVar9;
  lStack_190 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_1a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f652a10,9);
  uStack_178 = puVar9[1];
  uStack_180 = *puVar9;
  lStack_170 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  bVar4 = *(char *)(param_2 + 0x4e1) == '\0';
  pcVar3 = "true";
  if (bVar4) {
    pcVar3 = "false";
  }
  uVar12 = 4;
  if (bVar4) {
    uVar12 = 5;
  }
  puVar9 = &uStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar9,pcVar3,uVar12)
  ;
  uStack_158 = puVar9[1];
  uStack_160 = *puVar9;
  lStack_150 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f652a1a,0x11);
  uStack_138 = puVar9[1];
  uStack_140 = *puVar9;
  lStack_130 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  fVar11 = 1.0;
  if (1.1920929e-07 < ABS(*(float *)(param_2 + 0x4f0))) {
    fVar11 = ABS(*(float *)(param_2 + 0x4ec) / *(float *)(param_2 + 0x4f0));
  }
  FUN_10a556bf0(fVar11,*(undefined4 *)(param_2 + 0x4e4),param_2 + 0x4fc,
                *(undefined1 *)(param_2 + 0x4e2));
  __ZNSt3__19to_stringEf(&pppuStack_280);
  ppppuVar2 = (undefined8 ****)pppuStack_280;
  if (-1 < (char)bStack_269) {
    uStack_278 = (ulong)bStack_269;
    ppppuVar2 = &pppuStack_280;
  }
  puVar9 = &uStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,ppppuVar2,uStack_278);
  uStack_118 = puVar9[1];
  uStack_120 = *puVar9;
  lStack_110 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_f8 = puVar9[1];
  uStack_100 = *puVar9;
  uStack_f0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  fVar11 = 1.0;
  if (1.1920929e-07 < ABS(*(float *)(param_2 + 0x4f0))) {
    fVar11 = ABS(*(float *)(param_2 + 0x4ec) / *(float *)(param_2 + 0x4f0));
  }
  uVar13 = *(undefined4 *)(param_2 + 0x4e4);
  uVar14 = 0;
  FUN_10a556bf0(fVar11,uVar13,param_2 + 0x4fc,*(undefined1 *)(param_2 + 0x4e2));
  __ZNSt3__19to_stringEf(&pppuStack_298,CONCAT44(uVar14,uVar13));
  ppppuVar2 = (undefined8 ****)pppuStack_298;
  if (-1 < (char)bStack_281) {
    uStack_290 = (ulong)bStack_281;
    ppppuVar2 = &pppuStack_298;
  }
  puVar9 = &uStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,ppppuVar2,uStack_290);
  uStack_d8 = puVar9[1];
  uStack_e0 = *puVar9;
  uStack_d0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f652a2c,10);
  uStack_b8 = puVar9[1];
  uStack_c0 = *puVar9;
  uStack_b0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (-1 < (char)bStack_91) {
    uStack_a0 = (ulong)bStack_91;
    pppuStack_a8 = &pppuStack_a8;
  }
  puVar9 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuStack_a8,uStack_a0);
  uVar12 = *puVar9;
  param_1[1] = puVar9[1];
  *param_1 = uVar12;
  param_1[2] = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if ((char)bStack_281 < '\0') {
    __ZdlPv(pppuStack_298);
  }
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if ((char)bStack_269 < '\0') {
    __ZdlPv(pppuStack_280);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  if (lStack_190 < 0) {
    __ZdlPv(uStack_1a0);
  }
  if (lStack_1b0 < 0) {
    __ZdlPv(uStack_1c0);
  }
  if (lStack_1d0 < 0) {
    __ZdlPv(uStack_1e0);
  }
  if ((char)bStack_251 < '\0') {
    __ZdlPv(pppuStack_268);
  }
  if ((long)puStack_1f0 < 0) {
    __ZdlPv(puStack_200);
  }
  if ((long)ppuStack_210 < 0) {
    __ZdlPv(ppuStack_220);
  }
  if ((char)bStack_239 < '\0') {
    __ZdlPv(pppuStack_250);
  }
  if (cStack_221 < '\0') {
    __ZdlPv(apppuStack_238[0]);
  }
  if ((char)bStack_79 < '\0') {
    __ZdlPv(pppuStack_90);
  }
  return;
}



/* Entry: 10a3a4138; end: 10a3a4277;  */

void FUN_10a3a4138(long param_1,long *param_2,long *param_3)

{
  bool bVar1;
  undefined *puVar2;
  long *plVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x1f0) != (char)*param_2) {
    *(char *)(param_1 + 0x1f0) = (char)*param_2;
    *(undefined1 *)(param_1 + 0x1ec) = 1;
  }
  if (*(char *)(param_1 + 0x1f1) != *(char *)((long)param_2 + 1)) {
    *(char *)(param_1 + 0x1f1) = *(char *)((long)param_2 + 1);
    *(undefined1 *)(param_1 + 0x1ec) = 1;
  }
  if (*(char *)(param_1 + 500) != *(char *)((long)param_2 + 2)) {
    *(char *)(param_1 + 500) = *(char *)((long)param_2 + 2);
    *(undefined1 *)(param_1 + 0x1ec) = 1;
  }
  fVar4 = *(float *)((long)param_2 + 4);
  if (*(float *)(param_1 + 0x210) != fVar4) {
    if (fVar4 <= 0.0) goto LAB_10a3a426c;
    *(float *)(param_1 + 0x210) = fVar4;
    *(undefined1 *)(param_1 + 0x1ec) = 1;
  }
  fVar4 = *(float *)(param_2 + 1);
  if (*(float *)(param_1 + 0x214) != fVar4) {
    if (fVar4 <= 0.0) {
LAB_10a3a426c:
      puVar2 = &UNK_10f660f37;
      FUN_10a00946c();
      *(undefined4 *)(puVar2 + 4) = 0x3f800000;
      if (param_2 != (long *)0x0) {
        plVar3 = param_2;
        (**(code **)(*param_2 + 0xb0))();
        (**(code **)(*param_2 + 0xb8))();
        fVar4 = 1.0;
        if ((int)plVar3 != 0 && (int)param_2 != 0) {
          fVar4 = (float)((ulong)plVar3 & 0xffffffff) / (float)((ulong)param_2 & 0xffffffff);
        }
        *(float *)(puVar2 + 4) = fVar4;
      }
      *(undefined4 *)(puVar2 + 8) = 0x3f800000;
      if (param_3 != (long *)0x0) {
        plVar3 = param_3;
        (**(code **)(*param_3 + 0xb0))();
        (**(code **)(*param_3 + 0xb8))();
        fVar4 = 1.0;
        if ((int)plVar3 != 0 && (int)param_3 != 0) {
          fVar4 = (float)((ulong)plVar3 & 0xffffffff) / (float)((ulong)param_3 & 0xffffffff);
        }
        *(float *)(puVar2 + 8) = fVar4;
      }
      return;
    }
    *(float *)(param_1 + 0x214) = fVar4;
    *(undefined1 *)(param_1 + 0x1ec) = 1;
  }
  bVar1 = false;
  if ((*(float *)(param_1 + 0x218) == *(float *)((long)param_2 + 0xc)) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x21c)) && !NAN(*(float *)(param_2 + 2)))) {
    bVar1 = *(float *)(param_1 + 0x21c) == *(float *)(param_2 + 2);
  }
  if (!bVar1) {
    *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)((long)param_2 + 0xc);
    *(undefined1 *)(param_1 + 0x1ec) = 1;
  }
  if ((*(float *)(param_1 + 0x200) != *(float *)((long)param_2 + 0x14)) ||
     (*(float *)(param_1 + 0x204) != *(float *)(param_2 + 3))) {
    *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)((long)param_2 + 0x14);
    *(undefined1 *)(param_1 + 0x1ec) = 1;
  }
  if ((*(float *)((long)param_2 + 0x1c) != *(float *)(param_1 + 0x208)) ||
     (*(float *)(param_2 + 4) != *(float *)(param_1 + 0x20c))) {
    *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)((long)param_2 + 0x1c);
    *(undefined1 *)(param_1 + 0x1ec) = 1;
  }
  return;
}



/* Entry: 10a3a4278; end: 10a3a4347;  */

void FUN_10a3a4278(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  float fVar2;
  
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_2 != (long *)0x0) {
    plVar1 = param_2;
    (**(code **)(*param_2 + 0xb0))();
    (**(code **)(*param_2 + 0xb8))();
    fVar2 = 1.0;
    if ((int)plVar1 != 0 && (int)param_2 != 0) {
      fVar2 = (float)((ulong)plVar1 & 0xffffffff) / (float)((ulong)param_2 & 0xffffffff);
    }
    *(float *)(param_1 + 4) = fVar2;
  }
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  if (param_3 != (long *)0x0) {
    plVar1 = param_3;
    (**(code **)(*param_3 + 0xb0))();
    (**(code **)(*param_3 + 0xb8))();
    fVar2 = 1.0;
    if ((int)plVar1 != 0 && (int)param_3 != 0) {
      fVar2 = (float)((ulong)plVar1 & 0xffffffff) / (float)((ulong)param_3 & 0xffffffff);
    }
    *(float *)(param_1 + 8) = fVar2;
  }
  return;
}



/* Entry: 10a3a4348; end: 10a3a43bf;  */

void FUN_10a3a4348(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  
  lVar4 = *(long *)(param_1[0x2d] + 0x140);
  func_0x00010a0d8ae0(lVar4);
  *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(lVar4 + 0x48);
  plVar2 = param_1;
  FUN_10a424150();
  lVar4 = *plVar2;
  FUN_10a3a43c0();
  if (lVar4 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = *(long **)(lVar4 + 0x268);
  }
  if (param_1 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = (long *)param_1[0x4d];
  }
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0xb0))();
    (**(code **)(*plVar2 + 0xb8))();
    fVar5 = 1.0;
    if ((int)plVar1 != 0 && (int)plVar2 != 0) {
      fVar5 = (float)((ulong)plVar1 & 0xffffffff) / (float)((ulong)plVar2 & 0xffffffff);
    }
    *(float *)(param_2 + 4) = fVar5;
  }
  *(undefined4 *)(param_2 + 8) = 0x3f800000;
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0xb0))();
    (**(code **)(*plVar3 + 0xb8))();
    fVar5 = 1.0;
    if ((int)plVar2 != 0 && (int)plVar3 != 0) {
      fVar5 = (float)((ulong)plVar2 & 0xffffffff) / (float)((ulong)plVar3 & 0xffffffff);
    }
    *(float *)(param_2 + 8) = fVar5;
  }
  return;
}



/* Entry: 10a3a43c0; end: 10a3a4527;  */

undefined8 FUN_10a3a43c0(long *param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  if ((long *)param_1[0x54] == (long *)param_1[0x55]) {
    return 0;
  }
  lVar6 = *(long *)param_1[0x54];
  if (lVar6 != 0) {
    plVar3 = param_1;
    FUN_10a424150();
    if (((*(long **)(lVar6 + 0x228) != *(long **)(lVar6 + 0x230)) &&
        (lVar6 = **(long **)(lVar6 + 0x228), lVar6 != 0)) && (1 < *(ulong *)(lVar6 + 0x1f8))) {
      plVar1 = (long *)(lVar6 + 0x1f0);
      plVar7 = *(long **)(lVar6 + 0x1e8);
      if (plVar7 != plVar1) {
        lVar6 = *plVar3;
        plVar3 = plVar1;
        do {
          plVar5 = plVar3;
          if ((*(long *)(plVar7[8] + 0x188) != 0 && *(long *)(plVar7[8] + 0x188) != lVar6) &&
             (plVar5 = plVar7, plVar3 != plVar1)) {
            if (0x71 < *(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18)) {
              if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
                return 0;
              }
              func_0x00010ae06f08(1,2,&UNK_10f652a37,&UNK_10f652a6f,0xf7,&UNK_10f6414a9);
              return 0;
            }
            plVar4 = plVar7 + 4;
            FUN_10a003e3c(plVar4,plVar3 + 4);
            if (-1 < (char)plVar4) {
              plVar5 = plVar3;
            }
          }
          plVar3 = (long *)plVar7[1];
          plVar4 = plVar7;
          if ((long *)plVar7[1] == (long *)0x0) {
            do {
              plVar7 = (long *)plVar4[2];
              bVar2 = (long *)*plVar7 != plVar4;
              plVar4 = plVar7;
            } while (bVar2);
          }
          else {
            do {
              plVar7 = plVar3;
              plVar3 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
          plVar3 = plVar5;
        } while (plVar7 != plVar1);
        if (plVar5 != plVar1) {
          return *(undefined8 *)(plVar5[8] + 0x188);
        }
      }
    }
  }
  return 0;
}



/* Entry: 10a3a4528; end: 10a3a460f;  */

void FUN_10a3a4528(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a3a4348(param_1,param_1 + 0x4f0);
  FUN_10a3a4138(*(undefined8 *)(param_1 + 0x518),param_1 + 0x4f0);
  lVar4 = *(long *)(param_1 + 0x528);
  plVar5 = *(long **)(lVar4 + 0xd8);
  if (*(char *)((long)plVar5 + 0x1ec) != '\x01') {
    return;
  }
  (**(code **)(*plVar5 + 0x40))(plVar5);
  *(undefined1 *)((long)plVar5 + 0x1ec) = 0;
  *(byte *)(lVar4 + 0xd0) = *(byte *)(lVar4 + 0xd0) | 1;
  if ((*(long *)(lVar4 + 0xc0) != 0) &&
     ((*(char *)(lVar4 + 0xb9) == '\0' || (*(char *)(lVar4 + 0xba) == '\0')))) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f69f24f,&UNK_10f69f292,0x4f,&UNK_10f69f2ec);
    }
    plVar5 = *(long **)(lVar4 + 200);
    *(long *)(lVar4 + 0xc0) = 0;
    *(undefined8 *)(lVar4 + 200) = 0;
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
  return;
}



/* Entry: 10a3a4610; end: 10a3a4707;  */

void FUN_10a3a4610(char *param_1,float param_2,undefined8 param_3,char *param_4,float *param_5)

{
  char cVar1;
  char *pcVar2;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  
  pcVar2 = param_1 + 4;
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = -0x80;
  param_1[0xf] = '?';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[2] = -0x80;
  pcVar2[3] = '?';
  pcVar2[4] = '\0';
  pcVar2[5] = '\0';
  pcVar2[6] = -0x80;
  pcVar2[7] = '?';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  cVar1 = *param_4;
  *param_1 = cVar1;
  if (cVar1 == '\x01') {
    fStack_3c = 1.0;
    if (1.1920929e-07 < ABS(param_5[1])) {
      fStack_3c = ABS(*param_5 / param_5[1]);
    }
    fStack_38 = param_2;
    FUN_10a556bf0(param_4 + 8,param_4[1]);
    uStack_34 = 0x3f800000;
    uStack_60 = CONCAT44(fStack_38 * -0.5,fStack_3c * -0.5);
    uStack_58 = 0xbf000000;
    FUN_10a3962dc(&uStack_54,0x3f800000,param_3,param_4 + 0x10,param_4 + 0x18,param_4 + 2,&uStack_60
                  ,&fStack_3c,0);
    *(undefined8 *)pcVar2 = uStack_54;
    *(undefined4 *)(param_1 + 0xc) = uStack_4c;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    *(undefined4 *)(param_1 + 0x18) = uStack_40;
  }
  return;
}



/* Entry: 10a3a4708; end: 10a3a4757;  */

ulong FUN_10a3a4708(ulong param_1,long param_2,char *param_3,float *param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  if (*param_3 != '\x01') {
    return param_1;
  }
  FUN_10a425f00(param_2,1);
  lVar8 = *(long *)(param_2 + 0x300);
  FUN_10a3e814c(lVar8,param_3 + 4);
  fVar10 = *(float *)(param_3 + 0x10);
  bVar2 = false;
  if ((*(float *)(lVar8 + 0x94) == fVar10) &&
     (bVar2 = false, !NAN(*(float *)(lVar8 + 0x98)) && !NAN(*(float *)(param_3 + 0x14)))) {
    bVar2 = *(float *)(lVar8 + 0x98) == *(float *)(param_3 + 0x14);
  }
  bVar3 = false;
  if ((bVar2) && (bVar3 = false, !NAN(*(float *)(lVar8 + 0x9c)) && !NAN(*(float *)(param_3 + 0x18)))
     ) {
    bVar3 = *(float *)(lVar8 + 0x9c) == *(float *)(param_3 + 0x18);
  }
  if (bVar3) {
    return (ulong)(uint)fVar10;
  }
  *(float *)(lVar8 + 0x94) = fVar10;
  *(undefined4 *)(lVar8 + 0x98) = *(undefined4 *)(param_3 + 0x14);
  uVar11 = *(undefined4 *)(param_3 + 0x18);
  uVar12 = 0;
  *(undefined4 *)(lVar8 + 0x9c) = uVar11;
  *(byte *)(lVar8 + 0x2a) = *(byte *)(lVar8 + 0x2a) | 0x60;
  lVar6 = *(long *)(lVar8 + 0x30);
  if (lVar6 != 0) {
    for (lVar9 = *(long *)(lVar6 + 0x198); lVar9 != lVar6 + 400; lVar9 = *(long *)(lVar9 + 8)) {
      lVar4 = *(long *)(*(long *)(lVar9 + 0x10) + 0x140);
      bVar1 = *(byte *)(lVar4 + 0x2a);
      if (((bVar1 ^ 0xff) & 0x7c) != 0) {
        *(byte *)(lVar4 + 0x2a) = bVar1 | 0x7c;
        FUN_10a3e8248();
      }
    }
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar7 = *(float **)(lVar8 + 0x38);
  (**(code **)(*(long *)pfVar7 + 0x20))(pfVar7);
  pcStack_78 = FUN_10a4030bc;
  ppuStack_70 = &PTR_DAT_110bd2fb8;
  iVar5 = (int)&pcStack_78;
  lStack_68 = lVar8;
  (**(code **)(**(long **)(lVar8 + 0x38) + 0x40))();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  (**(code **)(*(long *)pfVar7 + 0x28))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume(pfVar7);
    }
    func_0x000104bd46a0();
    if ((((!NAN(*pfVar7)) && (!NAN(pfVar7[1]))) && (ABS(pfVar7[1]) != INFINITY)) &&
       (((ABS(*pfVar7) != INFINITY && (!NAN(pfVar7[2]))) && (ABS(pfVar7[2]) != INFINITY)))) {
      param_4 = pfVar7;
    }
    return (ulong)(uint)*param_4;
  }
  return CONCAT44(uVar12,uVar11);
}



/* Entry: 10a3a4758; end: 10a3a4a57;  */

void FUN_10a3a4758(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long **pplVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    plVar11 = param_2;
    uVar10 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = (long *)param_2[9];
    plStack_60 = (long *)param_2[8];
    lVar9 = param_4 + 0x88;
    func_0x00010a35bf90(lVar9,&plStack_60);
    puVar4 = (undefined8 *)((ulong)&plStack_60 | 8);
    pplVar7 = &plStack_60;
    if (lVar9 != 0) {
      puVar4 = (undefined8 *)(lVar9 + 0x28);
      pplVar7 = (long **)(lVar9 + 0x20);
    }
    uVar10 = *puVar4;
    plVar11 = *pplVar7;
  }
  plVar12 = (long *)param_2[0x2e];
  FUN_10a3dd220(plVar12);
  FUN_10a3bee74(plVar12,plVar11,uVar10);
  plVar11 = (long *)0x28;
  __Znwm();
  plVar8 = plVar11 + 1;
  *plVar8 = 0;
  *plVar11 = (long)&PTR_FUN_110bcf5e0;
  plVar11[2] = 0;
  plVar11[3] = (long)plVar12;
  plVar11[4] = (long)FUN_10a3df8cc;
  if (plVar12 != (long *)0x0) {
    if (plVar12[6] == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar11 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar12[5] = (long)plVar12;
      plVar12[6] = (long)plVar11;
    }
    else {
      if (*(long *)(plVar12[6] + 8) != -1) goto LAB_10a3a48c4;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar11 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar12[5] = (long)plVar12;
      plVar12[6] = (long)plVar11;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar9 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
LAB_10a3a48c4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plVar12 + 0x2a,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(plVar12 + 0x30) & 0xfffc;
  *(ushort *)(plVar12 + 0x30) = uVar3 | *(ushort *)(plVar12 + 0x30) & 1 | uVar2;
  *(ushort *)(plVar12 + 0x30) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_60 = plVar12;
  plStack_58 = plVar11;
  FUN_10a3c7ce8(param_3,&plStack_60);
  plVar8 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x128))(param_2);
  (**(code **)(*plVar12 + 0x130))(plVar12,plVar8);
  FUN_10a2d597c(param_2,plVar12,param_4);
  FUN_10a3a3634(plVar12);
  lVar13 = param_2[0x9f];
  lVar9 = param_2[0x9e];
  lVar15 = param_2[0xa1];
  lVar14 = param_2[0xa0];
  *(int *)(plVar12 + 0xa2) = (int)param_2[0xa2];
  plVar12[0xa1] = lVar15;
  plVar12[0xa0] = lVar14;
  plVar12[0x9f] = lVar13;
  plVar12[0x9e] = lVar9;
  (**(code **)(*param_2 + 0x220))(param_2);
  (**(code **)(*plVar12 + 0x228))(plVar12,param_2);
  (**(code **)(*plVar12 + 0x230))(plVar12);
  *param_1 = (long)plVar12;
  param_1[1] = (long)plVar11;
  return;
}



/* Entry: 10a3a4a58; end: 10a3a4a93;  */

undefined8 * FUN_10a3a4a58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bcbce0;
  func_0x00010a3bef9c(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a3a4a94; end: 10a3a4a97;  */

undefined8 * FUN_10a3a4a94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bcbce0;
  func_0x00010a3bef9c(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a3a4a98; end: 10a3a4aab;  */

void FUN_10a3a4a98(void)

{
  FUN_10a3a4a58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a4aac; end: 10a3a4b63;  */

void FUN_10a3a4aac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((*(byte *)(param_1 + 0x28) & 0xfe) == 4) {
    FUN_10a773480(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xb90),*(undefined8 *)(param_1 + 0x30)
                 );
  }
  if (*(long *)(param_1 + 0x30) != -1) {
    FUN_10a772fd8(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xb90));
    *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  }
  plVar5 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
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



/* Entry: 10a3a4b64; end: 10a3a4c57;  */

long FUN_10a3a4b64(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0xb90);
  FUN_10a772ed8();
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  FUN_10a773324(*(undefined8 *)(*(long *)(param_2 + 0x38) + 0xb90),uVar1);
  *(undefined4 *)(param_2 + 0x60) = param_1;
  lVar2 = *(long *)(param_2 + 0x30);
  if (lVar2 == -1) {
    lVar2 = *(long *)(param_2 + 0x38);
    func_0x000107c2b054(auStack_50,&UNK_10f652af9);
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(lVar2 + 0x8d8);
      func_0x000107c2b054(auStack_38,"true");
      FUN_10a76bdb0(uVar1,auStack_50,auStack_38);
      if (cStack_21 < '\0') {
        __ZdlPv(auStack_38[0]);
      }
    }
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
    lVar2 = *(long *)(param_2 + 0x30);
  }
  else {
    *(undefined1 *)(param_2 + 0x28) = 1;
  }
  return lVar2;
}



/* Entry: 10a3a4c58; end: 10a3a4e1b;  */

void FUN_10a3a4c58(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plStack_40;
  long *plStack_38;
  
  bVar2 = *(byte *)(param_2 + 5);
  if (bVar2 == 5) {
    (**(code **)(*param_2 + 0x140))(param_2,0);
    bVar2 = *(byte *)(param_2 + 5);
  }
  if ((1 < bVar2 - 1) ||
     (*(undefined1 *)(param_2 + 5) = 5, (*(byte *)((long)param_2 + 100) & 1) != 0)) {
    return;
  }
  FUN_10a7733cc(*(undefined8 *)(param_2[7] + 0xb90),param_2[6],param_3);
  lVar5 = *(long *)(param_2[7] + 0xb90);
  FUN_10a773324(lVar5,param_2[6]);
  if ((char)param_2[9] == '\x01') {
    *(undefined1 *)((long)param_2 + 0x49) = 1;
    *(int *)((long)param_2 + 0x54) = (int)param_1;
    *(int *)(param_2 + 0xb) = (int)param_1;
    *(undefined4 *)((long)param_2 + 0x5c) = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    param_2[8] = lVar5;
    param_1 = 0;
  }
  lVar5 = param_2[6];
  FUN_10a772f84(&plStack_40,*(undefined8 *)(param_2[7] + 0xb90));
  if (plStack_40 != (long *)0x0) {
    (**(code **)(*plStack_40 + 0x60))(param_1,plStack_40,lVar5);
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10a3a4e1c; end: 10a3a4f77;  */

long * FUN_10a3a4e1c(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  long *plStack_80;
  long *plStack_78;
  long *in_stack_ffffffffffffff90;
  long *in_stack_ffffffffffffff98;
  long *in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  long *in_stack_ffffffffffffffb0;
  long *in_stack_ffffffffffffffb8;
  long *in_stack_ffffffffffffffc0;
  long *in_stack_ffffffffffffffc8;
  
  if ((char)param_2[5] != '\0') {
    if (((*(byte *)((long)param_2 + 0x4a) & 1) != 0) || ((*(byte *)((long)param_2 + 0x49) & 1) != 0)
       ) {
      return param_2;
    }
    fVar7 = (float)param_1;
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    uVar8 = NEON_fminnm(fVar7,0x3f800000);
    *(undefined4 *)(param_2 + 0xc) = uVar8;
    lVar6 = param_2[6];
    FUN_10a772f84(&stack0xffffffffffffffc0,*(undefined8 *)(param_2[7] + 0xb90));
    if (in_stack_ffffffffffffffc0 != (long *)0x0) {
      (**(code **)(*in_stack_ffffffffffffffc0 + 0x60))(uVar8,in_stack_ffffffffffffffc0,lVar6);
    }
    if (in_stack_ffffffffffffffc8 != (long *)0x0) {
      plVar4 = in_stack_ffffffffffffffc8 + 1;
      do {
        lVar6 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*in_stack_ffffffffffffffc8 + 0x10))(in_stack_ffffffffffffffc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)
                  (in_stack_ffffffffffffffc8);
        return in_stack_ffffffffffffffc8;
      }
    }
    return in_stack_ffffffffffffffc0;
  }
  plVar4 = (long *)&UNK_10f652acf;
  FUN_10a00946c();
  if ((char)plVar4[5] != '\0') {
    if (((*(byte *)((long)plVar4 + 0x4a) & 1) == 0) && (*(char *)((long)plVar4 + 0x49) != '\x01')) {
      lVar6 = plVar4[6];
      FUN_10a772f84(&stack0xffffffffffffffb0,*(undefined8 *)(plVar4[7] + 0xb90));
      if (in_stack_ffffffffffffffb0 != (long *)0x0) {
        (**(code **)(*in_stack_ffffffffffffffb0 + 0x68))(in_stack_ffffffffffffffb0,lVar6);
      }
      if (in_stack_ffffffffffffffb8 != (long *)0x0) {
        plVar4 = in_stack_ffffffffffffffb8 + 1;
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
          in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb8;
        }
      }
      return in_stack_ffffffffffffffb0;
    }
    return plVar4;
  }
  puVar5 = &UNK_10f652acf;
  FUN_10a00946c();
  if (puVar5[0x28] != '\0') {
    uVar1 = *(undefined8 *)(puVar5 + 0x30);
    FUN_10a772f84(&stack0xffffffffffffffa0,*(undefined8 *)(*(long *)(puVar5 + 0x38) + 0xb90));
    if (in_stack_ffffffffffffffa0 == (long *)0x0) {
      in_stack_ffffffffffffffa0 = (long *)0x0;
    }
    else {
      (**(code **)(*in_stack_ffffffffffffffa0 + 0x38))(param_1,in_stack_ffffffffffffffa0,uVar1);
    }
    if (in_stack_ffffffffffffffa8 != (long *)0x0) {
      plVar4 = in_stack_ffffffffffffffa8 + 1;
      do {
        lVar6 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
      }
    }
    return in_stack_ffffffffffffffa0;
  }
  puVar5 = &UNK_10f652acf;
  FUN_10a00946c();
  fVar7 = (float)param_1;
  if (puVar5[0x28] != '\0') {
    uVar1 = *(undefined8 *)(puVar5 + 0x30);
    FUN_10a772f84(&stack0xffffffffffffff90,*(undefined8 *)(*(long *)(puVar5 + 0x38) + 0xb90));
    if (in_stack_ffffffffffffff90 != (long *)0x0) {
      (**(code **)(*in_stack_ffffffffffffff90 + 0x30))(in_stack_ffffffffffffff90,uVar1);
    }
    if (in_stack_ffffffffffffff98 != (long *)0x0) {
      plVar4 = in_stack_ffffffffffffff98 + 1;
      do {
        lVar6 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*in_stack_ffffffffffffff98 + 0x10))(in_stack_ffffffffffffff98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff98);
        in_stack_ffffffffffffff90 = in_stack_ffffffffffffff98;
      }
    }
    return in_stack_ffffffffffffff90;
  }
  puVar5 = &UNK_10f652acf;
  FUN_10a00946c();
  if (puVar5[0x28] != '\0') {
    uVar1 = *(undefined8 *)(puVar5 + 0x30);
    FUN_10a772f84(&plStack_80,*(undefined8 *)(*(long *)(puVar5 + 0x38) + 0xb90));
    if (plStack_80 != (long *)0x0) {
      (**(code **)(*plStack_80 + 0x20))(plStack_80,uVar1);
    }
    if (plStack_78 != (long *)0x0) {
      plVar4 = plStack_78 + 1;
      do {
        lVar6 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
        plStack_80 = plStack_78;
      }
    }
    return plStack_80;
  }
  puVar5 = &UNK_10f652acf;
  FUN_10a00946c();
  if (puVar5[0x28] != '\0') {
    uVar1 = *(undefined8 *)(puVar5 + 0x30);
    FUN_10a772f84(&plStack_80,*(undefined8 *)(*(long *)(puVar5 + 0x38) + 0xb90));
    if (plStack_80 == (long *)0x0) {
      plStack_80 = (long *)0x0;
    }
    else {
      (**(code **)(*plStack_80 + 0x28))(plStack_80,uVar1);
    }
    if (plStack_78 != (long *)0x0) {
      plVar4 = plStack_78 + 1;
      do {
        lVar6 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      }
    }
    return plStack_80;
  }
  puVar5 = &UNK_10f652acf;
  FUN_10a00946c();
  if (puVar5[0x28] != '\0') {
    return (long *)(ulong)(puVar5[0x28] == '\x04');
  }
  plVar4 = (long *)&UNK_10f652acf;
  FUN_10a00946c();
  if (0.001 < fVar7) {
    *(float *)((long)plVar4 + 0x4c) = fVar7;
  }
  *(bool *)(plVar4 + 9) = 0.001 < fVar7;
  return plVar4;
}



/* Entry: 10a3a4f78; end: 10a3a4fc3;  */

void FUN_10a3a4f78(float param_1,long param_2)

{
  if (0.001 < param_1) {
    *(float *)(param_2 + 0x4c) = param_1;
  }
  *(bool *)(param_2 + 0x48) = 0.001 < param_1;
  return;
}



/* Entry: 10a3a4fc4; end: 10a3a4fcf;  */

long * FUN_10a3a4fc4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a14efe0();
  *(undefined1 *)((long)param_1 + 100) = 1;
  if ((char)param_1[5] == '\x05') {
    lVar4 = param_1[6];
    FUN_10a772f84(&plStack_40,*(undefined8 *)(param_1[7] + 0xb90));
    if (plStack_40 == (long *)0x0) {
      plStack_40 = (long *)0x0;
    }
    else {
      (**(code **)(*plStack_40 + 0x48))(plStack_40,lVar4);
    }
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    return plStack_40;
  }
  return param_1;
}



/* Entry: 10a3a4fd0; end: 10a3a5013;  */

long * FUN_10a3a4fd0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_30;
  long *plStack_28;
  
  *(undefined1 *)((long)param_1 + 100) = 1;
  if ((char)param_1[5] == '\x05') {
    lVar4 = param_1[6];
    FUN_10a772f84(&plStack_30,*(undefined8 *)(param_1[7] + 0xb90));
    if (plStack_30 == (long *)0x0) {
      plStack_30 = (long *)0x0;
    }
    else {
      (**(code **)(*plStack_30 + 0x48))(plStack_30,lVar4);
    }
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
    return plStack_30;
  }
  return param_1;
}



/* Entry: 10a3a5014; end: 10a3a5097;  */

void FUN_10a3a5014(undefined8 param_1,long param_2)

{
  char cStack_31;
  
  if (((*(byte *)(param_2 + 0x4a) & 1) != 0) || (*(char *)(param_2 + 0x49) == '\x01')) {
    cStack_31 = '\0';
    FUN_10a420138(param_2 + 0x40,&cStack_31);
    if (cStack_31 == '\x01') {
      FUN_10a773480(*(undefined8 *)(*(long *)(param_2 + 0x38) + 0xb90),
                    *(undefined8 *)(param_2 + 0x30));
      *(undefined1 *)(param_2 + 0x28) = 2;
    }
    FUN_10a773274(param_1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0xb90),
                  *(undefined8 *)(param_2 + 0x30));
  }
  return;
}



/* Entry: 10a3a5098; end: 10a3a50e3;  */

void FUN_10a3a5098(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3a509c);
  (*pcVar1)();
}



/* Entry: 10a3a50e4; end: 10a3a50ff;  */

void FUN_10a3a50e4(undefined8 param_1)

{
  FUN_10a420f70(param_1,&PTR_PTR_110bc8e30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a5100; end: 10a3a5183;  */

long FUN_10a3a5100(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a3a5184; end: 10a3a51a3;  */

void FUN_10a3a5184(long param_1)

{
  FUN_10a420f70(param_1 + -0x10,&PTR_PTR_110bc8e30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a51a4; end: 10a3a51b3;  */

void FUN_10a3a51a4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_FUN_110bcc180;
  param_1[-5] = &PTR_DAT_110bd5880;
  *param_1 = &PTR_DAT_110bd58d8;
  param_1[6] = &PTR_DAT_110bd58f8;
  param_1[0xf] = &PTR_DAT_110bd5968;
  param_1[0x97] = &PTR_DAT_110bcc3e0;
  param_1[0x10] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x95);
  func_0x00010a004e5c(param_1 + 0x93);
  param_1[0x6b] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x89;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x7f;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x7c;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x77);
  puStack_28 = param_1 + 0x71;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6e;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x6a];
  param_1[0x6a] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x5c] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x65);
  FUN_10a44a358(param_1 + 0x5e);
  plVar2 = (long *)param_1[0x5b];
  param_1[0x5b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x59,0);
  FUN_10a4477fc(param_1 + 0x57);
  func_0x00010a4477a4(param_1 + 0x55);
  func_0x00010a4476d0(param_1 + 0x50);
  FUN_10a44763c(param_1 + 0x4d);
  if (param_1[0x4c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x45);
  if (param_1[0x43] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -7,&PTR_PTR_110bc8e38);
  return;
}



/* Entry: 10a3a51b4; end: 10a3a51d3;  */

void FUN_10a3a51b4(long param_1)

{
  FUN_10a420f70(param_1 + -0x38,&PTR_PTR_110bc8e30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a51d4; end: 10a3a51e3;  */

void FUN_10a3a51d4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0xd] = &PTR_FUN_110bcc180;
  param_1[-0xb] = &PTR_DAT_110bd5880;
  param_1[-6] = &PTR_DAT_110bd58d8;
  *param_1 = &PTR_DAT_110bd58f8;
  param_1[9] = &PTR_DAT_110bd5968;
  param_1[0x91] = &PTR_DAT_110bcc3e0;
  param_1[10] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x8f);
  func_0x00010a004e5c(param_1 + 0x8d);
  param_1[0x65] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x80;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x79;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x71);
  puStack_28 = param_1 + 0x6b;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x68;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[100];
  param_1[100] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x56] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x5f);
  FUN_10a44a358(param_1 + 0x58);
  plVar2 = (long *)param_1[0x55];
  param_1[0x55] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x53,0);
  FUN_10a4477fc(param_1 + 0x51);
  func_0x00010a4477a4(param_1 + 0x4f);
  func_0x00010a4476d0(param_1 + 0x4a);
  FUN_10a44763c(param_1 + 0x47);
  if (param_1[0x46] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x44] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x42] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x3f);
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0xd,&PTR_PTR_110bc8e38);
  return;
}



/* Entry: 10a3a51e4; end: 10a3a5203;  */

void FUN_10a3a51e4(long param_1)

{
  FUN_10a420f70(param_1 + -0x68,&PTR_PTR_110bc8e30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a5204; end: 10a3a5213;  */

void FUN_10a3a5204(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x16] = &PTR_FUN_110bcc180;
  param_1[-0x14] = &PTR_DAT_110bd5880;
  param_1[-0xf] = &PTR_DAT_110bd58d8;
  param_1[-9] = &PTR_DAT_110bd58f8;
  *param_1 = &PTR_DAT_110bd5968;
  param_1[0x88] = &PTR_DAT_110bcc3e0;
  param_1[1] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x86);
  func_0x00010a004e5c(param_1 + 0x84);
  param_1[0x5c] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x7a;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x77;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x70;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6d;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x68);
  puStack_28 = param_1 + 0x62;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x5f;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x5b];
  param_1[0x5b] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x4d] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x56);
  FUN_10a44a358(param_1 + 0x4f);
  plVar2 = (long *)param_1[0x4c];
  param_1[0x4c] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x4a,0);
  FUN_10a4477fc(param_1 + 0x48);
  func_0x00010a4477a4(param_1 + 0x46);
  func_0x00010a4476d0(param_1 + 0x41);
  FUN_10a44763c(param_1 + 0x3e);
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x3b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x39] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x36);
  if (param_1[0x34] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0x16,&PTR_PTR_110bc8e38);
  return;
}



/* Entry: 10a3a5214; end: 10a3a5233;  */

void FUN_10a3a5214(long param_1)

{
  FUN_10a420f70(param_1 + -0xb0,&PTR_PTR_110bc8e30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a5234; end: 10a3a52a7;  */

undefined8 FUN_10a3a5234(void)

{
  return 0xf958f4765190996;
}



/* Entry: 10a3a52a8; end: 10a3a52c7;  */

void FUN_10a3a52a8(long param_1)

{
  FUN_10a420f70(param_1 + -0xb8,&PTR_PTR_110bc8e30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3a52c8; end: 10a3a52df;  */

void FUN_10a3a52c8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110bcc180;
  puVar1[2] = &PTR_DAT_110bd5880;
  puVar1[7] = &PTR_DAT_110bd58d8;
  puVar1[0xd] = &PTR_DAT_110bd58f8;
  puVar1[0x16] = &PTR_DAT_110bd5968;
  puVar1[0x9e] = &PTR_DAT_110bcc3e0;
  puVar1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(puVar1 + 0x9c);
  func_0x00010a004e5c(puVar1 + 0x9a);
  puVar1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = puVar1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(puVar1 + 0x7e);
  puStack_28 = puVar1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar2 = puVar1[0x71];
  puVar1[0x71] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  puVar1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(puVar1 + 0x6c);
  FUN_10a44a358(puVar1 + 0x65);
  plVar3 = (long *)puVar1[0x62];
  puVar1[0x62] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a425f6c(puVar1 + 0x60,0);
  FUN_10a4477fc(puVar1 + 0x5e);
  func_0x00010a4477a4(puVar1 + 0x5c);
  func_0x00010a4476d0(puVar1 + 0x57);
  FUN_10a44763c(puVar1 + 0x54);
  if (puVar1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(puVar1 + 0x4c);
  if (puVar1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(puVar1,&PTR_PTR_110bc8e38);
  return;
}



/* Entry: 10a3a52e0; end: 10a3a5317;  */

void FUN_10a3a52e0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a420f70((long)param_1 + lVar1,&PTR_PTR_110bc8e30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a3a5318; end: 10a3a5327;  */

long FUN_10a3a5318(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a3a5328; end: 10a3a5353;  */

void FUN_10a3a5328(long *param_1)

{
  long lVar1;
  long lVar2;
  char cStack_21;
  
  lVar2 = param_1[1];
  (**(code **)(*param_1 + 0x38))();
  cStack_21 = (char)param_1;
  if ((uint)*(byte *)(lVar2 + 0x48) != (uint)param_1) {
    FUN_10a03dff0(*(undefined8 *)(lVar2 + 0x18),&cStack_21);
    lVar1 = 0x28;
    if (cStack_21 == '\0') {
      lVar1 = 0x38;
    }
    FUN_10a07e58c(*(undefined8 *)(lVar2 + lVar1));
    *(char *)(lVar2 + 0x48) = cStack_21;
  }
  return;
}



/* Entry: 10a3a5354; end: 10a3a536b;  */

void FUN_10a3a5354(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3a5358);
  (*pcVar1)();
}



/* Entry: 10a3a536c; end: 10a3a53bb;  */

void FUN_10a3a536c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar2 = *(long *)(param_1 + 0x5e8);
    uVar1 = *(uint *)(lVar2 + 0xf8);
    if (uVar1 != 0xffffffff) break;
    unaff_x30 = FUN_10a3a53bc;
    FUN_10a0d459c();
    param_1 = param_1 + -0x4f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
  }
  *(undefined **)((long)register0x00000008 + -0x18) = &UNK_10e4b16d3;
  (*(code *)(&PTR_FUN_110bcec88)[uVar1])
            ((undefined1 *)((long)register0x00000008 + -0x18),lVar2 + 0xe8);
  return;
}



/* Entry: 10a3a53bc; end: 10a3a53cf;  */

void FUN_10a3a53bc(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar2 = param_1 + -0x4f0;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar3 = *(long *)(param_1 + 0xf8);
    uVar1 = *(uint *)(lVar3 + 0xf8);
    if (uVar1 != 0xffffffff) break;
    unaff_x30 = FUN_10a3a53bc;
    FUN_10a0d459c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    param_1 = lVar2;
  }
  *(undefined **)((long)register0x00000008 + -0x18) = &UNK_10e4b16d3;
  (*(code *)(&PTR_FUN_110bcec88)[uVar1])
            ((undefined1 *)((long)register0x00000008 + -0x18),lVar3 + 0xe8);
  return;
}


