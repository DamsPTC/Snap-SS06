/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10358a154; end: 10358a1d3;  */

void FUN_10358a154(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a1e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbde870;
  func_0x000107c61520(&UNK_10dbde870,&UNK_1106670c0);
  puRam0000000112f7a1e8 = puVar1;
  return;
}



/* Entry: 10358a1d4; end: 10358a1d7;  */

void FUN_10358a1d4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7a1f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7a200;
  func_0x00010002969c(0x112f7a200,&UNK_10dbde7f8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7a1f8 = puVar2;
  return;
}



/* Entry: 10358a1d8; end: 10358a227;  */

void FUN_10358a1d8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7a1f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7a200;
  func_0x00010002969c(0x112f7a200,&UNK_10dbde7f8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7a1f8 = puVar2;
  return;
}



/* Entry: 10358a228; end: 10358a22b;  */

void FUN_10358a228(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a208 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbde8b0;
  func_0x000107c61520(&UNK_10dbde8b0,&UNK_1106670c0);
  puRam0000000112f7a208 = puVar1;
  return;
}



/* Entry: 10358a22c; end: 10358a26b;  */

void FUN_10358a22c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a208 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbde8b0;
  func_0x000107c61520(&UNK_10dbde8b0,&UNK_1106670c0);
  puRam0000000112f7a208 = puVar1;
  return;
}



/* Entry: 10358a26c; end: 10358a30b;  */

/* WARNING: Possible PIC construction at 0x00010358a2b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010358a2c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010358a2bc) */
/* WARNING: Removing unreachable block (ram,0x00010358a2cc) */

void FUN_10358a26c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7a1e0 != -1) {
    func_0x000107c61568(0x112f7a1e0,FUN_10358a0e0);
  }
  uVar5 = uRam0000000113808ba8;
  uVar4 = uRam0000000113808ba0;
  uVar3 = uRam0000000113808b98;
  uVar2 = uRam0000000113808b90;
  uVar1 = uRam0000000113808b88;
  *param_1 = uRam0000000113808b80;
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



/* Entry: 10358a30c; end: 10358a3db;  */

int FUN_10358a30c(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10358a3dc; end: 10358a41b;  */

void FUN_10358a3dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7a268;
  func_0x0001000285a8(0x112f7a268,&UNK_10dbde9b0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10358a41c; end: 10358a443;  */

void FUN_10358a41c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 10358a444; end: 10358a4ef;  */

void FUN_10358a444(void)

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



/* Entry: 10358a4f0; end: 10358a503;  */

bool FUN_10358a4f0(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10358a504; end: 10358a523;  */

void FUN_10358a504(void)

{
  func_0x000107c61168(&PTR_PTR_112f7a330);
  return;
}



/* Entry: 10358a524; end: 10358a56f;  */

undefined1  [16] FUN_10358a524(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x20,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x20);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x28));
  return auVar1;
}



/* Entry: 10358a570; end: 10358a63b;  */

void FUN_10358a570(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  func_0x000107c61428(param_4 + 0x40,auStack_a0,0,0);
  uVar1 = *(undefined8 *)(param_4 + 0x40);
  uVar3 = *(ulong *)(param_4 + 0x48);
  lVar2 = *(long *)(param_4 + 0x50);
  uVar4 = *(undefined8 *)(param_4 + 0x58);
  uVar5 = *(undefined8 *)(param_4 + 0x60);
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



/* Entry: 10358a63c; end: 10358a687;  */

undefined1  [16] FUN_10358a63c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x68,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x68);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x70));
  return auVar1;
}



/* Entry: 10358a688; end: 10358a79b;  */

void FUN_10358a688(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  func_0x000107c61428(param_4 + 0x88,auStack_d8,0,0);
  uStack_b8 = *(ulong *)(param_4 + 0x90);
  uStack_c0 = *(undefined8 *)(param_4 + 0x88);
  uStack_98 = *(undefined8 *)(param_4 + 0xb0);
  uStack_a0 = *(undefined8 *)(param_4 + 0xa8);
  uStack_88 = *(undefined8 *)(param_4 + 0xc0);
  uStack_90 = *(undefined8 *)(param_4 + 0xb8);
  uStack_78 = *(undefined8 *)(param_4 + 0xd0);
  uStack_80 = *(undefined8 *)(param_4 + 200);
  uStack_70 = *(undefined8 *)(param_4 + 0xd8);
  uStack_a8 = *(undefined8 *)(param_4 + 0xa0);
  uStack_b0 = *(undefined8 *)(param_4 + 0x98);
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
  FUN_10358ba48(&uStack_c0,auStack_130,0x112f79bf0,&UNK_10dbde100);
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



/* Entry: 10358a79c; end: 10358a823;  */

undefined1  [16] FUN_10358a79c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x140,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x140);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x148));
  return auVar1;
}



/* Entry: 10358a824; end: 10358a9d3;  */

void FUN_10358a824(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  bool bVar9;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x158,auStack_68,0,0);
  lVar8 = *(long *)(param_4 + 0x160);
  bVar9 = lVar8 != 0;
  uVar1 = 0;
  if (bVar9) {
    uVar1 = *(undefined8 *)(param_4 + 0x158);
  }
  lVar2 = -0x2000000000000000;
  if (bVar9) {
    lVar2 = lVar8;
  }
  uVar3 = 0;
  if (bVar9) {
    uVar3 = *(undefined8 *)(param_4 + 0x168);
  }
  uVar4 = 0xc000000000000000;
  if (bVar9) {
    uVar4 = *(undefined8 *)(param_4 + 0x170);
  }
  uVar5 = 0;
  if (bVar9) {
    uVar5 = *(undefined8 *)(param_4 + 0x178);
  }
  uVar6 = 0;
  if (lVar8 != 0) {
    uVar6 = *(undefined8 *)(param_4 + 0x180);
  }
  uVar7 = 0xf000000000000000;
  if (lVar8 != 0) {
    uVar7 = *(undefined8 *)(param_4 + 0x188);
  }
  FUN_1035895a4();
  *param_1 = uVar1;
  param_1[1] = lVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  return;
}



/* Entry: 10358a9d4; end: 10358aa53;  */

void FUN_10358a9d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x1c8,auStack_38,0,0);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x1c8));
  return;
}



/* Entry: 10358aa54; end: 10358ab77;  */

void FUN_10358aa54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  func_0x000107c61428((undefined8 *)(param_4 + 0x1e8),auStack_c8,0,0);
  uStack_68 = *(undefined8 *)(param_4 + 0x230);
  uStack_70 = *(undefined8 *)(param_4 + 0x228);
  uStack_58 = *(undefined8 *)(param_4 + 0x240);
  uStack_60 = *(undefined8 *)(param_4 + 0x238);
  uStack_50 = *(undefined8 *)(param_4 + 0x248);
  lStack_a8 = *(long *)(param_4 + 0x1f0);
  uStack_b0 = *(undefined8 *)(param_4 + 0x1e8);
  uStack_98 = *(undefined8 *)(param_4 + 0x200);
  uStack_a0 = *(undefined8 *)(param_4 + 0x1f8);
  uStack_88 = *(undefined8 *)(param_4 + 0x210);
  uStack_90 = *(undefined8 *)(param_4 + 0x208);
  uStack_78 = *(undefined8 *)(param_4 + 0x220);
  uStack_80 = *(undefined8 *)(param_4 + 0x218);
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
  FUN_10358ba48(&uStack_b0,auStack_130,0x112f79be0,&UNK_10dbde0f0);
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



/* Entry: 10358ab78; end: 10358ac13;  */

void FUN_10358ab78(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x280,auStack_38,0,0);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x280));
  return;
}



/* Entry: 10358ac14; end: 10358ac5b;  */

void FUN_10358ac14(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdf0c0,0x30,2);
  uRam0000000113808bb8 = uStack_38;
  uRam0000000113808bb0 = uStack_40;
  uRam0000000113808bc8 = uStack_28;
  uRam0000000113808bc0 = uStack_30;
  uRam0000000113808bd8 = uStack_18;
  uRam0000000113808bd0 = uStack_20;
  return;
}



/* Entry: 10358ac5c; end: 10358acfb;  */

/* WARNING: Possible PIC construction at 0x00010358aca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010358acb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010358acac) */
/* WARNING: Removing unreachable block (ram,0x00010358acbc) */

void FUN_10358ac5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7a280 != -1) {
    func_0x000107c61568(0x112f7a280,FUN_10358ac14);
  }
  uVar5 = uRam0000000113808bd8;
  uVar4 = uRam0000000113808bd0;
  uVar3 = uRam0000000113808bc8;
  uVar2 = uRam0000000113808bc0;
  uVar1 = uRam0000000113808bb8;
  *param_1 = uRam0000000113808bb0;
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



/* Entry: 10358acfc; end: 10358ad43;  */

void FUN_10358acfc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdee80,0x236,2);
  uRam0000000113808be8 = uStack_38;
  uRam0000000113808be0 = uStack_40;
  uRam0000000113808bf8 = uStack_28;
  uRam0000000113808bf0 = uStack_30;
  uRam0000000113808c08 = uStack_18;
  uRam0000000113808c00 = uStack_20;
  return;
}



/* Entry: 10358ad44; end: 10358ad7f;  */

void FUN_10358ad44(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10358a504();
  func_0x000107c613fc();
  FUN_10358ad80();
  uRam0000000112f7a278 = uVar1;
  return;
}



/* Entry: 10358ad80; end: 10358ae87;  */

void FUN_10358ad80(void)

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
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x90) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *(undefined **)(unaff_x20 + 0x138) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0xe000000000000000;
  *(undefined1 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined **)(unaff_x20 + 0x1c8) = puVar1;
  *(undefined **)(unaff_x20 + 0x1d0) = puVar1;
  *(undefined **)(unaff_x20 + 0x1d8) = puVar1;
  *(undefined **)(unaff_x20 + 0x1e0) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x250) = 0;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined1 *)(unaff_x20 + 600) = 1;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined1 *)(unaff_x20 + 0x268) = 1;
  *(undefined **)(unaff_x20 + 0x270) = puVar1;
  *(undefined **)(unaff_x20 + 0x278) = puVar1;
  *(undefined **)(unaff_x20 + 0x280) = puVar1;
  *(undefined **)(unaff_x20 + 0x288) = puVar1;
  *(undefined **)(unaff_x20 + 0x290) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0xe000000000000000;
  *(undefined **)(unaff_x20 + 0x2b8) = puVar1;
  *(undefined **)(unaff_x20 + 0x2c0) = puVar1;
  return;
}



/* Entry: 10358ae88; end: 10358ba47;  */

void FUN_10358ae88(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
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
  undefined1 auStack_6e8 [24];
  undefined1 auStack_6d0 [24];
  undefined1 auStack_6b8 [24];
  undefined1 auStack_6a0 [24];
  undefined1 auStack_688 [104];
  undefined1 auStack_620 [24];
  undefined1 auStack_608 [24];
  undefined1 auStack_5f0 [24];
  undefined1 auStack_5d8 [24];
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
  
  puVar23 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar23 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
  puVar21 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar21 = 0;
  puVar20 = (undefined8 *)(unaff_x20 + 0x30);
  *puVar20 = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  puVar18 = (undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *puVar18 = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0xe000000000000000;
  puVar12 = (undefined8 *)(unaff_x20 + 0x78);
  *puVar12 = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0xe000000000000000;
  puVar13 = (undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x90) = 0xf000000000000000;
  *puVar13 = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *(undefined **)(unaff_x20 + 0x138) = puVar11;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0xe000000000000000;
  *(undefined1 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined **)(unaff_x20 + 0x1c8) = puVar10;
  *(undefined **)(unaff_x20 + 0x1d0) = puVar10;
  *(undefined **)(unaff_x20 + 0x1d8) = puVar10;
  *(undefined **)(unaff_x20 + 0x1e0) = puVar10;
  puVar1 = (undefined8 *)(unaff_x20 + 0x1e8);
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x250) = 0;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined1 *)(unaff_x20 + 600) = 1;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined1 *)(unaff_x20 + 0x268) = 1;
  *(undefined **)(unaff_x20 + 0x270) = puVar10;
  *(undefined **)(unaff_x20 + 0x278) = puVar10;
  *(undefined **)(unaff_x20 + 0x280) = puVar10;
  *(undefined **)(unaff_x20 + 0x288) = puVar10;
  *(undefined **)(unaff_x20 + 0x290) = puVar10;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0xe000000000000000;
  *(undefined **)(unaff_x20 + 0x2b8) = puVar10;
  *(undefined **)(unaff_x20 + 0x2c0) = puVar10;
  func_0x000107c61428(param_1 + 0x10,auStack_2d8,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  uVar17 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61428(puVar23,auStack_2f0,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x18);
  *puVar23 = uVar15;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar17;
  func_0x000107c61434(uVar17);
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(param_1 + 0x20,auStack_308,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  uVar17 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61428(puVar21,auStack_320,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x28);
  *puVar21 = uVar15;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar17;
  func_0x000107c61434(uVar17);
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(param_1 + 0x30,auStack_338,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  uVar17 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61428(puVar20,auStack_350,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
  *puVar20 = uVar15;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar17;
  func_0x000107c61434(uVar17);
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(param_1 + 0x40,auStack_368,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar17 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar24 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c61428(puVar18,auStack_380,1,0);
  uVar19 = *puVar18;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
  *puVar18 = uVar15;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar24;
  func_0x000101541428(uVar15,uVar3,uVar17,uVar4,uVar24);
  func_0x000101553bdc(uVar19,uVar16,uVar5,uVar2,uVar6);
  func_0x000107c61428(param_1 + 0x68,auStack_398,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x68);
  uVar17 = *(undefined8 *)(param_1 + 0x70);
  func_0x000107c61428(unaff_x20 + 0x68,auStack_3b0,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar17;
  func_0x000107c61434(uVar17);
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(param_1 + 0x78,auStack_3c8,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x78);
  uVar17 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61428(puVar12,auStack_3e0,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x80);
  *puVar12 = uVar15;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar17;
  func_0x000107c61434(uVar17);
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(param_1 + 0x88,auStack_3f8,0,0);
  uStack_298 = *(undefined8 *)(param_1 + 0xb0);
  uStack_2a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_288 = *(undefined8 *)(param_1 + 0xc0);
  uStack_290 = *(undefined8 *)(param_1 + 0xb8);
  uStack_278 = *(undefined8 *)(param_1 + 0xd0);
  uStack_280 = *(undefined8 *)(param_1 + 200);
  uStack_270 = *(undefined8 *)(param_1 + 0xd8);
  uStack_2b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_2c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_2a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_2b0 = *(undefined8 *)(param_1 + 0x98);
  func_0x000107c61428(puVar13,auStack_410,1,0);
  uStack_238 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_240 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_230 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_218 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_220 = *(undefined8 *)(unaff_x20 + 200);
  uStack_258 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_260 = *puVar13;
  uStack_248 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_250 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_298;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_2a0;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_288;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_290;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_278;
  *(undefined8 *)(unaff_x20 + 200) = uStack_280;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_2b8;
  *puVar13 = uStack_2c0;
  uStack_210 = *(undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_270;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_2a8;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_2b0;
  FUN_10358ba48(&uStack_2c0,&uStack_d0,0x112f79bf0,&UNK_10dbde100);
  FUN_103590544(&uStack_260,0x112f79bf0,&UNK_10dbde100);
  func_0x000107c61428(param_1 + 0xe0,auStack_428,0,0);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x108);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x100);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x118);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x110);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x128);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x120);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x130);
  uStack_1f8 = *(undefined8 *)(param_1 + 0xe8);
  uStack_200 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1e8 = *(undefined8 *)(param_1 + 0xf8);
  uStack_1f0 = *(undefined8 *)(param_1 + 0xf0);
  func_0x000107c61428(unaff_x20 + 0xe0,auStack_440,1,0);
  uStack_178 = *(undefined8 *)(unaff_x20 + 0x108);
  uStack_180 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_168 = *(undefined8 *)(unaff_x20 + 0x118);
  uStack_170 = *(undefined8 *)(unaff_x20 + 0x110);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_198 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_1a0 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_188 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_190 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_1f8;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_200;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_1e8;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_1f0;
  FUN_10358ba48(&uStack_200,&uStack_d0,0x112f79bf0,&UNK_10dbde100);
  FUN_103590544(&uStack_1a0,0x112f79bf0,&UNK_10dbde100);
  func_0x000107c61428(param_1 + 0x138,auStack_458,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x138);
  func_0x000107c61428(unaff_x20 + 0x138,auStack_470,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x138);
  *(undefined8 *)(unaff_x20 + 0x138) = uVar15;
  func_0x000107c61434(uVar15);
  func_0x000107c6142c(uVar17);
  func_0x000107c61428(param_1 + 0x140,auStack_488,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x140);
  uVar17 = *(undefined8 *)(param_1 + 0x148);
  func_0x000107c61428(unaff_x20 + 0x140,auStack_4a0,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x148);
  *(undefined8 *)(unaff_x20 + 0x140) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x148) = uVar17;
  func_0x000107c61434(uVar17);
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(param_1 + 0x150,auStack_4b8,0,0);
  uVar9 = *(undefined1 *)(param_1 + 0x150);
  func_0x000107c61428(unaff_x20 + 0x150,auStack_4d0,1,0);
  *(undefined1 *)(unaff_x20 + 0x150) = uVar9;
  func_0x000107c61428(param_1 + 0x158,auStack_4e8,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x158);
  uVar5 = *(undefined8 *)(param_1 + 0x160);
  uVar17 = *(undefined8 *)(param_1 + 0x168);
  uVar6 = *(undefined8 *)(param_1 + 0x170);
  uVar16 = *(undefined8 *)(param_1 + 0x178);
  uVar19 = *(undefined8 *)(param_1 + 0x180);
  uVar22 = *(undefined8 *)(param_1 + 0x188);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x158),auStack_500,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x158);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x160);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x168);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x170);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x178);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x180);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x188);
  *(undefined8 *)(unaff_x20 + 0x158) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x160) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x168) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x170) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x178) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x180) = uVar19;
  *(undefined8 *)(unaff_x20 + 0x188) = uVar22;
  FUN_1035895a4(uVar15,uVar5,uVar17,uVar6,uVar16,uVar19,uVar22);
  func_0x000103589608(uVar2,uVar24,uVar3,uVar7,uVar4,uVar8,uVar14);
  func_0x000107c61428(param_1 + 400,auStack_518,0,0);
  uVar15 = *(undefined8 *)(param_1 + 400);
  uVar5 = *(undefined8 *)(param_1 + 0x198);
  uVar17 = *(undefined8 *)(param_1 + 0x1a0);
  uVar6 = *(undefined8 *)(param_1 + 0x1a8);
  uVar16 = *(undefined8 *)(param_1 + 0x1b0);
  uVar19 = *(undefined8 *)(param_1 + 0x1b8);
  uVar22 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x000107c61428(unaff_x20 + 400,auStack_530,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 400);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x198);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x1c0);
  *(undefined8 *)(unaff_x20 + 400) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x198) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uVar19;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uVar22;
  FUN_1035895a4(uVar15,uVar5,uVar17,uVar6,uVar16,uVar19,uVar22);
  func_0x000103589608(uVar2,uVar24,uVar3,uVar7,uVar4,uVar8,uVar14);
  func_0x000107c61428(param_1 + 0x1c8,auStack_548,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x000107c61428(unaff_x20 + 0x1c8,auStack_560,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x1c8);
  *(undefined8 *)(unaff_x20 + 0x1c8) = uVar15;
  func_0x000107c61434(uVar15);
  func_0x000107c6142c(uVar17);
  func_0x000107c61428(param_1 + 0x1d0,auStack_578,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x1d0);
  func_0x000107c61428(unaff_x20 + 0x1d0,auStack_590,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x1d0);
  *(undefined8 *)(unaff_x20 + 0x1d0) = uVar15;
  func_0x000107c61434(uVar15);
  func_0x000107c6142c(uVar17);
  func_0x000107c61428(param_1 + 0x1d8,auStack_5a8,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x000107c61428(unaff_x20 + 0x1d8,auStack_5c0,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x1d8);
  *(undefined8 *)(unaff_x20 + 0x1d8) = uVar15;
  func_0x000107c61434(uVar15);
  func_0x000107c6142c(uVar17);
  func_0x000107c61428(param_1 + 0x1e0,auStack_5d8,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x1e0);
  func_0x000107c61428(unaff_x20 + 0x1e0,auStack_5f0,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x1e0);
  *(undefined8 *)(unaff_x20 + 0x1e0) = uVar15;
  func_0x000107c61434(uVar15);
  func_0x000107c6142c(uVar17);
  func_0x000107c61428((undefined8 *)(param_1 + 0x1e8),auStack_608,0,0);
  uStack_f8 = *(undefined8 *)(param_1 + 0x230);
  uStack_100 = *(undefined8 *)(param_1 + 0x228);
  uStack_e8 = *(undefined8 *)(param_1 + 0x240);
  uStack_f0 = *(undefined8 *)(param_1 + 0x238);
  uStack_e0 = *(undefined8 *)(param_1 + 0x248);
  uStack_138 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_140 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_128 = *(undefined8 *)(param_1 + 0x200);
  uStack_130 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_118 = *(undefined8 *)(param_1 + 0x210);
  uStack_120 = *(undefined8 *)(param_1 + 0x208);
  uStack_108 = *(undefined8 *)(param_1 + 0x220);
  uStack_110 = *(undefined8 *)(param_1 + 0x218);
  func_0x000107c61428(puVar1,auStack_620,1,0);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x230);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x228);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x240);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x238);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x248);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uStack_d0 = *puVar1;
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x200);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x1f8);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x210);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x208);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x220);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x218);
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_138;
  *puVar1 = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x248) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x230) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x228) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x240) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x238) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_120;
  *(undefined8 *)(unaff_x20 + 0x220) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_110;
  FUN_10358ba48(&uStack_140,auStack_688,0x112f79be0,&UNK_10dbde0f0);
  FUN_103590544(&uStack_d0,0x112f79be0,&UNK_10dbde0f0);
  func_0x000107c61428(param_1 + 0x250,auStack_688,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x250);
  uVar9 = *(undefined1 *)(param_1 + 600);
  func_0x000107c61428(unaff_x20 + 0x250,auStack_6a0,1,0);
  *(undefined8 *)(unaff_x20 + 0x250) = uVar15;
  *(undefined1 *)(unaff_x20 + 600) = uVar9;
  func_0x000107c61428(param_1 + 0x260,auStack_6b8,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x260);
  uVar9 = *(undefined1 *)(param_1 + 0x268);
  func_0x000107c61428(unaff_x20 + 0x260,auStack_6d0,1,0);
  *(undefined8 *)(unaff_x20 + 0x260) = uVar15;
  *(undefined1 *)(unaff_x20 + 0x268) = uVar9;
  func_0x000107c61428(param_1 + 0x270,auStack_6e8,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x270);
  func_0x000107c61428(unaff_x20 + 0x270,auStack_700,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x270);
  *(undefined8 *)(unaff_x20 + 0x270) = uVar15;
  func_0x000107c61434(uVar15);
  func_0x000107c6142c(uVar17);
  func_0x000107c61428(param_1 + 0x278,auStack_718,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x278);
  func_0x000107c61428(unaff_x20 + 0x278,auStack_730,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x278);
  *(undefined8 *)(unaff_x20 + 0x278) = uVar15;
  func_0x000107c61434(uVar15);
  func_0x000107c6142c(uVar17);
  func_0x000107c61428(param_1 + 0x280,auStack_748,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x280);
  func_0x000107c61428(unaff_x20 + 0x280,auStack_760,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x280);
  *(undefined8 *)(unaff_x20 + 0x280) = uVar15;
  func_0x000107c61434(uVar15);
  func_0x000107c6142c(uVar17);
  func_0x000107c61428(param_1 + 0x288,auStack_778,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x288);
  func_0x000107c61428(unaff_x20 + 0x288,auStack_790,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x288);
  *(undefined8 *)(unaff_x20 + 0x288) = uVar15;
  func_0x000107c61434(uVar15);
  func_0x000107c6142c(uVar17);
  func_0x000107c61428(param_1 + 0x290,auStack_7a8,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x290);
  func_0x000107c61428(unaff_x20 + 0x290,auStack_7c0,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x290);
  *(undefined8 *)(unaff_x20 + 0x290) = uVar15;
  func_0x000107c61434(uVar15);
  func_0x000107c6142c(uVar17);
  func_0x000107c61428(param_1 + 0x298,auStack_7d8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x298);
  uVar15 = *(undefined8 *)(param_1 + 0x2a0);
  func_0x000107c61428(unaff_x20 + 0x298,auStack_7f0,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x2a0);
  *(undefined8 *)(unaff_x20 + 0x298) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uVar15;
  func_0x000107c61434(uVar15);
  func_0x000107c6142c(uVar17);
  func_0x000107c61428(param_1 + 0x2a8,auStack_808,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x2a8);
  uVar15 = *(undefined8 *)(param_1 + 0x2b0);
  func_0x000107c61428(unaff_x20 + 0x2a8,auStack_820,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x2b0);
  *(undefined8 *)(unaff_x20 + 0x2a8) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x2b0) = uVar15;
  func_0x000107c61434(uVar15);
  func_0x000107c6142c(uVar17);
  func_0x000107c61428(param_1 + 0x2b8,auStack_838,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x2b8);
  func_0x000107c61428(unaff_x20 + 0x2b8,auStack_850,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x2b8);
  *(undefined8 *)(unaff_x20 + 0x2b8) = uVar15;
  func_0x000107c61434(uVar15);
  func_0x000107c6142c(uVar17);
  func_0x000107c61428(param_1 + 0x2c0,auStack_868,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x2c0);
  func_0x000107c61434(uVar17);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x2c0,auStack_880,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x2c0);
  *(undefined8 *)(unaff_x20 + 0x2c0) = uVar17;
  func_0x000107c6142c(uVar15);
  return;
}



/* Entry: 10358ba48; end: 10358ba8f;  */

undefined8 FUN_10358ba48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10358ba90; end: 10358bc1f;  */

void FUN_10358ba90(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000101553bdc(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000103589bb4(*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                      *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                      *(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000103589bb4(*(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                      *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                      *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                      *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                      *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                      *(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000103589608(*(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                      *(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                      *(undefined8 *)(unaff_x20 + 0x178),*(undefined8 *)(unaff_x20 + 0x180),
                      *(undefined8 *)(unaff_x20 + 0x188));
  func_0x000103589608(*(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                      *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                      *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                      *(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000103589b1c(*(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                      *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                      *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                      *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                      *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230),
                      *(undefined8 *)(unaff_x20 + 0x238),*(undefined8 *)(unaff_x20 + 0x240),
                      *(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x2c0));
  return;
}



/* Entry: 10358bc20; end: 10358bcaf;  */

void FUN_10358bc20(void)

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
    FUN_10358a504(0);
    func_0x000107c613fc();
    FUN_10358ae88(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_10358bcb0();
  return;
}



/* Entry: 10358bcb0; end: 10358c0e3;  */

/* WARNING: Removing unreachable block (ram,0x00010358bff0) */
/* WARNING: Removing unreachable block (ram,0x00010358c04c) */
/* WARNING: Removing unreachable block (ram,0x00010358be40) */
/* WARNING: Removing unreachable block (ram,0x00010358be08) */
/* WARNING: Removing unreachable block (ram,0x00010358bdec) */
/* WARNING: Removing unreachable block (ram,0x00010358c00c) */
/* WARNING: Removing unreachable block (ram,0x00010358bf78) */
/* WARNING: Removing unreachable block (ram,0x00010358c068) */
/* WARNING: Removing unreachable block (ram,0x00010358bea4) */
/* WARNING: Removing unreachable block (ram,0x00010358bdd0) */
/* WARNING: Removing unreachable block (ram,0x00010358c0a0) */
/* WARNING: Removing unreachable block (ram,0x00010358bfb8) */
/* WARNING: Removing unreachable block (ram,0x00010358c084) */
/* WARNING: Removing unreachable block (ram,0x00010358bf5c) */
/* WARNING: Removing unreachable block (ram,0x00010358bee4) */
/* WARNING: Removing unreachable block (ram,0x00010358bfd4) */
/* WARNING: Removing unreachable block (ram,0x00010358be24) */
/* WARNING: Removing unreachable block (ram,0x00010358bf1c) */
/* WARNING: Removing unreachable block (ram,0x00010358bf00) */
/* WARNING: Removing unreachable block (ram,0x00010358c0bc) */

void FUN_10358bcb0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
        goto code_r0x00010358bd38;
      case 2:
        func_0x000107c61428(param_1 + 0x20,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x20;
        goto code_r0x00010358bd38;
      case 3:
        func_0x000107c61428(param_1 + 0x30,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x30;
        goto code_r0x00010358bd38;
      case 4:
        FUN_10358c0e4(param_2,param_1,param_3,param_4);
        break;
      case 5:
        func_0x000107c61428(param_1 + 0x68,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x68;
        goto code_r0x00010358bd38;
      case 6:
        func_0x000107c61428(param_1 + 0x78,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x78;
        goto code_r0x00010358bd38;
      case 7:
        FUN_10358c178(param_2,param_1,param_3,param_4);
        break;
      case 8:
        FUN_10358c20c(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_10358c2a0(param_2,param_1,param_3,param_4);
        break;
      case 10:
        func_0x000107c61428(param_1 + 0x140,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x140;
        goto code_r0x00010358bd38;
      case 0xb:
        func_0x000107c61428(param_1 + 0x150,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x150;
        goto code_r0x00010358bd38;
      case 0xc:
        FUN_10358c340(param_2,param_1,param_3,param_4);
        break;
      case 0xd:
        FUN_10358c3d4(param_2,param_1,param_3,param_4);
        break;
      case 0xe:
        FUN_10358c468(param_2,param_1,param_3,param_4);
        break;
      case 0xf:
        FUN_10358c4fc(param_2,param_1,param_3,param_4);
        break;
      case 0x10:
        FUN_10358c590(param_2,param_1,param_3,param_4);
        break;
      case 0x11:
        FUN_10358c624(param_2,param_1,param_3,param_4);
        break;
      case 0x12:
        FUN_10358c6b8(param_2,param_1,param_3,param_4);
        break;
      case 0x13:
        FUN_10358c74c(param_2,param_1,param_3,param_4);
        break;
      case 0x14:
        FUN_10358c7e0(param_2,param_1,param_3,param_4);
        break;
      case 0x15:
        FUN_10358c874(param_2,param_1,param_3,param_4);
        break;
      case 0x16:
        FUN_10358c908(param_2,param_1,param_3,param_4);
        break;
      case 0x17:
        FUN_10358c99c(param_2,param_1,param_3,param_4);
        break;
      case 0x18:
        FUN_10358ca30(param_2,param_1,param_3,param_4);
        break;
      case 0x19:
        FUN_10358cac4(param_2,param_1,param_3,param_4);
        break;
      case 0x1a:
        func_0x000107c61428(param_1 + 0x298,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x298;
        goto code_r0x00010358bd38;
      case 0x1b:
        func_0x000107c61428(param_1 + 0x2a8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x2a8;
code_r0x00010358bd38:
        (*pcVar3)(lVar2,param_3,param_4);
        func_0x000107c614a8(auStack_68);
        break;
      case 0x1c:
        FUN_10358cb58(param_2,param_1,param_3,param_4);
        break;
      case 0x1d:
        FUN_10358cbec(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10358c0e4; end: 10358c177;  */

void FUN_10358c0e4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x40;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015cabb8();
  (*pcVar2)(param_2 + 0x40,&UNK_110679698,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358c178; end: 10358c20b;  */

void FUN_10358c178(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x88;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103589e7c();
  (*pcVar2)(param_2 + 0x88,&UNK_110667660,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358c20c; end: 10358c29f;  */

void FUN_10358c20c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xe0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103589e7c();
  (*pcVar2)(param_2 + 0xe0,&UNK_110667660,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358c2a0; end: 10358c33f;  */

void FUN_10358c2a0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x138,auStack_58,0x21,0);
  (**(code **)(param_4 + 0x1b8))
            (param_2 + 0x138,&UNK_110787f98,&UNK_110787f98,&PTR_DAT_110787db0,&PTR_DAT_110787dc8,
             param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358c340; end: 10358c3d3;  */

void FUN_10358c340(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x158;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103589e3c();
  (*pcVar2)(param_2 + 0x158,&UNK_110667810,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358c3d4; end: 10358c467;  */

void FUN_10358c3d4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 400;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103589e3c();
  (*pcVar2)(param_2 + 400,&UNK_110667810,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358c468; end: 10358c4fb;  */

void FUN_10358c468(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1c8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x0001015cabb8();
  (*pcVar2)(param_2 + 0x1c8,&UNK_110679698,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358c4fc; end: 10358c58f;  */

void FUN_10358c4fc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1d0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x0001015cabb8();
  (*pcVar2)(param_2 + 0x1d0,&UNK_110679698,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358c590; end: 10358c623;  */

void FUN_10358c590(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1d8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_103589d3c();
  (*pcVar2)(param_2 + 0x1d8,&UNK_1106679c0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358c624; end: 10358c6b7;  */

void FUN_10358c624(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1e0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_103589d3c();
  (*pcVar2)(param_2 + 0x1e0,&UNK_1106679c0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358c6b8; end: 10358c74b;  */

void FUN_10358c6b8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1e8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103589ebc();
  (*pcVar2)(param_2 + 0x1e8,&UNK_110667d40,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358c74c; end: 10358c7df;  */

void FUN_10358c74c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x250;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103589dfc();
  (*pcVar2)(param_2 + 0x250,&UNK_110667370,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358c7e0; end: 10358c873;  */

void FUN_10358c7e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x260;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103589dfc();
  (*pcVar2)(param_2 + 0x260,&UNK_110667370,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358c874; end: 10358c907;  */

void FUN_10358c874(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x270;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_103589d3c();
  (*pcVar2)(param_2 + 0x270,&UNK_1106679c0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358c908; end: 10358c99b;  */

void FUN_10358c908(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x278;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_103589d3c();
  (*pcVar2)(param_2 + 0x278,&UNK_1106679c0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358c99c; end: 10358ca2f;  */

void FUN_10358c99c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x280;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_103589d3c();
  (*pcVar2)(param_2 + 0x280,&UNK_1106679c0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358ca30; end: 10358cac3;  */

void FUN_10358ca30(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x288;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000103589d7c();
  (*pcVar2)(param_2 + 0x288,&UNK_110667468,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358cac4; end: 10358cb57;  */

void FUN_10358cac4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x290;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000103589d7c();
  (*pcVar2)(param_2 + 0x290,&UNK_110667468,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358cb58; end: 10358cbeb;  */

void FUN_10358cb58(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x2b8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000103589dbc();
  (*pcVar2)(param_2 + 0x2b8,&UNK_110667b90,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358cbec; end: 10358cc7f;  */

void FUN_10358cbec(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x2c0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000103589dbc();
  (*pcVar2)(param_2 + 0x2c0,&UNK_110667b90,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358cc80; end: 10358cceb;  */

void FUN_10358cc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_10358ccec(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 10358ccec; end: 10358d6db;  */

void FUN_10358ccec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long unaff_x21;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  long lStack_1b8;
  undefined1 uStack_1b0;
  long lStack_1a0;
  undefined1 uStack_198;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
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
    if (unaff_x21 != 0) goto LAB_10358ce44;
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
    if (unaff_x21 != 0) goto LAB_10358ce44;
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
    if (unaff_x21 != 0) goto LAB_10358ce44;
    func_0x000107c6142c(uVar4);
  }
  FUN_10358d6dc(param_1,param_2,param_3,param_4);
  if (unaff_x21 != 0) {
    return;
  }
  func_0x000107c61428(param_1 + 0x68,auStack_b0,0,0);
  uVar2 = *(ulong *)(param_1 + 0x68);
  uVar4 = *(ulong *)(param_1 + 0x70);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar2,uVar4,5,param_3,param_4);
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c61428(param_1 + 0x78,auStack_c8,0,0);
  uVar2 = *(ulong *)(param_1 + 0x78);
  uVar4 = *(ulong *)(param_1 + 0x80);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar2,uVar4,6,param_3,param_4);
    func_0x000107c6142c(uVar4);
  }
  FUN_10358d788(param_1,param_2,param_3,param_4);
  FUN_10358d84c(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0x138,auStack_e0,0,0);
  lVar3 = *(long *)(param_1 + 0x138);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x198);
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x140,auStack_f8,0,0);
  uVar2 = *(ulong *)(param_1 + 0x140);
  uVar4 = *(ulong *)(param_1 + 0x148);
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
  func_0x000107c61428(param_1 + 0x150,auStack_110,0,0);
  if (*(char *)(param_1 + 0x150) == '\x01') {
    (**(code **)(param_4 + 0x68))(1,0xb,param_3,param_4);
  }
  FUN_10358d908(param_1,param_2,param_3,param_4);
  FUN_10358d9b8(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0x1c8,auStack_128,0,0);
  lVar3 = *(long *)(param_1 + 0x1c8);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    func_0x0001015cabb8();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x1d0,auStack_140,0,0);
  lVar3 = *(long *)(param_1 + 0x1d0);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    func_0x0001015cabb8();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x1d8,auStack_158,0,0);
  lVar3 = *(long *)(param_1 + 0x1d8);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    FUN_103589d3c();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x1e0,auStack_170,0,0);
  lVar3 = *(long *)(param_1 + 0x1e0);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    FUN_103589d3c();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  FUN_10358da64(param_1,param_2,param_3,param_4);
  lVar3 = param_1 + 0x250;
  func_0x000107c61428(lVar3,auStack_188,0,0);
  if (*(long *)(param_1 + 0x250) != 0) {
    uStack_198 = *(undefined1 *)(param_1 + 600);
    pcVar5 = *(code **)(param_4 + 0x80);
    lStack_1a0 = *(long *)(param_1 + 0x250);
    func_0x000103589dfc();
    (*pcVar5)(&lStack_1a0,0x13,&UNK_110667370,lVar3,param_3,param_4);
  }
  lVar3 = param_1 + 0x260;
  func_0x000107c61428(lVar3,&lStack_1a0,0,0);
  if (*(long *)(param_1 + 0x260) != 0) {
    uStack_1b0 = *(undefined1 *)(param_1 + 0x268);
    pcVar5 = *(code **)(param_4 + 0x80);
    lStack_1b8 = *(long *)(param_1 + 0x260);
    func_0x000103589dfc();
    (*pcVar5)(&lStack_1b8,0x14,&UNK_110667370,lVar3,param_3,param_4);
  }
  func_0x000107c61428(param_1 + 0x270,&lStack_1b8,0,0);
  lVar3 = *(long *)(param_1 + 0x270);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    FUN_103589d3c();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x278,auStack_1d0,0,0);
  lVar3 = *(long *)(param_1 + 0x278);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    FUN_103589d3c();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x280,auStack_1e8,0,0);
  lVar3 = *(long *)(param_1 + 0x280);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    FUN_103589d3c();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x288,auStack_200,0,0);
  lVar3 = *(long *)(param_1 + 0x288);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    func_0x000103589d7c();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x290,auStack_218,0,0);
  lVar3 = *(long *)(param_1 + 0x290);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    func_0x000103589d7c();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x298,auStack_230,0,0);
  uVar2 = *(ulong *)(param_1 + 0x298);
  uVar4 = *(ulong *)(param_1 + 0x2a0);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar2,uVar4,0x1a,param_3,param_4);
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c61428(param_1 + 0x2a8,auStack_248,0,0);
  uVar2 = *(ulong *)(param_1 + 0x2a8);
  uVar4 = *(ulong *)(param_1 + 0x2b0);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar2,uVar4,0x1b,param_3,param_4);
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c61428(param_1 + 0x2b8,auStack_260,0,0);
  lVar3 = *(long *)(param_1 + 0x2b8);
  if (*(long *)(lVar3 + 0x10) != 0) {
    pcVar5 = *(code **)(param_4 + 0x118);
    func_0x000103589dbc();
    func_0x000107c61434(lVar3);
    (*pcVar5)();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61428(param_1 + 0x2c0,auStack_278,0,0);
  uVar4 = *(ulong *)(param_1 + 0x2c0);
  if (*(long *)(uVar4 + 0x10) == 0) {
    return;
  }
  pcVar5 = *(code **)(param_4 + 0x118);
  func_0x000103589dbc();
  func_0x000107c61434(uVar4);
  (*pcVar5)();
LAB_10358ce44:
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 10358d6dc; end: 10358d787;  */

void FUN_10358d6dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_80;
  undefined1 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x40;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x50);
  if (lStack_70 != 0) {
    uStack_80 = *(undefined8 *)(param_1 + 0x40);
    uStack_78 = (undefined1)*(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    uStack_68 = *(undefined8 *)(param_1 + 0x58);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015cabb8();
    (*pcVar2)(&uStack_80,4,&UNK_110679698,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10358d788; end: 10358d84b;  */

void FUN_10358d788(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  lVar1 = param_1 + 0x88;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_a8 = *(ulong *)(param_1 + 0x90);
  if (uStack_a8 >> 0x3c < 0xf) {
    uStack_b0 = *(undefined8 *)(param_1 + 0x88);
    uStack_88 = *(undefined8 *)(param_1 + 0xb0);
    uStack_90 = *(undefined8 *)(param_1 + 0xa8);
    uStack_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_80 = *(undefined8 *)(param_1 + 0xb8);
    uStack_68 = *(undefined8 *)(param_1 + 0xd0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    uStack_60 = *(undefined8 *)(param_1 + 0xd8);
    uStack_98 = *(undefined8 *)(param_1 + 0xa0);
    uStack_a0 = *(undefined8 *)(param_1 + 0x98);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103589e7c();
    (*pcVar2)(&uStack_b0,7,&UNK_110667660,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10358d84c; end: 10358d907;  */

void FUN_10358d84c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  lVar1 = param_1 + 0xe0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_a8 = *(ulong *)(param_1 + 0xe8);
  if (uStack_a8 >> 0x3c < 0xf) {
    uStack_b0 = *(undefined8 *)(param_1 + 0xe0);
    uStack_78 = *(undefined8 *)(param_1 + 0x118);
    uStack_80 = *(undefined8 *)(param_1 + 0x110);
    uStack_68 = *(undefined8 *)(param_1 + 0x128);
    uStack_70 = *(undefined8 *)(param_1 + 0x120);
    uStack_60 = *(undefined8 *)(param_1 + 0x130);
    uStack_98 = *(undefined8 *)(param_1 + 0xf8);
    uStack_a0 = *(undefined8 *)(param_1 + 0xf0);
    uStack_88 = *(undefined8 *)(param_1 + 0x108);
    uStack_90 = *(undefined8 *)(param_1 + 0x100);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103589e7c();
    (*pcVar2)(&uStack_b0,8,&UNK_110667660,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10358d908; end: 10358d9b7;  */

void FUN_10358d908(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  lVar1 = param_1 + 0x158;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_88 = *(long *)(param_1 + 0x160);
  if (lStack_88 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x188);
    uStack_90 = *(undefined8 *)(param_1 + 0x158);
    uStack_78 = *(undefined8 *)(param_1 + 0x170);
    uStack_80 = *(undefined8 *)(param_1 + 0x168);
    uStack_68 = *(undefined8 *)(param_1 + 0x180);
    uStack_70 = *(undefined8 *)(param_1 + 0x178);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103589e3c();
    (*pcVar2)(&uStack_90,0xc,&UNK_110667810,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10358d9b8; end: 10358da63;  */

void FUN_10358d9b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  lVar1 = param_1 + 400;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_88 = *(long *)(param_1 + 0x198);
  if (lStack_88 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x1c0);
    uStack_90 = *(undefined8 *)(param_1 + 400);
    uStack_78 = *(undefined8 *)(param_1 + 0x1a8);
    uStack_80 = *(undefined8 *)(param_1 + 0x1a0);
    uStack_68 = *(undefined8 *)(param_1 + 0x1b8);
    uStack_70 = *(undefined8 *)(param_1 + 0x1b0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103589e3c();
    (*pcVar2)(&uStack_90,0xd,&UNK_110667810,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10358da64; end: 10358db23;  */

void FUN_10358da64(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  lVar1 = param_1 + 0x1e8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_b8 = *(long *)(param_1 + 0x1f0);
  if (lStack_b8 != 0) {
    uStack_c0 = *(undefined8 *)(param_1 + 0x1e8);
    uStack_88 = *(undefined8 *)(param_1 + 0x220);
    uStack_90 = *(undefined8 *)(param_1 + 0x218);
    uStack_78 = *(undefined8 *)(param_1 + 0x230);
    uStack_80 = *(undefined8 *)(param_1 + 0x228);
    uStack_68 = *(undefined8 *)(param_1 + 0x240);
    uStack_70 = *(undefined8 *)(param_1 + 0x238);
    uStack_60 = *(undefined8 *)(param_1 + 0x248);
    uStack_a8 = *(undefined8 *)(param_1 + 0x200);
    uStack_b0 = *(undefined8 *)(param_1 + 0x1f8);
    uStack_98 = *(undefined8 *)(param_1 + 0x210);
    uStack_a0 = *(undefined8 *)(param_1 + 0x208);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103589ebc();
    (*pcVar2)(&uStack_c0,0x12,&UNK_110667d40,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10358db24; end: 10358dbd3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10358db24(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
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
    FUN_10358dbd4(param_3,param_6);
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



/* Entry: 10358dbd4; end: 10358f1c3;  */

uint FUN_10358dbd4(long param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_cb8 [104];
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined1 auStack_be8 [24];
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
  undefined8 uStack_a50;
  ulong uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  ulong uStack_9f0;
  undefined8 uStack_9e8;
  long lStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  ulong uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  long lStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  ulong uStack_920;
  undefined8 uStack_918;
  long lStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined1 auStack_8b0 [24];
  undefined1 auStack_898 [24];
  undefined8 uStack_880;
  ulong uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  ulong uStack_820;
  undefined8 uStack_810;
  long lStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined1 auStack_7a8 [24];
  undefined1 auStack_790 [24];
  undefined1 auStack_778 [24];
  undefined1 auStack_760 [24];
  undefined1 auStack_748 [24];
  undefined1 auStack_730 [24];
  undefined1 auStack_718 [24];
  undefined1 auStack_700 [24];
  undefined1 auStack_6e8 [24];
  undefined1 auStack_6d0 [24];
  undefined1 auStack_6b8 [24];
  undefined1 auStack_6a0 [24];
  undefined1 auStack_688 [24];
  undefined1 auStack_670 [24];
  undefined1 auStack_658 [24];
  undefined1 auStack_640 [24];
  undefined1 auStack_628 [24];
  undefined1 auStack_610 [24];
  undefined1 auStack_5f8 [24];
  undefined8 uStack_5e0;
  ulong uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_580;
  ulong uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 auStack_520 [24];
  undefined1 auStack_508 [24];
  undefined8 uStack_4f0;
  ulong uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_490;
  ulong uStack_488;
  undefined8 uStack_480;
  long lStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 auStack_438 [24];
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [24];
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [24];
  undefined1 auStack_3c0 [24];
  undefined1 auStack_3a8 [24];
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
  undefined8 uStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
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
  undefined1 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x000107c61428(param_1 + 0x10,auStack_3a8,0,0);
  func_0x000107c61428(param_2 + 0x10,&uStack_980,0x20,0);
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 == *(ulong *)(param_2 + 0x10) && *(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18))
  {
    func_0x000107c614a8(&uStack_980);
LAB_10358dc5c:
    func_0x000107c61428(param_1 + 0x20,auStack_3c0,0,0);
    func_0x000107c61428(param_2 + 0x20,&uStack_980,0x20,0);
    uVar4 = *(ulong *)(param_1 + 0x20);
    if ((uVar4 == *(ulong *)(param_2 + 0x20)) &&
       (*(long *)(param_1 + 0x28) == *(long *)(param_2 + 0x28))) {
      func_0x000107c614a8(&uStack_980);
    }
    else {
      func_0x000107c605b8();
      func_0x000107c614a8(&uStack_980);
      if ((uVar4 & 1) == 0) goto LAB_10358e3a0;
    }
    func_0x000107c61428(param_1 + 0x30,auStack_3d8,0,0);
    func_0x000107c61428(param_2 + 0x30,&uStack_980,0x20,0);
    uVar4 = *(ulong *)(param_1 + 0x30);
    if ((uVar4 == *(ulong *)(param_2 + 0x30)) &&
       (*(long *)(param_1 + 0x38) == *(long *)(param_2 + 0x38))) {
      func_0x000107c614a8(&uStack_980);
    }
    else {
      func_0x000107c605b8();
      func_0x000107c614a8(&uStack_980);
      if ((uVar4 & 1) == 0) goto LAB_10358e3a0;
    }
    func_0x000107c61428(param_1 + 0x40,auStack_3f0,0,0);
    func_0x000107c61428(param_2 + 0x40,auStack_408,0,0);
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    uVar15 = *(undefined8 *)(param_1 + 0x48);
    lVar7 = *(long *)(param_1 + 0x50);
    uVar21 = *(undefined8 *)(param_1 + 0x58);
    uVar13 = *(undefined8 *)(param_1 + 0x60);
    uVar12 = *(undefined8 *)(param_2 + 0x40);
    uVar20 = *(undefined8 *)(param_2 + 0x48);
    lVar10 = *(long *)(param_2 + 0x50);
    uVar17 = *(undefined8 *)(param_2 + 0x58);
    uVar19 = *(undefined8 *)(param_2 + 0x60);
    if (lVar7 == 0) {
      if (lVar10 != 0) goto LAB_10358de0c;
      func_0x000101541428(uVar11,uVar15,0,uVar21,uVar13);
      func_0x000101541428(uVar12,uVar20,0,uVar17,uVar19);
      func_0x000101553bdc(uVar11,uVar15,0,uVar21,uVar13);
LAB_10358deb8:
      func_0x000107c61428(param_1 + 0x68,auStack_420,0,0);
      func_0x000107c61428(param_2 + 0x68,&uStack_980,0x20,0);
      uVar4 = *(ulong *)(param_1 + 0x68);
      if ((uVar4 == *(ulong *)(param_2 + 0x68)) &&
         (*(long *)(param_1 + 0x70) == *(long *)(param_2 + 0x70))) {
        func_0x000107c614a8(&uStack_980);
      }
      else {
        func_0x000107c605b8();
        func_0x000107c614a8(&uStack_980);
        if ((uVar4 & 1) == 0) goto LAB_10358e3a0;
      }
      func_0x000107c61428(param_1 + 0x78,auStack_438,0,0);
      func_0x000107c61428(param_2 + 0x78,&uStack_980,0x20,0);
      uVar4 = *(ulong *)(param_1 + 0x78);
      if ((uVar4 == *(ulong *)(param_2 + 0x78)) &&
         (*(long *)(param_1 + 0x80) == *(long *)(param_2 + 0x80))) {
        func_0x000107c614a8(&uStack_980);
      }
      else {
        func_0x000107c605b8();
        func_0x000107c614a8(&uStack_980);
        if ((uVar4 & 1) == 0) goto LAB_10358e3a0;
      }
      func_0x000107c61428(param_1 + 0x88,auStack_508,0,0);
      func_0x000107c61428(param_2 + 0x88,auStack_520,0,0);
      uStack_958 = *(undefined8 *)(param_1 + 0xb0);
      uStack_960 = *(undefined8 *)(param_1 + 0xa8);
      uStack_948 = *(undefined8 *)(param_1 + 0xc0);
      uStack_950 = *(undefined8 *)(param_1 + 0xb8);
      uStack_938 = *(undefined8 *)(param_1 + 0xd0);
      lStack_940 = *(undefined8 *)(param_1 + 200);
      uStack_930 = *(undefined8 *)(param_1 + 0xd8);
      uStack_978 = *(ulong *)(param_1 + 0x90);
      uStack_980 = *(undefined8 *)(param_1 + 0x88);
      uStack_968 = *(undefined8 *)(param_1 + 0xa0);
      uStack_970 = *(undefined8 *)(param_1 + 0x98);
      uStack_9a8 = *(undefined8 *)(param_2 + 0xd8);
      uStack_9b0 = *(undefined8 *)(param_2 + 0xd0);
      uStack_9b8 = *(undefined8 *)(param_2 + 200);
      uStack_9c0 = *(undefined8 *)(param_2 + 0xc0);
      uStack_9c8 = *(undefined8 *)(param_2 + 0xb8);
      uStack_9d0 = *(undefined8 *)(param_2 + 0xb0);
      uStack_9d8 = *(undefined8 *)(param_2 + 0xa8);
      lStack_9e0 = *(long *)(param_2 + 0xa0);
      uStack_9e8 = *(undefined8 *)(param_2 + 0x98);
      uStack_9f0 = *(ulong *)(param_2 + 0x90);
      uStack_9f8 = *(undefined8 *)(param_2 + 0x88);
      uStack_928 = uStack_9f8;
      uStack_920 = uStack_9f0;
      uStack_918 = uStack_9e8;
      lStack_910 = lStack_9e0;
      uStack_908 = uStack_9d8;
      uStack_900 = uStack_9d0;
      uStack_8f8 = uStack_9c8;
      uStack_8f0 = uStack_9c0;
      uStack_8e8 = uStack_9b8;
      uStack_8e0 = uStack_9b0;
      uStack_8d8 = uStack_9a8;
      uStack_4f0 = uStack_980;
      uStack_4e8 = uStack_978;
      uStack_4e0 = uStack_970;
      uStack_4d8 = uStack_968;
      uStack_4d0 = uStack_960;
      uStack_4c8 = uStack_958;
      uStack_4c0 = uStack_950;
      uStack_4b8 = uStack_948;
      uStack_4b0 = lStack_940;
      uStack_4a8 = uStack_938;
      uStack_4a0 = uStack_930;
      uStack_490 = uStack_9f8;
      uStack_488 = uStack_9f0;
      uStack_480 = uStack_9e8;
      lStack_478 = lStack_9e0;
      uStack_470 = uStack_9d8;
      uStack_468 = uStack_9d0;
      uStack_460 = uStack_9c8;
      uStack_458 = uStack_9c0;
      uStack_450 = uStack_9b8;
      uStack_448 = uStack_9b0;
      uStack_440 = uStack_9a8;
      if (uStack_978 >> 0x3c < 0xf) {
        if (0xe < uStack_9f0 >> 0x3c) goto LAB_10358e0dc;
        uStack_a28 = *(undefined8 *)(param_2 + 0xb0);
        uStack_a30 = *(undefined8 *)(param_2 + 0xa8);
        uStack_a18 = *(undefined8 *)(param_2 + 0xc0);
        uStack_a20 = *(undefined8 *)(param_2 + 0xb8);
        uStack_a08 = *(undefined8 *)(param_2 + 0xd0);
        uStack_a10 = *(undefined8 *)(param_2 + 200);
        uStack_a00 = *(undefined8 *)(param_2 + 0xd8);
        uStack_a48 = *(undefined8 *)(param_2 + 0x90);
        uStack_a50 = *(undefined8 *)(param_2 + 0x88);
        uStack_a38 = *(undefined8 *)(param_2 + 0xa0);
        uStack_a40 = *(undefined8 *)(param_2 + 0x98);
        uStack_158 = *(undefined8 *)(param_1 + 0xb0);
        uStack_160 = *(undefined8 *)(param_1 + 0xa8);
        uStack_148 = *(undefined8 *)(param_1 + 0xc0);
        uStack_150 = *(undefined8 *)(param_1 + 0xb8);
        uStack_138 = *(undefined8 *)(param_1 + 0xd0);
        uStack_140 = *(undefined8 *)(param_1 + 200);
        uStack_130 = *(undefined8 *)(param_1 + 0xd8);
        uStack_178 = *(undefined8 *)(param_1 + 0x90);
        uStack_180 = *(undefined8 *)(param_1 + 0x88);
        uStack_168 = *(undefined8 *)(param_1 + 0xa0);
        uStack_170 = *(undefined8 *)(param_1 + 0x98);
        uStack_120 = uStack_a50;
        uStack_118 = uStack_a48;
        uStack_110 = uStack_a40;
        uStack_108 = uStack_a38;
        uStack_100 = uStack_a30;
        uStack_f8 = uStack_a28;
        uStack_f0 = uStack_a20;
        uStack_e8 = uStack_a18;
        uStack_e0 = uStack_a10;
        uStack_d8 = uStack_a08;
        uStack_d0 = uStack_a00;
        FUN_10358ba48(&uStack_4f0,&uStack_390,0x112f79bf0,&UNK_10dbde100);
        FUN_10358ba48(&uStack_490,&uStack_390,0x112f79bf0,&UNK_10dbde100);
        puVar3 = &uStack_180;
        FUN_103590adc(puVar3,&uStack_120);
        FUN_103590544(&uStack_a50,0x112f79bf0,&UNK_10dbde100);
        FUN_103590544(&uStack_980,0x112f79bf0,&UNK_10dbde100);
        if (((ulong)puVar3 & 1) == 0) goto LAB_10358e3a0;
LAB_10358e214:
        func_0x000107c61428(param_1 + 0xe0,auStack_5f8,0,0);
        func_0x000107c61428(param_2 + 0xe0,auStack_610,0,0);
        uStack_958 = *(undefined8 *)(param_1 + 0x108);
        uStack_960 = *(undefined8 *)(param_1 + 0x100);
        uStack_948 = *(undefined8 *)(param_1 + 0x118);
        uStack_950 = *(undefined8 *)(param_1 + 0x110);
        uStack_938 = *(undefined8 *)(param_1 + 0x128);
        lStack_940 = *(undefined8 *)(param_1 + 0x120);
        uStack_930 = *(undefined8 *)(param_1 + 0x130);
        uStack_978 = *(ulong *)(param_1 + 0xe8);
        uStack_980 = *(undefined8 *)(param_1 + 0xe0);
        uStack_968 = *(undefined8 *)(param_1 + 0xf8);
        uStack_970 = *(undefined8 *)(param_1 + 0xf0);
        uStack_9a8 = *(undefined8 *)(param_2 + 0x130);
        uStack_9c0 = *(undefined8 *)(param_2 + 0x118);
        uStack_9c8 = *(undefined8 *)(param_2 + 0x110);
        uStack_9b0 = *(undefined8 *)(param_2 + 0x128);
        uStack_9b8 = *(undefined8 *)(param_2 + 0x120);
        lStack_9e0 = *(long *)(param_2 + 0xf8);
        uStack_9e8 = *(undefined8 *)(param_2 + 0xf0);
        uStack_9d0 = *(undefined8 *)(param_2 + 0x108);
        uStack_9d8 = *(undefined8 *)(param_2 + 0x100);
        uStack_9f0 = *(ulong *)(param_2 + 0xe8);
        uStack_9f8 = *(undefined8 *)(param_2 + 0xe0);
        uStack_928 = uStack_9f8;
        uStack_920 = uStack_9f0;
        uStack_918 = uStack_9e8;
        lStack_910 = lStack_9e0;
        uStack_908 = uStack_9d8;
        uStack_900 = uStack_9d0;
        uStack_8f8 = uStack_9c8;
        uStack_8f0 = uStack_9c0;
        uStack_8e8 = uStack_9b8;
        uStack_8e0 = uStack_9b0;
        uStack_8d8 = uStack_9a8;
        uStack_5e0 = uStack_980;
        uStack_5d8 = uStack_978;
        uStack_5d0 = uStack_970;
        uStack_5c8 = uStack_968;
        uStack_5c0 = uStack_960;
        uStack_5b8 = uStack_958;
        uStack_5b0 = uStack_950;
        uStack_5a8 = uStack_948;
        uStack_5a0 = lStack_940;
        uStack_598 = uStack_938;
        uStack_590 = uStack_930;
        uStack_580 = uStack_9f8;
        uStack_578 = uStack_9f0;
        uStack_570 = uStack_9e8;
        lStack_568 = lStack_9e0;
        uStack_560 = uStack_9d8;
        uStack_558 = uStack_9d0;
        uStack_550 = uStack_9c8;
        uStack_548 = uStack_9c0;
        uStack_540 = uStack_9b8;
        uStack_538 = uStack_9b0;
        uStack_530 = uStack_9a8;
        if (uStack_978 >> 0x3c < 0xf) {
          if (0xe < uStack_9f0 >> 0x3c) {
LAB_10358e330:
            uStack_a50 = uStack_980;
            uStack_a48 = uStack_978;
            uStack_a40 = uStack_970;
            uStack_a38 = uStack_968;
            uStack_a30 = uStack_960;
            uStack_a28 = uStack_958;
            uStack_a20 = uStack_950;
            uStack_a18 = uStack_948;
            uStack_a10 = lStack_940;
            uStack_a08 = uStack_938;
            uStack_a00 = uStack_930;
            FUN_10358ba48(&uStack_5e0,&uStack_390,0x112f79bf0,&UNK_10dbde100);
            puVar3 = &uStack_580;
            goto LAB_10358e378;
          }
          uStack_a28 = *(undefined8 *)(param_2 + 0x108);
          uStack_a30 = *(undefined8 *)(param_2 + 0x100);
          uStack_a18 = *(undefined8 *)(param_2 + 0x118);
          uStack_a20 = *(undefined8 *)(param_2 + 0x110);
          uStack_a08 = *(undefined8 *)(param_2 + 0x128);
          uStack_a10 = *(undefined8 *)(param_2 + 0x120);
          uStack_a00 = *(undefined8 *)(param_2 + 0x130);
          uStack_a48 = *(undefined8 *)(param_2 + 0xe8);
          uStack_a50 = *(undefined8 *)(param_2 + 0xe0);
          uStack_a38 = *(undefined8 *)(param_2 + 0xf8);
          uStack_a40 = *(undefined8 *)(param_2 + 0xf0);
          uStack_218 = *(undefined8 *)(param_1 + 0x108);
          uStack_220 = *(undefined8 *)(param_1 + 0x100);
          uStack_208 = *(undefined8 *)(param_1 + 0x118);
          uStack_210 = *(undefined8 *)(param_1 + 0x110);
          uStack_1f8 = *(undefined8 *)(param_1 + 0x128);
          uStack_200 = *(undefined8 *)(param_1 + 0x120);
          uStack_1f0 = *(undefined8 *)(param_1 + 0x130);
          uStack_238 = *(undefined8 *)(param_1 + 0xe8);
          uStack_240 = *(undefined8 *)(param_1 + 0xe0);
          uStack_228 = *(undefined8 *)(param_1 + 0xf8);
          uStack_230 = *(undefined8 *)(param_1 + 0xf0);
          uStack_1e0 = uStack_a50;
          uStack_1d8 = uStack_a48;
          uStack_1d0 = uStack_a40;
          uStack_1c8 = uStack_a38;
          uStack_1c0 = uStack_a30;
          uStack_1b8 = uStack_a28;
          uStack_1b0 = uStack_a20;
          uStack_1a8 = uStack_a18;
          uStack_1a0 = uStack_a10;
          uStack_198 = uStack_a08;
          uStack_190 = uStack_a00;
          FUN_10358ba48(&uStack_5e0,&uStack_390,0x112f79bf0,&UNK_10dbde100);
          FUN_10358ba48(&uStack_580,&uStack_390,0x112f79bf0,&UNK_10dbde100);
          puVar3 = &uStack_240;
          FUN_103590adc(puVar3,&uStack_1e0);
          FUN_103590544(&uStack_a50,0x112f79bf0,&UNK_10dbde100);
          FUN_103590544(&uStack_980,0x112f79bf0,&UNK_10dbde100);
          if (((ulong)puVar3 & 1) == 0) goto LAB_10358e3a0;
        }
        else {
          if (uStack_9f0 >> 0x3c < 0xf) goto LAB_10358e330;
          uStack_a28 = *(undefined8 *)(param_1 + 0x108);
          uStack_a30 = *(undefined8 *)(param_1 + 0x100);
          uStack_a18 = *(undefined8 *)(param_1 + 0x118);
          uStack_a20 = *(undefined8 *)(param_1 + 0x110);
          uStack_a08 = *(undefined8 *)(param_1 + 0x128);
          uStack_a10 = *(undefined8 *)(param_1 + 0x120);
          uStack_a00 = *(undefined8 *)(param_1 + 0x130);
          uStack_a48 = *(undefined8 *)(param_1 + 0xe8);
          uStack_a50 = *(undefined8 *)(param_1 + 0xe0);
          uStack_a38 = *(undefined8 *)(param_1 + 0xf8);
          uStack_a40 = *(undefined8 *)(param_1 + 0xf0);
          FUN_10358ba48(&uStack_5e0,&uStack_390,0x112f79bf0,&UNK_10dbde100);
          FUN_10358ba48(&uStack_580,&uStack_390,0x112f79bf0,&UNK_10dbde100);
          FUN_103590544(&uStack_a50,0x112f79bf0,&UNK_10dbde100);
        }
        func_0x000107c61428(param_1 + 0x138,auStack_628,0,0);
        uVar9 = *(ulong *)(param_1 + 0x138);
        func_0x000107c61428(param_2 + 0x138,auStack_640,0,0);
        uVar11 = *(undefined8 *)(param_2 + 0x138);
        func_0x000107c61434(uVar9);
        func_0x000107c61434(uVar11);
        uVar4 = uVar9;
        func_0x000101058cd4(uVar9,uVar11);
        func_0x000107c6142c(uVar9);
        func_0x000107c6142c(uVar11);
        if ((uVar4 & 1) != 0) {
          func_0x000107c61428(param_1 + 0x140,auStack_658,0,0);
          func_0x000107c61428(param_2 + 0x140,&uStack_980,0x20,0);
          uVar4 = *(ulong *)(param_1 + 0x140);
          if ((uVar4 == *(ulong *)(param_2 + 0x140)) &&
             (*(long *)(param_1 + 0x148) == *(long *)(param_2 + 0x148))) {
            func_0x000107c614a8(&uStack_980);
          }
          else {
            func_0x000107c605b8();
            func_0x000107c614a8(&uStack_980);
            if ((uVar4 & 1) == 0) goto LAB_10358e3a0;
          }
          func_0x000107c61428(param_1 + 0x150,auStack_670,0,0);
          cVar2 = *(char *)(param_1 + 0x150);
          func_0x000107c61428(param_2 + 0x150,auStack_688,0,0);
          if (cVar2 == *(char *)(param_2 + 0x150)) {
            func_0x000107c61428(param_1 + 0x158,auStack_6a0,0,0);
            func_0x000107c61428(param_2 + 0x158,auStack_6b8,0,0);
            uVar11 = *(undefined8 *)(param_1 + 0x158);
            lVar7 = *(long *)(param_1 + 0x160);
            uVar12 = *(undefined8 *)(param_1 + 0x168);
            uVar13 = *(undefined8 *)(param_1 + 0x170);
            uVar15 = *(undefined8 *)(param_1 + 0x178);
            uVar19 = *(undefined8 *)(param_1 + 0x180);
            uVar6 = *(undefined8 *)(param_1 + 0x188);
            uVar21 = *(undefined8 *)(param_2 + 0x158);
            lVar10 = *(long *)(param_2 + 0x160);
            uVar20 = *(undefined8 *)(param_2 + 0x168);
            uVar18 = *(undefined8 *)(param_2 + 0x170);
            uVar17 = *(undefined8 *)(param_2 + 0x178);
            uVar16 = *(undefined8 *)(param_2 + 0x180);
            uVar14 = *(undefined8 *)(param_2 + 0x188);
            if (lVar7 == 0) {
              if (lVar10 == 0) {
                FUN_1035895a4(uVar11,0);
                FUN_1035895a4(uVar21,0,uVar20,uVar18,uVar17,uVar16,uVar14);
                func_0x000103589608(uVar11,0,uVar12,uVar13,uVar15,uVar19,uVar6);
LAB_10358e6f8:
                func_0x000107c61428(param_1 + 400,auStack_6d0,0,0);
                func_0x000107c61428(param_2 + 400,auStack_6e8,0,0);
                uVar11 = *(undefined8 *)(param_1 + 400);
                lVar7 = *(long *)(param_1 + 0x198);
                uVar12 = *(undefined8 *)(param_1 + 0x1a0);
                uVar13 = *(undefined8 *)(param_1 + 0x1a8);
                uVar15 = *(undefined8 *)(param_1 + 0x1b0);
                uVar19 = *(undefined8 *)(param_1 + 0x1b8);
                uVar6 = *(undefined8 *)(param_1 + 0x1c0);
                uVar21 = *(undefined8 *)(param_2 + 400);
                lVar10 = *(long *)(param_2 + 0x198);
                uVar20 = *(undefined8 *)(param_2 + 0x1a0);
                uVar18 = *(undefined8 *)(param_2 + 0x1a8);
                uVar17 = *(undefined8 *)(param_2 + 0x1b0);
                uVar16 = *(undefined8 *)(param_2 + 0x1b8);
                uVar14 = *(undefined8 *)(param_2 + 0x1c0);
                if (lVar7 == 0) {
                  if (lVar10 != 0) goto LAB_10358e818;
                  FUN_1035895a4(uVar11,0);
                  FUN_1035895a4(uVar21,0,uVar20,uVar18,uVar17,uVar16,uVar14);
                  func_0x000103589608(uVar11,0,uVar12,uVar13,uVar15,uVar19,uVar6);
                }
                else {
                  if (lVar10 == 0) goto LAB_10358e818;
                  uStack_320 = uVar11;
                  lStack_318 = lVar7;
                  uStack_310 = uVar12;
                  uStack_308 = uVar13;
                  uStack_300 = uVar15;
                  uStack_2f8 = uVar19;
                  uStack_2f0 = uVar6;
                  uStack_2e8 = uVar21;
                  lStack_2e0 = lVar10;
                  uStack_2d8 = uVar20;
                  uStack_2d0 = uVar18;
                  uStack_2c8 = uVar17;
                  uStack_2c0 = uVar16;
                  uStack_2b8 = uVar14;
                  FUN_1035895a4();
                  FUN_1035895a4(uVar21,lVar10,uVar20,uVar18,uVar17,uVar16,uVar14);
                  puVar3 = &uStack_320;
                  FUN_103591e08(puVar3,&uStack_2e8);
                  func_0x000103589608(uVar21,lVar10,uVar20,uVar18,uVar17,uVar16,uVar14);
                  func_0x000103589608(uVar11,lVar7,uVar12,uVar13,uVar15,uVar19,uVar6);
                  if (((ulong)puVar3 & 1) == 0) goto LAB_10358e3a0;
                }
                func_0x000107c61428(param_1 + 0x1c8,auStack_700,0,0);
                uVar9 = *(ulong *)(param_1 + 0x1c8);
                func_0x000107c61428(param_2 + 0x1c8,auStack_718,0,0);
                uVar11 = *(undefined8 *)(param_2 + 0x1c8);
                func_0x000107c61434(uVar9);
                func_0x000107c61434(uVar11);
                uVar4 = uVar9;
                FUN_103588c2c(uVar9,uVar11);
                func_0x000107c6142c(uVar9);
                func_0x000107c6142c(uVar11);
                if ((uVar4 & 1) != 0) {
                  func_0x000107c61428(param_1 + 0x1d0,auStack_730,0,0);
                  uVar9 = *(ulong *)(param_1 + 0x1d0);
                  func_0x000107c61428(param_2 + 0x1d0,auStack_748,0,0);
                  uVar11 = *(undefined8 *)(param_2 + 0x1d0);
                  func_0x000107c61434(uVar9);
                  func_0x000107c61434(uVar11);
                  uVar4 = uVar9;
                  FUN_103588c2c(uVar9,uVar11);
                  func_0x000107c6142c(uVar9);
                  func_0x000107c6142c(uVar11);
                  if ((uVar4 & 1) != 0) {
                    func_0x000107c61428(param_1 + 0x1d8,auStack_760,0,0);
                    uVar9 = *(ulong *)(param_1 + 0x1d8);
                    func_0x000107c61428(param_2 + 0x1d8,auStack_778,0,0);
                    uVar11 = *(undefined8 *)(param_2 + 0x1d8);
                    func_0x000107c61434(uVar9);
                    func_0x000107c61434(uVar11);
                    uVar4 = uVar9;
                    FUN_103588d00(uVar9,uVar11);
                    func_0x000107c6142c(uVar9);
                    func_0x000107c6142c(uVar11);
                    if ((uVar4 & 1) != 0) {
                      func_0x000107c61428(param_1 + 0x1e0,auStack_790,0,0);
                      uVar9 = *(ulong *)(param_1 + 0x1e0);
                      func_0x000107c61428(param_2 + 0x1e0,auStack_7a8,0,0);
                      uVar11 = *(undefined8 *)(param_2 + 0x1e0);
                      func_0x000107c61434(uVar9);
                      func_0x000107c61434(uVar11);
                      uVar4 = uVar9;
                      FUN_103588d00(uVar9,uVar11);
                      func_0x000107c6142c(uVar9);
                      func_0x000107c6142c(uVar11);
                      if ((uVar4 & 1) != 0) {
                        puVar3 = (undefined8 *)(param_1 + 0x1e8);
                        func_0x000107c61428(puVar3,auStack_898,0,0);
                        puVar1 = (undefined8 *)(param_2 + 0x1e8);
                        func_0x000107c61428(puVar1,auStack_8b0,0,0);
                        uStack_938 = *(undefined8 *)(param_1 + 0x230);
                        lStack_940 = *(undefined8 *)(param_1 + 0x228);
                        uStack_928 = *(undefined8 *)(param_1 + 0x240);
                        uStack_930 = *(undefined8 *)(param_1 + 0x238);
                        uStack_920 = *(ulong *)(param_1 + 0x248);
                        uStack_978 = *(ulong *)(param_1 + 0x1f0);
                        uStack_980 = *puVar3;
                        uStack_968 = *(undefined8 *)(param_1 + 0x200);
                        uStack_970 = *(undefined8 *)(param_1 + 0x1f8);
                        uStack_958 = *(undefined8 *)(param_1 + 0x210);
                        uStack_960 = *(undefined8 *)(param_1 + 0x208);
                        uStack_948 = *(undefined8 *)(param_1 + 0x220);
                        uStack_950 = *(undefined8 *)(param_1 + 0x218);
                        lStack_9e0 = *(long *)(param_2 + 0x1f0);
                        uStack_9e8 = *puVar1;
                        uStack_9d0 = *(undefined8 *)(param_2 + 0x200);
                        uStack_9d8 = *(undefined8 *)(param_2 + 0x1f8);
                        uStack_988 = *(undefined8 *)(param_2 + 0x248);
                        uStack_9a0 = *(undefined8 *)(param_2 + 0x230);
                        uStack_9a8 = *(undefined8 *)(param_2 + 0x228);
                        uStack_990 = *(undefined8 *)(param_2 + 0x240);
                        uStack_998 = *(undefined8 *)(param_2 + 0x238);
                        uStack_9c0 = *(undefined8 *)(param_2 + 0x210);
                        uStack_9c8 = *(undefined8 *)(param_2 + 0x208);
                        uStack_9b0 = *(undefined8 *)(param_2 + 0x220);
                        uStack_9b8 = *(undefined8 *)(param_2 + 0x218);
                        uStack_918 = uStack_9e8;
                        lStack_910 = lStack_9e0;
                        uStack_908 = uStack_9d8;
                        uStack_900 = uStack_9d0;
                        uStack_8f8 = uStack_9c8;
                        uStack_8f0 = uStack_9c0;
                        uStack_8e8 = uStack_9b8;
                        uStack_8e0 = uStack_9b0;
                        uStack_8d8 = uStack_9a8;
                        uStack_8d0 = uStack_9a0;
                        uStack_8c8 = uStack_998;
                        uStack_8c0 = uStack_990;
                        uStack_8b8 = uStack_988;
                        uStack_880 = uStack_980;
                        uStack_878 = uStack_978;
                        uStack_870 = uStack_970;
                        uStack_868 = uStack_968;
                        uStack_860 = uStack_960;
                        uStack_858 = uStack_958;
                        uStack_850 = uStack_950;
                        uStack_848 = uStack_948;
                        uStack_840 = lStack_940;
                        uStack_838 = uStack_938;
                        uStack_830 = uStack_930;
                        uStack_828 = uStack_928;
                        uStack_820 = uStack_920;
                        uStack_810 = uStack_9e8;
                        lStack_808 = lStack_9e0;
                        uStack_800 = uStack_9d8;
                        uStack_7f8 = uStack_9d0;
                        uStack_7f0 = uStack_9c8;
                        uStack_7e8 = uStack_9c0;
                        uStack_7e0 = uStack_9b8;
                        uStack_7d8 = uStack_9b0;
                        uStack_7d0 = uStack_9a8;
                        uStack_7c8 = uStack_9a0;
                        uStack_7c0 = uStack_998;
                        uStack_7b8 = uStack_990;
                        uStack_7b0 = uStack_988;
                        if (uStack_978 == 0) {
                          if (lStack_9e0 != 0) goto LAB_10358ec0c;
                          uStack_a08 = *(undefined8 *)(param_1 + 0x230);
                          uStack_a10 = *(undefined8 *)(param_1 + 0x228);
                          uStack_9f8 = *(undefined8 *)(param_1 + 0x240);
                          uStack_a00 = *(undefined8 *)(param_1 + 0x238);
                          uStack_9f0 = *(undefined8 *)(param_1 + 0x248);
                          uStack_a48 = *(undefined8 *)(param_1 + 0x1f0);
                          uStack_a50 = *puVar3;
                          uStack_a38 = *(undefined8 *)(param_1 + 0x200);
                          uStack_a40 = *(undefined8 *)(param_1 + 0x1f8);
                          uStack_a28 = *(undefined8 *)(param_1 + 0x210);
                          uStack_a30 = *(undefined8 *)(param_1 + 0x208);
                          uStack_a18 = *(undefined8 *)(param_1 + 0x220);
                          uStack_a20 = *(undefined8 *)(param_1 + 0x218);
                          FUN_10358ba48(&uStack_880,&uStack_390,0x112f79be0,&UNK_10dbde0f0);
                          FUN_10358ba48(&uStack_810,&uStack_390,0x112f79be0,&UNK_10dbde0f0);
                          FUN_103590544(&uStack_a50,0x112f79be0,&UNK_10dbde0f0);
LAB_10358ecf8:
                          func_0x000107c61428(param_1 + 0x250,&uStack_980,0,0);
                          lVar10 = *(long *)(param_1 + 0x250);
                          func_0x000107c61428(param_2 + 0x250,&uStack_c50,0,0);
                          lVar7 = *(long *)(param_2 + 0x250);
                          if (*(char *)(param_2 + 600) == '\x01') {
                            if (lVar7 == 0) {
                              if (lVar10 == 0) goto LAB_10358ed70;
                            }
                            else if (lVar7 == 1) {
                              if (lVar10 == 1) {
LAB_10358ed70:
                                func_0x000107c61428(param_1 + 0x260,auStack_cb8,0,0);
                                lVar10 = *(long *)(param_1 + 0x260);
                                func_0x000107c61428(param_2 + 0x260,auStack_a68,0,0);
                                lVar7 = *(long *)(param_2 + 0x260);
                                if (*(char *)(param_2 + 0x268) == '\x01') {
                                  if (lVar7 == 0) {
                                    if (lVar10 == 0) goto LAB_10358ede8;
                                  }
                                  else if (lVar7 == 1) {
                                    if (lVar10 == 1) {
LAB_10358ede8:
                                      func_0x000107c61428(param_1 + 0x270,auStack_a80,0,0);
                                      uVar9 = *(ulong *)(param_1 + 0x270);
                                      func_0x000107c61428(param_2 + 0x270,auStack_a98,0,0);
                                      uVar11 = *(undefined8 *)(param_2 + 0x270);
                                      func_0x000107c61434(uVar9);
                                      func_0x000107c61434(uVar11);
                                      uVar4 = uVar9;
                                      FUN_103588d00(uVar9,uVar11);
                                      func_0x000107c6142c(uVar9);
                                      func_0x000107c6142c(uVar11);
                                      if ((uVar4 & 1) != 0) {
                                        func_0x000107c61428(param_1 + 0x278,auStack_ab0,0,0);
                                        uVar9 = *(ulong *)(param_1 + 0x278);
                                        func_0x000107c61428(param_2 + 0x278,auStack_ac8,0,0);
                                        uVar11 = *(undefined8 *)(param_2 + 0x278);
                                        func_0x000107c61434(uVar9);
                                        func_0x000107c61434(uVar11);
                                        uVar4 = uVar9;
                                        FUN_103588d00(uVar9,uVar11);
                                        func_0x000107c6142c(uVar9);
                                        func_0x000107c6142c(uVar11);
                                        if ((uVar4 & 1) != 0) {
                                          func_0x000107c61428(param_1 + 0x280,auStack_ae0,0,0);
                                          uVar9 = *(ulong *)(param_1 + 0x280);
                                          func_0x000107c61428(param_2 + 0x280,auStack_af8,0,0);
                                          uVar11 = *(undefined8 *)(param_2 + 0x280);
                                          func_0x000107c61434(uVar9);
                                          func_0x000107c61434(uVar11);
                                          uVar4 = uVar9;
                                          FUN_103588d00(uVar9,uVar11);
                                          func_0x000107c6142c(uVar9);
                                          func_0x000107c6142c(uVar11);
                                          if ((uVar4 & 1) != 0) {
                                            func_0x000107c61428(param_1 + 0x288,auStack_b10,0,0);
                                            uVar9 = *(ulong *)(param_1 + 0x288);
                                            func_0x000107c61428(param_2 + 0x288,auStack_b28,0,0);
                                            uVar11 = *(undefined8 *)(param_2 + 0x288);
                                            func_0x000107c61434(uVar9);
                                            func_0x000107c61434(uVar11);
                                            uVar4 = uVar9;
                                            FUN_103588e30(uVar9,uVar11);
                                            func_0x000107c6142c(uVar9);
                                            func_0x000107c6142c(uVar11);
                                            if ((uVar4 & 1) != 0) {
                                              func_0x000107c61428(param_1 + 0x290,auStack_b40,0,0);
                                              uVar9 = *(ulong *)(param_1 + 0x290);
                                              func_0x000107c61428(param_2 + 0x290,auStack_b58,0,0);
                                              uVar11 = *(undefined8 *)(param_2 + 0x290);
                                              func_0x000107c61434(uVar9);
                                              func_0x000107c61434(uVar11);
                                              uVar4 = uVar9;
                                              FUN_103588e30(uVar9,uVar11);
                                              func_0x000107c6142c(uVar9);
                                              func_0x000107c6142c(uVar11);
                                              if ((uVar4 & 1) != 0) {
                                                func_0x000107c61428(param_1 + 0x298,auStack_b70,0,0)
                                                ;
                                                func_0x000107c61428(param_2 + 0x298,auStack_b88,0x20
                                                                    ,0);
                                                uVar4 = *(ulong *)(param_1 + 0x298);
                                                if ((uVar4 == *(ulong *)(param_2 + 0x298)) &&
                                                   (*(long *)(param_1 + 0x2a0) ==
                                                    *(long *)(param_2 + 0x2a0))) {
                                                  func_0x000107c614a8(auStack_b88);
                                                }
                                                else {
                                                  func_0x000107c605b8();
                                                  func_0x000107c614a8(auStack_b88);
                                                  if ((uVar4 & 1) == 0) goto LAB_10358e3a0;
                                                }
                                                func_0x000107c61428(param_1 + 0x2a8,auStack_b88,0,0)
                                                ;
                                                func_0x000107c61428(param_2 + 0x2a8,auStack_ba0,0x20
                                                                    ,0);
                                                uVar4 = *(ulong *)(param_1 + 0x2a8);
                                                if ((uVar4 == *(ulong *)(param_2 + 0x2a8)) &&
                                                   (*(long *)(param_1 + 0x2b0) ==
                                                    *(long *)(param_2 + 0x2b0))) {
                                                  func_0x000107c614a8(auStack_ba0);
                                                }
                                                else {
                                                  func_0x000107c605b8();
                                                  func_0x000107c614a8(auStack_ba0);
                                                  if ((uVar4 & 1) == 0) goto LAB_10358e3a0;
                                                }
                                                func_0x000107c61428(param_1 + 0x2b8,auStack_ba0,0,0)
                                                ;
                                                uVar9 = *(ulong *)(param_1 + 0x2b8);
                                                func_0x000107c61428(param_2 + 0x2b8,auStack_bb8,0,0)
                                                ;
                                                uVar11 = *(undefined8 *)(param_2 + 0x2b8);
                                                func_0x000107c61434(uVar9);
                                                func_0x000107c61434(uVar11);
                                                uVar4 = uVar9;
                                                FUN_103588f04(uVar9,uVar11);
                                                func_0x000107c6142c(uVar9);
                                                func_0x000107c6142c(uVar11);
                                                if ((uVar4 & 1) != 0) {
                                                  func_0x000107c61428(param_1 + 0x2c0,auStack_bd0,0,
                                                                      0);
                                                  uVar12 = *(undefined8 *)(param_1 + 0x2c0);
                                                  func_0x000107c61428(param_2 + 0x2c0,auStack_be8,0,
                                                                      0);
                                                  uVar15 = *(undefined8 *)(param_2 + 0x2c0);
                                                  func_0x000107c61434(uVar12);
                                                  func_0x000107c61434(uVar15);
                                                  uVar11 = uVar12;
                                                  FUN_103588f04(uVar12,uVar15);
                                                  uVar8 = (uint)uVar11;
                                                  func_0x000107c6142c(uVar12);
                                                  func_0x000107c6142c(uVar15);
                                                  goto LAB_10358e3a4;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  else if (lVar10 == 2) goto LAB_10358ede8;
                                }
                                else if (lVar10 == lVar7) goto LAB_10358ede8;
                              }
                            }
                            else if (lVar10 == 2) goto LAB_10358ed70;
                          }
                          else if (lVar10 == lVar7) goto LAB_10358ed70;
                        }
                        else {
                          if (lStack_9e0 == 0) {
LAB_10358ec0c:
                            uStack_a50 = uStack_980;
                            uStack_a48 = uStack_978;
                            uStack_a40 = uStack_970;
                            uStack_a38 = uStack_968;
                            uStack_a30 = uStack_960;
                            uStack_a28 = uStack_958;
                            uStack_a20 = uStack_950;
                            uStack_a18 = uStack_948;
                            uStack_a10 = lStack_940;
                            uStack_a08 = uStack_938;
                            uStack_a00 = uStack_930;
                            uStack_9f8 = uStack_928;
                            uStack_9f0 = uStack_920;
                            FUN_10358ba48(&uStack_880,&uStack_390,0x112f79be0,&UNK_10dbde0f0);
                            FUN_10358ba48(&uStack_810,&uStack_390,0x112f79be0,&UNK_10dbde0f0);
                            uVar11 = 0x112f79be8;
                            puVar5 = &UNK_10dbde9d0;
                            goto LAB_10358e398;
                          }
                          uStack_c08 = *(undefined8 *)(param_2 + 0x230);
                          uStack_c10 = *(undefined8 *)(param_2 + 0x228);
                          uStack_bf8 = *(undefined8 *)(param_2 + 0x240);
                          uStack_c00 = *(undefined8 *)(param_2 + 0x238);
                          uStack_bf0 = *(undefined8 *)(param_2 + 0x248);
                          uStack_c48 = *(undefined8 *)(param_2 + 0x1f0);
                          uStack_c50 = *puVar1;
                          uStack_c38 = *(undefined8 *)(param_2 + 0x200);
                          uStack_c40 = *(undefined8 *)(param_2 + 0x1f8);
                          uStack_c28 = *(undefined8 *)(param_2 + 0x210);
                          uStack_c30 = *(undefined8 *)(param_2 + 0x208);
                          uStack_c18 = *(undefined8 *)(param_2 + 0x220);
                          uStack_c20 = *(undefined8 *)(param_2 + 0x218);
                          uStack_368 = *(undefined8 *)(param_1 + 0x210);
                          uStack_370 = *(undefined8 *)(param_1 + 0x208);
                          uStack_358 = *(undefined8 *)(param_1 + 0x220);
                          uStack_360 = *(undefined8 *)(param_1 + 0x218);
                          uStack_348 = *(undefined8 *)(param_1 + 0x230);
                          uStack_350 = *(undefined8 *)(param_1 + 0x228);
                          uStack_338 = *(undefined8 *)(param_1 + 0x240);
                          uStack_340 = *(undefined8 *)(param_1 + 0x238);
                          uStack_330 = *(undefined8 *)(param_1 + 0x248);
                          uStack_388 = *(undefined8 *)(param_1 + 0x1f0);
                          uStack_390 = *puVar3;
                          uStack_378 = *(undefined8 *)(param_1 + 0x200);
                          uStack_380 = *(undefined8 *)(param_1 + 0x1f8);
                          uStack_a50 = uStack_c50;
                          uStack_a48 = uStack_c48;
                          uStack_a40 = uStack_c40;
                          uStack_a38 = uStack_c38;
                          uStack_a30 = uStack_c30;
                          uStack_a28 = uStack_c28;
                          uStack_a20 = uStack_c20;
                          uStack_a18 = uStack_c18;
                          uStack_a10 = uStack_c10;
                          uStack_a08 = uStack_c08;
                          uStack_a00 = uStack_c00;
                          uStack_9f8 = uStack_bf8;
                          uStack_9f0 = uStack_bf0;
                          FUN_10358ba48(&uStack_880,auStack_cb8,0x112f79be0,&UNK_10dbde0f0);
                          FUN_10358ba48(&uStack_810,auStack_cb8,0x112f79be0,&UNK_10dbde0f0);
                          puVar3 = &uStack_390;
                          FUN_103594fd8(puVar3,&uStack_a50);
                          FUN_103590544(&uStack_c50,0x112f79be0,&UNK_10dbde0f0);
                          FUN_103590544(&uStack_980,0x112f79be0,&UNK_10dbde0f0);
                          if (((ulong)puVar3 & 1) != 0) goto LAB_10358ecf8;
                        }
                      }
                    }
                  }
                }
              }
              else {
LAB_10358e818:
                uStack_980 = uVar11;
                uStack_978 = lVar7;
                uStack_970 = uVar12;
                uStack_968 = uVar13;
                uStack_960 = uVar15;
                uStack_958 = uVar19;
                uStack_950 = uVar6;
                uStack_948 = uVar21;
                lStack_940 = lVar10;
                uStack_938 = uVar20;
                uStack_930 = uVar18;
                uStack_928 = uVar17;
                uStack_920 = uVar16;
                uStack_918 = uVar14;
                FUN_1035895a4();
                FUN_1035895a4(uVar21,lVar10,uVar20,uVar18,uVar17,uVar16,uVar14);
                FUN_103590544(&uStack_980,0x112f7a150,&UNK_10dbde4a0);
              }
            }
            else {
              if (lVar10 == 0) goto LAB_10358e818;
              uStack_2b0 = uVar11;
              lStack_2a8 = lVar7;
              uStack_2a0 = uVar12;
              uStack_298 = uVar13;
              uStack_290 = uVar15;
              uStack_288 = uVar19;
              uStack_280 = uVar6;
              uStack_278 = uVar21;
              lStack_270 = lVar10;
              uStack_268 = uVar20;
              uStack_260 = uVar18;
              uStack_258 = uVar17;
              uStack_250 = uVar16;
              uStack_248 = uVar14;
              FUN_1035895a4();
              FUN_1035895a4(uVar21,lVar10,uVar20,uVar18,uVar17,uVar16,uVar14);
              puVar3 = &uStack_2b0;
              FUN_103591e08(puVar3,&uStack_278);
              func_0x000103589608(uVar21,lVar10,uVar20,uVar18,uVar17,uVar16,uVar14);
              func_0x000103589608(uVar11,lVar7,uVar12,uVar13,uVar15,uVar19,uVar6);
              if (((ulong)puVar3 & 1) != 0) goto LAB_10358e6f8;
            }
          }
        }
      }
      else {
        if (0xe < uStack_9f0 >> 0x3c) {
          uStack_a28 = *(undefined8 *)(param_1 + 0xb0);
          uStack_a30 = *(undefined8 *)(param_1 + 0xa8);
          uStack_a18 = *(undefined8 *)(param_1 + 0xc0);
          uStack_a20 = *(undefined8 *)(param_1 + 0xb8);
          uStack_a08 = *(undefined8 *)(param_1 + 0xd0);
          uStack_a10 = *(undefined8 *)(param_1 + 200);
          uStack_a00 = *(undefined8 *)(param_1 + 0xd8);
          uStack_a48 = *(undefined8 *)(param_1 + 0x90);
          uStack_a50 = *(undefined8 *)(param_1 + 0x88);
          uStack_a38 = *(undefined8 *)(param_1 + 0xa0);
          uStack_a40 = *(undefined8 *)(param_1 + 0x98);
          FUN_10358ba48(&uStack_4f0,&uStack_390,0x112f79bf0,&UNK_10dbde100);
          FUN_10358ba48(&uStack_490,&uStack_390,0x112f79bf0,&UNK_10dbde100);
          FUN_103590544(&uStack_a50,0x112f79bf0,&UNK_10dbde100);
          goto LAB_10358e214;
        }
LAB_10358e0dc:
        uStack_a50 = uStack_980;
        uStack_a48 = uStack_978;
        uStack_a40 = uStack_970;
        uStack_a38 = uStack_968;
        uStack_a30 = uStack_960;
        uStack_a28 = uStack_958;
        uStack_a20 = uStack_950;
        uStack_a18 = uStack_948;
        uStack_a10 = lStack_940;
        uStack_a08 = uStack_938;
        uStack_a00 = uStack_930;
        FUN_10358ba48(&uStack_4f0,&uStack_390,0x112f79bf0,&UNK_10dbde100);
        puVar3 = &uStack_490;
LAB_10358e378:
        FUN_10358ba48(puVar3,&uStack_390,0x112f79bf0,&UNK_10dbde100);
        uVar11 = 0x112f79bf8;
        puVar5 = &UNK_10dbde9c0;
LAB_10358e398:
        FUN_103590544(&uStack_a50,uVar11,puVar5);
      }
    }
    else if (lVar10 == 0) {
LAB_10358de0c:
      func_0x000101541428(uVar11,uVar15,lVar7,uVar21,uVar13);
      func_0x000101541428(uVar12,uVar20,lVar10,uVar17,uVar19);
      func_0x000101553bdc(uVar11,uVar15,lVar7,uVar21,uVar13);
      func_0x000101553bdc(uVar12,uVar20,lVar10,uVar17,uVar19);
    }
    else {
      uStack_90 = (undefined1)uVar20;
      uStack_b8 = (undefined1)uVar15;
      uStack_c0 = uVar11;
      lStack_b0 = lVar7;
      uStack_a8 = uVar21;
      uStack_a0 = uVar13;
      uStack_98 = uVar12;
      lStack_88 = lVar10;
      uStack_80 = uVar17;
      uStack_78 = uVar19;
      func_0x000101541428(uVar11,uVar15,lVar7,uVar21,uVar13);
      func_0x000101541428(uVar12,uVar20,lVar10,uVar17,uVar19);
      puVar3 = &uStack_c0;
      FUN_10368c758(puVar3,&uStack_98);
      func_0x000101553bdc(uVar12,uVar20,lVar10,uVar17,uVar19);
      func_0x000101553bdc(uVar11,uVar15,lVar7,uVar21,uVar13);
      if (((ulong)puVar3 & 1) != 0) goto LAB_10358deb8;
    }
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&uStack_980);
    if ((uVar4 & 1) != 0) goto LAB_10358dc5c;
  }
LAB_10358e3a0:
  uVar8 = 0;
LAB_10358e3a4:
  return uVar8 & 1;
}



/* Entry: 10358f1c4; end: 10358f223;  */

void FUN_10358f1c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112f7a270 != -1) {
    func_0x000107c61568(0x112f7a270,FUN_10358ad44);
  }
  uVar1 = uRam0000000112f7a278;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10358f224; end: 10358f247;  */

undefined1  [16] FUN_10358f224(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f155cc0;
  auVar1._0_8_ = 0xd000000000000025;
  return auVar1;
}



/* Entry: 10358f248; end: 10358f277;  */

undefined1  [16] FUN_10358f248(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10358f278; end: 10358f2ab;  */

void FUN_10358f278(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10358f2ac; end: 10358f2bf;  */

undefined8 FUN_10358f2ac(void)

{
  return 0x10358f2bc;
}



/* Entry: 10358f2c0; end: 10358f2f7;  */

void FUN_10358f2c0(void)

{
  FUN_10358bc20();
  return;
}



/* Entry: 10358f2f8; end: 10358f2fb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10358f2f8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10358f2fc; end: 10358f333;  */

uint FUN_10358f2fc(long param_1,long param_2)

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
  func_0x000103590504();
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



/* Entry: 10358f334; end: 10358f3db;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10358f334(long *param_1)

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
    FUN_10358dbd4(uVar25,uVar26);
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



/* Entry: 10358f3dc; end: 10358f47b;  */

/* WARNING: Possible PIC construction at 0x00010358f428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010358f438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010358f42c) */
/* WARNING: Removing unreachable block (ram,0x00010358f43c) */

void FUN_10358f3dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7a288 != -1) {
    func_0x000107c61568(0x112f7a288,FUN_10358acfc);
  }
  uVar5 = uRam0000000113808c08;
  uVar4 = uRam0000000113808c00;
  uVar3 = uRam0000000113808bf8;
  uVar2 = uRam0000000113808bf0;
  uVar1 = uRam0000000113808be8;
  *param_1 = uRam0000000113808be0;
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



/* Entry: 10358f47c; end: 10358f4b7;  */

void FUN_10358f47c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7a740;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7a740,&UNK_10dbdee58);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10358f4b8; end: 10358f5bb;  */

void FUN_10358f4b8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10358f5bc; end: 10358f663;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10358f5bc(undefined8 *param_1,long *param_2)

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
    FUN_10358dbd4(uVar25,uVar26);
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



/* Entry: 10358f664; end: 10358f6ab;  */

void FUN_10358f664(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdee60,0x17,2);
  uRam0000000113808c18 = uStack_38;
  uRam0000000113808c10 = uStack_40;
  uRam0000000113808c28 = uStack_28;
  uRam0000000113808c20 = uStack_30;
  uRam0000000113808c38 = uStack_18;
  uRam0000000113808c30 = uStack_20;
  return;
}



/* Entry: 10358f6ac; end: 10358f77f;  */

/* WARNING: Removing unreachable block (ram,0x00010358f77c) */

void FUN_10358f6ac(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        (**(code **)(param_3 + 0x150))();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x0001015cabb8();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_110679698,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10358f780; end: 10358f843;  */

void FUN_10358f780(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  
  uVar2 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar3 = uVar2 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar3 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar3 == 0) || ((**(code **)(param_3 + 0x70))(uVar2,uVar1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    uVar3 = unaff_x20[2];
    if (*(long *)(uVar3 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      func_0x0001015cabb8();
      (*pcVar4)(uVar3,2,&UNK_110679698,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 10358f844; end: 10358f88f;  */

uint FUN_10358f844(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_c8 [40];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar4 = param_1[2];
    uVar2 = param_2[2];
    lVar5 = *(long *)(uVar4 + 0x10);
    if (lVar5 == *(long *)(uVar2 + 0x10)) {
      if (lVar5 != 0 && uVar4 != uVar2) {
        puVar6 = (undefined8 *)(uVar4 + 0x20);
        puVar7 = (undefined8 *)(uVar2 + 0x20);
        do {
          uStack_98 = puVar6[1];
          uStack_a0 = *puVar6;
          uStack_88 = puVar6[3];
          uStack_90 = puVar6[2];
          uStack_80 = puVar6[4];
          uStack_68 = puVar7[1];
          uStack_70 = *puVar7;
          uStack_58 = puVar7[3];
          uStack_60 = puVar7[2];
          uStack_50 = puVar7[4];
          func_0x000101553c14(&uStack_a0,auStack_c8);
          func_0x000101553c14(&uStack_70,auStack_c8);
          puVar3 = &uStack_a0;
          FUN_10368c758(puVar3,&uStack_70);
          func_0x000101553ad0(&uStack_70);
          func_0x000101553ad0(&uStack_a0);
          if (((ulong)puVar3 & 1) == 0) goto LAB_10358fd10;
          puVar7 = puVar7 + 5;
          puVar6 = puVar6 + 5;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      uVar2 = param_1[3];
      func_0x000100e25fcc(uVar2,param_1[4],param_2[3],param_2[4]);
      uVar1 = (uint)uVar2;
      goto LAB_10358fd14;
    }
  }
LAB_10358fd10:
  uVar1 = 0;
LAB_10358fd14:
  return uVar1 & 1;
}



/* Entry: 10358f890; end: 10358f8bf;  */

undefined1  [16] FUN_10358f890(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 10358f8c0; end: 10358f8f3;  */

void FUN_10358f8c0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 10358f8f4; end: 10358f907;  */

undefined1  [16] FUN_10358f8f4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x10358f904;
  return auVar1;
}



/* Entry: 10358f908; end: 10358f92f;  */

void FUN_10358f908(void)

{
  FUN_10358f6ac();
  return;
}



/* Entry: 10358f930; end: 10358f933;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10358f930(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10358f934; end: 10358f96b;  */

uint FUN_10358f934(long param_1,long param_2)

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
  FUN_1035904c4();
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



/* Entry: 10358f96c; end: 10358f9b3;  */

uint FUN_10358f96c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  FUN_10358fc24(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10358f9b4; end: 10358fa53;  */

/* WARNING: Possible PIC construction at 0x00010358fa00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010358fa10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010358fa04) */
/* WARNING: Removing unreachable block (ram,0x00010358fa14) */

void FUN_10358f9b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7a298 != -1) {
    func_0x000107c61568(0x112f7a298,FUN_10358f664);
  }
  uVar5 = uRam0000000113808c38;
  uVar4 = uRam0000000113808c30;
  uVar3 = uRam0000000113808c28;
  uVar2 = uRam0000000113808c20;
  uVar1 = uRam0000000113808c18;
  *param_1 = uRam0000000113808c10;
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



/* Entry: 10358fa54; end: 10358fa8f;  */

void FUN_10358fa54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7a730;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7a730,&UNK_10dbdee50);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10358fa90; end: 10358fb9b;  */

void FUN_10358fa90(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_48 = unaff_x20[2];
  uStack_50 = unaff_x20[1];
  uStack_38 = unaff_x20[4];
  uStack_40 = unaff_x20[3];
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10358fb9c; end: 10358fc23;  */

uint FUN_10358fb9c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10358fc24(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10358fc24; end: 10358fd2f;  */

uint FUN_10358fc24(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_c8 [40];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar4 = param_1[2];
    uVar2 = param_2[2];
    lVar5 = *(long *)(uVar4 + 0x10);
    if (lVar5 == *(long *)(uVar2 + 0x10)) {
      if (lVar5 != 0 && uVar4 != uVar2) {
        puVar6 = (undefined8 *)(uVar4 + 0x20);
        puVar7 = (undefined8 *)(uVar2 + 0x20);
        do {
          uStack_98 = puVar6[1];
          uStack_a0 = *puVar6;
          uStack_88 = puVar6[3];
          uStack_90 = puVar6[2];
          uStack_80 = puVar6[4];
          uStack_68 = puVar7[1];
          uStack_70 = *puVar7;
          uStack_58 = puVar7[3];
          uStack_60 = puVar7[2];
          uStack_50 = puVar7[4];
          func_0x000101553c14(&uStack_a0,auStack_c8);
          func_0x000101553c14(&uStack_70,auStack_c8);
          puVar3 = &uStack_a0;
          FUN_10368c758(puVar3,&uStack_70);
          func_0x000101553ad0(&uStack_70);
          func_0x000101553ad0(&uStack_a0);
          if (((ulong)puVar3 & 1) == 0) goto LAB_10358fd10;
          puVar7 = puVar7 + 5;
          puVar6 = puVar6 + 5;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      uVar2 = param_1[3];
      func_0x000100e25fcc(uVar2,param_1[4],param_2[3],param_2[4]);
      uVar1 = (uint)uVar2;
      goto LAB_10358fd14;
    }
  }
LAB_10358fd10:
  uVar1 = 0;
LAB_10358fd14:
  return uVar1 & 1;
}



/* Entry: 10358fd30; end: 10358fd6f;  */

void FUN_10358fd30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a2a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdec30;
  func_0x000107c61520(&UNK_10dbdec30,&UNK_110667468);
  puRam0000000112f7a2a0 = puVar1;
  return;
}



/* Entry: 10358fd70; end: 10358fd83;  */

void FUN_10358fd70(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10358fd84();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10358fdc4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10358fd84; end: 10358fe03;  */

void FUN_10358fd84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a2a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdea70;
  func_0x000107c61520(&UNK_10dbdea70,&UNK_110667370);
  puRam0000000112f7a2a8 = puVar1;
  return;
}



/* Entry: 10358fe04; end: 10358fe07;  */

void FUN_10358fe04(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7a2b8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7a2c0;
  func_0x00010002969c(0x112f7a2c0,&UNK_10dbde9f8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7a2b8 = puVar2;
  return;
}



/* Entry: 10358fe08; end: 10358fe57;  */

void FUN_10358fe08(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7a2b8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7a2c0;
  func_0x00010002969c(0x112f7a2c0,&UNK_10dbde9f8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7a2b8 = puVar2;
  return;
}



/* Entry: 10358fe58; end: 10358fe5b;  */

void FUN_10358fe58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a2c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdeab0;
  func_0x000107c61520(&UNK_10dbdeab0,&UNK_110667370);
  puRam0000000112f7a2c8 = puVar1;
  return;
}



/* Entry: 10358fe5c; end: 10358fe9b;  */

void FUN_10358fe5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a2c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdeab0;
  func_0x000107c61520(&UNK_10dbdeab0,&UNK_110667370);
  puRam0000000112f7a2c8 = puVar1;
  return;
}



/* Entry: 10358fe9c; end: 10358febf;  */

void FUN_10358fe9c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10358fec0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10358fec0; end: 10358feff;  */

void FUN_10358fec0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a2d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdeb30;
  func_0x000107c61520(&UNK_10dbdeb30,&UNK_1106673e8);
  puRam0000000112f7a2d0 = puVar1;
  return;
}



/* Entry: 10358ff00; end: 10358ff17;  */

void FUN_10358ff00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10358fbe4)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&UNK_1015d51a0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


