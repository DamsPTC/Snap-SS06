/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a58b100; end: 10a58b183;  */

undefined1  [16] FUN_10a58b100(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x16;
  auVar1._0_8_ = &UNK_10f6641b7;
  return auVar1;
}



/* Entry: 10a58b184; end: 10a58b22f;  */

void FUN_10a58b184(undefined8 param_1)

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
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f663e6a;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a58b230(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f663e92;
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
  FUN_10a591bc0();
  FUN_10a591d2c(param_1);
  return;
}



/* Entry: 10a58b230; end: 10a58b307;  */

/* WARNING: Removing unreachable block (ram,0x00010a58b2c8) */

undefined1  [16] FUN_10a58b230(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6641b7,0x16);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a591ac4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a58b308; end: 10a58b31f;  */

void FUN_10a58b308(long param_1)

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
  
  *(float *)(param_1 + 0x94) =
       (float)*(double *)(*(long *)(*(long *)(param_1 + 0x60) + 0x850) + 0x10);
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



/* Entry: 10a58b320; end: 10a58b44f;  */

void FUN_10a58b320(undefined8 *param_1,long param_2,long param_3,long param_4)

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
  *plVar4 = (long)&PTR_FUN_110bf6640;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bf4f98;
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
  plVar4[5] = (long)&PTR_FUN_110bf5030;
  plVar4[10] = (long)&PTR_FUN_110bf5088;
  *(undefined4 *)((long)plVar4 + 0xac) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x800000032;
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



/* Entry: 10a58b450; end: 10a58b46f;  */

undefined1  [16] FUN_10a58b450(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = &UNK_10f6641ce;
  return auVar1;
}



/* Entry: 10a58b470; end: 10a58b4d7;  */

bool FUN_10a58b470(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x28) {
    iVar2 = 0xf6641ce;
    _memcmp(&UNK_10f6641ce,param_2);
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



/* Entry: 10a58b4d8; end: 10a58b4df;  */

bool FUN_10a58b4d8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x28) {
    iVar2 = 0xf6641ce;
    _memcmp(&UNK_10f6641ce,param_2);
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



/* Entry: 10a58b4e0; end: 10a58b58b;  */

void FUN_10a58b4e0(undefined8 param_1)

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
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f663e6a;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a58b58c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f663e9f;
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
  FUN_10a591f24();
  func_0x00010a592244(param_1);
  return;
}



/* Entry: 10a58b58c; end: 10a58b663;  */

/* WARNING: Removing unreachable block (ram,0x00010a58b624) */

undefined1  [16] FUN_10a58b58c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6641ce,0x28);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a591e28(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a58b664; end: 10a58b6c3;  */

void FUN_10a58b664(long param_1)

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
  
  if (param_1 + 0x98 != *(long *)(*(long *)(param_1 + 0x60) + 0x8c0) + 0xa8) {
    FUN_10a58e0e0();
  }
  if (*(long *)(param_1 + 0x98) == *(long *)(param_1 + 0xa0)) {
    return;
  }
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



/* Entry: 10a58b6c4; end: 10a58b7fb;  */

void FUN_10a58b6c4(undefined8 *param_1,long param_2,long param_3,long param_4)

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
  plVar4 = (long *)0xc8;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110bf6690;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bf50a8;
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
  plVar4[5] = (long)&PTR_DAT_110bf5140;
  plVar4[10] = (long)&PTR_DAT_110bf5198;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[0x18] = 0;
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



/* Entry: 10a58b7fc; end: 10a58b81b;  */

undefined1  [16] FUN_10a58b7fc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x2a;
  auVar1._0_8_ = &UNK_10f6641f7;
  return auVar1;
}



/* Entry: 10a58b81c; end: 10a58b883;  */

bool FUN_10a58b81c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2a) {
    iVar2 = 0xf6641f7;
    _memcmp(&UNK_10f6641f7,param_2);
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



/* Entry: 10a58b884; end: 10a58b88b;  */

bool FUN_10a58b884(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2a) {
    iVar2 = 0xf6641f7;
    _memcmp(&UNK_10f6641f7,param_2);
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



/* Entry: 10a58b88c; end: 10a58b937;  */

void FUN_10a58b88c(undefined8 param_1)

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
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f663e6a;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a58b938(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f663e9f;
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
  FUN_10a59243c();
  FUN_10a5925ac(param_1);
  return;
}



/* Entry: 10a58b938; end: 10a58ba0f;  */

/* WARNING: Removing unreachable block (ram,0x00010a58b9d0) */

undefined1  [16] FUN_10a58b938(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6641f7,0x2a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a592340(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a58ba10; end: 10a58ba6f;  */

void FUN_10a58ba10(long param_1)

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
  
  if (param_1 + 0x98 != *(long *)(*(long *)(param_1 + 0x60) + 0x8c0) + 0xc0) {
    FUN_10a58e0e0();
  }
  if (*(long *)(param_1 + 0x98) == *(long *)(param_1 + 0xa0)) {
    return;
  }
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



/* Entry: 10a58ba70; end: 10a58bba7;  */

void FUN_10a58ba70(undefined8 *param_1,long param_2,long param_3,long param_4)

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
  plVar4 = (long *)0xc8;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110bf66e0;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_DAT_110bf51b8;
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
  plVar4[5] = (long)&PTR_DAT_110bf5250;
  plVar4[10] = (long)&PTR_DAT_110bf52a8;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[0x18] = 0;
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



/* Entry: 10a58bba8; end: 10a58bbc7;  */

undefined1  [16] FUN_10a58bba8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x2a;
  auVar1._0_8_ = &UNK_10f664222;
  return auVar1;
}



/* Entry: 10a58bbc8; end: 10a58bc2f;  */

bool FUN_10a58bbc8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2a) {
    iVar2 = 0xf664222;
    _memcmp(&UNK_10f664222,param_2);
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



/* Entry: 10a58bc30; end: 10a58bc37;  */

bool FUN_10a58bc30(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2a) {
    iVar2 = 0xf664222;
    _memcmp(&UNK_10f664222,param_2);
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



/* Entry: 10a58bc38; end: 10a58bce3;  */

void FUN_10a58bc38(undefined8 param_1)

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
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f663e6a;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a58bce4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f663e9f;
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
  FUN_10a5927a4();
  FUN_10a592914(param_1);
  return;
}



/* Entry: 10a58bce4; end: 10a58bdbb;  */

/* WARNING: Removing unreachable block (ram,0x00010a58bd7c) */

undefined1  [16] FUN_10a58bce4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f664222,0x2a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a5926a8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a58bdbc; end: 10a58be1b;  */

void FUN_10a58bdbc(long param_1)

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
  
  if (param_1 + 0x98 != *(long *)(*(long *)(param_1 + 0x60) + 0x8c0) + 0xd8) {
    FUN_10a58e0e0();
  }
  if (*(long *)(param_1 + 0x98) == *(long *)(param_1 + 0xa0)) {
    return;
  }
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



/* Entry: 10a58be1c; end: 10a58bf53;  */

void FUN_10a58be1c(undefined8 *param_1,long param_2,long param_3,long param_4)

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
  plVar4 = (long *)0xc8;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110bf6730;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_DAT_110bf52c8;
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
  plVar4[5] = (long)&PTR_DAT_110bf5360;
  plVar4[10] = (long)&PTR_DAT_110bf53b8;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[0x18] = 0;
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



/* Entry: 10a58bf54; end: 10a58bf73;  */

undefined1  [16] FUN_10a58bf54(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = &UNK_10f66424d;
  return auVar1;
}



/* Entry: 10a58bf74; end: 10a58bfdb;  */

bool FUN_10a58bf74(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x28) {
    iVar2 = 0xf66424d;
    _memcmp(&UNK_10f66424d,param_2);
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



/* Entry: 10a58bfdc; end: 10a58bfe3;  */

bool FUN_10a58bfdc(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x28) {
    iVar2 = 0xf66424d;
    _memcmp(&UNK_10f66424d,param_2);
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



/* Entry: 10a58bfe4; end: 10a58c113;  */

void FUN_10a58bfe4(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0xffffffff00000002;
  puStack_88 = (undefined *)0x0;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  puStack_70 = &UNK_10f663e6a;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  FUN_10a58c114(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f663ea9;
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x200000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a592b0c();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f663eb9;
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a592d28(param_1,&puStack_88,0);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f663ed0;
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a592e48(param_1,&puStack_88,0);
  FUN_10a592f68(param_1);
  return;
}



/* Entry: 10a58c114; end: 10a58c1eb;  */

/* WARNING: Removing unreachable block (ram,0x00010a58c1ac) */

undefined1  [16] FUN_10a58c114(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66424d,0x28);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a592a10(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a58c1ec; end: 10a58c2f3;  */

undefined8 * FUN_10a58c1ec(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
  *param_1 = &PTR_FUN_110bf53d8;
  param_1[2] = &PTR_DAT_110bf5478;
  param_1[7] = &PTR_FUN_110bf54d0;
  param_1[0x13] = &PTR_FUN_110bf54f0;
  param_1[0x17] = 0x400000004;
  if (param_2 != 0) {
    FUN_10a5ae998(param_1[0x14],&PTR_DAT_110bd3150,param_2,param_1 + 0x13);
  }
  return param_1;
}



/* Entry: 10a58c2f4; end: 10a58c34b;  */

void FUN_10a58c2f4(long param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x8c0) + 0x18);
  if (lVar7 != 0) {
    piVar8 = *(int **)(lVar7 + 0xd0);
    if (piVar8 == (int *)0x0) {
      iVar6 = 4;
    }
    else {
      iVar6 = *piVar8;
    }
    iVar2 = *(int *)(param_1 + 0xb8);
    if (iVar6 != iVar2) {
      *(int *)(param_1 + 0xb8) = iVar6;
      *(int *)(param_1 + 0xbc) = iVar2;
      if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
        uStack_48 = *(undefined8 *)(param_1 + 0x70);
        uStack_50 = *(undefined8 *)(param_1 + 0x68);
        if (*(long *)(param_1 + 0x70) != 0) {
          plVar1 = (long *)(*(long *)(param_1 + 0x70) + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
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
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
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
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          plVar1 = plStack_68 + 1;
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
  }
  return;
}



/* Entry: 10a58c34c; end: 10a58c49b;  */

void FUN_10a58c34c(long *param_1,long param_2,undefined8 param_3,long param_4)

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
  *plVar6 = (long)&PTR_FUN_110bf6780;
  plVar1 = plVar6 + 3;
  FUN_10a58c1ec(plVar1,uVar8,lVar7,param_3);
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
    if (*(long *)(plVar6[9] + 8) != -1) goto LAB_10a58c460;
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
LAB_10a58c460:
  *(undefined4 *)((long)plVar6 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  return;
}



/* Entry: 10a58c49c; end: 10a58c4bb;  */

undefined1  [16] FUN_10a58c49c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = &UNK_10f664276;
  return auVar1;
}



/* Entry: 10a58c4bc; end: 10a58c523;  */

bool FUN_10a58c4bc(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x28) {
    iVar2 = 0xf664276;
    _memcmp(&UNK_10f664276,param_2);
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



/* Entry: 10a58c524; end: 10a58c52b;  */

bool FUN_10a58c524(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x28) {
    iVar2 = 0xf664276;
    _memcmp(&UNK_10f664276,param_2);
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



/* Entry: 10a58c52c; end: 10a58c5eb;  */

void FUN_10a58c52c(undefined8 param_1)

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
  puStack_90 = &UNK_10f663e6a;
  uStack_88 = 0;
  puStack_80 = &UNK_10f663e6a;
  uStack_78 = 0;
  uStack_70 = 0x90;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10a58c5ec(param_1,&puStack_a8);
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f663eef;
  puStack_80 = &UNK_10f663e6a;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x90;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a593160();
  FUN_10a5932d0(param_1);
  return;
}



/* Entry: 10a58c5ec; end: 10a58c6c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a58c684) */

undefined1  [16] FUN_10a58c5ec(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f664276,0x28);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a593064(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a58c6c4; end: 10a58c723;  */

void FUN_10a58c6c4(long param_1)

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
  
  if (param_1 + 0x98 != *(long *)(*(long *)(param_1 + 0x60) + 0x8c0) + 0x40) {
    FUN_10a4af818();
  }
  if (*(long *)(param_1 + 0x98) == *(long *)(param_1 + 0xa0)) {
    return;
  }
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



/* Entry: 10a58c724; end: 10a58c85b;  */

void FUN_10a58c724(undefined8 *param_1,long param_2,long param_3,long param_4)

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
  plVar4 = (long *)0xc8;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110bf67d0;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110bf5598;
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
  plVar4[5] = (long)&PTR_DAT_110bf5630;
  plVar4[10] = (long)&PTR_DAT_110bf5688;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[0x18] = 0;
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



/* Entry: 10a58c85c; end: 10a58c85f;  */

undefined8 * FUN_10a58c85c(undefined8 *param_1)

{
  param_1[0x13] = &PTR_DAT_110bf5f70;
  if ((undefined8 *)param_1[0x16] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x16] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x14);
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



/* Entry: 10a58c860; end: 10a58c873;  */

void FUN_10a58c860(void)

{
  func_0x00010a58e35c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58c874; end: 10a58c88f;  */

void FUN_10a58c874(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0xa0);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a58c890; end: 10a58c8a7;  */

void FUN_10a58c890(long param_1)

{
  func_0x00010a58e35c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58c8a8; end: 10a58c8af;  */

undefined8 * FUN_10a58c8a8(undefined8 *param_1)

{
  param_1[0xc] = &PTR_DAT_110bf5f70;
  if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xf] = 0;
  }
  func_0x00010a004e5c(param_1 + 0xd);
  param_1[-7] = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a58c8b0; end: 10a58c8c7;  */

void FUN_10a58c8b0(long param_1)

{
  func_0x00010a58e35c(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58c8c8; end: 10a58c8cf;  */

undefined8 * FUN_10a58c8c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bf5f70;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  param_1[-0x13] = &PTR_DAT_110bf4248;
  param_1[-0x11] = &PTR_DAT_110bf42e0;
  param_1[-0xc] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + -2) == '\x01') {
    FUN_10a688c1c(param_1 + -6);
  }
  if (param_1[-0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x11] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
  return param_1 + -0x13;
}



/* Entry: 10a58c8d0; end: 10a58c8e7;  */

void FUN_10a58c8d0(long param_1)

{
  func_0x00010a58e35c(param_1 + -0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58c8e8; end: 10a58c8eb;  */

undefined8 * FUN_10a58c8e8(undefined8 *param_1)

{
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



/* Entry: 10a58c8ec; end: 10a58c8ff;  */

void FUN_10a58c8ec(void)

{
  FUN_10a58619c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58c900; end: 10a58c90b;  */

void FUN_10a58c900(void)

{
  return;
}



/* Entry: 10a58c90c; end: 10a58c923;  */

void FUN_10a58c90c(long param_1)

{
  FUN_10a58619c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58c924; end: 10a58c92b;  */

undefined8 * FUN_10a58c924(undefined8 *param_1)

{
  param_1[-7] = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a58c92c; end: 10a58c943;  */

void FUN_10a58c92c(long param_1)

{
  FUN_10a58619c(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58c944; end: 10a58c947;  */

undefined8 * FUN_10a58c944(undefined8 *param_1)

{
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



/* Entry: 10a58c948; end: 10a58c95b;  */

void FUN_10a58c948(void)

{
  FUN_10a58619c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58c95c; end: 10a58c963;  */

undefined8 * FUN_10a58c95c(undefined8 *param_1)

{
  param_1[-2] = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a58c964; end: 10a58c97b;  */

void FUN_10a58c964(long param_1)

{
  FUN_10a58619c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58c97c; end: 10a58c983;  */

undefined8 * FUN_10a58c97c(undefined8 *param_1)

{
  param_1[-7] = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a58c984; end: 10a58c99b;  */

void FUN_10a58c984(long param_1)

{
  FUN_10a58619c(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58c99c; end: 10a58c99f;  */

undefined8 * FUN_10a58c99c(undefined8 *param_1)

{
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



/* Entry: 10a58c9a0; end: 10a58c9b3;  */

void FUN_10a58c9a0(void)

{
  FUN_10a58619c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58c9b4; end: 10a58c9bb;  */

undefined8 * FUN_10a58c9b4(undefined8 *param_1)

{
  param_1[-2] = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a58c9bc; end: 10a58c9d3;  */

void FUN_10a58c9bc(long param_1)

{
  FUN_10a58619c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58c9d4; end: 10a58c9db;  */

undefined8 * FUN_10a58c9d4(undefined8 *param_1)

{
  param_1[-7] = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a58c9dc; end: 10a58c9f3;  */

void FUN_10a58c9dc(long param_1)

{
  FUN_10a58619c(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58c9f4; end: 10a58c9f7;  */

undefined8 * FUN_10a58c9f4(undefined8 *param_1)

{
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



/* Entry: 10a58c9f8; end: 10a58ca0b;  */

void FUN_10a58c9f8(void)

{
  FUN_10a58619c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58ca0c; end: 10a58ca13;  */

undefined8 * FUN_10a58ca0c(undefined8 *param_1)

{
  param_1[-2] = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a58ca14; end: 10a58ca2b;  */

void FUN_10a58ca14(long param_1)

{
  FUN_10a58619c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58ca2c; end: 10a58ca33;  */

undefined8 * FUN_10a58ca2c(undefined8 *param_1)

{
  param_1[-7] = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a58ca34; end: 10a58ca4b;  */

void FUN_10a58ca34(long param_1)

{
  FUN_10a58619c(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58ca4c; end: 10a58ca4f;  */

undefined8 * FUN_10a58ca4c(undefined8 *param_1)

{
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



/* Entry: 10a58ca50; end: 10a58ca63;  */

void FUN_10a58ca50(void)

{
  FUN_10a58619c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58ca64; end: 10a58ca6b;  */

undefined8 * FUN_10a58ca64(undefined8 *param_1)

{
  param_1[-2] = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a58ca6c; end: 10a58ca83;  */

void FUN_10a58ca6c(long param_1)

{
  FUN_10a58619c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58ca84; end: 10a58ca8b;  */

undefined8 * FUN_10a58ca84(undefined8 *param_1)

{
  param_1[-7] = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a58ca8c; end: 10a58caa3;  */

void FUN_10a58ca8c(long param_1)

{
  FUN_10a58619c(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58caa4; end: 10a58caa7;  */

undefined8 * FUN_10a58caa4(undefined8 *param_1)

{
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



/* Entry: 10a58caa8; end: 10a58cabb;  */

void FUN_10a58caa8(void)

{
  FUN_10a58619c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58cabc; end: 10a58cac3;  */

undefined8 * FUN_10a58cabc(undefined8 *param_1)

{
  param_1[-2] = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a58cac4; end: 10a58cadb;  */

void FUN_10a58cac4(long param_1)

{
  FUN_10a58619c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58cadc; end: 10a58cae3;  */

undefined8 * FUN_10a58cadc(undefined8 *param_1)

{
  param_1[-7] = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a58cae4; end: 10a58cafb;  */

void FUN_10a58cae4(long param_1)

{
  FUN_10a58619c(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58cafc; end: 10a58caff;  */

undefined8 * FUN_10a58cafc(undefined8 *param_1)

{
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



/* Entry: 10a58cb00; end: 10a58cb13;  */

void FUN_10a58cb00(void)

{
  FUN_10a58619c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58cb14; end: 10a58cb1b;  */

undefined8 * FUN_10a58cb14(undefined8 *param_1)

{
  param_1[-2] = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a58cb1c; end: 10a58cb33;  */

void FUN_10a58cb1c(long param_1)

{
  FUN_10a58619c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58cb34; end: 10a58cb3b;  */

undefined8 * FUN_10a58cb34(undefined8 *param_1)

{
  param_1[-7] = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a58cb3c; end: 10a58cb53;  */

void FUN_10a58cb3c(long param_1)

{
  FUN_10a58619c(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58cb54; end: 10a58cb57;  */

undefined8 * FUN_10a58cb54(undefined8 *param_1)

{
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



/* Entry: 10a58cb58; end: 10a58cb6b;  */

void FUN_10a58cb58(void)

{
  FUN_10a58619c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58cb6c; end: 10a58cb73;  */

undefined8 * FUN_10a58cb6c(undefined8 *param_1)

{
  param_1[-2] = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a58cb74; end: 10a58cb8b;  */

void FUN_10a58cb74(long param_1)

{
  FUN_10a58619c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58cb8c; end: 10a58cb93;  */

undefined8 * FUN_10a58cb8c(undefined8 *param_1)

{
  param_1[-7] = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a58cb94; end: 10a58cbab;  */

void FUN_10a58cb94(long param_1)

{
  FUN_10a58619c(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58cbac; end: 10a58cbaf;  */

undefined8 * FUN_10a58cbac(undefined8 *param_1)

{
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



/* Entry: 10a58cbb0; end: 10a58cbc3;  */

void FUN_10a58cbb0(void)

{
  FUN_10a58619c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a58cbc4; end: 10a58cbcb;  */

undefined8 * FUN_10a58cbc4(undefined8 *param_1)

{
  param_1[-2] = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}


