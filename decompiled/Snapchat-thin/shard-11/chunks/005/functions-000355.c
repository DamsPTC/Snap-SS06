/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108685bac; end: 108685bbf;  */

void FUN_108685bac(void)

{
  FUN_108685bc0();
  return;
}



/* Entry: 108685bc0; end: 108685c0f;  */

void FUN_108685bc0(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    func_0x0001006a01b0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    func_0x0001006a07a0();
  }
  func_0x0001006a0758();
  func_0x000105291db4();
  return;
}



/* Entry: 108685c10; end: 108685c5f;  */

void FUN_108685c10(void)

{
  uint extraout_w8;
  
  func_0x000107c321a0();
  if ((extraout_w8 & 1) == 0) {
    func_0x000104bee800();
  }
  return;
}



/* Entry: 108685c60; end: 108685ccb;  */

void FUN_108685c60(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x000107c321a8();
  if (param_4 != 0) {
    func_0x000107c3219c();
    FUN_108685ccc();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      _memmove(lVar1);
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  func_0x000107c3215c();
  func_0x000108685d00();
  return;
}



/* Entry: 108685ccc; end: 108685dbb;  */

void FUN_108685ccc(long param_1,ulong param_2)

{
  ulong extraout_x8;
  long *unaff_x19;
  
  if (param_2 >> 0x3e == 0) {
    func_0x0001006998e4();
    func_0x00010529209c();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 4;
    return;
  }
  func_0x00010529201c();
  func_0x000107c321a0();
  if ((extraout_x8 & 1) == 0) {
    func_0x000104bee7c4();
  }
  return;
}



/* Entry: 108685dbc; end: 108685e03;  */

void FUN_108685dbc(void)

{
  long in_x3;
  
  func_0x000107c321a8();
  if (in_x3 != 0) {
    func_0x0001006a005c();
    FUN_108685e04();
    func_0x0001006a00c4();
    FUN_108685e30();
  }
  func_0x000107c3215c();
  func_0x000108685edc();
  return;
}



/* Entry: 108685e04; end: 108685e2f;  */

void FUN_108685e04(undefined8 param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  
  func_0x000108687b20();
  if ((bool)in_CY) {
    func_0x00010863b39c();
    func_0x0001006a00d8();
    func_0x0001006a010c();
    FUN_108685e58();
    *(undefined8 *)(unaff_x19 + 8) = param_1;
  }
  else {
    func_0x0001006998e4();
    func_0x00010863b404();
    func_0x000108687a98();
  }
  return;
}



/* Entry: 108685e30; end: 108685e57;  */

void FUN_108685e30(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_108685e58();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108685e58; end: 108685e6b;  */

void FUN_108685e58(void)

{
  FUN_108685e6c();
  return;
}



/* Entry: 108685e6c; end: 108685ebb;  */

void FUN_108685e6c(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    func_0x0001006a01b0();
    FUN_108685ebc();
    func_0x000108687a84();
  }
  func_0x0001006a0758();
  FUN_10863b4e8();
  return;
}



/* Entry: 108685ebc; end: 108685f2b;  */

void FUN_108685ebc(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001006a0254();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 108685f2c; end: 108685f73;  */

void FUN_108685f2c(void)

{
  long in_x3;
  
  func_0x000107c321a8();
  if (in_x3 != 0) {
    func_0x0001006a005c();
    FUN_108685f74();
    func_0x0001006a00c4();
    FUN_108685fb8();
  }
  func_0x000107c3215c();
  func_0x0001086862bc();
  return;
}



/* Entry: 108685f74; end: 108685fb7;  */

void FUN_108685f74(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x19;
  
  if (param_2 < 0x1745d1745d1745e) {
    func_0x0001006998e4();
    func_0x00010863b6f0();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    func_0x0001006a00b8(0xb0);
  }
  else {
    FUN_10863b674();
    func_0x0001006a00d8();
    func_0x0001006a010c();
    FUN_108685fe0();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 108685fb8; end: 108685fdf;  */

void FUN_108685fb8(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_108685fe0();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108685fe0; end: 108685ff3;  */

void FUN_108685fe0(void)

{
  FUN_108685ff4();
  return;
}



/* Entry: 108685ff4; end: 10868604f;  */

long FUN_108685ff4(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x0001006a0118();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0xb0) {
    func_0x0001006a01b0();
    FUN_108686050();
    unaff_x20 = uStack_38 + 0xb0;
    uStack_38 = unaff_x20;
  }
  func_0x0001006a0758();
  FUN_10863b824();
  return unaff_x20;
}



/* Entry: 108686050; end: 1086860af;  */

void FUN_108686050(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c3219c();
  FUN_108685a78();
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(unaff_x20 + 0x58);
  FUN_1086860b0(param_1 + 0x60,unaff_x20 + 0x60);
  FUN_108686144(unaff_x19 + 0x98,unaff_x20 + 0x98);
  return;
}



/* Entry: 1086860b0; end: 1086860df;  */

void FUN_1086860b0(long param_1)

{
  func_0x000107c321a4();
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_1086860e0();
  return;
}



/* Entry: 1086860e0; end: 1086860f3;  */

void FUN_1086860e0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_108686110();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 1086860f4; end: 10868610f;  */

void FUN_1086860f4(long param_1)

{
  FUN_108686110();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 108686110; end: 108686143;  */

void FUN_108686110(void)

{
  func_0x000107c3219c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x0001006a0be0();
  func_0x0001006a05a8();
  return;
}



/* Entry: 108686144; end: 10868616b;  */

void FUN_108686144(void)

{
  func_0x000107c32144();
  func_0x000107c321c4();
  FUN_10868616c();
  return;
}



/* Entry: 10868616c; end: 1086861b3;  */

void FUN_10868616c(void)

{
  long in_x3;
  
  func_0x000107c321a8();
  if (in_x3 != 0) {
    func_0x0001006a005c();
    FUN_1086861b4();
    func_0x0001006a00c4();
    FUN_1086861e0();
  }
  func_0x000107c3215c();
  func_0x000108686294();
  return;
}



/* Entry: 1086861b4; end: 1086861df;  */

void FUN_1086861b4(undefined8 param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  
  func_0x000108687b20();
  if ((bool)in_CY) {
    FUN_10861b5f4();
    func_0x0001006a00d8();
    func_0x0001006a010c();
    FUN_108686208();
    *(undefined8 *)(unaff_x19 + 8) = param_1;
  }
  else {
    func_0x0001006998e4();
    func_0x00010861b6e0();
    func_0x000108687a98();
  }
  return;
}



/* Entry: 1086861e0; end: 108686207;  */

void FUN_1086861e0(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_108686208();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108686208; end: 10868621b;  */

void FUN_108686208(void)

{
  FUN_10868621c();
  return;
}



/* Entry: 10868621c; end: 10868626b;  */

void FUN_10868621c(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    func_0x0001006a01b0();
    FUN_10868626c();
    func_0x000108687a84();
  }
  func_0x0001006a0758();
  FUN_10861b838();
  return;
}



/* Entry: 10868626c; end: 10868630b;  */

void FUN_10868626c(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001006a0254();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(unaff_x19 + 0x1d);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 10868630c; end: 108686353;  */

void FUN_10868630c(void)

{
  long in_x3;
  
  func_0x000107c321a8();
  if (in_x3 != 0) {
    func_0x0001006a005c();
    FUN_108686354();
    func_0x0001006a00c4();
    FUN_108686388();
  }
  func_0x000107c3215c();
  func_0x0001086864cc();
  return;
}



/* Entry: 108686354; end: 108686387;  */

void FUN_108686354(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 >> 0x3a == 0) {
    func_0x0001006998e4();
    func_0x00010863ba20();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x40;
  }
  else {
    FUN_10863b9a4();
    func_0x0001006a00d8();
    func_0x0001006a010c();
    FUN_1086863b0();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 108686388; end: 1086863af;  */

void FUN_108686388(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086863b0();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1086863b0; end: 1086863c3;  */

void FUN_1086863b0(void)

{
  FUN_1086863c4();
  return;
}



/* Entry: 1086863c4; end: 10868641f;  */

long FUN_1086863c4(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x0001006a0118();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x40) {
    func_0x0001006a01b0();
    FUN_108686420();
    unaff_x20 = uStack_38 + 0x40;
    uStack_38 = unaff_x20;
  }
  func_0x0001006a0758();
  FUN_10863bb24();
  return unaff_x20;
}



/* Entry: 108686420; end: 108686453;  */

void FUN_108686420(void)

{
  func_0x000107c3219c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x0001006a0be0();
  FUN_108686454();
  return;
}



/* Entry: 108686454; end: 10868647f;  */

void FUN_108686454(void)

{
  func_0x0001006a0a24();
  FUN_108686480();
  return;
}



/* Entry: 108686480; end: 108686493;  */

void FUN_108686480(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1086864ac();
    func_0x000108687bd4();
    return;
  }
  return;
}



/* Entry: 108686494; end: 1086864ab;  */

void FUN_108686494(void)

{
  FUN_1086864ac();
  func_0x000108687bd4();
  return;
}



/* Entry: 1086864ac; end: 10868651b;  */

void FUN_1086864ac(long param_1)

{
  long unaff_x19;
  
  func_0x0001006a0254();
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10868651c; end: 108686563;  */

void FUN_10868651c(void)

{
  long in_x3;
  
  func_0x000107c321a8();
  if (in_x3 != 0) {
    func_0x0001006a005c();
    FUN_108686564();
    func_0x0001006a00c4();
    FUN_108686590();
  }
  func_0x000107c3215c();
  FUN_10868669c();
  return;
}



/* Entry: 108686564; end: 10868658f;  */

void FUN_108686564(undefined8 param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  
  func_0x000108687b20();
  if ((bool)in_CY) {
    FUN_10863bca4();
    func_0x0001006a00d8();
    func_0x0001006a010c();
    FUN_1086865b8();
    *(undefined8 *)(unaff_x19 + 8) = param_1;
  }
  else {
    func_0x0001006998e4();
    func_0x00010863bd0c();
    func_0x000108687a98();
  }
  return;
}



/* Entry: 108686590; end: 1086865b7;  */

void FUN_108686590(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086865b8();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1086865b8; end: 1086865cb;  */

void FUN_1086865b8(void)

{
  FUN_1086865cc();
  return;
}



/* Entry: 1086865cc; end: 10868661b;  */

void FUN_1086865cc(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    func_0x0001006a01b0();
    FUN_10868661c();
    func_0x000108687a84();
  }
  func_0x0001006a0758();
  FUN_10863be08();
  return;
}



/* Entry: 10868661c; end: 108686643;  */

undefined8 * FUN_10868661c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_108686644(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 108686644; end: 10868666f;  */

void FUN_108686644(void)

{
  func_0x000107c32170();
  FUN_108686670();
  return;
}



/* Entry: 108686670; end: 108686683;  */

void FUN_108686670(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x000107c27994();
    func_0x0001006a07dc();
    return;
  }
  return;
}



/* Entry: 108686684; end: 10868669b;  */

void FUN_108686684(void)

{
  func_0x000107c27994();
  func_0x0001006a07dc();
  return;
}



/* Entry: 10868669c; end: 1086866eb;  */

void FUN_10868669c(void)

{
  uint extraout_w8;
  
  func_0x000107c321a0();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010863a16c();
  }
  return;
}



/* Entry: 1086866ec; end: 108686733;  */

void FUN_1086866ec(void)

{
  long in_x3;
  
  func_0x000107c321a8();
  if (in_x3 != 0) {
    func_0x0001006a005c();
    FUN_108686734();
    func_0x0001006a00c4();
    FUN_108686768();
  }
  func_0x000107c3215c();
  FUN_108686838();
  return;
}



/* Entry: 108686734; end: 108686767;  */

void FUN_108686734(undefined8 param_1)

{
  undefined1 in_CY;
  undefined8 *unaff_x19;
  
  func_0x000108687c00();
  if ((bool)in_CY) {
    func_0x00010863bf28();
    func_0x0001006a00d8();
    func_0x0001006a010c();
    FUN_108686790();
    unaff_x19[1] = param_1;
  }
  else {
    func_0x0001006998e4();
    func_0x00010863bfa4();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    func_0x0001006a00b8(0x48);
  }
  return;
}



/* Entry: 108686768; end: 10868678f;  */

void FUN_108686768(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_108686790();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108686790; end: 1086867a3;  */

void FUN_108686790(void)

{
  FUN_1086867a4();
  return;
}



/* Entry: 1086867a4; end: 1086867f3;  */

void FUN_1086867a4(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    func_0x0001006a01b0();
    FUN_1086867f4();
    func_0x000108687d28();
  }
  func_0x0001006a0758();
  FUN_10863c0c0();
  return;
}



/* Entry: 1086867f4; end: 108686837;  */

void FUN_1086867f4(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c32168();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_108686144(param_1 + 0x30,unaff_x20 + 0x30);
  return;
}



/* Entry: 108686838; end: 108686927;  */

void FUN_108686838(void)

{
  uint extraout_w8;
  
  func_0x000107c321a0();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010863a0bc();
  }
  return;
}



/* Entry: 108686928; end: 10868694f;  */

void FUN_108686928(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_108686950();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108686950; end: 108686963;  */

void FUN_108686950(void)

{
  FUN_108686964();
  return;
}



/* Entry: 108686964; end: 1086869b3;  */

void FUN_108686964(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    func_0x0001006a01b0();
    FUN_1086869b4();
    func_0x000108687aac();
  }
  func_0x0001006a0758();
  func_0x000104bf1ee0();
  return;
}



/* Entry: 1086869b4; end: 108686a07;  */

undefined4 * FUN_1086869b4(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c27994(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 108686a08; end: 108686a2f;  */

void FUN_108686a08(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  func_0x000108686a84();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108686a30; end: 108686a3b;  */

void FUN_108686a30(void)

{
  func_0x000108687ac0();
  FUN_108686a5c();
  return;
}



/* Entry: 108686a3c; end: 108686a5b;  */

void FUN_108686a3c(void)

{
  FUN_108686a5c();
  return;
}



/* Entry: 108686a5c; end: 108686a97;  */

void FUN_108686a5c(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  
  func_0x000108687b20();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  FUN_108686a98();
  return;
}



/* Entry: 108686a98; end: 108686ae7;  */

void FUN_108686a98(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    func_0x0001006a01b0();
    FUN_108686ae8();
    func_0x000108687a84();
  }
  func_0x0001006a0758();
  FUN_108686b0c();
  return;
}



/* Entry: 108686ae8; end: 108686b0b;  */

void FUN_108686ae8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c279ac();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 108686b0c; end: 108686b3b;  */

long FUN_108686b0c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108686b3c(param_1);
  }
  return param_1;
}



/* Entry: 108686b3c; end: 108686b4b;  */

void FUN_108686b3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000108687c24();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x28;
    func_0x000107c27a04();
  }
  return;
}



/* Entry: 108686b4c; end: 108686b7b;  */

void FUN_108686b4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x28;
    func_0x000107c27a04();
  }
  return;
}



/* Entry: 108686b7c; end: 108686b83;  */

void FUN_108686b7c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010086d048(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    func_0x000107c27a04();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108686b84; end: 108686be3;  */

void FUN_108686b84(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010086d048();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    func_0x000107c27a04();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108686be4; end: 108686c0b;  */

void FUN_108686be4(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  func_0x000108686c58();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108686c0c; end: 108686c17;  */

void FUN_108686c0c(void)

{
  func_0x000108687ac0();
  FUN_108686c38();
  return;
}



/* Entry: 108686c18; end: 108686c37;  */

void FUN_108686c18(void)

{
  FUN_108686c38();
  return;
}



/* Entry: 108686c38; end: 108686c6b;  */

void FUN_108686c38(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  
  func_0x0001006998a4();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  FUN_108686c6c();
  return;
}



/* Entry: 108686c6c; end: 108686cbb;  */

void FUN_108686c6c(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    func_0x0001006a01b0();
    func_0x000107c279ac();
    func_0x0001006a07a0();
  }
  func_0x0001006a0758();
  FUN_108686cbc();
  return;
}



/* Entry: 108686cbc; end: 108686ceb;  */

long FUN_108686cbc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108686cec(param_1);
  }
  return param_1;
}



/* Entry: 108686cec; end: 108686cfb;  */

void FUN_108686cec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000108687c24();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x000107c27a04();
  }
  return;
}



/* Entry: 108686cfc; end: 108686d2b;  */

void FUN_108686cfc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x000107c27a04();
  }
  return;
}



/* Entry: 108686d2c; end: 108686d33;  */

void FUN_108686d2c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010086d048(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x000107c27a04();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108686d34; end: 108686d97;  */

void FUN_108686d34(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010086d048();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x000107c27a04();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108686d98; end: 108686da3;  */

void FUN_108686d98(void)

{
  func_0x000108687ac0();
  FUN_108686dc4();
  return;
}



/* Entry: 108686da4; end: 108686dc3;  */

void FUN_108686da4(void)

{
  FUN_108686dc4();
  return;
}



/* Entry: 108686dc4; end: 108686df3;  */

void FUN_108686dc4(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x147ae147ae147af) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 200);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107c32144();
  func_0x000107c32204();
  FUN_108686e18();
  return;
}



/* Entry: 108686df4; end: 108686e17;  */

void FUN_108686df4(void)

{
  func_0x000107c32144();
  func_0x000107c32204();
  FUN_108686e18();
  return;
}



/* Entry: 108686e18; end: 108686e5f;  */

void FUN_108686e18(void)

{
  long in_x3;
  
  func_0x000107c321a8();
  if (in_x3 != 0) {
    func_0x0001006a005c();
    FUN_108686e60();
    func_0x0001006a00c4();
    FUN_108686e8c();
  }
  func_0x000107c3215c();
  func_0x000108686f34();
  return;
}



/* Entry: 108686e60; end: 108686e8b;  */

void FUN_108686e60(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    func_0x0001006998e4();
    func_0x00010862bdd8();
    func_0x000108687b34();
  }
  else {
    FUN_10862bcfc();
    func_0x0001006a00d8();
    func_0x0001006a010c();
    FUN_108686eb4();
    *(undefined8 *)(unaff_x19 + 8) = param_1;
  }
  return;
}



/* Entry: 108686e8c; end: 108686eb3;  */

void FUN_108686e8c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_108686eb4();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108686eb4; end: 108686ec7;  */

void FUN_108686eb4(void)

{
  FUN_108686ec8();
  return;
}



/* Entry: 108686ec8; end: 108686f17;  */

void FUN_108686ec8(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    func_0x0001006a01b0();
    FUN_108686f18();
    func_0x000108687aac();
  }
  func_0x0001006a0758();
  FUN_10862bf1c();
  return;
}



/* Entry: 108686f18; end: 108686f5b;  */

void FUN_108686f18(void)

{
  func_0x0001006a0254();
  func_0x000108687c18();
  return;
}



/* Entry: 108686f5c; end: 108686f8b;  */

long FUN_108686f5c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108686f8c(param_1);
  }
  return param_1;
}



/* Entry: 108686f8c; end: 108686f9b;  */

void FUN_108686f8c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000108687c24();
  while (param_3 != param_5) {
    param_3 = param_3 + -200;
    func_0x000108686fcc();
  }
  return;
}



/* Entry: 108686f9c; end: 108687007;  */

void FUN_108686f9c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -200;
    func_0x000108686fcc();
  }
  return;
}



/* Entry: 108687008; end: 10868700f;  */

void FUN_108687008(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010086d048(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -200;
    func_0x000108686fcc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108687010; end: 108687067;  */

void FUN_108687010(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010086d048();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -200;
    func_0x000108686fcc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108687068; end: 1086870af;  */

void FUN_108687068(void)

{
  long in_x3;
  
  func_0x000107c321a8();
  if (in_x3 != 0) {
    func_0x0001006a005c();
    FUN_108681254();
    func_0x0001006a00c4();
    FUN_1086870b0();
  }
  func_0x000107c3215c();
  func_0x0001086812a0();
  return;
}



/* Entry: 1086870b0; end: 1086870d7;  */

void FUN_1086870b0(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  func_0x0001006a010c();
  FUN_1086870d8();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1086870d8; end: 1086870eb;  */

void FUN_1086870d8(void)

{
  FUN_1086870ec();
  return;
}



/* Entry: 1086870ec; end: 10868713b;  */

void FUN_1086870ec(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006a0118();
  while (unaff_x21 != unaff_x19) {
    func_0x0001006a01b0();
    func_0x000107c27994();
    func_0x0001006a07a0();
  }
  func_0x0001006a0758();
  func_0x00010528d304();
  return;
}



/* Entry: 10868713c; end: 108687163;  */

undefined8 FUN_10868713c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000104be1594(param_1 + 0x18);
  func_0x000100292090(param_1);
  func_0x0001006994ec();
  return unaff_x19;
}


