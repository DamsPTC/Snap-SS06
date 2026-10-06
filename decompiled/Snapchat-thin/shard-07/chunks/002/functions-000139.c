/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10529ca5c; end: 10529caf7;  */

undefined8 FUN_10529ca5c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818c28 & 1) == 0) {
    iVar4 = 0x13818c28;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_10529caf8();
      lStack_20 = lRam0000000113818c48;
      if (lRam0000000113818c48 != 0) {
        piVar1 = (int *)(lRam0000000113818c48 + 8);
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
      func_0x0001003ad9a4(0x113818c18,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113818c28);
    }
  }
  return 0x113818c18;
}



/* Entry: 10529caf8; end: 10529cb4b;  */

void FUN_10529caf8(void)

{
  int iVar1;
  
  if ((bRam0000000113818c50 & 1) == 0) {
    iVar1 = 0x13818c50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818c48,"_djinni_interface_SyncConversationCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818c50);
      return;
    }
  }
  return;
}



/* Entry: 10529cb4c; end: 10529cbc3;  */

undefined1 * FUN_10529cb4c(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [16];
  undefined4 auStack_88 [2];
  undefined2 uStack_80;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [24];
  
  func_0x00010529cca4();
  FUN_1052842ac(auStack_38,param_2);
  uVar2 = 0;
  func_0x000104be6a78(auStack_48,param_1 + 8,0,auStack_38,1);
  puVar1 = auStack_48;
  func_0x00010b9a8d98();
  func_0x00010529cc9c();
  func_0x00010529cc7c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010529cc9c();
    __Unwind_Resume(puVar1);
    func_0x00010529cca4();
    uStack_80 = 4;
    auStack_88[0] = uVar2;
    func_0x000104be6a78(auStack_98,puVar1 + 8,1,auStack_88,1);
    puVar1 = auStack_98;
    func_0x00010b9a8d98();
    func_0x00010529cc9c();
    func_0x00010529cc7c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010529cc9c();
      __Unwind_Resume(puVar1);
      func_0x00010529ccb4();
      return puVar1;
    }
  }
  return puVar1;
}



/* Entry: 10529cbc4; end: 10529cc2f;  */

undefined1 * FUN_10529cbc4(long param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_48 [16];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  
  auStack_38[0] = param_2;
  func_0x00010529cca4();
  uStack_30 = 4;
  func_0x000104be6a78(auStack_48,param_1 + 8,1,auStack_38,1);
  puVar1 = auStack_48;
  func_0x00010b9a8d98();
  func_0x00010529cc9c();
  func_0x00010529cc7c();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010529cc9c();
  __Unwind_Resume(puVar1);
  func_0x00010529ccb4();
  return puVar1;
}



/* Entry: 10529cc30; end: 10529cc6f;  */

void FUN_10529cc30(void)

{
  func_0x00010529ccb4();
  return;
}



/* Entry: 10529cc70; end: 10529cccb;  */

undefined8 * FUN_10529cc70(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  *param_1 = &PTR_DAT_1107e7df0;
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_24 = *(undefined4 *)(param_1[1] + 0x18);
  func_0x000104be7ab4(0x11328ad18,&uStack_24);
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  func_0x000104be7d74(param_1 + 5);
  func_0x000104be7db4(param_1 + 2);
  func_0x000104be7e54(param_1 + 1);
  return param_1;
}



/* Entry: 10529cccc; end: 10529ce1b;  */

long * FUN_10529cccc(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  char *pcVar6;
  long *plVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *puVar10;
  long lVar11;
  long lStack_1b8;
  undefined2 uStack_1b0;
  long lStack_1a8;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 uStack_58;
  undefined2 uStack_50;
  undefined1 auStack_48 [8];
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010529d544();
  uStack_38 = extraout_x8;
  FUN_10529ce1c();
  func_0x0001003b2110(auStack_98,0x113818c60);
  FUN_10529cfd0(auStack_88,param_2);
  FUN_105282834(auStack_78,param_2 + 0x28);
  FUN_105282834(auStack_68,param_2 + 0x40);
  uStack_58 = *(undefined1 *)(param_2 + 0x58);
  uStack_50 = 7;
  auStack_48[0] = *(undefined1 *)(param_2 + 0x59);
  uStack_40 = 7;
  func_0x000104bdb9bc(&lStack_90,auStack_98,auStack_88,5);
  lVar11 = 0x40;
  do {
    func_0x00010b9a8d98(auStack_88 + lVar11);
    lVar11 = lVar11 + -0x10;
    uVar3 = lVar11 == -0x10;
  } while (!(bool)uVar3);
  func_0x0001003b1f60(auStack_98);
  plVar7 = &lStack_90;
  func_0x00010b9a8f60(param_1);
  plVar4 = &lStack_90;
  func_0x000104bdbf78();
  func_0x00010529d530(uStack_38);
  if ((bool)uVar3) {
    return plVar4;
  }
  ___stack_chk_fail();
  puVar5 = auStack_48;
  lVar11 = -0x50;
  do {
    func_0x00010b9a8d98(puVar5);
    iVar8 = (int)plVar7;
    puVar5 = puVar5 + -0x10;
    lVar11 = lVar11 + 0x10;
    uVar3 = lVar11 == 0;
  } while (!(bool)uVar3);
  puVar5 = auStack_98;
  func_0x0001003b1f60();
  func_0x00010529d560();
  pcStack_a8 = FUN_10529ce1c;
  lStack_c0 = lVar11;
  plStack_b8 = plVar4;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010529d544();
  uStack_c8 = extraout_x8_00;
  if ((bRam0000000113818c68 & 1) == 0) {
    puVar5 = (undefined1 *)0x113818c68;
    ___cxa_guard_acquire();
    if ((int)puVar5 != 0) {
      func_0x0001003a83dc(auStack_148,"_djinni_record_SyncFeedMetadata");
      pcVar6 = "metrics";
      func_0x0001003a83dc(auStack_150,"metrics");
      FUN_10529d0a4();
      func_0x0001003b1b50(auStack_140,auStack_150,pcVar6);
      pcVar6 = "conversationsSyncFailed";
      func_0x0001003a83dc(auStack_158,"conversationsSyncFailed");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_128,auStack_158,pcVar6);
      pcVar6 = "conversationsSyncSuccess";
      func_0x0001003a83dc(auStack_160,"conversationsSyncSuccess");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_110,auStack_160,pcVar6);
      pcVar6 = "paginationWindowIsEmpty";
      func_0x0001003a83dc(auStack_168,"paginationWindowIsEmpty");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_f8,auStack_168,pcVar6);
      pcVar6 = "paginateFullFeed";
      func_0x0001003a83dc(auStack_170,"paginateFullFeed");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_e0,auStack_170,pcVar6);
      uVar9 = 0;
      func_0x000104bdbd44(0x113818c58,auStack_148,0,auStack_140,5);
      lVar11 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_140 + lVar11);
        iVar8 = (int)uVar9;
        lVar11 = lVar11 + -0x18;
        uVar3 = lVar11 == -0x18;
      } while (!(bool)uVar3);
      func_0x0001003a8c94(auStack_170);
      func_0x0001003a8c94(auStack_168);
      func_0x0001003a8c94(auStack_160);
      func_0x0001003a8c94(auStack_158);
      func_0x0001003a8c94(auStack_150);
      func_0x0001003a8c94(auStack_148);
      puVar5 = (undefined1 *)0x113818c68;
      ___cxa_guard_release();
    }
  }
  func_0x00010529d530(uStack_c8);
  if ((bool)uVar3) {
    return (long *)0x113818c58;
  }
  ___stack_chk_fail();
  if (iVar8 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  FUN_10529d1b8(&lStack_1a8);
  puVar10 = (undefined8 *)(puVar5 + 0x10);
  while (puVar10 = (undefined8 *)*puVar10, puVar10 != (undefined8 *)0x0) {
    uStack_1b0 = 4;
    lStack_1b8 = CONCAT44(lStack_1b8._4_4_,*(undefined4 *)(puVar10 + 2));
    func_0x00010529d578(lStack_1a8);
    func_0x00010529d570();
    lStack_1b8 = puVar10[3];
    uStack_1b0 = 5;
    func_0x00010529d578(lStack_1a8);
    func_0x00010529d570();
  }
  if ((lStack_1a8 != 0) && (*(long *)(lStack_1a8 + 0x10) != 0)) {
    plVar7 = (long *)(*(long *)(lStack_1a8 + 0x10) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_1b8 = lStack_1a8;
  func_0x00010b9a8f78(extraout_x8_01,&lStack_1b8);
  plVar7 = &lStack_1b8;
  func_0x000104bddedc(plVar7);
  func_0x00010529d568();
  return plVar7;
}



/* Entry: 10529ce1c; end: 10529cfcf;  */

long * FUN_10529ce1c(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar5;
  long *plVar6;
  long lStack_118;
  undefined2 uStack_110;
  long lStack_108;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  func_0x00010529d544();
  uStack_28 = extraout_x8;
  if ((bRam0000000113818c68 & 1) == 0) {
    param_1 = 0x113818c68;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_a8,"_djinni_record_SyncFeedMetadata");
      pcVar3 = "metrics";
      func_0x0001003a83dc(auStack_b0,"metrics");
      FUN_10529d0a4();
      func_0x0001003b1b50(auStack_a0,auStack_b0,pcVar3);
      pcVar3 = "conversationsSyncFailed";
      func_0x0001003a83dc(auStack_b8,"conversationsSyncFailed");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_88,auStack_b8,pcVar3);
      pcVar3 = "conversationsSyncSuccess";
      func_0x0001003a83dc(auStack_c0,"conversationsSyncSuccess");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_70,auStack_c0,pcVar3);
      pcVar3 = "paginationWindowIsEmpty";
      func_0x0001003a83dc(auStack_c8,"paginationWindowIsEmpty");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_58,auStack_c8,pcVar3);
      pcVar3 = "paginateFullFeed";
      func_0x0001003a83dc(auStack_d0,"paginateFullFeed");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_40,auStack_d0,pcVar3);
      uVar4 = 0;
      func_0x000104bdbd44(0x113818c58,auStack_a8,0,auStack_a0,5);
      lVar5 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_a0 + lVar5);
        param_2 = (int)uVar4;
        lVar5 = lVar5 + -0x18;
        in_ZR = lVar5 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      func_0x0001003a8c94(auStack_b8);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      param_1 = 0x113818c68;
      ___cxa_guard_release();
    }
  }
  func_0x00010529d530(uStack_28);
  if ((bool)in_ZR) {
    return (long *)0x113818c58;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  FUN_10529d1b8(&lStack_108);
  plVar6 = (long *)(param_1 + 0x10);
  while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
    uStack_110 = 4;
    lStack_118 = CONCAT44(lStack_118._4_4_,*(undefined4 *)(plVar6 + 2));
    func_0x00010529d578(lStack_108);
    func_0x00010529d570();
    lStack_118 = plVar6[3];
    uStack_110 = 5;
    func_0x00010529d578(lStack_108);
    func_0x00010529d570();
  }
  if ((lStack_108 != 0) && (*(long *)(lStack_108 + 0x10) != 0)) {
    plVar6 = (long *)(*(long *)(lStack_108 + 0x10) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_118 = lStack_108;
  func_0x00010b9a8f78(extraout_x8_00,&lStack_118);
  plVar6 = &lStack_118;
  func_0x000104bddedc(plVar6);
  func_0x00010529d568();
  return plVar6;
}



/* Entry: 10529cfd0; end: 10529d0a3;  */

void FUN_10529cfd0(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lStack_48;
  undefined2 uStack_40;
  long lStack_38;
  
  FUN_10529d1b8(&lStack_38);
  plVar3 = (long *)(param_2 + 0x10);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    uStack_40 = 4;
    lStack_48 = CONCAT44(lStack_48._4_4_,*(undefined4 *)(plVar3 + 2));
    func_0x00010529d578(lStack_38);
    func_0x00010529d570();
    lStack_48 = plVar3[3];
    uStack_40 = 5;
    func_0x00010529d578(lStack_38);
    func_0x00010529d570();
  }
  if ((lStack_38 != 0) && (*(long *)(lStack_38 + 0x10) != 0)) {
    plVar3 = (long *)(*(long *)(lStack_38 + 0x10) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_48 = lStack_38;
  func_0x00010b9a8f78(param_1,&lStack_48);
  func_0x000104bddedc(&lStack_48);
  func_0x00010529d568();
  return;
}



/* Entry: 10529d0a4; end: 10529d113;  */

undefined8 FUN_10529d0a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((bRam00000001130cc338 & 1) == 0) {
    uVar1 = 0x1130cc338;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      FUN_10529d4d8();
      uVar2 = uVar1;
      func_0x000104bef5f8();
      func_0x00010b9912a0(0x1130cc328,uVar1,uVar2);
      ___cxa_guard_release(0x1130cc338);
    }
  }
  return 0x1130cc328;
}



/* Entry: 10529d114; end: 10529d183;  */

void FUN_10529d114(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    ___dynamic_cast(lVar1,&PTR_DAT_110d7ebe8,&PTR_DAT_110d7e5d0,0);
  }
  func_0x00010529d154();
  *param_1 = lVar1;
  return;
}



/* Entry: 10529d184; end: 10529d1ab;  */

undefined8 * FUN_10529d184(undefined8 *param_1)

{
  FUN_10529d1ac(*param_1);
  return param_1;
}



/* Entry: 10529d1ac; end: 10529d1b7;  */

void FUN_10529d1ac(long param_1)

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



/* Entry: 10529d1b8; end: 10529d1fb;  */

void FUN_10529d1b8(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x00010529d544();
  uStack_28 = extraout_x8;
  FUN_10529d1fc(auStack_38);
  *param_1 = auStack_38[0];
  func_0x00010529d530(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_10529d1fc;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10529d21c(&uStack_51);
  return;
}



/* Entry: 10529d1fc; end: 10529d21b;  */

void FUN_10529d1fc(void)

{
  undefined1 uStack_11;
  
  FUN_10529d21c(&uStack_11);
  return;
}



/* Entry: 10529d21c; end: 10529d2ab;  */

void FUN_10529d21c(undefined8 param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar5 = auStack_40;
  func_0x00010529d544();
  uStack_28 = extraout_x8;
  FUN_10529d2c8(auStack_40,1);
  puVar6 = puStack_30;
  *puStack_30 = &PTR_FUN_110874390;
  puStack_30[1] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_110d7e5a0;
  puStack_30[7] = 0;
  puStack_30[8] = 0;
  puStack_30[6] = 0;
  puStack_30 = (undefined8 *)0x0;
  FUN_10529d2ac(param_1,puVar6 + 3);
  FUN_10529d3c8();
  func_0x00010529d530(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = puVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_10529d2ac;
    lStack_58 = extraout_x8_00[1];
    if (lStack_58 != 0) {
      plVar1 = (long *)(lStack_58 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_60 = puVar5;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x0001003a8180(puVar2,&puStack_60);
    func_0x0001003a90c4(&puStack_60);
    return;
  }
  return;
}



/* Entry: 10529d2ac; end: 10529d2c7;  */

void FUN_10529d2ac(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x0001003a8180(lVar2,&lStack_20);
    func_0x0001003a90c4(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10529d2c8; end: 10529d2ef;  */

long FUN_10529d2c8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10529d2f0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10529d2f0; end: 10529d31f;  */

void FUN_10529d2f0(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110874390;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10529d320; end: 10529d323;  */

void FUN_10529d320(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110874390;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10529d324; end: 10529d337;  */

void FUN_10529d324(void)

{
  func_0x00010529d348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10529d338; end: 10529d35b;  */

void FUN_10529d338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010529d340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10529d35c; end: 10529d3c7;  */

void FUN_10529d35c(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x0001003a8180(param_2,&uStack_20);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10529d3c8; end: 10529d3d7;  */

void FUN_10529d3c8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10529d3d8; end: 10529d43b;  */

long FUN_10529d3d8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010529d414();
    lVar2 = uVar1 + 0x10;
  }
  else {
    lVar2 = param_1;
    FUN_10529d43c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x10;
}



/* Entry: 10529d43c; end: 10529d4d7;  */

long FUN_10529d43c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  plVar1 = param_1;
  FUN_105277228(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_1052772ac(auStack_48,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
  func_0x00010b9a8fa8(lStack_38,param_2);
  lStack_38 = lStack_38 + 0x10;
  FUN_105277268(param_1,auStack_48);
  lVar2 = param_1[1];
  func_0x00010527744c(auStack_48);
  return lVar2;
}



/* Entry: 10529d4d8; end: 10529d52f;  */

undefined8 FUN_10529d4d8(void)

{
  int iVar1;
  
  if ((bRam00000001130cc350 & 1) == 0) {
    iVar1 = 0x130cc350;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc340);
      ___cxa_guard_release(0x1130cc350);
    }
  }
  return 0x1130cc340;
}



/* Entry: 10529d530; end: 10529d583;  */

void FUN_10529d530(void)

{
  return;
}



/* Entry: 10529d584; end: 10529d6b3;  */

undefined1 * FUN_10529d584(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined2 uStack_70;
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined1 auStack_48 [8];
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529d6b4();
  func_0x0001003b2110(auStack_88,0x113818c78);
  auStack_78[0] = *param_2;
  uStack_70 = 7;
  FUN_10529cccc(auStack_68,param_2 + 8);
  uStack_58 = *(undefined4 *)(param_2 + 0x68);
  uStack_50 = 4;
  auStack_48[0] = param_2[0x6c];
  uStack_40 = 7;
  func_0x000104bdb9bc(auStack_80,auStack_88,auStack_78,4);
  lVar8 = 0x30;
  do {
    func_0x00010b9a8d98(auStack_78 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar4 = auStack_80;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_80;
  func_0x000104bdbf78();
  FUN_10529d840(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x40;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_98 = FUN_10529d6b4;
  uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_b0 = lVar8;
  puStack_a8 = puVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818c80 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818c80;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_120,"_djinni_record_SyncFeedUpdateMetadata");
      pcVar5 = "resetFeed";
      func_0x0001003a83dc(auStack_128,"resetFeed");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_118,auStack_128,pcVar5);
      pcVar5 = "syncMetadata";
      func_0x0001003a83dc(auStack_130,"syncMetadata");
      FUN_10529ce1c();
      func_0x0001003b1b50(auStack_100,auStack_130,pcVar5);
      pcVar5 = "analyticsScenario";
      func_0x0001003a83dc(auStack_138,"analyticsScenario");
      FUN_105287f4c();
      func_0x0001003b1b50(auStack_e8,auStack_138,pcVar5);
      pcVar5 = "queryTriggered";
      func_0x0001003a83dc(auStack_140,"queryTriggered");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_d0,auStack_140,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818c70,auStack_120,0,auStack_118,4);
      lVar8 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_118 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_140);
      func_0x0001003a8c94(auStack_138);
      func_0x0001003a8c94(auStack_130);
      func_0x0001003a8c94(auStack_128);
      func_0x0001003a8c94(auStack_120);
      puVar4 = (undefined1 *)0x113818c80;
      ___cxa_guard_release(0x113818c80);
    }
  }
  FUN_10529d840(uStack_b8);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818c70;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 10529d6b4; end: 10529d83f;  */

undefined8 FUN_10529d6b4(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818c80 & 1) == 0) {
    param_1 = 0x113818c80;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_90,"_djinni_record_SyncFeedUpdateMetadata");
      pcVar1 = "resetFeed";
      func_0x0001003a83dc(auStack_98,"resetFeed");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_88,auStack_98,pcVar1);
      pcVar1 = "syncMetadata";
      func_0x0001003a83dc(auStack_a0,"syncMetadata");
      FUN_10529ce1c();
      func_0x0001003b1b50(auStack_70,auStack_a0,pcVar1);
      pcVar1 = "analyticsScenario";
      func_0x0001003a83dc(auStack_a8,"analyticsScenario");
      FUN_105287f4c();
      func_0x0001003b1b50(auStack_58,auStack_a8,pcVar1);
      pcVar1 = "queryTriggered";
      func_0x0001003a83dc(auStack_b0,"queryTriggered");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_40,auStack_b0,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818c70,auStack_90,0,auStack_88,4);
      lVar3 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_88 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      func_0x0001003a8c94(auStack_a0);
      func_0x0001003a8c94(auStack_98);
      func_0x0001003a8c94(auStack_90);
      param_1 = 0x113818c80;
      ___cxa_guard_release(0x113818c80);
    }
  }
  FUN_10529d840(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818c70;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10529d840; end: 10529d853;  */

void FUN_10529d840(void)

{
  return;
}



/* Entry: 10529d854; end: 10529d91f;  */

undefined1 * FUN_10529d854(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529d920();
  func_0x0001003b2110(auStack_48,0x113818c90);
  FUN_10527ecb8(auStack_38,param_2);
  func_0x000104bdb9bc(auStack_40,auStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar3 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar1 = auStack_40;
  func_0x000104bdbf78(puVar1);
  FUN_10529da04(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar1);
  pcStack_58 = FUN_10529d920;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818c98 & 1) == 0) {
    puVar1 = (undefined1 *)0x113818c98;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_ThumbnailIndexList");
      pcVar2 = "indices";
      func_0x0001003a83dc(auStack_90,"indices");
      FUN_10527ed64();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar2);
      iVar3 = 0;
      func_0x000104bdbd44(0x113818c88,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      puVar1 = (undefined1 *)0x113818c98;
      ___cxa_guard_release(0x113818c98);
    }
  }
  FUN_10529da04(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x113818c88;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar1;
}



/* Entry: 10529d920; end: 10529da03;  */

undefined8 FUN_10529d920(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818c98 & 1) == 0) {
    param_1 = 0x113818c98;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_ThumbnailIndexList");
      pcVar1 = "indices";
      func_0x0001003a83dc(auStack_40,"indices");
      FUN_10527ed64();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x113818c88,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = 0x113818c98;
      ___cxa_guard_release(0x113818c98);
    }
  }
  FUN_10529da04(uStack_18);
  if ((bool)in_ZR) {
    return 0x113818c88;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10529da04; end: 10529da17;  */

void FUN_10529da04(void)

{
  return;
}



/* Entry: 10529da18; end: 10529da6f;  */

undefined1  [16] FUN_10529da18(void)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  lVar1 = lStack_28 + 0x18;
  func_0x00010b9a9588(lVar1);
  uVar2 = lStack_28 + 0x28;
  func_0x00010b9a9518(uVar2);
  func_0x000104bdbf78(&lStack_28);
  auVar3._8_8_ = uVar2 & 0xffffffff;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 10529da70; end: 10529db73;  */

undefined1 * FUN_10529da70(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529db74();
  func_0x0001003b2110(auStack_68,0x113818ca8);
  uStack_58 = *param_2;
  uStack_50 = 5;
  uStack_48 = *(undefined4 *)(param_2 + 1);
  uStack_40 = 4;
  func_0x000104bdb9bc(auStack_60,auStack_68,&uStack_58,2);
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)&uStack_58 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar3 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_10529dca4(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)&uStack_58 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_10529db74;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &uStack_58;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818cb0 & 1) == 0) {
    puVar3 = (undefined1 *)0x113818cb0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_TranscriptionInfo");
      pcVar4 = "mediaListId";
      func_0x0001003a83dc(auStack_d8,"mediaListId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar4);
      pcVar4 = "mediaReferenceListIndex";
      func_0x0001003a83dc(auStack_e0,"mediaReferenceListIndex");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113818ca0,auStack_d0,0,auStack_c8,2);
      lVar7 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar3 = (undefined1 *)0x113818cb0;
      ___cxa_guard_release(0x113818cb0);
    }
  }
  FUN_10529dca4(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818ca0;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 10529db74; end: 10529dca3;  */

undefined8 FUN_10529db74(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818cb0 & 1) == 0) {
    param_1 = 0x113818cb0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_TranscriptionInfo");
      pcVar1 = "mediaListId";
      func_0x0001003a83dc(auStack_68,"mediaListId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "mediaReferenceListIndex";
      func_0x0001003a83dc(auStack_70,"mediaReferenceListIndex");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818ca0,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x113818cb0;
      ___cxa_guard_release(0x113818cb0);
    }
  }
  FUN_10529dca4(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818ca0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10529dca4; end: 10529dcb7;  */

void FUN_10529dca4(void)

{
  return;
}



/* Entry: 10529dcb8; end: 10529dd1b;  */

void FUN_10529dcb8(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  func_0x000108b8099c(&uStack_40,lStack_28 + 0x18);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 10529dd1c; end: 10529dddf;  */

undefined1 * FUN_10529dd1c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529dde0();
  func_0x0001003b2110(auStack_48,0x113818cc0);
  func_0x000108b80a1c(auStack_38,param_2);
  func_0x000104bdb9bc(auStack_40,auStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar3 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar1 = auStack_40;
  func_0x000104bdbf78(puVar1);
  FUN_10529dec4(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar1);
  pcStack_58 = FUN_10529dde0;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818cc8 & 1) == 0) {
    puVar1 = (undefined1 *)0x113818cc8;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_UUID");
      pcVar2 = "id";
      func_0x0001003a83dc(auStack_90,"id");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar2);
      iVar3 = 0;
      func_0x000104bdbd44(0x113818cb8,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      puVar1 = (undefined1 *)0x113818cc8;
      ___cxa_guard_release(0x113818cc8);
    }
  }
  FUN_10529dec4(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x113818cb8;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar1;
}



/* Entry: 10529dde0; end: 10529dec3;  */

undefined8 FUN_10529dde0(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818cc8 & 1) == 0) {
    param_1 = 0x113818cc8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_UUID");
      pcVar1 = "id";
      func_0x0001003a83dc(auStack_40,"id");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x113818cb8,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = 0x113818cc8;
      ___cxa_guard_release(0x113818cc8);
    }
  }
  FUN_10529dec4(uStack_18);
  if ((bool)in_ZR) {
    return 0x113818cb8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10529dec4; end: 10529ded7;  */

void FUN_10529dec4(void)

{
  return;
}



/* Entry: 10529ded8; end: 10529dfef;  */

undefined8 * FUN_10529ded8(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined8 auStack_c8 [3];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529dff0();
  func_0x0001003b2110(auStack_68,0x113818cd8);
  FUN_10529dd1c(auStack_58,param_2);
  FUN_10529dd1c(auStack_48,param_2 + 0x18);
  puVar7 = (undefined8 *)0x2;
  func_0x000104bdb9bc(&uStack_60,auStack_68,auStack_58);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar6 = &uStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = &uStack_60;
  func_0x000104bdbf78();
  func_0x00010529e164(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_78 = FUN_10529dff0;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818ce0 & 1) == 0) {
    puVar4 = (undefined8 *)0x113818ce0;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_UserIdToConversationId");
      pcVar5 = "userId";
      func_0x0001003a83dc(auStack_d8,"userId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "conversationId";
      func_0x0001003a83dc(auStack_e0,"conversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      puVar7 = auStack_c8;
      puVar6 = (undefined8 *)0x0;
      func_0x000104bdbd44(0x113818cd0,auStack_d0,0,puVar7,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c((long)auStack_c8 + lVar8);
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar4 = (undefined8 *)0x113818ce0;
      ___cxa_guard_release();
    }
  }
  func_0x00010529e164(uStack_98);
  if ((bool)uVar1) {
    return (undefined8 *)0x113818cd0;
  }
  ___stack_chk_fail();
  if ((int)puVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  uVar9 = *puVar6;
  puVar4[1] = puVar6[1];
  *puVar4 = uVar9;
  puVar4[2] = puVar6[2];
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  uVar9 = *puVar7;
  puVar4[4] = puVar7[1];
  puVar4[3] = uVar9;
  puVar4[5] = puVar7[2];
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  return puVar4;
}



/* Entry: 10529dff0; end: 10529e11f;  */

undefined8 * FUN_10529dff0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 auStack_58 [3];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818ce0 & 1) == 0) {
    param_1 = (undefined8 *)0x113818ce0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_UserIdToConversationId");
      pcVar1 = "userId";
      func_0x0001003a83dc(auStack_68,"userId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "conversationId";
      func_0x0001003a83dc(auStack_70,"conversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      param_3 = auStack_58;
      param_2 = (undefined8 *)0x0;
      func_0x000104bdbd44(0x113818cd0,auStack_60,0,param_3,2);
      lVar2 = 0x18;
      do {
        func_0x0001003b1c5c((long)auStack_58 + lVar2);
        lVar2 = lVar2 + -0x18;
        in_ZR = lVar2 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = (undefined8 *)0x113818ce0;
      ___cxa_guard_release();
    }
  }
  func_0x00010529e164(uStack_28);
  if ((bool)in_ZR) {
    return (undefined8 *)0x113818cd0;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar3 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar3;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return param_1;
}



/* Entry: 10529e120; end: 10529e177;  */

void FUN_10529e120(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 10529e178; end: 10529e28f;  */

undefined8 * FUN_10529e178(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529e290();
  func_0x0001003b2110(auStack_68,0x113818cf0);
  FUN_10529dd1c(auStack_58,param_2);
  FUN_105298dac(auStack_48,param_2 + 0x18);
  puVar7 = (undefined1 *)0x2;
  func_0x000104bdb9bc(&uStack_60,auStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar6 = &uStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = &uStack_60;
  func_0x000104bdbf78();
  FUN_10529e40c(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_78 = FUN_10529e290;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818cf8 & 1) == 0) {
    puVar4 = (undefined8 *)0x113818cf8;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_UserIdToReaction");
      pcVar5 = "userId";
      func_0x0001003a83dc(auStack_d8,"userId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "reaction";
      func_0x0001003a83dc(auStack_e0,"reaction");
      FUN_105298ed8();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      puVar7 = auStack_c8;
      puVar6 = (undefined8 *)0x0;
      func_0x000104bdbd44(0x113818ce8,auStack_d0,0,puVar7,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar4 = (undefined8 *)0x113818cf8;
      ___cxa_guard_release();
    }
  }
  FUN_10529e40c(uStack_98);
  if ((bool)uVar1) {
    return (undefined8 *)0x113818ce8;
  }
  ___stack_chk_fail();
  if ((int)puVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  uVar9 = *puVar6;
  puVar4[1] = puVar6[1];
  *puVar4 = uVar9;
  puVar4[2] = puVar6[2];
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  FUN_105293198(puVar4 + 3,puVar7);
  return puVar4;
}



/* Entry: 10529e290; end: 10529e3bf;  */

undefined8 * FUN_10529e290(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818cf8 & 1) == 0) {
    param_1 = (undefined8 *)0x113818cf8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_UserIdToReaction");
      pcVar1 = "userId";
      func_0x0001003a83dc(auStack_68,"userId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "reaction";
      func_0x0001003a83dc(auStack_70,"reaction");
      FUN_105298ed8();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      param_3 = auStack_58;
      param_2 = (undefined8 *)0x0;
      func_0x000104bdbd44(0x113818ce8,auStack_60,0,param_3,2);
      lVar2 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar2);
        lVar2 = lVar2 + -0x18;
        in_ZR = lVar2 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = (undefined8 *)0x113818cf8;
      ___cxa_guard_release();
    }
  }
  FUN_10529e40c(uStack_28);
  if ((bool)in_ZR) {
    return (undefined8 *)0x113818ce8;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_105293198(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 10529e3c0; end: 10529e40b;  */

undefined8 * FUN_10529e3c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
  FUN_105293198(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 10529e40c; end: 10529e41f;  */

void FUN_10529e40c(void)

{
  return;
}



/* Entry: 10529e420; end: 10529e477;  */

ulong FUN_10529e420(void)

{
  ulong uVar1;
  long lVar2;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  uVar1 = lStack_28 + 0x18;
  func_0x00010b9a9518(uVar1);
  lVar2 = lStack_28 + 0x28;
  func_0x00010b9a9518(lVar2);
  func_0x000104bdbf78(&lStack_28);
  return uVar1 & 0xffffffff | lVar2 << 0x20;
}



/* Entry: 10529e478; end: 10529e573;  */

undefined1 * FUN_10529e478(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined4 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529e574();
  func_0x0001003b2110(auStack_68,0x113818d08);
  uStack_50 = 4;
  auStack_58[0] = *param_2;
  uStack_48 = param_2[1];
  uStack_40 = 4;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar6 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_60;
  func_0x000104bdbf78();
  FUN_10529e754(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar8);
    iVar5 = (int)puVar6;
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  __Unwind_Resume(puVar3);
  pcStack_78 = FUN_10529e574;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = auStack_58;
  puStack_88 = puVar3;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818d10 & 1) == 0) {
    iVar2 = 0x13818d10;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_VideoDescription");
      pcVar4 = "mediaQualityType";
      func_0x0001003a83dc(auStack_d8,"mediaQualityType");
      FUN_10529e6a4();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar4);
      pcVar4 = "videoPlaybackType";
      func_0x0001003a83dc(auStack_e0,"videoPlaybackType");
      FUN_10529e6fc();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar4);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818d00,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar5 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      ___cxa_guard_release(0x113818d10);
    }
  }
  FUN_10529e754(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818d00;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc368 & 1) == 0) {
    iVar5 = 0x130cc368;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010b990e20(0x1130cc358);
      ___cxa_guard_release(0x1130cc368);
    }
  }
  return (undefined1 *)0x1130cc358;
}



/* Entry: 10529e574; end: 10529e6a3;  */

undefined8 FUN_10529e574(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818d10 & 1) == 0) {
    iVar1 = 0x13818d10;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_VideoDescription");
      pcVar2 = "mediaQualityType";
      func_0x0001003a83dc(auStack_68,"mediaQualityType");
      FUN_10529e6a4();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar2);
      pcVar2 = "videoPlaybackType";
      func_0x0001003a83dc(auStack_70,"videoPlaybackType");
      FUN_10529e6fc();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818d00,auStack_60,0,auStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      ___cxa_guard_release(0x113818d10);
    }
  }
  FUN_10529e754(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818d00;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc368 & 1) == 0) {
    iVar1 = 0x130cc368;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc358);
      ___cxa_guard_release(0x1130cc368);
    }
  }
  return 0x1130cc358;
}



/* Entry: 10529e6a4; end: 10529e6fb;  */

undefined8 FUN_10529e6a4(void)

{
  int iVar1;
  
  if ((bRam00000001130cc368 & 1) == 0) {
    iVar1 = 0x130cc368;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc358);
      ___cxa_guard_release(0x1130cc368);
    }
  }
  return 0x1130cc358;
}



/* Entry: 10529e6fc; end: 10529e753;  */

undefined8 FUN_10529e6fc(void)

{
  int iVar1;
  
  if ((bRam00000001130cc380 & 1) == 0) {
    iVar1 = 0x130cc380;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc370);
      ___cxa_guard_release(0x1130cc380);
    }
  }
  return 0x1130cc370;
}



/* Entry: 10529e754; end: 10529e767;  */

void FUN_10529e754(void)

{
  return;
}



/* Entry: 10529e768; end: 10529e81f;  */

void FUN_10529e768(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  int extraout_w10;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [120];
  undefined1 auStack_100 [16];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_48;
  
  func_0x0001052a257c();
  func_0x0001052a2988();
  func_0x0001052a2720();
  func_0x0001052a288c(FUN_1052a1ae8);
  puVar2 = auStack_78;
  func_0x00010b9ac22c();
  func_0x0001052a25a4(uStack_70);
  do {
    func_0x0001052a25f0();
    iVar1 = (int)puVar2;
  } while (extraout_w10 != 0);
  func_0x0001052a2950();
  func_0x000104bda388(auStack_78);
  func_0x0001052a2a84();
  func_0x0001005f1e7c();
  func_0x0001052a2504(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar1 == 0) {
    func_0x0001052a2660();
  }
  else {
    func_0x0001052a25a4(uStack_70);
    func_0x0001052a2a5c();
  }
  func_0x0001052a27d0();
  func_0x0001052a2528();
  func_0x0001052a2620();
  func_0x0001052a2ab8();
  FUN_1052be72c();
  func_0x0001052a28e4(auStack_188);
  func_0x0001052a28d4(auStack_100);
  func_0x0001052a277c();
  func_0x00010529fe04(auStack_178);
  func_0x0001052a29e4();
  func_0x0001052a28b4();
  return;
}



/* Entry: 10529e820; end: 10529e8bf;  */

void FUN_10529e820(void)

{
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [120];
  undefined1 auStack_50 [16];
  
  func_0x0001052a2528();
  func_0x0001052a2620();
  func_0x0001052a2ab8();
  FUN_1052be72c();
  func_0x0001052a28e4(auStack_d8);
  func_0x0001052a28d4(auStack_50);
  func_0x0001052a277c();
  func_0x00010529fe04(auStack_c8);
  func_0x0001052a29e4();
  func_0x0001052a28b4();
  return;
}



/* Entry: 10529e8c0; end: 10529e987;  */

void FUN_10529e8c0(undefined8 param_1)

{
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [120];
  undefined1 auStack_50 [16];
  
  func_0x0001052a2528();
  func_0x0001052a2620();
  func_0x0001052a29a4();
  FUN_1052be72c(auStack_c8,param_1);
  FUN_10529fd64(auStack_d8);
  FUN_1052af1f4();
  func_0x0001052a2aa4(auStack_50);
  func_0x0001052a28bc();
  func_0x00010529fe04(auStack_c8);
  func_0x0001052a29e4();
  func_0x0001052a28b4();
  return;
}



/* Entry: 10529e988; end: 10529ea6b;  */

void FUN_10529e988(undefined8 param_1)

{
  undefined1 auStack_128 [64];
  undefined1 auStack_e8 [120];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  func_0x0001052a2528();
  func_0x0001052a2620();
  func_0x0001052a29a4();
  func_0x0001052a28e4(auStack_70);
  FUN_1052be72c(auStack_e8);
  func_0x00010529fe5c(auStack_128,param_1);
  func_0x0001052a2aa4(auStack_60);
  func_0x00010529fe04(auStack_e8);
  func_0x00010529fde0(auStack_70);
  func_0x00010529fe94(auStack_60);
  FUN_1052a00dc(auStack_60);
  return;
}



/* Entry: 10529ea6c; end: 10529ead3;  */

void FUN_10529ea6c(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [24];
  
  func_0x0001052a2528();
  plVar1 = (long *)*param_1;
  FUN_10529fd64(auStack_48);
  (**(code **)(*plVar1 + 0x28))(auStack_38,plVar1,auStack_48);
  func_0x0001052a277c();
  FUN_1052a2ae4(auStack_38);
  return;
}



/* Entry: 10529ead4; end: 10529eb8b;  */

void FUN_10529ead4(void)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined1 *puVar4;
  int extraout_w10;
  long unaff_x21;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_48;
  
  func_0x0001052a257c();
  func_0x0001052a2988();
  func_0x0001052a2720();
  func_0x0001052a288c(FUN_1052a1d6c);
  puVar4 = auStack_78;
  func_0x00010b9ac22c();
  func_0x0001052a25a4(uStack_70);
  do {
    func_0x0001052a25f0();
    iVar3 = (int)puVar4;
  } while (extraout_w10 != 0);
  func_0x0001052a2950();
  func_0x000104bda388(auStack_78);
  func_0x0001052a2a84();
  plVar1 = (long *)(unaff_x21 + 8);
  func_0x0001005f1e7c();
  func_0x0001052a2504(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar2 = plVar1;
  if (iVar3 == 0) {
    func_0x0001052a2660();
  }
  else {
    func_0x0001052a25a4(uStack_70);
    func_0x0001052a2a5c();
  }
  func_0x0001052a27d0();
  func_0x0001052a2528();
  func_0x0001052a2a8c();
  func_0x0001052a2a48(*(undefined8 *)(*plVar2 + 0x30));
  func_0x0001052a2a30();
  *(undefined2 *)(plVar1 + 1) = 7;
  *(char *)plVar1 = (char)plVar2;
  return;
}



/* Entry: 10529eb8c; end: 10529ebd7;  */

void FUN_10529eb8c(long *param_1)

{
  undefined1 *unaff_x19;
  
  func_0x0001052a2528();
  func_0x0001052a2a8c();
  func_0x0001052a2a48(*(undefined8 *)(*param_1 + 0x30));
  func_0x0001052a2a30();
  *(undefined2 *)(unaff_x19 + 8) = 7;
  *unaff_x19 = (char)param_1;
  return;
}



/* Entry: 10529ebd8; end: 10529ec23;  */

void FUN_10529ebd8(long *param_1)

{
  undefined1 *unaff_x19;
  
  func_0x0001052a2528();
  func_0x0001052a2a8c();
  func_0x0001052a2a48(*(undefined8 *)(*param_1 + 0x38));
  func_0x0001052a2a30();
  *(undefined2 *)(unaff_x19 + 8) = 7;
  *unaff_x19 = (char)param_1;
  return;
}



/* Entry: 10529ec24; end: 10529ec73;  */

void FUN_10529ec24(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(*(long *)*param_2 + 0x40))(auStack_30);
  func_0x0001052a0100(param_1,auStack_30);
  FUN_1052a0348(auStack_30);
  return;
}



/* Entry: 10529ec74; end: 10529ed0b;  */

void FUN_10529ec74(void)

{
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [72];
  
  func_0x0001052a2528();
  func_0x0001052a2620();
  func_0x0001052a2ab8();
  FUN_1052a9f64();
  func_0x0001052a28e4(auStack_b8);
  func_0x0001052a28d4(auStack_88);
  func_0x0001052a277c();
  func_0x0001052a28c4();
  FUN_1052a036c(auStack_88);
  FUN_1052a038c(auStack_88);
  return;
}



/* Entry: 10529ed0c; end: 10529ee8b;  */

void FUN_10529ed0c(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  long *plVar8;
  long lVar9;
  undefined8 *unaff_x22;
  undefined1 auStack_398 [16];
  undefined8 uStack_388;
  undefined1 auStack_380 [16];
  undefined8 uStack_370;
  undefined1 auStack_368 [16];
  undefined8 uStack_358;
  undefined1 auStack_350 [16];
  undefined8 uStack_340;
  undefined1 auStack_338 [16];
  undefined8 uStack_328;
  undefined1 auStack_320 [16];
  undefined8 uStack_310;
  undefined1 auStack_308 [16];
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [16];
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [32];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [32];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [32];
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [16];
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [16];
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  undefined8 uStack_188;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_c0;
  undefined2 uStack_b8;
  long alStack_a8 [2];
  undefined1 auStack_98 [72];
  char cStack_50;
  undefined8 uStack_48;
  
  func_0x0001052a2668();
  func_0x0001052a257c();
  uStack_48 = extraout_x8;
  func_0x0001052a2700();
  func_0x0001052a2620();
  plVar8 = (long *)*unaff_x22;
  func_0x0001052a28e4(alStack_a8);
  func_0x0001052a03d4(&uStack_c0,param_2);
  (**(code **)(*plVar8 + 0x50))(auStack_98,plVar8,alStack_a8,&uStack_c0);
  func_0x0001052a28bc();
  func_0x0001052a040c(alStack_a8);
  uVar2 = cStack_50 == '\x01';
  if ((bool)uVar2) {
    FUN_1052a0450(auStack_98);
    func_0x000108b800ac(&uStack_c0);
    lVar9 = alStack_a8[0] + 0x18;
LAB_10529edec:
    func_0x00010b9a9020(lVar9,&uStack_c0);
    func_0x00010b9a8d98(&uStack_c0);
    if (alStack_a8[0] == 0) goto LAB_10529ee18;
  }
  else {
    FUN_1052a036c(&uStack_c0,auStack_98);
    func_0x00010b9a9020(alStack_a8[0] + 0x28,&uStack_c0);
    func_0x00010b9a8d98(&uStack_c0);
    uVar2 = *(char *)(alStack_a8[0] + 0x30) == '\x01';
    if ((bool)uVar2) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lVar9 = alStack_a8[0] + 0x28;
      goto LAB_10529edec;
    }
  }
  if (*(long *)(alStack_a8[0] + 0x10) != 0) {
    do {
      func_0x0001052a2558();
    } while (extraout_w11 != 0);
  }
LAB_10529ee18:
  func_0x0001052a2948();
  func_0x000104bddedc(&uStack_c0);
  FUN_1052a08c4(alStack_a8);
  FUN_1052a08f8();
  func_0x0001052a2504(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    FUN_1052a08c4(alStack_a8);
    puVar4 = auStack_98;
    FUN_1052a08f8();
    func_0x0001052a2660();
    func_0x0001052a257c();
    uStack_f8 = extraout_x8_00;
    FUN_1052a3bd8();
    FUN_1052a7c78(puVar4);
    FUN_1052a96b8(puVar4);
    FUN_1052ad450(puVar4);
    FUN_1052b36d4(puVar4);
    FUN_1052b53d4(puVar4);
    bVar1 = *(byte *)(((ulong)puVar4 & 0xffffffff) + 0x1136b9a80);
    *(undefined1 *)(((ulong)puVar4 & 0xffffffff) + 0x1136b9a80) = 1;
    if ((bVar1 & 1) != 0) goto LAB_10529ef10;
    if ((bRam00000001136b9a98 & 1) == 0) goto LAB_10529ef2c;
    while( true ) {
      func_0x000108b80888(0x1136b9ae0,puVar4);
LAB_10529ef10:
      func_0x0001052a2504(uStack_f8);
      if ((bool)uVar2) break;
      ___stack_chk_fail();
LAB_10529ef2c:
      iVar3 = 0x136b9a98;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        FUN_10529f4bc();
        pcVar5 = "fetchFullContent";
        func_0x0001003a83dc(&uStack_2c8,"fetchFullContent");
        FUN_1052a420c();
        pcVar6 = pcVar5;
        FUN_1052be804();
        func_0x0001003adcc0(auStack_1f0,pcVar6);
        FUN_1052b39bc();
        func_0x0001052a2938();
        func_0x0001052a2918(auStack_2d8,pcVar5,auStack_1f0);
        uStack_1d0 = uStack_2c8;
        uStack_2c8 = 0;
        func_0x0001003aef98(auStack_1c8,auStack_2d8);
        pcVar5 = "fetchContentRange";
        func_0x0001003a83dc(&uStack_2e0,"fetchContentRange");
        FUN_1052a420c();
        FUN_1052be804();
        puVar7 = auStack_220;
        func_0x0001003adcc0(puVar7,pcVar5);
        FUN_1052b39bc();
        func_0x0001052a2938();
        FUN_1052af24c();
        func_0x0001003adcc0(auStack_200,puVar7);
        func_0x0001052a2a64(auStack_2f0);
        uStack_1b8 = uStack_2e0;
        uStack_2e0 = 0;
        func_0x0001003aef98(auStack_1b0,auStack_2f0);
        pcVar5 = "prefetchContent";
        func_0x0001003a83dc(&uStack_2f8,"prefetchContent");
        FUN_1052ad820();
        func_0x0001052a2970();
        puVar7 = auStack_250;
        func_0x0001003adcc0(puVar7,pcVar5);
        FUN_1052be804();
        func_0x0001052a2938();
        FUN_1052a0920();
        func_0x0001003adcc0(auStack_230,puVar7);
        func_0x0001052a2a64(auStack_308);
        uStack_1a0 = uStack_2f8;
        uStack_2f8 = 0;
        func_0x0001003aef98(auStack_198,auStack_308);
        pcVar5 = "getContentStatusResult";
        func_0x0001003a83dc(&uStack_310,"getContentStatusResult");
        FUN_1052a2bf0();
        func_0x0001052a2970();
        func_0x0001003adcc0(auStack_260,pcVar5);
        func_0x0001052a27b0(auStack_320);
        uStack_188 = uStack_310;
        uStack_310 = 0;
        func_0x0001003aef98(auStack_180,auStack_320);
        pcVar5 = "hasDownloadStarted";
        func_0x0001003a83dc(&uStack_328,"hasDownloadStarted");
        func_0x000104bef4f0();
        func_0x0001052a2970();
        func_0x0001003adcc0(auStack_270,pcVar5);
        func_0x0001052a27b0(auStack_338);
        uStack_170 = uStack_328;
        uStack_328 = 0;
        func_0x0001003aef98(auStack_168,auStack_338);
        pcVar5 = "isDownloadComplete";
        func_0x0001003a83dc(&uStack_340,"isDownloadComplete");
        func_0x000104bef4f0();
        func_0x0001052a2970();
        func_0x0001003adcc0(auStack_280,pcVar5);
        func_0x0001052a27b0(auStack_350);
        uStack_158 = uStack_340;
        uStack_340 = 0;
        func_0x0001003aef98(auStack_150,auStack_350);
        func_0x0001003a83dc(&uStack_358,"getCachePolicyManager");
        FUN_1052a7f18();
        func_0x0001052a2a0c(auStack_368);
        uStack_140 = uStack_358;
        uStack_358 = 0;
        func_0x0001003aef98(auStack_138,auStack_368);
        pcVar5 = "linkContent";
        func_0x0001003a83dc(&uStack_370,"linkContent");
        FUN_1052a097c();
        pcVar6 = pcVar5;
        FUN_1052a9fd8();
        func_0x0001003adcc0(auStack_2a0,pcVar6);
        FUN_1052b39bc();
        func_0x0001052a2938();
        func_0x0001052a2918(auStack_380,pcVar5,auStack_2a0);
        uStack_128 = uStack_370;
        uStack_370 = 0;
        func_0x0001003aef98(auStack_120,auStack_380);
        pcVar5 = "retrieveSyncIfCached";
        func_0x0001003a83dc(&uStack_388,"retrieveSyncIfCached");
        if ((bRam00000001136b9aa0 & 1) == 0) {
          pcVar5 = (char *)0x1136b9aa0;
          ___cxa_guard_acquire();
          if ((int)pcVar5 != 0) {
            FUN_1052a0a34();
            pcVar6 = pcVar5;
            FUN_1052a097c();
            func_0x00010b9913cc(0x1136b9af0,pcVar5,pcVar6);
            pcVar5 = (char *)0x1136b9aa0;
            ___cxa_guard_release(0x1136b9aa0);
          }
        }
        FUN_1052b39bc();
        puVar7 = auStack_2c0;
        func_0x0001003adcc0(puVar7,pcVar5);
        FUN_1052a09d8();
        func_0x0001003adcc0(auStack_2b0,puVar7);
        func_0x0001052a2918(auStack_398,0x1136b9af0,auStack_2c0);
        uStack_110 = uStack_388;
        uStack_388 = 0;
        func_0x0001003aef98(auStack_108,auStack_398);
        func_0x000104bdbd44(0x1136b9ae0,0x1136b9aa8,1,&uStack_1d0,9);
        lVar9 = 0xc0;
        do {
          func_0x0001003b1c5c(auStack_1c8 + lVar9 + -8);
          lVar9 = lVar9 + -0x18;
          uVar2 = lVar9 == -0x18;
        } while (!(bool)uVar2);
        func_0x0001052a2678(auStack_398);
        do {
          func_0x0001052a27a8();
          func_0x0001052a28fc();
        } while (!(bool)uVar2);
        func_0x0001003a8c94(&uStack_388);
        func_0x0001052a2678(auStack_380);
        do {
          func_0x0001052a27a8();
          func_0x0001052a28fc();
        } while (!(bool)uVar2);
        func_0x0001003a8c94(&uStack_370);
        func_0x0001052a2678(auStack_368);
        func_0x0001003a8c94(&uStack_358);
        func_0x0001052a2678(auStack_350);
        func_0x0001052a2678(auStack_280);
        func_0x0001003a8c94(&uStack_340);
        func_0x0001052a2678(auStack_338);
        func_0x0001052a2678(auStack_270);
        func_0x0001003a8c94(&uStack_328);
        func_0x0001052a2678(auStack_320);
        func_0x0001052a2678(auStack_260);
        func_0x0001003a8c94(&uStack_310);
        func_0x0001052a2678(auStack_308);
        do {
          func_0x0001052a27a8();
          func_0x0001052a28fc();
        } while (!(bool)uVar2);
        func_0x0001003a8c94(&uStack_2f8);
        func_0x0001052a2678(auStack_2f0);
        do {
          func_0x0001052a27a8();
          func_0x0001052a28fc();
        } while (!(bool)uVar2);
        func_0x0001003a8c94(&uStack_2e0);
        func_0x0001052a2678(auStack_2d8);
        do {
          func_0x0001052a27a8();
          func_0x0001052a28fc();
        } while (!(bool)uVar2);
        func_0x0001003a8c94(&uStack_2c8);
        ___cxa_guard_release(0x1136b9a98);
      }
    }
    return;
  }
  return;
}



/* Entry: 10529ee8c; end: 10529f42f;  */

void FUN_10529ee8c(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined1 auStack_2d8 [16];
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [16];
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [16];
  undefined8 uStack_298;
  undefined1 auStack_290 [16];
  undefined8 uStack_280;
  undefined1 auStack_278 [16];
  undefined8 uStack_268;
  undefined1 auStack_260 [16];
  undefined8 uStack_250;
  undefined1 auStack_248 [16];
  undefined8 uStack_238;
  undefined1 auStack_230 [16];
  undefined8 uStack_220;
  undefined1 auStack_218 [16];
  undefined8 uStack_208;
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [32];
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x0001052a257c();
  uStack_38 = extraout_x8;
  FUN_1052a3bd8();
  FUN_1052a7c78(param_1);
  FUN_1052a96b8(param_1);
  FUN_1052ad450(param_1);
  FUN_1052b36d4(param_1);
  FUN_1052b53d4(param_1);
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136b9a80);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136b9a80) = 1;
  if ((bVar1 & 1) != 0) goto LAB_10529ef10;
  if ((bRam00000001136b9a98 & 1) == 0) goto LAB_10529ef2c;
  while( true ) {
    func_0x000108b80888(0x1136b9ae0,param_1);
LAB_10529ef10:
    func_0x0001052a2504(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_10529ef2c:
    iVar2 = 0x136b9a98;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_10529f4bc();
      pcVar3 = "fetchFullContent";
      func_0x0001003a83dc(&uStack_208,"fetchFullContent");
      FUN_1052a420c();
      pcVar4 = pcVar3;
      FUN_1052be804();
      func_0x0001003adcc0(auStack_130,pcVar4);
      FUN_1052b39bc();
      func_0x0001052a2938();
      func_0x0001052a2918(auStack_218,pcVar3,auStack_130);
      uStack_110 = uStack_208;
      uStack_208 = 0;
      func_0x0001003aef98(auStack_108,auStack_218);
      pcVar3 = "fetchContentRange";
      func_0x0001003a83dc(&uStack_220,"fetchContentRange");
      FUN_1052a420c();
      FUN_1052be804();
      puVar5 = auStack_160;
      func_0x0001003adcc0(puVar5,pcVar3);
      FUN_1052b39bc();
      func_0x0001052a2938();
      FUN_1052af24c();
      func_0x0001003adcc0(auStack_140,puVar5);
      func_0x0001052a2a64(auStack_230);
      uStack_f8 = uStack_220;
      uStack_220 = 0;
      func_0x0001003aef98(auStack_f0,auStack_230);
      pcVar3 = "prefetchContent";
      func_0x0001003a83dc(&uStack_238,"prefetchContent");
      FUN_1052ad820();
      func_0x0001052a2970();
      puVar5 = auStack_190;
      func_0x0001003adcc0(puVar5,pcVar3);
      FUN_1052be804();
      func_0x0001052a2938();
      FUN_1052a0920();
      func_0x0001003adcc0(auStack_170,puVar5);
      func_0x0001052a2a64(auStack_248);
      uStack_e0 = uStack_238;
      uStack_238 = 0;
      func_0x0001003aef98(auStack_d8,auStack_248);
      pcVar3 = "getContentStatusResult";
      func_0x0001003a83dc(&uStack_250,"getContentStatusResult");
      FUN_1052a2bf0();
      func_0x0001052a2970();
      func_0x0001003adcc0(auStack_1a0,pcVar3);
      func_0x0001052a27b0(auStack_260);
      uStack_c8 = uStack_250;
      uStack_250 = 0;
      func_0x0001003aef98(auStack_c0,auStack_260);
      pcVar3 = "hasDownloadStarted";
      func_0x0001003a83dc(&uStack_268,"hasDownloadStarted");
      func_0x000104bef4f0();
      func_0x0001052a2970();
      func_0x0001003adcc0(auStack_1b0,pcVar3);
      func_0x0001052a27b0(auStack_278);
      uStack_b0 = uStack_268;
      uStack_268 = 0;
      func_0x0001003aef98(auStack_a8,auStack_278);
      pcVar3 = "isDownloadComplete";
      func_0x0001003a83dc(&uStack_280,"isDownloadComplete");
      func_0x000104bef4f0();
      func_0x0001052a2970();
      func_0x0001003adcc0(auStack_1c0,pcVar3);
      func_0x0001052a27b0(auStack_290);
      uStack_98 = uStack_280;
      uStack_280 = 0;
      func_0x0001003aef98(auStack_90,auStack_290);
      func_0x0001003a83dc(&uStack_298,"getCachePolicyManager");
      FUN_1052a7f18();
      func_0x0001052a2a0c(auStack_2a8);
      uStack_80 = uStack_298;
      uStack_298 = 0;
      func_0x0001003aef98(auStack_78,auStack_2a8);
      pcVar3 = "linkContent";
      func_0x0001003a83dc(&uStack_2b0);
      FUN_1052a097c();
      pcVar4 = pcVar3;
      FUN_1052a9fd8();
      func_0x0001003adcc0(auStack_1e0,pcVar4);
      FUN_1052b39bc();
      func_0x0001052a2938();
      func_0x0001052a2918(auStack_2c0,pcVar3,auStack_1e0);
      uStack_68 = uStack_2b0;
      uStack_2b0 = 0;
      func_0x0001003aef98(auStack_60,auStack_2c0);
      pcVar3 = "retrieveSyncIfCached";
      func_0x0001003a83dc(&uStack_2c8,"retrieveSyncIfCached");
      if ((bRam00000001136b9aa0 & 1) == 0) {
        pcVar3 = (char *)0x1136b9aa0;
        ___cxa_guard_acquire();
        if ((int)pcVar3 != 0) {
          FUN_1052a0a34();
          pcVar4 = pcVar3;
          FUN_1052a097c();
          func_0x00010b9913cc(0x1136b9af0,pcVar3,pcVar4);
          pcVar3 = (char *)0x1136b9aa0;
          ___cxa_guard_release(0x1136b9aa0);
        }
      }
      FUN_1052b39bc();
      puVar5 = auStack_200;
      func_0x0001003adcc0(puVar5,pcVar3);
      FUN_1052a09d8();
      func_0x0001003adcc0(auStack_1f0,puVar5);
      func_0x0001052a2918(auStack_2d8,0x1136b9af0,auStack_200);
      uStack_50 = uStack_2c8;
      uStack_2c8 = 0;
      func_0x0001003aef98(auStack_48,auStack_2d8);
      func_0x000104bdbd44(0x1136b9ae0,0x1136b9aa8,1,&uStack_110,9);
      lVar6 = 0xc0;
      do {
        func_0x0001003b1c5c(auStack_108 + lVar6 + -8);
        lVar6 = lVar6 + -0x18;
        in_ZR = lVar6 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001052a2678(auStack_2d8);
      do {
        func_0x0001052a27a8();
        func_0x0001052a28fc();
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(&uStack_2c8);
      func_0x0001052a2678(auStack_2c0);
      do {
        func_0x0001052a27a8();
        func_0x0001052a28fc();
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(&uStack_2b0);
      func_0x0001052a2678(auStack_2a8);
      func_0x0001003a8c94(&uStack_298);
      func_0x0001052a2678(auStack_290);
      func_0x0001052a2678(auStack_1c0);
      func_0x0001003a8c94(&uStack_280);
      func_0x0001052a2678(auStack_278);
      func_0x0001052a2678(auStack_1b0);
      func_0x0001003a8c94(&uStack_268);
      func_0x0001052a2678(auStack_260);
      func_0x0001052a2678(auStack_1a0);
      func_0x0001003a8c94(&uStack_250);
      func_0x0001052a2678(auStack_248);
      do {
        func_0x0001052a27a8();
        func_0x0001052a28fc();
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(&uStack_238);
      func_0x0001052a2678(auStack_230);
      do {
        func_0x0001052a27a8();
        func_0x0001052a28fc();
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(&uStack_220);
      func_0x0001052a2678(auStack_218);
      do {
        func_0x0001052a27a8();
        func_0x0001052a28fc();
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(&uStack_208);
      ___cxa_guard_release(0x1136b9a98);
    }
  }
  return;
}



/* Entry: 10529f430; end: 10529f4bb;  */

void FUN_10529f430(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam00000001136b9a88 & 1) == 0) {
    iVar4 = 0x136b9a88;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_10529f4bc();
      lStack_20 = lRam00000001136b9aa8;
      if (lRam00000001136b9aa8 != 0) {
        piVar1 = (int *)(lRam00000001136b9aa8 + 8);
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
      func_0x0001003ad9a4(0x1136b9ac0,&lStack_20);
      func_0x0001052a2718();
      ___cxa_guard_release(0x1136b9a88);
    }
  }
  return;
}



/* Entry: 10529f4bc; end: 10529f517;  */

void FUN_10529f4bc(void)

{
  int iVar1;
  
  if ((bRam00000001136b9ab0 & 1) == 0) {
    iVar1 = 0x136b9ab0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x1136b9aa8,"_djinni_interface_BufferedContentFetcher");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1136b9ab0);
      return;
    }
  }
  return;
}



/* Entry: 10529f518; end: 10529f87b;  */

void FUN_10529f518(long *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined1 **ppuVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar7;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 *apuStack_128 [2];
  undefined8 uStack_118;
  undefined1 *apuStack_110 [2];
  code *pcStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [16];
  undefined **appuStack_e0 [3];
  undefined ***pppuStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  code *pcStack_90;
  undefined **ppuStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  func_0x0001052a257c();
  uStack_48 = extraout_x8;
  func_0x0001003a83dc(auStack_f8,"_djinni_interface_BufferedContentFetcher_statics");
  puVar2 = &DAT_10f68efec;
  func_0x0001003a83dc(&pcStack_100,&DAT_10f68efec);
  FUN_10529f430();
  FUN_1052b5bf0();
  puVar3 = auStack_b0;
  func_0x0001003adcc0(puVar3,puVar2);
  FUN_1052a9a84();
  func_0x0001003adcc0(auStack_a0,puVar3);
  func_0x0001052a2918(apuStack_110,0x1136b9ac0,auStack_b0);
  pcStack_90 = pcStack_100;
  pcStack_100 = (code *)0x0;
  func_0x0001003aef98(&ppuStack_88,apuStack_110);
  pcVar4 = "getUserScoped";
  func_0x0001003a83dc(&uStack_118,"getUserScoped");
  FUN_10529f87c();
  func_0x000104bdbd7c();
  func_0x0001003adcc0(auStack_c0,pcVar4);
  func_0x000104bdbd48(apuStack_128,0x1136b9b00,auStack_c0,1);
  uStack_78 = uStack_118;
  uStack_118 = 0;
  func_0x0001003aef98(auStack_70,apuStack_128);
  func_0x0001003a83dc(&uStack_130,"getGlobalScoped");
  FUN_10529f87c();
  func_0x0001052a2a0c(auStack_140,0x1136b9b00);
  uStack_60 = uStack_130;
  uStack_130 = 0;
  func_0x0001003aef98(auStack_58,auStack_140);
  func_0x000104bdbd44(auStack_f0,auStack_f8,0,&pcStack_90,3);
  lVar7 = 0x30;
  do {
    func_0x0001003b1c5c((long)&pcStack_90 + lVar7);
    lVar7 = lVar7 + -0x18;
    uVar1 = lVar7 == -0x18;
  } while (!(bool)uVar1);
  func_0x0001052a2678(auStack_140);
  func_0x0001003a8c94(&uStack_130);
  func_0x0001052a2678(apuStack_128);
  func_0x0001052a2678(auStack_c0);
  func_0x0001003a8c94(&uStack_118);
  func_0x0001052a2678(apuStack_110);
  do {
    func_0x0001052a27a8();
    func_0x0001052a28fc();
  } while (!(bool)uVar1);
  func_0x0001003a8c94(&pcStack_100);
  func_0x0001003a8c94(auStack_f8);
  pppuStack_c8 = appuStack_e0;
  appuStack_e0[0] = &PTR_DAT_1108745f8;
  func_0x000108b807f0(auStack_b0,auStack_f0,appuStack_e0);
  func_0x0001006393ec(appuStack_e0);
  puVar3 = auStack_a8;
  func_0x0001003b2110(auStack_c0);
  func_0x0001052a2720();
  pcStack_90 = FUN_1052a21f4;
  ppuStack_88 = &PTR_FUN_110874668;
  pcStack_80 = FUN_10529f8ec;
  func_0x00010b9ac22c();
  apuStack_128[0] = puVar3;
  func_0x0001052a25a4(ppuStack_88);
  do {
    func_0x0001052a25f0();
  } while (extraout_w10 != 0);
  apuStack_110[0] = puVar3;
  func_0x00010b9a8ef8(&pcStack_90,apuStack_110);
  func_0x000104bda388(apuStack_110);
  func_0x000104bda3d0(apuStack_128);
  FUN_10529f9e8(&pcStack_80,FUN_10529fab4);
  FUN_10529f9e8(auStack_70,FUN_10529fb28);
  func_0x000104bdb9bc(apuStack_128,auStack_c0,&pcStack_90,3);
  func_0x00010b9a8f60(apuStack_110,apuStack_128);
  lVar7 = *param_1;
  func_0x0001003a83dc(auStack_140,"BufferedContentFetcher");
  func_0x000104bd9bd4(lVar7 + 0x10,auStack_140);
  ppuVar6 = apuStack_110;
  func_0x00010b9a9020();
  func_0x0001052a2718();
  func_0x00010b9a8d98(apuStack_110);
  func_0x000104bdbf78(apuStack_128);
  lVar7 = 0x20;
  do {
    func_0x00010b9a8d98((long)&pcStack_90 + lVar7);
    iVar5 = (int)ppuVar6;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_c0);
  func_0x0001003adc18();
  func_0x0001052a2678(auStack_f0);
  func_0x0001052a2504(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    func_0x0001052a2660();
  }
  else {
    func_0x0001052a25a4(ppuStack_88);
    func_0x0001052a2a5c();
  }
  func_0x0001052a27d0();
  if ((bRam00000001136b9ab8 & 1) == 0) {
    iVar5 = 0x136b9ab8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_10529f430();
      func_0x00010b9911c4(0x1136b9b00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1136b9ab8);
      return;
    }
  }
  return;
}



/* Entry: 10529f87c; end: 10529f8eb;  */

void FUN_10529f87c(void)

{
  int iVar1;
  
  if ((bRam00000001136b9ab8 & 1) == 0) {
    iVar1 = 0x136b9ab8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529f430();
      func_0x00010b9911c4(0x1136b9b00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1136b9ab8);
      return;
    }
  }
  return;
}



/* Entry: 10529f8ec; end: 10529f9e7;  */

void FUN_10529f8ec(long param_1)

{
  long lVar1;
  int extraout_w10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x0001052a2770();
  func_0x0001052a2700();
  lVar1 = param_1;
  func_0x0001052a2620();
  FUN_1052a12f8(auStack_58,param_1);
  if (1 < *(byte *)(lVar1 + 8)) {
    func_0x00010b9a9810(&lStack_38,lVar1);
    if (lStack_38 == 0) {
      lStack_38 = 0;
    }
    else {
      func_0x0001052a2ab0(lStack_38,&PTR_DAT_110d7f038,&PTR_DAT_1108746b8);
    }
    func_0x000104be7e54(&lStack_38);
    if (lStack_38 != 0) {
      uStack_68 = *(undefined8 *)(lStack_38 + 0x30);
      uStack_70 = *(undefined8 *)(lStack_38 + 0x28);
      if (*(long *)(lStack_38 + 0x30) != 0) {
        do {
          func_0x0001052a25b0();
        } while (extraout_w10 != 0);
      }
      goto LAB_10529f990;
    }
  }
  uStack_70 = 0;
  uStack_68 = 0;
LAB_10529f990:
  func_0x00010b13cdf8(auStack_48,auStack_58,&uStack_70);
  func_0x0001052a1374(&uStack_70);
  func_0x0001052a1398(auStack_58);
  FUN_1052a0a4c();
  func_0x0001052a2978();
  return;
}



/* Entry: 10529f9e8; end: 10529fab3;  */

void FUN_10529f9e8(code *param_1)

{
  undefined1 in_ZR;
  code **ppcVar1;
  int iVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  
  ppcVar1 = &pcStack_70;
  func_0x0001052a2acc();
  func_0x0001052a257c();
  func_0x0001052a2720();
  pcStack_68 = FUN_1052a22a8;
  ppuStack_60 = &PTR_FUN_110874688;
  func_0x00010b9ac22c();
  pcStack_70 = param_1;
  func_0x0001052a25a4(ppuStack_60);
  do {
    func_0x0001052a25f0();
  } while (extraout_w10 != 0);
  iVar2 = (int)&pcStack_68;
  pcStack_68 = param_1;
  func_0x00010b9a8ef8();
  func_0x000104bda388(&pcStack_68);
  func_0x000104bda3d0();
  func_0x0001052a2504(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 == 0) {
    func_0x0001052a282c();
  }
  else {
    func_0x0001052a25a4(ppuStack_60);
    __ZdlPv(param_1);
  }
  func_0x000104bd46a0(ppcVar1);
  pcStack_78 = FUN_10529fab4;
  puStack_90 = (undefined1 *)ppcVar1;
  pcStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x0001052a2700();
  func_0x000104bdbf60(auStack_b8);
  func_0x00010b13cfac(&uStack_a0,auStack_b8);
  func_0x0001052a28c4();
  uStack_a0 = 0;
  uStack_98 = 0;
  func_0x0001052a2a3c();
  func_0x0001052a2754();
  func_0x0001052a27c8();
  return;
}



/* Entry: 10529fab4; end: 10529fb27;  */

void FUN_10529fab4(void)

{
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001052a2700();
  func_0x000104bdbf60(auStack_48);
  func_0x00010b13cfac(&uStack_30,auStack_48);
  func_0x0001052a28c4();
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001052a2a3c();
  func_0x0001052a2754();
  func_0x0001052a27c8();
  return;
}



/* Entry: 10529fb28; end: 10529fb73;  */

void FUN_10529fb28(void)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b13dab4(&uStack_30);
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001052a2a3c();
  func_0x0001052a2754();
  func_0x0001052a2920();
  return;
}



/* Entry: 10529fb74; end: 10529fd63;  */

void FUN_10529fb74(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  int iVar5;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_80;
  func_0x0001052a2610(&UNK_10dd91814,*param_2);
  lVar1 = *param_2;
  if (lVar1 == 0) {
    func_0x0001052a2548();
    return;
  }
  func_0x0001052a2600(lVar1,&PTR_DAT_110874730);
  if (lVar1 != 0) {
    puStack_58 = *(undefined8 **)(lVar1 + 8);
    if ((puStack_58 != (undefined8 *)0x0) && (puStack_58[2] != 0)) {
      do {
        func_0x0001052a2558();
        puStack_58 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x0001052a2654();
    func_0x0001052a2980();
    return;
  }
  func_0x0001052a2648();
  puStack_58 = (undefined8 *)*param_2;
  lVar1 = 0x11328ad40;
  func_0x000104bdbfcc(0x11328ad40,&puStack_58);
  if (lVar1 == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(lVar1 + 0x28);
    func_0x000104bf7d80(&puStack_58,lVar1 + 0x18);
    if (puStack_58 != (undefined8 *)0x0) {
      puStack_80 = puStack_58;
      if (puStack_58[2] != 0) {
        do {
          func_0x0001052a2558();
          puStack_80 = extraout_x8_00;
        } while (extraout_w11_00 != 0);
      }
      func_0x0001052a26d4();
      func_0x000104be7e54(&puStack_80);
      ppuVar4 = &puStack_58;
      goto LAB_10529fd2c;
    }
    iVar5 = iVar5 + 1;
    func_0x0001052a2980();
  }
  FUN_1052a2d64(&puStack_60,param_2);
  if (lVar1 == 0) {
    lVar1 = *param_2;
    func_0x000104bf822c(&puStack_80,puStack_60);
    puVar2 = (undefined8 *)0x30;
    iStack_70 = iVar5;
    __Znwm();
    uStack_50 = 0x11328ad50;
    uStack_48 = 1;
    puVar2[2] = lVar1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = uStack_78;
    puVar2[3] = puStack_80;
    puStack_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    *(int *)(puVar2 + 5) = iVar5;
    uVar3 = 0x11328ad58;
    puStack_58 = puVar2;
    func_0x000104bf7ea8();
    puVar2[1] = uVar3;
    func_0x000104bf7e44(0x11328ad40);
    if (((ulong)puVar2 & 1) != 0) {
      puStack_58 = (undefined8 *)0x0;
    }
    func_0x000104bdc220(&puStack_58);
  }
  else {
    func_0x000104bf822c(&puStack_58,puStack_60);
    uStack_48 = CONCAT44(uStack_48._4_4_,iVar5);
    func_0x000104bf7db8(lVar1 + 0x18,&puStack_58);
    ppuVar4 = &puStack_58;
  }
  func_0x000104bdc2a0(ppuVar4);
  func_0x0001052a26d4();
  ppuVar4 = &puStack_60;
LAB_10529fd2c:
  func_0x000104be7e54(ppuVar4);
  func_0x0001052a263c();
  return;
}



/* Entry: 10529fd64; end: 10529ff47;  */

void FUN_10529fd64(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  long lStack_28;
  
  func_0x0001052a278c();
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x00010b9a9810(&lStack_28);
    if (lStack_28 == 0) {
      lStack_28 = 0;
    }
    else {
      func_0x0001052a2ab0(lStack_28,&PTR_DAT_110d7f038,&PTR_DAT_110874768);
    }
    func_0x0001052a2784();
    if (lStack_28 != 0) {
      lVar1 = *(long *)(lStack_28 + 0x30);
      uVar2 = *(undefined8 *)(lStack_28 + 0x28);
      unaff_x19[1] = *(undefined8 *)(lStack_28 + 0x30);
      *unaff_x19 = uVar2;
      if (lVar1 == 0) {
        return;
      }
      do {
        func_0x0001052a25b0();
      } while (extraout_w10 != 0);
      return;
    }
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10529ff48; end: 1052a002b;  */

void FUN_10529ff48(long param_1,long *param_2)

{
  long *plVar1;
  long extraout_x8;
  int extraout_w11;
  int iVar2;
  long alStack_58 [2];
  int iStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x0001052a2648();
  alStack_58[0] = *param_2;
  func_0x0001052a26dc();
  if (param_1 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28);
    func_0x0001052a2a00();
    if (alStack_58[0] != 0) {
      lStack_38 = alStack_58[0];
      if (*(long *)(alStack_58[0] + 0x10) != 0) {
        do {
          func_0x0001052a2558();
          lStack_38 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      func_0x0001052a2654();
      func_0x0001052a2980();
      plVar1 = alStack_58;
      goto LAB_1052a0018;
    }
    iVar2 = iVar2 + 1;
    func_0x0001052a2784();
  }
  FUN_1052ac948(&lStack_38,param_2);
  if (param_1 == 0) {
    lStack_40 = *param_2;
    func_0x0001052a28ec(lStack_38);
    iStack_48 = iVar2;
    func_0x0001052a2880();
    FUN_1052a002c();
  }
  else {
    func_0x0001052a28ec(lStack_38);
    func_0x0001052a2928();
  }
  func_0x000104bdc2a0(alStack_58);
  func_0x0001052a2654();
  plVar1 = &lStack_38;
LAB_1052a0018:
  func_0x000104be7e54(plVar1);
  func_0x0001052a263c();
  return;
}



/* Entry: 1052a002c; end: 1052a005b;  */

void FUN_1052a002c(void)

{
  func_0x0001052a0044();
  return;
}



/* Entry: 1052a005c; end: 1052a00b3;  */

undefined1  [16] FUN_1052a005c(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong auStack_38 [3];
  
  FUN_1052a00b4(auStack_38);
  uVar1 = auStack_38[0];
  func_0x000104bf7e44(param_1);
  if ((uVar1 & 1) != 0) {
    auStack_38[0] = 0;
  }
  func_0x0001052a28cc();
  auVar2._8_8_ = uVar1 & 0xff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1052a00b4; end: 1052a00db;  */

void FUN_1052a00b4(undefined8 param_1)

{
  long unaff_x23;
  
  func_0x0001052a2738();
  func_0x0001052a2680();
  *(undefined8 *)(unaff_x23 + 8) = param_1;
  return;
}



/* Entry: 1052a00dc; end: 1052a01b3;  */

void FUN_1052a00dc(long param_1)

{
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a01b4; end: 1052a0297;  */

void FUN_1052a01b4(long param_1,long *param_2)

{
  long *plVar1;
  long extraout_x8;
  int extraout_w11;
  int iVar2;
  long alStack_58 [2];
  int iStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x0001052a2648();
  alStack_58[0] = *param_2;
  func_0x0001052a26dc();
  if (param_1 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28);
    func_0x0001052a2a00();
    if (alStack_58[0] != 0) {
      lStack_38 = alStack_58[0];
      if (*(long *)(alStack_58[0] + 0x10) != 0) {
        do {
          func_0x0001052a2558();
          lStack_38 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      func_0x0001052a2654();
      func_0x0001052a2980();
      plVar1 = alStack_58;
      goto LAB_1052a0284;
    }
    iVar2 = iVar2 + 1;
    func_0x0001052a2784();
  }
  FUN_1052a7548(&lStack_38,param_2);
  if (param_1 == 0) {
    lStack_40 = *param_2;
    func_0x0001052a28ec(lStack_38);
    iStack_48 = iVar2;
    func_0x0001052a2880();
    FUN_1052a0298();
  }
  else {
    func_0x0001052a28ec(lStack_38);
    func_0x0001052a2928();
  }
  func_0x000104bdc2a0(alStack_58);
  func_0x0001052a2654();
  plVar1 = &lStack_38;
LAB_1052a0284:
  func_0x000104be7e54(plVar1);
  func_0x0001052a263c();
  return;
}



/* Entry: 1052a0298; end: 1052a02c7;  */

void FUN_1052a0298(void)

{
  func_0x0001052a02b0();
  return;
}



/* Entry: 1052a02c8; end: 1052a031f;  */

undefined1  [16] FUN_1052a02c8(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong auStack_38 [3];
  
  FUN_1052a0320(auStack_38);
  uVar1 = auStack_38[0];
  func_0x000104bf7e44(param_1);
  if ((uVar1 & 1) != 0) {
    auStack_38[0] = 0;
  }
  func_0x0001052a28cc();
  auVar2._8_8_ = uVar1 & 0xff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1052a0320; end: 1052a0347;  */

void FUN_1052a0320(undefined8 param_1)

{
  long unaff_x23;
  
  func_0x0001052a2738();
  func_0x0001052a2680();
  *(undefined8 *)(unaff_x23 + 8) = param_1;
  return;
}



/* Entry: 1052a0348; end: 1052a036b;  */

void FUN_1052a0348(long param_1)

{
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a036c; end: 1052a038b;  */

undefined1 * FUN_1052a036c(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  if (param_2[0x40] != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052c521c();
  func_0x0001003b2110(auStack_78,0x1138195c8);
  FUN_1052808e4(auStack_68,param_2);
  uStack_58 = *(undefined8 *)(param_2 + 0x18);
  uStack_50 = 5;
  func_0x000105280820(auStack_48,param_2 + 0x20);
  func_0x000104bdb9bc(auStack_70,auStack_78,auStack_68,3);
  lVar7 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar3 = auStack_70;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_70;
  func_0x000104bdbf78();
  FUN_1052c537c(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_88 = FUN_1052c521c;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = lVar7;
  puStack_98 = puVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam00000001138195d0 & 1) == 0) {
    puVar3 = (undefined1 *)0x1138195d0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_f8,"_djinni_record_Error");
      pcVar4 = "errorDomain";
      func_0x0001003a83dc(auStack_100,"errorDomain");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_f0,auStack_100,pcVar4);
      pcVar4 = "errorCode";
      func_0x0001003a83dc(auStack_108,"errorCode");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_d8,auStack_108,pcVar4);
      pcVar4 = "errorDescription";
      func_0x0001003a83dc(auStack_110,"errorDescription");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_c0,auStack_110,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x1138195c0,auStack_f8,0,auStack_f0,3);
      lVar7 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_f0 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      puVar3 = (undefined1 *)0x1138195d0;
      ___cxa_guard_release(0x1138195d0);
    }
  }
  FUN_1052c537c(uStack_a8);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138195c0;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 1052a038c; end: 1052a03ab;  */

void FUN_1052a038c(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_1052a03ac();
  }
  return;
}



/* Entry: 1052a03ac; end: 1052a044f;  */

void FUN_1052a03ac(long param_1)

{
  func_0x0001001148fc(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1052a0450; end: 1052a04db;  */

long FUN_1052a0450(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [72];
  
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    return param_1;
  }
  uVar2 = 0x50;
  ___cxa_allocate_exception(0x50);
  FUN_1052a06f8(auStack_68,param_1);
  FUN_1052a07a8(uVar2,auStack_68);
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1052a04bc);
  (*pcVar1)();
}



/* Entry: 1052a04dc; end: 1052a04f7;  */

void FUN_1052a04dc(void)

{
  undefined1 uStack_11;
  
  FUN_1052a04f8(&uStack_11);
  return;
}



/* Entry: 1052a04f8; end: 1052a056f;  */

void FUN_1052a04f8(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined1 *puVar3;
  int extraout_w11;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x0001052a257c();
  uStack_28 = extraout_x8;
  FUN_1052a058c(auStack_40,1);
  FUN_1052a05e0(lStack_30);
  lVar2 = lStack_30;
  lStack_30 = 0;
  FUN_1052a0570(param_1,lVar2 + 0x18);
  FUN_1052a06e4();
  func_0x0001052a2504(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001052a280c();
  FUN_1052a06e4();
  func_0x0001052a2660();
  *extraout_x8_00 = puVar1;
  extraout_x8_00[1] = lVar2;
  puVar3 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1 + 8;
  }
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(long *)(puVar3 + 8) == 0 || (*(long *)(*(long *)(puVar3 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_1052a0570;
    lStack_58 = extraout_x8_00[1];
    puStack_60 = puVar1;
    puStack_50 = &stack0xfffffffffffffff0;
    if (lStack_58 != 0) {
      do {
        func_0x0001052a2558();
        puVar3 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    func_0x0001003a8180(puVar3,&puStack_60);
    func_0x0001003a90c4(&puStack_60);
    return;
  }
  return;
}



/* Entry: 1052a0570; end: 1052a058b;  */

void FUN_1052a0570(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x0001052a2558();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x0001003a8180(lVar1,&lStack_20);
    func_0x0001003a90c4(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1052a058c; end: 1052a05b3;  */

long FUN_1052a058c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1052a05b4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1052a05b4; end: 1052a05df;  */

undefined8 * FUN_1052a05b4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x333333333333334) {
    puVar1 = (undefined8 *)(param_2 * 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108746e0;
  param_1[1] = 0;
  func_0x0001052a0634(param_1 + 3);
  return param_1;
}



/* Entry: 1052a05e0; end: 1052a0613;  */

undefined8 * FUN_1052a05e0(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108746e0;
  param_1[1] = 0;
  func_0x0001052a0634(param_1 + 3);
  return param_1;
}



/* Entry: 1052a0614; end: 1052a0617;  */

void FUN_1052a0614(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108746e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052a0618; end: 1052a062b;  */

void FUN_1052a0618(void)

{
  func_0x0001052a0670();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052a062c; end: 1052a0683;  */

void FUN_1052a062c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052a2aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


