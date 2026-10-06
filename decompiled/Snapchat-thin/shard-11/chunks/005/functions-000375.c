/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086d4548; end: 1086d456b;  */

void FUN_1086d4548(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000107c3268c();
  param_1 = param_1 + 8;
  func_0x0001086db60c(&PTR_FUN_110a64a60);
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  lVar2 = *(long *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1086d456c; end: 1086d458f;  */

void FUN_1086d456c(long param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  param_1 = param_1 + 8;
  func_0x0001086db60c(&PTR_FUN_110a64a60);
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1086d4590; end: 1086d47ab;  */

void FUN_1086d4590(void)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined1 auStack_130 [48];
  int iStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107c325d4();
  uStack_58 = extraout_x8;
  func_0x0001086d9e04();
  func_0x0001086dbd28(auStack_130);
  func_0x0001086dbea4();
  uVar1 = iStack_100 == 1;
  if ((bool)uVar1) {
    puVar3 = (undefined8 *)(extraout_x8_00 + 0x18);
    FUN_1086d4854();
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 8) + 0xd0) + 0x100);
    lStack_e8 = *(long *)(unaff_x19 + 0x20);
    uStack_f0 = *(undefined8 *)(unaff_x19 + 0x18);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    puVar2 = &uStack_e0;
    FUN_1086d48a8(puVar2,auStack_130);
    ppuStack_a0 = (undefined **)puVar3[1];
    pcStack_a8 = (code *)*puVar3;
    uStack_98 = puVar3[2];
    func_0x000107c28150();
    lVar5 = *(long *)(lVar5 + 0x10);
    __ZNSt3__15mutex4lockEv(lVar5 + 8);
    lVar6 = *(long *)(lVar5 + 0x70);
    pcStack_90 = FUN_1086d4870;
    ppuStack_88 = &PTR_FUN_110a64ac0;
    puVar3 = (undefined8 *)0x60;
    __Znwm();
    puVar3[1] = lStack_e8;
    *puVar3 = uStack_f0;
    if (lStack_e8 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_00 != 0);
    }
    puVar3[3] = uStack_d8;
    puVar3[2] = uStack_e0;
    puVar3[4] = uStack_d0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    puVar3[6] = CONCAT44(uStack_bc,uStack_c0);
    puVar3[5] = uStack_c8;
    *(undefined8 *)((long)puVar3 + 0x3c) = uStack_b4;
    *(ulong *)((long)puVar3 + 0x34) = CONCAT44(uStack_b8,uStack_bc);
    puVar3[10] = ppuStack_a0;
    puVar3[9] = pcStack_a8;
    puVar3[0xb] = uStack_98;
    pcVar7 = pcStack_a8;
    ppuVar8 = ppuStack_a0;
    puStack_80 = puVar3;
    puStack_60 = puVar2;
    func_0x000107c28154(lVar5 + 0x48,&pcStack_90);
    func_0x0001086d9be4(ppuStack_88);
    __ZNSt3__15mutex6unlockEv(lVar5 + 8);
    if (lVar6 == 0) {
      func_0x0001086da0e0();
      pcStack_90 = pcVar7;
      ppuStack_88 = ppuVar8;
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c325f8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c3265c();
      (*extraout_x8_02)();
      func_0x0001086db0c4();
    }
    FUN_1086d4834();
  }
  else {
    puVar4 = (undefined4 *)(extraout_x8_00 + 0x18);
    FUN_1086d44b0();
    FUN_1086c3620(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x18),
                  *(undefined8 *)(unaff_x19 + 0x20),*puVar4);
  }
  func_0x0001086da03c();
  func_0x000107c325c0(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x0001086db0c4();
    FUN_1086d4834(&uStack_f0);
    func_0x0001086da03c();
    func_0x0001086d9ff8();
    func_0x0001086da3f0();
    func_0x0001086da290();
    func_0x0001086d9b48();
    return;
  }
  return;
}



/* Entry: 1086d47ac; end: 1086d47d3;  */

void FUN_1086d47ac(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a64ad8);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d47d4; end: 1086d4833;  */

undefined ** FUN_1086d47d4(void)

{
  return &PTR_DAT_110a64ad8;
}



/* Entry: 1086d4834; end: 1086d4853;  */

long FUN_1086d4834(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001086da1bc();
  lVar1 = unaff_x19;
  func_0x00010054ffe4();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086d4854; end: 1086d486f;  */

void FUN_1086d4854(long param_1)

{
  long *plVar1;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    return;
  }
  func_0x00010563ab98();
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001086d4880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 **)(param_1 + 0x10) + 9);
  return;
}



/* Entry: 1086d4870; end: 1086d4883;  */

void FUN_1086d4870(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001086d4880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 **)(param_1 + 0x10) + 9);
  return;
}



/* Entry: 1086d4884; end: 1086d48a3;  */

void FUN_1086d4884(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086d4834();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d48a4; end: 1086d48a7;  */

void FUN_1086d48a4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d48a8; end: 1086d48ff;  */

void FUN_1086d48a8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c27994();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x24) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 1086d4900; end: 1086d4913;  */

void FUN_1086d4900(void)

{
  func_0x0001086d48d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d4914; end: 1086d4937;  */

void FUN_1086d4914(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000107c3268c();
  param_1 = param_1 + 8;
  func_0x0001086db60c(&PTR_SUB_110a64af8);
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  lVar2 = *(long *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1086d4938; end: 1086d495b;  */

void FUN_1086d4938(long param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  param_1 = param_1 + 8;
  func_0x0001086db60c(&PTR_SUB_110a64af8);
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1086d495c; end: 1086d49e3;  */

void FUN_1086d495c(long param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_38 = *param_2;
  lStack_28 = param_2[2];
  lStack_30 = param_2[1];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  lVar2 = lStack_38;
  do {
    if (lVar2 == lStack_30) {
      FUN_1086b1a3c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),
                    *(undefined8 *)(param_1 + 0x20));
      goto code_r0x00010066b330;
    }
    piVar1 = (int *)(lVar2 + 0x30);
    lVar2 = lVar2 + 0x38;
  } while (*piVar1 == 1);
  FUN_1086b18e0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20),0);
code_r0x00010066b330:
  func_0x00010086aa78(&lStack_38);
  return;
}



/* Entry: 1086d49e4; end: 1086d4a0b;  */

void FUN_1086d49e4(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a64b58);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d4a0c; end: 1086d4a73;  */

undefined ** FUN_1086d4a0c(void)

{
  return &PTR_DAT_110a64b58;
}



/* Entry: 1086d4a74; end: 1086d4aa7;  */

void FUN_1086d4a74(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32670();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x38;
    func_0x000107c27914();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086d4aa8; end: 1086d4ad7;  */

void FUN_1086d4aa8(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d4ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_2 + 0x10))(*(undefined8 *)(param_2 + 0x18),param_1);
  return;
}



/* Entry: 1086d4ad8; end: 1086d4c5f;  */

void FUN_1086d4ad8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 auStack_3c0 [24];
  undefined8 uStack_3a8;
  long lStack_3a0;
  byte bStack_398;
  undefined1 auStack_370 [24];
  undefined8 uStack_358;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined1 auStack_2f8 [224];
  undefined1 auStack_218 [464];
  undefined1 auStack_48 [24];
  
  puVar6 = *(undefined8 **)(param_3 + 0x10);
  func_0x000107c28fb8(auStack_218,param_1);
  func_0x000107c28a9c(auStack_3c0,param_2);
  puVar4 = auStack_2f8;
  func_0x000107c27cf4(puVar4,&UNK_10f4b1544);
  if ((int)puVar4 != 0) {
    puVar4 = auStack_218;
    FUN_1086a2a68(puVar4,auStack_3c0,*(undefined8 *)*puVar6,puVar6[1]);
    if ((int)puVar4 != 0) {
      FUN_10867b1ac(puVar6[2],&uStack_3a8);
    }
    ppuVar1 = &PTR_PTR_113286e08;
    if (ppuStack_340 != (undefined **)0x0) {
      ppuVar1 = ppuStack_340;
    }
    iVar5 = *(int *)(ppuVar1 + 4);
    if ((*(byte *)puVar6[3] & 1) == 0) {
      func_0x0001086d9cfc(uStack_358);
      func_0x000107c29ee0(auStack_48);
      puVar4 = auStack_48;
      func_0x000107c28f08(puVar4,auStack_370);
      iVar5 = iVar5 - (int)puVar4;
      func_0x0001086db0a0();
    }
    ppuVar1 = &PTR_PTR_113280c30;
    if (ppuStack_348 != (undefined **)0x0) {
      ppuVar1 = ppuStack_348;
    }
    iVar3 = *(int *)(ppuVar1 + 0x15);
    if ((iVar3 == 0 && iVar5 != 0) && (iVar3 != 0 || -1 < iVar5)) {
      if ((bStack_398 == 1) && (*(long *)puVar6[4] < lStack_3a0)) {
        *(long *)puVar6[4] = lStack_3a0;
        puVar6 = (undefined8 *)puVar6[5];
        *puVar6 = uStack_3a8;
        *(undefined1 *)(puVar6 + 1) = 1;
      }
    }
    else if (((iVar3 == 0) && (iVar5 == 0)) && ((bStack_398 & 1) != 0)) {
      lVar2 = puVar6[5];
      *(undefined8 *)puVar6[4] = 0;
      if (*(char *)(lVar2 + 8) == '\x01') {
        *(undefined1 *)(lVar2 + 8) = 0;
      }
    }
  }
  func_0x0001086dad64();
  func_0x000107c287e4(auStack_218);
  return;
}



/* Entry: 1086d4c60; end: 1086d4c73;  */

void FUN_1086d4c60(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d4c74; end: 1086d4cb3;  */

void FUN_1086d4c74(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110a64b80;
  puVar1 = param_1;
  func_0x0001086da334();
  uVar6 = puVar2[3];
  uVar5 = puVar2[2];
  uVar4 = puVar2[5];
  uVar3 = puVar2[4];
  uVar7 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar7;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  puVar1[5] = uVar4;
  puVar1[4] = uVar3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1086d4cb4; end: 1086d4cbf;  */

void FUN_1086d4cb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a64bb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086d4cc0; end: 1086d4cd3;  */

void FUN_1086d4cc0(void)

{
  FUN_1086d4cb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d4cd4; end: 1086d4cdb;  */

void FUN_1086d4cd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d9c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086d4cdc; end: 1086d4d07;  */

undefined8 * FUN_1086d4cdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a64c00;
  func_0x000104be3970(param_1 + 1);
  return param_1;
}



/* Entry: 1086d4d08; end: 1086d4d1b;  */

void FUN_1086d4d08(void)

{
  FUN_1086d4cdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d4d1c; end: 1086d4d9f;  */

void FUN_1086d4d1c(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001086d4d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1086d4da0; end: 1086d4df3;  */

void FUN_1086d4da0(void)

{
  long unaff_x19;
  undefined1 auStack_2d0 [672];
  
  func_0x000107c3275c();
  _bzero();
  FUN_1086d4df4(unaff_x19 + 8,auStack_2d0);
  func_0x0001086db1b4();
  func_0x000107c327dc();
  func_0x000107c31408();
  FUN_1086cf6a4(unaff_x19 + 0x10);
  return;
}



/* Entry: 1086d4df4; end: 1086d4e13;  */

void FUN_1086d4df4(void)

{
  func_0x000107c32708();
  FUN_1086d4e14();
  return;
}



/* Entry: 1086d4e14; end: 1086d4e37;  */

undefined8 FUN_1086d4e14(undefined8 param_1)

{
  FUN_1086d4e38();
  return param_1;
}



/* Entry: 1086d4e38; end: 1086d4e5f;  */

void FUN_1086d4e38(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 0x52);
  if (cVar1 != *(char *)(param_2 + 0x52)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x52) == '\x01') {
        FUN_1086cf6c4();
        *(undefined1 *)(param_1 + 0x52) = 0;
      }
      return;
    }
    FUN_1086d4f60();
    *(undefined1 *)(param_1 + 0x52) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c32678();
    *param_1 = *param_2;
    func_0x000107c3194c(param_1 + 1,param_2 + 1);
    func_0x000107c28960(unaff_x19 + 0x20,unaff_x20 + 0x20);
    func_0x0001086dbce8();
    func_0x0001052b2b60();
    *(undefined4 *)(unaff_x19 + 0x68) = *(undefined4 *)(unaff_x20 + 0x68);
    func_0x000107c3194c(unaff_x19 + 0x70,unaff_x20 + 0x70);
    func_0x0001086dbcd4();
    FUN_10865f9c0(unaff_x19 + 0xa8,unaff_x20 + 0xa8);
    func_0x0001086daffc();
    func_0x0001052b2b60();
    func_0x0001052b2b60(unaff_x19 + 0xf8,unaff_x20 + 0xf8);
    func_0x0001052b2b60(unaff_x19 + 0x118,unaff_x20 + 0x118);
    func_0x0001086dbcac();
    func_0x000107c28908();
    FUN_1086ac3c8(unaff_x19 + 0x160,unaff_x20 + 0x160);
    func_0x0001086dbc98();
    func_0x000107c28908();
    func_0x0001052b2b60(unaff_x19 + 0x250,unaff_x20 + 0x250);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x281);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x279);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x270);
    *(undefined8 *)(unaff_x19 + 0x278) = *(undefined8 *)(unaff_x20 + 0x278);
    *(undefined8 *)(unaff_x19 + 0x270) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x281) = uVar3;
    *(undefined8 *)(unaff_x19 + 0x279) = uVar2;
    return;
  }
  return;
}



/* Entry: 1086d4e60; end: 1086d4f1f;  */

void FUN_1086d4e60(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c32678();
  *param_1 = *param_2;
  func_0x000107c3194c(param_1 + 1,param_2 + 1);
  func_0x000107c28960(unaff_x19 + 0x20,unaff_x20 + 0x20);
  func_0x0001086dbce8();
  func_0x0001052b2b60();
  *(undefined4 *)(unaff_x19 + 0x68) = *(undefined4 *)(unaff_x20 + 0x68);
  func_0x000107c3194c(unaff_x19 + 0x70,unaff_x20 + 0x70);
  func_0x0001086dbcd4();
  FUN_10865f9c0(unaff_x19 + 0xa8,unaff_x20 + 0xa8);
  func_0x0001086daffc();
  func_0x0001052b2b60();
  func_0x0001052b2b60(unaff_x19 + 0xf8,unaff_x20 + 0xf8);
  func_0x0001052b2b60(unaff_x19 + 0x118,unaff_x20 + 0x118);
  func_0x0001086dbcac();
  func_0x000107c28908();
  FUN_1086ac3c8(unaff_x19 + 0x160,unaff_x20 + 0x160);
  func_0x0001086dbc98();
  func_0x000107c28908();
  func_0x0001052b2b60(unaff_x19 + 0x250,unaff_x20 + 0x250);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x281);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x279);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x270);
  *(undefined8 *)(unaff_x19 + 0x278) = *(undefined8 *)(unaff_x20 + 0x278);
  *(undefined8 *)(unaff_x19 + 0x270) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x281) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x279) = uVar1;
  return;
}



/* Entry: 1086d4f20; end: 1086d4f5f;  */

void FUN_1086d4f20(long param_1)

{
  if (*(char *)(param_1 + 0x290) == '\x01') {
    FUN_1086cf6c4();
    *(undefined1 *)(param_1 + 0x290) = 0;
  }
  return;
}



/* Entry: 1086d4f60; end: 1086d5043;  */

void FUN_1086d4f60(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c32678();
  func_0x0001086db634(*param_2);
  func_0x000107c28978(param_1 + 0x20,param_2 + 4);
  func_0x0001086dbce8();
  func_0x000107c27b7c();
  *(undefined4 *)(unaff_x19 + 0x68) = *(undefined4 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  func_0x0001086dbcd4();
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xb0) = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  func_0x0001086daffc();
  func_0x000107c27b7c();
  func_0x000107c27b7c(unaff_x19 + 0xf8,unaff_x20 + 0xf8);
  func_0x000107c27b7c(unaff_x19 + 0x118,unaff_x20 + 0x118);
  func_0x0001086dbcac();
  func_0x000107c27afc();
  FUN_1086ac390(unaff_x19 + 0x160,unaff_x20 + 0x160);
  func_0x0001086dbc98();
  func_0x000107c27afc();
  func_0x000107c27b7c(unaff_x19 + 0x250,unaff_x20 + 0x250);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x278);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x270);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x279);
  *(undefined8 *)(unaff_x19 + 0x281) = *(undefined8 *)(unaff_x20 + 0x281);
  *(undefined8 *)(unaff_x19 + 0x279) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x278) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x270) = uVar1;
  return;
}



/* Entry: 1086d5044; end: 1086d505b;  */

void FUN_1086d5044(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  param_2 = param_2 + 8;
  func_0x000107c32670(param_1,param_2);
  FUN_1086d50e0(param_1 + 1,param_2 + 8);
  func_0x000107c327d0();
  *unaff_x20 = extraout_x9;
  *unaff_x19 = extraout_x8;
  return;
}



/* Entry: 1086d505c; end: 1086d50af;  */

long FUN_1086d505c(long param_1)

{
  if ((*(byte *)(param_1 + 0x298) & 1) == 0) {
    func_0x0001086dacf0();
    func_0x0001086dae30();
    func_0x0001086daf9c();
    func_0x000107c326ac();
    func_0x000107c32690();
  }
  return param_1 + 8;
}



/* Entry: 1086d50b0; end: 1086d50df;  */

void FUN_1086d50b0(long param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107c32670();
  FUN_1086d50e0(param_1 + 8,param_2 + 8);
  func_0x000107c327d0();
  *unaff_x20 = extraout_x9;
  *unaff_x19 = extraout_x8;
  return;
}



/* Entry: 1086d50e0; end: 1086d514b;  */

void FUN_1086d50e0(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_2c0 [656];
  
  func_0x000107c32670();
  cVar1 = *(char *)(param_1 + 0x290);
  if (cVar1 != *(char *)(param_2 + 0x290)) {
    if (cVar1 == '\0') {
      func_0x000107c326d0();
      func_0x0001086d4f44();
    }
    else {
      func_0x0001086da5dc();
      func_0x0001086d4f44();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0x290) == '\x01') {
      FUN_1086cf6c4();
      *(undefined1 *)(unaff_x19 + 0x290) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c326d0();
    func_0x000107c32670();
    func_0x000107c327a8();
    FUN_1086d4f60();
    func_0x000107c326d0();
    FUN_1086d4e60();
    func_0x000107c32738();
    FUN_1086d4e60();
    FUN_1086cf6c4(auStack_2c0);
    return;
  }
  return;
}



/* Entry: 1086d514c; end: 1086d518f;  */

void FUN_1086d514c(void)

{
  undefined1 auStack_2c0 [656];
  
  func_0x000107c32670();
  func_0x000107c327a8();
  FUN_1086d4f60();
  func_0x000107c326d0();
  FUN_1086d4e60();
  func_0x000107c32738();
  FUN_1086d4e60();
  FUN_1086cf6c4(auStack_2c0);
  return;
}



/* Entry: 1086d5190; end: 1086d51c3;  */

void FUN_1086d5190(long param_1)

{
  FUN_1086d4f60();
  *(undefined1 *)(param_1 + 0x290) = 1;
  return;
}



/* Entry: 1086d51c4; end: 1086d51f7;  */

void FUN_1086d51c4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1086d51f8; end: 1086d521b;  */

void FUN_1086d51f8(long param_1)

{
  func_0x000107c32694();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 1086d521c; end: 1086d521f;  */

void FUN_1086d521c(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001006cee64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 **)(param_1 + 0x10) + 2);
  return;
}



/* Entry: 1086d5220; end: 1086d523f;  */

void FUN_1086d5220(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086c3b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d5240; end: 1086d528b;  */

void FUN_1086d5240(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d528c; end: 1086d52ab;  */

void FUN_1086d528c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086c3d58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d52ac; end: 1086d52cf;  */

void FUN_1086d52ac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d52d0; end: 1086d52ef;  */

void FUN_1086d52d0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001086c3df4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d52f0; end: 1086d52f3;  */

void FUN_1086d52f0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d52f4; end: 1086d534f;  */

long FUN_1086d52f4(long param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c28960(param_1 + 0x10,(ulong)&uStack_50 | 8);
  func_0x000107c28754((ulong)&uStack_50 | 8);
  func_0x000107c327dc();
  func_0x000107c31408();
  func_0x000107c28754(param_1 + 0x10);
  return param_1;
}



/* Entry: 1086d5350; end: 1086d53b3;  */

void FUN_1086d5350(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_38 [24];
  
  func_0x000107c32714();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x0001086d53e4(auStack_38,*unaff_x19);
    func_0x000107c326ec();
    func_0x0001086d53b4();
    func_0x000104bee630(auStack_38);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 4) == '\x01') {
    func_0x000104bee630();
    *(undefined1 *)(puVar1 + 3) = 0;
  }
  return;
}



/* Entry: 1086d53b4; end: 1086d5407;  */

void FUN_1086d53b4(void)

{
  int extraout_w8;
  
  func_0x000107c32760();
  if (extraout_w8 == 1) {
    FUN_10865f9c0();
  }
  else {
    FUN_10865f9a8();
  }
  return;
}



/* Entry: 1086d5408; end: 1086d540b;  */

void FUN_1086d5408(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001006cee64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 **)(param_1 + 0x10) + 2);
  return;
}



/* Entry: 1086d540c; end: 1086d542b;  */

void FUN_1086d540c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086c47a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d542c; end: 1086d5473;  */

void FUN_1086d542c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d5474; end: 1086d566b;  */

undefined1  [16] FUN_1086d5474(undefined8 param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 in_NG;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long extraout_x8;
  undefined8 extraout_x9;
  ulong uVar6;
  long *unaff_x21;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  ulong unaff_x27;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_78 [24];
  
  uVar6 = param_3;
  FUN_108848654();
  uVar9 = param_2[1];
  if (uVar9 != 0) {
    uVar10 = uVar9 - 1;
    uVar8 = (uint)uVar9;
    if ((uVar9 & uVar10) == 0) {
      unaff_x27 = uVar8 - 1 & uVar6;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar6 - uVar9) < 0;
      unaff_x27 = uVar6;
      if (uVar9 <= uVar6) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = (uint)uVar6 / uVar8;
        }
        unaff_x27 = (ulong)((uint)uVar6 - uVar1 * uVar8);
      }
    }
    plVar7 = *(long **)(*param_2 + unaff_x27 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar7;
          if (unaff_x21 == (long *)0x0) goto LAB_1086d5548;
          uVar5 = unaff_x21[1];
          in_NG = (long)(uVar5 - uVar6) < 0;
          plVar7 = unaff_x21;
          if (uVar5 != uVar6) break;
          plVar3 = unaff_x21 + 2;
          func_0x000107c28078(plVar3,param_3);
          if (((ulong)plVar3 & 1) != 0) {
            uVar4 = 0;
            goto LAB_1086d563c;
          }
        }
        if ((uVar9 & uVar10) == 0) {
          uVar5 = uVar5 & uVar10;
        }
        else if (uVar9 <= uVar5) {
          uVar2 = 0;
          if (uVar9 != 0) {
            uVar2 = uVar5 / uVar9;
          }
          uVar5 = uVar5 - uVar2 * uVar9;
        }
        in_NG = (long)(uVar5 - unaff_x27) < 0;
      } while (uVar5 == unaff_x27);
    }
  }
LAB_1086d5548:
  func_0x0001086da5dc(auStack_78);
  FUN_1086d566c();
  func_0x0001086dbec8(param_2[3]);
  if ((uVar9 == 0) || (func_0x0001086dbc80(param_1,(int)param_2[4],(float)uVar9), (bool)in_NG)) {
    func_0x0001086d9f3c(uVar9 << 1);
    FUN_1086d5710(param_2);
    uVar9 = param_2[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x27 = (int)uVar9 - 1 & uVar6;
    }
    else {
      unaff_x27 = uVar6;
      if (uVar9 <= uVar6) {
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar6 / uVar9;
        }
        unaff_x27 = uVar6 - uVar10 * uVar9;
      }
    }
  }
  if (*(long *)(*param_2 + unaff_x27 * 8) == 0) {
    func_0x0001086db498();
    *(undefined8 *)(extraout_x8 + unaff_x27 * 8) = extraout_x9;
    if (*unaff_x21 != 0) {
      uVar6 = *(ulong *)(*unaff_x21 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar6 = uVar6 & uVar9 - 1;
      }
      else if (uVar9 <= uVar6) {
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar6 / uVar9;
        }
        uVar6 = uVar6 - uVar10 * uVar9;
      }
      *(long **)(extraout_x8 + uVar6 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001086dbc6c();
  }
  func_0x0001086db4f8();
  FUN_1086d589c();
  uVar4 = 1;
LAB_1086d563c:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = unaff_x21;
  return auVar11;
}



/* Entry: 1086d566c; end: 1086d56bf;  */

void FUN_1086d566c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 2;
  func_0x000107c32774();
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 0;
  *param_2 = 0;
  param_2[1] = param_3;
  FUN_1086d56c0(param_2 + 2,*param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1086d56c0; end: 1086d570f;  */

void FUN_1086d56c0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x0001086d56e4(param_1,&uStack_18,&uStack_19);
  return;
}



/* Entry: 1086d5710; end: 1086d57a7;  */

void FUN_1086d5710(ulong param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long extraout_x8_01;
  ulong extraout_x9;
  long *extraout_x9_00;
  long *plVar6;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = param_1;
  uVar4 = param_2;
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar3 = param_2;
  }
  uVar9 = *(ulong *)(param_1 + 8);
  bVar2 = uVar9 <= param_2;
  if (uVar9 < param_2) {
LAB_1086d5758:
    func_0x0001086da5dc();
    if (uVar4 == 0) {
      FUN_1086d5868(uVar3);
      *(undefined8 *)(uVar3 + 8) = 0;
    }
    else {
      FUN_1086d5880(uVar3 + 8);
      func_0x0001086dbe00();
      FUN_1086d5868();
      func_0x0001086db3a8();
      for (uVar9 = extraout_x9; uVar4 != uVar9; uVar9 = uVar9 + 1) {
        *(undefined8 *)(extraout_x8 + uVar9 * 8) = 0;
      }
      if (*(long *)(uVar3 + 0x10) != 0) {
        func_0x0001086daa0c();
        func_0x0001086da9f8();
        lVar5 = extraout_x8_00;
        plVar7 = extraout_x9_00;
        uVar3 = extraout_x10;
        uVar9 = extraout_x11;
        while (plVar6 = plVar7, plVar7 = (long *)*plVar6, plVar7 != (long *)0x0) {
          uVar8 = plVar7[1];
          if ((uVar4 & uVar3) == 0) {
            uVar8 = uVar8 & uVar3;
          }
          else if (uVar4 <= uVar8) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar8 / uVar4;
            }
            uVar8 = uVar8 - uVar1 * uVar4;
          }
          if (uVar8 != uVar9) {
            if (*(long *)(lVar5 + uVar8 * 8) == 0) {
              *(long **)(lVar5 + uVar8 * 8) = plVar6;
              uVar9 = uVar8;
            }
            else {
              func_0x0001086da070();
              lVar5 = extraout_x8_01;
              plVar7 = extraout_x9_01;
              uVar3 = extraout_x10_00;
              uVar9 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!bVar2) {
    func_0x0001086db2a4();
    if ((bVar2) && ((uVar9 & uVar9 - 1) == 0)) {
      func_0x0001086da090();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= uVar3) {
      param_2 = uVar3;
    }
    if (param_2 < uVar9) goto LAB_1086d5758;
  }
  return;
}



/* Entry: 1086d57a8; end: 1086d5867;  */

void FUN_1086d57a8(long param_1,ulong param_2)

{
  ulong uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  ulong extraout_x9;
  ulong uVar3;
  long *extraout_x9_00;
  long *plVar4;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1086d5868(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    FUN_1086d5880(param_1 + 8);
    func_0x0001086dbe00();
    FUN_1086d5868();
    func_0x0001086db3a8();
    for (uVar3 = extraout_x9; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(extraout_x8 + uVar3 * 8) = 0;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001086daa0c();
      func_0x0001086da9f8();
      lVar2 = extraout_x8_00;
      plVar6 = extraout_x9_00;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x0001086da070();
            lVar2 = extraout_x8_01;
            plVar6 = extraout_x9_01;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1086d5868; end: 1086d587f;  */

void FUN_1086d5868(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d5880; end: 1086d589b;  */

void FUN_1086d5880(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107c327e0();
  FUN_1086d58bc();
  return;
}



/* Entry: 1086d589c; end: 1086d58bb;  */

void FUN_1086d589c(void)

{
  func_0x000107c327e0();
  FUN_1086d58bc();
  return;
}



/* Entry: 1086d58bc; end: 1086d58d3;  */

void FUN_1086d58bc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x0001086d2ce8(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1086d58d4; end: 1086d5913;  */

void FUN_1086d58d4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001086d2ce8(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1086d5914; end: 1086d59e3;  */

long FUN_1086d5914(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = param_1[1];
  if ((uVar8 != 0) && (param_1[3] != 0)) {
    uVar3 = param_2;
    FUN_108848654();
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      uVar10 = uVar3 & uVar9;
    }
    else {
      uVar10 = uVar3;
      if (uVar8 <= uVar3) {
        uVar1 = 0;
        uVar7 = (uint)uVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)uVar3 / uVar7;
        }
        uVar10 = (ulong)((uint)uVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + uVar10 * 8);
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        uVar5 = plVar6[1];
        if (uVar5 != uVar3) break;
        lVar4 = (long)(plVar6 + 2);
        func_0x000107c28078(lVar4,param_2);
        if ((int)lVar4 != 0) {
          return (long)plVar6;
        }
      }
      if ((uVar8 & uVar9) == 0) {
        uVar5 = uVar5 & uVar9;
      }
      else if (uVar8 <= uVar5) {
        uVar2 = 0;
        if (uVar8 != 0) {
          uVar2 = uVar5 / uVar8;
        }
        uVar5 = uVar5 - uVar2 * uVar8;
      }
    } while (uVar5 == uVar10);
  }
  return 0;
}



/* Entry: 1086d59e4; end: 1086d59fb;  */

void FUN_1086d59e4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  plVar4 = (long *)(long)((float)param_2 / *(float *)(param_1 + 4));
  plVar2 = param_1;
  plVar3 = plVar4;
  if ((long)plVar4 - 1U == 0) {
    plVar4 = (long *)0x2;
  }
  else if (((ulong)plVar4 & (long)plVar4 - 1U) != 0) {
    func_0x000107c60c44();
    plVar2 = plVar4;
  }
  plVar8 = (long *)param_1[1];
  if (plVar4 <= plVar8) {
    if (plVar4 < plVar8) {
      plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
        func_0x000107c60c44();
      }
      else if ((long *)0x1 < plVar2) {
        plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 - 1) & 0x3fU));
      }
      if (plVar4 <= plVar2) {
        plVar4 = plVar2;
      }
      if (plVar4 < plVar8) goto code_r0x0001004e8304;
    }
    return;
  }
code_r0x0001004e8304:
  func_0x0001004e820c();
  if (plVar3 == (long *)0x0) {
    func_0x0001004e8498(plVar2);
    plVar2[1] = 0;
  }
  else {
    plVar4 = plVar2 + 1;
    func_0x0001004e8380(plVar4);
    func_0x0001004e8498(plVar2,plVar4);
    plVar2[1] = (long)plVar3;
    lVar5 = *plVar2;
    for (plVar4 = (long *)0x0; plVar3 != plVar4; plVar4 = (long *)((long)plVar4 + 1)) {
      *(undefined8 *)(lVar5 + (long)plVar4 * 8) = 0;
    }
    plVar4 = (long *)plVar2[2];
    if (plVar4 != (long *)0x0) {
      plVar8 = (long *)plVar4[1];
      uVar6 = (long)plVar3 - 1;
      uVar1 = 0;
      if (plVar3 != (long *)0x0) {
        uVar1 = (ulong)plVar8 / (ulong)plVar3;
      }
      plVar7 = plVar8;
      if (plVar3 <= plVar8) {
        plVar7 = (long *)((long)plVar8 - uVar1 * (long)plVar3);
      }
      if (((ulong)plVar3 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar8 & uVar6);
      }
      *(long **)(lVar5 + (long)plVar7 * 8) = plVar2 + 2;
      while (plVar2 = plVar4, plVar4 = (long *)*plVar2, plVar4 != (long *)0x0) {
        plVar8 = (long *)plVar4[1];
        if (((ulong)plVar3 & uVar6) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar6);
        }
        else if (plVar3 <= plVar8) {
          uVar1 = 0;
          if (plVar3 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)plVar3;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)plVar3);
        }
        if (plVar8 != plVar7) {
          if (*(long *)(lVar5 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar8 * 8) = plVar2;
            plVar7 = plVar8;
          }
          else {
            *plVar2 = *plVar4;
            *plVar4 = **(undefined8 **)(lVar5 + (long)plVar8 * 8);
            **(long **)(lVar5 + (long)plVar8 * 8) = (long)plVar4;
            plVar4 = plVar2;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1086d59fc; end: 1086d5a0f;  */

void FUN_1086d59fc(void)

{
  func_0x0001086d5a18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d5a10; end: 1086d5a23;  */

void FUN_1086d5a10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d9c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086d5a24; end: 1086d5a6b;  */

void FUN_1086d5a24(long param_1)

{
  func_0x000107c32694();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 1086d5a6c; end: 1086d5af3;  */

void FUN_1086d5a6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 1086d5af4; end: 1086d5b1f;  */

undefined8 * FUN_1086d5af4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a64da0;
  FUN_1086c5560(param_1 + 1);
  return param_1;
}



/* Entry: 1086d5b20; end: 1086d5b33;  */

void FUN_1086d5b20(void)

{
  FUN_1086d5af4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d5b34; end: 1086d5b67;  */

undefined8 FUN_1086d5b34(undefined8 param_1)

{
  func_0x000107c326e0();
  FUN_1086d5e38();
  return param_1;
}



/* Entry: 1086d5b68; end: 1086d5b8b;  */

void FUN_1086d5b68(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  func_0x000107c32678();
  *param_2 = &PTR_FUN_110a64da0;
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_2[2] = puVar1[1];
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c27994(unaff_x19 + 0x18,unaff_x20 + 0x10);
  func_0x0001086db3c8();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1086d5b8c; end: 1086d5e03;  */

void FUN_1086d5b8c(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined1 auStack_268 [40];
  undefined8 uStack_240;
  undefined **ppuStack_238;
  undefined1 uStack_230;
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [440];
  char cStack_58;
  long alStack_50 [2];
  code *pcStack_40;
  undefined **ppuStack_38;
  code *pcStack_30;
  undefined **ppuStack_28;
  undefined1 uStack_20;
  undefined1 *puStack_10;
  undefined8 uStack_8;
  
  func_0x0001086dbb70();
  func_0x0001086d9934();
  uStack_8 = extraout_x8;
  func_0x0001086d9e04();
  func_0x0001086dbea4();
  func_0x0001086dbd28();
  FUN_1086ce034(alStack_50,unaff_x20 + 8);
  if ((alStack_50[0] == 0) || ((*(byte *)(alStack_50[0] + 0x110) & 1) != 0)) goto LAB_1086d5d74;
  puVar1 = auStack_268;
  FUN_1086d5eb4();
  if ((((ulong)puVar1 >> 0x20 & 1) != 0) && (in_ZR = (int)puVar1 == 7, !(bool)in_ZR)) {
    FUN_1086c5584(alStack_50[0],*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                  puVar1);
    FUN_1086a62b8(puVar1,*(undefined8 *)(*(long *)(alStack_50[0] + 0xd0) + 0x130));
    goto LAB_1086d5d74;
  }
  func_0x0001086da914(alStack_50[0]);
  func_0x0001086da598(auStack_228);
  in_ZR = cStack_58 == '\x01';
  if ((bool)in_ZR) {
    uStack_240 = (code *)((ulong)uStack_240._4_4_ << 0x20);
    func_0x000107c27994(&pcStack_40,alStack_50[0] + 0x98);
    puVar1 = auStack_210;
    puVar2 = &uStack_240;
    FUN_1086a3d00(puVar1,puVar2,&pcStack_40);
    func_0x0001086da694();
    if (((ulong)puVar2 & 1) == 0) goto LAB_1086d5c64;
    func_0x0001086da914(alStack_50[0]);
    FUN_108863500();
    puVar3 = puVar1;
  }
  else {
LAB_1086d5c64:
    puVar3 = (undefined1 *)0x0;
  }
  lVar4 = *(long *)(*(long *)(alStack_50[0] + 0xd0) + 0x100);
  ppuStack_238 = *(undefined ***)(unaff_x20 + 0x38);
  uStack_240 = *(code **)(unaff_x20 + 0x30);
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  uStack_230 = SUB81(puVar3,0);
  func_0x000107c28150();
  lVar4 = *(long *)(lVar4 + 0x10);
  func_0x0001086da438();
  lVar5 = *(long *)(lVar4 + 0x70);
  pcStack_40 = FUN_1086d5ef8;
  ppuStack_38 = &PTR_DAT_110a64e00;
  ppuStack_28 = ppuStack_238;
  pcStack_30 = uStack_240;
  pcVar6 = uStack_240;
  ppuVar7 = ppuStack_238;
  if (ppuStack_238 != (undefined **)0x0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  uStack_20 = uStack_230;
  puStack_10 = puVar1;
  func_0x000107c28154(lVar4 + 0x48,&pcStack_40);
  func_0x0001086d9be4(ppuStack_38);
  func_0x0001086da250();
  if (lVar5 == 0) {
    func_0x0001086da0e0();
    pcStack_40 = pcVar6;
    ppuStack_38 = ppuVar7;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c3265c();
    (*extraout_x8_01)();
    func_0x0001086db0c4();
  }
  func_0x0001086217f4(&uStack_240);
  FUN_1086a61a0(puVar3,*(undefined8 *)(*(long *)(alStack_50[0] + 0xd0) + 0x130));
  func_0x0001086da33c();
LAB_1086d5d74:
  func_0x000107c29120();
  func_0x0001086da03c();
  func_0x000107c325c0(uStack_8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086da33c();
    func_0x000107c29120(alStack_50);
    func_0x0001086da03c();
    func_0x0001086d9ff8();
    func_0x0001086da3f0();
    func_0x0001086da290();
    func_0x0001086d9b48();
    return;
  }
  return;
}



/* Entry: 1086d5e04; end: 1086d5e2b;  */

void FUN_1086d5e04(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a64e18);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d5e2c; end: 1086d5e37;  */

undefined ** FUN_1086d5e2c(void)

{
  return &PTR_DAT_110a64e18;
}



/* Entry: 1086d5e38; end: 1086d5eb3;  */

void FUN_1086d5e38(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c32678();
  *param_1 = &PTR_FUN_110a64da0;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c27994(unaff_x19 + 0x18,unaff_x20 + 0x10);
  func_0x0001086db3c8();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1086d5eb4; end: 1086d5ef7;  */

ulong FUN_1086d5eb4(uint *param_1)

{
  if (param_1[6] != 0) {
    return 0;
  }
  func_0x0001086d5ee0();
  return (ulong)*param_1 | 0x100000000;
}



/* Entry: 1086d5ef8; end: 1086d5f4b;  */

void FUN_1086d5ef8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086da240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (*(long **)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 1086d5f4c; end: 1086d5f97;  */

void FUN_1086d5f4c(void)

{
  long alStack_30 [2];
  
  func_0x0001086da128();
  FUN_1086d2e00();
  if (alStack_30[0] != 0) {
    func_0x0001086da408();
    func_0x0001086db7b8();
  }
  func_0x000107c29134(alStack_30);
  return;
}



/* Entry: 1086d5f98; end: 1086d5fc3;  */

long FUN_1086d5f98(long param_1)

{
  long lStack_28;
  
  FUN_1086cc6ac(param_1 + 0x20);
  lStack_28 = param_1 + 8;
  func_0x00010867ba30(&lStack_28);
  return param_1 + 8;
}



/* Entry: 1086d5fc4; end: 1086d607f;  */

void FUN_1086d5fc4(long param_1)

{
  code *extraout_x8;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [40];
  long alStack_30 [2];
  
  FUN_1086ce034(alStack_30,*(undefined8 *)(param_1 + 0x10));
  if ((alStack_30[0] != 0) && ((*(byte *)(alStack_30[0] + 0x110) & 1) == 0)) {
    func_0x0001086da914();
    FUN_10886a684(auStack_78);
    FUN_1086d6080(auStack_58,auStack_78);
    func_0x000107c29020(auStack_78);
    func_0x000107c3265c(*(undefined8 *)(*(long *)(alStack_30[0] + 0xd0) + 400));
    (*extraout_x8)();
    func_0x00010867bb84(auStack_58);
  }
  func_0x000107c29120(alStack_30);
  return;
}



/* Entry: 1086d6080; end: 1086d60cf;  */

void FUN_1086d6080(undefined8 param_1)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c29024(&uStack_50);
  uStack_28 = uStack_40;
  uStack_30 = uStack_48;
  uStack_38 = uStack_50;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  FUN_1086d60d0(param_1,&uStack_38,&uStack_68);
  return;
}



/* Entry: 1086d60d0; end: 1086d6127;  */

void FUN_1086d60d0(void)

{
  func_0x0001086db5dc();
  FUN_1086d6128();
  return;
}



/* Entry: 1086d6128; end: 1086d617f;  */

void FUN_1086d6128(void)

{
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c325fc();
  while ((((*(byte *)(unaff_x20 + 0x10) & 1) != 0 || ((*(byte *)(unaff_x19 + 0x10) & 1) != 0)) &&
         (func_0x000107c327d0(), extraout_x8 != extraout_x9))) {
    func_0x000107c2902c();
    func_0x00010867b2a4();
    func_0x000107c29030();
  }
  return;
}



/* Entry: 1086d6180; end: 1086d619f;  */

void FUN_1086d6180(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001086c5688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d61a0; end: 1086d61ab;  */

void FUN_1086d61a0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d61ac; end: 1086d61d3;  */

void FUN_1086d61ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001086d9fd4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_110a64e68;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1086d61d4; end: 1086d61f7;  */

void FUN_1086d61d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110a64e68;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1086d61f8; end: 1086d621f;  */

void FUN_1086d61f8(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a64ec8);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d6220; end: 1086d6233;  */

undefined ** FUN_1086d6220(void)

{
  return &PTR_DAT_110a64ec8;
}



/* Entry: 1086d6234; end: 1086d6263;  */

void FUN_1086d6234(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086da3c4();
  func_0x0001086db408(&PTR_DAT_110a64ee8);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 1086d6264; end: 1086d6287;  */

void FUN_1086d6264(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_110a64ee8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1086d6288; end: 1086d62af;  */

void FUN_1086d6288(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a64f48);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d62b0; end: 1086d62bb;  */

undefined ** FUN_1086d62b0(void)

{
  return &PTR_DAT_110a64f48;
}



/* Entry: 1086d62bc; end: 1086d62d7;  */

long * FUN_1086d62bc(long *param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001086d62c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return param_1;
  }
  func_0x000104bfeb48();
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    param_1[3] = 0;
  }
  else if (lVar1 == param_2) {
    param_1[3] = (long)param_1;
    func_0x0001086da408(*(undefined8 *)(param_2 + 0x18));
    func_0x0001086db7d0();
  }
  else {
    func_0x000107c3265c();
    (*extraout_x8)();
    param_1[3] = lVar1;
  }
  return param_1;
}



/* Entry: 1086d62d8; end: 1086d634b;  */

long FUN_1086d62d8(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x0001086da408(*(undefined8 *)(param_2 + 0x18));
    func_0x0001086db7d0();
  }
  else {
    func_0x000107c3265c();
    (*extraout_x8)();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}


