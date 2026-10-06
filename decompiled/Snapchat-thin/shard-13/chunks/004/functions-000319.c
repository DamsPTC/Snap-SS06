/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a689394; end: 10a68946b;  */

/* WARNING: Removing unreachable block (ram,0x00010a68942c) */

undefined1  [16] FUN_10a689394(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c0b5,0x19);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a007c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68946c; end: 10a689567;  */

undefined8 * FUN_10a68946c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  param_1[0x66] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x69) = 0x100;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  puVar1 = param_1;
  FUN_10a589324(param_1,&PTR_PTR_110c090f0,param_2,param_3,param_4);
  FUN_10a3f840c(puVar1 + 0x61);
  *param_1 = &PTR_FUN_110c08ed0;
  param_1[2] = &PTR_DAT_110c08f90;
  param_1[7] = &PTR_FUN_110c08fe8;
  param_1[0x13] = &PTR_FUN_110c09010;
  param_1[0x66] = &PTR_FUN_110c090b0;
  param_1[0x61] = &PTR_FUN_110c09058;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 10;
  if (param_2 != 0) {
    FUN_10a5ae998(param_1[0x62],&PTR_DAT_110bd3150,param_2,param_1 + 0x61);
  }
  return param_1;
}



/* Entry: 10a689568; end: 10a6895c3;  */

void FUN_10a689568(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x328) = 1;
  }
  else if (*(uint *)(param_1 + 0x328) < 2) {
    FUN_10a76c260(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x8d8),0x11);
    *(undefined4 *)(param_1 + 0x328) = 2;
    if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
      uStack_48 = *(undefined8 *)(param_1 + 0x70);
      uStack_50 = *(undefined8 *)(param_1 + 0x68);
      if (*(long *)(param_1 + 0x70) != 0) {
        plVar1 = (long *)(*(long *)(param_1 + 0x70) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_38 = *(undefined8 *)(param_1 + 0x80);
      uStack_40 = *(undefined8 *)(param_1 + 0x78);
      if (*(long *)(param_1 + 0x80) != 0) {
        plVar1 = (long *)(*(long *)(param_1 + 0x80) + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      bStack_30 = 1;
      func_0x00010a58dd14(&uStack_70);
      plStack_58 = plStack_68;
      uStack_60 = uStack_70;
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar1 = plStack_68 + 1;
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
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
        }
      }
      if ((bStack_30 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a58630c);
        (*pcVar4)();
      }
      FUN_10a58dda4(uStack_50,&uStack_60);
      if (plStack_58 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (bStack_30 == 1) {
        FUN_10a688c1c(&uStack_50);
      }
    }
    return;
  }
  return;
}



/* Entry: 10a6895c4; end: 10a6895d3;  */

void FUN_10a6895c4(long param_1)

{
  *(undefined4 *)(param_1 + 0x328) = 0;
  return;
}



/* Entry: 10a6895d4; end: 10a689757;  */

void FUN_10a6895d4(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar2 = (undefined8 *)(param_2 + 0x60);
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_4 + 0xb0);
  }
  uVar8 = *puVar2;
  lVar7 = param_2;
  func_0x00010a0fda30();
  plVar5 = (long *)0x368;
  __Znwm();
  plVar9 = plVar5 + 1;
  *plVar9 = 0;
  plVar5[2] = 0;
  plVar6 = plVar5 + 3;
  *plVar5 = (long)&PTR_FUN_110c0cef8;
  FUN_10a68946c(plVar6,uVar8,lVar7,param_3);
  lVar7 = plVar5[9];
  if (lVar7 == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar6;
    plVar5[9] = (long)plVar5;
  }
  else {
    if (*(long *)(lVar7 + 8) != -1) goto LAB_10a6896ec;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar6;
    plVar5[9] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
  }
  do {
    lVar7 = *plVar9;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a6896ec:
  *(undefined4 *)((long)plVar6 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(plVar6 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  FUN_10a3a754c(plVar6 + 0x18,param_2 + 0xc0);
  *param_1 = plVar6;
  param_1[1] = plVar5;
  return;
}



/* Entry: 10a689758; end: 10a6897db;  */

undefined1  [16] FUN_10a689758(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x18;
  auVar1._0_8_ = &UNK_10f66c0cf;
  return auVar1;
}



/* Entry: 10a6897dc; end: 10a68982f;  */

void FUN_10a6897dc(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f66b8c1;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f66b8c1;
  uStack_18 = 0xffffffff;
  FUN_10a689830(param_1,&uStack_58);
  FUN_10a6a03c8();
  return;
}



/* Entry: 10a689830; end: 10a689907;  */

/* WARNING: Removing unreachable block (ram,0x00010a6898c8) */

undefined1  [16] FUN_10a689830(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c0cf,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a02cc(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a689908; end: 10a689a03;  */

undefined8 * FUN_10a689908(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  param_1[0x66] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x69) = 0x100;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  puVar1 = param_1;
  FUN_10a589324(param_1,&PTR_PTR_110c09360,param_2,param_3,param_4);
  FUN_10a3f840c(puVar1 + 0x61);
  *param_1 = &PTR_FUN_110c09140;
  param_1[2] = &PTR_DAT_110c09200;
  param_1[7] = &PTR_FUN_110c09258;
  param_1[0x13] = &PTR_FUN_110c09280;
  param_1[0x66] = &PTR_FUN_110c09320;
  param_1[0x61] = &PTR_FUN_110c092c8;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 10;
  if (param_2 != 0) {
    FUN_10a5ae998(param_1[0x62],&PTR_DAT_110bd3150,param_2,param_1 + 0x61);
  }
  return param_1;
}



/* Entry: 10a689a04; end: 10a689a6b;  */

void FUN_10a689a04(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  if (param_2 == 0) {
    if (*(uint *)(param_1 + 0x328) == 2) {
      FUN_10a76c260(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x8d8),0x12);
      *(undefined4 *)(param_1 + 0x328) = 1;
      if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
        uStack_48 = *(undefined8 *)(param_1 + 0x70);
        uStack_50 = *(undefined8 *)(param_1 + 0x68);
        if (*(long *)(param_1 + 0x70) != 0) {
          plVar1 = (long *)(*(long *)(param_1 + 0x70) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_38 = *(undefined8 *)(param_1 + 0x80);
        uStack_40 = *(undefined8 *)(param_1 + 0x78);
        if (*(long *)(param_1 + 0x80) != 0) {
          plVar1 = (long *)(*(long *)(param_1 + 0x80) + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        bStack_30 = 1;
        func_0x00010a58dd14(&uStack_70);
        plStack_58 = plStack_68;
        uStack_60 = uStack_70;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar1 = plStack_68 + 1;
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
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
          }
        }
        if ((bStack_30 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a58630c);
          (*pcVar4)();
        }
        FUN_10a58dda4(uStack_50,&uStack_60);
        if (plStack_58 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (bStack_30 == 1) {
          FUN_10a688c1c(&uStack_50);
        }
      }
      return;
    }
  }
  else if (*(uint *)(param_1 + 0x328) < 2) {
    *(undefined4 *)(param_1 + 0x328) = 2;
  }
  return;
}



/* Entry: 10a689a6c; end: 10a689a7b;  */

void FUN_10a689a6c(long param_1)

{
  *(undefined4 *)(param_1 + 0x328) = 0;
  return;
}



/* Entry: 10a689a7c; end: 10a689bff;  */

void FUN_10a689a7c(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar2 = (undefined8 *)(param_2 + 0x60);
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_4 + 0xb0);
  }
  uVar8 = *puVar2;
  lVar7 = param_2;
  func_0x00010a0fda30();
  plVar5 = (long *)0x368;
  __Znwm();
  plVar9 = plVar5 + 1;
  *plVar9 = 0;
  plVar5[2] = 0;
  plVar6 = plVar5 + 3;
  *plVar5 = (long)&PTR_FUN_110c0cf48;
  FUN_10a689908(plVar6,uVar8,lVar7,param_3);
  lVar7 = plVar5[9];
  if (lVar7 == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar6;
    plVar5[9] = (long)plVar5;
  }
  else {
    if (*(long *)(lVar7 + 8) != -1) goto LAB_10a689b94;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar6;
    plVar5[9] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
  }
  do {
    lVar7 = *plVar9;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a689b94:
  *(undefined4 *)((long)plVar6 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(plVar6 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  FUN_10a3a754c(plVar6 + 0x18,param_2 + 0xc0);
  *param_1 = plVar6;
  param_1[1] = plVar5;
  return;
}



/* Entry: 10a689c00; end: 10a689c27;  */

undefined1  [16] FUN_10a689c00(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f66c0e8;
  return auVar1;
}



/* Entry: 10a689c28; end: 10a689d1f;  */

void FUN_10a689c28(undefined8 param_1)

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
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66b8c1;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a689d20(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b914;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x12c00000135;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f66b8c1;
  uStack_38 = 0;
  FUN_10a6a0618();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f66b922;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f66b8c1;
  uStack_38 = 0;
  func_0x00010a6a08f8(param_1,&puStack_98);
  FUN_10a6a0ae4(param_1);
  return;
}



/* Entry: 10a689d20; end: 10a689df7;  */

/* WARNING: Removing unreachable block (ram,0x00010a689db8) */

undefined1  [16] FUN_10a689d20(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c0e8,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a051c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a689df8; end: 10a689eab;  */

void FUN_10a689df8(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110c09398,0);
  *(int *)(param_1 + 0xd8) = (int)plVar1;
  FUN_10a4c3348(param_2,&PTR_DAT_110bb3700,param_1 + 0xc0);
  if (*(int *)(param_1 + 0xd8) != 0) {
    lVar2 = *(long *)(param_1 + 0x60);
    func_0x000107c2b054(auStack_38,&UNK_10f66b92c);
    if (lVar2 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar2 + 0x8d8),auStack_38);
    }
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10a689eac; end: 10a689ebf;  */

void FUN_10a689eac(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  uVar4 = 1;
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar2 = param_1;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    *(undefined8 *)(puVar1 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)(puVar1 + -0x90) = 0;
    *(undefined4 *)(puVar1 + -0x58) = 0;
    unaff_x21 = puVar1 + -0x90;
    *(undefined4 *)(puVar1 + -0x50) = uVar4;
    puVar1[-0x4c] = 0;
    puVar1[-0x48] = 0;
    *(undefined4 *)(puVar1 + -0x44) = 0xffffffff;
    puVar1[-0x40] = 0;
    puVar1[-0x3c] = 0;
    FUN_10a22d054(puVar1 + -0x148,puVar1 + -0x90);
    *(undefined8 *)(puVar1 + -0x100) = *(undefined8 *)(puVar1 + -0x48);
    *(undefined8 *)(puVar1 + -0x108) = *(undefined8 *)(puVar1 + -0x50);
    *(undefined8 *)(puVar1 + -0xfb) = *(undefined8 *)(puVar1 + -0x43);
    puVar3 = puVar2 + 0xc0;
    FUN_10ab17db4(puVar1 + -0xf0,puVar1 + -0x148,puVar3,*(undefined4 *)(puVar2 + 0xd8));
    if (puVar1[-0x98] == '\x01') {
      puVar3 = puVar1 + -0xf0;
      FUN_10a4c3ba4(param_2 + 0x58);
      if (puVar1[-0x98] == '\x01') {
        FUN_10a22d0f8(puVar1 + -0xf0);
      }
    }
    param_2 = puVar3;
    FUN_10a22d0f8(puVar1 + -0x148);
    unaff_x19 = puVar1 + -0x90;
    FUN_10a22d0f8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x38)) break;
    ___stack_chk_fail();
    if (puVar1[-0x98] == '\x01') {
      FUN_10a22d0f8(puVar1 + -0xf0);
    }
    FUN_10a22d0f8(puVar1 + -0x148);
    FUN_10a22d0f8(puVar1 + -0x90);
    unaff_x30 = FUN_10a68645c;
    puVar3 = unaff_x19;
    __Unwind_Resume();
    uVar4 = 9;
    puVar1 = puVar1 + -0x150;
    param_1 = puVar3 + -0x98;
    unaff_x20 = puVar2;
  }
  return;
}



/* Entry: 10a689ec0; end: 10a689fd3;  */

long * FUN_10a689ec0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_258 [544];
  undefined1 uStack_38;
  
  lVar7 = *(long *)(param_2 + 0x68);
  plVar4 = param_1 + 0x18;
  func_0x00010ab17e00(plVar4,(int)param_1[0x1b]);
  plVar8 = (long *)0x0;
  if (lVar7 != 0) {
    plVar5 = *(long **)(lVar7 + 0x28);
    plVar1 = *(long **)(lVar7 + 0x30);
    if (plVar5 == plVar1) {
LAB_10a689f28:
      plVar8 = (long *)0x0;
      if (plVar5 != plVar1) {
        plVar8 = plVar5;
      }
    }
    else {
      do {
        if (((int)*plVar5 == (int)plVar4) &&
           (*(int *)((long)plVar5 + 4) == (int)((ulong)plVar4 >> 0x20))) goto LAB_10a689f28;
        plVar5 = plVar5 + 0x44;
      } while (plVar5 != plVar1);
      plVar8 = (long *)0x0;
    }
  }
  plVar4 = param_1 + 0x13;
  (**(code **)(*plVar4 + 0x30))();
  FUN_10ab6e450();
  if (plVar4 == (long *)0x0) {
    if (plVar8 != (long *)0x0) {
      param_1[0x1c] = *plVar8;
      if ((char)param_1[0x60] == '\x01') {
        FUN_10a14c1dc();
        if (param_1[0x53] != plVar8[0x37]) {
          func_0x000107c2acd4(param_1 + 0x52);
          lVar7 = plVar8[0x36];
          param_1[0x53] = plVar8[0x37];
          param_1[0x52] = lVar7;
          if (param_1[0x53] != 0) {
            piVar6 = (int *)(param_1[0x53] + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar3) {
                *piVar6 = *piVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        if (param_1[0x55] != plVar8[0x39]) {
          func_0x000107c2acd4(param_1 + 0x54);
          lVar7 = plVar8[0x38];
          param_1[0x55] = plVar8[0x39];
          param_1[0x54] = lVar7;
          if (param_1[0x55] != 0) {
            piVar6 = (int *)(param_1[0x55] + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar3) {
                *piVar6 = *piVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        if (param_1[0x57] != plVar8[0x3b]) {
          func_0x000107c2acd4(param_1 + 0x56);
          lVar7 = plVar8[0x3a];
          param_1[0x57] = plVar8[0x3b];
          param_1[0x56] = lVar7;
          if (param_1[0x57] != 0) {
            piVar6 = (int *)(param_1[0x57] + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar3) {
                *piVar6 = *piVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        if (param_1[0x59] != plVar8[0x3d]) {
          func_0x000107c2acd4(param_1 + 0x58);
          lVar7 = plVar8[0x3c];
          param_1[0x59] = plVar8[0x3d];
          param_1[0x58] = lVar7;
          if (param_1[0x59] != 0) {
            piVar6 = (int *)(param_1[0x59] + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar3) {
                *piVar6 = *piVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        if (param_1[0x5b] != plVar8[0x3f]) {
          func_0x000107c2acd4(param_1 + 0x5a);
          lVar7 = plVar8[0x3e];
          param_1[0x5b] = plVar8[0x3f];
          param_1[0x5a] = lVar7;
          if (param_1[0x5b] != 0) {
            piVar6 = (int *)(param_1[0x5b] + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar3) {
                *piVar6 = *piVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        if (param_1[0x5d] != plVar8[0x41]) {
          func_0x000107c2acd4(param_1 + 0x5c);
          lVar7 = plVar8[0x40];
          param_1[0x5d] = plVar8[0x41];
          param_1[0x5c] = lVar7;
          if (param_1[0x5d] != 0) {
            piVar6 = (int *)(param_1[0x5d] + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar3) {
                *piVar6 = *piVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        if (param_1[0x5f] != plVar8[0x43]) {
          func_0x000107c2acd4(param_1 + 0x5e);
          lVar7 = plVar8[0x42];
          param_1[0x5f] = plVar8[0x43];
          param_1[0x5e] = lVar7;
          if (param_1[0x5f] != 0) {
            piVar6 = (int *)(param_1[0x5f] + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar3) {
                *piVar6 = *piVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
      }
      else {
        FUN_10a14c0b0(param_1 + 0x1d,plVar8 + 1);
        param_1[0x52] = (long)&PTR_SUB_110b01d60;
        lVar7 = plVar8[0x36];
        param_1[0x53] = plVar8[0x37];
        param_1[0x52] = lVar7;
        if (param_1[0x53] != 0) {
          piVar6 = (int *)(param_1[0x53] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
              *piVar6 = *piVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        param_1[0x52] = (long)&PTR_DAT_110b05358;
        param_1[0x54] = (long)&PTR_SUB_110b01d60;
        lVar7 = plVar8[0x38];
        param_1[0x55] = plVar8[0x39];
        param_1[0x54] = lVar7;
        if (param_1[0x55] != 0) {
          piVar6 = (int *)(param_1[0x55] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
              *piVar6 = *piVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        param_1[0x54] = (long)&PTR_DAT_110b05018;
        param_1[0x56] = (long)&PTR_SUB_110b01d60;
        lVar7 = plVar8[0x3a];
        param_1[0x57] = plVar8[0x3b];
        param_1[0x56] = lVar7;
        if (param_1[0x57] != 0) {
          piVar6 = (int *)(param_1[0x57] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
              *piVar6 = *piVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        param_1[0x56] = (long)&PTR_DAT_110b05018;
        param_1[0x58] = (long)&PTR_SUB_110b01d60;
        lVar7 = plVar8[0x3c];
        param_1[0x59] = plVar8[0x3d];
        param_1[0x58] = lVar7;
        if (param_1[0x59] != 0) {
          piVar6 = (int *)(param_1[0x59] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
              *piVar6 = *piVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        param_1[0x58] = (long)&PTR_DAT_110b05018;
        param_1[0x5a] = (long)&PTR_SUB_110b01d60;
        lVar7 = plVar8[0x3e];
        param_1[0x5b] = plVar8[0x3f];
        param_1[0x5a] = lVar7;
        if (param_1[0x5b] != 0) {
          piVar6 = (int *)(param_1[0x5b] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
              *piVar6 = *piVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        param_1[0x5a] = (long)&PTR_DAT_110b05018;
        param_1[0x5c] = (long)&PTR_SUB_110b01d60;
        lVar7 = plVar8[0x40];
        param_1[0x5d] = plVar8[0x41];
        param_1[0x5c] = lVar7;
        if (param_1[0x5d] != 0) {
          piVar6 = (int *)(param_1[0x5d] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
              *piVar6 = *piVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        param_1[0x5c] = (long)&PTR_DAT_110b05018;
        param_1[0x5e] = (long)&PTR_SUB_110b01d60;
        lVar7 = plVar8[0x42];
        param_1[0x5f] = plVar8[0x43];
        param_1[0x5e] = lVar7;
        if (param_1[0x5f] != 0) {
          piVar6 = (int *)(param_1[0x5f] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
              *piVar6 = *piVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        param_1[0x5e] = (long)&PTR_DAT_110b05018;
        *(undefined1 *)(param_1 + 0x60) = 1;
      }
      return param_1 + 0x1c;
    }
    auStack_258[0] = 0;
    uStack_38 = 0;
    func_0x00010a69bd44(param_1 + 0x1c,auStack_258);
    param_1 = (long *)auStack_258;
    FUN_10a58e034(param_1);
  }
  else {
    auStack_258[0] = 0;
    uStack_38 = 0;
    func_0x00010a69bd44(param_1 + 0x1c,auStack_258);
    FUN_10a58e034(auStack_258);
    (**(code **)(*param_1 + 0x88))(param_1,plVar8);
  }
  return param_1;
}



/* Entry: 10a689fd4; end: 10a68a30f;  */

undefined8 * FUN_10a689fd4(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  if (*(char *)(param_1 + 0x44) == '\x01') {
    FUN_10a14c1dc();
    if (param_1[0x37] != param_2[0x37]) {
      func_0x000107c2acd4(param_1 + 0x36);
      uVar4 = param_2[0x36];
      param_1[0x37] = param_2[0x37];
      param_1[0x36] = uVar4;
      if (param_1[0x37] != 0) {
        piVar3 = (int *)(param_1[0x37] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar2) {
            *piVar3 = *piVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    if (param_1[0x39] != param_2[0x39]) {
      func_0x000107c2acd4(param_1 + 0x38);
      uVar4 = param_2[0x38];
      param_1[0x39] = param_2[0x39];
      param_1[0x38] = uVar4;
      if (param_1[0x39] != 0) {
        piVar3 = (int *)(param_1[0x39] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar2) {
            *piVar3 = *piVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    if (param_1[0x3b] != param_2[0x3b]) {
      func_0x000107c2acd4(param_1 + 0x3a);
      uVar4 = param_2[0x3a];
      param_1[0x3b] = param_2[0x3b];
      param_1[0x3a] = uVar4;
      if (param_1[0x3b] != 0) {
        piVar3 = (int *)(param_1[0x3b] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar2) {
            *piVar3 = *piVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    if (param_1[0x3d] != param_2[0x3d]) {
      func_0x000107c2acd4(param_1 + 0x3c);
      uVar4 = param_2[0x3c];
      param_1[0x3d] = param_2[0x3d];
      param_1[0x3c] = uVar4;
      if (param_1[0x3d] != 0) {
        piVar3 = (int *)(param_1[0x3d] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar2) {
            *piVar3 = *piVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    if (param_1[0x3f] != param_2[0x3f]) {
      func_0x000107c2acd4(param_1 + 0x3e);
      uVar4 = param_2[0x3e];
      param_1[0x3f] = param_2[0x3f];
      param_1[0x3e] = uVar4;
      if (param_1[0x3f] != 0) {
        piVar3 = (int *)(param_1[0x3f] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar2) {
            *piVar3 = *piVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    if (param_1[0x41] != param_2[0x41]) {
      func_0x000107c2acd4(param_1 + 0x40);
      uVar4 = param_2[0x40];
      param_1[0x41] = param_2[0x41];
      param_1[0x40] = uVar4;
      if (param_1[0x41] != 0) {
        piVar3 = (int *)(param_1[0x41] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar2) {
            *piVar3 = *piVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    if (param_1[0x43] != param_2[0x43]) {
      func_0x000107c2acd4(param_1 + 0x42);
      uVar4 = param_2[0x42];
      param_1[0x43] = param_2[0x43];
      param_1[0x42] = uVar4;
      if (param_1[0x43] != 0) {
        piVar3 = (int *)(param_1[0x43] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar2) {
            *piVar3 = *piVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
  }
  else {
    FUN_10a14c0b0(param_1 + 1,param_2 + 1);
    param_1[0x36] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x36];
    param_1[0x37] = param_2[0x37];
    param_1[0x36] = uVar4;
    if (param_1[0x37] != 0) {
      piVar3 = (int *)(param_1[0x37] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[0x36] = &PTR_DAT_110b05358;
    param_1[0x38] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x38];
    param_1[0x39] = param_2[0x39];
    param_1[0x38] = uVar4;
    if (param_1[0x39] != 0) {
      piVar3 = (int *)(param_1[0x39] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[0x38] = &PTR_DAT_110b05018;
    param_1[0x3a] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x3a];
    param_1[0x3b] = param_2[0x3b];
    param_1[0x3a] = uVar4;
    if (param_1[0x3b] != 0) {
      piVar3 = (int *)(param_1[0x3b] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[0x3a] = &PTR_DAT_110b05018;
    param_1[0x3c] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x3c];
    param_1[0x3d] = param_2[0x3d];
    param_1[0x3c] = uVar4;
    if (param_1[0x3d] != 0) {
      piVar3 = (int *)(param_1[0x3d] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[0x3c] = &PTR_DAT_110b05018;
    param_1[0x3e] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x3e];
    param_1[0x3f] = param_2[0x3f];
    param_1[0x3e] = uVar4;
    if (param_1[0x3f] != 0) {
      piVar3 = (int *)(param_1[0x3f] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[0x3e] = &PTR_DAT_110b05018;
    param_1[0x40] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x40];
    param_1[0x41] = param_2[0x41];
    param_1[0x40] = uVar4;
    if (param_1[0x41] != 0) {
      piVar3 = (int *)(param_1[0x41] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[0x40] = &PTR_DAT_110b05018;
    param_1[0x42] = &PTR_SUB_110b01d60;
    uVar4 = param_2[0x42];
    param_1[0x43] = param_2[0x43];
    param_1[0x42] = uVar4;
    if (param_1[0x43] != 0) {
      piVar3 = (int *)(param_1[0x43] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[0x42] = &PTR_DAT_110b05018;
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  return param_1;
}



/* Entry: 10a68a310; end: 10a68a317;  */

long * FUN_10a68a310(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_258 [544];
  undefined1 uStack_38;
  
  plVar5 = param_1 + -0x13;
  lVar8 = *(long *)(param_2 + 0x68);
  plVar4 = param_1 + 5;
  func_0x00010ab17e00(plVar4,(int)param_1[8]);
  plVar9 = (long *)0x0;
  if (lVar8 != 0) {
    plVar6 = *(long **)(lVar8 + 0x28);
    plVar1 = *(long **)(lVar8 + 0x30);
    if (plVar6 == plVar1) {
LAB_10a689f28:
      plVar9 = (long *)0x0;
      if (plVar6 != plVar1) {
        plVar9 = plVar6;
      }
    }
    else {
      do {
        if (((int)*plVar6 == (int)plVar4) &&
           (*(int *)((long)plVar6 + 4) == (int)((ulong)plVar4 >> 0x20))) goto LAB_10a689f28;
        plVar6 = plVar6 + 0x44;
      } while (plVar6 != plVar1);
      plVar9 = (long *)0x0;
    }
  }
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x30))();
  FUN_10ab6e450();
  if (plVar4 == (long *)0x0) {
    if (plVar9 != (long *)0x0) {
      param_1[9] = *plVar9;
      if ((char)param_1[0x4d] == '\x01') {
        FUN_10a14c1dc();
        if (param_1[0x40] != plVar9[0x37]) {
          func_0x000107c2acd4(param_1 + 0x3f);
          lVar8 = plVar9[0x36];
          param_1[0x40] = plVar9[0x37];
          param_1[0x3f] = lVar8;
          if (param_1[0x40] != 0) {
            piVar7 = (int *)(param_1[0x40] + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
              if (bVar3) {
                *piVar7 = *piVar7 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        if (param_1[0x42] != plVar9[0x39]) {
          func_0x000107c2acd4(param_1 + 0x41);
          lVar8 = plVar9[0x38];
          param_1[0x42] = plVar9[0x39];
          param_1[0x41] = lVar8;
          if (param_1[0x42] != 0) {
            piVar7 = (int *)(param_1[0x42] + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
              if (bVar3) {
                *piVar7 = *piVar7 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        if (param_1[0x44] != plVar9[0x3b]) {
          func_0x000107c2acd4(param_1 + 0x43);
          lVar8 = plVar9[0x3a];
          param_1[0x44] = plVar9[0x3b];
          param_1[0x43] = lVar8;
          if (param_1[0x44] != 0) {
            piVar7 = (int *)(param_1[0x44] + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
              if (bVar3) {
                *piVar7 = *piVar7 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        if (param_1[0x46] != plVar9[0x3d]) {
          func_0x000107c2acd4(param_1 + 0x45);
          lVar8 = plVar9[0x3c];
          param_1[0x46] = plVar9[0x3d];
          param_1[0x45] = lVar8;
          if (param_1[0x46] != 0) {
            piVar7 = (int *)(param_1[0x46] + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
              if (bVar3) {
                *piVar7 = *piVar7 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        if (param_1[0x48] != plVar9[0x3f]) {
          func_0x000107c2acd4(param_1 + 0x47);
          lVar8 = plVar9[0x3e];
          param_1[0x48] = plVar9[0x3f];
          param_1[0x47] = lVar8;
          if (param_1[0x48] != 0) {
            piVar7 = (int *)(param_1[0x48] + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
              if (bVar3) {
                *piVar7 = *piVar7 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        if (param_1[0x4a] != plVar9[0x41]) {
          func_0x000107c2acd4(param_1 + 0x49);
          lVar8 = plVar9[0x40];
          param_1[0x4a] = plVar9[0x41];
          param_1[0x49] = lVar8;
          if (param_1[0x4a] != 0) {
            piVar7 = (int *)(param_1[0x4a] + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
              if (bVar3) {
                *piVar7 = *piVar7 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        if (param_1[0x4c] != plVar9[0x43]) {
          func_0x000107c2acd4(param_1 + 0x4b);
          lVar8 = plVar9[0x42];
          param_1[0x4c] = plVar9[0x43];
          param_1[0x4b] = lVar8;
          if (param_1[0x4c] != 0) {
            piVar7 = (int *)(param_1[0x4c] + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
              if (bVar3) {
                *piVar7 = *piVar7 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
      }
      else {
        FUN_10a14c0b0(param_1 + 10,plVar9 + 1);
        param_1[0x3f] = (long)&PTR_SUB_110b01d60;
        lVar8 = plVar9[0x36];
        param_1[0x40] = plVar9[0x37];
        param_1[0x3f] = lVar8;
        if (param_1[0x40] != 0) {
          piVar7 = (int *)(param_1[0x40] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
              *piVar7 = *piVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        param_1[0x3f] = (long)&PTR_DAT_110b05358;
        param_1[0x41] = (long)&PTR_SUB_110b01d60;
        lVar8 = plVar9[0x38];
        param_1[0x42] = plVar9[0x39];
        param_1[0x41] = lVar8;
        if (param_1[0x42] != 0) {
          piVar7 = (int *)(param_1[0x42] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
              *piVar7 = *piVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        param_1[0x41] = (long)&PTR_DAT_110b05018;
        param_1[0x43] = (long)&PTR_SUB_110b01d60;
        lVar8 = plVar9[0x3a];
        param_1[0x44] = plVar9[0x3b];
        param_1[0x43] = lVar8;
        if (param_1[0x44] != 0) {
          piVar7 = (int *)(param_1[0x44] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
              *piVar7 = *piVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        param_1[0x43] = (long)&PTR_DAT_110b05018;
        param_1[0x45] = (long)&PTR_SUB_110b01d60;
        lVar8 = plVar9[0x3c];
        param_1[0x46] = plVar9[0x3d];
        param_1[0x45] = lVar8;
        if (param_1[0x46] != 0) {
          piVar7 = (int *)(param_1[0x46] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
              *piVar7 = *piVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        param_1[0x45] = (long)&PTR_DAT_110b05018;
        param_1[0x47] = (long)&PTR_SUB_110b01d60;
        lVar8 = plVar9[0x3e];
        param_1[0x48] = plVar9[0x3f];
        param_1[0x47] = lVar8;
        if (param_1[0x48] != 0) {
          piVar7 = (int *)(param_1[0x48] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
              *piVar7 = *piVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        param_1[0x47] = (long)&PTR_DAT_110b05018;
        param_1[0x49] = (long)&PTR_SUB_110b01d60;
        lVar8 = plVar9[0x40];
        param_1[0x4a] = plVar9[0x41];
        param_1[0x49] = lVar8;
        if (param_1[0x4a] != 0) {
          piVar7 = (int *)(param_1[0x4a] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
              *piVar7 = *piVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        param_1[0x49] = (long)&PTR_DAT_110b05018;
        param_1[0x4b] = (long)&PTR_SUB_110b01d60;
        lVar8 = plVar9[0x42];
        param_1[0x4c] = plVar9[0x43];
        param_1[0x4b] = lVar8;
        if (param_1[0x4c] != 0) {
          piVar7 = (int *)(param_1[0x4c] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
              *piVar7 = *piVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        param_1[0x4b] = (long)&PTR_DAT_110b05018;
        *(undefined1 *)(param_1 + 0x4d) = 1;
      }
      return param_1 + 9;
    }
    auStack_258[0] = 0;
    uStack_38 = 0;
    func_0x00010a69bd44(param_1 + 9,auStack_258);
    plVar5 = (long *)auStack_258;
    FUN_10a58e034(plVar5);
  }
  else {
    auStack_258[0] = 0;
    uStack_38 = 0;
    func_0x00010a69bd44(param_1 + 9,auStack_258);
    FUN_10a58e034(auStack_258);
    (**(code **)(*plVar5 + 0x88))(plVar5,plVar9);
  }
  return plVar5;
}



/* Entry: 10a68a318; end: 10a68a36f;  */

void FUN_10a68a318(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1 + 0x13;
  (**(code **)(*plVar1 + 0x30))();
  FUN_10ab6e450();
  if (plVar1 != (long *)0x0) {
    return;
  }
  plVar1 = param_1 + 0x1c;
  if ((char)param_1[0x60] == '\0') {
    plVar1 = (long *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a68a36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,plVar1);
  return;
}



/* Entry: 10a68a370; end: 10a68a3ff;  */

undefined1  [16] FUN_10a68a370(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10f66c0fa;
  return auVar1;
}



/* Entry: 10a68a400; end: 10a68a4c7;  */

void FUN_10a68a400(undefined8 param_1)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f66b8c1;
  uStack_88 = 0;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_70 = 0xc1;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10a68a4c8(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f66b955;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f66b8c1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xc1;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a6a0c9c();
  FUN_10a6a0e04(param_1);
  return;
}



/* Entry: 10a68a4c8; end: 10a68a59f;  */

/* WARNING: Removing unreachable block (ram,0x00010a68a560) */

undefined1  [16] FUN_10a68a4c8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c0fa,0x19);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a0ba0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68a5a0; end: 10a68a653;  */

void FUN_10a68a5a0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a6a0ec0;
  ppuStack_60 = &PTR_FUN_110c0cf88;
  ppuVar8 = &PTR_DAT_110c0c9b0;
  ppcVar9 = &pcStack_68;
  uStack_58 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9b0,ppcVar9,0);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    pppuVar6 = pppuVar5 + 0xc;
    if (ppcVar9 != (code **)0x0) {
      pppuVar6 = (undefined ***)(ppcVar9 + 0x16);
    }
    ppuVar14 = *pppuVar6;
    pppuVar6 = pppuVar5;
    func_0x00010a0fda30();
    plVar7 = (long *)0xd8;
    __Znwm();
    plVar10 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar10 = 0;
    *plVar7 = (long)&PTR_DAT_110c0cfb0;
    plVar11 = plVar7 + 3;
    *plVar11 = (long)&PTR_FUN_110c0e760;
    *(undefined1 *)(plVar7 + 4) = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[0xb] = (long)pppuVar6;
    plVar7[0xc] = (long)ppuVar8;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0x800000000;
    plVar7[0xf] = (long)ppuVar14;
    *(undefined1 *)(plVar7 + 0x10) = 0;
    *(undefined1 *)(plVar7 + 0x14) = 0;
    *(undefined1 *)(plVar7 + 0x15) = 1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[5] = (long)&PTR_FUN_110c0e7f8;
    plVar7[10] = (long)&PTR_FUN_110c0e850;
    plVar7[0x18] = 0;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar7 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar7[8] = (long)plVar11;
    plVar7[9] = (long)plVar7;
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    *(undefined4 *)((long)plVar7 + 0x6c) = *(undefined4 *)((long)pppuVar5 + 0x54);
    ppuVar14 = pppuVar5[0x14];
    ppuVar8 = pppuVar5[0x13];
    if (pppuVar5[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar5[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar7[0x17];
    plVar7[0x17] = (long)ppuVar14;
    plVar7[0x16] = (long)ppuVar8;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar8 = pppuVar5[0x16];
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar14 = ppuVar8 + 1;
      do {
        puVar13 = *ppuVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar4) {
          *ppuVar14 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    extraout_x8[1] = plVar7;
    *extraout_x8 = plVar11;
    return;
  }
  return;
}



/* Entry: 10a68a654; end: 10a68a85f;  */

void FUN_10a68a654(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xd8;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0cfb0;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0e760;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_FUN_110c0e7f8;
  plVar4[10] = (long)&PTR_FUN_110c0e850;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1a] = 0;
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
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = *(long **)(param_2 + 0xb0);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a68a860();
  if (plVar6 != (long *)0x0) {
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
  param_1[1] = plVar4;
  *param_1 = plVar7;
  return;
}



/* Entry: 10a68a860; end: 10a68aacf;  */

undefined1  [16] FUN_10a68a860(undefined ***param_1,code **param_2,undefined ***param_3)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  undefined ****ppppuVar3;
  char cVar4;
  bool bVar5;
  code ***pppcVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined ***unaff_x20;
  undefined **ppuVar12;
  code **ppcVar13;
  undefined ***unaff_x21;
  code **ppcVar14;
  code **unaff_x22;
  undefined **ppuVar15;
  undefined ***unaff_x23;
  code ***unaff_x24;
  code ***pppcVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined **ppuStack_180;
  undefined ***pppuStack_178;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined ***pppuStack_158;
  long lStack_128;
  undefined1 *puStack_120;
  undefined ***pppuStack_118;
  code **ppcStack_110;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  code **ppcStack_e0;
  undefined ***apppuStack_d8 [2];
  code *pcStack_c8;
  undefined **ppuStack_c0;
  code **ppcStack_b8;
  code *pcStack_88;
  undefined **ppuStack_80;
  code **ppcStack_78;
  long lStack_48;
  
  pppcVar16 = &ppcStack_e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == (undefined ***)0x0) {
    pppuVar7 = (undefined ***)param_2[1];
    *param_2 = (code *)0x0;
    param_2[1] = (code *)0x0;
    if (pppuVar7 == (undefined ***)0x0) goto LAB_10a68aa74;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
      auVar20._8_8_ = param_2;
      auVar20._0_8_ = pppuVar7;
      return auVar20;
    }
  }
  else {
    unaff_x21 = param_1;
    if (param_3 == (undefined ***)0x0) {
      ppcVar13 = param_2;
      FUN_10a2d1b5c(&ppcStack_e0,param_1);
      if (apppuStack_d8[0] != (undefined ***)0x0) {
        pppuVar7 = apppuStack_d8[0] + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar5) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pppuVar7 = (undefined ***)param_2[1];
      param_2[1] = (code *)apppuStack_d8[0];
      *param_2 = (code *)ppcStack_e0;
      param_2 = ppcVar13;
      if (pppuVar7 != (undefined ***)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = ppcVar13;
      }
      unaff_x20 = apppuStack_d8[0];
      if (apppuStack_d8[0] != (undefined ***)0x0) {
        pppuVar9 = apppuStack_d8[0] + 1;
        do {
          ppuVar12 = *pppuVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar5) {
            *pppuVar9 = (undefined **)((long)ppuVar12 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_10a68aa58:
        unaff_x20 = apppuStack_d8[0];
        if (ppuVar12 == (undefined **)0x0) {
          (*(code *)(*apppuStack_d8[0])[2])(apppuStack_d8[0]);
          pppuVar7 = unaff_x20;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    else {
      unaff_x22 = (code **)param_1[8];
      unaff_x23 = (undefined ***)param_1[9];
      if (*(char *)(param_3 + 0x17) == '\x01') {
        unaff_x21 = &ppuStack_80;
        pcStack_88 = FUN_10a6a1364;
        ppuStack_80 = &PTR_FUN_110c0d010;
        ppcVar13 = unaff_x22;
        ppcStack_78 = param_2;
        FUN_10a6a1024(param_3,unaff_x22,unaff_x23,&pcStack_88);
        ppuVar12 = ppuStack_80;
        pppcVar16 = unaff_x24;
      }
      else {
        pppuVar7 = param_3 + 0x11;
        ppcStack_e0 = unaff_x22;
        apppuStack_d8[0] = unaff_x23;
        func_0x00010a35bf90(pppuVar7,&ppcStack_e0);
        ppppuVar3 = apppuStack_d8;
        pppcVar6 = &ppcStack_e0;
        if (pppuVar7 != (undefined ***)0x0) {
          ppppuVar3 = (undefined ****)(pppuVar7 + 5);
          pppcVar6 = (code ***)(pppuVar7 + 4);
        }
        ppcVar13 = *pppcVar6;
        if (unaff_x22 == ppcVar13 && unaff_x23 == *ppppuVar3) {
          FUN_10a2d1b5c(&ppcStack_e0,param_1);
          if (apppuStack_d8[0] != (undefined ***)0x0) {
            pppuVar7 = apppuStack_d8[0] + 2;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
              if (bVar5) {
                *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          pppuVar7 = (undefined ***)param_2[1];
          param_2[1] = (code *)apppuStack_d8[0];
          *param_2 = (code *)ppcStack_e0;
          if (pppuVar7 != (undefined ***)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          param_2 = ppcVar13;
          unaff_x20 = apppuStack_d8[0];
          unaff_x24 = &ppcStack_e0;
          if (apppuStack_d8[0] != (undefined ***)0x0) {
            pppuVar9 = apppuStack_d8[0] + 1;
            do {
              ppuVar12 = *pppuVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
              if (bVar5) {
                *pppuVar9 = (undefined **)((long)ppuVar12 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
              unaff_x24 = &ppcStack_e0;
            } while (cVar4 != '\0');
            goto LAB_10a68aa58;
          }
          goto LAB_10a68aa74;
        }
        unaff_x21 = &ppuStack_c0;
        pcStack_c8 = FUN_10a6a1424;
        ppuStack_c0 = &PTR_FUN_110c0d030;
        ppcStack_b8 = param_2;
        FUN_10a6a1024(param_3,ppcVar13,*ppppuVar3,&pcStack_c8);
        ppuVar12 = ppuStack_c0;
      }
      pppuVar7 = unaff_x21;
      (*(code *)*ppuVar12)();
      param_2 = ppcVar13;
      unaff_x20 = param_3;
      unaff_x24 = pppcVar16;
    }
LAB_10a68aa74:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      auVar17._8_8_ = param_2;
      auVar17._0_8_ = pppuVar7;
      return auVar17;
    }
  }
  ___stack_chk_fail();
  (*(code *)**unaff_x21)(unaff_x21);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_e8 = FUN_10a68aad0;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = (undefined ***)pppuVar8[0x16];
  puStack_120 = (undefined1 *)unaff_x24;
  pppuStack_118 = unaff_x23;
  ppcStack_110 = unaff_x22;
  pppuStack_108 = unaff_x21;
  pppuStack_100 = unaff_x20;
  pppuStack_f8 = pppuVar7;
  puStack_f0 = &stack0xfffffffffffffff0;
  if ((pppuVar9 != (undefined ***)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), pppuVar9 != (undefined ***)0x0)) {
    ppuVar12 = pppuVar8[0x15];
    pppuVar7 = pppuVar9 + 1;
    do {
      ppuVar10 = *pppuVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
      if (bVar5) {
        *pppuVar7 = (undefined **)((long)ppuVar10 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar10 == (undefined **)0x0) {
      (*(code *)(*pppuVar9)[2])(pppuVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
    }
    if (ppuVar12 != (undefined **)0x0) {
LAB_10a68ab50:
      ppcVar13 = (code **)ppuVar12[0x9f];
      for (ppcVar14 = (code **)ppuVar12[0x9e]; ppcVar14 != ppcVar13; ppcVar14 = ppcVar14 + 1) {
        pppuVar8[0x17] = (undefined **)*ppcVar14;
        pppuVar9 = pppuVar8;
        FUN_10a5861f0(pppuVar8);
      }
      goto LAB_10a68ac78;
    }
  }
  ppuVar12 = pppuVar8[0x14];
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar15 = pppuVar8[0x13];
    ppuVar10 = ppuVar12 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
      if (bVar5) {
        *ppuVar10 = *ppuVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    ppuVar10 = ppuVar12;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (ppuVar10 == (undefined **)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
    }
    else {
      ppuVar1 = ppuVar10 + 1;
      do {
        puVar11 = *ppuVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar5) {
          *ppuVar1 = puVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuVar10 + 0x10))(ppuVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
      if (ppuVar15 != (undefined **)0x0) {
        ppuVar10 = (undefined **)ppuVar15[0x2b];
        if (ppuVar10 != ppuVar15 + 0x2a) {
LAB_10a68ac00:
          if (ppuVar10[2] == (undefined *)0x0) goto LAB_10a68ac1c;
          ppuVar12 = (undefined **)(ppuVar10[2] + 0xb0);
          param_2 = (code **)0xc2c0ac5e4c065340;
          (**(code **)(*ppuVar12 + 0x18))(ppuVar12,0xc2c0ac5e4c065340);
          if (ppuVar12 == (undefined **)0x0) goto LAB_10a68ac1c;
          FUN_10a2d1b5c(&ppuStack_180);
          if (pppuStack_178 != (undefined ***)0x0) {
            pppuVar7 = pppuStack_178 + 2;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
              if (bVar5) {
                *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          pppuVar9 = (undefined ***)pppuVar8[0x16];
          pppuVar8[0x16] = (undefined **)pppuStack_178;
          pppuVar8[0x15] = ppuStack_180;
          pppuVar7 = pppuStack_178;
          if (pppuVar9 != (undefined ***)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppuVar7 = pppuStack_178;
          }
          if (pppuVar7 != (undefined ***)0x0) {
            pppuVar2 = pppuVar7 + 1;
            do {
              ppuVar10 = *pppuVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
              if (bVar5) {
                *pppuVar2 = (undefined **)((long)ppuVar10 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppuVar10 == (undefined **)0x0) {
              (*(code *)(*pppuVar7)[2])(pppuVar7);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar7);
              pppuVar9 = pppuVar7;
            }
          }
          goto LAB_10a68ab50;
        }
      }
    }
  }
LAB_10a68ac34:
  ppcVar13 = &pcStack_168;
  pcStack_168 = FUN_10a6a14e4;
  ppuStack_160 = &PTR_FUN_110c0d050;
  param_2 = &pcStack_168;
  pppuStack_158 = pppuVar8;
  FUN_10a605850(*(long *)(pppuVar8[0xc][0x106] + 0x18) + 0x1c0,param_2);
  pppuVar9 = &ppuStack_160;
  (*(code *)*ppuStack_160)(pppuVar9);
LAB_10a68ac78:
  pppuVar8[0x17] = (undefined **)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = pppuVar9;
    return auVar18;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_160)(ppcVar13 + 1);
  __Unwind_Resume(pppuVar9);
  auVar19._8_8_ = 0x21;
  auVar19._0_8_ = &UNK_10f66c114;
  return auVar19;
LAB_10a68ac1c:
  ppuVar10 = (undefined **)ppuVar10[1];
  if (ppuVar10 == ppuVar15 + 0x2a) goto LAB_10a68ac34;
  goto LAB_10a68ac00;
}



/* Entry: 10a68aad0; end: 10a68ad4b;  */

undefined1  [16] FUN_10a68aad0(undefined ***param_1,code **param_2)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  undefined **ppuVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined **ppuStack_a0;
  undefined ***pppuStack_98;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = (undefined ***)param_1[0x16];
  if ((pppuVar5 != (undefined ***)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), pppuVar5 != (undefined ***)0x0)) {
    ppuVar8 = param_1[0x15];
    pppuVar1 = pppuVar5 + 1;
    do {
      ppuVar6 = *pppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar4) {
        *pppuVar1 = (undefined **)((long)ppuVar6 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar6 == (undefined **)0x0) {
      (*(code *)(*pppuVar5)[2])(pppuVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar5);
    }
    if (ppuVar8 != (undefined **)0x0) {
LAB_10a68ab50:
      ppcVar9 = (code **)ppuVar8[0x9f];
      for (ppcVar10 = (code **)ppuVar8[0x9e]; ppcVar10 != ppcVar9; ppcVar10 = ppcVar10 + 1) {
        param_1[0x17] = (undefined **)*ppcVar10;
        pppuVar5 = param_1;
        FUN_10a5861f0(param_1);
      }
      goto LAB_10a68ac78;
    }
  }
  ppuVar8 = param_1[0x14];
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar11 = param_1[0x13];
    ppuVar6 = ppuVar8 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
      if (bVar4) {
        *ppuVar6 = *ppuVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    ppuVar6 = ppuVar8;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (ppuVar6 == (undefined **)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
    }
    else {
      ppuVar2 = ppuVar6 + 1;
      do {
        puVar7 = *ppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = puVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar7 == (undefined *)0x0) {
        (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar6 = (undefined **)ppuVar11[0x2b];
        if (ppuVar6 != ppuVar11 + 0x2a) {
LAB_10a68ac00:
          if (ppuVar6[2] == (undefined *)0x0) goto LAB_10a68ac1c;
          ppuVar8 = (undefined **)(ppuVar6[2] + 0xb0);
          param_2 = (code **)0xc2c0ac5e4c065340;
          (**(code **)(*ppuVar8 + 0x18))(ppuVar8,0xc2c0ac5e4c065340);
          if (ppuVar8 == (undefined **)0x0) goto LAB_10a68ac1c;
          FUN_10a2d1b5c(&ppuStack_a0);
          if (pppuStack_98 != (undefined ***)0x0) {
            pppuVar5 = pppuStack_98 + 2;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
              if (bVar4) {
                *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          pppuVar5 = (undefined ***)param_1[0x16];
          param_1[0x16] = (undefined **)pppuStack_98;
          param_1[0x15] = ppuStack_a0;
          if (pppuVar5 != (undefined ***)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if (pppuStack_98 != (undefined ***)0x0) {
            pppuVar1 = pppuStack_98 + 1;
            do {
              ppuVar6 = *pppuVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
              if (bVar4) {
                *pppuVar1 = (undefined **)((long)ppuVar6 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppuVar6 == (undefined **)0x0) {
              (*(code *)(*pppuStack_98)[2])(pppuStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_98);
              pppuVar5 = pppuStack_98;
            }
          }
          goto LAB_10a68ab50;
        }
      }
    }
  }
LAB_10a68ac34:
  ppcVar9 = &pcStack_88;
  pcStack_88 = FUN_10a6a14e4;
  ppuStack_80 = &PTR_FUN_110c0d050;
  param_2 = &pcStack_88;
  pppuStack_78 = param_1;
  FUN_10a605850(*(long *)(param_1[0xc][0x106] + 0x18) + 0x1c0,param_2);
  pppuVar5 = &ppuStack_80;
  (*(code *)*ppuStack_80)(pppuVar5);
LAB_10a68ac78:
  param_1[0x17] = (undefined **)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_80)(ppcVar9 + 1);
    __Unwind_Resume(pppuVar5);
    auVar13._8_8_ = 0x21;
    auVar13._0_8_ = &UNK_10f66c114;
    return auVar13;
  }
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = pppuVar5;
  return auVar12;
LAB_10a68ac1c:
  ppuVar6 = (undefined **)ppuVar6[1];
  if (ppuVar6 == ppuVar11 + 0x2a) goto LAB_10a68ac34;
  goto LAB_10a68ac00;
}



/* Entry: 10a68ad4c; end: 10a68ad6b;  */

undefined1  [16] FUN_10a68ad4c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x21;
  auVar1._0_8_ = &UNK_10f66c114;
  return auVar1;
}



/* Entry: 10a68ad6c; end: 10a68add3;  */

bool FUN_10a68ad6c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf66c114;
    _memcmp(&UNK_10f66c114,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x10) && (*param_2 == 0x6a624f656e656353 && param_2[1] == 0x746e657645746365)) {
    return true;
  }
  if ((param_3 == 10) && (*param_2 == 0x657645656e656353 && (short)param_2[1] == 0x746e)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x10) {
      return false;
    }
    bVar1 = *param_2 == 0x6150746e65764549 && param_2[1] == 0x73726574656d6172;
  }
  return bVar1;
}



/* Entry: 10a68add4; end: 10a68af0f;  */

bool FUN_10a68add4(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf66c114;
    _memcmp(&UNK_10f66c114,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x10) && (*param_2 == 0x6a624f656e656353 && param_2[1] == 0x746e657645746365)) {
    return true;
  }
  if ((param_3 == 10) && (*param_2 == 0x657645656e656353 && (short)param_2[1] == 0x746e)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x10) {
      return false;
    }
    bVar1 = *param_2 == 0x6150746e65764549 && param_2[1] == 0x73726574656d6172;
  }
  return bVar1;
}



/* Entry: 10a68af10; end: 10a68afff;  */

void FUN_10a68af10(undefined8 param_1)

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
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66b8c1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f66b8c1;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a68b000(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b964;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6a1654();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b96d;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a6a17dc(param_1,&puStack_98,0);
  FUN_10a6a1900(param_1);
  return;
}



/* Entry: 10a68b000; end: 10a68b0d7;  */

/* WARNING: Removing unreachable block (ram,0x00010a68b098) */

undefined1  [16] FUN_10a68b000(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c114,0x21);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a1558(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68b0d8; end: 10a68b1c7;  */

void FUN_10a68b0d8(undefined8 param_1)

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
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66b8c1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f66b8c1;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a68b1c8(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b964;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6a1ab8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b96d;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a6a1c40(param_1,&puStack_98,0);
  FUN_10a6a1d64(param_1);
  return;
}



/* Entry: 10a68b1c8; end: 10a68b29f;  */

/* WARNING: Removing unreachable block (ram,0x00010a68b260) */

undefined1  [16] FUN_10a68b1c8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c136,0x20);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a19bc(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68b2a0; end: 10a68b38f;  */

void FUN_10a68b2a0(undefined8 param_1)

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
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66b8c1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f66b8c1;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a68b390(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b964;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6a1f1c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b96d;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a6a20a4(param_1,&puStack_98,0);
  FUN_10a6a21c8(param_1);
  return;
}



/* Entry: 10a68b390; end: 10a68b467;  */

/* WARNING: Removing unreachable block (ram,0x00010a68b428) */

undefined1  [16] FUN_10a68b390(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c157,0x1f);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a1e20(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68b468; end: 10a68b4e7;  */

undefined8 * FUN_10a68b468(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0f420;
  param_1[2] = &PTR_DAT_110c0f4b8;
  param_1[7] = &PTR_DAT_110c0f510;
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  if (param_1[0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a68b4e8; end: 10a68b4fb;  */

undefined8 * FUN_10a68b4e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0f420;
  param_1[2] = &PTR_DAT_110c0f4b8;
  param_1[7] = &PTR_DAT_110c0f510;
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  if (param_1[0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a68b4fc; end: 10a68b53f;  */

void FUN_10a68b4fc(void)

{
  FUN_10a68b468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a68b540; end: 10a68b5bf;  */

undefined8 * FUN_10a68b540(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0f530;
  param_1[2] = &PTR_DAT_110c0f5c8;
  param_1[7] = &PTR_DAT_110c0f620;
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  if (param_1[0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a68b5c0; end: 10a68b5d3;  */

undefined8 * FUN_10a68b5c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0f530;
  param_1[2] = &PTR_DAT_110c0f5c8;
  param_1[7] = &PTR_DAT_110c0f620;
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  if (param_1[0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a68b5d4; end: 10a68b617;  */

void FUN_10a68b5d4(void)

{
  FUN_10a68b540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a68b618; end: 10a68b697;  */

undefined8 * FUN_10a68b618(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0f640;
  param_1[2] = &PTR_DAT_110c0f6d8;
  param_1[7] = &PTR_DAT_110c0f730;
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  if (param_1[0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a68b698; end: 10a68b6ab;  */

undefined8 * FUN_10a68b698(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c0f640;
  param_1[2] = &PTR_DAT_110c0f6d8;
  param_1[7] = &PTR_DAT_110c0f730;
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  if (param_1[0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_FUN_110bf6870;
  param_1[2] = &PTR_DAT_110bf6908;
  param_1[7] = &PTR_DAT_110bf6960;
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a68b6ac; end: 10a68b6ef;  */

void FUN_10a68b6ac(void)

{
  FUN_10a68b618();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a68b6f0; end: 10a68b7a3;  */

void FUN_10a68b6f0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a6a2284;
  ppuStack_60 = &PTR_FUN_110c0d070;
  ppuVar8 = &PTR_DAT_110c0c9b0;
  ppcVar9 = &pcStack_68;
  uStack_58 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9b0,ppcVar9,0);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    pppuVar6 = pppuVar5 + 0xc;
    if (ppcVar9 != (code **)0x0) {
      pppuVar6 = (undefined ***)(ppcVar9 + 0x16);
    }
    ppuVar14 = *pppuVar6;
    pppuVar6 = pppuVar5;
    func_0x00010a0fda30();
    plVar7 = (long *)0xf0;
    __Znwm();
    plVar10 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar10 = 0;
    *plVar7 = (long)&PTR_DAT_110c0d098;
    plVar11 = plVar7 + 3;
    *plVar11 = (long)&PTR_FUN_110c0f420;
    *(undefined1 *)(plVar7 + 4) = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[0xb] = (long)pppuVar6;
    plVar7[0xc] = (long)ppuVar8;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0x800000000;
    plVar7[0xf] = (long)ppuVar14;
    *(undefined1 *)(plVar7 + 0x10) = 0;
    *(undefined1 *)(plVar7 + 0x14) = 0;
    *(undefined1 *)(plVar7 + 0x15) = 1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[5] = (long)&PTR_DAT_110c0f4b8;
    plVar7[10] = (long)&PTR_DAT_110c0f510;
    *(undefined8 *)((long)plVar7 + 0xe4) = 0;
    *(undefined8 *)((long)plVar7 + 0xdc) = 0;
    plVar7[0x19] = 0;
    plVar7[0x18] = 0;
    plVar7[0x1b] = 0;
    plVar7[0x1a] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar7 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar7[8] = (long)plVar11;
    plVar7[9] = (long)plVar7;
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    *(undefined4 *)((long)plVar7 + 0x6c) = *(undefined4 *)((long)pppuVar5 + 0x54);
    ppuVar14 = pppuVar5[0x14];
    ppuVar8 = pppuVar5[0x13];
    if (pppuVar5[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar5[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar7[0x17];
    plVar7[0x17] = (long)ppuVar14;
    plVar7[0x16] = (long)ppuVar8;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar8 = pppuVar5[0x16];
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar14 = ppuVar8 + 1;
      do {
        puVar13 = *ppuVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar4) {
          *ppuVar14 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    extraout_x8[1] = plVar7;
    *extraout_x8 = plVar11;
    return;
  }
  return;
}



/* Entry: 10a68b7a4; end: 10a68b9b3;  */

void FUN_10a68b7a4(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xf0;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0d098;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0f420;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_DAT_110c0f4b8;
  plVar4[10] = (long)&PTR_DAT_110c0f510;
  *(undefined8 *)((long)plVar4 + 0xe4) = 0;
  *(undefined8 *)((long)plVar4 + 0xdc) = 0;
  plVar4[0x19] = 0;
  plVar4[0x18] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
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
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = *(long **)(param_2 + 0xb0);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a68a860();
  if (plVar6 != (long *)0x0) {
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
  param_1[1] = plVar4;
  *param_1 = plVar7;
  return;
}



/* Entry: 10a68b9b4; end: 10a68bc63;  */

void FUN_10a68b9b4(undefined ***param_1,undefined ***param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  long *plVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  undefined **ppuVar10;
  undefined *puVar11;
  long *plVar12;
  long lVar13;
  undefined **ppuVar14;
  long *plVar15;
  undefined **ppuVar16;
  code *pcStack_108;
  undefined **ppuStack_100;
  undefined ***pppuStack_f8;
  long lStack_c8;
  undefined ***pppuStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined ***pppuStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar7 = param_1 + 0x17;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x18] = *pppuVar7;
  pppuVar5 = (undefined ***)param_1[0x16];
  if ((pppuVar5 != (undefined ***)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), pppuVar5 != (undefined ***)0x0)) {
    ppuVar14 = param_1[0x15];
    pppuVar6 = pppuVar5 + 1;
    do {
      ppuVar10 = *pppuVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
      if (bVar4) {
        *pppuVar6 = (undefined **)((long)ppuVar10 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar10 == (undefined **)0x0) {
      (*(code *)(*pppuVar5)[2])(pppuVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (ppuVar14 != (undefined **)0x0) {
LAB_10a68ba44:
      plVar15 = (long *)ppuVar14[0xa2];
      for (plVar8 = (long *)ppuVar14[0xa1]; plVar8 != plVar15; plVar8 = plVar8 + 2) {
        lVar13 = *plVar8;
        *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(lVar13 + 0x18);
        if (pppuVar7 != (undefined ***)(lVar13 + 0x20)) {
          param_2 = *(undefined ****)(lVar13 + 0x20);
          FUN_10a14dca0(pppuVar7,param_2,*(long *)(lVar13 + 0x28),
                        *(long *)(lVar13 + 0x28) - (long)param_2 >> 3);
        }
        pppuVar5 = param_1;
        FUN_10a5861f0();
      }
      goto LAB_10a68bb94;
    }
  }
  ppuVar14 = param_1[0x14];
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar16 = param_1[0x13];
    ppuVar10 = ppuVar14 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
      if (bVar4) {
        *ppuVar10 = *ppuVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    ppuVar10 = ppuVar14;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (ppuVar10 == (undefined **)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
    }
    else {
      ppuVar1 = ppuVar10 + 1;
      do {
        puVar11 = *ppuVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar4) {
          *ppuVar1 = puVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuVar10 + 0x10))(ppuVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
      if (ppuVar16 != (undefined **)0x0) {
        ppuVar10 = (undefined **)ppuVar16[0x2b];
        if (ppuVar10 != ppuVar16 + 0x2a) {
LAB_10a68bb1c:
          if (ppuVar10[2] == (undefined *)0x0) goto LAB_10a68bb38;
          ppuVar14 = (undefined **)(ppuVar10[2] + 0xb0);
          param_2 = (undefined ***)0xc2c0ac5e4c065340;
          (**(code **)(*ppuVar14 + 0x18))(ppuVar14,0xc2c0ac5e4c065340);
          if (ppuVar14 == (undefined **)0x0) goto LAB_10a68bb38;
          FUN_10a2d1b5c(&ppuStack_a0);
          if (pppuStack_98 != (undefined ***)0x0) {
            pppuVar5 = pppuStack_98 + 2;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
              if (bVar4) {
                *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          pppuVar5 = (undefined ***)param_1[0x16];
          param_1[0x16] = (undefined **)pppuStack_98;
          param_1[0x15] = ppuStack_a0;
          if (pppuVar5 != (undefined ***)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if (pppuStack_98 != (undefined ***)0x0) {
            pppuVar6 = pppuStack_98 + 1;
            do {
              ppuVar10 = *pppuVar6;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
              if (bVar4) {
                *pppuVar6 = (undefined **)((long)ppuVar10 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppuVar10 == (undefined **)0x0) {
              (*(code *)(*pppuStack_98)[2])(pppuStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppuVar5 = pppuStack_98;
            }
          }
          goto LAB_10a68ba44;
        }
      }
    }
  }
LAB_10a68bb50:
  pppuVar7 = &ppuStack_88;
  ppuStack_88 = (undefined **)FUN_10a6a23e8;
  ppuStack_80 = &PTR_FUN_110c0d0d8;
  param_2 = &ppuStack_88;
  pppuStack_78 = param_1;
  FUN_10a2f01d8(*(long *)(param_1[0xc][0x106] + 0x18) + 0x278,param_2);
  pppuVar5 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
LAB_10a68bb94:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(pppuVar7 + 1);
  pppuVar6 = pppuVar5;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a68bc64;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_108 = FUN_10a6a2548;
  ppuStack_100 = &PTR_FUN_110c0d0f8;
  ppuVar14 = &PTR_DAT_110c0c9b0;
  ppcVar9 = &pcStack_108;
  pppuStack_f8 = pppuVar6;
  pppuStack_c0 = pppuVar7;
  pppuStack_b8 = pppuVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9b0,ppcVar9,0);
  pppuVar7 = &ppuStack_100;
  (*(code *)*ppuStack_100)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_100)(&ppuStack_100);
    __Unwind_Resume();
    pppuVar5 = pppuVar7 + 0xc;
    if (ppcVar9 != (code **)0x0) {
      pppuVar5 = (undefined ***)(ppcVar9 + 0x16);
    }
    ppuVar10 = *pppuVar5;
    pppuVar5 = pppuVar7;
    func_0x00010a0fda30();
    plVar8 = (long *)0xf0;
    __Znwm();
    plVar15 = plVar8 + 1;
    plVar8[2] = 0;
    *plVar15 = 0;
    *plVar8 = (long)&PTR_DAT_110c0d120;
    plVar12 = plVar8 + 3;
    *plVar12 = (long)&PTR_FUN_110c0f530;
    *(undefined1 *)(plVar8 + 4) = 0;
    plVar8[6] = 0;
    plVar8[7] = 0;
    plVar8[0xb] = (long)pppuVar5;
    plVar8[0xc] = (long)ppuVar14;
    *(undefined1 *)(plVar8 + 0xd) = 0;
    *(undefined8 *)((long)plVar8 + 0x6c) = 0x800000000;
    plVar8[0xf] = (long)ppuVar10;
    *(undefined1 *)(plVar8 + 0x10) = 0;
    *(undefined1 *)(plVar8 + 0x14) = 0;
    *(undefined1 *)(plVar8 + 0x15) = 1;
    plVar8[0x16] = 0;
    plVar8[0x17] = 0;
    plVar8[5] = (long)&PTR_DAT_110c0f5c8;
    plVar8[10] = (long)&PTR_DAT_110c0f620;
    *(undefined8 *)((long)plVar8 + 0xe4) = 0;
    *(undefined8 *)((long)plVar8 + 0xdc) = 0;
    plVar8[0x19] = 0;
    plVar8[0x18] = 0;
    plVar8[0x1b] = 0;
    plVar8[0x1a] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = *plVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar2 = plVar8 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar8[8] = (long)plVar12;
    plVar8[9] = (long)plVar8;
    do {
      lVar13 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    *(undefined4 *)((long)plVar8 + 0x6c) = *(undefined4 *)((long)pppuVar7 + 0x54);
    ppuVar10 = pppuVar7[0x14];
    ppuVar14 = pppuVar7[0x13];
    if (pppuVar7[0x14] != (undefined **)0x0) {
      ppuVar16 = pppuVar7[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
        if (bVar4) {
          *ppuVar16 = *ppuVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar13 = plVar8[0x17];
    plVar8[0x17] = (long)ppuVar10;
    plVar8[0x16] = (long)ppuVar14;
    if (lVar13 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar14 = pppuVar7[0x16];
    if (ppuVar14 == (undefined **)0x0) {
      ppuVar14 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar10 = ppuVar14 + 1;
      do {
        puVar11 = *ppuVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar4) {
          *ppuVar10 = puVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuVar14 + 0x10))(ppuVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
      }
    }
    extraout_x8[1] = plVar8;
    *extraout_x8 = plVar12;
    return;
  }
  return;
LAB_10a68bb38:
  ppuVar10 = (undefined **)ppuVar10[1];
  if (ppuVar10 == ppuVar16 + 0x2a) goto LAB_10a68bb50;
  goto LAB_10a68bb1c;
}



/* Entry: 10a68bc64; end: 10a68bd17;  */

void FUN_10a68bc64(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a6a2548;
  ppuStack_60 = &PTR_FUN_110c0d0f8;
  ppuVar8 = &PTR_DAT_110c0c9b0;
  ppcVar9 = &pcStack_68;
  uStack_58 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9b0,ppcVar9,0);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    pppuVar6 = pppuVar5 + 0xc;
    if (ppcVar9 != (code **)0x0) {
      pppuVar6 = (undefined ***)(ppcVar9 + 0x16);
    }
    ppuVar14 = *pppuVar6;
    pppuVar6 = pppuVar5;
    func_0x00010a0fda30();
    plVar7 = (long *)0xf0;
    __Znwm();
    plVar10 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar10 = 0;
    *plVar7 = (long)&PTR_DAT_110c0d120;
    plVar11 = plVar7 + 3;
    *plVar11 = (long)&PTR_FUN_110c0f530;
    *(undefined1 *)(plVar7 + 4) = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[0xb] = (long)pppuVar6;
    plVar7[0xc] = (long)ppuVar8;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0x800000000;
    plVar7[0xf] = (long)ppuVar14;
    *(undefined1 *)(plVar7 + 0x10) = 0;
    *(undefined1 *)(plVar7 + 0x14) = 0;
    *(undefined1 *)(plVar7 + 0x15) = 1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[5] = (long)&PTR_DAT_110c0f5c8;
    plVar7[10] = (long)&PTR_DAT_110c0f620;
    *(undefined8 *)((long)plVar7 + 0xe4) = 0;
    *(undefined8 *)((long)plVar7 + 0xdc) = 0;
    plVar7[0x19] = 0;
    plVar7[0x18] = 0;
    plVar7[0x1b] = 0;
    plVar7[0x1a] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar7 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar7[8] = (long)plVar11;
    plVar7[9] = (long)plVar7;
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    *(undefined4 *)((long)plVar7 + 0x6c) = *(undefined4 *)((long)pppuVar5 + 0x54);
    ppuVar14 = pppuVar5[0x14];
    ppuVar8 = pppuVar5[0x13];
    if (pppuVar5[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar5[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar7[0x17];
    plVar7[0x17] = (long)ppuVar14;
    plVar7[0x16] = (long)ppuVar8;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar8 = pppuVar5[0x16];
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar14 = ppuVar8 + 1;
      do {
        puVar13 = *ppuVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar4) {
          *ppuVar14 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    extraout_x8[1] = plVar7;
    *extraout_x8 = plVar11;
    return;
  }
  return;
}



/* Entry: 10a68bd18; end: 10a68bf27;  */

void FUN_10a68bd18(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xf0;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0d120;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0f530;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_DAT_110c0f5c8;
  plVar4[10] = (long)&PTR_DAT_110c0f620;
  *(undefined8 *)((long)plVar4 + 0xe4) = 0;
  *(undefined8 *)((long)plVar4 + 0xdc) = 0;
  plVar4[0x19] = 0;
  plVar4[0x18] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
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
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = *(long **)(param_2 + 0xb0);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a68a860();
  if (plVar6 != (long *)0x0) {
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
  param_1[1] = plVar4;
  *param_1 = plVar7;
  return;
}



/* Entry: 10a68bf28; end: 10a68c20f;  */

void FUN_10a68bf28(undefined ***param_1,undefined ***param_2)

{
  undefined ***pppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  code **ppcVar8;
  long lVar9;
  undefined8 *extraout_x8;
  undefined **ppuVar10;
  long *plVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long *plVar14;
  long *plVar15;
  undefined **ppuVar16;
  code *pcStack_128;
  undefined **ppuStack_120;
  undefined ***pppuStack_118;
  long lStack_e8;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined ***pppuStack_b8;
  undefined **ppuStack_a8;
  undefined ***pppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined ***pppuStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar7 = param_1 + 0x17;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x18] = *pppuVar7;
  pppuVar5 = (undefined ***)param_1[0x16];
  if ((pppuVar5 == (undefined ***)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), pppuVar5 == (undefined ***)0x0)) {
LAB_10a68bfbc:
    pppuVar5 = (undefined ***)param_1[0x14];
    if (pppuVar5 != (undefined ***)0x0) {
      ppuVar10 = param_1[0x13];
      pppuVar6 = pppuVar5 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
        if (bVar4) {
          *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pppuVar6 = pppuVar5;
      __ZNSt3__119__shared_weak_count4lockEv();
      pppuStack_a0 = pppuVar6;
      if (pppuVar6 != (undefined ***)0x0) {
        ppuStack_a8 = ppuVar10;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        if (ppuVar10 != (undefined **)0x0) {
          ppuVar16 = (undefined **)ppuVar10[0x2b];
          if (ppuVar16 != ppuVar10 + 0x2a) {
LAB_10a68c020:
            if (ppuVar16[2] == (undefined *)0x0) goto LAB_10a68c03c;
            ppuVar13 = (undefined **)(ppuVar16[2] + 0xb0);
            param_2 = (undefined ***)0xc2c0ac5e4c065340;
            (**(code **)(*ppuVar13 + 0x18))(ppuVar13,0xc2c0ac5e4c065340);
            if (ppuVar13 == (undefined **)0x0) goto LAB_10a68c03c;
            FUN_10a2d1b5c(&ppuStack_c0);
            if (pppuStack_b8 != (undefined ***)0x0) {
              pppuVar5 = pppuStack_b8 + 2;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
                if (bVar4) {
                  *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            pppuVar5 = (undefined ***)param_1[0x16];
            param_1[0x16] = (undefined **)pppuStack_b8;
            param_1[0x15] = ppuStack_c0;
            if (pppuVar5 != (undefined ***)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            pppuVar6 = pppuStack_a0;
            if (pppuStack_b8 != (undefined ***)0x0) {
              pppuVar1 = pppuStack_b8 + 1;
              do {
                ppuVar10 = *pppuVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
                if (bVar4) {
                  *pppuVar1 = (undefined **)((long)ppuVar10 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppuVar10 == (undefined **)0x0) {
                (*(code *)(*pppuStack_b8)[2])(pppuStack_b8);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                pppuVar6 = pppuStack_a0;
                pppuVar5 = pppuStack_b8;
              }
            }
            goto joined_r0x00010a68c04c;
          }
        }
        ppuVar13 = (undefined **)0x0;
        goto LAB_10a68c058;
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar5);
    }
    goto LAB_10a68c0e0;
  }
  ppuVar13 = param_1[0x15];
  pppuVar6 = pppuVar5 + 1;
  do {
    ppuVar10 = *pppuVar6;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
    if (bVar4) {
      *pppuVar6 = (undefined **)((long)ppuVar10 + -1);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (ppuVar10 == (undefined **)0x0) {
    (*(code *)(*pppuVar5)[2])(pppuVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (ppuVar13 == (undefined **)0x0) goto LAB_10a68bfbc;
  goto LAB_10a68c08c;
LAB_10a68c03c:
  ppuVar16 = (undefined **)ppuVar16[1];
  if (ppuVar16 == ppuVar10 + 0x2a) goto code_r0x00010a68c048;
  goto LAB_10a68c020;
code_r0x00010a68c048:
  ppuVar13 = (undefined **)0x0;
  pppuVar5 = (undefined ***)0x0;
joined_r0x00010a68c04c:
  if (pppuVar6 != (undefined ***)0x0) {
LAB_10a68c058:
    pppuVar1 = pppuVar6 + 1;
    do {
      ppuVar10 = *pppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar4) {
        *pppuVar1 = (undefined **)((long)ppuVar10 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar10 == (undefined **)0x0) {
      (*(code *)(*pppuVar6)[2])(pppuVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar5 = pppuVar6;
    }
  }
  if (ppuVar13 == (undefined **)0x0) {
LAB_10a68c0e0:
    pppuVar7 = &ppuStack_98;
    ppuStack_98 = (undefined **)FUN_10a6a26ac;
    ppuStack_90 = &PTR_FUN_110c0d160;
    param_2 = &ppuStack_98;
    pppuStack_88 = param_1;
    FUN_10a2f01d8(*(long *)(param_1[0xc][0x106] + 0x18) + 0x278,param_2);
    pppuVar5 = &ppuStack_90;
    (*(code *)*ppuStack_90)();
    goto LAB_10a68c124;
  }
LAB_10a68c08c:
  plVar14 = (long *)ppuVar13[0xa5];
  for (plVar15 = (long *)ppuVar13[0xa4]; plVar15 != plVar14; plVar15 = plVar15 + 2) {
    lVar9 = *plVar15;
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(lVar9 + 0x18);
    if (pppuVar7 != (undefined ***)(lVar9 + 0x20)) {
      param_2 = *(undefined ****)(lVar9 + 0x20);
      FUN_10a14dca0(pppuVar7,param_2,*(long *)(lVar9 + 0x28),
                    *(long *)(lVar9 + 0x28) - (long)param_2 >> 3);
    }
    pppuVar5 = param_1;
    FUN_10a5861f0();
  }
LAB_10a68c124:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a05253c(&ppuStack_a8);
  pppuVar6 = pppuVar5;
  __Unwind_Resume();
  pcStack_c8 = FUN_10a68c210;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_128 = FUN_10a6a2810;
  ppuStack_120 = &PTR_FUN_110c0d180;
  ppuVar13 = &PTR_DAT_110c0c9b0;
  ppcVar8 = &pcStack_128;
  pppuStack_118 = pppuVar6;
  pppuStack_e0 = pppuVar7;
  pppuStack_d8 = pppuVar5;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9b0,ppcVar8,0);
  pppuVar7 = &ppuStack_120;
  (*(code *)*ppuStack_120)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_120)(&ppuStack_120);
    __Unwind_Resume();
    pppuVar5 = pppuVar7 + 0xc;
    if (ppcVar8 != (code **)0x0) {
      pppuVar5 = (undefined ***)(ppcVar8 + 0x16);
    }
    ppuVar10 = *pppuVar5;
    pppuVar5 = pppuVar7;
    func_0x00010a0fda30();
    plVar15 = (long *)0xf0;
    __Znwm();
    plVar14 = plVar15 + 1;
    plVar15[2] = 0;
    *plVar14 = 0;
    *plVar15 = (long)&PTR_DAT_110c0d1a8;
    plVar11 = plVar15 + 3;
    *plVar11 = (long)&PTR_FUN_110c0f640;
    *(undefined1 *)(plVar15 + 4) = 0;
    plVar15[6] = 0;
    plVar15[7] = 0;
    plVar15[0xb] = (long)pppuVar5;
    plVar15[0xc] = (long)ppuVar13;
    *(undefined1 *)(plVar15 + 0xd) = 0;
    *(undefined8 *)((long)plVar15 + 0x6c) = 0x800000000;
    plVar15[0xf] = (long)ppuVar10;
    *(undefined1 *)(plVar15 + 0x10) = 0;
    *(undefined1 *)(plVar15 + 0x14) = 0;
    *(undefined1 *)(plVar15 + 0x15) = 1;
    plVar15[0x16] = 0;
    plVar15[0x17] = 0;
    plVar15[5] = (long)&PTR_DAT_110c0f6d8;
    plVar15[10] = (long)&PTR_DAT_110c0f730;
    *(undefined8 *)((long)plVar15 + 0xe4) = 0;
    *(undefined8 *)((long)plVar15 + 0xdc) = 0;
    plVar15[0x19] = 0;
    plVar15[0x18] = 0;
    plVar15[0x1b] = 0;
    plVar15[0x1a] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = *plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar2 = plVar15 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar15[8] = (long)plVar11;
    plVar15[9] = (long)plVar15;
    do {
      lVar9 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
    *(undefined4 *)((long)plVar15 + 0x6c) = *(undefined4 *)((long)pppuVar7 + 0x54);
    ppuVar10 = pppuVar7[0x14];
    ppuVar13 = pppuVar7[0x13];
    if (pppuVar7[0x14] != (undefined **)0x0) {
      ppuVar16 = pppuVar7[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
        if (bVar4) {
          *ppuVar16 = *ppuVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar9 = plVar15[0x17];
    plVar15[0x17] = (long)ppuVar10;
    plVar15[0x16] = (long)ppuVar13;
    if (lVar9 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar13 = pppuVar7[0x16];
    if (ppuVar13 == (undefined **)0x0) {
      ppuVar13 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar13 != (undefined **)0x0) {
      ppuVar10 = ppuVar13 + 1;
      do {
        puVar12 = *ppuVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar4) {
          *ppuVar10 = puVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar12 == (undefined *)0x0) {
        (**(code **)(*ppuVar13 + 0x10))(ppuVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
      }
    }
    extraout_x8[1] = plVar15;
    *extraout_x8 = plVar11;
    return;
  }
  return;
}



/* Entry: 10a68c210; end: 10a68c2c3;  */

void FUN_10a68c210(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a6a2810;
  ppuStack_60 = &PTR_FUN_110c0d180;
  ppuVar8 = &PTR_DAT_110c0c9b0;
  ppcVar9 = &pcStack_68;
  uStack_58 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9b0,ppcVar9,0);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    pppuVar6 = pppuVar5 + 0xc;
    if (ppcVar9 != (code **)0x0) {
      pppuVar6 = (undefined ***)(ppcVar9 + 0x16);
    }
    ppuVar14 = *pppuVar6;
    pppuVar6 = pppuVar5;
    func_0x00010a0fda30();
    plVar7 = (long *)0xf0;
    __Znwm();
    plVar10 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar10 = 0;
    *plVar7 = (long)&PTR_DAT_110c0d1a8;
    plVar11 = plVar7 + 3;
    *plVar11 = (long)&PTR_FUN_110c0f640;
    *(undefined1 *)(plVar7 + 4) = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[0xb] = (long)pppuVar6;
    plVar7[0xc] = (long)ppuVar8;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0x800000000;
    plVar7[0xf] = (long)ppuVar14;
    *(undefined1 *)(plVar7 + 0x10) = 0;
    *(undefined1 *)(plVar7 + 0x14) = 0;
    *(undefined1 *)(plVar7 + 0x15) = 1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[5] = (long)&PTR_DAT_110c0f6d8;
    plVar7[10] = (long)&PTR_DAT_110c0f730;
    *(undefined8 *)((long)plVar7 + 0xe4) = 0;
    *(undefined8 *)((long)plVar7 + 0xdc) = 0;
    plVar7[0x19] = 0;
    plVar7[0x18] = 0;
    plVar7[0x1b] = 0;
    plVar7[0x1a] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar7 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar7[8] = (long)plVar11;
    plVar7[9] = (long)plVar7;
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    *(undefined4 *)((long)plVar7 + 0x6c) = *(undefined4 *)((long)pppuVar5 + 0x54);
    ppuVar14 = pppuVar5[0x14];
    ppuVar8 = pppuVar5[0x13];
    if (pppuVar5[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar5[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar7[0x17];
    plVar7[0x17] = (long)ppuVar14;
    plVar7[0x16] = (long)ppuVar8;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar8 = pppuVar5[0x16];
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar14 = ppuVar8 + 1;
      do {
        puVar13 = *ppuVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar4) {
          *ppuVar14 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    extraout_x8[1] = plVar7;
    *extraout_x8 = plVar11;
    return;
  }
  return;
}



/* Entry: 10a68c2c4; end: 10a68c4d3;  */

void FUN_10a68c2c4(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xf0;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0d1a8;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0f640;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_DAT_110c0f6d8;
  plVar4[10] = (long)&PTR_DAT_110c0f730;
  *(undefined8 *)((long)plVar4 + 0xe4) = 0;
  *(undefined8 *)((long)plVar4 + 0xdc) = 0;
  plVar4[0x19] = 0;
  plVar4[0x18] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
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
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = *(long **)(param_2 + 0xb0);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a68a860();
  if (plVar6 != (long *)0x0) {
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
  param_1[1] = plVar4;
  *param_1 = plVar7;
  return;
}



/* Entry: 10a68c4d4; end: 10a68c7bb;  */

undefined1  [16] FUN_10a68c4d4(undefined ***param_1,code **param_2)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  long *plVar11;
  undefined **ppuVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined **ppuStack_c0;
  undefined ***pppuStack_b8;
  undefined **ppuStack_a8;
  undefined ***pppuStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined ***pppuStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = param_1 + 0x17;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x18] = *pppuVar8;
  pppuVar4 = (undefined ***)param_1[0x16];
  if ((pppuVar4 == (undefined ***)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), pppuVar4 == (undefined ***)0x0)) {
LAB_10a68c568:
    pppuVar4 = (undefined ***)param_1[0x14];
    if (pppuVar4 != (undefined ***)0x0) {
      ppuVar7 = param_1[0x13];
      pppuVar5 = pppuVar4 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
        if (bVar3) {
          *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuVar5 = pppuVar4;
      __ZNSt3__119__shared_weak_count4lockEv();
      pppuStack_a0 = pppuVar5;
      if (pppuVar5 != (undefined ***)0x0) {
        ppuStack_a8 = ppuVar7;
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar4);
        if (ppuVar7 != (undefined **)0x0) {
          ppuVar12 = (undefined **)ppuVar7[0x2b];
          if (ppuVar12 != ppuVar7 + 0x2a) {
LAB_10a68c5cc:
            if (ppuVar12[2] == (undefined *)0x0) goto LAB_10a68c5e8;
            ppuVar9 = (undefined **)(ppuVar12[2] + 0xb0);
            param_2 = (code **)0xc2c0ac5e4c065340;
            (**(code **)(*ppuVar9 + 0x18))(ppuVar9,0xc2c0ac5e4c065340);
            if (ppuVar9 == (undefined **)0x0) goto LAB_10a68c5e8;
            FUN_10a2d1b5c(&ppuStack_c0);
            if (pppuStack_b8 != (undefined ***)0x0) {
              pppuVar4 = pppuStack_b8 + 2;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
                if (bVar3) {
                  *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            pppuVar4 = (undefined ***)param_1[0x16];
            param_1[0x16] = (undefined **)pppuStack_b8;
            param_1[0x15] = ppuStack_c0;
            if (pppuVar4 != (undefined ***)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            pppuVar5 = pppuStack_a0;
            if (pppuStack_b8 != (undefined ***)0x0) {
              pppuVar1 = pppuStack_b8 + 1;
              do {
                ppuVar7 = *pppuVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
                if (bVar3) {
                  *pppuVar1 = (undefined **)((long)ppuVar7 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (ppuVar7 == (undefined **)0x0) {
                (*(code *)(*pppuStack_b8)[2])(pppuStack_b8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_b8);
                pppuVar5 = pppuStack_a0;
                pppuVar4 = pppuStack_b8;
              }
            }
            goto joined_r0x00010a68c5f8;
          }
        }
        ppuVar9 = (undefined **)0x0;
        goto LAB_10a68c604;
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar4);
    }
    goto LAB_10a68c68c;
  }
  ppuVar9 = param_1[0x15];
  pppuVar5 = pppuVar4 + 1;
  do {
    ppuVar7 = *pppuVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
    if (bVar3) {
      *pppuVar5 = (undefined **)((long)ppuVar7 + -1);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (ppuVar7 == (undefined **)0x0) {
    (*(code *)(*pppuVar4)[2])(pppuVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar4);
  }
  if (ppuVar9 == (undefined **)0x0) goto LAB_10a68c568;
  goto LAB_10a68c638;
LAB_10a68c5e8:
  ppuVar12 = (undefined **)ppuVar12[1];
  if (ppuVar12 == ppuVar7 + 0x2a) goto code_r0x00010a68c5f4;
  goto LAB_10a68c5cc;
code_r0x00010a68c5f4:
  ppuVar9 = (undefined **)0x0;
  pppuVar4 = (undefined ***)0x0;
joined_r0x00010a68c5f8:
  if (pppuVar5 != (undefined ***)0x0) {
LAB_10a68c604:
    pppuVar1 = pppuVar5 + 1;
    do {
      ppuVar7 = *pppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined **)((long)ppuVar7 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar7 == (undefined **)0x0) {
      (*(code *)(*pppuVar5)[2])(pppuVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar5);
      pppuVar4 = pppuVar5;
    }
  }
  if (ppuVar9 == (undefined **)0x0) {
LAB_10a68c68c:
    pcStack_98 = FUN_10a6a2974;
    ppuStack_90 = &PTR_FUN_110c0d1e8;
    param_2 = &pcStack_98;
    pppuStack_88 = param_1;
    FUN_10a2f01d8(*(long *)(param_1[0xc][0x106] + 0x18) + 0x278,param_2);
    pppuVar4 = &ppuStack_90;
    (*(code *)*ppuStack_90)(pppuVar4);
    goto LAB_10a68c6d0;
  }
LAB_10a68c638:
  plVar10 = (long *)ppuVar9[0xa8];
  for (plVar11 = (long *)ppuVar9[0xa7]; plVar11 != plVar10; plVar11 = plVar11 + 2) {
    lVar6 = *plVar11;
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(lVar6 + 0x18);
    if (pppuVar8 != (undefined ***)(lVar6 + 0x20)) {
      param_2 = *(code ***)(lVar6 + 0x20);
      FUN_10a14dca0(pppuVar8,param_2,*(long *)(lVar6 + 0x28),
                    *(long *)(lVar6 + 0x28) - (long)param_2 >> 3);
    }
    pppuVar4 = param_1;
    FUN_10a5861f0();
  }
LAB_10a68c6d0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010a05253c(&ppuStack_a8);
    __Unwind_Resume(pppuVar4);
    auVar14._8_8_ = 0x1a;
    auVar14._0_8_ = &UNK_10f66c177;
    return auVar14;
  }
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = pppuVar4;
  return auVar13;
}



/* Entry: 10a68c7bc; end: 10a68d167;  */

undefined1  [16] FUN_10a68c7bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1a;
  auVar1._0_8_ = &UNK_10f66c177;
  return auVar1;
}



/* Entry: 10a68d168; end: 10a68d257;  */

void FUN_10a68d168(undefined8 param_1)

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
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66b8c1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f66b8c1;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a68d258(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b978;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6a2bd8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b983;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a6a2d60(param_1,&puStack_98,0);
  FUN_10a6a2e7c(param_1);
  return;
}



/* Entry: 10a68d258; end: 10a68d32f;  */

/* WARNING: Removing unreachable block (ram,0x00010a68d2f0) */

undefined1  [16] FUN_10a68d258(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c177,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a2adc(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68d330; end: 10a68d463;  */

void FUN_10a68d330(undefined8 param_1)

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
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66b8c1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f66b8c1;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a68d464(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b978;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  FUN_10a6a3034();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b983;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  func_0x00010a6a31bc(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b994;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x200000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  puStack_40 = &UNK_10f66b8c1;
  uStack_38 = 0;
  FUN_10a6a32d8(param_1,&puStack_98);
  FUN_10a6a3534(param_1);
  return;
}



/* Entry: 10a68d464; end: 10a68d53b;  */

/* WARNING: Removing unreachable block (ram,0x00010a68d4fc) */

undefined1  [16] FUN_10a68d464(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c192,0x19);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a2f38(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68d53c; end: 10a68d66b;  */

void FUN_10a68d53c(undefined8 param_1)

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
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66b8c1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f66b8c1;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a68d66c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b978;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6a36ec();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b9a0;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a6a3874(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b983;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6a3990(param_1,&puStack_98,0);
  FUN_10a6a3aac(param_1);
  return;
}



/* Entry: 10a68d66c; end: 10a68d743;  */

/* WARNING: Removing unreachable block (ram,0x00010a68d704) */

undefined1  [16] FUN_10a68d66c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c1ac,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a35f0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68d744; end: 10a68d7fb;  */

void FUN_10a68d744(undefined8 param_1)

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
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66b8c1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f66b8c1;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a68d7fc(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b955;
  puStack_70 = &UNK_10f66b8c1;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x14a;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6a3c64();
  FUN_10a6a3dcc(param_1);
  return;
}



/* Entry: 10a68d7fc; end: 10a68d8d3;  */

/* WARNING: Removing unreachable block (ram,0x00010a68d894) */

undefined1  [16] FUN_10a68d7fc(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c1c5,0x13);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a3b68(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68d8d4; end: 10a68da0b;  */

void FUN_10a68d8d4(undefined8 param_1)

{
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66b9ac;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a004eb4(param_1,&puStack_88);
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  puStack_90 = &UNK_10f66b9c9;
  puStack_88 = &UNK_10f66b9bc;
  ppuStack_80 = &puStack_90;
  uStack_78 = 1;
  puStack_60 = &UNK_10f66b8c1;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0x15b;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a68d9a4(param_1,&puStack_88);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a68da0c; end: 10a68daf3;  */

void FUN_10a68da0c(undefined8 param_1)

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
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66b8c1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f66b8c1;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a68daf4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b9c9;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6a4090();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b9cd;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a6a4208(param_1,&puStack_98);
  FUN_10a6a4430(param_1);
  return;
}



/* Entry: 10a68daf4; end: 10a68dbcb;  */

/* WARNING: Removing unreachable block (ram,0x00010a68db8c) */

undefined1  [16] FUN_10a68daf4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c1d9,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a3f94(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68dbcc; end: 10a68dcb3;  */

void FUN_10a68dbcc(undefined8 param_1)

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
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66b8c1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f66b8c1;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a68dcb4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b9c9;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6a45e8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b9cd;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a6a4760(param_1,&puStack_98);
  FUN_10a6a4874(param_1);
  return;
}



/* Entry: 10a68dcb4; end: 10a68dd8b;  */

/* WARNING: Removing unreachable block (ram,0x00010a68dd4c) */

undefined1  [16] FUN_10a68dcb4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c1f2,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a44ec(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68dd8c; end: 10a68de33;  */

void FUN_10a68dd8c(undefined8 param_1)

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
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a68de34(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66b9d7;
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0x94;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a6a4a2c();
  FUN_10a6a4b84(param_1);
  return;
}



/* Entry: 10a68de34; end: 10a68df0b;  */

/* WARNING: Removing unreachable block (ram,0x00010a68decc) */

undefined1  [16] FUN_10a68de34(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c20d,0x1e);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a4930(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68df0c; end: 10a68dfa3;  */

void FUN_10a68df0c(undefined8 param_1)

{
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
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a68dfa4(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66b9e0;
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
  FUN_10a6a4d3c();
  FUN_10a6a4ea4(param_1);
  return;
}



/* Entry: 10a68dfa4; end: 10a68e07b;  */

/* WARNING: Removing unreachable block (ram,0x00010a68e03c) */

undefined1  [16] FUN_10a68dfa4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c22c,0x1e);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a4c40(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68e07c; end: 10a68e113;  */

void FUN_10a68e07c(undefined8 param_1)

{
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
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a68e114(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66b9e0;
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
  FUN_10a6a505c();
  FUN_10a6a51c4(param_1);
  return;
}



/* Entry: 10a68e114; end: 10a68e1eb;  */

/* WARNING: Removing unreachable block (ram,0x00010a68e1ac) */

undefined1  [16] FUN_10a68e114(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c24b,0x1c);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a4f60(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68e1ec; end: 10a68e2ab;  */

void FUN_10a68e1ec(undefined8 param_1)

{
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  puStack_80 = (undefined1 *)0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  puStack_70 = &UNK_10f66b8c1;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f66b8c1;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a68e2ac(param_1,&puStack_88);
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x100000019;
  puStack_90 = &UNK_10f66ba07;
  puStack_88 = &UNK_10f66b9f5;
  uStack_78 = 1;
  puStack_60 = &UNK_10f66b8c1;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_3c = 0xffffffff00000124;
  uStack_30 = 0;
  uStack_28 = 0;
  puStack_80 = (undefined1 *)&puStack_90;
  FUN_10a6a537c();
  FUN_10a6a5528(param_1);
  return;
}



/* Entry: 10a68e2ac; end: 10a68e383;  */

/* WARNING: Removing unreachable block (ram,0x00010a68e344) */

undefined1  [16] FUN_10a68e2ac(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c268,0x1f);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a5280(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68e384; end: 10a68e443;  */

void FUN_10a68e384(undefined8 param_1)

{
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  puStack_80 = (undefined1 *)0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  puStack_70 = &UNK_10f66b8c1;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f66b8c1;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a68e444(param_1,&puStack_88);
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x100000019;
  puStack_90 = &UNK_10f66ba0d;
  puStack_88 = &UNK_10f66b9f5;
  uStack_78 = 1;
  puStack_60 = &UNK_10f66b8c1;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_3c = 0xffffffff00000124;
  uStack_30 = 0;
  uStack_28 = 0;
  puStack_80 = (undefined1 *)&puStack_90;
  FUN_10a6a56e0();
  FUN_10a6a588c(param_1);
  return;
}



/* Entry: 10a68e444; end: 10a68e51b;  */

/* WARNING: Removing unreachable block (ram,0x00010a68e4dc) */

undefined1  [16] FUN_10a68e444(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c288,0x1d);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a55e4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68e51c; end: 10a68e60b;  */

void FUN_10a68e51c(undefined8 param_1)

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
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66b8c1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f66b8c1;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a68e60c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66ba1c;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6a5a44();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b96d;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a6a5bc8(param_1,&puStack_98,0);
  FUN_10a6a5cec(param_1);
  return;
}



/* Entry: 10a68e60c; end: 10a68e6e3;  */

/* WARNING: Removing unreachable block (ram,0x00010a68e6a4) */

undefined1  [16] FUN_10a68e60c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c2a6,0x1f);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a5948(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68e6e4; end: 10a68e7d3;  */

void FUN_10a68e6e4(undefined8 param_1)

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
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66b8c1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f66b8c1;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a68e7d4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66ba1c;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6a5ea4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b96d;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a6a6028(param_1,&puStack_98,0);
  FUN_10a6a614c(param_1);
  return;
}



/* Entry: 10a68e7d4; end: 10a68e8ab;  */

/* WARNING: Removing unreachable block (ram,0x00010a68e86c) */

undefined1  [16] FUN_10a68e7d4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c2c6,0x1e);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a5da8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68e8ac; end: 10a68e99b;  */

void FUN_10a68e8ac(undefined8 param_1)

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
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66b8c1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f66b8c1;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a68e99c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66ba1c;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6a6304();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b96d;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a6a6488(param_1,&puStack_98,0);
  FUN_10a6a65ac(param_1);
  return;
}



/* Entry: 10a68e99c; end: 10a68ea73;  */

/* WARNING: Removing unreachable block (ram,0x00010a68ea34) */

undefined1  [16] FUN_10a68e99c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c2e5,0x1d);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a6208(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68ea74; end: 10a68eb13;  */

void FUN_10a68ea74(undefined8 param_1)

{
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
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a68eb14(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66ba2b;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0x110;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a6a6764();
  FUN_10a6a68cc(param_1);
  return;
}



/* Entry: 10a68eb14; end: 10a68ebeb;  */

/* WARNING: Removing unreachable block (ram,0x00010a68ebac) */

undefined1  [16] FUN_10a68eb14(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c303,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a6668(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68ebec; end: 10a68eca7;  */

void FUN_10a68ebec(undefined8 param_1)

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
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66b8c1;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a68eca8(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66ba2b;
  puStack_70 = &UNK_10f66b8c1;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6a6a84();
  FUN_10a6a6bec(param_1);
  return;
}



/* Entry: 10a68eca8; end: 10a68ed7f;  */

/* WARNING: Removing unreachable block (ram,0x00010a68ed40) */

undefined1  [16] FUN_10a68eca8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c31e,0x15);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a6988(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68ed80; end: 10a68ee3b;  */

void FUN_10a68ed80(undefined8 param_1)

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
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f66b8c1;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a68ee3c(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66ba2b;
  puStack_70 = &UNK_10f66b8c1;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x110;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6a6da4();
  FUN_10a6a6f0c(param_1);
  return;
}



/* Entry: 10a68ee3c; end: 10a68ef13;  */

/* WARNING: Removing unreachable block (ram,0x00010a68eed4) */

undefined1  [16] FUN_10a68ee3c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c334,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6a6ca8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68ef14; end: 10a68f08f;  */

void FUN_10a68ef14(undefined8 param_1)

{
  undefined4 uStack_8c;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66ba3c;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x200000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a68f038(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66ba48;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 0;
  FUN_10a68f090(param_1,&puStack_88,&uStack_8c);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66ba50;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 1;
  FUN_10a68f090(param_1,&puStack_88,&uStack_8c);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66ba61;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 2;
  FUN_10a68f090(param_1,&puStack_88,&uStack_8c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a68f090; end: 10a68f0e7;  */

ulong FUN_10a68f090(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a6a6fc8(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a68f0e8; end: 10a68fbef;  */

void FUN_10a68f0e8(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Keys";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Invalid";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Backspace";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Left";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Up";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Right";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Down";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Shift";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Control";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Meta";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Alt";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Space";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Zero";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "One";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Two";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Three";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Four";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Five";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Six";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Seven";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Eight";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Nine";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "A";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "B";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "C";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "D";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "E";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "F";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "G";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "H";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "I";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  pcStack_a8 = "J";
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  pcStack_a8 = "K";
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  pcStack_a8 = "L";
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  pcStack_a8 = "M";
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  pcStack_a8 = "N";
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  pcStack_a8 = "O";
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  pcStack_a8 = "P";
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  pcStack_a8 = "Q";
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  pcStack_a8 = "R";
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  pcStack_a8 = "S";
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  pcStack_a8 = "T";
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  pcStack_a8 = "U";
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  pcStack_a8 = "V";
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  pcStack_a8 = "W";
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  pcStack_a8 = "X";
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  pcStack_a8 = "Y";
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  pcStack_a8 = "Z";
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x15b;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a68fbf0();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a68fbf0; end: 10a68fc93;  */

undefined8 * FUN_10a68fbf0(undefined8 *param_1,undefined8 *param_2,int param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a68fc94);
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



/* Entry: 10a68fc94; end: 10a68fe1f;  */

void FUN_10a68fc94(ulong param_1)

{
  ulong uVar1;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "KeyModifiers";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x15b;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Shift";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x15b;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a68fe20(param_1,&pcStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Control";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x15b;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a68fe20();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Alt";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x15b;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a68fe20();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Meta";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x15b;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a68fe20();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a68fe20; end: 10a68fec3;  */

undefined8 * FUN_10a68fe20(undefined8 *param_1,undefined8 *param_2,int param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a68fec4);
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



/* Entry: 10a68fec4; end: 10a68ff77;  */

void FUN_10a68fec4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  code **ppcVar9;
  undefined8 *extraout_x8;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a6a703c;
  ppuStack_60 = &PTR_FUN_110c0d208;
  ppuVar8 = &PTR_DAT_110c0c9d0;
  ppcVar9 = &pcStack_68;
  uStack_58 = param_1;
  FUN_10a65cb90(param_2,&PTR_DAT_110c0c9d0,ppcVar9,0);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    pppuVar6 = pppuVar5 + 0xc;
    if (ppcVar9 != (code **)0x0) {
      pppuVar6 = (undefined ***)(ppcVar9 + 0x16);
    }
    ppuVar14 = *pppuVar6;
    pppuVar6 = pppuVar5;
    func_0x00010a0fda30();
    plVar7 = (long *)0xe0;
    __Znwm();
    plVar10 = plVar7 + 1;
    plVar7[2] = 0;
    *plVar10 = 0;
    *plVar7 = (long)&PTR_DAT_110c0d230;
    plVar11 = plVar7 + 3;
    *plVar11 = (long)&PTR_FUN_110c0e100;
    *(undefined1 *)(plVar7 + 4) = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[0xb] = (long)pppuVar6;
    plVar7[0xc] = (long)ppuVar8;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0x800000000;
    plVar7[0xf] = (long)ppuVar14;
    *(undefined1 *)(plVar7 + 0x10) = 0;
    *(undefined1 *)(plVar7 + 0x14) = 0;
    *(undefined1 *)(plVar7 + 0x15) = 1;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[5] = (long)&PTR_FUN_110c0e198;
    plVar7[10] = (long)&PTR_FUN_110c0e1f0;
    plVar7[0x18] = 0;
    plVar7[0x19] = 0;
    *(undefined4 *)(plVar7 + 0x1b) = 0;
    plVar7[0x1a] = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar7 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar7[8] = (long)plVar11;
    plVar7[9] = (long)plVar7;
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    *(undefined4 *)((long)plVar7 + 0x6c) = *(undefined4 *)((long)pppuVar5 + 0x54);
    ppuVar14 = pppuVar5[0x14];
    ppuVar8 = pppuVar5[0x13];
    if (pppuVar5[0x14] != (undefined **)0x0) {
      ppuVar2 = pppuVar5[0x14] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = plVar7[0x17];
    plVar7[0x17] = (long)ppuVar14;
    plVar7[0x16] = (long)ppuVar8;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar8 = pppuVar5[0x16];
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
    }
    FUN_10a68a860();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar14 = ppuVar8 + 1;
      do {
        puVar13 = *ppuVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar4) {
          *ppuVar14 = puVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    extraout_x8[1] = plVar7;
    *extraout_x8 = plVar11;
    return;
  }
  return;
}



/* Entry: 10a68ff78; end: 10a690187;  */

void FUN_10a68ff78(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar9 = *plVar4;
  lVar8 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xe0;
  __Znwm();
  plVar6 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar6 = 0;
  *plVar4 = (long)&PTR_DAT_110c0d230;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0e100;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar8;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar9;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[5] = (long)&PTR_FUN_110c0e198;
  plVar4[10] = (long)&PTR_FUN_110c0e1f0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  *(undefined4 *)(plVar4 + 0x1b) = 0;
  plVar4[0x1a] = 0;
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
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar8 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  lVar9 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(param_2 + 0x98);
  if (*(long *)(param_2 + 0xa0) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = plVar4[0x17];
  plVar4[0x17] = lVar9;
  plVar4[0x16] = lVar8;
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = *(long **)(param_2 + 0xb0);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  FUN_10a68a860();
  if (plVar6 != (long *)0x0) {
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
  param_1[1] = plVar4;
  *param_1 = plVar7;
  return;
}



/* Entry: 10a690188; end: 10a69044b;  */

undefined *** FUN_10a690188(undefined ***param_1,code **param_2)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  uint uVar8;
  uint uVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined8 *extraout_x12;
  undefined **ppuVar14;
  undefined **ppuVar15;
  uint *puVar16;
  uint *puVar17;
  undefined **ppuStack_b0;
  undefined ***pppuStack_a8;
  undefined **ppuStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar6 = (undefined ***)param_1[0x16];
  if ((pppuVar6 == (undefined ***)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), pppuVar6 == (undefined ***)0x0)) {
LAB_10a690208:
    pppuVar6 = (undefined ***)param_1[0x14];
    if (pppuVar6 != (undefined ***)0x0) {
      ppuVar10 = param_1[0x13];
      pppuVar7 = pppuVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
        if (bVar3) {
          *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pppuVar7 = pppuVar6;
      __ZNSt3__119__shared_weak_count4lockEv();
      pppuStack_90 = pppuVar7;
      if (pppuVar7 != (undefined ***)0x0) {
        ppuStack_98 = ppuVar10;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        if (ppuVar10 != (undefined **)0x0) {
          ppuVar12 = (undefined **)ppuVar10[0x2b];
          if (ppuVar12 != ppuVar10 + 0x2a) {
LAB_10a69026c:
            if (ppuVar12[2] == (undefined *)0x0) goto LAB_10a690288;
            ppuVar15 = (undefined **)(ppuVar12[2] + 0xb0);
            param_2 = (code **)0xc2c0ac5e4c065340;
            (**(code **)(*ppuVar15 + 0x18))();
            if (ppuVar15 == (undefined **)0x0) goto LAB_10a690288;
            FUN_10a2d1b5c(&ppuStack_b0);
            if (pppuStack_a8 != (undefined ***)0x0) {
              pppuVar6 = pppuStack_a8 + 2;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
                if (bVar3) {
                  *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            pppuVar6 = (undefined ***)param_1[0x16];
            param_1[0x16] = (undefined **)pppuStack_a8;
            param_1[0x15] = ppuStack_b0;
            if (pppuVar6 != (undefined ***)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            pppuVar7 = pppuStack_90;
            if (pppuStack_a8 != (undefined ***)0x0) {
              pppuVar1 = pppuStack_a8 + 1;
              do {
                ppuVar10 = *pppuVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
                if (bVar3) {
                  *pppuVar1 = (undefined **)((long)ppuVar10 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (ppuVar10 == (undefined **)0x0) {
                (*(code *)(*pppuStack_a8)[2])(pppuStack_a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                pppuVar7 = pppuStack_90;
                pppuVar6 = pppuStack_a8;
              }
            }
            goto joined_r0x00010a690298;
          }
        }
        ppuVar15 = (undefined **)0x0;
        goto LAB_10a6902a4;
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar6);
    }
    goto LAB_10a690318;
  }
  ppuVar15 = param_1[0x15];
  pppuVar7 = pppuVar6 + 1;
  do {
    ppuVar10 = *pppuVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
    if (bVar3) {
      *pppuVar7 = (undefined **)((long)ppuVar10 + -1);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (ppuVar10 == (undefined **)0x0) {
    (*(code *)(*pppuVar6)[2])(pppuVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (ppuVar15 == (undefined **)0x0) goto LAB_10a690208;
  goto LAB_10a6902d8;
LAB_10a690288:
  ppuVar12 = (undefined **)ppuVar12[1];
  if (ppuVar12 == ppuVar10 + 0x2a) goto code_r0x00010a690294;
  goto LAB_10a69026c;
code_r0x00010a690294:
  ppuVar15 = (undefined **)0x0;
  pppuVar6 = (undefined ***)0x0;
joined_r0x00010a690298:
  if (pppuVar7 != (undefined ***)0x0) {
LAB_10a6902a4:
    pppuVar1 = pppuVar7 + 1;
    do {
      ppuVar10 = *pppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined **)((long)ppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar10 == (undefined **)0x0) {
      (*(code *)(*pppuVar7)[2])(pppuVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar6 = pppuVar7;
    }
  }
  if (ppuVar15 == (undefined **)0x0) {
LAB_10a690318:
    pcStack_88 = FUN_10a6a71a0;
    ppuStack_80 = &PTR_FUN_110c0d270;
    param_2 = &pcStack_88;
    pppuStack_78 = param_1;
    FUN_10a2f0f14(*(long *)(param_1[0xc][0x106] + 0x18) + 0x50);
    pppuVar6 = &ppuStack_80;
    (*(code *)*ppuStack_80)();
    goto LAB_10a69035c;
  }
LAB_10a6902d8:
  puVar17 = (uint *)ppuVar15[0x91];
  for (puVar16 = (uint *)ppuVar15[0x90]; puVar16 != puVar17; puVar16 = puVar16 + 1) {
    uVar8 = *puVar16;
    param_2 = (code **)(ulong)uVar8;
    ppuVar10 = ppuVar15;
    FUN_10a69044c();
    *(uint *)(param_1 + 0x17) = uVar8;
    *(undefined **)((long)param_1 + 0xbc) = *ppuVar10;
    pppuVar6 = param_1;
    FUN_10a5861f0();
  }
LAB_10a69035c:
  param_1[0x17] = (undefined **)0x0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  func_0x00010a05253c(&ppuStack_98);
  __Unwind_Resume();
  ppuVar15 = pppuVar6[0x97];
  if (ppuVar15 != (undefined **)0x0) {
    ppuVar10 = (undefined **)((ulong)param_2 & 0xffffffff);
    uVar11 = (long)ppuVar15 - 1;
    uVar9 = (uint)ppuVar15;
    uVar8 = (uint)param_2;
    if (((ulong)ppuVar15 & uVar11) == 0) {
      ppuVar12 = (undefined **)((ulong)(uVar9 - 1) & (ulong)ppuVar10);
    }
    else {
      ppuVar12 = ppuVar10;
      if (ppuVar15 <= ppuVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar8 / uVar9;
        }
        ppuVar12 = (undefined **)(ulong)(uVar8 - uVar4 * uVar9);
      }
    }
    puVar13 = (undefined8 *)pppuVar6[0x96][(long)ppuVar12];
    if (puVar13 != (undefined8 *)0x0) {
      do {
        while( true ) {
          puVar13 = (undefined8 *)*puVar13;
          if (puVar13 == (undefined8 *)0x0) goto LAB_10a6904e4;
          ppuVar14 = (undefined **)puVar13[1];
          if (ppuVar14 != ppuVar10) break;
          if (*(uint *)(puVar13 + 2) == uVar8) goto LAB_10a6904f0;
        }
        if (((ulong)ppuVar15 & uVar11) == 0) {
          ppuVar14 = (undefined **)((ulong)ppuVar14 & uVar11);
        }
        else if (ppuVar15 <= ppuVar14) {
          uVar5 = 0;
          if (ppuVar15 != (undefined **)0x0) {
            uVar5 = (ulong)ppuVar14 / (ulong)ppuVar15;
          }
          ppuVar14 = (undefined **)((long)ppuVar14 - uVar5 * (long)ppuVar15);
        }
      } while (ppuVar14 == ppuVar12);
    }
  }
LAB_10a6904e4:
  FUN_10a00946c(&UNK_10f66c34d);
  puVar13 = extraout_x12;
LAB_10a6904f0:
  return (undefined ***)((long)puVar13 + 0x14);
}


