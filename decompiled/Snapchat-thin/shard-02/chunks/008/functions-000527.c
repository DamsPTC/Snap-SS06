/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021ba830; end: 1021ba84b;  */

void FUN_1021ba830(long param_1,long param_2)

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



/* Entry: 1021ba84c; end: 1021ba863;  */

void FUN_1021ba84c(void)

{
  FUN_1021b9560();
  return;
}



/* Entry: 1021ba864; end: 1021ba873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ba864(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  bVar3 = *(byte *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar11 = *param_1;
  cVar2 = *(char *)(param_1 + 1);
  func_0x000107c61428(lVar8 + 0x10,auStack_58,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 == 0) {
    return;
  }
  if (cVar2 == '\x01') {
    lStack_68 = 0;
    uStack_60 = 0xe000000000000000;
    func_0x000107c614b0(uVar11);
    func_0x000107c602fc(0x39);
    func_0x000107c5fb78(0xd00000000000002d,0x800000010f06b650);
    bVar6 = (bVar3 & 1) == 0;
    uVar10 = 0x65757274;
    if (bVar6) {
      uVar10 = 0x65736c6166;
    }
    uVar1 = 0xe400000000000000;
    if (bVar6) {
      uVar1 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar10,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c5fb78(0x3a726f727265202c,0xe800000000000000);
    uVar10 = 0x112d393f0;
    uStack_70 = uVar11;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&uStack_70,&lStack_68,uVar10,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar10 = uStack_60;
    func_0x0001007d6c6c(3,lStack_68,uStack_60,uVar9,&PTR_DAT_1104db868);
    func_0x000107c6142c(uVar10);
    func_0x000107c56c24(*(undefined8 *)(lVar8 + _DAT_112e60378));
    if (lRam0000000112e603d8 != -1) {
      func_0x000107c61568(0x112e603d8,FUN_1021b8424);
    }
    lVar4 = lRam0000000112e603e8;
    uVar9 = uRam0000000112e603e0;
    if (lRam0000000112e603e8 != 0) {
      uVar10 = *(undefined8 *)(lVar8 + _DAT_112e60398);
      func_0x000107c6157c(uVar10);
      func_0x0001000d224c(&lStack_68);
      func_0x000107c61574(uVar10);
      lVar5 = lStack_68;
      if (lStack_68 != 0) {
        puVar7 = PTR_PTR_1126afde0;
        func_0x000107c61168(PTR_PTR_1126afde0);
        func_0x000107c5fadc(uVar9,lVar4);
        uVar10 = 0xd000000000000026;
        func_0x000107c5fadc(0xd000000000000026,0x800000010f06b680);
        func_0x000107c409d8(puVar7);
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar10);
        func_0x000107c61174(puVar7);
        func_0x000107c5c2e0(lVar5);
        func_0x000100fc38ac(uVar11,1);
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar7);
        goto LAB_1021b98e0;
      }
    }
    func_0x000100fc38ac(uVar11,1);
  }
LAB_1021b98e0:
  func_0x000107c61170(lVar8);
  return;
}



/* Entry: 1021ba874; end: 1021ba893;  */

void FUN_1021ba874(void)

{
  FUN_1021b93c8();
  return;
}



/* Entry: 1021ba894; end: 1021ba8bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021ba894(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  bVar3 = *(byte *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar11 = *param_1;
  cVar2 = *(char *)(param_1 + 1);
  func_0x000107c61428(lVar8 + 0x10,auStack_68,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 == 0) {
    return;
  }
  if (cVar2 == '\x01') {
    lStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c614b0(uVar11);
    func_0x000107c602fc(0x2d);
    func_0x000107c5fb78(0xd000000000000021,0x800000010f06b6f0);
    bVar6 = (bVar3 & 1) == 0;
    uVar10 = 0x65757274;
    if (bVar6) {
      uVar10 = 0x65736c6166;
    }
    uVar1 = 0xe400000000000000;
    if (bVar6) {
      uVar1 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar10,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c5fb78(0x3a726f727265202c,0xe800000000000000);
    uVar10 = 0x112d393f0;
    uStack_80 = uVar11;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&uStack_80,&lStack_78,uVar10,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar10 = uStack_70;
    func_0x0001007d6c6c(3,lStack_78,uStack_70,uVar9,&PTR_DAT_1104db868);
    func_0x000107c6142c(uVar10);
    func_0x000107c56c24(*(undefined8 *)(lVar8 + _DAT_112e60370));
    if (lRam0000000112e603d8 != -1) {
      func_0x000107c61568(0x112e603d8,FUN_1021b8424);
    }
    lVar4 = lRam0000000112e603e8;
    uVar9 = uRam0000000112e603e0;
    if (lRam0000000112e603e8 != 0) {
      uVar10 = *(undefined8 *)(lVar8 + _DAT_112e60398);
      func_0x000107c6157c(uVar10);
      func_0x0001000d224c(&lStack_78);
      func_0x000107c61574(uVar10);
      lVar5 = lStack_78;
      if (lStack_78 != 0) {
        puVar7 = PTR_PTR_1126afde0;
        func_0x000107c61168(PTR_PTR_1126afde0);
        func_0x000107c5fadc(uVar9,lVar4);
        uVar10 = 0xd000000000000022;
        func_0x000107c5fadc(0xd000000000000022,0x800000010f06b720);
        func_0x000107c409d8(puVar7);
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar10);
        func_0x000107c61174(puVar7);
        func_0x000107c5c2e0(lVar5);
        func_0x000100fc38ac(uVar11,1);
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar7);
        goto LAB_1021b9b94;
      }
    }
    func_0x000100fc38ac(uVar11,1);
  }
LAB_1021b9b94:
  func_0x000107c61170(lVar8);
  return;
}



/* Entry: 1021ba8c0; end: 1021baab3;  */

long FUN_1021ba8c0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1021baab4; end: 1021baeaf;  */

undefined1  [16] FUN_1021baab4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe0;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f06b750);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f06b780);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021bab80);
  (*pcVar1)();
}



/* Entry: 1021baeb0; end: 1021bafa3;  */

undefined1  [16] FUN_1021baeb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auVar9 [16];
  
  uVar8 = 0x800000010f06ba10;
  uVar4 = (uint)((ulong)*(undefined8 *)(unaff_x20 + 0x10) >> 0x20);
  if (uVar4 >> 0x1d == 5) {
    uVar5 = 0xd000000000000014;
  }
  else {
    uVar8 = 0xe700000000000000;
    uVar5 = 0x6c6c6543474953;
  }
  uVar2 = 0x800000010f06ba30;
  uVar3 = 0xd000000000000016;
  if (uVar4 >> 0x1d != 4) {
    uVar2 = uVar8;
    uVar3 = uVar5;
  }
  uVar7 = uVar4 >> 0x1d;
  if (uVar7 == 3) {
    uVar3 = 0xd000000000000014;
    uVar2 = 0x800000010f06ba50;
  }
  uVar8 = 0x800000010f06ba70;
  uVar5 = 0xd000000000000013;
  if (uVar7 != 2) {
    uVar8 = 0xe700000000000000;
    uVar5 = 0x6c6c6543474953;
  }
  uVar1 = 0x800000010f06ba90;
  uVar6 = 0xd000000000000018;
  if (uVar7 != 1) {
    uVar1 = uVar8;
    uVar6 = uVar5;
  }
  uVar8 = 0x800000010f06bab0;
  uVar5 = 0xd000000000000013;
  if (uVar7 != 0) {
    uVar8 = uVar1;
    uVar5 = uVar6;
  }
  if (uVar4 >> 0x1d < 3) {
    uVar2 = uVar8;
    uVar3 = uVar5;
  }
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = uVar3;
  return auVar9;
}



/* Entry: 1021bafa4; end: 1021bb0ef;  */

undefined1  [16] FUN_1021bafa4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long *unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  lVar6 = unaff_x20[2];
  uVar5 = (uint)((ulong)lVar6 >> 0x20);
  uVar7 = uVar5 >> 0x1d;
  if (uVar5 >> 0x1d < 3) {
    if (uVar7 == 0) {
      func_0x0001021c2b8c();
      auVar10._8_8_ = param_2;
      auVar10._0_8_ = param_1;
      return auVar10;
    }
    if (uVar7 == 1) {
      func_0x0001021c2df4();
      auVar8._8_8_ = param_2;
      auVar8._0_8_ = param_1;
      return auVar8;
    }
    func_0x0001021c2f8c();
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = param_1;
    return auVar11;
  }
  if (uVar7 < 5) {
    if (uVar7 == 3) {
      return ZEXT816(0);
    }
    func_0x0001021c31f0();
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = param_1;
    return auVar12;
  }
  if (uVar7 == 5) {
    func_0x0001021c338c();
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = param_1;
    return auVar9;
  }
  lVar1 = *unaff_x20;
  lVar3 = unaff_x20[1];
  lVar2 = unaff_x20[3];
  lVar4 = unaff_x20[4];
  if (lVar6 == -0x4000000000000000 && ((lVar2 == 0 && lVar4 == 0) && (lVar1 == 0 && lVar3 == 0))) {
    func_0x0001021c2c5c();
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = param_1;
    return auVar14;
  }
  if (((lVar6 == -0x4000000000000000) && (lVar1 == 1)) && ((lVar2 == 0 && lVar4 == 0) && lVar3 == 0)
     ) {
    func_0x0001021c2d28();
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = param_1;
    return auVar13;
  }
  if (((lVar6 == -0x4000000000000000) && (lVar1 == 2)) && ((lVar2 == 0 && lVar4 == 0) && lVar3 == 0)
     ) {
    func_0x0001021c2ec0();
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = param_1;
    return auVar15;
  }
  if (((lVar6 == -0x4000000000000000) && (lVar1 == 3)) && ((lVar2 == 0 && lVar4 == 0) && lVar3 == 0)
     ) {
    func_0x0001021c3058();
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = param_1;
    return auVar16;
  }
  if (((lVar6 == -0x4000000000000000) && (lVar1 == 4)) && ((lVar2 == 0 && lVar4 == 0) && lVar3 == 0)
     ) {
    func_0x0001021c3124();
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = param_1;
    return auVar17;
  }
  func_0x0001021c32bc();
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = param_1;
  return auVar18;
}



/* Entry: 1021bb0f0; end: 1021bb617;  */

undefined * FUN_1021bb0f0(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 auStack_170 [272];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&uStack_1c0 - extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar2 = (undefined *)0x0;
  if (*(ulong *)(unaff_x20 + 0x10) >> 0x3d == 3) {
    func_0x000107c5edd0(lVar9,0xd000000000000060,0x800000010f06b820);
    lVar3 = lVar9;
    (**(code **)(lVar12 + 0x30))(lVar9,1,lVar1);
    if ((int)lVar3 == 1) {
      func_0x0001000293e4(lVar9);
      puVar2 = (undefined *)0x0;
    }
    else {
      lVar3 = lVar13;
      (**(code **)(lVar12 + 0x20))(lVar13,lVar9,lVar1);
      func_0x0001021c3458();
      lVar4 = lVar3;
      lVar10 = lVar9;
      lStack_180 = lVar3;
      lStack_178 = lVar13;
      func_0x0001021c3524();
      lVar13 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar13 + 0x18) = 2;
      *(undefined8 *)(lVar13 + 0x10) = 1;
      *(undefined **)(lVar13 + 0x38) = PTR___sSSN_11034da80;
      lVar5 = lVar13;
      func_0x00010075bbf0();
      *(long *)(lVar13 + 0x40) = lVar5;
      *(long *)(lVar13 + 0x20) = lVar3;
      *(long *)(lVar13 + 0x28) = lVar9;
      func_0x000107c61434(lVar9);
      lVar3 = lVar10;
      func_0x000107c5fb00(lVar4,lVar10,lVar13);
      lStack_198 = lVar3;
      lStack_190 = lVar4;
      func_0x000107c6142c(lVar10);
      puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      func_0x000107c610f8();
      func_0x000107c5fadc(lVar4,lVar3);
      func_0x000107c48af4();
      func_0x000107c61170(lVar4);
      func_0x000107c61174();
      puVar6 = puVar2;
      func_0x000107c4adac();
      lVar13 = 0x112d48380;
      puStack_1a0 = puVar6;
      func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
      lStack_188 = lVar13;
      func_0x000107c61534();
      *(undefined8 *)(lVar13 + 0x18) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 2;
      uVar7 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
      *(undefined8 *)(lVar13 + 0x20) = uVar7;
      func_0x000107c61174();
      func_0x00010052bbec();
      func_0x000107c61180();
      uVar11 = uVar7;
      func_0x000107c43780();
      func_0x000107c61180();
      func_0x000107c615e8(uVar7);
      uVar7 = 0;
      FUN_1021bb850(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
      *(undefined8 *)(lVar13 + 0x28) = uVar11;
      uVar11 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
      *(undefined8 *)(lVar13 + 0x40) = uVar7;
      *(undefined8 *)(lVar13 + 0x48) = uVar11;
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168();
      puStack_1a8 = puVar6;
      func_0x000107c61174();
      func_0x000107c61174();
      uStack_1b8 = uVar11;
      func_0x000107c5af88();
      func_0x000107c61180();
      uVar7 = 0;
      FUN_1021bb850(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
      *(undefined8 *)(lVar13 + 0x68) = uVar7;
      *(undefined **)(lVar13 + 0x50) = puVar6;
      lVar3 = lVar13;
      func_0x000100ecbca8(lVar13);
      func_0x000107c61588(lVar13);
      uVar11 = 0x112d48398;
      func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
      uStack_1b0 = uVar11;
      func_0x000107c61408((undefined8 *)(lVar13 + 0x20),2,uVar11);
      uVar8 = 0;
      func_0x000100eca28c();
      uVar11 = 0x112d483a0;
      uStack_1c0 = uVar8;
      FUN_1021bbbe0(0x112d483a0,&UNK_10d90f180);
      lVar13 = lVar3;
      func_0x000107c5f9dc(lVar3,uVar8,PTR___sypN_11034f1a8 + 8,uVar11);
      func_0x000107c6142c(lVar3);
      func_0x000107c3d5c8(puVar2);
      func_0x000107c61170(lVar13);
      lVar13 = lStack_198;
      lVar3 = lStack_190;
      func_0x000107c5fadc(lStack_190,lStack_198);
      func_0x000107c6142c(lVar13);
      lVar13 = lStack_180;
      lVar4 = lVar9;
      func_0x000107c5fadc(lStack_180);
      func_0x000107c6142c(lVar9);
      lVar9 = lVar3;
      func_0x000107c4f890();
      lStack_190 = lVar4;
      lStack_180 = lVar9;
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar13);
      lVar13 = lStack_188;
      func_0x000107c61534(lStack_188,auStack_170);
      puVar6 = PTR__NSLinkAttributeName_110345818;
      *(undefined8 *)(lVar13 + 0x18) = 6;
      *(undefined8 *)(lVar13 + 0x10) = 3;
      uVar8 = *(undefined8 *)puVar6;
      *(undefined8 *)(lVar13 + 0x20) = uVar8;
      *(long *)(lVar13 + 0x40) = lVar1;
      func_0x0001000a9d90(lVar13 + 0x28);
      lVar9 = lStack_178;
      (**(code **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar13 + 0x48) = uStack_1b8;
      func_0x000107c61174(uVar8);
      puVar6 = puStack_1a8;
      func_0x000107c5af88();
      func_0x000107c61180();
      *(undefined **)(lVar13 + 0x50) = puVar6;
      uVar8 = *(undefined8 *)PTR__NSUnderlineStyleAttributeName_110345880;
      *(undefined8 *)(lVar13 + 0x68) = uVar7;
      *(undefined8 *)(lVar13 + 0x70) = uVar8;
      *(undefined **)(lVar13 + 0x90) = PTR___sSiN_11034deb0;
      *(undefined8 *)(lVar13 + 0x78) = 1;
      func_0x000107c61174();
      lVar3 = lVar13;
      func_0x000100ecbca8(lVar13);
      func_0x000107c61588(lVar13);
      func_0x000107c61408((undefined8 *)(lVar13 + 0x20),3,uStack_1b0);
      lVar13 = lVar3;
      func_0x000107c5f9dc(lVar3,uStack_1c0,PTR___sypN_11034f1a8 + 8,uVar11);
      func_0x000107c6142c(lVar3);
      func_0x000107c3d5c8(puVar2);
      func_0x000107c61170(lVar13);
      func_0x000107c61170(puVar2);
      (**(code **)(lVar12 + 8))(lVar9,lVar1);
    }
  }
  return puVar2;
}



/* Entry: 1021bb618; end: 1021bb7cb;  */

undefined1  [16] FUN_1021bb618(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  char *pcVar12;
  long *unaff_x20;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  lVar10 = unaff_x20[2];
  uVar6 = (uint)((ulong)lVar10 >> 0x20);
  uVar11 = uVar6 >> 0x1d;
  if (uVar6 >> 0x1d < 3) {
    pcVar9 = "recommend_places_cell";
    uVar1 = 0xd00000000000001b;
    pcVar12 = "display_username_header";
    if (uVar11 != 1) {
      uVar1 = 0xd000000000000015;
      pcVar12 = "show_travel_status_header";
    }
    bVar7 = uVar11 == 0;
    uVar8 = 0xd000000000000015;
    if (!bVar7) {
      uVar8 = uVar1;
    }
  }
  else {
    if (4 < uVar11) {
      if (uVar11 == 5) {
        auVar14._8_8_ = 0x800000010f06b890;
        auVar14._0_8_ = 0xd000000000000011;
        return auVar14;
      }
      lVar2 = *unaff_x20;
      lVar4 = unaff_x20[1];
      lVar3 = unaff_x20[3];
      lVar5 = unaff_x20[4];
      if ((lVar10 == -0x4000000000000000) &&
         ((lVar3 == 0 && lVar5 == 0) && (lVar2 == 0 && lVar4 == 0))) {
        pcVar9 = "clear_locations_cell";
      }
      else {
        if ((lVar10 != -0x4000000000000000) ||
           ((lVar2 != 1 || ((lVar3 != 0 || lVar5 != 0) || lVar4 != 0)))) {
          if ((lVar10 == -0x4000000000000000) &&
             ((lVar2 == 2 && ((lVar3 == 0 && lVar5 == 0) && lVar4 == 0)))) {
            auVar16._8_8_ = 0x800000010f06b970;
            auVar16._0_8_ = 0xd000000000000017;
            return auVar16;
          }
          if (((lVar10 == -0x4000000000000000) && (lVar2 == 3)) &&
             ((lVar3 == 0 && lVar5 == 0) && lVar4 == 0)) {
            auVar17._8_8_ = 0x800000010f06b930;
            auVar17._0_8_ = 0xd000000000000019;
            return auVar17;
          }
          pcVar9 = "display_school_cell";
          uVar1 = 0xd000000000000015;
          if (lVar10 != -0x4000000000000000 ||
              (lVar2 != 4 || ((lVar3 != 0 || lVar5 != 0) || lVar4 != 0))) {
            pcVar9 = "display_home_cell";
            uVar1 = 0xd000000000000013;
          }
          auVar18._8_8_ = (ulong)pcVar9 | 0x8000000000000000;
          auVar18._0_8_ = uVar1;
          return auVar18;
        }
        pcVar9 = "clear_footsteps_cell";
      }
      auVar15._8_8_ = (ulong)(pcVar9 + -0x20) | 0x8000000000000000;
      auVar15._0_8_ = 0xd000000000000014;
      return auVar15;
    }
    pcVar9 = "show_travel_status_cell";
    pcVar12 = "display_home_header";
    bVar7 = uVar11 == 3;
    uVar8 = 0xd000000000000017;
    if (!bVar7) {
      uVar8 = 0xd000000000000013;
    }
  }
  pcVar9 = pcVar9 + -0x20;
  if (!bVar7) {
    pcVar9 = pcVar12;
  }
  auVar13._8_8_ = (ulong)pcVar9 | 0x8000000000000000;
  auVar13._0_8_ = uVar8;
  return auVar13;
}



/* Entry: 1021bb7cc; end: 1021bb83b;  */

undefined8 FUN_1021bb7cc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  if (*(ushort *)((long)unaff_x20 + 0x16) >> 0xe < 3) {
    uVar1 = *unaff_x20;
    func_0x000107c6157c(unaff_x20[1]);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1021bb83c; end: 1021bb84f;  */

void FUN_1021bb83c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104dbae8;
  if (lRam0000000112e603f0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e603f0 = param_1;
  }
  return;
}



/* Entry: 1021bb850; end: 1021bb947;  */

void FUN_1021bb850(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1021bb948; end: 1021bb95b;  */

/* WARNING: Possible PIC construction at 0x0001021bb98c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021bb990) */

undefined8 FUN_1021bb948(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if ((uint)((ulong)param_1[2] >> 0x3d) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar1,uVar1,param_1[2],param_1[3],param_1[4]);
    return uVar1;
  }
  return *param_1;
}



/* Entry: 1021bb95c; end: 1021bb9a3;  */

/* WARNING: Possible PIC construction at 0x0001021bb98c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021bb990) */

void FUN_1021bb95c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if ((uint)((ulong)param_3 >> 0x3d) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1021bb9a4; end: 1021bba73;  */

undefined8 * FUN_1021bb9a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  func_0x0001021bb900(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  return param_1;
}



/* Entry: 1021bba74; end: 1021bbab7;  */

undefined8 * FUN_1021bba74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar6 = param_2[4];
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  param_1[4] = uVar6;
  FUN_1021bb95c(uVar5,uVar1,uVar3,uVar2,uVar4);
  return param_1;
}



/* Entry: 1021bbab8; end: 1021bbbdf;  */

int FUN_1021bbab8(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 4) >> 2) & 0xffffff80 |
          (uint)*(ulong *)(param_1 + 4) >> 1 & 0x7f;
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 1021bbbe0; end: 1021bbc1f;  */

void FUN_1021bbbe0(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000100eca28c(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1021bbc20; end: 1021bbc27;  */

void FUN_1021bbc20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1021bbc28; end: 1021bbc5f;  */

undefined8 * FUN_1021bbc28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 1021bbc60; end: 1021bbcb7;  */

undefined8 * FUN_1021bbc60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  return param_1;
}



/* Entry: 1021bbcb8; end: 1021bbcfb;  */

undefined8 * FUN_1021bbcb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  return param_1;
}



/* Entry: 1021bbcfc; end: 1021bbd9b;  */

int FUN_1021bbcfc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x12) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1021bbd9c; end: 1021bbdff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021bbd9c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e603f8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e603f8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_1021bbe00();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1021bbe00; end: 1021bc047;  */

undefined * FUN_1021bbe00(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  func_0x000107c610f8(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x000107c453e4();
  func_0x000107c566fc(0);
  func_0x000107c566f4(0,puVar1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UICollectionView_1126afd20);
  func_0x000107c469ac(0,0,0,0);
  func_0x0001021c2b48(0);
  func_0x000107c614e8();
  uVar3 = 0x6c6c6543474953;
  func_0x000107c5fadc(0x6c6c6543474953,0xe700000000000000);
  func_0x000107c4fbd8(puVar2);
  func_0x000107c61170(uVar3);
  FUN_1021c191c(0);
  func_0x000107c614e8();
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f06bab0);
  func_0x000107c4fbd8(puVar2);
  func_0x000107c61170(uVar3);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f06ba90);
  func_0x000107c4fbd8(puVar2);
  func_0x000107c61170(uVar3);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f06ba70);
  func_0x000107c4fbd8(puVar2);
  func_0x000107c61170(uVar3);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f06ba50);
  func_0x000107c4fbd8(puVar2);
  func_0x000107c61170(uVar3);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f06ba30);
  func_0x000107c4fbd8(puVar2);
  func_0x000107c61170(uVar3);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f06ba10);
  func_0x000107c4fbd8(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c53e08(puVar2);
  func_0x000107c53fcc(puVar2);
  func_0x000107c5a050(puVar2);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1021bc048; end: 1021bc11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bc048(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112e60470);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_1104dbc20;
    func_0x000107c613fc(&UNK_1104dbc20,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_40 = FUN_1021bff50;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    uStack_50 = 0x1021c011c;
    puStack_48 = &UNK_1104dc200;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c43314(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1021bc120; end: 1021bc427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bc120(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidLoad_112684cd8);
  FUN_1021bbd9c();
  func_0x000107c53fcc();
  func_0x000107c61170(puVar2);
  lVar9 = _DAT_112e603f8;
  func_0x000107c53e08(*(undefined8 *)(unaff_x20 + _DAT_112e603f8));
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021bc418);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar3);
  lVar4 = *(long *)(unaff_x20 + lVar9);
  func_0x000107c5a050();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 9;
  *(undefined8 *)(lVar4 + 0x10) = 4;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar9);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c44c68();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021bc41c);
    (*pcVar1)();
  }
  lVar6 = lVar3;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar7 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar4 + 0x20) = uVar7;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar9);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021bc420);
    (*pcVar1)();
  }
  lVar6 = lVar3;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar7 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar4 + 0x28) = uVar7;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar9);
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar6 = lVar3;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    uVar7 = uVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar4 + 0x30) = uVar7;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar9);
    func_0x000107c50890();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar9 = unaff_x20;
      func_0x000107c50890(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      uVar7 = uVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar9);
      *(undefined8 *)(lVar4 + 0x38) = uVar7;
      uVar5 = 0;
      FUN_1021bff10(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar9 = lVar4;
      func_0x000107c5fc48(lVar4,uVar5);
      func_0x000107c61574(lVar4);
      func_0x000107c3d048(puVar8);
      func_0x000107c61170(lVar9);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021bc428);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021bc424);
  (*pcVar1)();
}



/* Entry: 1021bc428; end: 1021bc44f; -[_TtC29SCPlaceSettingsImplementation31PlaceSettingsPageViewController viewDidLoad] */

void FUN_1021bc428(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021bc120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021bc450; end: 1021bc4d3;  */

/* WARNING: Possible PIC construction at 0x0001021bc4a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021bc4ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bc450(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aa118;
  func_0x000107c610f8(PTR_PTR_1126aa118);
  func_0x000107c453e4();
  func_0x000107c527ac();
  uVar2 = 0x50414d;
  func_0x000107c5fadc(0x50414d,0xe300000000000000);
  func_0x000107c58d70(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1021bc4d4; end: 1021bc54f; -[_TtC29SCPlaceSettingsImplementation31PlaceSettingsPageViewController viewWillAppear:] */

void FUN_1021bc4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewWillAppear__1126853f0;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  FUN_1021bbd9c();
  func_0x000107c4fd7c();
  func_0x000107c61170(puVar3);
  FUN_1021bc450();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1021bc550; end: 1021bc607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bc550(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126aa110;
  func_0x000107c610f8(PTR_PTR_1126aa110);
  func_0x000107c453e4();
  func_0x000107c527ac();
  func_0x000107c568f8(puVar1,param_2,*(undefined1 *)(unaff_x20 + _DAT_112e60480));
  func_0x000107c54b10(puVar1,param_2,*(undefined1 *)(unaff_x20 + _DAT_112e60488));
  if (*(char *)(unaff_x20 + _DAT_112e60448) == '\x01') {
    func_0x000107c59404(puVar1,param_2,*(undefined1 *)(unaff_x20 + _DAT_112e60490));
  }
  func_0x000107c5a064(puVar1,param_2,*(undefined1 *)(unaff_x20 + _DAT_112e60498));
  func_0x000107c4bfb0(*(undefined8 *)(unaff_x20 + _DAT_112e60420),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1021bc608; end: 1021bc66f; -[_TtC29SCPlaceSettingsImplementation31PlaceSettingsPageViewController viewDidDisappear:] */

void FUN_1021bc608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidDisappear__112684c48;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  FUN_1021bc550();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1021bc670; end: 1021bc6a3; -[_TtC29SCPlaceSettingsImplementation31PlaceSettingsPageViewController getTitle] */

void FUN_1021bc670(undefined8 param_1,undefined8 param_2)

{
  FUN_1021c35f0();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1021bc6a4; end: 1021bc703; -[_TtC29SCPlaceSettingsImplementation31PlaceSettingsPageViewController init] */

void FUN_1021bc6a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlaceSettingsImplementation.PlaceSettingsPageViewController",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021bc6d0);
  (*pcVar1)();
}



/* Entry: 1021bc704; end: 1021bc7cb; -[_TtC29SCPlaceSettingsImplementation31PlaceSettingsPageViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021bc720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021bc740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021bc770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021bc7a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021bc774) */
/* WARNING: Removing unreachable block (ram,0x0001021bc744) */
/* WARNING: Removing unreachable block (ram,0x0001021bc724) */
/* WARNING: Removing unreachable block (ram,0x0001021bc7a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bc704(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e603f8));
  return;
}



/* Entry: 1021bc7cc; end: 1021bc7eb;  */

void FUN_1021bc7cc(void)

{
  func_0x000107c61168(&PTR_PTR_112824e10);
  return;
}



/* Entry: 1021bc7ec; end: 1021bc983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bc7ec(uint param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  func_0x000107c4a118();
  puVar1 = (undefined8 *)(param_2 + _DAT_112e604c0);
  if (*(char *)(puVar1 + 2) == '\x01') {
    lVar2 = *(long *)(param_2 + _DAT_112e60470);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      puVar3 = &UNK_1104dbc20;
      func_0x000107c613fc(&UNK_1104dbc20,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_2);
      puVar4 = &UNK_1104dc030;
      func_0x000107c613fc(&UNK_1104dc030,0x19,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      puVar4[0x18] = (char)(param_1 ^ 1);
      uStack_40 = 0x1021bfe30;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      uStack_50 = 0x1021c011c;
      puStack_48 = &UNK_1104dc048;
      puStack_38 = puVar4;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      func_0x000107c43314(lVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar2);
    }
  }
  else {
    FUN_1021be3a8(*puVar1,puVar1[1],param_1 ^ 1);
  }
  return;
}



/* Entry: 1021bc984; end: 1021bce33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bc984(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  char *pcVar7;
  undefined8 uVar8;
  long extraout_x8;
  undefined1 *puVar9;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 auStack_110 [7];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_d0 + -extraout_x8;
  lVar1 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar17 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar17 - extraout_x12;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar12 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar19 - extraout_x12_01;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  lVar20 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar14 - (lVar20 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar21 - extraout_x12_02;
  func_0x000107c5edd0(lVar14,0xd000000000000060,0x800000010f06b820);
  lVar1 = lVar14;
  (**(code **)(lVar13 + 0x30))(lVar14,1,lVar2);
  if ((int)lVar1 == 1) {
    FUN_1021bfe48(lVar14,0x112d36580,&UNK_10d9016d0);
  }
  else {
    pcVar18 = *(code **)(lVar13 + 0x20);
    (*pcVar18)(lVar10,lVar14,lVar2);
    puVar3 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    puVar4 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puStack_c8 = puVar4;
    func_0x000107c43bf4();
    func_0x000107c61180();
    (**(code **)(lVar13 + 0x10))(lVar21,lVar10,lVar2);
    uVar11 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar16 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
    puVar5 = &UNK_1104dc0d0;
    func_0x000107c613fc(&UNK_1104dc0d0,uVar16 + lVar20,uVar11 | 7);
    (*pcVar18)(puVar5 + uVar16,lVar21,lVar2);
    pcStack_70 = FUN_1021bfe88;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100e38b5c;
    puStack_78 = &UNK_1104dc0e8;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_68);
    pcVar7 = "presentSupportPage()";
    func_0x0001000c10c0("presentSupportPage()");
    func_0x000107c61180();
    func_0x000107c5dc64(puVar4);
    func_0x000107c615e8(pcVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar4);
    pcVar18 = *(code **)(lVar13 + 0x38);
    (*pcVar18)(lVar19,1,1,lVar2);
    (*pcVar18)(lVar12,1,1,lVar2);
    lVar1 = 0;
    func_0x0001046305a8();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar9,1,1,lVar1);
    *(undefined1 *)(lVar10 + -8) = 0;
    *(undefined8 *)(lVar10 + -0x10) = 0;
    *(undefined8 *)(lVar10 + -0x18) = 0;
    *(undefined8 *)(lVar10 + -0x20) = 0;
    *(undefined8 *)(lVar10 + -0x28) = 0;
    *(undefined8 *)(lVar10 + -0x30) = 0;
    *(undefined8 *)(lVar10 + -0x38) = 0;
    *(undefined1 **)(lVar10 + -0x40) = puVar9;
    func_0x000104638e24(lVar15,10,lVar19,0,lVar12,0,0,0,0);
    uVar8 = 0;
    func_0x0001000956f0(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000100e39298(lVar15,lVar17);
    func_0x000104652fec(0);
    func_0x000107c610f8();
    func_0x000104651d90(lVar17);
    func_0x000107c61174(puVar3);
    puVar5 = puStack_c8;
    lVar1 = lVar17;
    func_0x000103c5d254(lVar17,puStack_c8,puVar3,unaff_x20,0,0,0,0);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(puVar3);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112e60458));
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar1);
    func_0x000100e392dc(lVar15);
    (**(code **)(lVar13 + 8))(lVar10,lVar2);
  }
  return;
}



/* Entry: 1021bce34; end: 1021bd383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1021bce34(void)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  
  uVar9 = 0x112e604f8;
  func_0x0001000285a8(0x112e604f8,&UNK_10da685e8);
  func_0x000107c613fc();
  *(undefined8 *)(uVar9 + 0x18) = 4;
  *(undefined8 *)(uVar9 + 0x10) = 2;
  cVar1 = *(char *)(unaff_x20 + _DAT_112e60418);
  lVar3 = 0x112e60550;
  func_0x0001000285a8(0x112e60550,&UNK_10da685f0);
  if (cVar1 == '\x01') {
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 4;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0xc000000000000000;
    puVar4 = &UNK_1104dbfb8;
    func_0x000107c613fc(&UNK_1104dbfb8,0x18,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    bVar2 = *(byte *)(unaff_x20 + _DAT_112e60480);
    *(undefined8 *)(lVar3 + 0x48) = 0x1021bfde0;
    *(undefined **)(lVar3 + 0x50) = puVar4;
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 *)(lVar3 + 0x68) = 0;
    *(ulong *)(lVar3 + 0x58) = (ulong)bVar2 | 0x100;
    func_0x000107c61174();
  }
  else {
    func_0x000107c61538();
  }
  *(long *)(uVar9 + 0x20) = lVar3;
  lVar3 = 0x112e60550;
  func_0x0001000285a8(0x112e60550,&UNK_10da685f0);
  lVar5 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 1;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0xc000000000000000;
  lVar6 = lVar5;
  if (*(char *)(unaff_x20 + _DAT_112e60438) == '\x01') {
    puVar4 = &UNK_1104dbf90;
    func_0x000107c613fc(&UNK_1104dbf90,0x18,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    bVar2 = *(byte *)(unaff_x20 + _DAT_112e60488);
    func_0x000107c61174();
    lVar6 = 1;
    func_0x0001021bf8ec(1,2,1,lVar5);
    *(undefined8 *)(lVar6 + 0x10) = 2;
    *(undefined8 *)(lVar6 + 0x48) = 0x1021bfd9c;
    *(undefined **)(lVar6 + 0x50) = puVar4;
    *(undefined8 *)(lVar6 + 0x60) = 0;
    *(undefined8 *)(lVar6 + 0x68) = 0;
    *(ulong *)(lVar6 + 0x58) = (ulong)bVar2 | 0x2000000000000100;
  }
  *(long *)(uVar9 + 0x28) = lVar6;
  if (*(char *)(unaff_x20 + _DAT_112e60448) == '\x01') {
    lVar5 = lVar3;
    func_0x000107c613fc(lVar3,0x70,7);
    *(undefined8 *)(lVar5 + 0x18) = 4;
    *(undefined8 *)(lVar5 + 0x10) = 2;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x20) = 2;
    *(undefined8 *)(lVar5 + 0x38) = 0;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined8 *)(lVar5 + 0x30) = 0xc000000000000000;
    puVar4 = &UNK_1104dbf68;
    func_0x000107c613fc(&UNK_1104dbf68,0x18,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    bVar2 = *(byte *)(unaff_x20 + _DAT_112e60490);
    *(undefined8 *)(lVar5 + 0x48) = 0x1021bfd48;
    *(undefined **)(lVar5 + 0x50) = puVar4;
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(undefined8 *)(lVar5 + 0x68) = 0;
    *(ulong *)(lVar5 + 0x58) = (ulong)bVar2 | 0x4000000000000100;
    func_0x000107c61174();
    uVar10 = 3;
    uVar7 = 1;
    FUN_1021bfa08(1,3,1,uVar9);
    *(undefined8 *)(uVar7 + 0x10) = 3;
    *(long *)(uVar7 + 0x30) = lVar5;
    uVar9 = uVar7;
  }
  else {
    uVar10 = 2;
  }
  lVar5 = lVar3;
  func_0x000107c613fc(lVar3,0x70,7);
  *(undefined8 *)(lVar5 + 0x18) = 4;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 3;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0xc000000000000000;
  puVar4 = &UNK_1104dbec8;
  func_0x000107c613fc(&UNK_1104dbec8,0x18,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  bVar2 = *(byte *)(unaff_x20 + _DAT_112e60498);
  puVar8 = &UNK_1104dbef0;
  func_0x000107c613fc(&UNK_1104dbef0,0x18,7);
  *(long *)(puVar8 + 0x10) = unaff_x20;
  *(undefined8 *)(lVar5 + 0x48) = 0x1021bfcf0;
  *(undefined **)(lVar5 + 0x50) = puVar4;
  *(ulong *)(lVar5 + 0x58) = (ulong)bVar2 | 0x6000000000000100;
  *(code **)(lVar5 + 0x60) = FUN_1021bfcf8;
  *(undefined **)(lVar5 + 0x68) = puVar8;
  uVar11 = *(ulong *)(uVar9 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = uVar9;
  if (uVar11 >> 1 <= uVar10) {
    uVar7 = (ulong)(1 < uVar11);
    FUN_1021bfa08(uVar7,uVar10 + 1,1,uVar9);
  }
  *(ulong *)(uVar7 + 0x10) = uVar10 + 1;
  *(long *)(uVar7 + uVar10 * 8 + 0x20) = lVar5;
  uVar9 = uVar7;
  if ((*(char *)(unaff_x20 + _DAT_112e60460) == '\x01') &&
     (*(char *)(unaff_x20 + _DAT_112e604b0) == '\x01')) {
    lVar5 = lVar3;
    func_0x000107c613fc(lVar3,0x70,7);
    *(undefined8 *)(lVar5 + 0x18) = 4;
    *(undefined8 *)(lVar5 + 0x10) = 2;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x20) = 4;
    *(undefined8 *)(lVar5 + 0x38) = 0;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined8 *)(lVar5 + 0x30) = 0xc000000000000000;
    puVar4 = &UNK_1104dbf40;
    func_0x000107c613fc(&UNK_1104dbf40,0x18,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    bVar2 = *(byte *)(unaff_x20 + _DAT_112e604a0);
    *(code **)(lVar5 + 0x48) = FUN_1021bfd20;
    *(undefined **)(lVar5 + 0x50) = puVar4;
    *(ulong *)(lVar5 + 0x58) = (ulong)bVar2 | 0x8000000000000100;
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(undefined8 *)(lVar5 + 0x68) = 0;
    uVar10 = *(ulong *)(uVar7 + 0x10);
    uVar11 = *(ulong *)(uVar7 + 0x18);
    func_0x000107c61174(unaff_x20);
    if (uVar11 >> 1 <= uVar10) {
      uVar9 = (ulong)(1 < uVar11);
      FUN_1021bfa08(uVar9,uVar10 + 1,1,uVar7);
    }
    *(ulong *)(uVar9 + 0x10) = uVar10 + 1;
    *(long *)(uVar9 + uVar10 * 8 + 0x20) = lVar5;
  }
  uVar10 = uVar9;
  if ((*(char *)(unaff_x20 + _DAT_112e60468) == '\x01') &&
     (*(char *)(unaff_x20 + _DAT_112e604b8) == '\x01')) {
    func_0x000107c613fc(lVar3,0x70,7);
    *(undefined8 *)(lVar3 + 0x18) = 4;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 5;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0xc000000000000000;
    puVar4 = &UNK_1104dbf18;
    func_0x000107c613fc(&UNK_1104dbf18,0x18,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    bVar2 = *(byte *)(unaff_x20 + _DAT_112e604a8);
    *(code **)(lVar3 + 0x48) = FUN_1021bfd18;
    *(undefined **)(lVar3 + 0x50) = puVar4;
    *(ulong *)(lVar3 + 0x58) = (ulong)bVar2 | 0xa000000000000100;
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 *)(lVar3 + 0x68) = 0;
    uVar7 = *(ulong *)(uVar9 + 0x10);
    uVar11 = *(ulong *)(uVar9 + 0x18);
    func_0x000107c61174(unaff_x20);
    if (uVar11 >> 1 <= uVar7) {
      uVar10 = (ulong)(1 < uVar11);
      FUN_1021bfa08(uVar10,uVar7 + 1,1,uVar9);
    }
    *(ulong *)(uVar10 + 0x10) = uVar7 + 1;
    *(long *)(uVar10 + uVar7 * 8 + 0x20) = lVar3;
  }
  return uVar10;
}



/* Entry: 1021bd384; end: 1021bd457;  */

void FUN_1021bd384(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x000107c5eff4();
  uVar2 = param_1;
  FUN_1021bce34();
  lVar4 = *(long *)(uVar2 + 0x10);
  func_0x000107c6142c();
  if ((long)param_1 < lVar4) {
    FUN_1021bce34();
    uVar3 = uVar2;
    func_0x000107c5eff4();
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021bd450);
      (*pcVar1)();
    }
    if (*(ulong *)(uVar2 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021bd454);
      (*pcVar1)();
    }
    lVar4 = *(long *)(uVar2 + uVar3 * 8 + 0x20);
    func_0x000107c61434(lVar4);
    func_0x000107c6142c();
    func_0x000107c5efe4();
    uVar5 = *(undefined8 *)(lVar4 + 0x10);
    func_0x000107c6142c(lVar4);
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021bd458);
      (*pcVar1)();
    }
    func_0x000107c30a60(1,uVar2,uVar5);
  }
  return;
}



/* Entry: 1021bd458; end: 1021bd59f;  */

void FUN_1021bd458(undefined8 *param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = 0x3fffffefe;
  func_0x000107c5eff4();
  uVar2 = param_2;
  FUN_1021bce34();
  lVar5 = *(long *)(uVar2 + 0x10);
  func_0x000107c6142c();
  if ((long)param_2 < lVar5) {
    FUN_1021bce34();
    uVar3 = uVar2;
    func_0x000107c5eff4();
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021bd594);
      (*pcVar1)();
    }
    if (*(ulong *)(uVar2 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021bd598);
      (*pcVar1)();
    }
    lVar5 = *(long *)(uVar2 + uVar3 * 8 + 0x20);
    func_0x000107c61434(lVar5);
    func_0x000107c6142c();
    func_0x000107c5efe4();
    if ((long)uVar2 < *(long *)(lVar5 + 0x10)) {
      func_0x000107c5efe4();
      if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1021bd59c);
        (*pcVar1)();
      }
      if (*(ulong *)(lVar5 + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1021bd5a0);
        (*pcVar1)();
      }
      lVar4 = lVar5 + uVar2 * 0x28;
      uVar6 = *(undefined8 *)(lVar4 + 0x20);
      uVar8 = *(undefined8 *)(lVar4 + 0x28);
      uVar7 = *(undefined8 *)(lVar4 + 0x30);
      uVar9 = *(undefined8 *)(lVar4 + 0x38);
      uVar10 = *(undefined8 *)(lVar4 + 0x40);
      func_0x0001021bb900(uVar6,uVar8,uVar7,uVar9,uVar10);
    }
    else {
      uVar6 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
    }
    func_0x000107c6142c(lVar5);
  }
  else {
    uVar6 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  *param_1 = uVar6;
  param_1[1] = uVar8;
  param_1[2] = uVar7;
  param_1[3] = uVar9;
  param_1[4] = uVar10;
  return;
}



/* Entry: 1021bd5a0; end: 1021bd637; -[_TtC29SCPlaceSettingsImplementation31PlaceSettingsPageViewController collectionView:numberOfItemsInSection:] */

undefined8 FUN_1021bd5a0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_1021bce34();
  lVar4 = *(long *)(lVar2 + 0x10);
  func_0x000107c6142c();
  if ((long)param_4 < lVar4) {
    FUN_1021bce34();
    if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021bd634);
      (*pcVar1)();
    }
    if (*(ulong *)(lVar2 + 0x10) <= param_4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021bd638);
      (*pcVar1)();
    }
    lVar4 = *(long *)(lVar2 + param_4 * 8 + 0x20);
    func_0x000107c61434(lVar4);
    func_0x000107c6142c(lVar2);
    uVar3 = *(undefined8 *)(lVar4 + 0x10);
    func_0x000107c6142c(lVar4);
  }
  else {
    uVar3 = 0;
  }
  func_0x000107c61170(param_1);
  return uVar3;
}



/* Entry: 1021bd638; end: 1021bd67f; -[_TtC29SCPlaceSettingsImplementation31PlaceSettingsPageViewController numberOfSectionsInCollectionView:] */

undefined8 FUN_1021bd638(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_1021bce34();
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(lVar1);
  return uVar2;
}



/* Entry: 1021bd680; end: 1021bd877;  */

undefined * FUN_1021bd680(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint uVar6;
  code *pcVar8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puVar7;
  
  uVar5 = param_2;
  FUN_1021bd458(&uStack_a8,param_2);
  if ((uStack_98 & 0xfffffffffffffefe) == 0x3fffffefe) {
    puVar1 = PTR_PTR_1126b2780;
    func_0x000107c610f8(PTR_PTR_1126b2780);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return puVar1;
  }
  uStack_78 = uStack_a0;
  uStack_80 = uStack_a8;
  uStack_70 = uStack_98;
  uStack_60 = uStack_88;
  uStack_68 = uStack_90;
  if (uStack_98 >> 0x3e < 3) {
    puVar1 = (undefined *)0x0;
    FUN_1021c191c();
  }
  else {
    puVar1 = (undefined *)0x0;
    func_0x0001021c2b48();
  }
  puVar2 = puVar1;
  FUN_1021baeb0();
  uVar3 = 0;
  FUN_1021bff10(0,0x112d62a98,&PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  func_0x00010257af84(puVar1,puVar2,uVar5,param_2,uVar3);
  func_0x000107c6142c(uVar5);
  puVar2 = puVar1;
  func_0x000107c614f0();
  puVar4 = puVar2;
  func_0x000107c61440();
  if ((puVar4 == (undefined *)0x0) || (puVar1 == (undefined *)0x0)) {
    FUN_1021bfe48(&uStack_a8,0x112e604f0,&UNK_10da685e0);
  }
  else {
    uVar5 = 6;
    if (2 < uStack_70 >> 0x3e) {
      uVar5 = 0;
    }
    pcVar8 = *(code **)(puVar4 + 0x30);
    func_0x000107c61174(puVar1);
    (*pcVar8)(uVar5,puVar2,puVar4);
    puVar7 = puVar4;
    (**(code **)(puVar4 + 8))(&uStack_80,puVar2);
    uVar6 = (uint)puVar7;
    FUN_1021bd384(param_2);
    if ((uVar6 & 0xff) != 1) {
      (**(code **)(puVar4 + 0x18))();
    }
    FUN_1021bfe48(&uStack_a8,0x112e604f0,&UNK_10da685e0);
    func_0x000107c61170(puVar1);
  }
  return puVar1;
}



/* Entry: 1021bd878; end: 1021bd93f; -[_TtC29SCPlaceSettingsImplementation31PlaceSettingsPageViewController collectionView:cellForItemAtIndexPath:] */

void FUN_1021bd878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_1021bd680(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021bd940; end: 1021bda37; -[_TtC29SCPlaceSettingsImplementation31PlaceSettingsPageViewController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_1021bd940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_7);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_3);
  FUN_1021bfb38(param_5,puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 1021bda38; end: 1021bdc77;  */

void FUN_1021bda38(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar7 = param_2;
  FUN_1021bd458(&lStack_88);
  if ((uStack_78 & 0xfffffffffffffefe) != 0x3fffffefe &&
      (uStack_78 & 0xe000000000000000) == 0xc000000000000000) {
    if (uStack_78 == 0xc000000000000000 &&
        ((lStack_70 == 0 && lStack_80 == 0) && (lStack_88 == 0 && lStack_68 == 0))) {
      uVar6 = 0;
      func_0x0001021bdd38(0);
      func_0x0001021c2c5c();
      uVar3 = uVar6;
      puVar4 = puVar7;
      func_0x0001021c3600();
      param_2 = &UNK_1104dbc20;
      func_0x000107c613fc(&UNK_1104dbc20,0x18,7);
      func_0x000107c61614(param_2 + 0x10);
      func_0x000107c6157c(param_2);
      FUN_1021bedd0(uVar6,puVar7,uVar3,puVar4,0x1021bfc28,param_2);
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(puVar4);
      func_0x000107c61574(param_2);
    }
    else {
      if (((uStack_78 != 0xc000000000000000) || (lStack_88 != 1)) ||
         ((lStack_70 != 0 || lStack_80 != 0) || lStack_68 != 0)) goto LAB_1021bdc1c;
      func_0x0001021c2d28();
      puVar1 = param_2;
      puVar8 = puVar7;
      func_0x0001021c36cc();
      puVar2 = puVar1;
      puVar9 = puVar8;
      func_0x0001021c3798();
      uVar3 = 2;
      puVar10 = puVar9;
      func_0x0001021bdd38(2);
      func_0x0001021c3864();
      puVar4 = &UNK_1104dbc20;
      func_0x000107c613fc(&UNK_1104dbc20,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar5 = &UNK_1104dbc48;
      func_0x000107c613fc(&UNK_1104dbc48,0x38,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined **)(puVar5 + 0x18) = puVar1;
      *(undefined **)(puVar5 + 0x20) = puVar8;
      *(undefined **)(puVar5 + 0x28) = puVar2;
      *(undefined **)(puVar5 + 0x30) = puVar9;
      func_0x000107c6157c(puVar4);
      FUN_1021bedd0(param_2,puVar7,uVar3,puVar10,FUN_1021bfc18,puVar5);
      func_0x000107c61574(puVar4);
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(puVar10);
      param_2 = puVar5;
    }
    func_0x000107c61574(param_2);
  }
LAB_1021bdc1c:
  func_0x000107c5efd4();
  func_0x000107c41814(param_1);
  func_0x000107c61170(param_2);
  FUN_1021bfe48(&lStack_88,0x112e604f0,&UNK_10da685e0);
  return;
}



/* Entry: 1021bdc78; end: 1021bded3; -[_TtC29SCPlaceSettingsImplementation31PlaceSettingsPageViewController collectionView:didSelectItemAtIndexPath:] */

void FUN_1021bdc78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021bda38(param_3,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1021bded4; end: 1021be113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bded4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (param_4 != 0) {
    return;
  }
  if (param_3 != 0) {
    lVar2 = param_3;
    func_0x000107c51948();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c61428(param_5 + 0x10,auStack_90,0,0);
      lVar3 = param_5 + 0x10;
      func_0x000107c61618();
      if (lVar3 != 0) {
        lVar4 = lVar2;
        func_0x000107c49eac();
        *(byte *)(lVar3 + _DAT_112e604a0) = (byte)lVar4 ^ 1;
        func_0x000107c61170(lVar3);
      }
      func_0x000107c61428(param_5 + 0x10,auStack_a8,0,0);
      lVar3 = param_5 + 0x10;
      func_0x000107c61618();
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        *(undefined1 *)(lVar3 + _DAT_112e604b0) = 1;
        func_0x000107c61170(lVar3);
      }
    }
    func_0x000107c44ed0();
    func_0x000107c61180();
    if (param_3 != 0) {
      func_0x000107c61428(param_5 + 0x10,auStack_48,0,0);
      lVar2 = param_5 + 0x10;
      func_0x000107c61618();
      if (lVar2 != 0) {
        lVar3 = param_3;
        func_0x000107c49eac();
        *(byte *)(lVar2 + _DAT_112e604a8) = (byte)lVar3 ^ 1;
        func_0x000107c61170(lVar2);
      }
      func_0x000107c61428(param_5 + 0x10,auStack_60,0,0);
      lVar2 = param_5 + 0x10;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c4077c(param_3);
        puVar1 = (undefined8 *)(lVar2 + _DAT_112e604c0);
        *puVar1 = param_1;
        puVar1[1] = param_2;
        *(undefined1 *)(puVar1 + 2) = 0;
        func_0x000107c61170(lVar2);
      }
      func_0x000107c61428(param_5 + 0x10,auStack_78,0,0);
      lVar2 = param_5 + 0x10;
      func_0x000107c61618();
      func_0x000107c61170(param_3);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + _DAT_112e604b8) = 1;
        func_0x000107c61170(lVar2);
      }
    }
  }
  puVar5 = &UNK_1104dc238;
  func_0x000107c613fc(&UNK_1104dc238,0x20,7);
  *(undefined **)(puVar5 + 0x10) = &UNK_10da68608;
  *(long *)(puVar5 + 0x18) = param_5;
  func_0x000107c6157c(param_5);
  uVar6 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar7 = 0x41;
  func_0x0001001ca524(0x41,0,0x3c,4,0,0,&UNK_10da68618,puVar5,uVar6);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar7);
  return;
}



/* Entry: 1021be114; end: 1021be17f;  */

void FUN_1021be114(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1021be180,uVar1,uVar2);
  return;
}



/* Entry: 1021be180; end: 1021be1ff;  */

void FUN_1021be180(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_1021bbd9c();
    func_0x000107c61170(lVar1);
    func_0x000107c4fd7c(lVar2);
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001021be1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar1 == 0);
  return;
}



/* Entry: 1021be200; end: 1021be243;  */

void FUN_1021be200(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001021be240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1021be244; end: 1021be33f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021be244(byte param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112e60470);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_1104dbc20;
    func_0x000107c613fc(&UNK_1104dbc20,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_1104dbfe0;
    func_0x000107c613fc(&UNK_1104dbfe0,0x19,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    puVar3[0x18] = param_1 & 1;
    pcStack_40 = FUN_1021bfe24;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1013b7310;
    puStack_48 = &UNK_1104dbff8;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c5d4c4(lVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1021be340; end: 1021be3a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021be340(ulong param_1,long param_2,long param_3,byte param_4)

{
  undefined1 auStack_38 [24];
  
  if (((param_1 & 1) != 0) && (param_2 == 0)) {
    func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      *(byte *)(param_3 + _DAT_112e604a0) = (param_4 ^ 0xff) & 1;
      func_0x000107c61170();
    }
  }
  return;
}



/* Entry: 1021be3a8; end: 1021be58f;  */

/* WARNING: Possible PIC construction at 0x0001021be530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021be548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021be534) */
/* WARNING: Removing unreachable block (ram,0x0001021be54c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021be3a8(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126b1d38;
  func_0x000107c610f8();
  func_0x000107c48ed0(param_1,param_2);
  lVar2 = *(long *)(unaff_x20 + _DAT_112e60470);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    FUN_1021c275c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 3;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined **)(lVar3 + 0x20) = puVar1;
    uVar4 = 0;
    FUN_1021bff10(0,0x112e60560,&PTR_PTR_1126b1d38);
    func_0x000107c61174(puVar1);
    func_0x000107c5fc48(lVar3,uVar4);
    func_0x000107c61574(lVar3);
    puVar5 = &UNK_1104dbc20;
    func_0x000107c613fc(&UNK_1104dbc20,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar6 = &UNK_1104dc080;
    func_0x000107c613fc(&UNK_1104dc080,0x19,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    puVar6[0x18] = param_3 & 1;
    uStack_70 = 0x1021bfe3c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1013b7310;
    puStack_78 = &UNK_1104dc098;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c5d6a0(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1021be590; end: 1021be7bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021be590(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,uint param_6)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_48,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    if (param_3 != 0) {
      func_0x000107c44ed0();
      func_0x000107c61180();
      if (param_3 != 0) {
        func_0x000107c4077c();
        puVar1 = (undefined8 *)(param_5 + _DAT_112e604c0);
        *puVar1 = param_1;
        puVar1[1] = param_2;
        *(undefined1 *)(puVar1 + 2) = 0;
        func_0x000107c4077c(param_3);
        FUN_1021be3a8(param_6 & 1);
        func_0x000107c61170(param_5);
        param_5 = param_3;
      }
    }
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 1021be7bc; end: 1021bea17;  */

void FUN_1021be7bc(ulong param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c5a378(param_3);
    if ((param_1 & 1) == 0) {
      pcVar1 = "deleteMyTravelStatuses(switchControl:)";
      func_0x0001000c10c0("deleteMyTravelStatuses(switchControl:)");
      func_0x000107c61180();
      puVar2 = &UNK_1104dc170;
      func_0x000107c613fc(&UNK_1104dc170,0x20,7);
      *(long *)(puVar2 + 0x10) = param_2;
      *(undefined8 *)(puVar2 + 0x18) = param_3;
      uStack_68 = 0x1021bfedc;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1104dc188;
      ppuVar3 = &puStack_88;
      puStack_60 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar2 = puStack_60;
      func_0x000107c61174(param_2);
      func_0x000107c61174(param_3);
      func_0x000107c61574(puVar2);
      func_0x000107c4e524(pcVar1);
      func_0x000107c61170(param_2);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(pcVar1);
    }
    else {
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 1021bea18; end: 1021bea57;  */

void FUN_1021bea18(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1021bea58; end: 1021beba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bea58(long param_1)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  pcVar1 = (char *)(param_1 + 0x10);
  func_0x000107c61618();
  if (pcVar1 != (char *)0x0) {
    func_0x0001021bdd38(1);
    lVar2 = *(long *)(pcVar1 + _DAT_112e60400);
    func_0x000107c5c734();
    func_0x000107c61180();
    pcVar4 = pcVar1;
    if (lVar2 != 0) {
      pcVar3 = "showClearLocationsAlert()";
      func_0x0001000c10c0("showClearLocationsAlert()");
      func_0x000107c61180();
      pcVar4 = pcVar3;
      func_0x000107c4f7c0();
      func_0x000107c61180();
      func_0x000107c615e8(pcVar3);
      puVar5 = &UNK_1104dbc20;
      func_0x000107c613fc(&UNK_1104dbc20,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,pcVar1);
      uStack_58 = 0x1021bfc30;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      uStack_68 = 0x1021c0118;
      puStack_60 = &UNK_1104dbc60;
      ppuVar6 = &puStack_78;
      puStack_50 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_50);
      func_0x000107c51dc0(lVar2);
      func_0x000107c61170(pcVar1);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(pcVar4);
  }
  return;
}



/* Entry: 1021beba4; end: 1021becfb;  */

void FUN_1021beba4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  puVar6 = auStack_58;
  func_0x000107c61428(param_3 + 0x10,puVar6,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 == 0) {
      FUN_1021becfc();
      func_0x000107c61170(param_3);
    }
    else {
      lVar1 = param_3;
      func_0x0001021c39fc();
      pcVar2 = "showNotification(message:)";
      func_0x0001000c10c0("showNotification(message:)");
      func_0x000107c61180();
      puVar3 = &UNK_1104dbc20;
      func_0x000107c613fc(&UNK_1104dbc20,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_3);
      puVar4 = &UNK_1104dbc98;
      func_0x000107c613fc(&UNK_1104dbc98,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(long *)(puVar4 + 0x18) = lVar1;
      *(undefined1 **)(puVar4 + 0x20) = puVar6;
      uStack_68 = 0x1021bfc54;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1104dbcb0;
      ppuVar5 = &puStack_88;
      puStack_60 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar3 = puStack_60;
      func_0x000107c61434(puVar6);
      func_0x000107c61574(puVar3);
      func_0x000107c4e524(pcVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(param_3);
      func_0x000107c6142c(puVar6);
      func_0x000107c615e8(pcVar2);
    }
  }
  return;
}



/* Entry: 1021becfc; end: 1021bedcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021becfc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112e60430);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_1104dbc20;
    func_0x000107c613fc(&UNK_1104dbc20,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uStack_40 = 0x1021bfc60;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100ff4e10;
    puStack_48 = &UNK_1104dbcd8;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c4fe80(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1021bedd0; end: 1021bef0f;  */

void FUN_1021bedd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  pcVar1 = "showClearAlert(title:message:confirmAction:)";
  func_0x0001000c10c0("showClearAlert(title:message:confirmAction:)");
  func_0x000107c61180();
  puVar2 = &UNK_1104dbc20;
  func_0x000107c613fc(&UNK_1104dbc20,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1104dbd60;
  func_0x000107c613fc(&UNK_1104dbd60,0x48,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  *(undefined8 *)(puVar3 + 0x20) = param_6;
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  *(undefined8 *)(puVar3 + 0x30) = param_2;
  *(undefined8 *)(puVar3 + 0x38) = param_3;
  *(undefined8 *)(puVar3 + 0x40) = param_4;
  uStack_70 = 0x1021bfc68;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1104dbd78;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_6);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1021bef10; end: 1021bf06f;  */

void FUN_1021bef10(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  puVar8 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = param_2;
    func_0x0001021c3ac8();
    lVar3 = lVar2;
    puVar9 = puVar8;
    func_0x0001021c39fc();
    puVar1 = puVar8;
    if (param_1 != 0) {
      lVar2 = lVar3;
      puVar1 = puVar9;
      puVar9 = puVar8;
    }
    func_0x000107c6142c(puVar9);
    pcVar4 = "showNotification(message:)";
    func_0x0001000c10c0("showNotification(message:)");
    func_0x000107c61180();
    puVar5 = &UNK_1104dbc20;
    func_0x000107c613fc(&UNK_1104dbc20,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,param_2);
    puVar6 = &UNK_1104dbd10;
    func_0x000107c613fc(&UNK_1104dbd10,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(long *)(puVar6 + 0x18) = lVar2;
    *(undefined1 **)(puVar6 + 0x20) = puVar1;
    uStack_68 = 0x1021c0124;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1104dbd28;
    ppuVar7 = &puStack_88;
    puStack_60 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar5 = puStack_60;
    func_0x000107c61434(puVar1);
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(pcVar4);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(puVar1);
    func_0x000107c615e8(pcVar4);
  }
  return;
}



/* Entry: 1021bf070; end: 1021bf233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bf070(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001021bdd38(3);
    puVar1 = PTR_PTR_1126aa100;
    func_0x000107c610f8(PTR_PTR_1126aa100);
    func_0x000107c453e4();
    puVar2 = PTR_PTR_1126bc1b8;
    func_0x000107c61168(PTR_PTR_1126bc1b8);
    func_0x000106b13b74();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112e60428);
    puVar3 = &UNK_1104dbc20;
    func_0x000107c613fc(&UNK_1104dbc20,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_1);
    puVar4 = &UNK_1104dbe28;
    func_0x000107c613fc(&UNK_1104dbe28,0x38,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    *(undefined8 *)(puVar4 + 0x28) = param_4;
    *(undefined8 *)(puVar4 + 0x30) = param_5;
    pcStack_88 = FUN_1021bfce0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    uStack_98 = 0x1021c0120;
    puStack_90 = &UNK_1104dbe40;
    ppuVar5 = &puStack_a8;
    puStack_80 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_80;
    func_0x000107c61174(uVar6);
    func_0x000107c61174(puVar2);
    func_0x000107c61434(param_3);
    func_0x000107c61434(param_5);
    func_0x000107c61574(puVar3);
    func_0x000107c3fab4(uVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1021bf234; end: 1021bf44b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bf234(undefined8 param_1,long param_2,long param_3,ulong param_4,undefined1 *param_5,
                  ulong param_6,undefined1 *param_7)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  puVar6 = auStack_58;
  func_0x000107c61428(param_3 + 0x10,puVar6,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_2 != 0) {
      param_4 = param_6;
      param_5 = param_7;
    }
    func_0x000107c61434(param_5);
    uVar1 = *(ulong *)(param_3 + _DAT_112e60408);
    func_0x000107c437cc();
    if ((uVar1 & 1) == 0) {
      func_0x0001021c3b94();
      func_0x000107c6142c(param_5);
      param_5 = puVar6;
      param_4 = uVar1;
    }
    if (param_2 == 0) {
      func_0x000107c58cf8(*(undefined8 *)(param_3 + _DAT_112e60440));
    }
    pcVar2 = "showNotification(message:)";
    func_0x0001000c10c0("showNotification(message:)");
    func_0x000107c61180();
    puVar3 = &UNK_1104dbc20;
    func_0x000107c613fc(&UNK_1104dbc20,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_3);
    puVar4 = &UNK_1104dbe78;
    func_0x000107c613fc(&UNK_1104dbe78,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(ulong *)(puVar4 + 0x18) = param_4;
    *(undefined1 **)(puVar4 + 0x20) = param_5;
    uStack_68 = 0x1021c0128;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1104dbe90;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_60;
    func_0x000107c61434(param_5);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c6142c(param_5);
    func_0x000107c61170(param_3);
    func_0x000107c615e8(pcVar2);
  }
  return;
}



/* Entry: 1021bf44c; end: 1021bf77b;  */

void FUN_1021bf44c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  puVar9 = auStack_88;
  func_0x000107c61428(param_1 + 0x10,puVar9,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_1021c3c60();
    puVar10 = puVar9;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar9);
    pcStack_98 = FUN_1021bf77c;
    puStack_90 = (undefined *)0x0;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_100de205c;
    puStack_a0 = &UNK_1104dbda0;
    ppuVar2 = &puStack_b8;
    func_0x000107c60bc4(ppuVar2);
    puVar3 = PTR_PTR_1126aed70;
    func_0x000107c61168();
    puVar4 = puVar3;
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(lVar1);
    puVar5 = puStack_90;
    func_0x000107c61574(puStack_90);
    func_0x0001021c3c74();
    puVar6 = &UNK_1104dbdd8;
    func_0x000107c613fc(&UNK_1104dbdd8,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = param_2;
    *(undefined8 *)(puVar6 + 0x18) = param_3;
    func_0x000107c6157c(param_3);
    func_0x000107c5fadc(puVar5,puVar10);
    func_0x000107c6142c(puVar10);
    pcStack_98 = FUN_1021bfc7c;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_100de205c;
    puStack_a0 = &UNK_1104dbdf0;
    ppuVar2 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(puVar5);
    puVar6 = puStack_90;
    func_0x000107c61574();
    func_0x000100de9c28();
    func_0x000107c613fc();
    *(undefined8 *)(puVar6 + 0x18) = 5;
    *(undefined8 *)(puVar6 + 0x10) = 2;
    *(undefined **)(puVar6 + 0x20) = puVar3;
    *(undefined **)(puVar6 + 0x28) = puVar4;
    puVar5 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    func_0x000107c61174(puVar3);
    func_0x000107c61174(puVar4);
    func_0x000107c61434(param_7);
    func_0x000107c61434(param_5);
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c6142c(param_5);
    func_0x000107c5fadc(param_6,param_7);
    func_0x000107c6142c(param_7);
    uVar7 = 0;
    FUN_1021bff10(0,0x112d360a8,&PTR_PTR_1126aed70);
    puVar8 = puVar6;
    func_0x000107c5fc48(puVar6,uVar7);
    func_0x000107c61574(puVar6);
    func_0x000107c48d50(puVar5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_6);
    func_0x000107c61170(puVar8);
    func_0x000107c53dec(puVar5);
    func_0x000107c59bc8(puVar5);
    func_0x000107c4f018(param_1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 1021bf77c; end: 1021bf787;  */

void FUN_1021bf77c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1021bf788; end: 1021bf867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bf788(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    uVar2 = param_2;
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c40b14(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_2);
    func_0x000107c5c2e0(*(undefined8 *)(param_1 + _DAT_112e60410));
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1021bf868; end: 1021bfa07; -[_TtC29SCPlaceSettingsImplementation31PlaceSettingsPageViewController webBrowserDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001021bf8a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021bf8c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021bf8a8) */
/* WARNING: Removing unreachable block (ram,0x0001021bf8c4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bf868(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1021bfa08; end: 1021bfb37;  */

undefined * FUN_1021bfa08(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1021bfb38);
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
    puVar3 = (undefined *)0x112e604f8;
    func_0x0001000285a8(0x112e604f8,&UNK_10da685e8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e60558;
    func_0x0001000285a8(0x112e60558,&UNK_10da685f8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1021bfb38; end: 1021bfc17;  */

undefined1  [16]
FUN_1021bfb38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,uint param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_68 [16];
  ulong uStack_58;
  
  FUN_1021bd458(auStack_68,param_5);
  uVar1 = 0;
  uVar2 = 0;
  if ((uStack_58 & 0xfffffffffffffefe) != 0x3fffffefe) {
    FUN_1021bd384(param_5);
    if ((param_6 & 0xff) != 1) {
      func_0x000107c438d4(param_4);
      func_0x000107c61168(PTR_PTR_1126b2780);
      func_0x000107c44da8();
      uVar1 = param_3;
      uVar2 = param_1;
    }
    FUN_1021bfe48(auStack_68,0x112e604f0,&UNK_10da685e0);
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1021bfc18; end: 1021bfc7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bfc18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x0001021bdd38(3);
    puVar5 = PTR_PTR_1126aa100;
    func_0x000107c610f8(PTR_PTR_1126aa100);
    func_0x000107c453e4();
    puVar6 = PTR_PTR_1126bc1b8;
    func_0x000107c61168(PTR_PTR_1126bc1b8);
    func_0x000106b13b74();
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(lVar4 + _DAT_112e60428);
    puVar7 = &UNK_1104dbc20;
    func_0x000107c613fc(&UNK_1104dbc20,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,lVar4);
    puVar8 = &UNK_1104dbe28;
    func_0x000107c613fc(&UNK_1104dbe28,0x38,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(undefined8 *)(puVar8 + 0x18) = uVar2;
    *(undefined8 *)(puVar8 + 0x20) = uVar1;
    *(undefined8 *)(puVar8 + 0x28) = uVar3;
    *(undefined8 *)(puVar8 + 0x30) = uVar10;
    pcStack_88 = FUN_1021bfce0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    uStack_98 = 0x1021c0120;
    puStack_90 = &UNK_1104dbe40;
    ppuVar9 = &puStack_a8;
    puStack_80 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    puVar7 = puStack_80;
    func_0x000107c61174(uVar11);
    func_0x000107c61174(puVar6);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar10);
    func_0x000107c61574(puVar7);
    func_0x000107c3fab4(uVar11);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 1021bfc7c; end: 1021bfcab;  */

void FUN_1021bfc7c(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1021bfcac; end: 1021bfcdf;  */

void FUN_1021bfcac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021bfce0; end: 1021bfcf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bfce0(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  ulong uVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar10 = *(ulong *)(unaff_x20 + 0x18);
  puVar9 = *(undefined1 **)(unaff_x20 + 0x20);
  uVar2 = *(ulong *)(unaff_x20 + 0x28);
  puVar8 = *(undefined1 **)(unaff_x20 + 0x30);
  puVar7 = auStack_58;
  func_0x000107c61428(lVar1 + 0x10,puVar7,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_2 != 0) {
      uVar10 = uVar2;
      puVar9 = puVar8;
    }
    func_0x000107c61434(puVar9);
    uVar2 = *(ulong *)(lVar1 + _DAT_112e60408);
    func_0x000107c437cc();
    if ((uVar2 & 1) == 0) {
      func_0x0001021c3b94();
      func_0x000107c6142c(puVar9);
      puVar9 = puVar7;
      uVar10 = uVar2;
    }
    if (param_2 == 0) {
      func_0x000107c58cf8(*(undefined8 *)(lVar1 + _DAT_112e60440));
    }
    pcVar3 = "showNotification(message:)";
    func_0x0001000c10c0("showNotification(message:)");
    func_0x000107c61180();
    puVar4 = &UNK_1104dbc20;
    func_0x000107c613fc(&UNK_1104dbc20,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar1);
    puVar5 = &UNK_1104dbe78;
    func_0x000107c613fc(&UNK_1104dbe78,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(ulong *)(puVar5 + 0x18) = uVar10;
    *(undefined1 **)(puVar5 + 0x20) = puVar9;
    uStack_68 = 0x1021c0128;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1104dbe90;
    ppuVar6 = &puStack_88;
    puStack_60 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_60;
    func_0x000107c61434(puVar9);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c6142c(puVar9);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(pcVar3);
  }
  return;
}



/* Entry: 1021bfcf8; end: 1021bfd17;  */

void FUN_1021bfcf8(void)

{
  FUN_1021bc984();
  return;
}



/* Entry: 1021bfd18; end: 1021bfd1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bfd18(uint param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  ppuVar5 = &puStack_60;
  func_0x000107c4a118();
  puVar1 = (undefined8 *)(lVar6 + _DAT_112e604c0);
  if (*(char *)(puVar1 + 2) == '\x01') {
    lVar2 = *(long *)(lVar6 + _DAT_112e60470);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      puVar3 = &UNK_1104dbc20;
      func_0x000107c613fc(&UNK_1104dbc20,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,lVar6);
      puVar4 = &UNK_1104dc030;
      func_0x000107c613fc(&UNK_1104dc030,0x19,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      puVar4[0x18] = (char)(param_1 ^ 1);
      uStack_40 = 0x1021bfe30;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      uStack_50 = 0x1021c011c;
      puStack_48 = &UNK_1104dc048;
      puStack_38 = puVar4;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      func_0x000107c43314(lVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar2);
    }
  }
  else {
    FUN_1021be3a8(*puVar1,puVar1[1],param_1 ^ 1);
  }
  return;
}



/* Entry: 1021bfd20; end: 1021bfe23;  */

void FUN_1021bfd20(uint param_1)

{
  func_0x000107c4a118();
  FUN_1021be244(param_1 ^ 1);
  return;
}



/* Entry: 1021bfe24; end: 1021bfe47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bfe24(ulong param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  if (((param_1 & 1) != 0) && (param_2 == 0)) {
    func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      *(byte *)(lVar2 + _DAT_112e604a0) = (bVar1 ^ 0xff) & 1;
      func_0x000107c61170();
    }
  }
  return;
}



/* Entry: 1021bfe48; end: 1021bfe87;  */

undefined8 FUN_1021bfe48(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1021bfe88; end: 1021bfed3;  */

void FUN_1021bfe88(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5ed90(param_1,param_2,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c4b788(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1021bfed4; end: 1021bfee3;  */

void FUN_1021bfed4(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c5a378(uVar1);
    if ((param_1 & 1) == 0) {
      pcVar3 = "deleteMyTravelStatuses(switchControl:)";
      func_0x0001000c10c0("deleteMyTravelStatuses(switchControl:)");
      func_0x000107c61180();
      puVar4 = &UNK_1104dc170;
      func_0x000107c613fc(&UNK_1104dc170,0x20,7);
      *(long *)(puVar4 + 0x10) = lVar2;
      *(undefined8 *)(puVar4 + 0x18) = uVar1;
      uStack_68 = 0x1021bfedc;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1104dc188;
      ppuVar5 = &puStack_88;
      puStack_60 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar4 = puStack_60;
      func_0x000107c61174(lVar2);
      func_0x000107c61174(uVar1);
      func_0x000107c61574(puVar4);
      func_0x000107c4e524(pcVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(pcVar3);
    }
    else {
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1021bfee4; end: 1021bff0f;  */

void FUN_1021bfee4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021bff10; end: 1021bff4f;  */

void FUN_1021bff10(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1021bff50; end: 1021bff57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021bff50(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (param_4 != 0) {
    return;
  }
  if (param_3 != 0) {
    lVar2 = param_3;
    func_0x000107c51948();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0,0);
      lVar3 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar3 != 0) {
        lVar4 = lVar2;
        func_0x000107c49eac();
        *(byte *)(lVar3 + _DAT_112e604a0) = (byte)lVar4 ^ 1;
        func_0x000107c61170(lVar3);
      }
      func_0x000107c61428(unaff_x20 + 0x10,auStack_a8,0,0);
      lVar3 = unaff_x20 + 0x10;
      func_0x000107c61618();
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        *(undefined1 *)(lVar3 + _DAT_112e604b0) = 1;
        func_0x000107c61170(lVar3);
      }
    }
    func_0x000107c44ed0();
    func_0x000107c61180();
    if (param_3 != 0) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
      lVar2 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar2 != 0) {
        lVar3 = param_3;
        func_0x000107c49eac();
        *(byte *)(lVar2 + _DAT_112e604a8) = (byte)lVar3 ^ 1;
        func_0x000107c61170(lVar2);
      }
      func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
      lVar2 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c4077c(param_3);
        puVar1 = (undefined8 *)(lVar2 + _DAT_112e604c0);
        *puVar1 = param_1;
        puVar1[1] = param_2;
        *(undefined1 *)(puVar1 + 2) = 0;
        func_0x000107c61170(lVar2);
      }
      func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
      lVar2 = unaff_x20 + 0x10;
      func_0x000107c61618();
      func_0x000107c61170(param_3);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + _DAT_112e604b8) = 1;
        func_0x000107c61170(lVar2);
      }
    }
  }
  puVar5 = &UNK_1104dc238;
  func_0x000107c613fc(&UNK_1104dc238,0x20,7);
  *(undefined **)(puVar5 + 0x10) = &UNK_10da68608;
  *(long *)(puVar5 + 0x18) = unaff_x20;
  func_0x000107c6157c();
  uVar6 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar7 = 0x41;
  func_0x0001001ca524(0x41,0,0x3c,4,0,0,&UNK_10da68618,puVar5,uVar6);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar7);
  return;
}



/* Entry: 1021bff58; end: 1021bffe3;  */

void FUN_1021bff58(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1021bffa0;
  plVar3[5] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1021be180,lVar1,lVar2);
  return;
}



/* Entry: 1021bffe4; end: 1021c0053;  */

void FUN_1021bffe4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1021c0054;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1021c0054; end: 1021c008f;  */

void FUN_1021c0054(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001021c008c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1021c0090; end: 1021c010f;  */

void FUN_1021c0090(long param_1,long param_2)

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



/* Entry: 1021c0110; end: 1021c0113; -[_TtC29SCPlaceSettingsImplementation31PlaceSettingsPageViewController defaultProjectNameV3] */

void FUN_1021c0110(void)

{
  func_0x000107c5fadc(0x70614d,0xe300000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021c0114; end: 1021c012f; -[_TtC29SCPlaceSettingsImplementation31PlaceSettingsPageViewController defaultProjectNameV2] */

void FUN_1021c0114(void)

{
  func_0x000107c5fadc(0x70614d,0xe300000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021c0130; end: 1021c045b;  */

void FUN_1021c0130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104dc260;
  func_0x000107c613fc(&UNK_1104dc260,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x0001000823a8(FUN_1021c045c,puVar1);
  return;
}



/* Entry: 1021c045c; end: 1021c0497;  */

void FUN_1021c045c(void)

{
  long unaff_x20;
  
  func_0x0001021c0274(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1021c0498; end: 1021c0613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c0498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112e60568;
  puVar2 = PTR_PTR_1126aeae0;
  func_0x000107c61168();
  func_0x000107c5e2b8();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e60570) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e60578) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e60580) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e60588) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e60590) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e60598) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e605a0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e605a8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e605b0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112e605b8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112e605c0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112e605c8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112e605d0) = param_13;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021c0614; end: 1021c065b; -[_TtC29SCPlaceSettingsImplementation28MapSettingsRowProviderPlugin sectionRow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c0614(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e60568;
  func_0x000107c61428(param_1 + _DAT_112e60568,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1021c065c; end: 1021c06bf; -[_TtC29SCPlaceSettingsImplementation28MapSettingsRowProviderPlugin setSectionRow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c065c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e60568;
  func_0x000107c61428(param_1 + _DAT_112e60568,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1021c06c0; end: 1021c078b; -[_TtC29SCPlaceSettingsImplementation28MapSettingsRowProviderPlugin rowViewModel] */

void FUN_1021c06c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_1021c35f0();
  puVar1 = PTR_PTR_1126aeaf0;
  func_0x000107c610f8(PTR_PTR_1126aeaf0);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c48dac(puVar1);
  func_0x000107c61170(param_1);
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar3 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c5b58c();
  func_0x000107c61180();
  func_0x000107c4a8a4(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1021c078c; end: 1021c0f9b;  */

/* WARNING: Possible PIC construction at 0x0001021c0848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c08a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c08bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c08f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c094c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0f48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c0a08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c0f7c) */
/* WARNING: Removing unreachable block (ram,0x0001021c0f4c) */
/* WARNING: Removing unreachable block (ram,0x0001021c0f14) */
/* WARNING: Removing unreachable block (ram,0x0001021c0f04) */
/* WARNING: Removing unreachable block (ram,0x0001021c0ef4) */
/* WARNING: Removing unreachable block (ram,0x0001021c0ed4) */
/* WARNING: Removing unreachable block (ram,0x0001021c0c14) */
/* WARNING: Removing unreachable block (ram,0x0001021c0f8c) */
/* WARNING: Removing unreachable block (ram,0x0001021c0e60) */
/* WARNING: Removing unreachable block (ram,0x0001021c0e6c) */
/* WARNING: Removing unreachable block (ram,0x0001021c0e70) */
/* WARNING: Removing unreachable block (ram,0x0001021c0f90) */
/* WARNING: Removing unreachable block (ram,0x0001021c0e74) */
/* WARNING: Removing unreachable block (ram,0x0001021c0e7c) */
/* WARNING: Removing unreachable block (ram,0x0001021c0e80) */
/* WARNING: Removing unreachable block (ram,0x0001021c0f94) */
/* WARNING: Removing unreachable block (ram,0x0001021c0e84) */
/* WARNING: Removing unreachable block (ram,0x0001021c0f98) */
/* WARNING: Removing unreachable block (ram,0x0001021c0eb0) */
/* WARNING: Removing unreachable block (ram,0x0001021c0ec4) */
/* WARNING: Removing unreachable block (ram,0x0001021c0ec8) */
/* WARNING: Removing unreachable block (ram,0x0001021c0bb0) */
/* WARNING: Removing unreachable block (ram,0x0001021c0b50) */
/* WARNING: Removing unreachable block (ram,0x0001021c0b00) */
/* WARNING: Removing unreachable block (ram,0x0001021c0acc) */
/* WARNING: Removing unreachable block (ram,0x0001021c0a90) */
/* WARNING: Removing unreachable block (ram,0x0001021c0a6c) */
/* WARNING: Removing unreachable block (ram,0x0001021c096c) */
/* WARNING: Removing unreachable block (ram,0x0001021c09ec) */
/* WARNING: Removing unreachable block (ram,0x0001021c0970) */
/* WARNING: Removing unreachable block (ram,0x0001021c0a38) */
/* WARNING: Removing unreachable block (ram,0x0001021c099c) */
/* WARNING: Removing unreachable block (ram,0x0001021c0a3c) */
/* WARNING: Removing unreachable block (ram,0x0001021c0950) */
/* WARNING: Removing unreachable block (ram,0x0001021c0914) */
/* WARNING: Removing unreachable block (ram,0x0001021c09dc) */
/* WARNING: Removing unreachable block (ram,0x0001021c091c) */
/* WARNING: Removing unreachable block (ram,0x0001021c08f8) */
/* WARNING: Removing unreachable block (ram,0x0001021c08c0) */
/* WARNING: Removing unreachable block (ram,0x0001021c09d4) */
/* WARNING: Removing unreachable block (ram,0x0001021c0a00) */
/* WARNING: Removing unreachable block (ram,0x0001021c08c4) */
/* WARNING: Removing unreachable block (ram,0x0001021c08a4) */
/* WARNING: Removing unreachable block (ram,0x0001021c0868) */
/* WARNING: Removing unreachable block (ram,0x0001021c0a04) */
/* WARNING: Removing unreachable block (ram,0x0001021c086c) */
/* WARNING: Removing unreachable block (ram,0x0001021c084c) */
/* WARNING: Removing unreachable block (ram,0x0001021c0a0c) */
/* WARNING: Removing unreachable block (ram,0x0001021c0a10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c078c(long param_1)

{
  long lVar1;
  long alStack_80 [2];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c4d508();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000100083b20(alStack_80);
    func_0x000107c44580(alStack_80[0]);
    func_0x000107c61180();
    param_1 = alStack_80[0];
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


