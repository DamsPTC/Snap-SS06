/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a58715c; end: 10a587233;  */

/* WARNING: Removing unreachable block (ram,0x00010a5871f4) */

undefined1  [16] FUN_10a58715c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f663f9a,0x21);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a58ef94(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a587234; end: 10a587237;  */

void FUN_10a587234(long param_1)

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



/* Entry: 10a587238; end: 10a587367;  */

void FUN_10a587238(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar8 = *plVar4;
  lVar6 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xb0;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110bf6140;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bf3898;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  plVar4[0xf] = lVar8;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[5] = (long)&PTR_FUN_110bf3930;
  plVar4[10] = (long)&PTR_FUN_110bf3988;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x4000000000000;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
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
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a587368; end: 10a5873ff;  */

undefined1  [16] FUN_10a587368(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x20;
  auVar1._0_8_ = &UNK_10f663fbc;
  return auVar1;
}



/* Entry: 10a587400; end: 10a58745f;  */

void FUN_10a587400(undefined8 param_1)

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
  uStack_48 = 0xb;
  puStack_40 = &UNK_10f663e6a;
  uStack_38 = 0;
  puStack_30 = &UNK_10f663e6a;
  uStack_28 = 0;
  uStack_20 = 0x15e00000177;
  uStack_18 = 0xffffffff;
  FUN_10a587460(param_1,&uStack_58);
  FUN_10a58f288();
  return;
}



/* Entry: 10a587460; end: 10a587537;  */

/* WARNING: Removing unreachable block (ram,0x00010a5874f8) */

undefined1  [16] FUN_10a587460(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f663fbc,0x20);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a58f18c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a587538; end: 10a58753b;  */

void FUN_10a587538(long param_1)

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



/* Entry: 10a58753c; end: 10a58766b;  */

void FUN_10a58753c(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar8 = *plVar4;
  lVar6 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xb0;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110bf6190;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bf39a8;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  plVar4[0xf] = lVar8;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[5] = (long)&PTR_FUN_110bf3a40;
  plVar4[10] = (long)&PTR_FUN_110bf3a98;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x8000000000000;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
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
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a58766c; end: 10a5876ef;  */

undefined1  [16] FUN_10a58766c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f663fdd;
  return auVar1;
}



/* Entry: 10a5876f0; end: 10a58774f;  */

void FUN_10a5876f0(undefined8 param_1)

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
  uStack_48 = 4;
  puStack_40 = &UNK_10f663e6a;
  uStack_38 = 0;
  puStack_30 = &UNK_10f663e6a;
  uStack_28 = 0;
  uStack_20 = 0x12400000000;
  uStack_18 = 0xffffffff;
  FUN_10a587750(param_1,&uStack_58);
  FUN_10a58f480();
  return;
}



/* Entry: 10a587750; end: 10a587827;  */

/* WARNING: Removing unreachable block (ram,0x00010a5877e8) */

undefined1  [16] FUN_10a587750(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f663fdd,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a58f384(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a587828; end: 10a58782b;  */

void FUN_10a587828(long param_1)

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



/* Entry: 10a58782c; end: 10a58795b;  */

void FUN_10a58782c(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar8 = *plVar4;
  lVar6 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xb0;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110bf61e0;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bf3ab8;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  plVar4[0xf] = lVar8;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[5] = (long)&PTR_FUN_110bf3b50;
  plVar4[10] = (long)&PTR_FUN_110bf3ba8;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x40000000000;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
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
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a58795c; end: 10a5879df;  */

undefined1  [16] FUN_10a58795c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x18;
  auVar1._0_8_ = &UNK_10f663ff5;
  return auVar1;
}



/* Entry: 10a5879e0; end: 10a587a3f;  */

void FUN_10a5879e0(undefined8 param_1)

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
  uStack_48 = 4;
  puStack_40 = &UNK_10f663e6a;
  uStack_38 = 0;
  puStack_30 = &UNK_10f663e6a;
  uStack_28 = 0;
  uStack_20 = 0x12400000000;
  uStack_18 = 0xffffffff;
  FUN_10a587a40(param_1,&uStack_58);
  FUN_10a58f678();
  return;
}



/* Entry: 10a587a40; end: 10a587b17;  */

/* WARNING: Removing unreachable block (ram,0x00010a587ad8) */

undefined1  [16] FUN_10a587a40(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f663ff5,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a58f57c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a587b18; end: 10a587b1b;  */

void FUN_10a587b18(long param_1)

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



/* Entry: 10a587b1c; end: 10a587c4b;  */

void FUN_10a587b1c(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar8 = *plVar4;
  lVar6 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xb0;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110bf6230;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bf3bc8;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  plVar4[0xf] = lVar8;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[5] = (long)&PTR_FUN_110bf3c60;
  plVar4[10] = (long)&PTR_FUN_110bf3cb8;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x80000000000;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
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
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a587c4c; end: 10a587ccf;  */

undefined1  [16] FUN_10a587c4c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f66400e;
  return auVar1;
}



/* Entry: 10a587cd0; end: 10a587d33;  */

void FUN_10a587cd0(undefined8 param_1)

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
  puStack_40 = &UNK_10f663e6a;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x92;
  uStack_18 = 0xffffffff;
  FUN_10a587d34(param_1,&uStack_58);
  FUN_10a58f870();
  return;
}



/* Entry: 10a587d34; end: 10a587e0b;  */

/* WARNING: Removing unreachable block (ram,0x00010a587dcc) */

undefined1  [16] FUN_10a587d34(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66400e,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a58f774(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a587e0c; end: 10a587e0f;  */

void FUN_10a587e0c(long param_1)

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



/* Entry: 10a587e10; end: 10a587f3f;  */

void FUN_10a587e10(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar8 = *plVar4;
  lVar6 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xb0;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110bf6280;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bf3cd8;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  plVar4[0xf] = lVar8;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[5] = (long)&PTR_FUN_110bf3d70;
  plVar4[10] = (long)&PTR_FUN_110bf3dc8;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x1000000005a;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
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
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a587f40; end: 10a587fdb;  */

undefined1  [16] FUN_10a587f40(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1b;
  auVar1._0_8_ = &UNK_10f664026;
  return auVar1;
}



/* Entry: 10a587fdc; end: 10a588027;  */

void FUN_10a587fdc(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_18 = 0xffffffff;
  FUN_10a588028(param_1,&uStack_58);
  FUN_10a58fa68();
  return;
}



/* Entry: 10a588028; end: 10a5880ff;  */

/* WARNING: Removing unreachable block (ram,0x00010a5880c0) */

undefined1  [16] FUN_10a588028(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f664026,0x1b);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a58f96c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a588100; end: 10a588123;  */

void FUN_10a588100(long param_1)

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



/* Entry: 10a588124; end: 10a58818b;  */

bool FUN_10a588124(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x25) {
    iVar2 = 0xf664042;
    _memcmp(&UNK_10f664042,param_2);
    if (iVar2 == 0) {
      return true;
    }
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



/* Entry: 10a58818c; end: 10a588193;  */

bool FUN_10a58818c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x25) {
    iVar2 = 0xf664042;
    _memcmp(&UNK_10f664042,param_2);
    if (iVar2 == 0) {
      return true;
    }
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



/* Entry: 10a588194; end: 10a5881f7;  */

void FUN_10a588194(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  uStack_50 = 0xffffffff00000001;
  uStack_58 = 0;
  uStack_48 = 4;
  puStack_40 = &UNK_10f663e6a;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_1c = 0xffffffff0000015c;
  FUN_10a5881f8(param_1,&uStack_58);
  FUN_10a58fc20();
  return;
}



/* Entry: 10a5881f8; end: 10a5882cf;  */

/* WARNING: Removing unreachable block (ram,0x00010a588290) */

undefined1  [16] FUN_10a5881f8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f664042,0x25);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a58fb24(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a5882d0; end: 10a5883d7;  */

undefined8 * FUN_10a5882d0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[2] = &PTR_DAT_110bf42e0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_DAT_110bf4248;
  param_1[7] = &PTR_DAT_110bf4338;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0x800000000;
  param_1[0xc] = param_2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  FUN_10a586120(param_1 + 0x13);
  *param_1 = &PTR_FUN_110bf3ef8;
  param_1[2] = &PTR_DAT_110bf3f90;
  param_1[7] = &PTR_FUN_110bf3fe8;
  param_1[0x13] = &PTR_FUN_110bf4008;
  *(undefined4 *)(param_1 + 0xb) = 0x4000;
  if (param_2 != 0) {
    FUN_10a5ae998(param_1[0x14],&PTR_DAT_110bd3020,param_2,param_1 + 0x13);
  }
  return param_1;
}



/* Entry: 10a5883d8; end: 10a5883db;  */

void FUN_10a5883d8(long param_1)

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



/* Entry: 10a5883dc; end: 10a58852b;  */

void FUN_10a5883dc(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar3 = (undefined8 *)(param_2 + 0x60);
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_4 + 0xb0);
  }
  uVar8 = *puVar3;
  lVar7 = param_2;
  func_0x00010a0fda30();
  plVar6 = (long *)0xd0;
  __Znwm();
  plVar9 = plVar6 + 1;
  *plVar9 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110bf62d0;
  plVar1 = plVar6 + 3;
  FUN_10a5882d0(plVar1,uVar8,lVar7,param_3);
  if (plVar6[9] == 0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar2 = plVar6 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar6[8] = (long)plVar1;
    plVar6[9] = (long)plVar6;
  }
  else {
    if (*(long *)(plVar6[9] + 8) != -1) goto LAB_10a5884f0;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar2 = plVar6 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar6[8] = (long)plVar1;
    plVar6[9] = (long)plVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar7 = *plVar9;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10a5884f0:
  *(undefined4 *)((long)plVar6 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  return;
}



/* Entry: 10a58852c; end: 10a58854b;  */

undefined1  [16] FUN_10a58852c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x25;
  auVar1._0_8_ = &UNK_10f664068;
  return auVar1;
}



/* Entry: 10a58854c; end: 10a5885b3;  */

bool FUN_10a58854c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x25) {
    iVar2 = 0xf664068;
    _memcmp(&UNK_10f664068,param_2);
    if (iVar2 == 0) {
      return true;
    }
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



/* Entry: 10a5885b4; end: 10a5885bb;  */

bool FUN_10a5885b4(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x25) {
    iVar2 = 0xf664068;
    _memcmp(&UNK_10f664068,param_2);
    if (iVar2 == 0) {
      return true;
    }
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



/* Entry: 10a5885bc; end: 10a58861b;  */

void FUN_10a5885bc(undefined8 param_1)

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
  uStack_48 = 4;
  puStack_40 = &UNK_10f663e6a;
  uStack_38 = 0;
  puStack_30 = &UNK_10f663e6a;
  uStack_28 = 0;
  uStack_20 = 0x15c0000016f;
  uStack_18 = 0xffffffff;
  FUN_10a58861c(param_1,&uStack_58);
  FUN_10a58fe14();
  return;
}



/* Entry: 10a58861c; end: 10a5886f3;  */

/* WARNING: Removing unreachable block (ram,0x00010a5886b4) */

undefined1  [16] FUN_10a58861c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f664068,0x25);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a58fd18(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a5886f4; end: 10a5886f7;  */

void FUN_10a5886f4(long param_1)

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



/* Entry: 10a5886f8; end: 10a588827;  */

void FUN_10a5886f8(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar8 = *plVar4;
  lVar6 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xb0;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110bf6320;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bf4028;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  plVar4[0xf] = lVar8;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[5] = (long)&PTR_FUN_110bf40c0;
  plVar4[10] = (long)&PTR_FUN_110bf4118;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x1000000000000;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
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
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a588828; end: 10a588847;  */

undefined1  [16] FUN_10a588828(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x24;
  auVar1._0_8_ = &UNK_10f66408e;
  return auVar1;
}



/* Entry: 10a588848; end: 10a5888af;  */

bool FUN_10a588848(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x24) {
    iVar2 = 0xf66408e;
    _memcmp(&UNK_10f66408e,param_2);
    if (iVar2 == 0) {
      return true;
    }
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



/* Entry: 10a5888b0; end: 10a5888b7;  */

bool FUN_10a5888b0(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x24) {
    iVar2 = 0xf66408e;
    _memcmp(&UNK_10f66408e,param_2);
    if (iVar2 == 0) {
      return true;
    }
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



/* Entry: 10a5888b8; end: 10a588917;  */

void FUN_10a5888b8(undefined8 param_1)

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
  uStack_48 = 4;
  puStack_40 = &UNK_10f663e6a;
  uStack_38 = 0;
  puStack_30 = &UNK_10f663e6a;
  uStack_28 = 0;
  uStack_20 = 0x15c0000016f;
  uStack_18 = 0xffffffff;
  FUN_10a588918(param_1,&uStack_58);
  FUN_10a590008();
  return;
}



/* Entry: 10a588918; end: 10a5889ef;  */

/* WARNING: Removing unreachable block (ram,0x00010a5889b0) */

undefined1  [16] FUN_10a588918(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66408e,0x24);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a58ff0c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a5889f0; end: 10a5889f3;  */

void FUN_10a5889f0(long param_1)

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



/* Entry: 10a5889f4; end: 10a588b23;  */

void FUN_10a5889f4(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar8 = *plVar4;
  lVar6 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xb0;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110bf6370;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bf4138;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  plVar4[0xf] = lVar8;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[5] = (long)&PTR_FUN_110bf41d0;
  plVar4[10] = (long)&PTR_FUN_110bf4228;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x100000000000;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
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
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a588b24; end: 10a588b4b;  */

undefined1  [16] FUN_10a588b24(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 10;
  auVar1._0_8_ = &UNK_10f6640b3;
  return auVar1;
}



/* Entry: 10a588b4c; end: 10a588de3;  */

void FUN_10a588b4c(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6640b3,10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bf6810;
  pppuVar2 = (undefined8 ***)&UNK_10f663e6a;
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
    ppuStack_b0 = &PTR_DAT_110bf6810;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c0f740;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a588dc4;
    FUN_10a054dac(param_1,&UNK_10f663e6b,FUN_10a590100,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a588dc4;
    FUN_10a054dac(param_1,&UNK_10f63474c,FUN_10a5903f4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"enabled",FUN_10a590580,FUN_10a590638);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6640b3,10);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a588dc4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a588dc8);
  (*pcVar6)();
}



/* Entry: 10a588de4; end: 10a588de7;  */

void FUN_10a588de4(void)

{
  return;
}



/* Entry: 10a588de8; end: 10a588ecf;  */

undefined1  [16] FUN_10a588de8(ulong *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  long **pplVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long *plStack_40;
  ulong uStack_38;
  
  pplVar3 = &plStack_40;
  (**(code **)(*param_2 + 0x38))();
  plVar5 = (long *)&UNK_10e4cc9e0;
  plStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10a166af4(&plStack_40,&UNK_10e4cc9e0,0);
  if (pplVar3 != (long **)0xffffffffffffffff) {
    uVar1 = (long)pplVar3 + 0xb;
    if (uStack_38 < uVar1) goto LAB_10a588ec4;
    plStack_40 = (long *)((long)plStack_40 + uVar1);
    uStack_38 = uStack_38 - uVar1;
  }
  uVar1 = uStack_38;
  plVar6 = plStack_40;
  if (0x7ffffffffffffff7 < uStack_38) {
    func_0x000109ffde50();
LAB_10a588ec4:
    FUN_109ffdddc(&UNK_10f2fca6e);
    auVar8._8_8_ = 0x10;
    auVar8._0_8_ = &UNK_10f6640be;
    return auVar8;
  }
  if (uStack_38 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uStack_38;
    puVar4 = param_1;
    if (uStack_38 == 0) goto LAB_10a588ea8;
  }
  else {
    puVar2 = (ulong *)0x19;
    if ((uStack_38 | 7) != 0x17) {
      puVar2 = (ulong *)((uStack_38 | 7) + 1);
    }
    puVar4 = puVar2;
    __Znwm();
    param_1[1] = uVar1;
    param_1[2] = (ulong)puVar2 | 0x8000000000000000;
    *param_1 = (ulong)puVar4;
  }
  pplVar3 = (long **)puVar4;
  _memmove(puVar4,plVar6,uVar1);
  plVar5 = plVar6;
  param_1 = puVar4;
LAB_10a588ea8:
  *(undefined1 *)((long)param_1 + uVar1) = 0;
  auVar7._8_8_ = plVar5;
  auVar7._0_8_ = pplVar3;
  return auVar7;
}



/* Entry: 10a588ed0; end: 10a588f3b;  */

undefined1  [16] FUN_10a588ed0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f6640be;
  return auVar1;
}



/* Entry: 10a588f3c; end: 10a588feb;  */

void FUN_10a588f3c(undefined8 param_1)

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
  puStack_80 = &UNK_10f663e6a;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a588fec(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f663e70;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f663e6a;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a5907f4();
  FUN_10a590998(param_1);
  return;
}



/* Entry: 10a588fec; end: 10a5890c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a589084) */

undefined1  [16] FUN_10a588fec(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6640be,0x10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a5906f8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a5890c4; end: 10a58915b;  */

void FUN_10a5890c4(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  func_0x00010a0d77bc(&uStack_30,*(undefined8 *)(param_2 + 0x168));
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(param_1 + 0xa0);
  *(long **)(param_1 + 0xa0) = plStack_28;
  *(undefined8 *)(param_1 + 0x98) = uStack_30;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
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
  return;
}



/* Entry: 10a58915c; end: 10a5891f7;  */

undefined1  [16] FUN_10a58915c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1d;
  auVar1._0_8_ = &UNK_10f6640cf;
  return auVar1;
}



/* Entry: 10a5891f8; end: 10a58924b;  */

void FUN_10a5891f8(undefined8 param_1)

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
  puStack_40 = &UNK_10f663e6a;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f663e6a;
  uStack_18 = 0xffffffff;
  FUN_10a58924c(param_1,&uStack_58);
  FUN_10a590b50();
  return;
}



/* Entry: 10a58924c; end: 10a589323;  */

/* WARNING: Removing unreachable block (ram,0x00010a5892e4) */

undefined1  [16] FUN_10a58924c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6640cf,0x1d);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a590a54(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a589324; end: 10a58948f;  */

long * FUN_10a589324(long *param_1,long *param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  param_1[8] = param_4;
  param_1[9] = param_5;
  param_1[2] = (long)&PTR_DAT_110bf42e0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = (long)&PTR_DAT_110bf4248;
  param_1[7] = (long)&PTR_DAT_110bf4338;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0x800000000;
  param_1[0xc] = param_3;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  plVar1 = param_1 + 0x13;
  *(undefined1 *)(param_1 + 0x12) = 1;
  FUN_10a0040d0(plVar1,param_2 + 1);
  lVar3 = *param_2;
  *param_1 = lVar3;
  param_1[2] = (long)&PTR_FUN_110c0f860;
  param_1[7] = (long)&PTR_DAT_110c0f8b8;
  param_1[0x13] = param_2[3];
  *(long *)((long)param_1 + *(long *)(lVar3 + -0x18)) = param_2[4];
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  plVar2 = (long *)((long)plVar1 + *(long *)(param_1[0x13] + -0x18));
  if ((*(byte *)(plVar2 + 3) & 1) == 0) {
    *(undefined1 *)(plVar2 + 3) = 1;
    plVar2[2] = param_3;
    if (param_3 != 0) {
      plVar2[1] = *(long *)(*(long *)(param_3 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar2 + 0x18))();
  }
  FUN_10a5ae998(param_1[0x16],&PTR_DAT_110b99f08,param_3,plVar1);
  return param_1;
}



/* Entry: 10a589490; end: 10a5894ef;  */

void FUN_10a589490(long param_1,long param_2)

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
  
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x158);
    if ((ulong)(*(long *)(param_2 + 0x160) - lVar5) < 0x31) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5894f0);
      (*pcVar4)();
    }
    if (((*(byte *)(lVar5 + 0x38) & 1) == 0) && (*(int *)(lVar5 + 0x34) == 1)) {
      FUN_10a76c260(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x8d8),0x17);
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
  return;
}



/* Entry: 10a5894f0; end: 10a5896c3;  */

void FUN_10a5894f0(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

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
  plVar5 = (long *)0x340;
  __Znwm();
  plVar9 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar9 = 0;
  plVar6 = plVar5 + 3;
  *plVar5 = (long)&PTR_FUN_110bf63c0;
  plVar5[100] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(plVar5 + 0x67) = 0x100;
  plVar5[0x66] = 0;
  plVar5[0x65] = 0;
  FUN_10a589324(plVar6,&PTR_PTR_110bf4550,uVar8,lVar7,param_3);
  plVar5[3] = (long)&PTR_DAT_110bf4360;
  plVar5[5] = (long)&PTR_FUN_110bf4418;
  plVar5[10] = (long)&PTR_FUN_110bf4470;
  plVar5[0x16] = (long)&PTR_FUN_110bf4498;
  plVar5[100] = (long)&PTR_FUN_110bf4510;
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
    if (*(long *)(lVar7 + 8) != -1) goto LAB_10a589658;
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
LAB_10a589658:
  *(undefined4 *)((long)plVar6 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(plVar6 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  FUN_10a3a754c(plVar6 + 0x18,param_2 + 0xc0);
  *param_1 = plVar6;
  param_1[1] = plVar5;
  return;
}



/* Entry: 10a5896c4; end: 10a589757;  */

undefined1  [16] FUN_10a5896c4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1c;
  auVar1._0_8_ = &UNK_10f6640ed;
  return auVar1;
}



/* Entry: 10a589758; end: 10a5897ab;  */

void FUN_10a589758(undefined8 param_1)

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
  puStack_40 = &UNK_10f663e6a;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f663e6a;
  uStack_18 = 0xffffffff;
  FUN_10a5897ac(param_1,&uStack_58);
  FUN_10a590da0();
  return;
}



/* Entry: 10a5897ac; end: 10a589883;  */

/* WARNING: Removing unreachable block (ram,0x00010a589844) */

undefined1  [16] FUN_10a5897ac(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6640ed,0x1c);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a590ca4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a589884; end: 10a5898e7;  */

void FUN_10a589884(long param_1,long param_2)

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
  
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x158);
    if ((ulong)(*(long *)(param_2 + 0x160) - lVar5) < 0x31) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5898e8);
      (*pcVar4)();
    }
    if ((*(char *)(lVar5 + 0x38) == '\x01') && (*(int *)(lVar5 + 0x34) == 1)) {
      FUN_10a76c260(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x8d8),0x18);
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
  return;
}



/* Entry: 10a5898e8; end: 10a589abb;  */

void FUN_10a5898e8(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

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
  plVar5 = (long *)0x340;
  __Znwm();
  plVar9 = plVar5 + 1;
  plVar5[2] = 0;
  *plVar9 = 0;
  plVar6 = plVar5 + 3;
  *plVar5 = (long)&PTR_FUN_110bf6410;
  plVar5[100] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(plVar5 + 0x67) = 0x100;
  plVar5[0x66] = 0;
  plVar5[0x65] = 0;
  FUN_10a589324(plVar6,&PTR_PTR_110bf4790,uVar8,lVar7,param_3);
  plVar5[3] = (long)&PTR_FUN_110bf45a0;
  plVar5[5] = (long)&PTR_FUN_110bf4658;
  plVar5[10] = (long)&PTR_FUN_110bf46b0;
  plVar5[0x16] = (long)&PTR_FUN_110bf46d8;
  plVar5[100] = (long)&PTR_FUN_110bf4750;
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
    if (*(long *)(lVar7 + 8) != -1) goto LAB_10a589a50;
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
LAB_10a589a50:
  *(undefined4 *)((long)plVar6 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(plVar6 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  FUN_10a3a754c(plVar6 + 0x18,param_2 + 0xc0);
  *param_1 = plVar6;
  param_1[1] = plVar5;
  return;
}



/* Entry: 10a589abc; end: 10a589b53;  */

undefined1  [16] FUN_10a589abc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x20;
  auVar1._0_8_ = &UNK_10f66410a;
  return auVar1;
}



/* Entry: 10a589b54; end: 10a589baf;  */

void FUN_10a589b54(undefined8 param_1)

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
  puStack_40 = &UNK_10f663e6a;
  uStack_38 = 0;
  puStack_30 = &UNK_10f663e6a;
  uStack_28 = 0;
  uStack_20 = 0x94;
  uStack_18 = 0xffffffff;
  FUN_10a589bb0(param_1,&uStack_58);
  FUN_10a590ff0();
  return;
}



/* Entry: 10a589bb0; end: 10a589c87;  */

/* WARNING: Removing unreachable block (ram,0x00010a589c48) */

undefined1  [16] FUN_10a589bb0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66410a,0x20);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a590ef4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a589c88; end: 10a589caf;  */

void FUN_10a589c88(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  bVar2 = *(byte *)(param_1 + 0x91);
  bVar5 = *(char *)(*(long *)(param_1 + 0x60) + 0xe2d) == '\x01';
  *(bool *)(param_1 + 0x91) = bVar5;
  if (((bVar2 & 1) != 0) || (!bVar5)) {
    return;
  }
  if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    if (*(long *)(param_1 + 0x70) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x70) + 8);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_38 = *(undefined8 *)(param_1 + 0x80);
    uStack_40 = *(undefined8 *)(param_1 + 0x78);
    if (*(long *)(param_1 + 0x80) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x80) + 0x10);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    bStack_30 = 1;
    func_0x00010a58dd14(&uStack_70);
    plStack_58 = plStack_68;
    uStack_60 = uStack_70;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 2;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plStack_68 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
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



/* Entry: 10a589cb0; end: 10a589df7;  */

void FUN_10a589cb0(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar8 = *plVar4;
  lVar6 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xb0;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110bf6460;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bf47d8;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar8;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[5] = (long)&PTR_FUN_110bf4870;
  plVar4[10] = (long)&PTR_FUN_110bf48c8;
  *(bool *)((long)plVar4 + 0xa9) = *(char *)(lVar8 + 0xe2d) == '\x01';
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
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
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *(undefined1 *)((long)plVar4 + 0xa9) = *(undefined1 *)(param_2 + 0x91);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a589df8; end: 10a589e93;  */

undefined1  [16] FUN_10a589df8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1f;
  auVar1._0_8_ = &UNK_10f66412b;
  return auVar1;
}



/* Entry: 10a589e94; end: 10a589eef;  */

void FUN_10a589e94(undefined8 param_1)

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
  puStack_40 = &UNK_10f663e6a;
  uStack_38 = 0;
  puStack_30 = &UNK_10f663e6a;
  uStack_28 = 0;
  uStack_20 = 0x94;
  uStack_18 = 0xffffffff;
  FUN_10a589ef0(param_1,&uStack_58);
  FUN_10a5911e8();
  return;
}



/* Entry: 10a589ef0; end: 10a589fc7;  */

/* WARNING: Removing unreachable block (ram,0x00010a589f88) */

undefined1  [16] FUN_10a589ef0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66412b,0x1f);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a5910ec(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a589fc8; end: 10a589fef;  */

void FUN_10a589fc8(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  bVar2 = *(byte *)(param_1 + 0x91);
  bVar5 = *(char *)(*(long *)(param_1 + 0x60) + 0xe2d) == '\x02';
  *(bool *)(param_1 + 0x91) = bVar5;
  if (((bVar2 & 1) != 0) || (!bVar5)) {
    return;
  }
  if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    if (*(long *)(param_1 + 0x70) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x70) + 8);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_38 = *(undefined8 *)(param_1 + 0x80);
    uStack_40 = *(undefined8 *)(param_1 + 0x78);
    if (*(long *)(param_1 + 0x80) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x80) + 0x10);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    bStack_30 = 1;
    func_0x00010a58dd14(&uStack_70);
    plStack_58 = plStack_68;
    uStack_60 = uStack_70;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 2;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plStack_68 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
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



/* Entry: 10a589ff0; end: 10a58a137;  */

void FUN_10a589ff0(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar8 = *plVar4;
  lVar6 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xb0;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110bf64b0;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bf48e8;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000000;
  plVar4[0xf] = lVar8;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[5] = (long)&PTR_FUN_110bf4980;
  plVar4[10] = (long)&PTR_FUN_110bf49d8;
  *(bool *)((long)plVar4 + 0xa9) = *(char *)(lVar8 + 0xe2d) == '\x02';
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
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
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *(undefined1 *)((long)plVar4 + 0xa9) = *(undefined1 *)(param_2 + 0x91);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a58a138; end: 10a58a1d3;  */

undefined1  [16] FUN_10a58a138(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1e;
  auVar1._0_8_ = &UNK_10f66414b;
  return auVar1;
}



/* Entry: 10a58a1d4; end: 10a58a22f;  */

void FUN_10a58a1d4(undefined8 param_1)

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
  puStack_40 = &UNK_10f663e6a;
  uStack_38 = 0;
  puStack_30 = &UNK_10f663e6a;
  uStack_28 = 0;
  uStack_20 = 0x94;
  uStack_18 = 0xffffffff;
  FUN_10a58a230(param_1,&uStack_58);
  FUN_10a5913e0();
  return;
}



/* Entry: 10a58a230; end: 10a58a307;  */

/* WARNING: Removing unreachable block (ram,0x00010a58a2c8) */

undefined1  [16] FUN_10a58a230(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66414b,0x1e);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a5912e4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a58a308; end: 10a58a333;  */

void FUN_10a58a308(long param_1)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  cVar2 = *(char *)(param_1 + 0x91);
  cVar3 = *(char *)(*(long *)(param_1 + 0x60) + 0xe2d);
  *(bool *)(param_1 + 0x91) = cVar3 == '\x02';
  if (cVar2 != '\x01' || cVar3 == '\x02') {
    return;
  }
  if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    if (*(long *)(param_1 + 0x70) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x70) + 8);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
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
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
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
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plStack_68 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    if ((bStack_30 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a58630c);
      (*pcVar5)();
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



/* Entry: 10a58a334; end: 10a58a477;  */

void FUN_10a58a334(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar8 = *plVar4;
  lVar6 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xb0;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110bf6500;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bf49f8;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  plVar4[0xf] = lVar8;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[5] = (long)&PTR_FUN_110bf4a90;
  plVar4[10] = (long)&PTR_FUN_110bf4ae8;
  *(bool *)((long)plVar4 + 0xa9) = *(char *)(lVar8 + 0xe2d) == '\x02';
  *(undefined8 *)((long)plVar4 + 0x6c) = 0xa00000000;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
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
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *(undefined1 *)((long)plVar4 + 0xa9) = *(undefined1 *)(param_2 + 0x91);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a58a478; end: 10a58a513;  */

undefined1  [16] FUN_10a58a478(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1d;
  auVar1._0_8_ = &UNK_10f66416a;
  return auVar1;
}



/* Entry: 10a58a514; end: 10a58a567;  */

void FUN_10a58a514(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000042;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_1c = 0x13c00000111;
  FUN_10a58a568(param_1,&uStack_58);
  FUN_10a5915d8();
  return;
}



/* Entry: 10a58a568; end: 10a58a63f;  */

/* WARNING: Removing unreachable block (ram,0x00010a58a600) */

undefined1  [16] FUN_10a58a568(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66416a,0x1d);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a5914dc(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a58a640; end: 10a58a677;  */

void FUN_10a58a640(undefined8 param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x194) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x194) = 1;
    *(undefined8 *)(param_2 + 0x18c) = 0;
  }
  return;
}



/* Entry: 10a58a678; end: 10a58a873;  */

undefined8 * FUN_10a58a678(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x20) = 0x100;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = param_3;
  param_1[9] = param_4;
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0x800000000;
  param_1[0xc] = param_2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  plVar1 = param_1 + 0x13;
  *(undefined1 *)(param_1 + 0x12) = 1;
  FUN_10a0040d0(plVar1,&PTR_PTR_110bf4d18);
  FUN_10a3f840c(param_1 + 0x18);
  *param_1 = &PTR_FUN_110bf4b10;
  param_1[2] = &PTR_DAT_110bf4bb8;
  param_1[7] = &PTR_FUN_110bf4c10;
  param_1[0x13] = &PTR_FUN_110bf4c38;
  param_1[0x1d] = &PTR_FUN_110bf4cd8;
  param_1[0x18] = &PTR_FUN_110bf4c80;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  func_0x000107c2b054(auStack_48,&UNK_10f663e7f);
  if (param_2 != 0) {
    FUN_10a76c080(*(undefined8 *)(param_2 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  plVar2 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  if ((*(byte *)(plVar2 + 3) & 1) == 0) {
    *(undefined1 *)(plVar2 + 3) = 1;
    plVar2[2] = param_2;
    if (param_2 != 0) {
      plVar2[1] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar2 + 0x18))();
  }
  FUN_10a5ae998(param_1[0x16],&PTR_DAT_110b99f08,param_2,plVar1);
  if (param_2 != 0) {
    FUN_10a5ae998(param_1[0x19],&PTR_DAT_110bd3150,param_2,param_1 + 0x18);
  }
  return param_1;
}



/* Entry: 10a58a874; end: 10a58a88b;  */

void FUN_10a58a874(void)

{
  return;
}



/* Entry: 10a58a88c; end: 10a58a9db;  */

void FUN_10a58a88c(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar3 = (undefined8 *)(param_2 + 0x60);
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_4 + 0xb0);
  }
  uVar8 = *puVar3;
  lVar7 = param_2;
  func_0x00010a0fda30();
  plVar6 = (long *)0x120;
  __Znwm();
  plVar9 = plVar6 + 1;
  *plVar9 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110bf6550;
  plVar1 = plVar6 + 3;
  FUN_10a58a678(plVar1,uVar8,lVar7,param_3);
  if (plVar6[9] == 0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar2 = plVar6 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar6[8] = (long)plVar1;
    plVar6[9] = (long)plVar6;
  }
  else {
    if (*(long *)(plVar6[9] + 8) != -1) goto LAB_10a58a9a0;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar2 = plVar6 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar6[8] = (long)plVar1;
    plVar6[9] = (long)plVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar7 = *plVar9;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10a58a9a0:
  *(undefined4 *)((long)plVar6 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  return;
}



/* Entry: 10a58a9dc; end: 10a58aa5f;  */

undefined1  [16] FUN_10a58a9dc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f664188;
  return auVar1;
}



/* Entry: 10a58aa60; end: 10a58aab3;  */

void FUN_10a58aa60(undefined8 param_1)

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
  puStack_40 = &UNK_10f663e6a;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f663e6a;
  uStack_18 = 0xffffffff;
  FUN_10a58aab4(param_1,&uStack_58);
  FUN_10a5917d0();
  return;
}



/* Entry: 10a58aab4; end: 10a58ab8b;  */

/* WARNING: Removing unreachable block (ram,0x00010a58ab4c) */

undefined1  [16] FUN_10a58aab4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f664188,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a5916d4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a58ab8c; end: 10a58ab8f;  */

void FUN_10a58ab8c(long param_1)

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



/* Entry: 10a58ab90; end: 10a58acbf;  */

void FUN_10a58ab90(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar8 = *plVar4;
  lVar6 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xb0;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110bf65a0;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_DAT_110bf4d48;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  plVar4[0xf] = lVar8;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[5] = (long)&PTR_FUN_110bf4de0;
  plVar4[10] = (long)&PTR_FUN_110bf4e38;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x200000064;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
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
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a58acc0; end: 10a58ad43;  */

undefined1  [16] FUN_10a58acc0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x16;
  auVar1._0_8_ = &UNK_10f6641a0;
  return auVar1;
}



/* Entry: 10a58ad44; end: 10a58ad97;  */

void FUN_10a58ad44(undefined8 param_1)

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
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f663e6a;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  puStack_30 = &UNK_10f663e6a;
  uStack_18 = 0;
  FUN_10a58ad98(param_1,&uStack_58);
  FUN_10a5919c8();
  return;
}



/* Entry: 10a58ad98; end: 10a58ae6f;  */

/* WARNING: Removing unreachable block (ram,0x00010a58ae30) */

undefined1  [16] FUN_10a58ad98(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6641a0,0x16);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a5918cc(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a58ae70; end: 10a58af7f;  */

undefined8 * FUN_10a58ae70(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[2] = &PTR_DAT_110bf42e0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_DAT_110bf4248;
  param_1[7] = &PTR_DAT_110bf4338;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0x800000000;
  param_1[0xc] = param_2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  FUN_10a3f840c(param_1 + 0x13);
  *param_1 = &PTR_FUN_110bf4e58;
  param_1[2] = &PTR_DAT_110bf4ef8;
  param_1[7] = &PTR_FUN_110bf4f50;
  param_1[0x13] = &PTR_FUN_110bf4f70;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0x100000064;
  if (param_2 != 0) {
    FUN_10a5ae998(param_1[0x14],&PTR_DAT_110bd3150,param_2,param_1 + 0x13);
  }
  return param_1;
}



/* Entry: 10a58af80; end: 10a58afaf;  */

void FUN_10a58af80(long param_1)

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
  
  if (*(char *)(param_1 + 0xb8) != '\x01') {
    return;
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
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



/* Entry: 10a58afb0; end: 10a58b0ff;  */

void FUN_10a58afb0(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar3 = (undefined8 *)(param_2 + 0x60);
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_4 + 0xb0);
  }
  uVar8 = *puVar3;
  lVar7 = param_2;
  func_0x00010a0fda30();
  plVar6 = (long *)0xd8;
  __Znwm();
  plVar9 = plVar6 + 1;
  *plVar9 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110bf65f0;
  plVar1 = plVar6 + 3;
  FUN_10a58ae70(plVar1,uVar8,lVar7,param_3);
  if (plVar6[9] == 0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar2 = plVar6 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar6[8] = (long)plVar1;
    plVar6[9] = (long)plVar6;
  }
  else {
    if (*(long *)(plVar6[9] + 8) != -1) goto LAB_10a58b0c4;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar2 = plVar6 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar6[8] = (long)plVar1;
    plVar6[9] = (long)plVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar7 = *plVar9;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10a58b0c4:
  *(undefined4 *)((long)plVar6 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  return;
}


