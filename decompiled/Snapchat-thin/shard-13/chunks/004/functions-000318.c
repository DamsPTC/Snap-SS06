/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a685260; end: 10a6852cf;  */

undefined1  [16] FUN_10a685260(long param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar4 = *(long *)(param_1 + 0x18) - lVar1;
  if ((0x10 < uVar4) && (uVar4 != 0x20)) {
    if (((*(byte *)(lVar1 + 0x18) & 1) == 0) && (*(int *)(lVar1 + 0x14) == 1)) {
      uVar4 = 0x100000000;
      uVar5 = 1;
    }
    else if ((*(byte *)(lVar1 + 0x28) & 1) == 0) {
      bVar3 = *(int *)(lVar1 + 0x24) == 1;
      uVar5 = (ulong)bVar3;
      uVar4 = 0x100000000;
      if (!bVar3) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
      uVar5 = 0;
    }
    auVar6._0_8_ = uVar5 | uVar4;
    auVar6._8_8_ = 4;
    return auVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a6852d0);
  (*pcVar2)();
}



/* Entry: 10a6852d0; end: 10a6854a3;  */

void FUN_10a6852d0(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

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
  *plVar5 = (long)&PTR_FUN_110c0caa0;
  plVar5[100] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(plVar5 + 0x67) = 0x100;
  plVar5[0x66] = 0;
  plVar5[0x65] = 0;
  FUN_10a589324(plVar6,&PTR_PTR_110c08380,uVar8,lVar7,param_3);
  plVar5[3] = (long)&PTR_FUN_110c08190;
  plVar5[5] = (long)&PTR_FUN_110c08248;
  plVar5[10] = (long)&PTR_FUN_110c082a0;
  plVar5[0x16] = (long)&PTR_FUN_110c082c8;
  plVar5[100] = (long)&PTR_FUN_110c08340;
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
    if (*(long *)(lVar7 + 8) != -1) goto LAB_10a685438;
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
LAB_10a685438:
  *(undefined4 *)((long)plVar6 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(plVar6 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  FUN_10a3a754c(plVar6 + 0x18,param_2 + 0xc0);
  *param_1 = plVar6;
  param_1[1] = plVar5;
  return;
}



/* Entry: 10a6854a4; end: 10a685533;  */

undefined1  [16] FUN_10a6854a4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1a;
  auVar1._0_8_ = &UNK_10f66bf51;
  return auVar1;
}



/* Entry: 10a685534; end: 10a685587;  */

void FUN_10a685534(undefined8 param_1)

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
  FUN_10a685588(param_1,&uStack_58);
  FUN_10a69db14();
  return;
}



/* Entry: 10a685588; end: 10a68565f;  */

/* WARNING: Removing unreachable block (ram,0x00010a685620) */

undefined1  [16] FUN_10a685588(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66bf51,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a69da18(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a685660; end: 10a685767;  */

undefined8 * FUN_10a685660(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
  *param_1 = &PTR_FUN_110c083c8;
  param_1[2] = &PTR_DAT_110c08468;
  param_1[7] = &PTR_FUN_110c084c0;
  param_1[0x13] = &PTR_FUN_110c084e0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  if (param_2 != 0) {
    FUN_10a5ae998(param_1[0x14],&PTR_DAT_110bd3150,param_2,param_1 + 0x13);
  }
  return param_1;
}



/* Entry: 10a685768; end: 10a6857b3;  */

void FUN_10a685768(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x8c0) + 0x18);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x198);
    if (*(int *)(param_1 + 0xb8) != 1 && iVar1 == 1) {
      FUN_10a5861f0(param_1);
    }
    *(int *)(param_1 + 0xb8) = iVar1;
  }
  return;
}



/* Entry: 10a6857b4; end: 10a6857cf;  */

void FUN_10a6857b4(long param_1)

{
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  return;
}



/* Entry: 10a6857d0; end: 10a685927;  */

void FUN_10a6857d0(long *param_1,long param_2,undefined8 param_3,long param_4)

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
  *plVar6 = (long)&PTR_FUN_110c0caf0;
  plVar1 = plVar6 + 3;
  FUN_10a685660(plVar1,uVar8,lVar7,param_3);
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
    if (*(long *)(plVar6[9] + 8) != -1) goto LAB_10a6858e4;
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
LAB_10a6858e4:
  *(undefined4 *)((long)plVar6 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(plVar6 + 0x1a) = *(undefined4 *)(param_2 + 0xb8);
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  return;
}



/* Entry: 10a685928; end: 10a6859c3;  */

undefined1  [16] FUN_10a685928(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1b;
  auVar1._0_8_ = &UNK_10f66bf6c;
  return auVar1;
}



/* Entry: 10a6859c4; end: 10a685a17;  */

void FUN_10a6859c4(undefined8 param_1)

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
  FUN_10a685a18(param_1,&uStack_58);
  FUN_10a69dd0c();
  return;
}



/* Entry: 10a685a18; end: 10a685aef;  */

/* WARNING: Removing unreachable block (ram,0x00010a685ab0) */

undefined1  [16] FUN_10a685a18(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66bf6c,0x1b);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a69dc10(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a685af0; end: 10a685bf7;  */

undefined8 * FUN_10a685af0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
  *param_1 = &PTR_FUN_110c08508;
  param_1[2] = &PTR_DAT_110c085a8;
  param_1[7] = &PTR_FUN_110c08600;
  param_1[0x13] = &PTR_FUN_110c08620;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  if (param_2 != 0) {
    FUN_10a5ae998(param_1[0x14],&PTR_DAT_110bd3150,param_2,param_1 + 0x13);
  }
  return param_1;
}



/* Entry: 10a685bf8; end: 10a685c43;  */

void FUN_10a685bf8(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x8c0) + 0x18);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x198);
    if (*(int *)(param_1 + 0xb8) != 0 && iVar1 == 0) {
      FUN_10a5861f0(param_1);
    }
    *(int *)(param_1 + 0xb8) = iVar1;
  }
  return;
}



/* Entry: 10a685c44; end: 10a685c5f;  */

void FUN_10a685c44(long param_1)

{
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  return;
}



/* Entry: 10a685c60; end: 10a685db7;  */

void FUN_10a685c60(long *param_1,long param_2,undefined8 param_3,long param_4)

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
  *plVar6 = (long)&PTR_FUN_110c0cb40;
  plVar1 = plVar6 + 3;
  FUN_10a685af0(plVar1,uVar8,lVar7,param_3);
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
    if (*(long *)(plVar6[9] + 8) != -1) goto LAB_10a685d74;
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
LAB_10a685d74:
  *(undefined4 *)((long)plVar6 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(plVar6 + 0x1a) = *(undefined4 *)(param_2 + 0xb8);
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  return;
}



/* Entry: 10a685db8; end: 10a685e53;  */

undefined1  [16] FUN_10a685db8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1e;
  auVar1._0_8_ = &UNK_10f66bf88;
  return auVar1;
}



/* Entry: 10a685e54; end: 10a685efb;  */

void FUN_10a685e54(undefined8 param_1)

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
  uStack_80 = 0xffffffff00000042;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  puStack_70 = &UNK_10f66b8c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  FUN_10a685efc(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66b8c2;
  uStack_68 = 0xffffffffffffffff;
  puStack_70 = (undefined *)0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0xc1;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a69df04();
  FUN_10a69e0a0(param_1);
  return;
}



/* Entry: 10a685efc; end: 10a685fd3;  */

/* WARNING: Removing unreachable block (ram,0x00010a685f94) */

undefined1  [16] FUN_10a685efc(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66bf88,0x1e);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a69de08(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a685fd4; end: 10a686067;  */

long * FUN_10a685fd4(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110c0f860;
  param_1[7] = (long)&PTR_DAT_110c0f8b8;
  plVar2 = param_1 + 0x13;
  *plVar2 = param_2[3];
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[4];
  FUN_10a58e034(param_1 + 0x1c);
  FUN_10a3a75a8(param_1 + 0x18);
  lVar1 = param_2[1];
  *plVar2 = lVar1;
  *(long *)((long)plVar2 + *(long *)(lVar1 + -0x18)) = param_2[2];
  func_0x00010a004e5c(param_1 + 0x16);
  func_0x00010a004e04(param_1 + 0x14);
  *param_1 = (long)&PTR_DAT_110bf4248;
  param_1[2] = (long)&PTR_DAT_110bf42e0;
  param_1[7] = (long)&PTR_DAT_110bf4338;
  if ((char)param_1[0x11] == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a686068; end: 10a68616b;  */

undefined8 * FUN_10a686068(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  param_1[0x68] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x6b) = 0x100;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  puVar1 = param_1;
  FUN_10a589324(param_1,&PTR_PTR_110c08870,param_2,param_3,param_4);
  FUN_10a3f840c(puVar1 + 0x61);
  *param_1 = &PTR_FUN_110c08650;
  param_1[2] = &PTR_DAT_110c08710;
  param_1[7] = &PTR_DAT_110c08768;
  param_1[0x13] = &PTR_DAT_110c08790;
  param_1[0x68] = &PTR_DAT_110c08830;
  param_1[0x61] = &PTR_DAT_110c087d8;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  if (param_2 != 0) {
    FUN_10a5ae998(param_1[0x62],&PTR_DAT_110bd3150,param_2,param_1 + 0x61);
  }
  return param_1;
}



/* Entry: 10a68616c; end: 10a68624b;  */

undefined8 * FUN_10a68616c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c08650;
  param_1[2] = &PTR_DAT_110c08710;
  param_1[7] = &PTR_DAT_110c08768;
  param_1[0x13] = &PTR_DAT_110c08790;
  param_1[0x68] = &PTR_DAT_110c08830;
  param_1[0x61] = &PTR_DAT_110c087d8;
  func_0x00010a14e208(param_1 + 0x66);
  param_1[0x61] = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[100] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[100] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x62);
  *param_1 = &PTR_DAT_110c0b020;
  param_1[2] = &PTR_FUN_110c0f860;
  param_1[7] = &PTR_DAT_110c0f8b8;
  param_1[0x13] = &PTR_FUN_110c0b0e0;
  param_1[0x68] = &PTR_FUN_110c0b158;
  FUN_10a58e034(param_1 + 0x1c);
  FUN_10a3a75a8(param_1 + 0x18);
  param_1[0x13] = &PTR_DAT_110c0b1a8;
  param_1[0x68] = &PTR_FUN_110c0b220;
  func_0x00010a004e5c(param_1 + 0x16);
  func_0x00010a004e04(param_1 + 0x14);
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



/* Entry: 10a68624c; end: 10a68627f;  */

undefined8 * FUN_10a68624c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c08650;
  param_1[2] = &PTR_DAT_110c08710;
  param_1[7] = &PTR_DAT_110c08768;
  param_1[0x13] = &PTR_DAT_110c08790;
  param_1[0x68] = &PTR_DAT_110c08830;
  param_1[0x61] = &PTR_DAT_110c087d8;
  func_0x00010a14e208(param_1 + 0x66);
  param_1[0x61] = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[100] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[100] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x62);
  *param_1 = &PTR_DAT_110c0b020;
  param_1[2] = &PTR_FUN_110c0f860;
  param_1[7] = &PTR_DAT_110c0f8b8;
  param_1[0x13] = &PTR_FUN_110c0b0e0;
  param_1[0x68] = &PTR_FUN_110c0b158;
  FUN_10a58e034(param_1 + 0x1c);
  FUN_10a3a75a8(param_1 + 0x18);
  param_1[0x13] = &PTR_DAT_110c0b1a8;
  param_1[0x68] = &PTR_FUN_110c0b220;
  func_0x00010a004e5c(param_1 + 0x16);
  func_0x00010a004e04(param_1 + 0x14);
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



/* Entry: 10a686280; end: 10a6862f3;  */

void FUN_10a686280(void)

{
  FUN_10a68616c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6862f4; end: 10a686323;  */

void FUN_10a6862f4(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a68616c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a686324; end: 10a68632b;  */

void FUN_10a686324(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
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
    *(undefined4 *)(puVar1 + -0x50) = 9;
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
    puVar1 = puVar1 + -0x150;
    param_1 = puVar3 + -0x98;
    unaff_x20 = puVar2;
  }
  return;
}



/* Entry: 10a68632c; end: 10a68645b;  */

void FUN_10a68632c(undefined1 *param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar1 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x58) = 0;
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x90);
    *(undefined4 *)((long)register0x00000008 + -0x50) = param_3;
    *(undefined1 *)((long)register0x00000008 + -0x4c) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x44) = 0xffffffff;
    *(undefined1 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x3c) = 0;
    FUN_10a22d054((undefined1 *)((long)register0x00000008 + -0x148),
                  (undefined1 *)((long)register0x00000008 + -0x90));
    *(undefined8 *)((long)register0x00000008 + -0x100) =
         *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)((long)register0x00000008 + -0x108) =
         *(undefined8 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0xfb) =
         *(undefined8 *)((long)register0x00000008 + -0x43);
    puVar2 = puVar1 + 0xc0;
    FUN_10ab17db4((undefined1 *)((long)register0x00000008 + -0xf0),
                  (undefined1 *)((long)register0x00000008 + -0x148),puVar2,
                  *(undefined4 *)(puVar1 + 0xd8));
    if (*(char *)((long)register0x00000008 + -0x98) == '\x01') {
      puVar2 = (undefined1 *)((long)register0x00000008 + -0xf0);
      FUN_10a4c3ba4(param_2 + 0x58);
      if (*(char *)((long)register0x00000008 + -0x98) == '\x01') {
        FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0xf0));
      }
    }
    param_2 = puVar2;
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x148));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x90);
    FUN_10a22d0f8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0x98) == '\x01') {
      FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0xf0));
    }
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x148));
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x90));
    unaff_x30 = FUN_10a68645c;
    puVar2 = unaff_x19;
    __Unwind_Resume();
    param_3 = 9;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x150);
    param_1 = puVar2 + -0x98;
    unaff_x20 = puVar1;
  }
  return;
}



/* Entry: 10a68645c; end: 10a686477;  */

void FUN_10a68645c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar1 = param_1 + -0x98;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x58) = 0;
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x90);
    *(undefined4 *)((long)register0x00000008 + -0x50) = 9;
    *(undefined1 *)((long)register0x00000008 + -0x4c) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x44) = 0xffffffff;
    *(undefined1 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x3c) = 0;
    FUN_10a22d054((undefined1 *)((long)register0x00000008 + -0x148),
                  (undefined1 *)((long)register0x00000008 + -0x90));
    *(undefined8 *)((long)register0x00000008 + -0x100) =
         *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)((long)register0x00000008 + -0x108) =
         *(undefined8 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0xfb) =
         *(undefined8 *)((long)register0x00000008 + -0x43);
    puVar2 = param_1 + 0x28;
    FUN_10ab17db4((undefined1 *)((long)register0x00000008 + -0xf0),
                  (undefined1 *)((long)register0x00000008 + -0x148),puVar2,
                  *(undefined4 *)(param_1 + 0x40));
    if (*(char *)((long)register0x00000008 + -0x98) == '\x01') {
      puVar2 = (undefined1 *)((long)register0x00000008 + -0xf0);
      FUN_10a4c3ba4(param_2 + 0x58);
      if (*(char *)((long)register0x00000008 + -0x98) == '\x01') {
        FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0xf0));
      }
    }
    param_2 = puVar2;
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x148));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x90);
    FUN_10a22d0f8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0x98) == '\x01') {
      FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0xf0));
    }
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x148));
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x90));
    unaff_x30 = FUN_10a68645c;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x150);
    unaff_x20 = puVar1;
  }
  return;
}



/* Entry: 10a686478; end: 10a686547;  */

void FUN_10a686478(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x328) = 1;
  }
  else {
    if (*(uint *)(param_1 + 0x328) < 2) {
      *(undefined4 *)(param_1 + 0x328) = 2;
    }
    else if (*(uint *)(param_1 + 0x328) != 2) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x330);
    if (lVar4 == 0) {
      FUN_10a14b194(auStack_40,1);
      func_0x00010a14ccb4((long *)(param_1 + 0x330),auStack_40);
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
      lVar4 = *(long *)(param_1 + 0x330);
    }
    FUN_10a14ca80(param_2 + 8,lVar4);
    FUN_10a5861f0(param_1);
  }
  return;
}



/* Entry: 10a686548; end: 10a68654b;  */

void FUN_10a686548(void)

{
  return;
}



/* Entry: 10a68654c; end: 10a6866cf;  */

void FUN_10a68654c(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

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
  plVar5 = (long *)0x378;
  __Znwm();
  plVar9 = plVar5 + 1;
  *plVar9 = 0;
  plVar5[2] = 0;
  plVar6 = plVar5 + 3;
  *plVar5 = (long)&PTR_FUN_110c0cb90;
  FUN_10a686068(plVar6,uVar8,lVar7,param_3);
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
    if (*(long *)(lVar7 + 8) != -1) goto LAB_10a686664;
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
LAB_10a686664:
  *(undefined4 *)((long)plVar6 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(plVar6 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  FUN_10a3a754c(plVar6 + 0x18,param_2 + 0xc0);
  *param_1 = plVar6;
  param_1[1] = plVar5;
  return;
}



/* Entry: 10a6866d0; end: 10a68674f;  */

void FUN_10a6866d0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_2 + 0x328) == 2) {
    uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x330) + 0x119c);
    FUN_10a14aae4(param_1);
    puVar1 = (undefined8 *)param_1[1];
    if ((undefined8 *)*param_1 != puVar1) {
      uVar6 = NEON_scvtf(uVar6,4);
      puVar2 = (undefined8 *)*param_1;
      do {
        fVar4 = (float)*puVar2 / (float)uVar6 + -0.5;
        fVar5 = (float)((ulong)*puVar2 >> 0x20) / (float)((ulong)uVar6 >> 0x20) + -0.5;
        puVar3 = puVar2 + 1;
        *puVar2 = CONCAT44(fVar5 + fVar5,fVar4 + fVar4);
        puVar2 = puVar3;
      } while (puVar3 != puVar1);
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a686750; end: 10a68676f;  */

undefined1  [16] FUN_10a686750(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x2a;
  auVar1._0_8_ = &UNK_10f66bfa7;
  return auVar1;
}



/* Entry: 10a686770; end: 10a6867d7;  */

bool FUN_10a686770(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2a) {
    iVar2 = 0xf66bfa7;
    _memcmp(&UNK_10f66bfa7,param_2);
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



/* Entry: 10a6867d8; end: 10a6867df;  */

bool FUN_10a6867d8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x2a) {
    iVar2 = 0xf66bfa7;
    _memcmp(&UNK_10f66bfa7,param_2);
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



/* Entry: 10a6867e0; end: 10a686833;  */

void FUN_10a6867e0(undefined8 param_1)

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
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_1c = 0xffffffff00000124;
  FUN_10a686834(param_1,&uStack_58);
  FUN_10a69e2f0();
  return;
}



/* Entry: 10a686834; end: 10a68690b;  */

/* WARNING: Removing unreachable block (ram,0x00010a6868cc) */

undefined1  [16] FUN_10a686834(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66bfa7,0x2a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a69e1f4(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a68690c; end: 10a686aab;  */

undefined8 *
FUN_10a68690c(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  long *plStack_38;
  
  param_1[8] = param_4;
  param_1[9] = param_5;
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
  param_1[0xc] = param_3;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  FUN_10a03e114(param_1 + 0x13);
  *param_1 = &PTR_FUN_110c088b8;
  param_1[2] = &PTR_DAT_110c08958;
  param_1[7] = &PTR_DAT_110c089b0;
  param_1[0x13] = &PTR_DAT_110c089d0;
  uVar6 = *param_2;
  param_1[0x18] = param_2[1];
  param_1[0x17] = uVar6;
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = *(long *)(*(long *)(param_3 + 0x100) + 0x200);
  if (lVar5 != 0) {
    plStack_38 = (long *)param_1[0x18];
    uStack_40 = param_1[0x17];
    if (param_1[0x18] != 0) {
      plVar1 = (long *)(param_1[0x18] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10ad3b340(lVar5,&uStack_40,&uStack_40);
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
  }
  FUN_10a5ae998(param_1[0x14],&PTR_DAT_110b9fab0,param_3,param_1 + 0x13);
  return param_1;
}



/* Entry: 10a686aac; end: 10a686b17;  */

undefined8 * FUN_10a686aac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c088b8;
  param_1[2] = &PTR_DAT_110c08958;
  param_1[7] = &PTR_DAT_110c089b0;
  param_1[0x13] = &PTR_DAT_110c089d0;
  func_0x00010a69e3ac(param_1 + 0x17);
  param_1[0x13] = &PTR_FUN_110b9fa98;
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



/* Entry: 10a686b18; end: 10a686b33;  */

undefined8 * FUN_10a686b18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c088b8;
  param_1[2] = &PTR_DAT_110c08958;
  param_1[7] = &PTR_DAT_110c089b0;
  param_1[0x13] = &PTR_DAT_110c089d0;
  func_0x00010a69e3ac(param_1 + 0x17);
  param_1[0x13] = &PTR_FUN_110b9fa98;
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



/* Entry: 10a686b34; end: 10a686b8f;  */

void FUN_10a686b34(void)

{
  FUN_10a686aac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a686b90; end: 10a686c3b;  */

void FUN_10a686b90(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x100) + 0x200);
  if (lVar5 != 0) {
    plStack_28 = *(long **)(param_1 + 0xc0);
    uStack_30 = *(undefined8 *)(param_1 + 0xb8);
    if (*(long *)(param_1 + 0xc0) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0xc0) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010ad3b790(lVar5,&uStack_30);
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar2 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a686c3c; end: 10a686c43;  */

void FUN_10a686c3c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + -0x38) + 0x100) + 0x200);
  if (lVar5 != 0) {
    plStack_28 = *(long **)(param_1 + 0x28);
    uStack_30 = *(undefined8 *)(param_1 + 0x20);
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
    func_0x00010ad3b790(lVar5,&uStack_30);
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar2 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a686c44; end: 10a686c7b;  */

void FUN_10a686c44(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0xb8) + 0x10) == '\x01') {
    FUN_10a5861f0();
    *(undefined1 *)(*(long *)(param_1 + 0xb8) + 0x10) = 0;
  }
  return;
}



/* Entry: 10a686c7c; end: 10a686d9b;  */

bool FUN_10a686c7c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
  if ((param_3 == 0x19) &&
     (((*param_2 == 0x657645656e656353 && param_2[1] == 0x6f706d6f432e746e) &&
      param_2[2] == 0x6e657645746e656e) && (char)param_2[3] == 't')) {
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



/* Entry: 10a686d9c; end: 10a686e03;  */

bool FUN_10a686d9c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf66c00d;
    _memcmp(&UNK_10f66c00d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x19) &&
     (((*param_2 == 0x657645656e656353 && param_2[1] == 0x6f706d6f432e746e) &&
      param_2[2] == 0x6e657645746e656e) && (char)param_2[3] == 't')) {
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



/* Entry: 10a686e04; end: 10a686e0b;  */

bool FUN_10a686e04(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x21) {
    iVar2 = 0xf66c00d;
    _memcmp(&UNK_10f66c00d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x19) &&
     (((*param_2 == 0x657645656e656353 && param_2[1] == 0x6f706d6f432e746e) &&
      param_2[2] == 0x6e657645746e656e) && (char)param_2[3] == 't')) {
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



/* Entry: 10a686e0c; end: 10a686eab;  */

void FUN_10a686e0c(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
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
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000002;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  FUN_10a686eac(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66b8cb;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
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
  FUN_10a69e500();
  FUN_10a69e66c(param_1);
  return;
}



/* Entry: 10a686eac; end: 10a686f83;  */

/* WARNING: Removing unreachable block (ram,0x00010a686f44) */

undefined1  [16] FUN_10a686eac(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66bfd2,0x19);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a69e404(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a686f84; end: 10a686fcf;  */

void FUN_10a686f84(undefined8 param_1)

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
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_18 = 0xffffffff;
  FUN_10a686fd0(param_1,&uStack_58);
  FUN_10a69e824();
  return;
}



/* Entry: 10a686fd0; end: 10a6870a7;  */

/* WARNING: Removing unreachable block (ram,0x00010a687068) */

undefined1  [16] FUN_10a686fd0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66bfec,0x20);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a69e728(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6870a8; end: 10a6870f3;  */

void FUN_10a6870a8(undefined8 param_1)

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
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_18 = 0xffffffff;
  FUN_10a6870f4(param_1,&uStack_58);
  FUN_10a69e9dc();
  return;
}



/* Entry: 10a6870f4; end: 10a6871cb;  */

/* WARNING: Removing unreachable block (ram,0x00010a68718c) */

undefined1  [16] FUN_10a6870f4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c00d,0x21);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a69e8e0(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6871cc; end: 10a6871e3;  */

void FUN_10a6871cc(long param_1)

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



/* Entry: 10a6871e4; end: 10a68744b;  */

void FUN_10a6871e4(undefined8 *param_1,long param_2,long param_3,long param_4)

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
  *plVar4 = (long)&PTR_FUN_110c0cbe0;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0dee0;
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
  *(undefined4 *)((long)plVar4 + 0xac) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x2000000000;
  plVar4[5] = (long)&PTR_FUN_110c0df78;
  plVar4[10] = (long)&PTR_FUN_110c0dfd0;
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



/* Entry: 10a68744c; end: 10a68746b;  */

undefined1  [16] FUN_10a68744c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x24;
  auVar1._0_8_ = &UNK_10f66c02f;
  return auVar1;
}



/* Entry: 10a68746c; end: 10a6874d3;  */

bool FUN_10a68746c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x24) {
    iVar2 = 0xf66c02f;
    _memcmp(&UNK_10f66c02f,param_2);
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



/* Entry: 10a6874d4; end: 10a6874db;  */

bool FUN_10a6874d4(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x24) {
    iVar2 = 0xf66c02f;
    _memcmp(&UNK_10f66c02f,param_2);
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



/* Entry: 10a6874dc; end: 10a687537;  */

void FUN_10a6874dc(undefined8 param_1)

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
  puStack_30 = &UNK_10f66b8c1;
  uStack_28 = 0;
  uStack_20 = 0x94;
  uStack_18 = 0xffffffff;
  FUN_10a687538(param_1,&uStack_58);
  FUN_10a69ec14();
  return;
}



/* Entry: 10a687538; end: 10a68760f;  */

/* WARNING: Removing unreachable block (ram,0x00010a6875d0) */

undefined1  [16] FUN_10a687538(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c02f,0x24);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a69eb18(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a687610; end: 10a687717;  */

undefined8 *
FUN_10a687610(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = (long *)0x30;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0;
  *plVar4 = (long)&PTR_FUN_110c0cc80;
  plVar4[4] = 0x200000006;
  *(undefined1 *)(plVar4 + 5) = 0;
  plStack_40 = plVar4 + 3;
  *plStack_40 = (long)&PTR_DAT_110c0ccd0;
  plStack_38 = plVar4;
  FUN_10a68690c(param_1,&plStack_40,param_2,param_3,param_4);
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
  *param_1 = &PTR_FUN_110c089f8;
  param_1[2] = &PTR_FUN_110c08a98;
  param_1[7] = &PTR_FUN_110c08af0;
  param_1[0x13] = &PTR_FUN_110c08b10;
  return param_1;
}



/* Entry: 10a687718; end: 10a687867;  */

void FUN_10a687718(long *param_1,long param_2,undefined8 param_3,long param_4)

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
  plVar6 = (long *)0xe0;
  __Znwm();
  plVar9 = plVar6 + 1;
  *plVar9 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_DAT_110c0cd10;
  plVar1 = plVar6 + 3;
  FUN_10a687610(plVar1,uVar8,lVar7,param_3);
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
    if (*(long *)(plVar6[9] + 8) != -1) goto LAB_10a68782c;
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
LAB_10a68782c:
  *(undefined4 *)((long)plVar6 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  return;
}



/* Entry: 10a687868; end: 10a687887;  */

undefined1  [16] FUN_10a687868(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x24;
  auVar1._0_8_ = &UNK_10f66c054;
  return auVar1;
}



/* Entry: 10a687888; end: 10a6878ef;  */

bool FUN_10a687888(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x24) {
    iVar2 = 0xf66c054;
    _memcmp(&UNK_10f66c054,param_2);
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



/* Entry: 10a6878f0; end: 10a6878f7;  */

bool FUN_10a6878f0(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x24) {
    iVar2 = 0xf66c054;
    _memcmp(&UNK_10f66c054,param_2);
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



/* Entry: 10a6878f8; end: 10a6879df;  */

void FUN_10a6878f8(undefined8 param_1)

{
  undefined *puStack_98;
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
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_5c = 0x124;
  uStack_58 = 0xffffffff;
  FUN_10a6879e0(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b8d8;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000138;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a69ee7c();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66b8e2;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000138;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a69eff4(param_1,&puStack_98);
  FUN_10a69f104(param_1);
  return;
}



/* Entry: 10a6879e0; end: 10a687ab7;  */

/* WARNING: Removing unreachable block (ram,0x00010a687a78) */

undefined1  [16] FUN_10a6879e0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c054,0x24);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a69ed80(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a687ab8; end: 10a687ddb;  */

undefined8 * FUN_10a687ab8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
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
  FUN_10a03e114(param_1 + 0x13);
  *param_1 = &PTR_FUN_110c08b38;
  param_1[2] = &PTR_DAT_110c08bd8;
  param_1[7] = &PTR_DAT_110c08c30;
  param_1[0x13] = &PTR_DAT_110c08c50;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0x90000000d;
  lVar15 = *(long *)(*(long *)(param_2 + 0x100) + 0x200);
  if (lVar15 != 0) {
    lVar18 = 0;
    do {
      uVar16 = *(undefined8 *)(&UNK_10e4d1da0 + lVar18);
      puVar8 = (undefined8 *)0x30;
      __Znwm();
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_FUN_110c0cd60;
      puVar13 = puVar8 + 3;
      *puVar13 = &PTR_DAT_110c0cdb0;
      *(int *)(puVar8 + 4) = (int)uVar16;
      *(int *)((long)puVar8 + 0x24) = (int)((ulong)uVar16 >> 0x20);
      *(undefined1 *)(puVar8 + 5) = 0;
      puVar14 = (undefined8 *)param_1[0x18];
      puStack_70 = puVar13;
      puStack_68 = puVar8;
      if (puVar14 < (undefined8 *)param_1[0x19]) {
        *puVar14 = puVar13;
        puVar14[1] = puVar8;
        puVar14 = puVar14 + 2;
      }
      else {
        lVar11 = param_1[0x17];
        lVar17 = (long)puVar14 - lVar11;
        uVar1 = (lVar17 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          func_0x00010a69bcd4();
          goto LAB_10a687d70;
        }
        uVar10 = (long)param_1[0x19] - lVar11;
        uVar12 = (long)uVar10 >> 3;
        if (uVar12 <= uVar1) {
          uVar12 = uVar1;
        }
        if (0x7fffffffffffffef < uVar10) {
          uVar12 = 0xfffffffffffffff;
        }
        if (uVar12 >> 0x3c != 0) {
          func_0x000109ffded8();
          goto LAB_10a687d70;
        }
        lVar9 = uVar12 << 4;
        __Znwm();
        puVar4 = (undefined8 *)(lVar9 + lVar17);
        *puVar4 = puVar13;
        puVar4[1] = puVar8;
        puVar14 = puVar4 + 2;
        _memcpy(puVar4 + (lVar17 >> 4) * -2,lVar11,lVar17);
        param_1[0x17] = puVar4 + (lVar17 >> 4) * -2;
        param_1[0x18] = puVar14;
        param_1[0x19] = lVar9 + uVar12 * 0x10;
        if (lVar11 != 0) {
          __ZdlPv(lVar11);
        }
      }
      param_1[0x18] = puVar14;
      if ((undefined8 *)param_1[0x17] == puVar14) {
LAB_10a687d70:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a687d74);
        (*pcVar7)();
      }
      plStack_78 = (long *)puVar14[-1];
      uStack_80 = puVar14[-2];
      if (puVar14[-1] != 0) {
        plVar2 = (long *)(puVar14[-1] + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10ad3b340(lVar15,&uStack_80,&uStack_80);
      plVar2 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar3 = plStack_78 + 1;
        do {
          lVar11 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      lVar18 = lVar18 + 8;
    } while (lVar18 != 0x20);
  }
  FUN_10a5ae998(param_1[0x14],&PTR_DAT_110b9fab0,param_2,param_1 + 0x13);
  return param_1;
}



/* Entry: 10a687ddc; end: 10a687e47;  */

undefined8 * FUN_10a687ddc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c08b38;
  param_1[2] = &PTR_DAT_110c08bd8;
  param_1[7] = &PTR_DAT_110c08c30;
  param_1[0x13] = &PTR_DAT_110c08c50;
  FUN_10a69bce8(param_1 + 0x17);
  param_1[0x13] = &PTR_FUN_110b9fa98;
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



/* Entry: 10a687e48; end: 10a687e63;  */

undefined8 * FUN_10a687e48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c08b38;
  param_1[2] = &PTR_DAT_110c08bd8;
  param_1[7] = &PTR_DAT_110c08c30;
  param_1[0x13] = &PTR_DAT_110c08c50;
  FUN_10a69bce8(param_1 + 0x17);
  param_1[0x13] = &PTR_FUN_110b9fa98;
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



/* Entry: 10a687e64; end: 10a687ebf;  */

void FUN_10a687e64(void)

{
  FUN_10a687ddc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a687ec0; end: 10a687f87;  */

void FUN_10a687ec0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_40;
  long *plStack_38;
  
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x100) + 0x200);
  if (lVar7 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0xc0);
    for (puVar8 = *(undefined8 **)(param_1 + 0xb8); puVar8 != puVar3; puVar8 = puVar8 + 2) {
      plStack_38 = (long *)puVar8[1];
      uStack_40 = *puVar8;
      if (puVar8[1] != 0) {
        plVar1 = (long *)(puVar8[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      func_0x00010ad3b790(lVar7,&uStack_40);
      plVar1 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar2 = plStack_38 + 1;
        do {
          lVar6 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
    }
  }
  return;
}



/* Entry: 10a687f88; end: 10a687f8f;  */

void FUN_10a687f88(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_40;
  long *plStack_38;
  
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + -0x38) + 0x100) + 0x200);
  if (lVar7 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    for (puVar8 = *(undefined8 **)(param_1 + 0x20); puVar8 != puVar3; puVar8 = puVar8 + 2) {
      plStack_38 = (long *)puVar8[1];
      uStack_40 = *puVar8;
      if (puVar8[1] != 0) {
        plVar1 = (long *)(puVar8[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      func_0x00010ad3b790(lVar7,&uStack_40);
      plVar1 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar2 = plStack_38 + 1;
        do {
          lVar6 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
    }
  }
  return;
}



/* Entry: 10a687f90; end: 10a687ff3;  */

void FUN_10a687f90(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xc0);
  for (plVar1 = *(long **)(param_1 + 0xb8); plVar1 != plVar2; plVar1 = plVar1 + 2) {
    if (*(char *)(*plVar1 + 0x10) == '\x01') {
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(*plVar1 + 8);
      FUN_10a5861f0(param_1);
      *(undefined1 *)(*plVar1 + 0x10) = 0;
    }
  }
  return;
}



/* Entry: 10a687ff4; end: 10a688143;  */

void FUN_10a687ff4(long *param_1,long param_2,undefined8 param_3,long param_4)

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
  plVar6 = (long *)0xf0;
  __Znwm();
  plVar9 = plVar6 + 1;
  *plVar9 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_DAT_110c0cdf0;
  plVar1 = plVar6 + 3;
  FUN_10a687ab8(plVar1,uVar8,lVar7,param_3);
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
    if (*(long *)(plVar6[9] + 8) != -1) goto LAB_10a688108;
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
LAB_10a688108:
  *(undefined4 *)((long)plVar6 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  return;
}



/* Entry: 10a688144; end: 10a6881df;  */

undefined1  [16] FUN_10a688144(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1f;
  auVar1._0_8_ = &UNK_10f66382a;
  return auVar1;
}



/* Entry: 10a6881e0; end: 10a6884c7;  */

void FUN_10a6881e0(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f66382a,0x1f);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c0b360;
  pppuVar2 = (undefined8 ***)&UNK_10f66b8c1;
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
    ppuStack_b0 = &PTR_DAT_110c0b360;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bf6810;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6884a8;
    FUN_10a054dac(param_1,&DAT_10f3f415b,FUN_10a69f2c8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6884a8;
    FUN_10a054dac(param_1,"cancel",FUN_10a69f43c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6884a8;
    FUN_10a054dac(param_1,&UNK_10f66b8eb,FUN_10a69f4f0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6884a8;
    FUN_10a054dac(param_1,&UNK_10f66b8f8,FUN_10a69f614,1,*(undefined8 *)(param_1 + 0x40));
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f66382a,0x1f);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a6884a8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6884ac);
  (*pcVar6)();
}



/* Entry: 10a6884c8; end: 10a6885d7;  */

undefined8 * FUN_10a6884c8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10a03e114(param_1 + 0x13);
  *param_1 = &PTR_FUN_110c08c78;
  param_1[2] = &PTR_DAT_110c08d18;
  param_1[7] = &PTR_FUN_110c08d70;
  param_1[0x13] = &PTR_FUN_110c08d90;
  param_1[0x17] = 0;
  *(undefined8 *)((long)param_1 + 0xbd) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x19;
  if (param_2 != 0) {
    FUN_10a5ae998(param_1[0x14],&PTR_DAT_110b9fab0,param_2,param_1 + 0x13);
  }
  return param_1;
}



/* Entry: 10a6885d8; end: 10a688617;  */

void FUN_10a6885d8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  float fVar6;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  fVar6 = (float)*(double *)(*(long *)(*(long *)(param_1 + 0x60) + 0x850) + 8);
  *(float *)(param_1 + 0xbc) = fVar6;
  if ((fVar6 - *(float *)(param_1 + 0xb8) < *(float *)(param_1 + 0xc0)) ||
     (*(char *)(param_1 + 0xc4) != '\x01')) {
    return;
  }
  *(undefined1 *)(param_1 + 0xc4) = 0;
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



/* Entry: 10a688618; end: 10a688767;  */

void FUN_10a688618(long *param_1,long param_2,undefined8 param_3,long param_4)

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
  plVar6 = (long *)0xe0;
  __Znwm();
  plVar9 = plVar6 + 1;
  *plVar9 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110c0ce40;
  plVar1 = plVar6 + 3;
  FUN_10a6884c8(plVar1,uVar8,lVar7,param_3);
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
    if (*(long *)(plVar6[9] + 8) != -1) goto LAB_10a68872c;
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
LAB_10a68872c:
  *(undefined4 *)((long)plVar6 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  return;
}



/* Entry: 10a688768; end: 10a6887f3;  */

undefined1  [16] FUN_10a688768(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f66c079;
  return auVar1;
}



/* Entry: 10a6887f4; end: 10a688847;  */

void FUN_10a6887f4(undefined8 param_1)

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
  uStack_20 = 0x94;
  uStack_18 = 0xffffffff;
  FUN_10a688848(param_1,&uStack_58);
  FUN_10a69f848();
  return;
}



/* Entry: 10a688848; end: 10a68891f;  */

/* WARNING: Removing unreachable block (ram,0x00010a6888e0) */

undefined1  [16] FUN_10a688848(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c079,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a69f74c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a688920; end: 10a68898f;  */

bool FUN_10a688920(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  
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



/* Entry: 10a688990; end: 10a6889e7;  */

void FUN_10a688990(undefined8 param_1)

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
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f66b8c1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10a6889e8(param_1,&uStack_58);
  FUN_10a69fa00();
  return;
}



/* Entry: 10a6889e8; end: 10a688abf;  */

/* WARNING: Removing unreachable block (ram,0x00010a688a80) */

undefined1  [16] FUN_10a6889e8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c08b,0x10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a69f904(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a688ac0; end: 10a688b3f;  */

undefined8 * FUN_10a688ac0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar5 = puVar4 + 3;
  *puVar4 = &PTR_DAT_110b174d8;
  func_0x000109887f70(puVar5,param_2);
  *param_1 = puVar5;
  param_1[1] = puVar4;
  lVar6 = *(long *)(param_3 + 0x20);
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  param_1[3] = *(undefined8 *)(param_3 + 0x20);
  param_1[2] = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 0x10);
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



/* Entry: 10a688b40; end: 10a688c1b;  */

void FUN_10a688b40(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  
  ppuVar4 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  puVar6 = *ppuVar4;
  if (puVar6 != (undefined *)0x0) {
    lVar7 = *(long *)(puVar6 + 0x870);
    if (((*(byte *)(*(long *)(puVar6 + 0xa20) + 0x1c) >> 5 & 1) == 0) &&
       (*(int *)(*(long *)(puVar6 + 0xa20) + 0x18) < 0xe0)) {
      return;
    }
    if (*(long *)(lVar7 + 0x198) != *(long *)(lVar7 + 0x1a0)) {
      return;
    }
    if (*(int *)(lVar7 + 0x1f0) < 0x32) {
      return;
    }
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0))
  {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a688c1c; end: 10a688d3f;  */

undefined1  [16] FUN_10a688c1c(undefined8 *param_1,code **param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar4 == (undefined *)0x0) && (plVar5 = (long *)param_1[3], plVar5 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)) {
    if (param_1[2] != 0) {
      uVar6 = *(undefined8 *)(param_1[2] + 0x870);
      uStack_60 = param_1[1];
      uStack_68 = *param_1;
      *param_1 = 0;
      param_1[1] = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      param_2 = &pcStack_78;
      FUN_10a4634ec(uVar6);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = param_1;
    return auVar8;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar9._8_8_ = 0x18;
  auVar9._0_8_ = &UNK_10f66c09c;
  return auVar9;
}



/* Entry: 10a688d40; end: 10a688dc3;  */

undefined1  [16] FUN_10a688d40(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x18;
  auVar1._0_8_ = &UNK_10f66c09c;
  return auVar1;
}



/* Entry: 10a688dc4; end: 10a688ea3;  */

void FUN_10a688dc4(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
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
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0xffffffff;
  FUN_10a688ea4(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66b904;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
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
  FUN_10a69fc08();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f66b90c;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
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
  FUN_10a69fe6c(param_1,&puStack_88,0);
  FUN_10a69ff80(param_1);
  return;
}



/* Entry: 10a688ea4; end: 10a688f7b;  */

/* WARNING: Removing unreachable block (ram,0x00010a688f3c) */

undefined1  [16] FUN_10a688ea4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c09c,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a69fae4(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a688f7c; end: 10a68905b;  */

undefined8 * FUN_10a688f7c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puStack_38;
  
  param_1[8] = param_3;
  param_1[9] = param_4;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[2] = &PTR_DAT_110c08e50;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xc] = param_2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_110c08db8;
  param_1[7] = &PTR_DAT_110c08ea8;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0x800000032;
  puStack_38 = param_1;
  FUN_10aa07af4(*(undefined8 *)(param_2 + 0xa38),&puStack_38,&puStack_38);
  return param_1;
}



/* Entry: 10a68905c; end: 10a6890d7;  */

undefined8 * FUN_10a68905c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c08db8;
  param_1[2] = &PTR_DAT_110c08e50;
  param_1[7] = &PTR_DAT_110c08ea8;
  puStack_28 = param_1;
  func_0x00010aa07c00(*(undefined8 *)(param_1[0xc] + 0xa38),&puStack_28);
  if (*(char *)((long)param_1 + 199) < '\0') {
    __ZdlPv(param_1[0x16]);
  }
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
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



/* Entry: 10a6890d8; end: 10a6890eb;  */

undefined8 * FUN_10a6890d8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c08db8;
  param_1[2] = &PTR_DAT_110c08e50;
  param_1[7] = &PTR_DAT_110c08ea8;
  puStack_28 = param_1;
  func_0x00010aa07c00(*(undefined8 *)(param_1[0xc] + 0xa38),&puStack_28);
  if (*(char *)((long)param_1 + 199) < '\0') {
    __ZdlPv(param_1[0x16]);
  }
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
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



/* Entry: 10a6890ec; end: 10a68912f;  */

void FUN_10a6890ec(void)

{
  FUN_10a68905c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a689130; end: 10a68915f;  */

void FUN_10a689130(long param_1)

{
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_10a5861f0();
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}



/* Entry: 10a689160; end: 10a6892af;  */

void FUN_10a689160(long *param_1,long param_2,undefined8 param_3,long param_4)

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
  plVar6 = (long *)0xe8;
  __Znwm();
  plVar9 = plVar6 + 1;
  *plVar9 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110c0cea8;
  plVar1 = plVar6 + 3;
  FUN_10a688f7c(plVar1,uVar8,lVar7,param_3);
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
    if (*(long *)(plVar6[9] + 8) != -1) goto LAB_10a689274;
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
LAB_10a689274:
  *(undefined4 *)((long)plVar6 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  return;
}



/* Entry: 10a6892b0; end: 10a68933f;  */

undefined1  [16] FUN_10a6892b0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10f66c0b5;
  return auVar1;
}



/* Entry: 10a689340; end: 10a689393;  */

void FUN_10a689340(undefined8 param_1)

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
  FUN_10a689394(param_1,&uStack_58);
  FUN_10a6a0178();
  return;
}


