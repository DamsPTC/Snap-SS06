/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104be665c; end: 104be689b;  */

void FUN_104be665c(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000104be7fb8();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136a37a8);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136a37a8) = 1;
  uStack_38 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_104be66b0;
  if ((bRam00000001136a37b0 & 1) == 0) goto LAB_104be66d4;
  while( true ) {
    func_0x000108b80888(0x1136a37b8);
LAB_104be66b0:
    func_0x000104be7f74(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_104be66d4:
    iVar2 = 0x136a37b0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_104be6938();
      pcVar3 = "onAffinityMessagesUpdated";
      func_0x0001003a83dc(&uStack_c0,"onAffinityMessagesUpdated");
      func_0x0001003b166c(auStack_e0);
      func_0x00010529dde0();
      puVar4 = auStack_98;
      func_0x0001003adcc0(puVar4,pcVar3);
      FUN_104be7878();
      puVar5 = auStack_88;
      func_0x0001003adcc0(puVar5,puVar4);
      FUN_104be78d4();
      func_0x0001003adcc0(auStack_78,puVar5);
      FUN_104bdbd48(auStack_d0,auStack_e0,auStack_98,3);
      uStack_68 = uStack_c0;
      uStack_c0 = 0;
      func_0x0001003aef98(auStack_60,auStack_d0);
      pcVar3 = "onConversationHighlightsUpdated";
      func_0x0001003a83dc(&uStack_e8,"onConversationHighlightsUpdated");
      func_0x0001003b166c(auStack_108);
      func_0x00010529dde0();
      puVar4 = auStack_b8;
      func_0x0001003adcc0(puVar4,pcVar3);
      func_0x000105282f94();
      func_0x0001003adcc0(auStack_a8,puVar4);
      FUN_104bdbd48(auStack_f8,auStack_108,auStack_b8,2);
      uStack_50 = uStack_e8;
      uStack_e8 = 0;
      func_0x0001003aef98(auStack_48,auStack_f8);
      FUN_104bdbd44(0x1136a37b8,0x113815cc8,1,&uStack_68,2);
      lVar6 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_60 + lVar6 + -8);
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != -0x18);
      func_0x000104be7fec(auStack_f8);
      lVar6 = 0x18;
      do {
        func_0x0001003adc18(auStack_b8 + lVar6);
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != -8);
      func_0x000104be7fec(auStack_108);
      func_0x0001003a8c94(&uStack_e8);
      func_0x000104be7fec(auStack_d0);
      lVar6 = 0x28;
      do {
        func_0x0001003adc18(auStack_98 + lVar6);
        lVar6 = lVar6 + -0x10;
        in_ZR = lVar6 == -8;
      } while (!(bool)in_ZR);
      func_0x000104be7fec(auStack_e0);
      func_0x0001003a8c94(&uStack_c0);
      ___cxa_guard_release(0x1136a37b0);
    }
  }
  return;
}



/* Entry: 104be689c; end: 104be6937;  */

undefined8 FUN_104be689c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113815cc0 & 1) == 0) {
    iVar4 = 0x13815cc0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_104be6938();
      lStack_20 = lRam0000000113815cc8;
      if (lRam0000000113815cc8 != 0) {
        piVar1 = (int *)(lRam0000000113815cc8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113815cb0,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113815cc0);
    }
  }
  return 0x113815cb0;
}



/* Entry: 104be6938; end: 104be698b;  */

void FUN_104be6938(void)

{
  int iVar1;
  
  if ((bRam0000000113815cd0 & 1) == 0) {
    iVar1 = 0x13815cd0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113815cc8,"_djinni_interface_ActiveConversationUpdatesListener");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113815cd0);
      return;
    }
  }
  return;
}



/* Entry: 104be698c; end: 104be6a77;  */

void FUN_104be698c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar7;
  uint uVar8;
  undefined1 auStack_e8 [8];
  long lStack_e0;
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000104be7fb8();
  uStack_38 = extraout_x8;
  func_0x000104be8028();
  FUN_104be6c64(auStack_58,param_3);
  FUN_104be6d04(auStack_48,param_4);
  func_0x000104be807c();
  uVar6 = 0;
  FUN_104be6a78();
  func_0x000104be7fdc();
  lVar7 = 0x20;
  do {
    func_0x00010b9a8d98();
    lVar7 = lVar7 + -0x10;
    bVar2 = lVar7 == -0x10;
  } while (!bVar2);
  func_0x000104be7f74(uStack_38);
  if (bVar2) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = &stack0xffffffffffffffd8;
  lVar7 = -0x30;
  do {
    func_0x00010b9a8d98();
    puVar4 = puVar4 + -0x10;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0);
  func_0x000104be7f88();
  func_0x000104be7fb8();
  uVar3 = cRam00000001138286d0 == '\x01';
  if (((bool)uVar3) &&
     (uVar3 = uVar6 == *(ulong *)(puVar4 + 0x30), uVar6 < *(ulong *)(puVar4 + 0x30))) {
    uVar8 = (uint)(*(ulong *)(*(long *)(puVar4 + 0x28) + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f)) & 1;
  }
  else {
    uVar8 = 0;
  }
  plVar5 = *(long **)(puVar4 + 8);
  uStack_c8 = extraout_x8_01;
  (**(code **)(*plVar5 + 0x28))();
  if ((int)plVar5 == 0) {
    if (*(long *)(*(long *)(puVar4 + 0x10) + uVar6 * 8) == 0) {
      func_0x00010b9a9710(&lStack_e0,*(long *)(*(long *)(puVar4 + 8) + 0x20) + uVar6 * 0x10 + 0x18);
      FUN_104be7934(*(long *)(puVar4 + 0x10) + uVar6 * 8,&lStack_e0);
      FUN_104bda388(&lStack_e0);
      if (uVar8 == 0) goto LAB_104be6b90;
LAB_104be6b3c:
      func_0x000104be8064(&lStack_e0,*(undefined8 *)(*(long *)(puVar4 + 0x10) + uVar6 * 8),0);
      func_0x000104be805c();
      goto LAB_104be6b54;
    }
    if (uVar8 != 0) goto LAB_104be6b3c;
LAB_104be6b90:
    func_0x000104be8064(&lStack_e0,*(undefined8 *)(*(long *)(puVar4 + 0x10) + uVar6 * 8),9);
    uVar3 = lStack_e0 == 1;
    if ((bool)uVar3) {
      *extraout_x8_00 = uStack_d8;
      *(undefined2 *)(extraout_x8_00 + 1) = uStack_d0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      func_0x000104be805c();
      goto LAB_104be6bcc;
    }
  }
  else {
    if (uVar8 == 0) {
      ___cxa_allocate_exception(0x18);
      func_0x00010b99f5f8(auStack_e8,"proxy expired");
      func_0x00010069e7ec();
      FUN_104be7970();
      func_0x000104be7f90();
      goto LAB_104be6c1c;
    }
LAB_104be6b54:
    func_0x000104be7ffc();
LAB_104be6bcc:
    func_0x000104be7f74(uStack_c8);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
  }
  ___cxa_allocate_exception(0x18);
  uStack_d8 = 0;
  FUN_104be7970();
  func_0x000104be7f90();
LAB_104be6c1c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104be6c20);
  (*pcVar1)();
}



/* Entry: 104be6a78; end: 104be6c63;  */

void FUN_104be6a78(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 extraout_x8;
  uint uVar4;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  
  func_0x000104be7fb8();
  uVar2 = cRam00000001138286d0 == '\x01';
  if (((bool)uVar2) &&
     (uVar2 = param_3 == *(ulong *)(param_2 + 0x30), param_3 < *(ulong *)(param_2 + 0x30))) {
    uVar4 = (uint)(*(ulong *)(*(long *)(param_2 + 0x28) + (param_3 >> 6) * 8) >> (param_3 & 0x3f)) &
            1;
  }
  else {
    uVar4 = 0;
  }
  plVar3 = *(long **)(param_2 + 8);
  uStack_48 = extraout_x8;
  (**(code **)(*plVar3 + 0x28))();
  if ((int)plVar3 == 0) {
    if (*(long *)(*(long *)(param_2 + 0x10) + param_3 * 8) == 0) {
      func_0x00010b9a9710(&lStack_60,
                          *(long *)(*(long *)(param_2 + 8) + 0x20) + param_3 * 0x10 + 0x18);
      FUN_104be7934(*(long *)(param_2 + 0x10) + param_3 * 8,&lStack_60);
      FUN_104bda388(&lStack_60);
      if (uVar4 == 0) goto LAB_104be6b90;
LAB_104be6b3c:
      func_0x000104be8064(&lStack_60,*(undefined8 *)(*(long *)(param_2 + 0x10) + param_3 * 8),0);
      func_0x000104be805c();
      goto LAB_104be6b54;
    }
    if (uVar4 != 0) goto LAB_104be6b3c;
LAB_104be6b90:
    func_0x000104be8064(&lStack_60,*(undefined8 *)(*(long *)(param_2 + 0x10) + param_3 * 8),9);
    uVar2 = lStack_60 == 1;
    if ((bool)uVar2) {
      *param_1 = uStack_58;
      *(undefined2 *)(param_1 + 1) = uStack_50;
      uStack_58 = 0;
      uStack_50 = 0;
      func_0x000104be805c();
      goto LAB_104be6bcc;
    }
  }
  else {
    if (uVar4 == 0) {
      ___cxa_allocate_exception(0x18);
      func_0x00010b99f5f8(auStack_68,"proxy expired");
      func_0x00010069e7ec();
      FUN_104be7970();
      func_0x000104be7f90();
      goto LAB_104be6c1c;
    }
LAB_104be6b54:
    func_0x000104be7ffc();
LAB_104be6bcc:
    func_0x000104be7f74(uStack_48);
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
  }
  ___cxa_allocate_exception(0x18);
  uStack_58 = 0;
  FUN_104be7970();
  func_0x000104be7f90();
LAB_104be6c1c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104be6c20);
  (*pcVar1)();
}



/* Entry: 104be6c64; end: 104be6d03;  */

void FUN_104be6c64(long *param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010069e628();
  func_0x00010b9abe10(&lStack_48,extraout_x8 / 0x5d8);
  lVar1 = 0;
  lVar3 = 0x18;
  for (uVar2 = 0; uVar2 < (ulong)((param_1[1] - *param_1) / 0x5d8); uVar2 = uVar2 + 1) {
    func_0x00010528f724(auStack_58,*param_1 + lVar1);
    func_0x00010b9a9020(lStack_48 + lVar3,auStack_58);
    func_0x000104be7fdc();
    lVar3 = lVar3 + 0x10;
    lVar1 = lVar1 + 0x5d8;
  }
  func_0x000104be8014();
  func_0x000104be7ff4();
  return;
}



/* Entry: 104be6d04; end: 104be6d9b;  */

void FUN_104be6d04(long *param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010069e628();
  func_0x00010b9abe10(&lStack_48,extraout_x8 >> 5);
  lVar1 = 0;
  uVar2 = 0;
  lVar3 = 0x18;
  while( true ) {
    if ((ulong)(param_1[1] - *param_1 >> 5) <= uVar2) break;
    func_0x000105290ef4(auStack_58,*param_1 + lVar1);
    func_0x00010b9a9020(lStack_48 + lVar3,auStack_58);
    func_0x000104be7fdc();
    uVar2 = uVar2 + 1;
    lVar3 = lVar3 + 0x10;
    lVar1 = lVar1 + 0x20;
  }
  func_0x000104be8014();
  func_0x000104be7ff4();
  return;
}



/* Entry: 104be6d9c; end: 104be6e5b;  */

long FUN_104be6d9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 extraout_x8;
  long lVar3;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000104be7fb8();
  uStack_38 = extraout_x8;
  func_0x000104be8028();
  func_0x000105282e64(auStack_48,param_3);
  func_0x000104be807c();
  FUN_104be6a78();
  func_0x000104be7fdc();
  lVar3 = 0x10;
  do {
    lVar2 = param_3 + lVar3;
    func_0x00010b9a8d98();
    lVar3 = lVar3 + -0x10;
    bVar1 = lVar3 == -0x10;
  } while (!bVar1);
  func_0x000104be7f74(uStack_38);
  if (bVar1) {
    return lVar2;
  }
  ___stack_chk_fail();
  param_3 = param_3 + 0x10;
  lVar3 = -0x20;
  do {
    func_0x00010b9a8d98(param_3);
    param_3 = param_3 + -0x10;
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0);
  func_0x000104be7f88();
  func_0x000104be803c();
  return lVar2;
}



/* Entry: 104be6e5c; end: 104be6e93;  */

void FUN_104be6e5c(void)

{
  func_0x000104be803c();
  return;
}



/* Entry: 104be6e94; end: 104be6e9f;  */

undefined8 * FUN_104be6e94(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  *param_1 = &PTR_FUN_1107e7df0;
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_24 = *(undefined4 *)(param_1[1] + 0x18);
  FUN_104be7ab4(0x11328ad18,&uStack_24);
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  func_0x000104be7d74(param_1 + 5);
  FUN_104be7db4(param_1 + 2);
  FUN_104be7e54(param_1 + 1);
  return param_1;
}



/* Entry: 104be6ea0; end: 104be6f1f;  */

void FUN_104be6ea0(undefined8 *param_1,undefined8 *param_2)

{
  long extraout_x9;
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  
  func_0x000104be8090();
  if ((undefined8 *)(extraout_x9 / 0x5d8) < param_2) {
    if ((undefined8 *)0x2bceb771a02bce < param_2) {
      FUN_104be6f20();
      func_0x00010069e9b0();
      func_0x000104be7f88();
      func_0x000104be8048();
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      uVar1 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar1;
      param_1[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
    func_0x00010069e6e8(auStack_48);
    func_0x00010069e7ec();
    func_0x00010069e804();
    func_0x00010069e9b0();
  }
  return;
}



/* Entry: 104be6f20; end: 104be6f2b;  */

void FUN_104be6f20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x000104be8048();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 104be6f2c; end: 104be6f33;  */

void FUN_104be6f2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 104be6f34; end: 104be6f4f;  */

void FUN_104be6f34(long param_1)

{
  FUN_104be6f50();
  *(undefined1 *)(param_1 + 0x238) = 1;
  return;
}



/* Entry: 104be6f50; end: 104be6f77;  */

undefined4 * FUN_104be6f50(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_104be6f78(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 104be6f78; end: 104be6f9f;  */

void FUN_104be6f78(long param_1)

{
  func_0x000100699570();
  *(undefined1 *)(param_1 + 0x228) = 0;
  FUN_104be6fa0();
  return;
}



/* Entry: 104be6fa0; end: 104be6fb3;  */

void FUN_104be6fa0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_104be6fd0();
    *(undefined1 *)(param_1 + 0x228) = 1;
    return;
  }
  return;
}



/* Entry: 104be6fb4; end: 104be6fcf;  */

void FUN_104be6fb4(long param_1)

{
  FUN_104be6fd0();
  *(undefined1 *)(param_1 + 0x228) = 1;
  return;
}



/* Entry: 104be6fd0; end: 104be710b;  */

void FUN_104be6fd0(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010069a04c();
  func_0x00010069a114();
  func_0x00010069a138();
  func_0x000100699ef0();
  func_0x00010069957c(unaff_x19 + 0x40,unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xb0) = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined1 *)(unaff_x19 + 200) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar1;
  *(undefined1 *)(unaff_x19 + 0xe0) = 0;
  if (*(char *)(unaff_x20 + 0xe0) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0xd0);
    uVar1 = *(undefined8 *)(unaff_x20 + 200);
    *(undefined8 *)(unaff_x19 + 0xd8) = *(undefined8 *)(unaff_x20 + 0xd8);
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar2;
    *(undefined8 *)(unaff_x19 + 200) = uVar1;
    *(undefined8 *)(unaff_x20 + 0xd0) = 0;
    *(undefined8 *)(unaff_x20 + 0xd8) = 0;
    *(undefined8 *)(unaff_x20 + 200) = 0;
    *(undefined1 *)(unaff_x19 + 0xe0) = 1;
  }
  *(undefined8 *)(unaff_x19 + 0xe8) = 0;
  *(undefined8 *)(unaff_x19 + 0xf0) = 0;
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xe8);
  *(undefined8 *)(unaff_x19 + 0xf0) = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  func_0x000100699f98(unaff_x19 + 0x100,unaff_x20 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x148);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x158);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x150);
  *(undefined1 *)(unaff_x19 + 0x160) = *(undefined1 *)(unaff_x20 + 0x160);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x140) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x158) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x150) = uVar3;
  func_0x000100699fd4(unaff_x19 + 0x168,unaff_x20 + 0x168);
  func_0x00010069a010(unaff_x19 + 0x198,unaff_x20 + 0x198);
  func_0x00010069aaa0(unaff_x19 + 0x1c0,unaff_x20 + 0x1c0);
  return;
}



/* Entry: 104be710c; end: 104be7127;  */

void FUN_104be710c(long param_1)

{
  FUN_104be7128();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 104be7128; end: 104be7187;  */

undefined8 * FUN_104be7128(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000104be715c(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 104be7188; end: 104be71af;  */

void FUN_104be7188(long param_1)

{
  func_0x000100699570();
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_104be71b0();
  return;
}



/* Entry: 104be71b0; end: 104be71c3;  */

void FUN_104be71b0(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_104be71dc();
    func_0x000104be80a4();
    return;
  }
  return;
}



/* Entry: 104be71c4; end: 104be71db;  */

void FUN_104be71c4(void)

{
  FUN_104be71dc();
  func_0x000104be80a4();
  return;
}



/* Entry: 104be71dc; end: 104be71f3;  */

void FUN_104be71dc(long param_1,long param_2)

{
  func_0x00010069a114();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 104be71f4; end: 104be721b;  */

void FUN_104be71f4(long param_1)

{
  func_0x000100699570();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_104be721c();
  return;
}



/* Entry: 104be721c; end: 104be7233;  */

void FUN_104be721c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 104be7234; end: 104be724f;  */

void FUN_104be7234(long param_1)

{
  FUN_104be7250();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 104be7250; end: 104be727b;  */

void FUN_104be7250(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_104be727c();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2d) = *(undefined8 *)(param_2 + 0x2d);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 104be727c; end: 104be72a3;  */

void FUN_104be727c(long param_1)

{
  func_0x000100699570();
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_104be72a4();
  return;
}



/* Entry: 104be72a4; end: 104be72b7;  */

void FUN_104be72a4(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_104be72d0();
    func_0x000104be80a4();
    return;
  }
  return;
}



/* Entry: 104be72b8; end: 104be72cf;  */

void FUN_104be72b8(void)

{
  FUN_104be72d0();
  func_0x000104be80a4();
  return;
}



/* Entry: 104be72d0; end: 104be734b;  */

void FUN_104be72d0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 104be734c; end: 104be7363;  */

void FUN_104be734c(void)

{
  FUN_104be7364();
  func_0x000104be80a4();
  return;
}



/* Entry: 104be7364; end: 104be737b;  */

void FUN_104be7364(long param_1,long param_2)

{
  func_0x00010069a114();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 104be737c; end: 104be7393;  */

void FUN_104be737c(void)

{
  FUN_104be7394();
  func_0x000104be80a4();
  return;
}



/* Entry: 104be7394; end: 104be7397;  */

void FUN_104be7394(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 104be7398; end: 104be73b3;  */

void FUN_104be7398(long param_1)

{
  FUN_104be73b4();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 104be73b4; end: 104be73eb;  */

void FUN_104be73b4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010069a114();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 104be73ec; end: 104be7443;  */

void FUN_104be73ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x5d8;
    func_0x00010069ea28();
  }
  return;
}



/* Entry: 104be7444; end: 104be74a7;  */

void FUN_104be7444(long *param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x000104be8090();
  if ((ulong)(extraout_x9 >> 5) < param_2) {
    if (param_2 >> 0x3b != 0) {
      FUN_104be74a8();
      func_0x000104be7fe4();
      func_0x000104be7f88();
      func_0x000104be8048();
      func_0x00010069e7f8();
      FUN_104be7574(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1])
                   );
      func_0x00010069e960();
      return;
    }
    FUN_104be74ec(auStack_48);
    func_0x00010069e7ec();
    FUN_104be74b4();
    func_0x000104be7fe4();
  }
  return;
}



/* Entry: 104be74a8; end: 104be74b3;  */

void FUN_104be74a8(long *param_1,long param_2)

{
  func_0x000104be8048();
  func_0x00010069e7f8();
  FUN_104be7574(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x00010069e960();
  return;
}



/* Entry: 104be74b4; end: 104be74eb;  */

void FUN_104be74b4(long *param_1,long param_2)

{
  func_0x00010069e7f8();
  FUN_104be7574(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x00010069e960();
  return;
}



/* Entry: 104be74ec; end: 104be7557;  */

long * FUN_104be74ec(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000104be7534();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 104be7558; end: 104be7573;  */

void FUN_104be7558(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  FUN_104bd35f4();
  func_0x00010069e848();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x20) {
    func_0x00010069ae08(param_4,unaff_x22);
    param_4 = lStack_48 + 0x20;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  FUN_104be75ec();
  FUN_104be761c(auStack_70);
  return;
}



/* Entry: 104be7574; end: 104be75eb;  */

void FUN_104be7574(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x00010069e848();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x20) {
    func_0x00010069ae08(in_x3,unaff_x22);
    in_x3 = lStack_38 + 0x20;
    lStack_38 = in_x3;
  }
  uStack_48 = 1;
  FUN_104be75ec();
  FUN_104be761c(auStack_60);
  return;
}



/* Entry: 104be75ec; end: 104be761b;  */

void FUN_104be75ec(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 104be761c; end: 104be764b;  */

long FUN_104be761c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_104be764c(param_1);
  }
  return param_1;
}



/* Entry: 104be764c; end: 104be766b;  */

void FUN_104be764c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 104be766c; end: 104be76c7;  */

void FUN_104be766c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x20;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 104be76c8; end: 104be76cf;  */

void FUN_104be76c8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010069e7f8(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 104be76d0; end: 104be7767;  */

void FUN_104be76d0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010069e7f8();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 104be7768; end: 104be77ef;  */

long FUN_104be7768(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x00010069a04c();
  func_0x00010069e628();
  FUN_104be77f0();
  FUN_104be74ec(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 5,unaff_x19 + 2);
  func_0x00010069ae08(lStack_38);
  lStack_38 = lStack_38 + 0x20;
  func_0x00010069e7ec();
  FUN_104be74b4();
  lVar1 = unaff_x19[1];
  func_0x000104be7fe4();
  return lVar1;
}



/* Entry: 104be77f0; end: 104be782f;  */

long * FUN_104be77f0(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x7ffffffffffffff;
    }
    return plVar1;
  }
  FUN_104be74a8();
  func_0x00010066c3e8(param_1 + 4);
  if ((char)param_1[3] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return param_1;
}



/* Entry: 104be7830; end: 104be7857;  */

void FUN_104be7830(long param_1)

{
  func_0x00010066c3e8(param_1 + 0x20);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 104be7858; end: 104be7877;  */

void FUN_104be7858(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 104be7878; end: 104be78d3;  */

undefined8 FUN_104be7878(void)

{
  int iVar1;
  
  if ((bRam00000001130a8338 & 1) == 0) {
    iVar1 = 0x130a8338;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010528f8a4();
      func_0x00010b990868(0x1130a8328);
      ___cxa_guard_release(0x1130a8338);
    }
  }
  return 0x1130a8328;
}



/* Entry: 104be78d4; end: 104be792f;  */

undefined8 FUN_104be78d4(void)

{
  int iVar1;
  
  if ((bRam00000001130a8320 & 1) == 0) {
    iVar1 = 0x130a8320;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000105290ffc();
      func_0x00010b990868(0x1130a8310);
      ___cxa_guard_release(0x1130a8320);
    }
  }
  return 0x1130a8310;
}



/* Entry: 104be7930; end: 104be7933;  */

void FUN_104be7930(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e7da0;
  FUN_104bda93c(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)(param_1);
  return;
}



/* Entry: 104be7934; end: 104be796f;  */

undefined8 * FUN_104be7934(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_104bda3ac(uVar1);
  }
  return param_1;
}



/* Entry: 104be7970; end: 104be79cf;  */

void FUN_104be7970(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x00010069a04c();
  func_0x00010b99f8ac(auStack_38,param_2);
  func_0x00010069e7ec();
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  func_0x000104be8020();
  *unaff_x19 = &PTR_FUN_1107e7da0;
  unaff_x19[2] = *unaff_x20;
  *unaff_x20 = 0;
  return;
}



/* Entry: 104be79d0; end: 104be79e3;  */

void FUN_104be79d0(void)

{
  FUN_104be79e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be79e4; end: 104be7a17;  */

void FUN_104be79e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e7da0;
  FUN_104bda93c(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)(param_1);
  return;
}



/* Entry: 104be7a18; end: 104be7a9b;  */

undefined8 * FUN_104be7a18(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  *param_1 = &PTR_FUN_1107e7df0;
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_24 = *(undefined4 *)(param_1[1] + 0x18);
  FUN_104be7ab4(0x11328ad18,&uStack_24);
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  func_0x000104be7d74(param_1 + 5);
  FUN_104be7db4(param_1 + 2);
  FUN_104be7e54(param_1 + 1);
  return param_1;
}



/* Entry: 104be7a9c; end: 104be7a9f;  */

undefined8 * FUN_104be7a9c(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  *param_1 = &PTR_FUN_1107e7df0;
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_24 = *(undefined4 *)(param_1[1] + 0x18);
  FUN_104be7ab4(0x11328ad18,&uStack_24);
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  func_0x000104be7d74(param_1 + 5);
  FUN_104be7db4(param_1 + 2);
  FUN_104be7e54(param_1 + 1);
  return param_1;
}



/* Entry: 104be7aa0; end: 104be7ab3;  */

void FUN_104be7aa0(void)

{
  FUN_104be7a18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be7ab4; end: 104be7ae3;  */

void FUN_104be7ab4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104be7ae4();
  if (lVar1 != 0) {
    FUN_104be7b84(param_1,lVar1);
  }
  return;
}



/* Entry: 104be7ae4; end: 104be7b83;  */

long FUN_104be7ae4(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar1 = *param_2;
    uVar7 = (ulong)uVar1;
    uVar8 = uVar6 - 1;
    uVar5 = (uint)uVar6;
    if ((uVar6 & uVar8) == 0) {
      uVar9 = (ulong)(uVar5 - 1 & uVar1);
    }
    else {
      uVar9 = uVar7;
      if (uVar6 <= uVar7) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar1 / uVar5;
        }
        uVar9 = (ulong)(uVar1 - uVar2 * uVar5);
      }
    }
    plVar4 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uVar10 = plVar4[1];
        if (uVar10 != uVar7) break;
        if (*(uint *)(plVar4 + 2) == uVar1) {
          return (long)plVar4;
        }
      }
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar3 * uVar6;
      }
    } while (uVar10 == uVar9);
  }
  return 0;
}



/* Entry: 104be7b84; end: 104be7bb3;  */

undefined8 FUN_104be7b84(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_104be7bb4(auStack_38);
  FUN_104be7cd0(auStack_38);
  return uVar1;
}



/* Entry: 104be7bb4; end: 104be7ccf;  */

void FUN_104be7bb4(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_104be7c68;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_104be7c68;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_104be7c68:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 104be7cd0; end: 104be7cf3;  */

undefined8 FUN_104be7cd0(undefined8 param_1)

{
  FUN_104be7cf4(param_1,0);
  return param_1;
}



/* Entry: 104be7cf4; end: 104be7d0b;  */

void FUN_104be7cf4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000104be7d4c(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 104be7d0c; end: 104be7d9f;  */

void FUN_104be7d0c(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000104be7d4c(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 104be7da0; end: 104be7db3;  */

void FUN_104be7da0(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104be7db4; end: 104be7e17;  */

undefined8 FUN_104be7db4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000104be7de0(&uStack_28);
  return param_1;
}



/* Entry: 104be7e18; end: 104be7e1f;  */

void FUN_104be7e18(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010069e7f8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_104bda388();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be7e20; end: 104be7e53;  */

void FUN_104be7e20(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010069e7f8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_104bda388();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be7e54; end: 104be7e7b;  */

undefined8 * FUN_104be7e54(undefined8 *param_1)

{
  FUN_104be7e7c(*param_1);
  return param_1;
}



/* Entry: 104be7e7c; end: 104be7e87;  */

void FUN_104be7e7c(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 104be7e88; end: 104be7f43;  */

void FUN_104be7e88(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plStack_60;
  undefined1 auStack_58 [24];
  long *plStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  func_0x0001003a8364();
  (**(code **)(*param_1 + 0x10))();
  uStack_38 = 0;
  plStack_40 = param_1;
  func_0x0001003a91d4("C++: {}");
  func_0x0001003a9204(auStack_58);
  func_0x0001003ac750(&plStack_40,plVar1,auStack_58);
  func_0x000104be8020();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  plStack_60 = plStack_40;
  plStack_40 = (long *)0x0;
  func_0x00010b99f560(auStack_58,&plStack_60);
  func_0x00010b99ff08(uVar2,auStack_58);
  FUN_104bda93c(auStack_58);
  func_0x0001003a8c94(&plStack_60);
  func_0x000104be7ffc();
  func_0x0001003a8c94(&plStack_40);
  return;
}



/* Entry: 104be7f44; end: 104be7f73;  */

void FUN_104be7f44(long param_1,long param_2)

{
  func_0x00010b99febc(*(undefined8 *)(param_2 + 0x18),param_1 + 0x10);
  func_0x000104be7ffc();
  return;
}



/* Entry: 104be7f74; end: 104be80af;  */

void FUN_104be7f74(void)

{
  return;
}



/* Entry: 104be80b0; end: 104be8a13;  */

void FUN_104be80b0(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  long *plVar8;
  long lVar9;
  undefined8 in_register_00005008;
  code *pcStack_4b8;
  undefined8 uStack_4b0;
  code *pcStack_4a0;
  undefined8 auStack_498 [2];
  code *pcStack_488;
  undefined8 auStack_480 [2];
  code *pcStack_470;
  undefined8 auStack_468 [2];
  code *pcStack_458;
  undefined8 auStack_450 [2];
  code *pcStack_440;
  undefined8 auStack_438 [2];
  code *pcStack_428;
  undefined8 auStack_420 [2];
  code *pcStack_410;
  undefined8 uStack_408;
  code *pcStack_3f8;
  undefined8 uStack_3f0;
  code *pcStack_3e0;
  undefined8 uStack_3d8;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  code *pcStack_3b0;
  undefined8 uStack_3a8;
  code *pcStack_398;
  undefined8 uStack_390;
  code *pcStack_380;
  undefined8 uStack_378;
  code *pcStack_368;
  undefined8 uStack_360;
  code *pcStack_350;
  undefined8 uStack_348;
  code *pcStack_338;
  undefined8 uStack_330;
  code *pcStack_320;
  undefined8 uStack_318;
  code *pcStack_308;
  undefined8 uStack_300;
  code *pcStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_290;
  undefined8 uStack_288;
  code *pcStack_278;
  undefined8 uStack_270;
  code *pcStack_260;
  undefined8 uStack_258;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  code *pcStack_220;
  undefined8 *puStack_218;
  byte abStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  
  func_0x000104bf0040();
  uStack_70 = extraout_x8;
  if ((bRam00000001136a37c8 & 1) == 0) {
    iVar6 = 0x136a37c8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_104bec658();
      FUN_104beb2e4(0);
      FUN_104beb2e4(1);
      func_0x00010b9941f8(&pcStack_248);
      func_0x00010b993b40(&pcStack_220,pcStack_248,0x113815d08);
      if ((abStack_210[0] & 1) == 0) goto LAB_104be88d8;
      func_0x0001003adcc0(0x1136a37e8,&pcStack_220);
      func_0x0001003b12dc(&pcStack_220);
      FUN_104bdc2fc(&pcStack_248);
      ___cxa_guard_release(0x1136a37c8);
    }
  }
  func_0x0001003b2110(auStack_230,0x1136a37f0);
  pcStack_248 = FUN_104be8b1c;
  func_0x000104befd18();
  uStack_240 = param_2;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10 != 0);
  }
  FUN_104be8a14(&pcStack_220,&pcStack_248);
  pcStack_260 = FUN_104be8e00;
  func_0x000104befd18();
  uStack_258 = param_2;
  if (extraout_x8_01 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_00 != 0);
  }
  FUN_104be8a14(abStack_210,&pcStack_260);
  pcStack_278 = FUN_104be8e68;
  func_0x000104befd18();
  uStack_270 = param_2;
  if (extraout_x8_02 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_01 != 0);
  }
  FUN_104be8a14(auStack_200,&pcStack_278);
  pcStack_290 = FUN_104be914c;
  func_0x000104befd18();
  uStack_288 = param_2;
  if (extraout_x8_03 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_02 != 0);
  }
  FUN_104be8a14(auStack_1f0,&pcStack_290);
  pcStack_2a8 = FUN_104be91f4;
  func_0x000104befd18();
  uStack_2a0 = param_2;
  if (extraout_x8_04 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_03 != 0);
  }
  FUN_104be8a14(auStack_1e0,&pcStack_2a8);
  pcStack_2c0 = FUN_104be95dc;
  func_0x000104befd18();
  uStack_2b8 = param_2;
  if (extraout_x8_05 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_04 != 0);
  }
  FUN_104be8a14(auStack_1d0,&pcStack_2c0);
  pcStack_2d8 = FUN_104be96a8;
  func_0x000104befd18();
  uStack_2d0 = param_2;
  if (extraout_x8_06 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_05 != 0);
  }
  FUN_104be8a14(auStack_1c0,&pcStack_2d8);
  pcStack_2f0 = FUN_104be9ab8;
  func_0x000104befd18();
  uStack_2e8 = param_2;
  if (extraout_x8_07 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_06 != 0);
  }
  FUN_104be8a14(auStack_1b0,&pcStack_2f0);
  pcStack_308 = FUN_104be9b10;
  func_0x000104befd18();
  uStack_300 = param_2;
  if (extraout_x8_08 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_07 != 0);
  }
  FUN_104be8a14(auStack_1a0,&pcStack_308);
  pcStack_320 = FUN_104be9b70;
  func_0x000104befd18();
  uStack_318 = param_2;
  if (extraout_x8_09 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_08 != 0);
  }
  FUN_104be8a14(auStack_190,&pcStack_320);
  pcStack_338 = FUN_104be9be4;
  func_0x000104befd18();
  uStack_330 = param_2;
  if (extraout_x8_10 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_09 != 0);
  }
  FUN_104be8a14(auStack_180,&pcStack_338);
  pcStack_350 = FUN_104be9c40;
  func_0x000104befd18();
  uStack_348 = param_2;
  if (extraout_x8_11 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_10 != 0);
  }
  FUN_104be8a14(auStack_170,&pcStack_350);
  pcStack_368 = FUN_104be9d38;
  func_0x000104befd18();
  uStack_360 = param_2;
  if (extraout_x8_12 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_11 != 0);
  }
  FUN_104be8a14(auStack_160,&pcStack_368);
  pcStack_380 = FUN_104be9df8;
  func_0x000104befd18();
  uStack_378 = param_2;
  if (extraout_x8_13 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_12 != 0);
  }
  FUN_104be8a14(auStack_150,&pcStack_380);
  pcStack_398 = FUN_104be9e90;
  func_0x000104befd18();
  uStack_390 = param_2;
  if (extraout_x8_14 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_13 != 0);
  }
  FUN_104be8a14(auStack_140,&pcStack_398);
  pcStack_3b0 = FUN_104be9ee8;
  func_0x000104befd18();
  uStack_3a8 = param_2;
  if (extraout_x8_15 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_14 != 0);
  }
  FUN_104be8a14(auStack_130,&pcStack_3b0);
  pcStack_3c8 = FUN_104be9f40;
  func_0x000104befd18();
  uStack_3c0 = param_2;
  if (extraout_x8_16 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_15 != 0);
  }
  FUN_104be8a14(auStack_120,&pcStack_3c8);
  pcStack_3e0 = FUN_104bea2c4;
  func_0x000104befd18();
  uStack_3d8 = param_2;
  if (extraout_x8_17 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_16 != 0);
  }
  FUN_104be8a14(auStack_110,&pcStack_3e0);
  pcStack_3f8 = FUN_104bea6cc;
  func_0x000104befd18();
  uStack_3f0 = param_2;
  if (extraout_x8_18 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_17 != 0);
  }
  FUN_104be8a14(auStack_100,&pcStack_3f8);
  pcStack_410 = FUN_104bea738;
  func_0x000104befd18();
  uStack_408 = param_2;
  if (extraout_x8_19 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_18 != 0);
  }
  FUN_104be8a14(auStack_f0,&pcStack_410);
  pcStack_428 = FUN_104bea794;
  func_0x000104befd18();
  auStack_420[0] = param_2;
  if (extraout_x8_20 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_19 != 0);
  }
  FUN_104be8a14(auStack_e0,&pcStack_428);
  pcStack_440 = FUN_104beaa78;
  func_0x000104befd18();
  auStack_438[0] = param_2;
  if (extraout_x8_21 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_20 != 0);
  }
  FUN_104be8a14(auStack_d0,&pcStack_440);
  pcStack_458 = FUN_104beaad8;
  func_0x000104befd18();
  auStack_450[0] = param_2;
  if (extraout_x8_22 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_21 != 0);
  }
  FUN_104be8a14(auStack_c0,&pcStack_458);
  pcStack_470 = FUN_104beab8c;
  func_0x000104befd18();
  auStack_468[0] = param_2;
  if (extraout_x8_23 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_22 != 0);
  }
  FUN_104be8a14(auStack_b0,&pcStack_470);
  pcStack_488 = FUN_104beae70;
  func_0x000104befd18();
  auStack_480[0] = param_2;
  if (extraout_x8_24 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_23 != 0);
  }
  FUN_104be8a14(auStack_a0,&pcStack_488);
  pcStack_4a0 = FUN_104beaef8;
  func_0x000104befd18();
  auStack_498[0] = param_2;
  if (extraout_x8_25 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_24 != 0);
  }
  FUN_104be8a14(auStack_90,&pcStack_4a0);
  pcStack_4b8 = FUN_104beb284;
  func_0x000104befd18();
  uStack_4b0 = param_2;
  if (extraout_x8_26 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_25 != 0);
  }
  FUN_104be8a14(auStack_80,&pcStack_4b8);
  FUN_104bdb9bc(auStack_228,auStack_230,&pcStack_220,0x1b);
  lVar9 = 0x1a0;
  do {
    func_0x00010b9a8d98((long)&pcStack_220 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar5 = lVar9 == -0x10;
  } while (!(bool)uVar5);
  func_0x000104bf0400();
  FUN_104bef3b8(auStack_498);
  FUN_104bef3b8(auStack_480);
  FUN_104bef3b8(auStack_468);
  FUN_104bef3b8(auStack_450);
  FUN_104bef3b8(auStack_438);
  FUN_104bef3b8(auStack_420);
  func_0x000104befcc8(&pcStack_410);
  func_0x000104befcc8(&pcStack_3f8);
  func_0x000104befcc8(&pcStack_3e0);
  func_0x000104befcc8(&pcStack_3c8);
  func_0x000104befcc8(&pcStack_3b0);
  func_0x000104befcc8(&pcStack_398);
  func_0x000104befcc8(&pcStack_380);
  func_0x000104befcc8(&pcStack_368);
  func_0x000104befcc8(&pcStack_350);
  func_0x000104befcc8(&pcStack_338);
  func_0x000104befcc8(&pcStack_320);
  func_0x000104befcc8(&pcStack_308);
  func_0x000104befcc8(&pcStack_2f0);
  func_0x000104befcc8(&pcStack_2d8);
  func_0x000104befcc8(&pcStack_2c0);
  func_0x000104befcc8(&pcStack_2a8);
  func_0x000104befcc8(&pcStack_290);
  func_0x000104befcc8(&pcStack_278);
  func_0x000104befcc8(&pcStack_260);
  func_0x000104befcc8(&pcStack_248);
  func_0x0001003b1f60(auStack_230);
  puVar7 = (undefined8 *)0x50;
  __Znwm();
  plVar8 = puVar7 + 1;
  *plVar8 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_1107e84c8;
  pcVar4 = (code *)(puVar7 + 3);
  func_0x00010b9ace44(pcVar4,auStack_228);
  puVar7[3] = &PTR_DAT_1107e8518;
  func_0x000104befd18();
  puVar7[9] = in_register_00005008;
  puVar7[8] = param_2;
  if (extraout_x8_27 != 0) {
    do {
      func_0x000104befac8();
    } while (extraout_w10_26 != 0);
  }
  if ((puVar7[5] == 0) || (uVar5 = *(long *)(puVar7[5] + 8) == -1, pcVar3 = pcVar4, (bool)uVar5)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pcStack_220 = pcVar4;
    puStack_218 = puVar7;
    func_0x0001003a8180(puVar7 + 4,&pcStack_220);
    func_0x0001003a90c4(&pcStack_220);
    pcStack_248 = pcVar4;
    pcVar3 = pcVar4;
    if (puVar7[5] != 0) goto LAB_104be8824;
  }
  else {
LAB_104be8824:
    do {
      pcStack_248 = pcVar3;
      func_0x000104befac8();
      pcVar3 = pcStack_248;
    } while (extraout_w10_27 != 0);
  }
  *param_1 = (long)pcVar4;
  FUN_104bef9cc(&pcStack_248);
  FUN_104bdbf78(auStack_228);
  func_0x000104befd94(uStack_70);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_104be88d8:
  FUN_104bdc2c8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104be88e0);
  (*pcVar4)();
}



/* Entry: 104be8a14; end: 104be8b1b;  */

void FUN_104be8a14(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  code *pcVar5;
  long lVar6;
  code **ppcVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 uVar8;
  code *extraout_x9;
  long extraout_x9_00;
  code *pcVar9;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *extraout_x9_04;
  long *plVar10;
  long extraout_x9_05;
  long extraout_x9_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  long extraout_x10_02;
  long extraout_x10_03;
  ulong extraout_x10_04;
  ulong extraout_x10_05;
  ulong uVar11;
  int extraout_w11;
  int extraout_w11_00;
  undefined4 extraout_w11_01;
  undefined4 extraout_var;
  long lVar12;
  ulong unaff_x26;
  ulong unaff_x27;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000104bf0040();
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  lVar12 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  pcVar5 = (code *)0x40;
  uStack_98 = uStack_b0;
  uStack_48 = extraout_x8;
  __Znwm();
  pcStack_78 = FUN_104bef810;
  ppuStack_70 = &PTR_FUN_1107e8498;
  uStack_60 = uStack_a8;
  uStack_68 = uStack_b0;
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_58 = lVar12;
  func_0x00010b9ac22c();
  pcStack_80 = pcVar5;
  func_0x000104bf01cc();
  pcVar9 = pcVar5 + 8;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
    if (bVar2) {
      *(long *)pcVar9 = *(long *)pcVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  ppcVar7 = &pcStack_78;
  pcStack_78 = pcVar5;
  func_0x00010b9a8ef8(param_1);
  FUN_104bda388(&pcStack_78);
  FUN_104bda3d0(&pcStack_80);
  func_0x000104bf0400();
  func_0x000104befd94(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppcVar7 == 0) {
    func_0x000104befcc0();
  }
  else {
    func_0x000104bf01cc();
    __ZdlPv(pcVar5);
  }
  func_0x000104befe10();
  func_0x000104bf00d4();
  func_0x000104befa0c();
  func_0x000104befa78();
  func_0x000104bf01a4();
  func_0x000104befc30();
  func_0x000104bf02b4();
  if (!(bool)in_CY || (bool)in_ZR) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    goto LAB_104be8da8;
  }
  func_0x000104befdfc();
  if (lStack_58 == 0) {
    lVar12 = 0;
    lVar6 = lStack_58;
  }
  else {
    lVar12 = lStack_58;
    func_0x000104befee8();
    func_0x000104befdf4();
    lVar6 = lVar12;
  }
  func_0x000104befd44();
  if (lVar12 != 0) {
    func_0x000104befe94();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000104befac8();
      } while (extraout_w10 != 0);
    }
    goto LAB_104be8da8;
  }
  func_0x000104befde0();
  func_0x000104bf0168();
  uVar8 = 0;
  if (extraout_x8_01 != 0) {
    do {
      func_0x000104befbc0();
      uVar8 = extraout_x8_02;
    } while (extraout_w11 != 0);
  }
  uStack_68 = uVar8;
  func_0x000104befb5c();
  func_0x000104befd34();
  func_0x000104befbdc();
  if (lVar6 == 0) {
LAB_104be8c1c:
    uVar3 = uStack_60;
    func_0x000104befe7c();
    func_0x000104befe84(&PTR_FUN_1107e7e28);
    if (uVar3 == 0) {
      pcVar9 = (code *)0x0;
LAB_104be8c70:
      pcStack_80 = pcVar9;
      func_0x000104beff68();
    }
    else {
      func_0x000104bf0380(&UNK_1107e7e68);
      pcVar9 = extraout_x9;
      if (extraout_x10 == 0) goto LAB_104be8c70;
      do {
        func_0x000104befc20();
      } while (extraout_w11_00 != 0);
      func_0x000104befdb4();
      if (extraout_x9_00 != 0) {
        do {
          func_0x000104befac8();
        } while (extraout_w10_01 != 0);
      }
    }
    func_0x000104bf0504();
    func_0x000104befe70();
    func_0x000104befd44();
    func_0x000104befb80(&UNK_110873d98);
    func_0x000104bf04ec();
    if (uVar3 != 0) {
      func_0x000104beff5c();
      if ((bool)in_ZR) {
        func_0x000104bf0344();
      }
      else {
        func_0x000104bf035c();
        if (!(bool)in_CY || (bool)in_ZR) {
          func_0x000104bf0350();
        }
      }
      func_0x000104bf0338();
      uVar4 = in_ZR;
      plVar10 = extraout_x9_01;
      if (extraout_x9_01 != (long *)0x0) {
        do {
          while( true ) {
            in_ZR = uVar4;
            if (*plVar10 == 0) goto LAB_104be8d00;
            func_0x000104bf032c();
            if (!(bool)in_ZR) break;
            func_0x000104bf0320();
            uVar4 = 0;
            plVar10 = extraout_x9_03;
            if ((bool)in_ZR) goto LAB_104be8d94;
          }
          plVar10 = extraout_x9_02;
          if ((uVar3 & extraout_x8_03) == 0) {
            uVar11 = extraout_x10_00 & extraout_x8_03;
          }
          else {
            uVar11 = extraout_x10_00;
            if (uVar3 <= extraout_x10_00) {
              func_0x000104beff50();
              plVar10 = extraout_x9_04;
              uVar11 = extraout_x10_01;
            }
          }
          in_NG = (long)(uVar11 - unaff_x27) < 0;
          in_ZR = uVar11 == unaff_x27;
          uVar4 = in_ZR;
        } while ((bool)in_ZR);
      }
    }
LAB_104be8d00:
    func_0x000104befe60();
    func_0x000104befb14();
    do {
      func_0x000104befac8();
    } while (extraout_w10_02 != 0);
    func_0x000104befc8c();
    if ((uVar3 == 0) || (func_0x000104befecc(), (bool)in_NG)) {
      func_0x000104befba8();
      in_ZR = uVar3 == 3;
      func_0x000104befa44();
      func_0x000104befbf0();
      func_0x000104befebc();
      if ((bool)in_ZR) {
        func_0x000104bf02e4();
      }
      else {
        in_ZR = uVar3 == unaff_x26;
        if (uVar3 <= unaff_x26) {
          func_0x000104bf02d8();
        }
      }
    }
    func_0x000104bf0030();
    if (extraout_x10_02 == 0) {
      func_0x000104befae4();
      if (extraout_x10_03 != 0) {
        func_0x000104befeac();
        uVar8 = extraout_x8_04;
        lVar12 = extraout_x9_05;
        if ((bool)in_ZR) {
          uVar11 = extraout_x10_04 & CONCAT44(extraout_var,extraout_w11_01);
        }
        else {
          uVar11 = extraout_x10_04;
          if (uVar3 <= extraout_x10_04) {
            func_0x000104beff50();
            uVar8 = extraout_x8_05;
            lVar12 = extraout_x9_06;
            uVar11 = extraout_x10_05;
          }
        }
        *(undefined8 *)(lVar12 + uVar11 * 8) = uVar8;
      }
    }
    else {
      func_0x000104befc10();
    }
    func_0x000104befb68();
LAB_104be8d94:
    func_0x000104beffc4();
    func_0x000104bec6e8();
  }
  else {
    func_0x000104befc60();
    if (lStack_58 == 0) {
      func_0x000104befdec();
      goto LAB_104be8c1c;
    }
    lVar12 = lStack_58;
    func_0x000104befedc();
    func_0x000104befdd0();
    lVar6 = 0;
    if ((lVar12 != 0) && (lStack_50 != 0)) {
      do {
        func_0x000104befac8();
        lVar6 = lStack_50;
      } while (extraout_w10_00 != 0);
    }
    func_0x000104befd24(lVar6);
    func_0x000104bec6e8();
    func_0x000104befdec();
  }
  func_0x000104befb50();
  func_0x000104beffbc();
  func_0x000104befea4();
LAB_104be8da8:
  func_0x000104befc7c(*(undefined8 *)(*ppcVar7 + 0x10));
  FUN_104be31bc(&uStack_b0);
  func_0x000104befcd0();
  func_0x000104befb98();
  return;
}



/* Entry: 104be8b1c; end: 104be8dff;  */

void FUN_104be8b1c(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar3;
  long extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *plVar4;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  long extraout_x10_02;
  long extraout_x10_03;
  ulong extraout_x10_04;
  ulong extraout_x10_05;
  ulong uVar5;
  int extraout_w11;
  int extraout_w11_00;
  undefined4 extraout_w11_01;
  undefined4 extraout_var;
  long lVar6;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  
  func_0x000104bf00d4();
  func_0x000104befa0c();
  func_0x000104befa78();
  func_0x000104bf01a4();
  func_0x000104befc30();
  func_0x000104bf02b4();
  if (!(bool)in_CY || (bool)in_ZR) goto LAB_104be8da8;
  func_0x000104befdfc();
  if (in_stack_00000058 == 0) {
    lVar6 = 0;
    lVar2 = in_stack_00000058;
  }
  else {
    lVar6 = in_stack_00000058;
    func_0x000104befee8();
    func_0x000104befdf4();
    lVar2 = lVar6;
  }
  func_0x000104befd44();
  if (lVar6 != 0) {
    func_0x000104befe94();
    if (extraout_x8 != 0) {
      do {
        func_0x000104befac8();
      } while (extraout_w10 != 0);
    }
    goto LAB_104be8da8;
  }
  func_0x000104befde0();
  func_0x000104bf0168();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000104befbc0();
    } while (extraout_w11 != 0);
  }
  func_0x000104befb5c();
  func_0x000104befd34();
  func_0x000104befbdc();
  if (lVar2 == 0) {
LAB_104be8c1c:
    func_0x000104befe7c();
    func_0x000104befe84(&PTR_FUN_1107e7e28);
    if ((in_stack_00000050 == 0) || (func_0x000104bf0380(&UNK_1107e7e68), extraout_x10 == 0)) {
      func_0x000104beff68();
    }
    else {
      do {
        func_0x000104befc20();
      } while (extraout_w11_00 != 0);
      func_0x000104befdb4();
      if (extraout_x9 != 0) {
        do {
          func_0x000104befac8();
        } while (extraout_w10_01 != 0);
      }
    }
    func_0x000104bf0504();
    func_0x000104befe70();
    func_0x000104befd44();
    func_0x000104befb80(&UNK_110873d98);
    func_0x000104bf04ec();
    if (in_stack_00000050 != 0) {
      func_0x000104beff5c();
      if ((bool)in_ZR) {
        func_0x000104bf0344();
      }
      else {
        func_0x000104bf035c();
        if (!(bool)in_CY || (bool)in_ZR) {
          func_0x000104bf0350();
        }
      }
      func_0x000104bf0338();
      uVar1 = in_ZR;
      plVar4 = extraout_x9_00;
      if (extraout_x9_00 != (long *)0x0) {
        do {
          while( true ) {
            in_ZR = uVar1;
            if (*plVar4 == 0) goto LAB_104be8d00;
            func_0x000104bf032c();
            if (!(bool)in_ZR) break;
            func_0x000104bf0320();
            uVar1 = 0;
            plVar4 = extraout_x9_02;
            if ((bool)in_ZR) goto LAB_104be8d94;
          }
          plVar4 = extraout_x9_01;
          if ((in_stack_00000050 & extraout_x8_01) == 0) {
            uVar5 = extraout_x10_00 & extraout_x8_01;
          }
          else {
            uVar5 = extraout_x10_00;
            if (in_stack_00000050 <= extraout_x10_00) {
              func_0x000104beff50();
              plVar4 = extraout_x9_03;
              uVar5 = extraout_x10_01;
            }
          }
          in_NG = (long)(uVar5 - unaff_x27) < 0;
          in_ZR = uVar5 == unaff_x27;
          uVar1 = in_ZR;
        } while ((bool)in_ZR);
      }
    }
LAB_104be8d00:
    func_0x000104befe60();
    func_0x000104befb14();
    do {
      func_0x000104befac8();
    } while (extraout_w10_02 != 0);
    func_0x000104befc8c();
    if ((in_stack_00000050 == 0) || (func_0x000104befecc(), (bool)in_NG)) {
      func_0x000104befba8();
      in_ZR = in_stack_00000050 == 3;
      func_0x000104befa44();
      func_0x000104befbf0();
      func_0x000104befebc();
      if ((bool)in_ZR) {
        func_0x000104bf02e4();
      }
      else {
        in_ZR = in_stack_00000050 == unaff_x26;
        if (in_stack_00000050 <= unaff_x26) {
          func_0x000104bf02d8();
        }
      }
    }
    func_0x000104bf0030();
    if (extraout_x10_02 == 0) {
      func_0x000104befae4();
      if (extraout_x10_03 != 0) {
        func_0x000104befeac();
        uVar3 = extraout_x8_02;
        lVar6 = extraout_x9_04;
        if ((bool)in_ZR) {
          uVar5 = extraout_x10_04 & CONCAT44(extraout_var,extraout_w11_01);
        }
        else {
          uVar5 = extraout_x10_04;
          if (in_stack_00000050 <= extraout_x10_04) {
            func_0x000104beff50();
            uVar3 = extraout_x8_03;
            lVar6 = extraout_x9_05;
            uVar5 = extraout_x10_05;
          }
        }
        *(undefined8 *)(lVar6 + uVar5 * 8) = uVar3;
      }
    }
    else {
      func_0x000104befc10();
    }
    func_0x000104befb68();
LAB_104be8d94:
    func_0x000104beffc4();
    func_0x000104bec6e8();
  }
  else {
    func_0x000104befc60();
    if (in_stack_00000058 == 0) {
      func_0x000104befdec();
      goto LAB_104be8c1c;
    }
    func_0x000104befedc();
    func_0x000104befdd0();
    lVar6 = 0;
    if ((in_stack_00000058 != 0) && (in_stack_00000060 != 0)) {
      do {
        func_0x000104befac8();
        lVar6 = in_stack_00000060;
      } while (extraout_w10_00 != 0);
    }
    func_0x000104befd24(lVar6);
    func_0x000104bec6e8();
    func_0x000104befdec();
  }
  func_0x000104befb50();
  func_0x000104beffbc();
  func_0x000104befea4();
LAB_104be8da8:
  func_0x000104befc7c(*(undefined8 *)(*param_2 + 0x10));
  FUN_104be31bc();
  func_0x000104befcd0();
  func_0x000104befb98();
  return;
}



/* Entry: 104be8e00; end: 104be8e67;  */

void FUN_104be8e00(void)

{
  long *unaff_x21;
  
  func_0x000104bf0434();
  func_0x000104bef9f4();
  func_0x000104befaac();
  func_0x000104befa30();
  FUN_104bedaa0(&stack0x00000008);
  func_0x000104befc6c(*(undefined8 *)(*unaff_x21 + 0x18));
  FUN_104be32dc(&stack0x00000008);
  func_0x000104befcd0();
  func_0x000104bf04a0();
  return;
}



/* Entry: 104be8e68; end: 104be914b;  */

void FUN_104be8e68(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar3;
  long extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *plVar4;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  long extraout_x10_02;
  long extraout_x10_03;
  ulong extraout_x10_04;
  ulong extraout_x10_05;
  ulong uVar5;
  int extraout_w11;
  int extraout_w11_00;
  undefined4 extraout_w11_01;
  undefined4 extraout_var;
  long lVar6;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  
  func_0x000104bf00d4();
  func_0x000104befa0c();
  func_0x000104befa78();
  func_0x000104befd80();
  FUN_104bede38();
  func_0x000104bf02b4();
  if (!(bool)in_CY || (bool)in_ZR) goto LAB_104be90f4;
  func_0x000104befdfc();
  if (in_stack_00000058 == 0) {
    lVar6 = 0;
    lVar2 = in_stack_00000058;
  }
  else {
    lVar6 = in_stack_00000058;
    func_0x000104befee8();
    func_0x000104befdf4();
    lVar2 = lVar6;
  }
  func_0x000104befd44();
  if (lVar6 != 0) {
    func_0x000104befe94();
    if (extraout_x8 != 0) {
      do {
        func_0x000104befac8();
      } while (extraout_w10 != 0);
    }
    goto LAB_104be90f4;
  }
  func_0x000104befde0();
  func_0x000104bf0168();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000104befbc0();
    } while (extraout_w11 != 0);
  }
  func_0x000104befb5c();
  func_0x000104befd34();
  func_0x000104befbdc();
  if (lVar2 == 0) {
LAB_104be8f68:
    func_0x000104befe7c();
    func_0x000104befe84(&PTR_FUN_1107e7f60);
    if ((in_stack_00000050 == 0) || (func_0x000104bf0380(&UNK_1107e7fa0), extraout_x10 == 0)) {
      func_0x000104beff68();
    }
    else {
      do {
        func_0x000104befc20();
      } while (extraout_w11_00 != 0);
      func_0x000104befdb4();
      if (extraout_x9 != 0) {
        do {
          func_0x000104befac8();
        } while (extraout_w10_01 != 0);
      }
    }
    func_0x000104bf0504();
    func_0x000104befe70();
    func_0x000104befd44();
    func_0x000104befb80(&UNK_110873eb0);
    func_0x000104bf04ec();
    if (in_stack_00000050 != 0) {
      func_0x000104beff5c();
      if ((bool)in_ZR) {
        func_0x000104bf0344();
      }
      else {
        func_0x000104bf035c();
        if (!(bool)in_CY || (bool)in_ZR) {
          func_0x000104bf0350();
        }
      }
      func_0x000104bf0338();
      uVar1 = in_ZR;
      plVar4 = extraout_x9_00;
      if (extraout_x9_00 != (long *)0x0) {
        do {
          while( true ) {
            in_ZR = uVar1;
            if (*plVar4 == 0) goto LAB_104be904c;
            func_0x000104bf032c();
            if (!(bool)in_ZR) break;
            func_0x000104bf0320();
            uVar1 = 0;
            plVar4 = extraout_x9_02;
            if ((bool)in_ZR) goto LAB_104be90e0;
          }
          plVar4 = extraout_x9_01;
          if ((in_stack_00000050 & extraout_x8_01) == 0) {
            uVar5 = extraout_x10_00 & extraout_x8_01;
          }
          else {
            uVar5 = extraout_x10_00;
            if (in_stack_00000050 <= extraout_x10_00) {
              func_0x000104beff50();
              plVar4 = extraout_x9_03;
              uVar5 = extraout_x10_01;
            }
          }
          in_NG = (long)(uVar5 - unaff_x27) < 0;
          in_ZR = uVar5 == unaff_x27;
          uVar1 = in_ZR;
        } while ((bool)in_ZR);
      }
    }
LAB_104be904c:
    func_0x000104befe60();
    func_0x000104befb14();
    do {
      func_0x000104befac8();
    } while (extraout_w10_02 != 0);
    func_0x000104befc8c();
    if ((in_stack_00000050 == 0) || (func_0x000104befecc(), (bool)in_NG)) {
      func_0x000104befba8();
      in_ZR = in_stack_00000050 == 3;
      func_0x000104befa44();
      func_0x000104befbf0();
      func_0x000104befebc();
      if ((bool)in_ZR) {
        func_0x000104bf02e4();
      }
      else {
        in_ZR = in_stack_00000050 == unaff_x26;
        if (in_stack_00000050 <= unaff_x26) {
          func_0x000104bf02d8();
        }
      }
    }
    func_0x000104bf0030();
    if (extraout_x10_02 == 0) {
      func_0x000104befae4();
      if (extraout_x10_03 != 0) {
        func_0x000104befeac();
        uVar3 = extraout_x8_02;
        lVar6 = extraout_x9_04;
        if ((bool)in_ZR) {
          uVar5 = extraout_x10_04 & CONCAT44(extraout_var,extraout_w11_01);
        }
        else {
          uVar5 = extraout_x10_04;
          if (in_stack_00000050 <= extraout_x10_04) {
            func_0x000104beff50();
            uVar3 = extraout_x8_03;
            lVar6 = extraout_x9_05;
            uVar5 = extraout_x10_05;
          }
        }
        *(undefined8 *)(lVar6 + uVar5 * 8) = uVar3;
      }
    }
    else {
      func_0x000104befc10();
    }
    func_0x000104befb68();
LAB_104be90e0:
    func_0x000104beffc4();
    FUN_104bedf00();
  }
  else {
    func_0x000104befc60();
    if (in_stack_00000058 == 0) {
      func_0x000104befdec();
      goto LAB_104be8f68;
    }
    func_0x000104befedc();
    func_0x000104befdd0();
    lVar6 = 0;
    if ((in_stack_00000058 != 0) && (in_stack_00000060 != 0)) {
      do {
        func_0x000104befac8();
        lVar6 = in_stack_00000060;
      } while (extraout_w10_00 != 0);
    }
    func_0x000104befd24(lVar6);
    FUN_104bedf00();
    func_0x000104befdec();
  }
  func_0x000104befb50();
  func_0x000104beffbc();
  func_0x000104befea4();
LAB_104be90f4:
  func_0x000104befc7c(*(undefined8 *)(*param_2 + 0x20));
  FUN_104be33d4();
  func_0x000104bf01dc();
  func_0x000104befb98();
  return;
}



/* Entry: 104be914c; end: 104be91f3;  */

void FUN_104be914c(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auStack_78 [40];
  
  FUN_104bef9f4();
  func_0x000104befa78();
  uVar1 = param_1;
  func_0x000104befad8();
  func_0x000104befc3c();
  func_0x000104befb00();
  FUN_104bedf58(param_1);
  func_0x000104bedf88(uVar1);
  FUN_104bedaa0(auStack_78);
  func_0x000104bf0184(*(undefined8 *)(*unaff_x20 + 0x28));
  FUN_104be32dc(auStack_78);
  func_0x000104befcd0();
  func_0x000104befb98();
  return;
}



/* Entry: 104be91f4; end: 104be95db;  */

void FUN_104be91f4(long *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar7;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar8;
  ulong extraout_x9;
  long extraout_x9_00;
  long *plVar9;
  long *extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long lVar10;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long extraout_x10;
  ulong uVar11;
  ulong extraout_x10_00;
  long extraout_x10_01;
  ulong uVar12;
  ulong extraout_x10_02;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar13;
  undefined8 *unaff_x21;
  undefined8 unaff_x24;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [48];
  ulong auStack_a0 [2];
  uint uStack_8c;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  FUN_104bef9f4();
  plVar4 = param_1;
  func_0x000104befaac();
  func_0x000104befa9c();
  plVar5 = plVar4;
  func_0x000104befc3c();
  plVar13 = (long *)*unaff_x21;
  func_0x000105284090(auStack_d0,param_1);
  func_0x00010b9a9608();
  func_0x00010b9a9518(plVar4);
  uVar6 = (uint)*(byte *)(plVar5 + 1);
  uVar2 = (int)(uVar6 - 1) < 0;
  uVar3 = uVar6 == 1;
  if (uVar6 < 2) {
    uStack_e0 = 0;
    lStack_d8 = 0;
    goto LAB_104be955c;
  }
  func_0x000104bf019c(&uStack_78);
  if (uStack_78 == 0) {
    uVar12 = 0;
    uVar14 = uStack_78;
  }
  else {
    uVar12 = uStack_78;
    func_0x000104befee8();
    func_0x000104befdf4();
    uVar14 = uVar12;
  }
  func_0x000104beff74();
  if (uVar12 != 0) {
    lStack_d8 = *(long *)(uVar12 + 0x30);
    uStack_e0 = *(ulong *)(uVar12 + 0x28);
    if (*(long *)(uVar12 + 0x30) != 0) {
      do {
        func_0x000104befac8();
      } while (extraout_w10 != 0);
    }
    goto LAB_104be955c;
  }
  func_0x000104bf019c(&uStack_80);
  uStack_88 = 0;
  if (*(long *)(uStack_80 + 0x20) != 0) {
    do {
      func_0x000104befbc0();
      uStack_88 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x000104befb5c();
  uStack_8c = *(uint *)(uStack_80 + 0x18);
  func_0x000104bf0128();
  uVar12 = 0;
  if (uVar14 == 0) {
LAB_104be9358:
    func_0x000104befe7c();
    uVar14 = uVar12;
    func_0x000104beff14(&PTR_FUN_1107e7ff8);
    if (uStack_80 == 0) {
      auStack_a0[0] = 0;
LAB_104be93b8:
      func_0x000104bf051c();
    }
    else {
      func_0x000104bf0528(&UNK_1107e8038);
      auStack_a0[0] = extraout_x9;
      if (extraout_x10 == 0) goto LAB_104be93b8;
      do {
        func_0x000104befc20();
      } while (extraout_w11_00 != 0);
      auStack_a0[0] = uStack_80;
      func_0x000104bf051c();
      if (extraout_x9_00 != 0) {
        do {
          func_0x000104befac8();
        } while (extraout_w10_01 != 0);
      }
    }
    uStack_78 = uStack_80;
    func_0x000104bf03f4();
    func_0x000104beff74();
    *(undefined ***)(uVar14 + 0x18) = &PTR_DAT_110874340;
    *(undefined ***)(uVar12 + 0x20) = &PTR_DAT_110874370;
    func_0x000104befea4();
    uVar6 = uStack_8c;
    uVar17 = (ulong)uStack_8c;
    uVar16 = plVar5[1];
    uVar14 = uStack_80;
    if (uVar16 != 0) {
      func_0x000104bf04f8();
      uVar15 = (uint)uVar16;
      if ((bool)uVar3) {
        uVar14 = (ulong)(uVar15 - 1 & uVar6);
      }
      else {
        uVar2 = (long)(uVar16 - uVar17) < 0;
        uVar14 = uVar17;
        if (uVar16 <= uVar17) {
          uVar1 = 0;
          if (uVar15 != 0) {
            uVar1 = uVar6 / uVar15;
          }
          uVar14 = (ulong)(uVar6 - uVar1 * uVar15);
        }
      }
      plVar9 = *(long **)(*plVar5 + uVar14 * 8);
      uVar7 = extraout_x8_00;
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_104be947c;
            uVar11 = plVar9[1];
            if (uVar11 != uVar17) break;
            uVar2 = (int)(*(uint *)(plVar9 + 2) - uVar6) < 0;
            if (*(uint *)(plVar9 + 2) == uVar6) goto LAB_104be9540;
          }
          if ((uVar16 & uVar7) == 0) {
            uVar11 = uVar11 & uVar7;
          }
          else if (uVar16 <= uVar11) {
            func_0x000104bf04e0();
            uVar7 = extraout_x8_01;
            plVar9 = extraout_x9_01;
            uVar11 = extraout_x10_00;
          }
          uVar2 = (long)(uVar11 - uVar14) < 0;
        } while (uVar11 == uVar14);
      }
    }
LAB_104be947c:
    func_0x000104befe60();
    func_0x000104bf00b0();
    do {
      func_0x000104befac8();
    } while (extraout_w10_02 != 0);
    func_0x000104beff08(plVar5[3]);
    if ((uVar16 == 0) || (func_0x000104befefc(), (bool)uVar2)) {
      func_0x000104bf0308();
      uVar2 = uVar16 == 3;
      func_0x000104befa44();
      func_0x000104bf0230();
      uVar16 = *(ulong *)(uVar12 + 0x28);
      func_0x000104bf04f8();
      if ((bool)uVar2) {
        uVar14 = (ulong)((int)uVar16 - 1U & uVar6);
      }
      else {
        uVar14 = uVar17;
        if (uVar16 <= uVar17) {
          uVar12 = 0;
          if (uVar16 != 0) {
            uVar12 = uVar17 / uVar16;
          }
          uVar14 = uVar17 - uVar12 * uVar16;
        }
      }
    }
    if (*(long *)(*plVar5 + uVar14 * 8) == 0) {
      func_0x000104befc00(uStack_78);
      func_0x000104bf04d4();
      if (extraout_x10_01 != 0) {
        uVar12 = *(ulong *)(extraout_x10_01 + 8);
        uVar8 = extraout_x8_02;
        lVar10 = extraout_x9_02;
        if ((uVar16 & uVar16 - 1) == 0) {
          uVar12 = uVar12 & uVar16 - 1;
        }
        else if (uVar16 <= uVar12) {
          func_0x000104bf04e0();
          uVar8 = extraout_x8_03;
          lVar10 = extraout_x9_03;
          uVar12 = extraout_x10_02;
        }
        *(undefined8 *)(lVar10 + uVar12 * 8) = uVar8;
      }
    }
    else {
      func_0x000104befc10();
    }
    func_0x000104bf0018();
LAB_104be9540:
    func_0x000104bf04ac();
    FUN_104bedfb8();
  }
  else {
    func_0x000104befdd8(&uStack_78);
    if (uStack_78 == 0) {
      func_0x000104bf0158();
      uVar12 = uStack_78;
      goto LAB_104be9358;
    }
    uVar12 = uStack_78;
    func_0x000104befedc();
    func_0x000104befdd0();
    lStack_d8 = 0;
    if ((uVar12 != 0) && (lStack_70 != 0)) {
      do {
        func_0x000104befac8();
        lStack_d8 = lStack_70;
      } while (extraout_w10_00 != 0);
    }
    auStack_a0[0] = 0;
    auStack_a0[1] = 0;
    uStack_e0 = uVar12;
    FUN_104bedfb8(auStack_a0);
    func_0x000104bf0158();
  }
  func_0x000104befb50();
  FUN_104bdbf78(&uStack_88);
  FUN_104be7e54(&uStack_80);
LAB_104be955c:
  (**(code **)(*plVar13 + 0x30))(plVar13,auStack_d0,unaff_x24,plVar4,&uStack_e0);
  FUN_104be35c8(&uStack_e0);
  func_0x000100100fec(auStack_d0);
  func_0x000104befb98();
  return;
}



/* Entry: 104be95dc; end: 104be96a7;  */

void FUN_104be95dc(undefined8 param_1,long *param_2)

{
  undefined1 auStack_448 [16];
  undefined1 auStack_438 [904];
  undefined1 auStack_b0 [96];
  
  func_0x000104befa0c();
  func_0x000104befa78();
  func_0x000104befa9c();
  func_0x000104bf01a4();
  func_0x000105291140(auStack_b0);
  func_0x00010528c104(auStack_438);
  FUN_104bee010(auStack_448);
  func_0x000104bf03a8(*(undefined8 *)(*param_2 + 0x38));
  FUN_104be36f0(auStack_448);
  FUN_104bee3a8(auStack_438);
  FUN_104bee768(auStack_b0);
  func_0x000104befb98();
  return;
}



/* Entry: 104be96a8; end: 104be9ab7;  */

void FUN_104be96a8(long *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar8;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar9;
  ulong extraout_x9;
  long extraout_x9_00;
  long *plVar10;
  long *extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long lVar11;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long extraout_x10;
  ulong uVar12;
  ulong extraout_x10_00;
  long extraout_x10_01;
  ulong uVar13;
  ulong extraout_x10_02;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar14;
  undefined8 *unaff_x21;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  ulong auStack_a0 [2];
  uint uStack_8c;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  FUN_104bef9f4();
  plVar4 = param_1;
  func_0x000104befaac();
  func_0x000104befa9c();
  plVar5 = plVar4;
  func_0x000104befc3c();
  plVar6 = plVar5;
  func_0x000104bf03b0();
  plVar14 = (long *)*unaff_x21;
  FUN_104bede38(auStack_b8,param_1);
  FUN_104bdbf60(auStack_d0);
  func_0x00010b9a9518(plVar4);
  func_0x00010b9a9518(plVar5);
  uVar7 = (uint)*(byte *)(plVar6 + 1);
  uVar2 = (int)(uVar7 - 1) < 0;
  uVar3 = uVar7 == 1;
  if (uVar7 < 2) {
    uStack_e0 = 0;
    lStack_d8 = 0;
    goto LAB_104be9a24;
  }
  func_0x000104bf019c(&uStack_78);
  if (uStack_78 == 0) {
    uVar13 = 0;
    uVar15 = uStack_78;
  }
  else {
    uVar13 = uStack_78;
    func_0x000104befee8();
    func_0x000104befdf4();
    uVar15 = uVar13;
  }
  func_0x000104beff74();
  if (uVar13 != 0) {
    lStack_d8 = *(long *)(uVar13 + 0x30);
    uStack_e0 = *(ulong *)(uVar13 + 0x28);
    if (*(long *)(uVar13 + 0x30) != 0) {
      do {
        func_0x000104befac8();
      } while (extraout_w10 != 0);
    }
    goto LAB_104be9a24;
  }
  func_0x000104bf019c(&uStack_80);
  uStack_88 = 0;
  if (*(long *)(uStack_80 + 0x20) != 0) {
    do {
      func_0x000104befbc0();
      uStack_88 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x000104befb5c();
  uStack_8c = *(uint *)(uStack_80 + 0x18);
  func_0x000104bf0128();
  uVar13 = 0;
  if (uVar15 == 0) {
LAB_104be9820:
    func_0x000104befe7c();
    uVar15 = uVar13;
    func_0x000104beff14(&PTR_FUN_1107e8130);
    if (uStack_80 == 0) {
      auStack_a0[0] = 0;
LAB_104be9880:
      func_0x000104bf051c();
    }
    else {
      func_0x000104bf0528(&UNK_1107e8170);
      auStack_a0[0] = extraout_x9;
      if (extraout_x10 == 0) goto LAB_104be9880;
      do {
        func_0x000104befc20();
      } while (extraout_w11_00 != 0);
      auStack_a0[0] = uStack_80;
      func_0x000104bf051c();
      if (extraout_x9_00 != 0) {
        do {
          func_0x000104befac8();
        } while (extraout_w10_01 != 0);
      }
    }
    uStack_78 = uStack_80;
    func_0x000104bf03f4();
    func_0x000104beff74();
    *(undefined ***)(uVar15 + 0x18) = &PTR_DAT_110873d20;
    *(undefined ***)(uVar13 + 0x20) = &PTR_DAT_110873d50;
    func_0x000104befea4();
    uVar7 = uStack_8c;
    uVar18 = (ulong)uStack_8c;
    uVar17 = plVar6[1];
    uVar15 = uStack_80;
    if (uVar17 != 0) {
      func_0x000104bf04f8();
      uVar16 = (uint)uVar17;
      if ((bool)uVar3) {
        uVar15 = (ulong)(uVar16 - 1 & uVar7);
      }
      else {
        uVar2 = (long)(uVar17 - uVar18) < 0;
        uVar15 = uVar18;
        if (uVar17 <= uVar18) {
          uVar1 = 0;
          if (uVar16 != 0) {
            uVar1 = uVar7 / uVar16;
          }
          uVar15 = (ulong)(uVar7 - uVar1 * uVar16);
        }
      }
      plVar10 = *(long **)(*plVar6 + uVar15 * 8);
      uVar8 = extraout_x8_00;
      if (plVar10 != (long *)0x0) {
        do {
          while( true ) {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) goto LAB_104be9944;
            uVar12 = plVar10[1];
            if (uVar12 != uVar18) break;
            uVar2 = (int)(*(uint *)(plVar10 + 2) - uVar7) < 0;
            if (*(uint *)(plVar10 + 2) == uVar7) goto LAB_104be9a08;
          }
          if ((uVar17 & uVar8) == 0) {
            uVar12 = uVar12 & uVar8;
          }
          else if (uVar17 <= uVar12) {
            func_0x000104bf04e0();
            uVar8 = extraout_x8_01;
            plVar10 = extraout_x9_01;
            uVar12 = extraout_x10_00;
          }
          uVar2 = (long)(uVar12 - uVar15) < 0;
        } while (uVar12 == uVar15);
      }
    }
LAB_104be9944:
    func_0x000104befe60();
    func_0x000104bf00b0();
    do {
      func_0x000104befac8();
    } while (extraout_w10_02 != 0);
    func_0x000104beff08(plVar6[3]);
    if ((uVar17 == 0) || (func_0x000104befefc(), (bool)uVar2)) {
      func_0x000104bf0308();
      uVar2 = uVar17 == 3;
      func_0x000104befa44();
      func_0x000104bf0230();
      uVar17 = *(ulong *)(uVar13 + 0x28);
      func_0x000104bf04f8();
      if ((bool)uVar2) {
        uVar15 = (ulong)((int)uVar17 - 1U & uVar7);
      }
      else {
        uVar15 = uVar18;
        if (uVar17 <= uVar18) {
          uVar13 = 0;
          if (uVar17 != 0) {
            uVar13 = uVar18 / uVar17;
          }
          uVar15 = uVar18 - uVar13 * uVar17;
        }
      }
    }
    if (*(long *)(*plVar6 + uVar15 * 8) == 0) {
      func_0x000104befc00(uStack_78);
      func_0x000104bf04d4();
      if (extraout_x10_01 != 0) {
        uVar13 = *(ulong *)(extraout_x10_01 + 8);
        uVar9 = extraout_x8_02;
        lVar11 = extraout_x9_02;
        if ((uVar17 & uVar17 - 1) == 0) {
          uVar13 = uVar13 & uVar17 - 1;
        }
        else if (uVar17 <= uVar13) {
          func_0x000104bf04e0();
          uVar9 = extraout_x8_03;
          lVar11 = extraout_x9_03;
          uVar13 = extraout_x10_02;
        }
        *(undefined8 *)(lVar11 + uVar13 * 8) = uVar9;
      }
    }
    else {
      func_0x000104befc10();
    }
    func_0x000104bf0018();
LAB_104be9a08:
    func_0x000104bf04ac();
    func_0x000104bee91c();
  }
  else {
    func_0x000104befdd8(&uStack_78);
    if (uStack_78 == 0) {
      func_0x000104bf0158();
      uVar13 = uStack_78;
      goto LAB_104be9820;
    }
    uVar13 = uStack_78;
    func_0x000104befedc();
    func_0x000104befdd0();
    lStack_d8 = 0;
    if ((uVar13 != 0) && (lStack_70 != 0)) {
      do {
        func_0x000104befac8();
        lStack_d8 = lStack_70;
      } while (extraout_w10_00 != 0);
    }
    auStack_a0[0] = 0;
    auStack_a0[1] = 0;
    uStack_e0 = uVar13;
    func_0x000104bee91c(auStack_a0);
    func_0x000104bf0158();
  }
  func_0x000104befb50();
  FUN_104bdbf78(&uStack_88);
  FUN_104be7e54(&uStack_80);
LAB_104be9a24:
  (**(code **)(*plVar14 + 0x40))(plVar14,auStack_b8,auStack_d0,plVar4,plVar5,&uStack_e0);
  FUN_104be37e8(&uStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  func_0x0001005fb56c(auStack_b8);
  func_0x000104befb98();
  return;
}



/* Entry: 104be9ab8; end: 104be9b0f;  */

void FUN_104be9ab8(void)

{
  long *unaff_x21;
  
  func_0x000104bf0434();
  func_0x000104bef9f4();
  func_0x000104befaac();
  func_0x000104befa30();
  func_0x000104befbd0();
  func_0x000104befc6c(*(undefined8 *)(*unaff_x21 + 0x48));
  func_0x000104befd10();
  func_0x000104befcd0();
  func_0x000104bf04a0();
  return;
}



/* Entry: 104be9b10; end: 104be9b6f;  */

void FUN_104be9b10(void)

{
  long *unaff_x21;
  
  func_0x000104bf0434();
  func_0x000104bef9f4();
  func_0x000104befa88();
  func_0x000104befab8();
  func_0x000104befa30();
  func_0x00010b9a9518();
  func_0x000104befbd0();
  func_0x000104befcd8(*(undefined8 *)(*unaff_x21 + 0x50));
  func_0x000104befd10();
  func_0x000104befcd0();
  func_0x000104bf013c();
  return;
}



/* Entry: 104be9b70; end: 104be9be3;  */

void FUN_104be9b70(void)

{
  long *unaff_x20;
  
  func_0x000104bf0434();
  func_0x000104bef9f4();
  func_0x000104befa78();
  func_0x000104befa9c();
  func_0x000104befb00();
  FUN_104bedf58();
  func_0x000104befe28();
  func_0x000104befe18(*(undefined8 *)(*unaff_x20 + 0x58));
  func_0x000104befd10();
  func_0x000104befcd0();
  func_0x000104befb98();
  return;
}



/* Entry: 104be9be4; end: 104be9c3f;  */

void FUN_104be9be4(void)

{
  long *unaff_x21;
  
  func_0x000104bf0434();
  func_0x000104bef9f4();
  func_0x000104befa88();
  func_0x000104befab8();
  func_0x000104befa30();
  func_0x000104bf0194();
  func_0x000104befbd0();
  func_0x000104befcec(*(undefined8 *)(*unaff_x21 + 0x60));
  func_0x000104befd10();
  func_0x000104befcd0();
  func_0x000104bf013c();
  return;
}



/* Entry: 104be9c40; end: 104be9d37;  */

void FUN_104be9c40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *unaff_x21;
  undefined1 auStack_278 [464];
  undefined1 auStack_a8 [48];
  undefined1 auStack_78 [24];
  
  FUN_104bef9f4();
  uVar1 = param_1;
  func_0x000104befaac();
  uVar2 = uVar1;
  func_0x000104befad8();
  uVar3 = uVar2;
  func_0x000104befc3c();
  func_0x000104bf03b0();
  plVar4 = (long *)*unaff_x21;
  func_0x00010529dcb8(auStack_78,param_1);
  func_0x00010b9a9588(uVar1);
  func_0x00010529904c(auStack_a8,uVar2);
  func_0x000105296090(auStack_278,uVar3);
  func_0x000104befe28();
  func_0x000104bf0184(*(undefined8 *)(*plVar4 + 0x68));
  func_0x000104befd10();
  func_0x000104bee6b8(auStack_278);
  func_0x000104bf03a0();
  func_0x000100100fec(auStack_78);
  func_0x000104befb98();
  return;
}



/* Entry: 104be9d38; end: 104be9df7;  */

void FUN_104be9d38(undefined8 param_1)

{
  long *plVar1;
  undefined8 *unaff_x21;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [24];
  
  FUN_104bef9f4();
  func_0x000104befa78();
  func_0x000104befa9c();
  func_0x000104befc3c();
  plVar1 = (long *)*unaff_x21;
  func_0x00010529dcb8(auStack_68);
  func_0x000104bf0398();
  func_0x00010529904c(auStack_98,param_1);
  func_0x000104befe28();
  func_0x000104befe18(*(undefined8 *)(*plVar1 + 0x70));
  func_0x000104befd10();
  func_0x000104bf03a0();
  func_0x000100100fec(auStack_68);
  func_0x000104befb98();
  return;
}



/* Entry: 104be9df8; end: 104be9e8f;  */

void FUN_104be9df8(undefined8 param_1)

{
  undefined8 *unaff_x19;
  long *unaff_x21;
  
  FUN_104bef9f4();
  func_0x000104befaac();
  func_0x000104befab8();
  func_0x000104befc3c();
  func_0x000104befa30();
  func_0x000104bf0194();
  func_0x00010b9a9518(param_1);
  func_0x000104befbd0();
  (**(code **)(*unaff_x21 + 0x78))();
  func_0x000104befd10();
  func_0x000104befcd0();
  *(undefined2 *)(unaff_x19 + 1) = 1;
  *unaff_x19 = 0;
  return;
}



/* Entry: 104be9e90; end: 104be9ee7;  */

void FUN_104be9e90(void)

{
  long *unaff_x21;
  
  func_0x000104bf0434();
  func_0x000104bef9f4();
  func_0x000104befaac();
  func_0x000104befa30();
  func_0x000104befbd0();
  func_0x000104befc6c(*(undefined8 *)(*unaff_x21 + 0x80));
  func_0x000104befd10();
  func_0x000104befcd0();
  func_0x000104bf04a0();
  return;
}



/* Entry: 104be9ee8; end: 104be9f3f;  */

void FUN_104be9ee8(void)

{
  long *unaff_x21;
  
  func_0x000104bf0434();
  func_0x000104bef9f4();
  func_0x000104befaac();
  func_0x000104befa30();
  func_0x000104befbd0();
  func_0x000104befc6c(*(undefined8 *)(*unaff_x21 + 0x88));
  func_0x000104befd10();
  func_0x000104befcd0();
  func_0x000104bf04a0();
  return;
}


