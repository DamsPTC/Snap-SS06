/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006a025c; end: 1006a027b;  */

void FUN_1006a025c(long param_1)

{
  long unaff_x19;
  
  FUN_1006a0254();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1006a027c; end: 1006a02ab;  */

void FUN_1006a027c(long param_1)

{
  FUN_100632a20();
  *(undefined1 *)(param_1 + 0x398) = 0;
  FUN_1006a02ac();
  return;
}



/* Entry: 1006a02ac; end: 1006a02bf;  */

void FUN_1006a02ac(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x398) == '\x01') {
    FUN_1006a02c0();
    *(undefined1 *)(param_1 + 0x398) = 1;
    return;
  }
  return;
}



/* Entry: 1006a02c0; end: 1006a03c3;  */

void FUN_1006a02c0(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010066f544();
  FUN_1006a03e0();
  FUN_10066f658();
  FUN_1006a03ec();
  FUN_100632b34();
  FUN_1006a042c();
  FUN_1006a07e8(unaff_x19 + 0x60,unaff_x20 + 0x60);
  FUN_1006a0828(unaff_x19 + 0x80,unaff_x20 + 0x80);
  FUN_1006a0958(unaff_x19 + 0x98,unaff_x20 + 0x98);
  *(undefined2 *)(unaff_x19 + 0x2d8) = *(undefined2 *)(unaff_x20 + 0x2d8);
  FUN_1006a099c(unaff_x19 + 0x2e0,unaff_x20 + 0x2e0);
  uVar1 = *(undefined8 *)(unaff_x20 + 800);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x338);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x330);
  *(undefined8 *)(unaff_x19 + 0x328) = *(undefined8 *)(unaff_x20 + 0x328);
  *(undefined8 *)(unaff_x19 + 800) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x338) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x330) = uVar2;
  FUN_1006a09e0(unaff_x19 + 0x340,unaff_x20 + 0x340);
  FUN_1006a0a34(unaff_x19 + 0x370,unaff_x20 + 0x370);
  return;
}



/* Entry: 1006a03c4; end: 1006a03df;  */

void FUN_1006a03c4(long param_1)

{
  FUN_1006a02c0();
  *(undefined1 *)(param_1 + 0x398) = 1;
  return;
}



/* Entry: 1006a03e0; end: 1006a03eb;  */

void FUN_1006a03e0(long param_1)

{
  long unaff_x20;
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(unaff_x20 + 0x18);
  return;
}



/* Entry: 1006a03ec; end: 1006a0417;  */

void FUN_1006a03ec(void)

{
  FUN_10066ee0c();
  FUN_1006a0418();
  return;
}



/* Entry: 1006a0418; end: 1006a042b;  */

void FUN_1006a0418(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x0001086842e8();
    FUN_1006a07dc();
    return;
  }
  return;
}



/* Entry: 1006a042c; end: 1006a0457;  */

void FUN_1006a042c(void)

{
  FUN_10066ee0c();
  FUN_1006a0458();
  return;
}



/* Entry: 1006a0458; end: 1006a046b;  */

void FUN_1006a0458(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1006a046c();
    FUN_1006a07dc();
    return;
  }
  return;
}



/* Entry: 1006a046c; end: 1006a048f;  */

void FUN_1006a046c(void)

{
  func_0x000100632cd8();
  FUN_100632f1c();
  FUN_1006a04a8();
  return;
}



/* Entry: 1006a0490; end: 1006a04a7;  */

void FUN_1006a0490(void)

{
  FUN_1006a046c();
  FUN_1006a07dc();
  return;
}



/* Entry: 1006a04a8; end: 1006a04ef;  */

void FUN_1006a04a8(void)

{
  long in_x3;
  
  func_0x000100632d24();
  if (in_x3 != 0) {
    FUN_1006a005c();
    FUN_1006a04f0();
    func_0x0001006a00c4();
    FUN_1006a051c();
  }
  FUN_100632d78();
  FUN_1006a07b4();
  return;
}



/* Entry: 1006a04f0; end: 1006a051b;  */

void FUN_1006a04f0(undefined8 param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  
  func_0x0001006998a4();
  if ((bool)in_CY) {
    func_0x00010528d768();
    func_0x0001006a00d8();
    FUN_1006a010c();
    FUN_1006a0594();
    *(undefined8 *)(unaff_x19 + 8) = param_1;
  }
  else {
    FUN_1006998e4();
    FUN_1006975fc();
    FUN_100699940();
  }
  return;
}



/* Entry: 1006a051c; end: 1006a0543;  */

void FUN_1006a051c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  FUN_1006a010c();
  FUN_1006a0594();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1006a0544; end: 1006a0593;  */

void FUN_1006a0544(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    FUN_1006a01b0();
    FUN_1006a05a8();
    FUN_1006a07a0();
  }
  func_0x0001006a0758();
  FUN_100697758();
  return;
}



/* Entry: 1006a0594; end: 1006a05a7;  */

void FUN_1006a0594(void)

{
  FUN_1006a0544();
  return;
}



/* Entry: 1006a05a8; end: 1006a05cf;  */

void FUN_1006a05a8(void)

{
  func_0x000100632cd8();
  FUN_100632d18();
  FUN_1006a05d0();
  return;
}



/* Entry: 1006a05d0; end: 1006a0617;  */

void FUN_1006a05d0(void)

{
  long in_x3;
  
  func_0x000100632d24();
  if (in_x3 != 0) {
    FUN_1006a005c();
    FUN_1006a0630();
    func_0x0001006a00c4();
    FUN_1006a0664();
  }
  FUN_100632d78();
  FUN_1006a0778();
  return;
}



/* Entry: 1006a0618; end: 1006a062f;  */

void FUN_1006a0618(void)

{
  return;
}



/* Entry: 1006a0630; end: 1006a0663;  */

void FUN_1006a0630(undefined8 param_1)

{
  undefined1 in_CY;
  undefined8 *unaff_x19;
  
  FUN_1006a0618();
  if ((bool)in_CY) {
    func_0x00010528f52c();
    func_0x0001006a00d8();
    FUN_1006a010c();
    FUN_1006a06dc();
    unaff_x19[1] = param_1;
  }
  else {
    FUN_1006998e4();
    FUN_10069912c();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    FUN_1006a00b8(0x58);
  }
  return;
}



/* Entry: 1006a0664; end: 1006a068b;  */

void FUN_1006a0664(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  FUN_1006a010c();
  FUN_1006a06dc();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1006a068c; end: 1006a06db;  */

void FUN_1006a068c(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    FUN_1006a01b0();
    FUN_1006a06f0();
    FUN_1006a0744();
  }
  func_0x0001006a0758();
  FUN_1006993ec();
  return;
}



/* Entry: 1006a06dc; end: 1006a06ef;  */

void FUN_1006a06dc(void)

{
  FUN_1006a068c();
  return;
}



/* Entry: 1006a06f0; end: 1006a0743;  */

void FUN_1006a06f0(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x00010066f544();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  func_0x000107c60c94(param_1 + 0x28,unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined1 *)(unaff_x19 + 0x50) = *(undefined1 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  return;
}



/* Entry: 1006a0744; end: 1006a0777;  */

void FUN_1006a0744(void)

{
  return;
}



/* Entry: 1006a0778; end: 1006a079f;  */

void FUN_1006a0778(void)

{
  uint extraout_w8;
  
  func_0x0001005fad28();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001006994ec();
  }
  return;
}



/* Entry: 1006a07a0; end: 1006a07b3;  */

void FUN_1006a07a0(void)

{
  return;
}



/* Entry: 1006a07b4; end: 1006a07db;  */

void FUN_1006a07b4(void)

{
  uint extraout_w8;
  
  func_0x0001005fad28();
  if ((extraout_w8 & 1) == 0) {
    FUN_10069b2f8();
  }
  return;
}



/* Entry: 1006a07dc; end: 1006a07e7;  */

void FUN_1006a07dc(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1006a07e8; end: 1006a0813;  */

void FUN_1006a07e8(void)

{
  FUN_10066ee0c();
  FUN_1006a0814();
  return;
}



/* Entry: 1006a0814; end: 1006a0827;  */

void FUN_1006a0814(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x000108687044();
    FUN_1006a07dc();
    return;
  }
  return;
}



/* Entry: 1006a0828; end: 1006a084b;  */

void FUN_1006a0828(void)

{
  func_0x000100632cd8();
  FUN_100632f1c();
  FUN_1006a084c();
  return;
}



/* Entry: 1006a084c; end: 1006a0893;  */

void FUN_1006a084c(void)

{
  long in_x3;
  
  func_0x000100632d24();
  if (in_x3 != 0) {
    FUN_1006a005c();
    FUN_1006998b8();
    func_0x0001006a00c4();
    FUN_1006a0894();
  }
  FUN_100632d78();
  FUN_1006999f4();
  return;
}



/* Entry: 1006a0894; end: 1006a08bb;  */

void FUN_1006a0894(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  FUN_1006a010c();
  FUN_1006a090c();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1006a08bc; end: 1006a090b;  */

void FUN_1006a08bc(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    FUN_1006a01b0();
    FUN_100699954();
    FUN_1006a07a0();
  }
  func_0x0001006a0758();
  FUN_1006a0920();
  return;
}



/* Entry: 1006a090c; end: 1006a091f;  */

void FUN_1006a090c(void)

{
  FUN_1006a08bc();
  return;
}



/* Entry: 1006a0920; end: 1006a094f;  */

long FUN_1006a0920(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000105290c2c(param_1);
  }
  return param_1;
}



/* Entry: 1006a0950; end: 1006a0957;  */

void FUN_1006a0950(void)

{
  return;
}



/* Entry: 1006a0958; end: 1006a0987;  */

void FUN_1006a0958(long param_1)

{
  FUN_100632a20();
  *(undefined1 *)(param_1 + 0x238) = 0;
  FUN_1006a0988();
  return;
}



/* Entry: 1006a0988; end: 1006a099b;  */

void FUN_1006a0988(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x238) == '\x01') {
    func_0x0001086844b8();
    *(undefined1 *)(param_1 + 0x238) = 1;
    return;
  }
  return;
}



/* Entry: 1006a099c; end: 1006a09cb;  */

void FUN_1006a099c(long param_1)

{
  FUN_100632a20();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_1006a09cc();
  return;
}



/* Entry: 1006a09cc; end: 1006a09df;  */

void FUN_1006a09cc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    func_0x0001086849ec();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 1006a09e0; end: 1006a0a0f;  */

void FUN_1006a09e0(long param_1)

{
  FUN_100632a20();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_1006a0a10();
  return;
}



/* Entry: 1006a0a10; end: 1006a0a33;  */

void FUN_1006a0a10(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x000108684ba4();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 1006a0a34; end: 1006a0a5f;  */

void FUN_1006a0a34(void)

{
  func_0x0001006a0a24();
  FUN_1006a0a60();
  return;
}



/* Entry: 1006a0a60; end: 1006a0a73;  */

void FUN_1006a0a60(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    func_0x000108684bdc();
    func_0x000108687bd4();
    return;
  }
  return;
}



/* Entry: 1006a0a74; end: 1006a0bdf;  */

void FUN_1006a0a74(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000100632ab0();
  func_0x0001005fad5c();
  FUN_1006a0be0();
  func_0x0001005fad5c();
  func_0x0001005fad5c(unaff_x19 + 0x30,unaff_x20 + 0x30);
  func_0x0001005fad5c(unaff_x19 + 0x48,unaff_x20 + 0x48);
  func_0x0001005fad5c(unaff_x19 + 0x60,unaff_x20 + 0x60);
  func_0x0001005fad5c(unaff_x19 + 0x78,unaff_x20 + 0x78);
  FUN_1006a0bec(unaff_x19 + 0x90,unaff_x20 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x19 + 199) = *(undefined8 *)(unaff_x20 + 199);
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar4;
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar1;
  FUN_1006a0c84(unaff_x19 + 0xd0,unaff_x20 + 0xd0);
  *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(unaff_x20 + 0xf8);
  FUN_10069a7a4(unaff_x19 + 0x100,unaff_x20 + 0x100);
  FUN_1006a0cc4(unaff_x19 + 0x118,unaff_x20 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x148);
  *(undefined8 *)(unaff_x19 + 0x156) = *(undefined8 *)(unaff_x20 + 0x156);
  *(undefined8 *)(unaff_x19 + 0x150) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x148) = uVar1;
  FUN_1006a0d08(unaff_x19 + 0x160,unaff_x20 + 0x160);
  return;
}



/* Entry: 1006a0be0; end: 1006a0beb;  */

undefined1  [16] FUN_1006a0be0(long param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = param_1 + 0x18;
  return auVar1;
}



/* Entry: 1006a0bec; end: 1006a0c13;  */

void FUN_1006a0bec(void)

{
  func_0x000100632cd8();
  FUN_100632d18();
  FUN_1006a0c14();
  return;
}



/* Entry: 1006a0c14; end: 1006a0c5b;  */

void FUN_1006a0c14(void)

{
  long in_x3;
  
  func_0x000100632d24();
  if (in_x3 != 0) {
    FUN_1006a005c();
    func_0x000108684bf8();
    func_0x0001006a00c4();
    func_0x000108684c38();
  }
  FUN_100632d78();
  FUN_1006a0c5c();
  return;
}



/* Entry: 1006a0c5c; end: 1006a0c83;  */

void FUN_1006a0c5c(void)

{
  uint extraout_w8;
  
  func_0x0001005fad28();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010069abc0();
  }
  return;
}



/* Entry: 1006a0c84; end: 1006a0caf;  */

void FUN_1006a0c84(void)

{
  func_0x0001006a0a24();
  FUN_1006a0cb0();
  return;
}



/* Entry: 1006a0cb0; end: 1006a0cc3;  */

void FUN_1006a0cb0(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    func_0x000108684d6c();
    func_0x000108687bd4();
    return;
  }
  return;
}



/* Entry: 1006a0cc4; end: 1006a0cf3;  */

void FUN_1006a0cc4(long param_1)

{
  FUN_100632a20();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_1006a0cf4();
  return;
}



/* Entry: 1006a0cf4; end: 1006a0d07;  */

void FUN_1006a0cf4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x000108684e7c();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 1006a0d08; end: 1006a0d37;  */

void FUN_1006a0d08(long param_1)

{
  FUN_100632a20();
  *(undefined1 *)(param_1 + 0x60) = 0;
  FUN_1006a0d38();
  return;
}



/* Entry: 1006a0d38; end: 1006a0d4b;  */

void FUN_1006a0d38(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    func_0x0001086846c4();
    *(undefined1 *)(param_1 + 0x60) = 1;
    return;
  }
  return;
}



/* Entry: 1006a0d4c; end: 1006a0d73;  */

void FUN_1006a0d4c(void)

{
  uint extraout_w8;
  
  func_0x0001005fad28();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010066c40c();
  }
  return;
}



/* Entry: 1006a0d74; end: 1006a0d7f;  */

void FUN_1006a0d74(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1006a0d80; end: 1006a0daf;  */

void FUN_1006a0d80(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_10065adc4();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x5d8;
    FUN_10069ea28();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1006a0db0; end: 1006a0db7;  */

void FUN_1006a0db0(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  FUN_10065adc4(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -3;
    FUN_1002920a0();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1006a0db8; end: 1006a0de7;  */

void FUN_1006a0db8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_10065adc4();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x18;
    FUN_1002920a0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1006a0de8; end: 1006a0def;  */

void FUN_1006a0de8(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  FUN_10065adc4(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -3;
    func_0x0001006994c8();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1006a0df0; end: 1006a0e1f;  */

void FUN_1006a0df0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_10065adc4();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x18;
    func_0x0001006994c8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1006a0e20; end: 1006a0e27;  */

void FUN_1006a0e20(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  FUN_10065adc4(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xb;
    func_0x0001006a0e58();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1006a0e28; end: 1006a0e7b;  */

void FUN_1006a0e28(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_10065adc4();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x58;
    func_0x0001006a0e58();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1006a0e7c; end: 1006a0f37;  */

void FUN_1006a0e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f5cd28,&UNK_10dbb7590);
  puVar1 = &UNK_110644f80;
  func_0x000107c613fc(&UNK_110644f80,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(0x1006c8120,puVar1);
  return;
}



/* Entry: 1006a0f38; end: 1006a0f57;  */

void FUN_1006a0f38(void)

{
  func_0x000107c61168(&PTR_PTR_1129c87c0);
  return;
}



/* Entry: 1006a0f58; end: 1006a0f67;  */

undefined1  [16] FUN_1006a0f58(void)

{
  return ZEXT816(0x11074deb0);
}



/* Entry: 1006a0f68; end: 1006a10e3;  */

void FUN_1006a0f68(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x118) == '\x01') {
    if (((*(char *)(unaff_x20 + 0x128) != '\x01') ||
        (*(long *)(unaff_x20 + 0x120) < *(long *)(unaff_x20 + 0x110))) ||
       ((*(byte *)(unaff_x20 + 0x268) & 1) != 0)) {
LAB_1006a102c:
      lVar1 = *(long *)(unaff_x20 + 0x150);
      lVar2 = *(long *)(unaff_x20 + 0x168);
      if ((*(char *)(unaff_x20 + 0x118) != '\0') && ((*(byte *)(unaff_x20 + 0x128) & 1) != 0)) {
        for (; lVar1 != *(long *)(unaff_x20 + 0x158); lVar1 = lVar1 + 8) {
        }
        for (; lVar2 != *(long *)(unaff_x20 + 0x170); lVar2 = lVar2 + 8) {
        }
      }
      return;
    }
  }
  else if (*(char *)(unaff_x20 + 0x268) == '\x01') goto LAB_1006a102c;
  return;
}



/* Entry: 1006a10e4; end: 1006a1113;  */

ulong FUN_1006a10e4(long param_1)

{
  uint *puVar1;
  
  if (*(char *)(param_1 + 0x370) == '\x01') {
    puVar1 = (uint *)(param_1 + 0x368);
    func_0x0001072833b8();
    return (ulong)*puVar1 | 0x100000000;
  }
  return 0;
}



/* Entry: 1006a1114; end: 1006a111b;  */

undefined8 FUN_1006a1114(void)

{
  return 0;
}



/* Entry: 1006a111c; end: 1006a1133;  */

void FUN_1006a111c(void)

{
  FUN_10069ffd0();
  FUN_1006a07dc();
  return;
}



/* Entry: 1006a1134; end: 1006a2463;  */

void FUN_1006a1134(void)

{
  return;
}



/* Entry: 1006a2464; end: 1006a248b;  */

void FUN_1006a2464(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_100671a50();
  *(long *)(param_1 + 8) = lVar1 + 0x378;
  return;
}



/* Entry: 1006a248c; end: 1006a2497;  */

void FUN_1006a248c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x10);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010868cda4(plVar1 + 2);
    func_0x000107c60e14(plVar1);
    plVar1 = (long *)lVar2;
  }
  return;
}



/* Entry: 1006a2498; end: 1006a24ef;  */

void FUN_1006a2498(void)

{
  FUN_1006a248c();
  FUN_1006a24f0();
  return;
}



/* Entry: 1006a24f0; end: 1006a2507;  */

void FUN_1006a24f0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1006a2508; end: 1006a252b;  */

undefined8 FUN_1006a2508(undefined8 param_1)

{
  FUN_1006a24f0(param_1,0);
  return param_1;
}



/* Entry: 1006a252c; end: 1006a2533;  */

void FUN_1006a252c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_100658238(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x3d0;
    FUN_100657324();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1006a2534; end: 1006a2567;  */

void FUN_1006a2534(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_100658238();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x3d0;
    FUN_100657324();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1006a2568; end: 1006a257b;  */

undefined8 FUN_1006a2568(void)

{
  undefined8 *unaff_x19;
  
  return *(undefined8 *)*unaff_x19;
}



/* Entry: 1006a257c; end: 1006a25a7;  */

void FUN_1006a257c(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010054e698();
  FUN_1006a25b4(*param_1);
  **(undefined1 **)(unaff_x20 + 8) = *(undefined1 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1006a25a8; end: 1006a25b3;  */

void FUN_1006a25a8(void)

{
  return;
}



/* Entry: 1006a25b4; end: 1006a261f;  */

void FUN_1006a25b4(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  FUN_1006a25a8();
  func_0x0001006a25e8();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 1006a2620; end: 1006a2627;  */

void FUN_1006a2620(void)

{
  return;
}



/* Entry: 1006a2628; end: 1006a2657;  */

long FUN_1006a2628(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1005fce88(param_1 + 0x10);
  }
  return param_1;
}



/* Entry: 1006a2658; end: 1006a2667;  */

void FUN_1006a2658(void)

{
  return;
}



/* Entry: 1006a2668; end: 1006a2687;  */

void FUN_1006a2668(long param_1)

{
  long lVar1;
  
  func_0x0001006a2660();
  lVar1 = param_1 + 0xc0;
  if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
    FUN_1004b4e98();
    *(long *)(param_1 + 200) = lVar1;
    *(undefined1 *)(param_1 + 0xd0) = 1;
  }
  return;
}



/* Entry: 1006a2688; end: 1006a2693;  */

void FUN_1006a2688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  FUN_1005ed310(param_2,param_3);
  FUN_1005ed358();
  FUN_1005f4a10();
  FUN_100693a78(*(undefined8 *)(extraout_x8 + 0x10));
  func_0x0001005ed374();
  return;
}



/* Entry: 1006a2694; end: 1006a26cb;  */

void FUN_1006a2694(void)

{
  long extraout_x8;
  
  FUN_1005ed310();
  FUN_1005ed358();
  FUN_1005f4a10();
  FUN_100693a78(*(undefined8 *)(extraout_x8 + 0x10));
  func_0x0001005ed374();
  return;
}



/* Entry: 1006a26cc; end: 1006a26df;  */

void FUN_1006a26cc(void)

{
  return;
}



/* Entry: 1006a26e0; end: 1006a275b;  */

long FUN_1006a26e0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  FUN_1006a26cc();
  uStack_48 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    FUN_10054f8dc(param_4,param_2);
    param_4 = lStack_38 + 0x18;
    lStack_38 = param_4;
  }
  uStack_48 = 1;
  FUN_1006568e4(auStack_60);
  return param_4;
}



/* Entry: 1006a275c; end: 1006a276f;  */

void FUN_1006a275c(void)

{
  FUN_1006a26e0();
  return;
}



/* Entry: 1006a2770; end: 1006a27a3;  */

void FUN_1006a2770(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_1006a275c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1006a27a4; end: 1006a27af;  */

ulong FUN_1006a27a4(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = *(uint *)(unaff_x20 + 0x7c);
  uVar3 = *(uint *)(unaff_x21 + 0x240);
  if (uVar3 != uVar1) {
    uVar4 = uVar3 & 0xffffff00;
    uVar5 = 0x100000000;
    goto LAB_1006a29c0;
  }
  if (*(char *)(unaff_x21 + 0x60) == '\x01') {
    if (*(int *)(unaff_x21 + 0x5c) == 7) {
      uVar2 = 2;
    }
    else {
      if (*(int *)(unaff_x21 + 0x5c) != 8) goto LAB_1006a2998;
      uVar2 = 3;
    }
    uVar4 = 0;
    uVar3 = 0;
    if (uVar1 != uVar2) {
      uVar3 = uVar2;
    }
    uVar5 = 0;
    if (uVar1 != uVar2) {
      uVar5 = 0x100000000;
    }
  }
  else {
LAB_1006a2998:
    uVar3 = 0;
    uVar5 = 0;
    uVar4 = 0;
  }
LAB_1006a29c0:
  return uVar5 | (uVar4 | uVar3 & 0xff);
}



/* Entry: 1006a27b0; end: 1006a2957;  */

long * FUN_1006a27b0(ulong param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  long *plVar9;
  undefined1 auStack_c8 [24];
  long alStack_b0 [4];
  undefined4 uStack_90;
  undefined1 auStack_88 [40];
  
  lVar8 = *param_2;
  lVar2 = param_2[1];
  uVar4 = param_1;
  do {
    if (lVar8 == lVar2) {
      return param_2;
    }
    FUN_1006a27a4();
    lVar8 = lVar8 + 0x378;
  } while (uVar4 >> 0x20 == 0);
  plVar5 = param_3;
  func_0x000104bf1c14(param_3,(param_2[1] - *param_2) / 0x378);
  func_0x000100635480();
  lVar2 = param_2[1];
  for (lVar8 = *param_2; lVar8 != lVar2; lVar8 = lVar8 + 0x378) {
    FUN_1006a27a4();
    if ((ulong)plVar5 >> 0x20 == 0) {
      plVar5 = param_3;
      func_0x000107c29568(param_3,lVar8);
    }
    else {
      plVar9 = *(long **)(*(long *)(param_1 + 0xb0) + 0xc0);
      alStack_b0[1] = 0;
      alStack_b0[2] = 0;
      alStack_b0[3] = 0;
      uStack_90 = 0x2d2;
      iVar1 = *(int *)(param_1 + 0x7c) + 0x41019f;
      if (2 < *(int *)(param_1 + 0x7c) - 1U) {
        iVar1 = 0x41019f;
      }
      plVar6 = alStack_b0;
      alStack_b0[0] = extraout_x8 + 0x10;
      FUN_1006354d8(plVar6,iVar1);
      FUN_10002b838(auStack_c8,&UNK_10f4b20e6);
      uVar3 = (int)plVar5 - 1;
      puVar7 = &DAT_10f4be0ce;
      if (uVar3 < 3) {
        puVar7 = (&PTR_DAT_110a67e90)[uVar3];
      }
      FUN_1005504ac(plVar6,auStack_c8,puVar7);
      func_0x0001005505a0(auStack_88,plVar6);
      (**(code **)(*plVar9 + 0x50))(plVar9,auStack_88);
      FUN_1005505e4(auStack_88);
      func_0x000107c32c44();
      plVar5 = alStack_b0;
      FUN_1005505e4();
    }
  }
  return param_3;
}



/* Entry: 1006a2958; end: 1006a29cf;  */

ulong FUN_1006a2958(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x240);
  if (uVar2 != param_2) {
    uVar3 = uVar2 & 0xffffff00;
    uVar4 = 0x100000000;
    goto LAB_1006a29c0;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    if (*(int *)(param_1 + 0x5c) == 7) {
      uVar1 = 2;
    }
    else {
      if (*(int *)(param_1 + 0x5c) != 8) goto LAB_1006a2998;
      uVar1 = 3;
    }
    uVar3 = 0;
    uVar2 = 0;
    if (param_2 != uVar1) {
      uVar2 = uVar1;
    }
    uVar4 = 0;
    if (param_2 != uVar1) {
      uVar4 = 0x100000000;
    }
  }
  else {
LAB_1006a2998:
    uVar2 = 0;
    uVar4 = 0;
    uVar3 = 0;
  }
LAB_1006a29c0:
  return uVar4 | (uVar3 | uVar2 & 0xff);
}



/* Entry: 1006a29d0; end: 1006a2a13;  */

void FUN_1006a29d0(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x19;
  
  if (param_2 < 0x49cd42e2049cd5) {
    FUN_1006998e4();
    FUN_1006719c4();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    FUN_1006a00b8(0x378);
  }
  else {
    func_0x000104bf1c8c();
    func_0x0001006a00d8();
    FUN_1006a010c();
    FUN_1006a2a98();
    unaff_x19[1] = param_1;
  }
  return;
}


