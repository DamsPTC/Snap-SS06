/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101640a18; end: 101640b43;  */

void FUN_101640a18(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  func_0x000107c6068c(auStack_e8,0);
  func_0x000107c5fa50(auStack_e8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101640b44; end: 101640bab;  */

uint FUN_101640b44(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_20 = param_2[0xc];
  FUN_101640bac(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 101640bac; end: 101640e83;  */

uint FUN_101640bac(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_218 [40];
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar6 = param_1[4];
  lVar4 = param_1[3];
  lVar7 = param_1[6];
  lVar5 = param_1[5];
  lVar3 = param_1[7];
  lStack_1c0 = param_2[4];
  lStack_1c8 = param_2[3];
  lStack_1b0 = param_2[6];
  lStack_1b8 = param_2[5];
  lStack_1a8 = param_2[7];
  lStack_140 = lStack_1c8;
  lStack_138 = lStack_1c0;
  lStack_130 = lStack_1b8;
  lStack_128 = lStack_1b0;
  lStack_120 = lStack_1a8;
  lStack_110 = lVar4;
  lStack_108 = lVar6;
  lStack_100 = lVar5;
  lStack_f8 = lVar7;
  lStack_f0 = lVar3;
  if (lVar5 == 0) {
    if (lStack_1b8 != 0) goto LAB_101640cb0;
    FUN_1015c999c(&lStack_110,&lStack_1f0);
    FUN_1015c999c(&lStack_140,&lStack_1f0);
    FUN_101553bdc(lVar4,lVar6,0,lVar7,lVar3);
LAB_101640d10:
    lVar7 = param_1[9];
    lVar6 = param_1[8];
    lVar11 = param_1[0xb];
    lVar9 = param_1[10];
    lVar8 = param_2[9];
    lVar5 = param_2[8];
    lVar12 = param_2[0xb];
    lVar10 = param_2[10];
    lVar3 = param_1[0xc];
    lVar4 = param_2[0xc];
    lStack_1a0 = lVar5;
    lStack_198 = lVar8;
    lStack_190 = lVar10;
    lStack_188 = lVar12;
    lStack_180 = lVar4;
    lStack_170 = lVar6;
    lStack_168 = lVar7;
    lStack_160 = lVar9;
    lStack_158 = lVar11;
    lStack_150 = lVar3;
    if (lVar9 == 0) {
      if (lVar10 != 0) goto LAB_101640de0;
      FUN_1015c999c(&lStack_170,&lStack_1f0);
      FUN_1015c999c(&lStack_1a0,&lStack_1f0);
      FUN_101553bdc(lVar6,lVar7,0,lVar11,lVar3);
    }
    else {
      if (lVar10 == 0) {
LAB_101640de0:
        lStack_1f0 = lVar6;
        lStack_1e8 = lVar7;
        lStack_1e0 = lVar9;
        lStack_1d8 = lVar11;
        lStack_1d0 = lVar3;
        lStack_1c8 = lVar5;
        lStack_1c0 = lVar8;
        lStack_1b8 = lVar10;
        lStack_1b0 = lVar12;
        lStack_1a8 = lVar4;
        FUN_1015c999c(&lStack_170,&lStack_e8);
        plVar2 = &lStack_1a0;
        lVar3 = -0xd8;
        goto LAB_101640e08;
      }
      lStack_1e8 = CONCAT71(lStack_1e8._1_7_,(char)lVar8);
      uStack_e0 = (undefined1)lVar7;
      lStack_1f0 = lVar5;
      lStack_1e0 = lVar10;
      lStack_1d8 = lVar12;
      lStack_1d0 = lVar4;
      lStack_e8 = lVar6;
      lStack_d8 = lVar9;
      lStack_d0 = lVar11;
      lStack_c8 = lVar3;
      FUN_1015c999c(&lStack_170,auStack_218);
      FUN_1015c999c(&lStack_1a0,auStack_218);
      plVar2 = &lStack_e8;
      func_0x00010368c758(plVar2,&lStack_1f0);
      FUN_101553bdc(lVar5,lVar8,lVar10,lVar12,lVar4);
      FUN_101553bdc(lVar6,lVar7,lVar9,lVar11,lVar3);
      if (((ulong)plVar2 & 1) == 0) goto LAB_101640e14;
    }
    lVar3 = param_1[1];
    FUN_100e25fcc(lVar3,param_1[2],param_2[1],param_2[2]);
    uVar1 = (uint)lVar3;
  }
  else {
    if (lStack_1b8 == 0) {
LAB_101640cb0:
      lStack_1f0 = lVar4;
      lStack_1e8 = lVar6;
      lStack_1e0 = lVar5;
      lStack_1d8 = lVar7;
      lStack_1d0 = lVar3;
      FUN_1015c999c(&lStack_110,&lStack_98);
      plVar2 = &lStack_140;
      lVar3 = -0x88;
LAB_101640e08:
      FUN_1015c999c(plVar2,&stack0xfffffffffffffff0 + lVar3);
      FUN_1015cab70(&lStack_1f0);
    }
    else {
      uStack_90 = (undefined1)lStack_1c0;
      uStack_b8 = (undefined1)lVar6;
      lStack_c0 = lVar4;
      lStack_b0 = lVar5;
      lStack_a8 = lVar7;
      lStack_a0 = lVar3;
      lStack_98 = lStack_1c8;
      lStack_88 = lStack_1b8;
      lStack_80 = lStack_1b0;
      lStack_78 = lStack_1a8;
      FUN_1015c999c(&lStack_110,&lStack_1f0);
      FUN_1015c999c(&lStack_140,&lStack_1f0);
      plVar2 = &lStack_c0;
      func_0x00010368c758(plVar2,&lStack_98);
      FUN_101553bdc(lStack_1c8,lStack_1c0,lStack_1b8,lStack_1b0,lStack_1a8);
      FUN_101553bdc(lVar4,lVar6,lVar5,lVar7,lVar3);
      if (((ulong)plVar2 & 1) != 0) goto LAB_101640d10;
    }
LAB_101640e14:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 101640e84; end: 101640ec3;  */

void FUN_101640e84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbc1e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d973398;
  func_0x000107c61520(&UNK_10d973398,&UNK_1103ed148);
  puRam0000000112dbc1e0 = puVar1;
  return;
}



/* Entry: 101640ec4; end: 101640ee7;  */

void FUN_101640ec4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101640ee8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101640ee8; end: 101640f27;  */

void FUN_101640ee8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbc1e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d973370;
  func_0x000107c61520(&UNK_10d973370,&UNK_1103ed148);
  puRam0000000112dbc1e8 = puVar1;
  return;
}



/* Entry: 101640f28; end: 101640f53;  */

void FUN_101640f28(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101640e84();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001015d5120();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101640f54; end: 101640f57;  */

void FUN_101640f54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbc1f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9733d8;
  func_0x000107c61520(&UNK_10d9733d8,&UNK_1103ed148);
  puRam0000000112dbc1f0 = puVar1;
  return;
}



/* Entry: 101640f58; end: 101640f97;  */

void FUN_101640f58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbc1f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9733d8;
  func_0x000107c61520(&UNK_10d9733d8,&UNK_1103ed148);
  puRam0000000112dbc1f0 = puVar1;
  return;
}



/* Entry: 101640f98; end: 10164101b;  */

long FUN_101640f98(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10164101c; end: 1016412cf;  */

undefined8 * FUN_10164101c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x00010006c00c(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  lVar1 = param_2[5];
  if (lVar1 == 0) {
    uVar3 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar3;
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[7] = param_2[7];
    lVar1 = param_2[10];
  }
  else {
    param_1[3] = param_2[3];
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    param_1[5] = lVar1;
    uVar3 = param_2[6];
    uVar2 = param_2[7];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar2);
    param_1[6] = uVar3;
    param_1[7] = uVar2;
    lVar1 = param_2[10];
  }
  if (lVar1 == 0) {
    uVar3 = param_2[8];
    uVar4 = param_2[0xb];
    uVar2 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[0xb] = uVar4;
    param_1[10] = uVar2;
    param_1[0xc] = param_2[0xc];
  }
  else {
    param_1[8] = param_2[8];
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    param_1[10] = lVar1;
    uVar3 = param_2[0xb];
    uVar2 = param_2[0xc];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar2;
  }
  return param_1;
}



/* Entry: 1016412d0; end: 1016413c7;  */

undefined8 * FUN_1016412d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[2];
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[5] != 0) {
    lVar4 = param_2[5];
    if (lVar4 != 0) {
      param_1[3] = param_2[3];
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
      param_1[5] = lVar4;
      func_0x000107c6142c();
      uVar1 = param_1[6];
      uVar2 = param_1[7];
      uVar3 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar3;
      func_0x00010006c090(uVar1,uVar2);
      lVar4 = param_1[10];
      goto joined_r0x000101641368;
    }
    func_0x000101553ad0(param_1 + 3);
  }
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  param_1[7] = param_2[7];
  lVar4 = param_1[10];
joined_r0x000101641368:
  if (lVar4 != 0) {
    lVar4 = param_2[10];
    if (lVar4 != 0) {
      param_1[8] = param_2[8];
      *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
      param_1[10] = lVar4;
      func_0x000107c6142c();
      uVar1 = param_1[0xb];
      uVar2 = param_1[0xc];
      uVar3 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar3;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    func_0x000101553ad0(param_1 + 8);
  }
  uVar1 = param_2[8];
  uVar3 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  param_1[0xc] = param_2[0xc];
  return param_1;
}



/* Entry: 1016413c8; end: 10164149f;  */

int FUN_1016413c8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1016414a0; end: 1016414df;  */

void FUN_1016414a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbc200 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d973344;
  func_0x000107c61520(&DAT_10d973344,&UNK_1103ed148);
  puRam0000000112dbc200 = puVar1;
  return;
}



/* Entry: 1016414e0; end: 1016415a3;  */

void FUN_1016414e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61428(param_4 + 0x10,auStack_a0,0,0);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  lVar3 = *(long *)(param_4 + 0x18);
  uVar2 = *(undefined8 *)(param_4 + 0x20);
  uVar4 = *(undefined8 *)(param_4 + 0x28);
  uVar5 = *(undefined8 *)(param_4 + 0x30);
  lVar6 = lVar3;
  uVar7 = uVar4;
  uVar8 = uVar2;
  uVar9 = uVar1;
  uStack_a8 = uVar5;
  if (lVar3 == 0) {
    FUN_10165c3e0(&uStack_88);
    uStack_a8 = uStack_68;
    lVar6 = lStack_80;
    uVar7 = uStack_70;
    uVar8 = uStack_78;
    uVar9 = uStack_88;
  }
  FUN_101649f10(uVar1,lVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar9;
  param_1[1] = lVar6;
  param_1[2] = uVar8;
  param_1[3] = uVar7;
  param_1[4] = uStack_a8;
  return;
}



/* Entry: 1016415a4; end: 1016415c3;  */

void FUN_1016415a4(void)

{
  func_0x000107c61168(&PTR_PTR_112dbc2d8);
  return;
}



/* Entry: 1016415c4; end: 101641697;  */

bool FUN_1016415c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  lVar1 = *(long *)(param_3 + 0x18);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x30);
  if (lVar1 == 0) {
    FUN_101649f10(uVar2,0,uVar3,uVar4,uVar5);
  }
  else {
    FUN_101649f10(uVar2,lVar1,uVar3,uVar4,uVar5);
    func_0x000101649f5c(uVar2,lVar1,uVar3,uVar4,uVar5);
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  func_0x000101649f5c(uVar2,0,uVar3,uVar4,uVar5);
  return lVar1 != 0;
}



/* Entry: 101641698; end: 10164170f;  */

undefined1 FUN_101641698(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x38,auStack_38,0,0);
  return *(undefined1 *)(param_3 + 0x38);
}



/* Entry: 101641710; end: 10164176b;  */

void FUN_101641710(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_4 + 0x40);
  uVar3 = *(undefined8 *)(param_4 + 0x48);
  uVar2 = *(undefined8 *)(param_4 + 0x50);
  uVar4 = *(undefined8 *)(param_4 + 0x58);
  uVar5 = *(undefined8 *)(param_4 + 0x60);
  FUN_101644064(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  return;
}



/* Entry: 10164176c; end: 1016417ab;  */

undefined1  [16] FUN_10164176c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x68,auStack_38,0,0);
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(param_3 + 0x68);
  return auVar1;
}



/* Entry: 1016417ac; end: 10164197f;  */

void FUN_1016417ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
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
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 auStack_450 [328];
  undefined1 auStack_308 [24];
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
  undefined8 *puVar3;
  
  func_0x000107c61428(param_4 + 0x78,auStack_308,0,0);
  func_0x000107c610b4(&uStack_1a8,param_4 + 0x78,0x148);
  iVar1 = (int)&uStack_1a8;
  FUN_1016440a8();
  if (iVar1 == 1) {
    puVar3 = &uStack_2f0;
    FUN_10165fd04(&uStack_2f0);
    uStack_468 = uStack_1c8;
    uStack_470 = uStack_1d0;
    uStack_458 = uStack_1b8;
    uStack_460 = uStack_1c0;
    uStack_488 = uStack_1d8;
    uStack_490 = uStack_1e0;
    uStack_478 = uStack_1e8;
    uStack_480 = uStack_1f0;
    uStack_4a8 = uStack_208;
    uStack_4b0 = uStack_210;
    uStack_498 = uStack_1f8;
    uStack_4a0 = uStack_200;
    uStack_4c8 = uStack_228;
    uStack_4d0 = uStack_230;
    uStack_4b8 = uStack_218;
    uStack_4c0 = uStack_220;
    uStack_4e8 = uStack_248;
    uStack_4f0 = uStack_250;
    uStack_4d8 = uStack_238;
    uStack_4e0 = uStack_240;
    uStack_508 = uStack_268;
    uStack_510 = uStack_270;
    uStack_4f8 = uStack_258;
    uStack_500 = uStack_260;
    uStack_528 = uStack_288;
    uStack_530 = uStack_290;
    uStack_518 = uStack_278;
    uStack_520 = uStack_280;
    uStack_548 = uStack_2a8;
    uStack_550 = uStack_2b0;
    uStack_538 = uStack_298;
    uStack_540 = uStack_2a0;
    uStack_558 = uStack_2d0;
    uStack_560 = uStack_2d8;
    uStack_68 = uStack_1b0;
    uStack_178 = uStack_2c0;
    uStack_180 = uStack_2c8;
    uStack_198 = uStack_2e0;
    uStack_1a0 = uStack_2e8;
    uStack_170 = uStack_2b8;
  }
  else {
    uStack_558 = uStack_188;
    uStack_560 = uStack_190;
    uStack_548 = uStack_160;
    uStack_550 = uStack_168;
    uStack_538 = uStack_150;
    uStack_540 = uStack_158;
    uStack_528 = uStack_140;
    uStack_530 = uStack_148;
    uStack_518 = uStack_130;
    uStack_520 = uStack_138;
    uStack_508 = uStack_120;
    uStack_510 = uStack_128;
    uStack_4f8 = uStack_110;
    uStack_500 = uStack_118;
    uStack_4e8 = uStack_100;
    uStack_4f0 = uStack_108;
    uStack_4d8 = uStack_f0;
    uStack_4e0 = uStack_f8;
    uStack_4c8 = uStack_e0;
    uStack_4d0 = uStack_e8;
    uStack_4b8 = uStack_d0;
    uStack_4c0 = uStack_d8;
    uStack_4a8 = uStack_c0;
    uStack_4b0 = uStack_c8;
    uStack_498 = uStack_b0;
    uStack_4a0 = uStack_b8;
    uStack_488 = uStack_90;
    uStack_490 = uStack_98;
    uStack_478 = uStack_a0;
    uStack_480 = uStack_a8;
    uStack_468 = uStack_80;
    uStack_470 = uStack_88;
    uStack_458 = uStack_70;
    uStack_460 = uStack_78;
    puVar3 = &uStack_1a8;
  }
  uVar2 = *puVar3;
  FUN_101649fa8(&uStack_1a8,auStack_450,0x112dbc208,&UNK_10d973500);
  *param_1 = uVar2;
  param_1[1] = uStack_1a0;
  param_1[2] = uStack_198;
  param_1[4] = uStack_558;
  param_1[3] = uStack_560;
  param_1[5] = uStack_180;
  param_1[6] = uStack_178;
  param_1[7] = uStack_170;
  param_1[9] = uStack_548;
  param_1[8] = uStack_550;
  param_1[0xb] = uStack_538;
  param_1[10] = uStack_540;
  param_1[0xd] = uStack_528;
  param_1[0xc] = uStack_530;
  param_1[0xf] = uStack_518;
  param_1[0xe] = uStack_520;
  param_1[0x11] = uStack_508;
  param_1[0x10] = uStack_510;
  param_1[0x13] = uStack_4f8;
  param_1[0x12] = uStack_500;
  param_1[0x15] = uStack_4e8;
  param_1[0x14] = uStack_4f0;
  param_1[0x17] = uStack_4d8;
  param_1[0x16] = uStack_4e0;
  param_1[0x19] = uStack_4c8;
  param_1[0x18] = uStack_4d0;
  param_1[0x1b] = uStack_4b8;
  param_1[0x1a] = uStack_4c0;
  param_1[0x1d] = uStack_4a8;
  param_1[0x1c] = uStack_4b0;
  param_1[0x1f] = uStack_498;
  param_1[0x1e] = uStack_4a0;
  param_1[0x21] = uStack_478;
  param_1[0x20] = uStack_480;
  param_1[0x23] = uStack_488;
  param_1[0x22] = uStack_490;
  param_1[0x25] = uStack_468;
  param_1[0x24] = uStack_470;
  param_1[0x27] = uStack_458;
  param_1[0x26] = uStack_460;
  param_1[0x28] = uStack_68;
  return;
}



/* Entry: 101641980; end: 101641b83;  */

uint FUN_101641980(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 auStack_d18 [328];
  undefined1 auStack_bd0 [328];
  undefined1 auStack_a88 [328];
  undefined1 auStack_940 [656];
  undefined1 auStack_6b0 [328];
  undefined1 auStack_568 [328];
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [328];
  undefined1 auStack_2c0 [328];
  undefined1 auStack_178 [328];
  
  func_0x000107c61428(param_3 + 0x78,auStack_420,0,0);
  func_0x000107c610b4(auStack_2c0,param_3 + 0x78,0x148);
  func_0x0001016440c0(auStack_178);
  func_0x000107c610b4(auStack_6b0,auStack_2c0,0x148);
  func_0x000107c610b4(auStack_568,auStack_178,0x148);
  iVar1 = (int)auStack_6b0;
  func_0x0001016440a8();
  if (iVar1 == 1) {
    iVar1 = (int)auStack_568;
    func_0x0001016440a8();
    if (iVar1 == 1) {
      func_0x000107c610b4(auStack_940,auStack_6b0,0x148);
      FUN_101649fa8(auStack_2c0,auStack_408,0x112dbc208,&UNK_10d973500);
      FUN_10164af34(auStack_940,0x112dbc208,&UNK_10d973500);
      uVar3 = 0;
      goto LAB_101641b6c;
    }
  }
  else {
    func_0x000107c610b4(auStack_a88,auStack_6b0,0x148);
    iVar1 = (int)auStack_568;
    func_0x0001016440a8();
    if (iVar1 != 1) {
      func_0x000107c610b4(auStack_bd0,auStack_568,0x148);
      func_0x000107c610b4(auStack_940,auStack_568,0x148);
      func_0x000107c610b4(auStack_408,auStack_a88,0x148);
      FUN_101649fa8(auStack_2c0,auStack_d18,0x112dbc208,&UNK_10d973500);
      FUN_101649fa8(auStack_2c0,auStack_d18,0x112dbc208,&UNK_10d973500);
      puVar2 = auStack_408;
      FUN_1016606e0(puVar2,auStack_940);
      FUN_10164af34(auStack_2c0,0x112dbc208,&UNK_10d973500);
      FUN_10164af34(auStack_bd0,0x112dbc208,&UNK_10d973500);
      FUN_10164af34(auStack_6b0,0x112dbc208,&UNK_10d973500);
      uVar3 = (uint)puVar2 ^ 1;
      goto LAB_101641b6c;
    }
  }
  func_0x000107c610b4(auStack_940,auStack_6b0,0x290);
  FUN_101649fa8(auStack_2c0,auStack_408,0x112dbc208,&UNK_10d973500);
  FUN_10164af34(auStack_940,0x112dbc210,&UNK_10d973508);
  uVar3 = 1;
LAB_101641b6c:
  return uVar3 & 1;
}



/* Entry: 101641b84; end: 101641bbf;  */

undefined1 FUN_101641b84(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x1c0,auStack_38,0,0);
  return *(undefined1 *)(param_3 + 0x1c0);
}



/* Entry: 101641bc0; end: 101641c2f;  */

uint FUN_101641bc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x1c8,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x1c8);
  FUN_100cb70b4(uVar1);
  return (uint)uVar1 & 1;
}



/* Entry: 101641c30; end: 101641c6b;  */

undefined1 FUN_101641c30(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x1e0,auStack_38,0,0);
  return *(undefined1 *)(param_3 + 0x1e0);
}



/* Entry: 101641c6c; end: 101641d9b;  */

void FUN_101641c6c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined1 auStack_1b8 [104];
  undefined1 auStack_150 [24];
  long lStack_138;
  undefined4 uStack_130;
  long lStack_128;
  undefined1 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  func_0x000107c61428((long *)(param_4 + 0x1e8),auStack_150,0,0);
  lStack_1d8 = *(long *)(param_4 + 0x230);
  lStack_1e0 = *(long *)(param_4 + 0x228);
  lStack_1c8 = *(long *)(param_4 + 0x240);
  lStack_1d0 = *(long *)(param_4 + 0x238);
  lStack_70 = *(long *)(param_4 + 0x248);
  uStack_c8 = *(undefined8 *)(param_4 + 0x1f0);
  lStack_d0 = *(long *)(param_4 + 0x1e8);
  uStack_b8 = *(undefined8 *)(param_4 + 0x200);
  lStack_c0 = *(long *)(param_4 + 0x1f8);
  lStack_a8 = *(long *)(param_4 + 0x210);
  lStack_b0 = *(long *)(param_4 + 0x208);
  lStack_1e8 = *(long *)(param_4 + 0x220);
  lStack_1f0 = *(long *)(param_4 + 0x218);
  lStack_a0 = lStack_1f0;
  lStack_98 = lStack_1e8;
  lStack_90 = lStack_1e0;
  lStack_88 = lStack_1d8;
  lStack_80 = lStack_1d0;
  lStack_78 = lStack_1c8;
  if (lStack_d0 == 0) {
    FUN_10164ced4(&lStack_138);
    lStack_1d8 = lStack_f0;
    lStack_1e0 = lStack_f8;
    lStack_1c8 = lStack_e0;
    lStack_1d0 = lStack_e8;
    lStack_1e8 = lStack_100;
    lStack_1f0 = lStack_108;
  }
  else {
    lStack_d8 = lStack_70;
    lStack_118 = lStack_b0;
    lStack_128 = lStack_c0;
    lStack_138 = lStack_d0;
    lStack_110 = lStack_a8;
    uStack_130 = (undefined4)uStack_c8;
    uStack_120 = (undefined1)uStack_b8;
  }
  FUN_101649fa8(&lStack_d0,auStack_1b8,0x112dbc218,&UNK_10d973510);
  *param_1 = lStack_138;
  *(undefined4 *)(param_1 + 1) = uStack_130;
  param_1[2] = lStack_128;
  *(undefined1 *)(param_1 + 3) = uStack_120;
  param_1[4] = lStack_118;
  param_1[5] = lStack_110;
  param_1[7] = lStack_1e8;
  param_1[6] = lStack_1f0;
  param_1[9] = lStack_1d8;
  param_1[8] = lStack_1e0;
  param_1[0xb] = lStack_1c8;
  param_1[10] = lStack_1d0;
  param_1[0xc] = lStack_d8;
  return;
}



/* Entry: 101641d9c; end: 101641ef3;  */

bool FUN_101641d9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_200 [104];
  long lStack_198;
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
  undefined1 auStack_c8 [24];
  long lStack_b0;
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
  
  func_0x000107c61428((long *)(param_3 + 0x1e8),auStack_c8,0,0);
  uStack_68 = *(undefined8 *)(param_3 + 0x230);
  uStack_70 = *(undefined8 *)(param_3 + 0x228);
  uStack_58 = *(undefined8 *)(param_3 + 0x240);
  uStack_60 = *(undefined8 *)(param_3 + 0x238);
  uStack_50 = *(undefined8 *)(param_3 + 0x248);
  uStack_a8 = *(undefined8 *)(param_3 + 0x1f0);
  lVar3 = *(long *)(param_3 + 0x1e8);
  uStack_98 = *(undefined8 *)(param_3 + 0x200);
  uStack_a0 = *(undefined8 *)(param_3 + 0x1f8);
  uStack_88 = *(undefined8 *)(param_3 + 0x210);
  uStack_90 = *(undefined8 *)(param_3 + 0x208);
  uStack_78 = *(undefined8 *)(param_3 + 0x220);
  uStack_80 = *(undefined8 *)(param_3 + 0x218);
  lStack_b0 = lVar3;
  if (lVar3 == 0) {
    lStack_198 = 0;
    uStack_168 = *(undefined8 *)(param_3 + 0x218);
    uStack_170 = *(undefined8 *)(param_3 + 0x210);
    uStack_158 = *(undefined8 *)(param_3 + 0x228);
    uStack_160 = *(undefined8 *)(param_3 + 0x220);
    uStack_148 = *(undefined8 *)(param_3 + 0x238);
    uStack_150 = *(undefined8 *)(param_3 + 0x230);
    uStack_138 = *(undefined8 *)(param_3 + 0x248);
    uStack_140 = *(undefined8 *)(param_3 + 0x240);
    uStack_188 = *(undefined8 *)(param_3 + 0x1f8);
    uStack_190 = *(undefined8 *)(param_3 + 0x1f0);
    uStack_178 = *(undefined8 *)(param_3 + 0x208);
    uStack_180 = *(undefined8 *)(param_3 + 0x200);
    uVar1 = 0x112dbc218;
    puVar2 = &UNK_10d973510;
    FUN_101649fa8(&lStack_b0,auStack_200,0x112dbc218,&UNK_10d973510);
  }
  else {
    uStack_168 = *(undefined8 *)(param_3 + 0x218);
    uStack_170 = *(undefined8 *)(param_3 + 0x210);
    uStack_158 = *(undefined8 *)(param_3 + 0x228);
    uStack_160 = *(undefined8 *)(param_3 + 0x220);
    uStack_148 = *(undefined8 *)(param_3 + 0x238);
    uStack_150 = *(undefined8 *)(param_3 + 0x230);
    uStack_138 = *(undefined8 *)(param_3 + 0x248);
    uStack_140 = *(undefined8 *)(param_3 + 0x240);
    uStack_188 = *(undefined8 *)(param_3 + 0x1f8);
    uStack_190 = *(undefined8 *)(param_3 + 0x1f0);
    uStack_178 = *(undefined8 *)(param_3 + 0x208);
    uStack_180 = *(undefined8 *)(param_3 + 0x200);
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 0;
    lStack_198 = lVar3;
    FUN_101649fa8(&lStack_b0,auStack_200,0x112dbc218,&UNK_10d973510);
    uVar1 = 0x112dbc220;
    puVar2 = &UNK_10d973518;
  }
  FUN_10164af34(&lStack_198,uVar1,puVar2);
  return lVar3 != 0;
}



/* Entry: 101641ef4; end: 101641f43;  */

undefined1  [16] FUN_101641ef4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x250,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x250);
  func_0x000107c61434(*(undefined8 *)(param_3 + 600));
  return auVar1;
}



/* Entry: 101641f44; end: 101642017;  */

void FUN_101641f44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
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
  
  func_0x000107c61428(param_4 + 0x260,auStack_a0,0,0);
  uVar1 = *(undefined8 *)(param_4 + 0x260);
  uVar2 = *(ulong *)(param_4 + 0x268);
  lVar3 = *(long *)(param_4 + 0x270);
  uVar4 = *(undefined8 *)(param_4 + 0x278);
  uVar5 = *(undefined8 *)(param_4 + 0x280);
  uVar6 = uVar2;
  uVar7 = uVar4;
  lVar8 = lVar3;
  uVar9 = uVar1;
  uStack_a8 = uVar5;
  if (lVar3 == 0) {
    func_0x00010368c4b8(&uStack_88);
    uStack_a8 = uStack_68;
    uVar6 = (ulong)bStack_80;
    uVar7 = uStack_70;
    lVar8 = lStack_78;
    uVar9 = uStack_88;
  }
  func_0x000101541428(uVar1,uVar2,lVar3,uVar4,uVar5);
  *param_1 = uVar9;
  *(char *)(param_1 + 1) = (char)uVar6;
  param_1[2] = lVar8;
  param_1[3] = uVar7;
  param_1[4] = uStack_a8;
  return;
}



/* Entry: 101642018; end: 101642053;  */

undefined4 FUN_101642018(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x288,auStack_38,0,0);
  return *(undefined4 *)(param_3 + 0x288);
}



/* Entry: 101642054; end: 101642157;  */

undefined4 FUN_101642054(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x290,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0x2a0) >> 0x3c < 0xf) {
    uVar1 = (undefined4)*(undefined8 *)(param_3 + 0x290);
  }
  FUN_1015dc5b4();
  return uVar1;
}



/* Entry: 101642158; end: 10164224b;  */

void FUN_101642158(byte *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_110 [72];
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61428((undefined8 *)(param_4 + 0x2a8),auStack_c8,0,0);
  uStack_88 = *(undefined8 *)(param_4 + 0x2d0);
  lStack_90 = *(long *)(param_4 + 0x2c8);
  uStack_78 = *(undefined8 *)(param_4 + 0x2e0);
  uStack_80 = *(undefined8 *)(param_4 + 0x2d8);
  uStack_70 = *(undefined8 *)(param_4 + 0x2e8);
  uStack_a8 = *(undefined8 *)(param_4 + 0x2b0);
  uStack_b0 = *(undefined8 *)(param_4 + 0x2a8);
  uStack_98 = *(undefined8 *)(param_4 + 0x2c0);
  uStack_a0 = *(undefined8 *)(param_4 + 0x2b8);
  if (lStack_90 == 1) {
    bVar1 = 0;
    lVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0xc000000000000000;
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    bVar1 = (byte)uStack_b0;
    lVar2 = lStack_90;
    uVar3 = uStack_a8;
    uVar4 = uStack_98;
    uVar5 = uStack_88;
    uVar6 = uStack_80;
    uVar7 = uStack_a0;
    uVar8 = uStack_78;
    uVar9 = uStack_70;
  }
  FUN_101649fa8(&uStack_b0,auStack_110,0x112dbc228,&UNK_10d973520);
  *param_1 = bVar1 & 1;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(long *)(param_1 + 0x20) = lVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  return;
}



/* Entry: 10164224c; end: 10164230f;  */

undefined1  [16] FUN_10164224c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x2f0,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x2f0);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x2f8));
  return auVar1;
}



/* Entry: 101642310; end: 10164240f;  */

void FUN_101642310(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_128 [96];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uVar6 = *(ulong *)(param_4 + 0x338);
  uVar4 = *(ulong *)(param_4 + 0x370);
  if (((uVar6 & uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 ||
      (uVar4 & 0x2000000000000000) != 0) {
    func_0x00010164e210(&uStack_c8);
    uVar3 = uStack_88;
    uVar1 = uStack_90;
    uVar2 = uStack_98;
    uVar4 = uStack_70;
    uVar5 = uStack_b0;
    uVar6 = uStack_a8;
    uVar7 = uStack_80;
    uVar8 = uStack_c8;
    uVar9 = uStack_78;
    uVar10 = uStack_b8;
    uVar11 = uStack_a0;
    uVar12 = uStack_c0;
  }
  else {
    uVar9 = *(undefined8 *)(param_4 + 0x368);
    uVar7 = *(undefined8 *)(param_4 + 0x360);
    uVar3 = *(undefined8 *)(param_4 + 0x358);
    uVar1 = *(undefined8 *)(param_4 + 0x350);
    uVar2 = *(undefined8 *)(param_4 + 0x348);
    uVar11 = *(undefined8 *)(param_4 + 0x340);
    uVar5 = *(undefined8 *)(param_4 + 0x330);
    uVar10 = *(undefined8 *)(param_4 + 0x328);
    uVar12 = *(undefined8 *)(param_4 + 800);
    uVar8 = *(undefined8 *)(param_4 + 0x318);
    uStack_c8 = uVar8;
    uStack_c0 = uVar12;
    uStack_b8 = uVar10;
    uStack_b0 = uVar5;
    uStack_a8 = uVar6;
    uStack_a0 = uVar11;
    uStack_98 = uVar2;
    uStack_90 = uVar1;
    uStack_88 = uVar3;
    uStack_80 = uVar7;
    uStack_78 = uVar9;
    uStack_70 = uVar4;
    FUN_101649ea0(&uStack_c8,auStack_128);
  }
  *param_1 = uVar8;
  param_1[1] = uVar12;
  param_1[2] = uVar10;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  param_1[5] = uVar11;
  param_1[6] = uVar2;
  param_1[7] = uVar1;
  param_1[8] = uVar3;
  param_1[9] = uVar7;
  param_1[10] = uVar9;
  param_1[0xb] = uVar4;
  return;
}



/* Entry: 101642410; end: 1016424d7;  */

void FUN_101642410(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_110 [96];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  uVar1 = *(ulong *)(param_4 + 0x338);
  uStack_58 = *(ulong *)(param_4 + 0x370);
  if (((uVar1 & uStack_58 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 ||
      (uStack_58 & 0x2000000000000000) == 0) {
    FUN_10164e1f0(&uStack_b0);
    uVar1 = uStack_90;
    uVar2 = uStack_98;
    uVar3 = uStack_a0;
    uVar4 = uStack_a8;
    uVar5 = uStack_b0;
  }
  else {
    uStack_80 = *(undefined8 *)(param_4 + 0x348);
    uStack_88 = *(undefined8 *)(param_4 + 0x340);
    uStack_70 = *(undefined8 *)(param_4 + 0x358);
    uStack_78 = *(undefined8 *)(param_4 + 0x350);
    uVar2 = *(undefined8 *)(param_4 + 0x330);
    uVar3 = *(undefined8 *)(param_4 + 0x328);
    uVar4 = *(undefined8 *)(param_4 + 800);
    uVar5 = *(undefined8 *)(param_4 + 0x318);
    uStack_60 = *(undefined8 *)(param_4 + 0x368);
    uStack_68 = *(undefined8 *)(param_4 + 0x360);
    uStack_b0 = uVar5;
    uStack_a8 = uVar4;
    uStack_a0 = uVar3;
    uStack_98 = uVar2;
    uStack_90 = uVar1;
    FUN_101649ea0(&uStack_b0,auStack_110);
  }
  *param_1 = uVar5;
  param_1[1] = uVar4;
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Entry: 1016424d8; end: 1016425e3;  */

void FUN_1016424d8(byte *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_110;
  undefined1 auStack_108 [64];
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x000107c61428((undefined8 *)(param_4 + 0x378),auStack_c8,0,0);
  uStack_a8 = *(undefined8 *)(param_4 + 0x380);
  uVar10 = *(undefined8 *)(param_4 + 0x378);
  uStack_98 = *(undefined8 *)(param_4 + 0x390);
  uStack_a0 = *(undefined8 *)(param_4 + 0x388);
  uStack_88 = *(undefined8 *)(param_4 + 0x3a0);
  lStack_90 = *(long *)(param_4 + 0x398);
  uStack_78 = *(undefined8 *)(param_4 + 0x3b0);
  uStack_80 = *(undefined8 *)(param_4 + 0x3a8);
  if (lStack_90 == 1) {
    uStack_b0._0_1_ = 0;
    uStack_b0._1_1_ = 0;
    uStack_b0._2_1_ = 0;
    uStack_110 = 0;
    lVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0xc000000000000000;
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uStack_b0._2_1_ = (byte)((ulong)uVar10 >> 0x10);
    uStack_b0._1_1_ = (byte)((ulong)uVar10 >> 8);
    uStack_b0._0_1_ = (byte)uVar10;
    lVar4 = lStack_90;
    uVar5 = uStack_98;
    uVar6 = uStack_88;
    uVar7 = uStack_a0;
    uVar8 = uStack_80;
    uVar9 = uStack_78;
    uStack_110 = uStack_a8;
  }
  bVar1 = (byte)uStack_b0 & 1;
  bVar2 = uStack_b0._1_1_ & 1;
  bVar3 = uStack_b0._2_1_ & 1;
  uStack_b0 = uVar10;
  FUN_101649fa8(&uStack_b0,auStack_108,0x112dbc238,&UNK_10d973538);
  *param_1 = bVar1;
  param_1[1] = bVar2;
  param_1[2] = bVar3;
  *(undefined8 *)(param_1 + 8) = uStack_110;
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(long *)(param_1 + 0x20) = lVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  return;
}



/* Entry: 1016425e4; end: 1016426fb;  */

undefined1 FUN_1016425e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x3b8,auStack_38,0,0);
  return *(undefined1 *)(param_3 + 0x3b8);
}



/* Entry: 1016426fc; end: 1016427af;  */

ulong FUN_1016426fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  ulong uVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x408,auStack_68,0,0);
  uVar7 = *(ulong *)(param_3 + 0x408);
  bVar6 = (uVar7 & 0xff) != 2;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = uVar7 & 1;
  }
  uVar2 = 0;
  if (bVar6) {
    uVar2 = uVar7 & 0x100;
  }
  uVar3 = 0;
  if (bVar6) {
    uVar3 = uVar7 & 0x10000;
  }
  uVar4 = 0;
  if (bVar6) {
    uVar4 = uVar7 & 0x1000000;
  }
  uVar5 = 0;
  if (bVar6) {
    uVar5 = uVar7 & 0x100000000;
  }
  FUN_100cb70b4();
  return uVar2 | uVar1 | uVar3 | uVar4 | uVar5;
}



/* Entry: 1016427b0; end: 1016427eb;  */

undefined1 FUN_1016427b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x420,auStack_38,0,0);
  return *(undefined1 *)(param_3 + 0x420);
}



/* Entry: 1016427ec; end: 101642917;  */

void FUN_1016427ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [112];
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
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
  
  func_0x000107c61428((undefined8 *)(param_4 + 0x428),auStack_f8,0,0);
  uStack_98 = *(undefined8 *)(param_4 + 0x470);
  uStack_a0 = *(undefined8 *)(param_4 + 0x468);
  uStack_88 = *(undefined8 *)(param_4 + 0x480);
  uStack_90 = *(undefined8 *)(param_4 + 0x478);
  uStack_78 = *(undefined8 *)(param_4 + 0x490);
  uStack_80 = *(undefined8 *)(param_4 + 0x488);
  uStack_d8 = *(undefined8 *)(param_4 + 0x430);
  uStack_e0 = *(undefined8 *)(param_4 + 0x428);
  lStack_c8 = *(long *)(param_4 + 0x440);
  uStack_d0 = *(undefined8 *)(param_4 + 0x438);
  uStack_b8 = *(undefined8 *)(param_4 + 0x450);
  uStack_c0 = *(undefined8 *)(param_4 + 0x448);
  uStack_a8 = *(undefined8 *)(param_4 + 0x460);
  uStack_b0 = *(undefined8 *)(param_4 + 0x458);
  lVar1 = lStack_c8;
  uVar2 = uStack_98;
  uVar3 = uStack_90;
  uVar4 = uStack_88;
  uVar5 = uStack_80;
  uVar6 = uStack_78;
  uVar7 = uStack_a8;
  uVar8 = uStack_a0;
  uVar9 = uStack_d8;
  uStack_190 = uStack_b0;
  uStack_188 = uStack_b8;
  uStack_180 = uStack_c0;
  uStack_178 = uStack_d0;
  uStack_170 = uStack_e0;
  if (lStack_c8 == 1) {
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_190 = 0;
    lVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0xc000000000000000;
  }
  FUN_101649fa8(&uStack_e0,auStack_168,0x112dbc248,&UNK_10d973548);
  *param_1 = uStack_170;
  param_1[1] = uVar9;
  param_1[2] = uStack_178;
  param_1[3] = lVar1;
  param_1[4] = uStack_180;
  param_1[5] = uStack_188;
  param_1[6] = uStack_190;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar5;
  param_1[0xd] = uVar6;
  return;
}



/* Entry: 101642918; end: 101642a6b;  */

bool FUN_101642918(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_210 [112];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
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
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
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
  
  puVar1 = (undefined8 *)(param_3 + 0x428);
  func_0x000107c61428(puVar1,auStack_b8,0,0);
  uStack_58 = *(undefined8 *)(param_3 + 0x470);
  uStack_60 = *(undefined8 *)(param_3 + 0x468);
  uStack_48 = *(undefined8 *)(param_3 + 0x480);
  uStack_50 = *(undefined8 *)(param_3 + 0x478);
  uStack_38 = *(undefined8 *)(param_3 + 0x490);
  uStack_40 = *(undefined8 *)(param_3 + 0x488);
  uStack_98 = *(undefined8 *)(param_3 + 0x430);
  uStack_a0 = *puVar1;
  lVar4 = *(long *)(param_3 + 0x440);
  uStack_90 = *(undefined8 *)(param_3 + 0x438);
  uStack_78 = *(undefined8 *)(param_3 + 0x450);
  uStack_80 = *(undefined8 *)(param_3 + 0x448);
  uStack_68 = *(undefined8 *)(param_3 + 0x460);
  uStack_70 = *(undefined8 *)(param_3 + 0x458);
  lStack_88 = lVar4;
  if (lVar4 == 1) {
    uStack_198 = *(undefined8 *)(param_3 + 0x430);
    uStack_1a0 = *puVar1;
    uStack_190 = *(undefined8 *)(param_3 + 0x438);
    lStack_188 = 1;
    uStack_158 = *(undefined8 *)(param_3 + 0x470);
    uStack_160 = *(undefined8 *)(param_3 + 0x468);
    uStack_148 = *(undefined8 *)(param_3 + 0x480);
    uStack_150 = *(undefined8 *)(param_3 + 0x478);
    uStack_138 = *(undefined8 *)(param_3 + 0x490);
    uStack_140 = *(undefined8 *)(param_3 + 0x488);
    uStack_178 = *(undefined8 *)(param_3 + 0x450);
    uStack_180 = *(undefined8 *)(param_3 + 0x448);
    uStack_168 = *(undefined8 *)(param_3 + 0x460);
    uStack_170 = *(undefined8 *)(param_3 + 0x458);
    uVar2 = 0x112dbc248;
    puVar3 = &UNK_10d973548;
    FUN_101649fa8(&uStack_a0,auStack_210,0x112dbc248,&UNK_10d973548);
  }
  else {
    uStack_198 = *(undefined8 *)(param_3 + 0x430);
    uStack_1a0 = *puVar1;
    uStack_190 = *(undefined8 *)(param_3 + 0x438);
    uStack_158 = *(undefined8 *)(param_3 + 0x470);
    uStack_160 = *(undefined8 *)(param_3 + 0x468);
    uStack_148 = *(undefined8 *)(param_3 + 0x480);
    uStack_150 = *(undefined8 *)(param_3 + 0x478);
    uStack_138 = *(undefined8 *)(param_3 + 0x490);
    uStack_140 = *(undefined8 *)(param_3 + 0x488);
    uStack_178 = *(undefined8 *)(param_3 + 0x450);
    uStack_180 = *(undefined8 *)(param_3 + 0x448);
    uStack_168 = *(undefined8 *)(param_3 + 0x460);
    uStack_170 = *(undefined8 *)(param_3 + 0x458);
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 1;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_188 = lVar4;
    FUN_101649fa8(&uStack_a0,auStack_210,0x112dbc248,&UNK_10d973548);
    uVar2 = 0x112dbc250;
    puVar3 = &UNK_10d973550;
  }
  FUN_10164af34(&uStack_1a0,uVar2,puVar3);
  return lVar4 != 1;
}



/* Entry: 101642a6c; end: 101642ae7;  */

undefined1 FUN_101642a6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x498,auStack_38,0,0);
  return *(undefined1 *)(param_3 + 0x498);
}



/* Entry: 101642ae8; end: 101642be3;  */

void FUN_101642ae8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_120 [72];
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x000107c61428((undefined8 *)(param_4 + 0x4f8),auStack_d8,0,0);
  lStack_b8 = *(long *)(param_4 + 0x500);
  uStack_c0 = *(undefined8 *)(param_4 + 0x4f8);
  uStack_a8 = *(undefined8 *)(param_4 + 0x510);
  uStack_b0 = *(undefined8 *)(param_4 + 0x508);
  uStack_98 = *(undefined8 *)(param_4 + 0x520);
  uStack_a0 = *(undefined8 *)(param_4 + 0x518);
  uStack_88 = *(undefined8 *)(param_4 + 0x530);
  uStack_90 = *(undefined8 *)(param_4 + 0x528);
  uStack_80 = *(undefined8 *)(param_4 + 0x538);
  if (lStack_b8 == 0) {
    uVar1 = 0;
    uVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar7 = 0xc000000000000000;
    uVar6 = 1;
    uVar9 = 0;
    lVar3 = -0x2000000000000000;
    uVar8 = 0xe000000000000000;
  }
  else {
    uVar1 = uStack_c0;
    uVar2 = uStack_b0;
    lVar3 = lStack_b8;
    uVar4 = uStack_98;
    uVar5 = uStack_88;
    uVar7 = uStack_80;
    uVar8 = uStack_a8;
    uVar9 = uStack_a0;
    uVar6 = (undefined1)uStack_90;
  }
  FUN_101649fa8(&uStack_c0,auStack_120,0x112dbc258,&UNK_10d973558);
  *param_1 = uVar1;
  param_1[1] = lVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  param_1[4] = uVar9;
  param_1[5] = uVar4;
  *(undefined1 *)(param_1 + 6) = uVar6;
  param_1[7] = uVar5;
  param_1[8] = uVar7;
  return;
}



/* Entry: 101642be4; end: 101642d83;  */

bool FUN_101642be4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_170 [72];
  undefined8 uStack_128;
  long lStack_120;
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
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c61428((undefined8 *)(param_3 + 0x4f8),auStack_98,0,0);
  lVar3 = *(long *)(param_3 + 0x500);
  uStack_128 = *(undefined8 *)(param_3 + 0x4f8);
  uStack_68 = *(undefined8 *)(param_3 + 0x510);
  uStack_70 = *(undefined8 *)(param_3 + 0x508);
  uStack_58 = *(undefined8 *)(param_3 + 0x520);
  uStack_60 = *(undefined8 *)(param_3 + 0x518);
  uStack_48 = *(undefined8 *)(param_3 + 0x530);
  uStack_50 = *(undefined8 *)(param_3 + 0x528);
  uStack_40 = *(undefined8 *)(param_3 + 0x538);
  uStack_80 = uStack_128;
  lStack_78 = lVar3;
  if (lVar3 == 0) {
    lStack_120 = 0;
    uStack_110 = *(undefined8 *)(param_3 + 0x510);
    uStack_118 = *(undefined8 *)(param_3 + 0x508);
    uStack_100 = *(undefined8 *)(param_3 + 0x520);
    uStack_108 = *(undefined8 *)(param_3 + 0x518);
    uStack_f0 = *(undefined8 *)(param_3 + 0x530);
    uStack_f8 = *(undefined8 *)(param_3 + 0x528);
    uStack_e8 = *(undefined8 *)(param_3 + 0x538);
    uVar1 = 0x112dbc258;
    puVar2 = &UNK_10d973558;
    FUN_101649fa8(&uStack_80,auStack_170,0x112dbc258,&UNK_10d973558);
  }
  else {
    uStack_110 = *(undefined8 *)(param_3 + 0x510);
    uStack_118 = *(undefined8 *)(param_3 + 0x508);
    uStack_100 = *(undefined8 *)(param_3 + 0x520);
    uStack_108 = *(undefined8 *)(param_3 + 0x518);
    uStack_f0 = *(undefined8 *)(param_3 + 0x530);
    uStack_f8 = *(undefined8 *)(param_3 + 0x528);
    uStack_e8 = *(undefined8 *)(param_3 + 0x538);
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    lStack_120 = lVar3;
    FUN_101649fa8(&uStack_80,auStack_170,0x112dbc258,&UNK_10d973558);
    uVar1 = 0x112dbc260;
    puVar2 = &UNK_10d973560;
  }
  FUN_10164af34(&uStack_128,uVar1,puVar2);
  return lVar3 != 0;
}



/* Entry: 101642d84; end: 101642e4b;  */

uint FUN_101642d84(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  ulong uStack_78;
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
  uStack_d0 = *param_1;
  uStack_c8 = param_1[1];
  uStack_c0 = param_1[2];
  uStack_b8 = param_1[3];
  uStack_b0 = param_1[4];
  uStack_78 = param_1[0xb];
  uStack_70 = *param_2;
  uStack_68 = param_2[1];
  uStack_60 = param_2[2];
  if ((uStack_78 >> 0x3d & 1) == 0) {
    uStack_58 = param_2[3];
    uStack_48 = param_2[5];
    uStack_50 = param_2[4];
    uStack_38 = param_2[7];
    uStack_40 = param_2[6];
    uStack_28 = param_2[9];
    uStack_30 = param_2[8];
    uStack_18 = param_2[0xb];
    uStack_20 = param_2[10];
    uStack_a0 = param_1[6];
    uStack_a8 = param_1[5];
    uStack_90 = param_1[8];
    uStack_98 = param_1[7];
    uStack_80 = param_1[10];
    uStack_88 = param_1[9];
    if (((ulong)param_2[0xb] >> 0x3d & 1) == 0) {
      FUN_10164f20c(&uStack_d0,&uStack_70);
      goto LAB_101642e3c;
    }
  }
  else {
    uStack_50 = param_2[4];
    uStack_58 = param_2[3];
    if (((ulong)param_2[0xb] >> 0x3d & 1) != 0) {
      uVar1 = 0;
      FUN_10164e908(&uStack_d0,&uStack_70);
      goto LAB_101642e3c;
    }
  }
  uVar1 = 0;
LAB_101642e3c:
  return uVar1 & 1;
}



/* Entry: 101642e4c; end: 101642ea7;  */

undefined8 FUN_101642e4c(void)

{
  if (lRam0000000112dbc268 != -1) {
    func_0x000107c61568(0x112dbc268,FUN_101642ef0);
  }
  func_0x000107c6157c(uRam0000000112dbc270);
  return 0;
}



/* Entry: 101642ea8; end: 101642eef;  */

void FUN_101642ea8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d973870,0x39f,2);
  uRam0000000113802190 = uStack_38;
  uRam0000000113802188 = uStack_40;
  uRam00000001138021a0 = uStack_28;
  uRam0000000113802198 = uStack_30;
  uRam00000001138021b0 = uStack_18;
  uRam00000001138021a8 = uStack_20;
  return;
}



/* Entry: 101642ef0; end: 101642f2b;  */

void FUN_101642ef0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1016415a4();
  func_0x000107c613fc();
  FUN_101642f2c();
  uRam0000000112dbc270 = uVar1;
  return;
}



/* Entry: 101642f2c; end: 1016430ab;  */

void FUN_101642f2c(void)

{
  long unaff_x20;
  undefined1 auStack_178 [328];
  
  *(undefined8 *)(unaff_x20 + 0x33) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined1 *)(unaff_x20 + 0x70) = 1;
  func_0x0001016440c0(auStack_178);
  func_0x000107c610b4(unaff_x20 + 0x78,auStack_178,0x148);
  *(undefined2 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 2;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined1 *)(unaff_x20 + 0x1e0) = 0;
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
  *(undefined8 *)(unaff_x20 + 600) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x268) = 0;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x284) = 0;
  *(undefined8 *)(unaff_x20 + 0x27c) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 1;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f8) = 0xe000000000000000;
  *(undefined2 *)(unaff_x20 + 0x300) = 0;
  *(undefined8 *)(unaff_x20 + 0x308) = 0;
  *(undefined1 *)(unaff_x20 + 0x310) = 1;
  *(undefined8 *)(unaff_x20 + 800) = 0;
  *(undefined8 *)(unaff_x20 + 0x318) = 0;
  *(undefined8 *)(unaff_x20 + 0x330) = 0;
  *(undefined8 *)(unaff_x20 + 0x328) = 0;
  *(undefined8 *)(unaff_x20 + 0x338) = 0x3000000000000000;
  *(undefined8 *)(unaff_x20 + 0x348) = 0;
  *(undefined8 *)(unaff_x20 + 0x340) = 0;
  *(undefined8 *)(unaff_x20 + 0x358) = 0;
  *(undefined8 *)(unaff_x20 + 0x350) = 0;
  *(undefined8 *)(unaff_x20 + 0x368) = 0;
  *(undefined8 *)(unaff_x20 + 0x360) = 0;
  *(undefined8 *)(unaff_x20 + 0x370) = 0x3000000000000000;
  *(undefined8 *)(unaff_x20 + 0x380) = 0;
  *(undefined8 *)(unaff_x20 + 0x378) = 0;
  *(undefined8 *)(unaff_x20 + 0x390) = 0;
  *(undefined8 *)(unaff_x20 + 0x388) = 0;
  *(undefined8 *)(unaff_x20 + 0x398) = 1;
  *(undefined8 *)(unaff_x20 + 0x3a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a0) = 0;
  *(undefined4 *)(unaff_x20 + 0x3b7) = 0;
  *(undefined8 *)(unaff_x20 + 0x3b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d0) = 0;
  *(undefined8 *)(unaff_x20 + 1000) = 0;
  *(undefined8 *)(unaff_x20 + 0x3e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f0) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x400) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x408) = 2;
  *(undefined1 *)(unaff_x20 + 0x420) = 0;
  *(undefined8 *)(unaff_x20 + 0x418) = 0;
  *(undefined8 *)(unaff_x20 + 0x410) = 0;
  *(undefined8 *)(unaff_x20 + 0x438) = 0;
  *(undefined8 *)(unaff_x20 + 0x430) = 0;
  *(undefined8 *)(unaff_x20 + 0x428) = 0;
  *(undefined8 *)(unaff_x20 + 0x440) = 1;
  *(undefined1 *)(unaff_x20 + 0x498) = 0;
  *(undefined8 *)(unaff_x20 + 0x480) = 0;
  *(undefined8 *)(unaff_x20 + 0x478) = 0;
  *(undefined8 *)(unaff_x20 + 0x490) = 0;
  *(undefined8 *)(unaff_x20 + 0x488) = 0;
  *(undefined8 *)(unaff_x20 + 0x460) = 0;
  *(undefined8 *)(unaff_x20 + 0x458) = 0;
  *(undefined8 *)(unaff_x20 + 0x470) = 0;
  *(undefined8 *)(unaff_x20 + 0x468) = 0;
  *(undefined8 *)(unaff_x20 + 0x450) = 0;
  *(undefined8 *)(unaff_x20 + 0x448) = 0;
  *(undefined8 *)(unaff_x20 + 0x4e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4a0) = 0;
  *(undefined **)(unaff_x20 + 0x4f0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x538) = 0;
  *(undefined8 *)(unaff_x20 + 0x520) = 0;
  *(undefined8 *)(unaff_x20 + 0x518) = 0;
  *(undefined8 *)(unaff_x20 + 0x530) = 0;
  *(undefined8 *)(unaff_x20 + 0x528) = 0;
  *(undefined8 *)(unaff_x20 + 0x500) = 0;
  *(undefined8 *)(unaff_x20 + 0x4f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x510) = 0;
  *(undefined8 *)(unaff_x20 + 0x508) = 0;
  return;
}



/* Entry: 1016430ac; end: 101644063;  */

void FUN_1016430ac(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_1000 [24];
  undefined1 auStack_fe8 [24];
  undefined1 auStack_fd0 [24];
  undefined1 auStack_fb8 [24];
  undefined1 auStack_fa0 [24];
  undefined1 auStack_f88 [24];
  undefined1 auStack_f70 [24];
  undefined1 auStack_f58 [24];
  undefined1 auStack_f40 [24];
  undefined1 auStack_f28 [24];
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined1 auStack_ea0 [24];
  undefined1 auStack_e88 [24];
  undefined1 auStack_e70 [24];
  undefined1 auStack_e58 [24];
  undefined1 auStack_e40 [24];
  undefined1 auStack_e28 [24];
  undefined1 auStack_e10 [24];
  undefined1 auStack_df8 [24];
  undefined1 auStack_de0 [24];
  undefined1 auStack_dc8 [24];
  undefined1 auStack_db0 [24];
  undefined1 auStack_d98 [24];
  undefined1 auStack_d80 [24];
  undefined1 auStack_d68 [24];
  undefined1 auStack_d50 [24];
  undefined1 auStack_d38 [24];
  undefined1 auStack_d20 [24];
  undefined1 auStack_d08 [24];
  undefined1 auStack_cf0 [24];
  undefined1 auStack_cd8 [24];
  undefined1 auStack_cc0 [24];
  undefined1 auStack_ca8 [24];
  undefined1 auStack_c90 [24];
  undefined1 auStack_c78 [24];
  undefined1 auStack_c60 [24];
  undefined1 auStack_c48 [24];
  undefined1 auStack_c30 [24];
  undefined1 auStack_c18 [24];
  undefined1 auStack_c00 [24];
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
  undefined1 auStack_a50 [24];
  undefined1 auStack_a38 [24];
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined1 auStack_8d8 [24];
  undefined1 auStack_8c0 [24];
  undefined1 auStack_8a8 [24];
  undefined1 auStack_890 [24];
  undefined1 auStack_878 [24];
  undefined1 auStack_860 [24];
  undefined1 auStack_848 [24];
  undefined1 auStack_830 [24];
  undefined1 auStack_818 [24];
  undefined1 auStack_800 [24];
  undefined1 auStack_7e8 [24];
  undefined1 auStack_7d0 [24];
  undefined1 auStack_7b8 [328];
  undefined1 auStack_670 [328];
  undefined1 auStack_528 [328];
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
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
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
  
  *(undefined8 *)(unaff_x20 + 0x33) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  puVar16 = (undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *puVar16 = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined1 *)(unaff_x20 + 0x70) = 1;
  func_0x0001016440c0(auStack_7b8);
  func_0x000107c610b4(unaff_x20 + 0x78,auStack_7b8,0x148);
  *(undefined2 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + 0x1e8);
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined1 *)(unaff_x20 + 0x1e0) = 0;
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
  *(undefined8 *)(unaff_x20 + 600) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x268) = 0;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x284) = 0;
  *(undefined8 *)(unaff_x20 + 0x27c) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0xf000000000000000;
  puVar2 = (undefined8 *)(unaff_x20 + 0x2a8);
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *puVar2 = 0;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 1;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f8) = 0xe000000000000000;
  *(undefined2 *)(unaff_x20 + 0x300) = 0;
  *(undefined8 *)(unaff_x20 + 0x308) = 0;
  *(undefined1 *)(unaff_x20 + 0x310) = 1;
  puVar3 = (undefined8 *)(unaff_x20 + 0x318);
  *(undefined8 *)(unaff_x20 + 800) = 0;
  *puVar3 = 0;
  *(undefined8 *)(unaff_x20 + 0x330) = 0;
  *(undefined8 *)(unaff_x20 + 0x328) = 0;
  *(undefined8 *)(unaff_x20 + 0x338) = 0x3000000000000000;
  *(undefined8 *)(unaff_x20 + 0x348) = 0;
  *(undefined8 *)(unaff_x20 + 0x340) = 0;
  *(undefined8 *)(unaff_x20 + 0x358) = 0;
  *(undefined8 *)(unaff_x20 + 0x350) = 0;
  *(undefined8 *)(unaff_x20 + 0x368) = 0;
  *(undefined8 *)(unaff_x20 + 0x360) = 0;
  *(undefined8 *)(unaff_x20 + 0x370) = 0x3000000000000000;
  puVar4 = (undefined8 *)(unaff_x20 + 0x378);
  *(undefined8 *)(unaff_x20 + 0x380) = 0;
  *puVar4 = 0;
  *(undefined8 *)(unaff_x20 + 0x390) = 0;
  *(undefined8 *)(unaff_x20 + 0x388) = 0;
  *(undefined8 *)(unaff_x20 + 0x398) = 1;
  *(undefined8 *)(unaff_x20 + 0x3a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a0) = 0;
  *(undefined4 *)(unaff_x20 + 0x3b7) = 0;
  *(undefined8 *)(unaff_x20 + 0x3b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d0) = 0;
  *(undefined8 *)(unaff_x20 + 1000) = 0;
  *(undefined8 *)(unaff_x20 + 0x3e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f0) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x400) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x408) = 2;
  puVar5 = (undefined8 *)(unaff_x20 + 0x428);
  *(undefined1 *)(unaff_x20 + 0x420) = 0;
  *(undefined8 *)(unaff_x20 + 0x418) = 0;
  *(undefined8 *)(unaff_x20 + 0x410) = 0;
  *(undefined8 *)(unaff_x20 + 0x438) = 0;
  *(undefined8 *)(unaff_x20 + 0x430) = 0;
  *puVar5 = 0;
  *(undefined8 *)(unaff_x20 + 0x440) = 1;
  *(undefined1 *)(unaff_x20 + 0x498) = 0;
  *(undefined8 *)(unaff_x20 + 0x480) = 0;
  *(undefined8 *)(unaff_x20 + 0x478) = 0;
  *(undefined8 *)(unaff_x20 + 0x490) = 0;
  *(undefined8 *)(unaff_x20 + 0x488) = 0;
  *(undefined8 *)(unaff_x20 + 0x460) = 0;
  *(undefined8 *)(unaff_x20 + 0x458) = 0;
  *(undefined8 *)(unaff_x20 + 0x470) = 0;
  *(undefined8 *)(unaff_x20 + 0x468) = 0;
  *(undefined8 *)(unaff_x20 + 0x450) = 0;
  *(undefined8 *)(unaff_x20 + 0x448) = 0;
  *(undefined8 *)(unaff_x20 + 0x4e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4a0) = 0;
  *(undefined **)(unaff_x20 + 0x4f0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = (undefined8 *)(unaff_x20 + 0x4f8);
  *(undefined8 *)(unaff_x20 + 0x538) = 0;
  *(undefined8 *)(unaff_x20 + 0x520) = 0;
  *(undefined8 *)(unaff_x20 + 0x518) = 0;
  *(undefined8 *)(unaff_x20 + 0x530) = 0;
  *(undefined8 *)(unaff_x20 + 0x528) = 0;
  *(undefined8 *)(unaff_x20 + 0x500) = 0;
  *puVar6 = 0;
  *(undefined8 *)(unaff_x20 + 0x510) = 0;
  *(undefined8 *)(unaff_x20 + 0x508) = 0;
  func_0x000107c61428(param_1 + 0x10,auStack_7d0,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar19 = *(undefined8 *)(param_1 + 0x28);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61428(puVar16,auStack_7e8,1,0);
  uVar17 = *puVar16;
  uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  *puVar16 = uVar10;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar19;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar11;
  FUN_101649f10(uVar10,uVar14,uVar12,uVar19,uVar11);
  func_0x000101649f5c(uVar17,uVar15,uVar18,uVar13,uVar9);
  func_0x000107c61428(param_1 + 0x38,auStack_800,0,0);
  uVar8 = *(undefined1 *)(param_1 + 0x38);
  func_0x000107c61428(unaff_x20 + 0x38,auStack_818,1,0);
  *(undefined1 *)(unaff_x20 + 0x38) = uVar8;
  func_0x000107c61428(param_1 + 0x39,auStack_830,0,0);
  uVar8 = *(undefined1 *)(param_1 + 0x39);
  func_0x000107c61428(unaff_x20 + 0x39,auStack_848,1,0);
  *(undefined1 *)(unaff_x20 + 0x39) = uVar8;
  func_0x000107c61428(param_1 + 0x3a,auStack_860,0,0);
  uVar8 = *(undefined1 *)(param_1 + 0x3a);
  func_0x000107c61428(unaff_x20 + 0x3a,auStack_878,1,0);
  *(undefined1 *)(unaff_x20 + 0x3a) = uVar8;
  uVar13 = *(undefined8 *)(param_1 + 0x48);
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  uVar14 = *(undefined8 *)(param_1 + 0x58);
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar9;
  FUN_101644064();
  func_0x000100cb711c(uVar12,uVar19,uVar15,uVar18,uVar11);
  func_0x000107c61428(param_1 + 0x68,auStack_890,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  uVar8 = *(undefined1 *)(param_1 + 0x70);
  func_0x000107c61428(unaff_x20 + 0x68,auStack_8a8,1,0);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar10;
  *(undefined1 *)(unaff_x20 + 0x70) = uVar8;
  func_0x000107c61428(param_1 + 0x78,auStack_8c0,0,0);
  func_0x000107c610b4(auStack_670,param_1 + 0x78,0x148);
  func_0x000107c61428(unaff_x20 + 0x78,auStack_8d8,1,0);
  func_0x000107c610b4(auStack_528,unaff_x20 + 0x78,0x148);
  func_0x000107c610b4(unaff_x20 + 0x78,auStack_670,0x148);
  FUN_101649fa8(auStack_670,&uStack_a20,0x112dbc208,&UNK_10d973500);
  FUN_10164af34(auStack_528,0x112dbc208,&UNK_10d973500);
  func_0x000107c61428(param_1 + 0x1c0,auStack_a38,0,0);
  uVar8 = *(undefined1 *)(param_1 + 0x1c0);
  func_0x000107c61428(unaff_x20 + 0x1c0,auStack_a50,1,0);
  *(undefined1 *)(unaff_x20 + 0x1c0) = uVar8;
  func_0x000107c61428(param_1 + 0x1c1,auStack_a68,0,0);
  uVar8 = *(undefined1 *)(param_1 + 0x1c1);
  func_0x000107c61428(unaff_x20 + 0x1c1,auStack_a80,1,0);
  *(undefined1 *)(unaff_x20 + 0x1c1) = uVar8;
  func_0x000107c61428(param_1 + 0x1c8,auStack_a98,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x1c8);
  uVar15 = *(undefined8 *)(param_1 + 0x1d0);
  uVar14 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x000107c61428(unaff_x20 + 0x1c8,auStack_ab0,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x1c8);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x1d8);
  *(undefined8 *)(unaff_x20 + 0x1c8) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uVar14;
  FUN_100cb70b4(uVar10,uVar15,uVar14);
  func_0x000100cb70d0(uVar12,uVar13,uVar19);
  func_0x000107c61428(param_1 + 0x1e0,auStack_ac8,0,0);
  uVar8 = *(undefined1 *)(param_1 + 0x1e0);
  func_0x000107c61428(unaff_x20 + 0x1e0,auStack_ae0,1,0);
  *(undefined1 *)(unaff_x20 + 0x1e0) = uVar8;
  func_0x000107c61428((undefined8 *)(param_1 + 0x1e8),auStack_af8,0,0);
  uStack_398 = *(undefined8 *)(param_1 + 0x230);
  uStack_3a0 = *(undefined8 *)(param_1 + 0x228);
  uStack_388 = *(undefined8 *)(param_1 + 0x240);
  uStack_390 = *(undefined8 *)(param_1 + 0x238);
  uStack_380 = *(undefined8 *)(param_1 + 0x248);
  uStack_3d8 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_3e0 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_3c8 = *(undefined8 *)(param_1 + 0x200);
  uStack_3d0 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_3b8 = *(undefined8 *)(param_1 + 0x210);
  uStack_3c0 = *(undefined8 *)(param_1 + 0x208);
  uStack_3a8 = *(undefined8 *)(param_1 + 0x220);
  uStack_3b0 = *(undefined8 *)(param_1 + 0x218);
  func_0x000107c61428(puVar1,auStack_b10,1,0);
  uStack_328 = *(undefined8 *)(unaff_x20 + 0x230);
  uStack_330 = *(undefined8 *)(unaff_x20 + 0x228);
  uStack_318 = *(undefined8 *)(unaff_x20 + 0x240);
  uStack_320 = *(undefined8 *)(unaff_x20 + 0x238);
  uStack_310 = *(undefined8 *)(unaff_x20 + 0x248);
  uStack_368 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uStack_370 = *puVar1;
  uStack_358 = *(undefined8 *)(unaff_x20 + 0x200);
  uStack_360 = *(undefined8 *)(unaff_x20 + 0x1f8);
  uStack_348 = *(undefined8 *)(unaff_x20 + 0x210);
  uStack_350 = *(undefined8 *)(unaff_x20 + 0x208);
  uStack_338 = *(undefined8 *)(unaff_x20 + 0x220);
  uStack_340 = *(undefined8 *)(unaff_x20 + 0x218);
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_3d8;
  *puVar1 = uStack_3e0;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_3c8;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_3d0;
  *(undefined8 *)(unaff_x20 + 0x248) = uStack_380;
  *(undefined8 *)(unaff_x20 + 0x230) = uStack_398;
  *(undefined8 *)(unaff_x20 + 0x228) = uStack_3a0;
  *(undefined8 *)(unaff_x20 + 0x240) = uStack_388;
  *(undefined8 *)(unaff_x20 + 0x238) = uStack_390;
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_3b8;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_3c0;
  *(undefined8 *)(unaff_x20 + 0x220) = uStack_3a8;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_3b0;
  FUN_101649fa8(&uStack_3e0,&uStack_a20,0x112dbc218,&UNK_10d973510);
  FUN_10164af34(&uStack_370,0x112dbc218,&UNK_10d973510);
  func_0x000107c61428(param_1 + 0x250,auStack_b28,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x250);
  uVar10 = *(undefined8 *)(param_1 + 600);
  func_0x000107c61428(unaff_x20 + 0x250,auStack_b40,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 600);
  *(undefined8 *)(unaff_x20 + 0x250) = uVar15;
  *(undefined8 *)(unaff_x20 + 600) = uVar10;
  func_0x000107c61434(uVar10);
  func_0x000107c6142c(uVar12);
  func_0x000107c61428(param_1 + 0x260,auStack_b58,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x260);
  uVar13 = *(undefined8 *)(param_1 + 0x268);
  uVar14 = *(undefined8 *)(param_1 + 0x270);
  uVar19 = *(undefined8 *)(param_1 + 0x278);
  uVar18 = *(undefined8 *)(param_1 + 0x280);
  func_0x000107c61428(unaff_x20 + 0x260,auStack_b70,1,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x260);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x268);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x270);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x278);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x280);
  *(undefined8 *)(unaff_x20 + 0x260) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x268) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x270) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x278) = uVar19;
  *(undefined8 *)(unaff_x20 + 0x280) = uVar18;
  func_0x000101541428(uVar15,uVar13,uVar14,uVar19,uVar18);
  FUN_101553bdc(uVar9,uVar11,uVar17,uVar12,uVar10);
  func_0x000107c61428(param_1 + 0x288,auStack_b88,0,0);
  uVar7 = *(undefined4 *)(param_1 + 0x288);
  func_0x000107c61428(unaff_x20 + 0x288,auStack_ba0,1,0);
  *(undefined4 *)(unaff_x20 + 0x288) = uVar7;
  func_0x000107c61428(param_1 + 0x290,auStack_bb8,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x290);
  uVar12 = *(undefined8 *)(param_1 + 0x298);
  uVar15 = *(undefined8 *)(param_1 + 0x2a0);
  func_0x000107c61428(unaff_x20 + 0x290,auStack_bd0,1,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x290);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x298);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x2a0);
  *(undefined8 *)(unaff_x20 + 0x290) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x298) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uVar15;
  FUN_1015dc5b4(uVar10,uVar12,uVar15);
  func_0x0001015dc5d0(uVar13,uVar14,uVar19);
  func_0x000107c61428((undefined8 *)(param_1 + 0x2a8),auStack_be8,0,0);
  uStack_2d8 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_2e0 = *(undefined8 *)(param_1 + 0x2c8);
  uStack_2c8 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_2d0 = *(undefined8 *)(param_1 + 0x2d8);
  uStack_2c0 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_2f8 = *(undefined8 *)(param_1 + 0x2b0);
  uStack_300 = *(undefined8 *)(param_1 + 0x2a8);
  uStack_2e8 = *(undefined8 *)(param_1 + 0x2c0);
  uStack_2f0 = *(undefined8 *)(param_1 + 0x2b8);
  func_0x000107c61428(puVar2,auStack_c00,1,0);
  uStack_288 = *(undefined8 *)(unaff_x20 + 0x2d0);
  uStack_290 = *(undefined8 *)(unaff_x20 + 0x2c8);
  uStack_278 = *(undefined8 *)(unaff_x20 + 0x2e0);
  uStack_280 = *(undefined8 *)(unaff_x20 + 0x2d8);
  uStack_270 = *(undefined8 *)(unaff_x20 + 0x2e8);
  uStack_2a8 = *(undefined8 *)(unaff_x20 + 0x2b0);
  uStack_2b0 = *puVar2;
  uStack_298 = *(undefined8 *)(unaff_x20 + 0x2c0);
  uStack_2a0 = *(undefined8 *)(unaff_x20 + 0x2b8);
  *(undefined8 *)(unaff_x20 + 0x2d0) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uStack_2e0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uStack_2c8;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uStack_2d0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = uStack_2c0;
  *(undefined8 *)(unaff_x20 + 0x2b0) = uStack_2f8;
  *puVar2 = uStack_300;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uStack_2e8;
  *(undefined8 *)(unaff_x20 + 0x2b8) = uStack_2f0;
  FUN_101649fa8(&uStack_300,&uStack_a20,0x112dbc228,&UNK_10d973520);
  FUN_10164af34(&uStack_2b0,0x112dbc228,&UNK_10d973520);
  func_0x000107c61428(param_1 + 0x2f0,auStack_c18,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x2f0);
  uVar10 = *(undefined8 *)(param_1 + 0x2f8);
  func_0x000107c61428(unaff_x20 + 0x2f0,auStack_c30,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x2f8);
  *(undefined8 *)(unaff_x20 + 0x2f0) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uVar10;
  func_0x000107c61434(uVar10);
  func_0x000107c6142c(uVar12);
  func_0x000107c61428(param_1 + 0x300,auStack_c48,0,0);
  uVar8 = *(undefined1 *)(param_1 + 0x300);
  func_0x000107c61428(unaff_x20 + 0x300,auStack_c60,1,0);
  *(undefined1 *)(unaff_x20 + 0x300) = uVar8;
  func_0x000107c61428(param_1 + 0x301,auStack_c78,0,0);
  uVar8 = *(undefined1 *)(param_1 + 0x301);
  func_0x000107c61428(unaff_x20 + 0x301,auStack_c90,1,0);
  *(undefined1 *)(unaff_x20 + 0x301) = uVar8;
  func_0x000107c61428(param_1 + 0x308,auStack_ca8,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x308);
  uVar8 = *(undefined1 *)(param_1 + 0x310);
  func_0x000107c61428(unaff_x20 + 0x308,auStack_cc0,1,0);
  *(undefined8 *)(unaff_x20 + 0x308) = uVar10;
  *(undefined1 *)(unaff_x20 + 0x310) = uVar8;
  uVar13 = *(undefined8 *)(param_1 + 0x330);
  uVar15 = *(undefined8 *)(param_1 + 0x328);
  uStack_238 = *(undefined8 *)(param_1 + 0x340);
  uStack_240 = *(undefined8 *)(param_1 + 0x338);
  uVar9 = *(undefined8 *)(param_1 + 0x340);
  uVar18 = *(undefined8 *)(param_1 + 0x338);
  uStack_228 = *(undefined8 *)(param_1 + 0x350);
  uStack_230 = *(undefined8 *)(param_1 + 0x348);
  uVar19 = *(undefined8 *)(param_1 + 0x350);
  uVar14 = *(undefined8 *)(param_1 + 0x348);
  uStack_218 = *(undefined8 *)(param_1 + 0x360);
  uStack_220 = *(undefined8 *)(param_1 + 0x358);
  uVar11 = *(undefined8 *)(param_1 + 0x358);
  uStack_208 = *(undefined8 *)(param_1 + 0x370);
  uStack_210 = *(undefined8 *)(param_1 + 0x368);
  uStack_258 = *(undefined8 *)(param_1 + 800);
  uStack_260 = *(undefined8 *)(param_1 + 0x318);
  uStack_248 = *(undefined8 *)(param_1 + 0x330);
  uStack_250 = *(undefined8 *)(param_1 + 0x328);
  uVar20 = *(undefined8 *)(param_1 + 800);
  uVar17 = *(undefined8 *)(param_1 + 0x318);
  uStack_1f8 = *(undefined8 *)(unaff_x20 + 800);
  uStack_200 = *puVar3;
  uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x330);
  uStack_1f0 = *(undefined8 *)(unaff_x20 + 0x328);
  uStack_1b8 = *(undefined8 *)(unaff_x20 + 0x360);
  uStack_1c0 = *(undefined8 *)(unaff_x20 + 0x358);
  uStack_1a8 = *(undefined8 *)(unaff_x20 + 0x370);
  uStack_1b0 = *(undefined8 *)(unaff_x20 + 0x368);
  uStack_1d8 = *(undefined8 *)(unaff_x20 + 0x340);
  uStack_1e0 = *(undefined8 *)(unaff_x20 + 0x338);
  uStack_1c8 = *(undefined8 *)(unaff_x20 + 0x350);
  uStack_1d0 = *(undefined8 *)(unaff_x20 + 0x348);
  uVar12 = *(undefined8 *)(param_1 + 0x370);
  uVar10 = *(undefined8 *)(param_1 + 0x368);
  *(undefined8 *)(unaff_x20 + 0x360) = *(undefined8 *)(param_1 + 0x360);
  *(undefined8 *)(unaff_x20 + 0x358) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x370) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x368) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x340) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x338) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x350) = uVar19;
  *(undefined8 *)(unaff_x20 + 0x348) = uVar14;
  *(undefined8 *)(unaff_x20 + 800) = uVar20;
  *puVar3 = uVar17;
  *(undefined8 *)(unaff_x20 + 0x330) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x328) = uVar15;
  FUN_101649fa8(&uStack_260,&uStack_a20,0x112db3e40,&UNK_10d973530);
  FUN_10164af34(&uStack_200,0x112db3e40,&UNK_10d973530);
  func_0x000107c61428((undefined8 *)(param_1 + 0x378),auStack_cd8,0,0);
  uStack_198 = *(undefined8 *)(param_1 + 0x380);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x378);
  uStack_188 = *(undefined8 *)(param_1 + 0x390);
  uStack_190 = *(undefined8 *)(param_1 + 0x388);
  uStack_178 = *(undefined8 *)(param_1 + 0x3a0);
  uStack_180 = *(undefined8 *)(param_1 + 0x398);
  uStack_168 = *(undefined8 *)(param_1 + 0x3b0);
  uStack_170 = *(undefined8 *)(param_1 + 0x3a8);
  func_0x000107c61428(puVar4,auStack_cf0,1,0);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x380);
  uStack_160 = *puVar4;
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x390);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x388);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x3a0);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x398);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x3b0);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x3a8);
  *(undefined8 *)(unaff_x20 + 0x380) = uStack_198;
  *puVar4 = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x390) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x388) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x3a0) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x398) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x3b0) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0x3a8) = uStack_170;
  FUN_101649fa8(&uStack_1a0,&uStack_a20,0x112dbc238,&UNK_10d973538);
  FUN_10164af34(&uStack_160,0x112dbc238,&UNK_10d973538);
  func_0x000107c61428(param_1 + 0x3b8,auStack_d08,0,0);
  uVar8 = *(undefined1 *)(param_1 + 0x3b8);
  func_0x000107c61428(unaff_x20 + 0x3b8,auStack_d20,1,0);
  *(undefined1 *)(unaff_x20 + 0x3b8) = uVar8;
  func_0x000107c61428(param_1 + 0x3b9,auStack_d38,0,0);
  uVar8 = *(undefined1 *)(param_1 + 0x3b9);
  func_0x000107c61428(unaff_x20 + 0x3b9,auStack_d50,1,0);
  *(undefined1 *)(unaff_x20 + 0x3b9) = uVar8;
  func_0x000107c61428(param_1 + 0x3ba,auStack_d68,0,0);
  uVar8 = *(undefined1 *)(param_1 + 0x3ba);
  func_0x000107c61428(unaff_x20 + 0x3ba,auStack_d80,1,0);
  *(undefined1 *)(unaff_x20 + 0x3ba) = uVar8;
  func_0x000107c61428(param_1 + 0x3c0,auStack_d98,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x3c0);
  uVar13 = *(undefined8 *)(param_1 + 0x3c8);
  uVar14 = *(undefined8 *)(param_1 + 0x3d0);
  uVar19 = *(undefined8 *)(param_1 + 0x3d8);
  uVar18 = *(undefined8 *)(param_1 + 0x3e0);
  func_0x000107c61428(unaff_x20 + 0x3c0,auStack_db0,1,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x3c0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x3c8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x3d0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x3d8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x3e0);
  *(undefined8 *)(unaff_x20 + 0x3c0) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x3c8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x3d0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x3d8) = uVar19;
  *(undefined8 *)(unaff_x20 + 0x3e0) = uVar18;
  FUN_101649f10(uVar15,uVar13,uVar14,uVar19,uVar18);
  func_0x000101649f5c(uVar9,uVar11,uVar17,uVar12,uVar10);
  func_0x000107c61428(param_1 + 1000,auStack_dc8,0,0);
  uVar15 = *(undefined8 *)(param_1 + 1000);
  uVar10 = *(undefined8 *)(param_1 + 0x3f0);
  func_0x000107c61428(unaff_x20 + 1000,auStack_de0,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x3f0);
  *(undefined8 *)(unaff_x20 + 1000) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x3f0) = uVar10;
  func_0x000107c61434(uVar10);
  func_0x000107c6142c(uVar12);
  func_0x000107c61428(param_1 + 0x3f8,auStack_df8,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x3f8);
  uVar10 = *(undefined8 *)(param_1 + 0x400);
  func_0x000107c61428(unaff_x20 + 0x3f8,auStack_e10,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x400);
  *(undefined8 *)(unaff_x20 + 0x3f8) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x400) = uVar10;
  func_0x000107c61434(uVar10);
  func_0x000107c6142c(uVar12);
  func_0x000107c61428(param_1 + 0x408,auStack_e28,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x408);
  uVar12 = *(undefined8 *)(param_1 + 0x410);
  uVar15 = *(undefined8 *)(param_1 + 0x418);
  func_0x000107c61428(unaff_x20 + 0x408,auStack_e40,1,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x408);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x410);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x418);
  *(undefined8 *)(unaff_x20 + 0x408) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x410) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x418) = uVar15;
  FUN_100cb70b4(uVar10,uVar12,uVar15);
  func_0x000100cb70d0(uVar13,uVar14,uVar19);
  func_0x000107c61428(param_1 + 0x420,auStack_e58,0,0);
  uVar8 = *(undefined1 *)(param_1 + 0x420);
  func_0x000107c61428(unaff_x20 + 0x420,auStack_e70,1,0);
  *(undefined1 *)(unaff_x20 + 0x420) = uVar8;
  func_0x000107c61428((undefined8 *)(param_1 + 0x428),auStack_e88,0,0);
  uStack_d8 = *(undefined8 *)(param_1 + 0x470);
  uStack_e0 = *(undefined8 *)(param_1 + 0x468);
  uStack_c8 = *(undefined8 *)(param_1 + 0x480);
  uStack_d0 = *(undefined8 *)(param_1 + 0x478);
  uStack_b8 = *(undefined8 *)(param_1 + 0x490);
  uStack_c0 = *(undefined8 *)(param_1 + 0x488);
  uStack_118 = *(undefined8 *)(param_1 + 0x430);
  uStack_120 = *(undefined8 *)(param_1 + 0x428);
  uStack_108 = *(undefined8 *)(param_1 + 0x440);
  uStack_110 = *(undefined8 *)(param_1 + 0x438);
  uStack_f8 = *(undefined8 *)(param_1 + 0x450);
  uStack_100 = *(undefined8 *)(param_1 + 0x448);
  uStack_e8 = *(undefined8 *)(param_1 + 0x460);
  uStack_f0 = *(undefined8 *)(param_1 + 0x458);
  func_0x000107c61428(puVar5,auStack_ea0,1,0);
  uStack_9d8 = *(undefined8 *)(unaff_x20 + 0x470);
  uStack_9e0 = *(undefined8 *)(unaff_x20 + 0x468);
  uStack_9c8 = *(undefined8 *)(unaff_x20 + 0x480);
  uStack_9d0 = *(undefined8 *)(unaff_x20 + 0x478);
  uStack_9b8 = *(undefined8 *)(unaff_x20 + 0x490);
  uStack_9c0 = *(undefined8 *)(unaff_x20 + 0x488);
  uStack_a18 = *(undefined8 *)(unaff_x20 + 0x430);
  uStack_a20 = *puVar5;
  uStack_a08 = *(undefined8 *)(unaff_x20 + 0x440);
  uStack_a10 = *(undefined8 *)(unaff_x20 + 0x438);
  uStack_9f8 = *(undefined8 *)(unaff_x20 + 0x450);
  uStack_a00 = *(undefined8 *)(unaff_x20 + 0x448);
  uStack_9e8 = *(undefined8 *)(unaff_x20 + 0x460);
  uStack_9f0 = *(undefined8 *)(unaff_x20 + 0x458);
  *(undefined8 *)(unaff_x20 + 0x430) = uStack_118;
  *puVar5 = uStack_120;
  *(undefined8 *)(unaff_x20 + 0x440) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x438) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0x480) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x478) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x490) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0x488) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x460) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x458) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x470) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x468) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x450) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x448) = uStack_100;
  FUN_101649fa8(&uStack_120,&uStack_f10,0x112dbc248,&UNK_10d973548);
  FUN_10164af34(&uStack_a20,0x112dbc248,&UNK_10d973548);
  func_0x000107c61428(param_1 + 0x498,auStack_f28,0,0);
  uVar8 = *(undefined1 *)(param_1 + 0x498);
  func_0x000107c61428(unaff_x20 + 0x498,auStack_f40,1,0);
  *(undefined1 *)(unaff_x20 + 0x498) = uVar8;
  func_0x000107c61428(param_1 + 0x4a0,auStack_f58,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x4a0);
  uVar13 = *(undefined8 *)(param_1 + 0x4a8);
  uVar14 = *(undefined8 *)(param_1 + 0x4b0);
  uVar19 = *(undefined8 *)(param_1 + 0x4b8);
  uVar18 = *(undefined8 *)(param_1 + 0x4c0);
  func_0x000107c61428(unaff_x20 + 0x4a0,auStack_f70,1,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x4a0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x4a8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x4b0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x4b8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x4c0);
  *(undefined8 *)(unaff_x20 + 0x4a0) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x4a8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x4b0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x4b8) = uVar19;
  *(undefined8 *)(unaff_x20 + 0x4c0) = uVar18;
  func_0x000101541428(uVar15,uVar13,uVar14,uVar19,uVar18);
  FUN_101553bdc(uVar9,uVar11,uVar17,uVar12,uVar10);
  func_0x000107c61428(param_1 + 0x4c8,auStack_f88,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x4c8);
  uVar13 = *(undefined8 *)(param_1 + 0x4d0);
  uVar14 = *(undefined8 *)(param_1 + 0x4d8);
  uVar19 = *(undefined8 *)(param_1 + 0x4e0);
  uVar18 = *(undefined8 *)(param_1 + 0x4e8);
  func_0x000107c61428(unaff_x20 + 0x4c8,auStack_fa0,1,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x4c8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x4d0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x4d8);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x4e0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x4e8);
  *(undefined8 *)(unaff_x20 + 0x4c8) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x4d0) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x4d8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x4e0) = uVar19;
  *(undefined8 *)(unaff_x20 + 0x4e8) = uVar18;
  func_0x000101541428(uVar15,uVar13,uVar14,uVar19,uVar18);
  FUN_101553bdc(uVar9,uVar11,uVar17,uVar12,uVar10);
  func_0x000107c61428(param_1 + 0x4f0,auStack_fb8,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x4f0);
  func_0x000107c61428(unaff_x20 + 0x4f0,auStack_fd0,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x4f0);
  *(undefined8 *)(unaff_x20 + 0x4f0) = uVar10;
  func_0x000107c61434(uVar10);
  func_0x000107c6142c(uVar12);
  func_0x000107c61428((undefined8 *)(param_1 + 0x4f8),auStack_fe8,0,0);
  uStack_88 = *(undefined8 *)(param_1 + 0x520);
  uStack_90 = *(undefined8 *)(param_1 + 0x518);
  uStack_78 = *(undefined8 *)(param_1 + 0x530);
  uStack_80 = *(undefined8 *)(param_1 + 0x528);
  uStack_70 = *(undefined8 *)(param_1 + 0x538);
  uStack_a8 = *(undefined8 *)(param_1 + 0x500);
  uStack_b0 = *(undefined8 *)(param_1 + 0x4f8);
  uStack_98 = *(undefined8 *)(param_1 + 0x510);
  uStack_a0 = *(undefined8 *)(param_1 + 0x508);
  FUN_101649fa8(&uStack_b0,&uStack_f10,0x112dbc258,&UNK_10d973558);
  func_0x000107c61574(param_1);
  func_0x000107c61428(puVar6,auStack_1000,1,0);
  uStack_ee8 = *(undefined8 *)(unaff_x20 + 0x520);
  uStack_ef0 = *(undefined8 *)(unaff_x20 + 0x518);
  uStack_ed8 = *(undefined8 *)(unaff_x20 + 0x530);
  uStack_ee0 = *(undefined8 *)(unaff_x20 + 0x528);
  uStack_ed0 = *(undefined8 *)(unaff_x20 + 0x538);
  uStack_f08 = *(undefined8 *)(unaff_x20 + 0x500);
  uStack_f10 = *puVar6;
  uStack_ef8 = *(undefined8 *)(unaff_x20 + 0x510);
  uStack_f00 = *(undefined8 *)(unaff_x20 + 0x508);
  *(undefined8 *)(unaff_x20 + 0x520) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x518) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x530) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x528) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x538) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x500) = uStack_a8;
  *puVar6 = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x510) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x508) = uStack_a0;
  FUN_10164af34(&uStack_f10,0x112dbc258,&UNK_10d973558);
  return;
}



/* Entry: 101644064; end: 1016440a7;  */

/* WARNING: Possible PIC construction at 0x000101644090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101644094) */

void FUN_101644064(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  if (0xe < param_3 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c6157c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1016440a8; end: 1016440f3;  */

int FUN_1016440a8(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016440f4; end: 10164434b;  */

void FUN_1016440f4(void)

{
  long unaff_x20;
  
  func_0x000101649f5c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100cb711c(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  FUN_10164af34(unaff_x20 + 0x78,0x112dbc208,&UNK_10d973500);
  func_0x000100cb70d0(*(undefined8 *)(unaff_x20 + 0x1c8),*(undefined8 *)(unaff_x20 + 0x1d0),
                      *(undefined8 *)(unaff_x20 + 0x1d8));
  FUN_10164a8e4(*(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230),
                *(undefined8 *)(unaff_x20 + 0x238),*(undefined8 *)(unaff_x20 + 0x240),
                *(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 600));
  FUN_101553bdc(*(undefined8 *)(unaff_x20 + 0x260),*(undefined8 *)(unaff_x20 + 0x268),
                *(undefined8 *)(unaff_x20 + 0x270),*(undefined8 *)(unaff_x20 + 0x278),
                *(undefined8 *)(unaff_x20 + 0x280));
  func_0x0001015dc5d0(*(undefined8 *)(unaff_x20 + 0x290),*(undefined8 *)(unaff_x20 + 0x298),
                      *(undefined8 *)(unaff_x20 + 0x2a0));
  FUN_10164a960(*(undefined8 *)(unaff_x20 + 0x2a8),*(undefined8 *)(unaff_x20 + 0x2b0),
                *(undefined8 *)(unaff_x20 + 0x2b8),*(undefined8 *)(unaff_x20 + 0x2c0),
                *(undefined8 *)(unaff_x20 + 0x2c8),*(undefined8 *)(unaff_x20 + 0x2d0),
                *(undefined8 *)(unaff_x20 + 0x2d8),*(undefined8 *)(unaff_x20 + 0x2e0),
                *(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x2f8));
  FUN_101649dd4(*(undefined8 *)(unaff_x20 + 0x318),*(undefined8 *)(unaff_x20 + 800),
                *(undefined8 *)(unaff_x20 + 0x328),*(undefined8 *)(unaff_x20 + 0x330),
                *(undefined8 *)(unaff_x20 + 0x338),*(undefined8 *)(unaff_x20 + 0x340),
                *(undefined8 *)(unaff_x20 + 0x348),*(undefined8 *)(unaff_x20 + 0x350),
                *(undefined8 *)(unaff_x20 + 0x358),*(undefined8 *)(unaff_x20 + 0x360),
                *(undefined8 *)(unaff_x20 + 0x368),*(undefined8 *)(unaff_x20 + 0x370));
  FUN_10164aa1c(*(undefined8 *)(unaff_x20 + 0x378),*(undefined8 *)(unaff_x20 + 0x380),
                *(undefined8 *)(unaff_x20 + 0x388),*(undefined8 *)(unaff_x20 + 0x390),
                *(undefined8 *)(unaff_x20 + 0x398),*(undefined8 *)(unaff_x20 + 0x3a0),
                *(undefined8 *)(unaff_x20 + 0x3a8),*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000101649f5c(*(undefined8 *)(unaff_x20 + 0x3c0),*(undefined8 *)(unaff_x20 + 0x3c8),
                      *(undefined8 *)(unaff_x20 + 0x3d0),*(undefined8 *)(unaff_x20 + 0x3d8),
                      *(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000100cb70d0(*(undefined8 *)(unaff_x20 + 0x408),*(undefined8 *)(unaff_x20 + 0x410),
                      *(undefined8 *)(unaff_x20 + 0x418));
  FUN_10164aa84(*(undefined8 *)(unaff_x20 + 0x428),*(undefined8 *)(unaff_x20 + 0x430),
                *(undefined8 *)(unaff_x20 + 0x438),*(undefined8 *)(unaff_x20 + 0x440),
                *(undefined8 *)(unaff_x20 + 0x448),*(undefined8 *)(unaff_x20 + 0x450),
                *(undefined8 *)(unaff_x20 + 0x458),*(undefined8 *)(unaff_x20 + 0x460),
                *(undefined8 *)(unaff_x20 + 0x468),*(undefined8 *)(unaff_x20 + 0x470),
                *(undefined8 *)(unaff_x20 + 0x478),*(undefined8 *)(unaff_x20 + 0x480),
                *(undefined8 *)(unaff_x20 + 0x488),*(undefined8 *)(unaff_x20 + 0x490));
  FUN_101553bdc(*(undefined8 *)(unaff_x20 + 0x4a0),*(undefined8 *)(unaff_x20 + 0x4a8),
                *(undefined8 *)(unaff_x20 + 0x4b0),*(undefined8 *)(unaff_x20 + 0x4b8),
                *(undefined8 *)(unaff_x20 + 0x4c0));
  FUN_101553bdc(*(undefined8 *)(unaff_x20 + 0x4c8),*(undefined8 *)(unaff_x20 + 0x4d0),
                *(undefined8 *)(unaff_x20 + 0x4d8),*(undefined8 *)(unaff_x20 + 0x4e0),
                *(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x4f0));
  FUN_10164ab38(*(undefined8 *)(unaff_x20 + 0x4f8),*(undefined8 *)(unaff_x20 + 0x500),
                *(undefined8 *)(unaff_x20 + 0x508),*(undefined8 *)(unaff_x20 + 0x510),
                *(undefined8 *)(unaff_x20 + 0x518),*(undefined8 *)(unaff_x20 + 0x520),
                *(undefined8 *)(unaff_x20 + 0x528),*(undefined8 *)(unaff_x20 + 0x530),
                *(undefined8 *)(unaff_x20 + 0x538));
  return;
}



/* Entry: 10164434c; end: 1016443db;  */

void FUN_10164434c(void)

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
    FUN_1016415a4(0);
    func_0x000107c613fc();
    FUN_1016430ac(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_1016443dc();
  return;
}



/* Entry: 1016443dc; end: 101644953;  */

/* WARNING: Removing unreachable block (ram,0x0001016444d8) */
/* WARNING: Removing unreachable block (ram,0x000101644804) */
/* WARNING: Removing unreachable block (ram,0x000101644744) */
/* WARNING: Removing unreachable block (ram,0x0001016446e8) */
/* WARNING: Removing unreachable block (ram,0x0001016447a8) */
/* WARNING: Removing unreachable block (ram,0x0001016448d8) */
/* WARNING: Removing unreachable block (ram,0x0001016445fc) */
/* WARNING: Removing unreachable block (ram,0x0001016448f4) */
/* WARNING: Removing unreachable block (ram,0x000101644950) */
/* WARNING: Removing unreachable block (ram,0x000101644934) */
/* WARNING: Removing unreachable block (ram,0x0001016444f4) */
/* WARNING: Removing unreachable block (ram,0x0001016448a0) */
/* WARNING: Removing unreachable block (ram,0x0001016447c4) */
/* WARNING: Removing unreachable block (ram,0x000101644704) */
/* WARNING: Removing unreachable block (ram,0x000101644510) */
/* WARNING: Removing unreachable block (ram,0x0001016448bc) */
/* WARNING: Removing unreachable block (ram,0x00010164452c) */
/* WARNING: Removing unreachable block (ram,0x00010164483c) */
/* WARNING: Removing unreachable block (ram,0x0001016446cc) */
/* WARNING: Removing unreachable block (ram,0x000101644820) */

void FUN_1016443dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
        FUN_101644954(param_2,param_1,param_3,param_4);
        break;
      case 2:
        func_0x000107c61428(param_1 + 0x38,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x38;
        goto code_r0x000101644464;
      case 3:
        func_0x000107c61428(param_1 + 0x39,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x39;
        goto code_r0x000101644464;
      case 5:
        func_0x000107c61428(param_1 + 0x3a,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x3a;
        goto code_r0x000101644464;
      case 6:
        FUN_1016449e8(param_1,param_2,param_3,param_4);
        break;
      case 7:
        FUN_101644bb8(param_2,param_1,param_3,param_4);
        break;
      case 8:
        FUN_101644c4c(param_2,param_1,param_3,param_4);
        break;
      case 9:
        func_0x000107c61428(param_1 + 0x1c0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x1c0;
        goto code_r0x000101644464;
      case 10:
        func_0x000107c61428(param_1 + 0x1c1,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x1c1;
        goto code_r0x000101644464;
      case 0xb:
        FUN_101644ce0(param_2,param_1,param_3,param_4);
        break;
      case 0xc:
        func_0x000107c61428(param_1 + 0x1e0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x1e0;
        goto code_r0x000101644464;
      case 0xd:
        FUN_101644d74(param_2,param_1,param_3,param_4);
        break;
      case 0xe:
        func_0x000107c61428(param_1 + 0x250,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x250;
        goto code_r0x000101644464;
      case 0xf:
        FUN_101644e08(param_2,param_1,param_3,param_4);
        break;
      case 0x10:
        func_0x000107c61428(param_1 + 0x288,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x288;
        goto code_r0x000101644464;
      case 0x11:
        FUN_101644e9c(param_2,param_1,param_3,param_4);
        break;
      case 0x12:
        FUN_101644f30(param_2,param_1,param_3,param_4);
        break;
      case 0x13:
        func_0x000107c61428(param_1 + 0x2f0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x2f0;
        goto code_r0x000101644464;
      case 0x14:
        func_0x000107c61428(param_1 + 0x300,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x300;
        goto code_r0x000101644464;
      case 0x15:
        func_0x000107c61428(param_1 + 0x301,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x301;
        goto code_r0x000101644464;
      case 0x16:
        FUN_101644fc4(param_2,param_1,param_3,param_4);
        break;
      case 0x17:
        FUN_101645058(param_1,param_2,param_3,param_4);
        break;
      case 0x18:
        FUN_101645394(param_2,param_1,param_3,param_4);
        break;
      case 0x19:
        func_0x000107c61428(param_1 + 0x3b8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x3b8;
        goto code_r0x000101644464;
      case 0x1a:
        FUN_101645428(param_1,param_2,param_3,param_4);
        break;
      case 0x1b:
        func_0x000107c61428(param_1 + 0x3b9,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x3b9;
        goto code_r0x000101644464;
      case 0x1c:
        func_0x000107c61428(param_1 + 0x3ba,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x3ba;
        goto code_r0x000101644464;
      case 0x1d:
        FUN_101645678(param_2,param_1,param_3,param_4);
        break;
      case 0x1e:
        func_0x000107c61428(param_1 + 1000,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 1000;
        goto code_r0x000101644464;
      case 0x1f:
        func_0x000107c61428(param_1 + 0x3f8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x3f8;
        goto code_r0x000101644464;
      case 0x20:
        FUN_10164570c(param_2,param_1,param_3,param_4);
        break;
      case 0x21:
        func_0x000107c61428(param_1 + 0x420,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x420;
        goto code_r0x000101644464;
      case 0x22:
        FUN_1016457a0(param_2,param_1,param_3,param_4);
        break;
      case 0x23:
        func_0x000107c61428(param_1 + 0x498,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x498;
code_r0x000101644464:
        (*pcVar3)(lVar2,param_3,param_4);
        func_0x000107c614a8(auStack_68);
        break;
      case 0x24:
        FUN_101645834(param_2,param_1,param_3,param_4);
        break;
      case 0x25:
        FUN_1016458c8(param_2,param_1,param_3,param_4);
        break;
      case 0x26:
        FUN_10164595c(param_2,param_1,param_3,param_4);
        break;
      case 0x27:
        FUN_1016459f0(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101644954; end: 1016449e7;  */

void FUN_101644954(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101618440();
  (*pcVar2)(param_2 + 0x10,&UNK_1103eee58,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1016449e8; end: 101644bb7;  */

/* WARNING: Removing unreachable block (ram,0x000101644b1c) */

void FUN_1016449e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x21;
  ulong uVar12;
  code *pcVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0xf000000000000000;
  uStack_70 = 0;
  uVar12 = *(ulong *)(param_1 + 0x50);
  lVar6 = param_1;
  if (uVar12 >> 0x3c < 0xf) {
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    uVar10 = *(undefined8 *)(param_1 + 0x60);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010006c00c(uVar1,uVar12);
    func_0x00010006c00c(uVar7,uVar10);
    lVar6 = 0;
    func_0x000100cb711c(0,0,0xf000000000000000,0,0);
    uStack_88 = uVar8;
    uStack_80 = uVar1;
    uStack_78 = uVar12;
    uStack_70 = uVar7;
    uStack_68 = uVar10;
  }
  pcVar13 = *(code **)(param_4 + 0x198);
  func_0x00010164aef4();
  (*pcVar13)(&uStack_88,&UNK_1103eea70,lVar6,param_3,param_4);
  uVar5 = uStack_68;
  uVar4 = uStack_70;
  uVar3 = uStack_78;
  uVar2 = uStack_80;
  uVar1 = uStack_88;
  uVar7 = uStack_88;
  uVar8 = uStack_80;
  uVar9 = uStack_78;
  uVar10 = uStack_70;
  uVar11 = uStack_68;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (uVar12 >> 0x3c < 0xf) {
      pcVar13 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_80,uStack_78);
      func_0x00010006c00c(uVar4,uVar5);
      (*pcVar13)(param_3,param_4);
    }
    else {
      func_0x00010006c00c(uStack_80,uStack_78);
      func_0x00010006c00c(uVar4,uVar5);
    }
    func_0x000100cb711c(uStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    uVar9 = *(ulong *)(param_1 + 0x50);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    uVar11 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    *(ulong *)(param_1 + 0x50) = uVar3;
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    *(undefined8 *)(param_1 + 0x60) = uVar5;
  }
  func_0x000100cb711c(uVar7,uVar8,uVar9,uVar10,uVar11);
  return;
}



/* Entry: 101644bb8; end: 101644c4b;  */

void FUN_101644bb8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x68;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x00010164ac74();
  (*pcVar2)(param_2 + 0x68,&UNK_110676238,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101644c4c; end: 101644cdf;  */

void FUN_101644c4c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x78;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010164aeb4();
  (*pcVar2)(param_2 + 0x78,&UNK_1103ef670,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101644ce0; end: 101644d73;  */

void FUN_101644ce0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1c8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x1c8,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101644d74; end: 101644e07;  */

void FUN_101644d74(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1e8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010164ae74();
  (*pcVar2)(param_2 + 0x1e8,&UNK_1103eda88,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101644e08; end: 101644e9b;  */

void FUN_101644e08(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x260;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1015cabb8();
  (*pcVar2)(param_2 + 0x260,&UNK_110679698,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101644e9c; end: 101644f2f;  */

void FUN_101644e9c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x290;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x290,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101644f30; end: 101644fc3;  */

void FUN_101644f30(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x2a8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010164ae34();
  (*pcVar2)(param_2 + 0x2a8,&UNK_1103ef438,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101644fc4; end: 101645057;  */

void FUN_101644fc4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x308;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x00010164ac74();
  (*pcVar2)(param_2 + 0x308,&UNK_110676238,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101645058; end: 101645393;  */

/* WARNING: Removing unreachable block (ram,0x000101645294) */

void FUN_101645058(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x21;
  undefined8 uVar12;
  code *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 uStack_218;
  undefined1 uStack_1f8;
  undefined1 auStack_1f0 [96];
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uVar19 = param_1[0x67];
  uVar18 = param_1[0x6e];
  uVar14 = uVar19 & uVar18 & 0x3000000000000000;
  puVar5 = param_1;
  if (uVar14 != 0x3000000000000000 && (uVar18 & 0x2000000000000000) == 0) {
    uVar7 = param_1[0x6d];
    uVar8 = param_1[0x6c];
    uVar9 = param_1[0x6b];
    uVar10 = param_1[0x6a];
    uVar15 = param_1[0x69];
    uVar20 = param_1[0x68];
    uVar11 = param_1[0x66];
    uVar16 = param_1[0x65];
    lVar17 = param_1[100];
    uVar12 = param_1[99];
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_130 = uVar12;
    lStack_128 = lVar17;
    uStack_120 = uVar16;
    uStack_118 = uVar11;
    uStack_110 = uVar19;
    uStack_108 = uVar20;
    uStack_100 = uVar15;
    uStack_f8 = uVar10;
    uStack_f0 = uVar9;
    uStack_e8 = uVar8;
    uStack_e0 = uVar7;
    uStack_d8 = uVar18;
    FUN_101649ea0(&uStack_130,auStack_1f0);
    puVar5 = &uStack_190;
    FUN_10164af34(puVar5,0x112dbc850,&UNK_10d973868);
    uStack_d0 = uVar12;
    lStack_c8 = lVar17;
    uStack_c0 = uVar16;
    uStack_b8 = uVar11;
    uStack_b0 = uVar19;
    uStack_a8 = uVar20;
    uStack_a0 = uVar15;
    uStack_98 = uVar10;
    uStack_90 = uVar9;
    uStack_88 = uVar8;
    uStack_80 = uVar7;
    uStack_78 = uVar18;
  }
  pcVar13 = *(code **)(param_4 + 0x198);
  func_0x00010164adf4();
  (*pcVar13)(&uStack_d0,&UNK_1103ee338,puVar5,param_3,param_4);
  uVar19 = uStack_78;
  uVar20 = uStack_80;
  uVar16 = uStack_88;
  uVar15 = uStack_90;
  uVar12 = uStack_98;
  uVar11 = uStack_a0;
  uVar10 = uStack_a8;
  uVar18 = uStack_b0;
  uVar9 = uStack_b8;
  uVar8 = uStack_c0;
  lVar17 = lStack_c8;
  uVar7 = uStack_d0;
  if (unaff_x21 == 0) {
    uStack_130 = uStack_d0;
    lStack_128 = lStack_c8;
    uStack_118 = uStack_b8;
    uStack_120 = uStack_c0;
    uStack_f0 = uStack_90;
    uStack_e8 = uStack_88;
    uStack_d8 = uStack_78;
    uStack_e0 = uStack_80;
    uStack_108 = uStack_a8;
    uStack_110 = uStack_b0;
    uStack_100 = uStack_a0;
    uStack_f8 = uStack_98;
    if (lStack_c8 != 0) {
      uStack_1f8 = (undefined1)uStack_80;
      uStack_218 = (undefined1)uStack_a0;
      if (uVar14 == 0x3000000000000000) {
        uStack_168 = uStack_a8;
        uStack_170 = uStack_b0;
        uStack_158 = uStack_98;
        uStack_160 = uStack_a0;
        uStack_148 = uStack_88;
        uStack_150 = uStack_90;
        uStack_138 = uStack_78;
        uStack_140 = uStack_80;
        lStack_188 = lStack_c8;
        uStack_190 = uStack_d0;
        uStack_178 = uStack_b8;
        uStack_180 = uStack_c0;
        func_0x000101649ed4(&uStack_190,auStack_1f0);
      }
      else {
        pcVar13 = *(code **)(param_4 + 8);
        uStack_168 = uStack_a8;
        uStack_170 = uStack_b0;
        uStack_158 = uStack_98;
        uStack_160 = uStack_a0;
        uStack_148 = uStack_88;
        uStack_150 = uStack_90;
        uStack_138 = uStack_78;
        uStack_140 = uStack_80;
        lStack_188 = lStack_c8;
        uStack_190 = uStack_d0;
        uStack_178 = uStack_b8;
        uStack_180 = uStack_c0;
        func_0x000101649ed4(&uStack_190,auStack_1f0);
        (*pcVar13)(param_3,param_4);
      }
      uVar21 = (undefined1)((ulong)uVar20 >> 8);
      uVar22 = (undefined1)((ulong)uVar20 >> 0x10);
      uVar23 = (undefined1)((ulong)uVar20 >> 0x18);
      uVar24 = (undefined1)((ulong)uVar20 >> 0x20);
      uVar25 = (undefined1)((ulong)uVar20 >> 0x28);
      uVar26 = (undefined1)((ulong)uVar20 >> 0x30);
      uVar27 = (undefined1)((ulong)uVar20 >> 0x38);
      auVar29[8] = uStack_1f8;
      auVar29._0_8_ = uVar16;
      auVar28[8] = uStack_1f8;
      auVar28._0_8_ = uVar16;
      auVar28[9] = uVar21;
      auVar28[10] = uVar22;
      auVar28[0xb] = uVar23;
      auVar28[0xc] = uVar24;
      auVar28[0xd] = uVar25;
      auVar28[0xe] = uVar26;
      auVar28[0xf] = uVar27;
      auVar29[9] = uVar21;
      auVar29[10] = uVar22;
      auVar29[0xb] = uVar23;
      auVar29[0xc] = uVar24;
      auVar29[0xd] = uVar25;
      auVar29[0xe] = uVar26;
      auVar29[0xf] = uVar27;
      auVar30 = NEON_ext(auVar28,auVar29,8,1);
      uVar21 = (undefined1)((ulong)uVar11 >> 8);
      uVar22 = (undefined1)((ulong)uVar11 >> 0x10);
      uVar23 = (undefined1)((ulong)uVar11 >> 0x18);
      uVar24 = (undefined1)((ulong)uVar11 >> 0x20);
      uVar25 = (undefined1)((ulong)uVar11 >> 0x28);
      uVar26 = (undefined1)((ulong)uVar11 >> 0x30);
      uVar27 = (undefined1)((ulong)uVar11 >> 0x38);
      auVar2[8] = uStack_218;
      auVar2._0_8_ = uVar10;
      auVar1[8] = uStack_218;
      auVar1._0_8_ = uVar10;
      auVar4._8_8_ = uVar15;
      auVar4._0_8_ = uVar12;
      auVar3._8_8_ = uVar15;
      auVar3._0_8_ = uVar12;
      auVar28 = NEON_ext(auVar3,auVar4,8,1);
      auVar1[9] = uVar21;
      auVar1[10] = uVar22;
      auVar1[0xb] = uVar23;
      auVar1[0xc] = uVar24;
      auVar1[0xd] = uVar25;
      auVar1[0xe] = uVar26;
      auVar1[0xf] = uVar27;
      auVar2[9] = uVar21;
      auVar2[10] = uVar22;
      auVar2[0xb] = uVar23;
      auVar2[0xc] = uVar24;
      auVar2[0xd] = uVar25;
      auVar2[0xe] = uVar26;
      auVar2[0xf] = uVar27;
      auVar29 = NEON_ext(auVar1,auVar2,8,1);
      FUN_10164af34(&uStack_d0,0x112dbc850,&UNK_10d973868);
      uStack_168 = param_1[0x68];
      uStack_170 = param_1[0x67];
      uStack_160 = param_1[0x69];
      uStack_158 = param_1[0x6a];
      uStack_148 = param_1[0x6c];
      uStack_150 = param_1[0x6b];
      uStack_140 = param_1[0x6d];
      uStack_138 = param_1[0x6e];
      lStack_188 = param_1[100];
      uStack_190 = param_1[99];
      uStack_180 = param_1[0x65];
      uStack_178 = param_1[0x66];
      param_1[100] = lVar17;
      param_1[99] = uVar7;
      param_1[0x66] = uVar9;
      param_1[0x65] = uVar8;
      param_1[0x67] = uVar18 & 0xcfffffffffffffff;
      param_1[0x69] = auVar29._0_8_;
      param_1[0x68] = uVar10;
      param_1[0x6b] = auVar28._0_8_;
      param_1[0x6a] = uVar12;
      param_1[0x6d] = auVar30._0_8_;
      param_1[0x6c] = uVar16;
      param_1[0x6e] = uVar19 & 0xcfffffffffffffff;
      uVar7 = 0x112db3e40;
      puVar6 = &UNK_10d973530;
      puVar5 = &uStack_190;
      goto LAB_1016451d8;
    }
  }
  uVar7 = 0x112dbc850;
  puVar6 = &UNK_10d973868;
  puVar5 = &uStack_d0;
LAB_1016451d8:
  FUN_10164af34(puVar5,uVar7,puVar6);
  return;
}



/* Entry: 101645394; end: 101645427;  */

void FUN_101645394(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x378;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_101553e18();
  (*pcVar2)(param_2 + 0x378,&UNK_1103ed890,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101645428; end: 101645677;  */

/* WARNING: Removing unreachable block (ram,0x0001016455f4) */

void FUN_101645428(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_160 [96];
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  
  uStack_80 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uVar6 = *(ulong *)(param_1 + 0x338);
  uVar2 = *(ulong *)(param_1 + 0x370);
  uVar5 = uVar6 & uVar2 & 0x3000000000000000;
  lVar1 = param_1;
  if (uVar5 != 0x3000000000000000 && (uVar2 & 0x2000000000000000) != 0) {
    uStack_d0 = *(undefined8 *)(param_1 + 0x348);
    uStack_d8 = *(undefined8 *)(param_1 + 0x340);
    uStack_c0 = *(undefined8 *)(param_1 + 0x358);
    uStack_c8 = *(undefined8 *)(param_1 + 0x350);
    uVar7 = *(undefined8 *)(param_1 + 0x330);
    uVar8 = *(undefined8 *)(param_1 + 0x328);
    uVar9 = *(undefined8 *)(param_1 + 800);
    lVar3 = *(long *)(param_1 + 0x318);
    uStack_b0 = *(undefined8 *)(param_1 + 0x368);
    uStack_b8 = *(undefined8 *)(param_1 + 0x360);
    lStack_100 = lVar3;
    uStack_f8 = uVar9;
    uStack_f0 = uVar8;
    uStack_e8 = uVar7;
    uStack_e0 = uVar6;
    uStack_a8 = uVar2;
    FUN_101649ea0(&lStack_100,auStack_160);
    lVar1 = 0;
    FUN_10164af74(0,0,0,0,0);
    lStack_a0 = lVar3;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    uStack_88 = uVar7;
    uStack_80 = uVar6;
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  func_0x00010164adb4();
  (*pcVar4)(&lStack_a0,&UNK_1103ee228,lVar1,param_3,param_4);
  uVar2 = uStack_80;
  uVar9 = uStack_88;
  uVar8 = uStack_90;
  uVar7 = uStack_98;
  lVar1 = lStack_a0;
  if ((unaff_x21 == 0) && (lStack_a0 != 0)) {
    if (uVar5 == 0x3000000000000000) {
      func_0x000107c61434();
      func_0x00010006c00c(uVar7,uVar8);
      func_0x00010006c00c(uVar9,uVar2);
    }
    else {
      pcVar4 = *(code **)(param_4 + 8);
      func_0x000107c61434();
      func_0x00010006c00c(uVar7,uVar8);
      func_0x00010006c00c(uVar9,uVar2);
      (*pcVar4)(param_3,param_4);
    }
    FUN_10164af74(lStack_a0,uStack_98,uStack_90,uStack_88,uStack_80);
    uStack_d8 = *(undefined8 *)(param_1 + 0x340);
    uStack_e0 = *(undefined8 *)(param_1 + 0x338);
    uStack_c8 = *(undefined8 *)(param_1 + 0x350);
    uStack_d0 = *(undefined8 *)(param_1 + 0x348);
    uStack_b8 = *(undefined8 *)(param_1 + 0x360);
    uStack_c0 = *(undefined8 *)(param_1 + 0x358);
    uStack_a8 = *(undefined8 *)(param_1 + 0x370);
    uStack_b0 = *(undefined8 *)(param_1 + 0x368);
    uStack_f8 = *(undefined8 *)(param_1 + 800);
    lStack_100 = *(long *)(param_1 + 0x318);
    uStack_e8 = *(undefined8 *)(param_1 + 0x330);
    uStack_f0 = *(undefined8 *)(param_1 + 0x328);
    *(long *)(param_1 + 0x318) = lVar1;
    *(undefined8 *)(param_1 + 800) = uVar7;
    *(undefined8 *)(param_1 + 0x328) = uVar8;
    *(undefined8 *)(param_1 + 0x330) = uVar9;
    *(ulong *)(param_1 + 0x338) = uVar2 & 0xcfffffffffffffff;
    *(undefined8 *)(param_1 + 0x370) = 0x2000000000000000;
    FUN_10164af34(&lStack_100,0x112db3e40,&UNK_10d973530);
  }
  else {
    FUN_10164af74(lStack_a0,uStack_98,uStack_90,uStack_88,uStack_80);
  }
  return;
}



/* Entry: 101645678; end: 10164570b;  */

void FUN_101645678(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x3c0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010164ad74();
  (*pcVar2)(param_2 + 0x3c0,&UNK_1103f14e0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10164570c; end: 10164579f;  */

void FUN_10164570c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x408;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010164ad34();
  (*pcVar2)(param_2 + 0x408,&UNK_1103f0f90,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1016457a0; end: 101645833;  */

void FUN_1016457a0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x428;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010164acf4();
  (*pcVar2)(param_2 + 0x428,&UNK_1103eeca8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101645834; end: 1016458c7;  */

void FUN_101645834(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x4a0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1015cabb8();
  (*pcVar2)(param_2 + 0x4a0,&UNK_110679698,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1016458c8; end: 10164595b;  */

void FUN_1016458c8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x4c8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1015cabb8();
  (*pcVar2)(param_2 + 0x4c8,&UNK_110679698,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10164595c; end: 1016459ef;  */

void FUN_10164595c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x4f0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_10164ac34();
  (*pcVar2)(param_2 + 0x4f0,&UNK_1103f1218,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1016459f0; end: 101645a83;  */

void FUN_1016459f0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x4f8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010164acb4();
  (*pcVar2)(param_2 + 0x4f8,&UNK_1103ed690,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101645a84; end: 101645aef;  */

void FUN_101645a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_101645af0(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 101645af0; end: 1016463cf;  */

/* WARNING: Removing unreachable block (ram,0x0001016463a8) */
/* WARNING: Removing unreachable block (ram,0x000101645b90) */
/* WARNING: Removing unreachable block (ram,0x000101645e38) */
/* WARNING: Removing unreachable block (ram,0x000101645d0c) */
/* WARNING: Removing unreachable block (ram,0x000101645f3c) */
/* WARNING: Removing unreachable block (ram,0x000101645ed4) */

void FUN_101645af0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long unaff_x21;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  long lStack_1b0;
  undefined1 uStack_1a8;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  long lStack_d8;
  undefined1 uStack_d0;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  FUN_1016463d0();
  if (unaff_x21 == 0) {
    func_0x000107c61428(param_1 + 0x38,auStack_78,0,0);
    if (*(char *)(param_1 + 0x38) == '\x01') {
      (**(code **)(param_4 + 0x68))(1,2,param_3,param_4);
    }
    func_0x000107c61428(param_1 + 0x39,auStack_90,0,0);
    if (*(char *)(param_1 + 0x39) == '\x01') {
      (**(code **)(param_4 + 0x68))(1,3,param_3,param_4);
    }
    func_0x000107c61428(param_1 + 0x3a,auStack_a8,0,0);
    if (*(char *)(param_1 + 0x3a) == '\x01') {
      (**(code **)(param_4 + 0x68))(1,5,param_3,param_4);
    }
    FUN_10164647c(param_1,param_2,param_3,param_4);
    lVar4 = param_1 + 0x68;
    func_0x000107c61428(lVar4,auStack_c0,0,0);
    if (*(long *)(param_1 + 0x68) != 0) {
      uStack_d0 = *(undefined1 *)(param_1 + 0x70);
      pcVar3 = *(code **)(param_4 + 0x80);
      lStack_d8 = *(long *)(param_1 + 0x68);
      func_0x00010164ac74();
      (*pcVar3)(&lStack_d8,7,&UNK_110676238,lVar4,param_3,param_4);
    }
    FUN_10164650c(param_1,param_2,param_3,param_4);
    func_0x000107c61428((char *)(param_1 + 0x1c0),&lStack_d8,0,0);
    if (*(char *)(param_1 + 0x1c0) == '\x01') {
      (**(code **)(param_4 + 0x68))(1,9,param_3,param_4);
    }
    func_0x000107c61428(param_1 + 0x1c1,auStack_f0,0,0);
    if (*(char *)(param_1 + 0x1c1) == '\x01') {
      (**(code **)(param_4 + 0x68))(1,10,param_3,param_4);
    }
    FUN_1016465d8(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x1e0,auStack_108,0,0);
    if (*(char *)(param_1 + 0x1e0) == '\x01') {
      (**(code **)(param_4 + 0x68))(1,0xc,param_3,param_4);
    }
    FUN_101646680(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x250,auStack_120,0,0);
    uVar2 = *(ulong *)(param_1 + 0x250);
    uVar5 = *(ulong *)(param_1 + 600);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      pcVar3 = *(code **)(param_4 + 0x70);
      func_0x000107c61434(uVar5);
      (*pcVar3)(uVar2,uVar5,0xe,param_3,param_4);
      func_0x000107c6142c(uVar5);
    }
    FUN_10164673c(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x288,auStack_138,0,0);
    if (*(int *)(param_1 + 0x288) != 0) {
      (**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x288),0x10,param_3,param_4);
    }
    FUN_1016467f0(param_1,param_2,param_3,param_4);
    FUN_10164689c(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x2f0,auStack_150,0,0);
    uVar2 = *(ulong *)(param_1 + 0x2f0);
    uVar5 = *(ulong *)(param_1 + 0x2f8);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      pcVar3 = *(code **)(param_4 + 0x70);
      func_0x000107c61434(uVar5);
      (*pcVar3)(uVar2,uVar5,0x13,param_3,param_4);
      func_0x000107c6142c(uVar5);
    }
    func_0x000107c61428(param_1 + 0x300,auStack_168,0,0);
    if (*(char *)(param_1 + 0x300) == '\x01') {
      (**(code **)(param_4 + 0x68))(1,0x14,param_3,param_4);
    }
    func_0x000107c61428(param_1 + 0x301,auStack_180,0,0);
    if (*(char *)(param_1 + 0x301) == '\x01') {
      (**(code **)(param_4 + 0x68))(1,0x15,param_3,param_4);
    }
    lVar4 = param_1 + 0x308;
    func_0x000107c61428(lVar4,auStack_198,0,0);
    if (*(long *)(param_1 + 0x308) != 0) {
      uStack_1a8 = *(undefined1 *)(param_1 + 0x310);
      pcVar3 = *(code **)(param_4 + 0x80);
      lStack_1b0 = *(long *)(param_1 + 0x308);
      func_0x00010164ac74();
      (*pcVar3)(&lStack_1b0,0x16,&UNK_110676238,lVar4,param_3,param_4);
    }
    FUN_101646950(param_1,param_2,param_3,param_4);
    FUN_101646a04(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x3b8,&lStack_1b0,0,0);
    if (*(char *)(param_1 + 0x3b8) == '\x01') {
      (**(code **)(param_4 + 0x68))(1,0x19,param_3,param_4);
    }
    FUN_101646abc(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x3b9,auStack_1c8,0,0);
    if (*(char *)(param_1 + 0x3b9) == '\x01') {
      (**(code **)(param_4 + 0x68))(1,0x1b,param_3,param_4);
    }
    func_0x000107c61428(param_1 + 0x3ba,auStack_1e0,0,0);
    if (*(char *)(param_1 + 0x3ba) == '\x01') {
      (**(code **)(param_4 + 0x68))(1,0x1c,param_3,param_4);
    }
    FUN_101646b64(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 1000,auStack_1f8,0,0);
    uVar2 = *(ulong *)(param_1 + 1000);
    uVar5 = *(ulong *)(param_1 + 0x3f0);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      pcVar3 = *(code **)(param_4 + 0x70);
      func_0x000107c61434(uVar5);
      (*pcVar3)(uVar2,uVar5,0x1e,param_3,param_4);
      func_0x000107c6142c(uVar5);
    }
    func_0x000107c61428(param_1 + 0x3f8,auStack_210,0,0);
    uVar2 = *(ulong *)(param_1 + 0x3f8);
    uVar5 = *(ulong *)(param_1 + 0x400);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      pcVar3 = *(code **)(param_4 + 0x70);
      func_0x000107c61434(uVar5);
      (*pcVar3)(uVar2,uVar5,0x1f,param_3,param_4);
      func_0x000107c6142c(uVar5);
    }
    FUN_101646c14(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x420,auStack_228,0,0);
    if (*(char *)(param_1 + 0x420) == '\x01') {
      (**(code **)(param_4 + 0x68))(1,0x21,param_3,param_4);
    }
    FUN_101646cf4(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x498,auStack_240,0,0);
    if (*(char *)(param_1 + 0x498) == '\x01') {
      (**(code **)(param_4 + 0x68))(1,0x23,param_3,param_4);
    }
    FUN_101646dbc(param_1,param_2,param_3,param_4);
    FUN_101646e70(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x4f0,auStack_258,0,0);
    lVar4 = *(long *)(param_1 + 0x4f0);
    if (*(long *)(lVar4 + 0x10) != 0) {
      pcVar3 = *(code **)(param_4 + 0x118);
      func_0x00010164ac34();
      func_0x000107c61434(lVar4);
      (*pcVar3)();
      func_0x000107c6142c(lVar4);
    }
    FUN_101646f20(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 1016463d0; end: 10164647b;  */

void FUN_1016463d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_78 = *(long *)(param_1 + 0x18);
  if (lStack_78 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_80 = *(undefined8 *)(param_1 + 0x10);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_68 = *(undefined8 *)(param_1 + 0x28);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101618440();
    (*pcVar2)(&uStack_80,1,&UNK_1103eee58,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10164647c; end: 10164650b;  */

void FUN_10164647c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_60 = *(ulong *)(param_1 + 0x50);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010164aef4();
    (*pcVar1)(&uStack_70,6,&UNK_1103eea70,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10164650c; end: 1016465d7;  */

void FUN_10164650c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_430 [328];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [328];
  undefined1 auStack_188 [328];
  
  puVar2 = auStack_430;
  func_0x000107c61428(param_1 + 0x78,auStack_2e8,0,0);
  func_0x000107c610b4(auStack_2d0,param_1 + 0x78,0x148);
  func_0x000107c610b4(auStack_188,param_1 + 0x78,0x148);
  iVar1 = (int)auStack_2d0;
  FUN_1016440a8();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_430,auStack_188,0x148);
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x00010164aeb4();
    (*pcVar3)(auStack_430,8,&UNK_1103ef670,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1016465d8; end: 10164667f;  */

void FUN_1016465d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1c8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x1c8) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x1c8) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x1d8);
    uStack_68 = *(undefined8 *)(param_1 + 0x1d0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,0xb,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101646680; end: 10164673b;  */

void FUN_101646680(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lStack_c0;
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
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1e8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_c0 = *(long *)(param_1 + 0x1e8);
  if (lStack_c0 != 0) {
    uStack_90 = *(undefined8 *)(param_1 + 0x218);
    uStack_98 = *(undefined8 *)(param_1 + 0x210);
    uStack_80 = *(undefined8 *)(param_1 + 0x228);
    uStack_88 = *(undefined8 *)(param_1 + 0x220);
    uStack_70 = *(undefined8 *)(param_1 + 0x238);
    uStack_78 = *(undefined8 *)(param_1 + 0x230);
    uStack_60 = *(undefined8 *)(param_1 + 0x248);
    uStack_68 = *(undefined8 *)(param_1 + 0x240);
    uStack_b0 = *(undefined8 *)(param_1 + 0x1f8);
    uStack_b8 = *(undefined8 *)(param_1 + 0x1f0);
    uStack_a0 = *(undefined8 *)(param_1 + 0x208);
    uStack_a8 = *(undefined8 *)(param_1 + 0x200);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010164ae74();
    (*pcVar2)(&lStack_c0,0xd,&UNK_1103eda88,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10164673c; end: 1016467ef;  */

void FUN_10164673c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_80;
  undefined1 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x260;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x270);
  if (lStack_70 != 0) {
    uStack_80 = *(undefined8 *)(param_1 + 0x260);
    uStack_78 = (undefined1)*(undefined8 *)(param_1 + 0x268);
    uStack_60 = *(undefined8 *)(param_1 + 0x280);
    uStack_68 = *(undefined8 *)(param_1 + 0x278);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015cabb8();
    (*pcVar2)(&uStack_80,0xf,&UNK_110679698,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1016467f0; end: 10164689b;  */

void FUN_1016467f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x290;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x2a0);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x298);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x290);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,0x11,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10164689c; end: 10164694f;  */

void FUN_10164689c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x2a8);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  lStack_80 = *(long *)(param_1 + 0x2c8);
  if (lStack_80 != 1) {
    uStack_98 = *(undefined8 *)(param_1 + 0x2b0);
    uStack_a0 = *puVar1;
    uStack_88 = *(undefined8 *)(param_1 + 0x2c0);
    uStack_90 = *(undefined8 *)(param_1 + 0x2b8);
    uStack_70 = *(undefined8 *)(param_1 + 0x2d8);
    uStack_78 = *(undefined8 *)(param_1 + 0x2d0);
    uStack_60 = *(undefined8 *)(param_1 + 0x2e8);
    uStack_68 = *(undefined8 *)(param_1 + 0x2e0);
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x00010164ae34();
    (*pcVar3)(&uStack_a0,0x12,&UNK_1103ef438,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 101646950; end: 101646a03;  */

void FUN_101646950(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_80 = *(ulong *)(param_1 + 0x338);
  uStack_48 = *(ulong *)(param_1 + 0x370);
  if (((uStack_80 & uStack_48 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 &&
      (uStack_48 & 0x2000000000000000) == 0) {
    uStack_98 = *(undefined8 *)(param_1 + 800);
    uStack_a0 = *(undefined8 *)(param_1 + 0x318);
    uStack_88 = *(undefined8 *)(param_1 + 0x330);
    uStack_90 = *(undefined8 *)(param_1 + 0x328);
    uStack_70 = *(undefined8 *)(param_1 + 0x348);
    uStack_78 = *(undefined8 *)(param_1 + 0x340);
    uStack_60 = *(undefined8 *)(param_1 + 0x358);
    uStack_68 = *(undefined8 *)(param_1 + 0x350);
    uStack_50 = *(undefined8 *)(param_1 + 0x368);
    uStack_58 = *(undefined8 *)(param_1 + 0x360);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010164adf4();
    (*pcVar1)(&uStack_a0,0x17,&UNK_1103ee338,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101646a04; end: 101646abb;  */

void FUN_101646a04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x378);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  lStack_80 = *(long *)(param_1 + 0x398);
  if (lStack_80 != 1) {
    uStack_98 = *(undefined8 *)(param_1 + 0x380);
    uStack_a0 = *puVar1;
    uStack_88 = *(undefined8 *)(param_1 + 0x390);
    uStack_90 = *(undefined8 *)(param_1 + 0x388);
    uStack_70 = *(undefined8 *)(param_1 + 0x3a8);
    uStack_78 = *(undefined8 *)(param_1 + 0x3a0);
    uStack_68 = *(undefined8 *)(param_1 + 0x3b0);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_101553e18();
    (*pcVar3)(&uStack_a0,0x18,&UNK_1103ed890,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 101646abc; end: 101646b63;  */

void FUN_101646abc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x338);
  if (((uStack_48 & *(ulong *)(param_1 + 0x370) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 &&
      (*(ulong *)(param_1 + 0x370) & 0x2000000000000000) != 0) {
    uStack_50 = *(undefined8 *)(param_1 + 0x330);
    uStack_68 = *(undefined8 *)(param_1 + 0x318);
    uStack_58 = *(undefined8 *)(param_1 + 0x328);
    uStack_60 = *(undefined8 *)(param_1 + 800);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010164adb4();
    (*pcVar1)(&uStack_68,0x1a,&UNK_1103ee228,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101646b64; end: 101646c13;  */

void FUN_101646b64(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x3c0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_78 = *(long *)(param_1 + 0x3c8);
  if (lStack_78 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x3d0);
    uStack_80 = *(undefined8 *)(param_1 + 0x3c0);
    uStack_60 = *(undefined8 *)(param_1 + 0x3e0);
    uStack_68 = *(undefined8 *)(param_1 + 0x3d8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010164ad74();
    (*pcVar2)(&uStack_80,0x1d,&UNK_1103f14e0,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101646c14; end: 101646cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101646c14(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bStack_70;
  undefined4 uStack_6f;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x408;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uVar2 = *(ulong *)(param_1 + 0x408);
  if ((uVar2 & 0xff) != 2) {
    bStack_70 = (byte)uVar2 & 1;
    auVar4._8_8_ = uVar2;
    auVar4._0_8_ = uVar2;
    auVar5 = NEON_ushl(auVar4,_UNK_10d945720,8);
    auVar4 = NEON_ushl(auVar4,_UNK_10d945730,8);
    uVar2 = CONCAT26(auVar5._8_2_,CONCAT24(auVar5._0_2_,CONCAT22(auVar4._8_2_,auVar4._0_2_))) &
            0x1000100010001;
    uStack_6f = CONCAT13((char)(uVar2 >> 0x30),
                         CONCAT12((char)(uVar2 >> 0x20),CONCAT11((char)(uVar2 >> 0x10),(char)uVar2))
                        );
    uStack_68 = *(undefined8 *)(param_1 + 0x410);
    uStack_60 = *(undefined8 *)(param_1 + 0x418);
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x00010164ad34();
    (*pcVar3)(&bStack_70,0x20,&UNK_1103f0f90,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101646cf4; end: 101646dbb;  */

void FUN_101646cf4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x428);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  lStack_b8 = *(long *)(param_1 + 0x440);
  if (lStack_b8 != 1) {
    uStack_c8 = *(undefined8 *)(param_1 + 0x430);
    uStack_d0 = *puVar1;
    uStack_c0 = *(undefined8 *)(param_1 + 0x438);
    uStack_88 = *(undefined8 *)(param_1 + 0x470);
    uStack_90 = *(undefined8 *)(param_1 + 0x468);
    uStack_78 = *(undefined8 *)(param_1 + 0x480);
    uStack_80 = *(undefined8 *)(param_1 + 0x478);
    uStack_68 = *(undefined8 *)(param_1 + 0x490);
    uStack_70 = *(undefined8 *)(param_1 + 0x488);
    uStack_a8 = *(undefined8 *)(param_1 + 0x450);
    uStack_b0 = *(undefined8 *)(param_1 + 0x448);
    uStack_98 = *(undefined8 *)(param_1 + 0x460);
    uStack_a0 = *(undefined8 *)(param_1 + 0x458);
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x00010164acf4();
    (*pcVar3)(&uStack_d0,0x22,&UNK_1103eeca8,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 101646dbc; end: 101646e6f;  */

void FUN_101646dbc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_80;
  undefined1 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x4a0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x4b0);
  if (lStack_70 != 0) {
    uStack_80 = *(undefined8 *)(param_1 + 0x4a0);
    uStack_78 = (undefined1)*(undefined8 *)(param_1 + 0x4a8);
    uStack_60 = *(undefined8 *)(param_1 + 0x4c0);
    uStack_68 = *(undefined8 *)(param_1 + 0x4b8);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015cabb8();
    (*pcVar2)(&uStack_80,0x24,&UNK_110679698,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101646e70; end: 101646f1f;  */

void FUN_101646e70(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_80;
  undefined1 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x4c8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x4d8);
  if (lStack_70 != 0) {
    uStack_80 = *(undefined8 *)(param_1 + 0x4c8);
    uStack_78 = (undefined1)*(undefined8 *)(param_1 + 0x4d0);
    uStack_60 = *(undefined8 *)(param_1 + 0x4e8);
    uStack_68 = *(undefined8 *)(param_1 + 0x4e0);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015cabb8();
    (*pcVar2)(&uStack_80,0x25,&UNK_110679698,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101646f20; end: 101646fd7;  */

void FUN_101646f20(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x4f8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_98 = *(long *)(param_1 + 0x500);
  if (lStack_98 != 0) {
    uStack_a0 = *(undefined8 *)(param_1 + 0x4f8);
    uStack_88 = *(undefined8 *)(param_1 + 0x510);
    uStack_90 = *(undefined8 *)(param_1 + 0x508);
    uStack_78 = *(undefined8 *)(param_1 + 0x520);
    uStack_80 = *(undefined8 *)(param_1 + 0x518);
    uStack_68 = *(undefined8 *)(param_1 + 0x530);
    uStack_70 = *(undefined8 *)(param_1 + 0x528);
    uStack_60 = *(undefined8 *)(param_1 + 0x538);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010164acb4();
    (*pcVar2)(&uStack_a0,0x27,&UNK_1103ed690,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101646fd8; end: 101647087;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101646fd8(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
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
    FUN_101647088(param_3,param_6);
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
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar18 == 0) {
        uVar19 = param_5 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar16 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar16,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_4)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar18 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar17 != uVar19) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar17 < 1) goto LAB_100e26128;
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
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
              goto LAB_100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (ulong)param_2 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,param_4,
                      param_5);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_5;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
LAB_100e262b0:
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
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 101647088; end: 10164985f;  */

undefined8 FUN_101647088(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lStack_1d20;
  undefined8 uStack_1d18;
  undefined8 uStack_1d10;
  undefined8 uStack_1d08;
  undefined8 uStack_1d00;
  undefined8 uStack_1cf8;
  undefined8 uStack_1cf0;
  undefined8 uStack_1ce8;
  undefined8 uStack_1ce0;
  undefined8 uStack_1cd8;
  undefined8 uStack_1cd0;
  undefined8 uStack_1cc8;
  undefined8 uStack_1cc0;
  undefined8 uStack_1cb8;
  long lStack_1bd0;
  undefined8 uStack_1bc8;
  undefined8 uStack_1bc0;
  undefined8 uStack_1bb8;
  undefined8 uStack_1bb0;
  undefined8 uStack_1ba8;
  undefined8 uStack_1ba0;
  undefined8 uStack_1b98;
  undefined8 uStack_1b90;
  undefined8 uStack_1b88;
  undefined8 uStack_1b80;
  undefined8 uStack_1b78;
  long lStack_1b70;
  undefined8 uStack_1b68;
  long lStack_1a80;
  long lStack_1a78;
  undefined8 uStack_1a70;
  long lStack_1a68;
  ulong uStack_1a60;
  undefined8 uStack_1a58;
  undefined8 uStack_1a50;
  undefined8 uStack_1a48;
  long lStack_1a40;
  long lStack_1a38;
  long lStack_1a30;
  ulong uStack_1a28;
  long lStack_1a20;
  long lStack_1a18;
  long lStack_1a10;
  undefined8 uStack_1a08;
  ulong uStack_1a00;
  long lStack_19f8;
  undefined8 uStack_19f0;
  undefined8 uStack_19e8;
  undefined8 uStack_19e0;
  undefined8 uStack_19d8;
  undefined8 uStack_19d0;
  ulong uStack_19c8;
  undefined8 uStack_19c0;
  undefined8 uStack_19b8;
  undefined8 uStack_19b0;
  undefined8 uStack_19a8;
  long lStack_1930;
  undefined8 uStack_1928;
  undefined8 uStack_1920;
  undefined8 uStack_1918;
  undefined8 uStack_1910;
  undefined8 uStack_1908;
  undefined8 uStack_1900;
  undefined8 uStack_18f8;
  undefined8 uStack_18f0;
  undefined1 auStack_18b8 [72];
  long lStack_1870;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  undefined8 uStack_1850;
  undefined8 uStack_1848;
  undefined8 uStack_1840;
  undefined8 uStack_1838;
  undefined8 uStack_1830;
  undefined1 auStack_1820 [24];
  undefined1 auStack_1808 [24];
  long lStack_17f0;
  long lStack_17e8;
  undefined8 uStack_17e0;
  long lStack_17d8;
  long lStack_17d0;
  undefined8 uStack_17c8;
  undefined8 uStack_17c0;
  undefined8 uStack_17b8;
  long lStack_17b0;
  long lStack_17a0;
  undefined8 uStack_1798;
  undefined8 uStack_1790;
  undefined8 uStack_1788;
  undefined8 uStack_1780;
  undefined8 uStack_1778;
  undefined8 uStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined1 auStack_1750 [24];
  undefined1 auStack_1738 [24];
  undefined1 auStack_1720 [24];
  undefined1 auStack_1708 [24];
  undefined1 auStack_16f0 [24];
  undefined1 auStack_16d8 [24];
  undefined1 auStack_16c0 [24];
  undefined1 auStack_16a8 [24];
  undefined1 auStack_1690 [24];
  undefined1 auStack_1678 [24];
  long lStack_1660;
  long lStack_1658;
  undefined8 uStack_1650;
  long lStack_1648;
  long lStack_1640;
  undefined8 uStack_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  long lStack_1620;
  long lStack_1618;
  long lStack_1610;
  undefined8 uStack_1608;
  long lStack_1600;
  long lStack_15f8;
  long lStack_15f0;
  undefined8 uStack_15e8;
  ulong uStack_15e0;
  long lStack_15d8;
  undefined8 uStack_15d0;
  undefined8 uStack_15c8;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  ulong uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1588;
  undefined1 auStack_1580 [24];
  undefined1 auStack_1568 [24];
  undefined1 auStack_1550 [24];
  undefined1 auStack_1538 [24];
  undefined1 auStack_1520 [24];
  undefined1 auStack_1508 [24];
  undefined1 auStack_14f0 [24];
  undefined1 auStack_14d8 [24];
  undefined1 auStack_14c0 [24];
  undefined1 auStack_14a8 [24];
  undefined1 auStack_1490 [24];
  undefined1 auStack_1478 [24];
  undefined1 auStack_1460 [24];
  undefined1 auStack_1448 [24];
  undefined1 auStack_1430 [24];
  undefined1 auStack_1418 [24];
  long lStack_1400;
  long lStack_13f8;
  undefined8 uStack_13f0;
  long lStack_13e8;
  long lStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  long lStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  long lStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  ulong uStack_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  ulong uStack_1328;
  long lStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  ulong uStack_1300;
  long lStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  ulong uStack_12c8;
  undefined1 auStack_12b8 [24];
  undefined1 auStack_12a0 [24];
  undefined1 auStack_1288 [24];
  undefined1 auStack_1270 [24];
  undefined1 auStack_1258 [24];
  undefined1 auStack_1240 [24];
  undefined1 auStack_1228 [24];
  undefined1 auStack_1210 [24];
  undefined1 auStack_11f8 [24];
  long lStack_11e0;
  long lStack_11d8;
  undefined8 uStack_11d0;
  long lStack_11c8;
  long lStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  long lStack_11a0;
  long lStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined1 auStack_1148 [24];
  undefined1 auStack_1130 [24];
  undefined1 auStack_1118 [24];
  undefined1 auStack_1100 [24];
  undefined1 auStack_10e8 [24];
  undefined1 auStack_10d0 [24];
  undefined1 auStack_10b8 [24];
  undefined1 auStack_10a0 [24];
  undefined1 auStack_1088 [24];
  long lStack_1070;
  long lStack_1068;
  undefined8 uStack_1060;
  long lStack_1058;
  long lStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  long lStack_1030;
  long lStack_1028;
  long lStack_1020;
  undefined8 uStack_1018;
  long lStack_1010;
  long lStack_1000;
  long lStack_ff8;
  undefined8 uStack_ff0;
  ulong uStack_fe8;
  long lStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  ulong uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined1 auStack_f90 [24];
  undefined1 auStack_f78 [24];
  undefined1 auStack_f60 [24];
  undefined1 auStack_f48 [24];
  undefined1 auStack_f30 [24];
  undefined1 auStack_f18 [24];
  undefined1 auStack_f00 [24];
  undefined1 auStack_ee8 [24];
  undefined1 auStack_ed0 [656];
  long lStack_c40;
  long lStack_c38;
  long lStack_c30;
  long lStack_c28;
  ulong uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  long lStack_c08;
  long lStack_c00;
  long lStack_bf8;
  long lStack_bf0;
  ulong uStack_be8;
  long lStack_be0;
  long lStack_bd8;
  long lStack_bd0;
  undefined8 uStack_bc8;
  ulong uStack_bc0;
  long lStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  ulong uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined1 auStack_af8 [328];
  undefined1 auStack_9b0 [24];
  undefined1 auStack_998 [24];
  undefined1 auStack_980 [328];
  undefined1 auStack_838 [328];
  undefined1 auStack_6f0 [24];
  undefined1 auStack_6d8 [24];
  undefined1 auStack_6c0 [24];
  undefined1 auStack_6a8 [24];
  undefined1 auStack_690 [24];
  undefined1 auStack_678 [24];
  undefined1 auStack_660 [24];
  undefined1 auStack_648 [24];
  undefined1 auStack_630 [24];
  undefined1 auStack_618 [24];
  long lStack_600;
  undefined1 uStack_5f8;
  long lStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined1 uStack_5d0;
  long lStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5b0;
  undefined1 uStack_5a8;
  long lStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined1 uStack_580;
  long lStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  long lStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long lStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  ulong uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  ulong uStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  ulong uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  ulong uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_330;
  undefined1 uStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 uStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
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
  long lStack_210;
  undefined1 auStack_208 [328];
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(param_1 + 0x10,auStack_618,0,0);
  func_0x000107c61428(param_2 + 0x10,auStack_630,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x18);
  uVar21 = *(undefined8 *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  lVar14 = *(long *)(param_2 + 0x18);
  uVar25 = *(undefined8 *)(param_2 + 0x20);
  uVar24 = *(undefined8 *)(param_2 + 0x28);
  uVar19 = *(undefined8 *)(param_2 + 0x30);
  if (lVar12 == 0) {
    if (lVar14 != 0) goto LAB_1016471b0;
    FUN_101649f10(uVar13,0,uVar21,uVar11,uVar16);
    FUN_101649f10(uVar17,0,uVar25,uVar24,uVar19);
    func_0x000101649f5c(uVar13,0,uVar21,uVar11,uVar16);
  }
  else {
    if (lVar14 == 0) {
LAB_1016471b0:
      FUN_101649f10(uVar13,lVar12,uVar21,uVar11,uVar16);
      FUN_101649f10(uVar17,lVar14,uVar25,uVar24,uVar19);
      func_0x000101649f5c(uVar13,lVar12,uVar21,uVar11,uVar16);
      func_0x000101649f5c(uVar17,lVar14,uVar25,uVar24,uVar19);
      return 0;
    }
    uStack_c0 = uVar13;
    lStack_b8 = lVar12;
    uStack_b0 = uVar21;
    uStack_a8 = uVar11;
    uStack_a0 = uVar16;
    uStack_98 = uVar17;
    lStack_90 = lVar14;
    uStack_88 = uVar25;
    uStack_80 = uVar24;
    uStack_78 = uVar19;
    FUN_101649f10(uVar13,lVar12,uVar21,uVar11,uVar16);
    FUN_101649f10(uVar17,lVar14,uVar25,uVar24,uVar19);
    puVar4 = &uStack_c0;
    FUN_10165c624(puVar4,&uStack_98);
    func_0x000101649f5c(uVar17,lVar14,uVar25,uVar24,uVar19);
    func_0x000101649f5c(uVar13,lVar12,uVar21,uVar11,uVar16);
    if (((ulong)puVar4 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x38,auStack_648,0,0);
  cVar2 = *(char *)(param_1 + 0x38);
  func_0x000107c61428(param_2 + 0x38,auStack_660,0,0);
  if (cVar2 != *(char *)(param_2 + 0x38)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x39,auStack_678,0,0);
  cVar2 = *(char *)(param_1 + 0x39);
  func_0x000107c61428(param_2 + 0x39,auStack_690,0,0);
  if (cVar2 != *(char *)(param_2 + 0x39)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x3a,auStack_6a8,0,0);
  cVar2 = *(char *)(param_1 + 0x3a);
  func_0x000107c61428(param_2 + 0x3a,auStack_6c0,0,0);
  if (cVar2 != *(char *)(param_2 + 0x3a)) {
    return 0;
  }
  lVar12 = *(long *)(param_1 + 0x40);
  uVar15 = *(ulong *)(param_1 + 0x48);
  uVar9 = *(ulong *)(param_1 + 0x50);
  uVar23 = *(ulong *)(param_1 + 0x58);
  uVar13 = *(undefined8 *)(param_1 + 0x60);
  lVar14 = *(long *)(param_2 + 0x40);
  uVar8 = *(ulong *)(param_2 + 0x48);
  uVar18 = *(ulong *)(param_2 + 0x50);
  uVar20 = *(ulong *)(param_2 + 0x58);
  uVar21 = *(undefined8 *)(param_2 + 0x60);
  if (uVar9 >> 0x3c < 0xf) {
    if (uVar18 >> 0x3c < 0xf) {
      FUN_101644064(lVar12,uVar15,uVar9,uVar23,uVar13);
      if (lVar12 == lVar14) {
        FUN_101644064(lVar12,uVar8,uVar18,uVar20,uVar21);
        uVar5 = uVar15;
        FUN_100e25fcc(uVar15,uVar9,uVar8,uVar18);
        lVar14 = lVar12;
        if ((uVar5 & 1) != 0) {
          uVar5 = uVar23;
          FUN_100e25fcc(uVar23,uVar13,uVar20,uVar21);
          func_0x000100cb711c(lVar12,uVar8,uVar18,uVar20,uVar21);
          if ((uVar5 & 1) == 0) goto LAB_10164767c;
          goto LAB_101647388;
        }
      }
      else {
        FUN_101644064(lVar14,uVar8,uVar18,uVar20,uVar21);
      }
      func_0x000100cb711c(lVar14,uVar8,uVar18,uVar20,uVar21);
      goto LAB_10164767c;
    }
  }
  else if (0xe < uVar18 >> 0x3c) {
    FUN_101644064(lVar12,uVar15,uVar9,uVar23,uVar13);
    FUN_101644064(lVar14,uVar8,uVar18,uVar20,uVar21);
LAB_101647388:
    func_0x000100cb711c(lVar12,uVar15,uVar9,uVar23,uVar13);
    func_0x000107c61428(param_1 + 0x68,auStack_6d8,0,0);
    lVar14 = *(long *)(param_1 + 0x68);
    func_0x000107c61428(param_2 + 0x68,auStack_6f0,0,0);
    lVar12 = *(long *)(param_2 + 0x68);
    if (*(char *)(param_2 + 0x70) == '\x01') {
      if (lVar12 < 2) {
        if (lVar12 == 0) {
          if (lVar14 != 0) {
            return 0;
          }
        }
        else if (lVar14 != 1) {
          return 0;
        }
      }
      else if (lVar12 == 2) {
        if (lVar14 != 2) {
          return 0;
        }
      }
      else if (lVar14 != 3) {
        return 0;
      }
    }
    else if (lVar14 != lVar12) {
      return 0;
    }
    func_0x000107c61428(param_1 + 0x78,auStack_998,0,0);
    func_0x000107c61428(param_2 + 0x78,auStack_9b0,0,0);
    func_0x000107c610b4(auStack_980,param_1 + 0x78,0x148);
    func_0x000107c610b4(&lStack_c40,param_1 + 0x78,0x148);
    func_0x000107c610b4(auStack_838,param_2 + 0x78,0x148);
    func_0x000107c610b4(auStack_af8,param_2 + 0x78,0x148);
    iVar3 = (int)&lStack_c40;
    FUN_1016440a8();
    if (iVar3 == 1) {
      iVar3 = (int)auStack_af8;
      FUN_1016440a8();
      if (iVar3 != 1) {
LAB_1016476e0:
        func_0x000107c610b4(auStack_ed0,&lStack_c40,0x290);
        FUN_101649fa8(auStack_980,auStack_208,0x112dbc208,&UNK_10d973500);
        FUN_101649fa8(auStack_838,auStack_208,0x112dbc208,&UNK_10d973500);
        FUN_10164af34(auStack_ed0,0x112dbc210,&UNK_10d973508);
        return 0;
      }
      func_0x000107c610b4(auStack_ed0,&lStack_c40,0x148);
      FUN_101649fa8(auStack_980,auStack_208,0x112dbc208,&UNK_10d973500);
      FUN_101649fa8(auStack_838,auStack_208,0x112dbc208,&UNK_10d973500);
      FUN_10164af34(auStack_ed0,0x112dbc208,&UNK_10d973500);
    }
    else {
      func_0x000107c610b4(&lStack_1a80,&lStack_c40,0x148);
      iVar3 = (int)auStack_af8;
      FUN_1016440a8();
      if (iVar3 == 1) goto LAB_1016476e0;
      func_0x000107c610b4(&lStack_1bd0,auStack_af8,0x148);
      func_0x000107c610b4(auStack_ed0,auStack_af8,0x148);
      func_0x000107c610b4(auStack_208,&lStack_1a80,0x148);
      FUN_101649fa8(auStack_980,&lStack_1d20,0x112dbc208,&UNK_10d973500);
      FUN_101649fa8(auStack_838,&lStack_1d20,0x112dbc208,&UNK_10d973500);
      puVar6 = auStack_208;
      FUN_1016606e0(puVar6,auStack_ed0);
      FUN_10164af34(&lStack_1bd0,0x112dbc208,&UNK_10d973500);
      FUN_10164af34(&lStack_c40,0x112dbc208,&UNK_10d973500);
      if (((ulong)puVar6 & 1) == 0) {
        return 0;
      }
    }
    func_0x000107c61428((char *)(param_1 + 0x1c0),auStack_ee8,0,0);
    cVar2 = *(char *)(param_1 + 0x1c0);
    func_0x000107c61428((char *)(param_2 + 0x1c0),auStack_f00,0,0);
    if (cVar2 != *(char *)(param_2 + 0x1c0)) {
      return 0;
    }
    func_0x000107c61428(param_1 + 0x1c1,auStack_f18,0,0);
    cVar2 = *(char *)(param_1 + 0x1c1);
    func_0x000107c61428(param_2 + 0x1c1,auStack_f30,0,0);
    if (cVar2 != *(char *)(param_2 + 0x1c1)) {
      return 0;
    }
    func_0x000107c61428(param_1 + 0x1c8,auStack_f48,0,0);
    func_0x000107c61428(param_2 + 0x1c8,auStack_f60,0,0);
    uVar9 = *(ulong *)(param_1 + 0x1c8);
    uVar15 = *(ulong *)(param_1 + 0x1d0);
    uVar17 = *(undefined8 *)(param_1 + 0x1d8);
    uVar18 = *(ulong *)(param_2 + 0x1c8);
    uVar23 = *(ulong *)(param_2 + 0x1d0);
    uVar13 = *(undefined8 *)(param_2 + 0x1d8);
    uVar21 = uVar17;
    uVar8 = uVar15;
    uVar20 = uVar9;
    if ((uVar9 & 0xff) == 2) {
      if ((uVar18 & 0xff) == 2) {
        FUN_100cb70b4(uVar9,uVar15,uVar17);
        FUN_100cb70b4(uVar18,uVar23,uVar13);
LAB_10164790c:
        func_0x000100cb70d0(uVar9,uVar15,uVar17);
        func_0x000107c61428(param_1 + 0x1e0,auStack_f78,0,0);
        cVar2 = *(char *)(param_1 + 0x1e0);
        func_0x000107c61428(param_2 + 0x1e0,auStack_f90,0,0);
        if (cVar2 != *(char *)(param_2 + 0x1e0)) {
          return 0;
        }
        plVar7 = (long *)(param_1 + 0x1e8);
        func_0x000107c61428(plVar7,auStack_1088,0,0);
        plVar1 = (long *)(param_2 + 0x1e8);
        func_0x000107c61428(plVar1,auStack_10a0,0,0);
        lStack_1028 = *(long *)(param_1 + 0x230);
        lStack_1030 = *(long *)(param_1 + 0x228);
        uStack_1018 = *(undefined8 *)(param_1 + 0x240);
        lStack_1020 = *(long *)(param_1 + 0x238);
        lStack_1010 = *(long *)(param_1 + 0x248);
        lStack_1068 = *(long *)(param_1 + 0x1f0);
        lStack_1070 = *plVar7;
        lStack_1058 = *(long *)(param_1 + 0x200);
        uStack_1060 = *(undefined8 *)(param_1 + 0x1f8);
        uStack_1048 = *(undefined8 *)(param_1 + 0x210);
        lStack_1050 = *(long *)(param_1 + 0x208);
        uStack_1038 = *(undefined8 *)(param_1 + 0x220);
        uStack_1040 = *(undefined8 *)(param_1 + 0x218);
        lStack_ff8 = *(long *)(param_2 + 0x1f0);
        lStack_1000 = *plVar1;
        uStack_fe8 = *(ulong *)(param_2 + 0x200);
        uStack_ff0 = *(undefined8 *)(param_2 + 0x1f8);
        uStack_fa0 = *(undefined8 *)(param_2 + 0x248);
        uStack_fb8 = *(undefined8 *)(param_2 + 0x230);
        uStack_fc0 = *(undefined8 *)(param_2 + 0x228);
        uStack_fa8 = *(undefined8 *)(param_2 + 0x240);
        uStack_fb0 = *(ulong *)(param_2 + 0x238);
        uStack_fd8 = *(undefined8 *)(param_2 + 0x210);
        lStack_fe0 = *(long *)(param_2 + 0x208);
        uStack_fc8 = *(undefined8 *)(param_2 + 0x220);
        uStack_fd0 = *(undefined8 *)(param_2 + 0x218);
        lStack_c40 = lStack_1070;
        lStack_c38 = lStack_1068;
        lStack_c30 = uStack_1060;
        lStack_c28 = lStack_1058;
        uStack_c20 = lStack_1050;
        uStack_c18 = uStack_1048;
        uStack_c10 = uStack_1040;
        lStack_c08 = uStack_1038;
        lStack_c00 = lStack_1030;
        lStack_bf8 = lStack_1028;
        lStack_bf0 = lStack_1020;
        uStack_be8 = uStack_1018;
        lStack_be0 = lStack_1010;
        lStack_bd8 = lStack_1000;
        lStack_bd0 = lStack_ff8;
        uStack_bc8 = uStack_ff0;
        uStack_bc0 = uStack_fe8;
        lStack_bb8 = lStack_fe0;
        uStack_bb0 = uStack_fd8;
        uStack_ba8 = uStack_fd0;
        uStack_ba0 = uStack_fc8;
        uStack_b98 = uStack_fc0;
        uStack_b90 = uStack_fb8;
        uStack_b88 = uStack_fb0;
        uStack_b80 = uStack_fa8;
        uStack_b78 = uStack_fa0;
        if (lStack_1070 == 0) {
          if (lStack_1000 != 0) goto LAB_101647bdc;
          lStack_1a38 = *(undefined8 *)(param_1 + 0x230);
          lStack_1a40 = *(undefined8 *)(param_1 + 0x228);
          uStack_1a28 = *(undefined8 *)(param_1 + 0x240);
          lStack_1a30 = *(undefined8 *)(param_1 + 0x238);
          lStack_1a20 = *(long *)(param_1 + 0x248);
          lStack_1a78 = *(undefined8 *)(param_1 + 0x1f0);
          lStack_1a80 = *plVar7;
          lStack_1a68 = *(undefined8 *)(param_1 + 0x200);
          uStack_1a70 = *(undefined8 *)(param_1 + 0x1f8);
          uStack_1a58 = *(undefined8 *)(param_1 + 0x210);
          uStack_1a60 = *(undefined8 *)(param_1 + 0x208);
          uStack_1a48 = *(undefined8 *)(param_1 + 0x220);
          uStack_1a50 = *(undefined8 *)(param_1 + 0x218);
          FUN_101649fa8(&lStack_1070,&lStack_1bd0,0x112dbc218,&UNK_10d973510);
          FUN_101649fa8(&lStack_1000,&lStack_1bd0,0x112dbc218,&UNK_10d973510);
          FUN_10164af34(&lStack_1a80,0x112dbc218,&UNK_10d973510);
        }
        else {
          if (lStack_1000 == 0) {
LAB_101647bdc:
            lStack_1a80 = lStack_1070;
            lStack_1a78 = lStack_1068;
            uStack_1a70 = uStack_1060;
            lStack_1a68 = lStack_1058;
            uStack_1a60 = lStack_1050;
            uStack_1a58 = uStack_1048;
            uStack_1a50 = uStack_1040;
            uStack_1a48 = uStack_1038;
            lStack_1a40 = lStack_1030;
            lStack_1a38 = lStack_1028;
            lStack_1a30 = lStack_1020;
            uStack_1a28 = uStack_1018;
            lStack_1a20 = lStack_1010;
            lStack_1a18 = lStack_1000;
            lStack_1a10 = lStack_ff8;
            uStack_1a08 = uStack_ff0;
            uStack_1a00 = uStack_fe8;
            lStack_19f8 = lStack_fe0;
            uStack_19f0 = uStack_fd8;
            uStack_19e8 = uStack_fd0;
            uStack_19e0 = uStack_fc8;
            uStack_19d8 = uStack_fc0;
            uStack_19d0 = uStack_fb8;
            uStack_19c8 = uStack_fb0;
            uStack_19c0 = uStack_fa8;
            uStack_19b8 = uStack_fa0;
            FUN_101649fa8(&lStack_1070,&lStack_1bd0,0x112dbc218,&UNK_10d973510);
            FUN_101649fa8(&lStack_1000,&lStack_1bd0,0x112dbc218,&UNK_10d973510);
            uVar13 = 0x112dbc220;
            puVar10 = &UNK_10d973518;
            goto LAB_101647c74;
          }
          lStack_1a38 = *(undefined8 *)(param_2 + 0x230);
          lStack_1a40 = *(undefined8 *)(param_2 + 0x228);
          uStack_1a28 = *(undefined8 *)(param_2 + 0x240);
          lStack_1a30 = *(undefined8 *)(param_2 + 0x238);
          lStack_1a20 = *(long *)(param_2 + 0x248);
          lStack_1a78 = *(undefined8 *)(param_2 + 0x1f0);
          lStack_1a80 = *plVar1;
          lStack_1a68 = *(undefined8 *)(param_2 + 0x200);
          uStack_1a70 = *(undefined8 *)(param_2 + 0x1f8);
          uStack_1a58 = *(undefined8 *)(param_2 + 0x210);
          uStack_1a60 = *(undefined8 *)(param_2 + 0x208);
          uStack_1a48 = *(undefined8 *)(param_2 + 0x220);
          uStack_1a50 = *(undefined8 *)(param_2 + 0x218);
          uStack_298 = *(undefined8 *)(param_1 + 0x230);
          uStack_2a0 = *(undefined8 *)(param_1 + 0x228);
          uStack_288 = *(undefined8 *)(param_1 + 0x240);
          uStack_290 = *(undefined8 *)(param_1 + 0x238);
          uStack_280 = *(undefined8 *)(param_1 + 0x248);
          uStack_2d8 = *(undefined8 *)(param_1 + 0x1f0);
          lStack_2e0 = *plVar7;
          uStack_2c8 = *(undefined8 *)(param_1 + 0x200);
          uStack_2d0 = *(undefined8 *)(param_1 + 0x1f8);
          uStack_2b8 = *(undefined8 *)(param_1 + 0x210);
          uStack_2c0 = *(undefined8 *)(param_1 + 0x208);
          uStack_2a8 = *(undefined8 *)(param_1 + 0x220);
          uStack_2b0 = *(undefined8 *)(param_1 + 0x218);
          lStack_270 = lStack_1a80;
          uStack_268 = lStack_1a78;
          uStack_260 = uStack_1a70;
          uStack_258 = lStack_1a68;
          uStack_250 = uStack_1a60;
          uStack_248 = uStack_1a58;
          uStack_240 = uStack_1a50;
          uStack_238 = uStack_1a48;
          uStack_230 = lStack_1a40;
          uStack_228 = lStack_1a38;
          uStack_220 = lStack_1a30;
          uStack_218 = uStack_1a28;
          lStack_210 = lStack_1a20;
          FUN_101649fa8(&lStack_1070,&lStack_1bd0,0x112dbc218,&UNK_10d973510);
          FUN_101649fa8(&lStack_1000,&lStack_1bd0,0x112dbc218,&UNK_10d973510);
          plVar7 = &lStack_2e0;
          FUN_10164d2b0(plVar7,&lStack_270);
          FUN_10164af34(&lStack_1a80,0x112dbc218,&UNK_10d973510);
          FUN_10164af34(&lStack_c40,0x112dbc218,&UNK_10d973510);
          if (((ulong)plVar7 & 1) == 0) {
            return 0;
          }
        }
        func_0x000107c61428(param_1 + 0x250,auStack_10b8,0,0);
        func_0x000107c61428(param_2 + 0x250,&lStack_c40,0x20,0);
        uVar9 = *(ulong *)(param_1 + 0x250);
        if ((uVar9 == *(ulong *)(param_2 + 0x250)) &&
           (*(long *)(param_1 + 600) == *(long *)(param_2 + 600))) {
          func_0x000107c614a8(&lStack_c40);
        }
        else {
          func_0x000107c605b8();
          func_0x000107c614a8(&lStack_c40);
          if ((uVar9 & 1) == 0) {
            return 0;
          }
        }
        func_0x000107c61428(param_1 + 0x260,auStack_10d0,0,0);
        func_0x000107c61428(param_2 + 0x260,auStack_10e8,0,0);
        lVar22 = *(long *)(param_1 + 0x260);
        uVar16 = *(undefined8 *)(param_1 + 0x268);
        lVar14 = *(long *)(param_1 + 0x270);
        uVar17 = *(undefined8 *)(param_1 + 0x278);
        uVar11 = *(undefined8 *)(param_1 + 0x280);
        uVar13 = *(undefined8 *)(param_2 + 0x260);
        uVar21 = *(undefined8 *)(param_2 + 0x268);
        lVar12 = *(long *)(param_2 + 0x270);
        uVar25 = *(undefined8 *)(param_2 + 0x278);
        uVar24 = *(undefined8 *)(param_2 + 0x280);
        if (lVar14 == 0) {
          if (lVar12 != 0) {
LAB_101647e78:
            lStack_c40 = lVar22;
            lStack_c38 = uVar16;
            lStack_c30 = lVar14;
            lStack_c28 = uVar17;
            uStack_c20 = uVar11;
            uStack_c18 = uVar13;
            uStack_c10 = uVar21;
            lStack_c08 = lVar12;
            lStack_c00 = uVar25;
            lStack_bf8 = uVar24;
            func_0x000101541428(lVar22,uVar16,lVar14);
            goto LAB_101647ec4;
          }
          func_0x000101541428(lVar22,uVar16,0);
          func_0x000101541428(uVar13,uVar21,0,uVar25,uVar24);
          FUN_101553bdc(lVar22,uVar16,0,uVar17,uVar11);
        }
        else {
          if (lVar12 == 0) goto LAB_101647e78;
          uStack_300 = (undefined1)uVar21;
          uStack_328 = (undefined1)uVar16;
          lStack_330 = lVar22;
          lStack_320 = lVar14;
          uStack_318 = uVar17;
          uStack_310 = uVar11;
          uStack_308 = uVar13;
          lStack_2f8 = lVar12;
          uStack_2f0 = uVar25;
          uStack_2e8 = uVar24;
          func_0x000101541428(lVar22,uVar16,lVar14);
          func_0x000101541428(uVar13,uVar21,lVar12,uVar25,uVar24);
          plVar7 = &lStack_330;
          func_0x00010368c758(plVar7,&uStack_308);
          FUN_101553bdc(uVar13,uVar21,lVar12,uVar25,uVar24);
          FUN_101553bdc(lVar22,uVar16,lVar14,uVar17,uVar11);
          if (((ulong)plVar7 & 1) == 0) {
            return 0;
          }
        }
        func_0x000107c61428(param_1 + 0x288,auStack_1100,0,0);
        iVar3 = *(int *)(param_1 + 0x288);
        func_0x000107c61428(param_2 + 0x288,auStack_1118,0,0);
        if (iVar3 != *(int *)(param_2 + 0x288)) {
          return 0;
        }
        func_0x000107c61428(param_1 + 0x290,auStack_1130,0,0);
        func_0x000107c61428(param_2 + 0x290,auStack_1148,0,0);
        uVar13 = *(undefined8 *)(param_1 + 0x290);
        uVar9 = *(ulong *)(param_1 + 0x298);
        uVar18 = *(ulong *)(param_1 + 0x2a0);
        uVar21 = *(undefined8 *)(param_2 + 0x290);
        uVar15 = *(ulong *)(param_2 + 0x298);
        uVar23 = *(ulong *)(param_2 + 0x2a0);
        if (uVar18 >> 0x3c < 0xf) {
          if (0xe < uVar23 >> 0x3c) goto LAB_101648140;
          FUN_1015dc5b4(uVar13,uVar9,uVar18);
          FUN_1015dc5b4(uVar21,uVar15,uVar23);
          if ((int)uVar13 != (int)uVar21) {
            func_0x0001015dc5d0(uVar21,uVar15,uVar23);
            goto LAB_101648280;
          }
          uVar8 = uVar9;
          FUN_100e25fcc(uVar9,uVar18,uVar15,uVar23);
          func_0x0001015dc5d0(uVar21,uVar15,uVar23);
          if ((uVar8 & 1) == 0) goto LAB_101648280;
        }
        else {
          if (uVar23 >> 0x3c < 0xf) {
LAB_101648140:
            FUN_1015dc5b4(uVar13,uVar9,uVar18);
            FUN_1015dc5b4(uVar21,uVar15,uVar23);
            func_0x0001015dc5d0(uVar13,uVar9,uVar18);
            uVar13 = uVar21;
            uVar9 = uVar15;
            uVar18 = uVar23;
LAB_101648280:
            func_0x0001015dc5d0(uVar13,uVar9,uVar18);
            return 0;
          }
          FUN_1015dc5b4(uVar13,uVar9,uVar18);
          FUN_1015dc5b4(uVar21,uVar15,uVar23);
        }
        func_0x0001015dc5d0(uVar13,uVar9,uVar18);
        plVar7 = (long *)(param_1 + 0x2a8);
        func_0x000107c61428(plVar7,auStack_11f8,0,0);
        plVar1 = (long *)(param_2 + 0x2a8);
        func_0x000107c61428(plVar1,auStack_1210,0,0);
        uStack_11b8 = *(undefined8 *)(param_1 + 0x2d0);
        lStack_11c0 = *(long *)(param_1 + 0x2c8);
        uStack_11a8 = *(undefined8 *)(param_1 + 0x2e0);
        uStack_11b0 = *(undefined8 *)(param_1 + 0x2d8);
        lStack_11a0 = *(long *)(param_1 + 0x2e8);
        lStack_11d8 = *(long *)(param_1 + 0x2b0);
        lStack_11e0 = *plVar7;
        lStack_11c8 = *(long *)(param_1 + 0x2c0);
        uStack_11d0 = *(undefined8 *)(param_1 + 0x2b8);
        uStack_1188 = *(undefined8 *)(param_2 + 0x2b0);
        lStack_1190 = *plVar1;
        lStack_be0 = *(long *)(param_2 + 0x2c0);
        uStack_be8 = *(undefined8 *)(param_2 + 0x2b8);
        uStack_1150 = *(undefined8 *)(param_2 + 0x2e8);
        uStack_1168 = *(undefined8 *)(param_2 + 0x2d0);
        uStack_1170 = *(undefined8 *)(param_2 + 0x2c8);
        uStack_1158 = *(undefined8 *)(param_2 + 0x2e0);
        uStack_1160 = *(undefined8 *)(param_2 + 0x2d8);
        uStack_1178 = *(undefined8 *)(param_2 + 0x2c0);
        uStack_1180 = *(undefined8 *)(param_2 + 0x2b8);
        lStack_bd0 = *(long *)(param_2 + 0x2d0);
        lStack_bd8 = *(long *)(param_2 + 0x2c8);
        lStack_bf0 = *(long *)(param_2 + 0x2b0);
        lStack_bf8 = *plVar1;
        uStack_bc0 = *(ulong *)(param_2 + 0x2e0);
        uStack_bc8 = *(undefined8 *)(param_2 + 0x2d8);
        lStack_bb8 = *(long *)(param_2 + 0x2e8);
        lStack_c40 = lStack_11e0;
        lStack_c38 = lStack_11d8;
        lStack_c30 = uStack_11d0;
        lStack_c28 = lStack_11c8;
        uStack_c20 = lStack_11c0;
        uStack_c18 = uStack_11b8;
        uStack_c10 = uStack_11b0;
        lStack_c08 = uStack_11a8;
        lStack_c00 = lStack_11a0;
        if (lStack_11c0 == 1) {
          if (lStack_bd8 != 1) {
LAB_1016481e0:
            lStack_1a80 = lStack_11e0;
            lStack_1a78 = lStack_11d8;
            uStack_1a70 = uStack_11d0;
            lStack_1a68 = lStack_11c8;
            uStack_1a60 = lStack_11c0;
            uStack_1a58 = uStack_11b8;
            uStack_1a50 = uStack_11b0;
            uStack_1a48 = uStack_11a8;
            lStack_1a40 = lStack_11a0;
            lStack_1a38 = lStack_bf8;
            lStack_1a30 = lStack_bf0;
            uStack_1a28 = uStack_be8;
            lStack_1a20 = lStack_be0;
            lStack_1a18 = lStack_bd8;
            lStack_1a10 = lStack_bd0;
            uStack_1a08 = uStack_bc8;
            uStack_1a00 = uStack_bc0;
            lStack_19f8 = lStack_bb8;
            FUN_101649fa8(&lStack_11e0,&lStack_1bd0,0x112dbc228,&UNK_10d973520);
            FUN_101649fa8(&lStack_1190,&lStack_1bd0,0x112dbc228,&UNK_10d973520);
            uVar13 = 0x112dbc230;
            puVar10 = &UNK_10d973528;
            goto LAB_101647c74;
          }
          uStack_1a58 = *(undefined8 *)(param_1 + 0x2d0);
          uStack_1a60 = *(undefined8 *)(param_1 + 0x2c8);
          uStack_1a48 = *(undefined8 *)(param_1 + 0x2e0);
          uStack_1a50 = *(undefined8 *)(param_1 + 0x2d8);
          lStack_1a40 = *(undefined8 *)(param_1 + 0x2e8);
          lStack_1a78 = *(undefined8 *)(param_1 + 0x2b0);
          lStack_1a80 = *plVar7;
          lStack_1a68 = *(undefined8 *)(param_1 + 0x2c0);
          uStack_1a70 = *(undefined8 *)(param_1 + 0x2b8);
          FUN_101649fa8(&lStack_11e0,&lStack_1bd0,0x112dbc228,&UNK_10d973520);
          FUN_101649fa8(&lStack_1190,&lStack_1bd0,0x112dbc228,&UNK_10d973520);
          FUN_10164af34(&lStack_1a80,0x112dbc228,&UNK_10d973520);
        }
        else {
          if (lStack_bd8 == 1) goto LAB_1016481e0;
          uStack_1a58 = *(undefined8 *)(param_2 + 0x2d0);
          uStack_1a60 = *(undefined8 *)(param_2 + 0x2c8);
          uStack_1a48 = *(undefined8 *)(param_2 + 0x2e0);
          uStack_1a50 = *(undefined8 *)(param_2 + 0x2d8);
          lStack_1a40 = *(undefined8 *)(param_2 + 0x2e8);
          lStack_1a78 = *(undefined8 *)(param_2 + 0x2b0);
          lStack_1a80 = *plVar1;
          lStack_1a68 = *(undefined8 *)(param_2 + 0x2c0);
          uStack_1a70 = *(undefined8 *)(param_2 + 0x2b8);
          uStack_3c8 = *(undefined8 *)(param_1 + 0x2b0);
          lStack_3d0 = *plVar7;
          uStack_3b8 = *(undefined8 *)(param_1 + 0x2c0);
          uStack_3c0 = *(undefined8 *)(param_1 + 0x2b8);
          uStack_3a8 = *(undefined8 *)(param_1 + 0x2d0);
          uStack_3b0 = *(undefined8 *)(param_1 + 0x2c8);
          uStack_398 = *(undefined8 *)(param_1 + 0x2e0);
          uStack_3a0 = *(undefined8 *)(param_1 + 0x2d8);
          uStack_390 = *(undefined8 *)(param_1 + 0x2e8);
          lStack_380 = lStack_1a80;
          uStack_378 = lStack_1a78;
          uStack_370 = uStack_1a70;
          uStack_368 = lStack_1a68;
          uStack_360 = uStack_1a60;
          uStack_358 = uStack_1a58;
          uStack_350 = uStack_1a50;
          uStack_348 = uStack_1a48;
          uStack_340 = lStack_1a40;
          FUN_101649fa8(&lStack_11e0,&lStack_1bd0,0x112dbc228,&UNK_10d973520);
          FUN_101649fa8(&lStack_1190,&lStack_1bd0,0x112dbc228,&UNK_10d973520);
          plVar7 = &lStack_3d0;
          FUN_10165e4a8(plVar7,&lStack_380);
          FUN_10164af34(&lStack_1a80,0x112dbc228,&UNK_10d973520);
          FUN_10164af34(&lStack_c40,0x112dbc228,&UNK_10d973520);
          if (((ulong)plVar7 & 1) == 0) {
            return 0;
          }
        }
        func_0x000107c61428(param_1 + 0x2f0,auStack_1228,0,0);
        func_0x000107c61428(param_2 + 0x2f0,&lStack_c40,0x20,0);
        uVar9 = *(ulong *)(param_1 + 0x2f0);
        if ((uVar9 == *(ulong *)(param_2 + 0x2f0)) &&
           (*(long *)(param_1 + 0x2f8) == *(long *)(param_2 + 0x2f8))) {
          func_0x000107c614a8(&lStack_c40);
        }
        else {
          func_0x000107c605b8();
          func_0x000107c614a8(&lStack_c40);
          if ((uVar9 & 1) == 0) {
            return 0;
          }
        }
        func_0x000107c61428(param_1 + 0x300,auStack_1240,0,0);
        cVar2 = *(char *)(param_1 + 0x300);
        func_0x000107c61428(param_2 + 0x300,auStack_1258,0,0);
        if (cVar2 != *(char *)(param_2 + 0x300)) {
          return 0;
        }
        func_0x000107c61428(param_1 + 0x301,auStack_1270,0,0);
        cVar2 = *(char *)(param_1 + 0x301);
        func_0x000107c61428(param_2 + 0x301,auStack_1288,0,0);
        if (cVar2 != *(char *)(param_2 + 0x301)) {
          return 0;
        }
        func_0x000107c61428(param_1 + 0x308,auStack_12a0,0,0);
        lVar14 = *(long *)(param_1 + 0x308);
        func_0x000107c61428(param_2 + 0x308,auStack_12b8,0,0);
        lVar12 = *(long *)(param_2 + 0x308);
        if (*(char *)(param_2 + 0x310) == '\x01') {
          if (lVar12 < 2) {
            if (lVar12 == 0) {
              if (lVar14 != 0) {
                return 0;
              }
            }
            else if (lVar14 != 1) {
              return 0;
            }
          }
          else if (lVar12 == 2) {
            if (lVar14 != 2) {
              return 0;
            }
          }
          else if (lVar14 != 3) {
            return 0;
          }
        }
        else if (lVar14 != lVar12) {
          return 0;
        }
        uStack_1358 = *(undefined8 *)(param_1 + 0x340);
        uStack_1360 = *(ulong *)(param_1 + 0x338);
        uStack_1348 = *(undefined8 *)(param_1 + 0x350);
        uStack_1350 = *(undefined8 *)(param_1 + 0x348);
        uStack_1338 = *(undefined8 *)(param_1 + 0x360);
        uStack_1340 = *(undefined8 *)(param_1 + 0x358);
        uStack_1328 = *(ulong *)(param_1 + 0x370);
        uStack_1330 = *(undefined8 *)(param_1 + 0x368);
        uStack_1378 = *(undefined8 *)(param_1 + 800);
        lStack_1380 = *(long *)(param_1 + 0x318);
        uStack_1368 = *(undefined8 *)(param_1 + 0x330);
        uStack_1370 = *(undefined8 *)(param_1 + 0x328);
        uStack_12d8 = *(undefined8 *)(param_2 + 0x360);
        uStack_12e0 = *(undefined8 *)(param_2 + 0x358);
        uStack_12c8 = *(ulong *)(param_2 + 0x370);
        uStack_12d0 = *(undefined8 *)(param_2 + 0x368);
        lStack_12f8 = *(long *)(param_2 + 0x340);
        uStack_1300 = *(ulong *)(param_2 + 0x338);
        uStack_12e8 = *(undefined8 *)(param_2 + 0x350);
        uStack_12f0 = *(undefined8 *)(param_2 + 0x348);
        uStack_1318 = *(undefined8 *)(param_2 + 800);
        lStack_1320 = *(long *)(param_2 + 0x318);
        uStack_1308 = *(undefined8 *)(param_2 + 0x330);
        uStack_1310 = *(undefined8 *)(param_2 + 0x328);
        lStack_c40 = lStack_1380;
        lStack_c38 = uStack_1378;
        lStack_c30 = uStack_1370;
        lStack_c28 = uStack_1368;
        uStack_c20 = uStack_1360;
        uStack_c18 = uStack_1358;
        uStack_c10 = uStack_1350;
        lStack_c08 = uStack_1348;
        lStack_c00 = uStack_1340;
        lStack_bf8 = uStack_1338;
        lStack_bf0 = uStack_1330;
        uStack_be8 = uStack_1328;
        lStack_be0 = lStack_1320;
        lStack_bd8 = uStack_1318;
        lStack_bd0 = uStack_1310;
        uStack_bc8 = uStack_1308;
        uStack_bc0 = uStack_1300;
        lStack_bb8 = lStack_12f8;
        uStack_bb0 = uStack_12f0;
        uStack_ba8 = uStack_12e8;
        uStack_ba0 = uStack_12e0;
        uStack_b98 = uStack_12d8;
        uStack_b90 = uStack_12d0;
        uStack_b88 = uStack_12c8;
        if (((uStack_1360 & uStack_1328 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
          if (((uStack_1300 & uStack_12c8 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
LAB_1016486f4:
            lStack_1a80 = lStack_1380;
            lStack_1a78 = uStack_1378;
            uStack_1a70 = uStack_1370;
            lStack_1a68 = uStack_1368;
            uStack_1a60 = uStack_1360;
            uStack_1a58 = uStack_1358;
            uStack_1a50 = uStack_1350;
            uStack_1a48 = uStack_1348;
            lStack_1a40 = uStack_1340;
            lStack_1a38 = uStack_1338;
            lStack_1a30 = uStack_1330;
            uStack_1a28 = uStack_1328;
            lStack_1a20 = lStack_1320;
            lStack_1a18 = uStack_1318;
            lStack_1a10 = uStack_1310;
            uStack_1a08 = uStack_1308;
            uStack_1a00 = uStack_1300;
            lStack_19f8 = lStack_12f8;
            uStack_19f0 = uStack_12f0;
            uStack_19e8 = uStack_12e8;
            uStack_19e0 = uStack_12e0;
            uStack_19d8 = uStack_12d8;
            uStack_19d0 = uStack_12d0;
            uStack_19c8 = uStack_12c8;
            FUN_101649fa8(&lStack_1380,&lStack_1bd0,0x112db3e40,&UNK_10d973530);
            FUN_101649fa8(&lStack_1320,&lStack_1bd0,0x112db3e40,&UNK_10d973530);
            uVar13 = 0x112dbc7e8;
            puVar10 = &UNK_10d973860;
            plVar7 = &lStack_1a80;
LAB_101648788:
            FUN_10164af34(plVar7,uVar13,puVar10);
            return 0;
          }
          uStack_1a58 = *(undefined8 *)(param_1 + 0x340);
          uStack_1a60 = *(ulong *)(param_1 + 0x338);
          uStack_1a48 = *(undefined8 *)(param_1 + 0x350);
          uStack_1a50 = *(undefined8 *)(param_1 + 0x348);
          lStack_1a38 = *(undefined8 *)(param_1 + 0x360);
          lStack_1a40 = *(undefined8 *)(param_1 + 0x358);
          uStack_1a28 = *(ulong *)(param_1 + 0x370);
          lStack_1a30 = *(undefined8 *)(param_1 + 0x368);
          lStack_1a78 = *(undefined8 *)(param_1 + 800);
          lStack_1a80 = *(long *)(param_1 + 0x318);
          lStack_1a68 = *(undefined8 *)(param_1 + 0x330);
          uStack_1a70 = *(undefined8 *)(param_1 + 0x328);
          FUN_101649fa8(&lStack_1380,&lStack_1bd0,0x112db3e40,&UNK_10d973530);
          FUN_101649fa8(&lStack_1320,&lStack_1bd0,0x112db3e40,&UNK_10d973530);
          FUN_10164af34(&lStack_1a80,0x112db3e40,&UNK_10d973530);
        }
        else {
          if (((uStack_1300 & uStack_12c8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0)
          goto LAB_1016486f4;
          lStack_1a78 = *(undefined8 *)(param_2 + 800);
          lStack_1a80 = *(long *)(param_2 + 0x318);
          lStack_1a68 = *(undefined8 *)(param_2 + 0x330);
          uStack_1a70 = *(undefined8 *)(param_2 + 0x328);
          uStack_1a58 = *(undefined8 *)(param_2 + 0x340);
          uStack_1a60 = *(ulong *)(param_2 + 0x338);
          uStack_1a48 = *(undefined8 *)(param_2 + 0x350);
          uStack_1a50 = *(undefined8 *)(param_2 + 0x348);
          lStack_1a38 = *(undefined8 *)(param_2 + 0x360);
          lStack_1a40 = *(undefined8 *)(param_2 + 0x358);
          uStack_1a28 = *(ulong *)(param_2 + 0x370);
          lStack_1a30 = *(undefined8 *)(param_2 + 0x368);
          lStack_490 = lStack_1380;
          uStack_488 = uStack_1378;
          uStack_480 = uStack_1370;
          uStack_478 = uStack_1368;
          uStack_470 = uStack_1360;
          lStack_430 = lStack_1a80;
          uStack_428 = lStack_1a78;
          uStack_420 = uStack_1a70;
          uStack_418 = lStack_1a68;
          uStack_410 = uStack_1a60;
          if ((uStack_1328 >> 0x3d & 1) == 0) {
            uStack_468 = uStack_1358;
            uStack_460 = uStack_1350;
            uStack_458 = uStack_1348;
            uStack_450 = uStack_1340;
            uStack_448 = uStack_1338;
            uStack_440 = uStack_1330;
            uStack_438 = uStack_1328;
            if ((uStack_1a28 >> 0x3d & 1) != 0) {
LAB_101648930:
              uVar13 = 0x112db3e40;
              puVar10 = &UNK_10d973530;
              FUN_101649fa8(&lStack_1380,&lStack_1bd0,0x112db3e40,&UNK_10d973530);
              FUN_101649fa8(&lStack_1320,&lStack_1bd0,0x112db3e40,&UNK_10d973530);
              FUN_10164af34(&lStack_1a80,0x112db3e40,&UNK_10d973530);
              plVar7 = &lStack_c40;
              goto LAB_101648788;
            }
            uStack_408 = uStack_1a58;
            uStack_400 = uStack_1a50;
            uStack_3f8 = uStack_1a48;
            uStack_3f0 = lStack_1a40;
            uStack_3e8 = lStack_1a38;
            uStack_3e0 = lStack_1a30;
            uStack_3d8 = uStack_1a28;
            FUN_101649fa8(&lStack_1380,&lStack_1bd0,0x112db3e40,&UNK_10d973530);
            FUN_101649fa8(&lStack_1320,&lStack_1bd0,0x112db3e40,&UNK_10d973530);
            plVar7 = &lStack_490;
            FUN_10164f20c(plVar7,&lStack_430);
          }
          else {
            if ((uStack_1a28 >> 0x3d & 1) == 0) goto LAB_101648930;
            FUN_101649fa8(&lStack_1380,&lStack_1bd0,0x112db3e40,&UNK_10d973530);
            FUN_101649fa8(&lStack_1320,&lStack_1bd0,0x112db3e40,&UNK_10d973530);
            plVar7 = &lStack_490;
            FUN_10164e908(plVar7,&lStack_430);
          }
          FUN_10164af34(&lStack_1a80,0x112db3e40,&UNK_10d973530);
          FUN_10164af34(&lStack_c40,0x112db3e40,&UNK_10d973530);
          if (((ulong)plVar7 & 1) == 0) {
            return 0;
          }
        }
        plVar7 = (long *)(param_1 + 0x378);
        func_0x000107c61428(plVar7,auStack_1418,0,0);
        plVar1 = (long *)(param_2 + 0x378);
        func_0x000107c61428(plVar1,auStack_1430,0,0);
        lStack_13f8 = *(long *)(param_1 + 0x380);
        lStack_1400 = *plVar7;
        lStack_13e8 = *(long *)(param_1 + 0x390);
        uStack_13f0 = *(undefined8 *)(param_1 + 0x388);
        uStack_13d8 = *(undefined8 *)(param_1 + 0x3a0);
        lStack_13e0 = *(long *)(param_1 + 0x398);
        uStack_13c8 = *(undefined8 *)(param_1 + 0x3b0);
        uStack_13d0 = *(undefined8 *)(param_1 + 0x3a8);
        uStack_13b8 = *(undefined8 *)(param_2 + 0x380);
        lStack_13c0 = *plVar1;
        uStack_13a8 = *(undefined8 *)(param_2 + 0x390);
        uStack_13b0 = *(undefined8 *)(param_2 + 0x388);
        lStack_bf8 = *(long *)(param_2 + 0x380);
        lStack_c00 = *plVar1;
        uStack_be8 = *(undefined8 *)(param_2 + 0x390);
        lStack_bf0 = *(long *)(param_2 + 0x388);
        lStack_1a18 = *(long *)(param_2 + 0x3a0);
        lStack_be0 = *(long *)(param_2 + 0x398);
        uStack_1388 = *(undefined8 *)(param_2 + 0x3b0);
        uStack_1390 = *(undefined8 *)(param_2 + 0x3a8);
        uStack_1398 = *(undefined8 *)(param_2 + 0x3a0);
        uStack_13a0 = *(undefined8 *)(param_2 + 0x398);
        uStack_1a08 = *(undefined8 *)(param_2 + 0x3b0);
        lStack_1a10 = *(long *)(param_2 + 0x3a8);
        lStack_c40 = lStack_1400;
        lStack_c38 = lStack_13f8;
        lStack_c30 = uStack_13f0;
        lStack_c28 = lStack_13e8;
        uStack_c20 = lStack_13e0;
        uStack_c18 = uStack_13d8;
        uStack_c10 = uStack_13d0;
        lStack_c08 = uStack_13c8;
        lStack_bd8 = lStack_1a18;
        lStack_bd0 = lStack_1a10;
        uStack_bc8 = uStack_1a08;
        if (lStack_13e0 == 1) {
          if (lStack_be0 != 1) {
LAB_101648894:
            lStack_1a80 = lStack_1400;
            lStack_1a78 = lStack_13f8;
            uStack_1a70 = uStack_13f0;
            lStack_1a68 = lStack_13e8;
            uStack_1a60 = lStack_13e0;
            uStack_1a58 = uStack_13d8;
            uStack_1a50 = uStack_13d0;
            uStack_1a48 = uStack_13c8;
            lStack_1a40 = lStack_c00;
            lStack_1a38 = lStack_bf8;
            lStack_1a30 = lStack_bf0;
            uStack_1a28 = uStack_be8;
            lStack_1a20 = lStack_be0;
            FUN_101649fa8(&lStack_1400,&lStack_1bd0,0x112dbc238,&UNK_10d973538);
            FUN_101649fa8(&lStack_13c0,&lStack_1bd0,0x112dbc238,&UNK_10d973538);
            uVar13 = 0x112dbc240;
            puVar10 = &UNK_10d973540;
            goto LAB_101647c74;
          }
          lStack_1a78 = *(undefined8 *)(param_1 + 0x380);
          lStack_1a80 = *plVar7;
          lStack_1a68 = *(undefined8 *)(param_1 + 0x390);
          uStack_1a70 = *(undefined8 *)(param_1 + 0x388);
          uStack_1a58 = *(undefined8 *)(param_1 + 0x3a0);
          uStack_1a60 = *(undefined8 *)(param_1 + 0x398);
          uStack_1a48 = *(undefined8 *)(param_1 + 0x3b0);
          uStack_1a50 = *(undefined8 *)(param_1 + 0x3a8);
          FUN_101649fa8(&lStack_1400,&lStack_1bd0,0x112dbc238,&UNK_10d973538);
          FUN_101649fa8(&lStack_13c0,&lStack_1bd0,0x112dbc238,&UNK_10d973538);
          FUN_10164af34(&lStack_1a80,0x112dbc238,&UNK_10d973538);
        }
        else {
          if (lStack_be0 == 1) goto LAB_101648894;
          lStack_1a78 = *(undefined8 *)(param_2 + 0x380);
          lStack_1a80 = *plVar1;
          lStack_1a68 = *(undefined8 *)(param_2 + 0x390);
          uStack_1a70 = *(undefined8 *)(param_2 + 0x388);
          uStack_1a58 = *(undefined8 *)(param_2 + 0x3a0);
          uStack_1a60 = *(undefined8 *)(param_2 + 0x398);
          uStack_1a48 = *(undefined8 *)(param_2 + 0x3b0);
          uStack_1a50 = *(undefined8 *)(param_2 + 0x3a8);
          uStack_508 = *(undefined8 *)(param_1 + 0x380);
          lStack_510 = *plVar7;
          uStack_4f8 = *(undefined8 *)(param_1 + 0x390);
          uStack_500 = *(undefined8 *)(param_1 + 0x388);
          uStack_4e8 = *(undefined8 *)(param_1 + 0x3a0);
          uStack_4f0 = *(undefined8 *)(param_1 + 0x398);
          uStack_4d8 = *(undefined8 *)(param_1 + 0x3b0);
          uStack_4e0 = *(undefined8 *)(param_1 + 0x3a8);
          lStack_4d0 = lStack_1a80;
          uStack_4c8 = lStack_1a78;
          uStack_4c0 = uStack_1a70;
          uStack_4b8 = lStack_1a68;
          uStack_4b0 = uStack_1a60;
          uStack_4a8 = uStack_1a58;
          uStack_4a0 = uStack_1a50;
          uStack_498 = uStack_1a48;
          FUN_101649fa8(&lStack_1400,&lStack_1bd0,0x112dbc238,&UNK_10d973538);
          FUN_101649fa8(&lStack_13c0,&lStack_1bd0,0x112dbc238,&UNK_10d973538);
          plVar7 = &lStack_510;
          FUN_10164c250(plVar7,&lStack_4d0);
          FUN_10164af34(&lStack_1a80,0x112dbc238,&UNK_10d973538);
          FUN_10164af34(&lStack_c40,0x112dbc238,&UNK_10d973538);
          if (((ulong)plVar7 & 1) == 0) {
            return 0;
          }
        }
        func_0x000107c61428(param_1 + 0x3b8,auStack_1448,0,0);
        cVar2 = *(char *)(param_1 + 0x3b8);
        func_0x000107c61428(param_2 + 0x3b8,auStack_1460,0,0);
        if (cVar2 != *(char *)(param_2 + 0x3b8)) {
          return 0;
        }
        func_0x000107c61428(param_1 + 0x3b9,auStack_1478,0,0);
        cVar2 = *(char *)(param_1 + 0x3b9);
        func_0x000107c61428(param_2 + 0x3b9,auStack_1490,0,0);
        if (cVar2 != *(char *)(param_2 + 0x3b9)) {
          return 0;
        }
        func_0x000107c61428(param_1 + 0x3ba,auStack_14a8,0,0);
        cVar2 = *(char *)(param_1 + 0x3ba);
        func_0x000107c61428(param_2 + 0x3ba,auStack_14c0,0,0);
        if (cVar2 != *(char *)(param_2 + 0x3ba)) {
          return 0;
        }
        func_0x000107c61428(param_1 + 0x3c0,auStack_14d8,0,0);
        func_0x000107c61428(param_2 + 0x3c0,auStack_14f0,0,0);
        uVar24 = *(undefined8 *)(param_1 + 0x3c0);
        lVar12 = *(long *)(param_1 + 0x3c8);
        uVar11 = *(undefined8 *)(param_1 + 0x3d0);
        uVar21 = *(undefined8 *)(param_1 + 0x3d8);
        uVar13 = *(undefined8 *)(param_1 + 0x3e0);
        uVar25 = *(undefined8 *)(param_2 + 0x3c0);
        lVar14 = *(long *)(param_2 + 0x3c8);
        uVar17 = *(undefined8 *)(param_2 + 0x3d0);
        uVar19 = *(undefined8 *)(param_2 + 0x3d8);
        uVar16 = *(undefined8 *)(param_2 + 0x3e0);
        if (lVar12 == 0) {
          if (lVar14 != 0) goto LAB_101648c88;
          FUN_101649f10(uVar24,0,uVar11,uVar21,uVar13);
          FUN_101649f10(uVar25,0,uVar17,uVar19,uVar16);
          func_0x000101649f5c(uVar24,0,uVar11,uVar21,uVar13);
        }
        else {
          if (lVar14 == 0) {
LAB_101648c88:
            FUN_101649f10(uVar24,lVar12,uVar11,uVar21,uVar13);
            FUN_101649f10(uVar25,lVar14,uVar17,uVar19,uVar16);
            func_0x000101649f5c(uVar24,lVar12,uVar11,uVar21,uVar13);
            func_0x000101649f5c(uVar25,lVar14,uVar17,uVar19,uVar16);
            return 0;
          }
          uStack_560 = uVar24;
          lStack_558 = lVar12;
          uStack_550 = uVar11;
          uStack_548 = uVar21;
          uStack_540 = uVar13;
          uStack_538 = uVar25;
          lStack_530 = lVar14;
          uStack_528 = uVar17;
          uStack_520 = uVar19;
          uStack_518 = uVar16;
          FUN_101649f10(uVar24,lVar12,uVar11,uVar21,uVar13);
          FUN_101649f10(uVar25,lVar14,uVar17,uVar19,uVar16);
          puVar4 = &uStack_560;
          func_0x000101672d1c(puVar4,&uStack_538);
          func_0x000101649f5c(uVar25,lVar14,uVar17,uVar19,uVar16);
          func_0x000101649f5c(uVar24,lVar12,uVar11,uVar21,uVar13);
          if (((ulong)puVar4 & 1) == 0) {
            return 0;
          }
        }
        func_0x000107c61428(param_1 + 1000,auStack_1508,0,0);
        func_0x000107c61428(param_2 + 1000,&lStack_c40,0x20,0);
        uVar9 = *(ulong *)(param_1 + 1000);
        if ((uVar9 == *(ulong *)(param_2 + 1000)) &&
           (*(long *)(param_1 + 0x3f0) == *(long *)(param_2 + 0x3f0))) {
          func_0x000107c614a8(&lStack_c40);
        }
        else {
          func_0x000107c605b8();
          func_0x000107c614a8(&lStack_c40);
          if ((uVar9 & 1) == 0) {
            return 0;
          }
        }
        func_0x000107c61428(param_1 + 0x3f8,auStack_1520,0,0);
        func_0x000107c61428(param_2 + 0x3f8,&lStack_c40,0x20,0);
        uVar9 = *(ulong *)(param_1 + 0x3f8);
        if ((uVar9 == *(ulong *)(param_2 + 0x3f8)) &&
           (*(long *)(param_1 + 0x400) == *(long *)(param_2 + 0x400))) {
          func_0x000107c614a8(&lStack_c40);
        }
        else {
          func_0x000107c605b8();
          func_0x000107c614a8(&lStack_c40);
          if ((uVar9 & 1) == 0) {
            return 0;
          }
        }
        func_0x000107c61428(param_1 + 0x408,auStack_1538,0,0);
        func_0x000107c61428(param_2 + 0x408,auStack_1550,0,0);
        uVar9 = *(ulong *)(param_1 + 0x408);
        uVar15 = *(ulong *)(param_1 + 0x410);
        uVar17 = *(undefined8 *)(param_1 + 0x418);
        uVar18 = *(ulong *)(param_2 + 0x408);
        uVar23 = *(ulong *)(param_2 + 0x410);
        uVar13 = *(undefined8 *)(param_2 + 0x418);
        uVar21 = uVar17;
        uVar8 = uVar15;
        uVar20 = uVar9;
        if ((uVar9 & 0xff) == 2) {
          if ((uVar18 & 0xff) != 2) goto LAB_101647b1c;
          FUN_100cb70b4(uVar9,uVar15,uVar17);
          FUN_100cb70b4(uVar18,uVar23,uVar13);
        }
        else {
          if ((uVar18 & 0xff) == 2) goto LAB_101647b1c;
          FUN_100cb70b4(uVar9,uVar15,uVar17);
          FUN_100cb70b4(uVar18,uVar23,uVar13);
          if (((uVar18 ^ uVar9) & 0x101010101) != 0) goto LAB_101647b84;
          FUN_100e25fcc(uVar15,uVar17,uVar23,uVar13);
          func_0x000100cb70d0(uVar18,uVar23,uVar13);
          if ((uVar8 & 1) == 0) goto LAB_101647bd0;
        }
        func_0x000100cb70d0(uVar9,uVar15,uVar17);
        func_0x000107c61428(param_1 + 0x420,auStack_1568,0,0);
        cVar2 = *(char *)(param_1 + 0x420);
        func_0x000107c61428(param_2 + 0x420,auStack_1580,0,0);
        if (cVar2 != *(char *)(param_2 + 0x420)) {
          return 0;
        }
        plVar7 = (long *)(param_1 + 0x428);
        func_0x000107c61428(plVar7,auStack_1678,0,0);
        plVar1 = (long *)(param_2 + 0x428);
        func_0x000107c61428(plVar1,auStack_1690,0,0);
        lStack_1618 = *(long *)(param_1 + 0x470);
        lStack_1620 = *(long *)(param_1 + 0x468);
        uStack_1608 = *(undefined8 *)(param_1 + 0x480);
        lStack_1610 = *(long *)(param_1 + 0x478);
        lStack_15f8 = *(long *)(param_1 + 0x490);
        lStack_1600 = *(long *)(param_1 + 0x488);
        lStack_1658 = *(long *)(param_1 + 0x430);
        lStack_1660 = *plVar7;
        lStack_1648 = *(long *)(param_1 + 0x440);
        uStack_1650 = *(undefined8 *)(param_1 + 0x438);
        uStack_1638 = *(undefined8 *)(param_1 + 0x450);
        lStack_1640 = *(long *)(param_1 + 0x448);
        uStack_1628 = *(undefined8 *)(param_1 + 0x460);
        uStack_1630 = *(undefined8 *)(param_1 + 0x458);
        uStack_1a08 = *(undefined8 *)(param_2 + 0x430);
        lStack_1a10 = *plVar1;
        lStack_19f8 = *(long *)(param_2 + 0x440);
        uStack_1a00 = *(ulong *)(param_2 + 0x438);
        uStack_1598 = *(undefined8 *)(param_2 + 0x480);
        uStack_15a0 = *(undefined8 *)(param_2 + 0x478);
        uStack_1588 = *(undefined8 *)(param_2 + 0x490);
        uStack_1590 = *(undefined8 *)(param_2 + 0x488);
        uStack_15b8 = *(undefined8 *)(param_2 + 0x460);
        uStack_15c0 = *(undefined8 *)(param_2 + 0x458);
        uStack_15a8 = *(ulong *)(param_2 + 0x470);
        uStack_15b0 = *(undefined8 *)(param_2 + 0x468);
        uStack_15c8 = *(undefined8 *)(param_2 + 0x450);
        uStack_15d0 = *(undefined8 *)(param_2 + 0x448);
        lStack_15f0 = lStack_1a10;
        uStack_15e8 = uStack_1a08;
        uStack_15e0 = uStack_1a00;
        lStack_15d8 = lStack_19f8;
        lStack_c40 = lStack_1660;
        lStack_c38 = lStack_1658;
        lStack_c30 = uStack_1650;
        lStack_c28 = lStack_1648;
        uStack_c20 = lStack_1640;
        uStack_c18 = uStack_1638;
        uStack_c10 = uStack_1630;
        lStack_c08 = uStack_1628;
        lStack_c00 = lStack_1620;
        lStack_bf8 = lStack_1618;
        lStack_bf0 = lStack_1610;
        uStack_be8 = uStack_1608;
        lStack_be0 = lStack_1600;
        lStack_bd8 = lStack_15f8;
        lStack_bd0 = lStack_1a10;
        uStack_bc8 = uStack_1a08;
        uStack_bc0 = uStack_1a00;
        lStack_bb8 = lStack_19f8;
        uStack_bb0 = uStack_15d0;
        uStack_ba8 = uStack_15c8;
        uStack_ba0 = uStack_15c0;
        uStack_b98 = uStack_15b8;
        uStack_b90 = uStack_15b0;
        uStack_b88 = uStack_15a8;
        uStack_b80 = uStack_15a0;
        uStack_b78 = uStack_1598;
        uStack_b70 = uStack_1590;
        uStack_b68 = uStack_1588;
        if (lStack_1648 == 1) {
          if (lStack_19f8 != 1) {
LAB_1016490cc:
            lStack_1a80 = lStack_1660;
            lStack_1a78 = lStack_1658;
            uStack_1a70 = uStack_1650;
            lStack_1a68 = lStack_1648;
            uStack_1a60 = lStack_1640;
            uStack_1a58 = uStack_1638;
            uStack_1a50 = uStack_1630;
            uStack_1a48 = uStack_1628;
            lStack_1a40 = lStack_1620;
            lStack_1a38 = lStack_1618;
            lStack_1a30 = lStack_1610;
            uStack_1a28 = uStack_1608;
            lStack_1a20 = lStack_1600;
            lStack_1a18 = lStack_15f8;
            uStack_19f0 = uStack_15d0;
            uStack_19e8 = uStack_15c8;
            uStack_19e0 = uStack_15c0;
            uStack_19d8 = uStack_15b8;
            uStack_19d0 = uStack_15b0;
            uStack_19c8 = uStack_15a8;
            uStack_19c0 = uStack_15a0;
            uStack_19b8 = uStack_1598;
            uStack_19b0 = uStack_1590;
            uStack_19a8 = uStack_1588;
            FUN_101649fa8(&lStack_1660,&lStack_1bd0,0x112dbc248,&UNK_10d973548);
            FUN_101649fa8(&lStack_15f0,&lStack_1bd0,0x112dbc248,&UNK_10d973548);
            uVar13 = 0x112dbc250;
            puVar10 = &UNK_10d973550;
            goto LAB_101647c74;
          }
          lStack_1a38 = *(undefined8 *)(param_1 + 0x470);
          lStack_1a40 = *(undefined8 *)(param_1 + 0x468);
          uStack_1a28 = *(undefined8 *)(param_1 + 0x480);
          lStack_1a30 = *(undefined8 *)(param_1 + 0x478);
          lStack_1a18 = *(undefined8 *)(param_1 + 0x490);
          lStack_1a20 = *(long *)(param_1 + 0x488);
          lStack_1a78 = *(undefined8 *)(param_1 + 0x430);
          lStack_1a80 = *plVar7;
          lStack_1a68 = *(undefined8 *)(param_1 + 0x440);
          uStack_1a70 = *(undefined8 *)(param_1 + 0x438);
          uStack_1a58 = *(undefined8 *)(param_1 + 0x450);
          uStack_1a60 = *(undefined8 *)(param_1 + 0x448);
          uStack_1a48 = *(undefined8 *)(param_1 + 0x460);
          uStack_1a50 = *(undefined8 *)(param_1 + 0x458);
          FUN_101649fa8(&lStack_1660,&lStack_1bd0,0x112dbc248,&UNK_10d973548);
          FUN_101649fa8(&lStack_15f0,&lStack_1bd0,0x112dbc248,&UNK_10d973548);
          FUN_10164af34(&lStack_1a80,0x112dbc248,&UNK_10d973548);
        }
        else {
          if (lStack_19f8 == 1) goto LAB_1016490cc;
          uStack_1b88 = *(undefined8 *)(param_2 + 0x470);
          uStack_1b90 = *(undefined8 *)(param_2 + 0x468);
          uStack_1b78 = *(undefined8 *)(param_2 + 0x480);
          uStack_1b80 = *(undefined8 *)(param_2 + 0x478);
          uStack_1b68 = *(undefined8 *)(param_2 + 0x490);
          lStack_1b70 = *(long *)(param_2 + 0x488);
          uStack_1bc8 = *(undefined8 *)(param_2 + 0x430);
          lStack_1bd0 = *plVar1;
          uStack_1bb8 = *(undefined8 *)(param_2 + 0x440);
          uStack_1bc0 = *(undefined8 *)(param_2 + 0x438);
          uStack_1ba8 = *(undefined8 *)(param_2 + 0x450);
          uStack_1bb0 = *(undefined8 *)(param_2 + 0x448);
          uStack_1b98 = *(undefined8 *)(param_2 + 0x460);
          uStack_1ba0 = *(undefined8 *)(param_2 + 0x458);
          uStack_1cd8 = *(undefined8 *)(param_1 + 0x470);
          uStack_1ce0 = *(undefined8 *)(param_1 + 0x468);
          uStack_1cc8 = *(undefined8 *)(param_1 + 0x480);
          uStack_1cd0 = *(undefined8 *)(param_1 + 0x478);
          uStack_1cb8 = *(undefined8 *)(param_1 + 0x490);
          uStack_1cc0 = *(undefined8 *)(param_1 + 0x488);
          uStack_1d18 = *(undefined8 *)(param_1 + 0x430);
          lStack_1d20 = *plVar7;
          uStack_1d08 = *(undefined8 *)(param_1 + 0x440);
          uStack_1d10 = *(undefined8 *)(param_1 + 0x438);
          uStack_1cf8 = *(undefined8 *)(param_1 + 0x450);
          uStack_1d00 = *(undefined8 *)(param_1 + 0x448);
          uStack_1ce8 = *(undefined8 *)(param_1 + 0x460);
          uStack_1cf0 = *(undefined8 *)(param_1 + 0x458);
          lStack_1a80 = lStack_1bd0;
          lStack_1a78 = uStack_1bc8;
          uStack_1a70 = uStack_1bc0;
          lStack_1a68 = uStack_1bb8;
          uStack_1a60 = uStack_1bb0;
          uStack_1a58 = uStack_1ba8;
          uStack_1a50 = uStack_1ba0;
          uStack_1a48 = uStack_1b98;
          lStack_1a40 = uStack_1b90;
          lStack_1a38 = uStack_1b88;
          lStack_1a30 = uStack_1b80;
          uStack_1a28 = uStack_1b78;
          lStack_1a20 = lStack_1b70;
          lStack_1a18 = uStack_1b68;
          FUN_101649fa8(&lStack_1660,&lStack_1930,0x112dbc248,&UNK_10d973548);
          FUN_101649fa8(&lStack_15f0,&lStack_1930,0x112dbc248,&UNK_10d973548);
          plVar7 = &lStack_1d20;
          FUN_10165b500(plVar7,&lStack_1bd0);
          FUN_10164af34(&lStack_1a80,0x112dbc248,&UNK_10d973548);
          FUN_10164af34(&lStack_c40,0x112dbc248,&UNK_10d973548);
          if (((ulong)plVar7 & 1) == 0) {
            return 0;
          }
        }
        func_0x000107c61428(param_1 + 0x498,auStack_16a8,0,0);
        cVar2 = *(char *)(param_1 + 0x498);
        func_0x000107c61428(param_2 + 0x498,auStack_16c0,0,0);
        if (cVar2 != *(char *)(param_2 + 0x498)) {
          return 0;
        }
        func_0x000107c61428(param_1 + 0x4a0,auStack_16d8,0,0);
        func_0x000107c61428(param_2 + 0x4a0,auStack_16f0,0,0);
        lVar22 = *(long *)(param_1 + 0x4a0);
        uVar16 = *(undefined8 *)(param_1 + 0x4a8);
        lVar14 = *(long *)(param_1 + 0x4b0);
        uVar11 = *(undefined8 *)(param_1 + 0x4b8);
        uVar17 = *(undefined8 *)(param_1 + 0x4c0);
        uVar13 = *(undefined8 *)(param_2 + 0x4a0);
        uVar21 = *(undefined8 *)(param_2 + 0x4a8);
        lVar12 = *(long *)(param_2 + 0x4b0);
        uVar25 = *(undefined8 *)(param_2 + 0x4b8);
        uVar24 = *(undefined8 *)(param_2 + 0x4c0);
        if (lVar14 == 0) {
          if (lVar12 == 0) {
            func_0x000101541428(lVar22,uVar16,0,uVar11,uVar17);
            func_0x000101541428(uVar13,uVar21,0,uVar25,uVar24);
            FUN_101553bdc(lVar22,uVar16,0,uVar11,uVar17);
            goto LAB_1016493c4;
          }
        }
        else if (lVar12 != 0) {
          uStack_580 = (undefined1)uVar21;
          uStack_5a8 = (undefined1)uVar16;
          lStack_5b0 = lVar22;
          lStack_5a0 = lVar14;
          uStack_598 = uVar11;
          uStack_590 = uVar17;
          uStack_588 = uVar13;
          lStack_578 = lVar12;
          uStack_570 = uVar25;
          uStack_568 = uVar24;
          func_0x000101541428(lVar22,uVar16,lVar14,uVar11,uVar17);
          func_0x000101541428(uVar13,uVar21,lVar12,uVar25,uVar24);
          plVar7 = &lStack_5b0;
          func_0x00010368c758(plVar7,&uStack_588);
          FUN_101553bdc(uVar13,uVar21,lVar12,uVar25,uVar24);
          FUN_101553bdc(lVar22,uVar16,lVar14,uVar11,uVar17);
          if (((ulong)plVar7 & 1) == 0) {
            return 0;
          }
LAB_1016493c4:
          func_0x000107c61428(param_1 + 0x4c8,auStack_1708,0,0);
          func_0x000107c61428(param_2 + 0x4c8,auStack_1720,0,0);
          lVar22 = *(long *)(param_1 + 0x4c8);
          uVar16 = *(undefined8 *)(param_1 + 0x4d0);
          lVar14 = *(long *)(param_1 + 0x4d8);
          uVar11 = *(undefined8 *)(param_1 + 0x4e0);
          uVar17 = *(undefined8 *)(param_1 + 0x4e8);
          uVar13 = *(undefined8 *)(param_2 + 0x4c8);
          uVar21 = *(undefined8 *)(param_2 + 0x4d0);
          lVar12 = *(long *)(param_2 + 0x4d8);
          uVar25 = *(undefined8 *)(param_2 + 0x4e0);
          uVar24 = *(undefined8 *)(param_2 + 0x4e8);
          if (lVar14 == 0) {
            if (lVar12 == 0) {
              func_0x000101541428(lVar22,uVar16,0,uVar11,uVar17);
              func_0x000101541428(uVar13,uVar21,0,uVar25,uVar24);
              FUN_101553bdc(lVar22,uVar16,0,uVar11,uVar17);
              goto LAB_10164957c;
            }
          }
          else if (lVar12 != 0) {
            uStack_5d0 = (undefined1)uVar21;
            uStack_5f8 = (undefined1)uVar16;
            lStack_600 = lVar22;
            lStack_5f0 = lVar14;
            uStack_5e8 = uVar11;
            uStack_5e0 = uVar17;
            uStack_5d8 = uVar13;
            lStack_5c8 = lVar12;
            uStack_5c0 = uVar25;
            uStack_5b8 = uVar24;
            func_0x000101541428(lVar22,uVar16,lVar14,uVar11,uVar17);
            func_0x000101541428(uVar13,uVar21,lVar12,uVar25,uVar24);
            plVar7 = &lStack_600;
            func_0x00010368c758(plVar7,&uStack_5d8);
            FUN_101553bdc(uVar13,uVar21,lVar12,uVar25,uVar24);
            FUN_101553bdc(lVar22,uVar16,lVar14,uVar11,uVar17);
            if (((ulong)plVar7 & 1) == 0) {
              return 0;
            }
LAB_10164957c:
            func_0x000107c61428(param_1 + 0x4f0,auStack_1738,0,0);
            uVar18 = *(ulong *)(param_1 + 0x4f0);
            func_0x000107c61428(param_2 + 0x4f0,auStack_1750,0,0);
            uVar13 = *(undefined8 *)(param_2 + 0x4f0);
            func_0x000107c61434(uVar18);
            func_0x000107c61434(uVar13);
            uVar9 = uVar18;
            FUN_101649d00(uVar18,uVar13);
            func_0x000107c6142c(uVar18);
            func_0x000107c6142c(uVar13);
            if ((uVar9 & 1) == 0) {
              return 0;
            }
            plVar7 = (long *)(param_1 + 0x4f8);
            func_0x000107c61428(plVar7,auStack_1808,0,0);
            plVar1 = (long *)(param_2 + 0x4f8);
            func_0x000107c61428(plVar1,auStack_1820,0,0);
            uStack_1760 = *(undefined8 *)(param_2 + 0x538);
            uStack_17c8 = *(undefined8 *)(param_1 + 0x520);
            lStack_17d0 = *(long *)(param_1 + 0x518);
            uStack_17b8 = *(undefined8 *)(param_1 + 0x530);
            uStack_17c0 = *(undefined8 *)(param_1 + 0x528);
            lStack_17b0 = *(long *)(param_1 + 0x538);
            lStack_17e8 = *(long *)(param_1 + 0x500);
            lStack_17f0 = *plVar7;
            lStack_17d8 = *(long *)(param_1 + 0x510);
            uStack_17e0 = *(undefined8 *)(param_1 + 0x508);
            uStack_1798 = *(undefined8 *)(param_2 + 0x500);
            lStack_17a0 = *plVar1;
            lStack_be0 = *(long *)(param_2 + 0x510);
            uStack_be8 = *(undefined8 *)(param_2 + 0x508);
            uStack_1778 = *(undefined8 *)(param_2 + 0x520);
            uStack_1780 = *(undefined8 *)(param_2 + 0x518);
            uStack_1768 = *(undefined8 *)(param_2 + 0x530);
            uStack_1770 = *(undefined8 *)(param_2 + 0x528);
            uStack_1788 = *(undefined8 *)(param_2 + 0x510);
            uStack_1790 = *(undefined8 *)(param_2 + 0x508);
            lStack_1a10 = *(long *)(param_2 + 0x520);
            lStack_bd8 = *(long *)(param_2 + 0x518);
            lStack_bf0 = *(long *)(param_2 + 0x500);
            lStack_bf8 = *plVar1;
            uStack_1a00 = *(ulong *)(param_2 + 0x530);
            uStack_1a08 = *(undefined8 *)(param_2 + 0x528);
            lStack_19f8 = *(long *)(param_2 + 0x538);
            lStack_c40 = lStack_17f0;
            lStack_c38 = lStack_17e8;
            lStack_c30 = uStack_17e0;
            lStack_c28 = lStack_17d8;
            uStack_c20 = lStack_17d0;
            uStack_c18 = uStack_17c8;
            uStack_c10 = uStack_17c0;
            lStack_c08 = uStack_17b8;
            lStack_c00 = lStack_17b0;
            lStack_bd0 = lStack_1a10;
            uStack_bc8 = uStack_1a08;
            uStack_bc0 = uStack_1a00;
            lStack_bb8 = lStack_19f8;
            if (lStack_17e8 == 0) {
              if (lStack_bf0 == 0) {
                uStack_1a58 = *(undefined8 *)(param_1 + 0x520);
                uStack_1a60 = *(undefined8 *)(param_1 + 0x518);
                uStack_1a48 = *(undefined8 *)(param_1 + 0x530);
                uStack_1a50 = *(undefined8 *)(param_1 + 0x528);
                lStack_1a40 = *(undefined8 *)(param_1 + 0x538);
                lStack_1a78 = *(undefined8 *)(param_1 + 0x500);
                lStack_1a80 = *plVar7;
                lStack_1a68 = *(undefined8 *)(param_1 + 0x510);
                uStack_1a70 = *(undefined8 *)(param_1 + 0x508);
                FUN_101649fa8(&lStack_17f0,&lStack_1930,0x112dbc258,&UNK_10d973558);
                FUN_101649fa8(&lStack_17a0,&lStack_1930,0x112dbc258,&UNK_10d973558);
                FUN_10164af34(&lStack_1a80,0x112dbc258,&UNK_10d973558);
                return 1;
              }
            }
            else if (lStack_bf0 != 0) {
              uStack_1a58 = *(undefined8 *)(param_2 + 0x520);
              uStack_1a60 = *(undefined8 *)(param_2 + 0x518);
              uStack_1a48 = *(undefined8 *)(param_2 + 0x530);
              uStack_1a50 = *(undefined8 *)(param_2 + 0x528);
              lStack_1a40 = *(undefined8 *)(param_2 + 0x538);
              lStack_1a78 = *(undefined8 *)(param_2 + 0x500);
              lStack_1a80 = *plVar1;
              lStack_1a68 = *(undefined8 *)(param_2 + 0x510);
              uStack_1a70 = *(undefined8 *)(param_2 + 0x508);
              uStack_1928 = *(undefined8 *)(param_1 + 0x500);
              lStack_1930 = *plVar7;
              uStack_1918 = *(undefined8 *)(param_1 + 0x510);
              uStack_1920 = *(undefined8 *)(param_1 + 0x508);
              uStack_1908 = *(undefined8 *)(param_1 + 0x520);
              uStack_1910 = *(undefined8 *)(param_1 + 0x518);
              uStack_18f8 = *(undefined8 *)(param_1 + 0x530);
              uStack_1900 = *(undefined8 *)(param_1 + 0x528);
              uStack_18f0 = *(undefined8 *)(param_1 + 0x538);
              lStack_1870 = lStack_1a80;
              uStack_1868 = lStack_1a78;
              uStack_1860 = uStack_1a70;
              uStack_1858 = lStack_1a68;
              uStack_1850 = uStack_1a60;
              uStack_1848 = uStack_1a58;
              uStack_1840 = uStack_1a50;
              uStack_1838 = uStack_1a48;
              uStack_1830 = lStack_1a40;
              FUN_101649fa8(&lStack_17f0,auStack_18b8,0x112dbc258,&UNK_10d973558);
              FUN_101649fa8(&lStack_17a0,auStack_18b8,0x112dbc258,&UNK_10d973558);
              plVar7 = &lStack_1930;
              FUN_10164b4c0(plVar7,&lStack_1a80);
              FUN_10164af34(&lStack_1870,0x112dbc258,&UNK_10d973558);
              FUN_10164af34(&lStack_c40,0x112dbc258,&UNK_10d973558);
              if (((ulong)plVar7 & 1) == 0) {
                return 0;
              }
              return 1;
            }
            lStack_1a80 = lStack_17f0;
            lStack_1a78 = lStack_17e8;
            uStack_1a70 = uStack_17e0;
            lStack_1a68 = lStack_17d8;
            uStack_1a60 = lStack_17d0;
            uStack_1a58 = uStack_17c8;
            uStack_1a50 = uStack_17c0;
            uStack_1a48 = uStack_17b8;
            lStack_1a40 = lStack_17b0;
            lStack_1a38 = lStack_bf8;
            lStack_1a30 = lStack_bf0;
            uStack_1a28 = uStack_be8;
            lStack_1a20 = lStack_be0;
            lStack_1a18 = lStack_bd8;
            FUN_101649fa8(&lStack_17f0,&lStack_1930,0x112dbc258,&UNK_10d973558);
            FUN_101649fa8(&lStack_17a0,&lStack_1930,0x112dbc258,&UNK_10d973558);
            uVar13 = 0x112dbc260;
            puVar10 = &UNK_10d973560;
LAB_101647c74:
            FUN_10164af34(&lStack_1a80,uVar13,puVar10);
            return 0;
          }
        }
        lStack_c40 = lVar22;
        lStack_c38 = uVar16;
        lStack_c30 = lVar14;
        lStack_c28 = uVar11;
        uStack_c20 = uVar17;
        uStack_c18 = uVar13;
        uStack_c10 = uVar21;
        lStack_c08 = lVar12;
        lStack_c00 = uVar25;
        lStack_bf8 = uVar24;
        func_0x000101541428(lVar22,uVar16,lVar14,uVar11,uVar17);
LAB_101647ec4:
        func_0x000101541428(uVar13,uVar21,lVar12,uVar25,uVar24);
        FUN_10164af34(&lStack_c40,0x112db80d8,&UNK_10d969640);
        return 0;
      }
    }
    else if ((uVar18 & 0xff) != 2) {
      FUN_100cb70b4(uVar9,uVar15,uVar17);
      FUN_100cb70b4(uVar18,uVar23,uVar13);
      if ((((uint)uVar18 ^ (uint)uVar9) & 1) == 0) {
        FUN_100e25fcc(uVar15,uVar17,uVar23,uVar13);
        func_0x000100cb70d0(uVar18,uVar23,uVar13);
        if ((uVar8 & 1) == 0) goto LAB_101647bd0;
        goto LAB_10164790c;
      }
LAB_101647b84:
      func_0x000100cb70d0(uVar18,uVar23,uVar13);
      goto LAB_101647bd0;
    }
LAB_101647b1c:
    uVar9 = uVar18;
    uVar15 = uVar23;
    uVar17 = uVar13;
    FUN_100cb70b4(uVar20,uVar8,uVar21);
    FUN_100cb70b4(uVar9,uVar15,uVar17);
    func_0x000100cb70d0(uVar20,uVar8,uVar21);
LAB_101647bd0:
    func_0x000100cb70d0(uVar9,uVar15,uVar17);
    return 0;
  }
  FUN_101644064(lVar12,uVar15,uVar9,uVar23,uVar13);
  FUN_101644064(lVar14,uVar8,uVar18,uVar20,uVar21);
  func_0x000100cb711c(lVar12,uVar15,uVar9,uVar23,uVar13);
  lVar12 = lVar14;
  uVar15 = uVar8;
  uVar9 = uVar18;
  uVar23 = uVar20;
  uVar13 = uVar21;
LAB_10164767c:
  func_0x000100cb711c(lVar12,uVar15,uVar9,uVar23,uVar13);
  return 0;
}



/* Entry: 101649860; end: 1016498bf;  */

void FUN_101649860(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112dbc268 != -1) {
    func_0x000107c61568(0x112dbc268,FUN_101642ef0);
  }
  uVar1 = uRam0000000112dbc270;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1016498c0; end: 1016498e3;  */

undefined1  [16] FUN_1016498c0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb3d50;
  auVar1._0_8_ = 0xd00000000000002c;
  return auVar1;
}



/* Entry: 1016498e4; end: 101649913;  */

undefined1  [16] FUN_1016498e4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 101649914; end: 101649947;  */

void FUN_101649914(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}


