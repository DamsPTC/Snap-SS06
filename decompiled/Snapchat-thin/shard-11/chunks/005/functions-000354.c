/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086846f8; end: 10868472f;  */

void FUN_1086846f8(long param_1)

{
  long unaff_x20;
  
  func_0x000107c3219c();
  FUN_108684730();
  FUN_1086847ac(param_1 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 108684730; end: 10868475b;  */

void FUN_108684730(void)

{
  func_0x0001006a0a24();
  FUN_10868475c();
  return;
}



/* Entry: 10868475c; end: 10868476f;  */

void FUN_10868475c(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_108684788();
    func_0x000108687bd4();
    return;
  }
  return;
}



/* Entry: 108684770; end: 108684787;  */

void FUN_108684770(void)

{
  FUN_108684788();
  func_0x000108687bd4();
  return;
}



/* Entry: 108684788; end: 1086847ab;  */

void FUN_108684788(long param_1,long param_2)

{
  func_0x000100699954();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 1086847ac; end: 1086847d7;  */

void FUN_1086847ac(void)

{
  func_0x000107c32170();
  FUN_1086847d8();
  return;
}



/* Entry: 1086847d8; end: 1086847eb;  */

void FUN_1086847d8(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_108684804();
    func_0x0001006a07dc();
    return;
  }
  return;
}



/* Entry: 1086847ec; end: 108684803;  */

void FUN_1086847ec(void)

{
  FUN_108684804();
  func_0x0001006a07dc();
  return;
}



/* Entry: 108684804; end: 10868482b;  */

void FUN_108684804(void)

{
  func_0x000107c32144();
  func_0x000107c321c4();
  FUN_10868482c();
  return;
}



/* Entry: 10868482c; end: 108684873;  */

void FUN_10868482c(void)

{
  long in_x3;
  
  func_0x000107c321a8();
  if (in_x3 != 0) {
    func_0x0001006a005c();
    FUN_108684874();
    func_0x0001006a00c4();
    FUN_1086848a0();
  }
  func_0x000107c3215c();
  func_0x0001086849a8();
  return;
}



/* Entry: 108684874; end: 10868489f;  */

void FUN_108684874(undefined8 param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  
  func_0x000108687b20();
  if ((bool)in_CY) {
    func_0x000105295a80();
    func_0x0001006a00d8();
    func_0x0001006a010c();
    FUN_1086848c8();
    *(undefined8 *)(unaff_x19 + 8) = param_1;
  }
  else {
    func_0x0001006998e4();
    func_0x000105295a94();
    func_0x000108687a98();
  }
  return;
}



/* Entry: 1086848a0; end: 1086848c7;  */

void FUN_1086848a0(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086848c8();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1086848c8; end: 1086848db;  */

void FUN_1086848c8(void)

{
  FUN_1086848dc();
  return;
}



/* Entry: 1086848dc; end: 10868492b;  */

void FUN_1086848dc(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    func_0x0001006a01b0();
    FUN_10868492c();
    func_0x000108687a84();
  }
  func_0x0001006a0758();
  func_0x000105295b2c();
  return;
}



/* Entry: 10868492c; end: 108684957;  */

void FUN_10868492c(void)

{
  func_0x0001006a0a24();
  FUN_108684958();
  return;
}



/* Entry: 108684958; end: 10868496b;  */

void FUN_108684958(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_108684984();
    func_0x000108687bd4();
    return;
  }
  return;
}



/* Entry: 10868496c; end: 108684983;  */

void FUN_10868496c(void)

{
  FUN_108684984();
  func_0x000108687bd4();
  return;
}



/* Entry: 108684984; end: 1086849cf;  */

void FUN_108684984(long param_1,long param_2)

{
  func_0x000107c279ac();
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  return;
}



/* Entry: 1086849d0; end: 1086849eb;  */

void FUN_1086849d0(long param_1)

{
  FUN_1086849ec();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 1086849ec; end: 108684a17;  */

void FUN_1086849ec(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_108684a18();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2d) = *(undefined8 *)(param_2 + 0x2d);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 108684a18; end: 108684a43;  */

void FUN_108684a18(void)

{
  func_0x0001006a0a24();
  FUN_108684a44();
  return;
}



/* Entry: 108684a44; end: 108684a57;  */

void FUN_108684a44(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_108684a70();
    func_0x000108687bd4();
    return;
  }
  return;
}



/* Entry: 108684a58; end: 108684a6f;  */

void FUN_108684a58(void)

{
  FUN_108684a70();
  func_0x000108687bd4();
  return;
}



/* Entry: 108684a70; end: 108684abf;  */

undefined1 * FUN_108684a70(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  func_0x000108684a98(param_1 + 8,param_2 + 8);
  return param_1;
}



/* Entry: 108684ac0; end: 108684b2b;  */

void FUN_108684ac0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x000107c321a8();
  if (param_4 != 0) {
    func_0x000107c3219c();
    FUN_108684b2c();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      _memmove(lVar1);
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  func_0x000107c3215c();
  func_0x000108684b60();
  return;
}



/* Entry: 108684b2c; end: 108684b87;  */

void FUN_108684b2c(long param_1,ulong param_2)

{
  ulong extraout_x8;
  long *unaff_x19;
  
  if (param_2 >> 0x3c == 0) {
    func_0x0001006998e4();
    func_0x00010527f3a8();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x10;
    return;
  }
  func_0x00010527f2cc();
  func_0x000107c321a0();
  if ((extraout_x8 & 1) == 0) {
    func_0x000104be14ec();
  }
  return;
}



/* Entry: 108684b88; end: 108684ba3;  */

void FUN_108684b88(long param_1)

{
  FUN_108684ba4();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 108684ba4; end: 108684bc3;  */

void FUN_108684ba4(void)

{
  func_0x000107c279a0();
  func_0x00010069adf4();
  return;
}



/* Entry: 108684bc4; end: 108684bdb;  */

void FUN_108684bc4(void)

{
  FUN_108684bdc();
  func_0x000108687bd4();
  return;
}



/* Entry: 108684bdc; end: 108684c37;  */

void FUN_108684bdc(void)

{
  func_0x0001006a0254();
  func_0x000108687c18();
  return;
}



/* Entry: 108684c38; end: 108684c5f;  */

void FUN_108684c38(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_108684c60();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108684c60; end: 108684c73;  */

void FUN_108684c60(void)

{
  FUN_108684c74();
  return;
}



/* Entry: 108684c74; end: 108684ccf;  */

long FUN_108684c74(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x0001006a0118();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x60) {
    func_0x0001006a01b0();
    FUN_108684cd0();
    unaff_x20 = uStack_38 + 0x60;
    uStack_38 = unaff_x20;
  }
  func_0x0001006a0758();
  func_0x0001052931ec();
  return unaff_x20;
}



/* Entry: 108684cd0; end: 108684cff;  */

void FUN_108684cd0(void)

{
  func_0x000107c32168();
  func_0x0001006a0be0();
  FUN_108684d00();
  return;
}



/* Entry: 108684d00; end: 108684d53;  */

void FUN_108684d00(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000108684d2c();
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}



/* Entry: 108684d54; end: 108684d6b;  */

void FUN_108684d54(void)

{
  FUN_108684d6c();
  func_0x000108687bd4();
  return;
}



/* Entry: 108684d6c; end: 108684db7;  */

void FUN_108684d6c(long param_1)

{
  long unaff_x19;
  
  func_0x0001006a0254();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 108684db8; end: 108684ddf;  */

void FUN_108684db8(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_108684de0();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108684de0; end: 108684df3;  */

void FUN_108684de0(void)

{
  FUN_108684df4();
  return;
}



/* Entry: 108684df4; end: 108684e43;  */

void FUN_108684df4(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    func_0x0001006a01b0();
    FUN_108684e44();
    func_0x000108687aac();
  }
  func_0x0001006a0758();
  func_0x0001052935c0();
  return;
}



/* Entry: 108684e44; end: 108684e5f;  */

void FUN_108684e44(void)

{
  func_0x0001006a0254();
  func_0x000108687c18();
  return;
}



/* Entry: 108684e60; end: 108684e7b;  */

void FUN_108684e60(long param_1)

{
  FUN_108684e7c();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 108684e7c; end: 108684ebf;  */

void FUN_108684e7c(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001006a0254();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 108684ec0; end: 108684f07;  */

void FUN_108684ec0(void)

{
  long in_x3;
  
  func_0x000107c321a8();
  if (in_x3 != 0) {
    func_0x0001006a005c();
    FUN_108684f08();
    func_0x0001006a00c4();
    FUN_108684f34();
  }
  func_0x000107c3215c();
  FUN_108684fc0();
  return;
}



/* Entry: 108684f08; end: 108684f33;  */

void FUN_108684f08(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    func_0x0001006998e4();
    func_0x000104be7534();
    func_0x000108687b34();
  }
  else {
    func_0x000104be74a8();
    func_0x0001006a00d8();
    func_0x0001006a010c();
    FUN_108684f5c();
    *(undefined8 *)(unaff_x19 + 8) = param_1;
  }
  return;
}



/* Entry: 108684f34; end: 108684f5b;  */

void FUN_108684f34(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_108684f5c();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108684f5c; end: 108684f6f;  */

void FUN_108684f5c(void)

{
  FUN_108684f70();
  return;
}



/* Entry: 108684f70; end: 108684fbf;  */

void FUN_108684f70(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    func_0x0001006a01b0();
    func_0x0001006a025c();
    func_0x000108687aac();
  }
  func_0x0001006a0758();
  func_0x000104be761c();
  return;
}



/* Entry: 108684fc0; end: 108685043;  */

void FUN_108684fc0(void)

{
  uint extraout_w8;
  
  func_0x000107c321a0();
  if ((extraout_w8 & 1) == 0) {
    func_0x000104be1298();
  }
  return;
}



/* Entry: 108685044; end: 10868518f;  */

void FUN_108685044(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c32168();
  func_0x0001006a03e0();
  func_0x000107c321f4();
  FUN_108685190();
  func_0x000108687044(unaff_x19 + 0x1f0,unaff_x20 + 0x1f0);
  *(undefined4 *)(unaff_x19 + 0x208) = *(undefined4 *)(unaff_x20 + 0x208);
  FUN_10867be90(unaff_x19 + 0x210,unaff_x20 + 0x210);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x230);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x228);
  *(undefined1 *)(unaff_x19 + 0x238) = *(undefined1 *)(unaff_x20 + 0x238);
  *(undefined8 *)(unaff_x19 + 0x230) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x228) = uVar1;
  func_0x000104be0ccc(unaff_x19 + 0x240,unaff_x20 + 0x240);
  *(undefined1 *)(unaff_x19 + 0x260) = *(undefined1 *)(unaff_x20 + 0x260);
  func_0x0001006a099c(unaff_x19 + 0x268,unaff_x20 + 0x268);
  func_0x0001006a042c(unaff_x19 + 0x2a8,unaff_x20 + 0x2a8);
  func_0x0001006a0cc4(unaff_x19 + 0x2c8,unaff_x20 + 0x2c8);
  FUN_108685348(unaff_x19 + 0x2f8,unaff_x20 + 0x2f8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x348);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x340);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x358);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x350);
  *(undefined1 *)(unaff_x19 + 0x360) = *(undefined1 *)(unaff_x20 + 0x360);
  *(undefined8 *)(unaff_x19 + 0x348) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x340) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x358) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x350) = uVar3;
  func_0x000104be0ccc(unaff_x19 + 0x368,unaff_x20 + 0x368);
  return;
}



/* Entry: 108685190; end: 1086851ff;  */

void FUN_108685190(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c3219c();
  func_0x000104be0ccc();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(param_1 + 0x2d) = *(undefined8 *)(unaff_x20 + 0x2d);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000107c279d4(param_1 + 0x38,unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar1;
  FUN_108685200(unaff_x19 + 0x68,unaff_x20 + 0x68);
  return;
}



/* Entry: 108685200; end: 10868522f;  */

void FUN_108685200(long param_1)

{
  func_0x000107c321a4();
  *(undefined1 *)(param_1 + 0x160) = 0;
  FUN_108685230();
  return;
}



/* Entry: 108685230; end: 108685243;  */

void FUN_108685230(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_108685260();
    *(undefined1 *)(param_1 + 0x160) = 1;
    return;
  }
  return;
}



/* Entry: 108685244; end: 10868525f;  */

void FUN_108685244(long param_1)

{
  FUN_108685260();
  *(undefined1 *)(param_1 + 0x160) = 1;
  return;
}



/* Entry: 108685260; end: 1086852ef;  */

void FUN_108685260(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c3219c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x0001006a03e0();
  func_0x000107c321f4();
  func_0x000107c279e4();
  func_0x000107c279a0(unaff_x19 + 0x100,unaff_x20 + 0x100);
  FUN_1086852f0(unaff_x19 + 0x120,unaff_x20 + 0x120);
  FUN_1086852f0(unaff_x19 + 0x140,unaff_x20 + 0x140);
  return;
}



/* Entry: 1086852f0; end: 10868531b;  */

void FUN_1086852f0(void)

{
  func_0x000107c32170();
  FUN_10868531c();
  return;
}



/* Entry: 10868531c; end: 10868532f;  */

void FUN_10868531c(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x000107c279ac();
    func_0x0001006a07dc();
    return;
  }
  return;
}



/* Entry: 108685330; end: 108685347;  */

void FUN_108685330(void)

{
  func_0x000107c279ac();
  func_0x0001006a07dc();
  return;
}



/* Entry: 108685348; end: 108685377;  */

void FUN_108685348(long param_1)

{
  func_0x000107c321a4();
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_108685378();
  return;
}



/* Entry: 108685378; end: 10868538b;  */

void FUN_108685378(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1086853a8();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 10868538c; end: 1086853a7;  */

void FUN_10868538c(long param_1)

{
  FUN_1086853a8();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1086853a8; end: 1086853db;  */

void FUN_1086853a8(void)

{
  func_0x000107c3219c();
  FUN_1086853dc();
  func_0x000107c321f4();
  FUN_10868559c();
  return;
}



/* Entry: 1086853dc; end: 108685407;  */

void FUN_1086853dc(void)

{
  func_0x000107c32170();
  FUN_108685408();
  return;
}



/* Entry: 108685408; end: 10868541b;  */

void FUN_108685408(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_108685434();
    func_0x0001006a07dc();
    return;
  }
  return;
}



/* Entry: 10868541c; end: 108685433;  */

void FUN_10868541c(void)

{
  FUN_108685434();
  func_0x0001006a07dc();
  return;
}



/* Entry: 108685434; end: 108685457;  */

void FUN_108685434(void)

{
  func_0x000107c32144();
  func_0x000107c32204();
  FUN_108685458();
  return;
}



/* Entry: 108685458; end: 10868549f;  */

void FUN_108685458(void)

{
  long in_x3;
  
  func_0x000107c321a8();
  if (in_x3 != 0) {
    func_0x0001006a005c();
    FUN_1086854a0();
    func_0x0001006a00c4();
    FUN_1086854cc();
  }
  func_0x000107c3215c();
  func_0x000108685574();
  return;
}



/* Entry: 1086854a0; end: 1086854cb;  */

void FUN_1086854a0(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    func_0x0001006998e4();
    func_0x0001052859ac();
    func_0x000108687b34();
  }
  else {
    func_0x000105285920();
    func_0x0001006a00d8();
    func_0x0001006a010c();
    FUN_1086854f4();
    *(undefined8 *)(unaff_x19 + 8) = param_1;
  }
  return;
}



/* Entry: 1086854cc; end: 1086854f3;  */

void FUN_1086854cc(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086854f4();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1086854f4; end: 108685507;  */

void FUN_1086854f4(void)

{
  FUN_108685508();
  return;
}



/* Entry: 108685508; end: 108685557;  */

void FUN_108685508(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    func_0x0001006a01b0();
    FUN_108685558();
    func_0x000108687aac();
  }
  func_0x0001006a0758();
  func_0x000105285aec();
  return;
}



/* Entry: 108685558; end: 10868559b;  */

void FUN_108685558(void)

{
  func_0x0001006a0254();
  func_0x000108687c18();
  return;
}



/* Entry: 10868559c; end: 1086855c7;  */

void FUN_10868559c(void)

{
  func_0x000107c32170();
  FUN_1086855c8();
  return;
}



/* Entry: 1086855c8; end: 1086855db;  */

void FUN_1086855c8(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1086855f4();
    func_0x0001006a07dc();
    return;
  }
  return;
}



/* Entry: 1086855dc; end: 1086855f3;  */

void FUN_1086855dc(void)

{
  FUN_1086855f4();
  func_0x0001006a07dc();
  return;
}



/* Entry: 1086855f4; end: 108685617;  */

void FUN_1086855f4(void)

{
  func_0x000107c32144();
  func_0x000107c321ac();
  FUN_108685618();
  return;
}



/* Entry: 108685618; end: 10868565f;  */

void FUN_108685618(void)

{
  long in_x3;
  
  func_0x000107c321a8();
  if (in_x3 != 0) {
    func_0x0001006a005c();
    FUN_108685660();
    func_0x0001006a00c4();
    FUN_10868568c();
  }
  func_0x000107c3215c();
  func_0x000108685888();
  return;
}



/* Entry: 108685660; end: 10868568b;  */

void FUN_108685660(undefined8 param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  
  func_0x0001006998a4();
  if ((bool)in_CY) {
    func_0x000105285e10();
    func_0x0001006a00d8();
    func_0x0001006a010c();
    FUN_1086856b4();
    *(undefined8 *)(unaff_x19 + 8) = param_1;
  }
  else {
    func_0x0001006998e4();
    func_0x000105285eac();
    func_0x000100699940();
  }
  return;
}



/* Entry: 10868568c; end: 1086856b3;  */

void FUN_10868568c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086856b4();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1086856b4; end: 1086856c7;  */

void FUN_1086856b4(void)

{
  FUN_1086856c8();
  return;
}



/* Entry: 1086856c8; end: 108685717;  */

void FUN_1086856c8(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    func_0x0001006a01b0();
    FUN_108685718();
    func_0x0001006a07a0();
  }
  func_0x0001006a0758();
  func_0x000105285fbc();
  return;
}



/* Entry: 108685718; end: 10868573f;  */

void FUN_108685718(void)

{
  func_0x000107c32144();
  func_0x000107c321c4();
  FUN_108685740();
  return;
}



/* Entry: 108685740; end: 108685787;  */

void FUN_108685740(void)

{
  long in_x3;
  
  func_0x000107c321a8();
  if (in_x3 != 0) {
    func_0x0001006a005c();
    FUN_108685788();
    func_0x0001006a00c4();
    FUN_1086857c8();
  }
  func_0x000107c3215c();
  FUN_108685860();
  return;
}



/* Entry: 108685788; end: 1086857c7;  */

void FUN_108685788(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x19;
  
  if (param_2 < 0x555555555555556) {
    func_0x0001006998e4();
    func_0x00010528e650();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    func_0x0001006a00b8(0x30);
  }
  else {
    func_0x00010528e564();
    func_0x0001006a00d8();
    func_0x0001006a010c();
    FUN_1086857f0();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 1086857c8; end: 1086857ef;  */

void FUN_1086857c8(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086857f0();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1086857f0; end: 108685803;  */

void FUN_1086857f0(void)

{
  FUN_108685804();
  return;
}



/* Entry: 108685804; end: 10868585f;  */

long FUN_108685804(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x0001006a0118();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x30) {
    func_0x0001006a01b0();
    func_0x000104be0ddc();
    unaff_x20 = uStack_38 + 0x30;
    uStack_38 = unaff_x20;
  }
  func_0x0001006a0758();
  func_0x00010528e768();
  return unaff_x20;
}



/* Entry: 108685860; end: 1086858d7;  */

void FUN_108685860(void)

{
  uint extraout_w8;
  
  func_0x000107c321a0();
  if ((extraout_w8 & 1) == 0) {
    func_0x000104bee524();
  }
  return;
}



/* Entry: 1086858d8; end: 108685947;  */

void FUN_1086858d8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c3219c();
  func_0x000107c279ac();
  func_0x0001006a0be0();
  FUN_108685948();
  func_0x000108685aec(unaff_x19 + 0x30,unaff_x20 + 0x30);
  func_0x000108685c38(unaff_x19 + 0x48,unaff_x20 + 0x48);
  return;
}



/* Entry: 108685948; end: 10868596f;  */

void FUN_108685948(void)

{
  func_0x000107c32144();
  func_0x000107c321c4();
  FUN_108685970();
  return;
}



/* Entry: 108685970; end: 1086859b7;  */

void FUN_108685970(void)

{
  long in_x3;
  
  func_0x000107c321a8();
  if (in_x3 != 0) {
    func_0x0001006a005c();
    FUN_1086859b8();
    func_0x0001006a00c4();
    FUN_1086859ec();
  }
  func_0x000107c3215c();
  FUN_108685ac4();
  return;
}



/* Entry: 1086859b8; end: 1086859eb;  */

void FUN_1086859b8(undefined8 param_1)

{
  undefined1 in_CY;
  undefined8 *unaff_x19;
  
  func_0x0001006a0618();
  if ((bool)in_CY) {
    func_0x000105291790();
    func_0x0001006a00d8();
    func_0x0001006a010c();
    FUN_108685a14();
    unaff_x19[1] = param_1;
  }
  else {
    func_0x0001006998e4();
    func_0x000105291810();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    func_0x0001006a00b8(0x58);
  }
  return;
}



/* Entry: 1086859ec; end: 108685a13;  */

void FUN_1086859ec(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_108685a14();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108685a14; end: 108685a27;  */

void FUN_108685a14(void)

{
  FUN_108685a28();
  return;
}



/* Entry: 108685a28; end: 108685a77;  */

void FUN_108685a28(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    func_0x0001006a01b0();
    FUN_108685a78();
    func_0x0001006a0744();
  }
  func_0x0001006a0758();
  func_0x00010529199c();
  return;
}



/* Entry: 108685a78; end: 108685ac3;  */

void FUN_108685a78(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32168();
  func_0x0001006a0be0();
  func_0x000107c27994();
  *(undefined4 *)(unaff_x19 + 0x30) = *(undefined4 *)(unaff_x20 + 0x30);
  func_0x000107c3220c();
  return;
}



/* Entry: 108685ac4; end: 108685b0f;  */

void FUN_108685ac4(void)

{
  uint extraout_w8;
  
  func_0x000107c321a0();
  if ((extraout_w8 & 1) == 0) {
    func_0x000104bee888();
  }
  return;
}



/* Entry: 108685b10; end: 108685b57;  */

void FUN_108685b10(void)

{
  long in_x3;
  
  func_0x000107c321a8();
  if (in_x3 != 0) {
    func_0x0001006a005c();
    FUN_108685b58();
    func_0x0001006a00c4();
    FUN_108685b84();
  }
  func_0x000107c3215c();
  FUN_108685c10();
  return;
}



/* Entry: 108685b58; end: 108685b83;  */

void FUN_108685b58(undefined8 param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  
  func_0x0001006998a4();
  if ((bool)in_CY) {
    func_0x000105291c2c();
    func_0x0001006a00d8();
    func_0x0001006a010c();
    FUN_108685bac();
    *(undefined8 *)(unaff_x19 + 8) = param_1;
  }
  else {
    func_0x0001006998e4();
    func_0x000105291cac();
    func_0x000100699940();
  }
  return;
}



/* Entry: 108685b84; end: 108685bab;  */

void FUN_108685b84(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_108685bac();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}


