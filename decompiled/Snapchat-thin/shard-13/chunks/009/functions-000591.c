/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae8e8e4; end: 10ae8e91b;  */

undefined8 FUN_10ae8e8e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10ae8e91c; end: 10ae8e977;  */

void FUN_10ae8e91c(void)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x19;
  undefined8 uStack_48;
  
  func_0x00010ae8fe98();
  FUN_10ae8eb74();
  lVar2 = unaff_x19 + 0x30;
  func_0x00010ae90078();
  func_0x00010ae90108();
  func_0x00010ae8ff24();
  func_0x00010ae8fe74();
  if ((int)lVar2 != 0) {
    func_0x00010ae8fe2c();
  }
  func_0x000107c35000(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(lVar2 + 0xc0) = 1;
  func_0x00010ae900e8();
  iVar1 = (int)lVar2;
  func_0x00010ae8ffa8();
  func_0x00010ae8fe50();
  if (iVar1 == 0) {
    return;
  }
  func_0x00010ae8fef0();
                    /* WARNING: Could not recover jumptable at 0x00010ae8ffd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10ae8e978; end: 10ae8e9b7;  */

void FUN_10ae8e978(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0xc0) = 1;
  func_0x00010ae900e8();
  func_0x00010ae8ffa8();
  func_0x00010ae8fe50();
  if (iVar1 == 0) {
    return;
  }
  func_0x00010ae8fef0();
                    /* WARNING: Could not recover jumptable at 0x00010ae8ffd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10ae8e9b8; end: 10ae8eac7;  */

long * FUN_10ae8e9b8(long *param_1)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010ae90028();
    (*extraout_x8)();
  }
  return param_1;
}



/* Entry: 10ae8eac8; end: 10ae8eafb;  */

void FUN_10ae8eac8(byte *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    *(undefined1 *)(param_2 + 0x11) = 1;
    if ((*param_1 & 1) == 0) {
      *(undefined8 *)(param_2 + 0xb8) = 0;
      *(undefined8 *)(param_2 + 0xc0) = 0;
    }
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010ae8eaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}



/* Entry: 10ae8eafc; end: 10ae8eb73;  */

undefined8 FUN_10ae8eafc(long param_1)

{
  ulong uVar1;
  code *extraout_x8;
  long lVar2;
  int extraout_w10;
  undefined1 auVar3 [16];
  
  func_0x000107c27ca0(param_1 + 200);
  *(long *)(param_1 + 0xf0) = param_1 + 0x90;
  *(long *)(param_1 + 0xf8) = param_1;
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x188) = param_1 + 0x2a;
  }
  auVar3 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x40),*(undefined1 (*) [16])(param_1 + 0x40),8,
                    1);
  *(long *)(param_1 + 0x1a0) = auVar3._8_8_;
  *(long *)(param_1 + 0x198) = auVar3._0_8_;
  uVar1 = param_1 + 200;
  func_0x000107c27ca8();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  do {
    func_0x00010ae8ffe4();
  } while (extraout_w10 != 0);
  if (*(long *)(param_1 + 0xf8) == 0) {
    func_0x000104c019cc();
    func_0x000104c01ae0();
    (*extraout_x8)();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xf0) + 0x20);
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0xf0) + 0x28);
    if (lVar2 == 0) {
      return 1;
    }
    if (*(long *)(lVar2 + 0x20) == *(long *)(lVar2 + 0x28)) {
      return 1;
    }
    func_0x000104c0070c(param_1 + 200);
  }
  else {
    if (*(long *)(lVar2 + 0x28) == *(long *)(lVar2 + 0x30)) {
      return 1;
    }
    func_0x0001004b972c(param_1 + 200);
  }
  return 0;
}



/* Entry: 10ae8eb74; end: 10ae8ebc7;  */

void FUN_10ae8eb74(long param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((*(long *)(param_1 + 0x10) != 0) && ((*(byte *)(param_1 + 0x21) & 1) == 0)) {
    lVar1 = *param_3;
    *param_3 = lVar1 + 1;
    puVar2 = (undefined8 *)(param_2 + lVar1 * 0x50);
    *puVar2 = 5;
    puVar2[1] = 0;
    puVar2[2] = param_1 + 0x18;
  }
  return;
}



/* Entry: 10ae8ebc8; end: 10ae8ecb3;  */

void FUN_10ae8ebc8(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010ae8fff4();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010ae8ff38(uVar1);
  return;
}



/* Entry: 10ae8ecb4; end: 10ae8ecbb;  */

void FUN_10ae8ecb4(void)

{
  return;
}



/* Entry: 10ae8ecbc; end: 10ae8ecf3;  */

void FUN_10ae8ecbc(void)

{
  func_0x00010ae90170();
  func_0x00010ae90118();
  func_0x00010ae902d4();
  FUN_10ae8ed48();
  return;
}



/* Entry: 10ae8ecf4; end: 10ae8ed13;  */

void FUN_10ae8ecf4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c8bf28;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10ae8ed14; end: 10ae8ed3b;  */

void FUN_10ae8ed14(undefined8 param_1)

{
  func_0x00010ae902e4();
  func_0x00010ae90238(param_1,&PTR_DAT_110c8bf88);
  func_0x00010ae90130();
  return;
}



/* Entry: 10ae8ed3c; end: 10ae8ed47;  */

undefined ** FUN_10ae8ed3c(void)

{
  return &PTR_DAT_110c8bf88;
}



/* Entry: 10ae8ed48; end: 10ae8ed67;  */

void FUN_10ae8ed48(void)

{
  func_0x00010ae9020c();
  FUN_10ae8ed68();
  return;
}



/* Entry: 10ae8ed68; end: 10ae8ed87;  */

void FUN_10ae8ed68(long *param_1,long param_2)

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



/* Entry: 10ae8ed88; end: 10ae8edd7;  */

void FUN_10ae8ed88(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar5 = *param_1;
  plVar6 = *(long **)(lVar5 + 0x40);
  if ((int)param_2 != 0) {
    plVar3 = plVar6;
    (**(code **)(*plVar6 + 0x20))(plVar6,*(undefined8 *)(lVar5 + 0x20));
    param_2 = (ulong)((uint)plVar3 ^ 1);
  }
  (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  plVar6 = (long *)(lVar5 + 0x478);
  do {
    lVar4 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    auStack_58[0] = *(undefined4 *)(lVar5 + 0x440);
    uStack_40 = *(undefined8 *)(lVar5 + 0x458);
    uStack_48 = *(undefined8 *)(lVar5 + 0x450);
    uStack_50 = *(undefined8 *)(lVar5 + 0x448);
    *(undefined8 *)(lVar5 + 0x458) = 0;
    *(undefined8 *)(lVar5 + 0x450) = 0;
    *(undefined8 *)(lVar5 + 0x448) = 0;
    uStack_30 = *(undefined8 *)(lVar5 + 0x468);
    uStack_38 = *(undefined8 *)(lVar5 + 0x460);
    uStack_28 = *(undefined8 *)(lVar5 + 0x470);
    *(undefined8 *)(lVar5 + 0x468) = 0;
    *(undefined8 *)(lVar5 + 0x460) = 0;
    *(undefined8 *)(lVar5 + 0x470) = 0;
    plVar6 = *(long **)(lVar5 + 0x40);
    func_0x00010ae8ec70();
    func_0x000107c35004();
    func_0x00010ae90354(*(undefined8 *)(extraout_x8 + 0x128));
    (**(code **)(*plVar6 + 0x10))(plVar6,auStack_58);
    func_0x00010ae90070();
  }
  return;
}



/* Entry: 10ae8edd8; end: 10ae8ee8b;  */

void FUN_10ae8edd8(long param_1)

{
  char cVar1;
  bool bVar2;
  long extraout_x8;
  long lVar3;
  long *plVar4;
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar4 = (long *)(param_1 + 0x478);
  do {
    lVar3 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 == 0) {
    auStack_58[0] = *(undefined4 *)(param_1 + 0x440);
    uStack_40 = *(undefined8 *)(param_1 + 0x458);
    uStack_48 = *(undefined8 *)(param_1 + 0x450);
    uStack_50 = *(undefined8 *)(param_1 + 0x448);
    *(undefined8 *)(param_1 + 0x458) = 0;
    *(undefined8 *)(param_1 + 0x450) = 0;
    *(undefined8 *)(param_1 + 0x448) = 0;
    uStack_30 = *(undefined8 *)(param_1 + 0x468);
    uStack_38 = *(undefined8 *)(param_1 + 0x460);
    uStack_28 = *(undefined8 *)(param_1 + 0x470);
    *(undefined8 *)(param_1 + 0x468) = 0;
    *(undefined8 *)(param_1 + 0x460) = 0;
    *(undefined8 *)(param_1 + 0x470) = 0;
    plVar4 = *(long **)(param_1 + 0x40);
    func_0x00010ae8ec70();
    func_0x000107c35004();
    func_0x00010ae90354(*(undefined8 *)(extraout_x8 + 0x128));
    (**(code **)(*plVar4 + 0x10))(plVar4,auStack_58);
    func_0x00010ae90070();
  }
  return;
}



/* Entry: 10ae8ee8c; end: 10ae8ee93;  */

void FUN_10ae8ee8c(void)

{
  return;
}



/* Entry: 10ae8ee94; end: 10ae8eecb;  */

void FUN_10ae8ee94(void)

{
  func_0x00010ae90170();
  func_0x00010ae90118();
  func_0x00010ae902d4();
  FUN_10ae8ef20();
  return;
}



/* Entry: 10ae8eecc; end: 10ae8eeeb;  */

void FUN_10ae8eecc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c8bfa8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10ae8eeec; end: 10ae8ef13;  */

void FUN_10ae8eeec(undefined8 param_1)

{
  func_0x00010ae902e4();
  func_0x00010ae90238(param_1,&PTR_DAT_110c8c008);
  func_0x00010ae90130();
  return;
}



/* Entry: 10ae8ef14; end: 10ae8ef1f;  */

undefined ** FUN_10ae8ef14(void)

{
  return &PTR_DAT_110c8c008;
}



/* Entry: 10ae8ef20; end: 10ae8ef3f;  */

void FUN_10ae8ef20(void)

{
  func_0x00010ae9020c();
  FUN_10ae8ef40();
  return;
}



/* Entry: 10ae8ef40; end: 10ae8ef57;  */

void FUN_10ae8ef40(long *param_1,long param_2)

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



/* Entry: 10ae8ef58; end: 10ae8f027;  */

void FUN_10ae8ef58(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  int aiStack_78 [14];
  
  lVar2 = lRam0000000113815c70;
  func_0x00010ae902b8(lRam0000000113815c70,param_1);
  (*extraout_x8)();
  lVar3 = lVar2;
  func_0x00010ae8f198();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 8;
  }
  *param_2 = lVar1;
  FUN_10ae8f0f8(aiStack_78,lVar3 + 0x30,param_5);
  func_0x00010ae90070();
  if (aiStack_78[0] != 0) {
    func_0x00010ae90028(lRam0000000113815c70);
    (*extraout_x8_00)();
  }
  *(undefined1 *)(lVar2 + 0x71) = 1;
  func_0x00010ae8f100(param_3,aiStack_78);
  func_0x00010ae8f14c(param_4,aiStack_78);
  return;
}



/* Entry: 10ae8f028; end: 10ae8f02f;  */

void FUN_10ae8f028(void)

{
  long unaff_x19;
  
  func_0x00010ae90398();
  func_0x00010ae8f0c4(unaff_x19 + 0x58);
  return;
}



/* Entry: 10ae8f030; end: 10ae8f04f;  */

void FUN_10ae8f030(void)

{
  long unaff_x19;
  
  func_0x00010ae9014c();
  *(undefined1 *)(unaff_x19 + 0x41) = 1;
  return;
}



/* Entry: 10ae8f050; end: 10ae8f06b;  */

void FUN_10ae8f050(void)

{
  func_0x00010ae90084();
  return;
}



/* Entry: 10ae8f06c; end: 10ae8f0f7;  */

void FUN_10ae8f06c(void)

{
  long unaff_x19;
  
  func_0x00010ae90398();
  func_0x00010ae8f0c4(unaff_x19 + 0x58);
  return;
}



/* Entry: 10ae8f0f8; end: 10ae8f0ff;  */

void FUN_10ae8f0f8(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte bStack_21;
  
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_2 + 0x1c) = 0;
  func_0x000107c2ba5c(param_1,param_3,param_2 + 0x10,&bStack_21);
  if ((bStack_21 & 1) == 0) {
    func_0x000104c00744(param_2 + 0x10);
  }
  return;
}



/* Entry: 10ae8f100; end: 10ae8f203;  */

void FUN_10ae8f100(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 auStack_98 [4];
  undefined8 uStack_78;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x00010ae8fedc();
  uStack_28 = extraout_x8;
  func_0x00010ae902f0(&PTR_FUN_110c8c160);
  FUN_10ae8f700();
  func_0x00010ae8f0c4(auStack_48);
  func_0x000107c35000(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010ae8fedc();
    uStack_78 = extraout_x8_00;
    func_0x00010ae902f0(&PTR_FUN_110c8c1e0);
    FUN_10ae8fcd0();
    puVar1 = auStack_98;
    func_0x00010ae8f090();
    func_0x000107c35000(uStack_78);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010ae8ff78();
      *(undefined2 *)(puVar1 + 0xe) = 0;
      *(undefined1 *)(puVar1 + 0xf) = 0;
      puVar1[0x10] = 0;
      *(undefined1 *)(puVar1 + 0x11) = 0;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      *(undefined4 *)((long)puVar1 + 0x9f) = 0;
      *(undefined1 *)(puVar1 + 0x15) = 0;
      puVar1[0x18] = 0;
      puVar1[0x19] = 0;
      *puVar1 = &PTR_FUN_110c8c088;
      puVar1[0x1f] = puVar1;
      puVar1[0x20] = puVar1;
      puVar1[0x22] = 0;
      puVar1[0x23] = 0;
      puVar1[0x21] = 0;
      *(undefined4 *)(puVar1 + 0x24) = 0xffffffff;
      puVar1[0x25] = 0;
      puVar1[0x26] = 0;
      *(undefined1 *)(puVar1 + 0x27) = 0;
      func_0x000107c27c68(puVar1 + 0x28);
      return;
    }
  }
  return;
}



/* Entry: 10ae8f204; end: 10ae8f207;  */

undefined8 * FUN_10ae8f204(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c8c088;
  func_0x000104c00298(param_1 + 0x28);
  func_0x000107c27c64(param_1 + 0x13);
  func_0x00010ae90384();
  return param_1;
}



/* Entry: 10ae8f208; end: 10ae8f21b;  */

void FUN_10ae8f208(void)

{
  FUN_10ae8f42c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae8f21c; end: 10ae8f2af;  */

undefined8 FUN_10ae8f21c(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  func_0x00010ae900d8();
  if (*(char *)(param_1 + 0x138) == '\x01') {
    func_0x000107c27c70(*(undefined8 *)(unaff_x19 + 0x110));
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x100);
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x220);
  }
  else {
    func_0x00010ae901c0();
    func_0x00010ae901d8();
    *(undefined1 *)(unaff_x19 + 0x71) = 0;
    func_0x00010ae9034c(unaff_x19 + 0x88);
    func_0x00010ae902a8(unaff_x19 + 0xa8);
    *(undefined1 *)(unaff_x19 + 0x220) = *unaff_x21;
    lVar1 = unaff_x19;
    func_0x00010ae8f46c();
    if ((int)lVar1 == 0) {
      return 0;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x100);
  }
  func_0x00010ae8ff14();
  func_0x00010ae8ffb4();
  return 1;
}



/* Entry: 10ae8f2b0; end: 10ae8f2f7;  */

void FUN_10ae8f2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  undefined8 *extraout_x8;
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  func_0x00010ae90140();
  *(undefined1 *)(param_4 + 0x138) = 0;
  func_0x00010ae8fec0();
  func_0x00010ae90308(unaff_x19 + 0x108);
  extraout_x8[3] = in_register_00005028;
  extraout_x8[2] = param_2;
  extraout_x8[5] = in_register_00005048;
  extraout_x8[4] = param_3;
  extraout_x8[1] = in_register_00005008;
  *extraout_x8 = param_1;
  func_0x00010ae8f4e0();
  if ((int)unaff_x19 != 0) {
    func_0x00010ae900f8();
                    /* WARNING: Could not recover jumptable at 0x00010ae90244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 10ae8f2f8; end: 10ae8f34f;  */

undefined8 FUN_10ae8f2f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 10ae8f350; end: 10ae8f3eb;  */

void FUN_10ae8f350(void)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *extraout_x8;
  long unaff_x19;
  undefined8 uStack_48;
  
  func_0x00010ae8fe98();
  func_0x000107c27cac();
  func_0x00010ae900b4();
  func_0x00010ae9040c();
  if (((bool)in_ZR) && ((*(byte *)(unaff_x19 + 0x70) & 1) == 0)) {
    func_0x00010ae90004();
    *extraout_x8 = 2;
    extraout_x8[1] = 0;
  }
  func_0x00010ae900c4(unaff_x19 + 0x78);
  func_0x000107c27cb4();
  func_0x00010ae900c4(unaff_x19 + 0x88);
  FUN_10ae8d9ac();
  lVar2 = unaff_x19 + 0xa8;
  func_0x00010ae90078();
  func_0x00010ae90108();
  func_0x00010ae8ff24();
  func_0x00010ae8fe74();
  if ((int)lVar2 != 0) {
    func_0x00010ae8fe2c();
  }
  func_0x000107c35000(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(lVar2 + 0x138) = 1;
  func_0x00010ae900e8();
  iVar1 = (int)lVar2;
  func_0x00010ae8ffa8();
  func_0x00010ae8fe50();
  if (iVar1 == 0) {
    return;
  }
  func_0x00010ae8fef0();
                    /* WARNING: Could not recover jumptable at 0x00010ae8ffd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10ae8f3ec; end: 10ae8f42b;  */

void FUN_10ae8f3ec(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0x138) = 1;
  func_0x00010ae900e8();
  func_0x00010ae8ffa8();
  func_0x00010ae8fe50();
  if (iVar1 == 0) {
    return;
  }
  func_0x00010ae8fef0();
                    /* WARNING: Could not recover jumptable at 0x00010ae8ffd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10ae8f42c; end: 10ae8f587;  */

undefined8 * FUN_10ae8f42c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c8c088;
  func_0x000104c00298(param_1 + 0x28);
  func_0x000107c27c64(param_1 + 0x13);
  func_0x00010ae90384();
  return param_1;
}



/* Entry: 10ae8f588; end: 10ae8f5eb;  */

void FUN_10ae8f588(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte bStack_21;
  
  *(int *)(param_2 + 0x18) = (int)param_4;
  *(char *)(param_2 + 0x1c) = (char)((ulong)param_4 >> 0x20);
  func_0x000107c2ba5c(param_1,param_3,param_2 + 0x10,&bStack_21);
  if ((bStack_21 & 1) == 0) {
    func_0x000104c00744(param_2 + 0x10);
  }
  return;
}



/* Entry: 10ae8f5ec; end: 10ae8f5f3;  */

void FUN_10ae8f5ec(void)

{
  return;
}



/* Entry: 10ae8f5f4; end: 10ae8f62f;  */

undefined8 FUN_10ae8f5f4(undefined8 param_1)

{
  func_0x00010ae90170();
  func_0x00010ae903f8(&PTR_FUN_110c8c160);
  FUN_10ae8f684();
  return param_1;
}



/* Entry: 10ae8f630; end: 10ae8f64f;  */

void FUN_10ae8f630(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110c8c160;
  return;
}



/* Entry: 10ae8f650; end: 10ae8f677;  */

void FUN_10ae8f650(undefined8 param_1)

{
  func_0x00010ae902e4();
  func_0x00010ae90238(param_1,&PTR_DAT_110c8c1c0);
  func_0x00010ae90130();
  return;
}



/* Entry: 10ae8f678; end: 10ae8f683;  */

undefined ** FUN_10ae8f678(void)

{
  return &PTR_DAT_110c8c1c0;
}



/* Entry: 10ae8f684; end: 10ae8f6a3;  */

void FUN_10ae8f684(void)

{
  func_0x00010ae9020c();
  FUN_10ae8f6a4();
  return;
}



/* Entry: 10ae8f6a4; end: 10ae8f6ff;  */

void FUN_10ae8f6a4(long *param_1,long param_2)

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



/* Entry: 10ae8f700; end: 10ae8f7f3;  */

void FUN_10ae8f700(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  code *extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar4 = auStack_40;
  func_0x000107c35008();
  uVar1 = param_2 == param_1;
  uStack_28 = extraout_x8;
  if (!(bool)uVar1) {
    func_0x00010ae90284();
    lVar2 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(param_2 + 0x18);
    if (lVar2 == unaff_x20) {
      uVar1 = lVar5 == unaff_x19;
      if ((bool)uVar1) {
        func_0x00010ae901cc();
        (*extraout_x8_00)();
        func_0x00010ae8ff54(*(undefined8 *)(unaff_x20 + 0x18));
        *(undefined8 *)(unaff_x20 + 0x18) = 0;
        func_0x00010ae901cc(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x00010ae90354();
        func_0x00010ae8ff54(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x00010ae903e4();
        func_0x00010ae90168(auStack_40);
        func_0x00010ae902c4();
        param_2 = puVar4;
      }
      else {
        func_0x00010ae901cc();
        func_0x00010ae90168();
        func_0x00010ae8ff54(*(undefined8 *)(unaff_x20 + 0x18));
        *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
      }
      *(long *)(unaff_x19 + 0x18) = unaff_x19;
    }
    else {
      uVar1 = lVar5 == unaff_x19;
      if ((bool)uVar1) {
        func_0x00010ae9032c();
        func_0x00010ae8ff54(*(undefined8 *)(unaff_x19 + 0x18));
        *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
        *(long *)(unaff_x20 + 0x18) = unaff_x20;
      }
      else {
        *(long *)(unaff_x20 + 0x18) = lVar5;
        *(long *)(unaff_x19 + 0x18) = lVar2;
      }
    }
  }
  iVar3 = (int)param_2;
  func_0x000107c35000(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return;
}



/* Entry: 10ae8f7f4; end: 10ae8f7fb;  */

void FUN_10ae8f7f4(void)

{
  return;
}



/* Entry: 10ae8f7fc; end: 10ae8f837;  */

undefined8 FUN_10ae8f7fc(undefined8 param_1)

{
  func_0x00010ae90170();
  func_0x00010ae903f8(&PTR_FUN_110c8c1e0);
  FUN_10ae8f88c();
  return param_1;
}



/* Entry: 10ae8f838; end: 10ae8f857;  */

void FUN_10ae8f838(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110c8c1e0;
  return;
}



/* Entry: 10ae8f858; end: 10ae8f87f;  */

void FUN_10ae8f858(undefined8 param_1)

{
  func_0x00010ae902e4();
  func_0x00010ae90238(param_1,&PTR_DAT_110c8c318);
  func_0x00010ae90130();
  return;
}



/* Entry: 10ae8f880; end: 10ae8f88b;  */

undefined ** FUN_10ae8f880(void)

{
  return &PTR_DAT_110c8c318;
}



/* Entry: 10ae8f88c; end: 10ae8f8ab;  */

void FUN_10ae8f88c(void)

{
  func_0x00010ae9020c();
  FUN_10ae8f8ac();
  return;
}



/* Entry: 10ae8f8ac; end: 10ae8f8ef;  */

void FUN_10ae8f8ac(long *param_1,long param_2)

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



/* Entry: 10ae8f8f0; end: 10ae8f9bf;  */

void FUN_10ae8f8f0(long param_1,undefined1 *param_2,undefined8 *param_3,int param_4,long param_5,
                  long *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  code *extraout_x8;
  
  if (param_4 == 0) {
    *(undefined8 *)(param_5 + 0xf8) = param_9;
    *param_2 = 1;
    *(undefined1 **)(param_5 + 0x78) = param_2 + 0xd0;
    param_1 = 0;
    if (param_5 != 0) {
      param_1 = param_5 + -8;
    }
    *(undefined8 *)(param_5 + 0x88) = param_7;
    *(undefined1 *)(param_5 + 0x98) = 1;
    param_5 = param_5 + 0xa0;
  }
  else {
    func_0x00010ae8ff14();
    func_0x00010ae902b8();
    (*extraout_x8)();
    param_5 = param_1;
    FUN_10ae8f9c0();
    *param_6 = param_5;
    *(undefined8 *)(param_5 + 0x80) = param_9;
    *(undefined8 *)(param_5 + 0x10) = param_7;
    *(undefined1 *)(param_5 + 0x20) = 1;
    param_5 = param_5 + 0x28;
  }
  func_0x000107c27cc0(param_5,param_2,param_8);
                    /* WARNING: Could not recover jumptable at 0x00010ae8f9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,param_1,param_3);
  return;
}



/* Entry: 10ae8f9c0; end: 10ae8fa1f;  */

undefined8 * FUN_10ae8f9c0(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &PTR_FUN_110c8c250;
  param_1[0xf] = param_1;
  param_1[0x10] = param_1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  func_0x000107c27c68(param_1 + 0x18);
  return param_1;
}



/* Entry: 10ae8fa20; end: 10ae8fa23;  */

undefined8 * FUN_10ae8fa20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c8c250;
  func_0x000104c00298(param_1 + 0x18);
  func_0x000107c27c64(param_1 + 3);
  return param_1;
}



/* Entry: 10ae8fa24; end: 10ae8fa37;  */

void FUN_10ae8fa24(void)

{
  FUN_10ae8fbd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae8fa38; end: 10ae8fab7;  */

void FUN_10ae8fa38(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  func_0x00010ae900d8();
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    func_0x000107c27c70(*(undefined8 *)(unaff_x19 + 0x90));
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x80);
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x1a0);
  }
  else {
    func_0x00010ae9034c(unaff_x19 + 8);
    func_0x00010ae902a8(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x19 + 0x1a0) = *unaff_x21;
    lVar1 = unaff_x19;
    func_0x00010ae8fc10();
    if ((int)lVar1 == 0) {
      return;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x80);
  }
  func_0x00010ae8ff14();
  func_0x00010ae8ffb4();
  return;
}



/* Entry: 10ae8fab8; end: 10ae8faff;  */

void FUN_10ae8fab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  func_0x00010ae90140();
  *(undefined1 *)(param_4 + 0xb8) = 0;
  func_0x00010ae8fec0();
  func_0x00010ae90308();
  *(undefined8 *)(unaff_x19 + 0xb0) = in_register_00005048;
  *(undefined8 *)(unaff_x19 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x19 + 0xa0) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0x98) = param_2;
  *(undefined8 *)(unaff_x19 + 0x90) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x88) = param_1;
  func_0x00010ae8fc64();
  if ((int)unaff_x19 != 0) {
    func_0x00010ae900f8();
                    /* WARNING: Could not recover jumptable at 0x00010ae90244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 10ae8fb00; end: 10ae8fb37;  */

undefined8 FUN_10ae8fb00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10ae8fb38; end: 10ae8fb93;  */

void FUN_10ae8fb38(void)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x19;
  undefined8 uStack_48;
  
  func_0x00010ae8fe98();
  FUN_10ae8d9ac();
  lVar2 = unaff_x19 + 0x28;
  func_0x00010ae90078();
  func_0x00010ae90108();
  func_0x00010ae8ff24();
  func_0x00010ae8fe74();
  if ((int)lVar2 != 0) {
    func_0x00010ae8fe2c();
  }
  func_0x000107c35000(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(lVar2 + 0xb8) = 1;
  func_0x00010ae900e8();
  iVar1 = (int)lVar2;
  func_0x00010ae8ffa8();
  func_0x00010ae8fe50();
  if (iVar1 == 0) {
    return;
  }
  func_0x00010ae8fef0();
                    /* WARNING: Could not recover jumptable at 0x00010ae8ffd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10ae8fb94; end: 10ae8fbd3;  */

void FUN_10ae8fb94(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  func_0x00010ae900e8();
  func_0x00010ae8ffa8();
  func_0x00010ae8fe50();
  if (iVar1 == 0) {
    return;
  }
  func_0x00010ae8fef0();
                    /* WARNING: Could not recover jumptable at 0x00010ae8ffd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10ae8fbd4; end: 10ae8fccf;  */

undefined8 * FUN_10ae8fbd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c8c250;
  func_0x000104c00298(param_1 + 0x18);
  func_0x000107c27c64(param_1 + 3);
  return param_1;
}



/* Entry: 10ae8fcd0; end: 10ae8fdc3;  */

void FUN_10ae8fcd0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  code *extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar4 = auStack_40;
  func_0x000107c35008();
  uVar1 = param_2 == param_1;
  uStack_28 = extraout_x8;
  if (!(bool)uVar1) {
    func_0x00010ae90284();
    lVar2 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(param_2 + 0x18);
    if (lVar2 == unaff_x20) {
      uVar1 = lVar5 == unaff_x19;
      if ((bool)uVar1) {
        func_0x00010ae901cc();
        (*extraout_x8_00)();
        func_0x00010ae8ff54(*(undefined8 *)(unaff_x20 + 0x18));
        *(undefined8 *)(unaff_x20 + 0x18) = 0;
        func_0x00010ae901cc(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x00010ae90354();
        func_0x00010ae8ff54(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x00010ae903e4();
        func_0x00010ae90168(auStack_40);
        func_0x00010ae902c4();
        param_2 = puVar4;
      }
      else {
        func_0x00010ae901cc();
        func_0x00010ae90168();
        func_0x00010ae8ff54(*(undefined8 *)(unaff_x20 + 0x18));
        *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
      }
      *(long *)(unaff_x19 + 0x18) = unaff_x19;
    }
    else {
      uVar1 = lVar5 == unaff_x19;
      if ((bool)uVar1) {
        func_0x00010ae9032c();
        func_0x00010ae8ff54(*(undefined8 *)(unaff_x19 + 0x18));
        *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
        *(long *)(unaff_x20 + 0x18) = unaff_x20;
      }
      else {
        *(long *)(unaff_x20 + 0x18) = lVar5;
        *(long *)(unaff_x19 + 0x18) = lVar2;
      }
    }
  }
  iVar3 = (int)param_2;
  func_0x000107c35000(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010ae90398();
  func_0x00010ae8f0c4(unaff_x19 + 0x58);
  return;
}



/* Entry: 10ae8fdc4; end: 10ae8fdcb;  */

void FUN_10ae8fdc4(void)

{
  long unaff_x19;
  
  func_0x00010ae90398();
  func_0x00010ae8f0c4(unaff_x19 + 0x58);
  return;
}



/* Entry: 10ae8fdcc; end: 10ae8fdeb;  */

void FUN_10ae8fdcc(void)

{
  long unaff_x19;
  
  func_0x00010ae9014c();
  *(undefined1 *)(unaff_x19 + 0x41) = 1;
  return;
}



/* Entry: 10ae8fdec; end: 10ae8fe07;  */

void FUN_10ae8fdec(void)

{
  func_0x00010ae90084();
  return;
}



/* Entry: 10ae8fe08; end: 10ae8fe2b;  */

void FUN_10ae8fe08(void)

{
  long unaff_x19;
  
  func_0x00010ae90398();
  func_0x00010ae8f0c4(unaff_x19 + 0x58);
  return;
}



/* Entry: 10ae8fe2c; end: 10ae90417;  */

void FUN_10ae8fe2c(void)

{
  undefined8 *unaff_x23;
  
                    /* WARNING: Could not recover jumptable at 0x00010ae8fe4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*unaff_x23 + 0x10))
            ((long *)*unaff_x23,&DAT_10f6842c6,
             "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/call_op_set.h"
             ,0x3d9);
  return;
}



/* Entry: 10ae90418; end: 10ae9046f;  */

void FUN_10ae90418(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x48;
  __Znwm();
  FUN_10ae90470();
  *param_1 = uVar1;
  return;
}



/* Entry: 10ae90470; end: 10ae90503;  */

undefined8 * FUN_10ae90470(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c8c398;
  plVar4 = (long *)*param_2;
  lVar1 = param_2[1];
  param_1[1] = plVar4;
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    plVar4 = (long *)(lVar1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4 = (long *)*param_2;
  }
  param_1[3] = &PTR_FUN_110c8c3d8;
  param_1[4] = param_1;
  uVar5 = *param_3;
  param_1[5] = &UNK_10f6d2f89;
  param_1[6] = uVar5;
  *(undefined4 *)(param_1 + 7) = 0;
  (**(code **)(*plVar4 + 0x28))();
  param_1[8] = plVar4;
  return param_1;
}



/* Entry: 10ae90504; end: 10ae90507;  */

void FUN_10ae90504(void)

{
  return;
}



/* Entry: 10ae90508; end: 10ae9056f;  */

void FUN_10ae90508(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [56];
  
  FUN_10ae8d324(auStack_58,*(undefined8 *)(param_2 + 8),param_2 + 0x28,param_3,param_4,param_5);
  func_0x000107c27c84(param_1,auStack_58);
  func_0x000107c27cbc(auStack_58);
  return;
}



/* Entry: 10ae90570; end: 10ae90647;  */

void FUN_10ae90570(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  long *plVar3;
  code *extraout_x8;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 uStack_89;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar4 = *(undefined8 *)(lVar5 + 8);
  FUN_10ae8d298(auStack_88,param_5);
  func_0x00010ae8dc38(auStack_68,auStack_88);
  FUN_10ae8dc8c(&uStack_89,uVar4,lVar5 + 0x28,param_2,param_3,param_4,auStack_68);
  FUN_10ae8d2f0(auStack_68);
  FUN_10ae8d2f0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_10ae8d2f0(auStack_68);
  puVar2 = auStack_88;
  FUN_10ae8d2f0();
  FUN_10ae9087c();
  lVar5 = *(long *)(puVar2 + 8);
  plVar3 = *(long **)(lVar5 + 8);
  plVar1 = plVar3;
  (**(code **)(*plVar3 + 0x48))();
  (**(code **)(*plVar3 + 0x18))(auStack_100,plVar3,lVar5 + 0x28,uVar4,plVar1);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,uStack_f0);
  func_0x00010ae902b8(plRam0000000113815c70,uStack_f0);
  (*extraout_x8)();
  FUN_10ae8e1dc();
  return;
}



/* Entry: 10ae90648; end: 10ae90687;  */

void FUN_10ae90648(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  code *extraout_x8;
  long lVar3;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  lVar3 = *(long *)(param_1 + 8);
  plVar2 = *(long **)(lVar3 + 8);
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0x48))();
  (**(code **)(*plVar2 + 0x18))(auStack_70,plVar2,lVar3 + 0x28,param_2,plVar1);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,uStack_60);
  func_0x00010ae902b8(plRam0000000113815c70,uStack_60);
  (*extraout_x8)();
  FUN_10ae8e1dc();
  return;
}



/* Entry: 10ae90688; end: 10ae9073f;  */

long * FUN_10ae90688(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    undefined8 param_5)

{
  long *plVar1;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  (**(code **)(*param_1 + 0x18))(&lStack_60,param_1,param_3,param_4,param_2);
  plVar1 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0x130))(plRam0000000113815c70,lStack_50,0x98);
  *plVar1 = (long)&PTR_DAT_110c8c458;
  plVar1[1] = param_4;
  plVar1[3] = lStack_58;
  plVar1[2] = lStack_60;
  plVar1[5] = lStack_48;
  plVar1[4] = lStack_50;
  plVar1[7] = lStack_38;
  plVar1[6] = lStack_40;
  *(undefined2 *)(plVar1 + 8) = 0;
  plVar1[10] = 0;
  plVar1[0xe] = 0;
  plVar1[0x12] = 0;
  FUN_10ae8ef58(lStack_50,plVar1 + 9,plVar1 + 0xb,plVar1 + 0xf,param_5);
  return plVar1;
}



/* Entry: 10ae90740; end: 10ae90763;  */

undefined8 FUN_10ae90740(undefined8 param_1)

{
  func_0x00010ae90668();
  FUN_10ae90764();
  return param_1;
}



/* Entry: 10ae90764; end: 10ae9077f;  */

void FUN_10ae90764(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x48);
  lVar1 = lVar3 + 0xb8;
  func_0x0001004b9428();
  *(undefined1 *)(lVar2 + 0x20) = 0;
  *(undefined1 *)(lVar2 + 1) = 1;
  *(int *)(lVar2 + 4) = (int)lVar3;
  *(long *)(lVar2 + 0x10) = lVar1;
  return;
}



/* Entry: 10ae90780; end: 10ae907bb;  */

void FUN_10ae90780(void)

{
  func_0x00010ae9088c();
  return;
}



/* Entry: 10ae907bc; end: 10ae907cb;  */

long FUN_10ae907bc(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 10ae907cc; end: 10ae90807;  */

void FUN_10ae907cc(long param_1,undefined8 param_2)

{
  func_0x000104bffee4(param_1 + 0x58,*(undefined8 *)(param_1 + 8),param_1 + 0x10,
                      *(undefined8 *)(param_1 + 0x48),param_2);
  *(undefined1 *)(param_1 + 0x41) = 1;
  return;
}



/* Entry: 10ae90808; end: 10ae9084f;  */

void FUN_10ae90808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c27c60(param_1 + 0x78,*(undefined8 *)(param_1 + 8),param_1 + 0x10,
                      *(undefined1 *)(param_1 + 0x41),*(undefined8 *)(param_1 + 0x48),param_1 + 0x50
                      ,param_2,param_3,param_4);
  return;
}



/* Entry: 10ae90850; end: 10ae9087b;  */

long FUN_10ae90850(long param_1)

{
  func_0x00010ae8f090(param_1 + 0x78);
  func_0x00010ae8f0c4(param_1 + 0x58);
  return param_1;
}



/* Entry: 10ae9087c; end: 10ae90897;  */

void FUN_10ae9087c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10ae90898; end: 10ae908ef;  */

void FUN_10ae90898(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 200;
  __Znwm();
  FUN_10ae908f0();
  *param_1 = uVar1;
  return;
}



/* Entry: 10ae908f0; end: 10ae90a17;  */

undefined8 * FUN_10ae908f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  
  *param_1 = &PTR_FUN_110c8c4b8;
  plVar4 = (long *)*param_2;
  lVar1 = param_2[1];
  param_1[1] = plVar4;
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    plVar4 = (long *)(lVar1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4 = (long *)*param_2;
  }
  param_1[3] = &PTR_FUN_110c8c558;
  param_1[4] = param_1;
  uVar5 = *param_3;
  param_1[5] = &UNK_10f6d2fb2;
  param_1[6] = uVar5;
  *(undefined4 *)(param_1 + 7) = 0;
  (**(code **)(*plVar4 + 0x28))();
  uVar5 = *param_3;
  param_1[8] = plVar4;
  param_1[9] = &UNK_10f6d2fca;
  param_1[10] = uVar5;
  *(undefined4 *)(param_1 + 0xb) = 0;
  func_0x00010ae913e4();
  (*extraout_x8)();
  uVar5 = *param_3;
  param_1[0xc] = plVar4;
  param_1[0xd] = &UNK_10f6d2fea;
  param_1[0xe] = uVar5;
  *(undefined4 *)(param_1 + 0xf) = 0;
  func_0x00010ae913e4();
  (*extraout_x8_00)();
  uVar5 = *param_3;
  param_1[0x10] = plVar4;
  param_1[0x11] = &UNK_10f6d300b;
  param_1[0x12] = uVar5;
  *(undefined4 *)(param_1 + 0x13) = 0;
  func_0x00010ae913e4();
  (*extraout_x8_01)();
  uVar5 = *param_3;
  param_1[0x14] = plVar4;
  param_1[0x15] = &UNK_10f6d302b;
  param_1[0x16] = uVar5;
  *(undefined4 *)(param_1 + 0x17) = 0;
  func_0x00010ae913e4();
  (*extraout_x8_02)();
  param_1[0x18] = plVar4;
  return param_1;
}



/* Entry: 10ae90a18; end: 10ae90a1b;  */

void FUN_10ae90a18(void)

{
  return;
}



/* Entry: 10ae90a1c; end: 10ae90a4f;  */

void FUN_10ae90a1c(undefined8 param_1,undefined8 param_2)

{
  long extraout_x9;
  
  func_0x00010ae91308();
  FUN_10ae8d324(param_1,param_2,extraout_x9 + 0x28);
  func_0x00010ae913a0();
  func_0x00010ae913bc();
  return;
}



/* Entry: 10ae90a50; end: 10ae90aab;  */

void FUN_10ae90a50(void)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *extraout_x8;
  long extraout_x8_00;
  long unaff_x23;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  long alStack_89 [9];
  
  func_0x00010ae91218();
  func_0x00010ae91364();
  plVar2 = alStack_89;
  lVar3 = unaff_x23 + 0x28;
  func_0x00010ae912f0();
  func_0x00010ae913cc();
  func_0x00010ae913c4();
  func_0x00010ae9133c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ae91370();
  func_0x00010ae913c4();
  func_0x00010ae913ac();
  func_0x00010ae9140c();
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0x48))();
  (**(code **)(*plVar2 + 0x18))(auStack_100,plVar2,extraout_x8_00 + 0x28,lVar3,plVar1);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,uStack_f0);
  func_0x00010ae902b8(plRam0000000113815c70,uStack_f0);
  (*extraout_x8)();
  FUN_10ae8e1dc();
  return;
}



/* Entry: 10ae90aac; end: 10ae90adf;  */

void FUN_10ae90aac(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  code *extraout_x8;
  long extraout_x8_00;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  func_0x00010ae9140c();
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x48))();
  (**(code **)(*param_1 + 0x18))(auStack_70,param_1,extraout_x8_00 + 0x28,param_3,plVar1);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,uStack_60);
  func_0x00010ae902b8(plRam0000000113815c70,uStack_60);
  (*extraout_x8)();
  FUN_10ae8e1dc();
  return;
}



/* Entry: 10ae90ae0; end: 10ae90b17;  */

void FUN_10ae90ae0(void)

{
  func_0x00010ae91278();
  func_0x00010ae9129c();
  func_0x00010ae913d4();
  func_0x00010ae911e4(&PTR_DAT_110c8c618);
  return;
}



/* Entry: 10ae90b18; end: 10ae90b3b;  */

undefined8 FUN_10ae90b18(undefined8 param_1)

{
  func_0x00010ae90ac0();
  FUN_10ae90b3c();
  return param_1;
}



/* Entry: 10ae90b3c; end: 10ae90b3f;  */

void FUN_10ae90b3c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x48);
  lVar1 = lVar3 + 0xb8;
  func_0x0001004b9428();
  *(undefined1 *)(lVar2 + 0x20) = 0;
  *(undefined1 *)(lVar2 + 1) = 1;
  *(int *)(lVar2 + 4) = (int)lVar3;
  *(long *)(lVar2 + 0x10) = lVar1;
  return;
}



/* Entry: 10ae90b40; end: 10ae90b73;  */

void FUN_10ae90b40(undefined8 param_1,undefined8 param_2)

{
  long extraout_x9;
  
  func_0x00010ae91308();
  FUN_10ae8d324(param_1,param_2,extraout_x9 + 0x48);
  func_0x00010ae913a0();
  func_0x00010ae913bc();
  return;
}



/* Entry: 10ae90b74; end: 10ae90bcf;  */

void FUN_10ae90b74(void)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *extraout_x8;
  long extraout_x8_00;
  long unaff_x23;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  long alStack_89 [9];
  
  func_0x00010ae91218();
  func_0x00010ae91364();
  plVar2 = alStack_89;
  lVar3 = unaff_x23 + 0x48;
  func_0x00010ae912f0();
  func_0x00010ae913cc();
  func_0x00010ae913c4();
  func_0x00010ae9133c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ae91370();
  func_0x00010ae913c4();
  func_0x00010ae913ac();
  func_0x00010ae9140c();
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0x48))();
  (**(code **)(*plVar2 + 0x18))(auStack_100,plVar2,extraout_x8_00 + 0x48,lVar3,plVar1);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,uStack_f0);
  func_0x00010ae902b8(plRam0000000113815c70,uStack_f0);
  (*extraout_x8)();
  FUN_10ae8e1dc();
  return;
}



/* Entry: 10ae90bd0; end: 10ae90c03;  */

void FUN_10ae90bd0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  code *extraout_x8;
  long extraout_x8_00;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  func_0x00010ae9140c();
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x48))();
  (**(code **)(*param_1 + 0x18))(auStack_70,param_1,extraout_x8_00 + 0x48,param_3,plVar1);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,uStack_60);
  func_0x00010ae902b8(plRam0000000113815c70,uStack_60);
  (*extraout_x8)();
  FUN_10ae8e1dc();
  return;
}



/* Entry: 10ae90c04; end: 10ae90c3b;  */

void FUN_10ae90c04(void)

{
  func_0x00010ae91278();
  func_0x00010ae9129c();
  func_0x00010ae913d4();
  func_0x00010ae911e4(&PTR_FUN_110c8c678);
  return;
}



/* Entry: 10ae90c3c; end: 10ae90c5f;  */

undefined8 FUN_10ae90c3c(undefined8 param_1)

{
  func_0x00010ae90be4();
  FUN_10ae90c60();
  return param_1;
}


