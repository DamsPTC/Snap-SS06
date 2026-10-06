/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016a3494; end: 1016a349f;  */

undefined1  [16] FUN_1016a3494(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1016a34a0; end: 1016a34ef;  */

void FUN_1016a34a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001016a42b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1016a34f0; end: 1016a3617;  */

/* WARNING: Removing unreachable block (ram,0x0001016a35b4) */

void FUN_1016a34f0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112dbf878;
  func_0x0001000285a8(0x112dbf878,&UNK_10d97b220);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  func_0x0001016a42b8();
  puVar5 = &UNK_1103f4bc8;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1103f4bc8,&UNK_1103f4bc8,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604d4();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 1016a3618; end: 1016a361f;  */

undefined8 FUN_1016a3618(void)

{
  return 1;
}



/* Entry: 1016a3620; end: 1016a369b;  */

void FUN_1016a3620(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016a369c; end: 1016a36af;  */

undefined1  [16] FUN_1016a369c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe500000000000000;
  auVar1._0_8_ = 0x736d657469;
  return auVar1;
}



/* Entry: 1016a36b0; end: 1016a372f;  */

void FUN_1016a36b0(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x69;
  if (param_2 == 0x736d657469 && param_3 == -0x1b00000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x736d657469,0xe500000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 1016a3730; end: 1016a373b;  */

undefined1  [16] FUN_1016a3730(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1016a373c; end: 1016a378b;  */

void FUN_1016a373c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001016a3d78();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1016a378c; end: 1016a37b3;  */

void FUN_1016a378c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_1016a3a3c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1016a37b4; end: 1016a37c7;  */

bool FUN_1016a37b4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1016a37c8; end: 1016a3873;  */

void FUN_1016a37c8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016a3874; end: 1016a38bf;  */

undefined1  [16] FUN_1016a3874(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0xd000000000000014;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x746361736e617274;
  }
  uVar2 = 0x800000010efb60b0;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xed000064496e6f69;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1016a38c0; end: 1016a39a7;  */

void FUN_1016a38c0(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0;
  if ((param_2 == 0x746361736e617274 && param_3 == -0x12ffff9bb6919097) ||
     (func_0x000107c605b8(0x746361736e617274,0xed000064496e6f69,param_2,param_3,0), (uVar1 & 1) != 0
     )) {
    func_0x000107c6142c(param_3);
    uVar2 = 0;
  }
  else if ((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef1049f50)) {
    func_0x000107c6142c(0x800000010efb60b0);
    uVar2 = 1;
  }
  else {
    uVar1 = 0;
    func_0x000107c605b8(0xd000000000000014,0x800000010efb60b0,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    uVar2 = 1;
    if ((uVar1 & 1) == 0) {
      uVar2 = 2;
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1016a39a8; end: 1016a39bf;  */

undefined1  [16] FUN_1016a39a8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1016a39c0; end: 1016a3a0f;  */

void FUN_1016a39c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1016a3cf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1016a3a10; end: 1016a3a3b;  */

void FUN_1016a3a10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_1016a3b74();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
  }
  return;
}



/* Entry: 1016a3a3c; end: 1016a3b73;  */

long FUN_1016a3a3c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar2 = 0x112dbf820;
  func_0x0001000285a8(0x112dbf820,&UNK_10d97af98);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar5);
  lVar4 = lVar3;
  func_0x0001016a3d78();
  func_0x000107c606e0(auStack_60 + -extraout_x8,&UNK_1103f4a28,&UNK_1103f4a28,lVar4,uVar5,uVar1);
  if (unaff_x21 == 0) {
    uVar5 = 0x112dbf830;
    func_0x0001000285a8(0x112dbf830,&UNK_10d97afa0);
    FUN_1016a3db8();
    func_0x000107c604e8(&lStack_58,uVar5);
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
    lStack_58 = lVar3;
  }
  return lStack_58;
}



/* Entry: 1016a3b74; end: 1016a3cf7;  */

/* WARNING: Removing unreachable block (ram,0x0001016a3cd4) */
/* WARNING: Removing unreachable block (ram,0x0001016a3c3c) */

undefined1 * FUN_1016a3b74(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_70 [15];
  undefined1 uStack_61;
  undefined1 auStack_60 [15];
  undefined1 uStack_51;
  
  lVar2 = 0x112dbf808;
  func_0x0001000285a8(0x112dbf808,&UNK_10d97af90);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_1016a3cf8();
  func_0x000107c606e0(auStack_70 + -extraout_x8,&UNK_1103f4ab8,&UNK_1103f4ab8,lVar3,uVar1,puVar4);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar4 = &uStack_51;
    func_0x000107c604f4(puVar4,lVar2);
    uStack_61 = 1;
    puVar5 = puVar4;
    func_0x0001016a3d38();
    func_0x000107c604e8(auStack_60,&UNK_1103f4990,&uStack_61,lVar2,&UNK_1103f4990,puVar5);
    (**(code **)(lVar6 + 8))(auStack_70 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return puVar4;
}



/* Entry: 1016a3cf8; end: 1016a3db7;  */

void FUN_1016a3cf8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97b1cc;
  func_0x000107c61520(&UNK_10d97b1cc,&UNK_1103f4ab8);
  puRam0000000112dbf810 = puVar1;
  return;
}



/* Entry: 1016a3db8; end: 1016a3e27;  */

void FUN_1016a3db8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112dbf838 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbf830;
  func_0x00010002969c(0x112dbf830,&UNK_10d97afa0);
  uVar2 = uVar1;
  FUN_1016a3e28();
  puVar3 = PTR___sSayxGSesSeRzlMc_11034dd10;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSesSeRzlMc_11034dd10,uVar1,&uStack_28);
  puRam0000000112dbf838 = puVar3;
  return;
}



/* Entry: 1016a3e28; end: 1016a3e67;  */

void FUN_1016a3e28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97b154;
  func_0x000107c61520(&UNK_10d97b154,&UNK_1103f4b30);
  puRam0000000112dbf840 = puVar1;
  return;
}



/* Entry: 1016a3e68; end: 1016a3ff3;  */

undefined8 FUN_1016a3e68(void)

{
  return 0;
}



/* Entry: 1016a3ff4; end: 1016a4063;  */

undefined8 * FUN_1016a3ff4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1016a4064; end: 1016a4123;  */

int FUN_1016a4064(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1016a4124; end: 1016a4163;  */

void FUN_1016a4124(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97b074;
  func_0x000107c61520(&UNK_10d97b074,&UNK_1103f4ab8);
  puRam0000000112dbf848 = puVar1;
  return;
}



/* Entry: 1016a4164; end: 1016a4167;  */

void FUN_1016a4164(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf850 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97b12c;
  func_0x000107c61520(&UNK_10d97b12c,&UNK_1103f4a28);
  puRam0000000112dbf850 = puVar1;
  return;
}



/* Entry: 1016a4168; end: 1016a41a7;  */

void FUN_1016a4168(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf850 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97b12c;
  func_0x000107c61520(&UNK_10d97b12c,&UNK_1103f4a28);
  puRam0000000112dbf850 = puVar1;
  return;
}



/* Entry: 1016a41a8; end: 1016a41ab;  */

void FUN_1016a41a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97b0c4;
  func_0x000107c61520(&UNK_10d97b0c4,&UNK_1103f4a28);
  puRam0000000112dbf858 = puVar1;
  return;
}



/* Entry: 1016a41ac; end: 1016a41eb;  */

void FUN_1016a41ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97b0c4;
  func_0x000107c61520(&UNK_10d97b0c4,&UNK_1103f4a28);
  puRam0000000112dbf858 = puVar1;
  return;
}



/* Entry: 1016a41ec; end: 1016a41ef;  */

void FUN_1016a41ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97b09c;
  func_0x000107c61520(&UNK_10d97b09c,&UNK_1103f4a28);
  puRam0000000112dbf860 = puVar1;
  return;
}



/* Entry: 1016a41f0; end: 1016a422f;  */

void FUN_1016a41f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97b09c;
  func_0x000107c61520(&UNK_10d97b09c,&UNK_1103f4a28);
  puRam0000000112dbf860 = puVar1;
  return;
}



/* Entry: 1016a4230; end: 1016a4233;  */

void FUN_1016a4230(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97b00c;
  func_0x000107c61520(&UNK_10d97b00c,&UNK_1103f4ab8);
  puRam0000000112dbf868 = puVar1;
  return;
}



/* Entry: 1016a4234; end: 1016a4273;  */

void FUN_1016a4234(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97b00c;
  func_0x000107c61520(&UNK_10d97b00c,&UNK_1103f4ab8);
  puRam0000000112dbf868 = puVar1;
  return;
}



/* Entry: 1016a4274; end: 1016a4277;  */

void FUN_1016a4274(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf870 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97afe4;
  func_0x000107c61520(&UNK_10d97afe4,&UNK_1103f4ab8);
  puRam0000000112dbf870 = puVar1;
  return;
}



/* Entry: 1016a4278; end: 1016a42f7;  */

void FUN_1016a4278(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf870 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97afe4;
  func_0x000107c61520(&UNK_10d97afe4,&UNK_1103f4ab8);
  puRam0000000112dbf870 = puVar1;
  return;
}



/* Entry: 1016a42f8; end: 1016a43e7;  */

uint FUN_1016a42f8(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1016a43e8; end: 1016a4427;  */

void FUN_1016a43e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97b2b8;
  func_0x000107c61520(&UNK_10d97b2b8,&UNK_1103f4bc8);
  puRam0000000112dbf888 = puVar1;
  return;
}



/* Entry: 1016a4428; end: 1016a442b;  */

void FUN_1016a4428(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97b250;
  func_0x000107c61520(&UNK_10d97b250,&UNK_1103f4bc8);
  puRam0000000112dbf890 = puVar1;
  return;
}



/* Entry: 1016a442c; end: 1016a446b;  */

void FUN_1016a442c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97b250;
  func_0x000107c61520(&UNK_10d97b250,&UNK_1103f4bc8);
  puRam0000000112dbf890 = puVar1;
  return;
}



/* Entry: 1016a446c; end: 1016a446f;  */

void FUN_1016a446c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf898 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97b228;
  func_0x000107c61520(&UNK_10d97b228,&UNK_1103f4bc8);
  puRam0000000112dbf898 = puVar1;
  return;
}



/* Entry: 1016a4470; end: 1016a44af;  */

void FUN_1016a4470(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf898 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97b228;
  func_0x000107c61520(&UNK_10d97b228,&UNK_1103f4bc8);
  puRam0000000112dbf898 = puVar1;
  return;
}



/* Entry: 1016a44b0; end: 1016a44f7;  */

void FUN_1016a44b0(void)

{
  func_0x000107c60690(0);
  return;
}



/* Entry: 1016a44f8; end: 1016a4543;  */

void FUN_1016a44f8(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1016a4544,param_1);
  return;
}



/* Entry: 1016a4544; end: 1016a45ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a4544(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_1016a46bc();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112dbf8a0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 1016a45ac; end: 1016a45f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a45ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dbf8a0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016a45f8; end: 1016a4667; -[_TtC28BlizzardLoggerPluginProvider20BlizzardLoggerPlugin pushToValdiMarshaller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016a45f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x000107c30de0(param_3,uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uStack_38);
  return param_3;
}



/* Entry: 1016a4668; end: 1016a469b;  */

void FUN_1016a4668(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016a469c; end: 1016a46ab;  */

undefined1  [16] FUN_1016a469c(void)

{
  return ZEXT816(0x1103f4d08);
}



/* Entry: 1016a46ac; end: 1016a46bb; -[_TtC28BlizzardLoggerPluginProvider20BlizzardLoggerPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a46ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbf8a0));
  return;
}



/* Entry: 1016a46bc; end: 1016a46db;  */

void FUN_1016a46bc(void)

{
  func_0x000107c61168(&PTR_PTR_1127e4ca0);
  return;
}



/* Entry: 1016a46dc; end: 1016a4727;  */

void FUN_1016a46dc(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1016a4794,param_1);
  return;
}



/* Entry: 1016a4728; end: 1016a4793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a4728(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1016a48d8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112dbf8d0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1016a4794; end: 1016a479b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a4794(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1016a48d8();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112dbf8d0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1016a479c; end: 1016a47e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a479c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dbf8d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016a47e8; end: 1016a4857; -[_TtC26BoltUploaderPluginProvider18BoltUploaderPlugin pushToValdiMarshaller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016a47e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x000107c30dc0(param_3,uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uStack_38);
  return param_3;
}



/* Entry: 1016a4858; end: 1016a48b7; -[_TtC26BoltUploaderPluginProvider18BoltUploaderPlugin init] */

void FUN_1016a4858(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BoltUploaderPluginProvider.BoltUploaderPlugin",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016a4884);
  (*pcVar1)();
}



/* Entry: 1016a48b8; end: 1016a48c7;  */

undefined1  [16] FUN_1016a48b8(void)

{
  return ZEXT816(0x1103f4da8);
}



/* Entry: 1016a48c8; end: 1016a48d7; -[_TtC26BoltUploaderPluginProvider18BoltUploaderPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a48c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbf8d0));
  return;
}



/* Entry: 1016a48d8; end: 1016a48f7;  */

void FUN_1016a48d8(void)

{
  func_0x000107c61168(&PTR_PTR_1127e4d60);
  return;
}



/* Entry: 1016a48f8; end: 1016a4973;  */

void FUN_1016a48f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c3eba8(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  puVar2 = PTR_PTR_1126b0fa0;
  func_0x000107c610f8();
  func_0x000107c463e4();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1016a4974; end: 1016a498b;  */

void FUN_1016a4974(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c3eba8(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  puVar2 = PTR_PTR_1126b0fa0;
  func_0x000107c610f8();
  func_0x000107c463e4();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1016a498c; end: 1016a4a2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a498c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&lStack_40);
  uVar1 = *(undefined8 *)(lStack_40 + _DAT_11307e0b8);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_40);
  puVar2 = PTR_PTR_1126b3900;
  func_0x000107c610f8();
  func_0x000107c48640();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_38);
  *param_1 = puVar2;
  return;
}



/* Entry: 1016a4a2c; end: 1016a4a6b;  */

undefined1  [16] FUN_1016a4a2c(void)

{
  return ZEXT816(0x1103f4ec0);
}



/* Entry: 1016a4a6c; end: 1016a4b73;  */

void FUN_1016a4a6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x000107c3e288();
    func_0x000107c61180();
    puVar2 = &UNK_1103f5088;
    func_0x000107c613fc(&UNK_1103f5088,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    pcStack_68 = FUN_1016a4d10;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_10120ce44;
    puStack_70 = &UNK_1103f50a0;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    FUN_1016a4d38(param_1,param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c4427c(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_3);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1016a4b74; end: 1016a4b7b;  */

void FUN_1016a4b74(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c3e288();
    func_0x000107c61180();
    puVar3 = &UNK_1103f5088;
    func_0x000107c613fc(&UNK_1103f5088,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    pcStack_68 = FUN_1016a4d10;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_10120ce44;
    puStack_70 = &UNK_1103f50a0;
    ppuVar4 = &puStack_88;
    puStack_60 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_60;
    FUN_1016a4d38(param_1,param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c4427c(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1016a4b7c; end: 1016a4c23;  */

void FUN_1016a4b7c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5dbd4();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c509b4(lVar2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1016a4c24; end: 1016a4c2b;  */

void FUN_1016a4c24(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5dbd4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c509b4(lVar1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1016a4c2c; end: 1016a4caf;  */

void FUN_1016a4c2c(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  if (param_2 == 0) {
    puVar3 = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    puVar3 = &UNK_1103f5060;
    func_0x000107c613fc(&UNK_1103f5060,0x18,7);
    *(long *)(puVar3 + 0x10) = param_2;
    uVar4 = 0x1016a4d00;
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(uVar4,puVar3);
  FUN_1016a4cf0(uVar4,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1016a4cb0; end: 1016a4cb7;  */

void FUN_1016a4cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1016a4cb8; end: 1016a4cef;  */

void FUN_1016a4cb8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1016a4cf0; end: 1016a4d0f;  */

void FUN_1016a4cf0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1016a4d10; end: 1016a4d37;  */

void FUN_1016a4d10(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 1016a4d38; end: 1016a4d53;  */

void FUN_1016a4d38(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1016a4d54; end: 1016a4f3b;  */

long FUN_1016a4d54(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001009cde20();
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  return unaff_x20;
}



/* Entry: 1016a4f3c; end: 1016a4fc7;  */

void FUN_1016a4f3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf920 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126dee60;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dbf920 = puVar1;
  return;
}



/* Entry: 1016a4fc8; end: 1016a4ff3;  */

undefined ** FUN_1016a4fc8(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1016a4ff4; end: 1016a503f;  */

void FUN_1016a4ff4(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1016a5040,param_1);
  return;
}



/* Entry: 1016a5040; end: 1016a50a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a5040(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_1016a52c0();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112dbfa10) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 1016a50a8; end: 1016a50f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a50a8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dbfa10) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016a50f4; end: 1016a522f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1016a50f4(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_48;
  
  puVar1 = PTR_PTR_1126b0c98;
  func_0x000107c610f8(PTR_PTR_1126b0c98);
  func_0x000107c47f1c();
  func_0x000100083b20(&uStack_48);
  uVar2 = uStack_48;
  func_0x000107c439dc();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  uVar3 = uVar2;
  (**(code **)(uVar2 + 0x10))(uVar2,puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(uVar2);
  uVar2 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (uVar2 == 0) {
    func_0x000107c30efc(param_1);
  }
  else {
    uVar3 = uVar2;
    func_0x000107c61150(uVar2,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_pushToValdiMarshaller__112624b18);
    if ((uVar3 & 1) == 0) {
      func_0x000107c30efc(param_1);
      func_0x000107c61170(puVar1);
      func_0x000107c615e8(uVar2);
      return param_1;
    }
    param_1 = uVar2;
    func_0x000107c615f0(uVar2);
    func_0x000107c4f6d8();
    func_0x000107c615ec(uVar2,2);
  }
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 1016a5230; end: 1016a526b; -[_TtC25FriendStorePluginProvider17FriendStorePlugin pushToValdiMarshaller:] */

undefined8 FUN_1016a5230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1016a50f4(param_3);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 1016a526c; end: 1016a529f;  */

void FUN_1016a526c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016a52a0; end: 1016a52af;  */

undefined1  [16] FUN_1016a52a0(void)

{
  return ZEXT816(0x1103f5200);
}



/* Entry: 1016a52b0; end: 1016a52bf; -[_TtC25FriendStorePluginProvider17FriendStorePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a52b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbfa10));
  return;
}



/* Entry: 1016a52c0; end: 1016a52df;  */

void FUN_1016a52c0(void)

{
  func_0x000107c61168(&PTR_PTR_1127e4e20);
  return;
}



/* Entry: 1016a52e0; end: 1016a52f7;  */

undefined1  [16] FUN_1016a52e0(void)

{
  return ZEXT816(0x1103f52c8);
}



/* Entry: 1016a52f8; end: 1016a5357;  */

void FUN_1016a52f8(void)

{
  long unaff_x20;
  
  FUN_1016a5358(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),FUN_1016a6ff0,
                &DAT_112dbfb48,&DAT_112dbfb50);
  return;
}



/* Entry: 1016a5358; end: 1016a53e7;  */

void FUN_1016a5358(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  long *param_5,long *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = 0;
  (*param_4)();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + *param_5) = param_2;
  *(undefined8 *)(lVar3 + *param_6) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1016a53e8; end: 1016a5443;  */

void FUN_1016a53e8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016a5444; end: 1016a54eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a5444(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = 0;
  FUN_1016a6ec4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112dbfb08) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112dbfb10) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112dbfb18) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1016a54ec; end: 1016a54f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a54ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = 0;
  FUN_1016a6ec4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112dbfb08) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112dbfb10) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112dbfb18) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1016a54f8; end: 1016a5557;  */

void FUN_1016a54f8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126b0e90;
  func_0x000107c610f8();
  func_0x000107c46868();
  func_0x000107c61170(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1016a5558; end: 1016a556f;  */

void FUN_1016a5558(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126b0e90;
  func_0x000107c610f8();
  func_0x000107c46868();
  func_0x000107c61170(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1016a5570; end: 1016a55bb;  */

void FUN_1016a5570(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1016a5628,param_1);
  return;
}



/* Entry: 1016a55bc; end: 1016a5627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a55bc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1016a576c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112dbfa80) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1016a5628; end: 1016a562f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a5628(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1016a576c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112dbfa80) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1016a5630; end: 1016a567b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016a5630(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dbfa80) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016a567c; end: 1016a56eb; -[_TtC23ComposerSUPServicesImpl11SUPDiPlugin pushToValdiMarshaller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016a567c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x000107c2bcf0(param_3,uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uStack_38);
  return param_3;
}



/* Entry: 1016a56ec; end: 1016a574b; -[_TtC23ComposerSUPServicesImpl11SUPDiPlugin init] */

void FUN_1016a56ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerSUPServicesImpl.SUPDiPlugin",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016a5718);
  (*pcVar1)();
}


