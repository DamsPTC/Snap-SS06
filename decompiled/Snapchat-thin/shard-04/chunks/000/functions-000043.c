/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102fece40; end: 102fece93;  */

long FUN_102fece40(char *param_1)

{
  long lVar1;
  char *unaff_x20;
  
  if (((unaff_x20[0x38] == '\x01') && (*unaff_x20 == '\x01')) && (*param_1 == '\x01')) {
    lVar1 = *(long *)(unaff_x20 + 8);
    if (lVar1 != *(long *)(param_1 + 8) || *(long *)(unaff_x20 + 0x10) != *(long *)(param_1 + 0x10))
    {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(lVar1);
      return lVar1;
    }
    return 1;
  }
  return 0;
}



/* Entry: 102fece94; end: 102fed10f;  */

/* WARNING: Removing unreachable block (ram,0x000102fed004) */

void FUN_102fece94(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_60 [4];
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x112f30d68;
  func_0x0001000285a8(0x112f30d68,&UNK_10db75f80);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_60 + -extraout_x8;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar4);
  FUN_102feef78();
  puVar3 = &UNK_1105fa610;
  func_0x000107c606ec(puVar6,&UNK_1105fa610,&UNK_1105fa610,param_1,uVar4,uVar1);
  uStack_51 = *unaff_x20;
  uStack_52 = 0;
  func_0x000102feefb8();
  func_0x000107c60554(&uStack_51,&uStack_52,lVar2,&UNK_1105f9ff0,puVar3);
  if (unaff_x21 == 0) {
    uStack_53 = 1;
    func_0x000107c6053c(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),&uStack_53,
                        lVar2);
    uStack_54 = 2;
    func_0x000107c6053c(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                        &uStack_54,lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_55 = 3;
    func_0x000107c6053c(uVar4,*(undefined8 *)(unaff_x20 + 0x30),&uStack_55,lVar2);
    uStack_56 = unaff_x20[0x38];
    uStack_57 = 4;
    func_0x000102feeff8();
    func_0x000107c60554(&uStack_56,&uStack_57,lVar2,&UNK_1105fa080,uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_58 = 5;
    func_0x000107c6053c(uVar4,*(undefined8 *)(unaff_x20 + 0x48),&uStack_58,lVar2);
    uStack_59 = unaff_x20[0x50];
    uStack_5a = 6;
    func_0x000102fef038();
    puVar5 = &uStack_59;
    func_0x000107c60554(puVar5,&uStack_5a,lVar2,&UNK_1105fa110,uVar4);
    uStack_5b = unaff_x20[0x51];
    uStack_5c = 7;
    func_0x000102fef078();
    func_0x000107c60554(&uStack_5b,&uStack_5c,lVar2,&UNK_1105fa1a0,puVar5);
    (**(code **)(lVar7 + 8))(puVar6,lVar2);
  }
  else {
    (**(code **)(lVar7 + 8))(puVar6,lVar2);
  }
  return;
}



/* Entry: 102fed110; end: 102fed2ab;  */

/* WARNING: Possible PIC construction at 0x000102fed174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fed1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fed24c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fed1e4) */
/* WARNING: Removing unreachable block (ram,0x000102fed218) */
/* WARNING: Removing unreachable block (ram,0x000102fed238) */
/* WARNING: Removing unreachable block (ram,0x000102fed178) */
/* WARNING: Removing unreachable block (ram,0x000102fed1c4) */
/* WARNING: Removing unreachable block (ram,0x000102fed1cc) */
/* WARNING: Removing unreachable block (ram,0x000102fed250) */
/* WARNING: Removing unreachable block (ram,0x000102fed274) */
/* WARNING: Removing unreachable block (ram,0x000102fed288) */

void FUN_102fed110(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x6552646e65697266;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x654d6465646461;
  }
  uVar2 = 0xed00007473657571;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  func_0x000107c5fb58(param_1,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 102fed2ac; end: 102fed303;  */

void FUN_102fed2ac(undefined8 *param_1)

{
  long unaff_x21;
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
  undefined2 uStack_28;
  
  FUN_102feea30(&uStack_78);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_50;
    param_1[4] = uStack_58;
    param_1[7] = uStack_40;
    param_1[6] = uStack_48;
    param_1[9] = uStack_30;
    param_1[8] = uStack_38;
    *(undefined2 *)(param_1 + 10) = uStack_28;
    param_1[1] = uStack_70;
    *param_1 = uStack_78;
    param_1[3] = uStack_60;
    param_1[2] = uStack_68;
  }
  return;
}



/* Entry: 102fed304; end: 102fed317;  */

void FUN_102fed304(void)

{
  FUN_102fece94();
  return;
}



/* Entry: 102fed318; end: 102fed353;  */

void FUN_102fed318(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  FUN_102fed110(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 102fed354; end: 102fed357;  */

/* WARNING: Possible PIC construction at 0x000102fed174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fed1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102fed24c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102fed1e4) */
/* WARNING: Removing unreachable block (ram,0x000102fed218) */
/* WARNING: Removing unreachable block (ram,0x000102fed238) */
/* WARNING: Removing unreachable block (ram,0x000102fed178) */
/* WARNING: Removing unreachable block (ram,0x000102fed1c4) */
/* WARNING: Removing unreachable block (ram,0x000102fed1cc) */
/* WARNING: Removing unreachable block (ram,0x000102fed250) */
/* WARNING: Removing unreachable block (ram,0x000102fed274) */
/* WARNING: Removing unreachable block (ram,0x000102fed288) */

void FUN_102fed354(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x6552646e65697266;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x654d6465646461;
  }
  uVar2 = 0xed00007473657571;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  func_0x000107c5fb58(param_1,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 102fed358; end: 102fed38f;  */

void FUN_102fed358(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_102fed110(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 102fed390; end: 102fed3f7;  */

uint FUN_102fed390(undefined8 *param_1,undefined8 *param_2)

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
  undefined2 uStack_80;
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
  undefined2 uStack_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_80 = *(undefined2 *)(param_1 + 10);
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_20 = *(undefined2 *)(param_2 + 10);
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_102feee7c(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 102fed3f8; end: 102fed3ff;  */

undefined8 FUN_102fed3f8(void)

{
  return 1;
}



/* Entry: 102fed400; end: 102fed49f;  */

void FUN_102fed400(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102fed4a0; end: 102fed4c3;  */

undefined1  [16] FUN_102fed4a0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xed00006449726573;
  auVar1._0_8_ = 0x55746e6572727563;
  return auVar1;
}



/* Entry: 102fed4c4; end: 102fed54f;  */

void FUN_102fed4c4(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 99;
  if (param_2 == 0x55746e6572727563 && param_3 == -0x12ffff9bb68d9a8d) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8();
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 102fed550; end: 102fed567;  */

undefined1  [16] FUN_102fed550(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102fed568; end: 102fed5b7;  */

void FUN_102fed568(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000102fef0b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102fed5b8; end: 102fed6df;  */

/* WARNING: Removing unreachable block (ram,0x000102fed67c) */

void FUN_102fed5b8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112f30d98;
  func_0x0001000285a8(0x112f30d98,&UNK_10db75f90);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  func_0x000102fef0b8();
  puVar5 = &UNK_1105fa580;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1105fa580,&UNK_1105fa580,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604f4();
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



/* Entry: 102fed6e0; end: 102fed7cf;  */

void FUN_102fed6e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar6;
  
  lVar5 = 0x112f30d90;
  func_0x0001000285a8(0x112f30d90,&UNK_10db75f88);
  lVar6 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  func_0x000102fef0b8();
  func_0x000107c606ec(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1105fa580,&UNK_1105fa580,param_1,
                      uVar2,uVar4);
  func_0x000107c6053c(uVar1,uVar3);
  (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar5);
  return;
}



/* Entry: 102fed7d0; end: 102fed7fb;  */

undefined * FUN_102fed7d0(void)

{
  return &UNK_1105f9f40;
}



/* Entry: 102fed7fc; end: 102fed89b;  */

void FUN_102fed7fc(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102fed89c; end: 102fed8ab;  */

void FUN_102fed89c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102fed8ac; end: 102feddcf;  */

void FUN_102fed8ac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint in_w4;
  uint in_w5;
  long extraout_x8;
  long lVar9;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  long extraout_x12;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  code *pcVar16;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  
  lVar1 = 0x112d36580;
  uStack_b0 = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&lStack_c0 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ebbc();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar11 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_b8 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12;
  lVar3 = 0;
  lStack_c0 = lVar11;
  func_0x000107c5ec24();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5eb9c();
  lVar15 = *(long *)(lVar4 + -8);
  lVar1 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  uVar14 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eb88(uVar14);
  func_0x000100e8b654();
  uVar7 = uVar14;
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c601f0(uVar14,PTR___sSSN_11034da80,lVar1);
  pcVar16 = *(code **)(lVar15 + 8);
  (*pcVar16)(uVar14,lVar4);
  uVar8 = uVar7 & 0xffffffffffff;
  if (((ulong)puVar6 & 0x2000000000000000) != 0) {
    uVar8 = (ulong)puVar6 >> 0x38 & 0xf;
  }
  if (uVar8 == 0) {
    func_0x000107c6142c(puVar6);
    func_0x000102fef0f8();
    func_0x000107c613f8(&UNK_1105fa388,puVar6,0,0);
    func_0x000107c61654();
  }
  else {
    func_0x000107c5eb88(uVar14);
    uVar12 = uVar14;
    puVar13 = PTR___sSSN_11034da80;
    func_0x000107c601f0(uVar14,PTR___sSSN_11034da80,lVar1);
    (*pcVar16)(uVar14,lVar4);
    func_0x000107c5ec20(lVar11);
    uVar8 = uVar12 & 0xffffffffffff;
    if (((ulong)puVar13 & 0x2000000000000000) != 0) {
      uVar8 = (ulong)puVar13 >> 0x38 & 0xf;
    }
    if (uVar8 == 0) {
      func_0x000107c6142c(puVar13);
      puVar13 = (undefined *)0xe800000000000000;
      uVar12 = 0x7461686370616e73;
    }
    func_0x000107c5ec10(uVar12,puVar13);
    func_0x000107c5ebf0(0x656972662d646461,0xeb0000000073646e);
    uVar8 = 0x112d70260;
    func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
    lVar4 = *(long *)(lVar9 + 0x48);
    uVar14 = (ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff);
    func_0x000107c613fc();
    *(undefined8 *)(uVar8 + 0x18) = 4;
    *(undefined8 *)(uVar8 + 0x10) = 2;
    func_0x000107c5ebb0(uVar8 + uVar14,0x72656665725f6373,0xeb00000000726572,0xd000000000000017,
                        0x800000010f1190c0);
    func_0x000107c5ebb0(uVar8 + uVar14 + lVar4,0x755f7265646e6573,0xee0064695f726573,uVar7,puVar6);
    func_0x000107c6142c(puVar6);
    lVar1 = lStack_c0;
    uVar7 = uVar8;
    if ((in_w4 & 1) != 0) {
      func_0x000107c5ebb0(lStack_c0,0xd000000000000019,0x800000010f1190e0,0x31,0xe100000000000000);
      uVar12 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar12) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        func_0x0001012d3170(uVar7,uVar12 + 1,1,uVar8);
      }
      *(ulong *)(uVar7 + 0x10) = uVar12 + 1;
      (**(code **)(lVar9 + 0x20))(uVar7 + uVar14 + uVar12 * lVar4,lVar1,lVar2);
    }
    lVar1 = lStack_b8;
    uVar8 = uVar7;
    if ((in_w5 & 1) != 0) {
      func_0x000107c5ebb0(lStack_b8,0xd00000000000001c,0x800000010f119100,0x31,0xe100000000000000);
      uVar12 = *(ulong *)(uVar7 + 0x10);
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar12) {
        uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        func_0x0001012d3170(uVar8,uVar12 + 1,1,uVar7);
      }
      *(ulong *)(uVar8 + 0x10) = uVar12 + 1;
      (**(code **)(lVar9 + 0x20))(uVar8 + uVar14 + uVar12 * lVar4,lVar1,lVar2);
    }
    func_0x000107c61434(uVar8);
    func_0x000107c5ebc8();
    func_0x000107c5ebe8(lVar5);
    lVar2 = 0;
    func_0x000107c5ede0();
    lVar4 = *(long *)(lVar2 + -8);
    lVar1 = lVar5;
    (**(code **)(lVar4 + 0x30))(lVar5,1,lVar2);
    if ((int)lVar1 == 1) {
      FUN_102fefbd4(lVar5,0x112d36580,&UNK_10d9016d0);
      func_0x000102fef0f8();
      func_0x000107c613f8(&UNK_1105fa388,lVar5,0,0);
      func_0x000107c61654();
      (**(code **)(lVar10 + 8))(lVar11,lVar3);
      func_0x000107c6142c(uVar8);
    }
    else {
      (**(code **)(lVar10 + 8))(lVar11,lVar3);
      func_0x000107c6142c(uVar8);
      (**(code **)(lVar4 + 0x20))(uStack_b0,lVar5,lVar2);
    }
  }
  return;
}



/* Entry: 102feddd0; end: 102fede27;  */

void FUN_102feddd0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  plVar1 = (long *)0x310;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102fede28;
  *(undefined1 *)((long)plVar1 + 0x62) = 1;
  plVar1[0x52] = param_2;
  plVar1[0x51] = param_1;
  lVar2 = 0;
  func_0x000107c5eea4();
  plVar1[0x53] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x54] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x55] = uVar3;
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x56] = uVar3;
  lVar2 = 0;
  func_0x000107c5eb9c();
  plVar1[0x57] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x58] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x59] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fef1f4,0,0);
  return;
}



/* Entry: 102fede28; end: 102fede6b;  */

void FUN_102fede28(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102fede68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 102fede6c; end: 102fedec3;  */

void FUN_102fede6c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  plVar1 = (long *)0x310;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102ff1ce0;
  *(undefined1 *)((long)plVar1 + 0x62) = 0;
  plVar1[0x52] = param_2;
  plVar1[0x51] = param_1;
  lVar2 = 0;
  func_0x000107c5eea4();
  plVar1[0x53] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x54] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x55] = uVar3;
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x56] = uVar3;
  lVar2 = 0;
  func_0x000107c5eb9c();
  plVar1[0x57] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x58] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x59] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fef1f4,0,0);
  return;
}



/* Entry: 102fedec4; end: 102feded7;  */

void FUN_102fedec4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102feded8,0,0);
  return;
}



/* Entry: 102feded8; end: 102fee087;  */

void FUN_102feded8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  
  uVar3 = 0x112f30bc0;
  func_0x0001000285a8(0x112f30bc0,&UNK_10db75f40);
  func_0x000107c5f008();
  *(ulong *)(unaff_x22 + 0x10) = uVar3;
  if (uVar3 >> 0x3e == 0) {
    uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    *(ulong *)(unaff_x22 + 0x18) = uVar1;
  }
  else {
    uVar1 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar1 = uVar3;
    }
    func_0x000107c60480();
    *(ulong *)(unaff_x22 + 0x18) = uVar1;
  }
  if (uVar1 != 0) {
    if ((long)uVar1 < 1) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x102fee088);
      (*UNRECOVERED_JUMPTABLE)();
    }
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
    if ((*(ulong *)(unaff_x22 + 0x10) & 0xc000000000000001) == 0) {
      uVar2 = *(undefined8 *)(*(ulong *)(unaff_x22 + 0x10) + 0x20);
      func_0x000107c6157c(uVar2);
    }
    else {
      uVar2 = 0;
      FUN_102fea4b8();
    }
    *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
    lVar4 = 0x112f30be8;
    func_0x0001000285a8(0x112f30be8,&UNK_10db75fc0);
    uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x30) = uVar3;
    func_0x000107c5f01c(uVar3);
    lVar4 = 0x112f30bc8;
    func_0x0001000285a8(0x112f30bc8,&UNK_10db75f48);
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar3,0,1,lVar4);
    lVar4 = 0;
    func_0x000107c5f038();
    *(long *)(unaff_x22 + 0x38) = lVar4;
    lVar4 = *(long *)(lVar4 + -8);
    *(long *)(unaff_x22 + 0x40) = lVar4;
    uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x48) = uVar1;
    func_0x000107c5f034(uVar1);
    plVar5 = (long *)(ulong)*(uint *)(
                                     PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                                     + 4);
    UNRECOVERED_JUMPTABLE =
         (code *)(
                 PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                 + *(int *)
                    PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                 );
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_102fee088;
                    /* WARNING: Could not recover jumptable at 0x000102fee048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar3,uVar1);
    return;
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102fee080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102fee088; end: 102fee117;  */

void FUN_102fee088(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x48);
  uVar2 = *(undefined8 *)(lVar4 + 0x38);
  lVar3 = *(long *)(lVar4 + 0x40);
  uVar5 = *(undefined8 *)(lVar4 + 0x30);
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x50));
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  FUN_102fefbd4(uVar5,0x112f30be8,&UNK_10db75fc0);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fee118,0,0);
  return;
}



/* Entry: 102fee118; end: 102fee28b;  */

void FUN_102fee118(void)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x20);
  lVar5 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  if (lVar2 + 1 == lVar5) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102fee164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar2 = *(long *)(unaff_x22 + 0x20) + 1;
  *(long *)(unaff_x22 + 0x20) = lVar2;
  if ((*(ulong *)(unaff_x22 + 0x10) & 0xc000000000000001) == 0) {
    lVar2 = *(long *)(*(ulong *)(unaff_x22 + 0x10) + lVar2 * 8 + 0x20);
    func_0x000107c6157c(lVar2);
  }
  else {
    FUN_102fea4b8();
  }
  *(long *)(unaff_x22 + 0x28) = lVar2;
  lVar2 = 0x112f30be8;
  func_0x0001000285a8(0x112f30be8,&UNK_10db75fc0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x30) = uVar1;
  func_0x000107c5f01c(uVar1);
  lVar2 = 0x112f30bc8;
  func_0x0001000285a8(0x112f30bc8,&UNK_10db75f48);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar1,0,1,lVar2);
  lVar2 = 0;
  func_0x000107c5f038();
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  func_0x000107c5f034(uVar3);
  plVar4 = (long *)(ulong)*(uint *)(
                                   PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                                   + 4);
  UNRECOVERED_JUMPTABLE =
       (code *)(
               PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
               + *(int *)
                  PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
               );
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102fee088;
                    /* WARNING: Could not recover jumptable at 0x000102fee288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,uVar3);
  return;
}



/* Entry: 102fee28c; end: 102fee337;  */

void FUN_102fee28c(void)

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



/* Entry: 102fee338; end: 102fee43f;  */

undefined1  [16] FUN_102fee338(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar4 = *unaff_x20;
  uVar3 = 0x800000010f1191b0;
  uVar5 = 0xd000000000000013;
  if (bVar4 != 5) {
    uVar3 = 0xed00006e6f697369;
    uVar5 = 0x7665527465737361;
  }
  uVar6 = 0x746176416f726568;
  uVar2 = 0xed000079654b7261;
  if (bVar4 != 3) {
    uVar6 = 0xd000000000000013;
    uVar2 = 0x800000010f119190;
  }
  if (bVar4 < 5) {
    uVar3 = uVar2;
    uVar5 = uVar6;
  }
  uVar6 = 0xe900000000000061;
  uVar2 = 0x7461446567616d69;
  if (bVar4 != 1) {
    uVar6 = 0xed00006174614465;
    uVar2 = 0x67616d496f726568;
  }
  uVar1 = 0x644972657375;
  if (bVar4 != 0) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe600000000000000;
  if (bVar4 != 0) {
    uVar2 = uVar6;
  }
  if (bVar4 < 3) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Entry: 102fee440; end: 102fee467;  */

void FUN_102fee440(undefined1 *param_1,undefined1 param_2)

{
  FUN_102feffdc();
  *param_1 = param_2;
  return;
}



/* Entry: 102fee468; end: 102fee47f;  */

undefined1  [16] FUN_102fee468(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102fee480; end: 102fee4cf;  */

void FUN_102fee480(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102feff9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102fee4d0; end: 102fee74f;  */

/* WARNING: Removing unreachable block (ram,0x000102fee644) */

void FUN_102fee4d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [23];
  undefined1 uStack_91;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = 0x112f30da8;
  func_0x0001000285a8(0x112f30da8,&UNK_10db75fc8);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102feff9c();
  func_0x000107c606ec(auStack_b0 + -extraout_x8,&UNK_1105fa4f0,&UNK_1105fa4f0,param_1,uVar1,uVar2);
  uStack_90 = uStack_90 & 0xffffffffffffff00;
  func_0x000107c6053c(*unaff_x20,unaff_x20[1],&uStack_90,lVar3);
  if (unaff_x21 == 0) {
    uStack_58 = unaff_x20[3];
    uStack_60 = unaff_x20[2];
    uStack_88 = unaff_x20[3];
    uStack_90 = unaff_x20[2];
    uStack_91 = 1;
    puVar4 = &uStack_60;
    func_0x00010105aabc(puVar4,auStack_a8);
    func_0x000101480d6c();
    func_0x000107c60530(&uStack_90,&uStack_91,lVar3,PTR___s10Foundation4DataVN_110350ae0,puVar4);
    func_0x0001000b44c0(uStack_90,uStack_88);
    uStack_68 = unaff_x20[5];
    uStack_70 = unaff_x20[4];
    uStack_88 = unaff_x20[5];
    uStack_90 = unaff_x20[4];
    uStack_91 = 2;
    func_0x00010105aabc(&uStack_70,auStack_a8);
    func_0x000107c60530(&uStack_90,&uStack_91,lVar3,PTR___s10Foundation4DataVN_110350ae0,puVar4);
    func_0x0001000b44c0(uStack_90,uStack_88);
    uStack_90 = CONCAT71(uStack_90._1_7_,3);
    func_0x000107c60520(unaff_x20[6],unaff_x20[7],&uStack_90,lVar3);
    uStack_78 = unaff_x20[9];
    uStack_80 = unaff_x20[8];
    uStack_88 = unaff_x20[9];
    uStack_90 = unaff_x20[8];
    uStack_91 = 4;
    func_0x00010105aabc(&uStack_80,auStack_a8);
    func_0x000107c60530(&uStack_90,&uStack_91,lVar3,PTR___s10Foundation4DataVN_110350ae0,puVar4);
    func_0x0001000b44c0(uStack_90,uStack_88);
    uStack_90._0_1_ = 5;
    func_0x000107c60520(unaff_x20[10],unaff_x20[0xb],&uStack_90,lVar3);
    uStack_90 = CONCAT71(uStack_90._1_7_,6);
    func_0x000107c60520(unaff_x20[0xc],unaff_x20[0xd],&uStack_90,lVar3);
  }
  (**(code **)(lVar5 + 8))(auStack_b0 + -extraout_x8,lVar3);
  return;
}



/* Entry: 102fee750; end: 102fee79f;  */

void FUN_102fee750(undefined8 *param_1)

{
  long unaff_x21;
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
  
  FUN_102ff024c(&uStack_90);
  if (unaff_x21 == 0) {
    param_1[9] = uStack_48;
    param_1[8] = uStack_50;
    param_1[0xb] = uStack_38;
    param_1[10] = uStack_40;
    param_1[0xd] = uStack_28;
    param_1[0xc] = uStack_30;
    param_1[1] = uStack_88;
    *param_1 = uStack_90;
    param_1[3] = uStack_78;
    param_1[2] = uStack_80;
    param_1[5] = uStack_68;
    param_1[4] = uStack_70;
    param_1[7] = uStack_58;
    param_1[6] = uStack_60;
  }
  return;
}



/* Entry: 102fee7a0; end: 102fee89b;  */

void FUN_102fee7a0(void)

{
  FUN_102fee4d0();
  return;
}



/* Entry: 102fee89c; end: 102fee9cb;  */

undefined * FUN_102fee89c(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102fee9cc);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x000102fee818();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0x112f30bc0;
    func_0x0001000285a8(0x112f30bc0,&UNK_10db75f40);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102fee9cc; end: 102feea2f;  */

ulong FUN_102fee9cc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (7 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}



/* Entry: 102feea30; end: 102feee7b;  */

/* WARNING: Removing unreachable block (ram,0x000102feedb8) */
/* WARNING: Removing unreachable block (ram,0x000102feecc8) */
/* WARNING: Removing unreachable block (ram,0x000102feec9c) */
/* WARNING: Removing unreachable block (ram,0x000102feec08) */
/* WARNING: Removing unreachable block (ram,0x000102feebbc) */
/* WARNING: Removing unreachable block (ram,0x000102feed4c) */
/* WARNING: Removing unreachable block (ram,0x000102feecb4) */
/* WARNING: Removing unreachable block (ram,0x000102feecdc) */
/* WARNING: Removing unreachable block (ram,0x000102feece8) */
/* WARNING: Removing unreachable block (ram,0x000102feeccc) */
/* WARNING: Removing unreachable block (ram,0x000102feecd8) */
/* WARNING: Removing unreachable block (ram,0x000102feecec) */
/* WARNING: Removing unreachable block (ram,0x000102feeb54) */

void FUN_102feea30(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long extraout_x8;
  long unaff_x21;
  long lVar10;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined1 auStack_178 [88];
  undefined8 uStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined2 uStack_d0;
  char cStack_c9;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  char cStack_90;
  undefined7 uStack_8f;
  undefined8 *puStack_88;
  long lStack_80;
  undefined2 uStack_78;
  
  lVar4 = 0x112f30f08;
  func_0x0001000285a8(0x112f30f08,&UNK_10db76b58);
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = param_2;
  func_0x0001000a8868(param_2,uVar2);
  FUN_102feef78();
  puVar6 = &UNK_1105fa610;
  func_0x000107c606e0((long)&lStack_190 - extraout_x8,&UNK_1105fa610,&UNK_1105fa610,lVar5,uVar2,
                      uVar3);
  if (unaff_x21 == 0) {
    auStack_178[0] = 0;
    FUN_102ff1b7c();
    func_0x000107c60508(&uStack_120,&UNK_1105f9ff0,auStack_178,lVar4,&UNK_1105f9ff0,puVar6);
    uStack_c8 = (char)uStack_120;
    uStack_120._0_1_ = 1;
    puVar7 = &uStack_120;
    lVar5 = lVar4;
    func_0x000107c604f4();
    uStack_120._0_1_ = 2;
    puVar8 = &uStack_120;
    lVar9 = lVar4;
    lStack_180 = lVar5;
    puStack_c0 = puVar7;
    lStack_b8 = lVar5;
    func_0x000107c604f4();
    uStack_120._0_1_ = '\x03';
    puVar7 = &uStack_120;
    lVar5 = lVar4;
    puStack_b0 = puVar8;
    lStack_a8 = lVar9;
    func_0x000107c604f4();
    auStack_178[0] = 4;
    lStack_188 = lVar5;
    puStack_a0 = puVar7;
    lStack_98 = lVar5;
    func_0x000102ff1bbc();
    func_0x000107c604e8(&uStack_120,&UNK_1105fa080,auStack_178,lVar4,&UNK_1105fa080,puVar7);
    cStack_90 = '\0';
    if ((char)uStack_120 != '\x02') {
      cStack_90 = (char)uStack_120;
    }
    uStack_120._0_1_ = '\x05';
    puVar7 = &uStack_120;
    lVar5 = lVar4;
    func_0x000107c604d4();
    puStack_88 = (undefined8 *)0x0;
    if (lVar5 != 0) {
      puStack_88 = puVar7;
    }
    lStack_190 = -0x2000000000000000;
    if (lVar5 != 0) {
      lStack_190 = lVar5;
    }
    auStack_178[0] = 6;
    lStack_80 = lStack_190;
    func_0x000102ff1bfc();
    puVar6 = &UNK_1105fa110;
    func_0x000107c604e8(&uStack_120,&UNK_1105fa110,auStack_178,lVar4,&UNK_1105fa110,puVar7);
    cVar1 = '\0';
    if ((char)uStack_120 != '\x02') {
      cVar1 = (char)uStack_120;
    }
    uStack_78 = CONCAT11(uStack_78._1_1_,cVar1);
    uStack_120._0_1_ = 7;
    func_0x000102ff1c3c();
    func_0x000107c604e8(&cStack_c9,&UNK_1105fa1a0,&uStack_120,lVar4,&UNK_1105fa1a0,puVar6);
    (**(code **)(lVar10 + 8))((long)&lStack_190 - extraout_x8,lVar4);
    if (cStack_c9 == '\x02') {
      cStack_c9 = '\x01';
    }
    uStack_78 = CONCAT11(cStack_c9,(undefined1)uStack_78);
    uStack_e8 = CONCAT71(uStack_8f,cStack_90);
    lStack_f0 = lStack_98;
    lStack_d8 = lStack_80;
    puStack_e0 = puStack_88;
    uStack_120 = CONCAT71(uStack_c7,uStack_c8);
    puStack_118 = puStack_c0;
    puStack_108 = puStack_b0;
    lStack_110 = lStack_b8;
    puStack_f8 = puStack_a0;
    lStack_100 = lStack_a8;
    uStack_d0 = uStack_78;
    FUN_102febdc0(&uStack_120,auStack_178);
    func_0x0001000834e4(param_2);
    FUN_102feb79c(&uStack_c8);
    param_1[5] = puStack_f8;
    param_1[4] = lStack_100;
    param_1[7] = uStack_e8;
    param_1[6] = lStack_f0;
    param_1[9] = lStack_d8;
    param_1[8] = puStack_e0;
    *(undefined2 *)(param_1 + 10) = uStack_d0;
    param_1[1] = puStack_118;
    *param_1 = uStack_120;
    param_1[3] = puStack_108;
    param_1[2] = lStack_110;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102feee7c; end: 102feef77;  */

bool FUN_102feee7c(char *param_1,char *param_2)

{
  ulong uVar1;
  
  if (*param_1 != *param_2) {
    return false;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (((uVar1 == *(ulong *)(param_2 + 8) && *(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10))
      || (func_0x000107c605b8(), (uVar1 & 1) != 0)) &&
     ((uVar1 = *(ulong *)(param_1 + 0x18),
      uVar1 == *(ulong *)(param_2 + 0x18) && *(long *)(param_1 + 0x20) == *(long *)(param_2 + 0x20)
      || (func_0x000107c605b8(), (uVar1 & 1) != 0)))) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    if ((((uVar1 == *(ulong *)(param_2 + 0x28)) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_2 + 0x30))) ||
        (func_0x000107c605b8(), (uVar1 & 1) != 0)) && (param_1[0x38] == param_2[0x38])) {
      uVar1 = *(ulong *)(param_1 + 0x40);
      if ((((uVar1 == *(ulong *)(param_2 + 0x40)) &&
           (*(long *)(param_1 + 0x48) == *(long *)(param_2 + 0x48))) ||
          (func_0x000107c605b8(), (uVar1 & 1) != 0)) && (param_1[0x50] == param_2[0x50])) {
        return param_1[0x51] == param_2[0x51];
      }
    }
  }
  return false;
}



/* Entry: 102feef78; end: 102fef1f3;  */

void FUN_102feef78(void)

{
  undefined *puVar1;
  
  if (puRam00000001135072f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76af0;
  func_0x000107c61520(&UNK_10db76af0,&UNK_1105fa610);
  puRam00000001135072f0 = puVar1;
  return;
}



/* Entry: 102fef1f4; end: 102fef867;  */

void FUN_102fef1f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  char cVar9;
  undefined *puVar10;
  bool bVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  long unaff_x22;
  undefined8 uVar27;
  long lVar28;
  code *UNRECOVERED_JUMPTABLE;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uStack_70;
  
  uVar22 = *(ulong *)(unaff_x22 + 0x2c8);
  lVar24 = *(long *)(unaff_x22 + 0x2c0);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x2b8);
  *(undefined8 *)(unaff_x22 + 0x278) = *(undefined8 *)(unaff_x22 + 0x288);
  *(undefined8 *)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x290);
  func_0x000107c5eb88(uVar22);
  func_0x000100e8b654();
  uVar16 = uVar22;
  puVar15 = PTR___sSSN_11034da80;
  func_0x000107c601f0(uVar22,PTR___sSSN_11034da80,param_1);
  (**(code **)(lVar24 + 8))(uVar22,uVar27);
  uVar22 = uVar16 & 0xffffffffffff;
  if (((ulong)puVar15 & 0x2000000000000000) != 0) {
    uVar22 = (ulong)puVar15 >> 0x38 & 0xf;
  }
  if (uVar22 == 0) {
    func_0x000107c6142c(puVar15);
    bVar11 = false;
  }
  else {
    uVar22 = 0x112f30bc0;
    func_0x0001000285a8(0x112f30bc0,&UNK_10db75f40);
    func_0x000107c5f008();
    if (uVar22 >> 0x3e == 0) {
      uVar23 = *(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar23 = uVar22 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar22) {
        uVar23 = uVar22;
      }
      func_0x000107c60480();
    }
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_70 = uVar22 & 0xffffffffffffff8;
    *(undefined **)(unaff_x22 + 0x2d0) = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar23 != 0) {
      uVar31 = 0;
      do {
        while( true ) {
          if ((uVar22 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uStack_70 + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x102fef7dc);
              (*UNRECOVERED_JUMPTABLE)();
            }
            uVar30 = *(ulong *)(uVar22 + uVar31 * 8 + 0x20);
            func_0x000107c6157c(uVar30);
          }
          else {
            uVar30 = uVar31;
            FUN_102fea4b8(uVar31,uVar22);
          }
          if (SCARRY8(uVar31,1)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x102fef7d8);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar25 = uVar31 + 1;
          lVar24 = 0x112f30bc8;
          func_0x0001000285a8(0x112f30bc8,&UNK_10db75f48);
          lVar28 = *(long *)(lVar24 + -8);
          uVar13 = *(long *)(lVar28 + 0x40) + 0xf;
          uVar12 = uVar13 & 0xfffffffffffffff0;
          func_0x000107c615b8(uVar12);
          func_0x000107c5f01c(uVar12);
          func_0x000107c5f048(unaff_x22 + 0x68,lVar24);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar28 + 8);
          (*UNRECOVERED_JUMPTABLE)(uVar12,lVar24);
          *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x90);
          *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x88);
          *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa0);
          *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x98);
          *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xb0);
          *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xa8);
          *(undefined2 *)(unaff_x22 + 0x60) = *(undefined2 *)(unaff_x22 + 0xb8);
          *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x70);
          *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x68);
          *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x80);
          *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x78);
          FUN_102feb79c(unaff_x22 + 0x10);
          cVar9 = *(char *)(unaff_x22 + 0x10);
          func_0x000107c615c0(uVar12);
          if (cVar9 == '\x01') break;
LAB_102fef31c:
          func_0x000107c61574(uVar30);
          uVar31 = uVar31 + 1;
          if (uVar25 == uVar23) goto LAB_102fef548;
        }
        uVar13 = uVar13 & 0xfffffffffffffff0;
        func_0x000107c615b8(uVar13);
        func_0x000107c5f01c(uVar13);
        func_0x000107c5f048((undefined8 *)(unaff_x22 + 0x118),lVar24);
        (*UNRECOVERED_JUMPTABLE)(uVar13,lVar24);
        *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x120);
        *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x118);
        *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x130);
        *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x128);
        *(undefined2 *)(unaff_x22 + 0x110) = *(undefined2 *)(unaff_x22 + 0x168);
        *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x150);
        *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x148);
        *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x160);
        *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x158);
        *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x140);
        *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x138);
        uVar12 = *(ulong *)(unaff_x22 + 200);
        puVar14 = *(undefined **)(unaff_x22 + 0xd0);
        func_0x000107c61434(puVar14);
        FUN_102feb79c(unaff_x22 + 0xc0);
        if ((uVar12 == uVar16) && (puVar14 == puVar15)) {
          func_0x000107c6142c(puVar14);
          func_0x000107c615c0(uVar13);
        }
        else {
          func_0x000107c605b8(uVar12,puVar14,uVar16,puVar15,0);
          func_0x000107c6142c(puVar14);
          func_0x000107c615c0(uVar13);
          if ((uVar12 & 1) == 0) goto LAB_102fef31c;
        }
        puVar14 = puVar10;
        func_0x000107c61558();
        if (((ulong)puVar14 & 1) == 0) {
          func_0x000102fee880(0,*(long *)(puVar10 + 0x10) + 1,1);
        }
        uVar31 = *(ulong *)(puVar10 + 0x10);
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar31) {
          func_0x000102fee880(1 < *(ulong *)(puVar10 + 0x18),uVar31 + 1,1);
        }
        *(ulong *)(puVar10 + 0x10) = uVar31 + 1;
        *(ulong *)(puVar10 + uVar31 * 8 + 0x20) = uVar30;
        *(undefined **)(unaff_x22 + 0x2d0) = puVar10;
        uVar31 = uVar25;
      } while (uVar25 != uVar23);
    }
LAB_102fef548:
    func_0x000107c6142c(uVar22);
    func_0x000107c6142c(puVar15);
    if (((long)puVar10 < 0) || (((ulong)puVar10 >> 0x3e & 1) != 0)) {
      puVar15 = puVar10;
      func_0x000107c60480();
      *(undefined **)(unaff_x22 + 0x2d8) = puVar15;
    }
    else {
      puVar15 = *(undefined **)(puVar10 + 0x10);
      *(undefined **)(unaff_x22 + 0x2d8) = puVar15;
    }
    if (puVar15 != (undefined *)0x0) {
      if ((long)puVar15 < 1) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x102fef868);
        (*UNRECOVERED_JUMPTABLE)();
      }
      *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
      if ((*(ulong *)(unaff_x22 + 0x2d0) & 0xc000000000000001) == 0) {
        uVar27 = *(undefined8 *)(*(ulong *)(unaff_x22 + 0x2d0) + 0x20);
        func_0x000107c6157c(uVar27);
      }
      else {
        uVar27 = 0;
        FUN_102fea4b8();
      }
      *(undefined8 *)(unaff_x22 + 0x2e8) = uVar27;
      uVar21 = *(undefined8 *)(unaff_x22 + 0x2b0);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x2a8);
      lVar28 = *(long *)(unaff_x22 + 0x2a0);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x298);
      uVar6 = *(undefined1 *)(unaff_x22 + 0x62);
      lVar24 = 0x112f30bc8;
      func_0x0001000285a8(0x112f30bc8,&UNK_10db75f48);
      *(long *)(unaff_x22 + 0x2f0) = lVar24;
      lVar29 = *(long *)(lVar24 + -8);
      uVar22 = *(long *)(lVar29 + 0x40) + 0xf;
      uVar16 = uVar22 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0x2f8) = uVar16;
      uVar22 = uVar22 & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar22);
      func_0x000107c5f01c(uVar22);
      func_0x000107c5f048((undefined8 *)(unaff_x22 + 0x1c8),lVar24);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar29 + 8);
      *(code **)(unaff_x22 + 0x300) = UNRECOVERED_JUMPTABLE;
      (*UNRECOVERED_JUMPTABLE)(uVar22,lVar24);
      *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x1d0);
      *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x1c8);
      *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x1e0);
      *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x1d8);
      *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x1f0);
      *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x1e8);
      *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x200);
      *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x1f8);
      *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x210);
      *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x208);
      *(undefined2 *)(unaff_x22 + 0x1c0) = *(undefined2 *)(unaff_x22 + 0x218);
      uVar7 = *(undefined1 *)(unaff_x22 + 0x170);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x178);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar3 = *(undefined8 *)(unaff_x22 + 400);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x198);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x1b8);
      func_0x000107c61434(uVar2);
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
      FUN_102feb79c(unaff_x22 + 0x170);
      uVar8 = *(undefined2 *)(unaff_x22 + 0x1c0);
      func_0x000107c615c0(uVar22);
      *(undefined1 *)(unaff_x22 + 0x220) = uVar7;
      *(undefined8 *)(unaff_x22 + 0x228) = uVar27;
      *(undefined8 *)(unaff_x22 + 0x230) = uVar2;
      *(undefined8 *)(unaff_x22 + 0x238) = uVar26;
      *(undefined8 *)(unaff_x22 + 0x240) = uVar3;
      *(undefined8 *)(unaff_x22 + 0x248) = uVar17;
      *(undefined8 *)(unaff_x22 + 0x250) = uVar4;
      *(undefined1 *)(unaff_x22 + 600) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x260) = uVar1;
      *(undefined8 *)(unaff_x22 + 0x268) = uVar5;
      *(undefined2 *)(unaff_x22 + 0x270) = uVar8;
      func_0x000107c5eea0(uVar19);
      func_0x000107c5ee6c(uVar21,0x404e000000000000);
      (**(code **)(lVar28 + 8))(uVar19,uVar20);
      uVar27 = uVar21;
      (**(code **)(lVar28 + 0x38))(uVar21,0,1,uVar20);
      FUN_102febd00();
      uVar26 = uVar27;
      func_0x000102febd40();
      uVar17 = uVar26;
      func_0x000102febd80();
      func_0x000107c5f044(uVar16,0,unaff_x22 + 0x220,uVar21,&UNK_1105fa298,uVar27,uVar26,uVar17);
      plVar18 = (long *)(ulong)*(uint *)(
                                        PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278
                                        + 4);
      UNRECOVERED_JUMPTABLE =
           (code *)(PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278 +
                   *(int *)
                    PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x308) = plVar18;
      *plVar18 = unaff_x22;
      plVar18[1] = (long)FUN_102fef868;
                    /* WARNING: Could not recover jumptable at 0x000102fef7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(uVar16);
      return;
    }
    func_0x000107c61574(puVar10);
    bVar11 = *(long *)(unaff_x22 + 0x2d8) != 0;
  }
  uVar27 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x2a8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x2c8));
  func_0x000107c615c0(uVar27);
  func_0x000107c615c0(uVar26);
                    /* WARNING: Could not recover jumptable at 0x000102fef860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(bVar11);
  return;
}



/* Entry: 102fef868; end: 102fef8af;  */

void FUN_102fef868(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x308));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102fef8b0,0,0);
  return;
}



/* Entry: 102fef8b0; end: 102fefbd3;  */

void FUN_102fef8b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  long lVar18;
  long lVar19;
  long lVar20;
  
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x300);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2f0);
  lVar18 = *(long *)(unaff_x22 + 0x2e0);
  lVar19 = *(long *)(unaff_x22 + 0x2d8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x2e8));
  (*UNRECOVERED_JUMPTABLE)(uVar17,uVar16);
  func_0x000107c615c0(uVar17);
  if (lVar18 + 1 == lVar19) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x2d0));
    lVar18 = *(long *)(unaff_x22 + 0x2d8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x2a8);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x2c8));
    func_0x000107c615c0(uVar16);
    func_0x000107c615c0(uVar17);
                    /* WARNING: Could not recover jumptable at 0x000102fef968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(lVar18 != 0);
    return;
  }
  lVar18 = *(long *)(unaff_x22 + 0x2e0) + 1;
  *(long *)(unaff_x22 + 0x2e0) = lVar18;
  if ((*(ulong *)(unaff_x22 + 0x2d0) & 0xc000000000000001) == 0) {
    lVar18 = *(long *)(*(ulong *)(unaff_x22 + 0x2d0) + lVar18 * 8 + 0x20);
    func_0x000107c6157c(lVar18);
  }
  else {
    FUN_102fea4b8();
  }
  *(long *)(unaff_x22 + 0x2e8) = lVar18;
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2a8);
  lVar19 = *(long *)(unaff_x22 + 0x2a0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x62);
  lVar18 = 0x112f30bc8;
  func_0x0001000285a8(0x112f30bc8,&UNK_10db75f48);
  *(long *)(unaff_x22 + 0x2f0) = lVar18;
  lVar20 = *(long *)(lVar18 + -8);
  uVar10 = *(long *)(lVar20 + 0x40) + 0xf;
  uVar9 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x2f8) = uVar9;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar10);
  func_0x000107c5f01c(uVar10);
  func_0x000107c5f048((undefined8 *)(unaff_x22 + 0x1c8),lVar18);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar20 + 8);
  *(code **)(unaff_x22 + 0x300) = UNRECOVERED_JUMPTABLE;
  (*UNRECOVERED_JUMPTABLE)(uVar10,lVar18);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x1d0);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x1c8);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x1e0);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x1d8);
  *(undefined2 *)(unaff_x22 + 0x1c0) = *(undefined2 *)(unaff_x22 + 0x218);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x200);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x1f8);
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x210);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x208);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x1f0);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar7 = *(undefined1 *)(unaff_x22 + 0x170);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar3 = *(undefined8 *)(unaff_x22 + 400);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1b8);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  FUN_102feb79c(unaff_x22 + 0x170);
  uVar8 = *(undefined2 *)(unaff_x22 + 0x1c0);
  func_0x000107c615c0(uVar10);
  *(undefined1 *)(unaff_x22 + 0x220) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x228) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x230) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x238) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x240) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x248) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x250) = uVar4;
  *(undefined1 *)(unaff_x22 + 600) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x260) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x268) = uVar5;
  *(undefined2 *)(unaff_x22 + 0x270) = uVar8;
  func_0x000107c5eea0(uVar13);
  func_0x000107c5ee6c(uVar15,0x404e000000000000);
  (**(code **)(lVar19 + 8))(uVar13,uVar14);
  uVar16 = uVar15;
  (**(code **)(lVar19 + 0x38))(uVar15,0,1,uVar14);
  FUN_102febd00();
  uVar17 = uVar16;
  func_0x000102febd40();
  uVar11 = uVar17;
  func_0x000102febd80();
  func_0x000107c5f044(uVar9,0,unaff_x22 + 0x220,uVar15,&UNK_1105fa298,uVar16,uVar17,uVar11);
  plVar12 = (long *)(ulong)*(uint *)(
                                    PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278
                                    + 4);
  UNRECOVERED_JUMPTABLE =
       (code *)(PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278 +
               *(int *)PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x308) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_102fef868;
                    /* WARNING: Could not recover jumptable at 0x000102fefbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar9);
  return;
}



/* Entry: 102fefbd4; end: 102fefc13;  */

undefined8 FUN_102fefbd4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102fefc14; end: 102feff9b;  */

undefined8 FUN_102fefc14(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong auStack_c0 [2];
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  puVar5 = auStack_c0;
  uVar1 = *param_1;
  if ((uVar1 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar1 & 1) == 0))
  {
    return 0;
  }
  uVar1 = param_1[3];
  uVar4 = param_1[2];
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  uStack_70 = uVar6;
  uStack_68 = uVar7;
  uStack_60 = uVar4;
  uStack_58 = uVar1;
  if (uVar1 >> 0x3c < 0xf) {
    if (0xe < uVar7 >> 0x3c) goto LAB_102fefcbc;
    func_0x00010105aabc(&uStack_60,&uStack_80);
    func_0x00010105aabc(&uStack_70,&uStack_80);
    uVar2 = uVar4;
    func_0x000100e25fcc(uVar4,uVar1,uVar6,uVar7);
    func_0x0001000b44c0(uVar6,uVar7);
    func_0x0001000b44c0(uVar4,uVar1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (uVar7 >> 0x3c < 0xf) {
LAB_102fefcbc:
      func_0x00010105aabc(&uStack_60,&uStack_80);
      puVar3 = &uStack_70;
      puVar5 = &uStack_80;
      goto LAB_102fefd94;
    }
    func_0x00010105aabc(&uStack_60,&uStack_80);
    func_0x00010105aabc(&uStack_70,&uStack_80);
    func_0x0001000b44c0(uVar4,uVar1);
  }
  uVar1 = param_1[5];
  uVar4 = param_1[4];
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  uStack_90 = uVar6;
  uStack_88 = uVar7;
  uStack_80 = uVar4;
  uStack_78 = uVar1;
  if (uVar1 >> 0x3c < 0xf) {
    if (uVar7 >> 0x3c < 0xf) {
      func_0x00010105aabc(&uStack_80,&uStack_a0);
      func_0x00010105aabc(&uStack_90,&uStack_a0);
      uVar2 = uVar4;
      func_0x000100e25fcc(uVar4,uVar1,uVar6,uVar7);
      func_0x0001000b44c0(uVar6,uVar7);
      func_0x0001000b44c0(uVar4,uVar1);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      goto LAB_102fefe1c;
    }
  }
  else if (0xe < uVar7 >> 0x3c) {
    func_0x00010105aabc(&uStack_80,&uStack_a0);
    func_0x00010105aabc(&uStack_90,&uStack_a0);
    func_0x0001000b44c0(uVar4,uVar1);
LAB_102fefe1c:
    uVar1 = param_2[7];
    if (param_1[7] == 0) {
      if (uVar1 != 0) {
        return 0;
      }
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar4 = param_1[6];
      if (((uVar4 != param_2[6]) || (param_1[7] != uVar1)) &&
         (func_0x000107c605b8(), (uVar4 & 1) == 0)) {
        return 0;
      }
    }
    uVar1 = param_1[9];
    uVar4 = param_1[8];
    uVar7 = param_2[9];
    uVar6 = param_2[8];
    uStack_b0 = uVar6;
    uStack_a8 = uVar7;
    uStack_a0 = uVar4;
    uStack_98 = uVar1;
    if (uVar1 >> 0x3c < 0xf) {
      if (uVar7 >> 0x3c < 0xf) {
        func_0x00010105aabc(&uStack_a0,auStack_c0);
        func_0x00010105aabc(&uStack_b0,auStack_c0);
        uVar2 = uVar4;
        func_0x000100e25fcc(uVar4,uVar1,uVar6,uVar7);
        func_0x0001000b44c0(uVar6,uVar7);
        func_0x0001000b44c0(uVar4,uVar1);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        goto LAB_102feff1c;
      }
    }
    else if (0xe < uVar7 >> 0x3c) {
      func_0x00010105aabc(&uStack_a0,auStack_c0);
      func_0x00010105aabc(&uStack_b0,auStack_c0);
      func_0x0001000b44c0(uVar4,uVar1);
LAB_102feff1c:
      uVar1 = param_2[0xb];
      if (param_1[0xb] == 0) {
        if (uVar1 != 0) {
          return 0;
        }
      }
      else {
        if (uVar1 == 0) {
          return 0;
        }
        uVar4 = param_1[10];
        if (((uVar4 != param_2[10]) || (param_1[0xb] != uVar1)) &&
           (func_0x000107c605b8(), (uVar4 & 1) == 0)) {
          return 0;
        }
      }
      uVar1 = param_2[0xd];
      if (param_1[0xd] == 0) {
        if (uVar1 != 0) {
          return 0;
        }
        return 1;
      }
      if (uVar1 == 0) {
        return 0;
      }
      uVar4 = param_1[0xc];
      if (((uVar4 != param_2[0xc]) || (param_1[0xd] != uVar1)) &&
         (func_0x000107c605b8(), (uVar4 & 1) == 0)) {
        return 0;
      }
      return 1;
    }
    func_0x00010105aabc(&uStack_a0,auStack_c0);
    puVar3 = &uStack_b0;
    goto LAB_102fefd94;
  }
  func_0x00010105aabc(&uStack_80,&uStack_a0);
  puVar3 = &uStack_90;
  puVar5 = &uStack_a0;
LAB_102fefd94:
  func_0x00010105aabc(puVar3,puVar5);
  func_0x0001000b44c0(uVar4,uVar1);
  func_0x0001000b44c0(uVar6,uVar7);
  return 0;
}



/* Entry: 102feff9c; end: 102feffdb;  */

void FUN_102feff9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113507300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76a50;
  func_0x000107c61520(&UNK_10db76a50,&UNK_1105fa4f0);
  puRam0000000113507300 = puVar1;
  return;
}



/* Entry: 102feffdc; end: 102ff024b;  */

undefined4 FUN_102feffdc(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0x644972657375;
  if ((param_1 == 0x644972657375 && param_2 == -0x1a00000000000000) ||
     (func_0x000107c605b8(0x644972657375,0xe600000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
    func_0x000107c6142c(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0x7461446567616d69;
    if (((param_1 == 0x7461446567616d69) && (param_2 == -0x16ffffffffffff9f)) ||
       (func_0x000107c605b8(0x7461446567616d69,0xe900000000000061,param_1,param_2,0),
       (uVar2 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar1 = 1;
    }
    else {
      uVar2 = 0;
      if (((param_1 == 0x67616d496f726568) && (param_2 == -0x12ffff9e8b9ebb9b)) ||
         (func_0x000107c605b8(0x67616d496f726568,0xed00006174614465,param_1,param_2,0),
         (uVar2 & 1) != 0)) {
        func_0x000107c6142c(param_2);
        uVar1 = 2;
      }
      else {
        uVar2 = 0;
        if (((param_1 == 0x746176416f726568) && (param_2 == -0x12ffff869ab48d9f)) ||
           (func_0x000107c605b8(0x746176416f726568,0xed000079654b7261,param_1,param_2,0),
           (uVar2 & 1) != 0)) {
          func_0x000107c6142c(param_2);
          uVar1 = 3;
        }
        else {
          if ((param_1 != -0x2fffffffffffffed) || (param_2 != -0x7ffffffef0ee6e70)) {
            uVar2 = 0xd000000000000013;
            func_0x000107c605b8(0xd000000000000013,0x800000010f119190,param_1,param_2,0);
            if ((uVar2 & 1) == 0) {
              if ((param_1 != -0x2fffffffffffffed) || (param_2 != -0x7ffffffef0ee6e50)) {
                uVar2 = 0xd000000000000013;
                func_0x000107c605b8(0xd000000000000013,0x800000010f1191b0,param_1,param_2,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0x7665527465737361;
                  if ((param_1 == 0x7665527465737361) && (param_2 == -0x12ffff9190968c97)) {
                    func_0x000107c6142c(0xed00006e6f697369);
                    return 6;
                  }
                  func_0x000107c605b8(0x7665527465737361,0xed00006e6f697369,param_1,param_2,0);
                  func_0x000107c6142c(param_2);
                  if ((uVar2 & 1) != 0) {
                    return 6;
                  }
                  return 7;
                }
              }
              func_0x000107c6142c(param_2);
              return 5;
            }
          }
          func_0x000107c6142c(param_2);
          uVar1 = 4;
        }
      }
    }
  }
  return uVar1;
}



/* Entry: 102ff024c; end: 102ff06a7;  */

/* WARNING: Removing unreachable block (ram,0x000102ff0598) */
/* WARNING: Removing unreachable block (ram,0x000102ff04e4) */
/* WARNING: Removing unreachable block (ram,0x000102ff0410) */
/* WARNING: Removing unreachable block (ram,0x000102ff03b4) */
/* WARNING: Removing unreachable block (ram,0x000102ff0424) */
/* WARNING: Removing unreachable block (ram,0x000102ff0438) */
/* WARNING: Removing unreachable block (ram,0x000102ff0474) */
/* WARNING: Removing unreachable block (ram,0x000102ff0540) */
/* WARNING: Removing unreachable block (ram,0x000102ff05c0) */
/* WARNING: Removing unreachable block (ram,0x000102ff05c8) */
/* WARNING: Removing unreachable block (ram,0x000102ff0600) */
/* WARNING: Removing unreachable block (ram,0x000102ff05e8) */
/* WARNING: Removing unreachable block (ram,0x000102ff05ec) */
/* WARNING: Removing unreachable block (ram,0x000102ff05fc) */
/* WARNING: Removing unreachable block (ram,0x000102ff060c) */
/* WARNING: Removing unreachable block (ram,0x000102ff0610) */
/* WARNING: Removing unreachable block (ram,0x000102ff0330) */

void FUN_102ff024c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined1 *puVar8;
  long lVar9;
  long extraout_x8;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_220 [8];
  undefined8 **ppuStack_218;
  undefined8 **ppuStack_210;
  long lStack_208;
  long lStack_200;
  undefined1 auStack_1c0 [112];
  undefined8 ***pppuStack_150;
  long lStack_148;
  undefined8 **ppuStack_140;
  long lStack_138;
  undefined8 **ppuStack_130;
  long lStack_128;
  undefined8 ***pppuStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  long lStack_108;
  undefined8 ***pppuStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  long lStack_e8;
  undefined8 ***pppuStack_d8;
  long lStack_d0;
  undefined8 **ppuStack_c8;
  long lStack_c0;
  undefined8 **ppuStack_b8;
  long lStack_b0;
  undefined8 ***pppuStack_a8;
  long lStack_a0;
  undefined8 **ppuStack_98;
  long lStack_90;
  undefined8 ***pppuStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 uStack_51;
  
  lVar4 = 0x112f30ef8;
  func_0x0001000285a8(0x112f30ef8,&UNK_10db76b40);
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_102feff9c();
  func_0x000107c606e0(auStack_220 + -extraout_x8,&UNK_1105fa4f0,&UNK_1105fa4f0,lVar5,uVar1,uVar2);
  if (unaff_x21 == 0) {
    pppuStack_150 = (undefined8 ***)((ulong)pppuStack_150 & 0xffffffffffffff00);
    ppppuVar6 = &pppuStack_150;
    lVar5 = lVar4;
    func_0x000107c604f4();
    auStack_1c0[0] = 1;
    pppuStack_d8 = ppppuVar6;
    lStack_d0 = lVar5;
    func_0x0001006e2f9c();
    func_0x000107c604e8(&pppuStack_150,PTR___s10Foundation4DataVN_110350ae0,auStack_1c0,lVar4,
                        PTR___s10Foundation4DataVN_110350ae0,ppppuVar6);
    ppuStack_c8 = pppuStack_150;
    lStack_c0 = lStack_148;
    auStack_1c0[0] = 2;
    func_0x000107c604e8(&pppuStack_150,PTR___s10Foundation4DataVN_110350ae0,auStack_1c0,lVar4,
                        PTR___s10Foundation4DataVN_110350ae0,ppppuVar6);
    pppuVar3 = pppuStack_150;
    ppuStack_b8 = pppuStack_150;
    lStack_b0 = lStack_148;
    pppuStack_150 = (undefined8 ***)CONCAT71(pppuStack_150._1_7_,3);
    ppppuVar7 = &pppuStack_150;
    lVar5 = lVar4;
    func_0x000107c604d4();
    auStack_1c0[0] = 4;
    pppuStack_a8 = ppppuVar7;
    lStack_a0 = lVar5;
    func_0x000107c604e8(&pppuStack_150,PTR___s10Foundation4DataVN_110350ae0,auStack_1c0,lVar4,
                        PTR___s10Foundation4DataVN_110350ae0,ppppuVar6);
    ppuStack_210 = pppuStack_150;
    lStack_208 = lStack_148;
    ppuStack_98 = pppuStack_150;
    lStack_90 = lStack_148;
    pppuStack_150 = (undefined8 ***)CONCAT71(pppuStack_150._1_7_,5);
    ppppuVar6 = &pppuStack_150;
    lVar5 = lVar4;
    func_0x000107c604d4();
    ppuStack_218 = pppuVar3;
    uStack_51 = 6;
    puVar8 = &uStack_51;
    lVar9 = lVar4;
    lStack_200 = lVar5;
    pppuStack_88 = ppppuVar6;
    lStack_80 = lVar5;
    func_0x000107c604d4();
    (**(code **)(lVar10 + 8))(auStack_220 + -extraout_x8,lVar4);
    lStack_108 = lStack_90;
    ppuStack_110 = ppuStack_98;
    lStack_f8 = lStack_80;
    pppuStack_100 = pppuStack_88;
    lStack_148 = lStack_d0;
    pppuStack_150 = pppuStack_d8;
    lStack_138 = lStack_c0;
    ppuStack_140 = ppuStack_c8;
    lStack_128 = lStack_b0;
    ppuStack_130 = ppuStack_b8;
    lStack_118 = lStack_a0;
    pppuStack_120 = pppuStack_a8;
    puStack_f0 = puVar8;
    lStack_e8 = lVar9;
    puStack_78 = puVar8;
    lStack_70 = lVar9;
    FUN_102ff1b6c(&pppuStack_150,auStack_1c0);
    func_0x0001000834e4(param_2);
    func_0x000102dcf1e8(&pppuStack_d8);
    param_1[9] = lStack_108;
    param_1[8] = (long)ppuStack_110;
    param_1[0xb] = lStack_f8;
    param_1[10] = (long)pppuStack_100;
    param_1[0xd] = lStack_e8;
    param_1[0xc] = (long)puStack_f0;
    param_1[1] = lStack_148;
    *param_1 = (long)pppuStack_150;
    param_1[3] = lStack_138;
    param_1[2] = (long)ppuStack_140;
    param_1[5] = lStack_128;
    param_1[4] = (long)ppuStack_130;
    param_1[7] = lStack_118;
    param_1[6] = (long)pppuStack_120;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102ff06a8; end: 102ff06ab;  */

void FUN_102ff06a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db75fd0;
  func_0x000107c61520(&UNK_10db75fd0,&UNK_1105f9ff0);
  puRam0000000112f30db0 = puVar1;
  return;
}



/* Entry: 102ff06ac; end: 102ff06eb;  */

void FUN_102ff06ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db75fd0;
  func_0x000107c61520(&UNK_10db75fd0,&UNK_1105f9ff0);
  puRam0000000112f30db0 = puVar1;
  return;
}



/* Entry: 102ff06ec; end: 102ff06ef;  */

void FUN_102ff06ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30db8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db760c0;
  func_0x000107c61520(&UNK_10db760c0,&UNK_1105fa080);
  puRam0000000112f30db8 = puVar1;
  return;
}



/* Entry: 102ff06f0; end: 102ff072f;  */

void FUN_102ff06f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30db8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db760c0;
  func_0x000107c61520(&UNK_10db760c0,&UNK_1105fa080);
  puRam0000000112f30db8 = puVar1;
  return;
}



/* Entry: 102ff0730; end: 102ff0733;  */

void FUN_102ff0730(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30dc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db761b0;
  func_0x000107c61520(&UNK_10db761b0,&UNK_1105fa110);
  puRam0000000112f30dc0 = puVar1;
  return;
}



/* Entry: 102ff0734; end: 102ff0773;  */

void FUN_102ff0734(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30dc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db761b0;
  func_0x000107c61520(&UNK_10db761b0,&UNK_1105fa110);
  puRam0000000112f30dc0 = puVar1;
  return;
}



/* Entry: 102ff0774; end: 102ff0777;  */

void FUN_102ff0774(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30dc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db762a0;
  func_0x000107c61520(&UNK_10db762a0,&UNK_1105fa1a0);
  puRam0000000112f30dc8 = puVar1;
  return;
}



/* Entry: 102ff0778; end: 102ff07b7;  */

void FUN_102ff0778(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30dc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db762a0;
  func_0x000107c61520(&UNK_10db762a0,&UNK_1105fa1a0);
  puRam0000000112f30dc8 = puVar1;
  return;
}



/* Entry: 102ff07b8; end: 102ff07bb;  */

void FUN_102ff07b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30dd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76420;
  func_0x000107c61520(&UNK_10db76420,&UNK_1105fa298);
  puRam0000000112f30dd0 = puVar1;
  return;
}



/* Entry: 102ff07bc; end: 102ff07fb;  */

void FUN_102ff07bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30dd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76420;
  func_0x000107c61520(&UNK_10db76420,&UNK_1105fa298);
  puRam0000000112f30dd0 = puVar1;
  return;
}



/* Entry: 102ff07fc; end: 102ff07ff;  */

void FUN_102ff07fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30dd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76498;
  func_0x000107c61520(&UNK_10db76498,&UNK_1105fa218);
  puRam0000000112f30dd8 = puVar1;
  return;
}



/* Entry: 102ff0800; end: 102ff083f;  */

void FUN_102ff0800(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30dd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76498;
  func_0x000107c61520(&UNK_10db76498,&UNK_1105fa218);
  puRam0000000112f30dd8 = puVar1;
  return;
}



/* Entry: 102ff0840; end: 102ff0843;  */

void FUN_102ff0840(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30de0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db764c0;
  func_0x000107c61520(&UNK_10db764c0,&UNK_1105fa218);
  puRam0000000112f30de0 = puVar1;
  return;
}



/* Entry: 102ff0844; end: 102ff0883;  */

void FUN_102ff0844(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30de0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db764c0;
  func_0x000107c61520(&UNK_10db764c0,&UNK_1105fa218);
  puRam0000000112f30de0 = puVar1;
  return;
}



/* Entry: 102ff0884; end: 102ff0893;  */

void FUN_102ff0884(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30bd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76390;
  func_0x000107c61520(&UNK_10db76390,&UNK_1105fa298);
  puRam0000000112f30bd0 = puVar1;
  return;
}



/* Entry: 102ff0894; end: 102ff08d3;  */

void FUN_102ff0894(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30de8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db764e8;
  func_0x000107c61520(&UNK_10db764e8,&UNK_1105fa388);
  puRam0000000112f30de8 = puVar1;
  return;
}



/* Entry: 102ff08d4; end: 102ff0a6b;  */

void FUN_102ff08d4(void)

{
  return;
}



/* Entry: 102ff0a6c; end: 102ff0a97;  */

undefined8 * FUN_102ff0a6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102ff0a98; end: 102ff0a9f;  */

void FUN_102ff0a98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102ff0aa0; end: 102ff0b0f;  */

undefined8 * FUN_102ff0aa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102ff0b10; end: 102ff0ba3;  */

int FUN_102ff0b10(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102ff0ba4; end: 102ff0c07;  */

long FUN_102ff0ba4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102ff0c08; end: 102ff0d4f;  */

undefined1 * FUN_102ff0c08(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  param_1[0x38] = param_2[0x38];
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 102ff0d50; end: 102ff0d73;  */

void FUN_102ff0d50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Entry: 102ff0d74; end: 102ff0def;  */

undefined1 * FUN_102ff0d74(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[0x38] = param_2[0x38];
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  return param_1;
}



/* Entry: 102ff0df0; end: 102ff0eff;  */

int FUN_102ff0df0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x52) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102ff0f00; end: 102ff0f7f;  */

/* WARNING: Possible PIC construction at 0x000102ff0f14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ff0f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ff0f6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ff0f50) */
/* WARNING: Removing unreachable block (ram,0x000102ff0f60) */
/* WARNING: Removing unreachable block (ram,0x000102ff0f68) */
/* WARNING: Removing unreachable block (ram,0x000102ff0f18) */
/* WARNING: Removing unreachable block (ram,0x000102ff0f28) */
/* WARNING: Removing unreachable block (ram,0x000102ff0f30) */
/* WARNING: Removing unreachable block (ram,0x000102ff0f40) */
/* WARNING: Removing unreachable block (ram,0x000102ff0f48) */
/* WARNING: Removing unreachable block (ram,0x000102ff0f70) */

void FUN_102ff0f00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102ff0f80; end: 102ff1277;  */

undefined8 * FUN_102ff0f80(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[3];
  func_0x000107c61434();
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[2];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[2] = uVar2;
    param_1[3] = uVar1;
  }
  else {
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
  }
  uVar1 = param_2[5];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[4];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[4] = uVar2;
    param_1[5] = uVar1;
  }
  else {
    uVar2 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
  }
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  uVar1 = param_2[9];
  func_0x000107c61434();
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[8];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[8] = uVar2;
    param_1[9] = uVar1;
  }
  else {
    uVar2 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
  }
  uVar2 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  uVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 102ff1278; end: 102ff13a7;  */

undefined8 * FUN_102ff1278(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  if ((ulong)param_1[3] >> 0x3c < 0xf) {
    uVar3 = param_2[3];
    if (0xe < uVar3 >> 0x3c) {
      func_0x0001006e5814(param_1 + 2);
      goto LAB_102ff12c4;
    }
    uVar2 = param_1[2];
    param_1[2] = param_2[2];
    param_1[3] = uVar3;
    func_0x00010006c090(uVar2);
  }
  else {
LAB_102ff12c4:
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
  }
  if ((ulong)param_1[5] >> 0x3c < 0xf) {
    uVar3 = param_2[5];
    if (0xe < uVar3 >> 0x3c) {
      func_0x0001006e5814(param_1 + 4);
      goto LAB_102ff1308;
    }
    uVar2 = param_1[4];
    param_1[4] = param_2[4];
    param_1[5] = uVar3;
    func_0x00010006c090(uVar2);
  }
  else {
LAB_102ff1308:
    uVar2 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
  }
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  if ((ulong)param_1[9] >> 0x3c < 0xf) {
    uVar3 = param_2[9];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_1[8];
      param_1[8] = param_2[8];
      param_1[9] = uVar3;
      func_0x00010006c090(uVar2);
      goto LAB_102ff1378;
    }
    func_0x0001006e5814(param_1 + 8);
  }
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
LAB_102ff1378:
  uVar2 = param_2[0xb];
  uVar1 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0xd];
  uVar1 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102ff13a8; end: 102ff180b;  */

int FUN_102ff13a8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102ff180c; end: 102ff184b;  */

void FUN_102ff180c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113508510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db768b8;
  func_0x000107c61520(&UNK_10db768b8,&UNK_1105fa610);
  puRam0000000113508510 = puVar1;
  return;
}



/* Entry: 102ff184c; end: 102ff184f;  */

void FUN_102ff184c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113508720 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76970;
  func_0x000107c61520(&UNK_10db76970,&UNK_1105fa580);
  puRam0000000113508720 = puVar1;
  return;
}



/* Entry: 102ff1850; end: 102ff188f;  */

void FUN_102ff1850(void)

{
  undefined *puVar1;
  
  if (puRam0000000113508720 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76970;
  func_0x000107c61520(&UNK_10db76970,&UNK_1105fa580);
  puRam0000000113508720 = puVar1;
  return;
}



/* Entry: 102ff1890; end: 102ff1893;  */

void FUN_102ff1890(void)

{
  undefined *puVar1;
  
  if (puRam0000000113508930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76a28;
  func_0x000107c61520(&UNK_10db76a28,&UNK_1105fa4f0);
  puRam0000000113508930 = puVar1;
  return;
}



/* Entry: 102ff1894; end: 102ff18d3;  */

void FUN_102ff1894(void)

{
  undefined *puVar1;
  
  if (puRam0000000113508930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76a28;
  func_0x000107c61520(&UNK_10db76a28,&UNK_1105fa4f0);
  puRam0000000113508930 = puVar1;
  return;
}



/* Entry: 102ff18d4; end: 102ff18d7;  */

void FUN_102ff18d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113508a40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db769c0;
  func_0x000107c61520(&UNK_10db769c0,&UNK_1105fa4f0);
  puRam0000000113508a40 = puVar1;
  return;
}



/* Entry: 102ff18d8; end: 102ff1917;  */

void FUN_102ff18d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113508a40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db769c0;
  func_0x000107c61520(&UNK_10db769c0,&UNK_1105fa4f0);
  puRam0000000113508a40 = puVar1;
  return;
}



/* Entry: 102ff1918; end: 102ff191b;  */

void FUN_102ff1918(void)

{
  undefined *puVar1;
  
  if (puRam0000000113508a48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76998;
  func_0x000107c61520(&UNK_10db76998,&UNK_1105fa4f0);
  puRam0000000113508a48 = puVar1;
  return;
}



/* Entry: 102ff191c; end: 102ff195b;  */

void FUN_102ff191c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113508a48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76998;
  func_0x000107c61520(&UNK_10db76998,&UNK_1105fa4f0);
  puRam0000000113508a48 = puVar1;
  return;
}



/* Entry: 102ff195c; end: 102ff195f;  */

void FUN_102ff195c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113508ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76908;
  func_0x000107c61520(&UNK_10db76908,&UNK_1105fa580);
  puRam0000000113508ad0 = puVar1;
  return;
}



/* Entry: 102ff1960; end: 102ff199f;  */

void FUN_102ff1960(void)

{
  undefined *puVar1;
  
  if (puRam0000000113508ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76908;
  func_0x000107c61520(&UNK_10db76908,&UNK_1105fa580);
  puRam0000000113508ad0 = puVar1;
  return;
}



/* Entry: 102ff19a0; end: 102ff19a3;  */

void FUN_102ff19a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113508ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db768e0;
  func_0x000107c61520(&UNK_10db768e0,&UNK_1105fa580);
  puRam0000000113508ad8 = puVar1;
  return;
}



/* Entry: 102ff19a4; end: 102ff19e3;  */

void FUN_102ff19a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113508ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db768e0;
  func_0x000107c61520(&UNK_10db768e0,&UNK_1105fa580);
  puRam0000000113508ad8 = puVar1;
  return;
}



/* Entry: 102ff19e4; end: 102ff19e7;  */

void FUN_102ff19e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113508b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76818;
  func_0x000107c61520(&UNK_10db76818,&UNK_1105fa610);
  puRam0000000113508b60 = puVar1;
  return;
}



/* Entry: 102ff19e8; end: 102ff1a27;  */

void FUN_102ff19e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113508b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76818;
  func_0x000107c61520(&UNK_10db76818,&UNK_1105fa610);
  puRam0000000113508b60 = puVar1;
  return;
}



/* Entry: 102ff1a28; end: 102ff1a2b;  */

void FUN_102ff1a28(void)

{
  undefined *puVar1;
  
  if (puRam0000000113508b68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db767f0;
  func_0x000107c61520(&UNK_10db767f0,&UNK_1105fa610);
  puRam0000000113508b68 = puVar1;
  return;
}



/* Entry: 102ff1a2c; end: 102ff1b6b;  */

void FUN_102ff1a2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113508b68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db767f0;
  func_0x000107c61520(&UNK_10db767f0,&UNK_1105fa610);
  puRam0000000113508b68 = puVar1;
  return;
}



/* Entry: 102ff1b6c; end: 102ff1b7b;  */

undefined8 * FUN_102ff1b6c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar2;
  uVar1 = param_1[3];
  func_0x000107c61434();
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_1[2];
    func_0x00010006c00c(uVar2,uVar1);
    param_2[2] = uVar2;
    param_2[3] = uVar1;
  }
  else {
    uVar2 = param_1[2];
    param_2[3] = param_1[3];
    param_2[2] = uVar2;
  }
  uVar1 = param_1[5];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_1[4];
    func_0x00010006c00c(uVar2,uVar1);
    param_2[4] = uVar2;
    param_2[5] = uVar1;
  }
  else {
    uVar2 = param_1[4];
    param_2[5] = param_1[5];
    param_2[4] = uVar2;
  }
  uVar2 = param_1[7];
  param_2[6] = param_1[6];
  param_2[7] = uVar2;
  uVar1 = param_1[9];
  func_0x000107c61434();
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_1[8];
    func_0x00010006c00c(uVar2,uVar1);
    param_2[8] = uVar2;
    param_2[9] = uVar1;
  }
  else {
    uVar2 = param_1[8];
    param_2[9] = param_1[9];
    param_2[8] = uVar2;
  }
  uVar2 = param_1[0xb];
  param_2[10] = param_1[10];
  param_2[0xb] = uVar2;
  uVar2 = param_1[0xd];
  param_2[0xc] = param_1[0xc];
  param_2[0xd] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  return param_2;
}



/* Entry: 102ff1b7c; end: 102ff1c7b;  */

void FUN_102ff1b7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f30f10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db76030;
  func_0x000107c61520(&UNK_10db76030,&UNK_1105f9ff0);
  puRam0000000112f30f10 = puVar1;
  return;
}



/* Entry: 102ff1c7c; end: 102ff1cf7;  */

undefined1 FUN_102ff1c7c(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 102ff1cf8; end: 102ff1dcf;  */

void FUN_102ff1cf8(void)

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


