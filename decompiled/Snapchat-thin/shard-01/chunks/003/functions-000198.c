/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e6755c; end: 100e67603;  */

void FUN_100e6755c(void)

{
  long unaff_x21;
  long unaff_x22;
  
  func_0x000100e7c4d8();
  func_0x000100e7a294();
  func_0x000100e74854();
  func_0x000100e7b03c();
  FUN_100e6768c();
  func_0x000100e7a2b8();
  func_0x000100e7a73c(0x1c);
  func_0x000100e7b034();
  func_0x000100e7b050();
  func_0x000100e7a824();
  func_0x000100e7a2cc(0x1c);
  if (unaff_x21 == 0) {
    func_0x000100e7a39c();
    func_0x000100e7ba14();
    func_0x000100e7a5a8();
    (*(code *)&DAT_10d905be0)();
    func_0x000100e7a364(unaff_x22 + 0x20);
    func_0x000100e7a3fc();
    (*(code *)&DAT_10d905be0)();
  }
  func_0x000100e7b2c0();
  return;
}



/* Entry: 100e67604; end: 100e6768b;  */

void FUN_100e67604(undefined8 param_1)

{
  long extraout_x8;
  long unaff_x19;
  long unaff_x21;
  undefined8 unaff_x24;
  undefined8 unaff_x26;
  undefined1 unaff_w27;
  code *pcVar1;
  
  func_0x000100e7bc4c();
  func_0x000100e7a998();
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  func_0x000100e7bd34();
  pcVar1 = *(code **)(extraout_x8 + 0x240);
  func_0x000100e7b338();
  (*pcVar1)();
  if (unaff_x21 == 0) {
    func_0x000100e7b9fc();
    func_0x000100e7a344(param_1,&stack0x00000018);
    *(undefined8 *)(unaff_x19 + 0x10) = unaff_x26;
    *(undefined1 *)(unaff_x19 + 0x18) = unaff_w27;
    func_0x000100e7ac50();
    (*pcVar1)();
    func_0x000100e7a904();
    func_0x000100e7a314();
    *(undefined8 *)(unaff_x19 + 0x20) = unaff_x24;
    *(char *)(unaff_x19 + 0x28) = (char)(undefined8 *)(unaff_x19 + 0x10);
  }
  else {
    func_0x000100e7b0f4();
    func_0x000100e7b034();
  }
  func_0x000100e7b294();
  return;
}



/* Entry: 100e6768c; end: 100e676fb;  */

void FUN_100e6768c(long param_1)

{
  undefined8 uVar1;
  
  FUN_100e779e8();
  func_0x000100e7a0b0();
  func_0x000100e7a764(2);
  func_0x000100e7a210();
  uVar1 = 0x6168706c61;
  func_0x000100e7a2dc(0x6168706c61,0xe500000000000000);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000100e79f74("directionDegrees");
  func_0x000100e7affc();
  func_0x000100e7a2dc();
  func_0x000100e7af88();
  func_0x000100e7a6d0();
  func_0x000100e7a154();
  return;
}



/* Entry: 100e676fc; end: 100e6772f;  */

void FUN_100e676fc(void)

{
  FUN_100e6755c();
  return;
}



/* Entry: 100e67730; end: 100e6775b;  */

void FUN_100e67730(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x20);
  func_0x000100e7b264();
  func_0x000100e7b074();
  return;
}



/* Entry: 100e6775c; end: 100e6777b;  */

undefined1  [16] FUN_100e6775c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e79fe0();
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x100e79854;
  return auVar1;
}



/* Entry: 100e6777c; end: 100e6777f;  */

void FUN_100e6777c(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x30);
  func_0x000100e7b264();
  func_0x000100e7b074();
  return;
}



/* Entry: 100e67780; end: 100e677ab;  */

void FUN_100e67780(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x30);
  func_0x000100e7b264();
  func_0x000100e7b074();
  return;
}



/* Entry: 100e677ac; end: 100e677b7;  */

void FUN_100e677ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  
  func_0x000100e7aa00(param_1,param_2,PTR__swift_bridgeObjectRelease_11034f258);
  func_0x000100e7a1a4(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x22;
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x21;
  (*unaff_x19)(uVar1);
  return;
}



/* Entry: 100e677b8; end: 100e677d7;  */

undefined1  [16] FUN_100e677b8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a0f8();
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x100e79858;
  return auVar1;
}



/* Entry: 100e677d8; end: 100e677df;  */

void FUN_100e677d8(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x40);
  func_0x000100e7b264();
  func_0x000100e7b074();
  return;
}



/* Entry: 100e677e0; end: 100e677ff;  */

undefined1  [16] FUN_100e677e0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a220();
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x100e7985c;
  return auVar1;
}



/* Entry: 100e67800; end: 100e6782b;  */

void FUN_100e67800(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x50);
  func_0x000100e7b264();
  func_0x000100e7b074();
  return;
}



/* Entry: 100e6782c; end: 100e6785f;  */

void FUN_100e6782c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000100e7b114();
  func_0x000100e7a1a4(unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x50) = unaff_x21;
  *(undefined8 *)(unaff_x20 + 0x58) = unaff_x19;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 100e67860; end: 100e6789f;  */

undefined1  [16] FUN_100e67860(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a4e8();
  auVar1._8_8_ = unaff_x20 + 0x50;
  auVar1._0_8_ = 0x100e79860;
  return auVar1;
}



/* Entry: 100e678a0; end: 100e678c7;  */

void FUN_100e678a0(undefined1 param_1)

{
  long unaff_x20;
  
  func_0x000100e7a1a4(unaff_x20 + 0x60);
  *(undefined1 *)(unaff_x20 + 0x60) = param_1;
  return;
}



/* Entry: 100e678c8; end: 100e678ef;  */

undefined1  [16] FUN_100e678c8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a570(unaff_x20 + 0x60,param_1);
  auVar1._8_8_ = unaff_x20 + 0x60;
  auVar1._0_8_ = 0x100e79864;
  return auVar1;
}



/* Entry: 100e678f0; end: 100e67933;  */

void FUN_100e678f0(long param_1)

{
  undefined8 unaff_x19;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  
  func_0x000100e7c4c4();
  func_0x000100e7bbe4();
  func_0x000100e7b02c();
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x60) = 2;
  *(undefined8 *)(param_1 + 0x10) = unaff_x25;
  *(undefined8 *)(param_1 + 0x18) = unaff_x24;
  *(undefined8 *)(param_1 + 0x20) = unaff_x23;
  *(undefined8 *)(param_1 + 0x28) = unaff_x22;
  *(undefined8 *)(param_1 + 0x30) = unaff_x21;
  *(undefined8 *)(param_1 + 0x38) = unaff_x19;
  return;
}



/* Entry: 100e67934; end: 100e67a7f;  */

void FUN_100e67934(void)

{
  code *extraout_x8;
  long unaff_x21;
  long unaff_x22;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [48];
  
  func_0x000100e7a294();
  func_0x000100e74d04(&UNK_10d905dc0);
  func_0x000100e7b03c();
  FUN_100e67c10();
  func_0x000100e7a2b8();
  func_0x000100e7a73c(0x1a);
  func_0x000100e7b034();
  func_0x000100e7b050();
  func_0x000100e7a824();
  func_0x000100e7a2cc(0x1a);
  if (unaff_x21 == 0) {
    func_0x000100e7b2ec();
    func_0x000100e7a57c();
    func_0x000100e7a374();
    func_0x000100e79ff4();
    func_0x000100e7a800();
    func_0x000100e7a57c(unaff_x22 + 0x20,auStack_80);
    func_0x000100e7b0a0();
    func_0x000100e7b120();
    func_0x000100e7a04c();
    func_0x000100e7a800();
    func_0x000100e7a51c(unaff_x22 + 0x30);
    func_0x000100e7b0a0();
    func_0x000100e7b1ac();
    func_0x000100e7a04c();
    func_0x000100e7a800();
    func_0x000100e7a57c(unaff_x22 + 0x40,auStack_b0);
    func_0x000100e7a6b0();
    func_0x000100e7b2b4();
    func_0x000100e7a04c();
    func_0x000100e7a800();
    func_0x000100e7a3ec(unaff_x22 + 0x50);
    func_0x000100e7b0a0();
    func_0x000100e7b364();
    func_0x000100e7a04c();
    func_0x000100e7a800();
    func_0x000100e7a364(unaff_x22 + 0x60);
    func_0x000100e7c268();
    func_0x000100e7b51c();
    func_0x000100e7b044();
    (*extraout_x8)();
  }
  func_0x000100e7b2c0();
  return;
}



/* Entry: 100e67a80; end: 100e67aaf;  */

void FUN_100e67a80(void)

{
  func_0x000100e7a234();
  func_0x000100e7b064();
  func_0x000100e7a280();
  FUN_100e67ab0();
  return;
}



/* Entry: 100e67ab0; end: 100e67c0f;  */

/* WARNING: Removing unreachable block (ram,0x000100e67bec) */
/* WARNING: Removing unreachable block (ram,0x000100e67b38) */
/* WARNING: Removing unreachable block (ram,0x000100e67b44) */

void FUN_100e67ab0(long *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  code *extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  
  func_0x000100e7b7ec();
  func_0x000100e7a998();
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined1 *)(unaff_x19 + 0x60) = 2;
  pcVar3 = *(code **)(*param_1 + 0x218);
  func_0x000100e7b338();
  (*pcVar3)();
  if (unaff_x21 == 0) {
    *(long **)(unaff_x19 + 0x10) = param_1;
    *(undefined8 *)(unaff_x19 + 0x18) = param_2;
    func_0x000100e7ac50();
    (*pcVar3)();
    *(long **)(unaff_x19 + 0x20) = param_1;
    *(undefined8 *)(unaff_x19 + 0x28) = param_2;
    func_0x000100e7b1ac();
    (*pcVar3)();
    *(long **)(unaff_x19 + 0x30) = param_1;
    *(undefined8 *)(unaff_x19 + 0x38) = param_2;
    pcVar3 = *(code **)(*unaff_x20 + 0x248);
    func_0x000100e7ad6c();
    (*pcVar3)();
    func_0x000100e7a434();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x48);
    *(long **)(unaff_x19 + 0x40) = param_1;
    *(undefined8 *)(unaff_x19 + 0x48) = param_2;
    func_0x000107c6142c(uVar2);
    func_0x000100e7b134();
    (*pcVar3)();
    func_0x000100e7b1a0();
    func_0x000100e7a344();
    uVar1 = (undefined1)*(undefined8 *)(unaff_x19 + 0x58);
    *(undefined8 **)(unaff_x19 + 0x50) = (undefined8 *)(unaff_x19 + 0x40);
    *(code **)(unaff_x19 + 0x58) = pcVar3;
    func_0x000107c6142c();
    func_0x000100e7bfe8();
    func_0x000100e7b51c();
    (*extraout_x8)();
    func_0x000100e7b034();
    func_0x000100e7a314();
    *(undefined1 *)(unaff_x19 + 0x60) = uVar1;
  }
  else {
    func_0x000100e7b034();
    func_0x000100e7c158();
    func_0x000107c6142c(*(undefined8 *)(unaff_x19 + 0x58));
    func_0x000100e74d04();
    func_0x000100e7b314();
    func_0x000100e7b1c4();
  }
  func_0x000100e7b294();
  return;
}



/* Entry: 100e67c10; end: 100e67d07;  */

void FUN_100e67c10(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_100e779e8();
  func_0x000100e7a248();
  func_0x000100e7b0cc();
  func_0x000100e7a764(6);
  func_0x000100e7a210();
  uVar1 = 0x656c746974;
  func_0x000100e7a968(0x656c746974,0xe500000000000000);
  func_0x000100e7a060();
  func_0x000100e7c3e8();
  uVar1 = uVar1 & 0xffffffff0000ffff | 0x74620000;
  func_0x000100e7b920();
  func_0x000100e7a968();
  func_0x000100e7a088();
  func_0x000100e7b9c0();
  uVar1 = uVar1 & 0xffff0000ffffffff | 0x786500000000;
  func_0x000100e7c210();
  func_0x000100e7a968();
  *(ulong *)(param_1 + 0x30) = uVar1;
  func_0x000100e7a168();
  uVar2 = 0x6c72556e6f6369;
  func_0x000100e7a730(0x6c72556e6f6369,0xe700000000000000);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  func_0x000100e7a168();
  uVar2 = 0x69616e626d756874;
  func_0x000100e7a730(0x69616e626d756874,0xec0000006c72556c);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  func_0x000100e79f74("enableSKAdNetworkIcon");
  func_0x000100e7b4a4();
  func_0x000100e7b6c8();
  func_0x000100e7a3b4();
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  func_0x000100e7b0c4();
  func_0x000100e7a6d0();
  func_0x000100e7a154();
  return;
}



/* Entry: 100e67d08; end: 100e67d53;  */

void FUN_100e67d08(void)

{
  long unaff_x20;
  
  func_0x000100e7b3fc();
  func_0x000100e7b668();
  func_0x000100e7b728();
  func_0x000100e7bd70();
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 100e67d54; end: 100e67d7b;  */

void FUN_100e67d54(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e67a80();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e67d7c; end: 100e67eb7;  */

void FUN_100e67d7c(void)

{
  FUN_100e67934();
  return;
}



/* Entry: 100e67eb8; end: 100e67efb;  */

void FUN_100e67eb8(void)

{
  undefined8 in_x7;
  long unaff_x20;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  func_0x000100e7c468();
  func_0x000100e7b144();
  func_0x000100e7b02c();
  func_0x000100e7bfac();
  *(undefined8 *)(unaff_x20 + 0x60) = in_x7;
  *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000070;
  *(undefined8 *)(unaff_x20 + 0x70) = in_stack_00000078;
  return;
}



/* Entry: 100e67efc; end: 100e6811b;  */

void FUN_100e67efc(void)

{
  code *extraout_x8;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  code *pcVar1;
  code *unaff_x28;
  
  func_0x000100e7bf0c();
  func_0x000100e7a294();
  func_0x000100e74f5c(&UNK_10d905f70);
  func_0x000100e7b03c();
  FUN_100e6841c();
  func_0x000100e7a2b8();
  func_0x000100e7a73c(0x1d);
  func_0x000100e7b034();
  func_0x000100e7b050();
  func_0x000100e7a824();
  func_0x000100e7a2cc(0x1d);
  if (unaff_x21 == 0) {
    func_0x000100e7c274();
    func_0x000100e7aa10();
    func_0x000100e7a3fc();
    (*unaff_x28)();
    func_0x000100e7a594();
    (*unaff_x28)();
    func_0x000100e7a51c(unaff_x22 + 0x28);
    func_0x000100e7a974(&UNK_1103596b8);
    func_0x000100e7c434();
    func_0x000100e7b478(0x100e788e4);
    func_0x000100e7a7b0();
    func_0x000100e7b034();
    pcVar1 = *(code **)(*unaff_x19 + 0x338);
    func_0x000100e7b2b4();
    func_0x000100e7a5bc();
    (*pcVar1)();
    func_0x000100e7afb8();
    func_0x000100e7a57c(unaff_x22 + 0x38,&stack0x00000030);
    func_0x000100e7a974(&UNK_1103596e0);
    func_0x000100e7c024();
    func_0x000100e7b478(0x100e788f8);
    func_0x000100e7a7b0();
    func_0x000100e7b034();
    func_0x000100e7b364();
    func_0x000100e7a5bc();
    func_0x000100e7b304();
    func_0x000100e7afb8();
    func_0x000100e7a3ec(unaff_x22 + 0x48);
    func_0x000100e7a980();
    func_0x000100e7a98c();
    func_0x000100e7a12c();
    func_0x000100e7b51c(*(undefined8 *)(*unaff_x19 + 0x340));
    func_0x000100e7a5bc();
    (*extraout_x8)();
    func_0x000100e7a914();
    func_0x000100e7a364(unaff_x22 + 0x58);
    func_0x000100e7a974(&UNK_110359708);
    func_0x000100e7c3d4();
    func_0x000100e7b478(0x100e7890c);
    func_0x000100e7a7b0();
    func_0x000100e7b034();
    func_0x000100e7b644();
    func_0x000100e7a5bc();
    func_0x000100e7b304();
    func_0x000100e7afb8();
    func_0x000100e7b894();
    func_0x000100e7aa10();
    func_0x000100e7bce4();
    func_0x000100e7aa10();
  }
  func_0x000100e7b2c0();
  return;
}



/* Entry: 100e6811c; end: 100e6814b;  */

void FUN_100e6811c(void)

{
  func_0x000100e7a234();
  func_0x000100e7b064();
  func_0x000100e7a280();
  FUN_100e6814c();
  return;
}



/* Entry: 100e6814c; end: 100e683f3;  */

/* WARNING: Removing unreachable block (ram,0x000100e683cc) */
/* WARNING: Removing unreachable block (ram,0x000100e68340) */
/* WARNING: Removing unreachable block (ram,0x000100e682e4) */
/* WARNING: Removing unreachable block (ram,0x000100e6824c) */
/* WARNING: Removing unreachable block (ram,0x000100e68384) */
/* WARNING: Removing unreachable block (ram,0x000100e681ec) */
/* WARNING: Removing unreachable block (ram,0x000100e6825c) */
/* WARNING: Removing unreachable block (ram,0x000100e68268) */
/* WARNING: Removing unreachable block (ram,0x000100e68278) */
/* WARNING: Removing unreachable block (ram,0x000100e68280) */

void FUN_100e6814c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar3;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000058;
  
  func_0x000100e7b7ec();
  puVar3 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar3 = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  func_0x000100e7bf28();
  func_0x000100e7b244();
  func_0x000100e7bfc4();
  func_0x000100e7add4();
  if (unaff_x21 == 0) {
    *(undefined8 *)(unaff_x20 + 0x10) = in_stack_00000038;
    func_0x000100e7ab48();
    func_0x000100e7bfc4();
    func_0x000100e7add4();
    func_0x000100e7b730();
    func_0x000100e7b908();
    func_0x000100e7a588(puVar3,&stack0x00000038);
    func_0x000100e7c074();
    func_0x000100e7c380();
    func_0x000100e7b7d4(param_2,3);
    *(code **)(unaff_x20 + 0x28) = FUN_100e79a58;
    *(undefined8 *)(unaff_x20 + 0x30) = param_2;
    func_0x000100e7bf4c();
    func_0x000100e7b7d4();
    func_0x000100e7b754(0x100e79a6c);
    FUN_100e683f4();
    func_0x000100e7c0d0();
    func_0x000100e7a434();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(unaff_x20 + 0x48) = in_stack_00000018;
    *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000010;
    func_0x000100c989ec(uVar2,uVar1);
    func_0x000100e7c25c();
    func_0x000100e7b7d4();
    *(undefined8 *)(unaff_x20 + 0x58) = 0x100e79a80;
    *(undefined8 *)(unaff_x20 + 0x60) = uVar2;
    func_0x000100e7ad44();
    func_0x000100e7bf58();
    func_0x000100e7add4();
    *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000058;
    func_0x000100e7a874();
    func_0x000100e7bf58();
    func_0x000100e7add4();
    func_0x000107c61574(param_1);
    *(undefined8 *)(unaff_x20 + 0x70) = in_stack_00000058;
  }
  else {
    func_0x000100e7b034();
    func_0x000100e7b6f8();
    func_0x000107c615e8(*puVar3);
    func_0x000100c989ec(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
    if ((int)param_2 != 0) {
      func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
    }
    if ((int)param_1 != 0) {
      func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
    }
    func_0x000100e74f5c();
    func_0x000100e7b314();
    func_0x000100e7b1c4();
  }
  return;
}



/* Entry: 100e683f4; end: 100e6841b;  */

void FUN_100e683f4(void)

{
  func_0x000100e7a68c(0x100e79a94);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e6841c; end: 100e6859b;  */

void FUN_100e6841c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong unaff_x22;
  ulong unaff_x23;
  
  FUN_100e779e8();
  func_0x000100e7a248();
  func_0x000100e7b0cc();
  func_0x000100e7a764(9);
  func_0x000100e7a210();
  func_0x000100e7aedc(0x4677656956626577,0xee0079726f746361);
  func_0x000100e7b468();
  func_0x000100e7a060();
  func_0x000100e7ac00();
  func_0x000100e7a088();
  uVar1 = 0x53666f43636e7973;
  func_0x000100e7a89c(0x53666f43636e7973,0xec00000065726f74);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  func_0x000100e79f74("onPlayableCtaTapped");
  func_0x000100e7bee0();
  uVar2 = unaff_x23 | 2;
  func_0x000100e7a7d0(uVar2,unaff_x22 | 0x8000000000000000);
  *(ulong *)(param_1 + 0x38) = uVar2;
  func_0x000100e79f74("onAttachmentCtaTapped");
  uVar2 = unaff_x23 | 4;
  func_0x000100e7a7d0(uVar2,unaff_x22 | 0x8000000000000000);
  *(ulong *)(param_1 + 0x40) = uVar2;
  func_0x000100e7a168();
  func_0x000100e7b45c();
  uVar2 = uVar2 & 0xffff | 0x73696d7369440000;
  func_0x000100e7be70(uVar2,0x5473);
  func_0x000100e7a444();
  *(ulong *)(param_1 + 0x48) = uVar2;
  func_0x000100e79f74("onRetryLoadTapped");
  func_0x000100e7b344();
  func_0x000100e7a7d0();
  *(ulong *)(param_1 + 0x50) = uVar2;
  func_0x000100e79fb8("loadingProgressObservable");
  func_0x000100e7b8a0();
  func_0x000100e7bf70();
  uVar2 = unaff_x23 | 8;
  func_0x000100e7b834();
  *(ulong *)(param_1 + 0x58) = uVar2;
  func_0x000100e79fb8("loadingErrorObservable");
  func_0x000100e7c354();
  lVar3 = unaff_x23 + 5;
  func_0x000100e7b834();
  *(long *)(param_1 + 0x60) = lVar3;
  func_0x000100e7a038();
  func_0x000107c61538();
  func_0x000100e7a80c();
  func_0x000100e7a6d0();
  func_0x000100e79f38();
  return;
}



/* Entry: 100e6859c; end: 100e685f7;  */

void FUN_100e6859c(void)

{
  long unaff_x20;
  
  func_0x000100e7b690();
  func_0x000100e7bde8();
  func_0x000100e7bb54();
  func_0x000100e7b6d4();
  func_0x000100e7c12c();
  func_0x000100c989ec(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000100e7bd0c();
  func_0x000100e7c0fc();
  func_0x000100e7c118();
  return;
}



/* Entry: 100e685f8; end: 100e6861f;  */

void FUN_100e685f8(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e6811c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e68620; end: 100e68693;  */

void FUN_100e68620(void)

{
  FUN_100e67efc();
  return;
}



/* Entry: 100e68694; end: 100e686bf;  */

void FUN_100e68694(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x40);
  func_0x000100e7b264();
  func_0x000100e7b074();
  return;
}



/* Entry: 100e686c0; end: 100e686f3;  */

void FUN_100e686c0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000100e7b114();
  func_0x000100e7a1a4(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = unaff_x21;
  *(undefined8 *)(unaff_x20 + 0x48) = unaff_x19;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 100e686f4; end: 100e68713;  */

undefined1  [16] FUN_100e686f4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a220();
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x100e79898;
  return auVar1;
}



/* Entry: 100e68714; end: 100e68747;  */

void FUN_100e68714(long param_1)

{
  undefined8 unaff_x19;
  undefined8 unaff_x21;
  
  func_0x000100e7b114();
  func_0x000100e7b01c();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x10) = unaff_x21;
  *(undefined8 *)(param_1 + 0x18) = unaff_x19;
  return;
}



/* Entry: 100e68748; end: 100e68837;  */

void FUN_100e68748(void)

{
  long unaff_x21;
  long unaff_x22;
  
  func_0x000100e7c1f8();
  func_0x000100e7a294();
  func_0x000100e74f7c(&UNK_10d905fb0);
  func_0x000100e7b03c();
  FUN_100e68974();
  func_0x000100e7a2b8();
  func_0x000100e7a73c(0x1f);
  func_0x000100e7b034();
  func_0x000100e7b050();
  func_0x000100e7a824();
  func_0x000100e7a2cc(0x1f);
  if (unaff_x21 == 0) {
    func_0x000100e7b2ec();
    func_0x000100e7a51c();
    func_0x000100e7a374();
    func_0x000100e79ff4();
    func_0x000100e7a800();
    func_0x000100e7a57c(unaff_x22 + 0x20,&stack0x00000030);
    func_0x000100e7a6b0();
    func_0x000100e7b120();
    func_0x000100e7a04c();
    func_0x000100e7a800();
    func_0x000100e7a3ec(unaff_x22 + 0x30);
    func_0x000100e7b0a0();
    func_0x000100e7b1ac();
    func_0x000100e7a04c();
    func_0x000100e7a800();
    func_0x000100e7a364(unaff_x22 + 0x40);
    func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x48));
    func_0x000100e7b2b4();
    func_0x000100e7a758();
    func_0x000100e7c1e0();
  }
  func_0x000100e7b2c0();
  return;
}



/* Entry: 100e68838; end: 100e68867;  */

void FUN_100e68838(void)

{
  func_0x000100e7a234();
  func_0x000100e7b064();
  func_0x000100e7a280();
  FUN_100e68868();
  return;
}



/* Entry: 100e68868; end: 100e68973;  */

/* WARNING: Removing unreachable block (ram,0x000100e68940) */

void FUN_100e68868(void)

{
  undefined8 uVar1;
  long extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  long unaff_x21;
  undefined8 unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  
  func_0x000100e7b7ec();
  func_0x000100e7a998();
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  func_0x000100e7a5d0();
  if (unaff_x21 == 0) {
    func_0x000100e7b93c();
    func_0x000100e7ac50(*(undefined8 *)(extraout_x8 + 0x248));
    (*extraout_x8_00)();
    func_0x000100e7bf88();
    func_0x000100e7a434();
    uVar1 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x19 + 0x20) = unaff_x27;
    *(undefined8 *)(unaff_x19 + 0x28) = unaff_x28;
    func_0x000107c6142c(uVar1);
    func_0x000100e7acd8();
    (*extraout_x8_00)();
    func_0x000100e7b1a0();
    func_0x000100e7a344();
    uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
    *(undefined8 **)(unaff_x19 + 0x30) = (undefined8 *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x38) = unaff_x27;
    func_0x000107c6142c(uVar1);
    func_0x000100e7ad6c();
    (*extraout_x8_00)();
    func_0x000100e7c2cc();
    func_0x000100e7b034();
    func_0x000100e7a314();
    uVar1 = *(undefined8 *)(unaff_x19 + 0x48);
    *(undefined8 *)(unaff_x19 + 0x40) = unaff_x24;
    *(undefined8 **)(unaff_x19 + 0x48) = (undefined8 *)(unaff_x19 + 0x30);
    func_0x000107c6142c(uVar1);
  }
  else {
    func_0x000100e7b034();
    func_0x000100e7ba98();
    func_0x000107c6142c(*(undefined8 *)(unaff_x19 + 0x38));
    func_0x000100e7c158();
    func_0x000100e74f7c();
    func_0x000100e7b314();
    func_0x000100e7b1c4();
  }
  func_0x000100e7b294();
  return;
}



/* Entry: 100e68974; end: 100e68a2f;  */

void FUN_100e68974(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  FUN_100e779e8();
  func_0x000100e7a178();
  func_0x000100e7a764(4);
  func_0x000100e7a210();
  uVar1 = 0x656c626179616c70;
  func_0x000100e7a968(0x656c626179616c70,0xeb000000004c5255);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000100e79f74("attachmentCtaText");
  func_0x000100e7b4a4();
  uVar2 = 0x11;
  func_0x000100e7a6c0();
  func_0x000100e7a088();
  func_0x000100e7c428();
  uVar2 = uVar2 & 0xffff | 0x556e6f6349700000;
  func_0x000100e7a730(uVar2,0xea00000000004c52);
  *(ulong *)(param_1 + 0x30) = uVar2;
  func_0x000100e7a168();
  func_0x000100e7c428();
  uVar2 = uVar2 & 0xffffffff0000ffff | 0x54700000;
  func_0x000100e7b920();
  func_0x000100e7a730();
  *(ulong *)(param_1 + 0x38) = uVar2;
  func_0x000100e7b0c4();
  func_0x000100e7a6d0();
  func_0x000100e7a154();
  return;
}



/* Entry: 100e68a30; end: 100e68a6b;  */

void FUN_100e68a30(void)

{
  func_0x000100e7b3fc();
  func_0x000100e7b668();
  func_0x000100e7b728();
  func_0x000100e7bd70();
  return;
}



/* Entry: 100e68a6c; end: 100e68a93;  */

void FUN_100e68a6c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e68838();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e68a94; end: 100e68aa7;  */

void FUN_100e68a94(void)

{
  FUN_100e68748();
  return;
}



/* Entry: 100e68aa8; end: 100e68ab3;  */

void FUN_100e68aa8(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__swift_unknownObjectRetain_11034f540;
  func_0x000100e7a194(unaff_x20 + 0x10);
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100e68ab4; end: 100e68adf;  */

void FUN_100e68ab4(code *param_1)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x10);
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100e68ae0; end: 100e68aeb;  */

void FUN_100e68ae0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100e7b114(param_1,PTR__swift_unknownObjectRelease_11034f530);
  func_0x000100e7a1a4(unaff_x20 + 0x10);
  func_0x000100e7c1c0();
  return;
}



/* Entry: 100e68aec; end: 100e68b0b;  */

undefined1  [16] FUN_100e68aec(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e79f88();
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x100e7989c;
  return auVar1;
}



/* Entry: 100e68b0c; end: 100e68b23;  */

void FUN_100e68b0c(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__swift_unknownObjectRetain_11034f540;
  func_0x000100e7a194(unaff_x20 + 0x18);
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100e68b24; end: 100e68b87;  */

undefined1  [16] FUN_100e68b24(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a09c();
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x100e798a0;
  return auVar1;
}



/* Entry: 100e68b88; end: 100e68b8b;  */

void FUN_100e68b88(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x28);
  func_0x000100e7b03c();
  func_0x000100e7b074();
  return;
}



/* Entry: 100e68b8c; end: 100e68bb7;  */

void FUN_100e68b8c(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x28);
  func_0x000100e7b03c();
  func_0x000100e7b074();
  return;
}



/* Entry: 100e68bb8; end: 100e68bc3;  */

void FUN_100e68bb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  
  func_0x000100e7aa00(param_1,param_2,PTR__swift_release_11034f4c0);
  func_0x000100e7a1a4(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x22;
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x21;
  (*unaff_x19)(uVar1);
  return;
}



/* Entry: 100e68bc4; end: 100e68be3;  */

undefined1  [16] FUN_100e68bc4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a0e4();
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x100e798a8;
  return auVar1;
}



/* Entry: 100e68be4; end: 100e68be7;  */

void FUN_100e68be4(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x38);
  func_0x000100e7b03c();
  func_0x000100e7b074();
  return;
}



/* Entry: 100e68be8; end: 100e68c13;  */

void FUN_100e68be8(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x38);
  func_0x000100e7b03c();
  func_0x000100e7b074();
  return;
}



/* Entry: 100e68c14; end: 100e68c17;  */

void FUN_100e68c14(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000100e7b114();
  func_0x000100e7a1a4(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x21;
  *(undefined8 *)(unaff_x20 + 0x40) = unaff_x19;
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 100e68c18; end: 100e68c4b;  */

void FUN_100e68c18(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000100e7b114();
  func_0x000100e7a1a4(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x21;
  *(undefined8 *)(unaff_x20 + 0x40) = unaff_x19;
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 100e68c4c; end: 100e68c6b;  */

undefined1  [16] FUN_100e68c4c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a2a4();
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = 0x100e798ac;
  return auVar1;
}



/* Entry: 100e68c6c; end: 100e68c83;  */

void FUN_100e68c6c(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x48);
  func_0x000100e7ab10();
  func_0x000100e7b2f8();
  return;
}



/* Entry: 100e68c84; end: 100e68ca3;  */

undefined1  [16] FUN_100e68c84(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a2ec();
  auVar1._8_8_ = unaff_x20 + 0x48;
  auVar1._0_8_ = 0x100e798b0;
  return auVar1;
}



/* Entry: 100e68ca4; end: 100e68cab;  */

void FUN_100e68ca4(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x58);
  func_0x000100e7b03c();
  func_0x000100e7b074();
  return;
}



/* Entry: 100e68cac; end: 100e68ccb;  */

undefined1  [16] FUN_100e68cac(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a300();
  auVar1._8_8_ = unaff_x20 + 0x58;
  auVar1._0_8_ = 0x100e798b4;
  return auVar1;
}



/* Entry: 100e68ccc; end: 100e68ccf;  */

void FUN_100e68ccc(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x68);
  func_0x000107c6157c(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 100e68cd0; end: 100e68cf3;  */

void FUN_100e68cd0(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x68);
  func_0x000107c6157c(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 100e68cf4; end: 100e68cf7;  */

void FUN_100e68cf4(void)

{
  long unaff_x20;
  
  func_0x000100e7a1a4(unaff_x20 + 0x68);
  func_0x000100e7c0f0();
  return;
}



/* Entry: 100e68cf8; end: 100e68d1f;  */

void FUN_100e68cf8(void)

{
  long unaff_x20;
  
  func_0x000100e7a1a4(unaff_x20 + 0x68);
  func_0x000100e7c0f0();
  return;
}



/* Entry: 100e68d20; end: 100e68d3f;  */

undefined1  [16] FUN_100e68d20(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a4a4();
  auVar1._8_8_ = unaff_x20 + 0x68;
  auVar1._0_8_ = 0x100e798b8;
  return auVar1;
}



/* Entry: 100e68d40; end: 100e68d43;  */

void FUN_100e68d40(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x70);
  func_0x000107c6157c(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 100e68d44; end: 100e68d67;  */

void FUN_100e68d44(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x70);
  func_0x000107c6157c(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 100e68d68; end: 100e68d6b;  */

void FUN_100e68d68(void)

{
  long unaff_x20;
  
  func_0x000100e7a1a4(unaff_x20 + 0x70);
  func_0x000100e7c120();
  return;
}



/* Entry: 100e68d6c; end: 100e68d93;  */

void FUN_100e68d6c(void)

{
  long unaff_x20;
  
  func_0x000100e7a1a4(unaff_x20 + 0x70);
  func_0x000100e7c120();
  return;
}



/* Entry: 100e68d94; end: 100e68ddf;  */

undefined1  [16] FUN_100e68d94(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a570(unaff_x20 + 0x70,param_1);
  auVar1._8_8_ = unaff_x20 + 0x70;
  auVar1._0_8_ = 0x100e798bc;
  return auVar1;
}



/* Entry: 100e68de0; end: 100e68e07;  */

void FUN_100e68de0(void)

{
  long unaff_x20;
  
  func_0x000100e7a1a4(unaff_x20 + 0x78);
  func_0x000100e7c05c();
  return;
}



/* Entry: 100e68e08; end: 100e68e2f;  */

undefined1  [16] FUN_100e68e08(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a570(unaff_x20 + 0x78,param_1);
  auVar1._8_8_ = unaff_x20 + 0x78;
  auVar1._0_8_ = 0x100e798c0;
  return auVar1;
}



/* Entry: 100e68e30; end: 100e68e73;  */

void FUN_100e68e30(long param_1)

{
  undefined8 in_x7;
  undefined8 unaff_x28;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  func_0x000100e7c468();
  func_0x000100e7b144();
  func_0x000100e7c2b8();
  func_0x000100e7b02c();
  func_0x000100e7bfac();
  *(undefined8 *)(param_1 + 0x60) = in_x7;
  *(undefined8 *)(param_1 + 0x70) = in_stack_00000008;
  *(undefined8 *)(param_1 + 0x68) = in_stack_00000000;
  *(undefined8 *)(param_1 + 0x78) = unaff_x28;
  return;
}



/* Entry: 100e68e74; end: 100e690b3;  */

void FUN_100e68e74(void)

{
  code *extraout_x8;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  code *pcVar1;
  code *unaff_x28;
  
  func_0x000100e7bf0c();
  func_0x000100e7a294();
  func_0x000100e74f9c(&UNK_10d905fd0);
  func_0x000100e7b03c();
  FUN_100e69700();
  func_0x000100e7a2b8();
  func_0x000100e7a73c(0x16);
  func_0x000100e7b034();
  func_0x000100e7b050();
  func_0x000100e7a824();
  func_0x000100e7a2cc(0x16);
  if (unaff_x21 == 0) {
    func_0x000100e7c274();
    func_0x000100e7aa10();
    func_0x000100e7a3fc();
    (*unaff_x28)();
    func_0x000100e7a594();
    (*unaff_x28)();
    func_0x000100e7a51c(unaff_x22 + 0x28);
    func_0x000100e7a974(&UNK_110359730);
    func_0x000100e7c434();
    func_0x000100e7b478(0x100e78920);
    func_0x000100e7a7b0();
    func_0x000100e7b034();
    pcVar1 = *(code **)(*unaff_x19 + 0x338);
    func_0x000100e7b2b4();
    func_0x000100e7a5bc();
    (*pcVar1)();
    func_0x000100e7afb8();
    func_0x000100e7a57c(unaff_x22 + 0x38,&stack0x00000030);
    func_0x000100e7a974(&UNK_110359758);
    func_0x000100e7c024();
    func_0x000100e7b478(0x100e78934);
    func_0x000100e7a7b0();
    func_0x000100e7b034();
    func_0x000100e7b364();
    func_0x000100e7a5bc();
    func_0x000100e7b304();
    func_0x000100e7afb8();
    func_0x000100e7a3ec(unaff_x22 + 0x48);
    func_0x000100e7a980();
    func_0x000100e7a98c();
    func_0x000100e7a12c();
    func_0x000100e7b51c(*(undefined8 *)(*unaff_x19 + 0x340));
    func_0x000100e7a5bc();
    (*extraout_x8)();
    func_0x000100e7a914();
    func_0x000100e7a364(unaff_x22 + 0x58);
    func_0x000100e7a974(&UNK_110359780);
    func_0x000100e7c3d4();
    func_0x000100e7b478(0x100e78948);
    func_0x000100e7a7b0();
    func_0x000100e7b034();
    func_0x000100e7b644();
    func_0x000100e7a5bc();
    func_0x000100e7b304();
    func_0x000100e7afb8();
    func_0x000100e7b894();
    func_0x000100e7aa10();
    func_0x000100e7bce4();
    func_0x000100e7aa10();
    func_0x000100e7bf64();
    func_0x000100e7aa10();
  }
  func_0x000100e7b2c0();
  return;
}



/* Entry: 100e690b4; end: 100e690f3;  */

void FUN_100e690b4(undefined8 param_1,long param_2)

{
  code *unaff_x24;
  
  func_0x000100e7c49c();
  func_0x000100e7abd8();
  func_0x000100e7a354(param_2 + 0x10);
  func_0x000100e7bd14();
  func_0x000100e7b058();
  (*unaff_x24)();
  func_0x000100e7b598();
  return;
}



/* Entry: 100e690f4; end: 100e69133;  */

void FUN_100e690f4(undefined8 param_1,long param_2)

{
  code *unaff_x24;
  
  func_0x000100e7c49c();
  func_0x000100e7abd8();
  func_0x000100e7a354(param_2 + 0x20);
  func_0x000100e7bd24();
  func_0x000100e7b058();
  (*unaff_x24)();
  func_0x000100e7b598();
  return;
}



/* Entry: 100e69134; end: 100e69183;  */

undefined1  [16]
FUN_100e69134(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  if (param_1 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000100e7b02c(param_3,0x20);
    func_0x000100e7bb18();
    func_0x000100e7be44();
    func_0x000100e7c134();
  }
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = param_4;
  return auVar1;
}



/* Entry: 100e69184; end: 100e691cb;  */

void FUN_100e69184(undefined8 param_1,long param_2)

{
  code *unaff_x24;
  
  func_0x000100e7c49c();
  func_0x000100e7abd8();
  func_0x000100e7a354(param_2 + 0x68);
  func_0x000100e7b54c();
  func_0x000100e7c2a0();
  func_0x000100e7b058();
  (*unaff_x24)();
  func_0x000100e7b488();
  return;
}



/* Entry: 100e691cc; end: 100e69213;  */

void FUN_100e691cc(undefined8 param_1,long param_2)

{
  code *unaff_x24;
  
  func_0x000100e7c49c();
  func_0x000100e7abd8();
  func_0x000100e7a354(param_2 + 0x70);
  func_0x000100e7b54c();
  func_0x000100e7c2a0();
  func_0x000100e7b058();
  (*unaff_x24)();
  func_0x000100e7b488();
  return;
}



/* Entry: 100e69214; end: 100e6929b;  */

void FUN_100e69214(long *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x78,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  pcVar2 = *(code **)(*param_1 + 0x140);
  func_0x000107c6157c(uVar1);
  (*pcVar2)();
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 100e6929c; end: 100e692cb;  */

void FUN_100e6929c(void)

{
  func_0x000100e7a234();
  func_0x000100e7b064();
  func_0x000100e7a280();
  FUN_100e692cc();
  return;
}



/* Entry: 100e692cc; end: 100e695ab;  */

/* WARNING: Removing unreachable block (ram,0x000100e69588) */
/* WARNING: Removing unreachable block (ram,0x000100e69510) */
/* WARNING: Removing unreachable block (ram,0x000100e693c4) */
/* WARNING: Removing unreachable block (ram,0x000100e69470) */
/* WARNING: Removing unreachable block (ram,0x000100e694c8) */
/* WARNING: Removing unreachable block (ram,0x000100e6954c) */
/* WARNING: Removing unreachable block (ram,0x000100e69368) */
/* WARNING: Removing unreachable block (ram,0x000100e693d0) */
/* WARNING: Removing unreachable block (ram,0x000100e693dc) */
/* WARNING: Removing unreachable block (ram,0x000100e693ec) */

void FUN_100e692cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar3;
  int unaff_w28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000058;
  
  func_0x000100e7b7ec();
  puVar3 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar3 = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  func_0x000100e7bf28();
  func_0x000100e7b244();
  func_0x000100e7bfc4();
  func_0x000100e7add4();
  if (unaff_x21 == 0) {
    *(undefined8 *)(unaff_x20 + 0x10) = in_stack_00000038;
    func_0x000100e7ab48();
    func_0x000100e7bfc4();
    func_0x000100e7add4();
    func_0x000100e7b730();
    func_0x000100e7b908();
    func_0x000100e7a588(puVar3,&stack0x00000038);
    func_0x000100e7c074();
    func_0x000100e7c380();
    func_0x000100e7b7d4(param_2,3);
    *(undefined8 *)(unaff_x20 + 0x28) = 0x100e7507c;
    *(undefined8 *)(unaff_x20 + 0x30) = param_2;
    func_0x000100e7bf4c();
    func_0x000100e7b7d4();
    func_0x000100e7b754(0x100e75094);
    FUN_100e695ac();
    func_0x000100e7c0d0();
    func_0x000100e7a434();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(unaff_x20 + 0x48) = in_stack_00000018;
    *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000010;
    func_0x000100c989ec(uVar2,uVar1);
    func_0x000100e7c25c();
    func_0x000100e7b7d4();
    *(undefined8 *)(unaff_x20 + 0x58) = 0x100e750ac;
    *(undefined8 *)(unaff_x20 + 0x60) = uVar2;
    func_0x000100e7ad44();
    func_0x000100e7bf58();
    func_0x000100e7add4();
    *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000058;
    func_0x000100e7a874();
    func_0x000100e7bf58();
    func_0x000100e7bc78();
    *(undefined8 *)(unaff_x20 + 0x70) = in_stack_00000058;
    func_0x000100e7bf58();
    func_0x000100e7bc78();
    func_0x000107c61574(param_1);
    *(undefined8 *)(unaff_x20 + 0x78) = in_stack_00000058;
  }
  else {
    func_0x000100e7b034();
    func_0x000100e7b384();
    func_0x000107c615e8(*puVar3);
    if (unaff_w28 != 0) {
      func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
    }
    func_0x000100c989ec(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
    if ((int)(undefined8 *)(unaff_x20 + 0x48) != 0) {
      func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
    }
    if ((int)param_2 != 0) {
      func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
    }
    if ((int)param_1 != 0) {
      func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
    }
    func_0x000100e74f9c();
    func_0x000100e7b314();
    func_0x000100e7b1c4();
  }
  return;
}



/* Entry: 100e695ac; end: 100e695d3;  */

void FUN_100e695ac(void)

{
  func_0x000100e7a68c(0x100e77a3c);
  func_0x000100e7b0b8();
  return;
}



/* Entry: 100e695d4; end: 100e69637;  */

void FUN_100e695d4(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  
  func_0x000100e7ad34();
  func_0x000100e7ab90();
  func_0x000100e7b490();
  func_0x000100e7a8cc();
  func_0x000100e7a0cc();
  if (((unaff_x23 & 1) == 0) && (unaff_x21 == 0)) {
    func_0x000100e7b55c("onPlayableCtaTapped");
    func_0x000100e79f20();
    *param_2 = 0xd000000000000013;
    param_2[1] = unaff_x22;
    func_0x000100e7a074();
  }
  func_0x000100e7b0f4();
  return;
}



/* Entry: 100e69638; end: 100e6969b;  */

void FUN_100e69638(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  
  func_0x000100e7ad34();
  func_0x000100e7ab90();
  func_0x000100e7b490();
  func_0x000100e7a8cc();
  func_0x000100e7a0cc();
  if (((unaff_x23 & 1) == 0) && (unaff_x21 == 0)) {
    func_0x000100e7b55c("onAttachmentCtaTapped");
    func_0x000100e79f20();
    *param_2 = 0xd000000000000015;
    param_2[1] = unaff_x22;
    func_0x000100e7a074();
  }
  func_0x000100e7b0f4();
  return;
}



/* Entry: 100e6969c; end: 100e696ff;  */

void FUN_100e6969c(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  
  func_0x000100e7ad34();
  func_0x000100e7ab90();
  func_0x000100e7b490();
  func_0x000100e7a8cc();
  func_0x000100e7a0cc();
  if (((unaff_x23 & 1) == 0) && (unaff_x21 == 0)) {
    func_0x000100e7b55c("onRetryLoadTapped");
    func_0x000100e79f20();
    *param_2 = 0xd000000000000011;
    param_2[1] = unaff_x22;
    func_0x000100e7a074();
  }
  func_0x000100e7b0f4();
  return;
}



/* Entry: 100e69700; end: 100e698b3;  */

void FUN_100e69700(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong unaff_x22;
  ulong unaff_x24;
  
  FUN_100e779e8();
  func_0x000100e7a248();
  func_0x000100e7b0cc();
  func_0x000100e7a764(10);
  func_0x000100e7a210();
  func_0x000100e7aedc(0x4677656956626577,0xee0079726f746361);
  func_0x000100e7b468();
  func_0x000100e7a060();
  func_0x000100e7ac00();
  func_0x000100e7a088();
  uVar1 = 0x53666f43636e7973;
  func_0x000100e7a89c(0x53666f43636e7973,0xec00000065726f74);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  func_0x000100e79f74("onPlayableCtaTapped");
  uVar1 = 0xd000000000000013;
  func_0x000100e7a7d0(0xd000000000000013,unaff_x22 | 0x8000000000000000);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  func_0x000100e79f74("onAttachmentCtaTapped");
  uVar2 = 0xd000000000000015;
  func_0x000100e7a7d0(0xd000000000000015,unaff_x22 | 0x8000000000000000);
  *(ulong *)(param_1 + 0x40) = uVar2;
  func_0x000100e7a168();
  func_0x000100e7b45c();
  uVar2 = uVar2 & 0xffff | 0x73696d7369440000;
  func_0x000100e7be70(uVar2,0x5473);
  func_0x000100e7a444();
  *(ulong *)(param_1 + 0x48) = uVar2;
  func_0x000100e79f74("onRetryLoadTapped");
  uVar1 = 0xd000000000000011;
  func_0x000100e7a7d0(0xd000000000000011,unaff_x22 | 0x8000000000000000);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  func_0x000100e79fb8("loadingProgressObservable");
  func_0x000100e7b8a0();
  func_0x000100e7bf70();
  uVar1 = 0xd000000000000019;
  func_0x000100e7b840(0xd000000000000019,unaff_x24 | 0x8000000000000000);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  func_0x000100e79fb8("loadingErrorObservable");
  uVar1 = 0xd000000000000016;
  func_0x000100e7bf34();
  func_0x000100e7a9a8();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  func_0x000100e79fb8("presentPlayableObservable");
  func_0x000100e7b614();
  uVar1 = 0xd000000000000019;
  func_0x000100e7a9a8();
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  func_0x000100e7a038();
  func_0x000107c61538();
  func_0x000100e7a80c();
  func_0x000100e7a6d0();
  func_0x000100e79f38();
  return;
}



/* Entry: 100e698b4; end: 100e69983;  */

void FUN_100e698b4(undefined8 *param_1)

{
  long extraout_x8;
  undefined8 uVar1;
  code *pcVar2;
  
  func_0x000103c31f74();
  uVar1 = *param_1;
  func_0x000100e7c23c("SCValdiViewFactory");
  pcVar2 = *(code **)(extraout_x8 + 0xb0);
  func_0x000100e7b03c();
  func_0x000100e7b6bc();
  (*pcVar2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 100e69984; end: 100e699e7;  */

void FUN_100e69984(void)

{
  long unaff_x20;
  
  func_0x000100e7b690();
  func_0x000100e7bde8();
  func_0x000100e7bb54();
  func_0x000100e7b6d4();
  func_0x000100e7c12c();
  func_0x000100c989ec(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000100e7bd0c();
  func_0x000100e7c0fc();
  func_0x000100e7c118();
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 100e699e8; end: 100e69a0f;  */

void FUN_100e699e8(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e6929c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e69a10; end: 100e69a63;  */

void FUN_100e69a10(void)

{
  FUN_100e68e74();
  return;
}



/* Entry: 100e69a64; end: 100e69a8f;  */

void FUN_100e69a64(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x28);
  func_0x000100e7b264();
  func_0x000100e7b074();
  return;
}



/* Entry: 100e69a90; end: 100e69a9b;  */

void FUN_100e69a90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  
  func_0x000100e7aa00(param_1,param_2,PTR__swift_bridgeObjectRelease_11034f258);
  func_0x000100e7a1a4(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x22;
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x21;
  (*unaff_x19)(uVar1);
  return;
}



/* Entry: 100e69a9c; end: 100e69acf;  */

void FUN_100e69a9c(void)

{
  undefined8 uVar1;
  code *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  
  func_0x000100e7aa00();
  func_0x000100e7a1a4(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x22;
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x21;
  (*unaff_x19)(uVar1);
  return;
}



/* Entry: 100e69ad0; end: 100e69aef;  */

undefined1  [16] FUN_100e69ad0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e7a0e4();
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x100e798cc;
  return auVar1;
}



/* Entry: 100e69af0; end: 100e69b1b;  */

void FUN_100e69af0(void)

{
  long unaff_x20;
  
  func_0x000100e7a194(unaff_x20 + 0x38);
  func_0x000100e7b264();
  func_0x000100e7b074();
  return;
}


