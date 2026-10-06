/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101698dfc; end: 101698e1b;  */

void FUN_101698dfc(void)

{
  func_0x000107c61168(&PTR_PTR_112dbf168);
  return;
}



/* Entry: 101698e1c; end: 101698e5b;  */

void FUN_101698e1c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0(param_2);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 101698e5c; end: 1016997c7;  */

undefined * FUN_101698e5c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined1 *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  undefined *puVar18;
  long extraout_x8_02;
  ulong uVar19;
  ulong uVar20;
  code *pcVar21;
  long lVar22;
  ulong uVar23;
  undefined1 *puVar24;
  ulong uVar25;
  long lVar26;
  undefined2 auStack_160 [4];
  undefined8 auStack_158 [3];
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined1 *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar22 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  puVar24 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000107c5ec24();
  lVar26 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  lVar17 = (long)puVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  puStack_f8 = (undefined *)lVar17;
  func_0x000107c5ebbc();
  puStack_d0 = *(undefined **)(lVar6 + -8);
  lStack_d8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)((long)puStack_d0 + 0x40));
  puVar18 = (undefined *)(lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0x112d4b5b0;
  puStack_c8 = puVar18;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar25 = (long)puVar18 - extraout_x8_02;
  puVar16 = auStack_90;
  func_0x000107c61428(param_2 + 0x10,puVar16,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar6 = *(long *)(param_2 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      puStack_128 = (undefined *)lVar26;
      uStack_120 = lVar5;
      lStack_118 = lVar6;
      uStack_110 = param_1;
      lStack_108 = lVar22;
      lStack_100 = lVar4;
      lStack_f0 = param_2;
      uStack_e8 = uVar25;
      puStack_e0 = puVar24;
      if (param_3 == 0) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x1016997c8);
        (*pcVar21)();
      }
      lStack_130 = param_3;
      func_0x000107c4e33c();
      func_0x000107c61180();
      lVar4 = param_3;
      puVar18 = PTR___sSSN_11034da80;
      func_0x000107c5f9e8();
      func_0x000107c61170(param_3);
      lVar6 = 0;
      uVar20 = 1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
      uVar23 = 0xffffffffffffffff;
      if ((*(byte *)(lVar4 + 0x20) & 0x3f) < 6) {
        uVar23 = ~(-1L << (uVar20 & 0x3f));
      }
      uVar23 = uVar23 & *(ulong *)(lVar4 + 0x40);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      while( true ) {
        for (; uVar23 != 0; uVar23 = uVar23 - 1 & uVar23) {
          uVar19 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
          uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
          uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
          uVar19 = lVar6 << 10 | LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) << 4;
          puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x30) + uVar19);
          uVar12 = *puVar1;
          uVar11 = puVar1[1];
          puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar19);
          uVar10 = *puVar1;
          uVar2 = puVar1[1];
          func_0x000107c61434(uVar11);
          func_0x000107c61434(uVar2);
          func_0x000107c5ebb0(puStack_c8,uVar12,uVar11,uVar10,uVar2);
          func_0x000107c6142c(uVar11);
          func_0x000107c6142c(uVar2);
          puVar18 = puVar8;
          func_0x000107c61558();
          puVar7 = puVar8;
          if (((ulong)puVar18 & 1) == 0) {
            puVar7 = (undefined *)0x0;
            func_0x0001012d3170(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
          }
          uVar19 = *(ulong *)(puVar7 + 0x10);
          puVar8 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar19) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
            func_0x0001012d3170(puVar8,uVar19 + 1,1,puVar7);
          }
          *(ulong *)(puVar8 + 0x10) = uVar19 + 1;
          puVar18 = puStack_c8;
          (**(code **)((long)puStack_d0 + 0x20))
                    (puVar8 + *(long *)((long)puStack_d0 + 0x48) * uVar19 +
                              ((ulong)*(byte *)((long)puStack_d0 + 0x50) + 0x20 &
                              ((ulong)*(byte *)((long)puStack_d0 + 0x50) ^ 0xffffffffffffffff)),
                     puStack_c8,lStack_d8);
        }
        bVar3 = SCARRY8(lVar6,1);
        lVar6 = lVar6 + 1;
        if (bVar3) break;
        if ((long)(uVar20 + 0x3f >> 6) <= lVar6) {
          func_0x000107c61574(lVar4);
          lVar6 = lStack_f0;
          FUN_1016997c8();
          uVar20 = uStack_e8;
          func_0x000107c5ec14(uStack_e8);
          func_0x000107c6142c(puVar18);
          uVar23 = uStack_120;
          puVar18 = puStack_128;
          pcVar21 = *(code **)((long)puStack_128 + 0x30);
          uVar19 = uVar20;
          (*pcVar21)(uVar20,1,uStack_120);
          if ((int)uVar19 == 0) {
            func_0x000107c61434(puVar8);
            func_0x000107c5ebc8();
          }
          lVar4 = 1;
          uVar19 = uVar20;
          puStack_c8 = puVar8;
          (*pcVar21)(uVar20,1,uVar23);
          puVar16 = puStack_e0;
          puVar8 = puStack_f8;
          if ((int)uVar19 == 0) {
            puVar7 = puStack_f8;
            (**(code **)((long)puVar18 + 0x10))(puStack_f8,uVar20,uVar23);
            func_0x000107c5ec18();
            (**(code **)((long)puVar18 + 8))(puVar8);
            lVar5 = 0;
            if (uVar20 != 0) {
              lVar5 = (long)puVar7;
            }
            uVar19 = 0xe000000000000000;
            if (uVar20 != 0) {
              uVar19 = uVar20;
            }
          }
          else {
            lVar5 = 0;
            uVar23 = lVar4;
            uVar19 = 0xe000000000000000;
          }
          lVar4 = 0x27;
          func_0x00010900605c();
          func_0x000107c61180();
          if (lVar4 == 0) {
            lVar17 = 0;
            uVar23 = -0x2000000000000000;
          }
          else {
            lVar17 = lVar4;
            func_0x000107c5faec();
            func_0x000107c61170(lVar4);
          }
          lVar4 = lVar5;
          FUN_101699e90(lVar5,uVar19,lVar17,uVar23);
          puVar18 = PTR_PTR_1126b9620;
          lStack_d8 = lVar4;
          func_0x000107c610f8();
          func_0x000107c453e4();
          func_0x000107c537f4();
          lVar4 = 0x112d38280;
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          func_0x000107c613fc();
          *(undefined8 *)(lVar4 + 0x18) = 2;
          *(undefined8 *)(lVar4 + 0x10) = 1;
          *(long *)(lVar4 + 0x20) = lVar17;
          *(ulong *)(lVar4 + 0x28) = uVar23;
          puVar8 = PTR_PTR_1126b1060;
          func_0x000107c610f8();
          lVar17 = lVar4;
          func_0x000107c5fc48(lVar4,PTR___sSSN_11034da80);
          func_0x000107c61574(lVar4);
          func_0x000107c47d08();
          func_0x000107c61170(lVar17);
          puVar7 = PTR_PTR_1126b1378;
          func_0x000107c61168();
          func_0x000107c4ed5c();
          func_0x000107c61180();
          puVar9 = PTR_PTR_1126b08b8;
          puStack_f8 = puVar7;
          func_0x000107c610f8();
          uVar23 = uVar19;
          func_0x000107c5fadc(lVar5);
          func_0x000107c6142c(uVar19);
          func_0x000107c4766c();
          func_0x000107c61170(lVar5);
          func_0x000107c5ee80(puVar16,0x40f5180000000000);
          puStack_d0 = puVar18;
          func_0x000107c41214();
          func_0x000107c61180();
          if (puVar18 == (undefined *)0x0) {
            puVar7 = (undefined *)0x0;
            uVar23 = 0xf000000000000000;
          }
          else {
            puVar7 = puVar18;
            func_0x000107c5ee30();
            func_0x000107c61170(puVar18);
          }
          uVar10 = 0;
          func_0x000107c5fadc(0,0xe000000000000000);
          uVar11 = 0;
          func_0x000107c5fadc(0,0xe000000000000000);
          uVar12 = uVar11;
          func_0x000107c5ee70();
          puVar18 = (undefined *)0x0;
          if (uVar23 >> 0x3c < 0xf) {
            func_0x00010006c00c(puVar7,uVar23);
            puVar18 = puVar7;
            func_0x000107c5ee20(puVar7,uVar23);
            func_0x0001000b44c0(puVar7,uVar23);
          }
          puVar13 = &UNK_1103f4400;
          func_0x000107c613fc(&UNK_1103f4400,0x18,7);
          func_0x000107c61644(puVar13 + 0x10,lVar6);
          puVar14 = &UNK_1103f4478;
          func_0x000107c613fc(&UNK_1103f4478,0x38,7);
          uVar2 = uStack_110;
          lVar6 = lStack_130;
          *(undefined **)(puVar14 + 0x10) = puVar13;
          *(undefined **)(puVar14 + 0x18) = puVar9;
          *(undefined **)(puVar14 + 0x20) = puVar8;
          *(undefined8 *)(puVar14 + 0x28) = uStack_110;
          *(long *)(puVar14 + 0x30) = lStack_130;
          pcStack_a0 = FUN_10169a040;
          puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b8 = 0x42000000;
          puStack_b0 = &UNK_100f17820;
          puStack_a8 = &UNK_1103f4490;
          ppuVar15 = &puStack_c0;
          puStack_128 = puVar7;
          uStack_120 = uVar23;
          puStack_98 = puVar14;
          func_0x000107c60bc4();
          puVar7 = puStack_98;
          func_0x000107c61174(puVar9);
          func_0x000107c61174();
          puStack_138 = puVar8;
          func_0x000107c615f0(uVar2);
          func_0x000107c61174(lVar6);
          func_0x000107c61574(puVar7);
          *(undefined **)(uVar25 - 0x10) = puVar18;
          *(undefined ***)(uVar25 - 8) = ppuVar15;
          *(undefined8 *)(uVar25 - 0x18) = uVar12;
          *(undefined2 *)(uVar25 - 0x20) = 0;
          lVar4 = lStack_d8;
          puVar8 = puStack_f8;
          lVar6 = lStack_118;
          lVar5 = lStack_118;
          func_0x000107c42264();
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar15);
          func_0x000107c61170(uVar10);
          func_0x000107c61170(uVar11);
          func_0x000107c61170(uVar12);
          func_0x000107c61170(puVar18);
          puVar7 = PTR_PTR_1126b0418;
          func_0x000107c61168(PTR_PTR_1126b0418);
          puVar18 = &UNK_1103f44c8;
          func_0x000107c613fc(&UNK_1103f44c8,0x18,7);
          *(long *)(puVar18 + 0x10) = lVar5;
          pcStack_a0 = (code *)0x10169a050;
          puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b8 = 0x42000000;
          puStack_b0 = &UNK_1000f6b44;
          puStack_a8 = &UNK_1103f44e0;
          ppuVar15 = &puStack_c0;
          puStack_98 = puVar18;
          func_0x000107c60bc4(ppuVar15);
          puVar18 = puStack_98;
          func_0x000107c615f0(lVar5);
          func_0x000107c61574(puVar18);
          func_0x000107c408f0(puVar7);
          func_0x000107c61180();
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(puVar8);
          func_0x000107c60bd0(ppuVar15);
          func_0x000107c61574(lStack_f0);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puStack_138);
          func_0x000107c615e8(lVar5);
          func_0x000107c61170(puStack_d0);
          func_0x000107c615e8(lVar6);
          func_0x0001000b44c0(puStack_128,uStack_120);
          (**(code **)(lStack_108 + 8))(puStack_e0,lStack_100);
          func_0x000107c6142c(puStack_c8);
          func_0x000100f14918(uStack_e8);
          return puVar7;
        }
        uVar23 = ((ulong *)(lVar4 + 0x40))[lVar6];
      }
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x1016997c0);
      (*pcVar21)();
    }
    func_0x000107c61574(param_2);
  }
  if (param_3 != 0) {
    func_0x000107c50374();
    func_0x000107c61180();
    if (param_3 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar16);
    }
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar8 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    puVar7 = puVar18;
    func_0x000107c5f9dc(puVar18,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar18);
    func_0x000107c48368(puVar8);
    func_0x000107c61170(param_3);
    func_0x000107c61170(puVar7);
    func_0x000107c4d664(param_1);
    func_0x000107c3fedc(param_1);
    puVar18 = PTR_PTR_1126b0418;
    func_0x000107c610f8(PTR_PTR_1126b0418);
    func_0x000107c453e4();
    func_0x000107c61170(puVar8);
    return puVar18;
  }
                    /* WARNING: Does not return */
  pcVar21 = (code *)SoftwareBreakpoint(1,0x1016997c4);
  (*pcVar21)();
}



/* Entry: 1016997c8; end: 101699883;  */

undefined1  [16] FUN_1016997c8(void)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  int iVar4;
  long unaff_x20;
  
  iVar4 = (int)*(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = 0x1000000000000023;
  func_0x000107c5fadc(0x1000000000000023,0x800000010efb5b50);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar3);
  uVar3 = 0xd000000000000024;
  pcVar1 = "/3d/avatar_assets_encoded";
  if (iVar4 == 0) {
    uVar3 = 0xd000000000000018;
    pcVar1 = s_Bitmoji_Images_Staging_Host_10efb5b70 + 0x10;
  }
  func_0x000107c5fb78(0xd000000000000019,0x800000010efb5ba0);
  auVar2._8_8_ = (ulong)pcVar1 | 0x8000000000000000;
  auVar2._0_8_ = uVar3;
  return auVar2;
}



/* Entry: 101699884; end: 101699ac3;  */

void FUN_101699884(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  puVar8 = auStack_68;
  func_0x000107c61428(param_3 + 0x10,puVar8,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if (param_7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101699ac4);
      (*pcVar1)();
    }
    func_0x000107c50374();
    func_0x000107c61180();
    puVar9 = puVar8;
    lVar2 = param_7;
    if (param_7 == 0) {
      func_0x000107c5faec();
      puVar9 = puVar8;
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar8);
    }
    func_0x000107c5faec();
    lVar3 = *(long *)(param_3 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) {
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar6 = PTR_PTR_1126b0278;
      func_0x000107c610f8(PTR_PTR_1126b0278);
      puVar7 = puVar5;
      func_0x000107c5f9dc(puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
      func_0x000107c6142c(puVar5);
      func_0x000107c48368(puVar6);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar7);
      func_0x000107c4d664(param_6);
      func_0x000107c3fedc(param_6);
      func_0x000107c61170(puVar6);
      func_0x000107c6142c(puVar9);
      func_0x000107c61574(param_3);
    }
    else {
      func_0x000107c61170(lVar2);
      puVar5 = &UNK_1103f4518;
      func_0x000107c613fc(&UNK_1103f4518,0x28,7);
      *(long *)(puVar5 + 0x10) = param_7;
      *(undefined1 **)(puVar5 + 0x18) = puVar9;
      *(undefined8 *)(puVar5 + 0x20) = param_6;
      uStack_78 = 0x10169a058;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      uStack_88 = 0x101699d18;
      puStack_80 = &UNK_1103f4530;
      ppuVar4 = &puStack_98;
      puStack_70 = puVar5;
      func_0x000107c60bc4(ppuVar4);
      puVar5 = puStack_70;
      func_0x000107c61434(puVar9);
      func_0x000107c615f0(param_6);
      func_0x000107c61574(puVar5);
      func_0x000107c50778(lVar3);
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c6142c(puVar9);
      func_0x000107c61574(param_3);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 101699ac4; end: 101699be3; -[_TtC46SCBitmojiAvatarBuilderLensProcessingEntryPoint40BitmojiAvatarBuilderLensApiPluginHandler handleRequest:] */

void FUN_101699ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = &UNK_1103f4400;
  func_0x000107c613fc(&UNK_1103f4400,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,param_1);
  puVar3 = &UNK_1103f4428;
  func_0x000107c613fc(&UNK_1103f4428,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  uStack_50 = 0x10169a084;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1004725e8;
  puStack_58 = &UNK_1103f4440;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c408f0(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101699be4; end: 101699be7; -[_TtC46SCBitmojiAvatarBuilderLensProcessingEntryPoint40BitmojiAvatarBuilderLensApiPluginHandler reset] */

void FUN_101699be4(void)

{
  return;
}



/* Entry: 101699be8; end: 101699dbf;  */

/* WARNING: Possible PIC construction at 0x000101699ca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101699ce4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101699cac) */
/* WARNING: Removing unreachable block (ram,0x000101699ce8) */

void FUN_101699be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar2 = PTR_PTR_1126b0278;
  func_0x000107c610f8(PTR_PTR_1126b0278);
  func_0x000107c5fadc(param_5,param_6);
  puVar3 = puVar1;
  func_0x000107c5f9dc(puVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar1);
  if ((param_4 & 1) == 0) {
    func_0x000107c48368(puVar2);
    func_0x000107c61170(param_5);
  }
  else {
    func_0x000107c5ee20(param_1,param_2);
    func_0x000107c48368(puVar2);
    puVar3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 101699dc0; end: 101699deb;  */

void FUN_101699dc0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101699dec; end: 101699e1f;  */

void FUN_101699dec(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000107c613fc(param_3,0x20,7);
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  return;
}



/* Entry: 101699e20; end: 101699e43;  */

undefined * FUN_101699e20(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined1 *puVar16;
  long lVar17;
  long extraout_x8;
  long extraout_x8_00;
  long lVar18;
  long extraout_x8_01;
  undefined *puVar19;
  long extraout_x8_02;
  ulong uVar20;
  ulong uVar21;
  code *pcVar22;
  long lVar23;
  ulong uVar24;
  long unaff_x20;
  undefined1 *puVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  undefined2 auStack_160 [4];
  undefined8 auStack_158 [3];
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined1 *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar17 = *(long *)(unaff_x20 + 0x10);
  lVar26 = *(long *)(unaff_x20 + 0x18);
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar23 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  puVar25 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000107c5ec24();
  lVar28 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar28 + 0x40));
  lVar18 = (long)puVar25 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  puStack_f8 = (undefined *)lVar18;
  func_0x000107c5ebbc();
  puStack_d0 = *(undefined **)(lVar6 + -8);
  lStack_d8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)((long)puStack_d0 + 0x40));
  puVar19 = (undefined *)(lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0x112d4b5b0;
  puStack_c8 = puVar19;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar27 = (long)puVar19 - extraout_x8_02;
  puVar16 = auStack_90;
  func_0x000107c61428(lVar17 + 0x10,puVar16,0,0);
  lVar17 = lVar17 + 0x10;
  func_0x000107c61648();
  if (lVar17 != 0) {
    lVar6 = *(long *)(lVar17 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      puStack_128 = (undefined *)lVar28;
      uStack_120 = lVar5;
      lStack_118 = lVar6;
      uStack_110 = param_1;
      lStack_108 = lVar23;
      lStack_100 = lVar4;
      lStack_f0 = lVar17;
      uStack_e8 = uVar27;
      puStack_e0 = puVar25;
      if (lVar26 == 0) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x1016997c8);
        (*pcVar22)();
      }
      lStack_130 = lVar26;
      func_0x000107c4e33c();
      func_0x000107c61180();
      lVar17 = lVar26;
      puVar19 = PTR___sSSN_11034da80;
      func_0x000107c5f9e8();
      func_0x000107c61170(lVar26);
      lVar6 = 0;
      uVar21 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
      uVar24 = 0xffffffffffffffff;
      if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
        uVar24 = ~(-1L << (uVar21 & 0x3f));
      }
      uVar24 = uVar24 & *(ulong *)(lVar17 + 0x40);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      while( true ) {
        for (; uVar24 != 0; uVar24 = uVar24 - 1 & uVar24) {
          uVar20 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
          uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
          uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
          uVar20 = lVar6 << 10 | LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) << 4;
          puVar1 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar20);
          uVar12 = *puVar1;
          uVar11 = puVar1[1];
          puVar1 = (undefined8 *)(*(long *)(lVar17 + 0x38) + uVar20);
          uVar10 = *puVar1;
          uVar2 = puVar1[1];
          func_0x000107c61434(uVar11);
          func_0x000107c61434(uVar2);
          func_0x000107c5ebb0(puStack_c8,uVar12,uVar11,uVar10,uVar2);
          func_0x000107c6142c(uVar11);
          func_0x000107c6142c(uVar2);
          puVar19 = puVar8;
          func_0x000107c61558();
          puVar7 = puVar8;
          if (((ulong)puVar19 & 1) == 0) {
            puVar7 = (undefined *)0x0;
            func_0x0001012d3170(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
          }
          uVar20 = *(ulong *)(puVar7 + 0x10);
          puVar8 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar20) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
            func_0x0001012d3170(puVar8,uVar20 + 1,1,puVar7);
          }
          *(ulong *)(puVar8 + 0x10) = uVar20 + 1;
          puVar19 = puStack_c8;
          (**(code **)((long)puStack_d0 + 0x20))
                    (puVar8 + *(long *)((long)puStack_d0 + 0x48) * uVar20 +
                              ((ulong)*(byte *)((long)puStack_d0 + 0x50) + 0x20 &
                              ((ulong)*(byte *)((long)puStack_d0 + 0x50) ^ 0xffffffffffffffff)),
                     puStack_c8,lStack_d8);
        }
        bVar3 = SCARRY8(lVar6,1);
        lVar6 = lVar6 + 1;
        if (bVar3) break;
        if ((long)(uVar21 + 0x3f >> 6) <= lVar6) {
          func_0x000107c61574(lVar17);
          lVar6 = lStack_f0;
          FUN_1016997c8();
          uVar21 = uStack_e8;
          func_0x000107c5ec14(uStack_e8);
          func_0x000107c6142c(puVar19);
          uVar24 = uStack_120;
          puVar19 = puStack_128;
          pcVar22 = *(code **)((long)puStack_128 + 0x30);
          uVar20 = uVar21;
          (*pcVar22)(uVar21,1,uStack_120);
          if ((int)uVar20 == 0) {
            func_0x000107c61434(puVar8);
            func_0x000107c5ebc8();
          }
          lVar17 = 1;
          uVar20 = uVar21;
          puStack_c8 = puVar8;
          (*pcVar22)(uVar21,1,uVar24);
          puVar16 = puStack_e0;
          puVar8 = puStack_f8;
          if ((int)uVar20 == 0) {
            puVar7 = puStack_f8;
            (**(code **)((long)puVar19 + 0x10))(puStack_f8,uVar21,uVar24);
            func_0x000107c5ec18();
            (**(code **)((long)puVar19 + 8))(puVar8);
            lVar26 = 0;
            if (uVar21 != 0) {
              lVar26 = (long)puVar7;
            }
            uVar20 = 0xe000000000000000;
            if (uVar21 != 0) {
              uVar20 = uVar21;
            }
          }
          else {
            lVar26 = 0;
            uVar24 = lVar17;
            uVar20 = 0xe000000000000000;
          }
          lVar17 = 0x27;
          func_0x00010900605c();
          func_0x000107c61180();
          if (lVar17 == 0) {
            lVar4 = 0;
            uVar24 = -0x2000000000000000;
          }
          else {
            lVar4 = lVar17;
            func_0x000107c5faec();
            func_0x000107c61170(lVar17);
          }
          lVar17 = lVar26;
          FUN_101699e90(lVar26,uVar20,lVar4,uVar24);
          puVar19 = PTR_PTR_1126b9620;
          lStack_d8 = lVar17;
          func_0x000107c610f8();
          func_0x000107c453e4();
          func_0x000107c537f4();
          lVar17 = 0x112d38280;
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          func_0x000107c613fc();
          *(undefined8 *)(lVar17 + 0x18) = 2;
          *(undefined8 *)(lVar17 + 0x10) = 1;
          *(long *)(lVar17 + 0x20) = lVar4;
          *(ulong *)(lVar17 + 0x28) = uVar24;
          puVar8 = PTR_PTR_1126b1060;
          func_0x000107c610f8();
          lVar4 = lVar17;
          func_0x000107c5fc48(lVar17,PTR___sSSN_11034da80);
          func_0x000107c61574(lVar17);
          func_0x000107c47d08();
          func_0x000107c61170(lVar4);
          puVar7 = PTR_PTR_1126b1378;
          func_0x000107c61168();
          func_0x000107c4ed5c();
          func_0x000107c61180();
          puVar9 = PTR_PTR_1126b08b8;
          puStack_f8 = puVar7;
          func_0x000107c610f8();
          uVar24 = uVar20;
          func_0x000107c5fadc(lVar26);
          func_0x000107c6142c(uVar20);
          func_0x000107c4766c();
          func_0x000107c61170(lVar26);
          func_0x000107c5ee80(puVar16,0x40f5180000000000);
          puStack_d0 = puVar19;
          func_0x000107c41214();
          func_0x000107c61180();
          if (puVar19 == (undefined *)0x0) {
            puVar7 = (undefined *)0x0;
            uVar24 = 0xf000000000000000;
          }
          else {
            puVar7 = puVar19;
            func_0x000107c5ee30();
            func_0x000107c61170(puVar19);
          }
          uVar10 = 0;
          func_0x000107c5fadc(0,0xe000000000000000);
          uVar11 = 0;
          func_0x000107c5fadc(0,0xe000000000000000);
          uVar12 = uVar11;
          func_0x000107c5ee70();
          puVar19 = (undefined *)0x0;
          if (uVar24 >> 0x3c < 0xf) {
            func_0x00010006c00c(puVar7,uVar24);
            puVar19 = puVar7;
            func_0x000107c5ee20(puVar7,uVar24);
            func_0x0001000b44c0(puVar7,uVar24);
          }
          puVar13 = &UNK_1103f4400;
          func_0x000107c613fc(&UNK_1103f4400,0x18,7);
          func_0x000107c61644(puVar13 + 0x10,lVar6);
          puVar14 = &UNK_1103f4478;
          func_0x000107c613fc(&UNK_1103f4478,0x38,7);
          uVar2 = uStack_110;
          lVar6 = lStack_130;
          *(undefined **)(puVar14 + 0x10) = puVar13;
          *(undefined **)(puVar14 + 0x18) = puVar9;
          *(undefined **)(puVar14 + 0x20) = puVar8;
          *(undefined8 *)(puVar14 + 0x28) = uStack_110;
          *(long *)(puVar14 + 0x30) = lStack_130;
          pcStack_a0 = FUN_10169a040;
          puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b8 = 0x42000000;
          puStack_b0 = &UNK_100f17820;
          puStack_a8 = &UNK_1103f4490;
          ppuVar15 = &puStack_c0;
          puStack_128 = puVar7;
          uStack_120 = uVar24;
          puStack_98 = puVar14;
          func_0x000107c60bc4();
          puVar7 = puStack_98;
          func_0x000107c61174(puVar9);
          func_0x000107c61174();
          puStack_138 = puVar8;
          func_0x000107c615f0(uVar2);
          func_0x000107c61174(lVar6);
          func_0x000107c61574(puVar7);
          *(undefined **)(uVar27 - 0x10) = puVar19;
          *(undefined ***)(uVar27 - 8) = ppuVar15;
          *(undefined8 *)(uVar27 - 0x18) = uVar12;
          *(undefined2 *)(uVar27 - 0x20) = 0;
          lVar17 = lStack_d8;
          puVar8 = puStack_f8;
          lVar6 = lStack_118;
          lVar26 = lStack_118;
          func_0x000107c42264();
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar15);
          func_0x000107c61170(uVar10);
          func_0x000107c61170(uVar11);
          func_0x000107c61170(uVar12);
          func_0x000107c61170(puVar19);
          puVar7 = PTR_PTR_1126b0418;
          func_0x000107c61168(PTR_PTR_1126b0418);
          puVar19 = &UNK_1103f44c8;
          func_0x000107c613fc(&UNK_1103f44c8,0x18,7);
          *(long *)(puVar19 + 0x10) = lVar26;
          pcStack_a0 = (code *)0x10169a050;
          puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b8 = 0x42000000;
          puStack_b0 = &UNK_1000f6b44;
          puStack_a8 = &UNK_1103f44e0;
          ppuVar15 = &puStack_c0;
          puStack_98 = puVar19;
          func_0x000107c60bc4(ppuVar15);
          puVar19 = puStack_98;
          func_0x000107c615f0(lVar26);
          func_0x000107c61574(puVar19);
          func_0x000107c408f0(puVar7);
          func_0x000107c61180();
          func_0x000107c615e8(lVar17);
          func_0x000107c61170(puVar8);
          func_0x000107c60bd0(ppuVar15);
          func_0x000107c61574(lStack_f0);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puStack_138);
          func_0x000107c615e8(lVar26);
          func_0x000107c61170(puStack_d0);
          func_0x000107c615e8(lVar6);
          func_0x0001000b44c0(puStack_128,uStack_120);
          (**(code **)(lStack_108 + 8))(puStack_e0,lStack_100);
          func_0x000107c6142c(puStack_c8);
          func_0x000100f14918(uStack_e8);
          return puVar7;
        }
        uVar24 = ((ulong *)(lVar17 + 0x40))[lVar6];
      }
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x1016997c0);
      (*pcVar22)();
    }
    func_0x000107c61574(lVar17);
  }
  if (lVar26 != 0) {
    func_0x000107c50374();
    func_0x000107c61180();
    if (lVar26 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar16);
    }
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar8 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    puVar7 = puVar19;
    func_0x000107c5f9dc(puVar19,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar19);
    func_0x000107c48368(puVar8);
    func_0x000107c61170(lVar26);
    func_0x000107c61170(puVar7);
    func_0x000107c4d664(param_1);
    func_0x000107c3fedc(param_1);
    puVar19 = PTR_PTR_1126b0418;
    func_0x000107c610f8(PTR_PTR_1126b0418);
    func_0x000107c453e4();
    func_0x000107c61170(puVar8);
    return puVar19;
  }
                    /* WARNING: Does not return */
  pcVar22 = (code *)SoftwareBreakpoint(1,0x1016997c4);
  (*pcVar22)();
}



/* Entry: 101699e44; end: 101699e8f;  */

void FUN_101699e44(void)

{
  func_0x000107c61168(&PTR_PTR_112dbf200);
  return;
}



/* Entry: 101699e90; end: 10169a03f;  */

undefined *
FUN_101699e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c61558(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  func_0x000107c61434(param_4);
  func_0x00010018433c(param_3,param_4,0x7275746165462d58,0xe900000000000065,puVar2);
  puVar2 = PTR_PTR_1126b1058;
  func_0x000107c610f8();
  uVar3 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  uVar4 = 0x626f6c4261746144;
  func_0x000107c5fadc(0x626f6c4261746144,0xe800000000000000);
  func_0x000107c46d48();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  puVar5 = PTR_PTR_1126b1050;
  func_0x000107c610f8(PTR_PTR_1126b1050);
  uVar3 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  puVar6 = puVar1;
  func_0x000107c5f9dc(puVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c4915c(puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_1);
  return puVar5;
}



/* Entry: 10169a040; end: 10169a087;  */

void FUN_10169a040(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar12 = *(long *)(unaff_x20 + 0x30);
  puVar10 = auStack_68;
  func_0x000107c61428(lVar3 + 0x10,puVar10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101699ac4);
      (*pcVar2)();
    }
    func_0x000107c50374();
    func_0x000107c61180();
    puVar11 = puVar10;
    lVar4 = lVar12;
    if (lVar12 == 0) {
      func_0x000107c5faec();
      puVar11 = puVar10;
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar10);
    }
    func_0x000107c5faec();
    lVar5 = *(long *)(lVar3 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 == 0) {
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar8 = PTR_PTR_1126b0278;
      func_0x000107c610f8(PTR_PTR_1126b0278);
      puVar9 = puVar7;
      func_0x000107c5f9dc(puVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
      func_0x000107c6142c(puVar7);
      func_0x000107c48368(puVar8);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar9);
      func_0x000107c4d664(uVar1);
      func_0x000107c3fedc(uVar1);
      func_0x000107c61170(puVar8);
      func_0x000107c6142c(puVar11);
      func_0x000107c61574(lVar3);
    }
    else {
      func_0x000107c61170(lVar4);
      puVar7 = &UNK_1103f4518;
      func_0x000107c613fc(&UNK_1103f4518,0x28,7);
      *(long *)(puVar7 + 0x10) = lVar12;
      *(undefined1 **)(puVar7 + 0x18) = puVar11;
      *(undefined8 *)(puVar7 + 0x20) = uVar1;
      uStack_78 = 0x10169a058;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      uStack_88 = 0x101699d18;
      puStack_80 = &UNK_1103f4530;
      ppuVar6 = &puStack_98;
      puStack_70 = puVar7;
      func_0x000107c60bc4(ppuVar6);
      puVar7 = puStack_70;
      func_0x000107c61434(puVar11);
      func_0x000107c615f0(uVar1);
      func_0x000107c61574(puVar7);
      func_0x000107c50778(lVar5);
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c6142c(puVar11);
      func_0x000107c61574(lVar3);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(lVar5);
    }
  }
  return;
}



/* Entry: 10169a088; end: 10169a0df;  */

void FUN_10169a088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  return;
}



/* Entry: 10169a0e0; end: 10169a0f3;  */

void FUN_10169a0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  return;
}



/* Entry: 10169a0f4; end: 10169a493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169a0f4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  lVar12 = _DAT_113091b70;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar15 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_11306d5c8);
  uVar16 = *(undefined8 *)(lVar15 + _DAT_113091b70);
  func_0x000107c61174();
  func_0x000107c41b80();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(lVar15 + lVar12);
  func_0x000107c5e370();
  func_0x000107c61180();
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10169a494;
  uStack_78 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_10169a4a0;
  puStack_88 = &UNK_1103f4558;
  ppuVar5 = &puStack_a0;
  func_0x000107c60bc4(ppuVar5);
  uVar6 = uVar16;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  pcStack_80 = (code *)0x10169a540;
  uStack_78 = 0;
  puStack_a0 = puVar9;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_10169a4a0;
  puStack_88 = &UNK_1103f4580;
  ppuVar5 = &puStack_a0;
  func_0x000107c60bc4(ppuVar5);
  uVar7 = uVar4;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar8 = PTR_PTR_1126ae6b8;
  func_0x000107c61168();
  puVar9 = puVar8;
  FUN_10169a604();
  func_0x000107c613fc();
  *(undefined8 *)(puVar9 + 0x18) = 7;
  *(undefined8 *)(puVar9 + 0x10) = 3;
  *(undefined8 *)(puVar9 + 0x20) = uVar3;
  *(undefined8 *)(puVar9 + 0x28) = uVar6;
  *(undefined8 *)(puVar9 + 0x30) = uVar7;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0x112d5b0a0;
  func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
  puVar10 = puVar9;
  func_0x000107c5fc48(puVar9,uVar14);
  func_0x000107c61574(puVar9);
  func_0x000107c4cd50();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  lVar15 = _DAT_11306d5c0;
  uVar17 = *(undefined8 *)(lVar1 + _DAT_11306d5b8);
  func_0x000107c61428(lVar1 + _DAT_11306d5c0,&puStack_a0,0,0);
  lVar15 = lVar1 + lVar15;
  func_0x000107c61618(lVar15);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar19 = *(undefined8 *)(lVar1 + _DAT_11306d5e0);
  lVar11 = 0;
  FUN_10169b45c();
  lVar12 = lVar11;
  func_0x000107c610f8();
  lVar1 = _DAT_112dbf570;
  func_0x000107c61614(lVar12 + _DAT_112dbf570,0);
  *(undefined8 *)(lVar12 + _DAT_112dbf578) = 0;
  *(undefined8 *)(lVar12 + _DAT_112dbf580) = uVar17;
  func_0x000107c61604(lVar12 + lVar1,lVar15);
  *(undefined8 *)(lVar12 + _DAT_112dbf588) = uVar14;
  *(undefined8 *)(lVar12 + _DAT_112dbf590) = uVar2;
  *(undefined8 *)(lVar12 + _DAT_112dbf598) = uVar18;
  *(undefined **)(lVar12 + _DAT_112dbf5a0) = puVar8;
  *(undefined8 *)(lVar12 + _DAT_112dbf5a8) = uVar19;
  puVar9 = PTR_s_init_1125d9248;
  lStack_b0 = lVar12;
  lStack_a8 = lVar11;
  func_0x000107c61174(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(puVar8);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar18);
  plVar13 = &lStack_b0;
  func_0x000107c61154(plVar13,puVar9);
  func_0x000107c61170(uVar17);
  func_0x000107c615e8(lVar15);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
  *(long **)(unaff_x20 + 0x38) = plVar13;
  func_0x000107c61170(uVar14);
  lVar15 = *(long *)(unaff_x20 + 0x38);
  if (lVar15 != 0) {
    func_0x000107c61174();
    FUN_10169b10c();
    func_0x000107c61170(lVar15);
  }
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 10169a494; end: 10169a49f;  */

void FUN_10169a494(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x0001005f57cc();
  uVar2 = 0;
  (*(code *)&UNK_10450b3c8)();
  param_1[3] = uVar1;
  *param_1 = uVar2;
  return;
}



/* Entry: 10169a4a0; end: 10169a523;  */

void FUN_10169a4a0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10169a524; end: 10169a54b;  */

void FUN_10169a524(long param_1,long param_2)

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



/* Entry: 10169a54c; end: 10169a58f;  */

void FUN_10169a54c(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x0001005f57cc();
  uVar2 = 0;
  (*param_3)();
  param_1[3] = uVar1;
  *param_1 = uVar2;
  return;
}



/* Entry: 10169a590; end: 10169a5db;  */

void FUN_10169a590(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10169a5dc; end: 10169a5fb;  */

void FUN_10169a5dc(void)

{
  FUN_10169a0f4();
  return;
}



/* Entry: 10169a5fc; end: 10169a603;  */

undefined8 FUN_10169a5fc(void)

{
  return 0;
}



/* Entry: 10169a604; end: 10169a68b;  */

/* WARNING: Possible PIC construction at 0x00010169a634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010169a638) */
/* WARNING: Removing unreachable block (ram,0x00010169a63c) */

void FUN_10169a604(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112d5b228;
    plVar5 = (long *)&UNK_10d9223b0;
  }
  else {
    puVar3 = (ulong *)0x112d5b0a0;
    plVar5 = (long *)&UNK_10d97aac0;
    unaff_x30 = 0x10169a638;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 10169a68c; end: 10169a693;  */

void FUN_10169a68c(long param_1,long param_2)

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



/* Entry: 10169a694; end: 10169a7c7;  */

void FUN_10169a694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170(param_3);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  return;
}



/* Entry: 10169a7c8; end: 10169a80b;  */

void FUN_10169a7c8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10169a80c; end: 10169a82b;  */

void FUN_10169a80c(void)

{
  func_0x00010169a6f0();
  return;
}



/* Entry: 10169a82c; end: 10169a833;  */

undefined8 FUN_10169a82c(void)

{
  return 0;
}



/* Entry: 10169a834; end: 10169a853;  */

void FUN_10169a834(void)

{
  func_0x000107c61168(&PTR_PTR_112dbf370);
  return;
}



/* Entry: 10169a854; end: 10169ab2f;  */

/* WARNING: Possible PIC construction at 0x00010169a9ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010169aae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010169a9b0) */
/* WARNING: Removing unreachable block (ram,0x00010169aae4) */

void FUN_10169a854(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x20;
  long lVar7;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar7 = *(long *)(unaff_x20 + 0x18);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efb5bf0);
  puVar4 = (undefined8 *)0x3336353232383836;
  puVar6 = (undefined8 *)0xef37323138333836;
  func_0x000107c5fadc();
  func_0x000107c5c1dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170();
  if (lVar7 == 0) {
    lVar7 = 0;
    puVar4 = puVar6;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c();
  }
  func_0x000103f6c8c8();
  uVar3 = *puVar4;
  uVar1 = puVar4[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  lVar5 = lVar2;
  func_0x000107c4b2b4();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000107c61170(uVar3);
  lVar7 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar7 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x30);
    *(long *)(unaff_x20 + 0x30) = lVar7;
    func_0x000107c615f0(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 10169ab30; end: 10169ab33;  */

void FUN_10169ab30(void)

{
  return;
}



/* Entry: 10169ab34; end: 10169abcb;  */

void FUN_10169ab34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103f4670;
  func_0x000107c613fc(&UNK_1103f4670,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_2);
  func_0x0001008546f4(FUN_10169abcc,0,0x10169ad78,puVar1,0x10169ac98,0,0x10169ac9c,0,0x10169aca0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10169abcc; end: 10169abcf;  */

void FUN_10169abcc(void)

{
  return;
}



/* Entry: 10169abd0; end: 10169ac93;  */

void FUN_10169abd0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c3d080();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
    pcStack_48 = FUN_10169ac94;
    uStack_40 = 0;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x42000000;
    puStack_58 = &UNK_1010186a8;
    puStack_50 = &UNK_1103f4688;
    ppuVar2 = &puStack_68;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c5dc64(lVar1);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10169ac94; end: 10169aca3;  */

void FUN_10169ac94(void)

{
  return;
}



/* Entry: 10169aca4; end: 10169acef;  */

void FUN_10169aca4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10169acf0; end: 10169ad53;  */

void FUN_10169acf0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10169ad54; end: 10169ad7f;  */

void FUN_10169ad54(long param_1,long param_2)

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



/* Entry: 10169ad80; end: 10169addf;  */

long FUN_10169ad80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010169ad34();
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(long *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  *(undefined **)(lVar1 + 0x20) = puVar2;
  return lVar1;
}



/* Entry: 10169ade0; end: 10169adef;  */

void FUN_10169ade0(long param_1,long param_2)

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



/* Entry: 10169adf0; end: 10169ae4f;  */

undefined8 FUN_10169adf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_10169ae80(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 10169ae50; end: 10169ae73;  */

void FUN_10169ae50(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10169ae74; end: 10169ae7f;  */

void FUN_10169ae74(void)

{
  return;
}



/* Entry: 10169ae80; end: 10169afcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169ae80(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  lVar1 = _DAT_11306d5d8;
  func_0x000107c61428(param_2 + _DAT_11306d5d8,auStack_68,0,0);
  puVar5 = *(undefined8 **)(param_2 + lVar1);
  puVar2 = puVar5;
  func_0x000107c615f4(puVar5,2);
  func_0x000101b2f520();
  uVar6 = *puVar2;
  uVar4 = puVar2[1];
  puVar3 = PTR_PTR_1126b1cb0;
  func_0x000107c610f8(PTR_PTR_1126b1cb0);
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar6,uVar4);
  func_0x000107c6142c(uVar4);
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efb5c10);
  func_0x000107c46c6c(puVar3);
  func_0x000107c615e8(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 **)(unaff_x20 + 0x10) = puVar5;
  func_0x000107c615f0(puVar5);
  func_0x000107c615e8(uVar6);
  func_0x000107c5d7e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c615e8(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10169afcc; end: 10169afeb;  */

void FUN_10169afcc(void)

{
  func_0x000107c61168(&PTR_PTR_112dbf510);
  return;
}



/* Entry: 10169afec; end: 10169b10b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10169afec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  puVar3 = auStack_80;
  func_0x000107c610f8();
  lVar2 = _DAT_112dbf570;
  func_0x000107c61614(unaff_x20 + _DAT_112dbf570,0);
  *(undefined8 *)(unaff_x20 + _DAT_112dbf578) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dbf580) = param_2;
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112dbf588) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dbf590) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112dbf598) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112dbf5a0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112dbf5a8) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_2);
  func_0x000107c61154(auStack_80,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 10169b10c; end: 10169b373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169b10c(double param_1,undefined8 param_2,double param_3,double param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  
  lVar1 = 0;
  func_0x000107c5f83c();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112dbf598) + _DAT_113016c18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c51820();
    func_0x000107c61170(puVar3);
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112dbf580);
    func_0x000107c438d4(uVar11);
    func_0x000107c438d4(uVar11);
    lVar4 = lVar2;
    func_0x000107c614f0(lVar2);
    lVar5 = lVar4;
    func_0x000107c5f830(&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5f82c();
    (**(code **)(lVar13 + 8))
              (&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    dVar14 = *(double *)(unaff_x20 + _DAT_112dbf5a8);
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c466c0(1000.0 / dVar14);
    puVar7 = puVar6;
    func_0x0001043b753c();
    uVar9 = *puVar7;
    uVar10 = puVar7[1];
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112dbf5a0);
    func_0x000107c61434(uVar10);
    uVar8 = 1;
    func_0x000103e2ed5c(param_1 * param_3,param_1 * param_4,1,lVar5,puVar6,0,uVar9,uVar10,uVar12,
                        lVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c6142c(uVar10);
    uVar9 = uVar8;
    func_0x000107c5ba38();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112dbf578);
    *(undefined8 *)(unaff_x20 + _DAT_112dbf578) = uVar9;
    func_0x000107c615e8(uVar10);
    lVar1 = unaff_x20 + _DAT_112dbf570;
    func_0x000107c61618(lVar1);
    func_0x0001043b6dfc(uVar11,1,uVar8,uVar12,0,lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112dbf590));
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(uVar8);
    func_0x000107c61170(uVar11);
  }
  return;
}



/* Entry: 10169b374; end: 10169b3d3; -[_TtC46SCBitmojiAvatarBuilderLensProcessingEntryPoint44BitmojiAvatarBuilderPreviewViewfinderExposer init] */

void FUN_10169b374(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBitmojiAvatarBuilderLensProcessingEntryPoint.BitmojiAvatarBuilderPreviewViewfinderExposer"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10169b3a0);
  (*pcVar1)();
}



/* Entry: 10169b3d4; end: 10169b45b; -[_TtC46SCBitmojiAvatarBuilderLensProcessingEntryPoint44BitmojiAvatarBuilderPreviewViewfinderExposer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169b3d4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dbf580));
  FUN_10169b47c(param_1 + _DAT_112dbf570);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dbf588));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dbf590));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dbf598));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dbf5a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dbf578));
  return;
}



/* Entry: 10169b45c; end: 10169b47b;  */

void FUN_10169b45c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e4878);
  return;
}



/* Entry: 10169b47c; end: 10169b49f;  */

undefined8 FUN_10169b47c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10169b4a0; end: 10169b4ab; -[SCBitmojiAvatarBuilderLensProcessingEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169b4a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dbf5d8;
  func_0x000107c61428(param_1 + _DAT_112dbf5d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10169b4ac; end: 10169b4b7; -[SCBitmojiAvatarBuilderLensProcessingEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169b4ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dbf5d8;
  func_0x000107c61428(param_1 + _DAT_112dbf5d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10169b4b8; end: 10169b4c3; -[SCBitmojiAvatarBuilderLensProcessingEntryPoint systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169b4b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dbf5e0;
  func_0x000107c61428(param_1 + _DAT_112dbf5e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10169b4c4; end: 10169b4cf; -[SCBitmojiAvatarBuilderLensProcessingEntryPoint setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169b4c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dbf5e0;
  func_0x000107c61428(param_1 + _DAT_112dbf5e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10169b4d0; end: 10169b4db; -[SCBitmojiAvatarBuilderLensProcessingEntryPoint bitmojiAvatarBuilderLensScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169b4d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dbf5e8;
  func_0x000107c61428(param_1 + _DAT_112dbf5e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10169b4dc; end: 10169b4e7; -[SCBitmojiAvatarBuilderLensProcessingEntryPoint setBitmojiAvatarBuilderLensScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169b4dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dbf5e8;
  func_0x000107c61428(param_1 + _DAT_112dbf5e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10169b4e8; end: 10169b4f3; -[SCBitmojiAvatarBuilderLensProcessingEntryPoint lensModeFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169b4e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dbf5f0;
  func_0x000107c61428(param_1 + _DAT_112dbf5f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10169b4f4; end: 10169b4ff; -[SCBitmojiAvatarBuilderLensProcessingEntryPoint setLensModeFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169b4f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dbf5f0;
  func_0x000107c61428(param_1 + _DAT_112dbf5f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10169b500; end: 10169b50b; -[SCBitmojiAvatarBuilderLensProcessingEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169b500(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dbf5f8;
  func_0x000107c61428(param_1 + _DAT_112dbf5f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10169b50c; end: 10169b54f;  */

void FUN_10169b50c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10169b550; end: 10169b55b; -[SCBitmojiAvatarBuilderLensProcessingEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169b550(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dbf5f8;
  func_0x000107c61428(param_1 + _DAT_112dbf5f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10169b55c; end: 10169b5af;  */

void FUN_10169b55c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10169b5b0; end: 10169b76b;  */

/* WARNING: Possible PIC construction at 0x00010169b6a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010169b6b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010169b6c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010169b744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010169b724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010169b714: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010169b728) */
/* WARNING: Removing unreachable block (ram,0x00010169b748) */
/* WARNING: Removing unreachable block (ram,0x00010169b6c8) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x00010169b6b8) */
/* WARNING: Removing unreachable block (ram,0x00010169b6a8) */
/* WARNING: Removing unreachable block (ram,0x00010169b718) */

void FUN_10169b5b0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c5c634();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3e960();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4b2a8();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c3fa0c();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar4 = 0;
          FUN_10169a834();
          func_0x000107c613fc();
          *(long *)(lVar4 + 0x28) = lVar1;
          *(undefined8 *)(lVar4 + 0x30) = 0;
          *(long *)(lVar4 + 0x10) = lVar3;
          *(long *)(lVar4 + 0x18) = lVar2;
          *(long *)(lVar4 + 0x20) = unaff_x20;
          func_0x000107c61174(lVar1);
          func_0x000107c61174(lVar2);
          func_0x000107c61174(lVar3);
          func_0x000107c61174(unaff_x20);
          func_0x00010169a6f0();
          lVar1 = unaff_x20;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10169b76c; end: 10169b793; -[SCBitmojiAvatarBuilderLensProcessingEntryPoint begin] */

void FUN_10169b76c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10169b5b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10169b794; end: 10169b7d7; -[SCBitmojiAvatarBuilderLensProcessingEntryPoint end] */

void FUN_10169b794(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10169b7d8; end: 10169babb;  */

void FUN_10169b7d8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0x63536d6574737973;
      if (((param_2 == 0x63536d6574737973) && (param_3 == -0x14ffffffff9a8f91)) ||
         (func_0x000107c605b8(0x63536d6574737973,0xeb0000000065706f,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59b6c();
      }
      else {
        uVar2 = 0xd00000000000001d;
        if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef104a370)) ||
           (func_0x000107c605b8(0xd00000000000001d,0x800000010efb5c90,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52c9c();
        }
        else {
          uVar2 = 0xd000000000000017;
          if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10c5720)) ||
             (func_0x000107c605b8(0xd000000000000017,0x800000010ef3a8e0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55dd0();
          }
          else {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) &&
               (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "SCBitmojiAvatarBuilderLensProcessingEntryPoint/SCBitmojiAvatarBuilderLensProcessingEntryPoint.swift"
                                  ,99,2,0x37,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10169babc);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c53414();
          }
        }
      }
      goto LAB_10169b86c;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_10169b86c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10169babc; end: 10169bb67; -[SCBitmojiAvatarBuilderLensProcessingEntryPoint setValue:forIvarName:] */

void FUN_10169babc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10169b7d8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10169bb68; end: 10169bc17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169bb68(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112dbf5d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112dbf5e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112dbf5e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112dbf5f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112dbf5f8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112dbf600) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10169bc18; end: 10169bc37; -[SCBitmojiAvatarBuilderLensProcessingEntryPoint init] */

void FUN_10169bc18(void)

{
  FUN_10169bb68();
  return;
}



/* Entry: 10169bc38; end: 10169bc6b;  */

void FUN_10169bc38(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10169bc6c; end: 10169bce3; -[SCBitmojiAvatarBuilderLensProcessingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169bc6c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dbf5d8);
  func_0x000107c61610(param_1 + _DAT_112dbf5e0);
  func_0x000107c61610(param_1 + _DAT_112dbf5e8);
  func_0x000107c61610(param_1 + _DAT_112dbf5f0);
  func_0x000107c61610(param_1 + _DAT_112dbf5f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbf600));
  return;
}



/* Entry: 10169bce4; end: 10169bd03;  */

void FUN_10169bce4(void)

{
  func_0x000107c61168(&PTR_PTR_1127e4970);
  return;
}



/* Entry: 10169bd04; end: 10169bd0f; -[SCBitmojiAvatarBuilderLensURIHandlerEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169bd04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dbf630;
  func_0x000107c61428(param_1 + _DAT_112dbf630,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10169bd10; end: 10169bd1b; -[SCBitmojiAvatarBuilderLensURIHandlerEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169bd10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dbf630;
  func_0x000107c61428(param_1 + _DAT_112dbf630,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10169bd1c; end: 10169bd27; -[SCBitmojiAvatarBuilderLensURIHandlerEntryPoint bitmojiAvatarBuilderLensScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169bd1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dbf638;
  func_0x000107c61428(param_1 + _DAT_112dbf638,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10169bd28; end: 10169bd6b;  */

void FUN_10169bd28(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10169bd6c; end: 10169bd77; -[SCBitmojiAvatarBuilderLensURIHandlerEntryPoint setBitmojiAvatarBuilderLensScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169bd6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dbf638;
  func_0x000107c61428(param_1 + _DAT_112dbf638,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10169bd78; end: 10169bdcb;  */

void FUN_10169bd78(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10169bdcc; end: 10169be8f; -[SCBitmojiAvatarBuilderLensURIHandlerEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x00010169be3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010169be5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010169be40) */
/* WARNING: Removing unreachable block (ram,0x00010169be60) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_10169bdcc(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x000107c3e960();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      FUN_10169afcc(0);
      func_0x000107c613fc();
      FUN_10169ae80(lVar1,lVar2);
      param_1 = lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10169be90; end: 10169bed3; -[SCBitmojiAvatarBuilderLensURIHandlerEntryPoint end] */

void FUN_10169be90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10169bed4; end: 10169c06b;  */

void FUN_10169bed4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd00000000000001d;
      if (((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef104a370)) &&
         (func_0x000107c605b8(0xd00000000000001d,0x800000010efb5c90,param_2,param_3,0),
         (uVar2 & 1) == 0)) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SCBitmojiAvatarBuilderLensProcessingEntryPoint/SCBitmojiAvatarBuilderLensURIHandlerEntryPoint.swift"
                            ,99,2,0x27,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10169c06c);
        (*pcVar1)();
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52c9c();
      goto LAB_10169bfd4;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_10169bfd4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10169c06c; end: 10169c117; -[SCBitmojiAvatarBuilderLensURIHandlerEntryPoint setValue:forIvarName:] */

void FUN_10169c06c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10169bed4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10169c118; end: 10169c18b; -[SCBitmojiAvatarBuilderLensURIHandlerEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169c118(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dbf630,0);
  func_0x000107c61614(param_1 + _DAT_112dbf638,0);
  *(undefined8 *)(param_1 + _DAT_112dbf640) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10169c18c; end: 10169c1bf;  */

void FUN_10169c18c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10169c1c0; end: 10169c207; -[SCBitmojiAvatarBuilderLensURIHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169c1c0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dbf630);
  func_0x000107c61610(param_1 + _DAT_112dbf638);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbf640));
  return;
}



/* Entry: 10169c208; end: 10169c227;  */

void FUN_10169c208(void)

{
  func_0x000107c61168(&PTR_PTR_1127e4a50);
  return;
}



/* Entry: 10169c228; end: 10169c233; -[SCBitmojiAvatarBuilderLensApiPluginEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169c228(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dbf670;
  func_0x000107c61428(param_1 + _DAT_112dbf670,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10169c234; end: 10169c23f; -[SCBitmojiAvatarBuilderLensApiPluginEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169c234(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dbf670;
  func_0x000107c61428(param_1 + _DAT_112dbf670,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10169c240; end: 10169c24b; -[SCBitmojiAvatarBuilderLensApiPluginEntryPoint bitmojiAvatarBuilderLensScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169c240(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dbf678;
  func_0x000107c61428(param_1 + _DAT_112dbf678,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10169c24c; end: 10169c257; -[SCBitmojiAvatarBuilderLensApiPluginEntryPoint setBitmojiAvatarBuilderLensScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169c24c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dbf678;
  func_0x000107c61428(param_1 + _DAT_112dbf678,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10169c258; end: 10169c263; -[SCBitmojiAvatarBuilderLensApiPluginEntryPoint contentDeliveryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169c258(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dbf680;
  func_0x000107c61428(param_1 + _DAT_112dbf680,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10169c264; end: 10169c26f; -[SCBitmojiAvatarBuilderLensApiPluginEntryPoint setContentDeliveryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169c264(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dbf680;
  func_0x000107c61428(param_1 + _DAT_112dbf680,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10169c270; end: 10169c27b; -[SCBitmojiAvatarBuilderLensApiPluginEntryPoint applicationCircumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169c270(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dbf688;
  func_0x000107c61428(param_1 + _DAT_112dbf688,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10169c27c; end: 10169c2bf;  */

void FUN_10169c27c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10169c2c0; end: 10169c2cb; -[SCBitmojiAvatarBuilderLensApiPluginEntryPoint setApplicationCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169c2c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dbf688;
  func_0x000107c61428(param_1 + _DAT_112dbf688,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10169c2cc; end: 10169c31f;  */

void FUN_10169c2cc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10169c320; end: 10169c6cb;  */

/* WARNING: Possible PIC construction at 0x00010169c468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010169c4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010169c584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010169c594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010169c5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010169c5c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010169c5d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010169c5e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010169c65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010169c64c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010169c660) */
/* WARNING: Removing unreachable block (ram,0x00010169c5ec) */
/* WARNING: Removing unreachable block (ram,0x00010169c5dc) */
/* WARNING: Removing unreachable block (ram,0x00010169c5cc) */
/* WARNING: Removing unreachable block (ram,0x00010169c5bc) */
/* WARNING: Removing unreachable block (ram,0x00010169c598) */
/* WARNING: Removing unreachable block (ram,0x00010169c588) */
/* WARNING: Removing unreachable block (ram,0x00010169c500) */
/* WARNING: Removing unreachable block (ram,0x00010169c46c) */
/* WARNING: Removing unreachable block (ram,0x00010169c68c) */
/* WARNING: Removing unreachable block (ram,0x00010169c484) */
/* WARNING: Removing unreachable block (ram,0x00010169c6a4) */
/* WARNING: Removing unreachable block (ram,0x00010169c4c0) */
/* WARNING: Removing unreachable block (ram,0x00010169c650) */

void FUN_10169c320(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3e960();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40434();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c3df78();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        FUN_101698dfc();
        func_0x000107c613fc();
        puVar3 = &UNK_1103f46e0;
        func_0x000107c613fc(&UNK_1103f46e0,0x20,7);
        *(long *)(puVar3 + 0x10) = lVar2;
        *(long *)(puVar3 + 0x18) = unaff_x20;
        func_0x0001000285a8(0x112d4adb8,&UNK_10d923750);
        func_0x000107c613fc();
        func_0x000107c61174();
        func_0x000107c61174(unaff_x20);
        pcVar4 = FUN_10169c6cc;
        func_0x0001000bdd8c(FUN_10169c6cc,puVar3);
        uVar5 = 0x112d4adc0;
        func_0x0001000285a8(0x112d4adc0,&UNK_10d911470);
        func_0x0001000cb480(0x101698dd4,0,uVar5);
        func_0x0001003a5b88();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(pcVar4);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


