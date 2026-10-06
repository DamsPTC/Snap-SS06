/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e50984; end: 101e515e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e50984(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long alStack_210 [3];
  long *plStack_1f8;
  undefined1 auStack_1f0 [64];
  undefined8 auStack_1b0 [3];
  long lStack_198;
  undefined **ppuStack_190;
  long alStack_188 [3];
  long lStack_170;
  undefined **ppuStack_168;
  undefined1 auStack_160 [24];
  long lStack_148;
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
  
  puVar12 = (undefined8 *)(unaff_x20 + _DAT_112e32c30);
  uStack_a8 = puVar12[1];
  uStack_b0 = *puVar12;
  uStack_98 = puVar12[3];
  uStack_a0 = puVar12[2];
  uStack_88 = puVar12[5];
  uStack_90 = puVar12[4];
  uStack_78 = puVar12[7];
  uStack_80 = puVar12[6];
  alStack_210[0] = _DAT_112e32c48;
  alStack_210[2] = *(undefined8 *)(unaff_x20 + _DAT_112e32c50);
  alStack_210[1] = param_2;
  plStack_1f8 = param_1;
  func_0x000101e597dc(unaff_x20 + _DAT_112e32c38,auStack_160);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e32c60);
  func_0x0001000c6518(auStack_160,lStack_148);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_148 + -8) + 0x40));
  plVar10 = (long *)((long)alStack_210 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(plVar10);
  lVar11 = *plVar10;
  lVar4 = 0;
  FUN_101e4c630();
  ppuStack_168 = &PTR_DAT_11048e450;
  lVar5 = 0;
  alStack_188[0] = lVar11;
  lStack_170 = lVar4;
  func_0x000101e630bc();
  lVar11 = lVar5;
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_188,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar12 = (undefined8 *)((long)plVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar12);
  auStack_1b0[0] = *puVar12;
  ppuStack_190 = &PTR_DAT_11048e450;
  uVar6 = 0;
  lStack_198 = lVar4;
  func_0x0001005f60b4();
  uVar8 = uVar6;
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar11 + 0x38) = uVar8;
  func_0x000107c613fc(uVar6,0x20,7);
  func_0x0001005f60d4();
  *(undefined8 *)(lVar11 + 0x40) = uVar6;
  *(undefined8 *)(lVar11 + 0xc0) = 0;
  FUN_101e67a2c(&uStack_138);
  *(undefined8 *)(lVar11 + 0x130) = uStack_d0;
  *(undefined8 *)(lVar11 + 0x128) = uStack_d8;
  *(undefined8 *)(lVar11 + 0x140) = uStack_c0;
  *(undefined8 *)(lVar11 + 0x138) = uStack_c8;
  *(undefined8 *)(lVar11 + 0xe0) = uStack_120;
  *(undefined8 *)(lVar11 + 0xd8) = uStack_128;
  *(undefined8 *)(lVar11 + 0xf0) = uStack_110;
  *(undefined8 *)(lVar11 + 0xe8) = uStack_118;
  *(undefined8 *)(lVar11 + 0x100) = uStack_100;
  *(undefined8 *)(lVar11 + 0xf8) = uStack_108;
  *(undefined8 *)(lVar11 + 0x110) = uStack_f0;
  *(undefined8 *)(lVar11 + 0x108) = uStack_f8;
  *(undefined8 *)(lVar11 + 0x120) = uStack_e0;
  *(undefined8 *)(lVar11 + 0x118) = uStack_e8;
  *(undefined8 *)(lVar11 + 0xd0) = uStack_130;
  *(undefined8 *)(lVar11 + 200) = uStack_138;
  *(undefined8 *)(lVar11 + 0x150) = 0;
  *(undefined8 *)(lVar11 + 0x158) = 0;
  *(undefined8 *)(lVar11 + 0x148) = uStack_b8;
  uVar8 = 0x112e32da0;
  func_0x0001000285a8(0x112e32da0,&UNK_10da1beb8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar11 + 0x160) = uVar8;
  *(undefined8 *)(lVar11 + 0x168) = 0;
  *(undefined8 *)(lVar11 + 0x178) = 0;
  func_0x000107c61614(lVar11 + 0x170,0);
  func_0x000107c61644(lVar11 + 0x180,0);
  *(undefined8 *)(lVar11 + 0x188) = 0;
  *(undefined8 *)(lVar11 + 400) = 0;
  *(undefined1 *)(lVar11 + 0x1a0) = 0;
  *(undefined8 *)(lVar11 + 0x198) = 0;
  *(undefined8 *)(lVar11 + 0x78) = uStack_a8;
  *(undefined8 *)(lVar11 + 0x70) = uStack_b0;
  *(undefined8 *)(lVar11 + 0x88) = uStack_98;
  *(undefined8 *)(lVar11 + 0x80) = uStack_a0;
  *(undefined8 *)(lVar11 + 0x98) = uStack_88;
  *(undefined8 *)(lVar11 + 0x90) = uStack_90;
  *(undefined8 *)(lVar11 + 0xa8) = uStack_78;
  *(undefined8 *)(lVar11 + 0xa0) = uStack_80;
  uVar8 = *(undefined8 *)(lVar11 + 0x158);
  *(long *)(lVar11 + 0x150) = alStack_210[1];
  *(undefined8 *)(lVar11 + 0x158) = param_3;
  func_0x000107c61434(param_3);
  func_0x000101e4dba4(&uStack_b0,auStack_1f0);
  func_0x000107c6142c(uVar8);
  func_0x000101e597dc(unaff_x20 + alStack_210[0],lVar11 + 0x48);
  func_0x000101e597dc(auStack_1b0,lVar11 + 0x10);
  uVar8 = 0;
  FUN_101e6899c();
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  *(undefined8 *)(lVar11 + 0xb0) = uVar13;
  *(undefined8 *)(lVar11 + 0xb8) = uVar8;
  *(undefined8 *)(lVar11 + 0x1a8) = 0;
  *(undefined1 *)(lVar11 + 0x1b0) = 1;
  *(undefined1 *)(lVar11 + 0x1a0) = 0;
  uVar2 = uStack_78._6_1_;
  func_0x000107c61174(uVar13);
  FUN_101e62594(alStack_210[2],uVar2);
  func_0x000101e5976c(auStack_1b0);
  func_0x000101e5976c(alStack_188);
  func_0x000101e5976c(auStack_160);
  *(undefined ***)(lVar11 + 0x178) = &PTR_DAT_11048e740;
  func_0x000107c61604(lVar11 + 0x170);
  lVar4 = *(long *)(unaff_x20 + _DAT_112e32d38);
  cVar1 = (char)((long *)(unaff_x20 + _DAT_112e32d38))[1];
  func_0x000107c61428(lVar11 + 0x1a8,auStack_1f0,1,0);
  *(long *)(lVar11 + 0x1a8) = lVar4;
  *(char *)(lVar11 + 0x1b0) = cVar1;
  if (cVar1 == '\x01') {
    if (lVar4 == 0) {
      func_0x000107c61428(lVar11 + 200,auStack_160,1,0);
      *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
      goto LAB_101e50cf8;
    }
    lVar4 = 1;
  }
  func_0x000107c61428(lVar11 + 200,auStack_160,1,0);
  *(long *)(lVar11 + 0x148) = lVar4;
LAB_101e50cf8:
  uVar3 = *(undefined1 *)(unaff_x20 + _DAT_112e32d40);
  uVar2 = *(undefined1 *)(lVar11 + 0x1a0);
  *(undefined1 *)(lVar11 + 0x1a0) = uVar3;
  FUN_101e62038(uVar2);
  plVar10 = (long *)(*(long *)(lVar11 + 0xb8) + _DAT_112e33588);
  lVar4 = *plVar10;
  if (lVar4 != 0) {
    lVar9 = plVar10[1];
    lVar7 = lVar4;
    func_0x000107c614f0(lVar4);
    alStack_188[0] = lVar4;
    (**(code **)(*(long *)(lVar9 + 0x28) + 0x10))(uVar3,lVar7);
  }
  func_0x000107c61634(lVar11 + 0x180,*(undefined8 *)(unaff_x20 + _DAT_112e32cc8));
  plStack_1f8[3] = lVar5;
  plStack_1f8[4] = (long)&PTR_DAT_11048f138;
  *plStack_1f8 = lVar11;
  return;
}



/* Entry: 101e515e8; end: 101e518fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e515e8(undefined *param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  ulong uVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar3 = &UNK_11048e970;
  func_0x000107c613fc(&UNK_11048e970,0x18,7);
  *(undefined **)(puVar3 + 0x10) = param_1;
  puStack_88 = param_1;
  func_0x000107c614b0(param_1);
  func_0x000107c614b0(param_1);
  uVar4 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  ppuVar5 = &puStack_58;
  func_0x000107c6147c(ppuVar5,&puStack_88,uVar4,&UNK_1106e89a8,6);
  puVar10 = puStack_58;
  if ((int)ppuVar5 == 0) {
    puStack_58 = param_1;
    func_0x000107c614b0(param_1);
    ppuVar5 = &puStack_88;
    func_0x000107c6147c(ppuVar5,&puStack_58,uVar4,&UNK_1106d42b0,6);
    puVar10 = puStack_88;
    if ((int)ppuVar5 != 0) {
      uVar11 = (ulong)puStack_78 & 0xff;
      if (*(char *)(unaff_x20 + _DAT_112e32c30 + 0x29) == '\x01') {
        puVar6 = (undefined8 *)0x0;
        func_0x000103b25e3c();
        FUN_101e49d98();
        puVar7 = &UNK_1106d42b0;
        func_0x000107c613f8(&UNK_1106d42b0,puVar6,0,0);
        *puVar6 = puVar10;
        puVar6[1] = uStack_80;
        *(undefined1 *)(puVar6 + 2) = puStack_78._0_1_;
        FUN_101e49dd8(puVar10,uStack_80,uVar11);
        puVar8 = puVar7;
        func_0x000107c5ed2c();
        puVar9 = puVar8;
        func_0x000103b25c24();
        func_0x000101e49df8(puVar10,uStack_80,uVar11);
        func_0x000107c61170(puVar8);
        func_0x000107c614ac(puVar7);
        uVar1 = (uint)puVar9 ^ 1;
        goto LAB_101e517a4;
      }
      func_0x000101e49df8(puStack_88,uStack_80,uVar11);
    }
    uVar1 = 0;
  }
  else {
    func_0x000103b24abc(0);
    puVar7 = puVar10;
    func_0x000103b2476c(puVar10,*(undefined8 *)(unaff_x20 + _DAT_112e32c30 + 0x30));
    uVar1 = (uint)puVar7;
    puVar7 = puVar10;
    func_0x000103b2496c();
    func_0x000101e596c4(puVar10);
    *(undefined **)(puVar3 + 0x10) = puVar7;
    func_0x000107c614ac(param_1);
  }
LAB_101e517a4:
  puVar10 = &UNK_11048e8d0;
  func_0x000107c613fc(&UNK_11048e8d0,0x18,7);
  func_0x000107c61614(puVar10 + 0x10);
  puVar7 = &UNK_11048e998;
  func_0x000107c613fc(&UNK_11048e998,0x28,7);
  *(undefined **)(puVar7 + 0x10) = puVar10;
  puVar7[0x18] = (char)(uVar1 & 1);
  *(undefined **)(puVar7 + 0x20) = puVar3;
  puVar8 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar2 = (int)puVar8;
  func_0x000107c6157c(puVar10);
  func_0x000107c6157c(puVar3);
  func_0x000107c4a02c();
  if (iVar2 == 0) {
    func_0x000107c61574(puVar10);
    FUN_101e4f7cc();
    uStack_68 = 0x101e596b4;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_11048e9b0;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar7;
    func_0x000107c60bc4(ppuVar5);
    puVar8 = puStack_60;
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(puVar8);
    func_0x000107c4e524(puVar10);
    func_0x000107c61574(puVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c615e8(puVar10);
  }
  else {
    FUN_101e53cc4(puVar10,uVar1 & 1,puVar3);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(puVar7);
  }
  return;
}



/* Entry: 101e518fc; end: 101e51ce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e518fc(uint param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = ((undefined8 *)(unaff_x20 + _DAT_112e32cd0))[1];
  if (lVar12 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e32cd0);
    func_0x000107c61434(lVar12);
  }
  FUN_101e5399c(uVar10,lVar12,param_1 & 1,param_2,param_3);
  func_0x000107c6142c();
  func_0x000107c6142c(lVar12);
  lVar12 = _DAT_112e32d28;
  if ((param_1 & 1) == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112e32d28);
    if (lVar1 == 0) {
      uVar10 = 0;
    }
    else {
      func_0x000107c6157c(lVar1);
      func_0x000107c5f848();
      func_0x000107c61574(lVar1);
      uVar10 = *(undefined8 *)(unaff_x20 + lVar12);
    }
    *(undefined8 *)(unaff_x20 + lVar12) = 0;
    func_0x000107c61574(uVar10);
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 &
                 **(ulong **)(*(long *)(unaff_x20 + _DAT_112e32cc0) + _DAT_112e335c0)) + 0x90))();
    func_0x0001000a8868(unaff_x20 + _DAT_112e32c38,
                        *(undefined8 *)(unaff_x20 + _DAT_112e32c38 + 0x18));
    uVar10 = 0;
    FUN_101e4c630(0);
    FUN_101e4c5d0(0,param_2,param_3,7,uVar10,&PTR_DAT_11048e450);
  }
  else if ((*(char *)(unaff_x20 + _DAT_112e32c68) == '\x01') &&
          (*(long *)(unaff_x20 + _DAT_112e32d28) == 0)) {
    puVar2 = *(ulong **)(*(long *)(unaff_x20 + _DAT_112e32cc0) + _DAT_112e335c0);
    pcVar11 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0xb0);
    func_0x000107c61174();
    puVar3 = puVar2;
    (*pcVar11)();
    func_0x000107c61170(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = &UNK_11048e8d0;
      func_0x000107c613fc(&UNK_11048e8d0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar5 = &UNK_11048e9e8;
      func_0x000107c613fc(&UNK_11048e9e8,0x28,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined8 *)(puVar5 + 0x18) = param_2;
      *(undefined8 *)(puVar5 + 0x20) = param_3;
      pcStack_80 = FUN_101e59718;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_11048ea00;
      ppuVar6 = &puStack_a0;
      puStack_78 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar10 = 0x112d4af88;
      FUN_101e59724(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
      func_0x000107c6157c(puVar4);
      func_0x000107c61434(param_3);
      uVar7 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar8 = uVar7;
      func_0x0001001c7f30();
      func_0x000107c60264(puVar9,&puStack_a8,uVar7,uVar8,lVar1,uVar10);
      func_0x000107c5f850();
      func_0x000107c613fc();
      func_0x000107c5f844(puVar9,ppuVar6);
      puVar5 = puStack_78;
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar5);
      uVar10 = *(undefined8 *)(unaff_x20 + lVar12);
      *(undefined1 **)(unaff_x20 + lVar12) = puVar9;
      func_0x000107c61574(uVar10);
      FUN_101e4f7cc();
      puVar4 = &UNK_11048e8d0;
      func_0x000107c613fc(&UNK_11048e8d0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      pcStack_80 = FUN_101e59764;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_11048ea28;
      ppuVar6 = &puStack_a0;
      puStack_78 = puVar4;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_78);
      func_0x000107c4e528(0x3fe999999999999a,uVar10);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(uVar10);
    }
  }
  return;
}



/* Entry: 101e51ce4; end: 101e51f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e51ce4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined2 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  byte bStack_6f;
  
  lVar6 = 0;
  func_0x000103b2dc40();
  lVar11 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = _DAT_112e32cd8;
  lVar9 = (long)puVar10 - extraout_x12;
  puVar8 = &uStack_a0;
  func_0x000107c61428(unaff_x20 + _DAT_112e32cd8,puVar8,0x20,0);
  lVar6 = *(long *)(unaff_x20 + lVar6);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar7 = 3;
    FUN_101e5b638(3);
    if (((ulong)puVar8 & 1) != 0) {
      func_0x000101e3cf64(*(long *)(lVar6 + 0x38) + *(long *)(lVar11 + 0x48) * lVar7,puVar10);
      func_0x000101e3cf20(puVar10,lVar9);
      func_0x000107c614a8(&uStack_a0);
      func_0x000101e50dc0(3,lVar9);
      if ((*(byte *)(unaff_x20 + _DAT_112e32c30 + 0x39) & 1) == 0) {
        puVar8 = (undefined8 *)(unaff_x20 + _DAT_112e32cd0);
        lVar6 = puVar8[1];
        if (lVar6 != 0) {
          uVar1 = puVar8[4];
          uVar3 = puVar8[5];
          uVar2 = puVar8[2];
          uVar4 = puVar8[3];
          uVar12 = *puVar8;
          uVar5 = *(undefined2 *)(puVar8 + 6);
          bStack_70 = (byte)uVar5 & 1;
          bStack_6f = (byte)((ushort)uVar5 >> 8) & 1;
          puVar8 = &uStack_d8;
          uStack_d8 = uVar12;
          lStack_d0 = lVar6;
          uStack_c8 = uVar2;
          uStack_c0 = uVar4;
          uStack_b8 = uVar1;
          uStack_b0 = uVar3;
          uStack_a8 = uVar5;
          uStack_a0 = uVar12;
          lStack_98 = lVar6;
          uStack_90 = uVar2;
          uStack_88 = uVar4;
          uStack_80 = uVar1;
          uStack_78 = uVar3;
          FUN_101e3a290(puVar8,auStack_110);
          func_0x000103b24fe4();
          FUN_101ad91a0(uVar12,lVar6,uVar2,uVar4,uVar1,uVar3,uVar5);
          if (((ulong)puVar8 & 1) == 0) {
            lVar6 = unaff_x20 + _DAT_112e32cf8;
            func_0x000107c61428(lVar6,auStack_128,0,0);
            if (*(long *)(lVar6 + 0x18) != 0) {
              func_0x000101e597dc(lVar6,auStack_110);
              func_0x0001000a8868(auStack_110,uStack_f8);
              (**(code **)(lStack_f0 + 0x30))(uStack_f8,lStack_f0);
              func_0x000101e5976c(auStack_110);
            }
          }
        }
        FUN_101e51f04(3);
      }
      func_0x000101e3cee4(lVar9);
      return;
    }
  }
  func_0x000107c614a8(&uStack_a0);
  return;
}



/* Entry: 101e51f04; end: 101e522d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e51f04(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  long lStack_b8;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar1 = 0;
  func_0x000103b2dc40();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = (undefined8 *)((long)&uStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar9 - extraout_x12;
  lVar11 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar10 - extraout_x8_00;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_1 == 3) {
    func_0x000101e59ec0(&uStack_80,0x112e32d70,&UNK_10da1be90);
    lVar7 = _DAT_112e32d00;
  }
  else if (param_1 == 1) {
    func_0x000101e59ec0(&uStack_80,0x112e32d70,&UNK_10da1be90);
    lVar7 = _DAT_112e32d08;
  }
  else {
    if (param_1 != 0) goto LAB_101e52074;
    func_0x000101e59ec0(&uStack_80,0x112e32d70,&UNK_10da1be90);
    lVar7 = _DAT_112e32cf8;
  }
  func_0x000107c61428(unaff_x20 + lVar7,auStack_e8,0,0);
  FUN_101e5966c(unaff_x20 + lVar7,&uStack_80,0x112e32d70,&UNK_10da1be90);
LAB_101e52074:
  FUN_101e5966c(&uStack_80,auStack_d0,0x112e32d70,&UNK_10da1be90);
  if (lStack_b8 == 0) {
    func_0x000101e59ec0(&uStack_80,0x112e32d70,&UNK_10da1be90);
    func_0x000101e59ec0(auStack_d0,0x112e32d70,&UNK_10da1be90);
  }
  else {
    func_0x000100cd4338(auStack_d0,auStack_a8);
    lVar7 = _DAT_112e32cd8;
    puVar5 = auStack_d0;
    func_0x000107c61428(unaff_x20 + _DAT_112e32cd8,puVar5,0x20,0);
    lVar7 = *(long *)(unaff_x20 + lVar7);
    if ((*(long *)(lVar7 + 0x10) == 0) ||
       (lVar2 = param_1, FUN_101e5b638(param_1), ((ulong)puVar5 & 1) == 0)) {
      uVar6 = 1;
    }
    else {
      func_0x000101e3cf64(*(long *)(lVar7 + 0x38) + *(long *)(lVar12 + 0x48) * lVar2,lVar11);
      uVar6 = 0;
    }
    (**(code **)(lVar12 + 0x38))(lVar11,uVar6,1,lVar1);
    lVar7 = lVar11;
    (**(code **)(lVar12 + 0x30))(lVar11,1,lVar1);
    if ((int)lVar7 == 0) {
      func_0x000101e3cf64(lVar11,lVar10);
      func_0x000101e59ec0(lVar11,0x112e32328,&UNK_10da1b750);
      func_0x000107c614a8(auStack_d0);
      func_0x000101e3cf20(lVar10,puVar9);
      puVar3 = puVar9;
      func_0x000107c614c4(puVar9,lVar1);
      if ((int)puVar3 == 0) {
        uVar8 = *puVar9;
        func_0x0001000a8868(unaff_x20 + _DAT_112e32c38,
                            *(undefined8 *)(unaff_x20 + _DAT_112e32c38 + 0x18));
        func_0x0001000a8868(auStack_a8,uStack_90);
        pcVar13 = *(code **)(lStack_88 + 8);
        func_0x000107c61174(uVar8);
        uVar6 = uStack_90;
        (*pcVar13)(uStack_90,lStack_88);
        uVar4 = 0;
        FUN_101e4c630(0);
        FUN_101e4c5d0(uVar8,uVar6,param_1,5,uVar4,&PTR_DAT_11048e450);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar8);
      }
      else if ((int)puVar3 == 1) {
        func_0x000101e3cee4(puVar9);
      }
      else {
        lVar11 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar11 + -8) + 8))(puVar9,lVar11);
      }
    }
    else {
      func_0x000101e59ec0(lVar11,0x112e32328,&UNK_10da1b750);
      func_0x000107c614a8(auStack_d0);
    }
    func_0x000101e59ec0(&uStack_80,0x112e32d70,&UNK_10da1be90);
    func_0x000101e5976c(auStack_a8);
  }
  return;
}



/* Entry: 101e522d4; end: 101e5323f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e522d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long alStack_190 [3];
  code *pcStack_178;
  undefined8 uStack_170;
  uint uStack_164;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ushort uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ushort uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  byte bStack_6f;
  
  lVar6 = 0;
  func_0x000103b2dc40();
  lVar16 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar11 = (undefined8 *)((long)alStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar12 = (undefined8 *)((long)puVar11 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)puVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = _DAT_112e32cd8;
  lVar9 = lVar14 - extraout_x12_01;
  puVar8 = &uStack_a0;
  func_0x000107c61428(unaff_x20 + _DAT_112e32cd8,puVar8,0x20,0);
  lVar10 = *(long *)(unaff_x20 + lVar10);
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar7 = 1;
    FUN_101e5b638(1);
    if (((ulong)puVar8 & 1) != 0) {
      func_0x000101e3cf64(*(long *)(lVar10 + 0x38) + *(long *)(lVar16 + 0x48) * lVar7,lVar14);
      func_0x000101e3cf20(lVar14,lVar9);
      func_0x000107c614a8(&uStack_a0);
      func_0x000101e3cf64(lVar9,puVar12);
      puVar8 = puVar12;
      func_0x000107c614c4(puVar12,lVar6);
      if ((int)puVar8 == 0) {
        func_0x000101e3cee4(puVar12);
      }
      else if ((int)puVar8 == 1) {
        uVar13 = *puVar12;
        func_0x0001000a8868(unaff_x20 + _DAT_112e32c38,
                            *(undefined8 *)(unaff_x20 + _DAT_112e32c38 + 0x18));
        FUN_101e4c630(0);
        func_0x000107c615f0(uVar13);
        FUN_101e4c5d0();
        func_0x000107c615ec(uVar13,2);
      }
      else {
        lVar10 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar10 + -8) + 8))(puVar12,lVar10);
      }
      func_0x000101e50dc0(1,lVar9);
      lVar10 = unaff_x20 + _DAT_112e32c30;
      if ((*(byte *)(lVar10 + 0x39) & 1) == 0) {
        func_0x000101e3cf64(lVar9,puVar11);
        puVar8 = puVar11;
        func_0x000107c614c4(puVar11,lVar6);
        if ((int)puVar8 == 0) {
          func_0x000107c61170(*puVar11);
          puVar8 = (undefined8 *)(unaff_x20 + _DAT_112e32cd0);
          lVar6 = puVar8[1];
          if (lVar6 != 0) {
            uVar13 = puVar8[4];
            uVar2 = puVar8[5];
            uVar1 = puVar8[2];
            uVar3 = puVar8[3];
            uVar15 = *puVar8;
            uVar4 = *(ushort *)(puVar8 + 6);
            uStack_164 = (uint)uVar4;
            bStack_70 = (byte)uVar4 & 1;
            bStack_6f = (byte)(uVar4 >> 8) & 1;
            lVar14 = unaff_x20 + _DAT_112e32ca0;
            uStack_170 = *(undefined8 *)(lVar14 + 0x18);
            lVar16 = *(long *)(lVar14 + 0x20);
            alStack_190[1] = lVar16;
            uStack_a0 = uVar15;
            lStack_98 = lVar6;
            uStack_90 = uVar1;
            uStack_88 = uVar3;
            uStack_80 = uVar13;
            uStack_78 = uVar2;
            func_0x0001000a8868();
            uVar5 = uStack_164;
            uVar17 = *(undefined8 *)(lVar10 + 0x30);
            pcStack_178 = *(code **)(lVar16 + 0x20);
            uStack_a8 = (ushort)uStack_164;
            alStack_190[2] = lVar14;
            uStack_d8 = uVar15;
            lStack_d0 = lVar6;
            uStack_c8 = uVar1;
            uStack_c0 = uVar3;
            uStack_b8 = uVar13;
            uStack_b0 = uVar2;
            FUN_101e3a290(&uStack_d8,&uStack_110);
            (*pcStack_178)(&uStack_a0,uVar17,uStack_170,alStack_190[1]);
            FUN_101ad91a0(uVar15,lVar6,uVar1,uVar3,uVar13,uVar2,uVar5);
            FUN_101e51f04(1);
            FUN_101e518fc(0,0xd000000000000011,0x800000010f015250);
          }
        }
        else if ((int)puVar8 == 1) {
          func_0x000101e3cee4(puVar11);
        }
        else {
          lVar10 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar10 + -8) + 8))(puVar11,lVar10);
        }
      }
      puVar8 = (undefined8 *)(unaff_x20 + _DAT_112e32cd0);
      lVar10 = puVar8[1];
      if (lVar10 != 0) {
        uVar13 = puVar8[4];
        uVar2 = puVar8[5];
        uVar1 = puVar8[2];
        uVar3 = puVar8[3];
        uVar17 = *puVar8;
        uVar4 = *(ushort *)(puVar8 + 6);
        uStack_a8 = uVar4 & 0x101;
        puVar8 = &uStack_110;
        uStack_110 = uVar17;
        lStack_108 = lVar10;
        uStack_100 = uVar1;
        uStack_f8 = uVar3;
        uStack_f0 = uVar13;
        uStack_e8 = uVar2;
        uStack_e0 = uVar4;
        uStack_d8 = uVar17;
        lStack_d0 = lVar10;
        uStack_c8 = uVar1;
        uStack_c0 = uVar3;
        uStack_b8 = uVar13;
        uStack_b0 = uVar2;
        FUN_101e3a290(puVar8,auStack_148);
        func_0x000103b24fe4();
        FUN_101ad91a0(uVar17,lVar10,uVar1,uVar3,uVar13,uVar2,uVar4);
        if (((ulong)puVar8 & 1) == 0) {
          lVar10 = unaff_x20 + _DAT_112e32cf8;
          func_0x000107c61428(lVar10,auStack_160,0,0);
          if (*(long *)(lVar10 + 0x18) != 0) {
            func_0x000101e597dc(lVar10,auStack_148);
            func_0x0001000a8868(auStack_148,uStack_130);
            (**(code **)(lStack_128 + 0x30))(uStack_130,lStack_128);
            func_0x000101e3cee4(lVar9);
            func_0x000101e5976c(auStack_148);
            return;
          }
        }
      }
      func_0x000101e3cee4(lVar9);
      return;
    }
  }
  func_0x000107c614a8(&uStack_a0);
  return;
}



/* Entry: 101e53240; end: 101e5355f;  */

void FUN_101e53240(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar1 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0;
  func_0x000103b2dc40();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_101e3df10(param_1,lVar5);
  lVar1 = lVar5;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x000101e59ec0(lVar5,0x112e32328,&UNK_10da1b750);
    FUN_101e5860c(puVar4,param_2);
    func_0x000101e59ec0(puVar4,0x112e32328,&UNK_10da1b750);
  }
  else {
    func_0x000101e3cf20(lVar5,lVar6);
    uVar3 = *unaff_x20;
    func_0x000107c61558(uVar3);
    uStack_58 = *unaff_x20;
    FUN_101e586ec(lVar6,param_2,uVar3);
    *unaff_x20 = uStack_58;
  }
  return;
}



/* Entry: 101e53560; end: 101e53853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e53560(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  code *pcVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined2 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  byte bStack_6f;
  
  *(undefined1 *)(unaff_x20 + _DAT_112e32c88) = 0;
  lVar1 = _DAT_112e32ce0;
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_112e32cd0);
  lVar13 = puVar9[1];
  if (lVar13 != 0) {
    uVar12 = *puVar9;
    uVar8 = puVar9[2];
    uVar5 = puVar9[3];
    uVar3 = puVar9[4];
    uVar6 = puVar9[5];
    uVar7 = *(undefined2 *)(puVar9 + 6);
    bStack_70 = (byte)uVar7 & 1;
    bStack_6f = (byte)((ushort)uVar7 >> 8) & 1;
    lVar14 = *(long *)(unaff_x20 + _DAT_112e32cf0);
    uStack_a0 = uVar12;
    lStack_98 = lVar13;
    uStack_90 = uVar8;
    uStack_88 = uVar5;
    uStack_80 = uVar3;
    uStack_78 = uVar6;
    if (lVar14 == 0) {
      lVar1 = unaff_x20 + _DAT_112e32ca0;
      uVar4 = *(undefined8 *)(lVar1 + 0x18);
      lVar14 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar4);
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e32c30 + 0x30);
      pcVar11 = *(code **)(lVar14 + 8);
      uStack_d8 = uVar12;
      lStack_d0 = lVar13;
      uStack_c8 = uVar8;
      uStack_c0 = uVar5;
      uStack_b8 = uVar3;
      uStack_b0 = uVar6;
      uStack_a8 = uVar7;
      FUN_101e3a290(&uStack_d8,&uStack_110);
      puVar9 = &uStack_a0;
      (*pcVar11)(puVar9,uVar10,uVar4,lVar14);
      lVar1 = _DAT_112e32c68;
      if ((*(byte *)(unaff_x20 + _DAT_112e32c68) & 1) == 0) {
        *(undefined1 *)(unaff_x20 + _DAT_112e32c68) = 1;
      }
      func_0x000101e5298c();
      if (((ulong)puVar9 & 1) != 0) {
        puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e32d08);
        puVar9 = puVar2;
        func_0x000107c61428(puVar2,&uStack_130,0,0);
        if (puVar2[3] != 0) {
          func_0x000101e597dc(puVar2,&uStack_110);
          func_0x0001000a8868(&uStack_110);
          (**(code **)(lStack_f0 + 0x18))(*(undefined1 *)(unaff_x20 + lVar1),uStack_f8,lStack_f0);
          puVar9 = (undefined8 *)0x0;
          func_0x000101e5976c();
        }
      }
      func_0x000103b24fe4();
      FUN_101ad91a0(uVar12,lVar13,uVar8,uVar5,uVar3,uVar6,uVar7);
      if ((((ulong)puVar9 & 1) != 0) && ((*(byte *)(unaff_x20 + _DAT_112e32d10) & 1) == 0)) {
        FUN_101e518fc(1,0xd000000000000019,0x800000010f0152e0);
      }
    }
    else if (((*(byte *)(unaff_x20 + _DAT_112e32ce0) & 1) == 0) &&
            (*(char *)(unaff_x20 + _DAT_112e32c30 + 0x28) == '\x01')) {
      func_0x000107c614b0(lVar14);
      FUN_101e518fc(0,0xd000000000000014,0x800000010f0152c0);
      FUN_101e4e164(&uStack_d8,lVar14,0);
      FUN_101e58a2c(&uStack_d8);
      uStack_108 = lStack_d0;
      uStack_110 = uStack_d8;
      func_0x000100bcb1dc(&uStack_110);
      uStack_128 = uStack_c0;
      uStack_130 = uStack_c8;
      func_0x000100bcb1dc(&uStack_130);
      *(undefined1 *)(unaff_x20 + lVar1) = 1;
      func_0x0001000a8868(unaff_x20 + _DAT_112e32c38,
                          *(undefined8 *)(unaff_x20 + _DAT_112e32c38 + 0x18));
      uVar8 = 0;
      FUN_101e4c630(0);
      FUN_101e4c5d0(lVar14,0,0,8,uVar8,&PTR_DAT_11048e450);
      func_0x000107c614ac(lVar14);
    }
  }
  return;
}



/* Entry: 101e53854; end: 101e5399b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e53854(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  lVar1 = _DAT_112e32d08;
  func_0x000107c61428(unaff_x20 + _DAT_112e32d08,auStack_98,0,0);
  FUN_101e5966c(unaff_x20 + lVar1,auStack_58,0x112e32d70,&UNK_10da1be90);
  if (lStack_40 == 0) {
    func_0x000101e59ec0(auStack_58,0x112e32d70,&UNK_10da1be90);
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = 0;
  }
  else {
    uVar2 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar3 = 0x112e32d98;
    func_0x0001000285a8(0x112e32d98,&UNK_10da1beb0);
    puVar4 = &uStack_80;
    func_0x000107c6147c(puVar4,auStack_58,uVar2,uVar3,6);
    if (((ulong)puVar4 & 1) == 0) {
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else if (lStack_68 != 0) {
      func_0x000100cd4338(&uStack_80,auStack_58);
      func_0x0001000a8868(auStack_58,lStack_40);
      (**(code **)(lStack_38 + 0x18))(param_1,lStack_40,lStack_38);
      func_0x000101e5976c(auStack_58);
      return;
    }
  }
  func_0x000101e59ec0(&uStack_80,0x112e32d90,&UNK_10da1bea8);
  return;
}



/* Entry: 101e5399c; end: 101e53b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101e5399c(long param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_180;
  long lStack_178;
  undefined *puStack_168;
  undefined1 auStack_160 [256];
  
  lVar4 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 8;
  *(undefined8 *)(lVar4 + 0x10) = 4;
  *(undefined8 *)(lVar4 + 0x20) = 0x746e657665;
  puVar2 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar4 + 0x28) = 0xe500000000000000;
  *(undefined8 *)(lVar4 + 0x30) = 0xd000000000000017;
  *(undefined8 *)(lVar4 + 0x38) = 0x800000010f015300;
  *(undefined **)(lVar4 + 0x48) = puVar2;
  *(undefined8 *)(lVar4 + 0x50) = 0x656c62616e65;
  *(undefined8 *)(lVar4 + 0x58) = 0xe600000000000000;
  puVar3 = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar4 + 0x60) = param_3;
  *(undefined **)(lVar4 + 0x78) = puVar3;
  *(undefined8 *)(lVar4 + 0x80) = 0x6e6f73616572;
  *(undefined8 *)(lVar4 + 0x88) = 0xe600000000000000;
  *(undefined8 *)(lVar4 + 0x90) = param_4;
  *(undefined8 *)(lVar4 + 0x98) = param_5;
  *(undefined **)(lVar4 + 0xa8) = puVar2;
  *(undefined8 *)(lVar4 + 0xb0) = 0xd000000000000010;
  *(undefined8 *)(lVar4 + 0xb8) = 0x800000010f015320;
  uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112e32c68);
  *(undefined **)(lVar4 + 0xd8) = puVar3;
  *(undefined1 *)(lVar4 + 0xc0) = uVar1;
  func_0x000107c61434(param_5);
  lVar5 = lVar4;
  func_0x000100214a84();
  func_0x000107c61588(lVar4);
  uVar6 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),4,uVar6);
  lStack_180 = lVar5;
  if (param_2 != 0) {
    puStack_168 = puVar2;
    lStack_180 = param_1;
    lStack_178 = param_2;
    func_0x000100102924(&lStack_180,auStack_160);
    func_0x000107c61434(param_2);
    lVar4 = lVar5;
    func_0x000107c61558(lVar5);
    lStack_180 = lVar5;
    func_0x0001001029e8(auStack_160,0x64695f70616e73,0xe700000000000000,lVar4);
  }
  return lStack_180;
}



/* Entry: 101e53b60; end: 101e53c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e53b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 &
                 **(ulong **)(*(long *)(param_1 + _DAT_112e32cc0) + _DAT_112e335c0)) + 0x88))();
    func_0x0001000a8868(param_1 + _DAT_112e32c38,*(undefined8 *)(param_1 + _DAT_112e32c38 + 0x18));
    uVar1 = 0;
    FUN_101e4c630(0);
    FUN_101e4c5d0(1,param_2,param_3,7,uVar1,&PTR_DAT_11048e450);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101e53c48; end: 101e53cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e53c48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112e32d28);
    if (lVar1 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c6157c(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c5f84c();
      func_0x000107c61574(lVar1);
    }
  }
  return;
}



/* Entry: 101e53cc4; end: 101e5411b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e53cc4(long param_1,uint param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ushort uVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ushort uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte bStack_78;
  byte bStack_77;
  
  func_0x000107c61428(param_1 + 0x10,auStack_118,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  if ((param_2 & 1) == 0) {
    if ((*(byte *)(param_1 + _DAT_112e32c30 + 0x28) & 1) != 0) goto LAB_101e53dbc;
  }
  else {
    puVar1 = (undefined8 *)(param_1 + _DAT_112e32cd0);
    lVar12 = puVar1[1];
    if (lVar12 != 0) {
      uVar14 = *puVar1;
      uVar10 = puVar1[2];
      uVar2 = puVar1[3];
      uVar11 = puVar1[4];
      uVar3 = puVar1[5];
      uVar5 = *(ushort *)(puVar1 + 6);
      bStack_78 = (byte)uVar5 & 1;
      bStack_77 = (byte)(uVar5 >> 8) & 1;
      uStack_a8 = uVar14;
      lStack_a0 = lVar12;
      uStack_98 = uVar10;
      uStack_90 = uVar2;
      uStack_88 = uVar11;
      uStack_80 = uVar3;
      if ((*(byte *)(param_1 + _DAT_112e32ce8) & 1) == 0) {
        uVar7 = 1;
        *(undefined1 *)(param_1 + _DAT_112e32ce8) = 1;
        uStack_e0 = uVar14;
        lStack_d8 = lVar12;
        uStack_d0 = uVar10;
        uStack_c8 = uVar2;
        uStack_c0 = uVar11;
        uStack_b8 = uVar3;
        uStack_b0 = uVar5;
        FUN_101e3a290(&uStack_e0,&uStack_1c8);
        FUN_101e5411c();
        FUN_101e58cc8(&uStack_a8,1);
        FUN_101ad91a0(uVar14,lVar12,uVar10,uVar2,uVar11,uVar3,uVar5);
        FUN_101e53560();
        goto LAB_101e54090;
      }
    }
    if (*(char *)(param_1 + _DAT_112e32c30 + 0x28) == '\x01') {
LAB_101e53dbc:
      func_0x000107c61428(param_3 + 0x10,auStack_190,0,0);
      uVar11 = *(undefined8 *)(param_3 + 0x10);
      func_0x000107c614b0(uVar11);
      FUN_101e518fc(0,0xd000000000000014,0x800000010f0152c0);
      FUN_101e4e164(&uStack_1c8,uVar11,param_2 & 1);
      FUN_101e58a2c(&uStack_1c8,param_1,*(undefined8 *)(param_1 + _DAT_112e32cc0));
      uStack_e8 = uStack_1c0;
      uStack_f0 = uStack_1c8;
      func_0x000100bcb1dc(&uStack_f0);
      uStack_f8 = uStack_1b0;
      uStack_100 = uStack_1b8;
      func_0x000100bcb1dc(&uStack_100);
      *(undefined1 *)(param_1 + _DAT_112e32ce0) = 1;
      func_0x0001000a8868(param_1 + _DAT_112e32c38,*(undefined8 *)(param_1 + _DAT_112e32c38 + 0x18))
      ;
      uVar10 = 0;
      FUN_101e4c630(0);
      FUN_101e4c5d0(uVar11,0,0,8,uVar10,&PTR_DAT_11048e450);
      func_0x000107c614ac(uVar11);
    }
  }
  func_0x000107c61428(param_3 + 0x10,auStack_130,0,0);
  uVar9 = *(ulong *)(param_3 + 0x10);
  func_0x000107c614b0(uVar9);
  uVar6 = uVar9;
  FUN_101e4e07c();
  func_0x000107c614ac(uVar9);
  if ((uVar6 & 1) != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_178,0,0);
    uVar10 = *(undefined8 *)(param_1 + _DAT_112e32cf0);
    *(undefined8 *)(param_1 + _DAT_112e32cf0) = *(undefined8 *)(param_3 + 0x10);
    func_0x000107c614b0();
    func_0x000107c614ac(uVar10);
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112e32cd0);
  lVar12 = puVar1[1];
  uVar7 = 0;
  if (lVar12 != 0) {
    uVar10 = puVar1[4];
    uVar3 = puVar1[5];
    uVar11 = puVar1[2];
    uVar14 = puVar1[3];
    uVar13 = *puVar1;
    uVar5 = *(ushort *)(puVar1 + 6);
    uStack_b0 = uVar5 & 0x101;
    uVar2 = *(undefined8 *)(param_1 + _DAT_112e32ca0 + 0x18);
    lVar4 = *(long *)(param_1 + _DAT_112e32ca0 + 0x20);
    uStack_e0 = uVar13;
    lStack_d8 = lVar12;
    uStack_d0 = uVar11;
    uStack_c8 = uVar14;
    uStack_c0 = uVar10;
    uStack_b8 = uVar3;
    func_0x0001000a8868();
    uVar7 = *(undefined8 *)(param_1 + _DAT_112e32c30 + 0x30);
    func_0x000107c61428(param_3 + 0x10,auStack_160,0,0);
    uVar15 = *(undefined8 *)(param_3 + 0x10);
    pcVar8 = *(code **)(lVar4 + 0x28);
    FUN_101e595f0(uVar13,lVar12,uVar11,uVar14,uVar10,uVar3,uVar5);
    func_0x000107c614b0(uVar15);
    (*pcVar8)(&uStack_e0,uVar7,uVar15,uVar2,lVar4);
    func_0x000107c614ac(uVar15);
    FUN_101ad91a0(uVar13,lVar12,uVar11,uVar14,uVar10,uVar3,uVar5);
    uVar7 = 0;
  }
LAB_101e54090:
  func_0x0001000a8868(param_1 + _DAT_112e32c38,*(undefined8 *)(param_1 + _DAT_112e32c38 + 0x18));
  func_0x000107c61428(param_3 + 0x10,auStack_148,0,0);
  uVar11 = *(undefined8 *)(param_3 + 0x10);
  func_0x000107c614b0(uVar11);
  uVar10 = 0;
  FUN_101e4c630(0);
  FUN_101e4c5d0(uVar11,uVar7,0,6,uVar10,&PTR_DAT_11048e450);
  func_0x000107c614ac(uVar11);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101e5411c; end: 101e5424b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5411c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [24];
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  uVar5 = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e32c68) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e32c70) = 0;
  lVar1 = unaff_x20 + _DAT_112e32d08;
  func_0x000107c61428(lVar1,auStack_48,0,0);
  if (*(long *)(lVar1 + 0x18) != 0) {
    func_0x000101e597dc(lVar1,auStack_70);
    lVar2 = lStack_58;
    func_0x0001000a8868(auStack_70,lStack_58);
    (**(code **)(lStack_50 + 0x38))(lVar2,lStack_50);
    func_0x000101e5976c(auStack_70);
  }
  FUN_101e5966c(lVar1,auStack_70,0x112e32d70,&UNK_10da1be90);
  if (lStack_58 == 0) {
    func_0x000101e59ec0(auStack_70,0x112e32d70,&UNK_10da1be90);
  }
  else {
    uVar3 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar4 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    func_0x000107c6147c(auStack_80,auStack_70,uVar3,uVar4,6);
    if ((uVar5 & 1) != 0) {
      func_0x000107c615e8(auStack_80[0]);
    }
  }
  return;
}



/* Entry: 101e5424c; end: 101e54297; -[_TtC30SingleSnapPlayerImplementation30SingleSnapPlayerHostController init] */

void FUN_101e5424c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SingleSnapPlayerImplementation.SingleSnapPlayerHostController",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e54278);
  (*pcVar1)();
}



/* Entry: 101e54298; end: 101e5429f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e54298(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112e335e0;
  lVar3 = *(long *)(unaff_x20 + _DAT_112e32cc0);
  if (*(long *)(lVar3 + _DAT_112e335e0) != 0) {
    func_0x000107c4ff34();
    lVar2 = *(long *)(lVar3 + lVar2);
    if (lVar2 != 0) {
      lVar2 = lVar2 + _DAT_112e32be0;
      func_0x000107c61428(lVar2,auStack_58,1,0);
      *(undefined8 *)(lVar2 + 8) = 0;
      func_0x000107c61604(lVar2,0);
    }
  }
  lVar2 = _DAT_112e32ce0;
  if (*(char *)(unaff_x20 + _DAT_112e32ce0) == '\x01') {
    func_0x0001000a8868(unaff_x20 + _DAT_112e32c38,
                        *(undefined8 *)(unaff_x20 + _DAT_112e32c38 + 0x18));
    uVar1 = 0;
    FUN_101e4c630(0);
    FUN_101e4c5d0(4,0,0,10,uVar1,&PTR_DAT_11048e450);
  }
  *(undefined1 *)(unaff_x20 + lVar2) = 0;
  func_0x0001000a8868(unaff_x20 + _DAT_112e32c38,*(undefined8 *)(unaff_x20 + _DAT_112e32c38 + 0x18))
  ;
  uVar1 = 0;
  FUN_101e4c630(0);
  FUN_101e4c5d0(5,0,0,10,uVar1,&PTR_DAT_11048e450);
  return;
}



/* Entry: 101e542a0; end: 101e54307; -[_TtC30SingleSnapPlayerImplementation30SingleSnapPlayerHostController playbackSessionId] */

void FUN_101e542a0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101e54308();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e54308; end: 101e5443b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101e54308(void)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = unaff_x20 + _DAT_112e32d08;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lVar2 = *(long *)(lVar1 + 0x18);
  if (lVar2 == 0) {
    lVar1 = 0;
    lVar2 = 0;
  }
  else {
    lVar3 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,lVar2);
    lVar4 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    (**(code **)(lVar4 + 0x10))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    lVar1 = lVar2;
    (**(code **)(lVar3 + 0x40))(lVar2,lVar3);
    (**(code **)(lVar4 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    if (lVar1 != 0) {
      lVar3 = lVar1;
      func_0x000107c4e950();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      if (lVar3 != 0) {
        lVar1 = lVar3;
        func_0x000107c5faec(lVar3);
        func_0x000107c61170(lVar3);
        goto LAB_101e54424;
      }
    }
    lVar1 = 0;
    lVar2 = 0;
  }
LAB_101e54424:
  auVar5._8_8_ = lVar2;
  auVar5._0_8_ = lVar1;
  return auVar5;
}



/* Entry: 101e5443c; end: 101e54477; -[_TtC30SingleSnapPlayerImplementation30SingleSnapPlayerHostController accumulatedWatchTime] */

undefined8 FUN_101e5443c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_101e54478();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 101e54478; end: 101e54583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101e54478(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = unaff_x20 + _DAT_112e32d08;
  func_0x000107c61428(lVar1,auStack_68,0,0);
  lVar2 = *(long *)(lVar1 + 0x18);
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    lVar3 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,lVar2);
    lVar4 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    (**(code **)(lVar4 + 0x10))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    lVar1 = lVar2;
    (**(code **)(lVar3 + 0x40))(lVar2,lVar3);
    (**(code **)(lVar4 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x000107c3cf54(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return param_1;
}



/* Entry: 101e54584; end: 101e545d7; -[_TtC30SingleSnapPlayerImplementation30SingleSnapPlayerHostController mediaVariantSwitchHistory] */

void FUN_101e54584(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101e545d8();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  FUN_101e59f00(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101e545d8; end: 101e5470b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101e545d8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar6 = unaff_x20 + _DAT_112e32d08;
  func_0x000107c61428(lVar6,auStack_58,0,0);
  puVar4 = *(undefined **)(lVar6 + 0x18);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar4 != (undefined *)0x0) {
    lVar5 = *(long *)(lVar6 + 0x20);
    func_0x0001000a8868(lVar6,puVar4);
    lVar6 = *(long *)(puVar4 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
    (**(code **)(lVar6 + 0x10))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    puVar1 = puVar4;
    (**(code **)(lVar5 + 0x40))(puVar4,lVar5);
    (**(code **)(lVar6 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puVar4);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar1 != (undefined *)0x0) {
      puVar4 = puVar1;
      func_0x000107c4ca74(puVar1);
      func_0x000107c61180();
      func_0x000107c615e8(puVar1);
      uVar2 = 0;
      FUN_101e59f00(0);
      puVar3 = puVar4;
      func_0x000107c5fc54(puVar4,uVar2);
      func_0x000107c61170(puVar4);
    }
  }
  return puVar3;
}



/* Entry: 101e5470c; end: 101e5488b; -[_TtC30SingleSnapPlayerImplementation30SingleSnapPlayerHostController currentTime] */

void FUN_101e5470c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_2;
  func_0x000101e54768();
  func_0x000107c61170(param_2);
  *param_1 = uVar1;
  *(int *)(param_1 + 1) = (int)param_3;
  *(int *)((long)param_1 + 0xc) = (int)((ulong)param_3 >> 0x20);
  param_1[2] = param_4;
  return;
}



/* Entry: 101e5488c; end: 101e548bf; -[_TtC30SingleSnapPlayerImplementation30SingleSnapPlayerHostController playbackMode] */

undefined8 FUN_101e5488c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101e548c0();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101e548c0; end: 101e549c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101e548c0(void)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar4 = unaff_x20 + _DAT_112e32d08;
  func_0x000107c61428(lVar4,auStack_58,0,0);
  lVar2 = *(long *)(lVar4 + 0x18);
  if (lVar2 == 0) {
    lVar4 = -1;
  }
  else {
    lVar3 = *(long *)(lVar4 + 0x20);
    func_0x0001000a8868(lVar4,lVar2);
    lVar4 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    (**(code **)(lVar4 + 0x10))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    lVar1 = lVar2;
    (**(code **)(lVar3 + 0x40))(lVar2,lVar3);
    (**(code **)(lVar4 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    if (lVar1 == 0) {
      lVar4 = -1;
    }
    else {
      lVar4 = lVar1;
      func_0x000107c4e93c(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return lVar4;
}



/* Entry: 101e549c4; end: 101e549f7; -[_TtC30SingleSnapPlayerImplementation30SingleSnapPlayerHostController vsrAnalyticsData] */

void FUN_101e549c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101e549f8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e549f8; end: 101e54b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101e549f8(void)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar4 = unaff_x20 + _DAT_112e32d08;
  func_0x000107c61428(lVar4,auStack_58,0,0);
  lVar2 = *(long *)(lVar4 + 0x18);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar3 = *(long *)(lVar4 + 0x20);
    func_0x0001000a8868(lVar4,lVar2);
    lVar4 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    (**(code **)(lVar4 + 0x10))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    lVar1 = lVar2;
    (**(code **)(lVar3 + 0x40))(lVar2,lVar3);
    (**(code **)(lVar4 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    if (lVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar1;
      func_0x000107c5e050(lVar1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
    }
  }
  return lVar4;
}



/* Entry: 101e54b04; end: 101e54b37; -[_TtC30SingleSnapPlayerImplementation30SingleSnapPlayerHostController playbackSummary] */

void FUN_101e54b04(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101e54b38();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e54b38; end: 101e54d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101e54b38(void)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar4 = unaff_x20 + _DAT_112e32d08;
  func_0x000107c61428(lVar4,auStack_58,0,0);
  lVar2 = *(long *)(lVar4 + 0x18);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar3 = *(long *)(lVar4 + 0x20);
    func_0x0001000a8868(lVar4,lVar2);
    lVar4 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    (**(code **)(lVar4 + 0x10))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    lVar1 = lVar2;
    (**(code **)(lVar3 + 0x40))(lVar2,lVar3);
    (**(code **)(lVar4 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    if (lVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar1;
      func_0x000107c4e960(lVar1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
    }
  }
  return lVar4;
}



/* Entry: 101e54d30; end: 101e54dc3; -[_TtC30SingleSnapPlayerImplementation30SingleSnapPlayerHostController resetAnalytics] */

void FUN_101e54d30(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101e54c44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e54dc4; end: 101e55507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e54dc4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 **ppuVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auStack_148 [24];
  undefined8 **appuStack_130 [3];
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar5 = _DAT_112e32d08;
  lVar4 = _DAT_112e32d00;
  lVar3 = _DAT_112e32cf8;
  lVar18 = *(long *)(param_1[2] + 0x10);
  puVar10 = param_1;
  if (lVar18 != 0) {
    puVar11 = (undefined8 *)(unaff_x20 + _DAT_112e32c30);
    plVar17 = (long *)(param_1[2] + 0x28);
    do {
      lVar8 = plVar17[-1];
      lVar1 = *plVar17;
      lVar14 = plVar17[1];
      lVar15 = plVar17[3];
      lVar16 = plVar17[5];
      if (lVar1 == 0) {
        if (lVar14 != 2) goto LAB_101e54ea0;
        uStack_a8 = puVar11[1];
        uStack_b0 = *puVar11;
        uStack_98 = puVar11[3];
        lStack_a0 = puVar11[2];
        uStack_88 = puVar11[5];
        uStack_90 = puVar11[4];
        uVar19 = puVar11[7];
        uStack_80 = puVar11[6];
        uStack_78._1_1_ = (char)(uVar19 >> 8);
        cVar6 = uStack_78._1_1_;
        puVar9 = (undefined8 *)0x0;
        uStack_78 = uVar19;
        func_0x000101e5a160();
        puVar10 = puVar9;
        func_0x000107c613fc();
        puVar7 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        func_0x000107c610f8();
        func_0x000107c61434(lVar16);
        func_0x000107c61174(lVar8);
        func_0x000107c61434(lVar15);
        func_0x000101e4dba4(&uStack_b0,&puStack_f0);
        func_0x000107c453e4();
        puVar10[2] = puVar7;
        puVar10[3] = 0;
        puVar7 = PTR_PTR_1126b46f0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar10[4] = puVar7;
        *(undefined1 *)((long)puVar10 + 0x29) = 0;
        puVar7 = PTR_PTR_1126b46f0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar10[6] = puVar7;
        puVar10[8] = 0;
        func_0x000107c61614(puVar10 + 7,0);
        *(undefined1 *)(puVar10 + 9) = 0;
        puVar10[10] = 0;
        *(undefined1 *)(puVar10 + 5) = uStack_78._2_1_;
        if ((lStack_a0 == 0) || (lStack_a0 == 1)) {
          func_0x000107c53840(puVar10[2]);
          FUN_101ad90b8(&uStack_b0);
          if ((uVar19 & 0x100) != 0) goto LAB_101e55294;
        }
        else {
          func_0x000107c53840(puVar10[2]);
          FUN_101ad90b8(&uStack_b0);
          if (cVar6 != '\0') {
LAB_101e55294:
            puVar10[8] = &PTR_DAT_11048e778;
            func_0x000107c61604(puVar10 + 7,unaff_x20);
          }
        }
        ppuStack_d0 = &PTR_DAT_11048ebe0;
        puStack_d8 = puVar9;
        func_0x000107c6142c(lVar16);
        func_0x000107c6142c(lVar15);
        func_0x000107c61170(lVar8);
        lVar8 = lVar3;
        puStack_f0 = puVar10;
LAB_101e54e78:
        func_0x000107c61428(unaff_x20 + lVar8,appuStack_130,0x21,0);
        FUN_101e5978c(&puStack_f0,unaff_x20 + lVar8);
LAB_101e54e9c:
        puVar10 = (undefined8 *)0x0;
        func_0x000107c614a8();
      }
      else if (lVar1 == 3) {
        if (lVar14 == 2) {
          uStack_a8 = puVar11[1];
          uStack_b0 = *puVar11;
          uStack_98 = puVar11[3];
          lStack_a0 = puVar11[2];
          uStack_88 = puVar11[5];
          uStack_90 = puVar11[4];
          uVar19 = puVar11[7];
          uStack_80 = puVar11[6];
          uStack_78._1_1_ = (char)(uVar19 >> 8);
          cVar6 = uStack_78._1_1_;
          puVar9 = (undefined8 *)0x0;
          uStack_78 = uVar19;
          func_0x000101e5a160();
          puVar10 = puVar9;
          func_0x000107c613fc();
          puVar7 = PTR__OBJC_CLASS___UIImageView_1126aec28;
          func_0x000107c610f8();
          func_0x000107c61434(lVar16);
          func_0x000107c61174(lVar8);
          func_0x000107c61434(lVar15);
          func_0x000101e4dba4(&uStack_b0,&puStack_f0);
          func_0x000107c453e4();
          puVar10[2] = puVar7;
          puVar10[3] = 0;
          puVar7 = PTR_PTR_1126b46f0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar10[4] = puVar7;
          *(undefined1 *)((long)puVar10 + 0x29) = 0;
          puVar7 = PTR_PTR_1126b46f0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar10[6] = puVar7;
          puVar10[8] = 0;
          func_0x000107c61614(puVar10 + 7,0);
          *(undefined1 *)(puVar10 + 9) = 0;
          puVar10[10] = 0;
          *(undefined1 *)(puVar10 + 5) = uStack_78._2_1_;
          if ((lStack_a0 == 0) || (lStack_a0 == 1)) {
            func_0x000107c53840(puVar10[2]);
            FUN_101ad90b8(&uStack_b0);
            if ((uVar19 & 0x100) != 0) goto LAB_101e54e30;
          }
          else {
            func_0x000107c53840(puVar10[2]);
            FUN_101ad90b8(&uStack_b0);
            if (cVar6 != '\0') {
LAB_101e54e30:
              puVar10[8] = &PTR_DAT_11048e778;
              func_0x000107c61604(puVar10 + 7,unaff_x20);
            }
          }
          ppuStack_d0 = &PTR_DAT_11048ebe0;
          puStack_d8 = puVar9;
          func_0x000107c6142c(lVar16);
          func_0x000107c6142c(lVar15);
          func_0x000107c61170(lVar8);
          lVar8 = lVar4;
          puStack_f0 = puVar10;
          goto LAB_101e54e78;
        }
      }
      else if (lVar1 == 1) {
        if (lVar14 == 2) {
          uStack_a8 = puVar11[1];
          uStack_b0 = *puVar11;
          uStack_98 = puVar11[3];
          lStack_a0 = puVar11[2];
          uStack_88 = puVar11[5];
          uStack_90 = puVar11[4];
          uVar19 = puVar11[7];
          uStack_80 = puVar11[6];
          uStack_78._1_1_ = (char)(uVar19 >> 8);
          cVar6 = uStack_78._1_1_;
          puVar9 = (undefined8 *)0x0;
          uStack_78 = uVar19;
          func_0x000101e5a160();
          puVar10 = puVar9;
          func_0x000107c613fc();
          puVar7 = PTR__OBJC_CLASS___UIImageView_1126aec28;
          func_0x000107c610f8();
          func_0x000107c61434(lVar16);
          func_0x000107c61174(lVar8);
          func_0x000107c61434(lVar15);
          func_0x000101e4dba4(&uStack_b0,&puStack_f0);
          func_0x000107c453e4();
          puVar10[2] = puVar7;
          puVar10[3] = 0;
          puVar7 = PTR_PTR_1126b46f0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar10[4] = puVar7;
          *(undefined1 *)((long)puVar10 + 0x29) = 0;
          puVar7 = PTR_PTR_1126b46f0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar10[6] = puVar7;
          puVar10[8] = 0;
          func_0x000107c61614(puVar10 + 7,0);
          *(undefined1 *)(puVar10 + 9) = 0;
          puVar10[10] = 0;
          *(undefined1 *)(puVar10 + 5) = uStack_78._2_1_;
          uVar12 = puVar10[2];
          if (lStack_a0 == 0) {
            func_0x000107c53840(uVar12);
            FUN_101ad90b8(&uStack_b0);
joined_r0x000101e5532c:
            if ((uVar19 & 0x100) != 0) {
LAB_101e55214:
              puVar10[8] = &PTR_DAT_11048e778;
              func_0x000107c61604(puVar10 + 7,unaff_x20);
            }
          }
          else {
            if (lStack_a0 == 1) {
              func_0x000107c53840(uVar12);
              FUN_101ad90b8(&uStack_b0);
              goto joined_r0x000101e5532c;
            }
            func_0x000107c53840(uVar12);
            FUN_101ad90b8(&uStack_b0);
            if (cVar6 != '\0') goto LAB_101e55214;
          }
          ppuStack_d0 = &PTR_DAT_11048ebe0;
          puStack_d8 = puVar9;
          func_0x000107c6142c(lVar16);
          func_0x000107c6142c(lVar15);
          func_0x000107c61170(lVar8);
          lVar8 = lVar5;
          puStack_f0 = puVar10;
          goto LAB_101e54e78;
        }
        if (lVar14 != 3) goto LAB_101e54ea0;
        uVar12 = *param_1;
        uVar2 = param_1[1];
        func_0x000107c61434(lVar16);
        func_0x000107c61174(lVar8);
        func_0x000107c61434(lVar15);
        FUN_101e50984(&uStack_b0,uVar12,uVar2);
        func_0x000107c6142c(lVar16);
        func_0x000107c6142c(lVar15);
        func_0x000107c61170(lVar8);
        func_0x000107c61428(unaff_x20 + lVar5,&puStack_f0,0x21,0);
        FUN_101e5978c(&uStack_b0,unaff_x20 + lVar5);
        goto LAB_101e54e9c;
      }
LAB_101e54ea0:
      plVar17 = plVar17 + 7;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  if ((*(byte *)((long)param_1 + 0x31) & 1) != 0) {
    puVar10 = (undefined8 *)(unaff_x20 + _DAT_112e32c30);
    uStack_a8 = puVar10[1];
    uStack_b0 = *puVar10;
    uStack_98 = puVar10[3];
    lStack_a0 = puVar10[2];
    uStack_88 = puVar10[5];
    uStack_90 = puVar10[4];
    uVar19 = puVar10[7];
    uStack_80 = puVar10[6];
    puVar10 = (undefined8 *)0x0;
    uStack_78 = uVar19;
    func_0x000101e5a160();
    func_0x000107c613fc();
    func_0x000101e4dba4(&uStack_b0,&puStack_f0);
    puVar11 = &uStack_b0;
    FUN_101e5aabc();
    FUN_101ad90b8(&uStack_b0);
    if ((uVar19 & 0x100) != 0) {
      puVar11[8] = &PTR_DAT_11048e778;
      func_0x000107c61604(puVar11 + 7,unaff_x20);
    }
    lVar18 = _DAT_112e32d00;
    ppuStack_d0 = &PTR_DAT_11048ebe0;
    puStack_f0 = puVar11;
    puStack_d8 = puVar10;
    func_0x000107c61428(unaff_x20 + _DAT_112e32d00,appuStack_130,0x21,0);
    FUN_101e5978c(&puStack_f0,unaff_x20 + lVar18);
    puVar10 = (undefined8 *)0x0;
    func_0x000107c614a8();
  }
  func_0x000103b25524();
  if (((ulong)puVar10 & 1) != 0) {
    puVar10 = (undefined8 *)(unaff_x20 + _DAT_112e32c30);
    uStack_c8 = puVar10[5];
    ppuStack_d0 = (undefined **)puVar10[4];
    uVar19 = puVar10[7];
    uStack_c0 = puVar10[6];
    uStack_e8 = puVar10[1];
    puStack_f0 = (undefined8 *)*puVar10;
    puStack_d8 = (undefined8 *)puVar10[3];
    uStack_e0 = puVar10[2];
    uVar12 = 0;
    uStack_b8 = uVar19;
    func_0x000101e5a160();
    func_0x000107c613fc();
    func_0x000101e4dba4(&puStack_f0,appuStack_130);
    ppuVar13 = &puStack_f0;
    FUN_101e5aabc();
    FUN_101ad90b8(&puStack_f0);
    if ((uVar19 & 0x100) != 0) {
      ppuVar13[8] = &PTR_DAT_11048e778;
      func_0x000107c61604(ppuVar13 + 7,unaff_x20);
    }
    lVar18 = _DAT_112e32cf8;
    ppuStack_110 = &PTR_DAT_11048ebe0;
    appuStack_130[0] = ppuVar13;
    uStack_118 = uVar12;
    func_0x000107c61428(unaff_x20 + _DAT_112e32cf8,auStack_148,0x21,0);
    FUN_101e5978c(appuStack_130,unaff_x20 + lVar18);
    func_0x000107c614a8(auStack_148);
  }
  FUN_101e58b5c();
  return;
}



/* Entry: 101e55508; end: 101e5563f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e55508(ulong *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000101e597dc(lVar1 + _DAT_112e32ca0,auStack_90);
    func_0x000107c61170(lVar1);
    func_0x0001000a8868(auStack_90,uStack_78);
    func_0x000107c61428(param_3 + 0x10,auStack_a8,0,0);
    lVar1 = param_3 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + _DAT_112e32c30 + 0x30);
      func_0x000107c61170();
    }
    (**(code **)(lStack_70 + 0x10))(param_2,uVar2,uStack_78,lStack_70);
    func_0x000101e5976c(auStack_90);
  }
  if (uVar3 < 4) {
    func_0x000107c61428(param_3 + 0x10,auStack_90,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      func_0x000101e52dd0(param_1);
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 101e55640; end: 101e557fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e55640(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined1 *)(param_1 + 2);
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  lVar4 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000101e597dc(lVar4 + _DAT_112e32ca0,auStack_a0);
    func_0x000107c61170(lVar4);
    func_0x0001000a8868(auStack_a0,uStack_88);
    func_0x000107c61428(param_3 + 0x10,auStack_b8,0,0);
    puVar5 = (undefined8 *)(param_3 + 0x10);
    func_0x000107c61618();
    if (puVar5 == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)((long)puVar5 + _DAT_112e32c30 + 0x30);
      func_0x000107c61170();
    }
    FUN_101e49d98();
    puVar6 = &UNK_1106d42b0;
    func_0x000107c613f8(&UNK_1106d42b0,puVar5,0,0);
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    *(undefined1 *)(puVar5 + 2) = uVar3;
    pcVar8 = *(code **)(lStack_80 + 0x18);
    FUN_101e49dd8(uVar1,uVar2,uVar3);
    (*pcVar8)(param_2,uVar9,puVar6,uStack_88,lStack_80);
    func_0x000107c614ac(puVar6);
    func_0x000101e5976c(auStack_a0);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_a0,0,0);
  puVar5 = (undefined8 *)(param_3 + 0x10);
  func_0x000107c61618();
  if (puVar5 != (undefined8 *)0x0) {
    puVar7 = puVar5;
    FUN_101e49d98();
    puVar6 = &UNK_1106d42b0;
    func_0x000107c613f8(&UNK_1106d42b0,puVar7,0,0);
    *puVar7 = uVar1;
    puVar7[1] = uVar2;
    *(undefined1 *)(puVar7 + 2) = uVar3;
    FUN_101e49dd8(uVar1,uVar2,uVar3);
    FUN_101e515e8(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c614ac(puVar6);
  }
  return;
}



/* Entry: 101e557fc; end: 101e55823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e557fc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + _DAT_112e32cc0));
  return;
}



/* Entry: 101e55824; end: 101e5586f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e55824(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112e32c38,*(undefined8 *)(unaff_x20 + _DAT_112e32c38 + 0x18))
  ;
  FUN_101e4c22c(param_1,param_2);
  return;
}



/* Entry: 101e55870; end: 101e55873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e55870(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112e32c38);
  func_0x0001000a8868(plVar1,plVar1[3]);
  lVar3 = *plVar1;
  lVar4 = *(long *)(lVar3 + 0x10);
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c6157c(lVar4);
    func_0x000100c82230();
    func_0x000107c61574(lVar4);
    uVar2 = *(undefined8 *)(lVar3 + 0x10);
  }
  *(undefined8 *)(lVar3 + 0x10) = 0;
  func_0x000107c61574(uVar2);
  *(undefined8 *)(lVar3 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(lVar3 + 0x28,0);
  return;
}



/* Entry: 101e55874; end: 101e55a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e55874(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_112e32d08;
  func_0x000107c61428(lVar1,auStack_48,0,0);
  if (*(long *)(lVar1 + 0x18) != 0) {
    func_0x000101e597dc(lVar1,auStack_70);
    func_0x0001000a8868(auStack_70,uStack_58);
    (**(code **)(lStack_50 + 0x20))(uStack_58,lStack_50);
    func_0x000101e5976c(auStack_70);
  }
  return;
}



/* Entry: 101e55a90; end: 101e55afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_101e55a90(long *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = 0x78;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x78,0x35ba);
  }
  lVar3 = _DAT_112e32d38;
  *(long *)(lVar4 + 0x68) = unaff_x20;
  *(long *)(lVar4 + 0x70) = lVar3;
  puVar1 = (undefined8 *)(unaff_x20 + lVar3);
  uVar2 = *(undefined1 *)(puVar1 + 1);
  *(undefined8 *)(lVar4 + 0x58) = *puVar1;
  *param_1 = lVar4;
  *(undefined1 *)(lVar4 + 0x60) = uVar2;
  return FUN_101e55afc;
}



/* Entry: 101e55afc; end: 101e55cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e55afc(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar5 = *param_1;
  puVar8 = (undefined8 *)(*(long *)(lVar5 + 0x68) + *(long *)(lVar5 + 0x70));
  uVar1 = *(undefined1 *)(lVar5 + 0x60);
  *puVar8 = *(undefined8 *)(lVar5 + 0x58);
  *(undefined1 *)(puVar8 + 1) = uVar1;
  lVar7 = _DAT_112e32d08;
  lVar6 = *(long *)(lVar5 + 0x68);
  if ((param_2 & 1) == 0) {
    func_0x000107c61428(lVar6 + _DAT_112e32d08,lVar5 + 0x40,0,0);
    FUN_101e5966c(lVar6 + lVar7,lVar5,0x112e32d70,&UNK_10da1be90);
    if (*(long *)(lVar5 + 0x18) == 0) goto LAB_101e55c80;
    uVar2 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar3 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    uVar4 = lVar5 + 0x28;
    func_0x000107c6147c(uVar4,lVar5,uVar2,uVar3,6);
    if ((uVar4 & 1) == 0) goto LAB_101e55c98;
    puVar8 = (undefined8 *)(*(long *)(lVar5 + 0x68) + *(long *)(lVar5 + 0x70));
    uVar2 = *(undefined8 *)(lVar5 + 0x28);
    lVar7 = *(long *)(lVar5 + 0x30);
  }
  else {
    func_0x000107c61428(lVar6 + _DAT_112e32d08,lVar5 + 0x28,0,0);
    FUN_101e5966c(lVar6 + lVar7,lVar5,0x112e32d70,&UNK_10da1be90);
    if (*(long *)(lVar5 + 0x18) == 0) {
LAB_101e55c80:
      func_0x000101e59ec0(lVar5,0x112e32d70,&UNK_10da1be90);
      goto LAB_101e55c98;
    }
    uVar2 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar3 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    uVar4 = lVar5 + 0x40;
    func_0x000107c6147c(uVar4,lVar5,uVar2,uVar3,6);
    if ((uVar4 & 1) == 0) goto LAB_101e55c98;
    puVar8 = (undefined8 *)(*(long *)(lVar5 + 0x68) + *(long *)(lVar5 + 0x70));
    uVar2 = *(undefined8 *)(lVar5 + 0x40);
    lVar7 = *(long *)(lVar5 + 0x48);
  }
  uVar3 = uVar2;
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar7 + 0x18))(*puVar8,*(undefined1 *)(puVar8 + 1),uVar3,lVar7);
  func_0x000107c615e8(uVar2);
LAB_101e55c98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar5);
  return;
}



/* Entry: 101e55cac; end: 101e55dab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101e55cac(void)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = unaff_x20 + _DAT_112e32d08;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lVar2 = *(long *)(lVar1 + 0x18);
  if (lVar2 == 0) {
    uVar3 = (uint)(*(long *)(unaff_x20 + _DAT_112e32d38) == 0 &&
                  (char)((long *)(unaff_x20 + _DAT_112e32d38))[1] == '\x01');
  }
  else {
    lVar4 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,lVar2);
    lVar5 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    (**(code **)(lVar5 + 0x10))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    lVar1 = lVar2;
    (**(code **)(lVar4 + 0x48))(lVar2,lVar4);
    uVar3 = (uint)lVar1;
    (**(code **)(lVar5 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  }
  return uVar3 & 1;
}



/* Entry: 101e55dac; end: 101e55e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101e55dac(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x20;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  long lStack_30;
  
  lVar1 = _DAT_112e32d08;
  uVar4 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112e32d08,auStack_60,0,0);
  FUN_101e5966c(unaff_x20 + lVar1,auStack_48,0x112e32d70,&UNK_10da1be90);
  if (lStack_30 == 0) {
    func_0x000101e59ec0(auStack_48,0x112e32d70,&UNK_10da1be90);
  }
  else {
    uVar2 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar3 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    func_0x000107c6147c(&uStack_70,auStack_48,uVar2,uVar3,6);
    if ((uVar4 & 1) != 0) {
      uVar2 = uStack_70;
      func_0x000107c614f0(uStack_70);
      uVar5 = (uint)uVar2;
      (**(code **)(lStack_68 + 8))();
      func_0x000107c615e8(uStack_70);
      goto LAB_101e55e88;
    }
  }
  uVar5 = 0;
LAB_101e55e88:
  return uVar5 & 1;
}



/* Entry: 101e55e9c; end: 101e55fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e55e9c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  lVar2 = _DAT_112e32c68;
  uVar5 = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e32c68) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112e32c88) = 0;
  lVar1 = unaff_x20 + _DAT_112e32d08;
  func_0x000107c61428(lVar1,auStack_70,0,0);
  FUN_101e5966c(lVar1,auStack_58,0x112e32d70,&UNK_10da1be90);
  if (lStack_40 == 0) {
    func_0x000101e59ec0(auStack_58,0x112e32d70,&UNK_10da1be90);
  }
  else {
    uVar3 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar4 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    func_0x000107c6147c(&uStack_80,auStack_58,uVar3,uVar4,6);
    if ((uVar5 & 1) != 0) {
      func_0x000107c614f0(uStack_80);
      (**(code **)(lStack_78 + 0x28))();
      func_0x000107c615e8(uStack_80);
      return;
    }
  }
  if (*(long *)(lVar1 + 0x18) != 0) {
    func_0x000101e597dc(lVar1,auStack_58);
    func_0x0001000a8868(auStack_58,lStack_40);
    (**(code **)(lStack_38 + 0x18))(*(undefined1 *)(unaff_x20 + lVar2),lStack_40,lStack_38);
    func_0x000101e5976c(auStack_58);
  }
  return;
}



/* Entry: 101e55ff0; end: 101e56043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e55ff0(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112e32c80) = 0;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101e56044; end: 101e5631f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e56044(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  long lStack_40;
  
  lVar1 = _DAT_112e32d08;
  uVar4 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112e32d08,auStack_70,0,0);
  FUN_101e5966c(unaff_x20 + lVar1,auStack_58,0x112e32d70,&UNK_10da1be90);
  if (lStack_40 == 0) {
    func_0x000101e59ec0(auStack_58,0x112e32d70,&UNK_10da1be90);
  }
  else {
    uVar2 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar3 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    func_0x000107c6147c(&uStack_80,auStack_58,uVar2,uVar3,6);
    if ((uVar4 & 1) != 0) {
      func_0x000107c614f0(uStack_80);
      (**(code **)(lStack_78 + 0xb8))(param_1);
      func_0x000107c615e8(uStack_80);
    }
  }
  return;
}



/* Entry: 101e56320; end: 101e56497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e56320(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long lStack_60;
  
  lVar5 = _DAT_112e32d08;
  uVar3 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112e32d08,auStack_90,0,0);
  FUN_101e5966c(unaff_x20 + lVar5,auStack_78,0x112e32d70,&UNK_10da1be90);
  if (lStack_60 == 0) {
    func_0x000101e59ec0(auStack_78,0x112e32d70,&UNK_10da1be90);
  }
  else {
    uVar1 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar2 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    func_0x000107c6147c(&uStack_a0,auStack_78,uVar1,uVar2,6);
    if ((uVar3 & 1) != 0) {
      uVar1 = uStack_a0;
      func_0x000107c614f0(uStack_a0);
      (**(code **)(lStack_98 + 0x58))(param_1,uVar1,lStack_98);
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)(param_1 + 0x30);
        do {
          uVar1 = puVar6[-1];
          uVar2 = *puVar6;
          uVar4 = puVar6[-2];
          func_0x000107c61434(uVar1);
          func_0x000107c61434(uVar2);
          uVar3 = 0x6e6576655f736461;
          func_0x000107c5fbb4(0x6e6576655f736461,0xe900000000000074,uVar4,uVar1);
          func_0x000107c6142c(uVar1);
          func_0x000107c6142c(uVar2);
          if ((uVar3 & 1) != 0) break;
          puVar6 = puVar6 + 3;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      func_0x000107c615e8(uStack_a0);
    }
  }
  return;
}



/* Entry: 101e56498; end: 101e565e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e56498(undefined8 param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  long lStack_80;
  
  lVar1 = _DAT_112e32d08;
  func_0x000107c61428(unaff_x20 + _DAT_112e32d08,auStack_b0,0,0);
  FUN_101e5966c(unaff_x20 + lVar1,auStack_98,0x112e32d70,&UNK_10da1be90);
  if (lStack_80 == 0) {
    func_0x000101e59ec0(auStack_98,0x112e32d70,&UNK_10da1be90);
  }
  else {
    uVar2 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar3 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    puVar4 = &uStack_c0;
    func_0x000107c6147c(puVar4,auStack_98,uVar2,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      uVar2 = uStack_c0;
      func_0x000107c614f0(uStack_c0);
      (**(code **)(lStack_b8 + 0x50))
                (param_1,param_2 & 1,param_3 & 1,param_4 & 1,param_5,param_6,param_7,param_8,uVar2,
                 lStack_b8);
      func_0x000107c615e8(uStack_c0);
    }
  }
  return;
}



/* Entry: 101e565e8; end: 101e56837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e565e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long lStack_60;
  
  lVar1 = _DAT_112e32d08;
  uVar4 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112e32d08,auStack_90,0,0);
  FUN_101e5966c(unaff_x20 + lVar1,auStack_78,0x112e32d70,&UNK_10da1be90);
  if (lStack_60 == 0) {
    func_0x000101e59ec0(auStack_78,0x112e32d70,&UNK_10da1be90);
  }
  else {
    uVar2 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar3 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    func_0x000107c6147c(&uStack_a0,auStack_78,uVar2,uVar3,6);
    if ((uVar4 & 1) != 0) {
      uVar2 = uStack_a0;
      func_0x000107c614f0(uStack_a0);
      (**(code **)(lStack_98 + 0x60))(param_1,param_2,param_3,param_4,param_5,uVar2,lStack_98);
      func_0x000107c615e8(uStack_a0);
    }
  }
  return;
}



/* Entry: 101e56838; end: 101e56ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101e56838(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  long lStack_40;
  
  lVar1 = _DAT_112e32d08;
  uVar4 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112e32d08,auStack_70,0,0);
  FUN_101e5966c(unaff_x20 + lVar1,auStack_58,0x112e32d70,&UNK_10da1be90);
  if (lStack_40 == 0) {
    func_0x000101e59ec0(auStack_58,0x112e32d70,&UNK_10da1be90);
  }
  else {
    uVar2 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar3 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    func_0x000107c6147c(&uStack_80,auStack_58,uVar2,uVar3,6);
    if ((uVar4 & 1) != 0) {
      uVar2 = uStack_80;
      func_0x000107c614f0(uStack_80);
      (**(code **)(lStack_78 + 0x70))();
      func_0x000107c615e8(uStack_80);
      return uVar2;
    }
  }
  return *(undefined8 *)PTR__kCMTimeZero_110348670;
}



/* Entry: 101e56ab8; end: 101e56bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101e56ab8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x20;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  long lStack_30;
  
  lVar1 = _DAT_112e32d08;
  uVar4 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112e32d08,auStack_60,0,0);
  FUN_101e5966c(unaff_x20 + lVar1,auStack_48,0x112e32d70,&UNK_10da1be90);
  if (lStack_30 == 0) {
    func_0x000101e59ec0(auStack_48,0x112e32d70,&UNK_10da1be90);
  }
  else {
    uVar2 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar3 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    func_0x000107c6147c(&uStack_70,auStack_48,uVar2,uVar3,6);
    if ((uVar4 & 1) != 0) {
      uVar2 = uStack_70;
      func_0x000107c614f0(uStack_70);
      uVar5 = (uint)uVar2;
      (**(code **)(lStack_68 + 0x88))();
      func_0x000107c615e8(uStack_70);
      goto LAB_101e56bbc;
    }
  }
  if (*(char *)(unaff_x20 + _DAT_112e32c30 + 0x3b) == '\x01') {
    uVar5 = (uint)*(byte *)(unaff_x20 + _DAT_112e32d18);
  }
  else {
    uVar5 = 0;
  }
LAB_101e56bbc:
  return uVar5 & 1;
}



/* Entry: 101e56bd0; end: 101e56cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e56bd0(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  long lStack_40;
  
  uVar4 = 0;
  if (*(char *)(unaff_x20 + _DAT_112e32c30 + 0x3b) == '\x01') {
    *(byte *)(unaff_x20 + _DAT_112e32d18) = param_1 & 1;
  }
  lVar1 = _DAT_112e32d08;
  func_0x000107c61428(unaff_x20 + _DAT_112e32d08,auStack_70,0,0);
  FUN_101e5966c(unaff_x20 + lVar1,auStack_58,0x112e32d70,&UNK_10da1be90);
  if (lStack_40 == 0) {
    func_0x000101e59ec0(auStack_58,0x112e32d70,&UNK_10da1be90);
  }
  else {
    uVar2 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar3 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    func_0x000107c6147c(&uStack_80,auStack_58,uVar2,uVar3,6);
    if ((uVar4 & 1) != 0) {
      uVar2 = uStack_80;
      func_0x000107c614f0(uStack_80);
      (**(code **)(lStack_78 + 0x90))(param_1 & 1,uVar2,lStack_78);
      func_0x000107c615e8(uStack_80);
    }
  }
  return;
}



/* Entry: 101e56cf0; end: 101e56f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101e56cf0(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  long lStack_40;
  
  lVar1 = _DAT_112e32d08;
  uVar4 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112e32d08,auStack_70,0,0);
  FUN_101e5966c(unaff_x20 + lVar1,auStack_58,0x112e32d70,&UNK_10da1be90);
  if (lStack_40 == 0) {
    func_0x000101e59ec0(auStack_58,0x112e32d70,&UNK_10da1be90);
  }
  else {
    uVar2 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar3 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    func_0x000107c6147c(&uStack_80,auStack_58,uVar2,uVar3,6);
    if ((uVar4 & 1) != 0) {
      func_0x000107c614f0(uStack_80);
      (**(code **)(lStack_78 + 0xa0))();
      func_0x000107c615e8(uStack_80);
      return param_1;
    }
  }
  uVar4 = 0;
  if ((*(char *)(unaff_x20 + _DAT_112e32c30 + 0x3b) == '\x01') &&
     ((char)((uint *)(unaff_x20 + _DAT_112e32d20))[1] != '\x01')) {
    uVar4 = (ulong)*(uint *)(unaff_x20 + _DAT_112e32d20);
  }
  return uVar4;
}



/* Entry: 101e56f3c; end: 101e56f5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101e56f3c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x20;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  long lStack_30;
  
  lVar1 = _DAT_112e32d08;
  uVar4 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112e32d08,auStack_60,0,0);
  FUN_101e5966c(unaff_x20 + lVar1,auStack_48,0x112e32d70,&UNK_10da1be90);
  if (lStack_30 == 0) {
    func_0x000101e59ec0(auStack_48,0x112e32d70,&UNK_10da1be90);
  }
  else {
    uVar2 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar3 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    func_0x000107c6147c(&uStack_70,auStack_48,uVar2,uVar3,6);
    if ((uVar4 & 1) != 0) {
      uVar2 = uStack_70;
      func_0x000107c614f0(uStack_70);
      uVar5 = (uint)uVar2;
      (**(code **)(lStack_68 + 8))();
      func_0x000107c615e8(uStack_70);
      goto LAB_101e55e88;
    }
  }
  uVar5 = 0;
LAB_101e55e88:
  return uVar5 & 1;
}



/* Entry: 101e56f5c; end: 101e56fb7;  */

code * FUN_101e56f5c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x225c);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_101e55a90();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_101e56fb8;
}



/* Entry: 101e56fb8; end: 101e56fe3;  */

void FUN_101e56fb8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 101e56fe4; end: 101e5700f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e56fe4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  lVar2 = _DAT_112e32c68;
  uVar5 = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e32c68) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112e32c88) = 0;
  lVar1 = unaff_x20 + _DAT_112e32d08;
  func_0x000107c61428(lVar1,auStack_70,0,0);
  FUN_101e5966c(lVar1,auStack_58,0x112e32d70,&UNK_10da1be90);
  if (lStack_40 == 0) {
    func_0x000101e59ec0(auStack_58,0x112e32d70,&UNK_10da1be90);
  }
  else {
    uVar3 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar4 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    func_0x000107c6147c(&uStack_80,auStack_58,uVar3,uVar4,6);
    if ((uVar5 & 1) != 0) {
      func_0x000107c614f0(uStack_80);
      (**(code **)(lStack_78 + 0x28))();
      func_0x000107c615e8(uStack_80);
      return;
    }
  }
  if (*(long *)(lVar1 + 0x18) != 0) {
    func_0x000101e597dc(lVar1,auStack_58);
    func_0x0001000a8868(auStack_58,lStack_40);
    (**(code **)(lStack_38 + 0x18))(*(undefined1 *)(unaff_x20 + lVar2),lStack_40,lStack_38);
    func_0x000101e5976c(auStack_58);
  }
  return;
}



/* Entry: 101e57010; end: 101e57057;  */

void FUN_101e57010(undefined8 *param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000101e56958(&uStack_58);
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[3] = uStack_40;
  param_1[2] = uStack_48;
  param_1[5] = uStack_30;
  param_1[4] = uStack_38;
  param_1[6] = uStack_28;
  return;
}



/* Entry: 101e57058; end: 101e5705f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101e57058(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x20;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  long lStack_30;
  
  lVar1 = _DAT_112e32d08;
  uVar4 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112e32d08,auStack_60,0,0);
  FUN_101e5966c(unaff_x20 + lVar1,auStack_48,0x112e32d70,&UNK_10da1be90);
  if (lStack_30 == 0) {
    func_0x000101e59ec0(auStack_48,0x112e32d70,&UNK_10da1be90);
  }
  else {
    uVar2 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar3 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    func_0x000107c6147c(&uStack_70,auStack_48,uVar2,uVar3,6);
    if ((uVar4 & 1) != 0) {
      uVar2 = uStack_70;
      func_0x000107c614f0(uStack_70);
      uVar5 = (uint)uVar2;
      (**(code **)(lStack_68 + 0x88))();
      func_0x000107c615e8(uStack_70);
      goto LAB_101e56bbc;
    }
  }
  if (*(char *)(unaff_x20 + _DAT_112e32c30 + 0x3b) == '\x01') {
    uVar5 = (uint)*(byte *)(unaff_x20 + _DAT_112e32d18);
  }
  else {
    uVar5 = 0;
  }
LAB_101e56bbc:
  return uVar5 & 1;
}



/* Entry: 101e57060; end: 101e570bb;  */

undefined1  [16] FUN_101e57060(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  puVar1 = param_1;
  FUN_101e56ab8();
  *(byte *)(param_1 + 1) = (byte)puVar1 & 1;
  auVar2._8_8_ = param_1 + 1;
  auVar2._0_8_ = 0x101e57098;
  return auVar2;
}



/* Entry: 101e570bc; end: 101e570c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101e570bc(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  long lStack_40;
  
  lVar1 = _DAT_112e32d08;
  uVar4 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112e32d08,auStack_70,0,0);
  FUN_101e5966c(unaff_x20 + lVar1,auStack_58,0x112e32d70,&UNK_10da1be90);
  if (lStack_40 == 0) {
    func_0x000101e59ec0(auStack_58,0x112e32d70,&UNK_10da1be90);
  }
  else {
    uVar2 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar3 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    func_0x000107c6147c(&uStack_80,auStack_58,uVar2,uVar3,6);
    if ((uVar4 & 1) != 0) {
      func_0x000107c614f0(uStack_80);
      (**(code **)(lStack_78 + 0xa0))();
      func_0x000107c615e8(uStack_80);
      return param_1;
    }
  }
  uVar4 = 0;
  if ((*(char *)(unaff_x20 + _DAT_112e32c30 + 0x3b) == '\x01') &&
     ((char)((uint *)(unaff_x20 + _DAT_112e32d20))[1] != '\x01')) {
    uVar4 = (ulong)*(uint *)(unaff_x20 + _DAT_112e32d20);
  }
  return uVar4;
}



/* Entry: 101e570c4; end: 101e5711b;  */

undefined1  [16] FUN_101e570c4(undefined4 param_1,undefined8 *param_2)

{
  undefined8 unaff_x20;
  undefined1 auVar1 [16];
  
  *param_2 = unaff_x20;
  FUN_101e56cf0();
  *(undefined4 *)(param_2 + 1) = param_1;
  auVar1._8_8_ = param_2 + 1;
  auVar1._0_8_ = 0x101e570f8;
  return auVar1;
}



/* Entry: 101e5711c; end: 101e5711f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5711c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  long lStack_40;
  
  lVar1 = _DAT_112e32d08;
  uVar4 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112e32d08,auStack_70,0,0);
  FUN_101e5966c(unaff_x20 + lVar1,auStack_58,0x112e32d70,&UNK_10da1be90);
  if (lStack_40 == 0) {
    func_0x000101e59ec0(auStack_58,0x112e32d70,&UNK_10da1be90);
  }
  else {
    uVar2 = 0x112e32d78;
    func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
    uVar3 = 0x112e32d80;
    func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
    func_0x000107c6147c(&uStack_80,auStack_58,uVar2,uVar3,6);
    if ((uVar4 & 1) != 0) {
      func_0x000107c614f0(uStack_80);
      (**(code **)(lStack_78 + 0xb8))(param_1);
      func_0x000107c615e8(uStack_80);
    }
  }
  return;
}



/* Entry: 101e57120; end: 101e572ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e57120(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long extraout_x8;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  param_2 = param_2 + _DAT_112e32d08;
  func_0x000107c61428(param_2,auStack_88,0,0);
  lVar4 = *(long *)(param_2 + 0x18);
  if (lVar4 != 0) {
    lVar6 = *(long *)(param_2 + 0x20);
    func_0x0001000a8868(param_2,lVar4);
    lVar8 = *(long *)(lVar4 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    (**(code **)(lVar8 + 0x10))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    lVar1 = lVar4;
    (**(code **)(lVar6 + 0x40))(lVar4,lVar6);
    (**(code **)(lVar8 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
    if (lVar1 != 0) {
      func_0x000107c41014(&puStack_b8,lVar1);
      func_0x000107c615e8(lVar1);
      puVar5 = puStack_b8;
      puVar7 = puStack_a8;
      uVar9 = uStack_b0;
      goto LAB_101e57238;
    }
  }
  puVar5 = *(undefined **)PTR__kCMTimeZero_110348670;
  uVar9 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  puVar7 = *(undefined **)(PTR__kCMTimeZero_110348670 + 0x10);
LAB_101e57238:
  puVar2 = &UNK_11048ead8;
  func_0x000107c613fc(&UNK_11048ead8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  uStack_98 = 0x101e59ea0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_10130cf28;
  puStack_a0 = &UNK_11048eaf0;
  ppuVar3 = &puStack_b8;
  puStack_90 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_90;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar2);
  puStack_b8 = puVar5;
  uStack_b0 = uVar9;
  puStack_a8 = puVar7;
  func_0x000107c45038(param_1);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101e572f0; end: 101e573bf; -[_TtC30SingleSnapPlayerImplementation30SingleSnapPlayerHostController currentSnapshotWithPerformer:completion:] */

void FUN_101e572f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101e59a98(param_3,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e573c0; end: 101e575b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101e573c0(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  func_0x000103b2dc40();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar5 = (undefined8 *)((long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar5 - extraout_x12;
  lVar6 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = _DAT_112e32cd8;
  lVar8 = lVar7 - extraout_x8_00;
  puVar4 = auStack_68;
  func_0x000107c61428(unaff_x20 + _DAT_112e32cd8,puVar4,0x20,0);
  lVar6 = *(long *)(unaff_x20 + lVar6);
  if (*(long *)(lVar6 + 0x10) == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = 1;
    lVar2 = 1;
    FUN_101e5b638(1);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x000101e3cf64(*(long *)(lVar6 + 0x38) + *(long *)(lVar10 + 0x48) * lVar2,lVar8);
      uVar9 = 0;
    }
  }
  (**(code **)(lVar10 + 0x38))(lVar8,uVar9,1,lVar1);
  lVar6 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar1);
  if ((int)lVar6 == 0) {
    func_0x000101e3cf64(lVar8,lVar7);
    func_0x000101e59ec0(lVar8,0x112e32328,&UNK_10da1b750);
    func_0x000107c614a8(auStack_68);
    func_0x000101e3cf20(lVar7,puVar5);
    puVar3 = puVar5;
    func_0x000107c614c4(puVar5,lVar1);
    if ((int)puVar3 == 0) {
      func_0x000101e3cee4(puVar5);
    }
    else {
      if ((int)puVar3 == 1) {
        return *puVar5;
      }
      lVar6 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 8))(puVar5,lVar6);
    }
  }
  else {
    func_0x000101e59ec0(lVar8,0x112e32328,&UNK_10da1b750);
    func_0x000107c614a8(auStack_68);
  }
  return 0;
}



/* Entry: 101e575b8; end: 101e575eb; -[_TtC30SingleSnapPlayerImplementation30SingleSnapPlayerHostController currentVideoAsset] */

void FUN_101e575b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101e573c0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e575ec; end: 101e57623; -[_TtC30SingleSnapPlayerImplementation30SingleSnapPlayerHostController currentImage] */

void FUN_101e575ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 1;
  FUN_101e57624(1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e57624; end: 101e57817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101e57624(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  func_0x000103b2dc40();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar5 = (undefined8 *)((long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar5 - extraout_x12;
  lVar6 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = _DAT_112e32cd8;
  lVar8 = lVar7 - extraout_x8_00;
  puVar3 = auStack_68;
  func_0x000107c61428(unaff_x20 + _DAT_112e32cd8,puVar3,0x20,0);
  lVar6 = *(long *)(unaff_x20 + lVar6);
  if ((*(long *)(lVar6 + 0x10) == 0) || (FUN_101e5b638(param_1), ((ulong)puVar3 & 1) == 0)) {
    uVar4 = 1;
  }
  else {
    func_0x000101e3cf64(*(long *)(lVar6 + 0x38) + *(long *)(lVar9 + 0x48) * param_1,lVar8);
    uVar4 = 0;
  }
  (**(code **)(lVar9 + 0x38))(lVar8,uVar4,1,lVar1);
  lVar6 = lVar8;
  (**(code **)(lVar9 + 0x30))(lVar8,1,lVar1);
  if ((int)lVar6 == 0) {
    func_0x000101e3cf64(lVar8,lVar7);
    func_0x000101e59ec0(lVar8,0x112e32328,&UNK_10da1b750);
    func_0x000107c614a8(auStack_68);
    func_0x000101e3cf20(lVar7,puVar5);
    puVar2 = puVar5;
    func_0x000107c614c4(puVar5,lVar1);
    if ((int)puVar2 == 0) {
      return *puVar5;
    }
    if ((int)puVar2 == 1) {
      func_0x000101e3cee4(puVar5);
    }
    else {
      lVar6 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 8))(puVar5,lVar6);
    }
  }
  else {
    func_0x000101e59ec0(lVar8,0x112e32328,&UNK_10da1b750);
    func_0x000107c614a8(auStack_68);
  }
  return 0;
}



/* Entry: 101e57818; end: 101e5784f; -[_TtC30SingleSnapPlayerImplementation30SingleSnapPlayerHostController currentOverlay] */

void FUN_101e57818(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  FUN_101e57624(3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e57850; end: 101e57887; -[_TtC30SingleSnapPlayerImplementation30SingleSnapPlayerHostController currentFirstFrameImage] */

void FUN_101e57850(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  FUN_101e57624(0);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101e57888; end: 101e58587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e57888(undefined1 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined2 uVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar11;
  code *pcVar12;
  long unaff_x20;
  undefined1 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_180 [8];
  undefined1 auStack_158 [56];
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined2 uStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  byte bStack_6f;
  
  lVar16 = _DAT_112e32d08;
  lVar1 = unaff_x20 + _DAT_112e32c30;
  if (*(char *)(lVar1 + 0x39) == '\x01') {
    func_0x000107c61428(unaff_x20 + _DAT_112e32d08,auStack_b8,0,0);
    FUN_101e5966c(unaff_x20 + lVar16,&uStack_a0,0x112e32d70,&UNK_10da1be90);
    lVar16 = lStack_88;
    if (lStack_88 != 0) {
      func_0x0001000a8868(&uStack_a0,lStack_88);
      lVar15 = *(long *)(lVar16 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
      puVar13 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar15 + 0x10))(puVar13);
      puVar10 = puVar13;
      func_0x000107c605b0(puVar13,lVar16);
      (**(code **)(lVar15 + 8))(puVar13,lVar16);
      func_0x000101e5976c(&uStack_a0);
      func_0x000107c615e8(puVar10);
      if (param_1 == puVar10) {
        func_0x000101e57c64();
        return;
      }
    }
    lVar16 = _DAT_112e32d00;
    func_0x000107c61428(unaff_x20 + _DAT_112e32d00,auStack_d0,0,0);
    FUN_101e5966c(unaff_x20 + lVar16,&uStack_a0,0x112e32d70,&UNK_10da1be90);
    lVar16 = lStack_88;
    if (lStack_88 != 0) {
      func_0x0001000a8868(&uStack_a0,lStack_88);
      lVar15 = *(long *)(lVar16 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
      puVar13 = auStack_180 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar15 + 0x10))(puVar13);
      puVar10 = puVar13;
      func_0x000107c605b0(puVar13,lVar16);
      (**(code **)(lVar15 + 8))(puVar13,lVar16);
      func_0x000101e5976c(&uStack_a0);
      func_0x000107c615e8(puVar10);
      if (param_1 == puVar10) {
        func_0x000101e57f14();
        return;
      }
    }
    lVar16 = _DAT_112e32cf8;
    func_0x000107c61428(unaff_x20 + _DAT_112e32cf8,auStack_e8,0,0);
    FUN_101e5966c(unaff_x20 + lVar16,&uStack_a0,0x112e32d70,&UNK_10da1be90);
    if (lStack_88 != 0) {
      func_0x0001000a8868(&uStack_a0,lStack_88);
      lVar16 = *(long *)(lStack_88 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
      puVar13 = auStack_180 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar16 + 0x10))(puVar13);
      puVar10 = puVar13;
      func_0x000107c605b0(puVar13,lStack_88);
      (**(code **)(lVar16 + 8))(puVar13,lStack_88);
      func_0x000101e5976c(&uStack_a0);
      func_0x000107c615e8(puVar10);
      if (param_1 == puVar10) {
        puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e32cd0);
        lVar16 = puVar2[1];
        if (lVar16 != 0) {
          uVar3 = puVar2[4];
          uVar6 = puVar2[5];
          uVar4 = puVar2[2];
          uVar7 = puVar2[3];
          uVar14 = *puVar2;
          uVar9 = *(undefined2 *)(puVar2 + 6);
          bStack_70 = (byte)uVar9 & 1;
          bStack_6f = (byte)((ushort)uVar9 >> 8) & 1;
          lVar15 = unaff_x20 + _DAT_112e32ca0;
          uVar5 = *(undefined8 *)(lVar15 + 0x18);
          lVar8 = *(long *)(lVar15 + 0x20);
          uStack_a0 = uVar14;
          lStack_98 = lVar16;
          uStack_90 = uVar4;
          lStack_88 = uVar7;
          uStack_80 = uVar3;
          uStack_78 = uVar6;
          func_0x0001000a8868(lVar15,uVar5);
          uVar11 = *(undefined8 *)(lVar1 + 0x30);
          pcVar12 = *(code **)(lVar8 + 0x38);
          uStack_120 = uVar14;
          lStack_118 = lVar16;
          uStack_110 = uVar4;
          uStack_108 = uVar7;
          uStack_100 = uVar3;
          uStack_f8 = uVar6;
          uStack_f0 = uVar9;
          FUN_101e3a290(&uStack_120,auStack_158);
          (*pcVar12)(&uStack_a0,uVar11,uVar5,lVar8);
          FUN_101ad91a0(uVar14,lVar16,uVar4,uVar7,uVar3,uVar6,uVar9);
          FUN_101e51f04(0);
        }
      }
    }
  }
  return;
}



/* Entry: 101e58588; end: 101e5859b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101e58588(void)

{
  long *unaff_x20;
  
  return *(undefined1 *)(*unaff_x20 + _DAT_112e32d40);
}



/* Entry: 101e5859c; end: 101e585e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5859c(undefined1 param_1)

{
  long *unaff_x20;
  
  *(undefined1 *)(*unaff_x20 + _DAT_112e32d40) = param_1;
  func_0x000101e4f83c();
  return;
}



/* Entry: 101e585e8; end: 101e5860b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e585e8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112e32c80) = 0;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101e5860c; end: 101e586eb;  */

void FUN_101e5860c(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_101e5b638();
  if ((param_3 & 1) == 0) {
    lVar2 = 0;
    func_0x000103b2dc40();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar3 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar4 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_101e5b6f4();
    }
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar2 = 0;
    func_0x000103b2dc40();
    lVar6 = *(long *)(lVar2 + -8);
    func_0x000101e3cf20(lVar5 + *(long *)(lVar6 + 0x48) * param_2,param_1);
    FUN_101e58878(param_2,lVar4);
    *unaff_x20 = lVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000101e586d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,1,lVar2);
  return;
}



/* Entry: 101e586ec; end: 101e587f3;  */

long FUN_101e586ec(long param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_101e5b638();
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e587c0);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    func_0x000101e5ba70(lVar4);
    uVar2 = param_2;
    FUN_101e5b638();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      FUN_101e3a710(0);
      func_0x000107c60624();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e5877c);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000101e5b6f4();
    lVar4 = *unaff_x20;
    goto joined_r0x000101e587d4;
  }
  lVar4 = *unaff_x20;
joined_r0x000101e587d4:
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar4 = 0;
    func_0x000103b2dc40();
    lVar5 = lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * uVar2;
    lVar4 = 0;
    func_0x000103b2dc40();
    (**(code **)(*(long *)(lVar4 + -8) + 0x28))(lVar5,param_1,lVar4);
    return lVar5;
  }
  lVar5 = lVar4 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar4 + 0x30) + uVar2 * 8) = param_2;
  lVar7 = *(long *)(lVar4 + 0x38);
  lVar5 = 0;
  func_0x000103b2dc40();
  func_0x000101e3cf20(param_1,lVar7 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar2);
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e58878);
    (*pcVar1)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  return param_1;
}



/* Entry: 101e587f4; end: 101e58877;  */

void FUN_101e587f4(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8) = param_2;
  lVar3 = *(long *)(param_4 + 0x38);
  lVar2 = 0;
  func_0x000103b2dc40();
  func_0x000101e3cf20(param_3,lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e58878);
  (*pcVar1)();
}



/* Entry: 101e58878; end: 101e58a2b;  */

void FUN_101e58878(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar12 = param_1 + 1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0) {
    uVar6 = ~uVar6;
    uVar13 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar6);
    uVar13 = uVar13 + 1 & uVar6;
    do {
      uVar11 = *(ulong *)(*(long *)(param_2 + 0x30) + uVar12 * 8);
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar11 = uVar11 & uVar6;
      if ((long)param_1 < (long)uVar13) {
        if (uVar11 < uVar13) {
LAB_101e58950:
          if ((long)param_1 < (long)uVar11) goto LAB_101e588f4;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar12 * 8);
        if ((param_1 != uVar12) || (puVar3 + 1 <= puVar2)) {
          *puVar2 = *puVar3;
        }
        lVar10 = *(long *)(param_2 + 0x38);
        lVar5 = 0;
        func_0x000103b2dc40();
        lVar9 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
        lVar7 = lVar9 * param_1;
        uVar11 = lVar10 + lVar7;
        lVar8 = lVar9 * uVar12;
        lVar10 = lVar10 + lVar8;
        param_1 = uVar12;
        if (lVar7 < lVar8 || (ulong)(lVar10 + lVar9) <= uVar11) {
          func_0x000107c61414(uVar11,lVar10,1,lVar5);
        }
        else if (lVar7 - lVar8 != 0) {
          func_0x000107c61410(uVar11,lVar10,1);
        }
      }
      else if (uVar13 <= uVar11) goto LAB_101e58950;
LAB_101e588f4:
      uVar12 = uVar12 + 1 & uVar6;
    } while ((*(ulong *)(lVar1 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0);
  }
  uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101e58a2c);
  (*pcVar4)();
}



/* Entry: 101e58a2c; end: 101e58b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e58a2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112e335e0;
  if (*(long *)(param_3 + _DAT_112e335e0) != 0) {
    func_0x000107c4ff34();
    if (*(long *)(param_3 + lVar1) != 0) {
      lVar2 = *(long *)(param_3 + lVar1) + _DAT_112e32be0;
      func_0x000107c61428(lVar2,auStack_58,1,0);
      *(undefined8 *)(lVar2 + 8) = 0;
      func_0x000107c61604(lVar2,0);
      lVar2 = *(long *)(param_3 + lVar1);
      if (lVar2 != 0) goto LAB_101e58ae0;
    }
  }
  uVar3 = 0;
  FUN_101e4f718();
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  uVar4 = *(undefined8 *)(param_3 + lVar1);
  *(undefined8 *)(param_3 + lVar1) = uVar3;
  func_0x000107c61170(uVar4);
  lVar2 = *(long *)(param_3 + lVar1);
  if (lVar2 == 0) {
    return;
  }
LAB_101e58ae0:
  func_0x000107c61174();
  func_0x000107c3d89c(param_3);
  lVar1 = lVar2 + _DAT_112e32be0;
  func_0x000107c61428(lVar1,auStack_70,1,0);
  *(undefined ***)(lVar1 + 8) = &PTR_DAT_11048e8a8;
  func_0x000107c61604(lVar1,param_2);
  FUN_101e4f194(param_1);
  func_0x000107c56a14(param_3);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 101e58b5c; end: 101e58cc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e58b5c(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined4 uVar6;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  long lStack_50;
  
  lVar2 = _DAT_112e32d08;
  uVar5 = 0;
  if (*(char *)(unaff_x20 + _DAT_112e32c30 + 0x3b) == '\x01') {
    func_0x000107c61428(unaff_x20 + _DAT_112e32d08,auStack_80,0,0);
    FUN_101e5966c(unaff_x20 + lVar2,auStack_68,0x112e32d70,&UNK_10da1be90);
    if (lStack_50 == 0) {
      func_0x000101e59ec0(auStack_68,0x112e32d70,&UNK_10da1be90);
    }
    else {
      uVar3 = 0x112e32d78;
      func_0x0001000285a8(0x112e32d78,&UNK_10da1be98);
      uVar4 = 0x112e32d80;
      func_0x0001000285a8(0x112e32d80,&UNK_10da1bea0);
      func_0x000107c6147c(&uStack_90,auStack_68,uVar3,uVar4,6);
      if ((uVar5 & 1) != 0) {
        bVar1 = *(byte *)(unaff_x20 + _DAT_112e32d18);
        if (bVar1 != 2) {
          uVar3 = uStack_90;
          func_0x000107c614f0(uStack_90);
          (**(code **)(lStack_88 + 0x90))(bVar1 & 1,uVar3,lStack_88);
        }
        if (*(char *)((undefined4 *)(unaff_x20 + _DAT_112e32d20) + 1) != '\x01') {
          uVar6 = *(undefined4 *)(unaff_x20 + _DAT_112e32d20);
          func_0x000107c614f0(uStack_90);
          (**(code **)(lStack_88 + 0xa8))(uVar6);
        }
        func_0x000107c615e8(uStack_90);
      }
    }
  }
  return;
}



/* Entry: 101e58cc8; end: 101e595ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e58cc8(long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  undefined *puVar20;
  code *pcVar21;
  long lVar22;
  undefined1 auStack_150 [24];
  long lStack_138;
  long lStack_130;
  undefined1 auStack_128 [24];
  long lStack_110;
  long lStack_108;
  undefined1 auStack_f0 [24];
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined2 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined2 uStack_70;
  
  lVar16 = *param_1;
  lVar1 = param_1[1];
  lVar13 = param_1[2];
  lVar2 = param_1[3];
  lVar17 = param_1[4];
  lVar3 = param_1[5];
  uVar6 = (undefined2)param_1[6];
  plVar14 = (long *)(unaff_x20 + _DAT_112e32cd0);
  lVar19 = *plVar14;
  lVar15 = plVar14[1];
  lVar22 = plVar14[2];
  lVar4 = plVar14[3];
  lVar10 = plVar14[4];
  lVar5 = plVar14[5];
  uVar7 = (undefined2)plVar14[6];
  if (lVar15 == 0) {
    if (lVar1 != 0) goto LAB_101e58df4;
    FUN_101e595f0(lVar19,0,lVar22,lVar4,lVar10,lVar5,uVar7);
    FUN_101e3a290(param_1,&lStack_a0);
    FUN_101ad91a0(lVar19,0,lVar22,lVar4,lVar10,lVar5,uVar7);
joined_r0x000101e59400:
    if ((param_2 & 1) == 0) {
      return;
    }
  }
  else if (lVar1 == 0) {
LAB_101e58df4:
    FUN_101e595f0(lVar19,lVar15,lVar22,lVar4,lVar10,lVar5,uVar7);
    FUN_101e3a290(param_1,&lStack_a0);
    FUN_101ad91a0(lVar19,lVar15,lVar22,lVar4,lVar10,lVar5,uVar7);
    FUN_101ad91a0(lVar16,lVar1,lVar13,lVar2,lVar17,lVar3,uVar6);
  }
  else {
    lStack_d8 = lVar19;
    lStack_d0 = lVar15;
    lStack_c8 = lVar22;
    lStack_c0 = lVar4;
    lStack_b8 = lVar10;
    lStack_b0 = lVar5;
    uStack_a8 = uVar7;
    lStack_a0 = lVar16;
    lStack_98 = lVar1;
    lStack_90 = lVar13;
    lStack_88 = lVar2;
    lStack_80 = lVar17;
    lStack_78 = lVar3;
    uStack_70 = uVar6;
    FUN_101e595f0(lVar19,lVar15,lVar22,lVar4,lVar10,lVar5,uVar7);
    FUN_101e3a290(param_1,auStack_128);
    plVar8 = &lStack_d8;
    func_0x000103b297e0(plVar8,&lStack_a0);
    FUN_101ad91a0(lVar16,lVar1,lVar13,lVar2,lVar17,lVar3,uVar6);
    FUN_101ad91a0(lVar19,lVar15,lVar22,lVar4,lVar10,lVar5,uVar7);
    if (((ulong)plVar8 & 1) != 0) goto joined_r0x000101e59400;
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e32cf0);
  *(undefined8 *)(unaff_x20 + _DAT_112e32cf0) = 0;
  func_0x000107c614ac(uVar9);
  lVar19 = _DAT_112e33150;
  lVar22 = *(long *)(unaff_x20 + _DAT_112e32cc8);
  if (lVar22 != 0) {
    lVar15 = *(long *)(lVar22 + 0x30);
    lVar10 = lVar15 + _DAT_112e33150;
    func_0x000107c61648();
    if (lVar10 != 0) {
      func_0x000107c61574();
      lVar10 = lVar15 + lVar19;
      func_0x000107c61648();
      if ((lVar10 == 0) || (func_0x000107c61574(), lVar10 != lVar22)) goto LAB_101e58edc;
    }
    FUN_101e5e450();
    func_0x000107c61634(lVar15 + lVar19,0);
    if (*(long *)(lVar15 + _DAT_112e33110) != 0) {
      FUN_101e4dc3c();
    }
  }
LAB_101e58edc:
  lVar19 = _DAT_112e32cd8;
  func_0x000107c61428(unaff_x20 + _DAT_112e32cd8,auStack_f0,1,0);
  uVar9 = *(undefined8 *)(unaff_x20 + lVar19);
  *(undefined **)(unaff_x20 + lVar19) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar9);
  FUN_101e54dc4(param_1);
  FUN_101e518fc(1,0xd000000000000025,0x800000010f015220);
  lVar19 = *plVar14;
  lVar15 = plVar14[1];
  lVar22 = plVar14[2];
  lVar4 = plVar14[3];
  lVar10 = plVar14[4];
  lVar5 = plVar14[5];
  *plVar14 = lVar16;
  plVar14[1] = lVar1;
  plVar14[2] = lVar13;
  plVar14[3] = lVar2;
  plVar14[4] = lVar17;
  plVar14[5] = lVar3;
  lVar16 = plVar14[6];
  *(undefined2 *)(plVar14 + 6) = uVar6;
  FUN_101ad91a0(lVar19,lVar15,lVar22,lVar4,lVar10,lVar5,(short)lVar16);
  plVar14 = (long *)(unaff_x20 + _DAT_112e32cb0);
  lVar16 = *plVar14;
  if (lVar16 == 0) {
    FUN_101e3a290(param_1,auStack_128);
  }
  else {
    lVar17 = plVar14[1];
    lVar13 = lVar16;
    func_0x000107c614f0(lVar16);
    pcVar21 = *(code **)(lVar17 + 8);
    FUN_101e3a290(param_1,auStack_128);
    func_0x000107c615f0(lVar16);
    (*pcVar21)(lVar13,lVar17);
    func_0x000107c615e8(lVar16);
  }
  lVar16 = _DAT_112e32c40;
  FUN_101e5966c(unaff_x20 + _DAT_112e32c40,auStack_128,0x112e32170,&UNK_10da1b5c0);
  lVar17 = lStack_108;
  lVar13 = lStack_110;
  if (lStack_110 == 0) {
    func_0x000101e59ec0(auStack_128,0x112e32170,&UNK_10da1b5c0);
    puVar20 = (undefined *)0x0;
    pcVar21 = (code *)0x0;
  }
  else {
    func_0x0001000a8868(auStack_128,lStack_110);
    plVar11 = param_1;
    (**(code **)(*(long *)(lVar17 + 8) + 8))(param_1,lVar13);
    plVar8 = (long *)0x112e32d88;
    FUN_101e59724(0x112e32d88,&SUB_103b25e5c,&UNK_10dc55650);
    func_0x000104884898();
    func_0x000107c61574(plVar11);
    func_0x000101e5976c(auStack_128);
    puVar20 = &UNK_11048e8d0;
    func_0x000107c613fc(&UNK_11048e8d0,0x18,7);
    func_0x000107c61614(puVar20 + 0x10,unaff_x20);
    puVar12 = &UNK_11048e948;
    func_0x000107c613fc(&UNK_11048e948,0x50,7);
    lVar13 = *param_1;
    lVar19 = param_1[3];
    lVar17 = param_1[2];
    *(long *)(puVar12 + 0x18) = param_1[1];
    *(long *)(puVar12 + 0x10) = lVar13;
    *(long *)(puVar12 + 0x28) = lVar19;
    *(long *)(puVar12 + 0x20) = lVar17;
    lVar13 = param_1[4];
    *(long *)(puVar12 + 0x38) = param_1[5];
    *(long *)(puVar12 + 0x30) = lVar13;
    *(short *)(puVar12 + 0x40) = (short)param_1[6];
    *(undefined **)(puVar12 + 0x48) = puVar20;
    pcVar18 = *(code **)(*plVar8 + 0x60);
    FUN_101e3a290(param_1,auStack_128);
    pcVar21 = FUN_101e59660;
    puVar20 = puVar12;
    (*pcVar18)();
    func_0x000107c61574(plVar8);
    func_0x000107c61574(puVar12);
  }
  lVar13 = *plVar14;
  *plVar14 = (long)pcVar21;
  plVar14[1] = (long)puVar20;
  func_0x000107c615e8(lVar13);
  plVar14 = (long *)(unaff_x20 + _DAT_112e32cb8);
  lVar13 = *plVar14;
  if (lVar13 != 0) {
    lVar19 = plVar14[1];
    lVar17 = lVar13;
    func_0x000107c614f0(lVar13);
    pcVar21 = *(code **)(lVar19 + 8);
    func_0x000107c615f0(lVar13);
    (*pcVar21)(lVar17,lVar19);
    func_0x000107c615e8(lVar13);
  }
  FUN_101e5966c(unaff_x20 + lVar16,auStack_150,0x112e32170,&UNK_10da1b5c0);
  lVar13 = lStack_138;
  if (lStack_138 == 0) {
    func_0x000101e59ec0(auStack_150,0x112e32170,&UNK_10da1b5c0);
    pcVar21 = (code *)0x0;
    puVar20 = (undefined *)0x0;
  }
  else {
    func_0x0001000a8868(auStack_150,lStack_138);
    plVar8 = param_1;
    (**(code **)(*(long *)(lStack_130 + 8) + 0x10))(param_1,lVar13);
    puVar20 = &UNK_11048e8d0;
    func_0x000107c613fc(&UNK_11048e8d0,0x18,7);
    func_0x000107c61614(puVar20 + 0x10,unaff_x20);
    puVar12 = &UNK_11048e920;
    func_0x000107c613fc(&UNK_11048e920,0x50,7);
    lVar13 = *param_1;
    lVar19 = param_1[3];
    lVar17 = param_1[2];
    *(long *)(puVar12 + 0x18) = param_1[1];
    *(long *)(puVar12 + 0x10) = lVar13;
    *(long *)(puVar12 + 0x28) = lVar19;
    *(long *)(puVar12 + 0x20) = lVar17;
    lVar13 = param_1[4];
    *(long *)(puVar12 + 0x38) = param_1[5];
    *(long *)(puVar12 + 0x30) = lVar13;
    *(short *)(puVar12 + 0x40) = (short)param_1[6];
    *(undefined **)(puVar12 + 0x48) = puVar20;
    pcVar18 = *(code **)(*plVar8 + 0x60);
    FUN_101e3a290(param_1,auStack_128);
    pcVar21 = FUN_101e59620;
    puVar20 = puVar12;
    (*pcVar18)();
    func_0x000107c61574(plVar8);
    func_0x000107c61574(puVar12);
    func_0x000101e5976c(auStack_150);
  }
  lVar13 = *plVar14;
  *plVar14 = (long)pcVar21;
  plVar14[1] = (long)puVar20;
  func_0x000107c615e8(lVar13);
  FUN_101e5966c(unaff_x20 + lVar16,auStack_150,0x112e32170,&UNK_10da1b5c0);
  if (lStack_138 == 0) {
    func_0x000101e59ec0(auStack_150,0x112e32170,&UNK_10da1b5c0);
  }
  else {
    func_0x000100cd4338(auStack_150,auStack_128);
    lVar13 = lStack_108;
    lVar16 = lStack_110;
    func_0x0001000a8868(auStack_128,lStack_110);
    plVar14 = param_1;
    (**(code **)(lVar13 + 0x30))(param_1,lVar16,lVar13);
    lVar16 = _DAT_112e32c98;
    if (((ulong)plVar14 & 1) == 0) {
      if (*(long *)(unaff_x20 + _DAT_112e32c98) != 0) {
        func_0x000107c3f474();
      }
      puVar20 = PTR_PTR_1126b2798;
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar9 = *(undefined8 *)(unaff_x20 + lVar16);
      *(undefined **)(unaff_x20 + lVar16) = puVar20;
      func_0x000107c61170(uVar9);
      lVar16 = *(long *)(unaff_x20 + lVar16);
      if (lVar16 != 0) {
        func_0x0001000a8868(auStack_128,lStack_110);
        pcVar21 = *(code **)(lStack_108 + 0x18);
        func_0x000107c61174(lVar16);
        (*pcVar21)(param_1,lStack_110,lStack_108);
        func_0x000107c3d5f8(lVar16);
        func_0x000107c61170(lVar16);
        func_0x000107c615e8(param_1);
      }
    }
    func_0x000101e5976c(auStack_128);
  }
  return;
}



/* Entry: 101e595f0; end: 101e5961f;  */

/* WARNING: Possible PIC construction at 0x000101e59608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e5960c) */

void FUN_101e595f0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 101e59620; end: 101e5962b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e59620(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x20;
  code *pcVar9;
  undefined8 uVar10;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x48);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined1 *)(param_1 + 2);
  func_0x000107c61428(lVar8 + 0x10,auStack_78,0,0);
  lVar4 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000101e597dc(lVar4 + _DAT_112e32ca0,auStack_a0);
    func_0x000107c61170(lVar4);
    func_0x0001000a8868(auStack_a0,uStack_88);
    func_0x000107c61428(lVar8 + 0x10,auStack_b8,0,0);
    puVar5 = (undefined8 *)(lVar8 + 0x10);
    func_0x000107c61618();
    if (puVar5 == (undefined8 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)((long)puVar5 + _DAT_112e32c30 + 0x30);
      func_0x000107c61170();
    }
    FUN_101e49d98();
    puVar6 = &UNK_1106d42b0;
    func_0x000107c613f8(&UNK_1106d42b0,puVar5,0,0);
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    *(undefined1 *)(puVar5 + 2) = uVar3;
    pcVar9 = *(code **)(lStack_80 + 0x18);
    FUN_101e49dd8(uVar1,uVar2,uVar3);
    (*pcVar9)(unaff_x20 + 0x10,uVar10,puVar6,uStack_88,lStack_80);
    func_0x000107c614ac(puVar6);
    func_0x000101e5976c(auStack_a0);
  }
  func_0x000107c61428(lVar8 + 0x10,auStack_a0,0,0);
  puVar5 = (undefined8 *)(lVar8 + 0x10);
  func_0x000107c61618();
  if (puVar5 != (undefined8 *)0x0) {
    puVar7 = puVar5;
    FUN_101e49d98();
    puVar6 = &UNK_1106d42b0;
    func_0x000107c613f8(&UNK_1106d42b0,puVar7,0,0);
    *puVar7 = uVar1;
    puVar7[1] = uVar2;
    *(undefined1 *)(puVar7 + 2) = uVar3;
    FUN_101e49dd8(uVar1,uVar2,uVar3);
    FUN_101e515e8(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c614ac(puVar6);
  }
  return;
}



/* Entry: 101e5962c; end: 101e5965f;  */

void FUN_101e5962c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e59660; end: 101e5966b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e59660(ulong *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x48);
  uVar4 = *param_1;
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar1 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000101e597dc(lVar1 + _DAT_112e32ca0,auStack_90);
    func_0x000107c61170(lVar1);
    func_0x0001000a8868(auStack_90,uStack_78);
    func_0x000107c61428(lVar2 + 0x10,auStack_a8,0,0);
    lVar1 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112e32c30 + 0x30);
      func_0x000107c61170();
    }
    (**(code **)(lStack_70 + 0x10))(unaff_x20 + 0x10,uVar3,uStack_78,lStack_70);
    func_0x000101e5976c(auStack_90);
  }
  if (uVar4 < 4) {
    func_0x000107c61428(lVar2 + 0x10,auStack_90,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000101e52dd0(param_1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 101e5966c; end: 101e596b3;  */

undefined8 FUN_101e5966c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101e596b4; end: 101e596df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e596b4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ushort uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte bStack_78;
  byte bStack_77;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  bVar5 = *(byte *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar8 + 0x10,auStack_118,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 == 0) {
    return;
  }
  if ((bVar5 & 1) == 0) {
    if ((*(byte *)(lVar8 + _DAT_112e32c30 + 0x28) & 1) != 0) goto LAB_101e53dbc;
  }
  else {
    puVar1 = (undefined8 *)(lVar8 + _DAT_112e32cd0);
    lVar15 = puVar1[1];
    if (lVar15 != 0) {
      uVar17 = *puVar1;
      uVar13 = puVar1[2];
      uVar2 = puVar1[3];
      uVar14 = puVar1[4];
      uVar3 = puVar1[5];
      uVar6 = *(ushort *)(puVar1 + 6);
      bStack_78 = (byte)uVar6 & 1;
      bStack_77 = (byte)(uVar6 >> 8) & 1;
      uStack_a8 = uVar17;
      lStack_a0 = lVar15;
      uStack_98 = uVar13;
      uStack_90 = uVar2;
      uStack_88 = uVar14;
      uStack_80 = uVar3;
      if ((*(byte *)(lVar8 + _DAT_112e32ce8) & 1) == 0) {
        uVar10 = 1;
        *(undefined1 *)(lVar8 + _DAT_112e32ce8) = 1;
        uStack_e0 = uVar17;
        lStack_d8 = lVar15;
        uStack_d0 = uVar13;
        uStack_c8 = uVar2;
        uStack_c0 = uVar14;
        uStack_b8 = uVar3;
        uStack_b0 = uVar6;
        FUN_101e3a290(&uStack_e0,&uStack_1c8);
        FUN_101e5411c();
        FUN_101e58cc8(&uStack_a8,1);
        FUN_101ad91a0(uVar17,lVar15,uVar13,uVar2,uVar14,uVar3,uVar6);
        FUN_101e53560();
        goto LAB_101e54090;
      }
    }
    if (*(char *)(lVar8 + _DAT_112e32c30 + 0x28) == '\x01') {
LAB_101e53dbc:
      func_0x000107c61428(lVar9 + 0x10,auStack_190,0,0);
      uVar14 = *(undefined8 *)(lVar9 + 0x10);
      func_0x000107c614b0(uVar14);
      FUN_101e518fc(0,0xd000000000000014,0x800000010f0152c0);
      FUN_101e4e164(&uStack_1c8,uVar14,bVar5 & 1);
      FUN_101e58a2c(&uStack_1c8,lVar8,*(undefined8 *)(lVar8 + _DAT_112e32cc0));
      uStack_e8 = uStack_1c0;
      uStack_f0 = uStack_1c8;
      func_0x000100bcb1dc(&uStack_f0);
      uStack_f8 = uStack_1b0;
      uStack_100 = uStack_1b8;
      func_0x000100bcb1dc(&uStack_100);
      *(undefined1 *)(lVar8 + _DAT_112e32ce0) = 1;
      func_0x0001000a8868(lVar8 + _DAT_112e32c38,*(undefined8 *)(lVar8 + _DAT_112e32c38 + 0x18));
      uVar13 = 0;
      FUN_101e4c630(0);
      FUN_101e4c5d0(uVar14,0,0,8,uVar13,&PTR_DAT_11048e450);
      func_0x000107c614ac(uVar14);
    }
  }
  func_0x000107c61428(lVar9 + 0x10,auStack_130,0,0);
  uVar12 = *(ulong *)(lVar9 + 0x10);
  func_0x000107c614b0(uVar12);
  uVar7 = uVar12;
  FUN_101e4e07c();
  func_0x000107c614ac(uVar12);
  if ((uVar7 & 1) != 0) {
    func_0x000107c61428(lVar9 + 0x10,auStack_178,0,0);
    uVar13 = *(undefined8 *)(lVar8 + _DAT_112e32cf0);
    *(undefined8 *)(lVar8 + _DAT_112e32cf0) = *(undefined8 *)(lVar9 + 0x10);
    func_0x000107c614b0();
    func_0x000107c614ac(uVar13);
  }
  puVar1 = (undefined8 *)(lVar8 + _DAT_112e32cd0);
  lVar15 = puVar1[1];
  uVar10 = 0;
  if (lVar15 != 0) {
    uVar13 = puVar1[4];
    uVar3 = puVar1[5];
    uVar14 = puVar1[2];
    uVar17 = puVar1[3];
    uVar16 = *puVar1;
    uVar6 = *(ushort *)(puVar1 + 6);
    uStack_b0 = uVar6 & 0x101;
    uVar2 = *(undefined8 *)(lVar8 + _DAT_112e32ca0 + 0x18);
    lVar4 = *(long *)(lVar8 + _DAT_112e32ca0 + 0x20);
    uStack_e0 = uVar16;
    lStack_d8 = lVar15;
    uStack_d0 = uVar14;
    uStack_c8 = uVar17;
    uStack_c0 = uVar13;
    uStack_b8 = uVar3;
    func_0x0001000a8868();
    uVar10 = *(undefined8 *)(lVar8 + _DAT_112e32c30 + 0x30);
    func_0x000107c61428(lVar9 + 0x10,auStack_160,0,0);
    uVar18 = *(undefined8 *)(lVar9 + 0x10);
    pcVar11 = *(code **)(lVar4 + 0x28);
    FUN_101e595f0(uVar16,lVar15,uVar14,uVar17,uVar13,uVar3,uVar6);
    func_0x000107c614b0(uVar18);
    (*pcVar11)(&uStack_e0,uVar10,uVar18,uVar2,lVar4);
    func_0x000107c614ac(uVar18);
    FUN_101ad91a0(uVar16,lVar15,uVar14,uVar17,uVar13,uVar3,uVar6);
    uVar10 = 0;
  }
LAB_101e54090:
  func_0x0001000a8868(lVar8 + _DAT_112e32c38,*(undefined8 *)(lVar8 + _DAT_112e32c38 + 0x18));
  func_0x000107c61428(lVar9 + 0x10,auStack_148,0,0);
  uVar14 = *(undefined8 *)(lVar9 + 0x10);
  func_0x000107c614b0(uVar14);
  uVar13 = 0;
  FUN_101e4c630(0);
  FUN_101e4c5d0(uVar14,uVar10,0,6,uVar13,&PTR_DAT_11048e450);
  func_0x000107c614ac(uVar14);
  func_0x000107c61170(lVar8);
  return;
}



/* Entry: 101e596e0; end: 101e59717;  */

void FUN_101e596e0(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e59718; end: 101e59723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e59718(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 &
                 **(ulong **)(*(long *)(lVar2 + _DAT_112e32cc0) + _DAT_112e335c0)) + 0x88))();
    func_0x0001000a8868(lVar2 + _DAT_112e32c38,*(undefined8 *)(lVar2 + _DAT_112e32c38 + 0x18));
    uVar3 = 0;
    FUN_101e4c630(0);
    FUN_101e4c5d0(1,uVar1,uVar4,7,uVar3,&PTR_DAT_11048e450);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101e59724; end: 101e59763;  */

void FUN_101e59724(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101e59764; end: 101e5978b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e59764(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112e32d28);
    if (lVar2 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c6157c(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c5f84c();
      func_0x000107c61574(lVar2);
    }
  }
  return;
}



/* Entry: 101e5978c; end: 101e5981f;  */

undefined8 FUN_101e5978c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e32d70;
  func_0x0001000285a8(0x112e32d70,&UNK_10da1be90);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101e59820; end: 101e59a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e59820(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112e335e0;
  lVar3 = *(long *)(unaff_x20 + _DAT_112e32cc0);
  if (*(long *)(lVar3 + _DAT_112e335e0) != 0) {
    func_0x000107c4ff34();
    lVar2 = *(long *)(lVar3 + lVar2);
    if (lVar2 != 0) {
      lVar2 = lVar2 + _DAT_112e32be0;
      func_0x000107c61428(lVar2,auStack_58,1,0);
      *(undefined8 *)(lVar2 + 8) = 0;
      func_0x000107c61604(lVar2,0);
    }
  }
  lVar2 = _DAT_112e32ce0;
  if (*(char *)(unaff_x20 + _DAT_112e32ce0) == '\x01') {
    func_0x0001000a8868(unaff_x20 + _DAT_112e32c38,
                        *(undefined8 *)(unaff_x20 + _DAT_112e32c38 + 0x18));
    uVar1 = 0;
    FUN_101e4c630(0);
    FUN_101e4c5d0(4,0,0,10,uVar1,&PTR_DAT_11048e450);
  }
  *(undefined1 *)(unaff_x20 + lVar2) = 0;
  func_0x0001000a8868(unaff_x20 + _DAT_112e32c38,*(undefined8 *)(unaff_x20 + _DAT_112e32c38 + 0x18))
  ;
  uVar1 = 0;
  FUN_101e4c630(0);
  FUN_101e4c5d0(5,0,0,10,uVar1,&PTR_DAT_11048e450);
  return;
}



/* Entry: 101e59a98; end: 101e59e5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e59a98(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  uStack_80 = param_1;
  func_0x000103b2dc40();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar13 = (undefined8 *)(auStack_78 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (undefined8 *)((long)puVar13 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (long)puVar14 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar15 - extraout_x12_01;
  puVar2 = &UNK_11048ea60;
  func_0x000107c613fc(&UNK_11048ea60,0x18,7);
  *(long *)(puVar2 + 0x10) = param_3;
  lVar9 = _DAT_112e32cd8;
  puVar8 = auStack_78;
  func_0x000107c61428(param_2 + _DAT_112e32cd8,puVar8,0x20,0);
  lVar9 = *(long *)(param_2 + lVar9);
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_101e59c00:
    func_0x000107c614a8(auStack_78);
    func_0x000107c60bc4(param_3);
    uVar7 = 0xd00000000000001e;
    func_0x000101e5994c(0xd00000000000001e,0x800000010f015380);
    uVar10 = uVar7;
    func_0x000107c5ed2c();
    (**(code **)(param_3 + 0x10))(param_3,0,uVar10);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar10);
    return;
  }
  lVar3 = 1;
  FUN_101e5b638(1);
  if (((ulong)puVar8 & 1) == 0) goto LAB_101e59c00;
  func_0x000101e3cf64(*(long *)(lVar9 + 0x38) + *(long *)(lVar12 + 0x48) * lVar3,lVar15);
  func_0x000101e3cf20(lVar15,lVar11);
  func_0x000107c614a8(auStack_78);
  func_0x000101e3cf64(lVar11,puVar14);
  puVar4 = puVar14;
  func_0x000107c614c4(puVar14,lVar1);
  if ((int)puVar4 == 0) {
    uVar7 = *puVar14;
    uVar10 = uStack_80;
    func_0x000107c614f0(uStack_80);
    puVar5 = &UNK_11048eab0;
    func_0x000107c613fc(&UNK_11048eab0,0x28,7);
    *(code **)(puVar5 + 0x10) = FUN_101e59e60;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    *(undefined8 *)(puVar5 + 0x20) = uVar7;
    func_0x000107c60bc4(param_3);
    func_0x000107c6157c(puVar2);
    func_0x000107c61174(uVar7);
    pcVar6 = FUN_101e59e74;
LAB_101e59da0:
    func_0x00010090569c(pcVar6,puVar5,uVar10);
    func_0x000107c61170(uVar7);
    func_0x000107c61574(puVar5);
  }
  else {
    if ((int)puVar4 == 1) {
      func_0x000107c60bc4(param_3);
      func_0x000101e3cee4(puVar14);
    }
    else {
      func_0x000107c60bc4(param_3);
      lVar9 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar9 + -8) + 8))(puVar14,lVar9);
    }
    func_0x000101e3cf64(lVar11,puVar13);
    puVar14 = puVar13;
    func_0x000107c614c4(puVar13,lVar1);
    if ((int)puVar14 == 0) {
      func_0x000101e3cee4(puVar13);
    }
    else {
      if ((int)puVar14 == 1) {
        uVar10 = *puVar13;
        uVar7 = uVar10;
        func_0x000107c4d444();
        func_0x000107c61180();
        func_0x000107c615e8(uVar10);
        uVar10 = uStack_80;
        func_0x000107c614f0(uStack_80);
        puVar5 = &UNK_11048ea88;
        func_0x000107c613fc(&UNK_11048ea88,0x30,7);
        *(undefined8 *)(puVar5 + 0x10) = uVar7;
        *(long *)(puVar5 + 0x18) = param_2;
        *(code **)(puVar5 + 0x20) = FUN_101e59e60;
        *(undefined **)(puVar5 + 0x28) = puVar2;
        func_0x000107c6157c(puVar2);
        func_0x000107c61174(uVar7);
        func_0x000107c61174(param_2);
        pcVar6 = (code *)0x101e59e68;
        goto LAB_101e59da0;
      }
      lVar9 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar9 + -8) + 8))(puVar13,lVar9);
    }
    uVar7 = 0xd00000000000001e;
    func_0x000101e5994c(0xd00000000000001e,0x800000010f0153a0);
    uVar10 = uVar7;
    func_0x000107c5ed2c();
    (**(code **)(param_3 + 0x10))(param_3,0,uVar10);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar10);
  }
  func_0x000101e3cee4(lVar11);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 101e59e60; end: 101e59e73;  */

void FUN_101e59e60(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101e59e74; end: 101e59eff;  */

void FUN_101e59e74(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),0);
  return;
}



/* Entry: 101e59f00; end: 101e59f43;  */

void FUN_101e59f00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e32da8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9668;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e32da8 = puVar1;
  return;
}



/* Entry: 101e59f44; end: 101e59f77;  */

void FUN_101e59f44(long param_1,long param_2)

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



/* Entry: 101e59f78; end: 101e5a023;  */

void FUN_101e59f78(void)

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



/* Entry: 101e5a024; end: 101e5a113;  */

void FUN_101e5a024(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  (**(code **)(lVar4 + 0x68))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1
            );
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd00000000000003d;
  func_0x000107c5fadc(0xd00000000000003d,0x800000010f015480);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  puRam0000000113804550 = puVar2;
  return;
}



/* Entry: 101e5a114; end: 101e5a17f;  */

void FUN_101e5a114(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000101e5ad04(unaff_x20 + 0x38);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


