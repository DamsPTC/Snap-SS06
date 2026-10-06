/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00651d50; end: 00651dff;  */

long FUN_00651d50(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  plVar5 = *(long **)(param_1 + 0x18);
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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 00651e00; end: 00651e23;  */

void FUN_00651e00(void)

{
  uRam0000000000b6c760 = 0;
  uRam0000000000b6c768 = 0;
                    /* WARNING: Could not recover jumptable at 0x0077a0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_00999f50)(FUN_0065039c,0xb6c760,0);
  return;
}



/* Entry: 00651e24; end: 00651ebb;  */

undefined8 * FUN_00651e24(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  *param_1 = &PTR_DAT_00a0d398;
  puVar1 = param_1;
  func_0x006ea4c0();
  param_1[4] = 0;
  param_1[1] = puVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar2 = param_2[1];
  if (uVar2 != 0) {
    if (0xf < uVar2) {
      uVar2 = 0x10;
    }
    _memmove(param_1 + 2,*param_2,uVar2);
  }
  uVar2 = param_3[1];
  if (uVar2 != 0) {
    if (0xb < uVar2) {
      uVar2 = 0xc;
    }
    _memmove(param_1 + 4,*param_3,uVar2);
  }
  return param_1;
}



/* Entry: 00651ebc; end: 00651ec7;  */

void FUN_00651ebc(undefined1 *param_1,undefined1 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 *extraout_x8;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined1 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  do {
    uVar7 = param_4;
    puVar5 = param_3;
    puVar3 = param_2;
    *(undefined8 *)(puVar1 + -0x50) = unaff_x28;
    *(undefined8 *)(puVar1 + -0x48) = unaff_x27;
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 **)(puVar1 + -0x28) = unaff_x21;
    *(ulong *)(puVar1 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    puVar2 = puVar1 + -0x2e0;
    *(undefined8 *)(puVar1 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    puVar6 = *(undefined8 **)(puVar3 + 8);
    unaff_x19 = puVar1 + -0x2b0;
    FUN_006e987c(unaff_x19,puVar6,puVar3 + 0x10,0x10,*(undefined1 *)((long)puVar6 + 3),0);
    if ((int)unaff_x19 == 0) {
      FUN_00652100();
LAB_00651fa8:
      *param_1 = 0;
      param_1[0x18] = 0;
    }
    else {
      puVar6 = (undefined8 *)(uVar7 - *(byte *)(*(long *)(puVar3 + 8) + 2));
      if (uVar7 < *(byte *)(*(long *)(puVar3 + 8) + 2)) goto LAB_00651fa8;
      puVar1[-0x2d0] = 0;
      FUN_00652054(puVar1 + -0x2c8,puVar6,puVar1 + -0x2d0);
      puVar6 = *(undefined8 **)(puVar1 + -0x2c8);
      *(undefined8 *)(puVar1 + -0x2e0) = 0;
      *(undefined8 *)(puVar1 + -0x2d8) = 0;
      puVar4 = puVar1 + -0x2b0;
      FUN_006e9af4(puVar4,puVar6,puVar1 + -0x2d0,*(long *)(puVar1 + -0x2b8) - (long)puVar6,
                   puVar3 + 0x20,0xc,puVar5,uVar7);
      if ((int)puVar4 == 0) {
        FUN_00652100();
        *param_1 = 0;
        param_1[0x18] = 0;
      }
      else {
        if (*(long *)(puVar1 + -0x2b0) != 0) {
          (**(code **)(*(long *)(puVar1 + -0x2b0) + 0x18))(puVar1 + -0x2b0);
          *(undefined8 *)(puVar1 + -0x2b0) = 0;
        }
        puVar6 = (undefined8 *)(puVar1 + -0x2c8);
        func_0x004bdf28(param_1);
      }
      unaff_x19 = puVar1 + -0x2c8;
      FUN_0040d974();
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar1 + -0x58)) {
      return;
    }
    ___stack_chk_fail();
    FUN_0040d974(puVar1 + -0x2c8);
    unaff_x30 = FUN_0065201c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    puVar1 = puVar1 + -0x2e0;
    param_3 = (undefined8 *)*puVar6;
    param_4 = puVar6[1];
    param_1 = extraout_x8;
    unaff_x20 = uVar7;
    unaff_x21 = puVar5;
    unaff_x22 = puVar3;
    unaff_x23 = 0;
    unaff_x24 = 0;
    if (-1 < (char)*(byte *)((long)puVar6 + 0x17)) {
      puVar1 = puVar2;
      param_3 = puVar6;
      param_4 = (ulong)*(byte *)((long)puVar6 + 0x17);
    }
  } while( true );
}



/* Entry: 00651ec8; end: 0065201b;  */

void FUN_00651ec8(undefined1 *param_1,undefined1 *param_2,undefined8 *param_3,ulong param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *extraout_x8;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined1 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    uVar7 = param_6;
    uVar6 = param_5;
    uVar5 = param_4;
    puVar3 = param_3;
    puVar1 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    puVar4 = *(undefined8 **)(puVar1 + 8);
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x2b0);
    FUN_006e987c(unaff_x19,puVar4,puVar1 + 0x10,0x10,*(undefined1 *)((long)puVar4 + 3),0);
    if ((int)unaff_x19 == 0) {
      FUN_00652100();
LAB_00651fa8:
      *param_1 = 0;
      param_1[0x18] = 0;
    }
    else {
      puVar4 = (undefined8 *)(uVar5 - *(byte *)(*(long *)(puVar1 + 8) + 2));
      if (uVar5 < *(byte *)(*(long *)(puVar1 + 8) + 2)) goto LAB_00651fa8;
      *(undefined1 *)((long)register0x00000008 + -0x2d0) = 0;
      FUN_00652054((undefined1 *)((long)register0x00000008 + -0x2c8),puVar4,
                   (undefined1 *)((long)register0x00000008 + -0x2d0));
      puVar4 = *(undefined8 **)((long)register0x00000008 + -0x2c8);
      *(undefined8 *)((long)register0x00000008 + -0x2e0) = uVar6;
      *(undefined8 *)((long)register0x00000008 + -0x2d8) = uVar7;
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x2b0);
      FUN_006e9af4(puVar2,puVar4,(undefined1 *)((long)register0x00000008 + -0x2d0),
                   *(long *)((long)register0x00000008 + -0x2b8) - (long)puVar4,puVar1 + 0x20,0xc,
                   puVar3,uVar5);
      if ((int)puVar2 == 0) {
        FUN_00652100();
        *param_1 = 0;
        param_1[0x18] = 0;
      }
      else {
        if (*(long *)((long)register0x00000008 + -0x2b0) != 0) {
          (**(code **)(*(long *)((long)register0x00000008 + -0x2b0) + 0x18))
                    ((undefined1 *)((long)register0x00000008 + -0x2b0));
          *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0;
        }
        puVar4 = (undefined8 *)((long)register0x00000008 + -0x2c8);
        func_0x004bdf28(param_1);
      }
      unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x2c8);
      FUN_0040d974();
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x58)) {
      return;
    }
    ___stack_chk_fail();
    FUN_0040d974((undefined1 *)((long)register0x00000008 + -0x2c8));
    unaff_x30 = FUN_0065201c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    param_4 = puVar4[1];
    param_3 = (undefined8 *)*puVar4;
    if (-1 < (char)*(byte *)((long)puVar4 + 0x17)) {
      param_4 = (ulong)*(byte *)((long)puVar4 + 0x17);
      param_3 = puVar4;
    }
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2e0);
    param_5 = 0;
    param_6 = 0;
    param_1 = extraout_x8;
    unaff_x20 = uVar5;
    unaff_x21 = puVar3;
    unaff_x22 = puVar1;
    unaff_x23 = uVar6;
    unaff_x24 = uVar7;
  } while( true );
}



/* Entry: 0065201c; end: 00652053;  */

void FUN_0065201c(undefined1 *param_1,undefined1 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *extraout_x8;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined1 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar4 = param_2;
    uVar1 = param_3[1];
    puVar2 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar2 = param_3;
    }
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x24 = 0;
    unaff_x23 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    param_3 = *(undefined8 **)(puVar4 + 8);
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x2b0);
    FUN_006e987c(unaff_x19,param_3,puVar4 + 0x10,0x10,*(undefined1 *)((long)param_3 + 3),0);
    if ((int)unaff_x19 == 0) {
      FUN_00652100();
LAB_00651fa8:
      *param_1 = 0;
      param_1[0x18] = 0;
    }
    else {
      param_3 = (undefined8 *)(uVar1 - *(byte *)(*(long *)(puVar4 + 8) + 2));
      if (uVar1 < *(byte *)(*(long *)(puVar4 + 8) + 2)) goto LAB_00651fa8;
      *(undefined1 *)((long)register0x00000008 + -0x2d0) = 0;
      FUN_00652054((undefined1 *)((long)register0x00000008 + -0x2c8),param_3,
                   (undefined1 *)((long)register0x00000008 + -0x2d0));
      param_3 = *(undefined8 **)((long)register0x00000008 + -0x2c8);
      *(undefined8 *)((long)register0x00000008 + -0x2e0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2d8) = 0;
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x2b0);
      FUN_006e9af4(puVar3,param_3,(undefined1 *)((long)register0x00000008 + -0x2d0),
                   *(long *)((long)register0x00000008 + -0x2b8) - (long)param_3,puVar4 + 0x20,0xc,
                   puVar2,uVar1);
      if ((int)puVar3 == 0) {
        FUN_00652100();
        *param_1 = 0;
        param_1[0x18] = 0;
      }
      else {
        if (*(long *)((long)register0x00000008 + -0x2b0) != 0) {
          (**(code **)(*(long *)((long)register0x00000008 + -0x2b0) + 0x18))
                    ((undefined1 *)((long)register0x00000008 + -0x2b0));
          *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0;
        }
        param_3 = (undefined8 *)((long)register0x00000008 + -0x2c8);
        func_0x004bdf28(param_1);
      }
      unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x2c8);
      FUN_0040d974();
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x58)) {
      return;
    }
    ___stack_chk_fail();
    FUN_0040d974((undefined1 *)((long)register0x00000008 + -0x2c8));
    unaff_x30 = FUN_0065201c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2e0);
    param_1 = extraout_x8;
    unaff_x20 = uVar1;
    unaff_x21 = puVar2;
    unaff_x22 = puVar4;
  } while( true );
}



/* Entry: 00652054; end: 006520db;  */

undefined8 * FUN_00652054(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_38 = 0;
  puStack_40 = param_1;
  if (param_2 != 0) {
    FUN_0040d8a0(param_1);
    FUN_006520dc(param_1,param_2,param_3);
  }
  uStack_38 = 1;
  func_0x0040d92c(&puStack_40);
  return param_1;
}



/* Entry: 006520dc; end: 006520ff;  */

void FUN_006520dc(long param_1,long param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 8) + param_2;
  puVar2 = *(undefined1 **)(param_1 + 8);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 00652100; end: 00652117;  */

void FUN_00652100(int param_1)

{
  do {
    func_0x006de46c();
  } while (param_1 != 0);
  return;
}



/* Entry: 00652118; end: 00652157;  */

void FUN_00652118(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00652158(param_2,param_3,param_1);
  return;
}



/* Entry: 00652158; end: 0065229b;  */

undefined8 FUN_00652158(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  undefined8 uVar3;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&uStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_50,param_1,param_2);
  FUN_006523f8();
  uVar3 = extraout_x11;
  puVar2 = (undefined8 *)extraout_x10;
  if (in_NG == in_OV) {
    uVar3 = extraout_x8;
    puVar2 = &uStack_50;
  }
  func_0x0065240c(uVar3,puVar2);
  FUN_006523f8();
  uVar3 = extraout_x11_00;
  if (in_NG == in_OV) {
    uVar3 = extraout_x8_00;
  }
  func_0x0065241c(uVar3);
  FUN_006523f8();
  uVar3 = extraout_x11_01;
  puVar2 = (undefined8 *)extraout_x10_00;
  if (in_NG == in_OV) {
    uVar3 = extraout_x8_01;
    puVar2 = &uStack_50;
  }
  func_0x0065240c(uVar3,puVar2);
  FUN_006523f8();
  uVar3 = extraout_x11_02;
  if (in_NG == in_OV) {
    uVar3 = extraout_x8_02;
  }
  func_0x0065241c(uVar3);
  uVar3 = 0;
  uVar1 = uStack_48;
  if (-1 < (long)uStack_40) {
    uVar1 = uStack_40 >> 0x38;
  }
  if ((uVar1 != 0) && ((uVar1 & 3) == 0)) {
    FUN_00652308(param_3,(uVar1 >> 1) + (uVar1 >> 2));
    uVar3 = *param_3;
    FUN_006523f8();
    FUN_006d1648();
    if ((int)uVar3 == 0) {
      uStack_38 = 0;
    }
    FUN_00652308(param_3,uStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
  return uVar3;
}



/* Entry: 0065229c; end: 00652307;  */

char * FUN_0065229c(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  _memchr(param_1,(long)*param_3,(long)param_2 - (long)param_1);
  pcVar1 = param_1;
  if (param_1 == (char *)0x0 || param_1 == param_2) {
    return param_2;
  }
  do {
    do {
      pcVar1 = pcVar1 + 1;
      if (pcVar1 == param_2) {
        return param_1;
      }
    } while (*pcVar1 == *param_3);
    *param_1 = *pcVar1;
    param_1 = param_1 + 1;
  } while( true );
}



/* Entry: 00652308; end: 006523f7;  */

void FUN_00652308(long *param_1,ulong param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  uVar7 = param_1[1] - *param_1;
  uVar8 = param_2 - uVar7;
  if (param_2 < uVar7 || uVar8 == 0) {
    if (param_2 < uVar7) {
      param_1[1] = *param_1 + param_2;
    }
  }
  else {
    plVar6 = param_1 + 2;
    if (uVar8 <= (ulong)(*plVar6 - param_1[1])) {
      puVar1 = (undefined1 *)param_1[1] + uVar8;
      puVar4 = (undefined1 *)param_1[1];
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      param_1[1] = (long)puVar1;
      return;
    }
    plVar5 = param_1;
    FUN_004bad58();
    lVar2 = *param_1;
    lVar3 = param_1[1];
    plStack_58 = (long *)0x0;
    plStack_38 = plVar6;
    if (plVar5 != (long *)0x0) {
      FUN_0040d90c();
      plStack_58 = plVar6;
    }
    puStack_50 = (undefined1 *)((long)plStack_58 + (lVar3 - lVar2));
    lStack_40 = (long)plStack_58 + (long)plVar5;
    puStack_48 = puStack_50 + uVar8;
    puVar1 = puStack_50;
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    FUN_004bad94(param_1,&plStack_58);
    FUN_004bae18(&plStack_58);
  }
  return;
}



/* Entry: 006523f8; end: 00652427;  */

void FUN_006523f8(void)

{
  return;
}



/* Entry: 00652428; end: 00652483;  */

undefined8 * FUN_00652428(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_DAT_00a0d3c8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_00698fa0(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  return param_1;
}



/* Entry: 00652484; end: 0065249f;  */

void FUN_00652484(void)

{
  Hint_Prefetch(0xb24c78,0,0,0);
  Hint_Prefetch(PTR_DAT_00b24c78,0,0,0);
  return;
}



/* Entry: 006524a0; end: 006524b3;  */

void FUN_006524a0(void)

{
  FUN_00689420();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 006524b4; end: 006524bb;  */

void FUN_006524b4(undefined8 param_1,dword *param_2)

{
  dword *pdVar1;
  
  if (param_2 == (dword *)0x0) {
    pdVar1 = &MACH_HEADER.flags;
    __Znwm();
  }
  else {
    pdVar1 = param_2;
    func_0x005510c4(param_2,0x18);
  }
  pdVar1[4] = 0;
  *(undefined ***)pdVar1 = &PTR_DAT_00a0d3c8;
  *(dword **)(pdVar1 + 2) = param_2;
  return;
}



/* Entry: 006524bc; end: 00652503;  */

void FUN_006524bc(dword *param_1)

{
  dword *pdVar1;
  
  if (param_1 == (dword *)0x0) {
    pdVar1 = &MACH_HEADER.flags;
    __Znwm();
  }
  else {
    pdVar1 = param_1;
    func_0x005510c4(param_1,0x18);
  }
  pdVar1[4] = 0;
  *(undefined ***)pdVar1 = &PTR_DAT_00a0d3c8;
  *(dword **)(pdVar1 + 2) = param_1;
  return;
}



/* Entry: 00652504; end: 0065250f;  */

void FUN_00652504(void)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  long unaff_x20;
  long unaff_x21;
  ulong uVar18;
  long lVar19;
  byte bVar20;
  uint6 uVar21;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  undefined8 uVar22;
  byte bVar28;
  undefined1 auStack_90 [16];
  
  puVar4 = &DAT_00b24c20;
  if ((DAT_00b24c20 & 1) != 0) {
    return;
  }
  DAT_00b24c20 = 1;
  func_0x0048afa0();
  func_0x00693448();
  for (; unaff_x21 != unaff_x20; unaff_x20 = unaff_x20 + 8) {
    if (*(long *)(lRam0000000000b24c40 + unaff_x20) != 0) {
      FUN_0068f7b8();
    }
  }
  FUN_006559e8(PTR_DAT_00b24c28,uRam0000000000b24c24);
  puVar3 = puVar4;
  FUN_006994c8();
  puVar17 = (ulong *)(puVar3 + 8);
  Hint_Prefetch(*puVar17,0,2,0);
  FUN_0069a050(*puVar17);
  lVar19 = 0;
  uVar15 = *puVar17;
  uVar16 = *(ulong *)(puVar3 + 0x18);
  uVar12 = uVar15 >> 0xc ^ (ulong)puVar4 >> 7;
  bVar2 = (byte)puVar4;
  uVar21 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
           0x7f7f7f7f7f7f;
  do {
    uVar12 = uVar12 & uVar16;
    uVar22 = *(undefined8 *)(uVar15 + uVar12);
    cVar23 = (char)((ulong)uVar22 >> 8);
    cVar24 = (char)((ulong)uVar22 >> 0x10);
    cVar25 = (char)((ulong)uVar22 >> 0x18);
    cVar26 = (char)((ulong)uVar22 >> 0x20);
    cVar27 = (char)((ulong)uVar22 >> 0x28);
    bVar20 = (byte)((ulong)uVar22 >> 0x30);
    bVar28 = (byte)((ulong)uVar22 >> 0x38);
    for (uVar14 = CONCAT17(-(bVar28 == (bVar2 & 0x7f)),
                           CONCAT16(-(bVar20 == (bVar2 & 0x7f)),
                                    CONCAT15(-(cVar27 == (char)(uVar21 >> 0x28)),
                                             CONCAT14(-(cVar26 == (char)(uVar21 >> 0x20)),
                                                      CONCAT13(-(cVar25 == (char)(uVar21 >> 0x18)),
                                                               CONCAT12(-(cVar24 ==
                                                                         (char)(uVar21 >> 0x10)),
                                                                        CONCAT11(-(cVar23 ==
                                                                                  (char)(uVar21 >> 8
                                                                                        )),
                                                                                 -((char)uVar22 ==
                                                                                  (char)uVar21))))))
                                   )) & 0x8080808080808080; uVar14 != 0;
        uVar14 = uVar14 - 1 & uVar14) {
      uVar5 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      puVar13 = *(undefined **)
                 (*(long *)(puVar3 + 0x10) +
                 (uVar12 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar16) * 8);
      if (puVar13 == &DAT_00b24c20) {
LAB_006998b0:
        func_0x0069b108();
        FUN_0077670c();
        puVar7 = auStack_90;
        FUN_005512e8(puVar7,&UNK_00914bd4);
        ppuVar10 = &PTR_DAT_00b24c30;
        FUN_0055130c();
        func_0x0069af60();
        puVar8 = puVar7;
        ppuVar11 = ppuVar10;
        FUN_006994c8();
        puVar9 = puVar8 + 0x68;
        FUN_005685a0();
        func_0x0069b19c();
        if (((ulong)ppuVar11 & 1) != 0) {
          plVar1 = (long *)(*(long *)(puVar8 + 0x78) + (long)puVar9 * 0x10);
          *plVar1 = (long)puVar7;
          plVar1[1] = (long)ppuVar10;
        }
        return;
      }
      uVar18 = *(ulong *)(puVar13 + 0x10);
      uVar5 = uVar18;
      _strlen(uVar18);
      puVar13 = PTR_DAT_00b24c30;
      puVar6 = PTR_DAT_00b24c30;
      _strlen(PTR_DAT_00b24c30);
      func_0x00465a14(uVar18,uVar5,puVar13,puVar6);
      if ((uVar18 & 1) != 0) goto LAB_006998b0;
    }
    bVar20 = NEON_umaxv(CONCAT17(-(bVar28 == 0x80),
                                 CONCAT16(-(bVar20 == 0x80),
                                          CONCAT15(-(cVar27 == -0x80),
                                                   CONCAT14(-(cVar26 == -0x80),
                                                            CONCAT13(-(cVar25 == -0x80),
                                                                     CONCAT12(-(cVar24 == -0x80),
                                                                              CONCAT11(-(cVar23 ==
                                                                                        -0x80),-((
                                                  char)uVar22 == -0x80)))))))),1);
    if ((bVar20 & 1) != 0) {
      FUN_0069a080(puVar17,puVar4);
      *(byte **)(*(long *)(puVar3 + 0x10) + (long)puVar17 * 8) = &DAT_00b24c20;
      return;
    }
    lVar19 = lVar19 + 8;
    uVar12 = lVar19 + uVar12;
  } while( true );
}



/* Entry: 00652510; end: 00652537;  */

long FUN_00652510(long param_1)

{
  FUN_00652538(param_1 + 8);
  return param_1;
}



/* Entry: 00652538; end: 0065254b;  */

long FUN_00652538(long param_1)

{
  FUN_00652538(param_1 + 8);
  return param_1;
}



/* Entry: 0065254c; end: 0065255f;  */

void FUN_0065254c(void)

{
  FUN_00652510();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00652560; end: 006525c3;  */

void FUN_00652560(void)

{
  Hint_Prefetch(0xb24d90,0,0,0);
  Hint_Prefetch(PTR_DAT_00b24d90,0,0,0);
  return;
}



/* Entry: 006525c4; end: 00652633;  */

long * FUN_006525c4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    param_2 = param_3;
    FUN_004363bc(param_3);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    param_2 = param_3;
    FUN_0048c628(param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  plVar1 = (long *)(uVar9 + 8);
  lVar12 = 0;
  plVar4 = plVar1;
  do {
    lVar10 = *plVar1;
    if ((int)((ulong)(*(long *)(uVar9 + 0x10) - lVar10) >> 4) <= lVar12) {
      return param_2;
    }
    piVar2 = (int *)(lVar10 + lVar12 * 0x10);
    func_0x006aad90();
    plVar7 = plVar4;
    param_2 = plVar4;
    switch(piVar2[1]) {
    case 0:
      plVar7 = *(long **)(piVar2 + 2);
      uVar5 = (ulong)(uint)(*piVar2 << 3);
      func_0x006aac48(uVar5);
      func_0x00487cf0(plVar7,uVar5);
      param_2 = plVar7;
      break;
    case 1:
      iVar3 = piVar2[2];
      plVar7 = (long *)(ulong)(*piVar2 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar7 = iVar3;
      param_2 = (long *)((long)plVar7 + 4);
      break;
    case 2:
      lVar10 = *(long *)(piVar2 + 2);
      plVar7 = (long *)(ulong)(*piVar2 << 3 | 1);
      func_0x006aac48();
      *plVar7 = lVar10;
      param_2 = plVar7 + 1;
      break;
    case 3:
      iVar3 = *piVar2;
      lVar10 = *(long *)(piVar2 + 2);
      lVar11 = (long)*(char *)(lVar10 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar10 + 8), lVar11 < 0x80)) {
        lVar13 = *param_3;
        uVar8 = iVar3 << 3;
        plVar7 = (long *)(ulong)uVar8;
        func_0x00487c84();
        if (lVar11 <= lVar13 + ~((long)plVar4 + (long)(int)plVar7) + 0x10) {
          lVar10 = (long)plVar4 + 2;
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *(byte *)(lVar10 + -2) = (byte)uVar8 | 0x80;
            lVar10 = lVar10 + 1;
          }
          *(byte *)(lVar10 + -2) = (byte)uVar8;
          *(char *)(lVar10 + -1) = (char)lVar11;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar10 + lVar11);
          break;
        }
      }
      plVar7 = param_3;
      func_0x0054f030(param_3,iVar3,lVar10,plVar4);
      param_2 = plVar7;
      break;
    case 4:
      uVar5 = (ulong)(*piVar2 << 3 | 3);
      func_0x006aac48(uVar5);
      uVar6 = *(undefined8 *)(piVar2 + 2);
      FUN_006a5a40(uVar6,uVar5,param_3);
      func_0x006aad84();
      plVar7 = (long *)(ulong)(*piVar2 << 3 | 4);
      func_0x00487cbc(plVar7,uVar6);
      param_2 = plVar7;
    }
    lVar12 = lVar12 + 1;
    plVar4 = plVar7;
  } while( true );
}



/* Entry: 00652634; end: 00652683;  */

ulong FUN_00652634(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  puVar1 = (undefined4 *)(param_1 + 0x1c);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)uVar2;
    return uVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  *puVar1 = (int)(param_1 + uVar2);
  return param_1 + uVar2;
}



/* Entry: 00652684; end: 006526c7;  */

void FUN_00652684(segment_command *param_1)

{
  segment_command *psVar1;
  
  if (param_1 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_1;
    func_0x005510c4(param_1,0x20);
  }
  *(undefined ***)psVar1 = &PTR_FUN_00a0d438;
  *(segment_command **)psVar1->segname = param_1;
  psVar1->segname[8] = '\0';
  psVar1->segname[9] = '\0';
  psVar1->segname[10] = '\0';
  psVar1->segname[0xb] = '\0';
  psVar1->segname[0xc] = '\0';
  psVar1->segname[0xd] = '\0';
  psVar1->segname[0xe] = '\0';
  psVar1->segname[0xf] = '\0';
  psVar1->vmaddr = 0;
  return;
}



/* Entry: 006526c8; end: 006526db;  */

void FUN_006526c8(void)

{
  return;
}



/* Entry: 006526dc; end: 00652757;  */

undefined8 * FUN_006526dc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_00a0d4a8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_00698fa0(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x00487c6c(lVar1,param_2);
  param_1[2] = lVar1;
  param_3 = param_3 + 0x18;
  func_0x00487c6c(param_3,param_2);
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = param_1 + 2;
  param_1[6] = param_1 + 3;
  return param_1;
}



/* Entry: 00652758; end: 0065278b;  */

long FUN_00652758(long param_1)

{
  FUN_00652538(param_1 + 8);
  FUN_0065278c(param_1);
  return param_1;
}



/* Entry: 0065278c; end: 006527b3;  */

/* WARNING: Possible PIC construction at 0x006527a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006527a4) */

void FUN_0065278c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(uVar1);
  return;
}



/* Entry: 006527b4; end: 006527b7;  */

long FUN_006527b4(long param_1)

{
  FUN_00652538(param_1 + 8);
  FUN_0065278c(param_1);
  return param_1;
}



/* Entry: 006527b8; end: 006527cb;  */

void FUN_006527b8(void)

{
  FUN_00652758();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 006527cc; end: 006527e3;  */

void FUN_006527cc(void)

{
  Hint_Prefetch(0xb24ee8,0,0,0);
  Hint_Prefetch(PTR_DAT_00b24ee8,0,0,0);
  return;
}



/* Entry: 006527e4; end: 006528c7;  */

void FUN_006527e4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x18,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)(*(long *)(uVar1 + 0x10) - *(long *)(uVar1 + 8)) >> 4)) {
      func_0x006a5744();
      for (lVar3 = 0; unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 006528c8; end: 00652993;  */

long * FUN_006528c8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar10 = (long)*(char *)((long)puVar13 + 0x17);
  if (lVar10 < 0) {
    lVar10 = puVar13[1];
    if (lVar10 == 0) goto LAB_00652934;
    puVar4 = (undefined8 *)*puVar13;
  }
  else {
    puVar4 = puVar13;
    if (*(char *)((long)puVar13 + 0x17) == '\0') goto LAB_00652934;
  }
  FUN_0054ddb8(puVar4,lVar10,1,&UNK_00910314);
  plVar5 = param_3;
  FUN_00435e9c(param_3,1,puVar13,param_2);
  param_2 = plVar5;
LAB_00652934:
  uVar11 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar10 = (long)*(char *)(uVar11 + 0x17);
  if (lVar10 < 0) {
    lVar10 = *(long *)(uVar11 + 8);
  }
  plVar5 = param_2;
  if (lVar10 != 0) {
    plVar5 = param_3;
    FUN_00435e9c(param_3,2,uVar11,param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar5;
  }
  uVar11 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  plVar1 = (long *)(uVar11 + 8);
  lVar10 = 0;
  plVar6 = plVar1;
  do {
    lVar14 = *plVar1;
    if ((int)((ulong)(*(long *)(uVar11 + 0x10) - lVar14) >> 4) <= lVar10) {
      return plVar5;
    }
    piVar2 = (int *)(lVar14 + lVar10 * 0x10);
    func_0x006aad90();
    plVar9 = plVar6;
    plVar5 = plVar6;
    switch(piVar2[1]) {
    case 0:
      plVar9 = *(long **)(piVar2 + 2);
      uVar7 = (ulong)(uint)(*piVar2 << 3);
      func_0x006aac48(uVar7);
      func_0x00487cf0(plVar9,uVar7);
      plVar5 = plVar9;
      break;
    case 1:
      iVar3 = piVar2[2];
      plVar9 = (long *)(ulong)(*piVar2 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar9 = iVar3;
      plVar5 = (long *)((long)plVar9 + 4);
      break;
    case 2:
      lVar14 = *(long *)(piVar2 + 2);
      plVar9 = (long *)(ulong)(*piVar2 << 3 | 1);
      func_0x006aac48();
      *plVar9 = lVar14;
      plVar5 = plVar9 + 1;
      break;
    case 3:
      iVar3 = *piVar2;
      lVar14 = *(long *)(piVar2 + 2);
      lVar15 = (long)*(char *)(lVar14 + 0x17);
      if ((-1 < lVar15) || (lVar15 = *(long *)(lVar14 + 8), lVar15 < 0x80)) {
        lVar16 = *param_3;
        uVar12 = iVar3 << 3;
        plVar9 = (long *)(ulong)uVar12;
        func_0x00487c84();
        if (lVar15 <= lVar16 + ~((long)plVar6 + (long)(int)plVar9) + 0x10) {
          lVar14 = (long)plVar6 + 2;
          for (uVar12 = uVar12 | 2; 0x7f < uVar12; uVar12 = uVar12 >> 7) {
            *(byte *)(lVar14 + -2) = (byte)uVar12 | 0x80;
            lVar14 = lVar14 + 1;
          }
          *(byte *)(lVar14 + -2) = (byte)uVar12;
          *(char *)(lVar14 + -1) = (char)lVar15;
          func_0x006aaec0();
          _memcpy();
          plVar5 = (long *)(lVar14 + lVar15);
          break;
        }
      }
      plVar9 = param_3;
      func_0x0054f030(param_3,iVar3,lVar14,plVar6);
      plVar5 = plVar9;
      break;
    case 4:
      uVar7 = (ulong)(*piVar2 << 3 | 3);
      func_0x006aac48(uVar7);
      uVar8 = *(undefined8 *)(piVar2 + 2);
      FUN_006a5a40(uVar8,uVar7,param_3);
      func_0x006aad84();
      plVar9 = (long *)(ulong)(*piVar2 << 3 | 4);
      func_0x00487cbc(plVar9,uVar8);
      plVar5 = plVar9;
    }
    lVar10 = lVar10 + 1;
    plVar6 = plVar9;
  } while( true );
}



/* Entry: 00652994; end: 00652a0b;  */

long FUN_00652994(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_006529cc;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_006529cc:
    lVar4 = 0;
    goto LAB_006529d0;
  }
  FUN_0048910c();
  lVar4 = uVar2 + 1;
LAB_006529d0:
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x00487c3c();
    lVar4 = lVar4 + uVar2 + 1;
  }
  puVar1 = (undefined4 *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)lVar4;
    return lVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  *puVar1 = (int)(param_1 + lVar4);
  return param_1 + lVar4;
}



/* Entry: 00652a0c; end: 00652a13;  */

void FUN_00652a0c(undefined8 param_1,qword *param_2)

{
  qword *pqVar1;
  
  if (param_2 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.vmaddr;
    __Znwm();
  }
  else {
    pqVar1 = param_2;
    func_0x005510c4(param_2,0x38);
  }
  *pqVar1 = (qword)&PTR_FUN_00a0d4a8;
  pqVar1[1] = (qword)param_2;
  pqVar1[2] = (qword)&DAT_00b69408;
  pqVar1[3] = (qword)&DAT_00b69408;
  *(dword *)(pqVar1 + 4) = 0;
  pqVar1[5] = (qword)(pqVar1 + 2);
  pqVar1[6] = (qword)(pqVar1 + 3);
  return;
}



/* Entry: 00652a14; end: 00652a77;  */

void FUN_00652a14(qword *param_1)

{
  qword *pqVar1;
  
  if (param_1 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.vmaddr;
    __Znwm();
  }
  else {
    pqVar1 = param_1;
    func_0x005510c4(param_1,0x38);
  }
  *pqVar1 = (qword)&PTR_FUN_00a0d4a8;
  pqVar1[1] = (qword)param_1;
  pqVar1[2] = (qword)&DAT_00b69408;
  pqVar1[3] = (qword)&DAT_00b69408;
  *(dword *)(pqVar1 + 4) = 0;
  pqVar1[5] = (qword)(pqVar1 + 2);
  pqVar1[6] = (qword)(pqVar1 + 3);
  return;
}



/* Entry: 00652a78; end: 00652a8f;  */

void FUN_00652a78(void)

{
  return;
}



/* Entry: 00652a90; end: 00652ab3;  */

undefined8 FUN_00652a90(undefined8 param_1)

{
  func_0x00653738();
  return param_1;
}



/* Entry: 00652ab4; end: 00652ab7;  */

undefined8 FUN_00652ab4(undefined8 param_1)

{
  func_0x00653738();
  return param_1;
}



/* Entry: 00652ab8; end: 00652acb;  */

void FUN_00652ab8(void)

{
  FUN_00652a90();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00652acc; end: 00652b0b;  */

void FUN_00652acc(void)

{
  Hint_Prefetch(0xb25128,0,0,0);
  Hint_Prefetch(PTR_DAT_00b25128,0,0,0);
  return;
}



/* Entry: 00652b0c; end: 00652b63;  */

long * FUN_00652b0c(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  func_0x006537b8();
  plVar3 = param_1;
  if (param_1[2] != 0) {
    func_0x00653760();
    lVar9 = *(long *)(unaff_x20 + 0x10);
    plVar3 = (long *)((long)&MACH_HEADER.cpusubtype + 1);
    func_0x00487cbc(9,param_1);
    param_2 = plVar3 + 1;
    *plVar3 = lVar9;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00653728();
  lVar9 = 0;
  plVar4 = plVar3;
  do {
    if ((int)((ulong)(plVar3[1] - *plVar3) >> 4) <= lVar9) {
      return param_2;
    }
    piVar1 = (int *)(*plVar3 + lVar9 * 0x10);
    func_0x006aad90();
    plVar7 = plVar4;
    param_2 = plVar4;
    switch(piVar1[1]) {
    case 0:
      plVar7 = *(long **)(piVar1 + 2);
      uVar5 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar5);
      func_0x00487cf0(plVar7,uVar5);
      param_2 = plVar7;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar7 = iVar2;
      param_2 = (long *)((long)plVar7 + 4);
      break;
    case 2:
      lVar10 = *(long *)(piVar1 + 2);
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar7 = lVar10;
      param_2 = plVar7 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar10 = *(long *)(piVar1 + 2);
      lVar11 = (long)*(char *)(lVar10 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar10 + 8), lVar11 < 0x80)) {
        lVar12 = *param_3;
        uVar8 = iVar2 << 3;
        plVar7 = (long *)(ulong)uVar8;
        func_0x00487c84();
        if (lVar11 <= lVar12 + ~((long)plVar4 + (long)(int)plVar7) + 0x10) {
          lVar10 = (long)plVar4 + 2;
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *(byte *)(lVar10 + -2) = (byte)uVar8 | 0x80;
            lVar10 = lVar10 + 1;
          }
          *(byte *)(lVar10 + -2) = (byte)uVar8;
          *(char *)(lVar10 + -1) = (char)lVar11;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar10 + lVar11);
          break;
        }
      }
      plVar7 = param_3;
      func_0x0054f030(param_3,iVar2,lVar10,plVar4);
      param_2 = plVar7;
      break;
    case 4:
      uVar5 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar5);
      uVar6 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar6,uVar5,param_3);
      func_0x006aad84();
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar7,uVar6);
      param_2 = plVar7;
    }
    lVar9 = lVar9 + 1;
    plVar4 = plVar7;
  } while( true );
}



/* Entry: 00652b64; end: 00652b77;  */

long FUN_00652b64(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = 9;
  }
  puVar1 = (undefined4 *)(param_1 + 0x18);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)lVar2;
    return lVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  *puVar1 = (int)(param_1 + lVar2);
  return param_1 + lVar2;
}



/* Entry: 00652b78; end: 00652b9b;  */

undefined8 FUN_00652b78(undefined8 param_1)

{
  func_0x00653738();
  return param_1;
}



/* Entry: 00652b9c; end: 00652b9f;  */

undefined8 FUN_00652b9c(undefined8 param_1)

{
  func_0x00653738();
  return param_1;
}



/* Entry: 00652ba0; end: 00652bb3;  */

void FUN_00652ba0(void)

{
  FUN_00652b78();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00652bb4; end: 00652bf3;  */

void FUN_00652bb4(void)

{
  Hint_Prefetch(0xb251d8,0,0,0);
  Hint_Prefetch(PTR_DAT_00b251d8,0,0,0);
  return;
}



/* Entry: 00652bf4; end: 00652c4b;  */

long * FUN_00652bf4(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  func_0x006537b8();
  plVar4 = param_1;
  if ((int)param_1[2] != 0) {
    func_0x00653760();
    uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
    plVar4 = (long *)((long)&MACH_HEADER.filetype + 1);
    func_0x00487cbc(0xd,param_1);
    param_2 = (long *)((long)plVar4 + 4);
    *(undefined4 *)plVar4 = uVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00653728();
  lVar12 = 0;
  plVar5 = plVar4;
  do {
    if ((int)((ulong)(plVar4[1] - *plVar4) >> 4) <= lVar12) {
      return param_2;
    }
    piVar1 = (int *)(*plVar4 + lVar12 * 0x10);
    func_0x006aad90();
    plVar8 = plVar5;
    param_2 = plVar5;
    switch(piVar1[1]) {
    case 0:
      plVar8 = *(long **)(piVar1 + 2);
      uVar6 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar6);
      func_0x00487cf0(plVar8,uVar6);
      param_2 = plVar8;
      break;
    case 1:
      iVar3 = piVar1[2];
      plVar8 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar8 = iVar3;
      param_2 = (long *)((long)plVar8 + 4);
      break;
    case 2:
      lVar10 = *(long *)(piVar1 + 2);
      plVar8 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar8 = lVar10;
      param_2 = plVar8 + 1;
      break;
    case 3:
      iVar3 = *piVar1;
      lVar10 = *(long *)(piVar1 + 2);
      lVar11 = (long)*(char *)(lVar10 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar10 + 8), lVar11 < 0x80)) {
        lVar13 = *param_3;
        uVar9 = iVar3 << 3;
        plVar8 = (long *)(ulong)uVar9;
        func_0x00487c84();
        if (lVar11 <= lVar13 + ~((long)plVar5 + (long)(int)plVar8) + 0x10) {
          lVar10 = (long)plVar5 + 2;
          for (uVar9 = uVar9 | 2; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
            *(byte *)(lVar10 + -2) = (byte)uVar9 | 0x80;
            lVar10 = lVar10 + 1;
          }
          *(byte *)(lVar10 + -2) = (byte)uVar9;
          *(char *)(lVar10 + -1) = (char)lVar11;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar10 + lVar11);
          break;
        }
      }
      plVar8 = param_3;
      func_0x0054f030(param_3,iVar3,lVar10,plVar5);
      param_2 = plVar8;
      break;
    case 4:
      uVar6 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar6);
      uVar7 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar7,uVar6,param_3);
      func_0x006aad84();
      plVar8 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar8,uVar7);
      param_2 = plVar8;
    }
    lVar12 = lVar12 + 1;
    plVar5 = plVar8;
  } while( true );
}



/* Entry: 00652c4c; end: 00652c5f;  */

long FUN_00652c4c(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar2 = 5;
  }
  puVar1 = (undefined4 *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)lVar2;
    return lVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  *puVar1 = (int)(param_1 + lVar2);
  return param_1 + lVar2;
}



/* Entry: 00652c60; end: 00652c83;  */

undefined8 FUN_00652c60(undefined8 param_1)

{
  func_0x00653738();
  return param_1;
}



/* Entry: 00652c84; end: 00652c87;  */

undefined8 FUN_00652c84(undefined8 param_1)

{
  func_0x00653738();
  return param_1;
}



/* Entry: 00652c88; end: 00652c9b;  */

void FUN_00652c88(void)

{
  FUN_00652c60();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00652c9c; end: 00652cd7;  */

void FUN_00652c9c(void)

{
  Hint_Prefetch(0xb25288,0,0,0);
  Hint_Prefetch(PTR_DAT_00b25288,0,0,0);
  return;
}



/* Entry: 00652cd8; end: 00652d2b;  */

long * FUN_00652cd8(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  plVar3 = param_1;
  if (param_1[2] != 0) {
    plVar3 = param_3;
    FUN_004363bc();
    param_2 = plVar3;
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x0065374c();
  lVar11 = 0;
  plVar4 = plVar3;
  do {
    if ((int)((ulong)(plVar3[1] - *plVar3) >> 4) <= lVar11) {
      return param_2;
    }
    piVar1 = (int *)(*plVar3 + lVar11 * 0x10);
    func_0x006aad90();
    plVar7 = plVar4;
    param_2 = plVar4;
    switch(piVar1[1]) {
    case 0:
      plVar7 = *(long **)(piVar1 + 2);
      uVar5 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar5);
      func_0x00487cf0(plVar7,uVar5);
      param_2 = plVar7;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar7 = iVar2;
      param_2 = (long *)((long)plVar7 + 4);
      break;
    case 2:
      lVar9 = *(long *)(piVar1 + 2);
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar7 = lVar9;
      param_2 = plVar7 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar9 = *(long *)(piVar1 + 2);
      lVar10 = (long)*(char *)(lVar9 + 0x17);
      if ((-1 < lVar10) || (lVar10 = *(long *)(lVar9 + 8), lVar10 < 0x80)) {
        lVar12 = *param_3;
        uVar8 = iVar2 << 3;
        plVar7 = (long *)(ulong)uVar8;
        func_0x00487c84();
        if (lVar10 <= lVar12 + ~((long)plVar4 + (long)(int)plVar7) + 0x10) {
          lVar9 = (long)plVar4 + 2;
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *(byte *)(lVar9 + -2) = (byte)uVar8 | 0x80;
            lVar9 = lVar9 + 1;
          }
          *(byte *)(lVar9 + -2) = (byte)uVar8;
          *(char *)(lVar9 + -1) = (char)lVar10;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar9 + lVar10);
          break;
        }
      }
      plVar7 = param_3;
      func_0x0054f030(param_3,iVar2,lVar9,plVar4);
      param_2 = plVar7;
      break;
    case 4:
      uVar5 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar5);
      uVar6 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar6,uVar5,param_3);
      func_0x006aad84();
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar7,uVar6);
      param_2 = plVar7;
    }
    lVar11 = lVar11 + 1;
    plVar4 = plVar7;
  } while( true );
}



/* Entry: 00652d2c; end: 00652d53;  */

ulong FUN_00652d2c(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  puVar1 = (undefined4 *)(param_1 + 0x18);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)uVar2;
    return uVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  *puVar1 = (int)(param_1 + uVar2);
  return param_1 + uVar2;
}



/* Entry: 00652d54; end: 00652d77;  */

undefined8 FUN_00652d54(undefined8 param_1)

{
  func_0x00653738();
  return param_1;
}



/* Entry: 00652d78; end: 00652dc3;  */

undefined8 * FUN_00652d78(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_00a0d518;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00652de8(param_1,param_3);
  return param_1;
}



/* Entry: 00652dc4; end: 00652dc7;  */

undefined8 FUN_00652dc4(undefined8 param_1)

{
  func_0x00653738();
  return param_1;
}



/* Entry: 00652dc8; end: 00652ddb;  */

void FUN_00652dc8(void)

{
  FUN_00652d54();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00652ddc; end: 00652e17;  */

void FUN_00652ddc(void)

{
  Hint_Prefetch(0xb25338,0,0,0);
  Hint_Prefetch(PTR_DAT_00b25338,0,0,0);
  return;
}



/* Entry: 00652e18; end: 00652e73;  */

long * FUN_00652e18(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  func_0x006537b8();
  plVar8 = param_1;
  if (param_1[2] != 0) {
    func_0x00653760();
    plVar8 = *(long **)(unaff_x20 + 0x10);
    func_0x006537c4();
    func_0x00487cf0(plVar8,param_1);
    param_2 = plVar8;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00653728();
  lVar11 = 0;
  plVar3 = plVar8;
  do {
    if ((int)((ulong)(plVar8[1] - *plVar8) >> 4) <= lVar11) {
      return param_2;
    }
    piVar1 = (int *)(*plVar8 + lVar11 * 0x10);
    func_0x006aad90();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar4);
      func_0x00487cf0(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar9 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar6 = lVar9;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar9 = *(long *)(piVar1 + 2);
      lVar10 = (long)*(char *)(lVar9 + 0x17);
      if ((-1 < lVar10) || (lVar10 = *(long *)(lVar9 + 8), lVar10 < 0x80)) {
        lVar12 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x00487c84();
        if (lVar10 <= lVar12 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar9 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar9 + -2) = (byte)uVar7 | 0x80;
            lVar9 = lVar9 + 1;
          }
          *(byte *)(lVar9 + -2) = (byte)uVar7;
          *(char *)(lVar9 + -1) = (char)lVar10;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar9 + lVar10);
          break;
        }
      }
      plVar6 = param_3;
      func_0x0054f030(param_3,iVar2,lVar9,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar5,uVar4,param_3);
      func_0x006aad84();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar11 = lVar11 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 00652e74; end: 00652e9b;  */

ulong FUN_00652e74(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  puVar1 = (undefined4 *)(param_1 + 0x18);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)uVar2;
    return uVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  *puVar1 = (int)(param_1 + uVar2);
  return param_1 + uVar2;
}



/* Entry: 00652e9c; end: 00652ebf;  */

undefined8 FUN_00652e9c(undefined8 param_1)

{
  func_0x00653738();
  return param_1;
}



/* Entry: 00652ec0; end: 00652ec3;  */

undefined8 FUN_00652ec0(undefined8 param_1)

{
  func_0x00653738();
  return param_1;
}



/* Entry: 00652ec4; end: 00652ed7;  */

void FUN_00652ec4(void)

{
  FUN_00652e9c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00652ed8; end: 00652f13;  */

void FUN_00652ed8(void)

{
  Hint_Prefetch(0xb25388,0,0,0);
  Hint_Prefetch(PTR_DAT_00b25388,0,0,0);
  return;
}



/* Entry: 00652f14; end: 00652f67;  */

long * FUN_00652f14(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  plVar3 = param_1;
  if ((int)param_1[2] != 0) {
    plVar3 = param_3;
    func_0x004971e4();
    param_2 = plVar3;
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x0065374c();
  lVar11 = 0;
  plVar4 = plVar3;
  do {
    if ((int)((ulong)(plVar3[1] - *plVar3) >> 4) <= lVar11) {
      return param_2;
    }
    piVar1 = (int *)(*plVar3 + lVar11 * 0x10);
    func_0x006aad90();
    plVar7 = plVar4;
    param_2 = plVar4;
    switch(piVar1[1]) {
    case 0:
      plVar7 = *(long **)(piVar1 + 2);
      uVar5 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar5);
      func_0x00487cf0(plVar7,uVar5);
      param_2 = plVar7;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar7 = iVar2;
      param_2 = (long *)((long)plVar7 + 4);
      break;
    case 2:
      lVar9 = *(long *)(piVar1 + 2);
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar7 = lVar9;
      param_2 = plVar7 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar9 = *(long *)(piVar1 + 2);
      lVar10 = (long)*(char *)(lVar9 + 0x17);
      if ((-1 < lVar10) || (lVar10 = *(long *)(lVar9 + 8), lVar10 < 0x80)) {
        lVar12 = *param_3;
        uVar8 = iVar2 << 3;
        plVar7 = (long *)(ulong)uVar8;
        func_0x00487c84();
        if (lVar10 <= lVar12 + ~((long)plVar4 + (long)(int)plVar7) + 0x10) {
          lVar9 = (long)plVar4 + 2;
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *(byte *)(lVar9 + -2) = (byte)uVar8 | 0x80;
            lVar9 = lVar9 + 1;
          }
          *(byte *)(lVar9 + -2) = (byte)uVar8;
          *(char *)(lVar9 + -1) = (char)lVar10;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar9 + lVar10);
          break;
        }
      }
      plVar7 = param_3;
      func_0x0054f030(param_3,iVar2,lVar9,plVar4);
      param_2 = plVar7;
      break;
    case 4:
      uVar5 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar5);
      uVar6 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar6,uVar5,param_3);
      func_0x006aad84();
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar7,uVar6);
      param_2 = plVar7;
    }
    lVar11 = lVar11 + 1;
    plVar4 = plVar7;
  } while( true );
}



/* Entry: 00652f68; end: 00652f8f;  */

ulong FUN_00652f68(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  puVar1 = (undefined4 *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)uVar2;
    return uVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  *puVar1 = (int)(param_1 + uVar2);
  return param_1 + uVar2;
}



/* Entry: 00652f90; end: 00652fb3;  */

undefined8 FUN_00652f90(undefined8 param_1)

{
  func_0x00653738();
  return param_1;
}



/* Entry: 00652fb4; end: 00652fb7;  */

undefined8 FUN_00652fb4(undefined8 param_1)

{
  func_0x00653738();
  return param_1;
}



/* Entry: 00652fb8; end: 00652fcb;  */

void FUN_00652fb8(void)

{
  FUN_00652f90();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00652fcc; end: 00653007;  */

void FUN_00652fcc(void)

{
  Hint_Prefetch(0xb25438,0,0,0);
  Hint_Prefetch(PTR_DAT_00b25438,0,0,0);
  return;
}



/* Entry: 00653008; end: 0065305b;  */

long * FUN_00653008(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x006537b8();
  if ((int)param_1[2] != 0) {
    func_0x00653760();
    func_0x006537c4();
    func_0x006537d4();
    param_2 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00653728();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x006aad90();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar4);
      func_0x00487cf0(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x00487c84();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x0054f030(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar5,uVar4,param_3);
      func_0x006aad84();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 0065305c; end: 0065307f;  */

ulong FUN_0065305c(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar3 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  puVar1 = (uint *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = uVar3;
    return (ulong)uVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  uVar2 = param_1 + (ulong)uVar3;
  *puVar1 = (uint)uVar2;
  return uVar2;
}



/* Entry: 00653080; end: 006530a3;  */

undefined8 FUN_00653080(undefined8 param_1)

{
  func_0x00653738();
  return param_1;
}



/* Entry: 006530a4; end: 006530ef;  */

undefined8 * FUN_006530a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_00a0d798;
  param_1[1] = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  func_0x00653114(param_1,param_3);
  return param_1;
}



/* Entry: 006530f0; end: 006530f3;  */

undefined8 FUN_006530f0(undefined8 param_1)

{
  func_0x00653738();
  return param_1;
}



/* Entry: 006530f4; end: 00653107;  */

void FUN_006530f4(void)

{
  FUN_00653080();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00653108; end: 00653147;  */

void FUN_00653108(void)

{
  Hint_Prefetch(0xb254e8,0,0,0);
  Hint_Prefetch(PTR_DAT_00b254e8,0,0,0);
  return;
}



/* Entry: 00653148; end: 0065319f;  */

long * FUN_00653148(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x006537b8();
  if ((char)param_1[2] == '\x01') {
    func_0x00653760();
    func_0x006537c4();
    func_0x006537d4();
    param_2 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00653728();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x006aad90();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar4);
      func_0x00487cf0(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x00487c84();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x0054f030(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar5,uVar4,param_3);
      func_0x006aad84();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 006531a0; end: 006531ab;  */

long FUN_006531a0(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  puVar1 = (undefined4 *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)lVar2;
    return lVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  *puVar1 = (int)(param_1 + lVar2);
  return param_1 + lVar2;
}



/* Entry: 006531ac; end: 006531d7;  */

long FUN_006531ac(long param_1)

{
  func_0x00653738();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 006531d8; end: 006531db;  */

long FUN_006531d8(long param_1)

{
  func_0x00653738();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 006531dc; end: 006531ef;  */

void FUN_006531dc(void)

{
  FUN_006531ac();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 006531f0; end: 006531fb;  */

void FUN_006531f0(void)

{
  Hint_Prefetch(0xb25598,0,0,0);
  Hint_Prefetch(PTR_DAT_00b25598,0,0,0);
  return;
}



/* Entry: 006531fc; end: 00653287;  */

void FUN_006531fc(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x006537a0();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    func_0x00532e08(unaff_x19 + 0x10);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  uVar2 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    func_0x00699010();
  }
  if (0 < (int)((ulong)(*(long *)(uVar2 + 0x10) - *(long *)(uVar2 + 8)) >> 4)) {
    func_0x006a5744();
    for (lVar1 = 0; unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
      func_0x006a57c0();
      func_0x006a580c();
    }
  }
  return;
}



/* Entry: 00653288; end: 0065331b;  */

long * FUN_00653288(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar11 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar9 = (long)*(char *)((long)puVar11 + 0x17);
  plVar4 = param_1;
  if (lVar9 < 0) {
    lVar9 = puVar11[1];
    if (lVar9 == 0) goto LAB_006532f4;
    puVar3 = (undefined8 *)*puVar11;
  }
  else {
    puVar3 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_006532f4;
  }
  FUN_0054ddb8(puVar3,lVar9,1,&UNK_00910350);
  plVar4 = param_3;
  FUN_00435e9c(param_3,1,puVar11,param_2);
  param_2 = plVar4;
LAB_006532f4:
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x0065374c();
  lVar9 = 0;
  plVar5 = plVar4;
  do {
    if ((int)((ulong)(plVar4[1] - *plVar4) >> 4) <= lVar9) {
      return param_2;
    }
    piVar1 = (int *)(*plVar4 + lVar9 * 0x10);
    func_0x006aad90();
    plVar8 = plVar5;
    param_2 = plVar5;
    switch(piVar1[1]) {
    case 0:
      plVar8 = *(long **)(piVar1 + 2);
      uVar6 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar6);
      func_0x00487cf0(plVar8,uVar6);
      param_2 = plVar8;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar8 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar8 = iVar2;
      param_2 = (long *)((long)plVar8 + 4);
      break;
    case 2:
      lVar12 = *(long *)(piVar1 + 2);
      plVar8 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar8 = lVar12;
      param_2 = plVar8 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar12 = *(long *)(piVar1 + 2);
      lVar13 = (long)*(char *)(lVar12 + 0x17);
      if ((-1 < lVar13) || (lVar13 = *(long *)(lVar12 + 8), lVar13 < 0x80)) {
        lVar14 = *param_3;
        uVar10 = iVar2 << 3;
        plVar8 = (long *)(ulong)uVar10;
        func_0x00487c84();
        if (lVar13 <= lVar14 + ~((long)plVar5 + (long)(int)plVar8) + 0x10) {
          lVar12 = (long)plVar5 + 2;
          for (uVar10 = uVar10 | 2; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
            *(byte *)(lVar12 + -2) = (byte)uVar10 | 0x80;
            lVar12 = lVar12 + 1;
          }
          *(byte *)(lVar12 + -2) = (byte)uVar10;
          *(char *)(lVar12 + -1) = (char)lVar13;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar12 + lVar13);
          break;
        }
      }
      plVar8 = param_3;
      func_0x0054f030(param_3,iVar2,lVar12,plVar5);
      param_2 = plVar8;
      break;
    case 4:
      uVar6 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar6);
      uVar7 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar7,uVar6,param_3);
      func_0x006aad84();
      plVar8 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar8,uVar7);
      param_2 = plVar8;
    }
    lVar9 = lVar9 + 1;
    plVar5 = plVar8;
  } while( true );
}



/* Entry: 0065331c; end: 0065335f;  */

long FUN_0065331c(long param_1)

{
  undefined4 *puVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  
  func_0x006537fc();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    FUN_0048910c();
    param_1 = param_1 + 1;
  }
  puVar1 = (undefined4 *)(unaff_x19 + 0x18);
  if ((*(byte *)(unaff_x19 + 8) & 1) == 0) {
    *puVar1 = (int)param_1;
    return param_1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    unaff_x19 = (*(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  *puVar1 = (int)(unaff_x19 + param_1);
  return unaff_x19 + param_1;
}



/* Entry: 00653360; end: 0065338b;  */

long FUN_00653360(long param_1)

{
  func_0x00653738();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 0065338c; end: 0065338f;  */

long FUN_0065338c(long param_1)

{
  func_0x00653738();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 00653390; end: 006533a3;  */

void FUN_00653390(void)

{
  FUN_00653360();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 006533a4; end: 006533af;  */

void FUN_006533a4(void)

{
  Hint_Prefetch(0xb25670,0,0,0);
  Hint_Prefetch(PTR_DAT_00b25670,0,0,0);
  return;
}



/* Entry: 006533b0; end: 006534e7;  */

void FUN_006533b0(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x006537a0();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    func_0x00532e08(unaff_x19 + 0x10);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  uVar2 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    func_0x00699010();
  }
  if (0 < (int)((ulong)(*(long *)(uVar2 + 0x10) - *(long *)(uVar2 + 8)) >> 4)) {
    func_0x006a5744();
    for (lVar1 = 0; unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
      func_0x006a57c0();
      func_0x006a580c();
    }
  }
  return;
}



/* Entry: 006534e8; end: 0065352f;  */

void FUN_006534e8(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x00653758();
  }
  else {
    func_0x00653714();
  }
  func_0x00653778(&PTR_FUN_00a0d518);
  return;
}



/* Entry: 00653530; end: 006536db;  */

void FUN_00653530(long param_1)

{
  if (param_1 == 0) {
    func_0x00653758();
  }
  else {
    func_0x00653714();
  }
  func_0x00653778(&PTR_FUN_00a0d518);
  return;
}



/* Entry: 006536dc; end: 0065381b;  */

void FUN_006536dc(undefined8 *param_1)

{
  Hint_Prefetch(param_1,0,0,0);
  Hint_Prefetch(*param_1,0,0,0);
  return;
}



/* Entry: 0065381c; end: 006538b3;  */

void FUN_0065381c(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  FUN_00699298();
  lVar1 = *(long *)(param_1 + 8) + 0x18;
  FUN_004636dc(lVar1,&UNK_00810b8d);
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    FUN_00656068(param_1,1);
    *param_2 = lVar1;
    FUN_00656068(param_1,2);
    *param_3 = param_1;
    lVar1 = *param_2;
    if (((lVar1 != 0) && (FUN_006538b4(), (int)lVar1 == 9)) && (*param_3 != 0)) {
      FUN_006538b4();
    }
  }
  return;
}


