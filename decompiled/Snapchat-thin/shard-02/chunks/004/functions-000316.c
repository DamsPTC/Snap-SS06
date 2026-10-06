/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d77d48; end: 101d77df7;  */

undefined8
FUN_101d77d48(ulong param_1,long param_2,char param_3,long param_4,long param_5,char param_6)

{
  if (param_1 == 0) {
    if (param_4 != 0) {
      return 0;
    }
  }
  else {
    if (param_4 == 0) {
      return 0;
    }
    func_0x000107c61434(param_4);
    FUN_101d76f50(param_1,param_4);
    func_0x000107c6142c(param_4);
    if ((param_1 & 1) == 0) {
      return 0;
    }
  }
  if (param_3 == '\x01') {
    if (param_6 == '\x01') {
      return 1;
    }
  }
  else if ((param_6 != '\x01') && (param_2 == param_5)) {
    return 1;
  }
  return 0;
}



/* Entry: 101d77df8; end: 101d77fb7;  */

/* WARNING: Removing unreachable block (ram,0x000101d77f70) */
/* WARNING: Removing unreachable block (ram,0x000101d77f04) */

undefined8 FUN_101d77df8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_60 [6];
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined8 uStack_58;
  
  lVar1 = 0x112e2a1a0;
  func_0x0001000285a8(0x112e2a1a0,&UNK_10da127a0);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_1;
  func_0x0001000a8868(param_1,uVar3);
  FUN_101d77fb8();
  func_0x000107c606e0(auStack_60 + -extraout_x8,&UNK_11047f690,&UNK_11047f690,lVar2,uVar3,uVar4);
  if (unaff_x21 == 0) {
    uVar3 = 0x112e2a1b0;
    func_0x0001000285a8(0x112e2a1b0,&UNK_10da127a8);
    uStack_59 = 0;
    uVar4 = 0x112e2a1b8;
    FUN_101d7891c(0x112e2a1b8,0x101d77ff8,PTR___sSayxGSesSeRzlMc_11034dd10);
    func_0x000107c604e8(&uStack_58,uVar3,&uStack_59,lVar1,uVar3,uVar4);
    uStack_5a = 1;
    func_0x000107c604e0(&uStack_5a,lVar1);
    (**(code **)(lVar5 + 8))(auStack_60 + -extraout_x8,lVar1);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
    uStack_58 = uVar3;
  }
  return uStack_58;
}



/* Entry: 101d77fb8; end: 101d78037;  */

void FUN_101d77fb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a1a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12bf4;
  func_0x000107c61520(&UNK_10da12bf4,&UNK_11047f690);
  puRam0000000112e2a1a8 = puVar1;
  return;
}



/* Entry: 101d78038; end: 101d7809b;  */

ulong FUN_101d78038(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 101d7809c; end: 101d7837f;  */

/* WARNING: Removing unreachable block (ram,0x000101d781e0) */
/* WARNING: Removing unreachable block (ram,0x000101d78254) */
/* WARNING: Removing unreachable block (ram,0x000101d782f4) */
/* WARNING: Removing unreachable block (ram,0x000101d78268) */
/* WARNING: Removing unreachable block (ram,0x000101d7827c) */
/* WARNING: Removing unreachable block (ram,0x000101d78178) */

void FUN_101d7809c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  long lStack_1a0;
  long lStack_198;
  undefined1 auStack_190 [96];
  undefined8 ***pppuStack_130;
  long lStack_128;
  undefined8 ***pppuStack_120;
  long lStack_118;
  undefined8 ***pppuStack_110;
  long lStack_108;
  undefined8 **ppuStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 uStack_c9;
  undefined8 ***pppuStack_c8;
  long lStack_c0;
  undefined8 ***pppuStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 ***pppuStack_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 **ppuStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_70;
  long lStack_58;
  
  lVar1 = 0x112e2a2d8;
  func_0x0001000285a8(0x112e2a2d8,&UNK_10da12c50);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  lStack_198 = param_2;
  func_0x0001000a8868(param_2,uVar4);
  func_0x000101d792a8();
  func_0x000107c606e0((long)&lStack_1a0 - extraout_x8,&UNK_11047f7b0,&UNK_11047f7b0,param_2,uVar4,
                      uVar5);
  if (unaff_x21 == 0) {
    pppuStack_130 = (undefined8 ***)((ulong)pppuStack_130 & 0xffffffffffffff00);
    ppppuVar2 = &pppuStack_130;
    lVar6 = lVar1;
    func_0x000107c604d4();
    pppuStack_130._0_1_ = 1;
    ppppuVar3 = &pppuStack_130;
    lVar7 = lVar1;
    lStack_1a0 = lVar6;
    pppuStack_c8 = ppppuVar2;
    lStack_c0 = lVar6;
    func_0x000107c604f0();
    uStack_b0 = (undefined1)lVar7;
    pppuStack_130 = (undefined8 ***)CONCAT71(pppuStack_130._1_7_,2);
    ppppuVar2 = &pppuStack_130;
    lVar6 = lVar1;
    pppuStack_b8 = ppppuVar3;
    func_0x000107c604e0();
    uStack_a0 = (undefined1)lVar6;
    auStack_190[0] = 3;
    pppuStack_a8 = ppppuVar2;
    func_0x000101d787f8();
    func_0x000107c604e8(&pppuStack_130,&UNK_11047f450,auStack_190,lVar1,&UNK_11047f450,ppppuVar2);
    lStack_90 = lStack_128;
    ppuStack_98 = pppuStack_130;
    lStack_80 = lStack_118;
    lStack_88 = (long)pppuStack_120;
    uStack_78 = pppuStack_110._0_1_;
    uVar4 = 0x112e2a2e8;
    func_0x0001000285a8(0x112e2a2e8,&UNK_10da12c58);
    uStack_c9 = 4;
    uVar5 = uVar4;
    FUN_101d792e8();
    func_0x000107c604e8(&lStack_58,uVar4,&uStack_c9,lVar1,uVar4,uVar5);
    (**(code **)(lVar8 + 8))((long)&lStack_1a0 - extraout_x8,lVar1);
    lStack_70 = lStack_58;
    lStack_108 = CONCAT71(uStack_9f,uStack_a0);
    pppuStack_110 = pppuStack_a8;
    lStack_f8 = lStack_90;
    ppuStack_100 = ppuStack_98;
    lStack_118 = CONCAT71(uStack_af,uStack_b0);
    lStack_128 = lStack_c0;
    pppuStack_130 = pppuStack_c8;
    pppuStack_120 = pppuStack_b8;
    lStack_e0 = CONCAT71(uStack_77,uStack_78);
    lStack_e8 = lStack_80;
    lStack_f0 = lStack_88;
    lStack_d8 = lStack_58;
    FUN_101d789cc(&pppuStack_130,auStack_190);
    func_0x0001000834e4(lStack_198);
    func_0x000101d78a00(&pppuStack_c8);
    param_1[5] = lStack_108;
    param_1[4] = (long)pppuStack_110;
    param_1[7] = lStack_f8;
    param_1[6] = (long)ppuStack_100;
    param_1[9] = lStack_e8;
    param_1[8] = lStack_f0;
    param_1[0xb] = lStack_d8;
    param_1[10] = lStack_e0;
    param_1[1] = lStack_128;
    *param_1 = (long)pppuStack_130;
    param_1[3] = lStack_118;
    param_1[2] = (long)pppuStack_120;
  }
  else {
    func_0x0001000834e4(lStack_198);
  }
  return;
}



/* Entry: 101d78380; end: 101d783e3;  */

ulong FUN_101d78380(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 101d783e4; end: 101d7859b;  */

/* WARNING: Removing unreachable block (ram,0x000101d78544) */
/* WARNING: Removing unreachable block (ram,0x000101d784b4) */

void FUN_101d783e4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long extraout_x8;
  long unaff_x21;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112e2a1f8;
  func_0x0001000285a8(0x112e2a1f8,&UNK_10da127c8);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  func_0x000101d788dc();
  func_0x000107c606e0(auStack_70 + -extraout_x8,&UNK_11047f570,&UNK_11047f570,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar5 = &uStack_51;
    lVar4 = lVar3;
    func_0x000107c604f4();
    uStack_52 = 1;
    puVar6 = &uStack_52;
    func_0x000107c60510(puVar6,lVar3);
    uStack_53 = 2;
    puVar7 = &uStack_53;
    lVar8 = lVar3;
    puStack_68 = puVar6;
    func_0x000107c604e0();
    (**(code **)(lVar9 + 8))(auStack_70 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
    param_1[2] = puStack_68;
    param_1[3] = puVar7;
    *(char *)(param_1 + 4) = (char)lVar8;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101d7859c; end: 101d787b7;  */

/* WARNING: Removing unreachable block (ram,0x000101d78718) */
/* WARNING: Removing unreachable block (ram,0x000101d78690) */

void FUN_101d7859c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_190 [80];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  
  lVar3 = 0x112e2a1c8;
  func_0x0001000285a8(0x112e2a1c8,&UNK_10da127b0);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_101d787b8();
  puVar5 = &UNK_11047f600;
  func_0x000107c606e0(auStack_190 + -extraout_x8,&UNK_11047f600,&UNK_11047f600,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    auStack_190[0] = 0;
    func_0x000101d787f8();
    func_0x000107c604e8(&uStack_140,&UNK_11047f450,auStack_190,lVar3,&UNK_11047f450,puVar5);
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
    uStack_a8 = uStack_128;
    uStack_b0 = uStack_130;
    uStack_a0 = (undefined1)uStack_120;
    uStack_f1 = 1;
    func_0x000107c604e8(&uStack_f0,&UNK_11047f450,&uStack_f1,lVar3,&UNK_11047f450,puVar5);
    (**(code **)(lVar6 + 8))(auStack_190 + -extraout_x8,lVar3);
    uStack_90 = uStack_e8;
    uStack_98 = uStack_f0;
    uStack_80 = (undefined1)uStack_d8;
    uStack_7f = (undefined7)((ulong)uStack_d8 >> 8);
    uStack_88 = (undefined1)uStack_e0;
    uStack_87 = (undefined7)((ulong)uStack_e0 >> 8);
    uStack_78 = uStack_d0;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_120 = CONCAT71(uStack_9f,uStack_a0);
    uStack_118 = uStack_f0;
    uStack_110 = uStack_e8;
    uStack_ff = CONCAT17(uStack_d0,uStack_7f);
    uStack_107 = uStack_87;
    uStack_100 = uStack_80;
    uStack_108 = uStack_88;
    FUN_101d78838(&uStack_140,auStack_190);
    func_0x0001000834e4(param_2);
    func_0x000101d7886c(&uStack_c0);
    param_1[5] = uStack_118;
    param_1[4] = uStack_120;
    param_1[7] = CONCAT71(uStack_107,uStack_108);
    param_1[6] = uStack_110;
    *(undefined8 *)((long)param_1 + 0x41) = uStack_ff;
    *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_100,uStack_107);
    param_1[1] = uStack_138;
    *param_1 = uStack_140;
    param_1[3] = uStack_128;
    param_1[2] = uStack_130;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101d787b8; end: 101d78837;  */

void FUN_101d787b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a1d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12b7c;
  func_0x000107c61520(&UNK_10da12b7c,&UNK_11047f600);
  puRam0000000112e2a1d0 = puVar1;
  return;
}



/* Entry: 101d78838; end: 101d7889b;  */

undefined8 FUN_101d78838(undefined8 param_1,undefined8 param_2)

{
  func_0x000101d753ec(param_2,param_1,&UNK_11047f3d0);
  return param_2;
}



/* Entry: 101d7889c; end: 101d7891b;  */

void FUN_101d7889c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a1e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da126b0;
  func_0x000107c61520(&UNK_10da126b0,&UNK_11047f450);
  puRam0000000112e2a1e8 = puVar1;
  return;
}



/* Entry: 101d7891c; end: 101d7898b;  */

void FUN_101d7891c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112e2a1b0;
    func_0x00010002969c(0x112e2a1b0,&UNK_10da127a8);
    uVar2 = uVar1;
    (*param_2)();
    uStack_38 = uVar2;
    func_0x000107c61520(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101d7898c; end: 101d789cb;  */

void FUN_101d7898c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a220 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12b04;
  func_0x000107c61520(&UNK_10da12b04,&UNK_11047f708);
  puRam0000000112e2a220 = puVar1;
  return;
}



/* Entry: 101d789cc; end: 101d78abb;  */

undefined8 FUN_101d789cc(undefined8 param_1,undefined8 param_2)

{
  FUN_101d78da8(param_2,param_1,&UNK_11047f708);
  return param_2;
}



/* Entry: 101d78abc; end: 101d78d77;  */

int FUN_101d78abc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101d78b38;
        goto LAB_101d78b1c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101d78b1c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101d78b38:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101d78d78; end: 101d78da7;  */

/* WARNING: Possible PIC construction at 0x000101d78d8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d78d90) */

void FUN_101d78d78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101d78da8; end: 101d78ee7;  */

undefined8 * FUN_101d78da8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  uVar2 = param_2[0xb];
  param_1[0xb] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 101d78ee8; end: 101d78f6b;  */

undefined8 * FUN_101d78ee8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar2 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101d78f6c; end: 101d79047;  */

int FUN_101d78f6c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x18] != '\0')) {
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



/* Entry: 101d79048; end: 101d79087;  */

void FUN_101d79048(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da128fc;
  func_0x000107c61520(&UNK_10da128fc,&UNK_11047f690);
  puRam0000000112e2a238 = puVar1;
  return;
}



/* Entry: 101d79088; end: 101d7908b;  */

void FUN_101d79088(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da129ec;
  func_0x000107c61520(&UNK_10da129ec,&UNK_11047f600);
  puRam0000000112e2a240 = puVar1;
  return;
}



/* Entry: 101d7908c; end: 101d790cb;  */

void FUN_101d7908c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da129ec;
  func_0x000107c61520(&UNK_10da129ec,&UNK_11047f600);
  puRam0000000112e2a240 = puVar1;
  return;
}



/* Entry: 101d790cc; end: 101d790cf;  */

void FUN_101d790cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12adc;
  func_0x000107c61520(&UNK_10da12adc,&UNK_11047f570);
  puRam0000000112e2a248 = puVar1;
  return;
}



/* Entry: 101d790d0; end: 101d7910f;  */

void FUN_101d790d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12adc;
  func_0x000107c61520(&UNK_10da12adc,&UNK_11047f570);
  puRam0000000112e2a248 = puVar1;
  return;
}



/* Entry: 101d79110; end: 101d79113;  */

void FUN_101d79110(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a250 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12a3c;
  func_0x000107c61520(&UNK_10da12a3c,&UNK_11047f570);
  puRam0000000112e2a250 = puVar1;
  return;
}



/* Entry: 101d79114; end: 101d79153;  */

void FUN_101d79114(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a250 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12a3c;
  func_0x000107c61520(&UNK_10da12a3c,&UNK_11047f570);
  puRam0000000112e2a250 = puVar1;
  return;
}



/* Entry: 101d79154; end: 101d79157;  */

void FUN_101d79154(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a258 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12a14;
  func_0x000107c61520(&UNK_10da12a14,&UNK_11047f570);
  puRam0000000112e2a258 = puVar1;
  return;
}



/* Entry: 101d79158; end: 101d79197;  */

void FUN_101d79158(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a258 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12a14;
  func_0x000107c61520(&UNK_10da12a14,&UNK_11047f570);
  puRam0000000112e2a258 = puVar1;
  return;
}



/* Entry: 101d79198; end: 101d7919b;  */

void FUN_101d79198(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1294c;
  func_0x000107c61520(&UNK_10da1294c,&UNK_11047f600);
  puRam0000000112e2a260 = puVar1;
  return;
}



/* Entry: 101d7919c; end: 101d791db;  */

void FUN_101d7919c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1294c;
  func_0x000107c61520(&UNK_10da1294c,&UNK_11047f600);
  puRam0000000112e2a260 = puVar1;
  return;
}



/* Entry: 101d791dc; end: 101d791df;  */

void FUN_101d791dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12924;
  func_0x000107c61520(&UNK_10da12924,&UNK_11047f600);
  puRam0000000112e2a268 = puVar1;
  return;
}



/* Entry: 101d791e0; end: 101d7921f;  */

void FUN_101d791e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12924;
  func_0x000107c61520(&UNK_10da12924,&UNK_11047f600);
  puRam0000000112e2a268 = puVar1;
  return;
}



/* Entry: 101d79220; end: 101d79223;  */

void FUN_101d79220(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a270 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1285c;
  func_0x000107c61520(&UNK_10da1285c,&UNK_11047f690);
  puRam0000000112e2a270 = puVar1;
  return;
}



/* Entry: 101d79224; end: 101d79263;  */

void FUN_101d79224(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a270 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1285c;
  func_0x000107c61520(&UNK_10da1285c,&UNK_11047f690);
  puRam0000000112e2a270 = puVar1;
  return;
}



/* Entry: 101d79264; end: 101d79267;  */

void FUN_101d79264(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a278 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12834;
  func_0x000107c61520(&UNK_10da12834,&UNK_11047f690);
  puRam0000000112e2a278 = puVar1;
  return;
}



/* Entry: 101d79268; end: 101d792e7;  */

void FUN_101d79268(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a278 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12834;
  func_0x000107c61520(&UNK_10da12834,&UNK_11047f690);
  puRam0000000112e2a278 = puVar1;
  return;
}



/* Entry: 101d792e8; end: 101d79377;  */

void FUN_101d792e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e2a2f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e2a2e8;
  func_0x00010002969c(0x112e2a2e8,&UNK_10da12c58);
  uVar2 = 0x112e2a2f8;
  FUN_101d79378(0x112e2a2f8,FUN_101d793e8,PTR___sxSgSesSeRzlMc_11034f198);
  puStack_30 = PTR___sSSSesWP_11034daa8;
  puVar3 = PTR___sSDyxq_GSesSeRzSeR_rlMc_11034d7a0;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSDyxq_GSesSeRzSeR_rlMc_11034d7a0,uVar1,&puStack_30);
  puRam0000000112e2a2f0 = puVar3;
  return;
}



/* Entry: 101d79378; end: 101d793e7;  */

void FUN_101d79378(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112e2a228;
    func_0x00010002969c(0x112e2a228,&UNK_10da127e0);
    uVar2 = uVar1;
    (*param_2)();
    uStack_38 = uVar2;
    func_0x000107c61520(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101d793e8; end: 101d79427;  */

void FUN_101d793e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12750;
  func_0x000107c61520(&UNK_10da12750,&UNK_11047f3d0);
  puRam0000000112e2a300 = puVar1;
  return;
}



/* Entry: 101d79428; end: 101d794b7;  */

void FUN_101d79428(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e2a3d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e2a2e8;
  func_0x00010002969c(0x112e2a2e8,&UNK_10da12c58);
  uVar2 = 0x112e2a3e0;
  FUN_101d79378(0x112e2a3e0,FUN_101d794b8,PTR___sxSgSEsSERzlMc_11034f180);
  puStack_30 = PTR___sSSSEsWP_11034da88;
  puVar3 = PTR___sSDyxq_GSEsSERzSER_rlMc_11034d780;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSDyxq_GSEsSERzSER_rlMc_11034d780,uVar1,&puStack_30);
  puRam0000000112e2a3d8 = puVar3;
  return;
}



/* Entry: 101d794b8; end: 101d794f7;  */

void FUN_101d794b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a3e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12728;
  func_0x000107c61520(&UNK_10da12728,&UNK_11047f3d0);
  puRam0000000112e2a3e8 = puVar1;
  return;
}



/* Entry: 101d794f8; end: 101d7964f;  */

int FUN_101d794f8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101d79574;
        goto LAB_101d79558;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101d79558:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_101d79574:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101d79650; end: 101d7968f;  */

void FUN_101d79650(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a3f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12d30;
  func_0x000107c61520(&UNK_10da12d30,&UNK_11047f7b0);
  puRam0000000112e2a3f0 = puVar1;
  return;
}



/* Entry: 101d79690; end: 101d79693;  */

void FUN_101d79690(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a3f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12c90;
  func_0x000107c61520(&UNK_10da12c90,&UNK_11047f7b0);
  puRam0000000112e2a3f8 = puVar1;
  return;
}



/* Entry: 101d79694; end: 101d796d3;  */

void FUN_101d79694(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a3f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12c90;
  func_0x000107c61520(&UNK_10da12c90,&UNK_11047f7b0);
  puRam0000000112e2a3f8 = puVar1;
  return;
}



/* Entry: 101d796d4; end: 101d796d7;  */

void FUN_101d796d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12c68;
  func_0x000107c61520(&UNK_10da12c68,&UNK_11047f7b0);
  puRam0000000112e2a400 = puVar1;
  return;
}



/* Entry: 101d796d8; end: 101d79717;  */

void FUN_101d796d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12c68;
  func_0x000107c61520(&UNK_10da12c68,&UNK_11047f7b0);
  puRam0000000112e2a400 = puVar1;
  return;
}



/* Entry: 101d79718; end: 101d79787;  */

undefined1 FUN_101d79718(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 101d79788; end: 101d797a7;  */

void FUN_101d79788(void)

{
  func_0x000107c61168(&PTR_PTR_112e2a4e8);
  return;
}



/* Entry: 101d797a8; end: 101d798fb;  */

undefined8 FUN_101d797a8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  FUN_101d7b010();
  puVar4 = &UNK_11047f8b0;
  puVar1 = puVar4;
  func_0x000107c613fc(&UNK_11047f8b0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  uVar2 = 0;
  func_0x0001048898b8(0,1,FUN_101d7b220,puVar1,&UNK_11047f4d8);
  func_0x000107c61574(param_1);
  func_0x000107c61574(puVar1);
  puVar1 = puVar4;
  func_0x000107c613fc(&UNK_11047f8b0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  uVar5 = 0x112e2a558;
  func_0x0001000285a8(0x112e2a558,&UNK_10da12e18);
  uVar3 = 0;
  func_0x0001048898b8(0,1,0x101d7b238,puVar1,uVar5);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c613fc(&UNK_11047f8b0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  uVar5 = 0;
  func_0x0001048898b8(0,1,0x101d7b250,puVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar4);
  return uVar5;
}



/* Entry: 101d798fc; end: 101d79a3f;  */

undefined8 FUN_101d798fc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [24];
  undefined8 uStack_58;
  
  uVar6 = *param_1;
  uVar1 = param_1[1];
  uVar2 = *(undefined1 *)(param_1 + 2);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x0001000285a8(0x112e2a580,&UNK_10da12e48);
    func_0x000107c613fc();
    lVar3 = 0;
    func_0x00010095c380();
    func_0x0001000d224c(&uStack_58);
    uVar4 = uStack_58;
    func_0x000107c614f0(uStack_58);
    puVar5 = &UNK_11047f9f0;
    func_0x000107c613fc(&UNK_11047f9f0,0x30,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar6;
    *(undefined8 *)(puVar5 + 0x18) = uVar1;
    puVar5[0x20] = uVar2;
    *(long *)(puVar5 + 0x28) = lVar3;
    func_0x000107c61434(uVar6);
    func_0x000107c6157c(lVar3);
    func_0x00010090569c(FUN_101d7bbcc,puVar5,uVar4);
    func_0x000107c615e8(uStack_58);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(param_2);
    uVar6 = *(undefined8 *)(lVar3 + 0x10);
    func_0x000107c6157c(uVar6);
    func_0x000107c61574(lVar3);
  }
  return uVar6;
}



/* Entry: 101d79a40; end: 101d79abb;  */

undefined8 FUN_101d79a40(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_101d7b474(uVar1);
    func_0x000107c61574(param_2);
  }
  return uVar1;
}



/* Entry: 101d79abc; end: 101d79b3b;  */

undefined8 FUN_101d79abc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_101d79b3c(uVar1);
    func_0x000107c61574(param_2);
  }
  return uVar1;
}



/* Entry: 101d79b3c; end: 101d79d4b;  */

undefined8 FUN_101d79b3c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_f8 [72];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar2 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  lVar7 = *(long *)(param_1 + 0x10);
  func_0x000107c6157c();
  puVar1 = PTR___sytN_11034f1b0;
  uVar6 = uVar2;
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)(param_1 + 0x20);
    uVar9 = uVar2;
    do {
      uStack_88 = puVar8[5];
      uStack_90 = puVar8[4];
      uStack_78 = puVar8[7];
      uStack_80 = puVar8[6];
      uStack_70 = puVar8[8];
      uStack_a8 = puVar8[1];
      uStack_b0 = *puVar8;
      uStack_98 = puVar8[3];
      uStack_a0 = puVar8[2];
      puVar3 = &UNK_11047f8b0;
      func_0x000107c613fc(&UNK_11047f8b0,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      puVar4 = &UNK_11047f8d8;
      func_0x000107c613fc(&UNK_11047f8d8,0x60,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x30) = uStack_98;
      *(undefined8 *)(puVar4 + 0x28) = uStack_a0;
      *(undefined8 *)(puVar4 + 0x40) = uStack_88;
      *(undefined8 *)(puVar4 + 0x38) = uStack_90;
      *(undefined8 *)(puVar4 + 0x50) = uStack_78;
      *(undefined8 *)(puVar4 + 0x48) = uStack_80;
      *(undefined8 *)(puVar4 + 0x58) = uStack_70;
      *(undefined8 *)(puVar4 + 0x20) = uStack_a8;
      *(undefined8 *)(puVar4 + 0x18) = uStack_b0;
      FUN_101d7b284(&uStack_b0,auStack_f8);
      FUN_101d7b284(&uStack_b0,auStack_f8);
      uVar5 = 0;
      func_0x0001048898b8(0,1,0x101d7b268,puVar4,puVar1 + 8);
      func_0x000107c61574(puVar4);
      puVar3 = &UNK_11047f8b0;
      func_0x000107c613fc(&UNK_11047f8b0,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      puVar4 = &UNK_11047f900;
      func_0x000107c613fc(&UNK_11047f900,0x60,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x30) = uStack_98;
      *(undefined8 *)(puVar4 + 0x28) = uStack_a0;
      *(undefined8 *)(puVar4 + 0x40) = uStack_88;
      *(undefined8 *)(puVar4 + 0x38) = uStack_90;
      *(undefined8 *)(puVar4 + 0x50) = uStack_78;
      *(undefined8 *)(puVar4 + 0x48) = uStack_80;
      *(undefined8 *)(puVar4 + 0x58) = uStack_70;
      *(undefined8 *)(puVar4 + 0x20) = uStack_a8;
      *(undefined8 *)(puVar4 + 0x18) = uStack_b0;
      FUN_101d7b284(&uStack_b0,auStack_f8);
      uVar6 = 0;
      func_0x0001048898b8(0,1,0x101d7b2fc,puVar4,puVar1 + 8);
      func_0x000107c61574(uVar9);
      func_0x000107c61574(uVar5);
      func_0x000107c61574(puVar4);
      FUN_101d7b318(&uStack_b0);
      puVar8 = puVar8 + 9;
      lVar7 = lVar7 + -1;
      uVar9 = uVar6;
    } while (lVar7 != 0);
  }
  func_0x000107c61574(uVar2);
  return uVar6;
}



/* Entry: 101d79d4c; end: 101d79de3;  */

undefined8 FUN_101d79d4c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
    uStack_58 = param_3[4];
    uStack_60 = param_3[3];
    uStack_48 = param_3[6];
    uStack_50 = param_3[5];
    uStack_40 = *(undefined1 *)(param_3 + 7);
    FUN_101d79de4(uVar1,param_3[1],param_3[2],&uStack_60);
    func_0x000107c61574(param_2);
  }
  return uVar1;
}



/* Entry: 101d79de4; end: 101d79f77;  */

undefined8
FUN_101d79de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [40];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  func_0x0001000d224c(&uStack_58);
  puVar2 = &UNK_11047f8b0;
  func_0x000107c613fc(&UNK_11047f8b0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_11047f978;
  func_0x000107c613fc(&UNK_11047f978,0x59,7);
  uVar5 = *param_4;
  uVar7 = param_4[3];
  uVar6 = param_4[2];
  *(undefined8 *)(puVar3 + 0x40) = param_4[1];
  *(undefined8 *)(puVar3 + 0x38) = uVar5;
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = lVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  *(undefined8 *)(puVar3 + 0x30) = param_3;
  *(undefined8 *)(puVar3 + 0x50) = uVar7;
  *(undefined8 *)(puVar3 + 0x48) = uVar6;
  puVar3[0x58] = *(undefined1 *)(param_4 + 4);
  uStack_68 = 0x101d7b458;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_11047f990;
  ppuVar4 = &puStack_88;
  puStack_60 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_60;
  func_0x000107c6157c(lVar1);
  func_0x000107c61434(param_2);
  FUN_101d7bb84(param_4,auStack_b0,0x112e2a568,&UNK_10da12e28);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uStack_58);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(uStack_58);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(lVar1);
  return uVar5;
}



/* Entry: 101d79f78; end: 101d79ff7;  */

undefined8 FUN_101d79f78(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 0x40);
    FUN_101d79ff8(uVar1);
    func_0x000107c61574(param_2);
  }
  return uVar1;
}



/* Entry: 101d79ff8; end: 101d7a16f;  */

void FUN_101d79ff8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000104888f7c();
  }
  else {
    func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
    func_0x000107c613fc();
    func_0x000107c61434(param_1);
    lVar1 = 0;
    func_0x00010095c380();
    func_0x0001000d224c(&uStack_48);
    puVar2 = &UNK_11047f8b0;
    func_0x000107c613fc(&UNK_11047f8b0,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar3 = &UNK_11047f928;
    func_0x000107c613fc(&UNK_11047f928,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(long *)(puVar3 + 0x18) = lVar1;
    *(long *)(puVar3 + 0x20) = param_1;
    pcStack_58 = FUN_101d7b39c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11047f940;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_50;
    func_0x000107c6157c(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uStack_48);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(uStack_48);
    func_0x000107c6157c(*(undefined8 *)(lVar1 + 0x10));
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101d7a170; end: 101d7a50b;  */

void FUN_101d7a170(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  lVar12 = param_1 + 0x10;
  func_0x000107c61648();
  puVar9 = (undefined8 *)0x0;
  if (lVar12 != 0) {
    puVar9 = *(undefined8 **)(lVar12 + 0x10);
    func_0x000107c6157c(puVar9);
    func_0x000107c61574(lVar12);
    func_0x0001000d224c(&puStack_d8);
    func_0x000107c61574();
    puVar1 = puStack_d8;
    if (puStack_d8 != (undefined8 *)0x0) {
      func_0x000107c61428(param_1 + 0x10,auStack_90,0,0);
      lVar12 = param_1 + 0x10;
      func_0x000107c61648();
      puVar9 = puVar1;
      if (lVar12 != 0) {
        uVar10 = *(undefined8 *)(lVar12 + 0x18);
        func_0x000107c6157c(uVar10);
        func_0x000107c61574(lVar12);
        func_0x0001000d224c(&puStack_d8);
        func_0x000107c61574(uVar10);
        puVar2 = puStack_d8;
        if (puStack_d8 != (undefined8 *)0x0) {
          func_0x000107c61428(param_1 + 0x10,auStack_a8,0,0);
          param_1 = param_1 + 0x10;
          func_0x000107c61648();
          if (param_1 != 0) {
            uVar10 = *(undefined8 *)(param_1 + 0x20);
            func_0x000107c6157c(uVar10);
            func_0x000107c61574(param_1);
            func_0x0001000d224c(&puStack_d8);
            func_0x000107c61574(uVar10);
            puVar9 = puStack_d8;
            func_0x000107c5fadc(param_3,param_4);
            puVar4 = puVar1;
            func_0x000107c431bc();
            func_0x000107c61180();
            func_0x000107c61170();
            if (puVar4 == (undefined8 *)0x0) {
              FUN_101d7b3c4();
              puVar11 = &UNK_110480158;
              func_0x000107c613f8(&UNK_110480158,param_3,0,0);
              *param_3 = 2;
              *(undefined1 *)(param_3 + 1) = 1;
              func_0x00010488ade0();
              func_0x000107c614ac(puVar11);
              func_0x000107c615e8(puVar1);
              func_0x000107c615e8(puVar2);
              func_0x000107c615e8(puStack_d8);
              return;
            }
            lVar12 = param_6[1];
            if (lVar12 == 0) {
              puVar11 = (undefined *)0x0;
            }
            else {
              uVar10 = *param_6;
              puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
              func_0x000107c47580();
              puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
              func_0x000107c46ed0();
              puVar11 = PTR_PTR_1126e0dd0;
              func_0x000107c610f8();
              func_0x000107c5fadc(uVar10,lVar12);
              func_0x000107c49438();
              func_0x000107c61170(puVar5);
              func_0x000107c61170(puVar6);
              func_0x000107c61170(uVar10);
              if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101d7a374);
                (*pcVar3)();
              }
            }
            puVar7 = puVar2;
            func_0x000107c5d54c(puVar2);
            func_0x000107c61180();
            func_0x000107c61170(puVar11);
            uStack_b8 = 0x101d7b46c;
            puStack_d8 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
            uStack_d0 = 0x42000000;
            pcStack_c8 = FUN_101d58ff0;
            puStack_c0 = &UNK_11047f9b8;
            ppuVar8 = &puStack_d8;
            uStack_b0 = param_2;
            func_0x000107c60bc4(ppuVar8);
            uVar10 = uStack_b0;
            func_0x000107c6157c(param_2);
            func_0x000107c61574(uVar10);
            func_0x000107c5dc68(puVar7);
            func_0x000107c60bd0(ppuVar8);
            func_0x000107c615e8(puVar1);
            func_0x000107c615e8(puVar2);
            func_0x000107c615e8(puVar9);
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar7);
            return;
          }
          func_0x000107c615e8(puVar1);
          puVar9 = puVar2;
        }
      }
      func_0x000107c615e8();
    }
  }
  FUN_101d7b3c4();
  puVar11 = &UNK_110480158;
  func_0x000107c613f8(&UNK_110480158,puVar9,0,0);
  *puVar9 = 0;
  *(undefined1 *)(puVar9 + 1) = 1;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar11);
  return;
}



/* Entry: 101d7a50c; end: 101d7a573;  */

void FUN_101d7a50c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
    FUN_101d7b3c4();
    puVar1 = &UNK_110480158;
    func_0x000107c613f8(&UNK_110480158,param_1,0,0);
    *param_1 = 3;
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
    return;
  }
  func_0x000100b60084();
  return;
}



/* Entry: 101d7a574; end: 101d7acc7;  */

void FUN_101d7a574(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 **ppuVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long lVar28;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  lVar28 = param_1 + 0x10;
  func_0x000107c61648();
  puVar24 = (undefined8 *)0x0;
  if (lVar28 != 0) {
    puVar24 = *(undefined8 **)(lVar28 + 0x10);
    func_0x000107c6157c(puVar24);
    func_0x000107c61574(lVar28);
    func_0x0001000d224c(&puStack_d8);
    func_0x000107c61574();
    puVar3 = puStack_d8;
    if (puStack_d8 != (undefined8 *)0x0) {
      func_0x000107c61428(param_1 + 0x10,auStack_98,0,0);
      lVar28 = param_1 + 0x10;
      func_0x000107c61648();
      puVar24 = puVar3;
      if (lVar28 != 0) {
        uVar25 = *(undefined8 *)(lVar28 + 0x18);
        func_0x000107c6157c(uVar25);
        func_0x000107c61574(lVar28);
        func_0x0001000d224c(&puStack_d8);
        func_0x000107c61574(uVar25);
        puVar4 = puStack_d8;
        if (puStack_d8 != (undefined8 *)0x0) {
          func_0x000107c61428(param_1 + 0x10,auStack_b0,0,0);
          param_1 = param_1 + 0x10;
          func_0x000107c61648();
          if (param_1 != 0) {
            uVar25 = *(undefined8 *)(param_1 + 0x20);
            func_0x000107c6157c(uVar25);
            func_0x000107c61574(param_1);
            func_0x0001000d224c(&puStack_d8);
            func_0x000107c61574(uVar25);
            puVar24 = puStack_d8;
            ppuVar23 = *(undefined8 ***)(param_3 + 0x10);
            ppuVar6 = (undefined8 **)PTR___swiftEmptyArrayStorage_11034f1c8;
            if (ppuVar23 != (undefined8 **)0x0) {
              func_0x000107c61434(param_3);
              ppuVar6 = ppuVar23;
              func_0x00010109b448(ppuVar23,0);
              ppuVar7 = &puStack_d8;
              FUN_101d7dc74(ppuVar7,ppuVar6 + 4,ppuVar23,param_3);
              FUN_101d7b404(puStack_d8,uStack_d0,uStack_c8,uStack_c0,uStack_b8);
              if (ppuVar7 != ppuVar23) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101d7acb8);
                (*pcVar5)();
              }
            }
            ppuVar23 = ppuVar6;
            func_0x000107c5fc48(ppuVar6,PTR___sSSN_11034da80);
            puVar8 = puVar3;
            func_0x000107c431d0();
            func_0x000107c61180();
            func_0x000107c61170(ppuVar23);
            puVar9 = (undefined8 *)0x0;
            FUN_101d7b40c();
            puVar20 = puVar8;
            func_0x000107c5fc54();
            func_0x000107c61170(puVar8);
            puVar8 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
            FUN_101d73800();
            if ((ulong)puVar20 >> 0x3e == 0) {
              puVar27 = *(undefined8 **)(((ulong)puVar20 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar27 = (undefined8 *)((ulong)puVar20 & 0xffffffffffffff8);
              if ((undefined8 *)0x7fffffffffffffff < puVar20) {
                puVar27 = puVar20;
              }
              func_0x000107c60480();
            }
            if (puVar27 != (undefined8 *)0x0) {
              lVar28 = 4;
              do {
                uVar26 = lVar28 - 4;
                if (((ulong)puVar20 & 0xc000000000000001) == 0) {
                  if (*(ulong *)(((ulong)puVar20 & 0xffffffffffffff8) + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x101d7a9a8);
                    (*pcVar5)();
                  }
                  uVar22 = puVar20[lVar28];
                  func_0x000107c61174();
                  puVar18 = puVar9;
                }
                else {
                  uVar22 = uVar26;
                  puVar18 = puVar20;
                  FUN_101d6ffd4();
                }
                puVar12 = (undefined8 *)(lVar28 + -3);
                if (SCARRY8(uVar26,1)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101d7a9a0);
                  (*pcVar5)();
                }
                uVar26 = uVar22;
                func_0x000107c5b2d0();
                func_0x000107c61180();
                if (uVar26 == 0) {
                  func_0x000107c61170(uVar22);
                  puVar9 = puVar18;
                }
                else {
                  uVar10 = uVar26;
                  func_0x000107c5faec();
                  func_0x000107c61170(uVar26);
                  func_0x000107c61174();
                  puVar11 = puVar8;
                  func_0x000107c61558();
                  uVar26 = uVar10;
                  puVar19 = puVar18;
                  puStack_d8 = puVar8;
                  func_0x000100029284();
                  uVar21 = (ulong)~(uint)puVar19 & 1;
                  lVar1 = puVar8[2] + uVar21;
                  if (SCARRY8(puVar8[2],uVar21)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x101d7a9a4);
                    (*pcVar5)();
                  }
                  if ((long)puVar8[3] < lVar1) {
                    func_0x000101d81130(lVar1,puVar11);
                    uVar26 = uVar10;
                    puVar9 = puVar18;
                    func_0x000100029284();
                    if (((uint)puVar19 & 1) != ((uint)puVar9 & 1)) {
                      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x101d7acc8);
                      (*pcVar5)();
                    }
                  }
                  else {
                    puVar9 = puVar19;
                    if (((ulong)puVar11 & 1) == 0) {
                      FUN_101d80fac();
                    }
                  }
                  puVar8 = puStack_d8;
                  if (((ulong)puVar19 & 1) == 0) {
                    puStack_d8[(uVar26 >> 6) + 8] =
                         puStack_d8[(uVar26 >> 6) + 8] | 1L << (uVar26 & 0x3f);
                    puVar2 = (ulong *)(puStack_d8[6] + uVar26 * 0x10);
                    *puVar2 = uVar10;
                    puVar2[1] = (ulong)puVar18;
                    *(ulong *)(puStack_d8[7] + uVar26 * 8) = uVar22;
                    func_0x000107c61170(uVar22);
                    if (SCARRY8(puVar8[2],1)) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x101d7a9ac);
                      (*pcVar5)();
                    }
                    puVar8[2] = puVar8[2] + 1;
                  }
                  else {
                    uVar25 = *(undefined8 *)(puStack_d8[7] + uVar26 * 8);
                    *(ulong *)(puStack_d8[7] + uVar26 * 8) = uVar22;
                    func_0x000107c61170(uVar22);
                    func_0x000107c6142c(puVar18);
                    func_0x000107c61170(uVar25);
                  }
                }
                lVar28 = lVar28 + 1;
              } while (puVar12 != puVar27);
            }
            func_0x000107c6142c(puVar20);
            puVar9 = ppuVar6[2];
            puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (puVar9 == (undefined8 *)0x0) {
LAB_101d7ac14:
              func_0x000107c61574(ppuVar6);
              func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
              puVar16 = puVar17;
              func_0x00010488813c(puVar17);
              func_0x000107c6142c(puVar17);
              func_0x000107c615f0(puVar24);
              func_0x000107c6157c(param_2);
              func_0x00010075a04c(puVar24,1,FUN_101d7b450,param_2);
              func_0x000107c6142c(puVar8);
              func_0x000107c61574(puVar16);
              func_0x000107c61574(param_2);
              func_0x000107c615e8(puVar3);
              func_0x000107c615ec(puVar24,2);
              func_0x000107c615e8(puVar4);
              return;
            }
            puVar20 = (undefined8 *)0x0;
LAB_101d7a9f0:
            ppuVar23 = ppuVar6 + (long)puVar20 * 2 + 5;
            puVar27 = puVar20;
            do {
              if (ppuVar6[2] <= puVar27) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101d7acb4);
                (*pcVar5)();
              }
              if (puVar8[2] != 0) {
                puVar20 = ppuVar23[-1];
                puVar18 = *ppuVar23;
                func_0x000107c61434(puVar18);
                func_0x000107c61434(puVar8);
                puVar12 = puVar20;
                puVar11 = puVar18;
                func_0x000100029284();
                if (((ulong)puVar11 & 1) == 0) {
                  func_0x000107c6142c(puVar8);
                }
                else {
                  uVar25 = *(undefined8 *)(puVar8[7] + (long)puVar12 * 8);
                  func_0x000107c61174(uVar25);
                  func_0x000107c6142c(puVar8);
                  if (*(long *)(param_3 + 0x10) != 0) {
                    func_0x000107c61434(param_3);
                    puVar12 = puVar18;
                    func_0x000100029284();
                    if (((ulong)puVar12 & 1) != 0) goto LAB_101d7aaa8;
                    func_0x000107c6142c(param_3);
                  }
                  func_0x000107c61170(uVar25);
                }
                func_0x000107c6142c(puVar18);
              }
              puVar27 = (undefined8 *)((long)puVar27 + 1);
              ppuVar23 = ppuVar23 + 2;
              if (puVar9 == puVar27) goto LAB_101d7ac14;
            } while( true );
          }
          func_0x000107c615e8(puVar3);
          puVar24 = puVar4;
        }
      }
      func_0x000107c615e8();
    }
  }
  FUN_101d7b3c4();
  puVar17 = &UNK_110480158;
  func_0x000107c613f8(&UNK_110480158,puVar24,0,0);
  *puVar24 = 0;
  *(undefined1 *)(puVar24 + 1) = 1;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar17);
  return;
LAB_101d7aaa8:
  uVar13 = *(undefined8 *)(*(long *)(param_3 + 0x38) + (long)puVar20 * 8);
  func_0x000107c61174(uVar13);
  func_0x000107c6142c(param_3);
  func_0x0001000285a8(0x112deef20,&UNK_10da12e20);
  puVar20 = puVar4;
  func_0x000107c5d558(puVar4);
  func_0x000107c61180();
  puVar12 = puVar20;
  func_0x000100759c94();
  func_0x000107c61170(puVar20);
  uVar14 = 0;
  func_0x000100775264(0,1,FUN_101d7acc8,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar25);
  func_0x000107c6142c(puVar18);
  puVar16 = puVar17;
  func_0x000107c61550();
  if ((((int)puVar16 == 0) || ((long)puVar17 < 0)) ||
     (puVar16 = puVar17, ((ulong)puVar17 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar17 >> 0x3e == 0) {
      puVar15 = *(undefined **)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar15 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar17) {
        puVar15 = puVar17;
      }
      func_0x000107c60480(puVar15);
    }
    puVar16 = (undefined *)0x0;
    FUN_101d72770(0,puVar15 + 1,1,puVar17);
  }
  uVar22 = (ulong)puVar16 & 0xffffffffffffff8;
  uVar26 = *(ulong *)(uVar22 + 0x10);
  puVar17 = puVar16;
  if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar26) {
    puVar17 = (undefined *)(ulong)(1 < *(ulong *)(uVar22 + 0x18));
    FUN_101d72770(puVar17,uVar26 + 1,1,puVar16);
    uVar22 = (ulong)puVar17 & 0xffffffffffffff8;
  }
  puVar20 = (undefined8 *)((long)puVar27 + 1);
  *(ulong *)(uVar22 + 0x10) = uVar26 + 1;
  *(undefined8 *)(uVar22 + uVar26 * 8 + 0x20) = uVar14;
  if ((undefined8 *)((long)puVar9 + -1) == puVar27) goto LAB_101d7ac14;
  goto LAB_101d7a9f0;
}



/* Entry: 101d7acc8; end: 101d7accb;  */

void FUN_101d7acc8(void)

{
  return;
}



/* Entry: 101d7accc; end: 101d7ad07;  */

void FUN_101d7accc(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x00010488ade0(*param_1);
  }
  else {
    func_0x000100b60084();
  }
  return;
}



/* Entry: 101d7ad08; end: 101d7b00f;  */

void FUN_101d7ad08(long *param_1,long *param_2,char param_3)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plStack_58;
  long *plStack_50;
  char cStack_48;
  
  plVar1 = param_1;
  if (param_3 != '\x01') {
    plVar1 = param_2;
    plVar2 = param_2;
    func_0x000101d7bc9c();
    uVar4 = (uint)plVar2;
    if (((uint)plVar1 & 0xff) != 0x13) {
      if ((param_1 != (long *)0x0) && (lVar5 = param_1[2], lVar5 != 0)) {
        plVar2 = param_1 + 9;
        do {
          if ((char)*plVar2 != '\x01') {
            lVar6 = plVar2[-1];
            if (lVar6 < 0x7d2) {
              if (lVar6 != 2000) {
                if ((lVar6 == -9999) || (lVar6 == 0x7d1)) {
                  lVar5 = 0x1b;
                  goto LAB_101d7afc0;
                }
LAB_101d7afe8:
                FUN_101d7b3c4();
                puVar3 = &UNK_110480158;
                func_0x000107c613f8(&UNK_110480158,plVar1,0,0);
                lVar5 = 0x14;
                goto LAB_101d7ad74;
              }
            }
            else {
              if (3999 < lVar6) {
                if (lVar6 < 0xfa7) {
                  if (lVar6 < 0xfa3) {
                    if (lVar6 == 4000) {
                      lVar5 = 0xd;
                    }
                    else if (lVar6 == 0xfa1) {
                      lVar5 = 0xe;
                    }
                    else {
                      if (lVar6 != 0xfa2) goto LAB_101d7afe8;
                      lVar5 = 0xf;
                    }
                  }
                  else if (lVar6 < 0xfa5) {
                    if (lVar6 == 0xfa3) {
                      lVar5 = 0x10;
                    }
                    else {
                      if (lVar6 != 0xfa4) goto LAB_101d7afe8;
                      lVar5 = 0x11;
                    }
                  }
                  else if (lVar6 == 0xfa5) {
                    lVar5 = 0x12;
                  }
                  else {
                    if (lVar6 != 0xfa6) goto LAB_101d7afe8;
                    lVar5 = 0x13;
                  }
                }
                else if (lVar6 < 0x138a) {
                  if (lVar6 < 5000) {
                    if (lVar6 == 0xfa7) {
                      lVar5 = 0x15;
                    }
                    else {
                      if (lVar6 != 0xfa8) goto LAB_101d7afe8;
                      lVar5 = 0x16;
                    }
                  }
                  else if (lVar6 == 5000) {
                    lVar5 = 0xb;
                  }
                  else {
                    if (lVar6 != 0x1389) goto LAB_101d7afe8;
                    lVar5 = 0xc;
                  }
                }
                else if (lVar6 < 0x138c) {
                  if (lVar6 == 0x138a) {
                    lVar5 = 0x17;
                  }
                  else {
                    if (lVar6 != 0x138b) goto LAB_101d7afe8;
                    lVar5 = 0x18;
                  }
                }
                else if (lVar6 == 0x138c) {
                  lVar5 = 0x19;
                }
                else {
                  if (lVar6 != 0x138d) goto LAB_101d7afe8;
                  lVar5 = 0x1a;
                }
LAB_101d7afc0:
                FUN_101d7b3c4();
                puVar3 = &UNK_110480158;
                func_0x000107c613f8(&UNK_110480158,plVar1,0,0);
                *plVar1 = lVar5;
                goto LAB_101d7ad78;
              }
              if (lVar6 != 0x7d2) goto LAB_101d7afe8;
            }
          }
          lVar5 = lVar5 + -1;
          plVar2 = plVar2 + 0xc;
        } while (lVar5 != 0);
      }
      func_0x000101d7bc6c();
      if ((uVar4 & 0xff00) == 0x100) {
        plStack_58 = param_1;
        plStack_50 = param_2;
        cStack_48 = param_3;
        func_0x000100b60084(&plStack_58);
        return;
      }
      plVar2 = plVar1;
      FUN_101d7b3c4();
      puVar3 = &UNK_110480158;
      func_0x000107c613f8(&UNK_110480158,plVar2,0,0);
      *plVar2 = (long)plVar1;
      *(char *)(plVar2 + 1) = (char)uVar4;
      goto LAB_101d7ad80;
    }
  }
  FUN_101d7b3c4();
  puVar3 = &UNK_110480158;
  func_0x000107c613f8(&UNK_110480158,plVar1,0,0);
  lVar5 = 0x1b;
LAB_101d7ad74:
  *plVar1 = lVar5;
LAB_101d7ad78:
  *(undefined1 *)(plVar1 + 1) = 1;
LAB_101d7ad80:
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar3);
  return;
}



/* Entry: 101d7b010; end: 101d7b21f;  */

/* WARNING: Removing unreachable block (ram,0x000101d7b090) */
/* WARNING: Removing unreachable block (ram,0x000101d7b140) */
/* WARNING: Removing unreachable block (ram,0x000101d7b0e8) */
/* WARNING: Removing unreachable block (ram,0x000101d7b174) */

undefined8 *** FUN_101d7b010(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined8 **appuStack_60 [5];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = 0;
  func_0x000107c5eb24();
  func_0x000107c613fc();
  func_0x000107c5eb20();
  uVar2 = uVar1;
  FUN_101d7bbdc();
  func_0x000107c5eb1c(appuStack_60,&UNK_11047f4d8,param_1,param_2,&UNK_11047f4d8,uVar2);
  func_0x000107c61574(uVar1);
  func_0x0001000285a8(0x112e2a590,&UNK_10da12e50);
  pppuVar3 = appuStack_60;
  func_0x000104888f7c(pppuVar3);
  func_0x000107c6142c(appuStack_60[0]);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    FUN_101d798fc();
    return (undefined8 ***)appuStack_60[0];
  }
  return pppuVar3;
}



/* Entry: 101d7b220; end: 101d7b283;  */

void FUN_101d7b220(void)

{
  FUN_101d798fc();
  return;
}



/* Entry: 101d7b284; end: 101d7b2bf;  */

undefined8 FUN_101d7b284(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x101d751a0)(param_2,param_1);
  return param_2;
}



/* Entry: 101d7b2c0; end: 101d7b317;  */

void FUN_101d7b2c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d7b318; end: 101d7b39b;  */

undefined8 FUN_101d7b318(undefined8 param_1)

{
  (*(code *)(undefined *)0x101d75170)();
  return param_1;
}



/* Entry: 101d7b39c; end: 101d7b3c3;  */

void FUN_101d7b39c(void)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 **ppuVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  ulong uVar28;
  long unaff_x20;
  undefined8 *puVar29;
  long lVar30;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar21 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar6 + 0x10,auStack_80,0,0);
  lVar30 = lVar6 + 0x10;
  func_0x000107c61648();
  puVar26 = (undefined8 *)0x0;
  if (lVar30 != 0) {
    puVar26 = *(undefined8 **)(lVar30 + 0x10);
    func_0x000107c6157c(puVar26);
    func_0x000107c61574(lVar30);
    func_0x0001000d224c(&puStack_d8);
    func_0x000107c61574();
    puVar3 = puStack_d8;
    if (puStack_d8 != (undefined8 *)0x0) {
      func_0x000107c61428(lVar6 + 0x10,auStack_98,0,0);
      lVar30 = lVar6 + 0x10;
      func_0x000107c61648();
      puVar26 = puVar3;
      if (lVar30 != 0) {
        uVar27 = *(undefined8 *)(lVar30 + 0x18);
        func_0x000107c6157c(uVar27);
        func_0x000107c61574(lVar30);
        func_0x0001000d224c(&puStack_d8);
        func_0x000107c61574(uVar27);
        puVar4 = puStack_d8;
        if (puStack_d8 != (undefined8 *)0x0) {
          func_0x000107c61428(lVar6 + 0x10,auStack_b0,0,0);
          lVar6 = lVar6 + 0x10;
          func_0x000107c61648();
          if (lVar6 != 0) {
            uVar27 = *(undefined8 *)(lVar6 + 0x20);
            func_0x000107c6157c(uVar27);
            func_0x000107c61574(lVar6);
            func_0x0001000d224c(&puStack_d8);
            func_0x000107c61574(uVar27);
            puVar26 = puStack_d8;
            ppuVar25 = *(undefined8 ***)(lVar21 + 0x10);
            ppuVar7 = (undefined8 **)PTR___swiftEmptyArrayStorage_11034f1c8;
            if (ppuVar25 != (undefined8 **)0x0) {
              func_0x000107c61434(lVar21);
              ppuVar7 = ppuVar25;
              func_0x00010109b448(ppuVar25,0);
              ppuVar8 = &puStack_d8;
              FUN_101d7dc74(ppuVar8,ppuVar7 + 4,ppuVar25,lVar21);
              FUN_101d7b404(puStack_d8,uStack_d0,uStack_c8,uStack_c0,uStack_b8);
              if (ppuVar8 != ppuVar25) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101d7acb8);
                (*pcVar5)();
              }
            }
            ppuVar25 = ppuVar7;
            func_0x000107c5fc48(ppuVar7,PTR___sSSN_11034da80);
            puVar9 = puVar3;
            func_0x000107c431d0();
            func_0x000107c61180();
            func_0x000107c61170(ppuVar25);
            puVar10 = (undefined8 *)0x0;
            FUN_101d7b40c();
            puVar22 = puVar9;
            func_0x000107c5fc54();
            func_0x000107c61170(puVar9);
            puVar9 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
            FUN_101d73800();
            if ((ulong)puVar22 >> 0x3e == 0) {
              puVar29 = *(undefined8 **)(((ulong)puVar22 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar29 = (undefined8 *)((ulong)puVar22 & 0xffffffffffffff8);
              if ((undefined8 *)0x7fffffffffffffff < puVar22) {
                puVar29 = puVar22;
              }
              func_0x000107c60480();
            }
            if (puVar29 != (undefined8 *)0x0) {
              lVar30 = 4;
              do {
                uVar28 = lVar30 - 4;
                if (((ulong)puVar22 & 0xc000000000000001) == 0) {
                  if (*(ulong *)(((ulong)puVar22 & 0xffffffffffffff8) + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x101d7a9a8);
                    (*pcVar5)();
                  }
                  uVar24 = puVar22[lVar30];
                  func_0x000107c61174();
                  puVar19 = puVar10;
                }
                else {
                  uVar24 = uVar28;
                  puVar19 = puVar22;
                  FUN_101d6ffd4();
                }
                puVar13 = (undefined8 *)(lVar30 + -3);
                if (SCARRY8(uVar28,1)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101d7a9a0);
                  (*pcVar5)();
                }
                uVar28 = uVar24;
                func_0x000107c5b2d0();
                func_0x000107c61180();
                if (uVar28 == 0) {
                  func_0x000107c61170(uVar24);
                  puVar10 = puVar19;
                }
                else {
                  uVar11 = uVar28;
                  func_0x000107c5faec();
                  func_0x000107c61170(uVar28);
                  func_0x000107c61174();
                  puVar12 = puVar9;
                  func_0x000107c61558();
                  uVar28 = uVar11;
                  puVar20 = puVar19;
                  puStack_d8 = puVar9;
                  func_0x000100029284();
                  uVar23 = (ulong)~(uint)puVar20 & 1;
                  lVar6 = puVar9[2] + uVar23;
                  if (SCARRY8(puVar9[2],uVar23)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x101d7a9a4);
                    (*pcVar5)();
                  }
                  if ((long)puVar9[3] < lVar6) {
                    func_0x000101d81130(lVar6,puVar12);
                    uVar28 = uVar11;
                    puVar10 = puVar19;
                    func_0x000100029284();
                    if (((uint)puVar20 & 1) != ((uint)puVar10 & 1)) {
                      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x101d7acc8);
                      (*pcVar5)();
                    }
                  }
                  else {
                    puVar10 = puVar20;
                    if (((ulong)puVar12 & 1) == 0) {
                      FUN_101d80fac();
                    }
                  }
                  puVar9 = puStack_d8;
                  if (((ulong)puVar20 & 1) == 0) {
                    puStack_d8[(uVar28 >> 6) + 8] =
                         puStack_d8[(uVar28 >> 6) + 8] | 1L << (uVar28 & 0x3f);
                    puVar1 = (ulong *)(puStack_d8[6] + uVar28 * 0x10);
                    *puVar1 = uVar11;
                    puVar1[1] = (ulong)puVar19;
                    *(ulong *)(puStack_d8[7] + uVar28 * 8) = uVar24;
                    func_0x000107c61170(uVar24);
                    if (SCARRY8(puVar9[2],1)) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x101d7a9ac);
                      (*pcVar5)();
                    }
                    puVar9[2] = puVar9[2] + 1;
                  }
                  else {
                    uVar27 = *(undefined8 *)(puStack_d8[7] + uVar28 * 8);
                    *(ulong *)(puStack_d8[7] + uVar28 * 8) = uVar24;
                    func_0x000107c61170(uVar24);
                    func_0x000107c6142c(puVar19);
                    func_0x000107c61170(uVar27);
                  }
                }
                lVar30 = lVar30 + 1;
              } while (puVar13 != puVar29);
            }
            func_0x000107c6142c(puVar22);
            puVar10 = ppuVar7[2];
            puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (puVar10 == (undefined8 *)0x0) {
LAB_101d7ac14:
              func_0x000107c61574(ppuVar7);
              func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
              puVar17 = puVar18;
              func_0x00010488813c(puVar18);
              func_0x000107c6142c(puVar18);
              func_0x000107c615f0(puVar26);
              func_0x000107c6157c(uVar2);
              func_0x00010075a04c(puVar26,1,FUN_101d7b450,uVar2);
              func_0x000107c6142c(puVar9);
              func_0x000107c61574(puVar17);
              func_0x000107c61574(uVar2);
              func_0x000107c615e8(puVar3);
              func_0x000107c615ec(puVar26,2);
              func_0x000107c615e8(puVar4);
              return;
            }
            puVar22 = (undefined8 *)0x0;
LAB_101d7a9f0:
            ppuVar25 = ppuVar7 + (long)puVar22 * 2 + 5;
            puVar29 = puVar22;
            do {
              if (ppuVar7[2] <= puVar29) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101d7acb4);
                (*pcVar5)();
              }
              if (puVar9[2] != 0) {
                puVar22 = ppuVar25[-1];
                puVar19 = *ppuVar25;
                func_0x000107c61434(puVar19);
                func_0x000107c61434(puVar9);
                puVar13 = puVar22;
                puVar12 = puVar19;
                func_0x000100029284();
                if (((ulong)puVar12 & 1) == 0) {
                  func_0x000107c6142c(puVar9);
                }
                else {
                  uVar27 = *(undefined8 *)(puVar9[7] + (long)puVar13 * 8);
                  func_0x000107c61174(uVar27);
                  func_0x000107c6142c(puVar9);
                  if (*(long *)(lVar21 + 0x10) != 0) {
                    func_0x000107c61434(lVar21);
                    puVar13 = puVar19;
                    func_0x000100029284();
                    if (((ulong)puVar13 & 1) != 0) goto LAB_101d7aaa8;
                    func_0x000107c6142c(lVar21);
                  }
                  func_0x000107c61170(uVar27);
                }
                func_0x000107c6142c(puVar19);
              }
              puVar29 = (undefined8 *)((long)puVar29 + 1);
              ppuVar25 = ppuVar25 + 2;
              if (puVar10 == puVar29) goto LAB_101d7ac14;
            } while( true );
          }
          func_0x000107c615e8(puVar3);
          puVar26 = puVar4;
        }
      }
      func_0x000107c615e8();
    }
  }
  FUN_101d7b3c4();
  puVar18 = &UNK_110480158;
  func_0x000107c613f8(&UNK_110480158,puVar26,0,0);
  *puVar26 = 0;
  *(undefined1 *)(puVar26 + 1) = 1;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar18);
  return;
LAB_101d7aaa8:
  uVar14 = *(undefined8 *)(*(long *)(lVar21 + 0x38) + (long)puVar22 * 8);
  func_0x000107c61174(uVar14);
  func_0x000107c6142c(lVar21);
  func_0x0001000285a8(0x112deef20,&UNK_10da12e20);
  puVar22 = puVar4;
  func_0x000107c5d558(puVar4);
  func_0x000107c61180();
  puVar13 = puVar22;
  func_0x000100759c94();
  func_0x000107c61170(puVar22);
  uVar15 = 0;
  func_0x000100775264(0,1,FUN_101d7acc8,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar27);
  func_0x000107c6142c(puVar19);
  puVar17 = puVar18;
  func_0x000107c61550();
  if ((((int)puVar17 == 0) || ((long)puVar18 < 0)) ||
     (puVar17 = puVar18, ((ulong)puVar18 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar18 >> 0x3e == 0) {
      puVar16 = *(undefined **)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar16 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar18) {
        puVar16 = puVar18;
      }
      func_0x000107c60480(puVar16);
    }
    puVar17 = (undefined *)0x0;
    FUN_101d72770(0,puVar16 + 1,1,puVar18);
  }
  uVar24 = (ulong)puVar17 & 0xffffffffffffff8;
  uVar28 = *(ulong *)(uVar24 + 0x10);
  puVar18 = puVar17;
  if (*(ulong *)(uVar24 + 0x18) >> 1 <= uVar28) {
    puVar18 = (undefined *)(ulong)(1 < *(ulong *)(uVar24 + 0x18));
    FUN_101d72770(puVar18,uVar28 + 1,1,puVar17);
    uVar24 = (ulong)puVar18 & 0xffffffffffffff8;
  }
  puVar22 = (undefined8 *)((long)puVar29 + 1);
  *(ulong *)(uVar24 + 0x10) = uVar28 + 1;
  *(undefined8 *)(uVar24 + uVar28 * 8 + 0x20) = uVar15;
  if ((undefined8 *)((long)puVar10 + -1) == puVar29) goto LAB_101d7ac14;
  goto LAB_101d7a9f0;
}



/* Entry: 101d7b3c4; end: 101d7b403;  */

void FUN_101d7b3c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a560 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da13260;
  func_0x000107c61520(&UNK_10da13260,&UNK_110480158);
  puRam0000000112e2a560 = puVar1;
  return;
}



/* Entry: 101d7b404; end: 101d7b40b;  */

void FUN_101d7b404(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101d7b40c; end: 101d7b44f;  */

void FUN_101d7b40c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e28b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126bc7d8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e28b08 = puVar1;
  return;
}



/* Entry: 101d7b450; end: 101d7b473;  */

void FUN_101d7b450(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x00010488ade0(*param_1);
  }
  else {
    func_0x000100b60084();
  }
  return;
}



/* Entry: 101d7b474; end: 101d7bb83;  */

undefined ** FUN_101d7b474(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  bool bVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  undefined *puStack_268;
  undefined *puStack_250;
  undefined *puStack_200;
  undefined1 auStack_1f0 [96];
  undefined1 auStack_190 [16];
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined8 uStack_87;
  undefined *puStack_78;
  
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((param_1 != 0) && (uVar25 = *(ulong *)(param_1 + 0x10), uVar25 != 0)) {
    uVar24 = 0;
    do {
      puStack_200 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      uVar23 = uVar24;
      if (uVar24 <= uVar25) {
        uVar23 = uVar25;
      }
      puVar15 = (undefined8 *)(param_1 + 0x50 + uVar24 * 0x60);
      uVar24 = uVar24 + 1;
      while( true ) {
        if (uVar24 - uVar23 == 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101d7bb70);
          (*pcVar7)();
        }
        lVar26 = puVar15[-5];
        if ((lVar26 != 0) && (*(char *)(puVar15 + -3) != '\x01')) break;
        uVar24 = uVar24 + 1;
        puVar15 = puVar15 + 0xc;
        if (uVar24 - uVar25 == 1) goto LAB_101d7bb18;
      }
      uVar17 = puVar15[-6];
      uVar20 = puVar15[-4];
      uVar1 = *puVar15;
      uVar3 = puVar15[1];
      uVar2 = puVar15[2];
      uVar4 = puVar15[3];
      uVar6 = *(undefined1 *)(puVar15 + 4);
      lVar28 = puVar15[5];
      if (lVar28 == 0) {
        func_0x000107c61434(uVar3);
        func_0x000107c61434(lVar26);
        puStack_200 = (undefined *)0x0;
      }
      else {
        puStack_78 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
        uVar18 = 1L << ((ulong)*(byte *)(lVar28 + 0x20) & 0x3f);
        uVar23 = 0xffffffffffffffff;
        if ((*(byte *)(lVar28 + 0x20) & 0x3f) < 6) {
          uVar23 = ~(-1L << (uVar18 & 0x3f));
        }
        uVar23 = uVar23 & *(ulong *)(lVar28 + 0x40);
        func_0x000107c61438(lVar26,2);
        func_0x000107c61438(uVar3,2);
        func_0x000107c61438(lVar28,2);
        lVar27 = 0;
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        while( true ) {
          while (PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar11, uVar23 != 0) {
            uVar16 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar23 = uVar23 - 1 & uVar23;
            uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar27 << 6;
            puVar15 = (undefined8 *)(*(long *)(lVar28 + 0x30) + uVar16 * 0x10);
            puVar12 = (undefined *)*puVar15;
            uVar5 = puVar15[1];
            puVar15 = (undefined8 *)(*(long *)(lVar28 + 0x38) + uVar16 * 0x50);
            uStack_118 = puVar15[3];
            uStack_120 = puVar15[2];
            uVar29 = puVar15[5];
            uStack_110 = puVar15[4];
            uStack_87 = *(undefined8 *)((long)puVar15 + 0x41);
            lVar32 = puVar15[6];
            uStack_f8 = (undefined1)puVar15[7];
            uStack_ef = (undefined7)uStack_87;
            uStack_e8 = (undefined1)((ulong)uStack_87 >> 0x38);
            uStack_f7 = (undefined7)*(undefined8 *)((long)puVar15 + 0x39);
            uStack_f0 = (undefined1)((ulong)*(undefined8 *)((long)puVar15 + 0x39) >> 0x38);
            lVar31 = puVar15[1];
            uVar30 = *puVar15;
            uStack_90 = uStack_f8;
            uStack_8f = uStack_f7;
            uStack_130 = uVar30;
            lStack_128 = lVar31;
            uStack_108 = uVar29;
            lStack_100 = lVar32;
            puStack_d8 = puVar12;
            uStack_d0 = uVar5;
            uStack_c8 = uVar30;
            lStack_c0 = lVar31;
            uStack_b8 = uStack_120;
            uStack_b0 = uStack_118;
            uStack_a8 = uStack_110;
            uStack_a0 = uVar29;
            lStack_98 = lVar32;
            uStack_88 = uStack_f0;
            if (lVar31 == 1) {
              func_0x000107c61434();
            }
            else {
              if (lVar31 == 0) {
                func_0x000107c61434();
                FUN_101d7bb84(&uStack_130,auStack_190,0x112e2a228,&UNK_10da127e0);
                puStack_268 = (undefined *)0x0;
              }
              else {
                func_0x000107c610f8();
                func_0x000107c61434(uVar5);
                FUN_101d7bb84(&uStack_130,auStack_190,0x112e2a228,&UNK_10da127e0);
                func_0x000107c47580();
                puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x000107c610f8();
                func_0x000107c46ed0();
                puStack_268 = PTR_PTR_1126e0dd0;
                func_0x000107c610f8();
                func_0x000107c5fadc(uVar30,lVar31);
                func_0x000107c49438();
                func_0x000107c61170(puVar11);
                func_0x000107c61170(puVar9);
                func_0x000107c61170(uVar30);
                if (puStack_268 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x101d7bb84);
                  (*pcVar7)();
                }
              }
              if (lVar32 == 0) {
                puStack_250 = (undefined *)0x0;
              }
              else {
                puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x000107c610f8();
                func_0x000107c47580();
                puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x000107c610f8();
                func_0x000107c46ed0();
                puStack_250 = PTR_PTR_1126e0dd0;
                func_0x000107c610f8();
                func_0x000107c5fadc(uVar29,lVar32);
                func_0x000107c49438();
                func_0x000107c61170(puVar11);
                func_0x000107c61170(puVar9);
                func_0x000107c61170(uVar29);
                if (puStack_250 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x101d7bb80);
                  (*pcVar7)();
                }
              }
              puVar11 = PTR_PTR_1126d2c48;
              func_0x000107c610f8();
              func_0x000107c467a0();
              func_0x000107c61170(puStack_268);
              func_0x000107c61170(puStack_250);
              if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x101d7bb7c);
                (*pcVar7)();
              }
              uStack_13f = CONCAT17(uStack_e8,uStack_ef);
              uStack_140 = uStack_f0;
              uStack_158 = uStack_108;
              uStack_160 = uStack_110;
              uStack_148 = uStack_f8;
              uStack_147 = uStack_f7;
              lStack_150 = lStack_100;
              lStack_178 = lStack_128;
              uStack_180 = uStack_130;
              uStack_168 = uStack_118;
              uStack_170 = uStack_120;
              uVar16 = *(ulong *)(puStack_200 + 0x10);
              if (uVar16 < *(ulong *)(puStack_200 + 0x18)) {
                FUN_101d7bb84(&puStack_d8,auStack_1f0,0x112e2a578,&UNK_10da12e38);
              }
              else {
                FUN_101d7bb84(&puStack_d8,auStack_1f0,0x112e2a578,&UNK_10da12e38);
                FUN_101d8111c(uVar16 + 1,1);
                puStack_200 = puStack_78;
              }
              func_0x000107c6068c(auStack_1f0,*(undefined8 *)(puStack_200 + 0x28));
              puVar10 = auStack_1f0;
              func_0x000107c5fb58(puVar10,puVar12,uVar5);
              func_0x000107c606a8();
              uVar19 = -1L << ((ulong)(byte)puStack_200[0x20] & 0x3f);
              uVar22 = (ulong)puVar10 & (uVar19 ^ 0xffffffffffffffff);
              uVar21 = uVar22 >> 6;
              uVar16 = -1L << (uVar22 & 0x3f) &
                       (*(ulong *)(puStack_200 + uVar21 * 8 + 0x40) ^ 0xffffffffffffffff);
              if (uVar16 == 0) {
                bVar8 = false;
                uVar16 = 0x3f - uVar19 >> 6;
                do {
                  uVar19 = uVar21 + 1;
                  if ((uVar19 == uVar16) && (bVar8)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x101d7bb78);
                    (*pcVar7)();
                  }
                  uVar21 = 0;
                  if (uVar19 != uVar16) {
                    uVar21 = uVar19;
                  }
                  bVar8 = (bool)(uVar19 == uVar16 | bVar8);
                } while (*(ulong *)(puStack_200 + uVar21 * 8 + 0x40) == 0xffffffffffffffff);
                uVar16 = ~*(ulong *)(puStack_200 + uVar21 * 8 + 0x40);
                uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
                uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
                uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
                uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | uVar21 << 6;
              }
              else {
                uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
                uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
                uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
                uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | uVar22 & 0x7fffffffffffffc0;
              }
              uVar21 = uVar16 >> 3 & 0x1ffffffffffffff8;
              *(ulong *)(puStack_200 + uVar21 + 0x40) =
                   1L << (uVar16 & 0x3f) | *(ulong *)(puStack_200 + uVar21 + 0x40);
              puVar15 = (undefined8 *)(*(long *)(puStack_200 + 0x30) + uVar16 * 0x10);
              *puVar15 = puVar12;
              puVar15[1] = uVar5;
              *(undefined **)(*(long *)(puStack_200 + 0x38) + uVar16 * 8) = puVar11;
              *(long *)(puStack_200 + 0x10) = *(long *)(puStack_200 + 0x10) + 1;
              FUN_101d7bc1c(&uStack_180,0x112e2a228,&UNK_10da127e0);
            }
            FUN_101d7bc1c(&puStack_d8,0x112e2a578,&UNK_10da12e38);
            puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          }
          bVar8 = SCARRY8(lVar27,1);
          lVar27 = lVar27 + 1;
          if (bVar8) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101d7bb74);
            (*pcVar7)();
          }
          if ((long)(uVar18 + 0x3f >> 6) <= lVar27) break;
          uVar23 = ((ulong *)(lVar28 + 0x40))[lVar27];
        }
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(lVar26);
        func_0x000107c61574(lVar28);
        func_0x000107c6142c(lVar28);
      }
      puVar11 = puVar13;
      func_0x000107c61558();
      puVar12 = puVar13;
      if (((ulong)puVar11 & 1) == 0) {
        puVar12 = (undefined *)0x0;
        FUN_101d7264c(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
      }
      uVar23 = *(ulong *)(puVar12 + 0x10);
      puVar13 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar23) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        FUN_101d7264c(puVar13,uVar23 + 1,1,puVar12);
      }
      *(ulong *)(puVar13 + 0x10) = uVar23 + 1;
      *(undefined8 *)(puVar13 + uVar23 * 0x48 + 0x20) = uVar17;
      *(long *)(puVar13 + uVar23 * 0x48 + 0x28) = lVar26;
      *(undefined8 *)(puVar13 + uVar23 * 0x48 + 0x30) = uVar20;
      *(undefined8 *)(puVar13 + uVar23 * 0x48 + 0x38) = uVar1;
      *(undefined8 *)(puVar13 + uVar23 * 0x48 + 0x40) = uVar3;
      *(undefined8 *)(puVar13 + uVar23 * 0x48 + 0x48) = uVar2;
      *(undefined8 *)(puVar13 + uVar23 * 0x48 + 0x50) = uVar4;
      puVar13[uVar23 * 0x48 + 0x58] = uVar6;
      *(undefined **)(puVar13 + uVar23 * 0x48 + 0x60) = puStack_200;
    } while (uVar24 != uVar25);
  }
LAB_101d7bb18:
  puStack_d8 = puVar13;
  func_0x0001000285a8(0x112e2a570,&UNK_10da12e30);
  ppuVar14 = &puStack_d8;
  func_0x000104888f7c(ppuVar14);
  func_0x000107c6142c(puVar13);
  return ppuVar14;
}



/* Entry: 101d7bb84; end: 101d7bbcb;  */

undefined8 FUN_101d7bb84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101d7bbcc; end: 101d7bbdb;  */

void FUN_101d7bbcc(void)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long *plStack_58;
  long *plStack_50;
  char cStack_48;
  long *plVar7;
  
  plVar4 = *(long **)(unaff_x20 + 0x10);
  plVar1 = *(long **)(unaff_x20 + 0x18);
  cVar2 = *(char *)(unaff_x20 + 0x20);
  plVar3 = plVar4;
  if (cVar2 != '\x01') {
    plVar3 = plVar1;
    plVar7 = plVar1;
    func_0x000101d7bc9c();
    uVar6 = (uint)plVar7;
    if (((uint)plVar3 & 0xff) != 0x13) {
      if ((plVar4 != (long *)0x0) && (lVar8 = plVar4[2], lVar8 != 0)) {
        plVar7 = plVar4 + 9;
        do {
          if ((char)*plVar7 != '\x01') {
            lVar9 = plVar7[-1];
            if (lVar9 < 0x7d2) {
              if (lVar9 != 2000) {
                if ((lVar9 == -9999) || (lVar9 == 0x7d1)) {
                  lVar8 = 0x1b;
                  goto LAB_101d7afc0;
                }
LAB_101d7afe8:
                FUN_101d7b3c4();
                puVar5 = &UNK_110480158;
                func_0x000107c613f8(&UNK_110480158,plVar3,0,0);
                lVar8 = 0x14;
                goto LAB_101d7ad74;
              }
            }
            else {
              if (3999 < lVar9) {
                if (lVar9 < 0xfa7) {
                  if (lVar9 < 0xfa3) {
                    if (lVar9 == 4000) {
                      lVar8 = 0xd;
                    }
                    else if (lVar9 == 0xfa1) {
                      lVar8 = 0xe;
                    }
                    else {
                      if (lVar9 != 0xfa2) goto LAB_101d7afe8;
                      lVar8 = 0xf;
                    }
                  }
                  else if (lVar9 < 0xfa5) {
                    if (lVar9 == 0xfa3) {
                      lVar8 = 0x10;
                    }
                    else {
                      if (lVar9 != 0xfa4) goto LAB_101d7afe8;
                      lVar8 = 0x11;
                    }
                  }
                  else if (lVar9 == 0xfa5) {
                    lVar8 = 0x12;
                  }
                  else {
                    if (lVar9 != 0xfa6) goto LAB_101d7afe8;
                    lVar8 = 0x13;
                  }
                }
                else if (lVar9 < 0x138a) {
                  if (lVar9 < 5000) {
                    if (lVar9 == 0xfa7) {
                      lVar8 = 0x15;
                    }
                    else {
                      if (lVar9 != 0xfa8) goto LAB_101d7afe8;
                      lVar8 = 0x16;
                    }
                  }
                  else if (lVar9 == 5000) {
                    lVar8 = 0xb;
                  }
                  else {
                    if (lVar9 != 0x1389) goto LAB_101d7afe8;
                    lVar8 = 0xc;
                  }
                }
                else if (lVar9 < 0x138c) {
                  if (lVar9 == 0x138a) {
                    lVar8 = 0x17;
                  }
                  else {
                    if (lVar9 != 0x138b) goto LAB_101d7afe8;
                    lVar8 = 0x18;
                  }
                }
                else if (lVar9 == 0x138c) {
                  lVar8 = 0x19;
                }
                else {
                  if (lVar9 != 0x138d) goto LAB_101d7afe8;
                  lVar8 = 0x1a;
                }
LAB_101d7afc0:
                FUN_101d7b3c4();
                puVar5 = &UNK_110480158;
                func_0x000107c613f8(&UNK_110480158,plVar3,0,0);
                *plVar3 = lVar8;
                goto LAB_101d7ad78;
              }
              if (lVar9 != 0x7d2) goto LAB_101d7afe8;
            }
          }
          lVar8 = lVar8 + -1;
          plVar7 = plVar7 + 0xc;
        } while (lVar8 != 0);
      }
      func_0x000101d7bc6c();
      if ((uVar6 & 0xff00) == 0x100) {
        plStack_58 = plVar4;
        plStack_50 = plVar1;
        cStack_48 = cVar2;
        func_0x000100b60084(&plStack_58);
        return;
      }
      plVar4 = plVar3;
      FUN_101d7b3c4();
      puVar5 = &UNK_110480158;
      func_0x000107c613f8(&UNK_110480158,plVar4,0,0);
      *plVar4 = (long)plVar3;
      *(char *)(plVar4 + 1) = (char)uVar6;
      goto LAB_101d7ad80;
    }
  }
  FUN_101d7b3c4();
  puVar5 = &UNK_110480158;
  func_0x000107c613f8(&UNK_110480158,plVar3,0,0);
  lVar8 = 0x1b;
LAB_101d7ad74:
  *plVar3 = lVar8;
LAB_101d7ad78:
  *(undefined1 *)(plVar3 + 1) = 1;
LAB_101d7ad80:
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar5);
  return;
}



/* Entry: 101d7bbdc; end: 101d7bc1b;  */

void FUN_101d7bbdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2a588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12778;
  func_0x000107c61520(&UNK_10da12778,&UNK_11047f4d8);
  puRam0000000112e2a588 = puVar1;
  return;
}



/* Entry: 101d7bc1c; end: 101d7bc5b;  */

undefined8 FUN_101d7bc1c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101d7bc5c; end: 101d7be2f;  */

void FUN_101d7bc5c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101d7be30; end: 101d7be8b;  */

void FUN_101d7be30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d7be8c; end: 101d7c057;  */

code * FUN_101d7be8c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcStack_68;
  
  func_0x0001000d224c(&pcStack_68);
  pcVar4 = pcStack_68;
  if (pcStack_68 == (code *)0x0) {
    pcVar6 = (code *)0x0;
  }
  else {
    pcVar6 = pcStack_68;
    func_0x000107c5c698();
    func_0x000107c615e8(pcVar4);
  }
  puVar2 = &UNK_11047fa30;
  func_0x000107c613fc(&UNK_11047fa30,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_11047fa58;
  func_0x000107c613fc(&UNK_11047fa58,0x29,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  puVar3[0x28] = param_3;
  func_0x000107c6157c(puVar2);
  func_0x000107c61434(param_2);
  func_0x000107c61174();
  pcVar4 = FUN_101d7c2e4;
  FUN_101d7c56c(FUN_101d7c2e4,puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  for (; pcVar6 != (code *)0x0; pcVar6 = pcVar6 + -1) {
    func_0x0001000d224c(&pcStack_68);
    pcVar1 = pcStack_68;
    puVar2 = &UNK_11047fa30;
    func_0x000107c613fc(&UNK_11047fa30,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar3 = &UNK_11047fa80;
    func_0x000107c613fc(&UNK_11047fa80,0x29,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    puVar3[0x28] = param_3;
    func_0x000107c61434(param_2);
    func_0x000107c61174(param_1);
    pcVar5 = pcVar1;
    func_0x000104889f74(pcVar1,1,FUN_101d7c730,puVar3);
    func_0x000107c61574(pcVar4);
    func_0x000107c61170(pcVar1);
    func_0x000107c61574(puVar3);
    pcVar4 = pcVar5;
  }
  return pcVar4;
}



/* Entry: 101d7c058; end: 101d7c167;  */

undefined8
FUN_101d7c058(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    puVar1 = &UNK_11047fa30;
    func_0x000107c613fc(&UNK_11047fa30,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,param_2);
    puVar2 = &UNK_11047faa8;
    func_0x000107c613fc(&UNK_11047faa8,0x29,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    *(undefined8 *)(puVar2 + 0x20) = param_3;
    puVar2[0x28] = param_5;
    func_0x000107c6157c(puVar1);
    func_0x000107c61434(param_4);
    func_0x000107c61174(param_3);
    uVar3 = 0x101d7e514;
    FUN_101d7c56c(0x101d7e514,puVar2);
    func_0x000107c61574(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(puVar2);
  }
  return uVar3;
}



/* Entry: 101d7c168; end: 101d7c2e3;  */

/* WARNING: Removing unreachable block (ram,0x000101d7c1f4) */
/* WARNING: Removing unreachable block (ram,0x000101d7c1fc) */
/* WARNING: Removing unreachable block (ram,0x000101d7c254) */
/* WARNING: Removing unreachable block (ram,0x000101d7c23c) */

int FUN_101d7c168(long param_1,undefined8 param_2,int param_3,char param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    iVar4 = 1;
  }
  else {
    FUN_101d7dfe8(param_2);
    puVar2 = PTR_PTR_1126dea18;
    func_0x000107c61168(PTR_PTR_1126dea18);
    func_0x000107c3f7b0();
    func_0x000107c61180();
    FUN_101d7c2f4();
    func_0x000107c4e4f0();
    if (SBORROW4(param_3,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d7c2e4);
      (*pcVar1)();
    }
    func_0x000107c572d4(puVar2);
    if (param_4 != '\x02') {
      puVar3 = puVar2;
      func_0x000107c43c50(puVar2);
      func_0x000107c61180();
      func_0x000107c59b3c();
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61574(param_1);
    func_0x000107c61170(puVar2);
    iVar4 = 0;
  }
  return iVar4 << 8;
}



/* Entry: 101d7c2e4; end: 101d7c2f3;  */

/* WARNING: Removing unreachable block (ram,0x000101d7c1f4) */
/* WARNING: Removing unreachable block (ram,0x000101d7c1fc) */
/* WARNING: Removing unreachable block (ram,0x000101d7c254) */
/* WARNING: Removing unreachable block (ram,0x000101d7c23c) */

int FUN_101d7c2e4(void)

{
  undefined8 uVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  iVar7 = (int)*(undefined8 *)(unaff_x20 + 0x20);
  cVar2 = *(char *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 == 0) {
    iVar7 = 1;
  }
  else {
    FUN_101d7dfe8(uVar1);
    puVar5 = PTR_PTR_1126dea18;
    func_0x000107c61168(PTR_PTR_1126dea18);
    func_0x000107c3f7b0();
    func_0x000107c61180();
    FUN_101d7c2f4();
    func_0x000107c4e4f0();
    if (SBORROW4(iVar7,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101d7c2e4);
      (*pcVar3)();
    }
    func_0x000107c572d4(puVar5);
    if (cVar2 != '\x02') {
      puVar6 = puVar5;
      func_0x000107c43c50(puVar5);
      func_0x000107c61180();
      func_0x000107c59b3c();
      func_0x000107c61170(puVar6);
    }
    func_0x000107c61574(lVar4);
    func_0x000107c61170(puVar5);
    iVar7 = 0;
  }
  return iVar7 << 8;
}



/* Entry: 101d7c2f4; end: 101d7c56b;  */

void FUN_101d7c2f4(undefined8 param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_80 [8];
  ulong uStack_68;
  ulong uStack_58;
  
  puVar3 = (ulong *)0x0;
  func_0x000107c5ef8c();
  uVar9 = puVar3[-1];
  puVar4 = puVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uVar9 + 0x40));
  func_0x0001000d224c(&uStack_58);
  if (uStack_58 == 0) {
    func_0x000101d7c784();
    func_0x000107c613f8(&UNK_11047fc38,puVar4,0,0);
    *(undefined1 *)puVar4 = 2;
    func_0x000107c61654();
  }
  else {
    uVar5 = uStack_58;
    func_0x000107c432e8();
    func_0x000107c61180();
    uVar10 = uVar5;
    if (uVar5 == 0) {
      FUN_101d7e474();
      uVar6 = 0;
      func_0x000107c5fc54(0,uVar10);
      uVar10 = uVar6;
      func_0x000107c5fc48();
      func_0x000107c6142c(uVar6);
    }
    uVar7 = 0;
    FUN_101d7e474(0,0x112e28b08,&PTR_PTR_1126bc7d8);
    func_0x000107c5fc54(uVar5,uVar7);
    uVar6 = uVar5;
    FUN_101d7e298();
    func_0x000107c6142c(uVar5);
    func_0x000107c50024(param_1);
    func_0x000107c61170(uVar10);
    uVar5 = uVar6;
    func_0x000107c5fc48(uVar6,uVar7);
    if (uVar6 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
      func_0x000107c6142c();
    }
    else {
      uVar10 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar10 = uVar6;
      }
      func_0x000107c60480();
      func_0x000107c6142c(uVar6);
      if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101d7c56c);
        (*pcVar2)();
      }
    }
    FUN_101d7e430();
    puVar4 = puVar3;
    func_0x000107c60260(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puVar3,uVar6);
    if (uVar10 != 0) {
      uVar8 = 0;
      do {
        uVar1 = uVar8 + 1;
        puVar4 = &uStack_58;
        uStack_68 = uVar8;
        func_0x000107c60254(puVar4,&uStack_68,puVar3,uVar6);
        uVar8 = uVar1;
      } while (uVar10 != uVar1);
    }
    func_0x000107c5ef70();
    (**(code **)(uVar9 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puVar3);
    func_0x000107c4978c(param_1);
    func_0x000107c615e8(uStack_58);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 101d7c56c; end: 101d7c72f;  */

undefined * FUN_101d7c56c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lStack_58;
  
  func_0x0001000d224c(&lStack_58);
  lVar1 = lStack_58;
  if (lStack_58 == 0) {
    puVar5 = (undefined1 *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000101d7c784();
    puVar6 = &UNK_11047fc38;
    func_0x000107c613f8(&UNK_11047fc38,puVar5,0,0);
    *puVar5 = 1;
    puVar7 = puVar6;
    func_0x00010488904c();
    func_0x000107c614ac(puVar6);
  }
  else {
    func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
    func_0x000107c613fc();
    lVar2 = 0;
    func_0x00010095c380();
    func_0x0001000d224c(&lStack_58);
    puVar6 = &UNK_11047fad0;
    func_0x000107c613fc(&UNK_11047fad0,0x11,7);
    puVar6[0x10] = 5;
    puVar7 = &UNK_11047faf8;
    func_0x000107c613fc(&UNK_11047faf8,0x40,7);
    *(long *)(puVar7 + 0x10) = lVar1;
    *(undefined8 *)(puVar7 + 0x18) = param_1;
    *(undefined8 *)(puVar7 + 0x20) = param_2;
    *(undefined **)(puVar7 + 0x28) = puVar6;
    *(long *)(puVar7 + 0x30) = lVar2;
    *(long *)(puVar7 + 0x38) = lStack_58;
    uVar3 = 0;
    FUN_101d7e474(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000107c615f0(lVar1);
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(puVar6);
    func_0x000107c6157c(lVar2);
    lVar4 = lStack_58;
    func_0x000107c61174(lStack_58);
    func_0x00010090569c(FUN_101d7c940,puVar7,uVar3);
    func_0x000107c61574(puVar7);
    func_0x000107c61170(lVar4);
    func_0x000107c615e8(lVar1);
    puVar7 = *(undefined **)(lVar2 + 0x10);
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(lVar2);
    func_0x000107c61574(puVar6);
  }
  return puVar7;
}



/* Entry: 101d7c730; end: 101d7c7c3;  */

void FUN_101d7c730(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d7c058(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101d7c7c4; end: 101d7c93f;  */

void FUN_101d7c7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar4 = &puStack_90;
  puVar2 = &UNK_11047fb20;
  func_0x000107c613fc(&UNK_11047fb20,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_101d7c950;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11047fb38;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c4e554(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = &UNK_11047fb70;
  func_0x000107c613fc(&UNK_11047fb70,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  pcStack_70 = FUN_101d7ca88;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = (undefined *)0x101c871e4;
  puStack_78 = &UNK_11047fb88;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c5dc64(param_1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101d7c940; end: 101d7c94f;  */

void FUN_101d7c940(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  ppuVar7 = &puStack_90;
  ppuVar9 = &puStack_90;
  puVar6 = &UNK_11047fb20;
  func_0x000107c613fc(&UNK_11047fb20,0x28,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar3;
  *(undefined8 *)(puVar6 + 0x18) = uVar1;
  *(undefined8 *)(puVar6 + 0x20) = uVar4;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_101d7c950;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_11047fb38;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4e554(uVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar6 = &UNK_11047fb70;
  func_0x000107c613fc(&UNK_11047fb70,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar4;
  *(undefined8 *)(puVar6 + 0x18) = uVar2;
  pcStack_70 = FUN_101d7ca88;
  puStack_90 = puVar5;
  uStack_88 = 0x42000000;
  puStack_80 = (undefined *)0x101c871e4;
  puStack_78 = &UNK_11047fb88;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(puVar6);
  func_0x000107c5dc64(uVar8);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(uVar8);
  return;
}



/* Entry: 101d7c950; end: 101d7c9af;  */

void FUN_101d7c950(uint param_1)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18));
  if ((param_1 & 0xff00) == 0x100) {
    func_0x000107c61428(lVar1 + 0x10,auStack_48,1,0);
    *(char *)(lVar1 + 0x10) = (char)param_1;
  }
  return;
}



/* Entry: 101d7c9b0; end: 101d7c9cb;  */

void FUN_101d7c9b0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101d7c9cc; end: 101d7ca87;  */

void FUN_101d7c9cc(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined1 auStack_48 [24];
  
  pcVar2 = (char *)(param_3 + 0x10);
  func_0x000107c61428(pcVar2,auStack_48,0,0);
  cVar1 = *(char *)(param_3 + 0x10);
  if (cVar1 == '\x05') {
    if (param_2 == 0) {
      func_0x000100b60084();
      return;
    }
    func_0x000101d7c784();
    puVar3 = &UNK_11047fc38;
    func_0x000107c613f8(&UNK_11047fc38,pcVar2,0,0);
    *pcVar2 = '\x03';
  }
  else {
    func_0x000101d7c784();
    puVar3 = &UNK_11047fc38;
    func_0x000107c613f8(&UNK_11047fc38,pcVar2,0,0);
    *pcVar2 = cVar1;
  }
  func_0x00010488ade0();
  func_0x000107c614ac(puVar3);
  return;
}



/* Entry: 101d7ca88; end: 101d7ca8f;  */

void FUN_101d7ca88(undefined8 param_1,long param_2)

{
  long lVar1;
  char cVar2;
  char *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = (char *)(lVar1 + 0x10);
  func_0x000107c61428(pcVar3,auStack_48,0,0);
  cVar2 = *(char *)(lVar1 + 0x10);
  if (cVar2 == '\x05') {
    if (param_2 == 0) {
      func_0x000100b60084();
      return;
    }
    func_0x000101d7c784();
    puVar4 = &UNK_11047fc38;
    func_0x000107c613f8(&UNK_11047fc38,pcVar3,0,0);
    *pcVar3 = '\x03';
  }
  else {
    func_0x000101d7c784();
    puVar4 = &UNK_11047fc38;
    func_0x000107c613f8(&UNK_11047fc38,pcVar3,0,0);
    *pcVar3 = cVar2;
  }
  func_0x00010488ade0();
  func_0x000107c614ac(puVar4);
  return;
}



/* Entry: 101d7ca90; end: 101d7cd27;  */

undefined * FUN_101d7ca90(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [32];
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    uVar7 = 0x112e02f90;
    func_0x0001000285a8(0x112e02f90,&UNK_10d9d5580);
    func_0x000107c60498(puVar11,uVar7);
    puVar12 = puVar11;
  }
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434(param_1);
  lVar15 = 0;
  while( true ) {
    while (uVar14 == 0) {
      bVar5 = SCARRY8(lVar15,1);
      lVar15 = lVar15 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101d7cd20);
        (*pcVar4)();
      }
      if ((long)(uVar10 + 0x3f >> 6) <= lVar15) {
        func_0x000107c61574(param_1);
        return puVar12;
      }
      uVar14 = ((ulong *)(param_1 + 0x40))[lVar15];
    }
    uVar13 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
    uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
    uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar15 << 6;
    func_0x0001007bbd18(*(long *)(param_1 + 0x30) + uVar13 * 0x28,auStack_a8);
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar13 * 0x20,auStack_80);
    func_0x0001007bbd18(auStack_a8,auStack_d0);
    iVar6 = (int)&uStack_e0;
    func_0x000107c6147c(&uStack_e0,auStack_d0,PTR___ss11AnyHashableVN_11034e448,PTR___sSSN_11034da80
                        ,6);
    uVar3 = uStack_d8;
    uVar13 = uStack_e0;
    if (iVar6 == 0) break;
    func_0x0001000bb420(auStack_80,auStack_d0);
    func_0x0001014b7d40(auStack_a8);
    uVar7 = 0;
    FUN_101d7e474(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar8 = 0;
    func_0x000107c6147c(&uStack_e0,auStack_d0,PTR___sypN_11034f1a8 + 8,uVar7,6);
    uVar2 = uStack_e0;
    if ((uVar8 & 1) == 0) {
      func_0x000107c6142c(uVar3);
      goto LAB_101d7cce0;
    }
    uVar14 = uVar14 - 1 & uVar14;
    uVar8 = uVar13;
    uVar9 = uVar3;
    func_0x000100029284();
    if ((uVar9 & 1) == 0) {
      if (*(ulong *)(puVar12 + 0x18) <= *(ulong *)(puVar12 + 0x10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101d7cd24);
        (*pcVar4)();
      }
      uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar12 + uVar9 + 0x40) = *(ulong *)(puVar12 + uVar9 + 0x40) | 1L << (uVar8 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar8 * 0x10);
      *puVar1 = uVar13;
      puVar1[1] = uVar3;
      *(ulong *)(*(long *)(puVar12 + 0x38) + uVar8 * 8) = uVar2;
      if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101d7cd28);
        (*pcVar4)();
      }
      *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
    }
    else {
      puVar1 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar8 * 0x10);
      uVar9 = puVar1[1];
      *puVar1 = uVar13;
      puVar1[1] = uVar3;
      func_0x000107c6142c(uVar9);
      uVar7 = *(undefined8 *)(*(long *)(puVar12 + 0x38) + uVar8 * 8);
      *(ulong *)(*(long *)(puVar12 + 0x38) + uVar8 * 8) = uVar2;
      func_0x000107c61170(uVar7);
    }
  }
  func_0x0001014b7d40(auStack_a8);
  uStack_d8 = 0;
LAB_101d7cce0:
  uStack_e0 = 0;
  func_0x000107c61574(puVar12);
  func_0x000107c61574(param_1);
  return (undefined *)0x0;
}



/* Entry: 101d7cd28; end: 101d7ce13;  */

void FUN_101d7cd28(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_101d7d9b0(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_101d7da60(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d7ce10);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101d7ce14);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d7ce0c);
  (*pcVar1)();
}



/* Entry: 101d7ce14; end: 101d7d5b3;  */

undefined8 FUN_101d7ce14(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uStack_68;
  
  uVar7 = *unaff_x20;
  if ((uVar7 & 0xc000000000000001) == 0) {
    FUN_101d7e474(0,0x112e28b08,&PTR_PTR_1126bc7d8);
    uVar3 = *(ulong *)(uVar7 + 0x28);
    func_0x000107c60114();
    uVar6 = -1L << ((ulong)*(byte *)(uVar7 + 0x20) & 0x3f);
    uVar3 = uVar3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
      do {
        uVar4 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
        func_0x000107c61174();
        uVar5 = uVar4;
        func_0x000107c60118();
        func_0x000107c61170(uVar4);
        if ((uVar5 & 1) != 0) {
          func_0x000107c61170(param_2);
          *param_1 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
          func_0x000107c61174();
          return 0;
        }
        uVar3 = uVar3 + 1 & ~uVar6;
      } while ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
    }
    func_0x000107c61558(*unaff_x20);
    uStack_68 = *unaff_x20;
    func_0x000107c61174();
    func_0x000101d7d258();
    *unaff_x20 = uStack_68;
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar3 = uVar7;
    }
    func_0x000107c61174();
    func_0x000107c61434(uVar7);
    uVar6 = param_2;
    func_0x000107c602a0(param_2,uVar3);
    func_0x000107c61170(param_2);
    if (uVar6 != 0) {
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(param_2);
      uVar2 = 0;
      uStack_68 = uVar6;
      FUN_101d7e474(0,0x112e28b08,&PTR_PTR_1126bc7d8);
      func_0x000107c6147c(param_1,&uStack_68,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return 0;
    }
    uVar6 = uVar3;
    func_0x000107c6029c();
    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d7d05c);
      (*pcVar1)();
    }
    func_0x000101d7d05c(uVar3,uVar6 + 1);
    uVar6 = *(ulong *)(uVar3 + 0x10);
    uStack_68 = uVar3;
    if (uVar6 < *(ulong *)(uVar3 + 0x18)) {
      func_0x000107c61174(param_2);
    }
    else {
      func_0x000107c61174(param_2);
      FUN_101d7d704(uVar6 + 1);
      uVar3 = uStack_68;
    }
    FUN_101d7d930(param_2,uVar3);
    func_0x000107c6142c(uVar7);
    *unaff_x20 = uVar3;
  }
  *param_1 = param_2;
  return 1;
}



/* Entry: 101d7d5b4; end: 101d7d703;  */

void FUN_101d7d5b4(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001000285a8(0x112e2a660,&UNK_10da12f78);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c602dc();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_101d7d690;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x000107c61174();
        if (uVar5 != 0) break;
LAB_101d7d690:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101d7d704);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_101d7d6dc;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_101d7d6dc:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101d7d704; end: 101d7d92f;  */

void FUN_101d7d704(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar11 = 0x112e2a660;
  func_0x0001000285a8(0x112e2a660,&UNK_10da12f78);
  lVar4 = lVar12;
  func_0x000107c602e0(lVar12,lVar1,1,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_101d7d900:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *puVar13;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d7d92c);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar15 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
            *puVar13 = -1L << (uVar15 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar13,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_101d7d900;
        }
        uVar15 = puVar13[lVar14];
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar7;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60114();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d7d930);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Entry: 101d7d930; end: 101d7d9af;  */

void FUN_101d7d930(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  func_0x000107c60114();
  lVar1 = param_2 + 0x38;
  uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  func_0x000107c60274(uVar2,lVar1,~uVar3);
  uVar3 = uVar2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = 1L << (uVar2 & 0x3f) | *(ulong *)(lVar1 + uVar3);
  *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar2 * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}


