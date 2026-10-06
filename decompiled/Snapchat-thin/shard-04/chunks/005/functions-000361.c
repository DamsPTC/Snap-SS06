/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10360c810; end: 10360c84f;  */

void FUN_10360c810(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7df48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe7eb0;
  func_0x000107c61520(&UNK_10dbe7eb0,&UNK_11066dd50);
  puRam0000000112f7df48 = puVar1;
  return;
}



/* Entry: 10360c850; end: 10360c87b;  */

void FUN_10360c850(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10360c7ac();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035e0eb8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10360c87c; end: 10360c87f;  */

void FUN_10360c87c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7df50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe7f18;
  func_0x000107c61520(&UNK_10dbe7f18,&UNK_11066dd50);
  puRam0000000112f7df50 = puVar1;
  return;
}



/* Entry: 10360c880; end: 10360c8bf;  */

void FUN_10360c880(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7df50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe7f18;
  func_0x000107c61520(&UNK_10dbe7f18,&UNK_11066dd50);
  puRam0000000112f7df50 = puVar1;
  return;
}



/* Entry: 10360c8c0; end: 10360c937;  */

long FUN_10360c8c0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10360c938; end: 10360cadf;  */

undefined8 * FUN_10360c938(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  uVar3 = param_2[4];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar3);
  param_1[3] = uVar1;
  param_1[4] = uVar3;
  uVar2 = param_2[7];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar1 = param_2[6];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[6] = uVar1;
    param_1[7] = uVar2;
  }
  else {
    uVar1 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar1;
    param_1[7] = param_2[7];
  }
  return param_1;
}



/* Entry: 10360cae0; end: 10360cb87;  */

undefined8 * FUN_10360cae0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[3];
  uVar1 = param_1[4];
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    uVar3 = param_2[7];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
      uVar2 = param_1[6];
      param_1[6] = param_2[6];
      param_1[7] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    func_0x0001015d4290(param_1 + 5);
  }
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  param_1[7] = param_2[7];
  return param_1;
}



/* Entry: 10360cb88; end: 10360cc2f;  */

int FUN_10360cb88(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10360cc30; end: 10360cc6f;  */

void FUN_10360cc30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7df60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe7e84;
  func_0x000107c61520(&DAT_10dbe7e84,&UNK_11066dd50);
  puRam0000000112f7df60 = puVar1;
  return;
}



/* Entry: 10360cc70; end: 10360ce17;  */

void FUN_10360cc70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [80];
  undefined1 auStack_f8 [24];
  undefined4 uStack_e0;
  undefined3 uStack_dc;
  undefined4 uStack_d8;
  undefined3 uStack_d4;
  undefined4 uStack_d0;
  undefined3 uStack_cc;
  undefined4 uStack_c8;
  undefined3 uStack_c4;
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
  
  func_0x000107c61428(param_4 + 0x10,auStack_f8,0,0);
  uStack_88 = *(undefined8 *)(param_4 + 0x48);
  uStack_90 = *(undefined8 *)(param_4 + 0x40);
  uStack_78 = *(ulong *)(param_4 + 0x58);
  uStack_80 = *(undefined8 *)(param_4 + 0x50);
  uStack_b8 = *(undefined8 *)(param_4 + 0x18);
  uStack_c0 = *(undefined8 *)(param_4 + 0x10);
  uStack_a8 = *(undefined8 *)(param_4 + 0x28);
  uStack_b0 = *(undefined8 *)(param_4 + 0x20);
  uStack_98 = *(undefined8 *)(param_4 + 0x38);
  uStack_a0 = *(undefined8 *)(param_4 + 0x30);
  if (uStack_78 >> 0x3c < 0xf) {
    uStack_c8._0_3_ = (undefined3)*(undefined4 *)(param_4 + 0x19);
    uStack_c8._3_1_ = (undefined1)*(undefined4 *)(param_4 + 0x1c);
    uStack_c4 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x1c) >> 8);
    uStack_d0._0_3_ = (undefined3)*(undefined4 *)(param_4 + 0x29);
    uStack_d0._3_1_ = (undefined1)*(undefined4 *)(param_4 + 0x2c);
    uStack_cc = (undefined3)((uint)*(undefined4 *)(param_4 + 0x2c) >> 8);
    uStack_d4 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x3c) >> 8);
    uStack_d8 = *(undefined4 *)(param_4 + 0x39);
    uStack_dc = (undefined3)((uint)*(undefined4 *)(param_4 + 0x4c) >> 8);
    uStack_e0 = *(undefined4 *)(param_4 + 0x49);
    uVar1 = uStack_80;
    uVar2 = uStack_78;
    uVar5 = uStack_a0;
    uVar7 = uStack_90;
    uVar6 = (undefined1)uStack_b8;
    uVar8 = (undefined1)uStack_a8;
    uVar3 = (undefined1)uStack_98;
    uVar4 = (undefined1)uStack_88;
    uStack_158 = uStack_b0;
    uStack_150 = uStack_c0;
  }
  else {
    uStack_158 = 0;
    uStack_150 = 0;
    uVar1 = 0;
    uVar2 = 0xc000000000000000;
    uVar5 = 0;
    uVar7 = 0;
    uVar6 = 1;
    uVar8 = 1;
    uVar3 = 1;
    uVar4 = 1;
  }
  FUN_1036204f0(&uStack_c0,auStack_148,0x112db6370,&UNK_10d961e38);
  *param_1 = uStack_150;
  *(undefined1 *)(param_1 + 1) = uVar6;
  *(undefined4 *)((long)param_1 + 9) = uStack_c8;
  *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_c4,uStack_c8._3_1_);
  param_1[2] = uStack_158;
  *(undefined1 *)(param_1 + 3) = uVar8;
  *(undefined4 *)((long)param_1 + 0x19) = uStack_d0;
  *(uint *)((long)param_1 + 0x1c) = CONCAT31(uStack_cc,uStack_d0._3_1_);
  param_1[4] = uVar5;
  *(undefined1 *)(param_1 + 5) = uVar3;
  *(uint *)((long)param_1 + 0x2c) = CONCAT31(uStack_d4,uStack_d8._3_1_);
  *(undefined4 *)((long)param_1 + 0x29) = uStack_d8;
  param_1[6] = uVar7;
  *(undefined1 *)(param_1 + 7) = uVar4;
  *(uint *)((long)param_1 + 0x3c) = CONCAT31(uStack_dc,uStack_e0._3_1_);
  *(undefined4 *)((long)param_1 + 0x39) = uStack_e0;
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  return;
}



/* Entry: 10360ce18; end: 10360cf03;  */

void FUN_10360ce18(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_f8 [24];
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
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_10360cf04(0);
    func_0x000107c613fc();
    FUN_10360f204();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  func_0x000107c61428(lVar2 + 0x10,auStack_f8,1,0);
  uStack_78 = *(undefined8 *)(lVar2 + 0x28);
  uStack_80 = *(undefined8 *)(lVar2 + 0x20);
  uStack_68 = *(undefined8 *)(lVar2 + 0x38);
  uStack_70 = *(undefined8 *)(lVar2 + 0x30);
  uStack_58 = *(undefined8 *)(lVar2 + 0x48);
  uStack_60 = *(undefined8 *)(lVar2 + 0x40);
  uStack_48 = *(undefined8 *)(lVar2 + 0x58);
  uStack_50 = *(undefined8 *)(lVar2 + 0x50);
  uStack_88 = *(undefined8 *)(lVar2 + 0x18);
  uStack_90 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x48) = uStack_a8;
  *(undefined8 *)(lVar2 + 0x40) = uStack_b0;
  *(undefined8 *)(lVar2 + 0x58) = uStack_98;
  *(undefined8 *)(lVar2 + 0x50) = uStack_a0;
  *(undefined8 *)(lVar2 + 0x28) = uStack_c8;
  *(undefined8 *)(lVar2 + 0x20) = uStack_d0;
  *(undefined8 *)(lVar2 + 0x38) = uStack_b8;
  *(undefined8 *)(lVar2 + 0x30) = uStack_c0;
  *(undefined8 *)(lVar2 + 0x18) = uStack_d8;
  *(undefined8 *)(lVar2 + 0x10) = uStack_e0;
  func_0x000103620538(&uStack_90,0x112db6370,&UNK_10d961e38);
  return;
}



/* Entry: 10360cf04; end: 10360cf23;  */

void FUN_10360cf04(void)

{
  func_0x000107c61168(&PTR_PTR_112f80120);
  return;
}



/* Entry: 10360cf24; end: 10360cfe3;  */

undefined8 FUN_10360cf24(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x60,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x60);
  uVar2 = *(undefined8 *)(param_3 + 0x68);
  lVar3 = *(long *)(param_3 + 0x70);
  uVar4 = uVar1;
  if (lVar3 == 0) {
    if (lRam0000000112f7df68 != -1) {
      func_0x000107c61568(0x112f7df68,FUN_103616bf8);
    }
    func_0x000107c6157c(uRam0000000112f7df70);
    uVar4 = 0;
  }
  FUN_10361fde8(uVar1,uVar2,lVar3);
  return uVar4;
}



/* Entry: 10360cfe4; end: 10360cfff;  */

undefined8 FUN_10360cfe4(void)

{
  if (lRam0000000112f7df68 != -1) {
    func_0x000107c61568(0x112f7df68,FUN_103616bf8);
  }
  func_0x000107c6157c(uRam0000000112f7df70);
  return 0;
}



/* Entry: 10360d000; end: 10360d0a3;  */

void FUN_10360d000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_10360cf04(0);
    func_0x000107c613fc();
    FUN_10360f204(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x60,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x60);
  uVar1 = *(undefined8 *)(lVar5 + 0x68);
  uVar4 = *(undefined8 *)(lVar5 + 0x70);
  *(undefined8 *)(lVar5 + 0x60) = param_1;
  *(undefined8 *)(lVar5 + 0x68) = param_2;
  *(undefined8 *)(lVar5 + 0x70) = param_3;
  func_0x00010361fe14(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 10360d0a4; end: 10360d143;  */

bool FUN_10360d0a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x60,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x60);
  uVar2 = *(undefined8 *)(param_3 + 0x68);
  lVar3 = *(long *)(param_3 + 0x70);
  if (lVar3 == 0) {
    FUN_10361fde8(uVar1,uVar2,0);
  }
  else {
    FUN_10361fde8(uVar1,uVar2,lVar3);
    func_0x00010361fe14(uVar1,uVar2,lVar3);
    uVar1 = 0;
    uVar2 = 0;
  }
  func_0x00010361fe14(uVar1,uVar2,0);
  return lVar3 != 0;
}



/* Entry: 10360d144; end: 10360d33b;  */

void FUN_10360d144(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [96];
  undefined1 auStack_110 [24];
  undefined4 uStack_f8;
  undefined3 uStack_f4;
  undefined4 uStack_f0;
  undefined3 uStack_ec;
  undefined4 uStack_e8;
  undefined3 uStack_e4;
  undefined4 uStack_e0;
  undefined3 uStack_dc;
  undefined4 uStack_d8;
  undefined3 uStack_d4;
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
  
  func_0x000107c61428(param_4 + 0x78,auStack_110,0,0);
  uStack_78 = *(ulong *)(param_4 + 0xd0);
  uStack_80 = *(undefined8 *)(param_4 + 200);
  uStack_a8 = *(undefined8 *)(param_4 + 0xa0);
  uStack_b0 = *(undefined8 *)(param_4 + 0x98);
  uStack_98 = *(undefined8 *)(param_4 + 0xb0);
  uStack_a0 = *(undefined8 *)(param_4 + 0xa8);
  uStack_88 = *(undefined8 *)(param_4 + 0xc0);
  uStack_90 = *(undefined8 *)(param_4 + 0xb8);
  uStack_c8 = *(undefined8 *)(param_4 + 0x80);
  uStack_d0 = *(undefined8 *)(param_4 + 0x78);
  uStack_b8 = *(undefined8 *)(param_4 + 0x90);
  uStack_c0 = *(undefined8 *)(param_4 + 0x88);
  if (uStack_78 >> 0x3c < 0xf) {
    uStack_d8._0_3_ = (undefined3)*(undefined4 *)(param_4 + 0x81);
    uStack_d8._3_1_ = (undefined1)*(undefined4 *)(param_4 + 0x84);
    uStack_d4 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x84) >> 8);
    uStack_e0._0_3_ = (undefined3)*(undefined4 *)(param_4 + 0x91);
    uStack_e0._3_1_ = (undefined1)*(undefined4 *)(param_4 + 0x94);
    uStack_dc = (undefined3)((uint)*(undefined4 *)(param_4 + 0x94) >> 8);
    uStack_e4 = (undefined3)((uint)*(undefined4 *)(param_4 + 0xa4) >> 8);
    uStack_e8 = *(undefined4 *)(param_4 + 0xa1);
    uStack_ec = (undefined3)((uint)*(undefined4 *)(param_4 + 0xb4) >> 8);
    uStack_f0 = *(undefined4 *)(param_4 + 0xb1);
    uStack_f4 = (undefined3)((uint)*(undefined4 *)(param_4 + 0xc4) >> 8);
    uStack_f8 = *(undefined4 *)(param_4 + 0xc1);
    uVar2 = uStack_80;
    uVar3 = uStack_78;
    uVar8 = uStack_a0;
    uVar9 = uStack_90;
    uVar4 = (undefined1)uStack_b8;
    uVar5 = (undefined1)uStack_a8;
    uVar6 = (undefined1)uStack_98;
    uVar7 = (undefined1)uStack_88;
    uStack_188 = uStack_b0;
    uStack_180 = uStack_c0;
    uStack_178 = uStack_d0;
    uVar1 = (undefined1)uStack_c8;
  }
  else {
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_188 = 0;
    uVar2 = 0;
    uVar3 = 0xc000000000000000;
    uVar8 = 0;
    uVar9 = 0;
    uVar4 = 1;
    uVar5 = 1;
    uVar6 = 1;
    uVar7 = 1;
    uVar1 = 1;
  }
  FUN_1036204f0(&uStack_d0,auStack_170,0x112f7df78,&UNK_10dbe8038);
  *param_1 = uStack_178;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined4 *)((long)param_1 + 9) = uStack_d8;
  *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_d4,uStack_d8._3_1_);
  param_1[2] = uStack_180;
  *(undefined1 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((long)param_1 + 0x19) = uStack_e0;
  *(uint *)((long)param_1 + 0x1c) = CONCAT31(uStack_dc,uStack_e0._3_1_);
  param_1[4] = uStack_188;
  *(undefined1 *)(param_1 + 5) = uVar5;
  *(uint *)((long)param_1 + 0x2c) = CONCAT31(uStack_e4,uStack_e8._3_1_);
  *(undefined4 *)((long)param_1 + 0x29) = uStack_e8;
  param_1[6] = uVar8;
  *(undefined1 *)(param_1 + 7) = uVar6;
  *(uint *)((long)param_1 + 0x3c) = CONCAT31(uStack_ec,uStack_f0._3_1_);
  *(undefined4 *)((long)param_1 + 0x39) = uStack_f0;
  param_1[8] = uVar9;
  *(undefined1 *)(param_1 + 9) = uVar7;
  *(uint *)((long)param_1 + 0x4c) = CONCAT31(uStack_f4,uStack_f8._3_1_);
  *(undefined4 *)((long)param_1 + 0x49) = uStack_f8;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  return;
}



/* Entry: 10360d33c; end: 10360d3db;  */

void FUN_10360d33c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0xd8,auStack_68,0,0);
  uVar7 = *(ulong *)(param_4 + 0x100) >> 0x3c;
  uVar1 = 0;
  if (uVar7 < 0xf) {
    uVar1 = *(undefined8 *)(param_4 + 0xd8);
  }
  uVar6 = 1;
  uVar5 = uVar6;
  if (uVar7 < 0xf) {
    uVar5 = (undefined1)*(undefined8 *)(param_4 + 0xe0);
  }
  uVar4 = 0;
  if (uVar7 < 0xf) {
    uVar6 = (undefined1)*(undefined8 *)(param_4 + 0xf0);
    uVar4 = *(undefined8 *)(param_4 + 0xe8);
  }
  uVar2 = 0;
  if (uVar7 < 0xf) {
    uVar2 = *(undefined8 *)(param_4 + 0xf8);
  }
  uVar3 = 0xc000000000000000;
  if (uVar7 < 0xf) {
    uVar3 = *(ulong *)(param_4 + 0x100);
  }
  func_0x000100d56bd0();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = uVar5;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar6;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  return;
}



/* Entry: 10360d3dc; end: 10360d743;  */

void FUN_10360d3dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [24];
  undefined4 uStack_b8;
  undefined3 uStack_b4;
  undefined4 uStack_b0;
  undefined3 uStack_ac;
  undefined4 uStack_a8;
  undefined3 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  func_0x000107c61428((undefined8 *)(param_4 + 0x108),auStack_d0,0,0);
  uStack_98 = *(undefined8 *)(param_4 + 0x110);
  uStack_a0 = *(undefined8 *)(param_4 + 0x108);
  uStack_88 = *(undefined8 *)(param_4 + 0x120);
  uStack_90 = *(undefined8 *)(param_4 + 0x118);
  uStack_78 = *(undefined8 *)(param_4 + 0x130);
  uStack_80 = *(undefined8 *)(param_4 + 0x128);
  uStack_68 = *(ulong *)(param_4 + 0x140);
  uStack_70 = *(undefined8 *)(param_4 + 0x138);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_a4 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x114) >> 8);
    uStack_a8 = *(undefined4 *)(param_4 + 0x111);
    uStack_ac = (undefined3)((uint)*(undefined4 *)(param_4 + 0x124) >> 8);
    uStack_b0 = *(undefined4 *)(param_4 + 0x121);
    uStack_b4 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x134) >> 8);
    uStack_b8 = *(undefined4 *)(param_4 + 0x131);
    uVar1 = uStack_70;
    uVar2 = uStack_68;
    uVar3 = uStack_a0;
    uVar4 = uStack_90;
    uVar6 = uStack_80;
    uVar5 = (undefined1)uStack_98;
    uVar7 = (undefined1)uStack_88;
    uVar8 = (undefined1)uStack_78;
  }
  else {
    uVar1 = 0;
    uVar2 = 0xc000000000000000;
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar5 = 1;
    uVar7 = 1;
    uVar8 = 1;
  }
  FUN_1036204f0(&uStack_a0,auStack_110,0x112f7df88,&UNK_10dbe8048);
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 1) = uVar5;
  *(undefined4 *)((long)param_1 + 9) = uStack_a8;
  *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_a4,uStack_a8._3_1_);
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar7;
  *(undefined4 *)((long)param_1 + 0x19) = uStack_b0;
  *(uint *)((long)param_1 + 0x1c) = CONCAT31(uStack_ac,uStack_b0._3_1_);
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar8;
  *(uint *)((long)param_1 + 0x2c) = CONCAT31(uStack_b4,uStack_b8._3_1_);
  *(undefined4 *)((long)param_1 + 0x29) = uStack_b8;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  return;
}



/* Entry: 10360d744; end: 10360d7bf;  */

undefined8 FUN_10360d744(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x1a8,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0x1c0) >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(param_3 + 0x1a8);
  }
  func_0x000100d56b98();
  return uVar1;
}



/* Entry: 10360d7c0; end: 10360da87;  */

void FUN_10360d7c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [24];
  undefined4 uStack_b8;
  undefined3 uStack_b4;
  undefined4 uStack_b0;
  undefined3 uStack_ac;
  undefined4 uStack_a8;
  undefined3 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  func_0x000107c61428((undefined8 *)(param_4 + 0x1c8),auStack_d0,0,0);
  uStack_98 = *(undefined8 *)(param_4 + 0x1d0);
  uStack_a0 = *(undefined8 *)(param_4 + 0x1c8);
  uStack_88 = *(undefined8 *)(param_4 + 0x1e0);
  uStack_90 = *(undefined8 *)(param_4 + 0x1d8);
  uStack_78 = *(undefined8 *)(param_4 + 0x1f0);
  uStack_80 = *(undefined8 *)(param_4 + 0x1e8);
  uStack_68 = *(ulong *)(param_4 + 0x200);
  uStack_70 = *(undefined8 *)(param_4 + 0x1f8);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_a4 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x1d4) >> 8);
    uStack_a8 = *(undefined4 *)(param_4 + 0x1d1);
    uStack_ac = (undefined3)((uint)*(undefined4 *)(param_4 + 0x1e4) >> 8);
    uStack_b0 = *(undefined4 *)(param_4 + 0x1e1);
    uStack_b4 = (undefined3)((uint)*(undefined4 *)(param_4 + 500) >> 8);
    uStack_b8 = *(undefined4 *)(param_4 + 0x1f1);
    uVar1 = uStack_70;
    uVar2 = uStack_68;
    uVar3 = uStack_a0;
    uVar4 = uStack_90;
    uVar6 = uStack_80;
    uVar5 = (undefined1)uStack_98;
    uVar7 = (undefined1)uStack_88;
    uVar8 = (undefined1)uStack_78;
  }
  else {
    uVar1 = 0;
    uVar2 = 0xc000000000000000;
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar5 = 1;
    uVar7 = 1;
    uVar8 = 1;
  }
  FUN_1036204f0(&uStack_a0,auStack_110,0x112db63a8,&UNK_10d961e70);
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 1) = uVar5;
  *(undefined4 *)((long)param_1 + 9) = uStack_a8;
  *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_a4,uStack_a8._3_1_);
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar7;
  *(undefined4 *)((long)param_1 + 0x19) = uStack_b0;
  *(uint *)((long)param_1 + 0x1c) = CONCAT31(uStack_ac,uStack_b0._3_1_);
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar8;
  *(uint *)((long)param_1 + 0x2c) = CONCAT31(uStack_b4,uStack_b8._3_1_);
  *(undefined4 *)((long)param_1 + 0x29) = uStack_b8;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  return;
}



/* Entry: 10360da88; end: 10360dd1b;  */

undefined8 FUN_10360da88(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x248,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0x260) >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(param_3 + 0x248);
  }
  func_0x000100d56b98();
  return uVar1;
}



/* Entry: 10360dd1c; end: 10360ddc7;  */

void FUN_10360dd1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x308,auStack_68,0,0);
  uVar7 = *(ulong *)(param_4 + 0x330) >> 0x3c;
  uVar1 = 0;
  if (uVar7 < 0xf) {
    uVar1 = *(undefined8 *)(param_4 + 0x308);
  }
  uVar6 = 1;
  uVar5 = uVar6;
  if (uVar7 < 0xf) {
    uVar5 = (undefined1)*(undefined8 *)(param_4 + 0x310);
  }
  uVar4 = 0;
  if (uVar7 < 0xf) {
    uVar6 = (undefined1)*(undefined8 *)(param_4 + 800);
    uVar4 = *(undefined8 *)(param_4 + 0x318);
  }
  uVar2 = 0;
  if (uVar7 < 0xf) {
    uVar2 = *(undefined8 *)(param_4 + 0x328);
  }
  uVar3 = 0xc000000000000000;
  if (uVar7 < 0xf) {
    uVar3 = *(ulong *)(param_4 + 0x330);
  }
  func_0x000100d56bd0();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = uVar5;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar6;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  return;
}



/* Entry: 10360ddc8; end: 10360de4b;  */

undefined8 FUN_10360ddc8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x398,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0x3b0) >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(param_3 + 0x398);
  }
  func_0x000100d56b98();
  return uVar1;
}



/* Entry: 10360de4c; end: 10360de5f;  */

void FUN_10360de4c(void)

{
  return;
}



/* Entry: 10360de60; end: 10360de9f;  */

void FUN_10360de60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7e040;
  func_0x0001000285a8(0x112f7e040,&UNK_10dbe8078);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10360dea0; end: 10360deab;  */

void FUN_10360dea0(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x10362084c)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10360deac; end: 10360deeb;  */

void FUN_10360deac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7e090;
  func_0x0001000285a8(0x112f7e090,&UNK_10dbe8080);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10360deec; end: 10360deff;  */

void FUN_10360deec(void)

{
  return;
}



/* Entry: 10360df00; end: 10360df3f;  */

void FUN_10360df00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7e110;
  func_0x0001000285a8(0x112f7e110,&UNK_10dbe8088);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10360df40; end: 10360df4b;  */

void FUN_10360df40(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103629038)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10360df4c; end: 10360df8b;  */

void FUN_10360df4c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7e160;
  func_0x0001000285a8(0x112f7e160,&UNK_10dbe8090);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10360df8c; end: 10360df97;  */

void FUN_10360df8c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x103629034)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10360df98; end: 10360dfd7;  */

void FUN_10360df98(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7e1e0;
  func_0x0001000285a8(0x112f7e1e0,&UNK_10dbe8098);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10360dfd8; end: 10360dfe3;  */

void FUN_10360dfd8(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103629034)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10360dfe4; end: 10360e023;  */

void FUN_10360dfe4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7e240;
  func_0x0001000285a8(0x112f7e240,&UNK_10dbe80a0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10360e024; end: 10360e02f;  */

void FUN_10360e024(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x10362903c)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10360e030; end: 10360e06f;  */

void FUN_10360e030(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7e2c0;
  func_0x0001000285a8(0x112f7e2c0,&UNK_10dbe80a8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10360e070; end: 10360e07b;  */

void FUN_10360e070(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x10362903c)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10360e07c; end: 10360e0bb;  */

undefined1  [16] FUN_10360e07c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(param_3 + 0x10);
  return auVar1;
}



/* Entry: 10360e0bc; end: 10360e157;  */

void FUN_10360e0bc(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_103620858(0);
    func_0x000107c613fc();
    FUN_103620878();
    func_0x000107c61574(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c61428(lVar2 + 0x10,auStack_58,1,0);
  *(undefined8 *)(lVar2 + 0x10) = param_1;
  *(undefined1 *)(lVar2 + 0x18) = param_2;
  return;
}



/* Entry: 10360e158; end: 10360e197;  */

undefined1  [16] FUN_10360e158(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x20,auStack_38,0,0);
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(param_3 + 0x20);
  return auVar1;
}



/* Entry: 10360e198; end: 10360e233;  */

void FUN_10360e198(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_103620858(0);
    func_0x000107c613fc();
    FUN_103620878();
    func_0x000107c61574(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c61428(lVar2 + 0x20,auStack_58,1,0);
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  *(undefined1 *)(lVar2 + 0x28) = param_2;
  return;
}



/* Entry: 10360e234; end: 10360e2b3;  */

undefined1  [16] FUN_10360e234(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x140,auStack_38,0,0);
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(param_3 + 0x140);
  return auVar1;
}



/* Entry: 10360e2b4; end: 10360e2c7;  */

void FUN_10360e2b4(void)

{
  return;
}



/* Entry: 10360e2c8; end: 10360e307;  */

void FUN_10360e2c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7e370;
  func_0x0001000285a8(0x112f7e370,&UNK_10dbe80b0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10360e308; end: 10360e313;  */

void FUN_10360e308(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103620f08();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10360e314; end: 10360e653;  */

void FUN_10360e314(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7e3c0;
  func_0x0001000285a8(0x112f7e3c0,&UNK_10dbe80b8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10360e654; end: 10360e65f;  */

void FUN_10360e654(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x103629040)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10360e660; end: 10360e69f;  */

void FUN_10360e660(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7e850;
  func_0x0001000285a8(0x112f7e850,&UNK_10dbe8120);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10360e6a0; end: 10360e6ab;  */

void FUN_10360e6a0(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103629040)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10360e6ac; end: 10360e92b;  */

void FUN_10360e6ac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7e8a0;
  func_0x0001000285a8(0x112f7e8a0,&UNK_10dbe8128);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10360e92c; end: 10360e937;  */

void FUN_10360e92c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x103629044)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10360e938; end: 10360e977;  */

void FUN_10360e938(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7ec10;
  func_0x0001000285a8(0x112f7ec10,&UNK_10dbe8178);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10360e978; end: 10360e98f;  */

void FUN_10360e978(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103629044)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10360e990; end: 10360e9cf;  */

void FUN_10360e990(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7ec80;
  func_0x0001000285a8(0x112f7ec80,&UNK_10dbe8180);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10360e9d0; end: 10360e9df;  */

void FUN_10360e9d0(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103629048)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10360e9e0; end: 10360ea9f;  */

void FUN_10360e9e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7ece0;
  func_0x0001000285a8(0x112f7ece0,&UNK_10dbe8188);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10360eaa0; end: 10360eaab;  */

void FUN_10360eaa0(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x10362904c)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10360eaac; end: 10360eb1b;  */

void FUN_10360eaac(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10360eb1c; end: 10360eb27;  */

void FUN_10360eb1c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x10362904c)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10360eb28; end: 10360ef83;  */

void FUN_10360eb28(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10360ef84; end: 10360efdb;  */

bool FUN_10360ef84(ulong *param_1,ulong *param_2)

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



/* Entry: 10360efdc; end: 10360f02b;  */

undefined8 FUN_10360efdc(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  if (*param_1 != -1) {
    func_0x000107c61568(param_1,param_3);
  }
  func_0x000107c6157c(*param_2);
  return 0;
}



/* Entry: 10360f02c; end: 10360f073;  */

void FUN_10360f02c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbee7c0,0x14a,2);
  uRam00000001138099e8 = uStack_38;
  uRam00000001138099e0 = uStack_40;
  uRam00000001138099f8 = uStack_28;
  uRam00000001138099f0 = uStack_30;
  uRam0000000113809a08 = uStack_18;
  uRam0000000113809a00 = uStack_20;
  return;
}



/* Entry: 10360f074; end: 10360f203;  */

void FUN_10360f074(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10360cf04();
  func_0x000107c613fc();
  (*(code *)0x10360f094)();
  uRam0000000112f7f220 = uVar1;
  return;
}



/* Entry: 10360f204; end: 1036100cf;  */

void FUN_10360f204(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
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
  undefined1 auStack_7b8 [24];
  undefined1 auStack_7a0 [24];
  undefined1 auStack_788 [24];
  undefined1 auStack_770 [24];
  undefined1 auStack_758 [24];
  undefined1 auStack_740 [24];
  undefined1 auStack_728 [24];
  undefined1 auStack_710 [24];
  undefined1 auStack_6f8 [24];
  undefined1 auStack_6e0 [24];
  undefined1 auStack_6c8 [24];
  undefined1 auStack_6b0 [24];
  undefined1 auStack_698 [24];
  undefined1 auStack_680 [24];
  undefined1 auStack_668 [24];
  undefined1 auStack_650 [24];
  undefined1 auStack_638 [24];
  undefined1 auStack_620 [64];
  undefined1 auStack_5e0 [24];
  undefined1 auStack_5c8 [24];
  undefined1 auStack_5b0 [24];
  undefined1 auStack_598 [24];
  undefined1 auStack_580 [24];
  undefined1 auStack_568 [24];
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 auStack_4f0 [24];
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
  
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  puVar17 = (undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *puVar17 = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  puVar12 = (undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *puVar12 = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  puVar5 = (undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *puVar5 = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0xf000000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + 0x108);
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0xf000000000000000;
  puVar2 = (undefined8 *)(unaff_x20 + 0x148);
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *puVar2 = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0xf000000000000000;
  puVar3 = (undefined8 *)(unaff_x20 + 0x1c8);
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *puVar3 = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0xf000000000000000;
  puVar4 = (undefined8 *)(unaff_x20 + 0x208);
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *puVar4 = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 600) = 0;
  *(undefined8 *)(unaff_x20 + 0x250) = 0;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined8 *)(unaff_x20 + 0x260) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x268) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x300) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x328) = 0;
  *(undefined8 *)(unaff_x20 + 0x310) = 0;
  *(undefined8 *)(unaff_x20 + 0x308) = 0;
  *(undefined8 *)(unaff_x20 + 800) = 0;
  *(undefined8 *)(unaff_x20 + 0x318) = 0;
  *(undefined8 *)(unaff_x20 + 0x330) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x348) = 0;
  *(undefined8 *)(unaff_x20 + 0x340) = 0;
  *(undefined8 *)(unaff_x20 + 0x338) = 0;
  *(undefined8 *)(unaff_x20 + 0x350) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x368) = 0;
  *(undefined8 *)(unaff_x20 + 0x360) = 0;
  *(undefined8 *)(unaff_x20 + 0x358) = 0;
  *(undefined8 *)(unaff_x20 + 0x370) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x388) = 0;
  *(undefined8 *)(unaff_x20 + 0x380) = 0;
  *(undefined8 *)(unaff_x20 + 0x378) = 0;
  *(undefined8 *)(unaff_x20 + 0x390) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x398) = 0;
  *(undefined8 *)(unaff_x20 + 0x3b0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f0) = 0;
  *(undefined8 *)(unaff_x20 + 1000) = 0;
  *(undefined8 *)(unaff_x20 + 0x400) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x418) = 0;
  *(undefined8 *)(unaff_x20 + 0x410) = 0;
  *(undefined8 *)(unaff_x20 + 0x408) = 0;
  *(undefined8 *)(unaff_x20 + 0x420) = 0xf000000000000000;
  func_0x000107c61428(param_1 + 0x10,auStack_3e8,0,0);
  uStack_3a8 = *(undefined8 *)(param_1 + 0x38);
  uStack_3b0 = *(undefined8 *)(param_1 + 0x30);
  uStack_398 = *(undefined8 *)(param_1 + 0x48);
  uStack_3a0 = *(undefined8 *)(param_1 + 0x40);
  uStack_388 = *(undefined8 *)(param_1 + 0x58);
  uStack_390 = *(undefined8 *)(param_1 + 0x50);
  uStack_3c8 = *(undefined8 *)(param_1 + 0x18);
  uStack_3d0 = *(undefined8 *)(param_1 + 0x10);
  uStack_3b8 = *(undefined8 *)(param_1 + 0x28);
  uStack_3c0 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61428(puVar17,auStack_400,1,0);
  uStack_368 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_370 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_358 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_360 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_348 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_350 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_338 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_340 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_378 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_380 = *puVar17;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_3b8;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_3c0;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_3a8;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_3b0;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_398;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_3a0;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_388;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_390;
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_3c8;
  *puVar17 = uStack_3d0;
  FUN_1036204f0(&uStack_3d0,&uStack_190,0x112db6370,&UNK_10d961e38);
  func_0x000103620538(&uStack_380,0x112db6370,&UNK_10d961e38);
  func_0x000107c61428(param_1 + 0x60,auStack_418,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  uVar11 = *(undefined8 *)(param_1 + 0x68);
  uVar15 = *(undefined8 *)(param_1 + 0x70);
  func_0x000107c61428(puVar12,auStack_430,1,0);
  uVar8 = *puVar12;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x70);
  *puVar12 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar15;
  FUN_10361fde8(uVar9,uVar11,uVar15);
  func_0x00010361fe14(uVar8,uVar10,uVar13);
  func_0x000107c61428(param_1 + 0x78,auStack_448,0,0);
  uStack_308 = *(undefined8 *)(param_1 + 0xa0);
  uStack_310 = *(undefined8 *)(param_1 + 0x98);
  uStack_2f8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_300 = *(undefined8 *)(param_1 + 0xa8);
  uStack_2e8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_2f0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_2d8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_2e0 = *(undefined8 *)(param_1 + 200);
  uStack_328 = *(undefined8 *)(param_1 + 0x80);
  uStack_330 = *(undefined8 *)(param_1 + 0x78);
  uStack_318 = *(undefined8 *)(param_1 + 0x90);
  uStack_320 = *(undefined8 *)(param_1 + 0x88);
  func_0x000107c61428(unaff_x20 + 0x78,auStack_460,1,0);
  uStack_2a8 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_2b0 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_298 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_2a0 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_288 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_290 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_278 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_280 = *(undefined8 *)(unaff_x20 + 200);
  uStack_2c8 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_2d0 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_2b8 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_2c0 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_308;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_310;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_2f8;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_300;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_2e8;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_2f0;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 200) = uStack_2e0;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_328;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_330;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_318;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_320;
  FUN_1036204f0(&uStack_330,&uStack_190,0x112f7df78,&UNK_10dbe8038);
  func_0x000103620538(&uStack_2d0,0x112f7df78,&UNK_10dbe8038);
  func_0x000107c61428(param_1 + 0xd8,auStack_478,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0xd8);
  uVar15 = *(undefined8 *)(param_1 + 0xe0);
  uVar10 = *(undefined8 *)(param_1 + 0xe8);
  uVar18 = *(undefined8 *)(param_1 + 0xf0);
  uVar11 = *(undefined8 *)(param_1 + 0xf8);
  uVar19 = *(undefined8 *)(param_1 + 0x100);
  func_0x000107c61428(puVar5,auStack_490,1,0);
  uVar7 = *puVar5;
  uVar13 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x100);
  *puVar5 = uVar9;
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar15;
  *(undefined8 *)(unaff_x20 + 0xe8) = uVar10;
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar18;
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x100) = uVar19;
  func_0x000100d56bd0(uVar9,uVar15,uVar10,uVar18,uVar11,uVar19);
  func_0x000100d56bec(uVar7,uVar13,uVar14,uVar8,uVar16,uVar6);
  func_0x000107c61428((undefined8 *)(param_1 + 0x108),auStack_4a8,0,0);
  uStack_268 = *(undefined8 *)(param_1 + 0x110);
  uStack_270 = *(undefined8 *)(param_1 + 0x108);
  uStack_258 = *(undefined8 *)(param_1 + 0x120);
  uStack_260 = *(undefined8 *)(param_1 + 0x118);
  uStack_248 = *(undefined8 *)(param_1 + 0x130);
  uStack_250 = *(undefined8 *)(param_1 + 0x128);
  uStack_238 = *(undefined8 *)(param_1 + 0x140);
  uStack_240 = *(undefined8 *)(param_1 + 0x138);
  func_0x000107c61428(puVar1,auStack_4c0,1,0);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0x110);
  uStack_230 = *puVar1;
  uStack_218 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_220 = *(undefined8 *)(unaff_x20 + 0x118);
  uStack_208 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_210 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_1f8 = *(undefined8 *)(unaff_x20 + 0x140);
  uStack_200 = *(undefined8 *)(unaff_x20 + 0x138);
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_268;
  *puVar1 = uStack_270;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_258;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_260;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_248;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_250;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_238;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_240;
  FUN_1036204f0(&uStack_270,&uStack_190,0x112f7df88,&UNK_10dbe8048);
  func_0x000103620538(&uStack_230,0x112f7df88,&UNK_10dbe8048);
  func_0x000107c61428((undefined8 *)(param_1 + 0x148),auStack_4d8,0,0);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x170);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x168);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x180);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x178);
  uStack_1a8 = *(undefined8 *)(param_1 + 400);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x188);
  uStack_198 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x198);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x150);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x148);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x160);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x158);
  func_0x000107c61428(puVar2,auStack_4f0,1,0);
  uStack_168 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_170 = *(undefined8 *)(unaff_x20 + 0x168);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x180);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x178);
  uStack_148 = *(undefined8 *)(unaff_x20 + 400);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x188);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x198);
  uStack_188 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_190 = *puVar2;
  uStack_178 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_180 = *(undefined8 *)(unaff_x20 + 0x158);
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 400) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_1e8;
  *puVar2 = uStack_1f0;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_1e0;
  FUN_1036204f0(&uStack_1f0,&uStack_550,0x112db6390,&UNK_10d961e58);
  func_0x000103620538(&uStack_190,0x112db6390,&UNK_10d961e58);
  func_0x000107c61428(param_1 + 0x1a8,auStack_568,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x1a8);
  uVar8 = *(undefined8 *)(param_1 + 0x1b0);
  uVar10 = *(undefined8 *)(param_1 + 0x1b8);
  uVar15 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x1a8),auStack_580,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x1c0);
  *(undefined8 *)(unaff_x20 + 0x1a8) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uVar15;
  func_0x000100d56b98(uVar9,uVar8,uVar10,uVar15);
  func_0x000100d56bb4(uVar11,uVar18,uVar13,uVar19);
  func_0x000107c61428((undefined8 *)(param_1 + 0x1c8),auStack_598,0,0);
  uStack_128 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_130 = *(undefined8 *)(param_1 + 0x1c8);
  uStack_118 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_120 = *(undefined8 *)(param_1 + 0x1d8);
  uStack_108 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_110 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_f8 = *(undefined8 *)(param_1 + 0x200);
  uStack_100 = *(undefined8 *)(param_1 + 0x1f8);
  func_0x000107c61428(puVar3,auStack_5b0,1,0);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uStack_f0 = *puVar3;
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x200);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x1f8);
  *(undefined8 *)(unaff_x20 + 0x1d0) = uStack_128;
  *puVar3 = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uStack_120;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_100;
  FUN_1036204f0(&uStack_130,&uStack_550,0x112db63a8,&UNK_10d961e70);
  func_0x000103620538(&uStack_f0,0x112db63a8,&UNK_10d961e70);
  func_0x000107c61428((undefined8 *)(param_1 + 0x208),auStack_5c8,0,0);
  uStack_a8 = *(undefined8 *)(param_1 + 0x210);
  uStack_b0 = *(undefined8 *)(param_1 + 0x208);
  uStack_98 = *(undefined8 *)(param_1 + 0x220);
  uStack_a0 = *(undefined8 *)(param_1 + 0x218);
  uStack_88 = *(undefined8 *)(param_1 + 0x230);
  uStack_90 = *(undefined8 *)(param_1 + 0x228);
  uStack_78 = *(undefined8 *)(param_1 + 0x240);
  uStack_80 = *(undefined8 *)(param_1 + 0x238);
  func_0x000107c61428(puVar4,auStack_5e0,1,0);
  uStack_548 = *(undefined8 *)(unaff_x20 + 0x210);
  uStack_550 = *puVar4;
  uStack_538 = *(undefined8 *)(unaff_x20 + 0x220);
  uStack_540 = *(undefined8 *)(unaff_x20 + 0x218);
  uStack_528 = *(undefined8 *)(unaff_x20 + 0x230);
  uStack_530 = *(undefined8 *)(unaff_x20 + 0x228);
  uStack_518 = *(undefined8 *)(unaff_x20 + 0x240);
  uStack_520 = *(undefined8 *)(unaff_x20 + 0x238);
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_a8;
  *puVar4 = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x220) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x230) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x228) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x240) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x238) = uStack_80;
  FUN_1036204f0(&uStack_b0,auStack_620,0x112f7df98,&UNK_10dbe8068);
  func_0x000103620538(&uStack_550,0x112f7df98,&UNK_10dbe8068);
  func_0x000107c61428(param_1 + 0x248,auStack_620,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x248);
  uVar10 = *(undefined8 *)(param_1 + 0x250);
  uVar11 = *(undefined8 *)(param_1 + 600);
  uVar13 = *(undefined8 *)(param_1 + 0x260);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x248),auStack_638,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x248);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x250);
  uVar18 = *(undefined8 *)(unaff_x20 + 600);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x260);
  *(undefined8 *)(unaff_x20 + 0x248) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x250) = uVar10;
  *(undefined8 *)(unaff_x20 + 600) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x260) = uVar13;
  func_0x000100d56b98(uVar9,uVar10,uVar11,uVar13);
  func_0x000100d56bb4(uVar8,uVar15,uVar18,uVar19);
  func_0x000107c61428(param_1 + 0x268,auStack_650,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x268);
  uVar10 = *(undefined8 *)(param_1 + 0x270);
  uVar11 = *(undefined8 *)(param_1 + 0x278);
  uVar13 = *(undefined8 *)(param_1 + 0x280);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x268),auStack_668,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x268);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x270);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x278);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x280);
  *(undefined8 *)(unaff_x20 + 0x268) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x270) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x278) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x280) = uVar13;
  func_0x000100d56b98(uVar9,uVar10,uVar11,uVar13);
  func_0x000100d56bb4(uVar8,uVar15,uVar18,uVar19);
  func_0x000107c61428(param_1 + 0x288,auStack_680,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x288);
  uVar10 = *(undefined8 *)(param_1 + 0x290);
  uVar11 = *(undefined8 *)(param_1 + 0x298);
  uVar13 = *(undefined8 *)(param_1 + 0x2a0);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x288),auStack_698,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x288);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x290);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x298);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x2a0);
  *(undefined8 *)(unaff_x20 + 0x288) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x290) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x298) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uVar13;
  func_0x000100d56b98(uVar9,uVar10,uVar11,uVar13);
  func_0x000100d56bb4(uVar8,uVar15,uVar18,uVar19);
  func_0x000107c61428(param_1 + 0x2a8,auStack_6b0,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x2a8);
  uVar10 = *(undefined8 *)(param_1 + 0x2b0);
  uVar11 = *(undefined8 *)(param_1 + 0x2b8);
  uVar13 = *(undefined8 *)(param_1 + 0x2c0);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x2a8),auStack_6c8,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x2a8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x2b0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x2b8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x2c0);
  *(undefined8 *)(unaff_x20 + 0x2a8) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x2b0) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x2b8) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uVar13;
  func_0x000100d56b98(uVar9,uVar10,uVar11,uVar13);
  func_0x000100d56bb4(uVar8,uVar15,uVar18,uVar19);
  func_0x000107c61428(param_1 + 0x2c8,auStack_6e0,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x2c8);
  uVar10 = *(undefined8 *)(param_1 + 0x2d0);
  uVar11 = *(undefined8 *)(param_1 + 0x2d8);
  uVar13 = *(undefined8 *)(param_1 + 0x2e0);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x2c8),auStack_6f8,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x2c8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x2d0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x2d8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x2e0);
  *(undefined8 *)(unaff_x20 + 0x2c8) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x2d0) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uVar13;
  func_0x000100d56b98(uVar9,uVar10,uVar11,uVar13);
  func_0x000100d56bb4(uVar8,uVar15,uVar18,uVar19);
  func_0x000107c61428(param_1 + 0x2e8,auStack_710,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x2e8);
  uVar10 = *(undefined8 *)(param_1 + 0x2f0);
  uVar11 = *(undefined8 *)(param_1 + 0x2f8);
  uVar13 = *(undefined8 *)(param_1 + 0x300);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x2e8),auStack_728,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x2e8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x2f0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x2f8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x300);
  *(undefined8 *)(unaff_x20 + 0x2e8) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x300) = uVar13;
  func_0x000100d56b98(uVar9,uVar10,uVar11,uVar13);
  func_0x000100d56bb4(uVar8,uVar15,uVar18,uVar19);
  func_0x000107c61428(param_1 + 0x308,auStack_740,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x308);
  uVar15 = *(undefined8 *)(param_1 + 0x310);
  uVar18 = *(undefined8 *)(param_1 + 0x318);
  uVar19 = *(undefined8 *)(param_1 + 800);
  uVar14 = *(undefined8 *)(param_1 + 0x328);
  uVar16 = *(undefined8 *)(param_1 + 0x330);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x308),auStack_758,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x308);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x310);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x318);
  uVar9 = *(undefined8 *)(unaff_x20 + 800);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x328);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x330);
  *(undefined8 *)(unaff_x20 + 0x308) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x310) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x318) = uVar18;
  *(undefined8 *)(unaff_x20 + 800) = uVar19;
  *(undefined8 *)(unaff_x20 + 0x328) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x330) = uVar16;
  func_0x000100d56bd0(uVar8,uVar15,uVar18,uVar19,uVar14,uVar16);
  func_0x000100d56bec(uVar6,uVar7,uVar11,uVar9,uVar13,uVar10);
  func_0x000107c61428(param_1 + 0x338,auStack_770,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x338);
  uVar10 = *(undefined8 *)(param_1 + 0x340);
  uVar11 = *(undefined8 *)(param_1 + 0x348);
  uVar13 = *(undefined8 *)(param_1 + 0x350);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x338),auStack_788,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x338);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x340);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x348);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x350);
  *(undefined8 *)(unaff_x20 + 0x338) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x340) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x348) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x350) = uVar13;
  func_0x000100d56b98(uVar9,uVar10,uVar11,uVar13);
  func_0x000100d56bb4(uVar8,uVar15,uVar18,uVar19);
  func_0x000107c61428(param_1 + 0x358,auStack_7a0,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x358);
  uVar10 = *(undefined8 *)(param_1 + 0x360);
  uVar11 = *(undefined8 *)(param_1 + 0x368);
  uVar13 = *(undefined8 *)(param_1 + 0x370);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x358),auStack_7b8,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x358);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x360);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x368);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x370);
  *(undefined8 *)(unaff_x20 + 0x358) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x360) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x368) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x370) = uVar13;
  func_0x000100d56b98(uVar9,uVar10,uVar11,uVar13);
  func_0x000100d56bb4(uVar8,uVar15,uVar18,uVar19);
  func_0x000107c61428(param_1 + 0x378,auStack_7d0,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x378);
  uVar10 = *(undefined8 *)(param_1 + 0x380);
  uVar11 = *(undefined8 *)(param_1 + 0x388);
  uVar13 = *(undefined8 *)(param_1 + 0x390);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x378),auStack_7e8,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x378);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x380);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x388);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x390);
  *(undefined8 *)(unaff_x20 + 0x378) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x380) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x388) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x390) = uVar13;
  func_0x000100d56b98(uVar9,uVar10,uVar11,uVar13);
  func_0x000100d56bb4(uVar8,uVar15,uVar18,uVar19);
  func_0x000107c61428(param_1 + 0x398,auStack_800,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x398);
  uVar10 = *(undefined8 *)(param_1 + 0x3a0);
  uVar11 = *(undefined8 *)(param_1 + 0x3a8);
  uVar13 = *(undefined8 *)(param_1 + 0x3b0);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x398),auStack_818,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x398);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x3a0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x3a8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x3b0);
  *(undefined8 *)(unaff_x20 + 0x398) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x3a0) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x3a8) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x3b0) = uVar13;
  func_0x000100d56b98(uVar9,uVar10,uVar11,uVar13);
  func_0x000100d56bb4(uVar8,uVar15,uVar18,uVar19);
  func_0x000107c61428(param_1 + 0x3b8,auStack_830,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x3b8);
  uVar10 = *(undefined8 *)(param_1 + 0x3c0);
  uVar11 = *(undefined8 *)(param_1 + 0x3c8);
  uVar13 = *(undefined8 *)(param_1 + 0x3d0);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x3b8),auStack_848,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x3b8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x3c0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x3c8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x3d0);
  *(undefined8 *)(unaff_x20 + 0x3b8) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x3c0) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x3c8) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x3d0) = uVar13;
  func_0x000100d56b98(uVar9,uVar10,uVar11,uVar13);
  func_0x000100d56bb4(uVar8,uVar15,uVar18,uVar19);
  func_0x000107c61428(param_1 + 0x3d8,auStack_860,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x3d8);
  uVar15 = *(undefined8 *)(param_1 + 0x3e0);
  uVar18 = *(undefined8 *)(param_1 + 1000);
  uVar19 = *(undefined8 *)(param_1 + 0x3f0);
  uVar14 = *(undefined8 *)(param_1 + 0x3f8);
  uVar16 = *(undefined8 *)(param_1 + 0x400);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x3d8),auStack_878,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x3d8);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x3e0);
  uVar11 = *(undefined8 *)(unaff_x20 + 1000);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x3f0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x3f8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x400);
  *(undefined8 *)(unaff_x20 + 0x3d8) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x3e0) = uVar15;
  *(undefined8 *)(unaff_x20 + 1000) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x3f0) = uVar19;
  *(undefined8 *)(unaff_x20 + 0x3f8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x400) = uVar16;
  func_0x000100d56bd0(uVar8,uVar15,uVar18,uVar19,uVar14,uVar16);
  func_0x000100d56bec(uVar6,uVar7,uVar11,uVar9,uVar13,uVar10);
  func_0x000107c61428(param_1 + 0x408,auStack_890,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x408);
  uVar15 = *(undefined8 *)(param_1 + 0x410);
  uVar18 = *(undefined8 *)(param_1 + 0x418);
  uVar19 = *(undefined8 *)(param_1 + 0x420);
  func_0x000100d56b98(uVar8,uVar15,uVar18,uVar19);
  func_0x000107c61574(param_1);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x408),auStack_8a8,1,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x408);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x410);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x418);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x420);
  *(undefined8 *)(unaff_x20 + 0x408) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x410) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x418) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x420) = uVar19;
  func_0x000100d56bb4(uVar9,uVar10,uVar11,uVar13);
  return;
}



/* Entry: 1036100d0; end: 10361030b;  */

void FUN_1036100d0(void)

{
  long unaff_x20;
  
  func_0x000101597984(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  func_0x00010361fe14(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  func_0x000100d56db4(*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                      *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                      *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000100d56bec(*(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                      *(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000100d56dd0(*(undefined8 *)(unaff_x20 + 0x108),*(undefined8 *)(unaff_x20 + 0x110),
                      *(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                      *(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                      *(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000100d56db4(*(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                      *(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                      *(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                      *(undefined8 *)(unaff_x20 + 0x178),*(undefined8 *)(unaff_x20 + 0x180),
                      *(undefined8 *)(unaff_x20 + 0x188),*(undefined8 *)(unaff_x20 + 400),
                      *(undefined8 *)(unaff_x20 + 0x198),*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000100d56bb4(*(undefined8 *)(unaff_x20 + 0x1a8),*(undefined8 *)(unaff_x20 + 0x1b0),
                      *(undefined8 *)(unaff_x20 + 0x1b8),*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000100d56dd0(*(undefined8 *)(unaff_x20 + 0x1c8),*(undefined8 *)(unaff_x20 + 0x1d0),
                      *(undefined8 *)(unaff_x20 + 0x1d8),*(undefined8 *)(unaff_x20 + 0x1e0),
                      *(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                      *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000100d56dd0(*(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                      *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                      *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230),
                      *(undefined8 *)(unaff_x20 + 0x238),*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000100d56bb4(*(undefined8 *)(unaff_x20 + 0x248),*(undefined8 *)(unaff_x20 + 0x250),
                      *(undefined8 *)(unaff_x20 + 600),*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000100d56bb4(*(undefined8 *)(unaff_x20 + 0x268),*(undefined8 *)(unaff_x20 + 0x270),
                      *(undefined8 *)(unaff_x20 + 0x278),*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000100d56bb4(*(undefined8 *)(unaff_x20 + 0x288),*(undefined8 *)(unaff_x20 + 0x290),
                      *(undefined8 *)(unaff_x20 + 0x298),*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000100d56bb4(*(undefined8 *)(unaff_x20 + 0x2a8),*(undefined8 *)(unaff_x20 + 0x2b0),
                      *(undefined8 *)(unaff_x20 + 0x2b8),*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000100d56bb4(*(undefined8 *)(unaff_x20 + 0x2c8),*(undefined8 *)(unaff_x20 + 0x2d0),
                      *(undefined8 *)(unaff_x20 + 0x2d8),*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000100d56bb4(*(undefined8 *)(unaff_x20 + 0x2e8),*(undefined8 *)(unaff_x20 + 0x2f0),
                      *(undefined8 *)(unaff_x20 + 0x2f8),*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000100d56bec(*(undefined8 *)(unaff_x20 + 0x308),*(undefined8 *)(unaff_x20 + 0x310),
                      *(undefined8 *)(unaff_x20 + 0x318),*(undefined8 *)(unaff_x20 + 800),
                      *(undefined8 *)(unaff_x20 + 0x328),*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000100d56bb4(*(undefined8 *)(unaff_x20 + 0x338),*(undefined8 *)(unaff_x20 + 0x340),
                      *(undefined8 *)(unaff_x20 + 0x348),*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000100d56bb4(*(undefined8 *)(unaff_x20 + 0x358),*(undefined8 *)(unaff_x20 + 0x360),
                      *(undefined8 *)(unaff_x20 + 0x368),*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000100d56bb4(*(undefined8 *)(unaff_x20 + 0x378),*(undefined8 *)(unaff_x20 + 0x380),
                      *(undefined8 *)(unaff_x20 + 0x388),*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000100d56bb4(*(undefined8 *)(unaff_x20 + 0x398),*(undefined8 *)(unaff_x20 + 0x3a0),
                      *(undefined8 *)(unaff_x20 + 0x3a8),*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000100d56bb4(*(undefined8 *)(unaff_x20 + 0x3b8),*(undefined8 *)(unaff_x20 + 0x3c0),
                      *(undefined8 *)(unaff_x20 + 0x3c8),*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000100d56bec(*(undefined8 *)(unaff_x20 + 0x3d8),*(undefined8 *)(unaff_x20 + 0x3e0),
                      *(undefined8 *)(unaff_x20 + 1000),*(undefined8 *)(unaff_x20 + 0x3f0),
                      *(undefined8 *)(unaff_x20 + 0x3f8),*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000100d56bb4(*(undefined8 *)(unaff_x20 + 0x408),*(undefined8 *)(unaff_x20 + 0x410),
                      *(undefined8 *)(unaff_x20 + 0x418),*(undefined8 *)(unaff_x20 + 0x420));
  return;
}



/* Entry: 10361030c; end: 10361039b;  */

void FUN_10361030c(void)

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
    FUN_10360cf04(0);
    func_0x000107c613fc();
    FUN_10360f204(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_10361039c();
  return;
}



/* Entry: 10361039c; end: 1036106ab;  */

/* WARNING: Removing unreachable block (ram,0x00010361045c) */
/* WARNING: Removing unreachable block (ram,0x000103610504) */
/* WARNING: Removing unreachable block (ram,0x0001036104b0) */
/* WARNING: Removing unreachable block (ram,0x00010361061c) */
/* WARNING: Removing unreachable block (ram,0x000103610670) */
/* WARNING: Removing unreachable block (ram,0x000103610654) */
/* WARNING: Removing unreachable block (ram,0x0001036104cc) */
/* WARNING: Removing unreachable block (ram,0x000103610478) */
/* WARNING: Removing unreachable block (ram,0x000103610638) */
/* WARNING: Removing unreachable block (ram,0x0001036105ac) */
/* WARNING: Removing unreachable block (ram,0x0001036105e4) */
/* WARNING: Removing unreachable block (ram,0x0001036106a8) */
/* WARNING: Removing unreachable block (ram,0x000103610590) */
/* WARNING: Removing unreachable block (ram,0x000103610520) */
/* WARNING: Removing unreachable block (ram,0x000103610600) */
/* WARNING: Removing unreachable block (ram,0x000103610494) */
/* WARNING: Removing unreachable block (ram,0x0001036104e8) */
/* WARNING: Removing unreachable block (ram,0x000103610558) */
/* WARNING: Removing unreachable block (ram,0x0001036105c8) */
/* WARNING: Removing unreachable block (ram,0x00010361053c) */
/* WARNING: Removing unreachable block (ram,0x000103610574) */
/* WARNING: Removing unreachable block (ram,0x00010361068c) */

void FUN_10361039c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        FUN_1036106ac(param_2,param_1,param_3,param_4);
        break;
      case 2:
        FUN_103610740(param_2,param_1,param_3,param_4);
        break;
      case 3:
        FUN_1036107d4(param_2,param_1,param_3,param_4);
        break;
      case 4:
        FUN_103610868(param_2,param_1,param_3,param_4);
        break;
      case 5:
        FUN_1036108fc(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_103610990(param_2,param_1,param_3,param_4);
        break;
      case 7:
        FUN_103610a24(param_2,param_1,param_3,param_4);
        break;
      case 8:
        FUN_103610ab8(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_103610b4c(param_2,param_1,param_3,param_4);
        break;
      case 10:
        FUN_103610be0(param_2,param_1,param_3,param_4);
        break;
      case 0xb:
        FUN_103610c74(param_2,param_1,param_3,param_4);
        break;
      case 0xc:
        FUN_103610d08(param_2,param_1,param_3,param_4);
        break;
      case 0xd:
        FUN_103610d9c(param_2,param_1,param_3,param_4);
        break;
      case 0xe:
        FUN_103610e30(param_2,param_1,param_3,param_4);
        break;
      case 0xf:
        FUN_103610ec4(param_2,param_1,param_3,param_4);
        break;
      case 0x10:
        FUN_103610f58(param_2,param_1,param_3,param_4);
        break;
      case 0x11:
        FUN_103610fec(param_2,param_1,param_3,param_4);
        break;
      case 0x12:
        FUN_103611080(param_2,param_1,param_3,param_4);
        break;
      case 0x13:
        FUN_103611114(param_2,param_1,param_3,param_4);
        break;
      case 0x14:
        FUN_1036111a8(param_2,param_1,param_3,param_4);
        break;
      case 0x15:
        FUN_10361123c(param_2,param_1,param_3,param_4);
        break;
      case 0x16:
        FUN_1036112d0(param_2,param_1,param_3,param_4);
        break;
      case 0x17:
        FUN_103611364(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1036106ac; end: 10361073f;  */

void FUN_1036106ac(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010159f634();
  (*pcVar2)(param_2 + 0x10,&UNK_11066fc48,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103610740; end: 1036107d3;  */

void FUN_103610740(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x60;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_10362551c();
  (*pcVar2)(param_2 + 0x60,&UNK_11066ff08,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036107d4; end: 103610867;  */

void FUN_1036107d4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x78;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103625618();
  (*pcVar2)(param_2 + 0x78,&UNK_110670888,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103610868; end: 1036108fb;  */

void FUN_103610868(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xd8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1036251ac();
  (*pcVar2)(param_2 + 0xd8,&UNK_11066f8f0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036108fc; end: 10361098f;  */

void FUN_1036108fc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x108;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103625714();
  (*pcVar2)(param_2 + 0x108,&UNK_110670ac8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103610990; end: 103610a23;  */

void FUN_103610990(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x148;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010159f5b4();
  (*pcVar2)(param_2 + 0x148,&UNK_11066fa98,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103610a24; end: 103610ab7;  */

void FUN_103610a24(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1a8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103625420();
  (*pcVar2)(param_2 + 0x1a8,&UNK_11066fdf8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103610ab8; end: 103610b4b;  */

void FUN_103610ab8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1c8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010159f534();
  (*pcVar2)(param_2 + 0x1c8,&UNK_110670d00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103610b4c; end: 103610bdf;  */

void FUN_103610b4c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x208;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1036258cc();
  (*pcVar2)(param_2 + 0x208,&UNK_110670ea8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103610be0; end: 103610c73;  */

void FUN_103610be0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x248;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1036259c8();
  (*pcVar2)(param_2 + 0x248,&UNK_1106710e0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103610c74; end: 103610d07;  */

void FUN_103610c74(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x268;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103625ac4();
  (*pcVar2)(param_2 + 0x268,&UNK_1106711f0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103610d08; end: 103610d9b;  */

void FUN_103610d08(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x288;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103625bc0();
  (*pcVar2)(param_2 + 0x288,&UNK_110671300,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103610d9c; end: 103610e2f;  */

void FUN_103610d9c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x2a8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103625cbc();
  (*pcVar2)(param_2 + 0x2a8,&UNK_110671410,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103610e30; end: 103610ec3;  */

void FUN_103610e30(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x2c8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103625db8();
  (*pcVar2)(param_2 + 0x2c8,&UNK_110671520,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103610ec4; end: 103610f57;  */

void FUN_103610ec4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x2e8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103625eb4();
  (*pcVar2)(param_2 + 0x2e8,&UNK_110671630,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103610f58; end: 103610feb;  */

void FUN_103610f58(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x308;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103625fb0();
  (*pcVar2)(param_2 + 0x308,&UNK_110671740,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103610fec; end: 10361107f;  */

void FUN_103610fec(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x338;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1036260ac();
  (*pcVar2)(param_2 + 0x338,&UNK_1106718e8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103611080; end: 103611113;  */

void FUN_103611080(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x358;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1036261a8();
  (*pcVar2)(param_2 + 0x358,&UNK_1106719f8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103611114; end: 1036111a7;  */

void FUN_103611114(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x378;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1036262a4();
  (*pcVar2)(param_2 + 0x378,&UNK_110671b08,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036111a8; end: 10361123b;  */

void FUN_1036111a8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x398;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1036263a0();
  (*pcVar2)(param_2 + 0x398,&UNK_110671c18,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10361123c; end: 1036112cf;  */

void FUN_10361123c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x3b8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_10362649c();
  (*pcVar2)(param_2 + 0x3b8,&UNK_110671d28,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036112d0; end: 103611363;  */

void FUN_1036112d0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x3d8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103626598();
  (*pcVar2)(param_2 + 0x3d8,&UNK_110671e38,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103611364; end: 1036113f7;  */

void FUN_103611364(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x408;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_1036266c4();
  (*pcVar2)(param_2 + 0x408,&UNK_110671fe0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1036113f8; end: 10361163b;  */

void FUN_1036113f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_10361163c();
  if (unaff_x21 == 0) {
    FUN_1036116f0(param_1,param_2,param_3,param_4);
    FUN_103611790(param_1,param_2,param_3,param_4);
    FUN_103611854(param_1,param_2,param_3,param_4);
    FUN_103611910(param_1,param_2,param_3,param_4);
    FUN_1036119c8(param_1,param_2,param_3,param_4);
    FUN_103611a88(param_1,param_2,param_3,param_4);
    FUN_103611b38(param_1,param_2,param_3,param_4);
    FUN_103611bf0(param_1,param_2,param_3,param_4);
    FUN_103611ca8(param_1,param_2,param_3,param_4);
    FUN_103611d5c(param_1,param_2,param_3,param_4);
    FUN_103611e10(param_1,param_2,param_3,param_4);
    FUN_103611ec4(param_1,param_2,param_3,param_4);
    FUN_103611f78(param_1,param_2,param_3,param_4);
    FUN_10361202c(param_1,param_2,param_3,param_4);
    FUN_1036120e0(param_1,param_2,param_3,param_4);
    FUN_1036121a4(param_1,param_2,param_3,param_4);
    FUN_103612258(param_1,param_2,param_3,param_4);
    FUN_10361230c(param_1,param_2,param_3,param_4);
    FUN_1036123c0(param_1,param_2,param_3,param_4);
    FUN_103612474(param_1,param_2,param_3,param_4);
    FUN_103612528(param_1,param_2,param_3,param_4);
    FUN_1036125ec(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 10361163c; end: 1036116ef;  */

void FUN_10361163c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_68 = *(ulong *)(param_1 + 0x58);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_88 = *(undefined8 *)(param_1 + 0x38);
    uStack_90 = *(undefined8 *)(param_1 + 0x30);
    uStack_78 = *(undefined8 *)(param_1 + 0x48);
    uStack_80 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = *(undefined8 *)(param_1 + 0x50);
    uStack_a8 = *(undefined8 *)(param_1 + 0x18);
    uStack_b0 = *(undefined8 *)(param_1 + 0x10);
    uStack_98 = *(undefined8 *)(param_1 + 0x28);
    uStack_a0 = *(undefined8 *)(param_1 + 0x20);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010159f634();
    (*pcVar2)(&uStack_b0,1,&UNK_11066fc48,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1036116f0; end: 10361178f;  */

void FUN_1036116f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x60;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_60 = *(long *)(param_1 + 0x70);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x68);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_10362551c();
    (*pcVar2)(&uStack_70,2,&UNK_11066ff08,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103611790; end: 103611853;  */

void FUN_103611790(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
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
  ulong uStack_68;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x78;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_68 = *(ulong *)(param_1 + 0xd0);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_98 = *(undefined8 *)(param_1 + 0xa0);
    uStack_a0 = *(undefined8 *)(param_1 + 0x98);
    uStack_88 = *(undefined8 *)(param_1 + 0xb0);
    uStack_90 = *(undefined8 *)(param_1 + 0xa8);
    uStack_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_80 = *(undefined8 *)(param_1 + 0xb8);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    uStack_b8 = *(undefined8 *)(param_1 + 0x80);
    uStack_c0 = *(undefined8 *)(param_1 + 0x78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x90);
    uStack_b0 = *(undefined8 *)(param_1 + 0x88);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103625618();
    (*pcVar2)(&uStack_c0,3,&UNK_110670888,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103611854; end: 10361190f;  */

void FUN_103611854(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xd8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x100);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0xf8);
    uStack_78 = *(undefined8 *)(param_1 + 0xe8);
    uStack_88 = *(undefined8 *)(param_1 + 0xd8);
    uStack_80 = (undefined1)*(undefined8 *)(param_1 + 0xe0);
    uStack_70 = (undefined1)*(undefined8 *)(param_1 + 0xf0);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1036251ac();
    (*pcVar2)(&uStack_88,4,&UNK_11066f8f0,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103611910; end: 1036119c7;  */

void FUN_103611910(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x108);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_68 = *(ulong *)(param_1 + 0x140);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_98 = *(undefined8 *)(param_1 + 0x110);
    uStack_a0 = *puVar1;
    uStack_88 = *(undefined8 *)(param_1 + 0x120);
    uStack_90 = *(undefined8 *)(param_1 + 0x118);
    uStack_78 = *(undefined8 *)(param_1 + 0x130);
    uStack_80 = *(undefined8 *)(param_1 + 0x128);
    uStack_70 = *(undefined8 *)(param_1 + 0x138);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_103625714();
    (*pcVar3)(&uStack_a0,5,&UNK_110670ac8,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1036119c8; end: 103611a87;  */

void FUN_1036119c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  ulong uStack_68;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x148);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_68 = *(ulong *)(param_1 + 0x1a0);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_98 = *(undefined8 *)(param_1 + 0x170);
    uStack_a0 = *(undefined8 *)(param_1 + 0x168);
    uStack_88 = *(undefined8 *)(param_1 + 0x180);
    uStack_90 = *(undefined8 *)(param_1 + 0x178);
    uStack_78 = *(undefined8 *)(param_1 + 400);
    uStack_80 = *(undefined8 *)(param_1 + 0x188);
    uStack_70 = *(undefined8 *)(param_1 + 0x198);
    uStack_b8 = *(undefined8 *)(param_1 + 0x150);
    uStack_c0 = *puVar1;
    uStack_a8 = *(undefined8 *)(param_1 + 0x160);
    uStack_b0 = *(undefined8 *)(param_1 + 0x158);
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x00010159f5b4();
    (*pcVar3)(&uStack_c0,6,&UNK_11066fa98,puVar2,param_3,param_4);
  }
  return;
}


