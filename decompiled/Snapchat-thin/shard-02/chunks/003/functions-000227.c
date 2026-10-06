/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101bdae48; end: 101bdaf13;  */

void FUN_101bdae48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long **)(lVar4 + 0xe8) = unaff_x22;
  *(undefined8 *)(lVar4 + 0xf0) = param_1;
  *(undefined8 *)(lVar4 + 0xf8) = param_2;
  *(undefined8 *)(lVar4 + 0x100) = param_3;
  *(long *)(lVar4 + 0x108) = unaff_x20;
  *(undefined8 *)(lVar4 + 0x1a0) = param_1;
  *(long *)(lVar4 + 0x1a8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x198));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar4 + 400);
    uVar2 = *(undefined8 *)(lVar4 + 0x140);
    func_0x000101be2878(lVar4 + 0x10,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar3);
    func_0x0001000834e4(lVar4 + 0xc0);
    pcVar1 = FUN_101bdaf14;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 400);
    uVar2 = *(undefined8 *)(lVar4 + 0x140);
    func_0x000101be2878(lVar4 + 0x10,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar3);
    pcVar1 = FUN_101bdb4e8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,0);
  return;
}



/* Entry: 101bdaf14; end: 101bdb4e7;  */

void FUN_101bdaf14(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  ulong uVar14;
  undefined8 uVar15;
  code *pcVar16;
  bool bVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  ulong *puVar32;
  undefined8 uVar33;
  long unaff_x22;
  undefined8 uVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  undefined8 uVar38;
  
  lVar18 = *(long *)(unaff_x22 + 0x1a0);
  lVar5 = *(long *)(unaff_x22 + 0x148);
  lVar7 = *(long *)(unaff_x22 + 0x150);
  lVar36 = *(long *)(unaff_x22 + 0x140);
  FUN_101bdb808(lVar18,*(undefined1 *)(unaff_x22 + 0x1b0));
  puVar32 = (ulong *)(lVar18 + 0x40);
  uVar29 = -1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
  uVar35 = 0xffffffffffffffff;
  if (-uVar29 < 0x40) {
    uVar35 = ~(-1L << (-uVar29 & 0x3f));
  }
  uVar35 = uVar35 & *puVar32;
  func_0x000107c61438();
  lVar37 = 0;
  lVar20 = lVar37;
  while( true ) {
    for (; uVar35 != 0; uVar35 = uVar35 - 1 & uVar35) {
      lVar30 = *(long *)(unaff_x22 + 0x158);
      uVar14 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      FUN_101bde48c(*(long *)(lVar18 + 0x38) +
                    *(long *)(lVar7 + 0x48) *
                    (LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar37 << 6),lVar30);
      func_0x000107c61428(lVar36 + 0x90,unaff_x22 + 0x110,0x21,0);
      puVar1 = (undefined8 *)(lVar30 + *(int *)(lVar5 + 0x28));
      lVar20 = puVar1[1];
      if (lVar20 == 0) {
        uVar34 = 0;
        lVar20 = -0x2000000000000000;
      }
      else {
        uVar34 = *puVar1;
      }
      puVar2 = (ulong *)(lVar30 + *(int *)(lVar5 + 0x24));
      uVar14 = *puVar2;
      uVar8 = puVar2[1];
      func_0x000107c61434();
      uVar21 = *(ulong *)(lVar36 + 0x90);
      func_0x000107c61558();
      lVar31 = *(long *)(lVar36 + 0x90);
      *(undefined8 *)(lVar36 + 0x90) = 0x8000000000000000;
      uVar22 = uVar14;
      uVar25 = uVar8;
      func_0x000100029284();
      uVar28 = (ulong)~(uint)uVar25 & 1;
      lVar30 = *(long *)(lVar31 + 0x10) + uVar28;
      if (SCARRY8(*(long *)(lVar31 + 0x10),uVar28)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x101bdb4cc);
        (*pcVar16)();
      }
      if (*(long *)(lVar31 + 0x18) < lVar30) {
        func_0x0001001833c8(lVar30,uVar21);
        uVar22 = uVar14;
        uVar21 = uVar8;
        func_0x000100029284();
        if (((uint)uVar25 & 1) != ((uint)uVar21 & 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF_11034edd0)
                    (PTR___sSSN_11034da80);
          return;
        }
      }
      else if ((uVar21 & 1) == 0) {
        func_0x000100184498();
      }
      if ((uVar25 & 1) == 0) {
        lVar30 = lVar31 + (uVar22 >> 6) * 8;
        *(ulong *)(lVar30 + 0x40) = *(ulong *)(lVar30 + 0x40) | 1L << (uVar22 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar31 + 0x30) + uVar22 * 0x10);
        *puVar2 = uVar14;
        puVar2[1] = uVar8;
        puVar1 = (undefined8 *)(*(long *)(lVar31 + 0x38) + uVar22 * 0x10);
        *puVar1 = uVar34;
        puVar1[1] = lVar20;
        if (SCARRY8(*(long *)(lVar31 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x101bdb4d0);
          (*pcVar16)();
        }
        *(long *)(lVar31 + 0x10) = *(long *)(lVar31 + 0x10) + 1;
        func_0x000107c61434(uVar8);
      }
      else {
        puVar1 = (undefined8 *)(*(long *)(lVar31 + 0x38) + uVar22 * 0x10);
        uVar19 = puVar1[1];
        *puVar1 = uVar34;
        puVar1[1] = lVar20;
        func_0x000107c6142c(uVar19);
      }
      uVar34 = *(undefined8 *)(unaff_x22 + 0x158);
      *(long *)(lVar36 + 0x90) = lVar31;
      func_0x000107c614a8(unaff_x22 + 0x110);
      func_0x00010111dddc(uVar34);
      lVar20 = lVar37;
    }
    bVar17 = SCARRY8(lVar37,1);
    lVar37 = lVar37 + 1;
    if (bVar17) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x101bdb4c8);
      (*pcVar16)();
    }
    if ((long)(0x3f - uVar29 >> 6) <= lVar37) break;
    uVar35 = puVar32[lVar37];
  }
  uVar34 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x160);
  lVar5 = *(long *)(unaff_x22 + 0x168);
  bVar13 = *(byte *)(unaff_x22 + 0x1b0);
  func_0x000107c6142c(lVar18);
  FUN_101bde484(lVar18,puVar32,~uVar29,lVar20,0);
  func_0x000107c5eea0(uVar34);
  func_0x000107c5ee68(uVar24);
  pcVar16 = *(code **)(lVar5 + 8);
  (*pcVar16)(uVar34,uVar19);
  uVar34 = 0x800000010f003040;
  uVar19 = 0xd000000000000011;
  if (bVar13 != 6) {
    uVar34 = 0xec00000064656566;
    uVar19 = 0x5f73646e65697266;
  }
  uVar24 = 0xef6369706f745f74;
  uVar3 = 0x6867696c746f7073;
  if (bVar13 != 4) {
    uVar24 = 0xee0073676e697474;
    uVar3 = 0x65735f636973756d;
  }
  if (bVar13 < 6) {
    uVar34 = uVar24;
    uVar19 = uVar3;
  }
  uVar24 = 0x656c69666f7270;
  if (bVar13 != 2) {
    uVar24 = 0x70616d;
  }
  uVar3 = 0xe700000000000000;
  if (bVar13 != 2) {
    uVar3 = 0xe300000000000000;
  }
  uVar6 = 0x6e776f6e6b6e75;
  if (bVar13 != 0) {
    uVar6 = 0x68747561;
  }
  uVar4 = 0xe700000000000000;
  if (bVar13 != 0) {
    uVar4 = 0xe400000000000000;
  }
  if (bVar13 < 2) {
    uVar3 = uVar4;
    uVar24 = uVar6;
  }
  if (bVar13 < 4) {
    uVar34 = uVar3;
    uVar19 = uVar24;
  }
  uVar24 = uVar34;
  FUN_101c25950(uVar19,uVar34,6);
  func_0x000107c6142c(uVar34);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar15 = uRam0000000112e08430;
  uVar33 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar34 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar26 = uVar19;
  func_0x000107c5fadc(uVar19,uVar24);
  uVar38 = 0x796669746f7073;
  uVar23 = uVar38;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar15,uVar26,uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar26);
  func_0x000107c5fadc(uVar19,uVar24);
  func_0x000107c6142c(uVar24);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar24 = 0;
  uVar26 = 0;
  FUN_101c25b6c(0,0);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar26);
  func_0x000105728688(uVar15,uVar19,uVar38,uVar24,1);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar19);
  func_0x000107c6142c(uVar33);
  func_0x00010006c090(uVar34,uVar9);
  (*pcVar16)(uVar11,uVar12);
  func_0x000107c6142c(uVar27);
  func_0x00010006c090(uVar3,uVar10);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101bdb494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar18);
  return;
}



/* Entry: 101bdb4e8; end: 101bdb807;  */

void FUN_101bdb4e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x160);
  lVar4 = *(long *)(unaff_x22 + 0x168);
  bVar5 = *(byte *)(unaff_x22 + 0x1b0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x138);
  func_0x0001000834e4(unaff_x22 + 0xc0);
  func_0x000107c6142c(uVar14);
  func_0x00010006c090(uVar1,uVar2);
  func_0x000107c614b0(uVar11);
  func_0x000107c5eea0(uVar6);
  func_0x000107c5ee68(uVar3);
  pcVar10 = *(code **)(lVar4 + 8);
  (*pcVar10)(uVar6,uVar8);
  uVar1 = 0x800000010f003040;
  uVar6 = 0xd000000000000011;
  if (bVar5 != 6) {
    uVar1 = 0xec00000064656566;
    uVar6 = 0x5f73646e65697266;
  }
  uVar8 = 0xef6369706f745f74;
  uVar2 = 0x6867696c746f7073;
  if (bVar5 != 4) {
    uVar8 = 0xee0073676e697474;
    uVar2 = 0x65735f636973756d;
  }
  if (bVar5 < 6) {
    uVar1 = uVar8;
    uVar6 = uVar2;
  }
  uVar8 = 0x656c69666f7270;
  if (bVar5 != 2) {
    uVar8 = 0x70616d;
  }
  uVar2 = 0xe700000000000000;
  if (bVar5 != 2) {
    uVar2 = 0xe300000000000000;
  }
  uVar3 = 0x6e776f6e6b6e75;
  if (bVar5 != 0) {
    uVar3 = 0x68747561;
  }
  uVar11 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar11 = 0xe400000000000000;
  }
  if (bVar5 < 2) {
    uVar2 = uVar11;
    uVar8 = uVar3;
  }
  if (bVar5 < 4) {
    uVar1 = uVar2;
    uVar6 = uVar8;
  }
  uVar8 = uVar1;
  FUN_101c25950(uVar6,uVar1,6);
  func_0x000107c6142c(uVar1);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar14 = uRam0000000112e08430;
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar9 = uVar6;
  func_0x000107c5fadc(uVar6,uVar8);
  uVar12 = 0x796669746f7073;
  uVar7 = uVar12;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar14,uVar9,uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c5fadc(uVar6,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar8 = 0;
  uVar9 = 1;
  FUN_101c25b6c(0,1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar9);
  func_0x000105728688(uVar14,uVar6,uVar12,uVar8,1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c614ac(uVar13);
  func_0x000107c61654();
  (*pcVar10)(uVar3,uVar11);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bdb7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bdb808; end: 101bdbc7f;  */

undefined * FUN_101bdb808(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x21;
  ulong *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined1 auStack_390 [8];
  undefined1 *puStack_388;
  long lStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  long lStack_360;
  undefined4 uStack_354;
  long lStack_350;
  undefined1 auStack_340 [152];
  undefined1 auStack_2a8 [16];
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
  
  lVar6 = 0x112d5ed18;
  uStack_354 = param_2;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_390 + -extraout_x8;
  lVar6 = 0;
  func_0x000103a814dc();
  lStack_350 = *(long *)(lVar6 + -8);
  lStack_360 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_350 + 0x40));
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lStack_378 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puStack_368 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar14 = (ulong *)(param_1 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar15 = uVar15 & *puVar14;
  func_0x000107c61434(param_1);
  lVar6 = 0;
  puStack_388 = puVar7;
  lStack_380 = param_1;
  while( true ) {
    while (uVar15 != 0) {
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 - 1 & uVar15;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar6 << 6;
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar8 * 0x10);
      uVar1 = *puVar9;
      uVar2 = puVar9[1];
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar8 * 0x88);
      uStack_e8 = puVar9[1];
      uStack_f0 = *puVar9;
      uStack_b8 = puVar9[7];
      uStack_c0 = puVar9[6];
      uStack_a8 = puVar9[9];
      uStack_b0 = puVar9[8];
      uStack_d8 = puVar9[3];
      uStack_e0 = puVar9[2];
      uStack_c8 = puVar9[5];
      uStack_d0 = puVar9[4];
      uStack_88 = puVar9[0xd];
      uStack_90 = puVar9[0xc];
      uStack_78 = puVar9[0xf];
      uStack_80 = puVar9[0xe];
      uStack_70 = puVar9[0x10];
      uStack_98 = puVar9[0xb];
      uStack_a0 = puVar9[10];
      uStack_1a8 = puVar9[0xd];
      uStack_1b0 = puVar9[0xc];
      uStack_198 = puVar9[0xf];
      uStack_1a0 = puVar9[0xe];
      uStack_190 = puVar9[0x10];
      uStack_1e8 = puVar9[5];
      uStack_1f0 = puVar9[4];
      uStack_1d8 = puVar9[7];
      uStack_1e0 = puVar9[6];
      uStack_1c8 = puVar9[9];
      uStack_1d0 = puVar9[8];
      uStack_1b8 = puVar9[0xb];
      uStack_1c0 = puVar9[10];
      uStack_208 = puVar9[1];
      uStack_210 = *puVar9;
      uStack_1f8 = puVar9[3];
      uStack_200 = puVar9[2];
      uStack_188 = uVar1;
      uStack_180 = uVar2;
      uStack_178 = uStack_210;
      uStack_170 = uStack_208;
      uStack_168 = uStack_200;
      uStack_160 = uStack_1f8;
      uStack_158 = uStack_1f0;
      uStack_150 = uStack_1e8;
      uStack_148 = uStack_1e0;
      uStack_140 = uStack_1d8;
      uStack_138 = uStack_1d0;
      uStack_130 = uStack_1c8;
      uStack_128 = uStack_1c0;
      uStack_120 = uStack_1b8;
      uStack_118 = uStack_1b0;
      uStack_110 = uStack_1a8;
      uStack_108 = uStack_1a0;
      uStack_100 = uStack_198;
      uStack_f8 = uStack_190;
      func_0x000107c61434(uVar2);
      FUN_101be283c(&uStack_f0,auStack_2a8);
      FUN_101bd9524(puVar7,&uStack_f0,uStack_354);
      if (unaff_x21 == 0) {
        uStack_370 = uVar1;
        (**(code **)(lStack_350 + 0x38))(puVar7,0,1,lStack_360);
        func_0x00010111dd50(puVar7,lStack_378);
        puVar16 = puStack_368;
        uStack_270 = uStack_c8;
        uStack_278 = uStack_d0;
        uStack_260 = uStack_b8;
        uStack_268 = uStack_c0;
        uStack_218 = uStack_70;
        uStack_230 = uStack_88;
        uStack_238 = uStack_90;
        uStack_220 = uStack_78;
        uStack_228 = uStack_80;
        uStack_250 = uStack_a8;
        uStack_258 = uStack_b0;
        uStack_240 = uStack_98;
        uStack_248 = uStack_a0;
        uStack_290 = uStack_e8;
        uStack_298 = uStack_f0;
        uStack_280 = uStack_d8;
        uStack_288 = uStack_e0;
        uVar8 = *(ulong *)(puStack_368 + 0x10);
        if (uVar8 < *(ulong *)(puStack_368 + 0x18)) {
          func_0x000101be28b8(&uStack_188,auStack_340,0x112e085d8,&UNK_10d9dcfb8);
        }
        else {
          func_0x000101be28b8(&uStack_188,auStack_340,0x112e085d8,&UNK_10d9dcfb8);
          FUN_101bddf40(uVar8 + 1,1);
          puVar16 = puVar3;
        }
        func_0x000107c6068c(auStack_340,*(undefined8 *)(puVar16 + 0x28));
        puVar7 = auStack_340;
        func_0x000107c5fb58(puVar7,uStack_370,uVar2);
        func_0x000107c606a8();
        param_1 = lStack_380;
        uVar13 = -1L << ((ulong)(byte)puVar16[0x20] & 0x3f);
        uVar12 = (ulong)puVar7 & (uVar13 ^ 0xffffffffffffffff);
        uVar11 = uVar12 >> 6;
        uVar8 = -1L << (uVar12 & 0x3f) &
                (*(ulong *)(puVar16 + uVar11 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar8 == 0) {
          bVar5 = false;
          uVar8 = 0x3f - uVar13 >> 6;
          do {
            uVar12 = uVar11 + 1;
            if ((uVar12 == uVar8) && (bVar5)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101bdbc80);
              (*pcVar4)();
            }
            uVar11 = 0;
            if (uVar12 != uVar8) {
              uVar11 = uVar12;
            }
            bVar5 = (bool)(uVar12 == uVar8 | bVar5);
          } while (*(ulong *)(puVar16 + uVar11 * 8 + 0x40) == 0xffffffffffffffff);
          uVar8 = ~*(ulong *)(puVar16 + uVar11 * 8 + 0x40);
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar11 << 6;
        }
        else {
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar12 & 0x7fffffffffffffc0;
        }
        uVar11 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar16 + uVar11 + 0x40) =
             1L << (uVar8 & 0x3f) | *(ulong *)(puVar16 + uVar11 + 0x40);
        puVar9 = (undefined8 *)(*(long *)(puVar16 + 0x30) + uVar8 * 0x10);
        *puVar9 = uStack_370;
        puVar9[1] = uVar2;
        func_0x00010111dd50(lStack_378,
                            *(long *)(puVar16 + 0x38) + *(long *)(lStack_350 + 0x48) * uVar8);
        *(long *)(puVar16 + 0x10) = *(long *)(puVar16 + 0x10) + 1;
        puStack_368 = puVar16;
        FUN_101bde450(&uStack_298);
        func_0x000101be2878(&uStack_188,0x112e085d8,&UNK_10d9dcfb8);
        puVar7 = puStack_388;
      }
      else {
        func_0x000107c614ac(unaff_x21);
        (**(code **)(lStack_350 + 0x38))(puVar7,1,1,lStack_360);
        func_0x000101be2878(puVar7,0x112d5ed18,&UNK_10d925c50);
        func_0x000101be2878(&uStack_188,0x112e085d8,&UNK_10d9dcfb8);
        unaff_x21 = 0;
      }
    }
    bVar5 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101bdbc7c);
      (*pcVar4)();
    }
    if ((long)(uVar10 + 0x3f >> 6) <= lVar6) break;
    uVar15 = puVar14[lVar6];
  }
  func_0x000107c61574(param_1);
  return puStack_368;
}



/* Entry: 101bdbc80; end: 101bdbce3;  */

void FUN_101bdbc80(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101be2dc4;
                    /* WARNING: Could not recover jumptable at 0x000101bdbce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bde4d0(param_1);
  return;
}



/* Entry: 101bdbce4; end: 101bdbd47;  */

void FUN_101bdbce4(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101be2da0;
                    /* WARNING: Could not recover jumptable at 0x000101bdbd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bded28(param_1);
  return;
}



/* Entry: 101bdbd48; end: 101bdbdc3;  */

void FUN_101bdbd48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x170;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101be2dc8;
                    /* WARNING: Could not recover jumptable at 0x000101bdbdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bdf52c(param_1,param_2,param_3);
  return;
}



/* Entry: 101bdbdc4; end: 101bdbe57;  */

void FUN_101bdbdc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x210;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101be2d9c;
                    /* WARNING: Could not recover jumptable at 0x000101bdbe54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101be0450(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 101bdbe58; end: 101bdbec7;  */

void FUN_101bdbe58(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x138) = param_2;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xe8) = unaff_x20;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0xf0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xf8) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x100) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x108) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bdbec8);
  return;
}



/* Entry: 101bdbec8; end: 101bdbf9f;  */

void FUN_101bdbec8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  long unaff_x22;
  
  func_0x000107c5eea0(*(undefined8 *)(unaff_x22 + 0x108));
  func_0x000100083b20(unaff_x22 + 0xd8);
  plVar5 = *(long **)(unaff_x22 + 0xd8);
  *(long **)(unaff_x22 + 0x110) = plVar5;
  func_0x000100083b20(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  lVar3 = *(long *)(unaff_x22 + 0xd0);
  func_0x0001000a8868(unaff_x22 + 0xb0,uVar2);
  (**(code **)(lVar3 + 8))(unaff_x22 + 0x10,uVar2,lVar3);
  piVar4 = *(int **)(*plVar5 + 0xb0);
  iVar1 = *piVar4;
  plVar5 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x118) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101bdbfa0;
                    /* WARNING: Could not recover jumptable at 0x000101bdbf9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (plVar5,unaff_x22 + 0x70,1,1,0,0xc000000000000000,unaff_x22 + 0x10);
  return;
}



/* Entry: 101bdbfa0; end: 101bdc097;  */

void FUN_101bdbfa0(void)

{
  undefined1 uVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar7 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(long *)(lVar7 + 0x120) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar7 + 0x118));
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(lVar7 + 0x110);
    func_0x000101be2878(lVar7 + 0x10,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar4);
    func_0x0001000834e4(lVar7 + 0xb0);
    lVar5 = *(long *)(lVar7 + 0x90);
    plVar2 = (long *)0xa0;
    uVar1 = *(undefined1 *)(lVar7 + 0x98);
    func_0x000107c615b8();
    *(long **)(lVar7 + 0x128) = plVar2;
    *plVar2 = lVar6;
    plVar2[1] = (long)FUN_101bdc098;
    lVar6 = *(long *)(lVar7 + 0xe8);
    *(undefined1 *)((long)plVar2 + 0x9d) = *(undefined1 *)(lVar7 + 0x138);
    *(undefined1 *)((long)plVar2 + 0x9c) = uVar1;
    plVar2[0xf] = lVar5;
    plVar2[0x10] = lVar6;
    pcVar3 = FUN_101bdd590;
  }
  else {
    uVar4 = *(undefined8 *)(lVar7 + 0x110);
    lVar6 = *(long *)(lVar7 + 0xe8);
    func_0x000101be2878(lVar7 + 0x10,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar4);
    pcVar3 = FUN_101bdc574;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,lVar6,0);
  return;
}



/* Entry: 101bdc098; end: 101bdc0f3;  */

void FUN_101bdc098(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x130) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x128));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bdc0f4;
  }
  else {
    pcVar1 = FUN_101bdc87c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0xe8),0);
  return;
}



/* Entry: 101bdc0f4; end: 101bdc573;  */

void FUN_101bdc0f4(double param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  
  if (*(char *)(unaff_x22 + 0x78) == '\x01') {
    lVar11 = *(long *)(unaff_x22 + 0x70);
    if (1 < lVar11) {
      if (lVar11 == 2) {
        puVar14 = *(undefined8 **)(unaff_x22 + 0xe0);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
        *puVar14 = uVar9;
        lVar11 = 0;
        func_0x000103a82768();
        uVar13 = 1;
      }
      else {
        param_1 = (double)NEON_ucvtf(*(undefined8 *)(unaff_x22 + 0x88));
        param_1 = param_1 / 1000.0;
        uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
        lVar11 = *(long *)(unaff_x22 + 0xf8);
        puVar14 = *(undefined8 **)(unaff_x22 + 0xe0);
        bVar1 = param_1 <= 0.0;
        if (bVar1) {
          lVar6 = 0x112e08440;
          func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
          iVar5 = *(int *)(lVar6 + 0x30);
          pcVar12 = *(code **)(lVar11 + 0x38);
        }
        else {
          func_0x000107c5ee88(puVar14);
          lVar6 = 0x112e08440;
          func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
          iVar5 = *(int *)(lVar6 + 0x30);
          pcVar12 = *(code **)(lVar11 + 0x38);
        }
        (*pcVar12)(puVar14,bVar1,1,uVar13);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
        *(undefined8 *)((long)puVar14 + (long)iVar5) = uVar9;
        lVar11 = 0;
        func_0x000103a82768();
        uVar13 = 0;
      }
      func_0x000107c6159c(puVar14,lVar11,uVar13);
      (**(code **)(*(long *)(lVar11 + -8) + 0x38))(puVar14,0,1,lVar11);
      func_0x000107c61434(uVar9);
      goto LAB_101bdc2b4;
    }
    if (lVar11 == 0) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0xe0);
      goto LAB_101bdc150;
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0xe0);
    lVar11 = 0;
    func_0x000103a82768();
    func_0x000107c6159c(uVar13,lVar11,2);
    pcVar12 = *(code **)(*(long *)(lVar11 + -8) + 0x38);
    uVar9 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x22 + 0xe0);
    FUN_101bde27c(3,*(undefined1 *)(unaff_x22 + 0x138));
LAB_101bdc150:
    lVar11 = 0;
    func_0x000103a82768();
    pcVar12 = *(code **)(*(long *)(lVar11 + -8) + 0x38);
    uVar9 = 1;
  }
  (*pcVar12)(uVar13,uVar9,1,lVar11);
LAB_101bdc2b4:
  uVar13 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar11 = *(long *)(unaff_x22 + 0xf8);
  bVar4 = *(byte *)(unaff_x22 + 0x138);
  func_0x000107c5eea0(uVar13);
  func_0x000107c5ee68(uVar8);
  pcVar12 = *(code **)(lVar11 + 8);
  (*pcVar12)(uVar13,uVar9);
  uVar13 = 0x800000010f003040;
  uVar9 = 0xd000000000000011;
  if (bVar4 != 6) {
    uVar13 = 0xec00000064656566;
    uVar9 = 0x5f73646e65697266;
  }
  uVar8 = 0xef6369706f745f74;
  uVar2 = 0x6867696c746f7073;
  if (bVar4 != 4) {
    uVar8 = 0xee0073676e697474;
    uVar2 = 0x65735f636973756d;
  }
  if (bVar4 < 6) {
    uVar13 = uVar8;
    uVar9 = uVar2;
  }
  uVar8 = 0x656c69666f7270;
  if (bVar4 != 2) {
    uVar8 = 0x70616d;
  }
  uVar2 = 0xe700000000000000;
  if (bVar4 != 2) {
    uVar2 = 0xe300000000000000;
  }
  uVar3 = 0x6e776f6e6b6e75;
  if (bVar4 != 0) {
    uVar3 = 0x68747561;
  }
  uVar10 = 0xe700000000000000;
  if (bVar4 != 0) {
    uVar10 = 0xe400000000000000;
  }
  if (bVar4 < 2) {
    uVar2 = uVar10;
    uVar8 = uVar3;
  }
  if (bVar4 < 4) {
    uVar13 = uVar2;
    uVar9 = uVar8;
  }
  uVar8 = uVar13;
  FUN_101c25950(uVar9,uVar13,7);
  func_0x000107c6142c(uVar13);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar3 = uRam0000000112e08430;
  uVar13 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar10 = uVar9;
  func_0x000107c5fadc(uVar9,uVar8);
  uVar16 = 0x796669746f7073;
  uVar7 = uVar16;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar3,uVar10,uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c5fadc(uVar9,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar8 = 0;
  uVar10 = 0;
  FUN_101c25b6c(0,0);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar10);
  func_0x000105728688(uVar3,uVar9,uVar16,uVar8,1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar9);
  FUN_101be1178(unaff_x22 + 0x70);
  (*pcVar12)(uVar2,uVar15);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000101bdc558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bdc574; end: 101bdc87b;  */

void FUN_101bdc574(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x00010006c090(0,0xc000000000000000);
  func_0x0001000834e4(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar4 = *(long *)(unaff_x22 + 0xf8);
  bVar5 = *(byte *)(unaff_x22 + 0x138);
  func_0x000107c614b0(uVar11);
  func_0x000107c5eea0(uVar3);
  func_0x000107c5ee68(uVar8);
  pcVar10 = *(code **)(lVar4 + 8);
  (*pcVar10)(uVar3,uVar6);
  uVar3 = 0x800000010f003040;
  uVar6 = 0xd000000000000011;
  if (bVar5 != 6) {
    uVar3 = 0xec00000064656566;
    uVar6 = 0x5f73646e65697266;
  }
  uVar8 = 0xef6369706f745f74;
  uVar1 = 0x6867696c746f7073;
  if (bVar5 != 4) {
    uVar8 = 0xee0073676e697474;
    uVar1 = 0x65735f636973756d;
  }
  if (bVar5 < 6) {
    uVar3 = uVar8;
    uVar6 = uVar1;
  }
  uVar8 = 0x656c69666f7270;
  if (bVar5 != 2) {
    uVar8 = 0x70616d;
  }
  uVar1 = 0xe700000000000000;
  if (bVar5 != 2) {
    uVar1 = 0xe300000000000000;
  }
  uVar2 = 0x6e776f6e6b6e75;
  if (bVar5 != 0) {
    uVar2 = 0x68747561;
  }
  uVar9 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar9 = 0xe400000000000000;
  }
  if (bVar5 < 2) {
    uVar1 = uVar9;
    uVar8 = uVar2;
  }
  if (bVar5 < 4) {
    uVar3 = uVar1;
    uVar6 = uVar8;
  }
  uVar8 = uVar3;
  FUN_101c25950(uVar6,uVar3,7);
  func_0x000107c6142c(uVar3);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar2 = uRam0000000112e08430;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar9 = uVar6;
  func_0x000107c5fadc(uVar6,uVar8);
  uVar13 = 0x796669746f7073;
  uVar7 = uVar13;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar2,uVar9,uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c5fadc(uVar6,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar8 = 0;
  uVar9 = 1;
  FUN_101c25b6c(0,1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar9);
  func_0x000105728688(uVar2,uVar6,uVar13,uVar8,1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c614ac(uVar11);
  func_0x000107c61654();
  (*pcVar10)(uVar1,uVar12);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101bdc860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bdc87c; end: 101bdcb83;  */

void FUN_101bdc87c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_101be1178(unaff_x22 + 0x70);
  func_0x00010006c090(0,0xc000000000000000);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar4 = *(long *)(unaff_x22 + 0xf8);
  bVar5 = *(byte *)(unaff_x22 + 0x138);
  func_0x000107c614b0(uVar11);
  func_0x000107c5eea0(uVar3);
  func_0x000107c5ee68(uVar8);
  pcVar10 = *(code **)(lVar4 + 8);
  (*pcVar10)(uVar3,uVar6);
  uVar3 = 0x800000010f003040;
  uVar6 = 0xd000000000000011;
  if (bVar5 != 6) {
    uVar3 = 0xec00000064656566;
    uVar6 = 0x5f73646e65697266;
  }
  uVar8 = 0xef6369706f745f74;
  uVar1 = 0x6867696c746f7073;
  if (bVar5 != 4) {
    uVar8 = 0xee0073676e697474;
    uVar1 = 0x65735f636973756d;
  }
  if (bVar5 < 6) {
    uVar3 = uVar8;
    uVar6 = uVar1;
  }
  uVar8 = 0x656c69666f7270;
  if (bVar5 != 2) {
    uVar8 = 0x70616d;
  }
  uVar1 = 0xe700000000000000;
  if (bVar5 != 2) {
    uVar1 = 0xe300000000000000;
  }
  uVar2 = 0x6e776f6e6b6e75;
  if (bVar5 != 0) {
    uVar2 = 0x68747561;
  }
  uVar9 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar9 = 0xe400000000000000;
  }
  if (bVar5 < 2) {
    uVar1 = uVar9;
    uVar8 = uVar2;
  }
  if (bVar5 < 4) {
    uVar3 = uVar1;
    uVar6 = uVar8;
  }
  uVar8 = uVar3;
  FUN_101c25950(uVar6,uVar3,7);
  func_0x000107c6142c(uVar3);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar2 = uRam0000000112e08430;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar9 = uVar6;
  func_0x000107c5fadc(uVar6,uVar8);
  uVar13 = 0x796669746f7073;
  uVar7 = uVar13;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar2,uVar9,uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c5fadc(uVar6,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar8 = 0;
  uVar9 = 1;
  FUN_101c25b6c(0,1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar9);
  func_0x000105728688(uVar2,uVar6,uVar13,uVar8,1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c614ac(uVar11);
  func_0x000107c61654();
  (*pcVar10)(uVar1,uVar12);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101bdcb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bdcb84; end: 101bdcbf3;  */

void FUN_101bdcb84(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x1e0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101be2da8;
                    /* WARNING: Could not recover jumptable at 0x000101bdcbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101be11ac(param_1,param_2);
  return;
}



/* Entry: 101bdcbf4; end: 101bdcc57;  */

void FUN_101bdcbf4(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101be2da4;
                    /* WARNING: Could not recover jumptable at 0x000101bdcc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101be1d08(param_1);
  return;
}



/* Entry: 101bdcc58; end: 101bdcccb;  */

void FUN_101bdcc58(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xe8) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x128) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_1;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0xf0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xf8) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x100) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x108) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bdcccc);
  return;
}



/* Entry: 101bdcccc; end: 101bdce7b;  */

void FUN_101bdcccc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  long *plVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  func_0x000100083b20(unaff_x22 + 200);
  puVar6 = *(undefined1 **)(unaff_x22 + 200);
  puVar4 = puVar6;
  func_0x000107c413e4();
  func_0x000107c615e8();
  if ((int)puVar4 != 0) {
    FUN_101be2544();
    func_0x000107c613f8(&UNK_1104540c0,puVar6,0,0);
    *puVar6 = 0;
    func_0x000107c61654();
    uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x108));
    func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bdcd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c5eea0(*(undefined8 *)(unaff_x22 + 0x108));
  FUN_101be250c(0,0,0,0);
  func_0x000107c61434(0xe000000000000000);
  func_0x00010006c00c(0,0xc000000000000000);
  func_0x000107c61434(uVar2);
  func_0x000107c6142c(0xe000000000000000);
  FUN_101be250c(0,0xe000000000000000,0,0xc000000000000000);
  func_0x000100083b20(unaff_x22 + 0xd0);
  plVar7 = *(long **)(unaff_x22 + 0xd0);
  *(long **)(unaff_x22 + 0x110) = plVar7;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x88) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x80) = 0;
  *(undefined8 *)(unaff_x22 + 0x98) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  func_0x000100083b20(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar3 = *(long *)(unaff_x22 + 0xc0);
  func_0x0001000a8868(unaff_x22 + 0xa0,uVar2);
  (**(code **)(lVar3 + 8))(unaff_x22 + 0x10,uVar2,lVar3);
  piVar5 = *(int **)(*plVar7 + 0x80);
  iVar1 = *piVar5;
  plVar7 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x118) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101bdce7c;
                    /* WARNING: Could not recover jumptable at 0x000101bdce78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(plVar7,unaff_x22 + 0x70,unaff_x22 + 0x10);
  return;
}



/* Entry: 101bdce7c; end: 101bdcf57;  */

void FUN_101bdce7c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x120) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x118));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar4 + 0x110);
    uVar2 = *(undefined8 *)(lVar4 + 0xe8);
    func_0x00010006c090(param_1,param_2);
    func_0x000101be2878(lVar4 + 0x10,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar3);
    func_0x0001000834e4(lVar4 + 0xa0);
    pcVar1 = FUN_101bdcf58;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x110);
    uVar2 = *(undefined8 *)(lVar4 + 0xe8);
    func_0x000101be2878(lVar4 + 0x10,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar3);
    pcVar1 = FUN_101bdd254;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,0);
  return;
}



/* Entry: 101bdcf58; end: 101bdd253;  */

void FUN_101bdcf58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar4 = *(long *)(unaff_x22 + 0xf8);
  bVar6 = *(byte *)(unaff_x22 + 0x128);
  func_0x000107c5eea0(uVar3);
  func_0x000107c5ee68(uVar10);
  pcVar12 = *(code **)(lVar4 + 8);
  (*pcVar12)(uVar3,uVar8);
  uVar3 = 0x800000010f003040;
  uVar8 = 0xd000000000000011;
  if (bVar6 != 6) {
    uVar3 = 0xec00000064656566;
    uVar8 = 0x5f73646e65697266;
  }
  uVar10 = 0xef6369706f745f74;
  uVar1 = 0x6867696c746f7073;
  if (bVar6 != 4) {
    uVar10 = 0xee0073676e697474;
    uVar1 = 0x65735f636973756d;
  }
  if (bVar6 < 6) {
    uVar3 = uVar10;
    uVar8 = uVar1;
  }
  uVar10 = 0x656c69666f7270;
  if (bVar6 != 2) {
    uVar10 = 0x70616d;
  }
  uVar1 = 0xe700000000000000;
  if (bVar6 != 2) {
    uVar1 = 0xe300000000000000;
  }
  uVar5 = 0x6e776f6e6b6e75;
  if (bVar6 != 0) {
    uVar5 = 0x68747561;
  }
  uVar2 = 0xe700000000000000;
  if (bVar6 != 0) {
    uVar2 = 0xe400000000000000;
  }
  if (bVar6 < 2) {
    uVar1 = uVar2;
    uVar10 = uVar5;
  }
  if (bVar6 < 4) {
    uVar3 = uVar1;
    uVar8 = uVar10;
  }
  uVar10 = uVar3;
  FUN_101c25950(uVar8,uVar3,0);
  func_0x000107c6142c(uVar3);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar7 = uRam0000000112e08430;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar11 = uVar8;
  func_0x000107c5fadc(uVar8,uVar10);
  uVar13 = 0x796669746f7073;
  uVar9 = uVar13;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar7,uVar11,uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c5fadc(uVar8,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar10 = 0;
  uVar11 = 0;
  FUN_101c25b6c(0,0);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar11);
  func_0x000105728688(uVar7,uVar8,uVar13,uVar10,1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  (*pcVar12)(uVar5,uVar14);
  FUN_101be250c(uVar1,uVar2,0,0xc000000000000000);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101bdd238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bdd254; end: 101bdd56f;  */

void FUN_101bdd254(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar2 = *(long *)(unaff_x22 + 0xf8);
  bVar3 = *(byte *)(unaff_x22 + 0x128);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x0001000834e4(unaff_x22 + 0xa0);
  FUN_101be250c(uVar6,uVar5,0,0xc000000000000000);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000107c614b0(uVar10);
  func_0x000107c5eea0(uVar1);
  func_0x000107c5ee68(uVar7);
  pcVar8 = *(code **)(lVar2 + 8);
  (*pcVar8)(uVar1,uVar4);
  uVar1 = 0x800000010f003040;
  uVar4 = 0xd000000000000011;
  if (bVar3 != 6) {
    uVar1 = 0xec00000064656566;
    uVar4 = 0x5f73646e65697266;
  }
  uVar6 = 0xef6369706f745f74;
  uVar7 = 0x6867696c746f7073;
  if (bVar3 != 4) {
    uVar6 = 0xee0073676e697474;
    uVar7 = 0x65735f636973756d;
  }
  if (bVar3 < 6) {
    uVar1 = uVar6;
    uVar4 = uVar7;
  }
  uVar6 = 0x656c69666f7270;
  if (bVar3 != 2) {
    uVar6 = 0x70616d;
  }
  uVar7 = 0xe700000000000000;
  if (bVar3 != 2) {
    uVar7 = 0xe300000000000000;
  }
  uVar5 = 0x6e776f6e6b6e75;
  if (bVar3 != 0) {
    uVar5 = 0x68747561;
  }
  uVar10 = 0xe700000000000000;
  if (bVar3 != 0) {
    uVar10 = 0xe400000000000000;
  }
  if (bVar3 < 2) {
    uVar7 = uVar10;
    uVar6 = uVar5;
  }
  if (bVar3 < 4) {
    uVar1 = uVar7;
    uVar4 = uVar6;
  }
  uVar6 = uVar1;
  FUN_101c25950(uVar4,uVar1,0);
  func_0x000107c6142c(uVar1);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar1 = uRam0000000112e08430;
  uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar7 = uVar4;
  func_0x000107c5fadc(uVar4,uVar6);
  uVar10 = 0x796669746f7073;
  uVar5 = uVar10;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar1,uVar7,uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c5fadc(uVar4,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar6 = 0;
  uVar7 = 1;
  FUN_101c25b6c(0,1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar7);
  func_0x000105728688(uVar1,uVar4,uVar10,uVar6,1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c614ac(uVar12);
  func_0x000107c61654();
  (*pcVar8)(uVar11,uVar9);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x108));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bdd554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bdd570; end: 101bdd58f;  */

void FUN_101bdd570(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x9d) = param_3;
  *(undefined1 *)(unaff_x22 + 0x9c) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bdd590);
  return;
}



/* Entry: 101bdd590; end: 101bdd80f;  */

void FUN_101bdd590(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  code *UNRECOVERED_JUMPTABLE_00;
  
  func_0x000100083b20(unaff_x22 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = uVar9;
  func_0x000107c413ec();
  func_0x000107c615e8(uVar9);
  iVar7 = (int)uVar8;
  if (iVar7 == 0) {
    cVar1 = *(char *)(unaff_x22 + 0x9c);
    if (cVar1 != '\x01') {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
      puVar2 = (undefined8 *)0xb;
      FUN_101bde27c(0xb,*(undefined1 *)(unaff_x22 + 0x9d));
      func_0x000101be2940();
      func_0x000107c613f8(&UNK_110454138,puVar2,0,0);
      *puVar2 = uVar8;
      *(char *)(puVar2 + 1) = cVar1;
      goto LAB_101bdd768;
    }
    lVar5 = *(long *)(unaff_x22 + 0x78);
    if (1 < lVar5) {
      if (lVar5 != 2) goto LAB_101bdd78c;
      goto LAB_101bdd734;
    }
    if (lVar5 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_101bdd774;
    }
  }
  else {
    func_0x000100083b20(unaff_x22 + 0x68);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar8 = uVar9;
    func_0x000107c413f0();
    func_0x000107c615e8(uVar9);
    if ((int)uVar8 == 0) {
      func_0x000100083b20(unaff_x22 + 0x70);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
      func_0x000107c413e0(uVar8);
      func_0x000107c615e8(uVar8);
    }
    if (iVar7 != 1) {
      if (iVar7 != 2) {
        if (iVar7 != 3) {
          *(int *)(unaff_x22 + 0x98) = iVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)
                    (&UNK_1106c5b78,(int *)(unaff_x22 + 0x98),&UNK_1106c5b78,
                     PTR___ss5Int32VN_11034ee20);
          return;
        }
LAB_101bdd78c:
        FUN_101bde27c(9,*(undefined1 *)(unaff_x22 + 0x9d));
        func_0x000100083b20(unaff_x22 + 0x10);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
        lVar5 = *(long *)(unaff_x22 + 0x30);
        func_0x0001000a8868(unaff_x22 + 0x10,uVar8);
        piVar6 = *(int **)(lVar5 + 8);
        plVar4 = (long *)(ulong)(uint)piVar6[1];
        UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar6 + (long)piVar6);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x90) = plVar4;
        UNRECOVERED_JUMPTABLE = FUN_101bdd8bc;
        goto LAB_101bdd7e0;
      }
LAB_101bdd734:
      puVar3 = (undefined1 *)0x5;
      FUN_101bde27c(5,*(undefined1 *)(unaff_x22 + 0x9d));
      FUN_101be27fc();
      func_0x000107c613f8(&UNK_1106c6770,puVar3,0,0);
      *puVar3 = 2;
LAB_101bdd768:
      func_0x000107c61654();
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101bdd774:
                    /* WARNING: Could not recover jumptable at 0x000101bdd788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  FUN_101bde27c(7,*(undefined1 *)(unaff_x22 + 0x9d));
  func_0x000100083b20(unaff_x22 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar8);
  piVar6 = *(int **)(lVar5 + 8);
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar6 + (long)piVar6);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar4;
  UNRECOVERED_JUMPTABLE = FUN_101bdd810;
LAB_101bdd7e0:
  *plVar4 = unaff_x22;
  plVar4[1] = (long)UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x000101bdd80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(1,uVar8,lVar5);
  return;
}



/* Entry: 101bdd810; end: 101bdd857;  */

void FUN_101bdd810(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x80);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bdd858,uVar1,0);
  return;
}



/* Entry: 101bdd858; end: 101bdd8bb;  */

void FUN_101bdd858(void)

{
  undefined1 *puVar1;
  long unaff_x22;
  
  puVar1 = (undefined1 *)(unaff_x22 + 0x38);
  func_0x0001000834e4();
  FUN_101be27fc();
  func_0x000107c613f8(&UNK_1106c6770,puVar1,0,0);
  *puVar1 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101bdd8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bdd8bc; end: 101bdd907;  */

void FUN_101bdd8bc(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x80);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bdd908,uVar1,0);
  return;
}



/* Entry: 101bdd908; end: 101bdd96f;  */

void FUN_101bdd908(void)

{
  undefined1 *puVar1;
  long unaff_x22;
  
  puVar1 = (undefined1 *)(unaff_x22 + 0x10);
  func_0x0001000834e4();
  FUN_101be27fc();
  func_0x000107c613f8(&UNK_1106c6770,puVar1,0,0);
  *puVar1 = 1;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101bdd96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bdd970; end: 101bdd9b3;  */

void FUN_101bdd970(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 101bdd9b4; end: 101bdd9bf;  */

void FUN_101bdd9b4(void)

{
  return;
}



/* Entry: 101bdd9c0; end: 101bdda23;  */

void FUN_101bdd9c0(long param_1,undefined1 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *unaff_x20;
  plVar4 = (long *)0x480;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101be2dac;
  plVar4[0x82] = lVar5;
  *(undefined1 *)(plVar4 + 0x8f) = param_2;
  plVar4[0x81] = param_1;
  lVar1 = 0;
  func_0x000103a814dc();
  plVar4[0x83] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x84] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x85] = uVar2;
  lVar1 = 0;
  func_0x000107c5eea4();
  plVar4[0x86] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x87] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x88] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x89] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bd9b5c,lVar5,0);
  return;
}



/* Entry: 101bdda24; end: 101bdda83;  */

void FUN_101bdda24(long param_1,undefined1 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *unaff_x20;
  plVar4 = (long *)0x1c0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bdda84;
  *(undefined1 *)(plVar4 + 0x36) = param_2;
  plVar4[0x27] = param_1;
  plVar4[0x28] = lVar5;
  lVar1 = 0;
  func_0x000103a814dc();
  plVar4[0x29] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x2a] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x2b] = uVar2;
  lVar1 = 0;
  func_0x000107c5eea4();
  plVar4[0x2c] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x2d] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x2e] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x2f] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bdad2c,lVar5,0);
  return;
}



/* Entry: 101bdda84; end: 101bddacb;  */

void FUN_101bdda84(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bddac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bddacc; end: 101bddb33;  */

void FUN_101bddacc(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bddb34;
                    /* WARNING: Could not recover jumptable at 0x000101bddb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bde4d0(param_1);
  return;
}



/* Entry: 101bddb34; end: 101bddb83;  */

void FUN_101bddb34(uint param_1)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
  if (unaff_x20 == 0) {
    param_1 = param_1 & 1;
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000101bddb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101bddb84; end: 101bddbeb;  */

void FUN_101bddb84(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101be2db4;
                    /* WARNING: Could not recover jumptable at 0x000101bddbe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bded28(param_1);
  return;
}



/* Entry: 101bddbec; end: 101bddc6b;  */

void FUN_101bddbec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x170;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bddc6c;
                    /* WARNING: Could not recover jumptable at 0x000101bddc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bdf52c(param_1,param_2,param_3);
  return;
}



/* Entry: 101bddc6c; end: 101bddcc3;  */

void FUN_101bddc6c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bddcc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bddcc4; end: 101bddd5b;  */

void FUN_101bddcc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x210;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101be2db0;
                    /* WARNING: Could not recover jumptable at 0x000101bddd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101be0450(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 101bddd5c; end: 101bdddbf;  */

void FUN_101bddd5c(long param_1,undefined1 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *unaff_x20;
  plVar4 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bdddc0;
  *(undefined1 *)(plVar4 + 0x27) = param_2;
  plVar4[0x1c] = param_1;
  plVar4[0x1d] = lVar5;
  lVar1 = 0;
  func_0x000107c5eea4();
  plVar4[0x1e] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x1f] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x20] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x21] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bdbec8,lVar5,0);
  return;
}



/* Entry: 101bdddc0; end: 101bdddfb;  */

void FUN_101bdddc0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bdddf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bdddfc; end: 101bdde6f;  */

void FUN_101bdddfc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x1e0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101be2db8;
                    /* WARNING: Could not recover jumptable at 0x000101bdde6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101be11ac(param_1,param_2);
  return;
}



/* Entry: 101bdde70; end: 101bdded7;  */

void FUN_101bdde70(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101be2dbc;
                    /* WARNING: Could not recover jumptable at 0x000101bdded4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101be1d08(param_1);
  return;
}



/* Entry: 101bdded8; end: 101bddf3f;  */

void FUN_101bdded8(long param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *unaff_x20;
  plVar4 = (long *)0x130;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101be2dc0;
  plVar4[0x1c] = param_2;
  plVar4[0x1d] = lVar5;
  *(undefined1 *)(plVar4 + 0x25) = param_3;
  plVar4[0x1b] = param_1;
  lVar1 = 0;
  func_0x000107c5eea4();
  plVar4[0x1e] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x1f] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x20] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x21] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bdcccc,lVar5,0);
  return;
}



/* Entry: 101bddf40; end: 101bde247;  */

void FUN_101bddf40(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long extraout_x8;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *unaff_x20;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  undefined1 auStack_a8 [72];
  
  lVar5 = 0;
  func_0x000103a814dc();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar11 = &stack0xffffffffffffff30 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar18 = *unaff_x20;
  lVar5 = *(long *)(lVar18 + 0x18);
  if (*(long *)(lVar18 + 0x18) <= param_1) {
    lVar5 = param_1;
  }
  uVar6 = 0x112e085e0;
  func_0x0001000285a8(0x112e085e0,&UNK_10d9dcfc0);
  lVar7 = lVar18;
  func_0x000107c60490(lVar18,lVar5,param_2,uVar6);
  if (*(long *)(lVar18 + 0x10) == 0) {
LAB_101bde214:
    func_0x000107c61574(lVar18);
LAB_101bde21c:
    *unaff_x20 = lVar7;
    return;
  }
  puVar21 = (ulong *)(lVar18 + 0x40);
  uVar14 = 1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if ((*(byte *)(lVar18 + 0x20) & 0x3f) < 6) {
    uVar20 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar20 = uVar20 & *puVar21;
  lVar5 = lVar7 + 0x40;
  lVar8 = 0;
  do {
    if (uVar20 == 0) {
      do {
        lVar17 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101bde244);
          (*pcVar4)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) == 0) {
            func_0x000107c61574(lVar18);
            goto LAB_101bde21c;
          }
          uVar20 = 1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
          if ((*(byte *)(lVar18 + 0x20) & 0x3f) < 6) {
            *puVar21 = -1L << (uVar20 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar21,uVar20 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar18 + 0x10) = 0;
          goto LAB_101bde214;
        }
        uVar20 = puVar21[lVar17];
        lVar8 = lVar8 + 1;
      } while (uVar20 == 0);
      uVar12 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar20 = uVar20 - 1 & uVar20;
    }
    else {
      uVar12 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar20 = uVar20 - 1 & uVar20;
      lVar17 = lVar8;
    }
    uVar12 = LZCOUNT(uVar12) | lVar17 << 6;
    puVar1 = (undefined8 *)(*(long *)(lVar18 + 0x30) + uVar12 * 0x10);
    uVar6 = *puVar1;
    uVar2 = puVar1[1];
    lVar19 = *(long *)(lVar10 + 0x48);
    lVar8 = *(long *)(lVar18 + 0x38) + lVar19 * uVar12;
    if ((param_2 & 1) == 0) {
      FUN_101bde48c(lVar8,puVar11);
      func_0x000107c61434(uVar2);
    }
    else {
      func_0x00010111dd50(lVar8,puVar11);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar9 = auStack_a8;
    func_0x000107c5fb58(puVar9,uVar6,uVar2);
    func_0x000107c606a8();
    uVar16 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar15 = (ulong)puVar9 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar15 >> 6;
    uVar12 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar5 + uVar13 * 8) ^ 0xffffffffffffffff);
    if (uVar12 == 0) {
      bVar3 = false;
      uVar12 = 0x3f - uVar16 >> 6;
      do {
        uVar15 = uVar13 + 1;
        if ((uVar15 == uVar12) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101bde248);
          (*pcVar4)();
        }
        uVar13 = 0;
        if (uVar15 != uVar12) {
          uVar13 = uVar15;
        }
        bVar3 = (bool)(uVar15 == uVar12 | bVar3);
        uVar15 = *(ulong *)(lVar5 + uVar13 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar12 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar13 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar5 + uVar13) = 1L << (uVar12 & 0x3f) | *(ulong *)(lVar5 + uVar13);
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar12 * 0x10);
    *puVar1 = uVar6;
    puVar1[1] = uVar2;
    func_0x00010111dd50(puVar11,*(long *)(lVar7 + 0x38) + lVar19 * uVar12);
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar8 = lVar17;
  } while( true );
}



/* Entry: 101bde248; end: 101bde27b;  */

undefined8 FUN_101bde248(undefined8 param_1)

{
  FUN_101c3a9d0();
  return param_1;
}



/* Entry: 101bde27c; end: 101bde437;  */

/* WARNING: Possible PIC construction at 0x000101bde3fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bde400) */

void FUN_101bde27c(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar5 = uRam0000000112e08430;
  uVar4 = 0x800000010f003040;
  uVar6 = 0xd000000000000011;
  if (param_2 != 6) {
    uVar4 = 0xec00000064656566;
    uVar6 = 0x5f73646e65697266;
  }
  uVar7 = 0xef6369706f745f74;
  uVar1 = 0x6867696c746f7073;
  if (param_2 != 4) {
    uVar7 = 0xee0073676e697474;
    uVar1 = 0x65735f636973756d;
  }
  if (param_2 < 6) {
    uVar4 = uVar7;
    uVar6 = uVar1;
  }
  uVar7 = 0x656c69666f7270;
  if (param_2 != 2) {
    uVar7 = 0x70616d;
  }
  uVar1 = 0xe700000000000000;
  if (param_2 != 2) {
    uVar1 = 0xe300000000000000;
  }
  uVar2 = 0x6e776f6e6b6e75;
  if (param_2 != 0) {
    uVar2 = 0x68747561;
  }
  uVar3 = 0xe700000000000000;
  if (param_2 != 0) {
    uVar3 = 0xe400000000000000;
  }
  if (param_2 < 2) {
    uVar1 = uVar3;
    uVar7 = uVar2;
  }
  if (param_2 < 4) {
    uVar4 = uVar1;
    uVar6 = uVar7;
  }
  uVar7 = uVar4;
  func_0x000107c5fadc(uVar6,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000101c2607c(param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar7);
  func_0x000105728e38(uVar5,uVar6,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 101bde438; end: 101bde44f;  */

int FUN_101bde438(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101bde450; end: 101bde483;  */

undefined8 FUN_101bde450(undefined8 param_1)

{
  FUN_101c3c2e0();
  return param_1;
}



/* Entry: 101bde484; end: 101bde48b;  */

void FUN_101bde484(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101bde48c; end: 101bde4cf;  */

undefined8 FUN_101bde48c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000103a814dc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101bde4d0; end: 101bde53f;  */

void FUN_101bde4d0(undefined1 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x100) = param_1;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0xb8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 200) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bde540);
  return;
}



/* Entry: 101bde540; end: 101bde60f;  */

void FUN_101bde540(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  long unaff_x22;
  
  func_0x000107c5eea0(*(undefined8 *)(unaff_x22 + 0xd0));
  func_0x000100083b20(unaff_x22 + 0x98);
  plVar5 = *(long **)(unaff_x22 + 0x98);
  *(long **)(unaff_x22 + 0xd8) = plVar5;
  func_0x000100083b20(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  func_0x0001000a8868(unaff_x22 + 0x70,uVar2);
  (**(code **)(lVar3 + 8))(unaff_x22 + 0x10,uVar2,lVar3);
  piVar4 = *(int **)(*plVar5 + 0x78);
  iVar1 = *piVar4;
  plVar5 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101bde610;
                    /* WARNING: Could not recover jumptable at 0x000101bde60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(1,1,0,0xc000000000000000,unaff_x22 + 0x10);
  return;
}



/* Entry: 101bde610; end: 101bde6af;  */

void FUN_101bde610(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0xd8);
  *(undefined1 *)(lVar3 + 0x101) = param_1;
  *(undefined8 *)(lVar3 + 0xe8) = param_2;
  *(undefined8 *)(lVar3 + 0xf0) = param_3;
  *(long *)(lVar3 + 0xf8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xe0));
  func_0x000101be2878(lVar3 + 0x10,0x112d39250,&UNK_10d9d84e0);
  func_0x000107c61574(uVar2);
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0xb0);
    func_0x0001000834e4(lVar3 + 0x70);
    pcVar1 = FUN_101bde6b0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0xb0);
    pcVar1 = FUN_101bdea1c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,0);
  return;
}



/* Entry: 101bde6b0; end: 101bdea1b;  */

void FUN_101bde6b0(undefined8 param_1)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar1 = *(long *)(unaff_x22 + 0xc0);
  bVar2 = *(byte *)(unaff_x22 + 0x100);
  func_0x000107c5eea0(uVar5);
  func_0x000107c5ee68(uVar4);
  pcVar7 = *(code **)(lVar1 + 8);
  (*pcVar7)(uVar5,uVar9);
  uVar5 = 0x800000010f003040;
  uVar9 = 0xd000000000000011;
  if (bVar2 != 6) {
    uVar5 = 0xec00000064656566;
    uVar9 = 0x5f73646e65697266;
  }
  uVar4 = 0xef6369706f745f74;
  uVar11 = 0x6867696c746f7073;
  if (bVar2 != 4) {
    uVar4 = 0xee0073676e697474;
    uVar11 = 0x65735f636973756d;
  }
  if (bVar2 < 6) {
    uVar5 = uVar4;
    uVar9 = uVar11;
  }
  uVar4 = 0x656c69666f7270;
  if (bVar2 != 2) {
    uVar4 = 0x70616d;
  }
  uVar11 = 0xe700000000000000;
  if (bVar2 != 2) {
    uVar11 = 0xe300000000000000;
  }
  uVar6 = 0x6e776f6e6b6e75;
  if (bVar2 != 0) {
    uVar6 = 0x68747561;
  }
  uVar3 = 0xe700000000000000;
  if (bVar2 != 0) {
    uVar3 = 0xe400000000000000;
  }
  if (bVar2 < 2) {
    uVar11 = uVar3;
    uVar4 = uVar6;
  }
  if (bVar2 < 4) {
    uVar5 = uVar11;
    uVar9 = uVar4;
  }
  uVar4 = uVar5;
  FUN_101c25950(uVar9,uVar5,1);
  func_0x000107c6142c(uVar5);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar11 = uRam0000000112e08430;
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar6 = uVar9;
  func_0x000107c5fadc(uVar9,uVar4);
  uVar12 = 0x796669746f7073;
  uVar3 = uVar12;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar11,uVar6,uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c5fadc(uVar9,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar4 = 0;
  uVar6 = 0;
  FUN_101c25b6c(0,0);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar6);
  func_0x000105728688(uVar11,uVar9,uVar12,uVar4,1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000100083b20(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar9 = uVar4;
  func_0x000107c413ec();
  func_0x000107c615e8(uVar4);
  func_0x000100083b20(unaff_x22 + 0xa8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = uVar11;
  func_0x000107c413f0();
  func_0x000107c615e8(uVar11);
  (*pcVar7)(uVar8,uVar5);
  if (((int)uVar4 == 1) && (((int)uVar9 == 1 || ((int)uVar9 == 3)))) {
    uVar9 = 0;
    uVar10 = 0;
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar11 = 0xc000000000000000;
  }
  else {
    uVar5 = 0;
    uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar4 = 0xc000000000000000;
    uVar10 = *(undefined1 *)(unaff_x22 + 0x101);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x00010006c090(uVar5,uVar4);
  func_0x00010006c090(uVar9,uVar11);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101bdea00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar10);
  return;
}



/* Entry: 101bdea1c; end: 101bded27;  */

void FUN_101bdea1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar3 = *(long *)(unaff_x22 + 0xc0);
  bVar4 = *(byte *)(unaff_x22 + 0x100);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x0001000834e4(unaff_x22 + 0x70);
  func_0x000107c614b0(uVar10);
  func_0x000107c5eea0(uVar2);
  func_0x000107c5ee68(uVar7);
  pcVar9 = *(code **)(lVar3 + 8);
  (*pcVar9)(uVar2,uVar5);
  uVar2 = 0x800000010f003040;
  uVar5 = 0xd000000000000011;
  if (bVar4 != 6) {
    uVar2 = 0xec00000064656566;
    uVar5 = 0x5f73646e65697266;
  }
  uVar7 = 0xef6369706f745f74;
  uVar10 = 0x6867696c746f7073;
  if (bVar4 != 4) {
    uVar7 = 0xee0073676e697474;
    uVar10 = 0x65735f636973756d;
  }
  if (bVar4 < 6) {
    uVar2 = uVar7;
    uVar5 = uVar10;
  }
  uVar7 = 0x656c69666f7270;
  if (bVar4 != 2) {
    uVar7 = 0x70616d;
  }
  uVar10 = 0xe700000000000000;
  if (bVar4 != 2) {
    uVar10 = 0xe300000000000000;
  }
  uVar1 = 0x6e776f6e6b6e75;
  if (bVar4 != 0) {
    uVar1 = 0x68747561;
  }
  uVar8 = 0xe700000000000000;
  if (bVar4 != 0) {
    uVar8 = 0xe400000000000000;
  }
  if (bVar4 < 2) {
    uVar10 = uVar8;
    uVar7 = uVar1;
  }
  if (bVar4 < 4) {
    uVar2 = uVar10;
    uVar5 = uVar7;
  }
  uVar7 = uVar2;
  FUN_101c25950(uVar5,uVar2,1);
  func_0x000107c6142c(uVar2);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar1 = uRam0000000112e08430;
  uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar8 = uVar5;
  func_0x000107c5fadc(uVar5,uVar7);
  uVar13 = 0x796669746f7073;
  uVar6 = uVar13;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar1,uVar8,uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c5fadc(uVar5,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar7 = 0;
  uVar8 = 1;
  FUN_101c25b6c(0,1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar8);
  func_0x000105728688(uVar1,uVar5,uVar13,uVar7,1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c614ac(uVar11);
  func_0x000107c61654();
  (*pcVar9)(uVar10,uVar12);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bded0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101bded28; end: 101bded97;  */

void FUN_101bded28(undefined1 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0xe0) = param_1;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bded98);
  return;
}



/* Entry: 101bded98; end: 101bdee67;  */

void FUN_101bded98(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  long unaff_x22;
  
  func_0x000107c5eea0(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000100083b20(unaff_x22 + 0x98);
  plVar5 = *(long **)(unaff_x22 + 0x98);
  *(long **)(unaff_x22 + 200) = plVar5;
  func_0x000100083b20(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  func_0x0001000a8868(unaff_x22 + 0x70,uVar2);
  (**(code **)(lVar3 + 8))(unaff_x22 + 0x10,uVar2,lVar3);
  piVar4 = *(int **)(*plVar5 + 0x88);
  iVar1 = *piVar4;
  plVar5 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101bdee68;
                    /* WARNING: Could not recover jumptable at 0x000101bdee64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(1,1,0,0xc000000000000000,unaff_x22 + 0x10);
  return;
}



/* Entry: 101bdee68; end: 101bdef43;  */

void FUN_101bdee68(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xd0));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar4 + 200);
    uVar2 = *(undefined8 *)(lVar4 + 0xa0);
    func_0x00010006c090(param_1,param_2);
    func_0x000101be2878(lVar4 + 0x10,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar3);
    func_0x0001000834e4(lVar4 + 0x70);
    pcVar1 = FUN_101bdef44;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 200);
    uVar2 = *(undefined8 *)(lVar4 + 0xa0);
    func_0x000101be2878(lVar4 + 0x10,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar3);
    pcVar1 = FUN_101bdf224;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,0);
  return;
}



/* Entry: 101bdef44; end: 101bdf223;  */

void FUN_101bdef44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar4 = *(long *)(unaff_x22 + 0xb0);
  bVar5 = *(byte *)(unaff_x22 + 0xe0);
  func_0x000107c5eea0(uVar3);
  func_0x000107c5ee68(uVar8);
  pcVar10 = *(code **)(lVar4 + 8);
  (*pcVar10)(uVar3,uVar6);
  uVar3 = 0x800000010f003040;
  uVar6 = 0xd000000000000011;
  if (bVar5 != 6) {
    uVar3 = 0xec00000064656566;
    uVar6 = 0x5f73646e65697266;
  }
  uVar8 = 0xef6369706f745f74;
  uVar1 = 0x6867696c746f7073;
  if (bVar5 != 4) {
    uVar8 = 0xee0073676e697474;
    uVar1 = 0x65735f636973756d;
  }
  if (bVar5 < 6) {
    uVar3 = uVar8;
    uVar6 = uVar1;
  }
  uVar8 = 0x656c69666f7270;
  if (bVar5 != 2) {
    uVar8 = 0x70616d;
  }
  uVar1 = 0xe700000000000000;
  if (bVar5 != 2) {
    uVar1 = 0xe300000000000000;
  }
  uVar2 = 0x6e776f6e6b6e75;
  if (bVar5 != 0) {
    uVar2 = 0x68747561;
  }
  uVar9 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar9 = 0xe400000000000000;
  }
  if (bVar5 < 2) {
    uVar1 = uVar9;
    uVar8 = uVar2;
  }
  if (bVar5 < 4) {
    uVar3 = uVar1;
    uVar6 = uVar8;
  }
  uVar8 = uVar3;
  FUN_101c25950(uVar6,uVar3,2);
  func_0x000107c6142c(uVar3);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar2 = uRam0000000112e08430;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar9 = uVar6;
  func_0x000107c5fadc(uVar6,uVar8);
  uVar12 = 0x796669746f7073;
  uVar7 = uVar12;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar2,uVar9,uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c5fadc(uVar6,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar8 = 0;
  uVar9 = 0;
  FUN_101c25b6c(0,0);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar9);
  func_0x000105728688(uVar2,uVar6,uVar12,uVar8,1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  (*pcVar10)(uVar1,uVar11);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101bdf208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bdf224; end: 101bdf52b;  */

void FUN_101bdf224(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  bVar4 = *(byte *)(unaff_x22 + 0xe0);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x0001000834e4(unaff_x22 + 0x70);
  func_0x000107c614b0(uVar10);
  func_0x000107c5eea0(uVar2);
  func_0x000107c5ee68(uVar7);
  pcVar9 = *(code **)(lVar3 + 8);
  (*pcVar9)(uVar2,uVar5);
  uVar2 = 0x800000010f003040;
  uVar5 = 0xd000000000000011;
  if (bVar4 != 6) {
    uVar2 = 0xec00000064656566;
    uVar5 = 0x5f73646e65697266;
  }
  uVar7 = 0xef6369706f745f74;
  uVar10 = 0x6867696c746f7073;
  if (bVar4 != 4) {
    uVar7 = 0xee0073676e697474;
    uVar10 = 0x65735f636973756d;
  }
  if (bVar4 < 6) {
    uVar2 = uVar7;
    uVar5 = uVar10;
  }
  uVar7 = 0x656c69666f7270;
  if (bVar4 != 2) {
    uVar7 = 0x70616d;
  }
  uVar10 = 0xe700000000000000;
  if (bVar4 != 2) {
    uVar10 = 0xe300000000000000;
  }
  uVar1 = 0x6e776f6e6b6e75;
  if (bVar4 != 0) {
    uVar1 = 0x68747561;
  }
  uVar8 = 0xe700000000000000;
  if (bVar4 != 0) {
    uVar8 = 0xe400000000000000;
  }
  if (bVar4 < 2) {
    uVar10 = uVar8;
    uVar7 = uVar1;
  }
  if (bVar4 < 4) {
    uVar2 = uVar10;
    uVar5 = uVar7;
  }
  uVar7 = uVar2;
  FUN_101c25950(uVar5,uVar2,2);
  func_0x000107c6142c(uVar2);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar1 = uRam0000000112e08430;
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar8 = uVar5;
  func_0x000107c5fadc(uVar5,uVar7);
  uVar13 = 0x796669746f7073;
  uVar6 = uVar13;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar1,uVar8,uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c5fadc(uVar5,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar7 = 0;
  uVar8 = 1;
  FUN_101c25b6c(0,1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar8);
  func_0x000105728688(uVar1,uVar5,uVar13,uVar7,1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c614ac(uVar11);
  func_0x000107c61654();
  (*pcVar9)(uVar10,uVar12);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bdf510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bdf52c; end: 101bdf59f;  */

void FUN_101bdf52c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x110) = param_2;
  *(undefined8 *)(unaff_x22 + 0x118) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x168) = param_3;
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x120) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x128) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x130) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x138) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bdf5a0);
  return;
}



/* Entry: 101bdf5a0; end: 101bdf69f;  */

void FUN_101bdf5a0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  func_0x000107c5eea0(*(undefined8 *)(unaff_x22 + 0x138));
  func_0x000107c61434(uVar2);
  func_0x000100083b20(unaff_x22 + 0x100);
  plVar5 = *(long **)(unaff_x22 + 0x100);
  *(long **)(unaff_x22 + 0x140) = plVar5;
  *(undefined8 *)(unaff_x22 + 0xa8) = 1;
  *(undefined1 *)(unaff_x22 + 0xb0) = 1;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xd0) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 200) = 0;
  func_0x000100083b20(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar3 = *(long *)(unaff_x22 + 0xf8);
  func_0x0001000a8868(unaff_x22 + 0xd8,uVar2);
  (**(code **)(lVar3 + 8))(unaff_x22 + 0x10,uVar2,lVar3);
  piVar4 = *(int **)(*plVar5 + 0xa0);
  iVar1 = *piVar4;
  plVar5 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x148) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101bdf6a0;
                    /* WARNING: Could not recover jumptable at 0x000101bdf69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (plVar5,unaff_x22 + 0x70,(undefined8 *)(unaff_x22 + 0xa8),unaff_x22 + 0x10);
  return;
}



/* Entry: 101bdf6a0; end: 101bdf797;  */

void FUN_101bdf6a0(void)

{
  undefined1 uVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar7 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(long *)(lVar7 + 0x150) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar7 + 0x148));
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(lVar7 + 0x140);
    func_0x000101be2878(lVar7 + 0x10,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar4);
    func_0x0001000834e4(lVar7 + 0xd8);
    lVar5 = *(long *)(lVar7 + 0x88);
    plVar2 = (long *)0xa0;
    uVar1 = *(undefined1 *)(lVar7 + 0x90);
    func_0x000107c615b8();
    *(long **)(lVar7 + 0x158) = plVar2;
    *plVar2 = lVar6;
    plVar2[1] = (long)FUN_101bdf798;
    lVar6 = *(long *)(lVar7 + 0x118);
    *(undefined1 *)((long)plVar2 + 0x9d) = *(undefined1 *)(lVar7 + 0x168);
    *(undefined1 *)((long)plVar2 + 0x9c) = uVar1;
    plVar2[0xf] = lVar5;
    plVar2[0x10] = lVar6;
    pcVar3 = FUN_101bdd590;
  }
  else {
    uVar4 = *(undefined8 *)(lVar7 + 0x140);
    lVar6 = *(long *)(lVar7 + 0x118);
    func_0x000101be2878(lVar7 + 0x10,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar4);
    pcVar3 = FUN_101bdfe30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,lVar6,0);
  return;
}



/* Entry: 101bdf798; end: 101bdf7f3;  */

void FUN_101bdf798(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x160) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x158));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bdf7f4;
  }
  else {
    pcVar1 = FUN_101be0140;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x118),0);
  return;
}



/* Entry: 101bdf7f4; end: 101bdfe2f;  */

void FUN_101bdf7f4(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong *puVar18;
  undefined8 uVar19;
  long unaff_x22;
  
  puVar18 = (ulong *)(unaff_x22 + 0x70);
  uVar4 = *puVar18;
  uVar6 = *(ulong *)(unaff_x22 + 0x78);
  uVar1 = uVar4 & 0xffffffffffff;
  if ((uVar6 & 0x2000000000000000) != 0) {
    uVar1 = uVar6 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    puVar10 = (undefined1 *)0x2;
    FUN_101bde27c(2,*(undefined1 *)(unaff_x22 + 0x168));
    FUN_101be27fc();
    puVar11 = &UNK_1106c6770;
    func_0x000107c613f8(&UNK_1106c6770,puVar10,0,0);
    *puVar10 = 3;
    func_0x000107c61654();
    func_0x000101be27c8(puVar18);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
    lVar7 = *(long *)(unaff_x22 + 0x128);
    bVar8 = *(byte *)(unaff_x22 + 0x168);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x110));
    func_0x00010006c090(0,0xc000000000000000);
    func_0x000107c614b0(puVar11);
    func_0x000107c5eea0(uVar5);
    func_0x000107c5ee68(uVar9);
    pcVar15 = *(code **)(lVar7 + 8);
    (*pcVar15)(uVar5,uVar12);
    uVar5 = 0x800000010f003040;
    uVar12 = 0xd000000000000011;
    if (bVar8 != 6) {
      uVar5 = 0xec00000064656566;
      uVar12 = 0x5f73646e65697266;
    }
    uVar9 = 0xef6369706f745f74;
    uVar2 = 0x6867696c746f7073;
    if (bVar8 != 4) {
      uVar9 = 0xee0073676e697474;
      uVar2 = 0x65735f636973756d;
    }
    if (bVar8 < 6) {
      uVar5 = uVar9;
      uVar12 = uVar2;
    }
    uVar9 = 0x656c69666f7270;
    if (bVar8 != 2) {
      uVar9 = 0x70616d;
    }
    uVar2 = 0xe700000000000000;
    if (bVar8 != 2) {
      uVar2 = 0xe300000000000000;
    }
    uVar3 = 0x6e776f6e6b6e75;
    if (bVar8 != 0) {
      uVar3 = 0x68747561;
    }
    uVar14 = 0xe700000000000000;
    if (bVar8 != 0) {
      uVar14 = 0xe400000000000000;
    }
    if (bVar8 < 2) {
      uVar2 = uVar14;
      uVar9 = uVar3;
    }
    if (bVar8 < 4) {
      uVar5 = uVar2;
      uVar12 = uVar9;
    }
    uVar9 = uVar5;
    FUN_101c25950(uVar12,uVar5,3);
    func_0x000107c6142c(uVar5);
    if (lRam0000000112e08428 != -1) {
      func_0x000107c61568(0x112e08428,0x101bd927c);
    }
    uVar3 = uRam0000000112e08430;
    uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar14 = uVar12;
    func_0x000107c5fadc(uVar12,uVar9);
    uVar19 = 0x796669746f7073;
    uVar13 = uVar19;
    func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
    func_0x000105728418(param_1,uVar3,uVar14,uVar13);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c5fadc(uVar12,uVar9);
    func_0x000107c6142c(uVar9);
    func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
    uVar9 = 0;
    uVar14 = 1;
    FUN_101c25b6c(0,1);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar14);
    func_0x000105728688(uVar3,uVar12,uVar19,uVar9,1);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar12);
    func_0x000107c614ac(puVar11);
    func_0x000107c61654();
    (*pcVar15)(uVar2,uVar16);
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101bdfdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar7 = *(long *)(unaff_x22 + 0x128);
  bVar8 = *(byte *)(unaff_x22 + 0x168);
  func_0x000107c5eea0(uVar5);
  func_0x000107c5ee68(uVar9);
  pcVar15 = *(code **)(lVar7 + 8);
  (*pcVar15)(uVar5,uVar12);
  uVar5 = 0x800000010f003040;
  uVar12 = 0xd000000000000011;
  if (bVar8 != 6) {
    uVar5 = 0xec00000064656566;
    uVar12 = 0x5f73646e65697266;
  }
  uVar9 = 0xef6369706f745f74;
  uVar2 = 0x6867696c746f7073;
  if (bVar8 != 4) {
    uVar9 = 0xee0073676e697474;
    uVar2 = 0x65735f636973756d;
  }
  if (bVar8 < 6) {
    uVar5 = uVar9;
    uVar12 = uVar2;
  }
  uVar9 = 0x656c69666f7270;
  if (bVar8 != 2) {
    uVar9 = 0x70616d;
  }
  uVar2 = 0xe700000000000000;
  if (bVar8 != 2) {
    uVar2 = 0xe300000000000000;
  }
  uVar3 = 0x6e776f6e6b6e75;
  if (bVar8 != 0) {
    uVar3 = 0x68747561;
  }
  uVar14 = 0xe700000000000000;
  if (bVar8 != 0) {
    uVar14 = 0xe400000000000000;
  }
  if (bVar8 < 2) {
    uVar2 = uVar14;
    uVar9 = uVar3;
  }
  if (bVar8 < 4) {
    uVar5 = uVar2;
    uVar12 = uVar9;
  }
  uVar9 = uVar5;
  FUN_101c25950(uVar12,uVar5,3);
  func_0x000107c6142c(uVar5);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar3 = uRam0000000112e08430;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar14 = uVar12;
  func_0x000107c5fadc(uVar12,uVar9);
  uVar19 = 0x796669746f7073;
  uVar13 = uVar19;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar3,uVar14,uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c5fadc(uVar12,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar9 = 0;
  uVar14 = 0;
  FUN_101c25b6c(0,0);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar14);
  func_0x000105728688(uVar3,uVar12,uVar19,uVar9,1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar12);
  (*pcVar15)(uVar2,uVar16);
  func_0x000107c61434(uVar6);
  func_0x000101be27c8(puVar18);
  func_0x000107c6142c(uVar17);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101bdfb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar6);
  return;
}



/* Entry: 101bdfe30; end: 101be013f;  */

void FUN_101bdfe30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x0001000834e4(unaff_x22 + 0xd8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar4 = *(long *)(unaff_x22 + 0x128);
  bVar5 = *(byte *)(unaff_x22 + 0x168);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x110));
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000107c614b0(uVar11);
  func_0x000107c5eea0(uVar3);
  func_0x000107c5ee68(uVar8);
  pcVar10 = *(code **)(lVar4 + 8);
  (*pcVar10)(uVar3,uVar6);
  uVar3 = 0x800000010f003040;
  uVar6 = 0xd000000000000011;
  if (bVar5 != 6) {
    uVar3 = 0xec00000064656566;
    uVar6 = 0x5f73646e65697266;
  }
  uVar8 = 0xef6369706f745f74;
  uVar1 = 0x6867696c746f7073;
  if (bVar5 != 4) {
    uVar8 = 0xee0073676e697474;
    uVar1 = 0x65735f636973756d;
  }
  if (bVar5 < 6) {
    uVar3 = uVar8;
    uVar6 = uVar1;
  }
  uVar8 = 0x656c69666f7270;
  if (bVar5 != 2) {
    uVar8 = 0x70616d;
  }
  uVar1 = 0xe700000000000000;
  if (bVar5 != 2) {
    uVar1 = 0xe300000000000000;
  }
  uVar2 = 0x6e776f6e6b6e75;
  if (bVar5 != 0) {
    uVar2 = 0x68747561;
  }
  uVar9 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar9 = 0xe400000000000000;
  }
  if (bVar5 < 2) {
    uVar1 = uVar9;
    uVar8 = uVar2;
  }
  if (bVar5 < 4) {
    uVar3 = uVar1;
    uVar6 = uVar8;
  }
  uVar8 = uVar3;
  FUN_101c25950(uVar6,uVar3,3);
  func_0x000107c6142c(uVar3);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar2 = uRam0000000112e08430;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar9 = uVar6;
  func_0x000107c5fadc(uVar6,uVar8);
  uVar13 = 0x796669746f7073;
  uVar7 = uVar13;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar2,uVar9,uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c5fadc(uVar6,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar8 = 0;
  uVar9 = 1;
  FUN_101c25b6c(0,1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar9);
  func_0x000105728688(uVar2,uVar6,uVar13,uVar8,1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c614ac(uVar11);
  func_0x000107c61654();
  (*pcVar10)(uVar1,uVar12);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101be0124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be0140; end: 101be044f;  */

void FUN_101be0140(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x000101be27c8(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar4 = *(long *)(unaff_x22 + 0x128);
  bVar5 = *(byte *)(unaff_x22 + 0x168);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x110));
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000107c614b0(uVar11);
  func_0x000107c5eea0(uVar3);
  func_0x000107c5ee68(uVar8);
  pcVar10 = *(code **)(lVar4 + 8);
  (*pcVar10)(uVar3,uVar6);
  uVar3 = 0x800000010f003040;
  uVar6 = 0xd000000000000011;
  if (bVar5 != 6) {
    uVar3 = 0xec00000064656566;
    uVar6 = 0x5f73646e65697266;
  }
  uVar8 = 0xef6369706f745f74;
  uVar1 = 0x6867696c746f7073;
  if (bVar5 != 4) {
    uVar8 = 0xee0073676e697474;
    uVar1 = 0x65735f636973756d;
  }
  if (bVar5 < 6) {
    uVar3 = uVar8;
    uVar6 = uVar1;
  }
  uVar8 = 0x656c69666f7270;
  if (bVar5 != 2) {
    uVar8 = 0x70616d;
  }
  uVar1 = 0xe700000000000000;
  if (bVar5 != 2) {
    uVar1 = 0xe300000000000000;
  }
  uVar2 = 0x6e776f6e6b6e75;
  if (bVar5 != 0) {
    uVar2 = 0x68747561;
  }
  uVar9 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar9 = 0xe400000000000000;
  }
  if (bVar5 < 2) {
    uVar1 = uVar9;
    uVar8 = uVar2;
  }
  if (bVar5 < 4) {
    uVar3 = uVar1;
    uVar6 = uVar8;
  }
  uVar8 = uVar3;
  FUN_101c25950(uVar6,uVar3,3);
  func_0x000107c6142c(uVar3);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar2 = uRam0000000112e08430;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar9 = uVar6;
  func_0x000107c5fadc(uVar6,uVar8);
  uVar13 = 0x796669746f7073;
  uVar7 = uVar13;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar2,uVar9,uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c5fadc(uVar6,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar8 = 0;
  uVar9 = 1;
  FUN_101c25b6c(0,1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar9);
  func_0x000105728688(uVar2,uVar6,uVar13,uVar8,1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c614ac(uVar11);
  func_0x000107c61654();
  (*pcVar10)(uVar1,uVar12);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101be0434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be0450; end: 101be04c7;  */

void FUN_101be0450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x198) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1a0) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x200) = param_5;
  *(undefined8 *)(unaff_x22 + 0x188) = param_2;
  *(undefined8 *)(unaff_x22 + 400) = param_3;
  *(undefined8 *)(unaff_x22 + 0x180) = param_1;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x1a8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x1b0) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1b8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1c0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be04c8);
  return;
}



/* Entry: 101be04c8; end: 101be072f;  */

void FUN_101be04c8(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x22;
  long lVar13;
  undefined8 uVar14;
  
  func_0x000100083b20(unaff_x22 + 0x170);
  puVar10 = *(undefined1 **)(unaff_x22 + 0x170);
  puVar5 = puVar10;
  func_0x000107c413e8();
  func_0x000107c615e8();
  if ((int)puVar5 != 0) {
    FUN_101be2544();
    func_0x000107c613f8(&UNK_1104540c0,puVar10,0,0);
    *puVar10 = 1;
    func_0x000107c61654();
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1b8);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x1c0));
    func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101be0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x198);
  lVar11 = *(long *)(unaff_x22 + 0x1a0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar3 = *(undefined8 *)(unaff_x22 + 400);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x180);
  func_0x000107c5eea0(*(undefined8 *)(unaff_x22 + 0x1c0));
  *(undefined8 *)(unaff_x22 + 0x128) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x120) = 0;
  *(undefined8 *)(unaff_x22 + 0xd0) = 1;
  *(undefined1 *)(unaff_x22 + 0xd8) = 1;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar14;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar7;
  func_0x000107c61428(lVar11 + 0x90,unaff_x22 + 0x158,0,0);
  lVar11 = *(long *)(lVar11 + 0x90);
  lVar13 = *(long *)(lVar11 + 0x10);
  func_0x000107c61434(lVar11);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar12 = *(ulong *)(unaff_x22 + 0x188);
  if (lVar13 == 0) {
    func_0x000107c61434(uVar12);
    func_0x000107c61434(uVar7);
  }
  else {
    lVar13 = *(long *)(unaff_x22 + 0x180);
    func_0x000107c61434(lVar11);
    func_0x000107c61434(uVar12);
    func_0x000107c61434(uVar7);
    func_0x000100029284();
    if ((uVar12 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar11 + 0x38) + lVar13 * 0x10);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      func_0x000107c61434(uVar8);
      func_0x000107c6142c(lVar11);
      goto LAB_101be0640;
    }
    func_0x000107c6142c(lVar11);
  }
  uVar7 = 0;
  uVar8 = 0xe000000000000000;
LAB_101be0640:
  cVar4 = *(char *)(unaff_x22 + 0x200);
  func_0x000107c6142c(lVar11);
  *(undefined8 *)(unaff_x22 + 0x110) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar8;
  uVar7 = 2;
  if (cVar4 != '\x03') {
    uVar7 = 0;
  }
  if (cVar4 == '\x04') {
    uVar7 = 1;
  }
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar7;
  *(undefined1 *)(unaff_x22 + 0xf8) = 1;
  func_0x000100083b20(unaff_x22 + 0x178);
  plVar9 = *(long **)(unaff_x22 + 0x178);
  *(long **)(unaff_x22 + 0x1c8) = plVar9;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000100083b20(unaff_x22 + 0x130);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar11 = *(long *)(unaff_x22 + 0x150);
  func_0x0001000a8868(unaff_x22 + 0x130,uVar7);
  (**(code **)(lVar11 + 8))(unaff_x22 + 0x70,uVar7,lVar11);
  piVar6 = *(int **)(*plVar9 + 0xa8);
  iVar2 = *piVar6;
  plVar9 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1d0) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_101be0730;
                    /* WARNING: Could not recover jumptable at 0x000101be072c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar6))(plVar9,unaff_x22 + 0x10,unaff_x22 + 0x70);
  return;
}



/* Entry: 101be0730; end: 101be082b;  */

void FUN_101be0730(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(undefined8 *)(lVar5 + 0x1d8) = param_3;
  *(undefined8 *)(lVar5 + 0x1e0) = param_4;
  *(long *)(lVar5 + 0x1e8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x1d0));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar5 + 0x1c8);
    func_0x000101be2878(lVar5 + 0x70,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar3);
    func_0x0001000834e4(lVar5 + 0x130);
    plVar1 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar5 + 0x1f0) = plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)FUN_101be082c;
    lVar4 = *(long *)(lVar5 + 0x1a0);
    *(undefined1 *)((long)plVar1 + 0x9d) = *(undefined1 *)(lVar5 + 0x200);
    *(undefined1 *)((long)plVar1 + 0x9c) = param_2;
    plVar1[0xf] = param_1;
    plVar1[0x10] = lVar4;
    pcVar2 = FUN_101bdd590;
  }
  else {
    uVar3 = *(undefined8 *)(lVar5 + 0x1c8);
    lVar4 = *(long *)(lVar5 + 0x1a0);
    func_0x000101be2878(lVar5 + 0x70,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar3);
    pcVar2 = FUN_101be0b78;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,lVar4,0);
  return;
}



/* Entry: 101be082c; end: 101be0887;  */

void FUN_101be082c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1f8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1f0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101be0888;
  }
  else {
    pcVar1 = FUN_101be0e78;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x1a0),0);
  return;
}



/* Entry: 101be0888; end: 101be0b77;  */

void FUN_101be0888(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
  lVar4 = *(long *)(unaff_x22 + 0x1b0);
  bVar6 = *(byte *)(unaff_x22 + 0x200);
  func_0x000107c5eea0(uVar3);
  func_0x000107c5ee68(uVar10);
  pcVar12 = *(code **)(lVar4 + 8);
  (*pcVar12)(uVar3,uVar8);
  uVar3 = 0x800000010f003040;
  uVar8 = 0xd000000000000011;
  if (bVar6 != 6) {
    uVar3 = 0xec00000064656566;
    uVar8 = 0x5f73646e65697266;
  }
  uVar10 = 0xef6369706f745f74;
  uVar1 = 0x6867696c746f7073;
  if (bVar6 != 4) {
    uVar10 = 0xee0073676e697474;
    uVar1 = 0x65735f636973756d;
  }
  if (bVar6 < 6) {
    uVar3 = uVar10;
    uVar8 = uVar1;
  }
  uVar10 = 0x656c69666f7270;
  if (bVar6 != 2) {
    uVar10 = 0x70616d;
  }
  uVar1 = 0xe700000000000000;
  if (bVar6 != 2) {
    uVar1 = 0xe300000000000000;
  }
  uVar5 = 0x6e776f6e6b6e75;
  if (bVar6 != 0) {
    uVar5 = 0x68747561;
  }
  uVar2 = 0xe700000000000000;
  if (bVar6 != 0) {
    uVar2 = 0xe400000000000000;
  }
  if (bVar6 < 2) {
    uVar1 = uVar2;
    uVar10 = uVar5;
  }
  if (bVar6 < 4) {
    uVar3 = uVar1;
    uVar8 = uVar10;
  }
  uVar10 = uVar3;
  FUN_101c25950(uVar8,uVar3,4);
  func_0x000107c6142c(uVar3);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar7 = uRam0000000112e08430;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar11 = uVar8;
  func_0x000107c5fadc(uVar8,uVar10);
  uVar14 = 0x796669746f7073;
  uVar9 = uVar14;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar7,uVar11,uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c5fadc(uVar8,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar10 = 0;
  uVar11 = 0;
  FUN_101c25b6c(0,0);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar11);
  func_0x000105728688(uVar7,uVar8,uVar14,uVar10,1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar8);
  func_0x00010006c090(uVar3,uVar5);
  (*pcVar12)(uVar2,uVar13);
  func_0x000101be2794(unaff_x22 + 0xd0);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101be0b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be0b78; end: 101be0e77;  */

void FUN_101be0b78(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  func_0x0001000834e4(unaff_x22 + 0x130);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1a8);
  lVar2 = *(long *)(unaff_x22 + 0x1b0);
  bVar3 = *(byte *)(unaff_x22 + 0x200);
  func_0x000101be2794(unaff_x22 + 0xd0);
  func_0x000107c614b0(uVar9);
  func_0x000107c5eea0(uVar1);
  func_0x000107c5ee68(uVar6);
  pcVar8 = *(code **)(lVar2 + 8);
  (*pcVar8)(uVar1,uVar4);
  uVar1 = 0x800000010f003040;
  uVar4 = 0xd000000000000011;
  if (bVar3 != 6) {
    uVar1 = 0xec00000064656566;
    uVar4 = 0x5f73646e65697266;
  }
  uVar6 = 0xef6369706f745f74;
  uVar7 = 0x6867696c746f7073;
  if (bVar3 != 4) {
    uVar6 = 0xee0073676e697474;
    uVar7 = 0x65735f636973756d;
  }
  if (bVar3 < 6) {
    uVar1 = uVar6;
    uVar4 = uVar7;
  }
  uVar6 = 0x656c69666f7270;
  if (bVar3 != 2) {
    uVar6 = 0x70616d;
  }
  uVar7 = 0xe700000000000000;
  if (bVar3 != 2) {
    uVar7 = 0xe300000000000000;
  }
  uVar5 = 0x6e776f6e6b6e75;
  if (bVar3 != 0) {
    uVar5 = 0x68747561;
  }
  uVar12 = 0xe700000000000000;
  if (bVar3 != 0) {
    uVar12 = 0xe400000000000000;
  }
  if (bVar3 < 2) {
    uVar7 = uVar12;
    uVar6 = uVar5;
  }
  if (bVar3 < 4) {
    uVar1 = uVar7;
    uVar4 = uVar6;
  }
  uVar6 = uVar1;
  FUN_101c25950(uVar4,uVar1,4);
  func_0x000107c6142c(uVar1);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar1 = uRam0000000112e08430;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar7 = uVar4;
  func_0x000107c5fadc(uVar4,uVar6);
  uVar12 = 0x796669746f7073;
  uVar5 = uVar12;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar1,uVar7,uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c5fadc(uVar4,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar6 = 0;
  uVar7 = 1;
  FUN_101c25b6c(0,1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar7);
  func_0x000105728688(uVar1,uVar4,uVar12,uVar6,1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c614ac(uVar9);
  func_0x000107c61654();
  (*pcVar8)(uVar10,uVar11);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x1c0));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101be0e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be0e78; end: 101be1177;  */

void FUN_101be0e78(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x1d8),*(undefined8 *)(unaff_x22 + 0x1e0));
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1a8);
  lVar2 = *(long *)(unaff_x22 + 0x1b0);
  bVar3 = *(byte *)(unaff_x22 + 0x200);
  func_0x000101be2794(unaff_x22 + 0xd0);
  func_0x000107c614b0(uVar9);
  func_0x000107c5eea0(uVar1);
  func_0x000107c5ee68(uVar6);
  pcVar8 = *(code **)(lVar2 + 8);
  (*pcVar8)(uVar1,uVar4);
  uVar1 = 0x800000010f003040;
  uVar4 = 0xd000000000000011;
  if (bVar3 != 6) {
    uVar1 = 0xec00000064656566;
    uVar4 = 0x5f73646e65697266;
  }
  uVar6 = 0xef6369706f745f74;
  uVar7 = 0x6867696c746f7073;
  if (bVar3 != 4) {
    uVar6 = 0xee0073676e697474;
    uVar7 = 0x65735f636973756d;
  }
  if (bVar3 < 6) {
    uVar1 = uVar6;
    uVar4 = uVar7;
  }
  uVar6 = 0x656c69666f7270;
  if (bVar3 != 2) {
    uVar6 = 0x70616d;
  }
  uVar7 = 0xe700000000000000;
  if (bVar3 != 2) {
    uVar7 = 0xe300000000000000;
  }
  uVar5 = 0x6e776f6e6b6e75;
  if (bVar3 != 0) {
    uVar5 = 0x68747561;
  }
  uVar12 = 0xe700000000000000;
  if (bVar3 != 0) {
    uVar12 = 0xe400000000000000;
  }
  if (bVar3 < 2) {
    uVar7 = uVar12;
    uVar6 = uVar5;
  }
  if (bVar3 < 4) {
    uVar1 = uVar7;
    uVar4 = uVar6;
  }
  uVar6 = uVar1;
  FUN_101c25950(uVar4,uVar1,4);
  func_0x000107c6142c(uVar1);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar1 = uRam0000000112e08430;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar7 = uVar4;
  func_0x000107c5fadc(uVar4,uVar6);
  uVar12 = 0x796669746f7073;
  uVar5 = uVar12;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar1,uVar7,uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c5fadc(uVar4,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar6 = 0;
  uVar7 = 1;
  FUN_101c25b6c(0,1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar7);
  func_0x000105728688(uVar1,uVar4,uVar12,uVar6,1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c614ac(uVar9);
  func_0x000107c61654();
  (*pcVar8)(uVar10,uVar11);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x1c0));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101be115c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be1178; end: 101be11ab;  */

undefined8 FUN_101be1178(undefined8 param_1)

{
  FUN_101c3b8a8();
  return param_1;
}



/* Entry: 101be11ac; end: 101be128b;  */

void FUN_101be11ac(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x1d0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x168) = param_1;
  *(undefined8 *)(unaff_x22 + 0x170) = unaff_x20;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x178) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x180) = uVar2;
  lVar3 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x188) = uVar2;
  lVar3 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 400) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x198) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1b0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be128c);
  return;
}



/* Entry: 101be128c; end: 101be15e3;  */

void FUN_101be128c(void)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long unaff_x22;
  double dVar12;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x168);
  func_0x000107c5eea0(*(undefined8 *)(unaff_x22 + 0x1b0));
  func_0x000101c30054(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0xc0);
  dVar12 = *(double *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(double *)(unaff_x22 + 0x110) = dVar12;
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0xf0) = 1;
  *(undefined1 *)(unaff_x22 + 0xf8) = 1;
  func_0x000101be28b8(uVar7,uVar9,0x112e085c8,&UNK_10d9dcfb0);
  lVar4 = 0;
  func_0x000103a82768();
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(uVar9,1,lVar4);
  if ((int)uVar9 == 1) {
    *(undefined8 *)(unaff_x22 + 0x100) = 0;
    *(undefined1 *)(unaff_x22 + 0x108) = 1;
  }
  else {
    puVar10 = *(undefined8 **)(unaff_x22 + 0x188);
    puVar5 = puVar10;
    func_0x000107c614c4(puVar10,lVar4);
    if ((int)puVar5 == 0) {
      uVar9 = *(undefined8 *)(unaff_x22 + 400);
      lVar2 = *(long *)(unaff_x22 + 0x198);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x178);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x180);
      lVar4 = 0x112e08440;
      func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
      func_0x000107c6142c(*(undefined8 *)((long)puVar10 + (long)*(int *)(lVar4 + 0x30)));
      func_0x0001003a4c00(puVar10,uVar11);
      *(undefined8 *)(unaff_x22 + 0x100) = 3;
      *(undefined1 *)(unaff_x22 + 0x108) = 1;
      func_0x000101be28b8(uVar11,uVar7,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar2 + 0x30))(uVar7,1,uVar9);
      if ((int)uVar7 == 1) {
        uVar9 = *(undefined8 *)(unaff_x22 + 0x178);
        func_0x000101be2878(*(undefined8 *)(unaff_x22 + 0x180),0x112d373d8,&UNK_10d9014c0);
      }
      else {
        (**(code **)(*(long *)(unaff_x22 + 0x198) + 0x20))
                  (*(undefined8 *)(unaff_x22 + 0x1a8),*(undefined8 *)(unaff_x22 + 0x178),
                   *(undefined8 *)(unaff_x22 + 400));
        func_0x000107c5ee8c();
        uVar11 = *(undefined8 *)(unaff_x22 + 0x1a8);
        uVar7 = *(undefined8 *)(unaff_x22 + 400);
        lVar4 = *(long *)(unaff_x22 + 0x198);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x180);
        if (0.0 < dVar12) {
          func_0x000107c5ee8c();
          (**(code **)(lVar4 + 8))(uVar11,uVar7);
          func_0x000101be2878(uVar9,0x112d373d8,&UNK_10d9014c0);
          dVar12 = dVar12 * 1000.0;
          if (0x7fefffffffffffff < (ulong)ABS(dVar12)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101be15dc);
            (*pcVar3)();
          }
          if (dVar12 <= -1.0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101be15e0);
            (*pcVar3)();
          }
          if (1.8446744073709552e+19 <= dVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101be15e4);
            (*pcVar3)();
          }
          *(long *)(unaff_x22 + 0x118) = (long)dVar12;
          goto LAB_101be151c;
        }
        (**(code **)(lVar4 + 8))(uVar11,uVar7);
      }
      func_0x000101be2878(uVar9,0x112d373d8,&UNK_10d9014c0);
    }
    else if ((int)puVar5 == 1) {
      *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar9 = *puVar10;
      func_0x000101be2878(unaff_x22 + 0x158,0x112d38270,&UNK_10d905a20);
      *(undefined8 *)(unaff_x22 + 0x110) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x100) = 2;
      *(undefined1 *)(unaff_x22 + 0x108) = 1;
    }
    else {
      *(undefined8 *)(unaff_x22 + 0x100) = 1;
      *(undefined1 *)(unaff_x22 + 0x108) = 1;
    }
  }
LAB_101be151c:
  func_0x000100083b20(unaff_x22 + 0x160);
  plVar8 = *(long **)(unaff_x22 + 0x160);
  *(long **)(unaff_x22 + 0x1b8) = plVar8;
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x120);
  func_0x000100083b20(unaff_x22 + 0x130);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar4 = *(long *)(unaff_x22 + 0x150);
  func_0x0001000a8868(unaff_x22 + 0x130,uVar9);
  (**(code **)(lVar4 + 8))(unaff_x22 + 0x10,uVar9,lVar4);
  piVar6 = *(int **)(*plVar8 + 0xb8);
  iVar1 = *piVar6;
  plVar8 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1c0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101be15e4;
                    /* WARNING: Could not recover jumptable at 0x000101be15d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(plVar8,unaff_x22 + 0x70,unaff_x22 + 0x10);
  return;
}



/* Entry: 101be15e4; end: 101be16bf;  */

void FUN_101be15e4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x1c8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x1c0));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar4 + 0x1b8);
    uVar2 = *(undefined8 *)(lVar4 + 0x170);
    func_0x00010006c090(param_1,param_2);
    func_0x000101be2878(lVar4 + 0x10,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar3);
    func_0x0001000834e4(lVar4 + 0x130);
    pcVar1 = FUN_101be16c0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x1b8);
    uVar2 = *(undefined8 *)(lVar4 + 0x170);
    func_0x000101be2878(lVar4 + 0x10,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar3);
    pcVar1 = FUN_101be19d0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,0);
  return;
}



/* Entry: 101be16c0; end: 101be19cf;  */

void FUN_101be16c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar3 = *(long *)(unaff_x22 + 0x198);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar15 = *(undefined8 *)(unaff_x22 + 400);
  bVar8 = *(byte *)(unaff_x22 + 0x1d0);
  func_0x000107c5eea0(uVar5);
  func_0x000107c5ee68(uVar14);
  pcVar12 = *(code **)(lVar3 + 8);
  (*pcVar12)(uVar5,uVar15);
  uVar5 = 0x800000010f003040;
  uVar14 = 0xd000000000000011;
  if (bVar8 != 6) {
    uVar5 = 0xec00000064656566;
    uVar14 = 0x5f73646e65697266;
  }
  uVar15 = 0xef6369706f745f74;
  uVar1 = 0x6867696c746f7073;
  if (bVar8 != 4) {
    uVar15 = 0xee0073676e697474;
    uVar1 = 0x65735f636973756d;
  }
  if (bVar8 < 6) {
    uVar5 = uVar15;
    uVar14 = uVar1;
  }
  uVar15 = 0x656c69666f7270;
  if (bVar8 != 2) {
    uVar15 = 0x70616d;
  }
  uVar1 = 0xe700000000000000;
  if (bVar8 != 2) {
    uVar1 = 0xe300000000000000;
  }
  uVar4 = 0x6e776f6e6b6e75;
  if (bVar8 != 0) {
    uVar4 = 0x68747561;
  }
  uVar2 = 0xe700000000000000;
  if (bVar8 != 0) {
    uVar2 = 0xe400000000000000;
  }
  if (bVar8 < 2) {
    uVar1 = uVar2;
    uVar15 = uVar4;
  }
  if (bVar8 < 4) {
    uVar5 = uVar1;
    uVar14 = uVar15;
  }
  uVar15 = uVar5;
  FUN_101c25950(uVar14,uVar5,8);
  func_0x000107c6142c(uVar5);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar9 = uRam0000000112e08430;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar6 = *(undefined8 *)(unaff_x22 + 400);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar11 = uVar14;
  func_0x000107c5fadc(uVar14,uVar15);
  uVar16 = 0x796669746f7073;
  uVar10 = uVar16;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar9,uVar11,uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c5fadc(uVar14,uVar15);
  func_0x000107c6142c(uVar15);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar15 = 0;
  uVar11 = 0;
  FUN_101c25b6c(0,0);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar11);
  func_0x000105728688(uVar9,uVar14,uVar16,uVar15,1);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar14);
  (*pcVar12)(uVar2,uVar6);
  FUN_101be2760(unaff_x22 + 0xf0);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101be19b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be19d0; end: 101be1d07;  */

void FUN_101be19d0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar2 = *(long *)(unaff_x22 + 0x198);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar16 = *(undefined8 *)(unaff_x22 + 400);
  bVar7 = *(byte *)(unaff_x22 + 0x1d0);
  func_0x0001000834e4(unaff_x22 + 0x130);
  FUN_101be2760(unaff_x22 + 0xf0);
  func_0x000107c614b0(uVar14);
  func_0x000107c5eea0(uVar4);
  func_0x000107c5ee68(uVar13);
  pcVar11 = *(code **)(lVar2 + 8);
  (*pcVar11)(uVar4,uVar16);
  uVar4 = 0x800000010f003040;
  uVar13 = 0xd000000000000011;
  if (bVar7 != 6) {
    uVar4 = 0xec00000064656566;
    uVar13 = 0x5f73646e65697266;
  }
  uVar14 = 0xef6369706f745f74;
  uVar16 = 0x6867696c746f7073;
  if (bVar7 != 4) {
    uVar14 = 0xee0073676e697474;
    uVar16 = 0x65735f636973756d;
  }
  if (bVar7 < 6) {
    uVar4 = uVar14;
    uVar13 = uVar16;
  }
  uVar14 = 0x656c69666f7270;
  if (bVar7 != 2) {
    uVar14 = 0x70616d;
  }
  uVar16 = 0xe700000000000000;
  if (bVar7 != 2) {
    uVar16 = 0xe300000000000000;
  }
  uVar3 = 0x6e776f6e6b6e75;
  if (bVar7 != 0) {
    uVar3 = 0x68747561;
  }
  uVar1 = 0xe700000000000000;
  if (bVar7 != 0) {
    uVar1 = 0xe400000000000000;
  }
  if (bVar7 < 2) {
    uVar16 = uVar1;
    uVar14 = uVar3;
  }
  if (bVar7 < 4) {
    uVar4 = uVar16;
    uVar13 = uVar14;
  }
  uVar14 = uVar4;
  FUN_101c25950(uVar13,uVar4,8);
  func_0x000107c6142c(uVar4);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar8 = uRam0000000112e08430;
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar5 = *(undefined8 *)(unaff_x22 + 400);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar10 = uVar13;
  func_0x000107c5fadc(uVar13,uVar14);
  uVar17 = 0x796669746f7073;
  uVar9 = uVar17;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar8,uVar10,uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c5fadc(uVar13,uVar14);
  func_0x000107c6142c(uVar14);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar14 = 0;
  uVar10 = 1;
  FUN_101c25b6c(0,1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar10);
  func_0x000105728688(uVar8,uVar13,uVar17,uVar14,1);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar13);
  func_0x000107c614ac(uVar15);
  func_0x000107c61654();
  (*pcVar11)(uVar1,uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar16);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101be1cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be1d08; end: 101be1d77;  */

void FUN_101be1d08(undefined1 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0xe0) = param_1;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101be1d78);
  return;
}



/* Entry: 101be1d78; end: 101be1e47;  */

void FUN_101be1d78(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  long unaff_x22;
  
  func_0x000107c5eea0(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000100083b20(unaff_x22 + 0x98);
  plVar5 = *(long **)(unaff_x22 + 0x98);
  *(long **)(unaff_x22 + 200) = plVar5;
  func_0x000100083b20(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  func_0x0001000a8868(unaff_x22 + 0x70,uVar2);
  (**(code **)(lVar3 + 8))(unaff_x22 + 0x10,uVar2,lVar3);
  piVar4 = *(int **)(*plVar5 + 0xc0);
  iVar1 = *piVar4;
  plVar5 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101be1e48;
                    /* WARNING: Could not recover jumptable at 0x000101be1e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(1,1,0,0xc000000000000000,unaff_x22 + 0x10);
  return;
}



/* Entry: 101be1e48; end: 101be1f23;  */

void FUN_101be1e48(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xd0));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar4 + 200);
    uVar2 = *(undefined8 *)(lVar4 + 0xa0);
    func_0x00010006c090(param_1,param_2);
    func_0x000101be2878(lVar4 + 0x10,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar3);
    func_0x0001000834e4(lVar4 + 0x70);
    pcVar1 = FUN_101be1f24;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 200);
    uVar2 = *(undefined8 *)(lVar4 + 0xa0);
    func_0x000101be2878(lVar4 + 0x10,0x112d39250,&UNK_10d9d84e0);
    func_0x000107c61574(uVar3);
    pcVar1 = FUN_101be2204;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,0);
  return;
}



/* Entry: 101be1f24; end: 101be2203;  */

void FUN_101be1f24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar4 = *(long *)(unaff_x22 + 0xb0);
  bVar5 = *(byte *)(unaff_x22 + 0xe0);
  func_0x000107c5eea0(uVar3);
  func_0x000107c5ee68(uVar8);
  pcVar10 = *(code **)(lVar4 + 8);
  (*pcVar10)(uVar3,uVar6);
  uVar3 = 0x800000010f003040;
  uVar6 = 0xd000000000000011;
  if (bVar5 != 6) {
    uVar3 = 0xec00000064656566;
    uVar6 = 0x5f73646e65697266;
  }
  uVar8 = 0xef6369706f745f74;
  uVar1 = 0x6867696c746f7073;
  if (bVar5 != 4) {
    uVar8 = 0xee0073676e697474;
    uVar1 = 0x65735f636973756d;
  }
  if (bVar5 < 6) {
    uVar3 = uVar8;
    uVar6 = uVar1;
  }
  uVar8 = 0x656c69666f7270;
  if (bVar5 != 2) {
    uVar8 = 0x70616d;
  }
  uVar1 = 0xe700000000000000;
  if (bVar5 != 2) {
    uVar1 = 0xe300000000000000;
  }
  uVar2 = 0x6e776f6e6b6e75;
  if (bVar5 != 0) {
    uVar2 = 0x68747561;
  }
  uVar9 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar9 = 0xe400000000000000;
  }
  if (bVar5 < 2) {
    uVar1 = uVar9;
    uVar8 = uVar2;
  }
  if (bVar5 < 4) {
    uVar3 = uVar1;
    uVar6 = uVar8;
  }
  uVar8 = uVar3;
  FUN_101c25950(uVar6,uVar3,9);
  func_0x000107c6142c(uVar3);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar2 = uRam0000000112e08430;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar9 = uVar6;
  func_0x000107c5fadc(uVar6,uVar8);
  uVar12 = 0x796669746f7073;
  uVar7 = uVar12;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar2,uVar9,uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c5fadc(uVar6,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar8 = 0;
  uVar9 = 0;
  FUN_101c25b6c(0,0);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar9);
  func_0x000105728688(uVar2,uVar6,uVar12,uVar8,1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  (*pcVar10)(uVar1,uVar11);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101be21e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be2204; end: 101be250b;  */

void FUN_101be2204(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  bVar4 = *(byte *)(unaff_x22 + 0xe0);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x0001000834e4(unaff_x22 + 0x70);
  func_0x000107c614b0(uVar10);
  func_0x000107c5eea0(uVar2);
  func_0x000107c5ee68(uVar7);
  pcVar9 = *(code **)(lVar3 + 8);
  (*pcVar9)(uVar2,uVar5);
  uVar2 = 0x800000010f003040;
  uVar5 = 0xd000000000000011;
  if (bVar4 != 6) {
    uVar2 = 0xec00000064656566;
    uVar5 = 0x5f73646e65697266;
  }
  uVar7 = 0xef6369706f745f74;
  uVar10 = 0x6867696c746f7073;
  if (bVar4 != 4) {
    uVar7 = 0xee0073676e697474;
    uVar10 = 0x65735f636973756d;
  }
  if (bVar4 < 6) {
    uVar2 = uVar7;
    uVar5 = uVar10;
  }
  uVar7 = 0x656c69666f7270;
  if (bVar4 != 2) {
    uVar7 = 0x70616d;
  }
  uVar10 = 0xe700000000000000;
  if (bVar4 != 2) {
    uVar10 = 0xe300000000000000;
  }
  uVar1 = 0x6e776f6e6b6e75;
  if (bVar4 != 0) {
    uVar1 = 0x68747561;
  }
  uVar8 = 0xe700000000000000;
  if (bVar4 != 0) {
    uVar8 = 0xe400000000000000;
  }
  if (bVar4 < 2) {
    uVar10 = uVar8;
    uVar7 = uVar1;
  }
  if (bVar4 < 4) {
    uVar2 = uVar10;
    uVar5 = uVar7;
  }
  uVar7 = uVar2;
  FUN_101c25950(uVar5,uVar2,9);
  func_0x000107c6142c(uVar2);
  if (lRam0000000112e08428 != -1) {
    func_0x000107c61568(0x112e08428,0x101bd927c);
  }
  uVar1 = uRam0000000112e08430;
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar8 = uVar5;
  func_0x000107c5fadc(uVar5,uVar7);
  uVar13 = 0x796669746f7073;
  uVar6 = uVar13;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728418(param_1,uVar1,uVar8,uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c5fadc(uVar5,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  uVar7 = 0;
  uVar8 = 1;
  FUN_101c25b6c(0,1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar8);
  func_0x000105728688(uVar1,uVar5,uVar13,uVar7,1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c614ac(uVar11);
  func_0x000107c61654();
  (*pcVar9)(uVar10,uVar12);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101be24f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101be250c; end: 101be2543;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101be250c(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 101be2544; end: 101be2583;  */

void FUN_101be2544(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e08448 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dcf68;
  func_0x000107c61520(&UNK_10d9dcf68,&UNK_1104540c0);
  puRam0000000112e08448 = puVar1;
  return;
}



/* Entry: 101be2584; end: 101be2593;  */

undefined1  [16] FUN_101be2584(void)

{
  return ZEXT816(0x110454030);
}



/* Entry: 101be2594; end: 101be25b3;  */

void FUN_101be2594(void)

{
  func_0x000107c61168(&PTR_PTR_112e08490);
  return;
}



/* Entry: 101be25b4; end: 101be271f;  */

int FUN_101be25b4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101be2630;
        goto LAB_101be2614;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101be2614:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101be2630:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101be2720; end: 101be275f;  */

void FUN_101be2720(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e085c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dcf40;
  func_0x000107c61520(&UNK_10d9dcf40,&UNK_1104540c0);
  puRam0000000112e085c0 = puVar1;
  return;
}



/* Entry: 101be2760; end: 101be27fb;  */

undefined8 FUN_101be2760(undefined8 param_1)

{
  FUN_101c3bacc();
  return param_1;
}



/* Entry: 101be27fc; end: 101be283b;  */

void FUN_101be27fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e085d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc46500;
  func_0x000107c61520(&UNK_10dc46500,&UNK_1106c6770);
  puRam0000000112e085d0 = puVar1;
  return;
}



/* Entry: 101be283c; end: 101be28ff;  */

undefined8 FUN_101be283c(undefined8 param_1,undefined8 param_2)

{
  FUN_101c3c330(param_2,param_1);
  return param_2;
}



/* Entry: 101be2900; end: 101be297f;  */

void FUN_101be2900(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e085e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dd0d8;
  func_0x000107c61520(&UNK_10d9dd0d8,&UNK_1104541b8);
  puRam0000000112e085e8 = puVar1;
  return;
}



/* Entry: 101be2980; end: 101be29db;  */

int FUN_101be2980(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101be29dc; end: 101be2a57;  */

long FUN_101be29dc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101be2a58; end: 101be2b0f;  */

undefined8 * FUN_101be2a58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar7 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar7;
  uVar7 = param_2[8];
  uVar3 = param_2[9];
  param_1[8] = uVar7;
  param_1[9] = uVar3;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  uVar5 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar5;
  uVar4 = param_2[0xf];
  uVar6 = param_2[0x10];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  func_0x00010006c00c(uVar4,uVar6);
  param_1[0xf] = uVar4;
  param_1[0x10] = uVar6;
  return param_1;
}



/* Entry: 101be2b10; end: 101be2c2f;  */

undefined8 * FUN_101be2b10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[4] = param_2[4];
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  uVar4 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[9] = param_2[9];
  uVar4 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xb] = uVar4;
  param_1[0xd] = param_2[0xd];
  uVar4 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[0xf];
  uVar2 = param_2[0x10];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[0xf];
  uVar3 = param_1[0x10];
  param_1[0xf] = uVar4;
  param_1[0x10] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}


