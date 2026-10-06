/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a9e1b8; end: 102a9e1ff;  */

undefined1  [16] FUN_102a9e1b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x746e6f43736e656c;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x49746375646f7270;
  }
  uVar2 = 0xeb00000000747865;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe900000000000064;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 102a9e200; end: 102a9e2e3;  */

void FUN_102a9e200(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0;
  if ((param_2 == 0x49746375646f7270 && param_3 == -0x16ffffffffffff9c) ||
     (func_0x000107c605b8(0x49746375646f7270,0xe900000000000064,param_2,param_3,0), (uVar1 & 1) != 0
     )) {
    func_0x000107c6142c(param_3);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if ((param_2 == 0x746e6f43736e656c) && (param_3 == -0x14ffffffff8b879b)) {
      func_0x000107c6142c(0xeb00000000747865);
      uVar2 = 1;
    }
    else {
      func_0x000107c605b8(0x746e6f43736e656c,0xeb00000000747865,param_2,param_3,0);
      func_0x000107c6142c(param_3);
      uVar2 = 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = 2;
      }
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 102a9e2e4; end: 102a9e2ef;  */

undefined1  [16] FUN_102a9e2e4(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102a9e2f0; end: 102a9e33f;  */

void FUN_102a9e2f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000102a9f008();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102a9e340; end: 102a9e347;  */

undefined8 FUN_102a9e340(void)

{
  return 1;
}



/* Entry: 102a9e348; end: 102a9e3e7;  */

void FUN_102a9e348(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a9e3e8; end: 102a9e403;  */

undefined1  [16] FUN_102a9e3e8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe900000000000064;
  auVar1._0_8_ = 0x49746375646f7270;
  return auVar1;
}



/* Entry: 102a9e404; end: 102a9e48f;  */

void FUN_102a9e404(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0;
  if (param_2 == 0x49746375646f7270 && param_3 == -0x16ffffffffffff9c) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x49746375646f7270,0xe900000000000064,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 102a9e490; end: 102a9e4a7;  */

undefined1  [16] FUN_102a9e490(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102a9e4a8; end: 102a9e57b;  */

void FUN_102a9e4a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000102a9ef88();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102a9e57c; end: 102a9e5b3;  */

undefined1  [16] FUN_102a9e57c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6c7275;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x49746375646f7270;
  }
  uVar2 = 0xe300000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe900000000000064;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 102a9e5b4; end: 102a9e693;  */

void FUN_102a9e5b4(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0;
  if ((param_2 == 0x49746375646f7270 && param_3 == -0x16ffffffffffff9c) ||
     (func_0x000107c605b8(0x49746375646f7270,0xe900000000000064,param_2,param_3,0), (uVar1 & 1) != 0
     )) {
    func_0x000107c6142c(param_3);
    uVar2 = 0;
  }
  else if ((param_2 == 0x6c7275) && (param_3 == -0x1d00000000000000)) {
    func_0x000107c6142c(0xe300000000000000);
    uVar2 = 1;
  }
  else {
    uVar1 = 0x6c7275;
    func_0x000107c605b8(0x6c7275,0xe300000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    uVar2 = 1;
    if ((uVar1 & 1) == 0) {
      uVar2 = 2;
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 102a9e694; end: 102a9e69f;  */

undefined1  [16] FUN_102a9e694(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102a9e6a0; end: 102a9e6ef;  */

void FUN_102a9e6a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000102a9f048();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102a9e6f0; end: 102a9ef47;  */

/* WARNING: Removing unreachable block (ram,0x000102a9ee94) */
/* WARNING: Removing unreachable block (ram,0x000102a9ee9c) */
/* WARNING: Removing unreachable block (ram,0x000102a9ed7c) */

void FUN_102a9e6f0(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar10;
  long extraout_x8_06;
  code *pcVar11;
  long extraout_x12;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long alStack_110 [5];
  ulong uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_51;
  
  uVar4 = 0x112ee7e60;
  func_0x0001000285a8(0x112ee7e60,&UNK_10db13a18);
  uStack_e8 = *(ulong *)(uVar4 - 8);
  uStack_e0 = uVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(uStack_e8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = 0x112ee7e68;
  alStack_110[4] = (long)alStack_110 - extraout_x8;
  func_0x0001000285a8(0x112ee7e68,&UNK_10db13a20);
  lStack_d8 = *(long *)(lVar5 + -8);
  lStack_c8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar9 = ((long)alStack_110 - extraout_x8) - extraout_x8_00;
  lVar5 = 0x112d36580;
  lStack_d0 = lVar9;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_b0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12;
  lVar5 = 0x112ee7e70;
  lStack_c0 = lVar9;
  func_0x0001000285a8(0x112ee7e70,&UNK_10db13a28);
  alStack_110[2] = *(long *)(lVar5 + -8);
  alStack_110[3] = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_110[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_02;
  lVar5 = 0x112ee7e78;
  func_0x0001000285a8(0x112ee7e78,&UNK_10db13a30);
  alStack_110[0] = *(long *)(lVar5 + -8);
  alStack_110[1] = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_110[0] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar9 - extraout_x8_03;
  lVar5 = 0;
  func_0x000107c5ede0();
  lStack_a8 = *(long *)(lVar5 + -8);
  lStack_b8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar15 = lVar14 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_102a9ded4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar12 = (undefined8 *)(lVar15 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0x112ee7e80;
  func_0x0001000285a8(0x112ee7e80,&UNK_10db13a38);
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)puVar12 - extraout_x8_06;
  uVar18 = *(undefined8 *)(param_1 + 0x18);
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar18);
  FUN_102a9ef48();
  func_0x000107c606ec(lVar17,&UNK_1105916d8,&UNK_1105916d8,param_1,uVar18,uVar16);
  FUN_102a9df0c(unaff_x20,puVar12);
  puVar7 = puVar12;
  func_0x000107c614c4(puVar12,lVar6);
  uVar18 = *puVar12;
  iVar3 = (int)puVar7;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      uVar16 = puVar12[1];
      lVar6 = 0x112ee62c0;
      func_0x0001000285a8(0x112ee62c0,&UNK_10db116e0);
      lVar9 = lStack_b8;
      lVar8 = lVar15;
      (**(code **)(lStack_a8 + 0x20))(lVar15,(long)puVar12 + (long)*(int *)(lVar6 + 0x30),lStack_b8)
      ;
      uStack_78 = uStack_78 & 0xffffffffffffff00;
      func_0x000102a9f048();
      func_0x000107c6051c(lVar14,&UNK_110591768,&uStack_78,lVar5,&UNK_110591768,lVar8);
      lVar6 = alStack_110[1];
      uStack_78 = uStack_78 & 0xffffffffffffff00;
      func_0x000107c60520(uVar18,uVar16,&uStack_78,alStack_110[1]);
      func_0x000107c6142c(uVar16);
      if (unaff_x21 == 0) {
        uStack_78 = CONCAT71(uStack_78._1_7_,1);
        uVar18 = 0x112da1dc0;
        func_0x000102a9fc50(0x112da1dc0,PTR___s10Foundation3URLVSEAAMc_110350998);
        func_0x000107c60554(lVar15,&uStack_78,lVar6,lVar9,uVar18);
      }
      (**(code **)(alStack_110[0] + 8))(lVar14,lVar6);
      (**(code **)(lStack_a8 + 8))(lVar15,lVar9);
      pcVar11 = *(code **)(lVar10 + 8);
    }
    else {
      uVar16 = puVar12[1];
      uVar4 = puVar12[2];
      uVar13 = puVar12[3];
      uStack_78._0_1_ = 1;
      func_0x000102a9f008();
      func_0x000107c6051c(lVar9,&UNK_1105917f8,&uStack_78,lVar5,&UNK_1105917f8,puVar7);
      lVar6 = alStack_110[3];
      uStack_78 = (ulong)uStack_78._1_7_ << 8;
      func_0x000107c6053c(uVar18,uVar16,&uStack_78,alStack_110[3]);
      if (unaff_x21 == 0) {
        func_0x000107c6142c(uVar16);
        uStack_51 = 1;
        uStack_78 = uVar4;
        uStack_70 = uVar13;
        func_0x000101480d6c();
        func_0x000107c60554(&uStack_78,&uStack_51,lVar6,PTR___s10Foundation4DataVN_110350ae0,uVar16)
        ;
        (**(code **)(alStack_110[2] + 8))(lVar9,lVar6);
        (**(code **)(lVar10 + 8))(lVar17,lVar5);
        func_0x00010006c090(uVar4,uVar13);
        return;
      }
      func_0x000107c6142c();
      func_0x00010006c090(uVar4,uVar13);
      (**(code **)(alStack_110[2] + 8))(lVar9,lVar6);
      pcVar11 = *(code **)(lVar10 + 8);
    }
  }
  else if (iVar3 == 2) {
    uVar16 = puVar12[1];
    lVar6 = 0x112ee62b0;
    func_0x0001000285a8(0x112ee62b0,&UNK_10db116d0);
    lVar15 = lStack_c0;
    iVar3 = *(int *)(lVar6 + 0x40);
    plVar1 = (long *)((long)puVar12 + (long)*(int *)(lVar6 + 0x50));
    lVar9 = plVar1[1];
    lStack_a8 = *plVar1;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,
                         (uint)*(byte *)((long)puVar12 + (long)*(int *)(lVar6 + 0x60)));
    uStack_e8 = CONCAT44(uStack_e8._4_4_,
                         (uint)*(byte *)((long)puVar12 + (long)*(int *)(lVar6 + 0x70)));
    func_0x0001001021cc((long)puVar12 + (long)*(int *)(lVar6 + 0x30),lStack_c0);
    lVar8 = lStack_b0;
    lVar6 = (long)puVar12 + (long)iVar3;
    func_0x0001001021cc(lVar6,lStack_b0);
    uStack_78._0_1_ = 2;
    func_0x000102a9efc8();
    lVar14 = lStack_d0;
    func_0x000107c6051c(lStack_d0,&UNK_110591888,&uStack_78,lVar5,&UNK_110591888,lVar6);
    lVar6 = lStack_c8;
    uStack_78 = (ulong)uStack_78._1_7_ << 8;
    func_0x000107c6053c(uVar18,uVar16,&uStack_78,lStack_c8);
    if (unaff_x21 == 0) {
      func_0x000107c6142c(uVar16);
      uStack_78._0_1_ = 1;
      uVar18 = 0x112da1dc0;
      func_0x000102a9fc50(0x112da1dc0,PTR___s10Foundation3URLVSEAAMc_110350998);
      lVar8 = lStack_b8;
      func_0x000107c60530(lVar15,&uStack_78,lVar6,lStack_b8,uVar18);
      lVar2 = lStack_b0;
      uStack_78._0_1_ = 2;
      func_0x000107c60530(lStack_b0,&uStack_78,lVar6,lVar8,uVar18);
      uStack_78._0_1_ = 3;
      func_0x000107c60520(lStack_a8,lVar9,&uStack_78,lVar6);
      func_0x000107c6142c(lVar9);
      uStack_78._0_1_ = 4;
      func_0x000107c60540(uStack_e0 & 0xffffffff,&uStack_78,lVar6);
      uStack_78 = CONCAT71(uStack_78._1_7_,5);
      func_0x000107c60540(uStack_e8 & 0xffffffff,&uStack_78,lVar6);
      (**(code **)(lStack_d8 + 8))(lVar14,lVar6);
      func_0x0001000293e4(lVar2);
    }
    else {
      func_0x000107c6142c(uVar16);
      func_0x000107c6142c(lVar9);
      (**(code **)(lStack_d8 + 8))(lVar14,lVar6);
      func_0x0001000293e4(lVar8);
    }
    func_0x0001000293e4(lVar15);
    pcVar11 = *(code **)(lVar10 + 8);
  }
  else {
    uVar16 = puVar12[1];
    uStack_78 = CONCAT71(uStack_78._1_7_,3);
    func_0x000102a9ef88();
    lVar6 = alStack_110[4];
    func_0x000107c6051c(alStack_110[4],&UNK_110591918,&uStack_78,lVar5,&UNK_110591918,puVar7);
    uVar4 = uStack_e0;
    func_0x000107c6053c(uVar18,uVar16);
    func_0x000107c6142c(uVar16);
    (**(code **)(uStack_e8 + 8))(lVar6,uVar4);
    pcVar11 = *(code **)(lVar10 + 8);
  }
  (*pcVar11)(lVar17,lVar5);
  return;
}



/* Entry: 102a9ef48; end: 102a9f087;  */

void FUN_102a9ef48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7e88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1409c;
  func_0x000107c61520(&UNK_10db1409c,&UNK_1105916d8);
  puRam0000000112ee7e88 = puVar1;
  return;
}



/* Entry: 102a9f088; end: 102a9fc0b;  */

/* WARNING: Removing unreachable block (ram,0x000102a9f9a0) */
/* WARNING: Removing unreachable block (ram,0x000102a9f524) */
/* WARNING: Removing unreachable block (ram,0x000102a9f620) */
/* WARNING: Removing unreachable block (ram,0x000102a9f688) */
/* WARNING: Removing unreachable block (ram,0x000102a9f484) */
/* WARNING: Removing unreachable block (ram,0x000102a9f880) */
/* WARNING: Removing unreachable block (ram,0x000102a9f760) */
/* WARNING: Removing unreachable block (ram,0x000102a9f800) */
/* WARNING: Removing unreachable block (ram,0x000102a9fa94) */
/* WARNING: Removing unreachable block (ram,0x000102a9fb50) */
/* WARNING: Removing unreachable block (ram,0x000102a9fb90) */
/* WARNING: Removing unreachable block (ram,0x000102a9f5a4) */

void FUN_102a9f088(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x21;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *apuStack_140 [4];
  undefined8 *puStack_120;
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
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  byte bStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined1 uStack_51;
  
  lVar3 = 0x112ee7eb0;
  uStack_c0 = param_1;
  func_0x0001000285a8(0x112ee7eb0,&UNK_10db13a40);
  lStack_f8 = *(long *)(lVar3 + -8);
  lStack_f0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_f8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar3 = 0x112ee7eb8;
  lStack_d0 = (long)apuStack_140 - extraout_x8;
  func_0x0001000285a8(0x112ee7eb8,&UNK_10db13a48);
  lStack_e0 = *(long *)(lVar3 + -8);
  lStack_98 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_e0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar15 = ((long)apuStack_140 - extraout_x8) - extraout_x8_00;
  lVar3 = 0x112ee7ec0;
  lStack_b0 = lVar15;
  func_0x0001000285a8(0x112ee7ec0,&UNK_10db13a50);
  lStack_100 = *(long *)(lVar3 + -8);
  lStack_e8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_01;
  lVar3 = 0x112ee7ec8;
  lStack_c8 = lVar15;
  func_0x0001000285a8(0x112ee7ec8,&UNK_10db13a58);
  lStack_110 = *(long *)(lVar3 + -8);
  lStack_108 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_110 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_02;
  lVar3 = 0x112ee7ed0;
  lStack_d8 = lVar15;
  func_0x0001000285a8(0x112ee7ed0,&UNK_10db13a60);
  lStack_a8 = *(long *)(lVar3 + -8);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar15 = lVar15 - extraout_x8_03;
  lVar3 = 0;
  FUN_102a9ded4();
  lStack_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar18 = (undefined8 *)(lVar15 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar16 = (undefined8 *)((long)puVar18 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = (undefined8 *)((long)puVar16 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar19 = (undefined8 *)((long)puVar17 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = *(undefined8 *)(param_2 + 0x18);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = param_2;
  func_0x0001000a8868(param_2,uVar12);
  FUN_102a9ef48();
  func_0x000107c606e0(lVar15,&UNK_1105916d8,&UNK_1105916d8,lVar3,uVar12,uVar10);
  lVar5 = lStack_98;
  lVar11 = lStack_a0;
  lVar3 = lStack_b0;
  if (unaff_x21 == 0) {
    lVar4 = lStack_a0;
    apuStack_140[1] = puVar17;
    apuStack_140[2] = puVar18;
    apuStack_140[3] = puVar19;
    puStack_120 = puVar16;
    lStack_118 = (long)puVar19 - extraout_x12_02;
    func_0x000107c60514();
    if ((*(long *)(lVar4 + 0x10) == 0) ||
       (bVar1 = *(byte *)(lVar4 + 0x20), *(long *)(lVar4 + 0x10) != 1 || bVar1 == 4)) {
      lVar5 = 0;
      func_0x000107c60344();
      plVar13 = (long *)PTR___ss13DecodingErrorOs0B0sWP_11034e5b0;
      func_0x000107c613f8();
      lVar3 = 0x112da1fc8;
      func_0x0001000285a8(0x112da1fc8,&UNK_10dae6550);
      iVar2 = *(int *)(lVar3 + 0x30);
      *plVar13 = lStack_b8;
      func_0x000107c604d0(lVar11);
      func_0x000107c6033c((undefined *)((long)plVar13 + (long)iVar2));
      (**(code **)(*(long *)(lVar5 + -8) + 0x68))
                (plVar13,*(undefined4 *)
                          PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_11034e580
                 ,lVar5);
      func_0x000107c61654();
      (**(code **)(lStack_a8 + 8))(lVar15,lVar11);
      func_0x000107c615e8(lVar4);
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          bStack_80 = 0;
          lVar3 = lVar4;
          func_0x000102a9f048();
          lVar6 = lStack_d8;
          func_0x000107c604cc(lStack_d8,&UNK_110591768,&bStack_80,lVar11,&UNK_110591768,lVar3);
          lVar5 = lStack_108;
          bStack_80 = 0;
          pbVar7 = &bStack_80;
          lVar14 = lStack_108;
          func_0x000107c604d4();
          lVar3 = 0x112ee62c0;
          func_0x0001000285a8(0x112ee62c0,&UNK_10db116e0);
          puVar16 = apuStack_140[3];
          iVar2 = *(int *)(lVar3 + 0x30);
          *apuStack_140[3] = pbVar7;
          puVar16[1] = lVar14;
          uVar10 = 0;
          func_0x000107c5ede0(0);
          bStack_80 = 1;
          uVar12 = 0x112da1d98;
          func_0x000102a9fc50(0x112da1d98,PTR___s10Foundation3URLVSeAAMc_1103509b0);
          func_0x000107c60508((long)puVar16 + (long)iVar2,uVar10,&bStack_80,lVar5,uVar10,uVar12);
          (**(code **)(lStack_110 + 8))(lVar6,lVar5);
          (**(code **)(lStack_a8 + 8))(lVar15,lVar11);
          func_0x000107c615e8(lVar4);
          func_0x000107c6159c(puVar16,lStack_b8,0);
          lVar3 = lStack_118;
          func_0x000102a9fc0c(puVar16,lStack_118);
          uVar12 = uStack_c0;
        }
        else {
          bStack_80 = 1;
          lVar3 = lVar4;
          func_0x000102a9f008();
          lVar5 = lStack_c8;
          func_0x000107c604cc(lStack_c8,&UNK_1105917f8,&bStack_80,lVar11,&UNK_1105917f8,lVar3);
          lVar3 = lStack_e8;
          bStack_80 = 0;
          pbVar8 = &bStack_80;
          lVar6 = lStack_e8;
          func_0x000107c604f4();
          uStack_51 = 1;
          pbVar7 = pbVar8;
          func_0x0001006e2f9c();
          func_0x000107c60508(&bStack_80,PTR___s10Foundation4DataVN_110350ae0,&uStack_51,lVar3,
                              PTR___s10Foundation4DataVN_110350ae0,pbVar7);
          (**(code **)(lStack_100 + 8))(lVar5,lVar3);
          (**(code **)(lStack_a8 + 8))(lVar15,lVar11);
          func_0x000107c615e8(lVar4);
          puVar16 = apuStack_140[1];
          *apuStack_140[1] = pbVar8;
          puVar16[1] = lVar6;
          uVar12 = CONCAT71(uStack_7f,bStack_80);
          puVar16[3] = uStack_78;
          puVar16[2] = uVar12;
          func_0x000107c6159c(puVar16,lStack_b8,1);
          lVar3 = lStack_118;
          func_0x000102a9fc0c(puVar16,lStack_118);
          uVar12 = uStack_c0;
        }
      }
      else if (bVar1 == 2) {
        lVar6 = lVar4;
        bStack_80 = bVar1;
        func_0x000102a9efc8();
        func_0x000107c604cc(lVar3,&UNK_110591888,&bStack_80,lVar11,&UNK_110591888,lVar6);
        bStack_80 = 0;
        pbVar7 = &bStack_80;
        lVar6 = lVar5;
        func_0x000107c604f4();
        lVar11 = 0x112ee62b0;
        lStack_c8 = lVar4;
        func_0x0001000285a8(0x112ee62b0,&UNK_10db116d0);
        puVar16 = puStack_120;
        iVar2 = *(int *)(lVar11 + 0x30);
        lStack_d0 = lVar11;
        *puStack_120 = pbVar7;
        puVar16[1] = lVar6;
        uVar10 = 0;
        func_0x000107c5ede0(0);
        bStack_80 = 1;
        uVar12 = 0x112da1d98;
        func_0x000102a9fc50(0x112da1d98,PTR___s10Foundation3URLVSeAAMc_1103509b0);
        func_0x000107c604e8((long)puVar16 + (long)iVar2,uVar10,&bStack_80,lVar5,uVar10,uVar12);
        lVar4 = lStack_98;
        lVar5 = lStack_d0;
        lStack_f0 = (long)*(int *)(lStack_d0 + 0x40);
        bStack_80 = 2;
        lStack_e8 = lVar6;
        lStack_d8 = (long)iVar2;
        func_0x000107c604e8((long)puVar16 + lStack_f0,uVar10,&bStack_80,lStack_98,uVar10,uVar12);
        bStack_80 = 3;
        pbVar7 = &bStack_80;
        func_0x000107c604d4();
        lVar11 = lStack_e0;
        puVar17 = puStack_120;
        puVar16 = (undefined8 *)((long)puStack_120 + (long)*(int *)(lVar5 + 0x50));
        *puVar16 = pbVar7;
        puVar16[1] = lVar4;
        bStack_80 = 4;
        pbVar7 = &bStack_80;
        func_0x000107c604f8(pbVar7,lStack_98);
        *(byte *)((long)puVar17 + (long)*(int *)(lVar5 + 0x60)) = (byte)pbVar7 & 1;
        bStack_80 = 5;
        pbVar7 = &bStack_80;
        func_0x000107c604f8(pbVar7,lStack_98);
        iVar2 = *(int *)(lVar5 + 0x70);
        (**(code **)(lVar11 + 8))(lVar3,lStack_98);
        (**(code **)(lStack_a8 + 8))(lVar15,lStack_a0);
        func_0x000107c615e8(lStack_c8);
        *(byte *)((long)puVar17 + (long)iVar2) = (byte)pbVar7 & 1;
        func_0x000107c6159c(puVar17,lStack_b8,2);
        lVar3 = lStack_118;
        func_0x000102a9fc0c(puVar17,lStack_118);
        uVar12 = uStack_c0;
      }
      else {
        bStack_80 = 3;
        lVar3 = lVar4;
        func_0x000102a9ef88();
        lVar5 = lStack_d0;
        puVar9 = &UNK_110591918;
        func_0x000107c604cc(lStack_d0,&UNK_110591918,&bStack_80,lVar11,&UNK_110591918,lVar3);
        lVar6 = lStack_b8;
        uVar12 = uStack_c0;
        lVar3 = lStack_f0;
        lVar14 = lStack_f0;
        func_0x000107c604f4();
        (**(code **)(lStack_f8 + 8))(lVar5,lVar3);
        (**(code **)(lStack_a8 + 8))(lVar15,lVar11);
        func_0x000107c615e8(lVar4);
        puVar16 = apuStack_140[2];
        *apuStack_140[2] = puVar9;
        puVar16[1] = lVar14;
        func_0x000107c6159c(puVar16,lVar6,3);
        lVar3 = lStack_118;
        func_0x000102a9fc0c(puVar16,lStack_118);
      }
      func_0x000102a9fc0c(lVar3,uVar12);
    }
  }
  func_0x0001000834e4(param_2);
  return;
}



/* Entry: 102a9fc0c; end: 102a9fc8f;  */

undefined8 FUN_102a9fc0c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_102a9ded4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102a9fc90; end: 102a9fcb7;  */

void FUN_102a9fc90(void)

{
  FUN_102a9f088();
  return;
}



/* Entry: 102a9fcb8; end: 102a9ff27;  */

long * FUN_102a9fcb8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    func_0x000107c614c4(param_2,param_3);
    lVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar5;
    iVar9 = (int)plVar4;
    if (iVar9 < 2) {
      if (iVar9 == 0) {
        func_0x000107c61434();
        lVar5 = 0x112ee62c0;
        func_0x0001000285a8(0x112ee62c0,&UNK_10db116e0);
        iVar9 = *(int *)(lVar5 + 0x30);
        lVar5 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar5 + -8) + 0x10))
                  ((long)param_1 + (long)iVar9,(long)param_2 + (long)iVar9,lVar5);
        uVar8 = 0;
      }
      else {
        lVar5 = param_2[2];
        lVar7 = param_2[3];
        func_0x000107c61434();
        func_0x00010006c00c(lVar5,lVar7);
        param_1[2] = lVar5;
        param_1[3] = lVar7;
        uVar8 = 1;
      }
    }
    else if (iVar9 == 2) {
      func_0x000107c61434();
      lVar5 = 0x112ee62b0;
      func_0x0001000285a8(0x112ee62b0,&UNK_10db116d0);
      lVar13 = (long)*(int *)(lVar5 + 0x30);
      lVar6 = 0;
      func_0x000107c5ede0();
      lVar11 = *(long *)(lVar6 + -8);
      pcVar12 = *(code **)(lVar11 + 0x30);
      lVar7 = (long)param_2 + lVar13;
      (*pcVar12)(lVar7,1,lVar6);
      if ((int)lVar7 == 0) {
        (**(code **)(lVar11 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,lVar6);
        (**(code **)(lVar11 + 0x38))((long)param_1 + lVar13,0,1,lVar6);
      }
      else {
        lVar7 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        func_0x000107c610b4((long)param_1 + lVar13,(long)param_2 + lVar13,
                            *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      }
      lVar13 = (long)*(int *)(lVar5 + 0x40);
      lVar7 = (long)param_2 + lVar13;
      (*pcVar12)(lVar7,1,lVar6);
      if ((int)lVar7 == 0) {
        (**(code **)(lVar11 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,lVar6);
        (**(code **)(lVar11 + 0x38))((long)param_1 + lVar13,0,1,lVar6);
      }
      else {
        lVar7 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        func_0x000107c610b4((long)param_1 + lVar13,(long)param_2 + lVar13,
                            *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      }
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x50));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x50));
      uVar8 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar8;
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x60)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x60));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x70)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x70));
      func_0x000107c61434();
      uVar8 = 2;
    }
    else {
      func_0x000107c61434();
      uVar8 = 3;
    }
    func_0x000107c6159c(param_1,param_3,uVar8);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar10 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar5 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102a9ff28; end: 102aa0093;  */

/* WARNING: Possible PIC construction at 0x000102a9ff5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a9ffa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a9fff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a9ffac) */
/* WARNING: Removing unreachable block (ram,0x000102a9ff60) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000102a9fff8) */
/* WARNING: Removing unreachable block (ram,0x000102aa003c) */
/* WARNING: Removing unreachable block (ram,0x000102aa004c) */
/* WARNING: Removing unreachable block (ram,0x000102aa0064) */
/* WARNING: Removing unreachable block (ram,0x000102aa0074) */

void FUN_102a9ff28(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  func_0x000107c614c4();
  iVar1 = (int)lVar2;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
    }
    else {
      if (iVar1 != 1) {
        return;
      }
      uVar3 = *(undefined8 *)(param_1 + 8);
    }
  }
  else if (iVar1 == 2) {
    uVar3 = *(undefined8 *)(param_1 + 8);
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 102aa0094; end: 102aa04f3;  */

undefined8 * FUN_102aa0094(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  
  puVar5 = param_2;
  func_0x000107c614c4(param_2,param_3);
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  iVar9 = (int)puVar5;
  if (iVar9 < 2) {
    if (iVar9 == 0) {
      func_0x000107c61434();
      lVar6 = 0x112ee62c0;
      func_0x0001000285a8(0x112ee62c0,&UNK_10db116e0);
      iVar9 = *(int *)(lVar6 + 0x30);
      lVar6 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))
                ((long)param_1 + (long)iVar9,(long)param_2 + (long)iVar9,lVar6);
    }
    else {
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      func_0x000107c61434();
      func_0x00010006c00c(uVar3,uVar4);
      param_1[2] = uVar3;
      param_1[3] = uVar4;
    }
  }
  else {
    if (iVar9 == 2) {
      func_0x000107c61434();
      lVar6 = 0x112ee62b0;
      func_0x0001000285a8(0x112ee62b0,&UNK_10db116d0);
      lVar12 = (long)*(int *)(lVar6 + 0x30);
      lVar7 = 0;
      func_0x000107c5ede0();
      lVar10 = *(long *)(lVar7 + -8);
      pcVar11 = *(code **)(lVar10 + 0x30);
      lVar8 = (long)param_2 + lVar12;
      (*pcVar11)(lVar8,1,lVar7);
      if ((int)lVar8 == 0) {
        (**(code **)(lVar10 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,lVar7);
        (**(code **)(lVar10 + 0x38))((long)param_1 + lVar12,0,1,lVar7);
      }
      else {
        lVar8 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        func_0x000107c610b4((long)param_1 + lVar12,(long)param_2 + lVar12,
                            *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
      }
      lVar12 = (long)*(int *)(lVar6 + 0x40);
      lVar8 = (long)param_2 + lVar12;
      (*pcVar11)(lVar8,1,lVar7);
      if ((int)lVar8 == 0) {
        (**(code **)(lVar10 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,lVar7);
        (**(code **)(lVar10 + 0x38))((long)param_1 + lVar12,0,1,lVar7);
      }
      else {
        lVar8 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        func_0x000107c610b4((long)param_1 + lVar12,(long)param_2 + lVar12,
                            *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
      }
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x50));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x50));
      uVar3 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x60)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x60));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x70)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x70));
    }
    func_0x000107c61434();
  }
  func_0x000107c6159c(param_1,param_3,puVar5);
  return param_1;
}



/* Entry: 102aa04f4; end: 102aa0933;  */

/* WARNING: Possible PIC construction at 0x000102aa05f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102aa0688: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102aa05f4) */
/* WARNING: Removing unreachable block (ram,0x000102aa068c) */

undefined8 * FUN_102aa04f4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  puVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)puVar3 == 2) {
    uVar7 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar7;
    lVar4 = 0x112ee62b0;
    func_0x0001000285a8(0x112ee62b0,&UNK_10db116d0);
    lVar10 = (long)*(int *)(lVar4 + 0x30);
    lVar5 = 0;
    func_0x000107c5ede0();
    lVar8 = *(long *)(lVar5 + -8);
    pcVar9 = *(code **)(lVar8 + 0x30);
    lVar6 = (long)param_2 + lVar10;
    (*pcVar9)(lVar6,1,lVar5);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 0x20))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar5);
      (**(code **)(lVar8 + 0x38))((long)param_1 + lVar10,0,1,lVar5);
      lVar10 = (long)*(int *)(lVar4 + 0x40);
      lVar6 = (long)param_2 + lVar10;
      (*pcVar9)(lVar6,1,lVar5);
      if ((int)lVar6 == 0) {
        (**(code **)(lVar8 + 0x20))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar5);
        (**(code **)(lVar8 + 0x38))((long)param_1 + lVar10,0,1,lVar5);
        puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x50));
        uVar7 = *puVar3;
        puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x50));
        puVar2[1] = puVar3[1];
        *puVar2 = uVar7;
        *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x60)) =
             *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x60));
        *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x70)) =
             *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x70));
        uVar7 = 2;
        goto LAB_102aa06ec;
      }
      lVar4 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar7 = *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40);
      param_1 = (undefined8 *)((long)param_1 + lVar10);
      param_2 = (undefined8 *)((long)param_2 + lVar10);
    }
    else {
      lVar4 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      uVar7 = *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40);
      param_1 = (undefined8 *)((long)param_1 + lVar10);
      param_2 = (undefined8 *)((long)param_2 + lVar10);
    }
  }
  else {
    if ((int)puVar3 == 0) {
      uVar7 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      lVar4 = 0x112ee62c0;
      func_0x0001000285a8(0x112ee62c0,&UNK_10db116e0);
      iVar1 = *(int *)(lVar4 + 0x30);
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 0x20))
                ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar4);
      uVar7 = 0;
LAB_102aa06ec:
      func_0x000107c6159c(param_1,param_3,uVar7);
      return param_1;
    }
    uVar7 = *(undefined8 *)(*(long *)(param_3 + -8) + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar7);
  return param_1;
}



/* Entry: 102aa0934; end: 102aa0963;  */

void FUN_102aa0934(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000102aa093c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 102aa0964; end: 102aa0a43;  */

void FUN_102aa0964(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    puVar2 = &UNK_10db13ad8;
    func_0x000107c61504(auStack_70,&UNK_10db13ad8,*(long *)(lVar1 + -8) + 0x40);
    puStack_48 = &UNK_10db13af0;
    puStack_c0 = &UNK_10db13b08;
    lVar1 = 0x13f;
    puStack_50 = auStack_70;
    func_0x0001000ee934();
    if (puVar2 < (undefined *)0x40) {
      lStack_b8 = *(long *)(lVar1 + -8) + 0x40;
      puStack_a8 = &UNK_10db13ad8;
      puStack_a0 = &UNK_10db13b20;
      puStack_98 = &UNK_10db13b20;
      lStack_b0 = lStack_b8;
      func_0x000107c61500(auStack_90,0,6,&puStack_c0);
      puStack_38 = &UNK_10db13b08;
      puStack_40 = auStack_90;
      func_0x000107c61528(param_1,0x100,4,&puStack_50);
    }
  }
  return;
}



/* Entry: 102aa0a44; end: 102aa0f43;  */

int FUN_102aa0a44(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102aa0ac0;
        goto LAB_102aa0aa4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102aa0aa4:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_102aa0ac0:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102aa0f44; end: 102aa0f83;  */

void FUN_102aa0f44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7f80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13c54;
  func_0x000107c61520(&UNK_10db13c54,&UNK_110591918);
  puRam0000000112ee7f80 = puVar1;
  return;
}



/* Entry: 102aa0f84; end: 102aa0f87;  */

void FUN_102aa0f84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7f88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13d0c;
  func_0x000107c61520(&UNK_10db13d0c,&UNK_110591888);
  puRam0000000112ee7f88 = puVar1;
  return;
}



/* Entry: 102aa0f88; end: 102aa0fc7;  */

void FUN_102aa0f88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7f88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13d0c;
  func_0x000107c61520(&UNK_10db13d0c,&UNK_110591888);
  puRam0000000112ee7f88 = puVar1;
  return;
}



/* Entry: 102aa0fc8; end: 102aa0fcb;  */

void FUN_102aa0fc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7f90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13dc4;
  func_0x000107c61520(&UNK_10db13dc4,&UNK_1105917f8);
  puRam0000000112ee7f90 = puVar1;
  return;
}



/* Entry: 102aa0fcc; end: 102aa100b;  */

void FUN_102aa0fcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7f90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13dc4;
  func_0x000107c61520(&UNK_10db13dc4,&UNK_1105917f8);
  puRam0000000112ee7f90 = puVar1;
  return;
}



/* Entry: 102aa100c; end: 102aa100f;  */

void FUN_102aa100c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7f98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13e7c;
  func_0x000107c61520(&UNK_10db13e7c,&UNK_110591768);
  puRam0000000112ee7f98 = puVar1;
  return;
}



/* Entry: 102aa1010; end: 102aa104f;  */

void FUN_102aa1010(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7f98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13e7c;
  func_0x000107c61520(&UNK_10db13e7c,&UNK_110591768);
  puRam0000000112ee7f98 = puVar1;
  return;
}



/* Entry: 102aa1050; end: 102aa1053;  */

void FUN_102aa1050(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13f34;
  func_0x000107c61520(&UNK_10db13f34,&UNK_1105916d8);
  puRam0000000112ee7fa0 = puVar1;
  return;
}



/* Entry: 102aa1054; end: 102aa1093;  */

void FUN_102aa1054(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13f34;
  func_0x000107c61520(&UNK_10db13f34,&UNK_1105916d8);
  puRam0000000112ee7fa0 = puVar1;
  return;
}



/* Entry: 102aa1094; end: 102aa1097;  */

void FUN_102aa1094(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13e14;
  func_0x000107c61520(&UNK_10db13e14,&UNK_110591768);
  puRam0000000112ee7fa8 = puVar1;
  return;
}



/* Entry: 102aa1098; end: 102aa10d7;  */

void FUN_102aa1098(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13e14;
  func_0x000107c61520(&UNK_10db13e14,&UNK_110591768);
  puRam0000000112ee7fa8 = puVar1;
  return;
}



/* Entry: 102aa10d8; end: 102aa10db;  */

void FUN_102aa10d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13dec;
  func_0x000107c61520(&UNK_10db13dec,&UNK_110591768);
  puRam0000000112ee7fb0 = puVar1;
  return;
}



/* Entry: 102aa10dc; end: 102aa111b;  */

void FUN_102aa10dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13dec;
  func_0x000107c61520(&UNK_10db13dec,&UNK_110591768);
  puRam0000000112ee7fb0 = puVar1;
  return;
}



/* Entry: 102aa111c; end: 102aa111f;  */

void FUN_102aa111c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13d5c;
  func_0x000107c61520(&UNK_10db13d5c,&UNK_1105917f8);
  puRam0000000112ee7fb8 = puVar1;
  return;
}



/* Entry: 102aa1120; end: 102aa115f;  */

void FUN_102aa1120(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13d5c;
  func_0x000107c61520(&UNK_10db13d5c,&UNK_1105917f8);
  puRam0000000112ee7fb8 = puVar1;
  return;
}



/* Entry: 102aa1160; end: 102aa1163;  */

void FUN_102aa1160(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13d34;
  func_0x000107c61520(&UNK_10db13d34,&UNK_1105917f8);
  puRam0000000112ee7fc0 = puVar1;
  return;
}



/* Entry: 102aa1164; end: 102aa11a3;  */

void FUN_102aa1164(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13d34;
  func_0x000107c61520(&UNK_10db13d34,&UNK_1105917f8);
  puRam0000000112ee7fc0 = puVar1;
  return;
}



/* Entry: 102aa11a4; end: 102aa11a7;  */

void FUN_102aa11a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13ca4;
  func_0x000107c61520(&UNK_10db13ca4,&UNK_110591888);
  puRam0000000112ee7fc8 = puVar1;
  return;
}



/* Entry: 102aa11a8; end: 102aa11e7;  */

void FUN_102aa11a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13ca4;
  func_0x000107c61520(&UNK_10db13ca4,&UNK_110591888);
  puRam0000000112ee7fc8 = puVar1;
  return;
}



/* Entry: 102aa11e8; end: 102aa11eb;  */

void FUN_102aa11e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13c7c;
  func_0x000107c61520(&UNK_10db13c7c,&UNK_110591888);
  puRam0000000112ee7fd0 = puVar1;
  return;
}



/* Entry: 102aa11ec; end: 102aa122b;  */

void FUN_102aa11ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13c7c;
  func_0x000107c61520(&UNK_10db13c7c,&UNK_110591888);
  puRam0000000112ee7fd0 = puVar1;
  return;
}



/* Entry: 102aa122c; end: 102aa122f;  */

void FUN_102aa122c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13bec;
  func_0x000107c61520(&UNK_10db13bec,&UNK_110591918);
  puRam0000000112ee7fd8 = puVar1;
  return;
}



/* Entry: 102aa1230; end: 102aa126f;  */

void FUN_102aa1230(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13bec;
  func_0x000107c61520(&UNK_10db13bec,&UNK_110591918);
  puRam0000000112ee7fd8 = puVar1;
  return;
}



/* Entry: 102aa1270; end: 102aa1273;  */

void FUN_102aa1270(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13bc4;
  func_0x000107c61520(&UNK_10db13bc4,&UNK_110591918);
  puRam0000000112ee7fe0 = puVar1;
  return;
}



/* Entry: 102aa1274; end: 102aa12b3;  */

void FUN_102aa1274(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13bc4;
  func_0x000107c61520(&UNK_10db13bc4,&UNK_110591918);
  puRam0000000112ee7fe0 = puVar1;
  return;
}



/* Entry: 102aa12b4; end: 102aa12b7;  */

void FUN_102aa12b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13ecc;
  func_0x000107c61520(&UNK_10db13ecc,&UNK_1105916d8);
  puRam0000000112ee7fe8 = puVar1;
  return;
}



/* Entry: 102aa12b8; end: 102aa12f7;  */

void FUN_102aa12b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7fe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13ecc;
  func_0x000107c61520(&UNK_10db13ecc,&UNK_1105916d8);
  puRam0000000112ee7fe8 = puVar1;
  return;
}



/* Entry: 102aa12f8; end: 102aa12fb;  */

void FUN_102aa12f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7ff0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13ea4;
  func_0x000107c61520(&UNK_10db13ea4,&UNK_1105916d8);
  puRam0000000112ee7ff0 = puVar1;
  return;
}



/* Entry: 102aa12fc; end: 102aa133b;  */

void FUN_102aa12fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7ff0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13ea4;
  func_0x000107c61520(&UNK_10db13ea4,&UNK_1105916d8);
  puRam0000000112ee7ff0 = puVar1;
  return;
}



/* Entry: 102aa133c; end: 102aa16bb;  */

undefined4 FUN_102aa133c(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x77656956626577;
  if ((param_1 == 0x77656956626577 && param_2 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x77656956626577,0xe700000000000000,param_1,param_2,0), (uVar1 & 1) != 0))
  {
    func_0x000107c6142c(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if (((param_1 == 0x445065766974616e) && (param_2 == -0x16ffffffffffffb0)) ||
       (func_0x000107c605b8(0x445065766974616e,0xe900000000000050,param_1,param_2,0),
       (uVar1 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0;
      if (((param_1 == 0x6b6e694c70656564) && (param_2 == -0x1800000000000000)) ||
         (func_0x000107c605b8(0x6b6e694c70656564,0xe800000000000000,param_1,param_2,0),
         (uVar1 & 1) != 0)) {
        func_0x000107c6142c(param_2);
        uVar2 = 2;
      }
      else {
        uVar1 = 0;
        if ((param_1 == 0x4f797254446f7774) && (param_2 == -0x16ffffffffffff92)) {
          func_0x000107c6142c(0xe90000000000006e);
          uVar2 = 3;
        }
        else {
          func_0x000107c605b8(0x4f797254446f7774,0xe90000000000006e,param_1,param_2,0);
          func_0x000107c6142c(param_2);
          uVar2 = 3;
          if ((uVar1 & 1) == 0) {
            uVar2 = 4;
          }
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 102aa16bc; end: 102aa1733;  */

undefined1 FUN_102aa16bc(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 102aa1734; end: 102aa177b;  */

void FUN_102aa1734(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0x554b53,0xe300000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 102aa177c; end: 102aa178b;  */

void FUN_102aa177c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,0x554b53,0xe300000000000000);
  return;
}



/* Entry: 102aa178c; end: 102aa17cf;  */

void FUN_102aa178c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0x554b53,0xe300000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 102aa17d0; end: 102aa183b;  */

void FUN_102aa17d0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 102aa183c; end: 102aa184f;  */

void FUN_102aa183c(undefined8 *param_1)

{
  *param_1 = 0x554b53;
  param_1[1] = 0xe300000000000000;
  return;
}



/* Entry: 102aa1850; end: 102aa18ab;  */

void FUN_102aa1850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000102aa24f0();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 102aa18ac; end: 102aa18f7;  */

void FUN_102aa18ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000102aa24f0();
  func_0x000107c5fc2c(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 102aa18f8; end: 102aa1913;  */

undefined8 FUN_102aa18f8(void)

{
  return 1;
}



/* Entry: 102aa1914; end: 102aa19bf;  */

void FUN_102aa1914(void)

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



/* Entry: 102aa19c0; end: 102aa19fb;  */

undefined1  [16] FUN_102aa19c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6c436e69616d6f64;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x656d616e;
  }
  uVar2 = 0xeb00000000737361;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe400000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 102aa19fc; end: 102aa1ad7;  */

void FUN_102aa19fc(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x656d616e || param_3 != -0x1c00000000000000) {
    uVar1 = 0;
    func_0x000107c605b8(0x656d616e,0xe400000000000000,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      if ((param_2 == 0x6c436e69616d6f64) && (param_3 == -0x14ffffffff8c8c9f)) {
        func_0x000107c6142c(0xeb00000000737361);
        uVar2 = 1;
      }
      else {
        func_0x000107c605b8(0x6c436e69616d6f64,0xeb00000000737361,param_2,param_3,0);
        func_0x000107c6142c(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_102aa1a5c;
    }
  }
  func_0x000107c6142c(param_3);
  uVar2 = 0;
LAB_102aa1a5c:
  *param_1 = uVar2;
  return;
}



/* Entry: 102aa1ad8; end: 102aa1aef;  */

undefined1  [16] FUN_102aa1ad8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102aa1af0; end: 102aa1b3f;  */

void FUN_102aa1af0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102aa1e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102aa1b40; end: 102aa1c6f;  */

void FUN_102aa1b40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 uStack_51;
  
  lVar3 = 0x112ee7ff8;
  func_0x0001000285a8(0x112ee7ff8,&UNK_10db140f8);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102aa1e94();
  func_0x000107c606ec(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110591b68,&UNK_110591b68,param_1,
                      uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c6053c(param_2,param_3,&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    func_0x000102a9c878();
    func_0x000107c60554();
  }
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
  return;
}



/* Entry: 102aa1c70; end: 102aa1d57;  */

void FUN_102aa1c70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c5fb58(auStack_68,0x554b53,0xe300000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 102aa1d58; end: 102aa1d7f;  */

void FUN_102aa1d58(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_102aa1ed4();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Entry: 102aa1d80; end: 102aa1d97;  */

void FUN_102aa1d80(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102aa1b40(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 102aa1d98; end: 102aa1dab;  */

long FUN_102aa1d98(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((lVar1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )();
  return lVar1;
}



/* Entry: 102aa1dac; end: 102aa1e6b;  */

undefined1  [16] FUN_102aa1dac(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c602fc(0x19);
  func_0x000107c5fb78(0x203a656d616e,0xe600000000000000);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x6e69616d6f64202c,0xef203a7373616c43);
  func_0x000107c603d0();
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 102aa1e6c; end: 102aa1e93;  */

undefined1  [16] FUN_102aa1e6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c602fc(0x19);
  func_0x000107c5fb78(0x203a656d616e,0xe600000000000000);
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c5fb78(0x6e69616d6f64202c,0xef203a7373616c43);
  func_0x000107c603d0();
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 102aa1e94; end: 102aa1ed3;  */

void FUN_102aa1e94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8000 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db143c8;
  func_0x000107c61520(&UNK_10db143c8,&UNK_110591b68);
  puRam0000000112ee8000 = puVar1;
  return;
}



/* Entry: 102aa1ed4; end: 102aa203f;  */

/* WARNING: Removing unreachable block (ram,0x000102aa2034) */
/* WARNING: Removing unreachable block (ram,0x000102aa1f9c) */

undefined1  [16] FUN_102aa1ed4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_60 [14];
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar1 = 0x112ee8078;
  func_0x0001000285a8(0x112ee8078,&UNK_10db14418);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_1 + 0x18);
  puVar3 = *(undefined1 **)(param_1 + 0x20);
  lVar2 = param_1;
  func_0x0001000a8868(param_1,lVar5);
  FUN_102aa1e94();
  func_0x000107c606e0(auStack_60 + -extraout_x8,&UNK_110591b68,&UNK_110591b68,lVar2,lVar5,puVar3);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar3 = &uStack_51;
    lVar5 = lVar1;
    func_0x000107c604f4(puVar3,lVar1);
    uStack_52 = 1;
    puVar4 = puVar3;
    func_0x000102a9daf0();
    func_0x000107c60508(&UNK_110591ad8,&uStack_52,lVar1,&UNK_110591ad8,puVar4);
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,lVar1);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  auVar7._8_8_ = lVar5;
  auVar7._0_8_ = puVar3;
  return auVar7;
}



/* Entry: 102aa2040; end: 102aa2043;  */

void FUN_102aa2040(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db141c8;
  func_0x000107c61520(&UNK_10db141c8,&UNK_110591ad8);
  puRam0000000112ee8008 = puVar1;
  return;
}



/* Entry: 102aa2044; end: 102aa2083;  */

void FUN_102aa2044(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db141c8;
  func_0x000107c61520(&UNK_10db141c8,&UNK_110591ad8);
  puRam0000000112ee8008 = puVar1;
  return;
}



/* Entry: 102aa2084; end: 102aa2087;  */

void FUN_102aa2084(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8010 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14280;
  func_0x000107c61520(&UNK_10db14280,&UNK_110591a40);
  puRam0000000112ee8010 = puVar1;
  return;
}



/* Entry: 102aa2088; end: 102aa20c7;  */

void FUN_102aa2088(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8010 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14280;
  func_0x000107c61520(&UNK_10db14280,&UNK_110591a40);
  puRam0000000112ee8010 = puVar1;
  return;
}



/* Entry: 102aa20c8; end: 102aa20cf;  */

void FUN_102aa20c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102aa20d0; end: 102aa213f;  */

undefined8 * FUN_102aa20d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102aa2140; end: 102aa2427;  */

int FUN_102aa2140(int *param_1,int param_2)

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



/* Entry: 102aa2428; end: 102aa2467;  */

void FUN_102aa2428(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db143a0;
  func_0x000107c61520(&UNK_10db143a0,&UNK_110591b68);
  puRam0000000112ee8018 = puVar1;
  return;
}



/* Entry: 102aa2468; end: 102aa246b;  */

void FUN_102aa2468(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8020 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14338;
  func_0x000107c61520(&UNK_10db14338,&UNK_110591b68);
  puRam0000000112ee8020 = puVar1;
  return;
}



/* Entry: 102aa246c; end: 102aa24ab;  */

void FUN_102aa246c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8020 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14338;
  func_0x000107c61520(&UNK_10db14338,&UNK_110591b68);
  puRam0000000112ee8020 = puVar1;
  return;
}



/* Entry: 102aa24ac; end: 102aa24af;  */

void FUN_102aa24ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8028 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14310;
  func_0x000107c61520(&UNK_10db14310,&UNK_110591b68);
  puRam0000000112ee8028 = puVar1;
  return;
}



/* Entry: 102aa24b0; end: 102aa252f;  */

void FUN_102aa24b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8028 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14310;
  func_0x000107c61520(&UNK_10db14310,&UNK_110591b68);
  puRam0000000112ee8028 = puVar1;
  return;
}



/* Entry: 102aa2530; end: 102aa2567;  */

undefined8 * FUN_102aa2530(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102aa2568; end: 102aa26a7;  */

void FUN_102aa2568(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x736e6f6974706f;
  if (cVar3 != '\x01') {
    uVar1 = 0x756b73;
  }
  uVar2 = 0xe700000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xe300000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102aa26a8; end: 102aa271f;  */

void FUN_102aa26a8(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102aa2720; end: 102aa278b;  */

void FUN_102aa2720(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x736e6f6974706f;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x756b73;
  }
  uVar2 = 0xe700000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe300000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102aa278c; end: 102aa2807;  */

void FUN_102aa278c(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 uVar3;
  
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_3);
  uVar3 = 1;
  if (lVar2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102aa2808; end: 102aa281f;  */

undefined1  [16] FUN_102aa2808(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102aa2820; end: 102aa286f;  */

void FUN_102aa2820(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102aa2bb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102aa2870; end: 102aa29af;  */

void FUN_102aa2870(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112ee8080;
  uStack_70 = param_4;
  uStack_68 = param_5;
  func_0x0001000285a8(0x112ee8080,&UNK_10db14420);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_70 - extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102aa2bb4();
  func_0x000107c606ec(lVar5,&UNK_110591d58,&UNK_110591d58,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c60520(param_2,param_3,&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c60520(uStack_70,uStack_68,&uStack_52,lVar3);
    (**(code **)(lVar4 + 8))(lVar5,lVar3);
  }
  else {
    (**(code **)(lVar4 + 8))(lVar5,lVar3);
  }
  return;
}



/* Entry: 102aa29b0; end: 102aa29db;  */

void FUN_102aa29b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_102aa2bf4();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}


