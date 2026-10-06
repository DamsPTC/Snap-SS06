/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f7993c; end: 102f7995f;  */

void FUN_102f7993c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f79960();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102f79960; end: 102f7999f;  */

void FUN_102f79960(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2b408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6acd8;
  func_0x000107c61520(&UNK_10db6acd8,&UNK_1105f04b0);
  puRam0000000112f2b408 = puVar1;
  return;
}



/* Entry: 102f799a0; end: 102f799b3;  */

void FUN_102f799a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f796b0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102f64724)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f799b4; end: 102f799e3;  */

void FUN_102f799b4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f799e4; end: 102f799e7;  */

void FUN_102f799e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2b410 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6ad40;
  func_0x000107c61520(&UNK_10db6ad40,&UNK_1105f04b0);
  puRam0000000112f2b410 = puVar1;
  return;
}



/* Entry: 102f799e8; end: 102f79a27;  */

void FUN_102f799e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2b410 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6ad40;
  func_0x000107c61520(&UNK_10db6ad40,&UNK_1105f04b0);
  puRam0000000112f2b410 = puVar1;
  return;
}



/* Entry: 102f79a28; end: 102f79a4f;  */

void FUN_102f79a28(void)

{
  return;
}



/* Entry: 102f79a50; end: 102f79a7b;  */

long FUN_102f79a50(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102f79a7c; end: 102f79a87;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102f79a7c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x18) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x18) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 102f79a88; end: 102f79b1f;  */

undefined8 * FUN_102f79a88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 102f79b20; end: 102f79b57;  */

undefined8 * FUN_102f79b20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 102f79b58; end: 102f79c0b;  */

int FUN_102f79b58(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102f79c0c; end: 102f79c4b;  */

void FUN_102f79c0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2b420 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db6acac;
  func_0x000107c61520(&DAT_10db6acac,&UNK_1105f04b0);
  puRam0000000112f2b420 = puVar1;
  return;
}



/* Entry: 102f79c4c; end: 102f79ca7;  */

void FUN_102f79c4c(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 102f79ca8; end: 102f79ce7;  */

void FUN_102f79ca8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f2b470;
  func_0x0001000285a8(0x112f2b470,&UNK_10db6af00);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102f79ce8; end: 102f79d23;  */

void FUN_102f79ce8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 102f79d24; end: 102f79e03;  */

void FUN_102f79d24(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  uVar1 = (ulong)(uVar3 != 0);
  if ((char)uVar2 != '\x01') {
    uVar1 = uVar3;
  }
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f79e04; end: 102f79e3f;  */

bool FUN_102f79e04(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar1 = *param_1;
  }
  uVar2 = (ulong)(*param_2 != 0);
  if ((char)param_2[1] != '\x01') {
    uVar2 = *param_2;
  }
  return uVar1 == uVar2;
}



/* Entry: 102f79e40; end: 102f7a067;  */

void FUN_102f79e40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f2b4d0;
  func_0x0001000285a8(0x112f2b4d0,&UNK_10db6af08);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102f7a068; end: 102f7a133;  */

bool FUN_102f7a068(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_a0 [48];
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar6 = *(long *)(unaff_x20 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_70 = uVar1;
  lStack_68 = lVar6;
  uStack_60 = uVar2;
  uStack_58 = uVar3;
  uStack_50 = uVar4;
  uStack_48 = uVar5;
  if (lVar6 == 0) {
    FUN_102fa5174(&uStack_70,auStack_a0,0x112f2b670,&UNK_10db6af38);
  }
  else {
    FUN_102fa5174(&uStack_70,auStack_a0,0x112f2b670,&UNK_10db6af38);
    func_0x000102f91a84(uVar1,lVar6,uVar2,uVar3,uVar4,uVar5);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  func_0x000102f91a84(uVar1,0,uVar2,uVar3,uVar4,uVar5);
  return lVar6 != 0;
}



/* Entry: 102f7a134; end: 102f7a17b;  */

void FUN_102f7a134(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xc000000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xf000000000000000;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  return;
}



/* Entry: 102f7a17c; end: 102f7a207;  */

uint FUN_102f7a17c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_102f90ad8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102f7a208; end: 102f7a2d3;  */

bool FUN_102f7a208(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_a0 [48];
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar6 = *(long *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_70 = uVar1;
  lStack_68 = lVar6;
  uStack_60 = uVar2;
  uStack_58 = uVar3;
  uStack_50 = uVar4;
  uStack_48 = uVar5;
  if (lVar6 == 0) {
    FUN_102fa5174(&uStack_70,auStack_a0,0x112f2b670,&UNK_10db6af38);
  }
  else {
    FUN_102fa5174(&uStack_70,auStack_a0,0x112f2b670,&UNK_10db6af38);
    func_0x000102f91a84(uVar1,lVar6,uVar2,uVar3,uVar4,uVar5);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  func_0x000102f91a84(uVar1,0,uVar2,uVar3,uVar4,uVar5);
  return lVar6 != 0;
}



/* Entry: 102f7a2d4; end: 102f7a3d3;  */

undefined1  [16] FUN_102f7a2d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x10);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x18));
  return auVar1;
}



/* Entry: 102f7a3d4; end: 102f7a44b;  */

undefined8 FUN_102f7a3d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x38,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x38);
  if (0xe < *(ulong *)(param_3 + 0x50) >> 0x3c) {
    uVar1 = 0;
  }
  func_0x000100d2ebbc();
  return uVar1;
}



/* Entry: 102f7a44c; end: 102f7a51f;  */

undefined8 FUN_102f7a44c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x58,auStack_38,0,0);
  return *(undefined8 *)(param_3 + 0x58);
}



/* Entry: 102f7a520; end: 102f7a5e3;  */

void FUN_102f7a520(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [64];
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  func_0x000107c61428(param_4 + 0x80,auStack_98,0,0);
  uStack_78 = *(undefined8 *)(param_4 + 0x88);
  uStack_80 = *(undefined8 *)(param_4 + 0x80);
  uStack_68 = *(undefined8 *)(param_4 + 0x98);
  uStack_70 = *(undefined8 *)(param_4 + 0x90);
  uStack_58 = *(undefined8 *)(param_4 + 0xa8);
  uStack_60 = *(undefined8 *)(param_4 + 0xa0);
  uStack_48 = *(ulong *)(param_4 + 0xb8);
  uStack_50 = *(undefined8 *)(param_4 + 0xb0);
  uVar1 = uStack_48;
  uVar2 = uStack_60;
  uVar3 = uStack_50;
  uVar4 = uStack_58;
  uStack_100 = uStack_70;
  uStack_f8 = uStack_68;
  uStack_f0 = uStack_80;
  uStack_e8 = uStack_78;
  if (0xe < uStack_48 >> 0x3c) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uVar1 = 0xc000000000000000;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0x3000000000000000;
  }
  FUN_102fa5174(&uStack_80,auStack_d8,0x112f2a138,&UNK_10db6af50);
  param_1[1] = uStack_e8;
  *param_1 = uStack_f0;
  param_1[3] = uStack_f8;
  param_1[2] = uStack_100;
  param_1[4] = uVar2;
  param_1[5] = uVar4;
  param_1[6] = uVar3;
  param_1[7] = uVar1;
  return;
}



/* Entry: 102f7a5e4; end: 102f7a62f;  */

undefined1  [16] FUN_102f7a5e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0xc0,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0xc0);
  func_0x000107c61434(*(undefined8 *)(param_3 + 200));
  return auVar1;
}



/* Entry: 102f7a630; end: 102f7a6d3;  */

void FUN_102f7a630(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0xd0,auStack_68,0,0);
  uVar1 = *(undefined8 *)(param_4 + 0xd0);
  uVar4 = *(undefined8 *)(param_4 + 0xd8);
  uVar2 = *(undefined8 *)(param_4 + 0xe0);
  uVar5 = *(undefined8 *)(param_4 + 0xe8);
  uVar3 = *(undefined8 *)(param_4 + 0xf8);
  uVar6 = *(ulong *)(param_4 + 0x100);
  bVar7 = 0xe < uVar6 >> 0x3c;
  if (bVar7) {
    uVar1 = 0;
    uVar4 = 0;
    uVar2 = 0;
  }
  uVar8 = *(undefined8 *)(param_4 + 0xf0);
  if (bVar7) {
    uVar5 = 0;
    uVar8 = 0x3000000000000000;
    uVar3 = 0;
    uVar6 = 0xc000000000000000;
  }
  FUN_102f9112c();
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar8;
  param_1[5] = uVar3;
  param_1[6] = uVar6;
  return;
}



/* Entry: 102f7a6d4; end: 102f7a713;  */

undefined1  [16] FUN_102f7a6d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x108,auStack_38,0,0);
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(param_3 + 0x108);
  return auVar1;
}



/* Entry: 102f7a714; end: 102f7a81f;  */

void FUN_102f7a714(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_138 [96];
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61428((undefined8 *)(param_4 + 0x118),auStack_d8,0,0);
  uStack_98 = *(undefined8 *)(param_4 + 0x140);
  uStack_a0 = *(undefined8 *)(param_4 + 0x138);
  lStack_88 = *(long *)(param_4 + 0x150);
  uStack_90 = *(undefined8 *)(param_4 + 0x148);
  uStack_78 = *(undefined8 *)(param_4 + 0x160);
  uStack_80 = *(undefined8 *)(param_4 + 0x158);
  uStack_68 = *(undefined8 *)(param_4 + 0x170);
  uStack_70 = *(undefined8 *)(param_4 + 0x168);
  uStack_b8 = *(undefined8 *)(param_4 + 0x120);
  uStack_c0 = *(undefined8 *)(param_4 + 0x118);
  uStack_a8 = *(undefined8 *)(param_4 + 0x130);
  uStack_b0 = *(undefined8 *)(param_4 + 0x128);
  lVar1 = lStack_88;
  uVar2 = uStack_a0;
  uVar3 = uStack_90;
  uVar4 = uStack_80;
  uVar5 = uStack_78;
  uVar6 = uStack_70;
  uVar7 = uStack_98;
  uVar8 = uStack_68;
  uStack_160 = uStack_b0;
  uStack_158 = uStack_a8;
  uStack_150 = uStack_c0;
  uStack_148 = uStack_b8;
  if (lStack_88 == 1) {
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0xc000000000000000;
    uStack_150 = 0;
    lVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0xf000000000000000;
    uVar8 = 0;
  }
  FUN_102fa5174(&uStack_c0,auStack_138,0x112f2b690,&UNK_10db6af60);
  param_1[1] = uStack_148;
  *param_1 = uStack_150;
  param_1[3] = uStack_158;
  param_1[2] = uStack_160;
  param_1[4] = uVar2;
  param_1[5] = uVar7;
  param_1[6] = uVar3;
  param_1[7] = lVar1;
  param_1[8] = uVar4;
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  param_1[0xb] = uVar8;
  return;
}



/* Entry: 102f7a820; end: 102f7a957;  */

bool FUN_102f7a820(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_1d0 [96];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)(param_3 + 0x118);
  func_0x000107c61428(puVar1,auStack_a8,0,0);
  uStack_68 = *(undefined8 *)(param_3 + 0x140);
  uStack_70 = *(undefined8 *)(param_3 + 0x138);
  lVar4 = *(long *)(param_3 + 0x150);
  uStack_60 = *(undefined8 *)(param_3 + 0x148);
  uStack_48 = *(undefined8 *)(param_3 + 0x160);
  uStack_50 = *(undefined8 *)(param_3 + 0x158);
  uStack_38 = *(undefined8 *)(param_3 + 0x170);
  uStack_40 = *(undefined8 *)(param_3 + 0x168);
  uStack_88 = *(undefined8 *)(param_3 + 0x120);
  uStack_90 = *puVar1;
  uStack_78 = *(undefined8 *)(param_3 + 0x130);
  uStack_80 = *(undefined8 *)(param_3 + 0x128);
  lStack_58 = lVar4;
  if (lVar4 == 1) {
    uStack_168 = *(undefined8 *)(param_3 + 0x120);
    uStack_170 = *puVar1;
    uStack_158 = *(undefined8 *)(param_3 + 0x130);
    uStack_160 = *(undefined8 *)(param_3 + 0x128);
    uStack_148 = *(undefined8 *)(param_3 + 0x140);
    uStack_150 = *(undefined8 *)(param_3 + 0x138);
    uStack_140 = *(undefined8 *)(param_3 + 0x148);
    lStack_138 = 1;
    uStack_128 = *(undefined8 *)(param_3 + 0x160);
    uStack_130 = *(undefined8 *)(param_3 + 0x158);
    uStack_118 = *(undefined8 *)(param_3 + 0x170);
    uStack_120 = *(undefined8 *)(param_3 + 0x168);
    uVar2 = 0x112f2b690;
    puVar3 = &UNK_10db6af60;
    FUN_102fa5174(&uStack_90,auStack_1d0,0x112f2b690,&UNK_10db6af60);
  }
  else {
    uStack_168 = *(undefined8 *)(param_3 + 0x120);
    uStack_170 = *puVar1;
    uStack_158 = *(undefined8 *)(param_3 + 0x130);
    uStack_160 = *(undefined8 *)(param_3 + 0x128);
    uStack_148 = *(undefined8 *)(param_3 + 0x140);
    uStack_150 = *(undefined8 *)(param_3 + 0x138);
    uStack_140 = *(undefined8 *)(param_3 + 0x148);
    uStack_128 = *(undefined8 *)(param_3 + 0x160);
    uStack_130 = *(undefined8 *)(param_3 + 0x158);
    uStack_118 = *(undefined8 *)(param_3 + 0x170);
    uStack_120 = *(undefined8 *)(param_3 + 0x168);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_e0 = 0;
    uStack_d8 = 1;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    lStack_138 = lVar4;
    FUN_102fa5174(&uStack_90,auStack_1d0,0x112f2b690,&UNK_10db6af60);
    uVar2 = 0x112f2b698;
    puVar3 = &UNK_10db6af68;
  }
  func_0x000102fa51bc(&uStack_170,uVar2,puVar3);
  return lVar4 != 1;
}



/* Entry: 102f7a958; end: 102f7aa23;  */

bool FUN_102f7a958(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_a0 [48];
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar6 = *(long *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_70 = uVar1;
  lStack_68 = lVar6;
  uStack_60 = uVar2;
  uStack_58 = uVar3;
  uStack_50 = uVar4;
  uStack_48 = uVar5;
  if (lVar6 == 0) {
    FUN_102fa5174(&uStack_70,auStack_a0,0x112f2b670,&UNK_10db6af38);
  }
  else {
    FUN_102fa5174(&uStack_70,auStack_a0,0x112f2b670,&UNK_10db6af38);
    func_0x000102f91a84(uVar1,lVar6,uVar2,uVar3,uVar4,uVar5);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  func_0x000102f91a84(uVar1,0,uVar2,uVar3,uVar4,uVar5);
  return lVar6 != 0;
}



/* Entry: 102f7aa24; end: 102f7aa27;  */

uint FUN_102f7aa24(void)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  long unaff_x20;
  undefined1 auStack_7b0 [192];
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_1f0 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_1d8 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_1e0 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_1c8 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_1d0 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_1b8 = *(undefined8 *)(unaff_x20 + 200);
  uStack_1c0 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_230 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_218 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_220 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_208 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_210 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_1f8 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_200 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_268 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_270 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_258 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_260 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_248 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_250 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_238 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_240 = *(undefined8 *)(unaff_x20 + 0x40);
  FUN_102f91ad0(&uStack_f0);
  uStack_368 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_370 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_358 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_360 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_348 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_350 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_338 = *(undefined8 *)(unaff_x20 + 200);
  uStack_340 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_3a8 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_3b0 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_398 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_3a0 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_388 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_390 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_378 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_380 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_3e8 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_3f0 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_3d8 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_3e0 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_3c8 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_3d0 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_3b8 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_3c0 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_2a8 = uStack_68;
  uStack_2b0 = uStack_70;
  uStack_298 = uStack_58;
  uStack_2a0 = uStack_60;
  uStack_288 = uStack_48;
  uStack_290 = uStack_50;
  uStack_278 = uStack_38;
  uStack_280 = uStack_40;
  uStack_2e8 = uStack_a8;
  uStack_2f0 = uStack_b0;
  uStack_2d8 = uStack_98;
  uStack_2e0 = uStack_a0;
  uStack_2c8 = uStack_88;
  uStack_2d0 = uStack_90;
  uStack_2b8 = uStack_78;
  uStack_2c0 = uStack_80;
  uStack_328 = uStack_e8;
  uStack_330 = uStack_f0;
  uStack_318 = uStack_d8;
  uStack_320 = uStack_e0;
  uStack_308 = uStack_c8;
  uStack_310 = uStack_d0;
  uStack_2f8 = uStack_b8;
  uStack_300 = uStack_c0;
  iVar1 = (int)&uStack_3f0;
  FUN_102f54fec();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_330;
    FUN_102f54fec();
    if (iVar1 == 1) {
      uStack_4e8 = uStack_368;
      uStack_4f0 = uStack_370;
      uStack_4d8 = uStack_358;
      uStack_4e0 = uStack_360;
      uStack_4c8 = uStack_348;
      uStack_4d0 = uStack_350;
      uStack_4b8 = uStack_338;
      uStack_4c0 = uStack_340;
      uStack_528 = uStack_3a8;
      uStack_530 = uStack_3b0;
      uStack_518 = uStack_398;
      uStack_520 = uStack_3a0;
      uStack_508 = uStack_388;
      uStack_510 = uStack_390;
      uStack_4f8 = uStack_378;
      uStack_500 = uStack_380;
      uStack_568 = uStack_3e8;
      uStack_570 = uStack_3f0;
      uStack_558 = uStack_3d8;
      uStack_560 = uStack_3e0;
      uStack_548 = uStack_3c8;
      uStack_550 = uStack_3d0;
      uStack_538 = uStack_3b8;
      uStack_540 = uStack_3c0;
      FUN_102fa5174(&uStack_270,&uStack_1b0,0x112f2a130,&UNK_10db663d0);
      func_0x000102fa51bc(&uStack_570,0x112f2a130,&UNK_10db663d0);
      uVar3 = 0;
      goto LAB_102f7ad54;
    }
  }
  else {
    uStack_5a8 = uStack_368;
    uStack_5b0 = uStack_370;
    uStack_598 = uStack_358;
    uStack_5a0 = uStack_360;
    uStack_588 = uStack_348;
    uStack_590 = uStack_350;
    uStack_578 = uStack_338;
    uStack_580 = uStack_340;
    uStack_5e8 = uStack_3a8;
    uStack_5f0 = uStack_3b0;
    uStack_5d8 = uStack_398;
    uStack_5e0 = uStack_3a0;
    uStack_5c8 = uStack_388;
    uStack_5d0 = uStack_390;
    uStack_5b8 = uStack_378;
    uStack_5c0 = uStack_380;
    uStack_628 = uStack_3e8;
    uStack_630 = uStack_3f0;
    uStack_618 = uStack_3d8;
    uStack_620 = uStack_3e0;
    uStack_608 = uStack_3c8;
    uStack_610 = uStack_3d0;
    uStack_5f8 = uStack_3b8;
    uStack_600 = uStack_3c0;
    iVar1 = (int)&uStack_330;
    FUN_102f54fec();
    if (iVar1 != 1) {
      uStack_668 = uStack_2a8;
      uStack_670 = uStack_2b0;
      uStack_658 = uStack_298;
      uStack_660 = uStack_2a0;
      uStack_648 = uStack_288;
      uStack_650 = uStack_290;
      uStack_638 = uStack_278;
      uStack_640 = uStack_280;
      uStack_6a8 = uStack_2e8;
      uStack_6b0 = uStack_2f0;
      uStack_698 = uStack_2d8;
      uStack_6a0 = uStack_2e0;
      uStack_688 = uStack_2c8;
      uStack_690 = uStack_2d0;
      uStack_678 = uStack_2b8;
      uStack_680 = uStack_2c0;
      uStack_6e8 = uStack_328;
      uStack_6f0 = uStack_330;
      uStack_6d8 = uStack_318;
      uStack_6e0 = uStack_320;
      uStack_6c8 = uStack_308;
      uStack_6d0 = uStack_310;
      uStack_6b8 = uStack_2f8;
      uStack_6c0 = uStack_300;
      uStack_4e8 = uStack_2a8;
      uStack_4f0 = uStack_2b0;
      uStack_4d8 = uStack_298;
      uStack_4e0 = uStack_2a0;
      uStack_4c8 = uStack_288;
      uStack_4d0 = uStack_290;
      uStack_4b8 = uStack_278;
      uStack_4c0 = uStack_280;
      uStack_528 = uStack_2e8;
      uStack_530 = uStack_2f0;
      uStack_518 = uStack_2d8;
      uStack_520 = uStack_2e0;
      uStack_508 = uStack_2c8;
      uStack_510 = uStack_2d0;
      uStack_4f8 = uStack_2b8;
      uStack_500 = uStack_2c0;
      uStack_568 = uStack_328;
      uStack_570 = uStack_330;
      uStack_558 = uStack_318;
      uStack_560 = uStack_320;
      uStack_548 = uStack_308;
      uStack_550 = uStack_310;
      uStack_538 = uStack_2f8;
      uStack_540 = uStack_300;
      uStack_128 = uStack_5a8;
      uStack_130 = uStack_5b0;
      uStack_118 = uStack_598;
      uStack_120 = uStack_5a0;
      uStack_108 = uStack_588;
      uStack_110 = uStack_590;
      uStack_f8 = uStack_578;
      uStack_100 = uStack_580;
      uStack_168 = uStack_5e8;
      uStack_170 = uStack_5f0;
      uStack_158 = uStack_5d8;
      uStack_160 = uStack_5e0;
      uStack_148 = uStack_5c8;
      uStack_150 = uStack_5d0;
      uStack_138 = uStack_5b8;
      uStack_140 = uStack_5c0;
      uStack_1a8 = uStack_628;
      uStack_1b0 = uStack_630;
      uStack_198 = uStack_618;
      uStack_1a0 = uStack_620;
      uStack_188 = uStack_608;
      uStack_190 = uStack_610;
      uStack_178 = uStack_5f8;
      uStack_180 = uStack_600;
      FUN_102fa5174(&uStack_270,auStack_7b0,0x112f2a130,&UNK_10db663d0);
      puVar2 = &uStack_1b0;
      FUN_102f91af0(puVar2,&uStack_570);
      func_0x000102fa51bc(&uStack_6f0,0x112f2a130,&UNK_10db663d0);
      func_0x000102fa51bc(&uStack_3f0,0x112f2a130,&UNK_10db663d0);
      uVar3 = (uint)puVar2 ^ 1;
      goto LAB_102f7ad54;
    }
  }
  func_0x000107c610b4(&uStack_570,&uStack_3f0,0x180);
  FUN_102fa5174(&uStack_270,&uStack_1b0,0x112f2a130,&UNK_10db663d0);
  func_0x000102fa51bc(&uStack_570,0x112f2b6b0,&UNK_10db6af78);
  uVar3 = 1;
LAB_102f7ad54:
  return uVar3 & 1;
}



/* Entry: 102f7aa28; end: 102f7ad6b;  */

uint FUN_102f7aa28(void)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  long unaff_x20;
  undefined1 auStack_7b0 [192];
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_1f0 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_1d8 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_1e0 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_1c8 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_1d0 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_1b8 = *(undefined8 *)(unaff_x20 + 200);
  uStack_1c0 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_230 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_218 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_220 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_208 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_210 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_1f8 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_200 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_268 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_270 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_258 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_260 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_248 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_250 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_238 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_240 = *(undefined8 *)(unaff_x20 + 0x40);
  FUN_102f91ad0(&uStack_f0);
  uStack_368 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_370 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_358 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_360 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_348 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_350 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_338 = *(undefined8 *)(unaff_x20 + 200);
  uStack_340 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_3a8 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_3b0 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_398 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_3a0 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_388 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_390 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_378 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_380 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_3e8 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_3f0 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_3d8 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_3e0 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_3c8 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_3d0 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_3b8 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_3c0 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_2a8 = uStack_68;
  uStack_2b0 = uStack_70;
  uStack_298 = uStack_58;
  uStack_2a0 = uStack_60;
  uStack_288 = uStack_48;
  uStack_290 = uStack_50;
  uStack_278 = uStack_38;
  uStack_280 = uStack_40;
  uStack_2e8 = uStack_a8;
  uStack_2f0 = uStack_b0;
  uStack_2d8 = uStack_98;
  uStack_2e0 = uStack_a0;
  uStack_2c8 = uStack_88;
  uStack_2d0 = uStack_90;
  uStack_2b8 = uStack_78;
  uStack_2c0 = uStack_80;
  uStack_328 = uStack_e8;
  uStack_330 = uStack_f0;
  uStack_318 = uStack_d8;
  uStack_320 = uStack_e0;
  uStack_308 = uStack_c8;
  uStack_310 = uStack_d0;
  uStack_2f8 = uStack_b8;
  uStack_300 = uStack_c0;
  iVar1 = (int)&uStack_3f0;
  FUN_102f54fec();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_330;
    FUN_102f54fec();
    if (iVar1 == 1) {
      uStack_4e8 = uStack_368;
      uStack_4f0 = uStack_370;
      uStack_4d8 = uStack_358;
      uStack_4e0 = uStack_360;
      uStack_4c8 = uStack_348;
      uStack_4d0 = uStack_350;
      uStack_4b8 = uStack_338;
      uStack_4c0 = uStack_340;
      uStack_528 = uStack_3a8;
      uStack_530 = uStack_3b0;
      uStack_518 = uStack_398;
      uStack_520 = uStack_3a0;
      uStack_508 = uStack_388;
      uStack_510 = uStack_390;
      uStack_4f8 = uStack_378;
      uStack_500 = uStack_380;
      uStack_568 = uStack_3e8;
      uStack_570 = uStack_3f0;
      uStack_558 = uStack_3d8;
      uStack_560 = uStack_3e0;
      uStack_548 = uStack_3c8;
      uStack_550 = uStack_3d0;
      uStack_538 = uStack_3b8;
      uStack_540 = uStack_3c0;
      FUN_102fa5174(&uStack_270,&uStack_1b0,0x112f2a130,&UNK_10db663d0);
      func_0x000102fa51bc(&uStack_570,0x112f2a130,&UNK_10db663d0);
      uVar3 = 0;
      goto LAB_102f7ad54;
    }
  }
  else {
    uStack_5a8 = uStack_368;
    uStack_5b0 = uStack_370;
    uStack_598 = uStack_358;
    uStack_5a0 = uStack_360;
    uStack_588 = uStack_348;
    uStack_590 = uStack_350;
    uStack_578 = uStack_338;
    uStack_580 = uStack_340;
    uStack_5e8 = uStack_3a8;
    uStack_5f0 = uStack_3b0;
    uStack_5d8 = uStack_398;
    uStack_5e0 = uStack_3a0;
    uStack_5c8 = uStack_388;
    uStack_5d0 = uStack_390;
    uStack_5b8 = uStack_378;
    uStack_5c0 = uStack_380;
    uStack_628 = uStack_3e8;
    uStack_630 = uStack_3f0;
    uStack_618 = uStack_3d8;
    uStack_620 = uStack_3e0;
    uStack_608 = uStack_3c8;
    uStack_610 = uStack_3d0;
    uStack_5f8 = uStack_3b8;
    uStack_600 = uStack_3c0;
    iVar1 = (int)&uStack_330;
    FUN_102f54fec();
    if (iVar1 != 1) {
      uStack_668 = uStack_2a8;
      uStack_670 = uStack_2b0;
      uStack_658 = uStack_298;
      uStack_660 = uStack_2a0;
      uStack_648 = uStack_288;
      uStack_650 = uStack_290;
      uStack_638 = uStack_278;
      uStack_640 = uStack_280;
      uStack_6a8 = uStack_2e8;
      uStack_6b0 = uStack_2f0;
      uStack_698 = uStack_2d8;
      uStack_6a0 = uStack_2e0;
      uStack_688 = uStack_2c8;
      uStack_690 = uStack_2d0;
      uStack_678 = uStack_2b8;
      uStack_680 = uStack_2c0;
      uStack_6e8 = uStack_328;
      uStack_6f0 = uStack_330;
      uStack_6d8 = uStack_318;
      uStack_6e0 = uStack_320;
      uStack_6c8 = uStack_308;
      uStack_6d0 = uStack_310;
      uStack_6b8 = uStack_2f8;
      uStack_6c0 = uStack_300;
      uStack_4e8 = uStack_2a8;
      uStack_4f0 = uStack_2b0;
      uStack_4d8 = uStack_298;
      uStack_4e0 = uStack_2a0;
      uStack_4c8 = uStack_288;
      uStack_4d0 = uStack_290;
      uStack_4b8 = uStack_278;
      uStack_4c0 = uStack_280;
      uStack_528 = uStack_2e8;
      uStack_530 = uStack_2f0;
      uStack_518 = uStack_2d8;
      uStack_520 = uStack_2e0;
      uStack_508 = uStack_2c8;
      uStack_510 = uStack_2d0;
      uStack_4f8 = uStack_2b8;
      uStack_500 = uStack_2c0;
      uStack_568 = uStack_328;
      uStack_570 = uStack_330;
      uStack_558 = uStack_318;
      uStack_560 = uStack_320;
      uStack_548 = uStack_308;
      uStack_550 = uStack_310;
      uStack_538 = uStack_2f8;
      uStack_540 = uStack_300;
      uStack_128 = uStack_5a8;
      uStack_130 = uStack_5b0;
      uStack_118 = uStack_598;
      uStack_120 = uStack_5a0;
      uStack_108 = uStack_588;
      uStack_110 = uStack_590;
      uStack_f8 = uStack_578;
      uStack_100 = uStack_580;
      uStack_168 = uStack_5e8;
      uStack_170 = uStack_5f0;
      uStack_158 = uStack_5d8;
      uStack_160 = uStack_5e0;
      uStack_148 = uStack_5c8;
      uStack_150 = uStack_5d0;
      uStack_138 = uStack_5b8;
      uStack_140 = uStack_5c0;
      uStack_1a8 = uStack_628;
      uStack_1b0 = uStack_630;
      uStack_198 = uStack_618;
      uStack_1a0 = uStack_620;
      uStack_188 = uStack_608;
      uStack_190 = uStack_610;
      uStack_178 = uStack_5f8;
      uStack_180 = uStack_600;
      FUN_102fa5174(&uStack_270,auStack_7b0,0x112f2a130,&UNK_10db663d0);
      puVar2 = &uStack_1b0;
      FUN_102f91af0(puVar2,&uStack_570);
      func_0x000102fa51bc(&uStack_6f0,0x112f2a130,&UNK_10db663d0);
      func_0x000102fa51bc(&uStack_3f0,0x112f2a130,&UNK_10db663d0);
      uVar3 = (uint)puVar2 ^ 1;
      goto LAB_102f7ad54;
    }
  }
  func_0x000107c610b4(&uStack_570,&uStack_3f0,0x180);
  FUN_102fa5174(&uStack_270,&uStack_1b0,0x112f2a130,&UNK_10db663d0);
  func_0x000102fa51bc(&uStack_570,0x112f2b6b0,&UNK_10db6af78);
  uVar3 = 1;
LAB_102f7ad54:
  return uVar3 & 1;
}



/* Entry: 102f7ad6c; end: 102f7addb;  */

void FUN_102f7ad6c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = 0;
  param_1[9] = 0xe000000000000000;
  param_1[0xb] = 0xc000000000000000;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xf000000000000000;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0xf000000000000000;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0xf000000000000000;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  return;
}



/* Entry: 102f7addc; end: 102f7ae6f;  */

bool FUN_102f7addc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = lVar3;
  if (lVar3 == 0) {
    FUN_102fa5174(&uStack_50,auStack_68,0x112f2b6d0,&UNK_10db6af98);
  }
  else {
    FUN_102fa5174(&uStack_50,auStack_68,0x112f2b6d0,&UNK_10db6af98);
    func_0x000102f923fc(uVar1,uVar2,lVar3);
    uVar1 = 0;
    uVar2 = 0;
  }
  func_0x000102f923fc(uVar1,uVar2,0);
  return lVar3 != 0;
}



/* Entry: 102f7ae70; end: 102f7aef3;  */

long FUN_102f7ae70(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 102f7aef4; end: 102f7af9b;  */

undefined8 FUN_102f7aef4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar4 = uVar1;
  if (lVar3 == 0) {
    if (lRam0000000112f2b6a0 != -1) {
      func_0x000107c61568(0x112f2b6a0,0x102f7f028);
    }
    func_0x000107c6157c(uRam0000000112f2b6a8);
    uVar4 = 0;
  }
  FUN_102f923d0(uVar1,uVar2,lVar3);
  return uVar4;
}



/* Entry: 102f7af9c; end: 102f7afc7;  */

void FUN_102f7af9c(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = puVar1;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 102f7afc8; end: 102f7b0e7;  */

bool FUN_102f7afc8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_1f0 [112];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(unaff_x20 + 0x58);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x40);
  lStack_58 = lVar3;
  if (lVar3 == 1) {
    uStack_158 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_160 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_148 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_150 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_140 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_178 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_180 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_168 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_170 = *(undefined8 *)(unaff_x20 + 0x20);
    lStack_138 = 1;
    uStack_128 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_130 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_118 = *(undefined8 *)(unaff_x20 + 0x78);
    uStack_120 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar1 = 0x112f2a110;
    puVar2 = &UNK_10db66360;
    FUN_102fa5174(&uStack_a0,auStack_1f0,0x112f2a110,&UNK_10db66360);
  }
  else {
    uStack_158 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_160 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_148 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_150 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_140 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_178 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_180 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_168 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_170 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_128 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_130 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_118 = *(undefined8 *)(unaff_x20 + 0x78);
    uStack_120 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 1;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_138 = lVar3;
    FUN_102fa5174(&uStack_a0,auStack_1f0,0x112f2a110,&UNK_10db66360);
    uVar1 = 0x112f2b6e0;
    puVar2 = &UNK_10db6afb0;
  }
  func_0x000102fa51bc(&uStack_180,uVar1,puVar2);
  return lVar3 != 1;
}



/* Entry: 102f7b0e8; end: 102f7b12f;  */

void FUN_102f7b0e8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db707f0,0x2e,2);
  uRam0000000113805be0 = uStack_38;
  uRam0000000113805bd8 = uStack_40;
  uRam0000000113805bf0 = uStack_28;
  uRam0000000113805be8 = uStack_30;
  uRam0000000113805c00 = uStack_18;
  uRam0000000113805bf8 = uStack_20;
  return;
}



/* Entry: 102f7b130; end: 102f7b1cf;  */

/* WARNING: Possible PIC construction at 0x000102f7b17c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f7b18c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7b180) */
/* WARNING: Removing unreachable block (ram,0x000102f7b190) */

void FUN_102f7b130(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b6f0 != -1) {
    func_0x000107c61568(0x112f2b6f0,FUN_102f7b0e8);
  }
  uVar5 = uRam0000000113805c00;
  uVar4 = uRam0000000113805bf8;
  uVar3 = uRam0000000113805bf0;
  uVar2 = uRam0000000113805be8;
  uVar1 = uRam0000000113805be0;
  *param_1 = uRam0000000113805bd8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102f7b1d0; end: 102f7b217;  */

void FUN_102f7b1d0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db70760,0x89,2);
  uRam0000000113805c10 = uStack_38;
  uRam0000000113805c08 = uStack_40;
  uRam0000000113805c20 = uStack_28;
  uRam0000000113805c18 = uStack_30;
  uRam0000000113805c30 = uStack_18;
  uRam0000000113805c28 = uStack_20;
  return;
}



/* Entry: 102f7b218; end: 102f7b2b7;  */

/* WARNING: Possible PIC construction at 0x000102f7b264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f7b274: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7b268) */
/* WARNING: Removing unreachable block (ram,0x000102f7b278) */

void FUN_102f7b218(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b6f8 != -1) {
    func_0x000107c61568(0x112f2b6f8,FUN_102f7b1d0);
  }
  uVar5 = uRam0000000113805c30;
  uVar4 = uRam0000000113805c28;
  uVar3 = uRam0000000113805c20;
  uVar2 = uRam0000000113805c18;
  uVar1 = uRam0000000113805c10;
  *param_1 = uRam0000000113805c08;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102f7b2b8; end: 102f7b2ff;  */

void FUN_102f7b2b8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db70700,0x52,2);
  uRam0000000113805c40 = uStack_38;
  uRam0000000113805c38 = uStack_40;
  uRam0000000113805c50 = uStack_28;
  uRam0000000113805c48 = uStack_30;
  uRam0000000113805c60 = uStack_18;
  uRam0000000113805c58 = uStack_20;
  return;
}



/* Entry: 102f7b300; end: 102f7b39f;  */

/* WARNING: Possible PIC construction at 0x000102f7b34c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f7b35c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7b350) */
/* WARNING: Removing unreachable block (ram,0x000102f7b360) */

void FUN_102f7b300(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b700 != -1) {
    func_0x000107c61568(0x112f2b700,FUN_102f7b2b8);
  }
  uVar5 = uRam0000000113805c60;
  uVar4 = uRam0000000113805c58;
  uVar3 = uRam0000000113805c50;
  uVar2 = uRam0000000113805c48;
  uVar1 = uRam0000000113805c40;
  *param_1 = uRam0000000113805c38;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102f7b3a0; end: 102f7b3e7;  */

void FUN_102f7b3a0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db70680,0x78,2);
  uRam0000000113805c70 = uStack_38;
  uRam0000000113805c68 = uStack_40;
  uRam0000000113805c80 = uStack_28;
  uRam0000000113805c78 = uStack_30;
  uRam0000000113805c90 = uStack_18;
  uRam0000000113805c88 = uStack_20;
  return;
}



/* Entry: 102f7b3e8; end: 102f7b487;  */

/* WARNING: Possible PIC construction at 0x000102f7b434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f7b444: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7b438) */
/* WARNING: Removing unreachable block (ram,0x000102f7b448) */

void FUN_102f7b3e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b708 != -1) {
    func_0x000107c61568(0x112f2b708,FUN_102f7b3a0);
  }
  uVar5 = uRam0000000113805c90;
  uVar4 = uRam0000000113805c88;
  uVar3 = uRam0000000113805c80;
  uVar2 = uRam0000000113805c78;
  uVar1 = uRam0000000113805c70;
  *param_1 = uRam0000000113805c68;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102f7b488; end: 102f7b4cf;  */

void FUN_102f7b488(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db70620,0x58,2);
  uRam0000000113805ca0 = uStack_38;
  uRam0000000113805c98 = uStack_40;
  uRam0000000113805cb0 = uStack_28;
  uRam0000000113805ca8 = uStack_30;
  uRam0000000113805cc0 = uStack_18;
  uRam0000000113805cb8 = uStack_20;
  return;
}



/* Entry: 102f7b4d0; end: 102f7b56f;  */

/* WARNING: Possible PIC construction at 0x000102f7b51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f7b52c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7b520) */
/* WARNING: Removing unreachable block (ram,0x000102f7b530) */

void FUN_102f7b4d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b710 != -1) {
    func_0x000107c61568(0x112f2b710,FUN_102f7b488);
  }
  uVar5 = uRam0000000113805cc0;
  uVar4 = uRam0000000113805cb8;
  uVar3 = uRam0000000113805cb0;
  uVar2 = uRam0000000113805ca8;
  uVar1 = uRam0000000113805ca0;
  *param_1 = uRam0000000113805c98;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102f7b570; end: 102f7b5b7;  */

void FUN_102f7b570(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db705a0,0x72,2);
  uRam0000000113805cd0 = uStack_38;
  uRam0000000113805cc8 = uStack_40;
  uRam0000000113805ce0 = uStack_28;
  uRam0000000113805cd8 = uStack_30;
  uRam0000000113805cf0 = uStack_18;
  uRam0000000113805ce8 = uStack_20;
  return;
}



/* Entry: 102f7b5b8; end: 102f7b657;  */

/* WARNING: Possible PIC construction at 0x000102f7b604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f7b614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7b608) */
/* WARNING: Removing unreachable block (ram,0x000102f7b618) */

void FUN_102f7b5b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b718 != -1) {
    func_0x000107c61568(0x112f2b718,FUN_102f7b570);
  }
  uVar5 = uRam0000000113805cf0;
  uVar4 = uRam0000000113805ce8;
  uVar3 = uRam0000000113805ce0;
  uVar2 = uRam0000000113805cd8;
  uVar1 = uRam0000000113805cd0;
  *param_1 = uRam0000000113805cc8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102f7b658; end: 102f7b69f;  */

void FUN_102f7b658(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db70570,0x23,2);
  uRam0000000113805d00 = uStack_38;
  uRam0000000113805cf8 = uStack_40;
  uRam0000000113805d10 = uStack_28;
  uRam0000000113805d08 = uStack_30;
  uRam0000000113805d20 = uStack_18;
  uRam0000000113805d18 = uStack_20;
  return;
}



/* Entry: 102f7b6a0; end: 102f7b6d7;  */

undefined1  [16] FUN_102f7b6a0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f116050;
  auVar1._0_8_ = 0xd000000000000024;
  return auVar1;
}



/* Entry: 102f7b6d8; end: 102f7b70f;  */

uint FUN_102f7b6d8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000102fa5040();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 102f7b710; end: 102f7b7af;  */

/* WARNING: Possible PIC construction at 0x000102f7b75c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f7b76c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7b760) */
/* WARNING: Removing unreachable block (ram,0x000102f7b770) */

void FUN_102f7b710(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b720 != -1) {
    func_0x000107c61568(0x112f2b720,FUN_102f7b658);
  }
  uVar5 = uRam0000000113805d20;
  uVar4 = uRam0000000113805d18;
  uVar3 = uRam0000000113805d10;
  uVar2 = uRam0000000113805d08;
  uVar1 = uRam0000000113805d00;
  *param_1 = uRam0000000113805cf8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102f7b7b0; end: 102f7b7c3;  */

void FUN_102f7b7b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c880;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c880,&UNK_10db6fcf0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f7b7c4; end: 102f7b7fb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f7b7c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  func_0x000102f972e8();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 102f7b7fc; end: 102f7b843;  */

void FUN_102f7b7fc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db70550,0x16,2);
  uRam0000000113805d30 = uStack_38;
  uRam0000000113805d28 = uStack_40;
  uRam0000000113805d40 = uStack_28;
  uRam0000000113805d38 = uStack_30;
  uRam0000000113805d50 = uStack_18;
  uRam0000000113805d48 = uStack_20;
  return;
}



/* Entry: 102f7b844; end: 102f7b8db;  */

void FUN_102f7b844(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_102f7b898:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000102f7b8b4;
  pcVar3 = *(code **)(param_3 + 0xf0);
  goto LAB_102f7b880;
code_r0x000102f7b8b4:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0xf0);
LAB_102f7b880:
    (*pcVar3)();
  }
  goto LAB_102f7b898;
}



/* Entry: 102f7b8dc; end: 102f7b973;  */

void FUN_102f7b8dc(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if (((param_2 == 0) || ((**(code **)(param_7 + 0x50))(param_2,1,param_6,param_7), unaff_x21 == 0))
     && ((param_3 == 0 || ((**(code **)(param_7 + 0x50))(param_3,2,param_6,param_7), unaff_x21 == 0)
         ))) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 102f7b974; end: 102f7b9bb;  */

void FUN_102f7b974(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xc000000000000000;
  return;
}



/* Entry: 102f7b9bc; end: 102f7b9f3;  */

void FUN_102f7b9bc(void)

{
  FUN_102f7b844();
  return;
}



/* Entry: 102f7b9f4; end: 102f7ba2b;  */

uint FUN_102f7b9f4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000102fa5000();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 102f7ba2c; end: 102f7ba57;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f7ba2c(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  long *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (*unaff_x20 != *param_1 || unaff_x20[1] != param_1[1]) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)unaff_x20[2];
  pbVar25 = (byte *)unaff_x20[3];
  lVar24 = param_1[2];
  uVar16 = param_1[3];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(long **)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (long *)((ulong)pbVar25 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(long **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(long **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 102f7ba58; end: 102f7baf7;  */

/* WARNING: Possible PIC construction at 0x000102f7baa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f7bab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7baa8) */
/* WARNING: Removing unreachable block (ram,0x000102f7bab8) */

void FUN_102f7ba58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b730 != -1) {
    func_0x000107c61568(0x112f2b730,FUN_102f7b7fc);
  }
  uVar5 = uRam0000000113805d50;
  uVar4 = uRam0000000113805d48;
  uVar3 = uRam0000000113805d40;
  uVar2 = uRam0000000113805d38;
  uVar1 = uRam0000000113805d30;
  *param_1 = uRam0000000113805d28;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102f7baf8; end: 102f7bb0b;  */

void FUN_102f7baf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c870;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c870,&UNK_10db6fce8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f7bb0c; end: 102f7bbff;  */

void FUN_102f7bb0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f7bc00; end: 102f7bc27;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f7bc00(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (*param_1 != *param_2 || param_1[1] != param_2[1]) {
    return (byte *)0x0;
  }
  lVar24 = param_2[2];
  uVar16 = param_2[3];
  pbVar10 = (byte *)param_1[2];
  pbVar25 = (byte *)param_1[3];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 102f7bc28; end: 102f7bc6f;  */

void FUN_102f7bc28(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db7053d,0xe,2);
  uRam0000000113805d60 = uStack_38;
  uRam0000000113805d58 = uStack_40;
  uRam0000000113805d70 = uStack_28;
  uRam0000000113805d68 = uStack_30;
  uRam0000000113805d80 = uStack_18;
  uRam0000000113805d78 = uStack_20;
  return;
}



/* Entry: 102f7bc70; end: 102f7bcf3;  */

void FUN_102f7bc70(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      FUN_102f7bcf4();
    }
  }
  return;
}



/* Entry: 102f7bcf4; end: 102f7be83;  */

/* WARNING: Removing unreachable block (ram,0x000102f7be08) */

void FUN_102f7bcf4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x21;
  undefined8 uVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0xf000000000000000;
  uVar11 = param_1[3];
  puVar5 = param_1;
  if (uVar11 >> 0x3c < 0xf) {
    uVar6 = param_1[1];
    uVar7 = param_1[2];
    uVar9 = *param_1;
    func_0x00010006c00c(uVar7,uVar11);
    puVar5 = (undefined8 *)0x0;
    func_0x000100d2ebd8(0,0,0,0xf000000000000000);
    uStack_80 = uVar9;
    uStack_78 = uVar6;
    uStack_70 = uVar7;
    uStack_68 = uVar11;
  }
  pcVar10 = *(code **)(param_4 + 0x198);
  FUN_102f97e38();
  (*pcVar10)(&uStack_80,&UNK_1105f2ef0,puVar5,param_3,param_4);
  uVar4 = uStack_68;
  uVar3 = uStack_70;
  uVar2 = uStack_78;
  uVar1 = uStack_80;
  uVar6 = uStack_80;
  uVar9 = uStack_78;
  uVar7 = uStack_70;
  uVar8 = uStack_68;
  if ((unaff_x21 == 0) && (uStack_68 >> 0x3c < 0xf)) {
    if (uVar11 >> 0x3c < 0xf) {
      pcVar10 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_70,uStack_68);
      (*pcVar10)(param_3,param_4);
    }
    else {
      func_0x00010006c00c(uStack_70,uStack_68);
    }
    func_0x000100d2ebd8(uStack_80,uStack_78,uStack_70,uStack_68);
    uVar6 = *param_1;
    uVar9 = param_1[1];
    uVar7 = param_1[2];
    uVar8 = param_1[3];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
  }
  func_0x000100d2ebd8(uVar6,uVar9,uVar7,uVar8);
  return;
}



/* Entry: 102f7be84; end: 102f7bedf;  */

void FUN_102f7be84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_102f7bee0();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                        param_2,param_3);
  }
  return;
}



/* Entry: 102f7bee0; end: 102f7bf83;  */

void FUN_102f7bee0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  if (uStack_88 >> 0x3c < 0xf) {
    FUN_102fa5164(&uStack_a0,auStack_80);
    puVar1 = auStack_80;
    FUN_102fa5164(puVar1,&uStack_60);
    uStack_b8 = uStack_58;
    uStack_c0 = uStack_60;
    uStack_a8 = uStack_48;
    uStack_b0 = uStack_50;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_102f97e38();
    (*pcVar2)(&uStack_c0,1,&UNK_1105f2ef0,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 102f7bf84; end: 102f7bfdb;  */

void FUN_102f7bf84(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0xf000000000000000;
  param_1[5] = 0xc000000000000000;
  return;
}



/* Entry: 102f7bfdc; end: 102f7bfef;  */

void FUN_102f7bfdc(void)

{
  FUN_102f7bc70();
  return;
}



/* Entry: 102f7bff0; end: 102f7c027;  */

void FUN_102f7bff0(void)

{
  FUN_102f7be84();
  return;
}



/* Entry: 102f7c028; end: 102f7c05f;  */

uint FUN_102f7c028(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000102fa4fc0();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 102f7c060; end: 102f7c0a7;  */

uint FUN_102f7c060(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  func_0x000102f9215c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102f7c0a8; end: 102f7c147;  */

/* WARNING: Possible PIC construction at 0x000102f7c0f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f7c104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7c0f8) */
/* WARNING: Removing unreachable block (ram,0x000102f7c108) */

void FUN_102f7c0a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b740 != -1) {
    func_0x000107c61568(0x112f2b740,FUN_102f7bc28);
  }
  uVar5 = uRam0000000113805d80;
  uVar4 = uRam0000000113805d78;
  uVar3 = uRam0000000113805d70;
  uVar2 = uRam0000000113805d68;
  uVar1 = uRam0000000113805d60;
  *param_1 = uRam0000000113805d58;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102f7c148; end: 102f7c15b;  */

void FUN_102f7c148(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c860;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c860,&UNK_10db6fce0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f7c15c; end: 102f7c25f;  */

void FUN_102f7c15c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f7c260; end: 102f7c2eb;  */

uint FUN_102f7c260(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  func_0x000102f9215c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102f7c2ec; end: 102f7c477;  */

/* WARNING: Removing unreachable block (ram,0x000102f7c45c) */

void FUN_102f7c2ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_102f97e38();
        lVar2 = unaff_x20 + 0x70;
        puVar3 = &UNK_1105f2ef0;
        goto code_r0x000102f7c448;
      case 2:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 3:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000102f972e8();
        lVar2 = unaff_x20 + 0x90;
        puVar3 = &UNK_1105f2e68;
        goto code_r0x000102f7c448;
      case 4:
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000102f92b30();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_1105f2b20;
        goto code_r0x000102f7c448;
      case 5:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 6:
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000102f92b70();
        lVar2 = unaff_x20 + 0x30;
        puVar3 = &UNK_1105f2bb0;
code_r0x000102f7c448:
        (*pcVar4)(lVar2,puVar3,uVar1,param_2,param_3);
        goto LAB_102f7c374;
      case 7:
        pcVar4 = *(code **)(param_3 + 0x60);
        break;
      case 8:
        pcVar4 = *(code **)(param_3 + 0x60);
        break;
      case 9:
        pcVar4 = *(code **)(param_3 + 0x60);
        break;
      case 10:
        pcVar4 = *(code **)(param_3 + 0x60);
        break;
      default:
        goto LAB_102f7c374;
      }
      (*pcVar4)();
LAB_102f7c374:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 102f7c478; end: 102f7c66f;  */

void FUN_102f7c478(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar5;
  ulong uStack_50;
  undefined1 uStack_48;
  
  FUN_102f7c670();
  if (unaff_x21 == 0) {
    uVar4 = unaff_x20[1];
    uVar1 = *unaff_x20 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar1 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(*unaff_x20,uVar4,2,param_2,param_3);
    }
    puVar3 = unaff_x20;
    FUN_102f7c6fc();
    if (unaff_x20[2] != 0) {
      uStack_48 = (undefined1)unaff_x20[3];
      pcVar5 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[2];
      func_0x000102f92b30();
      (*pcVar5)(&uStack_50,4,&UNK_1105f2b20,puVar3,param_2,param_3);
    }
    uVar4 = unaff_x20[4];
    uVar2 = unaff_x20[5];
    uVar1 = uVar4 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(uVar4,uVar2,5,param_2,param_3);
    }
    if (unaff_x20[6] != 0) {
      uStack_48 = (undefined1)unaff_x20[7];
      pcVar5 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[6];
      func_0x000102f92b70();
      (*pcVar5)(&uStack_50,6,&UNK_1105f2bb0,uVar4,param_2,param_3);
    }
    if (unaff_x20[8] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[8],7,param_2,param_3);
    }
    if (unaff_x20[9] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[9],8,param_2,param_3);
    }
    if (unaff_x20[10] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[10],9,param_2,param_3);
    }
    if (unaff_x20[0xb] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[0xb],10,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[0xc],unaff_x20[0xd],param_2,param_3);
  }
  return;
}



/* Entry: 102f7c670; end: 102f7c6fb;  */

void FUN_102f7c670(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x88);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102f97e38();
    (*pcVar1)(&uStack_60,1,&UNK_1105f2ef0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f7c6fc; end: 102f7c77f;  */

void FUN_102f7c6fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_68 = *(long *)(param_1 + 0x98);
  if (lStack_68 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x90);
    uStack_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_60 = *(undefined8 *)(param_1 + 0xa0);
    uStack_48 = *(undefined8 *)(param_1 + 0xb8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102f972e8();
    (*pcVar1)(&uStack_70,3,&UNK_1105f2e68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f7c780; end: 102f7c7eb;  */

void FUN_102f7c780(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xc000000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xf000000000000000;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  return;
}



/* Entry: 102f7c7ec; end: 102f7c81b;  */

undefined1  [16] FUN_102f7c7ec(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x60);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68));
  return auVar1;
}



/* Entry: 102f7c81c; end: 102f7c84f;  */

void FUN_102f7c81c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  return;
}



/* Entry: 102f7c850; end: 102f7c863;  */

undefined1  [16] FUN_102f7c850(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x60;
  auVar1._0_8_ = 0x102f7c860;
  return auVar1;
}



/* Entry: 102f7c864; end: 102f7c877;  */

void FUN_102f7c864(void)

{
  FUN_102f7c2ec();
  return;
}



/* Entry: 102f7c878; end: 102f7c8cf;  */

void FUN_102f7c878(void)

{
  FUN_102f7c478();
  return;
}



/* Entry: 102f7c8d0; end: 102f7c8d3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f7c8d0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 102f7c8d4; end: 102f7c90b;  */

uint FUN_102f7c8d4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000102fa4f80();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 102f7c90c; end: 102f7c99b;  */

uint FUN_102f7c90c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_38 = param_1[0x15];
  uStack_40 = param_1[0x14];
  uStack_28 = param_1[0x17];
  uStack_30 = param_1[0x16];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_118 = unaff_x20[0x11];
  uStack_120 = unaff_x20[0x10];
  uStack_108 = unaff_x20[0x13];
  uStack_110 = unaff_x20[0x12];
  uStack_f8 = unaff_x20[0x15];
  uStack_100 = unaff_x20[0x14];
  uStack_e8 = unaff_x20[0x17];
  uStack_f0 = unaff_x20[0x16];
  uStack_158 = unaff_x20[9];
  uStack_160 = unaff_x20[8];
  uStack_148 = unaff_x20[0xb];
  uStack_150 = unaff_x20[10];
  uStack_138 = unaff_x20[0xd];
  uStack_140 = unaff_x20[0xc];
  uStack_128 = unaff_x20[0xf];
  uStack_130 = unaff_x20[0xe];
  uStack_198 = unaff_x20[1];
  uStack_1a0 = *unaff_x20;
  uStack_188 = unaff_x20[3];
  uStack_190 = unaff_x20[2];
  uStack_178 = unaff_x20[5];
  uStack_180 = unaff_x20[4];
  uStack_168 = unaff_x20[7];
  uStack_170 = unaff_x20[6];
  FUN_102f91af0(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 102f7c99c; end: 102f7ca3b;  */

/* WARNING: Possible PIC construction at 0x000102f7c9e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f7c9f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f7c9ec) */
/* WARNING: Removing unreachable block (ram,0x000102f7c9fc) */

void FUN_102f7c99c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2b750 != -1) {
    func_0x000107c61568(0x112f2b750,0x102f7c2a4);
  }
  uVar5 = uRam0000000113805db0;
  uVar4 = uRam0000000113805da8;
  uVar3 = uRam0000000113805da0;
  uVar2 = uRam0000000113805d98;
  uVar1 = uRam0000000113805d90;
  *param_1 = uRam0000000113805d88;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102f7ca3c; end: 102f7ca77;  */

void FUN_102f7ca3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c850;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c850,&UNK_10db6fcd8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f7ca78; end: 102f7cbc3;  */

void FUN_102f7ca78(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_138 [72];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[0x11];
  uStack_70 = unaff_x20[0x10];
  uStack_58 = unaff_x20[0x13];
  uStack_60 = unaff_x20[0x12];
  uStack_48 = unaff_x20[0x15];
  uStack_50 = unaff_x20[0x14];
  uStack_38 = unaff_x20[0x17];
  uStack_40 = unaff_x20[0x16];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_78 = unaff_x20[0xf];
  uStack_80 = unaff_x20[0xe];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  func_0x000107c6068c(auStack_138,0);
  func_0x000107c5fa50(auStack_138,param_1,param_2);
  func_0x000107c606a8();
  return;
}


