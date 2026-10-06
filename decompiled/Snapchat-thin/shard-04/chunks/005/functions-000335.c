/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035832d8; end: 1035832e3;  */

void FUN_1035832d8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1035832e4; end: 10358338f;  */

void FUN_1035832e4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103583390; end: 1035833a3;  */

bool FUN_103583390(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1035833a4; end: 10358347b;  */

undefined1  [16] FUN_1035833a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x30,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x30);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x38));
  return auVar1;
}



/* Entry: 10358347c; end: 103583547;  */

void FUN_10358347c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  byte bStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61428(param_4 + 0x70,auStack_a0,0,0);
  uVar1 = *(undefined8 *)(param_4 + 0x70);
  uVar3 = *(ulong *)(param_4 + 0x78);
  lVar2 = *(long *)(param_4 + 0x80);
  uVar4 = *(undefined8 *)(param_4 + 0x88);
  uVar5 = *(undefined8 *)(param_4 + 0x90);
  uVar6 = uVar3;
  uVar7 = uVar4;
  lVar8 = lVar2;
  uVar9 = uVar1;
  uStack_a8 = uVar5;
  if (lVar2 == 0) {
    func_0x00010368c4b8(&uStack_88);
    uStack_a8 = uStack_68;
    uVar6 = (ulong)bStack_80;
    uVar7 = uStack_70;
    lVar8 = lStack_78;
    uVar9 = uStack_88;
  }
  func_0x000101541428(uVar1,uVar3,lVar2,uVar4,uVar5);
  *param_1 = uVar9;
  *(char *)(param_1 + 1) = (char)uVar6;
  param_1[2] = lVar8;
  param_1[3] = uVar7;
  param_1[4] = uStack_a8;
  return;
}



/* Entry: 103583548; end: 1035836ab;  */

undefined1  [16] FUN_103583548(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x98,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x98);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0xa0));
  return auVar1;
}



/* Entry: 1035836ac; end: 1035837cf;  */

void FUN_1035836ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [104];
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  long lStack_a8;
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
  ulong uVar6;
  
  func_0x000107c61428((undefined8 *)(param_4 + 0x118),auStack_c8,0,0);
  uStack_68 = *(undefined8 *)(param_4 + 0x160);
  uStack_70 = *(undefined8 *)(param_4 + 0x158);
  uStack_58 = *(undefined8 *)(param_4 + 0x170);
  uStack_60 = *(undefined8 *)(param_4 + 0x168);
  uStack_50 = *(undefined8 *)(param_4 + 0x178);
  lStack_a8 = *(long *)(param_4 + 0x120);
  uStack_b0 = *(undefined8 *)(param_4 + 0x118);
  uStack_98 = *(undefined8 *)(param_4 + 0x130);
  uStack_a0 = *(undefined8 *)(param_4 + 0x128);
  uStack_88 = *(undefined8 *)(param_4 + 0x140);
  uStack_90 = *(undefined8 *)(param_4 + 0x138);
  uStack_78 = *(undefined8 *)(param_4 + 0x150);
  uStack_80 = *(undefined8 *)(param_4 + 0x148);
  if (lStack_a8 == 0) {
    uVar1 = 0;
    uVar2 = 0;
    uStack_150 = 0;
    uStack_138 = 0xc000000000000000;
    uStack_140 = 0;
    uVar4 = 0xf000000000000000;
    lVar3 = -0x2000000000000000;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
  }
  else {
    uVar5 = (ulong)CONCAT52((int5)(CONCAT16((char)((ulong)uStack_a0 >> 0x18),
                                            (uint6)(byte)((ulong)uStack_a0 >> 0x10) << 0x20) >> 0x10
                                  ),(ushort)(byte)uStack_a0) & 0xffffffffffffff01;
    uVar6 = CONCAT44((int)(uVar5 >> 0x20),(uint)CONCAT12((char)((ulong)uStack_a0 >> 8),(short)uVar5)
                    ) & 0xffffffffff01ffff;
    uStack_150 = CONCAT26((short)(uVar6 >> 0x30),CONCAT24((short)(uVar5 >> 0x20),(int)uVar6)) &
                 0xff01ff01ffffffff;
    uVar1 = uStack_b0;
    uVar2 = uStack_58;
    lVar3 = lStack_a8;
    uVar4 = uStack_50;
    uStack_180 = uStack_68;
    uStack_178 = uStack_60;
    uStack_170 = uStack_78;
    uStack_168 = uStack_70;
    uStack_160 = uStack_88;
    uStack_158 = uStack_80;
    uStack_140 = uStack_98;
    uStack_138 = uStack_90;
  }
  FUN_10358955c(&uStack_b0,auStack_130,0x112f79be0,&UNK_10dbde0f0);
  *param_1 = uVar1;
  param_1[1] = lVar3;
  *(uint *)(param_1 + 2) =
       CONCAT13((char)(uStack_150 >> 0x30),
                CONCAT12((char)(uStack_150 >> 0x20),
                         CONCAT11((char)(uStack_150 >> 0x10),(char)uStack_150)));
  param_1[6] = uStack_158;
  param_1[5] = uStack_160;
  param_1[4] = uStack_138;
  param_1[3] = uStack_140;
  param_1[10] = uStack_178;
  param_1[9] = uStack_180;
  param_1[8] = uStack_168;
  param_1[7] = uStack_170;
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar4;
  return;
}



/* Entry: 1035837d0; end: 1035838db;  */

void FUN_1035837d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [88];
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61428(param_4 + 0x180,auStack_d8,0,0);
  uStack_98 = *(undefined8 *)(param_4 + 0x1a8);
  uStack_a0 = *(undefined8 *)(param_4 + 0x1a0);
  uStack_88 = *(undefined8 *)(param_4 + 0x1b8);
  uStack_90 = *(undefined8 *)(param_4 + 0x1b0);
  uStack_78 = *(undefined8 *)(param_4 + 0x1c8);
  uStack_80 = *(undefined8 *)(param_4 + 0x1c0);
  uStack_70 = *(undefined8 *)(param_4 + 0x1d0);
  uStack_b8 = *(ulong *)(param_4 + 0x188);
  uStack_c0 = *(undefined8 *)(param_4 + 0x180);
  uStack_a8 = *(undefined8 *)(param_4 + 0x198);
  uStack_b0 = *(undefined8 *)(param_4 + 400);
  uVar1 = uStack_88;
  uVar2 = uStack_70;
  uVar3 = uStack_b8;
  uVar4 = uStack_a8;
  uVar5 = uStack_98;
  uVar6 = uStack_90;
  uVar7 = uStack_a0;
  uVar8 = uStack_80;
  uVar9 = uStack_78;
  uStack_140 = uStack_b0;
  uStack_138 = uStack_c0;
  if (0xe < uStack_b8 >> 0x3c) {
    uStack_140 = 0;
    uStack_138 = 0;
    uVar1 = 0xf000000000000000;
    uVar2 = 0xf000000000000000;
    uVar3 = 0xc000000000000000;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0xf000000000000000;
    uVar8 = 0;
    uVar9 = 0;
  }
  FUN_10358955c(&uStack_c0,auStack_130,0x112f79bf0,&UNK_10dbde100);
  *param_1 = uStack_138;
  param_1[1] = uVar3;
  param_1[2] = uStack_140;
  param_1[3] = uVar4;
  param_1[4] = uVar7;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar1;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar2;
  return;
}



/* Entry: 1035838dc; end: 103583937;  */

undefined8 FUN_1035838dc(void)

{
  if (lRam0000000112f79c00 != -1) {
    func_0x000107c61568(0x112f79c00,FUN_103583a68);
  }
  func_0x000107c6157c(uRam0000000112f79c08);
  return 0;
}



/* Entry: 103583938; end: 10358397f;  */

void FUN_103583938(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbde750,0x73,2);
  uRam0000000113808b28 = uStack_38;
  uRam0000000113808b20 = uStack_40;
  uRam0000000113808b38 = uStack_28;
  uRam0000000113808b30 = uStack_30;
  uRam0000000113808b48 = uStack_18;
  uRam0000000113808b40 = uStack_20;
  return;
}



/* Entry: 103583980; end: 103583a1f;  */

/* WARNING: Possible PIC construction at 0x0001035839cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035839dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035839d0) */
/* WARNING: Removing unreachable block (ram,0x0001035839e0) */

void FUN_103583980(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f79c10 != -1) {
    func_0x000107c61568(0x112f79c10,FUN_103583938);
  }
  uVar5 = uRam0000000113808b48;
  uVar4 = uRam0000000113808b40;
  uVar3 = uRam0000000113808b38;
  uVar2 = uRam0000000113808b30;
  uVar1 = uRam0000000113808b28;
  *param_1 = uRam0000000113808b20;
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



/* Entry: 103583a20; end: 103583a67;  */

void FUN_103583a20(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbde4b0,0x296,2);
  uRam0000000113808b58 = uStack_38;
  uRam0000000113808b50 = uStack_40;
  uRam0000000113808b68 = uStack_28;
  uRam0000000113808b60 = uStack_30;
  uRam0000000113808b78 = uStack_18;
  uRam0000000113808b70 = uStack_20;
  return;
}



/* Entry: 103583a68; end: 103583aa3;  */

void FUN_103583a68(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10358953c();
  func_0x000107c613fc();
  FUN_103583aa4();
  uRam0000000112f79c08 = uVar1;
  return;
}



/* Entry: 103583aa4; end: 103583bb7;  */

void FUN_103583aa4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined1 *)(unaff_x20 + 0x68) = 1;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined1 *)(unaff_x20 + 0xf0) = 1;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0xf8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x100) = puVar1;
  *(undefined **)(unaff_x20 + 0x108) = puVar1;
  *(undefined **)(unaff_x20 + 0x110) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  puVar2 = puVar1;
  func_0x0001001830b8();
  *(undefined **)(unaff_x20 + 0x230) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined1 *)(unaff_x20 + 0x240) = 1;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined1 *)(unaff_x20 + 0x250) = 1;
  *(undefined **)(unaff_x20 + 600) = puVar1;
  *(undefined **)(unaff_x20 + 0x260) = puVar1;
  *(undefined **)(unaff_x20 + 0x268) = puVar1;
  *(undefined **)(unaff_x20 + 0x270) = puVar1;
  *(undefined **)(unaff_x20 + 0x278) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f8) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x300) = 0;
  *(undefined8 *)(unaff_x20 + 0x308) = 0xe000000000000000;
  *(undefined **)(unaff_x20 + 0x310) = puVar1;
  *(undefined **)(unaff_x20 + 0x318) = puVar1;
  return;
}



/* Entry: 103583bb8; end: 103584983;  */

void FUN_103583bb8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auStack_970 [24];
  undefined1 auStack_958 [24];
  undefined1 auStack_940 [24];
  undefined1 auStack_928 [24];
  undefined1 auStack_910 [24];
  undefined1 auStack_8f8 [24];
  undefined1 auStack_8e0 [24];
  undefined1 auStack_8c8 [24];
  undefined1 auStack_8b0 [24];
  undefined1 auStack_898 [24];
  undefined1 auStack_880 [24];
  undefined1 auStack_868 [24];
  undefined1 auStack_850 [24];
  undefined1 auStack_838 [24];
  undefined1 auStack_820 [24];
  undefined1 auStack_808 [24];
  undefined1 auStack_7f0 [24];
  undefined1 auStack_7d8 [24];
  undefined1 auStack_7c0 [24];
  undefined1 auStack_7a8 [24];
  undefined1 auStack_790 [24];
  undefined1 auStack_778 [24];
  undefined1 auStack_760 [24];
  undefined1 auStack_748 [24];
  undefined1 auStack_730 [24];
  undefined1 auStack_718 [24];
  undefined1 auStack_700 [24];
  undefined1 auStack_6e8 [88];
  undefined1 auStack_690 [24];
  undefined1 auStack_678 [24];
  undefined1 auStack_660 [24];
  undefined1 auStack_648 [24];
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
  undefined1 auStack_5c0 [24];
  undefined1 auStack_5a8 [24];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [24];
  undefined1 auStack_548 [24];
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [24];
  undefined1 auStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [24];
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
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
  
  puVar18 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar18 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
  puVar30 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar30 = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0xe000000000000000;
  puVar27 = (undefined8 *)(unaff_x20 + 0x30);
  *puVar27 = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xe000000000000000;
  puVar23 = (undefined8 *)(unaff_x20 + 0x40);
  *puVar23 = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0xe000000000000000;
  puVar6 = (undefined8 *)(unaff_x20 + 0x50);
  *puVar6 = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0xe000000000000000;
  puVar7 = (undefined8 *)(unaff_x20 + 0x60);
  *puVar7 = 0;
  *(undefined1 *)(unaff_x20 + 0x68) = 1;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  puVar8 = (undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *puVar8 = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0xe000000000000000;
  puVar9 = (undefined8 *)(unaff_x20 + 0xa8);
  *puVar9 = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0xe000000000000000;
  puVar10 = (undefined8 *)(unaff_x20 + 0xb8);
  *puVar10 = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0xe000000000000000;
  puVar11 = (undefined8 *)(unaff_x20 + 200);
  *puVar11 = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0xe000000000000000;
  puVar12 = (undefined8 *)(unaff_x20 + 0xd8);
  *puVar12 = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0xe000000000000000;
  puVar13 = (undefined8 *)(unaff_x20 + 0xe8);
  *puVar13 = 0;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(unaff_x20 + 0xf0) = 1;
  puVar14 = (undefined8 *)(unaff_x20 + 0xf8);
  *puVar14 = puVar4;
  *(undefined **)(unaff_x20 + 0x100) = puVar4;
  *(undefined **)(unaff_x20 + 0x108) = puVar4;
  *(undefined **)(unaff_x20 + 0x110) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0xf000000000000000;
  puVar2 = (undefined8 *)(unaff_x20 + 0x1d8);
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  puVar5 = puVar4;
  func_0x0001001830b8();
  *(undefined **)(unaff_x20 + 0x230) = puVar5;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined1 *)(unaff_x20 + 0x240) = 1;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined1 *)(unaff_x20 + 0x250) = 1;
  *(undefined **)(unaff_x20 + 600) = puVar4;
  *(undefined **)(unaff_x20 + 0x260) = puVar4;
  *(undefined **)(unaff_x20 + 0x268) = puVar4;
  *(undefined **)(unaff_x20 + 0x270) = puVar4;
  *(undefined **)(unaff_x20 + 0x278) = puVar4;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f8) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x300) = 0;
  *(undefined8 *)(unaff_x20 + 0x308) = 0xe000000000000000;
  *(undefined **)(unaff_x20 + 0x310) = puVar4;
  *(undefined **)(unaff_x20 + 0x318) = puVar4;
  func_0x000107c61428(param_1 + 0x10,auStack_278,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x10);
  uVar21 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61428(puVar18,auStack_290,1,0);
  uVar25 = *(undefined8 *)(unaff_x20 + 0x18);
  *puVar18 = uVar19;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar21;
  func_0x000107c61434(uVar21);
  func_0x000107c6142c(uVar25);
  func_0x000107c61428(param_1 + 0x20,auStack_2a8,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x20);
  uVar21 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61428(puVar30,auStack_2c0,1,0);
  uVar25 = *(undefined8 *)(unaff_x20 + 0x28);
  *puVar30 = uVar19;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar21;
  func_0x000107c61434(uVar21);
  func_0x000107c6142c(uVar25);
  func_0x000107c61428(param_1 + 0x30,auStack_2d8,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar21 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61428(puVar27,auStack_2f0,1,0);
  uVar25 = *(undefined8 *)(unaff_x20 + 0x38);
  *puVar27 = uVar19;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar21;
  func_0x000107c61434(uVar21);
  func_0x000107c6142c(uVar25);
  func_0x000107c61428(param_1 + 0x40,auStack_308,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x40);
  uVar21 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c61428(puVar23,auStack_320,1,0);
  uVar25 = *(undefined8 *)(unaff_x20 + 0x48);
  *puVar23 = uVar19;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar21;
  func_0x000107c61434(uVar21);
  func_0x000107c6142c(uVar25);
  func_0x000107c61428(param_1 + 0x50,auStack_338,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x50);
  uVar21 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c61428(puVar6,auStack_350,1,0);
  uVar25 = *(undefined8 *)(unaff_x20 + 0x58);
  *puVar6 = uVar19;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar21;
  func_0x000107c61434(uVar21);
  func_0x000107c6142c(uVar25);
  func_0x000107c61428(param_1 + 0x60,auStack_368,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined1 *)(param_1 + 0x68);
  func_0x000107c61428(puVar7,auStack_380,1,0);
  *puVar7 = uVar19;
  *(undefined1 *)(unaff_x20 + 0x68) = uVar3;
  func_0x000107c61428(param_1 + 0x70,auStack_398,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x70);
  uVar16 = *(undefined8 *)(param_1 + 0x78);
  uVar21 = *(undefined8 *)(param_1 + 0x80);
  uVar17 = *(undefined8 *)(param_1 + 0x88);
  uVar28 = *(undefined8 *)(param_1 + 0x90);
  func_0x000107c61428(puVar8,auStack_3b0,1,0);
  uVar31 = *puVar8;
  uVar25 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x90);
  *puVar8 = uVar19;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar21;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar28;
  func_0x000101541428(uVar19,uVar16,uVar21,uVar17,uVar28);
  func_0x000101553bdc(uVar31,uVar25,uVar20,uVar15,uVar22);
  func_0x000107c61428(param_1 + 0x98,auStack_3c8,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x98);
  uVar21 = *(undefined8 *)(param_1 + 0xa0);
  func_0x000107c61428(unaff_x20 + 0x98,auStack_3e0,1,0);
  uVar25 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0x98) = uVar19;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar21;
  func_0x000107c61434(uVar21);
  func_0x000107c6142c(uVar25);
  func_0x000107c61428(param_1 + 0xa8,auStack_3f8,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0xa8);
  uVar21 = *(undefined8 *)(param_1 + 0xb0);
  func_0x000107c61428(puVar9,auStack_410,1,0);
  uVar25 = *(undefined8 *)(unaff_x20 + 0xb0);
  *puVar9 = uVar19;
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar21;
  func_0x000107c61434(uVar21);
  func_0x000107c6142c(uVar25);
  func_0x000107c61428(param_1 + 0xb8,auStack_428,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0xb8);
  uVar21 = *(undefined8 *)(param_1 + 0xc0);
  func_0x000107c61428(puVar10,auStack_440,1,0);
  uVar25 = *(undefined8 *)(unaff_x20 + 0xc0);
  *puVar10 = uVar19;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar21;
  func_0x000107c61434(uVar21);
  func_0x000107c6142c(uVar25);
  func_0x000107c61428(param_1 + 200,auStack_458,0,0);
  uVar19 = *(undefined8 *)(param_1 + 200);
  uVar21 = *(undefined8 *)(param_1 + 0xd0);
  func_0x000107c61428(puVar11,auStack_470,1,0);
  uVar25 = *(undefined8 *)(unaff_x20 + 0xd0);
  *puVar11 = uVar19;
  *(undefined8 *)(unaff_x20 + 0xd0) = uVar21;
  func_0x000107c61434(uVar21);
  func_0x000107c6142c(uVar25);
  func_0x000107c61428(param_1 + 0xd8,auStack_488,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0xd8);
  uVar21 = *(undefined8 *)(param_1 + 0xe0);
  func_0x000107c61428(puVar12,auStack_4a0,1,0);
  uVar25 = *(undefined8 *)(unaff_x20 + 0xe0);
  *puVar12 = uVar19;
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar21;
  func_0x000107c61434(uVar21);
  func_0x000107c6142c(uVar25);
  func_0x000107c61428(param_1 + 0xe8,auStack_4b8,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0xe8);
  uVar3 = *(undefined1 *)(param_1 + 0xf0);
  func_0x000107c61428(puVar13,auStack_4d0,1,0);
  *puVar13 = uVar19;
  *(undefined1 *)(unaff_x20 + 0xf0) = uVar3;
  func_0x000107c61428(param_1 + 0xf8,auStack_4e8,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0xf8);
  func_0x000107c61428(puVar14,auStack_500,1,0);
  uVar21 = *puVar14;
  *puVar14 = uVar19;
  func_0x000107c61434(uVar19);
  func_0x000107c6142c(uVar21);
  func_0x000107c61428(param_1 + 0x100,auStack_518,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x100);
  func_0x000107c61428(unaff_x20 + 0x100,auStack_530,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x100);
  *(undefined8 *)(unaff_x20 + 0x100) = uVar19;
  func_0x000107c61434(uVar19);
  func_0x000107c6142c(uVar21);
  func_0x000107c61428(param_1 + 0x108,auStack_548,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x108);
  func_0x000107c61428(unaff_x20 + 0x108,auStack_560,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x108);
  *(undefined8 *)(unaff_x20 + 0x108) = uVar19;
  func_0x000107c61434(uVar19);
  func_0x000107c6142c(uVar21);
  func_0x000107c61428(param_1 + 0x110,auStack_578,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x110);
  func_0x000107c61428(unaff_x20 + 0x110,auStack_590,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x110);
  *(undefined8 *)(unaff_x20 + 0x110) = uVar19;
  func_0x000107c61434(uVar19);
  func_0x000107c6142c(uVar21);
  func_0x000107c61428((undefined8 *)(param_1 + 0x118),auStack_5a8,0,0);
  uStack_218 = *(undefined8 *)(param_1 + 0x160);
  uStack_220 = *(undefined8 *)(param_1 + 0x158);
  uStack_208 = *(undefined8 *)(param_1 + 0x170);
  uStack_210 = *(undefined8 *)(param_1 + 0x168);
  uStack_200 = *(undefined8 *)(param_1 + 0x178);
  uStack_258 = *(undefined8 *)(param_1 + 0x120);
  uStack_260 = *(undefined8 *)(param_1 + 0x118);
  uStack_248 = *(undefined8 *)(param_1 + 0x130);
  uStack_250 = *(undefined8 *)(param_1 + 0x128);
  uStack_238 = *(undefined8 *)(param_1 + 0x140);
  uStack_240 = *(undefined8 *)(param_1 + 0x138);
  uStack_228 = *(undefined8 *)(param_1 + 0x150);
  uStack_230 = *(undefined8 *)(param_1 + 0x148);
  func_0x000107c61428(puVar1,auStack_5c0,1,0);
  uStack_1a8 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_1b0 = *(undefined8 *)(unaff_x20 + 0x158);
  uStack_198 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_1a0 = *(undefined8 *)(unaff_x20 + 0x168);
  uStack_190 = *(undefined8 *)(unaff_x20 + 0x178);
  uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_1f0 = *puVar1;
  uStack_1d8 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_1e0 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_1c8 = *(undefined8 *)(unaff_x20 + 0x140);
  uStack_1d0 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_1b8 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_1c0 = *(undefined8 *)(unaff_x20 + 0x148);
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_258;
  *puVar1 = uStack_260;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_248;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_250;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_200;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_218;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_220;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_208;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_210;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_238;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_240;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_228;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_230;
  FUN_10358955c(&uStack_260,&uStack_630,0x112f79be0,&UNK_10dbde0f0);
  FUN_103589c8c(&uStack_1f0,0x112f79be0,&UNK_10dbde0f0);
  func_0x000107c61428(param_1 + 0x180,auStack_648,0,0);
  uStack_158 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_160 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_148 = *(undefined8 *)(param_1 + 0x1b8);
  uStack_150 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_138 = *(undefined8 *)(param_1 + 0x1c8);
  uStack_140 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_130 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_178 = *(undefined8 *)(param_1 + 0x188);
  uStack_180 = *(undefined8 *)(param_1 + 0x180);
  uStack_168 = *(undefined8 *)(param_1 + 0x198);
  uStack_170 = *(undefined8 *)(param_1 + 400);
  func_0x000107c61428(unaff_x20 + 0x180,auStack_660,1,0);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x1c8);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0x1c0);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x188);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x180);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x198);
  uStack_110 = *(undefined8 *)(unaff_x20 + 400);
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_158;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uStack_148;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x1c8) = uStack_138;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_168;
  *(undefined8 *)(unaff_x20 + 400) = uStack_170;
  FUN_10358955c(&uStack_180,&uStack_630,0x112f79bf0,&UNK_10dbde100);
  FUN_103589c8c(&uStack_120,0x112f79bf0,&UNK_10dbde100);
  func_0x000107c61428((undefined8 *)(param_1 + 0x1d8),auStack_678,0,0);
  uStack_98 = *(undefined8 *)(param_1 + 0x200);
  uStack_a0 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_88 = *(undefined8 *)(param_1 + 0x210);
  uStack_90 = *(undefined8 *)(param_1 + 0x208);
  uStack_78 = *(undefined8 *)(param_1 + 0x220);
  uStack_80 = *(undefined8 *)(param_1 + 0x218);
  uStack_70 = *(undefined8 *)(param_1 + 0x228);
  uStack_b8 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x1d8);
  uStack_a8 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_b0 = *(undefined8 *)(param_1 + 0x1e8);
  func_0x000107c61428(puVar2,auStack_690,1,0);
  uStack_608 = *(undefined8 *)(unaff_x20 + 0x200);
  uStack_610 = *(undefined8 *)(unaff_x20 + 0x1f8);
  uStack_5f8 = *(undefined8 *)(unaff_x20 + 0x210);
  uStack_600 = *(undefined8 *)(unaff_x20 + 0x208);
  uStack_5e8 = *(undefined8 *)(unaff_x20 + 0x220);
  uStack_5f0 = *(undefined8 *)(unaff_x20 + 0x218);
  uStack_5e0 = *(undefined8 *)(unaff_x20 + 0x228);
  uStack_628 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uStack_630 = *puVar2;
  uStack_618 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uStack_620 = *(undefined8 *)(unaff_x20 + 0x1e8);
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x220) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x228) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uStack_b8;
  *puVar2 = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uStack_b0;
  FUN_10358955c(&uStack_c0,auStack_6e8,0x112f79bf0,&UNK_10dbde100);
  FUN_103589c8c(&uStack_630,0x112f79bf0,&UNK_10dbde100);
  func_0x000107c61428(param_1 + 0x230,auStack_6e8,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x230);
  func_0x000107c61428(unaff_x20 + 0x230,auStack_700,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x230);
  *(undefined8 *)(unaff_x20 + 0x230) = uVar19;
  func_0x000107c61434(uVar19);
  func_0x000107c6142c(uVar21);
  func_0x000107c61428(param_1 + 0x238,auStack_718,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x238);
  uVar3 = *(undefined1 *)(param_1 + 0x240);
  func_0x000107c61428(unaff_x20 + 0x238,auStack_730,1,0);
  *(undefined8 *)(unaff_x20 + 0x238) = uVar19;
  *(undefined1 *)(unaff_x20 + 0x240) = uVar3;
  func_0x000107c61428(param_1 + 0x248,auStack_748,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x248);
  uVar3 = *(undefined1 *)(param_1 + 0x250);
  func_0x000107c61428(unaff_x20 + 0x248,auStack_760,1,0);
  *(undefined8 *)(unaff_x20 + 0x248) = uVar19;
  *(undefined1 *)(unaff_x20 + 0x250) = uVar3;
  func_0x000107c61428(param_1 + 600,auStack_778,0,0);
  uVar19 = *(undefined8 *)(param_1 + 600);
  func_0x000107c61428(unaff_x20 + 600,auStack_790,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 600);
  *(undefined8 *)(unaff_x20 + 600) = uVar19;
  func_0x000107c61434(uVar19);
  func_0x000107c6142c(uVar21);
  func_0x000107c61428(param_1 + 0x260,auStack_7a8,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x260);
  func_0x000107c61428(unaff_x20 + 0x260,auStack_7c0,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x260);
  *(undefined8 *)(unaff_x20 + 0x260) = uVar19;
  func_0x000107c61434(uVar19);
  func_0x000107c6142c(uVar21);
  func_0x000107c61428(param_1 + 0x268,auStack_7d8,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x268);
  func_0x000107c61428(unaff_x20 + 0x268,auStack_7f0,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x268);
  *(undefined8 *)(unaff_x20 + 0x268) = uVar19;
  func_0x000107c61434(uVar19);
  func_0x000107c6142c(uVar21);
  func_0x000107c61428(param_1 + 0x270,auStack_808,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x270);
  func_0x000107c61428(unaff_x20 + 0x270,auStack_820,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x270);
  *(undefined8 *)(unaff_x20 + 0x270) = uVar19;
  func_0x000107c61434(uVar19);
  func_0x000107c6142c(uVar21);
  func_0x000107c61428(param_1 + 0x278,auStack_838,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x278);
  func_0x000107c61428(unaff_x20 + 0x278,auStack_850,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x278);
  *(undefined8 *)(unaff_x20 + 0x278) = uVar19;
  func_0x000107c61434(uVar19);
  func_0x000107c6142c(uVar21);
  func_0x000107c61428(param_1 + 0x280,auStack_868,0,0);
  uVar20 = *(undefined8 *)(param_1 + 0x280);
  uVar22 = *(undefined8 *)(param_1 + 0x288);
  uVar28 = *(undefined8 *)(param_1 + 0x290);
  uVar31 = *(undefined8 *)(param_1 + 0x298);
  uVar24 = *(undefined8 *)(param_1 + 0x2a0);
  uVar26 = *(undefined8 *)(param_1 + 0x2a8);
  uVar29 = *(undefined8 *)(param_1 + 0x2b0);
  func_0x000107c61428(unaff_x20 + 0x280,auStack_880,1,0);
  uVar32 = *(undefined8 *)(unaff_x20 + 0x280);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x288);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x290);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x298);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x2a0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x2a8);
  uVar25 = *(undefined8 *)(unaff_x20 + 0x2b0);
  *(undefined8 *)(unaff_x20 + 0x280) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x288) = uVar22;
  *(undefined8 *)(unaff_x20 + 0x290) = uVar28;
  *(undefined8 *)(unaff_x20 + 0x298) = uVar31;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uVar24;
  *(undefined8 *)(unaff_x20 + 0x2a8) = uVar26;
  *(undefined8 *)(unaff_x20 + 0x2b0) = uVar29;
  FUN_1035895a4(uVar20,uVar22,uVar28,uVar31,uVar24,uVar26,uVar29);
  func_0x000103589608(uVar32,uVar15,uVar19,uVar16,uVar21,uVar17,uVar25);
  func_0x000107c61428(param_1 + 0x2b8,auStack_898,0,0);
  uVar20 = *(undefined8 *)(param_1 + 0x2b8);
  uVar22 = *(undefined8 *)(param_1 + 0x2c0);
  uVar28 = *(undefined8 *)(param_1 + 0x2c8);
  uVar31 = *(undefined8 *)(param_1 + 0x2d0);
  uVar24 = *(undefined8 *)(param_1 + 0x2d8);
  uVar26 = *(undefined8 *)(param_1 + 0x2e0);
  uVar29 = *(undefined8 *)(param_1 + 0x2e8);
  func_0x000107c61428(unaff_x20 + 0x2b8,auStack_8b0,1,0);
  uVar32 = *(undefined8 *)(unaff_x20 + 0x2b8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x2c0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x2c8);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x2d0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x2d8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x2e0);
  uVar25 = *(undefined8 *)(unaff_x20 + 0x2e8);
  *(undefined8 *)(unaff_x20 + 0x2b8) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uVar22;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uVar28;
  *(undefined8 *)(unaff_x20 + 0x2d0) = uVar31;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uVar24;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uVar26;
  *(undefined8 *)(unaff_x20 + 0x2e8) = uVar29;
  FUN_1035895a4(uVar20,uVar22,uVar28,uVar31,uVar24,uVar26,uVar29);
  func_0x000103589608(uVar32,uVar15,uVar19,uVar16,uVar21,uVar17,uVar25);
  func_0x000107c61428(param_1 + 0x2f0,auStack_8c8,0,0);
  uVar25 = *(undefined8 *)(param_1 + 0x2f0);
  uVar19 = *(undefined8 *)(param_1 + 0x2f8);
  func_0x000107c61428(unaff_x20 + 0x2f0,auStack_8e0,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x2f8);
  *(undefined8 *)(unaff_x20 + 0x2f0) = uVar25;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uVar19;
  func_0x000107c61434(uVar19);
  func_0x000107c6142c(uVar21);
  func_0x000107c61428(param_1 + 0x300,auStack_8f8,0,0);
  uVar25 = *(undefined8 *)(param_1 + 0x300);
  uVar19 = *(undefined8 *)(param_1 + 0x308);
  func_0x000107c61428(unaff_x20 + 0x300,auStack_910,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x308);
  *(undefined8 *)(unaff_x20 + 0x300) = uVar25;
  *(undefined8 *)(unaff_x20 + 0x308) = uVar19;
  func_0x000107c61434(uVar19);
  func_0x000107c6142c(uVar21);
  func_0x000107c61428(param_1 + 0x310,auStack_928,0,0);
  uVar19 = *(undefined8 *)(param_1 + 0x310);
  func_0x000107c61428(unaff_x20 + 0x310,auStack_940,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x310);
  *(undefined8 *)(unaff_x20 + 0x310) = uVar19;
  func_0x000107c61434(uVar19);
  func_0x000107c6142c(uVar21);
  func_0x000107c61428(param_1 + 0x318,auStack_958,0,0);
  uVar21 = *(undefined8 *)(param_1 + 0x318);
  func_0x000107c61434(uVar21);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x318,auStack_970,1,0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x318);
  *(undefined8 *)(unaff_x20 + 0x318) = uVar21;
  func_0x000107c6142c(uVar19);
  return;
}



/* Entry: 103584984; end: 103584b4b;  */

void FUN_103584984(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000101553bdc(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x110));
  FUN_103589b1c(*(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                *(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                *(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140),
                *(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                *(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                *(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                *(undefined8 *)(unaff_x20 + 0x178));
  func_0x000103589bb4(*(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                      *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                      *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                      *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                      *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                      *(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000103589bb4(*(undefined8 *)(unaff_x20 + 0x1d8),*(undefined8 *)(unaff_x20 + 0x1e0),
                      *(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                      *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                      *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                      *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                      *(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000103589608(*(undefined8 *)(unaff_x20 + 0x280),*(undefined8 *)(unaff_x20 + 0x288),
                      *(undefined8 *)(unaff_x20 + 0x290),*(undefined8 *)(unaff_x20 + 0x298),
                      *(undefined8 *)(unaff_x20 + 0x2a0),*(undefined8 *)(unaff_x20 + 0x2a8),
                      *(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000103589608(*(undefined8 *)(unaff_x20 + 0x2b8),*(undefined8 *)(unaff_x20 + 0x2c0),
                      *(undefined8 *)(unaff_x20 + 0x2c8),*(undefined8 *)(unaff_x20 + 0x2d0),
                      *(undefined8 *)(unaff_x20 + 0x2d8),*(undefined8 *)(unaff_x20 + 0x2e0),
                      *(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x318));
  return;
}



/* Entry: 103584b4c; end: 103584bdb;  */

void FUN_103584b4c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    FUN_10358953c(0);
    func_0x000107c613fc();
    FUN_103583bb8(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_103584bdc();
  return;
}



/* Entry: 103584bdc; end: 1035850b3;  */

/* WARNING: Removing unreachable block (ram,0x000103584fb8) */
/* WARNING: Removing unreachable block (ram,0x000103584d50) */
/* WARNING: Removing unreachable block (ram,0x000103584f9c) */
/* WARNING: Removing unreachable block (ram,0x000103585040) */
/* WARNING: Removing unreachable block (ram,0x000103584e38) */
/* WARNING: Removing unreachable block (ram,0x000103584d34) */
/* WARNING: Removing unreachable block (ram,0x000103584da4) */
/* WARNING: Removing unreachable block (ram,0x000103584d6c) */
/* WARNING: Removing unreachable block (ram,0x000103585094) */
/* WARNING: Removing unreachable block (ram,0x000103584e54) */
/* WARNING: Removing unreachable block (ram,0x000103584cfc) */
/* WARNING: Removing unreachable block (ram,0x000103584de4) */
/* WARNING: Removing unreachable block (ram,0x0001035850b0) */
/* WARNING: Removing unreachable block (ram,0x000103584f64) */
/* WARNING: Removing unreachable block (ram,0x000103584e00) */
/* WARNING: Removing unreachable block (ram,0x000103585078) */
/* WARNING: Removing unreachable block (ram,0x000103584d18) */
/* WARNING: Removing unreachable block (ram,0x00010358505c) */
/* WARNING: Removing unreachable block (ram,0x000103584f80) */
/* WARNING: Removing unreachable block (ram,0x000103584e1c) */
/* WARNING: Removing unreachable block (ram,0x000103584f24) */
/* WARNING: Removing unreachable block (ram,0x000103584d88) */

void FUN_103584bdc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        func_0x000107c61428(param_1 + 0x10,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x10;
        goto code_r0x000103584c64;
      case 2:
        func_0x000107c61428(param_1 + 0x20,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x20;
        goto code_r0x000103584c64;
      case 3:
        func_0x000107c61428(param_1 + 0x30,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x30;
        goto code_r0x000103584c64;
      case 4:
        func_0x000107c61428(param_1 + 0x40,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x40;
        goto code_r0x000103584c64;
      case 5:
        func_0x000107c61428(param_1 + 0x50,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x50;
        goto code_r0x000103584c64;
      case 6:
        FUN_1035850b4(param_2,param_1,param_3,param_4);
        break;
      case 7:
        FUN_103585148(param_2,param_1,param_3,param_4);
        break;
      case 8:
        func_0x000107c61428(param_1 + 0x98,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x98;
        goto code_r0x000103584c64;
      case 9:
        func_0x000107c61428(param_1 + 0xa8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0xa8;
        goto code_r0x000103584c64;
      case 10:
        func_0x000107c61428(param_1 + 0xb8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0xb8;
        goto code_r0x000103584c64;
      case 0xb:
        func_0x000107c61428(param_1 + 200,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 200;
        goto code_r0x000103584c64;
      case 0xd:
        func_0x000107c61428(param_1 + 0xd8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0xd8;
        goto code_r0x000103584c64;
      case 0xe:
        FUN_1035851dc(param_2,param_1,param_3,param_4);
        break;
      case 0xf:
        FUN_103585270(param_2,param_1,param_3,param_4);
        break;
      case 0x10:
        FUN_103585304(param_2,param_1,param_3,param_4);
        break;
      case 0x11:
        FUN_103585398(param_2,param_1,param_3,param_4);
        break;
      case 0x12:
        FUN_10358542c(param_2,param_1,param_3,param_4);
        break;
      case 0x13:
        FUN_1035854c0(param_2,param_1,param_3,param_4);
        break;
      case 0x14:
        FUN_103585554(param_2,param_1,param_3,param_4);
        break;
      case 0x15:
        FUN_1035855e8(param_2,param_1,param_3,param_4);
        break;
      case 0x16:
        FUN_10358567c(param_2,param_1,param_3,param_4);
        break;
      case 0x17:
        FUN_10358571c(param_2,param_1,param_3,param_4);
        break;
      case 0x18:
        FUN_1035857b0(param_2,param_1,param_3,param_4);
        break;
      case 0x19:
        FUN_103585844(param_2,param_1,param_3,param_4);
        break;
      case 0x1a:
        FUN_1035858d8(param_2,param_1,param_3,param_4);
        break;
      case 0x1b:
        FUN_10358596c(param_2,param_1,param_3,param_4);
        break;
      case 0x1c:
        FUN_103585a00(param_2,param_1,param_3,param_4);
        break;
      case 0x1d:
        FUN_103585a94(param_2,param_1,param_3,param_4);
        break;
      case 0x1e:
        FUN_103585b28(param_2,param_1,param_3,param_4);
        break;
      case 0x1f:
        FUN_103585bbc(param_2,param_1,param_3,param_4);
        break;
      case 0x20:
        func_0x000107c61428(param_1 + 0x2f0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x2f0;
        goto code_r0x000103584c64;
      case 0x21:
        func_0x000107c61428(param_1 + 0x300,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x300;
code_r0x000103584c64:
        (*pcVar3)(lVar2,param_3,param_4);
        func_0x000107c614a8(auStack_68);
        break;
      case 0x22:
        FUN_103585c50(param_2,param_1,param_3,param_4);
        break;
      case 0x23:
        FUN_103585ce4(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035850b4; end: 103585147;  */

void FUN_1035850b4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x60;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103583154();
  (*pcVar2)(param_2 + 0x60,&UNK_110666e90,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103585148; end: 1035851db;  */

void FUN_103585148(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x70;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015cabb8();
  (*pcVar2)(param_2 + 0x70,&UNK_110679698,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035851dc; end: 10358526f;  */

void FUN_1035851dc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xe8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103583194();
  (*pcVar2)(param_2 + 0xe8,&UNK_1106670c0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103585270; end: 103585303;  */

void FUN_103585270(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xf8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x0001015cabb8();
  (*pcVar2)(param_2 + 0xf8,&UNK_110679698,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103585304; end: 103585397;  */

void FUN_103585304(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x100;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x0001015cabb8();
  (*pcVar2)(param_2 + 0x100,&UNK_110679698,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103585398; end: 10358542b;  */

void FUN_103585398(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x108;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_103589d3c();
  (*pcVar2)(param_2 + 0x108,&UNK_1106679c0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358542c; end: 1035854bf;  */

void FUN_10358542c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x110;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_103589d3c();
  (*pcVar2)(param_2 + 0x110,&UNK_1106679c0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035854c0; end: 103585553;  */

void FUN_1035854c0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x118;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103589ebc();
  (*pcVar2)(param_2 + 0x118,&UNK_110667d40,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103585554; end: 1035855e7;  */

void FUN_103585554(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x180;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103589e7c();
  (*pcVar2)(param_2 + 0x180,&UNK_110667660,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035855e8; end: 10358567b;  */

void FUN_1035855e8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1d8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103589e7c();
  (*pcVar2)(param_2 + 0x1d8,&UNK_110667660,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358567c; end: 10358571b;  */

void FUN_10358567c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x230,auStack_58,0x21,0);
  (**(code **)(param_4 + 0x1b8))
            (param_2 + 0x230,&UNK_110787f98,&UNK_110787f98,&PTR_DAT_110787db0,&PTR_DAT_110787dc8,
             param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358571c; end: 1035857af;  */

void FUN_10358571c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x238;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103589dfc();
  (*pcVar2)(param_2 + 0x238,&UNK_110667370,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035857b0; end: 103585843;  */

void FUN_1035857b0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x248;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103589dfc();
  (*pcVar2)(param_2 + 0x248,&UNK_110667370,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103585844; end: 1035858d7;  */

void FUN_103585844(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 600;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_103589d3c();
  (*pcVar2)(param_2 + 600,&UNK_1106679c0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035858d8; end: 10358596b;  */

void FUN_1035858d8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x260;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_103589d3c();
  (*pcVar2)(param_2 + 0x260,&UNK_1106679c0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358596c; end: 1035859ff;  */

void FUN_10358596c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x268;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_103589d3c();
  (*pcVar2)(param_2 + 0x268,&UNK_1106679c0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103585a00; end: 103585a93;  */

void FUN_103585a00(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x270;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000103589d7c();
  (*pcVar2)(param_2 + 0x270,&UNK_110667468,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103585a94; end: 103585b27;  */

void FUN_103585a94(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x278;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000103589d7c();
  (*pcVar2)(param_2 + 0x278,&UNK_110667468,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103585b28; end: 103585bbb;  */

void FUN_103585b28(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x280;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103589e3c();
  (*pcVar2)(param_2 + 0x280,&UNK_110667810,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103585bbc; end: 103585c4f;  */

void FUN_103585bbc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x2b8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103589e3c();
  (*pcVar2)(param_2 + 0x2b8,&UNK_110667810,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103585c50; end: 103585ce3;  */

void FUN_103585c50(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x310;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000103589dbc();
  (*pcVar2)(param_2 + 0x310,&UNK_110667b90,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103585ce4; end: 103585d77;  */

void FUN_103585ce4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x318;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000103589dbc();
  (*pcVar2)(param_2 + 0x318,&UNK_110667b90,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103585d78; end: 103585de3;  */

void FUN_103585d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_103585de4(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 103585de4; end: 1035869d7;  */

void FUN_103585de4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long unaff_x21;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  long lStack_230;
  undefined1 uStack_228;
  long lStack_218;
  undefined1 uStack_210;
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  long lStack_188;
  undefined1 uStack_180;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  long lStack_f8;
  undefined1 uStack_f0;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x18);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar2,uVar4,1,param_3,param_4);
    if (unaff_x21 != 0) goto LAB_103586004;
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c61428(param_1 + 0x20,auStack_80,0,0);
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(ulong *)(param_1 + 0x28);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar2,uVar4,2,param_3,param_4);
    if (unaff_x21 != 0) goto LAB_103586004;
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c61428(param_1 + 0x30,auStack_98,0,0);
  uVar2 = *(ulong *)(param_1 + 0x30);
  uVar4 = *(ulong *)(param_1 + 0x38);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar2,uVar4,3,param_3,param_4);
    if (unaff_x21 != 0) goto LAB_103586004;
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c61428(param_1 + 0x40,auStack_b0,0,0);
  uVar2 = *(ulong *)(param_1 + 0x40);
  uVar4 = *(ulong *)(param_1 + 0x48);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar2,uVar4,4,param_3,param_4);
    if (unaff_x21 != 0) goto LAB_103586004;
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c61428(param_1 + 0x50,auStack_c8,0,0);
  uVar2 = *(ulong *)(param_1 + 0x50);
  uVar4 = *(ulong *)(param_1 + 0x58);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar2,uVar4,5,param_3,param_4);
    if (unaff_x21 != 0) goto LAB_103586004;
    func_0x000107c6142c(uVar4);
  }
  lVar3 = param_1 + 0x60;
  func_0x000107c61428(lVar3,auStack_e0,0,0);
  if (*(long *)(param_1 + 0x60) != 0) {
    uStack_f0 = *(undefined1 *)(param_1 + 0x68);
    pcVar5 = *(code **)(param_4 + 0x80);
    lStack_f8 = *(long *)(param_1 + 0x60);
    func_0x000103583154();
    (*pcVar5)(&lStack_f8,6,&UNK_110666e90,lVar3,param_3,param_4);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_1035869d8(param_1,param_2,param_3,param_4);
  if (unaff_x21 != 0) {
    return;
  }
  func_0x000107c61428(param_1 + 0x98,&lStack_f8,0,0);
  uVar2 = *(ulong *)(param_1 + 0x98);
  uVar4 = *(ulong *)(param_1 + 0xa0);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar2,uVar4,8,param_3,param_4);
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c61428(param_1 + 0xa8,auStack_110,0,0);
  uVar2 = *(ulong *)(param_1 + 0xa8);
  uVar4 = *(ulong *)(param_1 + 0xb0);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar2,uVar4,9,param_3,param_4);
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c61428(param_1 + 0xb8,auStack_128,0,0);
  uVar2 = *(ulong *)(param_1 + 0xb8);
  uVar4 = *(ulong *)(param_1 + 0xc0);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar2,uVar4,10,param_3,param_4);
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c61428(param_1 + 200,auStack_140,0,0);
  uVar2 = *(ulong *)(param_1 + 200);
  uVar4 = *(ulong *)(param_1 + 0xd0);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar2,uVar4,0xb,param_3,param_4);
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c61428(param_1 + 0xd8,auStack_158,0,0);
  uVar2 = *(ulong *)(param_1 + 0xd8);
  uVar4 = *(ulong *)(param_1 + 0xe0);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar2,uVar4,0xd,param_3,param_4);
    func_0x000107c6142c(uVar4);
  }
  lVar3 = param_1 + 0xe8;
  func_0x000107c61428(lVar3,auStack_170,0,0);
  if (*(long *)(param_1 + 0xe8) != 0) {
    uStack_180 = *(undefined1 *)(param_1 + 0xf0);
    pcVar5 = *(code **)(param_4 + 0x80);
    lStack_188 = *(long *)(param_1 + 0xe8);
    func_0x000103583194();
    (*pcVar5)(&lStack_188,0xe,&UNK_1106670c0,lVar3,param_3,param_4);
  }
  func_0x000107c61428(param_1 + 0xf8,&lStack_188,0,0);
  lVar3 = *(long *)(param_1 + 0xf8);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    func_0x0001015cabb8();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x100,auStack_1a0,0,0);
  lVar3 = *(long *)(param_1 + 0x100);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    func_0x0001015cabb8();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x108,auStack_1b8,0,0);
  lVar3 = *(long *)(param_1 + 0x108);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    FUN_103589d3c();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x110,auStack_1d0,0,0);
  lVar3 = *(long *)(param_1 + 0x110);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    FUN_103589d3c();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  FUN_103586a84(param_1,param_2,param_3,param_4);
  FUN_103586b44(param_1,param_2,param_3,param_4);
  FUN_103586c00(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0x230,auStack_1e8,0,0);
  lVar3 = *(long *)(param_1 + 0x230);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x198);
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  lVar3 = param_1 + 0x238;
  func_0x000107c61428(lVar3,auStack_200,0,0);
  if (*(long *)(param_1 + 0x238) != 0) {
    uStack_210 = *(undefined1 *)(param_1 + 0x240);
    pcVar5 = *(code **)(param_4 + 0x80);
    lStack_218 = *(long *)(param_1 + 0x238);
    func_0x000103589dfc();
    (*pcVar5)(&lStack_218,0x17,&UNK_110667370,lVar3,param_3,param_4);
  }
  lVar3 = param_1 + 0x248;
  func_0x000107c61428(lVar3,&lStack_218,0,0);
  if (*(long *)(param_1 + 0x248) != 0) {
    uStack_228 = *(undefined1 *)(param_1 + 0x250);
    pcVar5 = *(code **)(param_4 + 0x80);
    lStack_230 = *(long *)(param_1 + 0x248);
    func_0x000103589dfc();
    (*pcVar5)(&lStack_230,0x18,&UNK_110667370,lVar3,param_3,param_4);
  }
  func_0x000107c61428(param_1 + 600,&lStack_230,0,0);
  lVar3 = *(long *)(param_1 + 600);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    FUN_103589d3c();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x260,auStack_248,0,0);
  lVar3 = *(long *)(param_1 + 0x260);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    FUN_103589d3c();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x268,auStack_260,0,0);
  lVar3 = *(long *)(param_1 + 0x268);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    FUN_103589d3c();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x270,auStack_278,0,0);
  lVar3 = *(long *)(param_1 + 0x270);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    func_0x000103589d7c();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x278,auStack_290,0,0);
  lVar3 = *(long *)(param_1 + 0x278);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    func_0x000103589d7c();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  FUN_103586cc0(param_1,param_2,param_3,param_4);
  FUN_103586d6c(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0x2f0,auStack_2a8,0,0);
  uVar2 = *(ulong *)(param_1 + 0x2f0);
  uVar4 = *(ulong *)(param_1 + 0x2f8);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar2,uVar4,0x20,param_3,param_4);
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c61428(param_1 + 0x300,auStack_2c0,0,0);
  uVar2 = *(ulong *)(param_1 + 0x300);
  uVar4 = *(ulong *)(param_1 + 0x308);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar2,uVar4,0x21,param_3,param_4);
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c61428(param_1 + 0x310,auStack_2d8,0,0);
  lVar3 = *(long *)(param_1 + 0x310);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    func_0x000103589dbc();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x318,auStack_2f0,0,0);
  uVar4 = *(ulong *)(param_1 + 0x318);
  if (*(long *)(uVar4 + 0x10) == 0) {
    return;
  }
  pcVar5 = *(code **)(param_4 + 0x118);
  func_0x000103589dbc();
  func_0x000107c61434(uVar4);
  (*pcVar5)();
LAB_103586004:
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 1035869d8; end: 103586a83;  */

void FUN_1035869d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_80;
  undefined1 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x70;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x80);
  if (lStack_70 != 0) {
    uStack_80 = *(undefined8 *)(param_1 + 0x70);
    uStack_78 = (undefined1)*(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x90);
    uStack_68 = *(undefined8 *)(param_1 + 0x88);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015cabb8();
    (*pcVar2)(&uStack_80,7,&UNK_110679698,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103586a84; end: 103586b43;  */

void FUN_103586a84(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_c0;
  long lStack_b8;
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
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x118;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_b8 = *(long *)(param_1 + 0x120);
  if (lStack_b8 != 0) {
    uStack_c0 = *(undefined8 *)(param_1 + 0x118);
    uStack_88 = *(undefined8 *)(param_1 + 0x150);
    uStack_90 = *(undefined8 *)(param_1 + 0x148);
    uStack_78 = *(undefined8 *)(param_1 + 0x160);
    uStack_80 = *(undefined8 *)(param_1 + 0x158);
    uStack_68 = *(undefined8 *)(param_1 + 0x170);
    uStack_70 = *(undefined8 *)(param_1 + 0x168);
    uStack_60 = *(undefined8 *)(param_1 + 0x178);
    uStack_a8 = *(undefined8 *)(param_1 + 0x130);
    uStack_b0 = *(undefined8 *)(param_1 + 0x128);
    uStack_98 = *(undefined8 *)(param_1 + 0x140);
    uStack_a0 = *(undefined8 *)(param_1 + 0x138);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103589ebc();
    (*pcVar2)(&uStack_c0,0x13,&UNK_110667d40,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103586b44; end: 103586bff;  */

void FUN_103586b44(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x180;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_a8 = *(ulong *)(param_1 + 0x188);
  if (uStack_a8 >> 0x3c < 0xf) {
    uStack_b0 = *(undefined8 *)(param_1 + 0x180);
    uStack_78 = *(undefined8 *)(param_1 + 0x1b8);
    uStack_80 = *(undefined8 *)(param_1 + 0x1b0);
    uStack_68 = *(undefined8 *)(param_1 + 0x1c8);
    uStack_70 = *(undefined8 *)(param_1 + 0x1c0);
    uStack_60 = *(undefined8 *)(param_1 + 0x1d0);
    uStack_98 = *(undefined8 *)(param_1 + 0x198);
    uStack_a0 = *(undefined8 *)(param_1 + 400);
    uStack_88 = *(undefined8 *)(param_1 + 0x1a8);
    uStack_90 = *(undefined8 *)(param_1 + 0x1a0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103589e7c();
    (*pcVar2)(&uStack_b0,0x14,&UNK_110667660,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103586c00; end: 103586cbf;  */

void FUN_103586c00(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1d8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_a8 = *(ulong *)(param_1 + 0x1e0);
  if (uStack_a8 >> 0x3c < 0xf) {
    uStack_b0 = *(undefined8 *)(param_1 + 0x1d8);
    uStack_78 = *(undefined8 *)(param_1 + 0x210);
    uStack_80 = *(undefined8 *)(param_1 + 0x208);
    uStack_68 = *(undefined8 *)(param_1 + 0x220);
    uStack_70 = *(undefined8 *)(param_1 + 0x218);
    uStack_60 = *(undefined8 *)(param_1 + 0x228);
    uStack_98 = *(undefined8 *)(param_1 + 0x1f0);
    uStack_a0 = *(undefined8 *)(param_1 + 0x1e8);
    uStack_88 = *(undefined8 *)(param_1 + 0x200);
    uStack_90 = *(undefined8 *)(param_1 + 0x1f8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103589e7c();
    (*pcVar2)(&uStack_b0,0x15,&UNK_110667660,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103586cc0; end: 103586d6b;  */

void FUN_103586cc0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x280;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_88 = *(long *)(param_1 + 0x288);
  if (lStack_88 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x2b0);
    uStack_90 = *(undefined8 *)(param_1 + 0x280);
    uStack_78 = *(undefined8 *)(param_1 + 0x298);
    uStack_80 = *(undefined8 *)(param_1 + 0x290);
    uStack_68 = *(undefined8 *)(param_1 + 0x2a8);
    uStack_70 = *(undefined8 *)(param_1 + 0x2a0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103589e3c();
    (*pcVar2)(&uStack_90,0x1e,&UNK_110667810,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103586d6c; end: 103586e1b;  */

void FUN_103586d6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x2b8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_88 = *(long *)(param_1 + 0x2c0);
  if (lStack_88 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x2e8);
    uStack_90 = *(undefined8 *)(param_1 + 0x2b8);
    uStack_78 = *(undefined8 *)(param_1 + 0x2d0);
    uStack_80 = *(undefined8 *)(param_1 + 0x2c8);
    uStack_68 = *(undefined8 *)(param_1 + 0x2e0);
    uStack_70 = *(undefined8 *)(param_1 + 0x2d8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103589e3c();
    (*pcVar2)(&uStack_90,0x1f,&UNK_110667810,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103586e1c; end: 103586ecb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103586e1c(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                    ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
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
  undefined1 auVar39 [16];
  
  if (param_3 != param_6) {
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_6);
    uVar17 = param_3;
    FUN_103586ecc(param_3,param_6);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_3);
    if ((uVar17 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)param_2 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_5 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_1;
    pbVar11 = param_2;
    if ((ulong)param_2 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_1 != (byte *)0x0) || (param_2 != (byte *)0xc000000000000000)) ||
          (param_5 >> 0x3e < 3)) || ((uVar17 = 0, param_4 != 0 || (param_5 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar17 = (ulong)(iVar16 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar18 == 0) {
        uVar19 = param_5 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar16 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar16,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_4)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar17 = 0;
      if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar17 < 1) goto code_r0x000100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)param_1;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_1 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_1 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_1 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_1 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_1 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_1 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_1 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_2;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_2 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_2 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_2 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_2 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_2 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_2 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_1 >> 0x20) - (long)unaff_x25);
          if ((long)param_1 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_2;
          if (param_1 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_1 = (byte *)0x0;
          }
          else {
            pbVar11 = param_1;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_1 = param_1 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_1;
            if (param_1 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_1;
              goto code_r0x000100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar21 = *(long *)(param_1 + 0x10);
          unaff_x24 = *(byte **)(param_1 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_1;
          if (param_1 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_1 = param_1 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_1;
          unaff_x25 = param_2;
          if (param_1 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_1;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_2 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,param_4
                            ,param_5);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_5;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar10 = *(byte **)pbVar8;
    param_1 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_2 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_1;
    if (bVar23 < 3) {
      if (bVar23 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          return (byte *)(ulong)((uint)pbVar10 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar23 == 1) {
        if (pbVar11[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar14 = *(byte **)(pbVar11 + 0x10);
        lVar21 = *(long *)pbVar11;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar21,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 == pbVar13) && (param_2 == pbVar14)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar11[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        lVar21 = *(long *)(pbVar11 + 0x18);
        if ((pbVar10 == pbVar13) && (param_1 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar21 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar21);
          func_0x000107c61174();
          pbVar11 = pbVar20;
          func_0x000107c60118();
          func_0x000107c61170(pbVar20);
          func_0x000107c61170(lVar21);
          pbVar20 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar20 & 1) == 0) {
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
      )(pbVar10,pbVar12,pbVar13,pbVar14,0);
      return pbVar10;
    }
    lVar22 = *(long *)(pbVar8 + 0x20);
    if (bVar23 < 5) {
      if (bVar23 != 3) {
        if (pbVar11[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        if (((pbVar10 == pbVar13) && (param_1 == pbVar14)) &&
           (pbVar10 = param_2, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_2 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar11[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar14 = *(byte **)(pbVar11 + 0x10);
      lVar21 = *(long *)(pbVar11 + 0x20);
      if (param_2 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 != pbVar13) || (param_2 != pbVar14)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar21 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar21 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar23 != 5) {
      if ((((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_2 == (byte *)0x0) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar11 + 0x20);
        lVar21 = *(long *)(pbVar11 + 0x18);
        bVar23 = pbVar11[8] | (byte)lVar21;
        bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
        bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
        bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
        bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
        bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
        bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
        bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
        bVar31 = pbVar11[0x10] | (byte)lVar22;
        bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar39[1] = bVar24;
        auVar39[0] = bVar23;
        auVar39[2] = bVar25;
        auVar39[3] = bVar26;
        auVar39[4] = bVar27;
        auVar39[5] = bVar28;
        auVar39[6] = bVar29;
        auVar39[7] = bVar30;
        auVar39[8] = bVar31;
        auVar39[9] = bVar32;
        auVar39[10] = bVar33;
        auVar39[0xb] = bVar34;
        auVar39[0xc] = bVar35;
        auVar39[0xd] = bVar36;
        auVar39[0xe] = bVar37;
        auVar39[0xf] = bVar38;
        auVar3[1] = bVar24;
        auVar3[0] = bVar23;
        auVar3[2] = bVar25;
        auVar3[3] = bVar26;
        auVar3[4] = bVar27;
        auVar3[5] = bVar28;
        auVar3[6] = bVar29;
        auVar3[7] = bVar30;
        auVar3[8] = bVar31;
        auVar3[9] = bVar32;
        auVar3[10] = bVar33;
        auVar3[0xb] = bVar34;
        auVar3[0xc] = bVar35;
        auVar3[0xd] = bVar36;
        auVar3[0xe] = bVar37;
        auVar3[0xf] = bVar38;
        auVar39 = NEON_ext(auVar39,auVar3,8,1);
        if (CONCAT17(bVar30 | auVar39[7],
                     CONCAT16(bVar29 | auVar39[6],
                              CONCAT15(bVar28 | auVar39[5],
                                       CONCAT14(bVar27 | auVar39[4],
                                                CONCAT13(bVar26 | auVar39[3],
                                                         CONCAT12(bVar25 | auVar39[2],
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && param_2 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar11 + 0x20);
      lVar21 = *(long *)(pbVar11 + 0x18);
      bVar23 = pbVar11[8] | (byte)lVar21;
      bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
      bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
      bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
      bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
      bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
      bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
      bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
      bVar31 = pbVar11[0x10] | (byte)lVar22;
      bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar24;
      auVar1[0] = bVar23;
      auVar1[2] = bVar25;
      auVar1[3] = bVar26;
      auVar1[4] = bVar27;
      auVar1[5] = bVar28;
      auVar1[6] = bVar29;
      auVar1[7] = bVar30;
      auVar1[8] = bVar31;
      auVar1[9] = bVar32;
      auVar1[10] = bVar33;
      auVar1[0xb] = bVar34;
      auVar1[0xc] = bVar35;
      auVar1[0xd] = bVar36;
      auVar1[0xe] = bVar37;
      auVar1[0xf] = bVar38;
      auVar2[1] = bVar24;
      auVar2[0] = bVar23;
      auVar2[2] = bVar25;
      auVar2[3] = bVar26;
      auVar2[4] = bVar27;
      auVar2[5] = bVar28;
      auVar2[6] = bVar29;
      auVar2[7] = bVar30;
      auVar2[8] = bVar31;
      auVar2[9] = bVar32;
      auVar2[10] = bVar33;
      auVar2[0xb] = bVar34;
      auVar2[0xc] = bVar35;
      auVar2[0xd] = bVar36;
      auVar2[0xe] = bVar37;
      auVar2[0xf] = bVar38;
      auVar39 = NEON_ext(auVar1,auVar2,8,1);
      lVar21 = CONCAT17(bVar30 | auVar39[7],
                        CONCAT16(bVar29 | auVar39[6],
                                 CONCAT15(bVar28 | auVar39[5],
                                          CONCAT14(bVar27 | auVar39[4],
                                                   CONCAT13(bVar26 | auVar39[3],
                                                            CONCAT12(bVar25 | auVar39[2],
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_4 = *(long *)(pbVar11 + 8);
    param_5 = *(ulong *)(pbVar11 + 0x10);
    lVar21 = *(long *)pbVar11;
    uVar9 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar10,lVar21,uVar9);
    if (((ulong)pbVar10 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103586ecc; end: 10358878b;  */

uint FUN_103586ecc(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c88;
  long lStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c30;
  ulong uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined1 auStack_bd0 [24];
  undefined1 auStack_bb8 [24];
  undefined1 auStack_ba0 [24];
  undefined1 auStack_b88 [24];
  undefined1 auStack_b70 [24];
  undefined1 auStack_b58 [24];
  undefined1 auStack_b40 [24];
  undefined1 auStack_b28 [24];
  undefined1 auStack_b10 [24];
  undefined1 auStack_af8 [24];
  undefined1 auStack_ae0 [24];
  undefined1 auStack_ac8 [24];
  undefined1 auStack_ab0 [24];
  undefined1 auStack_a98 [24];
  undefined1 auStack_a80 [24];
  undefined1 auStack_a68 [24];
  undefined1 auStack_a50 [24];
  undefined1 auStack_a38 [24];
  undefined1 auStack_a20 [24];
  undefined1 auStack_a08 [24];
  undefined1 auStack_9f0 [24];
  undefined1 auStack_9d8 [24];
  undefined1 auStack_9c0 [24];
  undefined1 auStack_9a8 [24];
  undefined1 auStack_990 [24];
  undefined1 auStack_978 [24];
  undefined1 auStack_960 [24];
  undefined1 auStack_948 [24];
  undefined8 uStack_930;
  ulong uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d0;
  ulong uStack_8c8;
  undefined8 uStack_8c0;
  long lStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined1 auStack_870 [24];
  undefined1 auStack_858 [24];
  undefined8 uStack_840;
  ulong uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e0;
  ulong uStack_7d8;
  undefined8 uStack_7d0;
  long lStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_780;
  ulong uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  ulong uStack_720;
  undefined8 uStack_718;
  long lStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  ulong uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  ulong uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  ulong uStack_650;
  undefined8 uStack_648;
  long lStack_640;
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
  undefined1 auStack_5e0 [24];
  undefined1 auStack_5c8 [24];
  undefined8 uStack_5b0;
  ulong uStack_5a8;
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
  ulong uStack_550;
  undefined8 uStack_540;
  long lStack_538;
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
  undefined1 auStack_4d8 [24];
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [24];
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [24];
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [24];
  undefined8 uStack_298;
  long lStack_290;
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
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x000107c61428(param_1 + 0x10,auStack_2b0,0,0);
  func_0x000107c61428(param_2 + 0x10,&uStack_6b0,0x20,0);
  uVar19 = *(ulong *)(param_1 + 0x10);
  if (uVar19 == *(ulong *)(param_2 + 0x10) && *(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18)
     ) {
    func_0x000107c614a8(&uStack_6b0);
LAB_103586f54:
    func_0x000107c61428(param_1 + 0x20,auStack_2c8,0,0);
    func_0x000107c61428(param_2 + 0x20,&uStack_6b0,0x20,0);
    uVar19 = *(ulong *)(param_1 + 0x20);
    if ((uVar19 == *(ulong *)(param_2 + 0x20)) &&
       (*(long *)(param_1 + 0x28) == *(long *)(param_2 + 0x28))) {
      func_0x000107c614a8(&uStack_6b0);
    }
    else {
      func_0x000107c605b8();
      func_0x000107c614a8(&uStack_6b0);
      if ((uVar19 & 1) == 0) goto LAB_103587e6c;
    }
    func_0x000107c61428(param_1 + 0x30,auStack_2e0,0,0);
    func_0x000107c61428(param_2 + 0x30,&uStack_6b0,0x20,0);
    uVar19 = *(ulong *)(param_1 + 0x30);
    if ((uVar19 == *(ulong *)(param_2 + 0x30)) &&
       (*(long *)(param_1 + 0x38) == *(long *)(param_2 + 0x38))) {
      func_0x000107c614a8(&uStack_6b0);
    }
    else {
      func_0x000107c605b8();
      func_0x000107c614a8(&uStack_6b0);
      if ((uVar19 & 1) == 0) goto LAB_103587e6c;
    }
    func_0x000107c61428(param_1 + 0x40,auStack_2f8,0,0);
    func_0x000107c61428(param_2 + 0x40,&uStack_6b0,0x20,0);
    uVar19 = *(ulong *)(param_1 + 0x40);
    if ((uVar19 == *(ulong *)(param_2 + 0x40)) &&
       (*(long *)(param_1 + 0x48) == *(long *)(param_2 + 0x48))) {
      func_0x000107c614a8(&uStack_6b0);
    }
    else {
      func_0x000107c605b8();
      func_0x000107c614a8(&uStack_6b0);
      if ((uVar19 & 1) == 0) goto LAB_103587e6c;
    }
    func_0x000107c61428(param_1 + 0x50,auStack_310,0,0);
    func_0x000107c61428(param_2 + 0x50,&uStack_6b0,0x20,0);
    uVar19 = *(ulong *)(param_1 + 0x50);
    if ((uVar19 == *(ulong *)(param_2 + 0x50)) &&
       (*(long *)(param_1 + 0x58) == *(long *)(param_2 + 0x58))) {
      func_0x000107c614a8(&uStack_6b0);
    }
    else {
      func_0x000107c605b8();
      func_0x000107c614a8(&uStack_6b0);
      if ((uVar19 & 1) == 0) goto LAB_103587e6c;
    }
    func_0x000107c61428(param_1 + 0x60,auStack_328,0,0);
    lVar13 = *(long *)(param_1 + 0x60);
    func_0x000107c61428(param_2 + 0x60,auStack_340,0,0);
    lVar10 = *(long *)(param_2 + 0x60);
    if (*(char *)(param_2 + 0x68) == '\x01') {
      if (lVar10 < 2) {
        if (lVar10 == 0) {
          if (lVar13 == 0) {
LAB_10358713c:
            func_0x000107c61428(param_1 + 0x70,auStack_358,0,0);
            func_0x000107c61428(param_2 + 0x70,auStack_370,0,0);
            uVar15 = *(undefined8 *)(param_1 + 0x70);
            uVar6 = *(undefined8 *)(param_1 + 0x78);
            lVar10 = *(long *)(param_1 + 0x80);
            uVar7 = *(undefined8 *)(param_1 + 0x88);
            uVar11 = *(undefined8 *)(param_1 + 0x90);
            uVar5 = *(undefined8 *)(param_2 + 0x70);
            uVar8 = *(undefined8 *)(param_2 + 0x78);
            lVar13 = *(long *)(param_2 + 0x80);
            uVar9 = *(undefined8 *)(param_2 + 0x88);
            uVar18 = *(undefined8 *)(param_2 + 0x90);
            if (lVar10 == 0) {
              if (lVar13 != 0) goto LAB_103587234;
              func_0x000101541428(uVar15,uVar6,0,uVar7,uVar11);
              func_0x000101541428(uVar5,uVar8,0,uVar9,uVar18);
              func_0x000101553bdc(uVar15,uVar6,0,uVar7,uVar11);
LAB_103587308:
              func_0x000107c61428(param_1 + 0x98,auStack_388,0,0);
              func_0x000107c61428(param_2 + 0x98,&uStack_6b0,0x20,0);
              uVar19 = *(ulong *)(param_1 + 0x98);
              if ((uVar19 == *(ulong *)(param_2 + 0x98)) &&
                 (*(long *)(param_1 + 0xa0) == *(long *)(param_2 + 0xa0))) {
                func_0x000107c614a8(&uStack_6b0);
              }
              else {
                func_0x000107c605b8();
                func_0x000107c614a8(&uStack_6b0);
                if ((uVar19 & 1) == 0) goto LAB_103587e6c;
              }
              func_0x000107c61428(param_1 + 0xa8,auStack_3a0,0,0);
              func_0x000107c61428(param_2 + 0xa8,&uStack_6b0,0x20,0);
              uVar19 = *(ulong *)(param_1 + 0xa8);
              if ((uVar19 == *(ulong *)(param_2 + 0xa8)) &&
                 (*(long *)(param_1 + 0xb0) == *(long *)(param_2 + 0xb0))) {
                func_0x000107c614a8(&uStack_6b0);
              }
              else {
                func_0x000107c605b8();
                func_0x000107c614a8(&uStack_6b0);
                if ((uVar19 & 1) == 0) goto LAB_103587e6c;
              }
              func_0x000107c61428(param_1 + 0xb8,auStack_3b8,0,0);
              func_0x000107c61428(param_2 + 0xb8,&uStack_6b0,0x20,0);
              uVar19 = *(ulong *)(param_1 + 0xb8);
              if ((uVar19 == *(ulong *)(param_2 + 0xb8)) &&
                 (*(long *)(param_1 + 0xc0) == *(long *)(param_2 + 0xc0))) {
                func_0x000107c614a8(&uStack_6b0);
              }
              else {
                func_0x000107c605b8();
                func_0x000107c614a8(&uStack_6b0);
                if ((uVar19 & 1) == 0) goto LAB_103587e6c;
              }
              func_0x000107c61428(param_1 + 200,auStack_3d0,0,0);
              func_0x000107c61428(param_2 + 200,&uStack_6b0,0x20,0);
              uVar19 = *(ulong *)(param_1 + 200);
              if ((uVar19 == *(ulong *)(param_2 + 200)) &&
                 (*(long *)(param_1 + 0xd0) == *(long *)(param_2 + 0xd0))) {
                func_0x000107c614a8(&uStack_6b0);
              }
              else {
                func_0x000107c605b8();
                func_0x000107c614a8(&uStack_6b0);
                if ((uVar19 & 1) == 0) goto LAB_103587e6c;
              }
              func_0x000107c61428(param_1 + 0xd8,auStack_3e8,0,0);
              func_0x000107c61428(param_2 + 0xd8,&uStack_6b0,0x20,0);
              uVar19 = *(ulong *)(param_1 + 0xd8);
              if ((uVar19 == *(ulong *)(param_2 + 0xd8)) &&
                 (*(long *)(param_1 + 0xe0) == *(long *)(param_2 + 0xe0))) {
                func_0x000107c614a8(&uStack_6b0);
              }
              else {
                func_0x000107c605b8();
                func_0x000107c614a8(&uStack_6b0);
                if ((uVar19 & 1) == 0) goto LAB_103587e6c;
              }
              func_0x000107c61428(param_1 + 0xe8,auStack_400,0,0);
              uVar14 = *(ulong *)(param_1 + 0xe8);
              cVar1 = *(char *)(param_1 + 0xf0);
              func_0x000107c61428(param_2 + 0xe8,auStack_418,0,0);
              uVar19 = (ulong)(uVar14 != 0);
              if (cVar1 != '\x01') {
                uVar19 = uVar14;
              }
              if (*(char *)(param_2 + 0xf0) == '\x01') {
                if (*(ulong *)(param_2 + 0xe8) == 0) {
                  if (uVar19 == 0) goto LAB_10358756c;
                }
                else if (uVar19 == 1) {
LAB_10358756c:
                  func_0x000107c61428(param_1 + 0xf8,auStack_430,0,0);
                  uVar14 = *(ulong *)(param_1 + 0xf8);
                  func_0x000107c61428(param_2 + 0xf8,auStack_448,0,0);
                  uVar15 = *(undefined8 *)(param_2 + 0xf8);
                  func_0x000107c61434(uVar14);
                  func_0x000107c61434(uVar15);
                  uVar19 = uVar14;
                  FUN_103588c2c(uVar14,uVar15);
                  func_0x000107c6142c(uVar14);
                  func_0x000107c6142c(uVar15);
                  if ((uVar19 & 1) != 0) {
                    func_0x000107c61428(param_1 + 0x100,auStack_460,0,0);
                    uVar14 = *(ulong *)(param_1 + 0x100);
                    func_0x000107c61428(param_2 + 0x100,auStack_478,0,0);
                    uVar15 = *(undefined8 *)(param_2 + 0x100);
                    func_0x000107c61434(uVar14);
                    func_0x000107c61434(uVar15);
                    uVar19 = uVar14;
                    FUN_103588c2c(uVar14,uVar15);
                    func_0x000107c6142c(uVar14);
                    func_0x000107c6142c(uVar15);
                    if ((uVar19 & 1) != 0) {
                      func_0x000107c61428(param_1 + 0x108,auStack_490,0,0);
                      uVar14 = *(ulong *)(param_1 + 0x108);
                      func_0x000107c61428(param_2 + 0x108,auStack_4a8,0,0);
                      uVar15 = *(undefined8 *)(param_2 + 0x108);
                      func_0x000107c61434(uVar14);
                      func_0x000107c61434(uVar15);
                      uVar19 = uVar14;
                      FUN_103588d00(uVar14,uVar15);
                      func_0x000107c6142c(uVar14);
                      func_0x000107c6142c(uVar15);
                      if ((uVar19 & 1) != 0) {
                        func_0x000107c61428(param_1 + 0x110,auStack_4c0,0,0);
                        uVar14 = *(ulong *)(param_1 + 0x110);
                        func_0x000107c61428(param_2 + 0x110,auStack_4d8,0,0);
                        uVar15 = *(undefined8 *)(param_2 + 0x110);
                        func_0x000107c61434(uVar14);
                        func_0x000107c61434(uVar15);
                        uVar19 = uVar14;
                        FUN_103588d00(uVar14,uVar15);
                        func_0x000107c6142c(uVar14);
                        func_0x000107c6142c(uVar15);
                        if ((uVar19 & 1) != 0) {
                          puVar2 = (undefined8 *)(param_1 + 0x118);
                          func_0x000107c61428(puVar2,auStack_5c8,0,0);
                          puVar3 = (undefined8 *)(param_2 + 0x118);
                          func_0x000107c61428(puVar3,auStack_5e0,0,0);
                          uStack_668 = *(undefined8 *)(param_1 + 0x160);
                          uStack_670 = *(undefined8 *)(param_1 + 0x158);
                          uStack_658 = *(undefined8 *)(param_1 + 0x170);
                          uStack_660 = *(undefined8 *)(param_1 + 0x168);
                          uStack_650 = *(ulong *)(param_1 + 0x178);
                          uStack_6a8 = *(ulong *)(param_1 + 0x120);
                          uStack_6b0 = *puVar2;
                          uStack_698 = *(undefined8 *)(param_1 + 0x130);
                          uStack_6a0 = *(undefined8 *)(param_1 + 0x128);
                          uStack_688 = *(undefined8 *)(param_1 + 0x140);
                          uStack_690 = *(undefined8 *)(param_1 + 0x138);
                          uStack_678 = *(undefined8 *)(param_1 + 0x150);
                          uStack_680 = *(undefined8 *)(param_1 + 0x148);
                          lStack_710 = *(long *)(param_2 + 0x120);
                          uStack_718 = *puVar3;
                          uStack_700 = *(undefined8 *)(param_2 + 0x130);
                          uStack_708 = *(undefined8 *)(param_2 + 0x128);
                          uStack_5e8 = *(undefined8 *)(param_2 + 0x178);
                          uStack_600 = *(undefined8 *)(param_2 + 0x160);
                          uStack_6d8 = *(undefined8 *)(param_2 + 0x158);
                          uStack_5f0 = *(undefined8 *)(param_2 + 0x170);
                          uStack_5f8 = *(undefined8 *)(param_2 + 0x168);
                          uStack_6f0 = *(undefined8 *)(param_2 + 0x140);
                          uStack_6f8 = *(undefined8 *)(param_2 + 0x138);
                          uStack_6e0 = *(undefined8 *)(param_2 + 0x150);
                          uStack_6e8 = *(undefined8 *)(param_2 + 0x148);
                          uStack_648 = uStack_718;
                          lStack_640 = lStack_710;
                          uStack_638 = uStack_708;
                          uStack_630 = uStack_700;
                          uStack_628 = uStack_6f8;
                          uStack_620 = uStack_6f0;
                          uStack_618 = uStack_6e8;
                          uStack_610 = uStack_6e0;
                          uStack_608 = uStack_6d8;
                          uStack_5b0 = uStack_6b0;
                          uStack_5a8 = uStack_6a8;
                          uStack_5a0 = uStack_6a0;
                          uStack_598 = uStack_698;
                          uStack_590 = uStack_690;
                          uStack_588 = uStack_688;
                          uStack_580 = uStack_680;
                          uStack_578 = uStack_678;
                          uStack_570 = uStack_670;
                          uStack_568 = uStack_668;
                          uStack_560 = uStack_660;
                          uStack_558 = uStack_658;
                          uStack_550 = uStack_650;
                          uStack_540 = uStack_718;
                          lStack_538 = lStack_710;
                          uStack_530 = uStack_708;
                          uStack_528 = uStack_700;
                          uStack_520 = uStack_6f8;
                          uStack_518 = uStack_6f0;
                          uStack_510 = uStack_6e8;
                          uStack_508 = uStack_6e0;
                          uStack_500 = uStack_6d8;
                          uStack_4f8 = uStack_600;
                          uStack_4f0 = uStack_5f8;
                          uStack_4e8 = uStack_5f0;
                          uStack_4e0 = uStack_5e8;
                          if (uStack_6a8 == 0) {
                            if (lStack_710 != 0) goto LAB_1035878b8;
                            uStack_738 = *(undefined8 *)(param_1 + 0x160);
                            uStack_740 = *(undefined8 *)(param_1 + 0x158);
                            uStack_728 = *(undefined8 *)(param_1 + 0x170);
                            uStack_730 = *(undefined8 *)(param_1 + 0x168);
                            uStack_720 = *(undefined8 *)(param_1 + 0x178);
                            uStack_778 = *(undefined8 *)(param_1 + 0x120);
                            uStack_780 = *puVar2;
                            uStack_768 = *(undefined8 *)(param_1 + 0x130);
                            uStack_770 = *(undefined8 *)(param_1 + 0x128);
                            uStack_758 = *(undefined8 *)(param_1 + 0x140);
                            uStack_760 = *(undefined8 *)(param_1 + 0x138);
                            uStack_748 = *(undefined8 *)(param_1 + 0x150);
                            uStack_750 = *(undefined8 *)(param_1 + 0x148);
                            FUN_10358955c(&uStack_5b0,&uStack_130,0x112f79be0,&UNK_10dbde0f0);
                            FUN_10358955c(&uStack_540,&uStack_130,0x112f79be0,&UNK_10dbde0f0);
                            FUN_103589c8c(&uStack_780,0x112f79be0,&UNK_10dbde0f0);
LAB_1035879e0:
                            func_0x000107c61428(param_1 + 0x180,auStack_858,0,0);
                            func_0x000107c61428(param_2 + 0x180,auStack_870,0,0);
                            uStack_818 = *(undefined8 *)(param_1 + 0x1a8);
                            uStack_820 = *(undefined8 *)(param_1 + 0x1a0);
                            uStack_808 = *(undefined8 *)(param_1 + 0x1b8);
                            uStack_810 = *(undefined8 *)(param_1 + 0x1b0);
                            uStack_7f8 = *(undefined8 *)(param_1 + 0x1c8);
                            uStack_800 = *(undefined8 *)(param_1 + 0x1c0);
                            uStack_7f0 = *(undefined8 *)(param_1 + 0x1d0);
                            uStack_838 = *(ulong *)(param_1 + 0x188);
                            uStack_840 = *(undefined8 *)(param_1 + 0x180);
                            uStack_828 = *(undefined8 *)(param_1 + 0x198);
                            uStack_830 = *(undefined8 *)(param_1 + 400);
                            uStack_790 = *(undefined8 *)(param_2 + 0x1d0);
                            uStack_7a8 = *(undefined8 *)(param_2 + 0x1b8);
                            uStack_7b0 = *(undefined8 *)(param_2 + 0x1b0);
                            uStack_798 = *(undefined8 *)(param_2 + 0x1c8);
                            uStack_7a0 = *(undefined8 *)(param_2 + 0x1c0);
                            lStack_7c8 = *(long *)(param_2 + 0x198);
                            uStack_7d0 = *(undefined8 *)(param_2 + 400);
                            uStack_7b8 = *(undefined8 *)(param_2 + 0x1a8);
                            uStack_7c0 = *(undefined8 *)(param_2 + 0x1a0);
                            uStack_7d8 = *(ulong *)(param_2 + 0x188);
                            uStack_7e0 = *(undefined8 *)(param_2 + 0x180);
                            uStack_6b0 = uStack_840;
                            uStack_6a8 = uStack_838;
                            uStack_6a0 = uStack_830;
                            uStack_698 = uStack_828;
                            uStack_690 = uStack_820;
                            uStack_688 = uStack_818;
                            uStack_680 = uStack_810;
                            uStack_678 = uStack_808;
                            uStack_670 = uStack_800;
                            uStack_668 = uStack_7f8;
                            uStack_660 = uStack_7f0;
                            uStack_658 = uStack_7e0;
                            uStack_650 = uStack_7d8;
                            uStack_648 = uStack_7d0;
                            lStack_640 = lStack_7c8;
                            uStack_638 = uStack_7c0;
                            uStack_630 = uStack_7b8;
                            uStack_628 = uStack_7b0;
                            uStack_620 = uStack_7a8;
                            uStack_618 = uStack_7a0;
                            uStack_610 = uStack_798;
                            uStack_608 = uStack_790;
                            if (uStack_838 >> 0x3c < 0xf) {
                              if (0xe < uStack_7d8 >> 0x3c) goto LAB_103587b24;
                              uStack_cc8 = *(undefined8 *)(param_2 + 0x1a8);
                              uStack_cd0 = *(undefined8 *)(param_2 + 0x1a0);
                              uStack_cb8 = *(undefined8 *)(param_2 + 0x1b8);
                              uStack_cc0 = *(undefined8 *)(param_2 + 0x1b0);
                              uStack_ca8 = *(undefined8 *)(param_2 + 0x1c8);
                              uStack_cb0 = *(undefined8 *)(param_2 + 0x1c0);
                              uStack_ca0 = *(undefined8 *)(param_2 + 0x1d0);
                              uStack_ce8 = *(undefined8 *)(param_2 + 0x188);
                              uStack_cf0 = *(undefined8 *)(param_2 + 0x180);
                              uStack_cd8 = *(undefined8 *)(param_2 + 0x198);
                              uStack_ce0 = *(undefined8 *)(param_2 + 400);
                              uStack_1d8 = *(undefined8 *)(param_1 + 0x1a8);
                              uStack_1e0 = *(undefined8 *)(param_1 + 0x1a0);
                              uStack_1c8 = *(undefined8 *)(param_1 + 0x1b8);
                              uStack_1d0 = *(undefined8 *)(param_1 + 0x1b0);
                              uStack_1b8 = *(undefined8 *)(param_1 + 0x1c8);
                              uStack_1c0 = *(undefined8 *)(param_1 + 0x1c0);
                              uStack_1b0 = *(undefined8 *)(param_1 + 0x1d0);
                              uStack_1f8 = *(undefined8 *)(param_1 + 0x188);
                              uStack_200 = *(undefined8 *)(param_1 + 0x180);
                              uStack_1e8 = *(undefined8 *)(param_1 + 0x198);
                              uStack_1f0 = *(undefined8 *)(param_1 + 400);
                              uStack_780 = uStack_cf0;
                              uStack_778 = uStack_ce8;
                              uStack_770 = uStack_ce0;
                              uStack_768 = uStack_cd8;
                              uStack_760 = uStack_cd0;
                              uStack_758 = uStack_cc8;
                              uStack_750 = uStack_cc0;
                              uStack_748 = uStack_cb8;
                              uStack_740 = uStack_cb0;
                              uStack_738 = uStack_ca8;
                              uStack_730 = uStack_ca0;
                              FUN_10358955c(&uStack_840,&uStack_260,0x112f79bf0,&UNK_10dbde100);
                              FUN_10358955c(&uStack_7e0,&uStack_260,0x112f79bf0,&UNK_10dbde100);
                              puVar2 = &uStack_200;
                              FUN_103590adc(puVar2,&uStack_cf0);
                              FUN_103589c8c(&uStack_780,0x112f79bf0,&UNK_10dbde100);
                              FUN_103589c8c(&uStack_6b0,0x112f79bf0,&UNK_10dbde100);
                              if (((ulong)puVar2 & 1) == 0) goto LAB_103587e6c;
LAB_103587c78:
                              puVar2 = (undefined8 *)(param_1 + 0x1d8);
                              func_0x000107c61428(puVar2,auStack_948,0,0);
                              puVar3 = (undefined8 *)(param_2 + 0x1d8);
                              func_0x000107c61428(puVar3,auStack_960,0,0);
                              uStack_908 = *(undefined8 *)(param_1 + 0x200);
                              uStack_910 = *(undefined8 *)(param_1 + 0x1f8);
                              uStack_8f8 = *(undefined8 *)(param_1 + 0x210);
                              uStack_900 = *(undefined8 *)(param_1 + 0x208);
                              uStack_8e8 = *(undefined8 *)(param_1 + 0x220);
                              uStack_8f0 = *(undefined8 *)(param_1 + 0x218);
                              uStack_8e0 = *(undefined8 *)(param_1 + 0x228);
                              uStack_928 = *(ulong *)(param_1 + 0x1e0);
                              uStack_930 = *puVar2;
                              uStack_918 = *(undefined8 *)(param_1 + 0x1f0);
                              uStack_920 = *(undefined8 *)(param_1 + 0x1e8);
                              uStack_880 = *(undefined8 *)(param_2 + 0x228);
                              uStack_898 = *(undefined8 *)(param_2 + 0x210);
                              uStack_8a0 = *(undefined8 *)(param_2 + 0x208);
                              uStack_888 = *(undefined8 *)(param_2 + 0x220);
                              uStack_890 = *(undefined8 *)(param_2 + 0x218);
                              lStack_8b8 = *(long *)(param_2 + 0x1f0);
                              uStack_8c0 = *(undefined8 *)(param_2 + 0x1e8);
                              uStack_8a8 = *(undefined8 *)(param_2 + 0x200);
                              uStack_8b0 = *(undefined8 *)(param_2 + 0x1f8);
                              uStack_8c8 = *(ulong *)(param_2 + 0x1e0);
                              uStack_8d0 = *puVar3;
                              uStack_6b0 = uStack_930;
                              uStack_6a8 = uStack_928;
                              uStack_6a0 = uStack_920;
                              uStack_698 = uStack_918;
                              uStack_690 = uStack_910;
                              uStack_688 = uStack_908;
                              uStack_680 = uStack_900;
                              uStack_678 = uStack_8f8;
                              uStack_670 = uStack_8f0;
                              uStack_668 = uStack_8e8;
                              uStack_660 = uStack_8e0;
                              uStack_658 = uStack_8d0;
                              uStack_650 = uStack_8c8;
                              uStack_648 = uStack_8c0;
                              lStack_640 = lStack_8b8;
                              uStack_638 = uStack_8b0;
                              uStack_630 = uStack_8a8;
                              uStack_628 = uStack_8a0;
                              uStack_620 = uStack_898;
                              uStack_618 = uStack_890;
                              uStack_610 = uStack_888;
                              uStack_608 = uStack_880;
                              if (uStack_928 >> 0x3c < 0xf) {
                                if (uStack_8c8 >> 0x3c < 0xf) {
                                  uStack_c08 = *(undefined8 *)(param_2 + 0x200);
                                  uStack_c10 = *(undefined8 *)(param_2 + 0x1f8);
                                  uStack_bf8 = *(undefined8 *)(param_2 + 0x210);
                                  uStack_c00 = *(undefined8 *)(param_2 + 0x208);
                                  uStack_be8 = *(undefined8 *)(param_2 + 0x220);
                                  uStack_bf0 = *(undefined8 *)(param_2 + 0x218);
                                  uStack_be0 = *(undefined8 *)(param_2 + 0x228);
                                  uStack_c28 = *(ulong *)(param_2 + 0x1e0);
                                  uStack_c30 = *puVar3;
                                  uStack_c18 = *(undefined8 *)(param_2 + 0x1f0);
                                  uStack_c20 = *(undefined8 *)(param_2 + 0x1e8);
                                  uStack_238 = *(undefined8 *)(param_1 + 0x200);
                                  uStack_240 = *(undefined8 *)(param_1 + 0x1f8);
                                  uStack_228 = *(undefined8 *)(param_1 + 0x210);
                                  uStack_230 = *(undefined8 *)(param_1 + 0x208);
                                  uStack_218 = *(undefined8 *)(param_1 + 0x220);
                                  uStack_220 = *(undefined8 *)(param_1 + 0x218);
                                  uStack_210 = *(undefined8 *)(param_1 + 0x228);
                                  uStack_258 = *(undefined8 *)(param_1 + 0x1e0);
                                  uStack_260 = *puVar2;
                                  uStack_248 = *(undefined8 *)(param_1 + 0x1f0);
                                  uStack_250 = *(undefined8 *)(param_1 + 0x1e8);
                                  uStack_780 = uStack_c30;
                                  uStack_778 = uStack_c28;
                                  uStack_770 = uStack_c20;
                                  uStack_768 = uStack_c18;
                                  uStack_760 = uStack_c10;
                                  uStack_758 = uStack_c08;
                                  uStack_750 = uStack_c00;
                                  uStack_748 = uStack_bf8;
                                  uStack_740 = uStack_bf0;
                                  uStack_738 = uStack_be8;
                                  uStack_730 = uStack_be0;
                                  FUN_10358955c(&uStack_930,&uStack_c88,0x112f79bf0,&UNK_10dbde100);
                                  FUN_10358955c(&uStack_8d0,&uStack_c88,0x112f79bf0,&UNK_10dbde100);
                                  puVar2 = &uStack_260;
                                  FUN_103590adc(puVar2,&uStack_780);
                                  FUN_103589c8c(&uStack_c30,0x112f79bf0,&UNK_10dbde100);
                                  FUN_103589c8c(&uStack_6b0,0x112f79bf0,&UNK_10dbde100);
                                  if (((ulong)puVar2 & 1) == 0) goto LAB_103587e6c;
                                  goto LAB_103587f60;
                                }
                              }
                              else if (0xe < uStack_8c8 >> 0x3c) {
                                uStack_758 = *(undefined8 *)(param_1 + 0x200);
                                uStack_760 = *(undefined8 *)(param_1 + 0x1f8);
                                uStack_748 = *(undefined8 *)(param_1 + 0x210);
                                uStack_750 = *(undefined8 *)(param_1 + 0x208);
                                uStack_738 = *(undefined8 *)(param_1 + 0x220);
                                uStack_740 = *(undefined8 *)(param_1 + 0x218);
                                uStack_730 = *(undefined8 *)(param_1 + 0x228);
                                uStack_778 = *(ulong *)(param_1 + 0x1e0);
                                uStack_780 = *puVar2;
                                uStack_768 = *(undefined8 *)(param_1 + 0x1f0);
                                uStack_770 = *(undefined8 *)(param_1 + 0x1e8);
                                FUN_10358955c(&uStack_930,&uStack_260,0x112f79bf0,&UNK_10dbde100);
                                FUN_10358955c(&uStack_8d0,&uStack_260,0x112f79bf0,&UNK_10dbde100);
                                FUN_103589c8c(&uStack_780,0x112f79bf0,&UNK_10dbde100);
LAB_103587f60:
                                func_0x000107c61428(param_1 + 0x230,auStack_978,0,0);
                                uVar14 = *(ulong *)(param_1 + 0x230);
                                func_0x000107c61428(param_2 + 0x230,auStack_990,0,0);
                                uVar15 = *(undefined8 *)(param_2 + 0x230);
                                func_0x000107c61434(uVar14);
                                func_0x000107c61434(uVar15);
                                uVar19 = uVar14;
                                func_0x000101058cd4(uVar14,uVar15);
                                func_0x000107c6142c(uVar14);
                                func_0x000107c6142c(uVar15);
                                if ((uVar19 & 1) != 0) {
                                  func_0x000107c61428(param_1 + 0x238,auStack_9a8,0,0);
                                  lVar13 = *(long *)(param_1 + 0x238);
                                  func_0x000107c61428(param_2 + 0x238,auStack_9c0,0,0);
                                  lVar10 = *(long *)(param_2 + 0x238);
                                  if (*(char *)(param_2 + 0x240) == '\x01') {
                                    if (lVar10 == 0) {
                                      if (lVar13 == 0) goto LAB_103588034;
                                    }
                                    else if (lVar10 == 1) {
                                      if (lVar13 == 1) {
LAB_103588034:
                                        func_0x000107c61428(param_1 + 0x248,auStack_9d8,0,0);
                                        lVar13 = *(long *)(param_1 + 0x248);
                                        func_0x000107c61428(param_2 + 0x248,auStack_9f0,0,0);
                                        lVar10 = *(long *)(param_2 + 0x248);
                                        if (*(char *)(param_2 + 0x250) == '\x01') {
                                          if (lVar10 == 0) {
                                            if (lVar13 == 0) goto LAB_1035880a4;
                                          }
                                          else if (lVar10 == 1) {
                                            if (lVar13 == 1) {
LAB_1035880a4:
                                              func_0x000107c61428(param_1 + 600,auStack_a08,0,0);
                                              uVar14 = *(ulong *)(param_1 + 600);
                                              func_0x000107c61428(param_2 + 600,auStack_a20,0,0);
                                              uVar15 = *(undefined8 *)(param_2 + 600);
                                              func_0x000107c61434(uVar14);
                                              func_0x000107c61434(uVar15);
                                              uVar19 = uVar14;
                                              FUN_103588d00(uVar14,uVar15);
                                              func_0x000107c6142c(uVar14);
                                              func_0x000107c6142c(uVar15);
                                              if ((uVar19 & 1) != 0) {
                                                func_0x000107c61428(param_1 + 0x260,auStack_a38,0,0)
                                                ;
                                                uVar14 = *(ulong *)(param_1 + 0x260);
                                                func_0x000107c61428(param_2 + 0x260,auStack_a50,0,0)
                                                ;
                                                uVar15 = *(undefined8 *)(param_2 + 0x260);
                                                func_0x000107c61434(uVar14);
                                                func_0x000107c61434(uVar15);
                                                uVar19 = uVar14;
                                                FUN_103588d00(uVar14,uVar15);
                                                func_0x000107c6142c(uVar14);
                                                func_0x000107c6142c(uVar15);
                                                if ((uVar19 & 1) != 0) {
                                                  func_0x000107c61428(param_1 + 0x268,auStack_a68,0,
                                                                      0);
                                                  uVar14 = *(ulong *)(param_1 + 0x268);
                                                  func_0x000107c61428(param_2 + 0x268,auStack_a80,0,
                                                                      0);
                                                  uVar15 = *(undefined8 *)(param_2 + 0x268);
                                                  func_0x000107c61434(uVar14);
                                                  func_0x000107c61434(uVar15);
                                                  uVar19 = uVar14;
                                                  FUN_103588d00(uVar14,uVar15);
                                                  func_0x000107c6142c(uVar14);
                                                  func_0x000107c6142c(uVar15);
                                                  if ((uVar19 & 1) != 0) {
                                                    func_0x000107c61428(param_1 + 0x270,auStack_a98,
                                                                        0,0);
                                                    uVar14 = *(ulong *)(param_1 + 0x270);
                                                    func_0x000107c61428(param_2 + 0x270,auStack_ab0,
                                                                        0,0);
                                                    uVar15 = *(undefined8 *)(param_2 + 0x270);
                                                    func_0x000107c61434(uVar14);
                                                    func_0x000107c61434(uVar15);
                                                    uVar19 = uVar14;
                                                    FUN_103588e30(uVar14,uVar15);
                                                    func_0x000107c6142c(uVar14);
                                                    func_0x000107c6142c(uVar15);
                                                    if ((uVar19 & 1) != 0) {
                                                      func_0x000107c61428(param_1 + 0x278,
                                                                          auStack_ac8,0,0);
                                                      uVar14 = *(ulong *)(param_1 + 0x278);
                                                      func_0x000107c61428(param_2 + 0x278,
                                                                          auStack_ae0,0,0);
                                                      uVar15 = *(undefined8 *)(param_2 + 0x278);
                                                      func_0x000107c61434(uVar14);
                                                      func_0x000107c61434(uVar15);
                                                      uVar19 = uVar14;
                                                      FUN_103588e30(uVar14,uVar15);
                                                      func_0x000107c6142c(uVar14);
                                                      func_0x000107c6142c(uVar15);
                                                      if ((uVar19 & 1) != 0) {
                                                        func_0x000107c61428(param_1 + 0x280,
                                                                            auStack_af8,0,0);
                                                        func_0x000107c61428(param_2 + 0x280,
                                                                            auStack_b10,0,0);
                                                        uVar15 = *(undefined8 *)(param_1 + 0x280);
                                                        lVar10 = *(long *)(param_1 + 0x288);
                                                        uVar5 = *(undefined8 *)(param_1 + 0x290);
                                                        uVar6 = *(undefined8 *)(param_1 + 0x298);
                                                        uVar7 = *(undefined8 *)(param_1 + 0x2a0);
                                                        uVar8 = *(undefined8 *)(param_1 + 0x2a8);
                                                        uVar9 = *(undefined8 *)(param_1 + 0x2b0);
                                                        uVar17 = *(undefined8 *)(param_2 + 0x280);
                                                        uVar19 = *(ulong *)(param_2 + 0x288);
                                                        uVar16 = *(undefined8 *)(param_2 + 0x290);
                                                        uVar18 = *(undefined8 *)(param_2 + 0x298);
                                                        uVar11 = *(undefined8 *)(param_2 + 0x2a0);
                                                        uVar21 = *(undefined8 *)(param_2 + 0x2a8);
                                                        uVar20 = *(undefined8 *)(param_2 + 0x2b0);
                                                        if (lVar10 == 0) {
                                                          if (uVar19 != 0) goto LAB_103588520;
                                                          FUN_1035895a4(uVar15,0);
                                                          FUN_1035895a4(uVar17,0,uVar16,uVar18,
                                                                        uVar11,uVar21,uVar20);
                                                          func_0x000103589608(uVar15,0,uVar5,uVar6,
                                                                              uVar7,uVar8,uVar9);
LAB_1035883f8:
                                                          func_0x000107c61428(param_1 + 0x2b8,
                                                                              auStack_b28,0,0);
                                                          func_0x000107c61428(param_2 + 0x2b8,
                                                                              auStack_b40,0,0);
                                                          uVar15 = *(undefined8 *)(param_1 + 0x2b8);
                                                          lVar10 = *(long *)(param_1 + 0x2c0);
                                                          uVar5 = *(undefined8 *)(param_1 + 0x2c8);
                                                          uVar6 = *(undefined8 *)(param_1 + 0x2d0);
                                                          uVar7 = *(undefined8 *)(param_1 + 0x2d8);
                                                          uVar8 = *(undefined8 *)(param_1 + 0x2e0);
                                                          uVar9 = *(undefined8 *)(param_1 + 0x2e8);
                                                          uVar17 = *(undefined8 *)(param_2 + 0x2b8);
                                                          uVar19 = *(ulong *)(param_2 + 0x2c0);
                                                          uVar16 = *(undefined8 *)(param_2 + 0x2c8);
                                                          uVar18 = *(undefined8 *)(param_2 + 0x2d0);
                                                          uVar11 = *(undefined8 *)(param_2 + 0x2d8);
                                                          uVar21 = *(undefined8 *)(param_2 + 0x2e0);
                                                          uVar20 = *(undefined8 *)(param_2 + 0x2e8);
                                                          if (lVar10 == 0) {
                                                            if (uVar19 != 0) goto LAB_103588520;
                                                            FUN_1035895a4(uVar15,0);
                                                            FUN_1035895a4(uVar17,0,uVar16,uVar18,
                                                                          uVar11,uVar21,uVar20);
                                                            func_0x000103589608(uVar15,0,uVar5,uVar6
                                                                                ,uVar7,uVar8,uVar9);
                                                          }
                                                          else {
                                                            if (uVar19 == 0) goto LAB_103588520;
                                                            uStack_6b0 = uVar17;
                                                            uStack_6a8 = uVar19;
                                                            uStack_6a0 = uVar16;
                                                            uStack_698 = uVar18;
                                                            uStack_690 = uVar11;
                                                            uStack_688 = uVar21;
                                                            uStack_680 = uVar20;
                                                            uStack_298 = uVar15;
                                                            lStack_290 = lVar10;
                                                            uStack_288 = uVar5;
                                                            uStack_280 = uVar6;
                                                            uStack_278 = uVar7;
                                                            uStack_270 = uVar8;
                                                            uStack_268 = uVar9;
                                                            FUN_1035895a4(uVar15,lVar10);
                                                            FUN_1035895a4(uVar17,uVar19,uVar16,
                                                                          uVar18,uVar11,uVar21,
                                                                          uVar20);
                                                            puVar2 = &uStack_298;
                                                            FUN_103591e08(puVar2,&uStack_6b0);
                                                            func_0x000103589608(uVar17,uVar19,uVar16
                                                                                ,uVar18,uVar11,
                                                                                uVar21,uVar20);
                                                            func_0x000103589608(uVar15,lVar10,uVar5,
                                                                                uVar6,uVar7,uVar8,
                                                                                uVar9);
                                                            if (((ulong)puVar2 & 1) == 0)
                                                            goto LAB_103587e6c;
                                                          }
                                                          func_0x000107c61428(param_1 + 0x2f0,
                                                                              auStack_b58,0,0);
                                                          func_0x000107c61428(param_2 + 0x2f0,
                                                                              auStack_b70,0x20,0);
                                                          uVar19 = *(ulong *)(param_1 + 0x2f0);
                                                          if ((uVar19 == *(ulong *)(param_2 + 0x2f0)
                                                              ) && (*(long *)(param_1 + 0x2f8) ==
                                                                    *(long *)(param_2 + 0x2f8))) {
                                                            func_0x000107c614a8(auStack_b70);
                                                          }
                                                          else {
                                                            func_0x000107c605b8();
                                                            func_0x000107c614a8(auStack_b70);
                                                            if ((uVar19 & 1) == 0)
                                                            goto LAB_103587e6c;
                                                          }
                                                          func_0x000107c61428(param_1 + 0x300,
                                                                              auStack_b70,0,0);
                                                          func_0x000107c61428(param_2 + 0x300,
                                                                              auStack_b88,0x20,0);
                                                          uVar19 = *(ulong *)(param_1 + 0x300);
                                                          if ((uVar19 == *(ulong *)(param_2 + 0x300)
                                                              ) && (*(long *)(param_1 + 0x308) ==
                                                                    *(long *)(param_2 + 0x308))) {
                                                            func_0x000107c614a8(auStack_b88);
                                                          }
                                                          else {
                                                            func_0x000107c605b8();
                                                            func_0x000107c614a8(auStack_b88);
                                                            if ((uVar19 & 1) == 0)
                                                            goto LAB_103587e6c;
                                                          }
                                                          func_0x000107c61428(param_1 + 0x310,
                                                                              auStack_b88,0,0);
                                                          uVar14 = *(ulong *)(param_1 + 0x310);
                                                          func_0x000107c61428(param_2 + 0x310,
                                                                              auStack_ba0,0,0);
                                                          uVar15 = *(undefined8 *)(param_2 + 0x310);
                                                          func_0x000107c61434(uVar14);
                                                          func_0x000107c61434(uVar15);
                                                          uVar19 = uVar14;
                                                          FUN_103588f04(uVar14,uVar15);
                                                          func_0x000107c6142c(uVar14);
                                                          func_0x000107c6142c(uVar15);
                                                          if ((uVar19 & 1) != 0) {
                                                            func_0x000107c61428(param_1 + 0x318,
                                                                                auStack_bb8,0,0);
                                                            uVar5 = *(undefined8 *)(param_1 + 0x318)
                                                            ;
                                                            func_0x000107c61428(param_2 + 0x318,
                                                                                auStack_bd0,0,0);
                                                            uVar6 = *(undefined8 *)(param_2 + 0x318)
                                                            ;
                                                            func_0x000107c61434(uVar5);
                                                            func_0x000107c61434(uVar6);
                                                            uVar15 = uVar5;
                                                            FUN_103588f04(uVar5,uVar6);
                                                            uVar12 = (uint)uVar15;
                                                            func_0x000107c6142c(uVar5);
                                                            func_0x000107c6142c(uVar6);
                                                            goto LAB_103587e70;
                                                          }
                                                        }
                                                        else if (uVar19 == 0) {
LAB_103588520:
                                                          uStack_6b0 = uVar15;
                                                          uStack_6a8 = lVar10;
                                                          uStack_6a0 = uVar5;
                                                          uStack_698 = uVar6;
                                                          uStack_690 = uVar7;
                                                          uStack_688 = uVar8;
                                                          uStack_680 = uVar9;
                                                          uStack_678 = uVar17;
                                                          uStack_670 = uVar19;
                                                          uStack_668 = uVar16;
                                                          uStack_660 = uVar18;
                                                          uStack_658 = uVar11;
                                                          uStack_650 = uVar21;
                                                          uStack_648 = uVar20;
                                                          FUN_1035895a4(uVar15,lVar10);
                                                          FUN_1035895a4(uVar17,uVar19,uVar16,uVar18,
                                                                        uVar11,uVar21,uVar20);
                                                          FUN_103589c8c(&uStack_6b0,0x112f7a150,
                                                                        &UNK_10dbde4a0);
                                                        }
                                                        else {
                                                          uStack_c88 = uVar15;
                                                          lStack_c80 = lVar10;
                                                          uStack_c78 = uVar5;
                                                          uStack_c70 = uVar6;
                                                          uStack_c68 = uVar7;
                                                          uStack_c60 = uVar8;
                                                          uStack_c58 = uVar9;
                                                          uStack_c30 = uVar17;
                                                          uStack_c28 = uVar19;
                                                          uStack_c20 = uVar16;
                                                          uStack_c18 = uVar18;
                                                          uStack_c10 = uVar11;
                                                          uStack_c08 = uVar21;
                                                          uStack_c00 = uVar20;
                                                          FUN_1035895a4(uVar15,lVar10);
                                                          FUN_1035895a4(uVar17,uVar19,uVar16,uVar18,
                                                                        uVar11,uVar21,uVar20);
                                                          puVar2 = &uStack_c88;
                                                          FUN_103591e08(puVar2,&uStack_c30);
                                                          func_0x000103589608(uVar17,uVar19,uVar16,
                                                                              uVar18,uVar11,uVar21,
                                                                              uVar20);
                                                          func_0x000103589608(uVar15,lVar10,uVar5,
                                                                              uVar6,uVar7,uVar8,
                                                                              uVar9);
                                                          if (((ulong)puVar2 & 1) != 0)
                                                          goto LAB_1035883f8;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          else if (lVar13 == 2) goto LAB_1035880a4;
                                        }
                                        else if (lVar13 == lVar10) goto LAB_1035880a4;
                                      }
                                    }
                                    else if (lVar13 == 2) goto LAB_103588034;
                                  }
                                  else if (lVar13 == lVar10) goto LAB_103588034;
                                }
                                goto LAB_103587e6c;
                              }
                              uStack_780 = uStack_930;
                              uStack_778 = uStack_928;
                              uStack_770 = uStack_920;
                              uStack_768 = uStack_918;
                              uStack_760 = uStack_910;
                              uStack_758 = uStack_908;
                              uStack_750 = uStack_900;
                              uStack_748 = uStack_8f8;
                              uStack_740 = uStack_8f0;
                              uStack_738 = uStack_8e8;
                              uStack_730 = uStack_8e0;
                              uStack_728 = uStack_8d0;
                              uStack_720 = uStack_8c8;
                              uStack_718 = uStack_8c0;
                              lStack_710 = lStack_8b8;
                              uStack_708 = uStack_8b0;
                              uStack_700 = uStack_8a8;
                              uStack_6f8 = uStack_8a0;
                              uStack_6f0 = uStack_898;
                              uStack_6e8 = uStack_890;
                              uStack_6e0 = uStack_888;
                              uStack_6d8 = uStack_880;
                              FUN_10358955c(&uStack_930,&uStack_260,0x112f79bf0,&UNK_10dbde100);
                              puVar2 = &uStack_8d0;
                              puVar3 = &uStack_260;
                            }
                            else {
                              if (0xe < uStack_7d8 >> 0x3c) {
                                uStack_758 = *(undefined8 *)(param_1 + 0x1a8);
                                uStack_760 = *(undefined8 *)(param_1 + 0x1a0);
                                uStack_748 = *(undefined8 *)(param_1 + 0x1b8);
                                uStack_750 = *(undefined8 *)(param_1 + 0x1b0);
                                uStack_738 = *(undefined8 *)(param_1 + 0x1c8);
                                uStack_740 = *(undefined8 *)(param_1 + 0x1c0);
                                uStack_730 = *(undefined8 *)(param_1 + 0x1d0);
                                uStack_778 = *(undefined8 *)(param_1 + 0x188);
                                uStack_780 = *(undefined8 *)(param_1 + 0x180);
                                uStack_768 = *(undefined8 *)(param_1 + 0x198);
                                uStack_770 = *(undefined8 *)(param_1 + 400);
                                FUN_10358955c(&uStack_840,&uStack_cf0,0x112f79bf0,&UNK_10dbde100);
                                FUN_10358955c(&uStack_7e0,&uStack_cf0,0x112f79bf0,&UNK_10dbde100);
                                FUN_103589c8c(&uStack_780,0x112f79bf0,&UNK_10dbde100);
                                goto LAB_103587c78;
                              }
LAB_103587b24:
                              uStack_780 = uStack_840;
                              uStack_778 = uStack_838;
                              uStack_770 = uStack_830;
                              uStack_768 = uStack_828;
                              uStack_760 = uStack_820;
                              uStack_758 = uStack_818;
                              uStack_750 = uStack_810;
                              uStack_748 = uStack_808;
                              uStack_740 = uStack_800;
                              uStack_738 = uStack_7f8;
                              uStack_730 = uStack_7f0;
                              uStack_728 = uStack_7e0;
                              uStack_720 = uStack_7d8;
                              uStack_718 = uStack_7d0;
                              lStack_710 = lStack_7c8;
                              uStack_708 = uStack_7c0;
                              uStack_700 = uStack_7b8;
                              uStack_6f8 = uStack_7b0;
                              uStack_6f0 = uStack_7a8;
                              uStack_6e8 = uStack_7a0;
                              uStack_6e0 = uStack_798;
                              uStack_6d8 = uStack_790;
                              FUN_10358955c(&uStack_840,&uStack_cf0,0x112f79bf0,&UNK_10dbde100);
                              puVar2 = &uStack_7e0;
                              puVar3 = &uStack_cf0;
                            }
                            FUN_10358955c(puVar2,puVar3,0x112f79bf0,&UNK_10dbde100);
                            uVar15 = 0x112f79bf8;
                            puVar4 = &UNK_10dbde9c0;
                          }
                          else {
                            if (lStack_710 != 0) {
                              uStack_738 = *(undefined8 *)(param_2 + 0x160);
                              uStack_740 = *(undefined8 *)(param_2 + 0x158);
                              uStack_728 = *(undefined8 *)(param_2 + 0x170);
                              uStack_730 = *(undefined8 *)(param_2 + 0x168);
                              uStack_720 = *(undefined8 *)(param_2 + 0x178);
                              uStack_778 = *(undefined8 *)(param_2 + 0x120);
                              uStack_780 = *puVar3;
                              uStack_768 = *(undefined8 *)(param_2 + 0x130);
                              uStack_770 = *(undefined8 *)(param_2 + 0x128);
                              uStack_758 = *(undefined8 *)(param_2 + 0x140);
                              uStack_760 = *(undefined8 *)(param_2 + 0x138);
                              uStack_748 = *(undefined8 *)(param_2 + 0x150);
                              uStack_750 = *(undefined8 *)(param_2 + 0x148);
                              uStack_158 = *(undefined8 *)(param_1 + 0x160);
                              uStack_160 = *(undefined8 *)(param_1 + 0x158);
                              uStack_148 = *(undefined8 *)(param_1 + 0x170);
                              uStack_150 = *(undefined8 *)(param_1 + 0x168);
                              uStack_140 = *(undefined8 *)(param_1 + 0x178);
                              uStack_198 = *(undefined8 *)(param_1 + 0x120);
                              uStack_1a0 = *puVar2;
                              uStack_188 = *(undefined8 *)(param_1 + 0x130);
                              uStack_190 = *(undefined8 *)(param_1 + 0x128);
                              uStack_178 = *(undefined8 *)(param_1 + 0x140);
                              uStack_180 = *(undefined8 *)(param_1 + 0x138);
                              uStack_168 = *(undefined8 *)(param_1 + 0x150);
                              uStack_170 = *(undefined8 *)(param_1 + 0x148);
                              uStack_130 = uStack_780;
                              uStack_128 = uStack_778;
                              uStack_120 = uStack_770;
                              uStack_118 = uStack_768;
                              uStack_110 = uStack_760;
                              uStack_108 = uStack_758;
                              uStack_100 = uStack_750;
                              uStack_f8 = uStack_748;
                              uStack_f0 = uStack_740;
                              uStack_e8 = uStack_738;
                              uStack_e0 = uStack_730;
                              uStack_d8 = uStack_728;
                              uStack_d0 = uStack_720;
                              FUN_10358955c(&uStack_5b0,&uStack_cf0,0x112f79be0,&UNK_10dbde0f0);
                              FUN_10358955c(&uStack_540,&uStack_cf0,0x112f79be0,&UNK_10dbde0f0);
                              puVar2 = &uStack_1a0;
                              FUN_103594fd8(puVar2,&uStack_130);
                              FUN_103589c8c(&uStack_780,0x112f79be0,&UNK_10dbde0f0);
                              FUN_103589c8c(&uStack_6b0,0x112f79be0,&UNK_10dbde0f0);
                              if (((ulong)puVar2 & 1) != 0) goto LAB_1035879e0;
                              goto LAB_103587e6c;
                            }
LAB_1035878b8:
                            uStack_780 = uStack_6b0;
                            uStack_778 = uStack_6a8;
                            uStack_770 = uStack_6a0;
                            uStack_768 = uStack_698;
                            uStack_760 = uStack_690;
                            uStack_758 = uStack_688;
                            uStack_750 = uStack_680;
                            uStack_748 = uStack_678;
                            uStack_740 = uStack_670;
                            uStack_738 = uStack_668;
                            uStack_730 = uStack_660;
                            uStack_728 = uStack_658;
                            uStack_720 = uStack_650;
                            uStack_6d0 = uStack_600;
                            uStack_6c8 = uStack_5f8;
                            uStack_6c0 = uStack_5f0;
                            uStack_6b8 = uStack_5e8;
                            FUN_10358955c(&uStack_5b0,&uStack_130,0x112f79be0,&UNK_10dbde0f0);
                            FUN_10358955c(&uStack_540,&uStack_130,0x112f79be0,&UNK_10dbde0f0);
                            uVar15 = 0x112f79be8;
                            puVar4 = &UNK_10dbde9d0;
                          }
                          FUN_103589c8c(&uStack_780,uVar15,puVar4);
                        }
                      }
                    }
                  }
                }
              }
              else if (uVar19 == *(ulong *)(param_2 + 0xe8)) goto LAB_10358756c;
            }
            else if (lVar13 == 0) {
LAB_103587234:
              func_0x000101541428(uVar15,uVar6,lVar10,uVar7,uVar11);
              func_0x000101541428(uVar5,uVar8,lVar13,uVar9,uVar18);
              func_0x000101553bdc(uVar15,uVar6,lVar10,uVar7,uVar11);
              func_0x000101553bdc(uVar5,uVar8,lVar13,uVar9,uVar18);
            }
            else {
              uStack_90 = (undefined1)uVar8;
              uStack_b8 = (undefined1)uVar6;
              uStack_c0 = uVar15;
              lStack_b0 = lVar10;
              uStack_a8 = uVar7;
              uStack_a0 = uVar11;
              uStack_98 = uVar5;
              lStack_88 = lVar13;
              uStack_80 = uVar9;
              uStack_78 = uVar18;
              func_0x000101541428(uVar15,uVar6,lVar10,uVar7,uVar11);
              func_0x000101541428(uVar5,uVar8,lVar13,uVar9,uVar18);
              puVar2 = &uStack_c0;
              FUN_10368c758(puVar2,&uStack_98);
              func_0x000101553bdc(uVar5,uVar8,lVar13,uVar9,uVar18);
              func_0x000101553bdc(uVar15,uVar6,lVar10,uVar7,uVar11);
              if (((ulong)puVar2 & 1) != 0) goto LAB_103587308;
            }
          }
        }
        else if (lVar13 == 1) goto LAB_10358713c;
      }
      else if (lVar10 == 2) {
        if (lVar13 == 2) goto LAB_10358713c;
      }
      else if (lVar13 == 3) goto LAB_10358713c;
    }
    else if (lVar13 == lVar10) goto LAB_10358713c;
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&uStack_6b0);
    if ((uVar19 & 1) != 0) goto LAB_103586f54;
  }
LAB_103587e6c:
  uVar12 = 0;
LAB_103587e70:
  return uVar12 & 1;
}



/* Entry: 10358878c; end: 1035887eb;  */

void FUN_10358878c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112f79c00 != -1) {
    func_0x000107c61568(0x112f79c00,FUN_103583a68);
  }
  uVar1 = uRam0000000112f79c08;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1035887ec; end: 10358880f;  */

undefined1  [16] FUN_1035887ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f155c90;
  auVar1._0_8_ = 0xd000000000000023;
  return auVar1;
}



/* Entry: 103588810; end: 10358883f;  */

undefined1  [16] FUN_103588810(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103588840; end: 103588873;  */

void FUN_103588840(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103588874; end: 103588887;  */

undefined8 FUN_103588874(void)

{
  return 0x103588884;
}



/* Entry: 103588888; end: 1035888bf;  */

void FUN_103588888(void)

{
  FUN_103584b4c();
  return;
}



/* Entry: 1035888c0; end: 1035888c3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035888c0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035888c4; end: 1035888fb;  */

uint FUN_1035888c4(long param_1,long param_2)

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
  FUN_103589c4c();
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



/* Entry: 1035888fc; end: 1035889a3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035888fc(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
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
  
  lVar22 = *param_1;
  uVar16 = param_1[1];
  uVar26 = param_1[2];
  pbVar9 = (byte *)*unaff_x20;
  pbVar23 = (byte *)unaff_x20[1];
  uVar25 = unaff_x20[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_103586ecc(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
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
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
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
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      lVar22 = CONCAT17(bVar34 | auVar43[7],
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
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 1035889a4; end: 103588a43;  */

/* WARNING: Possible PIC construction at 0x0001035889f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103588a00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035889f4) */
/* WARNING: Removing unreachable block (ram,0x000103588a04) */

void FUN_1035889a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f79c18 != -1) {
    func_0x000107c61568(0x112f79c18,FUN_103583a20);
  }
  uVar5 = uRam0000000113808b78;
  uVar4 = uRam0000000113808b70;
  uVar3 = uRam0000000113808b68;
  uVar2 = uRam0000000113808b60;
  uVar1 = uRam0000000113808b58;
  *param_1 = uRam0000000113808b50;
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



/* Entry: 103588a44; end: 103588a7f;  */

void FUN_103588a44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7a140;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7a140,&UNK_10dbde498);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103588a80; end: 103588b83;  */

void FUN_103588a80(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[2];
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103588b84; end: 103588c2b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103588b84(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
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
  
  pbVar9 = (byte *)*param_1;
  pbVar23 = (byte *)param_1[1];
  uVar25 = param_1[2];
  lVar22 = *param_2;
  uVar16 = param_2[1];
  uVar26 = param_2[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_103586ecc(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
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
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
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
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      lVar22 = CONCAT17(bVar34 | auVar43[7],
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
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103588c2c; end: 103588cff;  */

uint FUN_103588c2c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_88 = puVar4[1];
        uStack_90 = *puVar4;
        uStack_78 = puVar4[3];
        uStack_80 = puVar4[2];
        uStack_70 = puVar4[4];
        uStack_58 = puVar5[1];
        uStack_60 = *puVar5;
        uStack_48 = puVar5[3];
        uStack_50 = puVar5[2];
        uStack_40 = puVar5[4];
        func_0x000101553c14(&uStack_90,auStack_b8);
        func_0x000101553c14(&uStack_60,auStack_b8);
        puVar1 = &uStack_90;
        FUN_10368c758(puVar1,&uStack_60);
        uVar3 = (uint)puVar1;
        func_0x000101553ad0(&uStack_60);
        func_0x000101553ad0(&uStack_90);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 5;
        puVar4 = puVar4 + 5;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 103588d00; end: 103588e2f;  */

uint FUN_103588d00(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_278 [184];
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
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_138 = puVar4[0x11];
        uStack_140 = puVar4[0x10];
        uStack_128 = puVar4[0x13];
        uStack_130 = puVar4[0x12];
        uStack_118 = puVar4[0x15];
        uStack_120 = puVar4[0x14];
        uStack_110 = puVar4[0x16];
        uStack_178 = puVar4[9];
        uStack_180 = puVar4[8];
        uStack_168 = puVar4[0xb];
        uStack_170 = puVar4[10];
        uStack_158 = puVar4[0xd];
        uStack_160 = puVar4[0xc];
        uStack_148 = puVar4[0xf];
        uStack_150 = puVar4[0xe];
        uStack_1b8 = puVar4[1];
        uStack_1c0 = *puVar4;
        uStack_1a8 = puVar4[3];
        uStack_1b0 = puVar4[2];
        uStack_198 = puVar4[5];
        uStack_1a0 = puVar4[4];
        uStack_188 = puVar4[7];
        uStack_190 = puVar4[6];
        uStack_78 = puVar5[0x11];
        uStack_80 = puVar5[0x10];
        uStack_68 = puVar5[0x13];
        uStack_70 = puVar5[0x12];
        uStack_58 = puVar5[0x15];
        uStack_60 = puVar5[0x14];
        uStack_50 = puVar5[0x16];
        uStack_b8 = puVar5[9];
        uStack_c0 = puVar5[8];
        uStack_a8 = puVar5[0xb];
        uStack_b0 = puVar5[10];
        uStack_98 = puVar5[0xd];
        uStack_a0 = puVar5[0xc];
        uStack_88 = puVar5[0xf];
        uStack_90 = puVar5[0xe];
        uStack_f8 = puVar5[1];
        uStack_100 = *puVar5;
        uStack_e8 = puVar5[3];
        uStack_f0 = puVar5[2];
        uStack_d8 = puVar5[5];
        uStack_e0 = puVar5[4];
        uStack_c8 = puVar5[7];
        uStack_d0 = puVar5[6];
        func_0x000101553ce8(&uStack_1c0,auStack_278);
        func_0x000101553ce8(&uStack_100,auStack_278);
        puVar1 = &uStack_1c0;
        FUN_103592e48(puVar1,&uStack_100);
        uVar3 = (uint)puVar1;
        func_0x000101553d24(&uStack_100);
        func_0x000101553d24(&uStack_1c0);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0x17;
        puVar4 = puVar4 + 0x17;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 103588e30; end: 103588f03;  */

uint FUN_103588e30(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_88 = puVar4[1];
        uStack_90 = *puVar4;
        uStack_78 = puVar4[3];
        uStack_80 = puVar4[2];
        uStack_70 = puVar4[4];
        uStack_58 = puVar5[1];
        uStack_60 = *puVar5;
        uStack_48 = puVar5[3];
        uStack_50 = puVar5[2];
        uStack_40 = puVar5[4];
        func_0x000103589ccc(&uStack_90,auStack_b8);
        func_0x000103589ccc(&uStack_60,auStack_b8);
        puVar1 = &uStack_90;
        FUN_10358f844(puVar1,&uStack_60);
        uVar3 = (uint)puVar1;
        func_0x000103589d08(&uStack_60);
        func_0x000103589d08(&uStack_90);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 5;
        puVar4 = puVar4 + 5;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 103588f04; end: 10358952f;  */

void FUN_103588f04(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  ulong *puVar26;
  ulong *puVar27;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = *(long *)(param_1 + 0x10);
  if (lVar25 == *(long *)(param_2 + 0x10)) {
    if ((lVar25 != 0) && (param_1 != param_2)) {
      puVar26 = (ulong *)(param_2 + 0x50);
      puVar27 = (ulong *)(param_1 + 0x28);
      do {
        uVar20 = puVar27[-1];
        uVar4 = *puVar27;
        uVar12 = puVar27[1];
        uVar22 = puVar27[2];
        uVar5 = puVar27[3];
        uVar2 = puVar27[4];
        uVar6 = puVar27[5];
        uVar7 = puVar26[-5];
        uVar13 = puVar26[-4];
        uVar15 = puVar26[-3];
        uVar8 = puVar26[-2];
        uVar3 = puVar26[-1];
        uVar9 = *puVar26;
        if ((uVar20 == puVar26[-6]) && (uVar4 == uVar7)) {
          if ((int)uVar12 != (int)uVar13) goto LAB_1035894c8;
        }
        else {
          func_0x000107c605b8();
          uVar16 = 0;
          if (((uVar20 & 1) == 0) || ((int)uVar12 != (int)uVar13)) goto LAB_1035894d4;
        }
        if (((uVar22 != uVar15) || (uVar5 != uVar8)) &&
           (func_0x000107c605b8(uVar22,uVar5,uVar15,uVar8,0), (uVar22 & 1) == 0))
        goto LAB_1035894c8;
        uVar10 = (uint)(uVar6 >> 0x20);
        uVar18 = uVar10 >> 0x1e;
        uVar11 = (uint)(uVar9 >> 0x20);
        uVar21 = uVar11 >> 0x1e;
        iVar24 = (int)uVar2;
        if (uVar6 >> 0x3e == 3) {
          uVar20 = 0;
          if (((uVar2 != 0) || (uVar6 != 0xc000000000000000)) ||
             ((uVar9 >> 0x3e < 3 || ((uVar20 = 0, uVar3 != 0 || (uVar9 != 0xc000000000000000))))))
          goto joined_r0x00010358929c;
        }
        else {
          if (uVar10 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar20 = uVar6 >> 0x30 & 0xff;
            }
            else {
              iVar19 = (int)(uVar2 >> 0x20);
              if (SBORROW4(iVar19,iVar24)) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x103589518);
                (*pcVar14)();
              }
              uVar20 = (ulong)(iVar19 - iVar24);
            }
joined_r0x00010358929c:
            if (1 < uVar11 >> 0x1e) goto LAB_103589084;
LAB_1035890bc:
            if (uVar21 == 0) {
              uVar22 = uVar9 >> 0x30 & 0xff;
            }
            else {
              iVar19 = (int)(uVar3 >> 0x20);
              if (SBORROW4(iVar19,(int)uVar3)) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x103589514);
                (*pcVar14)();
              }
              uVar22 = (ulong)(iVar19 - (int)uVar3);
            }
          }
          else {
            if (uVar18 == 2) {
              uVar20 = *(long *)(uVar2 + 0x18) - *(long *)(uVar2 + 0x10);
              if (SBORROW8(*(long *)(uVar2 + 0x18),*(long *)(uVar2 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x10358951c);
                (*pcVar14)();
              }
              goto joined_r0x00010358929c;
            }
            uVar20 = 0;
            if (uVar21 < 2) goto LAB_1035890bc;
LAB_103589084:
            if (uVar21 != 2) {
              if (uVar20 == 0) goto LAB_103588f64;
              goto LAB_1035894c8;
            }
            uVar22 = *(long *)(uVar3 + 0x18) - *(long *)(uVar3 + 0x10);
            if (SBORROW8(*(long *)(uVar3 + 0x18),*(long *)(uVar3 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x103589510);
              (*pcVar14)();
            }
          }
          if (uVar20 != uVar22) goto LAB_1035894c8;
          if (0 < (long)uVar20) {
            if (uVar18 < 2) {
              if (uVar18 != 0) {
                lVar23 = (long)iVar24;
                uVar20 = ((long)uVar2 >> 0x20) - lVar23;
                if ((long)uVar2 >> 0x20 < lVar23) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)SoftwareBreakpoint(1,0x103589520);
                  (*pcVar14)();
                }
                func_0x000107c61434(uVar4);
                func_0x000107c61434(uVar5);
                func_0x00010006c00c(uVar2,uVar6);
                func_0x000107c61434(uVar7);
                func_0x000107c61434(uVar8);
                uVar22 = uVar3;
                func_0x00010006c00c(uVar3,uVar9);
                func_0x000107c5ec30();
                if (uVar22 == 0) {
                  func_0x000107c5ec38();
                  lVar23 = 0;
                  lVar17 = 0;
                }
                else {
                  uVar15 = uVar22;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar23,uVar15)) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)SoftwareBreakpoint(1,0x10358952c);
                    (*pcVar14)();
                  }
                  lVar1 = (lVar23 - uVar15) + uVar22;
                  func_0x000107c5ec38();
                  if ((long)uVar20 <= (long)uVar15) {
                    uVar15 = uVar20;
                  }
                  lVar23 = 0;
                  if (lVar1 != 0) {
                    lVar23 = lVar1;
                  }
                  lVar17 = 0;
                  if (lVar1 != 0) {
                    lVar17 = uVar15 + lVar1;
                  }
                }
                func_0x000100e25bdc(abStack_80,lVar23,lVar17,uVar3,uVar9);
                func_0x000107c6142c(uVar8);
                func_0x000107c6142c(uVar7);
                func_0x00010006c090(uVar3,uVar9);
                func_0x000107c6142c(uVar5);
                func_0x000107c6142c(uVar4);
LAB_1035894bc:
                func_0x00010006c090(uVar2,uVar6);
                if ((abStack_80[0] & 1) != 0) goto LAB_103588f64;
                goto LAB_1035894c8;
              }
              abStack_80[0] = (byte)uVar2;
              abStack_80[1] = (byte)(uVar2 >> 8);
              abStack_80[2] = (byte)(uVar2 >> 0x10);
              abStack_80[3] = (byte)(uVar2 >> 0x18);
              abStack_80[4] = (byte)(uVar2 >> 0x20);
              abStack_80[5] = (byte)(uVar2 >> 0x28);
              abStack_80[6] = (byte)(uVar2 >> 0x30);
              abStack_80[7] = (byte)(uVar2 >> 0x38);
              abStack_80[8] = (byte)uVar6;
              abStack_80[9] = (byte)(uVar6 >> 8);
              abStack_80[10] = (byte)(uVar6 >> 0x10);
              abStack_80[0xb] = (byte)(uVar6 >> 0x18);
              abStack_80[0xc] = (byte)(uVar6 >> 0x20);
              abStack_80[0xd] = (byte)(uVar6 >> 0x28);
              func_0x000107c61434(uVar4);
              func_0x000107c61434(uVar5);
              func_0x00010006c00c(uVar2,uVar6);
              func_0x000107c61434(uVar7);
              func_0x000107c61434(uVar8);
              func_0x00010006c00c(uVar3,uVar9);
              func_0x000100e25bdc(&bStack_81,abStack_80,abStack_80 + (uVar6 >> 0x30 & 0xff),uVar3,
                                  uVar9);
              func_0x000107c6142c(uVar8);
              func_0x000107c6142c(uVar7);
              func_0x00010006c090(uVar3,uVar9);
            }
            else {
              if (uVar18 == 2) {
                lVar23 = *(long *)(uVar2 + 0x10);
                lVar17 = *(long *)(uVar2 + 0x18);
                func_0x000107c61434(uVar4);
                func_0x000107c61434(uVar5);
                func_0x00010006c00c(uVar2,uVar6);
                func_0x000107c61434(uVar7);
                func_0x000107c61434(uVar8);
                uVar20 = uVar3;
                func_0x00010006c00c(uVar3,uVar9);
                func_0x000107c5ec30();
                uVar22 = uVar20;
                if (uVar20 != 0) {
                  func_0x000107c5ec3c(uVar6);
                  if (SBORROW8(lVar23,uVar22)) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)SoftwareBreakpoint(1,0x103589528);
                    (*pcVar14)();
                  }
                  uVar20 = (lVar23 - uVar22) + uVar20;
                }
                uVar15 = lVar17 - lVar23;
                if (SBORROW8(lVar17,lVar23)) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)SoftwareBreakpoint(1,0x103589524);
                  (*pcVar14)();
                }
                func_0x000107c5ec38(uVar6);
                if (uVar20 == 0) {
                  lVar23 = 0;
                }
                else {
                  if ((long)uVar15 <= (long)uVar22) {
                    uVar22 = uVar15;
                  }
                  lVar23 = uVar22 + uVar20;
                }
                func_0x000100e25bdc(abStack_80,uVar20,lVar23,uVar3,uVar9);
                func_0x000107c6142c(uVar8);
                func_0x000107c6142c(uVar7);
                func_0x00010006c090(uVar3,uVar9);
                func_0x000107c6142c(uVar5);
                func_0x000107c6142c(uVar4);
                goto LAB_1035894bc;
              }
              abStack_80[8] = 0;
              abStack_80[9] = 0;
              abStack_80[10] = 0;
              abStack_80[0xb] = 0;
              abStack_80[0xc] = 0;
              abStack_80[0xd] = 0;
              abStack_80[0] = 0;
              abStack_80[1] = 0;
              abStack_80[2] = 0;
              abStack_80[3] = 0;
              abStack_80[4] = 0;
              abStack_80[5] = 0;
              abStack_80[6] = 0;
              abStack_80[7] = 0;
              func_0x000107c61434(uVar4);
              func_0x000107c61434(uVar5);
              func_0x00010006c00c(uVar2,uVar6);
              func_0x000107c61434(uVar7);
              func_0x000107c61434(uVar8);
              func_0x00010006c00c(uVar3,uVar9);
              func_0x000100e25bdc(&bStack_81,abStack_80,abStack_80,uVar3,uVar9);
              func_0x000107c6142c(uVar8);
              func_0x000107c6142c(uVar7);
              func_0x00010006c090(uVar3,uVar9);
            }
            func_0x000107c6142c(uVar5);
            func_0x000107c6142c(uVar4);
            func_0x00010006c090(uVar2,uVar6);
            if ((bStack_81 & 1) == 0) goto LAB_1035894c8;
          }
        }
LAB_103588f64:
        puVar26 = puVar26 + 7;
        puVar27 = puVar27 + 7;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    uVar16 = 1;
  }
  else {
LAB_1035894c8:
    uVar16 = 0;
  }
LAB_1035894d4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78(uVar16);
  return;
}



/* Entry: 103589530; end: 10358953b;  */

void FUN_103589530(void)

{
  return;
}



/* Entry: 10358953c; end: 10358955b;  */

void FUN_10358953c(void)

{
  func_0x000107c61168(&PTR_PTR_112f79ca0);
  return;
}



/* Entry: 10358955c; end: 1035895a3;  */

undefined8 FUN_10358955c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035895a4; end: 10358966b;  */

/* WARNING: Possible PIC construction at 0x0001035895e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035895e4) */
/* WARNING: Removing unreachable block (ram,0x000101570e04) */
/* WARNING: Removing unreachable block (ram,0x000101570e14) */
/* WARNING: Removing unreachable block (ram,0x000101570e10) */

void FUN_1035895a4(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61434(param_2);
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c6157c(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_4 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10358966c; end: 1035896ab;  */

void FUN_10358966c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79c20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbde290;
  func_0x000107c61520(&UNK_10dbde290,&UNK_110666f08);
  puRam0000000112f79c20 = puVar1;
  return;
}



/* Entry: 1035896ac; end: 1035896bf;  */

void FUN_1035896ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035896c0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103589700)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035896c0; end: 10358973f;  */

void FUN_1035896c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79c28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbde1a8;
  func_0x000107c61520(&UNK_10dbde1a8,&UNK_110666e90);
  puRam0000000112f79c28 = puVar1;
  return;
}



/* Entry: 103589740; end: 103589743;  */

void FUN_103589740(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f79c38 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f79c40;
  func_0x00010002969c(0x112f79c40,&UNK_10dbde130);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f79c38 = puVar2;
  return;
}



/* Entry: 103589744; end: 103589793;  */

void FUN_103589744(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f79c38 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f79c40;
  func_0x00010002969c(0x112f79c40,&UNK_10dbde130);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f79c38 = puVar2;
  return;
}



/* Entry: 103589794; end: 103589797;  */

void FUN_103589794(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79c48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbde1e8;
  func_0x000107c61520(&UNK_10dbde1e8,&UNK_110666e90);
  puRam0000000112f79c48 = puVar1;
  return;
}



/* Entry: 103589798; end: 1035897d7;  */

void FUN_103589798(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79c48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbde1e8;
  func_0x000107c61520(&UNK_10dbde1e8,&UNK_110666e90);
  puRam0000000112f79c48 = puVar1;
  return;
}



/* Entry: 1035897d8; end: 1035897fb;  */

void FUN_1035897d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035897fc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035897fc; end: 10358983b;  */

void FUN_1035897fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79c50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbde268;
  func_0x000107c61520(&UNK_10dbde268,&UNK_110666f08);
  puRam0000000112f79c50 = puVar1;
  return;
}



/* Entry: 10358983c; end: 10358984f;  */

void FUN_10358983c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10358966c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&UNK_1015d5160)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103589850; end: 10358987f;  */

void FUN_103589850(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103589880; end: 103589883;  */

void FUN_103589880(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbde2d0;
  func_0x000107c61520(&UNK_10dbde2d0,&UNK_110666f08);
  puRam0000000112f79c58 = puVar1;
  return;
}



/* Entry: 103589884; end: 1035898c3;  */

void FUN_103589884(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbde2d0;
  func_0x000107c61520(&UNK_10dbde2d0,&UNK_110666f08);
  puRam0000000112f79c58 = puVar1;
  return;
}



/* Entry: 1035898c4; end: 103589963;  */

int FUN_1035898c4(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103589964; end: 10358998f;  */

void FUN_103589964(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 103589990; end: 103589a3b;  */

undefined8 * FUN_103589990(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 103589a3c; end: 103589a83;  */

undefined8 * FUN_103589a3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103589a84; end: 103589b1b;  */

int FUN_103589a84(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103589b1c; end: 103589c4b;  */

/* WARNING: Possible PIC construction at 0x000103589b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103589b70) */
/* WARNING: Removing unreachable block (ram,0x000100d55fdc) */
/* WARNING: Removing unreachable block (ram,0x000100d55fec) */
/* WARNING: Removing unreachable block (ram,0x000100d55fe8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103589b1c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  uVar1 = (uint)(param_5 >> 0x3e);
  if (uVar1 == 1) {
    param_4 = param_5 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4);
  return;
}



/* Entry: 103589c4c; end: 103589c8b;  */

void FUN_103589c4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbde23c;
  func_0x000107c61520(&DAT_10dbde23c,&UNK_110666f08);
  puRam0000000112f7a148 = puVar1;
  return;
}



/* Entry: 103589c8c; end: 103589d3b;  */

undefined8 FUN_103589c8c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103589d3c; end: 103589efb;  */

void FUN_103589d3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbdf3d0;
  func_0x000107c61520(&DAT_10dbdf3d0,&UNK_1106679c0);
  puRam0000000112f7a158 = puVar1;
  return;
}



/* Entry: 103589efc; end: 103589f47;  */

undefined8 * FUN_103589efc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 103589f48; end: 103589f87;  */

void FUN_103589f48(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7a1d8;
  func_0x0001000285a8(0x112f7a1d8,&UNK_10dbde7d0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103589f88; end: 103589fc3;  */

void FUN_103589f88(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 103589fc4; end: 10358a0a3;  */

void FUN_103589fc4(void)

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



/* Entry: 10358a0a4; end: 10358a0df;  */

bool FUN_10358a0a4(ulong *param_1,ulong *param_2)

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



/* Entry: 10358a0e0; end: 10358a127;  */

void FUN_10358a0e0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbde960,0x2c,2);
  uRam0000000113808b88 = uStack_38;
  uRam0000000113808b80 = uStack_40;
  uRam0000000113808b98 = uStack_28;
  uRam0000000113808b90 = uStack_30;
  uRam0000000113808ba8 = uStack_18;
  uRam0000000113808ba0 = uStack_20;
  return;
}



/* Entry: 10358a128; end: 10358a153;  */

void FUN_10358a128(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10358a154();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010358a194();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


