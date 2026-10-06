/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e8844c; end: 102e888d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8844c(double param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c0 [24];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar7 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar7 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  uVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = _DAT_112f243c8;
  lVar8 = uVar12 - extraout_x12_00;
  func_0x000107c61428(unaff_x20 + _DAT_112f243c8,auStack_78,0,0);
  FUN_102e8c110(unaff_x20 + lVar1,lVar10,0x112d373d8,&UNK_10d9014c0);
  lVar3 = lVar10;
  (**(code **)(lVar9 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x000102e8c090(lVar10,0x112d373d8,&UNK_10d9014c0);
    return;
  }
  (**(code **)(lVar9 + 0x20))(lVar8,lVar10,lVar2);
  func_0x000107c5eea0(uVar12);
  uVar4 = uVar12;
  func_0x000107c5ee74(uVar12,lVar8);
  pcVar14 = *(code **)(lVar9 + 8);
  (*pcVar14)(uVar12,lVar2);
  lVar3 = _DAT_112f24348;
  if ((uVar4 & 1) != 0) goto LAB_102e887a8;
  lVar10 = unaff_x20 + _DAT_112f24348;
  func_0x000107c61618();
  if (lVar10 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar10;
    func_0x000107c5d1b8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    if (lVar11 != 0) {
      lVar10 = lVar11;
      func_0x000107c5d1b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar11);
      lVar11 = lVar10;
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
    }
  }
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 == 0) {
LAB_102e8869c:
    lVar13 = 0;
    lVar3 = _DAT_1138050f8;
  }
  else {
    lVar10 = lVar3;
    func_0x000107c5d1b8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar10 == 0) goto LAB_102e8869c;
    lVar13 = lVar10;
    func_0x000107c5d1b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    lVar3 = _DAT_1138050f8;
  }
  _DAT_1138050f8 = lVar3;
  if (lVar11 == 0) goto LAB_102e88808;
  lStack_d0 = lVar13;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_c0,0,0);
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 == 0) {
    func_0x000107c61174(lVar11);
LAB_102e88758:
    lVar10 = lStack_d0;
    FUN_102e8b4b8();
    func_0x000107c61170(lVar11);
    if (lVar10 == 0) {
      func_0x000107c61170(lVar3);
      lVar13 = lStack_d0;
LAB_102e88808:
      puVar5 = &UNK_1105e0888;
      func_0x000107c613fc(&UNK_1105e0888,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,unaff_x20);
      pcStack_88 = FUN_102e8c038;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_1105e0aa8;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_80);
      func_0x000100c749e0(0x3dcccccd,&UNK_10db5ef90,ppuVar6);
      func_0x000107c61170(lVar13);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar11);
      (*pcVar14)(lVar8,lVar2);
      return;
    }
    func_0x000107c61170(lVar10);
    func_0x000107c515a0(lVar11);
  }
  else {
    lVar10 = lVar11;
    func_0x000107c61174();
    if (lVar3 == lVar11) goto LAB_102e88758;
    lVar13 = lVar3;
    lStack_d8 = lVar10;
    func_0x000107c61174();
    lVar10 = lVar13;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    if (lVar10 == 0) {
LAB_102e88750:
      func_0x000107c61170(lVar13);
      goto LAB_102e88758;
    }
    func_0x000107c61170();
    func_0x000107c3ec60(lVar13);
    func_0x000107c609b0();
    if (param_1 <= 0.0) goto LAB_102e88750;
    func_0x000107c61170(lStack_d8);
    func_0x000107c3ec60(lVar13);
    func_0x000107c4073c(lVar13);
    func_0x000107c61170(lVar13);
  }
  func_0x000107c61170(lVar3);
  FUN_102e87f9c(1);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lStack_d0);
LAB_102e887a8:
  (*pcVar14)(lVar8,lVar2);
  (**(code **)(lVar9 + 0x38))(puVar7,1,1,lVar2);
  func_0x000107c61428(unaff_x20 + lVar1,&puStack_a8,0x21,0);
  func_0x000100ed9cbc(puVar7,unaff_x20 + lVar1);
  func_0x000107c614a8(&puStack_a8);
  return;
}



/* Entry: 102e888d8; end: 102e8892b;  */

void FUN_102e888d8(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102e8844c();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102e8892c; end: 102e894ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8892c(double param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long unaff_x20;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_180 [24];
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [32];
  
  func_0x000107c614f0();
  lVar15 = _DAT_1138050e0;
  func_0x000107c61428(unaff_x20 + _DAT_1138050e0,auStack_c0,0,0);
  uVar1 = *(ulong *)(unaff_x20 + lVar15);
  if (uVar1 != 0) {
    func_0x000107c61174();
    uVar2 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010f112740);
    uVar3 = uVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    if (uVar3 == 0) {
LAB_102e88a20:
      lVar15 = *(long *)(unaff_x20 + lVar15);
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    }
    else {
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar1 = uVar3;
      func_0x000107c6148c(uVar3,puVar16);
      if (uVar1 != 0) {
        func_0x000107c3ebcc();
        func_0x000107c615e8(uVar3);
        if ((uVar1 & 1) != 0) {
          return;
        }
        goto LAB_102e88a20;
      }
      func_0x000107c615e8(uVar3);
      lVar15 = *(long *)(unaff_x20 + lVar15);
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    }
    PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar16;
    if (lVar15 != 0) {
      func_0x000107c610f8(puVar16);
      func_0x000107c61174(lVar15);
      func_0x000107c45a48(puVar16);
      uVar2 = 0xd00000000000001e;
      func_0x000107c5fadc(0xd00000000000001e,0x800000010f112740);
      func_0x000107c56bd8(lVar15);
      func_0x000107c61170(lVar15);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(uVar2);
    }
  }
  func_0x000107c3ec60(param_2);
  func_0x000107c609cc();
  dVar21 = param_1;
  func_0x000107c3ec60(param_2);
  func_0x000107c609b0();
  lVar5 = _DAT_1138050f0;
  func_0x000107c61428(unaff_x20 + _DAT_1138050f0,auStack_d8,0,0);
  lVar15 = _DAT_1138050e8;
  dVar18 = *(double *)(unaff_x20 + lVar5);
  dVar21 = dVar21 * 0.15 * dVar18;
  func_0x000107c61428(unaff_x20 + _DAT_1138050e8,auStack_f0,0,0);
  if (*(char *)(unaff_x20 + lVar15) == '\x01') {
    lVar15 = unaff_x20 + _DAT_112f24348;
    func_0x000107c61618();
    if (lVar15 == 0) {
LAB_102e88b74:
      lVar15 = 0;
    }
    else {
      lVar5 = lVar15;
      func_0x000107c5d1b8();
      func_0x000107c61180();
      func_0x000107c615e8(lVar15);
      if (lVar5 == 0) goto LAB_102e88b74;
      lVar15 = lVar5;
      func_0x000107c5d1b4(lVar5);
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
    }
    lVar5 = _DAT_1138050f8;
    func_0x000107c61428(unaff_x20 + _DAT_1138050f8,auStack_180,0,0);
    lVar5 = unaff_x20 + lVar5;
    func_0x000107c61618(lVar5);
    FUN_102e89500(param_2,lVar5,lVar15);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar15);
    dVar18 = dVar18 + (dVar18 - dVar21);
    dVar21 = 0.5;
    dVar20 = dVar18 * 0.5;
  }
  else {
    func_0x000107c515a0(param_2);
    dVar21 = (dVar21 - dVar18) * 0.5;
    dVar20 = dVar18 + dVar21;
  }
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f112760);
  puVar16 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  puVar4 = puVar16;
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar7 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    uVar2 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010f112780);
    func_0x000107c5c604();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    dVar21 = 28.0;
    if (puVar16 == (undefined *)0x0) {
      dVar18 = 28.0;
      goto LAB_102e88c4c;
    }
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5e2ac();
    func_0x000107c61180();
    puVar7 = puVar16;
    func_0x000107c4515c();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar6);
    if (puVar7 == (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      dVar18 = 28.0;
      dVar21 = 28.0;
      goto LAB_102e88c4c;
    }
    func_0x000107c61174();
  }
  puVar16 = puVar7;
  func_0x000107c61174(puVar4);
  func_0x000107c5b078(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c5b078(puVar16);
LAB_102e88c4c:
  if (dVar21 < dVar18) {
    dVar21 = dVar18;
  }
  dVar18 = 28.0;
  if (dVar21 <= 28.0) {
    dVar18 = dVar21;
  }
  lVar5 = -0x2fffffffffffffe2;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f1127a0);
  uVar2 = 0;
  lVar15 = lVar5;
  func_0x000107c312f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar15 == 0) {
    lVar5 = 0;
    uVar2 = 0xe000000000000000;
  }
  else {
    lVar5 = lVar15;
    func_0x000107c5faec(lVar15);
    func_0x000107c61170(lVar15);
  }
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  dVar21 = *(double *)PTR__UIFontWeightMedium_110345c38;
  func_0x000107c5c600(0x402a000000000000);
  func_0x000107c61180();
  lVar8 = lVar5;
  func_0x000107c5fadc(lVar5,uVar2);
  lVar15 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  dVar19 = 4.94065645841247e-324;
  *(undefined8 *)(lVar15 + 0x18) = 2;
  *(undefined8 *)(lVar15 + 0x10) = 1;
  uVar17 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar15 + 0x20) = uVar17;
  uVar9 = 0;
  FUN_102e8c050(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  *(undefined8 *)(lVar15 + 0x40) = uVar9;
  *(undefined **)(lVar15 + 0x28) = puVar4;
  func_0x000107c61174(uVar17);
  func_0x000107c61174(puVar4);
  lVar10 = lVar15;
  func_0x000100ecbca8(lVar15);
  func_0x000107c61588(lVar15);
  func_0x000102e8c090((undefined8 *)(lVar15 + 0x20),0x112d48398,&UNK_10d90f130);
  uVar17 = 0;
  func_0x000100eca28c(0);
  uVar9 = 0x112d483a0;
  func_0x000102e8c158(0x112d483a0,&UNK_10d90f180);
  lVar15 = lVar10;
  func_0x000107c5f9dc(lVar10,uVar17,PTR___sypN_11034f1a8 + 8,uVar9);
  func_0x000107c6142c(lVar10);
  func_0x000107c5b0a0(lVar8);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar15);
  if (dVar21 < dVar18) {
    dVar21 = dVar18;
  }
  puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,(long)(dVar18 + 28.0 + 8.0 + dVar19),(long)(dVar21 + 16.0));
  func_0x000107c532b4(param_1 * 0.5,dVar20);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar6 = puVar7;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar11);
  func_0x000107c61170(puVar6);
  puVar6 = puVar11;
  func_0x000107c4aba4(puVar11);
  func_0x000107c61180();
  func_0x000107c539d4((double)(long)(dVar21 + 16.0) * 0.5);
  func_0x000107c61170(puVar6);
  dVar21 = dVar18 + 14.0;
  dVar20 = dVar21 + 8.0;
  puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x000107c46db4();
  func_0x000107c61180();
  func_0x000107c53840();
  func_0x000107c3ec60(puVar11);
  func_0x000107c609b0();
  uVar9 = 0x402c000000000000;
  func_0x000107c54b80(0x402c000000000000,(dVar21 - dVar18) * 0.5,dVar18,dVar18,puVar6);
  func_0x000107c3d89c(puVar11);
  func_0x000107c3ec60(puVar11);
  func_0x000107c609b0();
  puVar12 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x000107c469a4(dVar20,0,dVar19,uVar9);
  func_0x000107c5fadc(lVar5,uVar2);
  func_0x000107c59c6c(puVar12);
  func_0x000107c61170(lVar5);
  func_0x000107c54adc(puVar12);
  func_0x000107c5af88(puVar7);
  func_0x000107c61180();
  func_0x000107c59c78(puVar12);
  func_0x000107c61170(puVar7);
  func_0x000107c59c74(puVar12);
  func_0x000107c3d89c(puVar11);
  puVar7 = puVar6;
  func_0x000107c4aba4(puVar6);
  func_0x000107c61180();
  func_0x000107c4eb70();
  func_0x000107c61170(puVar7);
  uVar9 = 0x6e6f697469736f70;
  func_0x000107c5fadc(0x6e6f697469736f70,0xea0000000000782e);
  puVar13 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x000107c61168(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240);
  func_0x000107c3dd18();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  lVar15 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar15 + 0x18) = 10;
  *(undefined8 *)(lVar15 + 0x10) = 5;
  puVar7 = PTR___s12CoreGraphics7CGFloatVN_1103513a8;
  *(undefined **)(lVar15 + 0x38) = PTR___s12CoreGraphics7CGFloatVN_1103513a8;
  *(double *)(lVar15 + 0x20) = dVar20;
  *(undefined **)(lVar15 + 0x58) = puVar7;
  *(double *)(lVar15 + 0x40) = dVar20 + -8.0;
  *(undefined **)(lVar15 + 0x78) = puVar7;
  *(double *)(lVar15 + 0x60) = dVar20;
  *(undefined **)(lVar15 + 0x98) = puVar7;
  *(double *)(lVar15 + 0x80) = dVar20 + 8.0;
  *(undefined **)(lVar15 + 0xb8) = puVar7;
  *(double *)(lVar15 + 0xa0) = dVar20;
  lVar5 = lVar15;
  func_0x000107c5fc48();
  func_0x000107c61574(lVar15);
  func_0x000107c5a4ac(puVar13);
  func_0x000107c61170();
  func_0x000100673624();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 0xb;
  *(undefined8 *)(lVar5 + 0x10) = 5;
  uVar9 = 0;
  FUN_102e8c050(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar17 = 0;
  func_0x000107c60110();
  *(undefined8 *)(lVar5 + 0x20) = uVar17;
  func_0x000107c60108(0x3fd0000000000000);
  *(undefined8 *)(lVar5 + 0x28) = uVar17;
  func_0x000107c60108(0x3fe0000000000000);
  *(undefined8 *)(lVar5 + 0x30) = uVar17;
  func_0x000107c60108(0x3fe8000000000000);
  *(undefined8 *)(lVar5 + 0x38) = uVar17;
  func_0x000107c60108(0x3ff0000000000000);
  *(undefined8 *)(lVar5 + 0x40) = uVar17;
  lVar15 = lVar5;
  func_0x000107c5fc48(lVar5,uVar9);
  func_0x000107c61574(lVar5);
  func_0x000107c559b4(puVar13);
  func_0x000107c61170(lVar15);
  func_0x000107c61174(puVar13);
  func_0x000107c54358(0x3ff6666666666666);
  func_0x000107c57d30(0x7f800000,puVar13);
  puVar7 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x000107c61168(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  func_0x000107c43be8();
  func_0x000107c61180();
  func_0x000107c59dfc(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar7);
  puVar7 = puVar6;
  func_0x000107c4aba4(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  uVar9 = 0x746f4d6570697773;
  func_0x000107c5fadc(0x746f4d6570697773,0xeb000000006e6f69);
  func_0x000107c3d5a4(puVar7);
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c526c0(0,puVar11);
  func_0x000107c3d89c(param_2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f243c0);
  *(undefined **)(unaff_x20 + _DAT_112f243c0) = puVar11;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  puVar12 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar7 = &UNK_1105e0ae0;
  func_0x000107c613fc(&UNK_1105e0ae0,0x18,7);
  *(undefined **)(puVar7 + 0x10) = puVar11;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_148 = FUN_102e8c0d0;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0x42000000;
  puStack_158 = &UNK_1000f6b44;
  puStack_150 = &UNK_1105e0af8;
  ppuVar14 = &puStack_168;
  puStack_140 = puVar7;
  func_0x000107c60bc4(ppuVar14);
  puVar7 = puStack_140;
  func_0x000107c61174();
  func_0x000107c61574(puVar7);
  func_0x000107c3dccc(0x3fd3333333333333,puVar12);
  func_0x000107c60bd0(ppuVar14);
  puVar7 = &UNK_1105e0888;
  func_0x000107c613fc(&UNK_1105e0888,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  pcStack_148 = (code *)0x102e8c0dc;
  puStack_168 = puVar6;
  uStack_160 = 0x42000000;
  puStack_158 = &UNK_1000f6b44;
  puStack_150 = &UNK_1105e0b20;
  ppuVar14 = &puStack_168;
  puStack_140 = puVar7;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_140);
  func_0x000100c749e0(0x404ccccd,&UNK_10db5ef90,ppuVar14);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar16);
  func_0x000107c60bd0(ppuVar14);
  return;
}



/* Entry: 102e89500; end: 102e895f7;  */

double FUN_102e89500(double param_1,undefined8 param_2,double param_3,long param_4,long param_5,
                    long param_6)

{
  long lVar1;
  double dVar2;
  
  if ((param_5 != 0) && (param_4 != param_5)) {
    func_0x000107c61174();
    lVar1 = param_5;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c61170();
      func_0x000107c3ec60(param_5);
      func_0x000107c609b0();
      if (0.0 < param_1) {
        func_0x000107c3ec60(param_5);
        func_0x000107c4073c(param_5);
        func_0x000107c609b8();
        func_0x000107c61170(param_5);
        return param_1;
      }
    }
    func_0x000107c61170(param_5);
  }
  FUN_102e8b4b8();
  if (param_6 == 0) {
    func_0x000107c3ec60(param_4);
    func_0x000107c609b0();
    dVar2 = -90.0;
  }
  else {
    func_0x000107c61170();
    func_0x000107c515a0(param_4);
    func_0x000107c3ec60(param_4);
    func_0x000107c609b0();
    param_1 = param_1 - param_3;
    dVar2 = -80.0;
  }
  return param_1 + dVar2;
}



/* Entry: 102e895f8; end: 102e89f37;  */

/* WARNING: Possible PIC construction at 0x000102e89c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e89adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e89af4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e89bec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e89c88) */
/* WARNING: Removing unreachable block (ram,0x000102e89ae0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e895f8(double param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [104];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar4 = _DAT_112f24388;
  if (*(char *)(unaff_x20 + _DAT_112f24390) != '\x01') {
    return;
  }
  if (*(ulong *)(unaff_x20 + _DAT_112f24388) < 0xc) {
    return;
  }
  lVar5 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
    return;
  }
  func_0x000107c4b8b8(param_2);
  dVar15 = param_1;
  func_0x000107c3ec60(lVar5);
  func_0x000107c609cc();
  dVar16 = dVar15;
  func_0x000107c5bcc0();
  lVar12 = _DAT_113805110;
  if (2 < param_2) {
    if (param_2 - 4U < 2) {
      func_0x000107c61428(unaff_x20 + _DAT_113805110,auStack_90,0,0);
      if (*(char *)(unaff_x20 + lVar12) != '\x01') goto LAB_102e89eac;
      *(undefined8 *)(unaff_x20 + _DAT_112f24368) = *(undefined8 *)(unaff_x20 + _DAT_112f24360);
    }
    else {
      if (param_2 != 3) goto code_r0x000107c61170;
      func_0x000107c61428(unaff_x20 + _DAT_113805110,auStack_90,0,0);
      if ((*(byte *)(unaff_x20 + lVar12) & 1) == 0) goto LAB_102e89eac;
      uVar8 = *(ulong *)(unaff_x20 + lVar4);
      if (uVar8 == 0) {
        uVar9 = 0;
      }
      else {
        uVar2 = uVar8 - 1;
        if (SBORROW8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89edc);
          (*pcVar3)();
        }
        uVar10 = *(ulong *)(unaff_x20 + _DAT_112f24398);
        if ((long)(uVar8 | uVar10) < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89ee4);
          (*pcVar3)();
        }
        uVar9 = uVar2;
        if ((long)uVar10 <= (long)uVar2) {
          uVar9 = uVar10;
        }
        if ((dVar15 <= 0.0) || (uVar8 == 1)) {
          if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89ca4);
            (*pcVar3)();
          }
        }
        else {
          dVar16 = *(double *)(unaff_x20 + _DAT_112f243a8);
          param_1 = param_1 - dVar16;
          if (0.0 <= param_1) {
            if (SBORROW8(uVar2,uVar9)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89ef0);
              (*pcVar3)();
            }
            dVar15 = dVar15 - dVar16;
            if (dVar15 <= 1.0) {
              dVar15 = 1.0;
            }
            dVar16 = 1.0;
            if (param_1 / dVar15 <= 1.0) {
              dVar16 = param_1 / dVar15;
            }
            dVar15 = (double)(uVar2 - uVar9);
            if (0x7fffffffffffffff < uVar2 - uVar9) {
              dVar15 = 0.0;
            }
            dVar15 = (double)(long)(dVar16 * dVar15);
            if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89f00);
              (*pcVar3)();
            }
            if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89f10);
              (*pcVar3)();
            }
            if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89f20);
              (*pcVar3)();
            }
            uVar8 = uVar9 + (long)dVar15;
            if (SCARRY8(uVar9,(long)dVar15)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89f2c);
              (*pcVar3)();
            }
            uVar9 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
            if (uVar2 <= uVar9) {
              uVar9 = uVar2;
            }
            if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89f34);
              (*pcVar3)();
            }
          }
          else {
            if (dVar16 <= 1.0) {
              dVar16 = 1.0;
            }
            dVar15 = 1.0;
            if (-param_1 / dVar16 <= 1.0) {
              dVar15 = -param_1 / dVar16;
            }
            dVar15 = (double)(long)(dVar15 * (double)(long)uVar9);
            if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89eec);
              (*pcVar3)();
            }
            if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89efc);
              (*pcVar3)();
            }
            if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89f0c);
              (*pcVar3)();
            }
            uVar8 = uVar9 - (long)dVar15;
            if (SBORROW8(uVar9,(long)dVar15)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89f1c);
              (*pcVar3)();
            }
            uVar9 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
            if (uVar2 <= uVar9) {
              uVar9 = uVar2;
            }
            if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e898e8);
              (*pcVar3)();
            }
          }
        }
      }
      *(ulong *)(unaff_x20 + _DAT_112f24368) = uVar9;
      lVar4 = _DAT_112f24360;
      if (uVar9 != *(ulong *)(unaff_x20 + _DAT_112f24360)) {
        if ((*(byte *)(unaff_x20 + _DAT_112f24378) & 1) == 0) {
          FUN_102e8a41c(uVar9);
        }
        else {
          FUN_102e8a2e4(uVar9);
        }
        *(ulong *)(unaff_x20 + lVar4) = uVar9;
      }
    }
    FUN_102e87f10();
    FUN_102e86de4();
    goto LAB_102e89eac;
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      func_0x000107c61428(unaff_x20 + _DAT_113805110,auStack_90,1,0);
      *(undefined1 *)(unaff_x20 + lVar12) = 1;
      lVar11 = _DAT_112f24398;
      lVar12 = _DAT_112f24360;
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f24360);
      *(undefined8 *)(unaff_x20 + _DAT_112f24398) = uVar13;
      *(double *)(unaff_x20 + _DAT_112f243a8) = param_1;
      lVar7 = _DAT_112f24368;
      *(undefined8 *)(unaff_x20 + _DAT_112f24368) = uVar13;
      func_0x000107c6071c();
      *(double *)(unaff_x20 + _DAT_112f243a0) = dVar16;
      lVar4 = unaff_x20 + _DAT_112f24350;
      func_0x000107c61618();
      if (lVar4 != 0) {
        lVar5 = -0x2fffffffffffffef;
        func_0x000107c5fadc(0xd000000000000011,0x800000010f1126d0);
        uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f24370);
        lVar12 = 0x112d4b5e8;
        func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
        func_0x000107c61534();
        *(undefined8 *)(lVar12 + 0x18) = 2;
        *(undefined8 *)(lVar12 + 0x10) = 1;
        *(undefined8 *)(lVar12 + 0x20) = 0xd000000000000011;
        *(undefined8 *)(lVar12 + 0x28) = 0x800000010f1126f0;
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c61174(uVar13);
        func_0x000107c490d4();
        uVar13 = 0;
        FUN_102e8c050(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        *(undefined8 *)(lVar12 + 0x48) = uVar13;
        *(undefined **)(lVar12 + 0x30) = puVar6;
        lVar7 = lVar12;
        func_0x000100214a84(lVar12);
        func_0x000107c61588(lVar12);
        func_0x000102e8c090((undefined8 *)(lVar12 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
        func_0x000107c5f9dc(lVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                            PTR___sSSSHsWP_11034da90);
        func_0x000107c6142c(lVar7);
        func_0x000107c4df80(lVar4);
        func_0x000107c615e8(lVar4);
        goto code_r0x000107c61170;
      }
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_113805100);
      func_0x000107c61428(puVar1,auStack_a8,0,0);
      pcVar3 = (code *)*puVar1;
      if (pcVar3 != (code *)0x0) {
        uVar13 = puVar1[1];
        uVar14 = *(undefined8 *)(unaff_x20 + lVar11);
        func_0x000107c6157c(uVar13);
        (*pcVar3)(uVar14);
        func_0x000100d29904(pcVar3,uVar13);
      }
      lVar4 = _DAT_1138050d0;
      func_0x000107c61428(unaff_x20 + _DAT_1138050d0,auStack_c0,0,0);
      if (*(char *)(unaff_x20 + lVar4) == '\x01') {
        lVar4 = unaff_x20 + _DAT_112f24348;
        func_0x000107c61618();
        if (lVar4 != 0) {
          lVar11 = lVar4;
          func_0x000107c5df08();
          func_0x000107c61180();
          func_0x000107c615e8(lVar4);
          if (lVar11 != 0) {
            lVar5 = -0x2fffffffffffffea;
            func_0x000107c5fadc(0xd000000000000016,0x800000010db5ef70);
            func_0x000107c4e484(lVar11);
            func_0x000107c615e8(lVar11);
            goto code_r0x000107c61170;
          }
        }
      }
      FUN_102e87d84();
      FUN_102e89f38(lVar5);
      lVar4 = _DAT_112f244d8;
      lVar11 = *(long *)(unaff_x20 + _DAT_112f243b0);
      if (lVar11 == 0) goto LAB_102e89eac;
      uVar13 = *(undefined8 *)(unaff_x20 + lVar7);
      func_0x000107c61428(lVar11 + _DAT_112f244d8,auStack_128,1,0);
      *(undefined8 *)(lVar11 + lVar4) = uVar13;
      lVar4 = _DAT_112f244e0;
      uVar13 = *(undefined8 *)(unaff_x20 + lVar12);
      func_0x000107c61428(lVar11 + _DAT_112f244e0,auStack_140,1,0);
      *(undefined8 *)(lVar11 + lVar4) = uVar13;
      func_0x000107c61174(lVar11);
      func_0x000102e8c90c();
      uVar13 = *(undefined8 *)(unaff_x20 + lVar7);
      lVar5 = lVar11;
    }
    else {
      if (param_2 != 2) goto code_r0x000107c61170;
      func_0x000107c61428(unaff_x20 + _DAT_113805110,auStack_90,0,0);
      lVar7 = _DAT_112f24368;
      if ((*(byte *)(unaff_x20 + lVar12) & 1) == 0) {
LAB_102e89eac:
        func_0x000107c61170(lVar5);
        return;
      }
      uVar8 = *(ulong *)(unaff_x20 + lVar4);
      if (uVar8 == 0) {
        uVar9 = 0;
      }
      else {
        uVar2 = uVar8 - 1;
        if (SBORROW8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89ee0);
          (*pcVar3)();
        }
        uVar10 = *(ulong *)(unaff_x20 + _DAT_112f24398);
        if ((long)(uVar8 | uVar10) < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89ee8);
          (*pcVar3)();
        }
        uVar9 = uVar2;
        if ((long)uVar10 <= (long)uVar2) {
          uVar9 = uVar10;
        }
        if ((dVar15 <= 0.0) || (uVar8 == 1)) {
          if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89cac);
            (*pcVar3)();
          }
        }
        else {
          dVar16 = *(double *)(unaff_x20 + _DAT_112f243a8);
          param_1 = param_1 - dVar16;
          if (0.0 <= param_1) {
            if (SBORROW8(uVar2,uVar9)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89ef8);
              (*pcVar3)();
            }
            dVar15 = dVar15 - dVar16;
            if (dVar15 <= 1.0) {
              dVar15 = 1.0;
            }
            dVar16 = 1.0;
            if (param_1 / dVar15 <= 1.0) {
              dVar16 = param_1 / dVar15;
            }
            dVar15 = (double)(uVar2 - uVar9);
            if (0x7fffffffffffffff < uVar2 - uVar9) {
              dVar15 = 0.0;
            }
            dVar15 = (double)(long)(dVar16 * dVar15);
            if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89f08);
              (*pcVar3)();
            }
            if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89f18);
              (*pcVar3)();
            }
            if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89f28);
              (*pcVar3)();
            }
            uVar8 = uVar9 + (long)dVar15;
            if (SCARRY8(uVar9,(long)dVar15)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89f30);
              (*pcVar3)();
            }
            uVar9 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
            if (uVar2 <= uVar9) {
              uVar9 = uVar2;
            }
            if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89f38);
              (*pcVar3)();
            }
          }
          else {
            if (dVar16 <= 1.0) {
              dVar16 = 1.0;
            }
            dVar15 = 1.0;
            if (-param_1 / dVar16 <= 1.0) {
              dVar15 = -param_1 / dVar16;
            }
            dVar15 = (double)(long)(dVar15 * (double)(long)uVar9);
            if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89ef4);
              (*pcVar3)();
            }
            if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89f04);
              (*pcVar3)();
            }
            if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89f14);
              (*pcVar3)();
            }
            uVar8 = uVar9 - (long)dVar15;
            if (SBORROW8(uVar9,(long)dVar15)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89f24);
              (*pcVar3)();
            }
            uVar9 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
            if (uVar2 <= uVar9) {
              uVar9 = uVar2;
            }
            if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e89794);
              (*pcVar3)();
            }
          }
        }
      }
      if (uVar9 == *(ulong *)(unaff_x20 + _DAT_112f24368)) goto LAB_102e89eac;
      *(ulong *)(unaff_x20 + _DAT_112f24368) = uVar9;
      lVar4 = _DAT_112f244d8;
      lVar12 = *(long *)(unaff_x20 + _DAT_112f243b0);
      if (lVar12 == 0) goto LAB_102e89eac;
      func_0x000107c61428(lVar12 + _DAT_112f244d8,auStack_a8,1,0);
      *(ulong *)(lVar12 + lVar4) = uVar9;
      lVar4 = _DAT_112f244e0;
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f24360);
      func_0x000107c61428(lVar12 + _DAT_112f244e0,auStack_c0,1,0);
      *(undefined8 *)(lVar12 + lVar4) = uVar13;
      func_0x000107c61174(lVar12);
      func_0x000102e8c90c();
      uVar13 = *(undefined8 *)(unaff_x20 + lVar7);
      lVar5 = lVar12;
    }
    FUN_102e8ab04(uVar13);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 102e89f38; end: 102e8a293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e89f38(double param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_148 [24];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  func_0x000107c614f0();
  lVar4 = _DAT_112f243b0;
  if (*(long *)(unaff_x20 + _DAT_112f243b0) != 0) {
    func_0x000107c4ff34();
  }
  func_0x000107c3ec60(param_2);
  func_0x000107c609cc();
  lVar5 = _DAT_1138050e8;
  dVar12 = param_1;
  func_0x000107c61428(unaff_x20 + _DAT_1138050e8,auStack_88,0,0);
  if (*(char *)(unaff_x20 + lVar5) != '\x01') {
    dVar13 = 188.9;
    dVar12 = 50.0;
    goto LAB_102e8a084;
  }
  func_0x000107c515a0(param_2);
  lVar10 = unaff_x20 + _DAT_112f24348;
  dVar13 = dVar12;
  func_0x000107c61618();
  if (lVar10 == 0) {
LAB_102e8a030:
    lVar10 = 0;
  }
  else {
    lVar6 = lVar10;
    func_0x000107c5d1b8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    if (lVar6 == 0) goto LAB_102e8a030;
    lVar10 = lVar6;
    func_0x000107c5d1b4(lVar6);
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
  }
  lVar6 = _DAT_1138050f8;
  func_0x000107c61428(unaff_x20 + _DAT_1138050f8,auStack_148,0,0);
  lVar6 = unaff_x20 + lVar6;
  func_0x000107c61618(lVar6);
  FUN_102e89500(param_2,lVar6,lVar10);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar10);
  dVar13 = dVar13 - dVar12;
LAB_102e8a084:
  lVar6 = 0;
  FUN_102e90fec();
  func_0x000107c610f8();
  func_0x000107c469a4(0,dVar12,param_1,dVar13);
  lVar10 = _DAT_112f24488;
  cVar1 = *(char *)(unaff_x20 + lVar5);
  func_0x000107c61428(lVar6 + _DAT_112f24488,auStack_a0,1,0);
  cVar2 = *(char *)(lVar6 + lVar10);
  *(char *)(lVar6 + lVar10) = cVar1;
  if (cVar1 != cVar2) {
    func_0x000107c550d8(*(undefined8 *)(lVar6 + _DAT_112f24490));
  }
  lVar5 = _DAT_1138050f0;
  func_0x000107c61428(unaff_x20 + _DAT_1138050f0,auStack_b8,0,0);
  FUN_102e8c434(*(undefined8 *)(unaff_x20 + lVar5));
  lVar5 = _DAT_112f244d0;
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f24388);
  func_0x000107c61428(lVar6 + _DAT_112f244d0,auStack_d0,1,0);
  *(undefined8 *)(lVar6 + lVar5) = uVar11;
  lVar5 = _DAT_112f244e0;
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f24360);
  func_0x000107c61428(lVar6 + _DAT_112f244e0,auStack_e8,1,0);
  *(undefined8 *)(lVar6 + lVar5) = uVar11;
  lVar5 = _DAT_112f244f0;
  bVar3 = *(byte *)(unaff_x20 + _DAT_112f24378);
  func_0x000107c61428(lVar6 + _DAT_112f244f0,auStack_100,1,0);
  *(ulong *)(lVar6 + lVar5) = (ulong)bVar3;
  func_0x000107c3d89c(param_2);
  FUN_102e8c510();
  func_0x000107c526c0(0,lVar6);
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar8 = &UNK_1105e07e8;
  func_0x000107c613fc(&UNK_1105e07e8,0x18,7);
  *(long *)(puVar8 + 0x10) = lVar6;
  pcStack_110 = FUN_102e8bfac;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0x42000000;
  puStack_120 = &UNK_1000f6b44;
  puStack_118 = &UNK_1105e0800;
  ppuVar9 = &puStack_130;
  puStack_108 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar8 = puStack_108;
  func_0x000107c61174();
  func_0x000107c61574(puVar8);
  func_0x000107c3dccc(0x3fc3333333333333,puVar7);
  func_0x000107c60bd0(ppuVar9);
  uVar11 = *(undefined8 *)(unaff_x20 + lVar4);
  *(long *)(unaff_x20 + lVar4) = lVar6;
  func_0x000107c61170(uVar11);
  return;
}



/* Entry: 102e8a294; end: 102e8a2e3; -[SCStoryScrubController handleGesture:] */

/* WARNING: Possible PIC construction at 0x000102e8a2cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e8a2d0) */

void FUN_102e8a294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102e895f8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102e8a2e4; end: 102e8a41b;  */

/* WARNING: Possible PIC construction at 0x000102e8a388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e8a38c) */
/* WARNING: Removing unreachable block (ram,0x000102e8a390) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8a2e4(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112f24380);
  if (uVar4 != 0) {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (uVar4 >> 0x3e == 0) {
      uVar3 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      uVar3 = uVar4;
      if (-1 < (long)uVar4) {
        uVar3 = uVar5;
      }
      func_0x000107c60480();
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8a3e0);
        (*pcVar1)();
      }
    }
    if (uVar3 != 0 && param_1 < uVar3) {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar5 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8a410);
          (*pcVar1)();
        }
        param_1 = *(ulong *)(uVar4 + param_1 * 8 + 0x20);
        func_0x000107c61174(param_1);
      }
      else {
        func_0x000107c61434(uVar4);
        func_0x0001002ec9a0(param_1,uVar4);
        func_0x000107c6142c(uVar4);
      }
      func_0x000107c4223c(param_1);
      func_0x000107c61170(param_1);
      lVar2 = unaff_x20 + _DAT_112f24348;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c5df08();
        func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
        return;
      }
    }
  }
  return;
}



/* Entry: 102e8a41c; end: 102e8a66f;  */

/* WARNING: Possible PIC construction at 0x000102e8a4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e8a50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e8a584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e8a594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e8a5a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e8a5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e8a5ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e8a618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e8a5cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e8a61c) */
/* WARNING: Removing unreachable block (ram,0x000102e8a5f0) */
/* WARNING: Removing unreachable block (ram,0x000102e8a5e0) */
/* WARNING: Removing unreachable block (ram,0x000102e8a5a8) */
/* WARNING: Removing unreachable block (ram,0x000102e8a5fc) */
/* WARNING: Removing unreachable block (ram,0x000102e8a598) */
/* WARNING: Removing unreachable block (ram,0x000102e8a588) */
/* WARNING: Removing unreachable block (ram,0x000102e8a510) */
/* WARNING: Removing unreachable block (ram,0x000102e8a640) */
/* WARNING: Removing unreachable block (ram,0x000102e8a648) */
/* WARNING: Removing unreachable block (ram,0x000102e8a654) */
/* WARNING: Removing unreachable block (ram,0x000102e8a518) */
/* WARNING: Removing unreachable block (ram,0x000102e8a520) */
/* WARNING: Removing unreachable block (ram,0x000102e8a524) */
/* WARNING: Removing unreachable block (ram,0x000102e8a5d8) */
/* WARNING: Removing unreachable block (ram,0x000102e8a52c) */
/* WARNING: Removing unreachable block (ram,0x000102e8a658) */
/* WARNING: Removing unreachable block (ram,0x000102e8a534) */
/* WARNING: Removing unreachable block (ram,0x000102e8a66c) */
/* WARNING: Removing unreachable block (ram,0x000102e8a544) */
/* WARNING: Removing unreachable block (ram,0x000102e8a554) */
/* WARNING: Removing unreachable block (ram,0x000102e8a4b8) */
/* WARNING: Removing unreachable block (ram,0x000102e8a5c8) */
/* WARNING: Removing unreachable block (ram,0x000102e8a4bc) */
/* WARNING: Removing unreachable block (ram,0x000102e8a614) */
/* WARNING: Removing unreachable block (ram,0x000102e8a4d0) */
/* WARNING: Removing unreachable block (ram,0x000102e8a5d0) */
/* WARNING: Removing unreachable block (ram,0x000102e8a628) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8a41c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f24370);
  if (lVar2 != 0) {
    lVar1 = unaff_x20 + _DAT_112f24340;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c61174();
      func_0x000107c3b9ac();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(param_2);
      }
      func_0x000107c4e9d8(lVar1);
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 102e8a670; end: 102e8a93b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8a670(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  func_0x000107c614f0();
  if (*(ulong *)(unaff_x20 + _DAT_112f24388) < 0xc) {
    return;
  }
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_1 == 0) {
    return;
  }
  lVar1 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  while ((PTR__OBJC_CLASS___UIControl_1126c3e60 = puVar2, lVar1 != 0 && (lVar1 != param_1))) {
    func_0x000107c61168(puVar2);
    lVar4 = lVar1;
    func_0x000107c6148c(lVar1,puVar2);
    if (lVar4 != 0) {
LAB_102e8a86c:
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar1);
      return;
    }
    puStack_c0 = PTR_DAT_1126a24d8;
    lVar4 = lVar1;
    func_0x000107c61494(lVar1,1,&puStack_c0);
    if (lVar4 != 0) goto LAB_102e8a86c;
    lVar4 = lVar1;
    func_0x000107c5c42c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar4;
    puVar2 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  }
  func_0x000107c4b8b8(param_2);
  func_0x000107c3ec60(param_1);
  func_0x000107c609cc();
  func_0x000107c3ec60(param_1);
  func_0x000107c609b0();
  func_0x000107c61428(unaff_x20 + _DAT_1138050f0,auStack_88,0,0);
  lVar4 = _DAT_1138050e8;
  func_0x000107c61428(unaff_x20 + _DAT_1138050e8,auStack_a0,0,0);
  if (*(char *)(unaff_x20 + lVar4) != '\x01') {
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar1);
    return;
  }
  lVar4 = unaff_x20 + _DAT_112f24348;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar3 = lVar4;
    func_0x000107c5d1b8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5d1b4(lVar3);
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      goto LAB_102e8a8a4;
    }
  }
  lVar4 = 0;
LAB_102e8a8a4:
  lVar3 = _DAT_1138050f8;
  func_0x000107c61428(unaff_x20 + _DAT_1138050f8,auStack_b8,0,0);
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618(lVar3);
  FUN_102e89500(param_1,lVar3,lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 102e8a93c; end: 102e8a9b3; -[SCStoryScrubController gestureRecognizer:shouldReceiveTouch:] */

uint FUN_102e8a93c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102e8a670(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102e8a9b4; end: 102e8aa43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102e8a9b4(double param_1,double param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f24358);
  if (lVar2 == 0 || param_3 != lVar2) {
    bVar1 = true;
  }
  else {
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c5dc98(lVar2,param_4,lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    bVar1 = ABS(param_2) < ABS(param_1);
  }
  return bVar1;
}



/* Entry: 102e8aa44; end: 102e8aa9f; -[SCStoryScrubController gestureRecognizerShouldBegin:] */

uint FUN_102e8aa44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102e8a9b4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102e8aaa0; end: 102e8aaa7; -[SCStoryScrubController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_102e8aaa0(void)

{
  return 1;
}



/* Entry: 102e8aaa8; end: 102e8ab03; -[SCStoryScrubController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e8aaa8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + _DAT_112f24358) != 0 && param_3 == *(long *)(param_1 + _DAT_112f24358)) {
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    func_0x000107c6148c(param_4,puVar1);
    if (param_4 != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 102e8ab04; end: 102e8b1a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8ab04(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x20;
  long lVar18;
  undefined8 uVar19;
  code *pcVar20;
  double dVar21;
  ulong uStack_110;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138050c8);
  func_0x000107c61428(puVar1,auStack_90,0,0);
  pcVar20 = (code *)*puVar1;
  if (pcVar20 != (code *)0x0) {
    uVar19 = puVar1[1];
    uVar3 = unaff_x20 + _DAT_112f24340;
    func_0x000107c61618();
    if (uVar3 != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112f24370);
      if (lVar4 == 0) {
        func_0x000107c615e8(uVar3);
      }
      else {
        func_0x000107c61174();
        uVar9 = uVar19;
        func_0x000100d298f4(pcVar20,uVar19);
        lVar5 = lVar4;
        func_0x000107c3b9ac();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar9);
        }
        uVar6 = uVar3;
        func_0x000107c4e9d8();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (uVar6 == 0) {
          func_0x000107c615e8(uVar3);
          func_0x000107c61170(lVar4);
        }
        else {
          uVar7 = uVar6;
          func_0x000107c444d0();
          func_0x000107c61180();
          if (uVar7 != 0) {
            uVar8 = uVar7;
            func_0x000107c4a7d4();
            func_0x000107c61180();
            uVar9 = 0x112f0a728;
            func_0x0001000285a8(0x112f0a728,&UNK_10db3d710);
            uVar11 = uVar8;
            func_0x000107c5fc54(uVar8,uVar9);
            func_0x000107c61170(uVar8);
            puVar10 = &UNK_1105e0900;
            func_0x000107c613fc(&UNK_1105e0900,0x18,7);
            func_0x000107c61614(puVar10 + 0x10,*(undefined8 *)(unaff_x20 + _DAT_112f243b0));
            lVar5 = _DAT_1138050f0;
            func_0x000107c61428(unaff_x20 + _DAT_1138050f0,auStack_a8,0,0);
            if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
              pcVar20 = (code *)SoftwareBreakpoint(1,0x102e8b16c);
              (*pcVar20)();
            }
            uVar8 = 0;
            if (3 < param_1) {
              uVar8 = param_1 - 4;
            }
            uVar16 = *(ulong *)(unaff_x20 + _DAT_112f24388);
            if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
              pcVar20 = (code *)SoftwareBreakpoint(1,0x102e8b170);
              (*pcVar20)();
            }
            if (SCARRY8(param_1,4)) {
                    /* WARNING: Does not return */
              pcVar20 = (code *)SoftwareBreakpoint(1,0x102e8b174);
              (*pcVar20)();
            }
            if (SCARRY8(param_1 + 4,1)) {
                    /* WARNING: Does not return */
              pcVar20 = (code *)SoftwareBreakpoint(1,0x102e8b178);
              (*pcVar20)();
            }
            uVar2 = param_1 + 5;
            if (uVar16 <= param_1 + 5) {
              uVar2 = uVar16;
            }
            if (*(char *)(unaff_x20 + _DAT_112f24378) != '\x01') {
              if (uVar2 < uVar8) {
                    /* WARNING: Does not return */
                pcVar20 = (code *)SoftwareBreakpoint(1,0x102e8b180);
                (*pcVar20)();
              }
              if (uVar8 == uVar2) {
                func_0x000100d29904(pcVar20,uVar19);
                func_0x000107c61574(puVar10);
                func_0x000107c615e8(uVar3);
                func_0x000107c615e8(uVar6);
                func_0x000107c615e8(uVar7);
                func_0x000107c6142c(uVar11);
                func_0x000107c61170(lVar4);
                return;
              }
              dVar21 = *(double *)(unaff_x20 + lVar5);
              if (uVar11 >> 0x3e == 0) {
                uVar16 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
              }
              else {
                uVar16 = uVar11 & 0xffffffffffffff8;
                if (0x7fffffffffffffff < uVar11) {
                  uVar16 = uVar11;
                }
                func_0x000107c60480();
              }
              lVar5 = _DAT_112f243b8;
              uStack_110 = uVar11 & 0xffffffffffffff8;
              func_0x000107c61428(unaff_x20 + _DAT_112f243b8,auStack_c0,0,0);
              do {
                if ((long)uVar2 <= (long)uVar8) {
                    /* WARNING: Does not return */
                  pcVar20 = (code *)SoftwareBreakpoint(1,0x102e8b164);
                  (*pcVar20)();
                }
                if ((long)uVar8 < (long)uVar16) {
                  lVar18 = *(long *)(unaff_x20 + lVar5);
                  if (*(long *)(lVar18 + 0x10) != 0) {
                    uVar13 = *(ulong *)(lVar18 + 0x28);
                    func_0x000107c60688(uVar13,uVar8);
                    uVar17 = -1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
                    uVar13 = uVar13 & (uVar17 ^ 0xffffffffffffffff);
                    if ((*(ulong *)(lVar18 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0)
                    {
                      do {
                        if (*(ulong *)(*(long *)(lVar18 + 0x30) + uVar13 * 8) == uVar8)
                        goto LAB_102e8afbc;
                        uVar13 = uVar13 + 1 & ~uVar17;
                      } while ((*(ulong *)(lVar18 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1
                               ) != 0);
                    }
                  }
                  func_0x000107c61428(unaff_x20 + lVar5,auStack_e0,0x21,0);
                  uVar13 = uVar8;
                  FUN_102e90110(auStack_c8);
                  func_0x000107c614a8(auStack_e0);
                  if ((uVar11 & 0xc000000000000001) == 0) {
                    if (*(long *)(uStack_110 + 0x10) <= (long)uVar8) {
                    /* WARNING: Does not return */
                      pcVar20 = (code *)SoftwareBreakpoint(1,0x102e8b168);
                      (*pcVar20)();
                    }
                    uVar17 = *(ulong *)(uVar11 + 0x20 + uVar8 * 8);
                    func_0x000107c615f0(uVar17);
                  }
                  else {
                    uVar17 = uVar8;
                    uVar13 = uVar11;
                    func_0x000102cbd6a8();
                  }
                  uVar14 = uVar17;
                  func_0x000107c3b9ac();
                  func_0x000107c61180();
                  uVar15 = uVar14;
                  func_0x000107c5faec();
                  func_0x000107c61170(uVar14);
                  uVar14 = uVar15 & 0xffffffffffff;
                  if ((uVar13 & 0x2000000000000000) != 0) {
                    uVar14 = uVar13 >> 0x38 & 0xf;
                  }
                  if (uVar14 == 0) {
                    func_0x000107c6142c(uVar13);
                    puVar12 = puVar10 + 0x10;
                    func_0x000107c61618();
                    if (puVar12 != (undefined *)0x0) {
                      FUN_102e8d288(uVar8);
                      func_0x000107c61170(puVar12);
                    }
                    func_0x000107c615e8(uVar17);
                  }
                  else {
                    puVar12 = &UNK_1105e0928;
                    func_0x000107c613fc(&UNK_1105e0928,0x20,7);
                    *(undefined **)(puVar12 + 0x10) = puVar10;
                    *(ulong *)(puVar12 + 0x18) = uVar8;
                    func_0x000107c6157c();
                    (*pcVar20)(dVar21 * 64.0 * 1.35,dVar21 * 114.0 * 1.35,uVar17,uVar3,uVar15,uVar13
                               ,0x102e8bfe4,puVar12);
                    func_0x000107c615e8(uVar17);
                    func_0x000107c6142c(uVar13);
                    func_0x000107c61574(puVar12);
                  }
                }
LAB_102e8afbc:
                uVar8 = uVar8 + 1;
                if (uVar8 == uVar2) {
                  func_0x000100d29904(pcVar20,uVar19);
                  func_0x000107c61574(puVar10);
                  func_0x000107c615e8(uVar3);
                  func_0x000107c615e8(uVar6);
                  func_0x000107c615e8(uVar7);
                  func_0x000107c6142c(uVar11);
                  func_0x000107c61170(lVar4);
                  return;
                }
              } while( true );
            }
            func_0x000107c6142c(uVar11);
            lVar5 = _DAT_112f243b8;
            if (uVar2 < uVar8) {
                    /* WARNING: Does not return */
              pcVar20 = (code *)SoftwareBreakpoint(1,0x102e8b17c);
              (*pcVar20)();
            }
            if (uVar8 != uVar2) {
              func_0x000107c61428(unaff_x20 + _DAT_112f243b8,auStack_c0,0,0);
              do {
                if ((long)uVar2 <= (long)uVar8) {
                    /* WARNING: Does not return */
                  pcVar20 = (code *)SoftwareBreakpoint(1,0x102e8b160);
                  (*pcVar20)();
                }
                lVar18 = *(long *)(unaff_x20 + lVar5);
                if (*(long *)(lVar18 + 0x10) != 0) {
                  uVar11 = *(ulong *)(lVar18 + 0x28);
                  func_0x000107c60688(uVar11,uVar8);
                  uVar16 = -1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
                  uVar11 = uVar11 & (uVar16 ^ 0xffffffffffffffff);
                  if ((*(ulong *)(lVar18 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
                    do {
                      if (*(ulong *)(*(long *)(lVar18 + 0x30) + uVar11 * 8) == uVar8)
                      goto LAB_102e8ae08;
                      uVar11 = uVar11 + 1 & ~uVar16;
                    } while ((*(ulong *)(lVar18 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1)
                             != 0);
                  }
                }
                func_0x000107c61428(unaff_x20 + lVar5,auStack_e0,0x21,0);
                FUN_102e90110(auStack_c8,uVar8);
                func_0x000107c614a8(auStack_e0);
                puVar12 = puVar10 + 0x10;
                func_0x000107c61618();
                if (puVar12 != (undefined *)0x0) {
                  FUN_102e8d288(uVar8);
                  func_0x000107c61170(puVar12);
                }
LAB_102e8ae08:
                uVar8 = uVar8 + 1;
              } while (uVar8 != uVar2);
            }
            func_0x000100d29904(pcVar20,uVar19);
            func_0x000107c615e8(uVar3);
            func_0x000107c615e8(uVar6);
            func_0x000107c615e8(uVar7);
            func_0x000107c61170(lVar4);
            func_0x000107c61574(puVar10);
            return;
          }
          func_0x000107c615e8(uVar3);
          func_0x000107c61170(lVar4);
          func_0x000107c615e8(uVar6);
        }
        func_0x000100d29904(pcVar20,uVar19);
      }
    }
  }
  return;
}



/* Entry: 102e8b1a4; end: 102e8b227;  */

/* WARNING: Possible PIC construction at 0x000102e8b1ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e8b1f0) */

void FUN_102e8b1a4(long param_1,long param_2,undefined8 param_3)

{
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    if (param_2 == 0) {
      return;
    }
    FUN_102e8d288(param_3);
  }
  else {
    if (param_2 == 0) {
      return;
    }
    func_0x000107c61174(param_1);
    FUN_102e8d4a8(param_1,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102e8b228; end: 102e8b3e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8b228(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar7 = *(long *)(param_1 + _DAT_112f243c0);
    if (lVar7 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar3 = &UNK_1105e0b58;
      func_0x000107c613fc(&UNK_1105e0b58,0x18,7);
      *(long *)(puVar3 + 0x10) = lVar7;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x102e8c1f0;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1000f6b44;
      puStack_80 = &UNK_1105e0b70;
      ppuVar4 = &puStack_98;
      puStack_70 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar3 = puStack_70;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61574(puVar3);
      puVar3 = &UNK_1105e0888;
      func_0x000107c613fc(&UNK_1105e0888,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_1);
      puVar5 = &UNK_1105e0ba8;
      func_0x000107c613fc(&UNK_1105e0ba8,0x20,7);
      *(long *)(puVar5 + 0x10) = lVar7;
      *(undefined **)(puVar5 + 0x18) = puVar3;
      uStack_78 = 0x102e8c200;
      puStack_98 = puVar1;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_100288f10;
      puStack_80 = &UNK_1105e0bc0;
      ppuVar6 = &puStack_98;
      puStack_70 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar3 = puStack_70;
      func_0x000107c61174(lVar7);
      func_0x000107c61574(puVar3);
      func_0x000107c3dcd0(0x3fd3333333333333,puVar2);
      func_0x000107c61170(param_1);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c60bd0(ppuVar4);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102e8b3e8; end: 102e8b4b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8b3e8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c4ff34(param_2);
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + _DAT_112f243c0);
    lVar2 = lVar4;
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    if ((lVar4 != 0) && (func_0x000107c61170(lVar2), param_2 == lVar2)) {
      func_0x000107c61428(param_3 + 0x10,auStack_70,0,0);
      param_3 = param_3 + 0x10;
      func_0x000107c61618();
      if (param_3 != 0) {
        uVar3 = *(undefined8 *)(param_3 + _DAT_112f243c0);
        *(undefined8 *)(param_3 + _DAT_112f243c0) = 0;
        func_0x000107c61170();
        func_0x000107c61170(uVar3);
      }
    }
  }
  return;
}



/* Entry: 102e8b4b8; end: 102e8b87f;  */

ulong FUN_102e8b4b8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  
  if (param_5 == 0) {
LAB_102e8b7a0:
    uVar7 = 0;
  }
  else {
    func_0x000107c61174();
    uVar8 = param_5;
    func_0x000107c3f9e0();
    func_0x000107c61180();
    uVar2 = 0;
    FUN_102e8c050(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
    uVar3 = uVar8;
    func_0x000107c5fc54(uVar8,uVar2);
    func_0x000107c61170(uVar8);
    uVar8 = uVar3 & 0xffffffffffffff8;
    if (uVar3 >> 0x3e == 0) {
      uVar5 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar5 = uVar8;
      if (0x7fffffffffffffff < uVar3) {
        uVar5 = uVar3;
      }
      func_0x000107c60480();
    }
    uVar6 = 0;
    do {
      if (uVar5 == uVar6) {
        func_0x000107c6142c(uVar3);
        puStack_a8 = PTR_DAT_1126a1e40;
        uVar8 = param_5;
        func_0x000107c61494(param_5,1,&puStack_a8);
        if (uVar8 != 0) {
          uVar8 = param_5;
          func_0x000107c4e360();
          func_0x000107c61180();
          if (uVar8 != 0) {
            puStack_b0 = PTR_DAT_1126a1e40;
            uVar3 = uVar8;
            func_0x000107c61494();
            if (uVar3 != 0) {
              puStack_b8 = PTR_DAT_1126a1e40;
              uVar3 = param_5;
              func_0x000107c61494(param_5,1,&puStack_b8);
              if (((uVar3 != 0) && (func_0x000107c4a158(), (int)uVar3 != 0)) ||
                 (uVar3 = param_5, func_0x000107c4a714(), (uVar3 & 1) == 0)) {
                func_0x000107c61170(param_5);
                param_5 = uVar8;
                goto LAB_102e8b79c;
              }
              uVar3 = param_5;
              func_0x000107c5de64();
              func_0x000107c61180();
              if (uVar3 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8b874);
                (*pcVar1)();
              }
              uVar5 = uVar3;
              func_0x000107c5e3f8();
              func_0x000107c61180();
              func_0x000107c61170(uVar3);
              if (uVar5 != 0) {
                uVar3 = param_5;
                func_0x000107c5de64();
                func_0x000107c61180();
                if (uVar3 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8b878);
                  (*pcVar1)();
                }
                func_0x000107c3ec60();
                func_0x000107c61170(uVar3);
                func_0x000107c609b0(param_1,param_2,param_3,param_4);
                if (0.0 < param_1) {
                  uVar3 = param_5;
                  func_0x000107c5de64();
                  func_0x000107c61180();
                  if (uVar3 == 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8b87c);
                    (*pcVar1)();
                  }
                  uVar6 = param_5;
                  func_0x000107c5de64();
                  func_0x000107c61180();
                  if (uVar6 == 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8b880);
                    (*pcVar1)();
                  }
                  func_0x000107c3ec60();
                  func_0x000107c61170(uVar6);
                  func_0x000107c40740(param_1,param_2,param_3,param_4,uVar3);
                  dVar9 = param_1;
                  uVar2 = param_2;
                  uVar11 = param_3;
                  uVar12 = param_4;
                  func_0x000107c61170(uVar3);
                  func_0x000107c3ec60(uVar5);
                  func_0x000107c609bc(param_1,param_2,param_3,param_4);
                  dVar10 = dVar9;
                  func_0x000107c609c4(dVar9,uVar2,uVar11,uVar12);
                  if (dVar10 <= param_1) {
                    func_0x000107c609b4(dVar9,uVar2,uVar11,uVar12);
                    func_0x000107c61170(uVar5);
                    func_0x000107c61170(uVar8);
                    if (param_1 <= dVar9) {
                      puStack_c0 = PTR_DAT_1126a1e40;
                      uVar8 = param_5;
                      func_0x000107c61494(param_5,1,&puStack_c0);
                      if (uVar8 != 0) {
                        return uVar8;
                      }
                      func_0x000107c61170(param_5);
                      return 0;
                    }
                    goto LAB_102e8b79c;
                  }
                }
                func_0x000107c61170(uVar5);
              }
            }
            func_0x000107c61170(uVar8);
          }
        }
LAB_102e8b79c:
        func_0x000107c61170(param_5);
        goto LAB_102e8b7a0;
      }
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar8 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8b800);
          (*pcVar1)();
        }
        uVar4 = *(ulong *)(uVar3 + uVar6 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar6;
        func_0x000100f3b77c(uVar6,uVar3);
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8b5b0);
        (*pcVar1)();
      }
      uVar7 = uVar4;
      FUN_102e8b4b8();
      func_0x000107c61170(uVar4);
      uVar6 = uVar6 + 1;
    } while (uVar7 == 0);
    func_0x000107c61170(param_5);
    func_0x000107c6142c(uVar3);
  }
  return uVar7;
}



/* Entry: 102e8b880; end: 102e8b887; +[SCStoryScrubController segmentIndexForXPosition:inWidth:segmentCount:] */

ulong FUN_102e8b880(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5)

{
  ulong uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  
  if (param_2 <= 0.0 || param_5 == 0) {
    return 0;
  }
  param_1 = param_1 / param_2;
  dVar4 = param_1;
  if (param_1 < 0.0) {
    dVar4 = 0.0;
  }
  dVar3 = 1.0;
  if (param_1 <= 1.0) {
    dVar3 = dVar4;
  }
  dVar3 = dVar3 * (double)param_5;
  if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102e8be5c);
    (*pcVar2)();
  }
  if (dVar3 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102e8be60);
    (*pcVar2)();
  }
  if (dVar3 < 1.8446744073709552e+19) {
    uVar1 = param_5 - 1;
    if ((ulong)(long)dVar3 <= param_5 - 1) {
      uVar1 = (long)dVar3;
    }
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e8be64);
  (*pcVar2)();
}



/* Entry: 102e8b888; end: 102e8b893; +[SCStoryScrubController relativeSegmentIndexFromStartIndex:startTouchX:currentTouchX:bandWidth:segmentCount:] */

ulong FUN_102e8b888(double param_1,double param_2,double param_3,undefined8 param_4,
                   undefined8 param_5,ulong param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  
  if (param_7 == 0) {
    return 0;
  }
  uVar1 = param_7 - 1;
  if (SBORROW8(param_7,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdb0);
    (*pcVar3)();
  }
  if ((long)(param_7 | param_6) < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdb4);
    (*pcVar3)();
  }
  uVar4 = uVar1;
  if ((long)param_6 <= (long)uVar1) {
    uVar4 = param_6;
  }
  if ((param_3 <= 0.0) || (param_7 == 1)) {
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bd1c);
      (*pcVar3)();
    }
  }
  else {
    param_2 = param_2 - param_1;
    if (0.0 <= param_2) {
      if (SBORROW8(uVar1,uVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdbc);
        (*pcVar3)();
      }
      param_3 = param_3 - param_1;
      if (param_3 <= 1.0) {
        param_3 = 1.0;
      }
      dVar5 = 1.0;
      if (param_2 / param_3 <= 1.0) {
        dVar5 = param_2 / param_3;
      }
      dVar6 = (double)(uVar1 - uVar4);
      if (0x7fffffffffffffff < uVar1 - uVar4) {
        dVar6 = 0.0;
      }
      dVar5 = (double)(long)(dVar5 * dVar6);
      if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdc4);
        (*pcVar3)();
      }
      if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdcc);
        (*pcVar3)();
      }
      if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdd4);
        (*pcVar3)();
      }
      uVar2 = uVar4 + (long)dVar5;
      if (SCARRY8(uVar4,(long)dVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdd8);
        (*pcVar3)();
      }
      uVar4 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
      if (uVar1 <= uVar4) {
        uVar4 = uVar1;
      }
      if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bddc);
        (*pcVar3)();
      }
    }
    else {
      if (param_1 <= 1.0) {
        param_1 = 1.0;
      }
      dVar5 = 1.0;
      if (-param_2 / param_1 <= 1.0) {
        dVar5 = -param_2 / param_1;
      }
      dVar5 = (double)(long)(dVar5 * (double)(long)uVar4);
      if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdb8);
        (*pcVar3)();
      }
      if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdc0);
        (*pcVar3)();
      }
      if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdc8);
        (*pcVar3)();
      }
      uVar2 = uVar4 - (long)dVar5;
      if (SBORROW8(uVar4,(long)dVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdd0);
        (*pcVar3)();
      }
      uVar4 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
      if (uVar1 <= uVar4) {
        uVar4 = uVar1;
      }
      if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bd0c);
        (*pcVar3)();
      }
    }
  }
  return uVar4;
}



/* Entry: 102e8b894; end: 102e8b98b;  */

void FUN_102e8b894(double param_1,undefined8 param_2,double param_3,long param_4,long param_5,
                  long param_6,double *param_7)

{
  long lVar1;
  
  if ((param_5 != 0) && (param_4 != param_5)) {
    func_0x000107c61174();
    lVar1 = param_5;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c61170();
      func_0x000107c3ec60(param_5);
      func_0x000107c609b0();
      if (0.0 < param_1) {
        func_0x000107c3ec60(param_5);
        func_0x000107c4073c(param_5);
        if (param_7 != (double *)0x0) {
          func_0x000107c609b8();
          *param_7 = param_1;
        }
        func_0x000107c61170(param_5);
        return;
      }
    }
    func_0x000107c61170(param_5);
  }
  FUN_102e8b4b8();
  if (param_6 != 0) {
    func_0x000107c61170();
    func_0x000107c515a0(param_4);
    if (param_7 != (double *)0x0) {
      func_0x000107c3ec60(param_4);
      func_0x000107c609b0();
      *param_7 = (param_1 - param_3) + -80.0;
    }
  }
  return;
}



/* Entry: 102e8b98c; end: 102e8ba2f; +[SCStoryScrubController tryResolveBottomYInHostView:explicitAnchor:operaVC:outY:] */

uint FUN_102e8b98c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c614ec();
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  uVar2 = param_5;
  func_0x000107c61174(param_5);
  uVar3 = param_3;
  FUN_102e8b894(param_3,param_4,param_5,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  return (uint)uVar3 & 1;
}



/* Entry: 102e8ba30; end: 102e8ba73;  */

void FUN_102e8ba30(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8) = param_2;
  *(undefined8 *)(*(long *)(param_4 + 0x38) + param_1 * 8) = param_3;
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e8ba74);
  (*pcVar2)();
}



/* Entry: 102e8ba74; end: 102e8bb53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8ba74(long *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  if (*(char *)(unaff_x20 + _DAT_112f24390) == '\x01') {
    plVar1 = param_1;
    func_0x000103bb9c00();
    if (((param_1 == (long *)*plVar1 && param_2 == plVar1[1]) ||
        (func_0x000107c605b8(param_1,param_2,(long *)*plVar1,plVar1[1],0), ((ulong)param_1 & 1) != 0
        )) && (param_3 != (undefined8 *)0x0)) {
      func_0x000107c61174();
      puVar2 = param_3;
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar3 = *puVar2;
      func_0x000107c61174(uVar3);
      func_0x0001000b0da8(0xd000000000000024,0x800000010f112710,FUN_102e8c014,auStack_70);
      func_0x000107c61170(param_3);
      func_0x000107c61170(uVar3);
    }
  }
  return;
}



/* Entry: 102e8bb54; end: 102e8bc57;  */

undefined * FUN_102e8bb54(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  func_0x0001000285a8(0x112f24430);
  puVar2 = puVar8;
  func_0x000107c60498();
  uVar9 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar9;
  FUN_102e8fd34();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar7 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar9;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8bc58);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c61174();
        return puVar2;
      }
      uVar9 = puVar6[-1];
      uVar4 = *puVar6;
      func_0x000107c61174();
      uVar3 = uVar9;
      FUN_102e8fd34();
      puVar6 = puVar6 + 2;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8bc28);
  (*pcVar1)();
}



/* Entry: 102e8bc58; end: 102e8be63;  */

ulong FUN_102e8bc58(double param_1,double param_2,double param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  
  if (param_5 == 0) {
    return 0;
  }
  uVar1 = param_5 - 1;
  if (SBORROW8(param_5,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdb0);
    (*pcVar3)();
  }
  if ((long)(param_5 | param_4) < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdb4);
    (*pcVar3)();
  }
  uVar4 = uVar1;
  if ((long)param_4 <= (long)uVar1) {
    uVar4 = param_4;
  }
  if ((param_3 <= 0.0) || (param_5 == 1)) {
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bd1c);
      (*pcVar3)();
    }
  }
  else {
    param_2 = param_2 - param_1;
    if (0.0 <= param_2) {
      if (SBORROW8(uVar1,uVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdbc);
        (*pcVar3)();
      }
      param_3 = param_3 - param_1;
      if (param_3 <= 1.0) {
        param_3 = 1.0;
      }
      dVar5 = 1.0;
      if (param_2 / param_3 <= 1.0) {
        dVar5 = param_2 / param_3;
      }
      dVar6 = (double)(uVar1 - uVar4);
      if (0x7fffffffffffffff < uVar1 - uVar4) {
        dVar6 = 0.0;
      }
      dVar5 = (double)(long)(dVar5 * dVar6);
      if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdc4);
        (*pcVar3)();
      }
      if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdcc);
        (*pcVar3)();
      }
      if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdd4);
        (*pcVar3)();
      }
      uVar2 = uVar4 + (long)dVar5;
      if (SCARRY8(uVar4,(long)dVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdd8);
        (*pcVar3)();
      }
      uVar4 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
      if (uVar1 <= uVar4) {
        uVar4 = uVar1;
      }
      if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bddc);
        (*pcVar3)();
      }
    }
    else {
      if (param_1 <= 1.0) {
        param_1 = 1.0;
      }
      dVar5 = 1.0;
      if (-param_2 / param_1 <= 1.0) {
        dVar5 = -param_2 / param_1;
      }
      dVar5 = (double)(long)(dVar5 * (double)(long)uVar4);
      if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdb8);
        (*pcVar3)();
      }
      if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdc0);
        (*pcVar3)();
      }
      if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdc8);
        (*pcVar3)();
      }
      uVar2 = uVar4 - (long)dVar5;
      if (SBORROW8(uVar4,(long)dVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bdd0);
        (*pcVar3)();
      }
      uVar4 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
      if (uVar1 <= uVar4) {
        uVar4 = uVar1;
      }
      if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8bd0c);
        (*pcVar3)();
      }
    }
  }
  return uVar4;
}



/* Entry: 102e8be64; end: 102e8be83;  */

void FUN_102e8be64(void)

{
  func_0x000107c61168(&PTR_PTR_1128a9ab0);
  return;
}



/* Entry: 102e8be84; end: 102e8be8b;  */

void FUN_102e8be84(void)

{
  if (lRam0000000112f24420 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e736e88);
  return;
}



/* Entry: 102e8be8c; end: 102e8bec3;  */

void FUN_102e8be8c(undefined8 param_1)

{
  if (lRam0000000112f24420 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e736e88);
  return;
}



/* Entry: 102e8bec4; end: 102e8bfab;  */

void FUN_102e8bec4(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puStack_120 = &UNK_10db5efc8;
  puStack_118 = &UNK_10db5efc8;
  puStack_110 = &UNK_10db5efc8;
  puStack_108 = &UNK_10db5efe0;
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_f0 = &UNK_10db5efe0;
  puStack_e8 = &UNK_10db5eff8;
  puStack_e0 = &UNK_10db5efe0;
  puStack_d0 = &UNK_10db5eff8;
  puStack_a8 = PTR___sBbWV_11034d660 + 0x40;
  puStack_b0 = &UNK_10db5efe0;
  puStack_a0 = &UNK_10db5efe0;
  lVar2 = 0x13f;
  puStack_100 = puVar1;
  puStack_f8 = puVar1;
  puStack_d8 = puVar1;
  puStack_c8 = puVar1;
  puStack_c0 = puVar1;
  puStack_b8 = puVar1;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_98 = *(long *)(lVar2 + -8) + 0x40;
    puStack_90 = &UNK_10db5f010;
    puStack_88 = &UNK_10db5eff8;
    puStack_80 = &UNK_10db5eff8;
    puStack_78 = &UNK_10db5efe0;
    puStack_70 = &UNK_10db5eff8;
    puStack_60 = &UNK_10db5efc8;
    puStack_58 = &UNK_10db5f010;
    puStack_50 = &UNK_10db5f010;
    puStack_48 = &UNK_10db5eff8;
    puStack_68 = puVar1;
    func_0x000107c61630(param_1,0x100,0x1c,&puStack_120,param_1 + 0x50);
  }
  return;
}



/* Entry: 102e8bfac; end: 102e8c013;  */

void FUN_102e8bfac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 102e8c014; end: 102e8c037;  */

void FUN_102e8c014(void)

{
  long unaff_x20;
  
  FUN_102e8743c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102e8c038; end: 102e8c04f;  */

void FUN_102e8c038(void)

{
  FUN_102e888d8();
  return;
}



/* Entry: 102e8c050; end: 102e8c0cf;  */

void FUN_102e8c050(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102e8c0d0; end: 102e8c0e3;  */

void FUN_102e8c0d0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 102e8c0e4; end: 102e8c10f;  */

void FUN_102e8c0e4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102e8c110; end: 102e8c197;  */

undefined8 FUN_102e8c110(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102e8c198; end: 102e8c20b;  */

void FUN_102e8c198(long param_1,long param_2)

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



/* Entry: 102e8c20c; end: 102e8c237; +[SCStoryScrubEvents storyScrubBegan] */

void FUN_102e8c20c(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f1126d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e8c238; end: 102e8c263; +[SCStoryScrubEvents storyScrubEnded] */

void FUN_102e8c238(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f1127c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e8c264; end: 102e8c267; -[SCStoryScrubEvents .cxx_destruct] */

void FUN_102e8c264(void)

{
  return;
}



/* Entry: 102e8c268; end: 102e8c293; +[SCStoryScrubEventsDictKeys targetSnapIndex] */

void FUN_102e8c268(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f1126f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e8c294; end: 102e8c2bf; +[SCStoryScrubEventsDictKeys scrubStartIndex] */

void FUN_102e8c294(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f1127e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e8c2c0; end: 102e8c2eb; +[SCStoryScrubEventsDictKeys scrubSnapDelta] */

void FUN_102e8c2c0(void)

{
  func_0x000107c5fadc(0xd000000000000010,0x800000010f112800);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e8c2ec; end: 102e8c317; +[SCStoryScrubEventsDictKeys scrubDurationMs] */

void FUN_102e8c2ec(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f112820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e8c318; end: 102e8c343; +[SCStoryScrubEventsDictKeys scrubSegmentCount] */

void FUN_102e8c318(void)

{
  func_0x000107c5fadc(0xd000000000000013,0x800000010f112840);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e8c344; end: 102e8c36f; +[SCStoryScrubEventsDictKeys scrubIsVideoChapter] */

void FUN_102e8c344(void)

{
  func_0x000107c5fadc(0xd000000000000016,0x800000010f112860);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e8c370; end: 102e8c3ab;  */

void FUN_102e8c370(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e8c3ac; end: 102e8c3af;  */

void FUN_102e8c3ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e8c3b0; end: 102e8c3e3;  */

void FUN_102e8c3b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e8c3e4; end: 102e8c3e7; -[SCStoryScrubEventsDictKeys .cxx_destruct] */

void FUN_102e8c3e4(void)

{
  return;
}



/* Entry: 102e8c3e8; end: 102e8c427;  */

void FUN_102e8c3e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128a9d30);
  return;
}



/* Entry: 102e8c428; end: 102e8c42b; -[SCStoryScrubEvents init] */

void FUN_102e8c428(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e8c42c; end: 102e8c433; -[SCStoryScrubEventsDictKeys init] */

void FUN_102e8c42c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e8c434; end: 102e8c50f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8c434(double param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112f24498;
  func_0x000107c61428(unaff_x20 + _DAT_112f24498,auStack_58,1,0);
  dVar3 = *(double *)(unaff_x20 + lVar1);
  *(double *)(unaff_x20 + lVar1) = param_1;
  lVar1 = _DAT_112f244a8;
  if (param_1 != dVar3) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f244a0);
    dVar3 = *(double *)(lVar2 + _DAT_112f244a8);
    *(double *)(lVar2 + _DAT_112f244a8) = param_1;
    if (param_1 != dVar3) {
      func_0x000107c55928(param_1 * 64.0,param_1 * 114.0,lVar2);
      func_0x000107c566fc(*(double *)(lVar2 + lVar1) * 8.0,lVar2);
      func_0x000107c4990c(lVar2);
    }
    func_0x000107c56a14();
    func_0x000107c4fd7c(*(undefined8 *)(unaff_x20 + _DAT_112f244b0));
  }
  return;
}



/* Entry: 102e8c510; end: 102e8d13f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8c510(double param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [32];
  
  lVar1 = _DAT_112f244b8;
  func_0x000107c61428(unaff_x20 + _DAT_112f244b8,auStack_a0,1,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar4);
  lVar1 = _DAT_112f244c0;
  func_0x000107c61428(unaff_x20 + _DAT_112f244c0,auStack_b8,1,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar4);
  lVar1 = _DAT_112f244c8;
  func_0x000107c61428(unaff_x20 + _DAT_112f244c8,auStack_d0,1,0);
  uVar11 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar11 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar12 = uVar11;
    }
    func_0x000107c60480();
  }
  if (uVar12 != 0) {
    if ((long)uVar12 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8c908);
      (*pcVar3)();
    }
    func_0x000107c61434(uVar11);
    uVar13 = 0;
    do {
      if ((uVar11 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar11 + uVar13 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar13;
        FUN_102e8fb00(uVar13,uVar11,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
      }
      uVar13 = uVar13 + 1;
      func_0x000107c4ff34();
      func_0x000107c61170(uVar5);
    } while (uVar12 != uVar13);
    func_0x000107c6142c(uVar11);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar4);
  lVar2 = _DAT_112f244d0;
  func_0x000107c61428(unaff_x20 + _DAT_112f244d0,auStack_e8,0,0);
  if (*(long *)(unaff_x20 + lVar2) != 0) {
    func_0x000107c56a14();
    func_0x000107c4abfc();
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f24490);
    func_0x000107c3ec60(uVar4);
    func_0x000107c609cc();
    uVar11 = *(ulong *)(unaff_x20 + lVar2);
    if (uVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8c90c);
      (*pcVar3)();
    }
    dVar14 = (param_1 - (double)(uVar11 - 1) * 1.5) / (double)uVar11;
    dVar15 = 0.0;
    dVar16 = param_1 / (double)uVar11;
    if (1.0 <= dVar14) {
      dVar15 = 1.5;
      dVar16 = dVar14;
    }
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    uVar12 = 0;
    do {
      if (uVar11 == uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e8c8e8);
        (*pcVar3)();
      }
      puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c610f8();
      func_0x000107c469a4((dVar16 + dVar15) * (double)uVar12,0,dVar16,0x4008000000000000);
      puVar8 = puVar6;
      func_0x000107c5af88(puVar6);
      func_0x000107c61180();
      func_0x000107c52b50(puVar7);
      func_0x000107c61170(puVar8);
      puVar8 = puVar7;
      func_0x000107c4aba4(puVar7);
      func_0x000107c61180();
      func_0x000107c539d4(0x3ff8000000000000);
      func_0x000107c61170(puVar8);
      func_0x000107c3d89c(uVar4);
      func_0x000107c61428(unaff_x20 + lVar1,auStack_100,0x21,0);
      uVar5 = *(ulong *)(unaff_x20 + lVar1);
      func_0x000107c61174();
      uVar13 = uVar5;
      func_0x000107c61550();
      *(ulong *)(unaff_x20 + lVar1) = uVar5;
      if ((((int)uVar13 == 0) || ((long)uVar5 < 0)) || (uVar13 = uVar5, (uVar5 >> 0x3e & 1) != 0)) {
        if (uVar5 >> 0x3e == 0) {
          uVar9 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar9 = uVar5 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar5) {
            uVar9 = uVar5;
          }
          func_0x000107c60480(uVar9);
        }
        uVar13 = 0;
        FUN_102e8fe04(0,uVar9 + 1,1,uVar5,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,
                      0x112d36e80,&UNK_10d904c70);
        *(ulong *)(unaff_x20 + lVar1) = uVar13;
      }
      uVar10 = uVar13 & 0xffffffffffffff8;
      uVar5 = *(ulong *)(uVar10 + 0x10);
      uVar9 = uVar13;
      if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar5) {
        uVar9 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
        FUN_102e8fe04(uVar9,uVar5 + 1,1,uVar13,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,
                      0x112d36e80,&UNK_10d904c70);
        uVar10 = uVar9 & 0xffffffffffffff8;
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(uVar10 + 0x10) = uVar5 + 1;
      *(undefined **)(uVar10 + uVar5 * 8 + 0x20) = puVar7;
      *(ulong *)(unaff_x20 + lVar1) = uVar9;
      func_0x000107c614a8(auStack_100);
      func_0x000107c61170(puVar7);
    } while (uVar11 != uVar12);
    func_0x000107c4fd7c(*(undefined8 *)(unaff_x20 + _DAT_112f244b0));
  }
  return;
}



/* Entry: 102e8d140; end: 102e8d287;  */

void FUN_102e8d140(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar3 = &UNK_1105e0bf8;
  func_0x000107c613fc(&UNK_1105e0bf8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x102e8fdf0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1105e0c10;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1105e0c48;
  func_0x000107c613fc(&UNK_1105e0c48,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  uStack_60 = 0x102e8fdfc;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100288f10;
  puStack_68 = &UNK_1105e0c60;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(unaff_x20);
  func_0x000107c61574(puVar3);
  func_0x000107c3dcd0(0x3fc999999999999a,puVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 102e8d288; end: 102e8d4a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8d288(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long alStack_80 [3];
  undefined1 auStack_68 [8];
  
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112f244c0,alStack_80,0x21,0);
  FUN_102e90110(auStack_68,param_1);
  func_0x000107c614a8(alStack_80);
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8d4a8);
    (*pcVar1)();
  }
  lVar3 = param_1;
  func_0x000107c5efe8(lVar9,param_1,0);
  lVar10 = *(long *)(unaff_x20 + _DAT_112f244b0);
  func_0x000107c5efd4();
  func_0x000107c3f730();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar10 != 0) {
    FUN_102e901e4();
    lVar4 = lVar10;
    func_0x000107c61480(lVar10,lVar3);
    lVar3 = _DAT_112f244f8;
    if (lVar4 != 0) {
      uVar8 = *(undefined8 *)(lVar4 + _DAT_112f244f8);
      func_0x000107c4aba4(uVar8);
      func_0x000107c61180();
      uVar5 = 0x61704f65736c7570;
      func_0x000107c5fadc(0x61704f65736c7570,0xec00000079746963);
      func_0x000107c4fe90(uVar8);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar5);
      func_0x000107c550d8(*(undefined8 *)(lVar4 + lVar3));
      lVar3 = _DAT_112f24500;
      func_0x000107c550d8(*(undefined8 *)(lVar4 + _DAT_112f24500));
      alStack_80[0] = param_1 + 1;
      uVar8 = *(undefined8 *)(lVar4 + lVar3);
      puVar6 = PTR___sSuN_11034e220;
      puVar7 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar7);
      func_0x000107c59c6c(uVar8);
      func_0x000107c61170(puVar6);
      (**(code **)(lVar11 + 8))(lVar9,lVar2);
      func_0x000107c61170(lVar10);
      return;
    }
    func_0x000107c61170(lVar10);
  }
  (**(code **)(lVar11 + 8))(lVar9,lVar2);
  return;
}



/* Entry: 102e8d4a8; end: 102e8d7fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8d4a8(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  long lVar11;
  double dVar12;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar5 = _DAT_112f24498;
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61428(unaff_x20 + _DAT_112f24498,auStack_88,0,0);
  dVar12 = *(double *)(unaff_x20 + lVar5);
  func_0x000107c61174();
  lVar3 = param_1;
  FUN_102e90d18(dVar12 * 64.0,dVar12 * 114.0,0x4018000000000000);
  lVar5 = _DAT_112f244b8;
  func_0x000107c61428(unaff_x20 + _DAT_112f244b8,&puStack_c0,0x21,0);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c61558(uVar4);
  uStack_90 = *(undefined8 *)(unaff_x20 + lVar5);
  *(undefined8 *)(unaff_x20 + lVar5) = 0x8000000000000000;
  FUN_102e90860(lVar3,param_2,uVar4);
  *(undefined8 *)(unaff_x20 + lVar5) = uStack_90;
  func_0x000107c614a8(&puStack_c0);
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8d7fc);
    (*pcVar1)();
  }
  func_0x000107c5efe8(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,0);
  lVar10 = *(long *)(unaff_x20 + _DAT_112f244b0);
  func_0x000107c5efd4();
  func_0x000107c3f730();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  lVar5 = lVar3;
  if (lVar10 != 0) {
    FUN_102e901e4();
    lVar5 = lVar10;
    func_0x000107c61480(lVar10,param_2);
    if (lVar5 != 0) {
      uVar4 = *(undefined8 *)(lVar5 + _DAT_112f24508);
      func_0x000107c61174(uVar4);
      func_0x000107c55258();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(lVar3);
      puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168();
      puVar7 = &UNK_1105e0c98;
      puStack_c8 = puVar6;
      func_0x000107c613fc(&UNK_1105e0c98,0x18,7);
      *(long *)(puVar7 + 0x10) = lVar5;
      puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_a0 = FUN_102e90f58;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000f6b44;
      puStack_a8 = &UNK_1105e0cb0;
      ppuVar8 = &puStack_c0;
      puStack_98 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar7 = puStack_98;
      func_0x000107c61174(lVar10);
      func_0x000107c61574(puVar7);
      puVar7 = &UNK_1105e0ce8;
      func_0x000107c613fc(&UNK_1105e0ce8,0x20,7);
      *(long *)(puVar7 + 0x10) = lVar5;
      *(long *)(puVar7 + 0x18) = lVar3;
      pcStack_a0 = (code *)0x102e90f70;
      puStack_c0 = puVar6;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_100288f10;
      puStack_a8 = &UNK_1105e0d00;
      ppuVar9 = &puStack_c0;
      puStack_98 = puVar7;
      func_0x000107c60bc4(ppuVar9);
      puVar7 = puStack_98;
      func_0x000107c61174(lVar3);
      func_0x000107c61174(lVar10);
      func_0x000107c61574(puVar7);
      func_0x000107c3dcd0(0x3fc3333333333333,puStack_c8);
      func_0x000107c61170(param_1);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c60bd0(ppuVar8);
      goto LAB_102e8d7b4;
    }
    func_0x000107c61170(param_1);
    lVar5 = lVar10;
    param_1 = lVar3;
  }
  lVar10 = lVar5;
  func_0x000107c61170(param_1);
LAB_102e8d7b4:
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar10);
  (**(code **)(lVar11 + 8))(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  return;
}



/* Entry: 102e8d7fc; end: 102e8d80f;  */

bool FUN_102e8d7fc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102e8d810; end: 102e8d8bb;  */

void FUN_102e8d810(void)

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



/* Entry: 102e8d8bc; end: 102e8d8e3;  */

void FUN_102e8d8bc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 102e8d8e4; end: 102e8d9af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102e8d8e4(void)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f24518) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f244a8) = 0x3ff0000000000000;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61180();
  func_0x000107c58cd0();
  lVar1 = _DAT_112f244a8;
  func_0x000107c55928(*(double *)(puVar2 + _DAT_112f244a8) * 64.0,
                      *(double *)(puVar2 + _DAT_112f244a8) * 114.0,puVar2);
  func_0x000107c566fc(*(double *)(puVar2 + lVar1) * 8.0,puVar2);
  func_0x000107c566f4(0,puVar2);
  func_0x000107c61170(puVar2);
  return puVar2;
}



/* Entry: 102e8d9b0; end: 102e8d9cf; -[_TtC22SCStoryScrubController31SCStoryScrubMagnificationLayout init] */

void FUN_102e8d9b0(void)

{
  FUN_102e8d8e4();
  return;
}



/* Entry: 102e8d9d0; end: 102e8da43; -[_TtC22SCStoryScrubController31SCStoryScrubMagnificationLayout initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8d9d0(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112f24518) = 0;
  *(undefined8 *)(param_1 + _DAT_112f244a8) = 0x3ff0000000000000;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCStoryScrubController/SCStoryScrubOverlayView.swift",0x34,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8da44);
  (*pcVar1)();
}



/* Entry: 102e8da44; end: 102e8da4b; -[_TtC22SCStoryScrubController31SCStoryScrubMagnificationLayout shouldInvalidateLayoutForBoundsChange:] */

undefined8 FUN_102e8da44(void)

{
  return 1;
}



/* Entry: 102e8da4c; end: 102e8dec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102e8da4c(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  undefined *puVar14;
  undefined *puVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_f0 [48];
  undefined8 uStack_c0;
  
  func_0x000107c614f0();
  puVar14 = &stack0xffffffffffffff48;
  func_0x000107c61154(param_1,param_2,param_3,param_4,puVar14,
                      PTR_s_layoutAttributesForElementsInRec_112600c60);
  func_0x000107c61180();
  if (puVar14 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000102e91154(0,0x112d54430,&PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8)
    ;
    puVar3 = puVar14;
    func_0x000107c5fc54(puVar14,uVar2);
    func_0x000107c61170(puVar14);
    lVar4 = unaff_x20;
    func_0x000107c3fd94();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c6142c(puVar3);
      uVar6 = 0;
    }
    else {
      func_0x000107c3ec60();
      func_0x000107c404a0(lVar4);
      dVar17 = *(double *)(unaff_x20 + _DAT_112f244a8);
      if ((ulong)puVar3 >> 0x3e == 0) {
        puVar14 = *(undefined **)((undefined *)((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar14 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
        if (((ulong)puVar3 & 0x8000000000000000) != 0) {
          puVar14 = puVar3;
        }
        func_0x000107c60480();
      }
      if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
        puVar5 = *(undefined **)
                  (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
          puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        func_0x000107c60480();
      }
      if ((long)puVar5 <= (long)puVar14) {
        puVar5 = puVar14;
      }
      uVar6 = 0;
      FUN_102e8fe04(0,puVar5,0,PTR___swiftEmptyArrayStorage_11034f1c8,0x112d54430,
                    &PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8,0x112f24598,
                    &UNK_10dcb2580);
      if ((ulong)puVar3 >> 0x3e == 0) {
        puVar14 = *(undefined **)((undefined *)((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        puVar5 = PTR___sypN_11034f1a8;
      }
      else {
        puVar14 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
        if (((ulong)puVar3 & 0x8000000000000000) != 0) {
          puVar14 = puVar3;
        }
        func_0x000107c60480();
        puVar5 = PTR___sypN_11034f1a8;
      }
      PTR___sypN_11034f1a8 = puVar5;
      if (puVar14 != (undefined *)0x0) {
        if ((long)puVar14 < 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8dec8);
          (*pcVar1)();
        }
        puVar15 = (undefined *)0x0;
        param_3 = param_3 * 0.5;
        param_1 = param_3 + param_1;
        dVar17 = dVar17 * 72.0 * 3.0;
        do {
          if (((ulong)puVar3 & 0xc000000000000001) == 0) {
            puVar7 = *(undefined **)(puVar3 + (long)puVar15 * 8 + 0x20);
            func_0x000107c61174(puVar7);
          }
          else {
            puVar7 = puVar15;
            FUN_102e8fb00(puVar15,puVar3,
                          &PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8,0x112d54430)
            ;
          }
          puVar8 = puVar7;
          func_0x000107c40794();
          func_0x000107c60234(auStack_f0);
          func_0x000107c615e8(puVar8);
          puVar9 = &uStack_c0;
          func_0x000107c6147c(puVar9,auStack_f0,puVar5 + 8,uVar2,6);
          uVar10 = uStack_c0;
          if ((int)puVar9 != 0) {
            func_0x000107c3f74c(uStack_c0);
            dVar18 = 1.0;
            if (0.0 < dVar17) {
              dVar16 = ABS(param_3 - param_1) / dVar17;
              dVar18 = 1.0;
              if (dVar16 <= 1.0) {
                dVar18 = dVar16;
              }
            }
            dVar16 = dVar18 * 3.141592653589793;
            func_0x000107c60f1c(dVar16);
            dVar16 = (dVar16 + 1.0) * 0.3500000000000001 * 0.5 + 1.0;
            func_0x000107c6088c(auStack_f0,dVar16,dVar16);
            func_0x000107c5a03c(uVar10);
            param_3 = (1.0 - dVar18) * 100.0;
            if (0x7fefffffffffffff < (ulong)ABS(param_3)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8de94);
              (*pcVar1)();
            }
            if (param_3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8de98);
              (*pcVar1)();
            }
            if (9.223372036854776e+18 <= param_3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8de9c);
              (*pcVar1)();
            }
            func_0x000107c5a818(uVar10);
            func_0x000107c61174();
            uVar12 = uVar6;
            if (uVar6 >> 0x3e != 0) {
              uVar11 = uVar6 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar6) {
                uVar11 = uVar6;
              }
              func_0x000107c60480(uVar11);
              uVar12 = 0;
              FUN_102e8fe04(0,uVar11 + 1,1,uVar6,0x112d54430,
                            &PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8,
                            0x112f24598,&UNK_10dcb2580);
            }
            uVar13 = uVar12 & 0xffffffffffffff8;
            uVar11 = *(ulong *)(uVar13 + 0x10);
            uVar6 = uVar12;
            if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar11) {
              uVar6 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
              FUN_102e8fe04(uVar6,uVar11 + 1,1,uVar12,0x112d54430,
                            &PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8,
                            0x112f24598,&UNK_10dcb2580);
              uVar13 = uVar6 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar13 + 0x10) = uVar11 + 1;
            *(undefined8 *)(uVar13 + uVar11 * 8 + 0x20) = uVar10;
            func_0x000107c61170();
          }
          func_0x000107c61170(puVar7);
          puVar15 = puVar15 + 1;
        } while (puVar14 != puVar15);
      }
      func_0x000107c61170(lVar4);
      func_0x000107c6142c(puVar3);
    }
  }
  return uVar6;
}



/* Entry: 102e8dec8; end: 102e8df67; -[_TtC22SCStoryScrubController31SCStoryScrubMagnificationLayout layoutAttributesForElementsInRect:] */

void FUN_102e8dec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174();
  lVar1 = param_5;
  FUN_102e8da4c(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_5);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000102e91154(0,0x112d54430,&PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8)
    ;
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 102e8df68; end: 102e8e3e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102e8df68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  puVar3 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112f244f8) = puVar2;
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112f24508) = puVar2;
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112f24500) = puVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar4 = puVar3;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar8 = 0x4018000000000000;
  func_0x000107c539d4(0x4018000000000000,puVar5);
  func_0x000107c61170(puVar5);
  puVar4 = puVar3;
  func_0x000107c40510(puVar3);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar6 = puVar2;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar6);
  lVar1 = _DAT_112f244f8;
  uVar7 = *(undefined8 *)(puVar3 + _DAT_112f244f8);
  func_0x000107c61174(uVar7);
  puVar4 = puVar3;
  func_0x000107c40510(puVar3);
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar4);
  func_0x000107c54b80(uVar8,param_2,param_3,param_4,uVar7);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c61174(uVar7);
  puVar6 = puVar2;
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar6);
  uVar7 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c4aba4(uVar7);
  func_0x000107c61180();
  uVar8 = 0x4018000000000000;
  func_0x000107c539d4(0x4018000000000000);
  func_0x000107c61170(uVar7);
  func_0x000107c52ab8(*(undefined8 *)(puVar3 + lVar1));
  puVar4 = puVar3;
  func_0x000107c40510(puVar3);
  func_0x000107c61180();
  func_0x000107c3d89c();
  func_0x000107c61170(puVar4);
  FUN_102e8e3e8();
  lVar1 = _DAT_112f24508;
  uVar7 = *(undefined8 *)(puVar3 + _DAT_112f24508);
  func_0x000107c61174(uVar7);
  puVar4 = puVar3;
  func_0x000107c40510(puVar3);
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar4);
  func_0x000107c54b80(uVar8,param_2,param_3,param_4,uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c53840(*(undefined8 *)(puVar3 + lVar1));
  func_0x000107c52ab8(*(undefined8 *)(puVar3 + lVar1));
  uVar8 = 0;
  func_0x000107c526c0(0,*(undefined8 *)(puVar3 + lVar1));
  puVar4 = puVar3;
  func_0x000107c40510(puVar3);
  func_0x000107c61180();
  func_0x000107c3d89c();
  func_0x000107c61170(puVar4);
  lVar1 = _DAT_112f24500;
  uVar7 = *(undefined8 *)(puVar3 + _DAT_112f24500);
  func_0x000107c61174(uVar7);
  puVar4 = puVar3;
  func_0x000107c40510(puVar3);
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar4);
  func_0x000107c54b80(uVar8,param_2,param_3,param_4,uVar7);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c61174(uVar7);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c59c78(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar2);
  uVar7 = *(undefined8 *)(puVar3 + lVar1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  uVar8 = *(undefined8 *)PTR__UIFontWeightMedium_110345c38;
  func_0x000107c61174(uVar7);
  func_0x000107c5c600(0x4024000000000000,uVar8,puVar2);
  func_0x000107c61180();
  func_0x000107c54adc(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c59c74(*(undefined8 *)(puVar3 + lVar1));
  func_0x000107c52ab8(*(undefined8 *)(puVar3 + lVar1));
  func_0x000107c550d8(*(undefined8 *)(puVar3 + lVar1));
  puVar4 = puVar3;
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c3d89c(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return puVar3;
}



/* Entry: 102e8e3e8; end: 102e8e57b;  */

/* WARNING: Possible PIC construction at 0x000102e8e438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e8e460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e8e488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e8e4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e8e55c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e8e500) */
/* WARNING: Removing unreachable block (ram,0x000102e8e48c) */
/* WARNING: Removing unreachable block (ram,0x000102e8e464) */
/* WARNING: Removing unreachable block (ram,0x000102e8e43c) */
/* WARNING: Removing unreachable block (ram,0x000102e8e560) */

void FUN_102e8e3e8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x7974696361706f;
  func_0x000107c5fadc(0x7974696361706f,0xe700000000000000);
  func_0x000107c61168(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  func_0x000107c3dd18();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102e8e57c; end: 102e8e59b; -[_TtC22SCStoryScrubController25SCStoryScrubThumbnailCell initWithFrame:] */

void FUN_102e8e57c(void)

{
  FUN_102e8df68();
  return;
}



/* Entry: 102e8e59c; end: 102e8e5f3; -[_TtC22SCStoryScrubController25SCStoryScrubThumbnailCell initWithCoder:] */

void FUN_102e8e59c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCStoryScrubController/SCStoryScrubOverlayView.swift",0x34,2,0x91,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8e5f4);
  (*pcVar1)();
}



/* Entry: 102e8e5f4; end: 102e8e6cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8e5f4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_prepareForReuse_112620008);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f24508);
  func_0x000107c55258(uVar2);
  func_0x000107c526c0(0,uVar2);
  func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112f244f8));
  FUN_102e8e3e8();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f24500);
  func_0x000107c550d8(uVar2);
  func_0x000107c59c6c(uVar2);
  func_0x000107c40510();
  func_0x000107c61180();
  lVar1 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  func_0x000107c52e0c(0,lVar1);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 102e8e6d0; end: 102e8e6f7; -[_TtC22SCStoryScrubController25SCStoryScrubThumbnailCell prepareForReuse] */

void FUN_102e8e6d0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e8e5f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e8e6f8; end: 102e8e73f; -[_TtC22SCStoryScrubController25SCStoryScrubThumbnailCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e8e714: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e8e718) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8e6f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f24508));
  return;
}



/* Entry: 102e8e740; end: 102e8e783; -[SCStoryScrubOverlayView segmentCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e8e740(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f244d0;
  func_0x000107c61428(param_1 + _DAT_112f244d0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 102e8e784; end: 102e8e7d3; -[SCStoryScrubOverlayView setSegmentCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8e784(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f244d0;
  func_0x000107c61428(param_1 + _DAT_112f244d0,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 102e8e7d4; end: 102e8e817; -[SCStoryScrubOverlayView currentIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e8e7d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f244e0;
  func_0x000107c61428(param_1 + _DAT_112f244e0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 102e8e818; end: 102e8e867; -[SCStoryScrubOverlayView setCurrentIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8e818(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f244e0;
  func_0x000107c61428(param_1 + _DAT_112f244e0,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 102e8e868; end: 102e8e8ab; -[SCStoryScrubOverlayView highlightedIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e8e868(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f244d8;
  func_0x000107c61428(param_1 + _DAT_112f244d8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 102e8e8ac; end: 102e8e8fb; -[SCStoryScrubOverlayView setHighlightedIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8e8ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f244d8;
  func_0x000107c61428(param_1 + _DAT_112f244d8,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 102e8e8fc; end: 102e8e93f; -[SCStoryScrubOverlayView mode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e8e8fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f244f0;
  func_0x000107c61428(param_1 + _DAT_112f244f0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 102e8e940; end: 102e8e98f; -[SCStoryScrubOverlayView setMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8e940(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f244f0;
  func_0x000107c61428(param_1 + _DAT_112f244f0,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 102e8e990; end: 102e8e9d3; -[SCStoryScrubOverlayView hidesMiniBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102e8e990(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f24488;
  func_0x000107c61428(param_1 + _DAT_112f24488,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 102e8e9d4; end: 102e8ea43; -[SCStoryScrubOverlayView setHidesMiniBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8e9d4(long param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112f24488;
  func_0x000107c61428(param_1 + _DAT_112f24488,auStack_48,1,0);
  bVar1 = *(byte *)(param_1 + lVar2);
  *(char *)(param_1 + lVar2) = (char)param_3;
  if (param_3 != bVar1) {
    func_0x000107c550d8(*(undefined8 *)(param_1 + _DAT_112f24490));
  }
  return;
}



/* Entry: 102e8ea44; end: 102e8ea87; -[SCStoryScrubOverlayView thumbnailScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e8ea44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f24498;
  func_0x000107c61428(param_1 + _DAT_112f24498,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 102e8ea88; end: 102e8eabf; -[SCStoryScrubOverlayView setThumbnailScale:] */

void FUN_102e8ea88(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_102e8c434(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102e8eac0; end: 102e8ec5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102e8eac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f244d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f244e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f244d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f244f0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f24488) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f24498) = 0x3ff0000000000000;
  lVar1 = _DAT_112f24490;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112f244c8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112f244b8;
  FUN_102e8bb54();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_112f244c0) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar1 = _DAT_112f244e8;
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  FUN_102e90f78();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112f244a0) = puVar2;
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  func_0x000107c610f8();
  func_0x000107c469ac(0,0,0,0);
  *(undefined **)(unaff_x20 + _DAT_112f244b0) = puVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_102e8ec5c();
  func_0x000107c61170(puVar3);
  return puVar3;
}



/* Entry: 102e8ec5c; end: 102e8ee1b;  */

/* WARNING: Possible PIC construction at 0x000102e8ec8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e8ed78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e8ec90) */
/* WARNING: Removing unreachable block (ram,0x000102e8ed7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8ec5c(void)

{
  func_0x000107c5a378();
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102e8ee1c; end: 102e8ee3b; -[SCStoryScrubOverlayView initWithFrame:] */

void FUN_102e8ee1c(void)

{
  FUN_102e8eac0();
  return;
}



/* Entry: 102e8ee3c; end: 102e8ee63; -[SCStoryScrubOverlayView initWithCoder:] */

void FUN_102e8ee3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102e9100c();
  return;
}



/* Entry: 102e8ee64; end: 102e8efb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8ee64(double param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_68 [24];
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_layoutSubviews_112600e60);
  func_0x000107c3ec60();
  func_0x000107c609cc();
  dVar4 = param_1;
  func_0x000107c3ec60();
  func_0x000107c609b0();
  lVar1 = _DAT_112f24498;
  func_0x000107c61428(unaff_x20 + _DAT_112f24498,auStack_68,0,0);
  dVar3 = *(double *)(unaff_x20 + lVar1);
  dVar5 = dVar3 * 114.0;
  func_0x000107c54b80(0x4030000000000000,0,param_1 + -32.0,0x4008000000000000,
                      *(undefined8 *)(unaff_x20 + _DAT_112f24490));
  func_0x000107c54b80(0,dVar4 + -16.0,param_1,0x4030000000000000,
                      *(undefined8 *)(unaff_x20 + _DAT_112f244e8));
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f244b0);
  func_0x000107c54b80(0,(dVar4 + -16.0 + -4.0) - (dVar5 + dVar5 * 0.3500000000000001),param_1,uVar2)
  ;
  dVar4 = (param_1 + dVar3 * -64.0) * 0.5;
  func_0x000107c53824(0,dVar4,0,dVar4,uVar2);
  return;
}



/* Entry: 102e8efb4; end: 102e8efdb; -[SCStoryScrubOverlayView layoutSubviews] */

void FUN_102e8efb4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e8ee64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e8efdc; end: 102e8eff3; -[SCStoryScrubOverlayView intrinsicContentSize] */

undefined1  [16] FUN_102e8efdc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar1._8_8_ = 0x40679ccccccccccd;
  return auVar1;
}



/* Entry: 102e8eff4; end: 102e8efff; +[SCStoryScrubOverlayView preferredHeight] */

undefined8 FUN_102e8eff4(void)

{
  return 0x40679ccccccccccd;
}



/* Entry: 102e8f000; end: 102e8f027; +[SCStoryScrubOverlayView thumbnailRequestSizeForScale:] */

undefined1  [16] FUN_102e8f000(double param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_1 * 64.0 * 1.35;
  auVar1._8_8_ = param_1 * 114.0 * 1.35;
  return auVar1;
}



/* Entry: 102e8f028; end: 102e8f04f; -[SCStoryScrubOverlayView reloadSegments] */

void FUN_102e8f028(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e8c510();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e8f050; end: 102e8f11b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8f050(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_2 + _DAT_112f24508);
  func_0x000107c45034();
  func_0x000107c61180();
  if ((lVar1 != 0) && (func_0x000107c61170(), lVar1 == param_3)) {
    uVar4 = *(undefined8 *)(param_2 + _DAT_112f244f8);
    uVar2 = uVar4;
    func_0x000107c4aba4(uVar4);
    func_0x000107c61180();
    uVar3 = 0x61704f65736c7570;
    func_0x000107c5fadc(0x61704f65736c7570,0xec00000079746963);
    func_0x000107c4fe90(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_setHidden__1126479f8,1);
    return;
  }
  return;
}


